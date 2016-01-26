
local MainScene = class("MainScene", cc.load("mvc").ViewBase)
local NetTools = require("net.NetTools")
local net = GameNetDelegate:getInstance()

function MainScene:onCreate()
    -- add background image
    display.newSprite("HelloWorld.png")
        :move(display.center)
        :addTo(self)

    -- add HelloWorld label
    cc.Label:createWithSystemFont("Hello World", "Arial", 40)
        :move(display.cx, display.cy + 200)
        :addTo(self)

    local imageView = ccui.ImageView:create()
    imageView:loadTexture("HelloWorld.png")
    imageView:setPosition(cc.p(display.width / 2.0, display.height / 4.0))
    self:addChild(imageView)
    imageView:setTouchEnabled(true)
    imageView:addTouchEventListener(function( sender,eventType)
        if eventType == ccui.TouchEventType.ended then
            print("Touch me!!!")
            if self.status == "onConnected" then
				local t = {
					dwPlazaVersion = 131073,
					szAccounts = "test55" .. string.rep(" ",NAME_LEN),
					szPassWord = CGameTools:md5("ewq123") .. string.rep(" ",PASS_LEN),
				}
				local data,size = NetTools:pack(t, "CMD_GP_LogonByAccounts")
				net:sendDataLua(1, 1, data, size)
			else
				print(self.status)
			end
        end
    end)

    self:initNet()
end

function MainScene:initNet( ... )
	-- body
	self.status = nil
	net:registerScriptHandler("onReceived", function( main, sub, data )
		-- body
		print(main, sub, "Rec size is ", string.len(data))

		if main == 1 then
			if sub == 100 then
				print("Logon success")
			end
		elseif main == 2 then
			if sub == 100 then
				print("SUB_GP_LIST_TYPE")
			elseif sub == 101 then
				print("SUB_GP_LIST_KIND")
			elseif sub == 102 then
				print("SUB_GP_LIST_STATION")
			elseif sub == 103 then
				print("SUB_GP_LIST_SERVER")
				local str = require "protocol"
				local _,kindID,_,_,_,_,_,str = lib.unpack(str, data)
				print(kindID, CGameTools:gb2utf(str))
			elseif sub == 104 then
				print("SUB_GP_LIST_FINISH")
			end
		end
	end)

	net:registerScriptHandler("netStatus", function( event )
		-- body
		print("Net status is ", event)
		self.status = event
	end)

	net:connectByIpPort(Const.serverIP, Const.serverPort)
end

return MainScene

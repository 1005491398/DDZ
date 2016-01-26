
cc.FileUtils:getInstance():setPopupNotify(false)
cc.FileUtils:getInstance():addSearchPath("src/")
cc.FileUtils:getInstance():addSearchPath("res/")

require "config"
require "cocos.init"
require "common.Const"
require "protocol.init"
local lib = require "struct"

-- #define MDM_GP_SERVER_LIST				2								//列表信息

-- #define SUB_GP_LIST_TYPE				100								//类型列表
-- #define SUB_GP_LIST_KIND				101								//种类列表
-- #define SUB_GP_LIST_STATION				102								//站点列表
-- #define SUB_GP_LIST_SERVER				103								//房间列表
-- #define SUB_GP_LIST_FINISH				104								//发送完成
-- #define SUB_GP_LIST_CONFIG				105								//列表配置

local function getSize( str )
	-- body
	local len = require("struct").size(str)
	return len%4==0 and len or len+4-len%4
end

local status

local function main()

	print("INININ")
	require("app.MyApp"):create():run()
end

local status, msg = xpcall(main, __G__TRACKBACK__)
if not status then
    print(msg)
end

local function testLua( ... )
	-- body
	local str = lib.pack("<!4icc", 10010, 'x', 'y')
	print(lib.size("!4icc"))
	print(string.len(str))
	test_lua(str)
end

cc.exports.struct_test_d = function( a )
	-- body
	print(string.len(a))
	print("OKOKOKOKO")
	print(lib.unpack("!4icc", a))
	test_lua(a)
	testLua()
end
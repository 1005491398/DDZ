local NetTools = {}
local lib = require "struct"
local preFix = "!"..Const.align

local switch = {
	BYTE = "B",
	WORD = "H",
	DWORD = "I",
	LONG = "l",
	WCHAR = "H",
	CHAR = "B",
	TCHAR = "B",
	UCHAR = "B",
}

function NetTools:init( ... )
	-- body
	self.formatCache = {}
end

function NetTools:structSize( str )
	-- body
	local align = Const.align
	local len = require("struct").size(str)
	return len%align==0 and len or len+align-len%align
end

function NetTools:getFormatStr( structID )
	-- body
	local id = structID or "tagGameServer"
	local struct = Protocol[structID]
	local str = preFix
	if self.formatCache[id] then
		str = self.formatCache[id]
	else
		for k,v in pairs(struct) do
			if v[3] then
				str = string.format("%s%s",str,"c"..v[3])
			else
				str = string.format("%s%s",str,switch[v[1]])
			end
		end
		self.formatCache[id] = str		
	end
	print("Format str is ", str)
	return str
end

function NetTools:unpack( data, structID )
	-- body
	local struct = Protocol[structID]
	local str = self:getFormatStr(structID)
	local t = {}
	for i,v in ipairs({lib.pack(str, data)}) do
		t[struct[i][2]] = v
	end
	return t	
end

function NetTools:pack( t, structID )
	-- body
	local struct = Protocol[structID]
	local str = self:getFormatStr(structID)
	local data = {}
	for i,v in ipairs(struct) do
		data[i] = t[v[2]]
	end
	return lib.pack(str, unpack(data)), self:structSize(str)
end

NetTools:init()
return NetTools
/*
** Lua binding: GlobDefTolua
** Generated automatically by tolua++-1.0.92 on Tue Sep 29 11:05:33 2015.
*/

/****************************************************************************
 Copyright (c) 2011 cocos2d-x.org

 http://www.cocos2d-x.org

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

extern "C" {
#include "tolua_fix.h"
}

#include <map>
#include <string>
#include "cocos2d.h"
#include "CCLuaEngine.h"
#include "SimpleAudioEngine.h"
#include "cocos-ext.h"
#include "toluabind.h"

using namespace cocos2d;
using namespace cocos2d::extension;
using namespace CocosDenshion;

/* Exported function */
TOLUA_API int  tolua_GlobDefTolua_open (lua_State* tolua_S);


/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_TRecvData (lua_State* tolua_S)
{
 TRecvData* self = (TRecvData*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_DWORD (lua_State* tolua_S)
{
 DWORD* self = (DWORD*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_TCHAR (lua_State* tolua_S)
{
 TCHAR* self = (TCHAR*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_BYTE (lua_State* tolua_S)
{
 BYTE* self = (BYTE*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_WCHAR (lua_State* tolua_S)
{
 WCHAR* self = (WCHAR*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"tagClientSerial");
 tolua_usertype(tolua_S,"IPC_Head");
 tolua_usertype(tolua_S,"tagUserData");
 tolua_usertype(tolua_S,"WORD");
 tolua_usertype(tolua_S,"CMD_Info");
 tolua_usertype(tolua_S,"WCHAR");
 tolua_usertype(tolua_S,"LONG");
 tolua_usertype(tolua_S,"DWORD");
 tolua_usertype(tolua_S,"TCHAR");
 tolua_usertype(tolua_S,"tagGameType");
 tolua_usertype(tolua_S,"TRecvData");
 tolua_usertype(tolua_S,"CMD_Head");
 tolua_usertype(tolua_S,"tagGameStation");
 tolua_usertype(tolua_S,"tagUserInfoHead");
 tolua_usertype(tolua_S,"CMD_KN_DetectSocket");
 tolua_usertype(tolua_S,"BYTE");
 tolua_usertype(tolua_S,"tagOptionBuffer");
 tolua_usertype(tolua_S,"tagGameKind");
 tolua_usertype(tolua_S,"tagUserStatus");
 tolua_usertype(tolua_S,"tagUserScore");
 tolua_usertype(tolua_S,"tagLevelItem");
 tolua_usertype(tolua_S,"tagGameServer");
 tolua_usertype(tolua_S,"CMD_Command");
 tolua_usertype(tolua_S,"CMD_Buffer");
 tolua_usertype(tolua_S,"IPC_Buffer");
}

/* get function: m_wMainCmdID of class  TRecvData */
#ifndef TOLUA_DISABLE_tolua_get_TRecvData_m_wMainCmdID
static int tolua_get_TRecvData_m_wMainCmdID(lua_State* tolua_S)
{
  TRecvData* self = (TRecvData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_wMainCmdID'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->m_wMainCmdID,"WORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: m_wMainCmdID of class  TRecvData */
#ifndef TOLUA_DISABLE_tolua_set_TRecvData_m_wMainCmdID
static int tolua_set_TRecvData_m_wMainCmdID(lua_State* tolua_S)
{
  TRecvData* self = (TRecvData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_wMainCmdID'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"WORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->m_wMainCmdID = *((WORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: m_wSubCmdID of class  TRecvData */
#ifndef TOLUA_DISABLE_tolua_get_TRecvData_m_wSubCmdID
static int tolua_get_TRecvData_m_wSubCmdID(lua_State* tolua_S)
{
  TRecvData* self = (TRecvData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_wSubCmdID'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->m_wSubCmdID,"WORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: m_wSubCmdID of class  TRecvData */
#ifndef TOLUA_DISABLE_tolua_set_TRecvData_m_wSubCmdID
static int tolua_set_TRecvData_m_wSubCmdID(lua_State* tolua_S)
{
  TRecvData* self = (TRecvData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_wSubCmdID'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"WORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->m_wSubCmdID = *((WORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: m_data of class  TRecvData */
#ifndef TOLUA_DISABLE_tolua_get_GlobDefTolua_TRecvData_m_data
static int tolua_get_GlobDefTolua_TRecvData_m_data(lua_State* tolua_S)
{
 int tolua_index;
  TRecvData* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (TRecvData*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=SOCKET_BUFFER)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  tolua_pushusertype(tolua_S,(void*)&self->m_data[tolua_index],"BYTE");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: m_data of class  TRecvData */
#ifndef TOLUA_DISABLE_tolua_set_GlobDefTolua_TRecvData_m_data
static int tolua_set_GlobDefTolua_TRecvData_m_data(lua_State* tolua_S)
{
 int tolua_index;
  TRecvData* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (TRecvData*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=SOCKET_BUFFER)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  self->m_data[tolua_index] = *((BYTE*)  tolua_tousertype(tolua_S,3,0));
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: m_size of class  TRecvData */
#ifndef TOLUA_DISABLE_tolua_get_TRecvData_m_size
static int tolua_get_TRecvData_m_size(lua_State* tolua_S)
{
  TRecvData* self = (TRecvData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_size'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->m_size,"WORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: m_size of class  TRecvData */
#ifndef TOLUA_DISABLE_tolua_set_TRecvData_m_size
static int tolua_set_TRecvData_m_size(lua_State* tolua_S)
{
  TRecvData* self = (TRecvData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_size'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"WORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->m_size = *((WORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  TRecvData */
#ifndef TOLUA_DISABLE_tolua_GlobDefTolua_TRecvData_new00
static int tolua_GlobDefTolua_TRecvData_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"TRecvData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   TRecvData* tolua_ret = (TRecvData*)  Mtolua_new((TRecvData)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"TRecvData");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  TRecvData */
#ifndef TOLUA_DISABLE_tolua_GlobDefTolua_TRecvData_new00_local
static int tolua_GlobDefTolua_TRecvData_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"TRecvData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   TRecvData* tolua_ret = (TRecvData*)  Mtolua_new((TRecvData)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"TRecvData");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: cbVersion of class  CMD_Info */
#ifndef TOLUA_DISABLE_tolua_get_CMD_Info_cbVersion
static int tolua_get_CMD_Info_cbVersion(lua_State* tolua_S)
{
  CMD_Info* self = (CMD_Info*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'cbVersion'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->cbVersion,"BYTE");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: cbVersion of class  CMD_Info */
#ifndef TOLUA_DISABLE_tolua_set_CMD_Info_cbVersion
static int tolua_set_CMD_Info_cbVersion(lua_State* tolua_S)
{
  CMD_Info* self = (CMD_Info*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'cbVersion'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"BYTE",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->cbVersion = *((BYTE*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: cbCheckCode of class  CMD_Info */
#ifndef TOLUA_DISABLE_tolua_get_CMD_Info_cbCheckCode
static int tolua_get_CMD_Info_cbCheckCode(lua_State* tolua_S)
{
  CMD_Info* self = (CMD_Info*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'cbCheckCode'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->cbCheckCode,"BYTE");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: cbCheckCode of class  CMD_Info */
#ifndef TOLUA_DISABLE_tolua_set_CMD_Info_cbCheckCode
static int tolua_set_CMD_Info_cbCheckCode(lua_State* tolua_S)
{
  CMD_Info* self = (CMD_Info*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'cbCheckCode'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"BYTE",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->cbCheckCode = *((BYTE*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: wPacketSize of class  CMD_Info */
#ifndef TOLUA_DISABLE_tolua_get_CMD_Info_wPacketSize
static int tolua_get_CMD_Info_wPacketSize(lua_State* tolua_S)
{
  CMD_Info* self = (CMD_Info*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wPacketSize'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->wPacketSize,"WORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: wPacketSize of class  CMD_Info */
#ifndef TOLUA_DISABLE_tolua_set_CMD_Info_wPacketSize
static int tolua_set_CMD_Info_wPacketSize(lua_State* tolua_S)
{
  CMD_Info* self = (CMD_Info*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wPacketSize'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"WORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->wPacketSize = *((WORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: wMainCmdID of class  CMD_Command */
#ifndef TOLUA_DISABLE_tolua_get_CMD_Command_wMainCmdID
static int tolua_get_CMD_Command_wMainCmdID(lua_State* tolua_S)
{
  CMD_Command* self = (CMD_Command*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wMainCmdID'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->wMainCmdID,"WORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: wMainCmdID of class  CMD_Command */
#ifndef TOLUA_DISABLE_tolua_set_CMD_Command_wMainCmdID
static int tolua_set_CMD_Command_wMainCmdID(lua_State* tolua_S)
{
  CMD_Command* self = (CMD_Command*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wMainCmdID'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"WORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->wMainCmdID = *((WORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: wSubCmdID of class  CMD_Command */
#ifndef TOLUA_DISABLE_tolua_get_CMD_Command_wSubCmdID
static int tolua_get_CMD_Command_wSubCmdID(lua_State* tolua_S)
{
  CMD_Command* self = (CMD_Command*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wSubCmdID'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->wSubCmdID,"WORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: wSubCmdID of class  CMD_Command */
#ifndef TOLUA_DISABLE_tolua_set_CMD_Command_wSubCmdID
static int tolua_set_CMD_Command_wSubCmdID(lua_State* tolua_S)
{
  CMD_Command* self = (CMD_Command*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wSubCmdID'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"WORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->wSubCmdID = *((WORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: CmdInfo of class  CMD_Head */
#ifndef TOLUA_DISABLE_tolua_get_CMD_Head_CmdInfo
static int tolua_get_CMD_Head_CmdInfo(lua_State* tolua_S)
{
  CMD_Head* self = (CMD_Head*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'CmdInfo'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->CmdInfo,"CMD_Info");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: CmdInfo of class  CMD_Head */
#ifndef TOLUA_DISABLE_tolua_set_CMD_Head_CmdInfo
static int tolua_set_CMD_Head_CmdInfo(lua_State* tolua_S)
{
  CMD_Head* self = (CMD_Head*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'CmdInfo'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CMD_Info",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->CmdInfo = *((CMD_Info*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: CommandInfo of class  CMD_Head */
#ifndef TOLUA_DISABLE_tolua_get_CMD_Head_CommandInfo
static int tolua_get_CMD_Head_CommandInfo(lua_State* tolua_S)
{
  CMD_Head* self = (CMD_Head*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'CommandInfo'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->CommandInfo,"CMD_Command");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: CommandInfo of class  CMD_Head */
#ifndef TOLUA_DISABLE_tolua_set_CMD_Head_CommandInfo
static int tolua_set_CMD_Head_CommandInfo(lua_State* tolua_S)
{
  CMD_Head* self = (CMD_Head*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'CommandInfo'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CMD_Command",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->CommandInfo = *((CMD_Command*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Head of class  CMD_Buffer */
#ifndef TOLUA_DISABLE_tolua_get_CMD_Buffer_Head
static int tolua_get_CMD_Buffer_Head(lua_State* tolua_S)
{
  CMD_Buffer* self = (CMD_Buffer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Head'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->Head,"CMD_Head");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Head of class  CMD_Buffer */
#ifndef TOLUA_DISABLE_tolua_set_CMD_Buffer_Head
static int tolua_set_CMD_Buffer_Head(lua_State* tolua_S)
{
  CMD_Buffer* self = (CMD_Buffer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Head'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CMD_Head",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Head = *((CMD_Head*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: cbBuffer of class  CMD_Buffer */
#ifndef TOLUA_DISABLE_tolua_get_GlobDefTolua_CMD_Buffer_cbBuffer
static int tolua_get_GlobDefTolua_CMD_Buffer_cbBuffer(lua_State* tolua_S)
{
 int tolua_index;
  CMD_Buffer* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (CMD_Buffer*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=SOCKET_PACKET)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  tolua_pushusertype(tolua_S,(void*)&self->cbBuffer[tolua_index],"BYTE");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: cbBuffer of class  CMD_Buffer */
#ifndef TOLUA_DISABLE_tolua_set_GlobDefTolua_CMD_Buffer_cbBuffer
static int tolua_set_GlobDefTolua_CMD_Buffer_cbBuffer(lua_State* tolua_S)
{
 int tolua_index;
  CMD_Buffer* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (CMD_Buffer*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=SOCKET_PACKET)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  self->cbBuffer[tolua_index] = *((BYTE*)  tolua_tousertype(tolua_S,3,0));
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: dwSendTickCount of class  CMD_KN_DetectSocket */
#ifndef TOLUA_DISABLE_tolua_get_CMD_KN_DetectSocket_dwSendTickCount
static int tolua_get_CMD_KN_DetectSocket_dwSendTickCount(lua_State* tolua_S)
{
  CMD_KN_DetectSocket* self = (CMD_KN_DetectSocket*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dwSendTickCount'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->dwSendTickCount,"DWORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: dwSendTickCount of class  CMD_KN_DetectSocket */
#ifndef TOLUA_DISABLE_tolua_set_CMD_KN_DetectSocket_dwSendTickCount
static int tolua_set_CMD_KN_DetectSocket_dwSendTickCount(lua_State* tolua_S)
{
  CMD_KN_DetectSocket* self = (CMD_KN_DetectSocket*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dwSendTickCount'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"DWORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->dwSendTickCount = *((DWORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: dwRecvTickCount of class  CMD_KN_DetectSocket */
#ifndef TOLUA_DISABLE_tolua_get_CMD_KN_DetectSocket_dwRecvTickCount
static int tolua_get_CMD_KN_DetectSocket_dwRecvTickCount(lua_State* tolua_S)
{
  CMD_KN_DetectSocket* self = (CMD_KN_DetectSocket*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dwRecvTickCount'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->dwRecvTickCount,"DWORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: dwRecvTickCount of class  CMD_KN_DetectSocket */
#ifndef TOLUA_DISABLE_tolua_set_CMD_KN_DetectSocket_dwRecvTickCount
static int tolua_set_CMD_KN_DetectSocket_dwRecvTickCount(lua_State* tolua_S)
{
  CMD_KN_DetectSocket* self = (CMD_KN_DetectSocket*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dwRecvTickCount'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"DWORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->dwRecvTickCount = *((DWORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: wVersion of class  IPC_Head */
#ifndef TOLUA_DISABLE_tolua_get_IPC_Head_wVersion
static int tolua_get_IPC_Head_wVersion(lua_State* tolua_S)
{
  IPC_Head* self = (IPC_Head*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wVersion'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->wVersion,"WORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: wVersion of class  IPC_Head */
#ifndef TOLUA_DISABLE_tolua_set_IPC_Head_wVersion
static int tolua_set_IPC_Head_wVersion(lua_State* tolua_S)
{
  IPC_Head* self = (IPC_Head*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wVersion'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"WORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->wVersion = *((WORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: wDataSize of class  IPC_Head */
#ifndef TOLUA_DISABLE_tolua_get_IPC_Head_wDataSize
static int tolua_get_IPC_Head_wDataSize(lua_State* tolua_S)
{
  IPC_Head* self = (IPC_Head*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wDataSize'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->wDataSize,"WORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: wDataSize of class  IPC_Head */
#ifndef TOLUA_DISABLE_tolua_set_IPC_Head_wDataSize
static int tolua_set_IPC_Head_wDataSize(lua_State* tolua_S)
{
  IPC_Head* self = (IPC_Head*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wDataSize'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"WORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->wDataSize = *((WORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: wMainCmdID of class  IPC_Head */
#ifndef TOLUA_DISABLE_tolua_get_IPC_Head_wMainCmdID
static int tolua_get_IPC_Head_wMainCmdID(lua_State* tolua_S)
{
  IPC_Head* self = (IPC_Head*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wMainCmdID'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->wMainCmdID,"WORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: wMainCmdID of class  IPC_Head */
#ifndef TOLUA_DISABLE_tolua_set_IPC_Head_wMainCmdID
static int tolua_set_IPC_Head_wMainCmdID(lua_State* tolua_S)
{
  IPC_Head* self = (IPC_Head*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wMainCmdID'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"WORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->wMainCmdID = *((WORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: wSubCmdID of class  IPC_Head */
#ifndef TOLUA_DISABLE_tolua_get_IPC_Head_wSubCmdID
static int tolua_get_IPC_Head_wSubCmdID(lua_State* tolua_S)
{
  IPC_Head* self = (IPC_Head*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wSubCmdID'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->wSubCmdID,"WORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: wSubCmdID of class  IPC_Head */
#ifndef TOLUA_DISABLE_tolua_set_IPC_Head_wSubCmdID
static int tolua_set_IPC_Head_wSubCmdID(lua_State* tolua_S)
{
  IPC_Head* self = (IPC_Head*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wSubCmdID'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"WORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->wSubCmdID = *((WORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Head of class  IPC_Buffer */
#ifndef TOLUA_DISABLE_tolua_get_IPC_Buffer_Head
static int tolua_get_IPC_Buffer_Head(lua_State* tolua_S)
{
  IPC_Buffer* self = (IPC_Buffer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Head'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->Head,"IPC_Head");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Head of class  IPC_Buffer */
#ifndef TOLUA_DISABLE_tolua_set_IPC_Buffer_Head
static int tolua_set_IPC_Buffer_Head(lua_State* tolua_S)
{
  IPC_Buffer* self = (IPC_Buffer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Head'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"IPC_Head",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Head = *((IPC_Head*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: cbBuffer of class  IPC_Buffer */
#ifndef TOLUA_DISABLE_tolua_get_GlobDefTolua_IPC_Buffer_cbBuffer
static int tolua_get_GlobDefTolua_IPC_Buffer_cbBuffer(lua_State* tolua_S)
{
 int tolua_index;
  IPC_Buffer* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (IPC_Buffer*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=IPC_PACKAGE)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  tolua_pushusertype(tolua_S,(void*)&self->cbBuffer[tolua_index],"BYTE");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: cbBuffer of class  IPC_Buffer */
#ifndef TOLUA_DISABLE_tolua_set_GlobDefTolua_IPC_Buffer_cbBuffer
static int tolua_set_GlobDefTolua_IPC_Buffer_cbBuffer(lua_State* tolua_S)
{
 int tolua_index;
  IPC_Buffer* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (IPC_Buffer*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=IPC_PACKAGE)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  self->cbBuffer[tolua_index] = *((BYTE*)  tolua_tousertype(tolua_S,3,0));
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: wSortID of class  tagGameType */
#ifndef TOLUA_DISABLE_tolua_get_tagGameType_wSortID
static int tolua_get_tagGameType_wSortID(lua_State* tolua_S)
{
  tagGameType* self = (tagGameType*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wSortID'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->wSortID,"WORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: wSortID of class  tagGameType */
#ifndef TOLUA_DISABLE_tolua_set_tagGameType_wSortID
static int tolua_set_tagGameType_wSortID(lua_State* tolua_S)
{
  tagGameType* self = (tagGameType*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wSortID'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"WORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->wSortID = *((WORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: wTypeID of class  tagGameType */
#ifndef TOLUA_DISABLE_tolua_get_tagGameType_wTypeID
static int tolua_get_tagGameType_wTypeID(lua_State* tolua_S)
{
  tagGameType* self = (tagGameType*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wTypeID'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->wTypeID,"WORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: wTypeID of class  tagGameType */
#ifndef TOLUA_DISABLE_tolua_set_tagGameType_wTypeID
static int tolua_set_tagGameType_wTypeID(lua_State* tolua_S)
{
  tagGameType* self = (tagGameType*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wTypeID'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"WORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->wTypeID = *((WORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: szTypeName of class  tagGameType */
#ifndef TOLUA_DISABLE_tolua_get_GlobDefTolua_tagGameType_szTypeName
static int tolua_get_GlobDefTolua_tagGameType_szTypeName(lua_State* tolua_S)
{
 int tolua_index;
  tagGameType* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (tagGameType*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=TYPE_LEN)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  tolua_pushusertype(tolua_S,(void*)&self->szTypeName[tolua_index],"TCHAR");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: szTypeName of class  tagGameType */
#ifndef TOLUA_DISABLE_tolua_set_GlobDefTolua_tagGameType_szTypeName
static int tolua_set_GlobDefTolua_tagGameType_szTypeName(lua_State* tolua_S)
{
 int tolua_index;
  tagGameType* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (tagGameType*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=TYPE_LEN)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  self->szTypeName[tolua_index] = *((TCHAR*)  tolua_tousertype(tolua_S,3,0));
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: wSortID of class  tagGameKind */
#ifndef TOLUA_DISABLE_tolua_get_tagGameKind_wSortID
static int tolua_get_tagGameKind_wSortID(lua_State* tolua_S)
{
  tagGameKind* self = (tagGameKind*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wSortID'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->wSortID,"WORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: wSortID of class  tagGameKind */
#ifndef TOLUA_DISABLE_tolua_set_tagGameKind_wSortID
static int tolua_set_tagGameKind_wSortID(lua_State* tolua_S)
{
  tagGameKind* self = (tagGameKind*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wSortID'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"WORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->wSortID = *((WORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: wTypeID of class  tagGameKind */
#ifndef TOLUA_DISABLE_tolua_get_tagGameKind_wTypeID
static int tolua_get_tagGameKind_wTypeID(lua_State* tolua_S)
{
  tagGameKind* self = (tagGameKind*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wTypeID'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->wTypeID,"WORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: wTypeID of class  tagGameKind */
#ifndef TOLUA_DISABLE_tolua_set_tagGameKind_wTypeID
static int tolua_set_tagGameKind_wTypeID(lua_State* tolua_S)
{
  tagGameKind* self = (tagGameKind*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wTypeID'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"WORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->wTypeID = *((WORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: wKindID of class  tagGameKind */
#ifndef TOLUA_DISABLE_tolua_get_tagGameKind_wKindID
static int tolua_get_tagGameKind_wKindID(lua_State* tolua_S)
{
  tagGameKind* self = (tagGameKind*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wKindID'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->wKindID,"WORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: wKindID of class  tagGameKind */
#ifndef TOLUA_DISABLE_tolua_set_tagGameKind_wKindID
static int tolua_set_tagGameKind_wKindID(lua_State* tolua_S)
{
  tagGameKind* self = (tagGameKind*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wKindID'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"WORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->wKindID = *((WORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: dwMaxVersion of class  tagGameKind */
#ifndef TOLUA_DISABLE_tolua_get_tagGameKind_dwMaxVersion
static int tolua_get_tagGameKind_dwMaxVersion(lua_State* tolua_S)
{
  tagGameKind* self = (tagGameKind*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dwMaxVersion'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->dwMaxVersion,"DWORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: dwMaxVersion of class  tagGameKind */
#ifndef TOLUA_DISABLE_tolua_set_tagGameKind_dwMaxVersion
static int tolua_set_tagGameKind_dwMaxVersion(lua_State* tolua_S)
{
  tagGameKind* self = (tagGameKind*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dwMaxVersion'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"DWORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->dwMaxVersion = *((DWORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: dwOnLineCount of class  tagGameKind */
#ifndef TOLUA_DISABLE_tolua_get_tagGameKind_dwOnLineCount
static int tolua_get_tagGameKind_dwOnLineCount(lua_State* tolua_S)
{
  tagGameKind* self = (tagGameKind*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dwOnLineCount'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->dwOnLineCount,"DWORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: dwOnLineCount of class  tagGameKind */
#ifndef TOLUA_DISABLE_tolua_set_tagGameKind_dwOnLineCount
static int tolua_set_tagGameKind_dwOnLineCount(lua_State* tolua_S)
{
  tagGameKind* self = (tagGameKind*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dwOnLineCount'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"DWORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->dwOnLineCount = *((DWORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: szKindName of class  tagGameKind */
#ifndef TOLUA_DISABLE_tolua_get_GlobDefTolua_tagGameKind_szKindName
static int tolua_get_GlobDefTolua_tagGameKind_szKindName(lua_State* tolua_S)
{
 int tolua_index;
  tagGameKind* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (tagGameKind*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=KIND_LEN)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  tolua_pushusertype(tolua_S,(void*)&self->szKindName[tolua_index],"TCHAR");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: szKindName of class  tagGameKind */
#ifndef TOLUA_DISABLE_tolua_set_GlobDefTolua_tagGameKind_szKindName
static int tolua_set_GlobDefTolua_tagGameKind_szKindName(lua_State* tolua_S)
{
 int tolua_index;
  tagGameKind* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (tagGameKind*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=KIND_LEN)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  self->szKindName[tolua_index] = *((TCHAR*)  tolua_tousertype(tolua_S,3,0));
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: szProcessName of class  tagGameKind */
#ifndef TOLUA_DISABLE_tolua_get_GlobDefTolua_tagGameKind_szProcessName
static int tolua_get_GlobDefTolua_tagGameKind_szProcessName(lua_State* tolua_S)
{
 int tolua_index;
  tagGameKind* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (tagGameKind*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=MODULE_LEN)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  tolua_pushusertype(tolua_S,(void*)&self->szProcessName[tolua_index],"TCHAR");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: szProcessName of class  tagGameKind */
#ifndef TOLUA_DISABLE_tolua_set_GlobDefTolua_tagGameKind_szProcessName
static int tolua_set_GlobDefTolua_tagGameKind_szProcessName(lua_State* tolua_S)
{
 int tolua_index;
  tagGameKind* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (tagGameKind*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=MODULE_LEN)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  self->szProcessName[tolua_index] = *((TCHAR*)  tolua_tousertype(tolua_S,3,0));
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: wSortID of class  tagGameStation */
#ifndef TOLUA_DISABLE_tolua_get_tagGameStation_wSortID
static int tolua_get_tagGameStation_wSortID(lua_State* tolua_S)
{
  tagGameStation* self = (tagGameStation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wSortID'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->wSortID,"WORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: wSortID of class  tagGameStation */
#ifndef TOLUA_DISABLE_tolua_set_tagGameStation_wSortID
static int tolua_set_tagGameStation_wSortID(lua_State* tolua_S)
{
  tagGameStation* self = (tagGameStation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wSortID'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"WORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->wSortID = *((WORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: wKindID of class  tagGameStation */
#ifndef TOLUA_DISABLE_tolua_get_tagGameStation_wKindID
static int tolua_get_tagGameStation_wKindID(lua_State* tolua_S)
{
  tagGameStation* self = (tagGameStation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wKindID'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->wKindID,"WORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: wKindID of class  tagGameStation */
#ifndef TOLUA_DISABLE_tolua_set_tagGameStation_wKindID
static int tolua_set_tagGameStation_wKindID(lua_State* tolua_S)
{
  tagGameStation* self = (tagGameStation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wKindID'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"WORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->wKindID = *((WORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: wJoinID of class  tagGameStation */
#ifndef TOLUA_DISABLE_tolua_get_tagGameStation_wJoinID
static int tolua_get_tagGameStation_wJoinID(lua_State* tolua_S)
{
  tagGameStation* self = (tagGameStation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wJoinID'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->wJoinID,"WORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: wJoinID of class  tagGameStation */
#ifndef TOLUA_DISABLE_tolua_set_tagGameStation_wJoinID
static int tolua_set_tagGameStation_wJoinID(lua_State* tolua_S)
{
  tagGameStation* self = (tagGameStation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wJoinID'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"WORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->wJoinID = *((WORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: wStationID of class  tagGameStation */
#ifndef TOLUA_DISABLE_tolua_get_tagGameStation_wStationID
static int tolua_get_tagGameStation_wStationID(lua_State* tolua_S)
{
  tagGameStation* self = (tagGameStation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wStationID'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->wStationID,"WORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: wStationID of class  tagGameStation */
#ifndef TOLUA_DISABLE_tolua_set_tagGameStation_wStationID
static int tolua_set_tagGameStation_wStationID(lua_State* tolua_S)
{
  tagGameStation* self = (tagGameStation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wStationID'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"WORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->wStationID = *((WORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: szStationName of class  tagGameStation */
#ifndef TOLUA_DISABLE_tolua_get_GlobDefTolua_tagGameStation_szStationName
static int tolua_get_GlobDefTolua_tagGameStation_szStationName(lua_State* tolua_S)
{
 int tolua_index;
  tagGameStation* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (tagGameStation*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=STATION_LEN)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  tolua_pushusertype(tolua_S,(void*)&self->szStationName[tolua_index],"TCHAR");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: szStationName of class  tagGameStation */
#ifndef TOLUA_DISABLE_tolua_set_GlobDefTolua_tagGameStation_szStationName
static int tolua_set_GlobDefTolua_tagGameStation_szStationName(lua_State* tolua_S)
{
 int tolua_index;
  tagGameStation* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (tagGameStation*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=STATION_LEN)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  self->szStationName[tolua_index] = *((TCHAR*)  tolua_tousertype(tolua_S,3,0));
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: wSortID of class  tagGameServer */
#ifndef TOLUA_DISABLE_tolua_get_tagGameServer_wSortID
static int tolua_get_tagGameServer_wSortID(lua_State* tolua_S)
{
  tagGameServer* self = (tagGameServer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wSortID'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->wSortID,"WORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: wSortID of class  tagGameServer */
#ifndef TOLUA_DISABLE_tolua_set_tagGameServer_wSortID
static int tolua_set_tagGameServer_wSortID(lua_State* tolua_S)
{
  tagGameServer* self = (tagGameServer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wSortID'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"WORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->wSortID = *((WORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: wKindID of class  tagGameServer */
#ifndef TOLUA_DISABLE_tolua_get_tagGameServer_wKindID
static int tolua_get_tagGameServer_wKindID(lua_State* tolua_S)
{
  tagGameServer* self = (tagGameServer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wKindID'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->wKindID,"WORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: wKindID of class  tagGameServer */
#ifndef TOLUA_DISABLE_tolua_set_tagGameServer_wKindID
static int tolua_set_tagGameServer_wKindID(lua_State* tolua_S)
{
  tagGameServer* self = (tagGameServer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wKindID'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"WORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->wKindID = *((WORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: wServerID of class  tagGameServer */
#ifndef TOLUA_DISABLE_tolua_get_tagGameServer_wServerID
static int tolua_get_tagGameServer_wServerID(lua_State* tolua_S)
{
  tagGameServer* self = (tagGameServer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wServerID'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->wServerID,"WORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: wServerID of class  tagGameServer */
#ifndef TOLUA_DISABLE_tolua_set_tagGameServer_wServerID
static int tolua_set_tagGameServer_wServerID(lua_State* tolua_S)
{
  tagGameServer* self = (tagGameServer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wServerID'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"WORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->wServerID = *((WORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: wStationID of class  tagGameServer */
#ifndef TOLUA_DISABLE_tolua_get_tagGameServer_wStationID
static int tolua_get_tagGameServer_wStationID(lua_State* tolua_S)
{
  tagGameServer* self = (tagGameServer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wStationID'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->wStationID,"WORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: wStationID of class  tagGameServer */
#ifndef TOLUA_DISABLE_tolua_set_tagGameServer_wStationID
static int tolua_set_tagGameServer_wStationID(lua_State* tolua_S)
{
  tagGameServer* self = (tagGameServer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wStationID'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"WORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->wStationID = *((WORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: wServerPort of class  tagGameServer */
#ifndef TOLUA_DISABLE_tolua_get_tagGameServer_wServerPort
static int tolua_get_tagGameServer_wServerPort(lua_State* tolua_S)
{
  tagGameServer* self = (tagGameServer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wServerPort'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->wServerPort,"WORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: wServerPort of class  tagGameServer */
#ifndef TOLUA_DISABLE_tolua_set_tagGameServer_wServerPort
static int tolua_set_tagGameServer_wServerPort(lua_State* tolua_S)
{
  tagGameServer* self = (tagGameServer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wServerPort'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"WORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->wServerPort = *((WORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: dwServerAddr of class  tagGameServer */
#ifndef TOLUA_DISABLE_tolua_get_tagGameServer_dwServerAddr
static int tolua_get_tagGameServer_dwServerAddr(lua_State* tolua_S)
{
  tagGameServer* self = (tagGameServer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dwServerAddr'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->dwServerAddr,"DWORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: dwServerAddr of class  tagGameServer */
#ifndef TOLUA_DISABLE_tolua_set_tagGameServer_dwServerAddr
static int tolua_set_tagGameServer_dwServerAddr(lua_State* tolua_S)
{
  tagGameServer* self = (tagGameServer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dwServerAddr'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"DWORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->dwServerAddr = *((DWORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: dwOnLineCount of class  tagGameServer */
#ifndef TOLUA_DISABLE_tolua_get_tagGameServer_dwOnLineCount
static int tolua_get_tagGameServer_dwOnLineCount(lua_State* tolua_S)
{
  tagGameServer* self = (tagGameServer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dwOnLineCount'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->dwOnLineCount,"DWORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: dwOnLineCount of class  tagGameServer */
#ifndef TOLUA_DISABLE_tolua_set_tagGameServer_dwOnLineCount
static int tolua_set_tagGameServer_dwOnLineCount(lua_State* tolua_S)
{
  tagGameServer* self = (tagGameServer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dwOnLineCount'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"DWORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->dwOnLineCount = *((DWORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: szServerName of class  tagGameServer */
#ifndef TOLUA_DISABLE_tolua_get_GlobDefTolua_tagGameServer_szServerName
static int tolua_get_GlobDefTolua_tagGameServer_szServerName(lua_State* tolua_S)
{
 int tolua_index;
  tagGameServer* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (tagGameServer*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=SERVER_LEN)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  tolua_pushusertype(tolua_S,(void*)&self->szServerName[tolua_index],"TCHAR");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: szServerName of class  tagGameServer */
#ifndef TOLUA_DISABLE_tolua_set_GlobDefTolua_tagGameServer_szServerName
static int tolua_set_GlobDefTolua_tagGameServer_szServerName(lua_State* tolua_S)
{
 int tolua_index;
  tagGameServer* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (tagGameServer*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=SERVER_LEN)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  self->szServerName[tolua_index] = *((TCHAR*)  tolua_tousertype(tolua_S,3,0));
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: lLevelScore of class  tagLevelItem */
#ifndef TOLUA_DISABLE_tolua_get_tagLevelItem_lLevelScore
static int tolua_get_tagLevelItem_lLevelScore(lua_State* tolua_S)
{
  tagLevelItem* self = (tagLevelItem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lLevelScore'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->lLevelScore,"LONG");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: lLevelScore of class  tagLevelItem */
#ifndef TOLUA_DISABLE_tolua_set_tagLevelItem_lLevelScore
static int tolua_set_tagLevelItem_lLevelScore(lua_State* tolua_S)
{
  tagLevelItem* self = (tagLevelItem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lLevelScore'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"LONG",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->lLevelScore = *((LONG*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: szLevelName of class  tagLevelItem */
#ifndef TOLUA_DISABLE_tolua_get_GlobDefTolua_tagLevelItem_szLevelName
static int tolua_get_GlobDefTolua_tagLevelItem_szLevelName(lua_State* tolua_S)
{
 int tolua_index;
  tagLevelItem* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (tagLevelItem*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=16)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  tolua_pushusertype(tolua_S,(void*)&self->szLevelName[tolua_index],"WCHAR");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: szLevelName of class  tagLevelItem */
#ifndef TOLUA_DISABLE_tolua_set_GlobDefTolua_tagLevelItem_szLevelName
static int tolua_set_GlobDefTolua_tagLevelItem_szLevelName(lua_State* tolua_S)
{
 int tolua_index;
  tagLevelItem* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (tagLevelItem*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=16)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  self->szLevelName[tolua_index] = *((WCHAR*)  tolua_tousertype(tolua_S,3,0));
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: lScore of class  tagUserScore */
#ifndef TOLUA_DISABLE_tolua_get_tagUserScore_lScore
static int tolua_get_tagUserScore_lScore(lua_State* tolua_S)
{
  tagUserScore* self = (tagUserScore*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lScore'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->lScore,"LONG");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: lScore of class  tagUserScore */
#ifndef TOLUA_DISABLE_tolua_set_tagUserScore_lScore
static int tolua_set_tagUserScore_lScore(lua_State* tolua_S)
{
  tagUserScore* self = (tagUserScore*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lScore'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"LONG",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->lScore = *((LONG*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: lGameGold of class  tagUserScore */
#ifndef TOLUA_DISABLE_tolua_get_tagUserScore_lGameGold
static int tolua_get_tagUserScore_lGameGold(lua_State* tolua_S)
{
  tagUserScore* self = (tagUserScore*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lGameGold'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->lGameGold,"LONG");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: lGameGold of class  tagUserScore */
#ifndef TOLUA_DISABLE_tolua_set_tagUserScore_lGameGold
static int tolua_set_tagUserScore_lGameGold(lua_State* tolua_S)
{
  tagUserScore* self = (tagUserScore*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lGameGold'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"LONG",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->lGameGold = *((LONG*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: lInsureScore of class  tagUserScore */
#ifndef TOLUA_DISABLE_tolua_get_tagUserScore_lInsureScore
static int tolua_get_tagUserScore_lInsureScore(lua_State* tolua_S)
{
  tagUserScore* self = (tagUserScore*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lInsureScore'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->lInsureScore,"LONG");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: lInsureScore of class  tagUserScore */
#ifndef TOLUA_DISABLE_tolua_set_tagUserScore_lInsureScore
static int tolua_set_tagUserScore_lInsureScore(lua_State* tolua_S)
{
  tagUserScore* self = (tagUserScore*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lInsureScore'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"LONG",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->lInsureScore = *((LONG*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: lWinCount of class  tagUserScore */
#ifndef TOLUA_DISABLE_tolua_get_tagUserScore_lWinCount
static int tolua_get_tagUserScore_lWinCount(lua_State* tolua_S)
{
  tagUserScore* self = (tagUserScore*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lWinCount'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->lWinCount,"LONG");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: lWinCount of class  tagUserScore */
#ifndef TOLUA_DISABLE_tolua_set_tagUserScore_lWinCount
static int tolua_set_tagUserScore_lWinCount(lua_State* tolua_S)
{
  tagUserScore* self = (tagUserScore*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lWinCount'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"LONG",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->lWinCount = *((LONG*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: lLostCount of class  tagUserScore */
#ifndef TOLUA_DISABLE_tolua_get_tagUserScore_lLostCount
static int tolua_get_tagUserScore_lLostCount(lua_State* tolua_S)
{
  tagUserScore* self = (tagUserScore*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lLostCount'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->lLostCount,"LONG");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: lLostCount of class  tagUserScore */
#ifndef TOLUA_DISABLE_tolua_set_tagUserScore_lLostCount
static int tolua_set_tagUserScore_lLostCount(lua_State* tolua_S)
{
  tagUserScore* self = (tagUserScore*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lLostCount'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"LONG",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->lLostCount = *((LONG*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: lDrawCount of class  tagUserScore */
#ifndef TOLUA_DISABLE_tolua_get_tagUserScore_lDrawCount
static int tolua_get_tagUserScore_lDrawCount(lua_State* tolua_S)
{
  tagUserScore* self = (tagUserScore*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lDrawCount'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->lDrawCount,"LONG");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: lDrawCount of class  tagUserScore */
#ifndef TOLUA_DISABLE_tolua_set_tagUserScore_lDrawCount
static int tolua_set_tagUserScore_lDrawCount(lua_State* tolua_S)
{
  tagUserScore* self = (tagUserScore*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lDrawCount'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"LONG",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->lDrawCount = *((LONG*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: lFleeCount of class  tagUserScore */
#ifndef TOLUA_DISABLE_tolua_get_tagUserScore_lFleeCount
static int tolua_get_tagUserScore_lFleeCount(lua_State* tolua_S)
{
  tagUserScore* self = (tagUserScore*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lFleeCount'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->lFleeCount,"LONG");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: lFleeCount of class  tagUserScore */
#ifndef TOLUA_DISABLE_tolua_set_tagUserScore_lFleeCount
static int tolua_set_tagUserScore_lFleeCount(lua_State* tolua_S)
{
  tagUserScore* self = (tagUserScore*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lFleeCount'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"LONG",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->lFleeCount = *((LONG*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: lExperience of class  tagUserScore */
#ifndef TOLUA_DISABLE_tolua_get_tagUserScore_lExperience
static int tolua_get_tagUserScore_lExperience(lua_State* tolua_S)
{
  tagUserScore* self = (tagUserScore*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lExperience'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->lExperience,"LONG");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: lExperience of class  tagUserScore */
#ifndef TOLUA_DISABLE_tolua_set_tagUserScore_lExperience
static int tolua_set_tagUserScore_lExperience(lua_State* tolua_S)
{
  tagUserScore* self = (tagUserScore*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lExperience'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"LONG",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->lExperience = *((LONG*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: wTableID of class  tagUserStatus */
#ifndef TOLUA_DISABLE_tolua_get_tagUserStatus_wTableID
static int tolua_get_tagUserStatus_wTableID(lua_State* tolua_S)
{
  tagUserStatus* self = (tagUserStatus*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wTableID'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->wTableID,"WORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: wTableID of class  tagUserStatus */
#ifndef TOLUA_DISABLE_tolua_set_tagUserStatus_wTableID
static int tolua_set_tagUserStatus_wTableID(lua_State* tolua_S)
{
  tagUserStatus* self = (tagUserStatus*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wTableID'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"WORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->wTableID = *((WORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: wChairID of class  tagUserStatus */
#ifndef TOLUA_DISABLE_tolua_get_tagUserStatus_wChairID
static int tolua_get_tagUserStatus_wChairID(lua_State* tolua_S)
{
  tagUserStatus* self = (tagUserStatus*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wChairID'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->wChairID,"WORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: wChairID of class  tagUserStatus */
#ifndef TOLUA_DISABLE_tolua_set_tagUserStatus_wChairID
static int tolua_set_tagUserStatus_wChairID(lua_State* tolua_S)
{
  tagUserStatus* self = (tagUserStatus*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wChairID'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"WORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->wChairID = *((WORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: cbUserStatus of class  tagUserStatus */
#ifndef TOLUA_DISABLE_tolua_get_tagUserStatus_cbUserStatus
static int tolua_get_tagUserStatus_cbUserStatus(lua_State* tolua_S)
{
  tagUserStatus* self = (tagUserStatus*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'cbUserStatus'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->cbUserStatus,"BYTE");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: cbUserStatus of class  tagUserStatus */
#ifndef TOLUA_DISABLE_tolua_set_tagUserStatus_cbUserStatus
static int tolua_set_tagUserStatus_cbUserStatus(lua_State* tolua_S)
{
  tagUserStatus* self = (tagUserStatus*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'cbUserStatus'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"BYTE",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->cbUserStatus = *((BYTE*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: wFaceID of class  tagUserInfoHead */
#ifndef TOLUA_DISABLE_tolua_get_tagUserInfoHead_wFaceID
static int tolua_get_tagUserInfoHead_wFaceID(lua_State* tolua_S)
{
  tagUserInfoHead* self = (tagUserInfoHead*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wFaceID'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->wFaceID,"WORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: wFaceID of class  tagUserInfoHead */
#ifndef TOLUA_DISABLE_tolua_set_tagUserInfoHead_wFaceID
static int tolua_set_tagUserInfoHead_wFaceID(lua_State* tolua_S)
{
  tagUserInfoHead* self = (tagUserInfoHead*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wFaceID'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"WORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->wFaceID = *((WORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: dwUserID of class  tagUserInfoHead */
#ifndef TOLUA_DISABLE_tolua_get_tagUserInfoHead_dwUserID
static int tolua_get_tagUserInfoHead_dwUserID(lua_State* tolua_S)
{
  tagUserInfoHead* self = (tagUserInfoHead*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dwUserID'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->dwUserID,"DWORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: dwUserID of class  tagUserInfoHead */
#ifndef TOLUA_DISABLE_tolua_set_tagUserInfoHead_dwUserID
static int tolua_set_tagUserInfoHead_dwUserID(lua_State* tolua_S)
{
  tagUserInfoHead* self = (tagUserInfoHead*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dwUserID'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"DWORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->dwUserID = *((DWORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: dwGameID of class  tagUserInfoHead */
#ifndef TOLUA_DISABLE_tolua_get_tagUserInfoHead_dwGameID
static int tolua_get_tagUserInfoHead_dwGameID(lua_State* tolua_S)
{
  tagUserInfoHead* self = (tagUserInfoHead*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dwGameID'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->dwGameID,"DWORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: dwGameID of class  tagUserInfoHead */
#ifndef TOLUA_DISABLE_tolua_set_tagUserInfoHead_dwGameID
static int tolua_set_tagUserInfoHead_dwGameID(lua_State* tolua_S)
{
  tagUserInfoHead* self = (tagUserInfoHead*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dwGameID'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"DWORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->dwGameID = *((DWORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: dwGroupID of class  tagUserInfoHead */
#ifndef TOLUA_DISABLE_tolua_get_tagUserInfoHead_dwGroupID
static int tolua_get_tagUserInfoHead_dwGroupID(lua_State* tolua_S)
{
  tagUserInfoHead* self = (tagUserInfoHead*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dwGroupID'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->dwGroupID,"DWORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: dwGroupID of class  tagUserInfoHead */
#ifndef TOLUA_DISABLE_tolua_set_tagUserInfoHead_dwGroupID
static int tolua_set_tagUserInfoHead_dwGroupID(lua_State* tolua_S)
{
  tagUserInfoHead* self = (tagUserInfoHead*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dwGroupID'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"DWORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->dwGroupID = *((DWORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: dwUserRight of class  tagUserInfoHead */
#ifndef TOLUA_DISABLE_tolua_get_tagUserInfoHead_dwUserRight
static int tolua_get_tagUserInfoHead_dwUserRight(lua_State* tolua_S)
{
  tagUserInfoHead* self = (tagUserInfoHead*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dwUserRight'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->dwUserRight,"DWORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: dwUserRight of class  tagUserInfoHead */
#ifndef TOLUA_DISABLE_tolua_set_tagUserInfoHead_dwUserRight
static int tolua_set_tagUserInfoHead_dwUserRight(lua_State* tolua_S)
{
  tagUserInfoHead* self = (tagUserInfoHead*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dwUserRight'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"DWORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->dwUserRight = *((DWORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: lLoveliness of class  tagUserInfoHead */
#ifndef TOLUA_DISABLE_tolua_get_tagUserInfoHead_lLoveliness
static int tolua_get_tagUserInfoHead_lLoveliness(lua_State* tolua_S)
{
  tagUserInfoHead* self = (tagUserInfoHead*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lLoveliness'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->lLoveliness,"LONG");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: lLoveliness of class  tagUserInfoHead */
#ifndef TOLUA_DISABLE_tolua_set_tagUserInfoHead_lLoveliness
static int tolua_set_tagUserInfoHead_lLoveliness(lua_State* tolua_S)
{
  tagUserInfoHead* self = (tagUserInfoHead*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lLoveliness'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"LONG",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->lLoveliness = *((LONG*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: dwMasterRight of class  tagUserInfoHead */
#ifndef TOLUA_DISABLE_tolua_get_tagUserInfoHead_dwMasterRight
static int tolua_get_tagUserInfoHead_dwMasterRight(lua_State* tolua_S)
{
  tagUserInfoHead* self = (tagUserInfoHead*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dwMasterRight'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->dwMasterRight,"DWORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: dwMasterRight of class  tagUserInfoHead */
#ifndef TOLUA_DISABLE_tolua_set_tagUserInfoHead_dwMasterRight
static int tolua_set_tagUserInfoHead_dwMasterRight(lua_State* tolua_S)
{
  tagUserInfoHead* self = (tagUserInfoHead*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dwMasterRight'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"DWORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->dwMasterRight = *((DWORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: cbGender of class  tagUserInfoHead */
#ifndef TOLUA_DISABLE_tolua_get_tagUserInfoHead_cbGender
static int tolua_get_tagUserInfoHead_cbGender(lua_State* tolua_S)
{
  tagUserInfoHead* self = (tagUserInfoHead*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'cbGender'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->cbGender,"BYTE");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: cbGender of class  tagUserInfoHead */
#ifndef TOLUA_DISABLE_tolua_set_tagUserInfoHead_cbGender
static int tolua_set_tagUserInfoHead_cbGender(lua_State* tolua_S)
{
  tagUserInfoHead* self = (tagUserInfoHead*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'cbGender'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"BYTE",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->cbGender = *((BYTE*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: cbMemberOrder of class  tagUserInfoHead */
#ifndef TOLUA_DISABLE_tolua_get_tagUserInfoHead_cbMemberOrder
static int tolua_get_tagUserInfoHead_cbMemberOrder(lua_State* tolua_S)
{
  tagUserInfoHead* self = (tagUserInfoHead*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'cbMemberOrder'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->cbMemberOrder,"BYTE");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: cbMemberOrder of class  tagUserInfoHead */
#ifndef TOLUA_DISABLE_tolua_set_tagUserInfoHead_cbMemberOrder
static int tolua_set_tagUserInfoHead_cbMemberOrder(lua_State* tolua_S)
{
  tagUserInfoHead* self = (tagUserInfoHead*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'cbMemberOrder'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"BYTE",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->cbMemberOrder = *((BYTE*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: cbMasterOrder of class  tagUserInfoHead */
#ifndef TOLUA_DISABLE_tolua_get_tagUserInfoHead_cbMasterOrder
static int tolua_get_tagUserInfoHead_cbMasterOrder(lua_State* tolua_S)
{
  tagUserInfoHead* self = (tagUserInfoHead*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'cbMasterOrder'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->cbMasterOrder,"BYTE");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: cbMasterOrder of class  tagUserInfoHead */
#ifndef TOLUA_DISABLE_tolua_set_tagUserInfoHead_cbMasterOrder
static int tolua_set_tagUserInfoHead_cbMasterOrder(lua_State* tolua_S)
{
  tagUserInfoHead* self = (tagUserInfoHead*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'cbMasterOrder'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"BYTE",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->cbMasterOrder = *((BYTE*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: wTableID of class  tagUserInfoHead */
#ifndef TOLUA_DISABLE_tolua_get_tagUserInfoHead_wTableID
static int tolua_get_tagUserInfoHead_wTableID(lua_State* tolua_S)
{
  tagUserInfoHead* self = (tagUserInfoHead*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wTableID'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->wTableID,"WORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: wTableID of class  tagUserInfoHead */
#ifndef TOLUA_DISABLE_tolua_set_tagUserInfoHead_wTableID
static int tolua_set_tagUserInfoHead_wTableID(lua_State* tolua_S)
{
  tagUserInfoHead* self = (tagUserInfoHead*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wTableID'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"WORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->wTableID = *((WORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: wChairID of class  tagUserInfoHead */
#ifndef TOLUA_DISABLE_tolua_get_tagUserInfoHead_wChairID
static int tolua_get_tagUserInfoHead_wChairID(lua_State* tolua_S)
{
  tagUserInfoHead* self = (tagUserInfoHead*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wChairID'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->wChairID,"WORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: wChairID of class  tagUserInfoHead */
#ifndef TOLUA_DISABLE_tolua_set_tagUserInfoHead_wChairID
static int tolua_set_tagUserInfoHead_wChairID(lua_State* tolua_S)
{
  tagUserInfoHead* self = (tagUserInfoHead*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wChairID'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"WORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->wChairID = *((WORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: cbUserStatus of class  tagUserInfoHead */
#ifndef TOLUA_DISABLE_tolua_get_tagUserInfoHead_cbUserStatus
static int tolua_get_tagUserInfoHead_cbUserStatus(lua_State* tolua_S)
{
  tagUserInfoHead* self = (tagUserInfoHead*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'cbUserStatus'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->cbUserStatus,"BYTE");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: cbUserStatus of class  tagUserInfoHead */
#ifndef TOLUA_DISABLE_tolua_set_tagUserInfoHead_cbUserStatus
static int tolua_set_tagUserInfoHead_cbUserStatus(lua_State* tolua_S)
{
  tagUserInfoHead* self = (tagUserInfoHead*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'cbUserStatus'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"BYTE",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->cbUserStatus = *((BYTE*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: UserScoreInfo of class  tagUserInfoHead */
#ifndef TOLUA_DISABLE_tolua_get_tagUserInfoHead_UserScoreInfo
static int tolua_get_tagUserInfoHead_UserScoreInfo(lua_State* tolua_S)
{
  tagUserInfoHead* self = (tagUserInfoHead*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'UserScoreInfo'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->UserScoreInfo,"tagUserScore");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: UserScoreInfo of class  tagUserInfoHead */
#ifndef TOLUA_DISABLE_tolua_set_tagUserInfoHead_UserScoreInfo
static int tolua_set_tagUserInfoHead_UserScoreInfo(lua_State* tolua_S)
{
  tagUserInfoHead* self = (tagUserInfoHead*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'UserScoreInfo'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"tagUserScore",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->UserScoreInfo = *((tagUserScore*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: dwCustomFaceVer of class  tagUserInfoHead */
#ifndef TOLUA_DISABLE_tolua_get_tagUserInfoHead_dwCustomFaceVer
static int tolua_get_tagUserInfoHead_dwCustomFaceVer(lua_State* tolua_S)
{
  tagUserInfoHead* self = (tagUserInfoHead*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dwCustomFaceVer'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->dwCustomFaceVer,"DWORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: dwCustomFaceVer of class  tagUserInfoHead */
#ifndef TOLUA_DISABLE_tolua_set_tagUserInfoHead_dwCustomFaceVer
static int tolua_set_tagUserInfoHead_dwCustomFaceVer(lua_State* tolua_S)
{
  tagUserInfoHead* self = (tagUserInfoHead*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dwCustomFaceVer'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"DWORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->dwCustomFaceVer = *((DWORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: dwPropResidualTime of class  tagUserInfoHead */
#ifndef TOLUA_DISABLE_tolua_get_GlobDefTolua_tagUserInfoHead_dwPropResidualTime
static int tolua_get_GlobDefTolua_tagUserInfoHead_dwPropResidualTime(lua_State* tolua_S)
{
 int tolua_index;
  tagUserInfoHead* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (tagUserInfoHead*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=PROPERTY_COUNT)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  tolua_pushusertype(tolua_S,(void*)&self->dwPropResidualTime[tolua_index],"DWORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: dwPropResidualTime of class  tagUserInfoHead */
#ifndef TOLUA_DISABLE_tolua_set_GlobDefTolua_tagUserInfoHead_dwPropResidualTime
static int tolua_set_GlobDefTolua_tagUserInfoHead_dwPropResidualTime(lua_State* tolua_S)
{
 int tolua_index;
  tagUserInfoHead* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (tagUserInfoHead*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=PROPERTY_COUNT)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  self->dwPropResidualTime[tolua_index] = *((DWORD*)  tolua_tousertype(tolua_S,3,0));
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: wFaceID of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_get_tagUserData_wFaceID
static int tolua_get_tagUserData_wFaceID(lua_State* tolua_S)
{
  tagUserData* self = (tagUserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wFaceID'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->wFaceID,"WORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: wFaceID of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_set_tagUserData_wFaceID
static int tolua_set_tagUserData_wFaceID(lua_State* tolua_S)
{
  tagUserData* self = (tagUserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wFaceID'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"WORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->wFaceID = *((WORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: dwCustomFaceVer of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_get_tagUserData_dwCustomFaceVer
static int tolua_get_tagUserData_dwCustomFaceVer(lua_State* tolua_S)
{
  tagUserData* self = (tagUserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dwCustomFaceVer'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->dwCustomFaceVer,"DWORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: dwCustomFaceVer of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_set_tagUserData_dwCustomFaceVer
static int tolua_set_tagUserData_dwCustomFaceVer(lua_State* tolua_S)
{
  tagUserData* self = (tagUserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dwCustomFaceVer'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"DWORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->dwCustomFaceVer = *((DWORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: dwUserID of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_get_tagUserData_dwUserID
static int tolua_get_tagUserData_dwUserID(lua_State* tolua_S)
{
  tagUserData* self = (tagUserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dwUserID'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->dwUserID,"DWORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: dwUserID of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_set_tagUserData_dwUserID
static int tolua_set_tagUserData_dwUserID(lua_State* tolua_S)
{
  tagUserData* self = (tagUserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dwUserID'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"DWORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->dwUserID = *((DWORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: dwGroupID of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_get_tagUserData_dwGroupID
static int tolua_get_tagUserData_dwGroupID(lua_State* tolua_S)
{
  tagUserData* self = (tagUserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dwGroupID'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->dwGroupID,"DWORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: dwGroupID of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_set_tagUserData_dwGroupID
static int tolua_set_tagUserData_dwGroupID(lua_State* tolua_S)
{
  tagUserData* self = (tagUserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dwGroupID'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"DWORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->dwGroupID = *((DWORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: dwGameID of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_get_tagUserData_dwGameID
static int tolua_get_tagUserData_dwGameID(lua_State* tolua_S)
{
  tagUserData* self = (tagUserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dwGameID'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->dwGameID,"DWORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: dwGameID of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_set_tagUserData_dwGameID
static int tolua_set_tagUserData_dwGameID(lua_State* tolua_S)
{
  tagUserData* self = (tagUserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dwGameID'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"DWORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->dwGameID = *((DWORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: dwUserRight of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_get_tagUserData_dwUserRight
static int tolua_get_tagUserData_dwUserRight(lua_State* tolua_S)
{
  tagUserData* self = (tagUserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dwUserRight'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->dwUserRight,"DWORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: dwUserRight of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_set_tagUserData_dwUserRight
static int tolua_set_tagUserData_dwUserRight(lua_State* tolua_S)
{
  tagUserData* self = (tagUserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dwUserRight'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"DWORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->dwUserRight = *((DWORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: lLoveliness of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_get_tagUserData_lLoveliness
static int tolua_get_tagUserData_lLoveliness(lua_State* tolua_S)
{
  tagUserData* self = (tagUserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lLoveliness'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->lLoveliness,"LONG");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: lLoveliness of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_set_tagUserData_lLoveliness
static int tolua_set_tagUserData_lLoveliness(lua_State* tolua_S)
{
  tagUserData* self = (tagUserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lLoveliness'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"LONG",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->lLoveliness = *((LONG*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: dwMasterRight of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_get_tagUserData_dwMasterRight
static int tolua_get_tagUserData_dwMasterRight(lua_State* tolua_S)
{
  tagUserData* self = (tagUserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dwMasterRight'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->dwMasterRight,"DWORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: dwMasterRight of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_set_tagUserData_dwMasterRight
static int tolua_set_tagUserData_dwMasterRight(lua_State* tolua_S)
{
  tagUserData* self = (tagUserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dwMasterRight'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"DWORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->dwMasterRight = *((DWORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: szName of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_get_GlobDefTolua_tagUserData_szName
static int tolua_get_GlobDefTolua_tagUserData_szName(lua_State* tolua_S)
{
 int tolua_index;
  tagUserData* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (tagUserData*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=NAME_LEN)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  tolua_pushusertype(tolua_S,(void*)&self->szName[tolua_index],"TCHAR");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: szName of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_set_GlobDefTolua_tagUserData_szName
static int tolua_set_GlobDefTolua_tagUserData_szName(lua_State* tolua_S)
{
 int tolua_index;
  tagUserData* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (tagUserData*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=NAME_LEN)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  self->szName[tolua_index] = *((TCHAR*)  tolua_tousertype(tolua_S,3,0));
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: szGroupName of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_get_GlobDefTolua_tagUserData_szGroupName
static int tolua_get_GlobDefTolua_tagUserData_szGroupName(lua_State* tolua_S)
{
 int tolua_index;
  tagUserData* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (tagUserData*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=GROUP_LEN)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  tolua_pushusertype(tolua_S,(void*)&self->szGroupName[tolua_index],"TCHAR");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: szGroupName of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_set_GlobDefTolua_tagUserData_szGroupName
static int tolua_set_GlobDefTolua_tagUserData_szGroupName(lua_State* tolua_S)
{
 int tolua_index;
  tagUserData* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (tagUserData*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=GROUP_LEN)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  self->szGroupName[tolua_index] = *((TCHAR*)  tolua_tousertype(tolua_S,3,0));
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: szUnderWrite of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_get_GlobDefTolua_tagUserData_szUnderWrite
static int tolua_get_GlobDefTolua_tagUserData_szUnderWrite(lua_State* tolua_S)
{
 int tolua_index;
  tagUserData* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (tagUserData*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=UNDER_WRITE_LEN)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  tolua_pushusertype(tolua_S,(void*)&self->szUnderWrite[tolua_index],"TCHAR");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: szUnderWrite of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_set_GlobDefTolua_tagUserData_szUnderWrite
static int tolua_set_GlobDefTolua_tagUserData_szUnderWrite(lua_State* tolua_S)
{
 int tolua_index;
  tagUserData* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (tagUserData*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=UNDER_WRITE_LEN)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  self->szUnderWrite[tolua_index] = *((TCHAR*)  tolua_tousertype(tolua_S,3,0));
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: cbGender of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_get_tagUserData_cbGender
static int tolua_get_tagUserData_cbGender(lua_State* tolua_S)
{
  tagUserData* self = (tagUserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'cbGender'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->cbGender,"BYTE");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: cbGender of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_set_tagUserData_cbGender
static int tolua_set_tagUserData_cbGender(lua_State* tolua_S)
{
  tagUserData* self = (tagUserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'cbGender'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"BYTE",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->cbGender = *((BYTE*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: cbMemberOrder of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_get_tagUserData_cbMemberOrder
static int tolua_get_tagUserData_cbMemberOrder(lua_State* tolua_S)
{
  tagUserData* self = (tagUserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'cbMemberOrder'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->cbMemberOrder,"BYTE");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: cbMemberOrder of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_set_tagUserData_cbMemberOrder
static int tolua_set_tagUserData_cbMemberOrder(lua_State* tolua_S)
{
  tagUserData* self = (tagUserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'cbMemberOrder'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"BYTE",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->cbMemberOrder = *((BYTE*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: cbMasterOrder of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_get_tagUserData_cbMasterOrder
static int tolua_get_tagUserData_cbMasterOrder(lua_State* tolua_S)
{
  tagUserData* self = (tagUserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'cbMasterOrder'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->cbMasterOrder,"BYTE");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: cbMasterOrder of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_set_tagUserData_cbMasterOrder
static int tolua_set_tagUserData_cbMasterOrder(lua_State* tolua_S)
{
  tagUserData* self = (tagUserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'cbMasterOrder'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"BYTE",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->cbMasterOrder = *((BYTE*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: lInsureScore of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_get_tagUserData_lInsureScore
static int tolua_get_tagUserData_lInsureScore(lua_State* tolua_S)
{
  tagUserData* self = (tagUserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lInsureScore'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->lInsureScore,"LONG");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: lInsureScore of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_set_tagUserData_lInsureScore
static int tolua_set_tagUserData_lInsureScore(lua_State* tolua_S)
{
  tagUserData* self = (tagUserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lInsureScore'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"LONG",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->lInsureScore = *((LONG*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: lGameGold of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_get_tagUserData_lGameGold
static int tolua_get_tagUserData_lGameGold(lua_State* tolua_S)
{
  tagUserData* self = (tagUserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lGameGold'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->lGameGold,"LONG");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: lGameGold of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_set_tagUserData_lGameGold
static int tolua_set_tagUserData_lGameGold(lua_State* tolua_S)
{
  tagUserData* self = (tagUserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lGameGold'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"LONG",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->lGameGold = *((LONG*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: lScore of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_get_tagUserData_lScore
static int tolua_get_tagUserData_lScore(lua_State* tolua_S)
{
  tagUserData* self = (tagUserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lScore'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->lScore,"LONG");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: lScore of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_set_tagUserData_lScore
static int tolua_set_tagUserData_lScore(lua_State* tolua_S)
{
  tagUserData* self = (tagUserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lScore'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"LONG",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->lScore = *((LONG*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: lWinCount of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_get_tagUserData_lWinCount
static int tolua_get_tagUserData_lWinCount(lua_State* tolua_S)
{
  tagUserData* self = (tagUserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lWinCount'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->lWinCount,"LONG");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: lWinCount of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_set_tagUserData_lWinCount
static int tolua_set_tagUserData_lWinCount(lua_State* tolua_S)
{
  tagUserData* self = (tagUserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lWinCount'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"LONG",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->lWinCount = *((LONG*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: lLostCount of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_get_tagUserData_lLostCount
static int tolua_get_tagUserData_lLostCount(lua_State* tolua_S)
{
  tagUserData* self = (tagUserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lLostCount'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->lLostCount,"LONG");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: lLostCount of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_set_tagUserData_lLostCount
static int tolua_set_tagUserData_lLostCount(lua_State* tolua_S)
{
  tagUserData* self = (tagUserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lLostCount'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"LONG",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->lLostCount = *((LONG*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: lDrawCount of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_get_tagUserData_lDrawCount
static int tolua_get_tagUserData_lDrawCount(lua_State* tolua_S)
{
  tagUserData* self = (tagUserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lDrawCount'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->lDrawCount,"LONG");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: lDrawCount of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_set_tagUserData_lDrawCount
static int tolua_set_tagUserData_lDrawCount(lua_State* tolua_S)
{
  tagUserData* self = (tagUserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lDrawCount'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"LONG",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->lDrawCount = *((LONG*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: lFleeCount of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_get_tagUserData_lFleeCount
static int tolua_get_tagUserData_lFleeCount(lua_State* tolua_S)
{
  tagUserData* self = (tagUserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lFleeCount'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->lFleeCount,"LONG");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: lFleeCount of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_set_tagUserData_lFleeCount
static int tolua_set_tagUserData_lFleeCount(lua_State* tolua_S)
{
  tagUserData* self = (tagUserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lFleeCount'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"LONG",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->lFleeCount = *((LONG*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: lExperience of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_get_tagUserData_lExperience
static int tolua_get_tagUserData_lExperience(lua_State* tolua_S)
{
  tagUserData* self = (tagUserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lExperience'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->lExperience,"LONG");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: lExperience of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_set_tagUserData_lExperience
static int tolua_set_tagUserData_lExperience(lua_State* tolua_S)
{
  tagUserData* self = (tagUserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'lExperience'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"LONG",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->lExperience = *((LONG*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: wTableID of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_get_tagUserData_wTableID
static int tolua_get_tagUserData_wTableID(lua_State* tolua_S)
{
  tagUserData* self = (tagUserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wTableID'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->wTableID,"WORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: wTableID of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_set_tagUserData_wTableID
static int tolua_set_tagUserData_wTableID(lua_State* tolua_S)
{
  tagUserData* self = (tagUserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wTableID'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"WORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->wTableID = *((WORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: wChairID of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_get_tagUserData_wChairID
static int tolua_get_tagUserData_wChairID(lua_State* tolua_S)
{
  tagUserData* self = (tagUserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wChairID'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->wChairID,"WORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: wChairID of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_set_tagUserData_wChairID
static int tolua_set_tagUserData_wChairID(lua_State* tolua_S)
{
  tagUserData* self = (tagUserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'wChairID'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"WORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->wChairID = *((WORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: cbUserStatus of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_get_tagUserData_cbUserStatus
static int tolua_get_tagUserData_cbUserStatus(lua_State* tolua_S)
{
  tagUserData* self = (tagUserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'cbUserStatus'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->cbUserStatus,"BYTE");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: cbUserStatus of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_set_tagUserData_cbUserStatus
static int tolua_set_tagUserData_cbUserStatus(lua_State* tolua_S)
{
  tagUserData* self = (tagUserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'cbUserStatus'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"BYTE",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->cbUserStatus = *((BYTE*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: cbCompanion of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_get_tagUserData_cbCompanion
static int tolua_get_tagUserData_cbCompanion(lua_State* tolua_S)
{
  tagUserData* self = (tagUserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'cbCompanion'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->cbCompanion,"BYTE");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: cbCompanion of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_set_tagUserData_cbCompanion
static int tolua_set_tagUserData_cbCompanion(lua_State* tolua_S)
{
  tagUserData* self = (tagUserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'cbCompanion'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"BYTE",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->cbCompanion = *((BYTE*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: dwPropResidualTime of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_get_GlobDefTolua_tagUserData_dwPropResidualTime
static int tolua_get_GlobDefTolua_tagUserData_dwPropResidualTime(lua_State* tolua_S)
{
 int tolua_index;
  tagUserData* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (tagUserData*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=PROPERTY_COUNT)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  tolua_pushusertype(tolua_S,(void*)&self->dwPropResidualTime[tolua_index],"DWORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: dwPropResidualTime of class  tagUserData */
#ifndef TOLUA_DISABLE_tolua_set_GlobDefTolua_tagUserData_dwPropResidualTime
static int tolua_set_GlobDefTolua_tagUserData_dwPropResidualTime(lua_State* tolua_S)
{
 int tolua_index;
  tagUserData* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (tagUserData*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=PROPERTY_COUNT)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  self->dwPropResidualTime[tolua_index] = *((DWORD*)  tolua_tousertype(tolua_S,3,0));
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: dwSystemVer of class  tagClientSerial */
#ifndef TOLUA_DISABLE_tolua_get_tagClientSerial_dwSystemVer
static int tolua_get_tagClientSerial_dwSystemVer(lua_State* tolua_S)
{
  tagClientSerial* self = (tagClientSerial*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dwSystemVer'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->dwSystemVer,"DWORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: dwSystemVer of class  tagClientSerial */
#ifndef TOLUA_DISABLE_tolua_set_tagClientSerial_dwSystemVer
static int tolua_set_tagClientSerial_dwSystemVer(lua_State* tolua_S)
{
  tagClientSerial* self = (tagClientSerial*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dwSystemVer'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"DWORD",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->dwSystemVer = *((DWORD*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: dwComputerID of class  tagClientSerial */
#ifndef TOLUA_DISABLE_tolua_get_GlobDefTolua_tagClientSerial_dwComputerID
static int tolua_get_GlobDefTolua_tagClientSerial_dwComputerID(lua_State* tolua_S)
{
 int tolua_index;
  tagClientSerial* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (tagClientSerial*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=3)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  tolua_pushusertype(tolua_S,(void*)&self->dwComputerID[tolua_index],"DWORD");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: dwComputerID of class  tagClientSerial */
#ifndef TOLUA_DISABLE_tolua_set_GlobDefTolua_tagClientSerial_dwComputerID
static int tolua_set_GlobDefTolua_tagClientSerial_dwComputerID(lua_State* tolua_S)
{
 int tolua_index;
  tagClientSerial* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (tagClientSerial*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=3)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  self->dwComputerID[tolua_index] = *((DWORD*)  tolua_tousertype(tolua_S,3,0));
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: cbBufferLen of class  tagOptionBuffer */
#ifndef TOLUA_DISABLE_tolua_get_tagOptionBuffer_cbBufferLen
static int tolua_get_tagOptionBuffer_cbBufferLen(lua_State* tolua_S)
{
  tagOptionBuffer* self = (tagOptionBuffer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'cbBufferLen'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->cbBufferLen,"BYTE");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: cbBufferLen of class  tagOptionBuffer */
#ifndef TOLUA_DISABLE_tolua_set_tagOptionBuffer_cbBufferLen
static int tolua_set_tagOptionBuffer_cbBufferLen(lua_State* tolua_S)
{
  tagOptionBuffer* self = (tagOptionBuffer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'cbBufferLen'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"BYTE",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->cbBufferLen = *((BYTE*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: cbOptionBuf of class  tagOptionBuffer */
#ifndef TOLUA_DISABLE_tolua_get_GlobDefTolua_tagOptionBuffer_cbOptionBuf
static int tolua_get_GlobDefTolua_tagOptionBuffer_cbOptionBuf(lua_State* tolua_S)
{
 int tolua_index;
  tagOptionBuffer* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (tagOptionBuffer*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=32)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  tolua_pushusertype(tolua_S,(void*)&self->cbOptionBuf[tolua_index],"BYTE");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: cbOptionBuf of class  tagOptionBuffer */
#ifndef TOLUA_DISABLE_tolua_set_GlobDefTolua_tagOptionBuffer_cbOptionBuf
static int tolua_set_GlobDefTolua_tagOptionBuffer_cbOptionBuf(lua_State* tolua_S)
{
 int tolua_index;
  tagOptionBuffer* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (tagOptionBuffer*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=32)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  self->cbOptionBuf[tolua_index] = *((BYTE*)  tolua_tousertype(tolua_S,3,0));
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_GlobDefTolua_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_constant(tolua_S,"PROP_DOUBLE",PROP_DOUBLE);
  tolua_constant(tolua_S,"PROP_FOURDOLD",PROP_FOURDOLD);
  tolua_constant(tolua_S,"PROP_NEGAGIVE",PROP_NEGAGIVE);
  tolua_constant(tolua_S,"PROP_FLEE",PROP_FLEE);
  tolua_constant(tolua_S,"PROP_BUGLE",PROP_BUGLE);
  tolua_constant(tolua_S,"PROP_KICK",PROP_KICK);
  tolua_constant(tolua_S,"PROP_SHIELD",PROP_SHIELD);
  tolua_constant(tolua_S,"PROP_MEMBER_1",PROP_MEMBER_1);
  tolua_constant(tolua_S,"PROP_MEMBER_2",PROP_MEMBER_2);
  tolua_constant(tolua_S,"PROP_MEMBER_3",PROP_MEMBER_3);
  tolua_constant(tolua_S,"PROP_MEMBER_4",PROP_MEMBER_4);
  tolua_constant(tolua_S,"PROP_MEMBER_5",PROP_MEMBER_5);
  tolua_constant(tolua_S,"PROP_MEMBER_6",PROP_MEMBER_6);
  tolua_constant(tolua_S,"PROP_MEMBER_7",PROP_MEMBER_7);
  tolua_constant(tolua_S,"PROP_MEMBER_8",PROP_MEMBER_8);
  tolua_constant(tolua_S,"PROPERTY_COUNT",PROPERTY_COUNT);
  tolua_constant(tolua_S,"MAX_CHAIR",MAX_CHAIR);
  tolua_constant(tolua_S,"MAX_CHAIR_NORMAL",MAX_CHAIR_NORMAL);
  tolua_constant(tolua_S,"MAX_ANDROID",MAX_ANDROID);
  tolua_constant(tolua_S,"MAX_CHAT_LEN",MAX_CHAT_LEN);
  tolua_constant(tolua_S,"LIMIT_CHAT_TIMES",LIMIT_CHAT_TIMES);
  tolua_constant(tolua_S,"PORT_VIDEO_SERVER",PORT_VIDEO_SERVER);
  tolua_constant(tolua_S,"PORT_LOGON_SERVER",PORT_LOGON_SERVER);
  tolua_constant(tolua_S,"PORT_CENTER_SERVER",PORT_CENTER_SERVER);
  tolua_constant(tolua_S,"SOCKET_VER",SOCKET_VER);
  tolua_constant(tolua_S,"SOCKET_BUFFER",SOCKET_BUFFER);
  tolua_constant(tolua_S,"SOCKET_PACKET",SOCKET_PACKET);
  tolua_constant(tolua_S,"MDM_KN_COMMAND",MDM_KN_COMMAND);
  tolua_constant(tolua_S,"SUB_KN_DETECT_SOCKET",SUB_KN_DETECT_SOCKET);
  tolua_constant(tolua_S,"SUB_KN_SHUT_DOWN_SOCKET",SUB_KN_SHUT_DOWN_SOCKET);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"TRecvData","TRecvData","",tolua_collect_TRecvData);
  #else
  tolua_cclass(tolua_S,"TRecvData","TRecvData","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"TRecvData");
   tolua_variable(tolua_S,"m_wMainCmdID",tolua_get_TRecvData_m_wMainCmdID,tolua_set_TRecvData_m_wMainCmdID);
   tolua_variable(tolua_S,"m_wSubCmdID",tolua_get_TRecvData_m_wSubCmdID,tolua_set_TRecvData_m_wSubCmdID);
   tolua_array(tolua_S,"m_data",tolua_get_GlobDefTolua_TRecvData_m_data,tolua_set_GlobDefTolua_TRecvData_m_data);
   tolua_variable(tolua_S,"m_size",tolua_get_TRecvData_m_size,tolua_set_TRecvData_m_size);
   tolua_function(tolua_S,"new",tolua_GlobDefTolua_TRecvData_new00);
   tolua_function(tolua_S,"new_local",tolua_GlobDefTolua_TRecvData_new00_local);
   tolua_function(tolua_S,".call",tolua_GlobDefTolua_TRecvData_new00_local);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CMD_Info","CMD_Info","",NULL);
  tolua_beginmodule(tolua_S,"CMD_Info");
   tolua_variable(tolua_S,"cbVersion",tolua_get_CMD_Info_cbVersion,tolua_set_CMD_Info_cbVersion);
   tolua_variable(tolua_S,"cbCheckCode",tolua_get_CMD_Info_cbCheckCode,tolua_set_CMD_Info_cbCheckCode);
   tolua_variable(tolua_S,"wPacketSize",tolua_get_CMD_Info_wPacketSize,tolua_set_CMD_Info_wPacketSize);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CMD_Command","CMD_Command","",NULL);
  tolua_beginmodule(tolua_S,"CMD_Command");
   tolua_variable(tolua_S,"wMainCmdID",tolua_get_CMD_Command_wMainCmdID,tolua_set_CMD_Command_wMainCmdID);
   tolua_variable(tolua_S,"wSubCmdID",tolua_get_CMD_Command_wSubCmdID,tolua_set_CMD_Command_wSubCmdID);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CMD_Head","CMD_Head","",NULL);
  tolua_beginmodule(tolua_S,"CMD_Head");
   tolua_variable(tolua_S,"CmdInfo",tolua_get_CMD_Head_CmdInfo,tolua_set_CMD_Head_CmdInfo);
   tolua_variable(tolua_S,"CommandInfo",tolua_get_CMD_Head_CommandInfo,tolua_set_CMD_Head_CommandInfo);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CMD_Buffer","CMD_Buffer","",NULL);
  tolua_beginmodule(tolua_S,"CMD_Buffer");
   tolua_variable(tolua_S,"Head",tolua_get_CMD_Buffer_Head,tolua_set_CMD_Buffer_Head);
   tolua_array(tolua_S,"cbBuffer",tolua_get_GlobDefTolua_CMD_Buffer_cbBuffer,tolua_set_GlobDefTolua_CMD_Buffer_cbBuffer);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CMD_KN_DetectSocket","CMD_KN_DetectSocket","",NULL);
  tolua_beginmodule(tolua_S,"CMD_KN_DetectSocket");
   tolua_variable(tolua_S,"dwSendTickCount",tolua_get_CMD_KN_DetectSocket_dwSendTickCount,tolua_set_CMD_KN_DetectSocket_dwSendTickCount);
   tolua_variable(tolua_S,"dwRecvTickCount",tolua_get_CMD_KN_DetectSocket_dwRecvTickCount,tolua_set_CMD_KN_DetectSocket_dwRecvTickCount);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"IPC_VER",IPC_VER);
  tolua_constant(tolua_S,"IPC_IDENTIFIER",IPC_IDENTIFIER);
  tolua_constant(tolua_S,"IPC_PACKAGE",IPC_PACKAGE);
  tolua_constant(tolua_S,"IPC_BUFFER",IPC_BUFFER);
  tolua_cclass(tolua_S,"IPC_Head","IPC_Head","",NULL);
  tolua_beginmodule(tolua_S,"IPC_Head");
   tolua_variable(tolua_S,"wVersion",tolua_get_IPC_Head_wVersion,tolua_set_IPC_Head_wVersion);
   tolua_variable(tolua_S,"wDataSize",tolua_get_IPC_Head_wDataSize,tolua_set_IPC_Head_wDataSize);
   tolua_variable(tolua_S,"wMainCmdID",tolua_get_IPC_Head_wMainCmdID,tolua_set_IPC_Head_wMainCmdID);
   tolua_variable(tolua_S,"wSubCmdID",tolua_get_IPC_Head_wSubCmdID,tolua_set_IPC_Head_wSubCmdID);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"IPC_Buffer","IPC_Buffer","",NULL);
  tolua_beginmodule(tolua_S,"IPC_Buffer");
   tolua_variable(tolua_S,"Head",tolua_get_IPC_Buffer_Head,tolua_set_IPC_Buffer_Head);
   tolua_array(tolua_S,"cbBuffer",tolua_get_GlobDefTolua_IPC_Buffer_cbBuffer,tolua_set_GlobDefTolua_IPC_Buffer_cbBuffer);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"TYPE_LEN",TYPE_LEN);
  tolua_constant(tolua_S,"KIND_LEN",KIND_LEN);
  tolua_constant(tolua_S,"STATION_LEN",STATION_LEN);
  tolua_constant(tolua_S,"SERVER_LEN",SERVER_LEN);
  tolua_constant(tolua_S,"MODULE_LEN",MODULE_LEN);
  tolua_constant(tolua_S,"GENDER_NULL",GENDER_NULL);
  tolua_constant(tolua_S,"GENDER_BOY",GENDER_BOY);
  tolua_constant(tolua_S,"GENDER_GIRL",GENDER_GIRL);
  tolua_constant(tolua_S,"GAME_GENRE_SCORE",GAME_GENRE_SCORE);
  tolua_constant(tolua_S,"GAME_GENRE_GOLD",GAME_GENRE_GOLD);
  tolua_constant(tolua_S,"GAME_GENRE_MATCH",GAME_GENRE_MATCH);
  tolua_constant(tolua_S,"GAME_GENRE_EDUCATE",GAME_GENRE_EDUCATE);
  tolua_cclass(tolua_S,"tagGameType","tagGameType","",NULL);
  tolua_beginmodule(tolua_S,"tagGameType");
   tolua_variable(tolua_S,"wSortID",tolua_get_tagGameType_wSortID,tolua_set_tagGameType_wSortID);
   tolua_variable(tolua_S,"wTypeID",tolua_get_tagGameType_wTypeID,tolua_set_tagGameType_wTypeID);
   tolua_array(tolua_S,"szTypeName",tolua_get_GlobDefTolua_tagGameType_szTypeName,tolua_set_GlobDefTolua_tagGameType_szTypeName);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"tagGameKind","tagGameKind","",NULL);
  tolua_beginmodule(tolua_S,"tagGameKind");
   tolua_variable(tolua_S,"wSortID",tolua_get_tagGameKind_wSortID,tolua_set_tagGameKind_wSortID);
   tolua_variable(tolua_S,"wTypeID",tolua_get_tagGameKind_wTypeID,tolua_set_tagGameKind_wTypeID);
   tolua_variable(tolua_S,"wKindID",tolua_get_tagGameKind_wKindID,tolua_set_tagGameKind_wKindID);
   tolua_variable(tolua_S,"dwMaxVersion",tolua_get_tagGameKind_dwMaxVersion,tolua_set_tagGameKind_dwMaxVersion);
   tolua_variable(tolua_S,"dwOnLineCount",tolua_get_tagGameKind_dwOnLineCount,tolua_set_tagGameKind_dwOnLineCount);
   tolua_array(tolua_S,"szKindName",tolua_get_GlobDefTolua_tagGameKind_szKindName,tolua_set_GlobDefTolua_tagGameKind_szKindName);
   tolua_array(tolua_S,"szProcessName",tolua_get_GlobDefTolua_tagGameKind_szProcessName,tolua_set_GlobDefTolua_tagGameKind_szProcessName);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"tagGameStation","tagGameStation","",NULL);
  tolua_beginmodule(tolua_S,"tagGameStation");
   tolua_variable(tolua_S,"wSortID",tolua_get_tagGameStation_wSortID,tolua_set_tagGameStation_wSortID);
   tolua_variable(tolua_S,"wKindID",tolua_get_tagGameStation_wKindID,tolua_set_tagGameStation_wKindID);
   tolua_variable(tolua_S,"wJoinID",tolua_get_tagGameStation_wJoinID,tolua_set_tagGameStation_wJoinID);
   tolua_variable(tolua_S,"wStationID",tolua_get_tagGameStation_wStationID,tolua_set_tagGameStation_wStationID);
   tolua_array(tolua_S,"szStationName",tolua_get_GlobDefTolua_tagGameStation_szStationName,tolua_set_GlobDefTolua_tagGameStation_szStationName);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"tagGameServer","tagGameServer","",NULL);
  tolua_beginmodule(tolua_S,"tagGameServer");
   tolua_variable(tolua_S,"wSortID",tolua_get_tagGameServer_wSortID,tolua_set_tagGameServer_wSortID);
   tolua_variable(tolua_S,"wKindID",tolua_get_tagGameServer_wKindID,tolua_set_tagGameServer_wKindID);
   tolua_variable(tolua_S,"wServerID",tolua_get_tagGameServer_wServerID,tolua_set_tagGameServer_wServerID);
   tolua_variable(tolua_S,"wStationID",tolua_get_tagGameServer_wStationID,tolua_set_tagGameServer_wStationID);
   tolua_variable(tolua_S,"wServerPort",tolua_get_tagGameServer_wServerPort,tolua_set_tagGameServer_wServerPort);
   tolua_variable(tolua_S,"dwServerAddr",tolua_get_tagGameServer_dwServerAddr,tolua_set_tagGameServer_dwServerAddr);
   tolua_variable(tolua_S,"dwOnLineCount",tolua_get_tagGameServer_dwOnLineCount,tolua_set_tagGameServer_dwOnLineCount);
   tolua_array(tolua_S,"szServerName",tolua_get_GlobDefTolua_tagGameServer_szServerName,tolua_set_GlobDefTolua_tagGameServer_szServerName);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"tagLevelItem","tagLevelItem","",NULL);
  tolua_beginmodule(tolua_S,"tagLevelItem");
   tolua_variable(tolua_S,"lLevelScore",tolua_get_tagLevelItem_lLevelScore,tolua_set_tagLevelItem_lLevelScore);
   tolua_array(tolua_S,"szLevelName",tolua_get_GlobDefTolua_tagLevelItem_szLevelName,tolua_set_GlobDefTolua_tagLevelItem_szLevelName);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"US_NULL",US_NULL);
  tolua_constant(tolua_S,"US_FREE",US_FREE);
  tolua_constant(tolua_S,"US_SIT",US_SIT);
  tolua_constant(tolua_S,"US_READY",US_READY);
  tolua_constant(tolua_S,"US_LOOKON",US_LOOKON);
  tolua_constant(tolua_S,"US_PLAY",US_PLAY);
  tolua_constant(tolua_S,"US_OFFLINE",US_OFFLINE);
  tolua_constant(tolua_S,"NAME_LEN",NAME_LEN);
  tolua_constant(tolua_S,"PASS_LEN",PASS_LEN);
  tolua_constant(tolua_S,"EMAIL_LEN",EMAIL_LEN);
  tolua_constant(tolua_S,"GROUP_LEN",GROUP_LEN);
  tolua_constant(tolua_S,"COMPUTER_ID_LEN",COMPUTER_ID_LEN);
  tolua_constant(tolua_S,"UNDER_WRITE_LEN",UNDER_WRITE_LEN);
  tolua_cclass(tolua_S,"tagUserScore","tagUserScore","",NULL);
  tolua_beginmodule(tolua_S,"tagUserScore");
   tolua_variable(tolua_S,"lScore",tolua_get_tagUserScore_lScore,tolua_set_tagUserScore_lScore);
   tolua_variable(tolua_S,"lGameGold",tolua_get_tagUserScore_lGameGold,tolua_set_tagUserScore_lGameGold);
   tolua_variable(tolua_S,"lInsureScore",tolua_get_tagUserScore_lInsureScore,tolua_set_tagUserScore_lInsureScore);
   tolua_variable(tolua_S,"lWinCount",tolua_get_tagUserScore_lWinCount,tolua_set_tagUserScore_lWinCount);
   tolua_variable(tolua_S,"lLostCount",tolua_get_tagUserScore_lLostCount,tolua_set_tagUserScore_lLostCount);
   tolua_variable(tolua_S,"lDrawCount",tolua_get_tagUserScore_lDrawCount,tolua_set_tagUserScore_lDrawCount);
   tolua_variable(tolua_S,"lFleeCount",tolua_get_tagUserScore_lFleeCount,tolua_set_tagUserScore_lFleeCount);
   tolua_variable(tolua_S,"lExperience",tolua_get_tagUserScore_lExperience,tolua_set_tagUserScore_lExperience);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"tagUserStatus","tagUserStatus","",NULL);
  tolua_beginmodule(tolua_S,"tagUserStatus");
   tolua_variable(tolua_S,"wTableID",tolua_get_tagUserStatus_wTableID,tolua_set_tagUserStatus_wTableID);
   tolua_variable(tolua_S,"wChairID",tolua_get_tagUserStatus_wChairID,tolua_set_tagUserStatus_wChairID);
   tolua_variable(tolua_S,"cbUserStatus",tolua_get_tagUserStatus_cbUserStatus,tolua_set_tagUserStatus_cbUserStatus);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"tagUserInfoHead","tagUserInfoHead","",NULL);
  tolua_beginmodule(tolua_S,"tagUserInfoHead");
   tolua_variable(tolua_S,"wFaceID",tolua_get_tagUserInfoHead_wFaceID,tolua_set_tagUserInfoHead_wFaceID);
   tolua_variable(tolua_S,"dwUserID",tolua_get_tagUserInfoHead_dwUserID,tolua_set_tagUserInfoHead_dwUserID);
   tolua_variable(tolua_S,"dwGameID",tolua_get_tagUserInfoHead_dwGameID,tolua_set_tagUserInfoHead_dwGameID);
   tolua_variable(tolua_S,"dwGroupID",tolua_get_tagUserInfoHead_dwGroupID,tolua_set_tagUserInfoHead_dwGroupID);
   tolua_variable(tolua_S,"dwUserRight",tolua_get_tagUserInfoHead_dwUserRight,tolua_set_tagUserInfoHead_dwUserRight);
   tolua_variable(tolua_S,"lLoveliness",tolua_get_tagUserInfoHead_lLoveliness,tolua_set_tagUserInfoHead_lLoveliness);
   tolua_variable(tolua_S,"dwMasterRight",tolua_get_tagUserInfoHead_dwMasterRight,tolua_set_tagUserInfoHead_dwMasterRight);
   tolua_variable(tolua_S,"cbGender",tolua_get_tagUserInfoHead_cbGender,tolua_set_tagUserInfoHead_cbGender);
   tolua_variable(tolua_S,"cbMemberOrder",tolua_get_tagUserInfoHead_cbMemberOrder,tolua_set_tagUserInfoHead_cbMemberOrder);
   tolua_variable(tolua_S,"cbMasterOrder",tolua_get_tagUserInfoHead_cbMasterOrder,tolua_set_tagUserInfoHead_cbMasterOrder);
   tolua_variable(tolua_S,"wTableID",tolua_get_tagUserInfoHead_wTableID,tolua_set_tagUserInfoHead_wTableID);
   tolua_variable(tolua_S,"wChairID",tolua_get_tagUserInfoHead_wChairID,tolua_set_tagUserInfoHead_wChairID);
   tolua_variable(tolua_S,"cbUserStatus",tolua_get_tagUserInfoHead_cbUserStatus,tolua_set_tagUserInfoHead_cbUserStatus);
   tolua_variable(tolua_S,"UserScoreInfo",tolua_get_tagUserInfoHead_UserScoreInfo,tolua_set_tagUserInfoHead_UserScoreInfo);
   tolua_variable(tolua_S,"dwCustomFaceVer",tolua_get_tagUserInfoHead_dwCustomFaceVer,tolua_set_tagUserInfoHead_dwCustomFaceVer);
   tolua_array(tolua_S,"dwPropResidualTime",tolua_get_GlobDefTolua_tagUserInfoHead_dwPropResidualTime,tolua_set_GlobDefTolua_tagUserInfoHead_dwPropResidualTime);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"tagUserData","tagUserData","",NULL);
  tolua_beginmodule(tolua_S,"tagUserData");
   tolua_variable(tolua_S,"wFaceID",tolua_get_tagUserData_wFaceID,tolua_set_tagUserData_wFaceID);
   tolua_variable(tolua_S,"dwCustomFaceVer",tolua_get_tagUserData_dwCustomFaceVer,tolua_set_tagUserData_dwCustomFaceVer);
   tolua_variable(tolua_S,"dwUserID",tolua_get_tagUserData_dwUserID,tolua_set_tagUserData_dwUserID);
   tolua_variable(tolua_S,"dwGroupID",tolua_get_tagUserData_dwGroupID,tolua_set_tagUserData_dwGroupID);
   tolua_variable(tolua_S,"dwGameID",tolua_get_tagUserData_dwGameID,tolua_set_tagUserData_dwGameID);
   tolua_variable(tolua_S,"dwUserRight",tolua_get_tagUserData_dwUserRight,tolua_set_tagUserData_dwUserRight);
   tolua_variable(tolua_S,"lLoveliness",tolua_get_tagUserData_lLoveliness,tolua_set_tagUserData_lLoveliness);
   tolua_variable(tolua_S,"dwMasterRight",tolua_get_tagUserData_dwMasterRight,tolua_set_tagUserData_dwMasterRight);
   tolua_array(tolua_S,"szName",tolua_get_GlobDefTolua_tagUserData_szName,tolua_set_GlobDefTolua_tagUserData_szName);
   tolua_array(tolua_S,"szGroupName",tolua_get_GlobDefTolua_tagUserData_szGroupName,tolua_set_GlobDefTolua_tagUserData_szGroupName);
   tolua_array(tolua_S,"szUnderWrite",tolua_get_GlobDefTolua_tagUserData_szUnderWrite,tolua_set_GlobDefTolua_tagUserData_szUnderWrite);
   tolua_variable(tolua_S,"cbGender",tolua_get_tagUserData_cbGender,tolua_set_tagUserData_cbGender);
   tolua_variable(tolua_S,"cbMemberOrder",tolua_get_tagUserData_cbMemberOrder,tolua_set_tagUserData_cbMemberOrder);
   tolua_variable(tolua_S,"cbMasterOrder",tolua_get_tagUserData_cbMasterOrder,tolua_set_tagUserData_cbMasterOrder);
   tolua_variable(tolua_S,"lInsureScore",tolua_get_tagUserData_lInsureScore,tolua_set_tagUserData_lInsureScore);
   tolua_variable(tolua_S,"lGameGold",tolua_get_tagUserData_lGameGold,tolua_set_tagUserData_lGameGold);
   tolua_variable(tolua_S,"lScore",tolua_get_tagUserData_lScore,tolua_set_tagUserData_lScore);
   tolua_variable(tolua_S,"lWinCount",tolua_get_tagUserData_lWinCount,tolua_set_tagUserData_lWinCount);
   tolua_variable(tolua_S,"lLostCount",tolua_get_tagUserData_lLostCount,tolua_set_tagUserData_lLostCount);
   tolua_variable(tolua_S,"lDrawCount",tolua_get_tagUserData_lDrawCount,tolua_set_tagUserData_lDrawCount);
   tolua_variable(tolua_S,"lFleeCount",tolua_get_tagUserData_lFleeCount,tolua_set_tagUserData_lFleeCount);
   tolua_variable(tolua_S,"lExperience",tolua_get_tagUserData_lExperience,tolua_set_tagUserData_lExperience);
   tolua_variable(tolua_S,"wTableID",tolua_get_tagUserData_wTableID,tolua_set_tagUserData_wTableID);
   tolua_variable(tolua_S,"wChairID",tolua_get_tagUserData_wChairID,tolua_set_tagUserData_wChairID);
   tolua_variable(tolua_S,"cbUserStatus",tolua_get_tagUserData_cbUserStatus,tolua_set_tagUserData_cbUserStatus);
   tolua_variable(tolua_S,"cbCompanion",tolua_get_tagUserData_cbCompanion,tolua_set_tagUserData_cbCompanion);
   tolua_array(tolua_S,"dwPropResidualTime",tolua_get_GlobDefTolua_tagUserData_dwPropResidualTime,tolua_set_GlobDefTolua_tagUserData_dwPropResidualTime);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"tagClientSerial","tagClientSerial","",NULL);
  tolua_beginmodule(tolua_S,"tagClientSerial");
   tolua_variable(tolua_S,"dwSystemVer",tolua_get_tagClientSerial_dwSystemVer,tolua_set_tagClientSerial_dwSystemVer);
   tolua_array(tolua_S,"dwComputerID",tolua_get_GlobDefTolua_tagClientSerial_dwComputerID,tolua_set_GlobDefTolua_tagClientSerial_dwComputerID);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"tagOptionBuffer","tagOptionBuffer","",NULL);
  tolua_beginmodule(tolua_S,"tagOptionBuffer");
   tolua_variable(tolua_S,"cbBufferLen",tolua_get_tagOptionBuffer_cbBufferLen,tolua_set_tagOptionBuffer_cbBufferLen);
   tolua_array(tolua_S,"cbOptionBuf",tolua_get_GlobDefTolua_tagOptionBuffer_cbOptionBuf,tolua_set_GlobDefTolua_tagOptionBuffer_cbOptionBuf);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_GlobDefTolua (lua_State* tolua_S) {
 return tolua_GlobDefTolua_open(tolua_S);
};
#endif


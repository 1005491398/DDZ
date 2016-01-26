//
//  TestLuaStruct.cpp
//  HelloLua
//
//  Created by CT on 9/25/15.
//
//

#include "TestLuaStruct.hpp"
#include "CCLuaEngine.h"
#include "CCLuaStack.h"
#include "cocos2d.h"
#include "lua.h"
#include "lualib.h"
USING_NS_CC;

struct test {
    int a;
    char b;
    char c;
};

void TestLuaStruct::testToLua()
{
    auto luaStack = LuaEngine::getInstance()->getLuaStack();
    auto L = luaStack->getLuaState();
    
    char buff[1024];
    test *t = (test *)buff;
    t->a = 10086;
    t->b = 'c';
    t->c = 'd';
    lua_getglobal(L, "struct_test_d");
    lua_pushlstring(L, buff, sizeof(test));
    lua_call(L, 1, 0);
    lua_pop(L, 2);
}

void TestLuaStruct::testFromLua(const char *data, long size)
{
    test *t = (test *)data;
    CCLOG("Data is %d %c %c,Size is %ld", t->a, t->b, t->c, size);
    
}
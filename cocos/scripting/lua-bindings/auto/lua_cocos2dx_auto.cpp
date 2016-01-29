#include "lua_cocos2dx_auto.hpp"
#include "cocos2d.h"
#include "CCAsyncTaskPool.h"
#include "tolua_fix.h"
#include "LuaBasicConversions.h"


int lua_cocos2dx_Node_addChild(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;
#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);
#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_addChild'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 2) {
            cocos2d::Node* arg0;
            ok &= luaval_to_object<cocos2d::Node>(tolua_S, 2, "cc.Node",&arg0, "cc.Node:addChild");

            if (!ok) { break; }
            int arg1;
            ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "cc.Node:addChild");

            if (!ok) { break; }
            cobj->addChild(arg0, arg1);
            lua_settop(tolua_S, 1);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 1) {
            cocos2d::Node* arg0;
            ok &= luaval_to_object<cocos2d::Node>(tolua_S, 2, "cc.Node",&arg0, "cc.Node:addChild");

            if (!ok) { break; }
            cobj->addChild(arg0);
            lua_settop(tolua_S, 1);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 3) {
            cocos2d::Node* arg0;
            ok &= luaval_to_object<cocos2d::Node>(tolua_S, 2, "cc.Node",&arg0, "cc.Node:addChild");

            if (!ok) { break; }
            int arg1;
            ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "cc.Node:addChild");

            if (!ok) { break; }
            int arg2;
            ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "cc.Node:addChild");

            if (!ok) { break; }
            cobj->addChild(arg0, arg1, arg2);
            lua_settop(tolua_S, 1);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 3) {
            cocos2d::Node* arg0;
            ok &= luaval_to_object<cocos2d::Node>(tolua_S, 2, "cc.Node",&arg0, "cc.Node:addChild");

            if (!ok) { break; }
            int arg1;
            ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "cc.Node:addChild");

            if (!ok) { break; }
            std::string arg2;
            ok &= luaval_to_std_string(tolua_S, 4,&arg2, "cc.Node:addChild");

            if (!ok) { break; }
            cobj->addChild(arg0, arg1, arg2);
            lua_settop(tolua_S, 1);
            return 1;
        }
    }while(0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n",  "cc.Node:addChild",argc, 3);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_addChild'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_setOpacityModifyRGB(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_setOpacityModifyRGB'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "cc.Node:setOpacityModifyRGB");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_setOpacityModifyRGB'", nullptr);
            return 0;
        }
        cobj->setOpacityModifyRGB(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:setOpacityModifyRGB",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_setOpacityModifyRGB'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_setCascadeOpacityEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_setCascadeOpacityEnabled'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "cc.Node:setCascadeOpacityEnabled");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_setCascadeOpacityEnabled'", nullptr);
            return 0;
        }
        cobj->setCascadeOpacityEnabled(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:setCascadeOpacityEnabled",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_setCascadeOpacityEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_getChildren(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;
#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);
#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_getChildren'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 0) {
            const cocos2d::Vector<cocos2d::Node *>& ret = cobj->getChildren();
            ccvector_to_luaval(tolua_S, ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 0) {
            cocos2d::Vector<cocos2d::Node *>& ret = cobj->getChildren();
            ccvector_to_luaval(tolua_S, ret);
            return 1;
        }
    }while(0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n",  "cc.Node:getChildren",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_getChildren'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_pause(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_pause'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_pause'", nullptr);
            return 0;
        }
        cobj->pause();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:pause",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_pause'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_convertToWorldSpaceAR(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_convertToWorldSpaceAR'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        cocos2d::Vec2 arg0;

        ok &= luaval_to_vec2(tolua_S, 2, &arg0, "cc.Node:convertToWorldSpaceAR");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_convertToWorldSpaceAR'", nullptr);
            return 0;
        }
        cocos2d::Vec2 ret = cobj->convertToWorldSpaceAR(arg0);
        vec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:convertToWorldSpaceAR",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_convertToWorldSpaceAR'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_isIgnoreAnchorPointForPosition(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_isIgnoreAnchorPointForPosition'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_isIgnoreAnchorPointForPosition'", nullptr);
            return 0;
        }
        bool ret = cobj->isIgnoreAnchorPointForPosition();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:isIgnoreAnchorPointForPosition",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_isIgnoreAnchorPointForPosition'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_getChildByName(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_getChildByName'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.Node:getChildByName");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_getChildByName'", nullptr);
            return 0;
        }
        cocos2d::Node* ret = cobj->getChildByName(arg0);
        object_to_luaval<cocos2d::Node>(tolua_S, "cc.Node",(cocos2d::Node*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:getChildByName",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_getChildByName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_updateDisplayedOpacity(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_updateDisplayedOpacity'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        uint16_t arg0;

        ok &= luaval_to_uint16(tolua_S, 2,&arg0, "cc.Node:updateDisplayedOpacity");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_updateDisplayedOpacity'", nullptr);
            return 0;
        }
        cobj->updateDisplayedOpacity(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:updateDisplayedOpacity",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_updateDisplayedOpacity'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_init(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_init'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_init'", nullptr);
            return 0;
        }
        bool ret = cobj->init();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:init",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_init'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_setRotation(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_setRotation'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "cc.Node:setRotation");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_setRotation'", nullptr);
            return 0;
        }
        cobj->setRotation(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:setRotation",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_setRotation'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_setScaleY(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_setScaleY'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "cc.Node:setScaleY");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_setScaleY'", nullptr);
            return 0;
        }
        cobj->setScaleY(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:setScaleY",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_setScaleY'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_setScaleX(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_setScaleX'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "cc.Node:setScaleX");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_setScaleX'", nullptr);
            return 0;
        }
        cobj->setScaleX(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:setScaleX",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_setScaleX'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_getOpacity(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_getOpacity'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_getOpacity'", nullptr);
            return 0;
        }
        uint16_t ret = cobj->getOpacity();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:getOpacity",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_getOpacity'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_removeChild(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_removeChild'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        cocos2d::Node* arg0;

        ok &= luaval_to_object<cocos2d::Node>(tolua_S, 2, "cc.Node",&arg0, "cc.Node:removeChild");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_removeChild'", nullptr);
            return 0;
        }
        cobj->removeChild(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 2)
    {
        cocos2d::Node* arg0;
        bool arg1;

        ok &= luaval_to_object<cocos2d::Node>(tolua_S, 2, "cc.Node",&arg0, "cc.Node:removeChild");

        ok &= luaval_to_boolean(tolua_S, 3,&arg1, "cc.Node:removeChild");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_removeChild'", nullptr);
            return 0;
        }
        cobj->removeChild(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:removeChild",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_removeChild'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_convertToWorldSpace(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_convertToWorldSpace'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        cocos2d::Vec2 arg0;

        ok &= luaval_to_vec2(tolua_S, 2, &arg0, "cc.Node:convertToWorldSpace");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_convertToWorldSpace'", nullptr);
            return 0;
        }
        cocos2d::Vec2 ret = cobj->convertToWorldSpace(arg0);
        vec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:convertToWorldSpace",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_convertToWorldSpace'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_getEventDispatcher(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_getEventDispatcher'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_getEventDispatcher'", nullptr);
            return 0;
        }
        cocos2d::EventDispatcher* ret = cobj->getEventDispatcher();
        object_to_luaval<cocos2d::EventDispatcher>(tolua_S, "cc.EventDispatcher",(cocos2d::EventDispatcher*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:getEventDispatcher",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_getEventDispatcher'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_onEnterTransitionDidFinish(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_onEnterTransitionDidFinish'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_onEnterTransitionDidFinish'", nullptr);
            return 0;
        }
        cobj->onEnterTransitionDidFinish();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:onEnterTransitionDidFinish",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_onEnterTransitionDidFinish'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_stopActionsByFlags(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_stopActionsByFlags'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        unsigned int arg0;

        ok &= luaval_to_uint32(tolua_S, 2,&arg0, "cc.Node:stopActionsByFlags");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_stopActionsByFlags'", nullptr);
            return 0;
        }
        cobj->stopActionsByFlags(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:stopActionsByFlags",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_stopActionsByFlags'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_setNormalizedPosition(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_setNormalizedPosition'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        cocos2d::Vec2 arg0;

        ok &= luaval_to_vec2(tolua_S, 2, &arg0, "cc.Node:setNormalizedPosition");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_setNormalizedPosition'", nullptr);
            return 0;
        }
        cobj->setNormalizedPosition(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:setNormalizedPosition",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_setNormalizedPosition'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_convertTouchToNodeSpace(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_convertTouchToNodeSpace'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        cocos2d::Touch* arg0;

        ok &= luaval_to_object<cocos2d::Touch>(tolua_S, 2, "cc.Touch",&arg0, "cc.Node:convertTouchToNodeSpace");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_convertTouchToNodeSpace'", nullptr);
            return 0;
        }
        cocos2d::Vec2 ret = cobj->convertTouchToNodeSpace(arg0);
        vec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:convertTouchToNodeSpace",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_convertTouchToNodeSpace'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_removeAllChildrenWithCleanup(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;
#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);
#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_removeAllChildrenWithCleanup'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 1) {
            bool arg0;
            ok &= luaval_to_boolean(tolua_S, 2,&arg0, "cc.Node:removeAllChildrenWithCleanup");

            if (!ok) { break; }
            cobj->removeAllChildrenWithCleanup(arg0);
            lua_settop(tolua_S, 1);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 0) {
            cobj->removeAllChildren();
            lua_settop(tolua_S, 1);
            return 1;
        }
    }while(0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n",  "cc.Node:removeAllChildren",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_removeAllChildrenWithCleanup'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_isCascadeOpacityEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_isCascadeOpacityEnabled'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_isCascadeOpacityEnabled'", nullptr);
            return 0;
        }
        bool ret = cobj->isCascadeOpacityEnabled();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:isCascadeOpacityEnabled",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_isCascadeOpacityEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_setParent(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_setParent'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        cocos2d::Node* arg0;

        ok &= luaval_to_object<cocos2d::Node>(tolua_S, 2, "cc.Node",&arg0, "cc.Node:setParent");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_setParent'", nullptr);
            return 0;
        }
        cobj->setParent(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:setParent",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_setParent'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_getName(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_getName'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_getName'", nullptr);
            return 0;
        }
        const std::string& ret = cobj->getName();
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:getName",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_getName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_resume(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_resume'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_resume'", nullptr);
            return 0;
        }
        cobj->resume();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:resume",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_resume'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_convertTouchToNodeSpaceAR(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_convertTouchToNodeSpaceAR'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        cocos2d::Touch* arg0;

        ok &= luaval_to_object<cocos2d::Touch>(tolua_S, 2, "cc.Touch",&arg0, "cc.Node:convertTouchToNodeSpaceAR");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_convertTouchToNodeSpaceAR'", nullptr);
            return 0;
        }
        cocos2d::Vec2 ret = cobj->convertTouchToNodeSpaceAR(arg0);
        vec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:convertTouchToNodeSpaceAR",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_convertTouchToNodeSpaceAR'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_convertToNodeSpace(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_convertToNodeSpace'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        cocos2d::Vec2 arg0;

        ok &= luaval_to_vec2(tolua_S, 2, &arg0, "cc.Node:convertToNodeSpace");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_convertToNodeSpace'", nullptr);
            return 0;
        }
        cocos2d::Vec2 ret = cobj->convertToNodeSpace(arg0);
        vec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:convertToNodeSpace",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_convertToNodeSpace'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_isOpacityModifyRGB(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_isOpacityModifyRGB'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_isOpacityModifyRGB'", nullptr);
            return 0;
        }
        bool ret = cobj->isOpacityModifyRGB();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:isOpacityModifyRGB",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_isOpacityModifyRGB'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_setPosition(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;
#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);
#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_setPosition'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 2) {
            double arg0;
            ok &= luaval_to_number(tolua_S, 2,&arg0, "cc.Node:setPosition");

            if (!ok) { break; }
            double arg1;
            ok &= luaval_to_number(tolua_S, 3,&arg1, "cc.Node:setPosition");

            if (!ok) { break; }
            cobj->setPosition(arg0, arg1);
            lua_settop(tolua_S, 1);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 1) {
            cocos2d::Vec2 arg0;
            ok &= luaval_to_vec2(tolua_S, 2, &arg0, "cc.Node:setPosition");

            if (!ok) { break; }
            cobj->setPosition(arg0);
            lua_settop(tolua_S, 1);
            return 1;
        }
    }while(0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n",  "cc.Node:setPosition",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_setPosition'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_ignoreAnchorPointForPosition(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_ignoreAnchorPointForPosition'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "cc.Node:ignoreAnchorPointForPosition");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_ignoreAnchorPointForPosition'", nullptr);
            return 0;
        }
        cobj->ignoreAnchorPointForPosition(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:ignoreAnchorPointForPosition",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_ignoreAnchorPointForPosition'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_setPositionX(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_setPositionX'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "cc.Node:setPositionX");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_setPositionX'", nullptr);
            return 0;
        }
        cobj->setPositionX(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:setPositionX",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_setPositionX'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_getAnchorPoint(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_getAnchorPoint'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_getAnchorPoint'", nullptr);
            return 0;
        }
        const cocos2d::Vec2& ret = cobj->getAnchorPoint();
        vec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:getAnchorPoint",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_getAnchorPoint'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_isVisible(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_isVisible'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_isVisible'", nullptr);
            return 0;
        }
        bool ret = cobj->isVisible();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:isVisible",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_isVisible'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_getChildrenCount(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_getChildrenCount'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_getChildrenCount'", nullptr);
            return 0;
        }
        ssize_t ret = cobj->getChildrenCount();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:getChildrenCount",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_getChildrenCount'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_onEnter(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_onEnter'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_onEnter'", nullptr);
            return 0;
        }
        cobj->onEnter();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:onEnter",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_onEnter'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_convertToNodeSpaceAR(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_convertToNodeSpaceAR'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        cocos2d::Vec2 arg0;

        ok &= luaval_to_vec2(tolua_S, 2, &arg0, "cc.Node:convertToNodeSpaceAR");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_convertToNodeSpaceAR'", nullptr);
            return 0;
        }
        cocos2d::Vec2 ret = cobj->convertToNodeSpaceAR(arg0);
        vec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:convertToNodeSpaceAR",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_convertToNodeSpaceAR'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_runAction(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_runAction'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        cocos2d::Action* arg0;

        ok &= luaval_to_object<cocos2d::Action>(tolua_S, 2, "cc.Action",&arg0, "cc.Node:runAction");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_runAction'", nullptr);
            return 0;
        }
        cocos2d::Action* ret = cobj->runAction(arg0);
        object_to_luaval<cocos2d::Action>(tolua_S, "cc.Action",(cocos2d::Action*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:runAction",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_runAction'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_visit(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;
#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);
#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_visit'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 0) {
            cobj->visit();
            lua_settop(tolua_S, 1);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 3) {
            cocos2d::Renderer* arg0;
            ok &= luaval_to_object<cocos2d::Renderer>(tolua_S, 2, "cc.Renderer",&arg0, "cc.Node:visit");

            if (!ok) { break; }
            cocos2d::Mat4 arg1;
            ok &= luaval_to_mat4(tolua_S, 3, &arg1, "cc.Node:visit");

            if (!ok) { break; }
            unsigned int arg2;
            ok &= luaval_to_uint32(tolua_S, 4,&arg2, "cc.Node:visit");

            if (!ok) { break; }
            cobj->visit(arg0, arg1, arg2);
            lua_settop(tolua_S, 1);
            return 1;
        }
    }while(0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n",  "cc.Node:visit",argc, 3);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_visit'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_getRotation(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_getRotation'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_getRotation'", nullptr);
            return 0;
        }
        double ret = cobj->getRotation();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:getRotation",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_getRotation'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_getAnchorPointInPoints(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_getAnchorPointInPoints'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_getAnchorPointInPoints'", nullptr);
            return 0;
        }
        const cocos2d::Vec2& ret = cobj->getAnchorPointInPoints();
        vec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:getAnchorPointInPoints",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_getAnchorPointInPoints'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_removeChildByName(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_removeChildByName'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.Node:removeChildByName");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_removeChildByName'", nullptr);
            return 0;
        }
        cobj->removeChildByName(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 2)
    {
        std::string arg0;
        bool arg1;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.Node:removeChildByName");

        ok &= luaval_to_boolean(tolua_S, 3,&arg1, "cc.Node:removeChildByName");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_removeChildByName'", nullptr);
            return 0;
        }
        cobj->removeChildByName(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:removeChildByName",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_removeChildByName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_stopAllActions(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_stopAllActions'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_stopAllActions'", nullptr);
            return 0;
        }
        cobj->stopAllActions();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:stopAllActions",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_stopAllActions'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_getDisplayedColor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_getDisplayedColor'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_getDisplayedColor'", nullptr);
            return 0;
        }
        const cocos2d::Color3B& ret = cobj->getDisplayedColor();
        color3b_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:getDisplayedColor",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_getDisplayedColor'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_setName(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_setName'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.Node:setName");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_setName'", nullptr);
            return 0;
        }
        cobj->setName(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:setName",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_setName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_getDisplayedOpacity(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_getDisplayedOpacity'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_getDisplayedOpacity'", nullptr);
            return 0;
        }
        uint16_t ret = cobj->getDisplayedOpacity();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:getDisplayedOpacity",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_getDisplayedOpacity'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_getScheduler(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;
#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);
#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_getScheduler'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 0) {
            const cocos2d::Scheduler* ret = cobj->getScheduler();
            object_to_luaval<cocos2d::Scheduler>(tolua_S, "cc.Scheduler",(cocos2d::Scheduler*)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 0) {
            cocos2d::Scheduler* ret = cobj->getScheduler();
            object_to_luaval<cocos2d::Scheduler>(tolua_S, "cc.Scheduler",(cocos2d::Scheduler*)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n",  "cc.Node:getScheduler",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_getScheduler'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_setColor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_setColor'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        cocos2d::Color3B arg0;

        ok &= luaval_to_color3b(tolua_S, 2, &arg0, "cc.Node:setColor");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_setColor'", nullptr);
            return 0;
        }
        cobj->setColor(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:setColor",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_setColor'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_isRunning(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_isRunning'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_isRunning'", nullptr);
            return 0;
        }
        bool ret = cobj->isRunning();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:isRunning",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_isRunning'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_getParent(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;
#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);
#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_getParent'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 0) {
            const cocos2d::Node* ret = cobj->getParent();
            object_to_luaval<cocos2d::Node>(tolua_S, "cc.Node",(cocos2d::Node*)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 0) {
            cocos2d::Node* ret = cobj->getParent();
            object_to_luaval<cocos2d::Node>(tolua_S, "cc.Node",(cocos2d::Node*)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n",  "cc.Node:getParent",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_getParent'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_getPositionY(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_getPositionY'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_getPositionY'", nullptr);
            return 0;
        }
        double ret = cobj->getPositionY();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:getPositionY",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_getPositionY'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_getPositionX(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_getPositionX'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_getPositionX'", nullptr);
            return 0;
        }
        double ret = cobj->getPositionX();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:getPositionX",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_getPositionX'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_setPositionY(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_setPositionY'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "cc.Node:setPositionY");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_setPositionY'", nullptr);
            return 0;
        }
        cobj->setPositionY(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:setPositionY",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_setPositionY'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_updateDisplayedColor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_updateDisplayedColor'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        cocos2d::Color3B arg0;

        ok &= luaval_to_color3b(tolua_S, 2, &arg0, "cc.Node:updateDisplayedColor");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_updateDisplayedColor'", nullptr);
            return 0;
        }
        cobj->updateDisplayedColor(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:updateDisplayedColor",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_updateDisplayedColor'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_setVisible(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_setVisible'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "cc.Node:setVisible");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_setVisible'", nullptr);
            return 0;
        }
        cobj->setVisible(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:setVisible",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_setVisible'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_isScheduled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_isScheduled'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.Node:isScheduled");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_isScheduled'", nullptr);
            return 0;
        }
        bool ret = cobj->isScheduled(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:isScheduled",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_isScheduled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_setScale(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;
#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);
#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_setScale'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 2) {
            double arg0;
            ok &= luaval_to_number(tolua_S, 2,&arg0, "cc.Node:setScale");

            if (!ok) { break; }
            double arg1;
            ok &= luaval_to_number(tolua_S, 3,&arg1, "cc.Node:setScale");

            if (!ok) { break; }
            cobj->setScale(arg0, arg1);
            lua_settop(tolua_S, 1);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 1) {
            double arg0;
            ok &= luaval_to_number(tolua_S, 2,&arg0, "cc.Node:setScale");

            if (!ok) { break; }
            cobj->setScale(arg0);
            lua_settop(tolua_S, 1);
            return 1;
        }
    }while(0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n",  "cc.Node:setScale",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_setScale'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_getScaleY(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_getScaleY'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_getScaleY'", nullptr);
            return 0;
        }
        double ret = cobj->getScaleY();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:getScaleY",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_getScaleY'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_getScaleX(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_getScaleX'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_getScaleX'", nullptr);
            return 0;
        }
        double ret = cobj->getScaleX();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:getScaleX",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_getScaleX'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_setOpacity(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_setOpacity'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        uint16_t arg0;

        ok &= luaval_to_uint16(tolua_S, 2,&arg0, "cc.Node:setOpacity");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_setOpacity'", nullptr);
            return 0;
        }
        cobj->setOpacity(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:setOpacity",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_setOpacity'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_cleanup(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_cleanup'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_cleanup'", nullptr);
            return 0;
        }
        cobj->cleanup();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:cleanup",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_cleanup'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_getContentSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_getContentSize'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_getContentSize'", nullptr);
            return 0;
        }
        const cocos2d::Size& ret = cobj->getContentSize();
        size_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:getContentSize",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_getContentSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_getColor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_getColor'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_getColor'", nullptr);
            return 0;
        }
        const cocos2d::Color3B& ret = cobj->getColor();
        color3b_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:getColor",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_getColor'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_getBoundingBox(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_getBoundingBox'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_getBoundingBox'", nullptr);
            return 0;
        }
        cocos2d::Rect ret = cobj->getBoundingBox();
        rect_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:getBoundingBox",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_getBoundingBox'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_draw(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;
#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);
#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_draw'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 0) {
            cobj->draw();
            lua_settop(tolua_S, 1);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 3) {
            cocos2d::Renderer* arg0;
            ok &= luaval_to_object<cocos2d::Renderer>(tolua_S, 2, "cc.Renderer",&arg0, "cc.Node:draw");

            if (!ok) { break; }
            cocos2d::Mat4 arg1;
            ok &= luaval_to_mat4(tolua_S, 3, &arg1, "cc.Node:draw");

            if (!ok) { break; }
            unsigned int arg2;
            ok &= luaval_to_uint32(tolua_S, 4,&arg2, "cc.Node:draw");

            if (!ok) { break; }
            cobj->draw(arg0, arg1, arg2);
            lua_settop(tolua_S, 1);
            return 1;
        }
    }while(0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n",  "cc.Node:draw",argc, 3);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_draw'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_removeFromParentAndCleanup(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;
#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);
#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_removeFromParentAndCleanup'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 1) {
            bool arg0;
            ok &= luaval_to_boolean(tolua_S, 2,&arg0, "cc.Node:removeFromParentAndCleanup");

            if (!ok) { break; }
            cobj->removeFromParentAndCleanup(arg0);
            lua_settop(tolua_S, 1);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 0) {
            cobj->removeFromParent();
            lua_settop(tolua_S, 1);
            return 1;
        }
    }while(0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n",  "cc.Node:removeFromParent",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_removeFromParentAndCleanup'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_update(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_update'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "cc.Node:update");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_update'", nullptr);
            return 0;
        }
        cobj->update(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:update",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_update'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_sortAllChildren(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_sortAllChildren'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_sortAllChildren'", nullptr);
            return 0;
        }
        cobj->sortAllChildren();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:sortAllChildren",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_sortAllChildren'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_getScale(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_getScale'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_getScale'", nullptr);
            return 0;
        }
        double ret = cobj->getScale();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:getScale",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_getScale'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_getNormalizedPosition(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_getNormalizedPosition'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_getNormalizedPosition'", nullptr);
            return 0;
        }
        const cocos2d::Vec2& ret = cobj->getNormalizedPosition();
        vec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:getNormalizedPosition",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_getNormalizedPosition'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_stopAction(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Node*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Node_stopAction'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        cocos2d::Action* arg0;

        ok &= luaval_to_object<cocos2d::Action>(tolua_S, 2, "cc.Action",&arg0, "cc.Node:stopAction");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_stopAction'", nullptr);
            return 0;
        }
        cobj->stopAction(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:stopAction",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_stopAction'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Node_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if TOLUA_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.Node",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_create'", nullptr);
            return 0;
        }
        cocos2d::Node* ret = cocos2d::Node::create();
        object_to_luaval<cocos2d::Node>(tolua_S, "cc.Node",(cocos2d::Node*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "cc.Node:create",argc, 0);
    return 0;
#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_Node_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Node* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Node_constructor'", nullptr);
            return 0;
        }
        cobj = new cocos2d::Node();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"cc.Node");
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Node:Node",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Node_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_Node_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (Node)");
    return 0;
}

int lua_register_cocos2dx_Node(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"cc.Node");
    tolua_cclass(tolua_S,"Node","cc.Node","cc.Ref",nullptr);

    tolua_beginmodule(tolua_S,"Node");
        tolua_function(tolua_S,"new",lua_cocos2dx_Node_constructor);
        tolua_function(tolua_S,"addChild",lua_cocos2dx_Node_addChild);
        tolua_function(tolua_S,"setOpacityModifyRGB",lua_cocos2dx_Node_setOpacityModifyRGB);
        tolua_function(tolua_S,"setCascadeOpacityEnabled",lua_cocos2dx_Node_setCascadeOpacityEnabled);
        tolua_function(tolua_S,"getChildren",lua_cocos2dx_Node_getChildren);
        tolua_function(tolua_S,"pause",lua_cocos2dx_Node_pause);
        tolua_function(tolua_S,"convertToWorldSpaceAR",lua_cocos2dx_Node_convertToWorldSpaceAR);
        tolua_function(tolua_S,"isIgnoreAnchorPointForPosition",lua_cocos2dx_Node_isIgnoreAnchorPointForPosition);
        tolua_function(tolua_S,"getChildByName",lua_cocos2dx_Node_getChildByName);
        tolua_function(tolua_S,"updateDisplayedOpacity",lua_cocos2dx_Node_updateDisplayedOpacity);
        tolua_function(tolua_S,"init",lua_cocos2dx_Node_init);
        tolua_function(tolua_S,"setRotation",lua_cocos2dx_Node_setRotation);
        tolua_function(tolua_S,"setScaleY",lua_cocos2dx_Node_setScaleY);
        tolua_function(tolua_S,"setScaleX",lua_cocos2dx_Node_setScaleX);
        tolua_function(tolua_S,"getOpacity",lua_cocos2dx_Node_getOpacity);
        tolua_function(tolua_S,"removeChild",lua_cocos2dx_Node_removeChild);
        tolua_function(tolua_S,"convertToWorldSpace",lua_cocos2dx_Node_convertToWorldSpace);
        tolua_function(tolua_S,"getEventDispatcher",lua_cocos2dx_Node_getEventDispatcher);
        tolua_function(tolua_S,"onEnterTransitionDidFinish",lua_cocos2dx_Node_onEnterTransitionDidFinish);
        tolua_function(tolua_S,"stopActionsByFlags",lua_cocos2dx_Node_stopActionsByFlags);
        tolua_function(tolua_S,"setNormalizedPosition",lua_cocos2dx_Node_setNormalizedPosition);
        tolua_function(tolua_S,"convertTouchToNodeSpace",lua_cocos2dx_Node_convertTouchToNodeSpace);
        tolua_function(tolua_S,"removeAllChildren",lua_cocos2dx_Node_removeAllChildrenWithCleanup);
        tolua_function(tolua_S,"isCascadeOpacityEnabled",lua_cocos2dx_Node_isCascadeOpacityEnabled);
        tolua_function(tolua_S,"setParent",lua_cocos2dx_Node_setParent);
        tolua_function(tolua_S,"getName",lua_cocos2dx_Node_getName);
        tolua_function(tolua_S,"resume",lua_cocos2dx_Node_resume);
        tolua_function(tolua_S,"convertTouchToNodeSpaceAR",lua_cocos2dx_Node_convertTouchToNodeSpaceAR);
        tolua_function(tolua_S,"convertToNodeSpace",lua_cocos2dx_Node_convertToNodeSpace);
        tolua_function(tolua_S,"isOpacityModifyRGB",lua_cocos2dx_Node_isOpacityModifyRGB);
        tolua_function(tolua_S,"setPosition",lua_cocos2dx_Node_setPosition);
        tolua_function(tolua_S,"ignoreAnchorPointForPosition",lua_cocos2dx_Node_ignoreAnchorPointForPosition);
        tolua_function(tolua_S,"setPositionX",lua_cocos2dx_Node_setPositionX);
        tolua_function(tolua_S,"getAnchorPoint",lua_cocos2dx_Node_getAnchorPoint);
        tolua_function(tolua_S,"isVisible",lua_cocos2dx_Node_isVisible);
        tolua_function(tolua_S,"getChildrenCount",lua_cocos2dx_Node_getChildrenCount);
        tolua_function(tolua_S,"onEnter",lua_cocos2dx_Node_onEnter);
        tolua_function(tolua_S,"convertToNodeSpaceAR",lua_cocos2dx_Node_convertToNodeSpaceAR);
        tolua_function(tolua_S,"runAction",lua_cocos2dx_Node_runAction);
        tolua_function(tolua_S,"visit",lua_cocos2dx_Node_visit);
        tolua_function(tolua_S,"getRotation",lua_cocos2dx_Node_getRotation);
        tolua_function(tolua_S,"getAnchorPointInPoints",lua_cocos2dx_Node_getAnchorPointInPoints);
        tolua_function(tolua_S,"removeChildByName",lua_cocos2dx_Node_removeChildByName);
        tolua_function(tolua_S,"stopAllActions",lua_cocos2dx_Node_stopAllActions);
        tolua_function(tolua_S,"getDisplayedColor",lua_cocos2dx_Node_getDisplayedColor);
        tolua_function(tolua_S,"setName",lua_cocos2dx_Node_setName);
        tolua_function(tolua_S,"getDisplayedOpacity",lua_cocos2dx_Node_getDisplayedOpacity);
        tolua_function(tolua_S,"getScheduler",lua_cocos2dx_Node_getScheduler);
        tolua_function(tolua_S,"setColor",lua_cocos2dx_Node_setColor);
        tolua_function(tolua_S,"isRunning",lua_cocos2dx_Node_isRunning);
        tolua_function(tolua_S,"getParent",lua_cocos2dx_Node_getParent);
        tolua_function(tolua_S,"getPositionY",lua_cocos2dx_Node_getPositionY);
        tolua_function(tolua_S,"getPositionX",lua_cocos2dx_Node_getPositionX);
        tolua_function(tolua_S,"setPositionY",lua_cocos2dx_Node_setPositionY);
        tolua_function(tolua_S,"updateDisplayedColor",lua_cocos2dx_Node_updateDisplayedColor);
        tolua_function(tolua_S,"setVisible",lua_cocos2dx_Node_setVisible);
        tolua_function(tolua_S,"isScheduled",lua_cocos2dx_Node_isScheduled);
        tolua_function(tolua_S,"setScale",lua_cocos2dx_Node_setScale);
        tolua_function(tolua_S,"getScaleY",lua_cocos2dx_Node_getScaleY);
        tolua_function(tolua_S,"getScaleX",lua_cocos2dx_Node_getScaleX);
        tolua_function(tolua_S,"setOpacity",lua_cocos2dx_Node_setOpacity);
        tolua_function(tolua_S,"cleanup",lua_cocos2dx_Node_cleanup);
        tolua_function(tolua_S,"getContentSize",lua_cocos2dx_Node_getContentSize);
        tolua_function(tolua_S,"getColor",lua_cocos2dx_Node_getColor);
        tolua_function(tolua_S,"getBoundingBox",lua_cocos2dx_Node_getBoundingBox);
        tolua_function(tolua_S,"draw",lua_cocos2dx_Node_draw);
        tolua_function(tolua_S,"removeFromParent",lua_cocos2dx_Node_removeFromParentAndCleanup);
        tolua_function(tolua_S,"update",lua_cocos2dx_Node_update);
        tolua_function(tolua_S,"sortAllChildren",lua_cocos2dx_Node_sortAllChildren);
        tolua_function(tolua_S,"getScale",lua_cocos2dx_Node_getScale);
        tolua_function(tolua_S,"getNormalizedPosition",lua_cocos2dx_Node_getNormalizedPosition);
        tolua_function(tolua_S,"stopAction",lua_cocos2dx_Node_stopAction);
        tolua_function(tolua_S,"create", lua_cocos2dx_Node_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::Node).name();
    g_luaType[typeName] = "cc.Node";
    g_typeCast["Node"] = "cc.Node";
    return 1;
}

int lua_cocos2dx_Sprite_setSpriteFrame(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Sprite* cobj = nullptr;
    bool ok  = true;
#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Sprite",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::Sprite*)tolua_tousertype(tolua_S,1,0);
#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Sprite_setSpriteFrame'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 1) {
            cocos2d::SpriteFrame* arg0;
            ok &= luaval_to_object<cocos2d::SpriteFrame>(tolua_S, 2, "cc.SpriteFrame",&arg0, "cc.Sprite:setSpriteFrame");

            if (!ok) { break; }
            cobj->setSpriteFrame(arg0);
            lua_settop(tolua_S, 1);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 1) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.Sprite:setSpriteFrame");

            if (!ok) { break; }
            cobj->setSpriteFrame(arg0);
            lua_settop(tolua_S, 1);
            return 1;
        }
    }while(0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n",  "cc.Sprite:setSpriteFrame",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Sprite_setSpriteFrame'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Sprite_setTexture(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Sprite* cobj = nullptr;
    bool ok  = true;
#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Sprite",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::Sprite*)tolua_tousertype(tolua_S,1,0);
#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Sprite_setTexture'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 1) {
            cocos2d::Texture2D* arg0;
            ok &= luaval_to_object<cocos2d::Texture2D>(tolua_S, 2, "cc.Texture2D",&arg0, "cc.Sprite:setTexture");

            if (!ok) { break; }
            cobj->setTexture(arg0);
            lua_settop(tolua_S, 1);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 1) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.Sprite:setTexture");

            if (!ok) { break; }
            cobj->setTexture(arg0);
            lua_settop(tolua_S, 1);
            return 1;
        }
    }while(0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n",  "cc.Sprite:setTexture",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Sprite_setTexture'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Sprite_getTexture(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Sprite* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Sprite*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Sprite_getTexture'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Sprite_getTexture'", nullptr);
            return 0;
        }
        cocos2d::Texture2D* ret = cobj->getTexture();
        object_to_luaval<cocos2d::Texture2D>(tolua_S, "cc.Texture2D",(cocos2d::Texture2D*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Sprite:getTexture",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Sprite_getTexture'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Sprite_setFlippedY(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Sprite* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Sprite*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Sprite_setFlippedY'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "cc.Sprite:setFlippedY");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Sprite_setFlippedY'", nullptr);
            return 0;
        }
        cobj->setFlippedY(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Sprite:setFlippedY",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Sprite_setFlippedY'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Sprite_setFlippedX(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Sprite* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Sprite*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Sprite_setFlippedX'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "cc.Sprite:setFlippedX");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Sprite_setFlippedX'", nullptr);
            return 0;
        }
        cobj->setFlippedX(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Sprite:setFlippedX",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Sprite_setFlippedX'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Sprite_getOffsetPosition(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Sprite* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Sprite*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Sprite_getOffsetPosition'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Sprite_getOffsetPosition'", nullptr);
            return 0;
        }
        const cocos2d::Vec2& ret = cobj->getOffsetPosition();
        vec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Sprite:getOffsetPosition",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Sprite_getOffsetPosition'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Sprite_removeAllChildrenWithCleanup(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Sprite* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Sprite*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Sprite_removeAllChildrenWithCleanup'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "cc.Sprite:removeAllChildrenWithCleanup");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Sprite_removeAllChildrenWithCleanup'", nullptr);
            return 0;
        }
        cobj->removeAllChildrenWithCleanup(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Sprite:removeAllChildrenWithCleanup",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Sprite_removeAllChildrenWithCleanup'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Sprite_setTextureRect(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Sprite* cobj = nullptr;
    bool ok  = true;
#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Sprite",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::Sprite*)tolua_tousertype(tolua_S,1,0);
#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Sprite_setTextureRect'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 3) {
            cocos2d::Rect arg0;
            ok &= luaval_to_rect(tolua_S, 2, &arg0, "cc.Sprite:setTextureRect");

            if (!ok) { break; }
            bool arg1;
            ok &= luaval_to_boolean(tolua_S, 3,&arg1, "cc.Sprite:setTextureRect");

            if (!ok) { break; }
            cocos2d::Size arg2;
            ok &= luaval_to_size(tolua_S, 4, &arg2, "cc.Sprite:setTextureRect");

            if (!ok) { break; }
            cobj->setTextureRect(arg0, arg1, arg2);
            lua_settop(tolua_S, 1);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 1) {
            cocos2d::Rect arg0;
            ok &= luaval_to_rect(tolua_S, 2, &arg0, "cc.Sprite:setTextureRect");

            if (!ok) { break; }
            cobj->setTextureRect(arg0);
            lua_settop(tolua_S, 1);
            return 1;
        }
    }while(0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n",  "cc.Sprite:setTextureRect",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Sprite_setTextureRect'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Sprite_isFrameDisplayed(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Sprite* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Sprite*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Sprite_isFrameDisplayed'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        cocos2d::SpriteFrame* arg0;

        ok &= luaval_to_object<cocos2d::SpriteFrame>(tolua_S, 2, "cc.SpriteFrame",&arg0, "cc.Sprite:isFrameDisplayed");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Sprite_isFrameDisplayed'", nullptr);
            return 0;
        }
        bool ret = cobj->isFrameDisplayed(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Sprite:isFrameDisplayed",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Sprite_isFrameDisplayed'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Sprite_getBlendFunc(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Sprite* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Sprite*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Sprite_getBlendFunc'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Sprite_getBlendFunc'", nullptr);
            return 0;
        }
        const cocos2d::BlendFunc& ret = cobj->getBlendFunc();
        blendfunc_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Sprite:getBlendFunc",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Sprite_getBlendFunc'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Sprite_setDisplayFrameWithAnimationName(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Sprite* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Sprite*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Sprite_setDisplayFrameWithAnimationName'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2)
    {
        std::string arg0;
        ssize_t arg1;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.Sprite:setDisplayFrameWithAnimationName");

        ok &= luaval_to_ssize(tolua_S, 3, &arg1, "cc.Sprite:setDisplayFrameWithAnimationName");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Sprite_setDisplayFrameWithAnimationName'", nullptr);
            return 0;
        }
        cobj->setDisplayFrameWithAnimationName(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Sprite:setDisplayFrameWithAnimationName",argc, 2);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Sprite_setDisplayFrameWithAnimationName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Sprite_getSpriteFrame(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Sprite* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Sprite*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Sprite_getSpriteFrame'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Sprite_getSpriteFrame'", nullptr);
            return 0;
        }
        cocos2d::SpriteFrame* ret = cobj->getSpriteFrame();
        object_to_luaval<cocos2d::SpriteFrame>(tolua_S, "cc.SpriteFrame",(cocos2d::SpriteFrame*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Sprite:getSpriteFrame",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Sprite_getSpriteFrame'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Sprite_isTextureRectRotated(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Sprite* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Sprite*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Sprite_isTextureRectRotated'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Sprite_isTextureRectRotated'", nullptr);
            return 0;
        }
        bool ret = cobj->isTextureRectRotated();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Sprite:isTextureRectRotated",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Sprite_isTextureRectRotated'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Sprite_getTextureRect(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Sprite* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Sprite*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Sprite_getTextureRect'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Sprite_getTextureRect'", nullptr);
            return 0;
        }
        const cocos2d::Rect& ret = cobj->getTextureRect();
        rect_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Sprite:getTextureRect",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Sprite_getTextureRect'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Sprite_setBlendFunc(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Sprite* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Sprite*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Sprite_setBlendFunc'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        cocos2d::BlendFunc arg0;

        ok &= luaval_to_blendfunc(tolua_S, 2, &arg0, "cc.Sprite:setBlendFunc");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Sprite_setBlendFunc'", nullptr);
            return 0;
        }
        cobj->setBlendFunc(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Sprite:setBlendFunc",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Sprite_setBlendFunc'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Sprite_isFlippedX(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Sprite* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Sprite*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Sprite_isFlippedX'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Sprite_isFlippedX'", nullptr);
            return 0;
        }
        bool ret = cobj->isFlippedX();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Sprite:isFlippedX",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Sprite_isFlippedX'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Sprite_isFlippedY(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Sprite* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Sprite*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Sprite_isFlippedY'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Sprite_isFlippedY'", nullptr);
            return 0;
        }
        bool ret = cobj->isFlippedY();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Sprite:isFlippedY",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Sprite_isFlippedY'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Sprite_createWithTexture(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if TOLUA_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do
    {
        if (argc == 2)
        {
            cocos2d::Texture2D* arg0;
            ok &= luaval_to_object<cocos2d::Texture2D>(tolua_S, 2, "cc.Texture2D",&arg0, "cc.Sprite:createWithTexture");
            if (!ok) { break; }
            cocos2d::Rect arg1;
            ok &= luaval_to_rect(tolua_S, 3, &arg1, "cc.Sprite:createWithTexture");
            if (!ok) { break; }
            cocos2d::Sprite* ret = cocos2d::Sprite::createWithTexture(arg0, arg1);
            object_to_luaval<cocos2d::Sprite>(tolua_S, "cc.Sprite",(cocos2d::Sprite*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    do
    {
        if (argc == 3)
        {
            cocos2d::Texture2D* arg0;
            ok &= luaval_to_object<cocos2d::Texture2D>(tolua_S, 2, "cc.Texture2D",&arg0, "cc.Sprite:createWithTexture");
            if (!ok) { break; }
            cocos2d::Rect arg1;
            ok &= luaval_to_rect(tolua_S, 3, &arg1, "cc.Sprite:createWithTexture");
            if (!ok) { break; }
            bool arg2;
            ok &= luaval_to_boolean(tolua_S, 4,&arg2, "cc.Sprite:createWithTexture");
            if (!ok) { break; }
            cocos2d::Sprite* ret = cocos2d::Sprite::createWithTexture(arg0, arg1, arg2);
            object_to_luaval<cocos2d::Sprite>(tolua_S, "cc.Sprite",(cocos2d::Sprite*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    do
    {
        if (argc == 1)
        {
            cocos2d::Texture2D* arg0;
            ok &= luaval_to_object<cocos2d::Texture2D>(tolua_S, 2, "cc.Texture2D",&arg0, "cc.Sprite:createWithTexture");
            if (!ok) { break; }
            cocos2d::Sprite* ret = cocos2d::Sprite::createWithTexture(arg0);
            object_to_luaval<cocos2d::Sprite>(tolua_S, "cc.Sprite",(cocos2d::Sprite*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d", "cc.Sprite:createWithTexture",argc, 1);
    return 0;
#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Sprite_createWithTexture'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_Sprite_createWithSpriteFrameName(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if TOLUA_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        std::string arg0;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.Sprite:createWithSpriteFrameName");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Sprite_createWithSpriteFrameName'", nullptr);
            return 0;
        }
        cocos2d::Sprite* ret = cocos2d::Sprite::createWithSpriteFrameName(arg0);
        object_to_luaval<cocos2d::Sprite>(tolua_S, "cc.Sprite",(cocos2d::Sprite*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "cc.Sprite:createWithSpriteFrameName",argc, 1);
    return 0;
#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Sprite_createWithSpriteFrameName'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_Sprite_createWithSpriteFrame(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if TOLUA_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        cocos2d::SpriteFrame* arg0;
        ok &= luaval_to_object<cocos2d::SpriteFrame>(tolua_S, 2, "cc.SpriteFrame",&arg0, "cc.Sprite:createWithSpriteFrame");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Sprite_createWithSpriteFrame'", nullptr);
            return 0;
        }
        cocos2d::Sprite* ret = cocos2d::Sprite::createWithSpriteFrame(arg0);
        object_to_luaval<cocos2d::Sprite>(tolua_S, "cc.Sprite",(cocos2d::Sprite*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "cc.Sprite:createWithSpriteFrame",argc, 1);
    return 0;
#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Sprite_createWithSpriteFrame'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_Sprite_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Sprite* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Sprite_constructor'", nullptr);
            return 0;
        }
        cobj = new cocos2d::Sprite();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"cc.Sprite");
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Sprite:Sprite",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Sprite_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_Sprite_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (Sprite)");
    return 0;
}

int lua_register_cocos2dx_Sprite(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"cc.Sprite");
    tolua_cclass(tolua_S,"Sprite","cc.Sprite","cc.Node",nullptr);

    tolua_beginmodule(tolua_S,"Sprite");
        tolua_function(tolua_S,"new",lua_cocos2dx_Sprite_constructor);
        tolua_function(tolua_S,"setSpriteFrame",lua_cocos2dx_Sprite_setSpriteFrame);
        tolua_function(tolua_S,"setTexture",lua_cocos2dx_Sprite_setTexture);
        tolua_function(tolua_S,"getTexture",lua_cocos2dx_Sprite_getTexture);
        tolua_function(tolua_S,"setFlippedY",lua_cocos2dx_Sprite_setFlippedY);
        tolua_function(tolua_S,"setFlippedX",lua_cocos2dx_Sprite_setFlippedX);
        tolua_function(tolua_S,"getOffsetPosition",lua_cocos2dx_Sprite_getOffsetPosition);
        tolua_function(tolua_S,"removeAllChildrenWithCleanup",lua_cocos2dx_Sprite_removeAllChildrenWithCleanup);
        tolua_function(tolua_S,"setTextureRect",lua_cocos2dx_Sprite_setTextureRect);
        tolua_function(tolua_S,"isFrameDisplayed",lua_cocos2dx_Sprite_isFrameDisplayed);
        tolua_function(tolua_S,"getBlendFunc",lua_cocos2dx_Sprite_getBlendFunc);
        tolua_function(tolua_S,"setDisplayFrameWithAnimationName",lua_cocos2dx_Sprite_setDisplayFrameWithAnimationName);
        tolua_function(tolua_S,"getSpriteFrame",lua_cocos2dx_Sprite_getSpriteFrame);
        tolua_function(tolua_S,"isTextureRectRotated",lua_cocos2dx_Sprite_isTextureRectRotated);
        tolua_function(tolua_S,"getTextureRect",lua_cocos2dx_Sprite_getTextureRect);
        tolua_function(tolua_S,"setBlendFunc",lua_cocos2dx_Sprite_setBlendFunc);
        tolua_function(tolua_S,"isFlippedX",lua_cocos2dx_Sprite_isFlippedX);
        tolua_function(tolua_S,"isFlippedY",lua_cocos2dx_Sprite_isFlippedY);
        tolua_function(tolua_S,"createWithTexture", lua_cocos2dx_Sprite_createWithTexture);
        tolua_function(tolua_S,"createWithSpriteFrameName", lua_cocos2dx_Sprite_createWithSpriteFrameName);
        tolua_function(tolua_S,"createWithSpriteFrame", lua_cocos2dx_Sprite_createWithSpriteFrame);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::Sprite).name();
    g_luaType[typeName] = "cc.Sprite";
    g_typeCast["Sprite"] = "cc.Sprite";
    return 1;
}
TOLUA_API int register_all_cocos2dx(lua_State* tolua_S)
{
	tolua_open(tolua_S);
	
	tolua_module(tolua_S,"cc",0);
	tolua_beginmodule(tolua_S,"cc");

	lua_register_cocos2dx_Node(tolua_S);
	lua_register_cocos2dx_Sprite(tolua_S);

	tolua_endmodule(tolua_S);
	return 1;
}


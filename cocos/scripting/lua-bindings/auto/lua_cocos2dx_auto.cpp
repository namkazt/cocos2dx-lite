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

int lua_cocos2dx_Scene_setCameraOrderDirty(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Scene* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Scene",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Scene*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Scene_setCameraOrderDirty'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Scene_setCameraOrderDirty'", nullptr);
            return 0;
        }
        cobj->setCameraOrderDirty();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Scene:setCameraOrderDirty",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Scene_setCameraOrderDirty'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Scene_render(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Scene* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Scene",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Scene*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Scene_render'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        cocos2d::Renderer* arg0;

        ok &= luaval_to_object<cocos2d::Renderer>(tolua_S, 2, "cc.Renderer",&arg0, "cc.Scene:render");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Scene_render'", nullptr);
            return 0;
        }
        cobj->render(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Scene:render",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Scene_render'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Scene_onProjectionChanged(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Scene* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Scene",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Scene*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Scene_onProjectionChanged'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        cocos2d::EventCustom* arg0;

        ok &= luaval_to_object<cocos2d::EventCustom>(tolua_S, 2, "cc.EventCustom",&arg0, "cc.Scene:onProjectionChanged");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Scene_onProjectionChanged'", nullptr);
            return 0;
        }
        cobj->onProjectionChanged(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Scene:onProjectionChanged",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Scene_onProjectionChanged'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Scene_initWithSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Scene* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Scene",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Scene*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Scene_initWithSize'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        cocos2d::Size arg0;

        ok &= luaval_to_size(tolua_S, 2, &arg0, "cc.Scene:initWithSize");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Scene_initWithSize'", nullptr);
            return 0;
        }
        bool ret = cobj->initWithSize(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Scene:initWithSize",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Scene_initWithSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Scene_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if TOLUA_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.Scene",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Scene_create'", nullptr);
            return 0;
        }
        cocos2d::Scene* ret = cocos2d::Scene::create();
        object_to_luaval<cocos2d::Scene>(tolua_S, "cc.Scene",(cocos2d::Scene*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "cc.Scene:create",argc, 0);
    return 0;
#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Scene_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_Scene_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Scene* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Scene_constructor'", nullptr);
            return 0;
        }
        cobj = new cocos2d::Scene();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"cc.Scene");
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Scene:Scene",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Scene_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_Scene_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (Scene)");
    return 0;
}

int lua_register_cocos2dx_Scene(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"cc.Scene");
    tolua_cclass(tolua_S,"Scene","cc.Scene","cc.Node",nullptr);

    tolua_beginmodule(tolua_S,"Scene");
        tolua_function(tolua_S,"new",lua_cocos2dx_Scene_constructor);
        tolua_function(tolua_S,"setCameraOrderDirty",lua_cocos2dx_Scene_setCameraOrderDirty);
        tolua_function(tolua_S,"render",lua_cocos2dx_Scene_render);
        tolua_function(tolua_S,"onProjectionChanged",lua_cocos2dx_Scene_onProjectionChanged);
        tolua_function(tolua_S,"initWithSize",lua_cocos2dx_Scene_initWithSize);
        tolua_function(tolua_S,"create", lua_cocos2dx_Scene_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::Scene).name();
    g_luaType[typeName] = "cc.Scene";
    g_typeCast["Scene"] = "cc.Scene";
    return 1;
}

int lua_cocos2dx_Director_pause(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_pause'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_pause'", nullptr);
            return 0;
        }
        cobj->pause();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:pause",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_pause'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_setEventDispatcher(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_setEventDispatcher'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        cocos2d::EventDispatcher* arg0;

        ok &= luaval_to_object<cocos2d::EventDispatcher>(tolua_S, 2, "cc.EventDispatcher",&arg0, "cc.Director:setEventDispatcher");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_setEventDispatcher'", nullptr);
            return 0;
        }
        cobj->setEventDispatcher(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:setEventDispatcher",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_setEventDispatcher'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_setContentScaleFactor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_setContentScaleFactor'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "cc.Director:setContentScaleFactor");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_setContentScaleFactor'", nullptr);
            return 0;
        }
        cobj->setContentScaleFactor(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:setContentScaleFactor",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_setContentScaleFactor'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_getContentScaleFactor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_getContentScaleFactor'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_getContentScaleFactor'", nullptr);
            return 0;
        }
        double ret = cobj->getContentScaleFactor();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:getContentScaleFactor",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_getContentScaleFactor'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_getWinSizeInPixels(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_getWinSizeInPixels'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_getWinSizeInPixels'", nullptr);
            return 0;
        }
        cocos2d::Size ret = cobj->getWinSizeInPixels();
        size_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:getWinSizeInPixels",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_getWinSizeInPixels'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_getDeltaTime(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_getDeltaTime'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_getDeltaTime'", nullptr);
            return 0;
        }
        double ret = cobj->getDeltaTime();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:getDeltaTime",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_getDeltaTime'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_setGLDefaultValues(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_setGLDefaultValues'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_setGLDefaultValues'", nullptr);
            return 0;
        }
        cobj->setGLDefaultValues();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:setGLDefaultValues",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_setGLDefaultValues'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_setActionManager(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_setActionManager'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        cocos2d::ActionManager* arg0;

        ok &= luaval_to_object<cocos2d::ActionManager>(tolua_S, 2, "cc.ActionManager",&arg0, "cc.Director:setActionManager");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_setActionManager'", nullptr);
            return 0;
        }
        cobj->setActionManager(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:setActionManager",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_setActionManager'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_setAlphaBlending(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_setAlphaBlending'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "cc.Director:setAlphaBlending");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_setAlphaBlending'", nullptr);
            return 0;
        }
        cobj->setAlphaBlending(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:setAlphaBlending",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_setAlphaBlending'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_popToRootScene(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_popToRootScene'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_popToRootScene'", nullptr);
            return 0;
        }
        cobj->popToRootScene();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:popToRootScene",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_popToRootScene'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_loadMatrix(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_loadMatrix'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2)
    {
        cocos2d::MATRIX_STACK_TYPE arg0;
        cocos2d::Mat4 arg1;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "cc.Director:loadMatrix");

        ok &= luaval_to_mat4(tolua_S, 3, &arg1, "cc.Director:loadMatrix");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_loadMatrix'", nullptr);
            return 0;
        }
        cobj->loadMatrix(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:loadMatrix",argc, 2);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_loadMatrix'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_getNotificationNode(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_getNotificationNode'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_getNotificationNode'", nullptr);
            return 0;
        }
        cocos2d::Node* ret = cobj->getNotificationNode();
        object_to_luaval<cocos2d::Node>(tolua_S, "cc.Node",(cocos2d::Node*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:getNotificationNode",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_getNotificationNode'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_getWinSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_getWinSize'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_getWinSize'", nullptr);
            return 0;
        }
        const cocos2d::Size& ret = cobj->getWinSize();
        size_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:getWinSize",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_getWinSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_getTextureCache(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_getTextureCache'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_getTextureCache'", nullptr);
            return 0;
        }
        cocos2d::TextureCache* ret = cobj->getTextureCache();
        object_to_luaval<cocos2d::TextureCache>(tolua_S, "cc.TextureCache",(cocos2d::TextureCache*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:getTextureCache",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_getTextureCache'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_isSendCleanupToScene(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_isSendCleanupToScene'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_isSendCleanupToScene'", nullptr);
            return 0;
        }
        bool ret = cobj->isSendCleanupToScene();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:isSendCleanupToScene",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_isSendCleanupToScene'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_getVisibleOrigin(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_getVisibleOrigin'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_getVisibleOrigin'", nullptr);
            return 0;
        }
        cocos2d::Vec2 ret = cobj->getVisibleOrigin();
        vec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:getVisibleOrigin",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_getVisibleOrigin'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_mainLoop(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_mainLoop'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_mainLoop'", nullptr);
            return 0;
        }
        cobj->mainLoop();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:mainLoop",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_mainLoop'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_setDepthTest(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_setDepthTest'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "cc.Director:setDepthTest");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_setDepthTest'", nullptr);
            return 0;
        }
        cobj->setDepthTest(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:setDepthTest",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_setDepthTest'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_getFrameRate(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_getFrameRate'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_getFrameRate'", nullptr);
            return 0;
        }
        double ret = cobj->getFrameRate();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:getFrameRate",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_getFrameRate'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_getSecondsPerFrame(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_getSecondsPerFrame'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_getSecondsPerFrame'", nullptr);
            return 0;
        }
        double ret = cobj->getSecondsPerFrame();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:getSecondsPerFrame",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_getSecondsPerFrame'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_resetMatrixStack(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_resetMatrixStack'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_resetMatrixStack'", nullptr);
            return 0;
        }
        cobj->resetMatrixStack();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:resetMatrixStack",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_resetMatrixStack'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_convertToUI(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_convertToUI'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        cocos2d::Vec2 arg0;

        ok &= luaval_to_vec2(tolua_S, 2, &arg0, "cc.Director:convertToUI");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_convertToUI'", nullptr);
            return 0;
        }
        cocos2d::Vec2 ret = cobj->convertToUI(arg0);
        vec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:convertToUI",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_convertToUI'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_pushMatrix(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_pushMatrix'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        cocos2d::MATRIX_STACK_TYPE arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "cc.Director:pushMatrix");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_pushMatrix'", nullptr);
            return 0;
        }
        cobj->pushMatrix(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:pushMatrix",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_pushMatrix'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_setDefaultValues(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_setDefaultValues'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_setDefaultValues'", nullptr);
            return 0;
        }
        cobj->setDefaultValues();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:setDefaultValues",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_setDefaultValues'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_init(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_init'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_init'", nullptr);
            return 0;
        }
        bool ret = cobj->init();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:init",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_init'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_setScheduler(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_setScheduler'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        cocos2d::Scheduler* arg0;

        ok &= luaval_to_object<cocos2d::Scheduler>(tolua_S, 2, "cc.Scheduler",&arg0, "cc.Director:setScheduler");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_setScheduler'", nullptr);
            return 0;
        }
        cobj->setScheduler(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:setScheduler",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_setScheduler'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_getMatrix(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_getMatrix'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        cocos2d::MATRIX_STACK_TYPE arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "cc.Director:getMatrix");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_getMatrix'", nullptr);
            return 0;
        }
        const cocos2d::Mat4& ret = cobj->getMatrix(arg0);
        mat4_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:getMatrix",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_getMatrix'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_startAnimation(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_startAnimation'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_startAnimation'", nullptr);
            return 0;
        }
        cobj->startAnimation();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:startAnimation",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_startAnimation'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_getOpenGLView(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_getOpenGLView'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_getOpenGLView'", nullptr);
            return 0;
        }
        cocos2d::GLView* ret = cobj->getOpenGLView();
        object_to_luaval<cocos2d::GLView>(tolua_S, "cc.GLView",(cocos2d::GLView*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:getOpenGLView",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_getOpenGLView'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_getRunningScene(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_getRunningScene'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_getRunningScene'", nullptr);
            return 0;
        }
        cocos2d::Scene* ret = cobj->getRunningScene();
        object_to_luaval<cocos2d::Scene>(tolua_S, "cc.Scene",(cocos2d::Scene*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:getRunningScene",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_getRunningScene'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_setViewport(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_setViewport'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_setViewport'", nullptr);
            return 0;
        }
        cobj->setViewport();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:setViewport",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_setViewport'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_stopAnimation(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_stopAnimation'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_stopAnimation'", nullptr);
            return 0;
        }
        cobj->stopAnimation();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:stopAnimation",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_stopAnimation'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_popToSceneStackLevel(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_popToSceneStackLevel'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "cc.Director:popToSceneStackLevel");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_popToSceneStackLevel'", nullptr);
            return 0;
        }
        cobj->popToSceneStackLevel(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:popToSceneStackLevel",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_popToSceneStackLevel'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_resume(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_resume'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_resume'", nullptr);
            return 0;
        }
        cobj->resume();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:resume",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_resume'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_isNextDeltaTimeZero(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_isNextDeltaTimeZero'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_isNextDeltaTimeZero'", nullptr);
            return 0;
        }
        bool ret = cobj->isNextDeltaTimeZero();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:isNextDeltaTimeZero",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_isNextDeltaTimeZero'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_setClearColor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_setClearColor'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        cocos2d::Color4F arg0;

        ok &=luaval_to_color4f(tolua_S, 2, &arg0, "cc.Director:setClearColor");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_setClearColor'", nullptr);
            return 0;
        }
        cobj->setClearColor(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:setClearColor",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_setClearColor'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_end(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_end'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_end'", nullptr);
            return 0;
        }
        cobj->end();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:end",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_end'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_setOpenGLView(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_setOpenGLView'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        cocos2d::GLView* arg0;

        ok &= luaval_to_object<cocos2d::GLView>(tolua_S, 2, "cc.GLView",&arg0, "cc.Director:setOpenGLView");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_setOpenGLView'", nullptr);
            return 0;
        }
        cobj->setOpenGLView(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:setOpenGLView",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_setOpenGLView'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_convertToGL(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_convertToGL'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        cocos2d::Vec2 arg0;

        ok &= luaval_to_vec2(tolua_S, 2, &arg0, "cc.Director:convertToGL");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_convertToGL'", nullptr);
            return 0;
        }
        cocos2d::Vec2 ret = cobj->convertToGL(arg0);
        vec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:convertToGL",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_convertToGL'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_purgeCachedData(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_purgeCachedData'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_purgeCachedData'", nullptr);
            return 0;
        }
        cobj->purgeCachedData();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:purgeCachedData",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_purgeCachedData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_getTotalFrames(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_getTotalFrames'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_getTotalFrames'", nullptr);
            return 0;
        }
        unsigned int ret = cobj->getTotalFrames();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:getTotalFrames",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_getTotalFrames'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_runWithScene(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_runWithScene'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        cocos2d::Scene* arg0;

        ok &= luaval_to_object<cocos2d::Scene>(tolua_S, 2, "cc.Scene",&arg0, "cc.Director:runWithScene");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_runWithScene'", nullptr);
            return 0;
        }
        cobj->runWithScene(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:runWithScene",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_runWithScene'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_setNotificationNode(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_setNotificationNode'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        cocos2d::Node* arg0;

        ok &= luaval_to_object<cocos2d::Node>(tolua_S, 2, "cc.Node",&arg0, "cc.Director:setNotificationNode");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_setNotificationNode'", nullptr);
            return 0;
        }
        cobj->setNotificationNode(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:setNotificationNode",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_setNotificationNode'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_drawScene(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_drawScene'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_drawScene'", nullptr);
            return 0;
        }
        cobj->drawScene();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:drawScene",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_drawScene'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_restart(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_restart'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_restart'", nullptr);
            return 0;
        }
        cobj->restart();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:restart",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_restart'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_popScene(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_popScene'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_popScene'", nullptr);
            return 0;
        }
        cobj->popScene();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:popScene",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_popScene'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_isDisplayStats(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_isDisplayStats'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_isDisplayStats'", nullptr);
            return 0;
        }
        bool ret = cobj->isDisplayStats();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:isDisplayStats",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_isDisplayStats'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_setProjection(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_setProjection'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        cocos2d::Director::Projection arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "cc.Director:setProjection");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_setProjection'", nullptr);
            return 0;
        }
        cobj->setProjection(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:setProjection",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_setProjection'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_loadIdentityMatrix(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_loadIdentityMatrix'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        cocos2d::MATRIX_STACK_TYPE arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "cc.Director:loadIdentityMatrix");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_loadIdentityMatrix'", nullptr);
            return 0;
        }
        cobj->loadIdentityMatrix(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:loadIdentityMatrix",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_loadIdentityMatrix'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_multiplyMatrix(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_multiplyMatrix'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2)
    {
        cocos2d::MATRIX_STACK_TYPE arg0;
        cocos2d::Mat4 arg1;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "cc.Director:multiplyMatrix");

        ok &= luaval_to_mat4(tolua_S, 3, &arg1, "cc.Director:multiplyMatrix");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_multiplyMatrix'", nullptr);
            return 0;
        }
        cobj->multiplyMatrix(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:multiplyMatrix",argc, 2);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_multiplyMatrix'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_getZEye(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_getZEye'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_getZEye'", nullptr);
            return 0;
        }
        double ret = cobj->getZEye();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:getZEye",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_getZEye'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_setNextDeltaTimeZero(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_setNextDeltaTimeZero'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "cc.Director:setNextDeltaTimeZero");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_setNextDeltaTimeZero'", nullptr);
            return 0;
        }
        cobj->setNextDeltaTimeZero(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:setNextDeltaTimeZero",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_setNextDeltaTimeZero'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_popMatrix(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_popMatrix'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        cocos2d::MATRIX_STACK_TYPE arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "cc.Director:popMatrix");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_popMatrix'", nullptr);
            return 0;
        }
        cobj->popMatrix(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:popMatrix",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_popMatrix'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_getVisibleSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_getVisibleSize'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_getVisibleSize'", nullptr);
            return 0;
        }
        cocos2d::Size ret = cobj->getVisibleSize();
        size_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:getVisibleSize",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_getVisibleSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_getScheduler(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_getScheduler'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_getScheduler'", nullptr);
            return 0;
        }
        cocos2d::Scheduler* ret = cobj->getScheduler();
        object_to_luaval<cocos2d::Scheduler>(tolua_S, "cc.Scheduler",(cocos2d::Scheduler*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:getScheduler",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_getScheduler'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_pushScene(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_pushScene'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        cocos2d::Scene* arg0;

        ok &= luaval_to_object<cocos2d::Scene>(tolua_S, 2, "cc.Scene",&arg0, "cc.Director:pushScene");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_pushScene'", nullptr);
            return 0;
        }
        cobj->pushScene(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:pushScene",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_pushScene'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_getAnimationInterval(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_getAnimationInterval'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_getAnimationInterval'", nullptr);
            return 0;
        }
        double ret = cobj->getAnimationInterval();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:getAnimationInterval",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_getAnimationInterval'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_isPaused(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_isPaused'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_isPaused'", nullptr);
            return 0;
        }
        bool ret = cobj->isPaused();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:isPaused",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_isPaused'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_setDisplayStats(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_setDisplayStats'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "cc.Director:setDisplayStats");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_setDisplayStats'", nullptr);
            return 0;
        }
        cobj->setDisplayStats(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:setDisplayStats",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_setDisplayStats'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_getEventDispatcher(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_getEventDispatcher'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_getEventDispatcher'", nullptr);
            return 0;
        }
        cocos2d::EventDispatcher* ret = cobj->getEventDispatcher();
        object_to_luaval<cocos2d::EventDispatcher>(tolua_S, "cc.EventDispatcher",(cocos2d::EventDispatcher*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:getEventDispatcher",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_getEventDispatcher'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_replaceScene(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_replaceScene'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        cocos2d::Scene* arg0;

        ok &= luaval_to_object<cocos2d::Scene>(tolua_S, 2, "cc.Scene",&arg0, "cc.Director:replaceScene");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_replaceScene'", nullptr);
            return 0;
        }
        cobj->replaceScene(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:replaceScene",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_replaceScene'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_setAnimationInterval(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_setAnimationInterval'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "cc.Director:setAnimationInterval");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_setAnimationInterval'", nullptr);
            return 0;
        }
        cobj->setAnimationInterval(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:setAnimationInterval",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_setAnimationInterval'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_getActionManager(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Director* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Director*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Director_getActionManager'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_getActionManager'", nullptr);
            return 0;
        }
        cocos2d::ActionManager* ret = cobj->getActionManager();
        object_to_luaval<cocos2d::ActionManager>(tolua_S, "cc.ActionManager",(cocos2d::ActionManager*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Director:getActionManager",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_getActionManager'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Director_getInstance(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if TOLUA_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.Director",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Director_getInstance'", nullptr);
            return 0;
        }
        cocos2d::Director* ret = cocos2d::Director::getInstance();
        object_to_luaval<cocos2d::Director>(tolua_S, "cc.Director",(cocos2d::Director*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "cc.Director:getInstance",argc, 0);
    return 0;
#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Director_getInstance'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_Director_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (Director)");
    return 0;
}

int lua_register_cocos2dx_Director(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"cc.Director");
    tolua_cclass(tolua_S,"Director","cc.Director","",nullptr);

    tolua_beginmodule(tolua_S,"Director");
        tolua_function(tolua_S,"pause",lua_cocos2dx_Director_pause);
        tolua_function(tolua_S,"setEventDispatcher",lua_cocos2dx_Director_setEventDispatcher);
        tolua_function(tolua_S,"setContentScaleFactor",lua_cocos2dx_Director_setContentScaleFactor);
        tolua_function(tolua_S,"getContentScaleFactor",lua_cocos2dx_Director_getContentScaleFactor);
        tolua_function(tolua_S,"getWinSizeInPixels",lua_cocos2dx_Director_getWinSizeInPixels);
        tolua_function(tolua_S,"getDeltaTime",lua_cocos2dx_Director_getDeltaTime);
        tolua_function(tolua_S,"setGLDefaultValues",lua_cocos2dx_Director_setGLDefaultValues);
        tolua_function(tolua_S,"setActionManager",lua_cocos2dx_Director_setActionManager);
        tolua_function(tolua_S,"setAlphaBlending",lua_cocos2dx_Director_setAlphaBlending);
        tolua_function(tolua_S,"popToRootScene",lua_cocos2dx_Director_popToRootScene);
        tolua_function(tolua_S,"loadMatrix",lua_cocos2dx_Director_loadMatrix);
        tolua_function(tolua_S,"getNotificationNode",lua_cocos2dx_Director_getNotificationNode);
        tolua_function(tolua_S,"getWinSize",lua_cocos2dx_Director_getWinSize);
        tolua_function(tolua_S,"getTextureCache",lua_cocos2dx_Director_getTextureCache);
        tolua_function(tolua_S,"isSendCleanupToScene",lua_cocos2dx_Director_isSendCleanupToScene);
        tolua_function(tolua_S,"getVisibleOrigin",lua_cocos2dx_Director_getVisibleOrigin);
        tolua_function(tolua_S,"mainLoop",lua_cocos2dx_Director_mainLoop);
        tolua_function(tolua_S,"setDepthTest",lua_cocos2dx_Director_setDepthTest);
        tolua_function(tolua_S,"getFrameRate",lua_cocos2dx_Director_getFrameRate);
        tolua_function(tolua_S,"getSecondsPerFrame",lua_cocos2dx_Director_getSecondsPerFrame);
        tolua_function(tolua_S,"resetMatrixStack",lua_cocos2dx_Director_resetMatrixStack);
        tolua_function(tolua_S,"convertToUI",lua_cocos2dx_Director_convertToUI);
        tolua_function(tolua_S,"pushMatrix",lua_cocos2dx_Director_pushMatrix);
        tolua_function(tolua_S,"setDefaultValues",lua_cocos2dx_Director_setDefaultValues);
        tolua_function(tolua_S,"init",lua_cocos2dx_Director_init);
        tolua_function(tolua_S,"setScheduler",lua_cocos2dx_Director_setScheduler);
        tolua_function(tolua_S,"getMatrix",lua_cocos2dx_Director_getMatrix);
        tolua_function(tolua_S,"startAnimation",lua_cocos2dx_Director_startAnimation);
        tolua_function(tolua_S,"getOpenGLView",lua_cocos2dx_Director_getOpenGLView);
        tolua_function(tolua_S,"getRunningScene",lua_cocos2dx_Director_getRunningScene);
        tolua_function(tolua_S,"setViewport",lua_cocos2dx_Director_setViewport);
        tolua_function(tolua_S,"stopAnimation",lua_cocos2dx_Director_stopAnimation);
        tolua_function(tolua_S,"popToSceneStackLevel",lua_cocos2dx_Director_popToSceneStackLevel);
        tolua_function(tolua_S,"resume",lua_cocos2dx_Director_resume);
        tolua_function(tolua_S,"isNextDeltaTimeZero",lua_cocos2dx_Director_isNextDeltaTimeZero);
        tolua_function(tolua_S,"setClearColor",lua_cocos2dx_Director_setClearColor);
        tolua_function(tolua_S,"endToLua",lua_cocos2dx_Director_end);
        tolua_function(tolua_S,"setOpenGLView",lua_cocos2dx_Director_setOpenGLView);
        tolua_function(tolua_S,"convertToGL",lua_cocos2dx_Director_convertToGL);
        tolua_function(tolua_S,"purgeCachedData",lua_cocos2dx_Director_purgeCachedData);
        tolua_function(tolua_S,"getTotalFrames",lua_cocos2dx_Director_getTotalFrames);
        tolua_function(tolua_S,"runWithScene",lua_cocos2dx_Director_runWithScene);
        tolua_function(tolua_S,"setNotificationNode",lua_cocos2dx_Director_setNotificationNode);
        tolua_function(tolua_S,"drawScene",lua_cocos2dx_Director_drawScene);
        tolua_function(tolua_S,"restart",lua_cocos2dx_Director_restart);
        tolua_function(tolua_S,"popScene",lua_cocos2dx_Director_popScene);
        tolua_function(tolua_S,"isDisplayStats",lua_cocos2dx_Director_isDisplayStats);
        tolua_function(tolua_S,"setProjection",lua_cocos2dx_Director_setProjection);
        tolua_function(tolua_S,"loadIdentityMatrix",lua_cocos2dx_Director_loadIdentityMatrix);
        tolua_function(tolua_S,"multiplyMatrix",lua_cocos2dx_Director_multiplyMatrix);
        tolua_function(tolua_S,"getZEye",lua_cocos2dx_Director_getZEye);
        tolua_function(tolua_S,"setNextDeltaTimeZero",lua_cocos2dx_Director_setNextDeltaTimeZero);
        tolua_function(tolua_S,"popMatrix",lua_cocos2dx_Director_popMatrix);
        tolua_function(tolua_S,"getVisibleSize",lua_cocos2dx_Director_getVisibleSize);
        tolua_function(tolua_S,"getScheduler",lua_cocos2dx_Director_getScheduler);
        tolua_function(tolua_S,"pushScene",lua_cocos2dx_Director_pushScene);
        tolua_function(tolua_S,"getAnimationInterval",lua_cocos2dx_Director_getAnimationInterval);
        tolua_function(tolua_S,"isPaused",lua_cocos2dx_Director_isPaused);
        tolua_function(tolua_S,"setDisplayStats",lua_cocos2dx_Director_setDisplayStats);
        tolua_function(tolua_S,"getEventDispatcher",lua_cocos2dx_Director_getEventDispatcher);
        tolua_function(tolua_S,"replaceScene",lua_cocos2dx_Director_replaceScene);
        tolua_function(tolua_S,"setAnimationInterval",lua_cocos2dx_Director_setAnimationInterval);
        tolua_function(tolua_S,"getActionManager",lua_cocos2dx_Director_getActionManager);
        tolua_function(tolua_S,"getInstance", lua_cocos2dx_Director_getInstance);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::Director).name();
    g_luaType[typeName] = "cc.Director";
    g_typeCast["Director"] = "cc.Director";
    return 1;
}

int lua_cocos2dx_FileUtils_fullPathForFilename(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::FileUtils* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.FileUtils",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::FileUtils*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_FileUtils_fullPathForFilename'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.FileUtils:fullPathForFilename");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_FileUtils_fullPathForFilename'", nullptr);
            return 0;
        }
        std::string ret = cobj->fullPathForFilename(arg0);
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.FileUtils:fullPathForFilename",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_FileUtils_fullPathForFilename'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_FileUtils_getStringFromFile(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::FileUtils* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.FileUtils",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::FileUtils*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_FileUtils_getStringFromFile'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.FileUtils:getStringFromFile");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_FileUtils_getStringFromFile'", nullptr);
            return 0;
        }
        std::string ret = cobj->getStringFromFile(arg0);
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.FileUtils:getStringFromFile",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_FileUtils_getStringFromFile'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_FileUtils_setFilenameLookupDictionary(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::FileUtils* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.FileUtils",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::FileUtils*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_FileUtils_setFilenameLookupDictionary'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        cocos2d::ValueMap arg0;

        ok &= luaval_to_ccvaluemap(tolua_S, 2, &arg0, "cc.FileUtils:setFilenameLookupDictionary");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_FileUtils_setFilenameLookupDictionary'", nullptr);
            return 0;
        }
        cobj->setFilenameLookupDictionary(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.FileUtils:setFilenameLookupDictionary",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_FileUtils_setFilenameLookupDictionary'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_FileUtils_removeFile(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::FileUtils* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.FileUtils",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::FileUtils*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_FileUtils_removeFile'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.FileUtils:removeFile");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_FileUtils_removeFile'", nullptr);
            return 0;
        }
        bool ret = cobj->removeFile(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.FileUtils:removeFile",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_FileUtils_removeFile'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_FileUtils_isAbsolutePath(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::FileUtils* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.FileUtils",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::FileUtils*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_FileUtils_isAbsolutePath'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.FileUtils:isAbsolutePath");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_FileUtils_isAbsolutePath'", nullptr);
            return 0;
        }
        bool ret = cobj->isAbsolutePath(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.FileUtils:isAbsolutePath",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_FileUtils_isAbsolutePath'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_FileUtils_renameFile(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::FileUtils* cobj = nullptr;
    bool ok  = true;
#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.FileUtils",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::FileUtils*)tolua_tousertype(tolua_S,1,0);
#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_FileUtils_renameFile'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 2) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.FileUtils:renameFile");

            if (!ok) { break; }
            std::string arg1;
            ok &= luaval_to_std_string(tolua_S, 3,&arg1, "cc.FileUtils:renameFile");

            if (!ok) { break; }
            bool ret = cobj->renameFile(arg0, arg1);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 3) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.FileUtils:renameFile");

            if (!ok) { break; }
            std::string arg1;
            ok &= luaval_to_std_string(tolua_S, 3,&arg1, "cc.FileUtils:renameFile");

            if (!ok) { break; }
            std::string arg2;
            ok &= luaval_to_std_string(tolua_S, 4,&arg2, "cc.FileUtils:renameFile");

            if (!ok) { break; }
            bool ret = cobj->renameFile(arg0, arg1, arg2);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n",  "cc.FileUtils:renameFile",argc, 3);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_FileUtils_renameFile'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_FileUtils_loadFilenameLookupDictionaryFromFile(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::FileUtils* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.FileUtils",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::FileUtils*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_FileUtils_loadFilenameLookupDictionaryFromFile'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.FileUtils:loadFilenameLookupDictionaryFromFile");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_FileUtils_loadFilenameLookupDictionaryFromFile'", nullptr);
            return 0;
        }
        cobj->loadFilenameLookupDictionaryFromFile(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.FileUtils:loadFilenameLookupDictionaryFromFile",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_FileUtils_loadFilenameLookupDictionaryFromFile'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_FileUtils_isPopupNotify(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::FileUtils* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.FileUtils",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::FileUtils*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_FileUtils_isPopupNotify'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_FileUtils_isPopupNotify'", nullptr);
            return 0;
        }
        bool ret = cobj->isPopupNotify();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.FileUtils:isPopupNotify",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_FileUtils_isPopupNotify'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_FileUtils_getValueVectorFromFile(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::FileUtils* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.FileUtils",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::FileUtils*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_FileUtils_getValueVectorFromFile'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.FileUtils:getValueVectorFromFile");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_FileUtils_getValueVectorFromFile'", nullptr);
            return 0;
        }
        cocos2d::ValueVector ret = cobj->getValueVectorFromFile(arg0);
        ccvaluevector_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.FileUtils:getValueVectorFromFile",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_FileUtils_getValueVectorFromFile'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_FileUtils_getSearchPaths(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::FileUtils* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.FileUtils",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::FileUtils*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_FileUtils_getSearchPaths'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_FileUtils_getSearchPaths'", nullptr);
            return 0;
        }
        const std::vector<std::string>& ret = cobj->getSearchPaths();
        ccvector_std_string_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.FileUtils:getSearchPaths",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_FileUtils_getSearchPaths'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_FileUtils_writeToFile(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::FileUtils* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.FileUtils",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::FileUtils*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_FileUtils_writeToFile'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2)
    {
        cocos2d::ValueMap arg0;
        std::string arg1;

        ok &= luaval_to_ccvaluemap(tolua_S, 2, &arg0, "cc.FileUtils:writeToFile");

        ok &= luaval_to_std_string(tolua_S, 3,&arg1, "cc.FileUtils:writeToFile");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_FileUtils_writeToFile'", nullptr);
            return 0;
        }
        bool ret = cobj->writeToFile(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.FileUtils:writeToFile",argc, 2);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_FileUtils_writeToFile'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_FileUtils_getValueMapFromFile(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::FileUtils* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.FileUtils",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::FileUtils*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_FileUtils_getValueMapFromFile'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.FileUtils:getValueMapFromFile");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_FileUtils_getValueMapFromFile'", nullptr);
            return 0;
        }
        cocos2d::ValueMap ret = cobj->getValueMapFromFile(arg0);
        ccvaluemap_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.FileUtils:getValueMapFromFile",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_FileUtils_getValueMapFromFile'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_FileUtils_getFileSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::FileUtils* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.FileUtils",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::FileUtils*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_FileUtils_getFileSize'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.FileUtils:getFileSize");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_FileUtils_getFileSize'", nullptr);
            return 0;
        }
        long ret = cobj->getFileSize(arg0);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.FileUtils:getFileSize",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_FileUtils_getFileSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_FileUtils_getValueMapFromData(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::FileUtils* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.FileUtils",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::FileUtils*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_FileUtils_getValueMapFromData'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2)
    {
        const char* arg0;
        int arg1;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "cc.FileUtils:getValueMapFromData"); arg0 = arg0_tmp.c_str();

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "cc.FileUtils:getValueMapFromData");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_FileUtils_getValueMapFromData'", nullptr);
            return 0;
        }
        cocos2d::ValueMap ret = cobj->getValueMapFromData(arg0, arg1);
        ccvaluemap_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.FileUtils:getValueMapFromData",argc, 2);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_FileUtils_getValueMapFromData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_FileUtils_removeDirectory(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::FileUtils* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.FileUtils",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::FileUtils*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_FileUtils_removeDirectory'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.FileUtils:removeDirectory");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_FileUtils_removeDirectory'", nullptr);
            return 0;
        }
        bool ret = cobj->removeDirectory(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.FileUtils:removeDirectory",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_FileUtils_removeDirectory'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_FileUtils_setSearchPaths(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::FileUtils* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.FileUtils",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::FileUtils*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_FileUtils_setSearchPaths'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        std::vector<std::string> arg0;

        ok &= luaval_to_std_vector_string(tolua_S, 2, &arg0, "cc.FileUtils:setSearchPaths");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_FileUtils_setSearchPaths'", nullptr);
            return 0;
        }
        cobj->setSearchPaths(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.FileUtils:setSearchPaths",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_FileUtils_setSearchPaths'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_FileUtils_writeStringToFile(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::FileUtils* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.FileUtils",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::FileUtils*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_FileUtils_writeStringToFile'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2)
    {
        std::string arg0;
        std::string arg1;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.FileUtils:writeStringToFile");

        ok &= luaval_to_std_string(tolua_S, 3,&arg1, "cc.FileUtils:writeStringToFile");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_FileUtils_writeStringToFile'", nullptr);
            return 0;
        }
        bool ret = cobj->writeStringToFile(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.FileUtils:writeStringToFile",argc, 2);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_FileUtils_writeStringToFile'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_FileUtils_setSearchResolutionsOrder(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::FileUtils* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.FileUtils",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::FileUtils*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_FileUtils_setSearchResolutionsOrder'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        std::vector<std::string> arg0;

        ok &= luaval_to_std_vector_string(tolua_S, 2, &arg0, "cc.FileUtils:setSearchResolutionsOrder");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_FileUtils_setSearchResolutionsOrder'", nullptr);
            return 0;
        }
        cobj->setSearchResolutionsOrder(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.FileUtils:setSearchResolutionsOrder",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_FileUtils_setSearchResolutionsOrder'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_FileUtils_addSearchResolutionsOrder(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::FileUtils* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.FileUtils",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::FileUtils*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_FileUtils_addSearchResolutionsOrder'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.FileUtils:addSearchResolutionsOrder");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_FileUtils_addSearchResolutionsOrder'", nullptr);
            return 0;
        }
        cobj->addSearchResolutionsOrder(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 2)
    {
        std::string arg0;
        bool arg1;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.FileUtils:addSearchResolutionsOrder");

        ok &= luaval_to_boolean(tolua_S, 3,&arg1, "cc.FileUtils:addSearchResolutionsOrder");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_FileUtils_addSearchResolutionsOrder'", nullptr);
            return 0;
        }
        cobj->addSearchResolutionsOrder(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.FileUtils:addSearchResolutionsOrder",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_FileUtils_addSearchResolutionsOrder'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_FileUtils_addSearchPath(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::FileUtils* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.FileUtils",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::FileUtils*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_FileUtils_addSearchPath'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.FileUtils:addSearchPath");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_FileUtils_addSearchPath'", nullptr);
            return 0;
        }
        cobj->addSearchPath(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 2)
    {
        std::string arg0;
        bool arg1;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.FileUtils:addSearchPath");

        ok &= luaval_to_boolean(tolua_S, 3,&arg1, "cc.FileUtils:addSearchPath");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_FileUtils_addSearchPath'", nullptr);
            return 0;
        }
        cobj->addSearchPath(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.FileUtils:addSearchPath",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_FileUtils_addSearchPath'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_FileUtils_writeValueVectorToFile(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::FileUtils* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.FileUtils",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::FileUtils*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_FileUtils_writeValueVectorToFile'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2)
    {
        cocos2d::ValueVector arg0;
        std::string arg1;

        ok &= luaval_to_ccvaluevector(tolua_S, 2, &arg0, "cc.FileUtils:writeValueVectorToFile");

        ok &= luaval_to_std_string(tolua_S, 3,&arg1, "cc.FileUtils:writeValueVectorToFile");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_FileUtils_writeValueVectorToFile'", nullptr);
            return 0;
        }
        bool ret = cobj->writeValueVectorToFile(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.FileUtils:writeValueVectorToFile",argc, 2);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_FileUtils_writeValueVectorToFile'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_FileUtils_isFileExist(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::FileUtils* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.FileUtils",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::FileUtils*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_FileUtils_isFileExist'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.FileUtils:isFileExist");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_FileUtils_isFileExist'", nullptr);
            return 0;
        }
        bool ret = cobj->isFileExist(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.FileUtils:isFileExist",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_FileUtils_isFileExist'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_FileUtils_purgeCachedEntries(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::FileUtils* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.FileUtils",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::FileUtils*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_FileUtils_purgeCachedEntries'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_FileUtils_purgeCachedEntries'", nullptr);
            return 0;
        }
        cobj->purgeCachedEntries();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.FileUtils:purgeCachedEntries",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_FileUtils_purgeCachedEntries'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_FileUtils_fullPathFromRelativeFile(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::FileUtils* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.FileUtils",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::FileUtils*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_FileUtils_fullPathFromRelativeFile'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2)
    {
        std::string arg0;
        std::string arg1;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.FileUtils:fullPathFromRelativeFile");

        ok &= luaval_to_std_string(tolua_S, 3,&arg1, "cc.FileUtils:fullPathFromRelativeFile");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_FileUtils_fullPathFromRelativeFile'", nullptr);
            return 0;
        }
        std::string ret = cobj->fullPathFromRelativeFile(arg0, arg1);
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.FileUtils:fullPathFromRelativeFile",argc, 2);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_FileUtils_fullPathFromRelativeFile'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_FileUtils_getSuitableFOpen(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::FileUtils* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.FileUtils",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::FileUtils*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_FileUtils_getSuitableFOpen'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.FileUtils:getSuitableFOpen");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_FileUtils_getSuitableFOpen'", nullptr);
            return 0;
        }
        std::string ret = cobj->getSuitableFOpen(arg0);
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.FileUtils:getSuitableFOpen",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_FileUtils_getSuitableFOpen'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_FileUtils_writeValueMapToFile(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::FileUtils* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.FileUtils",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::FileUtils*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_FileUtils_writeValueMapToFile'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2)
    {
        cocos2d::ValueMap arg0;
        std::string arg1;

        ok &= luaval_to_ccvaluemap(tolua_S, 2, &arg0, "cc.FileUtils:writeValueMapToFile");

        ok &= luaval_to_std_string(tolua_S, 3,&arg1, "cc.FileUtils:writeValueMapToFile");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_FileUtils_writeValueMapToFile'", nullptr);
            return 0;
        }
        bool ret = cobj->writeValueMapToFile(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.FileUtils:writeValueMapToFile",argc, 2);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_FileUtils_writeValueMapToFile'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_FileUtils_getFileExtension(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::FileUtils* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.FileUtils",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::FileUtils*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_FileUtils_getFileExtension'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.FileUtils:getFileExtension");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_FileUtils_getFileExtension'", nullptr);
            return 0;
        }
        std::string ret = cobj->getFileExtension(arg0);
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.FileUtils:getFileExtension",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_FileUtils_getFileExtension'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_FileUtils_setWritablePath(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::FileUtils* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.FileUtils",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::FileUtils*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_FileUtils_setWritablePath'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.FileUtils:setWritablePath");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_FileUtils_setWritablePath'", nullptr);
            return 0;
        }
        cobj->setWritablePath(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.FileUtils:setWritablePath",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_FileUtils_setWritablePath'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_FileUtils_setPopupNotify(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::FileUtils* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.FileUtils",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::FileUtils*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_FileUtils_setPopupNotify'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "cc.FileUtils:setPopupNotify");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_FileUtils_setPopupNotify'", nullptr);
            return 0;
        }
        cobj->setPopupNotify(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.FileUtils:setPopupNotify",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_FileUtils_setPopupNotify'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_FileUtils_isDirectoryExist(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::FileUtils* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.FileUtils",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::FileUtils*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_FileUtils_isDirectoryExist'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.FileUtils:isDirectoryExist");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_FileUtils_isDirectoryExist'", nullptr);
            return 0;
        }
        bool ret = cobj->isDirectoryExist(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.FileUtils:isDirectoryExist",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_FileUtils_isDirectoryExist'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_FileUtils_setDefaultResourceRootPath(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::FileUtils* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.FileUtils",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::FileUtils*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_FileUtils_setDefaultResourceRootPath'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.FileUtils:setDefaultResourceRootPath");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_FileUtils_setDefaultResourceRootPath'", nullptr);
            return 0;
        }
        cobj->setDefaultResourceRootPath(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.FileUtils:setDefaultResourceRootPath",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_FileUtils_setDefaultResourceRootPath'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_FileUtils_getSearchResolutionsOrder(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::FileUtils* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.FileUtils",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::FileUtils*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_FileUtils_getSearchResolutionsOrder'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_FileUtils_getSearchResolutionsOrder'", nullptr);
            return 0;
        }
        const std::vector<std::string>& ret = cobj->getSearchResolutionsOrder();
        ccvector_std_string_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.FileUtils:getSearchResolutionsOrder",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_FileUtils_getSearchResolutionsOrder'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_FileUtils_createDirectory(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::FileUtils* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.FileUtils",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::FileUtils*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_FileUtils_createDirectory'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.FileUtils:createDirectory");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_FileUtils_createDirectory'", nullptr);
            return 0;
        }
        bool ret = cobj->createDirectory(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.FileUtils:createDirectory",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_FileUtils_createDirectory'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_FileUtils_getWritablePath(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::FileUtils* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.FileUtils",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::FileUtils*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_FileUtils_getWritablePath'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_FileUtils_getWritablePath'", nullptr);
            return 0;
        }
        std::string ret = cobj->getWritablePath();
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.FileUtils:getWritablePath",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_FileUtils_getWritablePath'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_FileUtils_destroyInstance(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if TOLUA_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.FileUtils",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_FileUtils_destroyInstance'", nullptr);
            return 0;
        }
        cocos2d::FileUtils::destroyInstance();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "cc.FileUtils:destroyInstance",argc, 0);
    return 0;
#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_FileUtils_destroyInstance'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_FileUtils_setDelegate(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if TOLUA_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.FileUtils",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        cocos2d::FileUtils* arg0;
        ok &= luaval_to_object<cocos2d::FileUtils>(tolua_S, 2, "cc.FileUtils",&arg0, "cc.FileUtils:setDelegate");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_FileUtils_setDelegate'", nullptr);
            return 0;
        }
        cocos2d::FileUtils::setDelegate(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "cc.FileUtils:setDelegate",argc, 1);
    return 0;
#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_FileUtils_setDelegate'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_FileUtils_getInstance(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if TOLUA_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.FileUtils",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_FileUtils_getInstance'", nullptr);
            return 0;
        }
        cocos2d::FileUtils* ret = cocos2d::FileUtils::getInstance();
        object_to_luaval<cocos2d::FileUtils>(tolua_S, "cc.FileUtils",(cocos2d::FileUtils*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "cc.FileUtils:getInstance",argc, 0);
    return 0;
#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_FileUtils_getInstance'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_FileUtils_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (FileUtils)");
    return 0;
}

int lua_register_cocos2dx_FileUtils(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"cc.FileUtils");
    tolua_cclass(tolua_S,"FileUtils","cc.FileUtils","",nullptr);

    tolua_beginmodule(tolua_S,"FileUtils");
        tolua_function(tolua_S,"fullPathForFilename",lua_cocos2dx_FileUtils_fullPathForFilename);
        tolua_function(tolua_S,"getStringFromFile",lua_cocos2dx_FileUtils_getStringFromFile);
        tolua_function(tolua_S,"setFilenameLookupDictionary",lua_cocos2dx_FileUtils_setFilenameLookupDictionary);
        tolua_function(tolua_S,"removeFile",lua_cocos2dx_FileUtils_removeFile);
        tolua_function(tolua_S,"isAbsolutePath",lua_cocos2dx_FileUtils_isAbsolutePath);
        tolua_function(tolua_S,"renameFile",lua_cocos2dx_FileUtils_renameFile);
        tolua_function(tolua_S,"loadFilenameLookup",lua_cocos2dx_FileUtils_loadFilenameLookupDictionaryFromFile);
        tolua_function(tolua_S,"isPopupNotify",lua_cocos2dx_FileUtils_isPopupNotify);
        tolua_function(tolua_S,"getValueVectorFromFile",lua_cocos2dx_FileUtils_getValueVectorFromFile);
        tolua_function(tolua_S,"getSearchPaths",lua_cocos2dx_FileUtils_getSearchPaths);
        tolua_function(tolua_S,"writeToFile",lua_cocos2dx_FileUtils_writeToFile);
        tolua_function(tolua_S,"getValueMapFromFile",lua_cocos2dx_FileUtils_getValueMapFromFile);
        tolua_function(tolua_S,"getFileSize",lua_cocos2dx_FileUtils_getFileSize);
        tolua_function(tolua_S,"getValueMapFromData",lua_cocos2dx_FileUtils_getValueMapFromData);
        tolua_function(tolua_S,"removeDirectory",lua_cocos2dx_FileUtils_removeDirectory);
        tolua_function(tolua_S,"setSearchPaths",lua_cocos2dx_FileUtils_setSearchPaths);
        tolua_function(tolua_S,"writeStringToFile",lua_cocos2dx_FileUtils_writeStringToFile);
        tolua_function(tolua_S,"setSearchResolutionsOrder",lua_cocos2dx_FileUtils_setSearchResolutionsOrder);
        tolua_function(tolua_S,"addSearchResolutionsOrder",lua_cocos2dx_FileUtils_addSearchResolutionsOrder);
        tolua_function(tolua_S,"addSearchPath",lua_cocos2dx_FileUtils_addSearchPath);
        tolua_function(tolua_S,"writeValueVectorToFile",lua_cocos2dx_FileUtils_writeValueVectorToFile);
        tolua_function(tolua_S,"isFileExist",lua_cocos2dx_FileUtils_isFileExist);
        tolua_function(tolua_S,"purgeCachedEntries",lua_cocos2dx_FileUtils_purgeCachedEntries);
        tolua_function(tolua_S,"fullPathFromRelativeFile",lua_cocos2dx_FileUtils_fullPathFromRelativeFile);
        tolua_function(tolua_S,"getSuitableFOpen",lua_cocos2dx_FileUtils_getSuitableFOpen);
        tolua_function(tolua_S,"writeValueMapToFile",lua_cocos2dx_FileUtils_writeValueMapToFile);
        tolua_function(tolua_S,"getFileExtension",lua_cocos2dx_FileUtils_getFileExtension);
        tolua_function(tolua_S,"setWritablePath",lua_cocos2dx_FileUtils_setWritablePath);
        tolua_function(tolua_S,"setPopupNotify",lua_cocos2dx_FileUtils_setPopupNotify);
        tolua_function(tolua_S,"isDirectoryExist",lua_cocos2dx_FileUtils_isDirectoryExist);
        tolua_function(tolua_S,"setDefaultResourceRootPath",lua_cocos2dx_FileUtils_setDefaultResourceRootPath);
        tolua_function(tolua_S,"getSearchResolutionsOrder",lua_cocos2dx_FileUtils_getSearchResolutionsOrder);
        tolua_function(tolua_S,"createDirectory",lua_cocos2dx_FileUtils_createDirectory);
        tolua_function(tolua_S,"getWritablePath",lua_cocos2dx_FileUtils_getWritablePath);
        tolua_function(tolua_S,"destroyInstance", lua_cocos2dx_FileUtils_destroyInstance);
        tolua_function(tolua_S,"setDelegate", lua_cocos2dx_FileUtils_setDelegate);
        tolua_function(tolua_S,"getInstance", lua_cocos2dx_FileUtils_getInstance);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::FileUtils).name();
    g_luaType[typeName] = "cc.FileUtils";
    g_typeCast["FileUtils"] = "cc.FileUtils";
    return 1;
}

int lua_cocos2dx_Label_isClipMarginEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_isClipMarginEnabled'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_isClipMarginEnabled'", nullptr);
            return 0;
        }
        bool ret = cobj->isClipMarginEnabled();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:isClipMarginEnabled",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_isClipMarginEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_enableShadow(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_enableShadow'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_enableShadow'", nullptr);
            return 0;
        }
        cobj->enableShadow();
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 1)
    {
        cocos2d::Color4B arg0;

        ok &=luaval_to_color4b(tolua_S, 2, &arg0, "cc.Label:enableShadow");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_enableShadow'", nullptr);
            return 0;
        }
        cobj->enableShadow(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 2)
    {
        cocos2d::Color4B arg0;
        cocos2d::Size arg1;

        ok &=luaval_to_color4b(tolua_S, 2, &arg0, "cc.Label:enableShadow");

        ok &= luaval_to_size(tolua_S, 3, &arg1, "cc.Label:enableShadow");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_enableShadow'", nullptr);
            return 0;
        }
        cobj->enableShadow(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 3)
    {
        cocos2d::Color4B arg0;
        cocos2d::Size arg1;
        int arg2;

        ok &=luaval_to_color4b(tolua_S, 2, &arg0, "cc.Label:enableShadow");

        ok &= luaval_to_size(tolua_S, 3, &arg1, "cc.Label:enableShadow");

        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "cc.Label:enableShadow");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_enableShadow'", nullptr);
            return 0;
        }
        cobj->enableShadow(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:enableShadow",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_enableShadow'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_setDimensions(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_setDimensions'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2)
    {
        double arg0;
        double arg1;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "cc.Label:setDimensions");

        ok &= luaval_to_number(tolua_S, 3,&arg1, "cc.Label:setDimensions");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_setDimensions'", nullptr);
            return 0;
        }
        cobj->setDimensions(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:setDimensions",argc, 2);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_setDimensions'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_getWidth(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_getWidth'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_getWidth'", nullptr);
            return 0;
        }
        double ret = cobj->getWidth();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:getWidth",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_getWidth'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_getString(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_getString'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_getString'", nullptr);
            return 0;
        }
        const std::string& ret = cobj->getString();
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:getString",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_getString'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_getHeight(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_getHeight'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_getHeight'", nullptr);
            return 0;
        }
        double ret = cobj->getHeight();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:getHeight",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_getHeight'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_disableEffect(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;
#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);
#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_disableEffect'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 1) {
            cocos2d::LabelEffect arg0;
            ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "cc.Label:disableEffect");

            if (!ok) { break; }
            cobj->disableEffect(arg0);
            lua_settop(tolua_S, 1);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 0) {
            cobj->disableEffect();
            lua_settop(tolua_S, 1);
            return 1;
        }
    }while(0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n",  "cc.Label:disableEffect",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_disableEffect'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_setTTFConfig(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_setTTFConfig'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        cocos2d::_ttfConfig arg0;

        ok &= luaval_to_ttfconfig(tolua_S, 2, &arg0, "cc.Label:setTTFConfig");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_setTTFConfig'", nullptr);
            return 0;
        }
        bool ret = cobj->setTTFConfig(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:setTTFConfig",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_setTTFConfig'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_getTextColor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_getTextColor'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_getTextColor'", nullptr);
            return 0;
        }
        const cocos2d::Color4B& ret = cobj->getTextColor();
        color4b_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:getTextColor",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_getTextColor'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_getBlendFunc(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_getBlendFunc'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_getBlendFunc'", nullptr);
            return 0;
        }
        const cocos2d::BlendFunc& ret = cobj->getBlendFunc();
        blendfunc_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:getBlendFunc",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_getBlendFunc'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_enableWrap(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_enableWrap'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "cc.Label:enableWrap");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_enableWrap'", nullptr);
            return 0;
        }
        cobj->enableWrap(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:enableWrap",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_enableWrap'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_setWidth(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_setWidth'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "cc.Label:setWidth");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_setWidth'", nullptr);
            return 0;
        }
        cobj->setWidth(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:setWidth",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_setWidth'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_getAdditionalKerning(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_getAdditionalKerning'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_getAdditionalKerning'", nullptr);
            return 0;
        }
        double ret = cobj->getAdditionalKerning();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:getAdditionalKerning",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_getAdditionalKerning'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_getBMFontSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_getBMFontSize'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_getBMFontSize'", nullptr);
            return 0;
        }
        double ret = cobj->getBMFontSize();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:getBMFontSize",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_getBMFontSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_getMaxLineWidth(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_getMaxLineWidth'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_getMaxLineWidth'", nullptr);
            return 0;
        }
        double ret = cobj->getMaxLineWidth();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:getMaxLineWidth",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_getMaxLineWidth'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_getHorizontalAlignment(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_getHorizontalAlignment'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_getHorizontalAlignment'", nullptr);
            return 0;
        }
        int ret = (int)cobj->getHorizontalAlignment();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:getHorizontalAlignment",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_getHorizontalAlignment'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_getShadowOffset(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_getShadowOffset'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_getShadowOffset'", nullptr);
            return 0;
        }
        cocos2d::Size ret = cobj->getShadowOffset();
        size_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:getShadowOffset",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_getShadowOffset'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_getLineSpacing(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_getLineSpacing'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_getLineSpacing'", nullptr);
            return 0;
        }
        double ret = cobj->getLineSpacing();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:getLineSpacing",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_getLineSpacing'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_setClipMarginEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_setClipMarginEnabled'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "cc.Label:setClipMarginEnabled");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_setClipMarginEnabled'", nullptr);
            return 0;
        }
        cobj->setClipMarginEnabled(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:setClipMarginEnabled",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_setClipMarginEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_setString(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_setString'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.Label:setString");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_setString'", nullptr);
            return 0;
        }
        cobj->setString(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:setString",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_setString'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_setSystemFontName(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_setSystemFontName'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.Label:setSystemFontName");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_setSystemFontName'", nullptr);
            return 0;
        }
        cobj->setSystemFontName(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:setSystemFontName",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_setSystemFontName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_isWrapEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_isWrapEnabled'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_isWrapEnabled'", nullptr);
            return 0;
        }
        bool ret = cobj->isWrapEnabled();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:isWrapEnabled",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_isWrapEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_getOutlineSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_getOutlineSize'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_getOutlineSize'", nullptr);
            return 0;
        }
        int ret = cobj->getOutlineSize();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:getOutlineSize",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_getOutlineSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_setBMFontFilePath(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_setBMFontFilePath'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.Label:setBMFontFilePath");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_setBMFontFilePath'", nullptr);
            return 0;
        }
        bool ret = cobj->setBMFontFilePath(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    if (argc == 2)
    {
        std::string arg0;
        cocos2d::Vec2 arg1;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.Label:setBMFontFilePath");

        ok &= luaval_to_vec2(tolua_S, 3, &arg1, "cc.Label:setBMFontFilePath");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_setBMFontFilePath'", nullptr);
            return 0;
        }
        bool ret = cobj->setBMFontFilePath(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    if (argc == 3)
    {
        std::string arg0;
        cocos2d::Vec2 arg1;
        double arg2;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.Label:setBMFontFilePath");

        ok &= luaval_to_vec2(tolua_S, 3, &arg1, "cc.Label:setBMFontFilePath");

        ok &= luaval_to_number(tolua_S, 4,&arg2, "cc.Label:setBMFontFilePath");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_setBMFontFilePath'", nullptr);
            return 0;
        }
        bool ret = cobj->setBMFontFilePath(arg0, arg1, arg2);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:setBMFontFilePath",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_setBMFontFilePath'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_initWithTTF(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;
#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);
#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_initWithTTF'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 2) {
            cocos2d::_ttfConfig arg0;
            ok &= luaval_to_ttfconfig(tolua_S, 2, &arg0, "cc.Label:initWithTTF");

            if (!ok) { break; }
            std::string arg1;
            ok &= luaval_to_std_string(tolua_S, 3,&arg1, "cc.Label:initWithTTF");

            if (!ok) { break; }
            bool ret = cobj->initWithTTF(arg0, arg1);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 3) {
            cocos2d::_ttfConfig arg0;
            ok &= luaval_to_ttfconfig(tolua_S, 2, &arg0, "cc.Label:initWithTTF");

            if (!ok) { break; }
            std::string arg1;
            ok &= luaval_to_std_string(tolua_S, 3,&arg1, "cc.Label:initWithTTF");

            if (!ok) { break; }
            cocos2d::TextHAlignment arg2;
            ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "cc.Label:initWithTTF");

            if (!ok) { break; }
            bool ret = cobj->initWithTTF(arg0, arg1, arg2);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 4) {
            cocos2d::_ttfConfig arg0;
            ok &= luaval_to_ttfconfig(tolua_S, 2, &arg0, "cc.Label:initWithTTF");

            if (!ok) { break; }
            std::string arg1;
            ok &= luaval_to_std_string(tolua_S, 3,&arg1, "cc.Label:initWithTTF");

            if (!ok) { break; }
            cocos2d::TextHAlignment arg2;
            ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "cc.Label:initWithTTF");

            if (!ok) { break; }
            int arg3;
            ok &= luaval_to_int32(tolua_S, 5,(int *)&arg3, "cc.Label:initWithTTF");

            if (!ok) { break; }
            bool ret = cobj->initWithTTF(arg0, arg1, arg2, arg3);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 3) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.Label:initWithTTF");

            if (!ok) { break; }
            std::string arg1;
            ok &= luaval_to_std_string(tolua_S, 3,&arg1, "cc.Label:initWithTTF");

            if (!ok) { break; }
            double arg2;
            ok &= luaval_to_number(tolua_S, 4,&arg2, "cc.Label:initWithTTF");

            if (!ok) { break; }
            bool ret = cobj->initWithTTF(arg0, arg1, arg2);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 4) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.Label:initWithTTF");

            if (!ok) { break; }
            std::string arg1;
            ok &= luaval_to_std_string(tolua_S, 3,&arg1, "cc.Label:initWithTTF");

            if (!ok) { break; }
            double arg2;
            ok &= luaval_to_number(tolua_S, 4,&arg2, "cc.Label:initWithTTF");

            if (!ok) { break; }
            cocos2d::Size arg3;
            ok &= luaval_to_size(tolua_S, 5, &arg3, "cc.Label:initWithTTF");

            if (!ok) { break; }
            bool ret = cobj->initWithTTF(arg0, arg1, arg2, arg3);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 5) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.Label:initWithTTF");

            if (!ok) { break; }
            std::string arg1;
            ok &= luaval_to_std_string(tolua_S, 3,&arg1, "cc.Label:initWithTTF");

            if (!ok) { break; }
            double arg2;
            ok &= luaval_to_number(tolua_S, 4,&arg2, "cc.Label:initWithTTF");

            if (!ok) { break; }
            cocos2d::Size arg3;
            ok &= luaval_to_size(tolua_S, 5, &arg3, "cc.Label:initWithTTF");

            if (!ok) { break; }
            cocos2d::TextHAlignment arg4;
            ok &= luaval_to_int32(tolua_S, 6,(int *)&arg4, "cc.Label:initWithTTF");

            if (!ok) { break; }
            bool ret = cobj->initWithTTF(arg0, arg1, arg2, arg3, arg4);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 6) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.Label:initWithTTF");

            if (!ok) { break; }
            std::string arg1;
            ok &= luaval_to_std_string(tolua_S, 3,&arg1, "cc.Label:initWithTTF");

            if (!ok) { break; }
            double arg2;
            ok &= luaval_to_number(tolua_S, 4,&arg2, "cc.Label:initWithTTF");

            if (!ok) { break; }
            cocos2d::Size arg3;
            ok &= luaval_to_size(tolua_S, 5, &arg3, "cc.Label:initWithTTF");

            if (!ok) { break; }
            cocos2d::TextHAlignment arg4;
            ok &= luaval_to_int32(tolua_S, 6,(int *)&arg4, "cc.Label:initWithTTF");

            if (!ok) { break; }
            cocos2d::TextVAlignment arg5;
            ok &= luaval_to_int32(tolua_S, 7,(int *)&arg5, "cc.Label:initWithTTF");

            if (!ok) { break; }
            bool ret = cobj->initWithTTF(arg0, arg1, arg2, arg3, arg4, arg5);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n",  "cc.Label:initWithTTF",argc, 3);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_initWithTTF'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_getFontAtlas(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_getFontAtlas'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_getFontAtlas'", nullptr);
            return 0;
        }
        cocos2d::FontAtlas* ret = cobj->getFontAtlas();
        object_to_luaval<cocos2d::FontAtlas>(tolua_S, "cc.FontAtlas",(cocos2d::FontAtlas*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:getFontAtlas",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_getFontAtlas'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_setLineHeight(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_setLineHeight'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "cc.Label:setLineHeight");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_setLineHeight'", nullptr);
            return 0;
        }
        cobj->setLineHeight(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:setLineHeight",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_setLineHeight'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_setSystemFontSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_setSystemFontSize'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "cc.Label:setSystemFontSize");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_setSystemFontSize'", nullptr);
            return 0;
        }
        cobj->setSystemFontSize(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:setSystemFontSize",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_setSystemFontSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_setOverflow(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_setOverflow'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        cocos2d::Label::Overflow arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "cc.Label:setOverflow");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_setOverflow'", nullptr);
            return 0;
        }
        cobj->setOverflow(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:setOverflow",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_setOverflow'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_enableStrikethrough(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_enableStrikethrough'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_enableStrikethrough'", nullptr);
            return 0;
        }
        cobj->enableStrikethrough();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:enableStrikethrough",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_enableStrikethrough'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_updateContent(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_updateContent'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_updateContent'", nullptr);
            return 0;
        }
        cobj->updateContent();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:updateContent",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_updateContent'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_getStringLength(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_getStringLength'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_getStringLength'", nullptr);
            return 0;
        }
        int ret = cobj->getStringLength();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:getStringLength",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_getStringLength'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_setLineBreakWithoutSpace(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_setLineBreakWithoutSpace'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "cc.Label:setLineBreakWithoutSpace");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_setLineBreakWithoutSpace'", nullptr);
            return 0;
        }
        cobj->setLineBreakWithoutSpace(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:setLineBreakWithoutSpace",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_setLineBreakWithoutSpace'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_getStringNumLines(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_getStringNumLines'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_getStringNumLines'", nullptr);
            return 0;
        }
        int ret = cobj->getStringNumLines();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:getStringNumLines",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_getStringNumLines'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_enableOutline(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_enableOutline'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        cocos2d::Color4B arg0;

        ok &=luaval_to_color4b(tolua_S, 2, &arg0, "cc.Label:enableOutline");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_enableOutline'", nullptr);
            return 0;
        }
        cobj->enableOutline(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 2)
    {
        cocos2d::Color4B arg0;
        int arg1;

        ok &=luaval_to_color4b(tolua_S, 2, &arg0, "cc.Label:enableOutline");

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "cc.Label:enableOutline");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_enableOutline'", nullptr);
            return 0;
        }
        cobj->enableOutline(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:enableOutline",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_enableOutline'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_getShadowBlurRadius(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_getShadowBlurRadius'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_getShadowBlurRadius'", nullptr);
            return 0;
        }
        double ret = cobj->getShadowBlurRadius();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:getShadowBlurRadius",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_getShadowBlurRadius'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_getEffectColor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_getEffectColor'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_getEffectColor'", nullptr);
            return 0;
        }
        cocos2d::Color4F ret = cobj->getEffectColor();
        color4f_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:getEffectColor",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_getEffectColor'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_removeAllChildrenWithCleanup(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_removeAllChildrenWithCleanup'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "cc.Label:removeAllChildrenWithCleanup");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_removeAllChildrenWithCleanup'", nullptr);
            return 0;
        }
        cobj->removeAllChildrenWithCleanup(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:removeAllChildrenWithCleanup",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_removeAllChildrenWithCleanup'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_setCharMap(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;
#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);
#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_setCharMap'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 4) {
            cocos2d::Texture2D* arg0;
            ok &= luaval_to_object<cocos2d::Texture2D>(tolua_S, 2, "cc.Texture2D",&arg0, "cc.Label:setCharMap");

            if (!ok) { break; }
            int arg1;
            ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "cc.Label:setCharMap");

            if (!ok) { break; }
            int arg2;
            ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "cc.Label:setCharMap");

            if (!ok) { break; }
            int arg3;
            ok &= luaval_to_int32(tolua_S, 5,(int *)&arg3, "cc.Label:setCharMap");

            if (!ok) { break; }
            bool ret = cobj->setCharMap(arg0, arg1, arg2, arg3);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 4) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.Label:setCharMap");

            if (!ok) { break; }
            int arg1;
            ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "cc.Label:setCharMap");

            if (!ok) { break; }
            int arg2;
            ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "cc.Label:setCharMap");

            if (!ok) { break; }
            int arg3;
            ok &= luaval_to_int32(tolua_S, 5,(int *)&arg3, "cc.Label:setCharMap");

            if (!ok) { break; }
            bool ret = cobj->setCharMap(arg0, arg1, arg2, arg3);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 1) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.Label:setCharMap");

            if (!ok) { break; }
            bool ret = cobj->setCharMap(arg0);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n",  "cc.Label:setCharMap",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_setCharMap'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_getDimensions(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_getDimensions'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_getDimensions'", nullptr);
            return 0;
        }
        const cocos2d::Size& ret = cobj->getDimensions();
        size_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:getDimensions",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_getDimensions'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_setMaxLineWidth(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_setMaxLineWidth'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "cc.Label:setMaxLineWidth");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_setMaxLineWidth'", nullptr);
            return 0;
        }
        cobj->setMaxLineWidth(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:setMaxLineWidth",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_setMaxLineWidth'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_getSystemFontName(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_getSystemFontName'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_getSystemFontName'", nullptr);
            return 0;
        }
        const std::string& ret = cobj->getSystemFontName();
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:getSystemFontName",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_getSystemFontName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_setVerticalAlignment(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_setVerticalAlignment'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        cocos2d::TextVAlignment arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "cc.Label:setVerticalAlignment");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_setVerticalAlignment'", nullptr);
            return 0;
        }
        cobj->setVerticalAlignment(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:setVerticalAlignment",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_setVerticalAlignment'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_setLineSpacing(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_setLineSpacing'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "cc.Label:setLineSpacing");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_setLineSpacing'", nullptr);
            return 0;
        }
        cobj->setLineSpacing(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:setLineSpacing",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_setLineSpacing'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_getLineHeight(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_getLineHeight'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_getLineHeight'", nullptr);
            return 0;
        }
        double ret = cobj->getLineHeight();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:getLineHeight",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_getLineHeight'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_getShadowColor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_getShadowColor'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_getShadowColor'", nullptr);
            return 0;
        }
        cocos2d::Color4F ret = cobj->getShadowColor();
        color4f_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:getShadowColor",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_getShadowColor'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_getTTFConfig(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_getTTFConfig'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_getTTFConfig'", nullptr);
            return 0;
        }
        const cocos2d::_ttfConfig& ret = cobj->getTTFConfig();
        ttfconfig_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:getTTFConfig",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_getTTFConfig'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_enableItalics(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_enableItalics'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_enableItalics'", nullptr);
            return 0;
        }
        cobj->enableItalics();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:enableItalics",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_enableItalics'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_setTextColor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_setTextColor'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        cocos2d::Color4B arg0;

        ok &=luaval_to_color4b(tolua_S, 2, &arg0, "cc.Label:setTextColor");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_setTextColor'", nullptr);
            return 0;
        }
        cobj->setTextColor(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:setTextColor",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_setTextColor'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_getLetter(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_getLetter'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "cc.Label:getLetter");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_getLetter'", nullptr);
            return 0;
        }
        cocos2d::Sprite* ret = cobj->getLetter(arg0);
        object_to_luaval<cocos2d::Sprite>(tolua_S, "cc.Sprite",(cocos2d::Sprite*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:getLetter",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_getLetter'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_setHeight(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_setHeight'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "cc.Label:setHeight");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_setHeight'", nullptr);
            return 0;
        }
        cobj->setHeight(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:setHeight",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_setHeight'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_isShadowEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_isShadowEnabled'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_isShadowEnabled'", nullptr);
            return 0;
        }
        bool ret = cobj->isShadowEnabled();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:isShadowEnabled",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_isShadowEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_enableGlow(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_enableGlow'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        cocos2d::Color4B arg0;

        ok &=luaval_to_color4b(tolua_S, 2, &arg0, "cc.Label:enableGlow");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_enableGlow'", nullptr);
            return 0;
        }
        cobj->enableGlow(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:enableGlow",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_enableGlow'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_getOverflow(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_getOverflow'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_getOverflow'", nullptr);
            return 0;
        }
        int ret = (int)cobj->getOverflow();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:getOverflow",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_getOverflow'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_getVerticalAlignment(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_getVerticalAlignment'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_getVerticalAlignment'", nullptr);
            return 0;
        }
        int ret = (int)cobj->getVerticalAlignment();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:getVerticalAlignment",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_getVerticalAlignment'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_setAdditionalKerning(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_setAdditionalKerning'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "cc.Label:setAdditionalKerning");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_setAdditionalKerning'", nullptr);
            return 0;
        }
        cobj->setAdditionalKerning(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:setAdditionalKerning",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_setAdditionalKerning'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_getSystemFontSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_getSystemFontSize'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_getSystemFontSize'", nullptr);
            return 0;
        }
        double ret = cobj->getSystemFontSize();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:getSystemFontSize",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_getSystemFontSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_setBlendFunc(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_setBlendFunc'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        cocos2d::BlendFunc arg0;

        ok &= luaval_to_blendfunc(tolua_S, 2, &arg0, "cc.Label:setBlendFunc");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_setBlendFunc'", nullptr);
            return 0;
        }
        cobj->setBlendFunc(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:setBlendFunc",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_setBlendFunc'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_getTextAlignment(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_getTextAlignment'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_getTextAlignment'", nullptr);
            return 0;
        }
        int ret = (int)cobj->getTextAlignment();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:getTextAlignment",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_getTextAlignment'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_getBMFontFilePath(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_getBMFontFilePath'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_getBMFontFilePath'", nullptr);
            return 0;
        }
        const std::string& ret = cobj->getBMFontFilePath();
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:getBMFontFilePath",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_getBMFontFilePath'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_setHorizontalAlignment(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_setHorizontalAlignment'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        cocos2d::TextHAlignment arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "cc.Label:setHorizontalAlignment");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_setHorizontalAlignment'", nullptr);
            return 0;
        }
        cobj->setHorizontalAlignment(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:setHorizontalAlignment",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_setHorizontalAlignment'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_enableBold(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_enableBold'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_enableBold'", nullptr);
            return 0;
        }
        cobj->enableBold();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:enableBold",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_enableBold'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_enableUnderline(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_enableUnderline'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_enableUnderline'", nullptr);
            return 0;
        }
        cobj->enableUnderline();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:enableUnderline",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_enableUnderline'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_getLabelEffectType(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_getLabelEffectType'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_getLabelEffectType'", nullptr);
            return 0;
        }
        int ret = (int)cobj->getLabelEffectType();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:getLabelEffectType",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_getLabelEffectType'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_setAlignment(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;
#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);
#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_setAlignment'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 2) {
            cocos2d::TextHAlignment arg0;
            ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "cc.Label:setAlignment");

            if (!ok) { break; }
            cocos2d::TextVAlignment arg1;
            ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "cc.Label:setAlignment");

            if (!ok) { break; }
            cobj->setAlignment(arg0, arg1);
            lua_settop(tolua_S, 1);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 1) {
            cocos2d::TextHAlignment arg0;
            ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "cc.Label:setAlignment");

            if (!ok) { break; }
            cobj->setAlignment(arg0);
            lua_settop(tolua_S, 1);
            return 1;
        }
    }while(0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n",  "cc.Label:setAlignment",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_setAlignment'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_requestSystemFontRefresh(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_requestSystemFontRefresh'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_requestSystemFontRefresh'", nullptr);
            return 0;
        }
        cobj->requestSystemFontRefresh();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:requestSystemFontRefresh",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_requestSystemFontRefresh'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_setBMFontSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::Label* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::Label*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_Label_setBMFontSize'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "cc.Label:setBMFontSize");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_setBMFontSize'", nullptr);
            return 0;
        }
        cobj->setBMFontSize(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Label:setBMFontSize",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_setBMFontSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_Label_createWithBMFont(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if TOLUA_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        std::string arg0;
        std::string arg1;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.Label:createWithBMFont");
        ok &= luaval_to_std_string(tolua_S, 3,&arg1, "cc.Label:createWithBMFont");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_createWithBMFont'", nullptr);
            return 0;
        }
        cocos2d::Label* ret = cocos2d::Label::createWithBMFont(arg0, arg1);
        object_to_luaval<cocos2d::Label>(tolua_S, "cc.Label",(cocos2d::Label*)ret);
        return 1;
    }
    if (argc == 3)
    {
        std::string arg0;
        std::string arg1;
        cocos2d::TextHAlignment arg2;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.Label:createWithBMFont");
        ok &= luaval_to_std_string(tolua_S, 3,&arg1, "cc.Label:createWithBMFont");
        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "cc.Label:createWithBMFont");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_createWithBMFont'", nullptr);
            return 0;
        }
        cocos2d::Label* ret = cocos2d::Label::createWithBMFont(arg0, arg1, arg2);
        object_to_luaval<cocos2d::Label>(tolua_S, "cc.Label",(cocos2d::Label*)ret);
        return 1;
    }
    if (argc == 4)
    {
        std::string arg0;
        std::string arg1;
        cocos2d::TextHAlignment arg2;
        int arg3;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.Label:createWithBMFont");
        ok &= luaval_to_std_string(tolua_S, 3,&arg1, "cc.Label:createWithBMFont");
        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "cc.Label:createWithBMFont");
        ok &= luaval_to_int32(tolua_S, 5,(int *)&arg3, "cc.Label:createWithBMFont");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_createWithBMFont'", nullptr);
            return 0;
        }
        cocos2d::Label* ret = cocos2d::Label::createWithBMFont(arg0, arg1, arg2, arg3);
        object_to_luaval<cocos2d::Label>(tolua_S, "cc.Label",(cocos2d::Label*)ret);
        return 1;
    }
    if (argc == 5)
    {
        std::string arg0;
        std::string arg1;
        cocos2d::TextHAlignment arg2;
        int arg3;
        cocos2d::Vec2 arg4;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.Label:createWithBMFont");
        ok &= luaval_to_std_string(tolua_S, 3,&arg1, "cc.Label:createWithBMFont");
        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "cc.Label:createWithBMFont");
        ok &= luaval_to_int32(tolua_S, 5,(int *)&arg3, "cc.Label:createWithBMFont");
        ok &= luaval_to_vec2(tolua_S, 6, &arg4, "cc.Label:createWithBMFont");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_createWithBMFont'", nullptr);
            return 0;
        }
        cocos2d::Label* ret = cocos2d::Label::createWithBMFont(arg0, arg1, arg2, arg3, arg4);
        object_to_luaval<cocos2d::Label>(tolua_S, "cc.Label",(cocos2d::Label*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "cc.Label:createWithBMFont",argc, 2);
    return 0;
#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_createWithBMFont'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_Label_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if TOLUA_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_create'", nullptr);
            return 0;
        }
        cocos2d::Label* ret = cocos2d::Label::create();
        object_to_luaval<cocos2d::Label>(tolua_S, "cc.Label",(cocos2d::Label*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "cc.Label:create",argc, 0);
    return 0;
#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_Label_createWithCharMap(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if TOLUA_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do
    {
        if (argc == 4)
        {
            cocos2d::Texture2D* arg0;
            ok &= luaval_to_object<cocos2d::Texture2D>(tolua_S, 2, "cc.Texture2D",&arg0, "cc.Label:createWithCharMap");
            if (!ok) { break; }
            int arg1;
            ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "cc.Label:createWithCharMap");
            if (!ok) { break; }
            int arg2;
            ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "cc.Label:createWithCharMap");
            if (!ok) { break; }
            int arg3;
            ok &= luaval_to_int32(tolua_S, 5,(int *)&arg3, "cc.Label:createWithCharMap");
            if (!ok) { break; }
            cocos2d::Label* ret = cocos2d::Label::createWithCharMap(arg0, arg1, arg2, arg3);
            object_to_luaval<cocos2d::Label>(tolua_S, "cc.Label",(cocos2d::Label*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    do
    {
        if (argc == 4)
        {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.Label:createWithCharMap");
            if (!ok) { break; }
            int arg1;
            ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "cc.Label:createWithCharMap");
            if (!ok) { break; }
            int arg2;
            ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "cc.Label:createWithCharMap");
            if (!ok) { break; }
            int arg3;
            ok &= luaval_to_int32(tolua_S, 5,(int *)&arg3, "cc.Label:createWithCharMap");
            if (!ok) { break; }
            cocos2d::Label* ret = cocos2d::Label::createWithCharMap(arg0, arg1, arg2, arg3);
            object_to_luaval<cocos2d::Label>(tolua_S, "cc.Label",(cocos2d::Label*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    do
    {
        if (argc == 1)
        {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.Label:createWithCharMap");
            if (!ok) { break; }
            cocos2d::Label* ret = cocos2d::Label::createWithCharMap(arg0);
            object_to_luaval<cocos2d::Label>(tolua_S, "cc.Label",(cocos2d::Label*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d", "cc.Label:createWithCharMap",argc, 1);
    return 0;
#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_createWithCharMap'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_Label_createWithSystemFont(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if TOLUA_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.Label",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 3)
    {
        std::string arg0;
        std::string arg1;
        double arg2;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.Label:createWithSystemFont");
        ok &= luaval_to_std_string(tolua_S, 3,&arg1, "cc.Label:createWithSystemFont");
        ok &= luaval_to_number(tolua_S, 4,&arg2, "cc.Label:createWithSystemFont");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_createWithSystemFont'", nullptr);
            return 0;
        }
        cocos2d::Label* ret = cocos2d::Label::createWithSystemFont(arg0, arg1, arg2);
        object_to_luaval<cocos2d::Label>(tolua_S, "cc.Label",(cocos2d::Label*)ret);
        return 1;
    }
    if (argc == 4)
    {
        std::string arg0;
        std::string arg1;
        double arg2;
        cocos2d::Size arg3;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.Label:createWithSystemFont");
        ok &= luaval_to_std_string(tolua_S, 3,&arg1, "cc.Label:createWithSystemFont");
        ok &= luaval_to_number(tolua_S, 4,&arg2, "cc.Label:createWithSystemFont");
        ok &= luaval_to_size(tolua_S, 5, &arg3, "cc.Label:createWithSystemFont");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_createWithSystemFont'", nullptr);
            return 0;
        }
        cocos2d::Label* ret = cocos2d::Label::createWithSystemFont(arg0, arg1, arg2, arg3);
        object_to_luaval<cocos2d::Label>(tolua_S, "cc.Label",(cocos2d::Label*)ret);
        return 1;
    }
    if (argc == 5)
    {
        std::string arg0;
        std::string arg1;
        double arg2;
        cocos2d::Size arg3;
        cocos2d::TextHAlignment arg4;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.Label:createWithSystemFont");
        ok &= luaval_to_std_string(tolua_S, 3,&arg1, "cc.Label:createWithSystemFont");
        ok &= luaval_to_number(tolua_S, 4,&arg2, "cc.Label:createWithSystemFont");
        ok &= luaval_to_size(tolua_S, 5, &arg3, "cc.Label:createWithSystemFont");
        ok &= luaval_to_int32(tolua_S, 6,(int *)&arg4, "cc.Label:createWithSystemFont");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_createWithSystemFont'", nullptr);
            return 0;
        }
        cocos2d::Label* ret = cocos2d::Label::createWithSystemFont(arg0, arg1, arg2, arg3, arg4);
        object_to_luaval<cocos2d::Label>(tolua_S, "cc.Label",(cocos2d::Label*)ret);
        return 1;
    }
    if (argc == 6)
    {
        std::string arg0;
        std::string arg1;
        double arg2;
        cocos2d::Size arg3;
        cocos2d::TextHAlignment arg4;
        cocos2d::TextVAlignment arg5;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.Label:createWithSystemFont");
        ok &= luaval_to_std_string(tolua_S, 3,&arg1, "cc.Label:createWithSystemFont");
        ok &= luaval_to_number(tolua_S, 4,&arg2, "cc.Label:createWithSystemFont");
        ok &= luaval_to_size(tolua_S, 5, &arg3, "cc.Label:createWithSystemFont");
        ok &= luaval_to_int32(tolua_S, 6,(int *)&arg4, "cc.Label:createWithSystemFont");
        ok &= luaval_to_int32(tolua_S, 7,(int *)&arg5, "cc.Label:createWithSystemFont");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_Label_createWithSystemFont'", nullptr);
            return 0;
        }
        cocos2d::Label* ret = cocos2d::Label::createWithSystemFont(arg0, arg1, arg2, arg3, arg4, arg5);
        object_to_luaval<cocos2d::Label>(tolua_S, "cc.Label",(cocos2d::Label*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "cc.Label:createWithSystemFont",argc, 3);
    return 0;
#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_Label_createWithSystemFont'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_Label_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (Label)");
    return 0;
}

int lua_register_cocos2dx_Label(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"cc.Label");
    tolua_cclass(tolua_S,"Label","cc.Label","cc.Node",nullptr);

    tolua_beginmodule(tolua_S,"Label");
        tolua_function(tolua_S,"isClipMarginEnabled",lua_cocos2dx_Label_isClipMarginEnabled);
        tolua_function(tolua_S,"enableShadow",lua_cocos2dx_Label_enableShadow);
        tolua_function(tolua_S,"setDimensions",lua_cocos2dx_Label_setDimensions);
        tolua_function(tolua_S,"getWidth",lua_cocos2dx_Label_getWidth);
        tolua_function(tolua_S,"getString",lua_cocos2dx_Label_getString);
        tolua_function(tolua_S,"getHeight",lua_cocos2dx_Label_getHeight);
        tolua_function(tolua_S,"disableEffect",lua_cocos2dx_Label_disableEffect);
        tolua_function(tolua_S,"setTTFConfig",lua_cocos2dx_Label_setTTFConfig);
        tolua_function(tolua_S,"getTextColor",lua_cocos2dx_Label_getTextColor);
        tolua_function(tolua_S,"getBlendFunc",lua_cocos2dx_Label_getBlendFunc);
        tolua_function(tolua_S,"enableWrap",lua_cocos2dx_Label_enableWrap);
        tolua_function(tolua_S,"setWidth",lua_cocos2dx_Label_setWidth);
        tolua_function(tolua_S,"getAdditionalKerning",lua_cocos2dx_Label_getAdditionalKerning);
        tolua_function(tolua_S,"getBMFontSize",lua_cocos2dx_Label_getBMFontSize);
        tolua_function(tolua_S,"getMaxLineWidth",lua_cocos2dx_Label_getMaxLineWidth);
        tolua_function(tolua_S,"getHorizontalAlignment",lua_cocos2dx_Label_getHorizontalAlignment);
        tolua_function(tolua_S,"getShadowOffset",lua_cocos2dx_Label_getShadowOffset);
        tolua_function(tolua_S,"getLineSpacing",lua_cocos2dx_Label_getLineSpacing);
        tolua_function(tolua_S,"setClipMarginEnabled",lua_cocos2dx_Label_setClipMarginEnabled);
        tolua_function(tolua_S,"setString",lua_cocos2dx_Label_setString);
        tolua_function(tolua_S,"setSystemFontName",lua_cocos2dx_Label_setSystemFontName);
        tolua_function(tolua_S,"isWrapEnabled",lua_cocos2dx_Label_isWrapEnabled);
        tolua_function(tolua_S,"getOutlineSize",lua_cocos2dx_Label_getOutlineSize);
        tolua_function(tolua_S,"setBMFontFilePath",lua_cocos2dx_Label_setBMFontFilePath);
        tolua_function(tolua_S,"initWithTTF",lua_cocos2dx_Label_initWithTTF);
        tolua_function(tolua_S,"getFontAtlas",lua_cocos2dx_Label_getFontAtlas);
        tolua_function(tolua_S,"setLineHeight",lua_cocos2dx_Label_setLineHeight);
        tolua_function(tolua_S,"setSystemFontSize",lua_cocos2dx_Label_setSystemFontSize);
        tolua_function(tolua_S,"setOverflow",lua_cocos2dx_Label_setOverflow);
        tolua_function(tolua_S,"enableStrikethrough",lua_cocos2dx_Label_enableStrikethrough);
        tolua_function(tolua_S,"updateContent",lua_cocos2dx_Label_updateContent);
        tolua_function(tolua_S,"getStringLength",lua_cocos2dx_Label_getStringLength);
        tolua_function(tolua_S,"setLineBreakWithoutSpace",lua_cocos2dx_Label_setLineBreakWithoutSpace);
        tolua_function(tolua_S,"getStringNumLines",lua_cocos2dx_Label_getStringNumLines);
        tolua_function(tolua_S,"enableOutline",lua_cocos2dx_Label_enableOutline);
        tolua_function(tolua_S,"getShadowBlurRadius",lua_cocos2dx_Label_getShadowBlurRadius);
        tolua_function(tolua_S,"getEffectColor",lua_cocos2dx_Label_getEffectColor);
        tolua_function(tolua_S,"removeAllChildrenWithCleanup",lua_cocos2dx_Label_removeAllChildrenWithCleanup);
        tolua_function(tolua_S,"setCharMap",lua_cocos2dx_Label_setCharMap);
        tolua_function(tolua_S,"getDimensions",lua_cocos2dx_Label_getDimensions);
        tolua_function(tolua_S,"setMaxLineWidth",lua_cocos2dx_Label_setMaxLineWidth);
        tolua_function(tolua_S,"getSystemFontName",lua_cocos2dx_Label_getSystemFontName);
        tolua_function(tolua_S,"setVerticalAlignment",lua_cocos2dx_Label_setVerticalAlignment);
        tolua_function(tolua_S,"setLineSpacing",lua_cocos2dx_Label_setLineSpacing);
        tolua_function(tolua_S,"getLineHeight",lua_cocos2dx_Label_getLineHeight);
        tolua_function(tolua_S,"getShadowColor",lua_cocos2dx_Label_getShadowColor);
        tolua_function(tolua_S,"getTTFConfig",lua_cocos2dx_Label_getTTFConfig);
        tolua_function(tolua_S,"enableItalics",lua_cocos2dx_Label_enableItalics);
        tolua_function(tolua_S,"setTextColor",lua_cocos2dx_Label_setTextColor);
        tolua_function(tolua_S,"getLetter",lua_cocos2dx_Label_getLetter);
        tolua_function(tolua_S,"setHeight",lua_cocos2dx_Label_setHeight);
        tolua_function(tolua_S,"isShadowEnabled",lua_cocos2dx_Label_isShadowEnabled);
        tolua_function(tolua_S,"enableGlow",lua_cocos2dx_Label_enableGlow);
        tolua_function(tolua_S,"getOverflow",lua_cocos2dx_Label_getOverflow);
        tolua_function(tolua_S,"getVerticalAlignment",lua_cocos2dx_Label_getVerticalAlignment);
        tolua_function(tolua_S,"setAdditionalKerning",lua_cocos2dx_Label_setAdditionalKerning);
        tolua_function(tolua_S,"getSystemFontSize",lua_cocos2dx_Label_getSystemFontSize);
        tolua_function(tolua_S,"setBlendFunc",lua_cocos2dx_Label_setBlendFunc);
        tolua_function(tolua_S,"getTextAlignment",lua_cocos2dx_Label_getTextAlignment);
        tolua_function(tolua_S,"getBMFontFilePath",lua_cocos2dx_Label_getBMFontFilePath);
        tolua_function(tolua_S,"setHorizontalAlignment",lua_cocos2dx_Label_setHorizontalAlignment);
        tolua_function(tolua_S,"enableBold",lua_cocos2dx_Label_enableBold);
        tolua_function(tolua_S,"enableUnderline",lua_cocos2dx_Label_enableUnderline);
        tolua_function(tolua_S,"getLabelEffectType",lua_cocos2dx_Label_getLabelEffectType);
        tolua_function(tolua_S,"setAlignment",lua_cocos2dx_Label_setAlignment);
        tolua_function(tolua_S,"requestSystemFontRefresh",lua_cocos2dx_Label_requestSystemFontRefresh);
        tolua_function(tolua_S,"setBMFontSize",lua_cocos2dx_Label_setBMFontSize);
        tolua_function(tolua_S,"createWithBMFont", lua_cocos2dx_Label_createWithBMFont);
        tolua_function(tolua_S,"create", lua_cocos2dx_Label_create);
        tolua_function(tolua_S,"createWithCharMap", lua_cocos2dx_Label_createWithCharMap);
        tolua_function(tolua_S,"createWithSystemFont", lua_cocos2dx_Label_createWithSystemFont);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::Label).name();
    g_luaType[typeName] = "cc.Label";
    g_typeCast["Label"] = "cc.Label";
    return 1;
}

int lua_cocos2dx_LabelAtlas_setString(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::LabelAtlas* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.LabelAtlas",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::LabelAtlas*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_LabelAtlas_setString'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.LabelAtlas:setString");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_LabelAtlas_setString'", nullptr);
            return 0;
        }
        cobj->setString(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.LabelAtlas:setString",argc, 1);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_LabelAtlas_setString'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_LabelAtlas_initWithString(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::LabelAtlas* cobj = nullptr;
    bool ok  = true;
#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.LabelAtlas",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::LabelAtlas*)tolua_tousertype(tolua_S,1,0);
#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_LabelAtlas_initWithString'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 2) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.LabelAtlas:initWithString");

            if (!ok) { break; }
            std::string arg1;
            ok &= luaval_to_std_string(tolua_S, 3,&arg1, "cc.LabelAtlas:initWithString");

            if (!ok) { break; }
            bool ret = cobj->initWithString(arg0, arg1);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 5) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.LabelAtlas:initWithString");

            if (!ok) { break; }
            std::string arg1;
            ok &= luaval_to_std_string(tolua_S, 3,&arg1, "cc.LabelAtlas:initWithString");

            if (!ok) { break; }
            int arg2;
            ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "cc.LabelAtlas:initWithString");

            if (!ok) { break; }
            int arg3;
            ok &= luaval_to_int32(tolua_S, 5,(int *)&arg3, "cc.LabelAtlas:initWithString");

            if (!ok) { break; }
            int arg4;
            ok &= luaval_to_int32(tolua_S, 6,(int *)&arg4, "cc.LabelAtlas:initWithString");

            if (!ok) { break; }
            bool ret = cobj->initWithString(arg0, arg1, arg2, arg3, arg4);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 5) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.LabelAtlas:initWithString");

            if (!ok) { break; }
            cocos2d::Texture2D* arg1;
            ok &= luaval_to_object<cocos2d::Texture2D>(tolua_S, 3, "cc.Texture2D",&arg1, "cc.LabelAtlas:initWithString");

            if (!ok) { break; }
            int arg2;
            ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "cc.LabelAtlas:initWithString");

            if (!ok) { break; }
            int arg3;
            ok &= luaval_to_int32(tolua_S, 5,(int *)&arg3, "cc.LabelAtlas:initWithString");

            if (!ok) { break; }
            int arg4;
            ok &= luaval_to_int32(tolua_S, 6,(int *)&arg4, "cc.LabelAtlas:initWithString");

            if (!ok) { break; }
            bool ret = cobj->initWithString(arg0, arg1, arg2, arg3, arg4);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n",  "cc.LabelAtlas:initWithString",argc, 5);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_LabelAtlas_initWithString'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_LabelAtlas_getString(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::LabelAtlas* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if TOLUA_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.LabelAtlas",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::LabelAtlas*)tolua_tousertype(tolua_S,1,0);

#if TOLUA_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_LabelAtlas_getString'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_LabelAtlas_getString'", nullptr);
            return 0;
        }
        const std::string& ret = cobj->getString();
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.LabelAtlas:getString",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_LabelAtlas_getString'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_LabelAtlas_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if TOLUA_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.LabelAtlas",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do
    {
        if (argc == 5)
        {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.LabelAtlas:create");
            if (!ok) { break; }
            std::string arg1;
            ok &= luaval_to_std_string(tolua_S, 3,&arg1, "cc.LabelAtlas:create");
            if (!ok) { break; }
            int arg2;
            ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "cc.LabelAtlas:create");
            if (!ok) { break; }
            int arg3;
            ok &= luaval_to_int32(tolua_S, 5,(int *)&arg3, "cc.LabelAtlas:create");
            if (!ok) { break; }
            int arg4;
            ok &= luaval_to_int32(tolua_S, 6,(int *)&arg4, "cc.LabelAtlas:create");
            if (!ok) { break; }
            cocos2d::LabelAtlas* ret = cocos2d::LabelAtlas::create(arg0, arg1, arg2, arg3, arg4);
            object_to_luaval<cocos2d::LabelAtlas>(tolua_S, "cc.LabelAtlas",(cocos2d::LabelAtlas*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    do
    {
        if (argc == 0)
        {
            cocos2d::LabelAtlas* ret = cocos2d::LabelAtlas::create();
            object_to_luaval<cocos2d::LabelAtlas>(tolua_S, "cc.LabelAtlas",(cocos2d::LabelAtlas*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    do
    {
        if (argc == 2)
        {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.LabelAtlas:create");
            if (!ok) { break; }
            std::string arg1;
            ok &= luaval_to_std_string(tolua_S, 3,&arg1, "cc.LabelAtlas:create");
            if (!ok) { break; }
            cocos2d::LabelAtlas* ret = cocos2d::LabelAtlas::create(arg0, arg1);
            object_to_luaval<cocos2d::LabelAtlas>(tolua_S, "cc.LabelAtlas",(cocos2d::LabelAtlas*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d", "cc.LabelAtlas:create",argc, 2);
    return 0;
#if TOLUA_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_LabelAtlas_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_LabelAtlas_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::LabelAtlas* cobj = nullptr;
    bool ok  = true;

#if TOLUA_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_LabelAtlas_constructor'", nullptr);
            return 0;
        }
        cobj = new cocos2d::LabelAtlas();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"cc.LabelAtlas");
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.LabelAtlas:LabelAtlas",argc, 0);
    return 0;

#if TOLUA_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_LabelAtlas_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_LabelAtlas_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (LabelAtlas)");
    return 0;
}

int lua_register_cocos2dx_LabelAtlas(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"cc.LabelAtlas");
    tolua_cclass(tolua_S,"LabelAtlas","cc.LabelAtlas","cc.AtlasNode",nullptr);

    tolua_beginmodule(tolua_S,"LabelAtlas");
        tolua_function(tolua_S,"new",lua_cocos2dx_LabelAtlas_constructor);
        tolua_function(tolua_S,"setString",lua_cocos2dx_LabelAtlas_setString);
        tolua_function(tolua_S,"initWithString",lua_cocos2dx_LabelAtlas_initWithString);
        tolua_function(tolua_S,"getString",lua_cocos2dx_LabelAtlas_getString);
        tolua_function(tolua_S,"_create", lua_cocos2dx_LabelAtlas_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::LabelAtlas).name();
    g_luaType[typeName] = "cc.LabelAtlas";
    g_typeCast["LabelAtlas"] = "cc.LabelAtlas";
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
        tolua_function(tolua_S,"removeAllChildrenWithCleanup",lua_cocos2dx_Sprite_removeAllChildrenWithCleanup);
        tolua_function(tolua_S,"setTextureRect",lua_cocos2dx_Sprite_setTextureRect);
        tolua_function(tolua_S,"isFrameDisplayed",lua_cocos2dx_Sprite_isFrameDisplayed);
        tolua_function(tolua_S,"getBlendFunc",lua_cocos2dx_Sprite_getBlendFunc);
        tolua_function(tolua_S,"getSpriteFrame",lua_cocos2dx_Sprite_getSpriteFrame);
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
	lua_register_cocos2dx_Scene(tolua_S);
	lua_register_cocos2dx_Director(tolua_S);
	lua_register_cocos2dx_LabelAtlas(tolua_S);
	lua_register_cocos2dx_FileUtils(tolua_S);
	lua_register_cocos2dx_Label(tolua_S);

	tolua_endmodule(tolua_S);
	return 1;
}


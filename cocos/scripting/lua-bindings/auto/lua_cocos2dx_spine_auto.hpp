#include "base/ccConfig.h"
#ifndef __cocos2dx_spine_h__
#define __cocos2dx_spine_h__

#if CC_USE_SPINE > 0

#ifdef __cplusplus
extern "C" {
#endif
#include "tolua++.h"
#ifdef __cplusplus
}
#endif

int register_all_cocos2dx_spine(lua_State* tolua_S);

#endif // CC_USE_SPINE
































#endif // __cocos2dx_spine_h__

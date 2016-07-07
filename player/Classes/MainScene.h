#pragma once

#include "cocos2d.h"

class MainScene : public cocos2d::Scene
{
public:
	virtual bool init();

	CREATE_FUNC(MainScene);

	virtual void onEnter();
};
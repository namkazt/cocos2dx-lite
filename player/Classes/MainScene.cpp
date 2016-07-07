#include "MainScene.h"
#include "HelloWorldScene.h"
#include "BunnyMarkScene.h"

USING_NS_CC;
bool MainScene::init()
{
	return true;
}

void MainScene::onEnter()
{
	Scene::onEnter();

	auto size = Director::getInstance()->getWinSize();
	auto fontName = "arial";
	auto fontSize = 32;

	int y = size.height - 10;
	{
		auto label = Label::createWithSystemFont("HelloWorld", fontName, fontSize);
		y -= label->getContentSize().height;
		label->setPosition(size.width / 2, y);
		auto touch = EventListenerTouchOneByOne::create();
        touch->setSwallowTouches(true);
		touch->onTouchBegan = [=](Touch* touch, Event*) -> bool {
			if (label->getBoundingBox().containsPoint(touch->getLocation())) {
				Director::getInstance()->replaceScene(TransitionFade::create(0.5, HelloWorld::createScene()));
                return true;
			}
			return false;
		};

		getEventDispatcher()->addEventListenerWithSceneGraphPriority(touch, label);
		addChild(label);
	}

	{
		auto label = Label::createWithSystemFont("BunnyMarkScene", fontName, fontSize);
		y -= label->getContentSize().height;
		label->setPosition(size.width / 2, y);
		auto touch = EventListenerTouchOneByOne::create();
        touch->setSwallowTouches(true);
		touch->onTouchBegan = [=](Touch* touch, Event*) -> bool {
			if (label->getBoundingBox().containsPoint(touch->getLocation())) {
				Director::getInstance()->replaceScene(TransitionFade::create(0.5, BunnyMarkScene::create()));
                return true;
            }
            return false;
		};

		getEventDispatcher()->addEventListenerWithSceneGraphPriority(touch, label);
		addChild(label);
	}
}
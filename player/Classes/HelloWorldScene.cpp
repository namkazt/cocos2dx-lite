#include "HelloWorldScene.h"

USING_NS_CC;

Scene* HelloWorld::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = HelloWorld::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    /////////////////////////////
    // 2. add a menu item with "X" image, which is clicked to quit the program
    //    you may modify it.

    // add a "close" icon to exit the progress. it's an autorelease object
    auto closeItem = Sprite::create("CloseNormal.png");
    closeItem->setPosition(Vec2(origin.x + visibleSize.width - closeItem->getContentSize().width/2 ,
                                origin.y + closeItem->getContentSize().height/2));
    addChild(closeItem);

    // touch event
    auto listener = EventListenerTouchOneByOne::create();
    listener->onTouchBegan = [](Touch *touch, Event *event) -> bool {
        if (event->getCurrentTarget()->getBoundingBox().containsPoint(touch->getLocation())) {
            Director::getInstance()->end();
            
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
            exit(0);
#endif
        }
        return true;
    };
    getEventDispatcher()->addEventListenerWithSceneGraphPriority(listener, closeItem);
    
    /////////////////////////////
    // 3. add your codes below...

    // add a label shows "Hello World"
    // create and initialize a label
    
    auto label = Label::createWithTTF("I'm back", "fonts/arial.ttf", 24);
    
    // position the label on the center of the screen
    label->setPosition(visibleSize.width/2, visibleSize.height/2);

    // add the label as a child to this layer
	this->addChild(label);
    
    return true;
}

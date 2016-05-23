#import <UIKit/UIKit.h>

@class RootViewController;

@interface AppController : NSObject <UIApplicationDelegate> {

}

@property(nonatomic, retain) UIWindow* window;
@property(nonatomic, readonly) RootViewController* viewController;

@end


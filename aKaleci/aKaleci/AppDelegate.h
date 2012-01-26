//
//  AppDelegate.h
//  aKaleci
//
//  Created by Fanni Ikhwan on 1/26/12.
//  Copyright Gembiraria 2012. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface AppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
}

@property (nonatomic, retain) UIWindow *window;

@end

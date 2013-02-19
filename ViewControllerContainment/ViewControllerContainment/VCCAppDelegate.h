//
//  VCCAppDelegate.h
//  ViewControllerContainment
//
//  Created by Wojtek Nagrodzki on 19/02/2013.
//  Copyright (c) 2013 Wojtek Nagrodzki. All rights reserved.
//

#import <UIKit/UIKit.h>

@class VCCViewController;

@interface VCCAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) VCCViewController *viewController;

@end

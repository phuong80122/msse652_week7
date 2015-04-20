//
//  ChatClientAppDelegate.h
//  ChatClient
//
//  Created by Phuong Nguyen on 4/19/15.
//  Copyright (c) 2015 phuong. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ChatClientViewController;

@interface ChatClientAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    ChatClientViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet ChatClientViewController *viewController;

@end


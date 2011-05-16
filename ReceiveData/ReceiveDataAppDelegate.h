//
//  ReceiveDataAppDelegate.h
//  ReceiveData
//
//  Created by Amrita Gosh on 16/05/11.
//  Copyright 2011 Chakra Interactive Pvt Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ReceiveDataViewController;

@interface ReceiveDataAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet ReceiveDataViewController *viewController;

@end

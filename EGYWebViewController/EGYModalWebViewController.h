//
//  EGYModalWebViewController.h
//
//  Created by Mokhles Hussien on 29.08.2013.
//  Copyright 2013 iMokhles. All rights reserved.
//
//  https://github.com/iMokhles/EGYWebViewController

#import <UIKit/UIKit.h>


@class EGYWebViewController;

@interface EGYModalWebViewController : UINavigationController

#ifdef __IPHONE_8_0
- (id)initWithAddress:(NSString*)urlString usingWebkit:(BOOL)usingWebkit;
- (id)initWithURL:(NSURL *)URL usingWebkit:(BOOL)usingWebkit;
#endif

- (id)initWithAddress:(NSString*)urlString;
- (id)initWithURL:(NSURL *)URL;

@property (nonatomic, strong) UIColor *barsTintColor;
@property (nonatomic, strong) UIColor *barItemsTintColor;
#ifdef __IPHONE_8_0
@property (nonatomic, assign, readonly) BOOL usingWebkit;
#endif
@end

//
//  MainAppAppDelegate.h
//  MainApp
//
//  Created by George Henrique Villasboas on 2/24/14.
//  Copyright (c) 2014 JustATest. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface MainAppAppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;

@property (assign) IBOutlet NSSegmentedControl *launchAtLoginButton;

-(IBAction)toggleLaunchAtLogin:(id)sender;

@end

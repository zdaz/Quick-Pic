//
//  ZDSignUpViewController.h
//  Quick Pic
//
//  Created by Zach on 1/18/14.
//  Copyright (c) 2014 Zach Dalzell. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZDSignUpViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *emailField;

@property (weak, nonatomic) IBOutlet UITextField *usernameField;

@property (weak, nonatomic) IBOutlet UITextField *passwordField;

- (IBAction)signUp:(id)sender;

@end

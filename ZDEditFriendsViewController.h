//
//  ZDEditFriendsViewController.h
//  Quick Pic
//
//  Created by Zach on 1/18/14.
//  Copyright (c) 2014 Zach Dalzell. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface ZDEditFriendsViewController : UITableViewController

@property (nonatomic,strong) NSArray *allUsers;
@property (nonatomic,strong) PFUser *currentUser;

@end

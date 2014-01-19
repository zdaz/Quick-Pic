//
//  ZDFriendsViewController.h
//  Quick Pic
//
//  Created by Zach on 1/18/14.
//  Copyright (c) 2014 Zach Dalzell. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface ZDFriendsViewController : UITableViewController

@property (nonatomic, strong) PFRelation *friendsRelation;
@property (nonatomic,strong) NSArray *friends;
@end

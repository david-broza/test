//
//  MasterViewController.h
//  test
//
//  Created by David Broza on 12/6/13.
//  Copyright (c) 2013 David Broza. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end

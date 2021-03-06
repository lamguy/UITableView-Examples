//
//  RootViewController.h
//  Twitter
//
//  Created by Hiroaki Komatsu on 12/09/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Twitter/Twitter.h>

@class RefreshHeaderView;

@interface RootViewController : UITableViewController
{
    RefreshHeaderView *headerView;
    BOOL loaded;
    NSArray *statuses;
    NSCache *imageCache;
}

@end

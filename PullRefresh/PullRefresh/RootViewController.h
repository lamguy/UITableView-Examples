//
//  RootViewController.h
//  PullRefresh
//
//  Created by Hiroaki Komatsu on 12/09/30.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RefreshHeaderView;

@interface RootViewController : UITableViewController
{
    RefreshHeaderView *headerView;
}

@end

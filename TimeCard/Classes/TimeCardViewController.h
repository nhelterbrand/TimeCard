//
//  TimeCardViewController.h
//  TimeCard
//
//  Created by BRIAN KNOWLTON on 10/30/14.
//  Copyright (c) 2014 Etherios. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SFRestAPI.h"

@interface TimeCardViewController : UITableViewController <SFRestDelegate> {
    
    NSMutableArray *dataRows;
    IBOutlet UITableView *tableView;
    
}

@property (nonatomic, strong) NSArray *dataRows;

@end
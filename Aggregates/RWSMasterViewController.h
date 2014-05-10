//
//  RWSMasterViewController.h
//  Aggregates
//
//  Created by Samuel Goodwin on 10-05-14.
//  Copyright (c) 2014 Roundwall Software. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface RWSMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end

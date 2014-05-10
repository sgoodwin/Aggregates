//
//  RWSAppDelegate.h
//  Aggregates
//
//  Created by Samuel Goodwin on 10-05-14.
//  Copyright (c) 2014 Roundwall Software. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RWSAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end

//
//  RoutesController.h
//  tripoir
//
//  Created by Sumant Turlapati on 2/11/14.
//  Copyright (c) 2014 southroad. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RouteItemsController;

#import <CoreData/CoreData.h>

@interface RoutesController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) RouteItemsController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end

//
//  DetailViewController.h
//  tripoir
//
//  Created by Sumant Turlapati on 2/11/14.
//  Copyright (c) 2014 southroad. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RouteItemsController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end

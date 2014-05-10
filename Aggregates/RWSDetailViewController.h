//
//  RWSDetailViewController.h
//  Aggregates
//
//  Created by Samuel Goodwin on 10-05-14.
//  Copyright (c) 2014 Roundwall Software. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RWSDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end

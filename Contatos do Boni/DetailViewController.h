//
//  DetailViewController.h
//  Contatos do Boni
//
//  Created by Boni Machado on 25/08/16.
//  Copyright © 2016 Boni Machado. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end


//
//  QZViewController.m
//  QZPopupMenu
//
//  Created by Quentin123456 on 09/08/2019.
//  Copyright (c) 2019 Quentin123456. All rights reserved.
//

#import "QZViewController.h"
#import "QZPopupMenu.h"
#import "QZPlasticPopupMenu.h"

@interface QZViewController ()

@property (strong, nonatomic) QZPopupMenu *popupMenu;
@property (strong, nonatomic) QZPlasticPopupMenu *plasticPopupMenu;

@end

@implementation QZViewController

- (void)viewDidLoad {
    
    [super viewDidLoad];
    
    self.title = @"POPUPMENU";
    
    QZPopupMenuItem *item = [QZPopupMenuItem itemWithTitle:@"Hello" target:self action:@selector(action)];
    QZPopupMenuItem *item2 = [QZPopupMenuItem itemWithTitle:@"Cut" target:self action:@selector(action)];
    QZPopupMenuItem *item3 = [QZPopupMenuItem itemWithTitle:@"Copy" target:self action:@selector(action)];
    QZPopupMenuItem *item4 = [QZPopupMenuItem itemWithTitle:@"Delete" target:self action:@selector(action)];
    QZPopupMenuItem *item5 = [QZPopupMenuItem itemWithImage:[UIImage imageNamed:@"clip"] target:self action:@selector(action)];
    QZPopupMenuItem *item6 = [QZPopupMenuItem itemWithTitle:@"Delete" image:[UIImage imageNamed:@"trash"] target:self action:@selector(action)];
    NSArray *items = @[item, item2, item3, item4, item5, item6];
    
    QZPopupMenu *popupMenu = [[QZPopupMenu alloc] initWithItems:items];
    popupMenu.highlightedColor = [[UIColor colorWithRed:0 green:0.478 blue:1.0 alpha:1.0] colorWithAlphaComponent:0.8];
    self.popupMenu = popupMenu;
    
    QZPlasticPopupMenu *plasticPopupMenu = [[QZPlasticPopupMenu alloc] initWithItems:items];
    plasticPopupMenu.height = 40;
    self.plasticPopupMenu = plasticPopupMenu;
    
}

- (IBAction)popupMenuBtnTap:(UIButton *)sender {
    
    UIButton *button = (UIButton *)sender;
    [self.popupMenu showInView:self.view targetRect:button.frame animated:YES];
    
}

- (IBAction)plasticPopupBtnTap:(UIButton *)sender {
    
    UIButton *button = (UIButton *)sender;
    [self.plasticPopupMenu showInView:self.view targetRect:button.frame animated:YES];
    
}

- (void)action {
    
    NSLog(@"*** action");
    
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end

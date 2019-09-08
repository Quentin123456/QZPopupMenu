//
//  QZPopupMenuItemView.h
//  QZPopupMenu
//
//  Created by 臧乾坤 on 2018/1/4.
//  Copyright © 2018年 QuentinZang. All rights reserved.
//

#import <UIKit/UIKit.h>

@class QZPopupMenu;
@class QZPopupMenuItem;

@interface QZPopupMenuItemView : UIView

@property (weak, nonatomic) QZPopupMenu *popupMenu;

@property (strong, nonatomic, readonly) UIButton *button;
@property (strong, nonatomic) UIImage *image;
@property (strong, nonatomic) UIImage *highlightedImage;

@property (strong, nonatomic) QZPopupMenuItem *item;

+ (instancetype)itemViewWithItem:(QZPopupMenuItem *)item;
- (instancetype)initWithItem:(QZPopupMenuItem *)item;

- (void)performAction;


@end

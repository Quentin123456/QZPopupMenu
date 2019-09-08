//
//  QZPopupMenuOverlayView.m
//  QZPopupMenu
//
//  Created by 臧乾坤 on 2018/1/4.
//  Copyright © 2018年 QuentinZang. All rights reserved.
//

#import "QZPopupMenuOverlayView.h"
#import "QZPopupMenu.h"

@implementation QZPopupMenuOverlayView

- (instancetype)initWithFrame:(CGRect)frame {
    
    self = [super initWithFrame:frame];
    
    if (self) {
        self.backgroundColor = [UIColor clearColor];
    }
    
    return self;
    
}

- (void)touchesEnded:(NSSet *)touches withEvent:(UIEvent *)event {
    
    UITouch *touch = [touches anyObject];
    UIView *view = touch.view;
    
    if (view == self) {
        // Close popup menu
        [self.popupMenu dismissAnimated:YES];
    }
    
}

@end

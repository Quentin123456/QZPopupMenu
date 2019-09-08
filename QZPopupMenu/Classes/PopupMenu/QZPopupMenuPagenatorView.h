//
//  QZPopupMenuPagenatorView.h
//  QZPopupMenu
//
//  Created by 臧乾坤 on 2018/1/4.
//  Copyright © 2018年 QuentinZang. All rights reserved.
//

#import "QZPopupMenuItemView.h"

typedef NS_ENUM(NSUInteger, QZPopupMenuPagenatorDirection) {
    
    QZPopupMenuPagenatorDirectionLeft,
    QZPopupMenuPagenatorDirectionRight
    
};

@interface QZPopupMenuPagenatorView : QZPopupMenuItemView

@property (weak, nonatomic) id target;
@property (assign, nonatomic) SEL action;

+ (CGFloat)pagenatorWidth;

+ (instancetype)leftPagenatorViewWithTarget:(id)target action:(SEL)action;
+ (instancetype)rightPagenatorViewWithTarget:(id)target action:(SEL)action;

- (instancetype)initWithArrowDirection:(QZPopupMenuPagenatorDirection)arrowDirection target:(id)target action:(SEL)action;

// NOTE: When subclassing this class, use these methods to customize the appearance.
- (CGMutablePathRef)arrowPathInRect:(CGRect)rect direction:(QZPopupMenuPagenatorDirection)direction CF_RETURNS_RETAINED;
- (void)drawArrowInRect:(CGRect)rect direction:(QZPopupMenuPagenatorDirection)direction highlighted:(BOOL)highlighted;

@end

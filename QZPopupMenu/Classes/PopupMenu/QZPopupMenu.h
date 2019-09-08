//
//  QZPopupMenu.h
//  QZPopupMenu
//
//  Created by 臧乾坤 on 2018/1/4.
//  Copyright © 2018年 QuentinZang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "QZPopupMenuItem.h"

@class QZPopupMenu;
@class QZPopupMenuItemView;
@class QZPopupMenuPagenatorView;

@protocol QZPopupMenuDelegate <NSObject>

@optional

- (void)popupMenuWillAppear:(QZPopupMenu *)popupMenu;
- (void)popupMenuDidAppear:(QZPopupMenu *)popupMenu;
- (void)popupMenuWillDisappear:(QZPopupMenu *)popupMenu;
- (void)popupMenuDidDisappear:(QZPopupMenu *)popupMenu;

@end

typedef NS_ENUM(NSUInteger, QZPopupMenuArrowDirection) {
    
    QZPopupMenuArrowDirectionDefault,
    QZPopupMenuArrowDirectionUp,
    QZPopupMenuArrowDirectionDown,
    QZPopupMenuArrowDirectionLeft,
    QZPopupMenuArrowDirectionRight
    
};

@interface QZPopupMenu : UIView

@property (weak, nonatomic) id<QZPopupMenuDelegate> delegate;

@property (assign, nonatomic, getter = isVisible, readonly) BOOL visible;
@property (copy, nonatomic) NSArray *items;
@property (assign, nonatomic) CGFloat height;
@property (assign, nonatomic) CGFloat cornerRadius;
@property (assign, nonatomic) CGFloat arrowSize;
@property (assign, nonatomic) QZPopupMenuArrowDirection arrowDirection;
@property (assign, nonatomic) UIEdgeInsets popupMenuInsets;
@property (assign, nonatomic) CGFloat margin;

@property (strong, nonatomic) UIColor *color;
@property (strong, nonatomic) UIColor *highlightedColor;

+ (instancetype)popupMenuWithItems:(NSArray *)items;
- (instancetype)initWithItems:(NSArray *)items;

- (void)showInView:(UIView *)view targetRect:(CGRect)targetRect animated:(BOOL)animated;
- (void)dismissAnimated:(BOOL)animated;
- (void)updateWithTargetRect:(CGRect)targetRect;

// NOTE: When subclassing this class, use these methods to customize the appearance.
+ (Class)itemViewClass;
+ (Class)pagenatorViewClass;

- (CGMutablePathRef)arrowPathInRect:(CGRect)rect direction:(QZPopupMenuArrowDirection)direction CF_RETURNS_RETAINED;
- (CGMutablePathRef)headPathInRect:(CGRect)rect cornerRadius:(CGFloat)cornerRadius CF_RETURNS_RETAINED;
- (CGMutablePathRef)tailPathInRect:(CGRect)rect cornerRadius:(CGFloat)cornerRadius CF_RETURNS_RETAINED;
- (CGMutablePathRef)bodyPathInRect:(CGRect)rect CF_RETURNS_RETAINED;

- (void)drawArrowAtPoint:(CGPoint)point arrowSize:(CGFloat)arrowSize arrowDirection:(QZPopupMenuArrowDirection)arrowDirection highlighted:(BOOL)highlighted;
- (void)drawArrowInRect:(CGRect)rect direction:(QZPopupMenuArrowDirection)direction highlighted:(BOOL)highlighted;
- (void)drawHeadInRect:(CGRect)rect cornerRadius:(CGFloat)cornerRadius highlighted:(BOOL)highlighted;
- (void)drawTailInRect:(CGRect)rect cornerRadius:(CGFloat)cornerRadius highlighted:(BOOL)highlighted;
- (void)drawBodyInRect:(CGRect)rect firstItem:(BOOL)firstItem lastItem:(BOOL)lastItem highlighted:(BOOL)highlighted;

@end

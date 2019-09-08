//
//  QZPlasticPopupMenu.h
//  QZPopupMenu
//
//  Created by 臧乾坤 on 2018/1/4.
//  Copyright © 2018年 QuentinZang. All rights reserved.
//

#import "QZPopupMenu.h"

@interface QZPlasticPopupMenu : QZPopupMenu

// NOTE: When subclassing this class, use these methods to customize the appearance.
- (CGMutablePathRef)upperHeadPathInRect:(CGRect)rect cornerRadius:(CGFloat)cornerRadius CF_RETURNS_RETAINED;
- (CGMutablePathRef)lowerHeadPathInRect:(CGRect)rect cornerRadius:(CGFloat)cornerRadius CF_RETURNS_RETAINED;
- (CGMutablePathRef)upperTailPathInRect:(CGRect)rect cornerRadius:(CGFloat)cornerRadius CF_RETURNS_RETAINED;
- (CGMutablePathRef)lowerTailPathInRect:(CGRect)rect cornerRadius:(CGFloat)cornerRadius CF_RETURNS_RETAINED;

- (void)drawLeftSeparatorInRect:(CGRect)rect highlighted:(BOOL)highlighted;
- (void)drawRightSeparatorInRect:(CGRect)rect highlighted:(BOOL)highlighted;

@end

//
//  QZPopupMenuItem.h
//  QZPopupMenu
//
//  Created by 臧乾坤 on 2018/1/4.
//  Copyright © 2018年 QuentinZang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface QZPopupMenuItem : NSObject

@property (weak, nonatomic, readonly) id target;
@property (assign, nonatomic, readonly) SEL action;

@property (nonatomic, copy, readonly) NSString *title;
@property (nonatomic, copy, readonly) UIImage *image;

+ (instancetype)itemWithTitle:(NSString *)title target:(id)target action:(SEL)action;
+ (instancetype)itemWithImage:(UIImage *)image target:(id)target action:(SEL)action;
+ (instancetype)itemWithTitle:(NSString *)title image:(UIImage *)image target:(id)target action:(SEL)action;

- (instancetype)initWithTitle:(NSString *)title target:(id)target action:(SEL)action;
- (instancetype)initWithImage:(UIImage *)image target:(id)target action:(SEL)action;
- (instancetype)initWithTitle:(NSString *)title image:(UIImage *)image target:(id)target action:(SEL)action;

@end

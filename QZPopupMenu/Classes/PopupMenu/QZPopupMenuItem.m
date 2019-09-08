//
//  QZPopupMenuItem.m
//  QZPopupMenu
//
//  Created by 臧乾坤 on 2018/1/4.
//  Copyright © 2018年 QuentinZang. All rights reserved.
//

#import "QZPopupMenuItem.h"

@interface QZPopupMenuItem ()

@property (weak, nonatomic, readwrite) id target;
@property (assign, nonatomic, readwrite) SEL action;

@property (copy, nonatomic, readwrite) NSString *title;
@property (copy, nonatomic, readwrite) UIImage *image;

@end

@implementation QZPopupMenuItem

+ (instancetype)itemWithTitle:(NSString *)title target:(id)target action:(SEL)action {
    
    return [[self alloc] initWithTitle:title target:target action:action];
    
}

+ (instancetype)itemWithImage:(UIImage *)image target:(id)target action:(SEL)action {
    
    return [[self alloc] initWithImage:image target:target action:action];
    
}

+ (instancetype)itemWithTitle:(NSString *)title image:(UIImage *)image target:(id)target action:(SEL)action {
    
    return [[self alloc] initWithTitle:title image:image target:target action:action];
    
}

- (instancetype)initWithTitle:(NSString *)title target:(id)target action:(SEL)action {
    
    return [self initWithTitle:title image:nil target:target action:action];
    
}

- (instancetype)initWithImage:(UIImage *)image target:(id)target action:(SEL)action {
    
    return [self initWithTitle:nil image:image target:target action:action];
    
}

- (instancetype)initWithTitle:(NSString *)title image:(UIImage *)image target:(id)target action:(SEL)action {
    
    self = [super init];
    
    if (self) {
        self.target = target;
        self.action = action;
        
        self.title = title;
        self.image = image;
    }
    
    return self;
    
}

@end

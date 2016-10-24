//
//  YBLoopView.h
//  YBLoading
//
//  Created by yangbin on 16/10/24.
//  Copyright © 2016年 yangbin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface YBLoopView : UIView

@property (nonatomic, strong) CAMediaTimingFunction *timingFunction;
@property (nonatomic, readonly) BOOL isAnimating;
@property (nonatomic) BOOL hideWhenStop;
@property (nonatomic, strong) UIBezierPath *mTrianglePath;

- (void)setProgressValue:(float)value;
- (void)startLoopAnimating;
- (void)stopLoopAnimating;

@end

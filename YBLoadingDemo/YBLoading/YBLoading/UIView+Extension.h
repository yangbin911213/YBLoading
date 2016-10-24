
#import <UIKit/UIKit.h>
#import "YBLoopView.h"
@class YSLoadingView;

@interface UIView (Extension)

@property (strong, nonatomic) YSLoadingView *loadingView;


- (void)beginLoading;
- (void)endLoading;

@end


//loading加载效果
@interface YSLoadingView : UIView
@property (strong, nonatomic) YBLoopView *loopView;
@property (strong, nonatomic) UILabel *titleLabel;
@property (assign, nonatomic, readonly) BOOL isLoading;
- (void)startAnimating;
- (void)stopAnimating;
@end



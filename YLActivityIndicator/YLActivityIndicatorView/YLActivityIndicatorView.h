//
//  YLActivityIndicatorView.h
//  YLActivityIndicator
//
//  Created by Eric Yuan on 13-1-15.
//  Copyright (c) 2013年 jimu.tv. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface YLActivityIndicatorView : UIView {
    BOOL      _isAnimating;
    NSTimer*  _timer;
    BOOL      _hidesWhenStopped;
    NSInteger _currentStep;
    NSInteger _dotCount;
    CGFloat   _duration;
    NSInteger _style;       // 0 后续方框不显示, 1: 后续方框显示
}

@property (nonatomic, assign)BOOL hidesWhenStopped;
@property (nonatomic, assign)NSInteger dotCount;
@property (nonatomic, assign)CGFloat duration;
@property (nonatomic, assign)NSInteger style;

- (void)startAnimating;
- (void)stopAnimating;
- (BOOL)isAnimating;

- (id)init;

@end

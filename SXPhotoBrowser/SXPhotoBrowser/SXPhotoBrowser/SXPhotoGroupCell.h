//
//  SXPhotoGroupView.h
//  SXPhotoBrowser
//
//  Created by summerxx on 2020/8/14.
//  Copyright © 2020 summerxx. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YYImage.h"
@class SXPhotoGroupItem;
NS_ASSUME_NONNULL_BEGIN

@interface SXPhotoGroupCell : UIScrollView
@property (nonatomic, strong) UIView *imageContainerView;
@property (nonatomic, strong) YYAnimatedImageView *imageView;
@property (nonatomic, assign) NSInteger page;
@property (nonatomic, assign) BOOL showProgress;
@property (nonatomic, assign) CGFloat progress;
@property (nonatomic, strong) CAShapeLayer *progressLayer;
@property (nonatomic, strong, nullable) SXPhotoGroupItem *item;
@property (nonatomic, readonly) BOOL itemDidLoad;

/// 重新设置大小
- (void)resizeSubviewSize;
@end

NS_ASSUME_NONNULL_END

//
//  SXPhotoGroupItem.h
//  SXPhotoBrowser
//
//  Created by summerxx on 2020/8/14.
//  Copyright © 2020 summerxx. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface SXPhotoGroupItem : NSObject<NSCopying>
@property (nonatomic, strong) UIView *thumbView;    ///< 拖动图, 用于动画位置计算
@property (nonatomic, assign) CGSize largeImageSize;///< 大图的 Size
@property (nonatomic, strong) NSURL *largeImageURL; ///< 大图的 URL
@property (nonatomic, readonly) UIImage *thumbImage;
@property (nonatomic, readonly) BOOL thumbClippedToTop;
- (BOOL)shouldClipToTop:(CGSize)imageSize forView:(UIView *)view;
@end

NS_ASSUME_NONNULL_END

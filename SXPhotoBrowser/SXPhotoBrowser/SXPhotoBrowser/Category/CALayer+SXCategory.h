//
//  CALayer+SXCategory.h
//  SXPhotoBrowser
//
//  Created by summerxx on 2020/8/14.
//  Copyright © 2020 summerxx. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface CALayer (SXCategory)
@property (nonatomic) CGFloat left;        ///< = frame.origin.x.
@property (nonatomic) CGFloat top;         ///< = frame.origin.y
@property (nonatomic) CGFloat right;       ///< = frame.origin.x + frame.size.width
@property (nonatomic) CGFloat bottom;      ///< = frame.origin.y + frame.size.height=Shortcut for frame.size.width.
@property (nonatomic) CGFloat height;      ///< = frame.size.height.
@property (nonatomic) CGPoint center;      ///< = center.
@property (nonatomic) CGFloat centerX;     ///< = center.x
@property (nonatomic) CGFloat centerY;     ///< = center.y
@property (nonatomic) CGPoint origin;      ///< = frame.origin.
@property (nonatomic, getter=frameSize, setter=setFrameSize:) CGSize  size; ///< = frame.size.

@property (nonatomic) CGFloat transformRotation;     ///< key path "tranform.rotation"
@property (nonatomic) CGFloat transformRotationX;    ///< key path "tranform.rotation.x"
@property (nonatomic) CGFloat transformRotationY;    ///< key path "tranform.rotation.y"
@property (nonatomic) CGFloat transformRotationZ;    ///< key path "tranform.rotation.z"
@property (nonatomic) CGFloat transformScale;        ///< key path "tranform.scale"
@property (nonatomic) CGFloat transformScaleX;       ///< key path "tranform.scale.x"
@property (nonatomic) CGFloat transformScaleY;       ///< key path "tranform.scale.y"
@property (nonatomic) CGFloat transformScaleZ;       ///< key path "tranform.scale.z"
@property (nonatomic) CGFloat transformTranslationX; ///< key path "tranform.translation.x"
@property (nonatomic) CGFloat transformTranslationY; ///< key path "tranform.translation.y"
@property (nonatomic) CGFloat transformTranslationZ; ///< key path "tranform.translation.z"

- (void)addFadeAnimationWithDuration:(NSTimeInterval)duration curve:(UIViewAnimationCurve)curve;
- (void)removePreviousFadeAnimation;
@end

NS_ASSUME_NONNULL_END

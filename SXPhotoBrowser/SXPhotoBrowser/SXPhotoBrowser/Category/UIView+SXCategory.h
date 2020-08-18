//
//  UIView+Category.h
//  SXPhotoBrowser
//
//  Created by summerxx on 2020/8/14.
//  Copyright © 2020 summerxx. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, SXDotBadgePosition) { ///< 给 View 设置红点
    SXDotBadgePositionTopLeft,
    SXDotBadgePositionTopRight,
    SXDotBadgePositionBottomLeft,
    SXDotBadgePositionBottomRight,
    SXDotBadgePositionCenter,
};

@interface UIView (SXCategory)

@property (nonatomic) CGFloat left;        ///< = frame.origin.x.
@property (nonatomic) CGFloat right;       ///< = frame.origin.x + frame.size.width
@property (nonatomic) CGFloat top;         ///< = frame.origin.y
@property (nonatomic) CGFloat bottom;      ///< = frame.origin.y + frame.size.height
@property (nonatomic) CGFloat width;       ///< = frame.size.width.
@property (nonatomic) CGFloat height;      ///< = frame.size.height.
@property (nonatomic) CGFloat centerX;     ///< = center.x
@property (nonatomic) CGFloat centerY;     ///< = center.y
@property (nonatomic) CGPoint origin;      ///< = frame.origin.
@property (nonatomic) CGSize  size;        ///< = frame.size.

/// 创建完整视图层次结构的快照图像
- (UIImage *)sx_snapshotImage;

/// 在屏幕更新后, 创建完整视图层次结构的快照图像
- (UIImage *)sx_snapshotImageAfterScreenUpdates:(BOOL)afterUpdates;

/// 创建完整视图层次结构的快照PDF
- (NSData *)sx_snapshotPDF;

/// 快速设置 view.layer 的阴影
/// @param color Shadow color
/// @param offset Shadow offset
/// @param radius Shadow radius
- (void)sx_setLayerShadow:(nullable UIColor*)color offset:(CGSize)offset radius:(CGFloat)radius;

/// 删除所有视图
- (void)sx_removeAllSubviews;


/// 将一个点从接收方的坐标系统转换为指定视图或窗口的坐标系统。
/// @param point 在接收方的本地坐标系统(边界)中指定的点。
/// @param view 要转换到其坐标系统点的视图或窗口。
- (CGPoint)sx_convertPoint:(CGPoint)point toViewOrWindow:(nullable UIView *)view;


/// 从给定视图或窗口的坐标系统到接收方坐标系统的一个点。
/// @param point 在视图的局部坐标系统(边界)中指定的点。
/// @param view 在其坐标系统中有点的视图或窗口。
- (CGPoint)sx_convertPoint:(CGPoint)point fromViewOrWindow:(nullable UIView *)view;


/// 将矩形从接收方的坐标系统转换为另一个视图或窗口的坐标系统。
/// @param rect 在接收方的本地坐标系统(边界)中指定的矩形。
/// @param view 转换操作的目标视图或窗口。
- (CGRect)sx_convertRect:(CGRect)rect toViewOrWindow:(nullable UIView *)view;


/// 将矩形从另一个视图或窗口的坐标系统转换为接收方的坐标系统。
/// @param rect 在视图的局部坐标系统(边界)中指定的矩形。
/// @param view 坐标系统中有矩形的视图或窗口。
- (CGRect)sx_convertRect:(CGRect)rect fromViewOrWindow:(nullable UIView *)view;

// ------------------------------------------------- //
// ------------   视图上生成圆形遮罩 ------------------ //
// ------------------------------------------------- //

/// 生成圆形遮罩
- (void)sx_makeCircleMask;

/// 生成特定大小的遮罩
/// @param size 大小
- (void)sx_makeMaskWithSize:(CGSize)size;

/// 生成任意角的遮罩
/// @param size 大小
/// @param corner 四个角bitmask
- (void)sx_makeMaskWithSize:(CGSize)size corner:(UIRectCorner)corner;

// ------------------------------------------------- //
// ------------   给 View 设置红点 ------------------- //
// ------------------------------------------------- //

@property (nonatomic, strong) UIView *dot;

/// 在右上角显示红点
- (void)sx_showDotBadge;

/**
 显示红点

 @param position 位置
 */
- (void)sx_showDotBadgeAtPosition:(SXDotBadgePosition)position;

/**
 显示红点

 @param position 位置
 @param size size
 @param color 颜色
 */
- (void)sx_showDotBadge:(SXDotBadgePosition)position size:(CGSize)size color:(UIColor *)color;

/// 隐藏红点
- (void)sx_hiddenDot;

/// 返回 view 的 vc
@property (nullable, nonatomic, readonly) UIViewController *viewController;
@end

NS_ASSUME_NONNULL_END

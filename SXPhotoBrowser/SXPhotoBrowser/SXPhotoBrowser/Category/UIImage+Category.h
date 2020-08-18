//
//  UIImage+Category.h
//  SXPhotoBrowser
//
//  Created by summerxx on 2020/8/17.
//  Copyright © 2020 summerxx. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (Category)
- (UIImage *)imageByBlurDark;
+ (UIImage *)imageWithColor:(UIColor *)color;
@end

NS_ASSUME_NONNULL_END

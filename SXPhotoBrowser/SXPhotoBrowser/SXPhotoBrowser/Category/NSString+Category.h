//
//  NSString+Category.h
//  SXPhotoBrowser
//
//  Created by summerxx on 2020/8/17.
//  Copyright © 2020 summerxx. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface NSString (Category)
- (CGSize)sizeForFont:(UIFont *)font size:(CGSize)size mode:(NSLineBreakMode)lineBreakMode;
@end

NS_ASSUME_NONNULL_END

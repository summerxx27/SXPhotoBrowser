//
//  UIDevice+SXCategory.h
//  SXPhotoBrowser
//
//  Created by summerxx on 2020/8/17.
//  Copyright © 2020 summerxx. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIDevice (SXCategory)
/// The device's machine model.  e.g. "iPhone6,1" "iPad4,6"
/// @see http://theiphonewiki.com/wiki/Models
@property (nullable, nonatomic, readonly) NSString *machineModel;
@end

NS_ASSUME_NONNULL_END

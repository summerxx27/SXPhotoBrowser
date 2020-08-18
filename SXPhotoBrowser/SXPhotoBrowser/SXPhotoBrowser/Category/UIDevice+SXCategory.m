//
//  UIDevice+SXCategory.m
//  SXPhotoBrowser
//
//  Created by summerxx on 2020/8/17.
//  Copyright © 2020 summerxx. All rights reserved.
//

#import "UIDevice+SXCategory.h"
#include <sys/sysctl.h>

@implementation UIDevice (SXCategory)
- (NSString *)machineModel {
    static dispatch_once_t one;
    static NSString *model;
    dispatch_once(&one, ^{
        size_t size;
        sysctlbyname("hw.machine", NULL, &size, NULL, 0);
        char *machine = malloc(size);
        sysctlbyname("hw.machine", machine, &size, NULL, 0);
        model = [NSString stringWithUTF8String:machine];
        free(machine);
    });
    return model;
}
@end

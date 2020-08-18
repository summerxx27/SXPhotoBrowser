//
//  ViewController.m
//  SXPhotoBrowser
//
//  Created by summerxx on 2020/8/14.
//  Copyright © 2020 summerxx. All rights reserved.
//

#import "ViewController.h"
#import "SXPhotoGroupItem.h"
#import "SXPhotoGroupView.h"
#import "UIButton+YYWebImage.h"
@interface ViewController ()
@property (nonatomic, copy) NSArray <NSString *> *images;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.images = @[@"https://tva1.sinaimg.cn/large/007S8ZIlly1ggyn061g4jj305e05gwfo.jpg", @"https://tva1.sinaimg.cn/large/007S8ZIlly1ggsx5mk0csg30gq0xc1l0.gif"];
    
    UIButton *button = [UIButton buttonWithType:UIButtonTypeCustom];
    button.frame = CGRectMake(0, 100, 200, 200);
    [button yy_setBackgroundImageWithURL:[NSURL URLWithString:self.images.lastObject] forState:UIControlStateNormal placeholder:nil];
    [button addTarget:self action:@selector(tap:) forControlEvents:UIControlEventTouchUpInside];
    button.backgroundColor = [UIColor cyanColor];
    [self.view addSubview:button];
}

- (void)tap:(UIButton *)obj {
    SXPhotoGroupItem *item = [[SXPhotoGroupItem alloc] init];
    item.largeImageURL = [NSURL URLWithString:self.images.lastObject];
    SXPhotoGroupView *v = [[SXPhotoGroupView alloc] initWithGroupItems:@[item, item]];
    [v presentFromImageView:obj toContainer:self.navigationController.view animated:YES completion:nil];
}


@end

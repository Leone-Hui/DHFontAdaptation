//
//  ViewController.m
//  DHFontAdaptation
//
//  Created by 惠大河 on 2018/9/29.
//  Copyright © 2018年 惠大河. All rights reserved.
//

#import "ViewController.h"


@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    _fristLabel.font = [UIFont systemFontOfSize:10];
    _secondLabel.font = [UIFont systemFontOfSize:12];
    _thirdLabel.font = [UIFont systemFontOfSize:14];
    _fourthLabel.font = [UIFont systemFontOfSize:16];
    
    _fristLabel.text = @"这是一个字体适配测试";
    _secondLabel.text = @"这是一个字体适配测试";
    _thirdLabel.text = @"这是一个字体适配测试";
    _fourthLabel.text = @"这是一个字体适配测试";
}


@end

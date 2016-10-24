//
//  ViewController.m
//  YBLoading
//
//  Created by yangbin on 16/10/24.
//  Copyright © 2016年 yangbin. All rights reserved.
//

#import "ViewController.h"
#import "UIView+Extension.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}
- (IBAction)startLoading:(id)sender {
    [self.view beginLoading];
    [self performSelector:@selector(hideloading) withObject:nil afterDelay:5];

}

- (void)hideloading{
    [self.view endLoading];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end

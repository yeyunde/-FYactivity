//
//  SearchViewController.m
//  ActivityList
//
//  Created by admin on 2017/8/1.
//  Copyright © 2017年 Education. All rights reserved.
//

#import "IssueViewController.h"

@interface IssueViewController ()

@end

@implementation IssueViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    [self naviConfig];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
-(void)naviConfig{
    //设置导航条的文字
    self.navigationItem.title = @"发布活动";
    //设置导航条的颜色(风格颜色)
    self.navigationController.navigationBar.barTintColor = [UIColor grayColor];
    //设置导航条标题的颜色
    self.navigationController.navigationBar.titleTextAttributes = @{ NSForegroundColorAttributeName : [UIColor whiteColor]};
    //设置导航条是否隐藏
    self.navigationController.navigationBar.hidden = NO;
    //设置导航条上按钮的风格颜色
    self.navigationController.navigationBar.tintColor = [UIColor purpleColor];
    //设置是否需要毛玻璃效果
    self.navigationController.navigationBar.translucent = YES;
    //为导航条左上角创建一个按钮
    UIBarButtonItem *left = [[UIBarButtonItem alloc]initWithBarButtonSystemItem:UIBarButtonSystemItemStop target:self action:@selector(backAction)];
    self.navigationItem.leftBarButtonItem = left;
}
-(void)backAction{
    //用model方式返回上一页
    [self dismissViewControllerAnimated:YES completion:nil];
    //用push方式返回上一页
    //[self.navigationController popViewControllerAnimated:YES];
}
/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end

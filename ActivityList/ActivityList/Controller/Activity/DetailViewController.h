//
//  DetailViewController.h
//  ActivityList
//
//  Created by admin on 2017/8/1.
//  Copyright © 2017年 Education. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "activityModel.h"
@interface DetailViewController : UIViewController
//创建一个容器去接受别的页面传来的数据
@property (strong,nonatomic)activityModel *activity;
@end

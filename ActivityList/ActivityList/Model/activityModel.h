//
//  activityModel.h
//  ActivityList
//
//  Created by admin on 2017/7/26.
//  Copyright © 2017年 Education. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface activityModel : NSObject
@property (strong,nonatomic) NSString * imgURL;//活动图片URL字符串
@property (strong,nonatomic) NSString * name;  //活动名称
@property (strong,nonatomic) NSString * content;//活动内容
@property (nonatomic) NSInteger like;//活动点赞数量
@property (nonatomic) NSInteger unlike;//活动被踩数
@property (nonatomic) BOOL      isFavo;//活动是否可以被收藏

- (id)initWithDictionary:(NSDictionary *)dict;


@end

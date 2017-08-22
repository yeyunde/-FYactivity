//
//  ActivityModel.h
//  ActivityList
//
//  Created by admin on 2017/7/26.
//  Copyright © 2017年 Edu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ActivityModel : NSObject

@property (strong, nonatomic) NSString *imgUrl; //活动图片的URL字符串
@property (strong, nonatomic) NSString *name1;   //活动名称
@property (strong, nonatomic) NSString *content; //活动内容
@property (nonatomic) NSInteger like;           //活动点赞数
@property (nonatomic) NSInteger unlike;         //活动被踩数
@property (nonatomic) BOOL isFavo;              //活动是否被收藏

- (id)initWithDictionary: (NSDictionary *)dict;

@end

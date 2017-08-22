//
//  AppDelegate.h
//  ActivityList
//
//  Created by admin on 2017/7/24.
//  Copyright © 2017年 Edu. All rights reserved.
///Users/admin1/Desktop/课堂·/ActivityList/ActivityList/Controller/ViewController.h

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end


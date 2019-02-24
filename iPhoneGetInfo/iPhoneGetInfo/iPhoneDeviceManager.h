//
//  iPhoneDeviceManager.h
//  iPhoneGetInfo
//
//  Created by kys-20 on 2019/2/24.
//  Copyright © 2019 Sharkery. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

typedef void(^iPhoneCurrentLocal)(CLPlacemark *localtion,NSString *desc);

@interface iPhoneDeviceManager : NSObject

@property (nonatomic,copy) iPhoneCurrentLocal localBlock;


/**
 构造方法

 @return 返回对象
 */
+ (instancetype)shareManager;


/**
 获取设备型号

 @return 设备型号
 */
- (const NSString *)getCurrentDevicePhoneType;


/**
  获取手机唯一标识符

 @return 唯一表示符
 */
- (const NSString *)getCurrentUUID;


/**
 获取当前手机的系统

 @return 当前系统
 */
- (const NSString *)getCurrentSystemVersion;


/**
 获取当前App版本

 @return 版本号
 */
- (const NSString *)getCurrentAppVersion;


/**
 获取位置

 @param block block中的数据CLPlacemark类中的属性自取
 */
- (void)getCurrentLocal:(iPhoneCurrentLocal)block;



@end

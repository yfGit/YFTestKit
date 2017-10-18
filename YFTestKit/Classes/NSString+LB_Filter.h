//
//  NSString+LB_Filter.h
//  测试
//
//  Created by 许毓方 on 2017/9/19.
//  Copyright © 2017年 许毓方. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (LB_Filter)



/**
 过滤手机号
 */
- (BOOL)LB_filterPhone;

/**
 过滤密码
 */
- (BOOL)LB_filterPassword;

/**
 过滤短信验证码
 */
- (BOOL)LB_filterMesCode;

/**
 过滤短信验证码
 */
- (BOOL)LB_filterGraphCode;
//精确的身份证号码有效性检测
+ (BOOL)accurateVerifyIDCardNumber:(NSString *)value ;
/**
 过滤非空
 */
- (BOOL)LB_filterNotEmpty;

@end

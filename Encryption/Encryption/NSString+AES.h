//
//  NSString+AES.h
//  Encryption
//
//  Created by bfme on 2016/12/6.
//  Copyright © 2016年 BFMe. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (AES)

//加密
- (NSString *)AES256Encrypt:(NSString *)key;
//解密
- (NSString *)AES256Decrypt:(NSString *)key;

@end

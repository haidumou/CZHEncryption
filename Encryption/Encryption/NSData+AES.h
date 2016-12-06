//
//  NSData+AES.h
//  Encryption
//
//  Created by bfme on 2016/12/6.
//  Copyright © 2016年 BFMe. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData (AES)

//加密
- (NSData *)AES256Encrypt:(NSString *)key;
//解密
- (NSData *)AES256Decrypt:(NSString *)key;

@end

//
//  DESEncrypt.h
//  Encryption
//
//  Created by bfme on 2016/12/6.
//  Copyright © 2016年 BFMe. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DESEncrypt : NSObject

+ (NSString *)DESEncrypt:(NSString *)plainText key:(NSString *)key;
+ (NSString *)DESDecrypt:(NSString *)cipherText key:(NSString *)key;

@end

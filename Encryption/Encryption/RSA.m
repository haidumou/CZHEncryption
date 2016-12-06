//
//  RSA.m
//  Encryption
//
//  Created by bfme on 2016/12/5.
//  Copyright © 2016年 BFMe. All rights reserved.
//

#import "RSA.h"
#import "RSAEncryptor.h"

@implementation RSA

+(NSString *)encryptRSA:(NSString *)text
{
    RSAEncryptor *rsa = [[RSAEncryptor alloc] init];
    
    NSString *publicKeyPath = [[NSBundle mainBundle] pathForResource:@"Test" ofType:@"der"];
    [rsa loadPublicKeyFromFile:publicKeyPath];
    NSString *encryptedString = [rsa rsaEncryptString:text];
    return encryptedString;
}

@end

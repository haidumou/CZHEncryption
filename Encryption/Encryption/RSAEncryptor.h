//
//  RSAEncryptor.h
//  Encryption
//
//  Created by bfme on 2016/12/5.
//  Copyright © 2016年 BFMe. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RSAEncryptor : NSObject

#pragma mark - Instance Methods
- (void)loadPublicKeyFromFile:(NSString *)derFilePath;
- (void)loadPublicKeyFromData:(NSData *)derData;

- (void)loadPrivateKeyFromFile:(NSString *)p12FilePath password:(NSString *)p12Password;
- (void)loadPrivateKeyFromData:(NSData *)p12Data password:(NSString *)p12Password;


- (NSString *)rsaEncryptString:(NSString *)string;
- (NSData *)rsaEncryptData:(NSData *)data;

- (NSString *)rsaDecryptString:(NSString *)string;
- (NSData *)rsaDecryptData:(NSData *)data;

- (BOOL)rsaSHA1VerifyData:(NSData *)plainData
            withSignature:(NSData *)signature;

#pragma mark - Class Methods
+ (void)setSharedInstance:(RSAEncryptor *)instance;
+ (RSAEncryptor *)sharedInstance;

@end

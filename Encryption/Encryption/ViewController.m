//
//  ViewController.m
//  Encryption
//
//  Created by bfme on 2016/12/5.
//  Copyright © 2016年 BFMe. All rights reserved.
//

#import "ViewController.h"
#import "NSString+MD5.h"
#import "NSString+AES.h"
#import "DESEncrypt.h"
#import "RSA.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    NSString *text = @"123456";
    
    NSString *md5String = [text stringToMD5];
    NSLog(@"md5加密 = %@", md5String);
    
    NSString *aesString = [text AES256Encrypt:@"123"];
    NSString *aesStringDec = [aesString AES256Decrypt:@"123"];
    NSLog(@"AES加密 = %@", aesString);
    NSLog(@"AES解密 = %@", aesStringDec);
    
    NSString *desString = [DESEncrypt DESEncrypt:text key:@"123"];
    NSString *desStringDec = [DESEncrypt DESDecrypt:desString key:@"123"];
    NSLog(@"DES加密 = %@", desString);
    NSLog(@"DES解密 = %@", desStringDec);
    
//    NSString *rsaString = [RSA encryptRSA:text]; // 没添加.der公匙，故。。。
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end

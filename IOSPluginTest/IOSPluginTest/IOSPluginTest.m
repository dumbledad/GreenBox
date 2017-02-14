//
//  IOSPluginTest.m
//  IOSPluginTest
//
//  Created by Tim Regan on 10/02/2017.
//  Copyright © 2017 Tim Regan. All rights reserved.
//

#import "IOSPluginTest.h"
//#import "IOSPluginTestFramework-Swift.h"
@import IOSPluginTestFramework;

@implementation IOSPluginTest

-(int)squareThisNumber:(int)number {
    return number * number;
}

@end

int square(int x) {
    //return [[[IOSPluginTest alloc] init] squareThisNumber:x];
    //return [[[SwiftHelperClass alloc] init] squareThisNumber:x];
    //return x * x;
    Helpers *helper = [[Helpers alloc] init];
    
    return (int)[helper squareWithNumber: x];
}

void setCubeCallback(int x, CALCULATION_CALLBACK callback) {
    int result = x * x * x;
    if (callback != nil) {
        callback(result);
    }
}

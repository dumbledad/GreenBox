//
//  IOSPluginTest.m
//  IOSPluginTest
//
//  Created by Tim Regan on 10/02/2017.
//  Copyright © 2017 Tim Regan. All rights reserved.
//

#import "IOSPluginTest.h"

int square(int x) {
    return [[[IOSPluginTest alloc] init] squareThisNumber:x];
}

void setCubeCallback(int x, CALCULATION_CALLBACK callback) {
    [[[IOSPluginTest alloc] init] cubeThisNumber:x andCallbackOn:callback];
}


@implementation IOSPluginTest

-(int)squareThisNumber:(int)number {
    return number * number;
}

-(void)cubeThisNumber:(int)number andCallbackOn:(CALCULATION_CALLBACK)callback {
    int result = number * number * number;
    if (callback != nil) {
        callback(result);
    }
}

@end



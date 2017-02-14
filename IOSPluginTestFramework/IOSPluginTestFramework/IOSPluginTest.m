//
//  IOSPluginTest.m
//  IOSPluginTest
//
//  Created by Tim Regan on 10/02/2017.
//  Copyright © 2017 Tim Regan. All rights reserved.
//

#import "IOSPluginTest.h"
#import <IOSPluginTestFramework/IOSPluginTestFramework-Swift.h>

@implementation IOSPluginTest

@end

int square(int x) {
    Helpers *helper = [[Helpers alloc] init];
    return [helper squareWithNumber: x];
}

//
//  IOSPluginTest.h
//  IOSPluginTest
//
//  Created by Tim Regan on 10/02/2017.
//  Copyright © 2017 Tim Regan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface IOSPluginTest : NSObject

-(int)squareThisNumber:(int)number;

@end

#ifdef __cplusplus
extern "C" {
#endif
    
    int square(int x);
    
    typedef void (*CALCULATION_CALLBACK)(int x);
    void setCubeCallback(int x, CALCULATION_CALLBACK callback);
    
#ifdef __cplusplus
}
#endif

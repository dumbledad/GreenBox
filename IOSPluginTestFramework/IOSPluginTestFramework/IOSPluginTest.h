//
//  IOSPluginTest.h
//  IOSPluginTest
//
//  Created by Tim Regan on 10/02/2017.
//  Copyright © 2017 Tim Regan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface IOSPluginTest : NSObject

@end

#ifdef __cplusplus
extern "C" {
#endif
    
    int square(int x);
    
#ifdef __cplusplus
}
#endif

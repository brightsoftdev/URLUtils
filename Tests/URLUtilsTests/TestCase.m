//
//  Test.m
//  URLUtilsTests
//
//  Created by Nick Lockwood on 12/01/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "TestCase.h"
#import <objc/runtime.h>
#import <objc/message.h>


@implementation TestCase

- (void)runTests
{
    unsigned int count;
    Method *methods = class_copyMethodList([self class], &count);
    for (int i = 0; i < count; i++)
    {
        Method method = methods[i];
        SEL selector = method_getName(method);
        NSString *name = NSStringFromSelector(selector);
        if ([name hasPrefix:@"test"])
        {
            //avoid arc warning by using c runtime
            objc_msgSend(self, selector);
        }
    }
    free(methods);

    //success
    NSLog(@"%@ completed successfully.", [self class]);
}

@end

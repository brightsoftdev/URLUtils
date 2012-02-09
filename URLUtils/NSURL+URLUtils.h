//
//  NSURL+URLUtils.h
//  URLUtils
//
//  Version 1.0
//
//  Created by Nick Lockwood on 11/01/2012.
//  Copyright (C) 2012 Charcoal Design
//
//  Distributed under the permissive zlib License
//  Get the latest version from here:
//
//  https://github.com/nicklockwood/URLUtils
//
//  This software is provided 'as-is', without any express or implied
//  warranty.  In no event will the authors be held liable for any damages
//  arising from the use of this software.
//
//  Permission is granted to anyone to use this software for any purpose,
//  including commercial applications, and to alter it and redistribute it
//  freely, subject to the following restrictions:
//
//  1. The origin of this software must not be misrepresented; you must not
//  claim that you wrote the original software. If you use this software
//  in a product, an acknowledgment in the product documentation would be
//  appreciated but is not required.
//
//  2. Altered source versions must be plainly marked as such, and must not be
//  misrepresented as being the original software.
//
//  3. This notice may not be removed or altered from any source distribution.
//

#import <Foundation/Foundation.h>


extern NSString *const URLSchemeComponent;
extern NSString *const URLHostComponent;
extern NSString *const URLPortComponent;
extern NSString *const URLUserComponent;
extern NSString *const URLPasswordComponent;
extern NSString *const URLPathComponent;
extern NSString *const URLParameterStringComponent;
extern NSString *const URLQueryComponent;
extern NSString *const URLFragmentComponent;


@interface NSURL (URLUtils)

+ (NSURL *)URLWithComponents:(NSDictionary *)components;
- (NSDictionary *)components;

- (NSURL *)URLWithScheme:(NSString *)scheme;
- (NSURL *)URLWithHost:(NSString *)host;
- (NSURL *)URLWithPort:(NSString *)port;
- (NSURL *)URLWithUser:(NSString *)user;
- (NSURL *)URLWithPassword:(NSString *)password;
- (NSURL *)URLWithPath:(NSString *)path;
- (NSURL *)URLWithParameterString:(NSString *)parameterString;
- (NSURL *)URLWithQuery:(NSString *)query;
- (NSURL *)URLWithFragment:(NSString *)fragment;

@end

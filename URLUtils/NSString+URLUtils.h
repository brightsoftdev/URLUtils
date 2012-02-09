//
//  NSString+URLUtils.h
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


typedef enum
{
    URLQueryOptionDefault = 0,
	URLQueryOptionKeepLastValue = 1,
	URLQueryOptionKeepFirstValue = 2,
	URLQueryOptionUseArrays = 3,
	URLQueryOptionAlwaysUseArrays = 4,
	URLQueryOptionUseArraySyntax = 8
}
URLQueryOptions;


@interface NSString (URLUtils)

#pragma mark URLEncoding

- (NSString *)URLEncodedString;
- (NSString *)URLDecodedString:(BOOL)decodePlusAsSpace;

#pragma mark URL paths

- (NSString *)stringByAppendingURLPathComponent:(NSString *)str;
- (NSString *)stringByDeletingLastURLPathComponent;
- (NSString *)lastURLPathComponent;

#pragma mark URL query

+ (NSString *)URLQueryWithParameters:(NSDictionary *)parameters;
+ (NSString *)URLQueryWithParameters:(NSDictionary *)parameters options:(URLQueryOptions)options;

- (NSString *)URLQuery;
- (NSString *)stringByDeletingURLQuery;
- (NSString *)stringByAppendingURLQuery:(NSString *)query;
- (NSString *)stringByMergingURLQuery:(NSString *)query;
- (NSString *)stringByMergingURLQuery:(NSString *)query options:(URLQueryOptions)options;
- (NSDictionary *)URLQueryParameters;
- (NSDictionary *)URLQueryParametersWithOptions:(URLQueryOptions)options;

#pragma mark URL fragment ID

- (NSString *)URLFragment;
- (NSString *)stringByDeletingURLFragment;
- (NSString *)stringByAppendingURLFragment:(NSString *)fragment;

#pragma mark URL conversion

- (NSURL *)URLValue;
- (NSURL *)URLValueRelativeToURL:(NSURL *)baseURL;

@end

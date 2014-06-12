//
//  OHHTTPStubs+ConveniencyMethods.h
//  TestedApp
//
//  Created by Ruben Nine on 11/06/14.
//  Copyright (c) 2014 Ruben Nine. All rights reserved.
//

#import "OHHTTPStubs.h"

@interface OHHTTPStubs (ConveniencyMethods)

+ (void)stubHTTPRequestAndResponseWithHost:(NSString *)host
                                      path:(NSString *)path
                                    scheme:(NSString *)scheme
                               fixtureFile:(NSString *)fixtureFile
                                statusCode:(int)statusCode
                                andHeaders:(NSDictionary *)headers;

@end

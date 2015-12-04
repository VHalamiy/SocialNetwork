//
//  VHRequestOperationManager.m
//  SocialNetwork
//
//  Created by Volodymyr Halamiy on 11/13/15.
//  Copyright © 2015 Volodymyr Halamiy. All rights reserved.
//

#import "VHRequestOperationManager.h"

@implementation VHRequestOperationManager

+ (VHRequestOperationManager *)sharedManager {
    
    static VHRequestOperationManager *instanceManager = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instanceManager = [VHRequestOperationManager new];
    });
    return instanceManager;
}

- (void)getFriendsWithOffset:(NSUInteger)offset
                       count:(NSUInteger)count
                   onSuccess:(void (^)(NSArray *))success
                   onFailure:(void (^)(NSError *))failure {
    
    
}


@end

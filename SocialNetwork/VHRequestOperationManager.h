//
//  VHRequestOperationManager.h
//  SocialNetwork
//
//  Created by Volodymyr Halamiy on 11/13/15.
//  Copyright © 2015 Volodymyr Halamiy. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface VHRequestOperationManager : NSObject

+ (VHRequestOperationManager *)sharedManager;
- (void) getFriendsWithOffset:(NSUInteger) offset
                        count:(NSUInteger) count
                    onSuccess:(void (^)(NSArray *friends)) success
                    onFailure:(void (^)(NSError *error)) failure;
    
@end

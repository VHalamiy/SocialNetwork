//
//  ViewController.h
//  SocialNetwork
//
//  Created by Volodymyr Halamiy on 10/29/15.
//  Copyright (c) 2015 Volodymyr Halamiy. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <FBSDKLoginKit/FBSDKLoginKit.h>
#import <FBSDKCoreKit/FBSDKProfilePictureView.h>
#import <FBSDKCoreKit/FBSDKCoreKit.h>

@interface ViewController : UIViewController 

@property (weak, nonatomic) IBOutlet FBSDKLoginButton *customLoginButton;
@property (weak, nonatomic) IBOutlet FBSDKProfilePictureView *profilePicture;

- (IBAction)loginButtonClicked:(id)sender;

@end


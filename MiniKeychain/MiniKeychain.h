//
//  MiniKeychain.h
//  MiniKeychain
//
//  Created by sonson on 2017/05/28.
//  Copyright © 2017年 sonson. All rights reserved.
//

#import <Foundation/Foundation.h>

#if TARGET_OS_IPHONE
    #import <UIKit/UIKit.h>
#elif TARGET_OS_TV
    #import <UIKit/UIKit.h>
#elif TARGET_OS_MAC
    #import <Cocoa/Cocoa.h>
#endif

//! Project version number for MiniKeychain.
FOUNDATION_EXPORT double MiniKeychainVersionNumber;

//! Project version string for MiniKeychain.
FOUNDATION_EXPORT const unsigned char MiniKeychainVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <MiniKeychain/PublicHeader.h>



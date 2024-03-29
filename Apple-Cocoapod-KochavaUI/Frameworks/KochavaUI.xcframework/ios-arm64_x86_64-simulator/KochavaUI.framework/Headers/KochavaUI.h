//
//  KochavaUI.h
//  KochavaUI
//
//  Created by John Bushnell on 9/21/20.
//  Copyright © 2020 - 2023 Kochava, Inc.  All rights reserved.
//



#ifndef KochavaUI_h
#define KochavaUI_h



#pragma mark - DEFINE



#define KOCHAVA_FRAMEWORK



#pragma mark - IMPORT



#pragma mark System
#import <Foundation/Foundation.h>
#if TARGET_OS_TV
#import <JavaScriptCore/JavaScriptCore.h>
#endif

#pragma mark KochavaCore
#import <KochavaCore/KochavaCore.h>



#pragma mark - EXPORT



//! Project version number for KochavaUI.
FOUNDATION_EXPORT double KochavaUIVersionNumber;

//! Project version string for KochavaUI.
FOUNDATION_EXPORT const unsigned char KochavaUIVersionString[];



#endif




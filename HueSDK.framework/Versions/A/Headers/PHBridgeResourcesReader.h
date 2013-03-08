//
//  PHBridgeResourcesReader.h
//  HueSDK v1.0 beta
//
//  Copyright (c) 2012-2013 Philips. All rights reserved.
//

#import <Foundation/Foundation.h>

@class PHBridgeResourcesCache;

/**
	This is used to obtain the PHBridgeResourcesCache object that contains the last read state of the bridge
 */
@interface PHBridgeResourcesReader : NSObject

/**
	Reads the BridgeResourcesCache from cached storage
	@returns the PHBridgeResourcesCache object that contains that last fetched object view of the bridge data.
 */
+ (PHBridgeResourcesCache *)readBridgeResourcesCache;

@end
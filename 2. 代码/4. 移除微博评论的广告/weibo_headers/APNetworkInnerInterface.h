//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APNetworkSwitchConfig-Protocol.h"

@class NSString;

@interface APNetworkInnerInterface : NSObject <APNetworkSwitchConfig>
{
}

+ (_Bool)bifrostInited;
+ (_Bool)isDebugable;
+ (id)getQOSInfo;
+ (id)SyncSocketSendAndRcvHost:(id)arg1 port:(unsigned short)arg2 dataToSend:(id)arg3 timeoutSec:(long long)arg4 errCode:(long long *)arg5;
+ (id)timesnap;
+ (id)locLongitude;
+ (id)locLatitude;
+ (_Bool)netCardIpV6Only;
+ (id)getIpV6OxcStringFromPointSepIpV4:(id)arg1;
+ (id)defaultConfig;
+ (_Bool)isDebugable;
+ (id)getQOSInfo;
+ (id)SyncSocketSendAndRcvHost:(id)arg1 port:(unsigned short)arg2 dataToSend:(id)arg3 timeoutSec:(long long)arg4 errCode:(long long *)arg5;
+ (id)timesnap;
+ (id)locLongitude;
+ (id)locLatitude;
+ (_Bool)netCardIpV6Only;
+ (id)getIpV6OxcStringFromPointSepIpV4:(id)arg1;
+ (id)defaultConfig;
- (void)updateiOSNetworkCore:(id)arg1;
- (id)blackRPCList;
- (id)shortRPCList;
- (int)dnshttpip;
- (_Bool)isDNSOpen;
- (void)updateiOSNetworkCore:(id)arg1;
- (id)blackRPCList;
- (id)shortRPCList;
- (int)dnshttpip;
- (_Bool)isDNSOpen;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


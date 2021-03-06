//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface MICXChatMICOperatorConnect : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *appId; // @dynamic appId;
@property(copy, nonatomic) NSString *appKey; // @dynamic appKey;
@property(copy, nonatomic) NSString *channelName; // @dynamic channelName;
@property(copy, nonatomic) NSString *channelPwd; // @dynamic channelPwd;
@property(nonatomic) _Bool hasAppId; // @dynamic hasAppId;
@property(nonatomic) _Bool hasAppKey; // @dynamic hasAppKey;
@property(nonatomic) _Bool hasChannelName; // @dynamic hasChannelName;
@property(nonatomic) _Bool hasChannelPwd; // @dynamic hasChannelPwd;
@property(nonatomic) _Bool hasRoomId; // @dynamic hasRoomId;
@property(nonatomic) _Bool hasToUserId; // @dynamic hasToUserId;
@property(nonatomic) _Bool hasToUserStreamId; // @dynamic hasToUserStreamId;
@property(nonatomic) _Bool hasUniqueId; // @dynamic hasUniqueId;
@property(nonatomic) _Bool hasUserId; // @dynamic hasUserId;
@property(nonatomic) _Bool hasVersionInfo; // @dynamic hasVersionInfo;
@property(nonatomic) unsigned long long roomId; // @dynamic roomId;
@property(nonatomic) unsigned long long toUserId; // @dynamic toUserId;
@property(copy, nonatomic) NSString *toUserStreamId; // @dynamic toUserStreamId;
@property(nonatomic) unsigned long long uniqueId; // @dynamic uniqueId;
@property(nonatomic) unsigned long long userId; // @dynamic userId;
@property(nonatomic) int versionInfo; // @dynamic versionInfo;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXLiveBaseHttpClient.h"

@interface YXLiveIPHttpClient : YXLiveBaseHttpClient
{
    _Bool baseIPRepeatStarted;
}

+ (id)sharedInstance;
- (id)getTencentSenderIPSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)getKSYPlayIPSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)getKSYSenderIPSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)getPlayIPWithBase:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)wbFansGroupJoinWithfansGroupID:(id)arg1 withCurrentWBUserID:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)wbFansGroupInfoWithhosterID:(id)arg1 withCurrentWBUserID:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)requestPlayBaseIPNeedRepeat:(_Bool)arg1 withTargetBase:(id)arg2;
- (void)requestPlayBaseIPWithTargetBase:(id)arg1;
- (void)requestNGBPlayBaseIPNeedRepeat:(_Bool)arg1 withTargetBase:(id)arg2;
- (void)requestNGBPlayBaseIPWithIPBase:(id)arg1;
- (void)requestPlayBaseIPWithIPBase:(id)arg1;
- (void)getWithRTMP:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;

@end


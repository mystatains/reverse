//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WBNLDataReportModel, YXTimeoutHandler;

@interface WBNLDataReportManager : NSObject
{
    WBNLDataReportModel *_reportModel;
    YXTimeoutHandler *_timeHandler;
}

+ (void)destoryInstance;
+ (id)shareInstance;
@property(retain, nonatomic) YXTimeoutHandler *timeHandler; // @synthesize timeHandler=_timeHandler;
@property(retain, nonatomic) WBNLDataReportModel *reportModel; // @synthesize reportModel=_reportModel;
- (void).cxx_destruct;
- (id)createDataString:(long long)arg1 params:(id)arg2;
- (void)requestDataReport:(long long)arg1 params:(id)arg2;
- (void)start5MinCountDown;
- (void)stop5MinCountDown;
- (void)initJoinRoomData;
- (void)initData;
- (void)reportData:(long long)arg1 params:(id)arg2;
- (void)dealloc;
- (id)init;

@end


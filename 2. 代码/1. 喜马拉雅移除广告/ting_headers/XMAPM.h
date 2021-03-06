//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMAPMDLoggerDelegate-Protocol.h"
#import "XMAPMDataReportDelegate-Protocol.h"
#import "XMAPMNetworkCollectionDelegate-Protocol.h"
#import "XMNetworkThrottleDelegate-Protocol.h"
#import "XMUIBlockDelegate-Protocol.h"

@class NSArray, NSString, XMAPMConfiguration, XMAPMTimer;
@protocol XMAPMDataReportDelegate;

@interface XMAPM : NSObject <XMAPMDataReportDelegate, XMAPMDLoggerDelegate, XMUIBlockDelegate, XMNetworkThrottleDelegate, XMAPMNetworkCollectionDelegate>
{
    XMAPMConfiguration *_configuration;
    id <XMAPMDataReportDelegate> _dataReport;
    XMAPMTimer *_retryTimer;
    XMAPMTimer *_refreshConfigtimer;
    NSString *_homeUIClassName;
    NSArray *_components;
}

+ (void)setPlayError:(id)arg1 errCode:(long long)arg2;
+ (void)setRecentlyListen:(id)arg1;
+ (void)setRecentlySearch:(id)arg1;
+ (void)setFreeFlow:(_Bool)arg1;
+ (void)timestampForStartLaunch;
+ (void)calculateMethodTime:(id)arg1 startTime:(unsigned long long)arg2 duration:(unsigned long long)arg3;
+ (void)timestampForHiddenADView;
+ (void)timestampForLaunchADView;
+ (id)reportException:(id)arg1 forThread:(id)arg2 extra:(id)arg3;
+ (void)downloadDirs:(id)arg1;
+ (void)installCrash;
+ (void)networkDomains:(id)arg1;
+ (void)networkStatus:(long long)arg1;
+ (void)ignoresMEMLeaker:(id)arg1;
+ (void)disableLoadMethod:(_Bool)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)monitor;
@property(retain, nonatomic) NSArray *components; // @synthesize components=_components;
@property(copy, nonatomic) NSString *homeUIClassName; // @synthesize homeUIClassName=_homeUIClassName;
@property(retain, nonatomic) XMAPMTimer *refreshConfigtimer; // @synthesize refreshConfigtimer=_refreshConfigtimer;
@property(retain, nonatomic) XMAPMTimer *retryTimer; // @synthesize retryTimer=_retryTimer;
@property(nonatomic) __weak id <XMAPMDataReportDelegate> dataReport; // @synthesize dataReport=_dataReport;
@property(retain, nonatomic) XMAPMConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)XMAPMLog:(int)arg1 module:(const char *)arg2 file:(const char *)arg3 line:(int)arg4 funcName:(const char *)arg5 message:(id)arg6;
- (_Bool)XMAPMShouldLog:(int)arg1;
- (void)onReportAutoTest:(id)arg1 content:(id)arg2;
- (void)onReportIssue:(id)arg1 issueId:(long long)arg2 content:(id)arg3;
- (void)onReportLLog:(id)arg1 module:(id)arg2 content:(id)arg3;
- (void)onReportXlog:(id)arg1 module:(id)arg2 content:(id)arg3;
- (void)onReportBlockMonitor:(id)arg1 blockType:(unsigned long long)arg2 groupId:(unsigned long long)arg3 blockDiffTime:(float)arg4 stackSymbols:(id)arg5;
- (void)onReportBlockType:(unsigned long long)arg1;
- (void)reciveImBcastMsg:(id)arg1;
- (void)appDidFinishLaunching;
- (void)appDidEnterBackground;
- (void)appWillTerminate;
- (void)onRecordNetworkCollection:(id)arg1 networkStatis:(id)arg2;
- (void)onWillStartNetwork:(id)arg1 networkStatis:(id)arg2;
- (void)onReportNetworkThrottle:(id)arg1 requestinfo:(id)arg2;
- (void)onReportNetworkThrottle:(id)arg1 warningmessage:(id)arg2;
- (void)initialization;
- (void)startup;
- (void)start;
- (void)startupAppTrace;
- (void)startupBlock;
@property(nonatomic) _Bool environment;
@property(copy, nonatomic) NSString *channelId;
@property(copy, nonatomic) NSString *deviceId;
@property(nonatomic) unsigned long long userId;
@property(copy, nonatomic) NSString *appId;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)uploadDataWithRequest:(id)arg1 data:(id)arg2 filename:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)uploadFile:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)uploadTask:(id)arg1 uploadKey:(id)arg2 tokenAPI:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)uploadLocalLogs:(id)arg1;
- (void)upload:(id)arg1 success:(_Bool)arg2;
- (id)obfuscate:(id)arg1 withKey:(id)arg2;
- (void)findSpecifyFile:(id)arg1;
- (void)clearConfig;
- (void)analysisServiceConfig:(id)arg1;
- (void)sampleRateForConfig:(id)arg1 defaultReport:(_Bool)arg2;
- (void)handleConfiguration:(id)arg1;
- (void)loadConfig;
- (void)loadUploadlogConfig;
- (void)fetchNextConfigureInterval:(unsigned long long)arg1;
- (_Bool)isReportForSampleRate:(double)arg1;
- (id)paramsForConfiguration;
- (void)streamer:(id)arg1 didFailToSendMessage:(id)arg2 error:(id)arg3;
- (void)streamer:(id)arg1 didReceiveMessage:(id)arg2;
- (void)streamerDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)streamer:(id)arg1 socketDidConnect:(id)arg2;
- (void)dispatchDebugLoginRsp:(id)arg1;
- (void)retryConnect:(id)arg1;
- (void)startTimer:(double)arg1;
- (void)stopTimer;
- (void)sendMessage:(id)arg1;
- (void)apmRealTimeLog:(id)arg1 content:(id)arg2;
- (void)realTimeLog:(int)arg1 content:(id)arg2;
- (_Bool)isRealTimeLogger;
- (void)disconnect;
- (id)reconnect;
- (void)connect:(id)arg1;
- (void)initStreamerAndParser;
- (void)postStatus:(long long)arg1 message:(id)arg2;
- (long long)connectStatus;
- (id)parser;
- (void)setParser:(id)arg1;
- (id)streamer;
- (void)setStreamer:(id)arg1;
- (id)statusDelegate;
- (void)setStatusDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


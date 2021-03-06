//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, WBMLVideoLiveLogger;

@interface WBMLVideoLiveLoggerManager : NSObject
{
    CDStruct_acac297f _logInfo;
    NSURL *playurl;
    int isReset;
    double liveinfotime;
    NSString *startliveid;
    NSString *endliveid;
    double SPrepareStartTime;
    NSString *_objectid;
    long long _playerType;
    WBMLVideoLiveLogger *_liveLogger;
    CDStruct_1b6d18a9 _videoduration;
}

+ (void)reset;
+ (id)instance;
@property(retain, nonatomic) WBMLVideoLiveLogger *liveLogger; // @synthesize liveLogger=_liveLogger;
@property(nonatomic) long long playerType; // @synthesize playerType=_playerType;
@property(retain, nonatomic) NSString *objectid; // @synthesize objectid=_objectid;
@property(nonatomic) CDStruct_1b6d18a9 videoduration; // @synthesize videoduration=_videoduration;
- (void).cxx_destruct;
- (void)gettraceinfo:(id)arg1;
- (void)getdnsip:(id)arg1;
- (void)restartVideoLog:(id)arg1 withMediaId:(id)arg2;
- (void)setEnterActLiveLog:(double)arg1 withVideoUicode:(id)arg2 withMediaId:(id)arg3;
- (void)getStartLiveId:(id)arg1;
- (void)getEndLiveId:(id)arg1;
- (void)setMediaId:(id)arg1;
- (void)getPlayerErrorType:(unsigned char)arg1;
- (void)getPlayerErrorMsg:(int)arg1;
- (void)getPlayerErrorDomain:(id)arg1;
- (void)getPlayerErrorCode:(int)arg1 errortype:(int)arg2;
- (void)getErrorMsg:(int)arg1 errordomain:(id)arg2;
- (void)getInfoErrorDomain:(int)arg1 errordomain:(id)arg2 info:(int)arg3;
- (void)setVideoUicode:(id)arg1;
- (void)checkReset;
- (void)getuserInfoStartTime:(double)arg1;
- (void)getliveInfoStartTime:(double)arg1;
- (void)getuserInfoTime;
- (void)getliveInfoTime;
- (void)getPrepereStartTime;
- (void)getroomPrepareTime:(double)arg1;
- (void)getRoomTatolStartTime;
- (void)getRoomDestoryTime;
- (void)getPlayerStopTime:(double)arg1;
- (void)getroomInitTime:(double)arg1;
- (void)getroomStartTime:(double)arg1;
- (void)did1stARenderDuration:(double)arg1;
- (void)did1stVRenderDuration:(double)arg1;
- (void)did1stADecodeDuration:(double)arg1;
- (void)did1stVDecodeDuration:(double)arg1;
- (void)did1stAPacketDuration:(double)arg1;
- (void)did1stVPacketDuration:(double)arg1;
- (void)didOpenStreamDuration:(double)arg1;
- (void)didFindStreamDuration:(double)arg1;
- (void)didOpenFormatDuration:(double)arg1;
- (void)didTcpOpenDuration:(double)arg1;
- (void)didHttpOpenDuration:(double)arg1;
- (void)didDnsDuration:(double)arg1;
- (void)didfirstVideoFrameRendered:(double)arg1;
- (void)didPlaybackEnd;
- (void)didfirstVideoFrameRendered;
- (void)userSeekStartTime:(CDStruct_1b6d18a9)arg1 targetTime:(CDStruct_1b6d18a9)arg2;
- (void)userSeekDoneWithTargetTime:(CDStruct_1b6d18a9)arg1;
- (void)userWillStartSeek:(CDStruct_1b6d18a9)arg1;
- (void)isReady;
- (void)playbackLikelyToKeepUp;
- (void)didStallPlayback;
- (void)didPlayFinishWithPlayerLog:(id)arg1 currentPlaytime:(double)arg2;
- (void)didFailWithError:(id)arg1 playerLog:(id)arg2 currentPlaytime:(double)arg3;
- (void)didStartPlayWithLiveinfo:(_Bool)arg1 url:(id)arg2;
- (void)didUpdateCurrentTime:(CDStruct_1b6d18a9)arg1;
- (void)finishPlayerLogWithError:(id)arg1 currentPlaybackTime:(double)arg2;
- (void)beginPlayerLogWithLiveInfo:(_Bool)arg1;
- (void)beginPlayerLog;
- (id)init;

@end


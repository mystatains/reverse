//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMAudioUnitPlayerInterface-Protocol.h"

@class NSString, NSTimer, NSURL, XMAUPacketDataLink, XMAudioDataConvert, XMPlayerDataQueue;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, XMAudioUnitPlayerDeleagete, XMAudioUnitPlayerInputDataSouce;

@interface XMAudioUnitPlayer : NSObject <XMAudioUnitPlayerInterface>
{
    struct AudioBuffer _tempBuffer;
    struct AudioBufferList *list;
    long long _playStatus;
    _Bool _isSeeking;
    long long _convertStatus;
    struct OpaqueAudioConverter *converter;
    unsigned int _renderBufferSize;
    struct AudioStreamBasicDescription _inputFormartASBD;
    struct AudioStreamBasicDescription _ouputFormartASBD;
    int _dequeuePacketsCount;
    int _enqueuePacketsCount;
    CDStruct_20644ef1 *_packetData;
    NSObject<OS_dispatch_semaphore> *pause;
    NSObject<OS_dispatch_queue> *convertQueue;
    struct OpaqueAUGraph *graph;
    struct OpaqueAudioComponentInstance *inputAU;
    struct OpaqueAudioComponentInstance *outputAU;
    struct OpaqueAudioComponentInstance *converterAU;
    struct OpaqueAudioComponentInstance *EQAU;
    struct OpaqueAudioComponentInstance *ipodTimeAU;
    struct OpaqueAudioComponentInstance *varSpeedAU;
    struct OpaqueAudioComponentInstance *newTimePitchAU;
    int converterNode;
    int outputNode;
    int newTimePitchNode;
    _Bool isNewTimePitch;
    double _currentPlayTime;
    unsigned int _playedPacketSize;
    _Bool _canWaitingPause;
    _Bool _isSeek;
    _Bool _isAdjustSpeed;
    struct XMAudioStreamProcess *_audioStreamProcess;
    NSObject<OS_dispatch_queue> *_play_opQueue;
    _Bool _isPlaying;
    _Bool _isUseAGC;
    float _rate;
    struct OpaqueAudioComponentInstance *audioUnit;
    NSURL *_url;
    id <XMAudioUnitPlayerDeleagete> _delegate;
    id <XMAudioUnitPlayerInputDataSouce> _inputDataSouce;
    XMPlayerDataQueue *_playerDataQueue;
    XMAudioDataConvert *_audioDataConvert;
    XMAUPacketDataLink *_packetDataLink;
    NSTimer *_processTimer;
    struct AudioBuffer tempBuffer;
}

+ (id)getVersion;
@property(retain, nonatomic) NSTimer *processTimer; // @synthesize processTimer=_processTimer;
@property(retain, nonatomic) XMAUPacketDataLink *packetDataLink; // @synthesize packetDataLink=_packetDataLink;
@property(retain, nonatomic) XMAudioDataConvert *audioDataConvert; // @synthesize audioDataConvert=_audioDataConvert;
@property(retain, nonatomic) XMPlayerDataQueue *playerDataQueue; // @synthesize playerDataQueue=_playerDataQueue;
@property(nonatomic) id <XMAudioUnitPlayerInputDataSouce> inputDataSouce; // @synthesize inputDataSouce=_inputDataSouce;
@property(nonatomic) id <XMAudioUnitPlayerDeleagete> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) float rate; // @synthesize rate=_rate;
@property(nonatomic) _Bool isUseAGC; // @synthesize isUseAGC=_isUseAGC;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(readonly) struct AudioBuffer tempBuffer; // @synthesize tempBuffer;
@property(readonly) struct OpaqueAudioComponentInstance *audioUnit; // @synthesize audioUnit;
- (void)notifyPlayErrorWithFunCallCode:(long long)arg1 withDescription:(id)arg2;
- (void)notifyPlayErrorWithDomain:(id)arg1 withCode:(long long)arg2 withDescription:(id)arg3;
- (void)notifyPlayEnd;
- (void)notifyPlayDidPause;
- (void)notifyPlayDidPlayingTime;
- (void)notifyPlayDidPlaying;
- (void)notifyCheckAndvanceBufferData;
- (void)notifyWillWaitingBufferData;
- (void)_waitingBufferData;
- (void)_checkMoreDataToBuffer;
- (void)_playReachEnd;
- (void)_playDidPause;
- (double)getIntervalByPacketSize:(unsigned int)arg1;
- (void)caculatePlayPacketSize;
- (void)caculatePlayPacketSize:(unsigned int)arg1;
- (void)_playDidPlaying:(unsigned int)arg1;
- (void)_playDidStartPlaying;
- (void)_playWillStartPlaying;
- (void)_playStartCheck:(_Bool)arg1;
- (_Bool)getInputDataSourceExitStatus;
- (_Bool)getIputDataSourcePlayEndStatus;
- (_Bool)getInputDataSourceFillStatus;
- (int)_fillConverterBufferWithBufferlist:(struct AudioBufferList *)arg1 dataPackets:(unsigned int *)arg2 packetDescription:(struct AudioStreamPacketDescription **)arg3;
- (void)updatePrefereDuration:(double)arg1;
- (_Bool)checkConvertErrorNeedStop:(int)arg1;
- (int)_enqueueDataWithPacketsCount:(unsigned int)arg1 ioData:(struct AudioBufferList *)arg2;
- (void)waitingFillData;
- (void)fillEndAndPlayCheck;
- (void)doAudioDataConvert:(struct OpaqueAudioConverter *)arg1 outDataBufferList:(struct AudioBufferList *)arg2 dataPacketsSize:(unsigned int)arg3;
- (void)doAudioDataConvertThread;
- (void)doEnqueAudioDataConvertPacketsSize:(unsigned int)arg1;
- (void)doAudioDataConvertPacketsSize:(unsigned int)arg1;
- (void)_convertAudioPacketsWithNumberOfBytes:(unsigned int)arg1 numberOfPackets:(unsigned int)arg2 inputData:(const void *)arg3 packetDescriptions:(struct AudioStreamPacketDescription *)arg4;
- (int)getCurrentPlayTime:(double *)arg1;
- (void)handleAudioPackets:(const void *)arg1 numberBytes:(unsigned int)arg2 numberPackets:(unsigned int)arg3 packetDescriptions:(struct AudioStreamPacketDescription *)arg4;
- (_Bool)isReachPlayEnd;
- (void)auGraphStart;
- (void)removePlayTimer;
- (void)timeExpired;
- (void)addPlayTimer;
- (_Bool)setPlayRate:(float)arg1;
- (void)writeDataBuffer:(void *)arg1 withLen:(long long)arg2;
- (void)startWriteData;
- (void)outputPlayAudioBufferListData:(struct AudioBufferList *)arg1;
- (void)outputPlayDataI:(void *)arg1 withFrames:(unsigned short *)arg2;
- (void)outputPlayData:(void *)arg1 withFrames:(unsigned short *)arg2;
- (void)inputPlayData:(const void *)arg1 withFrames:(unsigned short)arg2;
- (void)checkStartPlay;
- (void)processAudio:(struct AudioBufferList *)arg1;
- (void)destroyAudioUnitPlayer;
- (void)pause;
- (void)waitingPause;
- (void)stop;
- (void)seek;
- (void)_internalAudioUnitStart;
- (void)play;
- (void)runUnitPlayDispatch:(CDUnknownBlockType)arg1;
- (void)destroyUnitPlayDispatch;
- (void)createUnitPlayDispatch;
- (void)removeNewNewTimePitchAudioUnit;
- (void)removeConvertNodeToOutput;
- (void)addConvertNodeToOutput;
- (void)addNewTimePitchAudioUnit;
- (void)setupWithASD:(struct AudioStreamBasicDescription)arg1;
- (void)setupAudioPlayer;
- (void)createRemotIO;
- (_Bool)createDefaultConvert:(struct OpaqueAudioComponentInstance *)arg1 withSourceDescription:(struct AudioStreamBasicDescription)arg2 withAuNode:(int)arg3;
- (void)addUnitPropertyLinstened:(struct OpaqueAudioComponentInstance *)arg1;
- (void)createAUGraph;
- (void)destroyAugraph;
- (void)dealloc;
- (id)init;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (void)setWaitingDataPause:(_Bool)arg1;
- (void)setPlayStatus:(long long)arg1;
- (long long)getPlayStatus;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


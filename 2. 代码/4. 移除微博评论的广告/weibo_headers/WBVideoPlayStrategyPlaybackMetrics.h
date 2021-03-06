//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError;

@interface WBVideoPlayStrategyPlaybackMetrics : NSObject
{
    _Bool _LEGACY_playFailed;
    double _createAt;
    long long _totalBufferCount;
    long long _totalBufferDuration;
    long long _firstFrameBufferDuration;
    double _decodeFPSRate;
    long long _validPlayDuration;
    NSDictionary *_LEGACY_extraInfo;
    NSError *_playerError;
    long long _firstResponseStatusCode;
    unsigned long long _totalRedirectCount;
}

@property(nonatomic) unsigned long long totalRedirectCount; // @synthesize totalRedirectCount=_totalRedirectCount;
@property(nonatomic) long long firstResponseStatusCode; // @synthesize firstResponseStatusCode=_firstResponseStatusCode;
@property(retain, nonatomic) NSError *playerError; // @synthesize playerError=_playerError;
@property(retain, nonatomic) NSDictionary *LEGACY_extraInfo; // @synthesize LEGACY_extraInfo=_LEGACY_extraInfo;
@property(nonatomic) _Bool LEGACY_playFailed; // @synthesize LEGACY_playFailed=_LEGACY_playFailed;
@property(nonatomic) long long validPlayDuration; // @synthesize validPlayDuration=_validPlayDuration;
@property(nonatomic) double decodeFPSRate; // @synthesize decodeFPSRate=_decodeFPSRate;
@property(nonatomic) long long firstFrameBufferDuration; // @synthesize firstFrameBufferDuration=_firstFrameBufferDuration;
@property(nonatomic) long long totalBufferDuration; // @synthesize totalBufferDuration=_totalBufferDuration;
@property(nonatomic) long long totalBufferCount; // @synthesize totalBufferCount=_totalBufferCount;
@property(readonly, nonatomic) double createAt; // @synthesize createAt=_createAt;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)init;

@end


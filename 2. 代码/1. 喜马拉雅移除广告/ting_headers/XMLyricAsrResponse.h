//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSString;

@interface XMLyricAsrResponse : XMModel
{
    long long _trackId;
    unsigned long long _subtitleType;
    double _startTime;
    double _endTime;
    NSString *_text;
}

@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) unsigned long long subtitleType; // @synthesize subtitleType=_subtitleType;
@property(nonatomic) long long trackId; // @synthesize trackId=_trackId;
- (void).cxx_destruct;
- (id)lyricModel;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary, NSString;

@interface WBMLQAStatisticCenter : NSObject
{
    NSString *_luicode;
    NSString *_containerid;
    NSDate *_enterRoomDate;
    NSDate *_backToRoomDate;
    NSString *_liveId;
    NSMutableDictionary *_commonParameters;
}

+ (id)defaultCenter;
@property(retain, nonatomic) NSMutableDictionary *commonParameters; // @synthesize commonParameters=_commonParameters;
@property(copy, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;
@property(retain, nonatomic) NSDate *backToRoomDate; // @synthesize backToRoomDate=_backToRoomDate;
@property(retain, nonatomic) NSDate *enterRoomDate; // @synthesize enterRoomDate=_enterRoomDate;
@property(retain, nonatomic) NSString *containerid; // @synthesize containerid=_containerid;
@property(retain, nonatomic) NSString *luicode; // @synthesize luicode=_luicode;
- (void).cxx_destruct;
- (id)commonLogParameters;
- (void)analysisManagerLogForExitWithType:(unsigned long long)arg1;
- (id)timeLengthSoFarFromBeginTime:(id)arg1;
- (void)sendLogWithCode:(id)arg1 andExt:(id)arg2;
- (void)sendUserChoiceLog:(id)arg1;
- (void)logQuestionInfo:(id)arg1;
- (void)logFlowAnalysis:(id)arg1;
- (void)logSDK:(id)arg1;
- (void)analyzeQAOverseasSharePageActionWithType:(id)arg1 andSourceFrom:(long long)arg2;
- (void)analyzeQACornerIcon;
- (void)analyzeQAJoinRoomFailed:(id)arg1;
- (void)analyzeQAContinueInvolve:(id)arg1;
- (void)analyzeQAShare:(id)arg1;
- (void)analyzeQAComment;
- (void)analyzeQAStayRoomTimeLength;
- (void)analyzeQACloseRoom;

@end


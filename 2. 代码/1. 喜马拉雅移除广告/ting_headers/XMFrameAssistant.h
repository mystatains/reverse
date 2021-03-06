//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol XMFrameAsisitantProtocol;

@interface XMFrameAssistant : NSObject
{
    id <XMFrameAsisitantProtocol> _frameObj;
    double *_set;
    NSMutableArray *_frameInfos;
}

@property(retain, nonatomic) NSMutableArray *frameInfos; // @synthesize frameInfos=_frameInfos;
@property(nonatomic) double *set; // @synthesize set=_set;
@property(retain, nonatomic) id <XMFrameAsisitantProtocol> frameObj; // @synthesize frameObj=_frameObj;
- (void).cxx_destruct;
@property(readonly, nonatomic) XMFrameAssistant *center;
@property(readonly, nonatomic) XMFrameAssistant *centerY;
@property(readonly, nonatomic) XMFrameAssistant *centerX;
@property(readonly, nonatomic) XMFrameAssistant *size;
@property(readonly, nonatomic) XMFrameAssistant *height;
@property(readonly, nonatomic) XMFrameAssistant *width;
@property(readonly, nonatomic) XMFrameAssistant *right;
@property(readonly, nonatomic) XMFrameAssistant *left;
@property(readonly, nonatomic) XMFrameAssistant *bottom;
@property(readonly, nonatomic) XMFrameAssistant *top;
- (void)addFrameInfo:(long long)arg1;

@end


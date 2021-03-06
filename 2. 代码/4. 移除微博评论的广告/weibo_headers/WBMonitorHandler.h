//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBAPMMonitorWriterDelegateProtocol-Protocol.h"

@class NSString, WBAPMMonitorViewModel;
@protocol WBAPMMonitorWriterProtocol;

@interface WBMonitorHandler : NSObject <WBAPMMonitorWriterDelegateProtocol>
{
    Class apmMonitorViewModelCls;
    _Bool _isRecordUicode;
    Class _apmMonitorCls;
    WBAPMMonitorViewModel *_viewModel;
    unsigned long long _configType;
    id _delegate;
    NSString *_pageID;
    id <WBAPMMonitorWriterProtocol> _writer;
    CDUnknownBlockType _allowPrediction;
}

+ (id)handlerWithMonitor:(unsigned long long)arg1 allowedSpot:(CDUnknownBlockType)arg2;
+ (id)handlers;
+ (id)_containedHandlerForType:(unsigned long long)arg1;
+ (id)handlerWithType:(unsigned long long)arg1;
@property(copy, nonatomic) CDUnknownBlockType allowPrediction; // @synthesize allowPrediction=_allowPrediction;
@property(retain, nonatomic) id <WBAPMMonitorWriterProtocol> writer; // @synthesize writer=_writer;
@property(retain, nonatomic) NSString *pageID; // @synthesize pageID=_pageID;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isRecordUicode; // @synthesize isRecordUicode=_isRecordUicode;
@property(nonatomic) unsigned long long configType; // @synthesize configType=_configType;
@property(retain, nonatomic) WBAPMMonitorViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) Class apmMonitorCls; // @synthesize apmMonitorCls=_apmMonitorCls;
- (void).cxx_destruct;
- (void)endRecord;
- (void)startRecordWithInfo:(id)arg1;
- (id)recorderFilePath;
- (id)currentUicode;
- (_Bool)isNeedRecordUicode;
- (id)monitor;
- (_Bool)allowAPMMonitorFor:(id)arg1 userInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


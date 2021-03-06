//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBMediaWorkingAreaViewWrapperListener-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString, WBUniversialViewController;
@protocol OS_dispatch_queue;

@interface WBVideoExposureManager : NSObject <WBMediaWorkingAreaViewWrapperListener>
{
    NSMutableDictionary *_newModelsDict;
    NSMutableDictionary *_modelsDict;
    NSMutableDictionary *_modelsInAreaDict;
    double _startTime;
    NSDictionary *_pendingModelsDict;
    _Bool _autoPlayEnumerationInvalid;
    WBUniversialViewController *_viewcontroller;
    NSDictionary *_viewcontrollerParameters;
    NSObject<OS_dispatch_queue> *_calculateQueue;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *calculateQueue; // @synthesize calculateQueue=_calculateQueue;
@property(copy, nonatomic) NSDictionary *viewcontrollerParameters; // @synthesize viewcontrollerParameters=_viewcontrollerParameters;
@property(nonatomic) __weak WBUniversialViewController *viewcontroller; // @synthesize viewcontroller=_viewcontroller;
- (void).cxx_destruct;
- (id)_tryFindModelWithSourceViewInAreaDict:(id)arg1 identifier:(id *)arg2;
- (void)viewWrapperDidExitWorkingArea:(id)arg1;
- (void)viewWrapperWillExitWorkingArea:(id)arg1;
- (void)viewWrapperDidEnterWorkingArea:(id)arg1;
- (void)viewWrapperWillEnterWorkingArea:(id)arg1;
- (void)performTaskAfterSendTureShowLogForSourceView:(id)arg1;
- (id)findStatusView:(id)arg1;
- (void)showEditVideoTipIfNeed:(id)arg1;
- (void)logActionLogForTest:(id)arg1 model:(id)arg2;
- (id)sensorExtDictFromString:(id)arg1;
- (void)sensorAnalysisLog:(id)arg1;
- (void)calculate:(id)arg1 new:(id)arg2 params:(id)arg3;
- (void)_updateExposureModelsWithPlayerLog:(id)arg1;
- (void)playerLogDidTransfer:(id)arg1;
- (void)playerLogDidCommit:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)viewcontrollerStateChanged:(id)arg1;
- (void)_updateModels:(id)arg1;
- (void)exposureStateChangeEnd;
- (id)_identifierForMediaExposureItem:(struct WBMediaExposureInfo *)arg1;
- (void)exposureStateChangeEvent:(struct WBMediaExposureInfo *)arg1 useExtraModel:(_Bool)arg2;
- (void)exposureStateChangeEvent:(struct WBMediaExposureInfo *)arg1;
- (void)exposureStateChangeStart:(id)arg1;
- (void)exposureEnd;
- (void)exposureEvent:(struct WBMediaAutoPlaySourceViewEnumerationEachInfo *)arg1;
- (void)exposureStart:(struct WBMediaAutoPlaySourceViewEnumerationStartInfo *)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


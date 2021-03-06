//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBVideoPluginBaseView.h"

#import "WBVideoPluginResolutionButtonItemResolverEventListener-Protocol.h"

@class NSString, WBVideoPluginResolutionButtonItemResolver, WBVideoVIPQualityUnlockGuideView;

@interface WBVideoQualitySchemeResponderPlugin : WBVideoPluginBaseView <WBVideoPluginResolutionButtonItemResolverEventListener>
{
    _Bool _preventingPlayback;
    _Bool _observingVIPPayment;
    WBVideoPluginResolutionButtonItemResolver *_resolutionButtonItemResolver;
    WBVideoVIPQualityUnlockGuideView *_currentGuideView;
}

+ (unsigned long long)defaultPlaybackStateVisibilityOptions;
+ (unsigned long long)defaultPresentationStateVisibilityOptions;
@property(nonatomic) _Bool observingVIPPayment; // @synthesize observingVIPPayment=_observingVIPPayment;
@property(nonatomic) _Bool preventingPlayback; // @synthesize preventingPlayback=_preventingPlayback;
@property(retain, nonatomic) WBVideoVIPQualityUnlockGuideView *currentGuideView; // @synthesize currentGuideView=_currentGuideView;
@property(retain, nonatomic) WBVideoPluginResolutionButtonItemResolver *resolutionButtonItemResolver; // @synthesize resolutionButtonItemResolver=_resolutionButtonItemResolver;
- (void).cxx_destruct;
- (void)videoPlayerController:(id)arg1 didRequestPlaybackForVideoItem:(id)arg2 reason:(long long)arg3;
- (void)videoPlayerController:(id)arg1 didUpdateTransferState:(_Bool)arg2;
- (void)videoPlayerController:(id)arg1 didExitFullscreenAnimated:(_Bool)arg2;
- (void)videoPlayerController:(id)arg1 willExitFullscreenAnimated:(_Bool)arg2;
- (void)didCancelVIPUnlockWithSource:(long long)arg1;
- (void)unlockVipButtonPressed:(id)arg1;
- (void)closeVipGuideButtonPressed:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForDisplay;
- (void)prepareForHidden;
- (void)dismissVIPUnlockGuide;
- (void)potentialVIPPaymentFinished:(id)arg1;
- (id)analysisParametersForVIPUnlockScene:(long long)arg1;
- (void)showVipUnlockGuideWithScheme:(id)arg1 source:(long long)arg2;
- (_Bool)pluginResolutionButtonItemResolver:(id)arg1 didTriggerButtonActionScheme:(id)arg2 source:(long long)arg3;
- (void)setVideoController:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


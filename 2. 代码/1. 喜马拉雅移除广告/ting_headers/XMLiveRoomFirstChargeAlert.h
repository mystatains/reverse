//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMLivePopBase.h"

#import "XMLiveHybridWebViewProxyDelegate-Protocol.h"

@class NSString, NSURL, UIButton, UIControl, XMLiveHybridViewController;

@interface XMLiveRoomFirstChargeAlert : XMLivePopBase <XMLiveHybridWebViewProxyDelegate>
{
    _Bool _webviewNeedReload;
    NSURL *_chargeWebUrl;
    UIControl *_alphaView;
    XMLiveHybridViewController *_webVC;
    UIButton *_closeBtn;
    struct CGRect _hideToRect;
}

+ (_Bool)checkNeedAutoShowChargeAlert;
+ (id)sharedAlert;
- (void).cxx_destruct;
@property(nonatomic) _Bool webviewNeedReload; // @synthesize webviewNeedReload=_webviewNeedReload;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) XMLiveHybridViewController *webVC; // @synthesize webVC=_webVC;
@property(retain, nonatomic) UIControl *alphaView; // @synthesize alphaView=_alphaView;
@property(retain, nonatomic) NSURL *chargeWebUrl; // @synthesize chargeWebUrl=_chargeWebUrl;
@property(nonatomic) struct CGRect hideToRect; // @synthesize hideToRect=_hideToRect;
- (void)onTriggerHide;
- (void)onTriggerPop;
- (void)hideAlert;
- (void)showWebWithURL:(id)arg1;
- (void)reloadContentURL:(id)arg1;
- (void)liveHybrid_webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)liveHybrid_webViewDidFinishLoad:(id)arg1;
- (_Bool)liveHybrid_webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)onReceiveAppWillEntryForeground;
- (void)createSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


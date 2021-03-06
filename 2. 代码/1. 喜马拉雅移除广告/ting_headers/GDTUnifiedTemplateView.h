//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GDTAdContentViewCheckerDelegate-Protocol.h"
#import "GDTUnifiedTemplateViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class GDTAdViewExposeRuleChecker, GDTAdWebViewClient, GDTAntiSpamClickData, GDTUnifiedTemplateModel, GDTUnifiedTemplateViewLifeCycleStateListener, NSString, UIViewController;
@protocol GDTUnifiedTemplateViewDelegate, GDTWebViewProtocol;

@interface GDTUnifiedTemplateView : UIView <UIGestureRecognizerDelegate, GDTAdContentViewCheckerDelegate, GDTUnifiedTemplateViewDelegate>
{
    _Bool _needAutoResize;
    _Bool _animated;
    _Bool _isReady;
    int _antiSpamType;
    UIViewController *_controller;
    GDTUnifiedTemplateModel *_adModel;
    id <GDTUnifiedTemplateViewDelegate> _delegate;
    UIView<GDTWebViewProtocol> *_webView;
    GDTAdWebViewClient *_webViewClient;
    GDTAntiSpamClickData *_antiSpamClickData;
    GDTUnifiedTemplateViewLifeCycleStateListener *_listener;
    GDTAdViewExposeRuleChecker *_checker;
}

@property(nonatomic) int antiSpamType; // @synthesize antiSpamType=_antiSpamType;
@property(retain, nonatomic) GDTAdViewExposeRuleChecker *checker; // @synthesize checker=_checker;
@property(retain, nonatomic) GDTUnifiedTemplateViewLifeCycleStateListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) GDTAntiSpamClickData *antiSpamClickData; // @synthesize antiSpamClickData=_antiSpamClickData;
@property(retain, nonatomic) GDTAdWebViewClient *webViewClient; // @synthesize webViewClient=_webViewClient;
@property(retain, nonatomic) UIView<GDTWebViewProtocol> *webView; // @synthesize webView=_webView;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
@property(nonatomic) __weak id <GDTUnifiedTemplateViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(retain, nonatomic) GDTUnifiedTemplateModel *adModel; // @synthesize adModel=_adModel;
@property(nonatomic) _Bool needAutoResize; // @synthesize needAutoResize=_needAutoResize;
@property(nonatomic) __weak UIViewController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)doViewAnimationIfNeccessary;
- (void)exposured;
- (void)adContentViewCheckerContentViewDidBecomeActive;
- (void)adContentViewCheckerContentViewDidAppear;
- (void)cleanWebView;
- (void)exposeProcess;
- (void)ready;
- (void)clickWithAntiSpam:(id)arg1;
- (void)render;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleLongPressGesture:(id)arg1;
- (void)initAdWebView;
- (id)initWithFrame:(struct CGRect)arg1 adModel:(id)arg2 antiSpamType:(int)arg3 viewController:(id)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "KKViewController-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"
#import "WKUIDelegate-Protocol.h"

@class KKApplication, KKBodyElement, NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSString, UIColor, UIProgressView, WKProcessPool, WKWebView;

@interface KKWebViewController : UIViewController <KKViewController, WKNavigationDelegate, WKUIDelegate>
{
    NSNumber *_topbar_hidden;
    UIColor *_topbar_backgroundColor;
    UIColor *_topbar_tintColor;
    UIColor *_topbar_barTintColor;
    WKWebView *_webView;
    KKApplication *_application;
    NSDictionary *_action;
    WKProcessPool *_processPool;
    NSArray *_cookies;
    UIProgressView *_progressView;
    NSString *_url;
    KKBodyElement *_bodyElement;
    NSMutableDictionary *_elements;
}

@property(retain, nonatomic) NSMutableDictionary *elements; // @synthesize elements=_elements;
@property(retain, nonatomic) KKBodyElement *bodyElement; // @synthesize bodyElement=_bodyElement;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) NSArray *cookies; // @synthesize cookies=_cookies;
@property(retain, nonatomic) WKProcessPool *processPool; // @synthesize processPool=_processPool;
@property(retain, nonatomic) NSDictionary *action; // @synthesize action=_action;
@property(retain, nonatomic) KKApplication *application; // @synthesize application=_application;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (_Bool)kk_navigationShouldPopViewController;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (_Bool)openURL:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)doAction:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)doCloseAction:(id)arg1;
- (void)removeElement:(id)arg1;
- (id)loadWebViewConfiguration;
- (id)loadWebView;
- (id)contentView;
- (void)didReceiveMemoryWarning;
- (id)willLoadRequestWithURL:(id)arg1;
- (void)viewDidLoad;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKit/WKWebView.h>

@class ZKWebViewProtocol;

@interface ZKWebView : WKWebView
{
    ZKWebViewProtocol *_object;
}

+ (id)ZKViewCreateWithName:(id)arg1 configuration:(id)arg2;
@property(retain, nonatomic) ZKWebViewProtocol *object; // @synthesize object=_object;
- (void).cxx_destruct;
- (void)ZKViewSetContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (void)ZKViewSetPadding:(struct UIEdgeInsets)arg1;
- (void)ZKViewEvaluateJavaScript:(id)arg1;
- (void)ZKViewSetValue:(id)arg1 forKey:(id)arg2;
- (void)ZKViewSetContent:(id)arg1 contentType:(id)arg2 baseURI:(id)arg3;
- (id)ZKViewContentView;
- (void)ZKViewSetViewId:(long long)arg1 isolate:(void *)arg2;

@end


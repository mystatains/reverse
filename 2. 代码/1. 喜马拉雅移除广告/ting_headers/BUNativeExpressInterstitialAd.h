//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BUNativeExpressAdViewDelegate-Protocol.h"

@class BUNativeExpressAdManager, BUNativeExpressAdView, NSDictionary, NSString;
@protocol BUNativeExpresInterstitialAdDelegate;

@interface BUNativeExpressInterstitialAd : NSObject <BUNativeExpressAdViewDelegate>
{
    id <BUNativeExpresInterstitialAdDelegate> _delegate;
    BUNativeExpressAdManager *_nativeExpressAdManager;
    BUNativeExpressAdView *_expressAdView;
    struct CGSize _adSize;
}

@property(nonatomic) struct CGSize adSize; // @synthesize adSize=_adSize;
@property(retain, nonatomic) BUNativeExpressAdView *expressAdView; // @synthesize expressAdView=_expressAdView;
@property(retain, nonatomic) BUNativeExpressAdManager *nativeExpressAdManager; // @synthesize nativeExpressAdManager=_nativeExpressAdManager;
@property(nonatomic) __weak id <BUNativeExpresInterstitialAdDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)nativeExpressAdViewDidClick:(id)arg1;
- (void)nativeExpressAdViewWillShow:(id)arg1;
- (void)nativeExpressAdViewRenderFail:(id)arg1 error:(id)arg2;
- (void)nativeExpressAdViewRenderSuccess:(id)arg1;
- (void)nativeExpressAdFailToLoad:(id)arg1 error:(id)arg2;
- (void)nativeExpressAdSuccessToLoad:(id)arg1 views:(id)arg2;
- (_Bool)showAdFromRootViewController:(id)arg1;
- (void)loadAdData;
@property(readonly, copy, nonatomic) NSDictionary *mediaExt;
@property(readonly, nonatomic, getter=isAdValid) _Bool adValid;
- (id)initWithSlotID:(id)arg1 adSize:(struct CGSize)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


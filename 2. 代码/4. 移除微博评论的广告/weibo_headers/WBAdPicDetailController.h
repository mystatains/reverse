//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"
#import "WBAdPicDetailSubVCEngineDelegate-Protocol.h"

@class CAGradientLayer, NSArray, NSString, UIButton, UICollectionViewFlowLayout, UILabel, UIScrollView, UIView, UIViewController, WBAdControllerZoomInAnimator, WBAdPicDetailCollectionView, WBAdPicDetailSubVCEngine, WBStatus;

@interface WBAdPicDetailController : WBViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UIViewControllerTransitioningDelegate, WBAdPicDetailSubVCEngineDelegate>
{
    NSArray *_elementArray;
    long long _currentIndex;
    WBStatus *_status;
    NSString *_currentElementAdID;
    WBAdPicDetailCollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionViewLayout;
    UILabel *_imagePageIndicator;
    double _naviBarHeight;
    CAGradientLayer *_gradientLayer;
    UIButton *_backButton;
    WBAdControllerZoomInAnimator *_presentAnimator;
    WBAdControllerZoomInAnimator *_dismissAnimator;
    UIScrollView *_bottomContentScrollView;
    UIViewController *_bottomContentController;
    WBAdPicDetailSubVCEngine *_vcEngine;
    long long _originalStatusBarStyle;
    UIView *_bottomView;
}

@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) long long originalStatusBarStyle; // @synthesize originalStatusBarStyle=_originalStatusBarStyle;
@property(retain, nonatomic) WBAdPicDetailSubVCEngine *vcEngine; // @synthesize vcEngine=_vcEngine;
@property(retain, nonatomic) UIViewController *bottomContentController; // @synthesize bottomContentController=_bottomContentController;
@property(retain, nonatomic) UIScrollView *bottomContentScrollView; // @synthesize bottomContentScrollView=_bottomContentScrollView;
@property(retain, nonatomic) WBAdControllerZoomInAnimator *dismissAnimator; // @synthesize dismissAnimator=_dismissAnimator;
@property(retain, nonatomic) WBAdControllerZoomInAnimator *presentAnimator; // @synthesize presentAnimator=_presentAnimator;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(nonatomic) double naviBarHeight; // @synthesize naviBarHeight=_naviBarHeight;
@property(retain, nonatomic) UILabel *imagePageIndicator; // @synthesize imagePageIndicator=_imagePageIndicator;
@property(retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(retain, nonatomic) WBAdPicDetailCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSString *currentElementAdID; // @synthesize currentElementAdID=_currentElementAdID;
@property(retain, nonatomic) WBStatus *status; // @synthesize status=_status;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSArray *elementArray; // @synthesize elementArray=_elementArray;
- (void).cxx_destruct;
- (id)uiCode;
- (void)dealloc;
- (void)vcDismissButtonPress:(id)arg1;
- (void)updateStatusBarWithStyle:(long long)arg1;
- (void)updateImagePageIndicator;
- (void)selectContentVCAndBuildView;
- (void)updateCollectionSelect;
- (void)subVCEngine:(id)arg1 updateNavigationTitle:(id)arg2;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithPicDetailElements:(id)arg1 index:(long long)arg2 status:(id)arg3;
- (void)presentPhotoVCWith:(id)arg1 index:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


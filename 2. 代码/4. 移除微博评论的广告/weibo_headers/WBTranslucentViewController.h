//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBViewController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIColor, UIPanGestureRecognizer, UITapGestureRecognizer, UIView;

@interface WBTranslucentViewController : WBViewController <UIGestureRecognizerDelegate>
{
    UIView *_middleView;
    double _topMargin;
    UITapGestureRecognizer *_tapGR;
    UIPanGestureRecognizer *_panGR;
    double _currentPosition;
    _Bool _forceReload;
    _Bool _enableClickClose;
    UIColor *_translucentColor;
    CDUnknownBlockType _dismissFinished;
    double _dismissThreshold;
    UIView *_headerView;
    UIView *_footerView;
    UIView *_contentView;
}

@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) double dismissThreshold; // @synthesize dismissThreshold=_dismissThreshold;
@property(copy, nonatomic) CDUnknownBlockType dismissFinished; // @synthesize dismissFinished=_dismissFinished;
@property(nonatomic) _Bool enableClickClose; // @synthesize enableClickClose=_enableClickClose;
@property(retain, nonatomic) UIColor *translucentColor; // @synthesize translucentColor=_translucentColor;
- (void).cxx_destruct;
- (void)dealloc;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)panInView;
- (id)scrollView;
- (_Bool)isScrollOnTop;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_update;
- (void)updateSubviewsWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handlePanGR:(id)arg1;
- (void)_handleTapGR;
- (void)_checkSubviewsPosition;
- (void)_setupSubViews;
- (void)updateView:(id)arg1 top:(double)arg2;
- (void)_handlePresent;
- (void)showInVC:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithContentView:(id)arg1 topMargin:(double)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


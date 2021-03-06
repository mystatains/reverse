//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class LOTAnimationView, UIImageView, UILabel;

@interface XMShareGuideView : UIView
{
    _Bool _needToShow;
    _Bool _isShowLiveEntranceBtn;
    CDUnknownBlockType _didClick;
    UIImageView *_chatIV;
    UILabel *_titleLB;
    UIImageView *_bubbleIV;
    LOTAnimationView *_xiaoYa;
}

@property(retain, nonatomic) LOTAnimationView *xiaoYa; // @synthesize xiaoYa=_xiaoYa;
@property(retain, nonatomic) UIImageView *bubbleIV; // @synthesize bubbleIV=_bubbleIV;
@property(retain, nonatomic) UILabel *titleLB; // @synthesize titleLB=_titleLB;
@property(retain, nonatomic) UIImageView *chatIV; // @synthesize chatIV=_chatIV;
@property(nonatomic) _Bool isShowLiveEntranceBtn; // @synthesize isShowLiveEntranceBtn=_isShowLiveEntranceBtn;
@property(nonatomic) _Bool needToShow; // @synthesize needToShow=_needToShow;
@property(copy, nonatomic) CDUnknownBlockType didClick; // @synthesize didClick=_didClick;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutAfterInit;
- (void)updateCurrentAfterTrackDidChangedCounts;
- (id)p_currentDateString;
- (_Bool)p_checkCurrentHasShow;
- (void)hideViewAfterXiaoYa;
- (void)startShareGuideAnimation:(CDUnknownBlockType)arg1;
- (_Bool)canShowShareGuideView;
- (id)init;

@end


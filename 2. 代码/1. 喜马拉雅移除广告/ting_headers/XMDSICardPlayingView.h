//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "XMAVPlayerDelegate-Protocol.h"

@class NSMutableArray, NSString, UIButton, UILabel, XMRadialProgressView, XMScrollLabel;

@interface XMDSICardPlayingView : UIView <XMAVPlayerDelegate>
{
    CDUnknownBlockType _didClickPlayingBtnCallback;
    CDUnknownBlockType _didClickListenBtnCallback;
    UIView *_playingCView;
    UIButton *_playingBtn;
    UILabel *_percentLB;
    XMScrollLabel *_soundTitleLB;
    UIButton *_listenButton;
    XMRadialProgressView *_progressView;
    NSMutableArray *_dataSources;
}

@property(retain, nonatomic) NSMutableArray *dataSources; // @synthesize dataSources=_dataSources;
@property(retain, nonatomic) XMRadialProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIButton *listenButton; // @synthesize listenButton=_listenButton;
@property(retain, nonatomic) XMScrollLabel *soundTitleLB; // @synthesize soundTitleLB=_soundTitleLB;
@property(retain, nonatomic) UILabel *percentLB; // @synthesize percentLB=_percentLB;
@property(retain, nonatomic) UIButton *playingBtn; // @synthesize playingBtn=_playingBtn;
@property(retain, nonatomic) UIView *playingCView; // @synthesize playingCView=_playingCView;
@property(copy, nonatomic) CDUnknownBlockType didClickListenBtnCallback; // @synthesize didClickListenBtnCallback=_didClickListenBtnCallback;
@property(copy, nonatomic) CDUnknownBlockType didClickPlayingBtnCallback; // @synthesize didClickPlayingBtnCallback=_didClickPlayingBtnCallback;
- (void).cxx_destruct;
- (void)player:(id)arg1 infoAvailable:(id)arg2;
- (void)player:(id)arg1 track:(id)arg2 didFailed:(id)arg3;
- (void)player:(id)arg1 didPlaylistEnd:(id)arg2;
- (void)player:(id)arg1 didEnded:(id)arg2;
- (void)player:(id)arg1 bufferring:(id)arg2;
- (void)player:(id)arg1 didStoped:(id)arg2;
- (void)player:(id)arg1 willStoped:(id)arg2;
- (void)player:(id)arg1 didPaused:(id)arg2;
- (void)player:(id)arg1 willPaused:(id)arg2;
- (void)player:(id)arg1 didPlaying:(id)arg2;
- (void)player:(id)arg1 willPlaying:(id)arg2;
- (void)player:(id)arg1 didStart:(id)arg2;
- (void)player:(id)arg1 willStart:(id)arg2;
- (void)player:(id)arg1 notifyPlay:(id)arg2 track:(id)arg3;
- (void)player:(id)arg1 notifyCache:(id)arg2 track:(id)arg3;
- (void)updatePlayingButton:(_Bool)arg1;
- (void)layoutSubviews;
- (_Bool)p_checkCurrentSoundIsDSI;
- (void)p_setSoundTitleText;
- (void)p_updateUIWithCompletedTime:(double)arg1;
- (void)setDataSource:(id)arg1;
- (void)didClickListenBtn:(id)arg1;
- (void)didClickPlayingBtn:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


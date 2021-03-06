//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "XMRecordVolumeSliderDelegate-Protocol.h"

@class CDZButton, NSString, UIButton, UIImageView, UILabel, XMNetSoundItem, XMRecordVolumeSlider;
@protocol XMRecordBGMControlViewDelegate;

@interface XMRecordBGMControlView : UIView <XMRecordVolumeSliderDelegate, UIGestureRecognizerDelegate>
{
    _Bool _pause;
    id <XMRecordBGMControlViewDelegate> _delegate;
    UIImageView *_animationView;
    UILabel *_titleLbl;
    CDZButton *_changeBtn;
    double _timePlayed;
    XMNetSoundItem *_sound;
    UIView *_progressView;
    UIButton *_switchButton;
    XMRecordVolumeSlider *_volumeSlider;
    UIView *_sliderBGView;
    UILabel *_volumeLbl;
}

@property(retain, nonatomic) UILabel *volumeLbl; // @synthesize volumeLbl=_volumeLbl;
@property(retain, nonatomic) UIView *sliderBGView; // @synthesize sliderBGView=_sliderBGView;
@property(retain, nonatomic) XMRecordVolumeSlider *volumeSlider; // @synthesize volumeSlider=_volumeSlider;
@property(retain, nonatomic) UIButton *switchButton; // @synthesize switchButton=_switchButton;
@property(retain, nonatomic) UIView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) XMNetSoundItem *sound; // @synthesize sound=_sound;
@property(nonatomic) double timePlayed; // @synthesize timePlayed=_timePlayed;
@property(retain, nonatomic) CDZButton *changeBtn; // @synthesize changeBtn=_changeBtn;
@property(retain, nonatomic) UILabel *titleLbl; // @synthesize titleLbl=_titleLbl;
@property(retain, nonatomic) UIImageView *animationView; // @synthesize animationView=_animationView;
@property(nonatomic) __weak id <XMRecordBGMControlViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool pause; // @synthesize pause=_pause;
- (void).cxx_destruct;
- (void)resetVolumeValueWithMax;
- (void)resetVolumeValueWithMin;
- (void)updateVolumeValue:(float)arg1;
- (void)changeVolume:(double)arg1;
- (void)XMRecordVolumeSlider:(id)arg1 didChangedValue:(double)arg2;
- (void)onTap:(id)arg1;
- (void)autoPlayBgm;
- (void)changeBGMButtonDidTap:(id)arg1;
- (void)switchBtnDidTap:(id)arg1;
- (void)updateTitleText:(id)arg1;
- (void)updatePlayTime;
- (void)addBGMSound:(id)arg1;
- (void)setupPlayTime:(double)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


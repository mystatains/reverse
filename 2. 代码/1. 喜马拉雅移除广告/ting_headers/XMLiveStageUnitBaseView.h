//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"
#import "SVGAPlayerDelegate-Protocol.h"

@class CAGradientLayer, FLAnimatedImageView, NSArray, NSMutableArray, NSString, SVGAPlayer, UIImageView, UILabel, XMLiveGiftItem, XMLiveGradientView, XMLiveRoomVoicePulseView;
@protocol XMLiveStageUnitViewDelegate;

@interface XMLiveStageUnitBaseView : UIView <CAAnimationDelegate, SVGAPlayerDelegate>
{
    _Bool _showCharmValue;
    _Bool _forceShowBoarder;
    _Bool _inMicEmoticonAnimation;
    _Bool _inWaveAnimation;
    id <XMLiveStageUnitViewDelegate> _delegate;
    id _userInfo;
    long long _stageStatus;
    long long _stageIndex;
    NSArray *_borderColors;
    double _borderWidth;
    CAGradientLayer *_gradientLayer;
    NSMutableArray *_micEmoticonQueue;
    UIImageView *_stageView;
    UIImageView *_micMuteView;
    UILabel *_nicknameLabel;
    SVGAPlayer *_giftAnimationView;
    UIView *_charmBoard;
    XMLiveRoomVoicePulseView *_voicePulseView;
    XMLiveGiftItem *_gift;
    long long _timestamp;
    XMLiveGradientView *_emotionBackView;
    FLAnimatedImageView *_emotionImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FLAnimatedImageView *emotionImageView; // @synthesize emotionImageView=_emotionImageView;
@property(retain, nonatomic) XMLiveGradientView *emotionBackView; // @synthesize emotionBackView=_emotionBackView;
@property(nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) XMLiveGiftItem *gift; // @synthesize gift=_gift;
@property(retain, nonatomic) XMLiveRoomVoicePulseView *voicePulseView; // @synthesize voicePulseView=_voicePulseView;
@property(retain, nonatomic) UIView *charmBoard; // @synthesize charmBoard=_charmBoard;
@property(retain, nonatomic) SVGAPlayer *giftAnimationView; // @synthesize giftAnimationView=_giftAnimationView;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) UIImageView *micMuteView; // @synthesize micMuteView=_micMuteView;
@property(retain, nonatomic) UIImageView *stageView; // @synthesize stageView=_stageView;
@property(retain, nonatomic) NSMutableArray *micEmoticonQueue; // @synthesize micEmoticonQueue=_micEmoticonQueue;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(nonatomic) _Bool inWaveAnimation; // @synthesize inWaveAnimation=_inWaveAnimation;
@property _Bool inMicEmoticonAnimation; // @synthesize inMicEmoticonAnimation=_inMicEmoticonAnimation;
@property(nonatomic) _Bool forceShowBoarder; // @synthesize forceShowBoarder=_forceShowBoarder;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(retain, nonatomic) NSArray *borderColors; // @synthesize borderColors=_borderColors;
@property(nonatomic) _Bool showCharmValue; // @synthesize showCharmValue=_showCharmValue;
@property(nonatomic) long long stageIndex; // @synthesize stageIndex=_stageIndex;
@property(nonatomic) long long stageStatus; // @synthesize stageStatus=_stageStatus;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) __weak id <XMLiveStageUnitViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)micEmoticonAnimationEndImmediately;
- (void)doMicEmoticonAnimation:(id)arg1;
- (void)dequeueMicEmoticon;
- (void)enqueueMicEmoticon:(id)arg1;
- (id)stageLockImage;
- (id)stageActiveImage;
- (void)refreshBorder;
- (void)updateWithUserInfo:(id)arg1 timeStamp:(unsigned long long)arg2;
- (void)reset;
- (void)onLongPress:(id)arg1;
- (void)onClick;
- (void)svgaPlayerDidFinishedAnimation:(id)arg1;
- (void)svgaAnimFailed;
- (void)svgaAnimFinish;
- (void)svgaAnimBegin;
- (void)parseSVGAEntity;
- (void)voiceAnimationEndImmediately;
- (void)endVoiceAnimation;
- (void)startVoiceAnimation;
- (double)voicePulseMaxRadius;
- (void)initCustom;
- (void)initCharmBoard;
- (void)layoutSubviews;
- (void)initBase;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import "LiveUIPlayerDelegate-Protocol.h"

@class LiveUIPlayer, NSString, TBLiveFeedBubbleModel, TBLiveFeedBubbleView, TBLiveFeedCellBottomLikeView, TBLiveLivingStatusView, TBLiveSimpleInfoModel, UILabel;
@protocol TBLiveLivingCardDelegate;

@interface TBLiveLivingCard : UIImageView <LiveUIPlayerDelegate>
{
    _Bool _enablePlayVideo;
    _Bool _videoHasPlayed;
    _Bool _isLiving;
    _Bool _wantToPlay;
    _Bool _bubbleDismissAnimating;
    _Bool _enableBubbleOrange;
    id <TBLiveLivingCardDelegate> _cardDelegate;
    CDUnknownBlockType _handler;
    TBLiveSimpleInfoModel *_detailModel;
    TBLiveLivingStatusView *_livingStatusView;
    TBLiveFeedCellBottomLikeView *_likeView;
    UIImageView *_statusIcon;
    LiveUIPlayer *_videoPlayer;
    UIImageView *_itemNumImageView;
    UILabel *_itemNumLabel;
    UILabel *_itemLabel;
    TBLiveFeedBubbleModel *_bubbleModel;
    TBLiveFeedBubbleView *_bubbleView;
}

@property(nonatomic) _Bool enableBubbleOrange; // @synthesize enableBubbleOrange=_enableBubbleOrange;
@property(nonatomic) _Bool bubbleDismissAnimating; // @synthesize bubbleDismissAnimating=_bubbleDismissAnimating;
@property(retain, nonatomic) TBLiveFeedBubbleView *bubbleView; // @synthesize bubbleView=_bubbleView;
@property(retain, nonatomic) TBLiveFeedBubbleModel *bubbleModel; // @synthesize bubbleModel=_bubbleModel;
@property(retain, nonatomic) UILabel *itemLabel; // @synthesize itemLabel=_itemLabel;
@property(retain, nonatomic) UILabel *itemNumLabel; // @synthesize itemNumLabel=_itemNumLabel;
@property(retain, nonatomic) UIImageView *itemNumImageView; // @synthesize itemNumImageView=_itemNumImageView;
@property(retain, nonatomic) LiveUIPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(retain, nonatomic) UIImageView *statusIcon; // @synthesize statusIcon=_statusIcon;
@property(retain, nonatomic) TBLiveFeedCellBottomLikeView *likeView; // @synthesize likeView=_likeView;
@property(retain, nonatomic) TBLiveLivingStatusView *livingStatusView; // @synthesize livingStatusView=_livingStatusView;
@property(retain, nonatomic) TBLiveSimpleInfoModel *detailModel; // @synthesize detailModel=_detailModel;
@property(nonatomic) _Bool wantToPlay; // @synthesize wantToPlay=_wantToPlay;
@property(nonatomic) _Bool isLiving; // @synthesize isLiving=_isLiving;
@property(nonatomic) _Bool videoHasPlayed; // @synthesize videoHasPlayed=_videoHasPlayed;
@property(nonatomic) _Bool enablePlayVideo; // @synthesize enablePlayVideo=_enablePlayVideo;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) __weak id <TBLiveLivingCardDelegate> cardDelegate; // @synthesize cardDelegate=_cardDelegate;
- (void).cxx_destruct;
- (void)liveUIPlayer:(id)arg1 changeEvent:(unsigned long long)arg2;
- (void)removeBubbleTipsViewWithAnimation:(_Bool)arg1;
- (_Bool)shouldShowBubbleTipsView;
- (void)hideGoodsCaseView;
- (void)showGoodsCaseView;
- (void)updateBubbleModelFromVideoGoodModel:(id)arg1;
- (void)showMaskView;
- (void)showReplayView;
- (void)showLivingView;
- (void)didClickCard;
- (void)addGesture;
- (void)destroyVideoPlayer;
- (void)stopVideo;
- (void)playVideo;
- (_Bool)enablePlayShortVideo;
- (void)cancelRequest;
- (void)requestLiveDetailInfo;
- (void)updateLiveDetailInfo:(id)arg1;
- (void)showStaticView;
- (void)showStaticViewWithUrl:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 liveId:(id)arg2 creatorId:(id)arg3 imageUrl:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


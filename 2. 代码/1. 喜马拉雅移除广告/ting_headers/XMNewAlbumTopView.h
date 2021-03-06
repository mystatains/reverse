//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "XMNewAlbumRecommendForLossUserViewDelegate-Protocol.h"
#import "XMSubscribeAlbumViewDelegate-Protocol.h"

@class NSString, UILabel, XMAlbumItem, XMLossUserRecommendAlbumInfo, XMNewAlbumHeaderView, XMNewAlbumRecommendForLossUserView, XMPersonItem, XMSubscribeAlbumView;

@interface XMNewAlbumTopView : UIView <XMSubscribeAlbumViewDelegate, XMNewAlbumRecommendForLossUserViewDelegate>
{
    _Bool _ShowSubscribeWhenIsOffline;
    XMNewAlbumHeaderView *_albumHeaderView;
    XMNewAlbumRecommendForLossUserView *_lossUserView;
    XMSubscribeAlbumView *_subscribeView;
    UILabel *_salePointView;
    UIView *_feedADOrFreeToPay;
    XMAlbumItem *_albumItem;
    XMPersonItem *_userItem;
    NSString *_salePoint;
    XMLossUserRecommendAlbumInfo *_recommendAlbumInfo;
}

@property(retain, nonatomic) XMLossUserRecommendAlbumInfo *recommendAlbumInfo; // @synthesize recommendAlbumInfo=_recommendAlbumInfo;
@property(retain, nonatomic) NSString *salePoint; // @synthesize salePoint=_salePoint;
@property(retain, nonatomic) XMPersonItem *userItem; // @synthesize userItem=_userItem;
@property(retain, nonatomic) XMAlbumItem *albumItem; // @synthesize albumItem=_albumItem;
@property(nonatomic) _Bool ShowSubscribeWhenIsOffline; // @synthesize ShowSubscribeWhenIsOffline=_ShowSubscribeWhenIsOffline;
@property(nonatomic) __weak UIView *feedADOrFreeToPay; // @synthesize feedADOrFreeToPay=_feedADOrFreeToPay;
@property(retain, nonatomic) UILabel *salePointView; // @synthesize salePointView=_salePointView;
@property(retain, nonatomic) XMSubscribeAlbumView *subscribeView; // @synthesize subscribeView=_subscribeView;
@property(retain, nonatomic) XMNewAlbumRecommendForLossUserView *lossUserView; // @synthesize lossUserView=_lossUserView;
@property(retain, nonatomic) XMNewAlbumHeaderView *albumHeaderView; // @synthesize albumHeaderView=_albumHeaderView;
- (void).cxx_destruct;
- (void)clickLossAlbumCell:(id)arg1 Album:(id)arg2;
- (void)close;
- (void)removeAnimationInSubview;
- (void)updateNewAlbumHeaderViewWithAlbum:(id)arg1 User:(id)arg2 HasGroupInfo:(_Bool)arg3 HasCommunityInfo:(_Bool)arg4 SalePoint:(id)arg5 MusicArtistInfo:(id)arg6 RecommendAlbumInfo:(id)arg7 anchorNotice:(id)arg8 albumRank:(id)arg9 albumBusiness:(id)arg10;
- (void)layoutSubviews;
- (void)showSubscribeView;
- (void)closeSubscribeView;
- (id)initWithAlbumItem:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableDictionary, UIButton, UILabel, UIViewController, XMAlbumItem, XMWebImageView;

@interface XMNowPlayingSelfAlbumView : UIView
{
    XMWebImageView *_coverImageView;
    UILabel *_titleLabel;
    UILabel *_favLabel;
    UIButton *_favBtn;
    UIButton *_bgBtn;
    _Bool _didFav;
    _Bool _needShowCircle;
    _Bool _hasCircle;
    XMAlbumItem *_album;
    UIViewController *_superViewController;
    long long _trackId;
    CDUnknownBlockType _onFavorite;
    CDUnknownBlockType _showAlbum;
    CDUnknownBlockType _showRecAlbum;
    CDUnknownBlockType _showCircle;
    CDUnknownBlockType _willShowCircle;
    UIButton *_circleBtn;
    NSMutableDictionary *_albumFavStatus;
}

+ (id)customButtonImageWithTitle:(id)arg1 andBkgColor:(id)arg2 andTextColor:(id)arg3 andWidth:(double)arg4;
+ (double)viewHieght;
+ (_Bool)subscribedAlbum:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *albumFavStatus; // @synthesize albumFavStatus=_albumFavStatus;
@property(retain, nonatomic) UIButton *circleBtn; // @synthesize circleBtn=_circleBtn;
@property(copy, nonatomic) CDUnknownBlockType willShowCircle; // @synthesize willShowCircle=_willShowCircle;
@property(copy, nonatomic) CDUnknownBlockType showCircle; // @synthesize showCircle=_showCircle;
@property(copy, nonatomic) CDUnknownBlockType showRecAlbum; // @synthesize showRecAlbum=_showRecAlbum;
@property(copy, nonatomic) CDUnknownBlockType showAlbum; // @synthesize showAlbum=_showAlbum;
@property(copy, nonatomic) CDUnknownBlockType onFavorite; // @synthesize onFavorite=_onFavorite;
@property(nonatomic) _Bool hasCircle; // @synthesize hasCircle=_hasCircle;
@property(nonatomic) long long trackId; // @synthesize trackId=_trackId;
@property(nonatomic) __weak UIViewController *superViewController; // @synthesize superViewController=_superViewController;
@property(retain, nonatomic) XMAlbumItem *album; // @synthesize album=_album;
- (void).cxx_destruct;
- (void)setAnchorPoint:(struct CGPoint)arg1 forView:(id)arg2;
- (_Bool)currentAblumDidFav;
- (void)clickAt:(id)arg1;
- (void)showCircle:(id)arg1;
- (void)onFavorite:(id)arg1;
- (void)layoutSubviews;
- (void)customInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImageView, UILabel;

@interface LiveRoomTBTVChangeStreamButton : UIButton
{
    _Bool _isSecondView;
    UIImageView *_bgImageView;
    UIImageView *_leftImageView;
    UILabel *_textLabel;
    CDUnknownBlockType _callback;
}

@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) _Bool isSecondView; // @synthesize isSecondView=_isSecondView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
- (void).cxx_destruct;
- (void)didClickButton:(id)arg1;
- (void)showWithAnimation:(_Bool)arg1;
- (void)refreshWithText:(id)arg1 image:(id)arg2;
- (void)setupSubViews;
- (id)initWithFrame:(struct CGRect)arg1 clickCallback:(CDUnknownBlockType)arg2;

@end


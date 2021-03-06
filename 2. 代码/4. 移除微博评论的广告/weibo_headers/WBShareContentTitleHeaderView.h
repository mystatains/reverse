//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WBShareHeaderViewProtocol-Protocol.h"

@class NSString, UIImageView, UILabel;

@interface WBShareContentTitleHeaderView : UIView <WBShareHeaderViewProtocol>
{
    UILabel *_titleLabel;
    UIImageView *_highLightView;
    long long _style;
}

@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) UIImageView *highLightView; // @synthesize highLightView=_highLightView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (id)hightLightView;
- (struct CGRect)headerViewFrame;
- (void)setHighLightViewAlpha:(double)arg1;
- (void)setUpViewWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RWAlertView.h"

@class NSString, UIButton, UIImageView, UILabel;

@interface RWNotifyCommendAndLikeAlertView : RWAlertView
{
    NSString *_title;
    NSString *_subTitle;
    NSString *_buttonTitle;
    UIImageView *_imageBG;
    UILabel *_textTitle;
    UILabel *_textSubTitle;
    UIButton *_buttonOpen;
}

@property(retain, nonatomic) UIButton *buttonOpen; // @synthesize buttonOpen=_buttonOpen;
@property(retain, nonatomic) UILabel *textSubTitle; // @synthesize textSubTitle=_textSubTitle;
@property(retain, nonatomic) UILabel *textTitle; // @synthesize textTitle=_textTitle;
@property(retain, nonatomic) UIImageView *imageBG; // @synthesize imageBG=_imageBG;
@property(copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)open;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


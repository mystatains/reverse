//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMRecommendBaseCell.h"

@class UIButton, UIImageView, UILabel;
@protocol XMRecommendActiveUsersCardCellDelegate;

@interface XMRecommendActiveUsersCardCell : XMRecommendBaseCell
{
    UIImageView *_headImageView;
    UIImageView *_vLogoIcon;
    UILabel *_nameLabel;
    UILabel *_fansLabel;
    UILabel *_descLabel;
    UIButton *_followBtn;
    UIButton *_delBtn;
    id <XMRecommendActiveUsersCardCellDelegate> _delegate;
}

@property(nonatomic) __weak id <XMRecommendActiveUsersCardCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *delBtn; // @synthesize delBtn=_delBtn;
@property(retain, nonatomic) UIButton *followBtn; // @synthesize followBtn=_followBtn;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *fansLabel; // @synthesize fansLabel=_fansLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *vLogoIcon; // @synthesize vLogoIcon=_vLogoIcon;
@property(retain, nonatomic) UIImageView *headImageView; // @synthesize headImageView=_headImageView;
- (void).cxx_destruct;
- (void)updateWithUserInfo:(id)arg1;
- (void)didSetModel;
- (void)delBtnAction;
- (void)followBtnAction;
- (void)customInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end


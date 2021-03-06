//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSDateFormatter, UIImageView, UILabel, UIView, WBStoryDraftListModel;

@interface WBStoryDraftListCell : UITableViewCell
{
    WBStoryDraftListModel *_draft;
    NSDateFormatter *_formatter;
    UILabel *_descLabel;
    UILabel *_timeLabel;
    UIView *_rightView;
    UIImageView *_thumImgView;
    UIImageView *_playIconView;
}

@property(retain, nonatomic) UIImageView *playIconView; // @synthesize playIconView=_playIconView;
@property(retain, nonatomic) UIImageView *thumImgView; // @synthesize thumImgView=_thumImgView;
@property(retain, nonatomic) UIView *rightView; // @synthesize rightView=_rightView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) NSDateFormatter *formatter; // @synthesize formatter=_formatter;
@property(retain, nonatomic) WBStoryDraftListModel *draft; // @synthesize draft=_draft;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CDZTableViewCell.h"

@class UIImageView, UILabel, XMBBSCommunity;

@interface XMBBSMyCommunityCell : CDZTableViewCell
{
    XMBBSCommunity *_community;
    UILabel *_newLabel;
    UIImageView *_alarmImageView;
}

@property(retain, nonatomic) UIImageView *alarmImageView; // @synthesize alarmImageView=_alarmImageView;
@property(retain, nonatomic) UILabel *newLabel; // @synthesize newLabel=_newLabel;
@property(retain, nonatomic) XMBBSCommunity *community; // @synthesize community=_community;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didInitialize;

@end


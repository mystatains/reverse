//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewCell.h"

@class WBStoryItemSegmentRank, WBStoryRankControl;

@interface WBSTPlayAggreEntranceCell : WBTableViewCell
{
    WBStoryRankControl *_rankControl;
    WBStoryItemSegmentRank *_rank;
}

@property(retain, nonatomic) WBStoryItemSegmentRank *rank; // @synthesize rank=_rank;
@property(retain, nonatomic) WBStoryRankControl *rankControl; // @synthesize rankControl=_rankControl;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateWith:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


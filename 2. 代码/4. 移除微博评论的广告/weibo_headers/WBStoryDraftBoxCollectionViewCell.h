//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel, UIView, WBStoryDraftListModel;

@interface WBStoryDraftBoxCollectionViewCell : UICollectionViewCell
{
    _Bool _isLastCell;
    WBStoryDraftListModel *_draft;
    UIImageView *_imageView;
    UILabel *_durationLabel;
    UIView *_moreTipView;
    UILabel *_moreTipLabel;
    UIImageView *_moreTipImg;
}

@property(retain, nonatomic) UIImageView *moreTipImg; // @synthesize moreTipImg=_moreTipImg;
@property(retain, nonatomic) UILabel *moreTipLabel; // @synthesize moreTipLabel=_moreTipLabel;
@property(retain, nonatomic) UIView *moreTipView; // @synthesize moreTipView=_moreTipView;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool isLastCell; // @synthesize isLastCell=_isLastCell;
@property(retain, nonatomic) WBStoryDraftListModel *draft; // @synthesize draft=_draft;
- (void).cxx_destruct;
- (id)formatTimeString:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


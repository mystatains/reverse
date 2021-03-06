//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, WBVotePictureBar;
@protocol WBVotePictureViewDelegate;

@interface WBVotePictureView : UIView
{
    NSArray *_voteList;
    NSMutableArray *_imageViewList;
    NSMutableArray *_contentLabelList;
    NSMutableArray *_voteButtonList;
    WBVotePictureBar *_bar;
    id <WBVotePictureViewDelegate> _delegate;
}

+ (double)heightConstraintToWidth:(double)arg1;
@property(nonatomic) __weak id <WBVotePictureViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WBVotePictureBar *bar; // @synthesize bar=_bar;
@property(retain, nonatomic) NSMutableArray *voteButtonList; // @synthesize voteButtonList=_voteButtonList;
@property(retain, nonatomic) NSMutableArray *contentLabelList; // @synthesize contentLabelList=_contentLabelList;
@property(retain, nonatomic) NSMutableArray *imageViewList; // @synthesize imageViewList=_imageViewList;
@property(retain, nonatomic) NSArray *voteList; // @synthesize voteList=_voteList;
- (void).cxx_destruct;
- (void)barViewClicked:(id)arg1;
- (void)voteButtonClicked:(id)arg1;
- (void)imageViewClicked:(id)arg1;
- (void)setVoteList:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


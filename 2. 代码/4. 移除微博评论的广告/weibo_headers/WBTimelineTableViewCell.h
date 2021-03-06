//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewCell.h"

#import "WBMMAAutoMonitorDataProvider-Protocol.h"
#import "WBMediaAutoPlaySourceViewProvider-Protocol.h"
#import "WBTimelineContentViewDelegate-Protocol.h"

@class LOTAnimationView, NSArray, NSString, WBTimelineContentView, WBTimelineItem;
@protocol WBFeedItemViewModelInterface, WBMediaAutoPlayProviderDataModel, WBTimelineTableViewCellDelegate;

@interface WBTimelineTableViewCell : WBTableViewCell <WBMMAAutoMonitorDataProvider, WBMediaAutoPlaySourceViewProvider, WBTimelineContentViewDelegate>
{
    Class timelineModelClass;
    WBTimelineItem *timelineItem;
    WBTimelineContentView *timelineContentView;
    _Bool _hidesSeparatorLine;
    id <WBTimelineTableViewCellDelegate> delegate;
    double timelineContainerWidth;
    id <WBFeedItemViewModelInterface> _viewModel;
    LOTAnimationView *_lottieAnimationView;
}

+ (double)rowHeightOfDataObject:(id)arg1 tableView:(id)arg2;
+ (id)contextOfDataObject:(id)arg1 tableView:(id)arg2;
@property(retain, nonatomic) LOTAnimationView *lottieAnimationView; // @synthesize lottieAnimationView=_lottieAnimationView;
@property(nonatomic) _Bool hidesSeparatorLine; // @synthesize hidesSeparatorLine=_hidesSeparatorLine;
@property(retain, nonatomic) id <WBFeedItemViewModelInterface> viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) double timelineContainerWidth; // @synthesize timelineContainerWidth;
@property(nonatomic) __weak id <WBTimelineTableViewCellDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) WBTimelineItem *timelineItem; // @synthesize timelineItem;
@property(readonly, nonatomic) WBTimelineContentView *timelineContentView; // @synthesize timelineContentView;
- (void).cxx_destruct;
- (void)rootViewDidDisappear;
- (void)cellWillDisplay;
- (void)resumeCellDisplayCache;
- (void)clearCellDisplayCache;
- (void)didEndDisplayingCell;
- (void)prepareForReuse;
- (void)didPressVideoCard:(id)arg1;
- (void)didPressStoryCard:(id)arg1;
- (void)didPressLargeCard:(id)arg1;
- (void)didPressTopicName:(id)arg1 inView:(id)arg2;
- (void)didPressUrlLink:(id)arg1 inView:(id)arg2;
- (void)didPressUserName:(id)arg1 inView:(id)arg2;
- (void)didPressUserScreenNameLabel:(id)arg1 inView:(id)arg2;
- (void)didPressAvatarOfUser:(id)arg1 inView:(id)arg2;
- (void)willJumpToDetailStatusView;
- (void)didPressFollowButtonInView:(id)arg1;
- (void)didPressArrowButton:(id)arg1 status:(id)arg2;
- (_Bool)didPressResponder:(id)arg1 ofType:(unsigned long long)arg2 andCommonID:(id)arg3 inView:(id)arg4 userInfo:(id)arg5;
- (id)extraButtonActionTypesInView:(id)arg1;
- (_Bool)checkIsAllowShowAndIsAdaptLocation:(_Bool)arg1;
- (void)moveLottieViewToCellIsResume:(id)arg1;
- (void)moveLottieViewToWindow;
- (void)beginLottieAnimationIsResume:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelectionColor:(_Bool)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)removeDelegate;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 userInfo:(id)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)mma_adMonitorModel;
- (id)mma_displayAdView;
@property(readonly, nonatomic) id <WBMediaAutoPlayProviderDataModel> mediaAutoPlayDataModel;
@property(readonly, nonatomic) NSArray *mediaAutoPlaySourceViews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *mediaAutoPlayContainedSourceViewProviders;
@property(readonly) Class superclass;

@end


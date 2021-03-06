//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableArray, NSString;
@protocol YXLiveRoomSpendPanelScrollContainerDelegate;

@interface YXLiveRoomSpendPanelScrollContainer : UIScrollView <UIScrollViewDelegate>
{
    struct CGPoint _beforeOffset;
    _Bool _isScolledByUser;
    unsigned long long _totalPage;
    id <YXLiveRoomSpendPanelScrollContainerDelegate> _scrollDelegate;
    NSMutableArray *_views;
    NSMutableArray *_scrollViews;
}

@property(retain, nonatomic) NSMutableArray *scrollViews; // @synthesize scrollViews=_scrollViews;
@property(retain, nonatomic) NSMutableArray *views; // @synthesize views=_views;
@property(nonatomic) __weak id <YXLiveRoomSpendPanelScrollContainerDelegate> scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
- (void).cxx_destruct;
- (id)_findSubScrollViewOfView:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)_caculateAfterCotentOffsetEnded;
- (id)_caculateIndexsAfterScrollEnded;
- (void)_changeContentOffsetAfterScrollEndedAtIndex:(unsigned long long)arg1;
- (void)_changeIndexContentOffsetAfterScrollEnded:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)_handleWithContentOffsetEnded;
- (void)_handleWithScrollEnded:(_Bool)arg1;
- (void)_initGloableProperty;
- (void)_initProperty;
- (void)setupInternalScrollViews;
- (void)resetSubViews;
- (void)removeSubViewAtIndex:(unsigned long long)arg1;
- (void)changingFullScreenStatus:(_Bool)arg1;
- (void)scrollContainerViewToIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)addSubView:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


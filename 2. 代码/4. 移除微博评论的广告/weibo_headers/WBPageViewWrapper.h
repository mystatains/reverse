//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBBaseSegmentListViewWrapper.h"

@interface WBPageViewWrapper : WBBaseSegmentListViewWrapper
{
}

- (_Bool)needRefreshCurrentVC;
- (_Bool)allowForwardScrollEventToOriginVC:(SEL)arg1;
- (void)dealloc;
- (void)swipeViewCurrentItemIndexDidChange:(id)arg1;
- (void)updateChildViewControllersWithChannelModels:(id)arg1 userInfo:(id)arg2;
- (Class)viewControllerClass;
- (Class)segmentBarClass;
- (void)configSegmentViewController:(id)arg1 atIndex:(long long)arg2;
- (void)initialize;

@end


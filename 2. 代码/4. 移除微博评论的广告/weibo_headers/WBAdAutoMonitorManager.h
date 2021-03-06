//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMA_MonitorHandlerDelegate-Protocol.h"

@class NSMutableSet, NSPointerArray, NSString, UIView, UIViewController;
@protocol WBMMAAutoMonitorContainer;

@interface WBAdAutoMonitorManager : NSObject <MMA_MonitorHandlerDelegate>
{
    struct {
        _Bool canMonitorWhenScroll;
        struct CGPoint targetContentOffset;
        double monitorAreaTopWhenDecelerate;
        double monitorAreaBottomWhenDecelerate;
        _Bool scrolling;
    } _scrollMonitorFlags;
    float _endDragMonitorAreaMultipleByScrollViewHeight;
    NSMutableSet *_monitorArray;
    NSMutableSet *_cellsOfBeginScroll;
    struct UIViewController *_containerController;
    UIView *_tempMonitorView;
    NSMutableSet *_wbLoggerArray;
    NSPointerArray *_vcStack;
}

+ (void)viewabilityStopMonitorByView:(id)arg1;
+ (void)viewabilityMonitorByView:(id)arg1 promotionDic:(id)arg2;
+ (void)viewabilityMonitorByView:(id)arg1 promotion:(id)arg2;
+ (id)sharedInstance;
@property(retain, nonatomic) NSPointerArray *vcStack; // @synthesize vcStack=_vcStack;
@property(retain, nonatomic) NSMutableSet *wbLoggerArray; // @synthesize wbLoggerArray=_wbLoggerArray;
@property(retain, nonatomic) UIView *tempMonitorView; // @synthesize tempMonitorView=_tempMonitorView;
@property(nonatomic) __weak UIViewController<WBMMAAutoMonitorContainer> *containerController; // @synthesize containerController=_containerController;
@property(retain, nonatomic) NSMutableSet *cellsOfBeginScroll; // @synthesize cellsOfBeginScroll=_cellsOfBeginScroll;
@property(retain, nonatomic) NSMutableSet *monitorArray; // @synthesize monitorArray=_monitorArray;
@property(nonatomic) float endDragMonitorAreaMultipleByScrollViewHeight; // @synthesize endDragMonitorAreaMultipleByScrollViewHeight=_endDragMonitorAreaMultipleByScrollViewHeight;
- (void).cxx_destruct;
- (id)getAutoMonitorObjectByMonitorMedium:(id)arg1;
- (id)getAutoMonitorObjectByPromotionAdress:(id)arg1;
- (id)getAutoMonitorObjectByView:(id)arg1;
- (void)updateMonitorAreaWithTargetOffset:(struct CGPoint)arg1;
- (void)mma_monitorDidFinish:(id)arg1;
- (void)tableViewWillEndDraggingNotification:(id)arg1;
- (void)tableViewDidReloadDataNotification:(id)arg1;
- (void)tableViewDidEndDisplayCellNotification:(id)arg1;
- (void)tableViewWillDisplayCellNotification:(id)arg1;
- (void)tableViewDidFinishScrollNotification:(id)arg1;
- (void)tableViewWillBeginScrollNotification:(id)arg1;
- (id)getLastVCFromStack;
- (void)hasNewControllerDidDisappear:(id)arg1;
- (void)hasNewControllerDidAppear:(id)arg1;
- (void)determineContainerViewControllerAndMonitor;
- (void)viewControllerStateChangeNotification:(id)arg1;
- (void)creatMonitorWithAdView:(id)arg1 promotion:(id)arg2 indexPath:(id)arg3 totalCount:(unsigned long long)arg4;
- (void)viewabilityMonitorByAdView:(id)arg1 indexPath:(id)arg2 promotion:(id)arg3 totalCount:(unsigned long long)arg4;
- (void)monitorView:(id)arg1 indexPath:(id)arg2;
- (void)monitorCellInCurrentContainerByIgnoreDuplicate:(_Bool)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


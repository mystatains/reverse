//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseViewController.h"

#import "XMSegmentTabVCDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, UIButton, XMMessageButton, XMSegmentTabVC, XMSegmentView;

@interface XMMineViewController : XMBaseViewController <XMSegmentTabVCDelegate>
{
    XMSegmentTabVC *_tabVC;
    NSMutableDictionary *_title4vcDict;
    NSArray *_titles;
    XMMessageButton *_messageBtn;
    UIButton *_settingBtn;
    XMSegmentView *_segmentView;
}

@property(retain, nonatomic) XMSegmentView *segmentView; // @synthesize segmentView=_segmentView;
@property(retain, nonatomic) UIButton *settingBtn; // @synthesize settingBtn=_settingBtn;
@property(retain, nonatomic) XMMessageButton *messageBtn; // @synthesize messageBtn=_messageBtn;
@property(retain, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(retain, nonatomic) NSMutableDictionary *title4vcDict; // @synthesize title4vcDict=_title4vcDict;
@property(retain, nonatomic) XMSegmentTabVC *tabVC; // @synthesize tabVC=_tabVC;
- (void).cxx_destruct;
- (void)goToPureHearTab;
- (void)dealloc;
- (void)p_settingAction;
- (void)p_openMessage;
- (void)segmentCtrol:(id)arg1 transitionAtController:(id)arg2;
- (id)segmentCtrolTitles:(id)arg1;
- (id)segmentCtrol:(id)arg1 controllerAtIndex:(long long)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)p_setupNavigationBar;
- (void)p_bind;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseTabelVC.h"

#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSObject, NSString, UIButton, UILabel, UIView, XMBiTingHeaderView, XMMBiTingModel, XMServerRequest;
@protocol OS_dispatch_semaphore;

@interface XMBiTingViewController : XMBaseTabelVC <UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate>
{
    NSObject<OS_dispatch_semaphore> *_dislikeSemaphore;
    NSObject<OS_dispatch_semaphore> *_downloadSemaphore;
    _Bool _ABTestValue;
    UILabel *_noDataImageView;
    UIButton *_downLoadButton;
    XMBiTingHeaderView *_biTingHeaderView;
    XMServerRequest *_biTingRequest;
    XMMBiTingModel *_biTingModel;
    UIView *_navView;
    UILabel *_titleLabel;
    UIView *_lineView;
    UIButton *_backButton;
    UIButton *_subscribeButton;
    long long _disLikeTrackId;
    double _factor;
}

@property(nonatomic) double factor; // @synthesize factor=_factor;
@property(nonatomic) long long disLikeTrackId; // @synthesize disLikeTrackId=_disLikeTrackId;
@property(retain, nonatomic) UIButton *subscribeButton; // @synthesize subscribeButton=_subscribeButton;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *navView; // @synthesize navView=_navView;
@property(retain, nonatomic) XMMBiTingModel *biTingModel; // @synthesize biTingModel=_biTingModel;
@property(retain, nonatomic) XMServerRequest *biTingRequest; // @synthesize biTingRequest=_biTingRequest;
@property(retain, nonatomic) XMBiTingHeaderView *biTingHeaderView; // @synthesize biTingHeaderView=_biTingHeaderView;
@property(retain, nonatomic) UIButton *downLoadButton; // @synthesize downLoadButton=_downLoadButton;
@property(retain, nonatomic) UILabel *noDataImageView; // @synthesize noDataImageView=_noDataImageView;
- (void).cxx_destruct;
- (void)onPlayingTrackPaused;
- (void)onPlayingTrackChanged;
- (void)downloadedSound;
- (void)reloadTableView;
- (void)onChangeFavStateFail:(id)arg1;
- (void)onChangeFavStateSuccess:(id)arg1;
- (void)loginStateChange;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)lastSoundListWithSection:(long long)arg1 Row:(long long)arg2;
- (void)showDownloadButton:(_Bool)arg1;
- (void)realDownLoad;
- (void)downLoad;
- (void)subscribe;
- (void)triggerPullToRefresh;
- (void)requestBiTingFailed:(id)arg1;
- (void)requestBiTingFinished:(id)arg1;
- (void)requestBiTingData;
- (void)requestDisLikeFailed:(id)arg1;
- (void)requestDisLikeFinished:(id)arg1;
- (void)requestDisLikeAblumId:(long long)arg1 trackId:(long long)arg2;
- (void)routerEventWithName:(id)arg1 userInfo:(id)arg2;
- (void)displayAnimation;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithModel:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


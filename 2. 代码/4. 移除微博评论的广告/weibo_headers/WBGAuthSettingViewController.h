//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableDictionary, NSString, UITableView;
@protocol CRGameAuthoritySettingHandle;

@interface WBGAuthSettingViewController : UINavigationController <UITableViewDelegate, UITableViewDataSource>
{
    CDUnknownBlockType _onDismiss;
    NSString *_appName;
    id <CRGameAuthoritySettingHandle> _settingListener;
    UITableView *_tableView;
    NSMutableDictionary *_dataSource;
}

@property(retain, nonatomic) NSMutableDictionary *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <CRGameAuthoritySettingHandle> settingListener; // @synthesize settingListener=_settingListener;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) CDUnknownBlockType onDismiss; // @synthesize onDismiss=_onDismiss;
- (void).cxx_destruct;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)_dismiss;
- (int)_getTypeAtIndex:(long long)arg1;
- (id)_getTitle:(int)arg1;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)setData:(id)arg1;
- (void)setSelectPermission:(int)arg1 granted:(_Bool)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


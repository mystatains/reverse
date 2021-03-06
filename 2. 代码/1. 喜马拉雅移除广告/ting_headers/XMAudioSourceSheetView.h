//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UITableView, XMSoundItem;

@interface XMAudioSourceSheetView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    UIView *_topBlackView;
    UIView *_headView;
    UITableView *_cTableView;
    UIView *_bottomView;
    unsigned long long _sheetType;
    NSMutableArray *_dataSources;
    NSArray *_dataArray;
    XMSoundItem *_sound;
}

@property(retain, nonatomic) XMSoundItem *sound; // @synthesize sound=_sound;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) NSMutableArray *dataSources; // @synthesize dataSources=_dataSources;
@property(nonatomic) unsigned long long sheetType; // @synthesize sheetType=_sheetType;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UITableView *cTableView; // @synthesize cTableView=_cTableView;
@property(retain, nonatomic) UIView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) UIView *topBlackView; // @synthesize topBlackView=_topBlackView;
- (void).cxx_destruct;
- (void)hide;
- (void)showInView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)initSubViews;
- (void)impDataSources;
- (void)addAudioSourceActionType:(unsigned long long)arg1 actionHandler:(CDUnknownBlockType)arg2 selected:(_Bool)arg3;
- (void)initDataSources;
- (_Bool)isFree128;
- (id)initWithAudioSourceSheetType:(unsigned long long)arg1 andSound:(id)arg2;
- (id)initWithAudioSourceSheetType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


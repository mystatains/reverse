//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseTabelVC.h"

#import "XMGroupQuestionCellDelegate-Protocol.h"

@class NSMutableArray, NSString, XMGroupQuestion, XMGroupTalkingItem;

@interface XMGroupQuestionListController : XMBaseTabelVC <XMGroupQuestionCellDelegate>
{
    _Bool _reqFinished;
    XMGroupTalkingItem *_groupItem;
    NSMutableArray *_dataList;
    XMGroupQuestion *_editQuestion;
}

@property(nonatomic) _Bool reqFinished; // @synthesize reqFinished=_reqFinished;
@property(retain, nonatomic) XMGroupQuestion *editQuestion; // @synthesize editQuestion=_editQuestion;
@property(retain, nonatomic) NSMutableArray *dataList; // @synthesize dataList=_dataList;
@property(retain, nonatomic) XMGroupTalkingItem *groupItem; // @synthesize groupItem=_groupItem;
- (void).cxx_destruct;
- (void)reloadData;
- (void)NPQACmtInputView:(id)arg1 sendText:(id)arg2;
- (void)showQACmtInputView:(id)arg1;
- (void)deleteXMGroupQuestionCell:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)requestGroupQuestionList;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


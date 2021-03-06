//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseVC.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "XMLiveEditionTopViewDelegate-Protocol.h"

@class NSString, UIButton, UITableView, XMLiveCameraActionHandler, XMLiveEditionTopView, XMLiveRoomEntApproachInfo, XMNRequest;

@interface XMLiveRoomEntCreateVC : XMBaseVC <XMLiveEditionTopViewDelegate, UITableViewDelegate, UITableViewDataSource>
{
    unsigned long long _createType;
    XMLiveRoomEntApproachInfo *_approachInfo;
    CDUnknownBlockType _editBlock;
    XMLiveEditionTopView *_topView;
    UITableView *_contentTableView;
    XMLiveCameraActionHandler *_cameraHandler;
    UIButton *_actionBtn;
    XMNRequest *_createReq;
}

- (void).cxx_destruct;
@property(retain, nonatomic) XMNRequest *createReq; // @synthesize createReq=_createReq;
@property(retain, nonatomic) UIButton *actionBtn; // @synthesize actionBtn=_actionBtn;
@property(retain, nonatomic) XMLiveCameraActionHandler *cameraHandler; // @synthesize cameraHandler=_cameraHandler;
@property(retain, nonatomic) UITableView *contentTableView; // @synthesize contentTableView=_contentTableView;
@property(retain, nonatomic) XMLiveEditionTopView *topView; // @synthesize topView=_topView;
@property(copy, nonatomic) CDUnknownBlockType editBlock; // @synthesize editBlock=_editBlock;
@property(retain, nonatomic) XMLiveRoomEntApproachInfo *approachInfo; // @synthesize approachInfo=_approachInfo;
@property(nonatomic) unsigned long long createType; // @synthesize createType=_createType;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)onCoverButtonDidClick;
- (void)syncEntRoomDetailForUI;
- (void)postCreateRequest;
- (void)postUpdateRequest;
- (void)onCreateEntertainClick;
- (void)uploadCoverImage:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)preferredStatusBarStyle;
- (void)addBottomCreateView;
- (void)addContentTableview;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


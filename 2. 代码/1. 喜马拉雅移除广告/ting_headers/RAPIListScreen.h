//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RAPIScreen.h"

#import "IDCheckboxDelegate-Protocol.h"
#import "IDTableDelegate-Protocol.h"

@class IDButton, ListScreen0View, NSArray, NSDate, NSMutableArray, NSString, RAPIItemLocation, RAPIListScreenConfig;

@interface RAPIListScreen : RAPIScreen <IDTableDelegate, IDCheckboxDelegate>
{
    IDButton *skipPrevButtons[10];
    IDButton *skipNextButtons[10];
    long long _maxItemsPerPage;
    long long _maxItemsPerGroup;
    NSMutableArray *_groups;
    RAPIListScreenConfig *_config;
    long long _currentlySetMasterOption;
    RAPIItemLocation *_currentGlobalCheckmarkPosition;
    RAPIItemLocation *_currentLocalCheckmarkPosition;
    long long _imageColumnIndex;
    long long _currentlyVisiblePage;
    NSMutableArray *_pages;
    NSDate *_lastPageSkipTime;
    ListScreen0View *_listScreenView;
    NSArray *_groupLabels;
    NSArray *_groupTables;
    struct CGSize _preferredImageSize;
}

@property(retain) NSArray *groupTables; // @synthesize groupTables=_groupTables;
@property(retain) NSArray *groupLabels; // @synthesize groupLabels=_groupLabels;
@property __weak ListScreen0View *listScreenView; // @synthesize listScreenView=_listScreenView;
@property(retain) NSDate *lastPageSkipTime; // @synthesize lastPageSkipTime=_lastPageSkipTime;
@property(retain) NSMutableArray *pages; // @synthesize pages=_pages;
@property long long currentlyVisiblePage; // @synthesize currentlyVisiblePage=_currentlyVisiblePage;
@property long long imageColumnIndex; // @synthesize imageColumnIndex=_imageColumnIndex;
@property(retain) RAPIItemLocation *currentLocalCheckmarkPosition; // @synthesize currentLocalCheckmarkPosition=_currentLocalCheckmarkPosition;
@property(retain) RAPIItemLocation *currentGlobalCheckmarkPosition; // @synthesize currentGlobalCheckmarkPosition=_currentGlobalCheckmarkPosition;
@property long long currentlySetMasterOption; // @synthesize currentlySetMasterOption=_currentlySetMasterOption;
@property(retain) RAPIListScreenConfig *config; // @synthesize config=_config;
@property(retain) NSMutableArray *groups; // @synthesize groups=_groups;
@property long long maxItemsPerGroup; // @synthesize maxItemsPerGroup=_maxItemsPerGroup;
@property long long maxItemsPerPage; // @synthesize maxItemsPerPage=_maxItemsPerPage;
@property struct CGSize preferredImageSize; // @synthesize preferredImageSize=_preferredImageSize;
- (void).cxx_destruct;
- (void)delegate_onRowFocused:(long long)arg1 forGroup:(long long)arg2;
- (id)delegate_getLabelForEmptyList;
- (_Bool)delegate_isMasterOptionButtonChecked;
- (long long)delegate_getTargetScreenForRow:(long long)arg1 forGroup:(long long)arg2;
- (id)delegate_getImageForRow:(long long)arg1 forGroup:(long long)arg2 withPreferredSize:(struct CGSize)arg3;
- (id)delegate_getStringForLine:(long long)arg1 forRow:(long long)arg2 forGroup:(long long)arg3;
- (long long)delegate_getItemCountForGroup:(long long)arg1;
- (id)delegate_getGroupLabelForGroup:(long long)arg1;
- (id)delegate_getSkipNextButtonLabel;
- (id)delegate_getSkipPreviousButtonLabel;
- (_Bool)delegate_isGroupLabelVisibleForGroup:(long long)arg1;
- (long long)delegate_getGroupCount;
- (id)delegate_getLoadingLabel;
- (_Bool)delegate_canProvideDataImmediately;
- (void)showLoadingMessage;
- (void)showErrorMessage:(id)arg1;
- (_Bool)canProvideDataImmediately;
- (void)updateFocus;
- (id)getScreenDelegate;
- (void)focusLocalItem:(id)arg1;
- (void)skipToPrevPage;
- (void)skipToNextPage;
- (long long)getPageForGlobalItemLocation:(id)arg1 andStoreLocalLocation:(id)arg2;
- (void)setImageForGroupTable:(id)arg1 forRow:(long long)arg2 forGroupRow:(long long)arg3 forGroup:(long long)arg4 showPlaceholder:(_Bool)arg5;
- (long long)fillCurrentPageWithContents;
- (void)doPaging;
- (void)setupButtons;
- (void)table:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)table:(id)arg1 didFocusItemAtIndex:(long long)arg2;
- (void)setCheckmarkPositionToItemIndex:(long long)arg1 inGroup:(long long)arg2;
- (void)setMasterOptionButtonEnabled:(_Bool)arg1;
- (void)setActionButtonEnabled:(_Bool)arg1 forButton:(long long)arg2;
- (void)invalidateImageForRow:(long long)arg1 forGroup:(long long)arg2;
- (void)updateScreenContent;
- (void)setCheckmarkPosition:(long long)arg1 forGroup:(long long)arg2;
- (void)clearScreenContent;
- (void)masterOptionButtonPressed:(id)arg1;
- (void)pageSkipButtonPressed:(id)arg1;
- (void)checkbox:(id)arg1 didChangeCheckedValue:(_Bool)arg2;
- (id)initWithView:(id)arg1 andConfig:(id)arg2 andContext:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


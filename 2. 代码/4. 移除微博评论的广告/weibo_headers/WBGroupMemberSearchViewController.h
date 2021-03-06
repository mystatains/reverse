//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewController.h"

#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WBContactContactsTableViewCellDelegate-Protocol.h"
#import "WBTableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, WBDirectionalGroup, WBSearchBar, WBSearchContactsWithHighlightMarkManager;
@protocol WBGroupSearchViewControllerDelegate;

@interface WBGroupMemberSearchViewController : WBTableViewController <UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate, WBContactContactsTableViewCellDelegate, WBTableViewDelegate>
{
    _Bool _showSwipAction;
    _Bool _isSearch;
    int _searchType;
    NSMutableArray *contacts;
    NSMutableArray *searchContacts;
    WBSearchBar *searchBar;
    id <WBGroupSearchViewControllerDelegate> _delegate;
    WBDirectionalGroup *_directionalGroup;
    NSMutableArray *_memberArray;
    NSString *_contactDownloaderRequestKey;
    WBSearchContactsWithHighlightMarkManager *_searchManager;
}

@property(retain, nonatomic) WBSearchContactsWithHighlightMarkManager *searchManager; // @synthesize searchManager=_searchManager;
@property(retain, nonatomic) NSString *contactDownloaderRequestKey; // @synthesize contactDownloaderRequestKey=_contactDownloaderRequestKey;
@property(nonatomic) _Bool isSearch; // @synthesize isSearch=_isSearch;
@property(nonatomic) _Bool showSwipAction; // @synthesize showSwipAction=_showSwipAction;
@property(nonatomic) int searchType; // @synthesize searchType=_searchType;
@property(retain, nonatomic) NSMutableArray *memberArray; // @synthesize memberArray=_memberArray;
@property(retain, nonatomic) WBDirectionalGroup *directionalGroup; // @synthesize directionalGroup=_directionalGroup;
@property(nonatomic) __weak id <WBGroupSearchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WBSearchBar *searchBar; // @synthesize searchBar;
@property(retain, nonatomic) NSMutableArray *searchContacts; // @synthesize searchContacts;
@property(retain, nonatomic) NSMutableArray *contacts; // @synthesize contacts;
- (void).cxx_destruct;
- (void)didPressChatRemoveButtonInCell:(id)arg1 contact:(id)arg2;
- (void)didPressRemoveButtonInCell:(id)arg1 contact:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)dismissKeyboard;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)configTableViewInsets;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)tableViewShouldBypassEmptyView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)realSearchWithKey:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)copySearchDataSource;
- (void)removeDataContact:(id)arg1 refreshUi:(_Bool)arg2;
- (void)didReceiveMemoryWarning;
- (void)setNavigationBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)reloadUIElements;
- (id)itemWithActivityIndicatorView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)configTableView;
- (void)configSearchBar;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


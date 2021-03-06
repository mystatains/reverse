//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseVC.h"

#import "XMBubbleClusterViewProtocol-Protocol.h"
#import "XMPageViewControllerDataSource-Protocol.h"
#import "XMPageViewControllerDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, UIButton, UIView, XMAccompanyClusterView, XMAccompanyNavigationView, XMAccompanySelectedView, XMHotMusicViewController, XMMusicSearchViewController, XMOnlineBGMCategory, XMPageViewController, XMRecordBgMusicSelectViewController, XMSegmentControl;

@interface XMAccompanyPicker : XMBaseVC <XMPageViewControllerDelegate, XMPageViewControllerDataSource, XMBubbleClusterViewProtocol>
{
    _Bool _allowMultipleSelection;
    _Bool _disableItunesMusic;
    CDUnknownBlockType _didFinishPickBlock;
    long long _sceneType;
    long long _musicSceneType;
    NSMutableArray *_selectedArray;
    XMPageViewController *_pageViewController;
    NSMutableArray *_musicCategoryArray;
    XMOnlineBGMCategory *_localMusicCatecory;
    XMOnlineBGMCategory *_hotMusicCatecory;
    NSMutableDictionary *_controllerDictionary;
    XMRecordBgMusicSelectViewController *_localBGMViewController;
    XMHotMusicViewController *_hotViewController;
    XMAccompanyNavigationView *_navigationView;
    XMAccompanySelectedView *_selectedInfoView;
    UIView *_segmentedHolderView;
    XMSegmentControl *_segmentedControl;
    UIButton *_segmentedButton;
    UIView *_segmentedLine;
    XMAccompanyClusterView *_dropDownView;
    XMMusicSearchViewController *_searchViewController;
    NSArray *_originArray;
}

@property(retain, nonatomic) NSArray *originArray; // @synthesize originArray=_originArray;
@property(nonatomic) __weak XMMusicSearchViewController *searchViewController; // @synthesize searchViewController=_searchViewController;
@property(retain, nonatomic) XMAccompanyClusterView *dropDownView; // @synthesize dropDownView=_dropDownView;
@property(retain, nonatomic) UIView *segmentedLine; // @synthesize segmentedLine=_segmentedLine;
@property(retain, nonatomic) UIButton *segmentedButton; // @synthesize segmentedButton=_segmentedButton;
@property(retain, nonatomic) XMSegmentControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(retain, nonatomic) UIView *segmentedHolderView; // @synthesize segmentedHolderView=_segmentedHolderView;
@property(retain, nonatomic) XMAccompanySelectedView *selectedInfoView; // @synthesize selectedInfoView=_selectedInfoView;
@property(retain, nonatomic) XMAccompanyNavigationView *navigationView; // @synthesize navigationView=_navigationView;
@property(retain, nonatomic) XMHotMusicViewController *hotViewController; // @synthesize hotViewController=_hotViewController;
@property(retain, nonatomic) XMRecordBgMusicSelectViewController *localBGMViewController; // @synthesize localBGMViewController=_localBGMViewController;
@property(retain, nonatomic) NSMutableDictionary *controllerDictionary; // @synthesize controllerDictionary=_controllerDictionary;
@property(retain, nonatomic) XMOnlineBGMCategory *hotMusicCatecory; // @synthesize hotMusicCatecory=_hotMusicCatecory;
@property(retain, nonatomic) XMOnlineBGMCategory *localMusicCatecory; // @synthesize localMusicCatecory=_localMusicCatecory;
@property(retain, nonatomic) NSMutableArray *musicCategoryArray; // @synthesize musicCategoryArray=_musicCategoryArray;
@property(retain, nonatomic) XMPageViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
@property(nonatomic) _Bool disableItunesMusic; // @synthesize disableItunesMusic=_disableItunesMusic;
@property(nonatomic) _Bool allowMultipleSelection; // @synthesize allowMultipleSelection=_allowMultipleSelection;
@property(retain, nonatomic) NSMutableArray *selectedArray; // @synthesize selectedArray=_selectedArray;
@property(nonatomic) long long musicSceneType; // @synthesize musicSceneType=_musicSceneType;
@property(nonatomic) long long sceneType; // @synthesize sceneType=_sceneType;
@property(copy, nonatomic) CDUnknownBlockType didFinishPickBlock; // @synthesize didFinishPickBlock=_didFinishPickBlock;
- (void).cxx_destruct;
- (id)sourceInfo;
- (void)setTitle:(id)arg1;
- (long long)thisTimeSelectedCount;
- (id)combineSoungIds;
- (void)stopAllDownload;
- (void)updateScrollEnable;
- (void)updateSelectCount;
- (long long)indexOfController:(id)arg1;
- (id)controllerForCategory:(id)arg1;
- (void)scrollToPage:(long long)arg1 animated:(_Bool)arg2;
- (id)sceneStrForSceneType:(long long)arg1;
- (void)didRequestMoreData:(_Bool)arg1;
- (void)requestMoreData:(_Bool)arg1 showLoadingHud:(_Bool)arg2;
- (_Bool)soundSelected:(id)arg1;
- (void)deleteNetSound:(id)arg1;
- (void)addNetSound:(id)arg1;
- (void)removeNetSound:(id)arg1;
- (void)XMBubbleClusterViewDidTapBtn:(id)arg1 tag:(id)arg2;
- (void)pageViewController:(id)arg1 fullDisplayViewController:(id)arg2;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)onBack;
- (void)back;
- (id)segmentCtrolTitles;
- (void)clickSegmentedButton:(id)arg1;
- (void)clickConfirmButton:(id)arg1;
- (void)clickSearchButton:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)didInitialize;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithMultipleSelection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


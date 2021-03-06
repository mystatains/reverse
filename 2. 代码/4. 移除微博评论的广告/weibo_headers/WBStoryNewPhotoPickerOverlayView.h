//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBStoryPopUpOverlayBaseView.h"

#import "PHPhotoLibraryChangeObserver-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WBStoryAlbumListenerProtocol-Protocol.h"
#import "WBStoryDraftListViewControllerDelegate-Protocol.h"
#import "WBStoryPhotoPickerView-Protocol.h"

@class NSArray, NSString, PHAsset, PHFetchOptions, PHFetchResult, UICollectionView, UIPanGestureRecognizer, UIVisualEffectView, WBStoryButton, WBStoryPhotoPickerOverlayEmptyView;
@protocol WBStoryPhotoPickerViewDelegate;

@interface WBStoryNewPhotoPickerOverlayView : WBStoryPopUpOverlayBaseView <UICollectionViewDataSource, UICollectionViewDelegate, PHPhotoLibraryChangeObserver, UIGestureRecognizerDelegate, WBStoryDraftListViewControllerDelegate, WBStoryAlbumListenerProtocol, WBStoryPhotoPickerView>
{
    struct {
        unsigned int isNeedReload:1;
        unsigned int isRegistered:1;
        unsigned int reverseAsset:1;
    } _flags;
    id <WBStoryPhotoPickerViewDelegate> _delegate;
    UIVisualEffectView *_blurView;
    UICollectionView *_collectionView;
    WBStoryButton *_closeButton;
    UIPanGestureRecognizer *_panGesture;
    double _currentPosition;
    WBStoryPhotoPickerOverlayEmptyView *_noAuthView;
    WBStoryPhotoPickerOverlayEmptyView *_albumEmptyView;
    PHAsset *_firstAsset;
    PHFetchOptions *_fetchOptions;
    PHFetchResult *_assets;
    long long _currentStatus;
    NSArray *_drafts;
    unsigned long long _businessType;
}

@property(nonatomic) unsigned long long businessType; // @synthesize businessType=_businessType;
@property(retain, nonatomic) NSArray *drafts; // @synthesize drafts=_drafts;
@property(nonatomic) long long currentStatus; // @synthesize currentStatus=_currentStatus;
@property(retain, nonatomic) PHFetchResult *assets; // @synthesize assets=_assets;
@property(retain, nonatomic) PHFetchOptions *fetchOptions; // @synthesize fetchOptions=_fetchOptions;
@property(retain, nonatomic) PHAsset *firstAsset; // @synthesize firstAsset=_firstAsset;
@property(retain, nonatomic) WBStoryPhotoPickerOverlayEmptyView *albumEmptyView; // @synthesize albumEmptyView=_albumEmptyView;
@property(retain, nonatomic) WBStoryPhotoPickerOverlayEmptyView *noAuthView; // @synthesize noAuthView=_noAuthView;
@property(nonatomic) double currentPosition; // @synthesize currentPosition=_currentPosition;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(retain, nonatomic) WBStoryButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(nonatomic) __weak id <WBStoryPhotoPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)managerButtonAction;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)storyDraftListViewControllerDidSelectedDraft:(id)arg1;
- (void)storyDraftListViewControllerDidDismiss:(id)arg1;
- (void)delayReload;
- (void)photoLibraryDidChange:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)reset;
- (void)authButtonClick;
- (void)updateTipsLabel;
- (void)dealloc;
- (void)reloadData;
- (void)loadAssetsCompletion:(CDUnknownBlockType)arg1;
- (void)storyAlubmDidChange:(id)arg1;
- (void)loadAlbum;
- (void)loadDraft;
- (void)closeAction;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (id)initWithFrame:(struct CGRect)arg1 type:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


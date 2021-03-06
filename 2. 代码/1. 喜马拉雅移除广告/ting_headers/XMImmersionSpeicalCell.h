//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMFindFlowWhiteBackTableViewCell.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSString, UICollectionView, UIImageView, UILabel, UIView, XMCategoryRecImmersionSpecialModel, XMCategoryRecModel, XMTableCellObject, XMWebImageView;
@protocol XMLongPressProtocol;

@interface XMImmersionSpeicalCell : XMFindFlowWhiteBackTableViewCell <UICollectionViewDelegate, UICollectionViewDataSource>
{
    UIView *_backView;
    XMWebImageView *_coverImageView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    XMCategoryRecModel *_model;
    XMCategoryRecImmersionSpecialModel *_specialModel;
    UICollectionView *_collectionView;
    UIImageView *_arrowView;
    UILabel *_sectionTitleLabel;
    id <XMLongPressProtocol> _longPressDelegate;
    XMTableCellObject *_cellObj;
}

+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
@property(nonatomic) __weak XMTableCellObject *cellObj; // @synthesize cellObj=_cellObj;
@property(nonatomic) __weak id <XMLongPressProtocol> longPressDelegate; // @synthesize longPressDelegate=_longPressDelegate;
@property(retain, nonatomic) UILabel *sectionTitleLabel; // @synthesize sectionTitleLabel=_sectionTitleLabel;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) XMCategoryRecImmersionSpecialModel *specialModel; // @synthesize specialModel=_specialModel;
@property(retain, nonatomic) XMCategoryRecModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) XMWebImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)clickMore;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


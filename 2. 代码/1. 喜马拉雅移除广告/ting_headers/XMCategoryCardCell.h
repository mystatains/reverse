//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMTableViewCell.h"

#import "XMCategoryCollectionViewDelegate-Protocol.h"

@class NSArray, NSIndexPath, NSMutableArray, NSString, UIScrollView;
@protocol XMCategoryCardCellDelegate;

@interface XMCategoryCardCell : XMTableViewCell <XMCategoryCollectionViewDelegate>
{
    int _vCount;
    double _bottomHeight;
    _Bool _lastRow;
    id <XMCategoryCardCellDelegate> _delegate;
    NSArray *_cardArray;
    NSIndexPath *_indexPath;
    NSMutableArray *_arrayV;
    UIScrollView *_scrollerView;
}

+ (double)heightForCell;
@property(retain, nonatomic) UIScrollView *scrollerView; // @synthesize scrollerView=_scrollerView;
@property(retain, nonatomic) NSMutableArray *arrayV; // @synthesize arrayV=_arrayV;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) NSArray *cardArray; // @synthesize cardArray=_cardArray;
@property(nonatomic) __weak id <XMCategoryCardCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)collectionViewClick:(id)arg1;
- (void)layoutSubviews;
- (void)safeResetArrayV;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


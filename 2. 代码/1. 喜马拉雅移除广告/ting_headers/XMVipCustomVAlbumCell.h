//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMTableViewCell.h"

@class XMAlbumItem, XMBaseLayout;

@interface XMVipCustomVAlbumCell : XMTableViewCell
{
    XMBaseLayout *_layout;
}

+ (id)layoutWithAlbum:(id)arg1;
+ (id)cellObjectWithAlbum:(id)arg1;
+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
@property(retain, nonatomic) XMBaseLayout *layout; // @synthesize layout=_layout;
- (void).cxx_destruct;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
@property(readonly, nonatomic) XMAlbumItem *album;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseLayout.h"

@class NSArray, XMVipStatusItem;

@interface XMVipStatusCellLayout : XMBaseLayout
{
    XMVipStatusItem *_vipStatus;
    XMBaseLayout *_statusViewLayout;
    XMBaseLayout *_hLineLayout;
    XMBaseLayout *_vLineLayout;
    XMBaseLayout *_bkgLayout;
    XMBaseLayout *_collectionLayout;
    XMBaseLayout *_rightDetailsBtnLayout;
    XMBaseLayout *_watermarkOneLayout;
    XMBaseLayout *_watermarkTwoLayout;
    NSArray *_buttonLayouts;
    XMBaseLayout *_listenedLayout;
    XMBaseLayout *_saveLayout;
    XMBaseLayout *_removedAdLayout;
}

@property(retain, nonatomic) XMBaseLayout *removedAdLayout; // @synthesize removedAdLayout=_removedAdLayout;
@property(retain, nonatomic) XMBaseLayout *saveLayout; // @synthesize saveLayout=_saveLayout;
@property(retain, nonatomic) XMBaseLayout *listenedLayout; // @synthesize listenedLayout=_listenedLayout;
@property(retain, nonatomic) NSArray *buttonLayouts; // @synthesize buttonLayouts=_buttonLayouts;
@property(retain, nonatomic) XMBaseLayout *watermarkTwoLayout; // @synthesize watermarkTwoLayout=_watermarkTwoLayout;
@property(retain, nonatomic) XMBaseLayout *watermarkOneLayout; // @synthesize watermarkOneLayout=_watermarkOneLayout;
@property(retain, nonatomic) XMBaseLayout *rightDetailsBtnLayout; // @synthesize rightDetailsBtnLayout=_rightDetailsBtnLayout;
@property(retain, nonatomic) XMBaseLayout *collectionLayout; // @synthesize collectionLayout=_collectionLayout;
@property(retain, nonatomic) XMBaseLayout *bkgLayout; // @synthesize bkgLayout=_bkgLayout;
@property(retain, nonatomic) XMBaseLayout *vLineLayout; // @synthesize vLineLayout=_vLineLayout;
@property(retain, nonatomic) XMBaseLayout *hLineLayout; // @synthesize hLineLayout=_hLineLayout;
@property(retain, nonatomic) XMBaseLayout *statusViewLayout; // @synthesize statusViewLayout=_statusViewLayout;
@property(retain, nonatomic) XMVipStatusItem *vipStatus; // @synthesize vipStatus=_vipStatus;
- (void).cxx_destruct;

@end


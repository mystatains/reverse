//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMTableCellModelProtocol-Protocol.h"

@class NSString, XMAlbumItem;

@interface XMVIPRankDetailModel : NSObject <XMTableCellModelProtocol>
{
    long long _index;
    long long _changeState;
    XMAlbumItem *_albumItem;
    double _heat;
}

@property(nonatomic) double heat; // @synthesize heat=_heat;
@property(retain, nonatomic) XMAlbumItem *albumItem; // @synthesize albumItem=_albumItem;
@property(nonatomic) long long changeState; // @synthesize changeState=_changeState;
@property(nonatomic) long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (void)parseWithDict:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


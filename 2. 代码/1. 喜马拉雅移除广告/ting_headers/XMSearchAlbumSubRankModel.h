//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSString;

@interface XMSearchAlbumSubRankModel : XMModel
{
    long long _clusterType;
    long long _rankListId;
    long long _categoryId;
    NSString *_showLabel;
}

@property(retain, nonatomic) NSString *showLabel; // @synthesize showLabel=_showLabel;
@property(nonatomic) long long categoryId; // @synthesize categoryId=_categoryId;
@property(nonatomic) long long rankListId; // @synthesize rankListId=_rankListId;
@property(nonatomic) long long clusterType; // @synthesize clusterType=_clusterType;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCard.h"

@class NSString, WBUniversalStatus, WBVoteModel;

@interface WBPagePollCard : WBPageCard
{
    WBUniversalStatus *_status;
    NSString *_pageID;
    WBVoteModel *_voteModel;
}

+ (Class)tableViewCellClass;
+ (Class)viewClass;
@property(retain, nonatomic) WBVoteModel *voteModel; // @synthesize voteModel=_voteModel;
@property(retain, nonatomic) NSString *pageID; // @synthesize pageID=_pageID;
@property(nonatomic) __weak WBUniversalStatus *status; // @synthesize status=_status;
- (void).cxx_destruct;
- (_Bool)updateWithDictionary:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ULSBaseModel.h"

@class NSString;

@interface ULSCacheConfig : ULSBaseModel
{
    NSString *_roomID;
    long long _commentCount;
    long long _listenDuration;
}

+ (id)parseWithModelArray:(id)arg1;
+ (id)parseWithDictArray:(id)arg1;
+ (id)parse:(id)arg1;
@property(nonatomic) long long listenDuration; // @synthesize listenDuration=_listenDuration;
@property(nonatomic) long long commentCount; // @synthesize commentCount=_commentCount;
@property(copy, nonatomic) NSString *roomID; // @synthesize roomID=_roomID;
- (void).cxx_destruct;
- (_Bool)isCurrentRoomWithRoomID:(id)arg1;
- (id)toDictionary;
- (id)init;

@end


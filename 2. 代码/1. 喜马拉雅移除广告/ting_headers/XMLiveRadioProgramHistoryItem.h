//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@interface XMLiveRadioProgramHistoryItem : NSObject <NSCoding>
{
    _Bool isPlayEnd;
    long long programScheduleId;
    long long position;
    long long totalPlayedTime;
}

@property(nonatomic) long long totalPlayedTime; // @synthesize totalPlayedTime;
@property(nonatomic) _Bool isPlayEnd; // @synthesize isPlayEnd;
@property(nonatomic) long long position; // @synthesize position;
@property(nonatomic) long long programScheduleId; // @synthesize programScheduleId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end


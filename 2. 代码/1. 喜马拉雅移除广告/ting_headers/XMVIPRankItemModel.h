//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface XMVIPRankItemModel : NSObject
{
    _Bool _hasMore;
    long long _ruleId;
    NSString *_name;
    NSArray *_items;
    NSString *_updateTime;
    NSArray *_array;
}

@property(retain, nonatomic) NSArray *array; // @synthesize array=_array;
@property(retain, nonatomic) NSString *updateTime; // @synthesize updateTime=_updateTime;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long ruleId; // @synthesize ruleId=_ruleId;
- (void).cxx_destruct;
- (void)parseWithDict:(id)arg1;

@end


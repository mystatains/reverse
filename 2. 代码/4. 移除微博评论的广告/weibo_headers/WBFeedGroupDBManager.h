//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, WBFeedGroup;

@interface WBFeedGroupDBManager : NSObject
{
    NSMutableDictionary *queueDict;
    int orderCount;
    WBFeedGroup *_currentGroup;
}

@property(retain, nonatomic) WBFeedGroup *currentGroup; // @synthesize currentGroup=_currentGroup;
- (void).cxx_destruct;
- (void)dealloc;
- (void)removeFeedDBTask:(id)arg1 forKey:(id)arg2;
- (id)addFeedDBTask:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (void)resetForKey:(id)arg1;
- (void)commit:(id)arg1;
- (id)generateKey;
- (id)init;

@end


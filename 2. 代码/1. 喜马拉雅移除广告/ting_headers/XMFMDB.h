//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FMDatabase, FMDatabaseQueue, NSString;

@interface XMFMDB : NSObject
{
    FMDatabaseQueue *_queue;
    NSString *_dbPath;
    NSString *_dbName;
    FMDatabase *_db;
}

+ (id)sharedInstanceWithPath:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) FMDatabase *db; // @synthesize db=_db;
@property(retain, nonatomic) NSString *dbName; // @synthesize dbName=_dbName;
@property(retain, nonatomic) NSString *dbPath; // @synthesize dbPath=_dbPath;
@property(retain, nonatomic) FMDatabaseQueue *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)inTransaction:(CDUnknownBlockType)arg1;
- (void)inDatabase:(CDUnknownBlockType)arg1;
- (id)initWithPath:(id)arg1;
- (id)init;

@end


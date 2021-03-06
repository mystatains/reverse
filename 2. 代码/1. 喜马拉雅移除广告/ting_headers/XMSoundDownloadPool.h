//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSLocking-Protocol.h"

@class NSMutableArray;
@protocol OS_dispatch_semaphore;

@interface XMSoundDownloadPool : NSObject <NSLocking>
{
    NSMutableArray *_downloadSounds;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(retain, nonatomic) NSMutableArray *downloadSounds; // @synthesize downloadSounds=_downloadSounds;
- (void).cxx_destruct;
- (void)unlock;
- (void)lock;
- (id)getCacheTimeSortArray:(id)arg1 descendSort:(_Bool)arg2;
- (id)getAutoSortArray:(id)arg1 descendSort:(_Bool)arg2;
- (id)getManualSortArray:(id)arg1 descendSort:(_Bool)arg2;
- (id)getSortDownloadedAlbumSounds:(long long)arg1;
- (_Bool)updatePayTrack:(id)arg1 authorize:(_Bool)arg2 authorizedType:(long long)arg3;
- (_Bool)updatePayTrackAuthorizeWhenVIPStateChanged:(_Bool)arg1;
- (void)updateAuthorizedState:(_Bool)arg1 albumId:(long long)arg2;
- (id)canResumedSounds;
- (id)unFinishedDownload;
- (_Bool)isDownloadFinished;
- (_Bool)isDownloading:(id)arg1;
- (_Bool)downloadedExist:(id)arg1 withState:(int *)arg2;
- (id)getDownloadedSoundsForAlbumId:(long long)arg1;
- (id)getDownloadedSounds;
- (id)getUnDownloadedSounds;
- (id)findSound:(id)arg1;
- (void)replaceSound:(id)arg1;
- (void)insertSound:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeSoundsInArray:(id)arg1;
- (void)deleteSound:(id)arg1;
- (void)removeAllSounds;
- (void)addSoundsWithArray:(id)arg1;
- (id)cacheItemWithSound:(id)arg1;
- (id)init;

@end


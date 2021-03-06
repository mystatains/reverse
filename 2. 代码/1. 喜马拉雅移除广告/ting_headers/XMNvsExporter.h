//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMNvsPlayerDelegate-Protocol.h"

@class NSString, XMNvsPlayer;
@protocol XMNvsExporterDelegate;

@interface XMNvsExporter : NSObject <XMNvsPlayerDelegate>
{
    id <XMNvsExporterDelegate> _delegate;
    NSString *_exportPath;
    XMNvsPlayer *_player;
}

@property(retain, nonatomic) XMNvsPlayer *player; // @synthesize player=_player;
@property(copy, nonatomic) NSString *exportPath; // @synthesize exportPath=_exportPath;
@property(nonatomic) __weak id <XMNvsExporterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)resume;
- (_Bool)pause;
- (void)exportTimetineData:(id)arg1;
- (void)playerFailedExport:(id)arg1;
- (void)playerCancleExport:(id)arg1;
- (void)playerFinishExport:(id)arg1;
- (void)playerExport:(id)arg1 progress:(double)arg2;
- (void)playerStartExport:(id)arg1;
- (void)playerDidSeek:(id)arg1 position:(long long)arg2;
- (void)player:(id)arg1 current:(long long)arg2;
- (void)playerDidStop:(id)arg1 didEOF:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CCRunLoopCustomInputSourceThread, NSMutableArray;

@interface XMRunLoopThread : NSObject
{
    NSMutableArray *_sources;
    CCRunLoopCustomInputSourceThread *_customInputSourceThread;
}

@property(retain, nonatomic) CCRunLoopCustomInputSourceThread *customInputSourceThread; // @synthesize customInputSourceThread=_customInputSourceThread;
@property(retain, nonatomic) NSMutableArray *sources; // @synthesize sources=_sources;
- (id)startCustomInputSpurceRunLoopThread;
- (id)getRunThread;
- (void)dealloc;
- (void)addInputSourceEvent;
- (void)removeSource:(id)arg1;
- (void)registerSource:(id)arg1;

@end


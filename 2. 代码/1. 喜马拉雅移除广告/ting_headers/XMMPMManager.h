//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface XMMPMManager : NSObject
{
}

+ (void)offMPMWithPassword:(id)arg1 andCompletion:(CDUnknownBlockType)arg2;
+ (void)_openMPMWithPassword:(id)arg1 andCompletion:(CDUnknownBlockType)arg2;
+ (void)openMPMWithPassword:(id)arg1 andCompletion:(CDUnknownBlockType)arg2;
+ (void)checkMPMStatusWithCompletion:(CDUnknownBlockType)arg1;
+ (void)syncLocalizedMPMStatusWithHandle:(CDUnknownBlockType)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedManager;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


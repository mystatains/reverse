//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BUAdActionManager : NSObject
{
}

+ (void)gotoDetailPage:(id)arg1 context:(id)arg2;
+ (id)sharedManager;
- (void)BU_handleVideoAdActionWithModel:(id)arg1 context:(id)arg2;
- (void)BU_handleSafariActionWithModel:(id)arg1 context:(id)arg2;
- (void)BU_handleWebPageActionWithModel:(id)arg1 context:(id)arg2;
- (void)BU_handelCallActionWithModel:(id)arg1 WithIsWebPage:(_Bool)arg2 context:(id)arg3;
- (void)BU_handelCallActionWithModel:(id)arg1 context:(id)arg2;
- (long long)BU_handleAppActionWithModel:(id)arg1 WithSucessCallBack:(CDUnknownBlockType)arg2 WithFailedCallback:(CDUnknownBlockType)arg3 context:(id)arg4;

@end


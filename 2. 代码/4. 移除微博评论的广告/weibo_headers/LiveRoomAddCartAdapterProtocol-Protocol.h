//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIView;

@protocol LiveRoomAddCartAdapterProtocol <NSObject>

@optional
- (void)startTaokeWithHostId:(NSString *)arg1 goodId:(NSString *)arg2 sourceType:(NSString *)arg3 bizType:(NSString *)arg4 contentId:(NSString *)arg5 sourceId:(NSString *)arg6 completion:(void (^)(_Bool, NSError *))arg7;
- (void)startTaokeWithHostId:(NSString *)arg1 goodId:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)add2CartWithGoodId:(NSString *)arg1 liveId:(NSString *)arg2 SKUInView:(UIView *)arg3 toastView:(UIView *)arg4 showDetail:(void (^)(void))arg5 addCart:(void (^)(void))arg6;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, UIImage, UIView, WBStoryLiveView;

@protocol WBStoryLiveViewProtocel <NSObject>
- (UIView *)liveView;
- (void)vvsLeftSwipped;
- (UIImage *)getCurrentLiveImage;
- (int)coverLiveStatusToStoryStatus;
- (_Bool)storyFullScreenShouldPanDownClose;
- (_Bool)storyFullScreenShouldClose;
- (_Bool)storyFullScreenShouldScroll;
- (void)storyFullScreenDidSwipeUp;
- (_Bool)storyFullScreenShouldScroll:(int)arg1;
- (void)storyRelease;
- (void)storyCloseLive;
- (void)storyStop;
- (void)storyPlay;
- (void)storyUpdate:(NSString *)arg1 withParam:(NSDictionary *)arg2 storyLive:(WBStoryLiveView *)arg3;
- (void)storyClear;
- (void)storyInit;
@end


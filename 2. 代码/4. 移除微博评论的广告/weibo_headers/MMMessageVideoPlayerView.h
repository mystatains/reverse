//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WBVideoPlayerSourceView-Protocol.h"

@class WBVideoItem;

@interface MMMessageVideoPlayerView : UIView <WBVideoPlayerSourceView>
{
    WBVideoItem *_videoItem;
}

@property(retain, nonatomic) WBVideoItem *videoItem; // @synthesize videoItem=_videoItem;
- (void).cxx_destruct;
- (id)mediaPlaybackStatus;
- (id)mediaPlaybackPlaceholderWithLoadedStatus:(_Bool *)arg1;
- (id)mediaPlaybackPlaceholderImageURL;
- (id)mediaPlaybackItem;
- (_Bool)supportsInlineMediaPlayback;
- (id)initWithFrame:(struct CGRect)arg1;

@end


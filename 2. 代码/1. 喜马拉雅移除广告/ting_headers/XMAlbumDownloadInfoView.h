//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSObject, UILabel;
@protocol OS_dispatch_queue;

@interface XMAlbumDownloadInfoView : UIView
{
    UILabel *_sizeLabel;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (double)height;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) UILabel *sizeLabel; // @synthesize sizeLabel=_sizeLabel;
- (void).cxx_destruct;
- (void)showSoundSize:(id)arg1;
- (void)layoutSubviews;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "WeiboCubePhotoViewerFromViewProtocol-Protocol.h"

@class MMMessageProgressView, NSValue, UIImage, UIImageView;

@interface WBMessagePhotoButton : UIButton <WeiboCubePhotoViewerFromViewProtocol>
{
    _Bool uploading;
    _Bool isGif;
    UIImageView *gifImageView;
    MMMessageProgressView *progressView;
    struct UIEdgeInsets innerImageRect;
    _Bool _sentByMe;
    UIImage *_photoViewerTransitionAnimationImage;
}

@property(retain, nonatomic) UIImage *photoViewerTransitionAnimationImage; // @synthesize photoViewerTransitionAnimationImage=_photoViewerTransitionAnimationImage;
@property(nonatomic) _Bool sentByMe; // @synthesize sentByMe=_sentByMe;
@property(nonatomic) struct UIEdgeInsets innerImageRect; // @synthesize innerImageRect;
@property(retain, nonatomic) MMMessageProgressView *progressView; // @synthesize progressView;
@property(nonatomic, getter=isUploading) _Bool uploading; // @synthesize uploading;
@property(nonatomic) _Bool isGif; // @synthesize isGif;
- (void).cxx_destruct;
- (void)showProgress:(_Bool)arg1;
@property(readonly, nonatomic) UIImage *image;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, nonatomic) NSValue *currentProtectPosition;

@end


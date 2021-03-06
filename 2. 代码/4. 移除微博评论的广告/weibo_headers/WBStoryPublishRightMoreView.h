//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSString, UIButton, UITapGestureRecognizer, WBStoryControlViewButton;
@protocol WBStoryPublishRightMoreViewDelegate;

@interface WBStoryPublishRightMoreView : UIView <UIGestureRecognizerDelegate>
{
    UIView *_contentView;
    WBStoryControlViewButton *_textButton;
    WBStoryControlViewButton *_brushButton;
    WBStoryControlViewButton *_stickerButton;
    UIButton *_lessButton;
    UITapGestureRecognizer *_tapGesture;
    CDUnknownBlockType _dismissCallback;
    id <WBStoryPublishRightMoreViewDelegate> _delegate;
    NSArray *_exceptRects;
}

+ (void)showInView:(id)arg1 point:(struct CGPoint)arg2 exceptRects:(id)arg3 dismiss:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) NSArray *exceptRects; // @synthesize exceptRects=_exceptRects;
@property(nonatomic) __weak id <WBStoryPublishRightMoreViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType dismissCallback; // @synthesize dismissCallback=_dismissCallback;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UIButton *lessButton; // @synthesize lessButton=_lessButton;
@property(retain, nonatomic) WBStoryControlViewButton *stickerButton; // @synthesize stickerButton=_stickerButton;
@property(retain, nonatomic) WBStoryControlViewButton *brushButton; // @synthesize brushButton=_brushButton;
@property(retain, nonatomic) WBStoryControlViewButton *textButton; // @synthesize textButton=_textButton;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)lessButtonClick:(id)arg1;
- (void)stickerButtonClick:(id)arg1;
- (void)brushButtonClick:(id)arg1;
- (void)textButtonClick:(id)arg1;
- (void)dismissWithAnimation:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
- (void)tapAction;
- (id)initWithFrame:(struct CGRect)arg1 point:(struct CGPoint)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


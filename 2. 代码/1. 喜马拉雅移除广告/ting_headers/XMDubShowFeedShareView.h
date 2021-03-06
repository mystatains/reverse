//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class XMDubShowProgramItem;

@interface XMDubShowFeedShareView : UIView
{
    XMDubShowProgramItem *_programItem;
    CDUnknownBlockType _praiseBlock;
    CDUnknownBlockType _commentBlock;
    CDUnknownBlockType _followBlock;
    CDUnknownBlockType _reportBlock;
    UIView *_contentView;
}

@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) CDUnknownBlockType reportBlock; // @synthesize reportBlock=_reportBlock;
@property(copy, nonatomic) CDUnknownBlockType followBlock; // @synthesize followBlock=_followBlock;
@property(copy, nonatomic) CDUnknownBlockType commentBlock; // @synthesize commentBlock=_commentBlock;
@property(copy, nonatomic) CDUnknownBlockType praiseBlock; // @synthesize praiseBlock=_praiseBlock;
@property(retain, nonatomic) XMDubShowProgramItem *programItem; // @synthesize programItem=_programItem;
- (void).cxx_destruct;
- (void)p_handleNotifyFollow:(id)arg1;
- (void)p_handleNotifyPraise:(id)arg1;
- (void)onShareWithDownload;
- (void)onShareWithPlatformType:(unsigned long long)arg1;
- (void)handleClickAction:(id)arg1;
- (void)addShareView;
- (void)initContentView;
- (void)showInView:(id)arg1;
- (void)dismiss;
- (void)onTap:(id)arg1;
- (void)customInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end


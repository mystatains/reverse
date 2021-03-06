//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UIButton, UIImageView, XMLiveCommentItem;
@protocol XMFoldCommentViewDelegate;

@interface XMFoldCommentView : UIView
{
    id <XMFoldCommentViewDelegate> _delegate;
    unsigned long long _viewStyle;
    NSArray *_dataSource;
    XMLiveCommentItem *_ancestorCmt;
    UIImageView *_bgIV;
    NSMutableArray *_labelMArr;
    UIButton *_moreBtn;
    UIView *_lbTouchBgView;
}

+ (void)processEmojiString:(id)arg1;
+ (double)getFoldCVheightFromAncestorCmt:(id)arg1;
+ (void)addTextAttachment:(id)arg1 attributedString:(id)arg2 index:(unsigned long long)arg3;
+ (void)addTextAttachment:(id)arg1 attributedString:(id)arg2;
+ (id)createAllTextTruncationToken:(_Bool)arg1 label:(id)arg2 block:(CDUnknownBlockType)arg3;
+ (_Bool)shouldShowPoints:(id)arg1 size:(struct CGSize)arg2;
@property(retain, nonatomic) UIView *lbTouchBgView; // @synthesize lbTouchBgView=_lbTouchBgView;
@property(retain, nonatomic) UIButton *moreBtn; // @synthesize moreBtn=_moreBtn;
@property(retain, nonatomic) NSMutableArray *labelMArr; // @synthesize labelMArr=_labelMArr;
@property(retain, nonatomic) UIImageView *bgIV; // @synthesize bgIV=_bgIV;
@property(retain, nonatomic) XMLiveCommentItem *ancestorCmt; // @synthesize ancestorCmt=_ancestorCmt;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) unsigned long long viewStyle; // @synthesize viewStyle=_viewStyle;
@property(nonatomic) __weak id <XMFoldCommentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)textHighlightTapActionWithRange:(id)arg1 content:(id)arg2 liveCmtItem:(id)arg3 uid:(id)arg4;
- (void)xm_setLBTapAction:(id)arg1 nicknameRanges:(id)arg2 eventCmt:(id)arg3;
- (void)setFoldCVWithAncestorCmt:(id)arg1;
- (void)initFoldLabelMArr;
- (void)moreBtnTouch:(id)arg1;
- (id)init;

@end


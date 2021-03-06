//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, XMAdMarkView, XMVouchersAlertViewModel;

@interface XMVoucherAlertView : UIView
{
    _Bool _onAnimation;
    XMVouchersAlertViewModel *_viewModel;
    CDUnknownBlockType _buttonDidClick;
    UIView *_mask;
    UIView *_container;
    XMAdMarkView *_tradeMark;
    NSMutableArray *_ruleLabels;
}

+ (void)requestGetVoucherInfoWithProductItemId:(long long)arg1 andComplete:(CDUnknownBlockType)arg2;
+ (void)requestGetVoucherInfoWithAlbumId:(long long)arg1 andComplete:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSMutableArray *ruleLabels; // @synthesize ruleLabels=_ruleLabels;
@property(retain, nonatomic) XMAdMarkView *tradeMark; // @synthesize tradeMark=_tradeMark;
@property(retain, nonatomic) UIView *container; // @synthesize container=_container;
@property(retain, nonatomic) UIView *mask; // @synthesize mask=_mask;
@property(copy, nonatomic) CDUnknownBlockType buttonDidClick; // @synthesize buttonDidClick=_buttonDidClick;
@property(retain, nonatomic) XMVouchersAlertViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)buttonClick:(id)arg1;
- (void)closeButton:(id)arg1;
- (void)showView:(_Bool)arg1;
- (void)updateRules;
- (void)updateVoucher;
- (void)updateView;
- (void)setFrame:(struct CGRect)arg1;

@end


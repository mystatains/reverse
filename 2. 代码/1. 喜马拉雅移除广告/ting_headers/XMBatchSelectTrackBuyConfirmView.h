//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class XMBatchSelectTrackItem, XMBatchSelectTrackSubItem, XMPayButton;

@interface XMBatchSelectTrackBuyConfirmView : UIView
{
    XMBatchSelectTrackItem *_item;
    CDUnknownBlockType _payButtonDidClick;
    CDUnknownBlockType _vipButtonDidClick;
    XMBatchSelectTrackSubItem *_subItem;
    UIView *_mask;
    UIView *_containerView;
    XMPayButton *_payBtn;
}

+ (id)vipBtnFromView:(id)arg1 withSize:(struct CGSize)arg2;
@property(retain, nonatomic) XMPayButton *payBtn; // @synthesize payBtn=_payBtn;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *mask; // @synthesize mask=_mask;
@property(retain, nonatomic) XMBatchSelectTrackSubItem *subItem; // @synthesize subItem=_subItem;
@property(copy, nonatomic) CDUnknownBlockType vipButtonDidClick; // @synthesize vipButtonDidClick=_vipButtonDidClick;
@property(copy, nonatomic) CDUnknownBlockType payButtonDidClick; // @synthesize payButtonDidClick=_payButtonDidClick;
@property(retain, nonatomic) XMBatchSelectTrackItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)endBuy;
- (void)startBuy;
- (void)vipButtonClick:(id)arg1;
- (void)payButton:(id)arg1;
- (void)close;
- (void)tap:(id)arg1;
- (void)buttonClick:(id)arg1;
- (void)showView:(_Bool)arg1 withAnimation:(_Bool)arg2;
- (void)showView:(_Bool)arg1;
- (void)addCountsDetailToView:(id)arg1;
- (void)addRulesInView:(id)arg1;
- (id)payBtnWithSize:(struct CGSize)arg1;
- (id)xidianLayoutWithWidth:(double)arg1;
- (void)updateUI;
- (id)init;

@end


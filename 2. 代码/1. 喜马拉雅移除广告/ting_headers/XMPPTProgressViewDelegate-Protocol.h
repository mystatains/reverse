//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIButton, XMPPTProgressView;

@protocol XMPPTProgressViewDelegate <NSObject>

@optional
- (void)progressViewOnProcessBarValueChanged:(id)arg1;
- (void)progressViewSendDanma:(XMPPTProgressView *)arg1 lanscape:(_Bool)arg2;
- (void)progressView:(XMPPTProgressView *)arg1 landscapeButtonPressed:(UIButton *)arg2 lanscape:(_Bool)arg3;
- (void)progressView:(XMPPTProgressView *)arg1 danmaButtonPressed:(UIButton *)arg2 danma:(_Bool)arg3;
- (void)progressView:(XMPPTProgressView *)arg1 playButtonPressed:(UIButton *)arg2 play:(_Bool)arg3;
@end


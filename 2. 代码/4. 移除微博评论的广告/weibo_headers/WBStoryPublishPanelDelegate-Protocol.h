//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, UIButton, UIView, WBStoryChallengeModel, WBStoryPublishInfo;
@protocol WBStoryPublishPanel;

@protocol WBStoryPublishPanelDelegate <NSObject>

@optional
- (void)publishPanel:(UIView<WBStoryPublishPanel> *)arg1 didPressGoldFansPayButton:(UIButton *)arg2;
- (void)publishPanel:(UIView<WBStoryPublishPanel> *)arg1 didPressPayButton:(UIButton *)arg2;
- (void)publishPanel:(UIView<WBStoryPublishPanel> *)arg1 didPressCoverButton:(UIButton *)arg2;
- (void)publishPanel:(UIView<WBStoryPublishPanel> *)arg1 didSelectedGoods:(NSArray *)arg2;
- (void)publishPanel:(UIView<WBStoryPublishPanel> *)arg1 didPressBackContinueButton:(UIButton *)arg2;
- (void)publishPanel:(UIView<WBStoryPublishPanel> *)arg1 didSelectGoods:(NSArray *)arg2;
- (void)publishPanel:(UIView<WBStoryPublishPanel> *)arg1 didDeleteChallenge:(WBStoryChallengeModel *)arg2;
- (void)publishPanel:(UIView<WBStoryPublishPanel> *)arg1 didPressSaveDraftButton:(UIButton *)arg2;
- (void)publishPanel:(UIView<WBStoryPublishPanel> *)arg1 didSendWithInfo:(WBStoryPublishInfo *)arg2;
- (void)publishPanel:(UIView<WBStoryPublishPanel> *)arg1 didPressChallengeView:(UIView *)arg2;
- (void)publishPanel:(UIView<WBStoryPublishPanel> *)arg1 didPressImageButton:(UIButton *)arg2;
- (void)publishPanel:(UIView<WBStoryPublishPanel> *)arg1 didPressBackButton:(UIButton *)arg2;
- (void)publishPanel:(UIView<WBStoryPublishPanel> *)arg1 didPressCloseButton:(UIButton *)arg2;
- (void)publishPanel:(UIView<WBStoryPublishPanel> *)arg1 didPressBrushButton:(UIButton *)arg2;
- (void)publishPanel:(UIView<WBStoryPublishPanel> *)arg1 didPressFilterButton:(UIButton *)arg2;
- (void)publishPanel:(UIView<WBStoryPublishPanel> *)arg1 didPressVoiceButton:(UIButton *)arg2;
- (void)publishPanel:(UIView<WBStoryPublishPanel> *)arg1 didPressMusicButton:(UIButton *)arg2;
- (void)publishPanel:(UIView<WBStoryPublishPanel> *)arg1 didPressSaveButton:(UIButton *)arg2;
- (void)publishPanel:(UIView<WBStoryPublishPanel> *)arg1 didPressSendButton:(UIButton *)arg2;
- (void)publishPanel:(UIView<WBStoryPublishPanel> *)arg1 didPressTextButton:(UIButton *)arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMChatBaseScrollVC.h"

@class CDZButton, UILabel, UIView, XMBBSAuthorInfo, XMBBSIntimateQuestion, XMBBSIntimateQuestionHeaderView, XMMCommentModalView;

@interface XMBBSIntimateQuestionDetailCtrl : XMChatBaseScrollVC
{
    unsigned long long _communityId;
    unsigned long long _questionId;
    XMBBSIntimateQuestion *_questionInfo;
    XMBBSAuthorInfo *_myInfo;
    XMBBSIntimateQuestionHeaderView *_headerView;
    UIView *_bottomHolderView;
    CDZButton *_voiceButton;
    CDZButton *_textButton;
    UILabel *_replaceAnswerLabel;
    XMMCommentModalView *_commentModalView;
}

@property(retain, nonatomic) XMMCommentModalView *commentModalView; // @synthesize commentModalView=_commentModalView;
@property(retain, nonatomic) UILabel *replaceAnswerLabel; // @synthesize replaceAnswerLabel=_replaceAnswerLabel;
@property(retain, nonatomic) CDZButton *textButton; // @synthesize textButton=_textButton;
@property(retain, nonatomic) CDZButton *voiceButton; // @synthesize voiceButton=_voiceButton;
@property(retain, nonatomic) UIView *bottomHolderView; // @synthesize bottomHolderView=_bottomHolderView;
@property(retain, nonatomic) XMBBSIntimateQuestionHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) XMBBSAuthorInfo *myInfo; // @synthesize myInfo=_myInfo;
@property(retain, nonatomic) XMBBSIntimateQuestion *questionInfo; // @synthesize questionInfo=_questionInfo;
@property(nonatomic) unsigned long long questionId; // @synthesize questionId=_questionId;
@property(nonatomic) unsigned long long communityId; // @synthesize communityId=_communityId;
- (void).cxx_destruct;
- (_Bool)isMyQuestion;
- (void)commentWithText:(id)arg1 node:(id)arg2;
- (_Bool)shouldShowEmptyView;
- (void)requestMoreData:(_Bool)arg1 showLoadingHud:(_Bool)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)intimateQuestionHeaderViewDidTapFollowImageView:(id)arg1;
- (void)intimateQuestionHeaderViewDidTapAvatarImageView:(id)arg1;
- (void)doRealIgnoreQuesiton;
- (void)clickTextButton:(id)arg1;
- (void)clickVoiceButton:(id)arg1;
- (void)clickNoMoreButton:(id)arg1;
- (void)clickRightButton:(id)arg1;
- (id)loggerPropertiesDictionay;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)didInitialize;

@end


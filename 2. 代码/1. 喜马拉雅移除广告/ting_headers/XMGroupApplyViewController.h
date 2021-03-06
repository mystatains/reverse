//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseTabelVC.h"

#import "HPGrowingTextViewDelegate-Protocol.h"

@class HPGrowingTextView, NSString, UIButton;

@interface XMGroupApplyViewController : XMBaseTabelVC <HPGrowingTextViewDelegate>
{
    _Bool _inRequest;
    unsigned long long _groupId;
    NSString *_joinGroupVerifyQuestion;
    HPGrowingTextView *_answerInputField;
    UIButton *_applyButton;
}

@property(nonatomic) _Bool inRequest; // @synthesize inRequest=_inRequest;
@property(retain, nonatomic) UIButton *applyButton; // @synthesize applyButton=_applyButton;
@property(retain, nonatomic) HPGrowingTextView *answerInputField; // @synthesize answerInputField=_answerInputField;
@property(retain, nonatomic) NSString *joinGroupVerifyQuestion; // @synthesize joinGroupVerifyQuestion=_joinGroupVerifyQuestion;
@property(nonatomic) unsigned long long groupId; // @synthesize groupId=_groupId;
- (void).cxx_destruct;
- (void)growingTextViewDidChange:(id)arg1;
- (id)checkInput;
- (void)applyToJoinGroup;
- (void)updateApplyButton;
- (void)didTap;
- (void)buildUI;
- (void)viewDidLoad;

@end


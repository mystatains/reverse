//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXModel.h"

#import "YXRedPacketModelProtocol-Protocol.h"

@class NSDictionary, NSString;

@interface YXRedPacketModel : YXModel <YXRedPacketModelProtocol>
{
    unsigned long long redPacketType;
    long long _account;
    long long _condition;
    long long _countDown;
    long long _currency;
    long long _gift;
    long long _redPacketId;
    NSString *_memberId;
    NSString *_nickName;
    NSString *_avatar;
    long long _ytypevt;
    long long _number;
    long long _property;
    long long _receiveStatus;
    long long _type;
    long long _cardNumber;
    long long _cardAccount;
    NSString *_scId;
    NSString *_anchorNickname;
    long long _sendMemberWealthLevel;
    NSString *_h5Url;
    NSString *_ext;
    NSDictionary *_extDict;
    NSString *_rmbAccount;
    long long _rmbNumber;
    NSString *_redPacketCornerGrabIcon;
    NSString *_redPacketCornerCountDownIcon;
    NSString *_taskType;
    NSString *_taskId;
    NSString *_conditionTips;
    NSString *_conditionProgress;
    NSString *_conditionStatus;
    NSString *_redPacketPassword;
}

@property(copy, nonatomic) NSString *redPacketPassword; // @synthesize redPacketPassword=_redPacketPassword;
@property(copy, nonatomic) NSString *conditionStatus; // @synthesize conditionStatus=_conditionStatus;
@property(copy, nonatomic) NSString *conditionProgress; // @synthesize conditionProgress=_conditionProgress;
@property(copy, nonatomic) NSString *conditionTips; // @synthesize conditionTips=_conditionTips;
@property(copy, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
@property(copy, nonatomic) NSString *taskType; // @synthesize taskType=_taskType;
@property(copy, nonatomic) NSString *redPacketCornerCountDownIcon; // @synthesize redPacketCornerCountDownIcon=_redPacketCornerCountDownIcon;
@property(copy, nonatomic) NSString *redPacketCornerGrabIcon; // @synthesize redPacketCornerGrabIcon=_redPacketCornerGrabIcon;
@property(nonatomic) long long rmbNumber; // @synthesize rmbNumber=_rmbNumber;
@property(retain, nonatomic) NSString *rmbAccount; // @synthesize rmbAccount=_rmbAccount;
@property(retain, nonatomic) NSDictionary *extDict; // @synthesize extDict=_extDict;
@property(copy, nonatomic) NSString *ext; // @synthesize ext=_ext;
@property(copy, nonatomic) NSString *h5Url; // @synthesize h5Url=_h5Url;
@property(nonatomic) long long sendMemberWealthLevel; // @synthesize sendMemberWealthLevel=_sendMemberWealthLevel;
@property(copy, nonatomic) NSString *anchorNickname; // @synthesize anchorNickname=_anchorNickname;
@property(copy, nonatomic) NSString *scId; // @synthesize scId=_scId;
@property(nonatomic) long long cardAccount; // @synthesize cardAccount=_cardAccount;
@property(nonatomic) long long cardNumber; // @synthesize cardNumber=_cardNumber;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long receiveStatus; // @synthesize receiveStatus=_receiveStatus;
@property(nonatomic) long long property; // @synthesize property=_property;
@property(nonatomic) long long number; // @synthesize number=_number;
@property(nonatomic) long long ytypevt; // @synthesize ytypevt=_ytypevt;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *memberId; // @synthesize memberId=_memberId;
@property(nonatomic) long long redPacketId; // @synthesize redPacketId=_redPacketId;
@property(nonatomic) long long gift; // @synthesize gift=_gift;
@property(nonatomic) long long currency; // @synthesize currency=_currency;
@property(nonatomic) long long countDown; // @synthesize countDown=_countDown;
@property(nonatomic) long long condition; // @synthesize condition=_condition;
@property(nonatomic) long long account; // @synthesize account=_account;
@property(nonatomic) unsigned long long redPacketType; // @synthesize redPacketType;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


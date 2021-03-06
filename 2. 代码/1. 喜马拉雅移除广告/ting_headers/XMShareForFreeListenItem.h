//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSString, NSURL;

@interface XMShareForFreeListenItem : XMModel
{
    _Bool _didUnlock;
    _Bool _didGet;
    _Bool _duringActivity;
    double _expiredTime;
    long long _status;
    NSString *_title;
    NSString *_subtitle;
    NSString *_buttonText;
    NSString *_urlStr;
    NSURL *_backGroundPictureUrl;
    NSString *_templateUrl;
    NSString *_alertTitle;
    NSString *_alertSubtitle;
    NSString *_alertButtonText;
    NSString *_alertUrlStr;
    unsigned long long _couponId;
}

+ (id)timeStringFormExpireTime2:(long long)arg1;
+ (id)timeStringFormExpireTime:(long long)arg1 andMachineExpireTime:(long long)arg2;
+ (id)unlockDicFromActivities:(id)arg1;
+ (id)shareForFreeListenItemWithAlbumWithDic:(id)arg1;
+ (id)shareForFreeListenItemWithTrackBuyAlbumWithDic:(id)arg1;
+ (id)shareForFreeListenItemWithPlayPageDic:(id)arg1;
@property(nonatomic) unsigned long long couponId; // @synthesize couponId=_couponId;
@property(copy, nonatomic) NSString *alertUrlStr; // @synthesize alertUrlStr=_alertUrlStr;
@property(copy, nonatomic) NSString *alertButtonText; // @synthesize alertButtonText=_alertButtonText;
@property(copy, nonatomic) NSString *alertSubtitle; // @synthesize alertSubtitle=_alertSubtitle;
@property(copy, nonatomic) NSString *alertTitle; // @synthesize alertTitle=_alertTitle;
@property(copy, nonatomic) NSString *templateUrl; // @synthesize templateUrl=_templateUrl;
@property(copy, nonatomic) NSURL *backGroundPictureUrl; // @synthesize backGroundPictureUrl=_backGroundPictureUrl;
@property(copy, nonatomic) NSString *urlStr; // @synthesize urlStr=_urlStr;
@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool duringActivity; // @synthesize duringActivity=_duringActivity;
@property(nonatomic) _Bool didGet; // @synthesize didGet=_didGet;
@property(nonatomic) _Bool didUnlock; // @synthesize didUnlock=_didUnlock;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) double expiredTime; // @synthesize expiredTime=_expiredTime;
- (void).cxx_destruct;
- (void)updateTestData;

@end


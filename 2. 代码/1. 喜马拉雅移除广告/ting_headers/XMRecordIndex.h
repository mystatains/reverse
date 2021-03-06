//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSoundItem.h"

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSString, XMRecordBGMHistManager, XMSoundActModel;

@interface XMRecordIndex : XMSoundItem <NSCopying, NSMutableCopying>
{
    _Bool _isUploading;
    _Bool _rightCheckCode;
    _Bool _showSelectCommunity;
    long long _audioId;
    long long _formId;
    NSMutableArray *_coverIds;
    NSDictionary *_shareSettings;
    NSArray *_imagesDataArray;
    NSString *_images;
    double _queryDelay;
    NSString *_recordId;
    NSString *_shareContent;
    NSString *_checkUUID;
    NSString *_checkCode;
    NSArray *_covers;
    long long _requestId;
    NSString *_relatedId;
    XMSoundActModel *_soundAct;
    NSString *_srcInfoStr;
    long long _formatType;
    XMRecordBGMHistManager *_bgmManager;
    NSString *_insetTimeLine;
    NSString *_classId;
    long long _themeId;
    long long _sellGoodId;
    NSString *_sellGoodTitle;
    NSString *_sellGoodUrl;
    NSString *_topicTitle;
    unsigned long long _communityId;
}

@property(nonatomic) _Bool showSelectCommunity; // @synthesize showSelectCommunity=_showSelectCommunity;
@property(nonatomic) unsigned long long communityId; // @synthesize communityId=_communityId;
@property(retain, nonatomic) NSString *topicTitle; // @synthesize topicTitle=_topicTitle;
@property(retain, nonatomic) NSString *sellGoodUrl; // @synthesize sellGoodUrl=_sellGoodUrl;
@property(retain, nonatomic) NSString *sellGoodTitle; // @synthesize sellGoodTitle=_sellGoodTitle;
@property(nonatomic) long long sellGoodId; // @synthesize sellGoodId=_sellGoodId;
@property(nonatomic) long long themeId; // @synthesize themeId=_themeId;
@property(retain, nonatomic) NSString *classId; // @synthesize classId=_classId;
@property(retain, nonatomic) NSString *insetTimeLine; // @synthesize insetTimeLine=_insetTimeLine;
@property(retain, nonatomic) XMRecordBGMHistManager *bgmManager; // @synthesize bgmManager=_bgmManager;
@property(nonatomic) long long formatType; // @synthesize formatType=_formatType;
@property(retain, nonatomic) NSString *srcInfoStr; // @synthesize srcInfoStr=_srcInfoStr;
@property(retain, nonatomic) XMSoundActModel *soundAct; // @synthesize soundAct=_soundAct;
@property(retain, nonatomic) NSString *relatedId; // @synthesize relatedId=_relatedId;
@property(nonatomic) long long requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) NSArray *covers; // @synthesize covers=_covers;
@property(nonatomic) _Bool rightCheckCode; // @synthesize rightCheckCode=_rightCheckCode;
@property(retain, nonatomic) NSString *checkCode; // @synthesize checkCode=_checkCode;
@property(retain, nonatomic) NSString *checkUUID; // @synthesize checkUUID=_checkUUID;
@property(nonatomic) _Bool isUploading; // @synthesize isUploading=_isUploading;
@property(retain, nonatomic) NSString *shareContent; // @synthesize shareContent=_shareContent;
@property(retain, nonatomic) NSString *recordId; // @synthesize recordId=_recordId;
@property(nonatomic) double queryDelay; // @synthesize queryDelay=_queryDelay;
@property(retain, nonatomic) NSString *images; // @synthesize images=_images;
@property(retain, nonatomic) NSArray *imagesDataArray; // @synthesize imagesDataArray=_imagesDataArray;
@property(retain, nonatomic) NSDictionary *shareSettings; // @synthesize shareSettings=_shareSettings;
@property(retain, nonatomic) NSMutableArray *coverIds; // @synthesize coverIds=_coverIds;
@property(nonatomic) long long formId; // @synthesize formId=_formId;
@property(nonatomic) long long audioId; // @synthesize audioId=_audioId;
- (void).cxx_destruct;
- (id)dictionaryWithUploadInfo;
- (void)updatePropertiesFromEditCheckDictionary:(id)arg1;
- (void)updatePropertiesFromUploadFormDictionary:(id)arg1;
- (void)updatePropertiesFromMeSoundDictionary:(id)arg1;
- (id)tempName;
- (id)stateString;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end


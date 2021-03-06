//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSURL, RNModuleConfigEnvironment;

@interface RNKitConfiguration : NSObject
{
    NSString *_appKey;
    NSString *_appChannel;
    NSString *_manifestFetchApiUrlOnline;
    NSString *_manifestFetchApiUrlTest;
    NSURL *_fallbackManifestFileUrl;
    NSURL *_fallbackBaseBundleUrl;
    NSString *_dataUploadChannelCode;
    NSString *_dataUploadEncryptKey;
    NSString *_dataUploadConfigAppId;
    NSString *_userUid;
    NSNumber *_poolSize;
    CDUnknownBlockType _commonPropsFetcher;
    RNModuleConfigEnvironment *_environment;
}

@property(retain, nonatomic) RNModuleConfigEnvironment *environment; // @synthesize environment=_environment;
@property(copy, nonatomic) CDUnknownBlockType commonPropsFetcher; // @synthesize commonPropsFetcher=_commonPropsFetcher;
@property(retain, nonatomic) NSNumber *poolSize; // @synthesize poolSize=_poolSize;
@property(copy, nonatomic) NSString *userUid; // @synthesize userUid=_userUid;
@property(copy, nonatomic) NSString *dataUploadConfigAppId; // @synthesize dataUploadConfigAppId=_dataUploadConfigAppId;
@property(copy, nonatomic) NSString *dataUploadEncryptKey; // @synthesize dataUploadEncryptKey=_dataUploadEncryptKey;
@property(copy, nonatomic) NSString *dataUploadChannelCode; // @synthesize dataUploadChannelCode=_dataUploadChannelCode;
@property(copy, nonatomic) NSURL *fallbackBaseBundleUrl; // @synthesize fallbackBaseBundleUrl=_fallbackBaseBundleUrl;
@property(copy, nonatomic) NSURL *fallbackManifestFileUrl; // @synthesize fallbackManifestFileUrl=_fallbackManifestFileUrl;
@property(copy, nonatomic) NSString *manifestFetchApiUrlTest; // @synthesize manifestFetchApiUrlTest=_manifestFetchApiUrlTest;
@property(copy, nonatomic) NSString *manifestFetchApiUrlOnline; // @synthesize manifestFetchApiUrlOnline=_manifestFetchApiUrlOnline;
@property(copy, nonatomic) NSString *appChannel; // @synthesize appChannel=_appChannel;
@property(copy, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
- (void).cxx_destruct;
- (id)init;

@end


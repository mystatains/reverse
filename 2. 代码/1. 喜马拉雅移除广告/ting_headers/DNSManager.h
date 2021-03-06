//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, WBDNSConfigManager;
@protocol HttpdnsLoggerDelegate, OS_dispatch_semaphore;

@interface DNSManager : NSObject
{
    WBDNSConfigManager *_configMgr;
    struct _opaque_pthread_mutex_t mLock;
    NSObject<OS_dispatch_semaphore> *_getIpsetSemaphore;
    NSObject<OS_dispatch_semaphore> *_insertIpsetSemaphore;
    _Bool _needIPV6;
    NSMutableArray *_checkedIpArr;
    NSMutableArray *_tmpCheckedIpArr;
    NSMutableDictionary *_checkedDomains;
    id <HttpdnsLoggerDelegate> _httpdnsLoggerDelegate;
    NSString *_checkIPUrl;
    NSMutableArray *_requestedInitIPs;
    NSString *_configBackupUrl;
    NSMutableArray *_checkIpFailedArr;
    NSMutableDictionary *_blackList;
    NSMutableDictionary *_requestedIps;
}

+ (_Bool)isIpCheck:(id)arg1;
+ (_Bool)isOnlineEnvironment;
+ (id)sharedDNSManager;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSMutableDictionary *requestedIps; // @synthesize requestedIps=_requestedIps;
@property(retain, nonatomic) NSMutableDictionary *blackList; // @synthesize blackList=_blackList;
@property(retain, nonatomic) NSMutableArray *checkIpFailedArr; // @synthesize checkIpFailedArr=_checkIpFailedArr;
@property(retain, nonatomic) NSString *configBackupUrl; // @synthesize configBackupUrl=_configBackupUrl;
@property(retain, nonatomic) NSMutableArray *requestedInitIPs; // @synthesize requestedInitIPs=_requestedInitIPs;
@property(nonatomic) _Bool needIPV6; // @synthesize needIPV6=_needIPV6;
@property(copy, nonatomic) NSString *checkIPUrl; // @synthesize checkIPUrl=_checkIPUrl;
@property(nonatomic) __weak id <HttpdnsLoggerDelegate> httpdnsLoggerDelegate; // @synthesize httpdnsLoggerDelegate=_httpdnsLoggerDelegate;
@property(retain, nonatomic) NSMutableDictionary *checkedDomains; // @synthesize checkedDomains=_checkedDomains;
@property(retain, nonatomic) NSMutableArray *tmpCheckedIpArr; // @synthesize tmpCheckedIpArr=_tmpCheckedIpArr;
@property(retain, nonatomic) NSMutableArray *checkedIpArr; // @synthesize checkedIpArr=_checkedIpArr;
- (void).cxx_destruct;
- (void)updateGatewayCheckTime:(_Bool)arg1;
- (void)updateIDCOrderWithConfig:(id)arg1;
- (_Bool)isAllProtocolSwitchEffect;
- (void)setAllProtocolSwitchEffect:(_Bool)arg1;
- (id)protocolForDomainInConfig:(id)arg1;
- (id)protocolForDomain:(id)arg1;
- (void)setProtocol:(id)arg1 forDomain:(id)arg2;
- (void)clearDB;
- (_Bool)isConfigCacheEffect;
- (void)clearCheckIps;
- (void)generateCheckIpUrlWithUrl:(id)arg1;
- (void)clearBlackList;
- (_Bool)isInBlackList:(id)arg1;
- (void)insertIntoBlackList:(id)arg1 domain:(id)arg2;
- (void)printVersionLog;
- (int)getFailedIpClearInterval;
- (id)getLibBackupDomains:(id)arg1;
- (_Bool)isDomainOk:(id)arg1;
- (_Bool)isHttpdnsSwitchOn;
- (int)ipRetryCount;
- (void)startRequestConfigData;
- (id)getSupportDomainArr;
- (void)setUploadUrl:(id)arg1;
- (void)setConfigDataUrl:(id)arg1 backupUrl:(id)arg2;
- (void)requestConfigWithBackupUrl:(id)arg1;
- (void)setCookie:(id)arg1;
- (id)requestConvertedUrlWithDomain:(id)arg1 requestedHosts:(id)arg2;
- (void)sendHttpdnsLogWithDic:(id)arg1;
- (void)saveRealCheck:(id)arg1 ip:(id)arg2 result:(_Bool)arg3;
- (_Bool)isNeedConvert:(id)arg1 ip:(id)arg2;
- (void)cacheCheckIpFailed:(id)arg1;
- (_Bool)isIpCheckedFailed:(id)arg1;
- (void)saveCheckedIp:(id)arg1;
- (_Bool)isIpChecked:(id)arg1;
- (void)loadProperties;
- (void)initialize;
- (void)dealloc;
- (id)init;
- (id)requestIpFromHttpDnsLib:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


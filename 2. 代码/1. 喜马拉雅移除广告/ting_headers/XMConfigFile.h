//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString;
@protocol XMConfigFileDelegate;

@interface XMConfigFile : NSObject
{
    unsigned long long _downloadCnt;
    _Bool _isQueryConfigFileOk;
    id <XMConfigFileDelegate> _configFileDelegate;
    NSDictionary *_configFileContent;
    NSString *_configFileDir;
    NSDictionary *_localConfigFileDic;
    NSArray *_fileDownloadArr;
    NSMutableDictionary *_downloadReqDic;
}

+ (id)getSignatureParamString:(id)arg1 type:(_Bool)arg2;
+ (id)bundleReleaseVersion;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedConfigFile;
@property(retain, nonatomic) NSMutableDictionary *downloadReqDic; // @synthesize downloadReqDic=_downloadReqDic;
@property(retain, nonatomic) NSArray *fileDownloadArr; // @synthesize fileDownloadArr=_fileDownloadArr;
@property(retain, nonatomic) NSDictionary *localConfigFileDic; // @synthesize localConfigFileDic=_localConfigFileDic;
@property(copy, nonatomic) NSString *configFileDir; // @synthesize configFileDir=_configFileDir;
@property(retain, nonatomic) NSDictionary *configFileContent; // @synthesize configFileContent=_configFileContent;
@property(nonatomic) _Bool isQueryConfigFileOk; // @synthesize isQueryConfigFileOk=_isQueryConfigFileOk;
@property(nonatomic) __weak id <XMConfigFileDelegate> configFileDelegate; // @synthesize configFileDelegate=_configFileDelegate;
- (void).cxx_destruct;
- (void)writeConfigFileSample;
- (void)deleteFormerVersionFile;
- (id)loadConfigFileContentWithFileName:(id)arg1;
- (void)readConfigFile;
- (void)saveConfigFileData:(id)arg1 withName:(id)arg2;
- (void)succeedConfigFileDownload;
- (void)checkAfterDownload:(id)arg1 status:(_Bool)arg2;
- (void)downloadConfigFile:(id)arg1;
- (id)getQueryConfigFileUrl;
- (void)checkAfterQueryConfigFile:(id)arg1;
- (void)queryConfigFile;
- (void)loadLocalConfigFileDic;
- (void)saveConfigFileDic:(id)arg1;
- (id)getFileListPath;
- (id)getConfigFilePath;
- (id)getConfigFoldersPath;
- (void)initConfigFileDir;
- (void)startConfigFile;
- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


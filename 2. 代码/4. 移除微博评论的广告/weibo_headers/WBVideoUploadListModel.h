//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSError, NSObject, NSString, UIImage, WBSendMblogJob, WBVideoUploadCheckStatusOperation;
@protocol OS_dispatch_queue;

@interface WBVideoUploadListModel : WBModelObject
{
    NSObject<OS_dispatch_queue> *_progressUpdateQueue;
    _Bool _isAFoldModel;
    NSString *_userId;
    unsigned long long _jobId;
    unsigned long long _status;
    unsigned long long _checkState;
    UIImage *_thumImage;
    double _totalProgress;
    unsigned long long _contentSize;
    unsigned long long _uploadFileSize;
    long long _foldModelDisplayNum;
    WBSendMblogJob *_job;
    NSError *_checkError;
    NSString *_fileId;
    WBVideoUploadCheckStatusOperation *_operation;
    NSString *_mediaId;
    long long _state;
    NSString *_successExtra;
    NSString *_thumImgPath;
    double _lastTime;
    NSString *_surplusTime;
    double _lastTotalProgress;
    double _lastCompressProgress;
    double _compressProgress;
    double _lasUploadProgress;
    double _uploadProgress;
    double _calTotalTime;
}

@property(nonatomic) double calTotalTime; // @synthesize calTotalTime=_calTotalTime;
@property(nonatomic) double uploadProgress; // @synthesize uploadProgress=_uploadProgress;
@property(nonatomic) double lasUploadProgress; // @synthesize lasUploadProgress=_lasUploadProgress;
@property(nonatomic) double compressProgress; // @synthesize compressProgress=_compressProgress;
@property(nonatomic) double lastCompressProgress; // @synthesize lastCompressProgress=_lastCompressProgress;
@property(nonatomic) double lastTotalProgress; // @synthesize lastTotalProgress=_lastTotalProgress;
@property(copy, nonatomic) NSString *surplusTime; // @synthesize surplusTime=_surplusTime;
@property(nonatomic) double lastTime; // @synthesize lastTime=_lastTime;
@property(retain, nonatomic) NSString *thumImgPath; // @synthesize thumImgPath=_thumImgPath;
@property(retain, nonatomic) NSString *successExtra; // @synthesize successExtra=_successExtra;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(retain, nonatomic) WBVideoUploadCheckStatusOperation *operation; // @synthesize operation=_operation;
@property(copy, nonatomic) NSString *fileId; // @synthesize fileId=_fileId;
@property(retain, nonatomic) NSError *checkError; // @synthesize checkError=_checkError;
@property(retain, nonatomic) WBSendMblogJob *job; // @synthesize job=_job;
@property(nonatomic) long long foldModelDisplayNum; // @synthesize foldModelDisplayNum=_foldModelDisplayNum;
@property(nonatomic) _Bool isAFoldModel; // @synthesize isAFoldModel=_isAFoldModel;
@property(nonatomic) unsigned long long uploadFileSize; // @synthesize uploadFileSize=_uploadFileSize;
@property(nonatomic) unsigned long long contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) double totalProgress; // @synthesize totalProgress=_totalProgress;
@property(retain, nonatomic) UIImage *thumImage; // @synthesize thumImage=_thumImage;
@property(nonatomic) unsigned long long checkState; // @synthesize checkState=_checkState;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) unsigned long long jobId; // @synthesize jobId=_jobId;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (void)clean;
- (id)jobErrorString;
- (id)surplusDisplayTime:(double)arg1;
- (void)updateUploadTimeSurplus;
- (void)updateCompressTimeSurplus;
- (void)setSveProgress:(double)arg1;
@property(readonly, copy, nonatomic) NSString *statusTextColor;
@property(readonly, nonatomic) unsigned long long accessoryStyle;
@property(readonly, copy, nonatomic) NSString *progressText;
@property(readonly, copy, nonatomic) NSString *statusText;
- (id)dictionaryRepresentation;
- (_Bool)updateWithDictionary:(id)arg1;
- (id)init;

@end


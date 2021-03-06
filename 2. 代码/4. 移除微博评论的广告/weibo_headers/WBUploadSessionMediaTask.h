//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBUploadSessionTask.h"

#import "WBMediaItemUploadFlowSessionDelegate-Protocol.h"

@class NSString, WBMediaItemUploadFlowSession, WBMediaUploadContentSource, WBUploadSessionMediaOption;
@protocol WBUploadSessionMediaTaskDelegate;

@interface WBUploadSessionMediaTask : WBUploadSessionTask <WBMediaItemUploadFlowSessionDelegate>
{
    WBMediaUploadContentSource *_source;
    struct {
        unsigned int uploadLog:1;
        unsigned int finishProcessing:1;
        unsigned int complete:1;
    } _onceGuard;
    WBUploadSessionMediaOption *_option;
    unsigned long long _status;
    id <WBUploadSessionMediaTaskDelegate> _delegate;
    CDUnknownBlockType _progressHandler;
    WBMediaItemUploadFlowSession *_flowSession;
    CDUnknownBlockType _completionHandler;
}

+ (id)defaultCachePathForContentSource:(id)arg1 customCacheDirectory:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) WBMediaItemUploadFlowSession *flowSession; // @synthesize flowSession=_flowSession;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(nonatomic) __weak id <WBUploadSessionMediaTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(readonly, nonatomic) WBUploadSessionMediaOption *option; // @synthesize option=_option;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)progress;
- (void)_finishPreprocessingWithError:(id)arg1;
- (void)uploadLog;
- (void)uploadProcessingLog;
- (void)mediaItemUploadFlowSessionDidFinishPreprocessing:(id)arg1;
- (void)mediaItemUploadFlowSession:(id)arg1 didFailWithError:(id)arg2;
- (void)mediaItemUploadFlowSession:(id)arg1 didFinishWithResult:(id)arg2;
- (void)mediaItemUploadFlowSessionDidCancel:(id)arg1;
- (void)mediaItemUploadFlowSessionDidStartUploading:(id)arg1;
- (void)mediaItemUploadFlowSessionDidFinishProcessing:(id)arg1;
- (void)mediaItemUploadFlowSessionDidStartProcessing:(id)arg1;
- (void)mediaItemUploadFlowSessionDidStart:(id)arg1;
- (void)cancel;
- (void)resume;
- (id)flowSessionWithContentSource:(id)arg1;
- (void)dealloc;
- (id)initWithAssetIdentifier:(id)arg1 option:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithFilePath:(id)arg1 option:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithContentSource:(id)arg1 option:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)defaultCachePathForContentSource:(id)arg1;
- (id)flowSessionWithContentSource:(id)arg1;
- (id)mediaOptionFromUploadOption:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


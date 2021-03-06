//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMMAStatisticsReporterProtocol-Protocol.h"
#import "XMMAStatisticsTriggerDelegate-Protocol.h"

@class NSDictionary, NSString;
@protocol OS_dispatch_queue, XMMAStatisticsMermaidReporterDelegate, XMMAStatisticsTriggerProtocol;

@interface XMMAStatisticsMermaidReporter : NSObject <XMMAStatisticsTriggerDelegate, XMMAStatisticsReporterProtocol>
{
    id <XMMAStatisticsTriggerProtocol> _trigger;
    NSString *_serverUrl;
    NSString *_encryptKey;
    NSObject<OS_dispatch_queue> *_workQueue;
    id <XMMAStatisticsMermaidReporterDelegate> _delegate;
    NSDictionary *_additionGlobalParams;
    NSString *_deviceId;
}

@property(retain, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(retain, nonatomic) NSDictionary *additionGlobalParams; // @synthesize additionGlobalParams=_additionGlobalParams;
@property(nonatomic) __weak id <XMMAStatisticsMermaidReporterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)statisticsTrigger:(id)arg1 shouldReport:(id)arg2;
- (id)globalParameters;
- (id)encryptData:(id)arg1;
- (id)reportRequestPostBodyGZipData:(id)arg1 error:(id *)arg2;
- (id)reportRequestPostBodyJsonData:(id)arg1 error:(id *)arg2;
- (id)serializeRecords:(id)arg1;
- (void)sendXDCSReportRequest:(id)arg1 postBody:(id)arg2 completed:(CDUnknownBlockType)arg3;
- (void)handlerError:(id)arg1;
- (void)report:(id)arg1;
- (id)initWithTrigger:(id)arg1 serverUrl:(id)arg2 encryptKey:(id)arg3 workQueue:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


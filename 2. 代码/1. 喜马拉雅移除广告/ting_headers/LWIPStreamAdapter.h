//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSStreamDelegate-Protocol.h"

@class AQHAP, NSString, StreamSource;
@protocol deviceDelegate;

@interface LWIPStreamAdapter : NSObject <NSStreamDelegate>
{
    StreamSource *_streamSource;
    AQHAP<deviceDelegate> *_hap;
}

@property(retain) AQHAP<deviceDelegate> *hap; // @synthesize hap=_hap;
@property(retain, nonatomic) StreamSource *streamSource; // @synthesize streamSource=_streamSource;
- (void).cxx_destruct;
- (int)readData:(char *)arg1;
- (void)writeData:(unsigned char)arg1;
- (void)clearStreamSource;
- (void)setupAdapterWithHAP:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


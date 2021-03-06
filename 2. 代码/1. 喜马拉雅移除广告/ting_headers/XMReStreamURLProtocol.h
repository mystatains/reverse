//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMReSessionURLProtocol.h"

#import "NSStreamDelegate-Protocol.h"
#import "XMReSessionURLProtocolDelegate-Protocol.h"

@class NSHTTPURLResponse, NSInputStream, NSMutableData, NSString, NSURLRequest;
@protocol NSURLProtocolClient;

@interface XMReStreamURLProtocol : XMReSessionURLProtocol <NSStreamDelegate, XMReSessionURLProtocolDelegate>
{
    int _compression;
    struct __CFHTTPMessage *_httpMessage;
    NSHTTPURLResponse *_urlResponse;
    NSMutableData *_buffer;
    id <NSURLProtocolClient> _client;
    NSURLRequest *_request;
    NSInputStream *_httpStream;
}

@property(retain, nonatomic) NSInputStream *httpStream; // @synthesize httpStream=_httpStream;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) id <NSURLProtocolClient> client; // @synthesize client=_client;
@property(retain, nonatomic) NSMutableData *buffer; // @synthesize buffer=_buffer;
@property(retain, nonatomic) NSHTTPURLResponse *urlResponse; // @synthesize urlResponse=_urlResponse;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didRequestCached:(id)arg2;
- (void)connection:(id)arg1 wasRedirectedToRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2 cacheStoragePolicy:(unsigned long long)arg3;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)handleCookiesWithURLResponse:(id)arg1;
- (struct __CFHTTPMessage *)newMessageWithURLRequest:(id)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (_Bool)processRespondHeader:(id)arg1;
- (void)httpStreamClose;
- (void)httpStreamOpen;
- (void)createHttpStream;
- (id)initWithNSURLProtocol:(id)arg1 httpMessge:(struct __CFHTTPMessage *)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


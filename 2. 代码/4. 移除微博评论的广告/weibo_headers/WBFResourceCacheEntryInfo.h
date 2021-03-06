//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL;

@interface WBFResourceCacheEntryInfo : NSObject
{
    NSURL *_url;
    NSString *_cacheKey;
    NSString *_contentType;
    unsigned long long _contentLength;
    unsigned long long _downloadedLength;
    NSArray *_segments;
}

@property(retain, nonatomic) NSArray *segments; // @synthesize segments=_segments;
@property(nonatomic) unsigned long long downloadedLength; // @synthesize downloadedLength=_downloadedLength;
@property(nonatomic) unsigned long long contentLength; // @synthesize contentLength=_contentLength;
@property(retain, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;

@end


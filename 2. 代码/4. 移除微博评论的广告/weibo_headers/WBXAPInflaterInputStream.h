//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBXAPInputStream.h"

@class NSData;

@interface WBXAPInflaterInputStream : WBXAPInputStream
{
    NSData *unZippedData;
    unsigned long long offset;
    unsigned long long totalLength;
}

- (void).cxx_destruct;
- (long long)length;
- (id)uncompressZippedData:(id)arg1;
- (void)seek:(long long)arg1;
- (id)readLength:(long long)arg1;
- (id)initWithFileName:(id)arg1;

@end


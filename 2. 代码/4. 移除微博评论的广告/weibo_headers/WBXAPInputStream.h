//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WBXAPInputStream : NSObject
{
    NSData *fullData;
    unsigned long long currentOffset;
    NSData *orgData;
    NSString *_fileName;
}

+ (id)inputStreamWithFileName:(id)arg1;
@property(readonly, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
- (void).cxx_destruct;
- (void)readFully:(id)arg1 Offset:(long long)arg2 Length:(long long)arg3;
- (void)seek:(long long)arg1;
@property(readonly, nonatomic) long long length;
- (void)setRange:(long long)arg1 Length:(long long)arg2;
- (long long)readTo:(id)arg1 Offset:(long long)arg2 Length:(long long)arg3;
- (long long)readLength:(long long)arg1 To:(id)arg2;
- (id)readLength:(long long)arg1;
- (int)readByteAsInt32;
- (BOOL)readByte;
- (int)readInt32;
- (long long)readInt64;
- (id)description;
- (id)initWithFileName:(id)arg1;

@end


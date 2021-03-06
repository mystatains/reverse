//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface WBLogLevel : NSObject <NSCopying>
{
    long long _value;
    NSString *_name;
}

+ (id)levelWithName:(id)arg1 andValue:(long long)arg2;
+ (id)all;
+ (id)info;
+ (id)off;
+ (id)defaultLevel;
+ (id)analysis_throwBatch;
+ (id)analysis;
+ (id)analysis_crash;
+ (id)analysis_thirdPart;
@property(retain) NSString *name; // @synthesize name=_name;
@property long long value; // @synthesize value=_value;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (_Bool)isEqualToLevel:(id)arg1;
- (_Bool)permitToLevel:(id)arg1;
- (id)initWithName:(id)arg1 andValue:(long long)arg2;

@end


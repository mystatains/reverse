//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBMLURLRequest.h"

@class NSString;

@interface WBMLQAShareCallbackRequest : WBMLURLRequest
{
    NSString *_uid;
    long long _shareType;
    long long _shareResult;
}

@property(nonatomic) long long shareResult; // @synthesize shareResult=_shareResult;
@property(nonatomic) long long shareType; // @synthesize shareType=_shareType;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (id)path;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface XChatMessage : NSObject
{
    NSString *_msgName;
    NSData *_msgData;
}

@property(retain, nonatomic) NSData *msgData; // @synthesize msgData=_msgData;
@property(retain, nonatomic) NSString *msgName; // @synthesize msgName=_msgName;
- (void).cxx_destruct;
- (id)pbMessage;
- (_Bool)isKindOfPBClass:(Class)arg1;
- (id)bulidMessage;
- (id)initWithMsgName:(id)arg1 pbMsgData:(id)arg2;
- (id)initWithPBMessage:(id)arg1;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMPayReq.h"

@class NSString;

@interface XMPayCashierReq : XMPayReq
{
    unsigned long long _domain;
    unsigned long long _businessTypeId;
    unsigned long long _itemId;
    unsigned long long _quantity;
    NSString *_context;
    NSString *_returnUrl;
    NSString *_sign;
    unsigned long long _timestap;
}

@property(nonatomic) unsigned long long timestap; // @synthesize timestap=_timestap;
@property(copy, nonatomic) NSString *sign; // @synthesize sign=_sign;
@property(copy, nonatomic) NSString *returnUrl; // @synthesize returnUrl=_returnUrl;
@property(copy, nonatomic) NSString *context; // @synthesize context=_context;
@property(nonatomic) unsigned long long quantity; // @synthesize quantity=_quantity;
@property(nonatomic) unsigned long long itemId; // @synthesize itemId=_itemId;
@property(nonatomic) unsigned long long businessTypeId; // @synthesize businessTypeId=_businessTypeId;
@property(nonatomic) unsigned long long domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (id)init;

@end


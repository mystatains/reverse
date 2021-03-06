//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol IFlyParamMapProtocol;

@interface IFlyParam : NSObject
{
    NSMutableDictionary *_params;
    id <IFlyParamMapProtocol> _delegate;
    id _owner;
}

@property(nonatomic) id owner; // @synthesize owner=_owner;
@property(nonatomic) id <IFlyParamMapProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableDictionary *params; // @synthesize params=_params;
- (void)removeAllParams;
- (id)toString:(_Bool)arg1;
- (void)setWithKeysAndValues:(id)arg1;
- (id)valueForKey:(id)arg1;
- (_Bool)setValue:(id)arg1 forKey:(id)arg2;
- (void)setDefault;
- (void)dealloc;
- (id)init;

@end


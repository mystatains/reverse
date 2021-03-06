//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WBLogDBField : NSObject
{
    _Bool _primaryKey;
    int _field_type;
    NSString *_field_name;
    NSString *_variable_name;
}

+ (id)BlogWithName:(id)arg1 variable:(id)arg2 primaryKey:(_Bool)arg3;
+ (id)BlobWithName:(id)arg1 variable:(id)arg2;
+ (id)RealWithName:(id)arg1 variable:(id)arg2 primaryKey:(_Bool)arg3;
+ (id)RealWithName:(id)arg1 variable:(id)arg2;
+ (id)TextWithName:(id)arg1 variable:(id)arg2 primaryKey:(_Bool)arg3;
+ (id)TextWithName:(id)arg1 variable:(id)arg2;
+ (id)IntWithName:(id)arg1 variable:(id)arg2 primaryKey:(_Bool)arg3;
+ (id)IntWithName:(id)arg1 variable:(id)arg2;
@property(getter=isPrimaryKey) _Bool primaryKey; // @synthesize primaryKey=_primaryKey;
@property(retain) NSString *variable_name; // @synthesize variable_name=_variable_name;
@property int field_type; // @synthesize field_type=_field_type;
@property(retain) NSString *field_name; // @synthesize field_name=_field_name;
- (void).cxx_destruct;
- (id)valueStringWithObject:(id)arg1;
- (id)typeString;
- (id)initWithName:(id)arg1 type:(int)arg2 variable:(id)arg3 primaryKey:(_Bool)arg4;

@end


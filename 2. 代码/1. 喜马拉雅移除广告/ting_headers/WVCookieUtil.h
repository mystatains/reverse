//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WVCookieUtil : NSObject
{
}

+ (void)deleteAllCookies;
+ (void)setCookiesWithCookieMaps:(id)arg1;
+ (void)setCookiesWithCookieStrings:(id)arg1;
+ (void)setCookieWithCookieMap:(id)arg1;
+ (void)setCookieWithCookieString:(id)arg1;
+ (id)readCookies:(id)arg1;
+ (_Bool)setCookieWithDictionary:(id)arg1 forURL:(id)arg2;
+ (_Bool)setCookieWithString:(id)arg1 forURL:(id)arg2;

@end


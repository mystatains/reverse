//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, XMSPlatform, XMWebImageView;

@interface XMShareDefItem : UIView
{
    XMSPlatform *_platform;
    UIButton *_button;
    XMWebImageView *_hotBanner;
    long long _interfaceStyle;
}

@property(nonatomic) long long interfaceStyle; // @synthesize interfaceStyle=_interfaceStyle;
@property(retain, nonatomic) XMWebImageView *hotBanner; // @synthesize hotBanner=_hotBanner;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) XMSPlatform *platform; // @synthesize platform=_platform;
- (void).cxx_destruct;
- (id)initWithPlatform:(id)arg1 interfaceStyle:(long long)arg2;
- (void)dealloc;

@end


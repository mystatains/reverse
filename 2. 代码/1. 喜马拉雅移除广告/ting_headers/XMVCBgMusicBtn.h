//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMVCGraphicBtn.h"

@class NSString, XMVCCycleLabel;

@interface XMVCBgMusicBtn : XMVCGraphicBtn
{
    XMVCCycleLabel *_textlabel;
    NSString *_normalText;
}

+ (id)buttonWithItem:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) NSString *normalText; // @synthesize normalText=_normalText;
@property(retain, nonatomic) XMVCCycleLabel *textlabel; // @synthesize textlabel=_textlabel;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setupTextLabel;
- (void)setTitle:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CDZView.h"

@class NSMutableArray, XMWeKeEffectCell;

@interface XMWeKeEffectView : CDZView
{
    _Bool _isShowing;
    NSMutableArray *_dataArray;
    XMWeKeEffectCell *_effectCell;
}

@property(retain, nonatomic) XMWeKeEffectCell *effectCell; // @synthesize effectCell=_effectCell;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)hideEffect;
- (void)_showEffectWithData:(id)arg1;
- (void)showNextEffect;
- (void)showEffectWithData:(id)arg1;

@end


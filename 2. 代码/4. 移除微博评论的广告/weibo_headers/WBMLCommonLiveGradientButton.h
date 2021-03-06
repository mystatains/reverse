//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIColor, WBMLQAGradientView;

@interface WBMLCommonLiveGradientButton : UIButton
{
    UIColor *_startColor;
    UIColor *_endColor;
    WBMLQAGradientView *_gradientView;
}

@property(retain, nonatomic) WBMLQAGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) UIColor *endColor; // @synthesize endColor=_endColor;
@property(retain, nonatomic) UIColor *startColor; // @synthesize startColor=_startColor;
- (void).cxx_destruct;
- (void)updateColor;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


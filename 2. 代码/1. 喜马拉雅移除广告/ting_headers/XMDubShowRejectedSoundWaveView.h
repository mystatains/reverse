//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImageView, UILabel;

@interface XMDubShowRejectedSoundWaveView : UIView
{
    UIButton *_maskViewBtn;
    UIView *_containerView;
    UIImageView *_imageView;
    UILabel *_tipLabel;
    UILabel *_infoLabel;
    UIView *_sepLine1;
    UIView *_sepLine2;
    UIButton *_cancelBtn;
    UIButton *_confirmBtn;
    NSString *_userName;
    unsigned long long _uid;
}

@property(nonatomic) unsigned long long uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UIView *sepLine2; // @synthesize sepLine2=_sepLine2;
@property(retain, nonatomic) UIView *sepLine1; // @synthesize sepLine1=_sepLine1;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIButton *maskViewBtn; // @synthesize maskViewBtn=_maskViewBtn;
- (void).cxx_destruct;
- (void)show;
- (void)p_handleComfirm;
- (void)p_handleCancel;
- (void)p_handleMaskView;
- (void)p_dismiss;
- (void)customInit;
- (id)initWithUserName:(id)arg1 uid:(unsigned long long)arg2;

@end


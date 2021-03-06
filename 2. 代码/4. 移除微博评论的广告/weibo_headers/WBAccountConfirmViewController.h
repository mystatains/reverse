//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBViewController.h"

#import "WBLoginManagerProtocol-Protocol.h"

@class NSString, UIActivityIndicatorView, UIImageView, UILabel, WBStyleButton;

@interface WBAccountConfirmViewController : WBViewController <WBLoginManagerProtocol>
{
    NSString *_sectoken;
    NSString *_name;
    NSString *_avatarurl;
    NSString *_phoneNum;
    _Bool isInLoginManager;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UILabel *_errorLabel;
    WBStyleButton *_loginButton;
    UIActivityIndicatorView *_loginIndicatorView;
    WBStyleButton *_registerButton;
    UIActivityIndicatorView *_registerIndicatorView;
    UIImageView *_contentView;
    UIImageView *_iconImageView;
    UILabel *_nameLabel;
    UILabel *_phoneLabel;
}

@property(retain, nonatomic) UILabel *phoneLabel; // @synthesize phoneLabel=_phoneLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIImageView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIActivityIndicatorView *registerIndicatorView; // @synthesize registerIndicatorView=_registerIndicatorView;
@property(retain, nonatomic) WBStyleButton *registerButton; // @synthesize registerButton=_registerButton;
@property(retain, nonatomic) UIActivityIndicatorView *loginIndicatorView; // @synthesize loginIndicatorView=_loginIndicatorView;
@property(retain, nonatomic) WBStyleButton *loginButton; // @synthesize loginButton=_loginButton;
@property(retain, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool isInLoginManager; // @synthesize isInLoginManager;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)configSubviewsFrame;
- (void)setupSubviews;
- (void)stopRequest;
- (_Bool)canStartRequest;
- (long long)lastInterceptadDaysFromNow:(id)arg1;
- (_Bool)isSystemErrorWithCode:(int)arg1;
- (void)toastDisplayWithMessage:(id)arg1;
- (void)accountLogin:(long long)arg1;
- (void)registerBtnClick:(id)arg1;
- (void)loginBtnClick:(id)arg1;
- (void)viewDidLoad;
- (void)updatePropertyWithPara:(id)arg1 context:(id)arg2 currentStep:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


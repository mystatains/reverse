//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIImageView, UILabel, XMMiniAppOpenInfo;

@interface XMMiniAppLoadingViewController : UIViewController
{
    XMMiniAppOpenInfo *_openInfo;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
}

+ (CDUnknownBlockType)layoutBlock;
+ (void)setLayoutBlock:(CDUnknownBlockType)arg1;
+ (Class)loadViewClass;
+ (void)setLoadViewClass:(Class)arg1;
+ (void)registerLoadingView:(Class)arg1 layoutBlock:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) XMMiniAppOpenInfo *openInfo; // @synthesize openInfo=_openInfo;
- (void).cxx_destruct;
- (void)hide:(CDUnknownBlockType)arg1;
- (void)closeApp;
- (void)viewDidLoad;
- (id)initWithOpenInfo:(id)arg1;

@end


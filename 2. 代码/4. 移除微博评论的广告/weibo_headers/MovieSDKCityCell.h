//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MovieSDKSpiltLineTableViewCell.h"

@class MovieSDKDataCity;

@interface MovieSDKCityCell : MovieSDKSpiltLineTableViewCell
{
    MovieSDKDataCity *_data;
}

+ (double)preferredHeightForData:(id)arg1 cellInfo:(id)arg2 fitWidth:(double)arg3;
+ (struct UIEdgeInsets)spiltLineInset;
@property(retain, nonatomic) MovieSDKDataCity *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)bindData:(id)arg1 cellInfo:(id)arg2;
- (void)tapped;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


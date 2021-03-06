//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, NSMutableArray, UIView;
@protocol XMSpecialRecWordCellDelegate;

@interface XMSpecialRecWordCell : UITableViewCell
{
    id <XMSpecialRecWordCellDelegate> _delegate;
    NSMutableArray *_allButtons;
    NSArray *_recWords;
    UIView *_divideLine;
}

+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
@property(retain, nonatomic) UIView *divideLine; // @synthesize divideLine=_divideLine;
@property(retain, nonatomic) NSArray *recWords; // @synthesize recWords=_recWords;
@property(retain, nonatomic) NSMutableArray *allButtons; // @synthesize allButtons=_allButtons;
@property(nonatomic) __weak id <XMSpecialRecWordCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (void)buttonDidClick:(id)arg1;
- (void)setup;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


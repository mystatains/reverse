//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WBUser;

@protocol WBFollowingUserSearchViewControllerDelegate <NSObject>

@optional
- (void)refreshTopResetIfNeed:(WBUser *)arg1;
- (void)didSelectNewGroup;
- (long long)getTopResultCount;
- (void)didAddOrRemoveUserToTopResult:(WBUser *)arg1 isAdd:(_Bool)arg2;
- (_Bool)isInTopResultSet:(WBUser *)arg1;
@end


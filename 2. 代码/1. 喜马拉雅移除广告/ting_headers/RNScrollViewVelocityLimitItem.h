//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIScrollView;

@interface RNScrollViewVelocityLimitItem : NSObject
{
    UIScrollView *_target;
    struct CGPoint _velocityLimit;
}

@property(nonatomic) struct CGPoint velocityLimit; // @synthesize velocityLimit=_velocityLimit;
@property(nonatomic) __weak UIScrollView *target; // @synthesize target=_target;
- (void).cxx_destruct;
- (unsigned long long)hash;

@end


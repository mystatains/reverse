//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol WBNLFansRedPacketSendEventPresenterProtocal;

@interface WBNLFansRedPacketSendEventPresenter : NSObject
{
    id <WBNLFansRedPacketSendEventPresenterProtocal> _delegate;
}

@property(nonatomic) __weak id <WBNLFansRedPacketSendEventPresenterProtocal> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sendRedPacketResponsed:(id)arg1;
- (void)sendRedPacketWithModel:(id)arg1 andAmount:(long long)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBVideoCastingDeviceScannerListener-Protocol.h"
#import "WBVideoNetworkTypeObserverListener-Protocol.h"

@class NSArray, NSString, WBVideoCastingDeviceManager, WBVideoCastingDevicePickerHeaderView, WBVideoCastingDevicePickerTimer, WBVideoSlideInDefinitionPickerView;
@protocol WBVideoCancelable;

@interface WBVideoCastingDevicePickingSessionController : NSObject <WBVideoCastingDeviceScannerListener, WBVideoNetworkTypeObserverListener>
{
    _Bool _scanning;
    WBVideoSlideInDefinitionPickerView *_pickerView;
    WBVideoCastingDevicePickerHeaderView *_headerView;
    WBVideoCastingDeviceManager *_deviceManager;
    id <WBVideoCancelable> _scanningHandle;
    NSArray *_latestDevices;
    WBVideoCastingDevicePickerTimer *_scanningTimeout;
    WBVideoCastingDevicePickerTimer *_additionalTimeout;
    long long _currentState;
}

@property(nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) WBVideoCastingDevicePickerTimer *additionalTimeout; // @synthesize additionalTimeout=_additionalTimeout;
@property(retain, nonatomic) WBVideoCastingDevicePickerTimer *scanningTimeout; // @synthesize scanningTimeout=_scanningTimeout;
@property(nonatomic) _Bool scanning; // @synthesize scanning=_scanning;
@property(retain, nonatomic) NSArray *latestDevices; // @synthesize latestDevices=_latestDevices;
@property(retain, nonatomic) id <WBVideoCancelable> scanningHandle; // @synthesize scanningHandle=_scanningHandle;
@property(retain, nonatomic) WBVideoCastingDeviceManager *deviceManager; // @synthesize deviceManager=_deviceManager;
@property(retain, nonatomic) WBVideoCastingDevicePickerHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak WBVideoSlideInDefinitionPickerView *pickerView; // @synthesize pickerView=_pickerView;
- (void).cxx_destruct;
- (id)_resolveCurrentHotspotName;
- (void)networkTypeObserver:(id)arg1 didUpdateNetworkTypeFrom:(long long)arg2 to:(long long)arg3;
- (void)castingDeviceScanner:(id)arg1 didUpdateDevices:(id)arg2;
- (void)castingDeviceScanner:(id)arg1 didMakeDeviceActive:(id)arg2;
- (_Bool)pickerViewDidSelectItem:(id)arg1;
- (void)_updateWithCurrentState;
- (void)_didTransitionToState:(long long)arg1 fromState:(long long)arg2;
- (id)_recreateTimer;
- (_Bool)_updateState;
- (long long)_resolveState;
- (id)initWithPickerView:(id)arg1 helpAction:(CDUnknownBlockType)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


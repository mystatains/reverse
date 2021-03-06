//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CBCentralManagerDelegate-Protocol.h"

@class CBCentralManager, NSMutableArray, NSString;
@protocol BleDiscoveryDelegate;

@interface XMBleDiscovery : NSObject <CBCentralManagerDelegate>
{
    CBCentralManager *centralManager;
    _Bool pendingInit;
    _Bool _fail;
    NSMutableArray *foundPeripherals;
    NSMutableArray *connectedServices;
    id <BleDiscoveryDelegate> discoveryDelegate;
}

+ (id)sharedInstance;
@property(nonatomic) id <BleDiscoveryDelegate> discoveryDelegate; // @synthesize discoveryDelegate;
@property(retain, nonatomic) NSMutableArray *connectedServices; // @synthesize connectedServices;
@property(retain, nonatomic) NSMutableArray *foundPeripherals; // @synthesize foundPeripherals;
- (void).cxx_destruct;
- (void)setLogMode:(long long)arg1;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)clearDevices;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)disconnectPeripheral:(id)arg1;
- (void)connectPeripheral:(id)arg1;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)stopScanning;
- (void)startScanningForUUIDStrings:(id)arg1;
- (void)startScanningForUUIDString:(id)arg1;
- (void)centralManager:(id)arg1 didFailToRetrievePeripheralForUUID:(struct __CFUUID *)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didRetrievePeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didRetrieveConnectedPeripherals:(id)arg2;
- (void)removeSavedDevice:(struct __CFUUID *)arg1;
- (void)addSavedDevice:(struct __CFUUID *)arg1;
- (void)loadSavedDevices;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


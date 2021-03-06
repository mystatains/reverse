//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MKOverlay-Protocol.h"

@class NSDictionary, NSString;

@interface WBMKHeatMapOverlay : NSObject <MKOverlay>
{
    struct CLLocationCoordinate2D _center;
    NSDictionary *_pointsHeatDic;
    double _max;
    double _zoomOutMax;
    CDStruct_02837cd9 _boundingMapRect;
}

@property(nonatomic) CDStruct_02837cd9 boundingMapRect; // @synthesize boundingMapRect=_boundingMapRect;
- (void).cxx_destruct;
- (id)mapPointsWithHeatInMapRect:(CDStruct_02837cd9)arg1 atScale:(double)arg2;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (void)_setBoundingRectRegionCoordinate:(id)arg1;
- (id)initWithMapPointDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end


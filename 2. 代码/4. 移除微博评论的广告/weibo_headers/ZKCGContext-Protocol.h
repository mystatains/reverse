//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZKContext-Protocol.h"

@class NSArray, NSString, ZKCGLinearGradient, ZKCGPattern, ZKCGRadialGradient, ZKImage, ZKText;

@protocol ZKCGContext <ZKContext>
@property(readonly, nonatomic) unsigned long long height;
@property(readonly, nonatomic) unsigned long long width;
- (void)setLineDash:(NSArray *)arg1;
- (void)setGlobalCompositeOperation:(NSString *)arg1;
- (void)setGlobalAlpha:(double)arg1;
- (void)setTextBaseline:(NSString *)arg1;
- (void)setTextAlign:(NSString *)arg1;
- (void)setFont:(NSString *)arg1;
- (void)setMiterLimit:(double)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setLineJoin:(NSString *)arg1;
- (void)setLineCap:(NSString *)arg1;
- (void)setShadowOffsetY:(double)arg1;
- (void)setShadowOffsetX:(double)arg1;
- (void)setShadowBlur:(double)arg1;
- (void)setShadowColor:(NSString *)arg1;
- (void)setStrokeStyle:(id)arg1;
- (void)setFillStyle:(id)arg1;
- (void)drawText:(ZKText *)arg1 x:(double)arg2 y:(double)arg3 width:(double)arg4 height:(double)arg5;
- (void)drawImage:(ZKImage *)arg1 sx:(double)arg2 sy:(double)arg3 swidth:(double)arg4 sheight:(double)arg5 x:(double)arg6 y:(double)arg7 width:(double)arg8 height:(double)arg9;
- (double)measureText:(const char *)arg1;
- (void)strokeText:(const char *)arg1 x:(double)arg2 y:(double)arg3 maxWidth:(double)arg4;
- (void)fillText:(const char *)arg1 x:(double)arg2 y:(double)arg3 maxWidth:(double)arg4;
- (void)setTransform:(double)arg1 b:(double)arg2 c:(double)arg3 d:(double)arg4 e:(double)arg5 f:(double)arg6;
- (void)transform:(double)arg1 b:(double)arg2 c:(double)arg3 d:(double)arg4 e:(double)arg5 f:(double)arg6;
- (void)translate:(double)arg1 dy:(double)arg2;
- (void)rotate:(double)arg1;
- (void)scale:(double)arg1 sy:(double)arg2;
- (_Bool)isPointInPath:(double)arg1 y:(double)arg2;
- (void)arcTo:(double)arg1 y1:(double)arg2 x2:(double)arg3 y2:(double)arg4 r:(double)arg5;
- (void)arc:(double)arg1 y:(double)arg2 r:(double)arg3 sAngle:(double)arg4 eAngle:(double)arg5 counterclockwise:(_Bool)arg6;
- (void)bezierCurveTo:(double)arg1 cp1y:(double)arg2 cp2x:(double)arg3 cp2y:(double)arg4 x:(double)arg5 y:(double)arg6;
- (void)quadraticCurveTo:(double)arg1 cpy:(double)arg2 x:(double)arg3 y:(double)arg4;
- (void)clip;
- (void)lineTo:(double)arg1 y:(double)arg2;
- (void)closePath;
- (void)moveTo:(double)arg1 y:(double)arg2;
- (void)beginPath;
- (void)stroke;
- (void)fill;
- (void)clear;
- (void)clearRect:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4;
- (void)strokeRect:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4;
- (void)fillRect:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4;
- (void)rect:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4;
- (void)restore;
- (void)save;
- (ZKCGPattern *)createPattern:(ZKImage *)arg1 type:(NSString *)arg2;
- (ZKCGRadialGradient *)createRadialGradient:(double)arg1 y0:(double)arg2 r0:(double)arg3 x1:(double)arg4 y1:(double)arg5 r1:(double)arg6;
- (ZKCGLinearGradient *)createLinearGradient:(double)arg1 y0:(double)arg2 x1:(double)arg3 y1:(double)arg4;
- (ZKImage *)createImage:(double)arg1;
- (void)setSize:(unsigned long long)arg1 height:(unsigned long long)arg2;
@end


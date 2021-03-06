//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBQueueOperation.h"

@class NSString, WBImageEditorCache, WBQueueJob;
@protocol WBMediaUpload;

@interface WBCompressImageOperation : WBQueueOperation
{
    _Bool _isUsingHighQuality;
    WBImageEditorCache *_imageCache;
    NSString *_compressedImagePath;
}

+ (id)cacheFinalPath:(id)arg1 forJob:(id)arg2;
+ (id)tempCacheFullPathForJob:(id)arg1;
+ (id)tempFullPathForJob:(id)arg1;
+ (id)formateImageAsTotalPixels:(id)arg1 wtihReductScale:(double)arg2 saveDirectory:(id)arg3;
+ (id)formatHeifImage:(id)arg1 imageSize:(struct CGSize)arg2 saveDirectory:(id)arg3 photoAsset:(id)arg4;
+ (id)compressImageAsTargetSize:(struct CGSize)arg1 imagePath:(id)arg2 imageSize:(struct CGSize)arg3 saveDirectory:(id)arg4;
+ (_Bool)checkCompressImageSizeIsValid:(id)arg1;
+ (id)generateCompressDirectory:(id)arg1;
+ (struct CGSize)readImageSizeFromData:(id)arg1;
+ (id)photoAlbumCompress:(id)arg1 targetSize:(struct CGSize)arg2 saveDirectory:(id)arg3;
+ (_Bool)logEnabled;
+ (long long)operationType;
@property _Bool isUsingHighQuality; // @synthesize isUsingHighQuality=_isUsingHighQuality;
@property(retain) NSString *compressedImagePath; // @synthesize compressedImagePath=_compressedImagePath;
@property(readonly, nonatomic) WBImageEditorCache *imageCache; // @synthesize imageCache=_imageCache;
- (void).cxx_destruct;
- (void)printUsedMemory:(id)arg1;
- (double)usedMemory;
- (id)compressSettingsFilePathForCompressedImagePath:(id)arg1;
- (id)currentImageCompressSettings;
- (void)saveCompressSettings:(id)arg1 forImagePath:(id)arg2;
- (id)readCompressSettingsForImagePath:(id)arg1;
- (_Bool)imageAtPathMatchesCurrentCompressSettings:(id)arg1;
- (id)cacheResizedPicPath:(id)arg1;
- (id)cachePicPath:(id)arg1;
- (id)tempCacheFullPath;
- (id)tempFullPath;
- (id)additionalMetadataTagsWithImagePath:(id)arg1;
- (id)writeJPEGPictureFrom:(id)arg1 To:(id)arg2;
- (id)compressImage:(id)arg1 imageSize:(struct CGSize)arg2 saveDirectory:(id)arg3;
- (void)compressImageAndInsertMetadataFromPath:(id)arg1 toPath:(id)arg2;
- (void)copyALAssetImageFrom:(id)arg1 toPath:(id)arg2;
- (void)copyPHAssetImageFrom:(id)arg1 toPath:(id)arg2;
- (void)copyOriginImageFrom:(id)arg1 toFinalpath:(id)arg2;
- (void)reportImageResizeError;
- (void)reportDiskSizeNotEnoughError;
- (void)reportFileProcessError;
- (void)reportCopyFileFromAlbumError;
- (void)reportFileNotFoundError;
- (void)reportPathComputError;
- (void)removeLocationIfNeedForPath:(id)arg1;
- (void)fixOrientationIfNeedForPath:(id)arg1;
- (void)cancel;
- (void)doCompletion;
- (void)fixColorSpaceIfNeeded;
- (void)executeRequestWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) WBQueueJob<WBMediaUpload> *job;
- (id)initWithJob:(id)arg1 imageCache:(id)arg2;
- (id)init;
- (id)operationTypeString;

@end


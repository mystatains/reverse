//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class XMCommentLabelLayoutConfig, XMMCommunityTheme;

@interface XMMCommentListViewLayoutConfig : NSObject
{
    _Bool _automaticallyDetectBookMark;
    XMCommentLabelLayoutConfig *_labelLayoutConfig;
    XMMCommunityTheme *_communityTheme;
}

@property(nonatomic) _Bool automaticallyDetectBookMark; // @synthesize automaticallyDetectBookMark=_automaticallyDetectBookMark;
@property(retain, nonatomic) XMMCommunityTheme *communityTheme; // @synthesize communityTheme=_communityTheme;
@property(retain, nonatomic) XMCommentLabelLayoutConfig *labelLayoutConfig; // @synthesize labelLayoutConfig=_labelLayoutConfig;
- (void).cxx_destruct;
- (id)init;

@end


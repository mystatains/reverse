//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WBHealthTableViewItem : NSObject
{
    Class _cellClass;
    CDUnknownBlockType _cellConfig;
    CDUnknownBlockType _heightConfig;
    CDUnknownBlockType _selectHandler;
}

@property(copy, nonatomic) CDUnknownBlockType selectHandler; // @synthesize selectHandler=_selectHandler;
@property(copy, nonatomic) CDUnknownBlockType heightConfig; // @synthesize heightConfig=_heightConfig;
@property(copy, nonatomic) CDUnknownBlockType cellConfig; // @synthesize cellConfig=_cellConfig;
@property(retain, nonatomic) Class cellClass; // @synthesize cellClass=_cellClass;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBNoteProCardBaseParagraph.h"

#import "WBNoteProSmallPageParagraphCellDelegate-Protocol.h"

@class NSString;

@interface WBNoteProSmallPageParagraph : WBNoteProCardBaseParagraph <WBNoteProSmallPageParagraphCellDelegate>
{
}

+ (long long)paragraphType;
- (void)setupProParagraphCell:(id)arg1;
- (id)htmlString;
- (double)heightOfCellWithWidth:(double)arg1;
- (Class)paragraphCellClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


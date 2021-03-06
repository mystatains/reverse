//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBFCLBaseViewModel.h"

@class NSString;

@interface WBCommentViewModel : WBFCLBaseViewModel
{
    NSString *_anchorId;
    NSString *_commentExt;
}

@property(retain, nonatomic) NSString *commentExt; // @synthesize commentExt=_commentExt;
@property(retain, nonatomic) NSString *anchorId; // @synthesize anchorId=_anchorId;
- (void).cxx_destruct;
- (double)heightWithWidth:(double)arg1 string:(id)arg2 fontSize:(long long)arg3 lineSpace:(double)arg4 numberOfLine:(long long)arg5;
- (double)getSourceHeight;
- (_Bool)isTrendStatusSourceShow:(id)arg1;
- (id)createDispTextWithSource:(id)arg1 sourceUrl:(id)arg2 sourceUrlEnable:(_Bool)arg3;
- (long long)middleIndexString:(id)arg1 startIndex:(long long)arg2 endIndex:(long long)arg3 leaveSpace:(double)arg4 text:(id)arg5;
- (id)compositeFont;
- (id)noCommentCellDataWithOrigin:(id)arg1;
- (id)expandStatusCellDataWithOrigin:(id)arg1;
- (id)pendingBottomCellDataWithOrigin:(id)arg1;
- (id)commentFwdCmtLikeCellDataWithOrigin:(id)arg1;
- (id)statusFwdCmtLikeCellDataWithOrigin:(id)arg1;
- (id)soliderCommentCellDataWithOrigin:(id)arg1;
- (id)headerCommentCellDataWithOrigin:(id)arg1;
- (id)moreCommentCellDataWithOrigin:(id)arg1;
- (id)subCommentCellDataWithOrigin:(id)arg1;
- (id)normalOccupiedCellDataWithOrigin:(id)arg1;
- (id)bulletinOccupiedCellDataWithOrigin:(id)arg1;
- (id)occupiedCommentCellDataWithOrigin:(id)arg1;
- (id)cardCommentCellDataWithOrigin:(id)arg1;
- (id)statusCommentCellDataWithOrigin:(id)arg1;
- (id)adObjectSchemeFromStatus:(id)arg1 defaultScheme:(id)arg2;
- (id)rootCommentCellDataWithOrigin:(id)arg1;
- (id)generateCellDataWithMetaData:(id)arg1;
- (long long)anchorIndex;
- (_Bool)shouldSkipCacheWithErrorCode:(long long)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCard.h"

@class NSArray, NSString;

@interface WBPageStarRatingCard : WBPageCard
{
    double _rating;
    NSString *_buttonTitle;
    NSString *_buttonScheme;
    NSArray *_ratingTitles;
    NSString *_objectID;
}

+ (Class)fangleTableCellClass;
+ (Class)viewClass;
+ (Class)tableViewCellClass;
@property(retain, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
@property(retain, nonatomic) NSArray *ratingTitles; // @synthesize ratingTitles=_ratingTitles;
@property(retain, nonatomic) NSString *buttonScheme; // @synthesize buttonScheme=_buttonScheme;
@property(retain, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(nonatomic) double rating; // @synthesize rating=_rating;
- (void).cxx_destruct;
- (id)buttonSchemeNotChange;
- (_Bool)updateWithDictionary:(id)arg1;
- (void)dealloc;
- (_Bool)disableBackgroundColor;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSButton, NSView;

@interface IDEStructureTableCellView : NSTableCellView
{
    NSView *_customViewContainer;
    NSButton *_quickLookButton;
}

@property __weak NSButton *quickLookButton; // @synthesize quickLookButton=_quickLookButton;
@property __weak NSView *customViewContainer; // @synthesize customViewContainer=_customViewContainer;
- (void).cxx_destruct;
- (void)setAttributedStringValue:(id)arg1;
- (void)setBackgroundStyle:(long long)arg1;
- (id)_attributedString;
- (void)setObjectValue:(id)arg1;
- (void)awakeFromNib;

@end


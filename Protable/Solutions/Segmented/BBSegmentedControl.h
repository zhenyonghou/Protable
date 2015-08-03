//
//  BBSegmentedControl.h
//  LxJSDemo
//
//  Created by mumuhou on 15/7/14.
//  Copyright (c) 2015年 The Third Rock Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^IndexChangeBlock)(NSInteger index);

@interface BBSegmentedControl : UIControl

@property (nonatomic, copy) IndexChangeBlock indexChangeBlock;


@property (nonatomic, strong) NSArray *sectionTitles;


@property (nonatomic, assign, readonly) NSInteger selectedSegmentIndex;

@property (nonatomic, strong) UIColor *backgroundColor;

@property (nonatomic, strong) NSDictionary *titleTextAttributes;

@property (nonatomic, strong) NSDictionary *selectedTitleTextAttributes;

/**
 * 每个title的最合适大小向外延伸的范围，默认UIEdgeInsetsMake(0, 5, 0, 5)
 */
@property (nonatomic, readwrite) UIEdgeInsets segmentEdgeInset;

// bottom line
@property (nonatomic, assign) CGFloat bottomLineHeight;

@property (nonatomic, strong) UIColor *bottomLineColor;

// selectionIndicator

@property (nonatomic, strong) UIColor *selectionIndicatorColor;

@property (nonatomic, assign) CGFloat selectionIndicatorHeight;

- (void)registerObserverForScrollView:(UIScrollView *)scrollView;

- (void)setSelectedSegmentIndex:(NSUInteger)index animated:(BOOL)animated notify:(BOOL)notify;

@end

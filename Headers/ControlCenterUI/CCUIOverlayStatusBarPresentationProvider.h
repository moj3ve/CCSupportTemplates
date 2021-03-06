/*
 * This header is generated by classdump-dyld 1.0
 * on Thursday, January 25, 2018 at 11:29:33 PM Eastern European Standard Time
 * Operating System: Version 11.1.2 (Build 15B202)
 * Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
 */

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import "CCUIOverlayFlickGestureBehavior.h"
#import "CCUIOverlayPresentationProvider.h"

@protocol CCUIOverlayViewProvider, CCUIOverlayMetricsProvider;
@class NSString;

@interface CCUIOverlayStatusBarPresentationProvider : NSObject <CCUIOverlayFlickGestureBehavior, CCUIOverlayPresentationProvider> {

	id<CCUIOverlayViewProvider> _viewProvider;
	id<CCUIOverlayMetricsProvider> _metricsProvider;

}

@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy,readonly) NSString * description;
@property (copy,readonly) NSString * debugDescription;
@property (nonatomic,readonly) CGFloat dismissalFlickMaximumTime;
@property (nonatomic,readonly) CGFloat dismissalFlickMinimumVelocity;
@property (nonatomic,readonly) NSUInteger dismissalFlickAllowedDirections;
@property (getter=isPanDismissalAvailable,nonatomic,readonly) BOOL panDismissalAvailable;
@property (nonatomic,readonly) NSUInteger backgroundMaterialOptions;
@property (nonatomic,readonly) BOOL allowHotPocketDuringTransition;
@property (nonatomic,weak) id<CCUIOverlayViewProvider> viewProvider;					//@synthesize viewProvider=_viewProvider - In the implementation block
@property (nonatomic,weak) id<CCUIOverlayMetricsProvider> metricsProvider;				//@synthesize metricsProvider=_metricsProvider - In the implementation block
@property (nonatomic,readonly) NSUInteger headerMode;
@property (nonatomic,copy,readonly) id<CCUIOverlayFlickGestureBehavior> flickGestureBehavior;
+ (id)_hiddenStatusBarFadeAnimationParameters;
+ (id)_baseC2AnimationParametersForTransitionState:(id)arg1;
+ (id)_leadingStatusBarCAAnimationParametersForTransitionState:(id)arg1;
+ (id)_trailingStatusBarCAAnimationParametersForTransitionState:(id)arg1;
+ (id)_compactTrailingStatusBarAlphaCAAnimationParametersForTransitionState:(id)arg1;
+ (id)_expandedLeadingStatusBarAlphaCAAnimationParametersForTransitionState:(id)arg1;
+ (id)_expandedTrailingStatusBarAlphaCAAnimationParametersForTransitionState:(id)arg1;
+ (id)_moduleC2AnimationParametersForTransitionState:(id)arg1 layoutRect:(CCUILayoutRect)arg2;
+ (id)_moduleScaleCAAnimationParametersForTransitionState:(id)arg1;
+ (id)_moduleAlphaCAAnimationParametersForTransitionState:(id)arg1;
- (void)layoutViews;
- (id<CCUIOverlayMetricsProvider>)metricsProvider;
- (CGRect)_presentedViewFrame;
- (id<CCUIOverlayViewProvider>)viewProvider;
- (CGRect)_moduleCollectionViewFrame;
- (UIEdgeInsets)_moduleCollectionViewFrameEdgeInsets;
- (CGRect)headerViewFrame;
- (void)_addLeadingStatusBarAlphaAnimationToBatch:(id)arg1 transitionState:(id)arg2;
- (void)_addHeaderContentTransformAnimationToBatch:(id)arg1 transitionState:(id)arg2;
- (void)_addStatusBarStateAnimationToBatch:(id)arg1 transitionState:(id)arg2;
- (void)_addStatusBarAlphaAnimationToBatch:(id)arg1 transitionState:(id)arg2;
- (void)_addScrollViewContentOffsetAnimationToBatch:(id)arg1 transitionState:(id)arg2;
- (void)_addBackgroundViewWeightingAnimationToBatch:(id)arg1 transitionState:(id)arg2;
- (void)_addModuleTransformAnimationsToBatch:(id)arg1 transitionState:(id)arg2;
- (void)_addModuleScaleAnimationsToBatch:(id)arg1 transitionState:(id)arg2;
- (void)_addModuleAlphaAnimationsToBatch:(id)arg1 transitionState:(id)arg2;
- (CGFloat)_leadingStatusBarAlphaForTransitionState:(id)arg1;
- (CGAffineTransform)_headerViewTransformForTransitionState:(id)arg1;
- (CGAffineTransform)_transformForTransitionState:(id)arg1 rubberBandingHeight:(CGFloat)arg2;
- (CGAffineTransform)_moduleViewTransformForTransitionState:(id)arg1 layoutRect:(CCUILayoutRect)arg2;
- (CGFloat)_delayForTransitionState:(id)arg1 layoutRect:(CCUILayoutRect)arg2;
- (CGAffineTransform)_moduleViewScaleTransformForTransitionState:(id)arg1 layoutRect:(CCUILayoutRect)arg2;
- (CGFloat)dismissalFlickMaximumTime;
- (CGFloat)dismissalFlickMinimumVelocity;
- (NSUInteger)dismissalFlickAllowedDirections;
- (id)transitionStateForType:(NSUInteger)arg1 interactive:(BOOL)arg2 translation:(CGPoint)arg3;
- (NSUInteger)finalTransitionTypeForState:(id)arg1 gestureTranslation:(CGPoint)arg2 gestureVelocity:(CGPoint)arg3;
- (id)animationBatchForTransitionState:(id)arg1 previousTransitionState:(id)arg2;
- (BOOL)tapAllowsDismissalForLocation:(CGPoint)arg1;
- (BOOL)isPanDismissalAvailable;
- (NSUInteger)backgroundMaterialOptions;
- (BOOL)allowHotPocketDuringTransition;
- (void)setViewProvider:(id<CCUIOverlayViewProvider>)arg1;
- (void)setMetricsProvider:(id<CCUIOverlayMetricsProvider>)arg1;
- (id)secondaryAnimationBatchForTransitionState:(id)arg1 previousTransitionState:(id)arg2;
- (id)prepareForPresentation;
- (id)cleanupForDismissal;
- (NSUInteger)headerMode;
- (id<CCUIOverlayFlickGestureBehavior>)flickGestureBehavior;
@end

/*
 * This header is generated by classdump-dyld 1.0
 * on Wednesday, May 16, 2018 at 2:00:09 PM Central European Summer Time
 * Operating System: Version 11.1.2 (Build 15B202)
 * Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
 */


@protocol CCUIContentModuleContextDelegate;
@class NSString;

@interface CCUIContentModuleContext : NSObject {

	NSString* _moduleIdentifier;
	id<CCUIContentModuleContextDelegate> _delegate;

}

@property (nonatomic,copy,readonly) NSString * moduleIdentifier;				//@synthesize moduleIdentifier=_moduleIdentifier - In the implementation block
@property (nonatomic,weak) id<CCUIContentModuleContextDelegate> delegate;		//@synthesize delegate=_delegate - In the implementation block
+ (void)initialize;
+ (id)_sharedOpenApplicationOptions;
+ (id)_sharedOpenAppService;
- (id<CCUIContentModuleContextDelegate>)delegate;
- (void)setDelegate:(id<CCUIContentModuleContextDelegate>)arg1;
- (void)openURL:(id)arg1 completionHandler:(/*^block*/ id)arg2;
- (NSString *)moduleIdentifier;
- (void)openApplication:(id)arg1 withOptions:(id)arg2 completionHandler:(/*^block*/ id)arg3;
- (void)requestAuthenticationWithCompletionHandler:(/*^block*/ id)arg1;
- (void)openApplication:(id)arg1 completionHandler:(/*^block*/ id)arg2;
- (void)enqueueStatusUpdate:(id)arg1;
- (void)requestExpandModule;
- (void)dismissModule;
- (id)initWithModuleIdentifier:(id)arg1;
@end

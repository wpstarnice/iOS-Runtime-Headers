/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardUIServices.framework/FrontBoardUIServices
 */

@interface FBUIProcess : FBSProcess <FBUIProcess>

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) int pid;
@property (readonly) Class superclass;

- (BOOL)isApplicationProcess;
- (BOOL)isExtensionProcess;
- (BOOL)isRunning;
- (BOOL)isSystemApplicationProcess;

@end

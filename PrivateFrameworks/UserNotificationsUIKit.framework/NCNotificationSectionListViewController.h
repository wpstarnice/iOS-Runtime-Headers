/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationSectionListViewController : NCNotificationListViewController <NCNotificationListSectionHeaderViewDelegate, NCNotificationSectionListDelegate, UIGestureRecognizerDelegate> {
    NCNotificationListSectionHeaderView * _headerViewInClearState;
    NCNotificationListSectionHeaderView * _headerViewInForceTouchState;
    <NCNotificationSectionList> * _sectionList;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) NCNotificationListSectionHeaderView *headerViewInClearState;
@property (nonatomic) NCNotificationListSectionHeaderView *headerViewInForceTouchState;
@property (nonatomic, retain) <NCNotificationSectionList> *sectionList;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_reloadRequestsAtIndices:(id)arg1;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(int)arg3;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (BOOL)dismissModalFullScreenAnimated:(BOOL)arg1;
- (void)handleEatenTouchBeginStateForGestureRecognizer:(id)arg1;
- (void)handleEatenTouchEndStateForGestureRecognizer:(id)arg1;
- (BOOL)hasContent;
- (BOOL)hasVisibleContent;
- (id)headerViewInClearState;
- (id)headerViewInForceTouchState;
- (void)hideRequestsForNotificationSectionIdentifier:(id)arg1 subSectionIdentifier:(id)arg2;
- (id)init;
- (BOOL)insertNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (BOOL)modifyNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (id)notificationRequestAtIndexPath:(id)arg1;
- (void)notificationSectionList:(id)arg1 didInsertNotificationRequest:(id)arg2 atIndexPath:(id)arg3;
- (void)notificationSectionList:(id)arg1 didInsertSectionAtIndex:(unsigned int)arg2;
- (void)notificationSectionList:(id)arg1 didRemoveNotificationRequest:(id)arg2 atIndexPath:(id)arg3;
- (void)notificationSectionList:(id)arg1 didRemoveSectionAtIndex:(unsigned int)arg2;
- (void)notificationSectionList:(id)arg1 didRemoveSectionsAtIndices:(id)arg2;
- (void)notificationSectionList:(id)arg1 didReplaceNotificationRequest:(id)arg2 atIndexPath:(id)arg3;
- (void)notificationSectionList:(id)arg1 requestsReloadAtIndices:(id)arg2;
- (void)notificationSectionListNeedsReload:(id)arg1;
- (int)notificationViewControllerDateFormatStyle:(id)arg1;
- (BOOL)notificationViewControllerShouldInterpretTapAsDefaultAction:(id)arg1;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (void)reloadRequestsWithSuppressedContent;
- (void)removeNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)sectionHeaderView:(id)arg1 didReceiveClearActionForSectionIdentifier:(id)arg2;
- (void)sectionHeaderViewDidDismissForceTouchView:(id)arg1;
- (void)sectionHeaderViewDidPresentForceTouchView:(id)arg1;
- (void)sectionHeaderViewDidReceiveClearAllAction:(id)arg1;
- (void)sectionHeaderViewDidTransitionToClearState:(id)arg1;
- (id)sectionList;
- (void)setHeaderViewInClearState:(id)arg1;
- (void)setHeaderViewInForceTouchState:(id)arg1;
- (void)setSectionList:(id)arg1;
- (BOOL)shouldReceiveTouch:(id)arg1 forGestureRecognizer:(id)arg2;
- (void)showRequestsForNotificationSectionIdentifier:(id)arg1 subSectionIdentifier:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;

@end

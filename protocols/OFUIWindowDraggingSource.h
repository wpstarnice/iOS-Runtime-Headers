/* Generated by RuntimeBrowser.
 */

@protocol OFUIWindowDraggingSource <NSObject>

@optional

- (struct CGPoint { float x1; float x2; })draggingSource:(OFUIWindowDraggingSession *)arg1 badgeCenterForItem:(OFUIWindowDraggingItem *)arg2;
- (void)draggingSource:(OFUIWindowDraggingSession *)arg1 cleanupItem:(OFUIWindowDraggingItem *)arg2;
- (void)draggingSource:(OFUIWindowDraggingSession *)arg1 didAddItem:(OFUIWindowDraggingItem *)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })draggingSource:(OFUIWindowDraggingSession *)arg1 originalFrameForItem:(OFUIWindowDraggingItem *)arg2;
- (void)draggingSource:(OFUIWindowDraggingSession *)arg1 prepareItem:(OFUIWindowDraggingItem *)arg2;
- (void)draggingSource:(OFUIWindowDraggingSession *)arg1 updateItem:(OFUIWindowDraggingItem *)arg2;
- (BOOL)draggingSource:(OFUIWindowDraggingSession *)arg1 willAddItem:(OFUIWindowDraggingItem *)arg2;
- (void)draggingSourceDidBegin:(OFUIWindowDraggingSession *)arg1;
- (void)draggingSourceDidEnd:(OFUIWindowDraggingSession *)arg1 cancelled:(BOOL)arg2;
- (void)draggingSourceDidMove:(OFUIWindowDraggingSession *)arg1;
- (unsigned int)draggingSourceWillBegin:(OFUIWindowDraggingSession *)arg1;

@end

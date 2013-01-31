/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKScrollView, NSArray, UIView, GKComposeMessageField, GKComposeHeaderFieldBackgroundView;

@interface GKBaseComposeController : GKViewController <UITextViewDelegate> {
    NSArray *_composeHeaderFields;
    GKScrollView *_backgroundView;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _lastKnownKeyboardFrame;
    GKComposeHeaderFieldBackgroundView *_bounceRevealTopView;
    GKComposeMessageField *_messageField;
    UIView *_intendedFirstResponder;
}

@property(retain) GKScrollView * backgroundView;
@property(retain) NSArray * composeHeaderFields;
@property(retain) GKComposeMessageField * messageField;
@property UIView * intendedFirstResponder;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } lastKnownKeyboardFrame;
@property(retain) GKComposeHeaderFieldBackgroundView * bounceRevealTopView;


- (void)dealloc;
- (id)init;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementText:(id)arg3;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (void)setMessageField:(id)arg1;
- (void)setBounceRevealTopView:(id)arg1;
- (id)bounceRevealTopView;
- (void)setLastKnownKeyboardFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })lastKnownKeyboardFrame;
- (void)setComposeHeaderFields:(id)arg1;
- (id)composeHeaderFields;
- (id)messageField;
- (id)intendedFirstResponder;
- (void)layoutMessageViewAnimated:(BOOL)arg1;
- (void)layoutFieldsAnimated:(BOOL)arg1;
- (void)keyboardWillMove:(id)arg1;
- (void)setIntendedFirstResponder:(id)arg1;

@end
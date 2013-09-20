/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@class _GCACHomeButton;

@interface _GCRemoteControllerProfile : _GCGamepad <_GCACHomeButtonDelegate> {
    _GCACHomeButton *_acHome;
}

- (void).cxx_destruct;
- (void)handleReport:(unsigned int)arg1 data:(id)arg2;
- (id)initWithController:(id)arg1;
- (id)inputForElement:(struct __IOHIDElement { }*)arg1;
- (id)name;
- (void)setPlayerIndex:(int)arg1;
- (void)startHandlerThread:(id)arg1;
- (void)startWithController:(id)arg1;
- (void)toggleSuspendResume;

@end
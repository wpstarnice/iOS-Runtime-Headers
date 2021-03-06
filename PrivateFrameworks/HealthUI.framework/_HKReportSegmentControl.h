/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface _HKReportSegmentControl : UIView {
    UIView * _dividerView;
    UIControl * _rightControl;
    UISegmentedControl * _segmentControl;
}

@property (nonatomic, readonly) UIView *dividerView;
@property (nonatomic, readonly) UIControl *rightControl;
@property (nonatomic, readonly) UISegmentedControl *segmentControl;

- (void).cxx_destruct;
- (id)dividerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 backgroundColor:(id)arg2 dividerColor:(id)arg3 rightControl:(id)arg4;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (BOOL)isOpaque;
- (void)layoutSubviews;
- (id)rightControl;
- (id)segmentControl;

@end

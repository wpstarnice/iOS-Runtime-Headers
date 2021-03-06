/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXNavigationTitleView : UIView <PXPhotosDetailsBarsContentView> {
    NSArray * __constraints;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  __margins;
    UILabel * __subtitleLabel;
    BOOL  __subtitleVisible;
    UILabel * __titleLabel;
    BOOL  _isPerformingChanges;
    BOOL  _isPerformingUpdates;
    struct { 
        BOOL texts; 
        BOOL fonts; 
        BOOL constraints; 
        BOOL size; 
    }  _needsUpdateFlags;
    NSString * _subtitle;
    UIFont * _subtitleFont;
    float  _subviewsAlpha;
    NSString * _title;
    UIFont * _titleFont;
    UIColor * _titleTextColor;
    int  _verticalSizeClass;
}

@property (setter=_setConstraints:, nonatomic, retain) NSArray *_constraints;
@property (setter=_setMargins:, nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } _margins;
@property (nonatomic, readonly) UILabel *_subtitleLabel;
@property (getter=_isSubtitleVisible, setter=_setSubtitleVisible:, nonatomic) BOOL _subtitleVisible;
@property (nonatomic, readonly) UILabel *_titleLabel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) UIFont *subtitleFont;
@property (nonatomic) float subviewsAlpha;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) UIFont *titleFont;
@property (nonatomic, retain) UIColor *titleTextColor;
@property (nonatomic) int verticalSizeClass;

- (void).cxx_destruct;
- (id)_constraints;
- (void)_invalidateConstraints;
- (void)_invalidateFonts;
- (void)_invalidateSize;
- (void)_invalidateTexts;
- (BOOL)_isSubtitleVisible;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_margins;
- (BOOL)_needsUpdate;
- (void)_setConstraints:(id)arg1;
- (void)_setMargins:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)_setNeedsUpdate;
- (void)_setSubtitleVisible:(BOOL)arg1;
- (id)_subtitleLabel;
- (id)_titleLabel;
- (void)_updateConstraintsIfNeeded;
- (void)_updateFontsIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateSizeIfNeeded;
- (void)_updateTextsIfNeeded;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)performChanges:(id /* block */)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleFont:(id)arg1;
- (void)setSubviewsAlpha:(float)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (void)setTitleTextColor:(id)arg1;
- (void)setVerticalSizeClass:(int)arg1;
- (id)subtitle;
- (id)subtitleFont;
- (float)subviewsAlpha;
- (id)title;
- (id)titleFont;
- (id)titleTextColor;
- (void)updateConstraints;
- (int)verticalSizeClass;

@end

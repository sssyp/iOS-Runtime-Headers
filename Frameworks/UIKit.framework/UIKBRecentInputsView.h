/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBRecentInputsView : UIKBKeyView <UICollectionViewDataSource, UICollectionViewDelegate> {
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_flowLayout;
    NSArray *_recentInputStrings;
    BOOL _verticalLayout;
}

@property (nonatomic, retain) UICollectionView *collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UICollectionViewFlowLayout *flowLayout;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSArray *recentInputStrings;
@property (readonly) Class superclass;

- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)dealloc;
- (void)displayLayer:(id)arg1;
- (id)flowLayout;
- (unsigned int)focusableVariantCount;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 keyplane:(id)arg2 key:(id)arg3;
- (id)recentInputStrings;
- (void)refreshSelectedRecent;
- (void)scrollViewDidChangeContentSize:(id)arg1;
- (id)selectedRecentInputString;
- (void)setCollectionView:(id)arg1;
- (void)setFlowLayout:(id)arg1;
- (void)setRecentInputStrings:(id)arg1;
- (void)setRecentInputs:(id)arg1;
- (void)setVerticalLayout:(BOOL)arg1;
- (void)setupCollectionView;

@end

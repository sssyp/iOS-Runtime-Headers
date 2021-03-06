/* Generated by RuntimeBrowser.
 */

@protocol EKEventViewDelegatePrivate <EKEventViewDelegate>

@optional

- (void)eventViewController:(EKEventViewController *)arg1 didDismissEditViewController:(EKEventEditViewController *)arg2 deleted:(BOOL)arg3;
- (void)eventViewController:(EKEventViewController *)arg1 requestsDismissalOfEditViewController:(EKEventEditViewController *)arg2;
- (void)eventViewController:(EKEventViewController *)arg1 requestsDisplayOfEditViewController:(EKEventEditViewController *)arg2 animated:(BOOL)arg3;
- (void)eventViewController:(EKEventViewController *)arg1 willDismissEditViewController:(EKEventEditViewController *)arg2 deleted:(BOOL)arg3;
- (void)eventViewControllerDidBeginEditingEventWithEditViewController:(EKEventEditViewController *)arg1;
- (void)eventViewControllerDidRequestAddToCalendar:(EKEventViewController *)arg1;
- (void)eventViewControllerInlineEditButtonWasTapped:(EKEventViewController *)arg1;
- (BOOL)eventViewControllerPresentationWantsHiddenNavBarForSingleController;
- (BOOL)eventViewControllerShouldAlwaysShowNavBar:(EKEventViewController *)arg1;
- (BOOL)eventViewControllerShouldDismissSelf:(EKEventViewController *)arg1;
- (BOOL)eventViewControllerShouldHandleInlineEdit:(EKEventViewController *)arg1;
- (BOOL)eventViewControllerShouldHideDeleteButton;
- (BOOL)eventViewControllerShouldHideInlineEditButton;
- (BOOL)eventViewControllerShouldShowInlineEditButtonForInvitations:(EKEventViewController *)arg1;
- (BOOL)eventViewControllerUseMinimalModeAfterTraitCollectionChange:(EKEventViewController *)arg1;
- (void)eventViewControllerWillBeginEditingEvent:(EKEventViewController *)arg1;
- (void)eventViewControllerWillDisappear:(EKEventViewController *)arg1;
- (void)eventViewControllerWillFinishEditingEvent:(EKEventViewController *)arg1 deleted:(BOOL)arg2;
- (BOOL)eventViewDelegateShouldCreateOwnEditViewController:(EKEventViewController *)arg1;
- (BOOL)eventViewDelegateShouldHandlePresentationOfEditViewController:(EKEventViewController *)arg1;

@end

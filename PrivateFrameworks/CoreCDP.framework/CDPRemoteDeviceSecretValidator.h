/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
 */

@interface CDPRemoteDeviceSecretValidator : NSObject {
    unsigned int _failedAttempts;
    <CDPRemoteDeviceSecretValidatorProtocol> *_validator;
}

@property (nonatomic, readonly) unsigned int failedAttempts;

- (void).cxx_destruct;
- (void)approveFromAnotherDeviceWithCompletion:(id /* block */)arg1;
- (void)cancelApproveFromAnotherDevice;
- (void)cancelValidationWithError:(id)arg1;
- (unsigned int)failedAttempts;
- (id)initWithContext:(id)arg1 validator:(id)arg2;
- (void)resetAccountCDPState;
- (void)validateSecret:(id)arg1 devices:(id)arg2 type:(unsigned int)arg3 withCompletion:(id /* block */)arg4;

@end

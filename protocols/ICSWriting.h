/* Generated by RuntimeBrowser.
 */

@protocol ICSWriting

@required

- (NSString *)ICSStringWithOptions:(unsigned int)arg1;
- (void)ICSStringWithOptions:(unsigned int)arg1 appendingToString:(NSMutableString *)arg2;
- (NSSet *)parametersToIncludeForChecksumVersion:(int)arg1;
- (NSSet *)parametersToObscure;
- (NSSet *)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg1;
- (NSSet *)propertiesToIncludeForChecksumVersion:(int)arg1;
- (NSSet *)propertiesToObscure;
- (BOOL)shouldObscureValue;

@end

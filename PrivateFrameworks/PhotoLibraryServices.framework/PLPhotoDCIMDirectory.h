/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoDCIMDirectory : NSObject {
    struct flock { long long x1; long long x2; int x3; short x4; short x5; } *_dcimDirectoryLock;
    int _dcimDirectoryLockDescriptor;
    NSString *_dcimPath;
    int _lastUsedDirectoryNumber;
    NSString *_miscPath;
    NSString *_posterImagePath;
    NSMutableArray *_topLevelDirectories;
    struct __CFDictionary { } *_topLevelDirectoriesByNumber;
    struct __CFSet { } *_unusableTopLevelDirectoryNumbers;
    NSMutableDictionary *_userInfo;
    BOOL _userInfoDidChange;
}

- (id)_userInfoPath;
- (void)clearDCFDirectories;
- (void)countOfAllPhotos:(int*)arg1 andVideos:(int*)arg2 stopAfterFirst:(BOOL)arg3;
- (id)countOfAllPhotosAndVideos;
- (id)dcfDirectories;
- (id)dcimPath;
- (void)dealloc;
- (BOOL)hasChangedExternally;
- (id)initWithDCIMPath:(id)arg1;
- (BOOL)isValidImageExtension:(id)arg1;
- (BOOL)isValidVideoExtension:(id)arg1;
- (void)lockDirectory;
- (id)miscPath;
- (id)nextAvailableDirectory;
- (id)posterImagePath;
- (void)recreateInfoPlist;
- (void)reloadUserInfo;
- (void)saveUserInfo;
- (void)setHasChangedExternally:(BOOL)arg1;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (void)unlockDirectory;
- (id)userInfo;
- (id)userInfoObjectForKey:(id)arg1;

@end

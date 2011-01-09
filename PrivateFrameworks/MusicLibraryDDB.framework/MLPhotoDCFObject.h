/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/MusicLibraryDDB.framework/MusicLibraryDDB
 */

@class NSString;



@interface MLPhotoDCFObject : NSObject 
{
    NSString *_name;
    NSInteger _number;
    BOOL _writeIsPending;
}

+ (id)validDCFNameForName:(id)arg1 requiredLength:(NSInteger)arg2 nameLength:(NSInteger)arg3 number:(NSInteger*)arg4 numberRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg5;

- (id)initWithName:(id)arg1 number:(NSInteger)arg2;
- (void)dealloc;
- (id)name;
- (NSInteger)number;
- (NSInteger)compare:(id)arg1;
- (id)description;
- (void)setWriteIsPending:(BOOL)arg1;

@end
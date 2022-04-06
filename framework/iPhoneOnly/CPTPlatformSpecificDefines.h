/// @file

#import <TargetConditionals.h>

#if TARGET_OS_OSX

#pragma mark macOS
#pragma mark -

#import <AppKit/AppKit.h>

typedef NSImage CPTNativeImage; ///< Platform-native image format.
typedef NSEvent CPTNativeEvent; ///< Platform-native OS event.

#else

#pragma mark - iOS, tvOS, Mac Catalyst
#pragma mark -

#import <UIKit/UIKit.h>

typedef UIImage CPTNativeImage; ///< Platform-native image format.
typedef UIEvent CPTNativeEvent; ///< Platform-native OS event.

#endif
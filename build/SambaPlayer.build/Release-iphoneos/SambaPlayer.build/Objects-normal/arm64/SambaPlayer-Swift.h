// Generated by Apple Swift version 3.0.1 (swiftlang-800.0.58.6 clang-800.0.42.1)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import ObjectiveC;
@import UIKit;
@import CoreGraphics;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"

SWIFT_CLASS("_TtC11SambaPlayer10DrmRequest")
@interface DrmRequest : NSObject
@property (nonatomic, copy) NSString * _Nonnull acUrl;
@property (nonatomic, copy) NSString * _Nonnull licenseUrl;
@property (nonatomic, readonly, copy) NSString * _Nonnull licenseUrlParamsStr;
@property (nonatomic, readonly, copy) NSString * _Nonnull acUrlParamsStr;
- (nonnull instancetype)init:(NSString * _Nonnull)acUrl :(NSString * _Nonnull)licenseUrl OBJC_DESIGNATED_INITIALIZER;
- (void)addLicenseParamWithKey:(NSString * _Nonnull)key value:(NSString * _Nonnull)value;
- (void)addACParamWithKey:(NSString * _Nonnull)key value:(NSString * _Nonnull)value;
- (NSString * _Nullable)getLicenseParamWithKey:(NSString * _Nonnull)key;
- (NSString * _Nullable)getACParamWithKey:(NSString * _Nonnull)key;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

@class SambaMediaRequest;
@class SambaMedia;

SWIFT_CLASS("_TtC11SambaPlayer8SambaApi")
@interface SambaApi : NSObject
/**
  Default constructor
*/
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/**
  Request media from SambaPlayer API<br><br>
  The SambaPlayer API returns a base64 string with the encoded media info and its decoded before intiate
  \param request SambaMediaRequest - Request to our api

  \param callback SambaMedia - Callback when the request is made passing our SambaMedia object

*/
- (void)requestMedia:(SambaMediaRequest * _Nonnull)request callback:(void (^ _Nonnull)(SambaMedia * _Nullable))callback;
@end

@class UIImage;

/**
  <ul>
    <li>
      Data entity representing a media.
    </li>
    <li>
    </li>
    <li>
      If \code
      outputs
      \endcode field is nil, use \code
      url
      \endcode field.
    </li>
  </ul>
*/
SWIFT_CLASS("_TtC11SambaPlayer10SambaMedia")
@interface SambaMedia : NSObject
/**
  Media´s title
*/
@property (nonatomic, copy) NSString * _Nonnull title;
/**
  Current media URL
*/
@property (nonatomic, copy) NSString * _Nullable url;
/**
  DFP tag URL
*/
@property (nonatomic, copy) NSString * _Nullable adUrl;
/**
  Delivery type ( HLS, PROGRESSIVE, OTHER )
*/
@property (nonatomic, copy) NSString * _Nonnull deliveryType;
/**
  Thumb´s URL
*/
@property (nonatomic, strong) UIImage * _Nullable thumb;
/**
  Indicate if the media is live or not
*/
@property (nonatomic) BOOL isLive;
/**
  Indicate if the media is audio or not
*/
@property (nonatomic) BOOL isAudio;
/**
  Media current color theme
*/
@property (nonatomic) NSUInteger theme;
/**
  Default initializer
*/
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/**
  Media initializer
  \param url String URL of the media

  \param title String Media´s title

  \param thumb String URL of the thumb

*/
- (nonnull instancetype)init:(NSString * _Nonnull)url title:(NSString * _Nullable)title thumb:(UIImage * _Nullable)thumb OBJC_DESIGNATED_INITIALIZER;
/**
  Convenience initializer
  \param url String URL of the media

*/
- (nonnull instancetype)init:(NSString * _Nonnull)url;
/**
  Convenience initializer
  \param media SambaMedia A SambaMedia object to clone from

*/
- (nonnull instancetype)initWithMedia:(SambaMedia * _Nonnull)media OBJC_DESIGNATED_INITIALIZER;
/**
  Description of the media ( if empty returns the media´s title
*/
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
@end


/**
  <ul>
    <li>
      Internal extension of the media entity for player/plugins config purposes.
    </li>
  </ul>
*/
SWIFT_CLASS("_TtC11SambaPlayer16SambaMediaConfig")
@interface SambaMediaConfig : SambaMedia
@property (nonatomic, copy) NSString * _Nonnull id;
@property (nonatomic, copy) NSString * _Nonnull projectHash;
@property (nonatomic) NSInteger projectId;
@property (nonatomic) NSInteger categoryId;
@property (nonatomic, copy) NSString * _Nonnull sessionId;
@property (nonatomic, copy) NSString * _Nonnull sttmUrl;
@property (nonatomic, copy) NSString * _Nonnull sttmKey;
@property (nonatomic, strong) DrmRequest * _Nullable drmRequest;
@property (nonatomic) BOOL blockIfRooted;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithMedia:(SambaMedia * _Nonnull)media OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init:(NSString * _Nonnull)url title:(NSString * _Nullable)title thumb:(UIImage * _Nullable)thumb SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC11SambaPlayer17SambaMediaRequest")
@interface SambaMediaRequest : NSObject
/**
  Project Hash of the media
*/
@property (nonatomic, copy) NSString * _Nonnull projectHash;
/**
  ID of the media
*/
@property (nonatomic, copy) NSString * _Nullable mediaId;
/**
  If it´s live, streamName of the media
*/
@property (nonatomic, copy) NSString * _Nullable streamName;
@property (nonatomic, copy) NSArray<NSString *> * _Nullable streamUrls;
/**
  Default initializer
  \param projectHash String Project Hash of the media

  \param mediaId String ID of the media

  \param streamName String streamName of the media live

  \param streamUrls [String] List of streamURLs

*/
- (nonnull instancetype)initWithProjectHash:(NSString * _Nonnull)projectHash mediaId:(NSString * _Nullable)mediaId streamName:(NSString * _Nullable)streamName streamUrls:(NSArray<NSString *> * _Nullable)streamUrls OBJC_DESIGNATED_INITIALIZER;
/**
  Convenience initializer
  \param projectHash String Project Hash of the media

  \param streamUrls [String] List of streamURLs

*/
- (nonnull instancetype)initWithProjectHash:(NSString * _Nonnull)projectHash streamUrls:(NSArray<NSString *> * _Nonnull)streamUrls;
/**
  Convenience initializer
  \param projectHash String Project Hash of the media

  \param streamName String streamName of the media live

*/
- (nonnull instancetype)initWithProjectHash:(NSString * _Nonnull)projectHash streamName:(NSString * _Nonnull)streamName;
/**
  Convenience initializer
  \param projectHash String Project Hash of the media

  \param mediaId String ID of the media

*/
- (nonnull instancetype)initWithProjectHash:(NSString * _Nonnull)projectHash mediaId:(NSString * _Nonnull)mediaId;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

@protocol SambaPlayerDelegate;
@class UIView;
@class NSCoder;
@class SambaPlayerError;
@protocol UIViewControllerTransitionCoordinator;
@class NSBundle;

SWIFT_CLASS("_TtC11SambaPlayer11SambaPlayer")
@interface SambaPlayer : UIViewController
/**
  Stores the delegated methods for the player events
*/
@property (nonatomic, strong) id <SambaPlayerDelegate> _Nonnull delegate;
/**
  Current media time
*/
@property (nonatomic, readonly) float currentTime;
/**
  Current media duration
*/
@property (nonatomic, readonly) float duration;
/**
  Current media
*/
@property (nonatomic, strong) SambaMedia * _Nonnull media;
/**
  Flag if the media is or not playing
*/
@property (nonatomic, readonly) BOOL isPlaying;
/**
  Flag whether controls should be visible or not
*/
@property (nonatomic) BOOL controlsVisible;
/**
  Default initializer
  <ul>
    <li>
    </li>
  </ul>
*/
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/**
  Convenience initializer
  <ul>
    <li>
    </li>
  </ul>
  \param parentViewController UIViewController The view-controller in which the player view-controller and view should to be embedded

*/
- (nonnull instancetype)initWithParentViewController:(UIViewController * _Nonnull)parentViewController;
/**
  Convenience initializer
  <ul>
    <li>
    </li>
  </ul>
  \param parentViewController UIViewController The view-controller in which the player view-controller should to be embedded

  \param parentView UIView The view in which the player view should to be embedded

*/
- (nonnull instancetype)initWithParentViewController:(UIViewController * _Nonnull)parentViewController andParentView:(UIView * _Nonnull)parentView;
/**
  Required initializer
  <ul>
    <li>
    </li>
  </ul>
  \param aDecoder NSCoder

*/
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
/**
  Plays the media<br><br>
  \code
  player.play()

  \endcode*/
- (void)play;
/**
  Pauses the media<br><br>
  \code
  player.pause()

  \endcode*/
- (void)pause;
/**
  Stops the media returning it to its initial time<br><br>
  \code
  player.stop()

  \endcode*/
- (void)stop;
/**
  Seeks the media to a given time<br><br>
  \code
  player.seek(20)

  \endcode<ul>
    <li>
      parameter: pos: Float Time in seconds
    </li>
  </ul>
*/
- (void)seek:(float)pos;
/**
  Changes the current output<br><br>
  \code
  player.switchOutput(1)

  \endcode<ul>
    <li>
      parameter: value: Int Index of the output
    </li>
  </ul>
*/
- (void)switchOutput:(NSInteger)value;
/**
  Destroys the player instance<br><br>
  \code
  player.destroy()

  \endcode<ul>
    <li>
      parameter: error: SambaPlayerError Error type to show (optional)
    </li>
  </ul>
*/
- (void)destroyWithError:(SambaPlayerError * _Nullable)error;
- (void)viewWillTransitionToSize:(CGSize)size withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator> _Nonnull)coordinator;
@property (nonatomic, readonly) UIInterfaceOrientationMask supportedInterfaceOrientations;
- (void)viewWillDisappear:(BOOL)animated;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end


/**
  SambaPlayerDelegate protocol
*/
SWIFT_PROTOCOL("_TtP11SambaPlayer19SambaPlayerDelegate_")
@protocol SambaPlayerDelegate
/**
  Fired up when player is loaded
*/
- (void)onLoad;
/**
  Fired up when player is started
*/
- (void)onStart;
/**
  Fired up when player is resumed ( from paused to play )
*/
- (void)onResume;
/**
  Fired up when player is paused
*/
- (void)onPause;
/**
  Fired up when player is playing ( fired each second of playing )
*/
- (void)onProgress;
/**
  Fired up when player is finished
*/
- (void)onFinish;
/**
  Fired up when player is destroyed
*/
- (void)onDestroy;
/**
  Fired up when some error occurs
*/
- (void)onError:(SambaPlayerError * _Nonnull)error;
@end


/**
  Error list
*/
SWIFT_CLASS("_TtC11SambaPlayer16SambaPlayerError")
@interface SambaPlayerError : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) SambaPlayerError * _Nonnull invalidUrl;)
+ (SambaPlayerError * _Nonnull)invalidUrl;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) SambaPlayerError * _Nonnull creatingPlayer;)
+ (SambaPlayerError * _Nonnull)creatingPlayer;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) SambaPlayerError * _Nonnull rootedDevice;)
+ (SambaPlayerError * _Nonnull)rootedDevice;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) SambaPlayerError * _Nonnull unknown;)
+ (SambaPlayerError * _Nonnull)unknown;
@property (nonatomic, readonly) NSInteger code;
/**
  Customizes an error message associated to a given error type.
  \param error SambaPlayerError Instance error type

  \param message String The message to be replaced

*/
+ (void)setMessageWithError:(SambaPlayerError * _Nonnull)error message:(NSString * _Nonnull)message;
/**
  Customizes the current error message and returns it.
  <ul>
    <li>
      parameter: message: String The message to be replaced
    </li>
  </ul>

  returns:
  The current error
*/
- (SambaPlayerError * _Nonnull)setMessage:(NSString * _Nonnull)message;
@property (nonatomic, readonly, copy) NSString * _Nonnull localizedDescription;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


@interface UIColor (SWIFT_EXTENSION(SambaPlayer))
@end


@interface UIImage (SWIFT_EXTENSION(SambaPlayer))
/**
  Tint, Colorize image with given tint color<br><br>
  This is similar to Photoshop’s “Color” layer blend mode<br><br>
  This is perfect for non-greyscale source images, and images that have both highlights and shadows that should be preserved<br><br>
  white will stay white and black will stay black as the lightness of the image is preserved<br><br>
  <img src="http://yannickstephan.com/easyhelper/tint1.png" height="70" width="120"/>
  <em>To</em>
  <img src="http://yannickstephan.com/easyhelper/tint2.png" height="70" width="120"/>
  \param tintColor UIColor


  returns:
  UIImage
*/
- (UIImage * _Nonnull)tintPhoto:(UIColor * _Nonnull)tintColor;
/**
  Tint Picto to color
  \param fillColor UIColor


  returns:
  UIImage
*/
- (UIImage * _Nonnull)tintPicto:(UIColor * _Nonnull)fillColor;
@end

#pragma clang diagnostic pop

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_gameplay3d_sample_spaceship_GooglePlaySocial */

#ifndef _Included_org_gameplay3d_sample_spaceship_GooglePlaySocial
#define _Included_org_gameplay3d_sample_spaceship_GooglePlaySocial
#ifdef __cplusplus
extern "C" {
#endif
#undef org_gameplay3d_sample_spaceship_GooglePlaySocial_MODE_PRIVATE
#define org_gameplay3d_sample_spaceship_GooglePlaySocial_MODE_PRIVATE 0L
#undef org_gameplay3d_sample_spaceship_GooglePlaySocial_MODE_WORLD_READABLE
#define org_gameplay3d_sample_spaceship_GooglePlaySocial_MODE_WORLD_READABLE 1L
#undef org_gameplay3d_sample_spaceship_GooglePlaySocial_MODE_WORLD_WRITEABLE
#define org_gameplay3d_sample_spaceship_GooglePlaySocial_MODE_WORLD_WRITEABLE 2L
#undef org_gameplay3d_sample_spaceship_GooglePlaySocial_MODE_APPEND
#define org_gameplay3d_sample_spaceship_GooglePlaySocial_MODE_APPEND 32768L
#undef org_gameplay3d_sample_spaceship_GooglePlaySocial_MODE_MULTI_PROCESS
#define org_gameplay3d_sample_spaceship_GooglePlaySocial_MODE_MULTI_PROCESS 4L
#undef org_gameplay3d_sample_spaceship_GooglePlaySocial_MODE_ENABLE_WRITE_AHEAD_LOGGING
#define org_gameplay3d_sample_spaceship_GooglePlaySocial_MODE_ENABLE_WRITE_AHEAD_LOGGING 8L
#undef org_gameplay3d_sample_spaceship_GooglePlaySocial_BIND_AUTO_CREATE
#define org_gameplay3d_sample_spaceship_GooglePlaySocial_BIND_AUTO_CREATE 1L
#undef org_gameplay3d_sample_spaceship_GooglePlaySocial_BIND_DEBUG_UNBIND
#define org_gameplay3d_sample_spaceship_GooglePlaySocial_BIND_DEBUG_UNBIND 2L
#undef org_gameplay3d_sample_spaceship_GooglePlaySocial_BIND_NOT_FOREGROUND
#define org_gameplay3d_sample_spaceship_GooglePlaySocial_BIND_NOT_FOREGROUND 4L
#undef org_gameplay3d_sample_spaceship_GooglePlaySocial_BIND_ABOVE_CLIENT
#define org_gameplay3d_sample_spaceship_GooglePlaySocial_BIND_ABOVE_CLIENT 8L
#undef org_gameplay3d_sample_spaceship_GooglePlaySocial_BIND_ALLOW_OOM_MANAGEMENT
#define org_gameplay3d_sample_spaceship_GooglePlaySocial_BIND_ALLOW_OOM_MANAGEMENT 16L
#undef org_gameplay3d_sample_spaceship_GooglePlaySocial_BIND_WAIVE_PRIORITY
#define org_gameplay3d_sample_spaceship_GooglePlaySocial_BIND_WAIVE_PRIORITY 32L
#undef org_gameplay3d_sample_spaceship_GooglePlaySocial_BIND_IMPORTANT
#define org_gameplay3d_sample_spaceship_GooglePlaySocial_BIND_IMPORTANT 64L
#undef org_gameplay3d_sample_spaceship_GooglePlaySocial_BIND_ADJUST_WITH_ACTIVITY
#define org_gameplay3d_sample_spaceship_GooglePlaySocial_BIND_ADJUST_WITH_ACTIVITY 128L
#undef org_gameplay3d_sample_spaceship_GooglePlaySocial_CONTEXT_INCLUDE_CODE
#define org_gameplay3d_sample_spaceship_GooglePlaySocial_CONTEXT_INCLUDE_CODE 1L
#undef org_gameplay3d_sample_spaceship_GooglePlaySocial_CONTEXT_IGNORE_SECURITY
#define org_gameplay3d_sample_spaceship_GooglePlaySocial_CONTEXT_IGNORE_SECURITY 2L
#undef org_gameplay3d_sample_spaceship_GooglePlaySocial_CONTEXT_RESTRICTED
#define org_gameplay3d_sample_spaceship_GooglePlaySocial_CONTEXT_RESTRICTED 4L
#undef org_gameplay3d_sample_spaceship_GooglePlaySocial_RESULT_CANCELED
#define org_gameplay3d_sample_spaceship_GooglePlaySocial_RESULT_CANCELED 0L
#undef org_gameplay3d_sample_spaceship_GooglePlaySocial_RESULT_OK
#define org_gameplay3d_sample_spaceship_GooglePlaySocial_RESULT_OK -1L
#undef org_gameplay3d_sample_spaceship_GooglePlaySocial_RESULT_FIRST_USER
#define org_gameplay3d_sample_spaceship_GooglePlaySocial_RESULT_FIRST_USER 1L
#undef org_gameplay3d_sample_spaceship_GooglePlaySocial_DEFAULT_KEYS_DISABLE
#define org_gameplay3d_sample_spaceship_GooglePlaySocial_DEFAULT_KEYS_DISABLE 0L
#undef org_gameplay3d_sample_spaceship_GooglePlaySocial_DEFAULT_KEYS_DIALER
#define org_gameplay3d_sample_spaceship_GooglePlaySocial_DEFAULT_KEYS_DIALER 1L
#undef org_gameplay3d_sample_spaceship_GooglePlaySocial_DEFAULT_KEYS_SHORTCUT
#define org_gameplay3d_sample_spaceship_GooglePlaySocial_DEFAULT_KEYS_SHORTCUT 2L
#undef org_gameplay3d_sample_spaceship_GooglePlaySocial_DEFAULT_KEYS_SEARCH_LOCAL
#define org_gameplay3d_sample_spaceship_GooglePlaySocial_DEFAULT_KEYS_SEARCH_LOCAL 3L
#undef org_gameplay3d_sample_spaceship_GooglePlaySocial_DEFAULT_KEYS_SEARCH_GLOBAL
#define org_gameplay3d_sample_spaceship_GooglePlaySocial_DEFAULT_KEYS_SEARCH_GLOBAL 4L
#undef org_gameplay3d_sample_spaceship_GooglePlaySocial_RC_UNUSED
#define org_gameplay3d_sample_spaceship_GooglePlaySocial_RC_UNUSED 11999L
#undef org_gameplay3d_sample_spaceship_GooglePlaySocial_FRIENDS_PER_PAGE
#define org_gameplay3d_sample_spaceship_GooglePlaySocial_FRIENDS_PER_PAGE 10L
#undef org_gameplay3d_sample_spaceship_GooglePlaySocial_MAX_SCORES_TO_LOAD
#define org_gameplay3d_sample_spaceship_GooglePlaySocial_MAX_SCORES_TO_LOAD 25L
/*
 * Class:     org_gameplay3d_sample_spaceship_GooglePlaySocial
 * Method:    native_ReportSignInState
 * Signature: (ZZ)V
 */
JNIEXPORT void JNICALL Java_org_gameplay3d_sample_1spaceship_GooglePlaySocial_native_1ReportSignInState
  (JNIEnv *, jobject, jboolean, jboolean);

/*
 * Class:     org_gameplay3d_sample_spaceship_GooglePlaySocial
 * Method:    native_ReportUserEntry
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_gameplay3d_sample_1spaceship_GooglePlaySocial_native_1ReportUserEntry
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     org_gameplay3d_sample_spaceship_GooglePlaySocial
 * Method:    native_ReportAchievementEntry
 * Signature: (ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;II)V
 */
JNIEXPORT void JNICALL Java_org_gameplay3d_sample_1spaceship_GooglePlaySocial_native_1ReportAchievementEntry
  (JNIEnv *, jobject, jint, jstring, jstring, jstring, jint, jint);

/*
 * Class:     org_gameplay3d_sample_spaceship_GooglePlaySocial
 * Method:    native_ReportLeaderboardEntry
 * Signature: (IILjava/lang/String;Ljava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_org_gameplay3d_sample_1spaceship_GooglePlaySocial_native_1ReportLeaderboardEntry
  (JNIEnv *, jobject, jint, jint, jstring, jstring, jint);

/*
 * Class:     org_gameplay3d_sample_spaceship_GooglePlaySocial
 * Method:    native_ReportFriendEntry
 * Signature: (ILjava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_gameplay3d_sample_1spaceship_GooglePlaySocial_native_1ReportFriendEntry
  (JNIEnv *, jobject, jint, jstring, jstring);

/*
 * Class:     org_gameplay3d_sample_spaceship_GooglePlaySocial
 * Method:    native_ReportCloudLoadResult
 * Signature: (ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_gameplay3d_sample_1spaceship_GooglePlaySocial_native_1ReportCloudLoadResult
  (JNIEnv *, jobject, jint, jstring);

#ifdef __cplusplus
}
#endif
#endif

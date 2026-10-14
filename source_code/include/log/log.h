/*
 * Android Logging Compatibility Header for NDK standalone builds and Host verification
 */
#ifndef _ANDROID_COMPAT_LOG_H
#define _ANDROID_COMPAT_LOG_H

#ifdef __ANDROID__
#include <android/log.h>
#else
#include <stdio.h>
typedef enum android_LogPriority {
    ANDROID_LOG_UNKNOWN = 0,
    ANDROID_LOG_DEFAULT,
    ANDROID_LOG_VERBOSE,
    ANDROID_LOG_DEBUG,
    ANDROID_LOG_INFO,
    ANDROID_LOG_WARN,
    ANDROID_LOG_ERROR,
    ANDROID_LOG_FATAL,
    ANDROID_LOG_SILENT,
} android_LogPriority;
#define __android_log_print(prio, tag, fmt, ...) printf("[%s] " fmt "\n", tag, ##__VA_ARGS__)
#endif

#ifndef LOG_TAG
#define LOG_TAG "BegoniaBlob"
#endif

#define ALOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)
#define ALOGD(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)
#define ALOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
#define ALOGW(...) __android_log_print(ANDROID_LOG_WARN, LOG_TAG, __VA_ARGS__)
#define ALOGE(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)

#endif /* _ANDROID_COMPAT_LOG_H */

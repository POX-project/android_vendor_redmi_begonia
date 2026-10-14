/*
 * Reverse-Engineered Source for: libspeechparser_vendor.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libspeechparser_vendor"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <signal.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <log/log.h>
#include <hardware/hardware.h>
#include "libspeechparser_vendor.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: gAppHandle */
extern "C" __attribute__((visibility("default"))) void* gAppHandle = NULL;

/* Exported Object: gNumSpeechNetwork */
extern "C" __attribute__((visibility("default"))) void* gNumSpeechNetwork = NULL;

/* Exported Object: gSpeechParserAttribute */
extern "C" __attribute__((visibility("default"))) void* gSpeechParserAttribute = NULL;

/* Demangled: getSpeechProfile_SP */
extern "C" __attribute__((visibility("default"))) int getSpeechProfile_SP(void) {
    ALOGD("getSpeechProfile_SP() called");
    return 0;
}

/* Demangled: setMDParamDataHdr */
extern "C" __attribute__((visibility("default"))) int setMDParamDataHdr(void) {
    ALOGD("setMDParamDataHdr() called");
    return 0;
}

/* Demangled: spHandleInit */
extern "C" __attribute__((visibility("default"))) int spHandleInit(void) {
    ALOGD("spHandleInit() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIN7android7String8ENS_9allocatorIS2_EEE6assignIPKS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android7String8ENS_9allocatorIS2_EEE6assignIPKS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_(void) {
    ALOGD("_ZNSt3__16vectorIN7android7String8ENS_9allocatorIS2_EEE6assignIPKS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_() called");
    return 0;
}

/* Demangled: initSpeechNetwork */
extern "C" __attribute__((visibility("default"))) int initSpeechNetwork(void) {
    ALOGD("initSpeechNetwork() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Exported Object: gNameForEachSpeechNetwork */
extern "C" __attribute__((visibility("default"))) void* gNameForEachSpeechNetwork = NULL;

/* Demangled: gSpHandleInstWriteLock */
extern "C" __attribute__((visibility("default"))) int gSpHandleInstWriteLock(void) {
    ALOGD("gSpHandleInstWriteLock() called");
    return 0;
}

/* Demangled: getFeatureOn */
extern "C" __attribute__((visibility("default"))) int getFeatureOn(void) {
    ALOGD("getFeatureOn() called");
    return 0;
}

/* Demangled: getNameForEachSpeechNetwork */
extern "C" __attribute__((visibility("default"))) int getNameForEachSpeechNetwork(void) {
    ALOGD("getNameForEachSpeechNetwork() called");
    return 0;
}

/* Demangled: init */
extern "C" __attribute__((visibility("default"))) int init(void) {
    ALOGD("init() called");
    return 0;
}

/* Demangled: initAppParser */
extern "C" __attribute__((visibility("default"))) int initAppParser(void) {
    ALOGD("initAppParser() called");
    return 0;
}

/* Demangled: sizeByteParaData */
extern "C" __attribute__((visibility("default"))) int sizeByteParaData(void) {
    ALOGD("sizeByteParaData() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Exported Object: gListSpeechCategory */
extern "C" __attribute__((visibility("default"))) void* gListSpeechCategory = NULL;

/* Exported Object: gSphParamSupport */
extern "C" __attribute__((visibility("default"))) void* gSphParamSupport = NULL;

/* Demangled: setDBGinfoindex10toTestMode */
extern "C" __attribute__((visibility("default"))) int setDBGinfoindex10toTestMode(void) {
    ALOGD("setDBGinfoindex10toTestMode() called");
    return 0;
}

/* Demangled: setKeyValuePair */
extern "C" __attribute__((visibility("default"))) int setKeyValuePair(void) {
    ALOGD("setKeyValuePair() called");
    return 0;
}

/* Demangled: spHandleUninit */
extern "C" __attribute__((visibility("default"))) int spHandleUninit(void) {
    ALOGD("spHandleUninit() called");
    return 0;
}

/* Demangled: dumpSpeechData */
extern "C" __attribute__((visibility("default"))) int dumpSpeechData(void) {
    ALOGD("dumpSpeechData() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::String8, std::__1::allocator<android::String8> >::__push_back_slow_path<android::String8>(android::String8&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android7String8ENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android7String8ENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: gSpHandleInstUnlock */
extern "C" __attribute__((visibility("default"))) int gSpHandleInstUnlock(void) {
    ALOGD("gSpHandleInstUnlock() called");
    return 0;
}

/* Exported Object: gTestMode */
extern "C" __attribute__((visibility("default"))) void* gTestMode = NULL;

/* Demangled: getIpcLpbkProfile */
extern "C" __attribute__((visibility("default"))) int getIpcLpbkProfile(void) {
    ALOGD("getIpcLpbkProfile() called");
    return 0;
}

/* Exported Object: PROPERTY_KEY_SP_PARSER_LOG_ON */
extern "C" __attribute__((visibility("default"))) void* PROPERTY_KEY_SP_PARSER_LOG_ON = NULL;

/* Exported Object: gListSpeechNetwork */
extern "C" __attribute__((visibility("default"))) void* gListSpeechNetwork = NULL;

/* Exported Object: gSpeechCategorySupport */
extern "C" __attribute__((visibility("default"))) void* gSpeechCategorySupport = NULL;

/* Exported Object: gSpeechParamVerFirst */
extern "C" __attribute__((visibility("default"))) void* gSpeechParamVerFirst = NULL;

/* Exported Object: gSpeechParamVerLast */
extern "C" __attribute__((visibility("default"))) void* gSpeechParamVerLast = NULL;

/* Exported Object: gCustScene */
extern "C" __attribute__((visibility("default"))) void* gCustScene = NULL;

/* Demangled: getParamFromAppParser */
extern "C" __attribute__((visibility("default"))) int getParamFromAppParser(void) {
    ALOGD("getParamFromAppParser() called");
    return 0;
}

/* Exported Object: gMD_version */
extern "C" __attribute__((visibility("default"))) void* gMD_version = NULL;

/* Demangled: getKeyValuePair */
extern "C" __attribute__((visibility("default"))) int getKeyValuePair(void) {
    ALOGD("getKeyValuePair() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: getParamBuffer */
extern "C" __attribute__((visibility("default"))) int getParamBuffer(void) {
    ALOGD("getParamBuffer() called");
    return 0;
}

/* Demangled: initSpeechCategory */
extern "C" __attribute__((visibility("default"))) int initSpeechCategory(void) {
    ALOGD("initSpeechCategory() called");
    return 0;
}

/* Demangled: spHandleGetInstance */
extern "C" __attribute__((visibility("default"))) int spHandleGetInstance(void) {
    ALOGD("spHandleGetInstance() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

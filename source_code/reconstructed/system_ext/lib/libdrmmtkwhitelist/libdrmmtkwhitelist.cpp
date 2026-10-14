/*
 * Reverse-Engineered Source for: libdrmmtkwhitelist.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libdrmmtkwhitelist"

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
#include "libdrmmtkwhitelist.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::DrmMtkDefender::init() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14DrmMtkDefender4initEv(void) {
    ALOGD("_ZN7android14DrmMtkDefender4initEv() called");
    return 0;
}

/* Exported Object: android::DrmTrustedApp::TRUSTED_APP */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13DrmTrustedApp11TRUSTED_APPE = NULL;

/* Demangled: android::DrmTrustedApp::IsDrmTrustedApp(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DrmTrustedApp15IsDrmTrustedAppERKNS_7String8E(void) {
    ALOGD("_ZN7android13DrmTrustedApp15IsDrmTrustedAppERKNS_7String8E() called");
    return 0;
}

/* Demangled: android::DrmMtkDefender::isCtaTrustedClient(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14DrmMtkDefender18isCtaTrustedClientERKNS_7String8E(void) {
    ALOGD("_ZN7android14DrmMtkDefender18isCtaTrustedClientERKNS_7String8E() called");
    return 0;
}

/* Demangled: android::CtaTrustedClient::IsCtaTrustedClient(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16CtaTrustedClient18IsCtaTrustedClientERKNS_7String8E(void) {
    ALOGD("_ZN7android16CtaTrustedClient18IsCtaTrustedClientERKNS_7String8E() called");
    return 0;
}

/* Demangled: android::CtaTrustedClient::IsCtaTrustedGetTokenClient(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16CtaTrustedClient26IsCtaTrustedGetTokenClientERKNS_7String8E(void) {
    ALOGD("_ZN7android16CtaTrustedClient26IsCtaTrustedGetTokenClientERKNS_7String8E() called");
    return 0;
}

/* Demangled: android::CtaTrustedClient::IsCtaTrustedCheckTokenClient(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16CtaTrustedClient28IsCtaTrustedCheckTokenClientERKNS_7String8E(void) {
    ALOGD("_ZN7android16CtaTrustedClient28IsCtaTrustedCheckTokenClientERKNS_7String8E() called");
    return 0;
}

/* Exported Object: android::DrmTrustedVideoApp::sIsInited */
extern "C" __attribute__((visibility("default"))) void* _ZN7android18DrmTrustedVideoApp9sIsInitedE = NULL;

/* Exported Object: vtable for android::Vector<android::String8> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_7String8EEE = NULL;

/* Exported Object: android::DrmSntpServer::NTP_SERVER_4 */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13DrmSntpServer12NTP_SERVER_4E = NULL;

/* Exported Object: android::DrmMtkDefender::sDebug */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmMtkDefender6sDebugE = NULL;

/* Demangled: android::DrmMtkDefender::isDrmConsumeInAppClient(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14DrmMtkDefender23isDrmConsumeInAppClientERKNS_7String8E(void) {
    ALOGD("_ZN7android14DrmMtkDefender23isDrmConsumeInAppClientERKNS_7String8E() called");
    return 0;
}

/* Exported Object: android::CtaTrustedClient::TRUSTED_PROC */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CtaTrustedClient12TRUSTED_PROCE = NULL;

/* Exported Object: android::CtaTrustedClient::TRUSTED_GETTOKEN_PROC */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CtaTrustedClient21TRUSTED_GETTOKEN_PROCE = NULL;

/* Exported Object: android::DrmSntpServer::NTP_SERVER_3 */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13DrmSntpServer12NTP_SERVER_3E = NULL;

/* Demangled: android::DrmMtkDefender::markAsConsumeInAppClient(android::String8 const&, android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14DrmMtkDefender24markAsConsumeInAppClientERKNS_7String8ES3_(void) {
    ALOGD("_ZN7android14DrmMtkDefender24markAsConsumeInAppClientERKNS_7String8ES3_() called");
    return 0;
}

/* Exported Object: android::DrmTrustedVideoApp::TRUSTED_VIDEO_APP */
extern "C" __attribute__((visibility("default"))) void* _ZN7android18DrmTrustedVideoApp17TRUSTED_VIDEO_APPE = NULL;

/* Demangled: android::Vector<android::String8>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::DrmTrustedApp::init() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DrmTrustedApp4initEv(void) {
    ALOGD("_ZN7android13DrmTrustedApp4initEv() called");
    return 0;
}

/* Exported Object: android::DrmMtkDefender::CTA_TRUSTED_PROC */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmMtkDefender16CTA_TRUSTED_PROCE = NULL;

/* Demangled: android::CtaTrustedClient::initTrustedClient() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16CtaTrustedClient17initTrustedClientEv(void) {
    ALOGD("_ZN7android16CtaTrustedClient17initTrustedClientEv() called");
    return 0;
}

/* Demangled: android::CtaTrustedClient::initTrustedGetTokenClient() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16CtaTrustedClient25initTrustedGetTokenClientEv(void) {
    ALOGD("_ZN7android16CtaTrustedClient25initTrustedGetTokenClientEv() called");
    return 0;
}

/* Demangled: android::CtaTrustedClient::initTrustedCheckTokenClient() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16CtaTrustedClient27initTrustedCheckTokenClientEv(void) {
    ALOGD("_ZN7android16CtaTrustedClient27initTrustedCheckTokenClientEv() called");
    return 0;
}

/* Exported Object: android::CtaTrustedClient::sIsInited */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CtaTrustedClient9sIsInitedE = NULL;

/* Demangled: android::Vector<android::String8>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE7do_copyEPvPKvj() called");
    return 0;
}

/* Exported Object: android::DrmSntpServer::NTP_SERVER_2 */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13DrmSntpServer12NTP_SERVER_2E = NULL;

/* Demangled: android::DrmMtkDefender::isNeedConsume(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14DrmMtkDefender13isNeedConsumeERKNS_7String8E(void) {
    ALOGD("_ZN7android14DrmMtkDefender13isNeedConsumeERKNS_7String8E() called");
    return 0;
}

/* Demangled: android::DrmMtkDefender::isDrmTrustedClient(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14DrmMtkDefender18isDrmTrustedClientERKNS_7String8E(void) {
    ALOGD("_ZN7android14DrmMtkDefender18isDrmTrustedClientERKNS_7String8E() called");
    return 0;
}

/* Exported Object: android::DrmMtkDefender::NEED_CONSUME_CID_LIST */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmMtkDefender21NEED_CONSUME_CID_LISTE = NULL;

/* Exported Object: android::DrmMtkDefender::DRM_CONSUME_IN_APP_PROC */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmMtkDefender23DRM_CONSUME_IN_APP_PROCE = NULL;

/* Demangled: android::CtaTrustedClient::init() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16CtaTrustedClient4initEv(void) {
    ALOGD("_ZN7android16CtaTrustedClient4initEv() called");
    return 0;
}

/* Demangled: android::DrmTrustedVideoApp::IsDrmTrustedVideoApp(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android18DrmTrustedVideoApp20IsDrmTrustedVideoAppERKNS_7String8E(void) {
    ALOGD("_ZN7android18DrmTrustedVideoApp20IsDrmTrustedVideoAppERKNS_7String8E() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE12do_constructEPvj() called");
    return 0;
}

/* Exported Object: android::DrmTrustedApp::sIsInited */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13DrmTrustedApp9sIsInitedE = NULL;

/* Exported Object: android::DrmMtkDefender::DRM_TRUSTED_PROC */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmMtkDefender16DRM_TRUSTED_PROCE = NULL;

/* Demangled: android::Vector<android::String8>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE8do_splatEPvPKvj() called");
    return 0;
}

/* Exported Object: android::DrmTrustedClient::TRUSTED_PROC */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16DrmTrustedClient12TRUSTED_PROCE = NULL;

/* Exported Object: android::DrmTrustedClient::sIsInited */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16DrmTrustedClient9sIsInitedE = NULL;

/* Demangled: android::DrmTrustedVideoApp::init() */
extern "C" __attribute__((visibility("default"))) int _ZN7android18DrmTrustedVideoApp4initEv(void) {
    ALOGD("_ZN7android18DrmTrustedVideoApp4initEv() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Exported Object: value */
extern "C" __attribute__((visibility("default"))) void* value = NULL;

/* Exported Object: android::DrmSntpServer::NTP_SERVER_1 */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13DrmSntpServer12NTP_SERVER_1E = NULL;

/* Exported Object: android::DrmSntpServer::NTP_SERVER_5 */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13DrmSntpServer12NTP_SERVER_5E = NULL;

/* Exported Object: android::DrmMtkDefender::sLock */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmMtkDefender5sLockE = NULL;

/* Exported Object: android::DrmMtkDefender::sIsInited */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmMtkDefender9sIsInitedE = NULL;

/* Exported Object: android::CtaTrustedClient::TRUSTED_CHECKTOKEN_PROC */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CtaTrustedClient23TRUSTED_CHECKTOKEN_PROCE = NULL;

/* Demangled: android::DrmTrustedClient::IsDrmTrustedClient(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16DrmTrustedClient18IsDrmTrustedClientERKNS_7String8E(void) {
    ALOGD("_ZN7android16DrmTrustedClient18IsDrmTrustedClientERKNS_7String8E() called");
    return 0;
}

/* Demangled: android::DrmTrustedClient::init() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16DrmTrustedClient4initEv(void) {
    ALOGD("_ZN7android16DrmTrustedClient4initEv() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE10do_destroyEPvj() called");
    return 0;
}

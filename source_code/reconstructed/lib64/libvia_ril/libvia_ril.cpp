/*
 * Reverse-Engineered Source for: libvia-ril.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libvia_ril"

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
#include "libvia_ril.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: ViaHandler::registerForViaUrc(RfxBaseHandler*) */
extern "C" __attribute__((visibility("default"))) int _ZN10ViaHandler17registerForViaUrcEP14RfxBaseHandler(void) {
    ALOGD("_ZN10ViaHandler17registerForViaUrcEP14RfxBaseHandler() called");
    return 0;
}

/* Demangled: ViaHandler::getCdmaLocationInfo(RfxBaseHandler*, CDMA_CELL_LOCATION_INFO*) */
extern "C" __attribute__((visibility("default"))) int _ZN10ViaHandler19getCdmaLocationInfoEP14RfxBaseHandlerP23CDMA_CELL_LOCATION_INFO(void) {
    ALOGD("_ZN10ViaHandler19getCdmaLocationInfoEP14RfxBaseHandlerP23CDMA_CELL_LOCATION_INFO() called");
    return 0;
}

/* Demangled: ViaHandler::getCdmaLocationInfo(RfxBaseHandler*, RIL_VOICE_REG_STATE_CACHE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10ViaHandler19getCdmaLocationInfoEP14RfxBaseHandlerP25RIL_VOICE_REG_STATE_CACHE(void) {
    ALOGD("_ZN10ViaHandler19getCdmaLocationInfoEP14RfxBaseHandlerP25RIL_VOICE_REG_STATE_CACHE() called");
    return 0;
}

/* Demangled: ViaHandler::handleCdmaSubscription(RfxBaseHandler*, char**, RIL_Errno*) */
extern "C" __attribute__((visibility("default"))) int _ZN10ViaHandler22handleCdmaSubscriptionEP14RfxBaseHandlerPPcP9RIL_Errno(void) {
    ALOGD("_ZN10ViaHandler22handleCdmaSubscriptionEP14RfxBaseHandlerPPcP9RIL_Errno() called");
    return 0;
}

/* Demangled: ViaHandler::ViaHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN10ViaHandlerC2Ev(void) {
    ALOGD("_ZN10ViaHandlerC2Ev() called");
    return 0;
}

/* Demangled: ViaHandler::handleViaUrc(android::sp<RfxMclMessage> const&, RfxBaseHandler*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10ViaHandler12handleViaUrcERKN7android2spI13RfxMclMessageEEP14RfxBaseHandleri(void) {
    ALOGD("_ZN10ViaHandler12handleViaUrcERKN7android2spI13RfxMclMessageEEP14RfxBaseHandleri() called");
    return 0;
}

/* Demangled: ViaHandler::handleCdmaPrlChanged(android::sp<RfxMclMessage> const&, RfxBaseHandler*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10ViaHandler20handleCdmaPrlChangedERKN7android2spI13RfxMclMessageEEP14RfxBaseHandleri(void) {
    ALOGD("_ZN10ViaHandler20handleCdmaPrlChangedERKN7android2spI13RfxMclMessageEEP14RfxBaseHandleri() called");
    return 0;
}

/* Demangled: ViaHandler::ViaHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN10ViaHandlerC1Ev(void) {
    ALOGD("_ZN10ViaHandlerC1Ev() called");
    return 0;
}

/* Demangled: create */
extern "C" __attribute__((visibility("default"))) int create(void) {
    ALOGD("create() called");
    return 0;
}

/* Demangled: destroy */
extern "C" __attribute__((visibility("default"))) int destroy(void) {
    ALOGD("destroy() called");
    return 0;
}

/* Demangled: ViaHandler::sendCommandDemo(RfxBaseHandler*, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN10ViaHandler15sendCommandDemoEP14RfxBaseHandlerPc(void) {
    ALOGD("_ZN10ViaHandler15sendCommandDemoEP14RfxBaseHandlerPc() called");
    return 0;
}

/* Demangled: ViaHandler::convertCdmaEvdoSig(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10ViaHandler18convertCdmaEvdoSigEii(void) {
    ALOGD("_ZN10ViaHandler18convertCdmaEvdoSigEii() called");
    return 0;
}

/* Demangled: ViaHandler::requestAgpsConnind(RfxBaseHandler*, int, RIL_Errno*) */
extern "C" __attribute__((visibility("default"))) int _ZN10ViaHandler18requestAgpsConnindEP14RfxBaseHandleriP9RIL_Errno(void) {
    ALOGD("_ZN10ViaHandler18requestAgpsConnindEP14RfxBaseHandleriP9RIL_Errno() called");
    return 0;
}

/* Demangled: ViaHandler::requestSetPreferredVoicePrivacyMode(RfxBaseHandler*, int, RIL_Errno*) */
extern "C" __attribute__((visibility("default"))) int _ZN10ViaHandler35requestSetPreferredVoicePrivacyModeEP14RfxBaseHandleriP9RIL_Errno(void) {
    ALOGD("_ZN10ViaHandler35requestSetPreferredVoicePrivacyModeEP14RfxBaseHandleriP9RIL_Errno() called");
    return 0;
}

/* Demangled: ViaHandler::~ViaHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN10ViaHandlerD2Ev(void) {
    ALOGD("_ZN10ViaHandlerD2Ev() called");
    return 0;
}

/* Demangled: ViaHandler::getAgpsUrc() */
extern "C" __attribute__((visibility("default"))) int _ZN10ViaHandler10getAgpsUrcEv(void) {
    ALOGD("_ZN10ViaHandler10getAgpsUrcEv() called");
    return 0;
}

/* Demangled: ViaHandler::~ViaHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN10ViaHandlerD1Ev(void) {
    ALOGD("_ZN10ViaHandlerD1Ev() called");
    return 0;
}

/* Demangled: ViaHandler::getViaAllowedUrcForNw() */
extern "C" __attribute__((visibility("default"))) int _ZN10ViaHandler21getViaAllowedUrcForNwEv(void) {
    ALOGD("_ZN10ViaHandler21getViaAllowedUrcForNwEv() called");
    return 0;
}

/* Demangled: ViaHandler::requestQueryPreferredVoicePrivacyMode(RfxBaseHandler*, int*, RIL_Errno*) */
extern "C" __attribute__((visibility("default"))) int _ZN10ViaHandler37requestQueryPreferredVoicePrivacyModeEP14RfxBaseHandlerPiP9RIL_Errno(void) {
    ALOGD("_ZN10ViaHandler37requestQueryPreferredVoicePrivacyModeEP14RfxBaseHandlerPiP9RIL_Errno() called");
    return 0;
}

/* Demangled: ViaHandler::~ViaHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN10ViaHandlerD0Ev(void) {
    ALOGD("_ZN10ViaHandlerD0Ev() called");
    return 0;
}

/* Exported Object: vtable for ViaHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTV10ViaHandler = NULL;

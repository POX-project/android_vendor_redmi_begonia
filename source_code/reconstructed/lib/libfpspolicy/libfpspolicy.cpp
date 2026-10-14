/*
 * Reverse-Engineered Source for: libfpspolicy.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libfpspolicy"

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
#include "libfpspolicy.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::FpsPolicy::recoverStateLocked() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9FpsPolicy18recoverStateLockedEv(void) {
    ALOGD("_ZN7android9FpsPolicy18recoverStateLockedEv() called");
    return 0;
}

/* Demangled: android::FpsPolicy::setFps(int, int, int, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9FpsPolicy6setFpsEiiiy(void) {
    ALOGD("_ZN7android9FpsPolicy6setFpsEiiiy() called");
    return 0;
}

/* Demangled: virtual thunk to android::FpsInfo::~FpsInfo() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N7android7FpsInfoD0Ev(void) {
    ALOGD("_ZTv0_n12_N7android7FpsInfoD0Ev() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService>::operator=(vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyServiceEEaSEPS6_(void) {
    ALOGD("_ZN7android2spIN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyServiceEEaSEPS6_() called");
    return 0;
}

/* Demangled: android::FpsVsync::registerSwVsyncChangeCallback(std::__1::function<void (int, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8FpsVsync29registerSwVsyncChangeCallbackENSt3__18functionIFviiEEE(void) {
    ALOGD("_ZN7android8FpsVsync29registerSwVsyncChangeCallbackENSt3__18functionIFviiEEE() called");
    return 0;
}

/* Demangled: android::FpsVsync::~FpsVsync() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8FpsVsyncD2Ev(void) {
    ALOGD("_ZN7android8FpsVsyncD2Ev() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: android::unwrapRet(android::hardware::Return<vendor::mediatek::hardware::dfps::V1_0::Error>&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9unwrapRetERNS_8hardware6ReturnIN6vendor8mediatek8hardware4dfps4V1_05ErrorEEE(void) {
    ALOGD("_ZN7android9unwrapRetERNS_8hardware6ReturnIN6vendor8mediatek8hardware4dfps4V1_05ErrorEEE() called");
    return 0;
}

/* Demangled: android::FpsPolicy::getFpsRange(int, vendor::mediatek::hardware::dfps::V1_0::FpsRange*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9FpsPolicy11getFpsRangeEiPN6vendor8mediatek8hardware4dfps4V1_08FpsRangeE(void) {
    ALOGD("_ZN7android9FpsPolicy11getFpsRangeEiPN6vendor8mediatek8hardware4dfps4V1_08FpsRangeE() called");
    return 0;
}

/* Demangled: android::FpsPolicy::connectServiceLocked(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9FpsPolicy20connectServiceLockedEb(void) {
    ALOGD("_ZN7android9FpsPolicy20connectServiceLockedEb() called");
    return 0;
}

/* Demangled: android::FpsPolicy::getPanelInfoNumberLocked(int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9FpsPolicy24getPanelInfoNumberLockedEPi(void) {
    ALOGD("_ZN7android9FpsPolicy24getPanelInfoNumberLockedEPi() called");
    return 0;
}

/* Demangled: android::FpsPolicy::~FpsPolicy() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9FpsPolicyD1Ev(void) {
    ALOGD("_ZN7android9FpsPolicyD1Ev() called");
    return 0;
}

/* Demangled: android::FpsInfo::FpsInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7FpsInfoC1Ev(void) {
    ALOGD("_ZN7android7FpsInfoC1Ev() called");
    return 0;
}

/* Demangled: android::FpsPolicy::cb_fpsRequestReceiver(int, int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9FpsPolicy21cb_fpsRequestReceiverEiiPv(void) {
    ALOGD("_ZN7android9FpsPolicy21cb_fpsRequestReceiverEiiPv() called");
    return 0;
}

/* Demangled: android::FpsInfo::setNumberDisplay(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7FpsInfo16setNumberDisplayEi(void) {
    ALOGD("_ZN7android7FpsInfo16setNumberDisplayEi() called");
    return 0;
}

/* Demangled: android::FpsInfo::recoverStateLocked() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7FpsInfo18recoverStateLockedEv(void) {
    ALOGD("_ZN7android7FpsInfo18recoverStateLockedEv() called");
    return 0;
}

/* Demangled: android::FpsVsync::updateState(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8FpsVsync11updateStateEi(void) {
    ALOGD("_ZN7android8FpsVsync11updateStateEi() called");
    return 0;
}

/* Demangled: android::FpsInfo::~FpsInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7FpsInfoD0Ev(void) {
    ALOGD("_ZN7android7FpsInfoD0Ev() called");
    return 0;
}

/* Demangled: android::FpsVsync::enableTracker(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8FpsVsync13enableTrackerEi(void) {
    ALOGD("_ZN7android8FpsVsync13enableTrackerEi() called");
    return 0;
}

/* Exported Object: VTT for android::FpsPolicy */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android9FpsPolicyE = NULL;

/* Demangled: android::FpsVsync::assertStateLocked() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8FpsVsync17assertStateLockedEv(void) {
    ALOGD("_ZN7android8FpsVsync17assertStateLockedEv() called");
    return 0;
}

/* Demangled: android::FpsVsync::callSwVsyncChange(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8FpsVsync17callSwVsyncChangeEii(void) {
    ALOGD("_ZN7android8FpsVsync17callSwVsyncChangeEii() called");
    return 0;
}

/* Demangled: android::FpsPolicy::assertStateLocked(int, android::String8&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9FpsPolicy17assertStateLockedEiRNS_7String8E(void) {
    ALOGD("_ZN7android9FpsPolicy17assertStateLockedEiRNS_7String8E() called");
    return 0;
}

/* Demangled: virtual thunk to android::FpsInfo::onFirstRef() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n16_N7android7FpsInfo10onFirstRefEv(void) {
    ALOGD("_ZTv0_n16_N7android7FpsInfo10onFirstRefEv() called");
    return 0;
}

/* Demangled: android::FpsVsync::FpsVsync() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8FpsVsyncC1Ev(void) {
    ALOGD("_ZN7android8FpsVsyncC1Ev() called");
    return 0;
}

/* Demangled: android::FpsInfo::cbGetFps(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7FpsInfo8cbGetFpsEi(void) {
    ALOGD("_ZN7android7FpsInfo8cbGetFpsEi() called");
    return 0;
}

/* Demangled: virtual thunk to android::FpsInfo::~FpsInfo() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N7android7FpsInfoD1Ev(void) {
    ALOGD("_ZTv0_n12_N7android7FpsInfoD1Ev() called");
    return 0;
}

/* Demangled: android::FpsVsync::recoverStateLocked() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8FpsVsync18recoverStateLockedEv(void) {
    ALOGD("_ZN7android8FpsVsync18recoverStateLockedEv() called");
    return 0;
}

/* Demangled: android::FpsPolicy::setVideoMode(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9FpsPolicy12setVideoModeEb(void) {
    ALOGD("_ZN7android9FpsPolicy12setVideoModeEb() called");
    return 0;
}

/* Demangled: android::FpsPolicy::~FpsPolicy() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9FpsPolicyD2Ev(void) {
    ALOGD("_ZN7android9FpsPolicyD2Ev() called");
    return 0;
}

/* Demangled: android::FpsInfo::setWindowFlag(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7FpsInfo13setWindowFlagEii(void) {
    ALOGD("_ZN7android7FpsInfo13setWindowFlagEii() called");
    return 0;
}

/* Demangled: android::FpsInfo::setForegroundInfo(int, android::String8&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7FpsInfo17setForegroundInfoEiRNS_7String8E(void) {
    ALOGD("_ZN7android7FpsInfo17setForegroundInfoEiRNS_7String8E() called");
    return 0;
}

/* Demangled: android::FpsInfo::FpsInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7FpsInfoC2Ev(void) {
    ALOGD("_ZN7android7FpsInfoC2Ev() called");
    return 0;
}

/* Demangled: android::FpsVsync::~FpsVsync() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8FpsVsyncD0Ev(void) {
    ALOGD("_ZN7android8FpsVsyncD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to android::FpsPolicy::~FpsPolicy() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N7android9FpsPolicyD0Ev(void) {
    ALOGD("_ZTv0_n12_N7android9FpsPolicyD0Ev() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: android::FpsInfo::forbidAdjustingVsync(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7FpsInfo20forbidAdjustingVsyncEb(void) {
    ALOGD("_ZN7android7FpsInfo20forbidAdjustingVsyncEb() called");
    return 0;
}

/* Demangled: android::FpsVsync::connectServiceLocked(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8FpsVsync20connectServiceLockedEb(void) {
    ALOGD("_ZN7android8FpsVsync20connectServiceLockedEb() called");
    return 0;
}

/* Demangled: createFpsVsyncApi */
extern "C" __attribute__((visibility("default"))) int createFpsVsyncApi(void) {
    ALOGD("createFpsVsyncApi() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: android::FpsPolicy::updateState(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9FpsPolicy11updateStateEi(void) {
    ALOGD("_ZN7android9FpsPolicy11updateStateEi() called");
    return 0;
}

/* Demangled: android::FpsPolicy::fpsRequestReceive(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9FpsPolicy17fpsRequestReceiveEii(void) {
    ALOGD("_ZN7android9FpsPolicy17fpsRequestReceiveEii() called");
    return 0;
}

/* Demangled: android::FpsPolicy::setFlag(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9FpsPolicy7setFlagEjj(void) {
    ALOGD("_ZN7android9FpsPolicy7setFlagEjj() called");
    return 0;
}

/* Demangled: android::FpsInfo::onFirstRef() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7FpsInfo10onFirstRefEv(void) {
    ALOGD("_ZN7android7FpsInfo10onFirstRefEv() called");
    return 0;
}

/* Demangled: android::FpsInfo::updateState(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7FpsInfo11updateStateEi(void) {
    ALOGD("_ZN7android7FpsInfo11updateStateEi() called");
    return 0;
}

/* Demangled: android::FpsInfo::~FpsInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7FpsInfoD1Ev(void) {
    ALOGD("_ZN7android7FpsInfoD1Ev() called");
    return 0;
}

/* Exported Object: vtable for android::FpsVsync */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8FpsVsyncE = NULL;

/* Demangled: android::FpsInfo::setHwcInfo(vendor::mediatek::hardware::dfps::V1_0::HwcInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7FpsInfo10setHwcInfoERKN6vendor8mediatek8hardware4dfps4V1_07HwcInfoE(void) {
    ALOGD("_ZN7android7FpsInfo10setHwcInfoERKN6vendor8mediatek8hardware4dfps4V1_07HwcInfoE() called");
    return 0;
}

/* Demangled: android::FpsInfo::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7FpsInfo10threadLoopEv(void) {
    ALOGD("_ZN7android7FpsInfo10threadLoopEv() called");
    return 0;
}

/* Demangled: android::FpsPolicy::getPanelInfoNumber(int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9FpsPolicy18getPanelInfoNumberEPi(void) {
    ALOGD("_ZN7android9FpsPolicy18getPanelInfoNumberEPi() called");
    return 0;
}

/* Demangled: android::FpsVsync::FpsVsync() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8FpsVsyncC2Ev(void) {
    ALOGD("_ZN7android8FpsVsyncC2Ev() called");
    return 0;
}

/* Demangled: android::getApiString(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12getApiStringEi(void) {
    ALOGD("_ZN7android12getApiStringEi() called");
    return 0;
}

/* Demangled: android::FpsPolicy::FpsPolicy(int, android::String8&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9FpsPolicyC2EiRNS_7String8E(void) {
    ALOGD("_ZN7android9FpsPolicyC2EiRNS_7String8E() called");
    return 0;
}

/* Exported Object: vtable for android::FpsPolicy */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android9FpsPolicyE = NULL;

/* Demangled: virtual thunk to android::FpsPolicy::onFirstRef() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n16_N7android9FpsPolicy10onFirstRefEv(void) {
    ALOGD("_ZTv0_n16_N7android9FpsPolicy10onFirstRefEv() called");
    return 0;
}

/* Exported Object: VTT for android::FpsInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android7FpsInfoE = NULL;

/* Demangled: android::FpsInfo::setInputWindows(android::String8 const&, vendor::mediatek::hardware::dfps::V1_0::SimpleInputWindowInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7FpsInfo15setInputWindowsERKNS_7String8ERKN6vendor8mediatek8hardware4dfps4V1_021SimpleInputWindowInfoE(void) {
    ALOGD("_ZN7android7FpsInfo15setInputWindowsERKNS_7String8ERKN6vendor8mediatek8hardware4dfps4V1_021SimpleInputWindowInfoE() called");
    return 0;
}

/* Demangled: android::FpsInfo::connectServiceLocked(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7FpsInfo20connectServiceLockedEb(void) {
    ALOGD("_ZN7android7FpsInfo20connectServiceLockedEb() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient>::operator=(vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClientEEaSEPS6_(void) {
    ALOGD("_ZN7android2spIN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClientEEaSEPS6_() called");
    return 0;
}

/* Demangled: android::FpsVsync::~FpsVsync() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8FpsVsyncD1Ev(void) {
    ALOGD("_ZN7android8FpsVsyncD1Ev() called");
    return 0;
}

/* Demangled: android::FpsPolicy::~FpsPolicy() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9FpsPolicyD0Ev(void) {
    ALOGD("_ZN7android9FpsPolicyD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to android::FpsPolicy::~FpsPolicy() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N7android9FpsPolicyD1Ev(void) {
    ALOGD("_ZTv0_n12_N7android9FpsPolicyD1Ev() called");
    return 0;
}

/* Demangled: android::FpsInfo::regFpsInfoListener(android::sp<android::FpsInfo::FpsInfoListener>&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7FpsInfo18regFpsInfoListenerERNS_2spINS0_15FpsInfoListenerEEE(void) {
    ALOGD("_ZN7android7FpsInfo18regFpsInfoListenerERNS_2spINS0_15FpsInfoListenerEEE() called");
    return 0;
}

/* Demangled: android::FpsPolicy::onFirstRef() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9FpsPolicy10onFirstRefEv(void) {
    ALOGD("_ZN7android9FpsPolicy10onFirstRefEv() called");
    return 0;
}

/* Demangled: android::FpsPolicy::isValidFpsLocked(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9FpsPolicy16isValidFpsLockedEii(void) {
    ALOGD("_ZN7android9FpsPolicy16isValidFpsLockedEii() called");
    return 0;
}

/* Demangled: android::FpsInfo::~FpsInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7FpsInfoD2Ev(void) {
    ALOGD("_ZN7android7FpsInfoD2Ev() called");
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

/* Demangled: android::FpsPolicy::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9FpsPolicy10threadLoopEv(void) {
    ALOGD("_ZN7android9FpsPolicy10threadLoopEv() called");
    return 0;
}

/* Demangled: android::FpsPolicy::registerFpsRequestListener(android::sp<android::FpsPolicy::FpsRequestListener> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9FpsPolicy26registerFpsRequestListenerERKNS_2spINS0_18FpsRequestListenerEEE(void) {
    ALOGD("_ZN7android9FpsPolicy26registerFpsRequestListenerERKNS_2spINS0_18FpsRequestListenerEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::Thread-in-android::FpsPolicy */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android9FpsPolicyE0_NS_6ThreadE = NULL;

/* Demangled: android::FpsVsync::dumpInfo(android::String8&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8FpsVsync8dumpInfoERNS_7String8E(void) {
    ALOGD("_ZN7android8FpsVsync8dumpInfoERNS_7String8E() called");
    return 0;
}

/* Demangled: android::getModeString(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13getModeStringEi(void) {
    ALOGD("_ZN7android13getModeStringEi() called");
    return 0;
}

/* Demangled: android::FpsPolicy::cancelFpsRequestListener() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9FpsPolicy24cancelFpsRequestListenerEv(void) {
    ALOGD("_ZN7android9FpsPolicy24cancelFpsRequestListenerEv() called");
    return 0;
}

/* Demangled: android::FpsPolicy::FpsPolicy(int, android::String8&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9FpsPolicyC1EiRNS_7String8E(void) {
    ALOGD("_ZN7android9FpsPolicyC1EiRNS_7String8E() called");
    return 0;
}

/* Demangled: android::FpsInfo::setSingleLayer(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7FpsInfo14setSingleLayerEi(void) {
    ALOGD("_ZN7android7FpsInfo14setSingleLayerEi() called");
    return 0;
}

/* Exported Object: construction vtable for android::Thread-in-android::FpsInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android7FpsInfoE0_NS_6ThreadE = NULL;

/* Exported Object: vtable for android::FpsInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android7FpsInfoE = NULL;

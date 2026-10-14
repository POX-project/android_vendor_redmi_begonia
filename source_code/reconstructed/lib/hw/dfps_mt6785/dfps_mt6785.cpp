/*
 * Reverse-Engineered Source for: dfps.mt6785.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "dfps_mt6785"

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
#include "dfps_mt6785.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_MTK_DFRC "/dev/mtk_dfrc"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_MTK_DFRC, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_MTK_DFRC, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_MTK_DFRC, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Hardware Module Implementation */
static int dfps_mt6785_open(const struct hw_module_t* module, const char* id, struct hw_device_t** device);
static int dfps_mt6785_close(struct hw_device_t* dev);

static struct hw_module_methods_t dfps_mt6785_module_methods = {
    .open = dfps_mt6785_open,
};

struct hw_module_t HAL_MODULE_INFO_SYM __attribute__ ((visibility ("default"))) = {
    .tag = HARDWARE_MODULE_TAG,
    .module_api_version = HARDWARE_MODULE_API_VERSION(1, 0),
    .hal_api_version = HARDWARE_HAL_API_VERSION,
    .id = "dfps",
    .name = "Begonia dfps_mt6785 Module",
    .author = "LineageOS / Community RE",
    .methods = &dfps_mt6785_module_methods,
    .dso = NULL,
    .reserved = {0},
};

static int dfps_mt6785_open(const struct hw_module_t* module, const char* id, struct hw_device_t** device) {
    ALOGI("Opening %s module (id: %s)", module->name, id);
    open_device_node();
    return 0;
}

static int dfps_mt6785_close(struct hw_device_t* dev) {
    ALOGI("Closing dfps_mt6785 module");
    if (dev) free(dev);
    return 0;
}

/* Demangled: android::FpsPolicyService::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16FpsPolicyService10threadLoopEv(void) {
    ALOGD("_ZN7android16FpsPolicyService10threadLoopEv() called");
    return 0;
}

/* Demangled: android::FpsPolicyService::printListInfoLocked(android::String8&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16FpsPolicyService19printListInfoLockedERNS_7String8E(void) {
    ALOGD("_ZN7android16FpsPolicyService19printListInfoLockedERNS_7String8E() called");
    return 0;
}

/* Demangled: __aeabi_uidiv */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidiv(void) {
    ALOGD("__aeabi_uidiv() called");
    return 0;
}

/* Demangled: android::FpsPolicyService::FpsPolicyService() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16FpsPolicyServiceC1Ev(void) {
    ALOGD("_ZN7android16FpsPolicyServiceC1Ev() called");
    return 0;
}

/* Demangled: android::FpsPolicyService::setForegroundInfo(int, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16FpsPolicyService17setForegroundInfoEiPKcj(void) {
    ALOGD("_ZN7android16FpsPolicyService17setForegroundInfoEiPKcj() called");
    return 0;
}

/* Demangled: android::FpsPolicyTracker::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16FpsPolicyTracker10threadLoopEv(void) {
    ALOGD("_ZN7android16FpsPolicyTracker10threadLoopEv() called");
    return 0;
}

/* Demangled: android::FpsPolicyTracker::~FpsPolicyTracker() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16FpsPolicyTrackerD1Ev(void) {
    ALOGD("_ZN7android16FpsPolicyTrackerD1Ev() called");
    return 0;
}

/* Demangled: __udivsi3 */
extern "C" __attribute__((visibility("default"))) int __udivsi3(void) {
    ALOGD("__udivsi3() called");
    return 0;
}

/* Demangled: android::FpsPolicyService::setInputWindows(char const*, unsigned int, DFRC_DRV_INPUT_WINDOW_INFO const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16FpsPolicyService15setInputWindowsEPKcjRK26DFRC_DRV_INPUT_WINDOW_INFO(void) {
    ALOGD("_ZN7android16FpsPolicyService15setInputWindowsEPKcjRK26DFRC_DRV_INPUT_WINDOW_INFO() called");
    return 0;
}

/* Demangled: android::FpsPolicyService::printListFpsRangeLocked(android::String8&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16FpsPolicyService23printListFpsRangeLockedERNS_7String8E(void) {
    ALOGD("_ZN7android16FpsPolicyService23printListFpsRangeLockedERNS_7String8E() called");
    return 0;
}

/* Demangled: android::FpsPolicyService::~FpsPolicyService() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16FpsPolicyServiceD2Ev(void) {
    ALOGD("_ZN7android16FpsPolicyServiceD2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, android::sp<android::FpsPolicyService::FpsPolicyInfoPack> > >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService17FpsPolicyInfoPackEEEEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService17FpsPolicyInfoPackEEEEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<DFRC_DRV_REFRESH_RANGE, std::__1::allocator<DFRC_DRV_REFRESH_RANGE>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<DFRC_DRV_REFRESH_RANGE>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferI22DFRC_DRV_REFRESH_RANGERNS_9allocatorIS1_EEEC2EjjS4_(void) {
    ALOGD("_ZNSt3__114__split_bufferI22DFRC_DRV_REFRESH_RANGERNS_9allocatorIS1_EEEC2EjjS4_() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: android::FpsPolicyTracker::computeNextDumpTimeLocked() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16FpsPolicyTracker25computeNextDumpTimeLockedEv(void) {
    ALOGD("_ZN7android16FpsPolicyTracker25computeNextDumpTimeLockedEv() called");
    return 0;
}

/* Demangled: dfps_device_open(hw_module_t const*, char const*, hw_device_t**) */
extern "C" __attribute__((visibility("default"))) int _Z16dfps_device_openPK11hw_module_tPKcPP11hw_device_t(void) {
    ALOGD("_Z16dfps_device_openPK11hw_module_tPKcPP11hw_device_t() called");
    return 0;
}

/* Demangled: android::FpsPolicyService::getPanelInfo(DFRC_DRV_PANEL_INFO*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16FpsPolicyService12getPanelInfoEP19DFRC_DRV_PANEL_INFO(void) {
    ALOGD("_ZN7android16FpsPolicyService12getPanelInfoEP19DFRC_DRV_PANEL_INFO() called");
    return 0;
}

/* Demangled: android::sp<android::FpsPolicyService::FpsPolicyInfoPack>::sp(android::FpsPolicyService::FpsPolicyInfoPack*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_16FpsPolicyService17FpsPolicyInfoPackEEC2EPS2_(void) {
    ALOGD("_ZN7android2spINS_16FpsPolicyService17FpsPolicyInfoPackEEC2EPS2_() called");
    return 0;
}

/* Exported Object: vtable for android::FpsPolicyService::FpsInfoPack */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android16FpsPolicyService11FpsInfoPackE = NULL;

/* Demangled: android::FpsPolicyTracker::FpsPolicyTracker() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16FpsPolicyTrackerC2Ev(void) {
    ALOGD("_ZN7android16FpsPolicyTrackerC2Ev() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: android::FpsPolicyService::registerCallback(int, void*, void (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16FpsPolicyService16registerCallbackEiPvPFvvE(void) {
    ALOGD("_ZN7android16FpsPolicyService16registerCallbackEiPvPFvvE() called");
    return 0;
}

/* Demangled: android::FpsPolicyService::printSystemInfoLocked(android::String8&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16FpsPolicyService21printSystemInfoLockedERNS_7String8E(void) {
    ALOGD("_ZN7android16FpsPolicyService21printSystemInfoLockedERNS_7String8E() called");
    return 0;
}

/* Demangled: android::FpsPolicyService::dump(unsigned int*, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16FpsPolicyService4dumpEPjPc(void) {
    ALOGD("_ZN7android16FpsPolicyService4dumpEPjPc() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, android::sp<android::FpsPolicyService::FpsInfoPack> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService11FpsInfoPackEEEEEE10do_compareEPKvS9_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService11FpsInfoPackEEEEEE10do_compareEPKvS9_() called");
    return 0;
}

/* Demangled: std::__1::vector<DFRC_DRV_REFRESH_RANGE, std::__1::allocator<DFRC_DRV_REFRESH_RANGE> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI22DFRC_DRV_REFRESH_RANGENS_9allocatorIS1_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorI22DFRC_DRV_REFRESH_RANGENS_9allocatorIS1_EEE8__appendEj() called");
    return 0;
}

/* Demangled: android::sp<android::FpsPolicyTracker>::operator=(android::FpsPolicyTracker*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_16FpsPolicyTrackerEEaSEPS1_(void) {
    ALOGD("_ZN7android2spINS_16FpsPolicyTrackerEEaSEPS1_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, android::sp<android::FpsPolicyService::FpsPolicyInfoPack> > >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService17FpsPolicyInfoPackEEEEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService17FpsPolicyInfoPackEEEEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::FpsPolicyService::setHwcInfo(DFRC_DRV_HWC_INFO const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16FpsPolicyService10setHwcInfoERK17DFRC_DRV_HWC_INFO(void) {
    ALOGD("_ZN7android16FpsPolicyService10setHwcInfoERK17DFRC_DRV_HWC_INFO() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, android::sp<android::FpsPolicyService::FpsInfoPack> > >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService11FpsInfoPackEEEEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService11FpsInfoPackEEEEEE12do_constructEPvj() called");
    return 0;
}

/* Exported Object: vtable for android::FpsPolicyService::FpsPolicyInfoPack */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android16FpsPolicyService17FpsPolicyInfoPackE = NULL;

/* Demangled: virtual thunk to android::FpsPolicyTracker::~FpsPolicyTracker() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N7android16FpsPolicyTrackerD0Ev(void) {
    ALOGD("_ZTv0_n12_N7android16FpsPolicyTrackerD0Ev() called");
    return 0;
}

/* Demangled: __divdi3 */
extern "C" __attribute__((visibility("default"))) int __divdi3(void) {
    ALOGD("__divdi3() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, android::sp<android::FpsPolicyService::FpsInfoPack> > >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService11FpsInfoPackEEEEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService11FpsInfoPackEEEEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, android::sp<android::FpsPolicyService::FpsInfoPack> > >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService11FpsInfoPackEEEEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService11FpsInfoPackEEEEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: virtual thunk to android::FpsPolicyService::~FpsPolicyService() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N7android16FpsPolicyServiceD1Ev(void) {
    ALOGD("_ZTv0_n12_N7android16FpsPolicyServiceD1Ev() called");
    return 0;
}

/* Demangled: android::FpsPolicyTracker::stop() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16FpsPolicyTracker4stopEv(void) {
    ALOGD("_ZN7android16FpsPolicyTracker4stopEv() called");
    return 0;
}

/* Demangled: virtual thunk to android::FpsPolicyTracker::onFirstRef() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n16_N7android16FpsPolicyTracker10onFirstRefEv(void) {
    ALOGD("_ZTv0_n16_N7android16FpsPolicyTracker10onFirstRefEv() called");
    return 0;
}

/* Demangled: __udivmoddi4 */
extern "C" __attribute__((visibility("default"))) int __udivmoddi4(void) {
    ALOGD("__udivmoddi4() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: android::FpsPolicyService::unregInfo(unsigned long long, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16FpsPolicyService9unregInfoEyb(void) {
    ALOGD("_ZN7android16FpsPolicyService9unregInfoEyb() called");
    return 0;
}

/* Demangled: android::FpsPolicyTracker::setResume() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16FpsPolicyTracker9setResumeEv(void) {
    ALOGD("_ZN7android16FpsPolicyTracker9setResumeEv() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: android::FpsPolicyService::printListPolicyInfoLocked(android::String8&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16FpsPolicyService25printListPolicyInfoLockedERNS_7String8E(void) {
    ALOGD("_ZN7android16FpsPolicyService25printListPolicyInfoLockedERNS_7String8E() called");
    return 0;
}

/* Demangled: android::FpsPolicyService::regPolicy(char const*, unsigned int, DFRC_DRV_POLICY const&, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16FpsPolicyService9regPolicyEPKcjRK15DFRC_DRV_POLICYPi(void) {
    ALOGD("_ZN7android16FpsPolicyService9regPolicyEPKcjRK15DFRC_DRV_POLICYPi() called");
    return 0;
}

/* Demangled: android::FpsPolicyTracker::setSuspend() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16FpsPolicyTracker10setSuspendEv(void) {
    ALOGD("_ZN7android16FpsPolicyTracker10setSuspendEv() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<unsigned long long, android::sp<android::FpsPolicyService::FpsInfoPack> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService11FpsInfoPackEEEEEEE = NULL;

/* Demangled: android::FpsPolicyService::readyToRun() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16FpsPolicyService10readyToRunEv(void) {
    ALOGD("_ZN7android16FpsPolicyService10readyToRunEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, android::sp<android::FpsPolicyService::FpsPolicyInfoPack> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService17FpsPolicyInfoPackEEEEEE10do_compareEPKvS9_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService17FpsPolicyInfoPackEEEEEE10do_compareEPKvS9_() called");
    return 0;
}

/* Demangled: __divmoddi4 */
extern "C" __attribute__((visibility("default"))) int __divmoddi4(void) {
    ALOGD("__divmoddi4() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: android::FpsPolicyService::enableTracker(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16FpsPolicyService13enableTrackerEi(void) {
    ALOGD("_ZN7android16FpsPolicyService13enableTrackerEi() called");
    return 0;
}

/* Demangled: android::FpsPolicyService::regInfo(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16FpsPolicyService7regInfoEy(void) {
    ALOGD("_ZN7android16FpsPolicyService7regInfoEy() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, android::sp<android::FpsPolicyService::FpsInfoPack> > >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService11FpsInfoPackEEEEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService11FpsInfoPackEEEEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::getModeString(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13getModeStringEi(void) {
    ALOGD("_ZN7android13getModeStringEi() called");
    return 0;
}

/* Demangled: android::FpsPolicyTracker::saveRequestInfo(DFRC_DRV_VSYNC_REQUEST const&, DFRC_DRC_REQUEST_SET const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16FpsPolicyTracker15saveRequestInfoERK22DFRC_DRV_VSYNC_REQUESTRK20DFRC_DRC_REQUEST_SET(void) {
    ALOGD("_ZN7android16FpsPolicyTracker15saveRequestInfoERK22DFRC_DRV_VSYNC_REQUESTRK20DFRC_DRC_REQUEST_SET() called");
    return 0;
}

/* Demangled: std::__1::vector<DFRC_DRV_REFRESH_RANGE, std::__1::allocator<DFRC_DRV_REFRESH_RANGE> >::__swap_out_circular_buffer(std::__1::__split_buffer<DFRC_DRV_REFRESH_RANGE, std::__1::allocator<DFRC_DRV_REFRESH_RANGE>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI22DFRC_DRV_REFRESH_RANGENS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE(void) {
    ALOGD("_ZNSt3__16vectorI22DFRC_DRV_REFRESH_RANGENS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE() called");
    return 0;
}

/* Demangled: android::FpsPolicyTracker::~FpsPolicyTracker() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16FpsPolicyTrackerD0Ev(void) {
    ALOGD("_ZN7android16FpsPolicyTrackerD0Ev() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: android::FpsPolicyService::~FpsPolicyService() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16FpsPolicyServiceD1Ev(void) {
    ALOGD("_ZN7android16FpsPolicyServiceD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, android::sp<android::FpsPolicyService::FpsInfoPack> > >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService11FpsInfoPackEEEEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService11FpsInfoPackEEEEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: android::FpsPolicyTracker::FpsPolicyTracker() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16FpsPolicyTrackerC1Ev(void) {
    ALOGD("_ZN7android16FpsPolicyTrackerC1Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<DFRC_DRV_REFRESH_RANGE, std::__1::allocator<DFRC_DRV_REFRESH_RANGE> >::resize(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI22DFRC_DRV_REFRESH_RANGENS_9allocatorIS1_EEE6resizeEj(void) {
    ALOGD("_ZNSt3__16vectorI22DFRC_DRV_REFRESH_RANGENS_9allocatorIS1_EEE6resizeEj() called");
    return 0;
}

/* Exported Object: construction vtable for android::Thread-in-android::FpsPolicyService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android16FpsPolicyServiceE0_NS_6ThreadE = NULL;

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: android::getApiString(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12getApiStringEi(void) {
    ALOGD("_ZN7android12getApiStringEi() called");
    return 0;
}

/* Demangled: android::FpsPolicyService::FpsPolicyService() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16FpsPolicyServiceC2Ev(void) {
    ALOGD("_ZN7android16FpsPolicyServiceC2Ev() called");
    return 0;
}

/* Demangled: android::FpsPolicyTracker::~FpsPolicyTracker() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16FpsPolicyTrackerD2Ev(void) {
    ALOGD("_ZN7android16FpsPolicyTrackerD2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::Thread-in-android::FpsPolicyTracker */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android16FpsPolicyTrackerE0_NS_6ThreadE = NULL;

/* Demangled: __aeabi_uidivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidivmod(void) {
    ALOGD("__aeabi_uidivmod() called");
    return 0;
}

/* Demangled: android::FpsPolicyService::unregPolicy(unsigned long long, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16FpsPolicyService11unregPolicyEyb(void) {
    ALOGD("_ZN7android16FpsPolicyService11unregPolicyEyb() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, android::sp<android::FpsPolicyService::FpsPolicyInfoPack> > >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService17FpsPolicyInfoPackEEEEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService17FpsPolicyInfoPackEEEEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: android::FpsPolicyService::setWindowFlag(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16FpsPolicyService13setWindowFlagEii(void) {
    ALOGD("_ZN7android16FpsPolicyService13setWindowFlagEii() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, android::sp<android::FpsPolicyService::FpsPolicyInfoPack> > >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService17FpsPolicyInfoPackEEEEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService17FpsPolicyInfoPackEEEEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: __udivmodsi4 */
extern "C" __attribute__((visibility("default"))) int __udivmodsi4(void) {
    ALOGD("__udivmodsi4() called");
    return 0;
}

/* Demangled: android::FpsPolicyService::setNumberDisplay(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16FpsPolicyService16setNumberDisplayEi(void) {
    ALOGD("_ZN7android16FpsPolicyService16setNumberDisplayEi() called");
    return 0;
}

/* Demangled: android::FpsPolicyService::dumpVsyncRequestLocked(DFRC_DRV_VSYNC_REQUEST const&, DFRC_DRC_REQUEST_SET const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16FpsPolicyService22dumpVsyncRequestLockedERK22DFRC_DRV_VSYNC_REQUESTRK20DFRC_DRC_REQUEST_SET(void) {
    ALOGD("_ZN7android16FpsPolicyService22dumpVsyncRequestLockedERK22DFRC_DRV_VSYNC_REQUESTRK20DFRC_DRC_REQUEST_SET() called");
    return 0;
}

/* Exported Object: VTT for android::FpsPolicyService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android16FpsPolicyServiceE = NULL;

/* Demangled: virtual thunk to android::FpsPolicyService::~FpsPolicyService() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N7android16FpsPolicyServiceD0Ev(void) {
    ALOGD("_ZTv0_n12_N7android16FpsPolicyServiceD0Ev() called");
    return 0;
}

/* Demangled: android::FpsPolicyTracker::dumpFpsPolicyInfoLocked() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16FpsPolicyTracker23dumpFpsPolicyInfoLockedEv(void) {
    ALOGD("_ZN7android16FpsPolicyTracker23dumpFpsPolicyInfoLockedEv() called");
    return 0;
}

/* Demangled: __aeabi_ldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_ldivmod(void) {
    ALOGD("__aeabi_ldivmod() called");
    return 0;
}

/* Demangled: android::FpsPolicyService::forbidAdjustingVsync(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16FpsPolicyService20forbidAdjustingVsyncEi(void) {
    ALOGD("_ZN7android16FpsPolicyService20forbidAdjustingVsyncEi() called");
    return 0;
}

/* Demangled: android::FpsPolicyService::setFps(DFRC_DRV_POLICY const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16FpsPolicyService6setFpsERK15DFRC_DRV_POLICY(void) {
    ALOGD("_ZN7android16FpsPolicyService6setFpsERK15DFRC_DRV_POLICY() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<unsigned long long, android::sp<android::FpsPolicyService::FpsPolicyInfoPack> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService17FpsPolicyInfoPackEEEEEEE = NULL;

/* Demangled: android::FpsPolicyService::tryGetRequestLocked() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16FpsPolicyService19tryGetRequestLockedEv(void) {
    ALOGD("_ZN7android16FpsPolicyService19tryGetRequestLockedEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, android::sp<android::FpsPolicyService::FpsPolicyInfoPack> > >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService17FpsPolicyInfoPackEEEEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService17FpsPolicyInfoPackEEEEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: virtual thunk to android::FpsPolicyTracker::~FpsPolicyTracker() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N7android16FpsPolicyTrackerD1Ev(void) {
    ALOGD("_ZTv0_n12_N7android16FpsPolicyTrackerD1Ev() called");
    return 0;
}

/* Demangled: dfpsGetFunction(dfps_device*, int) */
extern "C" __attribute__((visibility("default"))) int _Z15dfpsGetFunctionP11dfps_devicei(void) {
    ALOGD("_Z15dfpsGetFunctionP11dfps_devicei() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, android::sp<android::FpsPolicyService::FpsPolicyInfoPack> > >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService17FpsPolicyInfoPackEEEEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService17FpsPolicyInfoPackEEEEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::FpsPolicyService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android16FpsPolicyServiceE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, android::sp<android::FpsPolicyService::FpsInfoPack> > >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService11FpsInfoPackEEEEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService11FpsInfoPackEEEEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: android::sp<android::FpsPolicyService::FpsInfoPack>::sp(android::FpsPolicyService::FpsInfoPack*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_16FpsPolicyService11FpsInfoPackEEC2EPS2_(void) {
    ALOGD("_ZN7android2spINS_16FpsPolicyService11FpsInfoPackEEC2EPS2_() called");
    return 0;
}

/* Exported Object: vtable for android::FpsPolicyTracker */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android16FpsPolicyTrackerE = NULL;

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: android::FpsPolicyService::getFpsRange(DFRC_DRV_REFRESH_RANGE*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16FpsPolicyService11getFpsRangeEP22DFRC_DRV_REFRESH_RANGE(void) {
    ALOGD("_ZN7android16FpsPolicyService11getFpsRangeEP22DFRC_DRV_REFRESH_RANGE() called");
    return 0;
}

/* Demangled: android::FpsPolicyService::setSingleLayer(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16FpsPolicyService14setSingleLayerEi(void) {
    ALOGD("_ZN7android16FpsPolicyService14setSingleLayerEi() called");
    return 0;
}

/* Demangled: android::FpsPolicyService::~FpsPolicyService() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16FpsPolicyServiceD0Ev(void) {
    ALOGD("_ZN7android16FpsPolicyServiceD0Ev() called");
    return 0;
}

/* Demangled: android::FpsPolicyTracker::onFirstRef() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16FpsPolicyTracker10onFirstRefEv(void) {
    ALOGD("_ZN7android16FpsPolicyTracker10onFirstRefEv() called");
    return 0;
}

/* Exported Object: VTT for android::FpsPolicyTracker */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android16FpsPolicyTrackerE = NULL;

/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.dfps@1.0-impl.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_dfps_1_0_impl"

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
#include "vendor_mediatek_hardware_dfps_1_0_impl.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::getPanelInfo(vendor::mediatek::hardware::dfps::V1_0::PanelInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal12getPanelInfoEPNS3_9PanelInfoE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal12getPanelInfoEPNS3_9PanelInfoE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsInfoClient::unregInfo(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClient9unregInfoEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClient9unregInfoEm() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::FpsInfoClient::~FpsInfoClient() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClientD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClientD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::unregInfo(unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal9unregInfoEmi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal9unregInfoEmi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::DfpsHal(hw_module_t const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalC2EPK11hw_module_t(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalC2EPK11hw_module_t() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::createPolicyClient(std::__1::function<void (vendor::mediatek::hardware::dfps::V1_0::Error, android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal18createPolicyClientENSt3__18functionIFvNS3_5ErrorERKN7android2spINS3_16IFpsPolicyClientEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal18createPolicyClientENSt3__18functionIFvNS3_5ErrorERKN7android2spINS3_16IFpsPolicyClientEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::transferSimpleInputWindowInfo(DFRC_DRV_INPUT_WINDOW_INFO*, vendor::mediatek::hardware::dfps::V1_0::SimpleInputWindowInfo&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal29transferSimpleInputWindowInfoEP26DFRC_DRV_INPUT_WINDOW_INFORNS3_21SimpleInputWindowInfoE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal29transferSimpleInputWindowInfoEP26DFRC_DRV_INPUT_WINDOW_INFORNS3_21SimpleInputWindowInfoE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::setForegroundInfo(int, android::hardware::hidl_string) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal17setForegroundInfoEiN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal17setForegroundInfoEiN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::enableCallback(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal14enableCallbackEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal14enableCallbackEb() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::unregInfo(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal9unregInfoEm(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal9unregInfoEm() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyClient::~FpsPolicyClient() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClientD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClientD1Ev() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::dfps::V1_0::implementation::FpsVsyncClient */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClientE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyClient::FpsPolicyClient(vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyServiceBase&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClientC2ERNS4_20FpsPolicyServiceBaseE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClientC2ERNS4_20FpsPolicyServiceBaseE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsInfoClient::setHwcInfo(vendor::mediatek::hardware::dfps::V1_0::HwcInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClient10setHwcInfoERKNS3_7HwcInfoE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClient10setHwcInfoERKNS3_7HwcInfoE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::setHwcInfo(vendor::mediatek::hardware::dfps::V1_0::HwcInfo) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal10setHwcInfoENS3_7HwcInfoE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal10setHwcInfoENS3_7HwcInfoE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::enableTracker(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal13enableTrackerEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal13enableTrackerEi() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::dfps::V1_0::implementation::FpsInfoDeathRecipient */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4dfps4V1_014implementation21FpsInfoDeathRecipientE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::setInputWindows(android::hardware::hidl_string, vendor::mediatek::hardware::dfps::V1_0::SimpleInputWindowInfo) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal15setInputWindowsEN7android8hardware11hidl_stringENS3_21SimpleInputWindowInfoE(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal15setInputWindowsEN7android8hardware11hidl_stringENS3_21SimpleInputWindowInfoE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyClient::getPanelInfo(std::__1::function<void (vendor::mediatek::hardware::dfps::V1_0::Error, vendor::mediatek::hardware::dfps::V1_0::PanelInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClient12getPanelInfoENSt3__18functionIFvNS3_5ErrorERKNS3_9PanelInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClient12getPanelInfoENSt3__18functionIFvNS3_5ErrorERKNS3_9PanelInfoEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClientE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::setWindowFlag(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal13setWindowFlagEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal13setWindowFlagEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::forbidAdjustingVsync(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal20forbidAdjustingVsyncEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal20forbidAdjustingVsyncEi() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient-in-vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClientE0_NS3_16IFpsPolicyClientE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::unregPolicy(unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal11unregPolicyEmi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal11unregPolicyEmi() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsInfoClient::setForegroundInfo(int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClient17setForegroundInfoEiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClient17setForegroundInfoEiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsInfoClient::FpsInfoClient(vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyServiceBase&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClientC2ERNS4_20FpsPolicyServiceBaseE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClientC2ERNS4_20FpsPolicyServiceBaseE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::transferFpsRange(vendor::mediatek::hardware::dfps::V1_0::FpsRange*, DFRC_DRV_REFRESH_RANGE&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal16transferFpsRangeEPNS3_8FpsRangeER22DFRC_DRV_REFRESH_RANGE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal16transferFpsRangeEPNS3_8FpsRangeER22DFRC_DRV_REFRESH_RANGE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::createVsyncClient(std::__1::function<void (vendor::mediatek::hardware::dfps::V1_0::Error, android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal17createVsyncClientENSt3__18functionIFvNS3_5ErrorERKN7android2spINS3_15IFpsVsyncClientEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal17createVsyncClientENSt3__18functionIFvNS3_5ErrorERKN7android2spINS3_15IFpsVsyncClientEEEEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::getPanelInfo(vendor::mediatek::hardware::dfps::V1_0::PanelInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal12getPanelInfoEPNS3_9PanelInfoE(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal12getPanelInfoEPNS3_9PanelInfoE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyClient::getFpsRange(vendor::mediatek::hardware::dfps::V1_0::FpsRange const&, std::__1::function<void (vendor::mediatek::hardware::dfps::V1_0::Error, vendor::mediatek::hardware::dfps::V1_0::FpsRange const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClient11getFpsRangeERKNS3_8FpsRangeENSt3__18functionIFvNS3_5ErrorES8_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClient11getFpsRangeERKNS3_8FpsRangeENSt3__18functionIFvNS3_5ErrorES8_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsInfoClient::~FpsInfoClient() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClientD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClientD0Ev() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::dfps::V1_0::implementation::FpsVsyncClient */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClientE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::getVsyncClient() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal14getVsyncClientEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal14getVsyncClientEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::forbidAdjustingVsync(int) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal20forbidAdjustingVsyncEi(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal20forbidAdjustingVsyncEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::setForegroundInfo(int, android::hardware::hidl_string) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal17setForegroundInfoEiN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal17setForegroundInfoEiN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::DfpsHal(hw_module_t const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalC1EPK11hw_module_t(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalC1EPK11hw_module_t() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::regInfo(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal7regInfoERKN7android2spINS3_8IFpsInfoEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal7regInfoERKN7android2spINS3_8IFpsInfoEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::dumpInfo(unsigned int*, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal8dumpInfoEPjPc(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal8dumpInfoEPjPc() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::setSingleLayer(int) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal14setSingleLayerEi(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal14setSingleLayerEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyClient::setFps(vendor::mediatek::hardware::dfps::V1_0::FpsPolicyInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClient6setFpsERKNS3_13FpsPolicyInfoE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClient6setFpsERKNS3_13FpsPolicyInfoE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsVsyncClient::FpsVsyncClient(vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyServiceBase&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClientC1ERNS4_20FpsPolicyServiceBaseE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClientC1ERNS4_20FpsPolicyServiceBaseE() called");
    return 0;
}

/* Demangled: void std::__1::vector<vendor::mediatek::hardware::dfps::V1_0::implementation::InfoPackage, std::__1::allocator<vendor::mediatek::hardware::dfps::V1_0::implementation::InfoPackage> >::__push_back_slow_path<vendor::mediatek::hardware::dfps::V1_0::implementation::InfoPackage const&>(vendor::mediatek::hardware::dfps::V1_0::implementation::InfoPackage const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN6vendor8mediatek8hardware4dfps4V1_014implementation11InfoPackageENS_9allocatorIS7_EEE21__push_back_slow_pathIRKS7_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN6vendor8mediatek8hardware4dfps4V1_014implementation11InfoPackageENS_9allocatorIS7_EEE21__push_back_slow_pathIRKS7_EEvOT_() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::regVsyncClient(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync> const&) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal14regVsyncClientERKN7android2spINS3_9IFpsVsyncEEE(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal14regVsyncClientERKN7android2spINS3_9IFpsVsyncEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::setNumberDisplay(int) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal16setNumberDisplayEi(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal16setNumberDisplayEi() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::setFps(vendor::mediatek::hardware::dfps::V1_0::FpsPolicyInfo) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal6setFpsENS3_13FpsPolicyInfoE(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal6setFpsENS3_13FpsPolicyInfoE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::regInfo(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal7regInfoERKN7android2spINS3_8IFpsInfoEEEm(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal7regInfoERKN7android2spINS3_8IFpsInfoEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsInfoClient::~FpsInfoClient() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClientD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClientD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::transferHwcInfo(DFRC_DRV_HWC_INFO*, vendor::mediatek::hardware::dfps::V1_0::HwcInfo&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal15transferHwcInfoEP17DFRC_DRV_HWC_INFORNS3_7HwcInfoE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal15transferHwcInfoEP17DFRC_DRV_HWC_INFORNS3_7HwcInfoE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::swVsyncChangeHook(void*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal17swVsyncChangeHookEPvii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal17swVsyncChangeHookEPvii() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::setHwcInfo(vendor::mediatek::hardware::dfps::V1_0::HwcInfo) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal10setHwcInfoENS3_7HwcInfoE(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal10setHwcInfoENS3_7HwcInfoE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::removeVsyncClient() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal17removeVsyncClientEv(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal17removeVsyncClientEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::regPolicy(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy> const&, android::hardware::hidl_string, vendor::mediatek::hardware::dfps::V1_0::FpsPolicyInfo, int*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal9regPolicyERKN7android2spINS3_10IFpsPolicyEEENS6_8hardware11hidl_stringENS3_13FpsPolicyInfoEPi(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal9regPolicyERKN7android2spINS3_10IFpsPolicyEEENS6_8hardware11hidl_stringENS3_13FpsPolicyInfoEPi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsVsyncClient::regVsync(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync> const&, android::sp<vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClient8regVsyncERKN7android2spINS3_9IFpsVsyncEEERKNS7_INS3_14IVsyncCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClient8regVsyncERKN7android2spINS3_9IFpsVsyncEEERKNS7_INS3_14IVsyncCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsVsyncClient::~FpsVsyncClient() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClientD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClientD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::regPolicy(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy> const&, android::hardware::hidl_string, vendor::mediatek::hardware::dfps::V1_0::FpsPolicyInfo, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal9regPolicyERKN7android2spINS3_10IFpsPolicyEEENS6_8hardware11hidl_stringENS3_13FpsPolicyInfoEPi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal9regPolicyERKN7android2spINS3_10IFpsPolicyEEENS6_8hardware11hidl_stringENS3_13FpsPolicyInfoEPi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsInfoClient::setSingleLayer(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClient14setSingleLayerEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClient14setSingleLayerEi() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::dfps::V1_0::implementation::FpsInfoClient */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClientE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::setNumberDisplay(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal16setNumberDisplayEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal16setNumberDisplayEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::transferPanelInfo(vendor::mediatek::hardware::dfps::V1_0::PanelInfo*, DFRC_DRV_PANEL_INFO&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal17transferPanelInfoEPNS3_9PanelInfoER19DFRC_DRV_PANEL_INFO(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal17transferPanelInfoEPNS3_9PanelInfoER19DFRC_DRV_PANEL_INFO() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::~DfpsHal() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::~DfpsHal() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalD0Ev() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyClient */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClientE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsInfoClient::~FpsInfoClient() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClientD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClientD2Ev() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyServiceBase */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4dfps4V1_014implementation20FpsPolicyServiceBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyClient::~FpsPolicyClient() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClientD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClientD0Ev() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyClient */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClientE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsVsyncClient::~FpsVsyncClient() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClientD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClientD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::createInfoClient(std::__1::function<void (vendor::mediatek::hardware::dfps::V1_0::Error, android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal16createInfoClientENSt3__18functionIFvNS3_5ErrorERKN7android2spINS3_14IFpsInfoClientEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal16createInfoClientENSt3__18functionIFvNS3_5ErrorERKN7android2spINS3_14IFpsInfoClientEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::transferFpsPolicyInfo(DFRC_DRV_POLICY*, vendor::mediatek::hardware::dfps::V1_0::FpsPolicyInfo&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal21transferFpsPolicyInfoEP15DFRC_DRV_POLICYRNS3_13FpsPolicyInfoE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal21transferFpsPolicyInfoEP15DFRC_DRV_POLICYRNS3_13FpsPolicyInfoE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::~DfpsHal() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService-in-vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalE0_NS3_17IFpsPolicyServiceE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::dfps::V1_0::implementation::FpsInfoClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClientE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::FpsVsyncClient::~FpsVsyncClient() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClientD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClientD0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::setWindowFlag(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal13setWindowFlagEii(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal13setWindowFlagEii() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::~DfpsHal() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalD1Ev() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::dfps::V1_0::implementation::FpsInfoClient */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClientE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::enableCallback(bool) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal14enableCallbackEb(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal14enableCallbackEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyClient::~FpsPolicyClient() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClientD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClientD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsInfoClient::setInputWindows(android::hardware::hidl_string const&, vendor::mediatek::hardware::dfps::V1_0::SimpleInputWindowInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClient15setInputWindowsERKN7android8hardware11hidl_stringERKNS3_21SimpleInputWindowInfoE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClient15setInputWindowsERKN7android8hardware11hidl_stringERKNS3_21SimpleInputWindowInfoE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsInfoClient::setNumberDisplay(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClient16setNumberDisplayEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClient16setNumberDisplayEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsVsyncClient::~FpsVsyncClient() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClientD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClientD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsInfoClient::FpsInfoClient(vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyServiceBase&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClientC1ERNS4_20FpsPolicyServiceBaseE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClientC1ERNS4_20FpsPolicyServiceBaseE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::dumpDebugInfo(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal13dumpDebugInfoENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal13dumpDebugInfoENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::setFps(vendor::mediatek::hardware::dfps::V1_0::FpsPolicyInfo) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal6setFpsENS3_13FpsPolicyInfoE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal6setFpsENS3_13FpsPolicyInfoE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::dumpInfo(unsigned int*, char*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal8dumpInfoEPjPc(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal8dumpInfoEPjPc() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::~DfpsHal() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalD0Ev(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsVsyncClient::onSwVsyncChange(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClient15onSwVsyncChangeEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClient15onSwVsyncChangeEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyClient::FpsPolicyClient(vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyServiceBase&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClientC1ERNS4_20FpsPolicyServiceBaseE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClientC1ERNS4_20FpsPolicyServiceBaseE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::unregInfo(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal9unregInfoEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal9unregInfoEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::~DfpsHal() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsInfoClient::setWindowFlag(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClient13setWindowFlagEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClient13setWindowFlagEii() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::FpsVsyncClient::~FpsVsyncClient() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClientD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClientD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::getFpsRange(vendor::mediatek::hardware::dfps::V1_0::FpsRange*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal11getFpsRangeEPNS3_8FpsRangeE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal11getFpsRangeEPNS3_8FpsRangeE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::initDispatch() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal12initDispatchEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal12initDispatchEv() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyClient::unregPolicy(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClient11unregPolicyEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClient11unregPolicyEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::setInputWindows(android::hardware::hidl_string, vendor::mediatek::hardware::dfps::V1_0::SimpleInputWindowInfo) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal15setInputWindowsEN7android8hardware11hidl_stringENS3_21SimpleInputWindowInfoE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal15setInputWindowsEN7android8hardware11hidl_stringENS3_21SimpleInputWindowInfoE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::removeInfoPackage(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal17removeInfoPackageEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal17removeInfoPackageEm() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyDeathRecipient */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4dfps4V1_014implementation23FpsPolicyDeathRecipientE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyClient::regPolicy(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy> const&, android::hardware::hidl_string const&, vendor::mediatek::hardware::dfps::V1_0::FpsPolicyInfo const&, std::__1::function<void (vendor::mediatek::hardware::dfps::V1_0::Error, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClient9regPolicyERKN7android2spINS3_10IFpsPolicyEEERKNS6_8hardware11hidl_stringERKNS3_13FpsPolicyInfoENSt3__18functionIFvNS3_5ErrorEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClient9regPolicyERKN7android2spINS3_10IFpsPolicyEEERKNS6_8hardware11hidl_stringERKNS3_13FpsPolicyInfoENSt3__18functionIFvNS3_5ErrorEiEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyClient::~FpsPolicyClient() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClientD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClientD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsVsyncClient::dumpInfo(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClient8dumpInfoENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClient8dumpInfoENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: HIDL_FETCH_IFpsPolicyService */
extern "C" __attribute__((visibility("default"))) int HIDL_FETCH_IFpsPolicyService(void) {
    ALOGD("HIDL_FETCH_IFpsPolicyService() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::regVsyncClient(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal14regVsyncClientERKN7android2spINS3_9IFpsVsyncEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal14regVsyncClientERKN7android2spINS3_9IFpsVsyncEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::enableTracker(int) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal13enableTrackerEi(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal13enableTrackerEi() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::~DfpsHal() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalD1Ev(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsInfoClient::forbidAdjustingVsync(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClient20forbidAdjustingVsyncEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClient20forbidAdjustingVsyncEi() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient-in-vendor::mediatek::hardware::dfps::V1_0::implementation::FpsInfoClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClientE0_NS3_14IFpsInfoClientE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::getFpsRange(vendor::mediatek::hardware::dfps::V1_0::FpsRange*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal11getFpsRangeEPNS3_8FpsRangeE(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal11getFpsRangeEPNS3_8FpsRangeE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::FpsInfoClient::~FpsInfoClient() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClientD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClientD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::setSingleLayer(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal14setSingleLayerEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal14setSingleLayerEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::removePolicyPackage(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal19removePolicyPackageEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal19removePolicyPackageEm() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::unregPolicy(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal11unregPolicyEm(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal11unregPolicyEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsInfoClient::regInfo(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClient7regInfoERKN7android2spINS3_8IFpsInfoEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClient7regInfoERKN7android2spINS3_8IFpsInfoEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsVsyncClient::enableTracker(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClient13enableTrackerEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClient13enableTrackerEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsVsyncClient::FpsVsyncClient(vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyServiceBase&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClientC2ERNS4_20FpsPolicyServiceBaseE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClientC2ERNS4_20FpsPolicyServiceBaseE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::unregPolicy(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal11unregPolicyEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal11unregPolicyEm() called");
    return 0;
}

/* Demangled: void std::__1::vector<vendor::mediatek::hardware::dfps::V1_0::implementation::PolicyPackage, std::__1::allocator<vendor::mediatek::hardware::dfps::V1_0::implementation::PolicyPackage> >::__push_back_slow_path<vendor::mediatek::hardware::dfps::V1_0::implementation::PolicyPackage const&>(vendor::mediatek::hardware::dfps::V1_0::implementation::PolicyPackage const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN6vendor8mediatek8hardware4dfps4V1_014implementation13PolicyPackageENS_9allocatorIS7_EEE21__push_back_slow_pathIRKS7_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN6vendor8mediatek8hardware4dfps4V1_014implementation13PolicyPackageENS_9allocatorIS7_EEE21__push_back_slow_pathIRKS7_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::vector<char, std::__1::allocator<char> >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIcNS_9allocatorIcEEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorIcNS_9allocatorIcEEE8__appendEm() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::dfps::V1_0::implementation::FpsVsyncDeathRecipient */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4dfps4V1_014implementation22FpsVsyncDeathRecipientE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::dfps::V1_0::implementation::FpsVsyncClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClientE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::removeVsyncClient() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal17removeVsyncClientEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal17removeVsyncClientEv() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyClient::~FpsPolicyClient() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClientD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClientD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient-in-vendor::mediatek::hardware::dfps::V1_0::implementation::FpsVsyncClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClientE0_NS3_15IFpsVsyncClientE = NULL;

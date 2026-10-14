/*
 * Reverse-Engineered Source for: libhwc2onfbadapter.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libhwc2onfbadapter"

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
#include "libhwc2onfbadapter.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::HWC2OnFbAdapter::enableVsync(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android15HWC2OnFbAdapter11enableVsyncEb(void) {
    ALOGD("_ZN7android15HWC2OnFbAdapter11enableVsyncEb() called");
    return 0;
}

/* Demangled: android::HWC2OnFbAdapter::VsyncThread::setCallback(void (*)(void*, unsigned long long, long long), void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android15HWC2OnFbAdapter11VsyncThread11setCallbackEPFvPvyxES2_(void) {
    ALOGD("_ZN7android15HWC2OnFbAdapter11VsyncThread11setCallbackEPFvPvyxES2_() called");
    return 0;
}

/* Demangled: android::HWC2OnFbAdapter::VsyncThread::start(long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android15HWC2OnFbAdapter11VsyncThread5startExx(void) {
    ALOGD("_ZN7android15HWC2OnFbAdapter11VsyncThread5startExx() called");
    return 0;
}

/* Demangled: android::HWC2OnFbAdapter::setVsyncCallback(void (*)(void*, unsigned long long, long long), void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android15HWC2OnFbAdapter16setVsyncCallbackEPFvPvyxES1_(void) {
    ALOGD("_ZN7android15HWC2OnFbAdapter16setVsyncCallbackEPFvPvyxES1_() called");
    return 0;
}

/* Demangled: android::HWC2OnFbAdapter::close() */
extern "C" __attribute__((visibility("default"))) int _ZN7android15HWC2OnFbAdapter5closeEv(void) {
    ALOGD("_ZN7android15HWC2OnFbAdapter5closeEv() called");
    return 0;
}

/* Demangled: android::HWC2OnFbAdapter::postBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN7android15HWC2OnFbAdapter10postBufferEv(void) {
    ALOGD("_ZN7android15HWC2OnFbAdapter10postBufferEv() called");
    return 0;
}

/* Demangled: android::HWC2OnFbAdapter::HWC2OnFbAdapter(framebuffer_device_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android15HWC2OnFbAdapterC2EP20framebuffer_device_t(void) {
    ALOGD("_ZN7android15HWC2OnFbAdapterC2EP20framebuffer_device_t() called");
    return 0;
}

/* Demangled: android::HWC2OnFbAdapter::getState() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android15HWC2OnFbAdapter8getStateEv(void) {
    ALOGD("_ZNK7android15HWC2OnFbAdapter8getStateEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<HWC2::Capability, void*>*>, bool> std::__1::__hash_table<HWC2::Capability, std::__1::hash<HWC2::Capability>, std::__1::equal_to<HWC2::Capability>, std::__1::allocator<HWC2::Capability> >::__emplace_unique_key_args<HWC2::Capability, HWC2::Capability>(HWC2::Capability const&, HWC2::Capability&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableIN4HWC210CapabilityENS_4hashIS2_EENS_8equal_toIS2_EENS_9allocatorIS2_EEE25__emplace_unique_key_argsIS2_JS2_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableIN4HWC210CapabilityENS_4hashIS2_EENS_8equal_toIS2_EENS_9allocatorIS2_EEE25__emplace_unique_key_argsIS2_JS2_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<HWC2::Capability, std::__1::hash<HWC2::Capability>, std::__1::equal_to<HWC2::Capability>, std::__1::allocator<HWC2::Capability> >::rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableIN4HWC210CapabilityENS_4hashIS2_EENS_8equal_toIS2_EENS_9allocatorIS2_EEE6rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableIN4HWC210CapabilityENS_4hashIS2_EENS_8equal_toIS2_EENS_9allocatorIS2_EEE6rehashEj() called");
    return 0;
}

/* Demangled: android::HWC2OnFbAdapter::VsyncThread::now() */
extern "C" __attribute__((visibility("default"))) int _ZN7android15HWC2OnFbAdapter11VsyncThread3nowEv(void) {
    ALOGD("_ZN7android15HWC2OnFbAdapter11VsyncThread3nowEv() called");
    return 0;
}

/* Demangled: android::HWC2OnFbAdapter::VsyncThread::stop() */
extern "C" __attribute__((visibility("default"))) int _ZN7android15HWC2OnFbAdapter11VsyncThread4stopEv(void) {
    ALOGD("_ZN7android15HWC2OnFbAdapter11VsyncThread4stopEv() called");
    return 0;
}

/* Demangled: android::HWC2OnFbAdapter::VsyncThread::vsyncLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN7android15HWC2OnFbAdapter11VsyncThread9vsyncLoopEv(void) {
    ALOGD("_ZN7android15HWC2OnFbAdapter11VsyncThread9vsyncLoopEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> >::rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableIyNS_4hashIyEENS_8equal_toIyEENS_9allocatorIyEEE6rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableIyNS_4hashIyEENS_8equal_toIyEENS_9allocatorIyEEE6rehashEj() called");
    return 0;
}

/* Demangled: android::HWC2OnFbAdapter::updateDebugString() */
extern "C" __attribute__((visibility("default"))) int _ZN7android15HWC2OnFbAdapter17updateDebugStringEv(void) {
    ALOGD("_ZN7android15HWC2OnFbAdapter17updateDebugStringEv() called");
    return 0;
}

/* Demangled: android::HWC2OnFbAdapter::cast(hwc2_device*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android15HWC2OnFbAdapter4castEP11hwc2_device(void) {
    ALOGD("_ZN7android15HWC2OnFbAdapter4castEP11hwc2_device() called");
    return 0;
}

/* Demangled: android::HWC2OnFbAdapter::addLayer() */
extern "C" __attribute__((visibility("default"))) int _ZN7android15HWC2OnFbAdapter8addLayerEv(void) {
    ALOGD("_ZN7android15HWC2OnFbAdapter8addLayerEv() called");
    return 0;
}

/* Demangled: android::HWC2OnFbAdapter::setState(android::HWC2OnFbAdapter::State) */
extern "C" __attribute__((visibility("default"))) int _ZN7android15HWC2OnFbAdapter8setStateENS0_5StateE(void) {
    ALOGD("_ZN7android15HWC2OnFbAdapter8setStateENS0_5StateE() called");
    return 0;
}

/* Demangled: android::HWC2OnFbAdapter::getDebugString() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android15HWC2OnFbAdapter14getDebugStringEv(void) {
    ALOGD("_ZNK7android15HWC2OnFbAdapter14getDebugStringEv() called");
    return 0;
}

/* Demangled: android::HWC2OnFbAdapter::hasLayer(unsigned long long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android15HWC2OnFbAdapter8hasLayerEy(void) {
    ALOGD("_ZNK7android15HWC2OnFbAdapter8hasLayerEy() called");
    return 0;
}

/* Demangled: android::HWC2OnFbAdapter::getCapabilities(unsigned int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android15HWC2OnFbAdapter15getCapabilitiesEPjPi(void) {
    ALOGD("_ZN7android15HWC2OnFbAdapter15getCapabilitiesEPjPi() called");
    return 0;
}

/* Demangled: android::HWC2OnFbAdapter::getInfo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android15HWC2OnFbAdapter7getInfoEv(void) {
    ALOGD("_ZNK7android15HWC2OnFbAdapter7getInfoEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<HWC2::Capability, std::__1::hash<HWC2::Capability>, std::__1::equal_to<HWC2::Capability>, std::__1::allocator<HWC2::Capability> >::__rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableIN4HWC210CapabilityENS_4hashIS2_EENS_8equal_toIS2_EENS_9allocatorIS2_EEE8__rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableIN4HWC210CapabilityENS_4hashIS2_EENS_8equal_toIS2_EENS_9allocatorIS2_EEE8__rehashEj() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<unsigned long long, void*>*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableIyNS_4hashIyEENS_8equal_toIyEENS_9allocatorIyEEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIyPvEEEE(void) {
    ALOGD("_ZNSt3__112__hash_tableIyNS_4hashIyEENS_8equal_toIyEENS_9allocatorIyEEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIyPvEEEE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> >::__rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableIyNS_4hashIyEENS_8equal_toIyEENS_9allocatorIyEEE8__rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableIyNS_4hashIyEENS_8equal_toIyEENS_9allocatorIyEEE8__rehashEj() called");
    return 0;
}

/* Demangled: android::HWC2OnFbAdapter::getConfigId() */
extern "C" __attribute__((visibility("default"))) int _ZN7android15HWC2OnFbAdapter11getConfigIdEv(void) {
    ALOGD("_ZN7android15HWC2OnFbAdapter11getConfigIdEv() called");
    return 0;
}

/* Demangled: android::HWC2OnFbAdapter::removeLayer(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android15HWC2OnFbAdapter11removeLayerEy(void) {
    ALOGD("_ZN7android15HWC2OnFbAdapter11removeLayerEy() called");
    return 0;
}

/* Demangled: android::HWC2OnFbAdapter::markLayerDirty(unsigned long long, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android15HWC2OnFbAdapter14markLayerDirtyEyb(void) {
    ALOGD("_ZN7android15HWC2OnFbAdapter14markLayerDirtyEyb() called");
    return 0;
}

/* Demangled: android::HWC2OnFbAdapter::clearDirtyLayers() */
extern "C" __attribute__((visibility("default"))) int _ZN7android15HWC2OnFbAdapter16clearDirtyLayersEv(void) {
    ALOGD("_ZN7android15HWC2OnFbAdapter16clearDirtyLayersEv() called");
    return 0;
}

/* Demangled: android::HWC2OnFbAdapter::getDirtyLayers() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android15HWC2OnFbAdapter14getDirtyLayersEv(void) {
    ALOGD("_ZNK7android15HWC2OnFbAdapter14getDirtyLayersEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<unsigned long long, void*>*>, bool> std::__1::__hash_table<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> >::__emplace_unique_key_args<unsigned long long, unsigned long long const&>(unsigned long long const&, unsigned long long const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableIyNS_4hashIyEENS_8equal_toIyEENS_9allocatorIyEEE25__emplace_unique_key_argsIyJRKyEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIyPvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableIyNS_4hashIyEENS_8equal_toIyEENS_9allocatorIyEEE25__emplace_unique_key_argsIyJRKyEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIyPvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: void* std::__1::__thread_proxy<std::__1::tuple<std::__1::unique_ptr<std::__1::__thread_struct, std::__1::default_delete<std::__1::__thread_struct> >, void (android::HWC2OnFbAdapter::VsyncThread::*)(), android::HWC2OnFbAdapter::VsyncThread*> >(void*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEMN7android15HWC2OnFbAdapter11VsyncThreadEFvvEPS9_EEEEEPvSE_(void) {
    ALOGD("_ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEMN7android15HWC2OnFbAdapter11VsyncThreadEFvvEPS9_EEEEEPvSE_() called");
    return 0;
}

/* Demangled: android::HWC2OnFbAdapter::VsyncThread::sleepUntil(long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android15HWC2OnFbAdapter11VsyncThread10sleepUntilEx(void) {
    ALOGD("_ZN7android15HWC2OnFbAdapter11VsyncThread10sleepUntilEx() called");
    return 0;
}

/* Demangled: android::HWC2OnFbAdapter::VsyncThread::enableCallback(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android15HWC2OnFbAdapter11VsyncThread14enableCallbackEb(void) {
    ALOGD("_ZN7android15HWC2OnFbAdapter11VsyncThread14enableCallbackEb() called");
    return 0;
}

/* Demangled: android::HWC2OnFbAdapter::getDisplayId() */
extern "C" __attribute__((visibility("default"))) int _ZN7android15HWC2OnFbAdapter12getDisplayIdEv(void) {
    ALOGD("_ZN7android15HWC2OnFbAdapter12getDisplayIdEv() called");
    return 0;
}

/* Demangled: android::HWC2OnFbAdapter::cast(hw_device_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android15HWC2OnFbAdapter4castEP11hw_device_t(void) {
    ALOGD("_ZN7android15HWC2OnFbAdapter4castEP11hw_device_t() called");
    return 0;
}

/* Demangled: android::HWC2OnFbAdapter::setBuffer(native_handle const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android15HWC2OnFbAdapter9setBufferEPK13native_handle(void) {
    ALOGD("_ZN7android15HWC2OnFbAdapter9setBufferEPK13native_handle() called");
    return 0;
}

/* Demangled: android::HWC2OnFbAdapter::HWC2OnFbAdapter(framebuffer_device_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android15HWC2OnFbAdapterC1EP20framebuffer_device_t(void) {
    ALOGD("_ZN7android15HWC2OnFbAdapterC1EP20framebuffer_device_t() called");
    return 0;
}

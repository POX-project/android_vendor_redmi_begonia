/*
 * Reverse-Engineered Source for: android.hardware.graphics.composer@2.1-impl.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "android_hardware_graphics_composer_2_1_impl"

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
#include "android_hardware_graphics_composer_2_1_impl.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: void std::__1::vector<native_handle*, std::__1::allocator<native_handle*> >::__push_back_slow_path<native_handle* const&>(native_handle* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP13native_handleNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIP13native_handleNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE8__appendEj() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIyNS_9allocatorIyEEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIyNS_9allocatorIyEEE8__appendEj() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::graphics::composer::V2_1::passthrough::detail::HwcHalImpl<android::hardware::graphics::composer::V2_1::hal::ComposerHal> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware8graphics8composer4V2_111passthrough6detail10HwcHalImplINS3_3hal11ComposerHalEEE = NULL;

/* Exported Object: vtable for android::hardware::graphics::composer::V2_1::hal::detail::ComposerClientImpl<android::hardware::graphics::composer::V2_1::IComposerClient, android::hardware::graphics::composer::V2_1::hal::ComposerHal>::HalEventCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware8graphics8composer4V2_13hal6detail18ComposerClientImplINS3_15IComposerClientENS4_11ComposerHalEE16HalEventCallbackE = NULL;

/* Demangled: android::hardware::MessageQueue<unsigned int, (android::hardware::MQFlavor)1>::write(unsigned int const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIjLNS0_8MQFlavorE1EE5writeEPKjj(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIjLNS0_8MQFlavorE1EE5writeEPKjj() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned int, (android::hardware::MQFlavor)1>::MessageQueue(android::hardware::MQDescriptor<unsigned int, (android::hardware::MQFlavor)1> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIjLNS0_8MQFlavorE1EEC2ERKNS0_12MQDescriptorIjLS2_1EEEb(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIjLNS0_8MQFlavorE1EEC2ERKNS0_12MQDescriptorIjLS2_1EEEb() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::hardware::graphics::composer::V2_1::IComposer::Capability, std::__1::allocator<android::hardware::graphics::composer::V2_1::IComposer::Capability> >::__push_back_slow_path<android::hardware::graphics::composer::V2_1::IComposer::Capability>(android::hardware::graphics::composer::V2_1::IComposer::Capability&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android8hardware8graphics8composer4V2_19IComposer10CapabilityENS_9allocatorIS7_EEE21__push_back_slow_pathIS7_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android8hardware8graphics8composer4V2_19IComposer10CapabilityENS_9allocatorIS7_EEE21__push_back_slow_pathIS7_EEvOT_() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned int, (android::hardware::MQFlavor)1>::initMemory(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIjLNS0_8MQFlavorE1EE10initMemoryEb(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIjLNS0_8MQFlavorE1EE10initMemoryEb() called");
    return 0;
}

/* Demangled: std::__1::vector<android::hardware::graphics::composer::V2_1::IComposerClient::Composition, std::__1::allocator<android::hardware::graphics::composer::V2_1::IComposerClient::Composition> >::__move_assign(std::__1::vector<android::hardware::graphics::composer::V2_1::IComposerClient::Composition, std::__1::allocator<android::hardware::graphics::composer::V2_1::IComposerClient::Composition> >&, std::__1::integral_constant<bool, true>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android8hardware8graphics8composer4V2_115IComposerClient11CompositionENS_9allocatorIS7_EEE13__move_assignERSA_NS_17integral_constantIbLb1EEE(void) {
    ALOGD("_ZNSt3__16vectorIN7android8hardware8graphics8composer4V2_115IComposerClient11CompositionENS_9allocatorIS7_EEE13__move_assignERSA_NS_17integral_constantIbLb1EEE() called");
    return 0;
}

/* Exported Object: VTT for android::hardware::graphics::composer::V2_1::hal::detail::ComposerClientImpl<android::hardware::graphics::composer::V2_1::IComposerClient, android::hardware::graphics::composer::V2_1::hal::ComposerHal> */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware8graphics8composer4V2_13hal6detail18ComposerClientImplINS3_15IComposerClientENS4_11ComposerHalEEE = NULL;

/* Demangled: android::hardware::MQDescriptor<unsigned int, (android::hardware::MQFlavor)1>::operator=(android::hardware::MQDescriptor<unsigned int, (android::hardware::MQFlavor)1> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MQDescriptorIjLNS0_8MQFlavorE1EEaSERKS3_(void) {
    ALOGD("_ZN7android8hardware12MQDescriptorIjLNS0_8MQFlavorE1EEaSERKS3_() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned int, (android::hardware::MQFlavor)1>::MessageQueue(unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIjLNS0_8MQFlavorE1EEC2Ejb(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIjLNS0_8MQFlavorE1EEC2Ejb() called");
    return 0;
}

/* Demangled: std::__1::vector<char, std::__1::allocator<char> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIcNS_9allocatorIcEEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIcNS_9allocatorIcEEE8__appendEj() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> >::__move_assign(std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> >&, std::__1::integral_constant<bool, true>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIyNS_9allocatorIyEEE13__move_assignERS3_NS_17integral_constantIbLb1EEE(void) {
    ALOGD("_ZNSt3__16vectorIyNS_9allocatorIyEEE13__move_assignERS3_NS_17integral_constantIbLb1EEE() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::graphics::composer::V2_1::hal::detail::ComposerImpl<android::hardware::graphics::composer::V2_1::IComposer, android::hardware::graphics::composer::V2_1::hal::ComposerHal> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware8graphics8composer4V2_13hal6detail12ComposerImplINS3_9IComposerENS4_11ComposerHalEEE = NULL;

/* Demangled: android::hardware::MQDescriptor<unsigned int, (android::hardware::MQFlavor)1>::MQDescriptor(std::__1::vector<android::hardware::GrantorDescriptor, std::__1::allocator<android::hardware::GrantorDescriptor> > const&, native_handle*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MQDescriptorIjLNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS4_9allocatorIS6_EEEEP13native_handlej(void) {
    ALOGD("_ZN7android8hardware12MQDescriptorIjLNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS4_9allocatorIS6_EEEEP13native_handlej() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<hwc2_capability_t, std::__1::hash<hwc2_capability_t>, std::__1::equal_to<hwc2_capability_t>, std::__1::allocator<hwc2_capability_t> >::rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableI17hwc2_capability_tNS_4hashIS1_EENS_8equal_toIS1_EENS_9allocatorIS1_EEE6rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableI17hwc2_capability_tNS_4hashIS1_EENS_8equal_toIS1_EENS_9allocatorIS1_EEE6rehashEj() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<hwc2_capability_t, std::__1::hash<hwc2_capability_t>, std::__1::equal_to<hwc2_capability_t>, std::__1::allocator<hwc2_capability_t> >::__rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableI17hwc2_capability_tNS_4hashIS1_EENS_8equal_toIS1_EENS_9allocatorIS1_EEE8__rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableI17hwc2_capability_tNS_4hashIS1_EENS_8equal_toIS1_EENS_9allocatorIS1_EEE8__rehashEj() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::graphics::composer::V2_1::hal::detail::ComposerClientImpl<android::hardware::graphics::composer::V2_1::IComposerClient, android::hardware::graphics::composer::V2_1::hal::ComposerHal> */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware8graphics8composer4V2_13hal6detail18ComposerClientImplINS3_15IComposerClientENS4_11ComposerHalEEE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: vtable for android::hardware::graphics::composer::V2_1::CommandWriterBase */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware8graphics8composer4V2_117CommandWriterBaseE = NULL;

/* Exported Object: vtable for android::hardware::graphics::composer::V2_1::hal::detail::ComposerClientImpl<android::hardware::graphics::composer::V2_1::IComposerClient, android::hardware::graphics::composer::V2_1::hal::ComposerHal> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware8graphics8composer4V2_13hal6detail18ComposerClientImplINS3_15IComposerClientENS4_11ComposerHalEEE = NULL;

/* Demangled: void std::__1::vector<android::hardware::hidl_handle, std::__1::allocator<android::hardware::hidl_handle> >::__push_back_slow_path<android::hardware::hidl_handle>(android::hardware::hidl_handle&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android8hardware11hidl_handleENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android8hardware11hidl_handleENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__move_assign(std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >&, std::__1::integral_constant<bool, true>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE13__move_assignERS3_NS_17integral_constantIbLb1EEE(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE13__move_assignERS3_NS_17integral_constantIbLb1EEE() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::graphics::composer::V2_1::hal::ComposerCommandEngine */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware8graphics8composer4V2_13hal21ComposerCommandEngineE = NULL;

/* Demangled: HIDL_FETCH_IComposer */
extern "C" __attribute__((visibility("default"))) int HIDL_FETCH_IComposer(void) {
    ALOGD("HIDL_FETCH_IComposer() called");
    return 0;
}

/* Demangled: android::hardware::MQDescriptor<unsigned int, (android::hardware::MQFlavor)1>::MQDescriptor(unsigned int, native_handle*, unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MQDescriptorIjLNS0_8MQFlavorE1EEC2EjP13native_handlejb(void) {
    ALOGD("_ZN7android8hardware12MQDescriptorIjLNS0_8MQFlavorE1EEC2EjP13native_handlejb() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned int, (android::hardware::MQFlavor)1>::mapGrantorDescr(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIjLNS0_8MQFlavorE1EE15mapGrantorDescrEj(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIjLNS0_8MQFlavorE1EE15mapGrantorDescrEj() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned int, (android::hardware::MQFlavor)1>::read(unsigned int*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIjLNS0_8MQFlavorE1EE4readEPjj(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIjLNS0_8MQFlavorE1EE4readEPjj() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned int, (android::hardware::MQFlavor)1>::~MessageQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIjLNS0_8MQFlavorE1EED2Ev(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIjLNS0_8MQFlavorE1EED2Ev() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<hwc2_capability_t, void*>*>, bool> std::__1::__hash_table<hwc2_capability_t, std::__1::hash<hwc2_capability_t>, std::__1::equal_to<hwc2_capability_t>, std::__1::allocator<hwc2_capability_t> >::__emplace_unique_key_args<hwc2_capability_t, hwc2_capability_t>(hwc2_capability_t const&, hwc2_capability_t&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableI17hwc2_capability_tNS_4hashIS1_EENS_8equal_toIS1_EENS_9allocatorIS1_EEE25__emplace_unique_key_argsIS1_JS1_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS1_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableI17hwc2_capability_tNS_4hashIS1_EENS_8equal_toIS1_EENS_9allocatorIS1_EEE25__emplace_unique_key_argsIS1_JS1_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS1_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: void std::__1::vector<hwc_rect, std::__1::allocator<hwc_rect> >::__emplace_back_slow_path<hwc_rect>(hwc_rect&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI8hwc_rectNS_9allocatorIS1_EEE24__emplace_back_slow_pathIJS1_EEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorI8hwc_rectNS_9allocatorIS1_EEE24__emplace_back_slow_pathIJS1_EEEvDpOT_() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::hardware::graphics::composer::V2_1::IComposer::Capability, std::__1::allocator<android::hardware::graphics::composer::V2_1::IComposer::Capability> >::__push_back_slow_path<android::hardware::graphics::composer::V2_1::IComposer::Capability const&>(android::hardware::graphics::composer::V2_1::IComposer::Capability const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android8hardware8graphics8composer4V2_19IComposer10CapabilityENS_9allocatorIS7_EEE21__push_back_slow_pathIRKS7_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android8hardware8graphics8composer4V2_19IComposer10CapabilityENS_9allocatorIS7_EEE21__push_back_slow_pathIRKS7_EEvOT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::graphics::composer::V2_1::IComposerClient-in-android::hardware::graphics::composer::V2_1::hal::detail::ComposerClientImpl<android::hardware::graphics::composer::V2_1::IComposerClient, android::hardware::graphics::composer::V2_1::hal::ComposerHal> */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware8graphics8composer4V2_13hal6detail18ComposerClientImplINS3_15IComposerClientENS4_11ComposerHalEEE0_NS3_15IComposerClientE = NULL;

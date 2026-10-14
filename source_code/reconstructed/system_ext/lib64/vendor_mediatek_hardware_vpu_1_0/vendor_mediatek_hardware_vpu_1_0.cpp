/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.vpu@1.0.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_vpu_1_0"

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
#include "vendor_mediatek_hardware_vpu_1_0.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VR_setPropertyMem(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, android::hardware::hidl_memory const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu23_hidl_VR_setPropertyMemEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiRKNS6_11hidl_memoryE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu23_hidl_VR_setPropertyMemEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiRKNS6_11hidl_memoryE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::vpu::V1_0::BpHwvpu */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3vpu4V1_07BpHwvpuE8_N7android8hardware10IInterfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::Ivpu::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VS_freeAlgo(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu17_hidl_VS_freeAlgoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu17_hidl_VS_freeAlgoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VR_setPropertyMem(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu23_hidl_VR_setPropertyMemEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu23_hidl_VR_setPropertyMemEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VS_deInstance(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu19_hidl_VS_deInstanceEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu19_hidl_VS_deInstanceEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VS_createInstance(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (bool, int, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu23_hidl_VS_createInstanceEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvbiRKNS6_12MQDescriptorIhLNS6_8MQFlavorE1EEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu23_hidl_VS_createInstanceEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvbiRKNS6_12MQDescriptorIhLNS6_8MQFlavorE1EEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VS_packRequest(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, android::hardware::hidl_vec<int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu20_hidl_VS_packRequestEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_8hidl_vecIiEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu20_hidl_VS_packRequestEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_8hidl_vecIiEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VR_setExtraParam(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, vendor::mediatek::hardware::vpu::V1_0::VpuExtraParam_HD const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu22_hidl_VR_setExtraParamEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiRKNS3_16VpuExtraParam_HDE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu22_hidl_VR_setExtraParamEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiRKNS3_16VpuExtraParam_HDE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VS_deInstance(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu13VS_deInstanceEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu13VS_deInstanceEi() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::vpu::V1_0::BnHwvpu */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3vpu4V1_07BnHwvpuE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::Ivpu::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::vpu::V1_0::Ivpu> > android::hardware::details::castInterface<vendor::mediatek::hardware::vpu::V1_0::Ivpu, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::vpu::V1_0::BpHwvpu>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware3vpu4V1_04IvpuENS_4hidl4base4V1_05IBaseENS7_7BpHwvpuEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware3vpu4V1_04IvpuENS_4hidl4base4V1_05IBaseENS7_7BpHwvpuEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::writeEmbeddedToParcel(vendor::mediatek::hardware::vpu::V1_0::VpuPort_HD const&, android::hardware::Parcel*, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_021writeEmbeddedToParcelERKNS3_10VpuPort_HDEPN7android8hardware6ParcelEmm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_021writeEmbeddedToParcelERKNS3_10VpuPort_HDEPN7android8hardware6ParcelEmm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::Ivpu::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VR_addBuffer(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu18_hidl_VR_addBufferEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu18_hidl_VR_addBufferEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VS_createInstance(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu23_hidl_VS_createInstanceEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu23_hidl_VS_createInstanceEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::vpu::V1_0::BpHwvpu */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3vpu4V1_07BpHwvpuE16_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VR_getProperty(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu20_hidl_VR_getPropertyEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu20_hidl_VR_getPropertyEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VS_flush(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu14_hidl_VS_flushEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu14_hidl_VS_flushEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VS_runReq(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu15_hidl_VS_runReqEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiib(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu15_hidl_VS_runReqEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiib() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VA_getPort(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu16_hidl_VA_getPortEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu16_hidl_VA_getPortEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::BpHwvpu(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpuC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpuC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::~BnHwvpu() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware3vpu4V1_07BnHwvpuD0Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware3vpu4V1_07BnHwvpuD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VS_release(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu16_hidl_VS_releaseEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu16_hidl_VS_releaseEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VR_getResult(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu12VR_getResultEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu12VR_getResultEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VR_addBuffer_V2(int, int, vendor::mediatek::hardware::vpu::V1_0::VpuBuffer_HD const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu15VR_addBuffer_V2EiiRKNS3_12VpuBuffer_HDE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu15VR_addBuffer_V2EiiRKNS3_12VpuBuffer_HDE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VR_setPropertyMemImprove(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu24VR_setPropertyMemImproveEiii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu24VR_setPropertyMemImproveEiii() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::vpu::V1_0::Ivpu */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware3vpu4V1_04IvpuE = NULL;

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VS_setPower(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu17_hidl_VS_setPowerEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu17_hidl_VS_setPowerEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VA_getProperty(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu20_hidl_VA_getPropertyEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu20_hidl_VA_getPropertyEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VS_waitReq(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu16_hidl_VS_waitReqEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu16_hidl_VS_waitReqEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VS_setPower(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, vendor::mediatek::hardware::vpu::V1_0::VpuPower_HD const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu17_hidl_VS_setPowerEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS3_11VpuPower_HDEj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu17_hidl_VS_setPowerEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS3_11VpuPower_HDEj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::writeEmbeddedToParcel(vendor::mediatek::hardware::vpu::V1_0::VpuPlane_HD const&, android::hardware::Parcel*, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_021writeEmbeddedToParcelERKNS3_11VpuPlane_HDEPN7android8hardware6ParcelEmm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_021writeEmbeddedToParcelERKNS3_11VpuPlane_HDEPN7android8hardware6ParcelEmm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VS_deque(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu14_hidl_VS_dequeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu14_hidl_VS_dequeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VR_getResult(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu18_hidl_VR_getResultEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu18_hidl_VR_getResultEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VR_getResult(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu18_hidl_VR_getResultEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu18_hidl_VR_getResultEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::Ivpu::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VS_tryEnque(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu17_hidl_VS_tryEnqueEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu17_hidl_VS_tryEnqueEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::~BnHwvpu() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpuD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpuD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::vpu::V1_0::BpHwvpu */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware3vpu4V1_07BpHwvpuE = NULL;

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VS_runReq(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu15_hidl_VS_runReqEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu15_hidl_VS_runReqEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VS_enque(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu14_hidl_VS_enqueEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiij(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu14_hidl_VS_enqueEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiij() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VS_tryEnque(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu17_hidl_VS_tryEnqueEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu17_hidl_VS_tryEnqueEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::vpu::V1_0::Ivpu>-in-vendor::mediatek::hardware::vpu::V1_0::BpHwvpu */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3vpu4V1_07BpHwvpuE0_N7android8hardware11BpInterfaceINS3_4IvpuEEE = NULL;

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VS_runPack(int, android::hardware::hidl_vec<int> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu10VS_runPackEiRKN7android8hardware8hidl_vecIiEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu10VS_runPackEiRKN7android8hardware8hidl_vecIiEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VS_freeAlgo(int, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu11VS_freeAlgoEim(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu11VS_freeAlgoEim() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::BpHwvpu(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpuC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpuC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::Ivpu::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VS_createAlgo(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu19_hidl_VS_createAlgoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu19_hidl_VS_createAlgoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VS_acquire_V3(int, int, vendor::mediatek::hardware::vpu::V1_0::VpuModuleType_HD, std::__1::function<void (bool, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu13VS_acquire_V3EiiNS3_16VpuModuleType_HDENSt3__18functionIFvbiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu13VS_acquire_V3EiiNS3_16VpuModuleType_HDENSt3__18functionIFvbiEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::Bsvpu::Bsvpu(android::sp<vendor::mediatek::hardware::vpu::V1_0::Ivpu>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_05BsvpuC2EN7android2spINS3_4IvpuEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_05BsvpuC2EN7android2spINS3_4IvpuEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VS_getVpuStatus(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, std::__1::function<void (bool, android::hardware::hidl_vec<vendor::mediatek::hardware::vpu::V1_0::VpuStatus_HD> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu21_hidl_VS_getVpuStatusEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiNSt3__18functionIFvbRKNS6_8hidl_vecINS3_12VpuStatus_HDEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu21_hidl_VS_getVpuStatusEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiNSt3__18functionIFvbRKNS6_8hidl_vecINS3_12VpuStatus_HDEEEEEE() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::vpu::V1_0::Ivpu::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu10descriptorE = NULL;

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VS_packRequest(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu20_hidl_VS_packRequestEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu20_hidl_VS_packRequestEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VS_unpackRequest(int, android::hardware::hidl_vec<int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu16VS_unpackRequestEiRKN7android8hardware8hidl_vecIiEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu16VS_unpackRequestEiRKN7android8hardware8hidl_vecIiEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::vpu::V1_0::BpHwvpu */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3vpu4V1_07BpHwvpuE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::~BnHwvpu() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware3vpu4V1_07BnHwvpuD1Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware3vpu4V1_07BnHwvpuD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::Ivpu::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VS_runPack(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, android::hardware::hidl_vec<int> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu16_hidl_VS_runPackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_8hidl_vecIiEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu16_hidl_VS_runPackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_8hidl_vecIiEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VR_getPropertyMem(int, int, int, std::__1::function<void (bool, android::hardware::hidl_memory const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu17VR_getPropertyMemEiiiNSt3__18functionIFvbRKN7android8hardware11hidl_memoryEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu17VR_getPropertyMemEiiiNSt3__18functionIFvbRKN7android8hardware11hidl_memoryEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VS_runPack(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu16_hidl_VS_runPackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu16_hidl_VS_runPackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VS_unpackRequest(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu22_hidl_VS_unpackRequestEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu22_hidl_VS_unpackRequestEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::vpu::V1_0::Bsvpu */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware3vpu4V1_05BsvpuE = NULL;

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VS_waitPack(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu17_hidl_VS_waitPackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu17_hidl_VS_waitPackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::~BnHwvpu() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpuD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpuD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N6vendor8mediatek8hardware3vpu4V1_07BpHwvpu15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n40_N6vendor8mediatek8hardware3vpu4V1_07BpHwvpu15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VS_acquire(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu16_hidl_VS_acquireEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu16_hidl_VS_acquireEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VR_getResult_V2(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu21_hidl_VR_getResult_V2EPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu21_hidl_VR_getResult_V2EPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VS_acquire(int, int, std::__1::function<void (bool, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu10VS_acquireEiiNSt3__18functionIFvbiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu10VS_acquireEiiNSt3__18functionIFvbiEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VS_tryEnque(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu11VS_tryEnqueEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu11VS_tryEnqueEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VA_getProperty(int, int, android::hardware::hidl_string const&, std::__1::function<void (bool, vendor::mediatek::hardware::vpu::V1_0::VpuProperty_HD const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu14VA_getPropertyEiiRKN7android8hardware11hidl_stringENSt3__18functionIFvbRKNS3_14VpuProperty_HDEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu14VA_getPropertyEiiRKN7android8hardware11hidl_stringENSt3__18functionIFvbRKNS3_14VpuProperty_HDEEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::vpu::V1_0::BnHwvpu */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware3vpu4V1_07BnHwvpuE = NULL;

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::Ivpu::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VS_getVpuStatus(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu21_hidl_VS_getVpuStatusEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu21_hidl_VS_getVpuStatusEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::Ivpu::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VS_deInstance(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu19_hidl_VS_deInstanceEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu19_hidl_VS_deInstanceEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::vpu::V1_0::BnHwvpu */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware3vpu4V1_07BnHwvpuE = NULL;

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::Ivpu::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VR_addBuffer_V2(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu21_hidl_VR_addBuffer_V2EPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu21_hidl_VR_addBuffer_V2EPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::BnHwvpu(android::sp<vendor::mediatek::hardware::vpu::V1_0::Ivpu> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpuC1ERKN7android2spINS3_4IvpuEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpuC1ERKN7android2spINS3_4IvpuEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VR_getResult_V2(int, int, std::__1::function<void (bool, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu15VR_getResult_V2EiiNSt3__18functionIFvbjEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu15VR_getResult_V2EiiNSt3__18functionIFvbjEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VR_getInferenceInfo(int, int, std::__1::function<void (bool, vendor::mediatek::hardware::vpu::V1_0::VpuInferenceInfo_HD const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu19VR_getInferenceInfoEiiNSt3__18functionIFvbRKNS3_19VpuInferenceInfo_HDEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu19VR_getInferenceInfoEiiNSt3__18functionIFvbRKNS3_19VpuInferenceInfo_HDEEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::~BnHwvpu() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware3vpu4V1_07BnHwvpuD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware3vpu4V1_07BnHwvpuD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::Ivpu::castFrom(android::sp<vendor::mediatek::hardware::vpu::V1_0::Ivpu> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VR_setProperty(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu20_hidl_VR_setPropertyEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu20_hidl_VR_setPropertyEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::Ivpu::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::Bsvpu::Bsvpu(android::sp<vendor::mediatek::hardware::vpu::V1_0::Ivpu>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_05BsvpuC1EN7android2spINS3_4IvpuEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_05BsvpuC1EN7android2spINS3_4IvpuEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VR_getProperty(int, int, android::hardware::hidl_string const&, std::__1::function<void (bool, vendor::mediatek::hardware::vpu::V1_0::VpuProperty_HD const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu14VR_getPropertyEiiRKN7android8hardware11hidl_stringENSt3__18functionIFvbRKNS3_14VpuProperty_HDEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu14VR_getPropertyEiiRKN7android8hardware11hidl_stringENSt3__18functionIFvbRKNS3_14VpuProperty_HDEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu21setHALInstrumentationEv() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::vpu::V1_0::Ivpu-in-vendor::mediatek::hardware::vpu::V1_0::Bsvpu */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3vpu4V1_05BsvpuE0_NS3_4IvpuE = NULL;

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::writeEmbeddedToParcel(vendor::mediatek::hardware::vpu::V1_0::VpuProperty_HD const&, android::hardware::Parcel*, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_021writeEmbeddedToParcelERKNS3_14VpuProperty_HDEPN7android8hardware6ParcelEmm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_021writeEmbeddedToParcelERKNS3_14VpuProperty_HDEPN7android8hardware6ParcelEmm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VA_getPort(int, int, android::hardware::hidl_string const&, std::__1::function<void (bool, vendor::mediatek::hardware::vpu::V1_0::VpuPort_HD const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu10VA_getPortEiiRKN7android8hardware11hidl_stringENSt3__18functionIFvbRKNS3_10VpuPort_HDEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu10VA_getPortEiiRKN7android8hardware11hidl_stringENSt3__18functionIFvbRKNS3_10VpuPort_HDEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VS_release(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu10VS_releaseEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu10VS_releaseEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VS_waitReq(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu10VS_waitReqEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu10VS_waitReqEii() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::vpu::V1_0::BnHwvpu */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3vpu4V1_07BnHwvpuE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::Ivpu::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VR_setPropertyMemImprove(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu30_hidl_VR_setPropertyMemImproveEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu30_hidl_VR_setPropertyMemImproveEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::~BnHwvpu() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpuD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpuD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VA_getPort(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, android::hardware::hidl_string const&, std::__1::function<void (bool, vendor::mediatek::hardware::vpu::V1_0::VpuPort_HD const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu16_hidl_VA_getPortEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiRKNS6_11hidl_stringENSt3__18functionIFvbRKNS3_10VpuPort_HDEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu16_hidl_VA_getPortEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiRKNS6_11hidl_stringENSt3__18functionIFvbRKNS3_10VpuPort_HDEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VS_createInstance(std::__1::function<void (bool, int, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu17VS_createInstanceENSt3__18functionIFvbiRKN7android8hardware12MQDescriptorIhLNS8_8MQFlavorE1EEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu17VS_createInstanceENSt3__18functionIFvbiRKN7android8hardware12MQDescriptorIhLNS8_8MQFlavorE1EEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VS_createAlgo(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, android::hardware::hidl_string const&, android::hardware::hidl_handle const&, unsigned int, unsigned int, std::__1::function<void (bool, unsigned long)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu19_hidl_VS_createAlgoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_11hidl_stringERKNS6_11hidl_handleEjjNSt3__18functionIFvbmEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu19_hidl_VS_createAlgoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_11hidl_stringERKNS6_11hidl_handleEjjNSt3__18functionIFvbmEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu4pingEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::vpu::V1_0::BnHwvpu */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3vpu4V1_07BnHwvpuE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::readEmbeddedFromParcel(vendor::mediatek::hardware::vpu::V1_0::VpuPort_HD const&, android::hardware::Parcel const&, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_022readEmbeddedFromParcelERKNS3_10VpuPort_HDERKN7android8hardware6ParcelEmm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_022readEmbeddedFromParcelERKNS3_10VpuPort_HDERKN7android8hardware6ParcelEmm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::readEmbeddedFromParcel(vendor::mediatek::hardware::vpu::V1_0::VpuProperty_HD const&, android::hardware::Parcel const&, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_022readEmbeddedFromParcelERKNS3_14VpuProperty_HDERKN7android8hardware6ParcelEmm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_022readEmbeddedFromParcelERKNS3_14VpuProperty_HDERKN7android8hardware6ParcelEmm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VS_getAlgo(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu16_hidl_VS_getAlgoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu16_hidl_VS_getAlgoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VS_waitReq(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu16_hidl_VS_waitReqEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu16_hidl_VS_waitReqEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VS_getAlgo(int, android::hardware::hidl_string const&, std::__1::function<void (bool, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu10VS_getAlgoEiRKN7android8hardware11hidl_stringENSt3__18functionIFvbiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu10VS_getAlgoEiRKN7android8hardware11hidl_stringENSt3__18functionIFvbiEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VA_getProperty(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, android::hardware::hidl_string const&, std::__1::function<void (bool, vendor::mediatek::hardware::vpu::V1_0::VpuProperty_HD const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu20_hidl_VA_getPropertyEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiRKNS6_11hidl_stringENSt3__18functionIFvbRKNS3_14VpuProperty_HDEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu20_hidl_VA_getPropertyEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiRKNS6_11hidl_stringENSt3__18functionIFvbRKNS3_14VpuProperty_HDEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VR_getInferenceInfo(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, std::__1::function<void (bool, vendor::mediatek::hardware::vpu::V1_0::VpuInferenceInfo_HD const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu25_hidl_VR_getInferenceInfoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiNSt3__18functionIFvbRKNS3_19VpuInferenceInfo_HDEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu25_hidl_VR_getInferenceInfoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiNSt3__18functionIFvbRKNS3_19VpuInferenceInfo_HDEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VR_setPropertyMemImprove(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu30_hidl_VR_setPropertyMemImproveEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu30_hidl_VR_setPropertyMemImproveEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiii() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VR_addBuffer(int, int, vendor::mediatek::hardware::vpu::V1_0::VpuPort_HD const&, vendor::mediatek::hardware::vpu::V1_0::VpuBuffer_HD const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu12VR_addBufferEiiRKNS3_10VpuPort_HDERKNS3_12VpuBuffer_HDE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu12VR_addBufferEiiRKNS3_10VpuPort_HDERKNS3_12VpuBuffer_HDE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VS_getAlgo(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, android::hardware::hidl_string const&, std::__1::function<void (bool, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu16_hidl_VS_getAlgoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_11hidl_stringENSt3__18functionIFvbiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu16_hidl_VS_getAlgoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_11hidl_stringENSt3__18functionIFvbiEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VS_acquire_V3(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, vendor::mediatek::hardware::vpu::V1_0::VpuModuleType_HD, std::__1::function<void (bool, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu19_hidl_VS_acquire_V3EPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiNS3_16VpuModuleType_HDENSt3__18functionIFvbiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu19_hidl_VS_acquire_V3EPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiNS3_16VpuModuleType_HDENSt3__18functionIFvbiEEE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N6vendor8mediatek8hardware3vpu4V1_07BpHwvpu15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn16_N6vendor8mediatek8hardware3vpu4V1_07BpHwvpu15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VS_enque(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu14_hidl_VS_enqueEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu14_hidl_VS_enqueEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VR_getResult_V2(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, std::__1::function<void (bool, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu21_hidl_VR_getResult_V2EPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiNSt3__18functionIFvbjEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu21_hidl_VR_getResult_V2EPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiNSt3__18functionIFvbjEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VS_unpackRequest(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, android::hardware::hidl_vec<int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu22_hidl_VS_unpackRequestEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_8hidl_vecIiEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu22_hidl_VS_unpackRequestEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_8hidl_vecIiEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VS_deque(int, std::__1::function<void (bool, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu8VS_dequeEiNSt3__18functionIFvbiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu8VS_dequeEiNSt3__18functionIFvbiEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::vpu::V1_0::Ivpu> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::vpu::V1_0::BpHwvpu, vendor::mediatek::hardware::vpu::V1_0::Ivpu, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware3vpu4V1_07BpHwvpuENS7_4IvpuEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware3vpu4V1_07BpHwvpuENS7_4IvpuEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::~BnHwvpu() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware3vpu4V1_07BnHwvpuD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware3vpu4V1_07BnHwvpuD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VS_flush(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu14_hidl_VS_flushEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu14_hidl_VS_flushEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VR_setExtraParam(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu22_hidl_VR_setExtraParamEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu22_hidl_VR_setExtraParamEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VR_getInferenceInfo(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu25_hidl_VR_getInferenceInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu25_hidl_VR_getInferenceInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VR_setPropertyMem(int, int, android::hardware::hidl_memory const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu17VR_setPropertyMemEiiRKN7android8hardware11hidl_memoryE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu17VR_setPropertyMemEiiRKN7android8hardware11hidl_memoryE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VS_runReq(int, int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu9VS_runReqEiib(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu9VS_runReqEiib() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::Ivpu::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VS_waitPack(int, android::hardware::hidl_vec<int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu11VS_waitPackEiRKN7android8hardware8hidl_vecIiEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu11VS_waitPackEiRKN7android8hardware8hidl_vecIiEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VR_setExtraParam(int, int, vendor::mediatek::hardware::vpu::V1_0::VpuExtraParam_HD const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu16VR_setExtraParamEiiRKNS3_16VpuExtraParam_HDE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu16VR_setExtraParamEiiRKNS3_16VpuExtraParam_HDE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VS_createAlgo(int, android::hardware::hidl_string const&, android::hardware::hidl_handle const&, unsigned int, unsigned int, std::__1::function<void (bool, unsigned long)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu13VS_createAlgoEiRKN7android8hardware11hidl_stringERKNS6_11hidl_handleEjjNSt3__18functionIFvbmEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu13VS_createAlgoEiRKN7android8hardware11hidl_stringERKNS6_11hidl_handleEjjNSt3__18functionIFvbmEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VS_getVpuStatus(int, std::__1::function<void (bool, android::hardware::hidl_vec<vendor::mediatek::hardware::vpu::V1_0::VpuStatus_HD> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu15VS_getVpuStatusEiNSt3__18functionIFvbRKN7android8hardware8hidl_vecINS3_12VpuStatus_HDEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu15VS_getVpuStatusEiNSt3__18functionIFvbRKN7android8hardware8hidl_vecINS3_12VpuStatus_HDEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VR_getProperty(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, android::hardware::hidl_string const&, std::__1::function<void (bool, vendor::mediatek::hardware::vpu::V1_0::VpuProperty_HD const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu20_hidl_VR_getPropertyEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiRKNS6_11hidl_stringENSt3__18functionIFvbRKNS3_14VpuProperty_HDEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu20_hidl_VR_getPropertyEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiRKNS6_11hidl_stringENSt3__18functionIFvbRKNS3_14VpuProperty_HDEEEE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VS_setPower(int, vendor::mediatek::hardware::vpu::V1_0::VpuPower_HD const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu11VS_setPowerEiRKNS3_11VpuPower_HDEj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu11VS_setPowerEiRKNS3_11VpuPower_HDEj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VS_flush(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu8VS_flushEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu8VS_flushEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::writeEmbeddedToParcel(vendor::mediatek::hardware::vpu::V1_0::VpuBuffer_HD const&, android::hardware::Parcel*, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_021writeEmbeddedToParcelERKNS3_12VpuBuffer_HDEPN7android8hardware6ParcelEmm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_021writeEmbeddedToParcelERKNS3_12VpuBuffer_HDEPN7android8hardware6ParcelEmm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::readEmbeddedFromParcel(vendor::mediatek::hardware::vpu::V1_0::VpuBuffer_HD const&, android::hardware::Parcel const&, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_022readEmbeddedFromParcelERKNS3_12VpuBuffer_HDERKN7android8hardware6ParcelEmm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_022readEmbeddedFromParcelERKNS3_12VpuBuffer_HDERKN7android8hardware6ParcelEmm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::Ivpu::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::Ivpu::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VS_packRequest(int, android::hardware::hidl_vec<int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu14VS_packRequestEiRKN7android8hardware8hidl_vecIiEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu14VS_packRequestEiRKN7android8hardware8hidl_vecIiEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VS_freeAlgo(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu17_hidl_VS_freeAlgoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEim(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu17_hidl_VS_freeAlgoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEim() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VR_getPropertyMem(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, int, std::__1::function<void (bool, android::hardware::hidl_memory const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu23_hidl_VR_getPropertyMemEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiiNSt3__18functionIFvbRKNS6_11hidl_memoryEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu23_hidl_VR_getPropertyMemEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiiNSt3__18functionIFvbRKNS6_11hidl_memoryEEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::vpu::V1_0::BpHwvpu */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware3vpu4V1_07BpHwvpuE = NULL;

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VS_acquire(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, std::__1::function<void (bool, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu16_hidl_VS_acquireEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiNSt3__18functionIFvbiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu16_hidl_VS_acquireEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiNSt3__18functionIFvbiEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VS_release(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu16_hidl_VS_releaseEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu16_hidl_VS_releaseEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::Bsvpu::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_05Bsvpu13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_05Bsvpu13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VR_setProperty(int, int, android::hardware::hidl_string const&, vendor::mediatek::hardware::vpu::V1_0::VpuProperty_HD const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu14VR_setPropertyEiiRKN7android8hardware11hidl_stringERKNS3_14VpuProperty_HDE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu14VR_setPropertyEiiRKN7android8hardware11hidl_stringERKNS3_14VpuProperty_HDE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VS_deque(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, std::__1::function<void (bool, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu14_hidl_VS_dequeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiNSt3__18functionIFvbiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu14_hidl_VS_dequeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiNSt3__18functionIFvbiEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VS_waitPack(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, android::hardware::hidl_vec<int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu17_hidl_VS_waitPackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_8hidl_vecIiEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu17_hidl_VS_waitPackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_8hidl_vecIiEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::vpu::V1_0::Ivpu */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware3vpu4V1_04IvpuE = NULL;

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::readEmbeddedFromParcel(vendor::mediatek::hardware::vpu::V1_0::VpuPlane_HD const&, android::hardware::Parcel const&, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_022readEmbeddedFromParcelERKNS3_11VpuPlane_HDERKN7android8hardware6ParcelEmm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_022readEmbeddedFromParcelERKNS3_11VpuPlane_HDERKN7android8hardware6ParcelEmm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::Ivpu::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VR_getPropertyMem(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu23_hidl_VR_getPropertyMemEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu23_hidl_VR_getPropertyMemEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VR_addBuffer(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, vendor::mediatek::hardware::vpu::V1_0::VpuPort_HD const&, vendor::mediatek::hardware::vpu::V1_0::VpuBuffer_HD const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu18_hidl_VR_addBufferEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiRKNS3_10VpuPort_HDERKNS3_12VpuBuffer_HDE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu18_hidl_VR_addBufferEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiRKNS3_10VpuPort_HDERKNS3_12VpuBuffer_HDE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VR_setProperty(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, android::hardware::hidl_string const&, vendor::mediatek::hardware::vpu::V1_0::VpuProperty_HD const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu20_hidl_VR_setPropertyEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiRKNS6_11hidl_stringERKNS3_14VpuProperty_HDE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu20_hidl_VR_setPropertyEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiRKNS6_11hidl_stringERKNS3_14VpuProperty_HDE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VS_enque(int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu8VS_enqueEiij(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu8VS_enqueEiij() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::vpu::V1_0::Ivpu */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3vpu4V1_04IvpuE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::vpu::V1_0::Ivpu-in-vendor::mediatek::hardware::vpu::V1_0::BpHwvpu */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3vpu4V1_07BpHwvpuE0_NS3_4IvpuE = NULL;

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VS_acquire_V3(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu19_hidl_VS_acquire_V3EPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu19_hidl_VS_acquire_V3EPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::BnHwvpu(android::sp<vendor::mediatek::hardware::vpu::V1_0::Ivpu> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpuC2ERKN7android2spINS3_4IvpuEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpuC2ERKN7android2spINS3_4IvpuEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VR_addBuffer_V2(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, vendor::mediatek::hardware::vpu::V1_0::VpuBuffer_HD const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu21_hidl_VR_addBuffer_V2EPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiRKNS3_12VpuBuffer_HDE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu21_hidl_VR_addBuffer_V2EPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiRKNS3_12VpuBuffer_HDE() called");
    return 0;
}

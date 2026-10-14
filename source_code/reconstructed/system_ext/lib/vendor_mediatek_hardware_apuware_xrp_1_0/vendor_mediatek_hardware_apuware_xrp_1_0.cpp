/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.apuware.xrp@1.0.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_apuware_xrp_1_0"

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
#include "vendor_mediatek_hardware_apuware_xrp_1_0.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::PrepareXrpCommand(int, unsigned long long, long long, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_STATUS_HD)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp17PrepareXrpCommandEiyxNSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp17PrepareXrpCommandEiyxNSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::FinalizeXrpCommand(int, unsigned long long, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_STATUS_HD)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp18FinalizeXrpCommandEiyNSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp18FinalizeXrpCommandEiyNSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp-in-vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrpE0_NS4_10INeuronXrpE = NULL;

/* Exported Object: vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp10descriptorE = NULL;

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::_hidl_FinalizeXrpCommand(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp24_hidl_FinalizeXrpCommandEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp24_hidl_FinalizeXrpCommandEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::DeleteXrpInstance(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp17DeleteXrpInstanceEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp17DeleteXrpInstanceEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::~BnHwNeuronXrp() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::_hidl_DeleteXrpInstance(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp23_hidl_DeleteXrpInstanceEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp23_hidl_DeleteXrpInstanceEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::writeEmbeddedToParcel(vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BufferInfo_HD const&, android::hardware::Parcel*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_021writeEmbeddedToParcelERKNS4_17XRP_BufferInfo_HDEPN7android8hardware6ParcelEjj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_021writeEmbeddedToParcelERKNS4_17XRP_BufferInfo_HDEPN7android8hardware6ParcelEjj() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::~BnHwNeuronXrp() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpD1Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp> > android::hardware::details::castInterface<vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrpENS_4hidl4base4V1_05IBaseENS8_13BpHwNeuronXrpEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrpENS_4hidl4base4V1_05IBaseENS8_13BpHwNeuronXrpEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrpE = NULL;

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BsNeuronXrp::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_011BsNeuronXrp13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_011BsNeuronXrp13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BsNeuronXrp::BsNeuronXrp(android::sp<vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_011BsNeuronXrpC2EN7android2spINS4_10INeuronXrpEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_011BsNeuronXrpC2EN7android2spINS4_10INeuronXrpEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::_hidl_GetDeviceStatus(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp21_hidl_GetDeviceStatusEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp21_hidl_GetDeviceStatusEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::GetXrpBuffer(int, long long, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BufferInfo_HD const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp12GetXrpBufferEixNSt3__18functionIFvbRKNS4_17XRP_BufferInfo_HDEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp12GetXrpBufferEixNSt3__18functionIFvbRKNS4_17XRP_BufferInfo_HDEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::BpHwNeuronXrp(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrpC2ERKN7android2spINS6_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrpC2ERKN7android2spINS6_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpE0_N7android8hardware7IBinderE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::~BnHwNeuronXrp() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpD0Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::GetDeviceStatus(int, unsigned long long, std::__1::function<void (bool, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp15GetDeviceStatusEiyNSt3__18functionIFvbiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp15GetDeviceStatusEiyNSt3__18functionIFvbiEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp>-in-vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrpE0_N7android8hardware11BpInterfaceINS4_10INeuronXrpEEE = NULL;

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp4pingEv() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpE = NULL;

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::_hidl_PrepareInternalCommand(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp28_hidl_PrepareInternalCommandEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp28_hidl_PrepareInternalCommandEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::~BnHwNeuronXrp() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::_hidl_GetPreparedRequest(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp24_hidl_GetPreparedRequestEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp24_hidl_GetPreparedRequestEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::_hidl_GetPreparedRequest(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, unsigned long long, unsigned int, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_VpuRequestInfo_HD const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp24_hidl_GetPreparedRequestEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiyjNSt3__18functionIFvbRKNS4_21XRP_VpuRequestInfo_HDEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp24_hidl_GetPreparedRequestEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiyjNSt3__18functionIFvbRKNS4_21XRP_VpuRequestInfo_HDEEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::apuware::xrp::V1_0::BsNeuronXrp */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware7apuware3xrp4V1_011BsNeuronXrpE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrpE = NULL;

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::_hidl_SyncXrpBuffer(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp19_hidl_SyncXrpBufferEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp19_hidl_SyncXrpBufferEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::_hidl_CreateXrpCommand(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp22_hidl_CreateXrpCommandEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp22_hidl_CreateXrpCommandEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::_hidl_FinalizeXrpCommand(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, unsigned long long, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_STATUS_HD)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp24_hidl_FinalizeXrpCommandEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiyNSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp24_hidl_FinalizeXrpCommandEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiyNSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::PrepareInternalCommand(int, unsigned int, unsigned int, std::__1::function<void (bool, android::hardware::hidl_vec<vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BufferInfo_HD> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp22PrepareInternalCommandEijjNSt3__18functionIFvbRKN7android8hardware8hidl_vecINS4_17XRP_BufferInfo_HDEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp22PrepareInternalCommandEijjNSt3__18functionIFvbRKN7android8hardware8hidl_vecINS4_17XRP_BufferInfo_HDEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::readEmbeddedFromParcel(vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BufferInfo_HD const&, android::hardware::Parcel const&, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_022readEmbeddedFromParcelERKNS4_17XRP_BufferInfo_HDERKN7android8hardware6ParcelEjj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_022readEmbeddedFromParcelERKNS4_17XRP_BufferInfo_HDERKN7android8hardware6ParcelEjj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::_hidl_RunXrpCommand(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, unsigned long long, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_InferenceInfo_HD const&, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_STATUS_HD)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp19_hidl_RunXrpCommandEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiyRKNS4_20XRP_InferenceInfo_HDENSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp19_hidl_RunXrpCommandEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiyRKNS4_20XRP_InferenceInfo_HDENSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::_hidl_GetPreparedRequestsCount(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, unsigned long long, std::__1::function<void (bool, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp30_hidl_GetPreparedRequestsCountEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiyNSt3__18functionIFvbjEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp30_hidl_GetPreparedRequestsCountEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiyNSt3__18functionIFvbjEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::~BnHwNeuronXrp() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpD1Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::SyncXrpBuffer(int, int, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BufferInfo_HD const&, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_STATUS_HD)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp13SyncXrpBufferEiiRKNS4_17XRP_BufferInfo_HDENSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp13SyncXrpBufferEiiRKNS4_17XRP_BufferInfo_HDENSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::GetPreparedRequest(int, unsigned long long, unsigned int, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_VpuRequestInfo_HD const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp18GetPreparedRequestEiyjNSt3__18functionIFvbRKNS4_21XRP_VpuRequestInfo_HDEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp18GetPreparedRequestEiyjNSt3__18functionIFvbRKNS4_21XRP_VpuRequestInfo_HDEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::_hidl_GetXrpBuffer(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, long long, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BufferInfo_HD const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp18_hidl_GetXrpBufferEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEixNSt3__18functionIFvbRKNS4_17XRP_BufferInfo_HDEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp18_hidl_GetXrpBufferEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEixNSt3__18functionIFvbRKNS4_17XRP_BufferInfo_HDEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::_hidl_GetDeviceStatus(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, unsigned long long, std::__1::function<void (bool, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp21_hidl_GetDeviceStatusEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiyNSt3__18functionIFvbiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp21_hidl_GetDeviceStatusEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiyNSt3__18functionIFvbiEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::_hidl_PrepareXrpCommand(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, unsigned long long, long long, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_STATUS_HD)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp23_hidl_PrepareXrpCommandEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiyxNSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp23_hidl_PrepareXrpCommandEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiyxNSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrpE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpE = NULL;

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::_hidl_SetupXrpDevice(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp20_hidl_SetupXrpDeviceEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp20_hidl_SetupXrpDeviceEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrpE = NULL;

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::_hidl_RunXrpCommand(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp19_hidl_RunXrpCommandEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp19_hidl_RunXrpCommandEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::~BnHwNeuronXrp() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::CreateXrpCommand(int, unsigned long long, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_STATUS_HD)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp16CreateXrpCommandEiyNSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp16CreateXrpCommandEiyNSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::_hidl_CreateXrpBuffer(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BUFFER_KIND_HD, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_ACCESS_FLAGS_HD, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BufferInfo_HD const&, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_STATUS_HD, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BufferInfo_HD const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp21_hidl_CreateXrpBufferEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiNS4_18XRP_BUFFER_KIND_HDENS4_19XRP_ACCESS_FLAGS_HDERKNS4_17XRP_BufferInfo_HDENSt3__18functionIFvbNS4_13XRP_STATUS_HDESH_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp21_hidl_CreateXrpBufferEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiNS4_18XRP_BUFFER_KIND_HDENS4_19XRP_ACCESS_FLAGS_HDERKNS4_17XRP_BufferInfo_HDENSt3__18functionIFvbNS4_13XRP_STATUS_HDESH_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp-in-vendor::mediatek::hardware::apuware::xrp::V1_0::BsNeuronXrp */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware7apuware3xrp4V1_011BsNeuronXrpE0_NS4_10INeuronXrpE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrpE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::_hidl_GetPreparedRequestsCount(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp30_hidl_GetPreparedRequestsCountEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp30_hidl_GetPreparedRequestsCountEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::RunXrpCommand(int, unsigned long long, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_InferenceInfo_HD const&, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_STATUS_HD)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp13RunXrpCommandEiyRKNS4_20XRP_InferenceInfo_HDENSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp13RunXrpCommandEiyRKNS4_20XRP_InferenceInfo_HDENSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::SetupXrpDevice(int, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_STATUS_HD)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp14SetupXrpDeviceEiNSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp14SetupXrpDeviceEiNSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::_hidl_CreateXrpCommand(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, unsigned long long, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_STATUS_HD)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp22_hidl_CreateXrpCommandEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiyNSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp22_hidl_CreateXrpCommandEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiyNSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::GetPreparedRequestsCount(int, unsigned long long, std::__1::function<void (bool, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp24GetPreparedRequestsCountEiyNSt3__18functionIFvbjEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp24GetPreparedRequestsCountEiyNSt3__18functionIFvbjEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::_hidl_PrepareInternalCommand(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, unsigned int, unsigned int, std::__1::function<void (bool, android::hardware::hidl_vec<vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BufferInfo_HD> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp28_hidl_PrepareInternalCommandEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEijjNSt3__18functionIFvbRKNS7_8hidl_vecINS4_17XRP_BufferInfo_HDEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp28_hidl_PrepareInternalCommandEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEijjNSt3__18functionIFvbRKNS7_8hidl_vecINS4_17XRP_BufferInfo_HDEEEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::_hidl_CreateXrpInstance(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp23_hidl_CreateXrpInstanceEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp23_hidl_CreateXrpInstanceEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::_hidl_SetupXrpDevice(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_STATUS_HD)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp20_hidl_SetupXrpDeviceEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiNSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp20_hidl_SetupXrpDeviceEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiNSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrpE8_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n20_N6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::_hidl_SyncXrpBuffer(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BufferInfo_HD const&, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_STATUS_HD)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp19_hidl_SyncXrpBufferEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiiRKNS4_17XRP_BufferInfo_HDENSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp19_hidl_SyncXrpBufferEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiiRKNS4_17XRP_BufferInfo_HDENSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::~BnHwNeuronXrp() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpD0Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::_hidl_UpdateXrpBuffer(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp21_hidl_UpdateXrpBufferEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp21_hidl_UpdateXrpBufferEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::CreateXrpInstance(int, std::__1::function<void (bool, int, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp17CreateXrpInstanceEiNSt3__18functionIFvbiRKN7android8hardware12MQDescriptorIhLNS9_8MQFlavorE1EEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp17CreateXrpInstanceEiNSt3__18functionIFvbiRKN7android8hardware12MQDescriptorIhLNS9_8MQFlavorE1EEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrpE4_N7android8hardware10IInterfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::_hidl_DeleteXrpInstance(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp23_hidl_DeleteXrpInstanceEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp23_hidl_DeleteXrpInstanceEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::_hidl_PrepareXrpCommand(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp23_hidl_PrepareXrpCommandEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp23_hidl_PrepareXrpCommandEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::BnHwNeuronXrp(android::sp<vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpC1ERKN7android2spINS4_10INeuronXrpEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpC1ERKN7android2spINS4_10INeuronXrpEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::UpdateXrpBuffer(int, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BUFFER_KIND_HD, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_ACCESS_FLAGS_HD, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BufferInfo_HD const&, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_STATUS_HD, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BufferInfo_HD const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp15UpdateXrpBufferEiNS4_18XRP_BUFFER_KIND_HDENS4_19XRP_ACCESS_FLAGS_HDERKNS4_17XRP_BufferInfo_HDENSt3__18functionIFvbNS4_13XRP_STATUS_HDESA_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp15UpdateXrpBufferEiNS4_18XRP_BUFFER_KIND_HDENS4_19XRP_ACCESS_FLAGS_HDERKNS4_17XRP_BufferInfo_HDENSt3__18functionIFvbNS4_13XRP_STATUS_HDESA_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::_hidl_UpdateXrpBuffer(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BUFFER_KIND_HD, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_ACCESS_FLAGS_HD, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BufferInfo_HD const&, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_STATUS_HD, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BufferInfo_HD const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp21_hidl_UpdateXrpBufferEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiNS4_18XRP_BUFFER_KIND_HDENS4_19XRP_ACCESS_FLAGS_HDERKNS4_17XRP_BufferInfo_HDENSt3__18functionIFvbNS4_13XRP_STATUS_HDESH_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp21_hidl_UpdateXrpBufferEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiNS4_18XRP_BUFFER_KIND_HDENS4_19XRP_ACCESS_FLAGS_HDERKNS4_17XRP_BufferInfo_HDENSt3__18functionIFvbNS4_13XRP_STATUS_HDESH_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrpE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp::castFrom(android::sp<vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp8castFromERKN7android2spIS5_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp8castFromERKN7android2spIS5_EEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BsNeuronXrp::BsNeuronXrp(android::sp<vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_011BsNeuronXrpC1EN7android2spINS4_10INeuronXrpEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_011BsNeuronXrpC1EN7android2spINS4_10INeuronXrpEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::BnHwNeuronXrp(android::sp<vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpC2ERKN7android2spINS4_10INeuronXrpEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpC2ERKN7android2spINS4_10INeuronXrpEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::_hidl_CreateXrpInstance(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, std::__1::function<void (bool, int, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp23_hidl_CreateXrpInstanceEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiNSt3__18functionIFvbiRKNS7_12MQDescriptorIhLNS7_8MQFlavorE1EEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp23_hidl_CreateXrpInstanceEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiNSt3__18functionIFvbiRKNS7_12MQDescriptorIhLNS7_8MQFlavorE1EEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::BpHwNeuronXrp(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrpC1ERKN7android2spINS6_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrpC1ERKN7android2spINS6_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::_hidl_GetXrpBuffer(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp18_hidl_GetXrpBufferEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp18_hidl_GetXrpBufferEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::CreateXrpBuffer(int, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BUFFER_KIND_HD, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_ACCESS_FLAGS_HD, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BufferInfo_HD const&, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_STATUS_HD, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BufferInfo_HD const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp15CreateXrpBufferEiNS4_18XRP_BUFFER_KIND_HDENS4_19XRP_ACCESS_FLAGS_HDERKNS4_17XRP_BufferInfo_HDENSt3__18functionIFvbNS4_13XRP_STATUS_HDESA_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp15CreateXrpBufferEiNS4_18XRP_BUFFER_KIND_HDENS4_19XRP_ACCESS_FLAGS_HDERKNS4_17XRP_BufferInfo_HDENSt3__18functionIFvbNS4_13XRP_STATUS_HDESA_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::_hidl_CreateXrpBuffer(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp21_hidl_CreateXrpBufferEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp21_hidl_CreateXrpBufferEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp, vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrpENS8_10INeuronXrpEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrpENS8_10INeuronXrpEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

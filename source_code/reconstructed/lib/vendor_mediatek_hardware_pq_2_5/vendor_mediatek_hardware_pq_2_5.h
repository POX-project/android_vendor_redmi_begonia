/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.pq@2.5.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.mediatek.hardware.pq@2.5.so
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_PQ_2_5_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_PQ_2_5_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality17getESSOLEDMinStepENSt3__18functionIFvNS2_4V2_06ResultEjEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::getESSOLEDMinStep(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, unsigned int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality17getESSOLEDMinStepENSt3__18functionIFvNS2_4V2_06ResultEjEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality17setColorMatrix3x3ERKN7android8hardware10hidl_arrayIiLj3EJLj3EEEEi */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::setColorMatrix3x3(android::hardware::hidl_array<int, 3u, 3u> const&, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality17setColorMatrix3x3ERKN7android8hardware10hidl_arrayIiLj3EJLj3EEEEi(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware2pq4V2_515IPictureQualityENS6_4V2_315IPictureQualityENS7_18BpHwPictureQualityEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::pq::V2_5::IPictureQuality> > android::hardware::details::castInterface<vendor::mediatek::hardware::pq::V2_5::IPictureQuality, vendor::mediatek::hardware::pq::V2_3::IPictureQuality, vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality>(android::sp<vendor::mediatek::hardware::pq::V2_3::IPictureQuality>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware2pq4V2_515IPictureQualityENS6_4V2_315IPictureQualityENS7_18BpHwPictureQualityEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware2pq4V2_515IPictureQualityE0_NS2_4V2_315IPictureQualityE */
/* Demangled: construction vtable for vendor::mediatek::hardware::pq::V2_3::IPictureQuality-in-vendor::mediatek::hardware::pq::V2_5::IPictureQuality */
extern void* _ZTCN6vendor8mediatek8hardware2pq4V2_515IPictureQualityE0_NS2_4V2_315IPictureQualityE;

/* Symbol: _ZTTN6vendor8mediatek8hardware2pq4V2_518BnHwPictureQualityE */
/* Demangled: VTT for vendor::mediatek::hardware::pq::V2_5::BnHwPictureQuality */
extern void* _ZTTN6vendor8mediatek8hardware2pq4V2_518BnHwPictureQualityE;

/* Symbol: _ZTTN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQualityE */
/* Demangled: VTT for vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality */
extern void* _ZTTN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQualityE;

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality16getFeatureSwitchENS2_4V2_011PQFeatureIDENSt3__18functionIFvNS5_6ResultEjEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::getFeatureSwitch(vendor::mediatek::hardware::pq::V2_0::PQFeatureID, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, unsigned int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality16getFeatureSwitchENS2_4V2_011PQFeatureIDENSt3__18functionIFvNS5_6ResultEjEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality23getGlobalPQStableStatusENSt3__18functionIFvNS2_4V2_06ResultEiEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::getGlobalPQStableStatus(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality23getGlobalPQStableStatusENSt3__18functionIFvNS2_4V2_06ResultEiEEE(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware2pq4V2_518BnHwPictureQualityD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::pq::V2_5::BnHwPictureQuality::~BnHwPictureQuality() */
int _ZTv0_n12_N6vendor8mediatek8hardware2pq4V2_518BnHwPictureQualityD0Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality13getTDSHPIndexEiiNSt3__18functionIFvNS2_4V2_06ResultERKNS7_17dispPQIndexParamsEEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::getTDSHPIndex(int, int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQIndexParams const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality13getTDSHPIndexEiiNSt3__18functionIFvNS2_4V2_06ResultERKNS7_17dispPQIndexParamsEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality16getGlobalPQIndexENSt3__18functionIFvNS2_4V2_06ResultERKNS7_15globalPQIndex_tEEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::getGlobalPQIndex(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::globalPQIndex_t const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality16getGlobalPQIndexENSt3__18functionIFvNS2_4V2_06ResultERKNS7_15globalPQIndex_tEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality19setGlobalPQStrengthEi */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::setGlobalPQStrength(int) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality19setGlobalPQStrengthEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality9execIoctlERKNS2_4V2_017dispPQIoctlParamsENSt3__18functionIFvNS5_6ResultES8_EEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::execIoctl(vendor::mediatek::hardware::pq::V2_0::dispPQIoctlParams const&, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQIoctlParams const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality9execIoctlERKNS2_4V2_017dispPQIoctlParamsENSt3__18functionIFvNS5_6ResultES8_EEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware2pq4V2_515IPictureQualityENS_4hidl4base4V1_05IBaseENS7_18BpHwPictureQualityEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::pq::V2_5::IPictureQuality> > android::hardware::details::castInterface<vendor::mediatek::hardware::pq::V2_5::IPictureQuality, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware2pq4V2_515IPictureQualityENS_4hidl4base4V1_05IBaseENS7_18BpHwPictureQualityEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQualityE0_NS2_4V2_415IPictureQualityE */
/* Demangled: construction vtable for vendor::mediatek::hardware::pq::V2_4::IPictureQuality-in-vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality */
extern void* _ZTCN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQualityE0_NS2_4V2_415IPictureQualityE;

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality13getColorIndexEiiNSt3__18functionIFvNS2_4V2_06ResultERKNS7_17dispPQIndexParamsEEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::getColorIndex(int, int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQIndexParams const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality13getColorIndexEiiNSt3__18functionIFvNS2_4V2_06ResultERKNS7_17dispPQIndexParamsEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality16getESSLEDMinStepENSt3__18functionIFvNS2_4V2_06ResultEjEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::getESSLEDMinStep(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, unsigned int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality16getESSLEDMinStepENSt3__18functionIFvNS2_4V2_06ResultEjEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BnHwPictureQuality4pingEv */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BnHwPictureQuality::ping() */
int _ZN6vendor8mediatek8hardware2pq4V2_518BnHwPictureQuality4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BnHwPictureQualityD0Ev */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BnHwPictureQuality::~BnHwPictureQuality() */
int _ZN6vendor8mediatek8hardware2pq4V2_518BnHwPictureQualityD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality17setColorTransformERKN7android8hardware10hidl_arrayIfLj4EJLj4EEEEii */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::setColorTransform(android::hardware::hidl_array<float, 4u, 4u> const&, int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality17setColorTransformERKN7android8hardware10hidl_arrayIfLj4EJLj4EEEEii(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality20getChameleonStrengthENSt3__18functionIFvNS2_4V2_06ResultEiEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::getChameleonStrength(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality20getChameleonStrengthENSt3__18functionIFvNS2_4V2_06ResultEiEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware2pq4V2_518BnHwPictureQualityE */
/* Demangled: vtable for vendor::mediatek::hardware::pq::V2_5::BnHwPictureQuality */
extern void* _ZTVN6vendor8mediatek8hardware2pq4V2_518BnHwPictureQualityE;

/* Symbol: _ZTVN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQualityE */
/* Demangled: vtable for vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality */
extern void* _ZTVN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQualityE;

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_515IPictureQuality24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::IPictureQuality::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware2pq4V2_515IPictureQuality24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_515IPictureQuality4pingEv */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::IPictureQuality::ping() */
int _ZN6vendor8mediatek8hardware2pq4V2_515IPictureQuality4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_515IPictureQuality5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::IPictureQuality::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware2pq4V2_515IPictureQuality5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality10custInvokeEix */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::custInvoke(int, long long) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality10custInvokeEix(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware2pq4V2_515IPictureQualityE0_NS2_4V2_215IPictureQualityE */
/* Demangled: construction vtable for vendor::mediatek::hardware::pq::V2_2::IPictureQuality-in-vendor::mediatek::hardware::pq::V2_5::IPictureQuality */
extern void* _ZTCN6vendor8mediatek8hardware2pq4V2_515IPictureQualityE0_NS2_4V2_215IPictureQualityE;

/* Symbol: _ZTTN6vendor8mediatek8hardware2pq4V2_515IPictureQualityE */
/* Demangled: VTT for vendor::mediatek::hardware::pq::V2_5::IPictureQuality */
extern void* _ZTTN6vendor8mediatek8hardware2pq4V2_515IPictureQualityE;

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_515IPictureQuality12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::IPictureQuality::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_515IPictureQuality12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_515IPictureQuality13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::IPictureQuality::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware2pq4V2_515IPictureQuality13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_516BsPictureQualityC1EN7android2spINS3_15IPictureQualityEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BsPictureQuality::BsPictureQuality(android::sp<vendor::mediatek::hardware::pq::V2_5::IPictureQuality>) */
int _ZN6vendor8mediatek8hardware2pq4V2_516BsPictureQualityC1EN7android2spINS3_15IPictureQualityEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality19getMappedTDSHPIndexEiiNSt3__18functionIFvNS2_4V2_06ResultERKNS7_17dispPQIndexParamsEEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::getMappedTDSHPIndex(int, int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQIndexParams const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality19getMappedTDSHPIndexEiiNSt3__18functionIFvNS2_4V2_06ResultERKNS7_17dispPQIndexParamsEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware2pq4V2_515IPictureQualityE0_NS2_4V2_115IPictureQualityE */
/* Demangled: construction vtable for vendor::mediatek::hardware::pq::V2_1::IPictureQuality-in-vendor::mediatek::hardware::pq::V2_5::IPictureQuality */
extern void* _ZTCN6vendor8mediatek8hardware2pq4V2_515IPictureQualityE0_NS2_4V2_115IPictureQualityE;

/* Symbol: _ZTCN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQualityE0_NS3_15IPictureQualityE */
/* Demangled: construction vtable for vendor::mediatek::hardware::pq::V2_5::IPictureQuality-in-vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality */
extern void* _ZTCN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQualityE0_NS3_15IPictureQualityE;

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality10setPQIndexEiiiii */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::setPQIndex(int, int, int, int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality10setPQIndexEiiiii(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality9setPQModeEii */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::setPQMode(int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality9setPQModeEii(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware2pq4V2_515IPictureQualityE */
/* Demangled: vtable for vendor::mediatek::hardware::pq::V2_5::IPictureQuality */
extern void* _ZTVN6vendor8mediatek8hardware2pq4V2_515IPictureQualityE;

/* Symbol: _ZThn8_N6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::onLastStrongRef(void const*) */
int _ZThn8_N6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_515IPictureQuality8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::IPictureQuality::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware2pq4V2_515IPictureQuality8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality15onLastStrongRefEPKv(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware2pq4V2_515IPictureQualityENS6_4V2_415IPictureQualityENS7_18BpHwPictureQualityEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::pq::V2_5::IPictureQuality> > android::hardware::details::castInterface<vendor::mediatek::hardware::pq::V2_5::IPictureQuality, vendor::mediatek::hardware::pq::V2_4::IPictureQuality, vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality>(android::sp<vendor::mediatek::hardware::pq::V2_4::IPictureQuality>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware2pq4V2_515IPictureQualityENS6_4V2_415IPictureQualityENS7_18BpHwPictureQualityEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQualityE0_N7android8hardware11BpInterfaceINS3_15IPictureQualityEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::pq::V2_5::IPictureQuality>-in-vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality */
extern void* _ZTCN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQualityE0_N7android8hardware11BpInterfaceINS3_15IPictureQualityEEE;

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_515IPictureQuality8castFromERKN7android2spINS2_4V2_215IPictureQualityEEEb */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::IPictureQuality::castFrom(android::sp<vendor::mediatek::hardware::pq::V2_2::IPictureQuality> const&, bool) */
int _ZN6vendor8mediatek8hardware2pq4V2_515IPictureQuality8castFromERKN7android2spINS2_4V2_215IPictureQualityEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality13setGammaIndexEii */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::setGammaIndex(int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality13setGammaIndexEii(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality14setColorRegionEiiiii */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::setColorRegion(int, int, int, int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality14setColorRegionEiiiii(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware2pq4V2_518BnHwPictureQualityE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::pq::V2_5::BnHwPictureQuality */
extern void* _ZTCN6vendor8mediatek8hardware2pq4V2_518BnHwPictureQualityE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZTCN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQualityE0_NS2_4V2_315IPictureQualityE */
/* Demangled: construction vtable for vendor::mediatek::hardware::pq::V2_3::IPictureQuality-in-vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality */
extern void* _ZTCN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQualityE0_NS2_4V2_315IPictureQualityE;

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality10writeFieldEjj */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::writeField(unsigned int, unsigned int) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality10writeFieldEjj(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQualityC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::BpHwPictureQuality(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQualityC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQualityE0_NS2_4V2_215IPictureQualityE */
/* Demangled: construction vtable for vendor::mediatek::hardware::pq::V2_2::IPictureQuality-in-vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality */
extern void* _ZTCN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQualityE0_NS2_4V2_215IPictureQualityE;

/* Symbol: _ZTCN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQualityE8_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality */
extern void* _ZTCN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQualityE8_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality17setAmbientLightCTEddd */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::setAmbientLightCT(double, double, double) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality17setAmbientLightCTEddd(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_515IPictureQuality12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::IPictureQuality::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_515IPictureQuality12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_515IPictureQuality13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::IPictureQuality::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware2pq4V2_515IPictureQuality13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality14getColorRegionENSt3__18functionIFvNS2_4V2_06ResultERKNS7_15dispPQWinParamsEEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::getColorRegion(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQWinParams const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality14getColorRegionENSt3__18functionIFvNS2_4V2_06ResultERKNS7_15dispPQWinParamsEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BnHwPictureQualityC1ERKN7android2spINS3_15IPictureQualityEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BnHwPictureQuality::BnHwPictureQuality(android::sp<vendor::mediatek::hardware::pq::V2_5::IPictureQuality> const&) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BnHwPictureQualityC1ERKN7android2spINS3_15IPictureQualityEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality12getTDSHPFlagENSt3__18functionIFvNS2_4V2_06ResultEiEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::getTDSHPFlag(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality12getTDSHPFlagENSt3__18functionIFvNS2_4V2_06ResultEiEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality20setChameleonStrengthEii */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::setChameleonStrength(int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality20setChameleonStrengthEii(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware2pq4V2_515IPictureQualityE0_NS2_4V2_015IPictureQualityE */
/* Demangled: construction vtable for vendor::mediatek::hardware::pq::V2_0::IPictureQuality-in-vendor::mediatek::hardware::pq::V2_5::IPictureQuality */
extern void* _ZTCN6vendor8mediatek8hardware2pq4V2_515IPictureQualityE0_NS2_4V2_015IPictureQualityE;

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_515IPictureQuality21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::IPictureQuality::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware2pq4V2_515IPictureQuality21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BnHwPictureQuality10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BnHwPictureQuality::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BnHwPictureQuality10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality19getMappedColorIndexEiiNSt3__18functionIFvNS2_4V2_06ResultERKNS7_17dispPQIndexParamsEEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::getMappedColorIndex(int, int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQIndexParams const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality19getMappedColorIndexEiiNSt3__18functionIFvNS2_4V2_06ResultERKNS7_17dispPQIndexParamsEEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware2pq4V2_515IPictureQualityENS6_4V2_015IPictureQualityENS7_18BpHwPictureQualityEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::pq::V2_5::IPictureQuality> > android::hardware::details::castInterface<vendor::mediatek::hardware::pq::V2_5::IPictureQuality, vendor::mediatek::hardware::pq::V2_0::IPictureQuality, vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality>(android::sp<vendor::mediatek::hardware::pq::V2_0::IPictureQuality>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware2pq4V2_515IPictureQualityENS6_4V2_015IPictureQualityENS7_18BpHwPictureQualityEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality14getTuningFieldEiiNSt3__18functionIFvNS2_4V2_06ResultEiEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::getTuningField(int, int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality14getTuningFieldEiiNSt3__18functionIFvNS2_4V2_06ResultEiEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality17setESSOLEDMinStepEj */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::setESSOLEDMinStep(unsigned int) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality17setESSOLEDMinStepEj(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality17setGlobalPQSwitchEi */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::setGlobalPQSwitch(int) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality17setGlobalPQSwitchEi(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware2pq4V2_515IPictureQualityE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::pq::V2_5::IPictureQuality */
extern void* _ZTCN6vendor8mediatek8hardware2pq4V2_515IPictureQualityE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_515IPictureQuality10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::IPictureQuality::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware2pq4V2_515IPictureQuality10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BnHwPictureQualityD2Ev */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BnHwPictureQuality::~BnHwPictureQuality() */
int _ZN6vendor8mediatek8hardware2pq4V2_518BnHwPictureQualityD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality10setRGBGainEjjji */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::setRGBGain(unsigned int, unsigned int, unsigned int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality10setRGBGainEjjji(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality15enableBlueLightEbi */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::enableBlueLight(bool, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality15enableBlueLightEbi(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality24getDisplayGamePQFeaturesENSt3__18functionIFvNS2_4V2_06ResultEjEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::getDisplayGamePQFeatures(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, unsigned int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality24getDisplayGamePQFeaturesENSt3__18functionIFvNS2_4V2_06ResultEjEEE(void);

/* Symbol: _ZThn20_N6vendor8mediatek8hardware2pq4V2_518BnHwPictureQualityD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::pq::V2_5::BnHwPictureQuality::~BnHwPictureQuality() */
int _ZThn20_N6vendor8mediatek8hardware2pq4V2_518BnHwPictureQualityD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality16setESSLEDMinStepEj */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::setESSLEDMinStep(unsigned int) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality16setESSLEDMinStepEj(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality16setFeatureSwitchENS2_4V2_011PQFeatureIDEj */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::setFeatureSwitch(vendor::mediatek::hardware::pq::V2_0::PQFeatureID, unsigned int) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality16setFeatureSwitchENS2_4V2_011PQFeatureIDEj(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQualityE0_NS2_4V2_115IPictureQualityE */
/* Demangled: construction vtable for vendor::mediatek::hardware::pq::V2_1::IPictureQuality-in-vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality */
extern void* _ZTCN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQualityE0_NS2_4V2_115IPictureQualityE;

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_515IPictureQuality17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::IPictureQuality::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware2pq4V2_515IPictureQuality17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_515IPictureQuality8castFromERKN7android2spINS2_4V2_315IPictureQualityEEEb */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::IPictureQuality::castFrom(android::sp<vendor::mediatek::hardware::pq::V2_3::IPictureQuality> const&, bool) */
int _ZN6vendor8mediatek8hardware2pq4V2_515IPictureQuality8castFromERKN7android2spINS2_4V2_315IPictureQualityEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality14setScreenStateEii */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::setScreenState(int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality14setScreenStateEii(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality19getGlobalPQStrengthENSt3__18functionIFvNS2_4V2_06ResultEiEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::getGlobalPQStrength(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality19getGlobalPQStrengthENSt3__18functionIFvNS2_4V2_06ResultEiEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_515IPictureQuality14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::IPictureQuality::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_515IPictureQuality14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality19setReadabilityLevelEi */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::setReadabilityLevel(int) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality19setReadabilityLevelEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality9getAshmemENSt3__18functionIFvNS2_4V2_06ResultERKN7android8hardware11hidl_memoryEEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::getAshmem(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, android::hardware::hidl_memory const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality9getAshmemENSt3__18functionIFvNS2_4V2_06ResultERKN7android8hardware11hidl_memoryEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality9readFieldEjNSt3__18functionIFvNS2_4V2_06ResultEjEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::readField(unsigned int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, unsigned int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality9readFieldEjNSt3__18functionIFvNS2_4V2_06ResultEjEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware2pq4V2_515IPictureQualityENS6_4V2_115IPictureQualityENS7_18BpHwPictureQualityEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::pq::V2_5::IPictureQuality> > android::hardware::details::castInterface<vendor::mediatek::hardware::pq::V2_5::IPictureQuality, vendor::mediatek::hardware::pq::V2_1::IPictureQuality, vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality>(android::sp<vendor::mediatek::hardware::pq::V2_1::IPictureQuality>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware2pq4V2_515IPictureQualityENS6_4V2_115IPictureQualityENS7_18BpHwPictureQualityEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_515IPictureQuality11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::IPictureQuality::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor8mediatek8hardware2pq4V2_515IPictureQuality11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality16setDisplayGamePQEjii */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::setDisplayGamePQ(unsigned int, int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality16setDisplayGamePQEjii(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BnHwPictureQuality12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BnHwPictureQuality::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BnHwPictureQuality12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality20setExternalPanelNitsEj */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::setExternalPanelNits(unsigned int) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality20setExternalPanelNitsEj(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality25setSmartBacklightStrengthEi */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::setSmartBacklightStrength(int) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality25setSmartBacklightStrengthEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_516BsPictureQuality13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BsPictureQuality::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware2pq4V2_516BsPictureQuality13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality22setSmartBacklightRangeEi */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::setSmartBacklightRange(int) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality22setSmartBacklightRangeEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_515IPictureQuality8castFromERKN7android2spINS2_4V2_015IPictureQualityEEEb */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::IPictureQuality::castFrom(android::sp<vendor::mediatek::hardware::pq::V2_0::IPictureQuality> const&, bool) */
int _ZN6vendor8mediatek8hardware2pq4V2_515IPictureQuality8castFromERKN7android2spINS2_4V2_015IPictureQualityEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_515IPictureQuality8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::IPictureQuality::castFrom(android::sp<vendor::mediatek::hardware::pq::V2_5::IPictureQuality> const&, bool) */
int _ZN6vendor8mediatek8hardware2pq4V2_515IPictureQuality8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality24getGlobalPQStrengthRangeENSt3__18functionIFvNS2_4V2_06ResultEiEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::getGlobalPQStrengthRange(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality24getGlobalPQStrengthRangeENSt3__18functionIFvNS2_4V2_06ResultEiEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality15setDISPScenarioEii */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::setDISPScenario(int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality15setDISPScenarioEii(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware2pq4V2_516BsPictureQualityE0_NS3_15IPictureQualityE */
/* Demangled: construction vtable for vendor::mediatek::hardware::pq::V2_5::IPictureQuality-in-vendor::mediatek::hardware::pq::V2_5::BsPictureQuality */
extern void* _ZTCN6vendor8mediatek8hardware2pq4V2_516BsPictureQualityE0_NS3_15IPictureQualityE;

/* Symbol: _ZTCN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQualityE0_NS2_4V2_015IPictureQualityE */
/* Demangled: construction vtable for vendor::mediatek::hardware::pq::V2_0::IPictureQuality-in-vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality */
extern void* _ZTCN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQualityE0_NS2_4V2_015IPictureQualityE;

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware2pq4V2_518BnHwPictureQualityD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::pq::V2_5::BnHwPictureQuality::~BnHwPictureQuality() */
int _ZTv0_n12_N6vendor8mediatek8hardware2pq4V2_518BnHwPictureQualityD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality12setTDSHPFlagEi */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::setTDSHPFlag(int) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality12setTDSHPFlagEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality20getExternalPanelNitsENSt3__18functionIFvNS2_4V2_06ResultEjEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::getExternalPanelNits(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, unsigned int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality20getExternalPanelNitsENSt3__18functionIFvNS2_4V2_06ResultEjEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality23setGlobalPQStableStatusEi */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::setGlobalPQStableStatus(int) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality23setGlobalPQStableStatusEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality19setAmbientLightRGBWEiiii */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::setAmbientLightRGBW(int, int, int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality19setAmbientLightRGBWEiiii(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality20getBlueLightStrengthENSt3__18functionIFvNS2_4V2_06ResultEiEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::getBlueLightStrength(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality20getBlueLightStrengthENSt3__18functionIFvNS2_4V2_06ResultEiEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_515IPictureQuality19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::IPictureQuality::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_515IPictureQuality19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality20setBlueLightStrengthEii */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::setBlueLightStrength(int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality20setBlueLightStrengthEii(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware2pq4V2_518BnHwPictureQualityE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::pq::V2_5::BnHwPictureQuality */
extern void* _ZTCN6vendor8mediatek8hardware2pq4V2_518BnHwPictureQualityE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality13getGammaIndexENSt3__18functionIFvNS2_4V2_06ResultEiEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::getGammaIndex(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality13getGammaIndexENSt3__18functionIFvNS2_4V2_06ResultEiEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQualityE4_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality */
extern void* _ZTCN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQualityE4_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BnHwPictureQualityD1Ev */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BnHwPictureQuality::~BnHwPictureQuality() */
int _ZN6vendor8mediatek8hardware2pq4V2_518BnHwPictureQualityD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality14setTuningFieldEiii */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::setTuningField(int, int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality14setTuningFieldEiii(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality17getGlobalPQSwitchENSt3__18functionIFvNS2_4V2_06ResultEiEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::getGlobalPQSwitch(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality17getGlobalPQSwitchENSt3__18functionIFvNS2_4V2_06ResultEiEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality19getBlueLightEnabledENSt3__18functionIFvNS2_4V2_06ResultEbEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::getBlueLightEnabled(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, bool)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality19getBlueLightEnabledENSt3__18functionIFvNS2_4V2_06ResultEbEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality21notifySyspropsChangedEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware2pq4V2_515IPictureQualityE0_NS2_4V2_415IPictureQualityE */
/* Demangled: construction vtable for vendor::mediatek::hardware::pq::V2_4::IPictureQuality-in-vendor::mediatek::hardware::pq::V2_5::IPictureQuality */
extern void* _ZTCN6vendor8mediatek8hardware2pq4V2_515IPictureQualityE0_NS2_4V2_415IPictureQualityE;

/* Symbol: _ZThn20_N6vendor8mediatek8hardware2pq4V2_518BnHwPictureQualityD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::pq::V2_5::BnHwPictureQuality::~BnHwPictureQuality() */
int _ZThn20_N6vendor8mediatek8hardware2pq4V2_518BnHwPictureQualityD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BnHwPictureQualityC2ERKN7android2spINS3_15IPictureQualityEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BnHwPictureQuality::BnHwPictureQuality(android::sp<vendor::mediatek::hardware::pq::V2_5::IPictureQuality> const&) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BnHwPictureQualityC2ERKN7android2spINS3_15IPictureQualityEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality11setFunctionEjb */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::setFunction(unsigned int, bool) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality11setFunctionEjb(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware2pq4V2_515IPictureQualityENS6_4V2_215IPictureQualityENS7_18BpHwPictureQualityEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::pq::V2_5::IPictureQuality> > android::hardware::details::castInterface<vendor::mediatek::hardware::pq::V2_5::IPictureQuality, vendor::mediatek::hardware::pq::V2_2::IPictureQuality, vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality>(android::sp<vendor::mediatek::hardware::pq::V2_2::IPictureQuality>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware2pq4V2_515IPictureQualityENS6_4V2_215IPictureQualityENS7_18BpHwPictureQualityEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_515IPictureQuality21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::IPictureQuality::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware2pq4V2_515IPictureQuality21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality19getChameleonEnabledENSt3__18functionIFvNS2_4V2_06ResultEbEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::getChameleonEnabled(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, bool)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality19getChameleonEnabledENSt3__18functionIFvNS2_4V2_06ResultEbEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality24setLowBLReadabilityLevelEi */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::setLowBLReadabilityLevel(int) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality24setLowBLReadabilityLevelEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQualityC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::BpHwPictureQuality(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQualityC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_515IPictureQuality8castFromERKN7android2spINS2_4V2_115IPictureQualityEEEb */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::IPictureQuality::castFrom(android::sp<vendor::mediatek::hardware::pq::V2_1::IPictureQuality> const&, bool) */
int _ZN6vendor8mediatek8hardware2pq4V2_515IPictureQuality8castFromERKN7android2spINS2_4V2_115IPictureQualityEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality15enableChameleonEbi */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::enableChameleon(bool, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality15enableChameleonEbi(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQualityE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality */
extern void* _ZTCN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQualityE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTVN6vendor8mediatek8hardware2pq4V2_516BsPictureQualityE */
/* Demangled: vtable for vendor::mediatek::hardware::pq::V2_5::BsPictureQuality */
extern void* _ZTVN6vendor8mediatek8hardware2pq4V2_516BsPictureQualityE;

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_515IPictureQuality10descriptorE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::IPictureQuality::descriptor */
extern void* _ZN6vendor8mediatek8hardware2pq4V2_515IPictureQuality10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_515IPictureQuality8castFromERKN7android2spINS2_4V2_415IPictureQualityEEEb */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::IPictureQuality::castFrom(android::sp<vendor::mediatek::hardware::pq::V2_4::IPictureQuality> const&, bool) */
int _ZN6vendor8mediatek8hardware2pq4V2_515IPictureQuality8castFromERKN7android2spINS2_4V2_415IPictureQualityEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_516BsPictureQualityC2EN7android2spINS3_15IPictureQualityEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BsPictureQuality::BsPictureQuality(android::sp<vendor::mediatek::hardware::pq::V2_5::IPictureQuality>) */
int _ZN6vendor8mediatek8hardware2pq4V2_516BsPictureQualityC2EN7android2spINS3_15IPictureQualityEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BnHwPictureQuality16_hidl_isHDRVideoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BnHwPictureQuality::_hidl_isHDRVideo(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BnHwPictureQuality16_hidl_isHDRVideoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality16_hidl_isHDRVideoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS3_17STATIC_METADATA_TERKNS3_18DYNAMIC_METADATA_TENSt3__18functionIFvNS2_4V2_06ResultEjEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::_hidl_isHDRVideo(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, vendor::mediatek::hardware::pq::V2_5::STATIC_METADATA_T const&, vendor::mediatek::hardware::pq::V2_5::DYNAMIC_METADATA_T const&, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, unsigned int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality16_hidl_isHDRVideoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS3_17STATIC_METADATA_TERKNS3_18DYNAMIC_METADATA_TENSt3__18functionIFvNS2_4V2_06ResultEjEEE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQualityENS7_15IPictureQualityEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::pq::V2_5::IPictureQuality> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality, vendor::mediatek::hardware::pq::V2_5::IPictureQuality, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQualityENS7_15IPictureQualityEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware2pq4V2_518BnHwPictureQualityE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::pq::V2_5::BnHwPictureQuality */
extern void* _ZTCN6vendor8mediatek8hardware2pq4V2_518BnHwPictureQualityE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality10isHDRVideoERKNS3_17STATIC_METADATA_TERKNS3_18DYNAMIC_METADATA_TENSt3__18functionIFvNS2_4V2_06ResultEjEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::isHDRVideo(vendor::mediatek::hardware::pq::V2_5::STATIC_METADATA_T const&, vendor::mediatek::hardware::pq::V2_5::DYNAMIC_METADATA_T const&, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, unsigned int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality10isHDRVideoERKNS3_17STATIC_METADATA_TERKNS3_18DYNAMIC_METADATA_TENSt3__18functionIFvNS2_4V2_06ResultEjEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality4pingEv */
/* Demangled: vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::ping() */
int _ZN6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality4pingEv(void);

/* Symbol: _ZTv0_n20_N6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::pq::V2_5::BpHwPictureQuality::onLastStrongRef(void const*) */
int _ZTv0_n20_N6vendor8mediatek8hardware2pq4V2_518BpHwPictureQuality15onLastStrongRefEPKv(void);

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_PQ_2_5_H */

/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.dfps@1.0-impl.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.mediatek.hardware.dfps@1.0-impl.so
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_DFPS_1_0_IMPL_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_DFPS_1_0_IMPL_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal13dumpDebugInfoENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::dumpDebugInfo(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal13dumpDebugInfoENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClientD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyClient::~FpsPolicyClient() */
int _ZTv0_n12_N6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClientD1Ev(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClientE */
/* Demangled: VTT for vendor::mediatek::hardware::dfps::V1_0::implementation::FpsInfoClient */
extern void* _ZTTN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClientE;

/* Symbol: _ZTTN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClientE */
/* Demangled: VTT for vendor::mediatek::hardware::dfps::V1_0::implementation::FpsVsyncClient */
extern void* _ZTTN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClientE;

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClientD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::FpsVsyncClient::~FpsVsyncClient() */
int _ZTv0_n12_N6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClientD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal13setWindowFlagEii */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::setWindowFlag(int, int) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal13setWindowFlagEii(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClient12getPanelInfoENSt3__18functionIFvNS3_5ErrorERKNS3_9PanelInfoEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyClient::getPanelInfo(std::__1::function<void (vendor::mediatek::hardware::dfps::V1_0::Error, vendor::mediatek::hardware::dfps::V1_0::PanelInfo const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClient12getPanelInfoENSt3__18functionIFvNS3_5ErrorERKNS3_9PanelInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal14regVsyncClientERKN7android2spINS3_9IFpsVsyncEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::regVsyncClient(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal14regVsyncClientERKN7android2spINS3_9IFpsVsyncEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal9regPolicyERKN7android2spINS3_10IFpsPolicyEEENS6_8hardware11hidl_stringENS3_13FpsPolicyInfoEPi */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::regPolicy(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy> const&, android::hardware::hidl_string, vendor::mediatek::hardware::dfps::V1_0::FpsPolicyInfo, int*) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal9regPolicyERKN7android2spINS3_10IFpsPolicyEEENS6_8hardware11hidl_stringENS3_13FpsPolicyInfoEPi(void);

/* Symbol: _ZNSt3__114__split_bufferIN6vendor8mediatek8hardware4dfps4V1_014implementation13PolicyPackageERNS_9allocatorIS7_EEED2Ev */
/* Demangled: std::__1::__split_buffer<vendor::mediatek::hardware::dfps::V1_0::implementation::PolicyPackage, std::__1::allocator<vendor::mediatek::hardware::dfps::V1_0::implementation::PolicyPackage>&>::~__split_buffer() */
int _ZNSt3__114__split_bufferIN6vendor8mediatek8hardware4dfps4V1_014implementation13PolicyPackageERNS_9allocatorIS7_EEED2Ev(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware4dfps4V1_014implementation20FpsPolicyServiceBaseE */
/* Demangled: vtable for vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyServiceBase */
extern void* _ZTVN6vendor8mediatek8hardware4dfps4V1_014implementation20FpsPolicyServiceBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClientC2ERNS4_20FpsPolicyServiceBaseE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyClient::FpsPolicyClient(vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyServiceBase&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClientC2ERNS4_20FpsPolicyServiceBaseE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClientD2Ev */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyClient::~FpsPolicyClient() */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClientD2Ev(void);

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClientD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyClient::~FpsPolicyClient() */
int _ZTv0_n12_N6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClientD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClient17setForegroundInfoEiRKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsInfoClient::setForegroundInfo(int, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClient17setForegroundInfoEiRKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal11getFpsRangeEPNS3_8FpsRangeE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::getFpsRange(vendor::mediatek::hardware::dfps::V1_0::FpsRange*) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal11getFpsRangeEPNS3_8FpsRangeE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware4dfps4V1_014implementation23FpsPolicyDeathRecipientE */
/* Demangled: VTT for vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyDeathRecipient */
extern void* _ZTTN6vendor8mediatek8hardware4dfps4V1_014implementation23FpsPolicyDeathRecipientE;

/* Symbol: _ZThn4_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal9regPolicyERKN7android2spINS3_10IFpsPolicyEEENS6_8hardware11hidl_stringENS3_13FpsPolicyInfoEPi */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::regPolicy(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy> const&, android::hardware::hidl_string, vendor::mediatek::hardware::dfps::V1_0::FpsPolicyInfo, int*) */
int _ZThn4_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal9regPolicyERKN7android2spINS3_10IFpsPolicyEEENS6_8hardware11hidl_stringENS3_13FpsPolicyInfoEPi(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClient13setWindowFlagEii */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsInfoClient::setWindowFlag(int, int) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClient13setWindowFlagEii(void);

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClientD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::FpsVsyncClient::~FpsVsyncClient() */
int _ZTv0_n12_N6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClientD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal29transferSimpleInputWindowInfoEP26DFRC_DRV_INPUT_WINDOW_INFORNS3_21SimpleInputWindowInfoE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::transferSimpleInputWindowInfo(DFRC_DRV_INPUT_WINDOW_INFO*, vendor::mediatek::hardware::dfps::V1_0::SimpleInputWindowInfo&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal29transferSimpleInputWindowInfoEP26DFRC_DRV_INPUT_WINDOW_INFORNS3_21SimpleInputWindowInfoE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal15transferHwcInfoEP17DFRC_DRV_HWC_INFORNS3_7HwcInfoE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::transferHwcInfo(DFRC_DRV_HWC_INFO*, vendor::mediatek::hardware::dfps::V1_0::HwcInfo&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal15transferHwcInfoEP17DFRC_DRV_HWC_INFORNS3_7HwcInfoE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal16createInfoClientENSt3__18functionIFvNS3_5ErrorERKN7android2spINS3_14IFpsInfoClientEEEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::createInfoClient(std::__1::function<void (vendor::mediatek::hardware::dfps::V1_0::Error, android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient> const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal16createInfoClientENSt3__18functionIFvNS3_5ErrorERKN7android2spINS3_14IFpsInfoClientEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal18createPolicyClientENSt3__18functionIFvNS3_5ErrorERKN7android2spINS3_16IFpsPolicyClientEEEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::createPolicyClient(std::__1::function<void (vendor::mediatek::hardware::dfps::V1_0::Error, android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient> const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal18createPolicyClientENSt3__18functionIFvNS3_5ErrorERKN7android2spINS3_16IFpsPolicyClientEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal21transferFpsPolicyInfoEP15DFRC_DRV_POLICYRNS3_13FpsPolicyInfoE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::transferFpsPolicyInfo(DFRC_DRV_POLICY*, vendor::mediatek::hardware::dfps::V1_0::FpsPolicyInfo&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal21transferFpsPolicyInfoEP15DFRC_DRV_POLICYRNS3_13FpsPolicyInfoE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal6setFpsENS3_13FpsPolicyInfoE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::setFps(vendor::mediatek::hardware::dfps::V1_0::FpsPolicyInfo) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal6setFpsENS3_13FpsPolicyInfoE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalC1EPK11hw_module_t */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::DfpsHal(hw_module_t const*) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalC1EPK11hw_module_t(void);

/* Symbol: _ZNSt3__113__vector_baseIN6vendor8mediatek8hardware4dfps4V1_014implementation11InfoPackageENS_9allocatorIS7_EEED2Ev */
/* Demangled: std::__1::__vector_base<vendor::mediatek::hardware::dfps::V1_0::implementation::InfoPackage, std::__1::allocator<vendor::mediatek::hardware::dfps::V1_0::implementation::InfoPackage> >::~__vector_base() */
int _ZNSt3__113__vector_baseIN6vendor8mediatek8hardware4dfps4V1_014implementation11InfoPackageENS_9allocatorIS7_EEED2Ev(void);

/* Symbol: _ZThn4_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal6setFpsENS3_13FpsPolicyInfoE */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::setFps(vendor::mediatek::hardware::dfps::V1_0::FpsPolicyInfo) */
int _ZThn4_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal6setFpsENS3_13FpsPolicyInfoE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClientD1Ev */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyClient::~FpsPolicyClient() */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClientD1Ev(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware4dfps4V1_014implementation22FpsVsyncDeathRecipientE */
/* Demangled: vtable for vendor::mediatek::hardware::dfps::V1_0::implementation::FpsVsyncDeathRecipient */
extern void* _ZTVN6vendor8mediatek8hardware4dfps4V1_014implementation22FpsVsyncDeathRecipientE;

/* Symbol: _ZThn4_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal14regVsyncClientERKN7android2spINS3_9IFpsVsyncEEE */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::regVsyncClient(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync> const&) */
int _ZThn4_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal14regVsyncClientERKN7android2spINS3_9IFpsVsyncEEE(void);

/* Symbol: _ZThn4_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::~DfpsHal() */
int _ZThn4_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal9unregInfoEy */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::unregInfo(unsigned long long) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal9unregInfoEy(void);

/* Symbol: _ZNSt3__16vectorIcNS_9allocatorIcEEEC2Ej */
/* Demangled: std::__1::vector<char, std::__1::allocator<char> >::vector(unsigned int) */
int _ZNSt3__16vectorIcNS_9allocatorIcEEEC2Ej(void);

/* Symbol: _ZThn4_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal8dumpInfoEPjPc */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::dumpInfo(unsigned int*, char*) */
int _ZThn4_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal8dumpInfoEPjPc(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClientD0Ev */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyClient::~FpsPolicyClient() */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClientD0Ev(void);

/* Symbol: _ZThn4_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::~DfpsHal() */
int _ZThn4_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClientD2Ev */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsVsyncClient::~FpsVsyncClient() */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClientD2Ev(void);

/* Symbol: _ZN7android2spIN6vendor8mediatek8hardware4dfps4V1_014implementation21FpsInfoDeathRecipientEEC2EPS7_ */
/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::implementation::FpsInfoDeathRecipient>::sp(vendor::mediatek::hardware::dfps::V1_0::implementation::FpsInfoDeathRecipient*) */
int _ZN7android2spIN6vendor8mediatek8hardware4dfps4V1_014implementation21FpsInfoDeathRecipientEEC2EPS7_(void);

/* Symbol: _ZN7android2spIN6vendor8mediatek8hardware4dfps4V1_08IFpsInfoEEaSEOS7_ */
/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo>::operator=(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo>&&) */
int _ZN7android2spIN6vendor8mediatek8hardware4dfps4V1_08IFpsInfoEEaSEOS7_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZThn4_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal17removeVsyncClientEv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::removeVsyncClient() */
int _ZThn4_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal17removeVsyncClientEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClientD2Ev */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsInfoClient::~FpsInfoClient() */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClientD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClient8regVsyncERKN7android2spINS3_9IFpsVsyncEEERKNS7_INS3_14IVsyncCallbackEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsVsyncClient::regVsync(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsync> const&, android::sp<vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback> const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClient8regVsyncERKN7android2spINS3_9IFpsVsyncEEERKNS7_INS3_14IVsyncCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal12getPanelInfoEPNS3_9PanelInfoE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::getPanelInfo(vendor::mediatek::hardware::dfps::V1_0::PanelInfo*) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal12getPanelInfoEPNS3_9PanelInfoE(void);

/* Symbol: _ZN7android2spIN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClientEEaSEPS7_ */
/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::implementation::FpsVsyncClient>::operator=(vendor::mediatek::hardware::dfps::V1_0::implementation::FpsVsyncClient*) */
int _ZN7android2spIN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClientEEaSEPS7_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClientE0_NS3_16IFpsPolicyClientE */
/* Demangled: construction vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyClient-in-vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyClient */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClientE0_NS3_16IFpsPolicyClientE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClient13enableTrackerEi */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsVsyncClient::enableTracker(int) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClient13enableTrackerEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClientC1ERNS4_20FpsPolicyServiceBaseE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsInfoClient::FpsInfoClient(vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyServiceBase&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClientC1ERNS4_20FpsPolicyServiceBaseE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClientC1ERNS4_20FpsPolicyServiceBaseE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsVsyncClient::FpsVsyncClient(vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyServiceBase&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClientC1ERNS4_20FpsPolicyServiceBaseE(void);

/* Symbol: _ZThn4_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal12getPanelInfoEPNS3_9PanelInfoE */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::getPanelInfo(vendor::mediatek::hardware::dfps::V1_0::PanelInfo*) */
int _ZThn4_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal12getPanelInfoEPNS3_9PanelInfoE(void);

/* Symbol: _ZThn4_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal17setForegroundInfoEiN7android8hardware11hidl_stringE */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::setForegroundInfo(int, android::hardware::hidl_string) */
int _ZThn4_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal17setForegroundInfoEiN7android8hardware11hidl_stringE(void);

/* Symbol: _ZThn4_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal20forbidAdjustingVsyncEi */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::forbidAdjustingVsync(int) */
int _ZThn4_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal20forbidAdjustingVsyncEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClient9regPolicyERKN7android2spINS3_10IFpsPolicyEEERKNS6_8hardware11hidl_stringERKNS3_13FpsPolicyInfoENSt3__18functionIFvNS3_5ErrorEiEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyClient::regPolicy(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy> const&, android::hardware::hidl_string const&, vendor::mediatek::hardware::dfps::V1_0::FpsPolicyInfo const&, std::__1::function<void (vendor::mediatek::hardware::dfps::V1_0::Error, int)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClient9regPolicyERKN7android2spINS3_10IFpsPolicyEEERKNS6_8hardware11hidl_stringERKNS3_13FpsPolicyInfoENSt3__18functionIFvNS3_5ErrorEiEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClientD1Ev */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsVsyncClient::~FpsVsyncClient() */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClientD1Ev(void);

/* Symbol: HIDL_FETCH_IFpsPolicyService */
/* Demangled: HIDL_FETCH_IFpsPolicyService */
int HIDL_FETCH_IFpsPolicyService(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal16setNumberDisplayEi */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::setNumberDisplay(int) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal16setNumberDisplayEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal17setForegroundInfoEiN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::setForegroundInfo(int, android::hardware::hidl_string) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal17setForegroundInfoEiN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClient11unregPolicyEy */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyClient::unregPolicy(unsigned long long) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClient11unregPolicyEy(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClient10setHwcInfoERKNS3_7HwcInfoE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsInfoClient::setHwcInfo(vendor::mediatek::hardware::dfps::V1_0::HwcInfo const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClient10setHwcInfoERKNS3_7HwcInfoE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClientD1Ev */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsInfoClient::~FpsInfoClient() */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClientD1Ev(void);

/* Symbol: _ZNSt3__16vectorIN6vendor8mediatek8hardware4dfps4V1_014implementation11InfoPackageENS_9allocatorIS7_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS7_RS9_EE */
/* Demangled: std::__1::vector<vendor::mediatek::hardware::dfps::V1_0::implementation::InfoPackage, std::__1::allocator<vendor::mediatek::hardware::dfps::V1_0::implementation::InfoPackage> >::__swap_out_circular_buffer(std::__1::__split_buffer<vendor::mediatek::hardware::dfps::V1_0::implementation::InfoPackage, std::__1::allocator<vendor::mediatek::hardware::dfps::V1_0::implementation::InfoPackage>&>&) */
int _ZNSt3__16vectorIN6vendor8mediatek8hardware4dfps4V1_014implementation11InfoPackageENS_9allocatorIS7_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS7_RS9_EE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClientE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyClient */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClientE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal10setHwcInfoENS3_7HwcInfoE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::setHwcInfo(vendor::mediatek::hardware::dfps::V1_0::HwcInfo) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal10setHwcInfoENS3_7HwcInfoE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal16transferFpsRangeEPNS3_8FpsRangeER22DFRC_DRV_REFRESH_RANGE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::transferFpsRange(vendor::mediatek::hardware::dfps::V1_0::FpsRange*, DFRC_DRV_REFRESH_RANGE&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal16transferFpsRangeEPNS3_8FpsRangeER22DFRC_DRV_REFRESH_RANGE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClient6setFpsERKNS3_13FpsPolicyInfoE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyClient::setFps(vendor::mediatek::hardware::dfps::V1_0::FpsPolicyInfo const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClient6setFpsERKNS3_13FpsPolicyInfoE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClientD0Ev */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsVsyncClient::~FpsVsyncClient() */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClientD0Ev(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClientE0_NS3_15IFpsVsyncClientE */
/* Demangled: construction vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient-in-vendor::mediatek::hardware::dfps::V1_0::implementation::FpsVsyncClient */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClientE0_NS3_15IFpsVsyncClientE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalC2EPK11hw_module_t */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::DfpsHal(hw_module_t const*) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalC2EPK11hw_module_t(void);

/* Symbol: _ZThn4_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal14enableCallbackEb */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::enableCallback(bool) */
int _ZThn4_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal14enableCallbackEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClientD0Ev */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsInfoClient::~FpsInfoClient() */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClientD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal14enableCallbackEb */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::enableCallback(bool) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal14enableCallbackEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal14setSingleLayerEi */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::setSingleLayer(int) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal14setSingleLayerEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal17swVsyncChangeHookEPvii */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::swVsyncChangeHook(void*, int, int) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal17swVsyncChangeHookEPvii(void);

/* Symbol: _ZNSt3__16vectorIcNS_9allocatorIcEEE8__appendEj */
/* Demangled: std::__1::vector<char, std::__1::allocator<char> >::__append(unsigned int) */
int _ZNSt3__16vectorIcNS_9allocatorIcEEE8__appendEj(void);

/* Symbol: _ZThn4_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal13setWindowFlagEii */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::setWindowFlag(int, int) */
int _ZThn4_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal13setWindowFlagEii(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClientC1ERNS4_20FpsPolicyServiceBaseE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyClient::FpsPolicyClient(vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyServiceBase&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClientC1ERNS4_20FpsPolicyServiceBaseE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal11unregPolicyEyi */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::unregPolicy(unsigned long long, int) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal11unregPolicyEyi(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal15setInputWindowsEN7android8hardware11hidl_stringENS3_21SimpleInputWindowInfoE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::setInputWindows(android::hardware::hidl_string, vendor::mediatek::hardware::dfps::V1_0::SimpleInputWindowInfo) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal15setInputWindowsEN7android8hardware11hidl_stringENS3_21SimpleInputWindowInfoE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal19removePolicyPackageEy */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::removePolicyPackage(unsigned long long) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal19removePolicyPackageEy(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClientC2ERNS4_20FpsPolicyServiceBaseE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsInfoClient::FpsInfoClient(vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyServiceBase&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClientC2ERNS4_20FpsPolicyServiceBaseE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClientC2ERNS4_20FpsPolicyServiceBaseE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsVsyncClient::FpsVsyncClient(vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyServiceBase&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClientC2ERNS4_20FpsPolicyServiceBaseE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal20forbidAdjustingVsyncEi */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::forbidAdjustingVsync(int) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal20forbidAdjustingVsyncEi(void);

/* Symbol: _ZThn4_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal10setHwcInfoENS3_7HwcInfoE */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::setHwcInfo(vendor::mediatek::hardware::dfps::V1_0::HwcInfo) */
int _ZThn4_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal10setHwcInfoENS3_7HwcInfoE(void);

/* Symbol: _ZThn4_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal13enableTrackerEi */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::enableTracker(int) */
int _ZThn4_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal13enableTrackerEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClient14setSingleLayerEi */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsInfoClient::setSingleLayer(int) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClient14setSingleLayerEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClient15setInputWindowsERKN7android8hardware11hidl_stringERKNS3_21SimpleInputWindowInfoE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsInfoClient::setInputWindows(android::hardware::hidl_string const&, vendor::mediatek::hardware::dfps::V1_0::SimpleInputWindowInfo const&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClient15setInputWindowsERKN7android8hardware11hidl_stringERKNS3_21SimpleInputWindowInfoE(void);

/* Symbol: _ZN7android2wpIN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalEEaSERKS8_ */
/* Demangled: android::wp<vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal>::operator=(android::wp<vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal> const&) */
int _ZN7android2wpIN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalEEaSERKS8_(void);

/* Symbol: _ZNSt3__114__split_bufferIN6vendor8mediatek8hardware4dfps4V1_014implementation11InfoPackageERNS_9allocatorIS7_EEED2Ev */
/* Demangled: std::__1::__split_buffer<vendor::mediatek::hardware::dfps::V1_0::implementation::InfoPackage, std::__1::allocator<vendor::mediatek::hardware::dfps::V1_0::implementation::InfoPackage>&>::~__split_buffer() */
int _ZNSt3__114__split_bufferIN6vendor8mediatek8hardware4dfps4V1_014implementation11InfoPackageERNS_9allocatorIS7_EEED2Ev(void);

/* Symbol: _ZNSt3__16vectorIN6vendor8mediatek8hardware4dfps4V1_014implementation13PolicyPackageENS_9allocatorIS7_EEE21__push_back_slow_pathIRKS7_EEvOT_ */
/* Demangled: void std::__1::vector<vendor::mediatek::hardware::dfps::V1_0::implementation::PolicyPackage, std::__1::allocator<vendor::mediatek::hardware::dfps::V1_0::implementation::PolicyPackage> >::__push_back_slow_path<vendor::mediatek::hardware::dfps::V1_0::implementation::PolicyPackage const&>(vendor::mediatek::hardware::dfps::V1_0::implementation::PolicyPackage const&) */
int _ZNSt3__16vectorIN6vendor8mediatek8hardware4dfps4V1_014implementation13PolicyPackageENS_9allocatorIS7_EEE21__push_back_slow_pathIRKS7_EEvOT_(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalE */
/* Demangled: vtable for vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal */
extern void* _ZTVN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalE;

/* Symbol: _ZTVN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClientE */
/* Demangled: vtable for vendor::mediatek::hardware::dfps::V1_0::implementation::FpsInfoClient */
extern void* _ZTVN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClientE;

/* Symbol: _ZN7android2spIN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallbackEEaSERKS7_ */
/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback>::operator=(android::sp<vendor::mediatek::hardware::dfps::V1_0::IVsyncCallback> const&) */
int _ZN7android2spIN6vendor8mediatek8hardware4dfps4V1_014IVsyncCallbackEEaSERKS7_(void);

/* Symbol: _ZN7android2spIN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicyEEaSEOS7_ */
/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy>::operator=(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicy>&&) */
int _ZN7android2spIN6vendor8mediatek8hardware4dfps4V1_010IFpsPolicyEEaSEOS7_(void);

/* Symbol: _ZN7android2spIN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClientEEC2EPS7_ */
/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::implementation::FpsInfoClient>::sp(vendor::mediatek::hardware::dfps::V1_0::implementation::FpsInfoClient*) */
int _ZN7android2spIN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClientEEC2EPS7_(void);

/* Symbol: _ZN7android2spIN6vendor8mediatek8hardware4dfps4V1_014implementation21FpsInfoDeathRecipientEEaSEOS8_ */
/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::implementation::FpsInfoDeathRecipient>::operator=(android::sp<vendor::mediatek::hardware::dfps::V1_0::implementation::FpsInfoDeathRecipient>&&) */
int _ZN7android2spIN6vendor8mediatek8hardware4dfps4V1_014implementation21FpsInfoDeathRecipientEEaSEOS8_(void);

/* Symbol: _ZN7android2wpIN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClientEEaSERKNS_2spIS7_EE */
/* Demangled: android::wp<vendor::mediatek::hardware::dfps::V1_0::implementation::FpsVsyncClient>::operator=(android::sp<vendor::mediatek::hardware::dfps::V1_0::implementation::FpsVsyncClient> const&) */
int _ZN7android2wpIN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClientEEaSERKNS_2spIS7_EE(void);

/* Symbol: _ZNSt3__16vectorIcNS_9allocatorIcEEE26__swap_out_circular_bufferERNS_14__split_bufferIcRS2_EE */
/* Demangled: std::__1::vector<char, std::__1::allocator<char> >::__swap_out_circular_buffer(std::__1::__split_buffer<char, std::__1::allocator<char>&>&) */
int _ZNSt3__16vectorIcNS_9allocatorIcEEE26__swap_out_circular_bufferERNS_14__split_bufferIcRS2_EE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal14getVsyncClientEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::getVsyncClient() */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal14getVsyncClientEv(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClientE */
/* Demangled: vtable for vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyClient */
extern void* _ZTVN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClientE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClient16setNumberDisplayEi */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsInfoClient::setNumberDisplay(int) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClient16setNumberDisplayEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClient8dumpInfoENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsVsyncClient::dumpInfo(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClient8dumpInfoENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal11unregPolicyEy */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::unregPolicy(unsigned long long) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal11unregPolicyEy(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal7regInfoERKN7android2spINS3_8IFpsInfoEEEy */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::regInfo(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo> const&, unsigned long long) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal7regInfoERKN7android2spINS3_8IFpsInfoEEEy(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClient7regInfoERKN7android2spINS3_8IFpsInfoEEEy */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsInfoClient::regInfo(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo> const&, unsigned long long) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClient7regInfoERKN7android2spINS3_8IFpsInfoEEEy(void);

/* Symbol: _ZN7android2spIN6vendor8mediatek8hardware4dfps4V1_014implementation23FpsPolicyDeathRecipientEEaSEOS8_ */
/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyDeathRecipient>::operator=(android::sp<vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyDeathRecipient>&&) */
int _ZN7android2spIN6vendor8mediatek8hardware4dfps4V1_014implementation23FpsPolicyDeathRecipientEEaSEOS8_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClientE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::dfps::V1_0::implementation::FpsInfoClient */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClientE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTVN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClientE */
/* Demangled: vtable for vendor::mediatek::hardware::dfps::V1_0::implementation::FpsVsyncClient */
extern void* _ZTVN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClientE;

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal12initDispatchEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::initDispatch() */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal12initDispatchEv(void);

/* Symbol: _ZNSt3__113__vector_baseIN6vendor8mediatek8hardware4dfps4V1_014implementation13PolicyPackageENS_9allocatorIS7_EEED2Ev */
/* Demangled: std::__1::__vector_base<vendor::mediatek::hardware::dfps::V1_0::implementation::PolicyPackage, std::__1::allocator<vendor::mediatek::hardware::dfps::V1_0::implementation::PolicyPackage> >::~__vector_base() */
int _ZNSt3__113__vector_baseIN6vendor8mediatek8hardware4dfps4V1_014implementation13PolicyPackageENS_9allocatorIS7_EEED2Ev(void);

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::~DfpsHal() */
int _ZTv0_n12_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalD1Ev(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal17removeInfoPackageEy */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::removeInfoPackage(unsigned long long) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal17removeInfoPackageEy(void);

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClientD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::FpsInfoClient::~FpsInfoClient() */
int _ZTv0_n12_N6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClientD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal17createVsyncClientENSt3__18functionIFvNS3_5ErrorERKN7android2spINS3_15IFpsVsyncClientEEEEEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::createVsyncClient(std::__1::function<void (vendor::mediatek::hardware::dfps::V1_0::Error, android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient> const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal17createVsyncClientENSt3__18functionIFvNS3_5ErrorERKN7android2spINS3_15IFpsVsyncClientEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal17removeVsyncClientEv */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::removeVsyncClient() */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal17removeVsyncClientEv(void);

/* Symbol: _ZNSt3__16vectorIcNS_9allocatorIcEEE11__vallocateEj */
/* Demangled: std::__1::vector<char, std::__1::allocator<char> >::__vallocate(unsigned int) */
int _ZNSt3__16vectorIcNS_9allocatorIcEEE11__vallocateEj(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalE0_NS3_17IFpsPolicyServiceE */
/* Demangled: construction vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService-in-vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalE0_NS3_17IFpsPolicyServiceE;

/* Symbol: _ZThn4_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal9unregInfoEy */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::unregInfo(unsigned long long) */
int _ZThn4_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal9unregInfoEy(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClientE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::dfps::V1_0::implementation::FpsVsyncClient */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClientE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal8dumpInfoEPjPc */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::dumpInfo(unsigned int*, char*) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal8dumpInfoEPjPc(void);

/* Symbol: _ZThn4_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal11getFpsRangeEPNS3_8FpsRangeE */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::getFpsRange(vendor::mediatek::hardware::dfps::V1_0::FpsRange*) */
int _ZThn4_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal11getFpsRangeEPNS3_8FpsRangeE(void);

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::~DfpsHal() */
int _ZTv0_n12_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalD0Ev(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalD2Ev */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::~DfpsHal() */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalD2Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIN6vendor8mediatek8hardware4dfps4V1_014implementation13PolicyPackageERNS_9allocatorIS7_EEEC2EjjSA_ */
/* Demangled: std::__1::__split_buffer<vendor::mediatek::hardware::dfps::V1_0::implementation::PolicyPackage, std::__1::allocator<vendor::mediatek::hardware::dfps::V1_0::implementation::PolicyPackage>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<vendor::mediatek::hardware::dfps::V1_0::implementation::PolicyPackage>&) */
int _ZNSt3__114__split_bufferIN6vendor8mediatek8hardware4dfps4V1_014implementation13PolicyPackageERNS_9allocatorIS7_EEEC2EjjSA_(void);

/* Symbol: _ZThn4_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal16setNumberDisplayEi */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::setNumberDisplay(int) */
int _ZThn4_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal16setNumberDisplayEi(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClientE */
/* Demangled: VTT for vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyClient */
extern void* _ZTTN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClientE;

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClientD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::FpsInfoClient::~FpsInfoClient() */
int _ZTv0_n12_N6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClientD0Ev(void);

/* Symbol: _ZN7android2spIN6vendor8mediatek8hardware4dfps4V1_014implementation23FpsPolicyDeathRecipientEEC2EPS7_ */
/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyDeathRecipient>::sp(vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyDeathRecipient*) */
int _ZN7android2spIN6vendor8mediatek8hardware4dfps4V1_014implementation23FpsPolicyDeathRecipientEEC2EPS7_(void);

/* Symbol: _ZNSt3__114__split_bufferIN6vendor8mediatek8hardware4dfps4V1_014implementation11InfoPackageERNS_9allocatorIS7_EEEC2EjjSA_ */
/* Demangled: std::__1::__split_buffer<vendor::mediatek::hardware::dfps::V1_0::implementation::InfoPackage, std::__1::allocator<vendor::mediatek::hardware::dfps::V1_0::implementation::InfoPackage>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<vendor::mediatek::hardware::dfps::V1_0::implementation::InfoPackage>&) */
int _ZNSt3__114__split_bufferIN6vendor8mediatek8hardware4dfps4V1_014implementation11InfoPackageERNS_9allocatorIS7_EEEC2EjjSA_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_014implementation23FpsPolicyDeathRecipientE0_N7android8hardware20hidl_death_recipientE */
/* Demangled: construction vtable for android::hardware::hidl_death_recipient-in-vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyDeathRecipient */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_014implementation23FpsPolicyDeathRecipientE0_N7android8hardware20hidl_death_recipientE;

/* Symbol: _ZNSt3__16vectorIN6vendor8mediatek8hardware4dfps4V1_014implementation13PolicyPackageENS_9allocatorIS7_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS7_RS9_EE */
/* Demangled: std::__1::vector<vendor::mediatek::hardware::dfps::V1_0::implementation::PolicyPackage, std::__1::allocator<vendor::mediatek::hardware::dfps::V1_0::implementation::PolicyPackage> >::__swap_out_circular_buffer(std::__1::__split_buffer<vendor::mediatek::hardware::dfps::V1_0::implementation::PolicyPackage, std::__1::allocator<vendor::mediatek::hardware::dfps::V1_0::implementation::PolicyPackage>&>&) */
int _ZNSt3__16vectorIN6vendor8mediatek8hardware4dfps4V1_014implementation13PolicyPackageENS_9allocatorIS7_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS7_RS9_EE(void);

/* Symbol: _ZThn4_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal11unregPolicyEy */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::unregPolicy(unsigned long long) */
int _ZThn4_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal11unregPolicyEy(void);

/* Symbol: _ZThn4_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal15setInputWindowsEN7android8hardware11hidl_stringENS3_21SimpleInputWindowInfoE */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::setInputWindows(android::hardware::hidl_string, vendor::mediatek::hardware::dfps::V1_0::SimpleInputWindowInfo) */
int _ZThn4_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal15setInputWindowsEN7android8hardware11hidl_stringENS3_21SimpleInputWindowInfoE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClient15onSwVsyncChangeEii */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsVsyncClient::onSwVsyncChange(int, int) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation14FpsVsyncClient15onSwVsyncChangeEii(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalD1Ev */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::~DfpsHal() */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalD1Ev(void);

/* Symbol: _ZN7android2spIN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClientEEC2EPS7_ */
/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyClient>::sp(vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyClient*) */
int _ZN7android2spIN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClientEEC2EPS7_(void);

/* Symbol: _ZNSt3__16vectorIN6vendor8mediatek8hardware4dfps4V1_014implementation11InfoPackageENS_9allocatorIS7_EEE21__push_back_slow_pathIRKS7_EEvOT_ */
/* Demangled: void std::__1::vector<vendor::mediatek::hardware::dfps::V1_0::implementation::InfoPackage, std::__1::allocator<vendor::mediatek::hardware::dfps::V1_0::implementation::InfoPackage> >::__push_back_slow_path<vendor::mediatek::hardware::dfps::V1_0::implementation::InfoPackage const&>(vendor::mediatek::hardware::dfps::V1_0::implementation::InfoPackage const&) */
int _ZNSt3__16vectorIN6vendor8mediatek8hardware4dfps4V1_014implementation11InfoPackageENS_9allocatorIS7_EEE21__push_back_slow_pathIRKS7_EEvOT_(void);

/* Symbol: _ZThn4_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal14setSingleLayerEi */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::setSingleLayer(int) */
int _ZThn4_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal14setSingleLayerEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal9unregInfoEyi */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::unregInfo(unsigned long long, int) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal9unregInfoEyi(void);

/* Symbol: _ZThn4_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal7regInfoERKN7android2spINS3_8IFpsInfoEEEy */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::regInfo(android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsInfo> const&, unsigned long long) */
int _ZThn4_N6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal7regInfoERKN7android2spINS3_8IFpsInfoEEEy(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware4dfps4V1_014implementation23FpsPolicyDeathRecipientE */
/* Demangled: vtable for vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyDeathRecipient */
extern void* _ZTVN6vendor8mediatek8hardware4dfps4V1_014implementation23FpsPolicyDeathRecipientE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClient20forbidAdjustingVsyncEi */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsInfoClient::forbidAdjustingVsync(int) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClient20forbidAdjustingVsyncEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal13enableTrackerEi */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::enableTracker(int) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal13enableTrackerEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalD0Ev */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::~DfpsHal() */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalD0Ev(void);

/* Symbol: _ZN7android2spIN6vendor8mediatek8hardware4dfps4V1_014implementation22FpsVsyncDeathRecipientEEC2EPS7_ */
/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::implementation::FpsVsyncDeathRecipient>::sp(vendor::mediatek::hardware::dfps::V1_0::implementation::FpsVsyncDeathRecipient*) */
int _ZN7android2spIN6vendor8mediatek8hardware4dfps4V1_014implementation22FpsVsyncDeathRecipientEEC2EPS7_(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalE */
/* Demangled: VTT for vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal */
extern void* _ZTTN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHalE;

/* Symbol: _ZTVN6vendor8mediatek8hardware4dfps4V1_014implementation21FpsInfoDeathRecipientE */
/* Demangled: vtable for vendor::mediatek::hardware::dfps::V1_0::implementation::FpsInfoDeathRecipient */
extern void* _ZTVN6vendor8mediatek8hardware4dfps4V1_014implementation21FpsInfoDeathRecipientE;

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClient11getFpsRangeERKNS3_8FpsRangeENSt3__18functionIFvNS3_5ErrorES8_EEE */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsPolicyClient::getFpsRange(vendor::mediatek::hardware::dfps::V1_0::FpsRange const&, std::__1::function<void (vendor::mediatek::hardware::dfps::V1_0::Error, vendor::mediatek::hardware::dfps::V1_0::FpsRange const&)>) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation15FpsPolicyClient11getFpsRangeERKNS3_8FpsRangeENSt3__18functionIFvNS3_5ErrorES8_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal17transferPanelInfoEPNS3_9PanelInfoER19DFRC_DRV_PANEL_INFO */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::DfpsHal::transferPanelInfo(vendor::mediatek::hardware::dfps::V1_0::PanelInfo*, DFRC_DRV_PANEL_INFO&) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation7DfpsHal17transferPanelInfoEPNS3_9PanelInfoER19DFRC_DRV_PANEL_INFO(void);

/* Symbol: _ZNKSt3__18functionIFvN6vendor8mediatek8hardware4dfps4V1_05ErrorEiEEclES6_i */
/* Demangled: std::__1::function<void (vendor::mediatek::hardware::dfps::V1_0::Error, int)>::operator()(vendor::mediatek::hardware::dfps::V1_0::Error, int) const */
int _ZNKSt3__18functionIFvN6vendor8mediatek8hardware4dfps4V1_05ErrorEiEEclES6_i(void);

/* Symbol: _ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClient9unregInfoEy */
/* Demangled: vendor::mediatek::hardware::dfps::V1_0::implementation::FpsInfoClient::unregInfo(unsigned long long) */
int _ZN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClient9unregInfoEy(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClientE0_NS3_14IFpsInfoClientE */
/* Demangled: construction vtable for vendor::mediatek::hardware::dfps::V1_0::IFpsInfoClient-in-vendor::mediatek::hardware::dfps::V1_0::implementation::FpsInfoClient */
extern void* _ZTCN6vendor8mediatek8hardware4dfps4V1_014implementation13FpsInfoClientE0_NS3_14IFpsInfoClientE;

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_DFPS_1_0_IMPL_H */

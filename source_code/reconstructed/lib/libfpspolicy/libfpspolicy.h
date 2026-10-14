/*
 * Reverse-Engineered ABI Specification for: libfpspolicy.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libfpspolicy.so
 */

#ifndef BEGONIA_RE_LIBFPSPOLICY_H
#define BEGONIA_RE_LIBFPSPOLICY_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android9FpsPolicy18recoverStateLockedEv */
/* Demangled: android::FpsPolicy::recoverStateLocked() */
int _ZN7android9FpsPolicy18recoverStateLockedEv(void);

/* Symbol: _ZN7android9FpsPolicy6setFpsEiiiy */
/* Demangled: android::FpsPolicy::setFps(int, int, int, unsigned long long) */
int _ZN7android9FpsPolicy6setFpsEiiiy(void);

/* Symbol: _ZTv0_n12_N7android7FpsInfoD0Ev */
/* Demangled: virtual thunk to android::FpsInfo::~FpsInfo() */
int _ZTv0_n12_N7android7FpsInfoD0Ev(void);

/* Symbol: _ZN7android2spIN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyServiceEEaSEPS6_ */
/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService>::operator=(vendor::mediatek::hardware::dfps::V1_0::IFpsPolicyService*) */
int _ZN7android2spIN6vendor8mediatek8hardware4dfps4V1_017IFpsPolicyServiceEEaSEPS6_(void);

/* Symbol: _ZN7android8FpsVsync29registerSwVsyncChangeCallbackENSt3__18functionIFviiEEE */
/* Demangled: android::FpsVsync::registerSwVsyncChangeCallback(std::__1::function<void (int, int)>) */
int _ZN7android8FpsVsync29registerSwVsyncChangeCallbackENSt3__18functionIFviiEEE(void);

/* Symbol: _ZN7android8FpsVsyncD2Ev */
/* Demangled: android::FpsVsync::~FpsVsync() */
int _ZN7android8FpsVsyncD2Ev(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _ZN7android9unwrapRetERNS_8hardware6ReturnIN6vendor8mediatek8hardware4dfps4V1_05ErrorEEE */
/* Demangled: android::unwrapRet(android::hardware::Return<vendor::mediatek::hardware::dfps::V1_0::Error>&) */
int _ZN7android9unwrapRetERNS_8hardware6ReturnIN6vendor8mediatek8hardware4dfps4V1_05ErrorEEE(void);

/* Symbol: _ZN7android9FpsPolicy11getFpsRangeEiPN6vendor8mediatek8hardware4dfps4V1_08FpsRangeE */
/* Demangled: android::FpsPolicy::getFpsRange(int, vendor::mediatek::hardware::dfps::V1_0::FpsRange*) */
int _ZN7android9FpsPolicy11getFpsRangeEiPN6vendor8mediatek8hardware4dfps4V1_08FpsRangeE(void);

/* Symbol: _ZN7android9FpsPolicy20connectServiceLockedEb */
/* Demangled: android::FpsPolicy::connectServiceLocked(bool) */
int _ZN7android9FpsPolicy20connectServiceLockedEb(void);

/* Symbol: _ZN7android9FpsPolicy24getPanelInfoNumberLockedEPi */
/* Demangled: android::FpsPolicy::getPanelInfoNumberLocked(int*) */
int _ZN7android9FpsPolicy24getPanelInfoNumberLockedEPi(void);

/* Symbol: _ZN7android9FpsPolicyD1Ev */
/* Demangled: android::FpsPolicy::~FpsPolicy() */
int _ZN7android9FpsPolicyD1Ev(void);

/* Symbol: _ZN7android7FpsInfoC1Ev */
/* Demangled: android::FpsInfo::FpsInfo() */
int _ZN7android7FpsInfoC1Ev(void);

/* Symbol: _ZN7android9FpsPolicy21cb_fpsRequestReceiverEiiPv */
/* Demangled: android::FpsPolicy::cb_fpsRequestReceiver(int, int, void*) */
int _ZN7android9FpsPolicy21cb_fpsRequestReceiverEiiPv(void);

/* Symbol: _ZN7android7FpsInfo16setNumberDisplayEi */
/* Demangled: android::FpsInfo::setNumberDisplay(int) */
int _ZN7android7FpsInfo16setNumberDisplayEi(void);

/* Symbol: _ZN7android7FpsInfo18recoverStateLockedEv */
/* Demangled: android::FpsInfo::recoverStateLocked() */
int _ZN7android7FpsInfo18recoverStateLockedEv(void);

/* Symbol: _ZN7android8FpsVsync11updateStateEi */
/* Demangled: android::FpsVsync::updateState(int) */
int _ZN7android8FpsVsync11updateStateEi(void);

/* Symbol: _ZN7android7FpsInfoD0Ev */
/* Demangled: android::FpsInfo::~FpsInfo() */
int _ZN7android7FpsInfoD0Ev(void);

/* Symbol: _ZN7android8FpsVsync13enableTrackerEi */
/* Demangled: android::FpsVsync::enableTracker(int) */
int _ZN7android8FpsVsync13enableTrackerEi(void);

/* Symbol: _ZTTN7android9FpsPolicyE */
/* Demangled: VTT for android::FpsPolicy */
extern void* _ZTTN7android9FpsPolicyE;

/* Symbol: _ZN7android8FpsVsync17assertStateLockedEv */
/* Demangled: android::FpsVsync::assertStateLocked() */
int _ZN7android8FpsVsync17assertStateLockedEv(void);

/* Symbol: _ZN7android8FpsVsync17callSwVsyncChangeEii */
/* Demangled: android::FpsVsync::callSwVsyncChange(int, int) */
int _ZN7android8FpsVsync17callSwVsyncChangeEii(void);

/* Symbol: _ZN7android9FpsPolicy17assertStateLockedEiRNS_7String8E */
/* Demangled: android::FpsPolicy::assertStateLocked(int, android::String8&) */
int _ZN7android9FpsPolicy17assertStateLockedEiRNS_7String8E(void);

/* Symbol: _ZTv0_n16_N7android7FpsInfo10onFirstRefEv */
/* Demangled: virtual thunk to android::FpsInfo::onFirstRef() */
int _ZTv0_n16_N7android7FpsInfo10onFirstRefEv(void);

/* Symbol: _ZN7android8FpsVsyncC1Ev */
/* Demangled: android::FpsVsync::FpsVsync() */
int _ZN7android8FpsVsyncC1Ev(void);

/* Symbol: _ZN7android7FpsInfo8cbGetFpsEi */
/* Demangled: android::FpsInfo::cbGetFps(int) */
int _ZN7android7FpsInfo8cbGetFpsEi(void);

/* Symbol: _ZTv0_n12_N7android7FpsInfoD1Ev */
/* Demangled: virtual thunk to android::FpsInfo::~FpsInfo() */
int _ZTv0_n12_N7android7FpsInfoD1Ev(void);

/* Symbol: _ZN7android8FpsVsync18recoverStateLockedEv */
/* Demangled: android::FpsVsync::recoverStateLocked() */
int _ZN7android8FpsVsync18recoverStateLockedEv(void);

/* Symbol: _ZN7android9FpsPolicy12setVideoModeEb */
/* Demangled: android::FpsPolicy::setVideoMode(bool) */
int _ZN7android9FpsPolicy12setVideoModeEb(void);

/* Symbol: _ZN7android9FpsPolicyD2Ev */
/* Demangled: android::FpsPolicy::~FpsPolicy() */
int _ZN7android9FpsPolicyD2Ev(void);

/* Symbol: _ZN7android7FpsInfo13setWindowFlagEii */
/* Demangled: android::FpsInfo::setWindowFlag(int, int) */
int _ZN7android7FpsInfo13setWindowFlagEii(void);

/* Symbol: _ZN7android7FpsInfo17setForegroundInfoEiRNS_7String8E */
/* Demangled: android::FpsInfo::setForegroundInfo(int, android::String8&) */
int _ZN7android7FpsInfo17setForegroundInfoEiRNS_7String8E(void);

/* Symbol: _ZN7android7FpsInfoC2Ev */
/* Demangled: android::FpsInfo::FpsInfo() */
int _ZN7android7FpsInfoC2Ev(void);

/* Symbol: _ZN7android8FpsVsyncD0Ev */
/* Demangled: android::FpsVsync::~FpsVsync() */
int _ZN7android8FpsVsyncD0Ev(void);

/* Symbol: _ZTv0_n12_N7android9FpsPolicyD0Ev */
/* Demangled: virtual thunk to android::FpsPolicy::~FpsPolicy() */
int _ZTv0_n12_N7android9FpsPolicyD0Ev(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: _ZN7android7FpsInfo20forbidAdjustingVsyncEb */
/* Demangled: android::FpsInfo::forbidAdjustingVsync(bool) */
int _ZN7android7FpsInfo20forbidAdjustingVsyncEb(void);

/* Symbol: _ZN7android8FpsVsync20connectServiceLockedEb */
/* Demangled: android::FpsVsync::connectServiceLocked(bool) */
int _ZN7android8FpsVsync20connectServiceLockedEb(void);

/* Symbol: createFpsVsyncApi */
/* Demangled: createFpsVsyncApi */
int createFpsVsyncApi(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _ZN7android9FpsPolicy11updateStateEi */
/* Demangled: android::FpsPolicy::updateState(int) */
int _ZN7android9FpsPolicy11updateStateEi(void);

/* Symbol: _ZN7android9FpsPolicy17fpsRequestReceiveEii */
/* Demangled: android::FpsPolicy::fpsRequestReceive(int, int) */
int _ZN7android9FpsPolicy17fpsRequestReceiveEii(void);

/* Symbol: _ZN7android9FpsPolicy7setFlagEjj */
/* Demangled: android::FpsPolicy::setFlag(unsigned int, unsigned int) */
int _ZN7android9FpsPolicy7setFlagEjj(void);

/* Symbol: _ZN7android7FpsInfo10onFirstRefEv */
/* Demangled: android::FpsInfo::onFirstRef() */
int _ZN7android7FpsInfo10onFirstRefEv(void);

/* Symbol: _ZN7android7FpsInfo11updateStateEi */
/* Demangled: android::FpsInfo::updateState(int) */
int _ZN7android7FpsInfo11updateStateEi(void);

/* Symbol: _ZN7android7FpsInfoD1Ev */
/* Demangled: android::FpsInfo::~FpsInfo() */
int _ZN7android7FpsInfoD1Ev(void);

/* Symbol: _ZTVN7android8FpsVsyncE */
/* Demangled: vtable for android::FpsVsync */
extern void* _ZTVN7android8FpsVsyncE;

/* Symbol: _ZN7android7FpsInfo10setHwcInfoERKN6vendor8mediatek8hardware4dfps4V1_07HwcInfoE */
/* Demangled: android::FpsInfo::setHwcInfo(vendor::mediatek::hardware::dfps::V1_0::HwcInfo const&) */
int _ZN7android7FpsInfo10setHwcInfoERKN6vendor8mediatek8hardware4dfps4V1_07HwcInfoE(void);

/* Symbol: _ZN7android7FpsInfo10threadLoopEv */
/* Demangled: android::FpsInfo::threadLoop() */
int _ZN7android7FpsInfo10threadLoopEv(void);

/* Symbol: _ZN7android9FpsPolicy18getPanelInfoNumberEPi */
/* Demangled: android::FpsPolicy::getPanelInfoNumber(int*) */
int _ZN7android9FpsPolicy18getPanelInfoNumberEPi(void);

/* Symbol: _ZN7android8FpsVsyncC2Ev */
/* Demangled: android::FpsVsync::FpsVsync() */
int _ZN7android8FpsVsyncC2Ev(void);

/* Symbol: _ZN7android12getApiStringEi */
/* Demangled: android::getApiString(int) */
int _ZN7android12getApiStringEi(void);

/* Symbol: _ZN7android9FpsPolicyC2EiRNS_7String8E */
/* Demangled: android::FpsPolicy::FpsPolicy(int, android::String8&) */
int _ZN7android9FpsPolicyC2EiRNS_7String8E(void);

/* Symbol: _ZTVN7android9FpsPolicyE */
/* Demangled: vtable for android::FpsPolicy */
extern void* _ZTVN7android9FpsPolicyE;

/* Symbol: _ZTv0_n16_N7android9FpsPolicy10onFirstRefEv */
/* Demangled: virtual thunk to android::FpsPolicy::onFirstRef() */
int _ZTv0_n16_N7android9FpsPolicy10onFirstRefEv(void);

/* Symbol: _ZTTN7android7FpsInfoE */
/* Demangled: VTT for android::FpsInfo */
extern void* _ZTTN7android7FpsInfoE;

/* Symbol: _ZN7android7FpsInfo15setInputWindowsERKNS_7String8ERKN6vendor8mediatek8hardware4dfps4V1_021SimpleInputWindowInfoE */
/* Demangled: android::FpsInfo::setInputWindows(android::String8 const&, vendor::mediatek::hardware::dfps::V1_0::SimpleInputWindowInfo const&) */
int _ZN7android7FpsInfo15setInputWindowsERKNS_7String8ERKN6vendor8mediatek8hardware4dfps4V1_021SimpleInputWindowInfoE(void);

/* Symbol: _ZN7android7FpsInfo20connectServiceLockedEb */
/* Demangled: android::FpsInfo::connectServiceLocked(bool) */
int _ZN7android7FpsInfo20connectServiceLockedEb(void);

/* Symbol: _ZN7android2spIN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClientEEaSEPS6_ */
/* Demangled: android::sp<vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient>::operator=(vendor::mediatek::hardware::dfps::V1_0::IFpsVsyncClient*) */
int _ZN7android2spIN6vendor8mediatek8hardware4dfps4V1_015IFpsVsyncClientEEaSEPS6_(void);

/* Symbol: _ZN7android8FpsVsyncD1Ev */
/* Demangled: android::FpsVsync::~FpsVsync() */
int _ZN7android8FpsVsyncD1Ev(void);

/* Symbol: _ZN7android9FpsPolicyD0Ev */
/* Demangled: android::FpsPolicy::~FpsPolicy() */
int _ZN7android9FpsPolicyD0Ev(void);

/* Symbol: _ZTv0_n12_N7android9FpsPolicyD1Ev */
/* Demangled: virtual thunk to android::FpsPolicy::~FpsPolicy() */
int _ZTv0_n12_N7android9FpsPolicyD1Ev(void);

/* Symbol: _ZN7android7FpsInfo18regFpsInfoListenerERNS_2spINS0_15FpsInfoListenerEEE */
/* Demangled: android::FpsInfo::regFpsInfoListener(android::sp<android::FpsInfo::FpsInfoListener>&) */
int _ZN7android7FpsInfo18regFpsInfoListenerERNS_2spINS0_15FpsInfoListenerEEE(void);

/* Symbol: _ZN7android9FpsPolicy10onFirstRefEv */
/* Demangled: android::FpsPolicy::onFirstRef() */
int _ZN7android9FpsPolicy10onFirstRefEv(void);

/* Symbol: _ZN7android9FpsPolicy16isValidFpsLockedEii */
/* Demangled: android::FpsPolicy::isValidFpsLocked(int, int) */
int _ZN7android9FpsPolicy16isValidFpsLockedEii(void);

/* Symbol: _ZN7android7FpsInfoD2Ev */
/* Demangled: android::FpsInfo::~FpsInfo() */
int _ZN7android7FpsInfoD2Ev(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _ZN7android9FpsPolicy10threadLoopEv */
/* Demangled: android::FpsPolicy::threadLoop() */
int _ZN7android9FpsPolicy10threadLoopEv(void);

/* Symbol: _ZN7android9FpsPolicy26registerFpsRequestListenerERKNS_2spINS0_18FpsRequestListenerEEE */
/* Demangled: android::FpsPolicy::registerFpsRequestListener(android::sp<android::FpsPolicy::FpsRequestListener> const&) */
int _ZN7android9FpsPolicy26registerFpsRequestListenerERKNS_2spINS0_18FpsRequestListenerEEE(void);

/* Symbol: _ZTCN7android9FpsPolicyE0_NS_6ThreadE */
/* Demangled: construction vtable for android::Thread-in-android::FpsPolicy */
extern void* _ZTCN7android9FpsPolicyE0_NS_6ThreadE;

/* Symbol: _ZN7android8FpsVsync8dumpInfoERNS_7String8E */
/* Demangled: android::FpsVsync::dumpInfo(android::String8&) */
int _ZN7android8FpsVsync8dumpInfoERNS_7String8E(void);

/* Symbol: _ZN7android13getModeStringEi */
/* Demangled: android::getModeString(int) */
int _ZN7android13getModeStringEi(void);

/* Symbol: _ZN7android9FpsPolicy24cancelFpsRequestListenerEv */
/* Demangled: android::FpsPolicy::cancelFpsRequestListener() */
int _ZN7android9FpsPolicy24cancelFpsRequestListenerEv(void);

/* Symbol: _ZN7android9FpsPolicyC1EiRNS_7String8E */
/* Demangled: android::FpsPolicy::FpsPolicy(int, android::String8&) */
int _ZN7android9FpsPolicyC1EiRNS_7String8E(void);

/* Symbol: _ZN7android7FpsInfo14setSingleLayerEi */
/* Demangled: android::FpsInfo::setSingleLayer(int) */
int _ZN7android7FpsInfo14setSingleLayerEi(void);

/* Symbol: _ZTCN7android7FpsInfoE0_NS_6ThreadE */
/* Demangled: construction vtable for android::Thread-in-android::FpsInfo */
extern void* _ZTCN7android7FpsInfoE0_NS_6ThreadE;

/* Symbol: _ZTVN7android7FpsInfoE */
/* Demangled: vtable for android::FpsInfo */
extern void* _ZTVN7android7FpsInfoE;

__END_DECLS

#endif /* BEGONIA_RE_LIBFPSPOLICY_H */

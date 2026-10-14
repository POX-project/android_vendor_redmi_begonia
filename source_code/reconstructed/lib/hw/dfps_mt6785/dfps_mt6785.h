/*
 * Reverse-Engineered ABI Specification for: dfps.mt6785.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: dfps.mt6785.so
 */

#ifndef BEGONIA_RE_DFPS_MT6785_H
#define BEGONIA_RE_DFPS_MT6785_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Standard Android Hardware Module Symbol */
extern struct hw_module_t HAL_MODULE_INFO_SYM;

/* Symbol: _ZN7android16FpsPolicyService10threadLoopEv */
/* Demangled: android::FpsPolicyService::threadLoop() */
int _ZN7android16FpsPolicyService10threadLoopEv(void);

/* Symbol: _ZN7android16FpsPolicyService19printListInfoLockedERNS_7String8E */
/* Demangled: android::FpsPolicyService::printListInfoLocked(android::String8&) */
int _ZN7android16FpsPolicyService19printListInfoLockedERNS_7String8E(void);

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int __aeabi_uidiv(void);

/* Symbol: _ZN7android16FpsPolicyServiceC1Ev */
/* Demangled: android::FpsPolicyService::FpsPolicyService() */
int _ZN7android16FpsPolicyServiceC1Ev(void);

/* Symbol: _ZN7android16FpsPolicyService17setForegroundInfoEiPKcj */
/* Demangled: android::FpsPolicyService::setForegroundInfo(int, char const*, unsigned int) */
int _ZN7android16FpsPolicyService17setForegroundInfoEiPKcj(void);

/* Symbol: _ZN7android16FpsPolicyTracker10threadLoopEv */
/* Demangled: android::FpsPolicyTracker::threadLoop() */
int _ZN7android16FpsPolicyTracker10threadLoopEv(void);

/* Symbol: _ZN7android16FpsPolicyTrackerD1Ev */
/* Demangled: android::FpsPolicyTracker::~FpsPolicyTracker() */
int _ZN7android16FpsPolicyTrackerD1Ev(void);

/* Symbol: __udivsi3 */
/* Demangled: __udivsi3 */
int __udivsi3(void);

/* Symbol: _ZN7android16FpsPolicyService15setInputWindowsEPKcjRK26DFRC_DRV_INPUT_WINDOW_INFO */
/* Demangled: android::FpsPolicyService::setInputWindows(char const*, unsigned int, DFRC_DRV_INPUT_WINDOW_INFO const&) */
int _ZN7android16FpsPolicyService15setInputWindowsEPKcjRK26DFRC_DRV_INPUT_WINDOW_INFO(void);

/* Symbol: _ZN7android16FpsPolicyService23printListFpsRangeLockedERNS_7String8E */
/* Demangled: android::FpsPolicyService::printListFpsRangeLocked(android::String8&) */
int _ZN7android16FpsPolicyService23printListFpsRangeLockedERNS_7String8E(void);

/* Symbol: _ZN7android16FpsPolicyServiceD2Ev */
/* Demangled: android::FpsPolicyService::~FpsPolicyService() */
int _ZN7android16FpsPolicyServiceD2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService17FpsPolicyInfoPackEEEEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, android::sp<android::FpsPolicyService::FpsPolicyInfoPack> > >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService17FpsPolicyInfoPackEEEEEE12do_constructEPvj(void);

/* Symbol: _ZNSt3__114__split_bufferI22DFRC_DRV_REFRESH_RANGERNS_9allocatorIS1_EEEC2EjjS4_ */
/* Demangled: std::__1::__split_buffer<DFRC_DRV_REFRESH_RANGE, std::__1::allocator<DFRC_DRV_REFRESH_RANGE>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<DFRC_DRV_REFRESH_RANGE>&) */
int _ZNSt3__114__split_bufferI22DFRC_DRV_REFRESH_RANGERNS_9allocatorIS1_EEEC2EjjS4_(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: _ZN7android16FpsPolicyTracker25computeNextDumpTimeLockedEv */
/* Demangled: android::FpsPolicyTracker::computeNextDumpTimeLocked() */
int _ZN7android16FpsPolicyTracker25computeNextDumpTimeLockedEv(void);

/* Symbol: _Z16dfps_device_openPK11hw_module_tPKcPP11hw_device_t */
/* Demangled: dfps_device_open(hw_module_t const*, char const*, hw_device_t**) */
int _Z16dfps_device_openPK11hw_module_tPKcPP11hw_device_t(void);

/* Symbol: _ZN7android16FpsPolicyService12getPanelInfoEP19DFRC_DRV_PANEL_INFO */
/* Demangled: android::FpsPolicyService::getPanelInfo(DFRC_DRV_PANEL_INFO*) */
int _ZN7android16FpsPolicyService12getPanelInfoEP19DFRC_DRV_PANEL_INFO(void);

/* Symbol: _ZN7android2spINS_16FpsPolicyService17FpsPolicyInfoPackEEC2EPS2_ */
/* Demangled: android::sp<android::FpsPolicyService::FpsPolicyInfoPack>::sp(android::FpsPolicyService::FpsPolicyInfoPack*) */
int _ZN7android2spINS_16FpsPolicyService17FpsPolicyInfoPackEEC2EPS2_(void);

/* Symbol: _ZTVN7android16FpsPolicyService11FpsInfoPackE */
/* Demangled: vtable for android::FpsPolicyService::FpsInfoPack */
extern void* _ZTVN7android16FpsPolicyService11FpsInfoPackE;

/* Symbol: _ZN7android16FpsPolicyTrackerC2Ev */
/* Demangled: android::FpsPolicyTracker::FpsPolicyTracker() */
int _ZN7android16FpsPolicyTrackerC2Ev(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _ZN7android16FpsPolicyService16registerCallbackEiPvPFvvE */
/* Demangled: android::FpsPolicyService::registerCallback(int, void*, void (*)()) */
int _ZN7android16FpsPolicyService16registerCallbackEiPvPFvvE(void);

/* Symbol: _ZN7android16FpsPolicyService21printSystemInfoLockedERNS_7String8E */
/* Demangled: android::FpsPolicyService::printSystemInfoLocked(android::String8&) */
int _ZN7android16FpsPolicyService21printSystemInfoLockedERNS_7String8E(void);

/* Symbol: _ZN7android16FpsPolicyService4dumpEPjPc */
/* Demangled: android::FpsPolicyService::dump(unsigned int*, char*) */
int _ZN7android16FpsPolicyService4dumpEPjPc(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService11FpsInfoPackEEEEEE10do_compareEPKvS9_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, android::sp<android::FpsPolicyService::FpsInfoPack> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService11FpsInfoPackEEEEEE10do_compareEPKvS9_(void);

/* Symbol: _ZNSt3__16vectorI22DFRC_DRV_REFRESH_RANGENS_9allocatorIS1_EEE8__appendEj */
/* Demangled: std::__1::vector<DFRC_DRV_REFRESH_RANGE, std::__1::allocator<DFRC_DRV_REFRESH_RANGE> >::__append(unsigned int) */
int _ZNSt3__16vectorI22DFRC_DRV_REFRESH_RANGENS_9allocatorIS1_EEE8__appendEj(void);

/* Symbol: _ZN7android2spINS_16FpsPolicyTrackerEEaSEPS1_ */
/* Demangled: android::sp<android::FpsPolicyTracker>::operator=(android::FpsPolicyTracker*) */
int _ZN7android2spINS_16FpsPolicyTrackerEEaSEPS1_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService17FpsPolicyInfoPackEEEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, android::sp<android::FpsPolicyService::FpsPolicyInfoPack> > >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService17FpsPolicyInfoPackEEEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN7android16FpsPolicyService10setHwcInfoERK17DFRC_DRV_HWC_INFO */
/* Demangled: android::FpsPolicyService::setHwcInfo(DFRC_DRV_HWC_INFO const&) */
int _ZN7android16FpsPolicyService10setHwcInfoERK17DFRC_DRV_HWC_INFO(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService11FpsInfoPackEEEEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, android::sp<android::FpsPolicyService::FpsInfoPack> > >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService11FpsInfoPackEEEEEE12do_constructEPvj(void);

/* Symbol: _ZTVN7android16FpsPolicyService17FpsPolicyInfoPackE */
/* Demangled: vtable for android::FpsPolicyService::FpsPolicyInfoPack */
extern void* _ZTVN7android16FpsPolicyService17FpsPolicyInfoPackE;

/* Symbol: _ZTv0_n12_N7android16FpsPolicyTrackerD0Ev */
/* Demangled: virtual thunk to android::FpsPolicyTracker::~FpsPolicyTracker() */
int _ZTv0_n12_N7android16FpsPolicyTrackerD0Ev(void);

/* Symbol: __divdi3 */
/* Demangled: __divdi3 */
int __divdi3(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService11FpsInfoPackEEEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, android::sp<android::FpsPolicyService::FpsInfoPack> > >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService11FpsInfoPackEEEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService11FpsInfoPackEEEEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, android::sp<android::FpsPolicyService::FpsInfoPack> > >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService11FpsInfoPackEEEEEE8do_splatEPvPKvj(void);

/* Symbol: _ZTv0_n12_N7android16FpsPolicyServiceD1Ev */
/* Demangled: virtual thunk to android::FpsPolicyService::~FpsPolicyService() */
int _ZTv0_n12_N7android16FpsPolicyServiceD1Ev(void);

/* Symbol: _ZN7android16FpsPolicyTracker4stopEv */
/* Demangled: android::FpsPolicyTracker::stop() */
int _ZN7android16FpsPolicyTracker4stopEv(void);

/* Symbol: _ZTv0_n16_N7android16FpsPolicyTracker10onFirstRefEv */
/* Demangled: virtual thunk to android::FpsPolicyTracker::onFirstRef() */
int _ZTv0_n16_N7android16FpsPolicyTracker10onFirstRefEv(void);

/* Symbol: __udivmoddi4 */
/* Demangled: __udivmoddi4 */
int __udivmoddi4(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: _ZN7android16FpsPolicyService9unregInfoEyb */
/* Demangled: android::FpsPolicyService::unregInfo(unsigned long long, bool) */
int _ZN7android16FpsPolicyService9unregInfoEyb(void);

/* Symbol: _ZN7android16FpsPolicyTracker9setResumeEv */
/* Demangled: android::FpsPolicyTracker::setResume() */
int _ZN7android16FpsPolicyTracker9setResumeEv(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _ZN7android16FpsPolicyService25printListPolicyInfoLockedERNS_7String8E */
/* Demangled: android::FpsPolicyService::printListPolicyInfoLocked(android::String8&) */
int _ZN7android16FpsPolicyService25printListPolicyInfoLockedERNS_7String8E(void);

/* Symbol: _ZN7android16FpsPolicyService9regPolicyEPKcjRK15DFRC_DRV_POLICYPi */
/* Demangled: android::FpsPolicyService::regPolicy(char const*, unsigned int, DFRC_DRV_POLICY const&, int*) */
int _ZN7android16FpsPolicyService9regPolicyEPKcjRK15DFRC_DRV_POLICYPi(void);

/* Symbol: _ZN7android16FpsPolicyTracker10setSuspendEv */
/* Demangled: android::FpsPolicyTracker::setSuspend() */
int _ZN7android16FpsPolicyTracker10setSuspendEv(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService11FpsInfoPackEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned long long, android::sp<android::FpsPolicyService::FpsInfoPack> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService11FpsInfoPackEEEEEEE;

/* Symbol: _ZN7android16FpsPolicyService10readyToRunEv */
/* Demangled: android::FpsPolicyService::readyToRun() */
int _ZN7android16FpsPolicyService10readyToRunEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService17FpsPolicyInfoPackEEEEEE10do_compareEPKvS9_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, android::sp<android::FpsPolicyService::FpsPolicyInfoPack> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService17FpsPolicyInfoPackEEEEEE10do_compareEPKvS9_(void);

/* Symbol: __divmoddi4 */
/* Demangled: __divmoddi4 */
int __divmoddi4(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: _ZN7android16FpsPolicyService13enableTrackerEi */
/* Demangled: android::FpsPolicyService::enableTracker(int) */
int _ZN7android16FpsPolicyService13enableTrackerEi(void);

/* Symbol: _ZN7android16FpsPolicyService7regInfoEy */
/* Demangled: android::FpsPolicyService::regInfo(unsigned long long) */
int _ZN7android16FpsPolicyService7regInfoEy(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService11FpsInfoPackEEEEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, android::sp<android::FpsPolicyService::FpsInfoPack> > >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService11FpsInfoPackEEEEEE10do_destroyEPvj(void);

/* Symbol: _ZN7android13getModeStringEi */
/* Demangled: android::getModeString(int) */
int _ZN7android13getModeStringEi(void);

/* Symbol: _ZN7android16FpsPolicyTracker15saveRequestInfoERK22DFRC_DRV_VSYNC_REQUESTRK20DFRC_DRC_REQUEST_SET */
/* Demangled: android::FpsPolicyTracker::saveRequestInfo(DFRC_DRV_VSYNC_REQUEST const&, DFRC_DRC_REQUEST_SET const&) */
int _ZN7android16FpsPolicyTracker15saveRequestInfoERK22DFRC_DRV_VSYNC_REQUESTRK20DFRC_DRC_REQUEST_SET(void);

/* Symbol: _ZNSt3__16vectorI22DFRC_DRV_REFRESH_RANGENS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE */
/* Demangled: std::__1::vector<DFRC_DRV_REFRESH_RANGE, std::__1::allocator<DFRC_DRV_REFRESH_RANGE> >::__swap_out_circular_buffer(std::__1::__split_buffer<DFRC_DRV_REFRESH_RANGE, std::__1::allocator<DFRC_DRV_REFRESH_RANGE>&>&) */
int _ZNSt3__16vectorI22DFRC_DRV_REFRESH_RANGENS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE(void);

/* Symbol: _ZN7android16FpsPolicyTrackerD0Ev */
/* Demangled: android::FpsPolicyTracker::~FpsPolicyTracker() */
int _ZN7android16FpsPolicyTrackerD0Ev(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _ZN7android16FpsPolicyServiceD1Ev */
/* Demangled: android::FpsPolicyService::~FpsPolicyService() */
int _ZN7android16FpsPolicyServiceD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService11FpsInfoPackEEEEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, android::sp<android::FpsPolicyService::FpsInfoPack> > >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService11FpsInfoPackEEEEEE7do_copyEPvPKvj(void);

/* Symbol: _ZN7android16FpsPolicyTrackerC1Ev */
/* Demangled: android::FpsPolicyTracker::FpsPolicyTracker() */
int _ZN7android16FpsPolicyTrackerC1Ev(void);

/* Symbol: _ZNSt3__16vectorI22DFRC_DRV_REFRESH_RANGENS_9allocatorIS1_EEE6resizeEj */
/* Demangled: std::__1::vector<DFRC_DRV_REFRESH_RANGE, std::__1::allocator<DFRC_DRV_REFRESH_RANGE> >::resize(unsigned int) */
int _ZNSt3__16vectorI22DFRC_DRV_REFRESH_RANGENS_9allocatorIS1_EEE6resizeEj(void);

/* Symbol: _ZTCN7android16FpsPolicyServiceE0_NS_6ThreadE */
/* Demangled: construction vtable for android::Thread-in-android::FpsPolicyService */
extern void* _ZTCN7android16FpsPolicyServiceE0_NS_6ThreadE;

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: _ZN7android12getApiStringEi */
/* Demangled: android::getApiString(int) */
int _ZN7android12getApiStringEi(void);

/* Symbol: _ZN7android16FpsPolicyServiceC2Ev */
/* Demangled: android::FpsPolicyService::FpsPolicyService() */
int _ZN7android16FpsPolicyServiceC2Ev(void);

/* Symbol: _ZN7android16FpsPolicyTrackerD2Ev */
/* Demangled: android::FpsPolicyTracker::~FpsPolicyTracker() */
int _ZN7android16FpsPolicyTrackerD2Ev(void);

/* Symbol: _ZTCN7android16FpsPolicyTrackerE0_NS_6ThreadE */
/* Demangled: construction vtable for android::Thread-in-android::FpsPolicyTracker */
extern void* _ZTCN7android16FpsPolicyTrackerE0_NS_6ThreadE;

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int __aeabi_uidivmod(void);

/* Symbol: _ZN7android16FpsPolicyService11unregPolicyEyb */
/* Demangled: android::FpsPolicyService::unregPolicy(unsigned long long, bool) */
int _ZN7android16FpsPolicyService11unregPolicyEyb(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService17FpsPolicyInfoPackEEEEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, android::sp<android::FpsPolicyService::FpsPolicyInfoPack> > >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService17FpsPolicyInfoPackEEEEEE8do_splatEPvPKvj(void);

/* Symbol: _ZN7android16FpsPolicyService13setWindowFlagEii */
/* Demangled: android::FpsPolicyService::setWindowFlag(int, int) */
int _ZN7android16FpsPolicyService13setWindowFlagEii(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService17FpsPolicyInfoPackEEEEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, android::sp<android::FpsPolicyService::FpsPolicyInfoPack> > >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService17FpsPolicyInfoPackEEEEEE7do_copyEPvPKvj(void);

/* Symbol: __udivmodsi4 */
/* Demangled: __udivmodsi4 */
int __udivmodsi4(void);

/* Symbol: _ZN7android16FpsPolicyService16setNumberDisplayEi */
/* Demangled: android::FpsPolicyService::setNumberDisplay(int) */
int _ZN7android16FpsPolicyService16setNumberDisplayEi(void);

/* Symbol: _ZN7android16FpsPolicyService22dumpVsyncRequestLockedERK22DFRC_DRV_VSYNC_REQUESTRK20DFRC_DRC_REQUEST_SET */
/* Demangled: android::FpsPolicyService::dumpVsyncRequestLocked(DFRC_DRV_VSYNC_REQUEST const&, DFRC_DRC_REQUEST_SET const&) */
int _ZN7android16FpsPolicyService22dumpVsyncRequestLockedERK22DFRC_DRV_VSYNC_REQUESTRK20DFRC_DRC_REQUEST_SET(void);

/* Symbol: _ZTTN7android16FpsPolicyServiceE */
/* Demangled: VTT for android::FpsPolicyService */
extern void* _ZTTN7android16FpsPolicyServiceE;

/* Symbol: _ZTv0_n12_N7android16FpsPolicyServiceD0Ev */
/* Demangled: virtual thunk to android::FpsPolicyService::~FpsPolicyService() */
int _ZTv0_n12_N7android16FpsPolicyServiceD0Ev(void);

/* Symbol: _ZN7android16FpsPolicyTracker23dumpFpsPolicyInfoLockedEv */
/* Demangled: android::FpsPolicyTracker::dumpFpsPolicyInfoLocked() */
int _ZN7android16FpsPolicyTracker23dumpFpsPolicyInfoLockedEv(void);

/* Symbol: __aeabi_ldivmod */
/* Demangled: __aeabi_ldivmod */
int __aeabi_ldivmod(void);

/* Symbol: _ZN7android16FpsPolicyService20forbidAdjustingVsyncEi */
/* Demangled: android::FpsPolicyService::forbidAdjustingVsync(int) */
int _ZN7android16FpsPolicyService20forbidAdjustingVsyncEi(void);

/* Symbol: _ZN7android16FpsPolicyService6setFpsERK15DFRC_DRV_POLICY */
/* Demangled: android::FpsPolicyService::setFps(DFRC_DRV_POLICY const&) */
int _ZN7android16FpsPolicyService6setFpsERK15DFRC_DRV_POLICY(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService17FpsPolicyInfoPackEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned long long, android::sp<android::FpsPolicyService::FpsPolicyInfoPack> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService17FpsPolicyInfoPackEEEEEEE;

/* Symbol: _ZN7android16FpsPolicyService19tryGetRequestLockedEv */
/* Demangled: android::FpsPolicyService::tryGetRequestLocked() */
int _ZN7android16FpsPolicyService19tryGetRequestLockedEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService17FpsPolicyInfoPackEEEEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, android::sp<android::FpsPolicyService::FpsPolicyInfoPack> > >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService17FpsPolicyInfoPackEEEEEE10do_destroyEPvj(void);

/* Symbol: _ZTv0_n12_N7android16FpsPolicyTrackerD1Ev */
/* Demangled: virtual thunk to android::FpsPolicyTracker::~FpsPolicyTracker() */
int _ZTv0_n12_N7android16FpsPolicyTrackerD1Ev(void);

/* Symbol: _Z15dfpsGetFunctionP11dfps_devicei */
/* Demangled: dfpsGetFunction(dfps_device*, int) */
int _Z15dfpsGetFunctionP11dfps_devicei(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService17FpsPolicyInfoPackEEEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, android::sp<android::FpsPolicyService::FpsPolicyInfoPack> > >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService17FpsPolicyInfoPackEEEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZTVN7android16FpsPolicyServiceE */
/* Demangled: vtable for android::FpsPolicyService */
extern void* _ZTVN7android16FpsPolicyServiceE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService11FpsInfoPackEEEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, android::sp<android::FpsPolicyService::FpsInfoPack> > >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIyNS_2spINS_16FpsPolicyService11FpsInfoPackEEEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: _ZN7android2spINS_16FpsPolicyService11FpsInfoPackEEC2EPS2_ */
/* Demangled: android::sp<android::FpsPolicyService::FpsInfoPack>::sp(android::FpsPolicyService::FpsInfoPack*) */
int _ZN7android2spINS_16FpsPolicyService11FpsInfoPackEEC2EPS2_(void);

/* Symbol: _ZTVN7android16FpsPolicyTrackerE */
/* Demangled: vtable for android::FpsPolicyTracker */
extern void* _ZTVN7android16FpsPolicyTrackerE;

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _ZN7android16FpsPolicyService11getFpsRangeEP22DFRC_DRV_REFRESH_RANGE */
/* Demangled: android::FpsPolicyService::getFpsRange(DFRC_DRV_REFRESH_RANGE*) */
int _ZN7android16FpsPolicyService11getFpsRangeEP22DFRC_DRV_REFRESH_RANGE(void);

/* Symbol: _ZN7android16FpsPolicyService14setSingleLayerEi */
/* Demangled: android::FpsPolicyService::setSingleLayer(int) */
int _ZN7android16FpsPolicyService14setSingleLayerEi(void);

/* Symbol: _ZN7android16FpsPolicyServiceD0Ev */
/* Demangled: android::FpsPolicyService::~FpsPolicyService() */
int _ZN7android16FpsPolicyServiceD0Ev(void);

/* Symbol: _ZN7android16FpsPolicyTracker10onFirstRefEv */
/* Demangled: android::FpsPolicyTracker::onFirstRef() */
int _ZN7android16FpsPolicyTracker10onFirstRefEv(void);

/* Symbol: _ZTTN7android16FpsPolicyTrackerE */
/* Demangled: VTT for android::FpsPolicyTracker */
extern void* _ZTTN7android16FpsPolicyTrackerE;

__END_DECLS

#endif /* BEGONIA_RE_DFPS_MT6785_H */

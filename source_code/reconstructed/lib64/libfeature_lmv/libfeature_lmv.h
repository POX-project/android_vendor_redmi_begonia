/*
 * Reverse-Engineered ABI Specification for: libfeature_lmv.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libfeature_lmv.so
 */

#ifndef BEGONIA_RE_LIBFEATURE_LMV_H
#define BEGONIA_RE_LIBFEATURE_LMV_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN9LMVHalImp12CreateMemBufEjRN7android2spIN5NSCam12IImageBufferEEE */
/* Demangled: LMVHalImp::CreateMemBuf(unsigned int, android::sp<NSCam::IImageBuffer>&) */
int _ZN9LMVHalImp12CreateMemBufEjRN7android2spIN5NSCam12IImageBufferEEE(void);

/* Symbol: _ZN9LMVHalImp9NotifyLMVERN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoE */
/* Demangled: LMVHalImp::NotifyLMV(NSCam::NSIoPipe::NSCamIOPipe::QBufInfo&) */
int _ZN9LMVHalImp9NotifyLMVERN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoE(void);

/* Symbol: _ZN9LMVHalObjILj7EE11s_instMutexE */
/* Demangled: LMVHalObj<7u>::s_instMutex */
extern void* _ZN9LMVHalObjILj7EE11s_instMutexE;

/* Symbol: _ZN5NSCam3LMV7LMVP1Cb14p1TuningNotifyEPvS2_ */
/* Demangled: NSCam::LMV::LMVP1Cb::p1TuningNotify(void*, void*) */
int _ZN5NSCam3LMV7LMVP1Cb14p1TuningNotifyEPvS2_(void);

/* Symbol: _ZN6LMVDrv14CreateInstanceERKj */
/* Demangled: LMVDrv::CreateInstance(unsigned int const&) */
int _ZN6LMVDrv14CreateInstanceERKj(void);

/* Symbol: _ZN9LMVDrvImp11GetLMVMbNumEv */
/* Demangled: LMVDrvImp::GetLMVMbNum() */
int _ZN9LMVDrvImp11GetLMVMbNumEv(void);

/* Symbol: _ZN9LMVDrvImp15GetLMVInputSizeEPjS0_ */
/* Demangled: LMVDrvImp::GetLMVInputSize(unsigned int*, unsigned int*) */
int _ZN9LMVDrvImp15GetLMVInputSizeEPjS0_(void);

/* Symbol: _ZN9LMVDrvImp17GetTsForAlgoDebugEv */
/* Demangled: LMVDrvImp::GetTsForAlgoDebug() */
int _ZN9LMVDrvImp17GetTsForAlgoDebugEv(void);

/* Symbol: _ZN9LMVDrvImp4InitEv */
/* Demangled: LMVDrvImp::Init() */
int _ZN9LMVDrvImp4InitEv(void);

/* Symbol: _ZN9LMVDrvImpD2Ev */
/* Demangled: LMVDrvImp::~LMVDrvImp() */
int _ZN9LMVDrvImpD2Ev(void);

/* Symbol: _ZTV9LMVHalObjILj8EE */
/* Demangled: vtable for LMVHalObj<8u> */
extern void* _ZTV9LMVHalObjILj8EE;

/* Symbol: _ZN5NSCam3LMV8SGG2P1CbD2Ev */
/* Demangled: NSCam::LMV::SGG2P1Cb::~SGG2P1Cb() */
int _ZN5NSCam3LMV8SGG2P1CbD2Ev(void);

/* Symbol: _ZN9LMVHalObjILj3EE10spInstanceE */
/* Demangled: LMVHalObj<3u>::spInstance */
extern void* _ZN9LMVHalObjILj3EE10spInstanceE;

/* Symbol: _ZN5NSCam3LMV9LMVTuningC2EPv */
/* Demangled: NSCam::LMV::LMVTuning::LMVTuning(void*) */
int _ZN5NSCam3LMV9LMVTuningC2EPv(void);

/* Symbol: _ZN5NSCam3LMV9LMVTuning14isSupportLMVCbEv */
/* Demangled: NSCam::LMV::LMVTuning::isSupportLMVCb() */
int _ZN5NSCam3LMV9LMVTuning14isSupportLMVCbEv(void);

/* Symbol: _ZN9LMVHalImp15GetLMVStatisticEP20EIS_STATISTIC_STRUCT */
/* Demangled: LMVHalImp::GetLMVStatistic(EIS_STATISTIC_STRUCT*) */
int _ZN9LMVHalImp15GetLMVStatisticEP20EIS_STATISTIC_STRUCT(void);

/* Symbol: _ZN9LMVHalImp18DestroyMultiMemBufEjRN7android2spIN5NSCam12IImageBufferEEEPS4_ */
/* Demangled: LMVHalImp::DestroyMultiMemBuf(unsigned int, android::sp<NSCam::IImageBuffer>&, android::sp<NSCam::IImageBuffer>*) */
int _ZN9LMVHalImp18DestroyMultiMemBufEjRN7android2spIN5NSCam12IImageBufferEEEPS4_(void);

/* Symbol: _ZN9LMVHalImp6UninitEv */
/* Demangled: LMVHalImp::Uninit() */
int _ZN9LMVHalImp6UninitEv(void);

/* Symbol: _ZN9LMVHalImp12GetLMVStatusEv */
/* Demangled: LMVHalImp::GetLMVStatus() */
int _ZN9LMVHalImp12GetLMVStatusEv(void);

/* Symbol: _ZTV9LMVHalObjILj5EE */
/* Demangled: vtable for LMVHalObj<5u> */
extern void* _ZTV9LMVHalObjILj5EE;

/* Symbol: _ZN5NSCam3LMV8SGG2P1CbC2Ev */
/* Demangled: NSCam::LMV::SGG2P1Cb::SGG2P1Cb() */
int _ZN5NSCam3LMV8SGG2P1CbC2Ev(void);

/* Symbol: _ZN5NSCam3LMV9LMVTuningC1EPv */
/* Demangled: NSCam::LMV::LMVTuning::LMVTuning(void*) */
int _ZN5NSCam3LMV9LMVTuningC1EPv(void);

/* Symbol: _ZN9LMVDrvImpC2ERKj */
/* Demangled: LMVDrvImp::LMVDrvImp(unsigned int const&) */
int _ZN9LMVDrvImpC2ERKj(void);

/* Symbol: _ZN9LMVHalObjILj2EE10spInstanceE */
/* Demangled: LMVHalObj<2u>::spInstance */
extern void* _ZN9LMVHalObjILj2EE10spInstanceE;

/* Symbol: _ZN5NSCam3LMV7LMVP1CbC2EPv */
/* Demangled: NSCam::LMV::LMVP1Cb::LMVP1Cb(void*) */
int _ZN5NSCam3LMV7LMVP1CbC2EPv(void);

/* Symbol: _ZN9LMVDrvImp12ConfigLMVRegERKj */
/* Demangled: LMVDrvImp::ConfigLMVReg(unsigned int const&) */
int _ZN9LMVDrvImp12ConfigLMVRegERKj(void);

/* Symbol: _ZN9LMVHalObjILj5EE11s_instMutexE */
/* Demangled: LMVHalObj<5u>::s_instMutex */
extern void* _ZN9LMVHalObjILj5EE11s_instMutexE;

/* Symbol: _ZN9LMVHalImp12QueryMinSizeEiN5NSCam5MSizeES1_S1_S1_ */
/* Demangled: LMVHalImp::QueryMinSize(int, NSCam::MSize, NSCam::MSize, NSCam::MSize, NSCam::MSize) */
int _ZN9LMVHalImp12QueryMinSizeEiN5NSCam5MSizeES1_S1_S1_(void);

/* Symbol: _ZN9LMVHalImp17GetLMVSupportInfoERKj */
/* Demangled: LMVHalImp::GetLMVSupportInfo(unsigned int const&) */
int _ZN9LMVHalImp17GetLMVSupportInfoERKj(void);

/* Symbol: _ZTV9LMVHalObjILj2EE */
/* Demangled: vtable for LMVHalObj<2u> */
extern void* _ZTV9LMVHalObjILj2EE;

/* Symbol: _ZN5NSCam3LMV9LMVTuningD2Ev */
/* Demangled: NSCam::LMV::LMVTuning::~LMVTuning() */
int _ZN5NSCam3LMV9LMVTuningD2Ev(void);

/* Symbol: _ZN6LMVHal14CreateInstanceEPKcRKj */
/* Demangled: LMVHal::CreateInstance(char const*, unsigned int const&) */
int _ZN6LMVHal14CreateInstanceEPKcRKj(void);

/* Symbol: _ZN9LMVHalImp13GetSensorInfoEv */
/* Demangled: LMVHalImp::GetSensorInfo() */
int _ZN9LMVHalImp13GetSensorInfoEv(void);

/* Symbol: _ZN9LMVHalObjILj1EE10spInstanceE */
/* Demangled: LMVHalObj<1u>::spInstance */
extern void* _ZN9LMVHalObjILj1EE10spInstanceE;

/* Symbol: _ZN5NSCam3LMV7LMVP1CbC1EPv */
/* Demangled: NSCam::LMV::LMVP1Cb::LMVP1Cb(void*) */
int _ZN5NSCam3LMV7LMVP1CbC1EPv(void);

/* Symbol: _ZN5NSCam3LMV7LMVP1CbD2Ev */
/* Demangled: NSCam::LMV::LMVP1Cb::~LMVP1Cb() */
int _ZN5NSCam3LMV7LMVP1CbD2Ev(void);

/* Symbol: _ZTV9LMVHalImp */
/* Demangled: vtable for LMVHalImp */
extern void* _ZTV9LMVHalImp;

/* Symbol: _ZTVN5NSCam3LMV8SGG2P1CbE */
/* Demangled: vtable for NSCam::LMV::SGG2P1Cb */
extern void* _ZTVN5NSCam3LMV8SGG2P1CbE;

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZN9LMVDrvImp15DestroyInstanceEv */
/* Demangled: LMVDrvImp::DestroyInstance() */
int _ZN9LMVDrvImp15DestroyInstanceEv(void);

/* Symbol: _ZN9LMVDrvImp17GetLMVSupportInfoERKj */
/* Demangled: LMVDrvImp::GetLMVSupportInfo(unsigned int const&) */
int _ZN9LMVDrvImp17GetLMVSupportInfoERKj(void);

/* Symbol: _ZN9LMVHalImp15GetEisCustomizeEP22EIS_TUNING_PARA_STRUCT */
/* Demangled: LMVHalImp::GetEisCustomize(EIS_TUNING_PARA_STRUCT*) */
int _ZN9LMVHalImp15GetEisCustomizeEP22EIS_TUNING_PARA_STRUCT(void);

/* Symbol: _ZN9LMVHalImp9DoLMVCalcERKN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoE */
/* Demangled: LMVHalImp::DoLMVCalc(NSCam::NSIoPipe::NSCamIOPipe::QBufInfo const&) */
int _ZN9LMVHalImp9DoLMVCalcERKN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoE(void);

/* Symbol: _ZNSt3__112__deque_baseIN7android2spIN5NSCam12IImageBufferEEENS_9allocatorIS5_EEE5clearEv */
/* Demangled: std::__1::__deque_base<android::sp<NSCam::IImageBuffer>, std::__1::allocator<android::sp<NSCam::IImageBuffer> > >::clear() */
int _ZNSt3__112__deque_baseIN7android2spIN5NSCam12IImageBufferEEENS_9allocatorIS5_EEE5clearEv(void);

/* Symbol: _ZTV9LMVHalObjILj9EE */
/* Demangled: vtable for LMVHalObj<9u> */
extern void* _ZTV9LMVHalObjILj9EE;

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZN9LMVDrvImp11GetInstanceERKj */
/* Demangled: LMVDrvImp::GetInstance(unsigned int const&) */
int _ZN9LMVDrvImp11GetInstanceERKj(void);

/* Symbol: _ZN9LMVHalObjILj0EE10spInstanceE */
/* Demangled: LMVHalObj<0u>::spInstance */
extern void* _ZN9LMVHalObjILj0EE10spInstanceE;

/* Symbol: _ZN9LMVHalImp4InitEj */
/* Demangled: LMVHalImp::Init(unsigned int) */
int _ZN9LMVHalImp4InitEj(void);

/* Symbol: _ZN9LMVHalObjILj3EE11s_instMutexE */
/* Demangled: LMVHalObj<3u>::s_instMutex */
extern void* _ZN9LMVHalObjILj3EE11s_instMutexE;

/* Symbol: _ZN9LMVDrvImpD0Ev */
/* Demangled: LMVDrvImp::~LMVDrvImp() */
int _ZN9LMVDrvImpD0Ev(void);

/* Symbol: _ZN9LMVHalImp13DumpStatisticERK20EIS_STATISTIC_STRUCT */
/* Demangled: LMVHalImp::DumpStatistic(EIS_STATISTIC_STRUCT const&) */
int _ZN9LMVHalImp13DumpStatisticERK20EIS_STATISTIC_STRUCT(void);

/* Symbol: _ZTV9LMVHalObjILj6EE */
/* Demangled: vtable for LMVHalObj<6u> */
extern void* _ZTV9LMVHalObjILj6EE;

/* Symbol: _ZN5NSCam3LMV8SGG2P1CbD0Ev */
/* Demangled: NSCam::LMV::SGG2P1Cb::~SGG2P1Cb() */
int _ZN5NSCam3LMV8SGG2P1CbD0Ev(void);

/* Symbol: _ZN9LMVDrvImp12GetTimeStampERKjS1_ */
/* Demangled: LMVDrvImp::GetTimeStamp(unsigned int const&, unsigned int const&) */
int _ZN9LMVDrvImp12GetTimeStampERKjS1_(void);

/* Symbol: _ZN9LMVDrvImpC1ERKj */
/* Demangled: LMVDrvImp::LMVDrvImp(unsigned int const&) */
int _ZN9LMVDrvImpC1ERKj(void);

/* Symbol: _ZN9LMVHalObjILj9EE10spInstanceE */
/* Demangled: LMVHalObj<9u>::spInstance */
extern void* _ZN9LMVHalObjILj9EE10spInstanceE;

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12IImageBufferEEERNS_9allocatorIS6_EEE9push_backEOS6_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::IImageBuffer>*, std::__1::allocator<android::sp<NSCam::IImageBuffer>*>&>::push_back(android::sp<NSCam::IImageBuffer>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12IImageBufferEEERNS_9allocatorIS6_EEE9push_backEOS6_(void);

/* Symbol: _ZTVN5NSCam3LMV7LMVP1CbE */
/* Demangled: vtable for NSCam::LMV::LMVP1Cb */
extern void* _ZTVN5NSCam3LMV7LMVP1CbE;

/* Symbol: _ZN9LMVDrvImp11Complement2Ejj */
/* Demangled: LMVDrvImp::Complement2(unsigned int, unsigned int) */
int _ZN9LMVDrvImp11Complement2Ejj(void);

/* Symbol: _ZN9LMVDrvImp17GetLmvHwStatisticElP20EIS_STATISTIC_STRUCT */
/* Demangled: LMVDrvImp::GetLmvHwStatistic(long, EIS_STATISTIC_STRUCT*) */
int _ZN9LMVDrvImp17GetLmvHwStatisticElP20EIS_STATISTIC_STRUCT(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZN9LMVDrvImp13BoundaryCheckERjRKjS2_ */
/* Demangled: LMVDrvImp::BoundaryCheck(unsigned int&, unsigned int const&, unsigned int const&) */
int _ZN9LMVDrvImp13BoundaryCheckERjRKjS2_(void);

/* Symbol: _ZN9LMVHalImp13GetRegSettingEPv */
/* Demangled: LMVHalImp::GetRegSetting(void*) */
int _ZN9LMVHalImp13GetRegSettingEPv(void);

/* Symbol: _ZN9LMVHalImp17CreateMultiMemBufEjjRN7android2spIN5NSCam12IImageBufferEEEPS4_ */
/* Demangled: LMVHalImp::CreateMultiMemBuf(unsigned int, unsigned int, android::sp<NSCam::IImageBuffer>&, android::sp<NSCam::IImageBuffer>*) */
int _ZN9LMVHalImp17CreateMultiMemBufEjjRN7android2spIN5NSCam12IImageBufferEEEPS4_(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12IImageBufferEEENS_9allocatorIS6_EEE10push_frontEOS6_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::IImageBuffer>*, std::__1::allocator<android::sp<NSCam::IImageBuffer>*> >::push_front(android::sp<NSCam::IImageBuffer>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12IImageBufferEEENS_9allocatorIS6_EEE10push_frontEOS6_(void);

/* Symbol: _ZTV9LMVHalObjILj3EE */
/* Demangled: vtable for LMVHalObj<3u> */
extern void* _ZTV9LMVHalObjILj3EE;

/* Symbol: _ZN9LMVHalObjILj4EE11s_instMutexE */
/* Demangled: LMVHalObj<4u>::s_instMutex */
extern void* _ZN9LMVHalObjILj4EE11s_instMutexE;

/* Symbol: _ZN9LMVHalObjILj8EE10spInstanceE */
/* Demangled: LMVHalObj<8u>::spInstance */
extern void* _ZN9LMVHalObjILj8EE10spInstanceE;

/* Symbol: _ZN9LMVDrvImp13Get2PixelModeEv */
/* Demangled: LMVDrvImp::Get2PixelMode() */
int _ZN9LMVDrvImp13Get2PixelModeEv(void);

/* Symbol: _ZN9LMVHalImp11GetInstanceERKj */
/* Demangled: LMVHalImp::GetInstance(unsigned int const&) */
int _ZN9LMVHalImp11GetInstanceERKj(void);

/* Symbol: _ZN9LMVHalObjILj1EE11s_instMutexE */
/* Demangled: LMVHalObj<1u>::s_instMutex */
extern void* _ZN9LMVHalObjILj1EE11s_instMutexE;

/* Symbol: _ZN9LMVHalImp15DestroyInstanceEPKc */
/* Demangled: LMVHalImp::DestroyInstance(char const*) */
int _ZN9LMVHalImp15DestroyInstanceEPKc(void);

/* Symbol: _ZN9LMVHalObjILj8EE11s_instMutexE */
/* Demangled: LMVHalObj<8u>::s_instMutex */
extern void* _ZN9LMVHalObjILj8EE11s_instMutexE;

/* Symbol: _ZTV9LMVHalObjILj0EE */
/* Demangled: vtable for LMVHalObj<0u> */
extern void* _ZTV9LMVHalObjILj0EE;

/* Symbol: _ZN5NSCam3LMV9LMVTuningD0Ev */
/* Demangled: NSCam::LMV::LMVTuning::~LMVTuning() */
int _ZN5NSCam3LMV9LMVTuningD0Ev(void);

/* Symbol: _ZN9LMVHalImp9ConfigLMVERK14LMV_HAL_CONFIG */
/* Demangled: LMVHalImp::ConfigLMV(LMV_HAL_CONFIG const&) */
int _ZN9LMVHalImp9ConfigLMVERK14LMV_HAL_CONFIG(void);

/* Symbol: _ZN9LMVHalImp9GetBufLMVERN7android2spIN5NSCam12IImageBufferEEE */
/* Demangled: LMVHalImp::GetBufLMV(android::sp<NSCam::IImageBuffer>&) */
int _ZN9LMVHalImp9GetBufLMVERN7android2spIN5NSCam12IImageBufferEEE(void);

/* Symbol: _ZN9LMVHalImpC2ERKj */
/* Demangled: LMVHalImp::LMVHalImp(unsigned int const&) */
int _ZN9LMVHalImpC2ERKj(void);

/* Symbol: _ZN9LMVHalObjILj7EE10spInstanceE */
/* Demangled: LMVHalObj<7u>::spInstance */
extern void* _ZN9LMVHalObjILj7EE10spInstanceE;

/* Symbol: _ZNSt3__15dequeIN7android2spIN5NSCam12IImageBufferEEENS_9allocatorIS5_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<android::sp<NSCam::IImageBuffer>, std::__1::allocator<android::sp<NSCam::IImageBuffer> > >::__add_back_capacity() */
int _ZNSt3__15dequeIN7android2spIN5NSCam12IImageBufferEEENS_9allocatorIS5_EEE19__add_back_capacityEv(void);

/* Symbol: _ZN5NSCam3LMV7LMVP1CbD0Ev */
/* Demangled: NSCam::LMV::LMVP1Cb::~LMVP1Cb() */
int _ZN5NSCam3LMV7LMVP1CbD0Ev(void);

/* Symbol: _ZN9LMVDrvImp13GetRegSettingEPv */
/* Demangled: LMVDrvImp::GetRegSetting(void*) */
int _ZN9LMVDrvImp13GetRegSettingEPv(void);

/* Symbol: _ZN5NSCam3LMV12gSearchRangeE */
/* Demangled: NSCam::LMV::gSearchRange */
extern void* _ZN5NSCam3LMV12gSearchRangeE;

/* Symbol: _ZTVN5NSCam3LMV9LMVTuningE */
/* Demangled: vtable for NSCam::LMV::LMVTuning */
extern void* _ZTVN5NSCam3LMV9LMVTuningE;

/* Symbol: _ZN9LMVDrvImp10GetLMVDivHEv */
/* Demangled: LMVDrvImp::GetLMVDivH() */
int _ZN9LMVDrvImp10GetLMVDivHEv(void);

/* Symbol: _ZN9LMVDrvImp6UninitEv */
/* Demangled: LMVDrvImp::Uninit() */
int _ZN9LMVDrvImp6UninitEv(void);

/* Symbol: _ZN9LMVDrvImpD1Ev */
/* Demangled: LMVDrvImp::~LMVDrvImp() */
int _ZN9LMVDrvImpD1Ev(void);

/* Symbol: _ZTV9LMVHalObjILj7EE */
/* Demangled: vtable for LMVHalObj<7u> */
extern void* _ZTV9LMVHalObjILj7EE;

/* Symbol: _ZN5NSCam3LMV8SGG2P1CbD1Ev */
/* Demangled: NSCam::LMV::SGG2P1Cb::~SGG2P1Cb() */
int _ZN5NSCam3LMV8SGG2P1CbD1Ev(void);

/* Symbol: _ZN5NSCam3LMV9LMVTuning8getLMVCbEv */
/* Demangled: NSCam::LMV::LMVTuning::getLMVCb() */
int _ZN5NSCam3LMV9LMVTuning8getLMVCbEv(void);

/* Symbol: _ZN9LMVHalImp10mDebugDumpE */
/* Demangled: LMVHalImp::mDebugDump */
extern void* _ZN9LMVHalImp10mDebugDumpE;

/* Symbol: _ZN9LMVHalImp13DestroyMemBufERN7android2spIN5NSCam12IImageBufferEEE */
/* Demangled: LMVHalImp::DestroyMemBuf(android::sp<NSCam::IImageBuffer>&) */
int _ZN9LMVHalImp13DestroyMemBufERN7android2spIN5NSCam12IImageBufferEEE(void);

/* Symbol: _ZN9LMVHalImp16EnableGyroSensorEv */
/* Demangled: LMVHalImp::EnableGyroSensor() */
int _ZN9LMVHalImp16EnableGyroSensorEv(void);

/* Symbol: _ZN9LMVHalImp16PrepareLmvResultERKiS1_ */
/* Demangled: LMVHalImp::PrepareLmvResult(int const&, int const&) */
int _ZN9LMVHalImp16PrepareLmvResultERKiS1_(void);

/* Symbol: _ZN9LMVHalObjILj2EE11s_instMutexE */
/* Demangled: LMVHalObj<2u>::s_instMutex */
extern void* _ZN9LMVHalObjILj2EE11s_instMutexE;

/* Symbol: _ZN9LMVHalObjILj6EE10spInstanceE */
/* Demangled: LMVHalObj<6u>::spInstance */
extern void* _ZN9LMVHalObjILj6EE10spInstanceE;

/* Symbol: _ZN5NSCam3LMV8SGG2P1Cb14p1TuningNotifyEPvS2_ */
/* Demangled: NSCam::LMV::SGG2P1Cb::p1TuningNotify(void*, void*) */
int _ZN5NSCam3LMV8SGG2P1Cb14p1TuningNotifyEPvS2_(void);

/* Symbol: _ZTV9LMVDrvImp */
/* Demangled: vtable for LMVDrvImp */
extern void* _ZTV9LMVDrvImp;

/* Symbol: _ZN9LMVHalImp9NotifyLMVERN7android2spIN5NSCam12IImageBufferEEE */
/* Demangled: LMVHalImp::NotifyLMV(android::sp<NSCam::IImageBuffer>&) */
int _ZN9LMVHalImp9NotifyLMVERN7android2spIN5NSCam12IImageBufferEEE(void);

/* Symbol: _ZN9LMVHalObjILj9EE11s_instMutexE */
/* Demangled: LMVHalObj<9u>::s_instMutex */
extern void* _ZN9LMVHalObjILj9EE11s_instMutexE;

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12IImageBufferEEERNS_9allocatorIS6_EEE10push_frontERKS6_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::IImageBuffer>*, std::__1::allocator<android::sp<NSCam::IImageBuffer>*>&>::push_front(android::sp<NSCam::IImageBuffer>* const&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12IImageBufferEEERNS_9allocatorIS6_EEE10push_frontERKS6_(void);

/* Symbol: _ZN5NSCam3LMV9gLogLevelE */
/* Demangled: NSCam::LMV::gLogLevel */
extern void* _ZN5NSCam3LMV9gLogLevelE;

/* Symbol: _ZN9LMVHalObjILj6EE11s_instMutexE */
/* Demangled: LMVHalObj<6u>::s_instMutex */
extern void* _ZN9LMVHalObjILj6EE11s_instMutexE;

/* Symbol: _ZTV9LMVHalObjILj4EE */
/* Demangled: vtable for LMVHalObj<4u> */
extern void* _ZTV9LMVHalObjILj4EE;

/* Symbol: _ZN5NSCam3LMV8SGG2P1CbC1Ev */
/* Demangled: NSCam::LMV::SGG2P1Cb::SGG2P1Cb() */
int _ZN5NSCam3LMV8SGG2P1CbC1Ev(void);

/* Symbol: _ZN5NSCam3LMV9LMVTuning15isSupportSGG2CbEv */
/* Demangled: NSCam::LMV::LMVTuning::isSupportSGG2Cb() */
int _ZN5NSCam3LMV9LMVTuning15isSupportSGG2CbEv(void);

/* Symbol: _ZN5NSCam3LMV9LMVTuning9getSGG2CbEv */
/* Demangled: NSCam::LMV::LMVTuning::getSGG2Cb() */
int _ZN5NSCam3LMV9LMVTuning9getSGG2CbEv(void);

/* Symbol: _ZN9LMVHalObjILj5EE10spInstanceE */
/* Demangled: LMVHalObj<5u>::spInstance */
extern void* _ZN9LMVHalObjILj5EE10spInstanceE;

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12IImageBufferEEENS_9allocatorIS6_EEE9push_backEOS6_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::IImageBuffer>*, std::__1::allocator<android::sp<NSCam::IImageBuffer>*> >::push_back(android::sp<NSCam::IImageBuffer>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12IImageBufferEEENS_9allocatorIS6_EEE9push_backEOS6_(void);

/* Symbol: _ZN9LMVDrvImp10GetLMVDivVEv */
/* Demangled: LMVDrvImp::GetLMVDivV() */
int _ZN9LMVDrvImp10GetLMVDivVEv(void);

/* Symbol: _ZN9LMVDrvImp17GetFirstFrameInfoEv */
/* Demangled: LMVDrvImp::GetFirstFrameInfo() */
int _ZN9LMVDrvImp17GetFirstFrameInfoEv(void);

/* Symbol: _ZN9LMVHalImp15GetLMVInputSizeEPjS0_ */
/* Demangled: LMVHalImp::GetLMVInputSize(unsigned int*, unsigned int*) */
int _ZN9LMVHalImp15GetLMVInputSizeEPjS0_(void);

/* Symbol: _ZTV9LMVHalObjILj1EE */
/* Demangled: vtable for LMVHalObj<1u> */
extern void* _ZTV9LMVHalObjILj1EE;

/* Symbol: _ZN5NSCam3LMV9LMVTuningD1Ev */
/* Demangled: NSCam::LMV::LMVTuning::~LMVTuning() */
int _ZN5NSCam3LMV9LMVTuningD1Ev(void);

/* Symbol: _ZN9LMVDrvImp12GetLMVMaxGmvEv */
/* Demangled: LMVDrvImp::GetLMVMaxGmv() */
int _ZN9LMVDrvImp12GetLMVMaxGmvEv(void);

/* Symbol: _ZN9LMVHalImp12GetLMVResultERjS0_S0_S0_S0_S0_RiS1_S0_ */
/* Demangled: LMVHalImp::GetLMVResult(unsigned int&, unsigned int&, unsigned int&, unsigned int&, unsigned int&, unsigned int&, int&, int&, unsigned int&) */
int _ZN9LMVHalImp12GetLMVResultERjS0_S0_S0_S0_S0_RiS1_S0_(void);

/* Symbol: _ZN9LMVHalImp6GetGmvERiS0_PjS1_S1_ */
/* Demangled: LMVHalImp::GetGmv(int&, int&, unsigned int*, unsigned int*, unsigned int*) */
int _ZN9LMVHalImp6GetGmvERiS0_PjS1_S1_(void);

/* Symbol: _ZN9LMVHalImpC1ERKj */
/* Demangled: LMVHalImp::LMVHalImp(unsigned int const&) */
int _ZN9LMVHalImpC1ERKj(void);

/* Symbol: _ZN9LMVHalObjILj0EE11s_instMutexE */
/* Demangled: LMVHalObj<0u>::s_instMutex */
extern void* _ZN9LMVHalObjILj0EE11s_instMutexE;

/* Symbol: _ZN9LMVHalObjILj4EE10spInstanceE */
/* Demangled: LMVHalObj<4u>::spInstance */
extern void* _ZN9LMVHalObjILj4EE10spInstanceE;

/* Symbol: _ZN5NSCam3LMV7LMVP1CbD1Ev */
/* Demangled: NSCam::LMV::LMVP1Cb::~LMVP1Cb() */
int _ZN5NSCam3LMV7LMVP1CbD1Ev(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBFEATURE_LMV_H */

/*
 * Reverse-Engineered Source for: libfeature_lmv.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libfeature_lmv"

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
#include "libfeature_lmv.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: LMVHalImp::CreateMemBuf(unsigned int, android::sp<NSCam::IImageBuffer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVHalImp12CreateMemBufEjRN7android2spIN5NSCam12IImageBufferEEE(void) {
    ALOGD("_ZN9LMVHalImp12CreateMemBufEjRN7android2spIN5NSCam12IImageBufferEEE() called");
    return 0;
}

/* Demangled: LMVHalImp::NotifyLMV(NSCam::NSIoPipe::NSCamIOPipe::QBufInfo&) */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVHalImp9NotifyLMVERN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoE(void) {
    ALOGD("_ZN9LMVHalImp9NotifyLMVERN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoE() called");
    return 0;
}

/* Exported Object: LMVHalObj<7u>::s_instMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN9LMVHalObjILj7EE11s_instMutexE = NULL;

/* Demangled: NSCam::LMV::LMVP1Cb::p1TuningNotify(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam3LMV7LMVP1Cb14p1TuningNotifyEPvS2_(void) {
    ALOGD("_ZN5NSCam3LMV7LMVP1Cb14p1TuningNotifyEPvS2_() called");
    return 0;
}

/* Demangled: LMVDrv::CreateInstance(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6LMVDrv14CreateInstanceERKj(void) {
    ALOGD("_ZN6LMVDrv14CreateInstanceERKj() called");
    return 0;
}

/* Demangled: LMVDrvImp::GetLMVMbNum() */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVDrvImp11GetLMVMbNumEv(void) {
    ALOGD("_ZN9LMVDrvImp11GetLMVMbNumEv() called");
    return 0;
}

/* Demangled: LMVDrvImp::GetLMVInputSize(unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVDrvImp15GetLMVInputSizeEPjS0_(void) {
    ALOGD("_ZN9LMVDrvImp15GetLMVInputSizeEPjS0_() called");
    return 0;
}

/* Demangled: LMVDrvImp::GetTsForAlgoDebug() */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVDrvImp17GetTsForAlgoDebugEv(void) {
    ALOGD("_ZN9LMVDrvImp17GetTsForAlgoDebugEv() called");
    return 0;
}

/* Demangled: LMVDrvImp::Init() */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVDrvImp4InitEv(void) {
    ALOGD("_ZN9LMVDrvImp4InitEv() called");
    return 0;
}

/* Demangled: LMVDrvImp::~LMVDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVDrvImpD2Ev(void) {
    ALOGD("_ZN9LMVDrvImpD2Ev() called");
    return 0;
}

/* Exported Object: vtable for LMVHalObj<8u> */
extern "C" __attribute__((visibility("default"))) void* _ZTV9LMVHalObjILj8EE = NULL;

/* Demangled: NSCam::LMV::SGG2P1Cb::~SGG2P1Cb() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam3LMV8SGG2P1CbD2Ev(void) {
    ALOGD("_ZN5NSCam3LMV8SGG2P1CbD2Ev() called");
    return 0;
}

/* Exported Object: LMVHalObj<3u>::spInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN9LMVHalObjILj3EE10spInstanceE = NULL;

/* Demangled: NSCam::LMV::LMVTuning::LMVTuning(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam3LMV9LMVTuningC2EPv(void) {
    ALOGD("_ZN5NSCam3LMV9LMVTuningC2EPv() called");
    return 0;
}

/* Demangled: NSCam::LMV::LMVTuning::isSupportLMVCb() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam3LMV9LMVTuning14isSupportLMVCbEv(void) {
    ALOGD("_ZN5NSCam3LMV9LMVTuning14isSupportLMVCbEv() called");
    return 0;
}

/* Demangled: LMVHalImp::GetLMVStatistic(EIS_STATISTIC_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVHalImp15GetLMVStatisticEP20EIS_STATISTIC_STRUCT(void) {
    ALOGD("_ZN9LMVHalImp15GetLMVStatisticEP20EIS_STATISTIC_STRUCT() called");
    return 0;
}

/* Demangled: LMVHalImp::DestroyMultiMemBuf(unsigned int, android::sp<NSCam::IImageBuffer>&, android::sp<NSCam::IImageBuffer>*) */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVHalImp18DestroyMultiMemBufEjRN7android2spIN5NSCam12IImageBufferEEEPS4_(void) {
    ALOGD("_ZN9LMVHalImp18DestroyMultiMemBufEjRN7android2spIN5NSCam12IImageBufferEEEPS4_() called");
    return 0;
}

/* Demangled: LMVHalImp::Uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVHalImp6UninitEv(void) {
    ALOGD("_ZN9LMVHalImp6UninitEv() called");
    return 0;
}

/* Demangled: LMVHalImp::GetLMVStatus() */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVHalImp12GetLMVStatusEv(void) {
    ALOGD("_ZN9LMVHalImp12GetLMVStatusEv() called");
    return 0;
}

/* Exported Object: vtable for LMVHalObj<5u> */
extern "C" __attribute__((visibility("default"))) void* _ZTV9LMVHalObjILj5EE = NULL;

/* Demangled: NSCam::LMV::SGG2P1Cb::SGG2P1Cb() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam3LMV8SGG2P1CbC2Ev(void) {
    ALOGD("_ZN5NSCam3LMV8SGG2P1CbC2Ev() called");
    return 0;
}

/* Demangled: NSCam::LMV::LMVTuning::LMVTuning(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam3LMV9LMVTuningC1EPv(void) {
    ALOGD("_ZN5NSCam3LMV9LMVTuningC1EPv() called");
    return 0;
}

/* Demangled: LMVDrvImp::LMVDrvImp(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVDrvImpC2ERKj(void) {
    ALOGD("_ZN9LMVDrvImpC2ERKj() called");
    return 0;
}

/* Exported Object: LMVHalObj<2u>::spInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN9LMVHalObjILj2EE10spInstanceE = NULL;

/* Demangled: NSCam::LMV::LMVP1Cb::LMVP1Cb(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam3LMV7LMVP1CbC2EPv(void) {
    ALOGD("_ZN5NSCam3LMV7LMVP1CbC2EPv() called");
    return 0;
}

/* Demangled: LMVDrvImp::ConfigLMVReg(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVDrvImp12ConfigLMVRegERKj(void) {
    ALOGD("_ZN9LMVDrvImp12ConfigLMVRegERKj() called");
    return 0;
}

/* Exported Object: LMVHalObj<5u>::s_instMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN9LMVHalObjILj5EE11s_instMutexE = NULL;

/* Demangled: LMVHalImp::QueryMinSize(int, NSCam::MSize, NSCam::MSize, NSCam::MSize, NSCam::MSize) */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVHalImp12QueryMinSizeEiN5NSCam5MSizeES1_S1_S1_(void) {
    ALOGD("_ZN9LMVHalImp12QueryMinSizeEiN5NSCam5MSizeES1_S1_S1_() called");
    return 0;
}

/* Demangled: LMVHalImp::GetLMVSupportInfo(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVHalImp17GetLMVSupportInfoERKj(void) {
    ALOGD("_ZN9LMVHalImp17GetLMVSupportInfoERKj() called");
    return 0;
}

/* Exported Object: vtable for LMVHalObj<2u> */
extern "C" __attribute__((visibility("default"))) void* _ZTV9LMVHalObjILj2EE = NULL;

/* Demangled: NSCam::LMV::LMVTuning::~LMVTuning() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam3LMV9LMVTuningD2Ev(void) {
    ALOGD("_ZN5NSCam3LMV9LMVTuningD2Ev() called");
    return 0;
}

/* Demangled: LMVHal::CreateInstance(char const*, unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6LMVHal14CreateInstanceEPKcRKj(void) {
    ALOGD("_ZN6LMVHal14CreateInstanceEPKcRKj() called");
    return 0;
}

/* Demangled: LMVHalImp::GetSensorInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVHalImp13GetSensorInfoEv(void) {
    ALOGD("_ZN9LMVHalImp13GetSensorInfoEv() called");
    return 0;
}

/* Exported Object: LMVHalObj<1u>::spInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN9LMVHalObjILj1EE10spInstanceE = NULL;

/* Demangled: NSCam::LMV::LMVP1Cb::LMVP1Cb(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam3LMV7LMVP1CbC1EPv(void) {
    ALOGD("_ZN5NSCam3LMV7LMVP1CbC1EPv() called");
    return 0;
}

/* Demangled: NSCam::LMV::LMVP1Cb::~LMVP1Cb() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam3LMV7LMVP1CbD2Ev(void) {
    ALOGD("_ZN5NSCam3LMV7LMVP1CbD2Ev() called");
    return 0;
}

/* Exported Object: vtable for LMVHalImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV9LMVHalImp = NULL;

/* Exported Object: vtable for NSCam::LMV::SGG2P1Cb */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam3LMV8SGG2P1CbE = NULL;

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: LMVDrvImp::DestroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVDrvImp15DestroyInstanceEv(void) {
    ALOGD("_ZN9LMVDrvImp15DestroyInstanceEv() called");
    return 0;
}

/* Demangled: LMVDrvImp::GetLMVSupportInfo(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVDrvImp17GetLMVSupportInfoERKj(void) {
    ALOGD("_ZN9LMVDrvImp17GetLMVSupportInfoERKj() called");
    return 0;
}

/* Demangled: LMVHalImp::GetEisCustomize(EIS_TUNING_PARA_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVHalImp15GetEisCustomizeEP22EIS_TUNING_PARA_STRUCT(void) {
    ALOGD("_ZN9LMVHalImp15GetEisCustomizeEP22EIS_TUNING_PARA_STRUCT() called");
    return 0;
}

/* Demangled: LMVHalImp::DoLMVCalc(NSCam::NSIoPipe::NSCamIOPipe::QBufInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVHalImp9DoLMVCalcERKN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoE(void) {
    ALOGD("_ZN9LMVHalImp9DoLMVCalcERKN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoE() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<android::sp<NSCam::IImageBuffer>, std::__1::allocator<android::sp<NSCam::IImageBuffer> > >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIN7android2spIN5NSCam12IImageBufferEEENS_9allocatorIS5_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseIN7android2spIN5NSCam12IImageBufferEEENS_9allocatorIS5_EEE5clearEv() called");
    return 0;
}

/* Exported Object: vtable for LMVHalObj<9u> */
extern "C" __attribute__((visibility("default"))) void* _ZTV9LMVHalObjILj9EE = NULL;

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: LMVDrvImp::GetInstance(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVDrvImp11GetInstanceERKj(void) {
    ALOGD("_ZN9LMVDrvImp11GetInstanceERKj() called");
    return 0;
}

/* Exported Object: LMVHalObj<0u>::spInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN9LMVHalObjILj0EE10spInstanceE = NULL;

/* Demangled: LMVHalImp::Init(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVHalImp4InitEj(void) {
    ALOGD("_ZN9LMVHalImp4InitEj() called");
    return 0;
}

/* Exported Object: LMVHalObj<3u>::s_instMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN9LMVHalObjILj3EE11s_instMutexE = NULL;

/* Demangled: LMVDrvImp::~LMVDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVDrvImpD0Ev(void) {
    ALOGD("_ZN9LMVDrvImpD0Ev() called");
    return 0;
}

/* Demangled: LMVHalImp::DumpStatistic(EIS_STATISTIC_STRUCT const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVHalImp13DumpStatisticERK20EIS_STATISTIC_STRUCT(void) {
    ALOGD("_ZN9LMVHalImp13DumpStatisticERK20EIS_STATISTIC_STRUCT() called");
    return 0;
}

/* Exported Object: vtable for LMVHalObj<6u> */
extern "C" __attribute__((visibility("default"))) void* _ZTV9LMVHalObjILj6EE = NULL;

/* Demangled: NSCam::LMV::SGG2P1Cb::~SGG2P1Cb() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam3LMV8SGG2P1CbD0Ev(void) {
    ALOGD("_ZN5NSCam3LMV8SGG2P1CbD0Ev() called");
    return 0;
}

/* Demangled: LMVDrvImp::GetTimeStamp(unsigned int const&, unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVDrvImp12GetTimeStampERKjS1_(void) {
    ALOGD("_ZN9LMVDrvImp12GetTimeStampERKjS1_() called");
    return 0;
}

/* Demangled: LMVDrvImp::LMVDrvImp(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVDrvImpC1ERKj(void) {
    ALOGD("_ZN9LMVDrvImpC1ERKj() called");
    return 0;
}

/* Exported Object: LMVHalObj<9u>::spInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN9LMVHalObjILj9EE10spInstanceE = NULL;

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::IImageBuffer>*, std::__1::allocator<android::sp<NSCam::IImageBuffer>*>&>::push_back(android::sp<NSCam::IImageBuffer>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12IImageBufferEEERNS_9allocatorIS6_EEE9push_backEOS6_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12IImageBufferEEERNS_9allocatorIS6_EEE9push_backEOS6_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::LMV::LMVP1Cb */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam3LMV7LMVP1CbE = NULL;

/* Demangled: LMVDrvImp::Complement2(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVDrvImp11Complement2Ejj(void) {
    ALOGD("_ZN9LMVDrvImp11Complement2Ejj() called");
    return 0;
}

/* Demangled: LMVDrvImp::GetLmvHwStatistic(long, EIS_STATISTIC_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVDrvImp17GetLmvHwStatisticElP20EIS_STATISTIC_STRUCT(void) {
    ALOGD("_ZN9LMVDrvImp17GetLmvHwStatisticElP20EIS_STATISTIC_STRUCT() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: LMVDrvImp::BoundaryCheck(unsigned int&, unsigned int const&, unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVDrvImp13BoundaryCheckERjRKjS2_(void) {
    ALOGD("_ZN9LMVDrvImp13BoundaryCheckERjRKjS2_() called");
    return 0;
}

/* Demangled: LMVHalImp::GetRegSetting(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVHalImp13GetRegSettingEPv(void) {
    ALOGD("_ZN9LMVHalImp13GetRegSettingEPv() called");
    return 0;
}

/* Demangled: LMVHalImp::CreateMultiMemBuf(unsigned int, unsigned int, android::sp<NSCam::IImageBuffer>&, android::sp<NSCam::IImageBuffer>*) */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVHalImp17CreateMultiMemBufEjjRN7android2spIN5NSCam12IImageBufferEEEPS4_(void) {
    ALOGD("_ZN9LMVHalImp17CreateMultiMemBufEjjRN7android2spIN5NSCam12IImageBufferEEEPS4_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::IImageBuffer>*, std::__1::allocator<android::sp<NSCam::IImageBuffer>*> >::push_front(android::sp<NSCam::IImageBuffer>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12IImageBufferEEENS_9allocatorIS6_EEE10push_frontEOS6_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12IImageBufferEEENS_9allocatorIS6_EEE10push_frontEOS6_() called");
    return 0;
}

/* Exported Object: vtable for LMVHalObj<3u> */
extern "C" __attribute__((visibility("default"))) void* _ZTV9LMVHalObjILj3EE = NULL;

/* Exported Object: LMVHalObj<4u>::s_instMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN9LMVHalObjILj4EE11s_instMutexE = NULL;

/* Exported Object: LMVHalObj<8u>::spInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN9LMVHalObjILj8EE10spInstanceE = NULL;

/* Demangled: LMVDrvImp::Get2PixelMode() */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVDrvImp13Get2PixelModeEv(void) {
    ALOGD("_ZN9LMVDrvImp13Get2PixelModeEv() called");
    return 0;
}

/* Demangled: LMVHalImp::GetInstance(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVHalImp11GetInstanceERKj(void) {
    ALOGD("_ZN9LMVHalImp11GetInstanceERKj() called");
    return 0;
}

/* Exported Object: LMVHalObj<1u>::s_instMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN9LMVHalObjILj1EE11s_instMutexE = NULL;

/* Demangled: LMVHalImp::DestroyInstance(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVHalImp15DestroyInstanceEPKc(void) {
    ALOGD("_ZN9LMVHalImp15DestroyInstanceEPKc() called");
    return 0;
}

/* Exported Object: LMVHalObj<8u>::s_instMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN9LMVHalObjILj8EE11s_instMutexE = NULL;

/* Exported Object: vtable for LMVHalObj<0u> */
extern "C" __attribute__((visibility("default"))) void* _ZTV9LMVHalObjILj0EE = NULL;

/* Demangled: NSCam::LMV::LMVTuning::~LMVTuning() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam3LMV9LMVTuningD0Ev(void) {
    ALOGD("_ZN5NSCam3LMV9LMVTuningD0Ev() called");
    return 0;
}

/* Demangled: LMVHalImp::ConfigLMV(LMV_HAL_CONFIG const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVHalImp9ConfigLMVERK14LMV_HAL_CONFIG(void) {
    ALOGD("_ZN9LMVHalImp9ConfigLMVERK14LMV_HAL_CONFIG() called");
    return 0;
}

/* Demangled: LMVHalImp::GetBufLMV(android::sp<NSCam::IImageBuffer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVHalImp9GetBufLMVERN7android2spIN5NSCam12IImageBufferEEE(void) {
    ALOGD("_ZN9LMVHalImp9GetBufLMVERN7android2spIN5NSCam12IImageBufferEEE() called");
    return 0;
}

/* Demangled: LMVHalImp::LMVHalImp(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVHalImpC2ERKj(void) {
    ALOGD("_ZN9LMVHalImpC2ERKj() called");
    return 0;
}

/* Exported Object: LMVHalObj<7u>::spInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN9LMVHalObjILj7EE10spInstanceE = NULL;

/* Demangled: std::__1::deque<android::sp<NSCam::IImageBuffer>, std::__1::allocator<android::sp<NSCam::IImageBuffer> > >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN7android2spIN5NSCam12IImageBufferEEENS_9allocatorIS5_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIN7android2spIN5NSCam12IImageBufferEEENS_9allocatorIS5_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: NSCam::LMV::LMVP1Cb::~LMVP1Cb() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam3LMV7LMVP1CbD0Ev(void) {
    ALOGD("_ZN5NSCam3LMV7LMVP1CbD0Ev() called");
    return 0;
}

/* Demangled: LMVDrvImp::GetRegSetting(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVDrvImp13GetRegSettingEPv(void) {
    ALOGD("_ZN9LMVDrvImp13GetRegSettingEPv() called");
    return 0;
}

/* Exported Object: NSCam::LMV::gSearchRange */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam3LMV12gSearchRangeE = NULL;

/* Exported Object: vtable for NSCam::LMV::LMVTuning */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam3LMV9LMVTuningE = NULL;

/* Demangled: LMVDrvImp::GetLMVDivH() */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVDrvImp10GetLMVDivHEv(void) {
    ALOGD("_ZN9LMVDrvImp10GetLMVDivHEv() called");
    return 0;
}

/* Demangled: LMVDrvImp::Uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVDrvImp6UninitEv(void) {
    ALOGD("_ZN9LMVDrvImp6UninitEv() called");
    return 0;
}

/* Demangled: LMVDrvImp::~LMVDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVDrvImpD1Ev(void) {
    ALOGD("_ZN9LMVDrvImpD1Ev() called");
    return 0;
}

/* Exported Object: vtable for LMVHalObj<7u> */
extern "C" __attribute__((visibility("default"))) void* _ZTV9LMVHalObjILj7EE = NULL;

/* Demangled: NSCam::LMV::SGG2P1Cb::~SGG2P1Cb() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam3LMV8SGG2P1CbD1Ev(void) {
    ALOGD("_ZN5NSCam3LMV8SGG2P1CbD1Ev() called");
    return 0;
}

/* Demangled: NSCam::LMV::LMVTuning::getLMVCb() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam3LMV9LMVTuning8getLMVCbEv(void) {
    ALOGD("_ZN5NSCam3LMV9LMVTuning8getLMVCbEv() called");
    return 0;
}

/* Exported Object: LMVHalImp::mDebugDump */
extern "C" __attribute__((visibility("default"))) void* _ZN9LMVHalImp10mDebugDumpE = NULL;

/* Demangled: LMVHalImp::DestroyMemBuf(android::sp<NSCam::IImageBuffer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVHalImp13DestroyMemBufERN7android2spIN5NSCam12IImageBufferEEE(void) {
    ALOGD("_ZN9LMVHalImp13DestroyMemBufERN7android2spIN5NSCam12IImageBufferEEE() called");
    return 0;
}

/* Demangled: LMVHalImp::EnableGyroSensor() */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVHalImp16EnableGyroSensorEv(void) {
    ALOGD("_ZN9LMVHalImp16EnableGyroSensorEv() called");
    return 0;
}

/* Demangled: LMVHalImp::PrepareLmvResult(int const&, int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVHalImp16PrepareLmvResultERKiS1_(void) {
    ALOGD("_ZN9LMVHalImp16PrepareLmvResultERKiS1_() called");
    return 0;
}

/* Exported Object: LMVHalObj<2u>::s_instMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN9LMVHalObjILj2EE11s_instMutexE = NULL;

/* Exported Object: LMVHalObj<6u>::spInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN9LMVHalObjILj6EE10spInstanceE = NULL;

/* Demangled: NSCam::LMV::SGG2P1Cb::p1TuningNotify(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam3LMV8SGG2P1Cb14p1TuningNotifyEPvS2_(void) {
    ALOGD("_ZN5NSCam3LMV8SGG2P1Cb14p1TuningNotifyEPvS2_() called");
    return 0;
}

/* Exported Object: vtable for LMVDrvImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV9LMVDrvImp = NULL;

/* Demangled: LMVHalImp::NotifyLMV(android::sp<NSCam::IImageBuffer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVHalImp9NotifyLMVERN7android2spIN5NSCam12IImageBufferEEE(void) {
    ALOGD("_ZN9LMVHalImp9NotifyLMVERN7android2spIN5NSCam12IImageBufferEEE() called");
    return 0;
}

/* Exported Object: LMVHalObj<9u>::s_instMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN9LMVHalObjILj9EE11s_instMutexE = NULL;

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::IImageBuffer>*, std::__1::allocator<android::sp<NSCam::IImageBuffer>*>&>::push_front(android::sp<NSCam::IImageBuffer>* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12IImageBufferEEERNS_9allocatorIS6_EEE10push_frontERKS6_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12IImageBufferEEERNS_9allocatorIS6_EEE10push_frontERKS6_() called");
    return 0;
}

/* Exported Object: NSCam::LMV::gLogLevel */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam3LMV9gLogLevelE = NULL;

/* Exported Object: LMVHalObj<6u>::s_instMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN9LMVHalObjILj6EE11s_instMutexE = NULL;

/* Exported Object: vtable for LMVHalObj<4u> */
extern "C" __attribute__((visibility("default"))) void* _ZTV9LMVHalObjILj4EE = NULL;

/* Demangled: NSCam::LMV::SGG2P1Cb::SGG2P1Cb() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam3LMV8SGG2P1CbC1Ev(void) {
    ALOGD("_ZN5NSCam3LMV8SGG2P1CbC1Ev() called");
    return 0;
}

/* Demangled: NSCam::LMV::LMVTuning::isSupportSGG2Cb() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam3LMV9LMVTuning15isSupportSGG2CbEv(void) {
    ALOGD("_ZN5NSCam3LMV9LMVTuning15isSupportSGG2CbEv() called");
    return 0;
}

/* Demangled: NSCam::LMV::LMVTuning::getSGG2Cb() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam3LMV9LMVTuning9getSGG2CbEv(void) {
    ALOGD("_ZN5NSCam3LMV9LMVTuning9getSGG2CbEv() called");
    return 0;
}

/* Exported Object: LMVHalObj<5u>::spInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN9LMVHalObjILj5EE10spInstanceE = NULL;

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::IImageBuffer>*, std::__1::allocator<android::sp<NSCam::IImageBuffer>*> >::push_back(android::sp<NSCam::IImageBuffer>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12IImageBufferEEENS_9allocatorIS6_EEE9push_backEOS6_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12IImageBufferEEENS_9allocatorIS6_EEE9push_backEOS6_() called");
    return 0;
}

/* Demangled: LMVDrvImp::GetLMVDivV() */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVDrvImp10GetLMVDivVEv(void) {
    ALOGD("_ZN9LMVDrvImp10GetLMVDivVEv() called");
    return 0;
}

/* Demangled: LMVDrvImp::GetFirstFrameInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVDrvImp17GetFirstFrameInfoEv(void) {
    ALOGD("_ZN9LMVDrvImp17GetFirstFrameInfoEv() called");
    return 0;
}

/* Demangled: LMVHalImp::GetLMVInputSize(unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVHalImp15GetLMVInputSizeEPjS0_(void) {
    ALOGD("_ZN9LMVHalImp15GetLMVInputSizeEPjS0_() called");
    return 0;
}

/* Exported Object: vtable for LMVHalObj<1u> */
extern "C" __attribute__((visibility("default"))) void* _ZTV9LMVHalObjILj1EE = NULL;

/* Demangled: NSCam::LMV::LMVTuning::~LMVTuning() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam3LMV9LMVTuningD1Ev(void) {
    ALOGD("_ZN5NSCam3LMV9LMVTuningD1Ev() called");
    return 0;
}

/* Demangled: LMVDrvImp::GetLMVMaxGmv() */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVDrvImp12GetLMVMaxGmvEv(void) {
    ALOGD("_ZN9LMVDrvImp12GetLMVMaxGmvEv() called");
    return 0;
}

/* Demangled: LMVHalImp::GetLMVResult(unsigned int&, unsigned int&, unsigned int&, unsigned int&, unsigned int&, unsigned int&, int&, int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVHalImp12GetLMVResultERjS0_S0_S0_S0_S0_RiS1_S0_(void) {
    ALOGD("_ZN9LMVHalImp12GetLMVResultERjS0_S0_S0_S0_S0_RiS1_S0_() called");
    return 0;
}

/* Demangled: LMVHalImp::GetGmv(int&, int&, unsigned int*, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVHalImp6GetGmvERiS0_PjS1_S1_(void) {
    ALOGD("_ZN9LMVHalImp6GetGmvERiS0_PjS1_S1_() called");
    return 0;
}

/* Demangled: LMVHalImp::LMVHalImp(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9LMVHalImpC1ERKj(void) {
    ALOGD("_ZN9LMVHalImpC1ERKj() called");
    return 0;
}

/* Exported Object: LMVHalObj<0u>::s_instMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN9LMVHalObjILj0EE11s_instMutexE = NULL;

/* Exported Object: LMVHalObj<4u>::spInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN9LMVHalObjILj4EE10spInstanceE = NULL;

/* Demangled: NSCam::LMV::LMVP1Cb::~LMVP1Cb() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam3LMV7LMVP1CbD1Ev(void) {
    ALOGD("_ZN5NSCam3LMV7LMVP1CbD1Ev() called");
    return 0;
}

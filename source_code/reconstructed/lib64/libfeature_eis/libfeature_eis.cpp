/*
 * Reverse-Engineered Source for: libfeature_eis.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libfeature_eis"

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
#include "libfeature_eis.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: EisHalImp::CreateEISPlusAlgoBuf() */
extern "C" __attribute__((visibility("default"))) int _ZN9EisHalImp20CreateEISPlusAlgoBufEv(void) {
    ALOGD("_ZN9EisHalImp20CreateEISPlusAlgoBufEv() called");
    return 0;
}

/* Exported Object: EisHalObj<0u>::gWaitGyroCond */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj0EE13gWaitGyroCondE = NULL;

/* Exported Object: EisHalObj<5u>::gGyroQueueLock */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj5EE14gGyroQueueLockE = NULL;

/* Exported Object: EisHalObj<6u>::gGyroDataQueue */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj6EE14gGyroDataQueueE = NULL;

/* Exported Object: EisHalObj<9u>::gWaitGyroCond */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj9EE13gWaitGyroCondE = NULL;

/* Demangled: EisHalImp::DestroyInstance(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9EisHalImp15DestroyInstanceEPKc(void) {
    ALOGD("_ZN9EisHalImp15DestroyInstanceEPKc() called");
    return 0;
}

/* Exported Object: EisHalObj<1u>::gGyroQueueLock */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj1EE14gGyroQueueLockE = NULL;

/* Exported Object: EisHalObj<2u>::gGyroDataQueue */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj2EE14gGyroDataQueueE = NULL;

/* Exported Object: EisHalObj<9u>::spInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj9EE10spInstanceE = NULL;

/* Exported Object: EisHalObj<9u>::gGyroReverse */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj9EE12gGyroReverseE = NULL;

/* Exported Object: EisHalObj<7u>::gGyroCount */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj7EE10gGyroCountE = NULL;

/* Exported Object: vtable for EisHalObj<3u> */
extern "C" __attribute__((visibility("default"))) void* _ZTV9EisHalObjILj3EE = NULL;

/* Demangled: EisHalImp::GetSensorData() */
extern "C" __attribute__((visibility("default"))) int _ZN9EisHalImp13GetSensorDataEv(void) {
    ALOGD("_ZN9EisHalImp13GetSensorDataEv() called");
    return 0;
}

/* Exported Object: EisHalObj<5u>::gWaitGyroCond */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj5EE13gWaitGyroCondE = NULL;

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Exported Object: EisHalObj<5u>::gGyroReverse */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj5EE12gGyroReverseE = NULL;

/* Exported Object: EisHalObj<6u>::gGyroQueueLock */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj6EE14gGyroQueueLockE = NULL;

/* Exported Object: EisHalObj<7u>::gGyroDataQueue */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj7EE14gGyroDataQueueE = NULL;

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: EisHalImp::GetInstance(NSCam::EIS::EisInfo const&, unsigned int const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9EisHalImp11GetInstanceERKN5NSCam3EIS7EisInfoERKjj(void) {
    ALOGD("_ZN9EisHalImp11GetInstanceERKN5NSCam3EIS7EisInfoERKjj() called");
    return 0;
}

/* Exported Object: EisHalObj<2u>::gGyroQueueLock */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj2EE14gGyroQueueLockE = NULL;

/* Exported Object: EisHalObj<3u>::gGyroDataQueue */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj3EE14gGyroDataQueueE = NULL;

/* Exported Object: vtable for EisHalObj<2u> */
extern "C" __attribute__((visibility("default"))) void* _ZTV9EisHalObjILj2EE = NULL;

/* Demangled: EisHalImp::GetEis25Customize(EIS25_TUNING_PARA_STRUCT*, EIS_HAL_CONFIG const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9EisHalImp17GetEis25CustomizeEP24EIS25_TUNING_PARA_STRUCTPK14EIS_HAL_CONFIG(void) {
    ALOGD("_ZN9EisHalImp17GetEis25CustomizeEP24EIS25_TUNING_PARA_STRUCTPK14EIS_HAL_CONFIG() called");
    return 0;
}

/* Exported Object: EisHalObj<0u>::gGyroReverse */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj0EE12gGyroReverseE = NULL;

/* Demangled: GisCalibrationImp::ConfigCalibration(LMV_HAL_CONFIG const&) */
extern "C" __attribute__((visibility("default"))) int _ZN17GisCalibrationImp17ConfigCalibrationERK14LMV_HAL_CONFIG(void) {
    ALOGD("_ZN17GisCalibrationImp17ConfigCalibrationERK14LMV_HAL_CONFIG() called");
    return 0;
}

/* Exported Object: EisHalObj<2u>::spInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj2EE10spInstanceE = NULL;

/* Exported Object: EisHalObj<0u>::gGyroCount */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj0EE10gGyroCountE = NULL;

/* Exported Object: EisHalObj<0u>::s_instMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj0EE11s_instMutexE = NULL;

/* Exported Object: EisHalObj<2u>::s_instMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj2EE11s_instMutexE = NULL;

/* Exported Object: EisHalObj<3u>::gLastGyroTimestamp */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj3EE18gLastGyroTimestampE = NULL;

/* Exported Object: EisHalObj<4u>::s_instMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj4EE11s_instMutexE = NULL;

/* Exported Object: EisHalObj<6u>::s_instMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj6EE11s_instMutexE = NULL;

/* Exported Object: EisHalObj<7u>::gGyroQueueLock */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj7EE14gGyroQueueLockE = NULL;

/* Exported Object: EisHalObj<8u>::s_instMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj8EE11s_instMutexE = NULL;

/* Exported Object: EisHalObj<8u>::gGyroDataQueue */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj8EE14gGyroDataQueueE = NULL;

/* Exported Object: vtable for EisHalObj<1u> */
extern "C" __attribute__((visibility("default"))) void* _ZTV9EisHalObjILj1EE = NULL;

/* Demangled: GisCalibrationImp::GisCalibrationImp(unsigned int const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN17GisCalibrationImpC2ERKjj(void) {
    ALOGD("_ZN17GisCalibrationImpC2ERKjj() called");
    return 0;
}

/* Demangled: EisHalImp::GetEisPlusCustomize(EIS_PLUS_TUNING_PARA_STRUCT*, EIS_HAL_CONFIG const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9EisHalImp19GetEisPlusCustomizeEP27EIS_PLUS_TUNING_PARA_STRUCTPK14EIS_HAL_CONFIG(void) {
    ALOGD("_ZN9EisHalImp19GetEisPlusCustomizeEP27EIS_PLUS_TUNING_PARA_STRUCTPK14EIS_HAL_CONFIG() called");
    return 0;
}

/* Exported Object: EisHalObj<4u>::gGyroDataQueue */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj4EE14gGyroDataQueueE = NULL;

/* Demangled: EisHalImp::CalcSensorTrs(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9EisHalImp13CalcSensorTrsEjj(void) {
    ALOGD("_ZN9EisHalImp13CalcSensorTrsEjj() called");
    return 0;
}

/* Exported Object: EisHalObj<5u>::spInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj5EE10spInstanceE = NULL;

/* Exported Object: EisHalObj<6u>::gGyroReverse */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj6EE12gGyroReverseE = NULL;

/* Exported Object: EisHalObj<7u>::gWaitGyroCond */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj7EE13gWaitGyroCondE = NULL;

/* Demangled: EisHalImp::ConfigGis(EIS_HAL_CONFIG const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9EisHalImp9ConfigGisERK14EIS_HAL_CONFIGj(void) {
    ALOGD("_ZN9EisHalImp9ConfigGisERK14EIS_HAL_CONFIGj() called");
    return 0;
}

/* Exported Object: EisHalObj<3u>::gGyroCount */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj3EE10gGyroCountE = NULL;

/* Exported Object: vtable for EisHalObj<0u> */
extern "C" __attribute__((visibility("default"))) void* _ZTV9EisHalObjILj0EE = NULL;

/* Demangled: EisHal::CreateInstance(char const*, NSCam::EIS::EisInfo const&, unsigned int const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6EisHal14CreateInstanceEPKcRKN5NSCam3EIS7EisInfoERKjj(void) {
    ALOGD("_ZN6EisHal14CreateInstanceEPKcRKN5NSCam3EIS7EisInfoERKjj() called");
    return 0;
}

/* Demangled: EisHalImp::GetSensorInfo(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9EisHalImp13GetSensorInfoEj(void) {
    ALOGD("_ZN9EisHalImp13GetSensorInfoEj() called");
    return 0;
}

/* Demangled: EisHalImp::Uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN9EisHalImp6UninitEv(void) {
    ALOGD("_ZN9EisHalImp6UninitEv() called");
    return 0;
}

/* Exported Object: EisHalObj<9u>::gGyroDataQueue */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj9EE14gGyroDataQueueE = NULL;

/* Demangled: GisCalibrationImp::EnableSensor() */
extern "C" __attribute__((visibility("default"))) int _ZN17GisCalibrationImp12EnableSensorEv(void) {
    ALOGD("_ZN17GisCalibrationImp12EnableSensorEv() called");
    return 0;
}

/* Demangled: EisHalImp::DoRSCMEEis(EIS_HAL_CONFIG*, IMAGE_BASED_DATA_T*, long, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9EisHalImp10DoRSCMEEisEP14EIS_HAL_CONFIGP18IMAGE_BASED_DATA_Tljj(void) {
    ALOGD("_ZN9EisHalImp10DoRSCMEEisEP14EIS_HAL_CONFIGP18IMAGE_BASED_DATA_Tljj() called");
    return 0;
}

/* Exported Object: EisHalObj<2u>::gGyroReverse */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj2EE12gGyroReverseE = NULL;

/* Exported Object: EisHalObj<3u>::gWaitGyroCond */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj3EE13gWaitGyroCondE = NULL;

/* Exported Object: EisHalObj<7u>::gLastGyroTimestamp */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj7EE18gLastGyroTimestampE = NULL;

/* Exported Object: EisHalObj<8u>::spInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj8EE10spInstanceE = NULL;

/* Exported Object: GisCalibrationImp::mGyroData */
extern "C" __attribute__((visibility("default"))) void* _ZN17GisCalibrationImp9mGyroDataE = NULL;

/* Exported Object: EisHalObj<6u>::gGyroCount */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj6EE10gGyroCountE = NULL;

/* Exported Object: gTSRecordWriteID */
extern "C" __attribute__((visibility("default"))) void* gTSRecordWriteID = NULL;

/* Demangled: EisHalImp::GetEis30Customize(EIS30_TUNING_PARA_STRUCT*, EIS_HAL_CONFIG const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9EisHalImp17GetEis30CustomizeEP24EIS30_TUNING_PARA_STRUCTPK14EIS_HAL_CONFIG(void) {
    ALOGD("_ZN9EisHalImp17GetEis30CustomizeEP24EIS30_TUNING_PARA_STRUCTPK14EIS_HAL_CONFIG() called");
    return 0;
}

/* Demangled: EisHalImp::DoFEFMEis(EIS_HAL_CONFIG*, IMAGE_BASED_DATA_T*, long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9EisHalImp9DoFEFMEisEP14EIS_HAL_CONFIGP18IMAGE_BASED_DATA_Tlj(void) {
    ALOGD("_ZN9EisHalImp9DoFEFMEisEP14EIS_HAL_CONFIGP18IMAGE_BASED_DATA_Tlj() called");
    return 0;
}

/* Exported Object: EisHalObj<8u>::gWaitGyroCond */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj8EE13gWaitGyroCondE = NULL;

/* Exported Object: vtable for EisHalImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV9EisHalImp = NULL;

/* Exported Object: EisHalObj<8u>::gGyroReverse */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj8EE12gGyroReverseE = NULL;

/* Exported Object: EisHalObj<9u>::gGyroCount */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj9EE10gGyroCountE = NULL;

/* Demangled: EisHalImp::createSourceDumpFile(EIS_HAL_CONFIG const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9EisHalImp20createSourceDumpFileERK14EIS_HAL_CONFIG(void) {
    ALOGD("_ZN9EisHalImp20createSourceDumpFileERK14EIS_HAL_CONFIG() called");
    return 0;
}

/* Demangled: std::__1::deque<EIS_GyroRecord_t, std::__1::allocator<EIS_GyroRecord_t> >::__add_back_capacity(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeI16EIS_GyroRecord_tNS_9allocatorIS1_EEE19__add_back_capacityEm(void) {
    ALOGD("_ZNSt3__15dequeI16EIS_GyroRecord_tNS_9allocatorIS1_EEE19__add_back_capacityEm() called");
    return 0;
}

/* Demangled: GisCalibrationImp::DoCalibration(LMV_HAL_CONFIG*, long, long) */
extern "C" __attribute__((visibility("default"))) int _ZN17GisCalibrationImp13DoCalibrationEP14LMV_HAL_CONFIGll(void) {
    ALOGD("_ZN17GisCalibrationImp13DoCalibrationEP14LMV_HAL_CONFIGll() called");
    return 0;
}

/* Exported Object: EisHalObj<1u>::spInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj1EE10spInstanceE = NULL;

/* Exported Object: EisHalObj<1u>::s_instMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj1EE11s_instMutexE = NULL;

/* Exported Object: EisHalObj<5u>::gLastGyroTimestamp */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj5EE18gLastGyroTimestampE = NULL;

/* Exported Object: EisHalObj<4u>::gGyroReverse */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj4EE12gGyroReverseE = NULL;

/* Demangled: EisHalImp::configMVNumber(EIS_HAL_CONFIG const&, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9EisHalImp14configMVNumberERK14EIS_HAL_CONFIGPiS3_(void) {
    ALOGD("_ZN9EisHalImp14configMVNumberERK14EIS_HAL_CONFIGPiS3_() called");
    return 0;
}

/* Exported Object: emptyQueue */
extern "C" __attribute__((visibility("default"))) void* emptyQueue = NULL;

/* Demangled: EisHalImp::ConfigGyroAlgo(EIS_HAL_CONFIG const&, EIS_PLUS_SET_ENV_INFO_STRUCT const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9EisHalImp14ConfigGyroAlgoERK14EIS_HAL_CONFIGRK28EIS_PLUS_SET_ENV_INFO_STRUCT(void) {
    ALOGD("_ZN9EisHalImp14ConfigGyroAlgoERK14EIS_HAL_CONFIGRK28EIS_PLUS_SET_ENV_INFO_STRUCT() called");
    return 0;
}

/* Exported Object: EisHalObj<2u>::gLastGyroTimestamp */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj2EE18gLastGyroTimestampE = NULL;

/* Exported Object: EisHalObj<4u>::spInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj4EE10spInstanceE = NULL;

/* Demangled: std::__1::__split_buffer<EIS_GyroRecord_t*, std::__1::allocator<EIS_GyroRecord_t*>&>::push_back(EIS_GyroRecord_t*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIP16EIS_GyroRecord_tRNS_9allocatorIS2_EEE9push_backEOS2_(void) {
    ALOGD("_ZNSt3__114__split_bufferIP16EIS_GyroRecord_tRNS_9allocatorIS2_EEE9push_backEOS2_() called");
    return 0;
}

/* Demangled: GisCalibration::CreateInstance(char const*, unsigned int const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN14GisCalibration14CreateInstanceEPKcRKjj(void) {
    ALOGD("_ZN14GisCalibration14CreateInstanceEPKcRKjj() called");
    return 0;
}

/* Exported Object: EisHalObj<1u>::gWaitGyroCond */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj1EE13gWaitGyroCondE = NULL;

/* Exported Object: EisHalObj<2u>::gGyroCount */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj2EE10gGyroCountE = NULL;

/* Demangled: std::__1::__split_buffer<EIS_GyroRecord_t*, std::__1::allocator<EIS_GyroRecord_t*> >::push_back(EIS_GyroRecord_t*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIP16EIS_GyroRecord_tNS_9allocatorIS2_EEE9push_backEOS2_(void) {
    ALOGD("_ZNSt3__114__split_bufferIP16EIS_GyroRecord_tNS_9allocatorIS2_EEE9push_backEOS2_() called");
    return 0;
}

/* Exported Object: vtable for EisHalObj<9u> */
extern "C" __attribute__((visibility("default"))) void* _ZTV9EisHalObjILj9EE = NULL;

/* Demangled: GisCalibrationImp::GisCalibrationImp(unsigned int const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN17GisCalibrationImpC1ERKjj(void) {
    ALOGD("_ZN17GisCalibrationImpC1ERKjj() called");
    return 0;
}

/* Exported Object: EisHalObj<9u>::gLastGyroTimestamp */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj9EE18gLastGyroTimestampE = NULL;

/* Exported Object: EisHalObj<7u>::spInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj7EE10spInstanceE = NULL;

/* Exported Object: GisCalibrationImp::mEISInterval */
extern "C" __attribute__((visibility("default"))) void* _ZN17GisCalibrationImp12mEISIntervalE = NULL;

/* Demangled: EisHalImp::ConfigRSCMEEis(EIS_HAL_CONFIG const&, unsigned int, FSC_INFO_T const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9EisHalImp14ConfigRSCMEEisERK14EIS_HAL_CONFIGjPK10FSC_INFO_T(void) {
    ALOGD("_ZN9EisHalImp14ConfigRSCMEEisERK14EIS_HAL_CONFIGjPK10FSC_INFO_T() called");
    return 0;
}

/* Exported Object: EisHalObj<5u>::gGyroCount */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj5EE10gGyroCountE = NULL;

/* Exported Object: EisHalObj<6u>::gWaitGyroCond */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj6EE13gWaitGyroCondE = NULL;

/* Demangled: std::__1::__split_buffer<EIS_GyroRecord_t*, std::__1::allocator<EIS_GyroRecord_t*>&>::push_front(EIS_GyroRecord_t* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIP16EIS_GyroRecord_tRNS_9allocatorIS2_EEE10push_frontERKS2_(void) {
    ALOGD("_ZNSt3__114__split_bufferIP16EIS_GyroRecord_tRNS_9allocatorIS2_EEE10push_frontERKS2_() called");
    return 0;
}

/* Exported Object: vtable for EisHalObj<8u> */
extern "C" __attribute__((visibility("default"))) void* _ZTV9EisHalObjILj8EE = NULL;

/* Exported Object: gGyroRecordWriteID */
extern "C" __attribute__((visibility("default"))) void* gGyroRecordWriteID = NULL;

/* Demangled: EisHalImp::Init() */
extern "C" __attribute__((visibility("default"))) int _ZN9EisHalImp4InitEv(void) {
    ALOGD("_ZN9EisHalImp4InitEv() called");
    return 0;
}

/* Demangled: EisHalImp::EisHalImp(NSCam::EIS::EisInfo const&, unsigned int const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9EisHalImpC1ERKN5NSCam3EIS7EisInfoERKjj(void) {
    ALOGD("_ZN9EisHalImpC1ERKN5NSCam3EIS7EisInfoERKjj() called");
    return 0;
}

/* Exported Object: EisHalObj<6u>::gLastGyroTimestamp */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj6EE18gLastGyroTimestampE = NULL;

/* Demangled: std::__1::deque<EIS_GyroRecord_t, std::__1::allocator<EIS_GyroRecord_t> >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeI16EIS_GyroRecord_tNS_9allocatorIS1_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeI16EIS_GyroRecord_tNS_9allocatorIS1_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Exported Object: gGyroRecord */
extern "C" __attribute__((visibility("default"))) void* gGyroRecord = NULL;

/* Demangled: GisCalibrationImp::GetSensorData(GYRO_SET_PROC_INFO_STRUCT&) */
extern "C" __attribute__((visibility("default"))) int _ZN17GisCalibrationImp13GetSensorDataER25GYRO_SET_PROC_INFO_STRUCT(void) {
    ALOGD("_ZN17GisCalibrationImp13GetSensorDataER25GYRO_SET_PROC_INFO_STRUCT() called");
    return 0;
}

/* Demangled: EisHalImp::CreateMemBuf(unsigned int, android::sp<NSCam::IImageBuffer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN9EisHalImp12CreateMemBufEjRN7android2spIN5NSCam12IImageBufferEEE(void) {
    ALOGD("_ZN9EisHalImp12CreateMemBufEjRN7android2spIN5NSCam12IImageBufferEEE() called");
    return 0;
}

/* Demangled: EisHalImp::AddMultiSensors(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9EisHalImp15AddMultiSensorsEj(void) {
    ALOGD("_ZN9EisHalImp15AddMultiSensorsEj() called");
    return 0;
}

/* Exported Object: EisHalObj<0u>::gLastGyroTimestamp */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj0EE18gLastGyroTimestampE = NULL;

/* Exported Object: EisHalObj<1u>::gGyroReverse */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj1EE12gGyroReverseE = NULL;

/* Exported Object: EisHalObj<2u>::gWaitGyroCond */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj2EE13gWaitGyroCondE = NULL;

/* Exported Object: EisHalObj<8u>::gGyroCount */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj8EE10gGyroCountE = NULL;

/* Exported Object: vtable for EisHalObj<7u> */
extern "C" __attribute__((visibility("default"))) void* _ZTV9EisHalObjILj7EE = NULL;

/* Exported Object: GisCalibrationImp::mEMEnabled */
extern "C" __attribute__((visibility("default"))) void* _ZN17GisCalibrationImp10mEMEnabledE = NULL;

/* Demangled: EisHalImp::DoGis(EIS_HAL_CONFIG*, long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9EisHalImp5DoGisEP14EIS_HAL_CONFIGlj(void) {
    ALOGD("_ZN9EisHalImp5DoGisEP14EIS_HAL_CONFIGlj() called");
    return 0;
}

/* Demangled: GisCalibrationImp::DestroyInstance(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN17GisCalibrationImp15DestroyInstanceEPKc(void) {
    ALOGD("_ZN17GisCalibrationImp15DestroyInstanceEPKc() called");
    return 0;
}

/* Demangled: EisHalImp::ExecuteGyroAlgo(EIS_HAL_CONFIG const*, long, unsigned int, unsigned int, GYRO_MV_RESULT_INFO_STRUCT&, IMAGE_BASED_DATA_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN9EisHalImp15ExecuteGyroAlgoEPK14EIS_HAL_CONFIGljjR26GYRO_MV_RESULT_INFO_STRUCTP18IMAGE_BASED_DATA_T(void) {
    ALOGD("_ZN9EisHalImp15ExecuteGyroAlgoEPK14EIS_HAL_CONFIGljjR26GYRO_MV_RESULT_INFO_STRUCTP18IMAGE_BASED_DATA_T() called");
    return 0;
}

/* Exported Object: EisHalObj<0u>::spInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj0EE10spInstanceE = NULL;

/* Exported Object: EisHalObj<3u>::gGyroQueueLock */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj3EE14gGyroQueueLockE = NULL;

/* Demangled: std::__1::__split_buffer<EIS_GyroRecord_t*, std::__1::allocator<EIS_GyroRecord_t*> >::push_front(EIS_GyroRecord_t*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIP16EIS_GyroRecord_tNS_9allocatorIS2_EEE10push_frontEOS2_(void) {
    ALOGD("_ZNSt3__114__split_bufferIP16EIS_GyroRecord_tNS_9allocatorIS2_EEE10push_frontEOS2_() called");
    return 0;
}

/* Demangled: GisCalibrationImp::CreateMemBuf(unsigned int, android::sp<NSCam::IImageBuffer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN17GisCalibrationImp12CreateMemBufEjRN7android2spIN5NSCam12IImageBufferEEE(void) {
    ALOGD("_ZN17GisCalibrationImp12CreateMemBufEjRN7android2spIN5NSCam12IImageBufferEEE() called");
    return 0;
}

/* Demangled: EisHalImp::ForcedDoEisPass2() */
extern "C" __attribute__((visibility("default"))) int _ZN9EisHalImp16ForcedDoEisPass2Ev(void) {
    ALOGD("_ZN9EisHalImp16ForcedDoEisPass2Ev() called");
    return 0;
}

/* Demangled: EisHalImp::GetEisPlusResult(EIS_PLUS_RESULT_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN9EisHalImp16GetEisPlusResultEP27EIS_PLUS_RESULT_INFO_STRUCT(void) {
    ALOGD("_ZN9EisHalImp16GetEisPlusResultEP27EIS_PLUS_RESULT_INFO_STRUCT() called");
    return 0;
}

/* Exported Object: EisHalObj<0u>::gGyroDataQueue */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj0EE14gGyroDataQueueE = NULL;

/* Exported Object: vtable for EisHalObj<6u> */
extern "C" __attribute__((visibility("default"))) void* _ZTV9EisHalObjILj6EE = NULL;

/* Demangled: GisCalibrationImp::GetSensorInfo(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN17GisCalibrationImp13GetSensorInfoEj(void) {
    ALOGD("_ZN17GisCalibrationImp13GetSensorInfoEj() called");
    return 0;
}

/* Exported Object: EisHalObj<4u>::gLastGyroTimestamp */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj4EE18gLastGyroTimestampE = NULL;

/* Exported Object: EisHalObj<7u>::gGyroReverse */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj7EE12gGyroReverseE = NULL;

/* Exported Object: vtable for GisCalibrationImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV17GisCalibrationImp = NULL;

/* Demangled: EisHalImp::DestroyMemBuf(android::sp<NSCam::IImageBuffer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN9EisHalImp13DestroyMemBufERN7android2spIN5NSCam12IImageBufferEEE(void) {
    ALOGD("_ZN9EisHalImp13DestroyMemBufERN7android2spIN5NSCam12IImageBufferEEE() called");
    return 0;
}

/* Exported Object: EisHalObj<3u>::spInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj3EE10spInstanceE = NULL;

/* Exported Object: EisHalObj<8u>::gGyroQueueLock */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj8EE14gGyroQueueLockE = NULL;

/* Demangled: _ZNSt3__15dequeI16EIS_GyroRecord_tNS_9allocatorIS1_EEE8__appendINS_16__deque_iteratorIS1_PKS1_RS7_PKS8_lLl170EEEEEvT_SD_PNS_9enable_ifIXsr21__is_forward_iteratorISD_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeI16EIS_GyroRecord_tNS_9allocatorIS1_EEE8__appendINS_16__deque_iteratorIS1_PKS1_RS7_PKS8_lLl170EEEEEvT_SD_PNS_9enable_ifIXsr21__is_forward_iteratorISD_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__15dequeI16EIS_GyroRecord_tNS_9allocatorIS1_EEE8__appendINS_16__deque_iteratorIS1_PKS1_RS7_PKS8_lLl170EEEEEvT_SD_PNS_9enable_ifIXsr21__is_forward_iteratorISD_EE5valueEvE4typeE() called");
    return 0;
}

/* Demangled: GisCalibrationImp::CalcSensorTrs(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN17GisCalibrationImp13CalcSensorTrsEjj(void) {
    ALOGD("_ZN17GisCalibrationImp13CalcSensorTrsEjj() called");
    return 0;
}

/* Exported Object: EisHalObj<1u>::gGyroCount */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj1EE10gGyroCountE = NULL;

/* Exported Object: EisHalObj<4u>::gGyroQueueLock */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj4EE14gGyroQueueLockE = NULL;

/* Exported Object: EisHalObj<5u>::gGyroDataQueue */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj5EE14gGyroDataQueueE = NULL;

/* Exported Object: vtable for EisHalObj<5u> */
extern "C" __attribute__((visibility("default"))) void* _ZTV9EisHalObjILj5EE = NULL;

/* Exported Object: EisHalObj<0u>::gGyroQueueLock */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj0EE14gGyroQueueLockE = NULL;

/* Exported Object: EisHalObj<1u>::gGyroDataQueue */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj1EE14gGyroDataQueueE = NULL;

/* Exported Object: EisHalObj<1u>::gLastGyroTimestamp */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj1EE18gLastGyroTimestampE = NULL;

/* Exported Object: EisHalObj<3u>::s_instMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj3EE11s_instMutexE = NULL;

/* Exported Object: EisHalObj<3u>::gGyroReverse */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj3EE12gGyroReverseE = NULL;

/* Exported Object: EisHalObj<4u>::gWaitGyroCond */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj4EE13gWaitGyroCondE = NULL;

/* Exported Object: EisHalObj<5u>::s_instMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj5EE11s_instMutexE = NULL;

/* Exported Object: EisHalObj<7u>::s_instMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj7EE11s_instMutexE = NULL;

/* Exported Object: EisHalObj<9u>::s_instMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj9EE11s_instMutexE = NULL;

/* Exported Object: gTSRecord */
extern "C" __attribute__((visibility("default"))) void* gTSRecord = NULL;

/* Demangled: GisCalibrationImp::Init() */
extern "C" __attribute__((visibility("default"))) int _ZN17GisCalibrationImp4InitEv(void) {
    ALOGD("_ZN17GisCalibrationImp4InitEv() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: EisHalImp::dumpBitTrue(EisHalImp::BitTrueData const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9EisHalImp11dumpBitTrueERKNS_11BitTrueDataE(void) {
    ALOGD("_ZN9EisHalImp11dumpBitTrueERKNS_11BitTrueDataE() called");
    return 0;
}

/* Demangled: EisHalImp::EisHalImp(NSCam::EIS::EisInfo const&, unsigned int const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9EisHalImpC2ERKN5NSCam3EIS7EisInfoERKjj(void) {
    ALOGD("_ZN9EisHalImpC2ERKN5NSCam3EIS7EisInfoERKjj() called");
    return 0;
}

/* Exported Object: EisHalObj<6u>::spInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj6EE10spInstanceE = NULL;

/* Exported Object: GisCalibrationImp::mDebugDump */
extern "C" __attribute__((visibility("default"))) void* _ZN17GisCalibrationImp10mDebugDumpE = NULL;

/* Demangled: GisCalibrationImp::DestroyMemBuf(android::sp<NSCam::IImageBuffer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN17GisCalibrationImp13DestroyMemBufERN7android2spIN5NSCam12IImageBufferEEE(void) {
    ALOGD("_ZN17GisCalibrationImp13DestroyMemBufERN7android2spIN5NSCam12IImageBufferEEE() called");
    return 0;
}

/* Demangled: GisCalibrationImp::Uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN17GisCalibrationImp6UninitEv(void) {
    ALOGD("_ZN17GisCalibrationImp6UninitEv() called");
    return 0;
}

/* Demangled: EisHalImp::EnableSensor() */
extern "C" __attribute__((visibility("default"))) int _ZN9EisHalImp12EnableSensorEv(void) {
    ALOGD("_ZN9EisHalImp12EnableSensorEv() called");
    return 0;
}

/* Demangled: EisHalImp::ConfigFEFMEis(EIS_HAL_CONFIG const&, unsigned int, MULTISCALE_INFO_T const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9EisHalImp13ConfigFEFMEisERK14EIS_HAL_CONFIGjPK17MULTISCALE_INFO_T(void) {
    ALOGD("_ZN9EisHalImp13ConfigFEFMEisERK14EIS_HAL_CONFIGjPK17MULTISCALE_INFO_T() called");
    return 0;
}

/* Demangled: EisHalImp::SetEisPlusWarpInfo(int*, int*, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9EisHalImp18SetEisPlusWarpInfoEPiS0_S0_S0_(void) {
    ALOGD("_ZN9EisHalImp18SetEisPlusWarpInfoEPiS0_S0_S0_() called");
    return 0;
}

/* Exported Object: EisHalObj<4u>::gGyroCount */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj4EE10gGyroCountE = NULL;

/* Exported Object: EisHalObj<8u>::gLastGyroTimestamp */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj8EE18gLastGyroTimestampE = NULL;

/* Exported Object: EisHalObj<9u>::gGyroQueueLock */
extern "C" __attribute__((visibility("default"))) void* _ZN9EisHalObjILj9EE14gGyroQueueLockE = NULL;

/* Exported Object: vtable for EisHalObj<4u> */
extern "C" __attribute__((visibility("default"))) void* _ZTV9EisHalObjILj4EE = NULL;

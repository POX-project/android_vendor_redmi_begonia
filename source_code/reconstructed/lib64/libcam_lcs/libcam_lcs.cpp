/*
 * Reverse-Engineered Source for: libcam.lcs.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libcam_lcs"

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
#include "libcam_lcs.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: LcsDrvImp::clearList_In() */
extern "C" __attribute__((visibility("default"))) int _ZN9LcsDrvImp12clearList_InEv(void) {
    ALOGD("_ZN9LcsDrvImp12clearList_InEv() called");
    return 0;
}

/* Demangled: LcsDrvImp::getLCSListLast_In(NSIspTuning::ISP_LCS_IN_INFO_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN9LcsDrvImp17getLCSListLast_InERN11NSIspTuning17ISP_LCS_IN_INFO_TE(void) {
    ALOGD("_ZN9LcsDrvImp17getLCSListLast_InERN11NSIspTuning17ISP_LCS_IN_INFO_TE() called");
    return 0;
}

/* Exported Object: LcsHalObj<2u>::spInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN9LcsHalObjILj2EE10spInstanceE = NULL;

/* Exported Object: vtable for LcsHalObj<4u> */
extern "C" __attribute__((visibility("default"))) void* _ZTV9LcsHalObjILj4EE = NULL;

/* Demangled: LcsDrvImp::getLCSList_info_In(int, NSIspTuning::ISP_LCS_IN_INFO_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN9LcsDrvImp18getLCSList_info_InEiRN11NSIspTuning17ISP_LCS_IN_INFO_TE(void) {
    ALOGD("_ZN9LcsDrvImp18getLCSList_info_InEiRN11NSIspTuning17ISP_LCS_IN_INFO_TE() called");
    return 0;
}

/* Demangled: LcsDrvImp::Uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN9LcsDrvImp6UninitEv(void) {
    ALOGD("_ZN9LcsDrvImp6UninitEv() called");
    return 0;
}

/* Exported Object: vtable for android::List<NSIspTuning::ISP_LCS_IN_INFO_T> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android4ListIN11NSIspTuning17ISP_LCS_IN_INFO_TEEE = NULL;

/* Demangled: LcsHal::CreateInstance(char const*, unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6LcsHal14CreateInstanceEPKcRKj(void) {
    ALOGD("_ZN6LcsHal14CreateInstanceEPKcRKj() called");
    return 0;
}

/* Demangled: LcsHalImp::~LcsHalImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9LcsHalImpD0Ev(void) {
    ALOGD("_ZN9LcsHalImpD0Ev() called");
    return 0;
}

/* Exported Object: LcsHalObj<3u>::spInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN9LcsHalObjILj3EE10spInstanceE = NULL;

/* Exported Object: vtable for LcsHalCallBack */
extern "C" __attribute__((visibility("default"))) void* _ZTV14LcsHalCallBack = NULL;

/* Demangled: LcsDrvImp::GetLCSInputDimen(unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN9LcsDrvImp16GetLCSInputDimenERjS0_(void) {
    ALOGD("_ZN9LcsDrvImp16GetLCSInputDimenERjS0_() called");
    return 0;
}

/* Demangled: LcsDrvImp::updateLCSList_In(int, NSIspTuning::ISP_LCS_IN_INFO_T const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9LcsDrvImp16updateLCSList_InEiRKN11NSIspTuning17ISP_LCS_IN_INFO_TE(void) {
    ALOGD("_ZN9LcsDrvImp16updateLCSList_InEiRKN11NSIspTuning17ISP_LCS_IN_INFO_TE() called");
    return 0;
}

/* Demangled: LcsHalImp::LcsHalImp(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9LcsHalImpC1ERKj(void) {
    ALOGD("_ZN9LcsHalImpC1ERKj() called");
    return 0;
}

/* Demangled: LcsHalImp::~LcsHalImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9LcsHalImpD1Ev(void) {
    ALOGD("_ZN9LcsHalImpD1Ev() called");
    return 0;
}

/* Exported Object: LcsHalObj<4u>::spInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN9LcsHalObjILj4EE10spInstanceE = NULL;

/* Demangled: LcsDrvImp::ConvertSensorDevType(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9LcsDrvImp20ConvertSensorDevTypeERKj(void) {
    ALOGD("_ZN9LcsDrvImp20ConvertSensorDevTypeERKj() called");
    return 0;
}

/* Exported Object: vtable for android::List<NSIspTuning::ISP_LCS_OUT_INFO_T> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android4ListIN11NSIspTuning18ISP_LCS_OUT_INFO_TEEE = NULL;

/* Demangled: LcsHalImp::LcsHalImp(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9LcsHalImpC2ERKj(void) {
    ALOGD("_ZN9LcsHalImpC2ERKj() called");
    return 0;
}

/* Demangled: LcsHalImp::~LcsHalImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9LcsHalImpD2Ev(void) {
    ALOGD("_ZN9LcsHalImpD2Ev() called");
    return 0;
}

/* Demangled: LcsHalCallBack::LcsHalCallBack(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN14LcsHalCallBackC1EPv(void) {
    ALOGD("_ZN14LcsHalCallBackC1EPv() called");
    return 0;
}

/* Demangled: LcsHalCallBack::~LcsHalCallBack() */
extern "C" __attribute__((visibility("default"))) int _ZN14LcsHalCallBackD0Ev(void) {
    ALOGD("_ZN14LcsHalCallBackD0Ev() called");
    return 0;
}

/* Demangled: LcsHalImp::ConfigLcsHal(LCS_HAL_CONFIG const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9LcsHalImp12ConfigLcsHalERK14LCS_HAL_CONFIG(void) {
    ALOGD("_ZN9LcsHalImp12ConfigLcsHalERK14LCS_HAL_CONFIG() called");
    return 0;
}

/* Demangled: LcsDrvImp::ConfigLcs() */
extern "C" __attribute__((visibility("default"))) int _ZN9LcsDrvImp9ConfigLcsEv(void) {
    ALOGD("_ZN9LcsDrvImp9ConfigLcsEv() called");
    return 0;
}

/* Exported Object: vtable for LcsDrvImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV9LcsDrvImp = NULL;

/* Demangled: LcsHalCallBack::LcsHalCallBack(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN14LcsHalCallBackC2EPv(void) {
    ALOGD("_ZN14LcsHalCallBackC2EPv() called");
    return 0;
}

/* Demangled: LcsHalCallBack::~LcsHalCallBack() */
extern "C" __attribute__((visibility("default"))) int _ZN14LcsHalCallBackD1Ev(void) {
    ALOGD("_ZN14LcsHalCallBackD1Ev() called");
    return 0;
}

/* Demangled: LcsHalImp::GetInstance(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9LcsHalImp11GetInstanceERKj(void) {
    ALOGD("_ZN9LcsHalImp11GetInstanceERKj() called");
    return 0;
}

/* Demangled: LcsHalImp::Init() */
extern "C" __attribute__((visibility("default"))) int _ZN9LcsHalImp4InitEv(void) {
    ALOGD("_ZN9LcsHalImp4InitEv() called");
    return 0;
}

/* Demangled: LcsHalCallBack::~LcsHalCallBack() */
extern "C" __attribute__((visibility("default"))) int _ZN14LcsHalCallBackD2Ev(void) {
    ALOGD("_ZN14LcsHalCallBackD2Ev() called");
    return 0;
}

/* Demangled: LcsHalImp::Set_LcsInParam(int, long) */
extern "C" __attribute__((visibility("default"))) int _ZN9LcsHalImp14Set_LcsInParamEil(void) {
    ALOGD("_ZN9LcsHalImp14Set_LcsInParamEil() called");
    return 0;
}

/* Demangled: LcsHalImp::ConvertCameraVer(LCS_CAMERA_VER_ENUM const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9LcsHalImp16ConvertCameraVerERK19LCS_CAMERA_VER_ENUM(void) {
    ALOGD("_ZN9LcsHalImp16ConvertCameraVerERK19LCS_CAMERA_VER_ENUM() called");
    return 0;
}

/* Demangled: LcsDrvImp::ConvertSensorTgType(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9LcsDrvImp19ConvertSensorTgTypeERKj(void) {
    ALOGD("_ZN9LcsDrvImp19ConvertSensorTgTypeERKj() called");
    return 0;
}

/* Exported Object: vtable for LcsP1Cb */
extern "C" __attribute__((visibility("default"))) void* _ZTV7LcsP1Cb = NULL;

/* Demangled: LcsHalImp::GetSensorInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN9LcsHalImp13GetSensorInfoEv(void) {
    ALOGD("_ZN9LcsHalImp13GetSensorInfoEv() called");
    return 0;
}

/* Demangled: LcsDrvImp::getTuningSensorDevType() */
extern "C" __attribute__((visibility("default"))) int _ZN9LcsDrvImp22getTuningSensorDevTypeEv(void) {
    ALOGD("_ZN9LcsDrvImp22getTuningSensorDevTypeEv() called");
    return 0;
}

/* Demangled: LcsDrvImp::DestroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9LcsDrvImp15DestroyInstanceEv(void) {
    ALOGD("_ZN9LcsDrvImp15DestroyInstanceEv() called");
    return 0;
}

/* Demangled: LcsDrvImp::LcsDrvImp(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9LcsDrvImpC1ERKj(void) {
    ALOGD("_ZN9LcsDrvImpC1ERKj() called");
    return 0;
}

/* Demangled: LcsHalCallBack::doNotifyCb(int, long, long, long) */
extern "C" __attribute__((visibility("default"))) int _ZN14LcsHalCallBack10doNotifyCbEilll(void) {
    ALOGD("_ZN14LcsHalCallBack10doNotifyCbEilll() called");
    return 0;
}

/* Demangled: LcsDrv::CreateInstance(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6LcsDrv14CreateInstanceERKj(void) {
    ALOGD("_ZN6LcsDrv14CreateInstanceERKj() called");
    return 0;
}

/* Demangled: LcsP1Cb::LcsP1Cb(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7LcsP1CbC1EPv(void) {
    ALOGD("_ZN7LcsP1CbC1EPv() called");
    return 0;
}

/* Demangled: LcsP1Cb::~LcsP1Cb() */
extern "C" __attribute__((visibility("default"))) int _ZN7LcsP1CbD0Ev(void) {
    ALOGD("_ZN7LcsP1CbD0Ev() called");
    return 0;
}

/* Demangled: LcsDrvImp::LcsDrvImp(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9LcsDrvImpC2ERKj(void) {
    ALOGD("_ZN9LcsDrvImpC2ERKj() called");
    return 0;
}

/* Demangled: LcsHalImp::DestroyInstance(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9LcsHalImp15DestroyInstanceEPKc(void) {
    ALOGD("_ZN9LcsHalImp15DestroyInstanceEPKc() called");
    return 0;
}

/* Demangled: LcsHalImp::Uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN9LcsHalImp6UninitEv(void) {
    ALOGD("_ZN9LcsHalImp6UninitEv() called");
    return 0;
}

/* Exported Object: LcsHalObj<0u>::s_instMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN9LcsHalObjILj0EE11s_instMutexE = NULL;

/* Demangled: LcsP1Cb::LcsP1Cb(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7LcsP1CbC2EPv(void) {
    ALOGD("_ZN7LcsP1CbC2EPv() called");
    return 0;
}

/* Demangled: LcsP1Cb::~LcsP1Cb() */
extern "C" __attribute__((visibility("default"))) int _ZN7LcsP1CbD1Ev(void) {
    ALOGD("_ZN7LcsP1CbD1Ev() called");
    return 0;
}

/* Exported Object: LcsHalObj<1u>::s_instMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN9LcsHalObjILj1EE11s_instMutexE = NULL;

/* Demangled: LcsP1Cb::p1TuningNotify(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7LcsP1Cb14p1TuningNotifyEPvS0_(void) {
    ALOGD("_ZN7LcsP1Cb14p1TuningNotifyEPvS0_() called");
    return 0;
}

/* Demangled: LcsP1Cb::~LcsP1Cb() */
extern "C" __attribute__((visibility("default"))) int _ZN7LcsP1CbD2Ev(void) {
    ALOGD("_ZN7LcsP1CbD2Ev() called");
    return 0;
}

/* Demangled: LcsDrvImp::GetInstance(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9LcsDrvImp11GetInstanceERKj(void) {
    ALOGD("_ZN9LcsDrvImp11GetInstanceERKj() called");
    return 0;
}

/* Demangled: LcsDrvImp::Init() */
extern "C" __attribute__((visibility("default"))) int _ZN9LcsDrvImp4InitEv(void) {
    ALOGD("_ZN9LcsDrvImp4InitEv() called");
    return 0;
}

/* Exported Object: LcsHalObj<2u>::s_instMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN9LcsHalObjILj2EE11s_instMutexE = NULL;

/* Exported Object: vtable for LcsHalObj<0u> */
extern "C" __attribute__((visibility("default"))) void* _ZTV9LcsHalObjILj0EE = NULL;

/* Exported Object: LcsHalObj<3u>::s_instMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN9LcsHalObjILj3EE11s_instMutexE = NULL;

/* Exported Object: vtable for LcsHalObj<1u> */
extern "C" __attribute__((visibility("default"))) void* _ZTV9LcsHalObjILj1EE = NULL;

/* Demangled: LcsDrvImp::SetSensorInfo(unsigned int const&, unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9LcsDrvImp13SetSensorInfoERKjS1_(void) {
    ALOGD("_ZN9LcsDrvImp13SetSensorInfoERKjS1_() called");
    return 0;
}

/* Exported Object: LcsHalObj<0u>::spInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN9LcsHalObjILj0EE10spInstanceE = NULL;

/* Exported Object: LcsHalObj<4u>::s_instMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN9LcsHalObjILj4EE11s_instMutexE = NULL;

/* Exported Object: vtable for LcsHalImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV9LcsHalImp = NULL;

/* Exported Object: vtable for LcsHalObj<2u> */
extern "C" __attribute__((visibility("default"))) void* _ZTV9LcsHalObjILj2EE = NULL;

/* Demangled: LcsDrvImp::getLCSList_info_In(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9LcsDrvImp18getLCSList_info_InEi(void) {
    ALOGD("_ZN9LcsDrvImp18getLCSList_info_InEi() called");
    return 0;
}

/* Exported Object: LcsHalObj<1u>::spInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN9LcsHalObjILj1EE10spInstanceE = NULL;

/* Exported Object: vtable for LcsHalObj<3u> */
extern "C" __attribute__((visibility("default"))) void* _ZTV9LcsHalObjILj3EE = NULL;

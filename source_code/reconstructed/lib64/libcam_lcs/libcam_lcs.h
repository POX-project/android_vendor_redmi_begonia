/*
 * Reverse-Engineered ABI Specification for: libcam.lcs.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libcam.lcs.so
 */

#ifndef BEGONIA_RE_LIBCAM_LCS_H
#define BEGONIA_RE_LIBCAM_LCS_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN9LcsDrvImp12clearList_InEv */
/* Demangled: LcsDrvImp::clearList_In() */
int _ZN9LcsDrvImp12clearList_InEv(void);

/* Symbol: _ZN9LcsDrvImp17getLCSListLast_InERN11NSIspTuning17ISP_LCS_IN_INFO_TE */
/* Demangled: LcsDrvImp::getLCSListLast_In(NSIspTuning::ISP_LCS_IN_INFO_T&) */
int _ZN9LcsDrvImp17getLCSListLast_InERN11NSIspTuning17ISP_LCS_IN_INFO_TE(void);

/* Symbol: _ZN9LcsHalObjILj2EE10spInstanceE */
/* Demangled: LcsHalObj<2u>::spInstance */
extern void* _ZN9LcsHalObjILj2EE10spInstanceE;

/* Symbol: _ZTV9LcsHalObjILj4EE */
/* Demangled: vtable for LcsHalObj<4u> */
extern void* _ZTV9LcsHalObjILj4EE;

/* Symbol: _ZN9LcsDrvImp18getLCSList_info_InEiRN11NSIspTuning17ISP_LCS_IN_INFO_TE */
/* Demangled: LcsDrvImp::getLCSList_info_In(int, NSIspTuning::ISP_LCS_IN_INFO_T&) */
int _ZN9LcsDrvImp18getLCSList_info_InEiRN11NSIspTuning17ISP_LCS_IN_INFO_TE(void);

/* Symbol: _ZN9LcsDrvImp6UninitEv */
/* Demangled: LcsDrvImp::Uninit() */
int _ZN9LcsDrvImp6UninitEv(void);

/* Symbol: _ZTVN7android4ListIN11NSIspTuning17ISP_LCS_IN_INFO_TEEE */
/* Demangled: vtable for android::List<NSIspTuning::ISP_LCS_IN_INFO_T> */
extern void* _ZTVN7android4ListIN11NSIspTuning17ISP_LCS_IN_INFO_TEEE;

/* Symbol: _ZN6LcsHal14CreateInstanceEPKcRKj */
/* Demangled: LcsHal::CreateInstance(char const*, unsigned int const&) */
int _ZN6LcsHal14CreateInstanceEPKcRKj(void);

/* Symbol: _ZN9LcsHalImpD0Ev */
/* Demangled: LcsHalImp::~LcsHalImp() */
int _ZN9LcsHalImpD0Ev(void);

/* Symbol: _ZN9LcsHalObjILj3EE10spInstanceE */
/* Demangled: LcsHalObj<3u>::spInstance */
extern void* _ZN9LcsHalObjILj3EE10spInstanceE;

/* Symbol: _ZTV14LcsHalCallBack */
/* Demangled: vtable for LcsHalCallBack */
extern void* _ZTV14LcsHalCallBack;

/* Symbol: _ZN9LcsDrvImp16GetLCSInputDimenERjS0_ */
/* Demangled: LcsDrvImp::GetLCSInputDimen(unsigned int&, unsigned int&) */
int _ZN9LcsDrvImp16GetLCSInputDimenERjS0_(void);

/* Symbol: _ZN9LcsDrvImp16updateLCSList_InEiRKN11NSIspTuning17ISP_LCS_IN_INFO_TE */
/* Demangled: LcsDrvImp::updateLCSList_In(int, NSIspTuning::ISP_LCS_IN_INFO_T const&) */
int _ZN9LcsDrvImp16updateLCSList_InEiRKN11NSIspTuning17ISP_LCS_IN_INFO_TE(void);

/* Symbol: _ZN9LcsHalImpC1ERKj */
/* Demangled: LcsHalImp::LcsHalImp(unsigned int const&) */
int _ZN9LcsHalImpC1ERKj(void);

/* Symbol: _ZN9LcsHalImpD1Ev */
/* Demangled: LcsHalImp::~LcsHalImp() */
int _ZN9LcsHalImpD1Ev(void);

/* Symbol: _ZN9LcsHalObjILj4EE10spInstanceE */
/* Demangled: LcsHalObj<4u>::spInstance */
extern void* _ZN9LcsHalObjILj4EE10spInstanceE;

/* Symbol: _ZN9LcsDrvImp20ConvertSensorDevTypeERKj */
/* Demangled: LcsDrvImp::ConvertSensorDevType(unsigned int const&) */
int _ZN9LcsDrvImp20ConvertSensorDevTypeERKj(void);

/* Symbol: _ZTVN7android4ListIN11NSIspTuning18ISP_LCS_OUT_INFO_TEEE */
/* Demangled: vtable for android::List<NSIspTuning::ISP_LCS_OUT_INFO_T> */
extern void* _ZTVN7android4ListIN11NSIspTuning18ISP_LCS_OUT_INFO_TEEE;

/* Symbol: _ZN9LcsHalImpC2ERKj */
/* Demangled: LcsHalImp::LcsHalImp(unsigned int const&) */
int _ZN9LcsHalImpC2ERKj(void);

/* Symbol: _ZN9LcsHalImpD2Ev */
/* Demangled: LcsHalImp::~LcsHalImp() */
int _ZN9LcsHalImpD2Ev(void);

/* Symbol: _ZN14LcsHalCallBackC1EPv */
/* Demangled: LcsHalCallBack::LcsHalCallBack(void*) */
int _ZN14LcsHalCallBackC1EPv(void);

/* Symbol: _ZN14LcsHalCallBackD0Ev */
/* Demangled: LcsHalCallBack::~LcsHalCallBack() */
int _ZN14LcsHalCallBackD0Ev(void);

/* Symbol: _ZN9LcsHalImp12ConfigLcsHalERK14LCS_HAL_CONFIG */
/* Demangled: LcsHalImp::ConfigLcsHal(LCS_HAL_CONFIG const&) */
int _ZN9LcsHalImp12ConfigLcsHalERK14LCS_HAL_CONFIG(void);

/* Symbol: _ZN9LcsDrvImp9ConfigLcsEv */
/* Demangled: LcsDrvImp::ConfigLcs() */
int _ZN9LcsDrvImp9ConfigLcsEv(void);

/* Symbol: _ZTV9LcsDrvImp */
/* Demangled: vtable for LcsDrvImp */
extern void* _ZTV9LcsDrvImp;

/* Symbol: _ZN14LcsHalCallBackC2EPv */
/* Demangled: LcsHalCallBack::LcsHalCallBack(void*) */
int _ZN14LcsHalCallBackC2EPv(void);

/* Symbol: _ZN14LcsHalCallBackD1Ev */
/* Demangled: LcsHalCallBack::~LcsHalCallBack() */
int _ZN14LcsHalCallBackD1Ev(void);

/* Symbol: _ZN9LcsHalImp11GetInstanceERKj */
/* Demangled: LcsHalImp::GetInstance(unsigned int const&) */
int _ZN9LcsHalImp11GetInstanceERKj(void);

/* Symbol: _ZN9LcsHalImp4InitEv */
/* Demangled: LcsHalImp::Init() */
int _ZN9LcsHalImp4InitEv(void);

/* Symbol: _ZN14LcsHalCallBackD2Ev */
/* Demangled: LcsHalCallBack::~LcsHalCallBack() */
int _ZN14LcsHalCallBackD2Ev(void);

/* Symbol: _ZN9LcsHalImp14Set_LcsInParamEil */
/* Demangled: LcsHalImp::Set_LcsInParam(int, long) */
int _ZN9LcsHalImp14Set_LcsInParamEil(void);

/* Symbol: _ZN9LcsHalImp16ConvertCameraVerERK19LCS_CAMERA_VER_ENUM */
/* Demangled: LcsHalImp::ConvertCameraVer(LCS_CAMERA_VER_ENUM const&) */
int _ZN9LcsHalImp16ConvertCameraVerERK19LCS_CAMERA_VER_ENUM(void);

/* Symbol: _ZN9LcsDrvImp19ConvertSensorTgTypeERKj */
/* Demangled: LcsDrvImp::ConvertSensorTgType(unsigned int const&) */
int _ZN9LcsDrvImp19ConvertSensorTgTypeERKj(void);

/* Symbol: _ZTV7LcsP1Cb */
/* Demangled: vtable for LcsP1Cb */
extern void* _ZTV7LcsP1Cb;

/* Symbol: _ZN9LcsHalImp13GetSensorInfoEv */
/* Demangled: LcsHalImp::GetSensorInfo() */
int _ZN9LcsHalImp13GetSensorInfoEv(void);

/* Symbol: _ZN9LcsDrvImp22getTuningSensorDevTypeEv */
/* Demangled: LcsDrvImp::getTuningSensorDevType() */
int _ZN9LcsDrvImp22getTuningSensorDevTypeEv(void);

/* Symbol: _ZN9LcsDrvImp15DestroyInstanceEv */
/* Demangled: LcsDrvImp::DestroyInstance() */
int _ZN9LcsDrvImp15DestroyInstanceEv(void);

/* Symbol: _ZN9LcsDrvImpC1ERKj */
/* Demangled: LcsDrvImp::LcsDrvImp(unsigned int const&) */
int _ZN9LcsDrvImpC1ERKj(void);

/* Symbol: _ZN14LcsHalCallBack10doNotifyCbEilll */
/* Demangled: LcsHalCallBack::doNotifyCb(int, long, long, long) */
int _ZN14LcsHalCallBack10doNotifyCbEilll(void);

/* Symbol: _ZN6LcsDrv14CreateInstanceERKj */
/* Demangled: LcsDrv::CreateInstance(unsigned int const&) */
int _ZN6LcsDrv14CreateInstanceERKj(void);

/* Symbol: _ZN7LcsP1CbC1EPv */
/* Demangled: LcsP1Cb::LcsP1Cb(void*) */
int _ZN7LcsP1CbC1EPv(void);

/* Symbol: _ZN7LcsP1CbD0Ev */
/* Demangled: LcsP1Cb::~LcsP1Cb() */
int _ZN7LcsP1CbD0Ev(void);

/* Symbol: _ZN9LcsDrvImpC2ERKj */
/* Demangled: LcsDrvImp::LcsDrvImp(unsigned int const&) */
int _ZN9LcsDrvImpC2ERKj(void);

/* Symbol: _ZN9LcsHalImp15DestroyInstanceEPKc */
/* Demangled: LcsHalImp::DestroyInstance(char const*) */
int _ZN9LcsHalImp15DestroyInstanceEPKc(void);

/* Symbol: _ZN9LcsHalImp6UninitEv */
/* Demangled: LcsHalImp::Uninit() */
int _ZN9LcsHalImp6UninitEv(void);

/* Symbol: _ZN9LcsHalObjILj0EE11s_instMutexE */
/* Demangled: LcsHalObj<0u>::s_instMutex */
extern void* _ZN9LcsHalObjILj0EE11s_instMutexE;

/* Symbol: _ZN7LcsP1CbC2EPv */
/* Demangled: LcsP1Cb::LcsP1Cb(void*) */
int _ZN7LcsP1CbC2EPv(void);

/* Symbol: _ZN7LcsP1CbD1Ev */
/* Demangled: LcsP1Cb::~LcsP1Cb() */
int _ZN7LcsP1CbD1Ev(void);

/* Symbol: _ZN9LcsHalObjILj1EE11s_instMutexE */
/* Demangled: LcsHalObj<1u>::s_instMutex */
extern void* _ZN9LcsHalObjILj1EE11s_instMutexE;

/* Symbol: _ZN7LcsP1Cb14p1TuningNotifyEPvS0_ */
/* Demangled: LcsP1Cb::p1TuningNotify(void*, void*) */
int _ZN7LcsP1Cb14p1TuningNotifyEPvS0_(void);

/* Symbol: _ZN7LcsP1CbD2Ev */
/* Demangled: LcsP1Cb::~LcsP1Cb() */
int _ZN7LcsP1CbD2Ev(void);

/* Symbol: _ZN9LcsDrvImp11GetInstanceERKj */
/* Demangled: LcsDrvImp::GetInstance(unsigned int const&) */
int _ZN9LcsDrvImp11GetInstanceERKj(void);

/* Symbol: _ZN9LcsDrvImp4InitEv */
/* Demangled: LcsDrvImp::Init() */
int _ZN9LcsDrvImp4InitEv(void);

/* Symbol: _ZN9LcsHalObjILj2EE11s_instMutexE */
/* Demangled: LcsHalObj<2u>::s_instMutex */
extern void* _ZN9LcsHalObjILj2EE11s_instMutexE;

/* Symbol: _ZTV9LcsHalObjILj0EE */
/* Demangled: vtable for LcsHalObj<0u> */
extern void* _ZTV9LcsHalObjILj0EE;

/* Symbol: _ZN9LcsHalObjILj3EE11s_instMutexE */
/* Demangled: LcsHalObj<3u>::s_instMutex */
extern void* _ZN9LcsHalObjILj3EE11s_instMutexE;

/* Symbol: _ZTV9LcsHalObjILj1EE */
/* Demangled: vtable for LcsHalObj<1u> */
extern void* _ZTV9LcsHalObjILj1EE;

/* Symbol: _ZN9LcsDrvImp13SetSensorInfoERKjS1_ */
/* Demangled: LcsDrvImp::SetSensorInfo(unsigned int const&, unsigned int const&) */
int _ZN9LcsDrvImp13SetSensorInfoERKjS1_(void);

/* Symbol: _ZN9LcsHalObjILj0EE10spInstanceE */
/* Demangled: LcsHalObj<0u>::spInstance */
extern void* _ZN9LcsHalObjILj0EE10spInstanceE;

/* Symbol: _ZN9LcsHalObjILj4EE11s_instMutexE */
/* Demangled: LcsHalObj<4u>::s_instMutex */
extern void* _ZN9LcsHalObjILj4EE11s_instMutexE;

/* Symbol: _ZTV9LcsHalImp */
/* Demangled: vtable for LcsHalImp */
extern void* _ZTV9LcsHalImp;

/* Symbol: _ZTV9LcsHalObjILj2EE */
/* Demangled: vtable for LcsHalObj<2u> */
extern void* _ZTV9LcsHalObjILj2EE;

/* Symbol: _ZN9LcsDrvImp18getLCSList_info_InEi */
/* Demangled: LcsDrvImp::getLCSList_info_In(int) */
int _ZN9LcsDrvImp18getLCSList_info_InEi(void);

/* Symbol: _ZN9LcsHalObjILj1EE10spInstanceE */
/* Demangled: LcsHalObj<1u>::spInstance */
extern void* _ZN9LcsHalObjILj1EE10spInstanceE;

/* Symbol: _ZTV9LcsHalObjILj3EE */
/* Demangled: vtable for LcsHalObj<3u> */
extern void* _ZTV9LcsHalObjILj3EE;

__END_DECLS

#endif /* BEGONIA_RE_LIBCAM_LCS_H */

/*
 * Reverse-Engineered Source for: libcam.vhdr.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libcam_vhdr"

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
#include "libcam_vhdr.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: VHdrDrvImp::ConfigRmg_zvHDR(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10VHdrDrvImp15ConfigRmg_zvHDRERKj(void) {
    ALOGD("_ZN10VHdrDrvImp15ConfigRmg_zvHDRERKj() called");
    return 0;
}

/* Demangled: VHdrDrvImp::Init() */
extern "C" __attribute__((visibility("default"))) int _ZN10VHdrDrvImp4InitEv(void) {
    ALOGD("_ZN10VHdrDrvImp4InitEv() called");
    return 0;
}

/* Exported Object: VHdrHalObj<9u>::spInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN10VHdrHalObjILj9EE10spInstanceE = NULL;

/* Exported Object: VHdrHalObj<9u>::s_instMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN10VHdrHalObjILj9EE11s_instMutexE = NULL;

/* Demangled: VHdrHal::CreateInstance(char const*, unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7VHdrHal14CreateInstanceEPKcRKj(void) {
    ALOGD("_ZN7VHdrHal14CreateInstanceEPKcRKj() called");
    return 0;
}

/* Exported Object: VHdrHalObj<4u>::spInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN10VHdrHalObjILj4EE10spInstanceE = NULL;

/* Exported Object: VHdrHalObj<6u>::s_instMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN10VHdrHalObjILj6EE11s_instMutexE = NULL;

/* Demangled: VHdrHalImp::DestroyInstance(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN10VHdrHalImp15DestroyInstanceEPKc(void) {
    ALOGD("_ZN10VHdrHalImp15DestroyInstanceEPKc() called");
    return 0;
}

/* Exported Object: vtable for VHdrHalObj<4u> */
extern "C" __attribute__((visibility("default"))) void* _ZTV10VHdrHalObjILj4EE = NULL;

/* Exported Object: vtable for VHdrHalObj<9u> */
extern "C" __attribute__((visibility("default"))) void* _ZTV10VHdrHalObjILj9EE = NULL;

/* Demangled: VHdrDrvImp::GetInstance(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10VHdrDrvImp11GetInstanceERKj(void) {
    ALOGD("_ZN10VHdrDrvImp11GetInstanceERKj() called");
    return 0;
}

/* Demangled: VHdrDrvImp::SetSensorInfo(unsigned int const&, unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10VHdrDrvImp13SetSensorInfoERKjS1_(void) {
    ALOGD("_ZN10VHdrDrvImp13SetSensorInfoERKjS1_() called");
    return 0;
}

/* Exported Object: VHdrHalObj<3u>::s_instMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN10VHdrHalObjILj3EE11s_instMutexE = NULL;

/* Exported Object: VHdrHalObj<8u>::spInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN10VHdrHalObjILj8EE10spInstanceE = NULL;

/* Demangled: VHdrHalImp::~VHdrHalImp() */
extern "C" __attribute__((visibility("default"))) int _ZN10VHdrHalImpD1Ev(void) {
    ALOGD("_ZN10VHdrHalImpD1Ev() called");
    return 0;
}

/* Exported Object: VHdrHalObj<3u>::spInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN10VHdrHalObjILj3EE10spInstanceE = NULL;

/* Demangled: VHdrDrvImp::ConfigRmg_ivHDR(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10VHdrDrvImp15ConfigRmg_ivHDRERKj(void) {
    ALOGD("_ZN10VHdrDrvImp15ConfigRmg_ivHDRERKj() called");
    return 0;
}

/* Exported Object: VHdrHalObj<0u>::s_instMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN10VHdrHalObjILj0EE11s_instMutexE = NULL;

/* Exported Object: vtable for VHdrHalObj<1u> */
extern "C" __attribute__((visibility("default"))) void* _ZTV10VHdrHalObjILj1EE = NULL;

/* Exported Object: vtable for VHdrHalObj<6u> */
extern "C" __attribute__((visibility("default"))) void* _ZTV10VHdrHalObjILj6EE = NULL;

/* Demangled: VHdrDrvImp::VHdrDrvImp(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10VHdrDrvImpC1ERKj(void) {
    ALOGD("_ZN10VHdrDrvImpC1ERKj() called");
    return 0;
}

/* Exported Object: VHdrHalObj<7u>::spInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN10VHdrHalObjILj7EE10spInstanceE = NULL;

/* Exported Object: VHdrHalObj<7u>::s_instMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN10VHdrHalObjILj7EE11s_instMutexE = NULL;

/* Demangled: VHdrDrv::CreateInstance(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7VHdrDrv14CreateInstanceERKj(void) {
    ALOGD("_ZN7VHdrDrv14CreateInstanceERKj() called");
    return 0;
}

/* Demangled: VHdrHalImp::Init(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10VHdrHalImp4InitERKj(void) {
    ALOGD("_ZN10VHdrHalImp4InitERKj() called");
    return 0;
}

/* Demangled: VHdrHalImp::VHdrHalImp(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10VHdrHalImpC1ERKj(void) {
    ALOGD("_ZN10VHdrHalImpC1ERKj() called");
    return 0;
}

/* Exported Object: VHdrHalObj<2u>::spInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN10VHdrHalObjILj2EE10spInstanceE = NULL;

/* Exported Object: VHdrHalObj<4u>::s_instMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN10VHdrHalObjILj4EE11s_instMutexE = NULL;

/* Demangled: VHdrDrvImp::EnableRmg(int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10VHdrDrvImp9EnableRmgERKi(void) {
    ALOGD("_ZN10VHdrDrvImp9EnableRmgERKi() called");
    return 0;
}

/* Exported Object: vtable for VHdrHalObj<3u> */
extern "C" __attribute__((visibility("default"))) void* _ZTV10VHdrHalObjILj3EE = NULL;

/* Exported Object: vtable for VHdrHalObj<8u> */
extern "C" __attribute__((visibility("default"))) void* _ZTV10VHdrHalObjILj8EE = NULL;

/* Exported Object: vtable for VHdrDrvImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV10VHdrDrvImp = NULL;

/* Demangled: VHdrHalImp::GetInstance(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10VHdrHalImp11GetInstanceERKj(void) {
    ALOGD("_ZN10VHdrHalImp11GetInstanceERKj() called");
    return 0;
}

/* Demangled: VHdrHalImp::ConvertCameraVer(VHDR_CAMERA_VER_ENUM const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10VHdrHalImp16ConvertCameraVerERK20VHDR_CAMERA_VER_ENUM(void) {
    ALOGD("_ZN10VHdrHalImp16ConvertCameraVerERK20VHDR_CAMERA_VER_ENUM() called");
    return 0;
}

/* Exported Object: VHdrHalObj<1u>::s_instMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN10VHdrHalObjILj1EE11s_instMutexE = NULL;

/* Exported Object: VHdrHalObj<6u>::spInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN10VHdrHalObjILj6EE10spInstanceE = NULL;

/* Exported Object: vtable for VHdrHalImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV10VHdrHalImp = NULL;

/* Demangled: VHdrHalImp::Uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN10VHdrHalImp6UninitEv(void) {
    ALOGD("_ZN10VHdrHalImp6UninitEv() called");
    return 0;
}

/* Demangled: VHdrHalImp::~VHdrHalImp() */
extern "C" __attribute__((visibility("default"))) int _ZN10VHdrHalImpD0Ev(void) {
    ALOGD("_ZN10VHdrHalImpD0Ev() called");
    return 0;
}

/* Exported Object: VHdrHalObj<1u>::spInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN10VHdrHalObjILj1EE10spInstanceE = NULL;

/* Exported Object: VHdrHalObj<8u>::s_instMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN10VHdrHalObjILj8EE11s_instMutexE = NULL;

/* Demangled: VHdrDrvImp::ConfigCpnDcpn_zvHDR() */
extern "C" __attribute__((visibility("default"))) int _ZN10VHdrDrvImp19ConfigCpnDcpn_zvHDREv(void) {
    ALOGD("_ZN10VHdrDrvImp19ConfigCpnDcpn_zvHDREv() called");
    return 0;
}

/* Demangled: VHdrHalImp::ConfigVHdr(VHDR_HAL_CONFIG const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10VHdrHalImp10ConfigVHdrERK15VHDR_HAL_CONFIG(void) {
    ALOGD("_ZN10VHdrHalImp10ConfigVHdrERK15VHDR_HAL_CONFIG() called");
    return 0;
}

/* Demangled: VHdrHalImp::getCurrentAEMode(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10VHdrHalImp16getCurrentAEModeEj(void) {
    ALOGD("_ZN10VHdrHalImp16getCurrentAEModeEj() called");
    return 0;
}

/* Exported Object: vtable for VHdrHalObj<0u> */
extern "C" __attribute__((visibility("default"))) void* _ZTV10VHdrHalObjILj0EE = NULL;

/* Exported Object: vtable for VHdrHalObj<5u> */
extern "C" __attribute__((visibility("default"))) void* _ZTV10VHdrHalObjILj5EE = NULL;

/* Demangled: VHdrDrvImp::DestroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN10VHdrDrvImp15DestroyInstanceEv(void) {
    ALOGD("_ZN10VHdrDrvImp15DestroyInstanceEv() called");
    return 0;
}

/* Demangled: VHdrDrvImp::VHdrDrvImp(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10VHdrDrvImpC2ERKj(void) {
    ALOGD("_ZN10VHdrDrvImpC2ERKj() called");
    return 0;
}

/* Exported Object: VHdrHalObj<5u>::s_instMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN10VHdrHalObjILj5EE11s_instMutexE = NULL;

/* Demangled: VHdrDrvImp::Uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN10VHdrDrvImp6UninitEv(void) {
    ALOGD("_ZN10VHdrDrvImp6UninitEv() called");
    return 0;
}

/* Demangled: VHdrHalImp::SendCommand(VHDR_CMD, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10VHdrHalImp11SendCommandE8VHDR_CMDiii(void) {
    ALOGD("_ZN10VHdrHalImp11SendCommandE8VHDR_CMDiii() called");
    return 0;
}

/* Demangled: VHdrHalImp::isVhdrOn_IorZ() */
extern "C" __attribute__((visibility("default"))) int _ZN10VHdrHalImp13isVhdrOn_IorZEv(void) {
    ALOGD("_ZN10VHdrHalImp13isVhdrOn_IorZEv() called");
    return 0;
}

/* Demangled: VHdrHalImp::GetSensorStaticInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN10VHdrHalImp19GetSensorStaticInfoEv(void) {
    ALOGD("_ZN10VHdrHalImp19GetSensorStaticInfoEv() called");
    return 0;
}

/* Demangled: VHdrHalImp::VHdrHalImp(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10VHdrHalImpC2ERKj(void) {
    ALOGD("_ZN10VHdrHalImpC2ERKj() called");
    return 0;
}

/* Demangled: VHdrHalImp::~VHdrHalImp() */
extern "C" __attribute__((visibility("default"))) int _ZN10VHdrHalImpD2Ev(void) {
    ALOGD("_ZN10VHdrHalImpD2Ev() called");
    return 0;
}

/* Exported Object: VHdrHalObj<0u>::spInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN10VHdrHalObjILj0EE10spInstanceE = NULL;

/* Exported Object: VHdrHalObj<5u>::spInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN10VHdrHalObjILj5EE10spInstanceE = NULL;

/* Demangled: VHdrDrvImp::EnableRmm(int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10VHdrDrvImp9EnableRmmERKi(void) {
    ALOGD("_ZN10VHdrDrvImp9EnableRmmERKi() called");
    return 0;
}

/* Demangled: VHdrHalImp::GetSensorDynamicInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN10VHdrHalImp20GetSensorDynamicInfoEv(void) {
    ALOGD("_ZN10VHdrHalImp20GetSensorDynamicInfoEv() called");
    return 0;
}

/* Exported Object: VHdrHalObj<2u>::s_instMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN10VHdrHalObjILj2EE11s_instMutexE = NULL;

/* Exported Object: vtable for VHdrHalObj<2u> */
extern "C" __attribute__((visibility("default"))) void* _ZTV10VHdrHalObjILj2EE = NULL;

/* Exported Object: vtable for VHdrHalObj<7u> */
extern "C" __attribute__((visibility("default"))) void* _ZTV10VHdrHalObjILj7EE = NULL;

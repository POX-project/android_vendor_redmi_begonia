/*
 * Reverse-Engineered ABI Specification for: libcam.vhdr.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libcam.vhdr.so
 */

#ifndef BEGONIA_RE_LIBCAM_VHDR_H
#define BEGONIA_RE_LIBCAM_VHDR_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN10VHdrDrvImp15ConfigRmg_zvHDRERKj */
/* Demangled: VHdrDrvImp::ConfigRmg_zvHDR(unsigned int const&) */
int _ZN10VHdrDrvImp15ConfigRmg_zvHDRERKj(void);

/* Symbol: _ZN10VHdrDrvImp4InitEv */
/* Demangled: VHdrDrvImp::Init() */
int _ZN10VHdrDrvImp4InitEv(void);

/* Symbol: _ZN10VHdrHalObjILj9EE10spInstanceE */
/* Demangled: VHdrHalObj<9u>::spInstance */
extern void* _ZN10VHdrHalObjILj9EE10spInstanceE;

/* Symbol: _ZN10VHdrHalObjILj9EE11s_instMutexE */
/* Demangled: VHdrHalObj<9u>::s_instMutex */
extern void* _ZN10VHdrHalObjILj9EE11s_instMutexE;

/* Symbol: _ZN7VHdrHal14CreateInstanceEPKcRKj */
/* Demangled: VHdrHal::CreateInstance(char const*, unsigned int const&) */
int _ZN7VHdrHal14CreateInstanceEPKcRKj(void);

/* Symbol: _ZN10VHdrHalObjILj4EE10spInstanceE */
/* Demangled: VHdrHalObj<4u>::spInstance */
extern void* _ZN10VHdrHalObjILj4EE10spInstanceE;

/* Symbol: _ZN10VHdrHalObjILj6EE11s_instMutexE */
/* Demangled: VHdrHalObj<6u>::s_instMutex */
extern void* _ZN10VHdrHalObjILj6EE11s_instMutexE;

/* Symbol: _ZN10VHdrHalImp15DestroyInstanceEPKc */
/* Demangled: VHdrHalImp::DestroyInstance(char const*) */
int _ZN10VHdrHalImp15DestroyInstanceEPKc(void);

/* Symbol: _ZTV10VHdrHalObjILj4EE */
/* Demangled: vtable for VHdrHalObj<4u> */
extern void* _ZTV10VHdrHalObjILj4EE;

/* Symbol: _ZTV10VHdrHalObjILj9EE */
/* Demangled: vtable for VHdrHalObj<9u> */
extern void* _ZTV10VHdrHalObjILj9EE;

/* Symbol: _ZN10VHdrDrvImp11GetInstanceERKj */
/* Demangled: VHdrDrvImp::GetInstance(unsigned int const&) */
int _ZN10VHdrDrvImp11GetInstanceERKj(void);

/* Symbol: _ZN10VHdrDrvImp13SetSensorInfoERKjS1_ */
/* Demangled: VHdrDrvImp::SetSensorInfo(unsigned int const&, unsigned int const&) */
int _ZN10VHdrDrvImp13SetSensorInfoERKjS1_(void);

/* Symbol: _ZN10VHdrHalObjILj3EE11s_instMutexE */
/* Demangled: VHdrHalObj<3u>::s_instMutex */
extern void* _ZN10VHdrHalObjILj3EE11s_instMutexE;

/* Symbol: _ZN10VHdrHalObjILj8EE10spInstanceE */
/* Demangled: VHdrHalObj<8u>::spInstance */
extern void* _ZN10VHdrHalObjILj8EE10spInstanceE;

/* Symbol: _ZN10VHdrHalImpD1Ev */
/* Demangled: VHdrHalImp::~VHdrHalImp() */
int _ZN10VHdrHalImpD1Ev(void);

/* Symbol: _ZN10VHdrHalObjILj3EE10spInstanceE */
/* Demangled: VHdrHalObj<3u>::spInstance */
extern void* _ZN10VHdrHalObjILj3EE10spInstanceE;

/* Symbol: _ZN10VHdrDrvImp15ConfigRmg_ivHDRERKj */
/* Demangled: VHdrDrvImp::ConfigRmg_ivHDR(unsigned int const&) */
int _ZN10VHdrDrvImp15ConfigRmg_ivHDRERKj(void);

/* Symbol: _ZN10VHdrHalObjILj0EE11s_instMutexE */
/* Demangled: VHdrHalObj<0u>::s_instMutex */
extern void* _ZN10VHdrHalObjILj0EE11s_instMutexE;

/* Symbol: _ZTV10VHdrHalObjILj1EE */
/* Demangled: vtable for VHdrHalObj<1u> */
extern void* _ZTV10VHdrHalObjILj1EE;

/* Symbol: _ZTV10VHdrHalObjILj6EE */
/* Demangled: vtable for VHdrHalObj<6u> */
extern void* _ZTV10VHdrHalObjILj6EE;

/* Symbol: _ZN10VHdrDrvImpC1ERKj */
/* Demangled: VHdrDrvImp::VHdrDrvImp(unsigned int const&) */
int _ZN10VHdrDrvImpC1ERKj(void);

/* Symbol: _ZN10VHdrHalObjILj7EE10spInstanceE */
/* Demangled: VHdrHalObj<7u>::spInstance */
extern void* _ZN10VHdrHalObjILj7EE10spInstanceE;

/* Symbol: _ZN10VHdrHalObjILj7EE11s_instMutexE */
/* Demangled: VHdrHalObj<7u>::s_instMutex */
extern void* _ZN10VHdrHalObjILj7EE11s_instMutexE;

/* Symbol: _ZN7VHdrDrv14CreateInstanceERKj */
/* Demangled: VHdrDrv::CreateInstance(unsigned int const&) */
int _ZN7VHdrDrv14CreateInstanceERKj(void);

/* Symbol: _ZN10VHdrHalImp4InitERKj */
/* Demangled: VHdrHalImp::Init(unsigned int const&) */
int _ZN10VHdrHalImp4InitERKj(void);

/* Symbol: _ZN10VHdrHalImpC1ERKj */
/* Demangled: VHdrHalImp::VHdrHalImp(unsigned int const&) */
int _ZN10VHdrHalImpC1ERKj(void);

/* Symbol: _ZN10VHdrHalObjILj2EE10spInstanceE */
/* Demangled: VHdrHalObj<2u>::spInstance */
extern void* _ZN10VHdrHalObjILj2EE10spInstanceE;

/* Symbol: _ZN10VHdrHalObjILj4EE11s_instMutexE */
/* Demangled: VHdrHalObj<4u>::s_instMutex */
extern void* _ZN10VHdrHalObjILj4EE11s_instMutexE;

/* Symbol: _ZN10VHdrDrvImp9EnableRmgERKi */
/* Demangled: VHdrDrvImp::EnableRmg(int const&) */
int _ZN10VHdrDrvImp9EnableRmgERKi(void);

/* Symbol: _ZTV10VHdrHalObjILj3EE */
/* Demangled: vtable for VHdrHalObj<3u> */
extern void* _ZTV10VHdrHalObjILj3EE;

/* Symbol: _ZTV10VHdrHalObjILj8EE */
/* Demangled: vtable for VHdrHalObj<8u> */
extern void* _ZTV10VHdrHalObjILj8EE;

/* Symbol: _ZTV10VHdrDrvImp */
/* Demangled: vtable for VHdrDrvImp */
extern void* _ZTV10VHdrDrvImp;

/* Symbol: _ZN10VHdrHalImp11GetInstanceERKj */
/* Demangled: VHdrHalImp::GetInstance(unsigned int const&) */
int _ZN10VHdrHalImp11GetInstanceERKj(void);

/* Symbol: _ZN10VHdrHalImp16ConvertCameraVerERK20VHDR_CAMERA_VER_ENUM */
/* Demangled: VHdrHalImp::ConvertCameraVer(VHDR_CAMERA_VER_ENUM const&) */
int _ZN10VHdrHalImp16ConvertCameraVerERK20VHDR_CAMERA_VER_ENUM(void);

/* Symbol: _ZN10VHdrHalObjILj1EE11s_instMutexE */
/* Demangled: VHdrHalObj<1u>::s_instMutex */
extern void* _ZN10VHdrHalObjILj1EE11s_instMutexE;

/* Symbol: _ZN10VHdrHalObjILj6EE10spInstanceE */
/* Demangled: VHdrHalObj<6u>::spInstance */
extern void* _ZN10VHdrHalObjILj6EE10spInstanceE;

/* Symbol: _ZTV10VHdrHalImp */
/* Demangled: vtable for VHdrHalImp */
extern void* _ZTV10VHdrHalImp;

/* Symbol: _ZN10VHdrHalImp6UninitEv */
/* Demangled: VHdrHalImp::Uninit() */
int _ZN10VHdrHalImp6UninitEv(void);

/* Symbol: _ZN10VHdrHalImpD0Ev */
/* Demangled: VHdrHalImp::~VHdrHalImp() */
int _ZN10VHdrHalImpD0Ev(void);

/* Symbol: _ZN10VHdrHalObjILj1EE10spInstanceE */
/* Demangled: VHdrHalObj<1u>::spInstance */
extern void* _ZN10VHdrHalObjILj1EE10spInstanceE;

/* Symbol: _ZN10VHdrHalObjILj8EE11s_instMutexE */
/* Demangled: VHdrHalObj<8u>::s_instMutex */
extern void* _ZN10VHdrHalObjILj8EE11s_instMutexE;

/* Symbol: _ZN10VHdrDrvImp19ConfigCpnDcpn_zvHDREv */
/* Demangled: VHdrDrvImp::ConfigCpnDcpn_zvHDR() */
int _ZN10VHdrDrvImp19ConfigCpnDcpn_zvHDREv(void);

/* Symbol: _ZN10VHdrHalImp10ConfigVHdrERK15VHDR_HAL_CONFIG */
/* Demangled: VHdrHalImp::ConfigVHdr(VHDR_HAL_CONFIG const&) */
int _ZN10VHdrHalImp10ConfigVHdrERK15VHDR_HAL_CONFIG(void);

/* Symbol: _ZN10VHdrHalImp16getCurrentAEModeEj */
/* Demangled: VHdrHalImp::getCurrentAEMode(unsigned int) */
int _ZN10VHdrHalImp16getCurrentAEModeEj(void);

/* Symbol: _ZTV10VHdrHalObjILj0EE */
/* Demangled: vtable for VHdrHalObj<0u> */
extern void* _ZTV10VHdrHalObjILj0EE;

/* Symbol: _ZTV10VHdrHalObjILj5EE */
/* Demangled: vtable for VHdrHalObj<5u> */
extern void* _ZTV10VHdrHalObjILj5EE;

/* Symbol: _ZN10VHdrDrvImp15DestroyInstanceEv */
/* Demangled: VHdrDrvImp::DestroyInstance() */
int _ZN10VHdrDrvImp15DestroyInstanceEv(void);

/* Symbol: _ZN10VHdrDrvImpC2ERKj */
/* Demangled: VHdrDrvImp::VHdrDrvImp(unsigned int const&) */
int _ZN10VHdrDrvImpC2ERKj(void);

/* Symbol: _ZN10VHdrHalObjILj5EE11s_instMutexE */
/* Demangled: VHdrHalObj<5u>::s_instMutex */
extern void* _ZN10VHdrHalObjILj5EE11s_instMutexE;

/* Symbol: _ZN10VHdrDrvImp6UninitEv */
/* Demangled: VHdrDrvImp::Uninit() */
int _ZN10VHdrDrvImp6UninitEv(void);

/* Symbol: _ZN10VHdrHalImp11SendCommandE8VHDR_CMDiii */
/* Demangled: VHdrHalImp::SendCommand(VHDR_CMD, int, int, int) */
int _ZN10VHdrHalImp11SendCommandE8VHDR_CMDiii(void);

/* Symbol: _ZN10VHdrHalImp13isVhdrOn_IorZEv */
/* Demangled: VHdrHalImp::isVhdrOn_IorZ() */
int _ZN10VHdrHalImp13isVhdrOn_IorZEv(void);

/* Symbol: _ZN10VHdrHalImp19GetSensorStaticInfoEv */
/* Demangled: VHdrHalImp::GetSensorStaticInfo() */
int _ZN10VHdrHalImp19GetSensorStaticInfoEv(void);

/* Symbol: _ZN10VHdrHalImpC2ERKj */
/* Demangled: VHdrHalImp::VHdrHalImp(unsigned int const&) */
int _ZN10VHdrHalImpC2ERKj(void);

/* Symbol: _ZN10VHdrHalImpD2Ev */
/* Demangled: VHdrHalImp::~VHdrHalImp() */
int _ZN10VHdrHalImpD2Ev(void);

/* Symbol: _ZN10VHdrHalObjILj0EE10spInstanceE */
/* Demangled: VHdrHalObj<0u>::spInstance */
extern void* _ZN10VHdrHalObjILj0EE10spInstanceE;

/* Symbol: _ZN10VHdrHalObjILj5EE10spInstanceE */
/* Demangled: VHdrHalObj<5u>::spInstance */
extern void* _ZN10VHdrHalObjILj5EE10spInstanceE;

/* Symbol: _ZN10VHdrDrvImp9EnableRmmERKi */
/* Demangled: VHdrDrvImp::EnableRmm(int const&) */
int _ZN10VHdrDrvImp9EnableRmmERKi(void);

/* Symbol: _ZN10VHdrHalImp20GetSensorDynamicInfoEv */
/* Demangled: VHdrHalImp::GetSensorDynamicInfo() */
int _ZN10VHdrHalImp20GetSensorDynamicInfoEv(void);

/* Symbol: _ZN10VHdrHalObjILj2EE11s_instMutexE */
/* Demangled: VHdrHalObj<2u>::s_instMutex */
extern void* _ZN10VHdrHalObjILj2EE11s_instMutexE;

/* Symbol: _ZTV10VHdrHalObjILj2EE */
/* Demangled: vtable for VHdrHalObj<2u> */
extern void* _ZTV10VHdrHalObjILj2EE;

/* Symbol: _ZTV10VHdrHalObjILj7EE */
/* Demangled: vtable for VHdrHalObj<7u> */
extern void* _ZTV10VHdrHalObjILj7EE;

__END_DECLS

#endif /* BEGONIA_RE_LIBCAM_VHDR_H */

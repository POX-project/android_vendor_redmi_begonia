/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.camera.lomoeffect@1.0-impl.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.mediatek.hardware.camera.lomoeffect@1.0-impl.so
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_CAMERA_LOMOEFFECT_1_0_IMPL_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_CAMERA_LOMOEFFECT_1_0_IMPL_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffect17allocLomoDstImageEjiRKN7android8hardware10hidl_arrayIjLm3EJEEERKNS8_11hidl_handleE */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::implementation::LomoEffect::allocLomoDstImage(unsigned int, int, android::hardware::hidl_array<unsigned int, 3ul> const&, android::hardware::hidl_handle const&) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffect17allocLomoDstImageEjiRKN7android8hardware10hidl_arrayIjLm3EJEEERKNS8_11hidl_handleE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation11LomoIonInfoC1Ev */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::implementation::LomoIonInfo::LomoIonInfo() */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation11LomoIonInfoC1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffect13dlopenLomoHalEv */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::implementation::LomoEffect::dlopenLomoHal() */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffect13dlopenLomoHalEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffect6uninitEv */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::implementation::LomoEffect::uninit() */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffect6uninitEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation11LomoIonInfoD2Ev */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::implementation::LomoIonInfo::~LomoIonInfo() */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation11LomoIonInfoD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffect14lomoImageDequeEjRKN7android8hardware10hidl_arrayIjLm3EJEEEi */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::implementation::LomoEffect::lomoImageDeque(unsigned int, android::hardware::hidl_array<unsigned int, 3ul> const&, int) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffect14lomoImageDequeEjRKN7android8hardware10hidl_arrayIjLm3EJEEEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffect14lomoImageEnqueEjRKN7android8hardware10hidl_arrayIjLm3EJEEEi */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::implementation::LomoEffect::lomoImageEnque(unsigned int, android::hardware::hidl_array<unsigned int, 3ul> const&, int) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffect14lomoImageEnqueEjRKN7android8hardware10hidl_arrayIjLm3EJEEEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation11LomoIonInfo5resetEv */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::implementation::LomoIonInfo::reset() */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation11LomoIonInfo5resetEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation11LomoIonInfoD1Ev */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::implementation::LomoIonInfo::~LomoIonInfo() */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation11LomoIonInfoD1Ev(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffectE0_NS4_11ILomoEffectE */
/* Demangled: construction vtable for vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect-in-vendor::mediatek::hardware::camera::lomoeffect::V1_0::implementation::LomoEffect */
extern void* _ZTCN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffectE0_NS4_11ILomoEffectE;

/* Symbol: _ZTTN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffectE */
/* Demangled: VTT for vendor::mediatek::hardware::camera::lomoeffect::V1_0::implementation::LomoEffect */
extern void* _ZTTN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffectE;

/* Symbol: HIDL_FETCH_ILomoEffect */
/* Demangled: HIDL_FETCH_ILomoEffect */
int HIDL_FETCH_ILomoEffect(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffect16freeLomoDstImageEv */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::implementation::LomoEffect::freeLomoDstImage() */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffect16freeLomoDstImageEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffect4initEv */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::implementation::LomoEffect::init() */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffect4initEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation11LomoIonInfo7cleanupEi */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::implementation::LomoIonInfo::cleanup(int) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation11LomoIonInfo7cleanupEi(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffectE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::camera::lomoeffect::V1_0::implementation::LomoEffect */
extern void* _ZTCN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffectE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffectE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::lomoeffect::V1_0::implementation::LomoEffect */
extern void* _ZTVN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffectE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffect16freeLomoSrcImageEv */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::implementation::LomoEffect::freeLomoSrcImage() */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffect16freeLomoSrcImageEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffect17allocLomoSrcImageEjjjjj */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::implementation::LomoEffect::allocLomoSrcImage(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffect17allocLomoSrcImageEjjjjj(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffect18uploadLomoSrcImageERKN7android8hardware11hidl_handleERKNS8_10hidl_arrayIjLm3EJEEE */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::implementation::LomoEffect::uploadLomoSrcImage(android::hardware::hidl_handle const&, android::hardware::hidl_array<unsigned int, 3ul> const&) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation10LomoEffect18uploadLomoSrcImageERKN7android8hardware11hidl_handleERKNS8_10hidl_arrayIjLm3EJEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation11LomoIonInfo5printEii */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::implementation::LomoIonInfo::print(int, int) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation11LomoIonInfo5printEii(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation11LomoIonInfoC2Ev */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::implementation::LomoIonInfo::LomoIonInfo() */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014implementation11LomoIonInfoC2Ev(void);

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_CAMERA_LOMOEFFECT_1_0_IMPL_H */

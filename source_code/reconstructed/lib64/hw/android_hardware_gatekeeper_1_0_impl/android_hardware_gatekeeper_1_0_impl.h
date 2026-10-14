/*
 * Reverse-Engineered ABI Specification for: android.hardware.gatekeeper@1.0-impl.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: android.hardware.gatekeeper@1.0-impl.so
 */

#ifndef BEGONIA_RE_ANDROID_HARDWARE_GATEKEEPER_1_0_IMPL_H
#define BEGONIA_RE_ANDROID_HARDWARE_GATEKEEPER_1_0_IMPL_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: HIDL_FETCH_IGatekeeper */
/* Demangled: HIDL_FETCH_IGatekeeper */
int HIDL_FETCH_IGatekeeper(void);

/* Symbol: _ZN7android8hardware10gatekeeper4V1_014implementation10Gatekeeper6enrollEjRKNS0_8hidl_vecIhEES8_S8_NSt3__18functionIFvRKNS2_18GatekeeperResponseEEEE */
/* Demangled: android::hardware::gatekeeper::V1_0::implementation::Gatekeeper::enroll(unsigned int, android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (android::hardware::gatekeeper::V1_0::GatekeeperResponse const&)>) */
int _ZN7android8hardware10gatekeeper4V1_014implementation10Gatekeeper6enrollEjRKNS0_8hidl_vecIhEES8_S8_NSt3__18functionIFvRKNS2_18GatekeeperResponseEEEE(void);

/* Symbol: _ZN7android8hardware10gatekeeper4V1_014implementation10Gatekeeper6verifyEjmRKNS0_8hidl_vecIhEES8_NSt3__18functionIFvRKNS2_18GatekeeperResponseEEEE */
/* Demangled: android::hardware::gatekeeper::V1_0::implementation::Gatekeeper::verify(unsigned int, unsigned long, android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (android::hardware::gatekeeper::V1_0::GatekeeperResponse const&)>) */
int _ZN7android8hardware10gatekeeper4V1_014implementation10Gatekeeper6verifyEjmRKNS0_8hidl_vecIhEES8_NSt3__18functionIFvRKNS2_18GatekeeperResponseEEEE(void);

/* Symbol: _ZN7android8hardware10gatekeeper4V1_014implementation10GatekeeperD2Ev */
/* Demangled: android::hardware::gatekeeper::V1_0::implementation::Gatekeeper::~Gatekeeper() */
int _ZN7android8hardware10gatekeeper4V1_014implementation10GatekeeperD2Ev(void);

/* Symbol: _ZTTN7android8hardware10gatekeeper4V1_014implementation10GatekeeperE */
/* Demangled: VTT for android::hardware::gatekeeper::V1_0::implementation::Gatekeeper */
extern void* _ZTTN7android8hardware10gatekeeper4V1_014implementation10GatekeeperE;

/* Symbol: _ZN7android8hardware10gatekeeper4V1_014implementation10Gatekeeper14deleteAllUsersENSt3__18functionIFvRKNS2_18GatekeeperResponseEEEE */
/* Demangled: android::hardware::gatekeeper::V1_0::implementation::Gatekeeper::deleteAllUsers(std::__1::function<void (android::hardware::gatekeeper::V1_0::GatekeeperResponse const&)>) */
int _ZN7android8hardware10gatekeeper4V1_014implementation10Gatekeeper14deleteAllUsersENSt3__18functionIFvRKNS2_18GatekeeperResponseEEEE(void);

/* Symbol: _ZTCN7android8hardware10gatekeeper4V1_014implementation10GatekeeperE0_NS2_11IGatekeeperE */
/* Demangled: construction vtable for android::hardware::gatekeeper::V1_0::IGatekeeper-in-android::hardware::gatekeeper::V1_0::implementation::Gatekeeper */
extern void* _ZTCN7android8hardware10gatekeeper4V1_014implementation10GatekeeperE0_NS2_11IGatekeeperE;

/* Symbol: _ZN7android8hardware10gatekeeper4V1_014implementation10GatekeeperC1Ev */
/* Demangled: android::hardware::gatekeeper::V1_0::implementation::Gatekeeper::Gatekeeper() */
int _ZN7android8hardware10gatekeeper4V1_014implementation10GatekeeperC1Ev(void);

/* Symbol: _ZN7android8hardware10gatekeeper4V1_014implementation10GatekeeperD0Ev */
/* Demangled: android::hardware::gatekeeper::V1_0::implementation::Gatekeeper::~Gatekeeper() */
int _ZN7android8hardware10gatekeeper4V1_014implementation10GatekeeperD0Ev(void);

/* Symbol: _ZTCN7android8hardware10gatekeeper4V1_014implementation10GatekeeperE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::gatekeeper::V1_0::implementation::Gatekeeper */
extern void* _ZTCN7android8hardware10gatekeeper4V1_014implementation10GatekeeperE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZTVN7android8hardware10gatekeeper4V1_014implementation10GatekeeperE */
/* Demangled: vtable for android::hardware::gatekeeper::V1_0::implementation::Gatekeeper */
extern void* _ZTVN7android8hardware10gatekeeper4V1_014implementation10GatekeeperE;

/* Symbol: _ZTv0_n24_N7android8hardware10gatekeeper4V1_014implementation10GatekeeperD0Ev */
/* Demangled: virtual thunk to android::hardware::gatekeeper::V1_0::implementation::Gatekeeper::~Gatekeeper() */
int _ZTv0_n24_N7android8hardware10gatekeeper4V1_014implementation10GatekeeperD0Ev(void);

/* Symbol: _ZN7android8hardware10gatekeeper4V1_014implementation10Gatekeeper10deleteUserEjNSt3__18functionIFvRKNS2_18GatekeeperResponseEEEE */
/* Demangled: android::hardware::gatekeeper::V1_0::implementation::Gatekeeper::deleteUser(unsigned int, std::__1::function<void (android::hardware::gatekeeper::V1_0::GatekeeperResponse const&)>) */
int _ZN7android8hardware10gatekeeper4V1_014implementation10Gatekeeper10deleteUserEjNSt3__18functionIFvRKNS2_18GatekeeperResponseEEEE(void);

/* Symbol: _ZN7android8hardware10gatekeeper4V1_014implementation10GatekeeperC2Ev */
/* Demangled: android::hardware::gatekeeper::V1_0::implementation::Gatekeeper::Gatekeeper() */
int _ZN7android8hardware10gatekeeper4V1_014implementation10GatekeeperC2Ev(void);

/* Symbol: _ZN7android8hardware10gatekeeper4V1_014implementation10GatekeeperD1Ev */
/* Demangled: android::hardware::gatekeeper::V1_0::implementation::Gatekeeper::~Gatekeeper() */
int _ZN7android8hardware10gatekeeper4V1_014implementation10GatekeeperD1Ev(void);

/* Symbol: _ZTv0_n24_N7android8hardware10gatekeeper4V1_014implementation10GatekeeperD1Ev */
/* Demangled: virtual thunk to android::hardware::gatekeeper::V1_0::implementation::Gatekeeper::~Gatekeeper() */
int _ZTv0_n24_N7android8hardware10gatekeeper4V1_014implementation10GatekeeperD1Ev(void);

__END_DECLS

#endif /* BEGONIA_RE_ANDROID_HARDWARE_GATEKEEPER_1_0_IMPL_H */

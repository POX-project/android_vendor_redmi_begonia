/*
 * Reverse-Engineered Source for: android.hardware.gatekeeper@1.0-impl.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "android_hardware_gatekeeper_1_0_impl"

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
#include "android_hardware_gatekeeper_1_0_impl.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: HIDL_FETCH_IGatekeeper */
extern "C" __attribute__((visibility("default"))) int HIDL_FETCH_IGatekeeper(void) {
    ALOGD("HIDL_FETCH_IGatekeeper() called");
    return 0;
}

/* Demangled: android::hardware::gatekeeper::V1_0::implementation::Gatekeeper::enroll(unsigned int, android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (android::hardware::gatekeeper::V1_0::GatekeeperResponse const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware10gatekeeper4V1_014implementation10Gatekeeper6enrollEjRKNS0_8hidl_vecIhEES8_S8_NSt3__18functionIFvRKNS2_18GatekeeperResponseEEEE(void) {
    ALOGD("_ZN7android8hardware10gatekeeper4V1_014implementation10Gatekeeper6enrollEjRKNS0_8hidl_vecIhEES8_S8_NSt3__18functionIFvRKNS2_18GatekeeperResponseEEEE() called");
    return 0;
}

/* Demangled: android::hardware::gatekeeper::V1_0::implementation::Gatekeeper::verify(unsigned int, unsigned long, android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (android::hardware::gatekeeper::V1_0::GatekeeperResponse const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware10gatekeeper4V1_014implementation10Gatekeeper6verifyEjmRKNS0_8hidl_vecIhEES8_NSt3__18functionIFvRKNS2_18GatekeeperResponseEEEE(void) {
    ALOGD("_ZN7android8hardware10gatekeeper4V1_014implementation10Gatekeeper6verifyEjmRKNS0_8hidl_vecIhEES8_NSt3__18functionIFvRKNS2_18GatekeeperResponseEEEE() called");
    return 0;
}

/* Demangled: android::hardware::gatekeeper::V1_0::implementation::Gatekeeper::~Gatekeeper() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware10gatekeeper4V1_014implementation10GatekeeperD2Ev(void) {
    ALOGD("_ZN7android8hardware10gatekeeper4V1_014implementation10GatekeeperD2Ev() called");
    return 0;
}

/* Exported Object: VTT for android::hardware::gatekeeper::V1_0::implementation::Gatekeeper */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware10gatekeeper4V1_014implementation10GatekeeperE = NULL;

/* Demangled: android::hardware::gatekeeper::V1_0::implementation::Gatekeeper::deleteAllUsers(std::__1::function<void (android::hardware::gatekeeper::V1_0::GatekeeperResponse const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware10gatekeeper4V1_014implementation10Gatekeeper14deleteAllUsersENSt3__18functionIFvRKNS2_18GatekeeperResponseEEEE(void) {
    ALOGD("_ZN7android8hardware10gatekeeper4V1_014implementation10Gatekeeper14deleteAllUsersENSt3__18functionIFvRKNS2_18GatekeeperResponseEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::gatekeeper::V1_0::IGatekeeper-in-android::hardware::gatekeeper::V1_0::implementation::Gatekeeper */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware10gatekeeper4V1_014implementation10GatekeeperE0_NS2_11IGatekeeperE = NULL;

/* Demangled: android::hardware::gatekeeper::V1_0::implementation::Gatekeeper::Gatekeeper() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware10gatekeeper4V1_014implementation10GatekeeperC1Ev(void) {
    ALOGD("_ZN7android8hardware10gatekeeper4V1_014implementation10GatekeeperC1Ev() called");
    return 0;
}

/* Demangled: android::hardware::gatekeeper::V1_0::implementation::Gatekeeper::~Gatekeeper() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware10gatekeeper4V1_014implementation10GatekeeperD0Ev(void) {
    ALOGD("_ZN7android8hardware10gatekeeper4V1_014implementation10GatekeeperD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::gatekeeper::V1_0::implementation::Gatekeeper */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware10gatekeeper4V1_014implementation10GatekeeperE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: vtable for android::hardware::gatekeeper::V1_0::implementation::Gatekeeper */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware10gatekeeper4V1_014implementation10GatekeeperE = NULL;

/* Demangled: virtual thunk to android::hardware::gatekeeper::V1_0::implementation::Gatekeeper::~Gatekeeper() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android8hardware10gatekeeper4V1_014implementation10GatekeeperD0Ev(void) {
    ALOGD("_ZTv0_n24_N7android8hardware10gatekeeper4V1_014implementation10GatekeeperD0Ev() called");
    return 0;
}

/* Demangled: android::hardware::gatekeeper::V1_0::implementation::Gatekeeper::deleteUser(unsigned int, std::__1::function<void (android::hardware::gatekeeper::V1_0::GatekeeperResponse const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware10gatekeeper4V1_014implementation10Gatekeeper10deleteUserEjNSt3__18functionIFvRKNS2_18GatekeeperResponseEEEE(void) {
    ALOGD("_ZN7android8hardware10gatekeeper4V1_014implementation10Gatekeeper10deleteUserEjNSt3__18functionIFvRKNS2_18GatekeeperResponseEEEE() called");
    return 0;
}

/* Demangled: android::hardware::gatekeeper::V1_0::implementation::Gatekeeper::Gatekeeper() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware10gatekeeper4V1_014implementation10GatekeeperC2Ev(void) {
    ALOGD("_ZN7android8hardware10gatekeeper4V1_014implementation10GatekeeperC2Ev() called");
    return 0;
}

/* Demangled: android::hardware::gatekeeper::V1_0::implementation::Gatekeeper::~Gatekeeper() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware10gatekeeper4V1_014implementation10GatekeeperD1Ev(void) {
    ALOGD("_ZN7android8hardware10gatekeeper4V1_014implementation10GatekeeperD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to android::hardware::gatekeeper::V1_0::implementation::Gatekeeper::~Gatekeeper() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android8hardware10gatekeeper4V1_014implementation10GatekeeperD1Ev(void) {
    ALOGD("_ZTv0_n24_N7android8hardware10gatekeeper4V1_014implementation10GatekeeperD1Ev() called");
    return 0;
}

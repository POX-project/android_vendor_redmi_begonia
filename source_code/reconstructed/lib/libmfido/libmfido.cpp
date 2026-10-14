/*
 * Reverse-Engineered Source for: libmfido.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libmfido"

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
#include "libmfido.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::implementation::read16(unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation6read16EPKh(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation6read16EPKh() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::xiaomi::hardware::mfidoca::V1_0::IFidoService-in-vendor::xiaomi::hardware::mfidoca::V1_0::implementation::FidoService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware7mfidoca4V1_014implementation11FidoServiceE0_NS3_12IFidoServiceE = NULL;

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Exported Object: vendor::xiaomi::hardware::mfidoca::V1_0::implementation::FidoService::sInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation11FidoService9sInstanceE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::mfidoca::V1_0::implementation::FidoService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware7mfidoca4V1_014implementation11FidoServiceE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::implementation::FidoService::fido_key_get_version() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation11FidoService20fido_key_get_versionEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation11FidoService20fido_key_get_versionEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::implementation::FidoService::FidoService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation11FidoServiceC1Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation11FidoServiceC1Ev() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::implementation::FidoService::init_req_buffer(unsigned char const*, int, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation11FidoService15init_req_bufferEPKhiPh(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation11FidoService15init_req_bufferEPKhiPh() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::implementation::invoke_command(unsigned int, void*, unsigned int, void*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation14invoke_commandEjPvjS5_Pj(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation14invoke_commandEjPvjS5_Pj() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::implementation::FidoService::fido_authenticator_init() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation11FidoService23fido_authenticator_initEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation11FidoService23fido_authenticator_initEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::implementation::write16(unsigned char*, unsigned short) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation7write16EPht(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation7write16EPht() called");
    return 0;
}

/* Demangled: HIDL_FETCH_IFidoService */
extern "C" __attribute__((visibility("default"))) int HIDL_FETCH_IFidoService(void) {
    ALOGD("HIDL_FETCH_IFidoService() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::implementation::FidoService::fido_key_prepare(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation11FidoService16fido_key_prepareENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation11FidoService16fido_key_prepareENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::implementation::is_little_endian() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation16is_little_endianEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation16is_little_endianEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::implementation::read32(unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation6read32EPKh(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation6read32EPKh() called");
    return 0;
}

/* Exported Object: VTT for vendor::xiaomi::hardware::mfidoca::V1_0::implementation::FidoService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor6xiaomi8hardware7mfidoca4V1_014implementation11FidoServiceE = NULL;

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: printBuffer(unsigned char*, int) */
extern "C" __attribute__((visibility("default"))) int _Z11printBufferPhi(void) {
    ALOGD("_Z11printBufferPhi() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::implementation::FidoService::fido_key_load(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation11FidoService13fido_key_loadERKN7android8hardware11hidl_stringESA_(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation11FidoService13fido_key_loadERKN7android8hardware11hidl_stringESA_() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::implementation::FidoService::execute(android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation11FidoService7executeERKN7android8hardware8hidl_vecIhEEjNSt3__18functionIFvSB_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation11FidoService7executeERKN7android8hardware8hidl_vecIhEEjNSt3__18functionIFvSB_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::implementation::FidoService::FidoService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation11FidoServiceC2Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation11FidoServiceC2Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mfidoca::V1_0::implementation::write32(unsigned char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation7write32EPhj(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7mfidoca4V1_014implementation7write32EPhj() called");
    return 0;
}

/* Exported Object: vtable for vendor::xiaomi::hardware::mfidoca::V1_0::implementation::FidoService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware7mfidoca4V1_014implementation11FidoServiceE = NULL;

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

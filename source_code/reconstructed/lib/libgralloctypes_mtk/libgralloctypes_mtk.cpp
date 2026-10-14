/*
 * Reverse-Engineered Source for: libgralloctypes_mtk.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libgralloctypes_mtk"

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
#include "libgralloctypes_mtk.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: mediatek::gralloc4::decodeMtkYYY(android::hardware::hidl_vec<unsigned char> const&, mediatek::graphics::common::gm_yyy_info_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN8mediatek8gralloc412decodeMtkYYYERKN7android8hardware8hidl_vecIhEEPNS_8graphics6common13gm_yyy_info_tE(void) {
    ALOGD("_ZN8mediatek8gralloc412decodeMtkYYYERKN7android8hardware8hidl_vecIhEEPNS_8graphics6common13gm_yyy_info_tE() called");
    return 0;
}

/* Demangled: mediatek::gralloc4::getMtkMetadataTypeValue(android::hardware::graphics::mapper::V4_0::IMapper::MetadataType const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8mediatek8gralloc423getMtkMetadataTypeValueERKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeE(void) {
    ALOGD("_ZN8mediatek8gralloc423getMtkMetadataTypeValueERKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeE() called");
    return 0;
}

/* Demangled: std::__1::vector<mediatek::graphics::common::gm_yyy_info_t, std::__1::allocator<mediatek::graphics::common::gm_yyy_info_t> >::__append(unsigned int, mediatek::graphics::common::gm_yyy_info_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8mediatek8graphics6common13gm_yyy_info_tENS_9allocatorIS4_EEE8__appendEjRKS4_(void) {
    ALOGD("_ZNSt3__16vectorIN8mediatek8graphics6common13gm_yyy_info_tENS_9allocatorIS4_EEE8__appendEjRKS4_() called");
    return 0;
}

/* Demangled: std::__1::vector<mediatek::graphics::common::gm_zzz_info_t, std::__1::allocator<mediatek::graphics::common::gm_zzz_info_t> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8mediatek8graphics6common13gm_zzz_info_tENS_9allocatorIS4_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIN8mediatek8graphics6common13gm_zzz_info_tENS_9allocatorIS4_EEE8__appendEj() called");
    return 0;
}

/* Demangled: mediatek::gralloc4::encodeMtkXXX(unsigned long long const&, android::hardware::hidl_vec<unsigned char>*) */
extern "C" __attribute__((visibility("default"))) int _ZN8mediatek8gralloc412encodeMtkXXXERKyPN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN8mediatek8gralloc412encodeMtkXXXERKyPN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: std::__1::vector<mediatek::graphics::common::gm_yyy_info_t, std::__1::allocator<mediatek::graphics::common::gm_yyy_info_t> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8mediatek8graphics6common13gm_yyy_info_tENS_9allocatorIS4_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIN8mediatek8graphics6common13gm_yyy_info_tENS_9allocatorIS4_EEE8__appendEj() called");
    return 0;
}

/* Demangled: std::__1::vector<mediatek::graphics::common::gm_zzz_info_t, std::__1::allocator<mediatek::graphics::common::gm_zzz_info_t> >::__append(unsigned int, mediatek::graphics::common::gm_zzz_info_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8mediatek8graphics6common13gm_zzz_info_tENS_9allocatorIS4_EEE8__appendEjRKS4_(void) {
    ALOGD("_ZNSt3__16vectorIN8mediatek8graphics6common13gm_zzz_info_tENS_9allocatorIS4_EEE8__appendEjRKS4_() called");
    return 0;
}

/* Demangled: mediatek::gralloc4::decodeMtkXXX(android::hardware::hidl_vec<unsigned char> const&, unsigned long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN8mediatek8gralloc412decodeMtkXXXERKN7android8hardware8hidl_vecIhEEPy(void) {
    ALOGD("_ZN8mediatek8gralloc412decodeMtkXXXERKN7android8hardware8hidl_vecIhEEPy() called");
    return 0;
}

/* Demangled: mediatek::gralloc4::decodeMtkZZZ(android::hardware::hidl_vec<unsigned char> const&, mediatek::graphics::common::gm_zzz_info_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN8mediatek8gralloc412decodeMtkZZZERKN7android8hardware8hidl_vecIhEEPNS_8graphics6common13gm_zzz_info_tE(void) {
    ALOGD("_ZN8mediatek8gralloc412decodeMtkZZZERKN7android8hardware8hidl_vecIhEEPNS_8graphics6common13gm_zzz_info_tE() called");
    return 0;
}

/* Demangled: mediatek::gralloc4::encodeMtkYYY(mediatek::graphics::common::gm_yyy_info_t const&, android::hardware::hidl_vec<unsigned char>*) */
extern "C" __attribute__((visibility("default"))) int _ZN8mediatek8gralloc412encodeMtkYYYERKNS_8graphics6common13gm_yyy_info_tEPN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN8mediatek8gralloc412encodeMtkYYYERKNS_8graphics6common13gm_yyy_info_tEPN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: mediatek::gralloc4::encodeMtkZZZ(mediatek::graphics::common::gm_zzz_info_t const&, android::hardware::hidl_vec<unsigned char>*) */
extern "C" __attribute__((visibility("default"))) int _ZN8mediatek8gralloc412encodeMtkZZZERKNS_8graphics6common13gm_zzz_info_tEPN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN8mediatek8gralloc412encodeMtkZZZERKNS_8graphics6common13gm_zzz_info_tEPN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: mediatek::gralloc4::isMtkMetadataType(android::hardware::graphics::mapper::V4_0::IMapper::MetadataType const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8mediatek8gralloc417isMtkMetadataTypeERKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeE(void) {
    ALOGD("_ZN8mediatek8gralloc417isMtkMetadataTypeERKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeE() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIyNS_9allocatorIyEEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIyNS_9allocatorIyEEE8__appendEj() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> >::__append(unsigned int, unsigned long long const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIyNS_9allocatorIyEEE8__appendEjRKy(void) {
    ALOGD("_ZNSt3__16vectorIyNS_9allocatorIyEEE8__appendEjRKy() called");
    return 0;
}

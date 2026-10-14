/*
 * Reverse-Engineered Source for: libladder.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libladder"

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
#include "libladder.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: UnwindCurThreadBT */
extern "C" __attribute__((visibility("default"))) int UnwindCurThreadBT(void) {
    ALOGD("UnwindCurThreadBT() called");
    return 0;
}

/* Demangled: UnwindThreadBT */
extern "C" __attribute__((visibility("default"))) int UnwindThreadBT(void) {
    ALOGD("UnwindThreadBT() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::Unwinder */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack8UnwinderE = NULL;

/* Demangled: UnwindCurProcessBT */
extern "C" __attribute__((visibility("default"))) int UnwindCurProcessBT(void) {
    ALOGD("UnwindCurProcessBT() called");
    return 0;
}

/* Demangled: UnwindCurProcessBT_Vector */
extern "C" __attribute__((visibility("default"))) int UnwindCurProcessBT_Vector(void) {
    ALOGD("UnwindCurProcessBT_Vector() called");
    return 0;
}

/* Demangled: std::__1::vector<unwindstack::FrameData, std::__1::allocator<unwindstack::FrameData> >::reserve(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN11unwindstack9FrameDataENS_9allocatorIS2_EEE7reserveEj(void) {
    ALOGD("_ZNSt3__16vectorIN11unwindstack9FrameDataENS_9allocatorIS2_EEE7reserveEj() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_() called");
    return 0;
}

/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int const&>(int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::LocalMaps */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack9LocalMapsE = NULL;

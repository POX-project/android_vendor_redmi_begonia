/*
 * Reverse-Engineered Source for: vendor.xiaomi.hardware.misys@2.0-impl.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "vendor_xiaomi_hardware_misys_2_0_impl"

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
#include "vendor_xiaomi_hardware_misys_2_0_impl.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::xiaomi::hardware::misys::V2_0::implementation::MiSys::IsExists(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V2_014implementation5MiSys8IsExistsERKN7android8hardware11hidl_stringESA_(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V2_014implementation5MiSys8IsExistsERKN7android8hardware11hidl_stringESA_() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::sync() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::setbuf(char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::misys::V2_0::implementation::MiSys */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware5misys4V2_014implementation5MiSysE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_14basic_iostreamIcS2_EE = NULL;

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE8_NS_13basic_ostreamIcS2_EE = NULL;

/* Exported Object: vtable for std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: vendor::xiaomi::hardware::misys::V2_0::implementation::handlePath(android::hardware::hidl_string const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V2_014implementation10handlePathERKN7android8hardware11hidl_stringERNSt3__112basic_stringIcNSA_11char_traitsIcEENSA_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V2_014implementation10handlePathERKN7android8hardware11hidl_stringERNSt3__112basic_stringIcNSA_11char_traitsIcEENSA_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V2_0::implementation::MiSys::MiSysWriteBuffer(android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_vec<unsigned char> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V2_014implementation5MiSys16MiSysWriteBufferERKN7android8hardware11hidl_stringESA_RKNS7_8hidl_vecIhEEy(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V2_014implementation5MiSys16MiSysWriteBufferERKN7android8hardware11hidl_stringESA_RKNS7_8hidl_vecIhEEy() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V2_0::implementation::MiSys::MiSysCreateFolder(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V2_014implementation5MiSys17MiSysCreateFolderERKN7android8hardware11hidl_stringESA_(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V2_014implementation5MiSys17MiSysCreateFolderERKN7android8hardware11hidl_stringESA_() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekpos(std::__1::fpos<mbstate_t>, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: HIDL_FETCH_IMiSys */
extern "C" __attribute__((visibility("default"))) int HIDL_FETCH_IMiSys(void) {
    ALOGD("HIDL_FETCH_IMiSys() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::imbue(std::__1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::xiaomi::hardware::misys::V2_0::IMiSys-in-vendor::xiaomi::hardware::misys::V2_0::implementation::MiSys */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware5misys4V2_014implementation5MiSysE0_NS3_6IMiSysE = NULL;

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Exported Object: VTT for vendor::xiaomi::hardware::misys::V2_0::implementation::MiSys */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor6xiaomi8hardware5misys4V2_014implementation5MiSysE = NULL;

/* Exported Object: VTT for std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev() called");
    return 0;
}

/* Exported Object: vtable for vendor::xiaomi::hardware::misys::V2_0::implementation::MiSys */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware5misys4V2_014implementation5MiSysE = NULL;

/* Demangled: vendor::xiaomi::hardware::misys::V2_0::implementation::MiSys::MiSysReadBuffer(android::hardware::hidl_string const&, android::hardware::hidl_string const&, std::__1::function<void (vendor::xiaomi::hardware::misys::V2_0::IBufferReadResult const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V2_014implementation5MiSys15MiSysReadBufferERKN7android8hardware11hidl_stringESA_NSt3__18functionIFvRKNS3_17IBufferReadResultEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V2_014implementation5MiSys15MiSysReadBufferERKN7android8hardware11hidl_stringESA_NSt3__18functionIFvRKNS3_17IBufferReadResultEEEE() called");
    return 0;
}

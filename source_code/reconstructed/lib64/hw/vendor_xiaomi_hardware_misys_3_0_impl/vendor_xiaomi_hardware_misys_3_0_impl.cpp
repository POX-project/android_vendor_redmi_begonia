/*
 * Reverse-Engineered Source for: vendor.xiaomi.hardware.misys@3.0-impl.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "vendor_xiaomi_hardware_misys_3_0_impl"

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
#include "vendor_xiaomi_hardware_misys_3_0_impl.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::xiaomi::hardware::misys::V3_0::implementation::MiSys::AllocateBlock(unsigned long, std::__1::function<void (vendor::xiaomi::hardware::misys::V3_0::IBlockResult const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSys13AllocateBlockEmNSt3__18functionIFvRKNS3_12IBlockResultEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSys13AllocateBlockEmNSt3__18functionIFvRKNS3_12IBlockResultEEEE() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::sync() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv() called");
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

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Exported Object: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_14basic_iostreamIcS2_EE = NULL;

/* Exported Object: vtable for std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: vendor::xiaomi::hardware::misys::V3_0::implementation::MiSys::GetFileSize(android::hardware::hidl_string const&, android::hardware::hidl_string const&, std::__1::function<void (vendor::xiaomi::hardware::misys::V3_0::IFileSizeResult const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSys11GetFileSizeERKN7android8hardware11hidl_stringESA_NSt3__18functionIFvRKNS3_15IFileSizeResultEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSys11GetFileSizeERKN7android8hardware11hidl_stringESA_NSt3__18functionIFvRKNS3_15IFileSizeResultEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V3_0::implementation::MiSys::OnDataReady(android::hardware::hidl_memory const&, unsigned long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSys11OnDataReadyERKN7android8hardware11hidl_memoryEmj(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSys11OnDataReadyERKN7android8hardware11hidl_memoryEmj() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V3_0::implementation::MiSys::WriteToFile(android::hardware::hidl_memory const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSys11WriteToFileERKN7android8hardware11hidl_memoryERKNS7_11hidl_stringESD_m(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSys11WriteToFileERKN7android8hardware11hidl_memoryERKNS7_11hidl_stringESD_m() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V3_0::implementation::MiSys::MiSysSetProp(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSys12MiSysSetPropERKN7android8hardware11hidl_stringESA_(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSys12MiSysSetPropERKN7android8hardware11hidl_stringESA_() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V3_0::implementation::MiSys::ReadFromFile(android::hardware::hidl_memory const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&, std::__1::function<void (vendor::xiaomi::hardware::misys::V3_0::IBlockResult const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSys12ReadFromFileERKN7android8hardware11hidl_memoryERKNS7_11hidl_stringESD_NSt3__18functionIFvRKNS3_12IBlockResultEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSys12ReadFromFileERKN7android8hardware11hidl_memoryERKNS7_11hidl_stringESD_NSt3__18functionIFvRKNS3_12IBlockResultEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V3_0::implementation::MiSys::ReleaseBlock(android::hardware::hidl_memory const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSys12ReleaseBlockERKN7android8hardware11hidl_memoryE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSys12ReleaseBlockERKN7android8hardware11hidl_memoryE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V3_0::implementation::MiSys::GetCallBackPid(unsigned int, std::__1::function<void (vendor::xiaomi::hardware::misys::V3_0::IGetPidResult const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSys14GetCallBackPidEjNSt3__18functionIFvRKNS3_13IGetPidResultEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSys14GetCallBackPidEjNSt3__18functionIFvRKNS3_13IGetPidResultEEEE() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::misys::V3_0::implementation::MiSys */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSysE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: VTT for vendor::xiaomi::hardware::misys::V3_0::implementation::MiSys */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSysE = NULL;

/* Exported Object: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: HIDL_FETCH_IMiSys */
extern "C" __attribute__((visibility("default"))) int HIDL_FETCH_IMiSys(void) {
    ALOGD("HIDL_FETCH_IMiSys() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V3_0::implementation::MiSys::SetCallBack(android::sp<vendor::xiaomi::hardware::misys::V3_0::IMiSysCallBack> const&, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSys11SetCallBackERKN7android2spINS3_14IMiSysCallBackEEEji(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSys11SetCallBackERKN7android2spINS3_14IMiSysCallBackEEEji() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_fstream<char, std::__1::char_traits<char> >::open(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_fstreamIcNS_11char_traitsIcEEE4openEPKcj(void) {
    ALOGD("_ZNSt3__113basic_fstreamIcNS_11char_traitsIcEEE4openEPKcj() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V3_0::implementation::MiSys::ReleaseCallBack(android::sp<vendor::xiaomi::hardware::misys::V3_0::IMiSysCallBack> const&, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSys15ReleaseCallBackERKN7android2spINS3_14IMiSysCallBackEEEji(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSys15ReleaseCallBackERKN7android2spINS3_14IMiSysCallBackEEEji() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::xiaomi::hardware::misys::V3_0::IMiSys-in-vendor::xiaomi::hardware::misys::V3_0::implementation::MiSys */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSysE0_NS3_6IMiSysE = NULL;

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE16_NS_13basic_ostreamIcS2_EE = NULL;

/* Exported Object: vtable for vendor::xiaomi::hardware::misys::V3_0::implementation::MiSys */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSysE = NULL;

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<vendor::xiaomi::hardware::misys::V3_0::implementation::MiSys::CallBackEvent, std::__1::allocator<vendor::xiaomi::hardware::misys::V3_0::implementation::MiSys::CallBackEvent> >::__push_back_slow_path<vendor::xiaomi::hardware::misys::V3_0::implementation::MiSys::CallBackEvent const&>(vendor::xiaomi::hardware::misys::V3_0::implementation::MiSys::CallBackEvent const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSys13CallBackEventENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN6vendor6xiaomi8hardware5misys4V3_014implementation5MiSys13CallBackEventENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::open(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4openEPKcj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4openEPKcj() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::setbuf(char*, long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPcl(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPcl() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekpos(std::__1::fpos<mbstate_t>, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj() called");
    return 0;
}

/*
 * Reverse-Engineered Source for: vndservice
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "vndservice"

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
#include "vndservice.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_VNDBINDER "/dev/vndbinder"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_VNDBINDER, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_VNDBINDER, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_VNDBINDER, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Executable Service Daemon Entrypoint */
static void sig_handler(int sig) {
    ALOGI("Received signal %d, terminating vndservice", sig);
    if (g_dev_fd >= 0) close(g_dev_fd);
    exit(0);
}

int main(int argc, char** argv) {
    ALOGI("Starting vndservice service daemon");
    signal(SIGTERM, sig_handler);
    signal(SIGINT, sig_handler);

    open_device_node();

    /* Main Service Loop */
    ALOGI("vndservice service active");
    while (1) {
        sleep(3600);
    }
    return 0;
}

/* Demangled: android::TextOutput& android::operator<< <char [4]>(android::TextOutput&, char const (&) [4]) */
extern "C" __attribute__((visibility("default"))) int _ZN7androidlsIA4_cEERNS_10TextOutputES3_RKT_(void) {
    ALOGD("_ZN7androidlsIA4_cEERNS_10TextOutputES3_RKT_() called");
    return 0;
}

/* Demangled: android::Vector<android::String16>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_8String16EE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_8String16EE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void) {
    ALOGD("_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: android::TextOutput& android::operator<< <char [18]>(android::TextOutput&, char const (&) [18]) */
extern "C" __attribute__((visibility("default"))) int _ZN7androidlsIA18_cEERNS_10TextOutputES3_RKT_(void) {
    ALOGD("_ZN7androidlsIA18_cEERNS_10TextOutputES3_RKT_() called");
    return 0;
}

/* Demangled: android::Vector<android::String16>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_8String16EE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_8String16EE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::TextOutput& android::operator<< <char*>(android::TextOutput&, char* const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7androidlsIPcEERNS_10TextOutputES3_RKT_(void) {
    ALOGD("_ZN7androidlsIPcEERNS_10TextOutputES3_RKT_() called");
    return 0;
}

/* Demangled: android::Vector<android::String16>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_8String16EE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_8String16EE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<android::String16>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_8String16EE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_8String16EE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: android::TextOutput& android::operator<< <char [9]>(android::TextOutput&, char const (&) [9]) */
extern "C" __attribute__((visibility("default"))) int _ZN7androidlsIA9_cEERNS_10TextOutputES3_RKT_(void) {
    ALOGD("_ZN7androidlsIA9_cEERNS_10TextOutputES3_RKT_() called");
    return 0;
}

/* Demangled: android::Vector<android::String16>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_8String16EE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_8String16EE12do_constructEPvm() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void) {
    ALOGD("_ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE16_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: android::TextOutput& android::operator<< <char [2]>(android::TextOutput&, char const (&) [2]) */
extern "C" __attribute__((visibility("default"))) int _ZN7androidlsIA2_cEERNS_10TextOutputES3_RKT_(void) {
    ALOGD("_ZN7androidlsIA2_cEERNS_10TextOutputES3_RKT_() called");
    return 0;
}

/* Demangled: android::Vector<android::String16>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_8String16EE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_8String16EE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Exported Object: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE = NULL;

/* Exported Object: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: android::TextOutput& android::operator<< <unsigned long>(android::TextOutput&, unsigned long const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7androidlsImEERNS_10TextOutputES2_RKT_(void) {
    ALOGD("_ZN7androidlsImEERNS_10TextOutputES2_RKT_() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::String16> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_8String16EEE = NULL;

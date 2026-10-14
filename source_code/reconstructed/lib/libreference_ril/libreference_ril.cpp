/*
 * Reverse-Engineered Source for: libreference-ril.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libreference_ril"

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
#include "libreference_ril.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_KMSG "/dev/kmsg"
#define DEV_DEV_QEMU_PIPE "/dev/qemu_pipe"
#define DEV_DEV_QMI "/dev/qmi"
#define DEV_DEV_TTYS "/dev/ttyS"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_KMSG, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_KMSG, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_KMSG, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_QEMU_PIPE, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_QEMU_PIPE, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_QEMU_PIPE, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_QMI, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_QMI, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_QMI, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_TTYS, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_TTYS, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_TTYS, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::base::SetMinimumLogSeverity(android::base::LogSeverity) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base21SetMinimumLogSeverityENS0_11LogSeverityE(void) {
    ALOGD("_ZN7android4base21SetMinimumLogSeverityENS0_11LogSeverityE() called");
    return 0;
}

/* Demangled: __aeabi_uidiv */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidiv(void) {
    ALOGD("__aeabi_uidiv() called");
    return 0;
}

/* Demangled: __divdi3 */
extern "C" __attribute__((visibility("default"))) int __divdi3(void) {
    ALOGD("__divdi3() called");
    return 0;
}

/* Demangled: TemporaryDir::TemporaryDir() */
extern "C" __attribute__((visibility("default"))) int _ZN12TemporaryDirC2Ev(void) {
    ALOGD("_ZN12TemporaryDirC2Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::operator<< <char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE(void) {
    ALOGD("_ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE() called");
    return 0;
}

/* Demangled: __udivmoddi4 */
extern "C" __attribute__((visibility("default"))) int __udivmoddi4(void) {
    ALOGD("__udivmoddi4() called");
    return 0;
}

/* Demangled: qemu_pipe_frame_send */
extern "C" __attribute__((visibility("default"))) int qemu_pipe_frame_send(void) {
    ALOGD("qemu_pipe_frame_send() called");
    return 0;
}

/* Demangled: android::base::InitLogging(char**, std::__1::function<void (android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*)>&&, std::__1::function<void (char const*)>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base11InitLoggingEPPcONSt3__18functionIFvNS0_5LogIdENS0_11LogSeverityEPKcS8_jS8_EEEONS4_IFvS8_EEE(void) {
    ALOGD("_ZN7android4base11InitLoggingEPPcONSt3__18functionIFvNS0_5LogIdENS0_11LogSeverityEPKcS8_jS8_EEEONS4_IFvS8_EEE() called");
    return 0;
}

/* Demangled: android::base::StringPrintf(char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base12StringPrintfEPKcz(void) {
    ALOGD("_ZN7android4base12StringPrintfEPKcz() called");
    return 0;
}

/* Demangled: at_set_on_timeout */
extern "C" __attribute__((visibility("default"))) int at_set_on_timeout(void) {
    ALOGD("at_set_on_timeout() called");
    return 0;
}

/* Demangled: android::base::ReadFileToString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base16ReadFileToStringERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPS7_b(void) {
    ALOGD("_ZN7android4base16ReadFileToStringERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPS7_b() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: at_close */
extern "C" __attribute__((visibility("default"))) int at_close(void) {
    ALOGD("at_close() called");
    return 0;
}

/* Demangled: at_tok_nextint */
extern "C" __attribute__((visibility("default"))) int at_tok_nextint(void) {
    ALOGD("at_tok_nextint() called");
    return 0;
}

/* Demangled: at_tok_start */
extern "C" __attribute__((visibility("default"))) int at_tok_start(void) {
    ALOGD("at_tok_start() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: at_send_command_sms */
extern "C" __attribute__((visibility("default"))) int at_send_command_sms(void) {
    ALOGD("at_send_command_sms() called");
    return 0;
}

/* Demangled: android::base::GetExecutableDirectory() */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base22GetExecutableDirectoryEv(void) {
    ALOGD("_ZN7android4base22GetExecutableDirectoryEv() called");
    return 0;
}

/* Demangled: android::base::StartsWith(std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::basic_string_view<char, std::__1::char_traits<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_(void) {
    ALOGD("_ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: android::base::WriteStringToFd(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::base::borrowed_fd) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base15WriteStringToFdERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS0_11borrowed_fdE(void) {
    ALOGD("_ZN7android4base15WriteStringToFdERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS0_11borrowed_fdE() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_() called");
    return 0;
}

/* Demangled: qemu_pipe_open */
extern "C" __attribute__((visibility("default"))) int qemu_pipe_open(void) {
    ALOGD("qemu_pipe_open() called");
    return 0;
}

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > android::base::Join<std::__1::vector<char const*, std::__1::allocator<char const*> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>(std::__1::vector<char const*, std::__1::allocator<char const*> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base4JoinINSt3__16vectorIPKcNS2_9allocatorIS5_EEEERKNS2_12basic_stringIcNS2_11char_traitsIcEENS6_IcEEEEEESD_RKT_T0_(void) {
    ALOGD("_ZN7android4base4JoinINSt3__16vectorIPKcNS2_9allocatorIS5_EEEERKNS2_12basic_stringIcNS2_11char_traitsIcEENS6_IcEEEEEESD_RKT_T0_() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: android::base::GetThreadId() */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base11GetThreadIdEv(void) {
    ALOGD("_ZN7android4base11GetThreadIdEv() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void) {
    ALOGD("_ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > android::base::Join<std::__1::vector<char const*, std::__1::allocator<char const*> >, char>(std::__1::vector<char const*, std::__1::allocator<char const*> > const&, char) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base4JoinINSt3__16vectorIPKcNS2_9allocatorIS5_EEEEcEENS2_12basic_stringIcNS2_11char_traitsIcEENS6_IcEEEERKT_T0_(void) {
    ALOGD("_ZN7android4base4JoinINSt3__16vectorIPKcNS2_9allocatorIS5_EEEEcEENS2_12basic_stringIcNS2_11char_traitsIcEENS6_IcEEEERKT_T0_() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Exported Object: s_tid_mainloop */
extern "C" __attribute__((visibility("default"))) void* s_tid_mainloop = NULL;

/* Demangled: android::base::Readlink(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base8ReadlinkERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPS7_(void) {
    ALOGD("_ZN7android4base8ReadlinkERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPS7_() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: android::base::LogdLogger::LogdLogger(android::base::LogId) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base10LogdLoggerC1ENS0_5LogIdE(void) {
    ALOGD("_ZN7android4base10LogdLoggerC1ENS0_5LogIdE() called");
    return 0;
}

/* Demangled: android::base::StderrLogger(android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base12StderrLoggerENS0_5LogIdENS0_11LogSeverityEPKcS4_jS4_(void) {
    ALOGD("_ZN7android4base12StderrLoggerENS0_5LogIdENS0_11LogSeverityEPKcS4_jS4_() called");
    return 0;
}

/* Demangled: android::base::ScopedLogSeverity::ScopedLogSeverity(android::base::LogSeverity) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base17ScopedLogSeverityC2ENS0_11LogSeverityE(void) {
    ALOGD("_ZN7android4base17ScopedLogSeverityC2ENS0_11LogSeverityE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<void (*)(char const*), std::__1::allocator<void (*)(char const*)>, void (char const*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_E7__cloneEv() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: at_send_command_numeric */
extern "C" __attribute__((visibility("default"))) int at_send_command_numeric(void) {
    ALOGD("at_send_command_numeric() called");
    return 0;
}

/* Demangled: android::base::WriteFully(android::base::borrowed_fd, void const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base10WriteFullyENS0_11borrowed_fdEPKvj(void) {
    ALOGD("_ZN7android4base10WriteFullyENS0_11borrowed_fdEPKvj() called");
    return 0;
}

/* Demangled: android::base::LogMessage::LogMessage(char const*, unsigned int, android::base::LogId, android::base::LogSeverity, char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base10LogMessageC2EPKcjNS0_5LogIdENS0_11LogSeverityES3_i(void) {
    ALOGD("_ZN7android4base10LogMessageC2EPKcjNS0_5LogIdENS0_11LogSeverityES3_i() called");
    return 0;
}

/* Demangled: android::base::SetAborter(std::__1::function<void (char const*)>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base10SetAborterEONSt3__18functionIFvPKcEEE(void) {
    ALOGD("_ZN7android4base10SetAborterEONSt3__18functionIFvPKcEEE() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j(void) {
    ALOGD("_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j() called");
    return 0;
}

/* Demangled: android::base::WriteStringToFile(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base17WriteStringToFileERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_b(void) {
    ALOGD("_ZN7android4base17WriteStringToFileERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_b() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: at_send_command */
extern "C" __attribute__((visibility("default"))) int at_send_command(void) {
    ALOGD("at_send_command() called");
    return 0;
}

/* Demangled: at_send_command_singleline */
extern "C" __attribute__((visibility("default"))) int at_send_command_singleline(void) {
    ALOGD("at_send_command_singleline() called");
    return 0;
}

/* Demangled: is_multimode_modem */
extern "C" __attribute__((visibility("default"))) int is_multimode_modem(void) {
    ALOGD("is_multimode_modem() called");
    return 0;
}

/* Demangled: qemu_pipe_frame_recv */
extern "C" __attribute__((visibility("default"))) int qemu_pipe_frame_recv(void) {
    ALOGD("qemu_pipe_frame_recv() called");
    return 0;
}

/* Demangled: TemporaryFile::~TemporaryFile() */
extern "C" __attribute__((visibility("default"))) int _ZN13TemporaryFileD1Ev(void) {
    ALOGD("_ZN13TemporaryFileD1Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<char, std::__1::allocator<char> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIcNS_9allocatorIcEEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIcNS_9allocatorIcEEE8__appendEj() called");
    return 0;
}

/* Demangled: android::base::StdioLogger(android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base11StdioLoggerENS0_5LogIdENS0_11LogSeverityEPKcS4_jS4_(void) {
    ALOGD("_ZN7android4base11StdioLoggerENS0_5LogIdENS0_11LogSeverityEPKcS4_jS4_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<void (*)(char const*), std::__1::allocator<void (*)(char const*)>, void (char const*)>::__clone(std::__1::__function::__base<void (char const*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE() called");
    return 0;
}

/* Demangled: android::base::EqualsIgnoreCase(std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::basic_string_view<char, std::__1::char_traits<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base16EqualsIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_(void) {
    ALOGD("_ZN7android4base16EqualsIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_() called");
    return 0;
}

/* Demangled: android::base::ShouldLog(android::base::LogSeverity, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(void) {
    ALOGD("_ZN7android4base9ShouldLogENS0_11LogSeverityEPKc() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<android::base::LogdLogger, std::__1::allocator<android::base::LogdLogger>, void (android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EE18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EE18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: android::base::StartsWith(std::__1::basic_string_view<char, std::__1::char_traits<char> >, char) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEEc(void) {
    ALOGD("_ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEEc() called");
    return 0;
}

/* Demangled: at_response_free */
extern "C" __attribute__((visibility("default"))) int at_response_free(void) {
    ALOGD("at_response_free() called");
    return 0;
}

/* Demangled: isInEmulator */
extern "C" __attribute__((visibility("default"))) int isInEmulator(void) {
    ALOGD("isInEmulator() called");
    return 0;
}

/* Demangled: android::base::Split(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base5SplitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_(void) {
    ALOGD("_ZN7android4base5SplitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: android::base::LogdLogger::LogdLogger(android::base::LogId) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base10LogdLoggerC2ENS0_5LogIdE(void) {
    ALOGD("_ZN7android4base10LogdLoggerC2ENS0_5LogIdE() called");
    return 0;
}

/* Demangled: android::base::StringReplace(std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::basic_string_view<char, std::__1::char_traits<char> >, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base13StringReplaceENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_S5_b(void) {
    ALOGD("_ZN7android4base13StringReplaceENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_S5_b() called");
    return 0;
}

/* Demangled: at_get_cme_error */
extern "C" __attribute__((visibility("default"))) int at_get_cme_error(void) {
    ALOGD("at_get_cme_error() called");
    return 0;
}

/* Demangled: at_tok_nexthexint */
extern "C" __attribute__((visibility("default"))) int at_tok_nexthexint(void) {
    ALOGD("at_tok_nexthexint() called");
    return 0;
}

/* Demangled: TemporaryDir::init(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN12TemporaryDir4initERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN12TemporaryDir4initERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: TemporaryFile::~TemporaryFile() */
extern "C" __attribute__((visibility("default"))) int _ZN13TemporaryFileD2Ev(void) {
    ALOGD("_ZN13TemporaryFileD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<void (*)(char const*), std::__1::allocator<void (*)(char const*)>, void (char const*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_E18destroy_deallocateEv() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: __aeabi_uidivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidivmod(void) {
    ALOGD("__aeabi_uidivmod() called");
    return 0;
}

/* Demangled: TemporaryFile::TemporaryFile(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN13TemporaryFileC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN13TemporaryFileC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::base::Basename(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base8BasenameERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android4base8BasenameERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::base::DefaultAborter(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base14DefaultAborterEPKc(void) {
    ALOGD("_ZN7android4base14DefaultAborterEPKc() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<android::base::LogdLogger, std::__1::allocator<android::base::LogdLogger>, void (android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EEE = NULL;

/* Demangled: android::base::EndsWithIgnoreCase(std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::basic_string_view<char, std::__1::char_traits<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base18EndsWithIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_(void) {
    ALOGD("_ZN7android4base18EndsWithIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_() called");
    return 0;
}

/* Demangled: at_set_on_reader_closed */
extern "C" __attribute__((visibility("default"))) int at_set_on_reader_closed(void) {
    ALOGD("at_set_on_reader_closed() called");
    return 0;
}

/* Demangled: android::base::LogMessage::stream() */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base10LogMessage6streamEv(void) {
    ALOGD("_ZN7android4base10LogMessage6streamEv() called");
    return 0;
}

/* Demangled: android::base::LogMessage::LogMessage(char const*, unsigned int, android::base::LogId, android::base::LogSeverity, char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base10LogMessageC1EPKcjNS0_5LogIdENS0_11LogSeverityES3_i(void) {
    ALOGD("_ZN7android4base10LogMessageC1EPKcjNS0_5LogIdENS0_11LogSeverityES3_i() called");
    return 0;
}

/* Demangled: android::base::ScopedLogSeverity::~ScopedLogSeverity() */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base17ScopedLogSeverityD1Ev(void) {
    ALOGD("_ZN7android4base17ScopedLogSeverityD1Ev() called");
    return 0;
}

/* Demangled: android::base::GetMinimumLogSeverity() */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base21GetMinimumLogSeverityEv(void) {
    ALOGD("_ZN7android4base21GetMinimumLogSeverityEv() called");
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

/* Demangled: TemporaryFile::TemporaryFile(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN13TemporaryFileC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN13TemporaryFileC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: TemporaryFile::TemporaryFile() */
extern "C" __attribute__((visibility("default"))) int _ZN13TemporaryFileC1Ev(void) {
    ALOGD("_ZN13TemporaryFileC1Ev() called");
    return 0;
}

/* Demangled: android::base::LogMessage::~LogMessage() */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base10LogMessageD1Ev(void) {
    ALOGD("_ZN7android4base10LogMessageD1Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > android::base::Join<std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base4JoinINSt3__16vectorINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS7_IS9_EEEERKS9_EES9_RKT_T0_(void) {
    ALOGD("_ZN7android4base4JoinINSt3__16vectorINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS7_IS9_EEEERKS9_EES9_RKT_T0_() called");
    return 0;
}

/* Demangled: at_send_command_multiline */
extern "C" __attribute__((visibility("default"))) int at_send_command_multiline(void) {
    ALOGD("at_send_command_multiline() called");
    return 0;
}

/* Demangled: TemporaryDir::~TemporaryDir() */
extern "C" __attribute__((visibility("default"))) int _ZN12TemporaryDirD1Ev(void) {
    ALOGD("_ZN12TemporaryDirD1Ev() called");
    return 0;
}

/* Demangled: android::base::WriteStringToFile(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned short, unsigned int, unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base17WriteStringToFileERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_tjjb(void) {
    ALOGD("_ZN7android4base17WriteStringToFileERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_tjjb() called");
    return 0;
}

/* Demangled: android::base::KernelLogger(android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base12KernelLoggerENS0_5LogIdENS0_11LogSeverityEPKcS4_jS4_(void) {
    ALOGD("_ZN7android4base12KernelLoggerENS0_5LogIdENS0_11LogSeverityEPKcS4_jS4_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<android::base::LogdLogger, std::__1::allocator<android::base::LogdLogger>, void (android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*)>::__clone(std::__1::__function::__base<void (android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EE7__cloneEPNS0_6__baseISB_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EE7__cloneEPNS0_6__baseISB_EE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<void (*)(char const*), std::__1::allocator<void (*)(char const*)>, void (char const*)>::operator()(char const*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_EclEOS3_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_EclEOS3_() called");
    return 0;
}

/* Demangled: android::base::StringAppendV(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, char const*, std::__va_list) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base13StringAppendVEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPKcSt9__va_list(void) {
    ALOGD("_ZN7android4base13StringAppendVEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPKcSt9__va_list() called");
    return 0;
}

/* Demangled: __divmoddi4 */
extern "C" __attribute__((visibility("default"))) int __divmoddi4(void) {
    ALOGD("__divmoddi4() called");
    return 0;
}

/* Demangled: RIL_Init */
extern "C" __attribute__((visibility("default"))) int RIL_Init(void) {
    ALOGD("RIL_Init() called");
    return 0;
}

/* Demangled: at_handshake */
extern "C" __attribute__((visibility("default"))) int at_handshake(void) {
    ALOGD("at_handshake() called");
    return 0;
}

/* Demangled: at_open */
extern "C" __attribute__((visibility("default"))) int at_open(void) {
    ALOGD("at_open() called");
    return 0;
}

/* Demangled: query_supported_techs */
extern "C" __attribute__((visibility("default"))) int query_supported_techs(void) {
    ALOGD("query_supported_techs() called");
    return 0;
}

/* Demangled: android::base::ReadFdToString(android::base::borrowed_fd, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base14ReadFdToStringENS0_11borrowed_fdEPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android4base14ReadFdToStringENS0_11borrowed_fdEPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::base::Realpath(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base8RealpathERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPS7_(void) {
    ALOGD("_ZN7android4base8RealpathERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPS7_() called");
    return 0;
}

/* Demangled: android::base::EndsWith(std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::basic_string_view<char, std::__1::char_traits<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base8EndsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_(void) {
    ALOGD("_ZN7android4base8EndsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_() called");
    return 0;
}

/* Demangled: android::base::GetLibLogFunctions() */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base18GetLibLogFunctionsEv(void) {
    ALOGD("_ZN7android4base18GetLibLogFunctionsEv() called");
    return 0;
}

/* Demangled: android::base::ScopedLogSeverity::ScopedLogSeverity(android::base::LogSeverity) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base17ScopedLogSeverityC1ENS0_11LogSeverityE(void) {
    ALOGD("_ZN7android4base17ScopedLogSeverityC1ENS0_11LogSeverityE() called");
    return 0;
}

/* Demangled: android::base::ScopedLogSeverity::~ScopedLogSeverity() */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base17ScopedLogSeverityD2Ev(void) {
    ALOGD("_ZN7android4base17ScopedLogSeverityD2Ev() called");
    return 0;
}

/* Demangled: __udivmodsi4 */
extern "C" __attribute__((visibility("default"))) int __udivmodsi4(void) {
    ALOGD("__udivmodsi4() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: __aeabi_ldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_ldivmod(void) {
    ALOGD("__aeabi_ldivmod() called");
    return 0;
}

/* Demangled: TemporaryFile::TemporaryFile() */
extern "C" __attribute__((visibility("default"))) int _ZN13TemporaryFileC2Ev(void) {
    ALOGD("_ZN13TemporaryFileC2Ev() called");
    return 0;
}

/* Demangled: android::base::LogMessage::LogMessage(char const*, unsigned int, android::base::LogSeverity, char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base10LogMessageC1EPKcjNS0_11LogSeverityES3_i(void) {
    ALOGD("_ZN7android4base10LogMessageC1EPKcjNS0_11LogSeverityES3_i() called");
    return 0;
}

/* Demangled: android::base::Dirname(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base7DirnameERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android4base7DirnameERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::base::LogMessage::~LogMessage() */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base10LogMessageD2Ev(void) {
    ALOGD("_ZN7android4base10LogMessageD2Ev() called");
    return 0;
}

/* Demangled: at_tok_hasmore */
extern "C" __attribute__((visibility("default"))) int at_tok_hasmore(void) {
    ALOGD("at_tok_hasmore() called");
    return 0;
}

/* Demangled: TemporaryDir::~TemporaryDir() */
extern "C" __attribute__((visibility("default"))) int _ZN12TemporaryDirD2Ev(void) {
    ALOGD("_ZN12TemporaryDirD2Ev() called");
    return 0;
}

/* Demangled: TemporaryFile::release() */
extern "C" __attribute__((visibility("default"))) int _ZN13TemporaryFile7releaseEv(void) {
    ALOGD("_ZN13TemporaryFile7releaseEv() called");
    return 0;
}

/* Demangled: android::base::RemoveFileIfExists(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base18RemoveFileIfExistsERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPS7_(void) {
    ALOGD("_ZN7android4base18RemoveFileIfExistsERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPS7_() called");
    return 0;
}

/* Demangled: android::base::SetLogger(std::__1::function<void (android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*)>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base9SetLoggerEONSt3__18functionIFvNS0_5LogIdENS0_11LogSeverityEPKcS6_jS6_EEE(void) {
    ALOGD("_ZN7android4base9SetLoggerEONSt3__18functionIFvNS0_5LogIdENS0_11LogSeverityEPKcS6_jS6_EEE() called");
    return 0;
}

/* Demangled: android::base::StringAppendF(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base13StringAppendFEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPKcz(void) {
    ALOGD("_ZN7android4base13StringAppendFEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPKcz() called");
    return 0;
}

/* Demangled: at_tok_nextbool */
extern "C" __attribute__((visibility("default"))) int at_tok_nextbool(void) {
    ALOGD("at_tok_nextbool() called");
    return 0;
}

/* Demangled: android::base::LogMessage::LogLine(char const*, unsigned int, android::base::LogSeverity, char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base10LogMessage7LogLineEPKcjNS0_11LogSeverityES3_S3_(void) {
    ALOGD("_ZN7android4base10LogMessage7LogLineEPKcjNS0_11LogSeverityES3_S3_() called");
    return 0;
}

/* Demangled: android::base::LogdLogger::operator()(android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base10LogdLoggerclENS0_5LogIdENS0_11LogSeverityEPKcS5_jS5_(void) {
    ALOGD("_ZN7android4base10LogdLoggerclENS0_5LogIdENS0_11LogSeverityEPKcS5_jS5_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<android::base::LogdLogger, std::__1::allocator<android::base::LogdLogger>, void (android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EE7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EE7__cloneEv() called");
    return 0;
}

/* Demangled: strStartsWith */
extern "C" __attribute__((visibility("default"))) int strStartsWith(void) {
    ALOGD("strStartsWith() called");
    return 0;
}

/* Demangled: android::base::GetExecutablePath() */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base17GetExecutablePathEv(void) {
    ALOGD("_ZN7android4base17GetExecutablePathEv() called");
    return 0;
}

/* Demangled: android::base::ReadFullyAtOffset(android::base::borrowed_fd, void*, unsigned int, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base17ReadFullyAtOffsetENS0_11borrowed_fdEPvjx(void) {
    ALOGD("_ZN7android4base17ReadFullyAtOffsetENS0_11borrowed_fdEPvjx() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<android::base::LogdLogger, std::__1::allocator<android::base::LogdLogger>, void (android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EE7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EE7destroyEv() called");
    return 0;
}

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > android::base::Join<std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, char>(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&, char) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base4JoinINSt3__16vectorINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS7_IS9_EEEEcEES9_RKT_T0_(void) {
    ALOGD("_ZN7android4base4JoinINSt3__16vectorINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS7_IS9_EEEEcEES9_RKT_T0_() called");
    return 0;
}

/* Demangled: android::base::EndsWith(std::__1::basic_string_view<char, std::__1::char_traits<char> >, char) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base8EndsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEEc(void) {
    ALOGD("_ZN7android4base8EndsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEEc() called");
    return 0;
}

/* Demangled: __udivsi3 */
extern "C" __attribute__((visibility("default"))) int __udivsi3(void) {
    ALOGD("__udivsi3() called");
    return 0;
}

/* Demangled: at_tok_nextstr */
extern "C" __attribute__((visibility("default"))) int at_tok_nextstr(void) {
    ALOGD("at_tok_nextstr() called");
    return 0;
}

/* Demangled: android::base::ReadFully(android::base::borrowed_fd, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base9ReadFullyENS0_11borrowed_fdEPvj(void) {
    ALOGD("_ZN7android4base9ReadFullyENS0_11borrowed_fdEPvj() called");
    return 0;
}

/* Demangled: TemporaryFile::init(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN13TemporaryFile4initERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN13TemporaryFile4initERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::base::SetDefaultTag(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base13SetDefaultTagERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android4base13SetDefaultTagERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: TemporaryDir::TemporaryDir() */
extern "C" __attribute__((visibility("default"))) int _ZN12TemporaryDirC1Ev(void) {
    ALOGD("_ZN12TemporaryDirC1Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<void (*)(char const*), std::__1::allocator<void (*)(char const*)>, void (char const*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_E7destroyEv() called");
    return 0;
}

/* Demangled: android::base::LogMessage::LogMessage(char const*, unsigned int, android::base::LogSeverity, char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i(void) {
    ALOGD("_ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<android::base::LogdLogger, std::__1::allocator<android::base::LogdLogger>, void (android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*)>::operator()(android::base::LogId&&, android::base::LogSeverity&&, char const*&&, char const*&&, unsigned int&&, char const*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EEclEOS7_OS8_OSA_SF_OjSF_(void) {
    ALOGD("_ZNSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EEclEOS7_OS8_OSA_SF_OjSF_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<void (*)(char const*), std::__1::allocator<void (*)(char const*)>, void (char const*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_EE = NULL;

/* Demangled: android::base::StartsWithIgnoreCase(std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::basic_string_view<char, std::__1::char_traits<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base20StartsWithIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_(void) {
    ALOGD("_ZN7android4base20StartsWithIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_() called");
    return 0;
}

/* Demangled: android::base::Trim(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base4TrimERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android4base4TrimERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/*
 * Reverse-Engineered Source for: libmtkcam_ulog.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libmtkcam_ulog"

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
#include "libmtkcam_ulog.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: std::__1::__r_anchor<char>::__exec(std::__1::__state<char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__r_anchorIcE6__execERNS_7__stateIcEE(void) {
    ALOGD("_ZNKSt3__110__r_anchorIcE6__execERNS_7__stateIcEE() called");
    return 0;
}

/* Demangled: std::__1::deque<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*, std::__1::allocator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*> >::pop_front() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS6_EEE9pop_frontEv(void) {
    ALOGD("_ZNSt3__15dequeIPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS6_EEE9pop_frontEv() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::ULogRuntimeDiag::onLogSubreqs(unsigned int, NSCam::Utils::ULog::RequestTypeId, unsigned int, NSCam::Utils::ULog::RequestTypeId, unsigned int const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog15ULogRuntimeDiag12onLogSubreqsEjNS1_13RequestTypeIdEjS3_PKjj(void) {
    ALOGD("_ZN5NSCam5Utils4ULog15ULogRuntimeDiag12onLogSubreqsEjNS1_13RequestTypeIdEjS3_PKjj() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::File::FileULogWriter::onLogDiscard(NSCam::Utils::ULog::File::LogDiscard const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog4File14FileULogWriter12onLogDiscardEPKNS2_10LogDiscardE(void) {
    ALOGD("_ZN5NSCam5Utils4ULog4File14FileULogWriter12onLogDiscardEPKNS2_10LogDiscardE() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::File::FileULoggerBase::FileULoggerBase() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog4File15FileULoggerBaseC1Ev(void) {
    ALOGD("_ZN5NSCam5Utils4ULog4File15FileULoggerBaseC1Ev() called");
    return 0;
}

/* Demangled: FUNCTION_TIMEOUT_PleaseCheckLogToFindOwner */
extern "C" __attribute__((visibility("default"))) int FUNCTION_TIMEOUT_PleaseCheckLogToFindOwner(void) {
    ALOGD("FUNCTION_TIMEOUT_PleaseCheckLogToFindOwner() called");
    return 0;
}

/* Demangled: std::__1::__back_ref_icase<char, std::__1::regex_traits<char> >::__exec(std::__1::__state<char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__116__back_ref_icaseIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE(void) {
    ALOGD("_ZNKSt3__116__back_ref_icaseIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__swap_out_circular_buffer(std::__1::__split_buffer<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS5_IS8_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS8_RS9_EE(void) {
    ALOGD("_ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS5_IS8_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS8_RS9_EE() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorINS_4pairIjPKcEENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4pairIjPKcEENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_(void) {
    ALOGD("_ZNSt3__16vectorINS_4pairIjPKcEENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::ULogger::onLogDetailsAndroid(unsigned int, char const*, NSCam::Utils::ULog::DetailsType, NSCam::Utils::ULog::RequestTypeId, unsigned int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog7ULogger19onLogDetailsAndroidEjPKcNS1_11DetailsTypeENS1_13RequestTypeIdEjS4_(void) {
    ALOGD("_ZN5NSCam5Utils4ULog7ULogger19onLogDetailsAndroidEjPKcNS1_11DetailsTypeENS1_13RequestTypeIdEjS4_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::Utils::ULog::ULogMtkcamDebuggee, std::__1::allocator<NSCam::Utils::ULog::ULogMtkcamDebuggee> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam5Utils4ULog18ULogMtkcamDebuggeeENS_9allocatorIS4_EEEE = NULL;

/* Demangled: _ZNSt3__113move_backwardIPPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordES6_S7_RS6_PS7_iLi1024EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SH_SG_PNS_9enable_ifIXsr27__is_random_access_iteratorISH_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113move_backwardIPPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordES6_S7_RS6_PS7_iLi1024EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SH_SG_PNS_9enable_ifIXsr27__is_random_access_iteratorISH_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__113move_backwardIPPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordES6_S7_RS6_PS7_iLi1024EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SH_SG_PNS_9enable_ifIXsr27__is_random_access_iteratorISH_EE5valueEvE4typeE() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::ULogInitializer::ULogInitializer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog15ULogInitializerC1Ev(void) {
    ALOGD("_ZN5NSCam5Utils4ULog15ULogInitializerC1Ev() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<std::__1::__empty_state<char> >::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrINS_13__empty_stateIcEEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrINS_13__empty_stateIcEEED2Ev() called");
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_character_class<char const*>(char const*, char const*, std::__1::__bracket_expression<char, std::__1::regex_traits<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE23__parse_character_classIPKcEET_S7_S7_PNS_20__bracket_expressionIcS2_EE(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE23__parse_character_classIPKcEET_S7_S7_PNS_20__bracket_expressionIcS2_EE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__r_anchor<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__r_anchorIcEE = NULL;

/* Exported Object: vtable for NSCam::Utils::ULog::File::FileULoggerBase */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils4ULog4File15FileULoggerBaseE = NULL;

/* Exported Object: vtable for NSCam::Utils::ULog::AndroidULogger */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils4ULog14AndroidULoggerE = NULL;

/* Demangled: NSCam::Utils::ULog::ULogGuardMonitor::stop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog16ULogGuardMonitor4stopEv(void) {
    ALOGD("_ZN5NSCam5Utils4ULog16ULogGuardMonitor4stopEv() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::ULogGuard::registerFuncGuard(unsigned int, char const*, char const*, char const*, int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog9ULogGuard17registerFuncGuardEjPKcS4_S4_iPi(void) {
    ALOGD("_ZN5NSCam5Utils4ULog9ULogGuard17registerFuncGuardEjPKcS4_S4_iPi() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::pair<unsigned int, char const*>, std::__1::allocator<std::__1::pair<unsigned int, char const*> >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<std::__1::pair<unsigned int, char const*> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferINS_4pairIjPKcEERNS_9allocatorIS4_EEEC2EjjS7_(void) {
    ALOGD("_ZNSt3__114__split_bufferINS_4pairIjPKcEERNS_9allocatorIS4_EEEC2EjjS7_() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::sub_match<char const*>, std::__1::allocator<std::__1::sub_match<char const*> > >::__swap_out_circular_buffer(std::__1::__split_buffer<std::__1::sub_match<char const*>, std::__1::allocator<std::__1::sub_match<char const*> >&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_9sub_matchIPKcEENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE(void) {
    ALOGD("_ZNSt3__16vectorINS_9sub_matchIPKcEENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::ULogTable::getRequestTypeName(NSCam::Utils::ULog::RequestTypeId) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam5Utils4ULog9ULogTable18getRequestTypeNameENS1_13RequestTypeIdE(void) {
    ALOGD("_ZNK5NSCam5Utils4ULog9ULogTable18getRequestTypeNameENS1_13RequestTypeIdE() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::File::FileULogWriter::onLogExit(NSCam::Utils::ULog::File::LogEnterExit const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog4File14FileULogWriter9onLogExitEPKNS2_12LogEnterExitE(void) {
    ALOGD("_ZN5NSCam5Utils4ULog4File14FileULogWriter9onLogExitEPKNS2_12LogEnterExitE() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::ULogGuardMonitor::printToAndroidLog(char const*, char const*&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog16ULogGuardMonitor17printToAndroidLogEPKcRS4_(void) {
    ALOGD("_ZN5NSCam5Utils4ULog16ULogGuardMonitor17printToAndroidLogEPKcRS4_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**, std::__1::allocator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**> >::push_front(NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS7_EEE10push_frontEOS7_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS7_EEE10push_frontEOS7_() called");
    return 0;
}

/* Demangled: _ZNSt3__14listIN7android2wpIN5NSCam5Utils4ULog9ULogGuard10IFinalizerEEENS_9allocatorIS8_EEE6insertINS_21__list_const_iteratorIS8_PvEEEENS_15__list_iteratorIS8_SE_EESF_T_SI_PNS_9enable_ifIXsr19__is_input_iteratorISI_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14listIN7android2wpIN5NSCam5Utils4ULog9ULogGuard10IFinalizerEEENS_9allocatorIS8_EEE6insertINS_21__list_const_iteratorIS8_PvEEEENS_15__list_iteratorIS8_SE_EESF_T_SI_PNS_9enable_ifIXsr19__is_input_iteratorISI_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__14listIN7android2wpIN5NSCam5Utils4ULog9ULogGuard10IFinalizerEEENS_9allocatorIS8_EEE6insertINS_21__list_const_iteratorIS8_PvEEEENS_15__list_iteratorIS8_SE_EESF_T_SI_PNS_9enable_ifIXsr19__is_input_iteratorISI_EE5valueEvE4typeE() called");
    return 0;
}

/* Demangled: std::__1::deque<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*, std::__1::allocator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*> >::erase(std::__1::__deque_iterator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord* const*, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord* const&, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord* const* const*, int, 1024>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS6_EEE5eraseENS_16__deque_iteratorIS6_PKS6_RSB_PKSC_iLi1024EEE(void) {
    ALOGD("_ZNSt3__15dequeIPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS6_EEE5eraseENS_16__deque_iteratorIS6_PKS6_RSB_PKSC_iLi1024EEE() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_memset4(void) __asm__("__aeabi_memset4");
int fn___aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::ULogGuardMonitor::run() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog16ULogGuardMonitor3runEv(void) {
    ALOGD("_ZN5NSCam5Utils4ULog16ULogGuardMonitor3runEv() called");
    return 0;
}

/* Demangled: std::__1::__match_char_collate<char, std::__1::regex_traits<char> >::__exec(std::__1::__state<char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__120__match_char_collateIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE(void) {
    ALOGD("_ZNKSt3__120__match_char_collateIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE() called");
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_extended_reg_exp<char const*>(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE24__parse_extended_reg_expIPKcEET_S7_S7_(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE24__parse_extended_reg_expIPKcEET_S7_S7_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::Utils::ULog::ULogMtkcamDebuggee, std::__1::allocator<NSCam::Utils::ULog::ULogMtkcamDebuggee> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam5Utils4ULog18ULogMtkcamDebuggeeENS_9allocatorIS4_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam5Utils4ULog18ULogMtkcamDebuggeeENS_9allocatorIS4_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >&>::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EERNS5_IS8_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EERNS5_IS8_EEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::__state<char>*, std::__1::allocator<std::__1::__state<char>*> >::push_front(std::__1::__state<char>* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_7__stateIcEENS_9allocatorIS3_EEE10push_frontERKS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_7__stateIcEENS_9allocatorIS3_EEE10push_frontERKS3_() called");
    return 0;
}

/* Demangled: std::__1::__empty_state<char>::__exec(std::__1::__state<char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__113__empty_stateIcE6__execERNS_7__stateIcEE(void) {
    ALOGD("_ZNKSt3__113__empty_stateIcE6__execERNS_7__stateIcEE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&>::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<android::LogPrinter, std::__1::allocator<android::LogPrinter> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN7android10LogPrinterENS_9allocatorIS2_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN7android10LogPrinterENS_9allocatorIS2_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*, std::__1::allocator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*> >::__push_back_slow_path<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord* const&>(NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_() called");
    return 0;
}

/* Demangled: void std::__1::vector<char, std::__1::allocator<char> >::__push_back_slow_path<char>(char&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIcNS_9allocatorIcEEE21__push_back_slow_pathIcEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIcNS_9allocatorIcEEE21__push_back_slow_pathIcEEvOT_() called");
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_equivalence_class<char const*>(char const*, char const*, std::__1::__bracket_expression<char, std::__1::regex_traits<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE25__parse_equivalence_classIPKcEET_S7_S7_PNS_20__bracket_expressionIcS2_EE(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE25__parse_equivalence_classIPKcEET_S7_S7_PNS_20__bracket_expressionIcS2_EE() called");
    return 0;
}

/* Demangled: void* std::__1::__thread_proxy<std::__1::tuple<std::__1::unique_ptr<std::__1::__thread_struct, std::__1::default_delete<std::__1::__thread_struct> >, void (NSCam::Utils::ULog::ULogGuardMonitor::*)(), NSCam::Utils::ULog::ULogGuardMonitor*> >(void*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEMN5NSCam5Utils4ULog16ULogGuardMonitorEFvvEPSA_EEEEEPvSF_(void) {
    ALOGD("_ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEMN5NSCam5Utils4ULog16ULogGuardMonitorEFvvEPSA_EEEEEPvSF_() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::sub_match<char const*>, std::__1::allocator<std::__1::sub_match<char const*> > >::__append(unsigned int, std::__1::sub_match<char const*> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_9sub_matchIPKcEENS_9allocatorIS4_EEE8__appendEjRKS4_(void) {
    ALOGD("_ZNSt3__16vectorINS_9sub_matchIPKcEENS_9allocatorIS4_EEE8__appendEjRKS4_() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_memset8(void) __asm__("__aeabi_memset8");
int fn___aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::File::FileULoggerBase::onLogDetails(unsigned int, char const*, NSCam::Utils::ULog::DetailsType, NSCam::Utils::ULog::RequestTypeId, unsigned int, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog4File15FileULoggerBase12onLogDetailsEjPKcNS1_11DetailsTypeENS1_13RequestTypeIdEjS5_j(void) {
    ALOGD("_ZN5NSCam5Utils4ULog4File15FileULoggerBase12onLogDetailsEjPKcNS1_11DetailsTypeENS1_13RequestTypeIdEjS5_j() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::File::FileULoggerBase::getTimeStamp(int, char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog4File15FileULoggerBase12getTimeStampEiPcj(void) {
    ALOGD("_ZN5NSCam5Utils4ULog4File15FileULoggerBase12getTimeStampEiPcj() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*, std::__1::allocator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*> >::~__deque_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS6_EEED2Ev(void) {
    ALOGD("_ZNSt3__112__deque_baseIPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS6_EEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::deque<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*, std::__1::allocator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*> >::push_back(NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS6_EEE9push_backERKS6_(void) {
    ALOGD("_ZNSt3__15dequeIPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS6_EEE9push_backERKS6_() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::pair<unsigned int, char const*>, std::__1::allocator<std::__1::pair<unsigned int, char const*> > >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4pairIjPKcEENS_9allocatorIS4_EEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorINS_4pairIjPKcEENS_9allocatorIS4_EEE11__vallocateEj() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::ULogRTDiagImpl::dumpToLog() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog14ULogRTDiagImpl9dumpToLogEv(void) {
    ALOGD("_ZN5NSCam5Utils4ULog14ULogRTDiagImpl9dumpToLogEv() called");
    return 0;
}

/* Demangled: __udivmoddi4 */
extern "C" __attribute__((visibility("default"))) int fn___udivmoddi4(void) __asm__("__udivmoddi4");
int fn___udivmoddi4(void) {
    ALOGD("__udivmoddi4() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::IDebuggee>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam9IDebuggeeEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam9IDebuggeeEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::ULogGuardMonitor::ULogGuardMonitor() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog16ULogGuardMonitorC2Ev(void) {
    ALOGD("_ZN5NSCam5Utils4ULog16ULogGuardMonitorC2Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EERNS5_IS8_EEEC2EjjSA_(void) {
    ALOGD("_ZNSt3__114__split_bufferINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EERNS5_IS8_EEEC2EjjSA_() called");
    return 0;
}

/* Demangled: __aeabi_uidivmod */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_uidivmod(void) __asm__("__aeabi_uidivmod");
int fn___aeabi_uidivmod(void) {
    ALOGD("__aeabi_uidivmod() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::ULogger::onLogSubreqs(unsigned int, char const*, NSCam::Utils::ULog::RequestTypeId, unsigned int, NSCam::Utils::ULog::RequestTypeId, unsigned int const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog7ULogger12onLogSubreqsEjPKcNS1_13RequestTypeIdEjS5_PKjj(void) {
    ALOGD("_ZN5NSCam5Utils4ULog7ULogger12onLogSubreqsEjPKcNS1_13RequestTypeIdEjS5_PKjj() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::ULogGuard::unregisterReqGuard(unsigned int, NSCam::Utils::ULog::RequestTypeId, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog9ULogGuard18unregisterReqGuardEjNS1_13RequestTypeIdEj(void) {
    ALOGD("_ZN5NSCam5Utils4ULog9ULogGuard18unregisterReqGuardEjNS1_13RequestTypeIdEj() called");
    return 0;
}

/* Demangled: std::__1::__owns_two_states<char>::~__owns_two_states() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__117__owns_two_statesIcED0Ev(void) {
    ALOGD("_ZNSt3__117__owns_two_statesIcED0Ev() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::File::FileULogWriter::onLogEnter(NSCam::Utils::ULog::File::LogEnterExit const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog4File14FileULogWriter10onLogEnterEPKNS2_12LogEnterExitE(void) {
    ALOGD("_ZN5NSCam5Utils4ULog4File14FileULogWriter10onLogEnterEPKNS2_12LogEnterExitE() called");
    return 0;
}

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::regex_traits<char>::__lookup_collatename<char*>(char*, char*, char) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__112regex_traitsIcE20__lookup_collatenameIPcEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SA_c(void) {
    ALOGD("_ZNKSt3__112regex_traitsIcE20__lookup_collatenameIPcEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SA_c() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__loop<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__16__loopIcEE = NULL;

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_memcpy4(void) __asm__("__aeabi_memcpy4");
int fn___aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::ULog::AndroidULoggerNoNormalDetails */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils4ULog29AndroidULoggerNoNormalDetailsE = NULL;

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_class_escape<char const*>(char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::__bracket_expression<char, std::__1::regex_traits<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE20__parse_class_escapeIPKcEET_S7_S7_RNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPNS_20__bracket_expressionIcS2_EE(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE20__parse_class_escapeIPKcEET_S7_S7_RNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPNS_20__bracket_expressionIcS2_EE() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<std::__1::__state<char>, std::__1::allocator<std::__1::__state<char> > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseINS_7__stateIcEENS_9allocatorIS2_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseINS_7__stateIcEENS_9allocatorIS2_EEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*, std::__1::allocator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*, std::__1::allocator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS6_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS6_RS8_EE(void) {
    ALOGD("_ZNSt3__16vectorIPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS6_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS6_RS8_EE() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::ULogger::onLogDetails(unsigned int, char const*, NSCam::Utils::ULog::DetailsType, NSCam::Utils::ULog::RequestTypeId, unsigned int, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog7ULogger12onLogDetailsEjPKcNS1_11DetailsTypeENS1_13RequestTypeIdEjS4_j(void) {
    ALOGD("_ZN5NSCam5Utils4ULog7ULogger12onLogDetailsEjPKcNS1_11DetailsTypeENS1_13RequestTypeIdEjS4_j() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::File::PassiveULogger::PassiveULogger() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog4File14PassiveULoggerC2Ev(void) {
    ALOGD("_ZN5NSCam5Utils4ULog4File14PassiveULoggerC2Ev() called");
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_ORD_CHAR<char const*>(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE16__parse_ORD_CHARIPKcEET_S7_S7_(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE16__parse_ORD_CHARIPKcEET_S7_S7_() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::pair<char, char>, std::__1::allocator<std::__1::pair<char, char> > >::__swap_out_circular_buffer(std::__1::__split_buffer<std::__1::pair<char, char>, std::__1::allocator<std::__1::pair<char, char> >&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4pairIccEENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE(void) {
    ALOGD("_ZNSt3__16vectorINS_4pairIccEENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE() called");
    return 0;
}

/* Demangled: std::__1::__empty_non_own_state<char>::__exec(std::__1::__state<char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__121__empty_non_own_stateIcE6__execERNS_7__stateIcEE(void) {
    ALOGD("_ZNKSt3__121__empty_non_own_stateIcE6__execERNS_7__stateIcEE() called");
    return 0;
}

/* Demangled: std::__1::__begin_marked_subexpression<char>::__exec(std::__1::__state<char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__128__begin_marked_subexpressionIcE6__execERNS_7__stateIcEE(void) {
    ALOGD("_ZNKSt3__128__begin_marked_subexpressionIcE6__execERNS_7__stateIcEE() called");
    return 0;
}

/* Demangled: android::wp<NSCam::Utils::ULog::ULogGuard::IFinalizer>& std::__1::list<android::wp<NSCam::Utils::ULog::ULogGuard::IFinalizer>, std::__1::allocator<android::wp<NSCam::Utils::ULog::ULogGuard::IFinalizer> > >::emplace_back<android::sp<NSCam::Utils::ULog::ULogGuard::IFinalizer>&>(android::sp<NSCam::Utils::ULog::ULogGuard::IFinalizer>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14listIN7android2wpIN5NSCam5Utils4ULog9ULogGuard10IFinalizerEEENS_9allocatorIS8_EEE12emplace_backIJRNS1_2spIS7_EEEEERS8_DpOT_(void) {
    ALOGD("_ZNSt3__14listIN7android2wpIN5NSCam5Utils4ULog9ULogGuard10IFinalizerEEENS_9allocatorIS8_EEE12emplace_backIJRNS1_2spIS7_EEEEERS8_DpOT_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__back_ref_collate<char, std::__1::regex_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__118__back_ref_collateIcNS_12regex_traitsIcEEEE = NULL;

/* Exported Object: vtable for std::__1::__end_marked_subexpression<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__126__end_marked_subexpressionIcEE = NULL;

/* Demangled: bool std::__1::basic_regex<char, std::__1::regex_traits<char> >::__match_at_start_posix_subs<std::__1::allocator<std::__1::sub_match<char const*> > >(char const*, char const*, std::__1::match_results<char const*, std::__1::allocator<std::__1::sub_match<char const*> > >&, std::__1::regex_constants::match_flag_type, bool) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__111basic_regexIcNS_12regex_traitsIcEEE27__match_at_start_posix_subsINS_9allocatorINS_9sub_matchIPKcEEEEEEbS8_S8_RNS_13match_resultsIS8_T_EENS_15regex_constants15match_flag_typeEb(void) {
    ALOGD("_ZNKSt3__111basic_regexIcNS_12regex_traitsIcEEE27__match_at_start_posix_subsINS_9allocatorINS_9sub_matchIPKcEEEEEEbS8_S8_RNS_13match_resultsIS8_T_EENS_15regex_constants15match_flag_typeEb() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_memcpy8(void) __asm__("__aeabi_memcpy8");
int fn___aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Exported Object: NSCam::Utils::ULog::ULogger::sNormalDetailsMask */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam5Utils4ULog7ULogger18sNormalDetailsMaskE = NULL;

/* Exported Object: NSCam::Utils::ULog::ULogTable::sSingleton */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam5Utils4ULog9ULogTable10sSingletonE = NULL;

/* Exported Object: vtable for NSCam::Utils::ULog::File::PassiveULogger */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils4ULog4File14PassiveULoggerE = NULL;

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_atom<char const*>(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE12__parse_atomIPKcEET_S7_S7_(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE12__parse_atomIPKcEET_S7_S7_() called");
    return 0;
}

/* Demangled: std::__1::basic_regex<char, std::__1::regex_traits<char> >::__push_back_ref(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE15__push_back_refEi(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE15__push_back_refEi() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::File::FileULoggerBase::getFolderPath(char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog4File15FileULoggerBase13getFolderPathEPcj(void) {
    ALOGD("_ZN5NSCam5Utils4ULog4File15FileULoggerBase13getFolderPathEPcj() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::ULogGuard::registerFuncGuard(unsigned int, char const*, char const*, char const*, int, int, char const*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog9ULogGuard17registerFuncGuardEjPKcS4_S4_iiS4_Pi(void) {
    ALOGD("_ZN5NSCam5Utils4ULog9ULogGuard17registerFuncGuardEjPKcS4_S4_iiS4_Pi() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::sub_match<char const*>, std::__1::allocator<std::__1::sub_match<char const*> > >::resize(unsigned int, std::__1::sub_match<char const*> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_9sub_matchIPKcEENS_9allocatorIS4_EEE6resizeEjRKS4_(void) {
    ALOGD("_ZNSt3__16vectorINS_9sub_matchIPKcEENS_9allocatorIS4_EEE6resizeEjRKS4_() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::ULogRuntimeDiag::dumpToLog() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog15ULogRuntimeDiag9dumpToLogEv(void) {
    ALOGD("_ZN5NSCam5Utils4ULog15ULogRuntimeDiag9dumpToLogEv() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::File::FileULogWriter::open(bool, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog4File14FileULogWriter4openEbPKcb(void) {
    ALOGD("_ZN5NSCam5Utils4ULog4File14FileULogWriter4openEbPKcb() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::ULogGuardMonitor::printBacktraces() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog16ULogGuardMonitor15printBacktracesEv(void) {
    ALOGD("_ZN5NSCam5Utils4ULog16ULogGuardMonitor15printBacktracesEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::pair<char, char>, std::__1::allocator<std::__1::pair<char, char> > >::__push_back_slow_path<std::__1::pair<char, char> >(std::__1::pair<char, char>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4pairIccEENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_4pairIccEENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__begin_marked_subexpression<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__128__begin_marked_subexpressionIcEE = NULL;

/* Demangled: NSCam::Utils::ULog::File::FileULogger::FileULogger() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog4File11FileULoggerC2Ev(void) {
    ALOGD("_ZN5NSCam5Utils4ULog4File11FileULoggerC2Ev() called");
    return 0;
}

/* Demangled: std::__1::__deque_iterator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*&, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord***, int, 1024> std::__1::move_backward<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*&, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord***, int, 1024, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*&, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord***, int, 1024>(std::__1::__deque_iterator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*&, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord***, int, 1024>, std::__1::__deque_iterator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*&, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord***, int, 1024>, std::__1::__deque_iterator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*&, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord***, int, 1024>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113move_backwardIPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordEPS6_RS6_PS7_iLi1024ES6_S7_S8_S9_iLi1024EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENSA_IT_T0_T1_T2_T3_XT4_EEESM_SG_(void) {
    ALOGD("_ZNSt3__113move_backwardIPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordEPS6_RS6_PS7_iLi1024ES6_S7_S8_S9_iLi1024EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENSA_IT_T0_T1_T2_T3_XT4_EEESM_SG_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::sub_match<std::__1::__wrap_iter<char const*> >, std::__1::allocator<std::__1::sub_match<std::__1::__wrap_iter<char const*> > >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<std::__1::sub_match<std::__1::__wrap_iter<char const*> > >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferINS_9sub_matchINS_11__wrap_iterIPKcEEEERNS_9allocatorIS6_EEEC2EjjS9_(void) {
    ALOGD("_ZNSt3__114__split_bufferINS_9sub_matchINS_11__wrap_iterIPKcEEEERNS_9allocatorIS6_EEEC2EjjS9_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__match_any_but_newline<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__123__match_any_but_newlineIcEE = NULL;

/* Demangled: std::__1::__deque_base<std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> >, std::__1::allocator<std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> > > >::~__deque_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseINS_10unique_ptrIN5NSCam5Utils4ULog4File15FileULoggerBase6BufferENS_14default_deleteIS7_EEEENS_9allocatorISA_EEED2Ev(void) {
    ALOGD("_ZNSt3__112__deque_baseINS_10unique_ptrIN5NSCam5Utils4ULog4File15FileULoggerBase6BufferENS_14default_deleteIS7_EEEENS_9allocatorISA_EEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::ULogGuard::registerFinalizer(android::sp<NSCam::Utils::ULog::ULogGuard::IFinalizer>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog9ULogGuard17registerFinalizerEN7android2spINS2_10IFinalizerEEE(void) {
    ALOGD("_ZN5NSCam5Utils4ULog9ULogGuard17registerFinalizerEN7android2spINS2_10IFinalizerEEE() called");
    return 0;
}

/* Demangled: std::__1::list<android::wp<NSCam::Utils::ULog::ULogGuard::IFinalizer>, std::__1::allocator<android::wp<NSCam::Utils::ULog::ULogGuard::IFinalizer> > >::erase(std::__1::__list_const_iterator<android::wp<NSCam::Utils::ULog::ULogGuard::IFinalizer>, void*>, std::__1::__list_const_iterator<android::wp<NSCam::Utils::ULog::ULogGuard::IFinalizer>, void*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14listIN7android2wpIN5NSCam5Utils4ULog9ULogGuard10IFinalizerEEENS_9allocatorIS8_EEE5eraseENS_21__list_const_iteratorIS8_PvEESE_(void) {
    ALOGD("_ZNSt3__14listIN7android2wpIN5NSCam5Utils4ULog9ULogGuard10IFinalizerEEENS_9allocatorIS8_EEE5eraseENS_21__list_const_iteratorIS8_PvEESE_() called");
    return 0;
}

/* Demangled: _ZNSt3__14listIN7android2wpIN5NSCam5Utils4ULog9ULogGuard10IFinalizerEEENS_9allocatorIS8_EEE6assignINS_21__list_const_iteratorIS8_PvEEEEvT_SG_PNS_9enable_ifIXsr19__is_input_iteratorISG_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14listIN7android2wpIN5NSCam5Utils4ULog9ULogGuard10IFinalizerEEENS_9allocatorIS8_EEE6assignINS_21__list_const_iteratorIS8_PvEEEEvT_SG_PNS_9enable_ifIXsr19__is_input_iteratorISG_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__14listIN7android2wpIN5NSCam5Utils4ULog9ULogGuard10IFinalizerEEENS_9allocatorIS8_EEE6assignINS_21__list_const_iteratorIS8_PvEEEEvT_SG_PNS_9enable_ifIXsr19__is_input_iteratorISG_EE5valueEvE4typeE() called");
    return 0;
}

/* Demangled: std::__1::__back_ref<char>::__exec(std::__1::__state<char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__back_refIcE6__execERNS_7__stateIcEE(void) {
    ALOGD("_ZNKSt3__110__back_refIcE6__execERNS_7__stateIcEE() called");
    return 0;
}

/* Demangled: std::__1::__alternate<char>::__exec(std::__1::__state<char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__111__alternateIcE6__execERNS_7__stateIcEE(void) {
    ALOGD("_ZNKSt3__111__alternateIcE6__execERNS_7__stateIcEE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::Utils::ULog::ULogMtkcamDebuggee, std::__1::allocator<NSCam::Utils::ULog::ULogMtkcamDebuggee> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam5Utils4ULog18ULogMtkcamDebuggeeENS_9allocatorIS4_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam5Utils4ULog18ULogMtkcamDebuggeeENS_9allocatorIS4_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::unique_lock<std::__1::mutex>::unlock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111unique_lockINS_5mutexEE6unlockEv(void) {
    ALOGD("_ZNSt3__111unique_lockINS_5mutexEE6unlockEv() called");
    return 0;
}

/* Demangled: std::__1::regex_traits<char>::regex_traits() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112regex_traitsIcEC2Ev(void) {
    ALOGD("_ZNSt3__112regex_traitsIcEC2Ev() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorINS_9sub_matchIPKcEENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_9sub_matchIPKcEENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_(void) {
    ALOGD("_ZNSt3__16vectorINS_9sub_matchIPKcEENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__empty_state<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__113__empty_stateIcEE = NULL;

/* Demangled: NSCam::Utils::ULog::ULogGuardMonitor::start() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog16ULogGuardMonitor5startEv(void) {
    ALOGD("_ZN5NSCam5Utils4ULog16ULogGuardMonitor5startEv() called");
    return 0;
}

/* Demangled: std::__1::basic_regex<char, std::__1::regex_traits<char> >::__push_char(char) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE11__push_charEc(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE11__push_charEc() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::sub_match<char const*>, std::__1::allocator<std::__1::sub_match<char const*> >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<std::__1::sub_match<char const*> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferINS_9sub_matchIPKcEERNS_9allocatorIS4_EEEC2EjjS7_(void) {
    ALOGD("_ZNSt3__114__split_bufferINS_9sub_matchIPKcEERNS_9allocatorIS4_EEEC2EjjS7_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::__state<char>*, std::__1::allocator<std::__1::__state<char>*> >::push_front(std::__1::__state<char>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_7__stateIcEENS_9allocatorIS3_EEE10push_frontEOS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_7__stateIcEENS_9allocatorIS3_EEE10push_frontEOS3_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::__state<char>*, std::__1::allocator<std::__1::__state<char>*>&>::push_front(std::__1::__state<char>* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_7__stateIcEERNS_9allocatorIS3_EEE10push_frontERKS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_7__stateIcEERNS_9allocatorIS3_EEE10push_frontERKS3_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__lookahead<char, std::__1::regex_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__111__lookaheadIcNS_12regex_traitsIcEEEE = NULL;

/* Exported Object: __emutls_v._ZN5NSCam5Utils4ULog16sThreadGuardDataE */
extern "C" __attribute__((visibility("default"))) void* obj___emutls_v__ZN5NSCam5Utils4ULog16sThreadGuardDataE __asm__("__emutls_v._ZN5NSCam5Utils4ULog16sThreadGuardDataE") = NULL;

/* Demangled: NSCam::Utils::ULog::printIntArray(char*, unsigned int, unsigned int const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog13printIntArrayEPcjPKjj(void) {
    ALOGD("_ZN5NSCam5Utils4ULog13printIntArrayEPcjPKjj() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::ULogRuntimeDiag::onInit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog15ULogRuntimeDiag6onInitEv(void) {
    ALOGD("_ZN5NSCam5Utils4ULog15ULogRuntimeDiag6onInitEv() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::ULogGuardMonitor::ULogGuardMonitor() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog16ULogGuardMonitorC1Ev(void) {
    ALOGD("_ZN5NSCam5Utils4ULog16ULogGuardMonitorC1Ev() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::File::FileULoggerBase::onLogDiscard(unsigned int, char const*, NSCam::Utils::ULog::RequestTypeId, unsigned int const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog4File15FileULoggerBase12onLogDiscardEjPKcNS1_13RequestTypeIdEPKjj(void) {
    ALOGD("_ZN5NSCam5Utils4ULog4File15FileULoggerBase12onLogDiscardEjPKcNS1_13RequestTypeIdEPKjj() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::IDebuggeeCookie>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam15IDebuggeeCookieEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam15IDebuggeeCookieEED2Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__match_char<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__112__match_charIcEE = NULL;

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_memclr4(void) __asm__("__aeabi_memclr4");
int fn___aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEEC2EjjS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEEC2EjjS8_() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::ULogGuard::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog9ULogGuard8onUninitEv(void) {
    ALOGD("_ZN5NSCam5Utils4ULog9ULogGuard8onUninitEv() called");
    return 0;
}

/* Demangled: __aeabi_l2d */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_l2d(void) __asm__("__aeabi_l2d");
int fn___aeabi_l2d(void) {
    ALOGD("__aeabi_l2d() called");
    return 0;
}

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::regex_traits<char>::__transform_primary<std::__1::__wrap_iter<char*> >(std::__1::__wrap_iter<char*>, std::__1::__wrap_iter<char*>, char) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__112regex_traitsIcE19__transform_primaryINS_11__wrap_iterIPcEEEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SC_c(void) {
    ALOGD("_ZNKSt3__112regex_traitsIcE19__transform_primaryINS_11__wrap_iterIPcEEEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SC_c() called");
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_basic_reg_exp<char const*>(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE21__parse_basic_reg_expIPKcEET_S7_S7_(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE21__parse_basic_reg_expIPKcEET_S7_S7_() called");
    return 0;
}

/* Demangled: __aeabi_memmove4 */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_memmove4(void) __asm__("__aeabi_memmove4");
int fn___aeabi_memmove4(void) {
    ALOGD("__aeabi_memmove4() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::__state<char>*, std::__1::allocator<std::__1::__state<char>*> >::push_back(std::__1::__state<char>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_7__stateIcEENS_9allocatorIS3_EEE9push_backEOS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_7__stateIcEENS_9allocatorIS3_EEE9push_backEOS3_() called");
    return 0;
}

/* Demangled: std::__1::vector<char, std::__1::allocator<char> >::__swap_out_circular_buffer(std::__1::__split_buffer<char, std::__1::allocator<char>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIcNS_9allocatorIcEEE26__swap_out_circular_bufferERNS_14__split_bufferIcRS2_EE(void) {
    ALOGD("_ZNSt3__16vectorIcNS_9allocatorIcEEE26__swap_out_circular_bufferERNS_14__split_bufferIcRS2_EE() called");
    return 0;
}

/* Demangled: __divmoddi4 */
extern "C" __attribute__((visibility("default"))) int fn___divmoddi4(void) __asm__("__divmoddi4");
int fn___divmoddi4(void) {
    ALOGD("__divmoddi4() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::File::PassiveULogger::PassiveULogger() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog4File14PassiveULoggerC1Ev(void) {
    ALOGD("_ZN5NSCam5Utils4ULog4File14PassiveULoggerC1Ev() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::ULogger::onFlush(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog7ULogger7onFlushEi(void) {
    ALOGD("_ZN5NSCam5Utils4ULog7ULogger7onFlushEi() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::ULog::ULogMtkcamDebuggee */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils4ULog18ULogMtkcamDebuggeeE = NULL;

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_memclr8(void) __asm__("__aeabi_memclr8");
int fn___aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: unsigned short std::__1::regex_traits<char>::__lookup_classname<char const*>(char const*, char const*, bool, char) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__112regex_traitsIcE18__lookup_classnameIPKcEEtT_S5_bc(void) {
    ALOGD("_ZNKSt3__112regex_traitsIcE18__lookup_classnameIPKcEEtT_S5_bc() called");
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_DUP_COUNT<char const*>(char const*, char const*, int&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE17__parse_DUP_COUNTIPKcEET_S7_S7_Ri(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE17__parse_DUP_COUNTIPKcEET_S7_S7_Ri() called");
    return 0;
}

/* Exported Object: NSCam::Utils::ULog::ULogGuardMonitor::sSingleton */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam5Utils4ULog16ULogGuardMonitor10sSingletonE = NULL;

/* Demangled: android::wp<NSCam::Utils::ULog::ULogGuard::IFinalizer>::operator=(android::wp<NSCam::Utils::ULog::ULogGuard::IFinalizer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2wpIN5NSCam5Utils4ULog9ULogGuard10IFinalizerEEaSERKS6_(void) {
    ALOGD("_ZN7android2wpIN5NSCam5Utils4ULog9ULogGuard10IFinalizerEEaSERKS6_() called");
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_pattern_character<char const*>(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE25__parse_pattern_characterIPKcEET_S7_S7_(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE25__parse_pattern_characterIPKcEET_S7_S7_() called");
    return 0;
}

/* Demangled: std::__1::basic_regex<char, std::__1::regex_traits<char> >::__push_begin_marked_subexpression() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE33__push_begin_marked_subexpressionEv(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE33__push_begin_marked_subexpressionEv() called");
    return 0;
}

/* Demangled: std::__1::list<android::wp<NSCam::Utils::ULog::ULogGuard::IFinalizer>, std::__1::allocator<android::wp<NSCam::Utils::ULog::ULogGuard::IFinalizer> > >::erase(std::__1::__list_const_iterator<android::wp<NSCam::Utils::ULog::ULogGuard::IFinalizer>, void*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14listIN7android2wpIN5NSCam5Utils4ULog9ULogGuard10IFinalizerEEENS_9allocatorIS8_EEE5eraseENS_21__list_const_iteratorIS8_PvEE(void) {
    ALOGD("_ZNSt3__14listIN7android2wpIN5NSCam5Utils4ULog9ULogGuard10IFinalizerEEENS_9allocatorIS8_EEE5eraseENS_21__list_const_iteratorIS8_PvEE() called");
    return 0;
}

/* Exported Object: NSCam::Utils::ULog::ULogger::sMode */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam5Utils4ULog7ULogger5sModeE = NULL;

/* Exported Object: vtable for NSCam::Utils::ULog::File::FileULogger */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils4ULog4File11FileULoggerE = NULL;

/* Exported Object: NSCam::Utils::ULog::File::FileULoggerBase::sActiveLogger */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam5Utils4ULog4File15FileULoggerBase13sActiveLoggerE = NULL;

/* Demangled: std::__1::deque<std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> >, std::__1::allocator<std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> > > >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeINS_10unique_ptrIN5NSCam5Utils4ULog4File15FileULoggerBase6BufferENS_14default_deleteIS7_EEEENS_9allocatorISA_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeINS_10unique_ptrIN5NSCam5Utils4ULog4File15FileULoggerBase6BufferENS_14default_deleteIS7_EEEENS_9allocatorISA_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: std::__1::deque<std::__1::__state<char>, std::__1::allocator<std::__1::__state<char> > >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeINS_7__stateIcEENS_9allocatorIS2_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeINS_7__stateIcEENS_9allocatorIS2_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: __aeabi_memmove8 */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_memmove8(void) __asm__("__aeabi_memmove8");
int fn___aeabi_memmove8(void) {
    ALOGD("__aeabi_memmove8() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::File::FileULogWriter::onLogFuncExt(NSCam::Utils::ULog::File::LogFuncExt const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog4File14FileULogWriter12onLogFuncExtEPKNS2_10LogFuncExtE(void) {
    ALOGD("_ZN5NSCam5Utils4ULog4File14FileULogWriter12onLogFuncExtEPKNS2_10LogFuncExtE() called");
    return 0;
}

/* Demangled: std::__1::deque<std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> >, std::__1::allocator<std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> > > >::pop_back() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeINS_10unique_ptrIN5NSCam5Utils4ULog4File15FileULoggerBase6BufferENS_14default_deleteIS7_EEEENS_9allocatorISA_EEE8pop_backEv(void) {
    ALOGD("_ZNSt3__15dequeINS_10unique_ptrIN5NSCam5Utils4ULog4File15FileULoggerBase6BufferENS_14default_deleteIS7_EEEENS_9allocatorISA_EEE8pop_backEv() called");
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_ERE_expression<char const*>(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE22__parse_ERE_expressionIPKcEET_S7_S7_(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE22__parse_ERE_expressionIPKcEET_S7_S7_() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_memset(void) __asm__("__aeabi_memset");
int fn___aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::File::FileULoggerBase::onLogFuncLifeExt(unsigned int, char const*, char const*, NSCam::Utils::ULog::FuncLifeTag, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog4File15FileULoggerBase16onLogFuncLifeExtEjPKcS5_NS1_11FuncLifeTagEiii(void) {
    ALOGD("_ZN5NSCam5Utils4ULog4File15FileULoggerBase16onLogFuncLifeExtEjPKcS5_NS1_11FuncLifeTagEiii() called");
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_character_escape<char const*>(char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE24__parse_character_escapeIPKcEET_S7_S7_PNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE24__parse_character_escapeIPKcEET_S7_S7_PNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__1::__owns_one_state<char>::~__owns_one_state() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__116__owns_one_stateIcED2Ev(void) {
    ALOGD("_ZNSt3__116__owns_one_stateIcED2Ev() called");
    return 0;
}

/* Exported Object: NSCam::Utils::ULog::ULogFuncLife::sModFilterMask */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam5Utils4ULog12ULogFuncLife14sModFilterMaskE = NULL;

/* Demangled: NSCam::Utils::ULog::File::FileULogger::onInit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog4File11FileULogger6onInitEv(void) {
    ALOGD("_ZN5NSCam5Utils4ULog4File11FileULogger6onInitEv() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::File::FileULoggerBase::onLogSubreqs(unsigned int, char const*, NSCam::Utils::ULog::RequestTypeId, unsigned int, NSCam::Utils::ULog::RequestTypeId, unsigned int const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog4File15FileULoggerBase12onLogSubreqsEjPKcNS1_13RequestTypeIdEjS6_PKjj(void) {
    ALOGD("_ZN5NSCam5Utils4ULog4File15FileULoggerBase12onLogSubreqsEjPKcNS1_13RequestTypeIdEjS6_PKjj() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::pair<unsigned int, char const*>, std::__1::allocator<std::__1::pair<unsigned int, char const*> > >::resize(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4pairIjPKcEENS_9allocatorIS4_EEE6resizeEj(void) {
    ALOGD("_ZNSt3__16vectorINS_4pairIjPKcEENS_9allocatorIS4_EEE6resizeEj() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*, std::__1::allocator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*> >::__push_back_slow_path<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*>(NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::File::FileULogger::FileULogger() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog4File11FileULoggerC1Ev(void) {
    ALOGD("_ZN5NSCam5Utils4ULog4File11FileULoggerC1Ev() called");
    return 0;
}

/* Demangled: __divdi3 */
extern "C" __attribute__((visibility("default"))) int fn___divdi3(void) __asm__("__divdi3");
int fn___divdi3(void) {
    ALOGD("__divdi3() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::File::FileULogger::onFlush(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog4File11FileULogger7onFlushEi(void) {
    ALOGD("_ZN5NSCam5Utils4ULog4File11FileULogger7onFlushEi() called");
    return 0;
}

/* Demangled: std::__1::basic_regex<char, std::__1::regex_traits<char> >::__push_word_boundary(bool) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE20__push_word_boundaryEb(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE20__push_word_boundaryEb() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**, std::__1::allocator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**>&>::push_front(NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord** const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordERNS_9allocatorIS7_EEE10push_frontERKS7_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordERNS_9allocatorIS7_EEE10push_frontERKS7_() called");
    return 0;
}

/* Demangled: std::__1::deque<std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> >, std::__1::allocator<std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> > > >::pop_front() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeINS_10unique_ptrIN5NSCam5Utils4ULog4File15FileULoggerBase6BufferENS_14default_deleteIS7_EEEENS_9allocatorISA_EEE9pop_frontEv(void) {
    ALOGD("_ZNSt3__15dequeINS_10unique_ptrIN5NSCam5Utils4ULog4File15FileULoggerBase6BufferENS_14default_deleteIS7_EEEENS_9allocatorISA_EEE9pop_frontEv() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::sub_match<char const*>, std::__1::allocator<std::__1::sub_match<char const*> > >::assign(unsigned int, std::__1::sub_match<char const*> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_9sub_matchIPKcEENS_9allocatorIS4_EEE6assignEjRKS4_(void) {
    ALOGD("_ZNSt3__16vectorINS_9sub_matchIPKcEENS_9allocatorIS4_EEE6assignEjRKS4_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**, std::__1::allocator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**>&>::push_back(NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordERNS_9allocatorIS7_EEE9push_backEOS7_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordERNS_9allocatorIS7_EEE9push_backEOS7_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__match_any<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__111__match_anyIcEE = NULL;

/* Exported Object: vtable for NSCam::Utils::ULog::DualULogger<NSCam::Utils::ULog::TraceULogger, NSCam::Utils::ULog::AndroidULoggerNoNormalDetails> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils4ULog11DualULoggerINS1_12TraceULoggerENS1_29AndroidULoggerNoNormalDetailsEEE = NULL;

/* Demangled: NSCam::Utils::ULog::File::FileULoggerBase::initHook() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog4File15FileULoggerBase8initHookEv(void) {
    ALOGD("_ZN5NSCam5Utils4ULog4File15FileULoggerBase8initHookEv() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::ULogRTDiagImpl::timeoutPickSuspect(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog14ULogRTDiagImpl18timeoutPickSuspectEji(void) {
    ALOGD("_ZN5NSCam5Utils4ULog14ULogRTDiagImpl18timeoutPickSuspectEji() called");
    return 0;
}

/* Demangled: std::__1::__alternate<char>::__exec_split(bool, std::__1::__state<char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__111__alternateIcE12__exec_splitEbRNS_7__stateIcEE(void) {
    ALOGD("_ZNKSt3__111__alternateIcE12__exec_splitEbRNS_7__stateIcEE() called");
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_QUOTED_CHAR_ERE<char const*>(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE23__parse_QUOTED_CHAR_EREIPKcEET_S7_S7_(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE23__parse_QUOTED_CHAR_EREIPKcEET_S7_S7_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::__state<char>, std::__1::allocator<std::__1::__state<char> >&>::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferINS_7__stateIcEERNS_9allocatorIS2_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferINS_7__stateIcEERNS_9allocatorIS2_EEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*, std::__1::allocator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*> >::reserve(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS6_EEE7reserveEj(void) {
    ALOGD("_ZNSt3__16vectorIPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS6_EEE7reserveEj() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::ULogger::onLogPathJoin(unsigned int, char const*, NSCam::Utils::ULog::RequestTypeId, unsigned int, unsigned int const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog7ULogger13onLogPathJoinEjPKcNS1_13RequestTypeIdEjPKjj(void) {
    ALOGD("_ZN5NSCam5Utils4ULog7ULogger13onLogPathJoinEjPKcNS1_13RequestTypeIdEjPKjj() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_memclr(void) __asm__("__aeabi_memclr");
int fn___aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::__state<char>, std::__1::allocator<std::__1::__state<char> > >::__swap_out_circular_buffer(std::__1::__split_buffer<std::__1::__state<char>, std::__1::allocator<std::__1::__state<char> >&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_7__stateIcEENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE(void) {
    ALOGD("_ZNSt3__16vectorINS_7__stateIcEENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__end_state<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__111__end_stateIcEE = NULL;

/* Demangled: __floatdidf */
extern "C" __attribute__((visibility("default"))) int fn___floatdidf(void) __asm__("__floatdidf");
int fn___floatdidf(void) {
    ALOGD("__floatdidf() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::File::FileULoggerBase::onLogFuncLife(unsigned int, char const*, char const*, NSCam::Utils::ULog::FuncLifeTag) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog4File15FileULoggerBase13onLogFuncLifeEjPKcS5_NS1_11FuncLifeTagE(void) {
    ALOGD("_ZN5NSCam5Utils4ULog4File15FileULoggerBase13onLogFuncLifeEjPKcS5_NS1_11FuncLifeTagE() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::ULogger::~ULogger() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog7ULoggerD2Ev(void) {
    ALOGD("_ZN5NSCam5Utils4ULog7ULoggerD2Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::regex_traits<char>::transform<std::__1::__wrap_iter<char*> >(std::__1::__wrap_iter<char*>, std::__1::__wrap_iter<char*>) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__112regex_traitsIcE9transformINS_11__wrap_iterIPcEEEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SC_(void) {
    ALOGD("_ZNKSt3__112regex_traitsIcE9transformINS_11__wrap_iterIPcEEEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SC_() called");
    return 0;
}

/* Demangled: std::__1::__deque_iterator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*&, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord***, int, 1024> std::__1::move<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*&, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord***, int, 1024, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*&, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord***, int, 1024>(std::__1::__deque_iterator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*&, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord***, int, 1024>, std::__1::__deque_iterator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*&, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord***, int, 1024>, std::__1::__deque_iterator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*&, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord***, int, 1024>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14moveIPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordEPS6_RS6_PS7_iLi1024ES6_S7_S8_S9_iLi1024EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENSA_IT_T0_T1_T2_T3_XT4_EEESM_SG_(void) {
    ALOGD("_ZNSt3__14moveIPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordEPS6_RS6_PS7_iLi1024ES6_S7_S8_S9_iLi1024EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENSA_IT_T0_T1_T2_T3_XT4_EEESM_SG_() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::ULogInitializer::~ULogInitializer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog15ULogInitializerD2Ev(void) {
    ALOGD("_ZN5NSCam5Utils4ULog15ULogInitializerD2Ev() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::ULogger::onLogPathDiv(unsigned int, char const*, NSCam::Utils::ULog::RequestTypeId, unsigned int, unsigned int const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog7ULogger12onLogPathDivEjPKcNS1_13RequestTypeIdEjPKjj(void) {
    ALOGD("_ZN5NSCam5Utils4ULog7ULogger12onLogPathDivEjPKcNS1_13RequestTypeIdEjPKjj() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::ULog::DualULogger<NSCam::Utils::ULog::TraceULogger, NSCam::Utils::ULog::File::PassiveULogger> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils4ULog11DualULoggerINS1_12TraceULoggerENS1_4File14PassiveULoggerEEE = NULL;

/* Demangled: NSCam::Utils::ULog::ULogGuard::registerReqGuard(unsigned int, NSCam::Utils::ULog::RequestTypeId, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog9ULogGuard16registerReqGuardEjNS1_13RequestTypeIdEji(void) {
    ALOGD("_ZN5NSCam5Utils4ULog9ULogGuard16registerReqGuardEjNS1_13RequestTypeIdEji() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::ULogGuard::unregisterFuncGuard(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog9ULogGuard19unregisterFuncGuardEi(void) {
    ALOGD("_ZN5NSCam5Utils4ULog9ULogGuard19unregisterFuncGuardEi() called");
    return 0;
}

/* Demangled: std::__1::__repeat_one_loop<char>::__exec(std::__1::__state<char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__117__repeat_one_loopIcE6__execERNS_7__stateIcEE(void) {
    ALOGD("_ZNKSt3__117__repeat_one_loopIcE6__execERNS_7__stateIcEE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**, std::__1::allocator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**> >::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS7_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferIPPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS7_EEED2Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__l_anchor<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__l_anchorIcEE = NULL;

/* Demangled: NSCam::Utils::ULog::File::PassiveULogger::flushThreadEntry() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog4File14PassiveULogger16flushThreadEntryEv(void) {
    ALOGD("_ZN5NSCam5Utils4ULog4File14PassiveULogger16flushThreadEntryEv() called");
    return 0;
}

/* Demangled: std::__1::__loop<char>::__exec(std::__1::__state<char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__16__loopIcE6__execERNS_7__stateIcEE(void) {
    ALOGD("_ZNKSt3__16__loopIcE6__execERNS_7__stateIcEE() called");
    return 0;
}

/* Demangled: std::__1::__list_imp<android::wp<NSCam::Utils::ULog::ULogGuard::IFinalizer>, std::__1::allocator<android::wp<NSCam::Utils::ULog::ULogGuard::IFinalizer> > >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIN7android2wpIN5NSCam5Utils4ULog9ULogGuard10IFinalizerEEENS_9allocatorIS8_EEE5clearEv(void) {
    ALOGD("_ZNSt3__110__list_impIN7android2wpIN5NSCam5Utils4ULog9ULogGuard10IFinalizerEEENS_9allocatorIS8_EEE5clearEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> >*, std::__1::allocator<std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> >*>&>::push_back(std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> >*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_10unique_ptrIN5NSCam5Utils4ULog4File15FileULoggerBase6BufferENS_14default_deleteIS7_EEEERNS_9allocatorISB_EEE9push_backEOSB_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_10unique_ptrIN5NSCam5Utils4ULog4File15FileULoggerBase6BufferENS_14default_deleteIS7_EEEERNS_9allocatorISB_EEE9push_backEOSB_() called");
    return 0;
}

/* Demangled: bool std::__1::basic_regex<char, std::__1::regex_traits<char> >::__match_at_start_ecma<std::__1::allocator<std::__1::sub_match<char const*> > >(char const*, char const*, std::__1::match_results<char const*, std::__1::allocator<std::__1::sub_match<char const*> > >&, std::__1::regex_constants::match_flag_type, bool) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__111basic_regexIcNS_12regex_traitsIcEEE21__match_at_start_ecmaINS_9allocatorINS_9sub_matchIPKcEEEEEEbS8_S8_RNS_13match_resultsIS8_T_EENS_15regex_constants15match_flag_typeEb(void) {
    ALOGD("_ZNKSt3__111basic_regexIcNS_12regex_traitsIcEEE21__match_at_start_ecmaINS_9allocatorINS_9sub_matchIPKcEEEEEEbS8_S8_RNS_13match_resultsIS8_T_EENS_15regex_constants15match_flag_typeEb() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::sub_match<std::__1::__wrap_iter<char const*> >, std::__1::allocator<std::__1::sub_match<std::__1::__wrap_iter<char const*> > > >::__swap_out_circular_buffer(std::__1::__split_buffer<std::__1::sub_match<std::__1::__wrap_iter<char const*> >, std::__1::allocator<std::__1::sub_match<std::__1::__wrap_iter<char const*> > >&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_9sub_matchINS_11__wrap_iterIPKcEEEENS_9allocatorIS6_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS6_RS8_EE(void) {
    ALOGD("_ZNSt3__16vectorINS_9sub_matchINS_11__wrap_iterIPKcEEEENS_9allocatorIS6_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS6_RS8_EE() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::ULogger::addModFilterMask(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog7ULogger16addModFilterMaskEj(void) {
    ALOGD("_ZN5NSCam5Utils4ULog7ULogger16addModFilterMaskEj() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::File::FileULogWriter::onLogFunc(NSCam::Utils::ULog::File::LogFunc const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog4File14FileULogWriter9onLogFuncEPKNS2_7LogFuncE(void) {
    ALOGD("_ZN5NSCam5Utils4ULog4File14FileULogWriter9onLogFuncEPKNS2_7LogFuncE() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::ULogGuardMonitor::onTimeout(unsigned int, int, char const*, int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog16ULogGuardMonitor9onTimeoutEjiPKciRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN5NSCam5Utils4ULog16ULogGuardMonitor9onTimeoutEjiPKciRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__1::__match_any<char>::__exec(std::__1::__state<char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__111__match_anyIcE6__execERNS_7__stateIcEE(void) {
    ALOGD("_ZNKSt3__111__match_anyIcE6__execERNS_7__stateIcEE() called");
    return 0;
}

/* Demangled: std::__1::basic_regex<char, std::__1::regex_traits<char> >::__push_lookahead(std::__1::basic_regex<char, std::__1::regex_traits<char> > const&, bool, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE16__push_lookaheadERKS3_bj(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE16__push_lookaheadERKS3_bj() called");
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_ERE_dupl_symbol<char const*>(char const*, char const*, std::__1::__owns_one_state<char>*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE23__parse_ERE_dupl_symbolIPKcEET_S7_S7_PNS_16__owns_one_stateIcEEjj(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE23__parse_ERE_dupl_symbolIPKcEET_S7_S7_PNS_16__owns_one_stateIcEEjj() called");
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_character_class_escape<char const*>(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE30__parse_character_class_escapeIPKcEET_S7_S7_(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE30__parse_character_class_escapeIPKcEET_S7_S7_() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> >, std::__1::allocator<std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> > > >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseINS_10unique_ptrIN5NSCam5Utils4ULog4File15FileULoggerBase6BufferENS_14default_deleteIS7_EEEENS_9allocatorISA_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseINS_10unique_ptrIN5NSCam5Utils4ULog4File15FileULoggerBase6BufferENS_14default_deleteIS7_EEEENS_9allocatorISA_EEE5clearEv() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::File::FileULoggerBase::sigHandler(int, siginfo*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog4File15FileULoggerBase10sigHandlerEiP7siginfoPv(void) {
    ALOGD("_ZN5NSCam5Utils4ULog4File15FileULoggerBase10sigHandlerEiP7siginfoPv() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::pair<unsigned int, char const*>, std::__1::allocator<std::__1::pair<unsigned int, char const*> > >::vector(std::__1::vector<std::__1::pair<unsigned int, char const*>, std::__1::allocator<std::__1::pair<unsigned int, char const*> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4pairIjPKcEENS_9allocatorIS4_EEEC2ERKS7_(void) {
    ALOGD("_ZNSt3__16vectorINS_4pairIjPKcEENS_9allocatorIS4_EEEC2ERKS7_() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::File::PassiveULogger::onInit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog4File14PassiveULogger6onInitEv(void) {
    ALOGD("_ZN5NSCam5Utils4ULog4File14PassiveULogger6onInitEv() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::ULogTable::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog9ULogTable4initEv(void) {
    ALOGD("_ZN5NSCam5Utils4ULog9ULogTable4initEv() called");
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_nondupl_RE<char const*>(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE18__parse_nondupl_REIPKcEET_S7_S7_(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE18__parse_nondupl_REIPKcEET_S7_S7_() called");
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_one_char_or_coll_elem_ERE<char const*>(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE33__parse_one_char_or_coll_elem_EREIPKcEET_S7_S7_(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE33__parse_one_char_or_coll_elem_EREIPKcEET_S7_S7_() called");
    return 0;
}

/* Demangled: void std::__1::vector<char, std::__1::allocator<char> >::__push_back_slow_path<char const&>(char const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIcNS_9allocatorIcEEE21__push_back_slow_pathIRKcEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIcNS_9allocatorIcEEE21__push_back_slow_pathIRKcEEvOT_() called");
    return 0;
}

/* Demangled: __aeabi_ldivmod */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_ldivmod(void) __asm__("__aeabi_ldivmod");
int fn___aeabi_ldivmod(void) {
    ALOGD("__aeabi_ldivmod() called");
    return 0;
}

/* Demangled: std::__1::__list_imp<NSCam::Utils::ULog::ThreadGuardData const*, std::__1::allocator<NSCam::Utils::ULog::ThreadGuardData const*> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIPKN5NSCam5Utils4ULog15ThreadGuardDataENS_9allocatorIS6_EEE5clearEv(void) {
    ALOGD("_ZNSt3__110__list_impIPKN5NSCam5Utils4ULog15ThreadGuardDataENS_9allocatorIS6_EEE5clearEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::pair<char, char>, std::__1::allocator<std::__1::pair<char, char> >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<std::__1::pair<char, char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferINS_4pairIccEERNS_9allocatorIS2_EEEC2EjjS5_(void) {
    ALOGD("_ZNSt3__114__split_bufferINS_4pairIccEERNS_9allocatorIS2_EEEC2EjjS5_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__match_char_collate<char, std::__1::regex_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__match_char_collateIcNS_12regex_traitsIcEEEE = NULL;

/* Demangled: NSCam::Utils::ULog::File::FileULoggerBase::onLogExit(unsigned int, char const*, NSCam::Utils::ULog::RequestTypeId, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog4File15FileULoggerBase9onLogExitEjPKcNS1_13RequestTypeIdEj(void) {
    ALOGD("_ZN5NSCam5Utils4ULog4File15FileULoggerBase9onLogExitEjPKcNS1_13RequestTypeIdEj() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::Utils::ULog::ULogMtkcamDebuggee> std::__1::shared_ptr<NSCam::Utils::ULog::ULogMtkcamDebuggee>::make_shared<>() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam5Utils4ULog18ULogMtkcamDebuggeeEE11make_sharedIJEEES5_DpOT_(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam5Utils4ULog18ULogMtkcamDebuggeeEE11make_sharedIJEEES5_DpOT_() called");
    return 0;
}

/* Demangled: std::__1::__loop<char>::__exec_split(bool, std::__1::__state<char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__16__loopIcE12__exec_splitEbRNS_7__stateIcEE(void) {
    ALOGD("_ZNKSt3__16__loopIcE12__exec_splitEbRNS_7__stateIcEE() called");
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_expression_term<char const*>(char const*, char const*, std::__1::__bracket_expression<char, std::__1::regex_traits<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE23__parse_expression_termIPKcEET_S7_S7_PNS_20__bracket_expressionIcS2_EE(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE23__parse_expression_termIPKcEET_S7_S7_PNS_20__bracket_expressionIcS2_EE() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_() called");
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_ERE_branch<char const*>(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE18__parse_ERE_branchIPKcEET_S7_S7_(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE18__parse_ERE_branchIPKcEET_S7_S7_() called");
    return 0;
}

/* Demangled: std::__1::deque<std::__1::__state<char>, std::__1::allocator<std::__1::__state<char> > >::__add_front_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeINS_7__stateIcEENS_9allocatorIS2_EEE20__add_front_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeINS_7__stateIcEENS_9allocatorIS2_EEE20__add_front_capacityEv() called");
    return 0;
}

/* Demangled: std::__1::deque<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*, std::__1::allocator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*> >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS6_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS6_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Exported Object: NSCam::Utils::ULog::ULogInitializerImpl::sInited */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam5Utils4ULog19ULogInitializerImpl7sInitedE = NULL;

/* Demangled: NSCam::Utils::ULog::File::FileULogWriter::onLogPathJoin(NSCam::Utils::ULog::File::LogPathTopo const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog4File14FileULogWriter13onLogPathJoinEPKNS2_11LogPathTopoE(void) {
    ALOGD("_ZN5NSCam5Utils4ULog4File14FileULogWriter13onLogPathJoinEPKNS2_11LogPathTopoE() called");
    return 0;
}

/* Demangled: std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> >& std::__1::deque<std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> >, std::__1::allocator<std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> > > >::emplace_back<std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> > >(std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeINS_10unique_ptrIN5NSCam5Utils4ULog4File15FileULoggerBase6BufferENS_14default_deleteIS7_EEEENS_9allocatorISA_EEE12emplace_backIJSA_EEERSA_DpOT_(void) {
    ALOGD("_ZNSt3__15dequeINS_10unique_ptrIN5NSCam5Utils4ULog4File15FileULoggerBase6BufferENS_14default_deleteIS7_EEEENS_9allocatorISA_EEE12emplace_backIJSA_EEERSA_DpOT_() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::ULogGuardMonitor::printToFileLog(char const*, char const*&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog16ULogGuardMonitor14printToFileLogEPKcRS4_(void) {
    ALOGD("_ZN5NSCam5Utils4ULog16ULogGuardMonitor14printToFileLogEPKcRS4_() called");
    return 0;
}

/* Demangled: std::__1::__lookahead<char, std::__1::regex_traits<char> >::__exec(std::__1::__state<char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__111__lookaheadIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE(void) {
    ALOGD("_ZNKSt3__111__lookaheadIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE() called");
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_ORD_CHAR_ERE<char const*>(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE20__parse_ORD_CHAR_EREIPKcEET_S7_S7_(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE20__parse_ORD_CHAR_EREIPKcEET_S7_S7_() called");
    return 0;
}

/* Demangled: std::__1::match_results<char const*, std::__1::allocator<std::__1::sub_match<char const*> > >::__init(unsigned int, char const*, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113match_resultsIPKcNS_9allocatorINS_9sub_matchIS2_EEEEE6__initEjS2_S2_b(void) {
    ALOGD("_ZNSt3__113match_resultsIPKcNS_9allocatorINS_9sub_matchIS2_EEEEE6__initEjS2_S2_b() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::ULog::DualULogger<NSCam::Utils::ULog::TraceULogger, NSCam::Utils::ULog::File::FileULogger> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils4ULog11DualULoggerINS1_12TraceULoggerENS1_4File11FileULoggerEEE = NULL;

/* Demangled: std::__1::__match_char_icase<char, std::__1::regex_traits<char> >::__exec(std::__1::__state<char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__118__match_char_icaseIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE(void) {
    ALOGD("_ZNKSt3__118__match_char_icaseIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE() called");
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_assertion<char const*>(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE17__parse_assertionIPKcEET_S7_S7_(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE17__parse_assertionIPKcEET_S7_S7_() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<std::__1::__state<char>, std::__1::allocator<std::__1::__state<char> > >::~__deque_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseINS_7__stateIcEENS_9allocatorIS2_EEED2Ev(void) {
    ALOGD("_ZNSt3__112__deque_baseINS_7__stateIcEENS_9allocatorIS2_EEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::ULogTable::getModuleName(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam5Utils4ULog9ULogTable13getModuleNameEj(void) {
    ALOGD("_ZNK5NSCam5Utils4ULog9ULogTable13getModuleNameEj() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::__state<char>*, std::__1::allocator<std::__1::__state<char>*>&>::push_back(std::__1::__state<char>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_7__stateIcEERNS_9allocatorIS3_EEE9push_backEOS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_7__stateIcEERNS_9allocatorIS3_EEE9push_backEOS3_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<android::LogPrinter, std::__1::allocator<android::LogPrinter> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN7android10LogPrinterENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN7android10LogPrinterENS_9allocatorIS2_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Exported Object: NSCam::Utils::ULog::ULogger::sDetailsLevel */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam5Utils4ULog7ULogger13sDetailsLevelE = NULL;

/* Demangled: std::__1::__back_ref_collate<char, std::__1::regex_traits<char> >::__exec(std::__1::__state<char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__118__back_ref_collateIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE(void) {
    ALOGD("_ZNKSt3__118__back_ref_collateIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE() called");
    return 0;
}

/* Demangled: std::__1::__bracket_expression<char, std::__1::regex_traits<char> >::__exec(std::__1::__state<char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__120__bracket_expressionIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE(void) {
    ALOGD("_ZNKSt3__120__bracket_expressionIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__repeat_one_loop<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__117__repeat_one_loopIcEE = NULL;

/* Exported Object: vtable for std::__1::__empty_non_own_state<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__121__empty_non_own_stateIcEE = NULL;

/* Demangled: void* std::__1::__thread_proxy<std::__1::tuple<std::__1::unique_ptr<std::__1::__thread_struct, std::__1::default_delete<std::__1::__thread_struct> >, void (NSCam::Utils::ULog::File::FileULogger::*)(), NSCam::Utils::ULog::File::FileULogger*> >(void*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEMN5NSCam5Utils4ULog4File11FileULoggerEFvvEPSB_EEEEEPvSG_(void) {
    ALOGD("_ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEMN5NSCam5Utils4ULog4File11FileULoggerEFvvEPSB_EEEEEPvSG_() called");
    return 0;
}

/* Demangled: bool std::__1::basic_regex<char, std::__1::regex_traits<char> >::__match_at_start<std::__1::allocator<std::__1::sub_match<char const*> > >(char const*, char const*, std::__1::match_results<char const*, std::__1::allocator<std::__1::sub_match<char const*> > >&, std::__1::regex_constants::match_flag_type, bool) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__111basic_regexIcNS_12regex_traitsIcEEE16__match_at_startINS_9allocatorINS_9sub_matchIPKcEEEEEEbS8_S8_RNS_13match_resultsIS8_T_EENS_15regex_constants15match_flag_typeEb(void) {
    ALOGD("_ZNKSt3__111basic_regexIcNS_12regex_traitsIcEEE16__match_at_startINS_9allocatorINS_9sub_matchIPKcEEEEEEbS8_S8_RNS_13match_resultsIS8_T_EENS_15regex_constants15match_flag_typeEb() called");
    return 0;
}

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::regex_traits<char>::__lookup_collatename<char const*>(char const*, char const*, char) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__112regex_traitsIcE20__lookup_collatenameIPKcEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SB_c(void) {
    ALOGD("_ZNKSt3__112regex_traitsIcE20__lookup_collatenameIPKcEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SB_c() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::__state<char>, std::__1::allocator<std::__1::__state<char> >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<std::__1::__state<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferINS_7__stateIcEERNS_9allocatorIS2_EEEC2EjjS5_(void) {
    ALOGD("_ZNSt3__114__split_bufferINS_7__stateIcEERNS_9allocatorIS2_EEEC2EjjS5_() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::ULogRTDiagImpl::dumpToFile(int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog14ULogRTDiagImpl10dumpToFileEiPKc(void) {
    ALOGD("_ZN5NSCam5Utils4ULog14ULogRTDiagImpl10dumpToFileEiPKc() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::File::FileULoggerBase::onLogPathDiv(unsigned int, char const*, NSCam::Utils::ULog::RequestTypeId, unsigned int, unsigned int const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog4File15FileULoggerBase12onLogPathDivEjPKcNS1_13RequestTypeIdEjPKjj(void) {
    ALOGD("_ZN5NSCam5Utils4ULog4File15FileULoggerBase12onLogPathDivEjPKcNS1_13RequestTypeIdEjPKjj() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::ULogger::~ULogger() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog7ULoggerD1Ev(void) {
    ALOGD("_ZN5NSCam5Utils4ULog7ULoggerD1Ev() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::getTopCamModuleName(int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog19getTopCamModuleNameEiRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEERS8_(void) {
    ALOGD("_ZN5NSCam5Utils4ULog19getTopCamModuleNameEiRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEERS8_() called");
    return 0;
}

/* Demangled: TLS init function for NSCam::Utils::ULog::sThreadGuardData */
extern "C" __attribute__((visibility("default"))) int _ZTHN5NSCam5Utils4ULog16sThreadGuardDataE(void) {
    ALOGD("_ZTHN5NSCam5Utils4ULog16sThreadGuardDataE() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::ULogInitializer::~ULogInitializer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog15ULogInitializerD1Ev(void) {
    ALOGD("_ZN5NSCam5Utils4ULog15ULogInitializerD1Ev() called");
    return 0;
}

/* Exported Object: NSCam::Utils::ULog::ULogger::sULogger */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam5Utils4ULog7ULogger8sULoggerE = NULL;

/* Demangled: NSCam::Utils::ULog::File::FileULogger::flushThreadEntry() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog4File11FileULogger16flushThreadEntryEv(void) {
    ALOGD("_ZN5NSCam5Utils4ULog4File11FileULogger16flushThreadEntryEv() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::File::FileULogWriter::onLogDetails(NSCam::Utils::ULog::File::LogDetails const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog4File14FileULogWriter12onLogDetailsEPKNS2_10LogDetailsE(void) {
    ALOGD("_ZN5NSCam5Utils4ULog4File14FileULogWriter12onLogDetailsEPKNS2_10LogDetailsE() called");
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_QUOTED_CHAR<char const*>(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE19__parse_QUOTED_CHARIPKcEET_S7_S7_(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE19__parse_QUOTED_CHARIPKcEET_S7_S7_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__back_ref<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__back_refIcEE = NULL;

/* Demangled: NSCam::Utils::ULog::File::FileULoggerBase::uninitHook() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog4File15FileULoggerBase10uninitHookEv(void) {
    ALOGD("_ZN5NSCam5Utils4ULog4File15FileULoggerBase10uninitHookEv() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::ULogGuardMonitor::RequestQueue::RequestQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog16ULogGuardMonitor12RequestQueueC2Ev(void) {
    ALOGD("_ZN5NSCam5Utils4ULog16ULogGuardMonitor12RequestQueueC2Ev() called");
    return 0;
}

/* Demangled: bool std::__1::basic_regex<char, std::__1::regex_traits<char> >::__search<std::__1::allocator<std::__1::sub_match<char const*> > >(char const*, char const*, std::__1::match_results<char const*, std::__1::allocator<std::__1::sub_match<char const*> > >&, std::__1::regex_constants::match_flag_type) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__111basic_regexIcNS_12regex_traitsIcEEE8__searchINS_9allocatorINS_9sub_matchIPKcEEEEEEbS8_S8_RNS_13match_resultsIS8_T_EENS_15regex_constants15match_flag_typeE(void) {
    ALOGD("_ZNKSt3__111basic_regexIcNS_12regex_traitsIcEEE8__searchINS_9allocatorINS_9sub_matchIPKcEEEEEEbS8_S8_RNS_13match_resultsIS8_T_EENS_15regex_constants15match_flag_typeE() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS5_IS8_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS5_IS8_EEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::__state<char>*, std::__1::allocator<std::__1::__state<char>*> >::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_7__stateIcEENS_9allocatorIS3_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_7__stateIcEENS_9allocatorIS3_EEED2Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__bracket_expression<char, std::__1::regex_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__bracket_expressionIcNS_12regex_traitsIcEEEE = NULL;

/* Exported Object: vtable for NSCam::Utils::ULog::ULogger */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils4ULog7ULoggerE = NULL;

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_collating_symbol<char const*>(char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE24__parse_collating_symbolIPKcEET_S7_S7_RNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE24__parse_collating_symbolIPKcEET_S7_S7_RNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::pair<unsigned int, char const*>, std::__1::allocator<std::__1::pair<unsigned int, char const*> > >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4pairIjPKcEENS_9allocatorIS4_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorINS_4pairIjPKcEENS_9allocatorIS4_EEE8__appendEj() called");
    return 0;
}

/* Demangled: __udivmodsi4 */
extern "C" __attribute__((visibility("default"))) int fn___udivmodsi4(void) __asm__("__udivmodsi4");
int fn___udivmodsi4(void) {
    ALOGD("__udivmodsi4() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::ULogGuardMonitor::registerReqGuard(unsigned int, NSCam::Utils::ULog::RequestTypeId, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog16ULogGuardMonitor16registerReqGuardEjNS1_13RequestTypeIdEji(void) {
    ALOGD("_ZN5NSCam5Utils4ULog16ULogGuardMonitor16registerReqGuardEjNS1_13RequestTypeIdEji() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::sub_match<std::__1::__wrap_iter<char const*> >, std::__1::allocator<std::__1::sub_match<std::__1::__wrap_iter<char const*> > > >::resize(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_9sub_matchINS_11__wrap_iterIPKcEEEENS_9allocatorIS6_EEE6resizeEj(void) {
    ALOGD("_ZNSt3__16vectorINS_9sub_matchINS_11__wrap_iterIPKcEEEENS_9allocatorIS6_EEE6resizeEj() called");
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_awk_escape<char const*>(char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE18__parse_awk_escapeIPKcEET_S7_S7_PNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE18__parse_awk_escapeIPKcEET_S7_S7_PNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__push_back_slow_path<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >(std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS5_IS8_EEE21__push_back_slow_pathIS8_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS5_IS8_EEE21__push_back_slow_pathIS8_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> >*, std::__1::allocator<std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> >*> >::push_front(std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> >*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_10unique_ptrIN5NSCam5Utils4ULog4File15FileULoggerBase6BufferENS_14default_deleteIS7_EEEENS_9allocatorISB_EEE10push_frontEOSB_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_10unique_ptrIN5NSCam5Utils4ULog4File15FileULoggerBase6BufferENS_14default_deleteIS7_EEEENS_9allocatorISB_EEE10push_frontEOSB_() called");
    return 0;
}

/* Demangled: std::__1::__owns_one_state<char>::~__owns_one_state() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__116__owns_one_stateIcED0Ev(void) {
    ALOGD("_ZNSt3__116__owns_one_stateIcED0Ev() called");
    return 0;
}

/* Demangled: __udivsi3 */
extern "C" __attribute__((visibility("default"))) int fn___udivsi3(void) __asm__("__udivsi3");
int fn___udivsi3(void) {
    ALOGD("__udivsi3() called");
    return 0;
}

/* Exported Object: NSCam::Utils::ULog::ULogger::sModFilterMask */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam5Utils4ULog7ULogger14sModFilterMaskE = NULL;

/* Demangled: NSCam::Utils::ULog::ULogGuardMonitor::unregisterReqGuard(unsigned int, NSCam::Utils::ULog::RequestTypeId, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog16ULogGuardMonitor18unregisterReqGuardEjNS1_13RequestTypeIdEj(void) {
    ALOGD("_ZN5NSCam5Utils4ULog16ULogGuardMonitor18unregisterReqGuardEjNS1_13RequestTypeIdEj() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__match_char_icase<char, std::__1::regex_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__118__match_char_icaseIcNS_12regex_traitsIcEEEE = NULL;

/* Demangled: NSCam::Utils::ULog::File::PassiveULogger::onFlush(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog4File14PassiveULogger7onFlushEi(void) {
    ALOGD("_ZN5NSCam5Utils4ULog4File14PassiveULogger7onFlushEi() called");
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_one_char_or_coll_elem_RE<char const*>(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE32__parse_one_char_or_coll_elem_REIPKcEET_S7_S7_(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE32__parse_one_char_or_coll_elem_REIPKcEET_S7_S7_() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::pair<unsigned int, char const*>, std::__1::allocator<std::__1::pair<unsigned int, char const*> > >::__swap_out_circular_buffer(std::__1::__split_buffer<std::__1::pair<unsigned int, char const*>, std::__1::allocator<std::__1::pair<unsigned int, char const*> >&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4pairIjPKcEENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE(void) {
    ALOGD("_ZNSt3__16vectorINS_4pairIjPKcEENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::sub_match<char const*>, std::__1::allocator<std::__1::sub_match<char const*> > >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_9sub_matchIPKcEENS_9allocatorIS4_EEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorINS_9sub_matchIPKcEENS_9allocatorIS4_EEE11__vallocateEj() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__back_ref_icase<char, std::__1::regex_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__116__back_ref_icaseIcNS_12regex_traitsIcEEEE = NULL;

/* Demangled: NSCam::Utils::ULog::ULogGuardMonitor::~ULogGuardMonitor() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog16ULogGuardMonitorD2Ev(void) {
    ALOGD("_ZN5NSCam5Utils4ULog16ULogGuardMonitorD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__word_boundary<char, std::__1::regex_traits<char> >::__exec(std::__1::__state<char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__115__word_boundaryIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE(void) {
    ALOGD("_ZNKSt3__115__word_boundaryIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE() called");
    return 0;
}

/* Exported Object: NSCam::Utils::ULog::__setULogToAndroidByDefault */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam5Utils4ULog27__setULogToAndroidByDefaultE = NULL;

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_term<char const*>(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE12__parse_termIPKcEET_S7_S7_(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE12__parse_termIPKcEET_S7_S7_() called");
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_egrep<char const*>(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE13__parse_egrepIPKcEET_S7_S7_(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE13__parse_egrepIPKcEET_S7_S7_() called");
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_atom_escape<char const*>(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE19__parse_atom_escapeIPKcEET_S7_S7_(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE19__parse_atom_escapeIPKcEET_S7_S7_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<std::__1::__empty_state<char>*, std::__1::default_delete<std::__1::__empty_state<char> >, std::__1::allocator<std::__1::__empty_state<char> > >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPNS_13__empty_stateIcEENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPNS_13__empty_stateIcEENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Exported Object: NSCam::Utils::ULog::ULogRuntimeDiag::sDiag */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam5Utils4ULog15ULogRuntimeDiag5sDiagE = NULL;

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::regex_traits<char>::__transform_primary<char*>(char*, char*, char) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__112regex_traitsIcE19__transform_primaryIPcEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SA_c(void) {
    ALOGD("_ZNKSt3__112regex_traitsIcE19__transform_primaryIPcEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SA_c() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::getDefaultULogger() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog17getDefaultULoggerEv(void) {
    ALOGD("_ZN5NSCam5Utils4ULog17getDefaultULoggerEv() called");
    return 0;
}

/* Exported Object: NSCam::Utils::ULog::ULogInitializerImpl::sDefaultAndroidLogType */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam5Utils4ULog19ULogInitializerImpl22sDefaultAndroidLogTypeE = NULL;

/* Demangled: NSCam::Utils::ULog::File::FileULoggerBase::onLogEnter(unsigned int, char const*, NSCam::Utils::ULog::RequestTypeId, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog4File15FileULoggerBase10onLogEnterEjPKcNS1_13RequestTypeIdEj(void) {
    ALOGD("_ZN5NSCam5Utils4ULog4File15FileULoggerBase10onLogEnterEjPKcNS1_13RequestTypeIdEj() called");
    return 0;
}

/* Demangled: __emutls_get_address */
extern "C" __attribute__((visibility("default"))) int fn___emutls_get_address(void) __asm__("__emutls_get_address");
int fn___emutls_get_address(void) {
    ALOGD("__emutls_get_address() called");
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_grep<char const*>(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE12__parse_grepIPKcEET_S7_S7_(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE12__parse_grepIPKcEET_S7_S7_() called");
    return 0;
}

/* Demangled: std::__1::basic_regex<char, std::__1::regex_traits<char> >::__push_alternation(std::__1::__owns_one_state<char>*, std::__1::__owns_one_state<char>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE18__push_alternationEPNS_16__owns_one_stateIcEES6_(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE18__push_alternationEPNS_16__owns_one_stateIcEES6_() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::__state<char>, std::__1::allocator<std::__1::__state<char> > >::__push_back_slow_path<std::__1::__state<char> >(std::__1::__state<char>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_7__stateIcEENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_7__stateIcEENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::File::FileULoggerBase::onLogPathJoin(unsigned int, char const*, NSCam::Utils::ULog::RequestTypeId, unsigned int, unsigned int const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog4File15FileULoggerBase13onLogPathJoinEjPKcNS1_13RequestTypeIdEjPKjj(void) {
    ALOGD("_ZN5NSCam5Utils4ULog4File15FileULoggerBase13onLogPathJoinEjPKcNS1_13RequestTypeIdEjPKjj() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> >*, std::__1::allocator<std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> >*> >::push_back(std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> >*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_10unique_ptrIN5NSCam5Utils4ULog4File15FileULoggerBase6BufferENS_14default_deleteIS7_EEEENS_9allocatorISB_EEE9push_backEOSB_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_10unique_ptrIN5NSCam5Utils4ULog4File15FileULoggerBase6BufferENS_14default_deleteIS7_EEEENS_9allocatorISB_EEE9push_backEOSB_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__owns_two_states<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__117__owns_two_statesIcEE = NULL;

/* Demangled: NSCam::Utils::ULog::ULogRuntimeDiag::onLogDiscard(unsigned int, NSCam::Utils::ULog::RequestTypeId, unsigned int const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog15ULogRuntimeDiag12onLogDiscardEjNS1_13RequestTypeIdEPKjj(void) {
    ALOGD("_ZN5NSCam5Utils4ULog15ULogRuntimeDiag12onLogDiscardEjNS1_13RequestTypeIdEPKjj() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::ULogger::~ULogger() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog7ULoggerD0Ev(void) {
    ALOGD("_ZN5NSCam5Utils4ULog7ULoggerD0Ev() called");
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_bracket_expression<char const*>(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE26__parse_bracket_expressionIPKcEET_S7_S7_(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE26__parse_bracket_expressionIPKcEET_S7_S7_() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::File::PassiveULogger::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog4File14PassiveULogger8onUninitEv(void) {
    ALOGD("_ZN5NSCam5Utils4ULog4File14PassiveULogger8onUninitEv() called");
    return 0;
}

/* Demangled: std::__1::__match_char<char>::__exec(std::__1::__state<char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__112__match_charIcE6__execERNS_7__stateIcEE(void) {
    ALOGD("_ZNKSt3__112__match_charIcE6__execERNS_7__stateIcEE() called");
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_simple_RE<char const*>(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE17__parse_simple_REIPKcEET_S7_S7_(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE17__parse_simple_REIPKcEET_S7_S7_() called");
    return 0;
}

/* Demangled: std::__1::__owns_two_states<char>::~__owns_two_states() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__117__owns_two_statesIcED2Ev(void) {
    ALOGD("_ZNSt3__117__owns_two_statesIcED2Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<std::__1::__empty_state<char>*, std::__1::default_delete<std::__1::__empty_state<char> >, std::__1::allocator<std::__1::__empty_state<char> > >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPNS_13__empty_stateIcEENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPNS_13__empty_stateIcEENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::ULogGuardMonitor::RequestQueue::RequestQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog16ULogGuardMonitor12RequestQueueC1Ev(void) {
    ALOGD("_ZN5NSCam5Utils4ULog16ULogGuardMonitor12RequestQueueC1Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_regex<char, std::__1::regex_traits<char> >::__push_loop(unsigned int, unsigned int, std::__1::__owns_one_state<char>*, unsigned int, unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE11__push_loopEjjPNS_16__owns_one_stateIcEEjjb(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE11__push_loopEjjPNS_16__owns_one_stateIcEEjjb() called");
    return 0;
}

/* Demangled: _ZNSt3__14moveIPPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordES6_S7_RS6_PS7_iLi1024EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SH_SG_PNS_9enable_ifIXsr27__is_random_access_iteratorISH_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14moveIPPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordES6_S7_RS6_PS7_iLi1024EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SH_SG_PNS_9enable_ifIXsr27__is_random_access_iteratorISH_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__14moveIPPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordES6_S7_RS6_PS7_iLi1024EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SH_SG_PNS_9enable_ifIXsr27__is_random_access_iteratorISH_EE5valueEvE4typeE() called");
    return 0;
}

/* Demangled: __aeabi_uidiv */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_uidiv(void) __asm__("__aeabi_uidiv");
int fn___aeabi_uidiv(void) {
    ALOGD("__aeabi_uidiv() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::File::FileULogWriter::writeString(char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog4File14FileULogWriter11writeStringEPKcz(void) {
    ALOGD("_ZN5NSCam5Utils4ULog4File14FileULogWriter11writeStringEPKcz() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::File::FileULoggerBase::FileULoggerBase() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog4File15FileULoggerBaseC2Ev(void) {
    ALOGD("_ZN5NSCam5Utils4ULog4File15FileULoggerBaseC2Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> >*, std::__1::allocator<std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> >*>&>::push_front(std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> >* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_10unique_ptrIN5NSCam5Utils4ULog4File15FileULoggerBase6BufferENS_14default_deleteIS7_EEEERNS_9allocatorISB_EEE10push_frontERKSB_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_10unique_ptrIN5NSCam5Utils4ULog4File15FileULoggerBase6BufferENS_14default_deleteIS7_EEEERNS_9allocatorISB_EEE10push_frontERKSB_() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::ULogGuardMonitor::registerFinalizer(android::sp<NSCam::Utils::ULog::ULogGuard::IFinalizer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog16ULogGuardMonitor17registerFinalizerERN7android2spINS1_9ULogGuard10IFinalizerEEE(void) {
    ALOGD("_ZN5NSCam5Utils4ULog16ULogGuardMonitor17registerFinalizerERN7android2spINS1_9ULogGuard10IFinalizerEEE() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::ULogGuardMonitor::finalize() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog16ULogGuardMonitor8finalizeEv(void) {
    ALOGD("_ZN5NSCam5Utils4ULog16ULogGuardMonitor8finalizeEv() called");
    return 0;
}

/* Demangled: std::__1::__l_anchor<char>::__exec(std::__1::__state<char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__l_anchorIcE6__execERNS_7__stateIcEE(void) {
    ALOGD("_ZNKSt3__110__l_anchorIcE6__execERNS_7__stateIcEE() called");
    return 0;
}

/* Demangled: std::__1::deque<std::__1::__state<char>, std::__1::allocator<std::__1::__state<char> > >::push_front(std::__1::__state<char>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeINS_7__stateIcEENS_9allocatorIS2_EEE10push_frontEOS2_(void) {
    ALOGD("_ZNSt3__15dequeINS_7__stateIcEENS_9allocatorIS2_EEE10push_frontEOS2_() called");
    return 0;
}

/* Demangled: std::__1::deque<std::__1::__state<char>, std::__1::allocator<std::__1::__state<char> > >::push_back(std::__1::__state<char>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeINS_7__stateIcEENS_9allocatorIS2_EEE9push_backEOS2_(void) {
    ALOGD("_ZNSt3__15dequeINS_7__stateIcEENS_9allocatorIS2_EEE9push_backEOS2_() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::sub_match<std::__1::__wrap_iter<char const*> >, std::__1::allocator<std::__1::sub_match<std::__1::__wrap_iter<char const*> > > >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_9sub_matchINS_11__wrap_iterIPKcEEEENS_9allocatorIS6_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorINS_9sub_matchINS_11__wrap_iterIPKcEEEENS_9allocatorIS6_EEE8__appendEj() called");
    return 0;
}

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::regex_traits<char>::transform<char*>(char*, char*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__112regex_traitsIcE9transformIPcEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SA_(void) {
    ALOGD("_ZNKSt3__112regex_traitsIcE9transformIPcEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SA_() called");
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_RE_dupl_symbol<char const*>(char const*, char const*, std::__1::__owns_one_state<char>*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE22__parse_RE_dupl_symbolIPKcEET_S7_S7_PNS_16__owns_one_stateIcEEjj(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE22__parse_RE_dupl_symbolIPKcEET_S7_S7_PNS_16__owns_one_stateIcEEjj() called");
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_decimal_escape<char const*>(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE22__parse_decimal_escapeIPKcEET_S7_S7_(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE22__parse_decimal_escapeIPKcEET_S7_S7_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**, std::__1::allocator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**> >::push_back(NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS7_EEE9push_backEOS7_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS7_EEE9push_backEOS7_() called");
    return 0;
}

/* Demangled: std::__1::deque<std::__1::__state<char>, std::__1::allocator<std::__1::__state<char> > >::pop_back() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeINS_7__stateIcEENS_9allocatorIS2_EEE8pop_backEv(void) {
    ALOGD("_ZNSt3__15dequeINS_7__stateIcEENS_9allocatorIS2_EEE8pop_backEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<android::LogPrinter, std::__1::allocator<android::LogPrinter> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN7android10LogPrinterENS_9allocatorIS2_EEEE = NULL;

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_BACKREF<char const*>(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE15__parse_BACKREFIPKcEET_S7_S7_(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE15__parse_BACKREFIPKcEET_S7_S7_() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::ULogInitializer::ULogInitializer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog15ULogInitializerC2Ev(void) {
    ALOGD("_ZN5NSCam5Utils4ULog15ULogInitializerC2Ev() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::File::FileULogWriter::onLogPathDiv(NSCam::Utils::ULog::File::LogPathTopo const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog4File14FileULogWriter12onLogPathDivEPKNS2_11LogPathTopoE(void) {
    ALOGD("_ZN5NSCam5Utils4ULog4File14FileULogWriter12onLogPathDivEPKNS2_11LogPathTopoE() called");
    return 0;
}

/* Demangled: std::__1::unique_lock<std::__1::mutex>::lock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111unique_lockINS_5mutexEE4lockEv(void) {
    ALOGD("_ZNSt3__111unique_lockINS_5mutexEE4lockEv() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::File::FileULogger::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog4File11FileULogger8onUninitEv(void) {
    ALOGD("_ZN5NSCam5Utils4ULog4File11FileULogger8onUninitEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> >*, std::__1::allocator<std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> >*> >::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_10unique_ptrIN5NSCam5Utils4ULog4File15FileULoggerBase6BufferENS_14default_deleteIS7_EEEENS_9allocatorISB_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_10unique_ptrIN5NSCam5Utils4ULog4File15FileULoggerBase6BufferENS_14default_deleteIS7_EEEENS_9allocatorISB_EEED2Ev() called");
    return 0;
}

/* Demangled: bool std::__1::basic_regex<char, std::__1::regex_traits<char> >::__match_at_start_posix_nosubs<std::__1::allocator<std::__1::sub_match<char const*> > >(char const*, char const*, std::__1::match_results<char const*, std::__1::allocator<std::__1::sub_match<char const*> > >&, std::__1::regex_constants::match_flag_type, bool) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__111basic_regexIcNS_12regex_traitsIcEEE29__match_at_start_posix_nosubsINS_9allocatorINS_9sub_matchIPKcEEEEEEbS8_S8_RNS_13match_resultsIS8_T_EENS_15regex_constants15match_flag_typeEb(void) {
    ALOGD("_ZNKSt3__111basic_regexIcNS_12regex_traitsIcEEE29__match_at_start_posix_nosubsINS_9allocatorINS_9sub_matchIPKcEEEEEEbS8_S8_RNS_13match_resultsIS8_T_EENS_15regex_constants15match_flag_typeEb() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*, std::__1::allocator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS6_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseIPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS6_EEE5clearEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__owns_one_state<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__116__owns_one_stateIcEE = NULL;

/* Demangled: NSCam::Utils::ULog::File::FileULogWriter::writeModuleList(unsigned int const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog4File14FileULogWriter15writeModuleListEPKji(void) {
    ALOGD("_ZN5NSCam5Utils4ULog4File14FileULogWriter15writeModuleListEPKji() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::File::FileULoggerBase::allocLogSpace(unsigned int, NSCam::Utils::ULog::File::LogHeader**, NSCam::Utils::ULog::File::FileULoggerBase::Buffer**, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog4File15FileULoggerBase13allocLogSpaceEjPPNS2_9LogHeaderEPPNS3_6BufferEPj(void) {
    ALOGD("_ZN5NSCam5Utils4ULog4File15FileULoggerBase13allocLogSpaceEjPPNS2_9LogHeaderEPPNS3_6BufferEPj() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::ULogRuntimeDiag::onLogEnter(unsigned int, NSCam::Utils::ULog::RequestTypeId, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog15ULogRuntimeDiag10onLogEnterEjNS1_13RequestTypeIdEj(void) {
    ALOGD("_ZN5NSCam5Utils4ULog15ULogRuntimeDiag10onLogEnterEjNS1_13RequestTypeIdEj() called");
    return 0;
}

/* Demangled: std::__1::__end_state<char>::__exec(std::__1::__state<char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__111__end_stateIcE6__execERNS_7__stateIcEE(void) {
    ALOGD("_ZNKSt3__111__end_stateIcE6__execERNS_7__stateIcEE() called");
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse<char const*>(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE7__parseIPKcEET_S7_S7_(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE7__parseIPKcEET_S7_S7_() called");
    return 0;
}

/* Exported Object: NSCam::Utils::ULog::ULogRTDiagImpl::sSingleton */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam5Utils4ULog14ULogRTDiagImpl10sSingletonE = NULL;

/* Demangled: NSCam::Utils::ULog::ULogGuardMonitor::~ULogGuardMonitor() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog16ULogGuardMonitorD1Ev(void) {
    ALOGD("_ZN5NSCam5Utils4ULog16ULogGuardMonitorD1Ev() called");
    return 0;
}

/* Demangled: void* std::__1::__thread_proxy<std::__1::tuple<std::__1::unique_ptr<std::__1::__thread_struct, std::__1::default_delete<std::__1::__thread_struct> >, void (NSCam::Utils::ULog::File::PassiveULogger::*)(), NSCam::Utils::ULog::File::PassiveULogger*> >(void*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEMN5NSCam5Utils4ULog4File14PassiveULoggerEFvvEPSB_EEEEEPvSG_(void) {
    ALOGD("_ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEMN5NSCam5Utils4ULog4File14PassiveULoggerEFvvEPSB_EEEEEPvSG_() called");
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_ecma_exp<char const*>(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE16__parse_ecma_expIPKcEET_S7_S7_(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE16__parse_ecma_expIPKcEET_S7_S7_() called");
    return 0;
}

/* Demangled: std::__1::basic_regex<char, std::__1::regex_traits<char> >::__start_matching_list(bool) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE21__start_matching_listEb(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE21__start_matching_listEb() called");
    return 0;
}

/* Demangled: std::__1::basic_regex<char, std::__1::regex_traits<char> >::__push_end_marked_subexpression(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE31__push_end_marked_subexpressionEj(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE31__push_end_marked_subexpressionEj() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__word_boundary<char, std::__1::regex_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__115__word_boundaryIcNS_12regex_traitsIcEEEE = NULL;

/* Exported Object: NSCam::Utils::ULog::ULogInitializerImpl::sAndroidULogger */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam5Utils4ULog19ULogInitializerImpl15sAndroidULoggerE = NULL;

/* Demangled: NSCam::Utils::ULog::File::FileULogWriter::close() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog4File14FileULogWriter5closeEv(void) {
    ALOGD("_ZN5NSCam5Utils4ULog4File14FileULogWriter5closeEv() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::File::FileULogWriter::onLogSubreqs(NSCam::Utils::ULog::File::LogSubreqs const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog4File14FileULogWriter12onLogSubreqsEPKNS2_10LogSubreqsE(void) {
    ALOGD("_ZN5NSCam5Utils4ULog4File14FileULogWriter12onLogSubreqsEPKNS2_10LogSubreqsE() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::File::FileULogWriter::flush() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog4File14FileULogWriter5flushEv(void) {
    ALOGD("_ZN5NSCam5Utils4ULog4File14FileULogWriter5flushEv() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::sub_match<char const*>, std::__1::allocator<std::__1::sub_match<char const*> > >::vector(std::__1::vector<std::__1::sub_match<char const*>, std::__1::allocator<std::__1::sub_match<char const*> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_9sub_matchIPKcEENS_9allocatorIS4_EEEC2ERKS7_(void) {
    ALOGD("_ZNSt3__16vectorINS_9sub_matchIPKcEENS_9allocatorIS4_EEEC2ERKS7_() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::ULogRuntimeDiag::onLogExit(unsigned int, NSCam::Utils::ULog::RequestTypeId, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog15ULogRuntimeDiag9onLogExitEjNS1_13RequestTypeIdEj(void) {
    ALOGD("_ZN5NSCam5Utils4ULog15ULogRuntimeDiag9onLogExitEjNS1_13RequestTypeIdEj() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::ULogRTDiagImpl::debugDump(android::Printer&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog14ULogRTDiagImpl9debugDumpERN7android7PrinterE(void) {
    ALOGD("_ZN5NSCam5Utils4ULog14ULogRTDiagImpl9debugDumpERN7android7PrinterE() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::File::FileULogWriter::writeOneLine(char const*, char const*, char const*&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog4File14FileULogWriter12writeOneLineEPKcS5_RS5_(void) {
    ALOGD("_ZN5NSCam5Utils4ULog4File14FileULogWriter12writeOneLineEPKcS5_RS5_() called");
    return 0;
}

/* Demangled: REQUEST_TIMEOUT_PleaseCheckLogToFindOwner */
extern "C" __attribute__((visibility("default"))) int REQUEST_TIMEOUT_PleaseCheckLogToFindOwner(void) {
    ALOGD("REQUEST_TIMEOUT_PleaseCheckLogToFindOwner() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::ULogGuardMonitor::printBacktraces(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog16ULogGuardMonitor15printBacktracesERNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN5NSCam5Utils4ULog16ULogGuardMonitor15printBacktracesERNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::ULogRuntimeDiag::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog15ULogRuntimeDiag8onUninitEv(void) {
    ALOGD("_ZN5NSCam5Utils4ULog15ULogRuntimeDiag8onUninitEv() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::ULogger::onLogValue(unsigned int, char const*, char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog7ULogger10onLogValueEjPKcS4_i(void) {
    ALOGD("_ZN5NSCam5Utils4ULog7ULogger10onLogValueEjPKcS4_i() called");
    return 0;
}

/* Demangled: NSCam::Utils::ULog::ULogGuard::onInit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4ULog9ULogGuard6onInitEv(void) {
    ALOGD("_ZN5NSCam5Utils4ULog9ULogGuard6onInitEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__alternate<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__111__alternateIcEE = NULL;

/* Exported Object: vtable for std::__1::__shared_ptr_pointer<std::__1::__empty_state<char>*, std::__1::default_delete<std::__1::__empty_state<char> >, std::__1::allocator<std::__1::__empty_state<char> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_pointerIPNS_13__empty_stateIcEENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE = NULL;

/* Exported Object: vtable for NSCam::Utils::ULog::TraceULogger */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils4ULog12TraceULoggerE = NULL;

/* Demangled: __aeabi_memmove */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_memmove(void) __asm__("__aeabi_memmove");
int fn___aeabi_memmove(void) {
    ALOGD("__aeabi_memmove() called");
    return 0;
}

/* Demangled: std::__1::__end_marked_subexpression<char>::__exec(std::__1::__state<char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__126__end_marked_subexpressionIcE6__execERNS_7__stateIcEE(void) {
    ALOGD("_ZNKSt3__126__end_marked_subexpressionIcE6__execERNS_7__stateIcEE() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<std::__1::__state<char>, std::__1::allocator<std::__1::__state<char> > >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseINS_7__stateIcEENS_9allocatorIS2_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseINS_7__stateIcEENS_9allocatorIS2_EEE5clearEv() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_memcpy(void) __asm__("__aeabi_memcpy");
int fn___aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/*
 * Reverse-Engineered ABI Specification for: libmtkcam_ulog.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libmtkcam_ulog.so
 */

#ifndef BEGONIA_RE_LIBMTKCAM_ULOG_H
#define BEGONIA_RE_LIBMTKCAM_ULOG_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZNKSt3__110__r_anchorIcE6__execERNS_7__stateIcEE */
/* Demangled: std::__1::__r_anchor<char>::__exec(std::__1::__state<char>&) const */
int _ZNKSt3__110__r_anchorIcE6__execERNS_7__stateIcEE(void);

/* Symbol: _ZNSt3__15dequeIPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS6_EEE9pop_frontEv */
/* Demangled: std::__1::deque<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*, std::__1::allocator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*> >::pop_front() */
int _ZNSt3__15dequeIPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS6_EEE9pop_frontEv(void);

/* Symbol: _ZN5NSCam5Utils4ULog15ULogRuntimeDiag12onLogSubreqsEjNS1_13RequestTypeIdEjS3_PKjj */
/* Demangled: NSCam::Utils::ULog::ULogRuntimeDiag::onLogSubreqs(unsigned int, NSCam::Utils::ULog::RequestTypeId, unsigned int, NSCam::Utils::ULog::RequestTypeId, unsigned int const*, unsigned int) */
int _ZN5NSCam5Utils4ULog15ULogRuntimeDiag12onLogSubreqsEjNS1_13RequestTypeIdEjS3_PKjj(void);

/* Symbol: _ZN5NSCam5Utils4ULog4File14FileULogWriter12onLogDiscardEPKNS2_10LogDiscardE */
/* Demangled: NSCam::Utils::ULog::File::FileULogWriter::onLogDiscard(NSCam::Utils::ULog::File::LogDiscard const*) */
int _ZN5NSCam5Utils4ULog4File14FileULogWriter12onLogDiscardEPKNS2_10LogDiscardE(void);

/* Symbol: _ZN5NSCam5Utils4ULog4File15FileULoggerBaseC1Ev */
/* Demangled: NSCam::Utils::ULog::File::FileULoggerBase::FileULoggerBase() */
int _ZN5NSCam5Utils4ULog4File15FileULoggerBaseC1Ev(void);

/* Symbol: FUNCTION_TIMEOUT_PleaseCheckLogToFindOwner */
/* Demangled: FUNCTION_TIMEOUT_PleaseCheckLogToFindOwner */
int FUNCTION_TIMEOUT_PleaseCheckLogToFindOwner(void);

/* Symbol: _ZNKSt3__116__back_ref_icaseIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE */
/* Demangled: std::__1::__back_ref_icase<char, std::__1::regex_traits<char> >::__exec(std::__1::__state<char>&) const */
int _ZNKSt3__116__back_ref_icaseIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE(void);

/* Symbol: _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS5_IS8_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS8_RS9_EE */
/* Demangled: std::__1::vector<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__swap_out_circular_buffer(std::__1::__split_buffer<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >&>&) */
int _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS5_IS8_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS8_RS9_EE(void);

/* Symbol: _ZNSt3__16vectorINS_4pairIjPKcEENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_ */
/* Demangled: _ZNSt3__16vectorINS_4pairIjPKcEENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_ */
int _ZNSt3__16vectorINS_4pairIjPKcEENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_(void);

/* Symbol: _ZN5NSCam5Utils4ULog7ULogger19onLogDetailsAndroidEjPKcNS1_11DetailsTypeENS1_13RequestTypeIdEjS4_ */
/* Demangled: NSCam::Utils::ULog::ULogger::onLogDetailsAndroid(unsigned int, char const*, NSCam::Utils::ULog::DetailsType, NSCam::Utils::ULog::RequestTypeId, unsigned int, char const*) */
int _ZN5NSCam5Utils4ULog7ULogger19onLogDetailsAndroidEjPKcNS1_11DetailsTypeENS1_13RequestTypeIdEjS4_(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam5Utils4ULog18ULogMtkcamDebuggeeENS_9allocatorIS4_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::Utils::ULog::ULogMtkcamDebuggee, std::__1::allocator<NSCam::Utils::ULog::ULogMtkcamDebuggee> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam5Utils4ULog18ULogMtkcamDebuggeeENS_9allocatorIS4_EEEE;

/* Symbol: _ZNSt3__113move_backwardIPPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordES6_S7_RS6_PS7_iLi1024EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SH_SG_PNS_9enable_ifIXsr27__is_random_access_iteratorISH_EE5valueEvE4typeE */
/* Demangled: _ZNSt3__113move_backwardIPPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordES6_S7_RS6_PS7_iLi1024EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SH_SG_PNS_9enable_ifIXsr27__is_random_access_iteratorISH_EE5valueEvE4typeE */
int _ZNSt3__113move_backwardIPPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordES6_S7_RS6_PS7_iLi1024EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SH_SG_PNS_9enable_ifIXsr27__is_random_access_iteratorISH_EE5valueEvE4typeE(void);

/* Symbol: _ZN5NSCam5Utils4ULog15ULogInitializerC1Ev */
/* Demangled: NSCam::Utils::ULog::ULogInitializer::ULogInitializer() */
int _ZN5NSCam5Utils4ULog15ULogInitializerC1Ev(void);

/* Symbol: _ZNSt3__110shared_ptrINS_13__empty_stateIcEEED2Ev */
/* Demangled: std::__1::shared_ptr<std::__1::__empty_state<char> >::~shared_ptr() */
int _ZNSt3__110shared_ptrINS_13__empty_stateIcEEED2Ev(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE23__parse_character_classIPKcEET_S7_S7_PNS_20__bracket_expressionIcS2_EE */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_character_class<char const*>(char const*, char const*, std::__1::__bracket_expression<char, std::__1::regex_traits<char> >*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE23__parse_character_classIPKcEET_S7_S7_PNS_20__bracket_expressionIcS2_EE(void);

/* Symbol: _ZTVNSt3__110__r_anchorIcEE */
/* Demangled: vtable for std::__1::__r_anchor<char> */
extern void* _ZTVNSt3__110__r_anchorIcEE;

/* Symbol: _ZTVN5NSCam5Utils4ULog4File15FileULoggerBaseE */
/* Demangled: vtable for NSCam::Utils::ULog::File::FileULoggerBase */
extern void* _ZTVN5NSCam5Utils4ULog4File15FileULoggerBaseE;

/* Symbol: _ZTVN5NSCam5Utils4ULog14AndroidULoggerE */
/* Demangled: vtable for NSCam::Utils::ULog::AndroidULogger */
extern void* _ZTVN5NSCam5Utils4ULog14AndroidULoggerE;

/* Symbol: _ZN5NSCam5Utils4ULog16ULogGuardMonitor4stopEv */
/* Demangled: NSCam::Utils::ULog::ULogGuardMonitor::stop() */
int _ZN5NSCam5Utils4ULog16ULogGuardMonitor4stopEv(void);

/* Symbol: _ZN5NSCam5Utils4ULog9ULogGuard17registerFuncGuardEjPKcS4_S4_iPi */
/* Demangled: NSCam::Utils::ULog::ULogGuard::registerFuncGuard(unsigned int, char const*, char const*, char const*, int, int*) */
int _ZN5NSCam5Utils4ULog9ULogGuard17registerFuncGuardEjPKcS4_S4_iPi(void);

/* Symbol: _ZNSt3__114__split_bufferINS_4pairIjPKcEERNS_9allocatorIS4_EEEC2EjjS7_ */
/* Demangled: std::__1::__split_buffer<std::__1::pair<unsigned int, char const*>, std::__1::allocator<std::__1::pair<unsigned int, char const*> >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<std::__1::pair<unsigned int, char const*> >&) */
int _ZNSt3__114__split_bufferINS_4pairIjPKcEERNS_9allocatorIS4_EEEC2EjjS7_(void);

/* Symbol: _ZNSt3__16vectorINS_9sub_matchIPKcEENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE */
/* Demangled: std::__1::vector<std::__1::sub_match<char const*>, std::__1::allocator<std::__1::sub_match<char const*> > >::__swap_out_circular_buffer(std::__1::__split_buffer<std::__1::sub_match<char const*>, std::__1::allocator<std::__1::sub_match<char const*> >&>&) */
int _ZNSt3__16vectorINS_9sub_matchIPKcEENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE(void);

/* Symbol: _ZNK5NSCam5Utils4ULog9ULogTable18getRequestTypeNameENS1_13RequestTypeIdE */
/* Demangled: NSCam::Utils::ULog::ULogTable::getRequestTypeName(NSCam::Utils::ULog::RequestTypeId) const */
int _ZNK5NSCam5Utils4ULog9ULogTable18getRequestTypeNameENS1_13RequestTypeIdE(void);

/* Symbol: _ZN5NSCam5Utils4ULog4File14FileULogWriter9onLogExitEPKNS2_12LogEnterExitE */
/* Demangled: NSCam::Utils::ULog::File::FileULogWriter::onLogExit(NSCam::Utils::ULog::File::LogEnterExit const*) */
int _ZN5NSCam5Utils4ULog4File14FileULogWriter9onLogExitEPKNS2_12LogEnterExitE(void);

/* Symbol: _ZN5NSCam5Utils4ULog16ULogGuardMonitor17printToAndroidLogEPKcRS4_ */
/* Demangled: NSCam::Utils::ULog::ULogGuardMonitor::printToAndroidLog(char const*, char const*&) */
int _ZN5NSCam5Utils4ULog16ULogGuardMonitor17printToAndroidLogEPKcRS4_(void);

/* Symbol: _ZNSt3__114__split_bufferIPPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS7_EEE10push_frontEOS7_ */
/* Demangled: std::__1::__split_buffer<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**, std::__1::allocator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**> >::push_front(NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**&&) */
int _ZNSt3__114__split_bufferIPPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS7_EEE10push_frontEOS7_(void);

/* Symbol: _ZNSt3__14listIN7android2wpIN5NSCam5Utils4ULog9ULogGuard10IFinalizerEEENS_9allocatorIS8_EEE6insertINS_21__list_const_iteratorIS8_PvEEEENS_15__list_iteratorIS8_SE_EESF_T_SI_PNS_9enable_ifIXsr19__is_input_iteratorISI_EE5valueEvE4typeE */
/* Demangled: _ZNSt3__14listIN7android2wpIN5NSCam5Utils4ULog9ULogGuard10IFinalizerEEENS_9allocatorIS8_EEE6insertINS_21__list_const_iteratorIS8_PvEEEENS_15__list_iteratorIS8_SE_EESF_T_SI_PNS_9enable_ifIXsr19__is_input_iteratorISI_EE5valueEvE4typeE */
int _ZNSt3__14listIN7android2wpIN5NSCam5Utils4ULog9ULogGuard10IFinalizerEEENS_9allocatorIS8_EEE6insertINS_21__list_const_iteratorIS8_PvEEEENS_15__list_iteratorIS8_SE_EESF_T_SI_PNS_9enable_ifIXsr19__is_input_iteratorISI_EE5valueEvE4typeE(void);

/* Symbol: _ZNSt3__15dequeIPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS6_EEE5eraseENS_16__deque_iteratorIS6_PKS6_RSB_PKSC_iLi1024EEE */
/* Demangled: std::__1::deque<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*, std::__1::allocator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*> >::erase(std::__1::__deque_iterator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord* const*, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord* const&, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord* const* const*, int, 1024>) */
int _ZNSt3__15dequeIPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS6_EEE5eraseENS_16__deque_iteratorIS6_PKS6_RSB_PKSC_iLi1024EEE(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int fn___aeabi_memset4(void) __asm__("__aeabi_memset4");

/* Symbol: _ZN5NSCam5Utils4ULog16ULogGuardMonitor3runEv */
/* Demangled: NSCam::Utils::ULog::ULogGuardMonitor::run() */
int _ZN5NSCam5Utils4ULog16ULogGuardMonitor3runEv(void);

/* Symbol: _ZNKSt3__120__match_char_collateIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE */
/* Demangled: std::__1::__match_char_collate<char, std::__1::regex_traits<char> >::__exec(std::__1::__state<char>&) const */
int _ZNKSt3__120__match_char_collateIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE24__parse_extended_reg_expIPKcEET_S7_S7_ */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_extended_reg_exp<char const*>(char const*, char const*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE24__parse_extended_reg_expIPKcEET_S7_S7_(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam5Utils4ULog18ULogMtkcamDebuggeeENS_9allocatorIS4_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::Utils::ULog::ULogMtkcamDebuggee, std::__1::allocator<NSCam::Utils::ULog::ULogMtkcamDebuggee> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam5Utils4ULog18ULogMtkcamDebuggeeENS_9allocatorIS4_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNSt3__114__split_bufferINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EERNS5_IS8_EEED2Ev */
/* Demangled: std::__1::__split_buffer<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >&>::~__split_buffer() */
int _ZNSt3__114__split_bufferINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EERNS5_IS8_EEED2Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIPNS_7__stateIcEENS_9allocatorIS3_EEE10push_frontERKS3_ */
/* Demangled: std::__1::__split_buffer<std::__1::__state<char>*, std::__1::allocator<std::__1::__state<char>*> >::push_front(std::__1::__state<char>* const&) */
int _ZNSt3__114__split_bufferIPNS_7__stateIcEENS_9allocatorIS3_EEE10push_frontERKS3_(void);

/* Symbol: _ZNKSt3__113__empty_stateIcE6__execERNS_7__stateIcEE */
/* Demangled: std::__1::__empty_state<char>::__exec(std::__1::__state<char>&) const */
int _ZNKSt3__113__empty_stateIcE6__execERNS_7__stateIcEE(void);

/* Symbol: _ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEED2Ev */
/* Demangled: std::__1::__split_buffer<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&>::~__split_buffer() */
int _ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEED2Ev(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN7android10LogPrinterENS_9allocatorIS2_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<android::LogPrinter, std::__1::allocator<android::LogPrinter> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN7android10LogPrinterENS_9allocatorIS2_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__16vectorIPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*, std::__1::allocator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*> >::__push_back_slow_path<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord* const&>(NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord* const&) */
int _ZNSt3__16vectorIPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void);

/* Symbol: _ZNSt3__16vectorIcNS_9allocatorIcEEE21__push_back_slow_pathIcEEvOT_ */
/* Demangled: void std::__1::vector<char, std::__1::allocator<char> >::__push_back_slow_path<char>(char&&) */
int _ZNSt3__16vectorIcNS_9allocatorIcEEE21__push_back_slow_pathIcEEvOT_(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE25__parse_equivalence_classIPKcEET_S7_S7_PNS_20__bracket_expressionIcS2_EE */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_equivalence_class<char const*>(char const*, char const*, std::__1::__bracket_expression<char, std::__1::regex_traits<char> >*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE25__parse_equivalence_classIPKcEET_S7_S7_PNS_20__bracket_expressionIcS2_EE(void);

/* Symbol: _ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEMN5NSCam5Utils4ULog16ULogGuardMonitorEFvvEPSA_EEEEEPvSF_ */
/* Demangled: void* std::__1::__thread_proxy<std::__1::tuple<std::__1::unique_ptr<std::__1::__thread_struct, std::__1::default_delete<std::__1::__thread_struct> >, void (NSCam::Utils::ULog::ULogGuardMonitor::*)(), NSCam::Utils::ULog::ULogGuardMonitor*> >(void*) */
int _ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEMN5NSCam5Utils4ULog16ULogGuardMonitorEFvvEPSA_EEEEEPvSF_(void);

/* Symbol: _ZNSt3__16vectorINS_9sub_matchIPKcEENS_9allocatorIS4_EEE8__appendEjRKS4_ */
/* Demangled: std::__1::vector<std::__1::sub_match<char const*>, std::__1::allocator<std::__1::sub_match<char const*> > >::__append(unsigned int, std::__1::sub_match<char const*> const&) */
int _ZNSt3__16vectorINS_9sub_matchIPKcEENS_9allocatorIS4_EEE8__appendEjRKS4_(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int fn___aeabi_memset8(void) __asm__("__aeabi_memset8");

/* Symbol: _ZN5NSCam5Utils4ULog4File15FileULoggerBase12onLogDetailsEjPKcNS1_11DetailsTypeENS1_13RequestTypeIdEjS5_j */
/* Demangled: NSCam::Utils::ULog::File::FileULoggerBase::onLogDetails(unsigned int, char const*, NSCam::Utils::ULog::DetailsType, NSCam::Utils::ULog::RequestTypeId, unsigned int, char const*, unsigned int) */
int _ZN5NSCam5Utils4ULog4File15FileULoggerBase12onLogDetailsEjPKcNS1_11DetailsTypeENS1_13RequestTypeIdEjS5_j(void);

/* Symbol: _ZN5NSCam5Utils4ULog4File15FileULoggerBase12getTimeStampEiPcj */
/* Demangled: NSCam::Utils::ULog::File::FileULoggerBase::getTimeStamp(int, char*, unsigned int) */
int _ZN5NSCam5Utils4ULog4File15FileULoggerBase12getTimeStampEiPcj(void);

/* Symbol: _ZNSt3__112__deque_baseIPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS6_EEED2Ev */
/* Demangled: std::__1::__deque_base<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*, std::__1::allocator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*> >::~__deque_base() */
int _ZNSt3__112__deque_baseIPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS6_EEED2Ev(void);

/* Symbol: _ZNSt3__15dequeIPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS6_EEE9push_backERKS6_ */
/* Demangled: std::__1::deque<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*, std::__1::allocator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*> >::push_back(NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord* const&) */
int _ZNSt3__15dequeIPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS6_EEE9push_backERKS6_(void);

/* Symbol: _ZNSt3__16vectorINS_4pairIjPKcEENS_9allocatorIS4_EEE11__vallocateEj */
/* Demangled: std::__1::vector<std::__1::pair<unsigned int, char const*>, std::__1::allocator<std::__1::pair<unsigned int, char const*> > >::__vallocate(unsigned int) */
int _ZNSt3__16vectorINS_4pairIjPKcEENS_9allocatorIS4_EEE11__vallocateEj(void);

/* Symbol: _ZN5NSCam5Utils4ULog14ULogRTDiagImpl9dumpToLogEv */
/* Demangled: NSCam::Utils::ULog::ULogRTDiagImpl::dumpToLog() */
int _ZN5NSCam5Utils4ULog14ULogRTDiagImpl9dumpToLogEv(void);

/* Symbol: __udivmoddi4 */
/* Demangled: __udivmoddi4 */
int fn___udivmoddi4(void) __asm__("__udivmoddi4");

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam9IDebuggeeEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::IDebuggee>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam9IDebuggeeEED2Ev(void);

/* Symbol: _ZN5NSCam5Utils4ULog16ULogGuardMonitorC2Ev */
/* Demangled: NSCam::Utils::ULog::ULogGuardMonitor::ULogGuardMonitor() */
int _ZN5NSCam5Utils4ULog16ULogGuardMonitorC2Ev(void);

/* Symbol: _ZNSt3__114__split_bufferINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EERNS5_IS8_EEEC2EjjSA_ */
/* Demangled: std::__1::__split_buffer<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >&) */
int _ZNSt3__114__split_bufferINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EERNS5_IS8_EEEC2EjjSA_(void);

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int fn___aeabi_uidivmod(void) __asm__("__aeabi_uidivmod");

/* Symbol: _ZN5NSCam5Utils4ULog7ULogger12onLogSubreqsEjPKcNS1_13RequestTypeIdEjS5_PKjj */
/* Demangled: NSCam::Utils::ULog::ULogger::onLogSubreqs(unsigned int, char const*, NSCam::Utils::ULog::RequestTypeId, unsigned int, NSCam::Utils::ULog::RequestTypeId, unsigned int const*, unsigned int) */
int _ZN5NSCam5Utils4ULog7ULogger12onLogSubreqsEjPKcNS1_13RequestTypeIdEjS5_PKjj(void);

/* Symbol: _ZN5NSCam5Utils4ULog9ULogGuard18unregisterReqGuardEjNS1_13RequestTypeIdEj */
/* Demangled: NSCam::Utils::ULog::ULogGuard::unregisterReqGuard(unsigned int, NSCam::Utils::ULog::RequestTypeId, unsigned int) */
int _ZN5NSCam5Utils4ULog9ULogGuard18unregisterReqGuardEjNS1_13RequestTypeIdEj(void);

/* Symbol: _ZNSt3__117__owns_two_statesIcED0Ev */
/* Demangled: std::__1::__owns_two_states<char>::~__owns_two_states() */
int _ZNSt3__117__owns_two_statesIcED0Ev(void);

/* Symbol: _ZN5NSCam5Utils4ULog4File14FileULogWriter10onLogEnterEPKNS2_12LogEnterExitE */
/* Demangled: NSCam::Utils::ULog::File::FileULogWriter::onLogEnter(NSCam::Utils::ULog::File::LogEnterExit const*) */
int _ZN5NSCam5Utils4ULog4File14FileULogWriter10onLogEnterEPKNS2_12LogEnterExitE(void);

/* Symbol: _ZNKSt3__112regex_traitsIcE20__lookup_collatenameIPcEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SA_c */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::regex_traits<char>::__lookup_collatename<char*>(char*, char*, char) const */
int _ZNKSt3__112regex_traitsIcE20__lookup_collatenameIPcEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SA_c(void);

/* Symbol: _ZTVNSt3__16__loopIcEE */
/* Demangled: vtable for std::__1::__loop<char> */
extern void* _ZTVNSt3__16__loopIcEE;

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int fn___aeabi_memcpy4(void) __asm__("__aeabi_memcpy4");

/* Symbol: _ZTVN5NSCam5Utils4ULog29AndroidULoggerNoNormalDetailsE */
/* Demangled: vtable for NSCam::Utils::ULog::AndroidULoggerNoNormalDetails */
extern void* _ZTVN5NSCam5Utils4ULog29AndroidULoggerNoNormalDetailsE;

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE20__parse_class_escapeIPKcEET_S7_S7_RNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPNS_20__bracket_expressionIcS2_EE */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_class_escape<char const*>(char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::__bracket_expression<char, std::__1::regex_traits<char> >*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE20__parse_class_escapeIPKcEET_S7_S7_RNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPNS_20__bracket_expressionIcS2_EE(void);

/* Symbol: _ZNSt3__113__vector_baseINS_7__stateIcEENS_9allocatorIS2_EEED2Ev */
/* Demangled: std::__1::__vector_base<std::__1::__state<char>, std::__1::allocator<std::__1::__state<char> > >::~__vector_base() */
int _ZNSt3__113__vector_baseINS_7__stateIcEENS_9allocatorIS2_EEED2Ev(void);

/* Symbol: _ZNSt3__16vectorIPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS6_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS6_RS8_EE */
/* Demangled: std::__1::vector<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*, std::__1::allocator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*, std::__1::allocator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*>&>&) */
int _ZNSt3__16vectorIPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS6_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS6_RS8_EE(void);

/* Symbol: _ZN5NSCam5Utils4ULog7ULogger12onLogDetailsEjPKcNS1_11DetailsTypeENS1_13RequestTypeIdEjS4_j */
/* Demangled: NSCam::Utils::ULog::ULogger::onLogDetails(unsigned int, char const*, NSCam::Utils::ULog::DetailsType, NSCam::Utils::ULog::RequestTypeId, unsigned int, char const*, unsigned int) */
int _ZN5NSCam5Utils4ULog7ULogger12onLogDetailsEjPKcNS1_11DetailsTypeENS1_13RequestTypeIdEjS4_j(void);

/* Symbol: _ZN5NSCam5Utils4ULog4File14PassiveULoggerC2Ev */
/* Demangled: NSCam::Utils::ULog::File::PassiveULogger::PassiveULogger() */
int _ZN5NSCam5Utils4ULog4File14PassiveULoggerC2Ev(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE16__parse_ORD_CHARIPKcEET_S7_S7_ */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_ORD_CHAR<char const*>(char const*, char const*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE16__parse_ORD_CHARIPKcEET_S7_S7_(void);

/* Symbol: _ZNSt3__16vectorINS_4pairIccEENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE */
/* Demangled: std::__1::vector<std::__1::pair<char, char>, std::__1::allocator<std::__1::pair<char, char> > >::__swap_out_circular_buffer(std::__1::__split_buffer<std::__1::pair<char, char>, std::__1::allocator<std::__1::pair<char, char> >&>&) */
int _ZNSt3__16vectorINS_4pairIccEENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE(void);

/* Symbol: _ZNKSt3__121__empty_non_own_stateIcE6__execERNS_7__stateIcEE */
/* Demangled: std::__1::__empty_non_own_state<char>::__exec(std::__1::__state<char>&) const */
int _ZNKSt3__121__empty_non_own_stateIcE6__execERNS_7__stateIcEE(void);

/* Symbol: _ZNKSt3__128__begin_marked_subexpressionIcE6__execERNS_7__stateIcEE */
/* Demangled: std::__1::__begin_marked_subexpression<char>::__exec(std::__1::__state<char>&) const */
int _ZNKSt3__128__begin_marked_subexpressionIcE6__execERNS_7__stateIcEE(void);

/* Symbol: _ZNSt3__14listIN7android2wpIN5NSCam5Utils4ULog9ULogGuard10IFinalizerEEENS_9allocatorIS8_EEE12emplace_backIJRNS1_2spIS7_EEEEERS8_DpOT_ */
/* Demangled: android::wp<NSCam::Utils::ULog::ULogGuard::IFinalizer>& std::__1::list<android::wp<NSCam::Utils::ULog::ULogGuard::IFinalizer>, std::__1::allocator<android::wp<NSCam::Utils::ULog::ULogGuard::IFinalizer> > >::emplace_back<android::sp<NSCam::Utils::ULog::ULogGuard::IFinalizer>&>(android::sp<NSCam::Utils::ULog::ULogGuard::IFinalizer>&) */
int _ZNSt3__14listIN7android2wpIN5NSCam5Utils4ULog9ULogGuard10IFinalizerEEENS_9allocatorIS8_EEE12emplace_backIJRNS1_2spIS7_EEEEERS8_DpOT_(void);

/* Symbol: _ZTVNSt3__118__back_ref_collateIcNS_12regex_traitsIcEEEE */
/* Demangled: vtable for std::__1::__back_ref_collate<char, std::__1::regex_traits<char> > */
extern void* _ZTVNSt3__118__back_ref_collateIcNS_12regex_traitsIcEEEE;

/* Symbol: _ZTVNSt3__126__end_marked_subexpressionIcEE */
/* Demangled: vtable for std::__1::__end_marked_subexpression<char> */
extern void* _ZTVNSt3__126__end_marked_subexpressionIcEE;

/* Symbol: _ZNKSt3__111basic_regexIcNS_12regex_traitsIcEEE27__match_at_start_posix_subsINS_9allocatorINS_9sub_matchIPKcEEEEEEbS8_S8_RNS_13match_resultsIS8_T_EENS_15regex_constants15match_flag_typeEb */
/* Demangled: bool std::__1::basic_regex<char, std::__1::regex_traits<char> >::__match_at_start_posix_subs<std::__1::allocator<std::__1::sub_match<char const*> > >(char const*, char const*, std::__1::match_results<char const*, std::__1::allocator<std::__1::sub_match<char const*> > >&, std::__1::regex_constants::match_flag_type, bool) const */
int _ZNKSt3__111basic_regexIcNS_12regex_traitsIcEEE27__match_at_start_posix_subsINS_9allocatorINS_9sub_matchIPKcEEEEEEbS8_S8_RNS_13match_resultsIS8_T_EENS_15regex_constants15match_flag_typeEb(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int fn___aeabi_memcpy8(void) __asm__("__aeabi_memcpy8");

/* Symbol: _ZN5NSCam5Utils4ULog7ULogger18sNormalDetailsMaskE */
/* Demangled: NSCam::Utils::ULog::ULogger::sNormalDetailsMask */
extern void* _ZN5NSCam5Utils4ULog7ULogger18sNormalDetailsMaskE;

/* Symbol: _ZN5NSCam5Utils4ULog9ULogTable10sSingletonE */
/* Demangled: NSCam::Utils::ULog::ULogTable::sSingleton */
extern void* _ZN5NSCam5Utils4ULog9ULogTable10sSingletonE;

/* Symbol: _ZTVN5NSCam5Utils4ULog4File14PassiveULoggerE */
/* Demangled: vtable for NSCam::Utils::ULog::File::PassiveULogger */
extern void* _ZTVN5NSCam5Utils4ULog4File14PassiveULoggerE;

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE12__parse_atomIPKcEET_S7_S7_ */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_atom<char const*>(char const*, char const*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE12__parse_atomIPKcEET_S7_S7_(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE15__push_back_refEi */
/* Demangled: std::__1::basic_regex<char, std::__1::regex_traits<char> >::__push_back_ref(int) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE15__push_back_refEi(void);

/* Symbol: _ZN5NSCam5Utils4ULog4File15FileULoggerBase13getFolderPathEPcj */
/* Demangled: NSCam::Utils::ULog::File::FileULoggerBase::getFolderPath(char*, unsigned int) */
int _ZN5NSCam5Utils4ULog4File15FileULoggerBase13getFolderPathEPcj(void);

/* Symbol: _ZN5NSCam5Utils4ULog9ULogGuard17registerFuncGuardEjPKcS4_S4_iiS4_Pi */
/* Demangled: NSCam::Utils::ULog::ULogGuard::registerFuncGuard(unsigned int, char const*, char const*, char const*, int, int, char const*, int*) */
int _ZN5NSCam5Utils4ULog9ULogGuard17registerFuncGuardEjPKcS4_S4_iiS4_Pi(void);

/* Symbol: _ZNSt3__16vectorINS_9sub_matchIPKcEENS_9allocatorIS4_EEE6resizeEjRKS4_ */
/* Demangled: std::__1::vector<std::__1::sub_match<char const*>, std::__1::allocator<std::__1::sub_match<char const*> > >::resize(unsigned int, std::__1::sub_match<char const*> const&) */
int _ZNSt3__16vectorINS_9sub_matchIPKcEENS_9allocatorIS4_EEE6resizeEjRKS4_(void);

/* Symbol: _ZN5NSCam5Utils4ULog15ULogRuntimeDiag9dumpToLogEv */
/* Demangled: NSCam::Utils::ULog::ULogRuntimeDiag::dumpToLog() */
int _ZN5NSCam5Utils4ULog15ULogRuntimeDiag9dumpToLogEv(void);

/* Symbol: _ZN5NSCam5Utils4ULog4File14FileULogWriter4openEbPKcb */
/* Demangled: NSCam::Utils::ULog::File::FileULogWriter::open(bool, char const*, bool) */
int _ZN5NSCam5Utils4ULog4File14FileULogWriter4openEbPKcb(void);

/* Symbol: _ZN5NSCam5Utils4ULog16ULogGuardMonitor15printBacktracesEv */
/* Demangled: NSCam::Utils::ULog::ULogGuardMonitor::printBacktraces() */
int _ZN5NSCam5Utils4ULog16ULogGuardMonitor15printBacktracesEv(void);

/* Symbol: _ZNSt3__16vectorINS_4pairIccEENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::pair<char, char>, std::__1::allocator<std::__1::pair<char, char> > >::__push_back_slow_path<std::__1::pair<char, char> >(std::__1::pair<char, char>&&) */
int _ZNSt3__16vectorINS_4pairIccEENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void);

/* Symbol: _ZTVNSt3__128__begin_marked_subexpressionIcEE */
/* Demangled: vtable for std::__1::__begin_marked_subexpression<char> */
extern void* _ZTVNSt3__128__begin_marked_subexpressionIcEE;

/* Symbol: _ZN5NSCam5Utils4ULog4File11FileULoggerC2Ev */
/* Demangled: NSCam::Utils::ULog::File::FileULogger::FileULogger() */
int _ZN5NSCam5Utils4ULog4File11FileULoggerC2Ev(void);

/* Symbol: _ZNSt3__113move_backwardIPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordEPS6_RS6_PS7_iLi1024ES6_S7_S8_S9_iLi1024EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENSA_IT_T0_T1_T2_T3_XT4_EEESM_SG_ */
/* Demangled: std::__1::__deque_iterator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*&, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord***, int, 1024> std::__1::move_backward<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*&, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord***, int, 1024, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*&, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord***, int, 1024>(std::__1::__deque_iterator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*&, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord***, int, 1024>, std::__1::__deque_iterator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*&, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord***, int, 1024>, std::__1::__deque_iterator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*&, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord***, int, 1024>) */
int _ZNSt3__113move_backwardIPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordEPS6_RS6_PS7_iLi1024ES6_S7_S8_S9_iLi1024EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENSA_IT_T0_T1_T2_T3_XT4_EEESM_SG_(void);

/* Symbol: _ZNSt3__114__split_bufferINS_9sub_matchINS_11__wrap_iterIPKcEEEERNS_9allocatorIS6_EEEC2EjjS9_ */
/* Demangled: std::__1::__split_buffer<std::__1::sub_match<std::__1::__wrap_iter<char const*> >, std::__1::allocator<std::__1::sub_match<std::__1::__wrap_iter<char const*> > >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<std::__1::sub_match<std::__1::__wrap_iter<char const*> > >&) */
int _ZNSt3__114__split_bufferINS_9sub_matchINS_11__wrap_iterIPKcEEEERNS_9allocatorIS6_EEEC2EjjS9_(void);

/* Symbol: _ZTVNSt3__123__match_any_but_newlineIcEE */
/* Demangled: vtable for std::__1::__match_any_but_newline<char> */
extern void* _ZTVNSt3__123__match_any_but_newlineIcEE;

/* Symbol: _ZNSt3__112__deque_baseINS_10unique_ptrIN5NSCam5Utils4ULog4File15FileULoggerBase6BufferENS_14default_deleteIS7_EEEENS_9allocatorISA_EEED2Ev */
/* Demangled: std::__1::__deque_base<std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> >, std::__1::allocator<std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> > > >::~__deque_base() */
int _ZNSt3__112__deque_baseINS_10unique_ptrIN5NSCam5Utils4ULog4File15FileULoggerBase6BufferENS_14default_deleteIS7_EEEENS_9allocatorISA_EEED2Ev(void);

/* Symbol: _ZN5NSCam5Utils4ULog9ULogGuard17registerFinalizerEN7android2spINS2_10IFinalizerEEE */
/* Demangled: NSCam::Utils::ULog::ULogGuard::registerFinalizer(android::sp<NSCam::Utils::ULog::ULogGuard::IFinalizer>) */
int _ZN5NSCam5Utils4ULog9ULogGuard17registerFinalizerEN7android2spINS2_10IFinalizerEEE(void);

/* Symbol: _ZNSt3__14listIN7android2wpIN5NSCam5Utils4ULog9ULogGuard10IFinalizerEEENS_9allocatorIS8_EEE5eraseENS_21__list_const_iteratorIS8_PvEESE_ */
/* Demangled: std::__1::list<android::wp<NSCam::Utils::ULog::ULogGuard::IFinalizer>, std::__1::allocator<android::wp<NSCam::Utils::ULog::ULogGuard::IFinalizer> > >::erase(std::__1::__list_const_iterator<android::wp<NSCam::Utils::ULog::ULogGuard::IFinalizer>, void*>, std::__1::__list_const_iterator<android::wp<NSCam::Utils::ULog::ULogGuard::IFinalizer>, void*>) */
int _ZNSt3__14listIN7android2wpIN5NSCam5Utils4ULog9ULogGuard10IFinalizerEEENS_9allocatorIS8_EEE5eraseENS_21__list_const_iteratorIS8_PvEESE_(void);

/* Symbol: _ZNSt3__14listIN7android2wpIN5NSCam5Utils4ULog9ULogGuard10IFinalizerEEENS_9allocatorIS8_EEE6assignINS_21__list_const_iteratorIS8_PvEEEEvT_SG_PNS_9enable_ifIXsr19__is_input_iteratorISG_EE5valueEvE4typeE */
/* Demangled: _ZNSt3__14listIN7android2wpIN5NSCam5Utils4ULog9ULogGuard10IFinalizerEEENS_9allocatorIS8_EEE6assignINS_21__list_const_iteratorIS8_PvEEEEvT_SG_PNS_9enable_ifIXsr19__is_input_iteratorISG_EE5valueEvE4typeE */
int _ZNSt3__14listIN7android2wpIN5NSCam5Utils4ULog9ULogGuard10IFinalizerEEENS_9allocatorIS8_EEE6assignINS_21__list_const_iteratorIS8_PvEEEEvT_SG_PNS_9enable_ifIXsr19__is_input_iteratorISG_EE5valueEvE4typeE(void);

/* Symbol: _ZNKSt3__110__back_refIcE6__execERNS_7__stateIcEE */
/* Demangled: std::__1::__back_ref<char>::__exec(std::__1::__state<char>&) const */
int _ZNKSt3__110__back_refIcE6__execERNS_7__stateIcEE(void);

/* Symbol: _ZNKSt3__111__alternateIcE6__execERNS_7__stateIcEE */
/* Demangled: std::__1::__alternate<char>::__exec(std::__1::__state<char>&) const */
int _ZNKSt3__111__alternateIcE6__execERNS_7__stateIcEE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam5Utils4ULog18ULogMtkcamDebuggeeENS_9allocatorIS4_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::Utils::ULog::ULogMtkcamDebuggee, std::__1::allocator<NSCam::Utils::ULog::ULogMtkcamDebuggee> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam5Utils4ULog18ULogMtkcamDebuggeeENS_9allocatorIS4_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__111unique_lockINS_5mutexEE6unlockEv */
/* Demangled: std::__1::unique_lock<std::__1::mutex>::unlock() */
int _ZNSt3__111unique_lockINS_5mutexEE6unlockEv(void);

/* Symbol: _ZNSt3__112regex_traitsIcEC2Ev */
/* Demangled: std::__1::regex_traits<char>::regex_traits() */
int _ZNSt3__112regex_traitsIcEC2Ev(void);

/* Symbol: _ZNSt3__16vectorINS_9sub_matchIPKcEENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_ */
/* Demangled: _ZNSt3__16vectorINS_9sub_matchIPKcEENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_ */
int _ZNSt3__16vectorINS_9sub_matchIPKcEENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_(void);

/* Symbol: _ZTVNSt3__113__empty_stateIcEE */
/* Demangled: vtable for std::__1::__empty_state<char> */
extern void* _ZTVNSt3__113__empty_stateIcEE;

/* Symbol: _ZN5NSCam5Utils4ULog16ULogGuardMonitor5startEv */
/* Demangled: NSCam::Utils::ULog::ULogGuardMonitor::start() */
int _ZN5NSCam5Utils4ULog16ULogGuardMonitor5startEv(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE11__push_charEc */
/* Demangled: std::__1::basic_regex<char, std::__1::regex_traits<char> >::__push_char(char) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE11__push_charEc(void);

/* Symbol: _ZNSt3__114__split_bufferINS_9sub_matchIPKcEERNS_9allocatorIS4_EEEC2EjjS7_ */
/* Demangled: std::__1::__split_buffer<std::__1::sub_match<char const*>, std::__1::allocator<std::__1::sub_match<char const*> >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<std::__1::sub_match<char const*> >&) */
int _ZNSt3__114__split_bufferINS_9sub_matchIPKcEERNS_9allocatorIS4_EEEC2EjjS7_(void);

/* Symbol: _ZNSt3__114__split_bufferIPNS_7__stateIcEENS_9allocatorIS3_EEE10push_frontEOS3_ */
/* Demangled: std::__1::__split_buffer<std::__1::__state<char>*, std::__1::allocator<std::__1::__state<char>*> >::push_front(std::__1::__state<char>*&&) */
int _ZNSt3__114__split_bufferIPNS_7__stateIcEENS_9allocatorIS3_EEE10push_frontEOS3_(void);

/* Symbol: _ZNSt3__114__split_bufferIPNS_7__stateIcEERNS_9allocatorIS3_EEE10push_frontERKS3_ */
/* Demangled: std::__1::__split_buffer<std::__1::__state<char>*, std::__1::allocator<std::__1::__state<char>*>&>::push_front(std::__1::__state<char>* const&) */
int _ZNSt3__114__split_bufferIPNS_7__stateIcEERNS_9allocatorIS3_EEE10push_frontERKS3_(void);

/* Symbol: _ZTVNSt3__111__lookaheadIcNS_12regex_traitsIcEEEE */
/* Demangled: vtable for std::__1::__lookahead<char, std::__1::regex_traits<char> > */
extern void* _ZTVNSt3__111__lookaheadIcNS_12regex_traitsIcEEEE;

/* Symbol: __emutls_v._ZN5NSCam5Utils4ULog16sThreadGuardDataE */
/* Demangled: __emutls_v._ZN5NSCam5Utils4ULog16sThreadGuardDataE */
extern void* obj___emutls_v__ZN5NSCam5Utils4ULog16sThreadGuardDataE __asm__("__emutls_v._ZN5NSCam5Utils4ULog16sThreadGuardDataE");

/* Symbol: _ZN5NSCam5Utils4ULog13printIntArrayEPcjPKjj */
/* Demangled: NSCam::Utils::ULog::printIntArray(char*, unsigned int, unsigned int const*, unsigned int) */
int _ZN5NSCam5Utils4ULog13printIntArrayEPcjPKjj(void);

/* Symbol: _ZN5NSCam5Utils4ULog15ULogRuntimeDiag6onInitEv */
/* Demangled: NSCam::Utils::ULog::ULogRuntimeDiag::onInit() */
int _ZN5NSCam5Utils4ULog15ULogRuntimeDiag6onInitEv(void);

/* Symbol: _ZN5NSCam5Utils4ULog16ULogGuardMonitorC1Ev */
/* Demangled: NSCam::Utils::ULog::ULogGuardMonitor::ULogGuardMonitor() */
int _ZN5NSCam5Utils4ULog16ULogGuardMonitorC1Ev(void);

/* Symbol: _ZN5NSCam5Utils4ULog4File15FileULoggerBase12onLogDiscardEjPKcNS1_13RequestTypeIdEPKjj */
/* Demangled: NSCam::Utils::ULog::File::FileULoggerBase::onLogDiscard(unsigned int, char const*, NSCam::Utils::ULog::RequestTypeId, unsigned int const*, unsigned int) */
int _ZN5NSCam5Utils4ULog4File15FileULoggerBase12onLogDiscardEjPKcNS1_13RequestTypeIdEPKjj(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam15IDebuggeeCookieEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::IDebuggeeCookie>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam15IDebuggeeCookieEED2Ev(void);

/* Symbol: _ZTVNSt3__112__match_charIcEE */
/* Demangled: vtable for std::__1::__match_char<char> */
extern void* _ZTVNSt3__112__match_charIcEE;

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int fn___aeabi_memclr4(void) __asm__("__aeabi_memclr4");

/* Symbol: _ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEEC2EjjS8_ */
/* Demangled: std::__1::__split_buffer<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&) */
int _ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEEC2EjjS8_(void);

/* Symbol: _ZN5NSCam5Utils4ULog9ULogGuard8onUninitEv */
/* Demangled: NSCam::Utils::ULog::ULogGuard::onUninit() */
int _ZN5NSCam5Utils4ULog9ULogGuard8onUninitEv(void);

/* Symbol: __aeabi_l2d */
/* Demangled: __aeabi_l2d */
int fn___aeabi_l2d(void) __asm__("__aeabi_l2d");

/* Symbol: _ZNKSt3__112regex_traitsIcE19__transform_primaryINS_11__wrap_iterIPcEEEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SC_c */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::regex_traits<char>::__transform_primary<std::__1::__wrap_iter<char*> >(std::__1::__wrap_iter<char*>, std::__1::__wrap_iter<char*>, char) const */
int _ZNKSt3__112regex_traitsIcE19__transform_primaryINS_11__wrap_iterIPcEEEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SC_c(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE21__parse_basic_reg_expIPKcEET_S7_S7_ */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_basic_reg_exp<char const*>(char const*, char const*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE21__parse_basic_reg_expIPKcEET_S7_S7_(void);

/* Symbol: __aeabi_memmove4 */
/* Demangled: __aeabi_memmove4 */
int fn___aeabi_memmove4(void) __asm__("__aeabi_memmove4");

/* Symbol: _ZNSt3__114__split_bufferIPNS_7__stateIcEENS_9allocatorIS3_EEE9push_backEOS3_ */
/* Demangled: std::__1::__split_buffer<std::__1::__state<char>*, std::__1::allocator<std::__1::__state<char>*> >::push_back(std::__1::__state<char>*&&) */
int _ZNSt3__114__split_bufferIPNS_7__stateIcEENS_9allocatorIS3_EEE9push_backEOS3_(void);

/* Symbol: _ZNSt3__16vectorIcNS_9allocatorIcEEE26__swap_out_circular_bufferERNS_14__split_bufferIcRS2_EE */
/* Demangled: std::__1::vector<char, std::__1::allocator<char> >::__swap_out_circular_buffer(std::__1::__split_buffer<char, std::__1::allocator<char>&>&) */
int _ZNSt3__16vectorIcNS_9allocatorIcEEE26__swap_out_circular_bufferERNS_14__split_bufferIcRS2_EE(void);

/* Symbol: __divmoddi4 */
/* Demangled: __divmoddi4 */
int fn___divmoddi4(void) __asm__("__divmoddi4");

/* Symbol: _ZN5NSCam5Utils4ULog4File14PassiveULoggerC1Ev */
/* Demangled: NSCam::Utils::ULog::File::PassiveULogger::PassiveULogger() */
int _ZN5NSCam5Utils4ULog4File14PassiveULoggerC1Ev(void);

/* Symbol: _ZN5NSCam5Utils4ULog7ULogger7onFlushEi */
/* Demangled: NSCam::Utils::ULog::ULogger::onFlush(int) */
int _ZN5NSCam5Utils4ULog7ULogger7onFlushEi(void);

/* Symbol: _ZTVN5NSCam5Utils4ULog18ULogMtkcamDebuggeeE */
/* Demangled: vtable for NSCam::Utils::ULog::ULogMtkcamDebuggee */
extern void* _ZTVN5NSCam5Utils4ULog18ULogMtkcamDebuggeeE;

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int fn___aeabi_memclr8(void) __asm__("__aeabi_memclr8");

/* Symbol: _ZNKSt3__112regex_traitsIcE18__lookup_classnameIPKcEEtT_S5_bc */
/* Demangled: unsigned short std::__1::regex_traits<char>::__lookup_classname<char const*>(char const*, char const*, bool, char) const */
int _ZNKSt3__112regex_traitsIcE18__lookup_classnameIPKcEEtT_S5_bc(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE17__parse_DUP_COUNTIPKcEET_S7_S7_Ri */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_DUP_COUNT<char const*>(char const*, char const*, int&) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE17__parse_DUP_COUNTIPKcEET_S7_S7_Ri(void);

/* Symbol: _ZN5NSCam5Utils4ULog16ULogGuardMonitor10sSingletonE */
/* Demangled: NSCam::Utils::ULog::ULogGuardMonitor::sSingleton */
extern void* _ZN5NSCam5Utils4ULog16ULogGuardMonitor10sSingletonE;

/* Symbol: _ZN7android2wpIN5NSCam5Utils4ULog9ULogGuard10IFinalizerEEaSERKS6_ */
/* Demangled: android::wp<NSCam::Utils::ULog::ULogGuard::IFinalizer>::operator=(android::wp<NSCam::Utils::ULog::ULogGuard::IFinalizer> const&) */
int _ZN7android2wpIN5NSCam5Utils4ULog9ULogGuard10IFinalizerEEaSERKS6_(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE25__parse_pattern_characterIPKcEET_S7_S7_ */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_pattern_character<char const*>(char const*, char const*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE25__parse_pattern_characterIPKcEET_S7_S7_(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE33__push_begin_marked_subexpressionEv */
/* Demangled: std::__1::basic_regex<char, std::__1::regex_traits<char> >::__push_begin_marked_subexpression() */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE33__push_begin_marked_subexpressionEv(void);

/* Symbol: _ZNSt3__14listIN7android2wpIN5NSCam5Utils4ULog9ULogGuard10IFinalizerEEENS_9allocatorIS8_EEE5eraseENS_21__list_const_iteratorIS8_PvEE */
/* Demangled: std::__1::list<android::wp<NSCam::Utils::ULog::ULogGuard::IFinalizer>, std::__1::allocator<android::wp<NSCam::Utils::ULog::ULogGuard::IFinalizer> > >::erase(std::__1::__list_const_iterator<android::wp<NSCam::Utils::ULog::ULogGuard::IFinalizer>, void*>) */
int _ZNSt3__14listIN7android2wpIN5NSCam5Utils4ULog9ULogGuard10IFinalizerEEENS_9allocatorIS8_EEE5eraseENS_21__list_const_iteratorIS8_PvEE(void);

/* Symbol: _ZN5NSCam5Utils4ULog7ULogger5sModeE */
/* Demangled: NSCam::Utils::ULog::ULogger::sMode */
extern void* _ZN5NSCam5Utils4ULog7ULogger5sModeE;

/* Symbol: _ZTVN5NSCam5Utils4ULog4File11FileULoggerE */
/* Demangled: vtable for NSCam::Utils::ULog::File::FileULogger */
extern void* _ZTVN5NSCam5Utils4ULog4File11FileULoggerE;

/* Symbol: _ZN5NSCam5Utils4ULog4File15FileULoggerBase13sActiveLoggerE */
/* Demangled: NSCam::Utils::ULog::File::FileULoggerBase::sActiveLogger */
extern void* _ZN5NSCam5Utils4ULog4File15FileULoggerBase13sActiveLoggerE;

/* Symbol: _ZNSt3__15dequeINS_10unique_ptrIN5NSCam5Utils4ULog4File15FileULoggerBase6BufferENS_14default_deleteIS7_EEEENS_9allocatorISA_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> >, std::__1::allocator<std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> > > >::__add_back_capacity() */
int _ZNSt3__15dequeINS_10unique_ptrIN5NSCam5Utils4ULog4File15FileULoggerBase6BufferENS_14default_deleteIS7_EEEENS_9allocatorISA_EEE19__add_back_capacityEv(void);

/* Symbol: _ZNSt3__15dequeINS_7__stateIcEENS_9allocatorIS2_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<std::__1::__state<char>, std::__1::allocator<std::__1::__state<char> > >::__add_back_capacity() */
int _ZNSt3__15dequeINS_7__stateIcEENS_9allocatorIS2_EEE19__add_back_capacityEv(void);

/* Symbol: __aeabi_memmove8 */
/* Demangled: __aeabi_memmove8 */
int fn___aeabi_memmove8(void) __asm__("__aeabi_memmove8");

/* Symbol: _ZN5NSCam5Utils4ULog4File14FileULogWriter12onLogFuncExtEPKNS2_10LogFuncExtE */
/* Demangled: NSCam::Utils::ULog::File::FileULogWriter::onLogFuncExt(NSCam::Utils::ULog::File::LogFuncExt const*) */
int _ZN5NSCam5Utils4ULog4File14FileULogWriter12onLogFuncExtEPKNS2_10LogFuncExtE(void);

/* Symbol: _ZNSt3__15dequeINS_10unique_ptrIN5NSCam5Utils4ULog4File15FileULoggerBase6BufferENS_14default_deleteIS7_EEEENS_9allocatorISA_EEE8pop_backEv */
/* Demangled: std::__1::deque<std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> >, std::__1::allocator<std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> > > >::pop_back() */
int _ZNSt3__15dequeINS_10unique_ptrIN5NSCam5Utils4ULog4File15FileULoggerBase6BufferENS_14default_deleteIS7_EEEENS_9allocatorISA_EEE8pop_backEv(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE22__parse_ERE_expressionIPKcEET_S7_S7_ */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_ERE_expression<char const*>(char const*, char const*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE22__parse_ERE_expressionIPKcEET_S7_S7_(void);

/* Symbol: _ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev */
/* Demangled: std::__1::__vector_base<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::~__vector_base() */
int _ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int fn___aeabi_memset(void) __asm__("__aeabi_memset");

/* Symbol: _ZN5NSCam5Utils4ULog4File15FileULoggerBase16onLogFuncLifeExtEjPKcS5_NS1_11FuncLifeTagEiii */
/* Demangled: NSCam::Utils::ULog::File::FileULoggerBase::onLogFuncLifeExt(unsigned int, char const*, char const*, NSCam::Utils::ULog::FuncLifeTag, int, int, int) */
int _ZN5NSCam5Utils4ULog4File15FileULoggerBase16onLogFuncLifeExtEjPKcS5_NS1_11FuncLifeTagEiii(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE24__parse_character_escapeIPKcEET_S7_S7_PNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_character_escape<char const*>(char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE24__parse_character_escapeIPKcEET_S7_S7_PNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void);

/* Symbol: _ZNSt3__116__owns_one_stateIcED2Ev */
/* Demangled: std::__1::__owns_one_state<char>::~__owns_one_state() */
int _ZNSt3__116__owns_one_stateIcED2Ev(void);

/* Symbol: _ZN5NSCam5Utils4ULog12ULogFuncLife14sModFilterMaskE */
/* Demangled: NSCam::Utils::ULog::ULogFuncLife::sModFilterMask */
extern void* _ZN5NSCam5Utils4ULog12ULogFuncLife14sModFilterMaskE;

/* Symbol: _ZN5NSCam5Utils4ULog4File11FileULogger6onInitEv */
/* Demangled: NSCam::Utils::ULog::File::FileULogger::onInit() */
int _ZN5NSCam5Utils4ULog4File11FileULogger6onInitEv(void);

/* Symbol: _ZN5NSCam5Utils4ULog4File15FileULoggerBase12onLogSubreqsEjPKcNS1_13RequestTypeIdEjS6_PKjj */
/* Demangled: NSCam::Utils::ULog::File::FileULoggerBase::onLogSubreqs(unsigned int, char const*, NSCam::Utils::ULog::RequestTypeId, unsigned int, NSCam::Utils::ULog::RequestTypeId, unsigned int const*, unsigned int) */
int _ZN5NSCam5Utils4ULog4File15FileULoggerBase12onLogSubreqsEjPKcNS1_13RequestTypeIdEjS6_PKjj(void);

/* Symbol: _ZNSt3__16vectorINS_4pairIjPKcEENS_9allocatorIS4_EEE6resizeEj */
/* Demangled: std::__1::vector<std::__1::pair<unsigned int, char const*>, std::__1::allocator<std::__1::pair<unsigned int, char const*> > >::resize(unsigned int) */
int _ZNSt3__16vectorINS_4pairIjPKcEENS_9allocatorIS4_EEE6resizeEj(void);

/* Symbol: _ZNSt3__16vectorIPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*, std::__1::allocator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*> >::__push_back_slow_path<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*>(NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*&&) */
int _ZNSt3__16vectorIPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_(void);

/* Symbol: _ZN5NSCam5Utils4ULog4File11FileULoggerC1Ev */
/* Demangled: NSCam::Utils::ULog::File::FileULogger::FileULogger() */
int _ZN5NSCam5Utils4ULog4File11FileULoggerC1Ev(void);

/* Symbol: __divdi3 */
/* Demangled: __divdi3 */
int fn___divdi3(void) __asm__("__divdi3");

/* Symbol: _ZN5NSCam5Utils4ULog4File11FileULogger7onFlushEi */
/* Demangled: NSCam::Utils::ULog::File::FileULogger::onFlush(int) */
int _ZN5NSCam5Utils4ULog4File11FileULogger7onFlushEi(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE20__push_word_boundaryEb */
/* Demangled: std::__1::basic_regex<char, std::__1::regex_traits<char> >::__push_word_boundary(bool) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE20__push_word_boundaryEb(void);

/* Symbol: _ZNSt3__114__split_bufferIPPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordERNS_9allocatorIS7_EEE10push_frontERKS7_ */
/* Demangled: std::__1::__split_buffer<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**, std::__1::allocator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**>&>::push_front(NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord** const&) */
int _ZNSt3__114__split_bufferIPPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordERNS_9allocatorIS7_EEE10push_frontERKS7_(void);

/* Symbol: _ZNSt3__15dequeINS_10unique_ptrIN5NSCam5Utils4ULog4File15FileULoggerBase6BufferENS_14default_deleteIS7_EEEENS_9allocatorISA_EEE9pop_frontEv */
/* Demangled: std::__1::deque<std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> >, std::__1::allocator<std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> > > >::pop_front() */
int _ZNSt3__15dequeINS_10unique_ptrIN5NSCam5Utils4ULog4File15FileULoggerBase6BufferENS_14default_deleteIS7_EEEENS_9allocatorISA_EEE9pop_frontEv(void);

/* Symbol: _ZNSt3__16vectorINS_9sub_matchIPKcEENS_9allocatorIS4_EEE6assignEjRKS4_ */
/* Demangled: std::__1::vector<std::__1::sub_match<char const*>, std::__1::allocator<std::__1::sub_match<char const*> > >::assign(unsigned int, std::__1::sub_match<char const*> const&) */
int _ZNSt3__16vectorINS_9sub_matchIPKcEENS_9allocatorIS4_EEE6assignEjRKS4_(void);

/* Symbol: _ZNSt3__114__split_bufferIPPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordERNS_9allocatorIS7_EEE9push_backEOS7_ */
/* Demangled: std::__1::__split_buffer<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**, std::__1::allocator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**>&>::push_back(NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**&&) */
int _ZNSt3__114__split_bufferIPPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordERNS_9allocatorIS7_EEE9push_backEOS7_(void);

/* Symbol: _ZTVNSt3__111__match_anyIcEE */
/* Demangled: vtable for std::__1::__match_any<char> */
extern void* _ZTVNSt3__111__match_anyIcEE;

/* Symbol: _ZTVN5NSCam5Utils4ULog11DualULoggerINS1_12TraceULoggerENS1_29AndroidULoggerNoNormalDetailsEEE */
/* Demangled: vtable for NSCam::Utils::ULog::DualULogger<NSCam::Utils::ULog::TraceULogger, NSCam::Utils::ULog::AndroidULoggerNoNormalDetails> */
extern void* _ZTVN5NSCam5Utils4ULog11DualULoggerINS1_12TraceULoggerENS1_29AndroidULoggerNoNormalDetailsEEE;

/* Symbol: _ZN5NSCam5Utils4ULog4File15FileULoggerBase8initHookEv */
/* Demangled: NSCam::Utils::ULog::File::FileULoggerBase::initHook() */
int _ZN5NSCam5Utils4ULog4File15FileULoggerBase8initHookEv(void);

/* Symbol: _ZN5NSCam5Utils4ULog14ULogRTDiagImpl18timeoutPickSuspectEji */
/* Demangled: NSCam::Utils::ULog::ULogRTDiagImpl::timeoutPickSuspect(unsigned int, int) */
int _ZN5NSCam5Utils4ULog14ULogRTDiagImpl18timeoutPickSuspectEji(void);

/* Symbol: _ZNKSt3__111__alternateIcE12__exec_splitEbRNS_7__stateIcEE */
/* Demangled: std::__1::__alternate<char>::__exec_split(bool, std::__1::__state<char>&) const */
int _ZNKSt3__111__alternateIcE12__exec_splitEbRNS_7__stateIcEE(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE23__parse_QUOTED_CHAR_EREIPKcEET_S7_S7_ */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_QUOTED_CHAR_ERE<char const*>(char const*, char const*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE23__parse_QUOTED_CHAR_EREIPKcEET_S7_S7_(void);

/* Symbol: _ZNSt3__114__split_bufferINS_7__stateIcEERNS_9allocatorIS2_EEED2Ev */
/* Demangled: std::__1::__split_buffer<std::__1::__state<char>, std::__1::allocator<std::__1::__state<char> >&>::~__split_buffer() */
int _ZNSt3__114__split_bufferINS_7__stateIcEERNS_9allocatorIS2_EEED2Ev(void);

/* Symbol: _ZNSt3__16vectorIPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS6_EEE7reserveEj */
/* Demangled: std::__1::vector<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*, std::__1::allocator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*> >::reserve(unsigned int) */
int _ZNSt3__16vectorIPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS6_EEE7reserveEj(void);

/* Symbol: _ZN5NSCam5Utils4ULog7ULogger13onLogPathJoinEjPKcNS1_13RequestTypeIdEjPKjj */
/* Demangled: NSCam::Utils::ULog::ULogger::onLogPathJoin(unsigned int, char const*, NSCam::Utils::ULog::RequestTypeId, unsigned int, unsigned int const*, unsigned int) */
int _ZN5NSCam5Utils4ULog7ULogger13onLogPathJoinEjPKcNS1_13RequestTypeIdEjPKjj(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int fn___aeabi_memclr(void) __asm__("__aeabi_memclr");

/* Symbol: _ZNSt3__16vectorINS_7__stateIcEENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE */
/* Demangled: std::__1::vector<std::__1::__state<char>, std::__1::allocator<std::__1::__state<char> > >::__swap_out_circular_buffer(std::__1::__split_buffer<std::__1::__state<char>, std::__1::allocator<std::__1::__state<char> >&>&) */
int _ZNSt3__16vectorINS_7__stateIcEENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE(void);

/* Symbol: _ZTVNSt3__111__end_stateIcEE */
/* Demangled: vtable for std::__1::__end_state<char> */
extern void* _ZTVNSt3__111__end_stateIcEE;

/* Symbol: __floatdidf */
/* Demangled: __floatdidf */
int fn___floatdidf(void) __asm__("__floatdidf");

/* Symbol: _ZN5NSCam5Utils4ULog4File15FileULoggerBase13onLogFuncLifeEjPKcS5_NS1_11FuncLifeTagE */
/* Demangled: NSCam::Utils::ULog::File::FileULoggerBase::onLogFuncLife(unsigned int, char const*, char const*, NSCam::Utils::ULog::FuncLifeTag) */
int _ZN5NSCam5Utils4ULog4File15FileULoggerBase13onLogFuncLifeEjPKcS5_NS1_11FuncLifeTagE(void);

/* Symbol: _ZN5NSCam5Utils4ULog7ULoggerD2Ev */
/* Demangled: NSCam::Utils::ULog::ULogger::~ULogger() */
int _ZN5NSCam5Utils4ULog7ULoggerD2Ev(void);

/* Symbol: _ZNKSt3__112regex_traitsIcE9transformINS_11__wrap_iterIPcEEEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SC_ */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::regex_traits<char>::transform<std::__1::__wrap_iter<char*> >(std::__1::__wrap_iter<char*>, std::__1::__wrap_iter<char*>) const */
int _ZNKSt3__112regex_traitsIcE9transformINS_11__wrap_iterIPcEEEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SC_(void);

/* Symbol: _ZNSt3__14moveIPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordEPS6_RS6_PS7_iLi1024ES6_S7_S8_S9_iLi1024EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENSA_IT_T0_T1_T2_T3_XT4_EEESM_SG_ */
/* Demangled: std::__1::__deque_iterator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*&, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord***, int, 1024> std::__1::move<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*&, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord***, int, 1024, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*&, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord***, int, 1024>(std::__1::__deque_iterator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*&, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord***, int, 1024>, std::__1::__deque_iterator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*&, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord***, int, 1024>, std::__1::__deque_iterator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*&, NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord***, int, 1024>) */
int _ZNSt3__14moveIPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordEPS6_RS6_PS7_iLi1024ES6_S7_S8_S9_iLi1024EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENSA_IT_T0_T1_T2_T3_XT4_EEESM_SG_(void);

/* Symbol: _ZN5NSCam5Utils4ULog15ULogInitializerD2Ev */
/* Demangled: NSCam::Utils::ULog::ULogInitializer::~ULogInitializer() */
int _ZN5NSCam5Utils4ULog15ULogInitializerD2Ev(void);

/* Symbol: _ZN5NSCam5Utils4ULog7ULogger12onLogPathDivEjPKcNS1_13RequestTypeIdEjPKjj */
/* Demangled: NSCam::Utils::ULog::ULogger::onLogPathDiv(unsigned int, char const*, NSCam::Utils::ULog::RequestTypeId, unsigned int, unsigned int const*, unsigned int) */
int _ZN5NSCam5Utils4ULog7ULogger12onLogPathDivEjPKcNS1_13RequestTypeIdEjPKjj(void);

/* Symbol: _ZTVN5NSCam5Utils4ULog11DualULoggerINS1_12TraceULoggerENS1_4File14PassiveULoggerEEE */
/* Demangled: vtable for NSCam::Utils::ULog::DualULogger<NSCam::Utils::ULog::TraceULogger, NSCam::Utils::ULog::File::PassiveULogger> */
extern void* _ZTVN5NSCam5Utils4ULog11DualULoggerINS1_12TraceULoggerENS1_4File14PassiveULoggerEEE;

/* Symbol: _ZN5NSCam5Utils4ULog9ULogGuard16registerReqGuardEjNS1_13RequestTypeIdEji */
/* Demangled: NSCam::Utils::ULog::ULogGuard::registerReqGuard(unsigned int, NSCam::Utils::ULog::RequestTypeId, unsigned int, int) */
int _ZN5NSCam5Utils4ULog9ULogGuard16registerReqGuardEjNS1_13RequestTypeIdEji(void);

/* Symbol: _ZN5NSCam5Utils4ULog9ULogGuard19unregisterFuncGuardEi */
/* Demangled: NSCam::Utils::ULog::ULogGuard::unregisterFuncGuard(int) */
int _ZN5NSCam5Utils4ULog9ULogGuard19unregisterFuncGuardEi(void);

/* Symbol: _ZNKSt3__117__repeat_one_loopIcE6__execERNS_7__stateIcEE */
/* Demangled: std::__1::__repeat_one_loop<char>::__exec(std::__1::__state<char>&) const */
int _ZNKSt3__117__repeat_one_loopIcE6__execERNS_7__stateIcEE(void);

/* Symbol: _ZNSt3__114__split_bufferIPPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS7_EEED2Ev */
/* Demangled: std::__1::__split_buffer<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**, std::__1::allocator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**> >::~__split_buffer() */
int _ZNSt3__114__split_bufferIPPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS7_EEED2Ev(void);

/* Symbol: _ZTVNSt3__110__l_anchorIcEE */
/* Demangled: vtable for std::__1::__l_anchor<char> */
extern void* _ZTVNSt3__110__l_anchorIcEE;

/* Symbol: _ZN5NSCam5Utils4ULog4File14PassiveULogger16flushThreadEntryEv */
/* Demangled: NSCam::Utils::ULog::File::PassiveULogger::flushThreadEntry() */
int _ZN5NSCam5Utils4ULog4File14PassiveULogger16flushThreadEntryEv(void);

/* Symbol: _ZNKSt3__16__loopIcE6__execERNS_7__stateIcEE */
/* Demangled: std::__1::__loop<char>::__exec(std::__1::__state<char>&) const */
int _ZNKSt3__16__loopIcE6__execERNS_7__stateIcEE(void);

/* Symbol: _ZNSt3__110__list_impIN7android2wpIN5NSCam5Utils4ULog9ULogGuard10IFinalizerEEENS_9allocatorIS8_EEE5clearEv */
/* Demangled: std::__1::__list_imp<android::wp<NSCam::Utils::ULog::ULogGuard::IFinalizer>, std::__1::allocator<android::wp<NSCam::Utils::ULog::ULogGuard::IFinalizer> > >::clear() */
int _ZNSt3__110__list_impIN7android2wpIN5NSCam5Utils4ULog9ULogGuard10IFinalizerEEENS_9allocatorIS8_EEE5clearEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPNS_10unique_ptrIN5NSCam5Utils4ULog4File15FileULoggerBase6BufferENS_14default_deleteIS7_EEEERNS_9allocatorISB_EEE9push_backEOSB_ */
/* Demangled: std::__1::__split_buffer<std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> >*, std::__1::allocator<std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> >*>&>::push_back(std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> >*&&) */
int _ZNSt3__114__split_bufferIPNS_10unique_ptrIN5NSCam5Utils4ULog4File15FileULoggerBase6BufferENS_14default_deleteIS7_EEEERNS_9allocatorISB_EEE9push_backEOSB_(void);

/* Symbol: _ZNKSt3__111basic_regexIcNS_12regex_traitsIcEEE21__match_at_start_ecmaINS_9allocatorINS_9sub_matchIPKcEEEEEEbS8_S8_RNS_13match_resultsIS8_T_EENS_15regex_constants15match_flag_typeEb */
/* Demangled: bool std::__1::basic_regex<char, std::__1::regex_traits<char> >::__match_at_start_ecma<std::__1::allocator<std::__1::sub_match<char const*> > >(char const*, char const*, std::__1::match_results<char const*, std::__1::allocator<std::__1::sub_match<char const*> > >&, std::__1::regex_constants::match_flag_type, bool) const */
int _ZNKSt3__111basic_regexIcNS_12regex_traitsIcEEE21__match_at_start_ecmaINS_9allocatorINS_9sub_matchIPKcEEEEEEbS8_S8_RNS_13match_resultsIS8_T_EENS_15regex_constants15match_flag_typeEb(void);

/* Symbol: _ZNSt3__16vectorINS_9sub_matchINS_11__wrap_iterIPKcEEEENS_9allocatorIS6_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS6_RS8_EE */
/* Demangled: std::__1::vector<std::__1::sub_match<std::__1::__wrap_iter<char const*> >, std::__1::allocator<std::__1::sub_match<std::__1::__wrap_iter<char const*> > > >::__swap_out_circular_buffer(std::__1::__split_buffer<std::__1::sub_match<std::__1::__wrap_iter<char const*> >, std::__1::allocator<std::__1::sub_match<std::__1::__wrap_iter<char const*> > >&>&) */
int _ZNSt3__16vectorINS_9sub_matchINS_11__wrap_iterIPKcEEEENS_9allocatorIS6_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS6_RS8_EE(void);

/* Symbol: _ZN5NSCam5Utils4ULog7ULogger16addModFilterMaskEj */
/* Demangled: NSCam::Utils::ULog::ULogger::addModFilterMask(unsigned int) */
int _ZN5NSCam5Utils4ULog7ULogger16addModFilterMaskEj(void);

/* Symbol: _ZN5NSCam5Utils4ULog4File14FileULogWriter9onLogFuncEPKNS2_7LogFuncE */
/* Demangled: NSCam::Utils::ULog::File::FileULogWriter::onLogFunc(NSCam::Utils::ULog::File::LogFunc const*) */
int _ZN5NSCam5Utils4ULog4File14FileULogWriter9onLogFuncEPKNS2_7LogFuncE(void);

/* Symbol: _ZN5NSCam5Utils4ULog16ULogGuardMonitor9onTimeoutEjiPKciRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: NSCam::Utils::ULog::ULogGuardMonitor::onTimeout(unsigned int, int, char const*, int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN5NSCam5Utils4ULog16ULogGuardMonitor9onTimeoutEjiPKciRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZNKSt3__111__match_anyIcE6__execERNS_7__stateIcEE */
/* Demangled: std::__1::__match_any<char>::__exec(std::__1::__state<char>&) const */
int _ZNKSt3__111__match_anyIcE6__execERNS_7__stateIcEE(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE16__push_lookaheadERKS3_bj */
/* Demangled: std::__1::basic_regex<char, std::__1::regex_traits<char> >::__push_lookahead(std::__1::basic_regex<char, std::__1::regex_traits<char> > const&, bool, unsigned int) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE16__push_lookaheadERKS3_bj(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE23__parse_ERE_dupl_symbolIPKcEET_S7_S7_PNS_16__owns_one_stateIcEEjj */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_ERE_dupl_symbol<char const*>(char const*, char const*, std::__1::__owns_one_state<char>*, unsigned int, unsigned int) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE23__parse_ERE_dupl_symbolIPKcEET_S7_S7_PNS_16__owns_one_stateIcEEjj(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE30__parse_character_class_escapeIPKcEET_S7_S7_ */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_character_class_escape<char const*>(char const*, char const*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE30__parse_character_class_escapeIPKcEET_S7_S7_(void);

/* Symbol: _ZNSt3__112__deque_baseINS_10unique_ptrIN5NSCam5Utils4ULog4File15FileULoggerBase6BufferENS_14default_deleteIS7_EEEENS_9allocatorISA_EEE5clearEv */
/* Demangled: std::__1::__deque_base<std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> >, std::__1::allocator<std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> > > >::clear() */
int _ZNSt3__112__deque_baseINS_10unique_ptrIN5NSCam5Utils4ULog4File15FileULoggerBase6BufferENS_14default_deleteIS7_EEEENS_9allocatorISA_EEE5clearEv(void);

/* Symbol: _ZN5NSCam5Utils4ULog4File15FileULoggerBase10sigHandlerEiP7siginfoPv */
/* Demangled: NSCam::Utils::ULog::File::FileULoggerBase::sigHandler(int, siginfo*, void*) */
int _ZN5NSCam5Utils4ULog4File15FileULoggerBase10sigHandlerEiP7siginfoPv(void);

/* Symbol: _ZNSt3__16vectorINS_4pairIjPKcEENS_9allocatorIS4_EEEC2ERKS7_ */
/* Demangled: std::__1::vector<std::__1::pair<unsigned int, char const*>, std::__1::allocator<std::__1::pair<unsigned int, char const*> > >::vector(std::__1::vector<std::__1::pair<unsigned int, char const*>, std::__1::allocator<std::__1::pair<unsigned int, char const*> > > const&) */
int _ZNSt3__16vectorINS_4pairIjPKcEENS_9allocatorIS4_EEEC2ERKS7_(void);

/* Symbol: _ZN5NSCam5Utils4ULog4File14PassiveULogger6onInitEv */
/* Demangled: NSCam::Utils::ULog::File::PassiveULogger::onInit() */
int _ZN5NSCam5Utils4ULog4File14PassiveULogger6onInitEv(void);

/* Symbol: _ZN5NSCam5Utils4ULog9ULogTable4initEv */
/* Demangled: NSCam::Utils::ULog::ULogTable::init() */
int _ZN5NSCam5Utils4ULog9ULogTable4initEv(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE18__parse_nondupl_REIPKcEET_S7_S7_ */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_nondupl_RE<char const*>(char const*, char const*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE18__parse_nondupl_REIPKcEET_S7_S7_(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE33__parse_one_char_or_coll_elem_EREIPKcEET_S7_S7_ */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_one_char_or_coll_elem_ERE<char const*>(char const*, char const*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE33__parse_one_char_or_coll_elem_EREIPKcEET_S7_S7_(void);

/* Symbol: _ZNSt3__16vectorIcNS_9allocatorIcEEE21__push_back_slow_pathIRKcEEvOT_ */
/* Demangled: void std::__1::vector<char, std::__1::allocator<char> >::__push_back_slow_path<char const&>(char const&) */
int _ZNSt3__16vectorIcNS_9allocatorIcEEE21__push_back_slow_pathIRKcEEvOT_(void);

/* Symbol: __aeabi_ldivmod */
/* Demangled: __aeabi_ldivmod */
int fn___aeabi_ldivmod(void) __asm__("__aeabi_ldivmod");

/* Symbol: _ZNSt3__110__list_impIPKN5NSCam5Utils4ULog15ThreadGuardDataENS_9allocatorIS6_EEE5clearEv */
/* Demangled: std::__1::__list_imp<NSCam::Utils::ULog::ThreadGuardData const*, std::__1::allocator<NSCam::Utils::ULog::ThreadGuardData const*> >::clear() */
int _ZNSt3__110__list_impIPKN5NSCam5Utils4ULog15ThreadGuardDataENS_9allocatorIS6_EEE5clearEv(void);

/* Symbol: _ZNSt3__114__split_bufferINS_4pairIccEERNS_9allocatorIS2_EEEC2EjjS5_ */
/* Demangled: std::__1::__split_buffer<std::__1::pair<char, char>, std::__1::allocator<std::__1::pair<char, char> >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<std::__1::pair<char, char> >&) */
int _ZNSt3__114__split_bufferINS_4pairIccEERNS_9allocatorIS2_EEEC2EjjS5_(void);

/* Symbol: _ZTVNSt3__120__match_char_collateIcNS_12regex_traitsIcEEEE */
/* Demangled: vtable for std::__1::__match_char_collate<char, std::__1::regex_traits<char> > */
extern void* _ZTVNSt3__120__match_char_collateIcNS_12regex_traitsIcEEEE;

/* Symbol: _ZN5NSCam5Utils4ULog4File15FileULoggerBase9onLogExitEjPKcNS1_13RequestTypeIdEj */
/* Demangled: NSCam::Utils::ULog::File::FileULoggerBase::onLogExit(unsigned int, char const*, NSCam::Utils::ULog::RequestTypeId, unsigned int) */
int _ZN5NSCam5Utils4ULog4File15FileULoggerBase9onLogExitEjPKcNS1_13RequestTypeIdEj(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam5Utils4ULog18ULogMtkcamDebuggeeEE11make_sharedIJEEES5_DpOT_ */
/* Demangled: std::__1::shared_ptr<NSCam::Utils::ULog::ULogMtkcamDebuggee> std::__1::shared_ptr<NSCam::Utils::ULog::ULogMtkcamDebuggee>::make_shared<>() */
int _ZNSt3__110shared_ptrIN5NSCam5Utils4ULog18ULogMtkcamDebuggeeEE11make_sharedIJEEES5_DpOT_(void);

/* Symbol: _ZNKSt3__16__loopIcE12__exec_splitEbRNS_7__stateIcEE */
/* Demangled: std::__1::__loop<char>::__exec_split(bool, std::__1::__state<char>&) const */
int _ZNKSt3__16__loopIcE12__exec_splitEbRNS_7__stateIcEE(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE23__parse_expression_termIPKcEET_S7_S7_PNS_20__bracket_expressionIcS2_EE */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_expression_term<char const*>(char const*, char const*, std::__1::__bracket_expression<char, std::__1::regex_traits<char> >*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE23__parse_expression_termIPKcEET_S7_S7_PNS_20__bracket_expressionIcS2_EE(void);

/* Symbol: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE18__parse_ERE_branchIPKcEET_S7_S7_ */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_ERE_branch<char const*>(char const*, char const*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE18__parse_ERE_branchIPKcEET_S7_S7_(void);

/* Symbol: _ZNSt3__15dequeINS_7__stateIcEENS_9allocatorIS2_EEE20__add_front_capacityEv */
/* Demangled: std::__1::deque<std::__1::__state<char>, std::__1::allocator<std::__1::__state<char> > >::__add_front_capacity() */
int _ZNSt3__15dequeINS_7__stateIcEENS_9allocatorIS2_EEE20__add_front_capacityEv(void);

/* Symbol: _ZNSt3__15dequeIPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS6_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*, std::__1::allocator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*> >::__add_back_capacity() */
int _ZNSt3__15dequeIPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS6_EEE19__add_back_capacityEv(void);

/* Symbol: _ZN5NSCam5Utils4ULog19ULogInitializerImpl7sInitedE */
/* Demangled: NSCam::Utils::ULog::ULogInitializerImpl::sInited */
extern void* _ZN5NSCam5Utils4ULog19ULogInitializerImpl7sInitedE;

/* Symbol: _ZN5NSCam5Utils4ULog4File14FileULogWriter13onLogPathJoinEPKNS2_11LogPathTopoE */
/* Demangled: NSCam::Utils::ULog::File::FileULogWriter::onLogPathJoin(NSCam::Utils::ULog::File::LogPathTopo const*) */
int _ZN5NSCam5Utils4ULog4File14FileULogWriter13onLogPathJoinEPKNS2_11LogPathTopoE(void);

/* Symbol: _ZNSt3__15dequeINS_10unique_ptrIN5NSCam5Utils4ULog4File15FileULoggerBase6BufferENS_14default_deleteIS7_EEEENS_9allocatorISA_EEE12emplace_backIJSA_EEERSA_DpOT_ */
/* Demangled: std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> >& std::__1::deque<std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> >, std::__1::allocator<std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> > > >::emplace_back<std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> > >(std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> >&&) */
int _ZNSt3__15dequeINS_10unique_ptrIN5NSCam5Utils4ULog4File15FileULoggerBase6BufferENS_14default_deleteIS7_EEEENS_9allocatorISA_EEE12emplace_backIJSA_EEERSA_DpOT_(void);

/* Symbol: _ZN5NSCam5Utils4ULog16ULogGuardMonitor14printToFileLogEPKcRS4_ */
/* Demangled: NSCam::Utils::ULog::ULogGuardMonitor::printToFileLog(char const*, char const*&) */
int _ZN5NSCam5Utils4ULog16ULogGuardMonitor14printToFileLogEPKcRS4_(void);

/* Symbol: _ZNKSt3__111__lookaheadIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE */
/* Demangled: std::__1::__lookahead<char, std::__1::regex_traits<char> >::__exec(std::__1::__state<char>&) const */
int _ZNKSt3__111__lookaheadIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE20__parse_ORD_CHAR_EREIPKcEET_S7_S7_ */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_ORD_CHAR_ERE<char const*>(char const*, char const*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE20__parse_ORD_CHAR_EREIPKcEET_S7_S7_(void);

/* Symbol: _ZNSt3__113match_resultsIPKcNS_9allocatorINS_9sub_matchIS2_EEEEE6__initEjS2_S2_b */
/* Demangled: std::__1::match_results<char const*, std::__1::allocator<std::__1::sub_match<char const*> > >::__init(unsigned int, char const*, char const*, bool) */
int _ZNSt3__113match_resultsIPKcNS_9allocatorINS_9sub_matchIS2_EEEEE6__initEjS2_S2_b(void);

/* Symbol: _ZTVN5NSCam5Utils4ULog11DualULoggerINS1_12TraceULoggerENS1_4File11FileULoggerEEE */
/* Demangled: vtable for NSCam::Utils::ULog::DualULogger<NSCam::Utils::ULog::TraceULogger, NSCam::Utils::ULog::File::FileULogger> */
extern void* _ZTVN5NSCam5Utils4ULog11DualULoggerINS1_12TraceULoggerENS1_4File11FileULoggerEEE;

/* Symbol: _ZNKSt3__118__match_char_icaseIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE */
/* Demangled: std::__1::__match_char_icase<char, std::__1::regex_traits<char> >::__exec(std::__1::__state<char>&) const */
int _ZNKSt3__118__match_char_icaseIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE17__parse_assertionIPKcEET_S7_S7_ */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_assertion<char const*>(char const*, char const*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE17__parse_assertionIPKcEET_S7_S7_(void);

/* Symbol: _ZNSt3__112__deque_baseINS_7__stateIcEENS_9allocatorIS2_EEED2Ev */
/* Demangled: std::__1::__deque_base<std::__1::__state<char>, std::__1::allocator<std::__1::__state<char> > >::~__deque_base() */
int _ZNSt3__112__deque_baseINS_7__stateIcEENS_9allocatorIS2_EEED2Ev(void);

/* Symbol: _ZNK5NSCam5Utils4ULog9ULogTable13getModuleNameEj */
/* Demangled: NSCam::Utils::ULog::ULogTable::getModuleName(unsigned int) const */
int _ZNK5NSCam5Utils4ULog9ULogTable13getModuleNameEj(void);

/* Symbol: _ZNSt3__114__split_bufferIPNS_7__stateIcEERNS_9allocatorIS3_EEE9push_backEOS3_ */
/* Demangled: std::__1::__split_buffer<std::__1::__state<char>*, std::__1::allocator<std::__1::__state<char>*>&>::push_back(std::__1::__state<char>*&&) */
int _ZNSt3__114__split_bufferIPNS_7__stateIcEERNS_9allocatorIS3_EEE9push_backEOS3_(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN7android10LogPrinterENS_9allocatorIS2_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<android::LogPrinter, std::__1::allocator<android::LogPrinter> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN7android10LogPrinterENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN5NSCam5Utils4ULog7ULogger13sDetailsLevelE */
/* Demangled: NSCam::Utils::ULog::ULogger::sDetailsLevel */
extern void* _ZN5NSCam5Utils4ULog7ULogger13sDetailsLevelE;

/* Symbol: _ZNKSt3__118__back_ref_collateIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE */
/* Demangled: std::__1::__back_ref_collate<char, std::__1::regex_traits<char> >::__exec(std::__1::__state<char>&) const */
int _ZNKSt3__118__back_ref_collateIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE(void);

/* Symbol: _ZNKSt3__120__bracket_expressionIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE */
/* Demangled: std::__1::__bracket_expression<char, std::__1::regex_traits<char> >::__exec(std::__1::__state<char>&) const */
int _ZNKSt3__120__bracket_expressionIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE(void);

/* Symbol: _ZTVNSt3__117__repeat_one_loopIcEE */
/* Demangled: vtable for std::__1::__repeat_one_loop<char> */
extern void* _ZTVNSt3__117__repeat_one_loopIcEE;

/* Symbol: _ZTVNSt3__121__empty_non_own_stateIcEE */
/* Demangled: vtable for std::__1::__empty_non_own_state<char> */
extern void* _ZTVNSt3__121__empty_non_own_stateIcEE;

/* Symbol: _ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEMN5NSCam5Utils4ULog4File11FileULoggerEFvvEPSB_EEEEEPvSG_ */
/* Demangled: void* std::__1::__thread_proxy<std::__1::tuple<std::__1::unique_ptr<std::__1::__thread_struct, std::__1::default_delete<std::__1::__thread_struct> >, void (NSCam::Utils::ULog::File::FileULogger::*)(), NSCam::Utils::ULog::File::FileULogger*> >(void*) */
int _ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEMN5NSCam5Utils4ULog4File11FileULoggerEFvvEPSB_EEEEEPvSG_(void);

/* Symbol: _ZNKSt3__111basic_regexIcNS_12regex_traitsIcEEE16__match_at_startINS_9allocatorINS_9sub_matchIPKcEEEEEEbS8_S8_RNS_13match_resultsIS8_T_EENS_15regex_constants15match_flag_typeEb */
/* Demangled: bool std::__1::basic_regex<char, std::__1::regex_traits<char> >::__match_at_start<std::__1::allocator<std::__1::sub_match<char const*> > >(char const*, char const*, std::__1::match_results<char const*, std::__1::allocator<std::__1::sub_match<char const*> > >&, std::__1::regex_constants::match_flag_type, bool) const */
int _ZNKSt3__111basic_regexIcNS_12regex_traitsIcEEE16__match_at_startINS_9allocatorINS_9sub_matchIPKcEEEEEEbS8_S8_RNS_13match_resultsIS8_T_EENS_15regex_constants15match_flag_typeEb(void);

/* Symbol: _ZNKSt3__112regex_traitsIcE20__lookup_collatenameIPKcEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SB_c */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::regex_traits<char>::__lookup_collatename<char const*>(char const*, char const*, char) const */
int _ZNKSt3__112regex_traitsIcE20__lookup_collatenameIPKcEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SB_c(void);

/* Symbol: _ZNSt3__114__split_bufferINS_7__stateIcEERNS_9allocatorIS2_EEEC2EjjS5_ */
/* Demangled: std::__1::__split_buffer<std::__1::__state<char>, std::__1::allocator<std::__1::__state<char> >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<std::__1::__state<char> >&) */
int _ZNSt3__114__split_bufferINS_7__stateIcEERNS_9allocatorIS2_EEEC2EjjS5_(void);

/* Symbol: _ZN5NSCam5Utils4ULog14ULogRTDiagImpl10dumpToFileEiPKc */
/* Demangled: NSCam::Utils::ULog::ULogRTDiagImpl::dumpToFile(int, char const*) */
int _ZN5NSCam5Utils4ULog14ULogRTDiagImpl10dumpToFileEiPKc(void);

/* Symbol: _ZN5NSCam5Utils4ULog4File15FileULoggerBase12onLogPathDivEjPKcNS1_13RequestTypeIdEjPKjj */
/* Demangled: NSCam::Utils::ULog::File::FileULoggerBase::onLogPathDiv(unsigned int, char const*, NSCam::Utils::ULog::RequestTypeId, unsigned int, unsigned int const*, unsigned int) */
int _ZN5NSCam5Utils4ULog4File15FileULoggerBase12onLogPathDivEjPKcNS1_13RequestTypeIdEjPKjj(void);

/* Symbol: _ZN5NSCam5Utils4ULog7ULoggerD1Ev */
/* Demangled: NSCam::Utils::ULog::ULogger::~ULogger() */
int _ZN5NSCam5Utils4ULog7ULoggerD1Ev(void);

/* Symbol: _ZN5NSCam5Utils4ULog19getTopCamModuleNameEiRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEERS8_ */
/* Demangled: NSCam::Utils::ULog::getTopCamModuleName(int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN5NSCam5Utils4ULog19getTopCamModuleNameEiRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEERS8_(void);

/* Symbol: _ZTHN5NSCam5Utils4ULog16sThreadGuardDataE */
/* Demangled: TLS init function for NSCam::Utils::ULog::sThreadGuardData */
int _ZTHN5NSCam5Utils4ULog16sThreadGuardDataE(void);

/* Symbol: _ZN5NSCam5Utils4ULog15ULogInitializerD1Ev */
/* Demangled: NSCam::Utils::ULog::ULogInitializer::~ULogInitializer() */
int _ZN5NSCam5Utils4ULog15ULogInitializerD1Ev(void);

/* Symbol: _ZN5NSCam5Utils4ULog7ULogger8sULoggerE */
/* Demangled: NSCam::Utils::ULog::ULogger::sULogger */
extern void* _ZN5NSCam5Utils4ULog7ULogger8sULoggerE;

/* Symbol: _ZN5NSCam5Utils4ULog4File11FileULogger16flushThreadEntryEv */
/* Demangled: NSCam::Utils::ULog::File::FileULogger::flushThreadEntry() */
int _ZN5NSCam5Utils4ULog4File11FileULogger16flushThreadEntryEv(void);

/* Symbol: _ZN5NSCam5Utils4ULog4File14FileULogWriter12onLogDetailsEPKNS2_10LogDetailsE */
/* Demangled: NSCam::Utils::ULog::File::FileULogWriter::onLogDetails(NSCam::Utils::ULog::File::LogDetails const*) */
int _ZN5NSCam5Utils4ULog4File14FileULogWriter12onLogDetailsEPKNS2_10LogDetailsE(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE19__parse_QUOTED_CHARIPKcEET_S7_S7_ */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_QUOTED_CHAR<char const*>(char const*, char const*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE19__parse_QUOTED_CHARIPKcEET_S7_S7_(void);

/* Symbol: _ZTVNSt3__110__back_refIcEE */
/* Demangled: vtable for std::__1::__back_ref<char> */
extern void* _ZTVNSt3__110__back_refIcEE;

/* Symbol: _ZN5NSCam5Utils4ULog4File15FileULoggerBase10uninitHookEv */
/* Demangled: NSCam::Utils::ULog::File::FileULoggerBase::uninitHook() */
int _ZN5NSCam5Utils4ULog4File15FileULoggerBase10uninitHookEv(void);

/* Symbol: _ZN5NSCam5Utils4ULog16ULogGuardMonitor12RequestQueueC2Ev */
/* Demangled: NSCam::Utils::ULog::ULogGuardMonitor::RequestQueue::RequestQueue() */
int _ZN5NSCam5Utils4ULog16ULogGuardMonitor12RequestQueueC2Ev(void);

/* Symbol: _ZNKSt3__111basic_regexIcNS_12regex_traitsIcEEE8__searchINS_9allocatorINS_9sub_matchIPKcEEEEEEbS8_S8_RNS_13match_resultsIS8_T_EENS_15regex_constants15match_flag_typeE */
/* Demangled: bool std::__1::basic_regex<char, std::__1::regex_traits<char> >::__search<std::__1::allocator<std::__1::sub_match<char const*> > >(char const*, char const*, std::__1::match_results<char const*, std::__1::allocator<std::__1::sub_match<char const*> > >&, std::__1::regex_constants::match_flag_type) const */
int _ZNKSt3__111basic_regexIcNS_12regex_traitsIcEEE8__searchINS_9allocatorINS_9sub_matchIPKcEEEEEEbS8_S8_RNS_13match_resultsIS8_T_EENS_15regex_constants15match_flag_typeE(void);

/* Symbol: _ZNSt3__113__vector_baseINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS5_IS8_EEED2Ev */
/* Demangled: std::__1::__vector_base<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::~__vector_base() */
int _ZNSt3__113__vector_baseINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS5_IS8_EEED2Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIPNS_7__stateIcEENS_9allocatorIS3_EEED2Ev */
/* Demangled: std::__1::__split_buffer<std::__1::__state<char>*, std::__1::allocator<std::__1::__state<char>*> >::~__split_buffer() */
int _ZNSt3__114__split_bufferIPNS_7__stateIcEENS_9allocatorIS3_EEED2Ev(void);

/* Symbol: _ZTVNSt3__120__bracket_expressionIcNS_12regex_traitsIcEEEE */
/* Demangled: vtable for std::__1::__bracket_expression<char, std::__1::regex_traits<char> > */
extern void* _ZTVNSt3__120__bracket_expressionIcNS_12regex_traitsIcEEEE;

/* Symbol: _ZTVN5NSCam5Utils4ULog7ULoggerE */
/* Demangled: vtable for NSCam::Utils::ULog::ULogger */
extern void* _ZTVN5NSCam5Utils4ULog7ULoggerE;

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE24__parse_collating_symbolIPKcEET_S7_S7_RNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_collating_symbol<char const*>(char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE24__parse_collating_symbolIPKcEET_S7_S7_RNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void);

/* Symbol: _ZNSt3__16vectorINS_4pairIjPKcEENS_9allocatorIS4_EEE8__appendEj */
/* Demangled: std::__1::vector<std::__1::pair<unsigned int, char const*>, std::__1::allocator<std::__1::pair<unsigned int, char const*> > >::__append(unsigned int) */
int _ZNSt3__16vectorINS_4pairIjPKcEENS_9allocatorIS4_EEE8__appendEj(void);

/* Symbol: __udivmodsi4 */
/* Demangled: __udivmodsi4 */
int fn___udivmodsi4(void) __asm__("__udivmodsi4");

/* Symbol: _ZN5NSCam5Utils4ULog16ULogGuardMonitor16registerReqGuardEjNS1_13RequestTypeIdEji */
/* Demangled: NSCam::Utils::ULog::ULogGuardMonitor::registerReqGuard(unsigned int, NSCam::Utils::ULog::RequestTypeId, unsigned int, int) */
int _ZN5NSCam5Utils4ULog16ULogGuardMonitor16registerReqGuardEjNS1_13RequestTypeIdEji(void);

/* Symbol: _ZNSt3__16vectorINS_9sub_matchINS_11__wrap_iterIPKcEEEENS_9allocatorIS6_EEE6resizeEj */
/* Demangled: std::__1::vector<std::__1::sub_match<std::__1::__wrap_iter<char const*> >, std::__1::allocator<std::__1::sub_match<std::__1::__wrap_iter<char const*> > > >::resize(unsigned int) */
int _ZNSt3__16vectorINS_9sub_matchINS_11__wrap_iterIPKcEEEENS_9allocatorIS6_EEE6resizeEj(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE18__parse_awk_escapeIPKcEET_S7_S7_PNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_awk_escape<char const*>(char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE18__parse_awk_escapeIPKcEET_S7_S7_PNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void);

/* Symbol: _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS5_IS8_EEE21__push_back_slow_pathIS8_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__push_back_slow_path<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >(std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&&) */
int _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS5_IS8_EEE21__push_back_slow_pathIS8_EEvOT_(void);

/* Symbol: _ZNSt3__114__split_bufferIPNS_10unique_ptrIN5NSCam5Utils4ULog4File15FileULoggerBase6BufferENS_14default_deleteIS7_EEEENS_9allocatorISB_EEE10push_frontEOSB_ */
/* Demangled: std::__1::__split_buffer<std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> >*, std::__1::allocator<std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> >*> >::push_front(std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> >*&&) */
int _ZNSt3__114__split_bufferIPNS_10unique_ptrIN5NSCam5Utils4ULog4File15FileULoggerBase6BufferENS_14default_deleteIS7_EEEENS_9allocatorISB_EEE10push_frontEOSB_(void);

/* Symbol: _ZNSt3__116__owns_one_stateIcED0Ev */
/* Demangled: std::__1::__owns_one_state<char>::~__owns_one_state() */
int _ZNSt3__116__owns_one_stateIcED0Ev(void);

/* Symbol: __udivsi3 */
/* Demangled: __udivsi3 */
int fn___udivsi3(void) __asm__("__udivsi3");

/* Symbol: _ZN5NSCam5Utils4ULog7ULogger14sModFilterMaskE */
/* Demangled: NSCam::Utils::ULog::ULogger::sModFilterMask */
extern void* _ZN5NSCam5Utils4ULog7ULogger14sModFilterMaskE;

/* Symbol: _ZN5NSCam5Utils4ULog16ULogGuardMonitor18unregisterReqGuardEjNS1_13RequestTypeIdEj */
/* Demangled: NSCam::Utils::ULog::ULogGuardMonitor::unregisterReqGuard(unsigned int, NSCam::Utils::ULog::RequestTypeId, unsigned int) */
int _ZN5NSCam5Utils4ULog16ULogGuardMonitor18unregisterReqGuardEjNS1_13RequestTypeIdEj(void);

/* Symbol: _ZTVNSt3__118__match_char_icaseIcNS_12regex_traitsIcEEEE */
/* Demangled: vtable for std::__1::__match_char_icase<char, std::__1::regex_traits<char> > */
extern void* _ZTVNSt3__118__match_char_icaseIcNS_12regex_traitsIcEEEE;

/* Symbol: _ZN5NSCam5Utils4ULog4File14PassiveULogger7onFlushEi */
/* Demangled: NSCam::Utils::ULog::File::PassiveULogger::onFlush(int) */
int _ZN5NSCam5Utils4ULog4File14PassiveULogger7onFlushEi(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE32__parse_one_char_or_coll_elem_REIPKcEET_S7_S7_ */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_one_char_or_coll_elem_RE<char const*>(char const*, char const*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE32__parse_one_char_or_coll_elem_REIPKcEET_S7_S7_(void);

/* Symbol: _ZNSt3__16vectorINS_4pairIjPKcEENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE */
/* Demangled: std::__1::vector<std::__1::pair<unsigned int, char const*>, std::__1::allocator<std::__1::pair<unsigned int, char const*> > >::__swap_out_circular_buffer(std::__1::__split_buffer<std::__1::pair<unsigned int, char const*>, std::__1::allocator<std::__1::pair<unsigned int, char const*> >&>&) */
int _ZNSt3__16vectorINS_4pairIjPKcEENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE(void);

/* Symbol: _ZNSt3__16vectorINS_9sub_matchIPKcEENS_9allocatorIS4_EEE11__vallocateEj */
/* Demangled: std::__1::vector<std::__1::sub_match<char const*>, std::__1::allocator<std::__1::sub_match<char const*> > >::__vallocate(unsigned int) */
int _ZNSt3__16vectorINS_9sub_matchIPKcEENS_9allocatorIS4_EEE11__vallocateEj(void);

/* Symbol: _ZTVNSt3__116__back_ref_icaseIcNS_12regex_traitsIcEEEE */
/* Demangled: vtable for std::__1::__back_ref_icase<char, std::__1::regex_traits<char> > */
extern void* _ZTVNSt3__116__back_ref_icaseIcNS_12regex_traitsIcEEEE;

/* Symbol: _ZN5NSCam5Utils4ULog16ULogGuardMonitorD2Ev */
/* Demangled: NSCam::Utils::ULog::ULogGuardMonitor::~ULogGuardMonitor() */
int _ZN5NSCam5Utils4ULog16ULogGuardMonitorD2Ev(void);

/* Symbol: _ZNKSt3__115__word_boundaryIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE */
/* Demangled: std::__1::__word_boundary<char, std::__1::regex_traits<char> >::__exec(std::__1::__state<char>&) const */
int _ZNKSt3__115__word_boundaryIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE(void);

/* Symbol: _ZN5NSCam5Utils4ULog27__setULogToAndroidByDefaultE */
/* Demangled: NSCam::Utils::ULog::__setULogToAndroidByDefault */
extern void* _ZN5NSCam5Utils4ULog27__setULogToAndroidByDefaultE;

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE12__parse_termIPKcEET_S7_S7_ */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_term<char const*>(char const*, char const*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE12__parse_termIPKcEET_S7_S7_(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE13__parse_egrepIPKcEET_S7_S7_ */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_egrep<char const*>(char const*, char const*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE13__parse_egrepIPKcEET_S7_S7_(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE19__parse_atom_escapeIPKcEET_S7_S7_ */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_atom_escape<char const*>(char const*, char const*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE19__parse_atom_escapeIPKcEET_S7_S7_(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPNS_13__empty_stateIcEENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_pointer<std::__1::__empty_state<char>*, std::__1::default_delete<std::__1::__empty_state<char> >, std::__1::allocator<std::__1::__empty_state<char> > >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_pointerIPNS_13__empty_stateIcEENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN5NSCam5Utils4ULog15ULogRuntimeDiag5sDiagE */
/* Demangled: NSCam::Utils::ULog::ULogRuntimeDiag::sDiag */
extern void* _ZN5NSCam5Utils4ULog15ULogRuntimeDiag5sDiagE;

/* Symbol: _ZNKSt3__112regex_traitsIcE19__transform_primaryIPcEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SA_c */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::regex_traits<char>::__transform_primary<char*>(char*, char*, char) const */
int _ZNKSt3__112regex_traitsIcE19__transform_primaryIPcEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SA_c(void);

/* Symbol: _ZN5NSCam5Utils4ULog17getDefaultULoggerEv */
/* Demangled: NSCam::Utils::ULog::getDefaultULogger() */
int _ZN5NSCam5Utils4ULog17getDefaultULoggerEv(void);

/* Symbol: _ZN5NSCam5Utils4ULog19ULogInitializerImpl22sDefaultAndroidLogTypeE */
/* Demangled: NSCam::Utils::ULog::ULogInitializerImpl::sDefaultAndroidLogType */
extern void* _ZN5NSCam5Utils4ULog19ULogInitializerImpl22sDefaultAndroidLogTypeE;

/* Symbol: _ZN5NSCam5Utils4ULog4File15FileULoggerBase10onLogEnterEjPKcNS1_13RequestTypeIdEj */
/* Demangled: NSCam::Utils::ULog::File::FileULoggerBase::onLogEnter(unsigned int, char const*, NSCam::Utils::ULog::RequestTypeId, unsigned int) */
int _ZN5NSCam5Utils4ULog4File15FileULoggerBase10onLogEnterEjPKcNS1_13RequestTypeIdEj(void);

/* Symbol: __emutls_get_address */
/* Demangled: __emutls_get_address */
int fn___emutls_get_address(void) __asm__("__emutls_get_address");

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE12__parse_grepIPKcEET_S7_S7_ */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_grep<char const*>(char const*, char const*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE12__parse_grepIPKcEET_S7_S7_(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE18__push_alternationEPNS_16__owns_one_stateIcEES6_ */
/* Demangled: std::__1::basic_regex<char, std::__1::regex_traits<char> >::__push_alternation(std::__1::__owns_one_state<char>*, std::__1::__owns_one_state<char>*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE18__push_alternationEPNS_16__owns_one_stateIcEES6_(void);

/* Symbol: _ZNSt3__16vectorINS_7__stateIcEENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::__state<char>, std::__1::allocator<std::__1::__state<char> > >::__push_back_slow_path<std::__1::__state<char> >(std::__1::__state<char>&&) */
int _ZNSt3__16vectorINS_7__stateIcEENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void);

/* Symbol: _ZN5NSCam5Utils4ULog4File15FileULoggerBase13onLogPathJoinEjPKcNS1_13RequestTypeIdEjPKjj */
/* Demangled: NSCam::Utils::ULog::File::FileULoggerBase::onLogPathJoin(unsigned int, char const*, NSCam::Utils::ULog::RequestTypeId, unsigned int, unsigned int const*, unsigned int) */
int _ZN5NSCam5Utils4ULog4File15FileULoggerBase13onLogPathJoinEjPKcNS1_13RequestTypeIdEjPKjj(void);

/* Symbol: _ZNSt3__114__split_bufferIPNS_10unique_ptrIN5NSCam5Utils4ULog4File15FileULoggerBase6BufferENS_14default_deleteIS7_EEEENS_9allocatorISB_EEE9push_backEOSB_ */
/* Demangled: std::__1::__split_buffer<std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> >*, std::__1::allocator<std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> >*> >::push_back(std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> >*&&) */
int _ZNSt3__114__split_bufferIPNS_10unique_ptrIN5NSCam5Utils4ULog4File15FileULoggerBase6BufferENS_14default_deleteIS7_EEEENS_9allocatorISB_EEE9push_backEOSB_(void);

/* Symbol: _ZTVNSt3__117__owns_two_statesIcEE */
/* Demangled: vtable for std::__1::__owns_two_states<char> */
extern void* _ZTVNSt3__117__owns_two_statesIcEE;

/* Symbol: _ZN5NSCam5Utils4ULog15ULogRuntimeDiag12onLogDiscardEjNS1_13RequestTypeIdEPKjj */
/* Demangled: NSCam::Utils::ULog::ULogRuntimeDiag::onLogDiscard(unsigned int, NSCam::Utils::ULog::RequestTypeId, unsigned int const*, unsigned int) */
int _ZN5NSCam5Utils4ULog15ULogRuntimeDiag12onLogDiscardEjNS1_13RequestTypeIdEPKjj(void);

/* Symbol: _ZN5NSCam5Utils4ULog7ULoggerD0Ev */
/* Demangled: NSCam::Utils::ULog::ULogger::~ULogger() */
int _ZN5NSCam5Utils4ULog7ULoggerD0Ev(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE26__parse_bracket_expressionIPKcEET_S7_S7_ */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_bracket_expression<char const*>(char const*, char const*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE26__parse_bracket_expressionIPKcEET_S7_S7_(void);

/* Symbol: _ZN5NSCam5Utils4ULog4File14PassiveULogger8onUninitEv */
/* Demangled: NSCam::Utils::ULog::File::PassiveULogger::onUninit() */
int _ZN5NSCam5Utils4ULog4File14PassiveULogger8onUninitEv(void);

/* Symbol: _ZNKSt3__112__match_charIcE6__execERNS_7__stateIcEE */
/* Demangled: std::__1::__match_char<char>::__exec(std::__1::__state<char>&) const */
int _ZNKSt3__112__match_charIcE6__execERNS_7__stateIcEE(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE17__parse_simple_REIPKcEET_S7_S7_ */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_simple_RE<char const*>(char const*, char const*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE17__parse_simple_REIPKcEET_S7_S7_(void);

/* Symbol: _ZNSt3__117__owns_two_statesIcED2Ev */
/* Demangled: std::__1::__owns_two_states<char>::~__owns_two_states() */
int _ZNSt3__117__owns_two_statesIcED2Ev(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPNS_13__empty_stateIcEENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_pointer<std::__1::__empty_state<char>*, std::__1::default_delete<std::__1::__empty_state<char> >, std::__1::allocator<std::__1::__empty_state<char> > >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_pointerIPNS_13__empty_stateIcEENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN5NSCam5Utils4ULog16ULogGuardMonitor12RequestQueueC1Ev */
/* Demangled: NSCam::Utils::ULog::ULogGuardMonitor::RequestQueue::RequestQueue() */
int _ZN5NSCam5Utils4ULog16ULogGuardMonitor12RequestQueueC1Ev(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE11__push_loopEjjPNS_16__owns_one_stateIcEEjjb */
/* Demangled: std::__1::basic_regex<char, std::__1::regex_traits<char> >::__push_loop(unsigned int, unsigned int, std::__1::__owns_one_state<char>*, unsigned int, unsigned int, bool) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE11__push_loopEjjPNS_16__owns_one_stateIcEEjjb(void);

/* Symbol: _ZNSt3__14moveIPPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordES6_S7_RS6_PS7_iLi1024EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SH_SG_PNS_9enable_ifIXsr27__is_random_access_iteratorISH_EE5valueEvE4typeE */
/* Demangled: _ZNSt3__14moveIPPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordES6_S7_RS6_PS7_iLi1024EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SH_SG_PNS_9enable_ifIXsr27__is_random_access_iteratorISH_EE5valueEvE4typeE */
int _ZNSt3__14moveIPPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordES6_S7_RS6_PS7_iLi1024EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SH_SG_PNS_9enable_ifIXsr27__is_random_access_iteratorISH_EE5valueEvE4typeE(void);

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int fn___aeabi_uidiv(void) __asm__("__aeabi_uidiv");

/* Symbol: _ZN5NSCam5Utils4ULog4File14FileULogWriter11writeStringEPKcz */
/* Demangled: NSCam::Utils::ULog::File::FileULogWriter::writeString(char const*, ...) */
int _ZN5NSCam5Utils4ULog4File14FileULogWriter11writeStringEPKcz(void);

/* Symbol: _ZN5NSCam5Utils4ULog4File15FileULoggerBaseC2Ev */
/* Demangled: NSCam::Utils::ULog::File::FileULoggerBase::FileULoggerBase() */
int _ZN5NSCam5Utils4ULog4File15FileULoggerBaseC2Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIPNS_10unique_ptrIN5NSCam5Utils4ULog4File15FileULoggerBase6BufferENS_14default_deleteIS7_EEEERNS_9allocatorISB_EEE10push_frontERKSB_ */
/* Demangled: std::__1::__split_buffer<std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> >*, std::__1::allocator<std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> >*>&>::push_front(std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> >* const&) */
int _ZNSt3__114__split_bufferIPNS_10unique_ptrIN5NSCam5Utils4ULog4File15FileULoggerBase6BufferENS_14default_deleteIS7_EEEERNS_9allocatorISB_EEE10push_frontERKSB_(void);

/* Symbol: _ZN5NSCam5Utils4ULog16ULogGuardMonitor17registerFinalizerERN7android2spINS1_9ULogGuard10IFinalizerEEE */
/* Demangled: NSCam::Utils::ULog::ULogGuardMonitor::registerFinalizer(android::sp<NSCam::Utils::ULog::ULogGuard::IFinalizer>&) */
int _ZN5NSCam5Utils4ULog16ULogGuardMonitor17registerFinalizerERN7android2spINS1_9ULogGuard10IFinalizerEEE(void);

/* Symbol: _ZN5NSCam5Utils4ULog16ULogGuardMonitor8finalizeEv */
/* Demangled: NSCam::Utils::ULog::ULogGuardMonitor::finalize() */
int _ZN5NSCam5Utils4ULog16ULogGuardMonitor8finalizeEv(void);

/* Symbol: _ZNKSt3__110__l_anchorIcE6__execERNS_7__stateIcEE */
/* Demangled: std::__1::__l_anchor<char>::__exec(std::__1::__state<char>&) const */
int _ZNKSt3__110__l_anchorIcE6__execERNS_7__stateIcEE(void);

/* Symbol: _ZNSt3__15dequeINS_7__stateIcEENS_9allocatorIS2_EEE10push_frontEOS2_ */
/* Demangled: std::__1::deque<std::__1::__state<char>, std::__1::allocator<std::__1::__state<char> > >::push_front(std::__1::__state<char>&&) */
int _ZNSt3__15dequeINS_7__stateIcEENS_9allocatorIS2_EEE10push_frontEOS2_(void);

/* Symbol: _ZNSt3__15dequeINS_7__stateIcEENS_9allocatorIS2_EEE9push_backEOS2_ */
/* Demangled: std::__1::deque<std::__1::__state<char>, std::__1::allocator<std::__1::__state<char> > >::push_back(std::__1::__state<char>&&) */
int _ZNSt3__15dequeINS_7__stateIcEENS_9allocatorIS2_EEE9push_backEOS2_(void);

/* Symbol: _ZNSt3__16vectorINS_9sub_matchINS_11__wrap_iterIPKcEEEENS_9allocatorIS6_EEE8__appendEj */
/* Demangled: std::__1::vector<std::__1::sub_match<std::__1::__wrap_iter<char const*> >, std::__1::allocator<std::__1::sub_match<std::__1::__wrap_iter<char const*> > > >::__append(unsigned int) */
int _ZNSt3__16vectorINS_9sub_matchINS_11__wrap_iterIPKcEEEENS_9allocatorIS6_EEE8__appendEj(void);

/* Symbol: _ZNKSt3__112regex_traitsIcE9transformIPcEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SA_ */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::regex_traits<char>::transform<char*>(char*, char*) const */
int _ZNKSt3__112regex_traitsIcE9transformIPcEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SA_(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE22__parse_RE_dupl_symbolIPKcEET_S7_S7_PNS_16__owns_one_stateIcEEjj */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_RE_dupl_symbol<char const*>(char const*, char const*, std::__1::__owns_one_state<char>*, unsigned int, unsigned int) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE22__parse_RE_dupl_symbolIPKcEET_S7_S7_PNS_16__owns_one_stateIcEEjj(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE22__parse_decimal_escapeIPKcEET_S7_S7_ */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_decimal_escape<char const*>(char const*, char const*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE22__parse_decimal_escapeIPKcEET_S7_S7_(void);

/* Symbol: _ZNSt3__114__split_bufferIPPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS7_EEE9push_backEOS7_ */
/* Demangled: std::__1::__split_buffer<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**, std::__1::allocator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**> >::push_back(NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord**&&) */
int _ZNSt3__114__split_bufferIPPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS7_EEE9push_backEOS7_(void);

/* Symbol: _ZNSt3__15dequeINS_7__stateIcEENS_9allocatorIS2_EEE8pop_backEv */
/* Demangled: std::__1::deque<std::__1::__state<char>, std::__1::allocator<std::__1::__state<char> > >::pop_back() */
int _ZNSt3__15dequeINS_7__stateIcEENS_9allocatorIS2_EEE8pop_backEv(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN7android10LogPrinterENS_9allocatorIS2_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<android::LogPrinter, std::__1::allocator<android::LogPrinter> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN7android10LogPrinterENS_9allocatorIS2_EEEE;

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE15__parse_BACKREFIPKcEET_S7_S7_ */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_BACKREF<char const*>(char const*, char const*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE15__parse_BACKREFIPKcEET_S7_S7_(void);

/* Symbol: _ZN5NSCam5Utils4ULog15ULogInitializerC2Ev */
/* Demangled: NSCam::Utils::ULog::ULogInitializer::ULogInitializer() */
int _ZN5NSCam5Utils4ULog15ULogInitializerC2Ev(void);

/* Symbol: _ZN5NSCam5Utils4ULog4File14FileULogWriter12onLogPathDivEPKNS2_11LogPathTopoE */
/* Demangled: NSCam::Utils::ULog::File::FileULogWriter::onLogPathDiv(NSCam::Utils::ULog::File::LogPathTopo const*) */
int _ZN5NSCam5Utils4ULog4File14FileULogWriter12onLogPathDivEPKNS2_11LogPathTopoE(void);

/* Symbol: _ZNSt3__111unique_lockINS_5mutexEE4lockEv */
/* Demangled: std::__1::unique_lock<std::__1::mutex>::lock() */
int _ZNSt3__111unique_lockINS_5mutexEE4lockEv(void);

/* Symbol: _ZN5NSCam5Utils4ULog4File11FileULogger8onUninitEv */
/* Demangled: NSCam::Utils::ULog::File::FileULogger::onUninit() */
int _ZN5NSCam5Utils4ULog4File11FileULogger8onUninitEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPNS_10unique_ptrIN5NSCam5Utils4ULog4File15FileULoggerBase6BufferENS_14default_deleteIS7_EEEENS_9allocatorISB_EEED2Ev */
/* Demangled: std::__1::__split_buffer<std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> >*, std::__1::allocator<std::__1::unique_ptr<NSCam::Utils::ULog::File::FileULoggerBase::Buffer, std::__1::default_delete<NSCam::Utils::ULog::File::FileULoggerBase::Buffer> >*> >::~__split_buffer() */
int _ZNSt3__114__split_bufferIPNS_10unique_ptrIN5NSCam5Utils4ULog4File15FileULoggerBase6BufferENS_14default_deleteIS7_EEEENS_9allocatorISB_EEED2Ev(void);

/* Symbol: _ZNKSt3__111basic_regexIcNS_12regex_traitsIcEEE29__match_at_start_posix_nosubsINS_9allocatorINS_9sub_matchIPKcEEEEEEbS8_S8_RNS_13match_resultsIS8_T_EENS_15regex_constants15match_flag_typeEb */
/* Demangled: bool std::__1::basic_regex<char, std::__1::regex_traits<char> >::__match_at_start_posix_nosubs<std::__1::allocator<std::__1::sub_match<char const*> > >(char const*, char const*, std::__1::match_results<char const*, std::__1::allocator<std::__1::sub_match<char const*> > >&, std::__1::regex_constants::match_flag_type, bool) const */
int _ZNKSt3__111basic_regexIcNS_12regex_traitsIcEEE29__match_at_start_posix_nosubsINS_9allocatorINS_9sub_matchIPKcEEEEEEbS8_S8_RNS_13match_resultsIS8_T_EENS_15regex_constants15match_flag_typeEb(void);

/* Symbol: _ZNSt3__112__deque_baseIPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS6_EEE5clearEv */
/* Demangled: std::__1::__deque_base<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*, std::__1::allocator<NSCam::Utils::ULog::ULogGuardMonitor::RequestRecord*> >::clear() */
int _ZNSt3__112__deque_baseIPN5NSCam5Utils4ULog16ULogGuardMonitor13RequestRecordENS_9allocatorIS6_EEE5clearEv(void);

/* Symbol: _ZTVNSt3__116__owns_one_stateIcEE */
/* Demangled: vtable for std::__1::__owns_one_state<char> */
extern void* _ZTVNSt3__116__owns_one_stateIcEE;

/* Symbol: _ZN5NSCam5Utils4ULog4File14FileULogWriter15writeModuleListEPKji */
/* Demangled: NSCam::Utils::ULog::File::FileULogWriter::writeModuleList(unsigned int const*, int) */
int _ZN5NSCam5Utils4ULog4File14FileULogWriter15writeModuleListEPKji(void);

/* Symbol: _ZN5NSCam5Utils4ULog4File15FileULoggerBase13allocLogSpaceEjPPNS2_9LogHeaderEPPNS3_6BufferEPj */
/* Demangled: NSCam::Utils::ULog::File::FileULoggerBase::allocLogSpace(unsigned int, NSCam::Utils::ULog::File::LogHeader**, NSCam::Utils::ULog::File::FileULoggerBase::Buffer**, unsigned int*) */
int _ZN5NSCam5Utils4ULog4File15FileULoggerBase13allocLogSpaceEjPPNS2_9LogHeaderEPPNS3_6BufferEPj(void);

/* Symbol: _ZN5NSCam5Utils4ULog15ULogRuntimeDiag10onLogEnterEjNS1_13RequestTypeIdEj */
/* Demangled: NSCam::Utils::ULog::ULogRuntimeDiag::onLogEnter(unsigned int, NSCam::Utils::ULog::RequestTypeId, unsigned int) */
int _ZN5NSCam5Utils4ULog15ULogRuntimeDiag10onLogEnterEjNS1_13RequestTypeIdEj(void);

/* Symbol: _ZNKSt3__111__end_stateIcE6__execERNS_7__stateIcEE */
/* Demangled: std::__1::__end_state<char>::__exec(std::__1::__state<char>&) const */
int _ZNKSt3__111__end_stateIcE6__execERNS_7__stateIcEE(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE7__parseIPKcEET_S7_S7_ */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse<char const*>(char const*, char const*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE7__parseIPKcEET_S7_S7_(void);

/* Symbol: _ZN5NSCam5Utils4ULog14ULogRTDiagImpl10sSingletonE */
/* Demangled: NSCam::Utils::ULog::ULogRTDiagImpl::sSingleton */
extern void* _ZN5NSCam5Utils4ULog14ULogRTDiagImpl10sSingletonE;

/* Symbol: _ZN5NSCam5Utils4ULog16ULogGuardMonitorD1Ev */
/* Demangled: NSCam::Utils::ULog::ULogGuardMonitor::~ULogGuardMonitor() */
int _ZN5NSCam5Utils4ULog16ULogGuardMonitorD1Ev(void);

/* Symbol: _ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEMN5NSCam5Utils4ULog4File14PassiveULoggerEFvvEPSB_EEEEEPvSG_ */
/* Demangled: void* std::__1::__thread_proxy<std::__1::tuple<std::__1::unique_ptr<std::__1::__thread_struct, std::__1::default_delete<std::__1::__thread_struct> >, void (NSCam::Utils::ULog::File::PassiveULogger::*)(), NSCam::Utils::ULog::File::PassiveULogger*> >(void*) */
int _ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEMN5NSCam5Utils4ULog4File14PassiveULoggerEFvvEPSB_EEEEEPvSG_(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE16__parse_ecma_expIPKcEET_S7_S7_ */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_ecma_exp<char const*>(char const*, char const*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE16__parse_ecma_expIPKcEET_S7_S7_(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE21__start_matching_listEb */
/* Demangled: std::__1::basic_regex<char, std::__1::regex_traits<char> >::__start_matching_list(bool) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE21__start_matching_listEb(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE31__push_end_marked_subexpressionEj */
/* Demangled: std::__1::basic_regex<char, std::__1::regex_traits<char> >::__push_end_marked_subexpression(unsigned int) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE31__push_end_marked_subexpressionEj(void);

/* Symbol: _ZTVNSt3__115__word_boundaryIcNS_12regex_traitsIcEEEE */
/* Demangled: vtable for std::__1::__word_boundary<char, std::__1::regex_traits<char> > */
extern void* _ZTVNSt3__115__word_boundaryIcNS_12regex_traitsIcEEEE;

/* Symbol: _ZN5NSCam5Utils4ULog19ULogInitializerImpl15sAndroidULoggerE */
/* Demangled: NSCam::Utils::ULog::ULogInitializerImpl::sAndroidULogger */
extern void* _ZN5NSCam5Utils4ULog19ULogInitializerImpl15sAndroidULoggerE;

/* Symbol: _ZN5NSCam5Utils4ULog4File14FileULogWriter5closeEv */
/* Demangled: NSCam::Utils::ULog::File::FileULogWriter::close() */
int _ZN5NSCam5Utils4ULog4File14FileULogWriter5closeEv(void);

/* Symbol: _ZN5NSCam5Utils4ULog4File14FileULogWriter12onLogSubreqsEPKNS2_10LogSubreqsE */
/* Demangled: NSCam::Utils::ULog::File::FileULogWriter::onLogSubreqs(NSCam::Utils::ULog::File::LogSubreqs const*) */
int _ZN5NSCam5Utils4ULog4File14FileULogWriter12onLogSubreqsEPKNS2_10LogSubreqsE(void);

/* Symbol: _ZN5NSCam5Utils4ULog4File14FileULogWriter5flushEv */
/* Demangled: NSCam::Utils::ULog::File::FileULogWriter::flush() */
int _ZN5NSCam5Utils4ULog4File14FileULogWriter5flushEv(void);

/* Symbol: _ZNSt3__16vectorINS_9sub_matchIPKcEENS_9allocatorIS4_EEEC2ERKS7_ */
/* Demangled: std::__1::vector<std::__1::sub_match<char const*>, std::__1::allocator<std::__1::sub_match<char const*> > >::vector(std::__1::vector<std::__1::sub_match<char const*>, std::__1::allocator<std::__1::sub_match<char const*> > > const&) */
int _ZNSt3__16vectorINS_9sub_matchIPKcEENS_9allocatorIS4_EEEC2ERKS7_(void);

/* Symbol: _ZN5NSCam5Utils4ULog15ULogRuntimeDiag9onLogExitEjNS1_13RequestTypeIdEj */
/* Demangled: NSCam::Utils::ULog::ULogRuntimeDiag::onLogExit(unsigned int, NSCam::Utils::ULog::RequestTypeId, unsigned int) */
int _ZN5NSCam5Utils4ULog15ULogRuntimeDiag9onLogExitEjNS1_13RequestTypeIdEj(void);

/* Symbol: _ZN5NSCam5Utils4ULog14ULogRTDiagImpl9debugDumpERN7android7PrinterE */
/* Demangled: NSCam::Utils::ULog::ULogRTDiagImpl::debugDump(android::Printer&) */
int _ZN5NSCam5Utils4ULog14ULogRTDiagImpl9debugDumpERN7android7PrinterE(void);

/* Symbol: _ZN5NSCam5Utils4ULog4File14FileULogWriter12writeOneLineEPKcS5_RS5_ */
/* Demangled: NSCam::Utils::ULog::File::FileULogWriter::writeOneLine(char const*, char const*, char const*&) */
int _ZN5NSCam5Utils4ULog4File14FileULogWriter12writeOneLineEPKcS5_RS5_(void);

/* Symbol: REQUEST_TIMEOUT_PleaseCheckLogToFindOwner */
/* Demangled: REQUEST_TIMEOUT_PleaseCheckLogToFindOwner */
int REQUEST_TIMEOUT_PleaseCheckLogToFindOwner(void);

/* Symbol: _ZN5NSCam5Utils4ULog16ULogGuardMonitor15printBacktracesERNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE */
/* Demangled: NSCam::Utils::ULog::ULogGuardMonitor::printBacktraces(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN5NSCam5Utils4ULog16ULogGuardMonitor15printBacktracesERNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void);

/* Symbol: _ZN5NSCam5Utils4ULog15ULogRuntimeDiag8onUninitEv */
/* Demangled: NSCam::Utils::ULog::ULogRuntimeDiag::onUninit() */
int _ZN5NSCam5Utils4ULog15ULogRuntimeDiag8onUninitEv(void);

/* Symbol: _ZN5NSCam5Utils4ULog7ULogger10onLogValueEjPKcS4_i */
/* Demangled: NSCam::Utils::ULog::ULogger::onLogValue(unsigned int, char const*, char const*, int) */
int _ZN5NSCam5Utils4ULog7ULogger10onLogValueEjPKcS4_i(void);

/* Symbol: _ZN5NSCam5Utils4ULog9ULogGuard6onInitEv */
/* Demangled: NSCam::Utils::ULog::ULogGuard::onInit() */
int _ZN5NSCam5Utils4ULog9ULogGuard6onInitEv(void);

/* Symbol: _ZTVNSt3__111__alternateIcEE */
/* Demangled: vtable for std::__1::__alternate<char> */
extern void* _ZTVNSt3__111__alternateIcEE;

/* Symbol: _ZTVNSt3__120__shared_ptr_pointerIPNS_13__empty_stateIcEENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_pointer<std::__1::__empty_state<char>*, std::__1::default_delete<std::__1::__empty_state<char> >, std::__1::allocator<std::__1::__empty_state<char> > > */
extern void* _ZTVNSt3__120__shared_ptr_pointerIPNS_13__empty_stateIcEENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE;

/* Symbol: _ZTVN5NSCam5Utils4ULog12TraceULoggerE */
/* Demangled: vtable for NSCam::Utils::ULog::TraceULogger */
extern void* _ZTVN5NSCam5Utils4ULog12TraceULoggerE;

/* Symbol: __aeabi_memmove */
/* Demangled: __aeabi_memmove */
int fn___aeabi_memmove(void) __asm__("__aeabi_memmove");

/* Symbol: _ZNKSt3__126__end_marked_subexpressionIcE6__execERNS_7__stateIcEE */
/* Demangled: std::__1::__end_marked_subexpression<char>::__exec(std::__1::__state<char>&) const */
int _ZNKSt3__126__end_marked_subexpressionIcE6__execERNS_7__stateIcEE(void);

/* Symbol: _ZNSt3__112__deque_baseINS_7__stateIcEENS_9allocatorIS2_EEE5clearEv */
/* Demangled: std::__1::__deque_base<std::__1::__state<char>, std::__1::allocator<std::__1::__state<char> > >::clear() */
int _ZNSt3__112__deque_baseINS_7__stateIcEENS_9allocatorIS2_EEE5clearEv(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int fn___aeabi_memcpy(void) __asm__("__aeabi_memcpy");

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKCAM_ULOG_H */

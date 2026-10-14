/*
 * Reverse-Engineered ABI Specification for: libreference-ril.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libreference-ril.so
 */

#ifndef BEGONIA_RE_LIBREFERENCE_RIL_H
#define BEGONIA_RE_LIBREFERENCE_RIL_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android4base21SetMinimumLogSeverityENS0_11LogSeverityE */
/* Demangled: android::base::SetMinimumLogSeverity(android::base::LogSeverity) */
int _ZN7android4base21SetMinimumLogSeverityENS0_11LogSeverityE(void);

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int __aeabi_uidiv(void);

/* Symbol: __divdi3 */
/* Demangled: __divdi3 */
int __divdi3(void);

/* Symbol: _ZN12TemporaryDirC2Ev */
/* Demangled: TemporaryDir::TemporaryDir() */
int _ZN12TemporaryDirC2Ev(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void);

/* Symbol: _ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::operator<< <char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE(void);

/* Symbol: __udivmoddi4 */
/* Demangled: __udivmoddi4 */
int __udivmoddi4(void);

/* Symbol: qemu_pipe_frame_send */
/* Demangled: qemu_pipe_frame_send */
int qemu_pipe_frame_send(void);

/* Symbol: _ZN7android4base11InitLoggingEPPcONSt3__18functionIFvNS0_5LogIdENS0_11LogSeverityEPKcS8_jS8_EEEONS4_IFvS8_EEE */
/* Demangled: android::base::InitLogging(char**, std::__1::function<void (android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*)>&&, std::__1::function<void (char const*)>&&) */
int _ZN7android4base11InitLoggingEPPcONSt3__18functionIFvNS0_5LogIdENS0_11LogSeverityEPKcS8_jS8_EEEONS4_IFvS8_EEE(void);

/* Symbol: _ZN7android4base12StringPrintfEPKcz */
/* Demangled: android::base::StringPrintf(char const*, ...) */
int _ZN7android4base12StringPrintfEPKcz(void);

/* Symbol: at_set_on_timeout */
/* Demangled: at_set_on_timeout */
int at_set_on_timeout(void);

/* Symbol: _ZN7android4base16ReadFileToStringERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPS7_b */
/* Demangled: android::base::ReadFileToString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, bool) */
int _ZN7android4base16ReadFileToStringERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPS7_b(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void);

/* Symbol: at_close */
/* Demangled: at_close */
int at_close(void);

/* Symbol: at_tok_nextint */
/* Demangled: at_tok_nextint */
int at_tok_nextint(void);

/* Symbol: at_tok_start */
/* Demangled: at_tok_start */
int at_tok_start(void);

/* Symbol: _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: at_send_command_sms */
/* Demangled: at_send_command_sms */
int at_send_command_sms(void);

/* Symbol: _ZN7android4base22GetExecutableDirectoryEv */
/* Demangled: android::base::GetExecutableDirectory() */
int _ZN7android4base22GetExecutableDirectoryEv(void);

/* Symbol: _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_ */
/* Demangled: android::base::StartsWith(std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::basic_string_view<char, std::__1::char_traits<char> >) */
int _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _ZN7android4base15WriteStringToFdERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS0_11borrowed_fdE */
/* Demangled: android::base::WriteStringToFd(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::base::borrowed_fd) */
int _ZN7android4base15WriteStringToFdERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS0_11borrowed_fdE(void);

/* Symbol: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&) */
int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_(void);

/* Symbol: qemu_pipe_open */
/* Demangled: qemu_pipe_open */
int qemu_pipe_open(void);

/* Symbol: _ZN7android4base4JoinINSt3__16vectorIPKcNS2_9allocatorIS5_EEEERKNS2_12basic_stringIcNS2_11char_traitsIcEENS6_IcEEEEEESD_RKT_T0_ */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > android::base::Join<std::__1::vector<char const*, std::__1::allocator<char const*> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>(std::__1::vector<char const*, std::__1::allocator<char const*> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN7android4base4JoinINSt3__16vectorIPKcNS2_9allocatorIS5_EEEERKNS2_12basic_stringIcNS2_11char_traitsIcEENS6_IcEEEEEESD_RKT_T0_(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: _ZN7android4base11GetThreadIdEv */
/* Demangled: android::base::GetThreadId() */
int _ZN7android4base11GetThreadIdEv(void);

/* Symbol: _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void);

/* Symbol: _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN7android4base4JoinINSt3__16vectorIPKcNS2_9allocatorIS5_EEEEcEENS2_12basic_stringIcNS2_11char_traitsIcEENS6_IcEEEERKT_T0_ */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > android::base::Join<std::__1::vector<char const*, std::__1::allocator<char const*> >, char>(std::__1::vector<char const*, std::__1::allocator<char const*> > const&, char) */
int _ZN7android4base4JoinINSt3__16vectorIPKcNS2_9allocatorIS5_EEEEcEENS2_12basic_stringIcNS2_11char_traitsIcEENS6_IcEEEERKT_T0_(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: s_tid_mainloop */
/* Demangled: s_tid_mainloop */
extern void* s_tid_mainloop;

/* Symbol: _ZN7android4base8ReadlinkERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPS7_ */
/* Demangled: android::base::Readlink(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN7android4base8ReadlinkERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPS7_(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: _ZN7android4base10LogdLoggerC1ENS0_5LogIdE */
/* Demangled: android::base::LogdLogger::LogdLogger(android::base::LogId) */
int _ZN7android4base10LogdLoggerC1ENS0_5LogIdE(void);

/* Symbol: _ZN7android4base12StderrLoggerENS0_5LogIdENS0_11LogSeverityEPKcS4_jS4_ */
/* Demangled: android::base::StderrLogger(android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*) */
int _ZN7android4base12StderrLoggerENS0_5LogIdENS0_11LogSeverityEPKcS4_jS4_(void);

/* Symbol: _ZN7android4base17ScopedLogSeverityC2ENS0_11LogSeverityE */
/* Demangled: android::base::ScopedLogSeverity::ScopedLogSeverity(android::base::LogSeverity) */
int _ZN7android4base17ScopedLogSeverityC2ENS0_11LogSeverityE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_E7__cloneEv */
/* Demangled: std::__1::__function::__func<void (*)(char const*), std::__1::allocator<void (*)(char const*)>, void (char const*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_E7__cloneEv(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: at_send_command_numeric */
/* Demangled: at_send_command_numeric */
int at_send_command_numeric(void);

/* Symbol: _ZN7android4base10WriteFullyENS0_11borrowed_fdEPKvj */
/* Demangled: android::base::WriteFully(android::base::borrowed_fd, void const*, unsigned int) */
int _ZN7android4base10WriteFullyENS0_11borrowed_fdEPKvj(void);

/* Symbol: _ZN7android4base10LogMessageC2EPKcjNS0_5LogIdENS0_11LogSeverityES3_i */
/* Demangled: android::base::LogMessage::LogMessage(char const*, unsigned int, android::base::LogId, android::base::LogSeverity, char const*, int) */
int _ZN7android4base10LogMessageC2EPKcjNS0_5LogIdENS0_11LogSeverityES3_i(void);

/* Symbol: _ZN7android4base10SetAborterEONSt3__18functionIFvPKcEEE */
/* Demangled: android::base::SetAborter(std::__1::function<void (char const*)>&&) */
int _ZN7android4base10SetAborterEONSt3__18functionIFvPKcEEE(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned int) */
int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j(void);

/* Symbol: _ZN7android4base17WriteStringToFileERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_b */
/* Demangled: android::base::WriteStringToFile(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN7android4base17WriteStringToFileERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_b(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: at_send_command */
/* Demangled: at_send_command */
int at_send_command(void);

/* Symbol: at_send_command_singleline */
/* Demangled: at_send_command_singleline */
int at_send_command_singleline(void);

/* Symbol: is_multimode_modem */
/* Demangled: is_multimode_modem */
int is_multimode_modem(void);

/* Symbol: qemu_pipe_frame_recv */
/* Demangled: qemu_pipe_frame_recv */
int qemu_pipe_frame_recv(void);

/* Symbol: _ZN13TemporaryFileD1Ev */
/* Demangled: TemporaryFile::~TemporaryFile() */
int _ZN13TemporaryFileD1Ev(void);

/* Symbol: _ZNSt3__16vectorIcNS_9allocatorIcEEE8__appendEj */
/* Demangled: std::__1::vector<char, std::__1::allocator<char> >::__append(unsigned int) */
int _ZNSt3__16vectorIcNS_9allocatorIcEEE8__appendEj(void);

/* Symbol: _ZN7android4base11StdioLoggerENS0_5LogIdENS0_11LogSeverityEPKcS4_jS4_ */
/* Demangled: android::base::StdioLogger(android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*) */
int _ZN7android4base11StdioLoggerENS0_5LogIdENS0_11LogSeverityEPKcS4_jS4_(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE */
/* Demangled: std::__1::__function::__func<void (*)(char const*), std::__1::allocator<void (*)(char const*)>, void (char const*)>::__clone(std::__1::__function::__base<void (char const*)>*) const */
int _ZNKSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE(void);

/* Symbol: _ZN7android4base16EqualsIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_ */
/* Demangled: android::base::EqualsIgnoreCase(std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::basic_string_view<char, std::__1::char_traits<char> >) */
int _ZN7android4base16EqualsIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_(void);

/* Symbol: _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc */
/* Demangled: android::base::ShouldLog(android::base::LogSeverity, char const*) */
int _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(void);

/* Symbol: _ZNSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EE18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<android::base::LogdLogger, std::__1::allocator<android::base::LogdLogger>, void (android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EE18destroy_deallocateEv(void);

/* Symbol: _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEEc */
/* Demangled: android::base::StartsWith(std::__1::basic_string_view<char, std::__1::char_traits<char> >, char) */
int _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEEc(void);

/* Symbol: at_response_free */
/* Demangled: at_response_free */
int at_response_free(void);

/* Symbol: isInEmulator */
/* Demangled: isInEmulator */
int isInEmulator(void);

/* Symbol: _ZN7android4base5SplitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_ */
/* Demangled: android::base::Split(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN7android4base5SplitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void);

/* Symbol: _ZN7android4base10LogdLoggerC2ENS0_5LogIdE */
/* Demangled: android::base::LogdLogger::LogdLogger(android::base::LogId) */
int _ZN7android4base10LogdLoggerC2ENS0_5LogIdE(void);

/* Symbol: _ZN7android4base13StringReplaceENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_S5_b */
/* Demangled: android::base::StringReplace(std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::basic_string_view<char, std::__1::char_traits<char> >, bool) */
int _ZN7android4base13StringReplaceENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_S5_b(void);

/* Symbol: at_get_cme_error */
/* Demangled: at_get_cme_error */
int at_get_cme_error(void);

/* Symbol: at_tok_nexthexint */
/* Demangled: at_tok_nexthexint */
int at_tok_nexthexint(void);

/* Symbol: _ZN12TemporaryDir4initERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE */
/* Demangled: TemporaryDir::init(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN12TemporaryDir4initERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void);

/* Symbol: _ZN13TemporaryFileD2Ev */
/* Demangled: TemporaryFile::~TemporaryFile() */
int _ZN13TemporaryFileD2Ev(void);

/* Symbol: _ZNSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<void (*)(char const*), std::__1::allocator<void (*)(char const*)>, void (char const*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_E18destroy_deallocateEv(void);

/* Symbol: _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE;

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int __aeabi_uidivmod(void);

/* Symbol: _ZN13TemporaryFileC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE */
/* Demangled: TemporaryFile::TemporaryFile(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN13TemporaryFileC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void);

/* Symbol: _ZN7android4base8BasenameERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: android::base::Basename(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN7android4base8BasenameERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN7android4base14DefaultAborterEPKc */
/* Demangled: android::base::DefaultAborter(char const*) */
int _ZN7android4base14DefaultAborterEPKc(void);

/* Symbol: _ZTVNSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EEE */
/* Demangled: vtable for std::__1::__function::__func<android::base::LogdLogger, std::__1::allocator<android::base::LogdLogger>, void (android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*)> */
extern void* _ZTVNSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EEE;

/* Symbol: _ZN7android4base18EndsWithIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_ */
/* Demangled: android::base::EndsWithIgnoreCase(std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::basic_string_view<char, std::__1::char_traits<char> >) */
int _ZN7android4base18EndsWithIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_(void);

/* Symbol: at_set_on_reader_closed */
/* Demangled: at_set_on_reader_closed */
int at_set_on_reader_closed(void);

/* Symbol: _ZN7android4base10LogMessage6streamEv */
/* Demangled: android::base::LogMessage::stream() */
int _ZN7android4base10LogMessage6streamEv(void);

/* Symbol: _ZN7android4base10LogMessageC1EPKcjNS0_5LogIdENS0_11LogSeverityES3_i */
/* Demangled: android::base::LogMessage::LogMessage(char const*, unsigned int, android::base::LogId, android::base::LogSeverity, char const*, int) */
int _ZN7android4base10LogMessageC1EPKcjNS0_5LogIdENS0_11LogSeverityES3_i(void);

/* Symbol: _ZN7android4base17ScopedLogSeverityD1Ev */
/* Demangled: android::base::ScopedLogSeverity::~ScopedLogSeverity() */
int _ZN7android4base17ScopedLogSeverityD1Ev(void);

/* Symbol: _ZN7android4base21GetMinimumLogSeverityEv */
/* Demangled: android::base::GetMinimumLogSeverity() */
int _ZN7android4base21GetMinimumLogSeverityEv(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _ZN13TemporaryFileC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE */
/* Demangled: TemporaryFile::TemporaryFile(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN13TemporaryFileC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void);

/* Symbol: _ZN13TemporaryFileC1Ev */
/* Demangled: TemporaryFile::TemporaryFile() */
int _ZN13TemporaryFileC1Ev(void);

/* Symbol: _ZN7android4base10LogMessageD1Ev */
/* Demangled: android::base::LogMessage::~LogMessage() */
int _ZN7android4base10LogMessageD1Ev(void);

/* Symbol: _ZN7android4base4JoinINSt3__16vectorINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS7_IS9_EEEERKS9_EES9_RKT_T0_ */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > android::base::Join<std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN7android4base4JoinINSt3__16vectorINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS7_IS9_EEEERKS9_EES9_RKT_T0_(void);

/* Symbol: at_send_command_multiline */
/* Demangled: at_send_command_multiline */
int at_send_command_multiline(void);

/* Symbol: _ZN12TemporaryDirD1Ev */
/* Demangled: TemporaryDir::~TemporaryDir() */
int _ZN12TemporaryDirD1Ev(void);

/* Symbol: _ZN7android4base17WriteStringToFileERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_tjjb */
/* Demangled: android::base::WriteStringToFile(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned short, unsigned int, unsigned int, bool) */
int _ZN7android4base17WriteStringToFileERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_tjjb(void);

/* Symbol: _ZN7android4base12KernelLoggerENS0_5LogIdENS0_11LogSeverityEPKcS4_jS4_ */
/* Demangled: android::base::KernelLogger(android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*) */
int _ZN7android4base12KernelLoggerENS0_5LogIdENS0_11LogSeverityEPKcS4_jS4_(void);

/* Symbol: _ZNKSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EE7__cloneEPNS0_6__baseISB_EE */
/* Demangled: std::__1::__function::__func<android::base::LogdLogger, std::__1::allocator<android::base::LogdLogger>, void (android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*)>::__clone(std::__1::__function::__base<void (android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*)>*) const */
int _ZNKSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EE7__cloneEPNS0_6__baseISB_EE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_EclEOS3_ */
/* Demangled: std::__1::__function::__func<void (*)(char const*), std::__1::allocator<void (*)(char const*)>, void (char const*)>::operator()(char const*&&) */
int _ZNSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_EclEOS3_(void);

/* Symbol: _ZN7android4base13StringAppendVEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPKcSt9__va_list */
/* Demangled: android::base::StringAppendV(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, char const*, std::__va_list) */
int _ZN7android4base13StringAppendVEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPKcSt9__va_list(void);

/* Symbol: __divmoddi4 */
/* Demangled: __divmoddi4 */
int __divmoddi4(void);

/* Symbol: RIL_Init */
/* Demangled: RIL_Init */
int RIL_Init(void);

/* Symbol: at_handshake */
/* Demangled: at_handshake */
int at_handshake(void);

/* Symbol: at_open */
/* Demangled: at_open */
int at_open(void);

/* Symbol: query_supported_techs */
/* Demangled: query_supported_techs */
int query_supported_techs(void);

/* Symbol: _ZN7android4base14ReadFdToStringENS0_11borrowed_fdEPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: android::base::ReadFdToString(android::base::borrowed_fd, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN7android4base14ReadFdToStringENS0_11borrowed_fdEPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _ZN7android4base8RealpathERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPS7_ */
/* Demangled: android::base::Realpath(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN7android4base8RealpathERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPS7_(void);

/* Symbol: _ZN7android4base8EndsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_ */
/* Demangled: android::base::EndsWith(std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::basic_string_view<char, std::__1::char_traits<char> >) */
int _ZN7android4base8EndsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_(void);

/* Symbol: _ZN7android4base18GetLibLogFunctionsEv */
/* Demangled: android::base::GetLibLogFunctions() */
int _ZN7android4base18GetLibLogFunctionsEv(void);

/* Symbol: _ZN7android4base17ScopedLogSeverityC1ENS0_11LogSeverityE */
/* Demangled: android::base::ScopedLogSeverity::ScopedLogSeverity(android::base::LogSeverity) */
int _ZN7android4base17ScopedLogSeverityC1ENS0_11LogSeverityE(void);

/* Symbol: _ZN7android4base17ScopedLogSeverityD2Ev */
/* Demangled: android::base::ScopedLogSeverity::~ScopedLogSeverity() */
int _ZN7android4base17ScopedLogSeverityD2Ev(void);

/* Symbol: __udivmodsi4 */
/* Demangled: __udivmodsi4 */
int __udivmodsi4(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: __aeabi_ldivmod */
/* Demangled: __aeabi_ldivmod */
int __aeabi_ldivmod(void);

/* Symbol: _ZN13TemporaryFileC2Ev */
/* Demangled: TemporaryFile::TemporaryFile() */
int _ZN13TemporaryFileC2Ev(void);

/* Symbol: _ZN7android4base10LogMessageC1EPKcjNS0_11LogSeverityES3_i */
/* Demangled: android::base::LogMessage::LogMessage(char const*, unsigned int, android::base::LogSeverity, char const*, int) */
int _ZN7android4base10LogMessageC1EPKcjNS0_11LogSeverityES3_i(void);

/* Symbol: _ZN7android4base7DirnameERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: android::base::Dirname(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN7android4base7DirnameERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN7android4base10LogMessageD2Ev */
/* Demangled: android::base::LogMessage::~LogMessage() */
int _ZN7android4base10LogMessageD2Ev(void);

/* Symbol: at_tok_hasmore */
/* Demangled: at_tok_hasmore */
int at_tok_hasmore(void);

/* Symbol: _ZN12TemporaryDirD2Ev */
/* Demangled: TemporaryDir::~TemporaryDir() */
int _ZN12TemporaryDirD2Ev(void);

/* Symbol: _ZN13TemporaryFile7releaseEv */
/* Demangled: TemporaryFile::release() */
int _ZN13TemporaryFile7releaseEv(void);

/* Symbol: _ZN7android4base18RemoveFileIfExistsERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPS7_ */
/* Demangled: android::base::RemoveFileIfExists(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN7android4base18RemoveFileIfExistsERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPS7_(void);

/* Symbol: _ZN7android4base9SetLoggerEONSt3__18functionIFvNS0_5LogIdENS0_11LogSeverityEPKcS6_jS6_EEE */
/* Demangled: android::base::SetLogger(std::__1::function<void (android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*)>&&) */
int _ZN7android4base9SetLoggerEONSt3__18functionIFvNS0_5LogIdENS0_11LogSeverityEPKcS6_jS6_EEE(void);

/* Symbol: _ZN7android4base13StringAppendFEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPKcz */
/* Demangled: android::base::StringAppendF(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, char const*, ...) */
int _ZN7android4base13StringAppendFEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPKcz(void);

/* Symbol: at_tok_nextbool */
/* Demangled: at_tok_nextbool */
int at_tok_nextbool(void);

/* Symbol: _ZN7android4base10LogMessage7LogLineEPKcjNS0_11LogSeverityES3_S3_ */
/* Demangled: android::base::LogMessage::LogLine(char const*, unsigned int, android::base::LogSeverity, char const*, char const*) */
int _ZN7android4base10LogMessage7LogLineEPKcjNS0_11LogSeverityES3_S3_(void);

/* Symbol: _ZN7android4base10LogdLoggerclENS0_5LogIdENS0_11LogSeverityEPKcS5_jS5_ */
/* Demangled: android::base::LogdLogger::operator()(android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*) */
int _ZN7android4base10LogdLoggerclENS0_5LogIdENS0_11LogSeverityEPKcS5_jS5_(void);

/* Symbol: _ZNKSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EE7__cloneEv */
/* Demangled: std::__1::__function::__func<android::base::LogdLogger, std::__1::allocator<android::base::LogdLogger>, void (android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*)>::__clone() const */
int _ZNKSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EE7__cloneEv(void);

/* Symbol: strStartsWith */
/* Demangled: strStartsWith */
int strStartsWith(void);

/* Symbol: _ZN7android4base17GetExecutablePathEv */
/* Demangled: android::base::GetExecutablePath() */
int _ZN7android4base17GetExecutablePathEv(void);

/* Symbol: _ZN7android4base17ReadFullyAtOffsetENS0_11borrowed_fdEPvjx */
/* Demangled: android::base::ReadFullyAtOffset(android::base::borrowed_fd, void*, unsigned int, long long) */
int _ZN7android4base17ReadFullyAtOffsetENS0_11borrowed_fdEPvjx(void);

/* Symbol: _ZNSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EE7destroyEv */
/* Demangled: std::__1::__function::__func<android::base::LogdLogger, std::__1::allocator<android::base::LogdLogger>, void (android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*)>::destroy() */
int _ZNSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EE7destroyEv(void);

/* Symbol: _ZN7android4base4JoinINSt3__16vectorINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS7_IS9_EEEEcEES9_RKT_T0_ */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > android::base::Join<std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, char>(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&, char) */
int _ZN7android4base4JoinINSt3__16vectorINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS7_IS9_EEEEcEES9_RKT_T0_(void);

/* Symbol: _ZN7android4base8EndsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEEc */
/* Demangled: android::base::EndsWith(std::__1::basic_string_view<char, std::__1::char_traits<char> >, char) */
int _ZN7android4base8EndsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEEc(void);

/* Symbol: __udivsi3 */
/* Demangled: __udivsi3 */
int __udivsi3(void);

/* Symbol: at_tok_nextstr */
/* Demangled: at_tok_nextstr */
int at_tok_nextstr(void);

/* Symbol: _ZN7android4base9ReadFullyENS0_11borrowed_fdEPvj */
/* Demangled: android::base::ReadFully(android::base::borrowed_fd, void*, unsigned int) */
int _ZN7android4base9ReadFullyENS0_11borrowed_fdEPvj(void);

/* Symbol: _ZN13TemporaryFile4initERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE */
/* Demangled: TemporaryFile::init(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN13TemporaryFile4initERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void);

/* Symbol: _ZN7android4base13SetDefaultTagERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: android::base::SetDefaultTag(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN7android4base13SetDefaultTagERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN12TemporaryDirC1Ev */
/* Demangled: TemporaryDir::TemporaryDir() */
int _ZN12TemporaryDirC1Ev(void);

/* Symbol: _ZNSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_E7destroyEv */
/* Demangled: std::__1::__function::__func<void (*)(char const*), std::__1::allocator<void (*)(char const*)>, void (char const*)>::destroy() */
int _ZNSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_E7destroyEv(void);

/* Symbol: _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i */
/* Demangled: android::base::LogMessage::LogMessage(char const*, unsigned int, android::base::LogSeverity, char const*, int) */
int _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i(void);

/* Symbol: _ZNSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EEclEOS7_OS8_OSA_SF_OjSF_ */
/* Demangled: std::__1::__function::__func<android::base::LogdLogger, std::__1::allocator<android::base::LogdLogger>, void (android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*)>::operator()(android::base::LogId&&, android::base::LogSeverity&&, char const*&&, char const*&&, unsigned int&&, char const*&&) */
int _ZNSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EEclEOS7_OS8_OSA_SF_OjSF_(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_EE */
/* Demangled: vtable for std::__1::__function::__func<void (*)(char const*), std::__1::allocator<void (*)(char const*)>, void (char const*)> */
extern void* _ZTVNSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_EE;

/* Symbol: _ZN7android4base20StartsWithIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_ */
/* Demangled: android::base::StartsWithIgnoreCase(std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::basic_string_view<char, std::__1::char_traits<char> >) */
int _ZN7android4base20StartsWithIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_(void);

/* Symbol: _ZN7android4base4TrimERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: android::base::Trim(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN7android4base4TrimERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBREFERENCE_RIL_H */

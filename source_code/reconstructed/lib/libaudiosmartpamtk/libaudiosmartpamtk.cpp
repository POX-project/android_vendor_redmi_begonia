/*
 * Reverse-Engineered Source for: libaudiosmartpamtk.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libaudiosmartpamtk"

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
#include "libaudiosmartpamtk.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
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

/* Demangled: std::__1::basic_ifstream<char, std::__1::char_traits<char> >::open(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114basic_ifstreamIcNS_11char_traitsIcEEE4openEPKcj(void) {
    ALOGD("_ZNSt3__114basic_ifstreamIcNS_11char_traitsIcEEE4openEPKcj() called");
    return 0;
}

/* Demangled: void std::__1::vector<Parser::VariableRecord, std::__1::allocator<Parser::VariableRecord> >::__push_back_slow_path<Parser::VariableRecord const&>(Parser::VariableRecord const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN6Parser14VariableRecordENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN6Parser14VariableRecordENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Parser::VariableMapping>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Parser::VariableMapping>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Parser::VariableMapping> > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN6Parser15VariableMappingEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISL_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN6Parser15VariableMappingEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISL_EERKT_() called");
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

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<Parser::VariableRecord, std::__1::allocator<Parser::VariableRecord> >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseIN6Parser14VariableRecordENS_9allocatorIS2_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseIN6Parser14VariableRecordENS_9allocatorIS2_EEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<Parser::ObjectRecord, std::__1::allocator<Parser::ObjectRecord>&>::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN6Parser12ObjectRecordERNS_9allocatorIS2_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferIN6Parser12ObjectRecordERNS_9allocatorIS2_EEED2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_istringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__119basic_istringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Demangled: __aeabi_memmove8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove8(void) {
    ALOGD("__aeabi_memmove8() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<Parser::ObjectRecord, std::__1::allocator<Parser::ObjectRecord> >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseIN6Parser12ObjectRecordENS_9allocatorIS2_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseIN6Parser12ObjectRecordENS_9allocatorIS2_EEED2Ev() called");
    return 0;
}

/* Demangled: Parser::applyParseRecord(void*, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Parser::VariableMapping, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, Parser::VariableMapping> > > const&, std::__1::vector<Parser::VariableRecord, std::__1::allocator<Parser::VariableRecord> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6Parser16applyParseRecordEPvRKNSt3__13mapINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_15VariableMappingENS1_4lessIS8_EENS6_INS1_4pairIKS8_S9_EEEEEERKNS1_6vectorINS_14VariableRecordENS6_ISK_EEEE(void) {
    ALOGD("_ZN6Parser16applyParseRecordEPvRKNSt3__13mapINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_15VariableMappingENS1_4lessIS8_EENS6_INS1_4pairIKS8_S9_EEEEEERKNS1_6vectorINS_14VariableRecordENS6_ISK_EEEE() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: dynamic_link_arsi_assign_lib_fp */
extern "C" __attribute__((visibility("default"))) int dynamic_link_arsi_assign_lib_fp(void) {
    ALOGD("dynamic_link_arsi_assign_lib_fp() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: __aeabi_memmove */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove(void) {
    ALOGD("__aeabi_memmove() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::__write_mode() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE12__write_modeEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE12__write_modeEv() called");
    return 0;
}

/* Demangled: std::__1::vector<Parser::VariableRecord, std::__1::allocator<Parser::VariableRecord> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN6Parser14VariableRecordENS_9allocatorIS2_EEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorIN6Parser14VariableRecordENS_9allocatorIS2_EEE11__vallocateEj() called");
    return 0;
}

/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__swap_out_circular_buffer(std::__1::__split_buffer<int, std::__1::allocator<int>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE26__swap_out_circular_bufferERNS_14__split_bufferIiRS2_EE(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE26__swap_out_circular_bufferERNS_14__split_bufferIiRS2_EE() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_istringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__119basic_istringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: mtk_smartpa_param_init */
extern "C" __attribute__((visibility("default"))) int mtk_smartpa_param_init(void) {
    ALOGD("mtk_smartpa_param_init() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j(void) {
    ALOGD("_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIN6Parser14VariableRecordENS_9allocatorIS2_EEE18__construct_at_endIPS2_EENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES9_S9_j */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN6Parser14VariableRecordENS_9allocatorIS2_EEE18__construct_at_endIPS2_EENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES9_S9_j(void) {
    ALOGD("_ZNSt3__16vectorIN6Parser14VariableRecordENS_9allocatorIS2_EEE18__construct_at_endIPS2_EENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES9_S9_j() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: std::__1::vector<Parser::VariableRecord, std::__1::allocator<Parser::VariableRecord> >::__swap_out_circular_buffer(std::__1::__split_buffer<Parser::VariableRecord, std::__1::allocator<Parser::VariableRecord>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN6Parser14VariableRecordENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE(void) {
    ALOGD("_ZNSt3__16vectorIN6Parser14VariableRecordENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_istringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__119basic_istringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Exported Object: smartpa_calib_ConfigDefault */
extern "C" __attribute__((visibility("default"))) void* smartpa_calib_ConfigDefault = NULL;

/* Demangled: std::__1::__split_buffer<Parser::VariableRecord, std::__1::allocator<Parser::VariableRecord>&>::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN6Parser14VariableRecordERNS_9allocatorIS2_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferIN6Parser14VariableRecordERNS_9allocatorIS2_EEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: std::__1::vector<Parser::ObjectRecord, std::__1::allocator<Parser::ObjectRecord> >::__swap_out_circular_buffer(std::__1::__split_buffer<Parser::ObjectRecord, std::__1::allocator<Parser::ObjectRecord>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN6Parser12ObjectRecordENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE(void) {
    ALOGD("_ZNSt3__16vectorIN6Parser12ObjectRecordENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE() called");
    return 0;
}

/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int const&>(int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_() called");
    return 0;
}

/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::vector(std::__1::vector<int, std::__1::allocator<int> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEEC2ERKS3_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEEC2ERKS3_() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: smartpa_arsi_get_arsi_version(string_buf_t*) */
extern "C" __attribute__((visibility("default"))) int _Z29smartpa_arsi_get_arsi_versionP12string_buf_t(void) {
    ALOGD("_Z29smartpa_arsi_get_arsi_versionP12string_buf_t() called");
    return 0;
}

/* Demangled: Parser::readFile(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Parser::VariableMapping, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, Parser::VariableMapping> > > const&, std::__1::vector<Parser::ObjectRecord, std::__1::allocator<Parser::ObjectRecord> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN6Parser8readFileENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEERKNS0_3mapIS6_NS_15VariableMappingENS0_4lessIS6_EENS4_INS0_4pairIKS6_S8_EEEEEERNS0_6vectorINS_12ObjectRecordENS4_ISJ_EEEE(void) {
    ALOGD("_ZN6Parser8readFileENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEERKNS0_3mapIS6_NS_15VariableMappingENS0_4lessIS6_EENS4_INS0_4pairIKS6_S8_EEEEEERNS0_6vectorINS_12ObjectRecordENS4_ISJ_EEEE() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::sync() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::close() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5closeEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5closeEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE = NULL;

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

/* Demangled: void std::__1::vector<Parser::ObjectRecord, std::__1::allocator<Parser::ObjectRecord> >::__push_back_slow_path<Parser::ObjectRecord const&>(Parser::ObjectRecord const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN6Parser12ObjectRecordENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN6Parser12ObjectRecordENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::vector<Parser::VariableRecord, std::__1::allocator<Parser::VariableRecord> >::vector(std::__1::vector<Parser::VariableRecord, std::__1::allocator<Parser::VariableRecord> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN6Parser14VariableRecordENS_9allocatorIS2_EEEC2ERKS5_(void) {
    ALOGD("_ZNSt3__16vectorIN6Parser14VariableRecordENS_9allocatorIS2_EEEC2ERKS5_() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: Parser::applyParseRecord(void*, void const*, unsigned int, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Parser::VariableMapping, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, Parser::VariableMapping> > > const&, std::__1::vector<Parser::ObjectRecord, std::__1::allocator<Parser::ObjectRecord> > const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6Parser16applyParseRecordEPvPKvjRKNSt3__13mapINS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEENS_15VariableMappingENS3_4lessISA_EENS8_INS3_4pairIKSA_SB_EEEEEERKNS3_6vectorINS_12ObjectRecordENS8_ISM_EEEEj(void) {
    ALOGD("_ZN6Parser16applyParseRecordEPvPKvjRKNSt3__13mapINS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEENS_15VariableMappingENS3_4lessISA_EENS8_INS3_4pairIKSA_SB_EEEEEERKNS3_6vectorINS_12ObjectRecordENS8_ISM_EEEEj() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::imbue(std::__1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<Parser::ObjectRecord, std::__1::allocator<Parser::ObjectRecord>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<Parser::ObjectRecord>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN6Parser12ObjectRecordERNS_9allocatorIS2_EEEC2EjjS5_(void) {
    ALOGD("_ZNSt3__114__split_bufferIN6Parser12ObjectRecordERNS_9allocatorIS2_EEEC2EjjS5_() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Parser::VariableMapping>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Parser::VariableMapping>, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Parser::VariableMapping>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Parser::VariableMapping>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Parser::VariableMapping> > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN6Parser15VariableMappingEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE4findIS7_EENS_21__tree_const_iteratorISA_PNS_11__tree_nodeISA_PvEEiEERKT_(void) {
    ALOGD("_ZNKSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN6Parser15VariableMappingEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE4findIS7_EENS_21__tree_const_iteratorISA_PNS_11__tree_nodeISA_PvEEiEERKT_() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::open(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4openEPKcj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4openEPKcj() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: std::__1::basic_istream<char, std::__1::char_traits<char> >& std::__1::getline<char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_istream<char, std::__1::char_traits<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__17getlineIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_istreamIT_T0_EES9_RNS_12basic_stringIS6_S7_T1_EES6_(void) {
    ALOGD("_ZNSt3__17getlineIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_istreamIT_T0_EES9_RNS_12basic_stringIS6_S7_T1_EES6_() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Parser::VariableMapping>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Parser::VariableMapping>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Parser::VariableMapping> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN6Parser15VariableMappingEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSL_SL_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN6Parser15VariableMappingEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSL_SL_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Parser::VariableMapping>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Parser::VariableMapping>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Parser::VariableMapping> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Parser::VariableMapping>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN6Parser15VariableMappingEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN6Parser15VariableMappingEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: __aeabi_memmove4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove4(void) {
    ALOGD("__aeabi_memmove4() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Parser::VariableMapping>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Parser::VariableMapping>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Parser::VariableMapping>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Parser::VariableMapping>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Parser::VariableMapping> > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>, std::__1::tuple<> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN6Parser15VariableMappingEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSL_IJEEEEEENS_4pairINS_15__tree_iteratorISA_PNS_11__tree_nodeISA_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN6Parser15VariableMappingEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSL_IJEEEEEENS_4pairINS_15__tree_iteratorISA_PNS_11__tree_nodeISA_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::__read_mode() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE11__read_modeEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE11__read_modeEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<Parser::VariableRecord, std::__1::allocator<Parser::VariableRecord>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<Parser::VariableRecord>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN6Parser14VariableRecordERNS_9allocatorIS2_EEEC2EjjS5_(void) {
    ALOGD("_ZNSt3__114__split_bufferIN6Parser14VariableRecordERNS_9allocatorIS2_EEEC2EjjS5_() called");
    return 0;
}

/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE11__vallocateEj() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

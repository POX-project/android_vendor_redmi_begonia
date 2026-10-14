/*
 * Reverse-Engineered Source for: wpa_supplicant
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "wpa_supplicant"

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
#include "wpa_supplicant.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_RFKILL "/dev/rfkill"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_RFKILL, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_RFKILL, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_RFKILL, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Executable Service Daemon Entrypoint */
static void sig_handler(int sig) {
    ALOGI("Received signal %d, terminating wpa_supplicant", sig);
    if (g_dev_fd >= 0) close(g_dev_fd);
    exit(0);
}

int main(int argc, char** argv) {
    ALOGI("Starting wpa_supplicant service daemon");
    signal(SIGTERM, sig_handler);
    signal(SIGINT, sig_handler);

    open_device_node();

    /* Main Service Loop */
    ALOGI("wpa_supplicant service active");
    while (1) {
        sleep(3600);
    }
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_character_class_escape<char const*>(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE30__parse_character_class_escapeIPKcEET_S7_S7_(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE30__parse_character_class_escapeIPKcEET_S7_S7_() called");
    return 0;
}

/* Demangled: std::__1::__match_char_collate<char, std::__1::regex_traits<char> >::__exec(std::__1::__state<char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__120__match_char_collateIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE(void) {
    ALOGD("_ZNKSt3__120__match_char_collateIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE() called");
    return 0;
}

/* Demangled: std::__1::__match_char<char>::__exec(std::__1::__state<char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__112__match_charIcE6__execERNS_7__stateIcEE(void) {
    ALOGD("_ZNKSt3__112__match_charIcE6__execERNS_7__stateIcEE() called");
    return 0;
}

/* Demangled: std::__1::__bracket_expression<char, std::__1::regex_traits<char> >::__exec(std::__1::__state<char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__120__bracket_expressionIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE(void) {
    ALOGD("_ZNKSt3__120__bracket_expressionIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__push_back_slow_path<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >(std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS5_IS8_EEE21__push_back_slow_pathIS8_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS5_IS8_EEE21__push_back_slow_pathIS8_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::deque<std::__1::__state<char>, std::__1::allocator<std::__1::__state<char> > >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeINS_7__stateIcEENS_9allocatorIS2_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeINS_7__stateIcEENS_9allocatorIS2_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: std::__1::basic_regex<char, std::__1::regex_traits<char> >::__push_back_ref(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE15__push_back_refEi(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE15__push_back_refEi() called");
    return 0;
}

/* Demangled: std::__1::__owns_two_states<char>::~__owns_two_states() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__117__owns_two_statesIcED2Ev(void) {
    ALOGD("_ZNSt3__117__owns_two_statesIcED2Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__owns_two_states<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__117__owns_two_statesIcEE = NULL;

/* Demangled: std::__1::__split_buffer<std::__1::__state<char>*, std::__1::allocator<std::__1::__state<char>*> >::push_back(std::__1::__state<char>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_7__stateIcEENS_9allocatorIS3_EEE9push_backEOS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_7__stateIcEENS_9allocatorIS3_EEE9push_backEOS3_() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE16_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_basic_reg_exp<char const*>(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE21__parse_basic_reg_expIPKcEET_S7_S7_(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE21__parse_basic_reg_expIPKcEET_S7_S7_() called");
    return 0;
}

/* Demangled: std::__1::__empty_non_own_state<char>::__exec(std::__1::__state<char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__121__empty_non_own_stateIcE6__execERNS_7__stateIcEE(void) {
    ALOGD("_ZNKSt3__121__empty_non_own_stateIcE6__execERNS_7__stateIcEE() called");
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_QUOTED_CHAR_ERE<char const*>(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE23__parse_QUOTED_CHAR_EREIPKcEET_S7_S7_(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE23__parse_QUOTED_CHAR_EREIPKcEET_S7_S7_() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorINS_9sub_matchIPKcEENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_9sub_matchIPKcEENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_(void) {
    ALOGD("_ZNSt3__16vectorINS_9sub_matchIPKcEENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__begin_marked_subexpression<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__128__begin_marked_subexpressionIcEE = NULL;

/* Exported Object: VTT for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: std::__1::__end_state<char>::__exec(std::__1::__state<char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__111__end_stateIcE6__execERNS_7__stateIcEE(void) {
    ALOGD("_ZNKSt3__111__end_stateIcE6__execERNS_7__stateIcEE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<std::__1::__empty_state<char>*, std::__1::default_delete<std::__1::__empty_state<char> >, std::__1::allocator<std::__1::__empty_state<char> > >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPNS_13__empty_stateIcEENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPNS_13__empty_stateIcEENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__alternate<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__111__alternateIcEE = NULL;

/* Demangled: void std::__1::vector<char, std::__1::allocator<char> >::__push_back_slow_path<char>(char&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIcNS_9allocatorIcEEE21__push_back_slow_pathIcEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIcNS_9allocatorIcEEE21__push_back_slow_pathIcEEvOT_() called");
    return 0;
}

/* Demangled: unsigned short std::__1::regex_traits<char>::__lookup_classname<char const*>(char const*, char const*, bool, char) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__112regex_traitsIcE18__lookup_classnameIPKcEEtT_S5_bc(void) {
    ALOGD("_ZNKSt3__112regex_traitsIcE18__lookup_classnameIPKcEEtT_S5_bc() called");
    return 0;
}

/* Demangled: std::__1::__loop<char>::__exec(std::__1::__state<char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__16__loopIcE6__execERNS_7__stateIcEE(void) {
    ALOGD("_ZNKSt3__16__loopIcE6__execERNS_7__stateIcEE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__empty_state<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__113__empty_stateIcEE = NULL;

/* Exported Object: vtable for std::__1::__back_ref_collate<char, std::__1::regex_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__118__back_ref_collateIcNS_12regex_traitsIcEEEE = NULL;

/* Exported Object: vtable for std::__1::__repeat_one_loop<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__117__repeat_one_loopIcEE = NULL;

/* Exported Object: vtable for std::__1::__match_any<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__111__match_anyIcEE = NULL;

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse<char const*>(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE7__parseIPKcEET_S7_S7_(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE7__parseIPKcEET_S7_S7_() called");
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_egrep<char const*>(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE13__parse_egrepIPKcEET_S7_S7_(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE13__parse_egrepIPKcEET_S7_S7_() called");
    return 0;
}

/* Demangled: bool std::__1::basic_regex<char, std::__1::regex_traits<char> >::__match_at_start_posix_nosubs<std::__1::allocator<std::__1::sub_match<char const*> > >(char const*, char const*, std::__1::match_results<char const*, std::__1::allocator<std::__1::sub_match<char const*> > >&, std::__1::regex_constants::match_flag_type, bool) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__111basic_regexIcNS_12regex_traitsIcEEE29__match_at_start_posix_nosubsINS_9allocatorINS_9sub_matchIPKcEEEEEEbS8_S8_RNS_13match_resultsIS8_T_EENS_15regex_constants15match_flag_typeEb(void) {
    ALOGD("_ZNKSt3__111basic_regexIcNS_12regex_traitsIcEEE29__match_at_start_posix_nosubsINS_9allocatorINS_9sub_matchIPKcEEEEEEbS8_S8_RNS_13match_resultsIS8_T_EENS_15regex_constants15match_flag_typeEb() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__r_anchor<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__r_anchorIcEE = NULL;

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_extended_reg_exp<char const*>(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE24__parse_extended_reg_expIPKcEET_S7_S7_(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE24__parse_extended_reg_expIPKcEET_S7_S7_() called");
    return 0;
}

/* Demangled: std::__1::__lookahead<char, std::__1::regex_traits<char> >::__exec(std::__1::__state<char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__111__lookaheadIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE(void) {
    ALOGD("_ZNKSt3__111__lookaheadIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE() called");
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_character_class<char const*>(char const*, char const*, std::__1::__bracket_expression<char, std::__1::regex_traits<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE23__parse_character_classIPKcEET_S7_S7_PNS_20__bracket_expressionIcS2_EE(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE23__parse_character_classIPKcEET_S7_S7_PNS_20__bracket_expressionIcS2_EE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::__state<char>*, std::__1::allocator<std::__1::__state<char>*>&>::push_back(std::__1::__state<char>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_7__stateIcEERNS_9allocatorIS3_EEE9push_backEOS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_7__stateIcEERNS_9allocatorIS3_EEE9push_backEOS3_() called");
    return 0;
}

/* Demangled: std::__1::__r_anchor<char>::__exec(std::__1::__state<char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__r_anchorIcE6__execERNS_7__stateIcEE(void) {
    ALOGD("_ZNKSt3__110__r_anchorIcE6__execERNS_7__stateIcEE() called");
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_ORD_CHAR_ERE<char const*>(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE20__parse_ORD_CHAR_EREIPKcEET_S7_S7_(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE20__parse_ORD_CHAR_EREIPKcEET_S7_S7_() called");
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_grep<char const*>(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE12__parse_grepIPKcEET_S7_S7_(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE12__parse_grepIPKcEET_S7_S7_() called");
    return 0;
}

/* Demangled: std::__1::basic_regex<char, std::__1::regex_traits<char> >::__push_lookahead(std::__1::basic_regex<char, std::__1::regex_traits<char> > const&, bool, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE16__push_lookaheadERKS3_bj(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE16__push_lookaheadERKS3_bj() called");
    return 0;
}

/* Demangled: std::__1::__back_ref<char>::__exec(std::__1::__state<char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__back_refIcE6__execERNS_7__stateIcEE(void) {
    ALOGD("_ZNKSt3__110__back_refIcE6__execERNS_7__stateIcEE() called");
    return 0;
}

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::regex_traits<char>::__transform_primary<std::__1::__wrap_iter<char*> >(std::__1::__wrap_iter<char*>, std::__1::__wrap_iter<char*>, char) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__112regex_traitsIcE19__transform_primaryINS_11__wrap_iterIPcEEEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SC_c(void) {
    ALOGD("_ZNKSt3__112regex_traitsIcE19__transform_primaryINS_11__wrap_iterIPcEEEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SC_c() called");
    return 0;
}

/* Demangled: std::__1::basic_regex<char, std::__1::regex_traits<char> >::__push_loop(unsigned long, unsigned long, std::__1::__owns_one_state<char>*, unsigned long, unsigned long, bool) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE11__push_loopEmmPNS_16__owns_one_stateIcEEmmb(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE11__push_loopEmmPNS_16__owns_one_stateIcEEmmb() called");
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_nondupl_RE<char const*>(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE18__parse_nondupl_REIPKcEET_S7_S7_(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE18__parse_nondupl_REIPKcEET_S7_S7_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::regex_traits<char>::__lookup_collatename<char const*>(char const*, char const*, char) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__112regex_traitsIcE20__lookup_collatenameIPKcEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SB_c(void) {
    ALOGD("_ZNKSt3__112regex_traitsIcE20__lookup_collatenameIPKcEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SB_c() called");
    return 0;
}

/* Demangled: std::__1::__loop<char>::__exec_split(bool, std::__1::__state<char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__16__loopIcE12__exec_splitEbRNS_7__stateIcEE(void) {
    ALOGD("_ZNKSt3__16__loopIcE12__exec_splitEbRNS_7__stateIcEE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::__state<char>*, std::__1::allocator<std::__1::__state<char>*> >::push_front(std::__1::__state<char>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_7__stateIcEENS_9allocatorIS3_EEE10push_frontEOS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_7__stateIcEENS_9allocatorIS3_EEE10push_frontEOS3_() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<std::__1::__state<char>, std::__1::allocator<std::__1::__state<char> > >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseINS_7__stateIcEENS_9allocatorIS2_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseINS_7__stateIcEENS_9allocatorIS2_EEE5clearEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__match_any_but_newline<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__123__match_any_but_newlineIcEE = NULL;

/* Exported Object: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE = NULL;

/* Demangled: std::__1::__match_char_icase<char, std::__1::regex_traits<char> >::__exec(std::__1::__state<char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__118__match_char_icaseIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE(void) {
    ALOGD("_ZNKSt3__118__match_char_icaseIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorINS_4pairImPKcEENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4pairImPKcEENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_(void) {
    ALOGD("_ZNSt3__16vectorINS_4pairImPKcEENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__match_char_icase<char, std::__1::regex_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__118__match_char_icaseIcNS_12regex_traitsIcEEEE = NULL;

/* Exported Object: vtable for std::__1::__bracket_expression<char, std::__1::regex_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__bracket_expressionIcNS_12regex_traitsIcEEEE = NULL;

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_assertion<char const*>(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE17__parse_assertionIPKcEET_S7_S7_(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE17__parse_assertionIPKcEET_S7_S7_() called");
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_expression_term<char const*>(char const*, char const*, std::__1::__bracket_expression<char, std::__1::regex_traits<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE23__parse_expression_termIPKcEET_S7_S7_PNS_20__bracket_expressionIcS2_EE(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE23__parse_expression_termIPKcEET_S7_S7_PNS_20__bracket_expressionIcS2_EE() called");
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_class_escape<char const*>(char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::__bracket_expression<char, std::__1::regex_traits<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE20__parse_class_escapeIPKcEET_S7_S7_RNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPNS_20__bracket_expressionIcS2_EE(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE20__parse_class_escapeIPKcEET_S7_S7_RNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPNS_20__bracket_expressionIcS2_EE() called");
    return 0;
}

/* Demangled: std::__1::__end_marked_subexpression<char>::__exec(std::__1::__state<char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__126__end_marked_subexpressionIcE6__execERNS_7__stateIcEE(void) {
    ALOGD("_ZNKSt3__126__end_marked_subexpressionIcE6__execERNS_7__stateIcEE() called");
    return 0;
}

/* Demangled: std::__1::deque<std::__1::__state<char>, std::__1::allocator<std::__1::__state<char> > >::__add_front_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeINS_7__stateIcEENS_9allocatorIS2_EEE20__add_front_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeINS_7__stateIcEENS_9allocatorIS2_EEE20__add_front_capacityEv() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::pair<unsigned long, char const*>, std::__1::allocator<std::__1::pair<unsigned long, char const*> > >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4pairImPKcEENS_9allocatorIS4_EEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorINS_4pairImPKcEENS_9allocatorIS4_EEE8__appendEm() called");
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_decimal_escape<char const*>(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE22__parse_decimal_escapeIPKcEET_S7_S7_(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE22__parse_decimal_escapeIPKcEET_S7_S7_() called");
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_collating_symbol<char const*>(char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE24__parse_collating_symbolIPKcEET_S7_S7_RNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE24__parse_collating_symbolIPKcEET_S7_S7_RNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__1::__alternate<char>::__exec(std::__1::__state<char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__111__alternateIcE6__execERNS_7__stateIcEE(void) {
    ALOGD("_ZNKSt3__111__alternateIcE6__execERNS_7__stateIcEE() called");
    return 0;
}

/* Demangled: std::__1::__owns_one_state<char>::~__owns_one_state() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__116__owns_one_stateIcED0Ev(void) {
    ALOGD("_ZNSt3__116__owns_one_stateIcED0Ev() called");
    return 0;
}

/* Demangled: std::__1::__back_ref_icase<char, std::__1::regex_traits<char> >::__exec(std::__1::__state<char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__116__back_ref_icaseIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE(void) {
    ALOGD("_ZNKSt3__116__back_ref_icaseIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE() called");
    return 0;
}

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::regex_traits<char>::__transform_primary<char*>(char*, char*, char) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__112regex_traitsIcE19__transform_primaryIPcEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SA_c(void) {
    ALOGD("_ZNKSt3__112regex_traitsIcE19__transform_primaryIPcEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SA_c() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__lookahead<char, std::__1::regex_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__111__lookaheadIcNS_12regex_traitsIcEEEE = NULL;

/* Demangled: std::__1::__split_buffer<std::__1::__state<char>*, std::__1::allocator<std::__1::__state<char>*> >::push_front(std::__1::__state<char>* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_7__stateIcEENS_9allocatorIS3_EEE10push_frontERKS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_7__stateIcEENS_9allocatorIS3_EEE10push_frontERKS3_() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__end_state<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__111__end_stateIcEE = NULL;

/* Exported Object: vtable for std::__1::__end_marked_subexpression<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__126__end_marked_subexpressionIcEE = NULL;

/* Demangled: std::__1::__empty_state<char>::__exec(std::__1::__state<char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__113__empty_stateIcE6__execERNS_7__stateIcEE(void) {
    ALOGD("_ZNKSt3__113__empty_stateIcE6__execERNS_7__stateIcEE() called");
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_bracket_expression<char const*>(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE26__parse_bracket_expressionIPKcEET_S7_S7_(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE26__parse_bracket_expressionIPKcEET_S7_S7_() called");
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_ecma_exp<char const*>(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE16__parse_ecma_expIPKcEET_S7_S7_(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE16__parse_ecma_expIPKcEET_S7_S7_() called");
    return 0;
}

/* Demangled: bool std::__1::basic_regex<char, std::__1::regex_traits<char> >::__match_at_start_ecma<std::__1::allocator<std::__1::sub_match<char const*> > >(char const*, char const*, std::__1::match_results<char const*, std::__1::allocator<std::__1::sub_match<char const*> > >&, std::__1::regex_constants::match_flag_type, bool) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__111basic_regexIcNS_12regex_traitsIcEEE21__match_at_start_ecmaINS_9allocatorINS_9sub_matchIPKcEEEEEEbS8_S8_RNS_13match_resultsIS8_T_EENS_15regex_constants15match_flag_typeEb(void) {
    ALOGD("_ZNKSt3__111basic_regexIcNS_12regex_traitsIcEEE21__match_at_start_ecmaINS_9allocatorINS_9sub_matchIPKcEEEEEEbS8_S8_RNS_13match_resultsIS8_T_EENS_15regex_constants15match_flag_typeEb() called");
    return 0;
}

/* Demangled: std::__1::__back_ref_collate<char, std::__1::regex_traits<char> >::__exec(std::__1::__state<char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__118__back_ref_collateIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE(void) {
    ALOGD("_ZNKSt3__118__back_ref_collateIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE() called");
    return 0;
}

/* Demangled: std::__1::__repeat_one_loop<char>::__exec(std::__1::__state<char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__117__repeat_one_loopIcE6__execERNS_7__stateIcEE(void) {
    ALOGD("_ZNKSt3__117__repeat_one_loopIcE6__execERNS_7__stateIcEE() called");
    return 0;
}

/* Demangled: std::__1::__l_anchor<char>::__exec(std::__1::__state<char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__l_anchorIcE6__execERNS_7__stateIcEE(void) {
    ALOGD("_ZNKSt3__110__l_anchorIcE6__execERNS_7__stateIcEE() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::sub_match<char const*>, std::__1::allocator<std::__1::sub_match<char const*> > >::assign(unsigned long, std::__1::sub_match<char const*> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_9sub_matchIPKcEENS_9allocatorIS4_EEE6assignEmRKS4_(void) {
    ALOGD("_ZNSt3__16vectorINS_9sub_matchIPKcEENS_9allocatorIS4_EEE6assignEmRKS4_() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::sub_match<char const*>, std::__1::allocator<std::__1::sub_match<char const*> > >::__append(unsigned long, std::__1::sub_match<char const*> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_9sub_matchIPKcEENS_9allocatorIS4_EEE8__appendEmRKS4_(void) {
    ALOGD("_ZNSt3__16vectorINS_9sub_matchIPKcEENS_9allocatorIS4_EEE8__appendEmRKS4_() called");
    return 0;
}

/* Demangled: std::__1::__begin_marked_subexpression<char>::__exec(std::__1::__state<char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__128__begin_marked_subexpressionIcE6__execERNS_7__stateIcEE(void) {
    ALOGD("_ZNKSt3__128__begin_marked_subexpressionIcE6__execERNS_7__stateIcEE() called");
    return 0;
}

/* Demangled: std::__1::__alternate<char>::__exec_split(bool, std::__1::__state<char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__111__alternateIcE12__exec_splitEbRNS_7__stateIcEE(void) {
    ALOGD("_ZNKSt3__111__alternateIcE12__exec_splitEbRNS_7__stateIcEE() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<std::__1::__empty_state<char>*, std::__1::default_delete<std::__1::__empty_state<char> >, std::__1::allocator<std::__1::__empty_state<char> > >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPNS_13__empty_stateIcEENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPNS_13__empty_stateIcEENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: std::__1::__word_boundary<char, std::__1::regex_traits<char> >::__exec(std::__1::__state<char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__115__word_boundaryIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE(void) {
    ALOGD("_ZNKSt3__115__word_boundaryIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE() called");
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_equivalence_class<char const*>(char const*, char const*, std::__1::__bracket_expression<char, std::__1::regex_traits<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE25__parse_equivalence_classIPKcEET_S7_S7_PNS_20__bracket_expressionIcS2_EE(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE25__parse_equivalence_classIPKcEET_S7_S7_PNS_20__bracket_expressionIcS2_EE() called");
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_one_char_or_coll_elem_RE<char const*>(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE32__parse_one_char_or_coll_elem_REIPKcEET_S7_S7_(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE32__parse_one_char_or_coll_elem_REIPKcEET_S7_S7_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__owns_one_state<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__116__owns_one_stateIcEE = NULL;

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_pattern_character<char const*>(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE25__parse_pattern_characterIPKcEET_S7_S7_(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE25__parse_pattern_characterIPKcEET_S7_S7_() called");
    return 0;
}

/* Demangled: void std::__1::vector<char, std::__1::allocator<char> >::__push_back_slow_path<char const&>(char const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIcNS_9allocatorIcEEE21__push_back_slow_pathIRKcEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIcNS_9allocatorIcEEE21__push_back_slow_pathIRKcEEvOT_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__match_char_collate<char, std::__1::regex_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__match_char_collateIcNS_12regex_traitsIcEEEE = NULL;

/* Exported Object: vtable for std::__1::__match_char<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__112__match_charIcEE = NULL;

/* Exported Object: vtable for std::__1::__back_ref_icase<char, std::__1::regex_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__116__back_ref_icaseIcNS_12regex_traitsIcEEEE = NULL;

/* Exported Object: vtable for std::__1::__back_ref<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__back_refIcEE = NULL;

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_character_escape<char const*>(char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE24__parse_character_escapeIPKcEET_S7_S7_PNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE24__parse_character_escapeIPKcEET_S7_S7_PNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: std::__1::__owns_one_state<char>::~__owns_one_state() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__116__owns_one_stateIcED2Ev(void) {
    ALOGD("_ZNSt3__116__owns_one_stateIcED2Ev() called");
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_ERE_expression<char const*>(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE22__parse_ERE_expressionIPKcEET_S7_S7_(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE22__parse_ERE_expressionIPKcEET_S7_S7_() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_awk_escape<char const*>(char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE18__parse_awk_escapeIPKcEET_S7_S7_PNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE18__parse_awk_escapeIPKcEET_S7_S7_PNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: bool std::__1::basic_regex<char, std::__1::regex_traits<char> >::__search<std::__1::allocator<std::__1::sub_match<char const*> > >(char const*, char const*, std::__1::match_results<char const*, std::__1::allocator<std::__1::sub_match<char const*> > >&, std::__1::regex_constants::match_flag_type) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__111basic_regexIcNS_12regex_traitsIcEEE8__searchINS_9allocatorINS_9sub_matchIPKcEEEEEEbS8_S8_RNS_13match_resultsIS8_T_EENS_15regex_constants15match_flag_typeE(void) {
    ALOGD("_ZNKSt3__111basic_regexIcNS_12regex_traitsIcEEE8__searchINS_9allocatorINS_9sub_matchIPKcEEEEEEbS8_S8_RNS_13match_resultsIS8_T_EENS_15regex_constants15match_flag_typeE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::__state<char>, std::__1::allocator<std::__1::__state<char> > >::__push_back_slow_path<std::__1::__state<char> >(std::__1::__state<char>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_7__stateIcEENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_7__stateIcEENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::__owns_two_states<char>::~__owns_two_states() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__117__owns_two_statesIcED0Ev(void) {
    ALOGD("_ZNSt3__117__owns_two_statesIcED0Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__word_boundary<char, std::__1::regex_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__115__word_boundaryIcNS_12regex_traitsIcEEEE = NULL;

/* Exported Object: vtable for std::__1::__loop<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__16__loopIcEE = NULL;

/* Demangled: void std::__1::vector<std::__1::pair<char, char>, std::__1::allocator<std::__1::pair<char, char> > >::__push_back_slow_path<std::__1::pair<char, char> >(std::__1::pair<char, char>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4pairIccEENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_4pairIccEENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_() called");
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_RE_dupl_symbol<char const*>(char const*, char const*, std::__1::__owns_one_state<char>*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE22__parse_RE_dupl_symbolIPKcEET_S7_S7_PNS_16__owns_one_stateIcEEjj(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE22__parse_RE_dupl_symbolIPKcEET_S7_S7_PNS_16__owns_one_stateIcEEjj() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::__state<char>*, std::__1::allocator<std::__1::__state<char>*>&>::push_front(std::__1::__state<char>* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_7__stateIcEERNS_9allocatorIS3_EEE10push_frontERKS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_7__stateIcEERNS_9allocatorIS3_EEE10push_frontERKS3_() called");
    return 0;
}

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::regex_traits<char>::__lookup_collatename<char*>(char*, char*, char) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__112regex_traitsIcE20__lookup_collatenameIPcEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SA_c(void) {
    ALOGD("_ZNKSt3__112regex_traitsIcE20__lookup_collatenameIPcEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SA_c() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::sub_match<std::__1::__wrap_iter<char const*> >, std::__1::allocator<std::__1::sub_match<std::__1::__wrap_iter<char const*> > > >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_9sub_matchINS_11__wrap_iterIPKcEEEENS_9allocatorIS6_EEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorINS_9sub_matchINS_11__wrap_iterIPKcEEEENS_9allocatorIS6_EEE8__appendEm() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__l_anchor<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__l_anchorIcEE = NULL;

/* Exported Object: vtable for std::__1::__shared_ptr_pointer<std::__1::__empty_state<char>*, std::__1::default_delete<std::__1::__empty_state<char> >, std::__1::allocator<std::__1::__empty_state<char> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_pointerIPNS_13__empty_stateIcEENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE = NULL;

/* Exported Object: vtable for std::__1::__empty_non_own_state<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__121__empty_non_own_stateIcEE = NULL;

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_atom<char const*>(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE12__parse_atomIPKcEET_S7_S7_(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE12__parse_atomIPKcEET_S7_S7_() called");
    return 0;
}

/* Demangled: std::__1::__match_any<char>::__exec(std::__1::__state<char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__111__match_anyIcE6__execERNS_7__stateIcEE(void) {
    ALOGD("_ZNKSt3__111__match_anyIcE6__execERNS_7__stateIcEE() called");
    return 0;
}

/* Demangled: __cfi_check */
extern "C" __attribute__((visibility("default"))) int __cfi_check(void) {
    ALOGD("__cfi_check() called");
    return 0;
}

/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_ERE_dupl_symbol<char const*>(char const*, char const*, std::__1::__owns_one_state<char>*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE23__parse_ERE_dupl_symbolIPKcEET_S7_S7_PNS_16__owns_one_stateIcEEjj(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE23__parse_ERE_dupl_symbolIPKcEET_S7_S7_PNS_16__owns_one_stateIcEEjj() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Demangled: std::__1::basic_regex<char, std::__1::regex_traits<char> >::__push_char(char) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE11__push_charEc(void) {
    ALOGD("_ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE11__push_charEc() called");
    return 0;
}

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::regex_traits<char>::transform<std::__1::__wrap_iter<char*> >(std::__1::__wrap_iter<char*>, std::__1::__wrap_iter<char*>) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__112regex_traitsIcE9transformINS_11__wrap_iterIPcEEEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SC_(void) {
    ALOGD("_ZNKSt3__112regex_traitsIcE9transformINS_11__wrap_iterIPcEEEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SC_() called");
    return 0;
}

/* Demangled: bool std::__1::basic_regex<char, std::__1::regex_traits<char> >::__match_at_start_posix_subs<std::__1::allocator<std::__1::sub_match<char const*> > >(char const*, char const*, std::__1::match_results<char const*, std::__1::allocator<std::__1::sub_match<char const*> > >&, std::__1::regex_constants::match_flag_type, bool) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__111basic_regexIcNS_12regex_traitsIcEEE27__match_at_start_posix_subsINS_9allocatorINS_9sub_matchIPKcEEEEEEbS8_S8_RNS_13match_resultsIS8_T_EENS_15regex_constants15match_flag_typeEb(void) {
    ALOGD("_ZNKSt3__111basic_regexIcNS_12regex_traitsIcEEE27__match_at_start_posix_subsINS_9allocatorINS_9sub_matchIPKcEEEEEEbS8_S8_RNS_13match_resultsIS8_T_EENS_15regex_constants15match_flag_typeEb() called");
    return 0;
}

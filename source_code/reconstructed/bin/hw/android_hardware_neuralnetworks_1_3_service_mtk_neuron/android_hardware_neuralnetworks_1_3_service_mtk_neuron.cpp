/*
 * Reverse-Engineered Source for: android.hardware.neuralnetworks@1.3-service-mtk-neuron
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "android_hardware_neuralnetworks_1_3_service_mtk_neuron"

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
#include "android_hardware_neuralnetworks_1_3_service_mtk_neuron.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Executable Service Daemon Entrypoint */
static void sig_handler(int sig) {
    ALOGI("Received signal %d, terminating android_hardware_neuralnetworks_1_3_service_mtk_neuron", sig);
    if (g_dev_fd >= 0) close(g_dev_fd);
    exit(0);
}

int main(int argc, char** argv) {
    ALOGI("Starting android_hardware_neuralnetworks_1_3_service_mtk_neuron service daemon");
    signal(SIGTERM, sig_handler);
    signal(SIGINT, sig_handler);

    open_device_node();

    /* Main Service Loop */
    ALOGI("android_hardware_neuralnetworks_1_3_service_mtk_neuron service active");
    while (1) {
        sleep(3600);
    }
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev() called");
    return 0;
}

/* Exported Object: vtable for fmt::v6::basic_memory_buffer<unsigned int, 32ul, std::__1::allocator<unsigned int> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN3fmt2v619basic_memory_bufferIjLm32ENSt3__19allocatorIjEEEE = NULL;

/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::vector(std::__1::vector<int, std::__1::allocator<int> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEEC2ERKS3_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEEC2ERKS3_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_istringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__119basic_istringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: char fmt::v6::internal::decimal_point_impl<char>(fmt::v6::internal::locale_ref) */
extern "C" __attribute__((visibility("default"))) int _ZN3fmt2v68internal18decimal_point_implIcEET_NS1_10locale_refE(void) {
    ALOGD("_ZN3fmt2v68internal18decimal_point_implIcEET_NS1_10locale_refE() called");
    return 0;
}

/* Exported Object: unsigned short half_float::detail::float2half_impl<(std::__1::float_round_style)1>(float, std::__1::integral_constant<bool, true>)::base_table */
extern "C" __attribute__((visibility("default"))) void* _ZZN10half_float6detail15float2half_implILNSt3__117float_round_styleE1EEEtfNS2_17integral_constantIbLb1EEEE10base_table = NULL;

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void) {
    ALOGD("_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev() called");
    return 0;
}

/* Demangled: int fmt::v6::internal::snprintf_float<double>(double, int, fmt::v6::internal::float_specs, fmt::v6::internal::buffer<char>&) */
extern "C" __attribute__((visibility("default"))) int _ZN3fmt2v68internal14snprintf_floatIdEEiT_iNS1_11float_specsERNS1_6bufferIcEE(void) {
    ALOGD("_ZN3fmt2v68internal14snprintf_floatIdEEiT_iNS1_11float_specsERNS1_6bufferIcEE() called");
    return 0;
}

/* Demangled: void fmt::v6::internal::fallback_format<double>(double, fmt::v6::internal::buffer<char>&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN3fmt2v68internal15fallback_formatIdEEvT_RNS1_6bufferIcEERi(void) {
    ALOGD("_ZN3fmt2v68internal15fallback_formatIdEEvT_RNS1_6bufferIcEERi() called");
    return 0;
}

/* Demangled: std::__1::vector<char, std::__1::allocator<char> >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIcNS_9allocatorIcEEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorIcNS_9allocatorIcEEE8__appendEm() called");
    return 0;
}

/* Demangled: android::sp<android::hidl::base::V1_0::IBase>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_4hidl4base4V1_05IBaseEED2Ev(void) {
    ALOGD("_ZN7android2spINS_4hidl4base4V1_05IBaseEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, unsigned short>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned short, unsigned short>, std::__1::__unordered_map_hasher<unsigned short, std::__1::__hash_value_type<unsigned short, unsigned short>, std::__1::hash<unsigned short>, true>, std::__1::__unordered_map_equal<unsigned short, std::__1::__hash_value_type<unsigned short, unsigned short>, std::__1::equal_to<unsigned short>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned short, unsigned short> > >::__emplace_unique_key_args<unsigned short, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned short const&>, std::__1::tuple<> >(unsigned short const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned short const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIttEENS_22__unordered_map_hasherItS2_NS_4hashItEELb1EEENS_21__unordered_map_equalItS2_NS_8equal_toItEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsItJRKNS_21piecewise_construct_tENS_5tupleIJRKtEEENSI_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIttEENS_22__unordered_map_hasherItS2_NS_4hashItEELb1EEENS_21__unordered_map_equalItS2_NS_8equal_toItEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsItJRKNS_21piecewise_construct_tENS_5tupleIJRKtEEENSI_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int>(int&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIiEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIiEEvOT_() called");
    return 0;
}

/* Demangled: unsigned short half_float::detail::float2half<(std::__1::float_round_style)1, float>(float) */
extern "C" __attribute__((visibility("default"))) int _ZN10half_float6detail10float2halfILNSt3__117float_round_styleE1EfEEtT0_(void) {
    ALOGD("_ZN10half_float6detail10float2halfILNSt3__117float_round_styleE1EfEEtT0_() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_() called");
    return 0;
}

/* Demangled: void std::__1::vector<unsigned long, std::__1::allocator<unsigned long> >::__push_back_slow_path<unsigned long>(unsigned long&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorImNS_9allocatorImEEE21__push_back_slow_pathImEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorImNS_9allocatorImEEE21__push_back_slow_pathImEEvOT_() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: fmt::v6::internal::counting_iterator fmt::v6::internal::write_exponent<char, fmt::v6::internal::counting_iterator>(int, fmt::v6::internal::counting_iterator) */
extern "C" __attribute__((visibility("default"))) int _ZN3fmt2v68internal14write_exponentIcNS1_17counting_iteratorEEET0_iS4_(void) {
    ALOGD("_ZN3fmt2v68internal14write_exponentIcNS1_17counting_iteratorEEET0_iS4_() called");
    return 0;
}

/* Demangled: int fmt::v6::internal::format_float<double>(double, int, fmt::v6::internal::float_specs, fmt::v6::internal::buffer<char>&) */
extern "C" __attribute__((visibility("default"))) int _ZN3fmt2v68internal12format_floatIdEEiT_iNS1_11float_specsERNS1_6bufferIcEE(void) {
    ALOGD("_ZN3fmt2v68internal12format_floatIdEEiT_iNS1_11float_specsERNS1_6bufferIcEE() called");
    return 0;
}

/* Exported Object: fmt::v6::internal::basic_data<void>::digits */
extern "C" __attribute__((visibility("default"))) void* _ZN3fmt2v68internal10basic_dataIvE6digitsE = NULL;

/* Demangled: void fmt::v6::internal::buffer<char>::append<char>(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN3fmt2v68internal6bufferIcE6appendIcEEvPKT_S7_(void) {
    ALOGD("_ZN3fmt2v68internal6bufferIcE6appendIcEEvPKT_S7_() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: void std::__1::vector<unsigned char const*, std::__1::allocator<unsigned char const*> >::__push_back_slow_path<unsigned char const*>(unsigned char const*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPKhNS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPKhNS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_() called");
    return 0;
}

/* Exported Object: half_float::detail::half2float_impl(unsigned short, float, std::__1::integral_constant<bool, true>)::mantissa_table */
extern "C" __attribute__((visibility("default"))) void* _ZZN10half_float6detail15half2float_implEtfNSt3__117integral_constantIbLb1EEEE14mantissa_table = NULL;

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::operator+<char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EERKS9_SB_(void) {
    ALOGD("_ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EERKS9_SB_() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Demangled: _ZNSt3__16vectorIfNS_9allocatorIfEEE6assignIPfEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIfNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIfNS_9allocatorIfEEE6assignIPfEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIfNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void) {
    ALOGD("_ZNSt3__16vectorIfNS_9allocatorIfEEE6assignIPfEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIfNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_() called");
    return 0;
}

/* Exported Object: fmt::v6::internal::basic_data<void>::signs */
extern "C" __attribute__((visibility("default"))) void* _ZN3fmt2v68internal10basic_dataIvE5signsE = NULL;

/* Exported Object: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_14basic_iostreamIcS2_EE = NULL;

/* Demangled: std::__1::__split_buffer<unsigned int, std::__1::allocator<unsigned int>&>::push_back(unsigned int&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIjRNS_9allocatorIjEEE9push_backEOj(void) {
    ALOGD("_ZNSt3__114__split_bufferIjRNS_9allocatorIjEEE9push_backEOj() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_() called");
    return 0;
}

/* Demangled: int fmt::v6::internal::snprintf_float<long double>(long double, int, fmt::v6::internal::float_specs, fmt::v6::internal::buffer<char>&) */
extern "C" __attribute__((visibility("default"))) int _ZN3fmt2v68internal14snprintf_floatIeEEiT_iNS1_11float_specsERNS1_6bufferIcEE(void) {
    ALOGD("_ZN3fmt2v68internal14snprintf_floatIeEEiT_iNS1_11float_specsERNS1_6bufferIcEE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned short, unsigned short>, std::__1::__unordered_map_hasher<unsigned short, std::__1::__hash_value_type<unsigned short, unsigned short>, std::__1::hash<unsigned short>, true>, std::__1::__unordered_map_equal<unsigned short, std::__1::__hash_value_type<unsigned short, unsigned short>, std::__1::equal_to<unsigned short>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned short, unsigned short> > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIttEENS_22__unordered_map_hasherItS2_NS_4hashItEELb1EEENS_21__unordered_map_equalItS2_NS_8equal_toItEELb1EEENS_9allocatorIS2_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIttEENS_22__unordered_map_hasherItS2_NS_4hashItEELb1EEENS_21__unordered_map_equalItS2_NS_8equal_toItEELb1EEENS_9allocatorIS2_EEE8__rehashEm() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: _ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELm0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELm0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_(void) {
    ALOGD("_ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELm0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: fmt::v6::basic_memory_buffer<char, 500ul, std::__1::allocator<char> >::grow(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN3fmt2v619basic_memory_bufferIcLm500ENSt3__19allocatorIcEEE4growEm(void) {
    ALOGD("_ZN3fmt2v619basic_memory_bufferIcLm500ENSt3__19allocatorIcEEE4growEm() called");
    return 0;
}

/* Exported Object: fmt::v6::internal::basic_data<void>::zero_or_powers_of_10_64 */
extern "C" __attribute__((visibility("default"))) void* _ZN3fmt2v68internal10basic_dataIvE23zero_or_powers_of_10_64E = NULL;

/* Exported Object: vtable for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned short, unsigned short>, std::__1::__unordered_map_hasher<unsigned short, std::__1::__hash_value_type<unsigned short, unsigned short>, std::__1::hash<unsigned short>, true>, std::__1::__unordered_map_equal<unsigned short, std::__1::__hash_value_type<unsigned short, unsigned short>, std::__1::equal_to<unsigned short>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned short, unsigned short> > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIttEENS_22__unordered_map_hasherItS2_NS_4hashItEELb1EEENS_21__unordered_map_equalItS2_NS_8equal_toItEELb1EEENS_9allocatorIS2_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIttEENS_22__unordered_map_hasherItS2_NS_4hashItEELb1EEENS_21__unordered_map_equalItS2_NS_8equal_toItEELb1EEENS_9allocatorIS2_EEE6rehashEm() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE8__appendEm() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&>::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEED2Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >::vector(std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIhNS_9allocatorIhEEEC2ERKS3_(void) {
    ALOGD("_ZNSt3__16vectorIhNS_9allocatorIhEEEC2ERKS3_() called");
    return 0;
}

/* Demangled: std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0> std::__1::__copy_aligned<std::__1::vector<bool, std::__1::allocator<bool> >, false>(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__copy_alignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_(void) {
    ALOGD("_ZNSt3__114__copy_alignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_() called");
    return 0;
}

/* Demangled: android::sp<android::hidl::memory::V1_0::IMemory>::operator=(android::sp<android::hidl::memory::V1_0::IMemory>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_4hidl6memory4V1_07IMemoryEEaSEOS5_(void) {
    ALOGD("_ZN7android2spINS_4hidl6memory4V1_07IMemoryEEaSEOS5_() called");
    return 0;
}

/* Exported Object: fmt::v6::internal::basic_data<void>::zero_or_powers_of_10_32 */
extern "C" __attribute__((visibility("default"))) void* _ZN3fmt2v68internal10basic_dataIvE23zero_or_powers_of_10_32E = NULL;

/* Demangled: std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0> std::__1::__copy_aligned<std::__1::vector<bool, std::__1::allocator<bool> >, true>(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, true, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, true, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__copy_alignedINS_6vectorIbNS_9allocatorIbEEEELb1EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_(void) {
    ALOGD("_ZNSt3__114__copy_alignedINS_6vectorIbNS_9allocatorIbEEEELb1EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_() called");
    return 0;
}

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > fmt::v6::internal::grouping_impl<char>(fmt::v6::internal::locale_ref) */
extern "C" __attribute__((visibility("default"))) int _ZN3fmt2v68internal13grouping_implIcEENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEENS1_10locale_refE(void) {
    ALOGD("_ZN3fmt2v68internal13grouping_implIcEENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEENS1_10locale_refE() called");
    return 0;
}

/* Exported Object: half_float::detail::half2float_impl(unsigned short, float, std::__1::integral_constant<bool, true>)::offset_table */
extern "C" __attribute__((visibility("default"))) void* _ZZN10half_float6detail15half2float_implEtfNSt3__117integral_constantIbLb1EEEE12offset_table = NULL;

/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__emplace_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE24__emplace_back_slow_pathIJRS6_EEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE24__emplace_back_slow_pathIJRS6_EEEvDpOT_() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: int fmt::v6::internal::format_float<long double>(long double, int, fmt::v6::internal::float_specs, fmt::v6::internal::buffer<char>&) */
extern "C" __attribute__((visibility("default"))) int _ZN3fmt2v68internal12format_floatIeEEiT_iNS1_11float_specsERNS1_6bufferIcEE(void) {
    ALOGD("_ZN3fmt2v68internal12format_floatIeEEiT_iNS1_11float_specsERNS1_6bufferIcEE() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE16_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__emplace_back_slow_path<int&>(int&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE24__emplace_back_slow_pathIJRiEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE24__emplace_back_slow_pathIJRiEEEvDpOT_() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIhNS_9allocatorIhEEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorIhNS_9allocatorIhEEE8__appendEm() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::sync() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::vector(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEEC2ERKS8_(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEEC2ERKS8_() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::vector(std::__1::vector<unsigned int, std::__1::allocator<unsigned int> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEEC2ERKS3_(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEEC2ERKS3_() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Demangled: std::__1::__vector_base<std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >, std::__1::allocator<std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseINS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseINS_6vectorIhNS_9allocatorIhEEEENS2_IS4_EEED2Ev() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_istringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__119basic_istringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_istringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__119basic_istringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: std::__1::vector<bool, std::__1::allocator<bool> >::reserve(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIbNS_9allocatorIbEEE7reserveEm(void) {
    ALOGD("_ZNSt3__16vectorIbNS_9allocatorIbEEE7reserveEm() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: fmt::v6::basic_format_context<std::__1::back_insert_iterator<fmt::v6::internal::buffer<char> >, char>::arg(fmt::v6::basic_string_view<char>) */
extern "C" __attribute__((visibility("default"))) int _ZN3fmt2v620basic_format_contextINSt3__120back_insert_iteratorINS0_8internal6bufferIcEEEEcE3argENS0_17basic_string_viewIcEE(void) {
    ALOGD("_ZN3fmt2v620basic_format_contextINSt3__120back_insert_iteratorINS0_8internal6bufferIcEEEEcE3argENS0_17basic_string_viewIcEE() called");
    return 0;
}

/* Demangled: fmt::v6::internal::arg_map<fmt::v6::basic_format_context<std::__1::back_insert_iterator<fmt::v6::internal::buffer<char> >, char> >::init(fmt::v6::basic_format_args<fmt::v6::basic_format_context<std::__1::back_insert_iterator<fmt::v6::internal::buffer<char> >, char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3fmt2v68internal7arg_mapINS0_20basic_format_contextINSt3__120back_insert_iteratorINS1_6bufferIcEEEEcEEE4initERKNS0_17basic_format_argsIS9_EE(void) {
    ALOGD("_ZN3fmt2v68internal7arg_mapINS0_20basic_format_contextINSt3__120back_insert_iteratorINS1_6bufferIcEEEEcEEE4initERKNS0_17basic_format_argsIS9_EE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: _ZNSt3__16vectorIjNS_9allocatorIjEEE6insertINS_11__wrap_iterIPjEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS9_E9referenceEEE5valueES7_E4typeENS5_IPKjEES9_S9_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE6insertINS_11__wrap_iterIPjEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS9_E9referenceEEE5valueES7_E4typeENS5_IPKjEES9_S9_(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE6insertINS_11__wrap_iterIPjEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS9_E9referenceEEE5valueES7_E4typeENS5_IPKjEES9_S9_() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_() called");
    return 0;
}

/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int>(unsigned int&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIjEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIjEEvOT_() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::imbue(std::__1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE() called");
    return 0;
}

/* Demangled: char fmt::v6::internal::thousands_sep_impl<char>(fmt::v6::internal::locale_ref) */
extern "C" __attribute__((visibility("default"))) int _ZN3fmt2v68internal18thousands_sep_implIcEET_NS1_10locale_refE(void) {
    ALOGD("_ZN3fmt2v68internal18thousands_sep_implIcEET_NS1_10locale_refE() called");
    return 0;
}

/* Exported Object: fmt::v6::internal::basic_data<void>::hex_digits */
extern "C" __attribute__((visibility("default"))) void* _ZN3fmt2v68internal10basic_dataIvE10hex_digitsE = NULL;

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Demangled: std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0> std::__1::__copy_unaligned<std::__1::vector<bool, std::__1::allocator<bool> >, false>(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__116__copy_unalignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_(void) {
    ALOGD("_ZNSt3__116__copy_unalignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_() called");
    return 0;
}

/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int const&>(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_() called");
    return 0;
}

/* Demangled: std::__1::locale fmt::v6::internal::locale_ref::get<std::__1::locale>() const */
extern "C" __attribute__((visibility("default"))) int _ZNK3fmt2v68internal10locale_ref3getINSt3__16localeEEET_v(void) {
    ALOGD("_ZNK3fmt2v68internal10locale_ref3getINSt3__16localeEEET_v() called");
    return 0;
}

/* Demangled: std::__1::vector<float, std::__1::allocator<float> >::vector(std::__1::vector<float, std::__1::allocator<float> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIfNS_9allocatorIfEEEC2ERKS3_(void) {
    ALOGD("_ZNSt3__16vectorIfNS_9allocatorIfEEEC2ERKS3_() called");
    return 0;
}

/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__emplace_back_slow_path<int>(int&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE24__emplace_back_slow_pathIJiEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE24__emplace_back_slow_pathIJiEEEvDpOT_() called");
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

/* Exported Object: VTT for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: fmt::v6::basic_memory_buffer<unsigned int, 32ul, std::__1::allocator<unsigned int> >::grow(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN3fmt2v619basic_memory_bufferIjLm32ENSt3__19allocatorIjEEE4growEm(void) {
    ALOGD("_ZN3fmt2v619basic_memory_bufferIjLm32ENSt3__19allocatorIjEEE4growEm() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::reserve(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE7reserveEm(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE7reserveEm() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::operator<< <char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE(void) {
    ALOGD("_ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE() called");
    return 0;
}

/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int const&>(int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::setbuf(char*, long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPcl(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPcl() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE0_NS_13basic_ostreamIcS2_EE = NULL;

/* Exported Object: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE = NULL;

/* Demangled: _ZNSt3__16vectorINS_4pairIjjEENS_9allocatorIS2_EEE6assignIPKS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4pairIjjEENS_9allocatorIS2_EEE6assignIPKS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_(void) {
    ALOGD("_ZNSt3__16vectorINS_4pairIjjEENS_9allocatorIS2_EEE6assignIPKS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Exported Object: fmt::v6::internal::basic_data<void>::pow10_exponents */
extern "C" __attribute__((visibility("default"))) void* _ZN3fmt2v68internal10basic_dataIvE15pow10_exponentsE = NULL;

/* Exported Object: VTT for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::insert(std::__1::__wrap_iter<unsigned int const*>, unsigned int&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE6insertENS_11__wrap_iterIPKjEEOj(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE6insertENS_11__wrap_iterIPKjEEOj() called");
    return 0;
}

/* Exported Object: half_float::detail::half2float_impl(unsigned short, float, std::__1::integral_constant<bool, true>)::exponent_table */
extern "C" __attribute__((visibility("default"))) void* _ZZN10half_float6detail15half2float_implEtfNSt3__117integral_constantIbLb1EEEE14exponent_table = NULL;

/* Exported Object: fmt::v6::internal::basic_data<void>::pow10_significands */
extern "C" __attribute__((visibility("default"))) void* _ZN3fmt2v68internal10basic_dataIvE18pow10_significandsE = NULL;

/* Exported Object: unsigned short half_float::detail::float2half_impl<(std::__1::float_round_style)1>(float, std::__1::integral_constant<bool, true>)::shift_table */
extern "C" __attribute__((visibility("default"))) void* _ZZN10half_float6detail15float2half_implILNSt3__117float_round_styleE1EEEtfNS2_17integral_constantIbLb1EEEE11shift_table = NULL;

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void) {
    ALOGD("_ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: std::__1::vector<bool, std::__1::allocator<bool> >::resize(unsigned long, bool) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIbNS_9allocatorIbEEE6resizeEmb(void) {
    ALOGD("_ZNSt3__16vectorIbNS_9allocatorIbEEE6resizeEmb() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev() called");
    return 0;
}

/* Exported Object: vtable for fmt::v6::basic_memory_buffer<char, 500ul, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN3fmt2v619basic_memory_bufferIcLm500ENSt3__19allocatorIcEEEE = NULL;

/* Exported Object: fmt::v6::internal::basic_data<void>::powers_of_10_64 */
extern "C" __attribute__((visibility("default"))) void* _ZN3fmt2v68internal10basic_dataIvE15powers_of_10_64E = NULL;

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE16_NS_13basic_ostreamIcS2_EE = NULL;

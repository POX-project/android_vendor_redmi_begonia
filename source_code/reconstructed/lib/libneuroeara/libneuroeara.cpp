/*
 * Reverse-Engineered Source for: libneuroeara.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libneuroeara"

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
#include "libneuroeara.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: ANeuroEara_setExecutionPreference */
extern "C" __attribute__((visibility("default"))) int ANeuroEara_setExecutionPreference(void) {
    ALOGD("ANeuroEara_setExecutionPreference() called");
    return 0;
}

/* Demangled: NeuroEaraManager::notifyEaraJobEnd(int, unsigned long long, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN16NeuroEaraManager16notifyEaraJobEndEiyb(void) {
    ALOGD("_ZN16NeuroEaraManager16notifyEaraJobEndEiyb() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::vector<int, std::__1::allocator<int> >, std::__1::allocator<std::__1::vector<int, std::__1::allocator<int> > > >::vector(std::__1::vector<std::__1::vector<int, std::__1::allocator<int> >, std::__1::allocator<std::__1::vector<int, std::__1::allocator<int> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS0_IiNS_9allocatorIiEEEENS1_IS3_EEEC2ERKS5_(void) {
    ALOGD("_ZNSt3__16vectorINS0_IiNS_9allocatorIiEEEENS1_IS3_EEEC2ERKS5_() called");
    return 0;
}

/* Demangled: ANeuroEara_configSuspendParams */
extern "C" __attribute__((visibility("default"))) int ANeuroEara_configSuspendParams(void) {
    ALOGD("ANeuroEara_configSuspendParams() called");
    return 0;
}

/* Demangled: ANeuroEara_isEaraQosSupported */
extern "C" __attribute__((visibility("default"))) int ANeuroEara_isEaraQosSupported(void) {
    ALOGD("ANeuroEara_isEaraQosSupported() called");
    return 0;
}

/* Demangled: ANeuroEara_notifyExecutionEnd_2_1 */
extern "C" __attribute__((visibility("default"))) int ANeuroEara_notifyExecutionEnd_2_1(void) {
    ALOGD("ANeuroEara_notifyExecutionEnd_2_1() called");
    return 0;
}

/* Exported Object: getEaraLibHandle()::eara_handle */
extern "C" __attribute__((visibility("default"))) void* _ZZ16getEaraLibHandlevE11eara_handle = NULL;

/* Demangled: ANeuroEara_getEaraUsage */
extern "C" __attribute__((visibility("default"))) int ANeuroEara_getEaraUsage(void) {
    ALOGD("ANeuroEara_getEaraUsage() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<DeviceComponent, int>, std::__1::__unordered_map_hasher<DeviceComponent, std::__1::__hash_value_type<DeviceComponent, int>, std::__1::hash<DeviceComponent>, true>, std::__1::__unordered_map_equal<DeviceComponent, std::__1::__hash_value_type<DeviceComponent, int>, std::__1::equal_to<DeviceComponent>, true>, std::__1::allocator<std::__1::__hash_value_type<DeviceComponent, int> > >::rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeI15DeviceComponentiEENS_22__unordered_map_hasherIS2_S3_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S3_NS_8equal_toIS2_EELb1EEENS_9allocatorIS3_EEE6rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeI15DeviceComponentiEENS_22__unordered_map_hasherIS2_S3_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S3_NS_8equal_toIS2_EELb1EEENS_9allocatorIS3_EEE6rehashEj() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, DeviceComponent>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, DeviceComponent>, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, DeviceComponent>, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, DeviceComponent>, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, DeviceComponent> > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>, std::__1::tuple<> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE15DeviceComponentEENS_22__unordered_map_hasherIS7_S9_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S9_NS_8equal_toIS7_EELb1EEENS5_IS9_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSO_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS9_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE15DeviceComponentEENS_22__unordered_map_hasherIS7_S9_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S9_NS_8equal_toIS7_EELb1EEENS5_IS9_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSO_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS9_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> >, std::__1::allocator<std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> > > >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS0_IyNS_9allocatorIyEEEENS1_IS3_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorINS0_IyNS_9allocatorIyEEEENS1_IS3_EEE8__appendEj() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIyNS_9allocatorIyEEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIyNS_9allocatorIyEEE8__appendEj() called");
    return 0;
}

/* Demangled: NeuroEaraManager::getAverageExecutionTime(std::__1::vector<std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> >, std::__1::allocator<std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> > > >&) */
extern "C" __attribute__((visibility("default"))) int _ZN16NeuroEaraManager23getAverageExecutionTimeERNSt3__16vectorINS1_IyNS0_9allocatorIyEEEENS2_IS4_EEEE(void) {
    ALOGD("_ZN16NeuroEaraManager23getAverageExecutionTimeERNSt3__16vectorINS1_IyNS0_9allocatorIyEEEENS2_IS4_EEEE() called");
    return 0;
}

/* Demangled: NeuroEaraManager::NeuroEaraManager(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >&) */
extern "C" __attribute__((visibility("default"))) int _ZN16NeuroEaraManagerC1ERNSt3__16vectorINS0_12basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEENS5_IS7_EEEE(void) {
    ALOGD("_ZN16NeuroEaraManagerC1ERNSt3__16vectorINS0_12basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEENS5_IS7_EEEE() called");
    return 0;
}

/* Demangled: NeuroEaraManager::~NeuroEaraManager() */
extern "C" __attribute__((visibility("default"))) int _ZN16NeuroEaraManagerD2Ev(void) {
    ALOGD("_ZN16NeuroEaraManagerD2Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__emplace_back_slow_path<int>(int&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE24__emplace_back_slow_pathIJiEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE24__emplace_back_slow_pathIJiEEEvDpOT_() called");
    return 0;
}

/* Demangled: ANeuroEara_getAverageExecutionTime */
extern "C" __attribute__((visibility("default"))) int ANeuroEara_getAverageExecutionTime(void) {
    ALOGD("ANeuroEara_getAverageExecutionTime() called");
    return 0;
}

/* Demangled: NeuroEaraManager::notifyExecutionFail(int, unsigned long long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN16NeuroEaraManager19notifyExecutionFailEiyj(void) {
    ALOGD("_ZN16NeuroEaraManager19notifyExecutionFailEiyj() called");
    return 0;
}

/* Demangled: NeuroEaraManager::notifyExecutionEnd_2_1(int, unsigned long long, std::__1::vector<bool, std::__1::allocator<bool> >&, std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> >&, std::__1::vector<int, std::__1::allocator<int> >&, std::__1::vector<int, std::__1::allocator<int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN16NeuroEaraManager22notifyExecutionEnd_2_1EiyRNSt3__16vectorIbNS0_9allocatorIbEEEERNS1_IyNS2_IyEEEERNS1_IiNS2_IiEEEESB_(void) {
    ALOGD("_ZN16NeuroEaraManager22notifyExecutionEnd_2_1EiyRNSt3__16vectorIbNS0_9allocatorIbEEEERNS1_IyNS2_IyEEEERNS1_IiNS2_IiEEEESB_() called");
    return 0;
}

/* Demangled: NeuroEaraManager::NeuroEaraManager(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >&) */
extern "C" __attribute__((visibility("default"))) int _ZN16NeuroEaraManagerC2ERNSt3__16vectorINS0_12basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEENS5_IS7_EEEE(void) {
    ALOGD("_ZN16NeuroEaraManagerC2ERNSt3__16vectorINS0_12basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEENS5_IS7_EEEE() called");
    return 0;
}

/* Demangled: NeuroEaraManager::getEaraUsage(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN16NeuroEaraManager12getEaraUsageENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPiS7_(void) {
    ALOGD("_ZN16NeuroEaraManager12getEaraUsageENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPiS7_() called");
    return 0;
}

/* Demangled: NeuroEaraManager::getJobPriority(int*) */
extern "C" __attribute__((visibility("default"))) int _ZN16NeuroEaraManager14getJobPriorityEPi(void) {
    ALOGD("_ZN16NeuroEaraManager14getJobPriorityEPi() called");
    return 0;
}

/* Demangled: NeuroEaraManager::notifyExecutionBegin_2_1(int, unsigned long long, std::__1::vector<int, std::__1::allocator<int> >&, std::__1::vector<std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> >, std::__1::allocator<std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> > > >&) */
extern "C" __attribute__((visibility("default"))) int _ZN16NeuroEaraManager24notifyExecutionBegin_2_1EiyRNSt3__16vectorIiNS0_9allocatorIiEEEERNS1_INS1_IyNS2_IyEEEENS2_IS7_EEEE(void) {
    ALOGD("_ZN16NeuroEaraManager24notifyExecutionBegin_2_1EiyRNSt3__16vectorIiNS0_9allocatorIiEEEERNS1_INS1_IyNS2_IyEEEENS2_IS7_EEEE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, DeviceComponent>, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, DeviceComponent>, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, DeviceComponent>, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, DeviceComponent> > >::rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE15DeviceComponentEENS_22__unordered_map_hasherIS7_S9_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S9_NS_8equal_toIS7_EELb1EEENS5_IS9_EEE6rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE15DeviceComponentEENS_22__unordered_map_hasherIS7_S9_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S9_NS_8equal_toIS7_EELb1EEENS5_IS9_EEE6rehashEj() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<DeviceComponent, unsigned int>, std::__1::__unordered_map_hasher<DeviceComponent, std::__1::__hash_value_type<DeviceComponent, unsigned int>, std::__1::hash<DeviceComponent>, true>, std::__1::__unordered_map_equal<DeviceComponent, std::__1::__hash_value_type<DeviceComponent, unsigned int>, std::__1::equal_to<DeviceComponent>, true>, std::__1::allocator<std::__1::__hash_value_type<DeviceComponent, unsigned int> > >::rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeI15DeviceComponentjEENS_22__unordered_map_hasherIS2_S3_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S3_NS_8equal_toIS2_EELb1EEENS_9allocatorIS3_EEE6rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeI15DeviceComponentjEENS_22__unordered_map_hasherIS2_S3_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S3_NS_8equal_toIS2_EELb1EEENS_9allocatorIS3_EEE6rehashEj() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIyNS_9allocatorIyEEE6assignIPyEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIyNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIyNS_9allocatorIyEEE6assignIPyEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIyNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void) {
    ALOGD("_ZNSt3__16vectorIyNS_9allocatorIyEEE6assignIPyEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIyNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_() called");
    return 0;
}

/* Demangled: NeuroEaraManager::getEaraUsage(DeviceComponent, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN16NeuroEaraManager12getEaraUsageE15DeviceComponentPiS1_(void) {
    ALOGD("_ZN16NeuroEaraManager12getEaraUsageE15DeviceComponentPiS1_() called");
    return 0;
}

/* Demangled: ANeuroEara_notifyExecutionEnd */
extern "C" __attribute__((visibility("default"))) int ANeuroEara_notifyExecutionEnd(void) {
    ALOGD("ANeuroEara_notifyExecutionEnd() called");
    return 0;
}

/* Demangled: ANeuroEara_notifyExecutionFail */
extern "C" __attribute__((visibility("default"))) int ANeuroEara_notifyExecutionFail(void) {
    ALOGD("ANeuroEara_notifyExecutionFail() called");
    return 0;
}

/* Demangled: ANeuroEara_suggestOffload */
extern "C" __attribute__((visibility("default"))) int ANeuroEara_suggestOffload(void) {
    ALOGD("ANeuroEara_suggestOffload() called");
    return 0;
}

/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE8__appendEj() called");
    return 0;
}

/* Demangled: ANeuroEara_create */
extern "C" __attribute__((visibility("default"))) int ANeuroEara_create(void) {
    ALOGD("ANeuroEara_create() called");
    return 0;
}

/* Demangled: ANeuroEara_delete */
extern "C" __attribute__((visibility("default"))) int ANeuroEara_delete(void) {
    ALOGD("ANeuroEara_delete() called");
    return 0;
}

/* Demangled: NeuroEaraManager::suggestOffload(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool*) */
extern "C" __attribute__((visibility("default"))) int _ZN16NeuroEaraManager14suggestOffloadENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPb(void) {
    ALOGD("_ZN16NeuroEaraManager14suggestOffloadENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPb() called");
    return 0;
}

/* Demangled: NeuroEaraManager::~NeuroEaraManager() */
extern "C" __attribute__((visibility("default"))) int _ZN16NeuroEaraManagerD1Ev(void) {
    ALOGD("_ZN16NeuroEaraManagerD1Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j(void) {
    ALOGD("_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j() called");
    return 0;
}

/* Demangled: NeuroEaraManager::setCompilation(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >&) */
extern "C" __attribute__((visibility("default"))) int _ZN16NeuroEaraManager14setCompilationERNSt3__16vectorINS0_12basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEENS5_IS7_EEEE(void) {
    ALOGD("_ZN16NeuroEaraManager14setCompilationERNSt3__16vectorINS0_12basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEENS5_IS7_EEEE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<DeviceComponent, int>, std::__1::__unordered_map_hasher<DeviceComponent, std::__1::__hash_value_type<DeviceComponent, int>, std::__1::hash<DeviceComponent>, true>, std::__1::__unordered_map_equal<DeviceComponent, std::__1::__hash_value_type<DeviceComponent, int>, std::__1::equal_to<DeviceComponent>, true>, std::__1::allocator<std::__1::__hash_value_type<DeviceComponent, int> > >::__rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeI15DeviceComponentiEENS_22__unordered_map_hasherIS2_S3_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S3_NS_8equal_toIS2_EELb1EEENS_9allocatorIS3_EEE8__rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeI15DeviceComponentiEENS_22__unordered_map_hasherIS2_S3_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S3_NS_8equal_toIS2_EELb1EEENS_9allocatorIS3_EEE8__rehashEj() called");
    return 0;
}

/* Demangled: ANeuroEara_suggestSuspendTime */
extern "C" __attribute__((visibility("default"))) int ANeuroEara_suggestSuspendTime(void) {
    ALOGD("ANeuroEara_suggestSuspendTime() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<DeviceComponent, int>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<DeviceComponent, int>, std::__1::__unordered_map_hasher<DeviceComponent, std::__1::__hash_value_type<DeviceComponent, int>, std::__1::hash<DeviceComponent>, true>, std::__1::__unordered_map_equal<DeviceComponent, std::__1::__hash_value_type<DeviceComponent, int>, std::__1::equal_to<DeviceComponent>, true>, std::__1::allocator<std::__1::__hash_value_type<DeviceComponent, int> > >::__emplace_unique_key_args<DeviceComponent, std::__1::piecewise_construct_t const&, std::__1::tuple<DeviceComponent const&>, std::__1::tuple<> >(DeviceComponent const&, std::__1::piecewise_construct_t const&, std::__1::tuple<DeviceComponent const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeI15DeviceComponentiEENS_22__unordered_map_hasherIS2_S3_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S3_NS_8equal_toIS2_EELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIS2_JRKNS_21piecewise_construct_tENS_5tupleIJRKS2_EEENSJ_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS3_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeI15DeviceComponentiEENS_22__unordered_map_hasherIS2_S3_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S3_NS_8equal_toIS2_EELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIS2_JRKNS_21piecewise_construct_tENS_5tupleIJRKS2_EEENSJ_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS3_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: ANeuroEara_getJobPriority */
extern "C" __attribute__((visibility("default"))) int ANeuroEara_getJobPriority(void) {
    ALOGD("ANeuroEara_getJobPriority() called");
    return 0;
}

/* Demangled: ANeuroEara_notifyExecutionBegin_2_1 */
extern "C" __attribute__((visibility("default"))) int ANeuroEara_notifyExecutionBegin_2_1(void) {
    ALOGD("ANeuroEara_notifyExecutionBegin_2_1() called");
    return 0;
}

/* Demangled: NeuroEaraManager::suggestSuspendTime(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN16NeuroEaraManager18suggestSuspendTimeERNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPj(void) {
    ALOGD("_ZN16NeuroEaraManager18suggestSuspendTimeERNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPj() called");
    return 0;
}

/* Demangled: NeuroEaraManager::configSuspendParams(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN16NeuroEaraManager19configSuspendParamsERNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEij(void) {
    ALOGD("_ZN16NeuroEaraManager19configSuspendParamsERNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEij() called");
    return 0;
}

/* Demangled: NeuroEaraManager::setExecutionPreference(ExecPreference) */
extern "C" __attribute__((visibility("default"))) int _ZN16NeuroEaraManager22setExecutionPreferenceE14ExecPreference(void) {
    ALOGD("_ZN16NeuroEaraManager22setExecutionPreferenceE14ExecPreference() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<DeviceComponent, unsigned int>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<DeviceComponent, unsigned int>, std::__1::__unordered_map_hasher<DeviceComponent, std::__1::__hash_value_type<DeviceComponent, unsigned int>, std::__1::hash<DeviceComponent>, true>, std::__1::__unordered_map_equal<DeviceComponent, std::__1::__hash_value_type<DeviceComponent, unsigned int>, std::__1::equal_to<DeviceComponent>, true>, std::__1::allocator<std::__1::__hash_value_type<DeviceComponent, unsigned int> > >::__emplace_unique_key_args<DeviceComponent, std::__1::piecewise_construct_t const&, std::__1::tuple<DeviceComponent const&>, std::__1::tuple<> >(DeviceComponent const&, std::__1::piecewise_construct_t const&, std::__1::tuple<DeviceComponent const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeI15DeviceComponentjEENS_22__unordered_map_hasherIS2_S3_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S3_NS_8equal_toIS2_EELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIS2_JRKNS_21piecewise_construct_tENS_5tupleIJRKS2_EEENSJ_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS3_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeI15DeviceComponentjEENS_22__unordered_map_hasherIS2_S3_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S3_NS_8equal_toIS2_EELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIS2_JRKNS_21piecewise_construct_tENS_5tupleIJRKS2_EEENSJ_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS3_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, DeviceComponent>, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, DeviceComponent>, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, DeviceComponent>, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, DeviceComponent> > >::__rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE15DeviceComponentEENS_22__unordered_map_hasherIS7_S9_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S9_NS_8equal_toIS7_EELb1EEENS5_IS9_EEE8__rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE15DeviceComponentEENS_22__unordered_map_hasherIS7_S9_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S9_NS_8equal_toIS7_EELb1EEENS5_IS9_EEE8__rehashEj() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorINS0_IyNS_9allocatorIyEEEENS1_IS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS0_IyNS_9allocatorIyEEEENS1_IS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_(void) {
    ALOGD("_ZNSt3__16vectorINS0_IyNS_9allocatorIyEEEENS1_IS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_() called");
    return 0;
}

/* Demangled: isEaraQosSupported() */
extern "C" __attribute__((visibility("default"))) int _Z18isEaraQosSupportedv(void) {
    ALOGD("_Z18isEaraQosSupportedv() called");
    return 0;
}

/* Demangled: NeuroEaraManager::updateBoostValue(std::__1::vector<int, std::__1::allocator<int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN16NeuroEaraManager16updateBoostValueERNSt3__16vectorIiNS0_9allocatorIiEEEE(void) {
    ALOGD("_ZN16NeuroEaraManager16updateBoostValueERNSt3__16vectorIiNS0_9allocatorIiEEEE() called");
    return 0;
}

/* Demangled: NeuroEaraManager::notifyEaraJobBegin(int, unsigned long long, std::__1::vector<int, std::__1::allocator<int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN16NeuroEaraManager18notifyEaraJobBeginEiyRNSt3__16vectorIiNS0_9allocatorIiEEEE(void) {
    ALOGD("_ZN16NeuroEaraManager18notifyEaraJobBeginEiyRNSt3__16vectorIiNS0_9allocatorIiEEEE() called");
    return 0;
}

/* Demangled: std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, DeviceComponent>, void*>*> std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, DeviceComponent>, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, DeviceComponent>, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, DeviceComponent>, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, DeviceComponent> > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE15DeviceComponentEENS_22__unordered_map_hasherIS7_S9_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S9_NS_8equal_toIS7_EELb1EEENS5_IS9_EEE4findIS7_EENS_21__hash_const_iteratorIPNS_11__hash_nodeIS9_PvEEEERKT_(void) {
    ALOGD("_ZNKSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE15DeviceComponentEENS_22__unordered_map_hasherIS7_S9_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S9_NS_8equal_toIS7_EELb1EEENS5_IS9_EEE4findIS7_EENS_21__hash_const_iteratorIPNS_11__hash_nodeIS9_PvEEEERKT_() called");
    return 0;
}

/* Demangled: std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, DeviceComponent, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, DeviceComponent> > >::operator[](std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113unordered_mapINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE15DeviceComponentNS_4hashIS6_EENS_8equal_toIS6_EENS4_INS_4pairIKS6_S7_EEEEEixERSD_(void) {
    ALOGD("_ZNSt3__113unordered_mapINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE15DeviceComponentNS_4hashIS6_EENS_8equal_toIS6_EENS4_INS_4pairIKS6_S7_EEEEEixERSD_() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::operator<< <char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE(void) {
    ALOGD("_ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE() called");
    return 0;
}

/* Demangled: NeuroEaraManager::notifyExecutionBegin(int, unsigned long long, std::__1::vector<int, std::__1::allocator<int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN16NeuroEaraManager20notifyExecutionBeginEiyRNSt3__16vectorIiNS0_9allocatorIiEEEE(void) {
    ALOGD("_ZN16NeuroEaraManager20notifyExecutionBeginEiyRNSt3__16vectorIiNS0_9allocatorIiEEEE() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::vector<int, std::__1::allocator<int> >, std::__1::allocator<std::__1::vector<int, std::__1::allocator<int> > > >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS0_IiNS_9allocatorIiEEEENS1_IS3_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorINS0_IiNS_9allocatorIiEEEENS1_IS3_EEE8__appendEj() called");
    return 0;
}

/* Demangled: ANeuroEara_notifyExecutionBegin */
extern "C" __attribute__((visibility("default"))) int ANeuroEara_notifyExecutionBegin(void) {
    ALOGD("ANeuroEara_notifyExecutionBegin() called");
    return 0;
}

/* Demangled: NeuroEaraManager::notifyExecutionEnd(int, unsigned long long, std::__1::vector<bool, std::__1::allocator<bool> >&, std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> >&, std::__1::vector<int, std::__1::allocator<int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN16NeuroEaraManager18notifyExecutionEndEiyRNSt3__16vectorIbNS0_9allocatorIbEEEERNS1_IyNS2_IyEEEERNS1_IiNS2_IiEEEE(void) {
    ALOGD("_ZN16NeuroEaraManager18notifyExecutionEndEiyRNSt3__16vectorIbNS0_9allocatorIbEEEERNS1_IyNS2_IyEEEERNS1_IiNS2_IiEEEE() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<DeviceComponent, int>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<DeviceComponent, int>, std::__1::__unordered_map_hasher<DeviceComponent, std::__1::__hash_value_type<DeviceComponent, int>, std::__1::hash<DeviceComponent>, true>, std::__1::__unordered_map_equal<DeviceComponent, std::__1::__hash_value_type<DeviceComponent, int>, std::__1::equal_to<DeviceComponent>, true>, std::__1::allocator<std::__1::__hash_value_type<DeviceComponent, int> > >::__emplace_unique_key_args<DeviceComponent, std::__1::piecewise_construct_t const&, std::__1::tuple<DeviceComponent&&>, std::__1::tuple<> >(DeviceComponent const&, std::__1::piecewise_construct_t const&, std::__1::tuple<DeviceComponent&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeI15DeviceComponentiEENS_22__unordered_map_hasherIS2_S3_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S3_NS_8equal_toIS2_EELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIS2_JRKNS_21piecewise_construct_tENS_5tupleIJOS2_EEENSJ_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS3_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeI15DeviceComponentiEENS_22__unordered_map_hasherIS2_S3_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S3_NS_8equal_toIS2_EELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIS2_JRKNS_21piecewise_construct_tENS_5tupleIJOS2_EEENSJ_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS3_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<DeviceComponent, unsigned int>, std::__1::__unordered_map_hasher<DeviceComponent, std::__1::__hash_value_type<DeviceComponent, unsigned int>, std::__1::hash<DeviceComponent>, true>, std::__1::__unordered_map_equal<DeviceComponent, std::__1::__hash_value_type<DeviceComponent, unsigned int>, std::__1::equal_to<DeviceComponent>, true>, std::__1::allocator<std::__1::__hash_value_type<DeviceComponent, unsigned int> > >::__rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeI15DeviceComponentjEENS_22__unordered_map_hasherIS2_S3_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S3_NS_8equal_toIS2_EELb1EEENS_9allocatorIS3_EEE8__rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeI15DeviceComponentjEENS_22__unordered_map_hasherIS2_S3_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S3_NS_8equal_toIS2_EELb1EEENS_9allocatorIS3_EEE8__rehashEj() called");
    return 0;
}

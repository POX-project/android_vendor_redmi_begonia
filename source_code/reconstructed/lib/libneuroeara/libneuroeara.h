/*
 * Reverse-Engineered ABI Specification for: libneuroeara.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libneuroeara.so
 */

#ifndef BEGONIA_RE_LIBNEUROEARA_H
#define BEGONIA_RE_LIBNEUROEARA_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: ANeuroEara_setExecutionPreference */
/* Demangled: ANeuroEara_setExecutionPreference */
int ANeuroEara_setExecutionPreference(void);

/* Symbol: _ZN16NeuroEaraManager16notifyEaraJobEndEiyb */
/* Demangled: NeuroEaraManager::notifyEaraJobEnd(int, unsigned long long, bool) */
int _ZN16NeuroEaraManager16notifyEaraJobEndEiyb(void);

/* Symbol: _ZNSt3__16vectorINS0_IiNS_9allocatorIiEEEENS1_IS3_EEEC2ERKS5_ */
/* Demangled: std::__1::vector<std::__1::vector<int, std::__1::allocator<int> >, std::__1::allocator<std::__1::vector<int, std::__1::allocator<int> > > >::vector(std::__1::vector<std::__1::vector<int, std::__1::allocator<int> >, std::__1::allocator<std::__1::vector<int, std::__1::allocator<int> > > > const&) */
int _ZNSt3__16vectorINS0_IiNS_9allocatorIiEEEENS1_IS3_EEEC2ERKS5_(void);

/* Symbol: ANeuroEara_configSuspendParams */
/* Demangled: ANeuroEara_configSuspendParams */
int ANeuroEara_configSuspendParams(void);

/* Symbol: ANeuroEara_isEaraQosSupported */
/* Demangled: ANeuroEara_isEaraQosSupported */
int ANeuroEara_isEaraQosSupported(void);

/* Symbol: ANeuroEara_notifyExecutionEnd_2_1 */
/* Demangled: ANeuroEara_notifyExecutionEnd_2_1 */
int ANeuroEara_notifyExecutionEnd_2_1(void);

/* Symbol: _ZZ16getEaraLibHandlevE11eara_handle */
/* Demangled: getEaraLibHandle()::eara_handle */
extern void* _ZZ16getEaraLibHandlevE11eara_handle;

/* Symbol: ANeuroEara_getEaraUsage */
/* Demangled: ANeuroEara_getEaraUsage */
int ANeuroEara_getEaraUsage(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeI15DeviceComponentiEENS_22__unordered_map_hasherIS2_S3_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S3_NS_8equal_toIS2_EELb1EEENS_9allocatorIS3_EEE6rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<DeviceComponent, int>, std::__1::__unordered_map_hasher<DeviceComponent, std::__1::__hash_value_type<DeviceComponent, int>, std::__1::hash<DeviceComponent>, true>, std::__1::__unordered_map_equal<DeviceComponent, std::__1::__hash_value_type<DeviceComponent, int>, std::__1::equal_to<DeviceComponent>, true>, std::__1::allocator<std::__1::__hash_value_type<DeviceComponent, int> > >::rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeI15DeviceComponentiEENS_22__unordered_map_hasherIS2_S3_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S3_NS_8equal_toIS2_EELb1EEENS_9allocatorIS3_EEE6rehashEj(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE15DeviceComponentEENS_22__unordered_map_hasherIS7_S9_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S9_NS_8equal_toIS7_EELb1EEENS5_IS9_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSO_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS9_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, DeviceComponent>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, DeviceComponent>, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, DeviceComponent>, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, DeviceComponent>, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, DeviceComponent> > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>, std::__1::tuple<> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE15DeviceComponentEENS_22__unordered_map_hasherIS7_S9_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S9_NS_8equal_toIS7_EELb1EEENS5_IS9_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSO_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS9_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__16vectorINS0_IyNS_9allocatorIyEEEENS1_IS3_EEE8__appendEj */
/* Demangled: std::__1::vector<std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> >, std::__1::allocator<std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> > > >::__append(unsigned int) */
int _ZNSt3__16vectorINS0_IyNS_9allocatorIyEEEENS1_IS3_EEE8__appendEj(void);

/* Symbol: _ZNSt3__16vectorIyNS_9allocatorIyEEE8__appendEj */
/* Demangled: std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> >::__append(unsigned int) */
int _ZNSt3__16vectorIyNS_9allocatorIyEEE8__appendEj(void);

/* Symbol: _ZN16NeuroEaraManager23getAverageExecutionTimeERNSt3__16vectorINS1_IyNS0_9allocatorIyEEEENS2_IS4_EEEE */
/* Demangled: NeuroEaraManager::getAverageExecutionTime(std::__1::vector<std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> >, std::__1::allocator<std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> > > >&) */
int _ZN16NeuroEaraManager23getAverageExecutionTimeERNSt3__16vectorINS1_IyNS0_9allocatorIyEEEENS2_IS4_EEEE(void);

/* Symbol: _ZN16NeuroEaraManagerC1ERNSt3__16vectorINS0_12basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEENS5_IS7_EEEE */
/* Demangled: NeuroEaraManager::NeuroEaraManager(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >&) */
int _ZN16NeuroEaraManagerC1ERNSt3__16vectorINS0_12basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEENS5_IS7_EEEE(void);

/* Symbol: _ZN16NeuroEaraManagerD2Ev */
/* Demangled: NeuroEaraManager::~NeuroEaraManager() */
int _ZN16NeuroEaraManagerD2Ev(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE24__emplace_back_slow_pathIJiEEEvDpOT_ */
/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__emplace_back_slow_path<int>(int&&) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE24__emplace_back_slow_pathIJiEEEvDpOT_(void);

/* Symbol: ANeuroEara_getAverageExecutionTime */
/* Demangled: ANeuroEara_getAverageExecutionTime */
int ANeuroEara_getAverageExecutionTime(void);

/* Symbol: _ZN16NeuroEaraManager19notifyExecutionFailEiyj */
/* Demangled: NeuroEaraManager::notifyExecutionFail(int, unsigned long long, unsigned int) */
int _ZN16NeuroEaraManager19notifyExecutionFailEiyj(void);

/* Symbol: _ZN16NeuroEaraManager22notifyExecutionEnd_2_1EiyRNSt3__16vectorIbNS0_9allocatorIbEEEERNS1_IyNS2_IyEEEERNS1_IiNS2_IiEEEESB_ */
/* Demangled: NeuroEaraManager::notifyExecutionEnd_2_1(int, unsigned long long, std::__1::vector<bool, std::__1::allocator<bool> >&, std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> >&, std::__1::vector<int, std::__1::allocator<int> >&, std::__1::vector<int, std::__1::allocator<int> >&) */
int _ZN16NeuroEaraManager22notifyExecutionEnd_2_1EiyRNSt3__16vectorIbNS0_9allocatorIbEEEERNS1_IyNS2_IyEEEERNS1_IiNS2_IiEEEESB_(void);

/* Symbol: _ZN16NeuroEaraManagerC2ERNSt3__16vectorINS0_12basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEENS5_IS7_EEEE */
/* Demangled: NeuroEaraManager::NeuroEaraManager(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >&) */
int _ZN16NeuroEaraManagerC2ERNSt3__16vectorINS0_12basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEENS5_IS7_EEEE(void);

/* Symbol: _ZN16NeuroEaraManager12getEaraUsageENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPiS7_ */
/* Demangled: NeuroEaraManager::getEaraUsage(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int*, int*) */
int _ZN16NeuroEaraManager12getEaraUsageENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPiS7_(void);

/* Symbol: _ZN16NeuroEaraManager14getJobPriorityEPi */
/* Demangled: NeuroEaraManager::getJobPriority(int*) */
int _ZN16NeuroEaraManager14getJobPriorityEPi(void);

/* Symbol: _ZN16NeuroEaraManager24notifyExecutionBegin_2_1EiyRNSt3__16vectorIiNS0_9allocatorIiEEEERNS1_INS1_IyNS2_IyEEEENS2_IS7_EEEE */
/* Demangled: NeuroEaraManager::notifyExecutionBegin_2_1(int, unsigned long long, std::__1::vector<int, std::__1::allocator<int> >&, std::__1::vector<std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> >, std::__1::allocator<std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> > > >&) */
int _ZN16NeuroEaraManager24notifyExecutionBegin_2_1EiyRNSt3__16vectorIiNS0_9allocatorIiEEEERNS1_INS1_IyNS2_IyEEEENS2_IS7_EEEE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE15DeviceComponentEENS_22__unordered_map_hasherIS7_S9_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S9_NS_8equal_toIS7_EELb1EEENS5_IS9_EEE6rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, DeviceComponent>, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, DeviceComponent>, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, DeviceComponent>, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, DeviceComponent> > >::rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE15DeviceComponentEENS_22__unordered_map_hasherIS7_S9_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S9_NS_8equal_toIS7_EELb1EEENS5_IS9_EEE6rehashEj(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeI15DeviceComponentjEENS_22__unordered_map_hasherIS2_S3_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S3_NS_8equal_toIS2_EELb1EEENS_9allocatorIS3_EEE6rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<DeviceComponent, unsigned int>, std::__1::__unordered_map_hasher<DeviceComponent, std::__1::__hash_value_type<DeviceComponent, unsigned int>, std::__1::hash<DeviceComponent>, true>, std::__1::__unordered_map_equal<DeviceComponent, std::__1::__hash_value_type<DeviceComponent, unsigned int>, std::__1::equal_to<DeviceComponent>, true>, std::__1::allocator<std::__1::__hash_value_type<DeviceComponent, unsigned int> > >::rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeI15DeviceComponentjEENS_22__unordered_map_hasherIS2_S3_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S3_NS_8equal_toIS2_EELb1EEENS_9allocatorIS3_EEE6rehashEj(void);

/* Symbol: _ZNSt3__16vectorIyNS_9allocatorIyEEE6assignIPyEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIyNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
/* Demangled: _ZNSt3__16vectorIyNS_9allocatorIyEEE6assignIPyEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIyNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
int _ZNSt3__16vectorIyNS_9allocatorIyEEE6assignIPyEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIyNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void);

/* Symbol: _ZN16NeuroEaraManager12getEaraUsageE15DeviceComponentPiS1_ */
/* Demangled: NeuroEaraManager::getEaraUsage(DeviceComponent, int*, int*) */
int _ZN16NeuroEaraManager12getEaraUsageE15DeviceComponentPiS1_(void);

/* Symbol: ANeuroEara_notifyExecutionEnd */
/* Demangled: ANeuroEara_notifyExecutionEnd */
int ANeuroEara_notifyExecutionEnd(void);

/* Symbol: ANeuroEara_notifyExecutionFail */
/* Demangled: ANeuroEara_notifyExecutionFail */
int ANeuroEara_notifyExecutionFail(void);

/* Symbol: ANeuroEara_suggestOffload */
/* Demangled: ANeuroEara_suggestOffload */
int ANeuroEara_suggestOffload(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE8__appendEj */
/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__append(unsigned int) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE8__appendEj(void);

/* Symbol: ANeuroEara_create */
/* Demangled: ANeuroEara_create */
int ANeuroEara_create(void);

/* Symbol: ANeuroEara_delete */
/* Demangled: ANeuroEara_delete */
int ANeuroEara_delete(void);

/* Symbol: _ZN16NeuroEaraManager14suggestOffloadENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPb */
/* Demangled: NeuroEaraManager::suggestOffload(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool*) */
int _ZN16NeuroEaraManager14suggestOffloadENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPb(void);

/* Symbol: _ZN16NeuroEaraManagerD1Ev */
/* Demangled: NeuroEaraManager::~NeuroEaraManager() */
int _ZN16NeuroEaraManagerD1Ev(void);

/* Symbol: _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned int) */
int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j(void);

/* Symbol: _ZN16NeuroEaraManager14setCompilationERNSt3__16vectorINS0_12basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEENS5_IS7_EEEE */
/* Demangled: NeuroEaraManager::setCompilation(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >&) */
int _ZN16NeuroEaraManager14setCompilationERNSt3__16vectorINS0_12basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEENS5_IS7_EEEE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeI15DeviceComponentiEENS_22__unordered_map_hasherIS2_S3_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S3_NS_8equal_toIS2_EELb1EEENS_9allocatorIS3_EEE8__rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<DeviceComponent, int>, std::__1::__unordered_map_hasher<DeviceComponent, std::__1::__hash_value_type<DeviceComponent, int>, std::__1::hash<DeviceComponent>, true>, std::__1::__unordered_map_equal<DeviceComponent, std::__1::__hash_value_type<DeviceComponent, int>, std::__1::equal_to<DeviceComponent>, true>, std::__1::allocator<std::__1::__hash_value_type<DeviceComponent, int> > >::__rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeI15DeviceComponentiEENS_22__unordered_map_hasherIS2_S3_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S3_NS_8equal_toIS2_EELb1EEENS_9allocatorIS3_EEE8__rehashEj(void);

/* Symbol: ANeuroEara_suggestSuspendTime */
/* Demangled: ANeuroEara_suggestSuspendTime */
int ANeuroEara_suggestSuspendTime(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeI15DeviceComponentiEENS_22__unordered_map_hasherIS2_S3_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S3_NS_8equal_toIS2_EELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIS2_JRKNS_21piecewise_construct_tENS_5tupleIJRKS2_EEENSJ_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS3_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<DeviceComponent, int>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<DeviceComponent, int>, std::__1::__unordered_map_hasher<DeviceComponent, std::__1::__hash_value_type<DeviceComponent, int>, std::__1::hash<DeviceComponent>, true>, std::__1::__unordered_map_equal<DeviceComponent, std::__1::__hash_value_type<DeviceComponent, int>, std::__1::equal_to<DeviceComponent>, true>, std::__1::allocator<std::__1::__hash_value_type<DeviceComponent, int> > >::__emplace_unique_key_args<DeviceComponent, std::__1::piecewise_construct_t const&, std::__1::tuple<DeviceComponent const&>, std::__1::tuple<> >(DeviceComponent const&, std::__1::piecewise_construct_t const&, std::__1::tuple<DeviceComponent const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeI15DeviceComponentiEENS_22__unordered_map_hasherIS2_S3_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S3_NS_8equal_toIS2_EELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIS2_JRKNS_21piecewise_construct_tENS_5tupleIJRKS2_EEENSJ_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS3_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: ANeuroEara_getJobPriority */
/* Demangled: ANeuroEara_getJobPriority */
int ANeuroEara_getJobPriority(void);

/* Symbol: ANeuroEara_notifyExecutionBegin_2_1 */
/* Demangled: ANeuroEara_notifyExecutionBegin_2_1 */
int ANeuroEara_notifyExecutionBegin_2_1(void);

/* Symbol: _ZN16NeuroEaraManager18suggestSuspendTimeERNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPj */
/* Demangled: NeuroEaraManager::suggestSuspendTime(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, unsigned int*) */
int _ZN16NeuroEaraManager18suggestSuspendTimeERNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPj(void);

/* Symbol: _ZN16NeuroEaraManager19configSuspendParamsERNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEij */
/* Demangled: NeuroEaraManager::configSuspendParams(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, int, unsigned int) */
int _ZN16NeuroEaraManager19configSuspendParamsERNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEij(void);

/* Symbol: _ZN16NeuroEaraManager22setExecutionPreferenceE14ExecPreference */
/* Demangled: NeuroEaraManager::setExecutionPreference(ExecPreference) */
int _ZN16NeuroEaraManager22setExecutionPreferenceE14ExecPreference(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeI15DeviceComponentjEENS_22__unordered_map_hasherIS2_S3_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S3_NS_8equal_toIS2_EELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIS2_JRKNS_21piecewise_construct_tENS_5tupleIJRKS2_EEENSJ_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS3_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<DeviceComponent, unsigned int>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<DeviceComponent, unsigned int>, std::__1::__unordered_map_hasher<DeviceComponent, std::__1::__hash_value_type<DeviceComponent, unsigned int>, std::__1::hash<DeviceComponent>, true>, std::__1::__unordered_map_equal<DeviceComponent, std::__1::__hash_value_type<DeviceComponent, unsigned int>, std::__1::equal_to<DeviceComponent>, true>, std::__1::allocator<std::__1::__hash_value_type<DeviceComponent, unsigned int> > >::__emplace_unique_key_args<DeviceComponent, std::__1::piecewise_construct_t const&, std::__1::tuple<DeviceComponent const&>, std::__1::tuple<> >(DeviceComponent const&, std::__1::piecewise_construct_t const&, std::__1::tuple<DeviceComponent const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeI15DeviceComponentjEENS_22__unordered_map_hasherIS2_S3_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S3_NS_8equal_toIS2_EELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIS2_JRKNS_21piecewise_construct_tENS_5tupleIJRKS2_EEENSJ_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS3_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE15DeviceComponentEENS_22__unordered_map_hasherIS7_S9_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S9_NS_8equal_toIS7_EELb1EEENS5_IS9_EEE8__rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, DeviceComponent>, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, DeviceComponent>, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, DeviceComponent>, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, DeviceComponent> > >::__rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE15DeviceComponentEENS_22__unordered_map_hasherIS7_S9_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S9_NS_8equal_toIS7_EELb1EEENS5_IS9_EEE8__rehashEj(void);

/* Symbol: _ZNSt3__16vectorINS0_IyNS_9allocatorIyEEEENS1_IS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
/* Demangled: _ZNSt3__16vectorINS0_IyNS_9allocatorIyEEEENS1_IS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
int _ZNSt3__16vectorINS0_IyNS_9allocatorIyEEEENS1_IS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_(void);

/* Symbol: _Z18isEaraQosSupportedv */
/* Demangled: isEaraQosSupported() */
int _Z18isEaraQosSupportedv(void);

/* Symbol: _ZN16NeuroEaraManager16updateBoostValueERNSt3__16vectorIiNS0_9allocatorIiEEEE */
/* Demangled: NeuroEaraManager::updateBoostValue(std::__1::vector<int, std::__1::allocator<int> >&) */
int _ZN16NeuroEaraManager16updateBoostValueERNSt3__16vectorIiNS0_9allocatorIiEEEE(void);

/* Symbol: _ZN16NeuroEaraManager18notifyEaraJobBeginEiyRNSt3__16vectorIiNS0_9allocatorIiEEEE */
/* Demangled: NeuroEaraManager::notifyEaraJobBegin(int, unsigned long long, std::__1::vector<int, std::__1::allocator<int> >&) */
int _ZN16NeuroEaraManager18notifyEaraJobBeginEiyRNSt3__16vectorIiNS0_9allocatorIiEEEE(void);

/* Symbol: _ZNKSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE15DeviceComponentEENS_22__unordered_map_hasherIS7_S9_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S9_NS_8equal_toIS7_EELb1EEENS5_IS9_EEE4findIS7_EENS_21__hash_const_iteratorIPNS_11__hash_nodeIS9_PvEEEERKT_ */
/* Demangled: std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, DeviceComponent>, void*>*> std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, DeviceComponent>, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, DeviceComponent>, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, DeviceComponent>, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, DeviceComponent> > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const */
int _ZNKSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE15DeviceComponentEENS_22__unordered_map_hasherIS7_S9_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S9_NS_8equal_toIS7_EELb1EEENS5_IS9_EEE4findIS7_EENS_21__hash_const_iteratorIPNS_11__hash_nodeIS9_PvEEEERKT_(void);

/* Symbol: _ZNSt3__113unordered_mapINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE15DeviceComponentNS_4hashIS6_EENS_8equal_toIS6_EENS4_INS_4pairIKS6_S7_EEEEEixERSD_ */
/* Demangled: std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, DeviceComponent, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, DeviceComponent> > >::operator[](std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__113unordered_mapINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE15DeviceComponentNS_4hashIS6_EENS_8equal_toIS6_EENS4_INS_4pairIKS6_S7_EEEEEixERSD_(void);

/* Symbol: _ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::operator<< <char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE(void);

/* Symbol: _ZN16NeuroEaraManager20notifyExecutionBeginEiyRNSt3__16vectorIiNS0_9allocatorIiEEEE */
/* Demangled: NeuroEaraManager::notifyExecutionBegin(int, unsigned long long, std::__1::vector<int, std::__1::allocator<int> >&) */
int _ZN16NeuroEaraManager20notifyExecutionBeginEiyRNSt3__16vectorIiNS0_9allocatorIiEEEE(void);

/* Symbol: _ZNSt3__16vectorINS0_IiNS_9allocatorIiEEEENS1_IS3_EEE8__appendEj */
/* Demangled: std::__1::vector<std::__1::vector<int, std::__1::allocator<int> >, std::__1::allocator<std::__1::vector<int, std::__1::allocator<int> > > >::__append(unsigned int) */
int _ZNSt3__16vectorINS0_IiNS_9allocatorIiEEEENS1_IS3_EEE8__appendEj(void);

/* Symbol: ANeuroEara_notifyExecutionBegin */
/* Demangled: ANeuroEara_notifyExecutionBegin */
int ANeuroEara_notifyExecutionBegin(void);

/* Symbol: _ZN16NeuroEaraManager18notifyExecutionEndEiyRNSt3__16vectorIbNS0_9allocatorIbEEEERNS1_IyNS2_IyEEEERNS1_IiNS2_IiEEEE */
/* Demangled: NeuroEaraManager::notifyExecutionEnd(int, unsigned long long, std::__1::vector<bool, std::__1::allocator<bool> >&, std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> >&, std::__1::vector<int, std::__1::allocator<int> >&) */
int _ZN16NeuroEaraManager18notifyExecutionEndEiyRNSt3__16vectorIbNS0_9allocatorIbEEEERNS1_IyNS2_IyEEEERNS1_IiNS2_IiEEEE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeI15DeviceComponentiEENS_22__unordered_map_hasherIS2_S3_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S3_NS_8equal_toIS2_EELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIS2_JRKNS_21piecewise_construct_tENS_5tupleIJOS2_EEENSJ_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS3_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<DeviceComponent, int>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<DeviceComponent, int>, std::__1::__unordered_map_hasher<DeviceComponent, std::__1::__hash_value_type<DeviceComponent, int>, std::__1::hash<DeviceComponent>, true>, std::__1::__unordered_map_equal<DeviceComponent, std::__1::__hash_value_type<DeviceComponent, int>, std::__1::equal_to<DeviceComponent>, true>, std::__1::allocator<std::__1::__hash_value_type<DeviceComponent, int> > >::__emplace_unique_key_args<DeviceComponent, std::__1::piecewise_construct_t const&, std::__1::tuple<DeviceComponent&&>, std::__1::tuple<> >(DeviceComponent const&, std::__1::piecewise_construct_t const&, std::__1::tuple<DeviceComponent&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeI15DeviceComponentiEENS_22__unordered_map_hasherIS2_S3_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S3_NS_8equal_toIS2_EELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIS2_JRKNS_21piecewise_construct_tENS_5tupleIJOS2_EEENSJ_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS3_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeI15DeviceComponentjEENS_22__unordered_map_hasherIS2_S3_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S3_NS_8equal_toIS2_EELb1EEENS_9allocatorIS3_EEE8__rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<DeviceComponent, unsigned int>, std::__1::__unordered_map_hasher<DeviceComponent, std::__1::__hash_value_type<DeviceComponent, unsigned int>, std::__1::hash<DeviceComponent>, true>, std::__1::__unordered_map_equal<DeviceComponent, std::__1::__hash_value_type<DeviceComponent, unsigned int>, std::__1::equal_to<DeviceComponent>, true>, std::__1::allocator<std::__1::__hash_value_type<DeviceComponent, unsigned int> > >::__rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeI15DeviceComponentjEENS_22__unordered_map_hasherIS2_S3_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S3_NS_8equal_toIS2_EELb1EEENS_9allocatorIS3_EEE8__rehashEj(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBNEUROEARA_H */

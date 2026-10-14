/*
 * Reverse-Engineered ABI Specification for: libged.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libged.so
 */

#ifndef BEGONIA_RE_LIBGED_H
#define BEGONIA_RE_LIBGED_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: ged_create */
/* Demangled: ged_create */
int ged_create(void);

/* Symbol: ged_worker_quit */
/* Demangled: ged_worker_quit */
int ged_worker_quit(void);

/* Symbol: _Z33ged_dvfs_get_dvfs_table_max_levelv */
/* Demangled: ged_dvfs_get_dvfs_table_max_level() */
int _Z33ged_dvfs_get_dvfs_table_max_levelv(void);

/* Symbol: _ZNKSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_3mapIjiNS_4lessIjEENS5_INS_4pairIKjiEEEEEEEENS_19__map_value_compareIS7_SG_NS9_IS7_EELb1EEENS5_ISG_EEE14__count_uniqueIS7_EEjRKT_ */
/* Demangled: unsigned int std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::map<unsigned int, int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, int> > > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::map<unsigned int, int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, int> > > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::map<unsigned int, int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, int> > > > > >::__count_unique<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const */
int _ZNKSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_3mapIjiNS_4lessIjEENS5_INS_4pairIKjiEEEEEEEENS_19__map_value_compareIS7_SG_NS9_IS7_EELb1EEENS5_ISG_EEE14__count_uniqueIS7_EEjRKT_(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::sync() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_3mapIjiNS_4lessIjEENS5_INS_4pairIKjiEEEEEEEENS_19__map_value_compareIS7_SG_NS9_IS7_EELb1EEENS5_ISG_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISQ_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::map<unsigned int, int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, int> > > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::map<unsigned int, int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, int> > > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::map<unsigned int, int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, int> > > > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_3mapIjiNS_4lessIjEENS5_INS_4pairIKjiEEEEEEEENS_19__map_value_compareIS7_SG_NS9_IS7_EELb1EEENS5_ISG_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISQ_EERKT_(void);

/* Symbol: _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_14basic_iostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_14basic_iostreamIcS2_EE;

/* Symbol: _ZTVNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE;

/* Symbol: ged_gpu_hint_cpu */
/* Demangled: ged_gpu_hint_cpu */
int ged_gpu_hint_cpu(void);

/* Symbol: ged_cond_destroy */
/* Demangled: ged_cond_destroy */
int ged_cond_destroy(void);

/* Symbol: ged_boost_host_event */
/* Demangled: ged_boost_host_event */
int ged_boost_host_event(void);

/* Symbol: ged_cond_timed_lock */
/* Demangled: ged_cond_timed_lock */
int ged_cond_timed_lock(void);

/* Symbol: ged_log_print */
/* Demangled: ged_log_print */
int ged_log_print(void);

/* Symbol: ged_dvfs_set_vsync_offset */
/* Demangled: ged_dvfs_set_vsync_offset */
int ged_dvfs_set_vsync_offset(void);

/* Symbol: _Z12ged_create_2v */
/* Demangled: ged_create_2() */
int _Z12ged_create_2v(void);

/* Symbol: ged_ge_set */
/* Demangled: ged_ge_set */
int ged_ge_set(void);

/* Symbol: _Z28ged_vsync_worker_thread_initv */
/* Demangled: ged_vsync_worker_thread_init() */
int _Z28ged_vsync_worker_thread_initv(void);

/* Symbol: ged_bridge_call */
/* Demangled: ged_bridge_call */
int ged_bridge_call(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(void);

/* Symbol: ged_ge_query */
/* Demangled: ged_ge_query */
int ged_ge_query(void);

/* Symbol: ged_swd_create */
/* Demangled: ged_swd_create */
int ged_swd_create(void);

/* Symbol: ged_destroy */
/* Demangled: ged_destroy */
int ged_destroy(void);

/* Symbol: _Z17get_bridge_clientv */
/* Demangled: get_bridge_client() */
int _Z17get_bridge_clientv(void);

/* Symbol: _Z16ged_vsync_workerPv */
/* Demangled: ged_vsync_worker(void*) */
int _Z16ged_vsync_workerPv(void);

/* Symbol: ged_vsync_calibration */
/* Demangled: ged_vsync_calibration */
int ged_vsync_calibration(void);

/* Symbol: _ZN2WL11load_configEPKPKc */
/* Demangled: WL::load_config(char const* const*) */
int _ZN2WL11load_configEPKPKc(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::overflow(int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi(void);

/* Symbol: _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE8_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE8_NS_13basic_ostreamIcS2_EE;

/* Symbol: ged_worker_destroy */
/* Demangled: ged_worker_destroy */
int ged_worker_destroy(void);

/* Symbol: ged_log_connect */
/* Demangled: ged_log_connect */
int ged_log_connect(void);

/* Symbol: ged_vsync_notify */
/* Demangled: ged_vsync_notify */
int ged_vsync_notify(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekpos(std::__1::fpos<mbstate_t>, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj(void);

/* Symbol: ged_worker_add_task */
/* Demangled: ged_worker_add_task */
int ged_worker_add_task(void);

/* Symbol: ged_log_reset */
/* Demangled: ged_log_reset */
int ged_log_reset(void);

/* Symbol: g_worker_cond */
/* Demangled: g_worker_cond */
extern void* g_worker_cond;

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::imbue(std::__1::locale const&) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::pbackfail(int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi(void);

/* Symbol: _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE;

/* Symbol: ged_worker_set_name */
/* Demangled: ged_worker_set_name */
int ged_worker_set_name(void);

/* Symbol: ged_log_tpt_print */
/* Demangled: ged_log_tpt_print */
int ged_log_tpt_print(void);

/* Symbol: ged_swd_push_fence */
/* Demangled: ged_swd_push_fence */
int ged_swd_push_fence(void);

/* Symbol: g_wk_usVsync_period */
/* Demangled: g_wk_usVsync_period */
extern void* g_wk_usVsync_period;

/* Symbol: ged_ge_alloc */
/* Demangled: ged_ge_alloc */
int ged_ge_alloc(void);

/* Symbol: SF_inited */
/* Demangled: SF_inited */
extern void* SF_inited;

/* Symbol: _Z24ged_kpi_queue_buffer_tagPviiiii */
/* Demangled: ged_kpi_queue_buffer_tag(void*, int, int, int, int, int) */
int _Z24ged_kpi_queue_buffer_tagPviiiii(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_3mapIjiNS_4lessIjEENS5_INS_4pairIKjiEEEEEEEENS_19__map_value_compareIS7_SG_NS9_IS7_EELb1EEENS5_ISG_EEE7destroyEPNS_11__tree_nodeISG_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::map<unsigned int, int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, int> > > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::map<unsigned int, int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, int> > > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::map<unsigned int, int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, int> > > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::map<unsigned int, int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, int> > > >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_3mapIjiNS_4lessIjEENS5_INS_4pairIKjiEEEEEEEENS_19__map_value_compareIS7_SG_NS9_IS7_EELb1EEENS5_ISG_EEE7destroyEPNS_11__tree_nodeISG_PvEE(void);

/* Symbol: ged_boost_gpu_freq_ext */
/* Demangled: ged_boost_gpu_freq_ext */
int ged_boost_gpu_freq_ext(void);

/* Symbol: ged_gpu_timestamp */
/* Demangled: ged_gpu_timestamp */
int ged_gpu_timestamp(void);

/* Symbol: ged_cond_create */
/* Demangled: ged_cond_create */
int ged_cond_create(void);

/* Symbol: ged_cond_unlock */
/* Demangled: ged_cond_unlock */
int ged_cond_unlock(void);

/* Symbol: _Z20ged_dvfs_get_loadingv */
/* Demangled: ged_dvfs_get_loading() */
int _Z20ged_dvfs_get_loadingv(void);

/* Symbol: _Z26ged_kpi_dequeue_buffer_tagPviiii */
/* Demangled: ged_kpi_dequeue_buffer_tag(void*, int, int, int, int) */
int _Z26ged_kpi_dequeue_buffer_tagPviiii(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::setbuf(char*, int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev(void);

/* Symbol: _ZNSt3__13mapINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS0_IjiNS_4lessIjEENS4_INS_4pairIKjiEEEEEENS7_IS6_EENS4_INS9_IKS6_SD_EEEEEixERSF_ */
/* Demangled: std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::map<unsigned int, int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, int> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::map<unsigned int, int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, int> > > > > >::operator[](std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__13mapINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS0_IjiNS_4lessIjEENS4_INS_4pairIKjiEEEEEENS7_IS6_EENS4_INS9_IKS6_SD_EEEEEixERSF_(void);

/* Symbol: ged_cond_try_lock */
/* Demangled: ged_cond_try_lock */
int ged_cond_try_lock(void);

/* Symbol: _Z29ged_dvfs_get_freq_info_by_tag12GED_DVFS_TAGPjPm */
/* Demangled: ged_dvfs_get_freq_info_by_tag(GED_DVFS_TAG, unsigned int*, unsigned long*) */
int _Z29ged_dvfs_get_freq_info_by_tag12GED_DVFS_TAGPjPm(void);

/* Symbol: _Z26ged_kpi_acquire_buffer_tagPvii */
/* Demangled: ged_kpi_acquire_buffer_tag(void*, int, int) */
int _Z26ged_kpi_acquire_buffer_tagPvii(void);

/* Symbol: _ZN6GED_WL5pathsE */
/* Demangled: GED_WL::paths */
extern void* _ZN6GED_WL5pathsE;

/* Symbol: _ZTTNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE */
/* Demangled: VTT for std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern void* _ZTTNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE;

/* Symbol: _Z13get_max_boostPj */
/* Demangled: get_max_boost(unsigned int*) */
int _Z13get_max_boostPj(void);

/* Symbol: ged_dvfs_um_return */
/* Demangled: ged_dvfs_um_return */
int ged_dvfs_um_return(void);

/* Symbol: _Z13ged_destroy_2N6vendor8mediatek8hardware3gpu4V1_015GED_HIDL_HANDLEE */
/* Demangled: ged_destroy_2(vendor::mediatek::hardware::gpu::V1_0::GED_HIDL_HANDLE) */
int _Z13ged_destroy_2N6vendor8mediatek8hardware3gpu4V1_015GED_HIDL_HANDLEE(void);

/* Symbol: ged_ge_get */
/* Demangled: ged_ge_get */
int ged_ge_get(void);

/* Symbol: ged_gpu_tuner_get_status */
/* Demangled: ged_gpu_tuner_get_status */
int ged_gpu_tuner_get_status(void);

/* Symbol: ged_notify_sw_vsync */
/* Demangled: ged_notify_sw_vsync */
int ged_notify_sw_vsync(void);

/* Symbol: ged_cond_lock */
/* Demangled: ged_cond_lock */
int ged_cond_lock(void);

/* Symbol: ged_is_in_wl */
/* Demangled: ged_is_in_wl */
int ged_is_in_wl(void);

/* Symbol: ged_frr_query_target_fps */
/* Demangled: ged_frr_query_target_fps */
int ged_frr_query_target_fps(void);

/* Symbol: ged_worker_create */
/* Demangled: ged_worker_create */
int ged_worker_create(void);

/* Symbol: _Z15ged_dvfs_policyPvmP26GED_DVFS_UM_QUERY_PACK_TAG */
/* Demangled: ged_dvfs_policy(void*, unsigned long, GED_DVFS_UM_QUERY_PACK_TAG*) */
int _Z15ged_dvfs_policyPvmP26GED_DVFS_UM_QUERY_PACK_TAG(void);

/* Symbol: ghGEDLogDVFS */
/* Demangled: ghGEDLogDVFS */
extern void* ghGEDLogDVFS;

/* Symbol: ged_bridge_open */
/* Demangled: ged_bridge_open */
int ged_bridge_open(void);

/* Symbol: _Z18ged_dvfs_do_um_calPvxP26GED_DVFS_UM_QUERY_PACK_TAG */
/* Demangled: ged_dvfs_do_um_cal(void*, long long, GED_DVFS_UM_QUERY_PACK_TAG*) */
int _Z18ged_dvfs_do_um_calPvxP26GED_DVFS_UM_QUERY_PACK_TAG(void);

/* Symbol: bSF_stable */
/* Demangled: bSF_stable */
extern void* bSF_stable;

/* Symbol: _Z14ged_kpi_createy */
/* Demangled: ged_kpi_create(unsigned long long) */
int _Z14ged_kpi_createy(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjiEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, int>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, int>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIjiEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE(void);

/* Symbol: ged_boost_gpu_freq */
/* Demangled: ged_boost_gpu_freq */
int ged_boost_gpu_freq(void);

/* Symbol: ged_query_dvfs_freq_pred */
/* Demangled: ged_query_dvfs_freq_pred */
int ged_query_dvfs_freq_pred(void);

/* Symbol: ged_worker_get_hold_count */
/* Demangled: ged_worker_get_hold_count */
int ged_worker_get_hold_count(void);

/* Symbol: ged_swd_destroy */
/* Demangled: ged_swd_destroy */
int ged_swd_destroy(void);

/* Symbol: _ZN2WL12process_lineENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE */
/* Demangled: WL::process_line(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN2WL12process_lineENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev(void);

/* Symbol: _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE;

/* Symbol: g_wk_Ged */
/* Demangled: g_wk_Ged */
extern void* g_wk_Ged;

/* Symbol: ged_hint_force_mdp */
/* Demangled: ged_hint_force_mdp */
int ged_hint_force_mdp(void);

/* Symbol: ged_query_info */
/* Demangled: ged_query_info */
int ged_query_info(void);

/* Symbol: ged_bridge_close */
/* Demangled: ged_bridge_close */
int ged_bridge_close(void);

/* Symbol: ged_dvfs_probe */
/* Demangled: ged_dvfs_probe */
int ged_dvfs_probe(void);

/* Symbol: ged_event_notify */
/* Demangled: ged_event_notify */
int ged_event_notify(void);

/* Symbol: _Z15ged_kpi_destroyPv */
/* Demangled: ged_kpi_destroy(void*) */
int _Z15ged_kpi_destroyPv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::underflow() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: ged_wait_for_hw_vsync */
/* Demangled: ged_wait_for_hw_vsync */
int ged_wait_for_hw_vsync(void);

/* Symbol: ged_log_disconnect */
/* Demangled: ged_log_disconnect */
int ged_log_disconnect(void);

/* Symbol: g_worker_mutex */
/* Demangled: g_worker_mutex */
extern void* g_worker_mutex;

/* Symbol: tid_worker */
/* Demangled: tid_worker */
extern void* tid_worker;

__END_DECLS

#endif /* BEGONIA_RE_LIBGED_H */

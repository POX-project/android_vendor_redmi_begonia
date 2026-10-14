/*
 * Reverse-Engineered ABI Specification for: libpowerhal.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libpowerhal.so
 */

#ifndef BEGONIA_RE_LIBPOWERHAL_H
#define BEGONIA_RE_LIBPOWERHAL_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: set_HSR_mode */
/* Demangled: set_HSR_mode */
int set_HSR_mode(void);

/* Symbol: _ZNSt3__114__split_bufferINS_6vectorI12xml_activityNS_9allocatorIS2_EEEERNS3_IS5_EEEC2EjjS7_ */
/* Demangled: std::__1::__split_buffer<std::__1::vector<xml_activity, std::__1::allocator<xml_activity> >, std::__1::allocator<std::__1::vector<xml_activity, std::__1::allocator<xml_activity> > >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<std::__1::vector<xml_activity, std::__1::allocator<xml_activity> > >&) */
int _ZNSt3__114__split_bufferINS_6vectorI12xml_activityNS_9allocatorIS2_EEEERNS3_IS5_EEEC2EjjS7_(void);

/* Symbol: MI_HNext */
/* Demangled: MI_HNext */
int MI_HNext(void);

/* Symbol: pmutex_lock */
/* Demangled: pmutex_lock */
int pmutex_lock(void);

/* Symbol: _Z15start_scn_timeriii */
/* Demangled: start_scn_timer(int, int, int) */
int _Z15start_scn_timeriii(void);

/* Symbol: _Z11getHintNamei */
/* Demangled: getHintName(int) */
int _Z11getHintNamei(void);

/* Symbol: _Z15setCfpUpLoadingiPv */
/* Demangled: setCfpUpLoading(int, void*) */
int _Z15setCfpUpLoadingiPv(void);

/* Symbol: _Z18perfNotifyAppStatePKcS0_iii */
/* Demangled: perfNotifyAppState(char const*, char const*, int, int, int) */
int _Z18perfNotifyAppStatePKcS0_iii(void);

/* Symbol: notifyCmdMode */
/* Demangled: notifyCmdMode */
int notifyCmdMode(void);

/* Symbol: _ZNSt3__16vectorI12xml_activityNS_9allocatorIS1_EEE6insertINS_11__wrap_iterIPS1_EEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsISA_E9referenceEEE5valueES8_E4typeENS6_IPKS1_EESA_SA_ */
/* Demangled: _ZNSt3__16vectorI12xml_activityNS_9allocatorIS1_EEE6insertINS_11__wrap_iterIPS1_EEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsISA_E9referenceEEE5valueES8_E4typeENS6_IPKS1_EESA_SA_ */
int _ZNSt3__16vectorI12xml_activityNS_9allocatorIS1_EEE6insertINS_11__wrap_iterIPS1_EEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsISA_E9referenceEEE5valueES8_E4typeENS6_IPKS1_EESA_SA_(void);

/* Symbol: MI_DlConcat */
/* Demangled: MI_DlConcat */
int MI_DlConcat(void);

/* Symbol: powerd_ipc_recvcmd */
/* Demangled: powerd_ipc_recvcmd */
int powerd_ipc_recvcmd(void);

/* Symbol: _ZNSt3__16vectorI12xml_activityNS_9allocatorIS1_EEE13__move_assignERS4_NS_17integral_constantIbLb1EEE */
/* Demangled: std::__1::vector<xml_activity, std::__1::allocator<xml_activity> >::__move_assign(std::__1::vector<xml_activity, std::__1::allocator<xml_activity> >&, std::__1::integral_constant<bool, true>) */
int _ZNSt3__16vectorI12xml_activityNS_9allocatorIS1_EEE13__move_assignERS4_NS_17integral_constantIbLb1EEE(void);

/* Symbol: pmalloc */
/* Demangled: pmalloc */
int pmalloc(void);

/* Symbol: pletoh32 */
/* Demangled: pletoh32 */
int pletoh32(void);

/* Symbol: _Z15setThermalBreakPKc */
/* Demangled: setThermalBreak(char const*) */
int _Z15setThermalBreakPKc(void);

/* Symbol: _Z25perfservice_xmlparse_initv */
/* Demangled: perfservice_xmlparse_init() */
int _Z25perfservice_xmlparse_initv(void);

/* Symbol: libpowerhal_SetSysInfo */
/* Demangled: libpowerhal_SetSysInfo */
int libpowerhal_SetSysInfo(void);

/* Symbol: func */
/* Demangled: func */
extern void* func;

/* Symbol: _Z12loadRscTablei */
/* Demangled: loadRscTable(int) */
int _Z12loadRscTablei(void);

/* Symbol: _Z13setGpuFreqMaxPKci */
/* Demangled: setGpuFreqMax(char const*, int) */
int _Z13setGpuFreqMaxPKci(void);

/* Symbol: _Z14Scn_cmdSettingPcii */
/* Demangled: Scn_cmdSetting(char*, int, int) */
int _Z14Scn_cmdSettingPcii(void);

/* Symbol: _ZN7android2spIN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProviderEED2Ev */
/* Demangled: android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider>::~sp() */
int _ZN7android2spIN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProviderEED2Ev(void);

/* Symbol: ptimer_delete */
/* Demangled: ptimer_delete */
int ptimer_delete(void);

/* Symbol: _Z11reset_timeri */
/* Demangled: reset_timer(int) */
int _Z11reset_timeri(void);

/* Symbol: _Z14getHintRscSizei */
/* Demangled: getHintRscSize(int) */
int _Z14getHintRscSizei(void);

/* Symbol: netd_unset_block_uid */
/* Demangled: netd_unset_block_uid */
int netd_unset_block_uid(void);

/* Symbol: _ZNSt3__16vectorI12xml_activityNS_9allocatorIS1_EEE6assignINS_11__wrap_iterIPS1_EEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
/* Demangled: _ZNSt3__16vectorI12xml_activityNS_9allocatorIS1_EEE6assignINS_11__wrap_iterIPS1_EEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
int _ZNSt3__16vectorI12xml_activityNS_9allocatorIS1_EEE6assignINS_11__wrap_iterIPS1_EEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_(void);

/* Symbol: pmutex_destroy */
/* Demangled: pmutex_destroy */
int pmutex_destroy(void);

/* Symbol: _Z9fstb_initi */
/* Demangled: fstb_init(int) */
int _Z9fstb_initi(void);

/* Symbol: powerd_ipc_init_pscmd */
/* Demangled: powerd_ipc_init_pscmd */
int powerd_ipc_init_pscmd(void);

/* Symbol: _Z15checkDrvSupportP8tDrvInfo */
/* Demangled: checkDrvSupport(tDrvInfo*) */
int _Z15checkDrvSupportP8tDrvInfo(void);

/* Symbol: pmutex_init */
/* Demangled: pmutex_init */
int pmutex_init(void);

/* Symbol: powerd_cmd_unmarshall */
/* Demangled: powerd_cmd_unmarshall */
int powerd_cmd_unmarshall(void);

/* Symbol: _Z16wifi_low_latencyiPv */
/* Demangled: wifi_low_latency(int, void*) */
int _Z16wifi_low_latencyiPv(void);

/* Symbol: MI_DlCount */
/* Demangled: MI_DlCount */
int MI_DlCount(void);

/* Symbol: _Z13perfScnUpdateii */
/* Demangled: perfScnUpdate(int, int) */
int _Z13perfScnUpdateii(void);

/* Symbol: _Z22set_gpu_freq_level_maxi */
/* Demangled: set_gpu_freq_level_max(int) */
int _Z22set_gpu_freq_level_maxi(void);

/* Symbol: _Z16perfLibpowerInitv */
/* Demangled: perfLibpowerInit() */
int _Z16perfLibpowerInitv(void);

/* Symbol: notify_rild_crash_pid_reset */
/* Demangled: notify_rild_crash_pid_reset */
int notify_rild_crash_pid_reset(void);

/* Symbol: MI_DlInsertBefore */
/* Demangled: MI_DlInsertBefore */
int MI_DlInsertBefore(void);

/* Symbol: powerd_post_req */
/* Demangled: powerd_post_req */
int powerd_post_req(void);

/* Symbol: _Z14perfGetHintRsciPiS_ */
/* Demangled: perfGetHintRsc(int, int*, int*) */
int _Z14perfGetHintRsciPiS_(void);

/* Symbol: _Z17get_cpu_freq_infoiPiS_PS_ */
/* Demangled: get_cpu_freq_info(int, int*, int*, int**) */
int _Z17get_cpu_freq_infoiPiS_PS_(void);

/* Symbol: _Z20set_gpu_power_policyiPv */
/* Demangled: set_gpu_power_policy(int, void*) */
int _Z20set_gpu_power_policyiPv(void);

/* Symbol: notify_rild_cert_pid_reset */
/* Demangled: notify_rild_cert_pid_reset */
int notify_rild_cert_pid_reset(void);

/* Symbol: pmutex_create */
/* Demangled: pmutex_create */
int pmutex_create(void);

/* Symbol: powerd_ipc_sendcmd */
/* Demangled: powerd_ipc_sendcmd */
int powerd_ipc_sendcmd(void);

/* Symbol: __divmoddi4 */
/* Demangled: __divmoddi4 */
int __divmoddi4(void);

/* Symbol: _Z18setFstbSoftFpsHighiPv */
/* Demangled: setFstbSoftFpsHigh(int, void*) */
int _Z18setFstbSoftFpsHighiPv(void);

/* Symbol: notify_rild_opt_update */
/* Demangled: notify_rild_opt_update */
int notify_rild_opt_update(void);

/* Symbol: _keyofPTIMER_ */
/* Demangled: _keyofPTIMER_ */
int _keyofPTIMER_(void);

/* Symbol: _Z19bt_a2dp_low_latencyiPv */
/* Demangled: bt_a2dp_low_latency(int, void*) */
int _Z19bt_a2dp_low_latencyiPv(void);

/* Symbol: _Z19perfUserScnCheckAllv */
/* Demangled: perfUserScnCheckAll() */
int _Z19perfUserScnCheckAllv(void);

/* Symbol: tConTable */
/* Demangled: tConTable */
extern void* tConTable;

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: libpowerhal_ExitWorker */
/* Demangled: libpowerhal_ExitWorker */
int libpowerhal_ExitWorker(void);

/* Symbol: _Z20powerd_core_pre_initv */
/* Demangled: powerd_core_pre_init() */
int _Z20powerd_core_pre_initv(void);

/* Symbol: powerd_core_timer_handle */
/* Demangled: powerd_core_timer_handle */
int powerd_core_timer_handle(void);

/* Symbol: _Z13get_task_commPKcPc */
/* Demangled: get_task_comm(char const*, char*) */
int _Z13get_task_commPKcPc(void);

/* Symbol: _Z21perfUserScnDisableAllv */
/* Demangled: perfUserScnDisableAll() */
int _Z21perfUserScnDisableAllv(void);

/* Symbol: _ZNSt3__16vectorINS0_I12xml_activityNS_9allocatorIS1_EEEENS2_IS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS5_EE */
/* Demangled: std::__1::vector<std::__1::vector<xml_activity, std::__1::allocator<xml_activity> >, std::__1::allocator<std::__1::vector<xml_activity, std::__1::allocator<xml_activity> > > >::__swap_out_circular_buffer(std::__1::__split_buffer<std::__1::vector<xml_activity, std::__1::allocator<xml_activity> >, std::__1::allocator<std::__1::vector<xml_activity, std::__1::allocator<xml_activity> > >&>&) */
int _ZNSt3__16vectorINS0_I12xml_activityNS_9allocatorIS1_EEEENS2_IS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS5_EE(void);

/* Symbol: _Z9set_valuePKci */
/* Demangled: set_value(char const*, int) */
int _Z9set_valuePKci(void);

/* Symbol: _Z13get_str_valuePKcPci */
/* Demangled: get_str_value(char const*, char*, int) */
int _Z13get_str_valuePKcPci(void);

/* Symbol: MI_PQPopHead */
/* Demangled: MI_PQPopHead */
int MI_PQPopHead(void);

/* Symbol: notify_rild_game_event */
/* Demangled: notify_rild_game_event */
int notify_rild_game_event(void);

/* Symbol: _Z13get_int_valuePKc */
/* Demangled: get_int_value(char const*) */
int _Z13get_int_valuePKc(void);

/* Symbol: MI_HFind */
/* Demangled: MI_HFind */
int MI_HFind(void);

/* Symbol: power_cmd_create */
/* Demangled: power_cmd_create */
int power_cmd_create(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: SetOnePacketLink */
/* Demangled: SetOnePacketLink */
int SetOnePacketLink(void);

/* Symbol: _Z17load_thm_api_stopiPv */
/* Demangled: load_thm_api_stop(int, void*) */
int _Z17load_thm_api_stopiPv(void);

/* Symbol: deleteAllDupPackerLink */
/* Demangled: deleteAllDupPackerLink */
int deleteAllDupPackerLink(void);

/* Symbol: _ZNSt3__16vectorI12xml_activityNS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EEPS1_ */
/* Demangled: std::__1::vector<xml_activity, std::__1::allocator<xml_activity> >::__swap_out_circular_buffer(std::__1::__split_buffer<xml_activity, std::__1::allocator<xml_activity>&>&, xml_activity*) */
int _ZNSt3__16vectorI12xml_activityNS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EEPS1_(void);

/* Symbol: _Z10cmdSettingiPcP8tScnNodeiPi */
/* Demangled: cmdSetting(int, char*, tScnNode*, int, int*) */
int _Z10cmdSettingiPcP8tScnNodeiPi(void);

/* Symbol: _Z12loadConTablePKc */
/* Demangled: loadConTable(char const*) */
int _Z12loadConTablePKc(void);

/* Symbol: __aeabi_ldivmod */
/* Demangled: __aeabi_ldivmod */
int __aeabi_ldivmod(void);

/* Symbol: death_recipicent */
/* Demangled: death_recipicent */
extern void* death_recipicent;

/* Symbol: MI_DlPopTail */
/* Demangled: MI_DlPopTail */
int MI_DlPopTail(void);

/* Symbol: power_msg_perf_lock_acq */
/* Demangled: power_msg_perf_lock_acq */
int power_msg_perf_lock_acq(void);

/* Symbol: _Z18compare_descendingPKvS0_ */
/* Demangled: compare_descending(void const*, void const*) */
int _Z18compare_descendingPKvS0_(void);

/* Symbol: _Z13checkConTablev */
/* Demangled: checkConTable() */
int _Z13checkConTablev(void);

/* Symbol: _Z42perfservice_xmlparse_get_data_applist_filev */
/* Demangled: perfservice_xmlparse_get_data_applist_file() */
int _Z42perfservice_xmlparse_get_data_applist_filev(void);

/* Symbol: _ZN7android2spIN6vendor8mediatek8hardware9netdagent4V1_010INetdagentEEaSEOS7_ */
/* Demangled: android::sp<vendor::mediatek::hardware::netdagent::V1_0::INetdagent>::operator=(android::sp<vendor::mediatek::hardware::netdagent::V1_0::INetdagent>&&) */
int _ZN7android2spIN6vendor8mediatek8hardware9netdagent4V1_010INetdagentEEaSEOS7_(void);

/* Symbol: MI_HInit */
/* Demangled: MI_HInit */
int MI_HInit(void);

/* Symbol: _comparePTIMER_ */
/* Demangled: _comparePTIMER_ */
int _comparePTIMER_(void);

/* Symbol: powerd_cmd_marshall */
/* Demangled: powerd_cmd_marshall */
int powerd_cmd_marshall(void);

/* Symbol: powerd_core_init */
/* Demangled: powerd_core_init */
int powerd_core_init(void);

/* Symbol: _Z11perfDumpAlli */
/* Demangled: perfDumpAll(int) */
int _Z11perfDumpAlli(void);

/* Symbol: ptimer_start */
/* Demangled: ptimer_start */
int ptimer_start(void);

/* Symbol: _Z11set_str_cpyPcPKci */
/* Demangled: set_str_cpy(char*, char const*, int) */
int _Z11set_str_cpyPcPKci(void);

/* Symbol: _Z18setClusterHardFreqPKciPiS1_ */
/* Demangled: setClusterHardFreq(char const*, int, int*, int*) */
int _Z18setClusterHardFreqPKciPiS1_(void);

/* Symbol: _Z9set_valuePKcS0_ */
/* Demangled: set_value(char const*, char const*) */
int _Z9set_valuePKcS0_(void);

/* Symbol: netd_set_block_uid */
/* Demangled: netd_set_block_uid */
int netd_set_block_uid(void);

/* Symbol: _Z31update_activity_whitelist_tablePKci */
/* Demangled: update_activity_whitelist_table(char const*, int) */
int _Z31update_activity_whitelist_tablePKci(void);

/* Symbol: _Z10getHintCmdiPc */
/* Demangled: getHintCmd(int, char*) */
int _Z10getHintCmdiPc(void);

/* Symbol: libpowerhal_LockRel */
/* Demangled: libpowerhal_LockRel */
int libpowerhal_LockRel(void);

/* Symbol: powerd_cmd_destory */
/* Demangled: powerd_cmd_destory */
int powerd_cmd_destory(void);

/* Symbol: notify_rild_app_status */
/* Demangled: notify_rild_app_status */
int notify_rild_app_status(void);

/* Symbol: _Z11perfLockAcqPiiiiiii */
/* Demangled: perfLockAcq(int*, int, int, int, int, int, int) */
int _Z11perfLockAcqPiiiiiii(void);

/* Symbol: _Z28set_video_color_convert_modeiPv */
/* Demangled: set_video_color_convert_mode(int, void*) */
int _Z28set_video_color_convert_modeiPv(void);

/* Symbol: _ZNSt3__114__split_bufferINS_6vectorI12xml_activityNS_9allocatorIS2_EEEERNS3_IS5_EEED2Ev */
/* Demangled: std::__1::__split_buffer<std::__1::vector<xml_activity, std::__1::allocator<xml_activity> >, std::__1::allocator<std::__1::vector<xml_activity, std::__1::allocator<xml_activity> > >&>::~__split_buffer() */
int _ZNSt3__114__split_bufferINS_6vectorI12xml_activityNS_9allocatorIS2_EEEERNS3_IS5_EEED2Ev(void);

/* Symbol: MI_HFirst */
/* Demangled: MI_HFirst */
int MI_HFirst(void);

/* Symbol: pfree */
/* Demangled: pfree */
int pfree(void);

/* Symbol: ptimer_stop */
/* Demangled: ptimer_stop */
int ptimer_stop(void);

/* Symbol: _Z10find_timerii */
/* Demangled: find_timer(int, int) */
int _Z10find_timerii(void);

/* Symbol: _Z15setClusterCoresPKciiPiS1_ */
/* Demangled: setClusterCores(char const*, int, int, int*, int*) */
int _Z15setClusterCoresPKciiPiS1_(void);

/* Symbol: libpowerhal_UserScnRestoreAll */
/* Demangled: libpowerhal_UserScnRestoreAll */
int libpowerhal_UserScnRestoreAll(void);

/* Symbol: power_msg_cus_lock_hint */
/* Demangled: power_msg_cus_lock_hint */
int power_msg_cus_lock_hint(void);

/* Symbol: _Z14perfSetSysInfoiPKc */
/* Demangled: perfSetSysInfo(int, char const*) */
int _Z14perfSetSysInfoiPKc(void);

/* Symbol: _Z9getHintIdPKc */
/* Demangled: getHintId(char const*) */
int _Z9getHintIdPKc(void);

/* Symbol: MI_PQInit */
/* Demangled: MI_PQInit */
int MI_PQInit(void);

/* Symbol: libpowerhal_CusLockHint */
/* Demangled: libpowerhal_CusLockHint */
int libpowerhal_CusLockHint(void);

/* Symbol: ptimer_create */
/* Demangled: ptimer_create */
int ptimer_create(void);

/* Symbol: pwalltime */
/* Demangled: pwalltime */
int pwalltime(void);

/* Symbol: _Z14perfScnDumpAlli */
/* Demangled: perfScnDumpAll(int) */
int _Z14perfScnDumpAlli(void);

/* Symbol: _Z18set_gpu_freq_leveli */
/* Demangled: set_gpu_freq_level(int) */
int _Z18set_gpu_freq_leveli(void);

/* Symbol: _Z4initv */
/* Demangled: init() */
int _Z4initv(void);

/* Symbol: notify_rild_weak_sig_opt_set */
/* Demangled: notify_rild_weak_sig_opt_set */
int notify_rild_weak_sig_opt_set(void);

/* Symbol: MI_DlNth */
/* Demangled: MI_DlNth */
int MI_DlNth(void);

/* Symbol: MI_DlPrev */
/* Demangled: MI_DlPrev */
int MI_DlPrev(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: _ZNSt3__114__split_bufferI12xml_activityRNS_9allocatorIS1_EEEC2EjjS4_ */
/* Demangled: std::__1::__split_buffer<xml_activity, std::__1::allocator<xml_activity>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<xml_activity>&) */
int _ZNSt3__114__split_bufferI12xml_activityRNS_9allocatorIS1_EEEC2EjjS4_(void);

/* Symbol: notify_rild_weak_signal_opt */
/* Demangled: notify_rild_weak_signal_opt */
int notify_rild_weak_signal_opt(void);

/* Symbol: SetDupPacketMultiLink */
/* Demangled: SetDupPacketMultiLink */
int SetDupPacketMultiLink(void);

/* Symbol: _Z16HintRscList_initv */
/* Demangled: HintRscList_init() */
int _Z16HintRscList_initv(void);

/* Symbol: _Z25perfLockCheckHdl_internaliiiiiiPi */
/* Demangled: perfLockCheckHdl_internal(int, int, int, int, int, int, int*) */
int _Z25perfLockCheckHdl_internaliiiiiiPi(void);

/* Symbol: reset_rild_opt_info */
/* Demangled: reset_rild_opt_info */
int reset_rild_opt_info(void);

/* Symbol: _Z15setHintDurationii */
/* Demangled: setHintDuration(int, int) */
int _Z15setHintDurationii(void);

/* Symbol: power_msg_timer_req */
/* Demangled: power_msg_timer_req */
int power_msg_timer_req(void);

/* Symbol: _Z14allocate_timerv */
/* Demangled: allocate_timer() */
int _Z14allocate_timerv(void);

/* Symbol: _Z13resetScenarioii */
/* Demangled: resetScenario(int, int) */
int _Z13resetScenarioii(void);

/* Symbol: _Z20reset_thermal_policyi */
/* Demangled: reset_thermal_policy(int) */
int _Z20reset_thermal_policyi(void);

/* Symbol: _Z25unsetTaskPreferCpu_littleiPv */
/* Demangled: unsetTaskPreferCpu_little(int, void*) */
int _Z25unsetTaskPreferCpu_littleiPv(void);

/* Symbol: _Z9set_valuePKcx */
/* Demangled: set_value(char const*, long long) */
int _Z9set_valuePKcx(void);

/* Symbol: ptimer_mng_getexpired */
/* Demangled: ptimer_mng_getexpired */
int ptimer_mng_getexpired(void);

/* Symbol: _Z16perfLockCheckHdliiiiii */
/* Demangled: perfLockCheckHdl(int, int, int, int, int, int) */
int _Z16perfLockCheckHdliiiiii(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: devfdDSC */
/* Demangled: devfdDSC */
extern void* devfdDSC;

/* Symbol: _Z28set_f2fs_current_flush_mergePci */
/* Demangled: set_f2fs_current_flush_merge(char*, int) */
int _Z28set_f2fs_current_flush_mergePci(void);

/* Symbol: MI_DlStep */
/* Demangled: MI_DlStep */
int MI_DlStep(void);

/* Symbol: sDlOpHandler */
/* Demangled: sDlOpHandler */
extern void* sDlOpHandler;

/* Symbol: _Z26start_periodic_check_timeri */
/* Demangled: start_periodic_check_timer(int) */
int _Z26start_periodic_check_timeri(void);

/* Symbol: notifyLowLatencyMode */
/* Demangled: notifyLowLatencyMode */
int notifyLowLatencyMode(void);

/* Symbol: libpowerhal_NotifyAppState */
/* Demangled: libpowerhal_NotifyAppState */
int libpowerhal_NotifyAppState(void);

/* Symbol: MI_DlPushHead */
/* Demangled: MI_DlPushHead */
int MI_DlPushHead(void);

/* Symbol: __udivmoddi4 */
/* Demangled: __udivmoddi4 */
int __udivmoddi4(void);

/* Symbol: MI_DlNext */
/* Demangled: MI_DlNext */
int MI_DlNext(void);

/* Symbol: _Z19setBlkDev_readAheadiPv */
/* Demangled: setBlkDev_readAhead(int, void*) */
int _Z19setBlkDev_readAheadiPv(void);

/* Symbol: g_perf_tc */
/* Demangled: g_perf_tc */
extern void* g_perf_tc;

/* Symbol: MI_DlLast */
/* Demangled: MI_DlLast */
int MI_DlLast(void);

/* Symbol: _Z12testRscTablev */
/* Demangled: testRscTable() */
int _Z12testRscTablev(void);

/* Symbol: pmutex_unlock */
/* Demangled: pmutex_unlock */
int pmutex_unlock(void);

/* Symbol: __udivsi3 */
/* Demangled: __udivsi3 */
int __udivsi3(void);

/* Symbol: _ZNSt3__16vectorI12xml_activityNS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE */
/* Demangled: std::__1::vector<xml_activity, std::__1::allocator<xml_activity> >::__swap_out_circular_buffer(std::__1::__split_buffer<xml_activity, std::__1::allocator<xml_activity>&>&) */
int _ZNSt3__16vectorI12xml_activityNS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE(void);

/* Symbol: mXmlActList */
/* Demangled: mXmlActList */
extern void* mXmlActList;

/* Symbol: _Z19getCputopoFromSysfsiPiS_S_ */
/* Demangled: getCputopoFromSysfs(int, int*, int*, int*) */
int _Z19getCputopoFromSysfsiPiS_S_(void);

/* Symbol: _Z23setTaskPreferCpu_littleiPv */
/* Demangled: setTaskPreferCpu_little(int, void*) */
int _Z23setTaskPreferCpu_littleiPv(void);

/* Symbol: netd_set_priority_uid */
/* Demangled: netd_set_priority_uid */
int netd_set_priority_uid(void);

/* Symbol: _ZNSt3__16vectorI12xml_activityNS_9allocatorIS1_EEE7reserveEj */
/* Demangled: std::__1::vector<xml_activity, std::__1::allocator<xml_activity> >::reserve(unsigned int) */
int _ZNSt3__16vectorI12xml_activityNS_9allocatorIS1_EEE7reserveEj(void);

/* Symbol: powerd_main */
/* Demangled: powerd_main */
int powerd_main(void);

/* Symbol: __udivmodsi4 */
/* Demangled: __udivmodsi4 */
int __udivmodsi4(void);

/* Symbol: __aeabi_memmove4 */
/* Demangled: __aeabi_memmove4 */
int __aeabi_memmove4(void);

/* Symbol: query_capability */
/* Demangled: query_capability */
int query_capability(void);

/* Symbol: _Z30recount_whitelist_ack_list_numi */
/* Demangled: recount_whitelist_ack_list_num(int) */
int _Z30recount_whitelist_ack_list_numi(void);

/* Symbol: MI_DlInsert */
/* Demangled: MI_DlInsert */
int MI_DlInsert(void);

/* Symbol: ptimer_mng_getnextduration */
/* Demangled: ptimer_mng_getnextduration */
int ptimer_mng_getnextduration(void);

/* Symbol: _Z37perfservice_xmlparse_reload_whitelistv */
/* Demangled: perfservice_xmlparse_reload_whitelist() */
int _Z37perfservice_xmlparse_reload_whitelistv(void);

/* Symbol: _Z21compare_descending_64PKvS0_ */
/* Demangled: compare_descending_64(void const*, void const*) */
int _Z21compare_descending_64PKvS0_(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _ZNSt3__16vectorINS0_I12xml_activityNS_9allocatorIS1_EEEENS2_IS4_EEE13shrink_to_fitEv */
/* Demangled: std::__1::vector<std::__1::vector<xml_activity, std::__1::allocator<xml_activity> >, std::__1::allocator<std::__1::vector<xml_activity, std::__1::allocator<xml_activity> > > >::shrink_to_fit() */
int _ZNSt3__16vectorINS0_I12xml_activityNS_9allocatorIS1_EEEENS2_IS4_EEE13shrink_to_fitEv(void);

/* Symbol: MI_DlDelete */
/* Demangled: MI_DlDelete */
int MI_DlDelete(void);

/* Symbol: MI_HInsert */
/* Demangled: MI_HInsert */
int MI_HInsert(void);

/* Symbol: socketConnect */
/* Demangled: socketConnect */
int socketConnect(void);

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int __aeabi_uidivmod(void);

/* Symbol: _Z17getHintRscElementii */
/* Demangled: getHintRscElement(int, int) */
int _Z17getHintRscElementii(void);

/* Symbol: _Z17compare_ascendingPKvS0_ */
/* Demangled: compare_ascending(void const*, void const*) */
int _Z17compare_ascendingPKvS0_(void);

/* Symbol: __aeabi_memmove8 */
/* Demangled: __aeabi_memmove8 */
int __aeabi_memmove8(void);

/* Symbol: _Z18load_thm_api_startiPv */
/* Demangled: load_thm_api_start(int, void*) */
int _Z18load_thm_api_startiPv(void);

/* Symbol: _ZNSt3__16vectorI12xml_activityNS_9allocatorIS1_EEE12__move_rangeEPS1_S5_S5_ */
/* Demangled: std::__1::vector<xml_activity, std::__1::allocator<xml_activity> >::__move_range(xml_activity*, xml_activity*, xml_activity*) */
int _ZNSt3__16vectorI12xml_activityNS_9allocatorIS1_EEE12__move_rangeEPS1_S5_S5_(void);

/* Symbol: MI_HCount */
/* Demangled: MI_HCount */
int MI_HCount(void);

/* Symbol: MI_HDelete */
/* Demangled: MI_HDelete */
int MI_HDelete(void);

/* Symbol: _Z9set_valuePKcii */
/* Demangled: set_value(char const*, int, int) */
int _Z9set_valuePKcii(void);

/* Symbol: gRscCtlTblLen */
/* Demangled: gRscCtlTblLen */
extern void* gRscCtlTblLen;

/* Symbol: __divdi3 */
/* Demangled: __divdi3 */
int __divdi3(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _Z14notifyFbcTouchiPv */
/* Demangled: notifyFbcTouch(int, void*) */
int _Z14notifyFbcTouchiPv(void);

/* Symbol: _Z17getForegroundInfoPPcPiS1_ */
/* Demangled: getForegroundInfo(char**, int*, int*) */
int _Z17getForegroundInfoPPcPiS1_(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: netd_reset */
/* Demangled: netd_reset */
int netd_reset(void);

/* Symbol: notify_rild_crash_pid_set */
/* Demangled: notify_rild_crash_pid_set */
int notify_rild_crash_pid_set(void);

/* Symbol: power_msg */
/* Demangled: power_msg */
int power_msg(void);

/* Symbol: _Z20perfxml_read_cmddataPN8tinyxml210XMLElementEi */
/* Demangled: perfxml_read_cmddata(tinyxml2::XMLElement*, int) */
int _Z20perfxml_read_cmddataPN8tinyxml210XMLElementEi(void);

/* Symbol: libpowerhal_UserScnDisableAll */
/* Demangled: libpowerhal_UserScnDisableAll */
int libpowerhal_UserScnDisableAll(void);

/* Symbol: _Z12setFreqBoostiPv */
/* Demangled: setFreqBoost(int, void*) */
int _Z12setFreqBoostiPv(void);

/* Symbol: _Z16remove_scn_timerii */
/* Demangled: remove_scn_timer(int, int) */
int _Z16remove_scn_timerii(void);

/* Symbol: socketDisconnect */
/* Demangled: socketDisconnect */
int socketDisconnect(void);

/* Symbol: _Z19setDvfsrcDevFreqOppiPv */
/* Demangled: setDvfsrcDevFreqOpp(int, void*) */
int _Z19setDvfsrcDevFreqOppiPv(void);

/* Symbol: netd_clear_priority_uid */
/* Demangled: netd_clear_priority_uid */
int netd_clear_priority_uid(void);

/* Symbol: _ZNSt3__16vectorINS0_I12xml_activityNS_9allocatorIS1_EEEENS2_IS4_EEE21__push_back_slow_pathIRKS4_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::vector<xml_activity, std::__1::allocator<xml_activity> >, std::__1::allocator<std::__1::vector<xml_activity, std::__1::allocator<xml_activity> > > >::__push_back_slow_path<std::__1::vector<xml_activity, std::__1::allocator<xml_activity> > const&>(std::__1::vector<xml_activity, std::__1::allocator<xml_activity> > const&) */
int _ZNSt3__16vectorINS0_I12xml_activityNS_9allocatorIS1_EEEENS2_IS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void);

/* Symbol: libpowerhal_UserGetCapability */
/* Demangled: libpowerhal_UserGetCapability */
int libpowerhal_UserGetCapability(void);

/* Symbol: MI_DlInsertAfter */
/* Demangled: MI_DlInsertAfter */
int MI_DlInsertAfter(void);

/* Symbol: MI_PQCount */
/* Demangled: MI_PQCount */
int MI_PQCount(void);

/* Symbol: ptimer_mng_delete */
/* Demangled: ptimer_mng_delete */
int ptimer_mng_delete(void);

/* Symbol: _Z20get_cputopo_cpu_infoiPiS_ */
/* Demangled: get_cputopo_cpu_info(int, int*, int*) */
int _Z20get_cputopo_cpu_infoiPiS_(void);

/* Symbol: _Z37perfservice_xmlparse_get_applist_filev */
/* Demangled: perfservice_xmlparse_get_applist_file() */
int _Z37perfservice_xmlparse_get_applist_filev(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _Z9set_valuePKcPKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: set_value(char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*) */
int _Z9set_valuePKcPKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: __aeabi_memmove */
/* Demangled: __aeabi_memmove */
int __aeabi_memmove(void);

/* Symbol: _ZN7android2spIN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProviderEEaSEPS7_ */
/* Demangled: android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider>::operator=(vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider*) */
int _ZN7android2spIN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProviderEEaSEPS7_(void);

/* Symbol: pmutex_trylock */
/* Demangled: pmutex_trylock */
int pmutex_trylock(void);

/* Symbol: _Z10wifi_reseti */
/* Demangled: wifi_reset(int) */
int _Z10wifi_reseti(void);

/* Symbol: _Z14setClusterFreqPKciPiS1_ */
/* Demangled: setClusterFreq(char const*, int, int*, int*) */
int _Z14setClusterFreqPKciPiS1_(void);

/* Symbol: _Z17initDvfsrcDevFreqi */
/* Demangled: initDvfsrcDevFreq(int) */
int _Z17initDvfsrcDevFreqi(void);

/* Symbol: _ZNSt3__113__vector_baseINS_6vectorI12xml_activityNS_9allocatorIS2_EEEENS3_IS5_EEED2Ev */
/* Demangled: std::__1::__vector_base<std::__1::vector<xml_activity, std::__1::allocator<xml_activity> >, std::__1::allocator<std::__1::vector<xml_activity, std::__1::allocator<xml_activity> > > >::~__vector_base() */
int _ZNSt3__113__vector_baseINS_6vectorI12xml_activityNS_9allocatorIS2_EEEENS3_IS5_EEED2Ev(void);

/* Symbol: _ZNSt3__16vectorI12xml_activityNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<xml_activity, std::__1::allocator<xml_activity> >::__push_back_slow_path<xml_activity const&>(xml_activity const&) */
int _ZNSt3__16vectorI12xml_activityNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: libpowerhal_LockAcq */
/* Demangled: libpowerhal_LockAcq */
int libpowerhal_LockAcq(void);

/* Symbol: notify_rild_opt_info */
/* Demangled: notify_rild_opt_info */
int notify_rild_opt_info(void);

/* Symbol: _Z17set_data_fs_boostiPv */
/* Demangled: set_data_fs_boost(int, void*) */
int _Z17set_data_fs_boostiPv(void);

/* Symbol: MI_DlFind */
/* Demangled: MI_DlFind */
int MI_DlFind(void);

/* Symbol: resetUtilityUx */
/* Demangled: resetUtilityUx */
int resetUtilityUx(void);

/* Symbol: _Z17updateCusScnTablePKc */
/* Demangled: updateCusScnTable(char const*) */
int _Z17updateCusScnTablePKc(void);

/* Symbol: notifyForegroundApp */
/* Demangled: notifyForegroundApp */
int notifyForegroundApp(void);

/* Symbol: notify_rild_cert_pid_set */
/* Demangled: notify_rild_cert_pid_set */
int notify_rild_cert_pid_set(void);

/* Symbol: _Z11perfLockReli */
/* Demangled: perfLockRel(int) */
int _Z11perfLockReli(void);

/* Symbol: _Z26updateScnListfromwhitelistP8tScnNode */
/* Demangled: updateScnListfromwhitelist(tScnNode*) */
int _Z26updateScnListfromwhitelistP8tScnNode(void);

/* Symbol: notify_APPState */
/* Demangled: notify_APPState */
int notify_APPState(void);

/* Symbol: _ZNSt3__16vectorI8tWorkMsgNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<tWorkMsg, std::__1::allocator<tWorkMsg> >::__push_back_slow_path<tWorkMsg const&>(tWorkMsg const&) */
int _ZNSt3__16vectorI8tWorkMsgNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: powerd_ipc_resetRecvJob */
/* Demangled: powerd_ipc_resetRecvJob */
int powerd_ipc_resetRecvJob(void);

/* Symbol: RscCfgTbl */
/* Demangled: RscCfgTbl */
extern void* RscCfgTbl;

/* Symbol: _Z17initTaskPreferCpui */
/* Demangled: initTaskPreferCpu(int) */
int _Z17initTaskPreferCpui(void);

/* Symbol: _Z24get_gpu_freq_level_countPi */
/* Demangled: get_gpu_freq_level_count(int*) */
int _Z24get_gpu_freq_level_countPi(void);

/* Symbol: HintMappingTbl */
/* Demangled: HintMappingTbl */
extern void* HintMappingTbl;

/* Symbol: _ZN7android2spI28BluetoothAudioDeathRecipientED2Ev */
/* Demangled: android::sp<BluetoothAudioDeathRecipient>::~sp() */
int _ZN7android2spI28BluetoothAudioDeathRecipientED2Ev(void);

/* Symbol: MI_DlIndex */
/* Demangled: MI_DlIndex */
int MI_DlIndex(void);

/* Symbol: _Z17createBootHandlerv */
/* Demangled: createBootHandler() */
int _Z17createBootHandlerv(void);

/* Symbol: MI_DlInit */
/* Demangled: MI_DlInit */
int MI_DlInit(void);

/* Symbol: power_cmd_destory */
/* Demangled: power_cmd_destory */
int power_cmd_destory(void);

/* Symbol: sendData */
/* Demangled: sendData */
int sendData(void);

/* Symbol: _Z14perfScnDisablei */
/* Demangled: perfScnDisable(int) */
int _Z14perfScnDisablei(void);

/* Symbol: _Z18wifi_smart_predictiPv */
/* Demangled: wifi_smart_predict(int, void*) */
int _Z18wifi_smart_predictiPv(void);

/* Symbol: _Z24notifyTouchForegroundAppPKci */
/* Demangled: notifyTouchForegroundApp(char const*, int) */
int _Z24notifyTouchForegroundAppPKci(void);

/* Symbol: _Z10GetScnNameiPKcPc */
/* Demangled: GetScnName(int, char const*, char*) */
int _Z10GetScnNameiPKcPc(void);

/* Symbol: _Z11get_cpu_numv */
/* Demangled: get_cpu_num() */
int _Z11get_cpu_numv(void);

/* Symbol: _Z21get_ppm_cpu_freq_infoiPiS_PS_ */
/* Demangled: get_ppm_cpu_freq_info(int, int*, int*, int**) */
int _Z21get_ppm_cpu_freq_infoiPiS_PS_(void);

/* Symbol: libpowerhal_Init */
/* Demangled: libpowerhal_Init */
int libpowerhal_Init(void);

/* Symbol: MI_DlPushTail */
/* Demangled: MI_DlPushTail */
int MI_DlPushTail(void);

/* Symbol: _Z13perfScnEnablei */
/* Demangled: perfScnEnable(int) */
int _Z13perfScnEnablei(void);

/* Symbol: _Z14fbc_touch_initi */
/* Demangled: fbc_touch_init(int) */
int _Z14fbc_touch_initi(void);

/* Symbol: _Z29perfservice_xmlparse_freeListv */
/* Demangled: perfservice_xmlparse_freeList() */
int _Z29perfservice_xmlparse_freeListv(void);

/* Symbol: MI_DlWalk */
/* Demangled: MI_DlWalk */
int MI_DlWalk(void);

/* Symbol: MI_DlFirst */
/* Demangled: MI_DlFirst */
int MI_DlFirst(void);

/* Symbol: powerd_req */
/* Demangled: powerd_req */
int powerd_req(void);

/* Symbol: _Z21createPowerMsgHandlerv */
/* Demangled: createPowerMsgHandler() */
int _Z21createPowerMsgHandlerv(void);

/* Symbol: MI_DlSort */
/* Demangled: MI_DlSort */
int MI_DlSort(void);

/* Symbol: update_packet */
/* Demangled: update_packet */
int update_packet(void);

/* Symbol: _Z24get_dvfsrc_devfreq_tablePiPPx */
/* Demangled: get_dvfsrc_devfreq_table(int*, long long**) */
int _Z24get_dvfsrc_devfreq_tablePiPPx(void);

/* Symbol: _Z22unsetTaskPreferCpu_bigiPv */
/* Demangled: unsetTaskPreferCpu_big(int, void*) */
int _Z22unsetTaskPreferCpu_bigiPv(void);

/* Symbol: power_msg_perf_lock_rel */
/* Demangled: power_msg_perf_lock_rel */
int power_msg_perf_lock_rel(void);

/* Symbol: _Z14getHintRscListi */
/* Demangled: getHintRscList(int) */
int _Z14getHintRscListi(void);

/* Symbol: _Z15perfCusLockHintiii */
/* Demangled: perfCusLockHint(int, int, int) */
int _Z15perfCusLockHintiii(void);

/* Symbol: _Z18HintRscList_appendiii */
/* Demangled: HintRscList_append(int, int, int) */
int _Z18HintRscList_appendiii(void);

/* Symbol: _Z14getCputopoInfoiPiS_PP12tClusterInfo */
/* Demangled: getCputopoInfo(int, int*, int*, tClusterInfo**) */
int _Z14getCputopoInfoiPiS_PP12tClusterInfo(void);

/* Symbol: _Z17setFstbSoftFpsLowiPv */
/* Demangled: setFstbSoftFpsLow(int, void*) */
int _Z17setFstbSoftFpsLowiPv(void);

/* Symbol: _ZNSt3__16vectorI12xml_activityNS_9allocatorIS1_EEEC2ERKS4_ */
/* Demangled: std::__1::vector<xml_activity, std::__1::allocator<xml_activity> >::vector(std::__1::vector<xml_activity, std::__1::allocator<xml_activity> > const&) */
int _ZNSt3__16vectorI12xml_activityNS_9allocatorIS1_EEEC2ERKS4_(void);

/* Symbol: _ZNSt3__16vectorI8tWorkMsgNS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE */
/* Demangled: std::__1::vector<tWorkMsg, std::__1::allocator<tWorkMsg> >::__swap_out_circular_buffer(std::__1::__split_buffer<tWorkMsg, std::__1::allocator<tWorkMsg>&>&) */
int _ZNSt3__16vectorI8tWorkMsgNS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE(void);

/* Symbol: bluetooth_audio_provider */
/* Demangled: bluetooth_audio_provider */
extern void* bluetooth_audio_provider;

/* Symbol: ptimer_util_walltimepass_ms */
/* Demangled: ptimer_util_walltimepass_ms */
int ptimer_util_walltimepass_ms(void);

/* Symbol: powerd_ipc_resetSendJob */
/* Demangled: powerd_ipc_resetSendJob */
int powerd_ipc_resetSendJob(void);

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int __aeabi_uidiv(void);

/* Symbol: _Z20setTaskPreferCpu_bigiPv */
/* Demangled: setTaskPreferCpu_big(int, void*) */
int _Z20setTaskPreferCpu_bigiPv(void);

/* Symbol: _ZNSt3__16vectorI12xml_activityNS_9allocatorIS1_EEE11__vallocateEj */
/* Demangled: std::__1::vector<xml_activity, std::__1::allocator<xml_activity> >::__vallocate(unsigned int) */
int _ZNSt3__16vectorI12xml_activityNS_9allocatorIS1_EEE11__vallocateEj(void);

/* Symbol: _Z16whilelist_reloadv */
/* Demangled: whilelist_reload() */
int _Z16whilelist_reloadv(void);

/* Symbol: _Z21perfUserGetCapabilityii */
/* Demangled: perfUserGetCapability(int, int) */
int _Z21perfUserGetCapabilityii(void);

/* Symbol: _Z19setPerfLockDurationii */
/* Demangled: setPerfLockDuration(int, int) */
int _Z19setPerfLockDurationii(void);

/* Symbol: _Z13get_mount_devPKcPi */
/* Demangled: get_mount_dev(char const*, int*) */
int _Z13get_mount_devPKcPi(void);

/* Symbol: MI_DlPopHead */
/* Demangled: MI_DlPopHead */
int MI_DlPopHead(void);

/* Symbol: powerd_cmd_create */
/* Demangled: powerd_cmd_create */
int powerd_cmd_create(void);

/* Symbol: powerdTimer */
/* Demangled: powerdTimer */
extern void* powerdTimer;

/* Symbol: _Z10setGpuFreqPKci */
/* Demangled: setGpuFreq(char const*, int) */
int _Z10setGpuFreqPKci(void);

/* Symbol: MI_PQPushTail */
/* Demangled: MI_PQPushTail */
int MI_PQPushTail(void);

/* Symbol: _Z17setCfpDownLoadingiPv */
/* Demangled: setCfpDownLoading(int, void*) */
int _Z17setCfpDownLoadingiPv(void);

/* Symbol: _Z21perfUserScnRestoreAllv */
/* Demangled: perfUserScnRestoreAll() */
int _Z21perfUserScnRestoreAllv(void);

/* Symbol: _ZNSt3__114__split_bufferI8tWorkMsgRNS_9allocatorIS1_EEEC2EjjS4_ */
/* Demangled: std::__1::__split_buffer<tWorkMsg, std::__1::allocator<tWorkMsg>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<tWorkMsg>&) */
int _ZNSt3__114__split_bufferI8tWorkMsgRNS_9allocatorIS1_EEEC2EjjS4_(void);

/* Symbol: _ZN7android2spIN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProviderEEaSERKS8_ */
/* Demangled: android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider>::operator=(android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider> const&) */
int _ZN7android2spIN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProviderEEaSERKS8_(void);

/* Symbol: ptimer_mng_create */
/* Demangled: ptimer_mng_create */
int ptimer_mng_create(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBPOWERHAL_H */

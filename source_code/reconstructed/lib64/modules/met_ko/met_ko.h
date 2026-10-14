/*
 * Reverse-Engineered ABI Specification for: met.ko
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: met.ko
 */

#ifndef BEGONIA_RE_MET_KO_H
#define BEGONIA_RE_MET_KO_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: init_module */
/* Demangled: init_module */
int init_module(void);

/* Symbol: met_cpu */
/* Demangled: met_cpu */
extern void* met_cpu;

/* Symbol: met_get_cpuinfo_symbol */
/* Demangled: met_get_cpuinfo_symbol */
extern void* met_get_cpuinfo_symbol;

/* Symbol: tracing_record_cmdline_symbol */
/* Demangled: tracing_record_cmdline_symbol */
extern void* tracing_record_cmdline_symbol;

/* Symbol: met_cpu_frequency_symbol */
/* Demangled: met_cpu_frequency_symbol */
extern void* met_cpu_frequency_symbol;

/* Symbol: met_reg_switch_symbol */
/* Demangled: met_reg_switch_symbol */
extern void* met_reg_switch_symbol;

/* Symbol: met_unreg_switch_symbol */
/* Demangled: met_unreg_switch_symbol */
extern void* met_unreg_switch_symbol;

/* Symbol: met_arch_setup_dma_ops_symbol */
/* Demangled: met_arch_setup_dma_ops_symbol */
extern void* met_arch_setup_dma_ops_symbol;

/* Symbol: met_perf_event_read_local_symbol */
/* Demangled: met_perf_event_read_local_symbol */
extern void* met_perf_event_read_local_symbol;

/* Symbol: met_kthread_create_on_cpu_symbol */
/* Demangled: met_kthread_create_on_cpu_symbol */
extern void* met_kthread_create_on_cpu_symbol;

/* Symbol: met_smp_call_function_single_symbol */
/* Demangled: met_smp_call_function_single_symbol */
extern void* met_smp_call_function_single_symbol;

/* Symbol: met_reg_event_power_symbol */
/* Demangled: met_reg_event_power_symbol */
extern void* met_reg_event_power_symbol;

/* Symbol: met_unreg_event_power_symbol */
/* Demangled: met_unreg_event_power_symbol */
extern void* met_unreg_event_power_symbol;

/* Symbol: fs_reg */
/* Demangled: fs_reg */
int fs_reg(void);

/* Symbol: met_boot_msg_tmp */
/* Demangled: met_boot_msg_tmp */
extern void* met_boot_msg_tmp;

/* Symbol: pr_bootmsg */
/* Demangled: pr_bootmsg */
int pr_bootmsg(void);

/* Symbol: met_set_platform */
/* Demangled: met_set_platform */
int met_set_platform(void);

/* Symbol: mt_get_chip_id_symbol */
/* Demangled: mt_get_chip_id_symbol */
extern void* mt_get_chip_id_symbol;

/* Symbol: met_set_chip_id */
/* Demangled: met_set_chip_id */
int met_set_chip_id(void);

/* Symbol: met_set_topology */
/* Demangled: met_set_topology */
int met_set_topology(void);

/* Symbol: core_plf_init */
/* Demangled: core_plf_init */
int core_plf_init(void);

/* Symbol: cleanup_module */
/* Demangled: cleanup_module */
int cleanup_module(void);

/* Symbol: core_plf_exit */
/* Demangled: core_plf_exit */
int core_plf_exit(void);

/* Symbol: fs_unreg */
/* Demangled: fs_unreg */
int fs_unreg(void);

/* Symbol: __this_module */
/* Demangled: __this_module */
extern void* __this_module;

/* Symbol: __crc_met_backlight */
/* Demangled: __crc_met_backlight */
extern void* __crc_met_backlight;

/* Symbol: enable_met_backlight_tag_real */
/* Demangled: enable_met_backlight_tag_real */
int enable_met_backlight_tag_real(void);

/* Symbol: output_met_backlight_tag_real */
/* Demangled: output_met_backlight_tag_real */
int output_met_backlight_tag_real(void);

/* Symbol: met_tag_oneshot_real */
/* Demangled: met_tag_oneshot_real */
int met_tag_oneshot_real(void);

/* Symbol: met_backlight */
/* Demangled: met_backlight */
extern void* met_backlight;

/* Symbol: __crc_met_tag_start_real */
/* Demangled: __crc_met_tag_start_real */
extern void* __crc_met_tag_start_real;

/* Symbol: __crc_met_tag_end_real */
/* Demangled: __crc_met_tag_end_real */
extern void* __crc_met_tag_end_real;

/* Symbol: __crc_met_tag_oneshot_real */
/* Demangled: __crc_met_tag_oneshot_real */
extern void* __crc_met_tag_oneshot_real;

/* Symbol: tracing_mark_write */
/* Demangled: tracing_mark_write */
int tracing_mark_write(void);

/* Symbol: met_strbuf_irq */
/* Demangled: met_strbuf_irq */
extern void* met_strbuf_irq;

/* Symbol: bltab */
/* Demangled: bltab */
extern void* bltab;

/* Symbol: met_strbuf_nmi */
/* Demangled: met_strbuf_nmi */
extern void* met_strbuf_nmi;

/* Symbol: met_mode */
/* Demangled: met_mode */
extern void* met_mode;

/* Symbol: met_strbuf_sirq */
/* Demangled: met_strbuf_sirq */
extern void* met_strbuf_sirq;

/* Symbol: met_strbuf */
/* Demangled: met_strbuf */
extern void* met_strbuf;

/* Symbol: met_tag_init */
/* Demangled: met_tag_init */
int met_tag_init(void);

/* Symbol: met_tag_uninit */
/* Demangled: met_tag_uninit */
int met_tag_uninit(void);

/* Symbol: met_set_dump_buffer_real */
/* Demangled: met_set_dump_buffer_real */
int met_set_dump_buffer_real(void);

/* Symbol: met_tag_start_real */
/* Demangled: met_tag_start_real */
int met_tag_start_real(void);

/* Symbol: met_tag_end_real */
/* Demangled: met_tag_end_real */
int met_tag_end_real(void);

/* Symbol: met_tag_async_start_real */
/* Demangled: met_tag_async_start_real */
int met_tag_async_start_real(void);

/* Symbol: met_tag_async_end_real */
/* Demangled: met_tag_async_end_real */
int met_tag_async_end_real(void);

/* Symbol: met_tag_userdata_real */
/* Demangled: met_tag_userdata_real */
int met_tag_userdata_real(void);

/* Symbol: met_tag_dump_real */
/* Demangled: met_tag_dump_real */
int met_tag_dump_real(void);

/* Symbol: met_tag_disable_real */
/* Demangled: met_tag_disable_real */
int met_tag_disable_real(void);

/* Symbol: met_tag_enable_real */
/* Demangled: met_tag_enable_real */
int met_tag_enable_real(void);

/* Symbol: met_save_dump_buffer_real */
/* Demangled: met_save_dump_buffer_real */
int met_save_dump_buffer_real(void);

/* Symbol: met_save_log_real */
/* Demangled: met_save_log_real */
int met_save_log_real(void);

/* Symbol: tag_reg */
/* Demangled: tag_reg */
int tag_reg(void);

/* Symbol: met_sched_switch */
/* Demangled: met_sched_switch */
int met_sched_switch(void);

/* Symbol: tag_unreg */
/* Demangled: tag_unreg */
int tag_unreg(void);

/* Symbol: __crc_met_mode */
/* Demangled: __crc_met_mode */
extern void* __crc_met_mode;

/* Symbol: __crc_met_strbuf_nmi */
/* Demangled: __crc_met_strbuf_nmi */
extern void* __crc_met_strbuf_nmi;

/* Symbol: __crc_met_strbuf_irq */
/* Demangled: __crc_met_strbuf_irq */
extern void* __crc_met_strbuf_irq;

/* Symbol: __crc_met_strbuf_sirq */
/* Demangled: __crc_met_strbuf_sirq */
extern void* __crc_met_strbuf_sirq;

/* Symbol: __crc_met_strbuf */
/* Demangled: __crc_met_strbuf */
extern void* __crc_met_strbuf;

/* Symbol: __crc_met_device */
/* Demangled: __crc_met_device */
extern void* __crc_met_device;

/* Symbol: __crc_met_boot_msg_tmp */
/* Demangled: __crc_met_boot_msg_tmp */
extern void* __crc_met_boot_msg_tmp;

/* Symbol: __crc_pr_bootmsg */
/* Demangled: __crc_pr_bootmsg */
extern void* __crc_pr_bootmsg;

/* Symbol: __crc_met_register */
/* Demangled: __crc_met_register */
extern void* __crc_met_register;

/* Symbol: __crc_met_deregister */
/* Demangled: __crc_met_deregister */
extern void* __crc_met_deregister;

/* Symbol: __crc_met_set_platform */
/* Demangled: __crc_met_set_platform */
extern void* __crc_met_set_platform;

/* Symbol: __crc_met_get_platform */
/* Demangled: __crc_met_get_platform */
extern void* __crc_met_get_platform;

/* Symbol: __crc_met_set_chip_id */
/* Demangled: __crc_met_set_chip_id */
extern void* __crc_met_set_chip_id;

/* Symbol: __crc_met_get_chip_id */
/* Demangled: __crc_met_get_chip_id */
extern void* __crc_met_get_chip_id;

/* Symbol: __crc_met_set_topology */
/* Demangled: __crc_met_set_topology */
extern void* __crc_met_set_topology;

/* Symbol: met_parse_num */
/* Demangled: met_parse_num */
int met_parse_num(void);

/* Symbol: met_set_suspend_notify */
/* Demangled: met_set_suspend_notify */
int met_set_suspend_notify(void);

/* Symbol: met_boot_msg_idx */
/* Demangled: met_boot_msg_idx */
extern void* met_boot_msg_idx;

/* Symbol: met_boot_msg */
/* Demangled: met_boot_msg */
extern void* met_boot_msg;

/* Symbol: met_register */
/* Demangled: met_register */
int met_register(void);

/* Symbol: met_list */
/* Demangled: met_list */
extern void* met_list;

/* Symbol: met_deregister */
/* Demangled: met_deregister */
int met_deregister(void);

/* Symbol: met_get_platform */
/* Demangled: met_get_platform */
int met_get_platform(void);

/* Symbol: met_get_chip_id */
/* Demangled: met_get_chip_id */
int met_get_chip_id(void);

/* Symbol: force_sample */
/* Demangled: force_sample */
int force_sample(void);

/* Symbol: ctrl_flags */
/* Demangled: ctrl_flags */
extern void* ctrl_flags;

/* Symbol: met_hrtimer_expire */
/* Demangled: met_hrtimer_expire */
extern void* met_hrtimer_expire;

/* Symbol: met_timer_expire */
/* Demangled: met_timer_expire */
extern void* met_timer_expire;

/* Symbol: met_device */
/* Demangled: met_device */
extern void* met_device;

/* Symbol: met_cookie */
/* Demangled: met_cookie */
extern void* met_cookie;

/* Symbol: met_cpupmu */
/* Demangled: met_cpupmu */
extern void* met_cpupmu;

/* Symbol: met_memstat */
/* Demangled: met_memstat */
extern void* met_memstat;

/* Symbol: met_switch */
/* Demangled: met_switch */
extern void* met_switch;

/* Symbol: met_trace_event */
/* Demangled: met_trace_event */
extern void* met_trace_event;

/* Symbol: pm_qos_update_request */
/* Demangled: pm_qos_update_request */
int pm_qos_update_request(void);

/* Symbol: pm_qos_update_target */
/* Demangled: pm_qos_update_target */
int pm_qos_update_target(void);

/* Symbol: met_dummy_header */
/* Demangled: met_dummy_header */
extern void* met_dummy_header;

/* Symbol: met_stat */
/* Demangled: met_stat */
extern void* met_stat;

/* Symbol: ondiemet_log_manager_init */
/* Demangled: ondiemet_log_manager_init */
int ondiemet_log_manager_init(void);

/* Symbol: ondiemet_attr_init */
/* Demangled: ondiemet_attr_init */
int ondiemet_attr_init(void);

/* Symbol: sampler_stop */
/* Demangled: sampler_stop */
int sampler_stop(void);

/* Symbol: ondiemet_module */
/* Demangled: ondiemet_module */
extern void* ondiemet_module;

/* Symbol: sspm_buffer_size */
/* Demangled: sspm_buffer_size */
extern void* sspm_buffer_size;

/* Symbol: ondiemet_log_manager_stop */
/* Demangled: ondiemet_log_manager_stop */
int ondiemet_log_manager_stop(void);

/* Symbol: ondiemet_stop */
/* Demangled: ondiemet_stop */
int ondiemet_stop(void);

/* Symbol: ondiemet_extract */
/* Demangled: ondiemet_extract */
int ondiemet_extract(void);

/* Symbol: ondiemet_log_manager_uninit */
/* Demangled: ondiemet_log_manager_uninit */
int ondiemet_log_manager_uninit(void);

/* Symbol: ondiemet_attr_uninit */
/* Demangled: ondiemet_attr_uninit */
int ondiemet_attr_uninit(void);

/* Symbol: get_ctrl_flags */
/* Demangled: get_ctrl_flags */
int get_ctrl_flags(void);

/* Symbol: sampler_start */
/* Demangled: sampler_start */
int sampler_start(void);

/* Symbol: ondiemet_start */
/* Demangled: ondiemet_start */
int ondiemet_start(void);

/* Symbol: met_cpu_notify */
/* Demangled: met_cpu_notify */
extern void* met_cpu_notify;

/* Symbol: met_cpu_pmu_method */
/* Demangled: met_cpu_pmu_method */
extern void* met_cpu_pmu_method;

/* Symbol: met_cpu_pm_pmu_reconfig */
/* Demangled: met_cpu_pm_pmu_reconfig */
extern void* met_cpu_pm_pmu_reconfig;

/* Symbol: met_hrtimer_suspend */
/* Demangled: met_hrtimer_suspend */
int met_hrtimer_suspend(void);

/* Symbol: met_hrtimer_resume */
/* Demangled: met_hrtimer_resume */
int met_hrtimer_resume(void);

/* Symbol: force_power_log */
/* Demangled: force_power_log */
int force_power_log(void);

/* Symbol: met_event_timer_notify */
/* Demangled: met_event_timer_notify */
int met_event_timer_notify(void);

/* Symbol: ms_st */
/* Demangled: ms_st */
int ms_st(void);

/* Symbol: met_usecs_to_cputime64 */
/* Demangled: met_usecs_to_cputime64 */
int met_usecs_to_cputime64(void);

/* Symbol: cookie */
/* Demangled: cookie */
int cookie(void);

/* Symbol: cookie2 */
/* Demangled: cookie2 */
int cookie2(void);

/* Symbol: met_cookie_polling */
/* Demangled: met_cookie_polling */
int met_cookie_polling(void);

/* Symbol: memstat */
/* Demangled: memstat */
int memstat(void);

/* Symbol: met_memstat_polling */
/* Demangled: met_memstat_polling */
int met_memstat_polling(void);

/* Symbol: vm_status */
/* Demangled: vm_status */
extern void* vm_status;

/* Symbol: phy_memstat_table */
/* Demangled: phy_memstat_table */
extern void* phy_memstat_table;

/* Symbol: vir_memstat_table */
/* Demangled: vir_memstat_table */
extern void* vir_memstat_table;

/* Symbol: phy_memstat_mask */
/* Demangled: phy_memstat_mask */
extern void* phy_memstat_mask;

/* Symbol: vir_memstat_mask */
/* Demangled: vir_memstat_mask */
extern void* vir_memstat_mask;

/* Symbol: vm_event_counters_enable */
/* Demangled: vm_event_counters_enable */
extern void* vm_event_counters_enable;

/* Symbol: mt_switch */
/* Demangled: mt_switch */
int mt_switch(void);

/* Symbol: met_perf_cpupmu_status */
/* Demangled: met_perf_cpupmu_status */
extern void* met_perf_cpupmu_status;

/* Symbol: met_perf_cpupmu_polling */
/* Demangled: met_perf_cpupmu_polling */
int met_perf_cpupmu_polling(void);

/* Symbol: met_trace_print_symbols_seq */
/* Demangled: met_trace_print_symbols_seq */
int met_trace_print_symbols_seq(void);

/* Symbol: mtk_get_gpu_loading_symbol */
/* Demangled: mtk_get_gpu_loading_symbol */
extern void* mtk_get_gpu_loading_symbol;

/* Symbol: mtk_get_gpu_block_symbol */
/* Demangled: mtk_get_gpu_block_symbol */
extern void* mtk_get_gpu_block_symbol;

/* Symbol: mtk_get_gpu_idle_symbol */
/* Demangled: mtk_get_gpu_idle_symbol */
extern void* mtk_get_gpu_idle_symbol;

/* Symbol: mtk_get_gpu_dvfs_from_symbol */
/* Demangled: mtk_get_gpu_dvfs_from_symbol */
extern void* mtk_get_gpu_dvfs_from_symbol;

/* Symbol: mtk_get_gpu_sub_loading_symbol */
/* Demangled: mtk_get_gpu_sub_loading_symbol */
extern void* mtk_get_gpu_sub_loading_symbol;

/* Symbol: mtk_get_3D_fences_count_symbol */
/* Demangled: mtk_get_3D_fences_count_symbol */
extern void* mtk_get_3D_fences_count_symbol;

/* Symbol: mtk_get_gpu_memory_usage_symbol */
/* Demangled: mtk_get_gpu_memory_usage_symbol */
extern void* mtk_get_gpu_memory_usage_symbol;

/* Symbol: mtk_get_gpu_power_loading_symbol */
/* Demangled: mtk_get_gpu_power_loading_symbol */
extern void* mtk_get_gpu_power_loading_symbol;

/* Symbol: mtk_get_custom_boost_gpu_freq_symbol */
/* Demangled: mtk_get_custom_boost_gpu_freq_symbol */
extern void* mtk_get_custom_boost_gpu_freq_symbol;

/* Symbol: mtk_get_custom_upbound_gpu_freq_symbol */
/* Demangled: mtk_get_custom_upbound_gpu_freq_symbol */
extern void* mtk_get_custom_upbound_gpu_freq_symbol;

/* Symbol: mtk_get_vsync_based_target_freq_symbol */
/* Demangled: mtk_get_vsync_based_target_freq_symbol */
extern void* mtk_get_vsync_based_target_freq_symbol;

/* Symbol: mtk_get_vsync_offset_event_status_symbol */
/* Demangled: mtk_get_vsync_offset_event_status_symbol */
extern void* mtk_get_vsync_offset_event_status_symbol;

/* Symbol: mtk_get_vsync_offset_debug_status_symbol */
/* Demangled: mtk_get_vsync_offset_debug_status_symbol */
extern void* mtk_get_vsync_offset_debug_status_symbol;

/* Symbol: mtk_enable_gpu_perf_monitor_symbol */
/* Demangled: mtk_enable_gpu_perf_monitor_symbol */
extern void* mtk_enable_gpu_perf_monitor_symbol;

/* Symbol: mtk_get_gpu_pmu_init_symbol */
/* Demangled: mtk_get_gpu_pmu_init_symbol */
extern void* mtk_get_gpu_pmu_init_symbol;

/* Symbol: mtk_get_gpu_pmu_swapnreset_symbol */
/* Demangled: mtk_get_gpu_pmu_swapnreset_symbol */
extern void* mtk_get_gpu_pmu_swapnreset_symbol;

/* Symbol: mt_gpufreq_get_cur_freq_symbol */
/* Demangled: mt_gpufreq_get_cur_freq_symbol */
extern void* mt_gpufreq_get_cur_freq_symbol;

/* Symbol: mt_gpufreq_get_thermal_limit_freq_symbol */
/* Demangled: mt_gpufreq_get_thermal_limit_freq_symbol */
extern void* mt_gpufreq_get_thermal_limit_freq_symbol;

/* Symbol: mtk_register_gpu_power_change_symbol */
/* Demangled: mtk_register_gpu_power_change_symbol */
extern void* mtk_register_gpu_power_change_symbol;

/* Symbol: mtk_unregister_gpu_power_change_symbol */
/* Demangled: mtk_unregister_gpu_power_change_symbol */
extern void* mtk_unregister_gpu_power_change_symbol;

/* Symbol: mtk_get_gpu_pmu_swapnreset_stop_symbol */
/* Demangled: mtk_get_gpu_pmu_swapnreset_stop_symbol */
extern void* mtk_get_gpu_pmu_swapnreset_stop_symbol;

/* Symbol: mtk_get_gpu_pmu_deinit_symbol */
/* Demangled: mtk_get_gpu_pmu_deinit_symbol */
extern void* mtk_get_gpu_pmu_deinit_symbol;

/* Symbol: vcorefs_get_num_opp_symbol */
/* Demangled: vcorefs_get_num_opp_symbol */
extern void* vcorefs_get_num_opp_symbol;

/* Symbol: vcorefs_get_opp_info_num_symbol */
/* Demangled: vcorefs_get_opp_info_num_symbol */
extern void* vcorefs_get_opp_info_num_symbol;

/* Symbol: vcorefs_get_opp_info_name_symbol */
/* Demangled: vcorefs_get_opp_info_name_symbol */
extern void* vcorefs_get_opp_info_name_symbol;

/* Symbol: vcorefs_get_opp_info_symbol */
/* Demangled: vcorefs_get_opp_info_symbol */
extern void* vcorefs_get_opp_info_symbol;

/* Symbol: vcorefs_get_src_req_num_symbol */
/* Demangled: vcorefs_get_src_req_num_symbol */
extern void* vcorefs_get_src_req_num_symbol;

/* Symbol: vcorefs_get_src_req_name_symbol */
/* Demangled: vcorefs_get_src_req_name_symbol */
extern void* vcorefs_get_src_req_name_symbol;

/* Symbol: vcorefs_get_src_req_symbol */
/* Demangled: vcorefs_get_src_req_symbol */
extern void* vcorefs_get_src_req_symbol;

/* Symbol: mt_cen_emi_base_get_symbol */
/* Demangled: mt_cen_emi_base_get_symbol */
extern void* mt_cen_emi_base_get_symbol;

/* Symbol: mt_chn_emi_base_get_symbol */
/* Demangled: mt_chn_emi_base_get_symbol */
extern void* mt_chn_emi_base_get_symbol;

/* Symbol: mtk_dramc_get_data_rate_symbol */
/* Demangled: mtk_dramc_get_data_rate_symbol */
extern void* mtk_dramc_get_data_rate_symbol;

/* Symbol: mtk_dramc_get_ddr_type_symbol */
/* Demangled: mtk_dramc_get_ddr_type_symbol */
extern void* mtk_dramc_get_ddr_type_symbol;

/* Symbol: get_cur_ddr_ratio_symbol */
/* Demangled: get_cur_ddr_ratio_symbol */
extern void* get_cur_ddr_ratio_symbol;

/* Symbol: get_dram_data_rate_symbol */
/* Demangled: get_dram_data_rate_symbol */
extern void* get_dram_data_rate_symbol;

/* Symbol: get_ddr_type_symbol */
/* Demangled: get_ddr_type_symbol */
extern void* get_ddr_type_symbol;

/* Symbol: mt_gpufreq_get_cur_volt_symbol */
/* Demangled: mt_gpufreq_get_cur_volt_symbol */
extern void* mt_gpufreq_get_cur_volt_symbol;

/* Symbol: mt_cpufreq_get_cur_volt_symbol */
/* Demangled: mt_cpufreq_get_cur_volt_symbol */
extern void* mt_cpufreq_get_cur_volt_symbol;

/* Symbol: spm_twam_enable_monitor_symbol */
/* Demangled: spm_twam_enable_monitor_symbol */
extern void* spm_twam_enable_monitor_symbol;

/* Symbol: spm_twam_met_enable_symbol */
/* Demangled: spm_twam_met_enable_symbol */
extern void* spm_twam_met_enable_symbol;

/* Symbol: spm_twam_config_channel_symbol */
/* Demangled: spm_twam_config_channel_symbol */
extern void* spm_twam_config_channel_symbol;

/* Symbol: met_gpu */
/* Demangled: met_gpu */
extern void* met_gpu;

/* Symbol: met_gpudvfs */
/* Demangled: met_gpudvfs */
extern void* met_gpudvfs;

/* Symbol: met_gpumem */
/* Demangled: met_gpumem */
extern void* met_gpumem;

/* Symbol: met_gpupwr */
/* Demangled: met_gpupwr */
extern void* met_gpupwr;

/* Symbol: met_gpu_pmu */
/* Demangled: met_gpu_pmu */
extern void* met_gpu_pmu;

/* Symbol: met_gpu_stall */
/* Demangled: met_gpu_stall */
extern void* met_gpu_stall;

/* Symbol: met_vcoredvfs */
/* Demangled: met_vcoredvfs */
extern void* met_vcoredvfs;

/* Symbol: met_sspm_emi */
/* Demangled: met_sspm_emi */
extern void* met_sspm_emi;

/* Symbol: met_sspm_smi */
/* Demangled: met_sspm_smi */
extern void* met_sspm_smi;

/* Symbol: met_ptpod */
/* Demangled: met_ptpod */
extern void* met_ptpod;

/* Symbol: met_wall_time */
/* Demangled: met_wall_time */
extern void* met_wall_time;

/* Symbol: met_sspm_common */
/* Demangled: met_sspm_common */
extern void* met_sspm_common;

/* Symbol: met_sspm_walltime */
/* Demangled: met_sspm_walltime */
extern void* met_sspm_walltime;

/* Symbol: met_cpudsu */
/* Demangled: met_cpudsu */
extern void* met_cpudsu;

/* Symbol: met_spmtwam */
/* Demangled: met_spmtwam */
extern void* met_spmtwam;

/* Symbol: __crc_ms_formatH */
/* Demangled: __crc_ms_formatH */
extern void* __crc_ms_formatH;

/* Symbol: __crc_ms_formatD */
/* Demangled: __crc_ms_formatD */
extern void* __crc_ms_formatD;

/* Symbol: __crc_ms_formatH_ulong */
/* Demangled: __crc_ms_formatH_ulong */
extern void* __crc_ms_formatH_ulong;

/* Symbol: __crc_ms_formatD_ulong */
/* Demangled: __crc_ms_formatD_ulong */
extern void* __crc_ms_formatD_ulong;

/* Symbol: __crc_ms_formatH_EOL */
/* Demangled: __crc_ms_formatH_EOL */
extern void* __crc_ms_formatH_EOL;

/* Symbol: __crc_ms_formatD_EOL */
/* Demangled: __crc_ms_formatD_EOL */
extern void* __crc_ms_formatD_EOL;

/* Symbol: ms_formatH */
/* Demangled: ms_formatH */
int ms_formatH(void);

/* Symbol: ms_formatD */
/* Demangled: ms_formatD */
int ms_formatD(void);

/* Symbol: ms_formatH_ulong */
/* Demangled: ms_formatH_ulong */
int ms_formatH_ulong(void);

/* Symbol: ms_formatD_ulong */
/* Demangled: ms_formatD_ulong */
int ms_formatD_ulong(void);

/* Symbol: ms_formatH_EOL */
/* Demangled: ms_formatH_EOL */
int ms_formatH_EOL(void);

/* Symbol: ms_formatD_EOL */
/* Demangled: ms_formatD_EOL */
int ms_formatD_EOL(void);

/* Symbol: cpu_pmu */
/* Demangled: cpu_pmu */
extern void* cpu_pmu;

/* Symbol: cpu_pmu_debug_init */
/* Demangled: cpu_pmu_debug_init */
int cpu_pmu_debug_init(void);

/* Symbol: cpu_pmu_debug_uninit */
/* Demangled: cpu_pmu_debug_uninit */
int cpu_pmu_debug_uninit(void);

/* Symbol: mp_cpu */
/* Demangled: mp_cpu */
int mp_cpu(void);

/* Symbol: cpu_pmu_hw_init */
/* Demangled: cpu_pmu_hw_init */
int cpu_pmu_hw_init(void);

/* Symbol: cpu_pm_pmu_notifier */
/* Demangled: cpu_pm_pmu_notifier */
extern void* cpu_pm_pmu_notifier;

/* Symbol: handle_irq_lock */
/* Demangled: handle_irq_lock */
extern void* handle_irq_lock;

/* Symbol: handle_irq_orig */
/* Demangled: handle_irq_orig */
extern void* handle_irq_orig;

/* Symbol: sspm_buf_available */
/* Demangled: sspm_buf_available */
extern void* sspm_buf_available;

/* Symbol: met_ipi_to_sspm_command */
/* Demangled: met_ipi_to_sspm_command */
int met_ipi_to_sspm_command(void);

/* Symbol: armv8_pmu */
/* Demangled: armv8_pmu */
extern void* armv8_pmu;

/* Symbol: cpu_frequency */
/* Demangled: cpu_frequency */
int cpu_frequency(void);

/* Symbol: force_power_log_val */
/* Demangled: force_power_log_val */
int force_power_log_val(void);

/* Symbol: __crc_met_spmtwam */
/* Demangled: __crc_met_spmtwam */
extern void* __crc_met_spmtwam;

/* Symbol: ms_spmtwam */
/* Demangled: ms_spmtwam */
int ms_spmtwam(void);

/* Symbol: __crc_met_sspm_emi */
/* Demangled: __crc_met_sspm_emi */
extern void* __crc_met_sspm_emi;

/* Symbol: met_emi_create_basic */
/* Demangled: met_emi_create_basic */
int met_emi_create_basic(void);

/* Symbol: met_emi_delete_basic */
/* Demangled: met_emi_delete_basic */
int met_emi_delete_basic(void);

/* Symbol: emi_print_header_basic */
/* Demangled: emi_print_header_basic */
int emi_print_header_basic(void);

/* Symbol: ondiemet_emi_start_basic */
/* Demangled: ondiemet_emi_start_basic */
int ondiemet_emi_start_basic(void);

/* Symbol: ondiemet_emi_stop_basic */
/* Demangled: ondiemet_emi_stop_basic */
int ondiemet_emi_stop_basic(void);

/* Symbol: met_emi_resume_basic */
/* Demangled: met_emi_resume_basic */
int met_emi_resume_basic(void);

/* Symbol: __crc_emi_inited */
/* Demangled: __crc_emi_inited */
extern void* __crc_emi_inited;

/* Symbol: __crc_output_str_len */
/* Demangled: __crc_output_str_len */
extern void* __crc_output_str_len;

/* Symbol: __crc_dramc_pdir_enable */
/* Demangled: __crc_dramc_pdir_enable */
extern void* __crc_dramc_pdir_enable;

/* Symbol: __crc_kobj_emi */
/* Demangled: __crc_kobj_emi */
extern void* __crc_kobj_emi;

/* Symbol: __crc_emi_mdct_enable */
/* Demangled: __crc_emi_mdct_enable */
extern void* __crc_emi_mdct_enable;

/* Symbol: __crc_rd_mdmcu_rsv_num */
/* Demangled: __crc_rd_mdmcu_rsv_num */
extern void* __crc_rd_mdmcu_rsv_num;

/* Symbol: __crc_met_emi_regdump */
/* Demangled: __crc_met_emi_regdump */
extern void* __crc_met_emi_regdump;

/* Symbol: __crc_output_header_len */
/* Demangled: __crc_output_header_len */
extern void* __crc_output_header_len;

/* Symbol: __crc_BaseAddrEMI */
/* Demangled: __crc_BaseAddrEMI */
extern void* __crc_BaseAddrEMI;

/* Symbol: __crc_BaseAddrCHN_EMI */
/* Demangled: __crc_BaseAddrCHN_EMI */
extern void* __crc_BaseAddrCHN_EMI;

/* Symbol: __crc_header_str */
/* Demangled: __crc_header_str */
extern void* __crc_header_str;

/* Symbol: __crc_ttype1_16_en */
/* Demangled: __crc_ttype1_16_en */
extern void* __crc_ttype1_16_en;

/* Symbol: __crc_ttype17_21_en */
/* Demangled: __crc_ttype17_21_en */
extern void* __crc_ttype17_21_en;

/* Symbol: __crc_emi_tsct_enable */
/* Demangled: __crc_emi_tsct_enable */
extern void* __crc_emi_tsct_enable;

/* Symbol: __crc_emi_use_ondiemet */
/* Demangled: __crc_emi_use_ondiemet */
extern void* __crc_emi_use_ondiemet;

/* Symbol: __crc_dram_chann_num */
/* Demangled: __crc_dram_chann_num */
extern void* __crc_dram_chann_num;

/* Symbol: __crc_metemi_func_opt */
/* Demangled: __crc_metemi_func_opt */
extern void* __crc_metemi_func_opt;

/* Symbol: __crc_mdmcu_sel_enable */
/* Demangled: __crc_mdmcu_sel_enable */
extern void* __crc_mdmcu_sel_enable;

/* Symbol: __crc_emi_init */
/* Demangled: __crc_emi_init */
extern void* __crc_emi_init;

/* Symbol: __crc_ondiemet_emi_start_basic */
/* Demangled: __crc_ondiemet_emi_start_basic */
extern void* __crc_ondiemet_emi_start_basic;

/* Symbol: __crc_do_emi */
/* Demangled: __crc_do_emi */
extern void* __crc_do_emi;

/* Symbol: __crc_emi_create_header */
/* Demangled: __crc_emi_create_header */
extern void* __crc_emi_create_header;

/* Symbol: __crc_MET_EMI_Get_BaseClock_Rate */
/* Demangled: __crc_MET_EMI_Get_BaseClock_Rate */
extern void* __crc_MET_EMI_Get_BaseClock_Rate;

/* Symbol: __crc_emi_uninit */
/* Demangled: __crc_emi_uninit */
extern void* __crc_emi_uninit;

/* Symbol: __crc_met_emi_create_basic */
/* Demangled: __crc_met_emi_create_basic */
extern void* __crc_met_emi_create_basic;

/* Symbol: __crc_met_emi_delete_basic */
/* Demangled: __crc_met_emi_delete_basic */
extern void* __crc_met_emi_delete_basic;

/* Symbol: __crc_emi_print_header_basic */
/* Demangled: __crc_emi_print_header_basic */
extern void* __crc_emi_print_header_basic;

/* Symbol: __crc_MET_EMI_GetDramChannNum */
/* Demangled: __crc_MET_EMI_GetDramChannNum */
extern void* __crc_MET_EMI_GetDramChannNum;

/* Symbol: __crc_MET_BM_Init */
/* Demangled: __crc_MET_BM_Init */
extern void* __crc_MET_BM_Init;

/* Symbol: __crc_check_sspm_support */
/* Demangled: __crc_check_sspm_support */
extern void* __crc_check_sspm_support;

/* Symbol: __crc_met_get_dram_data_rate */
/* Demangled: __crc_met_get_dram_data_rate */
extern void* __crc_met_get_dram_data_rate;

/* Symbol: MET_BM_Init */
/* Demangled: MET_BM_Init */
int MET_BM_Init(void);

/* Symbol: BaseAddrEMI */
/* Demangled: BaseAddrEMI */
extern void* BaseAddrEMI;

/* Symbol: dram_chann_num */
/* Demangled: dram_chann_num */
extern void* dram_chann_num;

/* Symbol: BaseAddrCHN_EMI */
/* Demangled: BaseAddrCHN_EMI */
extern void* BaseAddrCHN_EMI;

/* Symbol: met_emi_default_val */
/* Demangled: met_emi_default_val */
extern void* met_emi_default_val;

/* Symbol: MET_EMI_GetDramChannNum */
/* Demangled: MET_EMI_GetDramChannNum */
int MET_EMI_GetDramChannNum(void);

/* Symbol: MET_BM_DeInit */
/* Demangled: MET_BM_DeInit */
int MET_BM_DeInit(void);

/* Symbol: MET_BM_SaveCfg */
/* Demangled: MET_BM_SaveCfg */
int MET_BM_SaveCfg(void);

/* Symbol: emi_config */
/* Demangled: emi_config */
extern void* emi_config;

/* Symbol: MET_BM_RestoreCfg */
/* Demangled: MET_BM_RestoreCfg */
int MET_BM_RestoreCfg(void);

/* Symbol: MET_BM_SetReadWriteType */
/* Demangled: MET_BM_SetReadWriteType */
int MET_BM_SetReadWriteType(void);

/* Symbol: MET_BM_SetMonitorCounter */
/* Demangled: MET_BM_SetMonitorCounter */
int MET_BM_SetMonitorCounter(void);

/* Symbol: MET_BM_SetTtypeCounterRW */
/* Demangled: MET_BM_SetTtypeCounterRW */
int MET_BM_SetTtypeCounterRW(void);

/* Symbol: MET_BM_Set_WsctTsct_id_sel */
/* Demangled: MET_BM_Set_WsctTsct_id_sel */
int MET_BM_Set_WsctTsct_id_sel(void);

/* Symbol: MET_BM_SetMaster */
/* Demangled: MET_BM_SetMaster */
int MET_BM_SetMaster(void);

/* Symbol: MET_BM_SetbusID_En */
/* Demangled: MET_BM_SetbusID_En */
int MET_BM_SetbusID_En(void);

/* Symbol: MET_BM_SetbusID */
/* Demangled: MET_BM_SetbusID */
int MET_BM_SetbusID(void);

/* Symbol: MET_BM_SetUltraHighFilter */
/* Demangled: MET_BM_SetUltraHighFilter */
int MET_BM_SetUltraHighFilter(void);

/* Symbol: MET_BM_SetLatencyCounter */
/* Demangled: MET_BM_SetLatencyCounter */
int MET_BM_SetLatencyCounter(void);

/* Symbol: MET_EMI_GetDramRankNum */
/* Demangled: MET_EMI_GetDramRankNum */
int MET_EMI_GetDramRankNum(void);

/* Symbol: MET_EMI_GetDramRankNum_CHN1 */
/* Demangled: MET_EMI_GetDramRankNum_CHN1 */
int MET_EMI_GetDramRankNum_CHN1(void);

/* Symbol: MET_BM_SetWSCT_master_rw */
/* Demangled: MET_BM_SetWSCT_master_rw */
int MET_BM_SetWSCT_master_rw(void);

/* Symbol: MET_BM_SetWSCT_high_priority */
/* Demangled: MET_BM_SetWSCT_high_priority */
int MET_BM_SetWSCT_high_priority(void);

/* Symbol: MET_BM_SetWSCT_busid_idmask */
/* Demangled: MET_BM_SetWSCT_busid_idmask */
int MET_BM_SetWSCT_busid_idmask(void);

/* Symbol: MET_BM_SetWSCT_chn_rank_sel */
/* Demangled: MET_BM_SetWSCT_chn_rank_sel */
int MET_BM_SetWSCT_chn_rank_sel(void);

/* Symbol: MET_BM_SetWSCT_burst_range */
/* Demangled: MET_BM_SetWSCT_burst_range */
int MET_BM_SetWSCT_burst_range(void);

/* Symbol: MET_BM_SetTSCT_busid_enable */
/* Demangled: MET_BM_SetTSCT_busid_enable */
int MET_BM_SetTSCT_busid_enable(void);

/* Symbol: MET_BM_SetTtype_high_priority_sel */
/* Demangled: MET_BM_SetTtype_high_priority_sel */
int MET_BM_SetTtype_high_priority_sel(void);

/* Symbol: MET_BM_SetTtype_busid_idmask */
/* Demangled: MET_BM_SetTtype_busid_idmask */
int MET_BM_SetTtype_busid_idmask(void);

/* Symbol: MET_BM_SetTtype_chn_rank_sel */
/* Demangled: MET_BM_SetTtype_chn_rank_sel */
int MET_BM_SetTtype_chn_rank_sel(void);

/* Symbol: MET_BM_SetTtype_burst_range */
/* Demangled: MET_BM_SetTtype_burst_range */
int MET_BM_SetTtype_burst_range(void);

/* Symbol: MET_EMI_Get_CONH_2ND */
/* Demangled: MET_EMI_Get_CONH_2ND */
int MET_EMI_Get_CONH_2ND(void);

/* Symbol: _clear_default_val */
/* Demangled: _clear_default_val */
int _clear_default_val(void);

/* Symbol: default_val */
/* Demangled: default_val */
extern void* default_val;

/* Symbol: default_val_store */
/* Demangled: default_val_store */
int default_val_store(void);

/* Symbol: default_val_show */
/* Demangled: default_val_show */
int default_val_show(void);

/* Symbol: _clear_msel_group_ext */
/* Demangled: _clear_msel_group_ext */
int _clear_msel_group_ext(void);

/* Symbol: msel_group_ext_val */
/* Demangled: msel_group_ext_val */
extern void* msel_group_ext_val;

/* Symbol: msel_group_ext */
/* Demangled: msel_group_ext */
extern void* msel_group_ext;

/* Symbol: msel_group_ext_store */
/* Demangled: msel_group_ext_store */
int msel_group_ext_store(void);

/* Symbol: msel_group_ext_show */
/* Demangled: msel_group_ext_show */
int msel_group_ext_show(void);

/* Symbol: _clear_wsct_rw */
/* Demangled: _clear_wsct_rw */
int _clear_wsct_rw(void);

/* Symbol: wsct_rw_val */
/* Demangled: wsct_rw_val */
extern void* wsct_rw_val;

/* Symbol: wsct_rw */
/* Demangled: wsct_rw */
extern void* wsct_rw;

/* Symbol: wsct_rw_store */
/* Demangled: wsct_rw_store */
int wsct_rw_store(void);

/* Symbol: wsct_rw_show */
/* Demangled: wsct_rw_show */
int wsct_rw_show(void);

/* Symbol: _clear_wsct_high_priority_enable */
/* Demangled: _clear_wsct_high_priority_enable */
int _clear_wsct_high_priority_enable(void);

/* Symbol: WSCT_HPRI_SEL */
/* Demangled: WSCT_HPRI_SEL */
extern void* WSCT_HPRI_SEL;

/* Symbol: WSCT_HPRI_DIS */
/* Demangled: WSCT_HPRI_DIS */
extern void* WSCT_HPRI_DIS;

/* Symbol: wsct_high_priority_enable */
/* Demangled: wsct_high_priority_enable */
extern void* wsct_high_priority_enable;

/* Symbol: wsct_high_priority_enable_store */
/* Demangled: wsct_high_priority_enable_store */
int wsct_high_priority_enable_store(void);

/* Symbol: wsct_high_priority_enable_show */
/* Demangled: wsct_high_priority_enable_show */
int wsct_high_priority_enable_show(void);

/* Symbol: _clear_wsct_busid */
/* Demangled: _clear_wsct_busid */
int _clear_wsct_busid(void);

/* Symbol: wsct_busid_val */
/* Demangled: wsct_busid_val */
extern void* wsct_busid_val;

/* Symbol: wsct_idMask_val */
/* Demangled: wsct_idMask_val */
extern void* wsct_idMask_val;

/* Symbol: wsct_busid */
/* Demangled: wsct_busid */
extern void* wsct_busid;

/* Symbol: wsct_busid_store */
/* Demangled: wsct_busid_store */
int wsct_busid_store(void);

/* Symbol: wsct_busid_show */
/* Demangled: wsct_busid_show */
int wsct_busid_show(void);

/* Symbol: _clear_wsct_chn_rank_sel */
/* Demangled: _clear_wsct_chn_rank_sel */
int _clear_wsct_chn_rank_sel(void);

/* Symbol: wsct_chn_rank_sel_val */
/* Demangled: wsct_chn_rank_sel_val */
extern void* wsct_chn_rank_sel_val;

/* Symbol: wsct_chn_rank_sel */
/* Demangled: wsct_chn_rank_sel */
extern void* wsct_chn_rank_sel;

/* Symbol: wsct_chn_rank_sel_store */
/* Demangled: wsct_chn_rank_sel_store */
int wsct_chn_rank_sel_store(void);

/* Symbol: wsct_chn_rank_sel_show */
/* Demangled: wsct_chn_rank_sel_show */
int wsct_chn_rank_sel_show(void);

/* Symbol: _clear_wsct_burst_range */
/* Demangled: _clear_wsct_burst_range */
int _clear_wsct_burst_range(void);

/* Symbol: wsct_byte_up_bnd_val */
/* Demangled: wsct_byte_up_bnd_val */
extern void* wsct_byte_up_bnd_val;

/* Symbol: wsct_byte_low_bnd_val */
/* Demangled: wsct_byte_low_bnd_val */
extern void* wsct_byte_low_bnd_val;

/* Symbol: wsct_byte_bnd_dis */
/* Demangled: wsct_byte_bnd_dis */
extern void* wsct_byte_bnd_dis;

/* Symbol: wsct_burst_range */
/* Demangled: wsct_burst_range */
extern void* wsct_burst_range;

/* Symbol: wsct_burst_range_store */
/* Demangled: wsct_burst_range_store */
int wsct_burst_range_store(void);

/* Symbol: wsct_burst_range_show */
/* Demangled: wsct_burst_range_show */
int wsct_burst_range_show(void);

/* Symbol: _clear_tsct_busid_enable */
/* Demangled: _clear_tsct_busid_enable */
int _clear_tsct_busid_enable(void);

/* Symbol: tsct_busid_enable_val */
/* Demangled: tsct_busid_enable_val */
extern void* tsct_busid_enable_val;

/* Symbol: tsct_busid_enable */
/* Demangled: tsct_busid_enable */
extern void* tsct_busid_enable;

/* Symbol: tsct_busid_enable_store */
/* Demangled: tsct_busid_enable_store */
int tsct_busid_enable_store(void);

/* Symbol: tsct_busid_enable_show */
/* Demangled: tsct_busid_enable_show */
int tsct_busid_enable_show(void);

/* Symbol: _clear_ttype_high_priority_ext */
/* Demangled: _clear_ttype_high_priority_ext */
int _clear_ttype_high_priority_ext(void);

/* Symbol: TTYPE_HPRI_SEL */
/* Demangled: TTYPE_HPRI_SEL */
extern void* TTYPE_HPRI_SEL;

/* Symbol: high_priority_filter */
/* Demangled: high_priority_filter */
extern void* high_priority_filter;

/* Symbol: ttype_high_priority_ext */
/* Demangled: ttype_high_priority_ext */
extern void* ttype_high_priority_ext;

/* Symbol: ttype_high_priority_ext_store */
/* Demangled: ttype_high_priority_ext_store */
int ttype_high_priority_ext_store(void);

/* Symbol: ttype_high_priority_ext_show */
/* Demangled: ttype_high_priority_ext_show */
int ttype_high_priority_ext_show(void);

/* Symbol: _clear_ttype_busid_ext */
/* Demangled: _clear_ttype_busid_ext */
int _clear_ttype_busid_ext(void);

/* Symbol: ttype_busid_val */
/* Demangled: ttype_busid_val */
extern void* ttype_busid_val;

/* Symbol: ttype_idMask_val */
/* Demangled: ttype_idMask_val */
extern void* ttype_idMask_val;

/* Symbol: ttype_busid_ext */
/* Demangled: ttype_busid_ext */
extern void* ttype_busid_ext;

/* Symbol: ttype_busid_ext_store */
/* Demangled: ttype_busid_ext_store */
int ttype_busid_ext_store(void);

/* Symbol: ttype_busid_ext_show */
/* Demangled: ttype_busid_ext_show */
int ttype_busid_ext_show(void);

/* Symbol: _clear_ttype_chn_rank_sel */
/* Demangled: _clear_ttype_chn_rank_sel */
int _clear_ttype_chn_rank_sel(void);

/* Symbol: ttype_chn_rank_sel_val */
/* Demangled: ttype_chn_rank_sel_val */
extern void* ttype_chn_rank_sel_val;

/* Symbol: ttype_chn_rank_sel */
/* Demangled: ttype_chn_rank_sel */
extern void* ttype_chn_rank_sel;

/* Symbol: ttype_chn_rank_sel_store */
/* Demangled: ttype_chn_rank_sel_store */
int ttype_chn_rank_sel_store(void);

/* Symbol: ttype_chn_rank_sel_show */
/* Demangled: ttype_chn_rank_sel_show */
int ttype_chn_rank_sel_show(void);

/* Symbol: _clear_ttype_burst_range */
/* Demangled: _clear_ttype_burst_range */
int _clear_ttype_burst_range(void);

/* Symbol: ttype_byte_low_bnd_val */
/* Demangled: ttype_byte_low_bnd_val */
extern void* ttype_byte_low_bnd_val;

/* Symbol: ttype_byte_up_bnd_val */
/* Demangled: ttype_byte_up_bnd_val */
extern void* ttype_byte_up_bnd_val;

/* Symbol: ttype_byte_bnd_dis */
/* Demangled: ttype_byte_bnd_dis */
extern void* ttype_byte_bnd_dis;

/* Symbol: ttype_burst_range */
/* Demangled: ttype_burst_range */
extern void* ttype_burst_range;

/* Symbol: ttype_burst_range_store */
/* Demangled: ttype_burst_range_store */
int ttype_burst_range_store(void);

/* Symbol: ttype_burst_range_show */
/* Demangled: ttype_burst_range_show */
int ttype_burst_range_show(void);

/* Symbol: _clear_wmask_msel */
/* Demangled: _clear_wmask_msel */
int _clear_wmask_msel(void);

/* Symbol: wmask_msel_val */
/* Demangled: wmask_msel_val */
extern void* wmask_msel_val;

/* Symbol: wmask_msel */
/* Demangled: wmask_msel */
extern void* wmask_msel;

/* Symbol: wmask_msel_store */
/* Demangled: wmask_msel_store */
int wmask_msel_store(void);

/* Symbol: wmask_msel_show */
/* Demangled: wmask_msel_show */
int wmask_msel_show(void);

/* Symbol: _clear_ageexp_msel_rw */
/* Demangled: _clear_ageexp_msel_rw */
int _clear_ageexp_msel_rw(void);

/* Symbol: ageexp_msel_val */
/* Demangled: ageexp_msel_val */
extern void* ageexp_msel_val;

/* Symbol: ageexp_rw_val */
/* Demangled: ageexp_rw_val */
extern void* ageexp_rw_val;

/* Symbol: ageexp_msel_rw */
/* Demangled: ageexp_msel_rw */
extern void* ageexp_msel_rw;

/* Symbol: ageexp_msel_rw_store */
/* Demangled: ageexp_msel_rw_store */
int ageexp_msel_rw_store(void);

/* Symbol: ageexp_msel_rw_show */
/* Demangled: ageexp_msel_rw_show */
int ageexp_msel_rw_show(void);

/* Symbol: sspm_support_feature_show */
/* Demangled: sspm_support_feature_show */
int sspm_support_feature_show(void);

/* Symbol: get_sspm_support_feature */
/* Demangled: get_sspm_support_feature */
int get_sspm_support_feature(void);

/* Symbol: _clear_setting */
/* Demangled: _clear_setting */
int _clear_setting(void);

/* Symbol: msel_group1 */
/* Demangled: msel_group1 */
extern void* msel_group1;

/* Symbol: msel_group2 */
/* Demangled: msel_group2 */
extern void* msel_group2;

/* Symbol: msel_group3 */
/* Demangled: msel_group3 */
extern void* msel_group3;

/* Symbol: emi_TP_busfiltr_enable */
/* Demangled: emi_TP_busfiltr_enable */
extern void* emi_TP_busfiltr_enable;

/* Symbol: reserve_wsct_setting */
/* Demangled: reserve_wsct_setting */
extern void* reserve_wsct_setting;

/* Symbol: msel_enable */
/* Demangled: msel_enable */
extern void* msel_enable;

/* Symbol: rwtype */
/* Demangled: rwtype */
extern void* rwtype;

/* Symbol: bw_limiter_enable */
/* Demangled: bw_limiter_enable */
extern void* bw_limiter_enable;

/* Symbol: dramc_pdir_enable */
/* Demangled: dramc_pdir_enable */
extern void* dramc_pdir_enable;

/* Symbol: met_emi_regdump */
/* Demangled: met_emi_regdump */
extern void* met_emi_regdump;

/* Symbol: ttype_nbeat_val */
/* Demangled: ttype_nbeat_val */
extern void* ttype_nbeat_val;

/* Symbol: ttype1_16_en */
/* Demangled: ttype1_16_en */
extern void* ttype1_16_en;

/* Symbol: ttype17_21_en */
/* Demangled: ttype17_21_en */
extern void* ttype17_21_en;

/* Symbol: ttype_rw_val */
/* Demangled: ttype_rw_val */
extern void* ttype_rw_val;

/* Symbol: ttype_master_val */
/* Demangled: ttype_master_val */
extern void* ttype_master_val;

/* Symbol: ttype_nbyte_val */
/* Demangled: ttype_nbyte_val */
extern void* ttype_nbyte_val;

/* Symbol: ttype_burst_val */
/* Demangled: ttype_burst_val */
extern void* ttype_burst_val;

/* Symbol: metemi_func_opt */
/* Demangled: metemi_func_opt */
extern void* metemi_func_opt;

/* Symbol: emi_tsct_enable */
/* Demangled: emi_tsct_enable */
extern void* emi_tsct_enable;

/* Symbol: emi_mdct_enable */
/* Demangled: emi_mdct_enable */
extern void* emi_mdct_enable;

/* Symbol: rd_mdmcu_rsv_num */
/* Demangled: rd_mdmcu_rsv_num */
extern void* rd_mdmcu_rsv_num;

/* Symbol: mdmcu_sel_enable */
/* Demangled: mdmcu_sel_enable */
extern void* mdmcu_sel_enable;

/* Symbol: clear_setting_store */
/* Demangled: clear_setting_store */
int clear_setting_store(void);

/* Symbol: emi_init */
/* Demangled: emi_init */
int emi_init(void);

/* Symbol: emi_uninit */
/* Demangled: emi_uninit */
int emi_uninit(void);

/* Symbol: MET_BM_IPI_REGISTER_CB */
/* Demangled: MET_BM_IPI_REGISTER_CB */
int MET_BM_IPI_REGISTER_CB(void);

/* Symbol: MET_BM_IPI_configs */
/* Demangled: MET_BM_IPI_configs */
int MET_BM_IPI_configs(void);

/* Symbol: check_sspm_support */
/* Demangled: check_sspm_support */
int check_sspm_support(void);

/* Symbol: MET_GET_DRAM_TYPE */
/* Demangled: MET_GET_DRAM_TYPE */
int MET_GET_DRAM_TYPE(void);

/* Symbol: MET_EMI_Get_BaseClock_Rate */
/* Demangled: MET_EMI_Get_BaseClock_Rate */
int MET_EMI_Get_BaseClock_Rate(void);

/* Symbol: met_get_dram_data_rate */
/* Demangled: met_get_dram_data_rate */
int met_get_dram_data_rate(void);

/* Symbol: emi_create_header */
/* Demangled: emi_create_header */
int emi_create_header(void);

/* Symbol: emi_use_ondiemet */
/* Demangled: emi_use_ondiemet */
extern void* emi_use_ondiemet;

/* Symbol: emi_inited */
/* Demangled: emi_inited */
extern void* emi_inited;

/* Symbol: kobj_emi */
/* Demangled: kobj_emi */
extern void* kobj_emi;

/* Symbol: clear_setting_attr */
/* Demangled: clear_setting_attr */
extern void* clear_setting_attr;

/* Symbol: msel_group_ext_attr */
/* Demangled: msel_group_ext_attr */
extern void* msel_group_ext_attr;

/* Symbol: wsct_rw_attr */
/* Demangled: wsct_rw_attr */
extern void* wsct_rw_attr;

/* Symbol: wsct_high_priority_enable_attr */
/* Demangled: wsct_high_priority_enable_attr */
extern void* wsct_high_priority_enable_attr;

/* Symbol: wsct_busid_attr */
/* Demangled: wsct_busid_attr */
extern void* wsct_busid_attr;

/* Symbol: wsct_chn_rank_sel_attr */
/* Demangled: wsct_chn_rank_sel_attr */
extern void* wsct_chn_rank_sel_attr;

/* Symbol: wsct_burst_range_attr */
/* Demangled: wsct_burst_range_attr */
extern void* wsct_burst_range_attr;

/* Symbol: tsct_busid_enable_attr */
/* Demangled: tsct_busid_enable_attr */
extern void* tsct_busid_enable_attr;

/* Symbol: ttype_high_priority_ext_attr */
/* Demangled: ttype_high_priority_ext_attr */
extern void* ttype_high_priority_ext_attr;

/* Symbol: ttype_busid_ext_attr */
/* Demangled: ttype_busid_ext_attr */
extern void* ttype_busid_ext_attr;

/* Symbol: ttype_chn_rank_sel_attr */
/* Demangled: ttype_chn_rank_sel_attr */
extern void* ttype_chn_rank_sel_attr;

/* Symbol: ttype_burst_range_attr */
/* Demangled: ttype_burst_range_attr */
extern void* ttype_burst_range_attr;

/* Symbol: wmask_msel_attr */
/* Demangled: wmask_msel_attr */
extern void* wmask_msel_attr;

/* Symbol: ageexp_msel_rw_attr */
/* Demangled: ageexp_msel_rw_attr */
extern void* ageexp_msel_rw_attr;

/* Symbol: default_val_attr */
/* Demangled: default_val_attr */
extern void* default_val_attr;

/* Symbol: do_emi */
/* Demangled: do_emi */
int do_emi(void);

/* Symbol: header_str */
/* Demangled: header_str */
extern void* header_str;

/* Symbol: output_str_len */
/* Demangled: output_str_len */
extern void* output_str_len;

/* Symbol: output_header_len */
/* Demangled: output_header_len */
extern void* output_header_len;

/* Symbol: emi_chn_config */
/* Demangled: emi_chn_config */
extern void* emi_chn_config;

/* Symbol: delim_comma */
/* Demangled: delim_comma */
extern void* delim_comma;

/* Symbol: delim_coclon */
/* Demangled: delim_coclon */
extern void* delim_coclon;

/* Symbol: GPU_Loading */
/* Demangled: GPU_Loading */
int GPU_Loading(void);

/* Symbol: GPU_Sub_Loading */
/* Demangled: GPU_Sub_Loading */
int GPU_Sub_Loading(void);

/* Symbol: GPU_3D_Fences_Count */
/* Demangled: GPU_3D_Fences_Count */
int GPU_3D_Fences_Count(void);

/* Symbol: GPU_DVFS */
/* Demangled: GPU_DVFS */
int GPU_DVFS(void);

/* Symbol: GPU_DVFS_TYPE */
/* Demangled: GPU_DVFS_TYPE */
int GPU_DVFS_TYPE(void);

/* Symbol: GPU_DVFS_VSYNC */
/* Demangled: GPU_DVFS_VSYNC */
int GPU_DVFS_VSYNC(void);

/* Symbol: GPU_VSYNC_OFFSET_STATUS */
/* Demangled: GPU_VSYNC_OFFSET_STATUS */
int GPU_VSYNC_OFFSET_STATUS(void);

/* Symbol: GPU_MEM */
/* Demangled: GPU_MEM */
int GPU_MEM(void);

/* Symbol: GPU_Power */
/* Demangled: GPU_Power */
int GPU_Power(void);

/* Symbol: GPU_PMU_RAW */
/* Demangled: GPU_PMU_RAW */
int GPU_PMU_RAW(void);

/* Symbol: GPU_STALL_RAW */
/* Demangled: GPU_STALL_RAW */
int GPU_STALL_RAW(void);

/* Symbol: vcorefs */
/* Demangled: vcorefs */
int vcorefs(void);

/* Symbol: vcorefs_kicker */
/* Demangled: vcorefs_kicker */
int vcorefs_kicker(void);

/* Symbol: ms_vcorefs */
/* Demangled: ms_vcorefs */
int ms_vcorefs(void);

/* Symbol: vcoredvfs_irq */
/* Demangled: vcoredvfs_irq */
int vcoredvfs_irq(void);

/* Symbol: opp_info */
/* Demangled: opp_info */
extern void* opp_info;

/* Symbol: polling_mode */
/* Demangled: polling_mode */
extern void* polling_mode;

/* Symbol: src_req */
/* Demangled: src_req */
extern void* src_req;

/* Symbol: default_info_name */
/* Demangled: default_info_name */
extern void* default_info_name;

/* Symbol: default_src_name */
/* Demangled: default_src_name */
extern void* default_src_name;

/* Symbol: __crc_met_ptpod */
/* Demangled: __crc_met_ptpod */
extern void* __crc_met_ptpod;

/* Symbol: ms_ptpod */
/* Demangled: ms_ptpod */
int ms_ptpod(void);

/* Symbol: mp_dsu */
/* Demangled: mp_dsu */
int mp_dsu(void);

/* Symbol: met_perf_cpudsu_down */
/* Demangled: met_perf_cpudsu_down */
int met_perf_cpudsu_down(void);

/* Symbol: cpu_dsu */
/* Demangled: cpu_dsu */
extern void* cpu_dsu;

/* Symbol: met_perf_cpudsu_polling */
/* Demangled: met_perf_cpudsu_polling */
int met_perf_cpudsu_polling(void);

/* Symbol: cpu_dsu_hw_init */
/* Demangled: cpu_dsu_hw_init */
int cpu_dsu_hw_init(void);

/* Symbol: armv8_dsu */
/* Demangled: armv8_dsu */
extern void* armv8_dsu;

/* Symbol: __crc_met_wall_time */
/* Demangled: __crc_met_wall_time */
extern void* __crc_met_wall_time;

/* Symbol: __sys_timer_get_cnt */
/* Demangled: __sys_timer_get_cnt */
int __sys_timer_get_cnt(void);

/* Symbol: met_arch_counter_get_cntvct_symbol */
/* Demangled: met_arch_counter_get_cntvct_symbol */
extern void* met_arch_counter_get_cntvct_symbol;

/* Symbol: met_mono_time */
/* Demangled: met_mono_time */
int met_mono_time(void);

/* Symbol: met_ap_wall_time */
/* Demangled: met_ap_wall_time */
int met_ap_wall_time(void);

/* Symbol: clksrc_attr_tb */
/* Demangled: clksrc_attr_tb */
extern void* clksrc_attr_tb;

/* Symbol: __crc_ondiemet_module */
/* Demangled: __crc_ondiemet_module */
extern void* __crc_ondiemet_module;

/* Symbol: sspm_attr_init */
/* Demangled: sspm_attr_init */
int sspm_attr_init(void);

/* Symbol: sspm_attr_uninit */
/* Demangled: sspm_attr_uninit */
int sspm_attr_uninit(void);

/* Symbol: scp_start */
/* Demangled: scp_start */
extern void* scp_start;

/* Symbol: ondiemet_module_started */
/* Demangled: ondiemet_module_started */
extern void* ondiemet_module_started;

/* Symbol: scp_stop */
/* Demangled: scp_stop */
extern void* scp_stop;

/* Symbol: scp_extract */
/* Demangled: scp_extract */
extern void* scp_extract;

/* Symbol: sspm_start */
/* Demangled: sspm_start */
int sspm_start(void);

/* Symbol: sspm_stop */
/* Demangled: sspm_stop */
int sspm_stop(void);

/* Symbol: sspm_extract */
/* Demangled: sspm_extract */
int sspm_extract(void);

/* Symbol: ondiemet_log_req_enq */
/* Demangled: ondiemet_log_req_enq */
int ondiemet_log_req_enq(void);

/* Symbol: ondiemet_log_req_q */
/* Demangled: ondiemet_log_req_q */
extern void* ondiemet_log_req_q;

/* Symbol: down_freezable_interruptible */
/* Demangled: down_freezable_interruptible */
int down_freezable_interruptible(void);

/* Symbol: __ondiemet_log_req_deq */
/* Demangled: __ondiemet_log_req_deq */
int __ondiemet_log_req_deq(void);

/* Symbol: __ondiemet_log_req_open */
/* Demangled: __ondiemet_log_req_open */
int __ondiemet_log_req_open(void);

/* Symbol: __ondiemet_log_req_closed */
/* Demangled: __ondiemet_log_req_closed */
int __ondiemet_log_req_closed(void);

/* Symbol: __ondiemet_log_req_working */
/* Demangled: __ondiemet_log_req_working */
int __ondiemet_log_req_working(void);

/* Symbol: ondiemet_log_manager_start */
/* Demangled: ondiemet_log_manager_start */
int ondiemet_log_manager_start(void);

/* Symbol: log_start_comp */
/* Demangled: log_start_comp */
extern void* log_start_comp;

/* Symbol: log_stop_comp */
/* Demangled: log_stop_comp */
extern void* log_stop_comp;

/* Symbol: ondiemet_parse_num */
/* Demangled: ondiemet_parse_num */
int ondiemet_parse_num(void);

/* Symbol: lock_tracef */
/* Demangled: lock_tracef */
extern void* lock_tracef;

/* Symbol: lock_trace_owner_pid */
/* Demangled: lock_trace_owner_pid */
extern void* lock_trace_owner_pid;

/* Symbol: trace_owner_pid */
/* Demangled: trace_owner_pid */
extern void* trace_owner_pid;

/* Symbol: __crc_sspm_buf_available */
/* Demangled: __crc_sspm_buf_available */
extern void* __crc_sspm_buf_available;

/* Symbol: ondiemet_sspm_log_virt_addr */
/* Demangled: ondiemet_sspm_log_virt_addr */
extern void* ondiemet_sspm_log_virt_addr;

/* Symbol: ondiemet_sspm_log_phy_addr */
/* Demangled: ondiemet_sspm_log_phy_addr */
extern void* ondiemet_sspm_log_phy_addr;

/* Symbol: ondiemet_sspm_log_size */
/* Demangled: ondiemet_sspm_log_size */
extern void* ondiemet_sspm_log_size;

/* Symbol: start_sspm_ipi_recv_thread */
/* Demangled: start_sspm_ipi_recv_thread */
int start_sspm_ipi_recv_thread(void);

/* Symbol: stop_sspm_ipi_recv_thread */
/* Demangled: stop_sspm_ipi_recv_thread */
int stop_sspm_ipi_recv_thread(void);

/* Symbol: met_sspm_log_discard */
/* Demangled: met_sspm_log_discard */
extern void* met_sspm_log_discard;

/* Symbol: sspm_log_mode */
/* Demangled: sspm_log_mode */
extern void* sspm_log_mode;

/* Symbol: sspm_run_mode */
/* Demangled: sspm_run_mode */
extern void* sspm_run_mode;

/* Symbol: sspm_buffer_dumping */
/* Demangled: sspm_buffer_dumping */
extern void* sspm_buffer_dumping;

/* Symbol: sspm_flush */
/* Demangled: sspm_flush */
int sspm_flush(void);

/* Symbol: sspm_log_size */
/* Demangled: sspm_log_size */
extern void* sspm_log_size;

/* Symbol: sspm_buf_mapped */
/* Demangled: sspm_buf_mapped */
extern void* sspm_buf_mapped;

/* Symbol: __crc_met_ipi_to_sspm_command */
/* Demangled: __crc_met_ipi_to_sspm_command */
extern void* __crc_met_ipi_to_sspm_command;

/* Symbol: __crc_met_ipi_to_sspm_command_async */
/* Demangled: __crc_met_ipi_to_sspm_command_async */
extern void* __crc_met_ipi_to_sspm_command_async;

/* Symbol: log_done_cb */
/* Demangled: log_done_cb */
int log_done_cb(void);

/* Symbol: ondiemet_sspm_recv_thread */
/* Demangled: ondiemet_sspm_recv_thread */
int ondiemet_sspm_recv_thread(void);

/* Symbol: sspm_recv_thread_comp */
/* Demangled: sspm_recv_thread_comp */
extern void* sspm_recv_thread_comp;

/* Symbol: met_ipi_to_sspm_command_async */
/* Demangled: met_ipi_to_sspm_command_async */
int met_ipi_to_sspm_command_async(void);

/* Symbol: __crc_met_sspm_common */
/* Demangled: __crc_met_sspm_common */
extern void* __crc_met_sspm_common;

/* Symbol: met_evnet_header */
/* Demangled: met_evnet_header */
extern void* met_evnet_header;

/* Symbol: __crc_met_sspm_walltime */
/* Demangled: __crc_met_sspm_walltime */
extern void* __crc_met_sspm_walltime;

/* Symbol: met_smi_delete */
/* Demangled: met_smi_delete */
int met_smi_delete(void);

/* Symbol: smi_array_index */
/* Demangled: smi_array_index */
extern void* smi_array_index;

/* Symbol: smi_conf_array */
/* Demangled: smi_conf_array */
extern void* smi_conf_array;

__END_DECLS

#endif /* BEGONIA_RE_MET_KO_H */

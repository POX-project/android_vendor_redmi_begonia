/*
 * Reverse-Engineered Source for: met.ko
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "met_ko"

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
#include "met_ko.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: init_module */
extern "C" __attribute__((visibility("default"))) int init_module(void) {
    ALOGD("init_module() called");
    return 0;
}

/* Exported Object: met_cpu */
extern "C" __attribute__((visibility("default"))) void* met_cpu = NULL;

/* Exported Object: met_get_cpuinfo_symbol */
extern "C" __attribute__((visibility("default"))) void* met_get_cpuinfo_symbol = NULL;

/* Exported Object: tracing_record_cmdline_symbol */
extern "C" __attribute__((visibility("default"))) void* tracing_record_cmdline_symbol = NULL;

/* Exported Object: met_cpu_frequency_symbol */
extern "C" __attribute__((visibility("default"))) void* met_cpu_frequency_symbol = NULL;

/* Exported Object: met_reg_switch_symbol */
extern "C" __attribute__((visibility("default"))) void* met_reg_switch_symbol = NULL;

/* Exported Object: met_unreg_switch_symbol */
extern "C" __attribute__((visibility("default"))) void* met_unreg_switch_symbol = NULL;

/* Exported Object: met_arch_setup_dma_ops_symbol */
extern "C" __attribute__((visibility("default"))) void* met_arch_setup_dma_ops_symbol = NULL;

/* Exported Object: met_perf_event_read_local_symbol */
extern "C" __attribute__((visibility("default"))) void* met_perf_event_read_local_symbol = NULL;

/* Exported Object: met_kthread_create_on_cpu_symbol */
extern "C" __attribute__((visibility("default"))) void* met_kthread_create_on_cpu_symbol = NULL;

/* Exported Object: met_smp_call_function_single_symbol */
extern "C" __attribute__((visibility("default"))) void* met_smp_call_function_single_symbol = NULL;

/* Exported Object: met_reg_event_power_symbol */
extern "C" __attribute__((visibility("default"))) void* met_reg_event_power_symbol = NULL;

/* Exported Object: met_unreg_event_power_symbol */
extern "C" __attribute__((visibility("default"))) void* met_unreg_event_power_symbol = NULL;

/* Demangled: fs_reg */
extern "C" __attribute__((visibility("default"))) int fs_reg(void) {
    ALOGD("fs_reg() called");
    return 0;
}

/* Exported Object: met_boot_msg_tmp */
extern "C" __attribute__((visibility("default"))) void* met_boot_msg_tmp = NULL;

/* Demangled: pr_bootmsg */
extern "C" __attribute__((visibility("default"))) int pr_bootmsg(void) {
    ALOGD("pr_bootmsg() called");
    return 0;
}

/* Demangled: met_set_platform */
extern "C" __attribute__((visibility("default"))) int met_set_platform(void) {
    ALOGD("met_set_platform() called");
    return 0;
}

/* Exported Object: mt_get_chip_id_symbol */
extern "C" __attribute__((visibility("default"))) void* mt_get_chip_id_symbol = NULL;

/* Demangled: met_set_chip_id */
extern "C" __attribute__((visibility("default"))) int met_set_chip_id(void) {
    ALOGD("met_set_chip_id() called");
    return 0;
}

/* Demangled: met_set_topology */
extern "C" __attribute__((visibility("default"))) int met_set_topology(void) {
    ALOGD("met_set_topology() called");
    return 0;
}

/* Demangled: core_plf_init */
extern "C" __attribute__((visibility("default"))) int core_plf_init(void) {
    ALOGD("core_plf_init() called");
    return 0;
}

/* Demangled: cleanup_module */
extern "C" __attribute__((visibility("default"))) int cleanup_module(void) {
    ALOGD("cleanup_module() called");
    return 0;
}

/* Demangled: core_plf_exit */
extern "C" __attribute__((visibility("default"))) int core_plf_exit(void) {
    ALOGD("core_plf_exit() called");
    return 0;
}

/* Demangled: fs_unreg */
extern "C" __attribute__((visibility("default"))) int fs_unreg(void) {
    ALOGD("fs_unreg() called");
    return 0;
}

/* Exported Object: __this_module */
extern "C" __attribute__((visibility("default"))) void* __this_module = NULL;

/* Exported Object: __crc_met_backlight */
extern "C" __attribute__((visibility("default"))) void* __crc_met_backlight = NULL;

/* Demangled: enable_met_backlight_tag_real */
extern "C" __attribute__((visibility("default"))) int enable_met_backlight_tag_real(void) {
    ALOGD("enable_met_backlight_tag_real() called");
    return 0;
}

/* Demangled: output_met_backlight_tag_real */
extern "C" __attribute__((visibility("default"))) int output_met_backlight_tag_real(void) {
    ALOGD("output_met_backlight_tag_real() called");
    return 0;
}

/* Demangled: met_tag_oneshot_real */
extern "C" __attribute__((visibility("default"))) int met_tag_oneshot_real(void) {
    ALOGD("met_tag_oneshot_real() called");
    return 0;
}

/* Exported Object: met_backlight */
extern "C" __attribute__((visibility("default"))) void* met_backlight = NULL;

/* Exported Object: __crc_met_tag_start_real */
extern "C" __attribute__((visibility("default"))) void* __crc_met_tag_start_real = NULL;

/* Exported Object: __crc_met_tag_end_real */
extern "C" __attribute__((visibility("default"))) void* __crc_met_tag_end_real = NULL;

/* Exported Object: __crc_met_tag_oneshot_real */
extern "C" __attribute__((visibility("default"))) void* __crc_met_tag_oneshot_real = NULL;

/* Demangled: tracing_mark_write */
extern "C" __attribute__((visibility("default"))) int tracing_mark_write(void) {
    ALOGD("tracing_mark_write() called");
    return 0;
}

/* Exported Object: met_strbuf_irq */
extern "C" __attribute__((visibility("default"))) void* met_strbuf_irq = NULL;

/* Exported Object: bltab */
extern "C" __attribute__((visibility("default"))) void* bltab = NULL;

/* Exported Object: met_strbuf_nmi */
extern "C" __attribute__((visibility("default"))) void* met_strbuf_nmi = NULL;

/* Exported Object: met_mode */
extern "C" __attribute__((visibility("default"))) void* met_mode = NULL;

/* Exported Object: met_strbuf_sirq */
extern "C" __attribute__((visibility("default"))) void* met_strbuf_sirq = NULL;

/* Exported Object: met_strbuf */
extern "C" __attribute__((visibility("default"))) void* met_strbuf = NULL;

/* Demangled: met_tag_init */
extern "C" __attribute__((visibility("default"))) int met_tag_init(void) {
    ALOGD("met_tag_init() called");
    return 0;
}

/* Demangled: met_tag_uninit */
extern "C" __attribute__((visibility("default"))) int met_tag_uninit(void) {
    ALOGD("met_tag_uninit() called");
    return 0;
}

/* Demangled: met_set_dump_buffer_real */
extern "C" __attribute__((visibility("default"))) int met_set_dump_buffer_real(void) {
    ALOGD("met_set_dump_buffer_real() called");
    return 0;
}

/* Demangled: met_tag_start_real */
extern "C" __attribute__((visibility("default"))) int met_tag_start_real(void) {
    ALOGD("met_tag_start_real() called");
    return 0;
}

/* Demangled: met_tag_end_real */
extern "C" __attribute__((visibility("default"))) int met_tag_end_real(void) {
    ALOGD("met_tag_end_real() called");
    return 0;
}

/* Demangled: met_tag_async_start_real */
extern "C" __attribute__((visibility("default"))) int met_tag_async_start_real(void) {
    ALOGD("met_tag_async_start_real() called");
    return 0;
}

/* Demangled: met_tag_async_end_real */
extern "C" __attribute__((visibility("default"))) int met_tag_async_end_real(void) {
    ALOGD("met_tag_async_end_real() called");
    return 0;
}

/* Demangled: met_tag_userdata_real */
extern "C" __attribute__((visibility("default"))) int met_tag_userdata_real(void) {
    ALOGD("met_tag_userdata_real() called");
    return 0;
}

/* Demangled: met_tag_dump_real */
extern "C" __attribute__((visibility("default"))) int met_tag_dump_real(void) {
    ALOGD("met_tag_dump_real() called");
    return 0;
}

/* Demangled: met_tag_disable_real */
extern "C" __attribute__((visibility("default"))) int met_tag_disable_real(void) {
    ALOGD("met_tag_disable_real() called");
    return 0;
}

/* Demangled: met_tag_enable_real */
extern "C" __attribute__((visibility("default"))) int met_tag_enable_real(void) {
    ALOGD("met_tag_enable_real() called");
    return 0;
}

/* Demangled: met_save_dump_buffer_real */
extern "C" __attribute__((visibility("default"))) int met_save_dump_buffer_real(void) {
    ALOGD("met_save_dump_buffer_real() called");
    return 0;
}

/* Demangled: met_save_log_real */
extern "C" __attribute__((visibility("default"))) int met_save_log_real(void) {
    ALOGD("met_save_log_real() called");
    return 0;
}

/* Demangled: tag_reg */
extern "C" __attribute__((visibility("default"))) int tag_reg(void) {
    ALOGD("tag_reg() called");
    return 0;
}

/* Demangled: met_sched_switch */
extern "C" __attribute__((visibility("default"))) int met_sched_switch(void) {
    ALOGD("met_sched_switch() called");
    return 0;
}

/* Demangled: tag_unreg */
extern "C" __attribute__((visibility("default"))) int tag_unreg(void) {
    ALOGD("tag_unreg() called");
    return 0;
}

/* Exported Object: __crc_met_mode */
extern "C" __attribute__((visibility("default"))) void* __crc_met_mode = NULL;

/* Exported Object: __crc_met_strbuf_nmi */
extern "C" __attribute__((visibility("default"))) void* __crc_met_strbuf_nmi = NULL;

/* Exported Object: __crc_met_strbuf_irq */
extern "C" __attribute__((visibility("default"))) void* __crc_met_strbuf_irq = NULL;

/* Exported Object: __crc_met_strbuf_sirq */
extern "C" __attribute__((visibility("default"))) void* __crc_met_strbuf_sirq = NULL;

/* Exported Object: __crc_met_strbuf */
extern "C" __attribute__((visibility("default"))) void* __crc_met_strbuf = NULL;

/* Exported Object: __crc_met_device */
extern "C" __attribute__((visibility("default"))) void* __crc_met_device = NULL;

/* Exported Object: __crc_met_boot_msg_tmp */
extern "C" __attribute__((visibility("default"))) void* __crc_met_boot_msg_tmp = NULL;

/* Exported Object: __crc_pr_bootmsg */
extern "C" __attribute__((visibility("default"))) void* __crc_pr_bootmsg = NULL;

/* Exported Object: __crc_met_register */
extern "C" __attribute__((visibility("default"))) void* __crc_met_register = NULL;

/* Exported Object: __crc_met_deregister */
extern "C" __attribute__((visibility("default"))) void* __crc_met_deregister = NULL;

/* Exported Object: __crc_met_set_platform */
extern "C" __attribute__((visibility("default"))) void* __crc_met_set_platform = NULL;

/* Exported Object: __crc_met_get_platform */
extern "C" __attribute__((visibility("default"))) void* __crc_met_get_platform = NULL;

/* Exported Object: __crc_met_set_chip_id */
extern "C" __attribute__((visibility("default"))) void* __crc_met_set_chip_id = NULL;

/* Exported Object: __crc_met_get_chip_id */
extern "C" __attribute__((visibility("default"))) void* __crc_met_get_chip_id = NULL;

/* Exported Object: __crc_met_set_topology */
extern "C" __attribute__((visibility("default"))) void* __crc_met_set_topology = NULL;

/* Demangled: met_parse_num */
extern "C" __attribute__((visibility("default"))) int met_parse_num(void) {
    ALOGD("met_parse_num() called");
    return 0;
}

/* Demangled: met_set_suspend_notify */
extern "C" __attribute__((visibility("default"))) int met_set_suspend_notify(void) {
    ALOGD("met_set_suspend_notify() called");
    return 0;
}

/* Exported Object: met_boot_msg_idx */
extern "C" __attribute__((visibility("default"))) void* met_boot_msg_idx = NULL;

/* Exported Object: met_boot_msg */
extern "C" __attribute__((visibility("default"))) void* met_boot_msg = NULL;

/* Demangled: met_register */
extern "C" __attribute__((visibility("default"))) int met_register(void) {
    ALOGD("met_register() called");
    return 0;
}

/* Exported Object: met_list */
extern "C" __attribute__((visibility("default"))) void* met_list = NULL;

/* Demangled: met_deregister */
extern "C" __attribute__((visibility("default"))) int met_deregister(void) {
    ALOGD("met_deregister() called");
    return 0;
}

/* Demangled: met_get_platform */
extern "C" __attribute__((visibility("default"))) int met_get_platform(void) {
    ALOGD("met_get_platform() called");
    return 0;
}

/* Demangled: met_get_chip_id */
extern "C" __attribute__((visibility("default"))) int met_get_chip_id(void) {
    ALOGD("met_get_chip_id() called");
    return 0;
}

/* Demangled: force_sample */
extern "C" __attribute__((visibility("default"))) int force_sample(void) {
    ALOGD("force_sample() called");
    return 0;
}

/* Exported Object: ctrl_flags */
extern "C" __attribute__((visibility("default"))) void* ctrl_flags = NULL;

/* Exported Object: met_hrtimer_expire */
extern "C" __attribute__((visibility("default"))) void* met_hrtimer_expire = NULL;

/* Exported Object: met_timer_expire */
extern "C" __attribute__((visibility("default"))) void* met_timer_expire = NULL;

/* Exported Object: met_device */
extern "C" __attribute__((visibility("default"))) void* met_device = NULL;

/* Exported Object: met_cookie */
extern "C" __attribute__((visibility("default"))) void* met_cookie = NULL;

/* Exported Object: met_cpupmu */
extern "C" __attribute__((visibility("default"))) void* met_cpupmu = NULL;

/* Exported Object: met_memstat */
extern "C" __attribute__((visibility("default"))) void* met_memstat = NULL;

/* Exported Object: met_switch */
extern "C" __attribute__((visibility("default"))) void* met_switch = NULL;

/* Exported Object: met_trace_event */
extern "C" __attribute__((visibility("default"))) void* met_trace_event = NULL;

/* Demangled: pm_qos_update_request */
extern "C" __attribute__((visibility("default"))) int pm_qos_update_request(void) {
    ALOGD("pm_qos_update_request() called");
    return 0;
}

/* Demangled: pm_qos_update_target */
extern "C" __attribute__((visibility("default"))) int pm_qos_update_target(void) {
    ALOGD("pm_qos_update_target() called");
    return 0;
}

/* Exported Object: met_dummy_header */
extern "C" __attribute__((visibility("default"))) void* met_dummy_header = NULL;

/* Exported Object: met_stat */
extern "C" __attribute__((visibility("default"))) void* met_stat = NULL;

/* Demangled: ondiemet_log_manager_init */
extern "C" __attribute__((visibility("default"))) int ondiemet_log_manager_init(void) {
    ALOGD("ondiemet_log_manager_init() called");
    return 0;
}

/* Demangled: ondiemet_attr_init */
extern "C" __attribute__((visibility("default"))) int ondiemet_attr_init(void) {
    ALOGD("ondiemet_attr_init() called");
    return 0;
}

/* Demangled: sampler_stop */
extern "C" __attribute__((visibility("default"))) int sampler_stop(void) {
    ALOGD("sampler_stop() called");
    return 0;
}

/* Exported Object: ondiemet_module */
extern "C" __attribute__((visibility("default"))) void* ondiemet_module = NULL;

/* Exported Object: sspm_buffer_size */
extern "C" __attribute__((visibility("default"))) void* sspm_buffer_size = NULL;

/* Demangled: ondiemet_log_manager_stop */
extern "C" __attribute__((visibility("default"))) int ondiemet_log_manager_stop(void) {
    ALOGD("ondiemet_log_manager_stop() called");
    return 0;
}

/* Demangled: ondiemet_stop */
extern "C" __attribute__((visibility("default"))) int ondiemet_stop(void) {
    ALOGD("ondiemet_stop() called");
    return 0;
}

/* Demangled: ondiemet_extract */
extern "C" __attribute__((visibility("default"))) int ondiemet_extract(void) {
    ALOGD("ondiemet_extract() called");
    return 0;
}

/* Demangled: ondiemet_log_manager_uninit */
extern "C" __attribute__((visibility("default"))) int ondiemet_log_manager_uninit(void) {
    ALOGD("ondiemet_log_manager_uninit() called");
    return 0;
}

/* Demangled: ondiemet_attr_uninit */
extern "C" __attribute__((visibility("default"))) int ondiemet_attr_uninit(void) {
    ALOGD("ondiemet_attr_uninit() called");
    return 0;
}

/* Demangled: get_ctrl_flags */
extern "C" __attribute__((visibility("default"))) int get_ctrl_flags(void) {
    ALOGD("get_ctrl_flags() called");
    return 0;
}

/* Demangled: sampler_start */
extern "C" __attribute__((visibility("default"))) int sampler_start(void) {
    ALOGD("sampler_start() called");
    return 0;
}

/* Demangled: ondiemet_start */
extern "C" __attribute__((visibility("default"))) int ondiemet_start(void) {
    ALOGD("ondiemet_start() called");
    return 0;
}

/* Exported Object: met_cpu_notify */
extern "C" __attribute__((visibility("default"))) void* met_cpu_notify = NULL;

/* Exported Object: met_cpu_pmu_method */
extern "C" __attribute__((visibility("default"))) void* met_cpu_pmu_method = NULL;

/* Exported Object: met_cpu_pm_pmu_reconfig */
extern "C" __attribute__((visibility("default"))) void* met_cpu_pm_pmu_reconfig = NULL;

/* Demangled: met_hrtimer_suspend */
extern "C" __attribute__((visibility("default"))) int met_hrtimer_suspend(void) {
    ALOGD("met_hrtimer_suspend() called");
    return 0;
}

/* Demangled: met_hrtimer_resume */
extern "C" __attribute__((visibility("default"))) int met_hrtimer_resume(void) {
    ALOGD("met_hrtimer_resume() called");
    return 0;
}

/* Demangled: force_power_log */
extern "C" __attribute__((visibility("default"))) int force_power_log(void) {
    ALOGD("force_power_log() called");
    return 0;
}

/* Demangled: met_event_timer_notify */
extern "C" __attribute__((visibility("default"))) int met_event_timer_notify(void) {
    ALOGD("met_event_timer_notify() called");
    return 0;
}

/* Demangled: ms_st */
extern "C" __attribute__((visibility("default"))) int ms_st(void) {
    ALOGD("ms_st() called");
    return 0;
}

/* Demangled: met_usecs_to_cputime64 */
extern "C" __attribute__((visibility("default"))) int met_usecs_to_cputime64(void) {
    ALOGD("met_usecs_to_cputime64() called");
    return 0;
}

/* Demangled: cookie */
extern "C" __attribute__((visibility("default"))) int cookie(void) {
    ALOGD("cookie() called");
    return 0;
}

/* Demangled: cookie2 */
extern "C" __attribute__((visibility("default"))) int cookie2(void) {
    ALOGD("cookie2() called");
    return 0;
}

/* Demangled: met_cookie_polling */
extern "C" __attribute__((visibility("default"))) int met_cookie_polling(void) {
    ALOGD("met_cookie_polling() called");
    return 0;
}

/* Demangled: memstat */
extern "C" __attribute__((visibility("default"))) int memstat(void) {
    ALOGD("memstat() called");
    return 0;
}

/* Demangled: met_memstat_polling */
extern "C" __attribute__((visibility("default"))) int met_memstat_polling(void) {
    ALOGD("met_memstat_polling() called");
    return 0;
}

/* Exported Object: vm_status */
extern "C" __attribute__((visibility("default"))) void* vm_status = NULL;

/* Exported Object: phy_memstat_table */
extern "C" __attribute__((visibility("default"))) void* phy_memstat_table = NULL;

/* Exported Object: vir_memstat_table */
extern "C" __attribute__((visibility("default"))) void* vir_memstat_table = NULL;

/* Exported Object: phy_memstat_mask */
extern "C" __attribute__((visibility("default"))) void* phy_memstat_mask = NULL;

/* Exported Object: vir_memstat_mask */
extern "C" __attribute__((visibility("default"))) void* vir_memstat_mask = NULL;

/* Exported Object: vm_event_counters_enable */
extern "C" __attribute__((visibility("default"))) void* vm_event_counters_enable = NULL;

/* Demangled: mt_switch */
extern "C" __attribute__((visibility("default"))) int mt_switch(void) {
    ALOGD("mt_switch() called");
    return 0;
}

/* Exported Object: met_perf_cpupmu_status */
extern "C" __attribute__((visibility("default"))) void* met_perf_cpupmu_status = NULL;

/* Demangled: met_perf_cpupmu_polling */
extern "C" __attribute__((visibility("default"))) int met_perf_cpupmu_polling(void) {
    ALOGD("met_perf_cpupmu_polling() called");
    return 0;
}

/* Demangled: met_trace_print_symbols_seq */
extern "C" __attribute__((visibility("default"))) int met_trace_print_symbols_seq(void) {
    ALOGD("met_trace_print_symbols_seq() called");
    return 0;
}

/* Exported Object: mtk_get_gpu_loading_symbol */
extern "C" __attribute__((visibility("default"))) void* mtk_get_gpu_loading_symbol = NULL;

/* Exported Object: mtk_get_gpu_block_symbol */
extern "C" __attribute__((visibility("default"))) void* mtk_get_gpu_block_symbol = NULL;

/* Exported Object: mtk_get_gpu_idle_symbol */
extern "C" __attribute__((visibility("default"))) void* mtk_get_gpu_idle_symbol = NULL;

/* Exported Object: mtk_get_gpu_dvfs_from_symbol */
extern "C" __attribute__((visibility("default"))) void* mtk_get_gpu_dvfs_from_symbol = NULL;

/* Exported Object: mtk_get_gpu_sub_loading_symbol */
extern "C" __attribute__((visibility("default"))) void* mtk_get_gpu_sub_loading_symbol = NULL;

/* Exported Object: mtk_get_3D_fences_count_symbol */
extern "C" __attribute__((visibility("default"))) void* mtk_get_3D_fences_count_symbol = NULL;

/* Exported Object: mtk_get_gpu_memory_usage_symbol */
extern "C" __attribute__((visibility("default"))) void* mtk_get_gpu_memory_usage_symbol = NULL;

/* Exported Object: mtk_get_gpu_power_loading_symbol */
extern "C" __attribute__((visibility("default"))) void* mtk_get_gpu_power_loading_symbol = NULL;

/* Exported Object: mtk_get_custom_boost_gpu_freq_symbol */
extern "C" __attribute__((visibility("default"))) void* mtk_get_custom_boost_gpu_freq_symbol = NULL;

/* Exported Object: mtk_get_custom_upbound_gpu_freq_symbol */
extern "C" __attribute__((visibility("default"))) void* mtk_get_custom_upbound_gpu_freq_symbol = NULL;

/* Exported Object: mtk_get_vsync_based_target_freq_symbol */
extern "C" __attribute__((visibility("default"))) void* mtk_get_vsync_based_target_freq_symbol = NULL;

/* Exported Object: mtk_get_vsync_offset_event_status_symbol */
extern "C" __attribute__((visibility("default"))) void* mtk_get_vsync_offset_event_status_symbol = NULL;

/* Exported Object: mtk_get_vsync_offset_debug_status_symbol */
extern "C" __attribute__((visibility("default"))) void* mtk_get_vsync_offset_debug_status_symbol = NULL;

/* Exported Object: mtk_enable_gpu_perf_monitor_symbol */
extern "C" __attribute__((visibility("default"))) void* mtk_enable_gpu_perf_monitor_symbol = NULL;

/* Exported Object: mtk_get_gpu_pmu_init_symbol */
extern "C" __attribute__((visibility("default"))) void* mtk_get_gpu_pmu_init_symbol = NULL;

/* Exported Object: mtk_get_gpu_pmu_swapnreset_symbol */
extern "C" __attribute__((visibility("default"))) void* mtk_get_gpu_pmu_swapnreset_symbol = NULL;

/* Exported Object: mt_gpufreq_get_cur_freq_symbol */
extern "C" __attribute__((visibility("default"))) void* mt_gpufreq_get_cur_freq_symbol = NULL;

/* Exported Object: mt_gpufreq_get_thermal_limit_freq_symbol */
extern "C" __attribute__((visibility("default"))) void* mt_gpufreq_get_thermal_limit_freq_symbol = NULL;

/* Exported Object: mtk_register_gpu_power_change_symbol */
extern "C" __attribute__((visibility("default"))) void* mtk_register_gpu_power_change_symbol = NULL;

/* Exported Object: mtk_unregister_gpu_power_change_symbol */
extern "C" __attribute__((visibility("default"))) void* mtk_unregister_gpu_power_change_symbol = NULL;

/* Exported Object: mtk_get_gpu_pmu_swapnreset_stop_symbol */
extern "C" __attribute__((visibility("default"))) void* mtk_get_gpu_pmu_swapnreset_stop_symbol = NULL;

/* Exported Object: mtk_get_gpu_pmu_deinit_symbol */
extern "C" __attribute__((visibility("default"))) void* mtk_get_gpu_pmu_deinit_symbol = NULL;

/* Exported Object: vcorefs_get_num_opp_symbol */
extern "C" __attribute__((visibility("default"))) void* vcorefs_get_num_opp_symbol = NULL;

/* Exported Object: vcorefs_get_opp_info_num_symbol */
extern "C" __attribute__((visibility("default"))) void* vcorefs_get_opp_info_num_symbol = NULL;

/* Exported Object: vcorefs_get_opp_info_name_symbol */
extern "C" __attribute__((visibility("default"))) void* vcorefs_get_opp_info_name_symbol = NULL;

/* Exported Object: vcorefs_get_opp_info_symbol */
extern "C" __attribute__((visibility("default"))) void* vcorefs_get_opp_info_symbol = NULL;

/* Exported Object: vcorefs_get_src_req_num_symbol */
extern "C" __attribute__((visibility("default"))) void* vcorefs_get_src_req_num_symbol = NULL;

/* Exported Object: vcorefs_get_src_req_name_symbol */
extern "C" __attribute__((visibility("default"))) void* vcorefs_get_src_req_name_symbol = NULL;

/* Exported Object: vcorefs_get_src_req_symbol */
extern "C" __attribute__((visibility("default"))) void* vcorefs_get_src_req_symbol = NULL;

/* Exported Object: mt_cen_emi_base_get_symbol */
extern "C" __attribute__((visibility("default"))) void* mt_cen_emi_base_get_symbol = NULL;

/* Exported Object: mt_chn_emi_base_get_symbol */
extern "C" __attribute__((visibility("default"))) void* mt_chn_emi_base_get_symbol = NULL;

/* Exported Object: mtk_dramc_get_data_rate_symbol */
extern "C" __attribute__((visibility("default"))) void* mtk_dramc_get_data_rate_symbol = NULL;

/* Exported Object: mtk_dramc_get_ddr_type_symbol */
extern "C" __attribute__((visibility("default"))) void* mtk_dramc_get_ddr_type_symbol = NULL;

/* Exported Object: get_cur_ddr_ratio_symbol */
extern "C" __attribute__((visibility("default"))) void* get_cur_ddr_ratio_symbol = NULL;

/* Exported Object: get_dram_data_rate_symbol */
extern "C" __attribute__((visibility("default"))) void* get_dram_data_rate_symbol = NULL;

/* Exported Object: get_ddr_type_symbol */
extern "C" __attribute__((visibility("default"))) void* get_ddr_type_symbol = NULL;

/* Exported Object: mt_gpufreq_get_cur_volt_symbol */
extern "C" __attribute__((visibility("default"))) void* mt_gpufreq_get_cur_volt_symbol = NULL;

/* Exported Object: mt_cpufreq_get_cur_volt_symbol */
extern "C" __attribute__((visibility("default"))) void* mt_cpufreq_get_cur_volt_symbol = NULL;

/* Exported Object: spm_twam_enable_monitor_symbol */
extern "C" __attribute__((visibility("default"))) void* spm_twam_enable_monitor_symbol = NULL;

/* Exported Object: spm_twam_met_enable_symbol */
extern "C" __attribute__((visibility("default"))) void* spm_twam_met_enable_symbol = NULL;

/* Exported Object: spm_twam_config_channel_symbol */
extern "C" __attribute__((visibility("default"))) void* spm_twam_config_channel_symbol = NULL;

/* Exported Object: met_gpu */
extern "C" __attribute__((visibility("default"))) void* met_gpu = NULL;

/* Exported Object: met_gpudvfs */
extern "C" __attribute__((visibility("default"))) void* met_gpudvfs = NULL;

/* Exported Object: met_gpumem */
extern "C" __attribute__((visibility("default"))) void* met_gpumem = NULL;

/* Exported Object: met_gpupwr */
extern "C" __attribute__((visibility("default"))) void* met_gpupwr = NULL;

/* Exported Object: met_gpu_pmu */
extern "C" __attribute__((visibility("default"))) void* met_gpu_pmu = NULL;

/* Exported Object: met_gpu_stall */
extern "C" __attribute__((visibility("default"))) void* met_gpu_stall = NULL;

/* Exported Object: met_vcoredvfs */
extern "C" __attribute__((visibility("default"))) void* met_vcoredvfs = NULL;

/* Exported Object: met_sspm_emi */
extern "C" __attribute__((visibility("default"))) void* met_sspm_emi = NULL;

/* Exported Object: met_sspm_smi */
extern "C" __attribute__((visibility("default"))) void* met_sspm_smi = NULL;

/* Exported Object: met_ptpod */
extern "C" __attribute__((visibility("default"))) void* met_ptpod = NULL;

/* Exported Object: met_wall_time */
extern "C" __attribute__((visibility("default"))) void* met_wall_time = NULL;

/* Exported Object: met_sspm_common */
extern "C" __attribute__((visibility("default"))) void* met_sspm_common = NULL;

/* Exported Object: met_sspm_walltime */
extern "C" __attribute__((visibility("default"))) void* met_sspm_walltime = NULL;

/* Exported Object: met_cpudsu */
extern "C" __attribute__((visibility("default"))) void* met_cpudsu = NULL;

/* Exported Object: met_spmtwam */
extern "C" __attribute__((visibility("default"))) void* met_spmtwam = NULL;

/* Exported Object: __crc_ms_formatH */
extern "C" __attribute__((visibility("default"))) void* __crc_ms_formatH = NULL;

/* Exported Object: __crc_ms_formatD */
extern "C" __attribute__((visibility("default"))) void* __crc_ms_formatD = NULL;

/* Exported Object: __crc_ms_formatH_ulong */
extern "C" __attribute__((visibility("default"))) void* __crc_ms_formatH_ulong = NULL;

/* Exported Object: __crc_ms_formatD_ulong */
extern "C" __attribute__((visibility("default"))) void* __crc_ms_formatD_ulong = NULL;

/* Exported Object: __crc_ms_formatH_EOL */
extern "C" __attribute__((visibility("default"))) void* __crc_ms_formatH_EOL = NULL;

/* Exported Object: __crc_ms_formatD_EOL */
extern "C" __attribute__((visibility("default"))) void* __crc_ms_formatD_EOL = NULL;

/* Demangled: ms_formatH */
extern "C" __attribute__((visibility("default"))) int ms_formatH(void) {
    ALOGD("ms_formatH() called");
    return 0;
}

/* Demangled: ms_formatD */
extern "C" __attribute__((visibility("default"))) int ms_formatD(void) {
    ALOGD("ms_formatD() called");
    return 0;
}

/* Demangled: ms_formatH_ulong */
extern "C" __attribute__((visibility("default"))) int ms_formatH_ulong(void) {
    ALOGD("ms_formatH_ulong() called");
    return 0;
}

/* Demangled: ms_formatD_ulong */
extern "C" __attribute__((visibility("default"))) int ms_formatD_ulong(void) {
    ALOGD("ms_formatD_ulong() called");
    return 0;
}

/* Demangled: ms_formatH_EOL */
extern "C" __attribute__((visibility("default"))) int ms_formatH_EOL(void) {
    ALOGD("ms_formatH_EOL() called");
    return 0;
}

/* Demangled: ms_formatD_EOL */
extern "C" __attribute__((visibility("default"))) int ms_formatD_EOL(void) {
    ALOGD("ms_formatD_EOL() called");
    return 0;
}

/* Exported Object: cpu_pmu */
extern "C" __attribute__((visibility("default"))) void* cpu_pmu = NULL;

/* Demangled: cpu_pmu_debug_init */
extern "C" __attribute__((visibility("default"))) int cpu_pmu_debug_init(void) {
    ALOGD("cpu_pmu_debug_init() called");
    return 0;
}

/* Demangled: cpu_pmu_debug_uninit */
extern "C" __attribute__((visibility("default"))) int cpu_pmu_debug_uninit(void) {
    ALOGD("cpu_pmu_debug_uninit() called");
    return 0;
}

/* Demangled: mp_cpu */
extern "C" __attribute__((visibility("default"))) int mp_cpu(void) {
    ALOGD("mp_cpu() called");
    return 0;
}

/* Demangled: cpu_pmu_hw_init */
extern "C" __attribute__((visibility("default"))) int cpu_pmu_hw_init(void) {
    ALOGD("cpu_pmu_hw_init() called");
    return 0;
}

/* Exported Object: cpu_pm_pmu_notifier */
extern "C" __attribute__((visibility("default"))) void* cpu_pm_pmu_notifier = NULL;

/* Exported Object: handle_irq_lock */
extern "C" __attribute__((visibility("default"))) void* handle_irq_lock = NULL;

/* Exported Object: handle_irq_orig */
extern "C" __attribute__((visibility("default"))) void* handle_irq_orig = NULL;

/* Exported Object: sspm_buf_available */
extern "C" __attribute__((visibility("default"))) void* sspm_buf_available = NULL;

/* Demangled: met_ipi_to_sspm_command */
extern "C" __attribute__((visibility("default"))) int met_ipi_to_sspm_command(void) {
    ALOGD("met_ipi_to_sspm_command() called");
    return 0;
}

/* Exported Object: armv8_pmu */
extern "C" __attribute__((visibility("default"))) void* armv8_pmu = NULL;

/* Demangled: cpu_frequency */
extern "C" __attribute__((visibility("default"))) int cpu_frequency(void) {
    ALOGD("cpu_frequency() called");
    return 0;
}

/* Demangled: force_power_log_val */
extern "C" __attribute__((visibility("default"))) int force_power_log_val(void) {
    ALOGD("force_power_log_val() called");
    return 0;
}

/* Exported Object: __crc_met_spmtwam */
extern "C" __attribute__((visibility("default"))) void* __crc_met_spmtwam = NULL;

/* Demangled: ms_spmtwam */
extern "C" __attribute__((visibility("default"))) int ms_spmtwam(void) {
    ALOGD("ms_spmtwam() called");
    return 0;
}

/* Exported Object: __crc_met_sspm_emi */
extern "C" __attribute__((visibility("default"))) void* __crc_met_sspm_emi = NULL;

/* Demangled: met_emi_create_basic */
extern "C" __attribute__((visibility("default"))) int met_emi_create_basic(void) {
    ALOGD("met_emi_create_basic() called");
    return 0;
}

/* Demangled: met_emi_delete_basic */
extern "C" __attribute__((visibility("default"))) int met_emi_delete_basic(void) {
    ALOGD("met_emi_delete_basic() called");
    return 0;
}

/* Demangled: emi_print_header_basic */
extern "C" __attribute__((visibility("default"))) int emi_print_header_basic(void) {
    ALOGD("emi_print_header_basic() called");
    return 0;
}

/* Demangled: ondiemet_emi_start_basic */
extern "C" __attribute__((visibility("default"))) int ondiemet_emi_start_basic(void) {
    ALOGD("ondiemet_emi_start_basic() called");
    return 0;
}

/* Demangled: ondiemet_emi_stop_basic */
extern "C" __attribute__((visibility("default"))) int ondiemet_emi_stop_basic(void) {
    ALOGD("ondiemet_emi_stop_basic() called");
    return 0;
}

/* Demangled: met_emi_resume_basic */
extern "C" __attribute__((visibility("default"))) int met_emi_resume_basic(void) {
    ALOGD("met_emi_resume_basic() called");
    return 0;
}

/* Exported Object: __crc_emi_inited */
extern "C" __attribute__((visibility("default"))) void* __crc_emi_inited = NULL;

/* Exported Object: __crc_output_str_len */
extern "C" __attribute__((visibility("default"))) void* __crc_output_str_len = NULL;

/* Exported Object: __crc_dramc_pdir_enable */
extern "C" __attribute__((visibility("default"))) void* __crc_dramc_pdir_enable = NULL;

/* Exported Object: __crc_kobj_emi */
extern "C" __attribute__((visibility("default"))) void* __crc_kobj_emi = NULL;

/* Exported Object: __crc_emi_mdct_enable */
extern "C" __attribute__((visibility("default"))) void* __crc_emi_mdct_enable = NULL;

/* Exported Object: __crc_rd_mdmcu_rsv_num */
extern "C" __attribute__((visibility("default"))) void* __crc_rd_mdmcu_rsv_num = NULL;

/* Exported Object: __crc_met_emi_regdump */
extern "C" __attribute__((visibility("default"))) void* __crc_met_emi_regdump = NULL;

/* Exported Object: __crc_output_header_len */
extern "C" __attribute__((visibility("default"))) void* __crc_output_header_len = NULL;

/* Exported Object: __crc_BaseAddrEMI */
extern "C" __attribute__((visibility("default"))) void* __crc_BaseAddrEMI = NULL;

/* Exported Object: __crc_BaseAddrCHN_EMI */
extern "C" __attribute__((visibility("default"))) void* __crc_BaseAddrCHN_EMI = NULL;

/* Exported Object: __crc_header_str */
extern "C" __attribute__((visibility("default"))) void* __crc_header_str = NULL;

/* Exported Object: __crc_ttype1_16_en */
extern "C" __attribute__((visibility("default"))) void* __crc_ttype1_16_en = NULL;

/* Exported Object: __crc_ttype17_21_en */
extern "C" __attribute__((visibility("default"))) void* __crc_ttype17_21_en = NULL;

/* Exported Object: __crc_emi_tsct_enable */
extern "C" __attribute__((visibility("default"))) void* __crc_emi_tsct_enable = NULL;

/* Exported Object: __crc_emi_use_ondiemet */
extern "C" __attribute__((visibility("default"))) void* __crc_emi_use_ondiemet = NULL;

/* Exported Object: __crc_dram_chann_num */
extern "C" __attribute__((visibility("default"))) void* __crc_dram_chann_num = NULL;

/* Exported Object: __crc_metemi_func_opt */
extern "C" __attribute__((visibility("default"))) void* __crc_metemi_func_opt = NULL;

/* Exported Object: __crc_mdmcu_sel_enable */
extern "C" __attribute__((visibility("default"))) void* __crc_mdmcu_sel_enable = NULL;

/* Exported Object: __crc_emi_init */
extern "C" __attribute__((visibility("default"))) void* __crc_emi_init = NULL;

/* Exported Object: __crc_ondiemet_emi_start_basic */
extern "C" __attribute__((visibility("default"))) void* __crc_ondiemet_emi_start_basic = NULL;

/* Exported Object: __crc_do_emi */
extern "C" __attribute__((visibility("default"))) void* __crc_do_emi = NULL;

/* Exported Object: __crc_emi_create_header */
extern "C" __attribute__((visibility("default"))) void* __crc_emi_create_header = NULL;

/* Exported Object: __crc_MET_EMI_Get_BaseClock_Rate */
extern "C" __attribute__((visibility("default"))) void* __crc_MET_EMI_Get_BaseClock_Rate = NULL;

/* Exported Object: __crc_emi_uninit */
extern "C" __attribute__((visibility("default"))) void* __crc_emi_uninit = NULL;

/* Exported Object: __crc_met_emi_create_basic */
extern "C" __attribute__((visibility("default"))) void* __crc_met_emi_create_basic = NULL;

/* Exported Object: __crc_met_emi_delete_basic */
extern "C" __attribute__((visibility("default"))) void* __crc_met_emi_delete_basic = NULL;

/* Exported Object: __crc_emi_print_header_basic */
extern "C" __attribute__((visibility("default"))) void* __crc_emi_print_header_basic = NULL;

/* Exported Object: __crc_MET_EMI_GetDramChannNum */
extern "C" __attribute__((visibility("default"))) void* __crc_MET_EMI_GetDramChannNum = NULL;

/* Exported Object: __crc_MET_BM_Init */
extern "C" __attribute__((visibility("default"))) void* __crc_MET_BM_Init = NULL;

/* Exported Object: __crc_check_sspm_support */
extern "C" __attribute__((visibility("default"))) void* __crc_check_sspm_support = NULL;

/* Exported Object: __crc_met_get_dram_data_rate */
extern "C" __attribute__((visibility("default"))) void* __crc_met_get_dram_data_rate = NULL;

/* Demangled: MET_BM_Init */
extern "C" __attribute__((visibility("default"))) int MET_BM_Init(void) {
    ALOGD("MET_BM_Init() called");
    return 0;
}

/* Exported Object: BaseAddrEMI */
extern "C" __attribute__((visibility("default"))) void* BaseAddrEMI = NULL;

/* Exported Object: dram_chann_num */
extern "C" __attribute__((visibility("default"))) void* dram_chann_num = NULL;

/* Exported Object: BaseAddrCHN_EMI */
extern "C" __attribute__((visibility("default"))) void* BaseAddrCHN_EMI = NULL;

/* Exported Object: met_emi_default_val */
extern "C" __attribute__((visibility("default"))) void* met_emi_default_val = NULL;

/* Demangled: MET_EMI_GetDramChannNum */
extern "C" __attribute__((visibility("default"))) int MET_EMI_GetDramChannNum(void) {
    ALOGD("MET_EMI_GetDramChannNum() called");
    return 0;
}

/* Demangled: MET_BM_DeInit */
extern "C" __attribute__((visibility("default"))) int MET_BM_DeInit(void) {
    ALOGD("MET_BM_DeInit() called");
    return 0;
}

/* Demangled: MET_BM_SaveCfg */
extern "C" __attribute__((visibility("default"))) int MET_BM_SaveCfg(void) {
    ALOGD("MET_BM_SaveCfg() called");
    return 0;
}

/* Exported Object: emi_config */
extern "C" __attribute__((visibility("default"))) void* emi_config = NULL;

/* Demangled: MET_BM_RestoreCfg */
extern "C" __attribute__((visibility("default"))) int MET_BM_RestoreCfg(void) {
    ALOGD("MET_BM_RestoreCfg() called");
    return 0;
}

/* Demangled: MET_BM_SetReadWriteType */
extern "C" __attribute__((visibility("default"))) int MET_BM_SetReadWriteType(void) {
    ALOGD("MET_BM_SetReadWriteType() called");
    return 0;
}

/* Demangled: MET_BM_SetMonitorCounter */
extern "C" __attribute__((visibility("default"))) int MET_BM_SetMonitorCounter(void) {
    ALOGD("MET_BM_SetMonitorCounter() called");
    return 0;
}

/* Demangled: MET_BM_SetTtypeCounterRW */
extern "C" __attribute__((visibility("default"))) int MET_BM_SetTtypeCounterRW(void) {
    ALOGD("MET_BM_SetTtypeCounterRW() called");
    return 0;
}

/* Demangled: MET_BM_Set_WsctTsct_id_sel */
extern "C" __attribute__((visibility("default"))) int MET_BM_Set_WsctTsct_id_sel(void) {
    ALOGD("MET_BM_Set_WsctTsct_id_sel() called");
    return 0;
}

/* Demangled: MET_BM_SetMaster */
extern "C" __attribute__((visibility("default"))) int MET_BM_SetMaster(void) {
    ALOGD("MET_BM_SetMaster() called");
    return 0;
}

/* Demangled: MET_BM_SetbusID_En */
extern "C" __attribute__((visibility("default"))) int MET_BM_SetbusID_En(void) {
    ALOGD("MET_BM_SetbusID_En() called");
    return 0;
}

/* Demangled: MET_BM_SetbusID */
extern "C" __attribute__((visibility("default"))) int MET_BM_SetbusID(void) {
    ALOGD("MET_BM_SetbusID() called");
    return 0;
}

/* Demangled: MET_BM_SetUltraHighFilter */
extern "C" __attribute__((visibility("default"))) int MET_BM_SetUltraHighFilter(void) {
    ALOGD("MET_BM_SetUltraHighFilter() called");
    return 0;
}

/* Demangled: MET_BM_SetLatencyCounter */
extern "C" __attribute__((visibility("default"))) int MET_BM_SetLatencyCounter(void) {
    ALOGD("MET_BM_SetLatencyCounter() called");
    return 0;
}

/* Demangled: MET_EMI_GetDramRankNum */
extern "C" __attribute__((visibility("default"))) int MET_EMI_GetDramRankNum(void) {
    ALOGD("MET_EMI_GetDramRankNum() called");
    return 0;
}

/* Demangled: MET_EMI_GetDramRankNum_CHN1 */
extern "C" __attribute__((visibility("default"))) int MET_EMI_GetDramRankNum_CHN1(void) {
    ALOGD("MET_EMI_GetDramRankNum_CHN1() called");
    return 0;
}

/* Demangled: MET_BM_SetWSCT_master_rw */
extern "C" __attribute__((visibility("default"))) int MET_BM_SetWSCT_master_rw(void) {
    ALOGD("MET_BM_SetWSCT_master_rw() called");
    return 0;
}

/* Demangled: MET_BM_SetWSCT_high_priority */
extern "C" __attribute__((visibility("default"))) int MET_BM_SetWSCT_high_priority(void) {
    ALOGD("MET_BM_SetWSCT_high_priority() called");
    return 0;
}

/* Demangled: MET_BM_SetWSCT_busid_idmask */
extern "C" __attribute__((visibility("default"))) int MET_BM_SetWSCT_busid_idmask(void) {
    ALOGD("MET_BM_SetWSCT_busid_idmask() called");
    return 0;
}

/* Demangled: MET_BM_SetWSCT_chn_rank_sel */
extern "C" __attribute__((visibility("default"))) int MET_BM_SetWSCT_chn_rank_sel(void) {
    ALOGD("MET_BM_SetWSCT_chn_rank_sel() called");
    return 0;
}

/* Demangled: MET_BM_SetWSCT_burst_range */
extern "C" __attribute__((visibility("default"))) int MET_BM_SetWSCT_burst_range(void) {
    ALOGD("MET_BM_SetWSCT_burst_range() called");
    return 0;
}

/* Demangled: MET_BM_SetTSCT_busid_enable */
extern "C" __attribute__((visibility("default"))) int MET_BM_SetTSCT_busid_enable(void) {
    ALOGD("MET_BM_SetTSCT_busid_enable() called");
    return 0;
}

/* Demangled: MET_BM_SetTtype_high_priority_sel */
extern "C" __attribute__((visibility("default"))) int MET_BM_SetTtype_high_priority_sel(void) {
    ALOGD("MET_BM_SetTtype_high_priority_sel() called");
    return 0;
}

/* Demangled: MET_BM_SetTtype_busid_idmask */
extern "C" __attribute__((visibility("default"))) int MET_BM_SetTtype_busid_idmask(void) {
    ALOGD("MET_BM_SetTtype_busid_idmask() called");
    return 0;
}

/* Demangled: MET_BM_SetTtype_chn_rank_sel */
extern "C" __attribute__((visibility("default"))) int MET_BM_SetTtype_chn_rank_sel(void) {
    ALOGD("MET_BM_SetTtype_chn_rank_sel() called");
    return 0;
}

/* Demangled: MET_BM_SetTtype_burst_range */
extern "C" __attribute__((visibility("default"))) int MET_BM_SetTtype_burst_range(void) {
    ALOGD("MET_BM_SetTtype_burst_range() called");
    return 0;
}

/* Demangled: MET_EMI_Get_CONH_2ND */
extern "C" __attribute__((visibility("default"))) int MET_EMI_Get_CONH_2ND(void) {
    ALOGD("MET_EMI_Get_CONH_2ND() called");
    return 0;
}

/* Demangled: _clear_default_val */
extern "C" __attribute__((visibility("default"))) int _clear_default_val(void) {
    ALOGD("_clear_default_val() called");
    return 0;
}

/* Exported Object: default_val */
extern "C" __attribute__((visibility("default"))) void* default_val = NULL;

/* Demangled: default_val_store */
extern "C" __attribute__((visibility("default"))) int default_val_store(void) {
    ALOGD("default_val_store() called");
    return 0;
}

/* Demangled: default_val_show */
extern "C" __attribute__((visibility("default"))) int default_val_show(void) {
    ALOGD("default_val_show() called");
    return 0;
}

/* Demangled: _clear_msel_group_ext */
extern "C" __attribute__((visibility("default"))) int _clear_msel_group_ext(void) {
    ALOGD("_clear_msel_group_ext() called");
    return 0;
}

/* Exported Object: msel_group_ext_val */
extern "C" __attribute__((visibility("default"))) void* msel_group_ext_val = NULL;

/* Exported Object: msel_group_ext */
extern "C" __attribute__((visibility("default"))) void* msel_group_ext = NULL;

/* Demangled: msel_group_ext_store */
extern "C" __attribute__((visibility("default"))) int msel_group_ext_store(void) {
    ALOGD("msel_group_ext_store() called");
    return 0;
}

/* Demangled: msel_group_ext_show */
extern "C" __attribute__((visibility("default"))) int msel_group_ext_show(void) {
    ALOGD("msel_group_ext_show() called");
    return 0;
}

/* Demangled: _clear_wsct_rw */
extern "C" __attribute__((visibility("default"))) int _clear_wsct_rw(void) {
    ALOGD("_clear_wsct_rw() called");
    return 0;
}

/* Exported Object: wsct_rw_val */
extern "C" __attribute__((visibility("default"))) void* wsct_rw_val = NULL;

/* Exported Object: wsct_rw */
extern "C" __attribute__((visibility("default"))) void* wsct_rw = NULL;

/* Demangled: wsct_rw_store */
extern "C" __attribute__((visibility("default"))) int wsct_rw_store(void) {
    ALOGD("wsct_rw_store() called");
    return 0;
}

/* Demangled: wsct_rw_show */
extern "C" __attribute__((visibility("default"))) int wsct_rw_show(void) {
    ALOGD("wsct_rw_show() called");
    return 0;
}

/* Demangled: _clear_wsct_high_priority_enable */
extern "C" __attribute__((visibility("default"))) int _clear_wsct_high_priority_enable(void) {
    ALOGD("_clear_wsct_high_priority_enable() called");
    return 0;
}

/* Exported Object: WSCT_HPRI_SEL */
extern "C" __attribute__((visibility("default"))) void* WSCT_HPRI_SEL = NULL;

/* Exported Object: WSCT_HPRI_DIS */
extern "C" __attribute__((visibility("default"))) void* WSCT_HPRI_DIS = NULL;

/* Exported Object: wsct_high_priority_enable */
extern "C" __attribute__((visibility("default"))) void* wsct_high_priority_enable = NULL;

/* Demangled: wsct_high_priority_enable_store */
extern "C" __attribute__((visibility("default"))) int wsct_high_priority_enable_store(void) {
    ALOGD("wsct_high_priority_enable_store() called");
    return 0;
}

/* Demangled: wsct_high_priority_enable_show */
extern "C" __attribute__((visibility("default"))) int wsct_high_priority_enable_show(void) {
    ALOGD("wsct_high_priority_enable_show() called");
    return 0;
}

/* Demangled: _clear_wsct_busid */
extern "C" __attribute__((visibility("default"))) int _clear_wsct_busid(void) {
    ALOGD("_clear_wsct_busid() called");
    return 0;
}

/* Exported Object: wsct_busid_val */
extern "C" __attribute__((visibility("default"))) void* wsct_busid_val = NULL;

/* Exported Object: wsct_idMask_val */
extern "C" __attribute__((visibility("default"))) void* wsct_idMask_val = NULL;

/* Exported Object: wsct_busid */
extern "C" __attribute__((visibility("default"))) void* wsct_busid = NULL;

/* Demangled: wsct_busid_store */
extern "C" __attribute__((visibility("default"))) int wsct_busid_store(void) {
    ALOGD("wsct_busid_store() called");
    return 0;
}

/* Demangled: wsct_busid_show */
extern "C" __attribute__((visibility("default"))) int wsct_busid_show(void) {
    ALOGD("wsct_busid_show() called");
    return 0;
}

/* Demangled: _clear_wsct_chn_rank_sel */
extern "C" __attribute__((visibility("default"))) int _clear_wsct_chn_rank_sel(void) {
    ALOGD("_clear_wsct_chn_rank_sel() called");
    return 0;
}

/* Exported Object: wsct_chn_rank_sel_val */
extern "C" __attribute__((visibility("default"))) void* wsct_chn_rank_sel_val = NULL;

/* Exported Object: wsct_chn_rank_sel */
extern "C" __attribute__((visibility("default"))) void* wsct_chn_rank_sel = NULL;

/* Demangled: wsct_chn_rank_sel_store */
extern "C" __attribute__((visibility("default"))) int wsct_chn_rank_sel_store(void) {
    ALOGD("wsct_chn_rank_sel_store() called");
    return 0;
}

/* Demangled: wsct_chn_rank_sel_show */
extern "C" __attribute__((visibility("default"))) int wsct_chn_rank_sel_show(void) {
    ALOGD("wsct_chn_rank_sel_show() called");
    return 0;
}

/* Demangled: _clear_wsct_burst_range */
extern "C" __attribute__((visibility("default"))) int _clear_wsct_burst_range(void) {
    ALOGD("_clear_wsct_burst_range() called");
    return 0;
}

/* Exported Object: wsct_byte_up_bnd_val */
extern "C" __attribute__((visibility("default"))) void* wsct_byte_up_bnd_val = NULL;

/* Exported Object: wsct_byte_low_bnd_val */
extern "C" __attribute__((visibility("default"))) void* wsct_byte_low_bnd_val = NULL;

/* Exported Object: wsct_byte_bnd_dis */
extern "C" __attribute__((visibility("default"))) void* wsct_byte_bnd_dis = NULL;

/* Exported Object: wsct_burst_range */
extern "C" __attribute__((visibility("default"))) void* wsct_burst_range = NULL;

/* Demangled: wsct_burst_range_store */
extern "C" __attribute__((visibility("default"))) int wsct_burst_range_store(void) {
    ALOGD("wsct_burst_range_store() called");
    return 0;
}

/* Demangled: wsct_burst_range_show */
extern "C" __attribute__((visibility("default"))) int wsct_burst_range_show(void) {
    ALOGD("wsct_burst_range_show() called");
    return 0;
}

/* Demangled: _clear_tsct_busid_enable */
extern "C" __attribute__((visibility("default"))) int _clear_tsct_busid_enable(void) {
    ALOGD("_clear_tsct_busid_enable() called");
    return 0;
}

/* Exported Object: tsct_busid_enable_val */
extern "C" __attribute__((visibility("default"))) void* tsct_busid_enable_val = NULL;

/* Exported Object: tsct_busid_enable */
extern "C" __attribute__((visibility("default"))) void* tsct_busid_enable = NULL;

/* Demangled: tsct_busid_enable_store */
extern "C" __attribute__((visibility("default"))) int tsct_busid_enable_store(void) {
    ALOGD("tsct_busid_enable_store() called");
    return 0;
}

/* Demangled: tsct_busid_enable_show */
extern "C" __attribute__((visibility("default"))) int tsct_busid_enable_show(void) {
    ALOGD("tsct_busid_enable_show() called");
    return 0;
}

/* Demangled: _clear_ttype_high_priority_ext */
extern "C" __attribute__((visibility("default"))) int _clear_ttype_high_priority_ext(void) {
    ALOGD("_clear_ttype_high_priority_ext() called");
    return 0;
}

/* Exported Object: TTYPE_HPRI_SEL */
extern "C" __attribute__((visibility("default"))) void* TTYPE_HPRI_SEL = NULL;

/* Exported Object: high_priority_filter */
extern "C" __attribute__((visibility("default"))) void* high_priority_filter = NULL;

/* Exported Object: ttype_high_priority_ext */
extern "C" __attribute__((visibility("default"))) void* ttype_high_priority_ext = NULL;

/* Demangled: ttype_high_priority_ext_store */
extern "C" __attribute__((visibility("default"))) int ttype_high_priority_ext_store(void) {
    ALOGD("ttype_high_priority_ext_store() called");
    return 0;
}

/* Demangled: ttype_high_priority_ext_show */
extern "C" __attribute__((visibility("default"))) int ttype_high_priority_ext_show(void) {
    ALOGD("ttype_high_priority_ext_show() called");
    return 0;
}

/* Demangled: _clear_ttype_busid_ext */
extern "C" __attribute__((visibility("default"))) int _clear_ttype_busid_ext(void) {
    ALOGD("_clear_ttype_busid_ext() called");
    return 0;
}

/* Exported Object: ttype_busid_val */
extern "C" __attribute__((visibility("default"))) void* ttype_busid_val = NULL;

/* Exported Object: ttype_idMask_val */
extern "C" __attribute__((visibility("default"))) void* ttype_idMask_val = NULL;

/* Exported Object: ttype_busid_ext */
extern "C" __attribute__((visibility("default"))) void* ttype_busid_ext = NULL;

/* Demangled: ttype_busid_ext_store */
extern "C" __attribute__((visibility("default"))) int ttype_busid_ext_store(void) {
    ALOGD("ttype_busid_ext_store() called");
    return 0;
}

/* Demangled: ttype_busid_ext_show */
extern "C" __attribute__((visibility("default"))) int ttype_busid_ext_show(void) {
    ALOGD("ttype_busid_ext_show() called");
    return 0;
}

/* Demangled: _clear_ttype_chn_rank_sel */
extern "C" __attribute__((visibility("default"))) int _clear_ttype_chn_rank_sel(void) {
    ALOGD("_clear_ttype_chn_rank_sel() called");
    return 0;
}

/* Exported Object: ttype_chn_rank_sel_val */
extern "C" __attribute__((visibility("default"))) void* ttype_chn_rank_sel_val = NULL;

/* Exported Object: ttype_chn_rank_sel */
extern "C" __attribute__((visibility("default"))) void* ttype_chn_rank_sel = NULL;

/* Demangled: ttype_chn_rank_sel_store */
extern "C" __attribute__((visibility("default"))) int ttype_chn_rank_sel_store(void) {
    ALOGD("ttype_chn_rank_sel_store() called");
    return 0;
}

/* Demangled: ttype_chn_rank_sel_show */
extern "C" __attribute__((visibility("default"))) int ttype_chn_rank_sel_show(void) {
    ALOGD("ttype_chn_rank_sel_show() called");
    return 0;
}

/* Demangled: _clear_ttype_burst_range */
extern "C" __attribute__((visibility("default"))) int _clear_ttype_burst_range(void) {
    ALOGD("_clear_ttype_burst_range() called");
    return 0;
}

/* Exported Object: ttype_byte_low_bnd_val */
extern "C" __attribute__((visibility("default"))) void* ttype_byte_low_bnd_val = NULL;

/* Exported Object: ttype_byte_up_bnd_val */
extern "C" __attribute__((visibility("default"))) void* ttype_byte_up_bnd_val = NULL;

/* Exported Object: ttype_byte_bnd_dis */
extern "C" __attribute__((visibility("default"))) void* ttype_byte_bnd_dis = NULL;

/* Exported Object: ttype_burst_range */
extern "C" __attribute__((visibility("default"))) void* ttype_burst_range = NULL;

/* Demangled: ttype_burst_range_store */
extern "C" __attribute__((visibility("default"))) int ttype_burst_range_store(void) {
    ALOGD("ttype_burst_range_store() called");
    return 0;
}

/* Demangled: ttype_burst_range_show */
extern "C" __attribute__((visibility("default"))) int ttype_burst_range_show(void) {
    ALOGD("ttype_burst_range_show() called");
    return 0;
}

/* Demangled: _clear_wmask_msel */
extern "C" __attribute__((visibility("default"))) int _clear_wmask_msel(void) {
    ALOGD("_clear_wmask_msel() called");
    return 0;
}

/* Exported Object: wmask_msel_val */
extern "C" __attribute__((visibility("default"))) void* wmask_msel_val = NULL;

/* Exported Object: wmask_msel */
extern "C" __attribute__((visibility("default"))) void* wmask_msel = NULL;

/* Demangled: wmask_msel_store */
extern "C" __attribute__((visibility("default"))) int wmask_msel_store(void) {
    ALOGD("wmask_msel_store() called");
    return 0;
}

/* Demangled: wmask_msel_show */
extern "C" __attribute__((visibility("default"))) int wmask_msel_show(void) {
    ALOGD("wmask_msel_show() called");
    return 0;
}

/* Demangled: _clear_ageexp_msel_rw */
extern "C" __attribute__((visibility("default"))) int _clear_ageexp_msel_rw(void) {
    ALOGD("_clear_ageexp_msel_rw() called");
    return 0;
}

/* Exported Object: ageexp_msel_val */
extern "C" __attribute__((visibility("default"))) void* ageexp_msel_val = NULL;

/* Exported Object: ageexp_rw_val */
extern "C" __attribute__((visibility("default"))) void* ageexp_rw_val = NULL;

/* Exported Object: ageexp_msel_rw */
extern "C" __attribute__((visibility("default"))) void* ageexp_msel_rw = NULL;

/* Demangled: ageexp_msel_rw_store */
extern "C" __attribute__((visibility("default"))) int ageexp_msel_rw_store(void) {
    ALOGD("ageexp_msel_rw_store() called");
    return 0;
}

/* Demangled: ageexp_msel_rw_show */
extern "C" __attribute__((visibility("default"))) int ageexp_msel_rw_show(void) {
    ALOGD("ageexp_msel_rw_show() called");
    return 0;
}

/* Demangled: sspm_support_feature_show */
extern "C" __attribute__((visibility("default"))) int sspm_support_feature_show(void) {
    ALOGD("sspm_support_feature_show() called");
    return 0;
}

/* Demangled: get_sspm_support_feature */
extern "C" __attribute__((visibility("default"))) int get_sspm_support_feature(void) {
    ALOGD("get_sspm_support_feature() called");
    return 0;
}

/* Demangled: _clear_setting */
extern "C" __attribute__((visibility("default"))) int _clear_setting(void) {
    ALOGD("_clear_setting() called");
    return 0;
}

/* Exported Object: msel_group1 */
extern "C" __attribute__((visibility("default"))) void* msel_group1 = NULL;

/* Exported Object: msel_group2 */
extern "C" __attribute__((visibility("default"))) void* msel_group2 = NULL;

/* Exported Object: msel_group3 */
extern "C" __attribute__((visibility("default"))) void* msel_group3 = NULL;

/* Exported Object: emi_TP_busfiltr_enable */
extern "C" __attribute__((visibility("default"))) void* emi_TP_busfiltr_enable = NULL;

/* Exported Object: reserve_wsct_setting */
extern "C" __attribute__((visibility("default"))) void* reserve_wsct_setting = NULL;

/* Exported Object: msel_enable */
extern "C" __attribute__((visibility("default"))) void* msel_enable = NULL;

/* Exported Object: rwtype */
extern "C" __attribute__((visibility("default"))) void* rwtype = NULL;

/* Exported Object: bw_limiter_enable */
extern "C" __attribute__((visibility("default"))) void* bw_limiter_enable = NULL;

/* Exported Object: dramc_pdir_enable */
extern "C" __attribute__((visibility("default"))) void* dramc_pdir_enable = NULL;

/* Exported Object: met_emi_regdump */
extern "C" __attribute__((visibility("default"))) void* met_emi_regdump = NULL;

/* Exported Object: ttype_nbeat_val */
extern "C" __attribute__((visibility("default"))) void* ttype_nbeat_val = NULL;

/* Exported Object: ttype1_16_en */
extern "C" __attribute__((visibility("default"))) void* ttype1_16_en = NULL;

/* Exported Object: ttype17_21_en */
extern "C" __attribute__((visibility("default"))) void* ttype17_21_en = NULL;

/* Exported Object: ttype_rw_val */
extern "C" __attribute__((visibility("default"))) void* ttype_rw_val = NULL;

/* Exported Object: ttype_master_val */
extern "C" __attribute__((visibility("default"))) void* ttype_master_val = NULL;

/* Exported Object: ttype_nbyte_val */
extern "C" __attribute__((visibility("default"))) void* ttype_nbyte_val = NULL;

/* Exported Object: ttype_burst_val */
extern "C" __attribute__((visibility("default"))) void* ttype_burst_val = NULL;

/* Exported Object: metemi_func_opt */
extern "C" __attribute__((visibility("default"))) void* metemi_func_opt = NULL;

/* Exported Object: emi_tsct_enable */
extern "C" __attribute__((visibility("default"))) void* emi_tsct_enable = NULL;

/* Exported Object: emi_mdct_enable */
extern "C" __attribute__((visibility("default"))) void* emi_mdct_enable = NULL;

/* Exported Object: rd_mdmcu_rsv_num */
extern "C" __attribute__((visibility("default"))) void* rd_mdmcu_rsv_num = NULL;

/* Exported Object: mdmcu_sel_enable */
extern "C" __attribute__((visibility("default"))) void* mdmcu_sel_enable = NULL;

/* Demangled: clear_setting_store */
extern "C" __attribute__((visibility("default"))) int clear_setting_store(void) {
    ALOGD("clear_setting_store() called");
    return 0;
}

/* Demangled: emi_init */
extern "C" __attribute__((visibility("default"))) int emi_init(void) {
    ALOGD("emi_init() called");
    return 0;
}

/* Demangled: emi_uninit */
extern "C" __attribute__((visibility("default"))) int emi_uninit(void) {
    ALOGD("emi_uninit() called");
    return 0;
}

/* Demangled: MET_BM_IPI_REGISTER_CB */
extern "C" __attribute__((visibility("default"))) int MET_BM_IPI_REGISTER_CB(void) {
    ALOGD("MET_BM_IPI_REGISTER_CB() called");
    return 0;
}

/* Demangled: MET_BM_IPI_configs */
extern "C" __attribute__((visibility("default"))) int MET_BM_IPI_configs(void) {
    ALOGD("MET_BM_IPI_configs() called");
    return 0;
}

/* Demangled: check_sspm_support */
extern "C" __attribute__((visibility("default"))) int check_sspm_support(void) {
    ALOGD("check_sspm_support() called");
    return 0;
}

/* Demangled: MET_GET_DRAM_TYPE */
extern "C" __attribute__((visibility("default"))) int MET_GET_DRAM_TYPE(void) {
    ALOGD("MET_GET_DRAM_TYPE() called");
    return 0;
}

/* Demangled: MET_EMI_Get_BaseClock_Rate */
extern "C" __attribute__((visibility("default"))) int MET_EMI_Get_BaseClock_Rate(void) {
    ALOGD("MET_EMI_Get_BaseClock_Rate() called");
    return 0;
}

/* Demangled: met_get_dram_data_rate */
extern "C" __attribute__((visibility("default"))) int met_get_dram_data_rate(void) {
    ALOGD("met_get_dram_data_rate() called");
    return 0;
}

/* Demangled: emi_create_header */
extern "C" __attribute__((visibility("default"))) int emi_create_header(void) {
    ALOGD("emi_create_header() called");
    return 0;
}

/* Exported Object: emi_use_ondiemet */
extern "C" __attribute__((visibility("default"))) void* emi_use_ondiemet = NULL;

/* Exported Object: emi_inited */
extern "C" __attribute__((visibility("default"))) void* emi_inited = NULL;

/* Exported Object: kobj_emi */
extern "C" __attribute__((visibility("default"))) void* kobj_emi = NULL;

/* Exported Object: clear_setting_attr */
extern "C" __attribute__((visibility("default"))) void* clear_setting_attr = NULL;

/* Exported Object: msel_group_ext_attr */
extern "C" __attribute__((visibility("default"))) void* msel_group_ext_attr = NULL;

/* Exported Object: wsct_rw_attr */
extern "C" __attribute__((visibility("default"))) void* wsct_rw_attr = NULL;

/* Exported Object: wsct_high_priority_enable_attr */
extern "C" __attribute__((visibility("default"))) void* wsct_high_priority_enable_attr = NULL;

/* Exported Object: wsct_busid_attr */
extern "C" __attribute__((visibility("default"))) void* wsct_busid_attr = NULL;

/* Exported Object: wsct_chn_rank_sel_attr */
extern "C" __attribute__((visibility("default"))) void* wsct_chn_rank_sel_attr = NULL;

/* Exported Object: wsct_burst_range_attr */
extern "C" __attribute__((visibility("default"))) void* wsct_burst_range_attr = NULL;

/* Exported Object: tsct_busid_enable_attr */
extern "C" __attribute__((visibility("default"))) void* tsct_busid_enable_attr = NULL;

/* Exported Object: ttype_high_priority_ext_attr */
extern "C" __attribute__((visibility("default"))) void* ttype_high_priority_ext_attr = NULL;

/* Exported Object: ttype_busid_ext_attr */
extern "C" __attribute__((visibility("default"))) void* ttype_busid_ext_attr = NULL;

/* Exported Object: ttype_chn_rank_sel_attr */
extern "C" __attribute__((visibility("default"))) void* ttype_chn_rank_sel_attr = NULL;

/* Exported Object: ttype_burst_range_attr */
extern "C" __attribute__((visibility("default"))) void* ttype_burst_range_attr = NULL;

/* Exported Object: wmask_msel_attr */
extern "C" __attribute__((visibility("default"))) void* wmask_msel_attr = NULL;

/* Exported Object: ageexp_msel_rw_attr */
extern "C" __attribute__((visibility("default"))) void* ageexp_msel_rw_attr = NULL;

/* Exported Object: default_val_attr */
extern "C" __attribute__((visibility("default"))) void* default_val_attr = NULL;

/* Demangled: do_emi */
extern "C" __attribute__((visibility("default"))) int do_emi(void) {
    ALOGD("do_emi() called");
    return 0;
}

/* Exported Object: header_str */
extern "C" __attribute__((visibility("default"))) void* header_str = NULL;

/* Exported Object: output_str_len */
extern "C" __attribute__((visibility("default"))) void* output_str_len = NULL;

/* Exported Object: output_header_len */
extern "C" __attribute__((visibility("default"))) void* output_header_len = NULL;

/* Exported Object: emi_chn_config */
extern "C" __attribute__((visibility("default"))) void* emi_chn_config = NULL;

/* Exported Object: delim_comma */
extern "C" __attribute__((visibility("default"))) void* delim_comma = NULL;

/* Exported Object: delim_coclon */
extern "C" __attribute__((visibility("default"))) void* delim_coclon = NULL;

/* Demangled: GPU_Loading */
extern "C" __attribute__((visibility("default"))) int GPU_Loading(void) {
    ALOGD("GPU_Loading() called");
    return 0;
}

/* Demangled: GPU_Sub_Loading */
extern "C" __attribute__((visibility("default"))) int GPU_Sub_Loading(void) {
    ALOGD("GPU_Sub_Loading() called");
    return 0;
}

/* Demangled: GPU_3D_Fences_Count */
extern "C" __attribute__((visibility("default"))) int GPU_3D_Fences_Count(void) {
    ALOGD("GPU_3D_Fences_Count() called");
    return 0;
}

/* Demangled: GPU_DVFS */
extern "C" __attribute__((visibility("default"))) int GPU_DVFS(void) {
    ALOGD("GPU_DVFS() called");
    return 0;
}

/* Demangled: GPU_DVFS_TYPE */
extern "C" __attribute__((visibility("default"))) int GPU_DVFS_TYPE(void) {
    ALOGD("GPU_DVFS_TYPE() called");
    return 0;
}

/* Demangled: GPU_DVFS_VSYNC */
extern "C" __attribute__((visibility("default"))) int GPU_DVFS_VSYNC(void) {
    ALOGD("GPU_DVFS_VSYNC() called");
    return 0;
}

/* Demangled: GPU_VSYNC_OFFSET_STATUS */
extern "C" __attribute__((visibility("default"))) int GPU_VSYNC_OFFSET_STATUS(void) {
    ALOGD("GPU_VSYNC_OFFSET_STATUS() called");
    return 0;
}

/* Demangled: GPU_MEM */
extern "C" __attribute__((visibility("default"))) int GPU_MEM(void) {
    ALOGD("GPU_MEM() called");
    return 0;
}

/* Demangled: GPU_Power */
extern "C" __attribute__((visibility("default"))) int GPU_Power(void) {
    ALOGD("GPU_Power() called");
    return 0;
}

/* Demangled: GPU_PMU_RAW */
extern "C" __attribute__((visibility("default"))) int GPU_PMU_RAW(void) {
    ALOGD("GPU_PMU_RAW() called");
    return 0;
}

/* Demangled: GPU_STALL_RAW */
extern "C" __attribute__((visibility("default"))) int GPU_STALL_RAW(void) {
    ALOGD("GPU_STALL_RAW() called");
    return 0;
}

/* Demangled: vcorefs */
extern "C" __attribute__((visibility("default"))) int vcorefs(void) {
    ALOGD("vcorefs() called");
    return 0;
}

/* Demangled: vcorefs_kicker */
extern "C" __attribute__((visibility("default"))) int vcorefs_kicker(void) {
    ALOGD("vcorefs_kicker() called");
    return 0;
}

/* Demangled: ms_vcorefs */
extern "C" __attribute__((visibility("default"))) int ms_vcorefs(void) {
    ALOGD("ms_vcorefs() called");
    return 0;
}

/* Demangled: vcoredvfs_irq */
extern "C" __attribute__((visibility("default"))) int vcoredvfs_irq(void) {
    ALOGD("vcoredvfs_irq() called");
    return 0;
}

/* Exported Object: opp_info */
extern "C" __attribute__((visibility("default"))) void* opp_info = NULL;

/* Exported Object: polling_mode */
extern "C" __attribute__((visibility("default"))) void* polling_mode = NULL;

/* Exported Object: src_req */
extern "C" __attribute__((visibility("default"))) void* src_req = NULL;

/* Exported Object: default_info_name */
extern "C" __attribute__((visibility("default"))) void* default_info_name = NULL;

/* Exported Object: default_src_name */
extern "C" __attribute__((visibility("default"))) void* default_src_name = NULL;

/* Exported Object: __crc_met_ptpod */
extern "C" __attribute__((visibility("default"))) void* __crc_met_ptpod = NULL;

/* Demangled: ms_ptpod */
extern "C" __attribute__((visibility("default"))) int ms_ptpod(void) {
    ALOGD("ms_ptpod() called");
    return 0;
}

/* Demangled: mp_dsu */
extern "C" __attribute__((visibility("default"))) int mp_dsu(void) {
    ALOGD("mp_dsu() called");
    return 0;
}

/* Demangled: met_perf_cpudsu_down */
extern "C" __attribute__((visibility("default"))) int met_perf_cpudsu_down(void) {
    ALOGD("met_perf_cpudsu_down() called");
    return 0;
}

/* Exported Object: cpu_dsu */
extern "C" __attribute__((visibility("default"))) void* cpu_dsu = NULL;

/* Demangled: met_perf_cpudsu_polling */
extern "C" __attribute__((visibility("default"))) int met_perf_cpudsu_polling(void) {
    ALOGD("met_perf_cpudsu_polling() called");
    return 0;
}

/* Demangled: cpu_dsu_hw_init */
extern "C" __attribute__((visibility("default"))) int cpu_dsu_hw_init(void) {
    ALOGD("cpu_dsu_hw_init() called");
    return 0;
}

/* Exported Object: armv8_dsu */
extern "C" __attribute__((visibility("default"))) void* armv8_dsu = NULL;

/* Exported Object: __crc_met_wall_time */
extern "C" __attribute__((visibility("default"))) void* __crc_met_wall_time = NULL;

/* Demangled: __sys_timer_get_cnt */
extern "C" __attribute__((visibility("default"))) int __sys_timer_get_cnt(void) {
    ALOGD("__sys_timer_get_cnt() called");
    return 0;
}

/* Exported Object: met_arch_counter_get_cntvct_symbol */
extern "C" __attribute__((visibility("default"))) void* met_arch_counter_get_cntvct_symbol = NULL;

/* Demangled: met_mono_time */
extern "C" __attribute__((visibility("default"))) int met_mono_time(void) {
    ALOGD("met_mono_time() called");
    return 0;
}

/* Demangled: met_ap_wall_time */
extern "C" __attribute__((visibility("default"))) int met_ap_wall_time(void) {
    ALOGD("met_ap_wall_time() called");
    return 0;
}

/* Exported Object: clksrc_attr_tb */
extern "C" __attribute__((visibility("default"))) void* clksrc_attr_tb = NULL;

/* Exported Object: __crc_ondiemet_module */
extern "C" __attribute__((visibility("default"))) void* __crc_ondiemet_module = NULL;

/* Demangled: sspm_attr_init */
extern "C" __attribute__((visibility("default"))) int sspm_attr_init(void) {
    ALOGD("sspm_attr_init() called");
    return 0;
}

/* Demangled: sspm_attr_uninit */
extern "C" __attribute__((visibility("default"))) int sspm_attr_uninit(void) {
    ALOGD("sspm_attr_uninit() called");
    return 0;
}

/* Exported Object: scp_start */
extern "C" __attribute__((visibility("default"))) void* scp_start = NULL;

/* Exported Object: ondiemet_module_started */
extern "C" __attribute__((visibility("default"))) void* ondiemet_module_started = NULL;

/* Exported Object: scp_stop */
extern "C" __attribute__((visibility("default"))) void* scp_stop = NULL;

/* Exported Object: scp_extract */
extern "C" __attribute__((visibility("default"))) void* scp_extract = NULL;

/* Demangled: sspm_start */
extern "C" __attribute__((visibility("default"))) int sspm_start(void) {
    ALOGD("sspm_start() called");
    return 0;
}

/* Demangled: sspm_stop */
extern "C" __attribute__((visibility("default"))) int sspm_stop(void) {
    ALOGD("sspm_stop() called");
    return 0;
}

/* Demangled: sspm_extract */
extern "C" __attribute__((visibility("default"))) int sspm_extract(void) {
    ALOGD("sspm_extract() called");
    return 0;
}

/* Demangled: ondiemet_log_req_enq */
extern "C" __attribute__((visibility("default"))) int ondiemet_log_req_enq(void) {
    ALOGD("ondiemet_log_req_enq() called");
    return 0;
}

/* Exported Object: ondiemet_log_req_q */
extern "C" __attribute__((visibility("default"))) void* ondiemet_log_req_q = NULL;

/* Demangled: down_freezable_interruptible */
extern "C" __attribute__((visibility("default"))) int down_freezable_interruptible(void) {
    ALOGD("down_freezable_interruptible() called");
    return 0;
}

/* Demangled: __ondiemet_log_req_deq */
extern "C" __attribute__((visibility("default"))) int __ondiemet_log_req_deq(void) {
    ALOGD("__ondiemet_log_req_deq() called");
    return 0;
}

/* Demangled: __ondiemet_log_req_open */
extern "C" __attribute__((visibility("default"))) int __ondiemet_log_req_open(void) {
    ALOGD("__ondiemet_log_req_open() called");
    return 0;
}

/* Demangled: __ondiemet_log_req_closed */
extern "C" __attribute__((visibility("default"))) int __ondiemet_log_req_closed(void) {
    ALOGD("__ondiemet_log_req_closed() called");
    return 0;
}

/* Demangled: __ondiemet_log_req_working */
extern "C" __attribute__((visibility("default"))) int __ondiemet_log_req_working(void) {
    ALOGD("__ondiemet_log_req_working() called");
    return 0;
}

/* Demangled: ondiemet_log_manager_start */
extern "C" __attribute__((visibility("default"))) int ondiemet_log_manager_start(void) {
    ALOGD("ondiemet_log_manager_start() called");
    return 0;
}

/* Exported Object: log_start_comp */
extern "C" __attribute__((visibility("default"))) void* log_start_comp = NULL;

/* Exported Object: log_stop_comp */
extern "C" __attribute__((visibility("default"))) void* log_stop_comp = NULL;

/* Demangled: ondiemet_parse_num */
extern "C" __attribute__((visibility("default"))) int ondiemet_parse_num(void) {
    ALOGD("ondiemet_parse_num() called");
    return 0;
}

/* Exported Object: lock_tracef */
extern "C" __attribute__((visibility("default"))) void* lock_tracef = NULL;

/* Exported Object: lock_trace_owner_pid */
extern "C" __attribute__((visibility("default"))) void* lock_trace_owner_pid = NULL;

/* Exported Object: trace_owner_pid */
extern "C" __attribute__((visibility("default"))) void* trace_owner_pid = NULL;

/* Exported Object: __crc_sspm_buf_available */
extern "C" __attribute__((visibility("default"))) void* __crc_sspm_buf_available = NULL;

/* Exported Object: ondiemet_sspm_log_virt_addr */
extern "C" __attribute__((visibility("default"))) void* ondiemet_sspm_log_virt_addr = NULL;

/* Exported Object: ondiemet_sspm_log_phy_addr */
extern "C" __attribute__((visibility("default"))) void* ondiemet_sspm_log_phy_addr = NULL;

/* Exported Object: ondiemet_sspm_log_size */
extern "C" __attribute__((visibility("default"))) void* ondiemet_sspm_log_size = NULL;

/* Demangled: start_sspm_ipi_recv_thread */
extern "C" __attribute__((visibility("default"))) int start_sspm_ipi_recv_thread(void) {
    ALOGD("start_sspm_ipi_recv_thread() called");
    return 0;
}

/* Demangled: stop_sspm_ipi_recv_thread */
extern "C" __attribute__((visibility("default"))) int stop_sspm_ipi_recv_thread(void) {
    ALOGD("stop_sspm_ipi_recv_thread() called");
    return 0;
}

/* Exported Object: met_sspm_log_discard */
extern "C" __attribute__((visibility("default"))) void* met_sspm_log_discard = NULL;

/* Exported Object: sspm_log_mode */
extern "C" __attribute__((visibility("default"))) void* sspm_log_mode = NULL;

/* Exported Object: sspm_run_mode */
extern "C" __attribute__((visibility("default"))) void* sspm_run_mode = NULL;

/* Exported Object: sspm_buffer_dumping */
extern "C" __attribute__((visibility("default"))) void* sspm_buffer_dumping = NULL;

/* Demangled: sspm_flush */
extern "C" __attribute__((visibility("default"))) int sspm_flush(void) {
    ALOGD("sspm_flush() called");
    return 0;
}

/* Exported Object: sspm_log_size */
extern "C" __attribute__((visibility("default"))) void* sspm_log_size = NULL;

/* Exported Object: sspm_buf_mapped */
extern "C" __attribute__((visibility("default"))) void* sspm_buf_mapped = NULL;

/* Exported Object: __crc_met_ipi_to_sspm_command */
extern "C" __attribute__((visibility("default"))) void* __crc_met_ipi_to_sspm_command = NULL;

/* Exported Object: __crc_met_ipi_to_sspm_command_async */
extern "C" __attribute__((visibility("default"))) void* __crc_met_ipi_to_sspm_command_async = NULL;

/* Demangled: log_done_cb */
extern "C" __attribute__((visibility("default"))) int log_done_cb(void) {
    ALOGD("log_done_cb() called");
    return 0;
}

/* Demangled: ondiemet_sspm_recv_thread */
extern "C" __attribute__((visibility("default"))) int ondiemet_sspm_recv_thread(void) {
    ALOGD("ondiemet_sspm_recv_thread() called");
    return 0;
}

/* Exported Object: sspm_recv_thread_comp */
extern "C" __attribute__((visibility("default"))) void* sspm_recv_thread_comp = NULL;

/* Demangled: met_ipi_to_sspm_command_async */
extern "C" __attribute__((visibility("default"))) int met_ipi_to_sspm_command_async(void) {
    ALOGD("met_ipi_to_sspm_command_async() called");
    return 0;
}

/* Exported Object: __crc_met_sspm_common */
extern "C" __attribute__((visibility("default"))) void* __crc_met_sspm_common = NULL;

/* Exported Object: met_evnet_header */
extern "C" __attribute__((visibility("default"))) void* met_evnet_header = NULL;

/* Exported Object: __crc_met_sspm_walltime */
extern "C" __attribute__((visibility("default"))) void* __crc_met_sspm_walltime = NULL;

/* Demangled: met_smi_delete */
extern "C" __attribute__((visibility("default"))) int met_smi_delete(void) {
    ALOGD("met_smi_delete() called");
    return 0;
}

/* Exported Object: smi_array_index */
extern "C" __attribute__((visibility("default"))) void* smi_array_index = NULL;

/* Exported Object: smi_conf_array */
extern "C" __attribute__((visibility("default"))) void* smi_conf_array = NULL;

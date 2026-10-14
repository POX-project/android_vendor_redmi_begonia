/*
 * Reverse-Engineered Source for: fmradio_drv.ko
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "fmradio_drv_ko"

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
#include "fmradio_drv_ko.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: mt6631_RDS_OnOff */
extern "C" __attribute__((visibility("default"))) int mt6631_RDS_OnOff(void) {
    ALOGD("mt6631_RDS_OnOff() called");
    return 0;
}

/* Exported Object: g_dbg_level */
extern "C" __attribute__((visibility("default"))) void* g_dbg_level = NULL;

/* Demangled: fm_reg_read */
extern "C" __attribute__((visibility("default"))) int fm_reg_read(void) {
    ALOGD("fm_reg_read() called");
    return 0;
}

/* Demangled: fm_reg_write */
extern "C" __attribute__((visibility("default"))) int fm_reg_write(void) {
    ALOGD("fm_reg_write() called");
    return 0;
}

/* Demangled: mt6631_fm_rds_ops_register */
extern "C" __attribute__((visibility("default"))) int mt6631_fm_rds_ops_register(void) {
    ALOGD("mt6631_fm_rds_ops_register() called");
    return 0;
}

/* Exported Object: mt6631_rds_log */
extern "C" __attribute__((visibility("default"))) void* mt6631_rds_log = NULL;

/* Demangled: rds_parser */
extern "C" __attribute__((visibility("default"))) int rds_parser(void) {
    ALOGD("rds_parser() called");
    return 0;
}

/* Demangled: rds_grp_counter_get */
extern "C" __attribute__((visibility("default"))) int rds_grp_counter_get(void) {
    ALOGD("rds_grp_counter_get() called");
    return 0;
}

/* Demangled: rds_grp_counter_reset */
extern "C" __attribute__((visibility("default"))) int rds_grp_counter_reset(void) {
    ALOGD("rds_grp_counter_reset() called");
    return 0;
}

/* Demangled: mt6631_fm_rds_ops_unregister */
extern "C" __attribute__((visibility("default"))) int mt6631_fm_rds_ops_unregister(void) {
    ALOGD("mt6631_fm_rds_ops_unregister() called");
    return 0;
}

/* Demangled: rds_log_in */
extern "C" __attribute__((visibility("default"))) int rds_log_in(void) {
    ALOGD("rds_log_in() called");
    return 0;
}

/* Demangled: rds_log_out */
extern "C" __attribute__((visibility("default"))) int rds_log_out(void) {
    ALOGD("rds_log_out() called");
    return 0;
}

/* Demangled: mt8168_spi_hopping_clock_switch */
extern "C" __attribute__((visibility("default"))) int mt8168_spi_hopping_clock_switch(void) {
    ALOGD("mt8168_spi_hopping_clock_switch() called");
    return 0;
}

/* Demangled: fm_host_reg_read */
extern "C" __attribute__((visibility("default"))) int fm_host_reg_read(void) {
    ALOGD("fm_host_reg_read() called");
    return 0;
}

/* Demangled: fm_host_reg_write */
extern "C" __attribute__((visibility("default"))) int fm_host_reg_write(void) {
    ALOGD("fm_host_reg_write() called");
    return 0;
}

/* Demangled: fm_delayus */
extern "C" __attribute__((visibility("default"))) int fm_delayus(void) {
    ALOGD("fm_delayus() called");
    return 0;
}

/* Demangled: mt6631_fm_low_ops_register */
extern "C" __attribute__((visibility("default"))) int mt6631_fm_low_ops_register(void) {
    ALOGD("mt6631_fm_low_ops_register() called");
    return 0;
}

/* Demangled: fm_lock_create */
extern "C" __attribute__((visibility("default"))) int fm_lock_create(void) {
    ALOGD("fm_lock_create() called");
    return 0;
}

/* Exported Object: cmd_buf_lock */
extern "C" __attribute__((visibility("default"))) void* cmd_buf_lock = NULL;

/* Demangled: fm_lock_get */
extern "C" __attribute__((visibility("default"))) int fm_lock_get(void) {
    ALOGD("fm_lock_get() called");
    return 0;
}

/* Exported Object: cmd_buf */
extern "C" __attribute__((visibility("default"))) void* cmd_buf = NULL;

/* Demangled: fm_set_bits */
extern "C" __attribute__((visibility("default"))) int fm_set_bits(void) {
    ALOGD("fm_set_bits() called");
    return 0;
}

/* Demangled: fm_bop_modify */
extern "C" __attribute__((visibility("default"))) int fm_bop_modify(void) {
    ALOGD("fm_bop_modify() called");
    return 0;
}

/* Demangled: fm_bop_rd_until */
extern "C" __attribute__((visibility("default"))) int fm_bop_rd_until(void) {
    ALOGD("fm_bop_rd_until() called");
    return 0;
}

/* Demangled: fm_op_seq_combine_cmd */
extern "C" __attribute__((visibility("default"))) int fm_op_seq_combine_cmd(void) {
    ALOGD("fm_op_seq_combine_cmd() called");
    return 0;
}

/* Demangled: fm_cmd_tx */
extern "C" __attribute__((visibility("default"))) int fm_cmd_tx(void) {
    ALOGD("fm_cmd_tx() called");
    return 0;
}

/* Exported Object: fm_wcn_ops */
extern "C" __attribute__((visibility("default"))) void* fm_wcn_ops = NULL;

/* Demangled: fm_top_reg_read */
extern "C" __attribute__((visibility("default"))) int fm_top_reg_read(void) {
    ALOGD("fm_top_reg_read() called");
    return 0;
}

/* Demangled: fm_top_reg_write */
extern "C" __attribute__((visibility("default"))) int fm_top_reg_write(void) {
    ALOGD("fm_top_reg_write() called");
    return 0;
}

/* Exported Object: fm_config */
extern "C" __attribute__((visibility("default"))) void* fm_config = NULL;

/* Demangled: fm_bop_top_write */
extern "C" __attribute__((visibility("default"))) int fm_bop_top_write(void) {
    ALOGD("fm_bop_top_write() called");
    return 0;
}

/* Demangled: fm_bop_udelay */
extern "C" __attribute__((visibility("default"))) int fm_bop_udelay(void) {
    ALOGD("fm_bop_udelay() called");
    return 0;
}

/* Demangled: fm_bop_write */
extern "C" __attribute__((visibility("default"))) int fm_bop_write(void) {
    ALOGD("fm_bop_write() called");
    return 0;
}

/* Demangled: fm_get_patch_path */
extern "C" __attribute__((visibility("default"))) int fm_get_patch_path(void) {
    ALOGD("fm_get_patch_path() called");
    return 0;
}

/* Demangled: fm_download_patch */
extern "C" __attribute__((visibility("default"))) int fm_download_patch(void) {
    ALOGD("fm_download_patch() called");
    return 0;
}

/* Demangled: fm_get_coeff_path */
extern "C" __attribute__((visibility("default"))) int fm_get_coeff_path(void) {
    ALOGD("fm_get_coeff_path() called");
    return 0;
}

/* Demangled: fm_bop_top_rd_until */
extern "C" __attribute__((visibility("default"))) int fm_bop_top_rd_until(void) {
    ALOGD("fm_bop_top_rd_until() called");
    return 0;
}

/* Demangled: fm_get_channel_space */
extern "C" __attribute__((visibility("default"))) int fm_get_channel_space(void) {
    ALOGD("fm_get_channel_space() called");
    return 0;
}

/* Demangled: fm_print_cmd_fifo */
extern "C" __attribute__((visibility("default"))) int fm_print_cmd_fifo(void) {
    ALOGD("fm_print_cmd_fifo() called");
    return 0;
}

/* Demangled: fm_print_evt_fifo */
extern "C" __attribute__((visibility("default"))) int fm_print_evt_fifo(void) {
    ALOGD("fm_print_evt_fifo() called");
    return 0;
}

/* Demangled: fm_delayms */
extern "C" __attribute__((visibility("default"))) int fm_delayms(void) {
    ALOGD("fm_delayms() called");
    return 0;
}

/* Demangled: fm_full_cqi_req */
extern "C" __attribute__((visibility("default"))) int fm_full_cqi_req(void) {
    ALOGD("fm_full_cqi_req() called");
    return 0;
}

/* Demangled: fm_get_read_result */
extern "C" __attribute__((visibility("default"))) int fm_get_read_result(void) {
    ALOGD("fm_get_read_result() called");
    return 0;
}

/* Exported Object: fm_res */
extern "C" __attribute__((visibility("default"))) void* fm_res = NULL;

/* Demangled: fm_file_write */
extern "C" __attribute__((visibility("default"))) int fm_file_write(void) {
    ALOGD("fm_file_write() called");
    return 0;
}

/* Demangled: mt6631_fm_low_ops_unregister */
extern "C" __attribute__((visibility("default"))) int mt6631_fm_low_ops_unregister(void) {
    ALOGD("mt6631_fm_low_ops_unregister() called");
    return 0;
}

/* Demangled: fm_lock_put */
extern "C" __attribute__((visibility("default"))) int fm_lock_put(void) {
    ALOGD("fm_lock_put() called");
    return 0;
}

/* Demangled: fm_ioremap_read */
extern "C" __attribute__((visibility("default"))) int fm_ioremap_read(void) {
    ALOGD("fm_ioremap_read() called");
    return 0;
}

/* Exported Object: __crc_g_dbg_level */
extern "C" __attribute__((visibility("default"))) void* __crc_g_dbg_level = NULL;

/* Demangled: init_module */
extern "C" __attribute__((visibility("default"))) int init_module(void) {
    ALOGD("init_module() called");
    return 0;
}

/* Demangled: fm_env_setup */
extern "C" __attribute__((visibility("default"))) int fm_env_setup(void) {
    ALOGD("fm_env_setup() called");
    return 0;
}

/* Demangled: fm_env_destroy */
extern "C" __attribute__((visibility("default"))) int fm_env_destroy(void) {
    ALOGD("fm_env_destroy() called");
    return 0;
}

/* Exported Object: __this_module */
extern "C" __attribute__((visibility("default"))) void* __this_module = NULL;

/* Demangled: fm_register_irq */
extern "C" __attribute__((visibility("default"))) int fm_register_irq(void) {
    ALOGD("fm_register_irq() called");
    return 0;
}

/* Demangled: cleanup_module */
extern "C" __attribute__((visibility("default"))) int cleanup_module(void) {
    ALOGD("cleanup_module() called");
    return 0;
}

/* Exported Object: g_fm_lna_pin_num */
extern "C" __attribute__((visibility("default"))) void* g_fm_lna_pin_num = NULL;

/* Demangled: fm_dev_init */
extern "C" __attribute__((visibility("default"))) int fm_dev_init(void) {
    ALOGD("fm_dev_init() called");
    return 0;
}

/* Demangled: fm_dev_destroy */
extern "C" __attribute__((visibility("default"))) int fm_dev_destroy(void) {
    ALOGD("fm_dev_destroy() called");
    return 0;
}

/* Demangled: fm_hwscan_stop */
extern "C" __attribute__((visibility("default"))) int fm_hwscan_stop(void) {
    ALOGD("fm_hwscan_stop() called");
    return 0;
}

/* Demangled: fm_sys_state_get */
extern "C" __attribute__((visibility("default"))) int fm_sys_state_get(void) {
    ALOGD("fm_sys_state_get() called");
    return 0;
}

/* Demangled: fm_rds_read */
extern "C" __attribute__((visibility("default"))) int fm_rds_read(void) {
    ALOGD("fm_rds_read() called");
    return 0;
}

/* Demangled: fm_restore_search */
extern "C" __attribute__((visibility("default"))) int fm_restore_search(void) {
    ALOGD("fm_restore_search() called");
    return 0;
}

/* Demangled: fm_pwr_state_get */
extern "C" __attribute__((visibility("default"))) int fm_pwr_state_get(void) {
    ALOGD("fm_pwr_state_get() called");
    return 0;
}

/* Demangled: fm_dump_reg */
extern "C" __attribute__((visibility("default"))) int fm_dump_reg(void) {
    ALOGD("fm_dump_reg() called");
    return 0;
}

/* Demangled: fm_tune */
extern "C" __attribute__((visibility("default"))) int fm_tune(void) {
    ALOGD("fm_tune() called");
    return 0;
}

/* Demangled: fm_setvol */
extern "C" __attribute__((visibility("default"))) int fm_setvol(void) {
    ALOGD("fm_setvol() called");
    return 0;
}

/* Demangled: fm_getvol */
extern "C" __attribute__((visibility("default"))) int fm_getvol(void) {
    ALOGD("fm_getvol() called");
    return 0;
}

/* Demangled: fm_mute */
extern "C" __attribute__((visibility("default"))) int fm_mute(void) {
    ALOGD("fm_mute() called");
    return 0;
}

/* Demangled: fm_getrssi */
extern "C" __attribute__((visibility("default"))) int fm_getrssi(void) {
    ALOGD("fm_getrssi() called");
    return 0;
}

/* Demangled: fm_chipid_get */
extern "C" __attribute__((visibility("default"))) int fm_chipid_get(void) {
    ALOGD("fm_chipid_get() called");
    return 0;
}

/* Demangled: fm_em_test */
extern "C" __attribute__((visibility("default"))) int fm_em_test(void) {
    ALOGD("fm_em_test() called");
    return 0;
}

/* Demangled: fm_read */
extern "C" __attribute__((visibility("default"))) int fm_read(void) {
    ALOGD("fm_read() called");
    return 0;
}

/* Demangled: fm_monostereo_get */
extern "C" __attribute__((visibility("default"))) int fm_monostereo_get(void) {
    ALOGD("fm_monostereo_get() called");
    return 0;
}

/* Demangled: fm_pamd_get */
extern "C" __attribute__((visibility("default"))) int fm_pamd_get(void) {
    ALOGD("fm_pamd_get() called");
    return 0;
}

/* Demangled: fm_rds_good_bc_get */
extern "C" __attribute__((visibility("default"))) int fm_rds_good_bc_get(void) {
    ALOGD("fm_rds_good_bc_get() called");
    return 0;
}

/* Demangled: fm_rds_bad_bc_get */
extern "C" __attribute__((visibility("default"))) int fm_rds_bad_bc_get(void) {
    ALOGD("fm_rds_bad_bc_get() called");
    return 0;
}

/* Demangled: fm_rds_bler_ratio_get */
extern "C" __attribute__((visibility("default"))) int fm_rds_bler_ratio_get(void) {
    ALOGD("fm_rds_bler_ratio_get() called");
    return 0;
}

/* Demangled: fm_rds_onoff */
extern "C" __attribute__((visibility("default"))) int fm_rds_onoff(void) {
    ALOGD("fm_rds_onoff() called");
    return 0;
}

/* Demangled: fm_powerup_tx */
extern "C" __attribute__((visibility("default"))) int fm_powerup_tx(void) {
    ALOGD("fm_powerup_tx() called");
    return 0;
}

/* Demangled: fm_tune_tx */
extern "C" __attribute__((visibility("default"))) int fm_tune_tx(void) {
    ALOGD("fm_tune_tx() called");
    return 0;
}

/* Demangled: fm_rds_tx */
extern "C" __attribute__((visibility("default"))) int fm_rds_tx(void) {
    ALOGD("fm_rds_tx() called");
    return 0;
}

/* Demangled: fm_tx_support */
extern "C" __attribute__((visibility("default"))) int fm_tx_support(void) {
    ALOGD("fm_tx_support() called");
    return 0;
}

/* Demangled: fm_rdstx_support */
extern "C" __attribute__((visibility("default"))) int fm_rdstx_support(void) {
    ALOGD("fm_rdstx_support() called");
    return 0;
}

/* Demangled: fm_rdstx_enable */
extern "C" __attribute__((visibility("default"))) int fm_rdstx_enable(void) {
    ALOGD("fm_rdstx_enable() called");
    return 0;
}

/* Demangled: fm_tx_scan */
extern "C" __attribute__((visibility("default"))) int fm_tx_scan(void) {
    ALOGD("fm_tx_scan() called");
    return 0;
}

/* Demangled: fm_over_bt */
extern "C" __attribute__((visibility("default"))) int fm_over_bt(void) {
    ALOGD("fm_over_bt() called");
    return 0;
}

/* Demangled: fm_ana_switch */
extern "C" __attribute__((visibility("default"))) int fm_ana_switch(void) {
    ALOGD("fm_ana_switch() called");
    return 0;
}

/* Demangled: fm_caparray_get */
extern "C" __attribute__((visibility("default"))) int fm_caparray_get(void) {
    ALOGD("fm_caparray_get() called");
    return 0;
}

/* Demangled: fm_get_gps_rtc_info */
extern "C" __attribute__((visibility("default"))) int fm_get_gps_rtc_info(void) {
    ALOGD("fm_get_gps_rtc_info() called");
    return 0;
}

/* Demangled: fm_i2s_set */
extern "C" __attribute__((visibility("default"))) int fm_i2s_set(void) {
    ALOGD("fm_i2s_set() called");
    return 0;
}

/* Demangled: fm_rds_group_cnt_get */
extern "C" __attribute__((visibility("default"))) int fm_rds_group_cnt_get(void) {
    ALOGD("fm_rds_group_cnt_get() called");
    return 0;
}

/* Demangled: fm_rds_log_get */
extern "C" __attribute__((visibility("default"))) int fm_rds_log_get(void) {
    ALOGD("fm_rds_log_get() called");
    return 0;
}

/* Demangled: fm_rds_block_cnt_reset */
extern "C" __attribute__((visibility("default"))) int fm_rds_block_cnt_reset(void) {
    ALOGD("fm_rds_block_cnt_reset() called");
    return 0;
}

/* Demangled: fm_cqi_get */
extern "C" __attribute__((visibility("default"))) int fm_cqi_get(void) {
    ALOGD("fm_cqi_get() called");
    return 0;
}

/* Demangled: fm_get_hw_info */
extern "C" __attribute__((visibility("default"))) int fm_get_hw_info(void) {
    ALOGD("fm_get_hw_info() called");
    return 0;
}

/* Demangled: fm_get_i2s_info */
extern "C" __attribute__((visibility("default"))) int fm_get_i2s_info(void) {
    ALOGD("fm_get_i2s_info() called");
    return 0;
}

/* Demangled: fm_is_dese_chan */
extern "C" __attribute__((visibility("default"))) int fm_is_dese_chan(void) {
    ALOGD("fm_is_dese_chan() called");
    return 0;
}

/* Demangled: fm_set_search_th */
extern "C" __attribute__((visibility("default"))) int fm_set_search_th(void) {
    ALOGD("fm_set_search_th() called");
    return 0;
}

/* Demangled: fm_get_aud_info */
extern "C" __attribute__((visibility("default"))) int fm_get_aud_info(void) {
    ALOGD("fm_get_aud_info() called");
    return 0;
}

/* Demangled: fm_set_stat */
extern "C" __attribute__((visibility("default"))) int fm_set_stat(void) {
    ALOGD("fm_set_stat() called");
    return 0;
}

/* Demangled: fm_get_stat */
extern "C" __attribute__((visibility("default"))) int fm_get_stat(void) {
    ALOGD("fm_get_stat() called");
    return 0;
}

/* Demangled: fm_cqi_log */
extern "C" __attribute__((visibility("default"))) int fm_cqi_log(void) {
    ALOGD("fm_cqi_log() called");
    return 0;
}

/* Demangled: fm_soft_mute_tune */
extern "C" __attribute__((visibility("default"))) int fm_soft_mute_tune(void) {
    ALOGD("fm_soft_mute_tune() called");
    return 0;
}

/* Demangled: fm_desense_check */
extern "C" __attribute__((visibility("default"))) int fm_desense_check(void) {
    ALOGD("fm_desense_check() called");
    return 0;
}

/* Demangled: fm_pmic_read */
extern "C" __attribute__((visibility("default"))) int fm_pmic_read(void) {
    ALOGD("fm_pmic_read() called");
    return 0;
}

/* Demangled: fm_monostereo_set */
extern "C" __attribute__((visibility("default"))) int fm_monostereo_set(void) {
    ALOGD("fm_monostereo_set() called");
    return 0;
}

/* Demangled: fm_pre_search */
extern "C" __attribute__((visibility("default"))) int fm_pre_search(void) {
    ALOGD("fm_pre_search() called");
    return 0;
}

/* Demangled: fm_powerdown */
extern "C" __attribute__((visibility("default"))) int fm_powerdown(void) {
    ALOGD("fm_powerdown() called");
    return 0;
}

/* Demangled: fm_powerup */
extern "C" __attribute__((visibility("default"))) int fm_powerup(void) {
    ALOGD("fm_powerup() called");
    return 0;
}

/* Demangled: fm_rds_group_cnt_reset */
extern "C" __attribute__((visibility("default"))) int fm_rds_group_cnt_reset(void) {
    ALOGD("fm_rds_group_cnt_reset() called");
    return 0;
}

/* Demangled: fm_write */
extern "C" __attribute__((visibility("default"))) int fm_write(void) {
    ALOGD("fm_write() called");
    return 0;
}

/* Demangled: fm_pmic_write */
extern "C" __attribute__((visibility("default"))) int fm_pmic_write(void) {
    ALOGD("fm_pmic_write() called");
    return 0;
}

/* Demangled: fm_subsys_reset */
extern "C" __attribute__((visibility("default"))) int fm_subsys_reset(void) {
    ALOGD("fm_subsys_reset() called");
    return 0;
}

/* Demangled: fm_open */
extern "C" __attribute__((visibility("default"))) int fm_open(void) {
    ALOGD("fm_open() called");
    return 0;
}

/* Exported Object: g_counter */
extern "C" __attribute__((visibility("default"))) void* g_counter = NULL;

/* Demangled: fm_close */
extern "C" __attribute__((visibility("default"))) int fm_close(void) {
    ALOGD("fm_close() called");
    return 0;
}

/* Demangled: fm_cust_config_setup */
extern "C" __attribute__((visibility("default"))) int fm_cust_config_setup(void) {
    ALOGD("fm_cust_config_setup() called");
    return 0;
}

/* Demangled: fm_pwr_state_set */
extern "C" __attribute__((visibility("default"))) int fm_pwr_state_set(void) {
    ALOGD("fm_pwr_state_set() called");
    return 0;
}

/* Demangled: fm_sys_state_set */
extern "C" __attribute__((visibility("default"))) int fm_sys_state_set(void) {
    ALOGD("fm_sys_state_set() called");
    return 0;
}

/* Demangled: fm_wholechip_rst_cb */
extern "C" __attribute__((visibility("default"))) int fm_wholechip_rst_cb(void) {
    ALOGD("fm_wholechip_rst_cb() called");
    return 0;
}

/* Exported Object: top_index */
extern "C" __attribute__((visibility("default"))) void* top_index = NULL;

/* Demangled: fm_eint_pin_cfg */
extern "C" __attribute__((visibility("default"))) int fm_eint_pin_cfg(void) {
    ALOGD("fm_eint_pin_cfg() called");
    return 0;
}

/* Demangled: fm_request_eint */
extern "C" __attribute__((visibility("default"))) int fm_request_eint(void) {
    ALOGD("fm_request_eint() called");
    return 0;
}

/* Demangled: fm_powerdowntx */
extern "C" __attribute__((visibility("default"))) int fm_powerdowntx(void) {
    ALOGD("fm_powerdowntx() called");
    return 0;
}

/* Demangled: fm_top_read */
extern "C" __attribute__((visibility("default"))) int fm_top_read(void) {
    ALOGD("fm_top_read() called");
    return 0;
}

/* Demangled: fm_top_write */
extern "C" __attribute__((visibility("default"))) int fm_top_write(void) {
    ALOGD("fm_top_write() called");
    return 0;
}

/* Demangled: fm_host_read */
extern "C" __attribute__((visibility("default"))) int fm_host_read(void) {
    ALOGD("fm_host_read() called");
    return 0;
}

/* Demangled: fm_host_write */
extern "C" __attribute__((visibility("default"))) int fm_host_write(void) {
    ALOGD("fm_host_write() called");
    return 0;
}

/* Demangled: fm_subsys_reset_work_func */
extern "C" __attribute__((visibility("default"))) int fm_subsys_reset_work_func(void) {
    ALOGD("fm_subsys_reset_work_func() called");
    return 0;
}

/* Demangled: fm_pwroff_work_func */
extern "C" __attribute__((visibility("default"))) int fm_pwroff_work_func(void) {
    ALOGD("fm_pwroff_work_func() called");
    return 0;
}

/* Demangled: fm_rds_parser */
extern "C" __attribute__((visibility("default"))) int fm_rds_parser(void) {
    ALOGD("fm_rds_parser() called");
    return 0;
}

/* Demangled: fm_flag_event_create */
extern "C" __attribute__((visibility("default"))) int fm_flag_event_create(void) {
    ALOGD("fm_flag_event_create() called");
    return 0;
}

/* Demangled: fm_flag_event_get */
extern "C" __attribute__((visibility("default"))) int fm_flag_event_get(void) {
    ALOGD("fm_flag_event_get() called");
    return 0;
}

/* Demangled: fm_workthread_create */
extern "C" __attribute__((visibility("default"))) int fm_workthread_create(void) {
    ALOGD("fm_workthread_create() called");
    return 0;
}

/* Demangled: fm_workthread_get */
extern "C" __attribute__((visibility("default"))) int fm_workthread_get(void) {
    ALOGD("fm_workthread_get() called");
    return 0;
}

/* Demangled: fm_work_create */
extern "C" __attribute__((visibility("default"))) int fm_work_create(void) {
    ALOGD("fm_work_create() called");
    return 0;
}

/* Demangled: fm_work_get */
extern "C" __attribute__((visibility("default"))) int fm_work_get(void) {
    ALOGD("fm_work_get() called");
    return 0;
}

/* Demangled: fm_workthread_put */
extern "C" __attribute__((visibility("default"))) int fm_workthread_put(void) {
    ALOGD("fm_workthread_put() called");
    return 0;
}

/* Demangled: fm_work_put */
extern "C" __attribute__((visibility("default"))) int fm_work_put(void) {
    ALOGD("fm_work_put() called");
    return 0;
}

/* Demangled: fm_cust_config_chip */
extern "C" __attribute__((visibility("default"))) int fm_cust_config_chip(void) {
    ALOGD("fm_cust_config_chip() called");
    return 0;
}

/* Demangled: fm_enable_eint */
extern "C" __attribute__((visibility("default"))) int fm_enable_eint(void) {
    ALOGD("fm_enable_eint() called");
    return 0;
}

/* Demangled: fm_flag_event_put */
extern "C" __attribute__((visibility("default"))) int fm_flag_event_put(void) {
    ALOGD("fm_flag_event_put() called");
    return 0;
}

/* Demangled: fm_wcn_ops_register */
extern "C" __attribute__((visibility("default"))) int fm_wcn_ops_register(void) {
    ALOGD("fm_wcn_ops_register() called");
    return 0;
}

/* Demangled: fm_spin_lock_create */
extern "C" __attribute__((visibility("default"))) int fm_spin_lock_create(void) {
    ALOGD("fm_spin_lock_create() called");
    return 0;
}

/* Demangled: fm_spin_lock_get */
extern "C" __attribute__((visibility("default"))) int fm_spin_lock_get(void) {
    ALOGD("fm_spin_lock_get() called");
    return 0;
}

/* Demangled: fm_timer_create */
extern "C" __attribute__((visibility("default"))) int fm_timer_create(void) {
    ALOGD("fm_timer_create() called");
    return 0;
}

/* Demangled: fm_timer_get */
extern "C" __attribute__((visibility("default"))) int fm_timer_get(void) {
    ALOGD("fm_timer_get() called");
    return 0;
}

/* Demangled: fm_link_setup */
extern "C" __attribute__((visibility("default"))) int fm_link_setup(void) {
    ALOGD("fm_link_setup() called");
    return 0;
}

/* Demangled: fm_link_release */
extern "C" __attribute__((visibility("default"))) int fm_link_release(void) {
    ALOGD("fm_link_release() called");
    return 0;
}

/* Demangled: fm_spin_lock_put */
extern "C" __attribute__((visibility("default"))) int fm_spin_lock_put(void) {
    ALOGD("fm_spin_lock_put() called");
    return 0;
}

/* Demangled: fm_timer_put */
extern "C" __attribute__((visibility("default"))) int fm_timer_put(void) {
    ALOGD("fm_timer_put() called");
    return 0;
}

/* Demangled: to_upper_n */
extern "C" __attribute__((visibility("default"))) int to_upper_n(void) {
    ALOGD("to_upper_n() called");
    return 0;
}

/* Demangled: check_hex_str */
extern "C" __attribute__((visibility("default"))) int check_hex_str(void) {
    ALOGD("check_hex_str() called");
    return 0;
}

/* Demangled: check_dec_str */
extern "C" __attribute__((visibility("default"))) int check_dec_str(void) {
    ALOGD("check_dec_str() called");
    return 0;
}

/* Demangled: ascii_to_hex */
extern "C" __attribute__((visibility("default"))) int ascii_to_hex(void) {
    ALOGD("ascii_to_hex() called");
    return 0;
}

/* Demangled: ascii_to_dec */
extern "C" __attribute__((visibility("default"))) int ascii_to_dec(void) {
    ALOGD("ascii_to_dec() called");
    return 0;
}

/* Demangled: trim_string */
extern "C" __attribute__((visibility("default"))) int trim_string(void) {
    ALOGD("trim_string() called");
    return 0;
}

/* Demangled: trim_path */
extern "C" __attribute__((visibility("default"))) int trim_path(void) {
    ALOGD("trim_path() called");
    return 0;
}

/* Demangled: check_path */
extern "C" __attribute__((visibility("default"))) int check_path(void) {
    ALOGD("check_path() called");
    return 0;
}

/* Demangled: cfg_parser */
extern "C" __attribute__((visibility("default"))) int cfg_parser(void) {
    ALOGD("cfg_parser() called");
    return 0;
}

/* Demangled: cfg_item_match */
extern "C" __attribute__((visibility("default"))) int cfg_item_match(void) {
    ALOGD("cfg_item_match() called");
    return 0;
}

/* Exported Object: g_fm_chip_type */
extern "C" __attribute__((visibility("default"))) void* g_fm_chip_type = NULL;

/* Demangled: fm_file_read */
extern "C" __attribute__((visibility("default"))) int fm_file_read(void) {
    ALOGD("fm_file_read() called");
    return 0;
}

/* Exported Object: g_fm_chipid */
extern "C" __attribute__((visibility("default"))) void* g_fm_chipid = NULL;

/* Demangled: fm_cust_config_fetch */
extern "C" __attribute__((visibility("default"))) int fm_cust_config_fetch(void) {
    ALOGD("fm_cust_config_fetch() called");
    return 0;
}

/* Demangled: file_read_thread */
extern "C" __attribute__((visibility("default"))) int file_read_thread(void) {
    ALOGD("file_read_thread() called");
    return 0;
}

/* Demangled: fm_event_wait_timeout */
extern "C" __attribute__((visibility("default"))) int fm_event_wait_timeout(void) {
    ALOGD("fm_event_wait_timeout() called");
    return 0;
}

/* Demangled: fm_fifo_in */
extern "C" __attribute__((visibility("default"))) int fm_fifo_in(void) {
    ALOGD("fm_fifo_in() called");
    return 0;
}

/* Demangled: fm_fifo_out */
extern "C" __attribute__((visibility("default"))) int fm_fifo_out(void) {
    ALOGD("fm_fifo_out() called");
    return 0;
}

/* Demangled: fm_fifo_is_full */
extern "C" __attribute__((visibility("default"))) int fm_fifo_is_full(void) {
    ALOGD("fm_fifo_is_full() called");
    return 0;
}

/* Demangled: fm_fifo_is_empty */
extern "C" __attribute__((visibility("default"))) int fm_fifo_is_empty(void) {
    ALOGD("fm_fifo_is_empty() called");
    return 0;
}

/* Demangled: fm_fifo_get_total_len */
extern "C" __attribute__((visibility("default"))) int fm_fifo_get_total_len(void) {
    ALOGD("fm_fifo_get_total_len() called");
    return 0;
}

/* Demangled: fm_fifo_get_valid_len */
extern "C" __attribute__((visibility("default"))) int fm_fifo_get_valid_len(void) {
    ALOGD("fm_fifo_get_valid_len() called");
    return 0;
}

/* Demangled: fm_fifo_reset */
extern "C" __attribute__((visibility("default"))) int fm_fifo_reset(void) {
    ALOGD("fm_fifo_reset() called");
    return 0;
}

/* Demangled: fm_fifo_init */
extern "C" __attribute__((visibility("default"))) int fm_fifo_init(void) {
    ALOGD("fm_fifo_init() called");
    return 0;
}

/* Demangled: fm_fifo_create */
extern "C" __attribute__((visibility("default"))) int fm_fifo_create(void) {
    ALOGD("fm_fifo_create() called");
    return 0;
}

/* Demangled: fm_fifo_release */
extern "C" __attribute__((visibility("default"))) int fm_fifo_release(void) {
    ALOGD("fm_fifo_release() called");
    return 0;
}

/* Demangled: fm_get_u16_from_auc */
extern "C" __attribute__((visibility("default"))) int fm_get_u16_from_auc(void) {
    ALOGD("fm_get_u16_from_auc() called");
    return 0;
}

/* Demangled: fm_set_u16_to_auc */
extern "C" __attribute__((visibility("default"))) int fm_set_u16_to_auc(void) {
    ALOGD("fm_set_u16_to_auc() called");
    return 0;
}

/* Demangled: fm_get_u32_from_auc */
extern "C" __attribute__((visibility("default"))) int fm_get_u32_from_auc(void) {
    ALOGD("fm_get_u32_from_auc() called");
    return 0;
}

/* Demangled: fm_set_u32_to_auc */
extern "C" __attribute__((visibility("default"))) int fm_set_u32_to_auc(void) {
    ALOGD("fm_set_u32_to_auc() called");
    return 0;
}

/* Demangled: fm_trace_fifo_create */
extern "C" __attribute__((visibility("default"))) int fm_trace_fifo_create(void) {
    ALOGD("fm_trace_fifo_create() called");
    return 0;
}

/* Demangled: fm_trace_out */
extern "C" __attribute__((visibility("default"))) int fm_trace_out(void) {
    ALOGD("fm_trace_out() called");
    return 0;
}

/* Demangled: fm_trace_in */
extern "C" __attribute__((visibility("default"))) int fm_trace_in(void) {
    ALOGD("fm_trace_in() called");
    return 0;
}

/* Demangled: fm_trace_is_full */
extern "C" __attribute__((visibility("default"))) int fm_trace_is_full(void) {
    ALOGD("fm_trace_is_full() called");
    return 0;
}

/* Demangled: fm_trace_is_empty */
extern "C" __attribute__((visibility("default"))) int fm_trace_is_empty(void) {
    ALOGD("fm_trace_is_empty() called");
    return 0;
}

/* Demangled: fm_trace_fifo_release */
extern "C" __attribute__((visibility("default"))) int fm_trace_fifo_release(void) {
    ALOGD("fm_trace_fifo_release() called");
    return 0;
}

/* Demangled: fm_ctrl_rx */
extern "C" __attribute__((visibility("default"))) int fm_ctrl_rx(void) {
    ALOGD("fm_ctrl_rx() called");
    return 0;
}

/* Demangled: fm_ctrl_tx */
extern "C" __attribute__((visibility("default"))) int fm_ctrl_tx(void) {
    ALOGD("fm_ctrl_tx() called");
    return 0;
}

/* Demangled: fm_event_parser */
extern "C" __attribute__((visibility("default"))) int fm_event_parser(void) {
    ALOGD("fm_event_parser() called");
    return 0;
}

/* Demangled: fm_wait_stc_done */
extern "C" __attribute__((visibility("default"))) int fm_wait_stc_done(void) {
    ALOGD("fm_wait_stc_done() called");
    return 0;
}

/* Demangled: fm_force_active_event */
extern "C" __attribute__((visibility("default"))) int fm_force_active_event(void) {
    ALOGD("fm_force_active_event() called");
    return 0;
}

/* Demangled: fm_disable_eint */
extern "C" __attribute__((visibility("default"))) int fm_disable_eint(void) {
    ALOGD("fm_disable_eint() called");
    return 0;
}

/* Demangled: fm_patch_download */
extern "C" __attribute__((visibility("default"))) int fm_patch_download(void) {
    ALOGD("fm_patch_download() called");
    return 0;
}

/* Demangled: fm_coeff_download */
extern "C" __attribute__((visibility("default"))) int fm_coeff_download(void) {
    ALOGD("fm_coeff_download() called");
    return 0;
}

/* Demangled: fm_get_reg */
extern "C" __attribute__((visibility("default"))) int fm_get_reg(void) {
    ALOGD("fm_get_reg() called");
    return 0;
}

/* Demangled: fm_set_reg */
extern "C" __attribute__((visibility("default"))) int fm_set_reg(void) {
    ALOGD("fm_set_reg() called");
    return 0;
}

/* Demangled: fm_set_bits_reg */
extern "C" __attribute__((visibility("default"))) int fm_set_bits_reg(void) {
    ALOGD("fm_set_bits_reg() called");
    return 0;
}

/* Demangled: fm_top_get_reg */
extern "C" __attribute__((visibility("default"))) int fm_top_get_reg(void) {
    ALOGD("fm_top_get_reg() called");
    return 0;
}

/* Demangled: fm_top_set_reg */
extern "C" __attribute__((visibility("default"))) int fm_top_set_reg(void) {
    ALOGD("fm_top_set_reg() called");
    return 0;
}

/* Demangled: fm_host_get_reg */
extern "C" __attribute__((visibility("default"))) int fm_host_get_reg(void) {
    ALOGD("fm_host_get_reg() called");
    return 0;
}

/* Demangled: fm_host_set_reg */
extern "C" __attribute__((visibility("default"))) int fm_host_set_reg(void) {
    ALOGD("fm_host_set_reg() called");
    return 0;
}

/* Demangled: fm_pmic_get_reg */
extern "C" __attribute__((visibility("default"))) int fm_pmic_get_reg(void) {
    ALOGD("fm_pmic_get_reg() called");
    return 0;
}

/* Demangled: fm_pmic_set_reg */
extern "C" __attribute__((visibility("default"))) int fm_pmic_set_reg(void) {
    ALOGD("fm_pmic_set_reg() called");
    return 0;
}

/* Demangled: fm_pmic_mod_reg */
extern "C" __attribute__((visibility("default"))) int fm_pmic_mod_reg(void) {
    ALOGD("fm_pmic_mod_reg() called");
    return 0;
}

/* Demangled: fm_ioremap_write */
extern "C" __attribute__((visibility("default"))) int fm_ioremap_write(void) {
    ALOGD("fm_ioremap_write() called");
    return 0;
}

/* Demangled: fw_spi_read */
extern "C" __attribute__((visibility("default"))) int fw_spi_read(void) {
    ALOGD("fw_spi_read() called");
    return 0;
}

/* Demangled: fw_spi_write */
extern "C" __attribute__((visibility("default"))) int fw_spi_write(void) {
    ALOGD("fw_spi_write() called");
    return 0;
}

/* Demangled: fw_bop_udelay */
extern "C" __attribute__((visibility("default"))) int fw_bop_udelay(void) {
    ALOGD("fw_bop_udelay() called");
    return 0;
}

/* Demangled: fw_bop_rd_until */
extern "C" __attribute__((visibility("default"))) int fw_bop_rd_until(void) {
    ALOGD("fw_bop_rd_until() called");
    return 0;
}

/* Demangled: fw_bop_modify */
extern "C" __attribute__((visibility("default"))) int fw_bop_modify(void) {
    ALOGD("fw_bop_modify() called");
    return 0;
}

/* Demangled: fw_bop_spi_rd_until */
extern "C" __attribute__((visibility("default"))) int fw_bop_spi_rd_until(void) {
    ALOGD("fw_bop_spi_rd_until() called");
    return 0;
}

/* Demangled: fw_bop_spi_modify */
extern "C" __attribute__((visibility("default"))) int fw_bop_spi_modify(void) {
    ALOGD("fw_bop_spi_modify() called");
    return 0;
}

/* Demangled: fm_low_ops_register */
extern "C" __attribute__((visibility("default"))) int fm_low_ops_register(void) {
    ALOGD("fm_low_ops_register() called");
    return 0;
}

/* Demangled: fm_low_ops_unregister */
extern "C" __attribute__((visibility("default"))) int fm_low_ops_unregister(void) {
    ALOGD("fm_low_ops_unregister() called");
    return 0;
}

/* Demangled: fm_rds_ops_register */
extern "C" __attribute__((visibility("default"))) int fm_rds_ops_register(void) {
    ALOGD("fm_rds_ops_register() called");
    return 0;
}

/* Demangled: fm_rds_ops_unregister */
extern "C" __attribute__((visibility("default"))) int fm_rds_ops_unregister(void) {
    ALOGD("fm_rds_ops_unregister() called");
    return 0;
}

/* Demangled: mt6635_fm_low_ops_register */
extern "C" __attribute__((visibility("default"))) int mt6635_fm_low_ops_register(void) {
    ALOGD("mt6635_fm_low_ops_register() called");
    return 0;
}

/* Demangled: mt6635_fm_low_ops_unregister */
extern "C" __attribute__((visibility("default"))) int mt6635_fm_low_ops_unregister(void) {
    ALOGD("mt6635_fm_low_ops_unregister() called");
    return 0;
}

/* Demangled: mt6635_fm_rds_ops_register */
extern "C" __attribute__((visibility("default"))) int mt6635_fm_rds_ops_register(void) {
    ALOGD("mt6635_fm_rds_ops_register() called");
    return 0;
}

/* Demangled: mt6635_fm_rds_ops_unregister */
extern "C" __attribute__((visibility("default"))) int mt6635_fm_rds_ops_unregister(void) {
    ALOGD("mt6635_fm_rds_ops_unregister() called");
    return 0;
}

/* Demangled: register_fw_ops_init */
extern "C" __attribute__((visibility("default"))) int register_fw_ops_init(void) {
    ALOGD("register_fw_ops_init() called");
    return 0;
}

/* Demangled: register_fw_ops_uninit */
extern "C" __attribute__((visibility("default"))) int register_fw_ops_uninit(void) {
    ALOGD("register_fw_ops_uninit() called");
    return 0;
}

/* Demangled: fm_wcn_ops_unregister */
extern "C" __attribute__((visibility("default"))) int fm_wcn_ops_unregister(void) {
    ALOGD("fm_wcn_ops_unregister() called");
    return 0;
}

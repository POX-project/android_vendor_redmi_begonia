/*
 * Reverse-Engineered ABI Specification for: fmradio_drv.ko
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: fmradio_drv.ko
 */

#ifndef BEGONIA_RE_FMRADIO_DRV_KO_H
#define BEGONIA_RE_FMRADIO_DRV_KO_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: mt6631_RDS_OnOff */
/* Demangled: mt6631_RDS_OnOff */
int mt6631_RDS_OnOff(void);

/* Symbol: g_dbg_level */
/* Demangled: g_dbg_level */
extern void* g_dbg_level;

/* Symbol: fm_reg_read */
/* Demangled: fm_reg_read */
int fm_reg_read(void);

/* Symbol: fm_reg_write */
/* Demangled: fm_reg_write */
int fm_reg_write(void);

/* Symbol: mt6631_fm_rds_ops_register */
/* Demangled: mt6631_fm_rds_ops_register */
int mt6631_fm_rds_ops_register(void);

/* Symbol: mt6631_rds_log */
/* Demangled: mt6631_rds_log */
extern void* mt6631_rds_log;

/* Symbol: rds_parser */
/* Demangled: rds_parser */
int rds_parser(void);

/* Symbol: rds_grp_counter_get */
/* Demangled: rds_grp_counter_get */
int rds_grp_counter_get(void);

/* Symbol: rds_grp_counter_reset */
/* Demangled: rds_grp_counter_reset */
int rds_grp_counter_reset(void);

/* Symbol: mt6631_fm_rds_ops_unregister */
/* Demangled: mt6631_fm_rds_ops_unregister */
int mt6631_fm_rds_ops_unregister(void);

/* Symbol: rds_log_in */
/* Demangled: rds_log_in */
int rds_log_in(void);

/* Symbol: rds_log_out */
/* Demangled: rds_log_out */
int rds_log_out(void);

/* Symbol: mt8168_spi_hopping_clock_switch */
/* Demangled: mt8168_spi_hopping_clock_switch */
int mt8168_spi_hopping_clock_switch(void);

/* Symbol: fm_host_reg_read */
/* Demangled: fm_host_reg_read */
int fm_host_reg_read(void);

/* Symbol: fm_host_reg_write */
/* Demangled: fm_host_reg_write */
int fm_host_reg_write(void);

/* Symbol: fm_delayus */
/* Demangled: fm_delayus */
int fm_delayus(void);

/* Symbol: mt6631_fm_low_ops_register */
/* Demangled: mt6631_fm_low_ops_register */
int mt6631_fm_low_ops_register(void);

/* Symbol: fm_lock_create */
/* Demangled: fm_lock_create */
int fm_lock_create(void);

/* Symbol: cmd_buf_lock */
/* Demangled: cmd_buf_lock */
extern void* cmd_buf_lock;

/* Symbol: fm_lock_get */
/* Demangled: fm_lock_get */
int fm_lock_get(void);

/* Symbol: cmd_buf */
/* Demangled: cmd_buf */
extern void* cmd_buf;

/* Symbol: fm_set_bits */
/* Demangled: fm_set_bits */
int fm_set_bits(void);

/* Symbol: fm_bop_modify */
/* Demangled: fm_bop_modify */
int fm_bop_modify(void);

/* Symbol: fm_bop_rd_until */
/* Demangled: fm_bop_rd_until */
int fm_bop_rd_until(void);

/* Symbol: fm_op_seq_combine_cmd */
/* Demangled: fm_op_seq_combine_cmd */
int fm_op_seq_combine_cmd(void);

/* Symbol: fm_cmd_tx */
/* Demangled: fm_cmd_tx */
int fm_cmd_tx(void);

/* Symbol: fm_wcn_ops */
/* Demangled: fm_wcn_ops */
extern void* fm_wcn_ops;

/* Symbol: fm_top_reg_read */
/* Demangled: fm_top_reg_read */
int fm_top_reg_read(void);

/* Symbol: fm_top_reg_write */
/* Demangled: fm_top_reg_write */
int fm_top_reg_write(void);

/* Symbol: fm_config */
/* Demangled: fm_config */
extern void* fm_config;

/* Symbol: fm_bop_top_write */
/* Demangled: fm_bop_top_write */
int fm_bop_top_write(void);

/* Symbol: fm_bop_udelay */
/* Demangled: fm_bop_udelay */
int fm_bop_udelay(void);

/* Symbol: fm_bop_write */
/* Demangled: fm_bop_write */
int fm_bop_write(void);

/* Symbol: fm_get_patch_path */
/* Demangled: fm_get_patch_path */
int fm_get_patch_path(void);

/* Symbol: fm_download_patch */
/* Demangled: fm_download_patch */
int fm_download_patch(void);

/* Symbol: fm_get_coeff_path */
/* Demangled: fm_get_coeff_path */
int fm_get_coeff_path(void);

/* Symbol: fm_bop_top_rd_until */
/* Demangled: fm_bop_top_rd_until */
int fm_bop_top_rd_until(void);

/* Symbol: fm_get_channel_space */
/* Demangled: fm_get_channel_space */
int fm_get_channel_space(void);

/* Symbol: fm_print_cmd_fifo */
/* Demangled: fm_print_cmd_fifo */
int fm_print_cmd_fifo(void);

/* Symbol: fm_print_evt_fifo */
/* Demangled: fm_print_evt_fifo */
int fm_print_evt_fifo(void);

/* Symbol: fm_delayms */
/* Demangled: fm_delayms */
int fm_delayms(void);

/* Symbol: fm_full_cqi_req */
/* Demangled: fm_full_cqi_req */
int fm_full_cqi_req(void);

/* Symbol: fm_get_read_result */
/* Demangled: fm_get_read_result */
int fm_get_read_result(void);

/* Symbol: fm_res */
/* Demangled: fm_res */
extern void* fm_res;

/* Symbol: fm_file_write */
/* Demangled: fm_file_write */
int fm_file_write(void);

/* Symbol: mt6631_fm_low_ops_unregister */
/* Demangled: mt6631_fm_low_ops_unregister */
int mt6631_fm_low_ops_unregister(void);

/* Symbol: fm_lock_put */
/* Demangled: fm_lock_put */
int fm_lock_put(void);

/* Symbol: fm_ioremap_read */
/* Demangled: fm_ioremap_read */
int fm_ioremap_read(void);

/* Symbol: __crc_g_dbg_level */
/* Demangled: __crc_g_dbg_level */
extern void* __crc_g_dbg_level;

/* Symbol: init_module */
/* Demangled: init_module */
int init_module(void);

/* Symbol: fm_env_setup */
/* Demangled: fm_env_setup */
int fm_env_setup(void);

/* Symbol: fm_env_destroy */
/* Demangled: fm_env_destroy */
int fm_env_destroy(void);

/* Symbol: __this_module */
/* Demangled: __this_module */
extern void* __this_module;

/* Symbol: fm_register_irq */
/* Demangled: fm_register_irq */
int fm_register_irq(void);

/* Symbol: cleanup_module */
/* Demangled: cleanup_module */
int cleanup_module(void);

/* Symbol: g_fm_lna_pin_num */
/* Demangled: g_fm_lna_pin_num */
extern void* g_fm_lna_pin_num;

/* Symbol: fm_dev_init */
/* Demangled: fm_dev_init */
int fm_dev_init(void);

/* Symbol: fm_dev_destroy */
/* Demangled: fm_dev_destroy */
int fm_dev_destroy(void);

/* Symbol: fm_hwscan_stop */
/* Demangled: fm_hwscan_stop */
int fm_hwscan_stop(void);

/* Symbol: fm_sys_state_get */
/* Demangled: fm_sys_state_get */
int fm_sys_state_get(void);

/* Symbol: fm_rds_read */
/* Demangled: fm_rds_read */
int fm_rds_read(void);

/* Symbol: fm_restore_search */
/* Demangled: fm_restore_search */
int fm_restore_search(void);

/* Symbol: fm_pwr_state_get */
/* Demangled: fm_pwr_state_get */
int fm_pwr_state_get(void);

/* Symbol: fm_dump_reg */
/* Demangled: fm_dump_reg */
int fm_dump_reg(void);

/* Symbol: fm_tune */
/* Demangled: fm_tune */
int fm_tune(void);

/* Symbol: fm_setvol */
/* Demangled: fm_setvol */
int fm_setvol(void);

/* Symbol: fm_getvol */
/* Demangled: fm_getvol */
int fm_getvol(void);

/* Symbol: fm_mute */
/* Demangled: fm_mute */
int fm_mute(void);

/* Symbol: fm_getrssi */
/* Demangled: fm_getrssi */
int fm_getrssi(void);

/* Symbol: fm_chipid_get */
/* Demangled: fm_chipid_get */
int fm_chipid_get(void);

/* Symbol: fm_em_test */
/* Demangled: fm_em_test */
int fm_em_test(void);

/* Symbol: fm_read */
/* Demangled: fm_read */
int fm_read(void);

/* Symbol: fm_monostereo_get */
/* Demangled: fm_monostereo_get */
int fm_monostereo_get(void);

/* Symbol: fm_pamd_get */
/* Demangled: fm_pamd_get */
int fm_pamd_get(void);

/* Symbol: fm_rds_good_bc_get */
/* Demangled: fm_rds_good_bc_get */
int fm_rds_good_bc_get(void);

/* Symbol: fm_rds_bad_bc_get */
/* Demangled: fm_rds_bad_bc_get */
int fm_rds_bad_bc_get(void);

/* Symbol: fm_rds_bler_ratio_get */
/* Demangled: fm_rds_bler_ratio_get */
int fm_rds_bler_ratio_get(void);

/* Symbol: fm_rds_onoff */
/* Demangled: fm_rds_onoff */
int fm_rds_onoff(void);

/* Symbol: fm_powerup_tx */
/* Demangled: fm_powerup_tx */
int fm_powerup_tx(void);

/* Symbol: fm_tune_tx */
/* Demangled: fm_tune_tx */
int fm_tune_tx(void);

/* Symbol: fm_rds_tx */
/* Demangled: fm_rds_tx */
int fm_rds_tx(void);

/* Symbol: fm_tx_support */
/* Demangled: fm_tx_support */
int fm_tx_support(void);

/* Symbol: fm_rdstx_support */
/* Demangled: fm_rdstx_support */
int fm_rdstx_support(void);

/* Symbol: fm_rdstx_enable */
/* Demangled: fm_rdstx_enable */
int fm_rdstx_enable(void);

/* Symbol: fm_tx_scan */
/* Demangled: fm_tx_scan */
int fm_tx_scan(void);

/* Symbol: fm_over_bt */
/* Demangled: fm_over_bt */
int fm_over_bt(void);

/* Symbol: fm_ana_switch */
/* Demangled: fm_ana_switch */
int fm_ana_switch(void);

/* Symbol: fm_caparray_get */
/* Demangled: fm_caparray_get */
int fm_caparray_get(void);

/* Symbol: fm_get_gps_rtc_info */
/* Demangled: fm_get_gps_rtc_info */
int fm_get_gps_rtc_info(void);

/* Symbol: fm_i2s_set */
/* Demangled: fm_i2s_set */
int fm_i2s_set(void);

/* Symbol: fm_rds_group_cnt_get */
/* Demangled: fm_rds_group_cnt_get */
int fm_rds_group_cnt_get(void);

/* Symbol: fm_rds_log_get */
/* Demangled: fm_rds_log_get */
int fm_rds_log_get(void);

/* Symbol: fm_rds_block_cnt_reset */
/* Demangled: fm_rds_block_cnt_reset */
int fm_rds_block_cnt_reset(void);

/* Symbol: fm_cqi_get */
/* Demangled: fm_cqi_get */
int fm_cqi_get(void);

/* Symbol: fm_get_hw_info */
/* Demangled: fm_get_hw_info */
int fm_get_hw_info(void);

/* Symbol: fm_get_i2s_info */
/* Demangled: fm_get_i2s_info */
int fm_get_i2s_info(void);

/* Symbol: fm_is_dese_chan */
/* Demangled: fm_is_dese_chan */
int fm_is_dese_chan(void);

/* Symbol: fm_set_search_th */
/* Demangled: fm_set_search_th */
int fm_set_search_th(void);

/* Symbol: fm_get_aud_info */
/* Demangled: fm_get_aud_info */
int fm_get_aud_info(void);

/* Symbol: fm_set_stat */
/* Demangled: fm_set_stat */
int fm_set_stat(void);

/* Symbol: fm_get_stat */
/* Demangled: fm_get_stat */
int fm_get_stat(void);

/* Symbol: fm_cqi_log */
/* Demangled: fm_cqi_log */
int fm_cqi_log(void);

/* Symbol: fm_soft_mute_tune */
/* Demangled: fm_soft_mute_tune */
int fm_soft_mute_tune(void);

/* Symbol: fm_desense_check */
/* Demangled: fm_desense_check */
int fm_desense_check(void);

/* Symbol: fm_pmic_read */
/* Demangled: fm_pmic_read */
int fm_pmic_read(void);

/* Symbol: fm_monostereo_set */
/* Demangled: fm_monostereo_set */
int fm_monostereo_set(void);

/* Symbol: fm_pre_search */
/* Demangled: fm_pre_search */
int fm_pre_search(void);

/* Symbol: fm_powerdown */
/* Demangled: fm_powerdown */
int fm_powerdown(void);

/* Symbol: fm_powerup */
/* Demangled: fm_powerup */
int fm_powerup(void);

/* Symbol: fm_rds_group_cnt_reset */
/* Demangled: fm_rds_group_cnt_reset */
int fm_rds_group_cnt_reset(void);

/* Symbol: fm_write */
/* Demangled: fm_write */
int fm_write(void);

/* Symbol: fm_pmic_write */
/* Demangled: fm_pmic_write */
int fm_pmic_write(void);

/* Symbol: fm_subsys_reset */
/* Demangled: fm_subsys_reset */
int fm_subsys_reset(void);

/* Symbol: fm_open */
/* Demangled: fm_open */
int fm_open(void);

/* Symbol: g_counter */
/* Demangled: g_counter */
extern void* g_counter;

/* Symbol: fm_close */
/* Demangled: fm_close */
int fm_close(void);

/* Symbol: fm_cust_config_setup */
/* Demangled: fm_cust_config_setup */
int fm_cust_config_setup(void);

/* Symbol: fm_pwr_state_set */
/* Demangled: fm_pwr_state_set */
int fm_pwr_state_set(void);

/* Symbol: fm_sys_state_set */
/* Demangled: fm_sys_state_set */
int fm_sys_state_set(void);

/* Symbol: fm_wholechip_rst_cb */
/* Demangled: fm_wholechip_rst_cb */
int fm_wholechip_rst_cb(void);

/* Symbol: top_index */
/* Demangled: top_index */
extern void* top_index;

/* Symbol: fm_eint_pin_cfg */
/* Demangled: fm_eint_pin_cfg */
int fm_eint_pin_cfg(void);

/* Symbol: fm_request_eint */
/* Demangled: fm_request_eint */
int fm_request_eint(void);

/* Symbol: fm_powerdowntx */
/* Demangled: fm_powerdowntx */
int fm_powerdowntx(void);

/* Symbol: fm_top_read */
/* Demangled: fm_top_read */
int fm_top_read(void);

/* Symbol: fm_top_write */
/* Demangled: fm_top_write */
int fm_top_write(void);

/* Symbol: fm_host_read */
/* Demangled: fm_host_read */
int fm_host_read(void);

/* Symbol: fm_host_write */
/* Demangled: fm_host_write */
int fm_host_write(void);

/* Symbol: fm_subsys_reset_work_func */
/* Demangled: fm_subsys_reset_work_func */
int fm_subsys_reset_work_func(void);

/* Symbol: fm_pwroff_work_func */
/* Demangled: fm_pwroff_work_func */
int fm_pwroff_work_func(void);

/* Symbol: fm_rds_parser */
/* Demangled: fm_rds_parser */
int fm_rds_parser(void);

/* Symbol: fm_flag_event_create */
/* Demangled: fm_flag_event_create */
int fm_flag_event_create(void);

/* Symbol: fm_flag_event_get */
/* Demangled: fm_flag_event_get */
int fm_flag_event_get(void);

/* Symbol: fm_workthread_create */
/* Demangled: fm_workthread_create */
int fm_workthread_create(void);

/* Symbol: fm_workthread_get */
/* Demangled: fm_workthread_get */
int fm_workthread_get(void);

/* Symbol: fm_work_create */
/* Demangled: fm_work_create */
int fm_work_create(void);

/* Symbol: fm_work_get */
/* Demangled: fm_work_get */
int fm_work_get(void);

/* Symbol: fm_workthread_put */
/* Demangled: fm_workthread_put */
int fm_workthread_put(void);

/* Symbol: fm_work_put */
/* Demangled: fm_work_put */
int fm_work_put(void);

/* Symbol: fm_cust_config_chip */
/* Demangled: fm_cust_config_chip */
int fm_cust_config_chip(void);

/* Symbol: fm_enable_eint */
/* Demangled: fm_enable_eint */
int fm_enable_eint(void);

/* Symbol: fm_flag_event_put */
/* Demangled: fm_flag_event_put */
int fm_flag_event_put(void);

/* Symbol: fm_wcn_ops_register */
/* Demangled: fm_wcn_ops_register */
int fm_wcn_ops_register(void);

/* Symbol: fm_spin_lock_create */
/* Demangled: fm_spin_lock_create */
int fm_spin_lock_create(void);

/* Symbol: fm_spin_lock_get */
/* Demangled: fm_spin_lock_get */
int fm_spin_lock_get(void);

/* Symbol: fm_timer_create */
/* Demangled: fm_timer_create */
int fm_timer_create(void);

/* Symbol: fm_timer_get */
/* Demangled: fm_timer_get */
int fm_timer_get(void);

/* Symbol: fm_link_setup */
/* Demangled: fm_link_setup */
int fm_link_setup(void);

/* Symbol: fm_link_release */
/* Demangled: fm_link_release */
int fm_link_release(void);

/* Symbol: fm_spin_lock_put */
/* Demangled: fm_spin_lock_put */
int fm_spin_lock_put(void);

/* Symbol: fm_timer_put */
/* Demangled: fm_timer_put */
int fm_timer_put(void);

/* Symbol: to_upper_n */
/* Demangled: to_upper_n */
int to_upper_n(void);

/* Symbol: check_hex_str */
/* Demangled: check_hex_str */
int check_hex_str(void);

/* Symbol: check_dec_str */
/* Demangled: check_dec_str */
int check_dec_str(void);

/* Symbol: ascii_to_hex */
/* Demangled: ascii_to_hex */
int ascii_to_hex(void);

/* Symbol: ascii_to_dec */
/* Demangled: ascii_to_dec */
int ascii_to_dec(void);

/* Symbol: trim_string */
/* Demangled: trim_string */
int trim_string(void);

/* Symbol: trim_path */
/* Demangled: trim_path */
int trim_path(void);

/* Symbol: check_path */
/* Demangled: check_path */
int check_path(void);

/* Symbol: cfg_parser */
/* Demangled: cfg_parser */
int cfg_parser(void);

/* Symbol: cfg_item_match */
/* Demangled: cfg_item_match */
int cfg_item_match(void);

/* Symbol: g_fm_chip_type */
/* Demangled: g_fm_chip_type */
extern void* g_fm_chip_type;

/* Symbol: fm_file_read */
/* Demangled: fm_file_read */
int fm_file_read(void);

/* Symbol: g_fm_chipid */
/* Demangled: g_fm_chipid */
extern void* g_fm_chipid;

/* Symbol: fm_cust_config_fetch */
/* Demangled: fm_cust_config_fetch */
int fm_cust_config_fetch(void);

/* Symbol: file_read_thread */
/* Demangled: file_read_thread */
int file_read_thread(void);

/* Symbol: fm_event_wait_timeout */
/* Demangled: fm_event_wait_timeout */
int fm_event_wait_timeout(void);

/* Symbol: fm_fifo_in */
/* Demangled: fm_fifo_in */
int fm_fifo_in(void);

/* Symbol: fm_fifo_out */
/* Demangled: fm_fifo_out */
int fm_fifo_out(void);

/* Symbol: fm_fifo_is_full */
/* Demangled: fm_fifo_is_full */
int fm_fifo_is_full(void);

/* Symbol: fm_fifo_is_empty */
/* Demangled: fm_fifo_is_empty */
int fm_fifo_is_empty(void);

/* Symbol: fm_fifo_get_total_len */
/* Demangled: fm_fifo_get_total_len */
int fm_fifo_get_total_len(void);

/* Symbol: fm_fifo_get_valid_len */
/* Demangled: fm_fifo_get_valid_len */
int fm_fifo_get_valid_len(void);

/* Symbol: fm_fifo_reset */
/* Demangled: fm_fifo_reset */
int fm_fifo_reset(void);

/* Symbol: fm_fifo_init */
/* Demangled: fm_fifo_init */
int fm_fifo_init(void);

/* Symbol: fm_fifo_create */
/* Demangled: fm_fifo_create */
int fm_fifo_create(void);

/* Symbol: fm_fifo_release */
/* Demangled: fm_fifo_release */
int fm_fifo_release(void);

/* Symbol: fm_get_u16_from_auc */
/* Demangled: fm_get_u16_from_auc */
int fm_get_u16_from_auc(void);

/* Symbol: fm_set_u16_to_auc */
/* Demangled: fm_set_u16_to_auc */
int fm_set_u16_to_auc(void);

/* Symbol: fm_get_u32_from_auc */
/* Demangled: fm_get_u32_from_auc */
int fm_get_u32_from_auc(void);

/* Symbol: fm_set_u32_to_auc */
/* Demangled: fm_set_u32_to_auc */
int fm_set_u32_to_auc(void);

/* Symbol: fm_trace_fifo_create */
/* Demangled: fm_trace_fifo_create */
int fm_trace_fifo_create(void);

/* Symbol: fm_trace_out */
/* Demangled: fm_trace_out */
int fm_trace_out(void);

/* Symbol: fm_trace_in */
/* Demangled: fm_trace_in */
int fm_trace_in(void);

/* Symbol: fm_trace_is_full */
/* Demangled: fm_trace_is_full */
int fm_trace_is_full(void);

/* Symbol: fm_trace_is_empty */
/* Demangled: fm_trace_is_empty */
int fm_trace_is_empty(void);

/* Symbol: fm_trace_fifo_release */
/* Demangled: fm_trace_fifo_release */
int fm_trace_fifo_release(void);

/* Symbol: fm_ctrl_rx */
/* Demangled: fm_ctrl_rx */
int fm_ctrl_rx(void);

/* Symbol: fm_ctrl_tx */
/* Demangled: fm_ctrl_tx */
int fm_ctrl_tx(void);

/* Symbol: fm_event_parser */
/* Demangled: fm_event_parser */
int fm_event_parser(void);

/* Symbol: fm_wait_stc_done */
/* Demangled: fm_wait_stc_done */
int fm_wait_stc_done(void);

/* Symbol: fm_force_active_event */
/* Demangled: fm_force_active_event */
int fm_force_active_event(void);

/* Symbol: fm_disable_eint */
/* Demangled: fm_disable_eint */
int fm_disable_eint(void);

/* Symbol: fm_patch_download */
/* Demangled: fm_patch_download */
int fm_patch_download(void);

/* Symbol: fm_coeff_download */
/* Demangled: fm_coeff_download */
int fm_coeff_download(void);

/* Symbol: fm_get_reg */
/* Demangled: fm_get_reg */
int fm_get_reg(void);

/* Symbol: fm_set_reg */
/* Demangled: fm_set_reg */
int fm_set_reg(void);

/* Symbol: fm_set_bits_reg */
/* Demangled: fm_set_bits_reg */
int fm_set_bits_reg(void);

/* Symbol: fm_top_get_reg */
/* Demangled: fm_top_get_reg */
int fm_top_get_reg(void);

/* Symbol: fm_top_set_reg */
/* Demangled: fm_top_set_reg */
int fm_top_set_reg(void);

/* Symbol: fm_host_get_reg */
/* Demangled: fm_host_get_reg */
int fm_host_get_reg(void);

/* Symbol: fm_host_set_reg */
/* Demangled: fm_host_set_reg */
int fm_host_set_reg(void);

/* Symbol: fm_pmic_get_reg */
/* Demangled: fm_pmic_get_reg */
int fm_pmic_get_reg(void);

/* Symbol: fm_pmic_set_reg */
/* Demangled: fm_pmic_set_reg */
int fm_pmic_set_reg(void);

/* Symbol: fm_pmic_mod_reg */
/* Demangled: fm_pmic_mod_reg */
int fm_pmic_mod_reg(void);

/* Symbol: fm_ioremap_write */
/* Demangled: fm_ioremap_write */
int fm_ioremap_write(void);

/* Symbol: fw_spi_read */
/* Demangled: fw_spi_read */
int fw_spi_read(void);

/* Symbol: fw_spi_write */
/* Demangled: fw_spi_write */
int fw_spi_write(void);

/* Symbol: fw_bop_udelay */
/* Demangled: fw_bop_udelay */
int fw_bop_udelay(void);

/* Symbol: fw_bop_rd_until */
/* Demangled: fw_bop_rd_until */
int fw_bop_rd_until(void);

/* Symbol: fw_bop_modify */
/* Demangled: fw_bop_modify */
int fw_bop_modify(void);

/* Symbol: fw_bop_spi_rd_until */
/* Demangled: fw_bop_spi_rd_until */
int fw_bop_spi_rd_until(void);

/* Symbol: fw_bop_spi_modify */
/* Demangled: fw_bop_spi_modify */
int fw_bop_spi_modify(void);

/* Symbol: fm_low_ops_register */
/* Demangled: fm_low_ops_register */
int fm_low_ops_register(void);

/* Symbol: fm_low_ops_unregister */
/* Demangled: fm_low_ops_unregister */
int fm_low_ops_unregister(void);

/* Symbol: fm_rds_ops_register */
/* Demangled: fm_rds_ops_register */
int fm_rds_ops_register(void);

/* Symbol: fm_rds_ops_unregister */
/* Demangled: fm_rds_ops_unregister */
int fm_rds_ops_unregister(void);

/* Symbol: mt6635_fm_low_ops_register */
/* Demangled: mt6635_fm_low_ops_register */
int mt6635_fm_low_ops_register(void);

/* Symbol: mt6635_fm_low_ops_unregister */
/* Demangled: mt6635_fm_low_ops_unregister */
int mt6635_fm_low_ops_unregister(void);

/* Symbol: mt6635_fm_rds_ops_register */
/* Demangled: mt6635_fm_rds_ops_register */
int mt6635_fm_rds_ops_register(void);

/* Symbol: mt6635_fm_rds_ops_unregister */
/* Demangled: mt6635_fm_rds_ops_unregister */
int mt6635_fm_rds_ops_unregister(void);

/* Symbol: register_fw_ops_init */
/* Demangled: register_fw_ops_init */
int register_fw_ops_init(void);

/* Symbol: register_fw_ops_uninit */
/* Demangled: register_fw_ops_uninit */
int register_fw_ops_uninit(void);

/* Symbol: fm_wcn_ops_unregister */
/* Demangled: fm_wcn_ops_unregister */
int fm_wcn_ops_unregister(void);

__END_DECLS

#endif /* BEGONIA_RE_FMRADIO_DRV_KO_H */

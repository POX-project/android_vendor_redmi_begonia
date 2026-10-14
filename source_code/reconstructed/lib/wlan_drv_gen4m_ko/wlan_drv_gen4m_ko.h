/*
 * Reverse-Engineered ABI Specification for: wlan_drv_gen4m.ko
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: wlan_drv_gen4m.ko
 */

#ifndef BEGONIA_RE_WLAN_DRV_GEN4M_KO_H
#define BEGONIA_RE_WLAN_DRV_GEN4M_KO_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: kalGetCpuBoostThreshold */
/* Demangled: kalGetCpuBoostThreshold */
int kalGetCpuBoostThreshold(void);

/* Symbol: aucDebugModule */
/* Demangled: aucDebugModule */
extern void* aucDebugModule;

/* Symbol: kalBoostCpu */
/* Demangled: kalBoostCpu */
int kalBoostCpu(void);

/* Symbol: kalSetEmiMpuProtection */
/* Demangled: kalSetEmiMpuProtection */
int kalSetEmiMpuProtection(void);

/* Symbol: kalSetDrvEmiMpuProtection */
/* Demangled: kalSetDrvEmiMpuProtection */
int kalSetDrvEmiMpuProtection(void);

/* Symbol: kalGetFwFlavor */
/* Demangled: kalGetFwFlavor */
int kalGetFwFlavor(void);

/* Symbol: agent_trtok */
/* Demangled: agent_trtok */
int agent_trtok(void);

/* Symbol: agnt_rstrtok */
/* Demangled: agnt_rstrtok */
extern void* agnt_rstrtok;

/* Symbol: mt_agent_hqa_cmd_string_parser */
/* Demangled: mt_agent_hqa_cmd_string_parser */
int mt_agent_hqa_cmd_string_parser(void);

/* Symbol: sys_ad_move_mem */
/* Demangled: sys_ad_move_mem */
int sys_ad_move_mem(void);

/* Symbol: mt_agent_hqa_cmd_handler */
/* Demangled: mt_agent_hqa_cmd_handler */
int mt_agent_hqa_cmd_handler(void);

/* Symbol: mt_agent_cli_act */
/* Demangled: mt_agent_cli_act */
int mt_agent_cli_act(void);

/* Symbol: mt_agent_cli_set_w */
/* Demangled: mt_agent_cli_set_w */
int mt_agent_cli_set_w(void);

/* Symbol: sys_ad_zero_mem */
/* Demangled: sys_ad_zero_mem */
int sys_ad_zero_mem(void);

/* Symbol: mt_agent_cli_set_dw */
/* Demangled: mt_agent_cli_set_dw */
int mt_agent_cli_set_dw(void);

/* Symbol: mt_agent_set_bw */
/* Demangled: mt_agent_set_bw */
int mt_agent_set_bw(void);

/* Symbol: mt_serv_set_system_bw */
/* Demangled: mt_serv_set_system_bw */
int mt_serv_set_system_bw(void);

/* Symbol: mt_serv_set_per_pkt_bw */
/* Demangled: mt_serv_set_per_pkt_bw */
int mt_serv_set_per_pkt_bw(void);

/* Symbol: mt_agent_set_ctrl_band */
/* Demangled: mt_agent_set_ctrl_band */
int mt_agent_set_ctrl_band(void);

/* Symbol: mt_agent_set_pwr */
/* Demangled: mt_agent_set_pwr */
int mt_agent_set_pwr(void);

/* Symbol: mt_serv_tx_power_operation */
/* Demangled: mt_serv_tx_power_operation */
int mt_serv_tx_power_operation(void);

/* Symbol: mt_agent_set_channel */
/* Demangled: mt_agent_set_channel */
int mt_agent_set_channel(void);

/* Symbol: mt_serv_set_channel */
/* Demangled: mt_serv_set_channel */
int mt_serv_set_channel(void);

/* Symbol: mt_agent_set_ru_cli */
/* Demangled: mt_agent_set_ru_cli */
int mt_agent_set_ru_cli(void);

/* Symbol: mt_agent_set_txant */
/* Demangled: mt_agent_set_txant */
int mt_agent_set_txant(void);

/* Symbol: mt_serv_set_tx_path */
/* Demangled: mt_serv_set_tx_path */
int mt_serv_set_tx_path(void);

/* Symbol: mt_agent_set_rxant */
/* Demangled: mt_agent_set_rxant */
int mt_agent_set_rxant(void);

/* Symbol: mt_serv_set_rx_path */
/* Demangled: mt_serv_set_rx_path */
int mt_serv_set_rx_path(void);

/* Symbol: mt_agent_cli_set_ext */
/* Demangled: mt_agent_cli_set_ext */
int mt_agent_cli_set_ext(void);

/* Symbol: mt_agent_init_service */
/* Demangled: mt_agent_init_service */
int mt_agent_init_service(void);

/* Symbol: mt_serv_init_test */
/* Demangled: mt_serv_init_test */
int mt_serv_init_test(void);

/* Symbol: mt_agent_exit_service */
/* Demangled: mt_agent_exit_service */
int mt_agent_exit_service(void);

/* Symbol: mt_serv_exit_test */
/* Demangled: mt_serv_exit_test */
int mt_serv_exit_test(void);

/* Symbol: mt_serv_start */
/* Demangled: mt_serv_start */
int mt_serv_start(void);

/* Symbol: mt_serv_stop */
/* Demangled: mt_serv_stop */
int mt_serv_stop(void);

/* Symbol: mt_serv_set_preamble */
/* Demangled: mt_serv_set_preamble */
int mt_serv_set_preamble(void);

/* Symbol: mt_serv_set_rate */
/* Demangled: mt_serv_set_rate */
int mt_serv_set_rate(void);

/* Symbol: mt_serv_set_freq_offset */
/* Demangled: mt_serv_set_freq_offset */
int mt_serv_set_freq_offset(void);

/* Symbol: mt_serv_set_low_power */
/* Demangled: mt_serv_set_low_power */
int mt_serv_set_low_power(void);

/* Symbol: mt_serv_get_antswap_capability */
/* Demangled: mt_serv_get_antswap_capability */
int mt_serv_get_antswap_capability(void);

/* Symbol: mt_serv_set_antswap */
/* Demangled: mt_serv_set_antswap */
int mt_serv_set_antswap(void);

/* Symbol: mt_serv_reset_txrx_counter */
/* Demangled: mt_serv_reset_txrx_counter */
int mt_serv_reset_txrx_counter(void);

/* Symbol: mt_serv_set_cal_bypass */
/* Demangled: mt_serv_set_cal_bypass */
int mt_serv_set_cal_bypass(void);

/* Symbol: mt_serv_set_rx_vector_idx */
/* Demangled: mt_serv_set_rx_vector_idx */
int mt_serv_set_rx_vector_idx(void);

/* Symbol: mt_serv_set_fagc_rssi_path */
/* Demangled: mt_serv_set_fagc_rssi_path */
int mt_serv_set_fagc_rssi_path(void);

/* Symbol: sys_ad_alloc_mem */
/* Demangled: sys_ad_alloc_mem */
int sys_ad_alloc_mem(void);

/* Symbol: mt_serv_reg_eprm_operation */
/* Demangled: mt_serv_reg_eprm_operation */
int mt_serv_reg_eprm_operation(void);

/* Symbol: sys_ad_free_mem */
/* Demangled: sys_ad_free_mem */
int sys_ad_free_mem(void);

/* Symbol: mt_serv_set_cfg_on_off */
/* Demangled: mt_serv_set_cfg_on_off */
int mt_serv_set_cfg_on_off(void);

/* Symbol: mt_serv_get_freq_offset */
/* Demangled: mt_serv_get_freq_offset */
int mt_serv_get_freq_offset(void);

/* Symbol: mt_serv_dbdc_tx_tone */
/* Demangled: mt_serv_dbdc_tx_tone */
int mt_serv_dbdc_tx_tone(void);

/* Symbol: mt_serv_dbdc_tx_tone_pwr */
/* Demangled: mt_serv_dbdc_tx_tone_pwr */
int mt_serv_dbdc_tx_tone_pwr(void);

/* Symbol: mt_serv_dbdc_continuous_tx */
/* Demangled: mt_serv_dbdc_continuous_tx */
int mt_serv_dbdc_continuous_tx(void);

/* Symbol: mt_serv_set_rx_filter_pkt_len */
/* Demangled: mt_serv_set_rx_filter_pkt_len */
int mt_serv_set_rx_filter_pkt_len(void);

/* Symbol: mt_serv_get_tx_info */
/* Demangled: mt_serv_get_tx_info */
int mt_serv_get_tx_info(void);

/* Symbol: mt_serv_get_cfg_on_off */
/* Demangled: mt_serv_get_cfg_on_off */
int mt_serv_get_cfg_on_off(void);

/* Symbol: mt_serv_get_tx_tone_pwr */
/* Demangled: mt_serv_get_tx_tone_pwr */
int mt_serv_get_tx_tone_pwr(void);

/* Symbol: mt_serv_get_thermal_val */
/* Demangled: mt_serv_get_thermal_val */
int mt_serv_get_thermal_val(void);

/* Symbol: sys_ad_cmp_mem */
/* Demangled: sys_ad_cmp_mem */
int sys_ad_cmp_mem(void);

/* Symbol: mt_serv_set_dpd */
/* Demangled: mt_serv_set_dpd */
int mt_serv_set_dpd(void);

/* Symbol: mt_serv_set_tssi */
/* Demangled: mt_serv_set_tssi */
int mt_serv_set_tssi(void);

/* Symbol: mt_serv_get_rx_stat_leg */
/* Demangled: mt_serv_get_rx_stat_leg */
int mt_serv_get_rx_stat_leg(void);

/* Symbol: mt_serv_calibration_test_mode */
/* Demangled: mt_serv_calibration_test_mode */
int mt_serv_calibration_test_mode(void);

/* Symbol: mt_serv_do_cal_item */
/* Demangled: mt_serv_do_cal_item */
int mt_serv_do_cal_item(void);

/* Symbol: mt_serv_set_tmr */
/* Demangled: mt_serv_set_tmr */
int mt_serv_set_tmr(void);

/* Symbol: mt_serv_get_chipid */
/* Demangled: mt_serv_get_chipid */
int mt_serv_get_chipid(void);

/* Symbol: mt_serv_mps_set_seq_data */
/* Demangled: mt_serv_mps_set_seq_data */
int mt_serv_mps_set_seq_data(void);

/* Symbol: mt_serv_mps_set_payload_length */
/* Demangled: mt_serv_mps_set_payload_length */
int mt_serv_mps_set_payload_length(void);

/* Symbol: mt_serv_mps_set_packet_count */
/* Demangled: mt_serv_mps_set_packet_count */
int mt_serv_mps_set_packet_count(void);

/* Symbol: mt_serv_mps_set_power_gain */
/* Demangled: mt_serv_mps_set_power_gain */
int mt_serv_mps_set_power_gain(void);

/* Symbol: mt_serv_mps_operation */
/* Demangled: mt_serv_mps_operation */
int mt_serv_mps_operation(void);

/* Symbol: mt_serv_get_wf_path_comb */
/* Demangled: mt_serv_get_wf_path_comb */
int mt_serv_get_wf_path_comb(void);

/* Symbol: mt_serv_get_rx_stat */
/* Demangled: mt_serv_get_rx_stat */
int mt_serv_get_rx_stat(void);

/* Symbol: mt_serv_get_capability */
/* Demangled: mt_serv_get_capability */
int mt_serv_get_capability(void);

/* Symbol: mt_serv_set_band_mode */
/* Demangled: mt_serv_set_band_mode */
int mt_serv_set_band_mode(void);

/* Symbol: mt_serv_get_band_mode */
/* Demangled: mt_serv_get_band_mode */
int mt_serv_get_band_mode(void);

/* Symbol: mt_serv_set_rdd_on_off */
/* Demangled: mt_serv_set_rdd_on_off */
int mt_serv_set_rdd_on_off(void);

/* Symbol: mt_serv_log_on_off */
/* Demangled: mt_serv_log_on_off */
int mt_serv_log_on_off(void);

/* Symbol: mt_serv_mps_set_nss */
/* Demangled: mt_serv_mps_set_nss */
int mt_serv_mps_set_nss(void);

/* Symbol: mt_serv_mps_set_per_packet_bw */
/* Demangled: mt_serv_mps_set_per_packet_bw */
int mt_serv_mps_set_per_packet_bw(void);

/* Symbol: mt_serv_get_icap_status */
/* Demangled: mt_serv_get_icap_status */
int mt_serv_get_icap_status(void);

/* Symbol: mt_serv_get_icap_max_data_len */
/* Demangled: mt_serv_get_icap_max_data_len */
int mt_serv_get_icap_max_data_len(void);

/* Symbol: mt_serv_set_icap_start */
/* Demangled: mt_serv_set_icap_start */
int mt_serv_set_icap_start(void);

/* Symbol: mt_serv_get_icap_data */
/* Demangled: mt_serv_get_icap_data */
int mt_serv_get_icap_data(void);

/* Symbol: mt_serv_get_recal_cnt */
/* Demangled: mt_serv_get_recal_cnt */
int mt_serv_get_recal_cnt(void);

/* Symbol: mt_serv_get_recal_content */
/* Demangled: mt_serv_get_recal_content */
int mt_serv_get_recal_content(void);

/* Symbol: mt_serv_get_rxv_cnt */
/* Demangled: mt_serv_get_rxv_cnt */
int mt_serv_get_rxv_cnt(void);

/* Symbol: mt_serv_get_rxv_content */
/* Demangled: mt_serv_get_rxv_content */
int mt_serv_get_rxv_content(void);

/* Symbol: mt_serv_get_rdd_cnt */
/* Demangled: mt_serv_get_rdd_cnt */
int mt_serv_get_rdd_cnt(void);

/* Symbol: mt_serv_get_rdd_content */
/* Demangled: mt_serv_get_rdd_content */
int mt_serv_get_rdd_content(void);

/* Symbol: sys_ad_set_mem */
/* Demangled: sys_ad_set_mem */
int sys_ad_set_mem(void);

/* Symbol: mt_serv_set_tx_content */
/* Demangled: mt_serv_set_tx_content */
int mt_serv_set_tx_content(void);

/* Symbol: mt_serv_submit_tx */
/* Demangled: mt_serv_submit_tx */
int mt_serv_submit_tx(void);

/* Symbol: mt_serv_start_tx */
/* Demangled: mt_serv_start_tx */
int mt_serv_start_tx(void);

/* Symbol: mt_serv_start_rx */
/* Demangled: mt_serv_start_rx */
int mt_serv_start_rx(void);

/* Symbol: mt_serv_stop_tx */
/* Demangled: mt_serv_stop_tx */
int mt_serv_stop_tx(void);

/* Symbol: mt_serv_revert_tx */
/* Demangled: mt_serv_revert_tx */
int mt_serv_revert_tx(void);

/* Symbol: mt_serv_stop_rx */
/* Demangled: mt_serv_stop_rx */
int mt_serv_stop_rx(void);

/* Symbol: mt_serv_set_off_ch_scan */
/* Demangled: mt_serv_set_off_ch_scan */
int mt_serv_set_off_ch_scan(void);

/* Symbol: mt_op_set_tr_mac */
/* Demangled: mt_op_set_tr_mac */
int mt_op_set_tr_mac(void);

/* Symbol: mt_op_set_tx_stream */
/* Demangled: mt_op_set_tx_stream */
int mt_op_set_tx_stream(void);

/* Symbol: mt_op_dbdc_tx_tone_pwr */
/* Demangled: mt_op_dbdc_tx_tone_pwr */
int mt_op_dbdc_tx_tone_pwr(void);

/* Symbol: mt_op_set_tx_path */
/* Demangled: mt_op_set_tx_path */
int mt_op_set_tx_path(void);

/* Symbol: mt_op_set_rx_path */
/* Demangled: mt_op_set_rx_path */
int mt_op_set_rx_path(void);

/* Symbol: mt_op_stop_tx */
/* Demangled: mt_op_stop_tx */
int mt_op_stop_tx(void);

/* Symbol: mt_op_start_rx */
/* Demangled: mt_op_start_rx */
int mt_op_start_rx(void);

/* Symbol: mt_op_stop_rx */
/* Demangled: mt_op_stop_rx */
int mt_op_stop_rx(void);

/* Symbol: mt_op_set_channel */
/* Demangled: mt_op_set_channel */
int mt_op_set_channel(void);

/* Symbol: mt_op_set_tx_content */
/* Demangled: mt_op_set_tx_content */
int mt_op_set_tx_content(void);

/* Symbol: mt_op_set_preamble */
/* Demangled: mt_op_set_preamble */
int mt_op_set_preamble(void);

/* Symbol: mt_op_do_cal_item */
/* Demangled: mt_op_do_cal_item */
int mt_op_do_cal_item(void);

/* Symbol: mt_op_set_band_mode */
/* Demangled: mt_op_set_band_mode */
int mt_op_set_band_mode(void);

/* Symbol: mt_op_get_chipid */
/* Demangled: mt_op_get_chipid */
int mt_op_get_chipid(void);

/* Symbol: mt_op_mps_start */
/* Demangled: mt_op_mps_start */
int mt_op_mps_start(void);

/* Symbol: mt_op_get_tx_pwr */
/* Demangled: mt_op_get_tx_pwr */
int mt_op_get_tx_pwr(void);

/* Symbol: mt_op_set_tx_pwr */
/* Demangled: mt_op_set_tx_pwr */
int mt_op_set_tx_pwr(void);

/* Symbol: mt_op_get_freq_offset */
/* Demangled: mt_op_get_freq_offset */
int mt_op_get_freq_offset(void);

/* Symbol: mt_op_get_recal_cnt */
/* Demangled: mt_op_get_recal_cnt */
int mt_op_get_recal_cnt(void);

/* Symbol: mt_op_get_recal_content */
/* Demangled: mt_op_get_recal_content */
int mt_op_get_recal_content(void);

/* Symbol: mt_op_get_rxv_cnt */
/* Demangled: mt_op_get_rxv_cnt */
int mt_op_get_rxv_cnt(void);

/* Symbol: mt_op_get_thermal_val */
/* Demangled: mt_op_get_thermal_val */
int mt_op_get_thermal_val(void);

/* Symbol: mt_op_set_cal_bypass */
/* Demangled: mt_op_set_cal_bypass */
int mt_op_set_cal_bypass(void);

/* Symbol: mt_op_set_dpd */
/* Demangled: mt_op_set_dpd */
int mt_op_set_dpd(void);

/* Symbol: mt_op_set_rdd_test */
/* Demangled: mt_op_set_rdd_test */
int mt_op_set_rdd_test(void);

/* Symbol: mt_op_get_wf_path_comb */
/* Demangled: mt_op_get_wf_path_comb */
int mt_op_get_wf_path_comb(void);

/* Symbol: mt_op_set_off_ch_scan */
/* Demangled: mt_op_set_off_ch_scan */
int mt_op_set_off_ch_scan(void);

/* Symbol: mt_op_get_rdd_content */
/* Demangled: mt_op_get_rdd_content */
int mt_op_get_rdd_content(void);

/* Symbol: mt_op_set_muru_manual */
/* Demangled: mt_op_set_muru_manual */
int mt_op_set_muru_manual(void);

/* Symbol: mt_op_set_tam_arb */
/* Demangled: mt_op_set_tam_arb */
int mt_op_set_tam_arb(void);

/* Symbol: mt_op_set_ru_aid */
/* Demangled: mt_op_set_ru_aid */
int mt_op_set_ru_aid(void);

/* Symbol: mt_op_set_mutb_spe */
/* Demangled: mt_op_set_mutb_spe */
int mt_op_set_mutb_spe(void);

/* Symbol: mt_op_get_rx_stat_band */
/* Demangled: mt_op_get_rx_stat_band */
int mt_op_get_rx_stat_band(void);

/* Symbol: mt_op_get_rx_stat_path */
/* Demangled: mt_op_get_rx_stat_path */
int mt_op_get_rx_stat_path(void);

/* Symbol: mt_op_get_rx_stat_user */
/* Demangled: mt_op_get_rx_stat_user */
int mt_op_get_rx_stat_user(void);

/* Symbol: mt_op_get_rx_stat_comm */
/* Demangled: mt_op_get_rx_stat_comm */
int mt_op_get_rx_stat_comm(void);

/* Symbol: mt_op_backup_and_set_cr */
/* Demangled: mt_op_backup_and_set_cr */
int mt_op_backup_and_set_cr(void);

/* Symbol: mt_op_get_cfg_on_off */
/* Demangled: mt_op_get_cfg_on_off */
int mt_op_get_cfg_on_off(void);

/* Symbol: mt_op_set_rx_filter */
/* Demangled: mt_op_set_rx_filter */
int mt_op_set_rx_filter(void);

/* Symbol: mt_op_set_clean_persta_txq */
/* Demangled: mt_op_set_clean_persta_txq */
int mt_op_set_clean_persta_txq(void);

/* Symbol: mt_op_set_cfg_on_off */
/* Demangled: mt_op_set_cfg_on_off */
int mt_op_set_cfg_on_off(void);

/* Symbol: mt_op_log_on_off */
/* Demangled: mt_op_log_on_off */
int mt_op_log_on_off(void);

/* Symbol: mt_op_dbdc_tx_tone */
/* Demangled: mt_op_dbdc_tx_tone */
int mt_op_dbdc_tx_tone(void);

/* Symbol: mt_op_get_tx_info */
/* Demangled: mt_op_get_tx_info */
int mt_op_get_tx_info(void);

/* Symbol: mt_op_set_antenna_port */
/* Demangled: mt_op_set_antenna_port */
int mt_op_set_antenna_port(void);

/* Symbol: mt_op_restore_cr */
/* Demangled: mt_op_restore_cr */
int mt_op_restore_cr(void);

/* Symbol: mt_op_set_ampdu_ba_limit */
/* Demangled: mt_op_set_ampdu_ba_limit */
int mt_op_set_ampdu_ba_limit(void);

/* Symbol: mt_op_set_sta_pause_cr */
/* Demangled: mt_op_set_sta_pause_cr */
int mt_op_set_sta_pause_cr(void);

/* Symbol: mt_op_get_rxv_content */
/* Demangled: mt_op_get_rxv_content */
int mt_op_get_rxv_content(void);

/* Symbol: mt_op_dbdc_continuous_tx */
/* Demangled: mt_op_dbdc_continuous_tx */
int mt_op_dbdc_continuous_tx(void);

/* Symbol: mt_op_set_slot_time */
/* Demangled: mt_op_set_slot_time */
int mt_op_set_slot_time(void);

/* Symbol: mt_op_set_power_drop_level */
/* Demangled: mt_op_set_power_drop_level */
int mt_op_set_power_drop_level(void);

/* Symbol: mt_op_get_antswap_capability */
/* Demangled: mt_op_get_antswap_capability */
int mt_op_get_antswap_capability(void);

/* Symbol: mt_op_set_antswap */
/* Demangled: mt_op_set_antswap */
int mt_op_set_antswap(void);

/* Symbol: mt_op_set_rx_filter_pkt_len */
/* Demangled: mt_op_set_rx_filter_pkt_len */
int mt_op_set_rx_filter_pkt_len(void);

/* Symbol: mt_op_set_freq_offset */
/* Demangled: mt_op_set_freq_offset */
int mt_op_set_freq_offset(void);

/* Symbol: mt_op_set_rate */
/* Demangled: mt_op_set_rate */
int mt_op_set_rate(void);

/* Symbol: mt_op_set_system_bw */
/* Demangled: mt_op_set_system_bw */
int mt_op_set_system_bw(void);

/* Symbol: mt_op_set_per_pkt_bw */
/* Demangled: mt_op_set_per_pkt_bw */
int mt_op_set_per_pkt_bw(void);

/* Symbol: mt_op_reset_txrx_counter */
/* Demangled: mt_op_reset_txrx_counter */
int mt_op_reset_txrx_counter(void);

/* Symbol: mt_op_set_rx_vector_idx */
/* Demangled: mt_op_set_rx_vector_idx */
int mt_op_set_rx_vector_idx(void);

/* Symbol: mt_op_get_rx_stat_leg */
/* Demangled: mt_op_get_rx_stat_leg */
int mt_op_get_rx_stat_leg(void);

/* Symbol: mt_op_set_ifs_cr */
/* Demangled: mt_op_set_ifs_cr */
int mt_op_set_ifs_cr(void);

/* Symbol: mt_op_write_mac_bbp_reg */
/* Demangled: mt_op_write_mac_bbp_reg */
int mt_op_write_mac_bbp_reg(void);

/* Symbol: mt_op_read_bulk_mac_bbp_reg */
/* Demangled: mt_op_read_bulk_mac_bbp_reg */
int mt_op_read_bulk_mac_bbp_reg(void);

/* Symbol: mt_op_set_tssi */
/* Demangled: mt_op_set_tssi */
int mt_op_set_tssi(void);

/* Symbol: mt_op_set_phy_counter */
/* Demangled: mt_op_set_phy_counter */
int mt_op_set_phy_counter(void);

/* Symbol: mt_op_set_rxv_index */
/* Demangled: mt_op_set_rxv_index */
int mt_op_set_rxv_index(void);

/* Symbol: mt_op_set_fagc_path */
/* Demangled: mt_op_set_fagc_path */
int mt_op_set_fagc_path(void);

/* Symbol: mt_op_set_fw_mode */
/* Demangled: mt_op_set_fw_mode */
int mt_op_set_fw_mode(void);

/* Symbol: mt_op_set_rf_test_mode */
/* Demangled: mt_op_set_rf_test_mode */
int mt_op_set_rf_test_mode(void);

/* Symbol: mt_op_set_test_mode_start */
/* Demangled: mt_op_set_test_mode_start */
int mt_op_set_test_mode_start(void);

/* Symbol: mt_op_set_test_mode_abort */
/* Demangled: mt_op_set_test_mode_abort */
int mt_op_set_test_mode_abort(void);

/* Symbol: mt_op_start_tx */
/* Demangled: mt_op_start_tx */
int mt_op_start_tx(void);

/* Symbol: mt_op_set_fagc_rssi_path */
/* Demangled: mt_op_set_fagc_rssi_path */
int mt_op_set_fagc_rssi_path(void);

/* Symbol: mt_op_get_rx_statistics_all */
/* Demangled: mt_op_get_rx_statistics_all */
int mt_op_get_rx_statistics_all(void);

/* Symbol: mt_op_get_capability */
/* Demangled: mt_op_get_capability */
int mt_op_get_capability(void);

/* Symbol: mt_op_calibration_test_mode */
/* Demangled: mt_op_calibration_test_mode */
int mt_op_calibration_test_mode(void);

/* Symbol: mt_op_set_icap_start */
/* Demangled: mt_op_set_icap_start */
int mt_op_set_icap_start(void);

/* Symbol: mt_op_get_icap_status */
/* Demangled: mt_op_get_icap_status */
int mt_op_get_icap_status(void);

/* Symbol: mt_op_get_icap_max_data_len */
/* Demangled: mt_op_get_icap_max_data_len */
int mt_op_get_icap_max_data_len(void);

/* Symbol: mt_op_get_icap_data */
/* Demangled: mt_op_get_icap_data */
int mt_op_get_icap_data(void);

/* Symbol: mt_op_mps_set_nss */
/* Demangled: mt_op_mps_set_nss */
int mt_op_mps_set_nss(void);

/* Symbol: mt_op_mps_set_per_packet_bw */
/* Demangled: mt_op_mps_set_per_packet_bw */
int mt_op_mps_set_per_packet_bw(void);

/* Symbol: mt_op_mps_set_packet_count */
/* Demangled: mt_op_mps_set_packet_count */
int mt_op_mps_set_packet_count(void);

/* Symbol: mt_op_mps_set_payload_length */
/* Demangled: mt_op_mps_set_payload_length */
int mt_op_mps_set_payload_length(void);

/* Symbol: mt_op_mps_set_power_gain */
/* Demangled: mt_op_mps_set_power_gain */
int mt_op_mps_set_power_gain(void);

/* Symbol: mt_op_mps_set_seq_data */
/* Demangled: mt_op_mps_set_seq_data */
int mt_op_mps_set_seq_data(void);

/* Symbol: mt_op_read_bulk_rf_reg */
/* Demangled: mt_op_read_bulk_rf_reg */
int mt_op_read_bulk_rf_reg(void);

/* Symbol: mt_op_write_bulk_rf_reg */
/* Demangled: mt_op_write_bulk_rf_reg */
int mt_op_write_bulk_rf_reg(void);

/* Symbol: mt_op_get_rdd_cnt */
/* Demangled: mt_op_get_rdd_cnt */
int mt_op_get_rdd_cnt(void);

/* Symbol: mt_op_get_tx_tone_pwr */
/* Demangled: mt_op_get_tx_tone_pwr */
int mt_op_get_tx_tone_pwr(void);

/* Symbol: mt_op_hetb_ctrl */
/* Demangled: mt_op_hetb_ctrl */
int mt_op_hetb_ctrl(void);

/* Symbol: mt_op_read_bulk_eeprom */
/* Demangled: mt_op_read_bulk_eeprom */
int mt_op_read_bulk_eeprom(void);

/* Symbol: template_frame */
/* Demangled: template_frame */
extern void* template_frame;

/* Symbol: mt_engine_start */
/* Demangled: mt_engine_start */
int mt_engine_start(void);

/* Symbol: mt_engine_stop */
/* Demangled: mt_engine_stop */
int mt_engine_stop(void);

/* Symbol: mt_engine_subscribe_tx */
/* Demangled: mt_engine_subscribe_tx */
int mt_engine_subscribe_tx(void);

/* Symbol: mt_engine_unsubscribe_tx */
/* Demangled: mt_engine_unsubscribe_tx */
int mt_engine_unsubscribe_tx(void);

/* Symbol: mt_engine_calc_ipg_param_by_ipg */
/* Demangled: mt_engine_calc_ipg_param_by_ipg */
int mt_engine_calc_ipg_param_by_ipg(void);

/* Symbol: mt_engine_start_tx */
/* Demangled: mt_engine_start_tx */
int mt_engine_start_tx(void);

/* Symbol: mt_engine_stop_tx */
/* Demangled: mt_engine_stop_tx */
int mt_engine_stop_tx(void);

/* Symbol: mt_engine_set_auto_resp */
/* Demangled: mt_engine_set_auto_resp */
int mt_engine_set_auto_resp(void);

/* Symbol: mt_engine_start_rx */
/* Demangled: mt_engine_start_rx */
int mt_engine_start_rx(void);

/* Symbol: mt_engine_stop_rx */
/* Demangled: mt_engine_stop_rx */
int mt_engine_stop_rx(void);

/* Symbol: net_ad_get_rxv_cnt */
/* Demangled: net_ad_get_rxv_cnt */
int net_ad_get_rxv_cnt(void);

/* Symbol: net_ad_get_rxv_content */
/* Demangled: net_ad_get_rxv_content */
int net_ad_get_rxv_content(void);

/* Symbol: net_ad_set_band_mode */
/* Demangled: net_ad_set_band_mode */
int net_ad_set_band_mode(void);

/* Symbol: net_ad_set_low_power */
/* Demangled: net_ad_set_low_power */
int net_ad_set_low_power(void);

/* Symbol: net_ad_read_mac_bbp_reg */
/* Demangled: net_ad_read_mac_bbp_reg */
int net_ad_read_mac_bbp_reg(void);

/* Symbol: net_ad_read_ca53_reg */
/* Demangled: net_ad_read_ca53_reg */
int net_ad_read_ca53_reg(void);

/* Symbol: net_ad_write_ca53_reg */
/* Demangled: net_ad_write_ca53_reg */
int net_ad_write_ca53_reg(void);

/* Symbol: net_ad_read_write_eeprom */
/* Demangled: net_ad_read_write_eeprom */
int net_ad_read_write_eeprom(void);

/* Symbol: net_ad_get_free_efuse_block */
/* Demangled: net_ad_get_free_efuse_block */
int net_ad_get_free_efuse_block(void);

/* Symbol: net_ad_write_mac_bbp_reg */
/* Demangled: net_ad_write_mac_bbp_reg */
int net_ad_write_mac_bbp_reg(void);

/* Symbol: net_ad_read_bulk_mac_bbp_reg */
/* Demangled: net_ad_read_bulk_mac_bbp_reg */
int net_ad_read_bulk_mac_bbp_reg(void);

/* Symbol: net_ad_read_bulk_rf_reg */
/* Demangled: net_ad_read_bulk_rf_reg */
int net_ad_read_bulk_rf_reg(void);

/* Symbol: net_ad_write_bulk_rf_reg */
/* Demangled: net_ad_write_bulk_rf_reg */
int net_ad_write_bulk_rf_reg(void);

/* Symbol: net_ad_read_write_bulk_eeprom */
/* Demangled: net_ad_read_write_bulk_eeprom */
int net_ad_read_write_bulk_eeprom(void);

/* Symbol: net_ad_mps_tx_operation */
/* Demangled: net_ad_mps_tx_operation */
int net_ad_mps_tx_operation(void);

/* Symbol: net_ad_set_tmr */
/* Demangled: net_ad_set_tmr */
int net_ad_set_tmr(void);

/* Symbol: mt_serv_main */
/* Demangled: mt_serv_main */
int mt_serv_main(void);

/* Symbol: mt_engine_calc_phy */
/* Demangled: mt_engine_calc_phy */
int mt_engine_calc_phy(void);

/* Symbol: mt_engine_search_stack */
/* Demangled: mt_engine_search_stack */
int mt_engine_search_stack(void);

/* Symbol: net_ad_match_wtbl */
/* Demangled: net_ad_match_wtbl */
int net_ad_match_wtbl(void);

/* Symbol: net_ad_free_wtbl */
/* Demangled: net_ad_free_wtbl */
int net_ad_free_wtbl(void);

/* Symbol: net_ad_alloc_wtbl */
/* Demangled: net_ad_alloc_wtbl */
int net_ad_alloc_wtbl(void);

/* Symbol: net_ad_set_aid */
/* Demangled: net_ad_set_aid */
int net_ad_set_aid(void);

/* Symbol: net_ad_get_band_idx */
/* Demangled: net_ad_get_band_idx */
int net_ad_get_band_idx(void);

/* Symbol: net_ad_get_speidx */
/* Demangled: net_ad_get_speidx */
int net_ad_get_speidx(void);

/* Symbol: net_ad_fill_spe_antid */
/* Demangled: net_ad_fill_spe_antid */
int net_ad_fill_spe_antid(void);

/* Symbol: net_ad_fill_phy_info */
/* Demangled: net_ad_fill_phy_info */
int net_ad_fill_phy_info(void);

/* Symbol: net_ad_handle_mcs32 */
/* Demangled: net_ad_handle_mcs32 */
int net_ad_handle_mcs32(void);

/* Symbol: net_ad_apply_wtbl */
/* Demangled: net_ad_apply_wtbl */
int net_ad_apply_wtbl(void);

/* Symbol: cck_mode_map */
/* Demangled: cck_mode_map */
extern void* cck_mode_map;

/* Symbol: ofdm_mode_map */
/* Demangled: ofdm_mode_map */
extern void* ofdm_mode_map;

/* Symbol: n_mode_map */
/* Demangled: n_mode_map */
extern void* n_mode_map;

/* Symbol: ac_mode_map_bw20 */
/* Demangled: ac_mode_map_bw20 */
extern void* ac_mode_map_bw20;

/* Symbol: net_ad_cfg_wtbl */
/* Demangled: net_ad_cfg_wtbl */
int net_ad_cfg_wtbl(void);

/* Symbol: net_ad_fill_pkt */
/* Demangled: net_ad_fill_pkt */
int net_ad_fill_pkt(void);

/* Symbol: net_ad_free_pkt */
/* Demangled: net_ad_free_pkt */
int net_ad_free_pkt(void);

/* Symbol: net_ad_alloc_pkt */
/* Demangled: net_ad_alloc_pkt */
int net_ad_alloc_pkt(void);

/* Symbol: net_ad_init_thread */
/* Demangled: net_ad_init_thread */
int net_ad_init_thread(void);

/* Symbol: net_ad_exit_normal */
/* Demangled: net_ad_exit_normal */
int net_ad_exit_normal(void);

/* Symbol: net_ad_init_wdev */
/* Demangled: net_ad_init_wdev */
int net_ad_init_wdev(void);

/* Symbol: net_ad_init_txpwr */
/* Demangled: net_ad_init_txpwr */
int net_ad_init_txpwr(void);

/* Symbol: sys_ad_free_pkt */
/* Demangled: sys_ad_free_pkt */
int sys_ad_free_pkt(void);

/* Symbol: net_ad_release_wdev */
/* Demangled: net_ad_release_wdev */
int net_ad_release_wdev(void);

/* Symbol: net_ad_enter_normal */
/* Demangled: net_ad_enter_normal */
int net_ad_enter_normal(void);

/* Symbol: net_ad_release_thread */
/* Demangled: net_ad_release_thread */
int net_ad_release_thread(void);

/* Symbol: net_ad_set_auto_resp */
/* Demangled: net_ad_set_auto_resp */
int net_ad_set_auto_resp(void);

/* Symbol: net_ad_cfg_queue */
/* Demangled: net_ad_cfg_queue */
int net_ad_cfg_queue(void);

/* Symbol: net_ad_get_wmm_idx */
/* Demangled: net_ad_get_wmm_idx */
int net_ad_get_wmm_idx(void);

/* Symbol: net_ad_set_wmm_param_by_qid */
/* Demangled: net_ad_set_wmm_param_by_qid */
int net_ad_set_wmm_param_by_qid(void);

/* Symbol: net_ad_enq_pkt */
/* Demangled: net_ad_enq_pkt */
int net_ad_enq_pkt(void);

/* Symbol: net_ad_trigger_tx */
/* Demangled: net_ad_trigger_tx */
int net_ad_trigger_tx(void);

/* Symbol: net_ad_clean_sta_q */
/* Demangled: net_ad_clean_sta_q */
int net_ad_clean_sta_q(void);

/* Symbol: net_ad_get_omac_idx */
/* Demangled: net_ad_get_omac_idx */
int net_ad_get_omac_idx(void);

/* Symbol: ac_mode_map_bw40 */
/* Demangled: ac_mode_map_bw40 */
extern void* ac_mode_map_bw40;

/* Symbol: ac_mode_map_bw80 */
/* Demangled: ac_mode_map_bw80 */
extern void* ac_mode_map_bw80;

/* Symbol: ac_mode_map_bw160 */
/* Demangled: ac_mode_map_bw160 */
extern void* ac_mode_map_bw160;

/* Symbol: sys_ad_kill_os_task */
/* Demangled: sys_ad_kill_os_task */
int sys_ad_kill_os_task(void);

/* Symbol: sys_ad_attach_os_task */
/* Demangled: sys_ad_attach_os_task */
int sys_ad_attach_os_task(void);

/* Symbol: sys_ad_init_os_task */
/* Demangled: sys_ad_init_os_task */
int sys_ad_init_os_task(void);

/* Symbol: sys_ad_wait_os_task */
/* Demangled: sys_ad_wait_os_task */
int sys_ad_wait_os_task(void);

/* Symbol: sys_ad_wakeup_os_task */
/* Demangled: sys_ad_wakeup_os_task */
int sys_ad_wakeup_os_task(void);

/* Symbol: sys_ad_mem_dump32 */
/* Demangled: sys_ad_mem_dump32 */
int sys_ad_mem_dump32(void);

/* Symbol: dumpMemory32 */
/* Demangled: dumpMemory32 */
int dumpMemory32(void);

/* Symbol: net_ad_wrap_service */
/* Demangled: net_ad_wrap_service */
int net_ad_wrap_service(void);

/* Symbol: net_ad_thread_proceed_tx */
/* Demangled: net_ad_thread_proceed_tx */
int net_ad_thread_proceed_tx(void);

/* Symbol: net_ad_thread_stop_tx */
/* Demangled: net_ad_thread_stop_tx */
int net_ad_thread_stop_tx(void);

/* Symbol: net_ad_backup_cr */
/* Demangled: net_ad_backup_cr */
int net_ad_backup_cr(void);

/* Symbol: net_ad_restore_cr */
/* Demangled: net_ad_restore_cr */
int net_ad_restore_cr(void);

/* Symbol: net_ad_update_wdev */
/* Demangled: net_ad_update_wdev */
int net_ad_update_wdev(void);

/* Symbol: net_ad_rx_done_handle */
/* Demangled: net_ad_rx_done_handle */
int net_ad_rx_done_handle(void);

/* Symbol: net_ad_set_txpwr_power_drop */
/* Demangled: net_ad_set_txpwr_power_drop */
int net_ad_set_txpwr_power_drop(void);

/* Symbol: net_ad_set_txpwr_percentage */
/* Demangled: net_ad_set_txpwr_percentage */
int net_ad_set_txpwr_percentage(void);

/* Symbol: net_ad_set_txpwr_backoff */
/* Demangled: net_ad_set_txpwr_backoff */
int net_ad_set_txpwr_backoff(void);

/* Symbol: net_ad_get_rxv_stat */
/* Demangled: net_ad_get_rxv_stat */
int net_ad_get_rxv_stat(void);

/* Symbol: mt_op_reset_recal_cnt */
/* Demangled: mt_op_reset_recal_cnt */
int mt_op_reset_recal_cnt(void);

/* Symbol: dumpMemory8 */
/* Demangled: dumpMemory8 */
int dumpMemory8(void);

/* Symbol: wlanIsHandlerNeedHwAccess */
/* Demangled: wlanIsHandlerNeedHwAccess */
int wlanIsHandlerNeedHwAccess(void);

/* Symbol: apfnOidSetHandlerWOHwAccess */
/* Demangled: apfnOidSetHandlerWOHwAccess */
extern void* apfnOidSetHandlerWOHwAccess;

/* Symbol: apfnOidQueryHandlerWOHwAccess */
/* Demangled: apfnOidQueryHandlerWOHwAccess */
extern void* apfnOidQueryHandlerWOHwAccess;

/* Symbol: wlanCardEjected */
/* Demangled: wlanCardEjected */
int wlanCardEjected(void);

/* Symbol: nicTxRelease */
/* Demangled: nicTxRelease */
int nicTxRelease(void);

/* Symbol: wlanIsDriverReady */
/* Demangled: wlanIsDriverReady */
int wlanIsDriverReady(void);

/* Symbol: kalIsResetting */
/* Demangled: kalIsResetting */
int kalIsResetting(void);

/* Symbol: wlanAdapterCreate */
/* Demangled: wlanAdapterCreate */
int wlanAdapterCreate(void);

/* Symbol: wlanAdapterDestroy */
/* Demangled: wlanAdapterDestroy */
int wlanAdapterDestroy(void);

/* Symbol: scanLogCacheFlushAll */
/* Demangled: scanLogCacheFlushAll */
int scanLogCacheFlushAll(void);

/* Symbol: wlanOnPreAllocAdapterMem */
/* Demangled: wlanOnPreAllocAdapterMem */
int wlanOnPreAllocAdapterMem(void);

/* Symbol: fgIsBusAccessFailed */
/* Demangled: fgIsBusAccessFailed */
extern void* fgIsBusAccessFailed;

/* Symbol: wlanOnPostNicInitAdapter */
/* Demangled: wlanOnPostNicInitAdapter */
int wlanOnPostNicInitAdapter(void);

/* Symbol: nicInitSystemService */
/* Demangled: nicInitSystemService */
int nicInitSystemService(void);

/* Symbol: wlanInitFeatureOption */
/* Demangled: wlanInitFeatureOption */
int wlanInitFeatureOption(void);

/* Symbol: wlanCfgSetDebugLevel */
/* Demangled: wlanCfgSetDebugLevel */
int wlanCfgSetDebugLevel(void);

/* Symbol: nicTxInitialize */
/* Demangled: nicTxInitialize */
int nicTxInitialize(void);

/* Symbol: nicRxInitialize */
/* Demangled: nicRxInitialize */
int nicRxInitialize(void);

/* Symbol: wlanCfgGetUint32 */
/* Demangled: wlanCfgGetUint32 */
int wlanCfgGetUint32(void);

/* Symbol: wlanCfgGetInt32 */
/* Demangled: wlanCfgGetInt32 */
int wlanCfgGetInt32(void);

/* Symbol: nicTxGetMaxPageCntPerFrame */
/* Demangled: nicTxGetMaxPageCntPerFrame */
int nicTxGetMaxPageCntPerFrame(void);

/* Symbol: _kalSprintf */
/* Demangled: _kalSprintf */
int _kalSprintf(void);

/* Symbol: wlanSetDriverDbgLevel */
/* Demangled: wlanSetDriverDbgLevel */
int wlanSetDriverDbgLevel(void);

/* Symbol: wlanDebugInit */
/* Demangled: wlanDebugInit */
int wlanDebugInit(void);

/* Symbol: wlanOnPostFirmwareReady */
/* Demangled: wlanOnPostFirmwareReady */
int wlanOnPostFirmwareReady(void);

/* Symbol: wlanReleasePendingOid */
/* Demangled: wlanReleasePendingOid */
int wlanReleasePendingOid(void);

/* Symbol: cnmTimerInitTimerOption */
/* Demangled: cnmTimerInitTimerOption */
int cnmTimerInitTimerOption(void);

/* Symbol: wlanReturnPacketDelaySetupTimeout */
/* Demangled: wlanReturnPacketDelaySetupTimeout */
int wlanReturnPacketDelaySetupTimeout(void);

/* Symbol: nicInitMGMT */
/* Demangled: nicInitMGMT */
int nicInitMGMT(void);

/* Symbol: nicSetAvailablePhyTypeSet */
/* Demangled: nicSetAvailablePhyTypeSet */
int nicSetAvailablePhyTypeSet(void);

/* Symbol: txPwrCtrlInit */
/* Demangled: txPwrCtrlInit */
int txPwrCtrlInit(void);

/* Symbol: kalIsConfigurationExist */
/* Demangled: kalIsConfigurationExist */
int kalIsConfigurationExist(void);

/* Symbol: wlanLoadManufactureData */
/* Demangled: wlanLoadManufactureData */
int wlanLoadManufactureData(void);

/* Symbol: txPwrCtrlLoadConfig */
/* Demangled: txPwrCtrlLoadConfig */
int txPwrCtrlLoadConfig(void);

/* Symbol: kalSetHifDbgEvent */
/* Demangled: kalSetHifDbgEvent */
int kalSetHifDbgEvent(void);

/* Symbol: kalAcquireMutex */
/* Demangled: kalAcquireMutex */
int kalAcquireMutex(void);

/* Symbol: kalOidCmdClearance */
/* Demangled: kalOidCmdClearance */
int kalOidCmdClearance(void);

/* Symbol: wlanClearTxOidCommand */
/* Demangled: wlanClearTxOidCommand */
int wlanClearTxOidCommand(void);

/* Symbol: kalAcquireSpinLock */
/* Demangled: kalAcquireSpinLock */
int kalAcquireSpinLock(void);

/* Symbol: kalOidComplete */
/* Demangled: kalOidComplete */
int kalOidComplete(void);

/* Symbol: kalReleaseSpinLock */
/* Demangled: kalReleaseSpinLock */
int kalReleaseSpinLock(void);

/* Symbol: nicTxCancelSendingCmd */
/* Demangled: nicTxCancelSendingCmd */
int nicTxCancelSendingCmd(void);

/* Symbol: cmdBufFreeCmdInfo */
/* Demangled: cmdBufFreeCmdInfo */
int cmdBufFreeCmdInfo(void);

/* Symbol: kalOidClearance */
/* Demangled: kalOidClearance */
int kalOidClearance(void);

/* Symbol: kalReleaseMutex */
/* Demangled: kalReleaseMutex */
int kalReleaseMutex(void);

/* Symbol: nicRxSetupRFB */
/* Demangled: nicRxSetupRFB */
int nicRxSetupRFB(void);

/* Symbol: nicRxReturnRFB */
/* Demangled: nicRxReturnRFB */
int nicRxReturnRFB(void);

/* Symbol: cnmTimerStartTimer */
/* Demangled: cnmTimerStartTimer */
int cnmTimerStartTimer(void);

/* Symbol: rlmDomainSendCmd */
/* Demangled: rlmDomainSendCmd */
int rlmDomainSendCmd(void);

/* Symbol: wlanUpdateChannelTable */
/* Demangled: wlanUpdateChannelTable */
int wlanUpdateChannelTable(void);

/* Symbol: wlanSendSetQueryCmd */
/* Demangled: wlanSendSetQueryCmd */
int wlanSendSetQueryCmd(void);

/* Symbol: wlanNvramSetState */
/* Demangled: wlanNvramSetState */
int wlanNvramSetState(void);

/* Symbol: wlanAdapterStartForLowLatency */
/* Demangled: wlanAdapterStartForLowLatency */
int wlanAdapterStartForLowLatency(void);

/* Symbol: wlanAdapterStart */
/* Demangled: wlanAdapterStart */
int wlanAdapterStart(void);

/* Symbol: nicpmSetDriverOwn */
/* Demangled: nicpmSetDriverOwn */
int nicpmSetDriverOwn(void);

/* Symbol: halHifSwInfoInit */
/* Demangled: halHifSwInfoInit */
int halHifSwInfoInit(void);

/* Symbol: halEnableFWDownload */
/* Demangled: halEnableFWDownload */
int halEnableFWDownload(void);

/* Symbol: wlanSetChipEcoInfo */
/* Demangled: wlanSetChipEcoInfo */
int wlanSetChipEcoInfo(void);

/* Symbol: nicAllocateAdapterMemory */
/* Demangled: nicAllocateAdapterMemory */
int nicAllocateAdapterMemory(void);

/* Symbol: nicInitializeAdapter */
/* Demangled: nicInitializeAdapter */
int nicInitializeAdapter(void);

/* Symbol: nicDisableInterrupt */
/* Demangled: nicDisableInterrupt */
int nicDisableInterrupt(void);

/* Symbol: nicTxInitResetResource */
/* Demangled: nicTxInitResetResource */
int nicTxInitResetResource(void);

/* Symbol: wlanDownloadFW */
/* Demangled: wlanDownloadFW */
int wlanDownloadFW(void);

/* Symbol: wlanCheckWifiFunc */
/* Demangled: wlanCheckWifiFunc */
int wlanCheckWifiFunc(void);

/* Symbol: nicpmSetFWOwn */
/* Demangled: nicpmSetFWOwn */
int nicpmSetFWOwn(void);

/* Symbol: halPrintHifDbgInfo */
/* Demangled: halPrintHifDbgInfo */
int halPrintHifDbgInfo(void);

/* Symbol: nicRxUninitialize */
/* Demangled: nicRxUninitialize */
int nicRxUninitialize(void);

/* Symbol: nicUninitSystemService */
/* Demangled: nicUninitSystemService */
int nicUninitSystemService(void);

/* Symbol: nicReleaseAdapterMemory */
/* Demangled: nicReleaseAdapterMemory */
int nicReleaseAdapterMemory(void);

/* Symbol: nicTxResetResource */
/* Demangled: nicTxResetResource */
int nicTxResetResource(void);

/* Symbol: wlanUpdateBasicConfig */
/* Demangled: wlanUpdateBasicConfig */
int wlanUpdateBasicConfig(void);

/* Symbol: wlanSendDummyCmd */
/* Demangled: wlanSendDummyCmd */
int wlanSendDummyCmd(void);

/* Symbol: wlanQueryNicCapability */
/* Demangled: wlanQueryNicCapability */
int wlanQueryNicCapability(void);

/* Symbol: wlanQueryNicCapabilityV2 */
/* Demangled: wlanQueryNicCapabilityV2 */
int wlanQueryNicCapabilityV2(void);

/* Symbol: wlanSetNicResourceParameters */
/* Demangled: wlanSetNicResourceParameters */
int wlanSetNicResourceParameters(void);

/* Symbol: halTxResourceResetHwTQCounter */
/* Demangled: halTxResourceResetHwTQCounter */
int halTxResourceResetHwTQCounter(void);

/* Symbol: fwDlGetFwdlInfo */
/* Demangled: fwDlGetFwdlInfo */
int fwDlGetFwdlInfo(void);

/* Symbol: wlanUpdateNetworkAddress */
/* Demangled: wlanUpdateNetworkAddress */
int wlanUpdateNetworkAddress(void);

/* Symbol: nicApplyNetworkAddress */
/* Demangled: nicApplyNetworkAddress */
int nicApplyNetworkAddress(void);

/* Symbol: kalIndicateStatusAndComplete */
/* Demangled: kalIndicateStatusAndComplete */
int kalIndicateStatusAndComplete(void);

/* Symbol: nicEnableInterrupt */
/* Demangled: nicEnableInterrupt */
int nicEnableInterrupt(void);

/* Symbol: nicSerInit */
/* Demangled: nicSerInit */
int nicSerInit(void);

/* Symbol: wlanAccessRegister */
/* Demangled: wlanAccessRegister */
int wlanAccessRegister(void);

/* Symbol: nicSetChipHwVer */
/* Demangled: nicSetChipHwVer */
int nicSetChipHwVer(void);

/* Symbol: nicSetChipFactoryVer */
/* Demangled: nicSetChipFactoryVer */
int nicSetChipFactoryVer(void);

/* Symbol: nicSetChipSwVer */
/* Demangled: nicSetChipSwVer */
int nicSetChipSwVer(void);

/* Symbol: nicGetChipEcoVer */
/* Demangled: nicGetChipEcoVer */
int nicGetChipEcoVer(void);

/* Symbol: wlanCheckAsicCap */
/* Demangled: wlanCheckAsicCap */
int wlanCheckAsicCap(void);

/* Symbol: kalDevRegRead */
/* Demangled: kalDevRegRead */
int kalDevRegRead(void);

/* Symbol: kalIsCardRemoved */
/* Demangled: kalIsCardRemoved */
int kalIsCardRemoved(void);

/* Symbol: glResetTrigger */
/* Demangled: glResetTrigger */
int glResetTrigger(void);

/* Symbol: wlanQueryNicResourceInformation */
/* Demangled: wlanQueryNicResourceInformation */
int wlanQueryNicResourceInformation(void);

/* Symbol: cmdBufAllocateCmdInfoX */
/* Demangled: cmdBufAllocateCmdInfoX */
int cmdBufAllocateCmdInfoX(void);

/* Symbol: wlanSendCommand */
/* Demangled: wlanSendCommand */
int wlanSendCommand(void);

/* Symbol: nicTxCmd */
/* Demangled: nicTxCmd */
int nicTxCmd(void);

/* Symbol: nicRxWaitResponse */
/* Demangled: nicRxWaitResponse */
int nicRxWaitResponse(void);

/* Symbol: cnmMemAllocX */
/* Demangled: cnmMemAllocX */
int cnmMemAllocX(void);

/* Symbol: cnmMemFree */
/* Demangled: cnmMemFree */
int cnmMemFree(void);

/* Symbol: nicCmdEventQueryNicCapabilityV2 */
/* Demangled: nicCmdEventQueryNicCapabilityV2 */
int nicCmdEventQueryNicCapabilityV2(void);

/* Symbol: wlanUpdateNicResourceInformation */
/* Demangled: wlanUpdateNicResourceInformation */
int wlanUpdateNicResourceInformation(void);

/* Symbol: wlanPrintVersion */
/* Demangled: wlanPrintVersion */
int wlanPrintVersion(void);

/* Symbol: kalEnqueueCommand */
/* Demangled: kalEnqueueCommand */
int kalEnqueueCommand(void);

/* Symbol: kalRetrieveNetworkAddress */
/* Demangled: kalRetrieveNetworkAddress */
int kalRetrieveNetworkAddress(void);

/* Symbol: wlanOffClearAllQueues */
/* Demangled: wlanOffClearAllQueues */
int wlanOffClearAllQueues(void);

/* Symbol: kalClearCommandQueue */
/* Demangled: kalClearCommandQueue */
int kalClearCommandQueue(void);

/* Symbol: wlanClearPendingCommandQueue */
/* Demangled: wlanClearPendingCommandQueue */
int wlanClearPendingCommandQueue(void);

/* Symbol: wlanClearTxCommandQueue */
/* Demangled: wlanClearTxCommandQueue */
int wlanClearTxCommandQueue(void);

/* Symbol: wlanClearDataQueue */
/* Demangled: wlanClearDataQueue */
int wlanClearDataQueue(void);

/* Symbol: kalRxIndicateOnePkt */
/* Demangled: kalRxIndicateOnePkt */
int kalRxIndicateOnePkt(void);

/* Symbol: wlanReleaseCommand */
/* Demangled: wlanReleaseCommand */
int wlanReleaseCommand(void);

/* Symbol: nicTxGetCmdResourceType */
/* Demangled: nicTxGetCmdResourceType */
int nicTxGetCmdResourceType(void);

/* Symbol: nicTxGetCmdPageCount */
/* Demangled: nicTxGetCmdPageCount */
int nicTxGetCmdPageCount(void);

/* Symbol: nicTxReleaseResource */
/* Demangled: nicTxReleaseResource */
int nicTxReleaseResource(void);

/* Symbol: wlanClearTxCommandDoneQueue */
/* Demangled: wlanClearTxCommandDoneQueue */
int wlanClearTxCommandDoneQueue(void);

/* Symbol: tracing_mark_write */
/* Demangled: tracing_mark_write */
int tracing_mark_write(void);

/* Symbol: nicTxReleaseMsduResource */
/* Demangled: nicTxReleaseMsduResource */
int nicTxReleaseMsduResource(void);

/* Symbol: nicTxReturnMsduInfo */
/* Demangled: nicTxReturnMsduInfo */
int nicTxReturnMsduInfo(void);

/* Symbol: nicTxFreePacket */
/* Demangled: nicTxFreePacket */
int nicTxFreePacket(void);

/* Symbol: wlanClearRxToOsQueue */
/* Demangled: wlanClearRxToOsQueue */
int wlanClearRxToOsQueue(void);

/* Symbol: wlanOffUninitNicModule */
/* Demangled: wlanOffUninitNicModule */
int wlanOffUninitNicModule(void);

/* Symbol: nicUninitMGMT */
/* Demangled: nicUninitMGMT */
int nicUninitMGMT(void);

/* Symbol: txPwrCtrlUninit */
/* Demangled: txPwrCtrlUninit */
int txPwrCtrlUninit(void);

/* Symbol: wlanAdapterStop */
/* Demangled: wlanAdapterStop */
int wlanAdapterStop(void);

/* Symbol: halHifPowerOffWifi */
/* Demangled: halHifPowerOffWifi */
int halHifPowerOffWifi(void);

/* Symbol: halHifSwInfoUnInit */
/* Demangled: halHifSwInfoUnInit */
int halHifSwInfoUnInit(void);

/* Symbol: wlanIsChipNoAck */
/* Demangled: wlanIsChipNoAck */
int wlanIsChipNoAck(void);

/* Symbol: wlanPowerOffWifi */
/* Demangled: wlanPowerOffWifi */
int wlanPowerOffWifi(void);

/* Symbol: wlanISR */
/* Demangled: wlanISR */
int wlanISR(void);

/* Symbol: wlanIST */
/* Demangled: wlanIST */
int wlanIST(void);

/* Symbol: nicProcessIST */
/* Demangled: nicProcessIST */
int nicProcessIST(void);

/* Symbol: wlanClearPendingInterrupt */
/* Demangled: wlanClearPendingInterrupt */
int wlanClearPendingInterrupt(void);

/* Symbol: wlanProcessCommandQueue */
/* Demangled: wlanProcessCommandQueue */
int wlanProcessCommandQueue(void);

/* Symbol: wlanWakeLogCmd */
/* Demangled: wlanWakeLogCmd */
int wlanWakeLogCmd(void);

/* Symbol: qmGetFrameAction */
/* Demangled: qmGetFrameAction */
int qmGetFrameAction(void);

/* Symbol: wlanSendCommandMthread */
/* Demangled: wlanSendCommandMthread */
int wlanSendCommandMthread(void);

/* Symbol: kalSetTxCmdEvent2Hif */
/* Demangled: kalSetTxCmdEvent2Hif */
int kalSetTxCmdEvent2Hif(void);

/* Symbol: kalSecurityFrameSendComplete */
/* Demangled: kalSecurityFrameSendComplete */
int kalSecurityFrameSendComplete(void);

/* Symbol: cnmPktFreeWrapper */
/* Demangled: cnmPktFreeWrapper */
int cnmPktFreeWrapper(void);

/* Symbol: nicTxAcquireResource */
/* Demangled: nicTxAcquireResource */
int nicTxAcquireResource(void);

/* Symbol: wlanTxCmdDoneCb */
/* Demangled: wlanTxCmdDoneCb */
int wlanTxCmdDoneCb(void);

/* Symbol: wlanTxCmdMthread */
/* Demangled: wlanTxCmdMthread */
int wlanTxCmdMthread(void);

/* Symbol: halIsHifStateSuspend */
/* Demangled: halIsHifStateSuspend */
int halIsHifStateSuspend(void);

/* Symbol: kalSetTxCmdDoneEvent */
/* Demangled: kalSetTxCmdDoneEvent */
int kalSetTxCmdDoneEvent(void);

/* Symbol: wlanTxCmdDoneMthread */
/* Demangled: wlanTxCmdDoneMthread */
int wlanTxCmdDoneMthread(void);

/* Symbol: wlanReleasePendingCMDbyBssIdx */
/* Demangled: wlanReleasePendingCMDbyBssIdx */
int wlanReleasePendingCMDbyBssIdx(void);

/* Symbol: wlanReturnPacket */
/* Demangled: wlanReturnPacket */
int wlanReturnPacket(void);

/* Symbol: kalPacketFree */
/* Demangled: kalPacketFree */
int kalPacketFree(void);

/* Symbol: wlanQueryInformation */
/* Demangled: wlanQueryInformation */
int wlanQueryInformation(void);

/* Symbol: aisGetConnectedBssInfo */
/* Demangled: aisGetConnectedBssInfo */
int aisGetConnectedBssInfo(void);

/* Symbol: wlanSetInformation */
/* Demangled: wlanSetInformation */
int wlanSetInformation(void);

/* Symbol: wlanSetPromiscuousMode */
/* Demangled: wlanSetPromiscuousMode */
int wlanSetPromiscuousMode(void);

/* Symbol: wlanRxSetBroadcast */
/* Demangled: wlanRxSetBroadcast */
int wlanRxSetBroadcast(void);

/* Symbol: wlanSendNicPowerCtrlCmd */
/* Demangled: wlanSendNicPowerCtrlCmd */
int wlanSendNicPowerCtrlCmd(void);

/* Symbol: nicTxPollingResource */
/* Demangled: nicTxPollingResource */
int nicTxPollingResource(void);

/* Symbol: wlanIsHandlerAllowedInRFTest */
/* Demangled: wlanIsHandlerAllowedInRFTest */
int wlanIsHandlerAllowedInRFTest(void);

/* Symbol: apfnOidSetHandlerAllowedInRFTest */
/* Demangled: apfnOidSetHandlerAllowedInRFTest */
extern void* apfnOidSetHandlerAllowedInRFTest;

/* Symbol: apfnOidQueryHandlerAllowedInRFTest */
/* Demangled: apfnOidQueryHandlerAllowedInRFTest */
extern void* apfnOidQueryHandlerAllowedInRFTest;

/* Symbol: nicTxGetPageCount */
/* Demangled: nicTxGetPageCount */
int nicTxGetPageCount(void);

/* Symbol: nicTxInitCmd */
/* Demangled: nicTxInitCmd */
int nicTxInitCmd(void);

/* Symbol: wlanAccessRegisterStatus */
/* Demangled: wlanAccessRegisterStatus */
int wlanAccessRegisterStatus(void);

/* Symbol: wlanProcessQueuedSwRfb */
/* Demangled: wlanProcessQueuedSwRfb */
int wlanProcessQueuedSwRfb(void);

/* Symbol: cnmGetStaRecByIndex */
/* Demangled: cnmGetStaRecByIndex */
int cnmGetStaRecByIndex(void);

/* Symbol: qmHandleRxArpPackets */
/* Demangled: qmHandleRxArpPackets */
int qmHandleRxArpPackets(void);

/* Symbol: nicRxProcessPktWithoutReorder */
/* Demangled: nicRxProcessPktWithoutReorder */
int nicRxProcessPktWithoutReorder(void);

/* Symbol: nicRxProcessForwardPkt */
/* Demangled: nicRxProcessForwardPkt */
int nicRxProcessForwardPkt(void);

/* Symbol: nicRxProcessGOBroadcastPkt */
/* Demangled: nicRxProcessGOBroadcastPkt */
int nicRxProcessGOBroadcastPkt(void);

/* Symbol: wlanProcessQueuedMsduInfo */
/* Demangled: wlanProcessQueuedMsduInfo */
int wlanProcessQueuedMsduInfo(void);

/* Symbol: nicTxFreeMsduInfoPacket */
/* Demangled: nicTxFreeMsduInfoPacket */
int nicTxFreeMsduInfoPacket(void);

/* Symbol: wlanoidTimeoutCheck */
/* Demangled: wlanoidTimeoutCheck */
int wlanoidTimeoutCheck(void);

/* Symbol: apfnOidWOTimeoutCheck */
/* Demangled: apfnOidWOTimeoutCheck */
extern void* apfnOidWOTimeoutCheck;

/* Symbol: wlanoidClearTimeoutCheck */
/* Demangled: wlanoidClearTimeoutCheck */
int wlanoidClearTimeoutCheck(void);

/* Symbol: cnmTimerStopTimer */
/* Demangled: cnmTimerStopTimer */
int cnmTimerStopTimer(void);

/* Symbol: wlanQueryTestMode */
/* Demangled: wlanQueryTestMode */
int wlanQueryTestMode(void);

/* Symbol: wlanProcessTxFrame */
/* Demangled: wlanProcessTxFrame */
int wlanProcessTxFrame(void);

/* Symbol: kalQoSFrameClassifierAndPacketInfo */
/* Demangled: kalQoSFrameClassifierAndPacketInfo */
int kalQoSFrameClassifierAndPacketInfo(void);

/* Symbol: cnmGetStaRecByAddress */
/* Demangled: cnmGetStaRecByAddress */
int cnmGetStaRecByAddress(void);

/* Symbol: wlanProcessSecurityFrame */
/* Demangled: wlanProcessSecurityFrame */
int wlanProcessSecurityFrame(void);

/* Symbol: cnmPktAlloc */
/* Demangled: cnmPktAlloc */
int cnmPktAlloc(void);

/* Symbol: kalGetEthDestAddr */
/* Demangled: kalGetEthDestAddr */
int kalGetEthDestAddr(void);

/* Symbol: wlanSecurityFrameTxDone */
/* Demangled: wlanSecurityFrameTxDone */
int wlanSecurityFrameTxDone(void);

/* Symbol: wlanSecurityAndCmdDataFrameTxTimeout */
/* Demangled: wlanSecurityAndCmdDataFrameTxTimeout */
int wlanSecurityAndCmdDataFrameTxTimeout(void);

/* Symbol: cnmPktFree */
/* Demangled: cnmPktFree */
int cnmPktFree(void);

/* Symbol: nicTxDummyTxDone */
/* Demangled: nicTxDummyTxDone */
int nicTxDummyTxDone(void);

/* Symbol: nicTxSetDataPacket */
/* Demangled: nicTxSetDataPacket */
int nicTxSetDataPacket(void);

/* Symbol: nicTxConfigPktOption */
/* Demangled: nicTxConfigPktOption */
int nicTxConfigPktOption(void);

/* Symbol: nicTxComposeSecurityFrameDesc */
/* Demangled: nicTxComposeSecurityFrameDesc */
int nicTxComposeSecurityFrameDesc(void);

/* Symbol: kalSetEvent */
/* Demangled: kalSetEvent */
int kalSetEvent(void);

/* Symbol: aisGetAisSpecBssInfo */
/* Demangled: aisGetAisSpecBssInfo */
int aisGetAisSpecBssInfo(void);

/* Symbol: authSendDeauthFrame */
/* Demangled: authSendDeauthFrame */
int authSendDeauthFrame(void);

/* Symbol: wlanProcessCmdDataFrame */
/* Demangled: wlanProcessCmdDataFrame */
int wlanProcessCmdDataFrame(void);

/* Symbol: nicTxFillMsduInfo */
/* Demangled: nicTxFillMsduInfo */
int nicTxFillMsduInfo(void);

/* Symbol: nicTxProcessCmdDataPacket */
/* Demangled: nicTxProcessCmdDataPacket */
int nicTxProcessCmdDataPacket(void);

/* Symbol: wlanCmdDataFrameTxDone */
/* Demangled: wlanCmdDataFrameTxDone */
int wlanCmdDataFrameTxDone(void);

/* Symbol: kalSendCompleteAndAwakeQueue */
/* Demangled: kalSendCompleteAndAwakeQueue */
int kalSendCompleteAndAwakeQueue(void);

/* Symbol: wlanClearScanningResult */
/* Demangled: wlanClearScanningResult */
int wlanClearScanningResult(void);

/* Symbol: aisGetCurrBssId */
/* Demangled: aisGetCurrBssId */
int aisGetCurrBssId(void);

/* Symbol: kalGetMediaStateIndicated */
/* Demangled: kalGetMediaStateIndicated */
int kalGetMediaStateIndicated(void);

/* Symbol: wlanClearBssInScanningResult */
/* Demangled: wlanClearBssInScanningResult */
int wlanClearBssInScanningResult(void);

/* Symbol: wlanGetMiniTxPower */
/* Demangled: wlanGetMiniTxPower */
int wlanGetMiniTxPower(void);

/* Symbol: wlanResetMediaStreamMode */
/* Demangled: wlanResetMediaStreamMode */
int wlanResetMediaStreamMode(void);

/* Symbol: wlanTimerTimeoutCheck */
/* Demangled: wlanTimerTimeoutCheck */
int wlanTimerTimeoutCheck(void);

/* Symbol: cnmTimerDoTimeOutCheck */
/* Demangled: cnmTimerDoTimeOutCheck */
int cnmTimerDoTimeOutCheck(void);

/* Symbol: wlanProcessMboxMessage */
/* Demangled: wlanProcessMboxMessage */
int wlanProcessMboxMessage(void);

/* Symbol: mboxRcvAllMsg */
/* Demangled: mboxRcvAllMsg */
int mboxRcvAllMsg(void);

/* Symbol: wlanEnqueueTxPacket */
/* Demangled: wlanEnqueueTxPacket */
int wlanEnqueueTxPacket(void);

/* Symbol: kalMetTagPacket */
/* Demangled: kalMetTagPacket */
int kalMetTagPacket(void);

/* Symbol: nicTxEnqueueMsdu */
/* Demangled: nicTxEnqueueMsdu */
int nicTxEnqueueMsdu(void);

/* Symbol: wlanTxProfilingTagMsdu */
/* Demangled: wlanTxProfilingTagMsdu */
int wlanTxProfilingTagMsdu(void);

/* Symbol: wlanTxLifetimeTagPacket */
/* Demangled: wlanTxLifetimeTagPacket */
int wlanTxLifetimeTagPacket(void);

/* Symbol: wlanTxProfilingTagPacket */
/* Demangled: wlanTxProfilingTagPacket */
int wlanTxProfilingTagPacket(void);

/* Symbol: wlanFlushTxPendingPackets */
/* Demangled: wlanFlushTxPendingPackets */
int wlanFlushTxPendingPackets(void);

/* Symbol: nicTxFlush */
/* Demangled: nicTxFlush */
int nicTxFlush(void);

/* Symbol: wlanTxPendingPackets */
/* Demangled: wlanTxPendingPackets */
int wlanTxPendingPackets(void);

/* Symbol: qmDequeueTxPacketsMthread */
/* Demangled: qmDequeueTxPacketsMthread */
int qmDequeueTxPacketsMthread(void);

/* Symbol: nicTxMsduInfoListMthread */
/* Demangled: nicTxMsduInfoListMthread */
int nicTxMsduInfoListMthread(void);

/* Symbol: nicTxAdjustTcq */
/* Demangled: nicTxAdjustTcq */
int nicTxAdjustTcq(void);

/* Symbol: wlanAcquirePowerControl */
/* Demangled: wlanAcquirePowerControl */
int wlanAcquirePowerControl(void);

/* Symbol: wlanReleasePowerControl */
/* Demangled: wlanReleasePowerControl */
int wlanReleasePowerControl(void);

/* Symbol: wlanGetTxPendingFrameCount */
/* Demangled: wlanGetTxPendingFrameCount */
int wlanGetTxPendingFrameCount(void);

/* Symbol: kalGetTxPendingFrameCount */
/* Demangled: kalGetTxPendingFrameCount */
int kalGetTxPendingFrameCount(void);

/* Symbol: wlanGetAcpiState */
/* Demangled: wlanGetAcpiState */
int wlanGetAcpiState(void);

/* Symbol: wlanSetAcpiState */
/* Demangled: wlanSetAcpiState */
int wlanSetAcpiState(void);

/* Symbol: wlanGetEcoVersion */
/* Demangled: wlanGetEcoVersion */
int wlanGetEcoVersion(void);

/* Symbol: wlanSetPreferBandByNetwork */
/* Demangled: wlanSetPreferBandByNetwork */
int wlanSetPreferBandByNetwork(void);

/* Symbol: scanRemoveBssDescByBandAndNetwork */
/* Demangled: scanRemoveBssDescByBandAndNetwork */
int scanRemoveBssDescByBandAndNetwork(void);

/* Symbol: wlanGetChannelNumberByNetwork */
/* Demangled: wlanGetChannelNumberByNetwork */
int wlanGetChannelNumberByNetwork(void);

/* Symbol: wlanCheckSystemConfiguration */
/* Demangled: wlanCheckSystemConfiguration */
int wlanCheckSystemConfiguration(void);

/* Symbol: kalGetConfiguration */
/* Demangled: kalGetConfiguration */
int kalGetConfiguration(void);

/* Symbol: wlanoidQueryBssStatistics */
/* Demangled: wlanoidQueryBssStatistics */
int wlanoidQueryBssStatistics(void);

/* Symbol: wlanDumpBssStatistics */
/* Demangled: wlanDumpBssStatistics */
int wlanDumpBssStatistics(void);

/* Symbol: apucACI2Str */
/* Demangled: apucACI2Str */
extern void* apucACI2Str;

/* Symbol: wlanDumpAllBssStatistics */
/* Demangled: wlanDumpAllBssStatistics */
int wlanDumpAllBssStatistics(void);

/* Symbol: wlanoidQueryStaStatistics */
/* Demangled: wlanoidQueryStaStatistics */
int wlanoidQueryStaStatistics(void);

/* Symbol: wlanQueryStaStatistics */
/* Demangled: wlanQueryStaStatistics */
int wlanQueryStaStatistics(void);

/* Symbol: nicCmdEventQueryStaStatistics */
/* Demangled: nicCmdEventQueryStaStatistics */
int nicCmdEventQueryStaStatistics(void);

/* Symbol: nicOidCmdTimeoutCommon */
/* Demangled: nicOidCmdTimeoutCommon */
int nicOidCmdTimeoutCommon(void);

/* Symbol: wlanQueryStatistics */
/* Demangled: wlanQueryStatistics */
int wlanQueryStatistics(void);

/* Symbol: nicCmdEventQueryStatistics */
/* Demangled: nicCmdEventQueryStatistics */
int nicCmdEventQueryStatistics(void);

/* Symbol: _kalSnprintf */
/* Demangled: _kalSnprintf */
int _kalSnprintf(void);

/* Symbol: wlanCfgSet */
/* Demangled: wlanCfgSet */
int wlanCfgSet(void);

/* Symbol: wlanCfgDumpIotApRule */
/* Demangled: wlanCfgDumpIotApRule */
int wlanCfgDumpIotApRule(void);

/* Symbol: wlanCfgLoadIotApRule */
/* Demangled: wlanCfgLoadIotApRule */
int wlanCfgLoadIotApRule(void);

/* Symbol: wlanHexToArrayR */
/* Demangled: wlanHexToArrayR */
int wlanHexToArrayR(void);

/* Symbol: wlanCfgGet */
/* Demangled: wlanCfgGet */
int wlanCfgGet(void);

/* Symbol: wlanHexToNum */
/* Demangled: wlanHexToNum */
int wlanHexToNum(void);

/* Symbol: wlanBindBssIdxToNetInterface */
/* Demangled: wlanBindBssIdxToNetInterface */
int wlanBindBssIdxToNetInterface(void);

/* Symbol: wlanGetNetInterfaceByBssIdx */
/* Demangled: wlanGetNetInterfaceByBssIdx */
int wlanGetNetInterfaceByBssIdx(void);

/* Symbol: wlanCfgSetSwCtrl */
/* Demangled: wlanCfgSetSwCtrl */
int wlanCfgSetSwCtrl(void);

/* Symbol: wlanoidSetSwCtrlWrite */
/* Demangled: wlanoidSetSwCtrlWrite */
int wlanoidSetSwCtrlWrite(void);

/* Symbol: kalIoctl */
/* Demangled: kalIoctl */
int kalIoctl(void);

/* Symbol: wlanCfgSetChip */
/* Demangled: wlanCfgSetChip */
int wlanCfgSetChip(void);

/* Symbol: wlanoidSetChipConfig */
/* Demangled: wlanoidSetChipConfig */
int wlanoidSetChipConfig(void);

/* Symbol: wlanCfgSetCountryCode */
/* Demangled: wlanCfgSetCountryCode */
int wlanCfgSetCountryCode(void);

/* Symbol: regd_is_single_sku_en */
/* Demangled: regd_is_single_sku_en */
int regd_is_single_sku_en(void);

/* Symbol: rlmDomainOidSetCountry */
/* Demangled: rlmDomainOidSetCountry */
int rlmDomainOidSetCountry(void);

/* Symbol: wlanCfgGetEntry */
/* Demangled: wlanCfgGetEntry */
int wlanCfgGetEntry(void);

/* Symbol: wlanCfgGetTotalCfgNum */
/* Demangled: wlanCfgGetTotalCfgNum */
int wlanCfgGetTotalCfgNum(void);

/* Symbol: wlanCfgGetEntryByIndex */
/* Demangled: wlanCfgGetEntryByIndex */
int wlanCfgGetEntryByIndex(void);

/* Symbol: wlanCfgRecordValue */
/* Demangled: wlanCfgRecordValue */
int wlanCfgRecordValue(void);

/* Symbol: wlanCfgSetCb */
/* Demangled: wlanCfgSetCb */
int wlanCfgSetCb(void);

/* Symbol: wlanCfgSetUint32 */
/* Demangled: wlanCfgSetUint32 */
int wlanCfgSetUint32(void);

/* Symbol: wlanCfgFindNextToken */
/* Demangled: wlanCfgFindNextToken */
int wlanCfgFindNextToken(void);

/* Symbol: wlanCfgParseArgument */
/* Demangled: wlanCfgParseArgument */
int wlanCfgParseArgument(void);

/* Symbol: wlanCfgParseArgumentLong */
/* Demangled: wlanCfgParseArgumentLong */
int wlanCfgParseArgumentLong(void);

/* Symbol: wlanCfgParseAddEntry */
/* Demangled: wlanCfgParseAddEntry */
int wlanCfgParseAddEntry(void);

/* Symbol: wlanCfgParseToFW */
/* Demangled: wlanCfgParseToFW */
int wlanCfgParseToFW(void);

/* Symbol: wlanFeatureToFw */
/* Demangled: wlanFeatureToFw */
int wlanFeatureToFw(void);

/* Symbol: wlanCfgParse */
/* Demangled: wlanCfgParse */
int wlanCfgParse(void);

/* Symbol: wlanCfgInit */
/* Demangled: wlanCfgInit */
int wlanCfgInit(void);

/* Symbol: wlanLoadDefaultCustomerSetting */
/* Demangled: wlanLoadDefaultCustomerSetting */
int wlanLoadDefaultCustomerSetting(void);

/* Symbol: g_rDefaulteSetting */
/* Demangled: g_rDefaulteSetting */
extern void* g_rDefaulteSetting;

/* Symbol: wlanHexToByte */
/* Demangled: wlanHexToByte */
int wlanHexToByte(void);

/* Symbol: wlanHexToArray */
/* Demangled: wlanHexToArray */
int wlanHexToArray(void);

/* Symbol: wlanHwAddrToBin */
/* Demangled: wlanHwAddrToBin */
int wlanHwAddrToBin(void);

/* Symbol: wlanIsChipRstRecEnabled */
/* Demangled: wlanIsChipRstRecEnabled */
int wlanIsChipRstRecEnabled(void);

/* Symbol: wlanIsChipAssert */
/* Demangled: wlanIsChipAssert */
int wlanIsChipAssert(void);

/* Symbol: wlanChipRstPreAct */
/* Demangled: wlanChipRstPreAct */
int wlanChipRstPreAct(void);

/* Symbol: bssGetClientCount */
/* Demangled: bssGetClientCount */
int bssGetClientCount(void);

/* Symbol: kalP2PGOStationUpdate */
/* Demangled: kalP2PGOStationUpdate */
int kalP2PGOStationUpdate(void);

/* Symbol: kalP2PGCIndicateConnectionStatus */
/* Demangled: kalP2PGCIndicateConnectionStatus */
int kalP2PGCIndicateConnectionStatus(void);

/* Symbol: wlanTxLifetimeUpdateStaStats */
/* Demangled: wlanTxLifetimeUpdateStaStats */
int wlanTxLifetimeUpdateStaStats(void);

/* Symbol: wlanTxLifetimeIsProfilingEnabled */
/* Demangled: wlanTxLifetimeIsProfilingEnabled */
int wlanTxLifetimeIsProfilingEnabled(void);

/* Symbol: wlanTxLifetimeIsTargetMsdu */
/* Demangled: wlanTxLifetimeIsTargetMsdu */
int wlanTxLifetimeIsTargetMsdu(void);

/* Symbol: wlanUpdateTxStatistics */
/* Demangled: wlanUpdateTxStatistics */
int wlanUpdateTxStatistics(void);

/* Symbol: aucTid2ACI */
/* Demangled: aucTid2ACI */
extern void* aucTid2ACI;

/* Symbol: nicCmdEventSetCommon */
/* Demangled: nicCmdEventSetCommon */
int nicCmdEventSetCommon(void);

/* Symbol: wlanTriggerStatsLog */
/* Demangled: wlanTriggerStatsLog */
int wlanTriggerStatsLog(void);

/* Symbol: wlanUpdateRxStatistics */
/* Demangled: wlanUpdateRxStatistics */
int wlanUpdateRxStatistics(void);

/* Symbol: wlanPktTxDone */
/* Demangled: wlanPktTxDone */
int wlanPktTxDone(void);

/* Symbol: p2pRoleFsmNotifyEapolTxStatus */
/* Demangled: p2pRoleFsmNotifyEapolTxStatus */
int p2pRoleFsmNotifyEapolTxStatus(void);

/* Symbol: TdlsHandleTxDoneStatus */
/* Demangled: TdlsHandleTxDoneStatus */
int TdlsHandleTxDoneStatus(void);

/* Symbol: wlanCorDumpTimerInit */
/* Demangled: wlanCorDumpTimerInit */
int wlanCorDumpTimerInit(void);

/* Symbol: wlanN9CorDumpTimeOut */
/* Demangled: wlanN9CorDumpTimeOut */
int wlanN9CorDumpTimeOut(void);

/* Symbol: wlanCr4CorDumpTimeOut */
/* Demangled: wlanCr4CorDumpTimeOut */
int wlanCr4CorDumpTimeOut(void);

/* Symbol: kalCloseCorDumpFile */
/* Demangled: kalCloseCorDumpFile */
int kalCloseCorDumpFile(void);

/* Symbol: glSetRstReason */
/* Demangled: glSetRstReason */
int glSetRstReason(void);

/* Symbol: wlanCorDumpTimerReset */
/* Demangled: wlanCorDumpTimerReset */
int wlanCorDumpTimerReset(void);

/* Symbol: wlanGetWlanIdxByAddress */
/* Demangled: wlanGetWlanIdxByAddress */
int wlanGetWlanIdxByAddress(void);

/* Symbol: wlanGetStaAddrByWlanIdx */
/* Demangled: wlanGetStaAddrByWlanIdx */
int wlanGetStaAddrByWlanIdx(void);

/* Symbol: wlanNotifyFwSuspend */
/* Demangled: wlanNotifyFwSuspend */
int wlanNotifyFwSuspend(void);

/* Symbol: wlanoidNotifyFwSuspend */
/* Demangled: wlanoidNotifyFwSuspend */
int wlanoidNotifyFwSuspend(void);

/* Symbol: wlanGetStaIdxByWlanIdx */
/* Demangled: wlanGetStaIdxByWlanIdx */
int wlanGetStaIdxByWlanIdx(void);

/* Symbol: wlanGetWiphy */
/* Demangled: wlanGetWiphy */
int wlanGetWiphy(void);

/* Symbol: gprWdev */
/* Demangled: gprWdev */
extern void* gprWdev;

/* Symbol: wlanGetNetDev */
/* Demangled: wlanGetNetDev */
int wlanGetNetDev(void);

/* Symbol: wlanGetBssIdx */
/* Demangled: wlanGetBssIdx */
int wlanGetBssIdx(void);

/* Symbol: wlanIsAisDev */
/* Demangled: wlanIsAisDev */
int wlanIsAisDev(void);

/* Symbol: wlanQueryLteSafeChannel */
/* Demangled: wlanQueryLteSafeChannel */
int wlanQueryLteSafeChannel(void);

/* Symbol: nicCmdEventQueryLteSafeChn */
/* Demangled: nicCmdEventQueryLteSafeChn */
int nicCmdEventQueryLteSafeChn(void);

/* Symbol: wlanInitChnLoadInfoChannelList */
/* Demangled: wlanInitChnLoadInfoChannelList */
int wlanInitChnLoadInfoChannelList(void);

/* Symbol: wlanGetChannelNumFromIndex */
/* Demangled: wlanGetChannelNumFromIndex */
int wlanGetChannelNumFromIndex(void);

/* Symbol: wlanCalculateAllChannelDirtiness */
/* Demangled: wlanCalculateAllChannelDirtiness */
int wlanCalculateAllChannelDirtiness(void);

/* Symbol: wlanGetChannelIndex */
/* Demangled: wlanGetChannelIndex */
int wlanGetChannelIndex(void);

/* Symbol: wlanSortChannel */
/* Demangled: wlanSortChannel */
int wlanSortChannel(void);

/* Symbol: rlmDomainGetChnlList */
/* Demangled: rlmDomainGetChnlList */
int rlmDomainGetChnlList(void);

/* Symbol: wlanGetAntPathType */
/* Demangled: wlanGetAntPathType */
int wlanGetAntPathType(void);

/* Symbol: wlanAntPathFavorSelect */
/* Demangled: wlanAntPathFavorSelect */
int wlanAntPathFavorSelect(void);

/* Symbol: wlanGetSpeIdx */
/* Demangled: wlanGetSpeIdx */
int wlanGetSpeIdx(void);

/* Symbol: wlanGetSupportNss */
/* Demangled: wlanGetSupportNss */
int wlanGetSupportNss(void);

/* Symbol: aisGetAisFsmInfo */
/* Demangled: aisGetAisFsmInfo */
int aisGetAisFsmInfo(void);

/* Symbol: p2pFuncIsAPMode */
/* Demangled: p2pFuncIsAPMode */
int p2pFuncIsAPMode(void);

/* Symbol: bssGetIotApAction */
/* Demangled: bssGetIotApAction */
int bssGetIotApAction(void);

/* Symbol: wlanProbeSuccessForLowLatency */
/* Demangled: wlanProbeSuccessForLowLatency */
int wlanProbeSuccessForLowLatency(void);

/* Symbol: wlanSetLowLatencyCommand */
/* Demangled: wlanSetLowLatencyCommand */
int wlanSetLowLatencyCommand(void);

/* Symbol: wlanConnectedForLowLatency */
/* Demangled: wlanConnectedForLowLatency */
int wlanConnectedForLowLatency(void);

/* Symbol: wlanSetLowLatencyMode */
/* Demangled: wlanSetLowLatencyMode */
int wlanSetLowLatencyMode(void);

/* Symbol: aisGetAisBssInfo */
/* Demangled: aisGetAisBssInfo */
int aisGetAisBssInfo(void);

/* Symbol: nicConfigPowerSaveProfile */
/* Demangled: nicConfigPowerSaveProfile */
int nicConfigPowerSaveProfile(void);

/* Symbol: wlanSetForceRTS */
/* Demangled: wlanSetForceRTS */
int wlanSetForceRTS(void);

/* Symbol: wlanCfgFwSetParam */
/* Demangled: wlanCfgFwSetParam */
int wlanCfgFwSetParam(void);

/* Symbol: wlanCfgSetGetFw */
/* Demangled: wlanCfgSetGetFw */
int wlanCfgSetGetFw(void);

/* Symbol: wlanFwCfgParse */
/* Demangled: wlanFwCfgParse */
int wlanFwCfgParse(void);

/* Symbol: wlanGetFileContent */
/* Demangled: wlanGetFileContent */
int wlanGetFileContent(void);

/* Symbol: kalRequestFirmware */
/* Demangled: kalRequestFirmware */
int kalRequestFirmware(void);

/* Symbol: kalReadToFile */
/* Demangled: kalReadToFile */
int kalReadToFile(void);

/* Symbol: wlanReleasePendingCmdById */
/* Demangled: wlanReleasePendingCmdById */
int wlanReleasePendingCmdById(void);

/* Symbol: wlanDecimalStr2Hexadecimals */
/* Demangled: wlanDecimalStr2Hexadecimals */
int wlanDecimalStr2Hexadecimals(void);

/* Symbol: wlanGetSupportedFeatureSet */
/* Demangled: wlanGetSupportedFeatureSet */
int wlanGetSupportedFeatureSet(void);

/* Symbol: wlanSuspendPmHandle */
/* Demangled: wlanSuspendPmHandle */
int wlanSuspendPmHandle(void);

/* Symbol: kalWowProcess */
/* Demangled: kalWowProcess */
int kalWowProcess(void);

/* Symbol: wlanResumePmHandle */
/* Demangled: wlanResumePmHandle */
int wlanResumePmHandle(void);

/* Symbol: wlanQueryRateByTable */
/* Demangled: wlanQueryRateByTable */
int wlanQueryRateByTable(void);

/* Symbol: g_rOfdmDataRateMappingTable */
/* Demangled: g_rOfdmDataRateMappingTable */
extern void* g_rOfdmDataRateMappingTable;

/* Symbol: g_rCckDataRateMappingTable */
/* Demangled: g_rCckDataRateMappingTable */
extern void* g_rCckDataRateMappingTable;

/* Symbol: g_rDataRateMappingTable */
/* Demangled: g_rDataRateMappingTable */
extern void* g_rDataRateMappingTable;

/* Symbol: g_rAxDataRateMappingTable */
/* Demangled: g_rAxDataRateMappingTable */
extern void* g_rAxDataRateMappingTable;

/* Symbol: wlanGetMaxTxRate */
/* Demangled: wlanGetMaxTxRate */
int wlanGetMaxTxRate(void);

/* Symbol: cnmGetBssMaxBw */
/* Demangled: cnmGetBssMaxBw */
int cnmGetBssMaxBw(void);

/* Symbol: aisGetTargetBssDesc */
/* Demangled: aisGetTargetBssDesc */
int aisGetTargetBssDesc(void);

/* Symbol: bssGetRxNss */
/* Demangled: bssGetRxNss */
int bssGetRxNss(void);

/* Symbol: wlanGetRxRate */
/* Demangled: wlanGetRxRate */
int wlanGetRxRate(void);

/* Symbol: aisGetStaRecOfAP */
/* Demangled: aisGetStaRecOfAP */
int aisGetStaRecOfAP(void);

/* Symbol: wlanLinkQualityMonitor */
/* Demangled: wlanLinkQualityMonitor */
int wlanLinkQualityMonitor(void);

/* Symbol: SET_IOCTL_BSSIDX */
/* Demangled: SET_IOCTL_BSSIDX */
int SET_IOCTL_BSSIDX(void);

/* Symbol: wlanoidQueryBssid */
/* Demangled: wlanoidQueryBssid */
int wlanoidQueryBssid(void);

/* Symbol: kalIndicateDriverEvent */
/* Demangled: kalIndicateDriverEvent */
int kalIndicateDriverEvent(void);

/* Symbol: wlanCustomMonitorFunction */
/* Demangled: wlanCustomMonitorFunction */
int wlanCustomMonitorFunction(void);

/* Symbol: wlanFinishCollectingLinkQuality */
/* Demangled: wlanFinishCollectingLinkQuality */
int wlanFinishCollectingLinkQuality(void);

/* Symbol: wlanResoreEmCfgSetting */
/* Demangled: wlanResoreEmCfgSetting */
int wlanResoreEmCfgSetting(void);

/* Symbol: g_rEmCfgBk */
/* Demangled: g_rEmCfgBk */
extern void* g_rEmCfgBk;

/* Symbol: wlanBackupEmCfgSetting */
/* Demangled: wlanBackupEmCfgSetting */
int wlanBackupEmCfgSetting(void);

/* Symbol: wlanCleanAllEmCfgSetting */
/* Demangled: wlanCleanAllEmCfgSetting */
int wlanCleanAllEmCfgSetting(void);

/* Symbol: wlanWfdEnabled */
/* Demangled: wlanWfdEnabled */
int wlanWfdEnabled(void);

/* Symbol: aucPriorityParam2TC */
/* Demangled: aucPriorityParam2TC */
extern void* aucPriorityParam2TC;

/* Symbol: wlanoidSetChannel */
/* Demangled: wlanoidSetChannel */
int wlanoidSetChannel(void);

/* Symbol: wlanoidSetBeaconInterval */
/* Demangled: wlanoidSetBeaconInterval */
int wlanoidSetBeaconInterval(void);

/* Symbol: wlanoidSetAtimWindow */
/* Demangled: wlanoidSetAtimWindow */
int wlanoidSetAtimWindow(void);

/* Symbol: wlanoidSetFrequency */
/* Demangled: wlanoidSetFrequency */
int wlanoidSetFrequency(void);

/* Symbol: wlanoidQuerySsid */
/* Demangled: wlanoidQuerySsid */
int wlanoidQuerySsid(void);

/* Symbol: wlanoidQueryInfrastructureMode */
/* Demangled: wlanoidQueryInfrastructureMode */
int wlanoidQueryInfrastructureMode(void);

/* Symbol: wlanoidQueryAuthMode */
/* Demangled: wlanoidQueryAuthMode */
int wlanoidQueryAuthMode(void);

/* Symbol: wlanoidQueryEncryptionStatus */
/* Demangled: wlanoidQueryEncryptionStatus */
int wlanoidQueryEncryptionStatus(void);

/* Symbol: wlanoidQueryNetworkTypeInUse */
/* Demangled: wlanoidQueryNetworkTypeInUse */
int wlanoidQueryNetworkTypeInUse(void);

/* Symbol: wlanoidQueryBssidList */
/* Demangled: wlanoidQueryBssidList */
int wlanoidQueryBssidList(void);

/* Symbol: wlanoidQueryAcpiDevicePowerState */
/* Demangled: wlanoidQueryAcpiDevicePowerState */
int wlanoidQueryAcpiDevicePowerState(void);

/* Symbol: wlanoidQuerySupportedRates */
/* Demangled: wlanoidQuerySupportedRates */
int wlanoidQuerySupportedRates(void);

/* Symbol: wlanoidQueryDesiredRates */
/* Demangled: wlanoidQueryDesiredRates */
int wlanoidQueryDesiredRates(void);

/* Symbol: wlanoidQuery802dot11PowerSaveProfile */
/* Demangled: wlanoidQuery802dot11PowerSaveProfile */
int wlanoidQuery802dot11PowerSaveProfile(void);

/* Symbol: wlanoidQueryBeaconInterval */
/* Demangled: wlanoidQueryBeaconInterval */
int wlanoidQueryBeaconInterval(void);

/* Symbol: wlanoidQueryAtimWindow */
/* Demangled: wlanoidQueryAtimWindow */
int wlanoidQueryAtimWindow(void);

/* Symbol: wlanoidQueryFrequency */
/* Demangled: wlanoidQueryFrequency */
int wlanoidQueryFrequency(void);

/* Symbol: wlanoidRftestSetTestMode */
/* Demangled: wlanoidRftestSetTestMode */
int wlanoidRftestSetTestMode(void);

/* Symbol: wlanoidRftestSetAbortTestMode */
/* Demangled: wlanoidRftestSetAbortTestMode */
int wlanoidRftestSetAbortTestMode(void);

/* Symbol: wlanoidRftestSetAutoTest */
/* Demangled: wlanoidRftestSetAutoTest */
int wlanoidRftestSetAutoTest(void);

/* Symbol: wlanoidSetMcrWrite */
/* Demangled: wlanoidSetMcrWrite */
int wlanoidSetMcrWrite(void);

/* Symbol: wlanoidSetEepromWrite */
/* Demangled: wlanoidSetEepromWrite */
int wlanoidSetEepromWrite(void);

/* Symbol: wlanoidRftestQueryAutoTest */
/* Demangled: wlanoidRftestQueryAutoTest */
int wlanoidRftestQueryAutoTest(void);

/* Symbol: wlanoidQueryMcrRead */
/* Demangled: wlanoidQueryMcrRead */
int wlanoidQueryMcrRead(void);

/* Symbol: wlanoidQueryEepromRead */
/* Demangled: wlanoidQueryEepromRead */
int wlanoidQueryEepromRead(void);

/* Symbol: wlanoidSetAcpiDevicePowerState */
/* Demangled: wlanoidSetAcpiDevicePowerState */
int wlanoidSetAcpiDevicePowerState(void);

/* Symbol: wlanoidQueryNetworkTypesSupported */
/* Demangled: wlanoidQueryNetworkTypesSupported */
int wlanoidQueryNetworkTypesSupported(void);

/* Symbol: wlanoidSetNetworkTypeInUse */
/* Demangled: wlanoidSetNetworkTypeInUse */
int wlanoidSetNetworkTypeInUse(void);

/* Symbol: GET_IOCTL_BSSIDX */
/* Demangled: GET_IOCTL_BSSIDX */
int GET_IOCTL_BSSIDX(void);

/* Symbol: aisGetOPMode */
/* Demangled: aisGetOPMode */
int aisGetOPMode(void);

/* Symbol: wlanoidSetBssidListScan */
/* Demangled: wlanoidSetBssidListScan */
int wlanoidSetBssidListScan(void);

/* Symbol: aisFsmScanRequest */
/* Demangled: aisFsmScanRequest */
int aisFsmScanRequest(void);

/* Symbol: wlanoidSetBssidListScanExt */
/* Demangled: wlanoidSetBssidListScanExt */
int wlanoidSetBssidListScanExt(void);

/* Symbol: wlanoidSetBssidListScanAdv */
/* Demangled: wlanoidSetBssidListScanAdv */
int wlanoidSetBssidListScanAdv(void);

/* Symbol: aisFsmScanRequestAdv */
/* Demangled: aisFsmScanRequestAdv */
int aisFsmScanRequestAdv(void);

/* Symbol: aisGetScanDoneTimer */
/* Demangled: aisGetScanDoneTimer */
int aisGetScanDoneTimer(void);

/* Symbol: wlanoidSetBssid */
/* Demangled: wlanoidSetBssid */
int wlanoidSetBssid(void);

/* Symbol: aisGetConnSettings */
/* Demangled: aisGetConnSettings */
int aisGetConnSettings(void);

/* Symbol: mboxSendMsg */
/* Demangled: mboxSendMsg */
int mboxSendMsg(void);

/* Symbol: kalSetMediaStateIndicated */
/* Demangled: kalSetMediaStateIndicated */
int kalSetMediaStateIndicated(void);

/* Symbol: wlanoidSetSsid */
/* Demangled: wlanoidSetSsid */
int wlanoidSetSsid(void);

/* Symbol: wlanoidSetConnect */
/* Demangled: wlanoidSetConnect */
int wlanoidSetConnect(void);

/* Symbol: wlanoidSetInfrastructureMode */
/* Demangled: wlanoidSetInfrastructureMode */
int wlanoidSetInfrastructureMode(void);

/* Symbol: cnmAisIbssIsPermitted */
/* Demangled: cnmAisIbssIsPermitted */
int cnmAisIbssIsPermitted(void);

/* Symbol: aisGetAuthMode */
/* Demangled: aisGetAuthMode */
int aisGetAuthMode(void);

/* Symbol: wlanoidSetAuthMode */
/* Demangled: wlanoidSetAuthMode */
int wlanoidSetAuthMode(void);

/* Symbol: wlanoidSetReloadDefaults */
/* Demangled: wlanoidSetReloadDefaults */
int wlanoidSetReloadDefaults(void);

/* Symbol: wlanoidSetAddWep */
/* Demangled: wlanoidSetAddWep */
int wlanoidSetAddWep(void);

/* Symbol: keyBuffer */
/* Demangled: keyBuffer */
extern void* keyBuffer;

/* Symbol: aucBCAddr */
/* Demangled: aucBCAddr */
extern void* aucBCAddr;

/* Symbol: wlanoidSetAddKey */
/* Demangled: wlanoidSetAddKey */
int wlanoidSetAddKey(void);

/* Symbol: nicRxClearFrag */
/* Demangled: nicRxClearFrag */
int nicRxClearFrag(void);

/* Symbol: nicCmdEventSetAddKey */
/* Demangled: nicCmdEventSetAddKey */
int nicCmdEventSetAddKey(void);

/* Symbol: nicOidCmdTimeoutSetAddKey */
/* Demangled: nicOidCmdTimeoutSetAddKey */
int nicOidCmdTimeoutSetAddKey(void);

/* Symbol: secPrivacySeekForBcEntry */
/* Demangled: secPrivacySeekForBcEntry */
int secPrivacySeekForBcEntry(void);

/* Symbol: wlanoidSetRemoveWep */
/* Demangled: wlanoidSetRemoveWep */
int wlanoidSetRemoveWep(void);

/* Symbol: wlanoidSetRemoveKey */
/* Demangled: wlanoidSetRemoveKey */
int wlanoidSetRemoveKey(void);

/* Symbol: wlanoidSetDefaultKey */
/* Demangled: wlanoidSetDefaultKey */
int wlanoidSetDefaultKey(void);

/* Symbol: wlanoidSetEncryptionStatus */
/* Demangled: wlanoidSetEncryptionStatus */
int wlanoidSetEncryptionStatus(void);

/* Symbol: secSetCipherSuite */
/* Demangled: secSetCipherSuite */
int secSetCipherSuite(void);

/* Symbol: wlanoidQueryCapability */
/* Demangled: wlanoidQueryCapability */
int wlanoidQueryCapability(void);

/* Symbol: wlanoidSetPmkid */
/* Demangled: wlanoidSetPmkid */
int wlanoidSetPmkid(void);

/* Symbol: rsnSetPmkid */
/* Demangled: rsnSetPmkid */
int rsnSetPmkid(void);

/* Symbol: wlanoidDelPmkid */
/* Demangled: wlanoidDelPmkid */
int wlanoidDelPmkid(void);

/* Symbol: rsnDelPmkid */
/* Demangled: rsnDelPmkid */
int rsnDelPmkid(void);

/* Symbol: wlanoidFlushPmkid */
/* Demangled: wlanoidFlushPmkid */
int wlanoidFlushPmkid(void);

/* Symbol: rsnFlushPmkid */
/* Demangled: rsnFlushPmkid */
int rsnFlushPmkid(void);

/* Symbol: wlanoidSetDesiredRates */
/* Demangled: wlanoidSetDesiredRates */
int wlanoidSetDesiredRates(void);

/* Symbol: wlanoidQueryMaxFrameSize */
/* Demangled: wlanoidQueryMaxFrameSize */
int wlanoidQueryMaxFrameSize(void);

/* Symbol: wlanoidQueryMaxTotalSize */
/* Demangled: wlanoidQueryMaxTotalSize */
int wlanoidQueryMaxTotalSize(void);

/* Symbol: wlanoidQueryVendorId */
/* Demangled: wlanoidQueryVendorId */
int wlanoidQueryVendorId(void);

/* Symbol: wlanoidQueryRssi */
/* Demangled: wlanoidQueryRssi */
int wlanoidQueryRssi(void);

/* Symbol: nicCmdEventQueryLinkQuality */
/* Demangled: nicCmdEventQueryLinkQuality */
int nicCmdEventQueryLinkQuality(void);

/* Symbol: wlanoidQueryRssiTrigger */
/* Demangled: wlanoidQueryRssiTrigger */
int wlanoidQueryRssiTrigger(void);

/* Symbol: wlanoidSetRssiTrigger */
/* Demangled: wlanoidSetRssiTrigger */
int wlanoidSetRssiTrigger(void);

/* Symbol: wlanoidSetCurrentLookahead */
/* Demangled: wlanoidSetCurrentLookahead */
int wlanoidSetCurrentLookahead(void);

/* Symbol: wlanoidQueryStatistics */
/* Demangled: wlanoidQueryStatistics */
int wlanoidQueryStatistics(void);

/* Symbol: wlanoidQueryBugReport */
/* Demangled: wlanoidQueryBugReport */
int wlanoidQueryBugReport(void);

/* Symbol: nicCmdEventQueryBugReport */
/* Demangled: nicCmdEventQueryBugReport */
int nicCmdEventQueryBugReport(void);

/* Symbol: wlanoidQueryMediaStreamMode */
/* Demangled: wlanoidQueryMediaStreamMode */
int wlanoidQueryMediaStreamMode(void);

/* Symbol: wlanoidSetMediaStreamMode */
/* Demangled: wlanoidSetMediaStreamMode */
int wlanoidSetMediaStreamMode(void);

/* Symbol: nicCmdEventSetMediaStreamMode */
/* Demangled: nicCmdEventSetMediaStreamMode */
int nicCmdEventSetMediaStreamMode(void);

/* Symbol: wlanoidQueryPermanentAddr */
/* Demangled: wlanoidQueryPermanentAddr */
int wlanoidQueryPermanentAddr(void);

/* Symbol: wlanoidQueryCurrentAddr */
/* Demangled: wlanoidQueryCurrentAddr */
int wlanoidQueryCurrentAddr(void);

/* Symbol: wlanoidQueryLinkSpeed */
/* Demangled: wlanoidQueryLinkSpeed */
int wlanoidQueryLinkSpeed(void);

/* Symbol: nicCmdEventQueryLinkSpeed */
/* Demangled: nicCmdEventQueryLinkSpeed */
int nicCmdEventQueryLinkSpeed(void);

/* Symbol: wlanQueryLinkSpeed */
/* Demangled: wlanQueryLinkSpeed */
int wlanQueryLinkSpeed(void);

/* Symbol: wlanoidQueryLinkSpeedEx */
/* Demangled: wlanoidQueryLinkSpeedEx */
int wlanoidQueryLinkSpeedEx(void);

/* Symbol: nicCmdEventQueryLinkSpeedEx */
/* Demangled: nicCmdEventQueryLinkSpeedEx */
int nicCmdEventQueryLinkSpeedEx(void);

/* Symbol: wlanoidQueryMaxLinkSpeed */
/* Demangled: wlanoidQueryMaxLinkSpeed */
int wlanoidQueryMaxLinkSpeed(void);

/* Symbol: wlanSendSetQueryExtCmd */
/* Demangled: wlanSendSetQueryExtCmd */
int wlanSendSetQueryExtCmd(void);

/* Symbol: wlanoidSetEfusBufferMode */
/* Demangled: wlanoidSetEfusBufferMode */
int wlanoidSetEfusBufferMode(void);

/* Symbol: wlanoidConnacSetEfusBufferMode */
/* Demangled: wlanoidConnacSetEfusBufferMode */
int wlanoidConnacSetEfusBufferMode(void);

/* Symbol: wlanoidQueryProcessAccessEfuseRead */
/* Demangled: wlanoidQueryProcessAccessEfuseRead */
int wlanoidQueryProcessAccessEfuseRead(void);

/* Symbol: wlanoidQueryProcessAccessEfuseWrite */
/* Demangled: wlanoidQueryProcessAccessEfuseWrite */
int wlanoidQueryProcessAccessEfuseWrite(void);

/* Symbol: wlanoidQueryEfuseFreeBlock */
/* Demangled: wlanoidQueryEfuseFreeBlock */
int wlanoidQueryEfuseFreeBlock(void);

/* Symbol: wlanoidQueryGetTxPower */
/* Demangled: wlanoidQueryGetTxPower */
int wlanoidQueryGetTxPower(void);

/* Symbol: wlanoidQueryRxStatistics */
/* Demangled: wlanoidQueryRxStatistics */
int wlanoidQueryRxStatistics(void);

/* Symbol: nicCmdEventQueryRxStatistics */
/* Demangled: nicCmdEventQueryRxStatistics */
int nicCmdEventQueryRxStatistics(void);

/* Symbol: wlanoidStaRecUpdate */
/* Demangled: wlanoidStaRecUpdate */
int wlanoidStaRecUpdate(void);

/* Symbol: wlanoidStaRecBFUpdate */
/* Demangled: wlanoidStaRecBFUpdate */
int wlanoidStaRecBFUpdate(void);

/* Symbol: wlanoidBssInfoBasic */
/* Demangled: wlanoidBssInfoBasic */
int wlanoidBssInfoBasic(void);

/* Symbol: wlanoidDevInfoActive */
/* Demangled: wlanoidDevInfoActive */
int wlanoidDevInfoActive(void);

/* Symbol: wlanoidManualAssoc */
/* Demangled: wlanoidManualAssoc */
int wlanoidManualAssoc(void);

/* Symbol: wlanoidTxBfAction */
/* Demangled: wlanoidTxBfAction */
int wlanoidTxBfAction(void);

/* Symbol: rTxBfCmdDoneHandler */
/* Demangled: rTxBfCmdDoneHandler */
extern void* rTxBfCmdDoneHandler;

/* Symbol: wlanoidMuMimoAction */
/* Demangled: wlanoidMuMimoAction */
int wlanoidMuMimoAction(void);

/* Symbol: nicCmdEventGetCalcLq */
/* Demangled: nicCmdEventGetCalcLq */
int nicCmdEventGetCalcLq(void);

/* Symbol: nicCmdEventGetCalcInitMcs */
/* Demangled: nicCmdEventGetCalcInitMcs */
int nicCmdEventGetCalcInitMcs(void);

/* Symbol: nicCmdEventGetQd */
/* Demangled: nicCmdEventGetQd */
int nicCmdEventGetQd(void);

/* Symbol: swCrReadWriteCmd */
/* Demangled: swCrReadWriteCmd */
int swCrReadWriteCmd(void);

/* Symbol: nicCmdEventQueryMcrRead */
/* Demangled: nicCmdEventQueryMcrRead */
int nicCmdEventQueryMcrRead(void);

/* Symbol: kalDevRegWrite */
/* Demangled: kalDevRegWrite */
int kalDevRegWrite(void);

/* Symbol: nicpmSetAcpiPowerD3 */
/* Demangled: nicpmSetAcpiPowerD3 */
int nicpmSetAcpiPowerD3(void);

/* Symbol: kalSetSdioTestPattern */
/* Demangled: kalSetSdioTestPattern */
int kalSetSdioTestPattern(void);

/* Symbol: wlanoidQueryDrvMcrRead */
/* Demangled: wlanoidQueryDrvMcrRead */
int wlanoidQueryDrvMcrRead(void);

/* Symbol: wlanoidSetDrvMcrWrite */
/* Demangled: wlanoidSetDrvMcrWrite */
int wlanoidSetDrvMcrWrite(void);

/* Symbol: wlanoidQuerySwCtrlRead */
/* Demangled: wlanoidQuerySwCtrlRead */
int wlanoidQuerySwCtrlRead(void);

/* Symbol: qmDumpQueueStatus */
/* Demangled: qmDumpQueueStatus */
int qmDumpQueueStatus(void);

/* Symbol: cnmDumpMemoryStatus */
/* Demangled: cnmDumpMemoryStatus */
int cnmDumpMemoryStatus(void);

/* Symbol: nicCmdEventQuerySwCtrlRead */
/* Demangled: nicCmdEventQuerySwCtrlRead */
int nicCmdEventQuerySwCtrlRead(void);

/* Symbol: cnmDumpStaRec */
/* Demangled: cnmDumpStaRec */
int cnmDumpStaRec(void);

/* Symbol: bssDumpBssInfo */
/* Demangled: bssDumpBssInfo */
int bssDumpBssInfo(void);

/* Symbol: halDumpHifStatus */
/* Demangled: halDumpHifStatus */
int halDumpHifStatus(void);

/* Symbol: swCrDebugCheckEnable */
/* Demangled: swCrDebugCheckEnable */
int swCrDebugCheckEnable(void);

/* Symbol: rsnStartSaQuery */
/* Demangled: rsnStartSaQuery */
int rsnStartSaQuery(void);

/* Symbol: nicEnterCtiaMode */
/* Demangled: nicEnterCtiaMode */
int nicEnterCtiaMode(void);

/* Symbol: rlmDummyChangeOpHandler */
/* Demangled: rlmDummyChangeOpHandler */
int rlmDummyChangeOpHandler(void);

/* Symbol: rlmChangeOperationMode */
/* Demangled: rlmChangeOperationMode */
int rlmChangeOperationMode(void);

/* Symbol: rsnStopSaQuery */
/* Demangled: rsnStopSaQuery */
int rsnStopSaQuery(void);

/* Symbol: rsnSaQueryRequest */
/* Demangled: rsnSaQueryRequest */
int rsnSaQueryRequest(void);

/* Symbol: nicEnterCtiaModeOfScan */
/* Demangled: nicEnterCtiaModeOfScan */
int nicEnterCtiaModeOfScan(void);

/* Symbol: nicEnterCtiaModeOfRoaming */
/* Demangled: nicEnterCtiaModeOfRoaming */
int nicEnterCtiaModeOfRoaming(void);

/* Symbol: nicEnterCtiaModeOfCAM */
/* Demangled: nicEnterCtiaModeOfCAM */
int nicEnterCtiaModeOfCAM(void);

/* Symbol: nicEnterCtiaModeOfBCNTimeout */
/* Demangled: nicEnterCtiaModeOfBCNTimeout */
int nicEnterCtiaModeOfBCNTimeout(void);

/* Symbol: nicEnterCtiaModeOfAutoTxPower */
/* Demangled: nicEnterCtiaModeOfAutoTxPower */
int nicEnterCtiaModeOfAutoTxPower(void);

/* Symbol: nicEnterCtiaModeOfFIFOFullNoAck */
/* Demangled: nicEnterCtiaModeOfFIFOFullNoAck */
int nicEnterCtiaModeOfFIFOFullNoAck(void);

/* Symbol: p2pFuncRoleToBssIdx */
/* Demangled: p2pFuncRoleToBssIdx */
int p2pFuncRoleToBssIdx(void);

/* Symbol: wlanoidSetUApsdParam */
/* Demangled: wlanoidSetUApsdParam */
int wlanoidSetUApsdParam(void);

/* Symbol: wlanoidQueryChipConfig */
/* Demangled: wlanoidQueryChipConfig */
int wlanoidQueryChipConfig(void);

/* Symbol: nicCmdEventQueryChipConfig */
/* Demangled: nicCmdEventQueryChipConfig */
int nicCmdEventQueryChipConfig(void);

/* Symbol: wlanoidSetKeyCfg */
/* Demangled: wlanoidSetKeyCfg */
int wlanoidSetKeyCfg(void);

/* Symbol: wlanGetConfig */
/* Demangled: wlanGetConfig */
int wlanGetConfig(void);

/* Symbol: nicCmdEventQueryEepromRead */
/* Demangled: nicCmdEventQueryEepromRead */
int nicCmdEventQueryEepromRead(void);

/* Symbol: wlanoidQueryOidInterfaceVersion */
/* Demangled: wlanoidQueryOidInterfaceVersion */
int wlanoidQueryOidInterfaceVersion(void);

/* Symbol: wlanoidQueryMulticastList */
/* Demangled: wlanoidQueryMulticastList */
int wlanoidQueryMulticastList(void);

/* Symbol: wlanoidSetMulticastList */
/* Demangled: wlanoidSetMulticastList */
int wlanoidSetMulticastList(void);

/* Symbol: wlanoidRssiMonitor */
/* Demangled: wlanoidRssiMonitor */
int wlanoidRssiMonitor(void);

/* Symbol: wlanoidSetCurrentPacketFilter */
/* Demangled: wlanoidSetCurrentPacketFilter */
int wlanoidSetCurrentPacketFilter(void);

/* Symbol: wlanoidSetPacketFilter */
/* Demangled: wlanoidSetPacketFilter */
int wlanoidSetPacketFilter(void);

/* Symbol: wlanoidQueryCurrentPacketFilter */
/* Demangled: wlanoidQueryCurrentPacketFilter */
int wlanoidQueryCurrentPacketFilter(void);

/* Symbol: nicpmSetAcpiPowerD0 */
/* Demangled: nicpmSetAcpiPowerD0 */
int nicpmSetAcpiPowerD0(void);

/* Symbol: wlanoidQueryFragThreshold */
/* Demangled: wlanoidQueryFragThreshold */
int wlanoidQueryFragThreshold(void);

/* Symbol: wlanoidSetFragThreshold */
/* Demangled: wlanoidSetFragThreshold */
int wlanoidSetFragThreshold(void);

/* Symbol: wlanoidQueryRtsThreshold */
/* Demangled: wlanoidQueryRtsThreshold */
int wlanoidQueryRtsThreshold(void);

/* Symbol: wlanoidSetRtsThreshold */
/* Demangled: wlanoidSetRtsThreshold */
int wlanoidSetRtsThreshold(void);

/* Symbol: wlanoidSetDisassociate */
/* Demangled: wlanoidSetDisassociate */
int wlanoidSetDisassociate(void);

/* Symbol: wlanoidSet802dot11PowerSaveProfile */
/* Demangled: wlanoidSet802dot11PowerSaveProfile */
int wlanoidSet802dot11PowerSaveProfile(void);

/* Symbol: apucNetworkType */
/* Demangled: apucNetworkType */
extern void* apucNetworkType;

/* Symbol: wlanoidQueryAdHocMode */
/* Demangled: wlanoidQueryAdHocMode */
int wlanoidQueryAdHocMode(void);

/* Symbol: wlanoidSetAdHocMode */
/* Demangled: wlanoidSetAdHocMode */
int wlanoidSetAdHocMode(void);

/* Symbol: nicChannelNum2Freq */
/* Demangled: nicChannelNum2Freq */
int nicChannelNum2Freq(void);

/* Symbol: nicFreq2ChannelNum */
/* Demangled: nicFreq2ChannelNum */
int nicFreq2ChannelNum(void);

/* Symbol: wlanoidSetCurrentAddr */
/* Demangled: wlanoidSetCurrentAddr */
int wlanoidSetCurrentAddr(void);

/* Symbol: wlanoidSetCSUMOffload */
/* Demangled: wlanoidSetCSUMOffload */
int wlanoidSetCSUMOffload(void);

/* Symbol: wlanoidSetNetworkAddress */
/* Demangled: wlanoidSetNetworkAddress */
int wlanoidSetNetworkAddress(void);

/* Symbol: nicCmdEventSetIpAddress */
/* Demangled: nicCmdEventSetIpAddress */
int nicCmdEventSetIpAddress(void);

/* Symbol: nicCmdEventEnterRfTest */
/* Demangled: nicCmdEventEnterRfTest */
int nicCmdEventEnterRfTest(void);

/* Symbol: nicOidCmdEnterRFTestTimeout */
/* Demangled: nicOidCmdEnterRFTestTimeout */
int nicOidCmdEnterRFTestTimeout(void);

/* Symbol: wlanoidRftestSetTestIcapMode */
/* Demangled: wlanoidRftestSetTestIcapMode */
int wlanoidRftestSetTestIcapMode(void);

/* Symbol: nicCmdEventLeaveRfTest */
/* Demangled: nicCmdEventLeaveRfTest */
int nicCmdEventLeaveRfTest(void);

/* Symbol: rftestQueryATInfo */
/* Demangled: rftestQueryATInfo */
int rftestQueryATInfo(void);

/* Symbol: nicCmdEventQueryRfTestATInfo */
/* Demangled: nicCmdEventQueryRfTestATInfo */
int nicCmdEventQueryRfTestATInfo(void);

/* Symbol: rftestSetATInfo */
/* Demangled: rftestSetATInfo */
int rftestSetATInfo(void);

/* Symbol: wlanoidExtRfTestICapStart */
/* Demangled: wlanoidExtRfTestICapStart */
int wlanoidExtRfTestICapStart(void);

/* Symbol: wlanoidExtRfTestICapStatus */
/* Demangled: wlanoidExtRfTestICapStatus */
int wlanoidExtRfTestICapStatus(void);

/* Symbol: wlanoidRfTestICapRawDataProc */
/* Demangled: wlanoidRfTestICapRawDataProc */
int wlanoidRfTestICapRawDataProc(void);

/* Symbol: wlanoidRfTestICapGetIQData */
/* Demangled: wlanoidRfTestICapGetIQData */
int wlanoidRfTestICapGetIQData(void);

/* Symbol: rftestSetFrequency */
/* Demangled: rftestSetFrequency */
int rftestSetFrequency(void);

/* Symbol: wlanoidSetWapiMode */
/* Demangled: wlanoidSetWapiMode */
int wlanoidSetWapiMode(void);

/* Symbol: wlanoidSetWapiAssocInfo */
/* Demangled: wlanoidSetWapiAssocInfo */
int wlanoidSetWapiAssocInfo(void);

/* Symbol: wextSrchDesiredWAPIIE */
/* Demangled: wextSrchDesiredWAPIIE */
int wextSrchDesiredWAPIIE(void);

/* Symbol: wlanoidSetWapiKey */
/* Demangled: wlanoidSetWapiKey */
int wlanoidSetWapiKey(void);

/* Symbol: wlanoidSetWiFiWmmPsTest */
/* Demangled: wlanoidSetWiFiWmmPsTest */
int wlanoidSetWiFiWmmPsTest(void);

/* Symbol: nicCmdTimeoutCommon */
/* Demangled: nicCmdTimeoutCommon */
int nicCmdTimeoutCommon(void);

/* Symbol: wlanoidSetTxAmpdu */
/* Demangled: wlanoidSetTxAmpdu */
int wlanoidSetTxAmpdu(void);

/* Symbol: wlanoidSetAddbaReject */
/* Demangled: wlanoidSetAddbaReject */
int wlanoidSetAddbaReject(void);

/* Symbol: wlanoidQueryNvramRead */
/* Demangled: wlanoidQueryNvramRead */
int wlanoidQueryNvramRead(void);

/* Symbol: kalCfgDataRead16 */
/* Demangled: kalCfgDataRead16 */
int kalCfgDataRead16(void);

/* Symbol: wlanoidSetNvramWrite */
/* Demangled: wlanoidSetNvramWrite */
int wlanoidSetNvramWrite(void);

/* Symbol: kalCfgDataWrite8 */
/* Demangled: kalCfgDataWrite8 */
int kalCfgDataWrite8(void);

/* Symbol: kalCfgDataWrite16 */
/* Demangled: kalCfgDataWrite16 */
int kalCfgDataWrite16(void);

/* Symbol: wlanoidQueryCfgSrcType */
/* Demangled: wlanoidQueryCfgSrcType */
int wlanoidQueryCfgSrcType(void);

/* Symbol: wlanoidQueryEepromType */
/* Demangled: wlanoidQueryEepromType */
int wlanoidQueryEepromType(void);

/* Symbol: wlanoidSetCountryCode */
/* Demangled: wlanoidSetCountryCode */
int wlanoidSetCountryCode(void);

/* Symbol: wlanUpdateDfsChannelTable */
/* Demangled: wlanUpdateDfsChannelTable */
int wlanUpdateDfsChannelTable(void);

/* Symbol: wlanoidSetScanMacOui */
/* Demangled: wlanoidSetScanMacOui */
int wlanoidSetScanMacOui(void);

/* Symbol: wlanoidSetBT */
/* Demangled: wlanoidSetBT */
int wlanoidSetBT(void);

/* Symbol: wlanoidQueryBT */
/* Demangled: wlanoidQueryBT */
int wlanoidQueryBT(void);

/* Symbol: wlanoidSetTxPower */
/* Demangled: wlanoidSetTxPower */
int wlanoidSetTxPower(void);

/* Symbol: wlanSendMemDumpCmd */
/* Demangled: wlanSendMemDumpCmd */
int wlanSendMemDumpCmd(void);

/* Symbol: nicCmdEventQueryMemDump */
/* Demangled: nicCmdEventQueryMemDump */
int nicCmdEventQueryMemDump(void);

/* Symbol: wlanoidQueryMemDump */
/* Demangled: wlanoidQueryMemDump */
int wlanoidQueryMemDump(void);

/* Symbol: wlanoidSetP2pMode */
/* Demangled: wlanoidSetP2pMode */
int wlanoidSetP2pMode(void);

/* Symbol: p2pSetMode */
/* Demangled: p2pSetMode */
int p2pSetMode(void);

/* Symbol: p2pLaunch */
/* Demangled: p2pLaunch */
int p2pLaunch(void);

/* Symbol: p2pRemove */
/* Demangled: p2pRemove */
int p2pRemove(void);

/* Symbol: wlanoidSetGtkRekeyData */
/* Demangled: wlanoidSetGtkRekeyData */
int wlanoidSetGtkRekeyData(void);

/* Symbol: wlanoidSetStartSchedScan */
/* Demangled: wlanoidSetStartSchedScan */
int wlanoidSetStartSchedScan(void);

/* Symbol: scnFsmSchedScanRequest */
/* Demangled: scnFsmSchedScanRequest */
int scnFsmSchedScanRequest(void);

/* Symbol: wlanoidSetStopSchedScan */
/* Demangled: wlanoidSetStopSchedScan */
int wlanoidSetStopSchedScan(void);

/* Symbol: scnFsmSchedScanStopRequest */
/* Demangled: scnFsmSchedScanStopRequest */
int scnFsmSchedScanStopRequest(void);

/* Symbol: wlanoidSetMonitor */
/* Demangled: wlanoidSetMonitor */
int wlanoidSetMonitor(void);

/* Symbol: wlanoidQueryWlanInfo */
/* Demangled: wlanoidQueryWlanInfo */
int wlanoidQueryWlanInfo(void);

/* Symbol: wlanQueryWlanInfo */
/* Demangled: wlanQueryWlanInfo */
int wlanQueryWlanInfo(void);

/* Symbol: nicCmdEventQueryWlanInfo */
/* Demangled: nicCmdEventQueryWlanInfo */
int nicCmdEventQueryWlanInfo(void);

/* Symbol: wlanoidQueryMibInfo */
/* Demangled: wlanoidQueryMibInfo */
int wlanoidQueryMibInfo(void);

/* Symbol: wlanQueryMibInfo */
/* Demangled: wlanQueryMibInfo */
int wlanQueryMibInfo(void);

/* Symbol: nicCmdEventQueryMibInfo */
/* Demangled: nicCmdEventQueryMibInfo */
int nicCmdEventQueryMibInfo(void);

/* Symbol: wlanoidSetFwLog2Host */
/* Demangled: wlanoidSetFwLog2Host */
int wlanoidSetFwLog2Host(void);

/* Symbol: wlanoidQueryCnm */
/* Demangled: wlanoidQueryCnm */
int wlanoidQueryCnm(void);

/* Symbol: nicCmdEventQueryCnmInfo */
/* Demangled: nicCmdEventQueryCnmInfo */
int nicCmdEventQueryCnmInfo(void);

/* Symbol: wlanoidPacketKeepAlive */
/* Demangled: wlanoidPacketKeepAlive */
int wlanoidPacketKeepAlive(void);

/* Symbol: wlanoidSetDbdcEnable */
/* Demangled: wlanoidSetDbdcEnable */
int wlanoidSetDbdcEnable(void);

/* Symbol: cnmUpdateDbdcSetting */
/* Demangled: cnmUpdateDbdcSetting */
int cnmUpdateDbdcSetting(void);

/* Symbol: wlanoidQuerySetTxTargetPower */
/* Demangled: wlanoidQuerySetTxTargetPower */
int wlanoidQuerySetTxTargetPower(void);

/* Symbol: wlanoidQuerySetRddReport */
/* Demangled: wlanoidQuerySetRddReport */
int wlanoidQuerySetRddReport(void);

/* Symbol: wlanoidQuerySetRadarDetectMode */
/* Demangled: wlanoidQuerySetRadarDetectMode */
int wlanoidQuerySetRadarDetectMode(void);

/* Symbol: wlanoidLinkDown */
/* Demangled: wlanoidLinkDown */
int wlanoidLinkDown(void);

/* Symbol: aisBssLinkDown */
/* Demangled: aisBssLinkDown */
int aisBssLinkDown(void);

/* Symbol: wlanoidSetFwParam */
/* Demangled: wlanoidSetFwParam */
int wlanoidSetFwParam(void);

/* Symbol: wlanoidAddRoamScnChnl */
/* Demangled: wlanoidAddRoamScnChnl */
int wlanoidAddRoamScnChnl(void);

/* Symbol: wlanoidAbortScan */
/* Demangled: wlanoidAbortScan */
int wlanoidAbortScan(void);

/* Symbol: aisFsmStateAbort_SCAN */
/* Demangled: aisFsmStateAbort_SCAN */
int aisFsmStateAbort_SCAN(void);

/* Symbol: wlanoidDisableTdlsPs */
/* Demangled: wlanoidDisableTdlsPs */
int wlanoidDisableTdlsPs(void);

/* Symbol: wlanoidSetSer */
/* Demangled: wlanoidSetSer */
int wlanoidSetSer(void);

/* Symbol: wlanoidSerExtCmd */
/* Demangled: wlanoidSerExtCmd */
int wlanoidSerExtCmd(void);

/* Symbol: wlanoidQueryTxPowerInfo */
/* Demangled: wlanoidQueryTxPowerInfo */
int wlanoidQueryTxPowerInfo(void);

/* Symbol: nicCmdEventQueryTxPowerInfo */
/* Demangled: nicCmdEventQueryTxPowerInfo */
int nicCmdEventQueryTxPowerInfo(void);

/* Symbol: wlanoidSetTxPowerByRateManual */
/* Demangled: wlanoidSetTxPowerByRateManual */
int wlanoidSetTxPowerByRateManual(void);

/* Symbol: wlanoidBssDisallowedList */
/* Demangled: wlanoidBssDisallowedList */
int wlanoidBssDisallowedList(void);

/* Symbol: wlanoidSetDrvRoamingPolicy */
/* Demangled: wlanoidSetDrvRoamingPolicy */
int wlanoidSetDrvRoamingPolicy(void);

/* Symbol: aisGetRoamingInfo */
/* Demangled: aisGetRoamingInfo */
int aisGetRoamingInfo(void);

/* Symbol: aisGetCurrState */
/* Demangled: aisGetCurrState */
int aisGetCurrState(void);

/* Symbol: roamingFsmRunEventStart */
/* Demangled: roamingFsmRunEventStart */
int roamingFsmRunEventStart(void);

/* Symbol: roamingFsmRunEventAbort */
/* Demangled: roamingFsmRunEventAbort */
int roamingFsmRunEventAbort(void);

/* Symbol: wlanoidUpdateFtIes */
/* Demangled: wlanoidUpdateFtIes */
int wlanoidUpdateFtIes(void);

/* Symbol: aisGetTargetStaRec */
/* Demangled: aisGetTargetStaRec */
int aisGetTargetStaRec(void);

/* Symbol: aisGetFtIe */
/* Demangled: aisGetFtIe */
int aisGetFtIe(void);

/* Symbol: wlanoidSendNeighborRequest */
/* Demangled: wlanoidSendNeighborRequest */
int wlanoidSendNeighborRequest(void);

/* Symbol: rrmTxNeighborReportRequest */
/* Demangled: rrmTxNeighborReportRequest */
int rrmTxNeighborReportRequest(void);

/* Symbol: wlanoidSync11kCapabilities */
/* Demangled: wlanoidSync11kCapabilities */
int wlanoidSync11kCapabilities(void);

/* Symbol: rrmFillRrmCapa */
/* Demangled: rrmFillRrmCapa */
int rrmFillRrmCapa(void);

/* Symbol: wlanoidSendBTMQuery */
/* Demangled: wlanoidSendBTMQuery */
int wlanoidSendBTMQuery(void);

/* Symbol: aisGetBTMParam */
/* Demangled: aisGetBTMParam */
int aisGetBTMParam(void);

/* Symbol: wnmGetBtmToken */
/* Demangled: wnmGetBtmToken */
int wnmGetBtmToken(void);

/* Symbol: wnmSendBTMQueryFrame */
/* Demangled: wnmSendBTMQueryFrame */
int wnmSendBTMQueryFrame(void);

/* Symbol: wlanoidTspecOperation */
/* Demangled: wlanoidTspecOperation */
int wlanoidTspecOperation(void);

/* Symbol: wmmDumpActiveTspecs */
/* Demangled: wmmDumpActiveTspecs */
int wmmDumpActiveTspecs(void);

/* Symbol: aucUp2ACIMap */
/* Demangled: aucUp2ACIMap */
extern void* aucUp2ACIMap;

/* Symbol: wlanoidPktProcessIT */
/* Demangled: wlanoidPktProcessIT */
int wlanoidPktProcessIT(void);

/* Symbol: rrmProcessRadioMeasurementRequest */
/* Demangled: rrmProcessRadioMeasurementRequest */
int rrmProcessRadioMeasurementRequest(void);

/* Symbol: wnmRecvBTMRequest */
/* Demangled: wnmRecvBTMRequest */
int wnmRecvBTMRequest(void);

/* Symbol: aisBssBeaconTimeout */
/* Demangled: aisBssBeaconTimeout */
int aisBssBeaconTimeout(void);

/* Symbol: wnmWNMAction */
/* Demangled: wnmWNMAction */
int wnmWNMAction(void);

/* Symbol: wlanoidFwEventIT */
/* Demangled: wlanoidFwEventIT */
int wlanoidFwEventIT(void);

/* Symbol: roamingFsmRunEventDiscovery */
/* Demangled: roamingFsmRunEventDiscovery */
int roamingFsmRunEventDiscovery(void);

/* Symbol: wlanoidDumpUapsdSetting */
/* Demangled: wlanoidDumpUapsdSetting */
int wlanoidDumpUapsdSetting(void);

/* Symbol: wmmCalculateUapsdSetting */
/* Demangled: wmmCalculateUapsdSetting */
int wmmCalculateUapsdSetting(void);

/* Symbol: wlanoidSetOshareMode */
/* Demangled: wlanoidSetOshareMode */
int wlanoidSetOshareMode(void);

/* Symbol: wlanoidQueryWifiLogLevelSupport */
/* Demangled: wlanoidQueryWifiLogLevelSupport */
int wlanoidQueryWifiLogLevelSupport(void);

/* Symbol: wlanDbgLevelUiSupport */
/* Demangled: wlanDbgLevelUiSupport */
int wlanDbgLevelUiSupport(void);

/* Symbol: wlanoidQueryWifiLogLevel */
/* Demangled: wlanoidQueryWifiLogLevel */
int wlanoidQueryWifiLogLevel(void);

/* Symbol: wlanDbgGetLogLevelImpl */
/* Demangled: wlanDbgGetLogLevelImpl */
int wlanDbgGetLogLevelImpl(void);

/* Symbol: wlanoidSetWifiLogLevel */
/* Demangled: wlanoidSetWifiLogLevel */
int wlanoidSetWifiLogLevel(void);

/* Symbol: wlanDbgSetLogLevelImpl */
/* Demangled: wlanDbgSetLogLevelImpl */
int wlanDbgSetLogLevelImpl(void);

/* Symbol: wlanoidSetDrvSer */
/* Demangled: wlanoidSetDrvSer */
int wlanoidSetDrvSer(void);

/* Symbol: wlanoidSetAmsduNum */
/* Demangled: wlanoidSetAmsduNum */
int wlanoidSetAmsduNum(void);

/* Symbol: wlanoidSetAmsduSize */
/* Demangled: wlanoidSetAmsduSize */
int wlanoidSetAmsduSize(void);

/* Symbol: wlanoidShowPdmaInfo */
/* Demangled: wlanoidShowPdmaInfo */
int wlanoidShowPdmaInfo(void);

/* Symbol: wlanoidShowPseInfo */
/* Demangled: wlanoidShowPseInfo */
int wlanoidShowPseInfo(void);

/* Symbol: wlanoidShowPleInfo */
/* Demangled: wlanoidShowPleInfo */
int wlanoidShowPleInfo(void);

/* Symbol: wlanoidShowCsrInfo */
/* Demangled: wlanoidShowCsrInfo */
int wlanoidShowCsrInfo(void);

/* Symbol: wlanoidShowDmaschInfo */
/* Demangled: wlanoidShowDmaschInfo */
int wlanoidShowDmaschInfo(void);

/* Symbol: wlanoidSetLowLatencyMode */
/* Demangled: wlanoidSetLowLatencyMode */
int wlanoidSetLowLatencyMode(void);

/* Symbol: wlanoidGetWifiType */
/* Demangled: wlanoidGetWifiType */
int wlanoidGetWifiType(void);

/* Symbol: wlanoidGetLinkQualityInfo */
/* Demangled: wlanoidGetLinkQualityInfo */
int wlanoidGetLinkQualityInfo(void);

/* Symbol: wlanoidQueryAntennaSwap */
/* Demangled: wlanoidQueryAntennaSwap */
int wlanoidQueryAntennaSwap(void);

/* Symbol: wlanoidTxPowerControl */
/* Demangled: wlanoidTxPowerControl */
int wlanoidTxPowerControl(void);

/* Symbol: txPwrCtrlFindElement */
/* Demangled: txPwrCtrlFindElement */
int txPwrCtrlFindElement(void);

/* Symbol: txPwrCtrlStringToStruct */
/* Demangled: txPwrCtrlStringToStruct */
int txPwrCtrlStringToStruct(void);

/* Symbol: txPwrCtrlDeleteElement */
/* Demangled: txPwrCtrlDeleteElement */
int txPwrCtrlDeleteElement(void);

/* Symbol: txPwrCtrlAddElement */
/* Demangled: txPwrCtrlAddElement */
int txPwrCtrlAddElement(void);

/* Symbol: rlmDomainSendPwrLimitCmd */
/* Demangled: rlmDomainSendPwrLimitCmd */
int rlmDomainSendPwrLimitCmd(void);

/* Symbol: wlanoidExternalAuthDone */
/* Demangled: wlanoidExternalAuthDone */
int wlanoidExternalAuthDone(void);

/* Symbol: wlanoidIndicateBssInfo */
/* Demangled: wlanoidIndicateBssInfo */
int wlanoidIndicateBssInfo(void);

/* Symbol: kalIndicateBssInfo */
/* Demangled: kalIndicateBssInfo */
int kalIndicateBssInfo(void);

/* Symbol: nicCmdEventPfmuTagRead */
/* Demangled: nicCmdEventPfmuTagRead */
int nicCmdEventPfmuTagRead(void);

/* Symbol: nicCmdEventPfmuDataRead */
/* Demangled: nicCmdEventPfmuDataRead */
int nicCmdEventPfmuDataRead(void);

/* Symbol: wlanDebugTC4Init */
/* Demangled: wlanDebugTC4Init */
int wlanDebugTC4Init(void);

/* Symbol: wlanDebugTC4Uninit */
/* Demangled: wlanDebugTC4Uninit */
int wlanDebugTC4Uninit(void);

/* Symbol: wlanTraceTxCmd */
/* Demangled: wlanTraceTxCmd */
int wlanTraceTxCmd(void);

/* Symbol: wlanTraceReleaseTcRes */
/* Demangled: wlanTraceReleaseTcRes */
int wlanTraceReleaseTcRes(void);

/* Symbol: wlanDumpTcResAndTxedCmd */
/* Demangled: wlanDumpTcResAndTxedCmd */
int wlanDumpTcResAndTxedCmd(void);

/* Symbol: wlanWakeStaticsInit */
/* Demangled: wlanWakeStaticsInit */
int wlanWakeStaticsInit(void);

/* Symbol: wlanWakeStaticsUninit */
/* Demangled: wlanWakeStaticsUninit */
int wlanWakeStaticsUninit(void);

/* Symbol: wlan_fb_power_down */
/* Demangled: wlan_fb_power_down */
extern void* wlan_fb_power_down;

/* Symbol: wlanWakeLogEvent */
/* Demangled: wlanWakeLogEvent */
int wlanWakeLogEvent(void);

/* Symbol: wlanLogTxData */
/* Demangled: wlanLogTxData */
int wlanLogTxData(void);

/* Symbol: wlanLogRxData */
/* Demangled: wlanLogRxData */
int wlanLogRxData(void);

/* Symbol: wlanWakeDumpRes */
/* Demangled: wlanWakeDumpRes */
int wlanWakeDumpRes(void);

/* Symbol: au4LogLevel */
/* Demangled: au4LogLevel */
extern void* au4LogLevel;

/* Symbol: wlanDriverDbgLevelSync */
/* Demangled: wlanDriverDbgLevelSync */
int wlanDriverDbgLevelSync(void);

/* Symbol: wlanGetDriverDbgLevel */
/* Demangled: wlanGetDriverDbgLevel */
int wlanGetDriverDbgLevel(void);

/* Symbol: wlanDbgGetGlobalLogLevel */
/* Demangled: wlanDbgGetGlobalLogLevel */
int wlanDbgGetGlobalLogLevel(void);

/* Symbol: wlanDbgSetGlobalLogLevel */
/* Demangled: wlanDbgSetGlobalLogLevel */
int wlanDbgSetGlobalLogLevel(void);

/* Symbol: wlanPrintFwLog */
/* Demangled: wlanPrintFwLog */
int wlanPrintFwLog(void);

/* Symbol: wlanFillTimestamp */
/* Demangled: wlanFillTimestamp */
int wlanFillTimestamp(void);

/* Symbol: wlanoidSendSetQueryP2PCmd */
/* Demangled: wlanoidSendSetQueryP2PCmd */
int wlanoidSendSetQueryP2PCmd(void);

/* Symbol: wlanoidSetP2pNetworkAddress */
/* Demangled: wlanoidSetP2pNetworkAddress */
int wlanoidSetP2pNetworkAddress(void);

/* Symbol: wlanoidQueryP2pPowerSaveProfile */
/* Demangled: wlanoidQueryP2pPowerSaveProfile */
int wlanoidQueryP2pPowerSaveProfile(void);

/* Symbol: wlanoidSetP2pPowerSaveProfile */
/* Demangled: wlanoidSetP2pPowerSaveProfile */
int wlanoidSetP2pPowerSaveProfile(void);

/* Symbol: wlanoidSetP2pSetNetworkAddress */
/* Demangled: wlanoidSetP2pSetNetworkAddress */
int wlanoidSetP2pSetNetworkAddress(void);

/* Symbol: wlanoidSetP2PMulticastList */
/* Demangled: wlanoidSetP2PMulticastList */
int wlanoidSetP2PMulticastList(void);

/* Symbol: wlanoidSendP2PSDRequest */
/* Demangled: wlanoidSendP2PSDRequest */
int wlanoidSendP2PSDRequest(void);

/* Symbol: wlanoidSendP2PSDResponse */
/* Demangled: wlanoidSendP2PSDResponse */
int wlanoidSendP2PSDResponse(void);

/* Symbol: wlanoidGetP2PSDRequest */
/* Demangled: wlanoidGetP2PSDRequest */
int wlanoidGetP2PSDRequest(void);

/* Symbol: wlanoidGetP2PSDResponse */
/* Demangled: wlanoidGetP2PSDResponse */
int wlanoidGetP2PSDResponse(void);

/* Symbol: wlanoidSetP2PTerminateSDPhase */
/* Demangled: wlanoidSetP2PTerminateSDPhase */
int wlanoidSetP2PTerminateSDPhase(void);

/* Symbol: wlanoidSetSecCheckRequest */
/* Demangled: wlanoidSetSecCheckRequest */
int wlanoidSetSecCheckRequest(void);

/* Symbol: wlanoidSetNoaParam */
/* Demangled: wlanoidSetNoaParam */
int wlanoidSetNoaParam(void);

/* Symbol: wlanoidSetOppPsParam */
/* Demangled: wlanoidSetOppPsParam */
int wlanoidSetOppPsParam(void);

/* Symbol: wlanoidQueryP2pVersion */
/* Demangled: wlanoidQueryP2pVersion */
int wlanoidQueryP2pVersion(void);

/* Symbol: wlanoidSetP2pWPSmode */
/* Demangled: wlanoidSetP2pWPSmode */
int wlanoidSetP2pWPSmode(void);

/* Symbol: nicUpdateBss */
/* Demangled: nicUpdateBss */
int nicUpdateBss(void);

/* Symbol: wlanoidSetP2pSupplicantVersion */
/* Demangled: wlanoidSetP2pSupplicantVersion */
int wlanoidSetP2pSupplicantVersion(void);

/* Symbol: wlanoidAbortP2pScan */
/* Demangled: wlanoidAbortP2pScan */
int wlanoidAbortP2pScan(void);

/* Symbol: p2pDevFsmRunEventScanAbort */
/* Demangled: p2pDevFsmRunEventScanAbort */
int p2pDevFsmRunEventScanAbort(void);

/* Symbol: halGetValidCoalescingBufSize */
/* Demangled: halGetValidCoalescingBufSize */
int halGetValidCoalescingBufSize(void);

/* Symbol: kalAllocateIOBuffer */
/* Demangled: kalAllocateIOBuffer */
int kalAllocateIOBuffer(void);

/* Symbol: halAllocateIOBuffer */
/* Demangled: halAllocateIOBuffer */
int halAllocateIOBuffer(void);

/* Symbol: halReleaseIOBuffer */
/* Demangled: halReleaseIOBuffer */
int halReleaseIOBuffer(void);

/* Symbol: kalReleaseIOBuffer */
/* Demangled: kalReleaseIOBuffer */
int kalReleaseIOBuffer(void);

/* Symbol: nicTxFreeDescTemplate */
/* Demangled: nicTxFreeDescTemplate */
int nicTxFreeDescTemplate(void);

/* Symbol: halDisableInterrupt */
/* Demangled: halDisableInterrupt */
int halDisableInterrupt(void);

/* Symbol: halEnableInterrupt */
/* Demangled: halEnableInterrupt */
int halEnableInterrupt(void);

/* Symbol: nicProcessISTWithSpecifiedCount */
/* Demangled: nicProcessISTWithSpecifiedCount */
int nicProcessISTWithSpecifiedCount(void);

/* Symbol: nicProcessIST_impl */
/* Demangled: nicProcessIST_impl */
int nicProcessIST_impl(void);

/* Symbol: kalDevReadIntStatus */
/* Demangled: kalDevReadIntStatus */
int kalDevReadIntStatus(void);

/* Symbol: nicProcessRxInterrupt */
/* Demangled: nicProcessRxInterrupt */
int nicProcessRxInterrupt(void);

/* Symbol: nicProcessAbnormalInterrupt */
/* Demangled: nicProcessAbnormalInterrupt */
int nicProcessAbnormalInterrupt(void);

/* Symbol: halProcessSoftwareInterrupt */
/* Demangled: halProcessSoftwareInterrupt */
int halProcessSoftwareInterrupt(void);

/* Symbol: nicProcessTxInterrupt */
/* Demangled: nicProcessTxInterrupt */
int nicProcessTxInterrupt(void);

/* Symbol: nicVerifyChipID */
/* Demangled: nicVerifyChipID */
int nicVerifyChipID(void);

/* Symbol: halVerifyChipID */
/* Demangled: halVerifyChipID */
int halVerifyChipID(void);

/* Symbol: nicMCRInit */
/* Demangled: nicMCRInit */
int nicMCRInit(void);

/* Symbol: nicHifInit */
/* Demangled: nicHifInit */
int nicHifInit(void);

/* Symbol: halProcessAbnormalInterrupt */
/* Demangled: halProcessAbnormalInterrupt */
int halProcessAbnormalInterrupt(void);

/* Symbol: nicProcessFwOwnBackInterrupt */
/* Demangled: nicProcessFwOwnBackInterrupt */
int nicProcessFwOwnBackInterrupt(void);

/* Symbol: nicProcessSoftwareInterrupt */
/* Demangled: nicProcessSoftwareInterrupt */
int nicProcessSoftwareInterrupt(void);

/* Symbol: nicSetSwIntr */
/* Demangled: nicSetSwIntr */
int nicSetSwIntr(void);

/* Symbol: nicGetPendingCmdInfo */
/* Demangled: nicGetPendingCmdInfo */
int nicGetPendingCmdInfo(void);

/* Symbol: nicGetPendingTxMsduInfo */
/* Demangled: nicGetPendingTxMsduInfo */
int nicGetPendingTxMsduInfo(void);

/* Symbol: nicFreePendingTxMsduInfo */
/* Demangled: nicFreePendingTxMsduInfo */
int nicFreePendingTxMsduInfo(void);

/* Symbol: nicIncreaseCmdSeqNum */
/* Demangled: nicIncreaseCmdSeqNum */
int nicIncreaseCmdSeqNum(void);

/* Symbol: nicIncreaseTxSeqNum */
/* Demangled: nicIncreaseTxSeqNum */
int nicIncreaseTxSeqNum(void);

/* Symbol: nicMediaStateChange */
/* Demangled: nicMediaStateChange */
int nicMediaStateChange(void);

/* Symbol: nicMediaJoinFailure */
/* Demangled: nicMediaJoinFailure */
int nicMediaJoinFailure(void);

/* Symbol: nicGetVhtS1 */
/* Demangled: nicGetVhtS1 */
int nicGetVhtS1(void);

/* Symbol: nicActivateNetwork */
/* Demangled: nicActivateNetwork */
int nicActivateNetwork(void);

/* Symbol: nicDeactivateNetwork */
/* Demangled: nicDeactivateNetwork */
int nicDeactivateNetwork(void);

/* Symbol: secRemoveBssBcEntry */
/* Demangled: secRemoveBssBcEntry */
int secRemoveBssBcEntry(void);

/* Symbol: cnmStaFreeAllStaByNetwork */
/* Demangled: cnmStaFreeAllStaByNetwork */
int cnmStaFreeAllStaByNetwork(void);

/* Symbol: qmFreeAllByBssIdx */
/* Demangled: qmFreeAllByBssIdx */
int qmFreeAllByBssIdx(void);

/* Symbol: kalClearSecurityFramesByBssIdx */
/* Demangled: kalClearSecurityFramesByBssIdx */
int kalClearSecurityFramesByBssIdx(void);

/* Symbol: cnmFreeWmmIndex */
/* Demangled: cnmFreeWmmIndex */
int cnmFreeWmmIndex(void);

/* Symbol: rlmFillSyncCmdParam */
/* Demangled: rlmFillSyncCmdParam */
int rlmFillSyncCmdParam(void);

/* Symbol: kalP2PGetCcmpCipher */
/* Demangled: kalP2PGetCcmpCipher */
int kalP2PGetCcmpCipher(void);

/* Symbol: kalP2PGetTkipCipher */
/* Demangled: kalP2PGetTkipCipher */
int kalP2PGetTkipCipher(void);

/* Symbol: kalP2PGetWepCipher */
/* Demangled: kalP2PGetWepCipher */
int kalP2PGetWepCipher(void);

/* Symbol: bssInitializeClientList */
/* Demangled: bssInitializeClientList */
int bssInitializeClientList(void);

/* Symbol: cnmDbdcRuntimeCheckDecision */
/* Demangled: cnmDbdcRuntimeCheckDecision */
int cnmDbdcRuntimeCheckDecision(void);

/* Symbol: cnmAisInfraConnectNotify */
/* Demangled: cnmAisInfraConnectNotify */
int cnmAisInfraConnectNotify(void);

/* Symbol: nicPmIndicateBssCreated */
/* Demangled: nicPmIndicateBssCreated */
int nicPmIndicateBssCreated(void);

/* Symbol: nicPmIndicateBssConnected */
/* Demangled: nicPmIndicateBssConnected */
int nicPmIndicateBssConnected(void);

/* Symbol: nicPmIndicateBssAbort */
/* Demangled: nicPmIndicateBssAbort */
int nicPmIndicateBssAbort(void);

/* Symbol: nicPowerSaveInfoMap */
/* Demangled: nicPowerSaveInfoMap */
int nicPowerSaveInfoMap(void);

/* Symbol: nicConfigProcSetCamCfgWrite */
/* Demangled: nicConfigProcSetCamCfgWrite */
int nicConfigProcSetCamCfgWrite(void);

/* Symbol: nicEnterTPTestMode */
/* Demangled: nicEnterTPTestMode */
int nicEnterTPTestMode(void);

/* Symbol: nicUpdateBeaconIETemplate */
/* Demangled: nicUpdateBeaconIETemplate */
int nicUpdateBeaconIETemplate(void);

/* Symbol: aucPhyCfg2PhyTypeSet */
/* Demangled: aucPhyCfg2PhyTypeSet */
extern void* aucPhyCfg2PhyTypeSet;

/* Symbol: nicQmUpdateWmmParms */
/* Demangled: nicQmUpdateWmmParms */
int nicQmUpdateWmmParms(void);

/* Symbol: nicUpdateTxPower */
/* Demangled: nicUpdateTxPower */
int nicUpdateTxPower(void);

/* Symbol: nicSetAutoTxPower */
/* Demangled: nicSetAutoTxPower */
int nicSetAutoTxPower(void);

/* Symbol: nicSetAutoTxPowerControl */
/* Demangled: nicSetAutoTxPowerControl */
int nicSetAutoTxPowerControl(void);

/* Symbol: nicUpdate5GOffset */
/* Demangled: nicUpdate5GOffset */
int nicUpdate5GOffset(void);

/* Symbol: nicUpdateDPD */
/* Demangled: nicUpdateDPD */
int nicUpdateDPD(void);

/* Symbol: cmdBufInitialize */
/* Demangled: cmdBufInitialize */
int cmdBufInitialize(void);

/* Symbol: cnmMemInit */
/* Demangled: cnmMemInit */
int cnmMemInit(void);

/* Symbol: cnmStaRecInit */
/* Demangled: cnmStaRecInit */
int cnmStaRecInit(void);

/* Symbol: mboxInitialize */
/* Demangled: mboxInitialize */
int mboxInitialize(void);

/* Symbol: cnmTimerInitialize */
/* Demangled: cnmTimerInitialize */
int cnmTimerInitialize(void);

/* Symbol: nicResetSystemService */
/* Demangled: nicResetSystemService */
int nicResetSystemService(void);

/* Symbol: cnmTimerDestroy */
/* Demangled: cnmTimerDestroy */
int cnmTimerDestroy(void);

/* Symbol: mboxDestroy */
/* Demangled: mboxDestroy */
int mboxDestroy(void);

/* Symbol: cnmInit */
/* Demangled: cnmInit */
int cnmInit(void);

/* Symbol: wmmInit */
/* Demangled: wmmInit */
int wmmInit(void);

/* Symbol: rlmFsmEventInit */
/* Demangled: rlmFsmEventInit */
int rlmFsmEventInit(void);

/* Symbol: scnInit */
/* Demangled: scnInit */
int scnInit(void);

/* Symbol: aisFsmInit */
/* Demangled: aisFsmInit */
int aisFsmInit(void);

/* Symbol: aisInitializeConnectionSettings */
/* Demangled: aisInitializeConnectionSettings */
int aisInitializeConnectionSettings(void);

/* Symbol: roamingFsmInit */
/* Demangled: roamingFsmInit */
int roamingFsmInit(void);

/* Symbol: swCrDebugInit */
/* Demangled: swCrDebugInit */
int swCrDebugInit(void);

/* Symbol: swCrDebugUninit */
/* Demangled: swCrDebugUninit */
int swCrDebugUninit(void);

/* Symbol: roamingFsmUninit */
/* Demangled: roamingFsmUninit */
int roamingFsmUninit(void);

/* Symbol: aisFsmUninit */
/* Demangled: aisFsmUninit */
int aisFsmUninit(void);

/* Symbol: scnUninit */
/* Demangled: scnUninit */
int scnUninit(void);

/* Symbol: wmmUnInit */
/* Demangled: wmmUnInit */
int wmmUnInit(void);

/* Symbol: rlmFsmEventUninit */
/* Demangled: rlmFsmEventUninit */
int rlmFsmEventUninit(void);

/* Symbol: cnmUninit */
/* Demangled: cnmUninit */
int cnmUninit(void);

/* Symbol: nicAddScanResult */
/* Demangled: nicAddScanResult */
int nicAddScanResult(void);

/* Symbol: nicFreeScanResultIE */
/* Demangled: nicFreeScanResultIE */
int nicFreeScanResultIE(void);

/* Symbol: nicUpdateRateParams */
/* Demangled: nicUpdateRateParams */
int nicUpdateRateParams(void);

/* Symbol: nicWriteMcr */
/* Demangled: nicWriteMcr */
int nicWriteMcr(void);

/* Symbol: nicRlmArUpdateParms */
/* Demangled: nicRlmArUpdateParms */
int nicRlmArUpdateParms(void);

/* Symbol: nicUpdateLinkQuality */
/* Demangled: nicUpdateLinkQuality */
int nicUpdateLinkQuality(void);

/* Symbol: kalUpdateRSSI */
/* Demangled: kalUpdateRSSI */
int kalUpdateRSSI(void);

/* Symbol: nicUpdateRSSI */
/* Demangled: nicUpdateRSSI */
int nicUpdateRSSI(void);

/* Symbol: nicUpdateLinkSpeed */
/* Demangled: nicUpdateLinkSpeed */
int nicUpdateLinkSpeed(void);

/* Symbol: kalUpdateMACAddress */
/* Demangled: kalUpdateMACAddress */
int kalUpdateMACAddress(void);

/* Symbol: nicGetChipHwVer */
/* Demangled: nicGetChipHwVer */
int nicGetChipHwVer(void);

/* Symbol: g_eco_info */
/* Demangled: g_eco_info */
extern void* g_eco_info;

/* Symbol: nicGetChipSwVer */
/* Demangled: nicGetChipSwVer */
int nicGetChipSwVer(void);

/* Symbol: nicGetChipFactoryVer */
/* Demangled: nicGetChipFactoryVer */
int nicGetChipFactoryVer(void);

/* Symbol: nicIsEcoVerEqualTo */
/* Demangled: nicIsEcoVerEqualTo */
int nicIsEcoVerEqualTo(void);

/* Symbol: nicIsEcoVerEqualOrLaterTo */
/* Demangled: nicIsEcoVerEqualOrLaterTo */
int nicIsEcoVerEqualOrLaterTo(void);

/* Symbol: nicSerStopTxRx */
/* Demangled: nicSerStopTxRx */
int nicSerStopTxRx(void);

/* Symbol: nicSerStopTx */
/* Demangled: nicSerStopTx */
int nicSerStopTx(void);

/* Symbol: nicSerStartTxRx */
/* Demangled: nicSerStartTxRx */
int nicSerStartTxRx(void);

/* Symbol: nicSerIsWaitingReset */
/* Demangled: nicSerIsWaitingReset */
int nicSerIsWaitingReset(void);

/* Symbol: nicSerIsTxStop */
/* Demangled: nicSerIsTxStop */
int nicSerIsTxStop(void);

/* Symbol: nicSerIsRxStop */
/* Demangled: nicSerIsRxStop */
int nicSerIsRxStop(void);

/* Symbol: nicSerReInitBeaconFrame */
/* Demangled: nicSerReInitBeaconFrame */
int nicSerReInitBeaconFrame(void);

/* Symbol: bssUpdateBeaconContent */
/* Demangled: bssUpdateBeaconContent */
int bssUpdateBeaconContent(void);

/* Symbol: nicSerDeInit */
/* Demangled: nicSerDeInit */
int nicSerDeInit(void);

/* Symbol: nicTxMsduDoneCb */
/* Demangled: nicTxMsduDoneCb */
int nicTxMsduDoneCb(void);

/* Symbol: halIsTxResourceControlEn */
/* Demangled: halIsTxResourceControlEn */
int halIsTxResourceControlEn(void);

/* Symbol: qmInit */
/* Demangled: qmInit */
int qmInit(void);

/* Symbol: halGetHifTxPageSize */
/* Demangled: halGetHifTxPageSize */
int halGetHifTxPageSize(void);

/* Symbol: nicTxSanityCheckResource */
/* Demangled: nicTxSanityCheckResource */
int nicTxSanityCheckResource(void);

/* Symbol: nicTxResourceIsPleCtrlNeeded */
/* Demangled: nicTxResourceIsPleCtrlNeeded */
int nicTxResourceIsPleCtrlNeeded(void);

/* Symbol: nicTxResourceGetPleFreeCount */
/* Demangled: nicTxResourceGetPleFreeCount */
int nicTxResourceGetPleFreeCount(void);

/* Symbol: nicTxAcquireResourcePLE */
/* Demangled: nicTxAcquireResourcePLE */
int nicTxAcquireResourcePLE(void);

/* Symbol: u4CurrTick */
/* Demangled: u4CurrTick */
extern void* u4CurrTick;

/* Symbol: cmdBufDumpCmdQueue */
/* Demangled: cmdBufDumpCmdQueue */
int cmdBufDumpCmdQueue(void);

/* Symbol: halTxPollingResource */
/* Demangled: halTxPollingResource */
int halTxPollingResource(void);

/* Symbol: halTxGetPageCount */
/* Demangled: halTxGetPageCount */
int halTxGetPageCount(void);

/* Symbol: nicTxGetResource */
/* Demangled: nicTxGetResource */
int nicTxGetResource(void);

/* Symbol: nicTxGetFrameResourceType */
/* Demangled: nicTxGetFrameResourceType */
int nicTxGetFrameResourceType(void);

/* Symbol: nicTxGetTxQByTc */
/* Demangled: nicTxGetTxQByTc */
int nicTxGetTxQByTc(void);

/* Symbol: nicTxGetTxDestPortIdxByTc */
/* Demangled: nicTxGetTxDestPortIdxByTc */
int nicTxGetTxDestPortIdxByTc(void);

/* Symbol: nicTxGetTxDestQIdxByTc */
/* Demangled: nicTxGetTxDestQIdxByTc */
int nicTxGetTxDestQIdxByTc(void);

/* Symbol: nicTxGetRemainingTxTimeByTc */
/* Demangled: nicTxGetRemainingTxTimeByTc */
int nicTxGetRemainingTxTimeByTc(void);

/* Symbol: nicTxGetTxCountLimitByTc */
/* Demangled: nicTxGetTxCountLimitByTc */
int nicTxGetTxCountLimitByTc(void);

/* Symbol: nicTxMsduInfoList */
/* Demangled: nicTxMsduInfoList */
int nicTxMsduInfoList(void);

/* Symbol: nicTxMsduQueue */
/* Demangled: nicTxMsduQueue */
int nicTxMsduQueue(void);

/* Symbol: StatsEnvTxTime2Hif */
/* Demangled: StatsEnvTxTime2Hif */
int StatsEnvTxTime2Hif(void);

/* Symbol: kalDevWriteData */
/* Demangled: kalDevWriteData */
int kalDevWriteData(void);

/* Symbol: halTxIsDataBufEnough */
/* Demangled: halTxIsDataBufEnough */
int halTxIsDataBufEnough(void);

/* Symbol: kalDevKickData */
/* Demangled: kalDevKickData */
int kalDevKickData(void);

/* Symbol: nicTxFillDesc */
/* Demangled: nicTxFillDesc */
int nicTxFillDesc(void);

/* Symbol: halDumpTxdInfo */
/* Demangled: halDumpTxdInfo */
int halDumpTxdInfo(void);

/* Symbol: kalSetTxEvent2Hif */
/* Demangled: kalSetTxEvent2Hif */
int kalSetTxEvent2Hif(void);

/* Symbol: nicTxFillDataDesc */
/* Demangled: nicTxFillDataDesc */
int nicTxFillDataDesc(void);

/* Symbol: nicTxMsduQueueMthread */
/* Demangled: nicTxMsduQueueMthread */
int nicTxMsduQueueMthread(void);

/* Symbol: nicTxMsduQueueByPrio */
/* Demangled: nicTxMsduQueueByPrio */
int nicTxMsduQueueByPrio(void);

/* Symbol: nicTxMsduQueueByRR */
/* Demangled: nicTxMsduQueueByRR */
int nicTxMsduQueueByRR(void);

/* Symbol: halTxRingDataSelect */
/* Demangled: halTxRingDataSelect */
int halTxRingDataSelect(void);

/* Symbol: nicTxGetMsduPendingCnt */
/* Demangled: nicTxGetMsduPendingCnt */
int nicTxGetMsduPendingCnt(void);

/* Symbol: nicTxComposeDescAppend */
/* Demangled: nicTxComposeDescAppend */
int nicTxComposeDescAppend(void);

/* Symbol: nicTxComposeDesc */
/* Demangled: nicTxComposeDesc */
int nicTxComposeDesc(void);

/* Symbol: nicTxForceAmsduForCert */
/* Demangled: nicTxForceAmsduForCert */
int nicTxForceAmsduForCert(void);

/* Symbol: nicTxIsTXDTemplateAllowed */
/* Demangled: nicTxIsTXDTemplateAllowed */
int nicTxIsTXDTemplateAllowed(void);

/* Symbol: nicTxGetWlanIdx */
/* Demangled: nicTxGetWlanIdx */
int nicTxGetWlanIdx(void);

/* Symbol: kalQueryTxChksumOffloadParam */
/* Demangled: kalQueryTxChksumOffloadParam */
int kalQueryTxChksumOffloadParam(void);

/* Symbol: nicTxFillDescByPktOption */
/* Demangled: nicTxFillDescByPktOption */
int nicTxFillDescByPktOption(void);

/* Symbol: nicTxCopyDesc */
/* Demangled: nicTxCopyDesc */
int nicTxCopyDesc(void);

/* Symbol: nicTxGenerateDescTemplate */
/* Demangled: nicTxGenerateDescTemplate */
int nicTxGenerateDescTemplate(void);

/* Symbol: arNetwork2TcResource */
/* Demangled: arNetwork2TcResource */
extern void* arNetwork2TcResource;

/* Symbol: nicTxSetHwAmsduDescTemplate */
/* Demangled: nicTxSetHwAmsduDescTemplate */
int nicTxSetHwAmsduDescTemplate(void);

/* Symbol: aucACI2TxQIdx */
/* Demangled: aucACI2TxQIdx */
extern void* aucACI2TxQIdx;

/* Symbol: nicHifTxMsduDoneCb */
/* Demangled: nicHifTxMsduDoneCb */
int nicHifTxMsduDoneCb(void);

/* Symbol: kalDevWriteCmd */
/* Demangled: kalDevWriteCmd */
int kalDevWriteCmd(void);

/* Symbol: qmFlushTxQueues */
/* Demangled: qmFlushTxQueues */
int qmFlushTxQueues(void);

/* Symbol: halProcessTxInterrupt */
/* Demangled: halProcessTxInterrupt */
int halProcessTxInterrupt(void);

/* Symbol: kalGetTxPendingCmdCount */
/* Demangled: kalGetTxPendingCmdCount */
int kalGetTxPendingCmdCount(void);

/* Symbol: secGetEapolKeyType */
/* Demangled: secGetEapolKeyType */
int secGetEapolKeyType(void);

/* Symbol: qmAdjustTcQuotasMthread */
/* Demangled: qmAdjustTcQuotasMthread */
int qmAdjustTcQuotasMthread(void);

/* Symbol: kalDevPortWrite */
/* Demangled: kalDevPortWrite */
int kalDevPortWrite(void);

/* Symbol: qmDetermineStaRecIndex */
/* Demangled: qmDetermineStaRecIndex */
int qmDetermineStaRecIndex(void);

/* Symbol: nicTxAssignPID */
/* Demangled: nicTxAssignPID */
int nicTxAssignPID(void);

/* Symbol: nicTxProcessMngPacket */
/* Demangled: nicTxProcessMngPacket */
int nicTxProcessMngPacket(void);

/* Symbol: nicTxSetPktLowestFixedRate */
/* Demangled: nicTxSetPktLowestFixedRate */
int nicTxSetPktLowestFixedRate(void);

/* Symbol: nicRateCode2PhyRate */
/* Demangled: nicRateCode2PhyRate */
int nicRateCode2PhyRate(void);

/* Symbol: nicGetRateIndexFromRateSetWithLimit */
/* Demangled: nicGetRateIndexFromRateSetWithLimit */
int nicGetRateIndexFromRateSetWithLimit(void);

/* Symbol: nicSwIndex2RateIndex */
/* Demangled: nicSwIndex2RateIndex */
int nicSwIndex2RateIndex(void);

/* Symbol: nicRateIndex2RateCode */
/* Demangled: nicRateIndex2RateCode */
int nicRateIndex2RateCode(void);

/* Symbol: nicTxProcessTxDoneEvent */
/* Demangled: nicTxProcessTxDoneEvent */
int nicTxProcessTxDoneEvent(void);

/* Symbol: qmEnqueueTxPackets */
/* Demangled: qmEnqueueTxPackets */
int qmEnqueueTxPackets(void);

/* Symbol: nicTxGetFreeCmdCount */
/* Demangled: nicTxGetFreeCmdCount */
int nicTxGetFreeCmdCount(void);

/* Symbol: nicTxIsMgmtResourceEnough */
/* Demangled: nicTxIsMgmtResourceEnough */
int nicTxIsMgmtResourceEnough(void);

/* Symbol: nicTxSetMngPacket */
/* Demangled: nicTxSetMngPacket */
int nicTxSetMngPacket(void);

/* Symbol: nicTxSetPktSequenceNumber */
/* Demangled: nicTxSetPktSequenceNumber */
int nicTxSetPktSequenceNumber(void);

/* Symbol: nicTxConfigPktControlFlag */
/* Demangled: nicTxConfigPktControlFlag */
int nicTxConfigPktControlFlag(void);

/* Symbol: nicTxSetPktLifeTime */
/* Demangled: nicTxSetPktLifeTime */
int nicTxSetPktLifeTime(void);

/* Symbol: nicTxSetPktRetryLimit */
/* Demangled: nicTxSetPktRetryLimit */
int nicTxSetPktRetryLimit(void);

/* Symbol: nicTxSetPktPowerOffset */
/* Demangled: nicTxSetPktPowerOffset */
int nicTxSetPktPowerOffset(void);

/* Symbol: nicTxSetPktMacTxQue */
/* Demangled: nicTxSetPktMacTxQue */
int nicTxSetPktMacTxQue(void);

/* Symbol: nicTxSetPktFixedRateOptionFull */
/* Demangled: nicTxSetPktFixedRateOptionFull */
int nicTxSetPktFixedRateOptionFull(void);

/* Symbol: nicTxSetPktFixedRateOption */
/* Demangled: nicTxSetPktFixedRateOption */
int nicTxSetPktFixedRateOption(void);

/* Symbol: nicTxSetPktMoreData */
/* Demangled: nicTxSetPktMoreData */
int nicTxSetPktMoreData(void);

/* Symbol: nicTxSetPktEOSP */
/* Demangled: nicTxSetPktEOSP */
int nicTxSetPktEOSP(void);

/* Symbol: nicTxUpdateBssDefaultRate */
/* Demangled: nicTxUpdateBssDefaultRate */
int nicTxUpdateBssDefaultRate(void);

/* Symbol: rateGetLowestRateIndexFromRateSet */
/* Demangled: rateGetLowestRateIndexFromRateSet */
int rateGetLowestRateIndexFromRateSet(void);

/* Symbol: nicTxUpdateStaRecDefaultRate */
/* Demangled: nicTxUpdateStaRecDefaultRate */
int nicTxUpdateStaRecDefaultRate(void);

/* Symbol: halTxCancelSendingCmd */
/* Demangled: halTxCancelSendingCmd */
int halTxCancelSendingCmd(void);

/* Symbol: nicTxDirectStartCheckQTimer */
/* Demangled: nicTxDirectStartCheckQTimer */
int nicTxDirectStartCheckQTimer(void);

/* Symbol: nicTxDirectClearSkbQ */
/* Demangled: nicTxDirectClearSkbQ */
int nicTxDirectClearSkbQ(void);

/* Symbol: nicTxDirectClearHifQ */
/* Demangled: nicTxDirectClearHifQ */
int nicTxDirectClearHifQ(void);

/* Symbol: nicTxDirectClearStaPsQ */
/* Demangled: nicTxDirectClearStaPsQ */
int nicTxDirectClearStaPsQ(void);

/* Symbol: nicTxDirectClearBssAbsentQ */
/* Demangled: nicTxDirectClearBssAbsentQ */
int nicTxDirectClearBssAbsentQ(void);

/* Symbol: nicTxDirectClearAllStaPsQ */
/* Demangled: nicTxDirectClearAllStaPsQ */
int nicTxDirectClearAllStaPsQ(void);

/* Symbol: nicTxDirectTimerCheckSkbQ */
/* Demangled: nicTxDirectTimerCheckSkbQ */
int nicTxDirectTimerCheckSkbQ(void);

/* Symbol: nicTxDirectStartXmit */
/* Demangled: nicTxDirectStartXmit */
int nicTxDirectStartXmit(void);

/* Symbol: nicTxDirectTimerCheckHifQ */
/* Demangled: nicTxDirectTimerCheckHifQ */
int nicTxDirectTimerCheckHifQ(void);

/* Symbol: aisGetWMMInfo */
/* Demangled: aisGetWMMInfo */
int aisGetWMMInfo(void);

/* Symbol: wmmHasActiveTspec */
/* Demangled: wmmHasActiveTspec */
int wmmHasActiveTspec(void);

/* Symbol: qmDetermineStaTxQueue */
/* Demangled: qmDetermineStaTxQueue */
int qmDetermineStaTxQueue(void);

/* Symbol: qmSetTxPacketDescTemplate */
/* Demangled: qmSetTxPacketDescTemplate */
int qmSetTxPacketDescTemplate(void);

/* Symbol: nicTxResourceUpdate_v1 */
/* Demangled: nicTxResourceUpdate_v1 */
int nicTxResourceUpdate_v1(void);

/* Symbol: nicTxChangeDataPortByAc */
/* Demangled: nicTxChangeDataPortByAc */
int nicTxChangeDataPortByAc(void);

/* Symbol: nicTxHandleRoamingDone */
/* Demangled: nicTxHandleRoamingDone */
int nicTxHandleRoamingDone(void);

/* Symbol: nicTxGetVectorInfo */
/* Demangled: nicTxGetVectorInfo */
int nicTxGetVectorInfo(void);

/* Symbol: HW_TX_RATE_CCK_STR */
/* Demangled: HW_TX_RATE_CCK_STR */
extern void* HW_TX_RATE_CCK_STR;

/* Symbol: nicHwRateOfdmStr */
/* Demangled: nicHwRateOfdmStr */
int nicHwRateOfdmStr(void);

/* Symbol: HW_TX_RATE_BW */
/* Demangled: HW_TX_RATE_BW */
extern void* HW_TX_RATE_BW;

/* Symbol: HW_TX_MODE_STR */
/* Demangled: HW_TX_MODE_STR */
extern void* HW_TX_MODE_STR;

/* Symbol: g_pfTxDataDoneCb */
/* Demangled: g_pfTxDataDoneCb */
extern void* g_pfTxDataDoneCb;

/* Symbol: nic_txd_v1_long_format_op */
/* Demangled: nic_txd_v1_long_format_op */
int nic_txd_v1_long_format_op(void);

/* Symbol: nic_txd_v1_tid_op */
/* Demangled: nic_txd_v1_tid_op */
int nic_txd_v1_tid_op(void);

/* Symbol: nic_txd_v1_queue_idx_op */
/* Demangled: nic_txd_v1_queue_idx_op */
int nic_txd_v1_queue_idx_op(void);

/* Symbol: nic_txd_v1_chksum_op */
/* Demangled: nic_txd_v1_chksum_op */
int nic_txd_v1_chksum_op(void);

/* Symbol: nic_txd_v1_header_format_op */
/* Demangled: nic_txd_v1_header_format_op */
int nic_txd_v1_header_format_op(void);

/* Symbol: nic_txd_v1_fill_by_pkt_option */
/* Demangled: nic_txd_v1_fill_by_pkt_option */
int nic_txd_v1_fill_by_pkt_option(void);

/* Symbol: nic_txd_v1_fill_by_pkt_ctrl */
/* Demangled: nic_txd_v1_fill_by_pkt_ctrl */
int nic_txd_v1_fill_by_pkt_ctrl(void);

/* Symbol: nic_txd_v1_compose */
/* Demangled: nic_txd_v1_compose */
int nic_txd_v1_compose(void);

/* Symbol: secIsProtectedFrame */
/* Demangled: secIsProtectedFrame */
int secIsProtectedFrame(void);

/* Symbol: nic_txd_v1_compose_security_frame */
/* Demangled: nic_txd_v1_compose_security_frame */
int nic_txd_v1_compose_security_frame(void);

/* Symbol: nic_txd_v1_set_pkt_fixed_rate_option_full */
/* Demangled: nic_txd_v1_set_pkt_fixed_rate_option_full */
int nic_txd_v1_set_pkt_fixed_rate_option_full(void);

/* Symbol: nic_txd_v1_set_pkt_fixed_rate_option */
/* Demangled: nic_txd_v1_set_pkt_fixed_rate_option */
int nic_txd_v1_set_pkt_fixed_rate_option(void);

/* Symbol: nic_txd_v1_set_hw_amsdu_template */
/* Demangled: nic_txd_v1_set_hw_amsdu_template */
int nic_txd_v1_set_hw_amsdu_template(void);

/* Symbol: nic_txd_v1_change_data_port_by_ac */
/* Demangled: nic_txd_v1_change_data_port_by_ac */
int nic_txd_v1_change_data_port_by_ac(void);

/* Symbol: nic_rxd_v1_get_rx_byte_count */
/* Demangled: nic_rxd_v1_get_rx_byte_count */
int nic_rxd_v1_get_rx_byte_count(void);

/* Symbol: nic_rxd_v1_get_packet_type */
/* Demangled: nic_rxd_v1_get_packet_type */
int nic_rxd_v1_get_packet_type(void);

/* Symbol: nic_rxd_v1_get_wlan_idx */
/* Demangled: nic_rxd_v1_get_wlan_idx */
int nic_rxd_v1_get_wlan_idx(void);

/* Symbol: nic_rxd_v1_get_sec_mode */
/* Demangled: nic_rxd_v1_get_sec_mode */
int nic_rxd_v1_get_sec_mode(void);

/* Symbol: nic_rxd_v1_get_sw_class_error_bit */
/* Demangled: nic_rxd_v1_get_sw_class_error_bit */
int nic_rxd_v1_get_sw_class_error_bit(void);

/* Symbol: nic_rxd_v1_get_ch_num */
/* Demangled: nic_rxd_v1_get_ch_num */
int nic_rxd_v1_get_ch_num(void);

/* Symbol: nic_rxd_v1_get_rf_band */
/* Demangled: nic_rxd_v1_get_rf_band */
int nic_rxd_v1_get_rf_band(void);

/* Symbol: nic_rxd_v1_get_tcl */
/* Demangled: nic_rxd_v1_get_tcl */
int nic_rxd_v1_get_tcl(void);

/* Symbol: nic_rxd_v1_get_ofld */
/* Demangled: nic_rxd_v1_get_ofld */
int nic_rxd_v1_get_ofld(void);

/* Symbol: nic_rxd_v1_fill_rfb */
/* Demangled: nic_rxd_v1_fill_rfb */
int nic_rxd_v1_fill_rfb(void);

/* Symbol: secGetStaIdxByWlanIdx */
/* Demangled: secGetStaIdxByWlanIdx */
int secGetStaIdxByWlanIdx(void);

/* Symbol: nic_rxd_v1_sanity_check */
/* Demangled: nic_rxd_v1_sanity_check */
int nic_rxd_v1_sanity_check(void);

/* Symbol: secGetBssIdxByWlanIdx */
/* Demangled: secGetBssIdxByWlanIdx */
int secGetBssIdxByWlanIdx(void);

/* Symbol: rsnTkipHandleMICFailure */
/* Demangled: rsnTkipHandleMICFailure */
int rsnTkipHandleMICFailure(void);

/* Symbol: nicRxFillRFB */
/* Demangled: nicRxFillRFB */
int nicRxFillRFB(void);

/* Symbol: nic_rxd_v1_check_wakeup_reason */
/* Demangled: nic_rxd_v1_check_wakeup_reason */
int nic_rxd_v1_check_wakeup_reason(void);

/* Symbol: kalPacketAlloc */
/* Demangled: kalPacketAlloc */
int kalPacketAlloc(void);

/* Symbol: kalSetIntEvent */
/* Demangled: kalSetIntEvent */
int kalSetIntEvent(void);

/* Symbol: halIsPendingRx */
/* Demangled: halIsPendingRx */
int halIsPendingRx(void);

/* Symbol: qmFlushRxQueues */
/* Demangled: qmFlushRxQueues */
int qmFlushRxQueues(void);

/* Symbol: nicRxFlush */
/* Demangled: nicRxFlush */
int nicRxFlush(void);

/* Symbol: nicRxFillChksumStatus */
/* Demangled: nicRxFillChksumStatus */
int nicRxFillChksumStatus(void);

/* Symbol: nicRxDefragMPDU */
/* Demangled: nicRxDefragMPDU */
int nicRxDefragMPDU(void);

/* Symbol: qmRxPNtoU64 */
/* Demangled: qmRxPNtoU64 */
int qmRxPNtoU64(void);

/* Symbol: nicRxIsDuplicateFrame */
/* Demangled: nicRxIsDuplicateFrame */
int nicRxIsDuplicateFrame(void);

/* Symbol: kalProcessRxPacket */
/* Demangled: kalProcessRxPacket */
int kalProcessRxPacket(void);

/* Symbol: kalSetTxEvent2Rx */
/* Demangled: kalSetTxEvent2Rx */
int kalSetTxEvent2Rx(void);

/* Symbol: nicRxCheckForwardPktResource */
/* Demangled: nicRxCheckForwardPktResource */
int nicRxCheckForwardPktResource(void);

/* Symbol: nicRxFillRadiotapMCS */
/* Demangled: nicRxFillRadiotapMCS */
int nicRxFillRadiotapMCS(void);

/* Symbol: nicRxFillRadiotapVHT */
/* Demangled: nicRxFillRadiotapVHT */
int nicRxFillRadiotapVHT(void);

/* Symbol: nicRxProcessMonitorPacket */
/* Demangled: nicRxProcessMonitorPacket */
int nicRxProcessMonitorPacket(void);

/* Symbol: nicGetHwRateByPhyRate */
/* Demangled: nicGetHwRateByPhyRate */
int nicGetHwRateByPhyRate(void);

/* Symbol: nicGetPhyRateByMcsRate */
/* Demangled: nicGetPhyRateByMcsRate */
int nicGetPhyRateByMcsRate(void);

/* Symbol: nicRxProcessDataPacket */
/* Demangled: nicRxProcessDataPacket */
int nicRxProcessDataPacket(void);

/* Symbol: StatsRxPktInfoDisplay */
/* Demangled: StatsRxPktInfoDisplay */
int StatsRxPktInfoDisplay(void);

/* Symbol: qmHandleRxPackets */
/* Demangled: qmHandleRxPackets */
int qmHandleRxPackets(void);

/* Symbol: qmHandleRxDhcpPackets */
/* Demangled: qmHandleRxDhcpPackets */
int qmHandleRxDhcpPackets(void);

/* Symbol: nicRxProcessEventPacket */
/* Demangled: nicRxProcessEventPacket */
int nicRxProcessEventPacket(void);

/* Symbol: nicRxProcessMgmtPacket */
/* Demangled: nicRxProcessMgmtPacket */
int nicRxProcessMgmtPacket(void);

/* Symbol: rsnCheckBipKeyInstalled */
/* Demangled: rsnCheckBipKeyInstalled */
int rsnCheckBipKeyInstalled(void);

/* Symbol: nicRxProcessMsduReport */
/* Demangled: nicRxProcessMsduReport */
int nicRxProcessMsduReport(void);

/* Symbol: halRxProcessMsduReport */
/* Demangled: halRxProcessMsduReport */
int halRxProcessMsduReport(void);

/* Symbol: nicRxProcessRFBs */
/* Demangled: nicRxProcessRFBs */
int nicRxProcessRFBs(void);

/* Symbol: kalPerMonStart */
/* Demangled: kalPerMonStart */
int kalPerMonStart(void);

/* Symbol: kalIsWakeupByWlan */
/* Demangled: kalIsWakeupByWlan */
int kalIsWakeupByWlan(void);

/* Symbol: halProcessRxInterrupt */
/* Demangled: halProcessRxInterrupt */
int halProcessRxInterrupt(void);

/* Symbol: kalSetRxProcessEvent */
/* Demangled: kalSetRxProcessEvent */
int kalSetRxProcessEvent(void);

/* Symbol: nicRxUpdateCSUMStatistics */
/* Demangled: nicRxUpdateCSUMStatistics */
int nicRxUpdateCSUMStatistics(void);

/* Symbol: nicRxQueryStatus */
/* Demangled: nicRxQueryStatus */
int nicRxQueryStatus(void);

/* Symbol: nicRxClearStatistics */
/* Demangled: nicRxClearStatistics */
int nicRxClearStatistics(void);

/* Symbol: nicRxQueryStatistics */
/* Demangled: nicRxQueryStatistics */
int nicRxQueryStatistics(void);

/* Symbol: halRxWaitResponse */
/* Demangled: halRxWaitResponse */
int halRxWaitResponse(void);

/* Symbol: nicRxEnablePromiscuousMode */
/* Demangled: nicRxEnablePromiscuousMode */
int nicRxEnablePromiscuousMode(void);

/* Symbol: nicRxDisablePromiscuousMode */
/* Demangled: nicRxDisablePromiscuousMode */
int nicRxDisablePromiscuousMode(void);

/* Symbol: nicIsActionFrameValid */
/* Demangled: nicIsActionFrameValid */
int nicIsActionFrameValid(void);

/* Symbol: nicRxProcessActionFrame */
/* Demangled: nicRxProcessActionFrame */
int nicRxProcessActionFrame(void);

/* Symbol: secIsRobustActionFrame */
/* Demangled: secIsRobustActionFrame */
int secIsRobustActionFrame(void);

/* Symbol: rlmProcessSpecMgtAction */
/* Demangled: rlmProcessSpecMgtAction */
int rlmProcessSpecMgtAction(void);

/* Symbol: p2pFuncValidateRxActionFrame */
/* Demangled: p2pFuncValidateRxActionFrame */
int p2pFuncValidateRxActionFrame(void);

/* Symbol: handleQosMapConf */
/* Demangled: handleQosMapConf */
int handleQosMapConf(void);

/* Symbol: aisFuncValidateRxActionFrame */
/* Demangled: aisFuncValidateRxActionFrame */
int aisFuncValidateRxActionFrame(void);

/* Symbol: rlmProcessPublicAction */
/* Demangled: rlmProcessPublicAction */
int rlmProcessPublicAction(void);

/* Symbol: rlmProcessHtAction */
/* Demangled: rlmProcessHtAction */
int rlmProcessHtAction(void);

/* Symbol: rsnApSaQueryAction */
/* Demangled: rsnApSaQueryAction */
int rsnApSaQueryAction(void);

/* Symbol: wmmParseQosAction */
/* Demangled: wmmParseQosAction */
int wmmParseQosAction(void);

/* Symbol: rlmProcessVhtAction */
/* Demangled: rlmProcessVhtAction */
int rlmProcessVhtAction(void);

/* Symbol: rrmProcessNeighborReportResonse */
/* Demangled: rrmProcessNeighborReportResonse */
int rrmProcessNeighborReportResonse(void);

/* Symbol: rsnSaQueryAction */
/* Demangled: rsnSaQueryAction */
int rsnSaQueryAction(void);

/* Symbol: nicRxGetRcpiValueFromRxv */
/* Demangled: nicRxGetRcpiValueFromRxv */
int nicRxGetRcpiValueFromRxv(void);

/* Symbol: nicRxGetLastRxRssi */
/* Demangled: nicRxGetLastRxRssi */
int nicRxGetLastRxRssi(void);

/* Symbol: qmHandleEventRxAddBa */
/* Demangled: qmHandleEventRxAddBa */
int qmHandleEventRxAddBa(void);

/* Symbol: cnmDbdcEventHwSwitchDone */
/* Demangled: cnmDbdcEventHwSwitchDone */
int cnmDbdcEventHwSwitchDone(void);

/* Symbol: qmHandleEventRxDelBa */
/* Demangled: qmHandleEventRxDelBa */
int qmHandleEventRxDelBa(void);

/* Symbol: nicEventLinkQuality */
/* Demangled: nicEventLinkQuality */
int nicEventLinkQuality(void);

/* Symbol: nicEventLayer0ExtMagic */
/* Demangled: nicEventLayer0ExtMagic */
int nicEventLayer0ExtMagic(void);

/* Symbol: nicEventMicErrorInfo */
/* Demangled: nicEventMicErrorInfo */
int nicEventMicErrorInfo(void);

/* Symbol: nicEventScanDone */
/* Demangled: nicEventScanDone */
int nicEventScanDone(void);

/* Symbol: nicEventSchedScanDone */
/* Demangled: nicEventSchedScanDone */
int nicEventSchedScanDone(void);

/* Symbol: nicEventSleepyNotify */
/* Demangled: nicEventSleepyNotify */
int nicEventSleepyNotify(void);

/* Symbol: nicEventStatistics */
/* Demangled: nicEventStatistics */
int nicEventStatistics(void);

/* Symbol: nicEventWlanInfo */
/* Demangled: nicEventWlanInfo */
int nicEventWlanInfo(void);

/* Symbol: nicEventMibInfo */
/* Demangled: nicEventMibInfo */
int nicEventMibInfo(void);

/* Symbol: cnmChMngrHandleChEvent */
/* Demangled: cnmChMngrHandleChEvent */
int cnmChMngrHandleChEvent(void);

/* Symbol: qmHandleEventBssAbsencePresence */
/* Demangled: qmHandleEventBssAbsencePresence */
int qmHandleEventBssAbsencePresence(void);

/* Symbol: qmHandleEventStaChangePsMode */
/* Demangled: qmHandleEventStaChangePsMode */
int qmHandleEventStaChangePsMode(void);

/* Symbol: qmHandleEventStaUpdateFreeQuota */
/* Demangled: qmHandleEventStaUpdateFreeQuota */
int qmHandleEventStaUpdateFreeQuota(void);

/* Symbol: nicEventBeaconTimeout */
/* Demangled: nicEventBeaconTimeout */
int nicEventBeaconTimeout(void);

/* Symbol: nicEventUpdateNoaParams */
/* Demangled: nicEventUpdateNoaParams */
int nicEventUpdateNoaParams(void);

/* Symbol: nicEventStaAgingTimeout */
/* Demangled: nicEventStaAgingTimeout */
int nicEventStaAgingTimeout(void);

/* Symbol: nicEventApObssStatus */
/* Demangled: nicEventApObssStatus */
int nicEventApObssStatus(void);

/* Symbol: nicEventRoamingStatus */
/* Demangled: nicEventRoamingStatus */
int nicEventRoamingStatus(void);

/* Symbol: nicEventSendDeauth */
/* Demangled: nicEventSendDeauth */
int nicEventSendDeauth(void);

/* Symbol: nicEventUpdateRddStatus */
/* Demangled: nicEventUpdateRddStatus */
int nicEventUpdateRddStatus(void);

/* Symbol: nicEventUpdateBwcsStatus */
/* Demangled: nicEventUpdateBwcsStatus */
int nicEventUpdateBwcsStatus(void);

/* Symbol: nicEventUpdateBcmDebug */
/* Demangled: nicEventUpdateBcmDebug */
int nicEventUpdateBcmDebug(void);

/* Symbol: nicEventAddPkeyDone */
/* Demangled: nicEventAddPkeyDone */
int nicEventAddPkeyDone(void);

/* Symbol: nicEventIcapDone */
/* Demangled: nicEventIcapDone */
int nicEventIcapDone(void);

/* Symbol: nicEventDebugMsg */
/* Demangled: nicEventDebugMsg */
int nicEventDebugMsg(void);

/* Symbol: nicEventTdls */
/* Demangled: nicEventTdls */
int nicEventTdls(void);

/* Symbol: bssProcessErTxModeEvent */
/* Demangled: bssProcessErTxModeEvent */
int bssProcessErTxModeEvent(void);

/* Symbol: nicEventRssiMonitor */
/* Demangled: nicEventRssiMonitor */
int nicEventRssiMonitor(void);

/* Symbol: nicEventDumpMem */
/* Demangled: nicEventDumpMem */
int nicEventDumpMem(void);

/* Symbol: nicEventAssertDump */
/* Demangled: nicEventAssertDump */
int nicEventAssertDump(void);

/* Symbol: nicEventHifCtrl */
/* Demangled: nicEventHifCtrl */
int nicEventHifCtrl(void);

/* Symbol: nicEventRddSendPulse */
/* Demangled: nicEventRddSendPulse */
int nicEventRddSendPulse(void);

/* Symbol: nicEventUpdateCoexPhyrate */
/* Demangled: nicEventUpdateCoexPhyrate */
int nicEventUpdateCoexPhyrate(void);

/* Symbol: cnmRadarDetectEvent */
/* Demangled: cnmRadarDetectEvent */
int cnmRadarDetectEvent(void);

/* Symbol: cnmCsaDoneEvent */
/* Demangled: cnmCsaDoneEvent */
int cnmCsaDoneEvent(void);

/* Symbol: cnmIdcDetectHandler */
/* Demangled: cnmIdcDetectHandler */
int cnmIdcDetectHandler(void);

/* Symbol: qmHandleEventTxAddBa */
/* Demangled: qmHandleEventTxAddBa */
int qmHandleEventTxAddBa(void);

/* Symbol: nicEventCnmInfo */
/* Demangled: nicEventCnmInfo */
int nicEventCnmInfo(void);

/* Symbol: cnmOpmodeEventHandler */
/* Demangled: cnmOpmodeEventHandler */
int cnmOpmodeEventHandler(void);

/* Symbol: nicEventUpdateLowLatencyInfoStatus */
/* Demangled: nicEventUpdateLowLatencyInfoStatus */
int nicEventUpdateLowLatencyInfoStatus(void);

/* Symbol: aaaFsmRunEventRxAssoc */
/* Demangled: aaaFsmRunEventRxAssoc */
int aaaFsmRunEventRxAssoc(void);

/* Symbol: saaFsmRunEventRxAssoc */
/* Demangled: saaFsmRunEventRxAssoc */
int saaFsmRunEventRxAssoc(void);

/* Symbol: bssProcessProbeRequest */
/* Demangled: bssProcessProbeRequest */
int bssProcessProbeRequest(void);

/* Symbol: scanProcessBeaconAndProbeResp */
/* Demangled: scanProcessBeaconAndProbeResp */
int scanProcessBeaconAndProbeResp(void);

/* Symbol: saaFsmRunEventRxDisassoc */
/* Demangled: saaFsmRunEventRxDisassoc */
int saaFsmRunEventRxDisassoc(void);

/* Symbol: authCheckRxAuthFrameTransSeq */
/* Demangled: authCheckRxAuthFrameTransSeq */
int authCheckRxAuthFrameTransSeq(void);

/* Symbol: saaFsmRunEventRxDeauth */
/* Demangled: saaFsmRunEventRxDeauth */
int saaFsmRunEventRxDeauth(void);

/* Symbol: nicpmWakeUpWiFi */
/* Demangled: nicpmWakeUpWiFi */
int nicpmWakeUpWiFi(void);

/* Symbol: halWakeUpWiFi */
/* Demangled: halWakeUpWiFi */
int halWakeUpWiFi(void);

/* Symbol: halSetFWOwn */
/* Demangled: halSetFWOwn */
int halSetFWOwn(void);

/* Symbol: halSetDriverOwn */
/* Demangled: halSetDriverOwn */
int halSetDriverOwn(void);

/* Symbol: arMcsRate2PhyRate */
/* Demangled: arMcsRate2PhyRate */
extern void* arMcsRate2PhyRate;

/* Symbol: aucHwRate2PhyRate */
/* Demangled: aucHwRate2PhyRate */
extern void* aucHwRate2PhyRate;

/* Symbol: au2RateCCKLong */
/* Demangled: au2RateCCKLong */
extern void* au2RateCCKLong;

/* Symbol: au2RateCCKShort */
/* Demangled: au2RateCCKShort */
extern void* au2RateCCKShort;

/* Symbol: au2RateOFDM */
/* Demangled: au2RateOFDM */
extern void* au2RateOFDM;

/* Symbol: au2RateHTMixed */
/* Demangled: au2RateHTMixed */
extern void* au2RateHTMixed;

/* Symbol: au2RateHTGreenField */
/* Demangled: au2RateHTGreenField */
extern void* au2RateHTGreenField;

/* Symbol: au2RateVHT */
/* Demangled: au2RateVHT */
extern void* au2RateVHT;

/* Symbol: nicRateCode2DataRate */
/* Demangled: nicRateCode2DataRate */
int nicRateCode2DataRate(void);

/* Symbol: HW_TX_RATE_OFDM_STR */
/* Demangled: HW_TX_RATE_OFDM_STR */
extern void* HW_TX_RATE_OFDM_STR;

/* Symbol: nicSetFixedRateData */
/* Demangled: nicSetFixedRateData */
int nicSetFixedRateData(void);

/* Symbol: nicRateHeLtfCheckGi */
/* Demangled: nicRateHeLtfCheckGi */
int nicRateHeLtfCheckGi(void);

/* Symbol: nicGetTxSgiInfo */
/* Demangled: nicGetTxSgiInfo */
int nicGetTxSgiInfo(void);

/* Symbol: nicGetTxLdpcInfo */
/* Demangled: nicGetTxLdpcInfo */
int nicGetTxLdpcInfo(void);

/* Symbol: nicGetStatIdxInfo */
/* Demangled: nicGetStatIdxInfo */
int nicGetStatIdxInfo(void);

/* Symbol: nicGetTxRateInfo */
/* Demangled: nicGetTxRateInfo */
int nicGetTxRateInfo(void);

/* Symbol: nicGetRxRateInfo */
/* Demangled: nicGetRxRateInfo */
int nicGetRxRateInfo(void);

/* Symbol: fgCmdDumpIsDone */
/* Demangled: fgCmdDumpIsDone */
extern void* fgCmdDumpIsDone;

/* Symbol: qmHandleReorderBubbleTimeout */
/* Demangled: qmHandleReorderBubbleTimeout */
int qmHandleReorderBubbleTimeout(void);

/* Symbol: g_arMissTimeout */
/* Demangled: g_arMissTimeout */
extern void* g_arMissTimeout;

/* Symbol: qmHandleEventCheckReorderBubble */
/* Demangled: qmHandleEventCheckReorderBubble */
int qmHandleEventCheckReorderBubble(void);

/* Symbol: qmUpdateStaRec */
/* Demangled: qmUpdateStaRec */
int qmUpdateStaRec(void);

/* Symbol: secIsProtectedBss */
/* Demangled: secIsProtectedBss */
int secIsProtectedBss(void);

/* Symbol: secIsWepBss */
/* Demangled: secIsWepBss */
int secIsWepBss(void);

/* Symbol: qmSetStaRecTxAllowed */
/* Demangled: qmSetStaRecTxAllowed */
int qmSetStaRecTxAllowed(void);

/* Symbol: qmActivateStaRec */
/* Demangled: qmActivateStaRec */
int qmActivateStaRec(void);

/* Symbol: qmDeactivateStaRec */
/* Demangled: qmDeactivateStaRec */
int qmDeactivateStaRec(void);

/* Symbol: qmFlushStaTxQueues */
/* Demangled: qmFlushStaTxQueues */
int qmFlushStaTxQueues(void);

/* Symbol: qmDelRxBaEntry */
/* Demangled: qmDelRxBaEntry */
int qmDelRxBaEntry(void);

/* Symbol: qmFlushStaRxQueue */
/* Demangled: qmFlushStaRxQueue */
int qmFlushStaRxQueue(void);

/* Symbol: qmDetectArpNoResponse */
/* Demangled: qmDetectArpNoResponse */
int qmDetectArpNoResponse(void);

/* Symbol: cnmGetTdlsPeerByAddress */
/* Demangled: cnmGetTdlsPeerByAddress */
int cnmGetTdlsPeerByAddress(void);

/* Symbol: g_arTdlsLink */
/* Demangled: g_arTdlsLink */
extern void* g_arTdlsLink;

/* Symbol: qmDetermineStaToBeDequeued */
/* Demangled: qmDetermineStaToBeDequeued */
int qmDetermineStaToBeDequeued(void);

/* Symbol: qmDequeueStaTxPackets */
/* Demangled: qmDequeueStaTxPackets */
int qmDequeueStaTxPackets(void);

/* Symbol: qmDequeueTxPacketsFromPerStaQueues */
/* Demangled: qmDequeueTxPacketsFromPerStaQueues */
int qmDequeueTxPacketsFromPerStaQueues(void);

/* Symbol: wmmAcmCanDequeue */
/* Demangled: wmmAcmCanDequeue */
int wmmAcmCanDequeue(void);

/* Symbol: wmmCalculatePktUsedTime */
/* Demangled: wmmCalculatePktUsedTime */
int wmmCalculatePktUsedTime(void);

/* Symbol: gmGetDequeueQuota */
/* Demangled: gmGetDequeueQuota */
int gmGetDequeueQuota(void);

/* Symbol: qmDequeueTxPacketsFromPerTypeQueues */
/* Demangled: qmDequeueTxPacketsFromPerTypeQueues */
int qmDequeueTxPacketsFromPerTypeQueues(void);

/* Symbol: qmDequeueTxPacketsFromGlobalQueue */
/* Demangled: qmDequeueTxPacketsFromGlobalQueue */
int qmDequeueTxPacketsFromGlobalQueue(void);

/* Symbol: qmDequeueTxPackets */
/* Demangled: qmDequeueTxPackets */
int qmDequeueTxPackets(void);

/* Symbol: qmAdjustTcQuotaPle */
/* Demangled: qmAdjustTcQuotaPle */
int qmAdjustTcQuotaPle(void);

/* Symbol: qmAdjustTcQuotas */
/* Demangled: qmAdjustTcQuotas */
int qmAdjustTcQuotas(void);

/* Symbol: qmInitRxQueues */
/* Demangled: qmInitRxQueues */
int qmInitRxQueues(void);

/* Symbol: secLookupStaRecIndexFromTA */
/* Demangled: secLookupStaRecIndexFromTA */
int secLookupStaRecIndexFromTA(void);

/* Symbol: qmAmsduAttackDetection */
/* Demangled: qmAmsduAttackDetection */
int qmAmsduAttackDetection(void);

/* Symbol: qmDetectRxInvalidEAPOL */
/* Demangled: qmDetectRxInvalidEAPOL */
int qmDetectRxInvalidEAPOL(void);

/* Symbol: secCheckClassError */
/* Demangled: secCheckClassError */
int secCheckClassError(void);

/* Symbol: qmProcessPktWithReordering */
/* Demangled: qmProcessPktWithReordering */
int qmProcessPktWithReordering(void);

/* Symbol: qmProcessBarFrame */
/* Demangled: qmProcessBarFrame */
int qmProcessBarFrame(void);

/* Symbol: qmHandleRxReplay */
/* Demangled: qmHandleRxReplay */
int qmHandleRxReplay(void);

/* Symbol: tkipMicDecapsulateInRxHdrTransMode */
/* Demangled: tkipMicDecapsulateInRxHdrTransMode */
int tkipMicDecapsulateInRxHdrTransMode(void);

/* Symbol: secGetBssIdxByRfb */
/* Demangled: secGetBssIdxByRfb */
int secGetBssIdxByRfb(void);

/* Symbol: aisGetWpaInfo */
/* Demangled: aisGetWpaInfo */
int aisGetWpaInfo(void);

/* Symbol: aisGetDetRplyInfo */
/* Demangled: aisGetDetRplyInfo */
int aisGetDetRplyInfo(void);

/* Symbol: qmRxDetectReplay */
/* Demangled: qmRxDetectReplay */
int qmRxDetectReplay(void);

/* Symbol: qmInsertReorderPkt */
/* Demangled: qmInsertReorderPkt */
int qmInsertReorderPkt(void);

/* Symbol: qmPopOutDueToFallAhead */
/* Demangled: qmPopOutDueToFallAhead */
int qmPopOutDueToFallAhead(void);

/* Symbol: qmInsertFallWithinReorderPkt */
/* Demangled: qmInsertFallWithinReorderPkt */
int qmInsertFallWithinReorderPkt(void);

/* Symbol: qmPopOutDueToFallWithin */
/* Demangled: qmPopOutDueToFallWithin */
int qmPopOutDueToFallWithin(void);

/* Symbol: qmCompareSnIsLessThan */
/* Demangled: qmCompareSnIsLessThan */
int qmCompareSnIsLessThan(void);

/* Symbol: qmInsertFallAheadReorderPkt */
/* Demangled: qmInsertFallAheadReorderPkt */
int qmInsertFallAheadReorderPkt(void);

/* Symbol: qmIsNoDropPacket */
/* Demangled: qmIsNoDropPacket */
int qmIsNoDropPacket(void);

/* Symbol: qmPopOutReorderPkt */
/* Demangled: qmPopOutReorderPkt */
int qmPopOutReorderPkt(void);

/* Symbol: qmHandleMailboxRxMessage */
/* Demangled: qmHandleMailboxRxMessage */
int qmHandleMailboxRxMessage(void);

/* Symbol: qmAddRxBaEntry */
/* Demangled: qmAddRxBaEntry */
int qmAddRxBaEntry(void);

/* Symbol: qmLookupRxBaEntry */
/* Demangled: qmLookupRxBaEntry */
int qmLookupRxBaEntry(void);

/* Symbol: qmIsIndependentPkt */
/* Demangled: qmIsIndependentPkt */
int qmIsIndependentPkt(void);

/* Symbol: mqmParseAssocReqWmmIe */
/* Demangled: mqmParseAssocReqWmmIe */
int mqmParseAssocReqWmmIe(void);

/* Symbol: mqmProcessAssocReq */
/* Demangled: mqmProcessAssocReq */
int mqmProcessAssocReq(void);

/* Symbol: rlmParseCheckMTKOuiIE */
/* Demangled: rlmParseCheckMTKOuiIE */
int rlmParseCheckMTKOuiIE(void);

/* Symbol: mqmParseAssocRspWmmIe */
/* Demangled: mqmParseAssocRspWmmIe */
int mqmParseAssocRspWmmIe(void);

/* Symbol: mqmProcessAssocRsp */
/* Demangled: mqmProcessAssocRsp */
int mqmProcessAssocRsp(void);

/* Symbol: mqmParseEdcaParameters */
/* Demangled: mqmParseEdcaParameters */
int mqmParseEdcaParameters(void);

/* Symbol: qosParseQosMapSet */
/* Demangled: qosParseQosMapSet */
int qosParseQosMapSet(void);

/* Symbol: mqmUpdateEdcaParameters */
/* Demangled: mqmUpdateEdcaParameters */
int mqmUpdateEdcaParameters(void);

/* Symbol: qmResetArpDetect */
/* Demangled: qmResetArpDetect */
int qmResetArpDetect(void);

/* Symbol: mqmProcessBcn */
/* Demangled: mqmProcessBcn */
int mqmProcessBcn(void);

/* Symbol: mqmCompareEdcaParameters */
/* Demangled: mqmCompareEdcaParameters */
int mqmCompareEdcaParameters(void);

/* Symbol: mqmFillAcQueParam */
/* Demangled: mqmFillAcQueParam */
int mqmFillAcQueParam(void);

/* Symbol: mqmProcessScanResult */
/* Demangled: mqmProcessScanResult */
int mqmProcessScanResult(void);

/* Symbol: TdlsBssExtCapParse */
/* Demangled: TdlsBssExtCapParse */
int TdlsBssExtCapParse(void);

/* Symbol: mqmFillWmmInfoIE */
/* Demangled: mqmFillWmmInfoIE */
int mqmFillWmmInfoIE(void);

/* Symbol: mqmGenerateWmmInfoIEByStaRec */
/* Demangled: mqmGenerateWmmInfoIEByStaRec */
int mqmGenerateWmmInfoIEByStaRec(void);

/* Symbol: mqmGenerateWmmInfoIE */
/* Demangled: mqmGenerateWmmInfoIE */
int mqmGenerateWmmInfoIE(void);

/* Symbol: mqmGenerateWmmParamIE */
/* Demangled: mqmGenerateWmmParamIE */
int mqmGenerateWmmParamIE(void);

/* Symbol: mqmGenerateWmmParamIEByParam */
/* Demangled: mqmGenerateWmmParamIEByParam */
int mqmGenerateWmmParamIEByParam(void);

/* Symbol: isProbeResponse */
/* Demangled: isProbeResponse */
int isProbeResponse(void);

/* Symbol: qmUpdateFreeQuota */
/* Demangled: qmUpdateFreeQuota */
int qmUpdateFreeQuota(void);

/* Symbol: qmGetRxReorderQueuedBufferCount */
/* Demangled: qmGetRxReorderQueuedBufferCount */
int qmGetRxReorderQueuedBufferCount(void);

/* Symbol: aisFsmRunEventJoinTimeout */
/* Demangled: aisFsmRunEventJoinTimeout */
int aisFsmRunEventJoinTimeout(void);

/* Symbol: qmReleaseCHAtFinishedDhcp */
/* Demangled: qmReleaseCHAtFinishedDhcp */
int qmReleaseCHAtFinishedDhcp(void);

/* Symbol: qmIsIPLayerPacket */
/* Demangled: qmIsIPLayerPacket */
int qmIsIPLayerPacket(void);

/* Symbol: qmMoveStaTxQueue */
/* Demangled: qmMoveStaTxQueue */
int qmMoveStaTxQueue(void);

/* Symbol: qmHandleDelTspec */
/* Demangled: qmHandleDelTspec */
int qmHandleDelTspec(void);

/* Symbol: aucWmmAC2TcResourceSet1 */
/* Demangled: aucWmmAC2TcResourceSet1 */
extern void* aucWmmAC2TcResourceSet1;

/* Symbol: nicCmdEventQueryNicEfuseAddr */
/* Demangled: nicCmdEventQueryNicEfuseAddr */
int nicCmdEventQueryNicEfuseAddr(void);

/* Symbol: nicCmdEventQueryNicCoexFeature */
/* Demangled: nicCmdEventQueryNicCoexFeature */
int nicCmdEventQueryNicCoexFeature(void);

/* Symbol: nicCmdEventQueryNicCsumOffload */
/* Demangled: nicCmdEventQueryNicCsumOffload */
int nicCmdEventQueryNicCsumOffload(void);

/* Symbol: nicCfgChipCapHwVersion */
/* Demangled: nicCfgChipCapHwVersion */
int nicCfgChipCapHwVersion(void);

/* Symbol: nicCfgChipCapSwVersion */
/* Demangled: nicCfgChipCapSwVersion */
int nicCfgChipCapSwVersion(void);

/* Symbol: nicCfgChipCapMacAddr */
/* Demangled: nicCfgChipCapMacAddr */
int nicCfgChipCapMacAddr(void);

/* Symbol: nicCfgChipCapPhyCap */
/* Demangled: nicCfgChipCapPhyCap */
int nicCfgChipCapPhyCap(void);

/* Symbol: nicCfgChipCapMacCap */
/* Demangled: nicCfgChipCapMacCap */
int nicCfgChipCapMacCap(void);

/* Symbol: nicCfgChipCapFrameBufCap */
/* Demangled: nicCfgChipCapFrameBufCap */
int nicCfgChipCapFrameBufCap(void);

/* Symbol: nicCfgChipCapBeamformCap */
/* Demangled: nicCfgChipCapBeamformCap */
int nicCfgChipCapBeamformCap(void);

/* Symbol: nicCfgChipCapLocationCap */
/* Demangled: nicCfgChipCapLocationCap */
int nicCfgChipCapLocationCap(void);

/* Symbol: nicCfgChipCapMuMimoCap */
/* Demangled: nicCfgChipCapMuMimoCap */
int nicCfgChipCapMuMimoCap(void);

/* Symbol: nicCfgChipAdieHwVersion */
/* Demangled: nicCfgChipAdieHwVersion */
int nicCfgChipAdieHwVersion(void);

/* Symbol: nicCfgChipCapAntSwpCap */
/* Demangled: nicCfgChipCapAntSwpCap */
int nicCfgChipCapAntSwpCap(void);

/* Symbol: nicCfgChipP2PCap */
/* Demangled: nicCfgChipP2PCap */
int nicCfgChipP2PCap(void);

/* Symbol: nicCmdEventQueryCfgRead */
/* Demangled: nicCmdEventQueryCfgRead */
int nicCmdEventQueryCfgRead(void);

/* Symbol: u4RxStatSeqNum */
/* Demangled: u4RxStatSeqNum */
extern void* u4RxStatSeqNum;

/* Symbol: g_HqaRxStat */
/* Demangled: g_HqaRxStat */
extern void* g_HqaRxStat;

/* Symbol: g_rPfmuData */
/* Demangled: g_rPfmuData */
extern void* g_rPfmuData;

/* Symbol: g_rPfmuTag1 */
/* Demangled: g_rPfmuTag1 */
extern void* g_rPfmuTag1;

/* Symbol: g_rPfmuTag2 */
/* Demangled: g_rPfmuTag2 */
extern void* g_rPfmuTag2;

/* Symbol: kalClearSecurityFrames */
/* Demangled: kalClearSecurityFrames */
int kalClearSecurityFrames(void);

/* Symbol: kalClearMgmtFrames */
/* Demangled: kalClearMgmtFrames */
int kalClearMgmtFrames(void);

/* Symbol: kalFlushPendingTxPackets */
/* Demangled: kalFlushPendingTxPackets */
int kalFlushPendingTxPackets(void);

/* Symbol: nicCmdEventQueryMcastAddr */
/* Demangled: nicCmdEventQueryMcastAddr */
int nicCmdEventQueryMcastAddr(void);

/* Symbol: nicCmdEventSetStopSchedScan */
/* Demangled: nicCmdEventSetStopSchedScan */
int nicCmdEventSetStopSchedScan(void);

/* Symbol: kalSchedScanStopped */
/* Demangled: kalSchedScanStopped */
int kalSchedScanStopped(void);

/* Symbol: GetIQData */
/* Demangled: GetIQData */
int GetIQData(void);

/* Symbol: kalCheckPath */
/* Demangled: kalCheckPath */
int kalCheckPath(void);

/* Symbol: kalFileOpen */
/* Demangled: kalFileOpen */
int kalFileOpen(void);

/* Symbol: kalFileRead */
/* Demangled: kalFileRead */
int kalFileRead(void);

/* Symbol: kalFileClose */
/* Demangled: kalFileClose */
int kalFileClose(void);

/* Symbol: nicTsfRawData2IqFmt */
/* Demangled: nicTsfRawData2IqFmt */
int nicTsfRawData2IqFmt(void);

/* Symbol: kalTrunkPath */
/* Demangled: kalTrunkPath */
int kalTrunkPath(void);

/* Symbol: kalWriteToFile */
/* Demangled: kalWriteToFile */
int kalWriteToFile(void);

/* Symbol: nicEventQueryMemDump */
/* Demangled: nicEventQueryMemDump */
int nicEventQueryMemDump(void);

/* Symbol: nicEventHifCtrlv2 */
/* Demangled: nicEventHifCtrlv2 */
int nicEventHifCtrlv2(void);

/* Symbol: g_arMibInfo */
/* Demangled: g_arMibInfo */
extern void* g_arMibInfo;

/* Symbol: p2pFunProcessAcsReport */
/* Demangled: p2pFunProcessAcsReport */
int p2pFunProcessAcsReport(void);

/* Symbol: nicEventRddPulseDump */
/* Demangled: nicEventRddPulseDump */
int nicEventRddPulseDump(void);

/* Symbol: nicEventQueryTxResourceEntry */
/* Demangled: nicEventQueryTxResourceEntry */
int nicEventQueryTxResourceEntry(void);

/* Symbol: nicTxRsrcEvtHdlrTbl */
/* Demangled: nicTxRsrcEvtHdlrTbl */
extern void* nicTxRsrcEvtHdlrTbl;

/* Symbol: nicEventQueryTxResource */
/* Demangled: nicEventQueryTxResource */
int nicEventQueryTxResource(void);

/* Symbol: nicEventQueryTxResource_v1 */
/* Demangled: nicEventQueryTxResource_v1 */
int nicEventQueryTxResource_v1(void);

/* Symbol: gNicCapabilityV2InfoTable */
/* Demangled: gNicCapabilityV2InfoTable */
extern void* gNicCapabilityV2InfoTable;

/* Symbol: nicExtTsfRawData2IqFmt */
/* Demangled: nicExtTsfRawData2IqFmt */
int nicExtTsfRawData2IqFmt(void);

/* Symbol: nicExtEventReCalData */
/* Demangled: nicExtEventReCalData */
int nicExtEventReCalData(void);

/* Symbol: nicExtEventICapIQData */
/* Demangled: nicExtEventICapIQData */
int nicExtEventICapIQData(void);

/* Symbol: nicExtEventQueryMemDump */
/* Demangled: nicExtEventQueryMemDump */
int nicExtEventQueryMemDump(void);

/* Symbol: nicRfTestEventHandler */
/* Demangled: nicRfTestEventHandler */
int nicRfTestEventHandler(void);

/* Symbol: scnEventScanDone */
/* Demangled: scnEventScanDone */
int scnEventScanDone(void);

/* Symbol: scnEventSchedScanDone */
/* Demangled: scnEventSchedScanDone */
int scnEventSchedScanDone(void);

/* Symbol: kalSetFwOwnEvent2Hif */
/* Demangled: kalSetFwOwnEvent2Hif */
int kalSetFwOwnEvent2Hif(void);

/* Symbol: nicEventBtOverWifi */
/* Demangled: nicEventBtOverWifi */
int nicEventBtOverWifi(void);

/* Symbol: nicBeaconTimeoutFilterPolicy */
/* Demangled: nicBeaconTimeoutFilterPolicy */
int nicBeaconTimeoutFilterPolicy(void);

/* Symbol: scanBeaconTimeoutFilterPolicyForAis */
/* Demangled: scanBeaconTimeoutFilterPolicyForAis */
int scanBeaconTimeoutFilterPolicyForAis(void);

/* Symbol: aisBssBeaconTimeout_impl */
/* Demangled: aisBssBeaconTimeout_impl */
int aisBssBeaconTimeout_impl(void);

/* Symbol: p2pRoleFsmRunEventBeaconTimeout */
/* Demangled: p2pRoleFsmRunEventBeaconTimeout */
int p2pRoleFsmRunEventBeaconTimeout(void);

/* Symbol: p2pProcessEvent_UpdateNOAParam */
/* Demangled: p2pProcessEvent_UpdateNOAParam */
int p2pProcessEvent_UpdateNOAParam(void);

/* Symbol: bssRemoveClient */
/* Demangled: bssRemoveClient */
int bssRemoveClient(void);

/* Symbol: p2pFuncDisconnect */
/* Demangled: p2pFuncDisconnect */
int p2pFuncDisconnect(void);

/* Symbol: rlmHandleObssStatusEventPkt */
/* Demangled: rlmHandleObssStatusEventPkt */
int rlmHandleObssStatusEventPkt(void);

/* Symbol: roamingFsmProcessEvent */
/* Demangled: roamingFsmProcessEvent */
int roamingFsmProcessEvent(void);

/* Symbol: TdlsexEventHandle */
/* Demangled: TdlsexEventHandle */
int TdlsexEventHandle(void);

/* Symbol: mtk_cfg80211_vendor_event_rssi_beyond_range */
/* Demangled: mtk_cfg80211_vendor_event_rssi_beyond_range */
int mtk_cfg80211_vendor_event_rssi_beyond_range(void);

/* Symbol: kalOpenCorDumpFile */
/* Demangled: kalOpenCorDumpFile */
int kalOpenCorDumpFile(void);

/* Symbol: kalWriteCorDumpFile */
/* Demangled: kalWriteCorDumpFile */
int kalWriteCorDumpFile(void);

/* Symbol: rlmDomainExtractSingleSkuInfoFromFirmware */
/* Demangled: rlmDomainExtractSingleSkuInfoFromFirmware */
int rlmDomainExtractSingleSkuInfoFromFirmware(void);

/* Symbol: fgEfuseCtrlAxOn */
/* Demangled: fgEfuseCtrlAxOn */
extern void* fgEfuseCtrlAxOn;

/* Symbol: halUmacWrapSourcePortSanityCheck */
/* Demangled: halUmacWrapSourcePortSanityCheck */
int halUmacWrapSourcePortSanityCheck(void);

/* Symbol: halUmacWrapRsvPgCnt */
/* Demangled: halUmacWrapRsvPgCnt */
int halUmacWrapRsvPgCnt(void);

/* Symbol: g_arPsePgInfoAndReserveCrOffsetMap */
/* Demangled: g_arPsePgInfoAndReserveCrOffsetMap */
extern void* g_arPsePgInfoAndReserveCrOffsetMap;

/* Symbol: g_arPlePgInfoAndReserveCrOffsetMap */
/* Demangled: g_arPlePgInfoAndReserveCrOffsetMap */
extern void* g_arPlePgInfoAndReserveCrOffsetMap;

/* Symbol: halUmacWrapSrcPgCnt */
/* Demangled: halUmacWrapSrcPgCnt */
int halUmacWrapSrcPgCnt(void);

/* Symbol: halUmacPbufCtrlTotalPageNum */
/* Demangled: halUmacPbufCtrlTotalPageNum */
int halUmacPbufCtrlTotalPageNum(void);

/* Symbol: halUmacWrapFrePageCnt */
/* Demangled: halUmacWrapFrePageCnt */
int halUmacWrapFrePageCnt(void);

/* Symbol: halUmacWrapFfaCnt */
/* Demangled: halUmacWrapFfaCnt */
int halUmacWrapFfaCnt(void);

/* Symbol: halUmacInfoGetMiscStatus */
/* Demangled: halUmacInfoGetMiscStatus */
int halUmacInfoGetMiscStatus(void);

/* Symbol: nicRxAddP2pDevice */
/* Demangled: nicRxAddP2pDevice */
int nicRxAddP2pDevice(void);

/* Symbol: CFG80211_Suspend */
/* Demangled: CFG80211_Suspend */
int CFG80211_Suspend(void);

/* Symbol: CFG80211_Resume */
/* Demangled: CFG80211_Resume */
int CFG80211_Resume(void);

/* Symbol: wlanSelectQueue */
/* Demangled: wlanSelectQueue */
int wlanSelectQueue(void);

/* Symbol: wlanDoIOCTL */
/* Demangled: wlanDoIOCTL */
int wlanDoIOCTL(void);

/* Symbol: wext_support_ioctl */
/* Demangled: wext_support_ioctl */
int wext_support_ioctl(void);

/* Symbol: priv_support_driver_cmd */
/* Demangled: priv_support_driver_cmd */
int priv_support_driver_cmd(void);

/* Symbol: priv_support_ioctl */
/* Demangled: priv_support_ioctl */
int priv_support_ioctl(void);

/* Symbol: wlanGetGlueInfo */
/* Demangled: wlanGetGlueInfo */
int wlanGetGlueInfo(void);

/* Symbol: wlanSchedScanStoppedWorkQueue */
/* Demangled: wlanSchedScanStoppedWorkQueue */
int wlanSchedScanStoppedWorkQueue(void);

/* Symbol: gPrDev */
/* Demangled: gPrDev */
extern void* gPrDev;

/* Symbol: p2pSetMulticastListWorkQueueWrapper */
/* Demangled: p2pSetMulticastListWorkQueueWrapper */
int p2pSetMulticastListWorkQueueWrapper(void);

/* Symbol: mtk_p2p_wext_set_Multicastlist */
/* Demangled: mtk_p2p_wext_set_Multicastlist */
int mtk_p2p_wext_set_Multicastlist(void);

/* Symbol: wlanHardStartXmit */
/* Demangled: wlanHardStartXmit */
int wlanHardStartXmit(void);

/* Symbol: kalResetPacket */
/* Demangled: kalResetPacket */
int kalResetPacket(void);

/* Symbol: StatsEnvTimeGet */
/* Demangled: StatsEnvTimeGet */
int StatsEnvTimeGet(void);

/* Symbol: kalHardStartXmit */
/* Demangled: kalHardStartXmit */
int kalHardStartXmit(void);

/* Symbol: wlanGetStats */
/* Demangled: wlanGetStats */
int wlanGetStats(void);

/* Symbol: kalGetStats */
/* Demangled: kalGetStats */
int kalGetStats(void);

/* Symbol: wlanMonWorkHandler */
/* Demangled: wlanMonWorkHandler */
int wlanMonWorkHandler(void);

/* Symbol: kalResetStats */
/* Demangled: kalResetStats */
int kalResetStats(void);

/* Symbol: rlmDomainGetDfsChnls */
/* Demangled: rlmDomainGetDfsChnls */
int rlmDomainGetDfsChnls(void);

/* Symbol: wlanGetNdevOps */
/* Demangled: wlanGetNdevOps */
int wlanGetNdevOps(void);

/* Symbol: g_NvramFsm */
/* Demangled: g_NvramFsm */
extern void* g_NvramFsm;

/* Symbol: wlanNvramGetState */
/* Demangled: wlanNvramGetState */
int wlanNvramGetState(void);

/* Symbol: wlanWakeLockInit */
/* Demangled: wlanWakeLockInit */
int wlanWakeLockInit(void);

/* Symbol: wlanWakeLockUninit */
/* Demangled: wlanWakeLockUninit */
int wlanWakeLockUninit(void);

/* Symbol: wlanNetCreate */
/* Demangled: wlanNetCreate */
int wlanNetCreate(void);

/* Symbol: gprNetdev */
/* Demangled: gprNetdev */
extern void* gprNetdev;

/* Symbol: rlmDomainGetCtrlState */
/* Demangled: rlmDomainGetCtrlState */
int rlmDomainGetCtrlState(void);

/* Symbol: rlmDomainResetCtrlInfo */
/* Demangled: rlmDomainResetCtrlInfo */
int rlmDomainResetCtrlInfo(void);

/* Symbol: glGetDev */
/* Demangled: glGetDev */
int glGetDev(void);

/* Symbol: wext_handler_def */
/* Demangled: wext_handler_def */
extern void* wext_handler_def;

/* Symbol: kalTimeoutHandler */
/* Demangled: kalTimeoutHandler */
int kalTimeoutHandler(void);

/* Symbol: kalOsTimerInitialize */
/* Demangled: kalOsTimerInitialize */
int kalOsTimerInitialize(void);

/* Symbol: glSetHifInfo */
/* Demangled: glSetHifInfo */
int glSetHifInfo(void);

/* Symbol: glClearHifInfo */
/* Demangled: glClearHifInfo */
int glClearHifInfo(void);

/* Symbol: wlanNetDestroy */
/* Demangled: wlanNetDestroy */
int wlanNetDestroy(void);

/* Symbol: kalCancelTimer */
/* Demangled: kalCancelTimer */
int kalCancelTimer(void);

/* Symbol: wlanSetSuspendMode */
/* Demangled: wlanSetSuspendMode */
int wlanSetSuspendMode(void);

/* Symbol: g_halt_sem */
/* Demangled: g_halt_sem */
extern void* g_halt_sem;

/* Symbol: g_u4HaltFlag */
/* Demangled: g_u4HaltFlag */
extern void* g_u4HaltFlag;

/* Symbol: kalSetNetAddressFromInterface */
/* Demangled: kalSetNetAddressFromInterface */
int kalSetNetAddressFromInterface(void);

/* Symbol: reset_p2p_mode */
/* Demangled: reset_p2p_mode */
int reset_p2p_mode(void);

/* Symbol: p2pNetUnregister */
/* Demangled: p2pNetUnregister */
int p2pNetUnregister(void);

/* Symbol: set_p2p_mode_handler */
/* Demangled: set_p2p_mode_handler */
int set_p2p_mode_handler(void);

/* Symbol: g_u4DevIdx */
/* Demangled: g_u4DevIdx */
extern void* g_u4DevIdx;

/* Symbol: p2pNetRegister */
/* Demangled: p2pNetRegister */
int p2pNetRegister(void);

/* Symbol: wlanGetParseConfig */
/* Demangled: wlanGetParseConfig */
int wlanGetParseConfig(void);

/* Symbol: wlanDownloadBufferBin */
/* Demangled: wlanDownloadBufferBin */
int wlanDownloadBufferBin(void);

/* Symbol: uacEEPROMImage */
/* Demangled: uacEEPROMImage */
extern void* uacEEPROMImage;

/* Symbol: wlanConnacDownloadBufferBin */
/* Demangled: wlanConnacDownloadBufferBin */
int wlanConnacDownloadBufferBin(void);

/* Symbol: wlanServiceInit */
/* Demangled: wlanServiceInit */
int wlanServiceInit(void);

/* Symbol: gConEmiPhyBaseFinal */
/* Demangled: gConEmiPhyBaseFinal */
extern void* gConEmiPhyBaseFinal;

/* Symbol: gConEmiSizeFinal */
/* Demangled: gConEmiSizeFinal */
extern void* gConEmiSizeFinal;

/* Symbol: ServiceWlanOid */
/* Demangled: ServiceWlanOid */
int ServiceWlanOid(void);

/* Symbol: wlanServiceExit */
/* Demangled: wlanServiceExit */
int wlanServiceExit(void);

/* Symbol: connsysFwLogControl */
/* Demangled: connsysFwLogControl */
int connsysFwLogControl(void);

/* Symbol: wlanOffStopWlanThreads */
/* Demangled: wlanOffStopWlanThreads */
int wlanOffStopWlanThreads(void);

/* Symbol: wlanOffNotifyCfg80211Disconnect */
/* Demangled: wlanOffNotifyCfg80211Disconnect */
int wlanOffNotifyCfg80211Disconnect(void);

/* Symbol: init_module */
/* Demangled: init_module */
int init_module(void);

/* Symbol: kalInitIOBuffer */
/* Demangled: kalInitIOBuffer */
int kalInitIOBuffer(void);

/* Symbol: procInitFs */
/* Demangled: procInitFs */
int procInitFs(void);

/* Symbol: p_mtk_iface_combinations_sta */
/* Demangled: p_mtk_iface_combinations_sta */
extern void* p_mtk_iface_combinations_sta;

/* Symbol: mtk_band_2ghz */
/* Demangled: mtk_band_2ghz */
extern void* mtk_band_2ghz;

/* Symbol: mtk_band_5ghz */
/* Demangled: mtk_band_5ghz */
extern void* mtk_band_5ghz;

/* Symbol: mtk_iface_combinations_sta_num */
/* Demangled: mtk_iface_combinations_sta_num */
extern void* mtk_iface_combinations_sta_num;

/* Symbol: mtk_cipher_suites */
/* Demangled: mtk_cipher_suites */
extern void* mtk_cipher_suites;

/* Symbol: cfg80211_regd_set_wiphy */
/* Demangled: cfg80211_regd_set_wiphy */
int cfg80211_regd_set_wiphy(void);

/* Symbol: mtk_iface_combinations_p2p_num */
/* Demangled: mtk_iface_combinations_p2p_num */
extern void* mtk_iface_combinations_p2p_num;

/* Symbol: p_mtk_iface_combinations_p2p */
/* Demangled: p_mtk_iface_combinations_p2p */
extern void* p_mtk_iface_combinations_p2p;

/* Symbol: glP2pCreateWirelessDevice */
/* Demangled: glP2pCreateWirelessDevice */
int glP2pCreateWirelessDevice(void);

/* Symbol: gprP2pRoleWdev */
/* Demangled: gprP2pRoleWdev */
extern void* gprP2pRoleWdev;

/* Symbol: gprP2pWdev */
/* Demangled: gprP2pWdev */
extern void* gprP2pWdev;

/* Symbol: glRegisterBus */
/* Demangled: glRegisterBus */
int glRegisterBus(void);

/* Symbol: kalUninitIOBuffer */
/* Demangled: kalUninitIOBuffer */
int kalUninitIOBuffer(void);

/* Symbol: glResetInit */
/* Demangled: glResetInit */
int glResetInit(void);

/* Symbol: kalFbNotifierReg */
/* Demangled: kalFbNotifierReg */
int kalFbNotifierReg(void);

/* Symbol: wlanRegisterNetdevNotifier */
/* Demangled: wlanRegisterNetdevNotifier */
int wlanRegisterNetdevNotifier(void);

/* Symbol: g_u4WlanInitFlag */
/* Demangled: g_u4WlanInitFlag */
extern void* g_u4WlanInitFlag;

/* Symbol: cleanup_module */
/* Demangled: cleanup_module */
int cleanup_module(void);

/* Symbol: kalFbNotifierUnReg */
/* Demangled: kalFbNotifierUnReg */
int kalFbNotifierUnReg(void);

/* Symbol: wlanUnregisterNetdevNotifier */
/* Demangled: wlanUnregisterNetdevNotifier */
int wlanUnregisterNetdevNotifier(void);

/* Symbol: glResetUninit */
/* Demangled: glResetUninit */
int glResetUninit(void);

/* Symbol: glUnregisterBus */
/* Demangled: glUnregisterBus */
int glUnregisterBus(void);

/* Symbol: procUninitProcFs */
/* Demangled: procUninitProcFs */
int procUninitProcFs(void);

/* Symbol: sched_workq */
/* Demangled: sched_workq */
extern void* sched_workq;

/* Symbol: kalWowInit */
/* Demangled: kalWowInit */
int kalWowInit(void);

/* Symbol: kalIoctlByBssIdx */
/* Demangled: kalIoctlByBssIdx */
int kalIoctlByBssIdx(void);

/* Symbol: fgSimplifyResetFlow */
/* Demangled: fgSimplifyResetFlow */
extern void* fgSimplifyResetFlow;

/* Symbol: glBusSetIrq */
/* Demangled: glBusSetIrq */
int glBusSetIrq(void);

/* Symbol: glBusInit */
/* Demangled: glBusInit */
int glBusInit(void);

/* Symbol: g_aucNvram */
/* Demangled: g_aucNvram */
extern void* g_aucNvram;

/* Symbol: halRxTasklet */
/* Demangled: halRxTasklet */
int halRxTasklet(void);

/* Symbol: halTxCompleteTasklet */
/* Demangled: halTxCompleteTasklet */
int halTxCompleteTasklet(void);

/* Symbol: kalInitDevWakeup */
/* Demangled: kalInitDevWakeup */
int kalInitDevWakeup(void);

/* Symbol: wlanRegisterInetAddrNotifier */
/* Demangled: wlanRegisterInetAddrNotifier */
int wlanRegisterInetAddrNotifier(void);

/* Symbol: procCreateFsEntry */
/* Demangled: procCreateFsEntry */
int procCreateFsEntry(void);

/* Symbol: kalMetInit */
/* Demangled: kalMetInit */
int kalMetInit(void);

/* Symbol: kalWlanUeventInit */
/* Demangled: kalWlanUeventInit */
int kalWlanUeventInit(void);

/* Symbol: kalMetInitProcfs */
/* Demangled: kalMetInitProcfs */
int kalMetInitProcfs(void);

/* Symbol: kalMetRemoveProcfs */
/* Demangled: kalMetRemoveProcfs */
int kalMetRemoveProcfs(void);

/* Symbol: glBusFreeIrq */
/* Demangled: glBusFreeIrq */
int glBusFreeIrq(void);

/* Symbol: kalSetHalted */
/* Demangled: kalSetHalted */
int kalSetHalted(void);

/* Symbol: kalPerMonDestroy */
/* Demangled: kalPerMonDestroy */
int kalPerMonDestroy(void);

/* Symbol: procRemoveProcfs */
/* Demangled: procRemoveProcfs */
int procRemoveProcfs(void);

/* Symbol: wlanUnregisterInetAddrNotifier */
/* Demangled: wlanUnregisterInetAddrNotifier */
int wlanUnregisterInetAddrNotifier(void);

/* Symbol: kalWlanUeventDeinit */
/* Demangled: kalWlanUeventDeinit */
int kalWlanUeventDeinit(void);

/* Symbol: glBusRelease */
/* Demangled: glBusRelease */
int glBusRelease(void);

/* Symbol: fgIsResetting */
/* Demangled: fgIsResetting */
extern void* fgIsResetting;

/* Symbol: kalIsHalted */
/* Demangled: kalIsHalted */
int kalIsHalted(void);

/* Symbol: halDeAggRxPktWorker */
/* Demangled: halDeAggRxPktWorker */
int halDeAggRxPktWorker(void);

/* Symbol: kalFreeTxMsduWorker */
/* Demangled: kalFreeTxMsduWorker */
int kalFreeTxMsduWorker(void);

/* Symbol: main_thread */
/* Demangled: main_thread */
int main_thread(void);

/* Symbol: hif_thread */
/* Demangled: hif_thread */
int hif_thread(void);

/* Symbol: rx_thread */
/* Demangled: rx_thread */
int rx_thread(void);

/* Symbol: rlmDomainSendInfoToFirmware */
/* Demangled: rlmDomainSendInfoToFirmware */
int rlmDomainSendInfoToFirmware(void);

/* Symbol: cnmInitDbdcSetting */
/* Demangled: cnmInitDbdcSetting */
int cnmInitDbdcSetting(void);

/* Symbol: kalPerMonInit */
/* Demangled: kalPerMonInit */
int kalPerMonInit(void);

/* Symbol: mtk_cfg_suspend */
/* Demangled: mtk_cfg_suspend */
int mtk_cfg_suspend(void);

/* Symbol: mtk_cfg_resume */
/* Demangled: mtk_cfg_resume */
int mtk_cfg_resume(void);

/* Symbol: mtk_cfg_add_iface */
/* Demangled: mtk_cfg_add_iface */
int mtk_cfg_add_iface(void);

/* Symbol: mtk_cfg_del_iface */
/* Demangled: mtk_cfg_del_iface */
int mtk_cfg_del_iface(void);

/* Symbol: mtk_cfg_change_iface */
/* Demangled: mtk_cfg_change_iface */
int mtk_cfg_change_iface(void);

/* Symbol: mtk_cfg_add_key */
/* Demangled: mtk_cfg_add_key */
int mtk_cfg_add_key(void);

/* Symbol: mtk_cfg_get_key */
/* Demangled: mtk_cfg_get_key */
int mtk_cfg_get_key(void);

/* Symbol: mtk_cfg_del_key */
/* Demangled: mtk_cfg_del_key */
int mtk_cfg_del_key(void);

/* Symbol: mtk_cfg_set_default_key */
/* Demangled: mtk_cfg_set_default_key */
int mtk_cfg_set_default_key(void);

/* Symbol: mtk_cfg_set_default_mgmt_key */
/* Demangled: mtk_cfg_set_default_mgmt_key */
int mtk_cfg_set_default_mgmt_key(void);

/* Symbol: mtk_cfg_start_ap */
/* Demangled: mtk_cfg_start_ap */
int mtk_cfg_start_ap(void);

/* Symbol: mtk_cfg_change_beacon */
/* Demangled: mtk_cfg_change_beacon */
int mtk_cfg_change_beacon(void);

/* Symbol: mtk_cfg_stop_ap */
/* Demangled: mtk_cfg_stop_ap */
int mtk_cfg_stop_ap(void);

/* Symbol: mtk_cfg_add_station */
/* Demangled: mtk_cfg_add_station */
int mtk_cfg_add_station(void);

/* Symbol: mtk_cfg_del_station */
/* Demangled: mtk_cfg_del_station */
int mtk_cfg_del_station(void);

/* Symbol: mtk_cfg_change_station */
/* Demangled: mtk_cfg_change_station */
int mtk_cfg_change_station(void);

/* Symbol: mtk_cfg_get_station */
/* Demangled: mtk_cfg_get_station */
int mtk_cfg_get_station(void);

/* Symbol: mtk_cfg_change_bss */
/* Demangled: mtk_cfg_change_bss */
int mtk_cfg_change_bss(void);

/* Symbol: mtk_cfg_scan */
/* Demangled: mtk_cfg_scan */
int mtk_cfg_scan(void);

/* Symbol: mtk_cfg_abort_scan */
/* Demangled: mtk_cfg_abort_scan */
int mtk_cfg_abort_scan(void);

/* Symbol: mtk_cfg_assoc */
/* Demangled: mtk_cfg_assoc */
int mtk_cfg_assoc(void);

/* Symbol: mtk_cfg_deauth */
/* Demangled: mtk_cfg_deauth */
int mtk_cfg_deauth(void);

/* Symbol: mtk_cfg_disassoc */
/* Demangled: mtk_cfg_disassoc */
int mtk_cfg_disassoc(void);

/* Symbol: mtk_cfg_connect */
/* Demangled: mtk_cfg_connect */
int mtk_cfg_connect(void);

/* Symbol: mtk_cfg_disconnect */
/* Demangled: mtk_cfg_disconnect */
int mtk_cfg_disconnect(void);

/* Symbol: mtk_cfg_join_ibss */
/* Demangled: mtk_cfg_join_ibss */
int mtk_cfg_join_ibss(void);

/* Symbol: mtk_cfg_leave_ibss */
/* Demangled: mtk_cfg_leave_ibss */
int mtk_cfg_leave_ibss(void);

/* Symbol: mtk_cfg_set_wiphy_params */
/* Demangled: mtk_cfg_set_wiphy_params */
int mtk_cfg_set_wiphy_params(void);

/* Symbol: mtk_cfg_set_txpower */
/* Demangled: mtk_cfg_set_txpower */
int mtk_cfg_set_txpower(void);

/* Symbol: mtk_cfg_get_txpower */
/* Demangled: mtk_cfg_get_txpower */
int mtk_cfg_get_txpower(void);

/* Symbol: mtk_cfg_testmode_cmd */
/* Demangled: mtk_cfg_testmode_cmd */
int mtk_cfg_testmode_cmd(void);

/* Symbol: mtk_cfg_set_bitrate_mask */
/* Demangled: mtk_cfg_set_bitrate_mask */
int mtk_cfg_set_bitrate_mask(void);

/* Symbol: mtk_cfg_set_pmksa */
/* Demangled: mtk_cfg_set_pmksa */
int mtk_cfg_set_pmksa(void);

/* Symbol: mtk_cfg_del_pmksa */
/* Demangled: mtk_cfg_del_pmksa */
int mtk_cfg_del_pmksa(void);

/* Symbol: mtk_cfg_flush_pmksa */
/* Demangled: mtk_cfg_flush_pmksa */
int mtk_cfg_flush_pmksa(void);

/* Symbol: mtk_cfg_remain_on_channel */
/* Demangled: mtk_cfg_remain_on_channel */
int mtk_cfg_remain_on_channel(void);

/* Symbol: mtk_cfg_cancel_remain_on_channel */
/* Demangled: mtk_cfg_cancel_remain_on_channel */
int mtk_cfg_cancel_remain_on_channel(void);

/* Symbol: mtk_cfg_mgmt_tx */
/* Demangled: mtk_cfg_mgmt_tx */
int mtk_cfg_mgmt_tx(void);

/* Symbol: mtk_cfg_mgmt_tx_cancel_wait */
/* Demangled: mtk_cfg_mgmt_tx_cancel_wait */
int mtk_cfg_mgmt_tx_cancel_wait(void);

/* Symbol: mtk_cfg_set_power_mgmt */
/* Demangled: mtk_cfg_set_power_mgmt */
int mtk_cfg_set_power_mgmt(void);

/* Symbol: mtk_cfg_mgmt_frame_register */
/* Demangled: mtk_cfg_mgmt_frame_register */
int mtk_cfg_mgmt_frame_register(void);

/* Symbol: mtk_cfg_sched_scan_start */
/* Demangled: mtk_cfg_sched_scan_start */
int mtk_cfg_sched_scan_start(void);

/* Symbol: mtk_cfg_sched_scan_stop */
/* Demangled: mtk_cfg_sched_scan_stop */
int mtk_cfg_sched_scan_stop(void);

/* Symbol: mtk_cfg_set_rekey_data */
/* Demangled: mtk_cfg_set_rekey_data */
int mtk_cfg_set_rekey_data(void);

/* Symbol: mtk_cfg_tdls_mgmt */
/* Demangled: mtk_cfg_tdls_mgmt */
int mtk_cfg_tdls_mgmt(void);

/* Symbol: mtk_cfg_tdls_oper */
/* Demangled: mtk_cfg_tdls_oper */
int mtk_cfg_tdls_oper(void);

/* Symbol: mtk_cfg_start_radar_detection */
/* Demangled: mtk_cfg_start_radar_detection */
int mtk_cfg_start_radar_detection(void);

/* Symbol: mtk_cfg80211_update_ft_ies */
/* Demangled: mtk_cfg80211_update_ft_ies */
int mtk_cfg80211_update_ft_ies(void);

/* Symbol: mtk_cfg_channel_switch */
/* Demangled: mtk_cfg_channel_switch */
int mtk_cfg_channel_switch(void);

/* Symbol: mtk_cfg80211_external_auth */
/* Demangled: mtk_cfg80211_external_auth */
int mtk_cfg80211_external_auth(void);

/* Symbol: mtk_cfg80211_vendor_get_channel_list */
/* Demangled: mtk_cfg80211_vendor_get_channel_list */
int mtk_cfg80211_vendor_get_channel_list(void);

/* Symbol: mtk_cfg80211_vendor_set_country_code */
/* Demangled: mtk_cfg80211_vendor_set_country_code */
int mtk_cfg80211_vendor_set_country_code(void);

/* Symbol: mtk_cfg80211_vendor_set_scan_mac_oui */
/* Demangled: mtk_cfg80211_vendor_set_scan_mac_oui */
int mtk_cfg80211_vendor_set_scan_mac_oui(void);

/* Symbol: mtk_cfg80211_vendor_set_band */
/* Demangled: mtk_cfg80211_vendor_set_band */
int mtk_cfg80211_vendor_set_band(void);

/* Symbol: mtk_cfg80211_vendor_set_roaming_param */
/* Demangled: mtk_cfg80211_vendor_set_roaming_param */
int mtk_cfg80211_vendor_set_roaming_param(void);

/* Symbol: mtk_cfg80211_vendor_set_roaming_policy */
/* Demangled: mtk_cfg80211_vendor_set_roaming_policy */
int mtk_cfg80211_vendor_set_roaming_policy(void);

/* Symbol: mtk_cfg80211_vendor_get_roaming_capabilities */
/* Demangled: mtk_cfg80211_vendor_get_roaming_capabilities */
int mtk_cfg80211_vendor_get_roaming_capabilities(void);

/* Symbol: mtk_cfg80211_vendor_config_roaming */
/* Demangled: mtk_cfg80211_vendor_config_roaming */
int mtk_cfg80211_vendor_config_roaming(void);

/* Symbol: mtk_cfg80211_vendor_enable_roaming */
/* Demangled: mtk_cfg80211_vendor_enable_roaming */
int mtk_cfg80211_vendor_enable_roaming(void);

/* Symbol: mtk_cfg80211_vendor_get_rtt_capabilities */
/* Demangled: mtk_cfg80211_vendor_get_rtt_capabilities */
int mtk_cfg80211_vendor_get_rtt_capabilities(void);

/* Symbol: mtk_cfg80211_vendor_llstats_get_info */
/* Demangled: mtk_cfg80211_vendor_llstats_get_info */
int mtk_cfg80211_vendor_llstats_get_info(void);

/* Symbol: mtk_cfg80211_vendor_set_rssi_monitoring */
/* Demangled: mtk_cfg80211_vendor_set_rssi_monitoring */
int mtk_cfg80211_vendor_set_rssi_monitoring(void);

/* Symbol: mtk_cfg80211_vendor_packet_keep_alive_start */
/* Demangled: mtk_cfg80211_vendor_packet_keep_alive_start */
int mtk_cfg80211_vendor_packet_keep_alive_start(void);

/* Symbol: mtk_cfg80211_vendor_packet_keep_alive_stop */
/* Demangled: mtk_cfg80211_vendor_packet_keep_alive_stop */
int mtk_cfg80211_vendor_packet_keep_alive_stop(void);

/* Symbol: mtk_cfg80211_vendor_get_version */
/* Demangled: mtk_cfg80211_vendor_get_version */
int mtk_cfg80211_vendor_get_version(void);

/* Symbol: mtk_cfg80211_vendor_get_supported_feature_set */
/* Demangled: mtk_cfg80211_vendor_get_supported_feature_set */
int mtk_cfg80211_vendor_get_supported_feature_set(void);

/* Symbol: mtk_cfg80211_vendor_set_tx_power_scenario */
/* Demangled: mtk_cfg80211_vendor_set_tx_power_scenario */
int mtk_cfg80211_vendor_set_tx_power_scenario(void);

/* Symbol: mtk_cfg80211_vendor_get_preferred_freq_list */
/* Demangled: mtk_cfg80211_vendor_get_preferred_freq_list */
int mtk_cfg80211_vendor_get_preferred_freq_list(void);

/* Symbol: mtk_cfg80211_vendor_acs */
/* Demangled: mtk_cfg80211_vendor_acs */
int mtk_cfg80211_vendor_acs(void);

/* Symbol: mtk_cfg80211_vendor_get_features */
/* Demangled: mtk_cfg80211_vendor_get_features */
int mtk_cfg80211_vendor_get_features(void);

/* Symbol: mtk_cfg80211_vendor_driver_memory_dump */
/* Demangled: mtk_cfg80211_vendor_driver_memory_dump */
int mtk_cfg80211_vendor_driver_memory_dump(void);

/* Symbol: kalFirmwareOpen */
/* Demangled: kalFirmwareOpen */
int kalFirmwareOpen(void);

/* Symbol: fw_entry */
/* Demangled: fw_entry */
extern void* fw_entry;

/* Symbol: kalFirmwareClose */
/* Demangled: kalFirmwareClose */
int kalFirmwareClose(void);

/* Symbol: kalFirmwareLoad */
/* Demangled: kalFirmwareLoad */
int kalFirmwareLoad(void);

/* Symbol: kalFirmwareSize */
/* Demangled: kalFirmwareSize */
int kalFirmwareSize(void);

/* Symbol: kalConstructDefaultFirmwarePrio */
/* Demangled: kalConstructDefaultFirmwarePrio */
int kalConstructDefaultFirmwarePrio(void);

/* Symbol: kalFirmwareImageMapping */
/* Demangled: kalFirmwareImageMapping */
int kalFirmwareImageMapping(void);

/* Symbol: kalFirmwareImageUnmapping */
/* Demangled: kalFirmwareImageUnmapping */
int kalFirmwareImageUnmapping(void);

/* Symbol: kalUpdateRxCSUMOffloadParam */
/* Demangled: kalUpdateRxCSUMOffloadParam */
int kalUpdateRxCSUMOffloadParam(void);

/* Symbol: kalPacketAllocWithHeadroom */
/* Demangled: kalPacketAllocWithHeadroom */
int kalPacketAllocWithHeadroom(void);

/* Symbol: kalRxIndicatePkts */
/* Demangled: kalRxIndicatePkts */
int kalRxIndicatePkts(void);

/* Symbol: StatsEnvRxTime2Host */
/* Demangled: StatsEnvRxTime2Host */
int StatsEnvRxTime2Host(void);

/* Symbol: StatsLogPkts */
/* Demangled: StatsLogPkts */
int StatsLogPkts(void);

/* Symbol: kal_gro_flush */
/* Demangled: kal_gro_flush */
int kal_gro_flush(void);

/* Symbol: kal_is_skb_gro */
/* Demangled: kal_is_skb_gro */
int kal_is_skb_gro(void);

/* Symbol: wext_indicate_wext_event */
/* Demangled: wext_indicate_wext_event */
int wext_indicate_wext_event(void);

/* Symbol: aucScanLogPrefix */
/* Demangled: aucScanLogPrefix */
extern void* aucScanLogPrefix;

/* Symbol: StatsResetTxRx */
/* Demangled: StatsResetTxRx */
int StatsResetTxRx(void);

/* Symbol: scanLogCacheFlushBSS */
/* Demangled: scanLogCacheFlushBSS */
int scanLogCacheFlushBSS(void);

/* Symbol: kalBigDataPip */
/* Demangled: kalBigDataPip */
int kalBigDataPip(void);

/* Symbol: p2pFuncSwitchSapChannel */
/* Demangled: p2pFuncSwitchSapChannel */
int p2pFuncSwitchSapChannel(void);

/* Symbol: aisGetFtEventParam */
/* Demangled: aisGetFtEventParam */
int aisGetFtEventParam(void);

/* Symbol: kalScanLogCacheFlushBSS */
/* Demangled: kalScanLogCacheFlushBSS */
int kalScanLogCacheFlushBSS(void);

/* Symbol: kalUpdateReAssocReqInfo */
/* Demangled: kalUpdateReAssocReqInfo */
int kalUpdateReAssocReqInfo(void);

/* Symbol: kalUpdateReAssocRspInfo */
/* Demangled: kalUpdateReAssocRspInfo */
int kalUpdateReAssocRspInfo(void);

/* Symbol: kalIsPairwiseEapolPacket */
/* Demangled: kalIsPairwiseEapolPacket */
int kalIsPairwiseEapolPacket(void);

/* Symbol: kalQueryRegistryMacAddr */
/* Demangled: kalQueryRegistryMacAddr */
int kalQueryRegistryMacAddr(void);

/* Symbol: kalIPv4FrameClassifier */
/* Demangled: kalIPv4FrameClassifier */
int kalIPv4FrameClassifier(void);

/* Symbol: kalIPv6FrameClassifier */
/* Demangled: kalIPv6FrameClassifier */
int kalIPv6FrameClassifier(void);

/* Symbol: kalArpFrameClassifier */
/* Demangled: kalArpFrameClassifier */
int kalArpFrameClassifier(void);

/* Symbol: kalTdlsFrameClassifier */
/* Demangled: kalTdlsFrameClassifier */
int kalTdlsFrameClassifier(void);

/* Symbol: kalSecurityFrameClassifier */
/* Demangled: kalSecurityFrameClassifier */
int kalSecurityFrameClassifier(void);

/* Symbol: getUpFromDscp */
/* Demangled: getUpFromDscp */
int getUpFromDscp(void);

/* Symbol: StatsTxPktInfoDisplay */
/* Demangled: StatsTxPktInfoDisplay */
int StatsTxPktInfoDisplay(void);

/* Symbol: kalGetLocalTime */
/* Demangled: kalGetLocalTime */
int kalGetLocalTime(void);

/* Symbol: kalThreadSchedMark */
/* Demangled: kalThreadSchedMark */
int kalThreadSchedMark(void);

/* Symbol: kalThreadSchedUnmark */
/* Demangled: kalThreadSchedUnmark */
int kalThreadSchedUnmark(void);

/* Symbol: kalClearMgmtFramesByBssIdx */
/* Demangled: kalClearMgmtFramesByBssIdx */
int kalClearMgmtFramesByBssIdx(void);

/* Symbol: kalIsCommandDataPath */
/* Demangled: kalIsCommandDataPath */
int kalIsCommandDataPath(void);

/* Symbol: kalProcessTxPacket */
/* Demangled: kalProcessTxPacket */
int kalProcessTxPacket(void);

/* Symbol: kalProcessTxReq */
/* Demangled: kalProcessTxReq */
int kalProcessTxReq(void);

/* Symbol: halUpdateTxMaxQuota */
/* Demangled: halUpdateTxMaxQuota */
int halUpdateTxMaxQuota(void);

/* Symbol: halNotifyMdCrash */
/* Demangled: halNotifyMdCrash */
int halNotifyMdCrash(void);

/* Symbol: p2pFuncUpdateMgmtFrameRegister */
/* Demangled: p2pFuncUpdateMgmtFrameRegister */
int p2pFuncUpdateMgmtFrameRegister(void);

/* Symbol: kalDevPortRead */
/* Demangled: kalDevPortRead */
int kalDevPortRead(void);

/* Symbol: kalHandleAssocInfo */
/* Demangled: kalHandleAssocInfo */
int kalHandleAssocInfo(void);

/* Symbol: kalSetTimer */
/* Demangled: kalSetTimer */
int kalSetTimer(void);

/* Symbol: kalScanDone */
/* Demangled: kalScanDone */
int kalScanDone(void);

/* Symbol: scanLogEssResult */
/* Demangled: scanLogEssResult */
int scanLogEssResult(void);

/* Symbol: scanReportBss2Cfg80211 */
/* Demangled: scanReportBss2Cfg80211 */
int scanReportBss2Cfg80211(void);

/* Symbol: kalUpdateBssTimestamp */
/* Demangled: kalUpdateBssTimestamp */
int kalUpdateBssTimestamp(void);

/* Symbol: kalGetBootTime */
/* Demangled: kalGetBootTime */
int kalGetBootTime(void);

/* Symbol: kalRandomNumber */
/* Demangled: kalRandomNumber */
int kalRandomNumber(void);

/* Symbol: kalSetSerTimeoutEvent */
/* Demangled: kalSetSerTimeoutEvent */
int kalSetSerTimeoutEvent(void);

/* Symbol: kalSetWmmUpdateEvent */
/* Demangled: kalSetWmmUpdateEvent */
int kalSetWmmUpdateEvent(void);

/* Symbol: kalSetMdCrashEvent */
/* Demangled: kalSetMdCrashEvent */
int kalSetMdCrashEvent(void);

/* Symbol: kalGetChannelList */
/* Demangled: kalGetChannelList */
int kalGetChannelList(void);

/* Symbol: kalIsAPmode */
/* Demangled: kalIsAPmode */
int kalIsAPmode(void);

/* Symbol: kalGetMfpSetting */
/* Demangled: kalGetMfpSetting */
int kalGetMfpSetting(void);

/* Symbol: kalGetRsnIeMfpCap */
/* Demangled: kalGetRsnIeMfpCap */
int kalGetRsnIeMfpCap(void);

/* Symbol: kalFileWrite */
/* Demangled: kalFileWrite */
int kalFileWrite(void);

/* Symbol: scanLogCacheAddBSS */
/* Demangled: scanLogCacheAddBSS */
int scanLogCacheAddBSS(void);

/* Symbol: kalScanResultLog */
/* Demangled: kalScanResultLog */
int kalScanResultLog(void);

/* Symbol: kalReadyOnChannel */
/* Demangled: kalReadyOnChannel */
int kalReadyOnChannel(void);

/* Symbol: kalRemainOnChannelExpired */
/* Demangled: kalRemainOnChannelExpired */
int kalRemainOnChannelExpired(void);

/* Symbol: kalIndicateMgmtTxStatus */
/* Demangled: kalIndicateMgmtTxStatus */
int kalIndicateMgmtTxStatus(void);

/* Symbol: kalIndicateRxMgmtFrame */
/* Demangled: kalIndicateRxMgmtFrame */
int kalIndicateRxMgmtFrame(void);

/* Symbol: kalSchedScanResults */
/* Demangled: kalSchedScanResults */
int kalSchedScanResults(void);

/* Symbol: kalGetIPv4Address */
/* Demangled: kalGetIPv4Address */
int kalGetIPv4Address(void);

/* Symbol: kalGetIPv6Address */
/* Demangled: kalGetIPv6Address */
int kalGetIPv6Address(void);

/* Symbol: kalSetNetAddress */
/* Demangled: kalSetNetAddress */
int kalSetNetAddress(void);

/* Symbol: kalMetCheckProfilingPacket */
/* Demangled: kalMetCheckProfilingPacket */
int kalMetCheckProfilingPacket(void);

/* Symbol: pMetGlobalData */
/* Demangled: pMetGlobalData */
extern void* pMetGlobalData;

/* Symbol: pMetProcDir */
/* Demangled: pMetProcDir */
extern void* pMetProcDir;

/* Symbol: rMetProcCtrlFops */
/* Demangled: rMetProcCtrlFops */
extern void* rMetProcCtrlFops;

/* Symbol: rMetProcPortFops */
/* Demangled: rMetProcPortFops */
extern void* rMetProcPortFops;

/* Symbol: apucCorDumpCr4FileName */
/* Demangled: apucCorDumpCr4FileName */
extern void* apucCorDumpCr4FileName;

/* Symbol: apucCorDumpN9FileName */
/* Demangled: apucCorDumpN9FileName */
extern void* apucCorDumpN9FileName;

/* Symbol: kalWowCmdEventSetCb */
/* Demangled: kalWowCmdEventSetCb */
int kalWowCmdEventSetCb(void);

/* Symbol: kalFreeTxMsdu */
/* Demangled: kalFreeTxMsdu */
int kalFreeTxMsdu(void);

/* Symbol: kalHaltLock */
/* Demangled: kalHaltLock */
int kalHaltLock(void);

/* Symbol: kalHaltTryLock */
/* Demangled: kalHaltTryLock */
int kalHaltTryLock(void);

/* Symbol: kalHaltUnlock */
/* Demangled: kalHaltUnlock */
int kalHaltUnlock(void);

/* Symbol: kalPerMonHandler */
/* Demangled: kalPerMonHandler */
int kalPerMonHandler(void);

/* Symbol: kalSetRpsMap */
/* Demangled: kalSetRpsMap */
int kalSetRpsMap(void);

/* Symbol: wlan_perf_monitor_force_enable */
/* Demangled: wlan_perf_monitor_force_enable */
extern void* wlan_perf_monitor_force_enable;

/* Symbol: kalCheckTputLoad */
/* Demangled: kalCheckTputLoad */
int kalCheckTputLoad(void);

/* Symbol: wlan_set_rps_map */
/* Demangled: wlan_set_rps_map */
int wlan_set_rps_map(void);

/* Symbol: kalPerMonDisable */
/* Demangled: kalPerMonDisable */
int kalPerMonDisable(void);

/* Symbol: kalPerMonStop */
/* Demangled: kalPerMonStop */
int kalPerMonStop(void);

/* Symbol: kalPerMonEnable */
/* Demangled: kalPerMonEnable */
int kalPerMonEnable(void);

/* Symbol: kalPerMonGetInfo */
/* Demangled: kalPerMonGetInfo */
int kalPerMonGetInfo(void);

/* Symbol: kalSetCpuNumFreq */
/* Demangled: kalSetCpuNumFreq */
int kalSetCpuNumFreq(void);

/* Symbol: kalGetConnsysVerId */
/* Demangled: kalGetConnsysVerId */
int kalGetConnsysVerId(void);

/* Symbol: kalPerMonSetForceEnableFlag */
/* Demangled: kalPerMonSetForceEnableFlag */
int kalPerMonSetForceEnableFlag(void);

/* Symbol: wlan_fb_notifier_priv_data */
/* Demangled: wlan_fb_notifier_priv_data */
extern void* wlan_fb_notifier_priv_data;

/* Symbol: kalIndicateChannelSwitch */
/* Demangled: kalIndicateChannelSwitch */
int kalIndicateChannelSwitch(void);

/* Symbol: kalIsOuiMask */
/* Demangled: kalIsOuiMask */
int kalIsOuiMask(void);

/* Symbol: kalIsValidMacAddr */
/* Demangled: kalIsValidMacAddr */
int kalIsValidMacAddr(void);

/* Symbol: kalParseRandomMac */
/* Demangled: kalParseRandomMac */
int kalParseRandomMac(void);

/* Symbol: kalScanParseRandomMac */
/* Demangled: kalScanParseRandomMac */
int kalScanParseRandomMac(void);

/* Symbol: kalSchedScanParseRandomMac */
/* Demangled: kalSchedScanParseRandomMac */
int kalSchedScanParseRandomMac(void);

/* Symbol: kalScanReqLog */
/* Demangled: kalScanReqLog */
int kalScanReqLog(void);

/* Symbol: kalChannelScoSwitch */
/* Demangled: kalChannelScoSwitch */
int kalChannelScoSwitch(void);

/* Symbol: kalChannelFormatSwitch */
/* Demangled: kalChannelFormatSwitch */
int kalChannelFormatSwitch(void);

/* Symbol: kalRemoveBss */
/* Demangled: kalRemoveBss */
int kalRemoveBss(void);

/* Symbol: kalMaskMemCmp */
/* Demangled: kalMaskMemCmp */
int kalMaskMemCmp(void);

/* Symbol: kalExternalAuthRequest */
/* Demangled: kalExternalAuthRequest */
int kalExternalAuthRequest(void);

/* Symbol: kalFindIeMatchMask */
/* Demangled: kalFindIeMatchMask */
int kalFindIeMatchMask(void);

/* Symbol: wext_get_wireless_stats */
/* Demangled: wext_get_wireless_stats */
int wext_get_wireless_stats(void);

/* Symbol: wextSrchDesiredWPAIE */
/* Demangled: wextSrchDesiredWPAIE */
int wextSrchDesiredWPAIE(void);

/* Symbol: wextSrchDesiredWPSIE */
/* Demangled: wextSrchDesiredWPSIE */
int wextSrchDesiredWPSIE(void);

/* Symbol: wext_get_priv */
/* Demangled: wext_get_priv */
int wext_get_priv(void);

/* Symbol: aisGetWapiMode */
/* Demangled: aisGetWapiMode */
int aisGetWapiMode(void);

/* Symbol: keyStructBuf */
/* Demangled: keyStructBuf */
extern void* keyStructBuf;

/* Symbol: channel_freq */
/* Demangled: channel_freq */
extern void* channel_freq;

/* Symbol: priv_set_int */
/* Demangled: priv_set_int */
int priv_set_int(void);

/* Symbol: priv_get_int */
/* Demangled: priv_get_int */
int priv_get_int(void);

/* Symbol: priv_set_struct */
/* Demangled: priv_set_struct */
int priv_set_struct(void);

/* Symbol: priv_get_struct */
/* Demangled: priv_get_struct */
int priv_get_struct(void);

/* Symbol: priv_set_ints */
/* Demangled: priv_set_ints */
int priv_set_ints(void);

/* Symbol: priv_get_ints */
/* Demangled: priv_get_ints */
int priv_get_ints(void);

/* Symbol: priv_set_driver */
/* Demangled: priv_set_driver */
int priv_set_driver(void);

/* Symbol: priv_qa_agent */
/* Demangled: priv_qa_agent */
int priv_qa_agent(void);

/* Symbol: priv_ate_set */
/* Demangled: priv_ate_set */
int priv_ate_set(void);

/* Symbol: priv_set_ap */
/* Demangled: priv_set_ap */
int priv_set_ap(void);

/* Symbol: __priv_set_ap */
/* Demangled: __priv_set_ap */
int fn___priv_set_ap(void) __asm__("__priv_set_ap");

/* Symbol: __priv_set_int */
/* Demangled: __priv_set_int */
int fn___priv_set_int(void) __asm__("__priv_set_int");

/* Symbol: __priv_get_int */
/* Demangled: __priv_get_int */
int fn___priv_get_int(void) __asm__("__priv_get_int");

/* Symbol: __priv_set_struct */
/* Demangled: __priv_set_struct */
int fn___priv_set_struct(void) __asm__("__priv_set_struct");

/* Symbol: __priv_get_struct */
/* Demangled: __priv_get_struct */
int fn___priv_get_struct(void) __asm__("__priv_get_struct");

/* Symbol: __priv_set_ints */
/* Demangled: __priv_set_ints */
int fn___priv_set_ints(void) __asm__("__priv_set_ints");

/* Symbol: __priv_get_ints */
/* Demangled: __priv_get_ints */
int fn___priv_get_ints(void) __asm__("__priv_get_ints");

/* Symbol: priv_driver_cmds */
/* Demangled: priv_driver_cmds */
int priv_driver_cmds(void);

/* Symbol: priv_cmd_handlers */
/* Demangled: priv_cmd_handlers */
extern void* priv_cmd_handlers;

/* Symbol: priv_driver_set_bf */
/* Demangled: priv_driver_set_bf */
int priv_driver_set_bf(void);

/* Symbol: priv_driver_set_nss */
/* Demangled: priv_driver_set_nss */
int priv_driver_set_nss(void);

/* Symbol: priv_driver_set_amsdu_tx */
/* Demangled: priv_driver_set_amsdu_tx */
int priv_driver_set_amsdu_tx(void);

/* Symbol: priv_driver_set_amsdu_rx */
/* Demangled: priv_driver_set_amsdu_rx */
int priv_driver_set_amsdu_rx(void);

/* Symbol: priv_driver_set_ampdu_tx */
/* Demangled: priv_driver_set_ampdu_tx */
int priv_driver_set_ampdu_tx(void);

/* Symbol: priv_driver_set_ampdu_rx */
/* Demangled: priv_driver_set_ampdu_rx */
int priv_driver_set_ampdu_rx(void);

/* Symbol: priv_driver_set_qos */
/* Demangled: priv_driver_set_qos */
int priv_driver_set_qos(void);

/* Symbol: __priv_ate_set */
/* Demangled: __priv_ate_set */
int fn___priv_ate_set(void) __asm__("__priv_ate_set");

/* Symbol: AteCmdSetHandle */
/* Demangled: AteCmdSetHandle */
int AteCmdSetHandle(void);

/* Symbol: priv_driver_get_dbg_level */
/* Demangled: priv_driver_get_dbg_level */
int priv_driver_get_dbg_level(void);

/* Symbol: priv_driver_rate_to_string */
/* Demangled: priv_driver_rate_to_string */
int priv_driver_rate_to_string(void);

/* Symbol: priv_driver_set_mcr */
/* Demangled: priv_driver_set_mcr */
int priv_driver_set_mcr(void);

/* Symbol: priv_driver_set_fixed_fallback */
/* Demangled: priv_driver_set_fixed_fallback */
int priv_driver_set_fixed_fallback(void);

/* Symbol: priv_driver_set_drv_mcr */
/* Demangled: priv_driver_set_drv_mcr */
int priv_driver_set_drv_mcr(void);

/* Symbol: priv_driver_set_sw_ctrl */
/* Demangled: priv_driver_set_sw_ctrl */
int priv_driver_set_sw_ctrl(void);

/* Symbol: priv_driver_set_fixed_rate */
/* Demangled: priv_driver_set_fixed_rate */
int priv_driver_set_fixed_rate(void);

/* Symbol: priv_driver_set_em_cfg */
/* Demangled: priv_driver_set_em_cfg */
int priv_driver_set_em_cfg(void);

/* Symbol: priv_driver_get_em_cfg */
/* Demangled: priv_driver_get_em_cfg */
int priv_driver_get_em_cfg(void);

/* Symbol: priv_driver_set_cfg */
/* Demangled: priv_driver_set_cfg */
int priv_driver_set_cfg(void);

/* Symbol: priv_driver_get_cfg */
/* Demangled: priv_driver_get_cfg */
int priv_driver_get_cfg(void);

/* Symbol: priv_driver_set_chip_config */
/* Demangled: priv_driver_set_chip_config */
int priv_driver_set_chip_config(void);

/* Symbol: priv_driver_get_chip_config_16 */
/* Demangled: priv_driver_get_chip_config_16 */
int priv_driver_get_chip_config_16(void);

/* Symbol: priv_driver_get_chip_config_4 */
/* Demangled: priv_driver_get_chip_config_4 */
int priv_driver_get_chip_config_4(void);

/* Symbol: priv_driver_get_chip_config */
/* Demangled: priv_driver_get_chip_config */
int priv_driver_get_chip_config(void);

/* Symbol: priv_driver_set_ap_start */
/* Demangled: priv_driver_set_ap_start */
int priv_driver_set_ap_start(void);

/* Symbol: priv_driver_get_linkspeed */
/* Demangled: priv_driver_get_linkspeed */
int priv_driver_get_linkspeed(void);

/* Symbol: priv_driver_set_band */
/* Demangled: priv_driver_set_band */
int priv_driver_set_band(void);

/* Symbol: priv_driver_set_country */
/* Demangled: priv_driver_set_country */
int priv_driver_set_country(void);

/* Symbol: priv_driver_set_csa */
/* Demangled: priv_driver_set_csa */
int priv_driver_set_csa(void);

/* Symbol: mtk_Netdev_To_RoleIdx */
/* Demangled: mtk_Netdev_To_RoleIdx */
int mtk_Netdev_To_RoleIdx(void);

/* Symbol: cnmIdcCsaReq */
/* Demangled: cnmIdcCsaReq */
int cnmIdcCsaReq(void);

/* Symbol: priv_driver_get_country */
/* Demangled: priv_driver_get_country */
int priv_driver_get_country(void);

/* Symbol: rlmDomainGetCountryCode */
/* Demangled: rlmDomainGetCountryCode */
int rlmDomainGetCountryCode(void);

/* Symbol: priv_driver_get_channels */
/* Demangled: priv_driver_get_channels */
int priv_driver_get_channels(void);

/* Symbol: rlmDomainGetActiveChannelCount */
/* Demangled: rlmDomainGetActiveChannelCount */
int rlmDomainGetActiveChannelCount(void);

/* Symbol: rlmDomainGetActiveChannels */
/* Demangled: rlmDomainGetActiveChannels */
int rlmDomainGetActiveChannels(void);

/* Symbol: priv_driver_show_dfs_state */
/* Demangled: priv_driver_show_dfs_state */
int priv_driver_show_dfs_state(void);

/* Symbol: p2pFuncShowDfsState */
/* Demangled: p2pFuncShowDfsState */
int p2pFuncShowDfsState(void);

/* Symbol: priv_driver_show_dfs_radar_param */
/* Demangled: priv_driver_show_dfs_radar_param */
int priv_driver_show_dfs_radar_param(void);

/* Symbol: p2pFuncGetRadarInfo */
/* Demangled: p2pFuncGetRadarInfo */
int p2pFuncGetRadarInfo(void);

/* Symbol: priv_driver_show_dfs_help */
/* Demangled: priv_driver_show_dfs_help */
int priv_driver_show_dfs_help(void);

/* Symbol: priv_driver_show_dfs_cac_time */
/* Demangled: priv_driver_show_dfs_cac_time */
int priv_driver_show_dfs_cac_time(void);

/* Symbol: p2pFuncGetDfsState */
/* Demangled: p2pFuncGetDfsState */
int p2pFuncGetDfsState(void);

/* Symbol: p2pFuncGetCacRemainingTime */
/* Demangled: p2pFuncGetCacRemainingTime */
int p2pFuncGetCacRemainingTime(void);

/* Symbol: priv_driver_set_miracast */
/* Demangled: priv_driver_set_miracast */
int priv_driver_set_miracast(void);

/* Symbol: parseValueInString */
/* Demangled: parseValueInString */
int parseValueInString(void);

/* Symbol: priv_driver_set_ap_set_mac_acl */
/* Demangled: priv_driver_set_ap_set_mac_acl */
int priv_driver_set_ap_set_mac_acl(void);

/* Symbol: p2pRoleUpdateACLEntry */
/* Demangled: p2pRoleUpdateACLEntry */
int p2pRoleUpdateACLEntry(void);

/* Symbol: priv_driver_set_ap_set_cfg */
/* Demangled: priv_driver_set_ap_set_cfg */
int priv_driver_set_ap_set_cfg(void);

/* Symbol: kalP2PSetMaxClients */
/* Demangled: kalP2PSetMaxClients */
int kalP2PSetMaxClients(void);

/* Symbol: priv_driver_set_ap_get_sta_list */
/* Demangled: priv_driver_set_ap_get_sta_list */
int priv_driver_set_ap_get_sta_list(void);

/* Symbol: priv_driver_set_ap_sta_disassoc */
/* Demangled: priv_driver_set_ap_sta_disassoc */
int priv_driver_set_ap_sta_disassoc(void);

/* Symbol: priv_driver_set_ap_nss */
/* Demangled: priv_driver_set_ap_nss */
int priv_driver_set_ap_nss(void);

/* Symbol: priv_driver_set_suspend_mode */
/* Demangled: priv_driver_set_suspend_mode */
int priv_driver_set_suspend_mode(void);

/* Symbol: p2pSetSuspendMode */
/* Demangled: p2pSetSuspendMode */
int p2pSetSuspendMode(void);

/* Symbol: priv_driver_set_monitor */
/* Demangled: priv_driver_set_monitor */
int priv_driver_set_monitor(void);

/* Symbol: rlmDomainIsLegalChannel */
/* Demangled: rlmDomainIsLegalChannel */
int rlmDomainIsLegalChannel(void);

/* Symbol: priv_driver_set_dbdc */
/* Demangled: priv_driver_set_dbdc */
int priv_driver_set_dbdc(void);

/* Symbol: priv_driver_set_sta1ss */
/* Demangled: priv_driver_set_sta1ss */
int priv_driver_set_sta1ss(void);

/* Symbol: priv_driver_rx_stat_parser */
/* Demangled: priv_driver_rx_stat_parser */
int priv_driver_rx_stat_parser(void);

/* Symbol: RxStatPerAnt */
/* Demangled: RxStatPerAnt */
extern void* RxStatPerAnt;

/* Symbol: RxStatPerBand */
/* Demangled: RxStatPerBand */
extern void* RxStatPerBand;

/* Symbol: RxStatPerUser */
/* Demangled: RxStatPerUser */
extern void* RxStatPerUser;

/* Symbol: RxStatCommonUser */
/* Demangled: RxStatCommonUser */
extern void* RxStatCommonUser;

/* Symbol: priv_driver_set_nvram */
/* Demangled: priv_driver_set_nvram */
int priv_driver_set_nvram(void);

/* Symbol: rlmGetBssOpBwByVhtAndHtOpInfo */
/* Demangled: rlmGetBssOpBwByVhtAndHtOpInfo */
int rlmGetBssOpBwByVhtAndHtOpInfo(void);

/* Symbol: cnmGetBssNetworkType */
/* Demangled: cnmGetBssNetworkType */
int cnmGetBssNetworkType(void);

/* Symbol: Set_ResetStatCounter_Proc */
/* Demangled: Set_ResetStatCounter_Proc */
int Set_ResetStatCounter_Proc(void);

/* Symbol: MT_ATEResetTXRXCounter */
/* Demangled: MT_ATEResetTXRXCounter */
int MT_ATEResetTXRXCounter(void);

/* Symbol: SetATE */
/* Demangled: SetATE */
int SetATE(void);

/* Symbol: MT_ICAPCommand */
/* Demangled: MT_ICAPCommand */
int MT_ICAPCommand(void);

/* Symbol: MT_ATEStart */
/* Demangled: MT_ATEStart */
int MT_ATEStart(void);

/* Symbol: MT_ICAPStart */
/* Demangled: MT_ICAPStart */
int MT_ICAPStart(void);

/* Symbol: MT_ATEStop */
/* Demangled: MT_ATEStop */
int MT_ATEStop(void);

/* Symbol: MT_ATEStartTX */
/* Demangled: MT_ATEStartTX */
int MT_ATEStartTX(void);

/* Symbol: MT_ATEStopTX */
/* Demangled: MT_ATEStopTX */
int MT_ATEStopTX(void);

/* Symbol: MT_ATEStartRX */
/* Demangled: MT_ATEStartRX */
int MT_ATEStartRX(void);

/* Symbol: MT_ATEStopRX */
/* Demangled: MT_ATEStopRX */
int MT_ATEStopRX(void);

/* Symbol: SetATEDa */
/* Demangled: SetATEDa */
int SetATEDa(void);

/* Symbol: MT_ATESetMACAddress */
/* Demangled: MT_ATESetMACAddress */
int MT_ATESetMACAddress(void);

/* Symbol: SetATESa */
/* Demangled: SetATESa */
int SetATESa(void);

/* Symbol: SetATEChannel */
/* Demangled: SetATEChannel */
int SetATEChannel(void);

/* Symbol: MT_ATESetChannel */
/* Demangled: MT_ATESetChannel */
int MT_ATESetChannel(void);

/* Symbol: SetATETxPower0 */
/* Demangled: SetATETxPower0 */
int SetATETxPower0(void);

/* Symbol: MT_ATESetTxPower0 */
/* Demangled: MT_ATESetTxPower0 */
int MT_ATESetTxPower0(void);

/* Symbol: SetATETxGi */
/* Demangled: SetATETxGi */
int SetATETxGi(void);

/* Symbol: MT_ATESetTxGi */
/* Demangled: MT_ATESetTxGi */
int MT_ATESetTxGi(void);

/* Symbol: SetATETxBw */
/* Demangled: SetATETxBw */
int SetATETxBw(void);

/* Symbol: MT_ATESetSystemBW */
/* Demangled: MT_ATESetSystemBW */
int MT_ATESetSystemBW(void);

/* Symbol: SetATETxLength */
/* Demangled: SetATETxLength */
int SetATETxLength(void);

/* Symbol: MT_ATESetTxLength */
/* Demangled: MT_ATESetTxLength */
int MT_ATESetTxLength(void);

/* Symbol: SetATETxCount */
/* Demangled: SetATETxCount */
int SetATETxCount(void);

/* Symbol: MT_ATESetTxCount */
/* Demangled: MT_ATESetTxCount */
int MT_ATESetTxCount(void);

/* Symbol: SetATETxMcs */
/* Demangled: SetATETxMcs */
int SetATETxMcs(void);

/* Symbol: MT_ATESetRate */
/* Demangled: MT_ATESetRate */
int MT_ATESetRate(void);

/* Symbol: SetATETxMode */
/* Demangled: SetATETxMode */
int SetATETxMode(void);

/* Symbol: MT_ATESetPreamble */
/* Demangled: MT_ATESetPreamble */
int MT_ATESetPreamble(void);

/* Symbol: SetATEIpg */
/* Demangled: SetATEIpg */
int SetATEIpg(void);

/* Symbol: MT_ATESetTxIPG */
/* Demangled: MT_ATESetTxIPG */
int MT_ATESetTxIPG(void);

/* Symbol: SetATETxVhtNss */
/* Demangled: SetATETxVhtNss */
int SetATETxVhtNss(void);

/* Symbol: MT_ATESetTxVhtNss */
/* Demangled: MT_ATESetTxVhtNss */
int MT_ATESetTxVhtNss(void);

/* Symbol: SetATETxPath */
/* Demangled: SetATETxPath */
int SetATETxPath(void);

/* Symbol: MT_ATESetTxPath */
/* Demangled: MT_ATESetTxPath */
int MT_ATESetTxPath(void);

/* Symbol: SetATERxPath */
/* Demangled: SetATERxPath */
int SetATERxPath(void);

/* Symbol: MT_ATESetRxPath */
/* Demangled: MT_ATESetRxPath */
int MT_ATESetRxPath(void);

/* Symbol: SetATEAntSwp */
/* Demangled: SetATEAntSwp */
int SetATEAntSwp(void);

/* Symbol: MT_ATESetAntSwap */
/* Demangled: MT_ATESetAntSwap */
int MT_ATESetAntSwap(void);

/* Symbol: Set_TxBfProfileTag_Help */
/* Demangled: Set_TxBfProfileTag_Help */
int Set_TxBfProfileTag_Help(void);

/* Symbol: Set_TxBfProfileTag_InValid */
/* Demangled: Set_TxBfProfileTag_InValid */
int Set_TxBfProfileTag_InValid(void);

/* Symbol: TxBfProfileTag_InValid */
/* Demangled: TxBfProfileTag_InValid */
int TxBfProfileTag_InValid(void);

/* Symbol: Set_TxBfProfileTag_PfmuIdx */
/* Demangled: Set_TxBfProfileTag_PfmuIdx */
int Set_TxBfProfileTag_PfmuIdx(void);

/* Symbol: TxBfProfileTag_PfmuIdx */
/* Demangled: TxBfProfileTag_PfmuIdx */
int TxBfProfileTag_PfmuIdx(void);

/* Symbol: Set_TxBfProfileTag_BfType */
/* Demangled: Set_TxBfProfileTag_BfType */
int Set_TxBfProfileTag_BfType(void);

/* Symbol: TxBfProfileTag_TxBfType */
/* Demangled: TxBfProfileTag_TxBfType */
int TxBfProfileTag_TxBfType(void);

/* Symbol: Set_TxBfProfileTag_DBW */
/* Demangled: Set_TxBfProfileTag_DBW */
int Set_TxBfProfileTag_DBW(void);

/* Symbol: TxBfProfileTag_DBW */
/* Demangled: TxBfProfileTag_DBW */
int TxBfProfileTag_DBW(void);

/* Symbol: Set_TxBfProfileTag_SuMu */
/* Demangled: Set_TxBfProfileTag_SuMu */
int Set_TxBfProfileTag_SuMu(void);

/* Symbol: TxBfProfileTag_SuMu */
/* Demangled: TxBfProfileTag_SuMu */
int TxBfProfileTag_SuMu(void);

/* Symbol: Set_TxBfProfileTag_Mem */
/* Demangled: Set_TxBfProfileTag_Mem */
int Set_TxBfProfileTag_Mem(void);

/* Symbol: TxBfProfileTag_Mem */
/* Demangled: TxBfProfileTag_Mem */
int TxBfProfileTag_Mem(void);

/* Symbol: Set_TxBfProfileTag_Matrix */
/* Demangled: Set_TxBfProfileTag_Matrix */
int Set_TxBfProfileTag_Matrix(void);

/* Symbol: TxBfProfileTag_Matrix */
/* Demangled: TxBfProfileTag_Matrix */
int TxBfProfileTag_Matrix(void);

/* Symbol: Set_TxBfProfileTag_SNR */
/* Demangled: Set_TxBfProfileTag_SNR */
int Set_TxBfProfileTag_SNR(void);

/* Symbol: TxBfProfileTag_SNR */
/* Demangled: TxBfProfileTag_SNR */
int TxBfProfileTag_SNR(void);

/* Symbol: Set_TxBfProfileTag_SmartAnt */
/* Demangled: Set_TxBfProfileTag_SmartAnt */
int Set_TxBfProfileTag_SmartAnt(void);

/* Symbol: TxBfProfileTag_SmtAnt */
/* Demangled: TxBfProfileTag_SmtAnt */
int TxBfProfileTag_SmtAnt(void);

/* Symbol: Set_TxBfProfileTag_SeIdx */
/* Demangled: Set_TxBfProfileTag_SeIdx */
int Set_TxBfProfileTag_SeIdx(void);

/* Symbol: TxBfProfileTag_SeIdx */
/* Demangled: TxBfProfileTag_SeIdx */
int TxBfProfileTag_SeIdx(void);

/* Symbol: Set_TxBfProfileTag_RmsdThrd */
/* Demangled: Set_TxBfProfileTag_RmsdThrd */
int Set_TxBfProfileTag_RmsdThrd(void);

/* Symbol: TxBfProfileTag_RmsdThd */
/* Demangled: TxBfProfileTag_RmsdThd */
int TxBfProfileTag_RmsdThd(void);

/* Symbol: Set_TxBfProfileTag_McsThrd */
/* Demangled: Set_TxBfProfileTag_McsThrd */
int Set_TxBfProfileTag_McsThrd(void);

/* Symbol: TxBfProfileTag_McsThd */
/* Demangled: TxBfProfileTag_McsThd */
int TxBfProfileTag_McsThd(void);

/* Symbol: Set_TxBfProfileTag_TimeOut */
/* Demangled: Set_TxBfProfileTag_TimeOut */
int Set_TxBfProfileTag_TimeOut(void);

/* Symbol: TxBfProfileTag_TimeOut */
/* Demangled: TxBfProfileTag_TimeOut */
int TxBfProfileTag_TimeOut(void);

/* Symbol: Set_TxBfProfileTag_DesiredBW */
/* Demangled: Set_TxBfProfileTag_DesiredBW */
int Set_TxBfProfileTag_DesiredBW(void);

/* Symbol: TxBfProfileTag_DesiredBW */
/* Demangled: TxBfProfileTag_DesiredBW */
int TxBfProfileTag_DesiredBW(void);

/* Symbol: Set_TxBfProfileTag_DesiredNc */
/* Demangled: Set_TxBfProfileTag_DesiredNc */
int Set_TxBfProfileTag_DesiredNc(void);

/* Symbol: TxBfProfileTag_DesiredNc */
/* Demangled: TxBfProfileTag_DesiredNc */
int TxBfProfileTag_DesiredNc(void);

/* Symbol: Set_TxBfProfileTag_DesiredNr */
/* Demangled: Set_TxBfProfileTag_DesiredNr */
int Set_TxBfProfileTag_DesiredNr(void);

/* Symbol: TxBfProfileTag_DesiredNr */
/* Demangled: TxBfProfileTag_DesiredNr */
int TxBfProfileTag_DesiredNr(void);

/* Symbol: Set_TxBfProfileTagRead */
/* Demangled: Set_TxBfProfileTagRead */
int Set_TxBfProfileTagRead(void);

/* Symbol: TxBfProfileTagRead */
/* Demangled: TxBfProfileTagRead */
int TxBfProfileTagRead(void);

/* Symbol: Set_TxBfProfileTagWrite */
/* Demangled: Set_TxBfProfileTagWrite */
int Set_TxBfProfileTagWrite(void);

/* Symbol: TxBfProfileTagWrite */
/* Demangled: TxBfProfileTagWrite */
int TxBfProfileTagWrite(void);

/* Symbol: Set_TxBfProfileDataRead */
/* Demangled: Set_TxBfProfileDataRead */
int Set_TxBfProfileDataRead(void);

/* Symbol: TxBfProfileDataRead */
/* Demangled: TxBfProfileDataRead */
int TxBfProfileDataRead(void);

/* Symbol: Set_TxBfProfileDataWrite */
/* Demangled: Set_TxBfProfileDataWrite */
int Set_TxBfProfileDataWrite(void);

/* Symbol: TxBfProfileDataWrite */
/* Demangled: TxBfProfileDataWrite */
int TxBfProfileDataWrite(void);

/* Symbol: Set_TxBfProfilePnRead */
/* Demangled: Set_TxBfProfilePnRead */
int Set_TxBfProfilePnRead(void);

/* Symbol: TxBfProfilePnRead */
/* Demangled: TxBfProfilePnRead */
int TxBfProfilePnRead(void);

/* Symbol: Set_TxBfProfilePnWrite */
/* Demangled: Set_TxBfProfilePnWrite */
int Set_TxBfProfilePnWrite(void);

/* Symbol: TxBfProfilePnWrite */
/* Demangled: TxBfProfilePnWrite */
int TxBfProfilePnWrite(void);

/* Symbol: Set_Trigger_Sounding_Proc */
/* Demangled: Set_Trigger_Sounding_Proc */
int Set_Trigger_Sounding_Proc(void);

/* Symbol: TxBfSounding */
/* Demangled: TxBfSounding */
int TxBfSounding(void);

/* Symbol: Set_Stop_Sounding_Proc */
/* Demangled: Set_Stop_Sounding_Proc */
int Set_Stop_Sounding_Proc(void);

/* Symbol: TxBfSoundingStop */
/* Demangled: TxBfSoundingStop */
int TxBfSoundingStop(void);

/* Symbol: Set_TxBfTxApply */
/* Demangled: Set_TxBfTxApply */
int Set_TxBfTxApply(void);

/* Symbol: TxBfTxApply */
/* Demangled: TxBfTxApply */
int TxBfTxApply(void);

/* Symbol: Set_TxBfManualAssoc */
/* Demangled: Set_TxBfManualAssoc */
int Set_TxBfManualAssoc(void);

/* Symbol: TxBfManualAssoc */
/* Demangled: TxBfManualAssoc */
int TxBfManualAssoc(void);

/* Symbol: Set_TxBfPfmuMemAlloc */
/* Demangled: Set_TxBfPfmuMemAlloc */
int Set_TxBfPfmuMemAlloc(void);

/* Symbol: TxBfPfmuMemAlloc */
/* Demangled: TxBfPfmuMemAlloc */
int TxBfPfmuMemAlloc(void);

/* Symbol: Set_TxBfPfmuMemRelease */
/* Demangled: Set_TxBfPfmuMemRelease */
int Set_TxBfPfmuMemRelease(void);

/* Symbol: TxBfPfmuMemRelease */
/* Demangled: TxBfPfmuMemRelease */
int TxBfPfmuMemRelease(void);

/* Symbol: Set_StaRecCmmUpdate */
/* Demangled: Set_StaRecCmmUpdate */
int Set_StaRecCmmUpdate(void);

/* Symbol: StaRecCmmUpdate */
/* Demangled: StaRecCmmUpdate */
int StaRecCmmUpdate(void);

/* Symbol: Set_StaRecBfUpdate */
/* Demangled: Set_StaRecBfUpdate */
int Set_StaRecBfUpdate(void);

/* Symbol: StaRecBfUpdate */
/* Demangled: StaRecBfUpdate */
int StaRecBfUpdate(void);

/* Symbol: Set_DevInfoUpdate */
/* Demangled: Set_DevInfoUpdate */
int Set_DevInfoUpdate(void);

/* Symbol: DevInfoUpdate */
/* Demangled: DevInfoUpdate */
int DevInfoUpdate(void);

/* Symbol: Set_BssInfoUpdate */
/* Demangled: Set_BssInfoUpdate */
int Set_BssInfoUpdate(void);

/* Symbol: BssInfoUpdate */
/* Demangled: BssInfoUpdate */
int BssInfoUpdate(void);

/* Symbol: Set_MUGetInitMCS */
/* Demangled: Set_MUGetInitMCS */
int Set_MUGetInitMCS(void);

/* Symbol: Set_MUCalInitMCS */
/* Demangled: Set_MUCalInitMCS */
int Set_MUCalInitMCS(void);

/* Symbol: Set_MUCalLQ */
/* Demangled: Set_MUCalLQ */
int Set_MUCalLQ(void);

/* Symbol: Set_MUGetLQ */
/* Demangled: Set_MUGetLQ */
int Set_MUGetLQ(void);

/* Symbol: Set_MUSetSNROffset */
/* Demangled: Set_MUSetSNROffset */
int Set_MUSetSNROffset(void);

/* Symbol: Set_MUSetZeroNss */
/* Demangled: Set_MUSetZeroNss */
int Set_MUSetZeroNss(void);

/* Symbol: Set_MUSetSpeedUpLQ */
/* Demangled: Set_MUSetSpeedUpLQ */
int Set_MUSetSpeedUpLQ(void);

/* Symbol: Set_MUSetMUTable */
/* Demangled: Set_MUSetMUTable */
int Set_MUSetMUTable(void);

/* Symbol: Set_MUSetGroup */
/* Demangled: Set_MUSetGroup */
int Set_MUSetGroup(void);

/* Symbol: Set_MUGetQD */
/* Demangled: Set_MUGetQD */
int Set_MUGetQD(void);

/* Symbol: Set_MUSetEnable */
/* Demangled: Set_MUSetEnable */
int Set_MUSetEnable(void);

/* Symbol: Set_MUSetGID_UP */
/* Demangled: Set_MUSetGID_UP */
int Set_MUSetGID_UP(void);

/* Symbol: Set_MUTriggerTx */
/* Demangled: Set_MUTriggerTx */
int Set_MUTriggerTx(void);

/* Symbol: Set_TxBfProfileSwTagWrite */
/* Demangled: Set_TxBfProfileSwTagWrite */
int Set_TxBfProfileSwTagWrite(void);

/* Symbol: TxBfPseudoTagUpdate */
/* Demangled: TxBfPseudoTagUpdate */
int TxBfPseudoTagUpdate(void);

/* Symbol: WriteEfuse */
/* Demangled: WriteEfuse */
int WriteEfuse(void);

/* Symbol: MT_ATEWriteEfuse */
/* Demangled: MT_ATEWriteEfuse */
int MT_ATEWriteEfuse(void);

/* Symbol: SetTxTargetPower */
/* Demangled: SetTxTargetPower */
int SetTxTargetPower(void);

/* Symbol: MT_ATESetTxTargetPower */
/* Demangled: MT_ATESetTxTargetPower */
int MT_ATESetTxTargetPower(void);

/* Symbol: SetRddReport */
/* Demangled: SetRddReport */
int SetRddReport(void);

/* Symbol: MT_ATESetRddReport */
/* Demangled: MT_ATESetRddReport */
int MT_ATESetRddReport(void);

/* Symbol: SetByPassCac */
/* Demangled: SetByPassCac */
int SetByPassCac(void);

/* Symbol: p2pFuncEnableManualCac */
/* Demangled: p2pFuncEnableManualCac */
int p2pFuncEnableManualCac(void);

/* Symbol: p2pFuncSetDriverCacTime */
/* Demangled: p2pFuncSetDriverCacTime */
int p2pFuncSetDriverCacTime(void);

/* Symbol: SetRadarDetectMode */
/* Demangled: SetRadarDetectMode */
int SetRadarDetectMode(void);

/* Symbol: p2pFuncSetRadarDetectMode */
/* Demangled: p2pFuncSetRadarDetectMode */
int p2pFuncSetRadarDetectMode(void);

/* Symbol: MT_ATESetRadarDetectMode */
/* Demangled: MT_ATESetRadarDetectMode */
int MT_ATESetRadarDetectMode(void);

/* Symbol: rAtePrivCmdTable */
/* Demangled: rAtePrivCmdTable */
extern void* rAtePrivCmdTable;

/* Symbol: hqa_genStatBandReport */
/* Demangled: hqa_genStatBandReport */
int hqa_genStatBandReport(void);

/* Symbol: hqa_genStatPathReport */
/* Demangled: hqa_genStatPathReport */
int hqa_genStatPathReport(void);

/* Symbol: hqa_genStatUserReport */
/* Demangled: hqa_genStatUserReport */
int hqa_genStatUserReport(void);

/* Symbol: hqa_genStatCommReport */
/* Demangled: hqa_genStatCommReport */
int hqa_genStatCommReport(void);

/* Symbol: hqa_getRxStatisticsByType */
/* Demangled: hqa_getRxStatisticsByType */
int hqa_getRxStatisticsByType(void);

/* Symbol: mt6632SetICapStart */
/* Demangled: mt6632SetICapStart */
int mt6632SetICapStart(void);

/* Symbol: mt6632GetICapStatus */
/* Demangled: mt6632GetICapStatus */
int mt6632GetICapStatus(void);

/* Symbol: connacSetICapStart */
/* Demangled: connacSetICapStart */
int connacSetICapStart(void);

/* Symbol: connacGetICapStatus */
/* Demangled: connacGetICapStatus */
int connacGetICapStatus(void);

/* Symbol: commonGetICapIQData */
/* Demangled: commonGetICapIQData */
int commonGetICapIQData(void);

/* Symbol: connacGetICapIQData */
/* Demangled: connacGetICapIQData */
int connacGetICapIQData(void);

/* Symbol: HQA_CMDHandler */
/* Demangled: HQA_CMDHandler */
int HQA_CMDHandler(void);

/* Symbol: g_BufferDownload */
/* Demangled: g_BufferDownload */
extern void* g_BufferDownload;

/* Symbol: MT_ATESetDBDCBandIndex */
/* Demangled: MT_ATESetDBDCBandIndex */
int MT_ATESetDBDCBandIndex(void);

/* Symbol: MT_ATESetPerPacketBW */
/* Demangled: MT_ATESetPerPacketBW */
int MT_ATESetPerPacketBW(void);

/* Symbol: MT_ATEPrimarySetting */
/* Demangled: MT_ATEPrimarySetting */
int MT_ATEPrimarySetting(void);

/* Symbol: MT_ATESetDBDCTxTonePower */
/* Demangled: MT_ATESetDBDCTxTonePower */
int MT_ATESetDBDCTxTonePower(void);

/* Symbol: MT_ATESetBand */
/* Demangled: MT_ATESetBand */
int MT_ATESetBand(void);

/* Symbol: MT_ATESetTxToneType */
/* Demangled: MT_ATESetTxToneType */
int MT_ATESetTxToneType(void);

/* Symbol: MT_ATESetTxToneBW */
/* Demangled: MT_ATESetTxToneBW */
int MT_ATESetTxToneBW(void);

/* Symbol: MT_ATESetTxToneDCOffset */
/* Demangled: MT_ATESetTxToneDCOffset */
int MT_ATESetTxToneDCOffset(void);

/* Symbol: MT_ATEDBDCTxTone */
/* Demangled: MT_ATEDBDCTxTone */
int MT_ATEDBDCTxTone(void);

/* Symbol: MT_ATE_TMRSetting */
/* Demangled: MT_ATE_TMRSetting */
int MT_ATE_TMRSetting(void);

/* Symbol: u4EepromMode */
/* Demangled: u4EepromMode */
extern void* u4EepromMode;

/* Symbol: g_u4Chip_ID */
/* Demangled: g_u4Chip_ID */
extern void* g_u4Chip_ID;

/* Symbol: MT_ATEMPSSetSeqData */
/* Demangled: MT_ATEMPSSetSeqData */
int MT_ATEMPSSetSeqData(void);

/* Symbol: MT_ATEMPSSetPayloadLength */
/* Demangled: MT_ATEMPSSetPayloadLength */
int MT_ATEMPSSetPayloadLength(void);

/* Symbol: MT_ATEMPSSetPacketCount */
/* Demangled: MT_ATEMPSSetPacketCount */
int MT_ATEMPSSetPacketCount(void);

/* Symbol: MT_ATEMPSSetPowerGain */
/* Demangled: MT_ATEMPSSetPowerGain */
int MT_ATEMPSSetPowerGain(void);

/* Symbol: g_DBDCEnable */
/* Demangled: g_DBDCEnable */
extern void* g_DBDCEnable;

/* Symbol: MT_ATERDDStart */
/* Demangled: MT_ATERDDStart */
int MT_ATERDDStart(void);

/* Symbol: MT_ATERDDStop */
/* Demangled: MT_ATERDDStop */
int MT_ATERDDStop(void);

/* Symbol: MT_ATELogOnOff */
/* Demangled: MT_ATELogOnOff */
int MT_ATELogOnOff(void);

/* Symbol: MT_ATEMPSSetNss */
/* Demangled: MT_ATEMPSSetNss */
int MT_ATEMPSSetNss(void);

/* Symbol: MT_ATEMPSSetPerpacketBW */
/* Demangled: MT_ATEMPSSetPerpacketBW */
int MT_ATEMPSSetPerpacketBW(void);

/* Symbol: MT_ATEGetDumpRXV */
/* Demangled: MT_ATEGetDumpRXV */
int MT_ATEGetDumpRXV(void);

/* Symbol: MT_ATESetMacHeader */
/* Demangled: MT_ATESetMacHeader */
int MT_ATESetMacHeader(void);

/* Symbol: MT_ATESetTxPayLoad */
/* Demangled: MT_ATESetTxPayLoad */
int MT_ATESetTxPayLoad(void);

/* Symbol: MT_ATESetTxSTBC */
/* Demangled: MT_ATESetTxSTBC */
int MT_ATESetTxSTBC(void);

/* Symbol: MT_ATESetEncodeMode */
/* Demangled: MT_ATESetEncodeMode */
int MT_ATESetEncodeMode(void);

/* Symbol: MT_ATESetiBFEnable */
/* Demangled: MT_ATESetiBFEnable */
int MT_ATESetiBFEnable(void);

/* Symbol: MT_ATESeteBFEnable */
/* Demangled: MT_ATESeteBFEnable */
int MT_ATESeteBFEnable(void);

/* Symbol: MT_ATE_IRRSetADC */
/* Demangled: MT_ATE_IRRSetADC */
int MT_ATE_IRRSetADC(void);

/* Symbol: MT_ATE_IRRSetRxGain */
/* Demangled: MT_ATE_IRRSetRxGain */
int MT_ATE_IRRSetRxGain(void);

/* Symbol: MT_ATE_IRRSetTTG */
/* Demangled: MT_ATE_IRRSetTTG */
int MT_ATE_IRRSetTTG(void);

/* Symbol: MT_ATE_IRRSetTrunOnTTG */
/* Demangled: MT_ATE_IRRSetTrunOnTTG */
int MT_ATE_IRRSetTrunOnTTG(void);

/* Symbol: TxBfBssInfoUpdate */
/* Demangled: TxBfBssInfoUpdate */
int TxBfBssInfoUpdate(void);

/* Symbol: ServiceRfTestInit */
/* Demangled: ServiceRfTestInit */
int ServiceRfTestInit(void);

/* Symbol: ServiceIcapInit */
/* Demangled: ServiceIcapInit */
int ServiceIcapInit(void);

/* Symbol: ServiceIcapDeInit */
/* Demangled: ServiceIcapDeInit */
int ServiceIcapDeInit(void);

/* Symbol: u8ResetTime */
/* Demangled: u8ResetTime */
extern void* u8ResetTime;

/* Symbol: glGetRstReason */
/* Demangled: glGetRstReason */
int glGetRstReason(void);

/* Symbol: glSendResetRequest */
/* Demangled: glSendResetRequest */
int glSendResetRequest(void);

/* Symbol: mtk_wcn_stp_coredump_start_get */
/* Demangled: mtk_wcn_stp_coredump_start_get */
int mtk_wcn_stp_coredump_start_get(void);

/* Symbol: glIsWmtCodeDump */
/* Demangled: glIsWmtCodeDump */
int glIsWmtCodeDump(void);

/* Symbol: mtk_cfg80211_change_iface */
/* Demangled: mtk_cfg80211_change_iface */
int mtk_cfg80211_change_iface(void);

/* Symbol: mtk_cfg80211_add_key */
/* Demangled: mtk_cfg80211_add_key */
int mtk_cfg80211_add_key(void);

/* Symbol: mtk_cfg80211_get_key */
/* Demangled: mtk_cfg80211_get_key */
int mtk_cfg80211_get_key(void);

/* Symbol: mtk_cfg80211_del_key */
/* Demangled: mtk_cfg80211_del_key */
int mtk_cfg80211_del_key(void);

/* Symbol: mtk_cfg80211_set_default_key */
/* Demangled: mtk_cfg80211_set_default_key */
int mtk_cfg80211_set_default_key(void);

/* Symbol: mtk_cfg80211_get_station */
/* Demangled: mtk_cfg80211_get_station */
int mtk_cfg80211_get_station(void);

/* Symbol: mtk_cfg80211_get_link_statistics */
/* Demangled: mtk_cfg80211_get_link_statistics */
int mtk_cfg80211_get_link_statistics(void);

/* Symbol: mtk_cfg80211_scan */
/* Demangled: mtk_cfg80211_scan */
int mtk_cfg80211_scan(void);

/* Symbol: isScanCacheDone */
/* Demangled: isScanCacheDone */
int isScanCacheDone(void);

/* Symbol: mtk_cfg80211_abort_scan */
/* Demangled: mtk_cfg80211_abort_scan */
int mtk_cfg80211_abort_scan(void);

/* Symbol: mtk_cfg80211_connect */
/* Demangled: mtk_cfg80211_connect */
int mtk_cfg80211_connect(void);

/* Symbol: rsnParseRsnIE */
/* Demangled: rsnParseRsnIE */
int rsnParseRsnIE(void);

/* Symbol: cfg80211_get_non_wfa_vendor_ie */
/* Demangled: cfg80211_get_non_wfa_vendor_ie */
int cfg80211_get_non_wfa_vendor_ie(void);

/* Symbol: aisGetMib */
/* Demangled: aisGetMib */
int aisGetMib(void);

/* Symbol: mtk_cfg80211_disconnect */
/* Demangled: mtk_cfg80211_disconnect */
int mtk_cfg80211_disconnect(void);

/* Symbol: mtk_cfg80211_join_ibss */
/* Demangled: mtk_cfg80211_join_ibss */
int mtk_cfg80211_join_ibss(void);

/* Symbol: mtk_cfg80211_leave_ibss */
/* Demangled: mtk_cfg80211_leave_ibss */
int mtk_cfg80211_leave_ibss(void);

/* Symbol: mtk_cfg80211_set_power_mgmt */
/* Demangled: mtk_cfg80211_set_power_mgmt */
int mtk_cfg80211_set_power_mgmt(void);

/* Symbol: mtk_cfg80211_set_pmksa */
/* Demangled: mtk_cfg80211_set_pmksa */
int mtk_cfg80211_set_pmksa(void);

/* Symbol: mtk_cfg80211_del_pmksa */
/* Demangled: mtk_cfg80211_del_pmksa */
int mtk_cfg80211_del_pmksa(void);

/* Symbol: mtk_cfg80211_flush_pmksa */
/* Demangled: mtk_cfg80211_flush_pmksa */
int mtk_cfg80211_flush_pmksa(void);

/* Symbol: mtk_cfg80211_set_rekey_data */
/* Demangled: mtk_cfg80211_set_rekey_data */
int mtk_cfg80211_set_rekey_data(void);

/* Symbol: mtk_cfg80211_mgmt_frame_register */
/* Demangled: mtk_cfg80211_mgmt_frame_register */
int mtk_cfg80211_mgmt_frame_register(void);

/* Symbol: mtk_cfg80211_remain_on_channel */
/* Demangled: mtk_cfg80211_remain_on_channel */
int mtk_cfg80211_remain_on_channel(void);

/* Symbol: mtk_cfg80211_cancel_remain_on_channel */
/* Demangled: mtk_cfg80211_cancel_remain_on_channel */
int mtk_cfg80211_cancel_remain_on_channel(void);

/* Symbol: _mtk_cfg80211_mgmt_tx */
/* Demangled: _mtk_cfg80211_mgmt_tx */
int _mtk_cfg80211_mgmt_tx(void);

/* Symbol: cnmPktAllocWrapper */
/* Demangled: cnmPktAllocWrapper */
int cnmPktAllocWrapper(void);

/* Symbol: mtk_cfg80211_mgmt_tx */
/* Demangled: mtk_cfg80211_mgmt_tx */
int mtk_cfg80211_mgmt_tx(void);

/* Symbol: mtk_cfg80211_mgmt_tx_cancel_wait */
/* Demangled: mtk_cfg80211_mgmt_tx_cancel_wait */
int mtk_cfg80211_mgmt_tx_cancel_wait(void);

/* Symbol: mtk_cfg80211_testmode_set_key_ext */
/* Demangled: mtk_cfg80211_testmode_set_key_ext */
int mtk_cfg80211_testmode_set_key_ext(void);

/* Symbol: mtk_cfg80211_testmode_get_sta_statistics */
/* Demangled: mtk_cfg80211_testmode_get_sta_statistics */
int mtk_cfg80211_testmode_get_sta_statistics(void);

/* Symbol: mtk_cfg80211_testmode_get_link_detection */
/* Demangled: mtk_cfg80211_testmode_get_link_detection */
int mtk_cfg80211_testmode_get_link_detection(void);

/* Symbol: mtk_cfg80211_nla_put_type */
/* Demangled: mtk_cfg80211_nla_put_type */
int mtk_cfg80211_nla_put_type(void);

/* Symbol: mtk_cfg80211_testmode_sw_cmd */
/* Demangled: mtk_cfg80211_testmode_sw_cmd */
int mtk_cfg80211_testmode_sw_cmd(void);

/* Symbol: mtk_cfg80211_testmode_cmd */
/* Demangled: mtk_cfg80211_testmode_cmd */
int mtk_cfg80211_testmode_cmd(void);

/* Symbol: mtk_cfg80211_process_str_cmd */
/* Demangled: mtk_cfg80211_process_str_cmd */
int mtk_cfg80211_process_str_cmd(void);

/* Symbol: mtk_cfg80211_sched_scan_start */
/* Demangled: mtk_cfg80211_sched_scan_start */
int mtk_cfg80211_sched_scan_start(void);

/* Symbol: mtk_cfg80211_sched_scan_stop */
/* Demangled: mtk_cfg80211_sched_scan_stop */
int mtk_cfg80211_sched_scan_stop(void);

/* Symbol: mtk_cfg80211_assoc */
/* Demangled: mtk_cfg80211_assoc */
int mtk_cfg80211_assoc(void);

/* Symbol: mtk_cfg80211_testmode_get_scan_done */
/* Demangled: mtk_cfg80211_testmode_get_scan_done */
int mtk_cfg80211_testmode_get_scan_done(void);

/* Symbol: mtk_cfg80211_change_station */
/* Demangled: mtk_cfg80211_change_station */
int mtk_cfg80211_change_station(void);

/* Symbol: cnmPeerUpdate */
/* Demangled: cnmPeerUpdate */
int cnmPeerUpdate(void);

/* Symbol: TdlsSendChSwControlCmd */
/* Demangled: TdlsSendChSwControlCmd */
int TdlsSendChSwControlCmd(void);

/* Symbol: mtk_cfg80211_add_station */
/* Demangled: mtk_cfg80211_add_station */
int mtk_cfg80211_add_station(void);

/* Symbol: cnmPeerAdd */
/* Demangled: cnmPeerAdd */
int cnmPeerAdd(void);

/* Symbol: mtk_cfg80211_del_station */
/* Demangled: mtk_cfg80211_del_station */
int mtk_cfg80211_del_station(void);

/* Symbol: cnmStaRecFree */
/* Demangled: cnmStaRecFree */
int cnmStaRecFree(void);

/* Symbol: mtk_cfg80211_tdls_mgmt */
/* Demangled: mtk_cfg80211_tdls_mgmt */
int mtk_cfg80211_tdls_mgmt(void);

/* Symbol: TdlsexLinkMgt */
/* Demangled: TdlsexLinkMgt */
int TdlsexLinkMgt(void);

/* Symbol: mtk_cfg80211_tdls_oper */
/* Demangled: mtk_cfg80211_tdls_oper */
int mtk_cfg80211_tdls_oper(void);

/* Symbol: TdlsexLinkOper */
/* Demangled: TdlsexLinkOper */
int TdlsexLinkOper(void);

/* Symbol: testmode_add_roam_scn_chnl */
/* Demangled: testmode_add_roam_scn_chnl */
int testmode_add_roam_scn_chnl(void);

/* Symbol: mtk_cfg80211_process_str_cmd_reply */
/* Demangled: mtk_cfg80211_process_str_cmd_reply */
int mtk_cfg80211_process_str_cmd_reply(void);

/* Symbol: is_world_regdom */
/* Demangled: is_world_regdom */
int is_world_regdom(void);

/* Symbol: regd_state_machine */
/* Demangled: regd_state_machine */
int regd_state_machine(void);

/* Symbol: rlmDomainStateTransition */
/* Demangled: rlmDomainStateTransition */
int rlmDomainStateTransition(void);

/* Symbol: mtk_apply_custom_regulatory */
/* Demangled: mtk_apply_custom_regulatory */
int mtk_apply_custom_regulatory(void);

/* Symbol: mtk_reg_notify */
/* Demangled: mtk_reg_notify */
int mtk_reg_notify(void);

/* Symbol: rlmDomainIsSameCountryCode */
/* Demangled: rlmDomainIsSameCountryCode */
int rlmDomainIsSameCountryCode(void);

/* Symbol: rlmDomainIsUsingLocalRegDomainDataBase */
/* Demangled: rlmDomainIsUsingLocalRegDomainDataBase */
int rlmDomainIsUsingLocalRegDomainDataBase(void);

/* Symbol: rlmDomainIsCtrlStateEqualTo */
/* Demangled: rlmDomainIsCtrlStateEqualTo */
int rlmDomainIsCtrlStateEqualTo(void);

/* Symbol: rlmDomainAssert */
/* Demangled: rlmDomainAssert */
int rlmDomainAssert(void);

/* Symbol: rlmDomainIsEfuseUsed */
/* Demangled: rlmDomainIsEfuseUsed */
int rlmDomainIsEfuseUsed(void);

/* Symbol: rlmDomainSetCountryCode */
/* Demangled: rlmDomainSetCountryCode */
int rlmDomainSetCountryCode(void);

/* Symbol: rlmDomainSetDfsRegion */
/* Demangled: rlmDomainSetDfsRegion */
int rlmDomainSetDfsRegion(void);

/* Symbol: rlmDomainSearchRegdomainFromLocalDataBase */
/* Demangled: rlmDomainSearchRegdomainFromLocalDataBase */
int rlmDomainSearchRegdomainFromLocalDataBase(void);

/* Symbol: rlmDomainParsingChannel */
/* Demangled: rlmDomainParsingChannel */
int rlmDomainParsingChannel(void);

/* Symbol: rlmDomainGetGlueInfo */
/* Demangled: rlmDomainGetGlueInfo */
int rlmDomainGetGlueInfo(void);

/* Symbol: rlmDomainGetTempCountryCode */
/* Demangled: rlmDomainGetTempCountryCode */
int rlmDomainGetTempCountryCode(void);

/* Symbol: rlmDomainGetLocalDefaultRegd */
/* Demangled: rlmDomainGetLocalDefaultRegd */
int rlmDomainGetLocalDefaultRegd(void);

/* Symbol: mtk_cfg80211_suspend */
/* Demangled: mtk_cfg80211_suspend */
int mtk_cfg80211_suspend(void);

/* Symbol: mtk_cfg80211_resume */
/* Demangled: mtk_cfg80211_resume */
int mtk_cfg80211_resume(void);

/* Symbol: mtk_IsP2PNetDevice */
/* Demangled: mtk_IsP2PNetDevice */
int mtk_IsP2PNetDevice(void);

/* Symbol: mtk_init_sta_role */
/* Demangled: mtk_init_sta_role */
int mtk_init_sta_role(void);

/* Symbol: mtk_uninit_sta_role */
/* Demangled: mtk_uninit_sta_role */
int mtk_uninit_sta_role(void);

/* Symbol: mtk_init_ap_role */
/* Demangled: mtk_init_ap_role */
int mtk_init_ap_role(void);

/* Symbol: glSetupP2P */
/* Demangled: glSetupP2P */
int glSetupP2P(void);

/* Symbol: gPrP2pDev */
/* Demangled: gPrP2pDev */
extern void* gPrP2pDev;

/* Symbol: mtk_oid_uninit_ap_role */
/* Demangled: mtk_oid_uninit_ap_role */
int mtk_oid_uninit_ap_role(void);

/* Symbol: glUnregisterP2P */
/* Demangled: glUnregisterP2P */
int glUnregisterP2P(void);

/* Symbol: mtk_uninit_ap_role */
/* Demangled: mtk_uninit_ap_role */
int mtk_uninit_ap_role(void);

/* Symbol: mtk_p2p_cfg80211_start_radar_detection */
/* Demangled: mtk_p2p_cfg80211_start_radar_detection */
int mtk_p2p_cfg80211_start_radar_detection(void);

/* Symbol: mtk_p2p_cfg80211_channel_switch */
/* Demangled: mtk_p2p_cfg80211_channel_switch */
int mtk_p2p_cfg80211_channel_switch(void);

/* Symbol: mtk_p2p_cfg80211_add_iface */
/* Demangled: mtk_p2p_cfg80211_add_iface */
int mtk_p2p_cfg80211_add_iface(void);

/* Symbol: mtk_p2p_cfg80211_del_iface */
/* Demangled: mtk_p2p_cfg80211_del_iface */
int mtk_p2p_cfg80211_del_iface(void);

/* Symbol: mtk_p2p_cfg80211_change_iface */
/* Demangled: mtk_p2p_cfg80211_change_iface */
int mtk_p2p_cfg80211_change_iface(void);

/* Symbol: mtk_p2p_cfg80211_add_key */
/* Demangled: mtk_p2p_cfg80211_add_key */
int mtk_p2p_cfg80211_add_key(void);

/* Symbol: mtk_p2p_cfg80211_get_key */
/* Demangled: mtk_p2p_cfg80211_get_key */
int mtk_p2p_cfg80211_get_key(void);

/* Symbol: mtk_p2p_cfg80211_del_key */
/* Demangled: mtk_p2p_cfg80211_del_key */
int mtk_p2p_cfg80211_del_key(void);

/* Symbol: mtk_p2p_cfg80211_set_default_key */
/* Demangled: mtk_p2p_cfg80211_set_default_key */
int mtk_p2p_cfg80211_set_default_key(void);

/* Symbol: mtk_p2p_cfg80211_set_mgmt_key */
/* Demangled: mtk_p2p_cfg80211_set_mgmt_key */
int mtk_p2p_cfg80211_set_mgmt_key(void);

/* Symbol: mtk_p2p_cfg80211_get_station */
/* Demangled: mtk_p2p_cfg80211_get_station */
int mtk_p2p_cfg80211_get_station(void);

/* Symbol: mtk_p2p_cfg80211_del_station */
/* Demangled: mtk_p2p_cfg80211_del_station */
int mtk_p2p_cfg80211_del_station(void);

/* Symbol: mtk_p2p_cfg80211_scan */
/* Demangled: mtk_p2p_cfg80211_scan */
int mtk_p2p_cfg80211_scan(void);

/* Symbol: mtk_p2p_cfg80211_abort_scan */
/* Demangled: mtk_p2p_cfg80211_abort_scan */
int mtk_p2p_cfg80211_abort_scan(void);

/* Symbol: mtk_p2p_cfg80211_connect */
/* Demangled: mtk_p2p_cfg80211_connect */
int mtk_p2p_cfg80211_connect(void);

/* Symbol: mtk_p2p_cfg80211_disconnect */
/* Demangled: mtk_p2p_cfg80211_disconnect */
int mtk_p2p_cfg80211_disconnect(void);

/* Symbol: mtk_p2p_cfg80211_join_ibss */
/* Demangled: mtk_p2p_cfg80211_join_ibss */
int mtk_p2p_cfg80211_join_ibss(void);

/* Symbol: mtk_p2p_cfg80211_leave_ibss */
/* Demangled: mtk_p2p_cfg80211_leave_ibss */
int mtk_p2p_cfg80211_leave_ibss(void);

/* Symbol: mtk_p2p_cfg80211_set_power_mgmt */
/* Demangled: mtk_p2p_cfg80211_set_power_mgmt */
int mtk_p2p_cfg80211_set_power_mgmt(void);

/* Symbol: mtk_p2p_cfg80211_remain_on_channel */
/* Demangled: mtk_p2p_cfg80211_remain_on_channel */
int mtk_p2p_cfg80211_remain_on_channel(void);

/* Symbol: mtk_p2p_cfg80211_cancel_remain_on_channel */
/* Demangled: mtk_p2p_cfg80211_cancel_remain_on_channel */
int mtk_p2p_cfg80211_cancel_remain_on_channel(void);

/* Symbol: mtk_p2p_cfg80211_mgmt_tx */
/* Demangled: mtk_p2p_cfg80211_mgmt_tx */
int mtk_p2p_cfg80211_mgmt_tx(void);

/* Symbol: mtk_p2p_cfg80211_mgmt_frame_register */
/* Demangled: mtk_p2p_cfg80211_mgmt_frame_register */
int mtk_p2p_cfg80211_mgmt_frame_register(void);

/* Symbol: mtk_p2p_cfg80211_testmode_cmd */
/* Demangled: mtk_p2p_cfg80211_testmode_cmd */
int mtk_p2p_cfg80211_testmode_cmd(void);

/* Symbol: mtk_p2p_cfg80211_change_bss */
/* Demangled: mtk_p2p_cfg80211_change_bss */
int mtk_p2p_cfg80211_change_bss(void);

/* Symbol: mtk_p2p_cfg80211_mgmt_tx_cancel_wait */
/* Demangled: mtk_p2p_cfg80211_mgmt_tx_cancel_wait */
int mtk_p2p_cfg80211_mgmt_tx_cancel_wait(void);

/* Symbol: mtk_p2p_cfg80211_deauth */
/* Demangled: mtk_p2p_cfg80211_deauth */
int mtk_p2p_cfg80211_deauth(void);

/* Symbol: mtk_p2p_cfg80211_disassoc */
/* Demangled: mtk_p2p_cfg80211_disassoc */
int mtk_p2p_cfg80211_disassoc(void);

/* Symbol: mtk_p2p_cfg80211_start_ap */
/* Demangled: mtk_p2p_cfg80211_start_ap */
int mtk_p2p_cfg80211_start_ap(void);

/* Symbol: mtk_p2p_cfg80211_change_beacon */
/* Demangled: mtk_p2p_cfg80211_change_beacon */
int mtk_p2p_cfg80211_change_beacon(void);

/* Symbol: mtk_p2p_cfg80211_stop_ap */
/* Demangled: mtk_p2p_cfg80211_stop_ap */
int mtk_p2p_cfg80211_stop_ap(void);

/* Symbol: mtk_p2p_cfg80211_set_wiphy_params */
/* Demangled: mtk_p2p_cfg80211_set_wiphy_params */
int mtk_p2p_cfg80211_set_wiphy_params(void);

/* Symbol: mtk_p2p_cfg80211_set_bitrate_mask */
/* Demangled: mtk_p2p_cfg80211_set_bitrate_mask */
int mtk_p2p_cfg80211_set_bitrate_mask(void);

/* Symbol: mtk_p2p_cfg80211_set_txpower */
/* Demangled: mtk_p2p_cfg80211_set_txpower */
int mtk_p2p_cfg80211_set_txpower(void);

/* Symbol: mtk_p2p_cfg80211_get_txpower */
/* Demangled: mtk_p2p_cfg80211_get_txpower */
int mtk_p2p_cfg80211_get_txpower(void);

/* Symbol: StatsEnvGetPktDelay */
/* Demangled: StatsEnvGetPktDelay */
int StatsEnvGetPktDelay(void);

/* Symbol: StatsEnvSetPktDelay */
/* Demangled: StatsEnvSetPktDelay */
int StatsEnvSetPktDelay(void);

/* Symbol: __this_module */
/* Demangled: __this_module */
extern void* obj___this_module __asm__("__this_module");

/* Symbol: mtk_cfg80211_NLA_PUT */
/* Demangled: mtk_cfg80211_NLA_PUT */
int mtk_cfg80211_NLA_PUT(void);

/* Symbol: aisRefreshFWKBlacklist */
/* Demangled: aisRefreshFWKBlacklist */
int aisRefreshFWKBlacklist(void);

/* Symbol: scanSearchBssDescByBssid */
/* Demangled: scanSearchBssDescByBssid */
int scanSearchBssDescByBssid(void);

/* Symbol: aisAddBlacklist */
/* Demangled: aisAddBlacklist */
int aisAddBlacklist(void);

/* Symbol: mtk_cfg80211_vendor_event_generic_response */
/* Demangled: mtk_cfg80211_vendor_event_generic_response */
int mtk_cfg80211_vendor_event_generic_response(void);

/* Symbol: p2pFunGetPreferredFreqList */
/* Demangled: p2pFunGetPreferredFreqList */
int p2pFunGetPreferredFreqList(void);

/* Symbol: g_GetResultsBufferedCnt */
/* Demangled: g_GetResultsBufferedCnt */
extern void* g_GetResultsBufferedCnt;

/* Symbol: g_GetResultsCmdCnt */
/* Demangled: g_GetResultsCmdCnt */
extern void* g_GetResultsCmdCnt;

/* Symbol: kalCfgDataRead */
/* Demangled: kalCfgDataRead */
int kalCfgDataRead(void);

/* Symbol: g_P2pPrDev */
/* Demangled: g_P2pPrDev */
extern void* g_P2pPrDev;

/* Symbol: p2PAllocInfo */
/* Demangled: p2PAllocInfo */
int p2PAllocInfo(void);

/* Symbol: p2PFreeInfo */
/* Demangled: p2PFreeInfo */
int p2PFreeInfo(void);

/* Symbol: scanRemoveAllP2pBssDesc */
/* Demangled: scanRemoveAllP2pBssDesc */
int scanRemoveAllP2pBssDesc(void);

/* Symbol: p2p_netdev_ops */
/* Demangled: p2p_netdev_ops */
extern void* p2p_netdev_ops;

/* Symbol: p2pDevFsmInit */
/* Demangled: p2pDevFsmInit */
int p2pDevFsmInit(void);

/* Symbol: p2pRoleFsmInit */
/* Demangled: p2pRoleFsmInit */
int p2pRoleFsmInit(void);

/* Symbol: p2pFuncInitConnectionSettings */
/* Demangled: p2pFuncInitConnectionSettings */
int p2pFuncInitConnectionSettings(void);

/* Symbol: glRegisterP2P */
/* Demangled: glRegisterP2P */
int glRegisterP2P(void);

/* Symbol: p2pDevFsmUninit */
/* Demangled: p2pDevFsmUninit */
int p2pDevFsmUninit(void);

/* Symbol: p2pRoleFsmUninit */
/* Demangled: p2pRoleFsmUninit */
int p2pRoleFsmUninit(void);

/* Symbol: kalP2PSetRole */
/* Demangled: kalP2PSetRole */
int kalP2PSetRole(void);

/* Symbol: kalP2PGetRole */
/* Demangled: kalP2PGetRole */
int kalP2PGetRole(void);

/* Symbol: p2pFuncGetStationInfo */
/* Demangled: p2pFuncGetStationInfo */
int p2pFuncGetStationInfo(void);

/* Symbol: p2pFuncSetChannel */
/* Demangled: p2pFuncSetChannel */
int p2pFuncSetChannel(void);

/* Symbol: p2pFuncSetDfsState */
/* Demangled: p2pFuncSetDfsState */
int p2pFuncSetDfsState(void);

/* Symbol: _mtk_p2p_cfg80211_mgmt_tx */
/* Demangled: _mtk_p2p_cfg80211_mgmt_tx */
int _mtk_p2p_cfg80211_mgmt_tx(void);

/* Symbol: kalP2PSetCipher */
/* Demangled: kalP2PSetCipher */
int kalP2PSetCipher(void);

/* Symbol: mtk_p2p_cfg80211_set_channel */
/* Demangled: mtk_p2p_cfg80211_set_channel */
int mtk_p2p_cfg80211_set_channel(void);

/* Symbol: mtk_p2p_cfg80211_testmode_p2p_sigma_cmd */
/* Demangled: mtk_p2p_cfg80211_testmode_p2p_sigma_cmd */
int mtk_p2p_cfg80211_testmode_p2p_sigma_cmd(void);

/* Symbol: mtk_p2p_cfg80211_testmode_p2p_sigma_pre_cmd */
/* Demangled: mtk_p2p_cfg80211_testmode_p2p_sigma_pre_cmd */
int mtk_p2p_cfg80211_testmode_p2p_sigma_pre_cmd(void);

/* Symbol: kalP2PSetBlackList */
/* Demangled: kalP2PSetBlackList */
int kalP2PSetBlackList(void);

/* Symbol: mtk_p2p_cfg80211_testmode_hotspot_config_cmd */
/* Demangled: mtk_p2p_cfg80211_testmode_hotspot_config_cmd */
int mtk_p2p_cfg80211_testmode_hotspot_config_cmd(void);

/* Symbol: kalP2PSetWscMode */
/* Demangled: kalP2PSetWscMode */
int kalP2PSetWscMode(void);

/* Symbol: mtk_p2p_cfg80211_testmode_hotspot_block_list_cmd */
/* Demangled: mtk_p2p_cfg80211_testmode_hotspot_block_list_cmd */
int mtk_p2p_cfg80211_testmode_hotspot_block_list_cmd(void);

/* Symbol: mtk_p2p_cfg80211_testmode_sw_cmd */
/* Demangled: mtk_p2p_cfg80211_testmode_sw_cmd */
int mtk_p2p_cfg80211_testmode_sw_cmd(void);

/* Symbol: kalP2PUpdateAssocInfo */
/* Demangled: kalP2PUpdateAssocInfo */
int kalP2PUpdateAssocInfo(void);

/* Symbol: kalP2PGetCipher */
/* Demangled: kalP2PGetCipher */
int kalP2PGetCipher(void);

/* Symbol: kalP2PGetWscMode */
/* Demangled: kalP2PGetWscMode */
int kalP2PGetWscMode(void);

/* Symbol: kalP2PCalWSC_IELen */
/* Demangled: kalP2PCalWSC_IELen */
int kalP2PCalWSC_IELen(void);

/* Symbol: kalP2PGenWSC_IE */
/* Demangled: kalP2PGenWSC_IE */
int kalP2PGenWSC_IE(void);

/* Symbol: kalP2PUpdateWSC_IE */
/* Demangled: kalP2PUpdateWSC_IE */
int kalP2PUpdateWSC_IE(void);

/* Symbol: kalP2PCalP2P_IELen */
/* Demangled: kalP2PCalP2P_IELen */
int kalP2PCalP2P_IELen(void);

/* Symbol: kalP2PGenP2P_IE */
/* Demangled: kalP2PGenP2P_IE */
int kalP2PGenP2P_IE(void);

/* Symbol: kalP2PUpdateP2P_IE */
/* Demangled: kalP2PUpdateP2P_IE */
int kalP2PUpdateP2P_IE(void);

/* Symbol: kalP2PIndicateSDRequest */
/* Demangled: kalP2PIndicateSDRequest */
int kalP2PIndicateSDRequest(void);

/* Symbol: kalP2PIndicateSDResponse */
/* Demangled: kalP2PIndicateSDResponse */
int kalP2PIndicateSDResponse(void);

/* Symbol: kalP2PIndicateTXDone */
/* Demangled: kalP2PIndicateTXDone */
int kalP2PIndicateTXDone(void);

/* Symbol: kalP2PGetDevHdlr */
/* Demangled: kalP2PGetDevHdlr */
int kalP2PGetDevHdlr(void);

/* Symbol: kalGetChnlList */
/* Demangled: kalGetChnlList */
int kalGetChnlList(void);

/* Symbol: kalP2PIndicateChannelReady */
/* Demangled: kalP2PIndicateChannelReady */
int kalP2PIndicateChannelReady(void);

/* Symbol: kalP2pFuncGetChannelEntry */
/* Demangled: kalP2pFuncGetChannelEntry */
int kalP2pFuncGetChannelEntry(void);

/* Symbol: kalP2pFuncGetChannelType */
/* Demangled: kalP2pFuncGetChannelType */
int kalP2pFuncGetChannelType(void);

/* Symbol: kalP2PIndicateChannelExpired */
/* Demangled: kalP2PIndicateChannelExpired */
int kalP2PIndicateChannelExpired(void);

/* Symbol: kalP2PIndicateScanDone */
/* Demangled: kalP2PIndicateScanDone */
int kalP2PIndicateScanDone(void);

/* Symbol: kalP2PIndicateBssInfo */
/* Demangled: kalP2PIndicateBssInfo */
int kalP2PIndicateBssInfo(void);

/* Symbol: kalP2PIndicateMgmtTxStatus */
/* Demangled: kalP2PIndicateMgmtTxStatus */
int kalP2PIndicateMgmtTxStatus(void);

/* Symbol: kalP2PIndicateRxMgmtFrame */
/* Demangled: kalP2PIndicateRxMgmtFrame */
int kalP2PIndicateRxMgmtFrame(void);

/* Symbol: kalP2PRddDetectUpdate */
/* Demangled: kalP2PRddDetectUpdate */
int kalP2PRddDetectUpdate(void);

/* Symbol: kalP2PCacFinishedUpdate */
/* Demangled: kalP2PCacFinishedUpdate */
int kalP2PCacFinishedUpdate(void);

/* Symbol: kalP2PResetBlackList */
/* Demangled: kalP2PResetBlackList */
int kalP2PResetBlackList(void);

/* Symbol: kalP2PCmpBlackList */
/* Demangled: kalP2PCmpBlackList */
int kalP2PCmpBlackList(void);

/* Symbol: kalP2PMaxClients */
/* Demangled: kalP2PMaxClients */
int kalP2PMaxClients(void);

/* Symbol: kalP2pUnlinkBss */
/* Demangled: kalP2pUnlinkBss */
int kalP2pUnlinkBss(void);

/* Symbol: scanSearchBssDescByBssidAndSsid */
/* Demangled: scanSearchBssDescByBssidAndSsid */
int scanSearchBssDescByBssidAndSsid(void);

/* Symbol: scanRemoveBssDescByBssid */
/* Demangled: scanRemoveBssDescByBssid */
int scanRemoveBssDescByBssid(void);

/* Symbol: kalP2pIndicateQueuedMgmtFrame */
/* Demangled: kalP2pIndicateQueuedMgmtFrame */
int kalP2pIndicateQueuedMgmtFrame(void);

/* Symbol: kalP2pIndicateAcsResult */
/* Demangled: kalP2pIndicateAcsResult */
int kalP2pIndicateAcsResult(void);

/* Symbol: kalP2pNotifyStopApComplete */
/* Demangled: kalP2pNotifyStopApComplete */
int kalP2pNotifyStopApComplete(void);

/* Symbol: kalP2pIndicateChnlSwitch */
/* Demangled: kalP2pIndicateChnlSwitch */
int kalP2pIndicateChnlSwitch(void);

/* Symbol: halGetMsduTokenFreeCnt */
/* Demangled: halGetMsduTokenFreeCnt */
int halGetMsduTokenFreeCnt(void);

/* Symbol: halWpdmaProcessCmdDmaDone */
/* Demangled: halWpdmaProcessCmdDmaDone */
int halWpdmaProcessCmdDmaDone(void);

/* Symbol: halWpdmaProcessDataDmaDone */
/* Demangled: halWpdmaProcessDataDmaDone */
int halWpdmaProcessDataDmaDone(void);

/* Symbol: halInitMsduTokenInfo */
/* Demangled: halInitMsduTokenInfo */
int halInitMsduTokenInfo(void);

/* Symbol: halUninitMsduTokenInfo */
/* Demangled: halUninitMsduTokenInfo */
int halUninitMsduTokenInfo(void);

/* Symbol: halGetMsduTokenEntry */
/* Demangled: halGetMsduTokenEntry */
int halGetMsduTokenEntry(void);

/* Symbol: halAcquireMsduToken */
/* Demangled: halAcquireMsduToken */
int halAcquireMsduToken(void);

/* Symbol: halReturnMsduToken */
/* Demangled: halReturnMsduToken */
int halReturnMsduToken(void);

/* Symbol: halReturnTimeoutMsduToken */
/* Demangled: halReturnTimeoutMsduToken */
int halReturnTimeoutMsduToken(void);

/* Symbol: halTimeCompare */
/* Demangled: halTimeCompare */
int halTimeCompare(void);

/* Symbol: halWpdmaAllocRing */
/* Demangled: halWpdmaAllocRing */
int halWpdmaAllocRing(void);

/* Symbol: halWpdmaInitTxRing */
/* Demangled: halWpdmaInitTxRing */
int halWpdmaInitTxRing(void);

/* Symbol: halWpdmaInitRxRing */
/* Demangled: halWpdmaInitRxRing */
int halWpdmaInitRxRing(void);

/* Symbol: halHwRecoveryTimeout */
/* Demangled: halHwRecoveryTimeout */
int halHwRecoveryTimeout(void);

/* Symbol: halWpdmaAllocTxRing */
/* Demangled: halWpdmaAllocTxRing */
int halWpdmaAllocTxRing(void);

/* Symbol: halWpdmaAllocRxRing */
/* Demangled: halWpdmaAllocRxRing */
int halWpdmaAllocRxRing(void);

/* Symbol: halWpdmaInitRing */
/* Demangled: halWpdmaInitRing */
int halWpdmaInitRing(void);

/* Symbol: halWpdmaFreeRing */
/* Demangled: halWpdmaFreeRing */
int halWpdmaFreeRing(void);

/* Symbol: halTxUpdateCutThroughDesc */
/* Demangled: halTxUpdateCutThroughDesc */
int halTxUpdateCutThroughDesc(void);

/* Symbol: halSerHifReset */
/* Demangled: halSerHifReset */
int halSerHifReset(void);

/* Symbol: halRxReceiveRFBs */
/* Demangled: halRxReceiveRFBs */
int halRxReceiveRFBs(void);

/* Symbol: halWpdmaGetRxDmaDoneCnt */
/* Demangled: halWpdmaGetRxDmaDoneCnt */
int halWpdmaGetRxDmaDoneCnt(void);

/* Symbol: kalDevReadData */
/* Demangled: kalDevReadData */
int kalDevReadData(void);

/* Symbol: halHifRst */
/* Demangled: halHifRst */
int halHifRst(void);

/* Symbol: halWpdmaWaitIdle */
/* Demangled: halWpdmaWaitIdle */
int halWpdmaWaitIdle(void);

/* Symbol: halWpdmaWriteCmd */
/* Demangled: halWpdmaWriteCmd */
int halWpdmaWriteCmd(void);

/* Symbol: halWpdamFreeMsdu */
/* Demangled: halWpdamFreeMsdu */
int halWpdamFreeMsdu(void);

/* Symbol: halWpdmaWriteMsdu */
/* Demangled: halWpdmaWriteMsdu */
int halWpdmaWriteMsdu(void);

/* Symbol: halWpdmaWriteAmsdu */
/* Demangled: halWpdmaWriteAmsdu */
int halWpdmaWriteAmsdu(void);

/* Symbol: halIsStaticMapBusAddr */
/* Demangled: halIsStaticMapBusAddr */
int halIsStaticMapBusAddr(void);

/* Symbol: halChipToStaticMapBusAddr */
/* Demangled: halChipToStaticMapBusAddr */
int halChipToStaticMapBusAddr(void);

/* Symbol: halGetDynamicMapReg */
/* Demangled: halGetDynamicMapReg */
int halGetDynamicMapReg(void);

/* Symbol: halSetDynamicMapReg */
/* Demangled: halSetDynamicMapReg */
int halSetDynamicMapReg(void);

/* Symbol: halHwRecoveryFromError */
/* Demangled: halHwRecoveryFromError */
int halHwRecoveryFromError(void);

/* Symbol: halSetDrvSer */
/* Demangled: halSetDrvSer */
int halSetDrvSer(void);

/* Symbol: kalDevKickCmd */
/* Demangled: kalDevKickCmd */
int kalDevKickCmd(void);

/* Symbol: halIsHifStateReady */
/* Demangled: halIsHifStateReady */
int halIsHifStateReady(void);

/* Symbol: halEnableSlpProt */
/* Demangled: halEnableSlpProt */
int halEnableSlpProt(void);

/* Symbol: halDisableSlpProt */
/* Demangled: halDisableSlpProt */
int halDisableSlpProt(void);

/* Symbol: wf_ioremap_read */
/* Demangled: wf_ioremap_read */
int wf_ioremap_read(void);

/* Symbol: wf_ioremap_write */
/* Demangled: wf_ioremap_write */
int wf_ioremap_write(void);

/* Symbol: haldumpPhyInfo */
/* Demangled: haldumpPhyInfo */
int haldumpPhyInfo(void);

/* Symbol: kalDumpTxRing */
/* Demangled: kalDumpTxRing */
int kalDumpTxRing(void);

/* Symbol: kalDumpRxRing */
/* Demangled: kalDumpRxRing */
int kalDumpRxRing(void);

/* Symbol: halShowPdmaInfo */
/* Demangled: halShowPdmaInfo */
int halShowPdmaInfo(void);

/* Symbol: halShowHostCsrInfo */
/* Demangled: halShowHostCsrInfo */
int halShowHostCsrInfo(void);

/* Symbol: hifAxiRemove */
/* Demangled: hifAxiRemove */
int hifAxiRemove(void);

/* Symbol: g_prPlatDev */
/* Demangled: g_prPlatDev */
extern void* g_prPlatDev;

/* Symbol: mtk_axi_resume */
/* Demangled: mtk_axi_resume */
int mtk_axi_resume(void);

/* Symbol: mt66xx_driver_data_connac */
/* Demangled: mt66xx_driver_data_connac */
extern void* mt66xx_driver_data_connac;

/* Symbol: gWifiRsvMemSize */
/* Demangled: gWifiRsvMemSize */
extern void* gWifiRsvMemSize;

/* Symbol: grMem */
/* Demangled: grMem */
extern void* grMem;

/* Symbol: glIsReadClearReg */
/* Demangled: glIsReadClearReg */
int glIsReadClearReg(void);

/* Symbol: glSetPowerState */
/* Demangled: glSetPowerState */
int glSetPowerState(void);

/* Symbol: glGetHifDev */
/* Demangled: glGetHifDev */
int glGetHifDev(void);

/* Symbol: mtk_axi_of_ids */
/* Demangled: mtk_axi_of_ids */
extern void* mtk_axi_of_ids;

/* Symbol: __mod_axi__mtk_axi_ids_device_table */
/* Demangled: __mod_axi__mtk_axi_ids_device_table */
extern void* obj___mod_axi__mtk_axi_ids_device_table __asm__("__mod_axi__mtk_axi_ids_device_table");

/* Symbol: aisCheckPowerMatchERCondition */
/* Demangled: aisCheckPowerMatchERCondition */
int aisCheckPowerMatchERCondition(void);

/* Symbol: aisCheckUsingERRate */
/* Demangled: aisCheckUsingERRate */
int aisCheckUsingERRate(void);

/* Symbol: secInit */
/* Demangled: secInit */
int secInit(void);

/* Symbol: cnmGetBssInfoAndInit */
/* Demangled: cnmGetBssInfoAndInit */
int cnmGetBssInfoAndInit(void);

/* Symbol: aisFsmRunEventBGSleepTimeOut */
/* Demangled: aisFsmRunEventBGSleepTimeOut */
int aisFsmRunEventBGSleepTimeOut(void);

/* Symbol: aisFsmRunEventIbssAloneTimeOut */
/* Demangled: aisFsmRunEventIbssAloneTimeOut */
int aisFsmRunEventIbssAloneTimeOut(void);

/* Symbol: aisFsmRunEventChannelTimeout */
/* Demangled: aisFsmRunEventChannelTimeout */
int aisFsmRunEventChannelTimeout(void);

/* Symbol: aisFsmRunEventDeauthTimeout */
/* Demangled: aisFsmRunEventDeauthTimeout */
int aisFsmRunEventDeauthTimeout(void);

/* Symbol: rrmParamInit */
/* Demangled: rrmParamInit */
int rrmParamInit(void);

/* Symbol: aisFsmSteps */
/* Demangled: aisFsmSteps */
int aisFsmSteps(void);

/* Symbol: aisFsmReleaseCh */
/* Demangled: aisFsmReleaseCh */
int aisFsmReleaseCh(void);

/* Symbol: aisFsmStateAbort_JOIN */
/* Demangled: aisFsmStateAbort_JOIN */
int aisFsmStateAbort_JOIN(void);

/* Symbol: aisFsmIsRequestPending */
/* Demangled: aisFsmIsRequestPending */
int aisFsmIsRequestPending(void);

/* Symbol: aisDeauthXmitCompleteBss */
/* Demangled: aisDeauthXmitCompleteBss */
int aisDeauthXmitCompleteBss(void);

/* Symbol: aisFsmFlushRequest */
/* Demangled: aisFsmFlushRequest */
int aisFsmFlushRequest(void);

/* Symbol: cnmFreeBssInfo */
/* Demangled: cnmFreeBssInfo */
int cnmFreeBssInfo(void);

/* Symbol: aisFsmIsInProcessPostpone */
/* Demangled: aisFsmIsInProcessPostpone */
int aisFsmIsInProcessPostpone(void);

/* Symbol: aisFsmIsBeaconTimeout */
/* Demangled: aisFsmIsBeaconTimeout */
int aisFsmIsBeaconTimeout(void);

/* Symbol: aisFsmStateInit_JOIN */
/* Demangled: aisFsmStateInit_JOIN */
int aisFsmStateInit_JOIN(void);

/* Symbol: bssCreateStaRecFromBssDesc */
/* Demangled: bssCreateStaRecFromBssDesc */
int bssCreateStaRecFromBssDesc(void);

/* Symbol: cnmStaRecChangeState */
/* Demangled: cnmStaRecChangeState */
int cnmStaRecChangeState(void);

/* Symbol: aisQueryBlackList */
/* Demangled: aisQueryBlackList */
int aisQueryBlackList(void);

/* Symbol: rsnSearchPmkidEntry */
/* Demangled: rsnSearchPmkidEntry */
int rsnSearchPmkidEntry(void);

/* Symbol: rlmSetMaxTxPwrLimit */
/* Demangled: rlmSetMaxTxPwrLimit */
int rlmSetMaxTxPwrLimit(void);

/* Symbol: aisFsmStateInit_RetryJOIN */
/* Demangled: aisFsmStateInit_RetryJOIN */
int aisFsmStateInit_RetryJOIN(void);

/* Symbol: aisFsmStateInit_IBSS_ALONE */
/* Demangled: aisFsmStateInit_IBSS_ALONE */
int aisFsmStateInit_IBSS_ALONE(void);

/* Symbol: aisUpdateBssInfoForCreateIBSS */
/* Demangled: aisUpdateBssInfoForCreateIBSS */
int aisUpdateBssInfoForCreateIBSS(void);

/* Symbol: aisFsmCreateIBSS */
/* Demangled: aisFsmCreateIBSS */
int aisFsmCreateIBSS(void);

/* Symbol: aisFsmStateInit_IBSS_MERGE */
/* Demangled: aisFsmStateInit_IBSS_MERGE */
int aisFsmStateInit_IBSS_MERGE(void);

/* Symbol: aisFsmMergeIBSS */
/* Demangled: aisFsmMergeIBSS */
int aisFsmMergeIBSS(void);

/* Symbol: bssAddClient */
/* Demangled: bssAddClient */
int bssAddClient(void);

/* Symbol: aisUpdateBssInfoForMergeIBSS */
/* Demangled: aisUpdateBssInfoForMergeIBSS */
int aisUpdateBssInfoForMergeIBSS(void);

/* Symbol: aisIndicationOfMediaStateToHost */
/* Demangled: aisIndicationOfMediaStateToHost */
int aisIndicationOfMediaStateToHost(void);

/* Symbol: aisFsmStateAbort_NORMAL_TR */
/* Demangled: aisFsmStateAbort_NORMAL_TR */
int aisFsmStateAbort_NORMAL_TR(void);

/* Symbol: aisFsmStateAbort_IBSS */
/* Demangled: aisFsmStateAbort_IBSS */
int aisFsmStateAbort_IBSS(void);

/* Symbol: scanSearchBssDescByTA */
/* Demangled: scanSearchBssDescByTA */
int scanSearchBssDescByTA(void);

/* Symbol: aisFsmRemoveRoamingRequest */
/* Demangled: aisFsmRemoveRoamingRequest */
int aisFsmRemoveRoamingRequest(void);

/* Symbol: aisFsmClearRequest */
/* Demangled: aisFsmClearRequest */
int aisFsmClearRequest(void);

/* Symbol: aisSearchBssDescByScore */
/* Demangled: aisSearchBssDescByScore */
int aisSearchBssDescByScore(void);

/* Symbol: scanSearchBssDescByScoreForAis */
/* Demangled: scanSearchBssDescByScoreForAis */
int scanSearchBssDescByScoreForAis(void);

/* Symbol: aisNeedTargetScan */
/* Demangled: aisNeedTargetScan */
int aisNeedTargetScan(void);

/* Symbol: aisSearchHandleBssDesc */
/* Demangled: aisSearchHandleBssDesc */
int aisSearchHandleBssDesc(void);

/* Symbol: roamingFsmRunEventFail */
/* Demangled: roamingFsmRunEventFail */
int roamingFsmRunEventFail(void);

/* Symbol: aisFsmStateSearchAction */
/* Demangled: aisFsmStateSearchAction */
int aisFsmStateSearchAction(void);

/* Symbol: cnmWmmIndexDecision */
/* Demangled: cnmWmmIndexDecision */
int cnmWmmIndexDecision(void);

/* Symbol: cnmDbdcPreConnectionEnableDecision */
/* Demangled: cnmDbdcPreConnectionEnableDecision */
int cnmDbdcPreConnectionEnableDecision(void);

/* Symbol: aisScanChannelFixed */
/* Demangled: aisScanChannelFixed */
int aisScanChannelFixed(void);

/* Symbol: cnmAisInfraChannelFixed */
/* Demangled: cnmAisInfraChannelFixed */
int cnmAisInfraChannelFixed(void);

/* Symbol: aisPostponedEventOfDisconnTimeout */
/* Demangled: aisPostponedEventOfDisconnTimeout */
int aisPostponedEventOfDisconnTimeout(void);

/* Symbol: cnmOpModeGetTRxNss */
/* Demangled: cnmOpModeGetTRxNss */
int cnmOpModeGetTRxNss(void);

/* Symbol: rrmFillScanMsg */
/* Demangled: rrmFillScanMsg */
int rrmFillScanMsg(void);

/* Symbol: aisFuncTxMgmtFrame */
/* Demangled: aisFuncTxMgmtFrame */
int aisFuncTxMgmtFrame(void);

/* Symbol: cnmGetDbdcBwCapability */
/* Demangled: cnmGetDbdcBwCapability */
int cnmGetDbdcBwCapability(void);

/* Symbol: rlmGetVhtOpBwByBssOpBw */
/* Demangled: rlmGetVhtOpBwByBssOpBw */
int rlmGetVhtOpBwByBssOpBw(void);

/* Symbol: rlmReviseMaxBw */
/* Demangled: rlmReviseMaxBw */
int rlmReviseMaxBw(void);

/* Symbol: aisDeauthXmitComplete */
/* Demangled: aisDeauthXmitComplete */
int aisDeauthXmitComplete(void);

/* Symbol: scanSetRequestChannel */
/* Demangled: scanSetRequestChannel */
int scanSetRequestChannel(void);

/* Symbol: aisGetFsmState */
/* Demangled: aisGetFsmState */
int aisGetFsmState(void);

/* Symbol: aisFsmGetNextRequest */
/* Demangled: aisFsmGetNextRequest */
int aisFsmGetNextRequest(void);

/* Symbol: aisFsmRunEventScanDone */
/* Demangled: aisFsmRunEventScanDone */
int aisFsmRunEventScanDone(void);

/* Symbol: scanGetCurrentEssChnlList */
/* Demangled: scanGetCurrentEssChnlList */
int scanGetCurrentEssChnlList(void);

/* Symbol: aisFsmRoamingScanResultsUpdate */
/* Demangled: aisFsmRoamingScanResultsUpdate */
int aisFsmRoamingScanResultsUpdate(void);

/* Symbol: rrmDoBeaconMeasurement */
/* Demangled: rrmDoBeaconMeasurement */
int rrmDoBeaconMeasurement(void);

/* Symbol: rrmCollectBeaconReport */
/* Demangled: rrmCollectBeaconReport */
int rrmCollectBeaconReport(void);

/* Symbol: rrmStartNextMeasurement */
/* Demangled: rrmStartNextMeasurement */
int rrmStartNextMeasurement(void);

/* Symbol: aisGetRmReqParam */
/* Demangled: aisGetRmReqParam */
int aisGetRmReqParam(void);

/* Symbol: roamingFsmScanResultsUpdate */
/* Demangled: roamingFsmScanResultsUpdate */
int roamingFsmScanResultsUpdate(void);

/* Symbol: roamingFsmRunEventRoam */
/* Demangled: roamingFsmRunEventRoam */
int roamingFsmRunEventRoam(void);

/* Symbol: aisFsmInsertRequest */
/* Demangled: aisFsmInsertRequest */
int aisFsmInsertRequest(void);

/* Symbol: aisFsmRunEventAbort */
/* Demangled: aisFsmRunEventAbort */
int aisFsmRunEventAbort(void);

/* Symbol: aisFsmInsertRequestToHead */
/* Demangled: aisFsmInsertRequestToHead */
int aisFsmInsertRequestToHead(void);

/* Symbol: aisFsmStateAbort */
/* Demangled: aisFsmStateAbort */
int aisFsmStateAbort(void);

/* Symbol: wmmNotifyDisconnected */
/* Demangled: wmmNotifyDisconnected */
int wmmNotifyDisconnected(void);

/* Symbol: rrmFreeMeasurementResources */
/* Demangled: rrmFreeMeasurementResources */
int rrmFreeMeasurementResources(void);

/* Symbol: aisFsmDisconnect */
/* Demangled: aisFsmDisconnect */
int aisFsmDisconnect(void);

/* Symbol: rlmBssAborted */
/* Demangled: rlmBssAborted */
int rlmBssAborted(void);

/* Symbol: scanRemoveConnFlagOfBssDescByBssid */
/* Demangled: scanRemoveConnFlagOfBssDescByBssid */
int scanRemoveConnFlagOfBssDescByBssid(void);

/* Symbol: aisFsmRunEventJoinComplete */
/* Demangled: aisFsmRunEventJoinComplete */
int aisFsmRunEventJoinComplete(void);

/* Symbol: aisFsmJoinCompleteAction */
/* Demangled: aisFsmJoinCompleteAction */
int aisFsmJoinCompleteAction(void);

/* Symbol: aisUpdateBssInfoForJOIN */
/* Demangled: aisUpdateBssInfoForJOIN */
int aisUpdateBssInfoForJOIN(void);

/* Symbol: aisFsmRoamingDisconnectPrevAP */
/* Demangled: aisFsmRoamingDisconnectPrevAP */
int aisFsmRoamingDisconnectPrevAP(void);

/* Symbol: aisUpdateBssInfoForRoamingAP */
/* Demangled: aisUpdateBssInfoForRoamingAP */
int aisUpdateBssInfoForRoamingAP(void);

/* Symbol: scanApOverload */
/* Demangled: scanApOverload */
int scanApOverload(void);

/* Symbol: rlmProcessAssocRsp */
/* Demangled: rlmProcessAssocRsp */
int rlmProcessAssocRsp(void);

/* Symbol: secPostUpdateAddr */
/* Demangled: secPostUpdateAddr */
int secPostUpdateAddr(void);

/* Symbol: aisResetNeighborApList */
/* Demangled: aisResetNeighborApList */
int aisResetNeighborApList(void);

/* Symbol: aisSendNeighborRequest */
/* Demangled: aisSendNeighborRequest */
int aisSendNeighborRequest(void);

/* Symbol: ibssInitForAdHoc */
/* Demangled: ibssInitForAdHoc */
int ibssInitForAdHoc(void);

/* Symbol: rlmBssInitForAPandIbss */
/* Demangled: rlmBssInitForAPandIbss */
int rlmBssInitForAPandIbss(void);

/* Symbol: rateGetDataRatesFromRateSet */
/* Demangled: rateGetDataRatesFromRateSet */
int rateGetDataRatesFromRateSet(void);

/* Symbol: aisFsmRunEventFoundIBSSPeer */
/* Demangled: aisFsmRunEventFoundIBSSPeer */
int aisFsmRunEventFoundIBSSPeer(void);

/* Symbol: aisRemoveBlackList */
/* Demangled: aisRemoveBlackList */
int aisRemoveBlackList(void);

/* Symbol: aisValidateProbeReq */
/* Demangled: aisValidateProbeReq */
int aisValidateProbeReq(void);

/* Symbol: aisFsmRunEventChGrant */
/* Demangled: aisFsmRunEventChGrant */
int aisFsmRunEventChGrant(void);

/* Symbol: cnmP2pIsActive */
/* Demangled: cnmP2pIsActive */
int cnmP2pIsActive(void);

/* Symbol: aisFsmRunEventRoamingDiscovery */
/* Demangled: aisFsmRunEventRoamingDiscovery */
int aisFsmRunEventRoamingDiscovery(void);

/* Symbol: aisFsmRunEventRemainOnChannel */
/* Demangled: aisFsmRunEventRemainOnChannel */
int aisFsmRunEventRemainOnChannel(void);

/* Symbol: aisFsmRunEventCancelRemainOnChannel */
/* Demangled: aisFsmRunEventCancelRemainOnChannel */
int aisFsmRunEventCancelRemainOnChannel(void);

/* Symbol: aisFsmRunEventMgmtFrameTx */
/* Demangled: aisFsmRunEventMgmtFrameTx */
int aisFsmRunEventMgmtFrameTx(void);

/* Symbol: aisFsmRunEventMgmtFrameTxDone */
/* Demangled: aisFsmRunEventMgmtFrameTxDone */
int aisFsmRunEventMgmtFrameTxDone(void);

/* Symbol: aisRemoveTimeoutBlacklist */
/* Demangled: aisRemoveTimeoutBlacklist */
int aisRemoveTimeoutBlacklist(void);

/* Symbol: aisFsmRunEventBssTransition */
/* Demangled: aisFsmRunEventBssTransition */
int aisFsmRunEventBssTransition(void);

/* Symbol: aisCollectNeighborAP */
/* Demangled: aisCollectNeighborAP */
int aisCollectNeighborAP(void);

/* Symbol: roamingFsmSteps */
/* Demangled: roamingFsmSteps */
int roamingFsmSteps(void);

/* Symbol: wnmSendBTMResponseFrame */
/* Demangled: wnmSendBTMResponseFrame */
int wnmSendBTMResponseFrame(void);

/* Symbol: aisFsmRunEventCancelTxWait */
/* Demangled: aisFsmRunEventCancelTxWait */
int aisFsmRunEventCancelTxWait(void);

/* Symbol: aisGetTargetBssDescChannel */
/* Demangled: aisGetTargetBssDescChannel */
int aisGetTargetBssDescChannel(void);

/* Symbol: aisGetEncStatus */
/* Demangled: aisGetEncStatus */
int aisGetEncStatus(void);

/* Symbol: aisGetRmReportParam */
/* Demangled: aisGetRmReportParam */
int aisGetRmReportParam(void);

/* Symbol: aaaFsmRunEventTxReqTimeOut */
/* Demangled: aaaFsmRunEventTxReqTimeOut */
int aaaFsmRunEventTxReqTimeOut(void);

/* Symbol: p2pRoleFsmRunEventAAATxFail */
/* Demangled: p2pRoleFsmRunEventAAATxFail */
int p2pRoleFsmRunEventAAATxFail(void);

/* Symbol: aaaFsmRunEventRxAuth */
/* Demangled: aaaFsmRunEventRxAuth */
int aaaFsmRunEventRxAuth(void);

/* Symbol: p2pFuncBSSIDFindBssInfo */
/* Demangled: p2pFuncBSSIDFindBssInfo */
int p2pFuncBSSIDFindBssInfo(void);

/* Symbol: authProcessRxAuthFrame */
/* Demangled: authProcessRxAuthFrame */
int authProcessRxAuthFrame(void);

/* Symbol: p2pFuncValidateAuth */
/* Demangled: p2pFuncValidateAuth */
int p2pFuncValidateAuth(void);

/* Symbol: authSendAuthFrame */
/* Demangled: authSendAuthFrame */
int authSendAuthFrame(void);

/* Symbol: secHandleNoWtbl */
/* Demangled: secHandleNoWtbl */
int secHandleNoWtbl(void);

/* Symbol: assocProcessRxAssocReqFrame */
/* Demangled: assocProcessRxAssocReqFrame */
int assocProcessRxAssocReqFrame(void);

/* Symbol: p2pFuncValidateAssocReq */
/* Demangled: p2pFuncValidateAssocReq */
int p2pFuncValidateAssocReq(void);

/* Symbol: rlmProcessAssocReq */
/* Demangled: rlmProcessAssocReq */
int rlmProcessAssocReq(void);

/* Symbol: p2pRoleFsmRunEventAAAComplete */
/* Demangled: p2pRoleFsmRunEventAAAComplete */
int p2pRoleFsmRunEventAAAComplete(void);

/* Symbol: assocSendReAssocRespFrame */
/* Demangled: assocSendReAssocRespFrame */
int assocSendReAssocRespFrame(void);

/* Symbol: rsnApStartSaQuery */
/* Demangled: rsnApStartSaQuery */
int rsnApStartSaQuery(void);

/* Symbol: aaaFsmRunEventTxDone */
/* Demangled: aaaFsmRunEventTxDone */
int aaaFsmRunEventTxDone(void);

/* Symbol: authCheckTxAuthFrame */
/* Demangled: authCheckTxAuthFrame */
int authCheckTxAuthFrame(void);

/* Symbol: assocCheckTxReAssocRespFrame */
/* Demangled: assocCheckTxReAssocRespFrame */
int assocCheckTxReAssocRespFrame(void);

/* Symbol: p2pRoleFsmRunEventAAASuccess */
/* Demangled: p2pRoleFsmRunEventAAASuccess */
int p2pRoleFsmRunEventAAASuccess(void);

/* Symbol: assocCalculateConnIELen */
/* Demangled: assocCalculateConnIELen */
int assocCalculateConnIELen(void);

/* Symbol: assocGenerateConnIE */
/* Demangled: assocGenerateConnIE */
int assocGenerateConnIE(void);

/* Symbol: assocGenerateMDIE */
/* Demangled: assocGenerateMDIE */
int assocGenerateMDIE(void);

/* Symbol: assocBuildCapabilityInfo */
/* Demangled: assocBuildCapabilityInfo */
int assocBuildCapabilityInfo(void);

/* Symbol: rNonHTPhyAttributes */
/* Demangled: rNonHTPhyAttributes */
extern void* rNonHTPhyAttributes;

/* Symbol: assocComposeReAssocReqFrameHeaderAndFF */
/* Demangled: assocComposeReAssocReqFrameHeaderAndFF */
int assocComposeReAssocReqFrameHeaderAndFF(void);

/* Symbol: assocSendReAssocReqFrame */
/* Demangled: assocSendReAssocReqFrame */
int assocSendReAssocReqFrame(void);

/* Symbol: p2pCalculate_IEForAssocReq */
/* Demangled: p2pCalculate_IEForAssocReq */
int p2pCalculate_IEForAssocReq(void);

/* Symbol: txAssocReqIETable */
/* Demangled: txAssocReqIETable */
extern void* txAssocReqIETable;

/* Symbol: saaFsmRunEventTxDone */
/* Demangled: saaFsmRunEventTxDone */
int saaFsmRunEventTxDone(void);

/* Symbol: p2pBuildReAssocReqFrameCommonIEs */
/* Demangled: p2pBuildReAssocReqFrameCommonIEs */
int p2pBuildReAssocReqFrameCommonIEs(void);

/* Symbol: p2pGenerate_IEForAssocReq */
/* Demangled: p2pGenerate_IEForAssocReq */
int p2pGenerate_IEForAssocReq(void);

/* Symbol: assoc_get_nonwfa_vend_ie_len */
/* Demangled: assoc_get_nonwfa_vend_ie_len */
int assoc_get_nonwfa_vend_ie_len(void);

/* Symbol: assoc_build_nonwfa_vend_ie */
/* Demangled: assoc_build_nonwfa_vend_ie */
int assoc_build_nonwfa_vend_ie(void);

/* Symbol: assocCheckTxReAssocReqFrame */
/* Demangled: assocCheckTxReAssocReqFrame */
int assocCheckTxReAssocReqFrame(void);

/* Symbol: assocCheckRxReAssocRspFrameStatus */
/* Demangled: assocCheckRxReAssocRspFrameStatus */
int assocCheckRxReAssocRspFrameStatus(void);

/* Symbol: assocSendDisAssocFrame */
/* Demangled: assocSendDisAssocFrame */
int assocSendDisAssocFrame(void);

/* Symbol: assocProcessRxDisassocFrame */
/* Demangled: assocProcessRxDisassocFrame */
int assocProcessRxDisassocFrame(void);

/* Symbol: p2pFuncParseCheckForTKIPInfoElem */
/* Demangled: p2pFuncParseCheckForTKIPInfoElem */
int p2pFuncParseCheckForTKIPInfoElem(void);

/* Symbol: p2pFuncParseCheckForP2PInfoElem */
/* Demangled: p2pFuncParseCheckForP2PInfoElem */
int p2pFuncParseCheckForP2PInfoElem(void);

/* Symbol: rxAssocReqIETable */
/* Demangled: rxAssocReqIETable */
extern void* rxAssocReqIETable;

/* Symbol: rsnParserCheckForRSNCCMPPSK */
/* Demangled: rsnParserCheckForRSNCCMPPSK */
int rsnParserCheckForRSNCCMPPSK(void);

/* Symbol: rateGetRateSetFromIEs */
/* Demangled: rateGetRateSetFromIEs */
int rateGetRateSetFromIEs(void);

/* Symbol: txAssocRespIETable */
/* Demangled: txAssocRespIETable */
extern void* txAssocRespIETable;

/* Symbol: rlmReqGeneratePowerCapIE */
/* Demangled: rlmReqGeneratePowerCapIE */
int rlmReqGeneratePowerCapIE(void);

/* Symbol: rlmReqGenerateSupportedChIE */
/* Demangled: rlmReqGenerateSupportedChIE */
int rlmReqGenerateSupportedChIE(void);

/* Symbol: rlmReqGenerateHtCapIE */
/* Demangled: rlmReqGenerateHtCapIE */
int rlmReqGenerateHtCapIE(void);

/* Symbol: rsnCalculateFTIELen */
/* Demangled: rsnCalculateFTIELen */
int rsnCalculateFTIELen(void);

/* Symbol: rsnGenerateFTIE */
/* Demangled: rsnGenerateFTIE */
int rsnGenerateFTIE(void);

/* Symbol: rrmGenerateRRMEnabledCapIE */
/* Demangled: rrmGenerateRRMEnabledCapIE */
int rrmGenerateRRMEnabledCapIE(void);

/* Symbol: rlmReqGenerateExtCapIE */
/* Demangled: rlmReqGenerateExtCapIE */
int rlmReqGenerateExtCapIE(void);

/* Symbol: rsnGenerateRSNIE */
/* Demangled: rsnGenerateRSNIE */
int rsnGenerateRSNIE(void);

/* Symbol: rlmReqGenerateVhtCapIE */
/* Demangled: rlmReqGenerateVhtCapIE */
int rlmReqGenerateVhtCapIE(void);

/* Symbol: rlmReqGenerateVhtOpNotificationIE */
/* Demangled: rlmReqGenerateVhtOpNotificationIE */
int rlmReqGenerateVhtOpNotificationIE(void);

/* Symbol: rlmGenerateMTKOuiIE */
/* Demangled: rlmGenerateMTKOuiIE */
int rlmGenerateMTKOuiIE(void);

/* Symbol: rsnGenerateWPAIE */
/* Demangled: rsnGenerateWPAIE */
int rsnGenerateWPAIE(void);

/* Symbol: rlmRspGenerateErpIE */
/* Demangled: rlmRspGenerateErpIE */
int rlmRspGenerateErpIE(void);

/* Symbol: rlmRspGenerateHtCapIE */
/* Demangled: rlmRspGenerateHtCapIE */
int rlmRspGenerateHtCapIE(void);

/* Symbol: rlmRspGenerateHtOpIE */
/* Demangled: rlmRspGenerateHtOpIE */
int rlmRspGenerateHtOpIE(void);

/* Symbol: rlmRspGenerateObssScanIE */
/* Demangled: rlmRspGenerateObssScanIE */
int rlmRspGenerateObssScanIE(void);

/* Symbol: p2pFuncCalculateP2p_IELenForAssocRsp */
/* Demangled: p2pFuncCalculateP2p_IELenForAssocRsp */
int p2pFuncCalculateP2p_IELenForAssocRsp(void);

/* Symbol: p2pFuncGenerateP2p_IEForAssocRsp */
/* Demangled: p2pFuncGenerateP2p_IEForAssocRsp */
int p2pFuncGenerateP2p_IEForAssocRsp(void);

/* Symbol: wfdFuncCalculateWfdIELenForAssocRsp */
/* Demangled: wfdFuncCalculateWfdIELenForAssocRsp */
int wfdFuncCalculateWfdIELenForAssocRsp(void);

/* Symbol: wfdFuncGenerateWfdIEForAssocRsp */
/* Demangled: wfdFuncGenerateWfdIEForAssocRsp */
int wfdFuncGenerateWfdIEForAssocRsp(void);

/* Symbol: rlmRspGenerateExtCapIE */
/* Demangled: rlmRspGenerateExtCapIE */
int rlmRspGenerateExtCapIE(void);

/* Symbol: rlmRspGenerateVhtCapIE */
/* Demangled: rlmRspGenerateVhtCapIE */
int rlmRspGenerateVhtCapIE(void);

/* Symbol: rlmRspGenerateVhtOpIE */
/* Demangled: rlmRspGenerateVhtOpIE */
int rlmRspGenerateVhtOpIE(void);

/* Symbol: rlmRspGenerateVhtOpNotificationIE */
/* Demangled: rlmRspGenerateVhtOpNotificationIE */
int rlmRspGenerateVhtOpNotificationIE(void);

/* Symbol: rsnGenerateWSCIEForAssocRsp */
/* Demangled: rsnGenerateWSCIEForAssocRsp */
int rsnGenerateWSCIEForAssocRsp(void);

/* Symbol: rsnPmfGenerateTimeoutIE */
/* Demangled: rsnPmfGenerateTimeoutIE */
int rsnPmfGenerateTimeoutIE(void);

/* Symbol: authAddIEChallengeText */
/* Demangled: authAddIEChallengeText */
int authAddIEChallengeText(void);

/* Symbol: authCalculateRSNIELen */
/* Demangled: authCalculateRSNIELen */
int authCalculateRSNIELen(void);

/* Symbol: rsnIsFtOverTheAir */
/* Demangled: rsnIsFtOverTheAir */
int rsnIsFtOverTheAir(void);

/* Symbol: authAddRSNIE */
/* Demangled: authAddRSNIE */
int authAddRSNIE(void);

/* Symbol: authAddMDIE */
/* Demangled: authAddMDIE */
int authAddMDIE(void);

/* Symbol: authHandleIEChallengeText */
/* Demangled: authHandleIEChallengeText */
int authHandleIEChallengeText(void);

/* Symbol: txAuthIETable */
/* Demangled: txAuthIETable */
extern void* txAuthIETable;

/* Symbol: saaFsmRunEventRxAuth */
/* Demangled: saaFsmRunEventRxAuth */
int saaFsmRunEventRxAuth(void);

/* Symbol: authCheckRxAuthFrameStatus */
/* Demangled: authCheckRxAuthFrameStatus */
int authCheckRxAuthFrameStatus(void);

/* Symbol: authProcessRxAuth2_Auth4Frame */
/* Demangled: authProcessRxAuth2_Auth4Frame */
int authProcessRxAuth2_Auth4Frame(void);

/* Symbol: rxAuthIETable */
/* Demangled: rxAuthIETable */
extern void* rxAuthIETable;

/* Symbol: authProcessRxDeauthFrame */
/* Demangled: authProcessRxDeauthFrame */
int authProcessRxDeauthFrame(void);

/* Symbol: authProcessRxAuth1Frame */
/* Demangled: authProcessRxAuth1Frame */
int authProcessRxAuth1Frame(void);

/* Symbol: authAddRSNIE_impl */
/* Demangled: authAddRSNIE_impl */
int authAddRSNIE_impl(void);

/* Symbol: bssGenerateExtSuppRate_IE */
/* Demangled: bssGenerateExtSuppRate_IE */
int bssGenerateExtSuppRate_IE(void);

/* Symbol: bssDetermineStaRecPhyTypeSet */
/* Demangled: bssDetermineStaRecPhyTypeSet */
int bssDetermineStaRecPhyTypeSet(void);

/* Symbol: bssDetermineApBssInfoPhyTypeSet */
/* Demangled: bssDetermineApBssInfoPhyTypeSet */
int bssDetermineApBssInfoPhyTypeSet(void);

/* Symbol: cnmStaRecAlloc */
/* Demangled: cnmStaRecAlloc */
int cnmStaRecAlloc(void);

/* Symbol: bssComposeNullFrame */
/* Demangled: bssComposeNullFrame */
int bssComposeNullFrame(void);

/* Symbol: bssComposeQoSNullFrame */
/* Demangled: bssComposeQoSNullFrame */
int bssComposeQoSNullFrame(void);

/* Symbol: bssSendNullFrame */
/* Demangled: bssSendNullFrame */
int bssSendNullFrame(void);

/* Symbol: bssSendQoSNullFrame */
/* Demangled: bssSendQoSNullFrame */
int bssSendQoSNullFrame(void);

/* Symbol: bssBuildBeaconProbeRespFrameCommonIEs */
/* Demangled: bssBuildBeaconProbeRespFrameCommonIEs */
int bssBuildBeaconProbeRespFrameCommonIEs(void);

/* Symbol: bssComposeBeaconProbeRespFrameHeaderAndFF */
/* Demangled: bssComposeBeaconProbeRespFrameHeaderAndFF */
int bssComposeBeaconProbeRespFrameHeaderAndFF(void);

/* Symbol: txBcnIETable */
/* Demangled: txBcnIETable */
extern void* txBcnIETable;

/* Symbol: bssSendBeaconProbeResponse */
/* Demangled: bssSendBeaconProbeResponse */
int bssSendBeaconProbeResponse(void);

/* Symbol: txProbRspIETable */
/* Demangled: txProbRspIETable */
extern void* txProbRspIETable;

/* Symbol: p2pFuncValidateProbeReq */
/* Demangled: p2pFuncValidateProbeReq */
int p2pFuncValidateProbeReq(void);

/* Symbol: bssCheckClientList */
/* Demangled: bssCheckClientList */
int bssCheckClientList(void);

/* Symbol: bssDumpClientList */
/* Demangled: bssDumpClientList */
int bssDumpClientList(void);

/* Symbol: bssRemoveClientByMac */
/* Demangled: bssRemoveClientByMac */
int bssRemoveClientByMac(void);

/* Symbol: bssGetClientByMac */
/* Demangled: bssGetClientByMac */
int bssGetClientByMac(void);

/* Symbol: bssRemoveHeadClient */
/* Demangled: bssRemoveHeadClient */
int bssRemoveHeadClient(void);

/* Symbol: ibssProcessMatchedBeacon */
/* Demangled: ibssProcessMatchedBeacon */
int ibssProcessMatchedBeacon(void);

/* Symbol: rsnPerformPolicySelection */
/* Demangled: rsnPerformPolicySelection */
int rsnPerformPolicySelection(void);

/* Symbol: ibssCheckCapabilityForAdHocMode */
/* Demangled: ibssCheckCapabilityForAdHocMode */
int ibssCheckCapabilityForAdHocMode(void);

/* Symbol: rNonHTAdHocModeAttributes */
/* Demangled: rNonHTAdHocModeAttributes */
extern void* rNonHTAdHocModeAttributes;

/* Symbol: bssInitForAP */
/* Demangled: bssInitForAP */
int bssInitForAP(void);

/* Symbol: rNonHTApModeAttributes */
/* Demangled: rNonHTApModeAttributes */
extern void* rNonHTApModeAttributes;

/* Symbol: bssCreateStaRecFromAuth */
/* Demangled: bssCreateStaRecFromAuth */
int bssCreateStaRecFromAuth(void);

/* Symbol: bssUpdateStaRecFromAssocReq */
/* Demangled: bssUpdateStaRecFromAssocReq */
int bssUpdateStaRecFromAssocReq(void);

/* Symbol: apucNetworkOpMode */
/* Demangled: apucNetworkOpMode */
extern void* apucNetworkOpMode;

/* Symbol: rsnGenerateWpaNoneIE */
/* Demangled: rsnGenerateWpaNoneIE */
int rsnGenerateWpaNoneIE(void);

/* Symbol: p2pFuncCalculateP2p_IELenForBeacon */
/* Demangled: p2pFuncCalculateP2p_IELenForBeacon */
int p2pFuncCalculateP2p_IELenForBeacon(void);

/* Symbol: p2pFuncGenerateP2p_IEForBeacon */
/* Demangled: p2pFuncGenerateP2p_IEForBeacon */
int p2pFuncGenerateP2p_IEForBeacon(void);

/* Symbol: p2pFuncCalculateWSC_IELenForBeacon */
/* Demangled: p2pFuncCalculateWSC_IELenForBeacon */
int p2pFuncCalculateWSC_IELenForBeacon(void);

/* Symbol: p2pFuncGenerateWSC_IEForBeacon */
/* Demangled: p2pFuncGenerateWSC_IEForBeacon */
int p2pFuncGenerateWSC_IEForBeacon(void);

/* Symbol: p2pFuncCalculateP2P_IE_NoA */
/* Demangled: p2pFuncCalculateP2P_IE_NoA */
int p2pFuncCalculateP2P_IE_NoA(void);

/* Symbol: p2pFuncGenerateP2P_IE_NoA */
/* Demangled: p2pFuncGenerateP2P_IE_NoA */
int p2pFuncGenerateP2P_IE_NoA(void);

/* Symbol: rlmGenerateCsaIE */
/* Demangled: rlmGenerateCsaIE */
int rlmGenerateCsaIE(void);

/* Symbol: g_rLastCsaSysTime */
/* Demangled: g_rLastCsaSysTime */
extern void* g_rLastCsaSysTime;

/* Symbol: cnmChMngrRequestPrivilege */
/* Demangled: cnmChMngrRequestPrivilege */
int cnmChMngrRequestPrivilege(void);

/* Symbol: cnmChMngrAbortPrivilege */
/* Demangled: cnmChMngrAbortPrivilege */
int cnmChMngrAbortPrivilege(void);

/* Symbol: p2pFuncRadarInfoInit */
/* Demangled: p2pFuncRadarInfoInit */
int p2pFuncRadarInfoInit(void);

/* Symbol: g_rP2pRadarInfo */
/* Demangled: g_rP2pRadarInfo */
extern void* g_rP2pRadarInfo;

/* Symbol: p2pFunChnlSwitchNotifyDone */
/* Demangled: p2pFunChnlSwitchNotifyDone */
int p2pFunChnlSwitchNotifyDone(void);

/* Symbol: cnmDecideSapNewChannel */
/* Demangled: cnmDecideSapNewChannel */
int cnmDecideSapNewChannel(void);

/* Symbol: g_rLteSafeChInfo */
/* Demangled: g_rLteSafeChInfo */
extern void* g_rLteSafeChInfo;

/* Symbol: p2pFunGetAcsBestCh */
/* Demangled: p2pFunGetAcsBestCh */
int p2pFunGetAcsBestCh(void);

/* Symbol: cnmSapChannelSwitchReq */
/* Demangled: cnmSapChannelSwitchReq */
int cnmSapChannelSwitchReq(void);

/* Symbol: p2pFunDetermineChnlSwitchPolicy */
/* Demangled: p2pFunDetermineChnlSwitchPolicy */
int p2pFunDetermineChnlSwitchPolicy(void);

/* Symbol: p2pFunNotifyChnlSwitch */
/* Demangled: p2pFunNotifyChnlSwitch */
int p2pFunNotifyChnlSwitch(void);

/* Symbol: cnmGetSapBssInfo */
/* Demangled: cnmGetSapBssInfo */
int cnmGetSapBssInfo(void);

/* Symbol: cnmPreferredChannel */
/* Demangled: cnmPreferredChannel */
int cnmPreferredChannel(void);

/* Symbol: cnmSapIsConcurrent */
/* Demangled: cnmSapIsConcurrent */
int cnmSapIsConcurrent(void);

/* Symbol: cnmP2PIsPermitted */
/* Demangled: cnmP2PIsPermitted */
int cnmP2PIsPermitted(void);

/* Symbol: cnmBowIsPermitted */
/* Demangled: cnmBowIsPermitted */
int cnmBowIsPermitted(void);

/* Symbol: cnmBss40mBwPermitted */
/* Demangled: cnmBss40mBwPermitted */
int cnmBss40mBwPermitted(void);

/* Symbol: p2pFuncGetRoleByBssIdx */
/* Demangled: p2pFuncGetRoleByBssIdx */
int p2pFuncGetRoleByBssIdx(void);

/* Symbol: rlmDomainGetChannelBw */
/* Demangled: rlmDomainGetChannelBw */
int rlmDomainGetChannelBw(void);

/* Symbol: cnmBss80mBwPermitted */
/* Demangled: cnmBss80mBwPermitted */
int cnmBss80mBwPermitted(void);

/* Symbol: cnmGetBssMaxBwToChnlBW */
/* Demangled: cnmGetBssMaxBwToChnlBW */
int cnmGetBssMaxBwToChnlBW(void);

/* Symbol: cnmDbdcGuardTimerCallback */
/* Demangled: cnmDbdcGuardTimerCallback */
int cnmDbdcGuardTimerCallback(void);

/* Symbol: cnmSapIsActive */
/* Demangled: cnmSapIsActive */
int cnmSapIsActive(void);

/* Symbol: cnmOpModeMapEvtReason */
/* Demangled: cnmOpModeMapEvtReason */
int cnmOpModeMapEvtReason(void);

/* Symbol: cnmOpModeDump */
/* Demangled: cnmOpModeDump */
int cnmOpModeDump(void);

/* Symbol: cnmOpModeCallbackDispatcher */
/* Demangled: cnmOpModeCallbackDispatcher */
int cnmOpModeCallbackDispatcher(void);

/* Symbol: cnmWmmQuotaReqDispatcher */
/* Demangled: cnmWmmQuotaReqDispatcher */
int cnmWmmQuotaReqDispatcher(void);

/* Symbol: cnmGetP2pBssInfo */
/* Demangled: cnmGetP2pBssInfo */
int cnmGetP2pBssInfo(void);

/* Symbol: qosMapSetInit */
/* Demangled: qosMapSetInit */
int qosMapSetInit(void);

/* Symbol: secPrivacySeekForEntry */
/* Demangled: secPrivacySeekForEntry */
int secPrivacySeekForEntry(void);

/* Symbol: cnmStaSendUpdateCmd */
/* Demangled: cnmStaSendUpdateCmd */
int cnmStaSendUpdateCmd(void);

/* Symbol: secPrivacyFreeSta */
/* Demangled: secPrivacyFreeSta */
int secPrivacyFreeSta(void);

/* Symbol: rlmUpdateParamsForAP */
/* Demangled: rlmUpdateParamsForAP */
int rlmUpdateParamsForAP(void);

/* Symbol: cnmStaRecGetTypeString */
/* Demangled: cnmStaRecGetTypeString */
int cnmStaRecGetTypeString(void);

/* Symbol: cnmStaRecGetRoleString */
/* Demangled: cnmStaRecGetRoleString */
int cnmStaRecGetRoleString(void);

/* Symbol: aucValidDataRate */
/* Demangled: aucValidDataRate */
extern void* aucValidDataRate;

/* Symbol: mboxInitMsgMap */
/* Demangled: mboxInitMsgMap */
int mboxInitMsgMap(void);

/* Symbol: mboxSetup */
/* Demangled: mboxSetup */
int mboxSetup(void);

/* Symbol: mboxDummy */
/* Demangled: mboxDummy */
int mboxDummy(void);

/* Symbol: p2pFsmRunEventChGrant */
/* Demangled: p2pFsmRunEventChGrant */
int p2pFsmRunEventChGrant(void);

/* Symbol: p2pRoleFsmRunEventRadarDet */
/* Demangled: p2pRoleFsmRunEventRadarDet */
int p2pRoleFsmRunEventRadarDet(void);

/* Symbol: p2pRoleFsmRunEventCsaDone */
/* Demangled: p2pRoleFsmRunEventCsaDone */
int p2pRoleFsmRunEventCsaDone(void);

/* Symbol: scnFsmMsgStart */
/* Demangled: scnFsmMsgStart */
int scnFsmMsgStart(void);

/* Symbol: scnFsmMsgAbort */
/* Demangled: scnFsmMsgAbort */
int scnFsmMsgAbort(void);

/* Symbol: p2pFsmRunEventScanDone */
/* Demangled: p2pFsmRunEventScanDone */
int p2pFsmRunEventScanDone(void);

/* Symbol: rlmObssScanDone */
/* Demangled: rlmObssScanDone */
int rlmObssScanDone(void);

/* Symbol: saaFsmRunEventStart */
/* Demangled: saaFsmRunEventStart */
int saaFsmRunEventStart(void);

/* Symbol: saaFsmRunEventFTContinue */
/* Demangled: saaFsmRunEventFTContinue */
int saaFsmRunEventFTContinue(void);

/* Symbol: saaFsmRunEventExternalAuthDone */
/* Demangled: saaFsmRunEventExternalAuthDone */
int saaFsmRunEventExternalAuthDone(void);

/* Symbol: saaFsmRunEventAbort */
/* Demangled: saaFsmRunEventAbort */
int saaFsmRunEventAbort(void);

/* Symbol: p2pRoleFsmRunEventJoinComplete */
/* Demangled: p2pRoleFsmRunEventJoinComplete */
int p2pRoleFsmRunEventJoinComplete(void);

/* Symbol: p2pRoleFsmRunEventSwitchOPMode */
/* Demangled: p2pRoleFsmRunEventSwitchOPMode */
int p2pRoleFsmRunEventSwitchOPMode(void);

/* Symbol: p2pFsmRunEventScanRequest */
/* Demangled: p2pFsmRunEventScanRequest */
int p2pFsmRunEventScanRequest(void);

/* Symbol: p2pRoleFsmRunEventConnectionRequest */
/* Demangled: p2pRoleFsmRunEventConnectionRequest */
int p2pRoleFsmRunEventConnectionRequest(void);

/* Symbol: p2pRoleFsmRunEventConnectionAbort */
/* Demangled: p2pRoleFsmRunEventConnectionAbort */
int p2pRoleFsmRunEventConnectionAbort(void);

/* Symbol: p2pRoleFsmRunEventBeaconUpdate */
/* Demangled: p2pRoleFsmRunEventBeaconUpdate */
int p2pRoleFsmRunEventBeaconUpdate(void);

/* Symbol: p2pRoleFsmRunEventStopAP */
/* Demangled: p2pRoleFsmRunEventStopAP */
int p2pRoleFsmRunEventStopAP(void);

/* Symbol: p2pDevFsmRunEventChannelRequest */
/* Demangled: p2pDevFsmRunEventChannelRequest */
int p2pDevFsmRunEventChannelRequest(void);

/* Symbol: p2pDevFsmRunEventChannelAbort */
/* Demangled: p2pDevFsmRunEventChannelAbort */
int p2pDevFsmRunEventChannelAbort(void);

/* Symbol: p2pFsmRunEventMgmtFrameTx */
/* Demangled: p2pFsmRunEventMgmtFrameTx */
int p2pFsmRunEventMgmtFrameTx(void);

/* Symbol: p2pFsmRunEventTxCancelWait */
/* Demangled: p2pFsmRunEventTxCancelWait */
int p2pFsmRunEventTxCancelWait(void);

/* Symbol: p2pRoleFsmRunEventDissolve */
/* Demangled: p2pRoleFsmRunEventDissolve */
int p2pRoleFsmRunEventDissolve(void);

/* Symbol: p2pDevFsmRunEventMgmtFrameRegister */
/* Demangled: p2pDevFsmRunEventMgmtFrameRegister */
int p2pDevFsmRunEventMgmtFrameRegister(void);

/* Symbol: p2pFsmRunEventNetDeviceRegister */
/* Demangled: p2pFsmRunEventNetDeviceRegister */
int p2pFsmRunEventNetDeviceRegister(void);

/* Symbol: p2pRoleFsmRunEventStartAP */
/* Demangled: p2pRoleFsmRunEventStartAP */
int p2pRoleFsmRunEventStartAP(void);

/* Symbol: p2pRoleFsmRunEventDelIface */
/* Demangled: p2pRoleFsmRunEventDelIface */
int p2pRoleFsmRunEventDelIface(void);

/* Symbol: p2pFsmRunEventUpdateMgmtFrame */
/* Demangled: p2pFsmRunEventUpdateMgmtFrame */
int p2pFsmRunEventUpdateMgmtFrame(void);

/* Symbol: p2pRoleFsmRunEventDfsCac */
/* Demangled: p2pRoleFsmRunEventDfsCac */
int p2pRoleFsmRunEventDfsCac(void);

/* Symbol: p2pRoleFsmRunEventSetNewChannel */
/* Demangled: p2pRoleFsmRunEventSetNewChannel */
int p2pRoleFsmRunEventSetNewChannel(void);

/* Symbol: p2pFsmRunEventWfdSettingUpdate */
/* Demangled: p2pFsmRunEventWfdSettingUpdate */
int p2pFsmRunEventWfdSettingUpdate(void);

/* Symbol: p2pDevFsmRunEventActiveDevBss */
/* Demangled: p2pDevFsmRunEventActiveDevBss */
int p2pDevFsmRunEventActiveDevBss(void);

/* Symbol: wmmRunEventTSOperate */
/* Demangled: wmmRunEventTSOperate */
int wmmRunEventTSOperate(void);

/* Symbol: rrmRunEventProcessNextRm */
/* Demangled: rrmRunEventProcessNextRm */
int rrmRunEventProcessNextRm(void);

/* Symbol: p2pRoleFsmRunEventAcs */
/* Demangled: p2pRoleFsmRunEventAcs */
int p2pRoleFsmRunEventAcs(void);

/* Symbol: rsnStartSaQueryTimer */
/* Demangled: rsnStartSaQueryTimer */
int rsnStartSaQueryTimer(void);

/* Symbol: secSetPortBlocked */
/* Demangled: secSetPortBlocked */
int secSetPortBlocked(void);

/* Symbol: secRxPortControlCheck */
/* Demangled: secRxPortControlCheck */
int secRxPortControlCheck(void);

/* Symbol: rsnSearchSupportedCipher */
/* Demangled: rsnSearchSupportedCipher */
int rsnSearchSupportedCipher(void);

/* Symbol: secEnabledInAis */
/* Demangled: secEnabledInAis */
int secEnabledInAis(void);

/* Symbol: secIsProtected1xFrame */
/* Demangled: secIsProtected1xFrame */
int secIsProtected1xFrame(void);

/* Symbol: secIsRobustMgmtFrame */
/* Demangled: secIsRobustMgmtFrame */
int secIsRobustMgmtFrame(void);

/* Symbol: secPrivacyDumpWTBL */
/* Demangled: secPrivacyDumpWTBL */
int secPrivacyDumpWTBL(void);

/* Symbol: secCheckWTBLAssign */
/* Demangled: secCheckWTBLAssign */
int secCheckWTBLAssign(void);

/* Symbol: secPrivacyFreeForEntry */
/* Demangled: secPrivacyFreeForEntry */
int secPrivacyFreeForEntry(void);

/* Symbol: aucDataRate */
/* Demangled: aucDataRate */
extern void* aucDataRate;

/* Symbol: rateGetHighestRateIndexFromRateSet */
/* Demangled: rateGetHighestRateIndexFromRateSet */
int rateGetHighestRateIndexFromRateSet(void);

/* Symbol: afgIsOFDMRate */
/* Demangled: afgIsOFDMRate */
extern void* afgIsOFDMRate;

/* Symbol: rlmObssInit */
/* Demangled: rlmObssInit */
int rlmObssInit(void);

/* Symbol: rlmDomainCheckCountryPowerLimitTable */
/* Demangled: rlmDomainCheckCountryPowerLimitTable */
int rlmDomainCheckCountryPowerLimitTable(void);

/* Symbol: rlmSyncExtCapIEwithSupplicant */
/* Demangled: rlmSyncExtCapIEwithSupplicant */
int rlmSyncExtCapIEwithSupplicant(void);

/* Symbol: rlmFillVhtOpIE */
/* Demangled: rlmFillVhtOpIE */
int rlmFillVhtOpIE(void);

/* Symbol: rlmGetSupportRxNssInVhtCap */
/* Demangled: rlmGetSupportRxNssInVhtCap */
int rlmGetSupportRxNssInVhtCap(void);

/* Symbol: rlmGenerateCountryIE */
/* Demangled: rlmGenerateCountryIE */
int rlmGenerateCountryIE(void);

/* Symbol: rlmModifyVhtBwPara */
/* Demangled: rlmModifyVhtBwPara */
int rlmModifyVhtBwPara(void);

/* Symbol: rlmFillVhtOpInfoByBssOpBw */
/* Demangled: rlmFillVhtOpInfoByBssOpBw */
int rlmFillVhtOpInfoByBssOpBw(void);

/* Symbol: rlmProcessBcn */
/* Demangled: rlmProcessBcn */
int rlmProcessBcn(void);

/* Symbol: rlmSyncOperationParams */
/* Demangled: rlmSyncOperationParams */
int rlmSyncOperationParams(void);

/* Symbol: g_fgHasStopTx */
/* Demangled: g_fgHasStopTx */
extern void* g_fgHasStopTx;

/* Symbol: rlmDomainIsValidRfSetting */
/* Demangled: rlmDomainIsValidRfSetting */
int rlmDomainIsValidRfSetting(void);

/* Symbol: rlmBssInitForAP */
/* Demangled: rlmBssInitForAP */
int rlmBssInitForAP(void);

/* Symbol: rlmFillVhtCapIEByAdapter */
/* Demangled: rlmFillVhtCapIEByAdapter */
int rlmFillVhtCapIEByAdapter(void);

/* Symbol: rlmFillHtCapIEByParams */
/* Demangled: rlmFillHtCapIEByParams */
int rlmFillHtCapIEByParams(void);

/* Symbol: rlmFillHtCapIEByAdapter */
/* Demangled: rlmFillHtCapIEByAdapter */
int rlmFillHtCapIEByAdapter(void);

/* Symbol: rlmSendOpModeNotificationFrame */
/* Demangled: rlmSendOpModeNotificationFrame */
int rlmSendOpModeNotificationFrame(void);

/* Symbol: rlmNotifyVhtOpModeTxDone */
/* Demangled: rlmNotifyVhtOpModeTxDone */
int rlmNotifyVhtOpModeTxDone(void);

/* Symbol: rlmSendSmPowerSaveFrame */
/* Demangled: rlmSendSmPowerSaveFrame */
int rlmSendSmPowerSaveFrame(void);

/* Symbol: rlmSmPowerSaveTxDone */
/* Demangled: rlmSmPowerSaveTxDone */
int rlmSmPowerSaveTxDone(void);

/* Symbol: rlmSendNotifyChannelWidthFrame */
/* Demangled: rlmSendNotifyChannelWidthFrame */
int rlmSendNotifyChannelWidthFrame(void);

/* Symbol: rlmNotifyChannelWidthtTxDone */
/* Demangled: rlmNotifyChannelWidthtTxDone */
int rlmNotifyChannelWidthtTxDone(void);

/* Symbol: rlmDecideScoForAP */
/* Demangled: rlmDecideScoForAP */
int rlmDecideScoForAP(void);

/* Symbol: rlmSendChannelSwitchTxDone */
/* Demangled: rlmSendChannelSwitchTxDone */
int rlmSendChannelSwitchTxDone(void);

/* Symbol: rlmSendChannelSwitchFrame */
/* Demangled: rlmSendChannelSwitchFrame */
int rlmSendChannelSwitchFrame(void);

/* Symbol: rlmDomainGetDomainInfo */
/* Demangled: rlmDomainGetDomainInfo */
int rlmDomainGetDomainInfo(void);

/* Symbol: arSupportedRegDomains */
/* Demangled: arSupportedRegDomains */
extern void* arSupportedRegDomains;

/* Symbol: rlmDomainGetChnlList_V2 */
/* Demangled: rlmDomainGetChnlList_V2 */
int rlmDomainGetChnlList_V2(void);

/* Symbol: g_mtk_regd_control */
/* Demangled: g_mtk_regd_control */
extern void* g_mtk_regd_control;

/* Symbol: rlmIsValidChnl */
/* Demangled: rlmIsValidChnl */
int rlmIsValidChnl(void);

/* Symbol: rlmDomainSendPassiveScanInfoCmd */
/* Demangled: rlmDomainSendPassiveScanInfoCmd */
int rlmDomainSendPassiveScanInfoCmd(void);

/* Symbol: rlmDomainSendDomainInfoCmd */
/* Demangled: rlmDomainSendDomainInfoCmd */
int rlmDomainSendDomainInfoCmd(void);

/* Symbol: arSupportedRegDomains_Passive */
/* Demangled: arSupportedRegDomains_Passive */
extern void* arSupportedRegDomains_Passive;

/* Symbol: rlmDomainSendDomainInfoCmd_V2 */
/* Demangled: rlmDomainSendDomainInfoCmd_V2 */
int rlmDomainSendDomainInfoCmd_V2(void);

/* Symbol: rlmDomainSendPwrLimitCmd_V2 */
/* Demangled: rlmDomainSendPwrLimitCmd_V2 */
int rlmDomainSendPwrLimitCmd_V2(void);

/* Symbol: g_rRlmPowerLimitDefault */
/* Demangled: g_rRlmPowerLimitDefault */
extern void* g_rRlmPowerLimitDefault;

/* Symbol: rlmDomainBuildCmdByDefaultTable */
/* Demangled: rlmDomainBuildCmdByDefaultTable */
int rlmDomainBuildCmdByDefaultTable(void);

/* Symbol: rlmDomainBuildCmdByConfigTable */
/* Demangled: rlmDomainBuildCmdByConfigTable */
int rlmDomainBuildCmdByConfigTable(void);

/* Symbol: rlmDomainShowPwrLimitPerCh */
/* Demangled: rlmDomainShowPwrLimitPerCh */
int rlmDomainShowPwrLimitPerCh(void);

/* Symbol: txPwrCtrlShowList */
/* Demangled: txPwrCtrlShowList */
int txPwrCtrlShowList(void);

/* Symbol: txPwrApplyOneSetting */
/* Demangled: txPwrApplyOneSetting */
int txPwrApplyOneSetting(void);

/* Symbol: rlmExtractChannelInfo */
/* Demangled: rlmExtractChannelInfo */
int rlmExtractChannelInfo(void);

/* Symbol: rlmDomainIsLegalChannel_V2 */
/* Demangled: rlmDomainIsLegalChannel_V2 */
int rlmDomainIsLegalChannel_V2(void);

/* Symbol: rlmDomainIsLegalDfsChannel */
/* Demangled: rlmDomainIsLegalDfsChannel */
int rlmDomainIsLegalDfsChannel(void);

/* Symbol: rlmDomainSupOperatingClassIeFill */
/* Demangled: rlmDomainSupOperatingClassIeFill */
int rlmDomainSupOperatingClassIeFill(void);

/* Symbol: rlmDomainCheckChannelEntryValid */
/* Demangled: rlmDomainCheckChannelEntryValid */
int rlmDomainCheckChannelEntryValid(void);

/* Symbol: g_rRlmSubBand */
/* Demangled: g_rRlmSubBand */
extern void* g_rRlmSubBand;

/* Symbol: rlmDomainGetCenterChannel */
/* Demangled: rlmDomainGetCenterChannel */
int rlmDomainGetCenterChannel(void);

/* Symbol: rlmDomainAlpha2ToU32 */
/* Demangled: rlmDomainAlpha2ToU32 */
int rlmDomainAlpha2ToU32(void);

/* Symbol: rlmDomainTxPwrLimitGetTableVersion */
/* Demangled: rlmDomainTxPwrLimitGetTableVersion */
int rlmDomainTxPwrLimitGetTableVersion(void);

/* Symbol: rlmDomainTxPwrLimitGetCountryRange */
/* Demangled: rlmDomainTxPwrLimitGetCountryRange */
int rlmDomainTxPwrLimitGetCountryRange(void);

/* Symbol: rlmDomainTxPwrLimitSearchSection */
/* Demangled: rlmDomainTxPwrLimitSearchSection */
int rlmDomainTxPwrLimitSearchSection(void);

/* Symbol: rlmDomainTxPwrLimitSectionEnd */
/* Demangled: rlmDomainTxPwrLimitSectionEnd */
int rlmDomainTxPwrLimitSectionEnd(void);

/* Symbol: rlmDomainTxPwrLimitGetChIdx */
/* Demangled: rlmDomainTxPwrLimitGetChIdx */
int rlmDomainTxPwrLimitGetChIdx(void);

/* Symbol: rlmDomainTxPwrLimitIsTxBfBackoffSection */
/* Demangled: rlmDomainTxPwrLimitIsTxBfBackoffSection */
int rlmDomainTxPwrLimitIsTxBfBackoffSection(void);

/* Symbol: rlmDomainTxPwrLimitLoadChannelSetting */
/* Demangled: rlmDomainTxPwrLimitLoadChannelSetting */
int rlmDomainTxPwrLimitLoadChannelSetting(void);

/* Symbol: gTx_Pwr_Limit_Element_Num */
/* Demangled: gTx_Pwr_Limit_Element_Num */
extern void* gTx_Pwr_Limit_Element_Num;

/* Symbol: rlmDomainTxPwrLimitRemoveComments */
/* Demangled: rlmDomainTxPwrLimitRemoveComments */
int rlmDomainTxPwrLimitRemoveComments(void);

/* Symbol: rlmDomainTxPwrLimitLoad */
/* Demangled: rlmDomainTxPwrLimitLoad */
int rlmDomainTxPwrLimitLoad(void);

/* Symbol: gTx_Pwr_Limit_Section */
/* Demangled: gTx_Pwr_Limit_Section */
extern void* gTx_Pwr_Limit_Section;

/* Symbol: g_bTxBfBackoffExists */
/* Demangled: g_bTxBfBackoffExists */
extern void* g_bTxBfBackoffExists;

/* Symbol: rlmDomainTxPwrLimitSetChValues */
/* Demangled: rlmDomainTxPwrLimitSetChValues */
int rlmDomainTxPwrLimitSetChValues(void);

/* Symbol: gTx_Pwr_Limit_Element */
/* Demangled: gTx_Pwr_Limit_Element */
extern void* gTx_Pwr_Limit_Element;

/* Symbol: rlmDomainTxPwrLimitPerRateSetChValues */
/* Demangled: rlmDomainTxPwrLimitPerRateSetChValues */
int rlmDomainTxPwrLimitPerRateSetChValues(void);

/* Symbol: rlmDomainTxPwrLimitSetValues */
/* Demangled: rlmDomainTxPwrLimitSetValues */
int rlmDomainTxPwrLimitSetValues(void);

/* Symbol: rlmDomainTxPwrLimitPerRateSetValues */
/* Demangled: rlmDomainTxPwrLimitPerRateSetValues */
int rlmDomainTxPwrLimitPerRateSetValues(void);

/* Symbol: rlmDomainTxPwrLimitLoadFromFile */
/* Demangled: rlmDomainTxPwrLimitLoadFromFile */
int rlmDomainTxPwrLimitLoadFromFile(void);

/* Symbol: rlmDomainGetTxPwrLimit */
/* Demangled: rlmDomainGetTxPwrLimit */
int rlmDomainGetTxPwrLimit(void);

/* Symbol: rlmDomainCheckPowerLimitValid */
/* Demangled: rlmDomainCheckPowerLimitValid */
int rlmDomainCheckPowerLimitValid(void);

/* Symbol: g_rRlmPowerLimitConfiguration */
/* Demangled: g_rRlmPowerLimitConfiguration */
extern void* g_rRlmPowerLimitConfiguration;

/* Symbol: rlmDomainPwrLimitDefaultTableDecision */
/* Demangled: rlmDomainPwrLimitDefaultTableDecision */
int rlmDomainPwrLimitDefaultTableDecision(void);

/* Symbol: rlmDomainCopyFromConfigTable */
/* Demangled: rlmDomainCopyFromConfigTable */
int rlmDomainCopyFromConfigTable(void);

/* Symbol: g_rRlmPowerLimitConfigurationHE */
/* Demangled: g_rRlmPowerLimitConfigurationHE */
extern void* g_rRlmPowerLimitConfigurationHE;

/* Symbol: rlmDomainInitTxPwrLimitData */
/* Demangled: rlmDomainInitTxPwrLimitData */
int rlmDomainInitTxPwrLimitData(void);

/* Symbol: rlmDomainSendTxPwrLimitCmd */
/* Demangled: rlmDomainSendTxPwrLimitCmd */
int rlmDomainSendTxPwrLimitCmd(void);

/* Symbol: rlmDomainInitTxPwrLimitPerRateCmd */
/* Demangled: rlmDomainInitTxPwrLimitPerRateCmd */
int rlmDomainInitTxPwrLimitPerRateCmd(void);

/* Symbol: rlmDomainTxPwrLimitSendPerRateCmd */
/* Demangled: rlmDomainTxPwrLimitSendPerRateCmd */
int rlmDomainTxPwrLimitSendPerRateCmd(void);

/* Symbol: rlmDomainInitTxBfBackoffCmd */
/* Demangled: rlmDomainInitTxBfBackoffCmd */
int rlmDomainInitTxBfBackoffCmd(void);

/* Symbol: rlmDomainTxPwrTxBfBackoffSetValues */
/* Demangled: rlmDomainTxPwrTxBfBackoffSetValues */
int rlmDomainTxPwrTxBfBackoffSetValues(void);

/* Symbol: rlmDomainTxPwrSendTxBfBackoffCmd */
/* Demangled: rlmDomainTxPwrSendTxBfBackoffCmd */
int rlmDomainTxPwrSendTxBfBackoffCmd(void);

/* Symbol: rlmDomainSendTxPwrLimitPerRateCmd */
/* Demangled: rlmDomainSendTxPwrLimitPerRateCmd */
int rlmDomainSendTxPwrLimitPerRateCmd(void);

/* Symbol: rlmDomainSendTxBfBackoffCmd */
/* Demangled: rlmDomainSendTxBfBackoffCmd */
int rlmDomainSendTxBfBackoffCmd(void);

/* Symbol: txPwrParseNumber */
/* Demangled: txPwrParseNumber */
int txPwrParseNumber(void);

/* Symbol: txPwrOperate */
/* Demangled: txPwrOperate */
int txPwrOperate(void);

/* Symbol: txPwrArbitrator */
/* Demangled: txPwrArbitrator */
int txPwrArbitrator(void);

/* Symbol: txPwrCtrlApplySettings */
/* Demangled: txPwrCtrlApplySettings */
int txPwrCtrlApplySettings(void);

/* Symbol: g_au1TxPwrChlTypeLabel */
/* Demangled: g_au1TxPwrChlTypeLabel */
extern void* g_au1TxPwrChlTypeLabel;

/* Symbol: g_au1TxPwrOperationLabel */
/* Demangled: g_au1TxPwrOperationLabel */
extern void* g_au1TxPwrOperationLabel;

/* Symbol: g_au1TxPwrAppliedWayLabel */
/* Demangled: g_au1TxPwrAppliedWayLabel */
extern void* g_au1TxPwrAppliedWayLabel;

/* Symbol: txPwrGetString */
/* Demangled: txPwrGetString */
int txPwrGetString(void);

/* Symbol: txPwrCtrlListSize */
/* Demangled: txPwrCtrlListSize */
int txPwrCtrlListSize(void);

/* Symbol: _txPwrCtrlDeleteElement */
/* Demangled: _txPwrCtrlDeleteElement */
int _txPwrCtrlDeleteElement(void);

/* Symbol: _txPwrCtrlFindElement */
/* Demangled: _txPwrCtrlFindElement */
int _txPwrCtrlFindElement(void);

/* Symbol: txPwrCtrlFileBufToList */
/* Demangled: txPwrCtrlFileBufToList */
int txPwrCtrlFileBufToList(void);

/* Symbol: txPwrCtrlGlobalVariableToList */
/* Demangled: txPwrCtrlGlobalVariableToList */
int txPwrCtrlGlobalVariableToList(void);

/* Symbol: g_au1TxPwrDefaultSetting */
/* Demangled: g_au1TxPwrDefaultSetting */
extern void* g_au1TxPwrDefaultSetting;

/* Symbol: txPwrCtrlCfgFileToList */
/* Demangled: txPwrCtrlCfgFileToList */
int txPwrCtrlCfgFileToList(void);

/* Symbol: rlmDomainResetActiveChannel */
/* Demangled: rlmDomainResetActiveChannel */
int rlmDomainResetActiveChannel(void);

/* Symbol: rlmDomainAddActiveChannel */
/* Demangled: rlmDomainAddActiveChannel */
int rlmDomainAddActiveChannel(void);

/* Symbol: rlmDomainSetDefaultCountryCode */
/* Demangled: rlmDomainSetDefaultCountryCode */
int rlmDomainSetDefaultCountryCode(void);

/* Symbol: rlmDomainGetDfsRegion */
/* Demangled: rlmDomainGetDfsRegion */
int rlmDomainGetDfsRegion(void);

/* Symbol: rlmDomainSetTempCountryCode */
/* Demangled: rlmDomainSetTempCountryCode */
int rlmDomainSetTempCountryCode(void);

/* Symbol: rlmDomainChannelFlagString */
/* Demangled: rlmDomainChannelFlagString */
int rlmDomainChannelFlagString(void);

/* Symbol: g_prRegRuleTable */
/* Demangled: g_prRegRuleTable */
extern void* g_prRegRuleTable;

/* Symbol: default_regdom_ww */
/* Demangled: default_regdom_ww */
extern void* default_regdom_ww;

/* Symbol: rlmSelectSecondaryChannelType */
/* Demangled: rlmSelectSecondaryChannelType */
int rlmSelectSecondaryChannelType(void);

/* Symbol: regdom_us01 */
/* Demangled: regdom_us01 */
extern void* regdom_us01;

/* Symbol: regdom_us */
/* Demangled: regdom_us */
extern void* regdom_us;

/* Symbol: regdom_cn */
/* Demangled: regdom_cn */
extern void* regdom_cn;

/* Symbol: regdom_cz_nl */
/* Demangled: regdom_cz_nl */
extern void* regdom_cz_nl;

/* Symbol: regdom_jp */
/* Demangled: regdom_jp */
extern void* regdom_jp;

/* Symbol: regdom_tr */
/* Demangled: regdom_tr */
extern void* regdom_tr;

/* Symbol: my_regdom_us01 */
/* Demangled: my_regdom_us01 */
extern void* my_regdom_us01;

/* Symbol: my_regdom_us */
/* Demangled: my_regdom_us */
extern void* my_regdom_us;

/* Symbol: my_regdom_cn */
/* Demangled: my_regdom_cn */
extern void* my_regdom_cn;

/* Symbol: my_regdom_nl */
/* Demangled: my_regdom_nl */
extern void* my_regdom_nl;

/* Symbol: my_regdom_cz */
/* Demangled: my_regdom_cz */
extern void* my_regdom_cz;

/* Symbol: my_regdom_jp */
/* Demangled: my_regdom_jp */
extern void* my_regdom_jp;

/* Symbol: my_regdom_tr */
/* Demangled: my_regdom_tr */
extern void* my_regdom_tr;

/* Symbol: rlmObssTriggerScan */
/* Demangled: rlmObssTriggerScan */
int rlmObssTriggerScan(void);

/* Symbol: rlmObssUpdateChnlLists */
/* Demangled: rlmObssUpdateChnlLists */
int rlmObssUpdateChnlLists(void);

/* Symbol: rrmParamUninit */
/* Demangled: rrmParamUninit */
int rrmParamUninit(void);

/* Symbol: rBeaconReqTimer */
/* Demangled: rBeaconReqTimer */
extern void* rBeaconReqTimer;

/* Symbol: rrmComposeIncapableRmRep */
/* Demangled: rrmComposeIncapableRmRep */
int rrmComposeIncapableRmRep(void);

/* Symbol: rrmBeaconRepUpdateLastFrame */
/* Demangled: rrmBeaconRepUpdateLastFrame */
int rrmBeaconRepUpdateLastFrame(void);

/* Symbol: rrmTxRadioMeasurementReport */
/* Demangled: rrmTxRadioMeasurementReport */
int rrmTxRadioMeasurementReport(void);

/* Symbol: wmmTsmIsOngoing */
/* Demangled: wmmTsmIsOngoing */
int wmmTsmIsOngoing(void);

/* Symbol: rrmAddBeaconRepElem */
/* Demangled: rrmAddBeaconRepElem */
int rrmAddBeaconRepElem(void);

/* Symbol: wmmRemoveAllTsmMeasurement */
/* Demangled: wmmRemoveAllTsmMeasurement */
int wmmRemoveAllTsmMeasurement(void);

/* Symbol: rrmGetRmRequestPriority */
/* Demangled: rrmGetRmRequestPriority */
int rrmGetRmRequestPriority(void);

/* Symbol: rrmScheduleNextRm */
/* Demangled: rrmScheduleNextRm */
int rrmScheduleNextRm(void);

/* Symbol: rrmCheckReportId */
/* Demangled: rrmCheckReportId */
int rrmCheckReportId(void);

/* Symbol: rrmBeaconRepAddFrameBody */
/* Demangled: rrmBeaconRepAddFrameBody */
int rrmBeaconRepAddFrameBody(void);

/* Symbol: rrmReportElem */
/* Demangled: rrmReportElem */
int rrmReportElem(void);

/* Symbol: rrmUpdateBssTimeTsf */
/* Demangled: rrmUpdateBssTimeTsf */
int rrmUpdateBssTimeTsf(void);

/* Symbol: rsnParseWpaIE */
/* Demangled: rsnParseWpaIE */
int rsnParseWpaIE(void);

/* Symbol: rsnIsSuitableBSS */
/* Demangled: rsnIsSuitableBSS */
int rsnIsSuitableBSS(void);

/* Symbol: rsnSearchAKMSuite */
/* Demangled: rsnSearchAKMSuite */
int rsnSearchAKMSuite(void);

/* Symbol: rsnKeyMgmtWpa */
/* Demangled: rsnKeyMgmtWpa */
int rsnKeyMgmtWpa(void);

/* Symbol: _addWPAIE_impl */
/* Demangled: _addWPAIE_impl */
int _addWPAIE_impl(void);

/* Symbol: _addRSNIE_impl */
/* Demangled: _addRSNIE_impl */
int _addRSNIE_impl(void);

/* Symbol: rsnParseCheckForWFAInfoElem */
/* Demangled: rsnParseCheckForWFAInfoElem */
int rsnParseCheckForWFAInfoElem(void);

/* Symbol: rsnPmfCapableValidation */
/* Demangled: rsnPmfCapableValidation */
int rsnPmfCapableValidation(void);

/* Symbol: rsnGenMicErrorEvent */
/* Demangled: rsnGenMicErrorEvent */
int rsnGenMicErrorEvent(void);

/* Symbol: rsnCheckPmkidCache */
/* Demangled: rsnCheckPmkidCache */
int rsnCheckPmkidCache(void);

/* Symbol: rsnGeneratePmkidIndication */
/* Demangled: rsnGeneratePmkidIndication */
int rsnGeneratePmkidIndication(void);

/* Symbol: rsnCheckSaQueryTimeout */
/* Demangled: rsnCheckSaQueryTimeout */
int rsnCheckSaQueryTimeout(void);

/* Symbol: rsnCheckSecurityModeChanged */
/* Demangled: rsnCheckSecurityModeChanged */
int rsnCheckSecurityModeChanged(void);

/* Symbol: rsnApCheckSaQueryTimeout */
/* Demangled: rsnApCheckSaQueryTimeout */
int rsnApCheckSaQueryTimeout(void);

/* Symbol: p2pFuncStopComplete */
/* Demangled: p2pFuncStopComplete */
int p2pFuncStopComplete(void);

/* Symbol: rsnApStartSaQueryTimer */
/* Demangled: rsnApStartSaQueryTimer */
int rsnApStartSaQueryTimer(void);

/* Symbol: rsnApStopSaQuery */
/* Demangled: rsnApStopSaQuery */
int rsnApStopSaQuery(void);

/* Symbol: rsnApSaQueryRequest */
/* Demangled: rsnApSaQueryRequest */
int rsnApSaQueryRequest(void);

/* Symbol: saaFsmSteps */
/* Demangled: saaFsmSteps */
int saaFsmSteps(void);

/* Symbol: saaFsmSendEventJoinComplete */
/* Demangled: saaFsmSendEventJoinComplete */
int saaFsmSendEventJoinComplete(void);

/* Symbol: saaFsmRunEventTxReqTimeOut */
/* Demangled: saaFsmRunEventTxReqTimeOut */
int saaFsmRunEventTxReqTimeOut(void);

/* Symbol: saaFsmRunEventRxRespTimeOut */
/* Demangled: saaFsmRunEventRxRespTimeOut */
int saaFsmRunEventRxRespTimeOut(void);

/* Symbol: p2pRoleFsmRunEventRxDeauthentication */
/* Demangled: p2pRoleFsmRunEventRxDeauthentication */
int p2pRoleFsmRunEventRxDeauthentication(void);

/* Symbol: saaChkDeauthfrmParamHandler */
/* Demangled: saaChkDeauthfrmParamHandler */
int saaChkDeauthfrmParamHandler(void);

/* Symbol: saaSendDisconnectMsgHandler */
/* Demangled: saaSendDisconnectMsgHandler */
int saaSendDisconnectMsgHandler(void);

/* Symbol: p2pRoleFsmRunEventRxDisassociation */
/* Demangled: p2pRoleFsmRunEventRxDisassociation */
int p2pRoleFsmRunEventRxDisassociation(void);

/* Symbol: saaChkDisassocfrmParamHandler */
/* Demangled: saaChkDisassocfrmParamHandler */
int saaChkDisassocfrmParamHandler(void);

/* Symbol: scanInsertBssDescToList */
/* Demangled: scanInsertBssDescToList */
int scanInsertBssDescToList(void);

/* Symbol: scnFreeAllPendingScanRquests */
/* Demangled: scnFreeAllPendingScanRquests */
int scnFreeAllPendingScanRquests(void);

/* Symbol: scanIsBitSet */
/* Demangled: scanIsBitSet */
int scanIsBitSet(void);

/* Symbol: scanSetBit */
/* Demangled: scanSetBit */
int scanSetBit(void);

/* Symbol: scanCountBits */
/* Demangled: scanCountBits */
int scanCountBits(void);

/* Symbol: scanSearchBssDescByTAAndSsid */
/* Demangled: scanSearchBssDescByTAAndSsid */
int scanSearchBssDescByTAAndSsid(void);

/* Symbol: scanSearchExistingBssDesc */
/* Demangled: scanSearchExistingBssDesc */
int scanSearchExistingBssDesc(void);

/* Symbol: scanSearchExistingBssDescWithSsid */
/* Demangled: scanSearchExistingBssDescWithSsid */
int scanSearchExistingBssDescWithSsid(void);

/* Symbol: scanRemoveBssDescFromList */
/* Demangled: scanRemoveBssDescFromList */
int scanRemoveBssDescFromList(void);

/* Symbol: scanRemoveBssDescsByPolicy */
/* Demangled: scanRemoveBssDescsByPolicy */
int scanRemoveBssDescsByPolicy(void);

/* Symbol: scanAllocateBssDesc */
/* Demangled: scanAllocateBssDesc */
int scanAllocateBssDesc(void);

/* Symbol: scanAddToBssDesc */
/* Demangled: scanAddToBssDesc */
int scanAddToBssDesc(void);

/* Symbol: scanCheckEpigramVhtIE */
/* Demangled: scanCheckEpigramVhtIE */
int scanCheckEpigramVhtIE(void);

/* Symbol: scanCheckAdaptive11rIE */
/* Demangled: scanCheckAdaptive11rIE */
int scanCheckAdaptive11rIE(void);

/* Symbol: wapiParseWapiIE */
/* Demangled: wapiParseWapiIE */
int wapiParseWapiIE(void);

/* Symbol: scanResetBssDesc */
/* Demangled: scanResetBssDesc */
int scanResetBssDesc(void);

/* Symbol: scanParseVHTCapIE */
/* Demangled: scanParseVHTCapIE */
int scanParseVHTCapIE(void);

/* Symbol: scanParseVHTOpIE */
/* Demangled: scanParseVHTOpIE */
int scanParseVHTOpIE(void);

/* Symbol: scanInitEssResult */
/* Demangled: scanInitEssResult */
int scanInitEssResult(void);

/* Symbol: scanAddScanResult */
/* Demangled: scanAddScanResult */
int scanAddScanResult(void);

/* Symbol: scanCheckBssIsLegal */
/* Demangled: scanCheckBssIsLegal */
int scanCheckBssIsLegal(void);

/* Symbol: scanP2pProcessBeaconAndProbeResp */
/* Demangled: scanP2pProcessBeaconAndProbeResp */
int scanP2pProcessBeaconAndProbeResp(void);

/* Symbol: scanResultLog */
/* Demangled: scanResultLog */
int scanResultLog(void);

/* Symbol: scanSearchBssDescByPolicy */
/* Demangled: scanSearchBssDescByPolicy */
int scanSearchBssDescByPolicy(void);

/* Symbol: wapiPerformPolicySelection */
/* Demangled: wapiPerformPolicySelection */
int wapiPerformPolicySelection(void);

/* Symbol: p2pFunCalAcsChnScores */
/* Demangled: p2pFunCalAcsChnScores */
int p2pFunCalAcsChnScores(void);

/* Symbol: scanReqLog */
/* Demangled: scanReqLog */
int scanReqLog(void);

/* Symbol: scnFsmSteps */
/* Demangled: scnFsmSteps */
int scnFsmSteps(void);

/* Symbol: scnFsmHandleScanMsgV2 */
/* Demangled: scnFsmHandleScanMsgV2 */
int scnFsmHandleScanMsgV2(void);

/* Symbol: scnSendScanReqV2 */
/* Demangled: scnSendScanReqV2 */
int scnSendScanReqV2(void);

/* Symbol: scnFsmHandleScanMsg */
/* Demangled: scnFsmHandleScanMsg */
int scnFsmHandleScanMsg(void);

/* Symbol: scnSendScanReq */
/* Demangled: scnSendScanReq */
int scnSendScanReq(void);

/* Symbol: scnFsmGenerateScanDoneMsg */
/* Demangled: scnFsmGenerateScanDoneMsg */
int scnFsmGenerateScanDoneMsg(void);

/* Symbol: scnFsmRemovePendingMsg */
/* Demangled: scnFsmRemovePendingMsg */
int scnFsmRemovePendingMsg(void);

/* Symbol: scnQuerySparseChannel */
/* Demangled: scnQuerySparseChannel */
int scnQuerySparseChannel(void);

/* Symbol: scnSetSchedScanPlan */
/* Demangled: scnSetSchedScanPlan */
int scnSetSchedScanPlan(void);

/* Symbol: scnFsmSchedScanSetCmd */
/* Demangled: scnFsmSchedScanSetCmd */
int scnFsmSchedScanSetCmd(void);

/* Symbol: scnFsmSchedScanSetAction */
/* Demangled: scnFsmSchedScanSetAction */
int scnFsmSchedScanSetAction(void);

/* Symbol: swCtrlSwCr */
/* Demangled: swCtrlSwCr */
int swCtrlSwCr(void);

/* Symbol: g_au4SwCr */
/* Demangled: g_au4SwCr */
extern void* g_au4SwCr;

/* Symbol: dumpQueue */
/* Demangled: dumpQueue */
int dumpQueue(void);

/* Symbol: dumpSTA */
/* Demangled: dumpSTA */
int dumpSTA(void);

/* Symbol: dumpBss */
/* Demangled: dumpBss */
int dumpBss(void);

/* Symbol: swCtrlCmdCategory0 */
/* Demangled: swCtrlCmdCategory0 */
int swCtrlCmdCategory0(void);

/* Symbol: g_u4RXFilter */
/* Demangled: g_u4RXFilter */
extern void* g_u4RXFilter;

/* Symbol: swCtrlCmdCategory1 */
/* Demangled: swCtrlCmdCategory1 */
int swCtrlCmdCategory1(void);

/* Symbol: testPsSendQoSNullFrame */
/* Demangled: testPsSendQoSNullFrame */
int testPsSendQoSNullFrame(void);

/* Symbol: testPsSetupBss */
/* Demangled: testPsSetupBss */
int testPsSetupBss(void);

/* Symbol: testPsCmdCategory0 */
/* Demangled: testPsCmdCategory0 */
int testPsCmdCategory0(void);

/* Symbol: testPsCmdCategory1 */
/* Demangled: testPsCmdCategory1 */
int testPsCmdCategory1(void);

/* Symbol: g_arSwCrModHandle */
/* Demangled: g_arSwCrModHandle */
extern void* g_arSwCrModHandle;

/* Symbol: swCrFrameCheckEnable */
/* Demangled: swCrFrameCheckEnable */
int swCrFrameCheckEnable(void);

/* Symbol: swCrDebugCheckTimeout */
/* Demangled: swCrDebugCheckTimeout */
int swCrDebugCheckTimeout(void);

/* Symbol: swCrDebugQuery */
/* Demangled: swCrDebugQuery */
int swCrDebugQuery(void);

/* Symbol: swCrDebugQueryTimeout */
/* Demangled: swCrDebugQueryTimeout */
int swCrDebugQueryTimeout(void);

/* Symbol: swCrDebugCheck */
/* Demangled: swCrDebugCheck */
int swCrDebugCheck(void);

/* Symbol: roamingFsmSendCmd */
/* Demangled: roamingFsmSendCmd */
int roamingFsmSendCmd(void);

/* Symbol: scanCheckNeedDriverRoaming */
/* Demangled: scanCheckNeedDriverRoaming */
int scanCheckNeedDriverRoaming(void);

/* Symbol: tkipMicB */
/* Demangled: tkipMicB */
int tkipMicB(void);

/* Symbol: tkipMicGen */
/* Demangled: tkipMicGen */
int tkipMicGen(void);

/* Symbol: tkipMicEncapsulate */
/* Demangled: tkipMicEncapsulate */
int tkipMicEncapsulate(void);

/* Symbol: tkipMicDecapsulate */
/* Demangled: tkipMicDecapsulate */
int tkipMicDecapsulate(void);

/* Symbol: tkipSBOX1 */
/* Demangled: tkipSBOX1 */
extern void* tkipSBOX1;

/* Symbol: tkipSBOX2 */
/* Demangled: tkipSBOX2 */
extern void* tkipSBOX2;

/* Symbol: TdlsDataFrameSend_SETUP_REQ */
/* Demangled: TdlsDataFrameSend_SETUP_REQ */
int TdlsDataFrameSend_SETUP_REQ(void);

/* Symbol: TdlsDataFrameSend_SETUP_RSP */
/* Demangled: TdlsDataFrameSend_SETUP_RSP */
int TdlsDataFrameSend_SETUP_RSP(void);

/* Symbol: TdlsDataFrameSend_CONFIRM */
/* Demangled: TdlsDataFrameSend_CONFIRM */
int TdlsDataFrameSend_CONFIRM(void);

/* Symbol: TdlsDataFrameSend_TearDown */
/* Demangled: TdlsDataFrameSend_TearDown */
int TdlsDataFrameSend_TearDown(void);

/* Symbol: TdlsDataFrameSend_DISCOVERY_REQ */
/* Demangled: TdlsDataFrameSend_DISCOVERY_REQ */
int TdlsDataFrameSend_DISCOVERY_REQ(void);

/* Symbol: TdlsDataFrameSend_DISCOVERY_RSP */
/* Demangled: TdlsDataFrameSend_DISCOVERY_RSP */
int TdlsDataFrameSend_DISCOVERY_RSP(void);

/* Symbol: TdlsFrameGeneralIeAppend */
/* Demangled: TdlsFrameGeneralIeAppend */
int TdlsFrameGeneralIeAppend(void);

/* Symbol: TdlsEventTearDown */
/* Demangled: TdlsEventTearDown */
int TdlsEventTearDown(void);

/* Symbol: qosHandleQosMapConfigure */
/* Demangled: qosHandleQosMapConfigure */
int qosHandleQosMapConfigure(void);

/* Symbol: scanGetNeighborAPEntry */
/* Demangled: scanGetNeighborAPEntry */
int scanGetNeighborAPEntry(void);

/* Symbol: scanPreferenceIsZero */
/* Demangled: scanPreferenceIsZero */
int scanPreferenceIsZero(void);

/* Symbol: scanCalculateScoreByBlackList */
/* Demangled: scanCalculateScoreByBlackList */
int scanCalculateScoreByBlackList(void);

/* Symbol: gasMtkWeightConfig */
/* Demangled: gasMtkWeightConfig */
extern void* gasMtkWeightConfig;

/* Symbol: scanCalculateTotalScore */
/* Demangled: scanCalculateTotalScore */
int scanCalculateTotalScore(void);

/* Symbol: mtk_reason_to_type */
/* Demangled: mtk_reason_to_type */
extern void* mtk_reason_to_type;

/* Symbol: scanUpdateChannelList */
/* Demangled: scanUpdateChannelList */
int scanUpdateChannelList(void);

/* Symbol: scanInDecidingRoaming */
/* Demangled: scanInDecidingRoaming */
int scanInDecidingRoaming(void);

/* Symbol: wmmSetupTspecTimeOut */
/* Demangled: wmmSetupTspecTimeOut */
int wmmSetupTspecTimeOut(void);

/* Symbol: wmmFillTsinfo */
/* Demangled: wmmFillTsinfo */
int wmmFillTsinfo(void);

/* Symbol: wmmComposeTspecIE */
/* Demangled: wmmComposeTspecIE */
int wmmComposeTspecIE(void);

/* Symbol: wmmTspecSteps */
/* Demangled: wmmTspecSteps */
int wmmTspecSteps(void);

/* Symbol: wmmStartTsmMeasurement */
/* Demangled: wmmStartTsmMeasurement */
int wmmStartTsmMeasurement(void);

/* Symbol: DumpData */
/* Demangled: DumpData */
int DumpData(void);

/* Symbol: wmmComposeTsmRpt */
/* Demangled: wmmComposeTsmRpt */
int wmmComposeTsmRpt(void);

/* Symbol: wmmParseTspecIE */
/* Demangled: wmmParseTspecIE */
int wmmParseTspecIE(void);

/* Symbol: u4TotalRx */
/* Demangled: u4TotalRx */
extern void* u4TotalRx;

/* Symbol: u4TotalTx */
/* Demangled: u4TotalTx */
extern void* u4TotalTx;

/* Symbol: u4NoDelayRx */
/* Demangled: u4NoDelayRx */
extern void* u4NoDelayRx;

/* Symbol: u4NoDelayTx */
/* Demangled: u4NoDelayTx */
extern void* u4NoDelayTx;

/* Symbol: statsParseARPInfo */
/* Demangled: statsParseARPInfo */
int statsParseARPInfo(void);

/* Symbol: statsParseUDPInfo */
/* Demangled: statsParseUDPInfo */
int statsParseUDPInfo(void);

/* Symbol: statsParseIPV4Info */
/* Demangled: statsParseIPV4Info */
int statsParseIPV4Info(void);

/* Symbol: statsLogData */
/* Demangled: statsLogData */
int statsLogData(void);

/* Symbol: p2pDevFsmRunEventTimeout */
/* Demangled: p2pDevFsmRunEventTimeout */
int p2pDevFsmRunEventTimeout(void);

/* Symbol: p2pDevFsmStateTransition */
/* Demangled: p2pDevFsmStateTransition */
int p2pDevFsmStateTransition(void);

/* Symbol: p2pFuncNeedWaitRsp */
/* Demangled: p2pFuncNeedWaitRsp */
int p2pFuncNeedWaitRsp(void);

/* Symbol: p2pDevStateInit_IDLE */
/* Demangled: p2pDevStateInit_IDLE */
int p2pDevStateInit_IDLE(void);

/* Symbol: p2pDevStateAbort_SCAN */
/* Demangled: p2pDevStateAbort_SCAN */
int p2pDevStateAbort_SCAN(void);

/* Symbol: p2pDevStateInit_REQING_CHANNEL */
/* Demangled: p2pDevStateInit_REQING_CHANNEL */
int p2pDevStateInit_REQING_CHANNEL(void);

/* Symbol: p2pDevStateAbort_CHNL_ON_HAND */
/* Demangled: p2pDevStateAbort_CHNL_ON_HAND */
int p2pDevStateAbort_CHNL_ON_HAND(void);

/* Symbol: p2pDevStateInit_OFF_CHNL_TX */
/* Demangled: p2pDevStateInit_OFF_CHNL_TX */
int p2pDevStateInit_OFF_CHNL_TX(void);

/* Symbol: p2pDevStateAbort_IDLE */
/* Demangled: p2pDevStateAbort_IDLE */
int p2pDevStateAbort_IDLE(void);

/* Symbol: p2pDevStateAbort_REQING_CHANNEL */
/* Demangled: p2pDevStateAbort_REQING_CHANNEL */
int p2pDevStateAbort_REQING_CHANNEL(void);

/* Symbol: p2pDevStateAbort_OFF_CHNL_TX */
/* Demangled: p2pDevStateAbort_OFF_CHNL_TX */
int p2pDevStateAbort_OFF_CHNL_TX(void);

/* Symbol: p2pDevStateInit_SCAN */
/* Demangled: p2pDevStateInit_SCAN */
int p2pDevStateInit_SCAN(void);

/* Symbol: p2pDevStateInit_CHNL_ON_HAND */
/* Demangled: p2pDevStateInit_CHNL_ON_HAND */
int p2pDevStateInit_CHNL_ON_HAND(void);

/* Symbol: p2pFunCleanQueuedMgmtFrame */
/* Demangled: p2pFunCleanQueuedMgmtFrame */
int p2pFunCleanQueuedMgmtFrame(void);

/* Symbol: p2pFunClearAllTxReq */
/* Demangled: p2pFunClearAllTxReq */
int p2pFunClearAllTxReq(void);

/* Symbol: p2pDevFsmRunEventAbort */
/* Demangled: p2pDevFsmRunEventAbort */
int p2pDevFsmRunEventAbort(void);

/* Symbol: p2pDevFsmRunEventScanRequest */
/* Demangled: p2pDevFsmRunEventScanRequest */
int p2pDevFsmRunEventScanRequest(void);

/* Symbol: p2pDevFsmRunEventScanDone */
/* Demangled: p2pDevFsmRunEventScanDone */
int p2pDevFsmRunEventScanDone(void);

/* Symbol: p2pDevFsmRunEventChnlGrant */
/* Demangled: p2pDevFsmRunEventChnlGrant */
int p2pDevFsmRunEventChnlGrant(void);

/* Symbol: p2pDevFsmRunEventMgmtTx */
/* Demangled: p2pDevFsmRunEventMgmtTx */
int p2pDevFsmRunEventMgmtTx(void);

/* Symbol: p2pFuncCheckOnRocChnl */
/* Demangled: p2pFuncCheckOnRocChnl */
int p2pFuncCheckOnRocChnl(void);

/* Symbol: p2pFuncTxMgmtFrame */
/* Demangled: p2pFuncTxMgmtFrame */
int p2pFuncTxMgmtFrame(void);

/* Symbol: p2pFuncGetP2pActionFrameType */
/* Demangled: p2pFuncGetP2pActionFrameType */
int p2pFuncGetP2pActionFrameType(void);

/* Symbol: p2pDevFsmRunEventMgmtFrameTxDone */
/* Demangled: p2pDevFsmRunEventMgmtFrameTxDone */
int p2pDevFsmRunEventMgmtFrameTxDone(void);

/* Symbol: p2pDevFsmNotifyP2pRx */
/* Demangled: p2pDevFsmNotifyP2pRx */
int p2pDevFsmNotifyP2pRx(void);

/* Symbol: p2pDevFsmRunEventTxCancelWait */
/* Demangled: p2pDevFsmRunEventTxCancelWait */
int p2pDevFsmRunEventTxCancelWait(void);

/* Symbol: p2pFuncAcquireCh */
/* Demangled: p2pFuncAcquireCh */
int p2pFuncAcquireCh(void);

/* Symbol: p2pFuncReleaseCh */
/* Demangled: p2pFuncReleaseCh */
int p2pFuncReleaseCh(void);

/* Symbol: p2pFuncRequestScan */
/* Demangled: p2pFuncRequestScan */
int p2pFuncRequestScan(void);

/* Symbol: p2pFuncCancelScan */
/* Demangled: p2pFuncCancelScan */
int p2pFuncCancelScan(void);

/* Symbol: p2pRoleFsmGetFsmState */
/* Demangled: p2pRoleFsmGetFsmState */
int p2pRoleFsmGetFsmState(void);

/* Symbol: p2pRoleFsmRunEventTimeout */
/* Demangled: p2pRoleFsmRunEventTimeout */
int p2pRoleFsmRunEventTimeout(void);

/* Symbol: p2pRoleFsmGetStaStatistics */
/* Demangled: p2pRoleFsmGetStaStatistics */
int p2pRoleFsmGetStaStatistics(void);

/* Symbol: p2pRoleFsmRunEventDfsShutDownTimeout */
/* Demangled: p2pRoleFsmRunEventDfsShutDownTimeout */
int p2pRoleFsmRunEventDfsShutDownTimeout(void);

/* Symbol: p2pRoleFsmStateTransition */
/* Demangled: p2pRoleFsmStateTransition */
int p2pRoleFsmStateTransition(void);

/* Symbol: p2pFuncStopRdd */
/* Demangled: p2pFuncStopRdd */
int p2pFuncStopRdd(void);

/* Symbol: p2pRoleStateAbort_OFF_CHNL_TX */
/* Demangled: p2pRoleStateAbort_OFF_CHNL_TX */
int p2pRoleStateAbort_OFF_CHNL_TX(void);

/* Symbol: p2pRoleStateAbort_IDLE */
/* Demangled: p2pRoleStateAbort_IDLE */
int p2pRoleStateAbort_IDLE(void);

/* Symbol: p2pRoleStateAbort_SCAN */
/* Demangled: p2pRoleStateAbort_SCAN */
int p2pRoleStateAbort_SCAN(void);

/* Symbol: p2pRoleStateAbort_REQING_CHANNEL */
/* Demangled: p2pRoleStateAbort_REQING_CHANNEL */
int p2pRoleStateAbort_REQING_CHANNEL(void);

/* Symbol: p2pRoleStateAbort_AP_CHNL_DETECTION */
/* Demangled: p2pRoleStateAbort_AP_CHNL_DETECTION */
int p2pRoleStateAbort_AP_CHNL_DETECTION(void);

/* Symbol: p2pRoleStateAbort_GC_JOIN */
/* Demangled: p2pRoleStateAbort_GC_JOIN */
int p2pRoleStateAbort_GC_JOIN(void);

/* Symbol: p2pRoleStateInit_OFF_CHNL_TX */
/* Demangled: p2pRoleStateInit_OFF_CHNL_TX */
int p2pRoleStateInit_OFF_CHNL_TX(void);

/* Symbol: p2pRoleStateAbort_DFS_CAC */
/* Demangled: p2pRoleStateAbort_DFS_CAC */
int p2pRoleStateAbort_DFS_CAC(void);

/* Symbol: p2pRoleStateAbort_SWITCH_CHANNEL */
/* Demangled: p2pRoleStateAbort_SWITCH_CHANNEL */
int p2pRoleStateAbort_SWITCH_CHANNEL(void);

/* Symbol: p2pRoleStateInit_IDLE */
/* Demangled: p2pRoleStateInit_IDLE */
int p2pRoleStateInit_IDLE(void);

/* Symbol: p2pRoleStateInit_SCAN */
/* Demangled: p2pRoleStateInit_SCAN */
int p2pRoleStateInit_SCAN(void);

/* Symbol: p2pRoleStateInit_REQING_CHANNEL */
/* Demangled: p2pRoleStateInit_REQING_CHANNEL */
int p2pRoleStateInit_REQING_CHANNEL(void);

/* Symbol: p2pRoleStateInit_AP_CHNL_DETECTION */
/* Demangled: p2pRoleStateInit_AP_CHNL_DETECTION */
int p2pRoleStateInit_AP_CHNL_DETECTION(void);

/* Symbol: p2pRoleStateInit_GC_JOIN */
/* Demangled: p2pRoleStateInit_GC_JOIN */
int p2pRoleStateInit_GC_JOIN(void);

/* Symbol: p2pRoleStateInit_DFS_CAC */
/* Demangled: p2pRoleStateInit_DFS_CAC */
int p2pRoleStateInit_DFS_CAC(void);

/* Symbol: p2pRoleStateInit_SWITCH_CHANNEL */
/* Demangled: p2pRoleStateInit_SWITCH_CHANNEL */
int p2pRoleStateInit_SWITCH_CHANNEL(void);

/* Symbol: p2pFuncDissolve */
/* Demangled: p2pFuncDissolve */
int p2pFuncDissolve(void);

/* Symbol: p2pRoleFsmRunEventAbort */
/* Demangled: p2pRoleFsmRunEventAbort */
int p2pRoleFsmRunEventAbort(void);

/* Symbol: p2pRoleFsmDeauthTimeout */
/* Demangled: p2pRoleFsmDeauthTimeout */
int p2pRoleFsmDeauthTimeout(void);

/* Symbol: p2pFuncResetStaRecStatus */
/* Demangled: p2pFuncResetStaRecStatus */
int p2pFuncResetStaRecStatus(void);

/* Symbol: p2pRoleFsmRunEventDeauthTxDone */
/* Demangled: p2pRoleFsmRunEventDeauthTxDone */
int p2pRoleFsmRunEventDeauthTxDone(void);

/* Symbol: p2pRoleStatePrepare_To_REQING_CHANNEL_STATE */
/* Demangled: p2pRoleStatePrepare_To_REQING_CHANNEL_STATE */
int p2pRoleStatePrepare_To_REQING_CHANNEL_STATE(void);

/* Symbol: p2pFuncStopGO */
/* Demangled: p2pFuncStopGO */
int p2pFuncStopGO(void);

/* Symbol: p2pRoleStatePrepare_To_DFS_CAC_STATE */
/* Demangled: p2pRoleStatePrepare_To_DFS_CAC_STATE */
int p2pRoleStatePrepare_To_DFS_CAC_STATE(void);

/* Symbol: p2pFuncGetRadarDetectMode */
/* Demangled: p2pFuncGetRadarDetectMode */
int p2pFuncGetRadarDetectMode(void);

/* Symbol: p2pFuncShowRadarInfo */
/* Demangled: p2pFuncShowRadarInfo */
int p2pFuncShowRadarInfo(void);

/* Symbol: p2pFuncDfsSwitchCh */
/* Demangled: p2pFuncDfsSwitchCh */
int p2pFuncDfsSwitchCh(void);

/* Symbol: p2pRoleFsmScanTargetBss */
/* Demangled: p2pRoleFsmScanTargetBss */
int p2pRoleFsmScanTargetBss(void);

/* Symbol: scanP2pSearchDesc */
/* Demangled: scanP2pSearchDesc */
int scanP2pSearchDesc(void);

/* Symbol: p2pFuncRetryJOIN */
/* Demangled: p2pFuncRetryJOIN */
int p2pFuncRetryJOIN(void);

/* Symbol: p2pFuncUpdateBssInfoForJOIN */
/* Demangled: p2pFuncUpdateBssInfoForJOIN */
int p2pFuncUpdateBssInfoForJOIN(void);

/* Symbol: p2pRoleFsmRunEventScanRequest */
/* Demangled: p2pRoleFsmRunEventScanRequest */
int p2pRoleFsmRunEventScanRequest(void);

/* Symbol: p2pRoleFsmRunEventScanDone */
/* Demangled: p2pRoleFsmRunEventScanDone */
int p2pRoleFsmRunEventScanDone(void);

/* Symbol: p2pFuncKeepOnConnection */
/* Demangled: p2pFuncKeepOnConnection */
int p2pFuncKeepOnConnection(void);

/* Symbol: p2pRoleFsmRunEventChnlGrant */
/* Demangled: p2pRoleFsmRunEventChnlGrant */
int p2pRoleFsmRunEventChnlGrant(void);

/* Symbol: p2pFuncStartRdd */
/* Demangled: p2pFuncStartRdd */
int p2pFuncStartRdd(void);

/* Symbol: p2pFuncCheckWeatherRadarBand */
/* Demangled: p2pFuncCheckWeatherRadarBand */
int p2pFuncCheckWeatherRadarBand(void);

/* Symbol: p2pFuncIsManualCac */
/* Demangled: p2pFuncIsManualCac */
int p2pFuncIsManualCac(void);

/* Symbol: p2pFuncGetDriverCacTime */
/* Demangled: p2pFuncGetDriverCacTime */
int p2pFuncGetDriverCacTime(void);

/* Symbol: p2pFuncRecordCacStartBootTime */
/* Demangled: p2pFuncRecordCacStartBootTime */
int p2pFuncRecordCacStartBootTime(void);

/* Symbol: p2pRoleProcessACLInspection */
/* Demangled: p2pRoleProcessACLInspection */
int p2pRoleProcessACLInspection(void);

/* Symbol: p2pFuncSwitchOPMode */
/* Demangled: p2pFuncSwitchOPMode */
int p2pFuncSwitchOPMode(void);

/* Symbol: p2pFuncBeaconUpdate */
/* Demangled: p2pFuncBeaconUpdate */
int p2pFuncBeaconUpdate(void);

/* Symbol: p2pFuncAssocRespUpdate */
/* Demangled: p2pFuncAssocRespUpdate */
int p2pFuncAssocRespUpdate(void);

/* Symbol: p2pRoleFsmRunEventMgmtTx */
/* Demangled: p2pRoleFsmRunEventMgmtTx */
int p2pRoleFsmRunEventMgmtTx(void);

/* Symbol: p2pRoleFsmRunEventTxCancelWait */
/* Demangled: p2pRoleFsmRunEventTxCancelWait */
int p2pRoleFsmRunEventTxCancelWait(void);

/* Symbol: p2pFunIndicateAcsResult */
/* Demangled: p2pFunIndicateAcsResult */
int p2pFunIndicateAcsResult(void);

/* Symbol: p2pFuncStartGO */
/* Demangled: p2pFuncStartGO */
int p2pFuncStartGO(void);

/* Symbol: p2pFuncGCJoin */
/* Demangled: p2pFuncGCJoin */
int p2pFuncGCJoin(void);

/* Symbol: rlmGetScoForAP */
/* Demangled: rlmGetScoForAP */
int rlmGetScoForAP(void);

/* Symbol: rlmGetVhtS1ForAP */
/* Demangled: rlmGetVhtS1ForAP */
int rlmGetVhtS1ForAP(void);

/* Symbol: p2pFuncAppendAttriStatusForAssocRsp */
/* Demangled: p2pFuncAppendAttriStatusForAssocRsp */
int p2pFuncAppendAttriStatusForAssocRsp(void);

/* Symbol: p2pFuncAppendAttriExtListenTiming */
/* Demangled: p2pFuncAppendAttriExtListenTiming */
int p2pFuncAppendAttriExtListenTiming(void);

/* Symbol: p2pFunMgmtFrameTxDone */
/* Demangled: p2pFunMgmtFrameTxDone */
int p2pFunMgmtFrameTxDone(void);

/* Symbol: p2pActionFrameToString */
/* Demangled: p2pActionFrameToString */
int p2pActionFrameToString(void);

/* Symbol: paToString */
/* Demangled: paToString */
int paToString(void);

/* Symbol: actionToString */
/* Demangled: actionToString */
int actionToString(void);

/* Symbol: p2pFuncTagActionActionP2PFrame */
/* Demangled: p2pFuncTagActionActionP2PFrame */
int p2pFuncTagActionActionP2PFrame(void);

/* Symbol: p2pFuncTagActionActionFrame */
/* Demangled: p2pFuncTagActionActionFrame */
int p2pFuncTagActionActionFrame(void);

/* Symbol: p2pFuncTagActionCategoryFrame */
/* Demangled: p2pFuncTagActionCategoryFrame */
int p2pFuncTagActionCategoryFrame(void);

/* Symbol: p2pProcessActionResponse */
/* Demangled: p2pProcessActionResponse */
int p2pProcessActionResponse(void);

/* Symbol: p2pFuncTagMgmtFrame */
/* Demangled: p2pFuncTagMgmtFrame */
int p2pFuncTagMgmtFrame(void);

/* Symbol: p2pFuncProcessP2pProbeRsp */
/* Demangled: p2pFuncProcessP2pProbeRsp */
int p2pFuncProcessP2pProbeRsp(void);

/* Symbol: txProbeRspIETable */
/* Demangled: txProbeRspIETable */
extern void* txProbeRspIETable;

/* Symbol: p2pFuncIsBufferableMMPDU */
/* Demangled: p2pFuncIsBufferableMMPDU */
int p2pFuncIsBufferableMMPDU(void);

/* Symbol: g_u4DriverCacTime */
/* Demangled: g_u4DriverCacTime */
extern void* g_u4DriverCacTime;

/* Symbol: g_fgManualCac */
/* Demangled: g_fgManualCac */
extern void* g_fgManualCac;

/* Symbol: apucW53RadarType */
/* Demangled: apucW53RadarType */
extern void* apucW53RadarType;

/* Symbol: apucW56RadarType */
/* Demangled: apucW56RadarType */
extern void* apucW56RadarType;

/* Symbol: p2pFuncJpW53RadarType */
/* Demangled: p2pFuncJpW53RadarType */
int p2pFuncJpW53RadarType(void);

/* Symbol: p2pFuncJpW56RadarType */
/* Demangled: p2pFuncJpW56RadarType */
int p2pFuncJpW56RadarType(void);

/* Symbol: g_ucRadarDetectMode */
/* Demangled: g_ucRadarDetectMode */
extern void* g_ucRadarDetectMode;

/* Symbol: g_ucDfsState */
/* Demangled: g_ucDfsState */
extern void* g_ucDfsState;

/* Symbol: g_u4CacStartBootTime */
/* Demangled: g_u4CacStartBootTime */
extern void* g_u4CacStartBootTime;

/* Symbol: p2pFuncParseBeaconContent */
/* Demangled: p2pFuncParseBeaconContent */
int p2pFuncParseBeaconContent(void);

/* Symbol: p2pFuncStoreAssocRspIEBuffer */
/* Demangled: p2pFuncStoreAssocRspIEBuffer */
int p2pFuncStoreAssocRspIEBuffer(void);

/* Symbol: p2pFuncMgmtFrameRegister */
/* Demangled: p2pFuncMgmtFrameRegister */
int p2pFuncMgmtFrameRegister(void);

/* Symbol: txAssocRspAttributesTable */
/* Demangled: txAssocRspAttributesTable */
extern void* txAssocRspAttributesTable;

/* Symbol: p2pFuncCalculateP2P_IELen */
/* Demangled: p2pFuncCalculateP2P_IELen */
int p2pFuncCalculateP2P_IELen(void);

/* Symbol: p2pFuncGenerateP2P_IE */
/* Demangled: p2pFuncGenerateP2P_IE */
int p2pFuncGenerateP2P_IE(void);

/* Symbol: p2pFuncGetSpecIE */
/* Demangled: p2pFuncGetSpecIE */
int p2pFuncGetSpecIE(void);

/* Symbol: p2pFuncGetSpecAttri */
/* Demangled: p2pFuncGetSpecAttri */
int p2pFuncGetSpecAttri(void);

/* Symbol: p2pFuncGenerateBeaconProbeRsp */
/* Demangled: p2pFuncGenerateBeaconProbeRsp */
int p2pFuncGenerateBeaconProbeRsp(void);

/* Symbol: p2pFuncComposeBeaconProbeRspTemplate */
/* Demangled: p2pFuncComposeBeaconProbeRspTemplate */
int p2pFuncComposeBeaconProbeRspTemplate(void);

/* Symbol: p2pFuncComposeNoaAttribute */
/* Demangled: p2pFuncComposeNoaAttribute */
int p2pFuncComposeNoaAttribute(void);

/* Symbol: p2pFunGetAcsBestChList */
/* Demangled: p2pFunGetAcsBestChList */
int p2pFunGetAcsBestChList(void);

/* Symbol: p2pFunGetSco */
/* Demangled: p2pFunGetSco */
int p2pFunGetSco(void);

/* Symbol: p2pFunGetSecCh */
/* Demangled: p2pFunGetSecCh */
int p2pFunGetSecCh(void);

/* Symbol: scnEventReturnChannel */
/* Demangled: scnEventReturnChannel */
int scnEventReturnChannel(void);

/* Symbol: scanRemoveP2pBssDesc */
/* Demangled: scanRemoveP2pBssDesc */
int scanRemoveP2pBssDesc(void);

/* Symbol: wfdFuncAppendAttriDevInfo */
/* Demangled: wfdFuncAppendAttriDevInfo */
int wfdFuncAppendAttriDevInfo(void);

/* Symbol: rlmObssChnlLevel */
/* Demangled: rlmObssChnlLevel */
int rlmObssChnlLevel(void);

/* Symbol: rlmUpdateBwByChListForAP */
/* Demangled: rlmUpdateBwByChListForAP */
int rlmUpdateBwByChListForAP(void);

/* Symbol: rlmObssScanExemptionRsp */
/* Demangled: rlmObssScanExemptionRsp */
int rlmObssScanExemptionRsp(void);

/* Symbol: asicCapInit */
/* Demangled: asicCapInit */
int asicCapInit(void);

/* Symbol: asicFillInitCmdTxd */
/* Demangled: asicFillInitCmdTxd */
int asicFillInitCmdTxd(void);

/* Symbol: asicFillCmdTxd */
/* Demangled: asicFillCmdTxd */
int asicFillCmdTxd(void);

/* Symbol: asicRxProcessRxvforMSP */
/* Demangled: asicRxProcessRxvforMSP */
int asicRxProcessRxvforMSP(void);

/* Symbol: asicRxGetRcpiValueFromRxv */
/* Demangled: asicRxGetRcpiValueFromRxv */
int asicRxGetRcpiValueFromRxv(void);

/* Symbol: asicInitTxdHook */
/* Demangled: asicInitTxdHook */
int asicInitTxdHook(void);

/* Symbol: asicInitRxdHook */
/* Demangled: asicInitRxdHook */
int asicInitRxdHook(void);

/* Symbol: asicGetFwDlInfo */
/* Demangled: asicGetFwDlInfo */
int asicGetFwDlInfo(void);

/* Symbol: asicGetChipID */
/* Demangled: asicGetChipID */
int asicGetChipID(void);

/* Symbol: asicEnableFWDownload */
/* Demangled: asicEnableFWDownload */
int asicEnableFWDownload(void);

/* Symbol: fillNicTxDescAppend */
/* Demangled: fillNicTxDescAppend */
int fillNicTxDescAppend(void);

/* Symbol: fillNicTxDescAppendWithCR4 */
/* Demangled: fillNicTxDescAppendWithCR4 */
int fillNicTxDescAppendWithCR4(void);

/* Symbol: fillTxDescAppendByHost */
/* Demangled: fillTxDescAppendByHost */
int fillTxDescAppendByHost(void);

/* Symbol: fillTxDescAppendByHostV2 */
/* Demangled: fillTxDescAppendByHostV2 */
int fillTxDescAppendByHostV2(void);

/* Symbol: fillTxDescAppendByCR4 */
/* Demangled: fillTxDescAppendByCR4 */
int fillTxDescAppendByCR4(void);

/* Symbol: fillTxDescTxByteCount */
/* Demangled: fillTxDescTxByteCount */
int fillTxDescTxByteCount(void);

/* Symbol: fillTxDescTxByteCountWithCR4 */
/* Demangled: fillTxDescTxByteCountWithCR4 */
int fillTxDescTxByteCountWithCR4(void);

/* Symbol: asicPcieDmaShdlInit */
/* Demangled: asicPcieDmaShdlInit */
int asicPcieDmaShdlInit(void);

/* Symbol: asicPdmaLoopBackConfig */
/* Demangled: asicPdmaLoopBackConfig */
int asicPdmaLoopBackConfig(void);

/* Symbol: asicPdmaIntMaskConfig */
/* Demangled: asicPdmaIntMaskConfig */
int asicPdmaIntMaskConfig(void);

/* Symbol: asicPdmaConfig */
/* Demangled: asicPdmaConfig */
int asicPdmaConfig(void);

/* Symbol: asicUpdatTxRingMaxQuota */
/* Demangled: asicUpdatTxRingMaxQuota */
int asicUpdatTxRingMaxQuota(void);

/* Symbol: asicEnableInterrupt */
/* Demangled: asicEnableInterrupt */
int asicEnableInterrupt(void);

/* Symbol: asicDisableInterrupt */
/* Demangled: asicDisableInterrupt */
int asicDisableInterrupt(void);

/* Symbol: asicLowPowerOwnRead */
/* Demangled: asicLowPowerOwnRead */
int asicLowPowerOwnRead(void);

/* Symbol: asicLowPowerOwnSet */
/* Demangled: asicLowPowerOwnSet */
int asicLowPowerOwnSet(void);

/* Symbol: asicLowPowerOwnClear */
/* Demangled: asicLowPowerOwnClear */
int asicLowPowerOwnClear(void);

/* Symbol: asicWakeUpWiFi */
/* Demangled: asicWakeUpWiFi */
int asicWakeUpWiFi(void);

/* Symbol: asicIsValidRegAccess */
/* Demangled: asicIsValidRegAccess */
int asicIsValidRegAccess(void);

/* Symbol: asicGetMailboxStatus */
/* Demangled: asicGetMailboxStatus */
int asicGetMailboxStatus(void);

/* Symbol: asicSetDummyReg */
/* Demangled: asicSetDummyReg */
int asicSetDummyReg(void);

/* Symbol: asicCheckDummyReg */
/* Demangled: asicCheckDummyReg */
int asicCheckDummyReg(void);

/* Symbol: asicPdmaTxRingExtCtrl */
/* Demangled: asicPdmaTxRingExtCtrl */
int asicPdmaTxRingExtCtrl(void);

/* Symbol: asicPdmaRxRingExtCtrl */
/* Demangled: asicPdmaRxRingExtCtrl */
int asicPdmaRxRingExtCtrl(void);

/* Symbol: halShowPseInfo */
/* Demangled: halShowPseInfo */
int halShowPseInfo(void);

/* Symbol: halShowPleInfo */
/* Demangled: halShowPleInfo */
int halShowPleInfo(void);

/* Symbol: halShowDmaschInfo */
/* Demangled: halShowDmaschInfo */
int halShowDmaschInfo(void);

/* Symbol: haldumpMacInfo */
/* Demangled: haldumpMacInfo */
int haldumpMacInfo(void);

/* Symbol: halShowTxdInfo */
/* Demangled: halShowTxdInfo */
int halShowTxdInfo(void);

/* Symbol: halShowStatInfo */
/* Demangled: halShowStatInfo */
int halShowStatInfo(void);

/* Symbol: wlanGetDataMode */
/* Demangled: wlanGetDataMode */
int wlanGetDataMode(void);

/* Symbol: wlanGetHarvardFwInfo */
/* Demangled: wlanGetHarvardFwInfo */
int wlanGetHarvardFwInfo(void);

/* Symbol: wlanGetConnacFwInfo */
/* Demangled: wlanGetConnacFwInfo */
int wlanGetConnacFwInfo(void);

/* Symbol: wlanImageSectionGetPatchInfo */
/* Demangled: wlanImageSectionGetPatchInfo */
int wlanImageSectionGetPatchInfo(void);

/* Symbol: wlanImageSectionGetPatchInfoV2 */
/* Demangled: wlanImageSectionGetPatchInfoV2 */
int wlanImageSectionGetPatchInfoV2(void);

/* Symbol: wlanDownloadSection */
/* Demangled: wlanDownloadSection */
int wlanDownloadSection(void);

/* Symbol: wlanImageSectionConfig */
/* Demangled: wlanImageSectionConfig */
int wlanImageSectionConfig(void);

/* Symbol: wlanImageSectionDownload */
/* Demangled: wlanImageSectionDownload */
int wlanImageSectionDownload(void);

/* Symbol: wlanConfigWifiFuncStatus */
/* Demangled: wlanConfigWifiFuncStatus */
int wlanConfigWifiFuncStatus(void);

/* Symbol: wlanDownloadSectionV2 */
/* Demangled: wlanDownloadSectionV2 */
int wlanDownloadSectionV2(void);

/* Symbol: wlanDownloadEMISection */
/* Demangled: wlanDownloadEMISection */
int wlanDownloadEMISection(void);

/* Symbol: wlanImageSectionDownloadStage */
/* Demangled: wlanImageSectionDownloadStage */
int wlanImageSectionDownloadStage(void);

/* Symbol: wlanPatchRecvSemaResp */
/* Demangled: wlanPatchRecvSemaResp */
int wlanPatchRecvSemaResp(void);

/* Symbol: wlanPatchSendSemaControl */
/* Demangled: wlanPatchSendSemaControl */
int wlanPatchSendSemaControl(void);

/* Symbol: wlanPatchIsDownloaded */
/* Demangled: wlanPatchIsDownloaded */
int wlanPatchIsDownloaded(void);

/* Symbol: wlanPatchSendComplete */
/* Demangled: wlanPatchSendComplete */
int wlanPatchSendComplete(void);

/* Symbol: wlanImageQueryStatus */
/* Demangled: wlanImageQueryStatus */
int wlanImageQueryStatus(void);

/* Symbol: wlanConfigWifiFunc */
/* Demangled: wlanConfigWifiFunc */
int wlanConfigWifiFunc(void);

/* Symbol: wlanGetHarvardTailerInfo */
/* Demangled: wlanGetHarvardTailerInfo */
int wlanGetHarvardTailerInfo(void);

/* Symbol: wlanGetConnacTailerInfo */
/* Demangled: wlanGetConnacTailerInfo */
int wlanGetConnacTailerInfo(void);

/* Symbol: fwDlGetReleaseInfoSection */
/* Demangled: fwDlGetReleaseInfoSection */
int fwDlGetReleaseInfoSection(void);

/* Symbol: wlanDetectRamEntry */
/* Demangled: wlanDetectRamEntry */
int wlanDetectRamEntry(void);

/* Symbol: wlanHarvardFormatDownload */
/* Demangled: wlanHarvardFormatDownload */
int wlanHarvardFormatDownload(void);

/* Symbol: wlanConnacFormatDownload */
/* Demangled: wlanConnacFormatDownload */
int wlanConnacFormatDownload(void);

/* Symbol: wlanDownloadPatch */
/* Demangled: wlanDownloadPatch */
int wlanDownloadPatch(void);

/* Symbol: wlanGetPatchInfo */
/* Demangled: wlanGetPatchInfo */
int wlanGetPatchInfo(void);

/* Symbol: fwDlGetReleaseManifest */
/* Demangled: fwDlGetReleaseManifest */
int fwDlGetReleaseManifest(void);

/* Symbol: connacConstructFirmwarePrio */
/* Demangled: connacConstructFirmwarePrio */
int connacConstructFirmwarePrio(void);

/* Symbol: apucConnacFwName */
/* Demangled: apucConnacFwName */
extern void* apucConnacFwName;

/* Symbol: connacConstructPatchName */
/* Demangled: connacConstructPatchName */
int connacConstructPatchName(void);

/* Symbol: connac_eco_table */
/* Demangled: connac_eco_table */
extern void* connac_eco_table;

/* Symbol: connac_bus2chip_cr_mapping */
/* Demangled: connac_bus2chip_cr_mapping */
extern void* connac_bus2chip_cr_mapping;

/* Symbol: connac_bus_info */
/* Demangled: connac_bus_info */
extern void* connac_bus_info;

/* Symbol: connac_fw_dl_ops */
/* Demangled: connac_fw_dl_ops */
extern void* connac_fw_dl_ops;

/* Symbol: connacTxDescOps */
/* Demangled: connacTxDescOps */
extern void* connacTxDescOps;

/* Symbol: connacRxDescOps */
/* Demangled: connacRxDescOps */
extern void* connacRxDescOps;

/* Symbol: connacAteOps */
/* Demangled: connacAteOps */
extern void* connacAteOps;

/* Symbol: connac_debug_ops */
/* Demangled: connac_debug_ops */
extern void* connac_debug_ops;

/* Symbol: mt66xx_chip_info_connac */
/* Demangled: mt66xx_chip_info_connac */
extern void* mt66xx_chip_info_connac;

__END_DECLS

#endif /* BEGONIA_RE_WLAN_DRV_GEN4M_KO_H */

/*
 * Reverse-Engineered ABI Specification for: wmt_drv.ko
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: wmt_drv.ko
 */

#ifndef BEGONIA_RE_WMT_DRV_KO_H
#define BEGONIA_RE_WMT_DRV_KO_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: rtc_clock_enable */
/* Demangled: rtc_clock_enable */
int rtc_clock_enable(void);

/* Symbol: rtc_lpsd_restore_al_mask */
/* Demangled: rtc_lpsd_restore_al_mask */
int rtc_lpsd_restore_al_mask(void);

/* Symbol: rtc_reset_bbpu_alarm_status */
/* Demangled: rtc_reset_bbpu_alarm_status */
int rtc_reset_bbpu_alarm_status(void);

/* Symbol: _wmt_detect_output_low */
/* Demangled: _wmt_detect_output_low */
int _wmt_detect_output_low(void);

/* Symbol: gpio_ctrl_info */
/* Demangled: gpio_ctrl_info */
extern void* gpio_ctrl_info;

/* Symbol: gWmtDetectDbgLvl */
/* Demangled: gWmtDetectDbgLvl */
extern void* gWmtDetectDbgLvl;

/* Symbol: _wmt_detect_output_high */
/* Demangled: _wmt_detect_output_high */
int _wmt_detect_output_high(void);

/* Symbol: _wmt_detect_read_gpio_input */
/* Demangled: _wmt_detect_read_gpio_input */
int _wmt_detect_read_gpio_input(void);

/* Symbol: wmt_detect_read_ext_cmb_status */
/* Demangled: wmt_detect_read_ext_cmb_status */
int wmt_detect_read_ext_cmb_status(void);

/* Symbol: wmt_detect_chip_pwr_ctrl */
/* Demangled: wmt_detect_chip_pwr_ctrl */
int wmt_detect_chip_pwr_ctrl(void);

/* Symbol: wmt_detect_sdio_pwr_ctrl */
/* Demangled: wmt_detect_sdio_pwr_ctrl */
int wmt_detect_sdio_pwr_ctrl(void);

/* Symbol: wmt_detect_write */
/* Demangled: wmt_detect_write */
int wmt_detect_write(void);

/* Symbol: mtk_wcn_wmt_chipid_query */
/* Demangled: mtk_wcn_wmt_chipid_query */
int mtk_wcn_wmt_chipid_query(void);

/* Symbol: mtk_wcn_wmt_set_chipid */
/* Demangled: mtk_wcn_wmt_set_chipid */
int mtk_wcn_wmt_set_chipid(void);

/* Symbol: wmt_plat_get_soc_chipid */
/* Demangled: wmt_plat_get_soc_chipid */
int wmt_plat_get_soc_chipid(void);

/* Symbol: mtk_wcn_common_drv_init */
/* Demangled: mtk_wcn_common_drv_init */
int mtk_wcn_common_drv_init(void);

/* Symbol: sdio_detect_exit */
/* Demangled: sdio_detect_exit */
int sdio_detect_exit(void);

/* Symbol: sdio_detect_do_autok */
/* Demangled: sdio_detect_do_autok */
int sdio_detect_do_autok(void);

/* Symbol: wmt_plat_get_adie_chipid */
/* Demangled: wmt_plat_get_adie_chipid */
int wmt_plat_get_adie_chipid(void);

/* Symbol: wmt_detect_ext_chip_pwr_on */
/* Demangled: wmt_detect_ext_chip_pwr_on */
int wmt_detect_ext_chip_pwr_on(void);

/* Symbol: wmt_detect_ext_chip_pwr_off */
/* Demangled: wmt_detect_ext_chip_pwr_off */
int wmt_detect_ext_chip_pwr_off(void);

/* Symbol: wmt_detect_ext_chip_detect */
/* Demangled: wmt_detect_ext_chip_detect */
int wmt_detect_ext_chip_detect(void);

/* Symbol: wmt_detect_set_chip_type */
/* Demangled: wmt_detect_set_chip_type */
int wmt_detect_set_chip_type(void);

/* Symbol: wmt_detect_get_chip_type */
/* Demangled: wmt_detect_get_chip_type */
int wmt_detect_get_chip_type(void);

/* Symbol: init_module */
/* Demangled: init_module */
int init_module(void);

/* Symbol: sdio_detect_init */
/* Demangled: sdio_detect_init */
int sdio_detect_init(void);

/* Symbol: gWmtDetectFops */
/* Demangled: gWmtDetectFops */
extern void* gWmtDetectFops;

/* Symbol: __this_module */
/* Demangled: __this_module */
extern void* __this_module;

/* Symbol: pDetectClass */
/* Demangled: pDetectClass */
extern void* pDetectClass;

/* Symbol: pDetectDev */
/* Demangled: pDetectDev */
extern void* pDetectDev;

/* Symbol: cleanup_module */
/* Demangled: cleanup_module */
int cleanup_module(void);

/* Symbol: mtk_wcn_common_drv_exit */
/* Demangled: mtk_wcn_common_drv_exit */
int mtk_wcn_common_drv_exit(void);

/* Symbol: hif_sdio_is_chipid_valid */
/* Demangled: hif_sdio_is_chipid_valid */
int hif_sdio_is_chipid_valid(void);

/* Symbol: gChipInfoArray */
/* Demangled: gChipInfoArray */
extern void* gChipInfoArray;

/* Symbol: sdio_detect_query_chipid */
/* Demangled: sdio_detect_query_chipid */
int sdio_detect_query_chipid(void);

/* Symbol: gComboChipId */
/* Demangled: gComboChipId */
extern void* gComboChipId;

/* Symbol: gDrvRegistered */
/* Demangled: gDrvRegistered */
extern void* gDrvRegistered;

/* Symbol: g_func */
/* Demangled: g_func */
extern void* g_func;

/* Symbol: __crc_wmt_uart_port_desc */
/* Demangled: __crc_wmt_uart_port_desc */
extern void* __crc_wmt_uart_port_desc;

/* Symbol: __crc_mtk_wcn_cmb_stub_reg */
/* Demangled: __crc_mtk_wcn_cmb_stub_reg */
extern void* __crc_mtk_wcn_cmb_stub_reg;

/* Symbol: __crc_mtk_wcn_cmb_stub_unreg */
/* Demangled: __crc_mtk_wcn_cmb_stub_unreg */
extern void* __crc_mtk_wcn_cmb_stub_unreg;

/* Symbol: __crc_mtk_wcn_cmb_stub_aif_ctrl */
/* Demangled: __crc_mtk_wcn_cmb_stub_aif_ctrl */
extern void* __crc_mtk_wcn_cmb_stub_aif_ctrl;

/* Symbol: __crc_mtk_wcn_cmb_stub_func_ctrl */
/* Demangled: __crc_mtk_wcn_cmb_stub_func_ctrl */
extern void* __crc_mtk_wcn_cmb_stub_func_ctrl;

/* Symbol: __crc_mt_combo_plt_enter_deep_idle */
/* Demangled: __crc_mt_combo_plt_enter_deep_idle */
extern void* __crc_mt_combo_plt_enter_deep_idle;

/* Symbol: __crc_mt_combo_plt_exit_deep_idle */
/* Demangled: __crc_mt_combo_plt_exit_deep_idle */
extern void* __crc_mt_combo_plt_exit_deep_idle;

/* Symbol: __crc_mtk_wcn_wmt_chipid_query */
/* Demangled: __crc_mtk_wcn_wmt_chipid_query */
extern void* __crc_mtk_wcn_wmt_chipid_query;

/* Symbol: __crc_mtk_wcn_wmt_set_chipid */
/* Demangled: __crc_mtk_wcn_wmt_set_chipid */
extern void* __crc_mtk_wcn_wmt_set_chipid;

/* Symbol: __crc_mtk_wcn_cmb_stub_do_reset */
/* Demangled: __crc_mtk_wcn_cmb_stub_do_reset */
extern void* __crc_mtk_wcn_cmb_stub_do_reset;

/* Symbol: __crc_board_sdio_ctrl */
/* Demangled: __crc_board_sdio_ctrl */
extern void* __crc_board_sdio_ctrl;

/* Symbol: mtk_wcn_cmb_stub_reg */
/* Demangled: mtk_wcn_cmb_stub_reg */
int mtk_wcn_cmb_stub_reg(void);

/* Symbol: gCmbStubLogLevel */
/* Demangled: gCmbStubLogLevel */
extern void* gCmbStubLogLevel;

/* Symbol: mtk_wcn_cmb_stub_unreg */
/* Demangled: mtk_wcn_cmb_stub_unreg */
int mtk_wcn_cmb_stub_unreg(void);

/* Symbol: mtk_wcn_cmb_stub_aif_ctrl */
/* Demangled: mtk_wcn_cmb_stub_aif_ctrl */
int mtk_wcn_cmb_stub_aif_ctrl(void);

/* Symbol: mtk_wcn_cmb_stub_func_ctrl */
/* Demangled: mtk_wcn_cmb_stub_func_ctrl */
int mtk_wcn_cmb_stub_func_ctrl(void);

/* Symbol: mt_combo_plt_enter_deep_idle */
/* Demangled: mt_combo_plt_enter_deep_idle */
int mt_combo_plt_enter_deep_idle(void);

/* Symbol: mt_combo_plt_exit_deep_idle */
/* Demangled: mt_combo_plt_exit_deep_idle */
int mt_combo_plt_exit_deep_idle(void);

/* Symbol: gConnectivityChipId */
/* Demangled: gConnectivityChipId */
extern void* gConnectivityChipId;

/* Symbol: mtk_wcn_cmb_stub_do_reset */
/* Demangled: mtk_wcn_cmb_stub_do_reset */
int mtk_wcn_cmb_stub_do_reset(void);

/* Symbol: board_sdio_ctrl */
/* Demangled: board_sdio_ctrl */
int board_sdio_ctrl(void);

/* Symbol: wmt_uart_port_desc */
/* Demangled: wmt_uart_port_desc */
extern void* wmt_uart_port_desc;

/* Symbol: mt_get_gpio_mode_base */
/* Demangled: mt_get_gpio_mode_base */
int mt_get_gpio_mode_base(void);

/* Symbol: mt_get_gpio_pull_select_base */
/* Demangled: mt_get_gpio_pull_select_base */
int mt_get_gpio_pull_select_base(void);

/* Symbol: mt_get_gpio_in_base */
/* Demangled: mt_get_gpio_in_base */
int mt_get_gpio_in_base(void);

/* Symbol: mt_get_gpio_out_base */
/* Demangled: mt_get_gpio_out_base */
int mt_get_gpio_out_base(void);

/* Symbol: mt_get_gpio_pull_enable_base */
/* Demangled: mt_get_gpio_pull_enable_base */
int mt_get_gpio_pull_enable_base(void);

/* Symbol: mt_get_gpio_dir_base */
/* Demangled: mt_get_gpio_dir_base */
int mt_get_gpio_dir_base(void);

/* Symbol: mt_get_gpio_ies_base */
/* Demangled: mt_get_gpio_ies_base */
int mt_get_gpio_ies_base(void);

/* Symbol: wmt_gpio_init */
/* Demangled: wmt_gpio_init */
int wmt_gpio_init(void);

/* Symbol: gpio_state_name */
/* Demangled: gpio_state_name */
extern void* gpio_state_name;

/* Symbol: gpio_pin_name */
/* Demangled: gpio_pin_name */
extern void* gpio_pin_name;

/* Symbol: wmt_gpio_deinit */
/* Demangled: wmt_gpio_deinit */
int wmt_gpio_deinit(void);

/* Symbol: _wmt_dump_gpio_regs */
/* Demangled: _wmt_dump_gpio_regs */
int _wmt_dump_gpio_regs(void);

/* Symbol: _wmt_gpio_pre_regs */
/* Demangled: _wmt_gpio_pre_regs */
int _wmt_gpio_pre_regs(void);

/* Symbol: _wmt_dump_gpio_pre_regs */
/* Demangled: _wmt_dump_gpio_pre_regs */
int _wmt_dump_gpio_pre_regs(void);

/* Symbol: mtk_wcn_fm_init */
/* Demangled: mtk_wcn_fm_init */
int mtk_wcn_fm_init(void);

/* Symbol: do_fm_drv_init */
/* Demangled: do_fm_drv_init */
int do_fm_drv_init(void);

/* Symbol: do_bluetooth_drv_init */
/* Demangled: do_bluetooth_drv_init */
int do_bluetooth_drv_init(void);

/* Symbol: mtk_wcn_wlan_gen4_init */
/* Demangled: mtk_wcn_wlan_gen4_init */
int mtk_wcn_wlan_gen4_init(void);

/* Symbol: mtk_wcn_wlan_gen3_init */
/* Demangled: mtk_wcn_wlan_gen3_init */
int mtk_wcn_wlan_gen3_init(void);

/* Symbol: mtk_wcn_wlan_gen2_init */
/* Demangled: mtk_wcn_wlan_gen2_init */
int mtk_wcn_wlan_gen2_init(void);

/* Symbol: mtk_wcn_wmt_wifi_init */
/* Demangled: mtk_wcn_wmt_wifi_init */
int mtk_wcn_wmt_wifi_init(void);

/* Symbol: do_wlan_drv_init */
/* Demangled: do_wlan_drv_init */
int do_wlan_drv_init(void);

/* Symbol: mtk_wcn_stpgps_drv_init */
/* Demangled: mtk_wcn_stpgps_drv_init */
int mtk_wcn_stpgps_drv_init(void);

/* Symbol: do_gps_drv_init */
/* Demangled: do_gps_drv_init */
int do_gps_drv_init(void);

/* Symbol: conn_reg */
/* Demangled: conn_reg */
extern void* conn_reg;

/* Symbol: wmtPlatLogLvl */
/* Demangled: wmtPlatLogLvl */
extern void* wmtPlatLogLvl;

/* Symbol: clk_infracfg_ao_ccif4_ap_cg */
/* Demangled: clk_infracfg_ao_ccif4_ap_cg */
extern void* clk_infracfg_ao_ccif4_ap_cg;

/* Symbol: clk_scp_conn_main */
/* Demangled: clk_scp_conn_main */
extern void* clk_scp_conn_main;

/* Symbol: rom_patch_dl_flag */
/* Demangled: rom_patch_dl_flag */
extern void* rom_patch_dl_flag;

/* Symbol: mtk_wcn_soc_rom_patch_dwn */
/* Demangled: mtk_wcn_soc_rom_patch_dwn */
int mtk_wcn_soc_rom_patch_dwn(void);

/* Symbol: wmt_plat_soc_co_clock_flag_get */
/* Demangled: wmt_plat_soc_co_clock_flag_get */
int wmt_plat_soc_co_clock_flag_get(void);

/* Symbol: reg_VCN18 */
/* Demangled: reg_VCN18 */
extern void* reg_VCN18;

/* Symbol: reg_VCN33_1 */
/* Demangled: reg_VCN33_1 */
extern void* reg_VCN33_1;

/* Symbol: reg_VCN33_2 */
/* Demangled: reg_VCN33_2 */
extern void* reg_VCN33_2;

/* Symbol: mtk_wcn_emi_addr_info */
/* Demangled: mtk_wcn_emi_addr_info */
extern void* mtk_wcn_emi_addr_info;

/* Symbol: connsys_dedicated_log_path_apsoc_init */
/* Demangled: connsys_dedicated_log_path_apsoc_init */
int connsys_dedicated_log_path_apsoc_init(void);

/* Symbol: fw_log_wmt_init */
/* Demangled: fw_log_wmt_init */
int fw_log_wmt_init(void);

/* Symbol: fw_log_wmt_deinit */
/* Demangled: fw_log_wmt_deinit */
int fw_log_wmt_deinit(void);

/* Symbol: connsys_dedicated_log_path_apsoc_deinit */
/* Demangled: connsys_dedicated_log_path_apsoc_deinit */
int connsys_dedicated_log_path_apsoc_deinit(void);

/* Symbol: osal_malloc */
/* Demangled: osal_malloc */
int osal_malloc(void);

/* Symbol: osal_strlen */
/* Demangled: osal_strlen */
int osal_strlen(void);

/* Symbol: osal_free */
/* Demangled: osal_free */
int osal_free(void);

/* Symbol: mtk_wcn_consys_jtag_set_for_mcu */
/* Demangled: mtk_wcn_consys_jtag_set_for_mcu */
int mtk_wcn_consys_jtag_set_for_mcu(void);

/* Symbol: gJtagCtrl */
/* Demangled: gJtagCtrl */
extern void* gJtagCtrl;

/* Symbol: mtk_wcn_consys_jtag_flag_ctrl */
/* Demangled: mtk_wcn_consys_jtag_flag_ctrl */
int mtk_wcn_consys_jtag_flag_ctrl(void);

/* Symbol: mtk_wcn_get_consys_ic_ops */
/* Demangled: mtk_wcn_get_consys_ic_ops */
int mtk_wcn_get_consys_ic_ops(void);

/* Symbol: consys_ic_ops */
/* Demangled: consys_ic_ops */
extern void* consys_ic_ops;

/* Symbol: wmt_lib_trigger_assert_keyword_delay */
/* Demangled: wmt_lib_trigger_assert_keyword_delay */
int wmt_lib_trigger_assert_keyword_delay(void);

/* Symbol: mtk_wcn_emi_state_off */
/* Demangled: mtk_wcn_emi_state_off */
extern void* mtk_wcn_emi_state_off;

/* Symbol: g_connsys_lp_dump_info */
/* Demangled: g_connsys_lp_dump_info */
extern void* g_connsys_lp_dump_info;

/* Symbol: __crc_wmt_plat_read_cpupcr */
/* Demangled: __crc_wmt_plat_read_cpupcr */
extern void* __crc_wmt_plat_read_cpupcr;

/* Symbol: __crc_wmt_plat_get_soc_chipid */
/* Demangled: __crc_wmt_plat_get_soc_chipid */
extern void* __crc_wmt_plat_get_soc_chipid;

/* Symbol: wmt_plat_audio_ctrl */
/* Demangled: wmt_plat_audio_ctrl */
int wmt_plat_audio_ctrl(void);

/* Symbol: gWmtDbgLvl */
/* Demangled: gWmtDbgLvl */
extern void* gWmtDbgLvl;

/* Symbol: osal_err_print */
/* Demangled: osal_err_print */
int osal_err_print(void);

/* Symbol: osal_warn_print */
/* Demangled: osal_warn_print */
int osal_warn_print(void);

/* Symbol: wmt_plat_audio_if_cb */
/* Demangled: wmt_plat_audio_if_cb */
extern void* wmt_plat_audio_if_cb;

/* Symbol: wmt_plat_gpio_ctrl */
/* Demangled: wmt_plat_gpio_ctrl */
int wmt_plat_gpio_ctrl(void);

/* Symbol: wmt_plat_merge_if_flag_get */
/* Demangled: wmt_plat_merge_if_flag_get */
int wmt_plat_merge_if_flag_get(void);

/* Symbol: gWmtMergeIfSupport */
/* Demangled: gWmtMergeIfSupport */
extern void* gWmtMergeIfSupport;

/* Symbol: wmt_plat_bgf_irq_isr */
/* Demangled: wmt_plat_bgf_irq_isr */
int wmt_plat_bgf_irq_isr(void);

/* Symbol: wmt_plat_eirq_ctrl */
/* Demangled: wmt_plat_eirq_ctrl */
int wmt_plat_eirq_ctrl(void);

/* Symbol: wmt_plat_bgf_irq_cb */
/* Demangled: wmt_plat_bgf_irq_cb */
extern void* wmt_plat_bgf_irq_cb;

/* Symbol: mtk_wcn_consys_read_irq_info_from_dts */
/* Demangled: mtk_wcn_consys_read_irq_info_from_dts */
int mtk_wcn_consys_read_irq_info_from_dts(void);

/* Symbol: g_bgf_irq_lock */
/* Demangled: g_bgf_irq_lock */
extern void* g_bgf_irq_lock;

/* Symbol: wmt_plat_irq_cb_reg */
/* Demangled: wmt_plat_irq_cb_reg */
int wmt_plat_irq_cb_reg(void);

/* Symbol: wmt_plat_aif_cb_reg */
/* Demangled: wmt_plat_aif_cb_reg */
int wmt_plat_aif_cb_reg(void);

/* Symbol: wmt_plat_func_ctrl_cb_reg */
/* Demangled: wmt_plat_func_ctrl_cb_reg */
int wmt_plat_func_ctrl_cb_reg(void);

/* Symbol: wmt_plat_func_ctrl_cb */
/* Demangled: wmt_plat_func_ctrl_cb */
extern void* wmt_plat_func_ctrl_cb;

/* Symbol: wmt_plat_thermal_ctrl_cb_reg */
/* Demangled: wmt_plat_thermal_ctrl_cb_reg */
int wmt_plat_thermal_ctrl_cb_reg(void);

/* Symbol: wmt_plat_thermal_query_ctrl_cb */
/* Demangled: wmt_plat_thermal_query_ctrl_cb */
extern void* wmt_plat_thermal_query_ctrl_cb;

/* Symbol: wmt_plat_trigger_assert_cb_reg */
/* Demangled: wmt_plat_trigger_assert_cb_reg */
int wmt_plat_trigger_assert_cb_reg(void);

/* Symbol: wmt_plat_trigger_assert_cb */
/* Demangled: wmt_plat_trigger_assert_cb */
extern void* wmt_plat_trigger_assert_cb;

/* Symbol: wmt_plat_deep_idle_ctrl_cb_reg */
/* Demangled: wmt_plat_deep_idle_ctrl_cb_reg */
int wmt_plat_deep_idle_ctrl_cb_reg(void);

/* Symbol: wmt_plat_deep_idle_ctrl_cb */
/* Demangled: wmt_plat_deep_idle_ctrl_cb */
extern void* wmt_plat_deep_idle_ctrl_cb;

/* Symbol: gCoClockFlag */
/* Demangled: gCoClockFlag */
extern void* gCoClockFlag;

/* Symbol: wmt_plat_init */
/* Demangled: wmt_plat_init */
int wmt_plat_init(void);

/* Symbol: mtk_wcn_consys_co_clock_type */
/* Demangled: mtk_wcn_consys_co_clock_type */
int mtk_wcn_consys_co_clock_type(void);

/* Symbol: osal_strcpy */
/* Demangled: osal_strcpy */
int osal_strcpy(void);

/* Symbol: osal_wake_lock_init */
/* Demangled: osal_wake_lock_init */
int osal_wake_lock_init(void);

/* Symbol: osal_sleepable_lock_init */
/* Demangled: osal_sleepable_lock_init */
int osal_sleepable_lock_init(void);

/* Symbol: mtk_wcn_consys_hw_init */
/* Demangled: mtk_wcn_consys_hw_init */
int mtk_wcn_consys_hw_init(void);

/* Symbol: mtk_wcn_cmb_hw_init */
/* Demangled: mtk_wcn_cmb_hw_init */
int mtk_wcn_cmb_hw_init(void);

/* Symbol: mtk_wcn_consys_detect_adie_chipid */
/* Demangled: mtk_wcn_consys_detect_adie_chipid */
int mtk_wcn_consys_detect_adie_chipid(void);

/* Symbol: mtk_wcn_consys_clock_fail_dump */
/* Demangled: mtk_wcn_consys_clock_fail_dump */
int mtk_wcn_consys_clock_fail_dump(void);

/* Symbol: wmt_plat_deinit */
/* Demangled: wmt_plat_deinit */
int wmt_plat_deinit(void);

/* Symbol: mtk_wcn_consys_hw_deinit */
/* Demangled: mtk_wcn_consys_hw_deinit */
int mtk_wcn_consys_hw_deinit(void);

/* Symbol: mtk_wcn_cmb_hw_deinit */
/* Demangled: mtk_wcn_cmb_hw_deinit */
int mtk_wcn_cmb_hw_deinit(void);

/* Symbol: osal_wake_lock_deinit */
/* Demangled: osal_wake_lock_deinit */
int osal_wake_lock_deinit(void);

/* Symbol: osal_sleepable_lock_deinit */
/* Demangled: osal_sleepable_lock_deinit */
int osal_sleepable_lock_deinit(void);

/* Symbol: wmt_plat_sdio_ctrl */
/* Demangled: wmt_plat_sdio_ctrl */
int wmt_plat_sdio_ctrl(void);

/* Symbol: wmt_plat_irq_ctrl */
/* Demangled: wmt_plat_irq_ctrl */
int wmt_plat_irq_ctrl(void);

/* Symbol: wmt_plat_pwr_ctrl */
/* Demangled: wmt_plat_pwr_ctrl */
int wmt_plat_pwr_ctrl(void);

/* Symbol: mtk_wcn_consys_hw_pwr_on */
/* Demangled: mtk_wcn_consys_hw_pwr_on */
int mtk_wcn_consys_hw_pwr_on(void);

/* Symbol: mtk_wcn_consys_hw_pwr_off */
/* Demangled: mtk_wcn_consys_hw_pwr_off */
int mtk_wcn_consys_hw_pwr_off(void);

/* Symbol: mtk_wcn_consys_hw_rst */
/* Demangled: mtk_wcn_consys_hw_rst */
int mtk_wcn_consys_hw_rst(void);

/* Symbol: mtk_wcn_consys_hw_state_show */
/* Demangled: mtk_wcn_consys_hw_state_show */
int mtk_wcn_consys_hw_state_show(void);

/* Symbol: mtk_wcn_cmb_hw_pwr_off */
/* Demangled: mtk_wcn_cmb_hw_pwr_off */
int mtk_wcn_cmb_hw_pwr_off(void);

/* Symbol: mtk_wcn_cmb_hw_rst */
/* Demangled: mtk_wcn_cmb_hw_rst */
int mtk_wcn_cmb_hw_rst(void);

/* Symbol: mtk_wcn_cmb_hw_state_show */
/* Demangled: mtk_wcn_cmb_hw_state_show */
int mtk_wcn_cmb_hw_state_show(void);

/* Symbol: mtk_wcn_cmb_hw_pwr_on */
/* Demangled: mtk_wcn_cmb_hw_pwr_on */
int mtk_wcn_cmb_hw_pwr_on(void);

/* Symbol: wmt_plat_ps_ctrl */
/* Demangled: wmt_plat_ps_ctrl */
int wmt_plat_ps_ctrl(void);

/* Symbol: wmt_plat_wake_lock_ctrl */
/* Demangled: wmt_plat_wake_lock_ctrl */
int wmt_plat_wake_lock_ctrl(void);

/* Symbol: osal_lock_sleepable_lock */
/* Demangled: osal_lock_sleepable_lock */
int osal_lock_sleepable_lock(void);

/* Symbol: osal_unlock_sleepable_lock */
/* Demangled: osal_unlock_sleepable_lock */
int osal_unlock_sleepable_lock(void);

/* Symbol: osal_wake_lock */
/* Demangled: osal_wake_lock */
int osal_wake_lock(void);

/* Symbol: osal_wake_lock_count */
/* Demangled: osal_wake_lock_count */
int osal_wake_lock_count(void);

/* Symbol: osal_wake_unlock */
/* Demangled: osal_wake_unlock */
int osal_wake_unlock(void);

/* Symbol: wmt_plat_merge_if_flag_ctrl */
/* Demangled: wmt_plat_merge_if_flag_ctrl */
int wmt_plat_merge_if_flag_ctrl(void);

/* Symbol: wmt_plat_set_comm_if_type */
/* Demangled: wmt_plat_set_comm_if_type */
int wmt_plat_set_comm_if_type(void);

/* Symbol: wmt_plat_get_comm_if_type */
/* Demangled: wmt_plat_get_comm_if_type */
int wmt_plat_get_comm_if_type(void);

/* Symbol: wmt_plat_soc_paldo_ctrl */
/* Demangled: wmt_plat_soc_paldo_ctrl */
int wmt_plat_soc_paldo_ctrl(void);

/* Symbol: mtk_wcn_consys_hw_vcn28_ctrl */
/* Demangled: mtk_wcn_consys_hw_vcn28_ctrl */
int mtk_wcn_consys_hw_vcn28_ctrl(void);

/* Symbol: mtk_wcn_consys_hw_bt_paldo_ctrl */
/* Demangled: mtk_wcn_consys_hw_bt_paldo_ctrl */
int mtk_wcn_consys_hw_bt_paldo_ctrl(void);

/* Symbol: mtk_wcn_consys_hw_wifi_paldo_ctrl */
/* Demangled: mtk_wcn_consys_hw_wifi_paldo_ctrl */
int mtk_wcn_consys_hw_wifi_paldo_ctrl(void);

/* Symbol: mtk_wcn_consys_hw_efuse_paldo_ctrl */
/* Demangled: mtk_wcn_consys_hw_efuse_paldo_ctrl */
int mtk_wcn_consys_hw_efuse_paldo_ctrl(void);

/* Symbol: wmt_plat_get_emi_virt_add */
/* Demangled: wmt_plat_get_emi_virt_add */
int wmt_plat_get_emi_virt_add(void);

/* Symbol: mtk_wcn_consys_emi_virt_addr_get */
/* Demangled: mtk_wcn_consys_emi_virt_addr_get */
int mtk_wcn_consys_emi_virt_addr_get(void);

/* Symbol: wmt_plat_get_emi_phy_add */
/* Demangled: wmt_plat_get_emi_phy_add */
int wmt_plat_get_emi_phy_add(void);

/* Symbol: mtk_wcn_consys_soc_get_emi_phy_add */
/* Demangled: mtk_wcn_consys_soc_get_emi_phy_add */
int mtk_wcn_consys_soc_get_emi_phy_add(void);

/* Symbol: wmt_plat_jtag_flag_ctrl */
/* Demangled: wmt_plat_jtag_flag_ctrl */
int wmt_plat_jtag_flag_ctrl(void);

/* Symbol: wmt_plat_read_cpupcr */
/* Demangled: wmt_plat_read_cpupcr */
int wmt_plat_read_cpupcr(void);

/* Symbol: mtk_wcn_consys_read_cpupcr */
/* Demangled: mtk_wcn_consys_read_cpupcr */
int mtk_wcn_consys_read_cpupcr(void);

/* Symbol: wmt_plat_read_dmaregs */
/* Demangled: wmt_plat_read_dmaregs */
int wmt_plat_read_dmaregs(void);

/* Symbol: wmt_plat_set_host_dump_state */
/* Demangled: wmt_plat_set_host_dump_state */
int wmt_plat_set_host_dump_state(void);

/* Symbol: wmt_plat_force_trigger_assert */
/* Demangled: wmt_plat_force_trigger_assert */
int wmt_plat_force_trigger_assert(void);

/* Symbol: mtk_wcn_force_trigger_assert_debug_pin */
/* Demangled: mtk_wcn_force_trigger_assert_debug_pin */
int mtk_wcn_force_trigger_assert_debug_pin(void);

/* Symbol: wmt_plat_update_host_sync_num */
/* Demangled: wmt_plat_update_host_sync_num */
int wmt_plat_update_host_sync_num(void);

/* Symbol: wmt_plat_get_dump_info */
/* Demangled: wmt_plat_get_dump_info */
int wmt_plat_get_dump_info(void);

/* Symbol: wmt_plat_write_emi_l */
/* Demangled: wmt_plat_write_emi_l */
int wmt_plat_write_emi_l(void);

/* Symbol: mtk_wcn_consys_soc_chipid */
/* Demangled: mtk_wcn_consys_soc_chipid */
int mtk_wcn_consys_soc_chipid(void);

/* Symbol: wmt_plat_get_tdm_antsel_index */
/* Demangled: wmt_plat_get_tdm_antsel_index */
int wmt_plat_get_tdm_antsel_index(void);

/* Symbol: wmt_plat_set_dbg_mode */
/* Demangled: wmt_plat_set_dbg_mode */
int wmt_plat_set_dbg_mode(void);

/* Symbol: wmt_plat_set_dynamic_dumpmem */
/* Demangled: wmt_plat_set_dynamic_dumpmem */
int wmt_plat_set_dynamic_dumpmem(void);

/* Symbol: mtk_wcn_consys_get_pinctrl */
/* Demangled: mtk_wcn_consys_get_pinctrl */
int mtk_wcn_consys_get_pinctrl(void);

/* Symbol: __crc_mtk_wcn_consys_hw_wifi_paldo_ctrl */
/* Demangled: __crc_mtk_wcn_consys_hw_wifi_paldo_ctrl */
extern void* __crc_mtk_wcn_consys_hw_wifi_paldo_ctrl;

/* Symbol: __crc_mtk_wcn_consys_hw_efuse_paldo_ctrl */
/* Demangled: __crc_mtk_wcn_consys_hw_efuse_paldo_ctrl */
extern void* __crc_mtk_wcn_consys_hw_efuse_paldo_ctrl;

/* Symbol: mtk_wcn_consys_hw_osc_en_ctrl */
/* Demangled: mtk_wcn_consys_hw_osc_en_ctrl */
int mtk_wcn_consys_hw_osc_en_ctrl(void);

/* Symbol: mtk_wcn_consys_sleep_info_read_all_ctrl */
/* Demangled: mtk_wcn_consys_sleep_info_read_all_ctrl */
int mtk_wcn_consys_sleep_info_read_all_ctrl(void);

/* Symbol: wmt_consys_ic_ops */
/* Demangled: wmt_consys_ic_ops */
extern void* wmt_consys_ic_ops;

/* Symbol: osal_lock_unsleepable_lock */
/* Demangled: osal_lock_unsleepable_lock */
int osal_lock_unsleepable_lock(void);

/* Symbol: osal_sprintf */
/* Demangled: osal_sprintf */
int osal_sprintf(void);

/* Symbol: osal_unlock_unsleepable_lock */
/* Demangled: osal_unlock_unsleepable_lock */
int osal_unlock_unsleepable_lock(void);

/* Symbol: mtk_wcn_consys_sleep_info_clear */
/* Demangled: mtk_wcn_consys_sleep_info_clear */
int mtk_wcn_consys_sleep_info_clear(void);

/* Symbol: wmt_lib_get_drv_status */
/* Demangled: wmt_lib_get_drv_status */
int wmt_lib_get_drv_status(void);

/* Symbol: gDevWmt */
/* Demangled: gDevWmt */
extern void* gDevWmt;

/* Symbol: osal_test_bit */
/* Demangled: osal_test_bit */
int osal_test_bit(void);

/* Symbol: mtk_wcn_consys_sleep_info_restore */
/* Demangled: mtk_wcn_consys_sleep_info_restore */
int mtk_wcn_consys_sleep_info_restore(void);

/* Symbol: mtk_wcn_consys_hw_reg_ctrl */
/* Demangled: mtk_wcn_consys_hw_reg_ctrl */
int mtk_wcn_consys_hw_reg_ctrl(void);

/* Symbol: pEmibaseaddr */
/* Demangled: pEmibaseaddr */
extern void* pEmibaseaddr;

/* Symbol: mtk_wcn_consys_get_adie_chipid */
/* Demangled: mtk_wcn_consys_get_adie_chipid */
int mtk_wcn_consys_get_adie_chipid(void);

/* Symbol: consys_pinctrl */
/* Demangled: consys_pinctrl */
extern void* consys_pinctrl;

/* Symbol: mtk_wcn_consys_hw_gpio_ctrl */
/* Demangled: mtk_wcn_consys_hw_gpio_ctrl */
int mtk_wcn_consys_hw_gpio_ctrl(void);

/* Symbol: chip_reset_status */
/* Demangled: chip_reset_status */
extern void* chip_reset_status;

/* Symbol: mtk_wcn_soc_restore_wifi_cal_result */
/* Demangled: mtk_wcn_soc_restore_wifi_cal_result */
int mtk_wcn_soc_restore_wifi_cal_result(void);

/* Symbol: mtk_consys_set_chip_reset_status */
/* Demangled: mtk_consys_set_chip_reset_status */
int mtk_consys_set_chip_reset_status(void);

/* Symbol: mtk_wcn_consys_hw_restore */
/* Demangled: mtk_wcn_consys_hw_restore */
int mtk_wcn_consys_hw_restore(void);

/* Symbol: osal_sleep_ms */
/* Demangled: osal_sleep_ms */
int osal_sleep_ms(void);

/* Symbol: mtk_wcn_consys_set_dbg_mode */
/* Demangled: mtk_wcn_consys_set_dbg_mode */
int mtk_wcn_consys_set_dbg_mode(void);

/* Symbol: mtk_wcn_consys_set_dynamic_dump */
/* Demangled: mtk_wcn_consys_set_dynamic_dump */
int mtk_wcn_consys_set_dynamic_dump(void);

/* Symbol: g_pdev */
/* Demangled: g_pdev */
extern void* g_pdev;

/* Symbol: mtk_wcn_consys_hang_debug */
/* Demangled: mtk_wcn_consys_hang_debug */
int mtk_wcn_consys_hang_debug(void);

/* Symbol: mtk_consys_get_gps_lna_pin_num */
/* Demangled: mtk_consys_get_gps_lna_pin_num */
int mtk_consys_get_gps_lna_pin_num(void);

/* Symbol: gps_lna_pin_num */
/* Demangled: gps_lna_pin_num */
extern void* gps_lna_pin_num;

/* Symbol: mtk_wcn_consys_reg_ctrl */
/* Demangled: mtk_wcn_consys_reg_ctrl */
int mtk_wcn_consys_reg_ctrl(void);

/* Symbol: mtk_consys_check_reg_readable */
/* Demangled: mtk_consys_check_reg_readable */
int mtk_consys_check_reg_readable(void);

/* Symbol: mtk_consys_check_reg_readable_by_addr */
/* Demangled: mtk_consys_check_reg_readable_by_addr */
int mtk_consys_check_reg_readable_by_addr(void);

/* Symbol: mtk_consys_is_connsys_reg */
/* Demangled: mtk_consys_is_connsys_reg */
int mtk_consys_is_connsys_reg(void);

/* Symbol: mtk_consys_set_mcif_mpu_protection */
/* Demangled: mtk_consys_set_mcif_mpu_protection */
int mtk_consys_set_mcif_mpu_protection(void);

/* Symbol: mtk_consys_is_calibration_backup_restore_support */
/* Demangled: mtk_consys_is_calibration_backup_restore_support */
int mtk_consys_is_calibration_backup_restore_support(void);

/* Symbol: mtk_consys_chip_reset_status */
/* Demangled: mtk_consys_chip_reset_status */
int mtk_consys_chip_reset_status(void);

/* Symbol: mtk_consys_is_ant_swap_enable_by_hwid */
/* Demangled: mtk_consys_is_ant_swap_enable_by_hwid */
int mtk_consys_is_ant_swap_enable_by_hwid(void);

/* Symbol: mtk_consys_dump_osc_state */
/* Demangled: mtk_consys_dump_osc_state */
int mtk_consys_dump_osc_state(void);

/* Symbol: mtk_wcn_consys_ic_get_ant_sel_cr_addr */
/* Demangled: mtk_wcn_consys_ic_get_ant_sel_cr_addr */
int mtk_wcn_consys_ic_get_ant_sel_cr_addr(void);

/* Symbol: mtk_wcn_consys_dump_gating_state */
/* Demangled: mtk_wcn_consys_dump_gating_state */
int mtk_wcn_consys_dump_gating_state(void);

/* Symbol: mtk_wcn_consys_get_options */
/* Demangled: mtk_wcn_consys_get_options */
int mtk_wcn_consys_get_options(void);

/* Symbol: wmt_lib_trigger_assert */
/* Demangled: wmt_lib_trigger_assert */
int wmt_lib_trigger_assert(void);

/* Symbol: osal_unsleepable_lock_init */
/* Demangled: osal_unsleepable_lock_init */
int osal_unsleepable_lock_init(void);

/* Symbol: plt_resume_worker */
/* Demangled: plt_resume_worker */
extern void* plt_resume_worker;

/* Symbol: osal_unsleepable_lock_deinit */
/* Demangled: osal_unsleepable_lock_deinit */
int osal_unsleepable_lock_deinit(void);

/* Symbol: wmt_lib_dmp_consys_state */
/* Demangled: wmt_lib_dmp_consys_state */
int wmt_lib_dmp_consys_state(void);

/* Symbol: wmt_lib_tm_temp_query */
/* Demangled: wmt_lib_tm_temp_query */
int wmt_lib_tm_temp_query(void);

/* Symbol: apwmt_of_ids */
/* Demangled: apwmt_of_ids */
extern void* apwmt_of_ids;

/* Symbol: gPwrSeqTime */
/* Demangled: gPwrSeqTime */
extern void* gPwrSeqTime;

/* Symbol: osal_memcpy */
/* Demangled: osal_memcpy */
int osal_memcpy(void);

/* Symbol: wmt_ctrl */
/* Demangled: wmt_ctrl */
int wmt_ctrl(void);

/* Symbol: wmt_core_init_script */
/* Demangled: wmt_core_init_script */
int wmt_core_init_script(void);

/* Symbol: wmt_core_ctrl */
/* Demangled: wmt_core_ctrl */
int wmt_core_ctrl(void);

/* Symbol: osal_memset */
/* Demangled: osal_memset */
int osal_memset(void);

/* Symbol: wmt_core_tx */
/* Demangled: wmt_core_tx */
int wmt_core_tx(void);

/* Symbol: wmt_core_rx */
/* Demangled: wmt_core_rx */
int wmt_core_rx(void);

/* Symbol: osal_memcmp */
/* Demangled: osal_memcmp */
int osal_memcmp(void);

/* Symbol: wmt_core_dump_data */
/* Demangled: wmt_core_dump_data */
int wmt_core_dump_data(void);

/* Symbol: mtk_wcn_stp_coredump_flag_get */
/* Demangled: mtk_wcn_stp_coredump_flag_get */
int mtk_wcn_stp_coredump_flag_get(void);

/* Symbol: wmt_ic_ops_mt6628 */
/* Demangled: wmt_ic_ops_mt6628 */
extern void* wmt_ic_ops_mt6628;

/* Symbol: wmt_lib_ps_enable */
/* Demangled: wmt_lib_ps_enable */
int wmt_lib_ps_enable(void);

/* Symbol: mtk_wcn_stp_dbg_dump_package */
/* Demangled: mtk_wcn_stp_dbg_dump_package */
int mtk_wcn_stp_dbg_dump_package(void);

/* Symbol: wmt_lib_ps_ctrl */
/* Demangled: wmt_lib_ps_ctrl */
int wmt_lib_ps_ctrl(void);

/* Symbol: wmt_lib_ps_disable */
/* Demangled: wmt_lib_ps_disable */
int wmt_lib_ps_disable(void);

/* Symbol: wmt_core_reg_rw_raw */
/* Demangled: wmt_core_reg_rw_raw */
int wmt_core_reg_rw_raw(void);

/* Symbol: wmt_conf_set_cfg_file */
/* Demangled: wmt_conf_set_cfg_file */
int wmt_conf_set_cfg_file(void);

/* Symbol: wmt_conf_read_file */
/* Demangled: wmt_conf_read_file */
int wmt_conf_read_file(void);

/* Symbol: osal_strncat */
/* Demangled: osal_strncat */
int osal_strncat(void);

/* Symbol: wmt_dev_patch_get */
/* Demangled: wmt_dev_patch_get */
int wmt_dev_patch_get(void);

/* Symbol: osal_strsep */
/* Demangled: osal_strsep */
int osal_strsep(void);

/* Symbol: osal_strchr */
/* Demangled: osal_strchr */
int osal_strchr(void);

/* Symbol: osal_strcmp */
/* Demangled: osal_strcmp */
int osal_strcmp(void);

/* Symbol: wmt_dev_patch_put */
/* Demangled: wmt_dev_patch_put */
int wmt_dev_patch_put(void);

/* Symbol: wmt_conf_get_cfg */
/* Demangled: wmt_conf_get_cfg */
int wmt_conf_get_cfg(void);

/* Symbol: wmt_conf_deinit */
/* Demangled: wmt_conf_deinit */
int wmt_conf_deinit(void);

/* Symbol: osal_strtol */
/* Demangled: osal_strtol */
int osal_strtol(void);

/* Symbol: osal_snprintf */
/* Demangled: osal_snprintf */
int osal_snprintf(void);

/* Symbol: __crc_mtk_wcn_stp_parser_data */
/* Demangled: __crc_mtk_wcn_stp_parser_data */
extern void* __crc_mtk_wcn_stp_parser_data;

/* Symbol: __crc_mtk_wcn_stp_coredump_start_get */
/* Demangled: __crc_mtk_wcn_stp_coredump_start_get */
extern void* __crc_mtk_wcn_stp_coredump_start_get;

/* Symbol: __crc_mtk_wcn_stp_send_data */
/* Demangled: __crc_mtk_wcn_stp_send_data */
extern void* __crc_mtk_wcn_stp_send_data;

/* Symbol: __crc_mtk_wcn_stp_send_data_raw */
/* Demangled: __crc_mtk_wcn_stp_send_data_raw */
extern void* __crc_mtk_wcn_stp_send_data_raw;

/* Symbol: __crc_mtk_wcn_stp_receive_data */
/* Demangled: __crc_mtk_wcn_stp_receive_data */
extern void* __crc_mtk_wcn_stp_receive_data;

/* Symbol: __crc_mtk_wcn_stp_is_rxqueue_empty */
/* Demangled: __crc_mtk_wcn_stp_is_rxqueue_empty */
extern void* __crc_mtk_wcn_stp_is_rxqueue_empty;

/* Symbol: __crc_mtk_wcn_stp_is_ready */
/* Demangled: __crc_mtk_wcn_stp_is_ready */
extern void* __crc_mtk_wcn_stp_is_ready;

/* Symbol: __crc_mtk_wcn_stp_set_bluez */
/* Demangled: __crc_mtk_wcn_stp_set_bluez */
extern void* __crc_mtk_wcn_stp_set_bluez;

/* Symbol: mtk_wcn_consys_stp_btif_logger_ctrl */
/* Demangled: mtk_wcn_consys_stp_btif_logger_ctrl */
int mtk_wcn_consys_stp_btif_logger_ctrl(void);

/* Symbol: gStpDbgLvl */
/* Demangled: gStpDbgLvl */
extern void* gStpDbgLvl;

/* Symbol: mtk_wcn_consys_stp_btif_open */
/* Demangled: mtk_wcn_consys_stp_btif_open */
int mtk_wcn_consys_stp_btif_open(void);

/* Symbol: mtk_wcn_consys_stp_btif_close */
/* Demangled: mtk_wcn_consys_stp_btif_close */
int mtk_wcn_consys_stp_btif_close(void);

/* Symbol: mtk_wcn_consys_stp_btif_rx_cb_register */
/* Demangled: mtk_wcn_consys_stp_btif_rx_cb_register */
int mtk_wcn_consys_stp_btif_rx_cb_register(void);

/* Symbol: mtk_wcn_consys_stp_btif_tx */
/* Demangled: mtk_wcn_consys_stp_btif_tx */
int mtk_wcn_consys_stp_btif_tx(void);

/* Symbol: mtk_wcn_consys_stp_btif_wakeup */
/* Demangled: mtk_wcn_consys_stp_btif_wakeup */
int mtk_wcn_consys_stp_btif_wakeup(void);

/* Symbol: mtk_wcn_consys_stp_btif_lpbk_ctrl */
/* Demangled: mtk_wcn_consys_stp_btif_lpbk_ctrl */
int mtk_wcn_consys_stp_btif_lpbk_ctrl(void);

/* Symbol: mtk_wcn_stp_dbg_level */
/* Demangled: mtk_wcn_stp_dbg_level */
int mtk_wcn_stp_dbg_level(void);

/* Symbol: stp_do_tx_timeout */
/* Demangled: stp_do_tx_timeout */
int stp_do_tx_timeout(void);

/* Symbol: osal_dump_thread_state */
/* Demangled: osal_dump_thread_state */
int osal_dump_thread_state(void);

/* Symbol: osal_timer_stop */
/* Demangled: osal_timer_stop */
int osal_timer_stop(void);

/* Symbol: osal_timer_start */
/* Demangled: osal_timer_start */
int osal_timer_start(void);

/* Symbol: osal_buffer_dump */
/* Demangled: osal_buffer_dump */
int osal_buffer_dump(void);

/* Symbol: stp_dbg_poll_cpupcr */
/* Demangled: stp_dbg_poll_cpupcr */
int stp_dbg_poll_cpupcr(void);

/* Symbol: stp_notify_btm_dump */
/* Demangled: stp_notify_btm_dump */
int stp_notify_btm_dump(void);

/* Symbol: stp_psm_disable */
/* Demangled: stp_psm_disable */
int stp_psm_disable(void);

/* Symbol: mtk_wcn_stp_is_sdio_mode */
/* Demangled: mtk_wcn_stp_is_sdio_mode */
int mtk_wcn_stp_is_sdio_mode(void);

/* Symbol: stp_send_data_no_ps */
/* Demangled: stp_send_data_no_ps */
int stp_send_data_no_ps(void);

/* Symbol: stp_dbg_log_pkt */
/* Demangled: stp_dbg_log_pkt */
int stp_dbg_log_pkt(void);

/* Symbol: osal_crc16 */
/* Demangled: osal_crc16 */
int osal_crc16(void);

/* Symbol: mtk_wcn_stp_is_uart_mand_mode */
/* Demangled: mtk_wcn_stp_is_uart_mand_mode */
int mtk_wcn_stp_is_uart_mand_mode(void);

/* Symbol: mtk_wcn_stp_is_btif_mand_mode */
/* Demangled: mtk_wcn_stp_is_btif_mand_mode */
int mtk_wcn_stp_is_btif_mand_mode(void);

/* Symbol: mtk_wcn_stp_is_uart_fullset_mode */
/* Demangled: mtk_wcn_stp_is_uart_fullset_mode */
int mtk_wcn_stp_is_uart_fullset_mode(void);

/* Symbol: mtk_wcn_stp_is_btif_fullset_mode */
/* Demangled: mtk_wcn_stp_is_btif_fullset_mode */
int mtk_wcn_stp_is_btif_fullset_mode(void);

/* Symbol: mtk_wcn_stp_init */
/* Demangled: mtk_wcn_stp_init */
int mtk_wcn_stp_init(void);

/* Symbol: osal_timer_create */
/* Demangled: osal_timer_create */
int osal_timer_create(void);

/* Symbol: stp_psm_init */
/* Demangled: stp_psm_init */
int stp_psm_init(void);

/* Symbol: stp_btm_init */
/* Demangled: stp_btm_init */
int stp_btm_init(void);

/* Symbol: stp_dbg_init */
/* Demangled: stp_dbg_init */
int stp_dbg_init(void);

/* Symbol: stp_psm_deinit */
/* Demangled: stp_psm_deinit */
int stp_psm_deinit(void);

/* Symbol: stp_dbg_enable */
/* Demangled: stp_dbg_enable */
int stp_dbg_enable(void);

/* Symbol: stp_btm_notify_stp_retry_wq */
/* Demangled: stp_btm_notify_stp_retry_wq */
int stp_btm_notify_stp_retry_wq(void);

/* Symbol: mtk_wcn_stp_dbg_enable */
/* Demangled: mtk_wcn_stp_dbg_enable */
int mtk_wcn_stp_dbg_enable(void);

/* Symbol: mtk_wcn_stp_deinit */
/* Demangled: mtk_wcn_stp_deinit */
int mtk_wcn_stp_deinit(void);

/* Symbol: stp_dbg_deinit */
/* Demangled: stp_dbg_deinit */
int stp_dbg_deinit(void);

/* Symbol: stp_btm_deinit */
/* Demangled: stp_btm_deinit */
int stp_btm_deinit(void);

/* Symbol: mtk_wcn_stp_btm_get_dmp */
/* Demangled: mtk_wcn_stp_btm_get_dmp */
int mtk_wcn_stp_btm_get_dmp(void);

/* Symbol: stp_dbg_dmp_out */
/* Demangled: stp_dbg_dmp_out */
int stp_dbg_dmp_out(void);

/* Symbol: mtk_wcn_stp_psm_notify_stp */
/* Demangled: mtk_wcn_stp_psm_notify_stp */
int mtk_wcn_stp_psm_notify_stp(void);

/* Symbol: stp_psm_notify_stp */
/* Demangled: stp_psm_notify_stp */
int stp_psm_notify_stp(void);

/* Symbol: mtk_wcn_stp_set_psm_state */
/* Demangled: mtk_wcn_stp_set_psm_state */
int mtk_wcn_stp_set_psm_state(void);

/* Symbol: stp_psm_set_state */
/* Demangled: stp_psm_set_state */
int stp_psm_set_state(void);

/* Symbol: mtk_wcn_stp_psm_enable */
/* Demangled: mtk_wcn_stp_psm_enable */
int mtk_wcn_stp_psm_enable(void);

/* Symbol: stp_psm_enable */
/* Demangled: stp_psm_enable */
int stp_psm_enable(void);

/* Symbol: mtk_wcn_stp_is_ready */
/* Demangled: mtk_wcn_stp_is_ready */
int mtk_wcn_stp_is_ready(void);

/* Symbol: mtk_wcn_stp_is_enable */
/* Demangled: mtk_wcn_stp_is_enable */
int mtk_wcn_stp_is_enable(void);

/* Symbol: mtk_wcn_stp_psm_disable */
/* Demangled: mtk_wcn_stp_psm_disable */
int mtk_wcn_stp_psm_disable(void);

/* Symbol: mtk_wcn_stp_psm_reset */
/* Demangled: mtk_wcn_stp_psm_reset */
int mtk_wcn_stp_psm_reset(void);

/* Symbol: stp_psm_reset */
/* Demangled: stp_psm_reset */
int stp_psm_reset(void);

/* Symbol: mtk_wcn_stp_dbg_disable */
/* Demangled: mtk_wcn_stp_dbg_disable */
int mtk_wcn_stp_dbg_disable(void);

/* Symbol: stp_dbg_disable */
/* Demangled: stp_dbg_disable */
int stp_dbg_disable(void);

/* Symbol: mtk_wcn_stp_dbg_log_ctrl */
/* Demangled: mtk_wcn_stp_dbg_log_ctrl */
int mtk_wcn_stp_dbg_log_ctrl(void);

/* Symbol: stp_dbg_log_ctrl */
/* Demangled: stp_dbg_log_ctrl */
int stp_dbg_log_ctrl(void);

/* Symbol: mtk_wcn_stp_coredump_flag_ctrl */
/* Demangled: mtk_wcn_stp_coredump_flag_ctrl */
int mtk_wcn_stp_coredump_flag_ctrl(void);

/* Symbol: stp_dbg_nl_init */
/* Demangled: stp_dbg_nl_init */
int stp_dbg_nl_init(void);

/* Symbol: stp_dbg_nl_deinit */
/* Demangled: stp_dbg_nl_deinit */
int stp_dbg_nl_deinit(void);

/* Symbol: mtk_wcn_stp_emi_dump_flag_ctrl */
/* Demangled: mtk_wcn_stp_emi_dump_flag_ctrl */
int mtk_wcn_stp_emi_dump_flag_ctrl(void);

/* Symbol: mtk_wcn_stp_emi_dump_flag_get */
/* Demangled: mtk_wcn_stp_emi_dump_flag_get */
int mtk_wcn_stp_emi_dump_flag_get(void);

/* Symbol: mtk_wcn_stp_parser_data */
/* Demangled: mtk_wcn_stp_parser_data */
int mtk_wcn_stp_parser_data(void);

/* Symbol: stp_btm_stop_trigger_assert_timer */
/* Demangled: stp_btm_stop_trigger_assert_timer */
int stp_btm_stop_trigger_assert_timer(void);

/* Symbol: stp_psm_set_sleep_disable */
/* Demangled: stp_psm_set_sleep_disable */
int stp_psm_set_sleep_disable(void);

/* Symbol: osal_strstr */
/* Demangled: osal_strstr */
int osal_strstr(void);

/* Symbol: gStpDbgDbgLevel */
/* Demangled: gStpDbgDbgLevel */
extern void* gStpDbgDbgLevel;

/* Symbol: osal_dbg_assert_aee */
/* Demangled: osal_dbg_assert_aee */
int osal_dbg_assert_aee(void);

/* Symbol: mtk_wcn_sys_if_rx */
/* Demangled: mtk_wcn_sys_if_rx */
int mtk_wcn_sys_if_rx(void);

/* Symbol: stp_btm_notify_wmt_rst_wq */
/* Demangled: stp_btm_notify_wmt_rst_wq */
int stp_btm_notify_wmt_rst_wq(void);

/* Symbol: stp_dbg_dump_num */
/* Demangled: stp_dbg_dump_num */
int stp_dbg_dump_num(void);

/* Symbol: osal_strncmp */
/* Demangled: osal_strncmp */
int osal_strncmp(void);

/* Symbol: stp_psm_set_sleep_enable */
/* Demangled: stp_psm_set_sleep_enable */
int stp_psm_set_sleep_enable(void);

/* Symbol: stp_btm_reset_btm_wq */
/* Demangled: stp_btm_reset_btm_wq */
int stp_btm_reset_btm_wq(void);

/* Symbol: chip_reset_only */
/* Demangled: chip_reset_only */
extern void* chip_reset_only;

/* Symbol: stp_btm_notify_wmt_dmp_wq */
/* Demangled: stp_btm_notify_wmt_dmp_wq */
int stp_btm_notify_wmt_dmp_wq(void);

/* Symbol: gCrcErrorCount */
/* Demangled: gCrcErrorCount */
extern void* gCrcErrorCount;

/* Symbol: mtk_wcn_stp_enable */
/* Demangled: mtk_wcn_stp_enable */
int mtk_wcn_stp_enable(void);

/* Symbol: mtk_wcn_stp_coredump_start_ctrl */
/* Demangled: mtk_wcn_stp_coredump_start_ctrl */
int mtk_wcn_stp_coredump_start_ctrl(void);

/* Symbol: mtk_wcn_stp_set_wmt_trg_assert */
/* Demangled: mtk_wcn_stp_set_wmt_trg_assert */
int mtk_wcn_stp_set_wmt_trg_assert(void);

/* Symbol: wmt_lib_print_wmtd_op_history */
/* Demangled: wmt_lib_print_wmtd_op_history */
int wmt_lib_print_wmtd_op_history(void);

/* Symbol: wmt_lib_print_worker_op_history */
/* Demangled: wmt_lib_print_worker_op_history */
int wmt_lib_print_worker_op_history(void);

/* Symbol: stp_psm_print_op_history */
/* Demangled: stp_psm_print_op_history */
int stp_psm_print_op_history(void);

/* Symbol: stp_btm_print_op_history */
/* Demangled: stp_btm_print_op_history */
int stp_btm_print_op_history(void);

/* Symbol: stp_dbg_dmp_print */
/* Demangled: stp_dbg_dmp_print */
int stp_dbg_dmp_print(void);

/* Symbol: stp_sdio_txdbg_dump */
/* Demangled: stp_sdio_txdbg_dump */
int stp_sdio_txdbg_dump(void);

/* Symbol: mtk_wcn_stp_coredump_start_get */
/* Demangled: mtk_wcn_stp_coredump_start_get */
int mtk_wcn_stp_coredump_start_get(void);

/* Symbol: mtk_wcn_stp_get_wmt_trg_assert */
/* Demangled: mtk_wcn_stp_get_wmt_trg_assert */
int mtk_wcn_stp_get_wmt_trg_assert(void);

/* Symbol: mtk_wcn_stp_ready */
/* Demangled: mtk_wcn_stp_ready */
int mtk_wcn_stp_ready(void);

/* Symbol: stp_psm_is_disable */
/* Demangled: stp_psm_is_disable */
int stp_psm_is_disable(void);

/* Symbol: mtk_wcn_stp_set_wmt_last_close */
/* Demangled: mtk_wcn_stp_set_wmt_last_close */
int mtk_wcn_stp_set_wmt_last_close(void);

/* Symbol: mtk_wcn_stp_is_wmt_last_close */
/* Demangled: mtk_wcn_stp_is_wmt_last_close */
int mtk_wcn_stp_is_wmt_last_close(void);

/* Symbol: mtk_wcn_stp_send_data */
/* Demangled: mtk_wcn_stp_send_data */
int mtk_wcn_stp_send_data(void);

/* Symbol: osal_ftrace_print */
/* Demangled: osal_ftrace_print */
int osal_ftrace_print(void);

/* Symbol: stp_psm_disable_by_tx_rx_density */
/* Demangled: stp_psm_disable_by_tx_rx_density */
int stp_psm_disable_by_tx_rx_density(void);

/* Symbol: stp_psm_is_to_block_traffic */
/* Demangled: stp_psm_is_to_block_traffic */
int stp_psm_is_to_block_traffic(void);

/* Symbol: stp_psm_notify_wmt_wakeup */
/* Demangled: stp_psm_notify_wmt_wakeup */
int stp_psm_notify_wmt_wakeup(void);

/* Symbol: stp_psm_thread_lock_aquire */
/* Demangled: stp_psm_thread_lock_aquire */
int stp_psm_thread_lock_aquire(void);

/* Symbol: stp_psm_hold_data */
/* Demangled: stp_psm_hold_data */
int stp_psm_hold_data(void);

/* Symbol: stp_psm_thread_lock_release */
/* Demangled: stp_psm_thread_lock_release */
int stp_psm_thread_lock_release(void);

/* Symbol: stp_psm_has_pending_data */
/* Demangled: stp_psm_has_pending_data */
int stp_psm_has_pending_data(void);

/* Symbol: stp_psm_release_data */
/* Demangled: stp_psm_release_data */
int stp_psm_release_data(void);

/* Symbol: stp_psm_is_quick_ps_support */
/* Demangled: stp_psm_is_quick_ps_support */
int stp_psm_is_quick_ps_support(void);

/* Symbol: stp_psm_notify_wmt_sleep */
/* Demangled: stp_psm_notify_wmt_sleep */
int stp_psm_notify_wmt_sleep(void);

/* Symbol: mtk_wcn_stp_send_data_raw */
/* Demangled: mtk_wcn_stp_send_data_raw */
int mtk_wcn_stp_send_data_raw(void);

/* Symbol: mtk_wcn_stp_receive_data */
/* Demangled: mtk_wcn_stp_receive_data */
int mtk_wcn_stp_receive_data(void);

/* Symbol: mtk_wcn_stp_is_rxqueue_empty */
/* Demangled: mtk_wcn_stp_is_rxqueue_empty */
int mtk_wcn_stp_is_rxqueue_empty(void);

/* Symbol: mtk_wcn_stp_set_mode */
/* Demangled: mtk_wcn_stp_set_mode */
int mtk_wcn_stp_set_mode(void);

/* Symbol: mtk_wcn_stp_inband_reset */
/* Demangled: mtk_wcn_stp_inband_reset */
int mtk_wcn_stp_inband_reset(void);

/* Symbol: mtk_wcn_stp_debug_ctrl */
/* Demangled: mtk_wcn_stp_debug_ctrl */
int mtk_wcn_stp_debug_ctrl(void);

/* Symbol: mtk_wcn_stp_test_cmd */
/* Demangled: mtk_wcn_stp_test_cmd */
int mtk_wcn_stp_test_cmd(void);

/* Symbol: mtk_wcn_stp_flush_context */
/* Demangled: mtk_wcn_stp_flush_context */
int mtk_wcn_stp_flush_context(void);

/* Symbol: mtk_wcn_stp_flush_rx_queue */
/* Demangled: mtk_wcn_stp_flush_rx_queue */
int mtk_wcn_stp_flush_rx_queue(void);

/* Symbol: mtk_wcn_stp_set_bluez */
/* Demangled: mtk_wcn_stp_set_bluez */
int mtk_wcn_stp_set_bluez(void);

/* Symbol: mtk_wcn_stp_set_dbg_mode */
/* Demangled: mtk_wcn_stp_set_dbg_mode */
int mtk_wcn_stp_set_dbg_mode(void);

/* Symbol: mtk_wcn_stp_set_auto_rst */
/* Demangled: mtk_wcn_stp_set_auto_rst */
int mtk_wcn_stp_set_auto_rst(void);

/* Symbol: mtk_wcn_stp_open_btif */
/* Demangled: mtk_wcn_stp_open_btif */
int mtk_wcn_stp_open_btif(void);

/* Symbol: mtk_wcn_stp_close_btif */
/* Demangled: mtk_wcn_stp_close_btif */
int mtk_wcn_stp_close_btif(void);

/* Symbol: mtk_wcn_stp_rxcb_register */
/* Demangled: mtk_wcn_stp_rxcb_register */
int mtk_wcn_stp_rxcb_register(void);

/* Symbol: mtk_wcn_stp_tx */
/* Demangled: mtk_wcn_stp_tx */
int mtk_wcn_stp_tx(void);

/* Symbol: mtk_wcn_stp_wakeup_consys */
/* Demangled: mtk_wcn_stp_wakeup_consys */
int mtk_wcn_stp_wakeup_consys(void);

/* Symbol: mtk_wcn_stp_dpidle_ctrl */
/* Demangled: mtk_wcn_stp_dpidle_ctrl */
int mtk_wcn_stp_dpidle_ctrl(void);

/* Symbol: mtk_wcn_consys_stp_btif_dpidle_ctrl */
/* Demangled: mtk_wcn_consys_stp_btif_dpidle_ctrl */
int mtk_wcn_consys_stp_btif_dpidle_ctrl(void);

/* Symbol: mtk_wcn_stp_notify_sleep_for_thermal */
/* Demangled: mtk_wcn_stp_notify_sleep_for_thermal */
int mtk_wcn_stp_notify_sleep_for_thermal(void);

/* Symbol: stp_psm_sleep_for_thermal */
/* Demangled: stp_psm_sleep_for_thermal */
int stp_psm_sleep_for_thermal(void);

/* Symbol: mtk_wcn_stp_lpbk_ctrl */
/* Demangled: mtk_wcn_stp_lpbk_ctrl */
int mtk_wcn_stp_lpbk_ctrl(void);

/* Symbol: mtk_wcn_stp_logger_ctrl */
/* Demangled: mtk_wcn_stp_logger_ctrl */
int mtk_wcn_stp_logger_ctrl(void);

/* Symbol: mtk_wcn_stp_ctx_save */
/* Demangled: mtk_wcn_stp_ctx_save */
int mtk_wcn_stp_ctx_save(void);

/* Symbol: mtk_wcn_stp_ctx_restore */
/* Demangled: mtk_wcn_stp_ctx_restore */
int mtk_wcn_stp_ctx_restore(void);

/* Symbol: mtk_wcn_stp_wmt_trg_assert */
/* Demangled: mtk_wcn_stp_wmt_trg_assert */
int mtk_wcn_stp_wmt_trg_assert(void);

/* Symbol: stp_notify_btm_do_fw_assert */
/* Demangled: stp_notify_btm_do_fw_assert */
int stp_notify_btm_do_fw_assert(void);

/* Symbol: mtk_wcn_stp_assert_timeout_handle */
/* Demangled: mtk_wcn_stp_assert_timeout_handle */
int mtk_wcn_stp_assert_timeout_handle(void);

/* Symbol: stp_dbg_start_emi_dump */
/* Demangled: stp_dbg_start_emi_dump */
int stp_dbg_start_emi_dump(void);

/* Symbol: mtk_wcn_stp_coredump_timeout_handle */
/* Demangled: mtk_wcn_stp_coredump_timeout_handle */
int mtk_wcn_stp_coredump_timeout_handle(void);

/* Symbol: mtk_wcn_stp_dbg_pkt_log */
/* Demangled: mtk_wcn_stp_dbg_pkt_log */
int mtk_wcn_stp_dbg_pkt_log(void);

/* Symbol: mtk_stp_sdio_retry_flag_ctrl */
/* Demangled: mtk_stp_sdio_retry_flag_ctrl */
int mtk_stp_sdio_retry_flag_ctrl(void);

/* Symbol: wmt_dbg_sdio_retry_ctrl */
/* Demangled: wmt_dbg_sdio_retry_ctrl */
extern void* wmt_dbg_sdio_retry_ctrl;

/* Symbol: stp_sdio_retry_flag_ctrl */
/* Demangled: stp_sdio_retry_flag_ctrl */
int stp_sdio_retry_flag_ctrl(void);

/* Symbol: mtk_stp_dbg_sdio_retry_flag_ctrl */
/* Demangled: mtk_stp_dbg_sdio_retry_flag_ctrl */
int mtk_stp_dbg_sdio_retry_flag_ctrl(void);

/* Symbol: mtk_stp_sdio_retry_flag_get */
/* Demangled: mtk_stp_sdio_retry_flag_get */
int mtk_stp_sdio_retry_flag_get(void);

/* Symbol: stp_sdio_retry_flag_get */
/* Demangled: stp_sdio_retry_flag_get */
int stp_sdio_retry_flag_get(void);

/* Symbol: mtk_stp_dump_sdio_register */
/* Demangled: mtk_stp_dump_sdio_register */
int mtk_stp_dump_sdio_register(void);

/* Symbol: stp_sdio_dump_register */
/* Demangled: stp_sdio_dump_register */
int stp_sdio_dump_register(void);

/* Symbol: mtk_stp_dbg_dmp_append */
/* Demangled: mtk_stp_dbg_dmp_append */
int mtk_stp_dbg_dmp_append(void);

/* Symbol: stp_dbg_dmp_append */
/* Demangled: stp_dbg_dmp_append */
int stp_dbg_dmp_append(void);

/* Symbol: mtk_stp_notify_emi_dump_end */
/* Demangled: mtk_stp_notify_emi_dump_end */
int mtk_stp_notify_emi_dump_end(void);

/* Symbol: stp_btm_notify_emi_dump_end */
/* Demangled: stp_btm_notify_emi_dump_end */
int stp_btm_notify_emi_dump_end(void);

/* Symbol: mtk_stp_check_rx_has_pending_data */
/* Demangled: mtk_stp_check_rx_has_pending_data */
int mtk_stp_check_rx_has_pending_data(void);

/* Symbol: mtk_stp_rx_thread_get */
/* Demangled: mtk_stp_rx_thread_get */
int mtk_stp_rx_thread_get(void);

/* Symbol: mtk_wcn_stp_assert_flow_ctrl */
/* Demangled: mtk_wcn_stp_assert_flow_ctrl */
int mtk_wcn_stp_assert_flow_ctrl(void);

/* Symbol: mtk_wcn_stp_assert_flow_get */
/* Demangled: mtk_wcn_stp_assert_flow_get */
int mtk_wcn_stp_assert_flow_get(void);

/* Symbol: mtk_wcn_stp_set_support_gpsl5 */
/* Demangled: mtk_wcn_stp_set_support_gpsl5 */
int mtk_wcn_stp_set_support_gpsl5(void);

/* Symbol: mtk_wcn_stp_is_support_gpsl5 */
/* Demangled: mtk_wcn_stp_is_support_gpsl5 */
int mtk_wcn_stp_is_support_gpsl5(void);

/* Symbol: stp_notify_btm_handle_wmt_lte_coex */
/* Demangled: stp_notify_btm_handle_wmt_lte_coex */
int stp_notify_btm_handle_wmt_lte_coex(void);

/* Symbol: mtk_wcn_consys_stp_btif_parser_wmt_evt */
/* Demangled: mtk_wcn_consys_stp_btif_parser_wmt_evt */
int mtk_wcn_consys_stp_btif_parser_wmt_evt(void);

/* Symbol: wmt_ctrl_tx_ex */
/* Demangled: wmt_ctrl_tx_ex */
int wmt_ctrl_tx_ex(void);

/* Symbol: wmt_ctrl_ul_cmd */
/* Demangled: wmt_ctrl_ul_cmd */
int wmt_ctrl_ul_cmd(void);

/* Symbol: osal_test_and_set_bit */
/* Demangled: osal_test_and_set_bit */
int osal_test_and_set_bit(void);

/* Symbol: osal_signal_init */
/* Demangled: osal_signal_init */
int osal_signal_init(void);

/* Symbol: osal_strncpy */
/* Demangled: osal_strncpy */
int osal_strncpy(void);

/* Symbol: osal_trigger_event */
/* Demangled: osal_trigger_event */
int osal_trigger_event(void);

/* Symbol: osal_wait_for_signal_timeout */
/* Demangled: osal_wait_for_signal_timeout */
int osal_wait_for_signal_timeout(void);

/* Symbol: osal_test_and_clear_bit */
/* Demangled: osal_test_and_clear_bit */
int osal_test_and_clear_bit(void);

/* Symbol: mtk_wcn_stp_register_event_cb */
/* Demangled: mtk_wcn_stp_register_event_cb */
int mtk_wcn_stp_register_event_cb(void);

/* Symbol: osal_clear_bit */
/* Demangled: osal_clear_bit */
int osal_clear_bit(void);

/* Symbol: wmt_dev_rx_event_cb */
/* Demangled: wmt_dev_rx_event_cb */
int wmt_dev_rx_event_cb(void);

/* Symbol: osal_set_bit */
/* Demangled: osal_set_bit */
int osal_set_bit(void);

/* Symbol: mtk_wcn_hif_sdio_wmt_control */
/* Demangled: mtk_wcn_hif_sdio_wmt_control */
int mtk_wcn_hif_sdio_wmt_control(void);

/* Symbol: osal_thread_sched_mark */
/* Demangled: osal_thread_sched_mark */
int osal_thread_sched_mark(void);

/* Symbol: wmt_dev_rx_timeout */
/* Demangled: wmt_dev_rx_timeout */
int wmt_dev_rx_timeout(void);

/* Symbol: osal_thread_sched_unmark */
/* Demangled: osal_thread_sched_unmark */
int osal_thread_sched_unmark(void);

/* Symbol: wmt_dev_is_close */
/* Demangled: wmt_dev_is_close */
int wmt_dev_is_close(void);

/* Symbol: stp_dbg_set_version_info */
/* Demangled: stp_dbg_set_version_info */
int stp_dbg_set_version_info(void);

/* Symbol: wmt_dev_send_cmd_to_daemon */
/* Demangled: wmt_dev_send_cmd_to_daemon */
int wmt_dev_send_cmd_to_daemon(void);

/* Symbol: wmt_lib_set_host_assert_info */
/* Demangled: wmt_lib_set_host_assert_info */
int wmt_lib_set_host_assert_info(void);

/* Symbol: stp_dbg_set_keyword */
/* Demangled: stp_dbg_set_keyword */
int stp_dbg_set_keyword(void);

/* Symbol: wmt_core_func_ctrl_cmd */
/* Demangled: wmt_core_func_ctrl_cmd */
int wmt_core_func_ctrl_cmd(void);

/* Symbol: gBtWifiGpsState */
/* Demangled: gBtWifiGpsState */
extern void* gBtWifiGpsState;

/* Symbol: gGpsFmState */
/* Demangled: gGpsFmState */
extern void* gGpsFmState;

/* Symbol: wmt_func_gps_pre_ctrl */
/* Demangled: wmt_func_gps_pre_ctrl */
int wmt_func_gps_pre_ctrl(void);

/* Symbol: mtk_wcn_wlan_probe */
/* Demangled: mtk_wcn_wlan_probe */
extern void* mtk_wcn_wlan_probe;

/* Symbol: gWifiProbed */
/* Demangled: gWifiProbed */
extern void* gWifiProbed;

/* Symbol: mtk_wcn_wlan_remove */
/* Demangled: mtk_wcn_wlan_remove */
extern void* mtk_wcn_wlan_remove;

/* Symbol: wmt_func_bt_ctrl */
/* Demangled: wmt_func_bt_ctrl */
int wmt_func_bt_ctrl(void);

/* Symbol: wmt_func_ant_ctrl */
/* Demangled: wmt_func_ant_ctrl */
int wmt_func_ant_ctrl(void);

/* Symbol: wmt_func_gps_ctrl */
/* Demangled: wmt_func_gps_ctrl */
int wmt_func_gps_ctrl(void);

/* Symbol: gCmbPinCtrl */
/* Demangled: gCmbPinCtrl */
extern void* gCmbPinCtrl;

/* Symbol: mtk_wmt_get_gps_lna_pin_num */
/* Demangled: mtk_wmt_get_gps_lna_pin_num */
int mtk_wmt_get_gps_lna_pin_num(void);

/* Symbol: wmt_func_gps_pre_on */
/* Demangled: wmt_func_gps_pre_on */
int wmt_func_gps_pre_on(void);

/* Symbol: wmt_func_gps_pre_off */
/* Demangled: wmt_func_gps_pre_off */
int wmt_func_gps_pre_off(void);

/* Symbol: wmt_func_gpsl5_ctrl */
/* Demangled: wmt_func_gpsl5_ctrl */
int wmt_func_gpsl5_ctrl(void);

/* Symbol: wmt_func_fm_ctrl */
/* Demangled: wmt_func_fm_ctrl */
int wmt_func_fm_ctrl(void);

/* Symbol: wmt_func_wifi_ctrl */
/* Demangled: wmt_func_wifi_ctrl */
int wmt_func_wifi_ctrl(void);

/* Symbol: wmt_func_bt_ops */
/* Demangled: wmt_func_bt_ops */
extern void* wmt_func_bt_ops;

/* Symbol: wmt_func_fm_ops */
/* Demangled: wmt_func_fm_ops */
extern void* wmt_func_fm_ops;

/* Symbol: wmt_func_gps_ops */
/* Demangled: wmt_func_gps_ops */
extern void* wmt_func_gps_ops;

/* Symbol: wmt_func_gpsl5_ops */
/* Demangled: wmt_func_gpsl5_ops */
extern void* wmt_func_gpsl5_ops;

/* Symbol: wmt_func_wifi_ops */
/* Demangled: wmt_func_wifi_ops */
extern void* wmt_func_wifi_ops;

/* Symbol: wmt_func_ant_ops */
/* Demangled: wmt_func_ant_ops */
extern void* wmt_func_ant_ops;

/* Symbol: eediPinOhRegs */
/* Demangled: eediPinOhRegs */
extern void* eediPinOhRegs;

/* Symbol: eediPinOlRegs */
/* Demangled: eediPinOlRegs */
extern void* eediPinOlRegs;

/* Symbol: eedoPinOhRegs */
/* Demangled: eedoPinOhRegs */
extern void* eedoPinOhRegs;

/* Symbol: eedoPinOlRegs */
/* Demangled: eedoPinOlRegs */
extern void* eedoPinOlRegs;

/* Symbol: gsyncPinOnRegs */
/* Demangled: gsyncPinOnRegs */
extern void* gsyncPinOnRegs;

/* Symbol: gsyncPinOffRegs */
/* Demangled: gsyncPinOffRegs */
extern void* gsyncPinOffRegs;

/* Symbol: wmt_core_init */
/* Demangled: wmt_core_init */
int wmt_core_init(void);

/* Symbol: g_wifi_on_off_ready */
/* Demangled: g_wifi_on_off_ready */
extern void* g_wifi_on_off_ready;

/* Symbol: wmt_core_deinit */
/* Demangled: wmt_core_deinit */
int wmt_core_deinit(void);

/* Symbol: wmt_core_rx_flush */
/* Demangled: wmt_core_rx_flush */
int wmt_core_rx_flush(void);

/* Symbol: wmt_core_opid_handler */
/* Demangled: wmt_core_opid_handler */
int wmt_core_opid_handler(void);

/* Symbol: wmt_core_opid */
/* Demangled: wmt_core_opid */
int wmt_core_opid(void);

/* Symbol: wmt_core_init_script_retry */
/* Demangled: wmt_core_init_script_retry */
int wmt_core_init_script_retry(void);

/* Symbol: wmt_core_get_drv_status */
/* Demangled: wmt_core_get_drv_status */
int wmt_core_get_drv_status(void);

/* Symbol: wmt_core_patch_check */
/* Demangled: wmt_core_patch_check */
int wmt_core_patch_check(void);

/* Symbol: wmt_core_is_quick_ps_support */
/* Demangled: wmt_core_is_quick_ps_support */
int wmt_core_is_quick_ps_support(void);

/* Symbol: wmt_core_get_aee_dump_flag */
/* Demangled: wmt_core_get_aee_dump_flag */
int wmt_core_get_aee_dump_flag(void);

/* Symbol: wmt_core_trigger_stp_assert */
/* Demangled: wmt_core_trigger_stp_assert */
int wmt_core_trigger_stp_assert(void);

/* Symbol: wmt_lib_trigger_reset */
/* Demangled: wmt_lib_trigger_reset */
int wmt_lib_trigger_reset(void);

/* Symbol: wmt_core_set_coredump_state */
/* Demangled: wmt_core_set_coredump_state */
int wmt_core_set_coredump_state(void);

/* Symbol: wmt_core_set_flag_for_test */
/* Demangled: wmt_core_set_flag_for_test */
int wmt_core_set_flag_for_test(void);

/* Symbol: wmt_core_get_flag_for_test */
/* Demangled: wmt_core_get_flag_for_test */
int wmt_core_get_flag_for_test(void);

/* Symbol: wmt_get_gen_conf_pointer */
/* Demangled: wmt_get_gen_conf_pointer */
int wmt_get_gen_conf_pointer(void);

/* Symbol: wmt_core_set_blank_status */
/* Demangled: wmt_core_set_blank_status */
int wmt_core_set_blank_status(void);

/* Symbol: wmt_core_get_blank_status */
/* Demangled: wmt_core_get_blank_status */
int wmt_core_get_blank_status(void);

/* Symbol: wmt_blank_status_ctrl */
/* Demangled: wmt_blank_status_ctrl */
int wmt_blank_status_ctrl(void);

/* Symbol: wmt_lib_set_blank_status */
/* Demangled: wmt_lib_set_blank_status */
int wmt_lib_set_blank_status(void);

/* Symbol: wmt_dev_get_blank_state */
/* Demangled: wmt_dev_get_blank_state */
int wmt_dev_get_blank_state(void);

/* Symbol: g_pwr_off_flag */
/* Demangled: g_pwr_off_flag */
extern void* g_pwr_off_flag;

/* Symbol: wmt_lib_power_lock_aquire */
/* Demangled: wmt_lib_power_lock_aquire */
int wmt_lib_power_lock_aquire(void);

/* Symbol: wmt_lib_power_lock_release */
/* Demangled: wmt_lib_power_lock_release */
int wmt_lib_power_lock_release(void);

/* Symbol: mtk_wcn_set_connsys_power_off_flag */
/* Demangled: mtk_wcn_set_connsys_power_off_flag */
int mtk_wcn_set_connsys_power_off_flag(void);

/* Symbol: gpWmtFuncOps */
/* Demangled: gpWmtFuncOps */
extern void* gpWmtFuncOps;

/* Symbol: wmt_lib_get_current_op */
/* Demangled: wmt_lib_get_current_op */
int wmt_lib_get_current_op(void);

/* Symbol: wmt_lib_put_worker_op */
/* Demangled: wmt_lib_put_worker_op */
int wmt_lib_put_worker_op(void);

/* Symbol: wmt_lib_wlan_lock_aquire */
/* Demangled: wmt_lib_wlan_lock_aquire */
int wmt_lib_wlan_lock_aquire(void);

/* Symbol: wmt_lib_wlan_lock_release */
/* Demangled: wmt_lib_wlan_lock_release */
int wmt_lib_wlan_lock_release(void);

/* Symbol: mtk_wcn_wmt_system_state_reset */
/* Demangled: mtk_wcn_wmt_system_state_reset */
int mtk_wcn_wmt_system_state_reset(void);

/* Symbol: wmt_lib_idc_lock_aquire */
/* Demangled: wmt_lib_idc_lock_aquire */
int wmt_lib_idc_lock_aquire(void);

/* Symbol: wmt_lib_idc_lock_release */
/* Demangled: wmt_lib_idc_lock_release */
int wmt_lib_idc_lock_release(void);

/* Symbol: connsys_dedicated_log_get_utc_time */
/* Demangled: connsys_dedicated_log_get_utc_time */
int connsys_dedicated_log_get_utc_time(void);

/* Symbol: wmt_lib_try_pwr_off */
/* Demangled: wmt_lib_try_pwr_off */
int wmt_lib_try_pwr_off(void);

/* Symbol: wmt_lib_wlan_lock_trylock */
/* Demangled: wmt_lib_wlan_lock_trylock */
int wmt_lib_wlan_lock_trylock(void);

/* Symbol: wmt_lib_co_clock_flag_get */
/* Demangled: wmt_lib_co_clock_flag_get */
int wmt_lib_co_clock_flag_get(void);

/* Symbol: wmt_lib_get_icinfo */
/* Demangled: wmt_lib_get_icinfo */
int wmt_lib_get_icinfo(void);

/* Symbol: wmt_ic_ops_mt6620 */
/* Demangled: wmt_ic_ops_mt6620 */
extern void* wmt_ic_ops_mt6620;

/* Symbol: wmt_ic_ops_soc */
/* Demangled: wmt_ic_ops_soc */
extern void* wmt_ic_ops_soc;

/* Symbol: wmt_ic_ops_mt6630 */
/* Demangled: wmt_ic_ops_mt6630 */
extern void* wmt_ic_ops_mt6630;

/* Symbol: wmt_ic_ops_mt6632 */
/* Demangled: wmt_ic_ops_mt6632 */
extern void* wmt_ic_ops_mt6632;

/* Symbol: mtk_wcn_stp_psm_dbg_level */
/* Demangled: mtk_wcn_stp_psm_dbg_level */
int mtk_wcn_stp_psm_dbg_level(void);

/* Symbol: gPsmDbgLevel */
/* Demangled: gPsmDbgLevel */
extern void* gPsmDbgLevel;

/* Symbol: _stp_psm_get_free_op */
/* Demangled: _stp_psm_get_free_op */
int _stp_psm_get_free_op(void);

/* Symbol: _stp_psm_put_act_op */
/* Demangled: _stp_psm_put_act_op */
int _stp_psm_put_act_op(void);

/* Symbol: g_stp_psm_opid_dbg */
/* Demangled: g_stp_psm_opid_dbg */
extern void* g_stp_psm_opid_dbg;

/* Symbol: osal_get_local_time */
/* Demangled: osal_get_local_time */
int osal_get_local_time(void);

/* Symbol: osal_do_gettimeofday */
/* Demangled: osal_do_gettimeofday */
int osal_do_gettimeofday(void);

/* Symbol: stp_psm */
/* Demangled: stp_psm */
extern void* stp_psm;

/* Symbol: osal_opq_dump_locked */
/* Demangled: osal_opq_dump_locked */
int osal_opq_dump_locked(void);

/* Symbol: _stp_psm_hold_data */
/* Demangled: _stp_psm_hold_data */
int _stp_psm_hold_data(void);

/* Symbol: osal_fifo_len */
/* Demangled: osal_fifo_len */
int osal_fifo_len(void);

/* Symbol: osal_fifo_reset */
/* Demangled: osal_fifo_reset */
int osal_fifo_reset(void);

/* Symbol: osal_fifo_in */
/* Demangled: osal_fifo_in */
int osal_fifo_in(void);

/* Symbol: _stp_psm_has_pending_data */
/* Demangled: _stp_psm_has_pending_data */
int _stp_psm_has_pending_data(void);

/* Symbol: wmt_lib_ps_set_idle_time */
/* Demangled: wmt_lib_ps_set_idle_time */
int wmt_lib_ps_set_idle_time(void);

/* Symbol: osal_timer_modify */
/* Demangled: osal_timer_modify */
int osal_timer_modify(void);

/* Symbol: stp_psm_start_monitor */
/* Demangled: stp_psm_start_monitor */
int stp_psm_start_monitor(void);

/* Symbol: osal_printtimeofday */
/* Demangled: osal_printtimeofday */
int osal_printtimeofday(void);

/* Symbol: stp_psm_do_wakeup */
/* Demangled: stp_psm_do_wakeup */
int stp_psm_do_wakeup(void);

/* Symbol: osal_timer_stop_sync */
/* Demangled: osal_timer_stop_sync */
int osal_timer_stop_sync(void);

/* Symbol: mtk_wcn_wmt_dump_wmtd_backtrace */
/* Demangled: mtk_wcn_wmt_dump_wmtd_backtrace */
int mtk_wcn_wmt_dump_wmtd_backtrace(void);

/* Symbol: osal_elapsed_us */
/* Demangled: osal_elapsed_us */
int osal_elapsed_us(void);

/* Symbol: g_stp_psm_dbg */
/* Demangled: g_stp_psm_dbg */
extern void* g_stp_psm_dbg;

/* Symbol: osal_fifo_out */
/* Demangled: osal_fifo_out */
int osal_fifo_out(void);

/* Symbol: stp_psm_i */
/* Demangled: stp_psm_i */
extern void* stp_psm_i;

/* Symbol: osal_thread_show_stack */
/* Demangled: osal_thread_show_stack */
int osal_thread_show_stack(void);

/* Symbol: stp_psm_check_sleep_enable */
/* Demangled: stp_psm_check_sleep_enable */
int stp_psm_check_sleep_enable(void);

/* Symbol: osal_op_history_print */
/* Demangled: osal_op_history_print */
int osal_op_history_print(void);

/* Symbol: wmt_lib_ps_stp_cb */
/* Demangled: wmt_lib_ps_stp_cb */
int wmt_lib_ps_stp_cb(void);

/* Symbol: wmt_lib_is_quick_ps_support */
/* Demangled: wmt_lib_is_quick_ps_support */
int wmt_lib_is_quick_ps_support(void);

/* Symbol: wmt_lib_update_fw_patch_chip_rst */
/* Demangled: wmt_lib_update_fw_patch_chip_rst */
int wmt_lib_update_fw_patch_chip_rst(void);

/* Symbol: osal_fifo_init */
/* Demangled: osal_fifo_init */
int osal_fifo_init(void);

/* Symbol: osal_event_init */
/* Demangled: osal_event_init */
int osal_event_init(void);

/* Symbol: osal_op_history_init */
/* Demangled: osal_op_history_init */
int osal_op_history_init(void);

/* Symbol: osal_thread_create */
/* Demangled: osal_thread_create */
int osal_thread_create(void);

/* Symbol: osal_thread_run */
/* Demangled: osal_thread_run */
int osal_thread_run(void);

/* Symbol: osal_thread_destroy */
/* Demangled: osal_thread_destroy */
int osal_thread_destroy(void);

/* Symbol: osal_fifo_deinit */
/* Demangled: osal_fifo_deinit */
int osal_fifo_deinit(void);

/* Symbol: osal_wait_for_event */
/* Demangled: osal_wait_for_event */
int osal_wait_for_event(void);

/* Symbol: osal_thread_should_stop */
/* Demangled: osal_thread_should_stop */
int osal_thread_should_stop(void);

/* Symbol: osal_op_history_save */
/* Demangled: osal_op_history_save */
int osal_op_history_save(void);

/* Symbol: osal_op_get_id */
/* Demangled: osal_op_get_id */
int osal_op_get_id(void);

/* Symbol: osal_op_is_wait_for_signal */
/* Demangled: osal_op_is_wait_for_signal */
int osal_op_is_wait_for_signal(void);

/* Symbol: osal_op_raise_signal */
/* Demangled: osal_op_raise_signal */
int osal_op_raise_signal(void);

/* Symbol: osal_wait_for_event_timeout */
/* Demangled: osal_wait_for_event_timeout */
int osal_wait_for_event_timeout(void);

/* Symbol: stp_dbg_trigger_collect_ftrace */
/* Demangled: stp_dbg_trigger_collect_ftrace */
int stp_dbg_trigger_collect_ftrace(void);

/* Symbol: wmt_lib_get_need_update_patch_version */
/* Demangled: wmt_lib_get_need_update_patch_version */
int wmt_lib_get_need_update_patch_version(void);

/* Symbol: wmt_lib_set_need_update_patch_version */
/* Demangled: wmt_lib_set_need_update_patch_version */
int wmt_lib_set_need_update_patch_version(void);

/* Symbol: wmt_lib_get_patch_info */
/* Demangled: wmt_lib_get_patch_info */
int wmt_lib_get_patch_info(void);

/* Symbol: osal_memcpy_toio */
/* Demangled: osal_memcpy_toio */
int osal_memcpy_toio(void);

/* Symbol: mtk_wcn_wlan_emi_mpu_set_protection */
/* Demangled: mtk_wcn_wlan_emi_mpu_set_protection */
extern void* mtk_wcn_wlan_emi_mpu_set_protection;

/* Symbol: osal_memcpy_fromio */
/* Demangled: osal_memcpy_fromio */
int osal_memcpy_fromio(void);

/* Symbol: wmt_lib_mpu_lock_aquire */
/* Demangled: wmt_lib_mpu_lock_aquire */
int wmt_lib_mpu_lock_aquire(void);

/* Symbol: wmt_lib_mpu_lock_release */
/* Demangled: wmt_lib_mpu_lock_release */
int wmt_lib_mpu_lock_release(void);

/* Symbol: __crc_wmt_lib_get_fwinfor_from_emi */
/* Demangled: __crc_wmt_lib_get_fwinfor_from_emi */
extern void* __crc_wmt_lib_get_fwinfor_from_emi;

/* Symbol: osal_trylock_sleepable_lock */
/* Demangled: osal_trylock_sleepable_lock */
int osal_trylock_sleepable_lock(void);

/* Symbol: wmt_lib_psm_lock_aquire */
/* Demangled: wmt_lib_psm_lock_aquire */
int wmt_lib_psm_lock_aquire(void);

/* Symbol: wmt_lib_psm_lock_release */
/* Demangled: wmt_lib_psm_lock_release */
int wmt_lib_psm_lock_release(void);

/* Symbol: wmt_lib_psm_lock_trylock */
/* Demangled: wmt_lib_psm_lock_trylock */
int wmt_lib_psm_lock_trylock(void);

/* Symbol: wmt_lib_assert_lock_aquire */
/* Demangled: wmt_lib_assert_lock_aquire */
int wmt_lib_assert_lock_aquire(void);

/* Symbol: wmt_lib_assert_lock_release */
/* Demangled: wmt_lib_assert_lock_release */
int wmt_lib_assert_lock_release(void);

/* Symbol: wmt_lib_assert_lock_trylock */
/* Demangled: wmt_lib_assert_lock_trylock */
int wmt_lib_assert_lock_trylock(void);

/* Symbol: wmt_lib_power_lock_trylock */
/* Demangled: wmt_lib_power_lock_trylock */
int wmt_lib_power_lock_trylock(void);

/* Symbol: DISABLE_PSM_MONITOR */
/* Demangled: DISABLE_PSM_MONITOR */
int DISABLE_PSM_MONITOR(void);

/* Symbol: wmt_btm_trigger_reset */
/* Demangled: wmt_btm_trigger_reset */
int wmt_btm_trigger_reset(void);

/* Symbol: ENABLE_PSM_MONITOR */
/* Demangled: ENABLE_PSM_MONITOR */
int ENABLE_PSM_MONITOR(void);

/* Symbol: wmt_lib_init */
/* Demangled: wmt_lib_init */
int wmt_lib_init(void);

/* Symbol: wmt_lib_ps_irq_cb */
/* Demangled: wmt_lib_ps_irq_cb */
int wmt_lib_ps_irq_cb(void);

/* Symbol: wmt_lib_set_aif */
/* Demangled: wmt_lib_set_aif */
int wmt_lib_set_aif(void);

/* Symbol: mtk_wcn_wmt_func_ctrl_for_plat */
/* Demangled: mtk_wcn_wmt_func_ctrl_for_plat */
int mtk_wcn_wmt_func_ctrl_for_plat(void);

/* Symbol: wmt_idc_init */
/* Demangled: wmt_idc_init */
int wmt_idc_init(void);

/* Symbol: wmt_lib_wait_event_checker */
/* Demangled: wmt_lib_wait_event_checker */
int wmt_lib_wait_event_checker(void);

/* Symbol: osal_thread_wait_for_event */
/* Demangled: osal_thread_wait_for_event */
int osal_thread_wait_for_event(void);

/* Symbol: wmt_lib_trigger_assert_keyword */
/* Demangled: wmt_lib_trigger_assert_keyword */
int wmt_lib_trigger_assert_keyword(void);

/* Symbol: wmt_lib_worker_wait_event_checker */
/* Demangled: wmt_lib_worker_wait_event_checker */
int wmt_lib_worker_wait_event_checker(void);

/* Symbol: wmt_lib_utc_time_sync */
/* Demangled: wmt_lib_utc_time_sync */
int wmt_lib_utc_time_sync(void);

/* Symbol: osal_opq_dump */
/* Demangled: osal_opq_dump */
int osal_opq_dump(void);

/* Symbol: wmt_lib_ps_init */
/* Demangled: wmt_lib_ps_init */
int wmt_lib_ps_init(void);

/* Symbol: wmt_lib_put_act_op */
/* Demangled: wmt_lib_put_act_op */
int wmt_lib_put_act_op(void);

/* Symbol: wmt_lib_deinit */
/* Demangled: wmt_lib_deinit */
int wmt_lib_deinit(void);

/* Symbol: osal_thread_stop */
/* Demangled: osal_thread_stop */
int osal_thread_stop(void);

/* Symbol: osal_event_deinit */
/* Demangled: osal_event_deinit */
int osal_event_deinit(void);

/* Symbol: osal_signal_deinit */
/* Demangled: osal_signal_deinit */
int osal_signal_deinit(void);

/* Symbol: wmt_idc_deinit */
/* Demangled: wmt_idc_deinit */
int wmt_idc_deinit(void);

/* Symbol: wmt_lib_ps_deinit */
/* Demangled: wmt_lib_ps_deinit */
int wmt_lib_ps_deinit(void);

/* Symbol: wmt_lib_flush_rx */
/* Demangled: wmt_lib_flush_rx */
int wmt_lib_flush_rx(void);

/* Symbol: wmt_lib_trigger_cmd_signal */
/* Demangled: wmt_lib_trigger_cmd_signal */
int wmt_lib_trigger_cmd_signal(void);

/* Symbol: osal_raise_signal */
/* Demangled: osal_raise_signal */
int osal_raise_signal(void);

/* Symbol: wmt_lib_get_cmd_event */
/* Demangled: wmt_lib_get_cmd_event */
int wmt_lib_get_cmd_event(void);

/* Symbol: wmt_lib_set_patch_name */
/* Demangled: wmt_lib_set_patch_name */
int wmt_lib_set_patch_name(void);

/* Symbol: wmt_lib_set_uart_name */
/* Demangled: wmt_lib_set_uart_name */
int wmt_lib_set_uart_name(void);

/* Symbol: wmt_lib_set_hif */
/* Demangled: wmt_lib_set_hif */
int wmt_lib_set_hif(void);

/* Symbol: mtk_wcn_stp_set_if_tx_type */
/* Demangled: mtk_wcn_stp_set_if_tx_type */
int mtk_wcn_stp_set_if_tx_type(void);

/* Symbol: wmt_lib_get_hif */
/* Demangled: wmt_lib_get_hif */
int wmt_lib_get_hif(void);

/* Symbol: wmt_lib_get_cmd */
/* Demangled: wmt_lib_get_cmd */
int wmt_lib_get_cmd(void);

/* Symbol: wmt_lib_get_cmd_status */
/* Demangled: wmt_lib_get_cmd_status */
int wmt_lib_get_cmd_status(void);

/* Symbol: wmt_lib_stp_is_btif_fullset_mode */
/* Demangled: wmt_lib_stp_is_btif_fullset_mode */
int wmt_lib_stp_is_btif_fullset_mode(void);

/* Symbol: wmt_lib_handle_idc_msg */
/* Demangled: wmt_lib_handle_idc_msg */
int wmt_lib_handle_idc_msg(void);

/* Symbol: wmt_lib_get_free_op */
/* Demangled: wmt_lib_get_free_op */
int wmt_lib_get_free_op(void);

/* Symbol: wmt_lib_put_op_to_free_queue */
/* Demangled: wmt_lib_put_op_to_free_queue */
int wmt_lib_put_op_to_free_queue(void);

/* Symbol: wmt_lib_set_bt_link_status */
/* Demangled: wmt_lib_set_bt_link_status */
int wmt_lib_set_bt_link_status(void);

/* Symbol: mtk_wcn_wlan_is_wifi_drv_own */
/* Demangled: mtk_wcn_wlan_is_wifi_drv_own */
extern void* mtk_wcn_wlan_is_wifi_drv_own;

/* Symbol: wmt_dev_get_early_suspend_state */
/* Demangled: wmt_dev_get_early_suspend_state */
int wmt_dev_get_early_suspend_state(void);

/* Symbol: wmt_lib_fw_patch_update_rst_ctrl */
/* Demangled: wmt_lib_fw_patch_update_rst_ctrl */
int wmt_lib_fw_patch_update_rst_ctrl(void);

/* Symbol: wmt_lib_ps_set_sdio_psop */
/* Demangled: wmt_lib_ps_set_sdio_psop */
int wmt_lib_ps_set_sdio_psop(void);

/* Symbol: wmt_lib_sdio_reg_rw_cb */
/* Demangled: wmt_lib_sdio_reg_rw_cb */
int wmt_lib_sdio_reg_rw_cb(void);

/* Symbol: wmt_lib_def_patch_name */
/* Demangled: wmt_lib_def_patch_name */
int wmt_lib_def_patch_name(void);

/* Symbol: wmt_lib_is_therm_ctrl_support */
/* Demangled: wmt_lib_is_therm_ctrl_support */
int wmt_lib_is_therm_ctrl_support(void);

/* Symbol: wmt_lib_is_dsns_ctrl_support */
/* Demangled: wmt_lib_is_dsns_ctrl_support */
int wmt_lib_is_dsns_ctrl_support(void);

/* Symbol: wmt_lib_reg_rw */
/* Demangled: wmt_lib_reg_rw */
int wmt_lib_reg_rw(void);

/* Symbol: wmt_lib_efuse_rw */
/* Demangled: wmt_lib_efuse_rw */
int wmt_lib_efuse_rw(void);

/* Symbol: wmt_lib_host_awake_get */
/* Demangled: wmt_lib_host_awake_get */
int wmt_lib_host_awake_get(void);

/* Symbol: wmt_lib_host_awake_put */
/* Demangled: wmt_lib_host_awake_put */
int wmt_lib_host_awake_put(void);

/* Symbol: wmt_lib_btm_cb */
/* Demangled: wmt_lib_btm_cb */
int wmt_lib_btm_cb(void);

/* Symbol: wmt_lib_cmb_rst */
/* Demangled: wmt_lib_cmb_rst */
int wmt_lib_cmb_rst(void);

/* Symbol: wmt_lib_hw_rst */
/* Demangled: wmt_lib_hw_rst */
int wmt_lib_hw_rst(void);

/* Symbol: wmt_lib_sw_rst */
/* Demangled: wmt_lib_sw_rst */
int wmt_lib_sw_rst(void);

/* Symbol: wmt_cdev_rstmsg_snd */
/* Demangled: wmt_cdev_rstmsg_snd */
int wmt_cdev_rstmsg_snd(void);

/* Symbol: wmt_lib_state_init */
/* Demangled: wmt_lib_state_init */
int wmt_lib_state_init(void);

/* Symbol: wmt_lib_sdio_ctrl */
/* Demangled: wmt_lib_sdio_ctrl */
int wmt_lib_sdio_ctrl(void);

/* Symbol: stp_dbg_reset */
/* Demangled: stp_dbg_reset */
int stp_dbg_reset(void);

/* Symbol: wmt_lib_msgcb_reg */
/* Demangled: wmt_lib_msgcb_reg */
int wmt_lib_msgcb_reg(void);

/* Symbol: wmt_lib_msgcb_unreg */
/* Demangled: wmt_lib_msgcb_unreg */
int wmt_lib_msgcb_unreg(void);

/* Symbol: wmt_lib_dbg_level_set */
/* Demangled: wmt_lib_dbg_level_set */
int wmt_lib_dbg_level_set(void);

/* Symbol: wmt_lib_set_stp_wmt_last_close */
/* Demangled: wmt_lib_set_stp_wmt_last_close */
int wmt_lib_set_stp_wmt_last_close(void);

/* Symbol: wmt_lib_notify_stp_sleep */
/* Demangled: wmt_lib_notify_stp_sleep */
int wmt_lib_notify_stp_sleep(void);

/* Symbol: wmt_lib_set_patch_num */
/* Demangled: wmt_lib_set_patch_num */
int wmt_lib_set_patch_num(void);

/* Symbol: wmt_lib_set_patch_info */
/* Demangled: wmt_lib_set_patch_info */
int wmt_lib_set_patch_info(void);

/* Symbol: wmt_lib_set_rom_patch_info */
/* Demangled: wmt_lib_set_rom_patch_info */
int wmt_lib_set_rom_patch_info(void);

/* Symbol: wmt_lib_set_current_op */
/* Demangled: wmt_lib_set_current_op */
int wmt_lib_set_current_op(void);

/* Symbol: wmt_lib_set_worker_op */
/* Demangled: wmt_lib_set_worker_op */
int wmt_lib_set_worker_op(void);

/* Symbol: wmt_lib_get_worker_op */
/* Demangled: wmt_lib_get_worker_op */
int wmt_lib_get_worker_op(void);

/* Symbol: wmt_lib_get_fwinfor_from_emi */
/* Demangled: wmt_lib_get_fwinfor_from_emi */
int wmt_lib_get_fwinfor_from_emi(void);

/* Symbol: wmt_lib_merge_if_flag_ctrl */
/* Demangled: wmt_lib_merge_if_flag_ctrl */
int wmt_lib_merge_if_flag_ctrl(void);

/* Symbol: wmt_lib_merge_if_flag_get */
/* Demangled: wmt_lib_merge_if_flag_get */
int wmt_lib_merge_if_flag_get(void);

/* Symbol: wmt_lib_get_cpupcr_xml_format */
/* Demangled: wmt_lib_get_cpupcr_xml_format */
int wmt_lib_get_cpupcr_xml_format(void);

/* Symbol: stp_dbg_cpupcr_infor_format */
/* Demangled: stp_dbg_cpupcr_infor_format */
int stp_dbg_cpupcr_infor_format(void);

/* Symbol: wmt_lib_get_cpupcr_reg_info */
/* Demangled: wmt_lib_get_cpupcr_reg_info */
int wmt_lib_get_cpupcr_reg_info(void);

/* Symbol: stp_dbg_dump_cpupcr_reg_info */
/* Demangled: stp_dbg_dump_cpupcr_reg_info */
int stp_dbg_dump_cpupcr_reg_info(void);

/* Symbol: wmt_dev_tm_temp_query */
/* Demangled: wmt_dev_tm_temp_query */
int wmt_dev_tm_temp_query(void);

/* Symbol: wmt_lib_register_thermal_ctrl_cb */
/* Demangled: wmt_lib_register_thermal_ctrl_cb */
int wmt_lib_register_thermal_ctrl_cb(void);

/* Symbol: wmt_lib_register_trigger_assert_cb */
/* Demangled: wmt_lib_register_trigger_assert_cb */
int wmt_lib_register_trigger_assert_cb(void);

/* Symbol: stp_dbg_set_host_assert_info */
/* Demangled: stp_dbg_set_host_assert_info */
int stp_dbg_set_host_assert_info(void);

/* Symbol: wmt_lib_co_clock_get */
/* Demangled: wmt_lib_co_clock_get */
int wmt_lib_co_clock_get(void);

/* Symbol: wmt_lib_quick_sleep_ctrl */
/* Demangled: wmt_lib_quick_sleep_ctrl */
int wmt_lib_quick_sleep_ctrl(void);

/* Symbol: wmt_lib_jtag_flag_set */
/* Demangled: wmt_lib_jtag_flag_set */
int wmt_lib_jtag_flag_set(void);

/* Symbol: wmt_lib_soc_set_wifiver */
/* Demangled: wmt_lib_soc_set_wifiver */
int wmt_lib_soc_set_wifiver(void);

/* Symbol: stp_dbg_set_wifiver */
/* Demangled: stp_dbg_set_wifiver */
int stp_dbg_set_wifiver(void);

/* Symbol: wmt_lib_wifi_fem_cfg_report */
/* Demangled: wmt_lib_wifi_fem_cfg_report */
int wmt_lib_wifi_fem_cfg_report(void);

/* Symbol: wmt_lib_sdio_reg_rw */
/* Demangled: wmt_lib_sdio_reg_rw */
int wmt_lib_sdio_reg_rw(void);

/* Symbol: wmt_lib_dump_wmtd_backtrace */
/* Demangled: wmt_lib_dump_wmtd_backtrace */
int wmt_lib_dump_wmtd_backtrace(void);

/* Symbol: wmt_lib_met_cmd */
/* Demangled: wmt_lib_met_cmd */
int wmt_lib_met_cmd(void);

/* Symbol: wmt_lib_get_gps_lna_pin_num */
/* Demangled: wmt_lib_get_gps_lna_pin_num */
int wmt_lib_get_gps_lna_pin_num(void);

/* Symbol: wmt_lib_met_ctrl */
/* Demangled: wmt_lib_met_ctrl */
int wmt_lib_met_ctrl(void);

/* Symbol: osal_ftrace_print_ctrl */
/* Demangled: osal_ftrace_print_ctrl */
int osal_ftrace_print_ctrl(void);

/* Symbol: osal_usleep_range */
/* Demangled: osal_usleep_range */
int osal_usleep_range(void);

/* Symbol: osal_buffer_dump_data */
/* Demangled: osal_buffer_dump_data */
int osal_buffer_dump_data(void);

/* Symbol: wmt_lib_set_ext_ldo */
/* Demangled: wmt_lib_set_ext_ldo */
int wmt_lib_set_ext_ldo(void);

/* Symbol: wmt_lib_get_ext_ldo */
/* Demangled: wmt_lib_get_ext_ldo */
int wmt_lib_get_ext_ldo(void);

/* Symbol: wmt_lib_fw_log_ctrl */
/* Demangled: wmt_lib_fw_log_ctrl */
int wmt_lib_fw_log_ctrl(void);

/* Symbol: wmt_lib_gps_mcu_ctrl */
/* Demangled: wmt_lib_gps_mcu_ctrl */
int wmt_lib_gps_mcu_ctrl(void);

/* Symbol: wmt_lib_get_blank_status */
/* Demangled: wmt_lib_get_blank_status */
int wmt_lib_get_blank_status(void);

/* Symbol: wmt_lib_blank_status_ctrl */
/* Demangled: wmt_lib_blank_status_ctrl */
int wmt_lib_blank_status_ctrl(void);

/* Symbol: wmt_lib_get_vendor_patch_num */
/* Demangled: wmt_lib_get_vendor_patch_num */
int wmt_lib_get_vendor_patch_num(void);

/* Symbol: wmt_lib_set_vendor_patch_version */
/* Demangled: wmt_lib_set_vendor_patch_version */
int wmt_lib_set_vendor_patch_version(void);

/* Symbol: wmt_lib_get_vendor_patch_version */
/* Demangled: wmt_lib_get_vendor_patch_version */
int wmt_lib_get_vendor_patch_version(void);

/* Symbol: wmt_lib_set_check_patch_status */
/* Demangled: wmt_lib_set_check_patch_status */
int wmt_lib_set_check_patch_status(void);

/* Symbol: wmt_lib_get_check_patch_status */
/* Demangled: wmt_lib_get_check_patch_status */
int wmt_lib_get_check_patch_status(void);

/* Symbol: wmt_lib_set_active_patch_version */
/* Demangled: wmt_lib_set_active_patch_version */
int wmt_lib_set_active_patch_version(void);

/* Symbol: wmt_lib_get_active_patch_version */
/* Demangled: wmt_lib_get_active_patch_version */
int wmt_lib_get_active_patch_version(void);

/* Symbol: mtk_lib_set_mcif_mpu_protection */
/* Demangled: mtk_lib_set_mcif_mpu_protection */
int mtk_lib_set_mcif_mpu_protection(void);

/* Symbol: wmt_lib_reg_readable */
/* Demangled: wmt_lib_reg_readable */
int wmt_lib_reg_readable(void);

/* Symbol: wmt_lib_reg_readable_by_addr */
/* Demangled: wmt_lib_reg_readable_by_addr */
int wmt_lib_reg_readable_by_addr(void);

/* Symbol: __crc_mtk_wcn_stp_register_if_rx */
/* Demangled: __crc_mtk_wcn_stp_register_if_rx */
extern void* __crc_mtk_wcn_stp_register_if_rx;

/* Symbol: __crc_mtk_wcn_stp_register_if_tx */
/* Demangled: __crc_mtk_wcn_stp_register_if_tx */
extern void* __crc_mtk_wcn_stp_register_if_tx;

/* Symbol: __crc_mtk_wcn_stp_register_event_cb */
/* Demangled: __crc_mtk_wcn_stp_register_event_cb */
extern void* __crc_mtk_wcn_stp_register_event_cb;

/* Symbol: __crc_mtk_wcn_stp_register_tx_event_cb */
/* Demangled: __crc_mtk_wcn_stp_register_tx_event_cb */
extern void* __crc_mtk_wcn_stp_register_tx_event_cb;

/* Symbol: __crc_mtk_wcn_stp_register_rx_has_pending_data */
/* Demangled: __crc_mtk_wcn_stp_register_rx_has_pending_data */
extern void* __crc_mtk_wcn_stp_register_rx_has_pending_data;

/* Symbol: __crc_mtk_wcn_stp_register_tx_has_pending_data */
/* Demangled: __crc_mtk_wcn_stp_register_tx_has_pending_data */
extern void* __crc_mtk_wcn_stp_register_tx_has_pending_data;

/* Symbol: __crc_mtk_wcn_stp_register_rx_thread_get */
/* Demangled: __crc_mtk_wcn_stp_register_rx_thread_get */
extern void* __crc_mtk_wcn_stp_register_rx_thread_get;

/* Symbol: __crc_mtk_wcn_stp_sdio_wake_up_ctrl */
/* Demangled: __crc_mtk_wcn_stp_sdio_wake_up_ctrl */
extern void* __crc_mtk_wcn_stp_sdio_wake_up_ctrl;

/* Symbol: __crc_mtk_stp_dbg_poll_cpupcr */
/* Demangled: __crc_mtk_stp_dbg_poll_cpupcr */
extern void* __crc_mtk_stp_dbg_poll_cpupcr;

/* Symbol: mtk_wcn_stp_register_if_rx */
/* Demangled: mtk_wcn_stp_register_if_rx */
int mtk_wcn_stp_register_if_rx(void);

/* Symbol: osal_dbg_print */
/* Demangled: osal_dbg_print */
int osal_dbg_print(void);

/* Symbol: mtk_wcn_stp_register_if_tx */
/* Demangled: mtk_wcn_stp_register_if_tx */
int mtk_wcn_stp_register_if_tx(void);

/* Symbol: mtk_wcn_stp_register_tx_event_cb */
/* Demangled: mtk_wcn_stp_register_tx_event_cb */
int mtk_wcn_stp_register_tx_event_cb(void);

/* Symbol: osal_bug_on */
/* Demangled: osal_bug_on */
int osal_bug_on(void);

/* Symbol: mtk_wcn_stp_register_rx_has_pending_data */
/* Demangled: mtk_wcn_stp_register_rx_has_pending_data */
int mtk_wcn_stp_register_rx_has_pending_data(void);

/* Symbol: mtk_wcn_stp_register_tx_has_pending_data */
/* Demangled: mtk_wcn_stp_register_tx_has_pending_data */
int mtk_wcn_stp_register_tx_has_pending_data(void);

/* Symbol: mtk_wcn_stp_register_rx_thread_get */
/* Demangled: mtk_wcn_stp_register_rx_thread_get */
int mtk_wcn_stp_register_rx_thread_get(void);

/* Symbol: stp_drv_init */
/* Demangled: stp_drv_init */
int stp_drv_init(void);

/* Symbol: stp_drv_exit */
/* Demangled: stp_drv_exit */
int stp_drv_exit(void);

/* Symbol: mtk_wcn_stp_sdio_wake_up_ctrl */
/* Demangled: mtk_wcn_stp_sdio_wake_up_ctrl */
int mtk_wcn_stp_sdio_wake_up_ctrl(void);

/* Symbol: stp_sdio_wake_up_ctrl */
/* Demangled: stp_sdio_wake_up_ctrl */
int stp_sdio_wake_up_ctrl(void);

/* Symbol: mtk_stp_dbg_poll_cpupcr */
/* Demangled: mtk_stp_dbg_poll_cpupcr */
int mtk_stp_dbg_poll_cpupcr(void);

/* Symbol: WMT_CLOCK_RATE_CMD */
/* Demangled: WMT_CLOCK_RATE_CMD */
extern void* WMT_CLOCK_RATE_CMD;

/* Symbol: WMT_CLOCK_RATE_EVT */
/* Demangled: WMT_CLOCK_RATE_EVT */
extern void* WMT_CLOCK_RATE_EVT;

/* Symbol: WMT_PATCH_DWN_USE_DMA_CMD */
/* Demangled: WMT_PATCH_DWN_USE_DMA_CMD */
extern void* WMT_PATCH_DWN_USE_DMA_CMD;

/* Symbol: WMT_PATCH_DWN_USE_DMA_EVT */
/* Demangled: WMT_PATCH_DWN_USE_DMA_EVT */
extern void* WMT_PATCH_DWN_USE_DMA_EVT;

/* Symbol: g_deep_sleep_flag */
/* Demangled: g_deep_sleep_flag */
extern void* g_deep_sleep_flag;

/* Symbol: __crc_mtk_wcn_wmt_psm_ctrl */
/* Demangled: __crc_mtk_wcn_wmt_psm_ctrl */
extern void* __crc_mtk_wcn_wmt_psm_ctrl;

/* Symbol: __crc_mtk_wcn_wmt_func_off */
/* Demangled: __crc_mtk_wcn_wmt_func_off */
extern void* __crc_mtk_wcn_wmt_func_off;

/* Symbol: __crc_mtk_wcn_wmt_func_on */
/* Demangled: __crc_mtk_wcn_wmt_func_on */
extern void* __crc_mtk_wcn_wmt_func_on;

/* Symbol: __crc_mtk_wcn_wmt_therm_ctrl */
/* Demangled: __crc_mtk_wcn_wmt_therm_ctrl */
extern void* __crc_mtk_wcn_wmt_therm_ctrl;

/* Symbol: __crc_mtk_wcn_wmt_hwver_get */
/* Demangled: __crc_mtk_wcn_wmt_hwver_get */
extern void* __crc_mtk_wcn_wmt_hwver_get;

/* Symbol: __crc_mtk_wcn_wmt_ic_info_get */
/* Demangled: __crc_mtk_wcn_wmt_ic_info_get */
extern void* __crc_mtk_wcn_wmt_ic_info_get;

/* Symbol: __crc_mtk_wcn_wmt_dsns_ctrl */
/* Demangled: __crc_mtk_wcn_wmt_dsns_ctrl */
extern void* __crc_mtk_wcn_wmt_dsns_ctrl;

/* Symbol: __crc_mtk_wcn_wmt_msgcb_reg */
/* Demangled: __crc_mtk_wcn_wmt_msgcb_reg */
extern void* __crc_mtk_wcn_wmt_msgcb_reg;

/* Symbol: __crc_mtk_wcn_wmt_msgcb_unreg */
/* Demangled: __crc_mtk_wcn_wmt_msgcb_unreg */
extern void* __crc_mtk_wcn_wmt_msgcb_unreg;

/* Symbol: __crc_mtk_wcn_stp_wmt_sdio_op_reg */
/* Demangled: __crc_mtk_wcn_stp_wmt_sdio_op_reg */
extern void* __crc_mtk_wcn_stp_wmt_sdio_op_reg;

/* Symbol: __crc_mtk_wcn_stp_wmt_sdio_host_awake */
/* Demangled: __crc_mtk_wcn_stp_wmt_sdio_host_awake */
extern void* __crc_mtk_wcn_stp_wmt_sdio_host_awake;

/* Symbol: __crc_mtk_wcn_wmt_assert_timeout */
/* Demangled: __crc_mtk_wcn_wmt_assert_timeout */
extern void* __crc_mtk_wcn_wmt_assert_timeout;

/* Symbol: __crc_mtk_wcn_wmt_assert */
/* Demangled: __crc_mtk_wcn_wmt_assert */
extern void* __crc_mtk_wcn_wmt_assert;

/* Symbol: __crc_mtk_wcn_wmt_assert_keyword */
/* Demangled: __crc_mtk_wcn_wmt_assert_keyword */
extern void* __crc_mtk_wcn_wmt_assert_keyword;

/* Symbol: __crc_mtk_wcn_wmt_flash_patch_ctrl */
/* Demangled: __crc_mtk_wcn_wmt_flash_patch_ctrl */
extern void* __crc_mtk_wcn_wmt_flash_patch_ctrl;

/* Symbol: __crc_mtk_wcn_wmt_co_clock_flag_get */
/* Demangled: __crc_mtk_wcn_wmt_co_clock_flag_get */
extern void* __crc_mtk_wcn_wmt_co_clock_flag_get;

/* Symbol: __crc_mtk_wcn_wmt_wlan_reg */
/* Demangled: __crc_mtk_wcn_wmt_wlan_reg */
extern void* __crc_mtk_wcn_wmt_wlan_reg;

/* Symbol: __crc_mtk_wcn_wmt_wlan_unreg */
/* Demangled: __crc_mtk_wcn_wmt_wlan_unreg */
extern void* __crc_mtk_wcn_wmt_wlan_unreg;

/* Symbol: __crc_mtk_wcn_set_connsys_power_off_flag */
/* Demangled: __crc_mtk_wcn_set_connsys_power_off_flag */
extern void* __crc_mtk_wcn_set_connsys_power_off_flag;

/* Symbol: __crc_mtk_wcn_wmt_do_reset */
/* Demangled: __crc_mtk_wcn_wmt_do_reset */
extern void* __crc_mtk_wcn_wmt_do_reset;

/* Symbol: __crc_mtk_wcn_wmt_do_reset_only */
/* Demangled: __crc_mtk_wcn_wmt_do_reset_only */
extern void* __crc_mtk_wcn_wmt_do_reset_only;

/* Symbol: __crc_mtk_wcn_wmt_set_wifi_ver */
/* Demangled: __crc_mtk_wcn_wmt_set_wifi_ver */
extern void* __crc_mtk_wcn_wmt_set_wifi_ver;

/* Symbol: __crc_mtk_wcn_wmt_wifi_fem_cfg_report */
/* Demangled: __crc_mtk_wcn_wmt_wifi_fem_cfg_report */
extern void* __crc_mtk_wcn_wmt_wifi_fem_cfg_report;

/* Symbol: __crc_mtk_wcn_wmt_dump_wmtd_backtrace */
/* Demangled: __crc_mtk_wcn_wmt_dump_wmtd_backtrace */
extern void* __crc_mtk_wcn_wmt_dump_wmtd_backtrace;

/* Symbol: __crc_mtk_wmt_get_gps_lna_pin_num */
/* Demangled: __crc_mtk_wmt_get_gps_lna_pin_num */
extern void* __crc_mtk_wmt_get_gps_lna_pin_num;

/* Symbol: __crc_mtk_wmt_set_ext_ldo */
/* Demangled: __crc_mtk_wmt_set_ext_ldo */
extern void* __crc_mtk_wmt_set_ext_ldo;

/* Symbol: __crc_mtk_wmt_gps_mcu_ctrl */
/* Demangled: __crc_mtk_wmt_gps_mcu_ctrl */
extern void* __crc_mtk_wmt_gps_mcu_ctrl;

/* Symbol: __crc_mtk_wcn_wmt_set_mcif_mpu_protection */
/* Demangled: __crc_mtk_wcn_wmt_set_mcif_mpu_protection */
extern void* __crc_mtk_wcn_wmt_set_mcif_mpu_protection;

/* Symbol: __crc_mtk_wmt_gps_suspend_ctrl */
/* Demangled: __crc_mtk_wmt_gps_suspend_ctrl */
extern void* __crc_mtk_wmt_gps_suspend_ctrl;

/* Symbol: __crc_mtk_wmt_gps_l1_suspend_ctrl */
/* Demangled: __crc_mtk_wmt_gps_l1_suspend_ctrl */
extern void* __crc_mtk_wmt_gps_l1_suspend_ctrl;

/* Symbol: __crc_mtk_wmt_gps_l5_suspend_ctrl */
/* Demangled: __crc_mtk_wmt_gps_l5_suspend_ctrl */
extern void* __crc_mtk_wmt_gps_l5_suspend_ctrl;

/* Symbol: __crc_mtk_wcn_wmt_mpu_lock_aquire */
/* Demangled: __crc_mtk_wcn_wmt_mpu_lock_aquire */
extern void* __crc_mtk_wcn_wmt_mpu_lock_aquire;

/* Symbol: __crc_mtk_wcn_wmt_mpu_lock_release */
/* Demangled: __crc_mtk_wcn_wmt_mpu_lock_release */
extern void* __crc_mtk_wcn_wmt_mpu_lock_release;

/* Symbol: mtk_wcn_wmt_psm_ctrl */
/* Demangled: mtk_wcn_wmt_psm_ctrl */
int mtk_wcn_wmt_psm_ctrl(void);

/* Symbol: mtk_wcn_wmt_func_off */
/* Demangled: mtk_wcn_wmt_func_off */
int mtk_wcn_wmt_func_off(void);

/* Symbol: mtk_wcn_wmt_func_on */
/* Demangled: mtk_wcn_wmt_func_on */
int mtk_wcn_wmt_func_on(void);

/* Symbol: mtk_wcn_wmt_therm_ctrl */
/* Demangled: mtk_wcn_wmt_therm_ctrl */
int mtk_wcn_wmt_therm_ctrl(void);

/* Symbol: mtk_wcn_wmt_hwver_get */
/* Demangled: mtk_wcn_wmt_hwver_get */
int mtk_wcn_wmt_hwver_get(void);

/* Symbol: mtk_wcn_wmt_ic_info_get */
/* Demangled: mtk_wcn_wmt_ic_info_get */
int mtk_wcn_wmt_ic_info_get(void);

/* Symbol: mtk_wcn_wmt_dsns_ctrl */
/* Demangled: mtk_wcn_wmt_dsns_ctrl */
int mtk_wcn_wmt_dsns_ctrl(void);

/* Symbol: mtk_wcn_wmt_msgcb_reg */
/* Demangled: mtk_wcn_wmt_msgcb_reg */
int mtk_wcn_wmt_msgcb_reg(void);

/* Symbol: mtk_wcn_wmt_msgcb_unreg */
/* Demangled: mtk_wcn_wmt_msgcb_unreg */
int mtk_wcn_wmt_msgcb_unreg(void);

/* Symbol: mtk_wcn_stp_wmt_sdio_op_reg */
/* Demangled: mtk_wcn_stp_wmt_sdio_op_reg */
int mtk_wcn_stp_wmt_sdio_op_reg(void);

/* Symbol: mtk_wcn_wmt_sdio_rw_cb_reg */
/* Demangled: mtk_wcn_wmt_sdio_rw_cb_reg */
int mtk_wcn_wmt_sdio_rw_cb_reg(void);

/* Symbol: mtk_wcn_stp_wmt_sdio_host_awake */
/* Demangled: mtk_wcn_stp_wmt_sdio_host_awake */
int mtk_wcn_stp_wmt_sdio_host_awake(void);

/* Symbol: mtk_wcn_wmt_assert_timeout */
/* Demangled: mtk_wcn_wmt_assert_timeout */
int mtk_wcn_wmt_assert_timeout(void);

/* Symbol: mtk_wcn_wmt_assert */
/* Demangled: mtk_wcn_wmt_assert */
int mtk_wcn_wmt_assert(void);

/* Symbol: mtk_wcn_wmt_assert_keyword */
/* Demangled: mtk_wcn_wmt_assert_keyword */
int mtk_wcn_wmt_assert_keyword(void);

/* Symbol: mtk_wcn_wmt_flash_patch_ctrl */
/* Demangled: mtk_wcn_wmt_flash_patch_ctrl */
int mtk_wcn_wmt_flash_patch_ctrl(void);

/* Symbol: mtk_wcn_wmt_co_clock_flag_get */
/* Demangled: mtk_wcn_wmt_co_clock_flag_get */
int mtk_wcn_wmt_co_clock_flag_get(void);

/* Symbol: mtk_wcn_wmt_wlan_reg */
/* Demangled: mtk_wcn_wmt_wlan_reg */
int mtk_wcn_wmt_wlan_reg(void);

/* Symbol: mtk_wcn_wlan_bus_tx_cnt */
/* Demangled: mtk_wcn_wlan_bus_tx_cnt */
extern void* mtk_wcn_wlan_bus_tx_cnt;

/* Symbol: mtk_wcn_wlan_bus_tx_cnt_clr */
/* Demangled: mtk_wcn_wlan_bus_tx_cnt_clr */
extern void* mtk_wcn_wlan_bus_tx_cnt_clr;

/* Symbol: mtk_wcn_wmt_wlan_unreg */
/* Demangled: mtk_wcn_wmt_wlan_unreg */
int mtk_wcn_wmt_wlan_unreg(void);

/* Symbol: mtk_wcn_wmt_do_reset */
/* Demangled: mtk_wcn_wmt_do_reset */
int mtk_wcn_wmt_do_reset(void);

/* Symbol: mtk_wcn_wmt_do_reset_only */
/* Demangled: mtk_wcn_wmt_do_reset_only */
int mtk_wcn_wmt_do_reset_only(void);

/* Symbol: mtk_wcn_wmt_set_wifi_ver */
/* Demangled: mtk_wcn_wmt_set_wifi_ver */
int mtk_wcn_wmt_set_wifi_ver(void);

/* Symbol: mtk_wcn_wmt_wifi_fem_cfg_report */
/* Demangled: mtk_wcn_wmt_wifi_fem_cfg_report */
int mtk_wcn_wmt_wifi_fem_cfg_report(void);

/* Symbol: mtk_wmt_set_ext_ldo */
/* Demangled: mtk_wmt_set_ext_ldo */
int mtk_wmt_set_ext_ldo(void);

/* Symbol: mtk_wmt_gps_mcu_ctrl */
/* Demangled: mtk_wmt_gps_mcu_ctrl */
int mtk_wmt_gps_mcu_ctrl(void);

/* Symbol: mtk_wcn_wmt_set_mcif_mpu_protection */
/* Demangled: mtk_wcn_wmt_set_mcif_mpu_protection */
int mtk_wcn_wmt_set_mcif_mpu_protection(void);

/* Symbol: mtk_wmt_gps_suspend_ctrl */
/* Demangled: mtk_wmt_gps_suspend_ctrl */
int mtk_wmt_gps_suspend_ctrl(void);

/* Symbol: mtk_wmt_gps_l1_suspend_ctrl */
/* Demangled: mtk_wmt_gps_l1_suspend_ctrl */
int mtk_wmt_gps_l1_suspend_ctrl(void);

/* Symbol: mtk_wmt_gps_l5_suspend_ctrl */
/* Demangled: mtk_wmt_gps_l5_suspend_ctrl */
int mtk_wmt_gps_l5_suspend_ctrl(void);

/* Symbol: mtk_wcn_wmt_mpu_lock_aquire */
/* Demangled: mtk_wcn_wmt_mpu_lock_aquire */
int mtk_wcn_wmt_mpu_lock_aquire(void);

/* Symbol: mtk_wcn_wmt_mpu_lock_release */
/* Demangled: mtk_wcn_wmt_mpu_lock_release */
int mtk_wcn_wmt_mpu_lock_release(void);

/* Symbol: _stp_btm_get_free_op */
/* Demangled: _stp_btm_get_free_op */
int _stp_btm_get_free_op(void);

/* Symbol: gBtmDbgLevel */
/* Demangled: gBtmDbgLevel */
extern void* gBtmDbgLevel;

/* Symbol: _stp_btm_put_act_op */
/* Demangled: _stp_btm_put_act_op */
int _stp_btm_put_act_op(void);

/* Symbol: stp_btm_notify_coredump_timeout_wq */
/* Demangled: stp_btm_notify_coredump_timeout_wq */
int stp_btm_notify_coredump_timeout_wq(void);

/* Symbol: stp_btm_notify_assert_timeout_wq */
/* Demangled: stp_btm_notify_assert_timeout_wq */
int stp_btm_notify_assert_timeout_wq(void);

/* Symbol: stp_notify_btm_poll_cpupcr_ctrl */
/* Demangled: stp_notify_btm_poll_cpupcr_ctrl */
int stp_notify_btm_poll_cpupcr_ctrl(void);

/* Symbol: stp_dbg_poll_cpupcr_ctrl */
/* Demangled: stp_dbg_poll_cpupcr_ctrl */
int stp_dbg_poll_cpupcr_ctrl(void);

/* Symbol: stp_btm */
/* Demangled: stp_btm */
extern void* stp_btm;

/* Symbol: stp_btm_init_trigger_assert_timer */
/* Demangled: stp_btm_init_trigger_assert_timer */
int stp_btm_init_trigger_assert_timer(void);

/* Symbol: g_btm_op_name */
/* Demangled: g_btm_op_name */
extern void* g_btm_op_name;

/* Symbol: connsys_dedicated_log_flush_emi */
/* Demangled: connsys_dedicated_log_flush_emi */
int connsys_dedicated_log_flush_emi(void);

/* Symbol: stp_dbg_core_dump_flush */
/* Demangled: stp_dbg_core_dump_flush */
int stp_dbg_core_dump_flush(void);

/* Symbol: stp_dbg_core_dump */
/* Demangled: stp_dbg_core_dump */
int stp_dbg_core_dump(void);

/* Symbol: stp_dbg_set_coredump_timer_state */
/* Demangled: stp_dbg_set_coredump_timer_state */
int stp_dbg_set_coredump_timer_state(void);

/* Symbol: stp_dbg_nl_send_data */
/* Demangled: stp_dbg_nl_send_data */
int stp_dbg_nl_send_data(void);

/* Symbol: wmt_idc_msg_to_lte_handing */
/* Demangled: wmt_idc_msg_to_lte_handing */
int wmt_idc_msg_to_lte_handing(void);

/* Symbol: stp_dbg_stop_emi_dump */
/* Demangled: stp_dbg_stop_emi_dump */
int stp_dbg_stop_emi_dump(void);

/* Symbol: stp_dbg_is_btif_rxd_be_blocked */
/* Demangled: stp_dbg_is_btif_rxd_be_blocked */
int stp_dbg_is_btif_rxd_be_blocked(void);

/* Symbol: stp_btm_set_current_op */
/* Demangled: stp_btm_set_current_op */
int stp_btm_set_current_op(void);

/* Symbol: stp_btm_get_current_op */
/* Demangled: stp_btm_get_current_op */
int stp_btm_get_current_op(void);

/* Symbol: stp_btm_start_trigger_assert_timer */
/* Demangled: stp_btm_start_trigger_assert_timer */
int stp_btm_start_trigger_assert_timer(void);

/* Symbol: stp_btm_i */
/* Demangled: stp_btm_i */
extern void* stp_btm_i;

/* Symbol: __crc_mtk_wcn_hif_sdio_update_cb_reg */
/* Demangled: __crc_mtk_wcn_hif_sdio_update_cb_reg */
extern void* __crc_mtk_wcn_hif_sdio_update_cb_reg;

/* Symbol: __crc_mtk_wcn_hif_sdio_client_reg */
/* Demangled: __crc_mtk_wcn_hif_sdio_client_reg */
extern void* __crc_mtk_wcn_hif_sdio_client_reg;

/* Symbol: __crc_mtk_wcn_hif_sdio_client_unreg */
/* Demangled: __crc_mtk_wcn_hif_sdio_client_unreg */
extern void* __crc_mtk_wcn_hif_sdio_client_unreg;

/* Symbol: __crc_mtk_wcn_hif_sdio_readb */
/* Demangled: __crc_mtk_wcn_hif_sdio_readb */
extern void* __crc_mtk_wcn_hif_sdio_readb;

/* Symbol: __crc_mtk_wcn_hif_sdio_writeb */
/* Demangled: __crc_mtk_wcn_hif_sdio_writeb */
extern void* __crc_mtk_wcn_hif_sdio_writeb;

/* Symbol: __crc_mtk_wcn_hif_sdio_readl */
/* Demangled: __crc_mtk_wcn_hif_sdio_readl */
extern void* __crc_mtk_wcn_hif_sdio_readl;

/* Symbol: __crc_mtk_wcn_hif_sdio_writel */
/* Demangled: __crc_mtk_wcn_hif_sdio_writel */
extern void* __crc_mtk_wcn_hif_sdio_writel;

/* Symbol: __crc_mtk_wcn_hif_sdio_read_buf */
/* Demangled: __crc_mtk_wcn_hif_sdio_read_buf */
extern void* __crc_mtk_wcn_hif_sdio_read_buf;

/* Symbol: __crc_mtk_wcn_hif_sdio_write_buf */
/* Demangled: __crc_mtk_wcn_hif_sdio_write_buf */
extern void* __crc_mtk_wcn_hif_sdio_write_buf;

/* Symbol: __crc_mtk_wcn_hif_sdio_abort */
/* Demangled: __crc_mtk_wcn_hif_sdio_abort */
extern void* __crc_mtk_wcn_hif_sdio_abort;

/* Symbol: __crc_mtk_wcn_hif_sdio_set_drvdata */
/* Demangled: __crc_mtk_wcn_hif_sdio_set_drvdata */
extern void* __crc_mtk_wcn_hif_sdio_set_drvdata;

/* Symbol: __crc_mtk_wcn_hif_sdio_get_drvdata */
/* Demangled: __crc_mtk_wcn_hif_sdio_get_drvdata */
extern void* __crc_mtk_wcn_hif_sdio_get_drvdata;

/* Symbol: __crc_mtk_wcn_hif_sdio_wmt_control */
/* Demangled: __crc_mtk_wcn_hif_sdio_wmt_control */
extern void* __crc_mtk_wcn_hif_sdio_wmt_control;

/* Symbol: __crc_mtk_wcn_hif_sdio_get_dev */
/* Demangled: __crc_mtk_wcn_hif_sdio_get_dev */
extern void* __crc_mtk_wcn_hif_sdio_get_dev;

/* Symbol: __crc_mtk_wcn_hif_sdio_bus_set_power */
/* Demangled: __crc_mtk_wcn_hif_sdio_bus_set_power */
extern void* __crc_mtk_wcn_hif_sdio_bus_set_power;

/* Symbol: __crc_mtk_wcn_hif_sdio_enable_irq */
/* Demangled: __crc_mtk_wcn_hif_sdio_enable_irq */
extern void* __crc_mtk_wcn_hif_sdio_enable_irq;

/* Symbol: __crc_mtk_wcn_hif_sdio_drv_init */
/* Demangled: __crc_mtk_wcn_hif_sdio_drv_init */
extern void* __crc_mtk_wcn_hif_sdio_drv_init;

/* Symbol: __crc_mtk_wcn_hif_sdio_driver_exit */
/* Demangled: __crc_mtk_wcn_hif_sdio_driver_exit */
extern void* __crc_mtk_wcn_hif_sdio_driver_exit;

/* Symbol: mtk_wcn_hif_sdio_irq_flag_set */
/* Demangled: mtk_wcn_hif_sdio_irq_flag_set */
int mtk_wcn_hif_sdio_irq_flag_set(void);

/* Symbol: mtk_wcn_hif_sdio_update_cb_reg */
/* Demangled: mtk_wcn_hif_sdio_update_cb_reg */
int mtk_wcn_hif_sdio_update_cb_reg(void);

/* Symbol: hif_sdio_wake_up_ctrl */
/* Demangled: hif_sdio_wake_up_ctrl */
int hif_sdio_wake_up_ctrl(void);

/* Symbol: g_hif_sdio_ds_info_list */
/* Demangled: g_hif_sdio_ds_info_list */
extern void* g_hif_sdio_ds_info_list;

/* Symbol: gHifSdioDbgLvl */
/* Demangled: gHifSdioDbgLvl */
extern void* gHifSdioDbgLvl;

/* Symbol: g_hif_deep_sleep_flag */
/* Demangled: g_hif_deep_sleep_flag */
extern void* g_hif_deep_sleep_flag;

/* Symbol: osal_gettimeofday */
/* Demangled: osal_gettimeofday */
int osal_gettimeofday(void);

/* Symbol: mtk_wcn_hif_sdio_f0_readb */
/* Demangled: mtk_wcn_hif_sdio_f0_readb */
int mtk_wcn_hif_sdio_f0_readb(void);

/* Symbol: mtk_wcn_hif_sdio_readl */
/* Demangled: mtk_wcn_hif_sdio_readl */
int mtk_wcn_hif_sdio_readl(void);

/* Symbol: mtk_wcn_hif_sdio_client_reg */
/* Demangled: mtk_wcn_hif_sdio_client_reg */
int mtk_wcn_hif_sdio_client_reg(void);

/* Symbol: mtk_wcn_hif_sdio_client_unreg */
/* Demangled: mtk_wcn_hif_sdio_client_unreg */
int mtk_wcn_hif_sdio_client_unreg(void);

/* Symbol: mtk_wcn_hif_sdio_readb */
/* Demangled: mtk_wcn_hif_sdio_readb */
int mtk_wcn_hif_sdio_readb(void);

/* Symbol: mtk_wcn_hif_sdio_writeb */
/* Demangled: mtk_wcn_hif_sdio_writeb */
int mtk_wcn_hif_sdio_writeb(void);

/* Symbol: mtk_wcn_hif_sdio_writel */
/* Demangled: mtk_wcn_hif_sdio_writel */
int mtk_wcn_hif_sdio_writel(void);

/* Symbol: mtk_wcn_hif_sdio_read_buf */
/* Demangled: mtk_wcn_hif_sdio_read_buf */
int mtk_wcn_hif_sdio_read_buf(void);

/* Symbol: mtk_wcn_hif_sdio_write_buf */
/* Demangled: mtk_wcn_hif_sdio_write_buf */
int mtk_wcn_hif_sdio_write_buf(void);

/* Symbol: mtk_wcn_hif_sdio_abort */
/* Demangled: mtk_wcn_hif_sdio_abort */
int mtk_wcn_hif_sdio_abort(void);

/* Symbol: mtk_wcn_hif_sdio_set_drvdata */
/* Demangled: mtk_wcn_hif_sdio_set_drvdata */
int mtk_wcn_hif_sdio_set_drvdata(void);

/* Symbol: mtk_wcn_hif_sdio_get_drvdata */
/* Demangled: mtk_wcn_hif_sdio_get_drvdata */
int mtk_wcn_hif_sdio_get_drvdata(void);

/* Symbol: mtk_wcn_hif_sdio_get_dev */
/* Demangled: mtk_wcn_hif_sdio_get_dev */
int mtk_wcn_hif_sdio_get_dev(void);

/* Symbol: mtk_wcn_hif_sdio_bus_set_power */
/* Demangled: mtk_wcn_hif_sdio_bus_set_power */
int mtk_wcn_hif_sdio_bus_set_power(void);

/* Symbol: mtk_wcn_hif_sdio_enable_irq */
/* Demangled: mtk_wcn_hif_sdio_enable_irq */
int mtk_wcn_hif_sdio_enable_irq(void);

/* Symbol: mtk_wcn_hif_sdio_f0_writeb */
/* Demangled: mtk_wcn_hif_sdio_f0_writeb */
int mtk_wcn_hif_sdio_f0_writeb(void);

/* Symbol: mtk_wcn_hif_sdio_drv_init */
/* Demangled: mtk_wcn_hif_sdio_drv_init */
int mtk_wcn_hif_sdio_drv_init(void);

/* Symbol: mtk_wcn_hif_sdio_driver_exit */
/* Demangled: mtk_wcn_hif_sdio_driver_exit */
int mtk_wcn_hif_sdio_driver_exit(void);

/* Symbol: __mod_sdio__mtk_sdio_id_tbl_device_table */
/* Demangled: __mod_sdio__mtk_sdio_id_tbl_device_table */
extern void* __mod_sdio__mtk_sdio_id_tbl_device_table;

/* Symbol: stp_dbg_soc_core_dump */
/* Demangled: stp_dbg_soc_core_dump */
int stp_dbg_soc_core_dump(void);

/* Symbol: g_paged_dump_len */
/* Demangled: g_paged_dump_len */
extern void* g_paged_dump_len;

/* Symbol: issue_type */
/* Demangled: issue_type */
extern void* issue_type;

/* Symbol: g_paged_trace_len */
/* Demangled: g_paged_trace_len */
extern void* g_paged_trace_len;

/* Symbol: g_paged_trace_buffer */
/* Demangled: g_paged_trace_buffer */
extern void* g_paged_trace_buffer;

/* Symbol: stp_dbg_start_coredump_timer */
/* Demangled: stp_dbg_start_coredump_timer */
int stp_dbg_start_coredump_timer(void);

/* Symbol: stp_dbg_get_coredump_timer_state */
/* Demangled: stp_dbg_get_coredump_timer_state */
int stp_dbg_get_coredump_timer_state(void);

/* Symbol: g_paged_dump_buffer */
/* Demangled: g_paged_dump_buffer */
extern void* g_paged_dump_buffer;

/* Symbol: stp_dbg_aee_send */
/* Demangled: stp_dbg_aee_send */
int stp_dbg_aee_send(void);

/* Symbol: stp_dbg_dump_send_retry_handler */
/* Demangled: stp_dbg_dump_send_retry_handler */
int stp_dbg_dump_send_retry_handler(void);

/* Symbol: stp_dbg_poll_dmaregs */
/* Demangled: stp_dbg_poll_dmaregs */
int stp_dbg_poll_dmaregs(void);

/* Symbol: stp_dbg_soc_id_to_task */
/* Demangled: stp_dbg_soc_id_to_task */
int stp_dbg_soc_id_to_task(void);

/* Symbol: soc_gen_two_task_id_adapter */
/* Demangled: soc_gen_two_task_id_adapter */
extern void* soc_gen_two_task_id_adapter;

/* Symbol: soc_gen_three_task_id_adapter */
/* Demangled: soc_gen_three_task_id_adapter */
extern void* soc_gen_three_task_id_adapter;

/* Symbol: stp_dbg_soc_read_debug_crs */
/* Demangled: stp_dbg_soc_read_debug_crs */
int stp_dbg_soc_read_debug_crs(void);

/* Symbol: stp_dbg_combo_core_dump */
/* Demangled: stp_dbg_combo_core_dump */
int stp_dbg_combo_core_dump(void);

/* Symbol: stp_dbg_dmp_out_ex */
/* Demangled: stp_dbg_dmp_out_ex */
int stp_dbg_dmp_out_ex(void);

/* Symbol: stp_dbg_combo_id_to_task */
/* Demangled: stp_dbg_combo_id_to_task */
int stp_dbg_combo_id_to_task(void);

/* Symbol: combo_legacy_task_id_adapter */
/* Demangled: combo_legacy_task_id_adapter */
extern void* combo_legacy_task_id_adapter;

/* Symbol: osal_strcat */
/* Demangled: osal_strcat */
int osal_strcat(void);

/* Symbol: osal_strnstr */
/* Demangled: osal_strnstr */
int osal_strnstr(void);

/* Symbol: osal_dbg_assert */
/* Demangled: osal_dbg_assert */
int osal_dbg_assert(void);

/* Symbol: osal_wait_for_signal */
/* Demangled: osal_wait_for_signal */
int osal_wait_for_signal(void);

/* Symbol: osal_signal_active_state */
/* Demangled: osal_signal_active_state */
int osal_signal_active_state(void);

/* Symbol: osal_wait_for_event_bit_set */
/* Demangled: osal_wait_for_event_bit_set */
int osal_wait_for_event_bit_set(void);

/* Symbol: osal_wait_for_event_bit_clr */
/* Demangled: osal_wait_for_event_bit_clr */
int osal_wait_for_event_bit_clr(void);

/* Symbol: _osal_fifo_init */
/* Demangled: _osal_fifo_init */
int _osal_fifo_init(void);

/* Symbol: _osal_fifo_deinit */
/* Demangled: _osal_fifo_deinit */
int _osal_fifo_deinit(void);

/* Symbol: _osal_fifo_size */
/* Demangled: _osal_fifo_size */
int _osal_fifo_size(void);

/* Symbol: _osal_fifo_avail_size */
/* Demangled: _osal_fifo_avail_size */
int _osal_fifo_avail_size(void);

/* Symbol: _osal_fifo_len */
/* Demangled: _osal_fifo_len */
int _osal_fifo_len(void);

/* Symbol: _osal_fifo_is_empty */
/* Demangled: _osal_fifo_is_empty */
int _osal_fifo_is_empty(void);

/* Symbol: _osal_fifo_is_full */
/* Demangled: _osal_fifo_is_full */
int _osal_fifo_is_full(void);

/* Symbol: _osal_fifo_data_in */
/* Demangled: _osal_fifo_data_in */
int _osal_fifo_data_in(void);

/* Symbol: _osal_fifo_data_out */
/* Demangled: _osal_fifo_data_out */
int _osal_fifo_data_out(void);

/* Symbol: _osal_fifo_reset */
/* Demangled: _osal_fifo_reset */
int _osal_fifo_reset(void);

/* Symbol: osal_fifo_sz */
/* Demangled: osal_fifo_sz */
int osal_fifo_sz(void);

/* Symbol: osal_fifo_avail */
/* Demangled: osal_fifo_avail */
int osal_fifo_avail(void);

/* Symbol: osal_fifo_is_empty */
/* Demangled: osal_fifo_is_empty */
int osal_fifo_is_empty(void);

/* Symbol: osal_fifo_is_full */
/* Demangled: osal_fifo_is_full */
int osal_fifo_is_full(void);

/* Symbol: osal_trylock_unsleepable_lock */
/* Demangled: osal_trylock_unsleepable_lock */
int osal_trylock_unsleepable_lock(void);

/* Symbol: osal_udelay */
/* Demangled: osal_udelay */
int osal_udelay(void);

/* Symbol: ftrace_flag */
/* Demangled: ftrace_flag */
extern void* ftrace_flag;

/* Symbol: osal_set_op_result */
/* Demangled: osal_set_op_result */
int osal_set_op_result(void);

/* Symbol: osal_opq_has_op */
/* Demangled: osal_opq_has_op */
int osal_opq_has_op(void);

/* Symbol: ring_init */
/* Demangled: ring_init */
int ring_init(void);

/* Symbol: ring_read_prepare */
/* Demangled: ring_read_prepare */
int ring_read_prepare(void);

/* Symbol: _ring_segment_prepare_item */
/* Demangled: _ring_segment_prepare_item */
int _ring_segment_prepare_item(void);

/* Symbol: _ring_read_commit */
/* Demangled: _ring_read_commit */
int _ring_read_commit(void);

/* Symbol: ring_overwrite_prepare */
/* Demangled: ring_overwrite_prepare */
int ring_overwrite_prepare(void);

/* Symbol: _ring_segment_prepare */
/* Demangled: _ring_segment_prepare */
int _ring_segment_prepare(void);

/* Symbol: _ring_write_commit */
/* Demangled: _ring_write_commit */
int _ring_write_commit(void);

/* Symbol: __crc_wmt_dev_patch_get */
/* Demangled: __crc_wmt_dev_patch_get */
extern void* __crc_wmt_dev_patch_get;

/* Symbol: __crc_mtk_wcn_common_drv_init */
/* Demangled: __crc_mtk_wcn_common_drv_init */
extern void* __crc_mtk_wcn_common_drv_init;

/* Symbol: __crc_mtk_wcn_common_drv_exit */
/* Demangled: __crc_mtk_wcn_common_drv_exit */
extern void* __crc_mtk_wcn_common_drv_exit;

/* Symbol: wmt_dev_apo_ctrl */
/* Demangled: wmt_dev_apo_ctrl */
int wmt_dev_apo_ctrl(void);

/* Symbol: always_pwr_on_flag */
/* Demangled: always_pwr_on_flag */
extern void* always_pwr_on_flag;

/* Symbol: wmt_lpbk_handler */
/* Demangled: wmt_lpbk_handler */
int wmt_lpbk_handler(void);

/* Symbol: wmt_dev_blank_handler */
/* Demangled: wmt_dev_blank_handler */
int wmt_dev_blank_handler(void);

/* Symbol: u4RxFlag */
/* Demangled: u4RxFlag */
extern void* u4RxFlag;

/* Symbol: gpRxEvent */
/* Demangled: gpRxEvent */
extern void* gpRxEvent;

/* Symbol: wmt_dev_patch_info_free */
/* Demangled: wmt_dev_patch_info_free */
int wmt_dev_patch_info_free(void);

/* Symbol: pPatchInfo */
/* Demangled: pPatchInfo */
extern void* pPatchInfo;

/* Symbol: wmt_dev_is_file_exist */
/* Demangled: wmt_dev_is_file_exist */
int wmt_dev_is_file_exist(void);

/* Symbol: wmt_dev_tra_bitf_update */
/* Demangled: wmt_dev_tra_bitf_update */
int wmt_dev_tra_bitf_update(void);

/* Symbol: wmt_dev_tra_uart_update */
/* Demangled: wmt_dev_tra_uart_update */
int wmt_dev_tra_uart_update(void);

/* Symbol: wmt_dev_set_temp_threshold */
/* Demangled: wmt_dev_set_temp_threshold */
int wmt_dev_set_temp_threshold(void);

/* Symbol: WMT_write */
/* Demangled: WMT_write */
int WMT_write(void);

/* Symbol: WMT_read */
/* Demangled: WMT_read */
int WMT_read(void);

/* Symbol: WMT_poll */
/* Demangled: WMT_poll */
int WMT_poll(void);

/* Symbol: WMT_unlocked_ioctl */
/* Demangled: WMT_unlocked_ioctl */
int WMT_unlocked_ioctl(void);

/* Symbol: hif_info */
/* Demangled: hif_info */
extern void* hif_info;

/* Symbol: pAtchNum */
/* Demangled: pAtchNum */
extern void* pAtchNum;

/* Symbol: wmt_dbg_fwinfor_from_emi */
/* Demangled: wmt_dbg_fwinfor_from_emi */
int wmt_dbg_fwinfor_from_emi(void);

/* Symbol: WMT_compat_ioctl */
/* Demangled: WMT_compat_ioctl */
int WMT_compat_ioctl(void);

/* Symbol: gWmtClose */
/* Demangled: gWmtClose */
extern void* gWmtClose;

/* Symbol: wmt_dev_bgw_desense_init */
/* Demangled: wmt_dev_bgw_desense_init */
int wmt_dev_bgw_desense_init(void);

/* Symbol: bgw_init_socket */
/* Demangled: bgw_init_socket */
int bgw_init_socket(void);

/* Symbol: wmt_dev_bgw_desense_deinit */
/* Demangled: wmt_dev_bgw_desense_deinit */
int wmt_dev_bgw_desense_deinit(void);

/* Symbol: bgw_destroy_netlink_kernel */
/* Demangled: bgw_destroy_netlink_kernel */
int bgw_destroy_netlink_kernel(void);

/* Symbol: send_command_to_daemon */
/* Demangled: send_command_to_daemon */
int send_command_to_daemon(void);

/* Symbol: gWmtFops */
/* Demangled: gWmtFops */
extern void* gWmtFops;

/* Symbol: wmt_class */
/* Demangled: wmt_class */
extern void* wmt_class;

/* Symbol: wmt_dev */
/* Demangled: wmt_dev */
extern void* wmt_dev;

/* Symbol: wmt_dev_user_proc_remove */
/* Demangled: wmt_dev_user_proc_remove */
int wmt_dev_user_proc_remove(void);

/* Symbol: wmt_dev_user_proc_setup */
/* Demangled: wmt_dev_user_proc_setup */
int wmt_dev_user_proc_setup(void);

/* Symbol: wmt_dev_proc_init */
/* Demangled: wmt_dev_proc_init */
int wmt_dev_proc_init(void);

/* Symbol: wmt_alarm_init */
/* Demangled: wmt_alarm_init */
int wmt_alarm_init(void);

/* Symbol: mtk_wcn_stp_uart_drv_init */
/* Demangled: mtk_wcn_stp_uart_drv_init */
int mtk_wcn_stp_uart_drv_init(void);

/* Symbol: mtk_wcn_stp_sdio_drv_init */
/* Demangled: mtk_wcn_stp_sdio_drv_init */
int mtk_wcn_stp_sdio_drv_init(void);

/* Symbol: mtk_wcn_stp_uart_drv_exit */
/* Demangled: mtk_wcn_stp_uart_drv_exit */
int mtk_wcn_stp_uart_drv_exit(void);

/* Symbol: mtk_wcn_stp_sdio_drv_exit */
/* Demangled: mtk_wcn_stp_sdio_drv_exit */
int mtk_wcn_stp_sdio_drv_exit(void);

/* Symbol: wmt_dev_proc_deinit */
/* Demangled: wmt_dev_proc_deinit */
int wmt_dev_proc_deinit(void);

/* Symbol: wmt_alarm_deinit */
/* Demangled: wmt_alarm_deinit */
int wmt_alarm_deinit(void);

/* Symbol: connsys_log_blank_state_changed */
/* Demangled: connsys_log_blank_state_changed */
int connsys_log_blank_state_changed(void);

/* Symbol: currentLpbkStatus */
/* Demangled: currentLpbkStatus */
extern void* currentLpbkStatus;

/* Symbol: __crc_mtk_wcn_stp_sdio_drv_init */
/* Demangled: __crc_mtk_wcn_stp_sdio_drv_init */
extern void* __crc_mtk_wcn_stp_sdio_drv_init;

/* Symbol: __crc_mtk_wcn_stp_sdio_drv_exit */
/* Demangled: __crc_mtk_wcn_stp_sdio_drv_exit */
extern void* __crc_mtk_wcn_stp_sdio_drv_exit;

/* Symbol: gStpSdioDbgLvl */
/* Demangled: gStpSdioDbgLvl */
extern void* gStpSdioDbgLvl;

/* Symbol: g_stp_sdio_host_count */
/* Demangled: g_stp_sdio_host_count */
extern void* g_stp_sdio_host_count;

/* Symbol: g_stp_sdio_host_info */
/* Demangled: g_stp_sdio_host_info */
extern void* g_stp_sdio_host_info;

/* Symbol: fake_coredump_lock */
/* Demangled: fake_coredump_lock */
extern void* fake_coredump_lock;

/* Symbol: stp_sdio_rw_retry */
/* Demangled: stp_sdio_rw_retry */
int stp_sdio_rw_retry(void);

/* Symbol: stp_sdio_tx */
/* Demangled: stp_sdio_tx */
int stp_sdio_tx(void);

/* Symbol: stp_sdio_issue_fake_coredump */
/* Demangled: stp_sdio_issue_fake_coredump */
int stp_sdio_issue_fake_coredump(void);

/* Symbol: stp_sdio_own_ctrl */
/* Demangled: stp_sdio_own_ctrl */
int stp_sdio_own_ctrl(void);

/* Symbol: stp_sdio_rxdbg_setup */
/* Demangled: stp_sdio_rxdbg_setup */
int stp_sdio_rxdbg_setup(void);

/* Symbol: stp_sdio_rxdbg_remove */
/* Demangled: stp_sdio_rxdbg_remove */
int stp_sdio_rxdbg_remove(void);

/* Symbol: stp_sdio_dump_info */
/* Demangled: stp_sdio_dump_info */
int stp_sdio_dump_info(void);

/* Symbol: stp_sdio_txdbg_setup */
/* Demangled: stp_sdio_txdbg_setup */
int stp_sdio_txdbg_setup(void);

/* Symbol: stp_sdio_txdbg_remove */
/* Demangled: stp_sdio_txdbg_remove */
int stp_sdio_txdbg_remove(void);

/* Symbol: stp_sdio_owndbg_setup */
/* Demangled: stp_sdio_owndbg_setup */
int stp_sdio_owndbg_setup(void);

/* Symbol: stp_sdio_owndbg_remove */
/* Demangled: stp_sdio_owndbg_remove */
int stp_sdio_owndbg_remove(void);

/* Symbol: stp_sdio_reg_rw */
/* Demangled: stp_sdio_reg_rw */
int stp_sdio_reg_rw(void);

/* Symbol: g_stp_sdio_cltinfo */
/* Demangled: g_stp_sdio_cltinfo */
extern void* g_stp_sdio_cltinfo;

/* Symbol: gp_info */
/* Demangled: gp_info */
extern void* gp_info;

/* Symbol: g_ownback_done */
/* Demangled: g_ownback_done */
extern void* g_ownback_done;

/* Symbol: is_wait_ownback */
/* Demangled: is_wait_ownback */
extern void* is_wait_ownback;

/* Symbol: gWmtIdcInfo */
/* Demangled: gWmtIdcInfo */
extern void* gWmtIdcInfo;

/* Symbol: wmt_idc_msg_from_lte_handing */
/* Demangled: wmt_idc_msg_from_lte_handing */
int wmt_idc_msg_from_lte_handing(void);

/* Symbol: wmt_idc_dump_debug_msg */
/* Demangled: wmt_idc_dump_debug_msg */
int wmt_idc_dump_debug_msg(void);

/* Symbol: wmt_idc_msg_to_lte_handing_for_test */
/* Demangled: wmt_idc_msg_to_lte_handing_for_test */
int wmt_idc_msg_to_lte_handing_for_test(void);

/* Symbol: __crc_mtk_wcn_stp_uart_drv_init */
/* Demangled: __crc_mtk_wcn_stp_uart_drv_init */
extern void* __crc_mtk_wcn_stp_uart_drv_init;

/* Symbol: __crc_mtk_wcn_stp_uart_drv_exit */
/* Demangled: __crc_mtk_wcn_stp_uart_drv_exit */
extern void* __crc_mtk_wcn_stp_uart_drv_exit;

/* Symbol: g_stp_uart_rx_fifo */
/* Demangled: g_stp_uart_rx_fifo */
extern void* g_stp_uart_rx_fifo;

/* Symbol: g_stp_uart_rx_fifo_tasklet */
/* Demangled: g_stp_uart_rx_fifo_tasklet */
extern void* g_stp_uart_rx_fifo_tasklet;

/* Symbol: g_rx_data */
/* Demangled: g_rx_data */
extern void* g_rx_data;

/* Symbol: wr_idx */
/* Demangled: wr_idx */
extern void* wr_idx;

/* Symbol: rd_idx */
/* Demangled: rd_idx */
extern void* rd_idx;

/* Symbol: stp_tty */
/* Demangled: stp_tty */
extern void* stp_tty;

/* Symbol: tx_buf */
/* Demangled: tx_buf */
extern void* tx_buf;

/* Symbol: g_stp_uart_rx_fifo_spinlock */
/* Demangled: g_stp_uart_rx_fifo_spinlock */
extern void* g_stp_uart_rx_fifo_spinlock;

/* Symbol: buf_lock */
/* Demangled: buf_lock */
extern void* buf_lock;

/* Symbol: buf_emi */
/* Demangled: buf_emi */
extern void* buf_emi;

/* Symbol: wmt_dev_dbg_setup */
/* Demangled: wmt_dev_dbg_setup */
int wmt_dev_dbg_setup(void);

/* Symbol: gCoexBuf */
/* Demangled: gCoexBuf */
extern void* gCoexBuf;

/* Symbol: wmt_dev_dbg_remove */
/* Demangled: wmt_dev_dbg_remove */
int wmt_dev_dbg_remove(void);

/* Symbol: wmt_step_print_version */
/* Demangled: wmt_step_print_version */
int wmt_step_print_version(void);

/* Symbol: wmt_step_deinit */
/* Demangled: wmt_step_deinit */
int wmt_step_deinit(void);

/* Symbol: wmt_step_init */
/* Demangled: wmt_step_init */
int wmt_step_init(void);

/* Symbol: connsys_dedicated_log_set_log_mode */
/* Demangled: connsys_dedicated_log_set_log_mode */
int connsys_dedicated_log_set_log_mode(void);

/* Symbol: connsys_dedicated_log_dump_emi */
/* Demangled: connsys_dedicated_log_dump_emi */
int connsys_dedicated_log_dump_emi(void);

/* Symbol: connsys_log_alarm_enable */
/* Demangled: connsys_log_alarm_enable */
int connsys_log_alarm_enable(void);

/* Symbol: connsys_log_alarm_disable */
/* Demangled: connsys_log_alarm_disable */
int connsys_log_alarm_disable(void);

/* Symbol: wmt_alarm_start */
/* Demangled: wmt_alarm_start */
int wmt_alarm_start(void);

/* Symbol: wmt_alarm_cancel */
/* Demangled: wmt_alarm_cancel */
int wmt_alarm_cancel(void);

/* Symbol: mtk_btif_rxd_be_blocked_flag_get */
/* Demangled: mtk_btif_rxd_be_blocked_flag_get */
int mtk_btif_rxd_be_blocked_flag_get(void);

/* Symbol: stp_dbg_core_dump_deinit_gcoredump */
/* Demangled: stp_dbg_core_dump_deinit_gcoredump */
int stp_dbg_core_dump_deinit_gcoredump(void);

/* Symbol: stp_dbg_set_fw_info */
/* Demangled: stp_dbg_set_fw_info */
int stp_dbg_set_fw_info(void);

/* Symbol: g_stp_dbg */
/* Demangled: g_stp_dbg */
extern void* g_stp_dbg;

/* Symbol: gStpDbgDumpType */
/* Demangled: gStpDbgDumpType */
extern void* gStpDbgDumpType;

/* Symbol: gStpDbgLogOut */
/* Demangled: gStpDbgLogOut */
extern void* gStpDbgLogOut;

/* Symbol: stp_dbg_nl_send */
/* Demangled: stp_dbg_nl_send */
int stp_dbg_nl_send(void);

/* Symbol: stp_dbg_clear_cpupcr_reg_info */
/* Demangled: stp_dbg_clear_cpupcr_reg_info */
int stp_dbg_clear_cpupcr_reg_info(void);

/* Symbol: stp_dbg_get_host_trigger_assert */
/* Demangled: stp_dbg_get_host_trigger_assert */
int stp_dbg_get_host_trigger_assert(void);

/* Symbol: stp_dbg_id_to_task */
/* Demangled: stp_dbg_id_to_task */
int stp_dbg_id_to_task(void);

/* Symbol: wmt_dev_proc_for_dump_info_setup */
/* Demangled: wmt_dev_proc_for_dump_info_setup */
int wmt_dev_proc_for_dump_info_setup(void);

/* Symbol: wmt_dev_proc_for_dump_info_remove */
/* Demangled: wmt_dev_proc_for_dump_info_remove */
int wmt_dev_proc_for_dump_info_remove(void);

/* Symbol: wmt_dev_proc_for_aee_setup */
/* Demangled: wmt_dev_proc_for_aee_setup */
int wmt_dev_proc_for_aee_setup(void);

/* Symbol: wmt_dev_proc_for_aee_remove */
/* Demangled: wmt_dev_proc_for_aee_remove */
int wmt_dev_proc_for_aee_remove(void);

/* Symbol: g_wmt_alarm */
/* Demangled: g_wmt_alarm */
extern void* g_wmt_alarm;

/* Symbol: _wmt_alarm_cancel_nolock */
/* Demangled: _wmt_alarm_cancel_nolock */
int _wmt_alarm_cancel_nolock(void);

/* Symbol: __crc_fw_log_wmt_init */
/* Demangled: __crc_fw_log_wmt_init */
extern void* __crc_fw_log_wmt_init;

/* Symbol: __crc_fw_log_wmt_deinit */
/* Demangled: __crc_fw_log_wmt_deinit */
extern void* __crc_fw_log_wmt_deinit;

/* Symbol: connsys_log_read_to_user */
/* Demangled: connsys_log_read_to_user */
int connsys_log_read_to_user(void);

/* Symbol: connsys_log_get_buf_size */
/* Demangled: connsys_log_get_buf_size */
int connsys_log_get_buf_size(void);

/* Symbol: gLogFops */
/* Demangled: gLogFops */
extern void* gLogFops;

/* Symbol: connsys_log_init */
/* Demangled: connsys_log_init */
int connsys_log_init(void);

/* Symbol: connsys_log_register_event_cb */
/* Demangled: connsys_log_register_event_cb */
int connsys_log_register_event_cb(void);

/* Symbol: connsys_log_deinit */
/* Demangled: connsys_log_deinit */
int connsys_log_deinit(void);

/* Symbol: _wmt_step_do_register_action */
/* Demangled: _wmt_step_do_register_action */
int _wmt_step_do_register_action(void);

/* Symbol: g_step_env */
/* Demangled: g_step_env */
extern void* g_step_env;

/* Symbol: wmt_step_setup */
/* Demangled: wmt_step_setup */
int wmt_step_setup(void);

/* Symbol: wmt_step_do_emi_action */
/* Demangled: wmt_step_do_emi_action */
int wmt_step_do_emi_action(void);

/* Symbol: wmt_step_do_condition_emi_action */
/* Demangled: wmt_step_do_condition_emi_action */
int wmt_step_do_condition_emi_action(void);

/* Symbol: wmt_step_do_register_action */
/* Demangled: wmt_step_do_register_action */
int wmt_step_do_register_action(void);

/* Symbol: wmt_step_do_condition_register_action */
/* Demangled: wmt_step_do_condition_register_action */
int wmt_step_do_condition_register_action(void);

/* Symbol: wmt_step_do_gpio_action */
/* Demangled: wmt_step_do_gpio_action */
int wmt_step_do_gpio_action(void);

/* Symbol: wmt_step_do_disable_reset_action */
/* Demangled: wmt_step_do_disable_reset_action */
int wmt_step_do_disable_reset_action(void);

/* Symbol: wmt_step_do_chip_reset_action */
/* Demangled: wmt_step_do_chip_reset_action */
int wmt_step_do_chip_reset_action(void);

/* Symbol: wmt_step_do_keep_wakeup_action */
/* Demangled: wmt_step_do_keep_wakeup_action */
int wmt_step_do_keep_wakeup_action(void);

/* Symbol: wmt_step_do_cancel_wakeup_action */
/* Demangled: wmt_step_do_cancel_wakeup_action */
int wmt_step_do_cancel_wakeup_action(void);

/* Symbol: wmt_step_do_periodic_dump_action */
/* Demangled: wmt_step_do_periodic_dump_action */
int wmt_step_do_periodic_dump_action(void);

/* Symbol: wmt_step_do_show_string_action */
/* Demangled: wmt_step_do_show_string_action */
int wmt_step_do_show_string_action(void);

/* Symbol: wmt_step_do_sleep_action */
/* Demangled: wmt_step_do_sleep_action */
int wmt_step_do_sleep_action(void);

/* Symbol: wmt_step_do_condition_action */
/* Demangled: wmt_step_do_condition_action */
int wmt_step_do_condition_action(void);

/* Symbol: wmt_step_do_value_action */
/* Demangled: wmt_step_do_value_action */
int wmt_step_do_value_action(void);

/* Symbol: wmt_step_create_action */
/* Demangled: wmt_step_create_action */
int wmt_step_create_action(void);

/* Symbol: wmt_step_init_pd_env */
/* Demangled: wmt_step_init_pd_env */
int wmt_step_init_pd_env(void);

/* Symbol: wmt_step_deinit_pd_env */
/* Demangled: wmt_step_deinit_pd_env */
int wmt_step_deinit_pd_env(void);

/* Symbol: wmt_step_get_periodic_dump_entry */
/* Demangled: wmt_step_get_periodic_dump_entry */
int wmt_step_get_periodic_dump_entry(void);

/* Symbol: wmt_step_parse_data */
/* Demangled: wmt_step_parse_data */
int wmt_step_parse_data(void);

/* Symbol: wmt_step_read_file */
/* Demangled: wmt_step_read_file */
int wmt_step_read_file(void);

/* Symbol: wmt_step_remove_action */
/* Demangled: wmt_step_remove_action */
int wmt_step_remove_action(void);

/* Symbol: wmt_step_do_actions */
/* Demangled: wmt_step_do_actions */
int wmt_step_do_actions(void);

/* Symbol: wmt_step_func_crtl_do_actions */
/* Demangled: wmt_step_func_crtl_do_actions */
int wmt_step_func_crtl_do_actions(void);

/* Symbol: wmt_step_command_timeout_do_actions */
/* Demangled: wmt_step_command_timeout_do_actions */
int wmt_step_command_timeout_do_actions(void);

/* Symbol: g_stp_btif */
/* Demangled: g_stp_btif */
extern void* g_stp_btif;

/* Symbol: mtk_wcn_consys_stp_btif_rx_has_pending_data */
/* Demangled: mtk_wcn_consys_stp_btif_rx_has_pending_data */
int mtk_wcn_consys_stp_btif_rx_has_pending_data(void);

/* Symbol: mtk_wcn_consys_stp_btif_tx_has_pending_data */
/* Demangled: mtk_wcn_consys_stp_btif_tx_has_pending_data */
int mtk_wcn_consys_stp_btif_tx_has_pending_data(void);

/* Symbol: mtk_wcn_consys_stp_btif_rx_thread_get */
/* Demangled: mtk_wcn_consys_stp_btif_rx_thread_get */
int mtk_wcn_consys_stp_btif_rx_thread_get(void);

/* Symbol: mtk_wcn_consys_stp_btif_rx */
/* Demangled: mtk_wcn_consys_stp_btif_rx */
int mtk_wcn_consys_stp_btif_rx(void);

/* Symbol: ring_dump */
/* Demangled: ring_dump */
int ring_dump(void);

/* Symbol: ring_dump_segment */
/* Demangled: ring_dump_segment */
int ring_dump_segment(void);

/* Symbol: ring_write_prepare */
/* Demangled: ring_write_prepare */
int ring_write_prepare(void);

/* Symbol: __ring_segment_prepare */
/* Demangled: __ring_segment_prepare */
int __ring_segment_prepare(void);

/* Symbol: ring_emi_init */
/* Demangled: ring_emi_init */
int ring_emi_init(void);

/* Symbol: ring_emi_dump */
/* Demangled: ring_emi_dump */
int ring_emi_dump(void);

/* Symbol: ring_emi_dump_segment */
/* Demangled: ring_emi_dump_segment */
int ring_emi_dump_segment(void);

/* Symbol: ring_emi_read_prepare */
/* Demangled: ring_emi_read_prepare */
int ring_emi_read_prepare(void);

/* Symbol: ring_emi_write_prepare */
/* Demangled: ring_emi_write_prepare */
int ring_emi_write_prepare(void);

/* Symbol: _ring_emi_segment_prepare */
/* Demangled: _ring_emi_segment_prepare */
int _ring_emi_segment_prepare(void);

/* Symbol: _ring_emi_read_commit */
/* Demangled: _ring_emi_read_commit */
int _ring_emi_read_commit(void);

/* Symbol: _ring_emi_write_commit */
/* Demangled: _ring_emi_write_commit */
int _ring_emi_write_commit(void);

/* Symbol: __crc_connsys_log_alarm_enable */
/* Demangled: __crc_connsys_log_alarm_enable */
extern void* __crc_connsys_log_alarm_enable;

/* Symbol: __crc_connsys_log_alarm_disable */
/* Demangled: __crc_connsys_log_alarm_disable */
extern void* __crc_connsys_log_alarm_disable;

/* Symbol: __crc_connsys_log_blank_state_changed */
/* Demangled: __crc_connsys_log_blank_state_changed */
extern void* __crc_connsys_log_blank_state_changed;

/* Symbol: __crc_connsys_dedicated_log_path_apsoc_init */
/* Demangled: __crc_connsys_dedicated_log_path_apsoc_init */
extern void* __crc_connsys_dedicated_log_path_apsoc_init;

/* Symbol: __crc_connsys_dedicated_log_path_apsoc_deinit */
/* Demangled: __crc_connsys_dedicated_log_path_apsoc_deinit */
extern void* __crc_connsys_dedicated_log_path_apsoc_deinit;

/* Symbol: __crc_connsys_log_init */
/* Demangled: __crc_connsys_log_init */
extern void* __crc_connsys_log_init;

/* Symbol: __crc_connsys_log_deinit */
/* Demangled: __crc_connsys_log_deinit */
extern void* __crc_connsys_log_deinit;

/* Symbol: __crc_connsys_log_get_buf_size */
/* Demangled: __crc_connsys_log_get_buf_size */
extern void* __crc_connsys_log_get_buf_size;

/* Symbol: __crc_connsys_log_register_event_cb */
/* Demangled: __crc_connsys_log_register_event_cb */
extern void* __crc_connsys_log_register_event_cb;

/* Symbol: __crc_connsys_log_read */
/* Demangled: __crc_connsys_log_read */
extern void* __crc_connsys_log_read;

/* Symbol: __crc_connsys_log_read_to_user */
/* Demangled: __crc_connsys_log_read_to_user */
extern void* __crc_connsys_log_read_to_user;

/* Symbol: __crc_connsys_log_get_emi_log_base_vir_addr */
/* Demangled: __crc_connsys_log_get_emi_log_base_vir_addr */
extern void* __crc_connsys_log_get_emi_log_base_vir_addr;

/* Symbol: __crc_connsys_dedicated_log_get_utc_time */
/* Demangled: __crc_connsys_dedicated_log_get_utc_time */
extern void* __crc_connsys_dedicated_log_get_utc_time;

/* Symbol: connlog_cache_allocate */
/* Demangled: connlog_cache_allocate */
int connlog_cache_allocate(void);

/* Symbol: connsys_log_read */
/* Demangled: connsys_log_read */
int connsys_log_read(void);

/* Symbol: connsys_log_get_emi_log_base_vir_addr */
/* Demangled: connsys_log_get_emi_log_base_vir_addr */
int connsys_log_get_emi_log_base_vir_addr(void);

/* Symbol: connsys_dedicated_log_get_log_mode */
/* Demangled: connsys_dedicated_log_get_log_mode */
int connsys_dedicated_log_get_log_mode(void);

/* Symbol: log_head */
/* Demangled: log_head */
extern void* log_head;

/* Symbol: timesync_head */
/* Demangled: timesync_head */
extern void* timesync_head;

__END_DECLS

#endif /* BEGONIA_RE_WMT_DRV_KO_H */

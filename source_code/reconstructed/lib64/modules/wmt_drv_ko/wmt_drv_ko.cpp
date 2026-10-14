/*
 * Reverse-Engineered Source for: wmt_drv.ko
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "wmt_drv_ko"

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
#include "wmt_drv_ko.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: rtc_clock_enable */
extern "C" __attribute__((visibility("default"))) int rtc_clock_enable(void) {
    ALOGD("rtc_clock_enable() called");
    return 0;
}

/* Demangled: rtc_lpsd_restore_al_mask */
extern "C" __attribute__((visibility("default"))) int rtc_lpsd_restore_al_mask(void) {
    ALOGD("rtc_lpsd_restore_al_mask() called");
    return 0;
}

/* Demangled: rtc_reset_bbpu_alarm_status */
extern "C" __attribute__((visibility("default"))) int rtc_reset_bbpu_alarm_status(void) {
    ALOGD("rtc_reset_bbpu_alarm_status() called");
    return 0;
}

/* Demangled: _wmt_detect_output_low */
extern "C" __attribute__((visibility("default"))) int _wmt_detect_output_low(void) {
    ALOGD("_wmt_detect_output_low() called");
    return 0;
}

/* Exported Object: gpio_ctrl_info */
extern "C" __attribute__((visibility("default"))) void* gpio_ctrl_info = NULL;

/* Exported Object: gWmtDetectDbgLvl */
extern "C" __attribute__((visibility("default"))) void* gWmtDetectDbgLvl = NULL;

/* Demangled: _wmt_detect_output_high */
extern "C" __attribute__((visibility("default"))) int _wmt_detect_output_high(void) {
    ALOGD("_wmt_detect_output_high() called");
    return 0;
}

/* Demangled: _wmt_detect_read_gpio_input */
extern "C" __attribute__((visibility("default"))) int _wmt_detect_read_gpio_input(void) {
    ALOGD("_wmt_detect_read_gpio_input() called");
    return 0;
}

/* Demangled: wmt_detect_read_ext_cmb_status */
extern "C" __attribute__((visibility("default"))) int wmt_detect_read_ext_cmb_status(void) {
    ALOGD("wmt_detect_read_ext_cmb_status() called");
    return 0;
}

/* Demangled: wmt_detect_chip_pwr_ctrl */
extern "C" __attribute__((visibility("default"))) int wmt_detect_chip_pwr_ctrl(void) {
    ALOGD("wmt_detect_chip_pwr_ctrl() called");
    return 0;
}

/* Demangled: wmt_detect_sdio_pwr_ctrl */
extern "C" __attribute__((visibility("default"))) int wmt_detect_sdio_pwr_ctrl(void) {
    ALOGD("wmt_detect_sdio_pwr_ctrl() called");
    return 0;
}

/* Demangled: wmt_detect_write */
extern "C" __attribute__((visibility("default"))) int wmt_detect_write(void) {
    ALOGD("wmt_detect_write() called");
    return 0;
}

/* Demangled: mtk_wcn_wmt_chipid_query */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_wmt_chipid_query(void) {
    ALOGD("mtk_wcn_wmt_chipid_query() called");
    return 0;
}

/* Demangled: mtk_wcn_wmt_set_chipid */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_wmt_set_chipid(void) {
    ALOGD("mtk_wcn_wmt_set_chipid() called");
    return 0;
}

/* Demangled: wmt_plat_get_soc_chipid */
extern "C" __attribute__((visibility("default"))) int wmt_plat_get_soc_chipid(void) {
    ALOGD("wmt_plat_get_soc_chipid() called");
    return 0;
}

/* Demangled: mtk_wcn_common_drv_init */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_common_drv_init(void) {
    ALOGD("mtk_wcn_common_drv_init() called");
    return 0;
}

/* Demangled: sdio_detect_exit */
extern "C" __attribute__((visibility("default"))) int sdio_detect_exit(void) {
    ALOGD("sdio_detect_exit() called");
    return 0;
}

/* Demangled: sdio_detect_do_autok */
extern "C" __attribute__((visibility("default"))) int sdio_detect_do_autok(void) {
    ALOGD("sdio_detect_do_autok() called");
    return 0;
}

/* Demangled: wmt_plat_get_adie_chipid */
extern "C" __attribute__((visibility("default"))) int wmt_plat_get_adie_chipid(void) {
    ALOGD("wmt_plat_get_adie_chipid() called");
    return 0;
}

/* Demangled: wmt_detect_ext_chip_pwr_on */
extern "C" __attribute__((visibility("default"))) int wmt_detect_ext_chip_pwr_on(void) {
    ALOGD("wmt_detect_ext_chip_pwr_on() called");
    return 0;
}

/* Demangled: wmt_detect_ext_chip_pwr_off */
extern "C" __attribute__((visibility("default"))) int wmt_detect_ext_chip_pwr_off(void) {
    ALOGD("wmt_detect_ext_chip_pwr_off() called");
    return 0;
}

/* Demangled: wmt_detect_ext_chip_detect */
extern "C" __attribute__((visibility("default"))) int wmt_detect_ext_chip_detect(void) {
    ALOGD("wmt_detect_ext_chip_detect() called");
    return 0;
}

/* Demangled: wmt_detect_set_chip_type */
extern "C" __attribute__((visibility("default"))) int wmt_detect_set_chip_type(void) {
    ALOGD("wmt_detect_set_chip_type() called");
    return 0;
}

/* Demangled: wmt_detect_get_chip_type */
extern "C" __attribute__((visibility("default"))) int wmt_detect_get_chip_type(void) {
    ALOGD("wmt_detect_get_chip_type() called");
    return 0;
}

/* Demangled: init_module */
extern "C" __attribute__((visibility("default"))) int init_module(void) {
    ALOGD("init_module() called");
    return 0;
}

/* Demangled: sdio_detect_init */
extern "C" __attribute__((visibility("default"))) int sdio_detect_init(void) {
    ALOGD("sdio_detect_init() called");
    return 0;
}

/* Exported Object: gWmtDetectFops */
extern "C" __attribute__((visibility("default"))) void* gWmtDetectFops = NULL;

/* Exported Object: __this_module */
extern "C" __attribute__((visibility("default"))) void* __this_module = NULL;

/* Exported Object: pDetectClass */
extern "C" __attribute__((visibility("default"))) void* pDetectClass = NULL;

/* Exported Object: pDetectDev */
extern "C" __attribute__((visibility("default"))) void* pDetectDev = NULL;

/* Demangled: cleanup_module */
extern "C" __attribute__((visibility("default"))) int cleanup_module(void) {
    ALOGD("cleanup_module() called");
    return 0;
}

/* Demangled: mtk_wcn_common_drv_exit */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_common_drv_exit(void) {
    ALOGD("mtk_wcn_common_drv_exit() called");
    return 0;
}

/* Demangled: hif_sdio_is_chipid_valid */
extern "C" __attribute__((visibility("default"))) int hif_sdio_is_chipid_valid(void) {
    ALOGD("hif_sdio_is_chipid_valid() called");
    return 0;
}

/* Exported Object: gChipInfoArray */
extern "C" __attribute__((visibility("default"))) void* gChipInfoArray = NULL;

/* Demangled: sdio_detect_query_chipid */
extern "C" __attribute__((visibility("default"))) int sdio_detect_query_chipid(void) {
    ALOGD("sdio_detect_query_chipid() called");
    return 0;
}

/* Exported Object: gComboChipId */
extern "C" __attribute__((visibility("default"))) void* gComboChipId = NULL;

/* Exported Object: gDrvRegistered */
extern "C" __attribute__((visibility("default"))) void* gDrvRegistered = NULL;

/* Exported Object: g_func */
extern "C" __attribute__((visibility("default"))) void* g_func = NULL;

/* Exported Object: __crc_wmt_uart_port_desc */
extern "C" __attribute__((visibility("default"))) void* __crc_wmt_uart_port_desc = NULL;

/* Exported Object: __crc_mtk_wcn_cmb_stub_reg */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_cmb_stub_reg = NULL;

/* Exported Object: __crc_mtk_wcn_cmb_stub_unreg */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_cmb_stub_unreg = NULL;

/* Exported Object: __crc_mtk_wcn_cmb_stub_aif_ctrl */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_cmb_stub_aif_ctrl = NULL;

/* Exported Object: __crc_mtk_wcn_cmb_stub_func_ctrl */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_cmb_stub_func_ctrl = NULL;

/* Exported Object: __crc_mt_combo_plt_enter_deep_idle */
extern "C" __attribute__((visibility("default"))) void* __crc_mt_combo_plt_enter_deep_idle = NULL;

/* Exported Object: __crc_mt_combo_plt_exit_deep_idle */
extern "C" __attribute__((visibility("default"))) void* __crc_mt_combo_plt_exit_deep_idle = NULL;

/* Exported Object: __crc_mtk_wcn_wmt_chipid_query */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_wmt_chipid_query = NULL;

/* Exported Object: __crc_mtk_wcn_wmt_set_chipid */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_wmt_set_chipid = NULL;

/* Exported Object: __crc_mtk_wcn_cmb_stub_do_reset */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_cmb_stub_do_reset = NULL;

/* Exported Object: __crc_board_sdio_ctrl */
extern "C" __attribute__((visibility("default"))) void* __crc_board_sdio_ctrl = NULL;

/* Demangled: mtk_wcn_cmb_stub_reg */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_cmb_stub_reg(void) {
    ALOGD("mtk_wcn_cmb_stub_reg() called");
    return 0;
}

/* Exported Object: gCmbStubLogLevel */
extern "C" __attribute__((visibility("default"))) void* gCmbStubLogLevel = NULL;

/* Demangled: mtk_wcn_cmb_stub_unreg */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_cmb_stub_unreg(void) {
    ALOGD("mtk_wcn_cmb_stub_unreg() called");
    return 0;
}

/* Demangled: mtk_wcn_cmb_stub_aif_ctrl */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_cmb_stub_aif_ctrl(void) {
    ALOGD("mtk_wcn_cmb_stub_aif_ctrl() called");
    return 0;
}

/* Demangled: mtk_wcn_cmb_stub_func_ctrl */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_cmb_stub_func_ctrl(void) {
    ALOGD("mtk_wcn_cmb_stub_func_ctrl() called");
    return 0;
}

/* Demangled: mt_combo_plt_enter_deep_idle */
extern "C" __attribute__((visibility("default"))) int mt_combo_plt_enter_deep_idle(void) {
    ALOGD("mt_combo_plt_enter_deep_idle() called");
    return 0;
}

/* Demangled: mt_combo_plt_exit_deep_idle */
extern "C" __attribute__((visibility("default"))) int mt_combo_plt_exit_deep_idle(void) {
    ALOGD("mt_combo_plt_exit_deep_idle() called");
    return 0;
}

/* Exported Object: gConnectivityChipId */
extern "C" __attribute__((visibility("default"))) void* gConnectivityChipId = NULL;

/* Demangled: mtk_wcn_cmb_stub_do_reset */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_cmb_stub_do_reset(void) {
    ALOGD("mtk_wcn_cmb_stub_do_reset() called");
    return 0;
}

/* Demangled: board_sdio_ctrl */
extern "C" __attribute__((visibility("default"))) int board_sdio_ctrl(void) {
    ALOGD("board_sdio_ctrl() called");
    return 0;
}

/* Exported Object: wmt_uart_port_desc */
extern "C" __attribute__((visibility("default"))) void* wmt_uart_port_desc = NULL;

/* Demangled: mt_get_gpio_mode_base */
extern "C" __attribute__((visibility("default"))) int mt_get_gpio_mode_base(void) {
    ALOGD("mt_get_gpio_mode_base() called");
    return 0;
}

/* Demangled: mt_get_gpio_pull_select_base */
extern "C" __attribute__((visibility("default"))) int mt_get_gpio_pull_select_base(void) {
    ALOGD("mt_get_gpio_pull_select_base() called");
    return 0;
}

/* Demangled: mt_get_gpio_in_base */
extern "C" __attribute__((visibility("default"))) int mt_get_gpio_in_base(void) {
    ALOGD("mt_get_gpio_in_base() called");
    return 0;
}

/* Demangled: mt_get_gpio_out_base */
extern "C" __attribute__((visibility("default"))) int mt_get_gpio_out_base(void) {
    ALOGD("mt_get_gpio_out_base() called");
    return 0;
}

/* Demangled: mt_get_gpio_pull_enable_base */
extern "C" __attribute__((visibility("default"))) int mt_get_gpio_pull_enable_base(void) {
    ALOGD("mt_get_gpio_pull_enable_base() called");
    return 0;
}

/* Demangled: mt_get_gpio_dir_base */
extern "C" __attribute__((visibility("default"))) int mt_get_gpio_dir_base(void) {
    ALOGD("mt_get_gpio_dir_base() called");
    return 0;
}

/* Demangled: mt_get_gpio_ies_base */
extern "C" __attribute__((visibility("default"))) int mt_get_gpio_ies_base(void) {
    ALOGD("mt_get_gpio_ies_base() called");
    return 0;
}

/* Demangled: wmt_gpio_init */
extern "C" __attribute__((visibility("default"))) int wmt_gpio_init(void) {
    ALOGD("wmt_gpio_init() called");
    return 0;
}

/* Exported Object: gpio_state_name */
extern "C" __attribute__((visibility("default"))) void* gpio_state_name = NULL;

/* Exported Object: gpio_pin_name */
extern "C" __attribute__((visibility("default"))) void* gpio_pin_name = NULL;

/* Demangled: wmt_gpio_deinit */
extern "C" __attribute__((visibility("default"))) int wmt_gpio_deinit(void) {
    ALOGD("wmt_gpio_deinit() called");
    return 0;
}

/* Demangled: _wmt_dump_gpio_regs */
extern "C" __attribute__((visibility("default"))) int _wmt_dump_gpio_regs(void) {
    ALOGD("_wmt_dump_gpio_regs() called");
    return 0;
}

/* Demangled: _wmt_gpio_pre_regs */
extern "C" __attribute__((visibility("default"))) int _wmt_gpio_pre_regs(void) {
    ALOGD("_wmt_gpio_pre_regs() called");
    return 0;
}

/* Demangled: _wmt_dump_gpio_pre_regs */
extern "C" __attribute__((visibility("default"))) int _wmt_dump_gpio_pre_regs(void) {
    ALOGD("_wmt_dump_gpio_pre_regs() called");
    return 0;
}

/* Demangled: mtk_wcn_fm_init */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_fm_init(void) {
    ALOGD("mtk_wcn_fm_init() called");
    return 0;
}

/* Demangled: do_fm_drv_init */
extern "C" __attribute__((visibility("default"))) int do_fm_drv_init(void) {
    ALOGD("do_fm_drv_init() called");
    return 0;
}

/* Demangled: do_bluetooth_drv_init */
extern "C" __attribute__((visibility("default"))) int do_bluetooth_drv_init(void) {
    ALOGD("do_bluetooth_drv_init() called");
    return 0;
}

/* Demangled: mtk_wcn_wlan_gen4_init */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_wlan_gen4_init(void) {
    ALOGD("mtk_wcn_wlan_gen4_init() called");
    return 0;
}

/* Demangled: mtk_wcn_wlan_gen3_init */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_wlan_gen3_init(void) {
    ALOGD("mtk_wcn_wlan_gen3_init() called");
    return 0;
}

/* Demangled: mtk_wcn_wlan_gen2_init */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_wlan_gen2_init(void) {
    ALOGD("mtk_wcn_wlan_gen2_init() called");
    return 0;
}

/* Demangled: mtk_wcn_wmt_wifi_init */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_wmt_wifi_init(void) {
    ALOGD("mtk_wcn_wmt_wifi_init() called");
    return 0;
}

/* Demangled: do_wlan_drv_init */
extern "C" __attribute__((visibility("default"))) int do_wlan_drv_init(void) {
    ALOGD("do_wlan_drv_init() called");
    return 0;
}

/* Demangled: mtk_wcn_stpgps_drv_init */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stpgps_drv_init(void) {
    ALOGD("mtk_wcn_stpgps_drv_init() called");
    return 0;
}

/* Demangled: do_gps_drv_init */
extern "C" __attribute__((visibility("default"))) int do_gps_drv_init(void) {
    ALOGD("do_gps_drv_init() called");
    return 0;
}

/* Exported Object: conn_reg */
extern "C" __attribute__((visibility("default"))) void* conn_reg = NULL;

/* Exported Object: wmtPlatLogLvl */
extern "C" __attribute__((visibility("default"))) void* wmtPlatLogLvl = NULL;

/* Exported Object: clk_infracfg_ao_ccif4_ap_cg */
extern "C" __attribute__((visibility("default"))) void* clk_infracfg_ao_ccif4_ap_cg = NULL;

/* Exported Object: clk_scp_conn_main */
extern "C" __attribute__((visibility("default"))) void* clk_scp_conn_main = NULL;

/* Exported Object: rom_patch_dl_flag */
extern "C" __attribute__((visibility("default"))) void* rom_patch_dl_flag = NULL;

/* Demangled: mtk_wcn_soc_rom_patch_dwn */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_soc_rom_patch_dwn(void) {
    ALOGD("mtk_wcn_soc_rom_patch_dwn() called");
    return 0;
}

/* Demangled: wmt_plat_soc_co_clock_flag_get */
extern "C" __attribute__((visibility("default"))) int wmt_plat_soc_co_clock_flag_get(void) {
    ALOGD("wmt_plat_soc_co_clock_flag_get() called");
    return 0;
}

/* Exported Object: reg_VCN18 */
extern "C" __attribute__((visibility("default"))) void* reg_VCN18 = NULL;

/* Exported Object: reg_VCN33_1 */
extern "C" __attribute__((visibility("default"))) void* reg_VCN33_1 = NULL;

/* Exported Object: reg_VCN33_2 */
extern "C" __attribute__((visibility("default"))) void* reg_VCN33_2 = NULL;

/* Exported Object: mtk_wcn_emi_addr_info */
extern "C" __attribute__((visibility("default"))) void* mtk_wcn_emi_addr_info = NULL;

/* Demangled: connsys_dedicated_log_path_apsoc_init */
extern "C" __attribute__((visibility("default"))) int connsys_dedicated_log_path_apsoc_init(void) {
    ALOGD("connsys_dedicated_log_path_apsoc_init() called");
    return 0;
}

/* Demangled: fw_log_wmt_init */
extern "C" __attribute__((visibility("default"))) int fw_log_wmt_init(void) {
    ALOGD("fw_log_wmt_init() called");
    return 0;
}

/* Demangled: fw_log_wmt_deinit */
extern "C" __attribute__((visibility("default"))) int fw_log_wmt_deinit(void) {
    ALOGD("fw_log_wmt_deinit() called");
    return 0;
}

/* Demangled: connsys_dedicated_log_path_apsoc_deinit */
extern "C" __attribute__((visibility("default"))) int connsys_dedicated_log_path_apsoc_deinit(void) {
    ALOGD("connsys_dedicated_log_path_apsoc_deinit() called");
    return 0;
}

/* Demangled: osal_malloc */
extern "C" __attribute__((visibility("default"))) int osal_malloc(void) {
    ALOGD("osal_malloc() called");
    return 0;
}

/* Demangled: osal_strlen */
extern "C" __attribute__((visibility("default"))) int osal_strlen(void) {
    ALOGD("osal_strlen() called");
    return 0;
}

/* Demangled: osal_free */
extern "C" __attribute__((visibility("default"))) int osal_free(void) {
    ALOGD("osal_free() called");
    return 0;
}

/* Demangled: mtk_wcn_consys_jtag_set_for_mcu */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_jtag_set_for_mcu(void) {
    ALOGD("mtk_wcn_consys_jtag_set_for_mcu() called");
    return 0;
}

/* Exported Object: gJtagCtrl */
extern "C" __attribute__((visibility("default"))) void* gJtagCtrl = NULL;

/* Demangled: mtk_wcn_consys_jtag_flag_ctrl */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_jtag_flag_ctrl(void) {
    ALOGD("mtk_wcn_consys_jtag_flag_ctrl() called");
    return 0;
}

/* Demangled: mtk_wcn_get_consys_ic_ops */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_get_consys_ic_ops(void) {
    ALOGD("mtk_wcn_get_consys_ic_ops() called");
    return 0;
}

/* Exported Object: consys_ic_ops */
extern "C" __attribute__((visibility("default"))) void* consys_ic_ops = NULL;

/* Demangled: wmt_lib_trigger_assert_keyword_delay */
extern "C" __attribute__((visibility("default"))) int wmt_lib_trigger_assert_keyword_delay(void) {
    ALOGD("wmt_lib_trigger_assert_keyword_delay() called");
    return 0;
}

/* Exported Object: mtk_wcn_emi_state_off */
extern "C" __attribute__((visibility("default"))) void* mtk_wcn_emi_state_off = NULL;

/* Exported Object: g_connsys_lp_dump_info */
extern "C" __attribute__((visibility("default"))) void* g_connsys_lp_dump_info = NULL;

/* Exported Object: __crc_wmt_plat_read_cpupcr */
extern "C" __attribute__((visibility("default"))) void* __crc_wmt_plat_read_cpupcr = NULL;

/* Exported Object: __crc_wmt_plat_get_soc_chipid */
extern "C" __attribute__((visibility("default"))) void* __crc_wmt_plat_get_soc_chipid = NULL;

/* Demangled: wmt_plat_audio_ctrl */
extern "C" __attribute__((visibility("default"))) int wmt_plat_audio_ctrl(void) {
    ALOGD("wmt_plat_audio_ctrl() called");
    return 0;
}

/* Exported Object: gWmtDbgLvl */
extern "C" __attribute__((visibility("default"))) void* gWmtDbgLvl = NULL;

/* Demangled: osal_err_print */
extern "C" __attribute__((visibility("default"))) int osal_err_print(void) {
    ALOGD("osal_err_print() called");
    return 0;
}

/* Demangled: osal_warn_print */
extern "C" __attribute__((visibility("default"))) int osal_warn_print(void) {
    ALOGD("osal_warn_print() called");
    return 0;
}

/* Exported Object: wmt_plat_audio_if_cb */
extern "C" __attribute__((visibility("default"))) void* wmt_plat_audio_if_cb = NULL;

/* Demangled: wmt_plat_gpio_ctrl */
extern "C" __attribute__((visibility("default"))) int wmt_plat_gpio_ctrl(void) {
    ALOGD("wmt_plat_gpio_ctrl() called");
    return 0;
}

/* Demangled: wmt_plat_merge_if_flag_get */
extern "C" __attribute__((visibility("default"))) int wmt_plat_merge_if_flag_get(void) {
    ALOGD("wmt_plat_merge_if_flag_get() called");
    return 0;
}

/* Exported Object: gWmtMergeIfSupport */
extern "C" __attribute__((visibility("default"))) void* gWmtMergeIfSupport = NULL;

/* Demangled: wmt_plat_bgf_irq_isr */
extern "C" __attribute__((visibility("default"))) int wmt_plat_bgf_irq_isr(void) {
    ALOGD("wmt_plat_bgf_irq_isr() called");
    return 0;
}

/* Demangled: wmt_plat_eirq_ctrl */
extern "C" __attribute__((visibility("default"))) int wmt_plat_eirq_ctrl(void) {
    ALOGD("wmt_plat_eirq_ctrl() called");
    return 0;
}

/* Exported Object: wmt_plat_bgf_irq_cb */
extern "C" __attribute__((visibility("default"))) void* wmt_plat_bgf_irq_cb = NULL;

/* Demangled: mtk_wcn_consys_read_irq_info_from_dts */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_read_irq_info_from_dts(void) {
    ALOGD("mtk_wcn_consys_read_irq_info_from_dts() called");
    return 0;
}

/* Exported Object: g_bgf_irq_lock */
extern "C" __attribute__((visibility("default"))) void* g_bgf_irq_lock = NULL;

/* Demangled: wmt_plat_irq_cb_reg */
extern "C" __attribute__((visibility("default"))) int wmt_plat_irq_cb_reg(void) {
    ALOGD("wmt_plat_irq_cb_reg() called");
    return 0;
}

/* Demangled: wmt_plat_aif_cb_reg */
extern "C" __attribute__((visibility("default"))) int wmt_plat_aif_cb_reg(void) {
    ALOGD("wmt_plat_aif_cb_reg() called");
    return 0;
}

/* Demangled: wmt_plat_func_ctrl_cb_reg */
extern "C" __attribute__((visibility("default"))) int wmt_plat_func_ctrl_cb_reg(void) {
    ALOGD("wmt_plat_func_ctrl_cb_reg() called");
    return 0;
}

/* Exported Object: wmt_plat_func_ctrl_cb */
extern "C" __attribute__((visibility("default"))) void* wmt_plat_func_ctrl_cb = NULL;

/* Demangled: wmt_plat_thermal_ctrl_cb_reg */
extern "C" __attribute__((visibility("default"))) int wmt_plat_thermal_ctrl_cb_reg(void) {
    ALOGD("wmt_plat_thermal_ctrl_cb_reg() called");
    return 0;
}

/* Exported Object: wmt_plat_thermal_query_ctrl_cb */
extern "C" __attribute__((visibility("default"))) void* wmt_plat_thermal_query_ctrl_cb = NULL;

/* Demangled: wmt_plat_trigger_assert_cb_reg */
extern "C" __attribute__((visibility("default"))) int wmt_plat_trigger_assert_cb_reg(void) {
    ALOGD("wmt_plat_trigger_assert_cb_reg() called");
    return 0;
}

/* Exported Object: wmt_plat_trigger_assert_cb */
extern "C" __attribute__((visibility("default"))) void* wmt_plat_trigger_assert_cb = NULL;

/* Demangled: wmt_plat_deep_idle_ctrl_cb_reg */
extern "C" __attribute__((visibility("default"))) int wmt_plat_deep_idle_ctrl_cb_reg(void) {
    ALOGD("wmt_plat_deep_idle_ctrl_cb_reg() called");
    return 0;
}

/* Exported Object: wmt_plat_deep_idle_ctrl_cb */
extern "C" __attribute__((visibility("default"))) void* wmt_plat_deep_idle_ctrl_cb = NULL;

/* Exported Object: gCoClockFlag */
extern "C" __attribute__((visibility("default"))) void* gCoClockFlag = NULL;

/* Demangled: wmt_plat_init */
extern "C" __attribute__((visibility("default"))) int wmt_plat_init(void) {
    ALOGD("wmt_plat_init() called");
    return 0;
}

/* Demangled: mtk_wcn_consys_co_clock_type */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_co_clock_type(void) {
    ALOGD("mtk_wcn_consys_co_clock_type() called");
    return 0;
}

/* Demangled: osal_strcpy */
extern "C" __attribute__((visibility("default"))) int osal_strcpy(void) {
    ALOGD("osal_strcpy() called");
    return 0;
}

/* Demangled: osal_wake_lock_init */
extern "C" __attribute__((visibility("default"))) int osal_wake_lock_init(void) {
    ALOGD("osal_wake_lock_init() called");
    return 0;
}

/* Demangled: osal_sleepable_lock_init */
extern "C" __attribute__((visibility("default"))) int osal_sleepable_lock_init(void) {
    ALOGD("osal_sleepable_lock_init() called");
    return 0;
}

/* Demangled: mtk_wcn_consys_hw_init */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_hw_init(void) {
    ALOGD("mtk_wcn_consys_hw_init() called");
    return 0;
}

/* Demangled: mtk_wcn_cmb_hw_init */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_cmb_hw_init(void) {
    ALOGD("mtk_wcn_cmb_hw_init() called");
    return 0;
}

/* Demangled: mtk_wcn_consys_detect_adie_chipid */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_detect_adie_chipid(void) {
    ALOGD("mtk_wcn_consys_detect_adie_chipid() called");
    return 0;
}

/* Demangled: mtk_wcn_consys_clock_fail_dump */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_clock_fail_dump(void) {
    ALOGD("mtk_wcn_consys_clock_fail_dump() called");
    return 0;
}

/* Demangled: wmt_plat_deinit */
extern "C" __attribute__((visibility("default"))) int wmt_plat_deinit(void) {
    ALOGD("wmt_plat_deinit() called");
    return 0;
}

/* Demangled: mtk_wcn_consys_hw_deinit */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_hw_deinit(void) {
    ALOGD("mtk_wcn_consys_hw_deinit() called");
    return 0;
}

/* Demangled: mtk_wcn_cmb_hw_deinit */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_cmb_hw_deinit(void) {
    ALOGD("mtk_wcn_cmb_hw_deinit() called");
    return 0;
}

/* Demangled: osal_wake_lock_deinit */
extern "C" __attribute__((visibility("default"))) int osal_wake_lock_deinit(void) {
    ALOGD("osal_wake_lock_deinit() called");
    return 0;
}

/* Demangled: osal_sleepable_lock_deinit */
extern "C" __attribute__((visibility("default"))) int osal_sleepable_lock_deinit(void) {
    ALOGD("osal_sleepable_lock_deinit() called");
    return 0;
}

/* Demangled: wmt_plat_sdio_ctrl */
extern "C" __attribute__((visibility("default"))) int wmt_plat_sdio_ctrl(void) {
    ALOGD("wmt_plat_sdio_ctrl() called");
    return 0;
}

/* Demangled: wmt_plat_irq_ctrl */
extern "C" __attribute__((visibility("default"))) int wmt_plat_irq_ctrl(void) {
    ALOGD("wmt_plat_irq_ctrl() called");
    return 0;
}

/* Demangled: wmt_plat_pwr_ctrl */
extern "C" __attribute__((visibility("default"))) int wmt_plat_pwr_ctrl(void) {
    ALOGD("wmt_plat_pwr_ctrl() called");
    return 0;
}

/* Demangled: mtk_wcn_consys_hw_pwr_on */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_hw_pwr_on(void) {
    ALOGD("mtk_wcn_consys_hw_pwr_on() called");
    return 0;
}

/* Demangled: mtk_wcn_consys_hw_pwr_off */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_hw_pwr_off(void) {
    ALOGD("mtk_wcn_consys_hw_pwr_off() called");
    return 0;
}

/* Demangled: mtk_wcn_consys_hw_rst */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_hw_rst(void) {
    ALOGD("mtk_wcn_consys_hw_rst() called");
    return 0;
}

/* Demangled: mtk_wcn_consys_hw_state_show */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_hw_state_show(void) {
    ALOGD("mtk_wcn_consys_hw_state_show() called");
    return 0;
}

/* Demangled: mtk_wcn_cmb_hw_pwr_off */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_cmb_hw_pwr_off(void) {
    ALOGD("mtk_wcn_cmb_hw_pwr_off() called");
    return 0;
}

/* Demangled: mtk_wcn_cmb_hw_rst */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_cmb_hw_rst(void) {
    ALOGD("mtk_wcn_cmb_hw_rst() called");
    return 0;
}

/* Demangled: mtk_wcn_cmb_hw_state_show */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_cmb_hw_state_show(void) {
    ALOGD("mtk_wcn_cmb_hw_state_show() called");
    return 0;
}

/* Demangled: mtk_wcn_cmb_hw_pwr_on */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_cmb_hw_pwr_on(void) {
    ALOGD("mtk_wcn_cmb_hw_pwr_on() called");
    return 0;
}

/* Demangled: wmt_plat_ps_ctrl */
extern "C" __attribute__((visibility("default"))) int wmt_plat_ps_ctrl(void) {
    ALOGD("wmt_plat_ps_ctrl() called");
    return 0;
}

/* Demangled: wmt_plat_wake_lock_ctrl */
extern "C" __attribute__((visibility("default"))) int wmt_plat_wake_lock_ctrl(void) {
    ALOGD("wmt_plat_wake_lock_ctrl() called");
    return 0;
}

/* Demangled: osal_lock_sleepable_lock */
extern "C" __attribute__((visibility("default"))) int osal_lock_sleepable_lock(void) {
    ALOGD("osal_lock_sleepable_lock() called");
    return 0;
}

/* Demangled: osal_unlock_sleepable_lock */
extern "C" __attribute__((visibility("default"))) int osal_unlock_sleepable_lock(void) {
    ALOGD("osal_unlock_sleepable_lock() called");
    return 0;
}

/* Demangled: osal_wake_lock */
extern "C" __attribute__((visibility("default"))) int osal_wake_lock(void) {
    ALOGD("osal_wake_lock() called");
    return 0;
}

/* Demangled: osal_wake_lock_count */
extern "C" __attribute__((visibility("default"))) int osal_wake_lock_count(void) {
    ALOGD("osal_wake_lock_count() called");
    return 0;
}

/* Demangled: osal_wake_unlock */
extern "C" __attribute__((visibility("default"))) int osal_wake_unlock(void) {
    ALOGD("osal_wake_unlock() called");
    return 0;
}

/* Demangled: wmt_plat_merge_if_flag_ctrl */
extern "C" __attribute__((visibility("default"))) int wmt_plat_merge_if_flag_ctrl(void) {
    ALOGD("wmt_plat_merge_if_flag_ctrl() called");
    return 0;
}

/* Demangled: wmt_plat_set_comm_if_type */
extern "C" __attribute__((visibility("default"))) int wmt_plat_set_comm_if_type(void) {
    ALOGD("wmt_plat_set_comm_if_type() called");
    return 0;
}

/* Demangled: wmt_plat_get_comm_if_type */
extern "C" __attribute__((visibility("default"))) int wmt_plat_get_comm_if_type(void) {
    ALOGD("wmt_plat_get_comm_if_type() called");
    return 0;
}

/* Demangled: wmt_plat_soc_paldo_ctrl */
extern "C" __attribute__((visibility("default"))) int wmt_plat_soc_paldo_ctrl(void) {
    ALOGD("wmt_plat_soc_paldo_ctrl() called");
    return 0;
}

/* Demangled: mtk_wcn_consys_hw_vcn28_ctrl */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_hw_vcn28_ctrl(void) {
    ALOGD("mtk_wcn_consys_hw_vcn28_ctrl() called");
    return 0;
}

/* Demangled: mtk_wcn_consys_hw_bt_paldo_ctrl */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_hw_bt_paldo_ctrl(void) {
    ALOGD("mtk_wcn_consys_hw_bt_paldo_ctrl() called");
    return 0;
}

/* Demangled: mtk_wcn_consys_hw_wifi_paldo_ctrl */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_hw_wifi_paldo_ctrl(void) {
    ALOGD("mtk_wcn_consys_hw_wifi_paldo_ctrl() called");
    return 0;
}

/* Demangled: mtk_wcn_consys_hw_efuse_paldo_ctrl */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_hw_efuse_paldo_ctrl(void) {
    ALOGD("mtk_wcn_consys_hw_efuse_paldo_ctrl() called");
    return 0;
}

/* Demangled: wmt_plat_get_emi_virt_add */
extern "C" __attribute__((visibility("default"))) int wmt_plat_get_emi_virt_add(void) {
    ALOGD("wmt_plat_get_emi_virt_add() called");
    return 0;
}

/* Demangled: mtk_wcn_consys_emi_virt_addr_get */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_emi_virt_addr_get(void) {
    ALOGD("mtk_wcn_consys_emi_virt_addr_get() called");
    return 0;
}

/* Demangled: wmt_plat_get_emi_phy_add */
extern "C" __attribute__((visibility("default"))) int wmt_plat_get_emi_phy_add(void) {
    ALOGD("wmt_plat_get_emi_phy_add() called");
    return 0;
}

/* Demangled: mtk_wcn_consys_soc_get_emi_phy_add */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_soc_get_emi_phy_add(void) {
    ALOGD("mtk_wcn_consys_soc_get_emi_phy_add() called");
    return 0;
}

/* Demangled: wmt_plat_jtag_flag_ctrl */
extern "C" __attribute__((visibility("default"))) int wmt_plat_jtag_flag_ctrl(void) {
    ALOGD("wmt_plat_jtag_flag_ctrl() called");
    return 0;
}

/* Demangled: wmt_plat_read_cpupcr */
extern "C" __attribute__((visibility("default"))) int wmt_plat_read_cpupcr(void) {
    ALOGD("wmt_plat_read_cpupcr() called");
    return 0;
}

/* Demangled: mtk_wcn_consys_read_cpupcr */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_read_cpupcr(void) {
    ALOGD("mtk_wcn_consys_read_cpupcr() called");
    return 0;
}

/* Demangled: wmt_plat_read_dmaregs */
extern "C" __attribute__((visibility("default"))) int wmt_plat_read_dmaregs(void) {
    ALOGD("wmt_plat_read_dmaregs() called");
    return 0;
}

/* Demangled: wmt_plat_set_host_dump_state */
extern "C" __attribute__((visibility("default"))) int wmt_plat_set_host_dump_state(void) {
    ALOGD("wmt_plat_set_host_dump_state() called");
    return 0;
}

/* Demangled: wmt_plat_force_trigger_assert */
extern "C" __attribute__((visibility("default"))) int wmt_plat_force_trigger_assert(void) {
    ALOGD("wmt_plat_force_trigger_assert() called");
    return 0;
}

/* Demangled: mtk_wcn_force_trigger_assert_debug_pin */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_force_trigger_assert_debug_pin(void) {
    ALOGD("mtk_wcn_force_trigger_assert_debug_pin() called");
    return 0;
}

/* Demangled: wmt_plat_update_host_sync_num */
extern "C" __attribute__((visibility("default"))) int wmt_plat_update_host_sync_num(void) {
    ALOGD("wmt_plat_update_host_sync_num() called");
    return 0;
}

/* Demangled: wmt_plat_get_dump_info */
extern "C" __attribute__((visibility("default"))) int wmt_plat_get_dump_info(void) {
    ALOGD("wmt_plat_get_dump_info() called");
    return 0;
}

/* Demangled: wmt_plat_write_emi_l */
extern "C" __attribute__((visibility("default"))) int wmt_plat_write_emi_l(void) {
    ALOGD("wmt_plat_write_emi_l() called");
    return 0;
}

/* Demangled: mtk_wcn_consys_soc_chipid */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_soc_chipid(void) {
    ALOGD("mtk_wcn_consys_soc_chipid() called");
    return 0;
}

/* Demangled: wmt_plat_get_tdm_antsel_index */
extern "C" __attribute__((visibility("default"))) int wmt_plat_get_tdm_antsel_index(void) {
    ALOGD("wmt_plat_get_tdm_antsel_index() called");
    return 0;
}

/* Demangled: wmt_plat_set_dbg_mode */
extern "C" __attribute__((visibility("default"))) int wmt_plat_set_dbg_mode(void) {
    ALOGD("wmt_plat_set_dbg_mode() called");
    return 0;
}

/* Demangled: wmt_plat_set_dynamic_dumpmem */
extern "C" __attribute__((visibility("default"))) int wmt_plat_set_dynamic_dumpmem(void) {
    ALOGD("wmt_plat_set_dynamic_dumpmem() called");
    return 0;
}

/* Demangled: mtk_wcn_consys_get_pinctrl */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_get_pinctrl(void) {
    ALOGD("mtk_wcn_consys_get_pinctrl() called");
    return 0;
}

/* Exported Object: __crc_mtk_wcn_consys_hw_wifi_paldo_ctrl */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_consys_hw_wifi_paldo_ctrl = NULL;

/* Exported Object: __crc_mtk_wcn_consys_hw_efuse_paldo_ctrl */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_consys_hw_efuse_paldo_ctrl = NULL;

/* Demangled: mtk_wcn_consys_hw_osc_en_ctrl */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_hw_osc_en_ctrl(void) {
    ALOGD("mtk_wcn_consys_hw_osc_en_ctrl() called");
    return 0;
}

/* Demangled: mtk_wcn_consys_sleep_info_read_all_ctrl */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_sleep_info_read_all_ctrl(void) {
    ALOGD("mtk_wcn_consys_sleep_info_read_all_ctrl() called");
    return 0;
}

/* Exported Object: wmt_consys_ic_ops */
extern "C" __attribute__((visibility("default"))) void* wmt_consys_ic_ops = NULL;

/* Demangled: osal_lock_unsleepable_lock */
extern "C" __attribute__((visibility("default"))) int osal_lock_unsleepable_lock(void) {
    ALOGD("osal_lock_unsleepable_lock() called");
    return 0;
}

/* Demangled: osal_sprintf */
extern "C" __attribute__((visibility("default"))) int osal_sprintf(void) {
    ALOGD("osal_sprintf() called");
    return 0;
}

/* Demangled: osal_unlock_unsleepable_lock */
extern "C" __attribute__((visibility("default"))) int osal_unlock_unsleepable_lock(void) {
    ALOGD("osal_unlock_unsleepable_lock() called");
    return 0;
}

/* Demangled: mtk_wcn_consys_sleep_info_clear */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_sleep_info_clear(void) {
    ALOGD("mtk_wcn_consys_sleep_info_clear() called");
    return 0;
}

/* Demangled: wmt_lib_get_drv_status */
extern "C" __attribute__((visibility("default"))) int wmt_lib_get_drv_status(void) {
    ALOGD("wmt_lib_get_drv_status() called");
    return 0;
}

/* Exported Object: gDevWmt */
extern "C" __attribute__((visibility("default"))) void* gDevWmt = NULL;

/* Demangled: osal_test_bit */
extern "C" __attribute__((visibility("default"))) int osal_test_bit(void) {
    ALOGD("osal_test_bit() called");
    return 0;
}

/* Demangled: mtk_wcn_consys_sleep_info_restore */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_sleep_info_restore(void) {
    ALOGD("mtk_wcn_consys_sleep_info_restore() called");
    return 0;
}

/* Demangled: mtk_wcn_consys_hw_reg_ctrl */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_hw_reg_ctrl(void) {
    ALOGD("mtk_wcn_consys_hw_reg_ctrl() called");
    return 0;
}

/* Exported Object: pEmibaseaddr */
extern "C" __attribute__((visibility("default"))) void* pEmibaseaddr = NULL;

/* Demangled: mtk_wcn_consys_get_adie_chipid */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_get_adie_chipid(void) {
    ALOGD("mtk_wcn_consys_get_adie_chipid() called");
    return 0;
}

/* Exported Object: consys_pinctrl */
extern "C" __attribute__((visibility("default"))) void* consys_pinctrl = NULL;

/* Demangled: mtk_wcn_consys_hw_gpio_ctrl */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_hw_gpio_ctrl(void) {
    ALOGD("mtk_wcn_consys_hw_gpio_ctrl() called");
    return 0;
}

/* Exported Object: chip_reset_status */
extern "C" __attribute__((visibility("default"))) void* chip_reset_status = NULL;

/* Demangled: mtk_wcn_soc_restore_wifi_cal_result */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_soc_restore_wifi_cal_result(void) {
    ALOGD("mtk_wcn_soc_restore_wifi_cal_result() called");
    return 0;
}

/* Demangled: mtk_consys_set_chip_reset_status */
extern "C" __attribute__((visibility("default"))) int mtk_consys_set_chip_reset_status(void) {
    ALOGD("mtk_consys_set_chip_reset_status() called");
    return 0;
}

/* Demangled: mtk_wcn_consys_hw_restore */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_hw_restore(void) {
    ALOGD("mtk_wcn_consys_hw_restore() called");
    return 0;
}

/* Demangled: osal_sleep_ms */
extern "C" __attribute__((visibility("default"))) int osal_sleep_ms(void) {
    ALOGD("osal_sleep_ms() called");
    return 0;
}

/* Demangled: mtk_wcn_consys_set_dbg_mode */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_set_dbg_mode(void) {
    ALOGD("mtk_wcn_consys_set_dbg_mode() called");
    return 0;
}

/* Demangled: mtk_wcn_consys_set_dynamic_dump */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_set_dynamic_dump(void) {
    ALOGD("mtk_wcn_consys_set_dynamic_dump() called");
    return 0;
}

/* Exported Object: g_pdev */
extern "C" __attribute__((visibility("default"))) void* g_pdev = NULL;

/* Demangled: mtk_wcn_consys_hang_debug */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_hang_debug(void) {
    ALOGD("mtk_wcn_consys_hang_debug() called");
    return 0;
}

/* Demangled: mtk_consys_get_gps_lna_pin_num */
extern "C" __attribute__((visibility("default"))) int mtk_consys_get_gps_lna_pin_num(void) {
    ALOGD("mtk_consys_get_gps_lna_pin_num() called");
    return 0;
}

/* Exported Object: gps_lna_pin_num */
extern "C" __attribute__((visibility("default"))) void* gps_lna_pin_num = NULL;

/* Demangled: mtk_wcn_consys_reg_ctrl */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_reg_ctrl(void) {
    ALOGD("mtk_wcn_consys_reg_ctrl() called");
    return 0;
}

/* Demangled: mtk_consys_check_reg_readable */
extern "C" __attribute__((visibility("default"))) int mtk_consys_check_reg_readable(void) {
    ALOGD("mtk_consys_check_reg_readable() called");
    return 0;
}

/* Demangled: mtk_consys_check_reg_readable_by_addr */
extern "C" __attribute__((visibility("default"))) int mtk_consys_check_reg_readable_by_addr(void) {
    ALOGD("mtk_consys_check_reg_readable_by_addr() called");
    return 0;
}

/* Demangled: mtk_consys_is_connsys_reg */
extern "C" __attribute__((visibility("default"))) int mtk_consys_is_connsys_reg(void) {
    ALOGD("mtk_consys_is_connsys_reg() called");
    return 0;
}

/* Demangled: mtk_consys_set_mcif_mpu_protection */
extern "C" __attribute__((visibility("default"))) int mtk_consys_set_mcif_mpu_protection(void) {
    ALOGD("mtk_consys_set_mcif_mpu_protection() called");
    return 0;
}

/* Demangled: mtk_consys_is_calibration_backup_restore_support */
extern "C" __attribute__((visibility("default"))) int mtk_consys_is_calibration_backup_restore_support(void) {
    ALOGD("mtk_consys_is_calibration_backup_restore_support() called");
    return 0;
}

/* Demangled: mtk_consys_chip_reset_status */
extern "C" __attribute__((visibility("default"))) int mtk_consys_chip_reset_status(void) {
    ALOGD("mtk_consys_chip_reset_status() called");
    return 0;
}

/* Demangled: mtk_consys_is_ant_swap_enable_by_hwid */
extern "C" __attribute__((visibility("default"))) int mtk_consys_is_ant_swap_enable_by_hwid(void) {
    ALOGD("mtk_consys_is_ant_swap_enable_by_hwid() called");
    return 0;
}

/* Demangled: mtk_consys_dump_osc_state */
extern "C" __attribute__((visibility("default"))) int mtk_consys_dump_osc_state(void) {
    ALOGD("mtk_consys_dump_osc_state() called");
    return 0;
}

/* Demangled: mtk_wcn_consys_ic_get_ant_sel_cr_addr */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_ic_get_ant_sel_cr_addr(void) {
    ALOGD("mtk_wcn_consys_ic_get_ant_sel_cr_addr() called");
    return 0;
}

/* Demangled: mtk_wcn_consys_dump_gating_state */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_dump_gating_state(void) {
    ALOGD("mtk_wcn_consys_dump_gating_state() called");
    return 0;
}

/* Demangled: mtk_wcn_consys_get_options */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_get_options(void) {
    ALOGD("mtk_wcn_consys_get_options() called");
    return 0;
}

/* Demangled: wmt_lib_trigger_assert */
extern "C" __attribute__((visibility("default"))) int wmt_lib_trigger_assert(void) {
    ALOGD("wmt_lib_trigger_assert() called");
    return 0;
}

/* Demangled: osal_unsleepable_lock_init */
extern "C" __attribute__((visibility("default"))) int osal_unsleepable_lock_init(void) {
    ALOGD("osal_unsleepable_lock_init() called");
    return 0;
}

/* Exported Object: plt_resume_worker */
extern "C" __attribute__((visibility("default"))) void* plt_resume_worker = NULL;

/* Demangled: osal_unsleepable_lock_deinit */
extern "C" __attribute__((visibility("default"))) int osal_unsleepable_lock_deinit(void) {
    ALOGD("osal_unsleepable_lock_deinit() called");
    return 0;
}

/* Demangled: wmt_lib_dmp_consys_state */
extern "C" __attribute__((visibility("default"))) int wmt_lib_dmp_consys_state(void) {
    ALOGD("wmt_lib_dmp_consys_state() called");
    return 0;
}

/* Demangled: wmt_lib_tm_temp_query */
extern "C" __attribute__((visibility("default"))) int wmt_lib_tm_temp_query(void) {
    ALOGD("wmt_lib_tm_temp_query() called");
    return 0;
}

/* Exported Object: apwmt_of_ids */
extern "C" __attribute__((visibility("default"))) void* apwmt_of_ids = NULL;

/* Exported Object: gPwrSeqTime */
extern "C" __attribute__((visibility("default"))) void* gPwrSeqTime = NULL;

/* Demangled: osal_memcpy */
extern "C" __attribute__((visibility("default"))) int osal_memcpy(void) {
    ALOGD("osal_memcpy() called");
    return 0;
}

/* Demangled: wmt_ctrl */
extern "C" __attribute__((visibility("default"))) int wmt_ctrl(void) {
    ALOGD("wmt_ctrl() called");
    return 0;
}

/* Demangled: wmt_core_init_script */
extern "C" __attribute__((visibility("default"))) int wmt_core_init_script(void) {
    ALOGD("wmt_core_init_script() called");
    return 0;
}

/* Demangled: wmt_core_ctrl */
extern "C" __attribute__((visibility("default"))) int wmt_core_ctrl(void) {
    ALOGD("wmt_core_ctrl() called");
    return 0;
}

/* Demangled: osal_memset */
extern "C" __attribute__((visibility("default"))) int osal_memset(void) {
    ALOGD("osal_memset() called");
    return 0;
}

/* Demangled: wmt_core_tx */
extern "C" __attribute__((visibility("default"))) int wmt_core_tx(void) {
    ALOGD("wmt_core_tx() called");
    return 0;
}

/* Demangled: wmt_core_rx */
extern "C" __attribute__((visibility("default"))) int wmt_core_rx(void) {
    ALOGD("wmt_core_rx() called");
    return 0;
}

/* Demangled: osal_memcmp */
extern "C" __attribute__((visibility("default"))) int osal_memcmp(void) {
    ALOGD("osal_memcmp() called");
    return 0;
}

/* Demangled: wmt_core_dump_data */
extern "C" __attribute__((visibility("default"))) int wmt_core_dump_data(void) {
    ALOGD("wmt_core_dump_data() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_coredump_flag_get */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_coredump_flag_get(void) {
    ALOGD("mtk_wcn_stp_coredump_flag_get() called");
    return 0;
}

/* Exported Object: wmt_ic_ops_mt6628 */
extern "C" __attribute__((visibility("default"))) void* wmt_ic_ops_mt6628 = NULL;

/* Demangled: wmt_lib_ps_enable */
extern "C" __attribute__((visibility("default"))) int wmt_lib_ps_enable(void) {
    ALOGD("wmt_lib_ps_enable() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_dbg_dump_package */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_dbg_dump_package(void) {
    ALOGD("mtk_wcn_stp_dbg_dump_package() called");
    return 0;
}

/* Demangled: wmt_lib_ps_ctrl */
extern "C" __attribute__((visibility("default"))) int wmt_lib_ps_ctrl(void) {
    ALOGD("wmt_lib_ps_ctrl() called");
    return 0;
}

/* Demangled: wmt_lib_ps_disable */
extern "C" __attribute__((visibility("default"))) int wmt_lib_ps_disable(void) {
    ALOGD("wmt_lib_ps_disable() called");
    return 0;
}

/* Demangled: wmt_core_reg_rw_raw */
extern "C" __attribute__((visibility("default"))) int wmt_core_reg_rw_raw(void) {
    ALOGD("wmt_core_reg_rw_raw() called");
    return 0;
}

/* Demangled: wmt_conf_set_cfg_file */
extern "C" __attribute__((visibility("default"))) int wmt_conf_set_cfg_file(void) {
    ALOGD("wmt_conf_set_cfg_file() called");
    return 0;
}

/* Demangled: wmt_conf_read_file */
extern "C" __attribute__((visibility("default"))) int wmt_conf_read_file(void) {
    ALOGD("wmt_conf_read_file() called");
    return 0;
}

/* Demangled: osal_strncat */
extern "C" __attribute__((visibility("default"))) int osal_strncat(void) {
    ALOGD("osal_strncat() called");
    return 0;
}

/* Demangled: wmt_dev_patch_get */
extern "C" __attribute__((visibility("default"))) int wmt_dev_patch_get(void) {
    ALOGD("wmt_dev_patch_get() called");
    return 0;
}

/* Demangled: osal_strsep */
extern "C" __attribute__((visibility("default"))) int osal_strsep(void) {
    ALOGD("osal_strsep() called");
    return 0;
}

/* Demangled: osal_strchr */
extern "C" __attribute__((visibility("default"))) int osal_strchr(void) {
    ALOGD("osal_strchr() called");
    return 0;
}

/* Demangled: osal_strcmp */
extern "C" __attribute__((visibility("default"))) int osal_strcmp(void) {
    ALOGD("osal_strcmp() called");
    return 0;
}

/* Demangled: wmt_dev_patch_put */
extern "C" __attribute__((visibility("default"))) int wmt_dev_patch_put(void) {
    ALOGD("wmt_dev_patch_put() called");
    return 0;
}

/* Demangled: wmt_conf_get_cfg */
extern "C" __attribute__((visibility("default"))) int wmt_conf_get_cfg(void) {
    ALOGD("wmt_conf_get_cfg() called");
    return 0;
}

/* Demangled: wmt_conf_deinit */
extern "C" __attribute__((visibility("default"))) int wmt_conf_deinit(void) {
    ALOGD("wmt_conf_deinit() called");
    return 0;
}

/* Demangled: osal_strtol */
extern "C" __attribute__((visibility("default"))) int osal_strtol(void) {
    ALOGD("osal_strtol() called");
    return 0;
}

/* Demangled: osal_snprintf */
extern "C" __attribute__((visibility("default"))) int osal_snprintf(void) {
    ALOGD("osal_snprintf() called");
    return 0;
}

/* Exported Object: __crc_mtk_wcn_stp_parser_data */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_stp_parser_data = NULL;

/* Exported Object: __crc_mtk_wcn_stp_coredump_start_get */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_stp_coredump_start_get = NULL;

/* Exported Object: __crc_mtk_wcn_stp_send_data */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_stp_send_data = NULL;

/* Exported Object: __crc_mtk_wcn_stp_send_data_raw */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_stp_send_data_raw = NULL;

/* Exported Object: __crc_mtk_wcn_stp_receive_data */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_stp_receive_data = NULL;

/* Exported Object: __crc_mtk_wcn_stp_is_rxqueue_empty */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_stp_is_rxqueue_empty = NULL;

/* Exported Object: __crc_mtk_wcn_stp_is_ready */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_stp_is_ready = NULL;

/* Exported Object: __crc_mtk_wcn_stp_set_bluez */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_stp_set_bluez = NULL;

/* Demangled: mtk_wcn_consys_stp_btif_logger_ctrl */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_stp_btif_logger_ctrl(void) {
    ALOGD("mtk_wcn_consys_stp_btif_logger_ctrl() called");
    return 0;
}

/* Exported Object: gStpDbgLvl */
extern "C" __attribute__((visibility("default"))) void* gStpDbgLvl = NULL;

/* Demangled: mtk_wcn_consys_stp_btif_open */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_stp_btif_open(void) {
    ALOGD("mtk_wcn_consys_stp_btif_open() called");
    return 0;
}

/* Demangled: mtk_wcn_consys_stp_btif_close */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_stp_btif_close(void) {
    ALOGD("mtk_wcn_consys_stp_btif_close() called");
    return 0;
}

/* Demangled: mtk_wcn_consys_stp_btif_rx_cb_register */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_stp_btif_rx_cb_register(void) {
    ALOGD("mtk_wcn_consys_stp_btif_rx_cb_register() called");
    return 0;
}

/* Demangled: mtk_wcn_consys_stp_btif_tx */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_stp_btif_tx(void) {
    ALOGD("mtk_wcn_consys_stp_btif_tx() called");
    return 0;
}

/* Demangled: mtk_wcn_consys_stp_btif_wakeup */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_stp_btif_wakeup(void) {
    ALOGD("mtk_wcn_consys_stp_btif_wakeup() called");
    return 0;
}

/* Demangled: mtk_wcn_consys_stp_btif_lpbk_ctrl */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_stp_btif_lpbk_ctrl(void) {
    ALOGD("mtk_wcn_consys_stp_btif_lpbk_ctrl() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_dbg_level */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_dbg_level(void) {
    ALOGD("mtk_wcn_stp_dbg_level() called");
    return 0;
}

/* Demangled: stp_do_tx_timeout */
extern "C" __attribute__((visibility("default"))) int stp_do_tx_timeout(void) {
    ALOGD("stp_do_tx_timeout() called");
    return 0;
}

/* Demangled: osal_dump_thread_state */
extern "C" __attribute__((visibility("default"))) int osal_dump_thread_state(void) {
    ALOGD("osal_dump_thread_state() called");
    return 0;
}

/* Demangled: osal_timer_stop */
extern "C" __attribute__((visibility("default"))) int osal_timer_stop(void) {
    ALOGD("osal_timer_stop() called");
    return 0;
}

/* Demangled: osal_timer_start */
extern "C" __attribute__((visibility("default"))) int osal_timer_start(void) {
    ALOGD("osal_timer_start() called");
    return 0;
}

/* Demangled: osal_buffer_dump */
extern "C" __attribute__((visibility("default"))) int osal_buffer_dump(void) {
    ALOGD("osal_buffer_dump() called");
    return 0;
}

/* Demangled: stp_dbg_poll_cpupcr */
extern "C" __attribute__((visibility("default"))) int stp_dbg_poll_cpupcr(void) {
    ALOGD("stp_dbg_poll_cpupcr() called");
    return 0;
}

/* Demangled: stp_notify_btm_dump */
extern "C" __attribute__((visibility("default"))) int stp_notify_btm_dump(void) {
    ALOGD("stp_notify_btm_dump() called");
    return 0;
}

/* Demangled: stp_psm_disable */
extern "C" __attribute__((visibility("default"))) int stp_psm_disable(void) {
    ALOGD("stp_psm_disable() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_is_sdio_mode */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_is_sdio_mode(void) {
    ALOGD("mtk_wcn_stp_is_sdio_mode() called");
    return 0;
}

/* Demangled: stp_send_data_no_ps */
extern "C" __attribute__((visibility("default"))) int stp_send_data_no_ps(void) {
    ALOGD("stp_send_data_no_ps() called");
    return 0;
}

/* Demangled: stp_dbg_log_pkt */
extern "C" __attribute__((visibility("default"))) int stp_dbg_log_pkt(void) {
    ALOGD("stp_dbg_log_pkt() called");
    return 0;
}

/* Demangled: osal_crc16 */
extern "C" __attribute__((visibility("default"))) int osal_crc16(void) {
    ALOGD("osal_crc16() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_is_uart_mand_mode */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_is_uart_mand_mode(void) {
    ALOGD("mtk_wcn_stp_is_uart_mand_mode() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_is_btif_mand_mode */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_is_btif_mand_mode(void) {
    ALOGD("mtk_wcn_stp_is_btif_mand_mode() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_is_uart_fullset_mode */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_is_uart_fullset_mode(void) {
    ALOGD("mtk_wcn_stp_is_uart_fullset_mode() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_is_btif_fullset_mode */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_is_btif_fullset_mode(void) {
    ALOGD("mtk_wcn_stp_is_btif_fullset_mode() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_init */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_init(void) {
    ALOGD("mtk_wcn_stp_init() called");
    return 0;
}

/* Demangled: osal_timer_create */
extern "C" __attribute__((visibility("default"))) int osal_timer_create(void) {
    ALOGD("osal_timer_create() called");
    return 0;
}

/* Demangled: stp_psm_init */
extern "C" __attribute__((visibility("default"))) int stp_psm_init(void) {
    ALOGD("stp_psm_init() called");
    return 0;
}

/* Demangled: stp_btm_init */
extern "C" __attribute__((visibility("default"))) int stp_btm_init(void) {
    ALOGD("stp_btm_init() called");
    return 0;
}

/* Demangled: stp_dbg_init */
extern "C" __attribute__((visibility("default"))) int stp_dbg_init(void) {
    ALOGD("stp_dbg_init() called");
    return 0;
}

/* Demangled: stp_psm_deinit */
extern "C" __attribute__((visibility("default"))) int stp_psm_deinit(void) {
    ALOGD("stp_psm_deinit() called");
    return 0;
}

/* Demangled: stp_dbg_enable */
extern "C" __attribute__((visibility("default"))) int stp_dbg_enable(void) {
    ALOGD("stp_dbg_enable() called");
    return 0;
}

/* Demangled: stp_btm_notify_stp_retry_wq */
extern "C" __attribute__((visibility("default"))) int stp_btm_notify_stp_retry_wq(void) {
    ALOGD("stp_btm_notify_stp_retry_wq() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_dbg_enable */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_dbg_enable(void) {
    ALOGD("mtk_wcn_stp_dbg_enable() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_deinit */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_deinit(void) {
    ALOGD("mtk_wcn_stp_deinit() called");
    return 0;
}

/* Demangled: stp_dbg_deinit */
extern "C" __attribute__((visibility("default"))) int stp_dbg_deinit(void) {
    ALOGD("stp_dbg_deinit() called");
    return 0;
}

/* Demangled: stp_btm_deinit */
extern "C" __attribute__((visibility("default"))) int stp_btm_deinit(void) {
    ALOGD("stp_btm_deinit() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_btm_get_dmp */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_btm_get_dmp(void) {
    ALOGD("mtk_wcn_stp_btm_get_dmp() called");
    return 0;
}

/* Demangled: stp_dbg_dmp_out */
extern "C" __attribute__((visibility("default"))) int stp_dbg_dmp_out(void) {
    ALOGD("stp_dbg_dmp_out() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_psm_notify_stp */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_psm_notify_stp(void) {
    ALOGD("mtk_wcn_stp_psm_notify_stp() called");
    return 0;
}

/* Demangled: stp_psm_notify_stp */
extern "C" __attribute__((visibility("default"))) int stp_psm_notify_stp(void) {
    ALOGD("stp_psm_notify_stp() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_set_psm_state */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_set_psm_state(void) {
    ALOGD("mtk_wcn_stp_set_psm_state() called");
    return 0;
}

/* Demangled: stp_psm_set_state */
extern "C" __attribute__((visibility("default"))) int stp_psm_set_state(void) {
    ALOGD("stp_psm_set_state() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_psm_enable */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_psm_enable(void) {
    ALOGD("mtk_wcn_stp_psm_enable() called");
    return 0;
}

/* Demangled: stp_psm_enable */
extern "C" __attribute__((visibility("default"))) int stp_psm_enable(void) {
    ALOGD("stp_psm_enable() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_is_ready */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_is_ready(void) {
    ALOGD("mtk_wcn_stp_is_ready() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_is_enable */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_is_enable(void) {
    ALOGD("mtk_wcn_stp_is_enable() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_psm_disable */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_psm_disable(void) {
    ALOGD("mtk_wcn_stp_psm_disable() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_psm_reset */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_psm_reset(void) {
    ALOGD("mtk_wcn_stp_psm_reset() called");
    return 0;
}

/* Demangled: stp_psm_reset */
extern "C" __attribute__((visibility("default"))) int stp_psm_reset(void) {
    ALOGD("stp_psm_reset() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_dbg_disable */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_dbg_disable(void) {
    ALOGD("mtk_wcn_stp_dbg_disable() called");
    return 0;
}

/* Demangled: stp_dbg_disable */
extern "C" __attribute__((visibility("default"))) int stp_dbg_disable(void) {
    ALOGD("stp_dbg_disable() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_dbg_log_ctrl */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_dbg_log_ctrl(void) {
    ALOGD("mtk_wcn_stp_dbg_log_ctrl() called");
    return 0;
}

/* Demangled: stp_dbg_log_ctrl */
extern "C" __attribute__((visibility("default"))) int stp_dbg_log_ctrl(void) {
    ALOGD("stp_dbg_log_ctrl() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_coredump_flag_ctrl */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_coredump_flag_ctrl(void) {
    ALOGD("mtk_wcn_stp_coredump_flag_ctrl() called");
    return 0;
}

/* Demangled: stp_dbg_nl_init */
extern "C" __attribute__((visibility("default"))) int stp_dbg_nl_init(void) {
    ALOGD("stp_dbg_nl_init() called");
    return 0;
}

/* Demangled: stp_dbg_nl_deinit */
extern "C" __attribute__((visibility("default"))) int stp_dbg_nl_deinit(void) {
    ALOGD("stp_dbg_nl_deinit() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_emi_dump_flag_ctrl */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_emi_dump_flag_ctrl(void) {
    ALOGD("mtk_wcn_stp_emi_dump_flag_ctrl() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_emi_dump_flag_get */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_emi_dump_flag_get(void) {
    ALOGD("mtk_wcn_stp_emi_dump_flag_get() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_parser_data */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_parser_data(void) {
    ALOGD("mtk_wcn_stp_parser_data() called");
    return 0;
}

/* Demangled: stp_btm_stop_trigger_assert_timer */
extern "C" __attribute__((visibility("default"))) int stp_btm_stop_trigger_assert_timer(void) {
    ALOGD("stp_btm_stop_trigger_assert_timer() called");
    return 0;
}

/* Demangled: stp_psm_set_sleep_disable */
extern "C" __attribute__((visibility("default"))) int stp_psm_set_sleep_disable(void) {
    ALOGD("stp_psm_set_sleep_disable() called");
    return 0;
}

/* Demangled: osal_strstr */
extern "C" __attribute__((visibility("default"))) int osal_strstr(void) {
    ALOGD("osal_strstr() called");
    return 0;
}

/* Exported Object: gStpDbgDbgLevel */
extern "C" __attribute__((visibility("default"))) void* gStpDbgDbgLevel = NULL;

/* Demangled: osal_dbg_assert_aee */
extern "C" __attribute__((visibility("default"))) int osal_dbg_assert_aee(void) {
    ALOGD("osal_dbg_assert_aee() called");
    return 0;
}

/* Demangled: mtk_wcn_sys_if_rx */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_sys_if_rx(void) {
    ALOGD("mtk_wcn_sys_if_rx() called");
    return 0;
}

/* Demangled: stp_btm_notify_wmt_rst_wq */
extern "C" __attribute__((visibility("default"))) int stp_btm_notify_wmt_rst_wq(void) {
    ALOGD("stp_btm_notify_wmt_rst_wq() called");
    return 0;
}

/* Demangled: stp_dbg_dump_num */
extern "C" __attribute__((visibility("default"))) int stp_dbg_dump_num(void) {
    ALOGD("stp_dbg_dump_num() called");
    return 0;
}

/* Demangled: osal_strncmp */
extern "C" __attribute__((visibility("default"))) int osal_strncmp(void) {
    ALOGD("osal_strncmp() called");
    return 0;
}

/* Demangled: stp_psm_set_sleep_enable */
extern "C" __attribute__((visibility("default"))) int stp_psm_set_sleep_enable(void) {
    ALOGD("stp_psm_set_sleep_enable() called");
    return 0;
}

/* Demangled: stp_btm_reset_btm_wq */
extern "C" __attribute__((visibility("default"))) int stp_btm_reset_btm_wq(void) {
    ALOGD("stp_btm_reset_btm_wq() called");
    return 0;
}

/* Exported Object: chip_reset_only */
extern "C" __attribute__((visibility("default"))) void* chip_reset_only = NULL;

/* Demangled: stp_btm_notify_wmt_dmp_wq */
extern "C" __attribute__((visibility("default"))) int stp_btm_notify_wmt_dmp_wq(void) {
    ALOGD("stp_btm_notify_wmt_dmp_wq() called");
    return 0;
}

/* Exported Object: gCrcErrorCount */
extern "C" __attribute__((visibility("default"))) void* gCrcErrorCount = NULL;

/* Demangled: mtk_wcn_stp_enable */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_enable(void) {
    ALOGD("mtk_wcn_stp_enable() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_coredump_start_ctrl */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_coredump_start_ctrl(void) {
    ALOGD("mtk_wcn_stp_coredump_start_ctrl() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_set_wmt_trg_assert */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_set_wmt_trg_assert(void) {
    ALOGD("mtk_wcn_stp_set_wmt_trg_assert() called");
    return 0;
}

/* Demangled: wmt_lib_print_wmtd_op_history */
extern "C" __attribute__((visibility("default"))) int wmt_lib_print_wmtd_op_history(void) {
    ALOGD("wmt_lib_print_wmtd_op_history() called");
    return 0;
}

/* Demangled: wmt_lib_print_worker_op_history */
extern "C" __attribute__((visibility("default"))) int wmt_lib_print_worker_op_history(void) {
    ALOGD("wmt_lib_print_worker_op_history() called");
    return 0;
}

/* Demangled: stp_psm_print_op_history */
extern "C" __attribute__((visibility("default"))) int stp_psm_print_op_history(void) {
    ALOGD("stp_psm_print_op_history() called");
    return 0;
}

/* Demangled: stp_btm_print_op_history */
extern "C" __attribute__((visibility("default"))) int stp_btm_print_op_history(void) {
    ALOGD("stp_btm_print_op_history() called");
    return 0;
}

/* Demangled: stp_dbg_dmp_print */
extern "C" __attribute__((visibility("default"))) int stp_dbg_dmp_print(void) {
    ALOGD("stp_dbg_dmp_print() called");
    return 0;
}

/* Demangled: stp_sdio_txdbg_dump */
extern "C" __attribute__((visibility("default"))) int stp_sdio_txdbg_dump(void) {
    ALOGD("stp_sdio_txdbg_dump() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_coredump_start_get */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_coredump_start_get(void) {
    ALOGD("mtk_wcn_stp_coredump_start_get() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_get_wmt_trg_assert */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_get_wmt_trg_assert(void) {
    ALOGD("mtk_wcn_stp_get_wmt_trg_assert() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_ready */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_ready(void) {
    ALOGD("mtk_wcn_stp_ready() called");
    return 0;
}

/* Demangled: stp_psm_is_disable */
extern "C" __attribute__((visibility("default"))) int stp_psm_is_disable(void) {
    ALOGD("stp_psm_is_disable() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_set_wmt_last_close */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_set_wmt_last_close(void) {
    ALOGD("mtk_wcn_stp_set_wmt_last_close() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_is_wmt_last_close */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_is_wmt_last_close(void) {
    ALOGD("mtk_wcn_stp_is_wmt_last_close() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_send_data */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_send_data(void) {
    ALOGD("mtk_wcn_stp_send_data() called");
    return 0;
}

/* Demangled: osal_ftrace_print */
extern "C" __attribute__((visibility("default"))) int osal_ftrace_print(void) {
    ALOGD("osal_ftrace_print() called");
    return 0;
}

/* Demangled: stp_psm_disable_by_tx_rx_density */
extern "C" __attribute__((visibility("default"))) int stp_psm_disable_by_tx_rx_density(void) {
    ALOGD("stp_psm_disable_by_tx_rx_density() called");
    return 0;
}

/* Demangled: stp_psm_is_to_block_traffic */
extern "C" __attribute__((visibility("default"))) int stp_psm_is_to_block_traffic(void) {
    ALOGD("stp_psm_is_to_block_traffic() called");
    return 0;
}

/* Demangled: stp_psm_notify_wmt_wakeup */
extern "C" __attribute__((visibility("default"))) int stp_psm_notify_wmt_wakeup(void) {
    ALOGD("stp_psm_notify_wmt_wakeup() called");
    return 0;
}

/* Demangled: stp_psm_thread_lock_aquire */
extern "C" __attribute__((visibility("default"))) int stp_psm_thread_lock_aquire(void) {
    ALOGD("stp_psm_thread_lock_aquire() called");
    return 0;
}

/* Demangled: stp_psm_hold_data */
extern "C" __attribute__((visibility("default"))) int stp_psm_hold_data(void) {
    ALOGD("stp_psm_hold_data() called");
    return 0;
}

/* Demangled: stp_psm_thread_lock_release */
extern "C" __attribute__((visibility("default"))) int stp_psm_thread_lock_release(void) {
    ALOGD("stp_psm_thread_lock_release() called");
    return 0;
}

/* Demangled: stp_psm_has_pending_data */
extern "C" __attribute__((visibility("default"))) int stp_psm_has_pending_data(void) {
    ALOGD("stp_psm_has_pending_data() called");
    return 0;
}

/* Demangled: stp_psm_release_data */
extern "C" __attribute__((visibility("default"))) int stp_psm_release_data(void) {
    ALOGD("stp_psm_release_data() called");
    return 0;
}

/* Demangled: stp_psm_is_quick_ps_support */
extern "C" __attribute__((visibility("default"))) int stp_psm_is_quick_ps_support(void) {
    ALOGD("stp_psm_is_quick_ps_support() called");
    return 0;
}

/* Demangled: stp_psm_notify_wmt_sleep */
extern "C" __attribute__((visibility("default"))) int stp_psm_notify_wmt_sleep(void) {
    ALOGD("stp_psm_notify_wmt_sleep() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_send_data_raw */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_send_data_raw(void) {
    ALOGD("mtk_wcn_stp_send_data_raw() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_receive_data */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_receive_data(void) {
    ALOGD("mtk_wcn_stp_receive_data() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_is_rxqueue_empty */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_is_rxqueue_empty(void) {
    ALOGD("mtk_wcn_stp_is_rxqueue_empty() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_set_mode */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_set_mode(void) {
    ALOGD("mtk_wcn_stp_set_mode() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_inband_reset */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_inband_reset(void) {
    ALOGD("mtk_wcn_stp_inband_reset() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_debug_ctrl */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_debug_ctrl(void) {
    ALOGD("mtk_wcn_stp_debug_ctrl() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_test_cmd */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_test_cmd(void) {
    ALOGD("mtk_wcn_stp_test_cmd() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_flush_context */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_flush_context(void) {
    ALOGD("mtk_wcn_stp_flush_context() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_flush_rx_queue */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_flush_rx_queue(void) {
    ALOGD("mtk_wcn_stp_flush_rx_queue() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_set_bluez */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_set_bluez(void) {
    ALOGD("mtk_wcn_stp_set_bluez() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_set_dbg_mode */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_set_dbg_mode(void) {
    ALOGD("mtk_wcn_stp_set_dbg_mode() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_set_auto_rst */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_set_auto_rst(void) {
    ALOGD("mtk_wcn_stp_set_auto_rst() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_open_btif */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_open_btif(void) {
    ALOGD("mtk_wcn_stp_open_btif() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_close_btif */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_close_btif(void) {
    ALOGD("mtk_wcn_stp_close_btif() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_rxcb_register */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_rxcb_register(void) {
    ALOGD("mtk_wcn_stp_rxcb_register() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_tx */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_tx(void) {
    ALOGD("mtk_wcn_stp_tx() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_wakeup_consys */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_wakeup_consys(void) {
    ALOGD("mtk_wcn_stp_wakeup_consys() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_dpidle_ctrl */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_dpidle_ctrl(void) {
    ALOGD("mtk_wcn_stp_dpidle_ctrl() called");
    return 0;
}

/* Demangled: mtk_wcn_consys_stp_btif_dpidle_ctrl */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_stp_btif_dpidle_ctrl(void) {
    ALOGD("mtk_wcn_consys_stp_btif_dpidle_ctrl() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_notify_sleep_for_thermal */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_notify_sleep_for_thermal(void) {
    ALOGD("mtk_wcn_stp_notify_sleep_for_thermal() called");
    return 0;
}

/* Demangled: stp_psm_sleep_for_thermal */
extern "C" __attribute__((visibility("default"))) int stp_psm_sleep_for_thermal(void) {
    ALOGD("stp_psm_sleep_for_thermal() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_lpbk_ctrl */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_lpbk_ctrl(void) {
    ALOGD("mtk_wcn_stp_lpbk_ctrl() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_logger_ctrl */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_logger_ctrl(void) {
    ALOGD("mtk_wcn_stp_logger_ctrl() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_ctx_save */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_ctx_save(void) {
    ALOGD("mtk_wcn_stp_ctx_save() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_ctx_restore */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_ctx_restore(void) {
    ALOGD("mtk_wcn_stp_ctx_restore() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_wmt_trg_assert */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_wmt_trg_assert(void) {
    ALOGD("mtk_wcn_stp_wmt_trg_assert() called");
    return 0;
}

/* Demangled: stp_notify_btm_do_fw_assert */
extern "C" __attribute__((visibility("default"))) int stp_notify_btm_do_fw_assert(void) {
    ALOGD("stp_notify_btm_do_fw_assert() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_assert_timeout_handle */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_assert_timeout_handle(void) {
    ALOGD("mtk_wcn_stp_assert_timeout_handle() called");
    return 0;
}

/* Demangled: stp_dbg_start_emi_dump */
extern "C" __attribute__((visibility("default"))) int stp_dbg_start_emi_dump(void) {
    ALOGD("stp_dbg_start_emi_dump() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_coredump_timeout_handle */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_coredump_timeout_handle(void) {
    ALOGD("mtk_wcn_stp_coredump_timeout_handle() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_dbg_pkt_log */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_dbg_pkt_log(void) {
    ALOGD("mtk_wcn_stp_dbg_pkt_log() called");
    return 0;
}

/* Demangled: mtk_stp_sdio_retry_flag_ctrl */
extern "C" __attribute__((visibility("default"))) int mtk_stp_sdio_retry_flag_ctrl(void) {
    ALOGD("mtk_stp_sdio_retry_flag_ctrl() called");
    return 0;
}

/* Exported Object: wmt_dbg_sdio_retry_ctrl */
extern "C" __attribute__((visibility("default"))) void* wmt_dbg_sdio_retry_ctrl = NULL;

/* Demangled: stp_sdio_retry_flag_ctrl */
extern "C" __attribute__((visibility("default"))) int stp_sdio_retry_flag_ctrl(void) {
    ALOGD("stp_sdio_retry_flag_ctrl() called");
    return 0;
}

/* Demangled: mtk_stp_dbg_sdio_retry_flag_ctrl */
extern "C" __attribute__((visibility("default"))) int mtk_stp_dbg_sdio_retry_flag_ctrl(void) {
    ALOGD("mtk_stp_dbg_sdio_retry_flag_ctrl() called");
    return 0;
}

/* Demangled: mtk_stp_sdio_retry_flag_get */
extern "C" __attribute__((visibility("default"))) int mtk_stp_sdio_retry_flag_get(void) {
    ALOGD("mtk_stp_sdio_retry_flag_get() called");
    return 0;
}

/* Demangled: stp_sdio_retry_flag_get */
extern "C" __attribute__((visibility("default"))) int stp_sdio_retry_flag_get(void) {
    ALOGD("stp_sdio_retry_flag_get() called");
    return 0;
}

/* Demangled: mtk_stp_dump_sdio_register */
extern "C" __attribute__((visibility("default"))) int mtk_stp_dump_sdio_register(void) {
    ALOGD("mtk_stp_dump_sdio_register() called");
    return 0;
}

/* Demangled: stp_sdio_dump_register */
extern "C" __attribute__((visibility("default"))) int stp_sdio_dump_register(void) {
    ALOGD("stp_sdio_dump_register() called");
    return 0;
}

/* Demangled: mtk_stp_dbg_dmp_append */
extern "C" __attribute__((visibility("default"))) int mtk_stp_dbg_dmp_append(void) {
    ALOGD("mtk_stp_dbg_dmp_append() called");
    return 0;
}

/* Demangled: stp_dbg_dmp_append */
extern "C" __attribute__((visibility("default"))) int stp_dbg_dmp_append(void) {
    ALOGD("stp_dbg_dmp_append() called");
    return 0;
}

/* Demangled: mtk_stp_notify_emi_dump_end */
extern "C" __attribute__((visibility("default"))) int mtk_stp_notify_emi_dump_end(void) {
    ALOGD("mtk_stp_notify_emi_dump_end() called");
    return 0;
}

/* Demangled: stp_btm_notify_emi_dump_end */
extern "C" __attribute__((visibility("default"))) int stp_btm_notify_emi_dump_end(void) {
    ALOGD("stp_btm_notify_emi_dump_end() called");
    return 0;
}

/* Demangled: mtk_stp_check_rx_has_pending_data */
extern "C" __attribute__((visibility("default"))) int mtk_stp_check_rx_has_pending_data(void) {
    ALOGD("mtk_stp_check_rx_has_pending_data() called");
    return 0;
}

/* Demangled: mtk_stp_rx_thread_get */
extern "C" __attribute__((visibility("default"))) int mtk_stp_rx_thread_get(void) {
    ALOGD("mtk_stp_rx_thread_get() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_assert_flow_ctrl */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_assert_flow_ctrl(void) {
    ALOGD("mtk_wcn_stp_assert_flow_ctrl() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_assert_flow_get */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_assert_flow_get(void) {
    ALOGD("mtk_wcn_stp_assert_flow_get() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_set_support_gpsl5 */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_set_support_gpsl5(void) {
    ALOGD("mtk_wcn_stp_set_support_gpsl5() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_is_support_gpsl5 */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_is_support_gpsl5(void) {
    ALOGD("mtk_wcn_stp_is_support_gpsl5() called");
    return 0;
}

/* Demangled: stp_notify_btm_handle_wmt_lte_coex */
extern "C" __attribute__((visibility("default"))) int stp_notify_btm_handle_wmt_lte_coex(void) {
    ALOGD("stp_notify_btm_handle_wmt_lte_coex() called");
    return 0;
}

/* Demangled: mtk_wcn_consys_stp_btif_parser_wmt_evt */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_stp_btif_parser_wmt_evt(void) {
    ALOGD("mtk_wcn_consys_stp_btif_parser_wmt_evt() called");
    return 0;
}

/* Demangled: wmt_ctrl_tx_ex */
extern "C" __attribute__((visibility("default"))) int wmt_ctrl_tx_ex(void) {
    ALOGD("wmt_ctrl_tx_ex() called");
    return 0;
}

/* Demangled: wmt_ctrl_ul_cmd */
extern "C" __attribute__((visibility("default"))) int wmt_ctrl_ul_cmd(void) {
    ALOGD("wmt_ctrl_ul_cmd() called");
    return 0;
}

/* Demangled: osal_test_and_set_bit */
extern "C" __attribute__((visibility("default"))) int osal_test_and_set_bit(void) {
    ALOGD("osal_test_and_set_bit() called");
    return 0;
}

/* Demangled: osal_signal_init */
extern "C" __attribute__((visibility("default"))) int osal_signal_init(void) {
    ALOGD("osal_signal_init() called");
    return 0;
}

/* Demangled: osal_strncpy */
extern "C" __attribute__((visibility("default"))) int osal_strncpy(void) {
    ALOGD("osal_strncpy() called");
    return 0;
}

/* Demangled: osal_trigger_event */
extern "C" __attribute__((visibility("default"))) int osal_trigger_event(void) {
    ALOGD("osal_trigger_event() called");
    return 0;
}

/* Demangled: osal_wait_for_signal_timeout */
extern "C" __attribute__((visibility("default"))) int osal_wait_for_signal_timeout(void) {
    ALOGD("osal_wait_for_signal_timeout() called");
    return 0;
}

/* Demangled: osal_test_and_clear_bit */
extern "C" __attribute__((visibility("default"))) int osal_test_and_clear_bit(void) {
    ALOGD("osal_test_and_clear_bit() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_register_event_cb */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_register_event_cb(void) {
    ALOGD("mtk_wcn_stp_register_event_cb() called");
    return 0;
}

/* Demangled: osal_clear_bit */
extern "C" __attribute__((visibility("default"))) int osal_clear_bit(void) {
    ALOGD("osal_clear_bit() called");
    return 0;
}

/* Demangled: wmt_dev_rx_event_cb */
extern "C" __attribute__((visibility("default"))) int wmt_dev_rx_event_cb(void) {
    ALOGD("wmt_dev_rx_event_cb() called");
    return 0;
}

/* Demangled: osal_set_bit */
extern "C" __attribute__((visibility("default"))) int osal_set_bit(void) {
    ALOGD("osal_set_bit() called");
    return 0;
}

/* Demangled: mtk_wcn_hif_sdio_wmt_control */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_hif_sdio_wmt_control(void) {
    ALOGD("mtk_wcn_hif_sdio_wmt_control() called");
    return 0;
}

/* Demangled: osal_thread_sched_mark */
extern "C" __attribute__((visibility("default"))) int osal_thread_sched_mark(void) {
    ALOGD("osal_thread_sched_mark() called");
    return 0;
}

/* Demangled: wmt_dev_rx_timeout */
extern "C" __attribute__((visibility("default"))) int wmt_dev_rx_timeout(void) {
    ALOGD("wmt_dev_rx_timeout() called");
    return 0;
}

/* Demangled: osal_thread_sched_unmark */
extern "C" __attribute__((visibility("default"))) int osal_thread_sched_unmark(void) {
    ALOGD("osal_thread_sched_unmark() called");
    return 0;
}

/* Demangled: wmt_dev_is_close */
extern "C" __attribute__((visibility("default"))) int wmt_dev_is_close(void) {
    ALOGD("wmt_dev_is_close() called");
    return 0;
}

/* Demangled: stp_dbg_set_version_info */
extern "C" __attribute__((visibility("default"))) int stp_dbg_set_version_info(void) {
    ALOGD("stp_dbg_set_version_info() called");
    return 0;
}

/* Demangled: wmt_dev_send_cmd_to_daemon */
extern "C" __attribute__((visibility("default"))) int wmt_dev_send_cmd_to_daemon(void) {
    ALOGD("wmt_dev_send_cmd_to_daemon() called");
    return 0;
}

/* Demangled: wmt_lib_set_host_assert_info */
extern "C" __attribute__((visibility("default"))) int wmt_lib_set_host_assert_info(void) {
    ALOGD("wmt_lib_set_host_assert_info() called");
    return 0;
}

/* Demangled: stp_dbg_set_keyword */
extern "C" __attribute__((visibility("default"))) int stp_dbg_set_keyword(void) {
    ALOGD("stp_dbg_set_keyword() called");
    return 0;
}

/* Demangled: wmt_core_func_ctrl_cmd */
extern "C" __attribute__((visibility("default"))) int wmt_core_func_ctrl_cmd(void) {
    ALOGD("wmt_core_func_ctrl_cmd() called");
    return 0;
}

/* Exported Object: gBtWifiGpsState */
extern "C" __attribute__((visibility("default"))) void* gBtWifiGpsState = NULL;

/* Exported Object: gGpsFmState */
extern "C" __attribute__((visibility("default"))) void* gGpsFmState = NULL;

/* Demangled: wmt_func_gps_pre_ctrl */
extern "C" __attribute__((visibility("default"))) int wmt_func_gps_pre_ctrl(void) {
    ALOGD("wmt_func_gps_pre_ctrl() called");
    return 0;
}

/* Exported Object: mtk_wcn_wlan_probe */
extern "C" __attribute__((visibility("default"))) void* mtk_wcn_wlan_probe = NULL;

/* Exported Object: gWifiProbed */
extern "C" __attribute__((visibility("default"))) void* gWifiProbed = NULL;

/* Exported Object: mtk_wcn_wlan_remove */
extern "C" __attribute__((visibility("default"))) void* mtk_wcn_wlan_remove = NULL;

/* Demangled: wmt_func_bt_ctrl */
extern "C" __attribute__((visibility("default"))) int wmt_func_bt_ctrl(void) {
    ALOGD("wmt_func_bt_ctrl() called");
    return 0;
}

/* Demangled: wmt_func_ant_ctrl */
extern "C" __attribute__((visibility("default"))) int wmt_func_ant_ctrl(void) {
    ALOGD("wmt_func_ant_ctrl() called");
    return 0;
}

/* Demangled: wmt_func_gps_ctrl */
extern "C" __attribute__((visibility("default"))) int wmt_func_gps_ctrl(void) {
    ALOGD("wmt_func_gps_ctrl() called");
    return 0;
}

/* Exported Object: gCmbPinCtrl */
extern "C" __attribute__((visibility("default"))) void* gCmbPinCtrl = NULL;

/* Demangled: mtk_wmt_get_gps_lna_pin_num */
extern "C" __attribute__((visibility("default"))) int mtk_wmt_get_gps_lna_pin_num(void) {
    ALOGD("mtk_wmt_get_gps_lna_pin_num() called");
    return 0;
}

/* Demangled: wmt_func_gps_pre_on */
extern "C" __attribute__((visibility("default"))) int wmt_func_gps_pre_on(void) {
    ALOGD("wmt_func_gps_pre_on() called");
    return 0;
}

/* Demangled: wmt_func_gps_pre_off */
extern "C" __attribute__((visibility("default"))) int wmt_func_gps_pre_off(void) {
    ALOGD("wmt_func_gps_pre_off() called");
    return 0;
}

/* Demangled: wmt_func_gpsl5_ctrl */
extern "C" __attribute__((visibility("default"))) int wmt_func_gpsl5_ctrl(void) {
    ALOGD("wmt_func_gpsl5_ctrl() called");
    return 0;
}

/* Demangled: wmt_func_fm_ctrl */
extern "C" __attribute__((visibility("default"))) int wmt_func_fm_ctrl(void) {
    ALOGD("wmt_func_fm_ctrl() called");
    return 0;
}

/* Demangled: wmt_func_wifi_ctrl */
extern "C" __attribute__((visibility("default"))) int wmt_func_wifi_ctrl(void) {
    ALOGD("wmt_func_wifi_ctrl() called");
    return 0;
}

/* Exported Object: wmt_func_bt_ops */
extern "C" __attribute__((visibility("default"))) void* wmt_func_bt_ops = NULL;

/* Exported Object: wmt_func_fm_ops */
extern "C" __attribute__((visibility("default"))) void* wmt_func_fm_ops = NULL;

/* Exported Object: wmt_func_gps_ops */
extern "C" __attribute__((visibility("default"))) void* wmt_func_gps_ops = NULL;

/* Exported Object: wmt_func_gpsl5_ops */
extern "C" __attribute__((visibility("default"))) void* wmt_func_gpsl5_ops = NULL;

/* Exported Object: wmt_func_wifi_ops */
extern "C" __attribute__((visibility("default"))) void* wmt_func_wifi_ops = NULL;

/* Exported Object: wmt_func_ant_ops */
extern "C" __attribute__((visibility("default"))) void* wmt_func_ant_ops = NULL;

/* Exported Object: eediPinOhRegs */
extern "C" __attribute__((visibility("default"))) void* eediPinOhRegs = NULL;

/* Exported Object: eediPinOlRegs */
extern "C" __attribute__((visibility("default"))) void* eediPinOlRegs = NULL;

/* Exported Object: eedoPinOhRegs */
extern "C" __attribute__((visibility("default"))) void* eedoPinOhRegs = NULL;

/* Exported Object: eedoPinOlRegs */
extern "C" __attribute__((visibility("default"))) void* eedoPinOlRegs = NULL;

/* Exported Object: gsyncPinOnRegs */
extern "C" __attribute__((visibility("default"))) void* gsyncPinOnRegs = NULL;

/* Exported Object: gsyncPinOffRegs */
extern "C" __attribute__((visibility("default"))) void* gsyncPinOffRegs = NULL;

/* Demangled: wmt_core_init */
extern "C" __attribute__((visibility("default"))) int wmt_core_init(void) {
    ALOGD("wmt_core_init() called");
    return 0;
}

/* Exported Object: g_wifi_on_off_ready */
extern "C" __attribute__((visibility("default"))) void* g_wifi_on_off_ready = NULL;

/* Demangled: wmt_core_deinit */
extern "C" __attribute__((visibility("default"))) int wmt_core_deinit(void) {
    ALOGD("wmt_core_deinit() called");
    return 0;
}

/* Demangled: wmt_core_rx_flush */
extern "C" __attribute__((visibility("default"))) int wmt_core_rx_flush(void) {
    ALOGD("wmt_core_rx_flush() called");
    return 0;
}

/* Demangled: wmt_core_opid_handler */
extern "C" __attribute__((visibility("default"))) int wmt_core_opid_handler(void) {
    ALOGD("wmt_core_opid_handler() called");
    return 0;
}

/* Demangled: wmt_core_opid */
extern "C" __attribute__((visibility("default"))) int wmt_core_opid(void) {
    ALOGD("wmt_core_opid() called");
    return 0;
}

/* Demangled: wmt_core_init_script_retry */
extern "C" __attribute__((visibility("default"))) int wmt_core_init_script_retry(void) {
    ALOGD("wmt_core_init_script_retry() called");
    return 0;
}

/* Demangled: wmt_core_get_drv_status */
extern "C" __attribute__((visibility("default"))) int wmt_core_get_drv_status(void) {
    ALOGD("wmt_core_get_drv_status() called");
    return 0;
}

/* Demangled: wmt_core_patch_check */
extern "C" __attribute__((visibility("default"))) int wmt_core_patch_check(void) {
    ALOGD("wmt_core_patch_check() called");
    return 0;
}

/* Demangled: wmt_core_is_quick_ps_support */
extern "C" __attribute__((visibility("default"))) int wmt_core_is_quick_ps_support(void) {
    ALOGD("wmt_core_is_quick_ps_support() called");
    return 0;
}

/* Demangled: wmt_core_get_aee_dump_flag */
extern "C" __attribute__((visibility("default"))) int wmt_core_get_aee_dump_flag(void) {
    ALOGD("wmt_core_get_aee_dump_flag() called");
    return 0;
}

/* Demangled: wmt_core_trigger_stp_assert */
extern "C" __attribute__((visibility("default"))) int wmt_core_trigger_stp_assert(void) {
    ALOGD("wmt_core_trigger_stp_assert() called");
    return 0;
}

/* Demangled: wmt_lib_trigger_reset */
extern "C" __attribute__((visibility("default"))) int wmt_lib_trigger_reset(void) {
    ALOGD("wmt_lib_trigger_reset() called");
    return 0;
}

/* Demangled: wmt_core_set_coredump_state */
extern "C" __attribute__((visibility("default"))) int wmt_core_set_coredump_state(void) {
    ALOGD("wmt_core_set_coredump_state() called");
    return 0;
}

/* Demangled: wmt_core_set_flag_for_test */
extern "C" __attribute__((visibility("default"))) int wmt_core_set_flag_for_test(void) {
    ALOGD("wmt_core_set_flag_for_test() called");
    return 0;
}

/* Demangled: wmt_core_get_flag_for_test */
extern "C" __attribute__((visibility("default"))) int wmt_core_get_flag_for_test(void) {
    ALOGD("wmt_core_get_flag_for_test() called");
    return 0;
}

/* Demangled: wmt_get_gen_conf_pointer */
extern "C" __attribute__((visibility("default"))) int wmt_get_gen_conf_pointer(void) {
    ALOGD("wmt_get_gen_conf_pointer() called");
    return 0;
}

/* Demangled: wmt_core_set_blank_status */
extern "C" __attribute__((visibility("default"))) int wmt_core_set_blank_status(void) {
    ALOGD("wmt_core_set_blank_status() called");
    return 0;
}

/* Demangled: wmt_core_get_blank_status */
extern "C" __attribute__((visibility("default"))) int wmt_core_get_blank_status(void) {
    ALOGD("wmt_core_get_blank_status() called");
    return 0;
}

/* Demangled: wmt_blank_status_ctrl */
extern "C" __attribute__((visibility("default"))) int wmt_blank_status_ctrl(void) {
    ALOGD("wmt_blank_status_ctrl() called");
    return 0;
}

/* Demangled: wmt_lib_set_blank_status */
extern "C" __attribute__((visibility("default"))) int wmt_lib_set_blank_status(void) {
    ALOGD("wmt_lib_set_blank_status() called");
    return 0;
}

/* Demangled: wmt_dev_get_blank_state */
extern "C" __attribute__((visibility("default"))) int wmt_dev_get_blank_state(void) {
    ALOGD("wmt_dev_get_blank_state() called");
    return 0;
}

/* Exported Object: g_pwr_off_flag */
extern "C" __attribute__((visibility("default"))) void* g_pwr_off_flag = NULL;

/* Demangled: wmt_lib_power_lock_aquire */
extern "C" __attribute__((visibility("default"))) int wmt_lib_power_lock_aquire(void) {
    ALOGD("wmt_lib_power_lock_aquire() called");
    return 0;
}

/* Demangled: wmt_lib_power_lock_release */
extern "C" __attribute__((visibility("default"))) int wmt_lib_power_lock_release(void) {
    ALOGD("wmt_lib_power_lock_release() called");
    return 0;
}

/* Demangled: mtk_wcn_set_connsys_power_off_flag */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_set_connsys_power_off_flag(void) {
    ALOGD("mtk_wcn_set_connsys_power_off_flag() called");
    return 0;
}

/* Exported Object: gpWmtFuncOps */
extern "C" __attribute__((visibility("default"))) void* gpWmtFuncOps = NULL;

/* Demangled: wmt_lib_get_current_op */
extern "C" __attribute__((visibility("default"))) int wmt_lib_get_current_op(void) {
    ALOGD("wmt_lib_get_current_op() called");
    return 0;
}

/* Demangled: wmt_lib_put_worker_op */
extern "C" __attribute__((visibility("default"))) int wmt_lib_put_worker_op(void) {
    ALOGD("wmt_lib_put_worker_op() called");
    return 0;
}

/* Demangled: wmt_lib_wlan_lock_aquire */
extern "C" __attribute__((visibility("default"))) int wmt_lib_wlan_lock_aquire(void) {
    ALOGD("wmt_lib_wlan_lock_aquire() called");
    return 0;
}

/* Demangled: wmt_lib_wlan_lock_release */
extern "C" __attribute__((visibility("default"))) int wmt_lib_wlan_lock_release(void) {
    ALOGD("wmt_lib_wlan_lock_release() called");
    return 0;
}

/* Demangled: mtk_wcn_wmt_system_state_reset */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_wmt_system_state_reset(void) {
    ALOGD("mtk_wcn_wmt_system_state_reset() called");
    return 0;
}

/* Demangled: wmt_lib_idc_lock_aquire */
extern "C" __attribute__((visibility("default"))) int wmt_lib_idc_lock_aquire(void) {
    ALOGD("wmt_lib_idc_lock_aquire() called");
    return 0;
}

/* Demangled: wmt_lib_idc_lock_release */
extern "C" __attribute__((visibility("default"))) int wmt_lib_idc_lock_release(void) {
    ALOGD("wmt_lib_idc_lock_release() called");
    return 0;
}

/* Demangled: connsys_dedicated_log_get_utc_time */
extern "C" __attribute__((visibility("default"))) int connsys_dedicated_log_get_utc_time(void) {
    ALOGD("connsys_dedicated_log_get_utc_time() called");
    return 0;
}

/* Demangled: wmt_lib_try_pwr_off */
extern "C" __attribute__((visibility("default"))) int wmt_lib_try_pwr_off(void) {
    ALOGD("wmt_lib_try_pwr_off() called");
    return 0;
}

/* Demangled: wmt_lib_wlan_lock_trylock */
extern "C" __attribute__((visibility("default"))) int wmt_lib_wlan_lock_trylock(void) {
    ALOGD("wmt_lib_wlan_lock_trylock() called");
    return 0;
}

/* Demangled: wmt_lib_co_clock_flag_get */
extern "C" __attribute__((visibility("default"))) int wmt_lib_co_clock_flag_get(void) {
    ALOGD("wmt_lib_co_clock_flag_get() called");
    return 0;
}

/* Demangled: wmt_lib_get_icinfo */
extern "C" __attribute__((visibility("default"))) int wmt_lib_get_icinfo(void) {
    ALOGD("wmt_lib_get_icinfo() called");
    return 0;
}

/* Exported Object: wmt_ic_ops_mt6620 */
extern "C" __attribute__((visibility("default"))) void* wmt_ic_ops_mt6620 = NULL;

/* Exported Object: wmt_ic_ops_soc */
extern "C" __attribute__((visibility("default"))) void* wmt_ic_ops_soc = NULL;

/* Exported Object: wmt_ic_ops_mt6630 */
extern "C" __attribute__((visibility("default"))) void* wmt_ic_ops_mt6630 = NULL;

/* Exported Object: wmt_ic_ops_mt6632 */
extern "C" __attribute__((visibility("default"))) void* wmt_ic_ops_mt6632 = NULL;

/* Demangled: mtk_wcn_stp_psm_dbg_level */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_psm_dbg_level(void) {
    ALOGD("mtk_wcn_stp_psm_dbg_level() called");
    return 0;
}

/* Exported Object: gPsmDbgLevel */
extern "C" __attribute__((visibility("default"))) void* gPsmDbgLevel = NULL;

/* Demangled: _stp_psm_get_free_op */
extern "C" __attribute__((visibility("default"))) int _stp_psm_get_free_op(void) {
    ALOGD("_stp_psm_get_free_op() called");
    return 0;
}

/* Demangled: _stp_psm_put_act_op */
extern "C" __attribute__((visibility("default"))) int _stp_psm_put_act_op(void) {
    ALOGD("_stp_psm_put_act_op() called");
    return 0;
}

/* Exported Object: g_stp_psm_opid_dbg */
extern "C" __attribute__((visibility("default"))) void* g_stp_psm_opid_dbg = NULL;

/* Demangled: osal_get_local_time */
extern "C" __attribute__((visibility("default"))) int osal_get_local_time(void) {
    ALOGD("osal_get_local_time() called");
    return 0;
}

/* Demangled: osal_do_gettimeofday */
extern "C" __attribute__((visibility("default"))) int osal_do_gettimeofday(void) {
    ALOGD("osal_do_gettimeofday() called");
    return 0;
}

/* Exported Object: stp_psm */
extern "C" __attribute__((visibility("default"))) void* stp_psm = NULL;

/* Demangled: osal_opq_dump_locked */
extern "C" __attribute__((visibility("default"))) int osal_opq_dump_locked(void) {
    ALOGD("osal_opq_dump_locked() called");
    return 0;
}

/* Demangled: _stp_psm_hold_data */
extern "C" __attribute__((visibility("default"))) int _stp_psm_hold_data(void) {
    ALOGD("_stp_psm_hold_data() called");
    return 0;
}

/* Demangled: osal_fifo_len */
extern "C" __attribute__((visibility("default"))) int osal_fifo_len(void) {
    ALOGD("osal_fifo_len() called");
    return 0;
}

/* Demangled: osal_fifo_reset */
extern "C" __attribute__((visibility("default"))) int osal_fifo_reset(void) {
    ALOGD("osal_fifo_reset() called");
    return 0;
}

/* Demangled: osal_fifo_in */
extern "C" __attribute__((visibility("default"))) int osal_fifo_in(void) {
    ALOGD("osal_fifo_in() called");
    return 0;
}

/* Demangled: _stp_psm_has_pending_data */
extern "C" __attribute__((visibility("default"))) int _stp_psm_has_pending_data(void) {
    ALOGD("_stp_psm_has_pending_data() called");
    return 0;
}

/* Demangled: wmt_lib_ps_set_idle_time */
extern "C" __attribute__((visibility("default"))) int wmt_lib_ps_set_idle_time(void) {
    ALOGD("wmt_lib_ps_set_idle_time() called");
    return 0;
}

/* Demangled: osal_timer_modify */
extern "C" __attribute__((visibility("default"))) int osal_timer_modify(void) {
    ALOGD("osal_timer_modify() called");
    return 0;
}

/* Demangled: stp_psm_start_monitor */
extern "C" __attribute__((visibility("default"))) int stp_psm_start_monitor(void) {
    ALOGD("stp_psm_start_monitor() called");
    return 0;
}

/* Demangled: osal_printtimeofday */
extern "C" __attribute__((visibility("default"))) int osal_printtimeofday(void) {
    ALOGD("osal_printtimeofday() called");
    return 0;
}

/* Demangled: stp_psm_do_wakeup */
extern "C" __attribute__((visibility("default"))) int stp_psm_do_wakeup(void) {
    ALOGD("stp_psm_do_wakeup() called");
    return 0;
}

/* Demangled: osal_timer_stop_sync */
extern "C" __attribute__((visibility("default"))) int osal_timer_stop_sync(void) {
    ALOGD("osal_timer_stop_sync() called");
    return 0;
}

/* Demangled: mtk_wcn_wmt_dump_wmtd_backtrace */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_wmt_dump_wmtd_backtrace(void) {
    ALOGD("mtk_wcn_wmt_dump_wmtd_backtrace() called");
    return 0;
}

/* Demangled: osal_elapsed_us */
extern "C" __attribute__((visibility("default"))) int osal_elapsed_us(void) {
    ALOGD("osal_elapsed_us() called");
    return 0;
}

/* Exported Object: g_stp_psm_dbg */
extern "C" __attribute__((visibility("default"))) void* g_stp_psm_dbg = NULL;

/* Demangled: osal_fifo_out */
extern "C" __attribute__((visibility("default"))) int osal_fifo_out(void) {
    ALOGD("osal_fifo_out() called");
    return 0;
}

/* Exported Object: stp_psm_i */
extern "C" __attribute__((visibility("default"))) void* stp_psm_i = NULL;

/* Demangled: osal_thread_show_stack */
extern "C" __attribute__((visibility("default"))) int osal_thread_show_stack(void) {
    ALOGD("osal_thread_show_stack() called");
    return 0;
}

/* Demangled: stp_psm_check_sleep_enable */
extern "C" __attribute__((visibility("default"))) int stp_psm_check_sleep_enable(void) {
    ALOGD("stp_psm_check_sleep_enable() called");
    return 0;
}

/* Demangled: osal_op_history_print */
extern "C" __attribute__((visibility("default"))) int osal_op_history_print(void) {
    ALOGD("osal_op_history_print() called");
    return 0;
}

/* Demangled: wmt_lib_ps_stp_cb */
extern "C" __attribute__((visibility("default"))) int wmt_lib_ps_stp_cb(void) {
    ALOGD("wmt_lib_ps_stp_cb() called");
    return 0;
}

/* Demangled: wmt_lib_is_quick_ps_support */
extern "C" __attribute__((visibility("default"))) int wmt_lib_is_quick_ps_support(void) {
    ALOGD("wmt_lib_is_quick_ps_support() called");
    return 0;
}

/* Demangled: wmt_lib_update_fw_patch_chip_rst */
extern "C" __attribute__((visibility("default"))) int wmt_lib_update_fw_patch_chip_rst(void) {
    ALOGD("wmt_lib_update_fw_patch_chip_rst() called");
    return 0;
}

/* Demangled: osal_fifo_init */
extern "C" __attribute__((visibility("default"))) int osal_fifo_init(void) {
    ALOGD("osal_fifo_init() called");
    return 0;
}

/* Demangled: osal_event_init */
extern "C" __attribute__((visibility("default"))) int osal_event_init(void) {
    ALOGD("osal_event_init() called");
    return 0;
}

/* Demangled: osal_op_history_init */
extern "C" __attribute__((visibility("default"))) int osal_op_history_init(void) {
    ALOGD("osal_op_history_init() called");
    return 0;
}

/* Demangled: osal_thread_create */
extern "C" __attribute__((visibility("default"))) int osal_thread_create(void) {
    ALOGD("osal_thread_create() called");
    return 0;
}

/* Demangled: osal_thread_run */
extern "C" __attribute__((visibility("default"))) int osal_thread_run(void) {
    ALOGD("osal_thread_run() called");
    return 0;
}

/* Demangled: osal_thread_destroy */
extern "C" __attribute__((visibility("default"))) int osal_thread_destroy(void) {
    ALOGD("osal_thread_destroy() called");
    return 0;
}

/* Demangled: osal_fifo_deinit */
extern "C" __attribute__((visibility("default"))) int osal_fifo_deinit(void) {
    ALOGD("osal_fifo_deinit() called");
    return 0;
}

/* Demangled: osal_wait_for_event */
extern "C" __attribute__((visibility("default"))) int osal_wait_for_event(void) {
    ALOGD("osal_wait_for_event() called");
    return 0;
}

/* Demangled: osal_thread_should_stop */
extern "C" __attribute__((visibility("default"))) int osal_thread_should_stop(void) {
    ALOGD("osal_thread_should_stop() called");
    return 0;
}

/* Demangled: osal_op_history_save */
extern "C" __attribute__((visibility("default"))) int osal_op_history_save(void) {
    ALOGD("osal_op_history_save() called");
    return 0;
}

/* Demangled: osal_op_get_id */
extern "C" __attribute__((visibility("default"))) int osal_op_get_id(void) {
    ALOGD("osal_op_get_id() called");
    return 0;
}

/* Demangled: osal_op_is_wait_for_signal */
extern "C" __attribute__((visibility("default"))) int osal_op_is_wait_for_signal(void) {
    ALOGD("osal_op_is_wait_for_signal() called");
    return 0;
}

/* Demangled: osal_op_raise_signal */
extern "C" __attribute__((visibility("default"))) int osal_op_raise_signal(void) {
    ALOGD("osal_op_raise_signal() called");
    return 0;
}

/* Demangled: osal_wait_for_event_timeout */
extern "C" __attribute__((visibility("default"))) int osal_wait_for_event_timeout(void) {
    ALOGD("osal_wait_for_event_timeout() called");
    return 0;
}

/* Demangled: stp_dbg_trigger_collect_ftrace */
extern "C" __attribute__((visibility("default"))) int stp_dbg_trigger_collect_ftrace(void) {
    ALOGD("stp_dbg_trigger_collect_ftrace() called");
    return 0;
}

/* Demangled: wmt_lib_get_need_update_patch_version */
extern "C" __attribute__((visibility("default"))) int wmt_lib_get_need_update_patch_version(void) {
    ALOGD("wmt_lib_get_need_update_patch_version() called");
    return 0;
}

/* Demangled: wmt_lib_set_need_update_patch_version */
extern "C" __attribute__((visibility("default"))) int wmt_lib_set_need_update_patch_version(void) {
    ALOGD("wmt_lib_set_need_update_patch_version() called");
    return 0;
}

/* Demangled: wmt_lib_get_patch_info */
extern "C" __attribute__((visibility("default"))) int wmt_lib_get_patch_info(void) {
    ALOGD("wmt_lib_get_patch_info() called");
    return 0;
}

/* Demangled: osal_memcpy_toio */
extern "C" __attribute__((visibility("default"))) int osal_memcpy_toio(void) {
    ALOGD("osal_memcpy_toio() called");
    return 0;
}

/* Exported Object: mtk_wcn_wlan_emi_mpu_set_protection */
extern "C" __attribute__((visibility("default"))) void* mtk_wcn_wlan_emi_mpu_set_protection = NULL;

/* Demangled: osal_memcpy_fromio */
extern "C" __attribute__((visibility("default"))) int osal_memcpy_fromio(void) {
    ALOGD("osal_memcpy_fromio() called");
    return 0;
}

/* Demangled: wmt_lib_mpu_lock_aquire */
extern "C" __attribute__((visibility("default"))) int wmt_lib_mpu_lock_aquire(void) {
    ALOGD("wmt_lib_mpu_lock_aquire() called");
    return 0;
}

/* Demangled: wmt_lib_mpu_lock_release */
extern "C" __attribute__((visibility("default"))) int wmt_lib_mpu_lock_release(void) {
    ALOGD("wmt_lib_mpu_lock_release() called");
    return 0;
}

/* Exported Object: __crc_wmt_lib_get_fwinfor_from_emi */
extern "C" __attribute__((visibility("default"))) void* __crc_wmt_lib_get_fwinfor_from_emi = NULL;

/* Demangled: osal_trylock_sleepable_lock */
extern "C" __attribute__((visibility("default"))) int osal_trylock_sleepable_lock(void) {
    ALOGD("osal_trylock_sleepable_lock() called");
    return 0;
}

/* Demangled: wmt_lib_psm_lock_aquire */
extern "C" __attribute__((visibility("default"))) int wmt_lib_psm_lock_aquire(void) {
    ALOGD("wmt_lib_psm_lock_aquire() called");
    return 0;
}

/* Demangled: wmt_lib_psm_lock_release */
extern "C" __attribute__((visibility("default"))) int wmt_lib_psm_lock_release(void) {
    ALOGD("wmt_lib_psm_lock_release() called");
    return 0;
}

/* Demangled: wmt_lib_psm_lock_trylock */
extern "C" __attribute__((visibility("default"))) int wmt_lib_psm_lock_trylock(void) {
    ALOGD("wmt_lib_psm_lock_trylock() called");
    return 0;
}

/* Demangled: wmt_lib_assert_lock_aquire */
extern "C" __attribute__((visibility("default"))) int wmt_lib_assert_lock_aquire(void) {
    ALOGD("wmt_lib_assert_lock_aquire() called");
    return 0;
}

/* Demangled: wmt_lib_assert_lock_release */
extern "C" __attribute__((visibility("default"))) int wmt_lib_assert_lock_release(void) {
    ALOGD("wmt_lib_assert_lock_release() called");
    return 0;
}

/* Demangled: wmt_lib_assert_lock_trylock */
extern "C" __attribute__((visibility("default"))) int wmt_lib_assert_lock_trylock(void) {
    ALOGD("wmt_lib_assert_lock_trylock() called");
    return 0;
}

/* Demangled: wmt_lib_power_lock_trylock */
extern "C" __attribute__((visibility("default"))) int wmt_lib_power_lock_trylock(void) {
    ALOGD("wmt_lib_power_lock_trylock() called");
    return 0;
}

/* Demangled: DISABLE_PSM_MONITOR */
extern "C" __attribute__((visibility("default"))) int DISABLE_PSM_MONITOR(void) {
    ALOGD("DISABLE_PSM_MONITOR() called");
    return 0;
}

/* Demangled: wmt_btm_trigger_reset */
extern "C" __attribute__((visibility("default"))) int wmt_btm_trigger_reset(void) {
    ALOGD("wmt_btm_trigger_reset() called");
    return 0;
}

/* Demangled: ENABLE_PSM_MONITOR */
extern "C" __attribute__((visibility("default"))) int ENABLE_PSM_MONITOR(void) {
    ALOGD("ENABLE_PSM_MONITOR() called");
    return 0;
}

/* Demangled: wmt_lib_init */
extern "C" __attribute__((visibility("default"))) int wmt_lib_init(void) {
    ALOGD("wmt_lib_init() called");
    return 0;
}

/* Demangled: wmt_lib_ps_irq_cb */
extern "C" __attribute__((visibility("default"))) int wmt_lib_ps_irq_cb(void) {
    ALOGD("wmt_lib_ps_irq_cb() called");
    return 0;
}

/* Demangled: wmt_lib_set_aif */
extern "C" __attribute__((visibility("default"))) int wmt_lib_set_aif(void) {
    ALOGD("wmt_lib_set_aif() called");
    return 0;
}

/* Demangled: mtk_wcn_wmt_func_ctrl_for_plat */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_wmt_func_ctrl_for_plat(void) {
    ALOGD("mtk_wcn_wmt_func_ctrl_for_plat() called");
    return 0;
}

/* Demangled: wmt_idc_init */
extern "C" __attribute__((visibility("default"))) int wmt_idc_init(void) {
    ALOGD("wmt_idc_init() called");
    return 0;
}

/* Demangled: wmt_lib_wait_event_checker */
extern "C" __attribute__((visibility("default"))) int wmt_lib_wait_event_checker(void) {
    ALOGD("wmt_lib_wait_event_checker() called");
    return 0;
}

/* Demangled: osal_thread_wait_for_event */
extern "C" __attribute__((visibility("default"))) int osal_thread_wait_for_event(void) {
    ALOGD("osal_thread_wait_for_event() called");
    return 0;
}

/* Demangled: wmt_lib_trigger_assert_keyword */
extern "C" __attribute__((visibility("default"))) int wmt_lib_trigger_assert_keyword(void) {
    ALOGD("wmt_lib_trigger_assert_keyword() called");
    return 0;
}

/* Demangled: wmt_lib_worker_wait_event_checker */
extern "C" __attribute__((visibility("default"))) int wmt_lib_worker_wait_event_checker(void) {
    ALOGD("wmt_lib_worker_wait_event_checker() called");
    return 0;
}

/* Demangled: wmt_lib_utc_time_sync */
extern "C" __attribute__((visibility("default"))) int wmt_lib_utc_time_sync(void) {
    ALOGD("wmt_lib_utc_time_sync() called");
    return 0;
}

/* Demangled: osal_opq_dump */
extern "C" __attribute__((visibility("default"))) int osal_opq_dump(void) {
    ALOGD("osal_opq_dump() called");
    return 0;
}

/* Demangled: wmt_lib_ps_init */
extern "C" __attribute__((visibility("default"))) int wmt_lib_ps_init(void) {
    ALOGD("wmt_lib_ps_init() called");
    return 0;
}

/* Demangled: wmt_lib_put_act_op */
extern "C" __attribute__((visibility("default"))) int wmt_lib_put_act_op(void) {
    ALOGD("wmt_lib_put_act_op() called");
    return 0;
}

/* Demangled: wmt_lib_deinit */
extern "C" __attribute__((visibility("default"))) int wmt_lib_deinit(void) {
    ALOGD("wmt_lib_deinit() called");
    return 0;
}

/* Demangled: osal_thread_stop */
extern "C" __attribute__((visibility("default"))) int osal_thread_stop(void) {
    ALOGD("osal_thread_stop() called");
    return 0;
}

/* Demangled: osal_event_deinit */
extern "C" __attribute__((visibility("default"))) int osal_event_deinit(void) {
    ALOGD("osal_event_deinit() called");
    return 0;
}

/* Demangled: osal_signal_deinit */
extern "C" __attribute__((visibility("default"))) int osal_signal_deinit(void) {
    ALOGD("osal_signal_deinit() called");
    return 0;
}

/* Demangled: wmt_idc_deinit */
extern "C" __attribute__((visibility("default"))) int wmt_idc_deinit(void) {
    ALOGD("wmt_idc_deinit() called");
    return 0;
}

/* Demangled: wmt_lib_ps_deinit */
extern "C" __attribute__((visibility("default"))) int wmt_lib_ps_deinit(void) {
    ALOGD("wmt_lib_ps_deinit() called");
    return 0;
}

/* Demangled: wmt_lib_flush_rx */
extern "C" __attribute__((visibility("default"))) int wmt_lib_flush_rx(void) {
    ALOGD("wmt_lib_flush_rx() called");
    return 0;
}

/* Demangled: wmt_lib_trigger_cmd_signal */
extern "C" __attribute__((visibility("default"))) int wmt_lib_trigger_cmd_signal(void) {
    ALOGD("wmt_lib_trigger_cmd_signal() called");
    return 0;
}

/* Demangled: osal_raise_signal */
extern "C" __attribute__((visibility("default"))) int osal_raise_signal(void) {
    ALOGD("osal_raise_signal() called");
    return 0;
}

/* Demangled: wmt_lib_get_cmd_event */
extern "C" __attribute__((visibility("default"))) int wmt_lib_get_cmd_event(void) {
    ALOGD("wmt_lib_get_cmd_event() called");
    return 0;
}

/* Demangled: wmt_lib_set_patch_name */
extern "C" __attribute__((visibility("default"))) int wmt_lib_set_patch_name(void) {
    ALOGD("wmt_lib_set_patch_name() called");
    return 0;
}

/* Demangled: wmt_lib_set_uart_name */
extern "C" __attribute__((visibility("default"))) int wmt_lib_set_uart_name(void) {
    ALOGD("wmt_lib_set_uart_name() called");
    return 0;
}

/* Demangled: wmt_lib_set_hif */
extern "C" __attribute__((visibility("default"))) int wmt_lib_set_hif(void) {
    ALOGD("wmt_lib_set_hif() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_set_if_tx_type */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_set_if_tx_type(void) {
    ALOGD("mtk_wcn_stp_set_if_tx_type() called");
    return 0;
}

/* Demangled: wmt_lib_get_hif */
extern "C" __attribute__((visibility("default"))) int wmt_lib_get_hif(void) {
    ALOGD("wmt_lib_get_hif() called");
    return 0;
}

/* Demangled: wmt_lib_get_cmd */
extern "C" __attribute__((visibility("default"))) int wmt_lib_get_cmd(void) {
    ALOGD("wmt_lib_get_cmd() called");
    return 0;
}

/* Demangled: wmt_lib_get_cmd_status */
extern "C" __attribute__((visibility("default"))) int wmt_lib_get_cmd_status(void) {
    ALOGD("wmt_lib_get_cmd_status() called");
    return 0;
}

/* Demangled: wmt_lib_stp_is_btif_fullset_mode */
extern "C" __attribute__((visibility("default"))) int wmt_lib_stp_is_btif_fullset_mode(void) {
    ALOGD("wmt_lib_stp_is_btif_fullset_mode() called");
    return 0;
}

/* Demangled: wmt_lib_handle_idc_msg */
extern "C" __attribute__((visibility("default"))) int wmt_lib_handle_idc_msg(void) {
    ALOGD("wmt_lib_handle_idc_msg() called");
    return 0;
}

/* Demangled: wmt_lib_get_free_op */
extern "C" __attribute__((visibility("default"))) int wmt_lib_get_free_op(void) {
    ALOGD("wmt_lib_get_free_op() called");
    return 0;
}

/* Demangled: wmt_lib_put_op_to_free_queue */
extern "C" __attribute__((visibility("default"))) int wmt_lib_put_op_to_free_queue(void) {
    ALOGD("wmt_lib_put_op_to_free_queue() called");
    return 0;
}

/* Demangled: wmt_lib_set_bt_link_status */
extern "C" __attribute__((visibility("default"))) int wmt_lib_set_bt_link_status(void) {
    ALOGD("wmt_lib_set_bt_link_status() called");
    return 0;
}

/* Exported Object: mtk_wcn_wlan_is_wifi_drv_own */
extern "C" __attribute__((visibility("default"))) void* mtk_wcn_wlan_is_wifi_drv_own = NULL;

/* Demangled: wmt_dev_get_early_suspend_state */
extern "C" __attribute__((visibility("default"))) int wmt_dev_get_early_suspend_state(void) {
    ALOGD("wmt_dev_get_early_suspend_state() called");
    return 0;
}

/* Demangled: wmt_lib_fw_patch_update_rst_ctrl */
extern "C" __attribute__((visibility("default"))) int wmt_lib_fw_patch_update_rst_ctrl(void) {
    ALOGD("wmt_lib_fw_patch_update_rst_ctrl() called");
    return 0;
}

/* Demangled: wmt_lib_ps_set_sdio_psop */
extern "C" __attribute__((visibility("default"))) int wmt_lib_ps_set_sdio_psop(void) {
    ALOGD("wmt_lib_ps_set_sdio_psop() called");
    return 0;
}

/* Demangled: wmt_lib_sdio_reg_rw_cb */
extern "C" __attribute__((visibility("default"))) int wmt_lib_sdio_reg_rw_cb(void) {
    ALOGD("wmt_lib_sdio_reg_rw_cb() called");
    return 0;
}

/* Demangled: wmt_lib_def_patch_name */
extern "C" __attribute__((visibility("default"))) int wmt_lib_def_patch_name(void) {
    ALOGD("wmt_lib_def_patch_name() called");
    return 0;
}

/* Demangled: wmt_lib_is_therm_ctrl_support */
extern "C" __attribute__((visibility("default"))) int wmt_lib_is_therm_ctrl_support(void) {
    ALOGD("wmt_lib_is_therm_ctrl_support() called");
    return 0;
}

/* Demangled: wmt_lib_is_dsns_ctrl_support */
extern "C" __attribute__((visibility("default"))) int wmt_lib_is_dsns_ctrl_support(void) {
    ALOGD("wmt_lib_is_dsns_ctrl_support() called");
    return 0;
}

/* Demangled: wmt_lib_reg_rw */
extern "C" __attribute__((visibility("default"))) int wmt_lib_reg_rw(void) {
    ALOGD("wmt_lib_reg_rw() called");
    return 0;
}

/* Demangled: wmt_lib_efuse_rw */
extern "C" __attribute__((visibility("default"))) int wmt_lib_efuse_rw(void) {
    ALOGD("wmt_lib_efuse_rw() called");
    return 0;
}

/* Demangled: wmt_lib_host_awake_get */
extern "C" __attribute__((visibility("default"))) int wmt_lib_host_awake_get(void) {
    ALOGD("wmt_lib_host_awake_get() called");
    return 0;
}

/* Demangled: wmt_lib_host_awake_put */
extern "C" __attribute__((visibility("default"))) int wmt_lib_host_awake_put(void) {
    ALOGD("wmt_lib_host_awake_put() called");
    return 0;
}

/* Demangled: wmt_lib_btm_cb */
extern "C" __attribute__((visibility("default"))) int wmt_lib_btm_cb(void) {
    ALOGD("wmt_lib_btm_cb() called");
    return 0;
}

/* Demangled: wmt_lib_cmb_rst */
extern "C" __attribute__((visibility("default"))) int wmt_lib_cmb_rst(void) {
    ALOGD("wmt_lib_cmb_rst() called");
    return 0;
}

/* Demangled: wmt_lib_hw_rst */
extern "C" __attribute__((visibility("default"))) int wmt_lib_hw_rst(void) {
    ALOGD("wmt_lib_hw_rst() called");
    return 0;
}

/* Demangled: wmt_lib_sw_rst */
extern "C" __attribute__((visibility("default"))) int wmt_lib_sw_rst(void) {
    ALOGD("wmt_lib_sw_rst() called");
    return 0;
}

/* Demangled: wmt_cdev_rstmsg_snd */
extern "C" __attribute__((visibility("default"))) int wmt_cdev_rstmsg_snd(void) {
    ALOGD("wmt_cdev_rstmsg_snd() called");
    return 0;
}

/* Demangled: wmt_lib_state_init */
extern "C" __attribute__((visibility("default"))) int wmt_lib_state_init(void) {
    ALOGD("wmt_lib_state_init() called");
    return 0;
}

/* Demangled: wmt_lib_sdio_ctrl */
extern "C" __attribute__((visibility("default"))) int wmt_lib_sdio_ctrl(void) {
    ALOGD("wmt_lib_sdio_ctrl() called");
    return 0;
}

/* Demangled: stp_dbg_reset */
extern "C" __attribute__((visibility("default"))) int stp_dbg_reset(void) {
    ALOGD("stp_dbg_reset() called");
    return 0;
}

/* Demangled: wmt_lib_msgcb_reg */
extern "C" __attribute__((visibility("default"))) int wmt_lib_msgcb_reg(void) {
    ALOGD("wmt_lib_msgcb_reg() called");
    return 0;
}

/* Demangled: wmt_lib_msgcb_unreg */
extern "C" __attribute__((visibility("default"))) int wmt_lib_msgcb_unreg(void) {
    ALOGD("wmt_lib_msgcb_unreg() called");
    return 0;
}

/* Demangled: wmt_lib_dbg_level_set */
extern "C" __attribute__((visibility("default"))) int wmt_lib_dbg_level_set(void) {
    ALOGD("wmt_lib_dbg_level_set() called");
    return 0;
}

/* Demangled: wmt_lib_set_stp_wmt_last_close */
extern "C" __attribute__((visibility("default"))) int wmt_lib_set_stp_wmt_last_close(void) {
    ALOGD("wmt_lib_set_stp_wmt_last_close() called");
    return 0;
}

/* Demangled: wmt_lib_notify_stp_sleep */
extern "C" __attribute__((visibility("default"))) int wmt_lib_notify_stp_sleep(void) {
    ALOGD("wmt_lib_notify_stp_sleep() called");
    return 0;
}

/* Demangled: wmt_lib_set_patch_num */
extern "C" __attribute__((visibility("default"))) int wmt_lib_set_patch_num(void) {
    ALOGD("wmt_lib_set_patch_num() called");
    return 0;
}

/* Demangled: wmt_lib_set_patch_info */
extern "C" __attribute__((visibility("default"))) int wmt_lib_set_patch_info(void) {
    ALOGD("wmt_lib_set_patch_info() called");
    return 0;
}

/* Demangled: wmt_lib_set_rom_patch_info */
extern "C" __attribute__((visibility("default"))) int wmt_lib_set_rom_patch_info(void) {
    ALOGD("wmt_lib_set_rom_patch_info() called");
    return 0;
}

/* Demangled: wmt_lib_set_current_op */
extern "C" __attribute__((visibility("default"))) int wmt_lib_set_current_op(void) {
    ALOGD("wmt_lib_set_current_op() called");
    return 0;
}

/* Demangled: wmt_lib_set_worker_op */
extern "C" __attribute__((visibility("default"))) int wmt_lib_set_worker_op(void) {
    ALOGD("wmt_lib_set_worker_op() called");
    return 0;
}

/* Demangled: wmt_lib_get_worker_op */
extern "C" __attribute__((visibility("default"))) int wmt_lib_get_worker_op(void) {
    ALOGD("wmt_lib_get_worker_op() called");
    return 0;
}

/* Demangled: wmt_lib_get_fwinfor_from_emi */
extern "C" __attribute__((visibility("default"))) int wmt_lib_get_fwinfor_from_emi(void) {
    ALOGD("wmt_lib_get_fwinfor_from_emi() called");
    return 0;
}

/* Demangled: wmt_lib_merge_if_flag_ctrl */
extern "C" __attribute__((visibility("default"))) int wmt_lib_merge_if_flag_ctrl(void) {
    ALOGD("wmt_lib_merge_if_flag_ctrl() called");
    return 0;
}

/* Demangled: wmt_lib_merge_if_flag_get */
extern "C" __attribute__((visibility("default"))) int wmt_lib_merge_if_flag_get(void) {
    ALOGD("wmt_lib_merge_if_flag_get() called");
    return 0;
}

/* Demangled: wmt_lib_get_cpupcr_xml_format */
extern "C" __attribute__((visibility("default"))) int wmt_lib_get_cpupcr_xml_format(void) {
    ALOGD("wmt_lib_get_cpupcr_xml_format() called");
    return 0;
}

/* Demangled: stp_dbg_cpupcr_infor_format */
extern "C" __attribute__((visibility("default"))) int stp_dbg_cpupcr_infor_format(void) {
    ALOGD("stp_dbg_cpupcr_infor_format() called");
    return 0;
}

/* Demangled: wmt_lib_get_cpupcr_reg_info */
extern "C" __attribute__((visibility("default"))) int wmt_lib_get_cpupcr_reg_info(void) {
    ALOGD("wmt_lib_get_cpupcr_reg_info() called");
    return 0;
}

/* Demangled: stp_dbg_dump_cpupcr_reg_info */
extern "C" __attribute__((visibility("default"))) int stp_dbg_dump_cpupcr_reg_info(void) {
    ALOGD("stp_dbg_dump_cpupcr_reg_info() called");
    return 0;
}

/* Demangled: wmt_dev_tm_temp_query */
extern "C" __attribute__((visibility("default"))) int wmt_dev_tm_temp_query(void) {
    ALOGD("wmt_dev_tm_temp_query() called");
    return 0;
}

/* Demangled: wmt_lib_register_thermal_ctrl_cb */
extern "C" __attribute__((visibility("default"))) int wmt_lib_register_thermal_ctrl_cb(void) {
    ALOGD("wmt_lib_register_thermal_ctrl_cb() called");
    return 0;
}

/* Demangled: wmt_lib_register_trigger_assert_cb */
extern "C" __attribute__((visibility("default"))) int wmt_lib_register_trigger_assert_cb(void) {
    ALOGD("wmt_lib_register_trigger_assert_cb() called");
    return 0;
}

/* Demangled: stp_dbg_set_host_assert_info */
extern "C" __attribute__((visibility("default"))) int stp_dbg_set_host_assert_info(void) {
    ALOGD("stp_dbg_set_host_assert_info() called");
    return 0;
}

/* Demangled: wmt_lib_co_clock_get */
extern "C" __attribute__((visibility("default"))) int wmt_lib_co_clock_get(void) {
    ALOGD("wmt_lib_co_clock_get() called");
    return 0;
}

/* Demangled: wmt_lib_quick_sleep_ctrl */
extern "C" __attribute__((visibility("default"))) int wmt_lib_quick_sleep_ctrl(void) {
    ALOGD("wmt_lib_quick_sleep_ctrl() called");
    return 0;
}

/* Demangled: wmt_lib_jtag_flag_set */
extern "C" __attribute__((visibility("default"))) int wmt_lib_jtag_flag_set(void) {
    ALOGD("wmt_lib_jtag_flag_set() called");
    return 0;
}

/* Demangled: wmt_lib_soc_set_wifiver */
extern "C" __attribute__((visibility("default"))) int wmt_lib_soc_set_wifiver(void) {
    ALOGD("wmt_lib_soc_set_wifiver() called");
    return 0;
}

/* Demangled: stp_dbg_set_wifiver */
extern "C" __attribute__((visibility("default"))) int stp_dbg_set_wifiver(void) {
    ALOGD("stp_dbg_set_wifiver() called");
    return 0;
}

/* Demangled: wmt_lib_wifi_fem_cfg_report */
extern "C" __attribute__((visibility("default"))) int wmt_lib_wifi_fem_cfg_report(void) {
    ALOGD("wmt_lib_wifi_fem_cfg_report() called");
    return 0;
}

/* Demangled: wmt_lib_sdio_reg_rw */
extern "C" __attribute__((visibility("default"))) int wmt_lib_sdio_reg_rw(void) {
    ALOGD("wmt_lib_sdio_reg_rw() called");
    return 0;
}

/* Demangled: wmt_lib_dump_wmtd_backtrace */
extern "C" __attribute__((visibility("default"))) int wmt_lib_dump_wmtd_backtrace(void) {
    ALOGD("wmt_lib_dump_wmtd_backtrace() called");
    return 0;
}

/* Demangled: wmt_lib_met_cmd */
extern "C" __attribute__((visibility("default"))) int wmt_lib_met_cmd(void) {
    ALOGD("wmt_lib_met_cmd() called");
    return 0;
}

/* Demangled: wmt_lib_get_gps_lna_pin_num */
extern "C" __attribute__((visibility("default"))) int wmt_lib_get_gps_lna_pin_num(void) {
    ALOGD("wmt_lib_get_gps_lna_pin_num() called");
    return 0;
}

/* Demangled: wmt_lib_met_ctrl */
extern "C" __attribute__((visibility("default"))) int wmt_lib_met_ctrl(void) {
    ALOGD("wmt_lib_met_ctrl() called");
    return 0;
}

/* Demangled: osal_ftrace_print_ctrl */
extern "C" __attribute__((visibility("default"))) int osal_ftrace_print_ctrl(void) {
    ALOGD("osal_ftrace_print_ctrl() called");
    return 0;
}

/* Demangled: osal_usleep_range */
extern "C" __attribute__((visibility("default"))) int osal_usleep_range(void) {
    ALOGD("osal_usleep_range() called");
    return 0;
}

/* Demangled: osal_buffer_dump_data */
extern "C" __attribute__((visibility("default"))) int osal_buffer_dump_data(void) {
    ALOGD("osal_buffer_dump_data() called");
    return 0;
}

/* Demangled: wmt_lib_set_ext_ldo */
extern "C" __attribute__((visibility("default"))) int wmt_lib_set_ext_ldo(void) {
    ALOGD("wmt_lib_set_ext_ldo() called");
    return 0;
}

/* Demangled: wmt_lib_get_ext_ldo */
extern "C" __attribute__((visibility("default"))) int wmt_lib_get_ext_ldo(void) {
    ALOGD("wmt_lib_get_ext_ldo() called");
    return 0;
}

/* Demangled: wmt_lib_fw_log_ctrl */
extern "C" __attribute__((visibility("default"))) int wmt_lib_fw_log_ctrl(void) {
    ALOGD("wmt_lib_fw_log_ctrl() called");
    return 0;
}

/* Demangled: wmt_lib_gps_mcu_ctrl */
extern "C" __attribute__((visibility("default"))) int wmt_lib_gps_mcu_ctrl(void) {
    ALOGD("wmt_lib_gps_mcu_ctrl() called");
    return 0;
}

/* Demangled: wmt_lib_get_blank_status */
extern "C" __attribute__((visibility("default"))) int wmt_lib_get_blank_status(void) {
    ALOGD("wmt_lib_get_blank_status() called");
    return 0;
}

/* Demangled: wmt_lib_blank_status_ctrl */
extern "C" __attribute__((visibility("default"))) int wmt_lib_blank_status_ctrl(void) {
    ALOGD("wmt_lib_blank_status_ctrl() called");
    return 0;
}

/* Demangled: wmt_lib_get_vendor_patch_num */
extern "C" __attribute__((visibility("default"))) int wmt_lib_get_vendor_patch_num(void) {
    ALOGD("wmt_lib_get_vendor_patch_num() called");
    return 0;
}

/* Demangled: wmt_lib_set_vendor_patch_version */
extern "C" __attribute__((visibility("default"))) int wmt_lib_set_vendor_patch_version(void) {
    ALOGD("wmt_lib_set_vendor_patch_version() called");
    return 0;
}

/* Demangled: wmt_lib_get_vendor_patch_version */
extern "C" __attribute__((visibility("default"))) int wmt_lib_get_vendor_patch_version(void) {
    ALOGD("wmt_lib_get_vendor_patch_version() called");
    return 0;
}

/* Demangled: wmt_lib_set_check_patch_status */
extern "C" __attribute__((visibility("default"))) int wmt_lib_set_check_patch_status(void) {
    ALOGD("wmt_lib_set_check_patch_status() called");
    return 0;
}

/* Demangled: wmt_lib_get_check_patch_status */
extern "C" __attribute__((visibility("default"))) int wmt_lib_get_check_patch_status(void) {
    ALOGD("wmt_lib_get_check_patch_status() called");
    return 0;
}

/* Demangled: wmt_lib_set_active_patch_version */
extern "C" __attribute__((visibility("default"))) int wmt_lib_set_active_patch_version(void) {
    ALOGD("wmt_lib_set_active_patch_version() called");
    return 0;
}

/* Demangled: wmt_lib_get_active_patch_version */
extern "C" __attribute__((visibility("default"))) int wmt_lib_get_active_patch_version(void) {
    ALOGD("wmt_lib_get_active_patch_version() called");
    return 0;
}

/* Demangled: mtk_lib_set_mcif_mpu_protection */
extern "C" __attribute__((visibility("default"))) int mtk_lib_set_mcif_mpu_protection(void) {
    ALOGD("mtk_lib_set_mcif_mpu_protection() called");
    return 0;
}

/* Demangled: wmt_lib_reg_readable */
extern "C" __attribute__((visibility("default"))) int wmt_lib_reg_readable(void) {
    ALOGD("wmt_lib_reg_readable() called");
    return 0;
}

/* Demangled: wmt_lib_reg_readable_by_addr */
extern "C" __attribute__((visibility("default"))) int wmt_lib_reg_readable_by_addr(void) {
    ALOGD("wmt_lib_reg_readable_by_addr() called");
    return 0;
}

/* Exported Object: __crc_mtk_wcn_stp_register_if_rx */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_stp_register_if_rx = NULL;

/* Exported Object: __crc_mtk_wcn_stp_register_if_tx */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_stp_register_if_tx = NULL;

/* Exported Object: __crc_mtk_wcn_stp_register_event_cb */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_stp_register_event_cb = NULL;

/* Exported Object: __crc_mtk_wcn_stp_register_tx_event_cb */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_stp_register_tx_event_cb = NULL;

/* Exported Object: __crc_mtk_wcn_stp_register_rx_has_pending_data */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_stp_register_rx_has_pending_data = NULL;

/* Exported Object: __crc_mtk_wcn_stp_register_tx_has_pending_data */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_stp_register_tx_has_pending_data = NULL;

/* Exported Object: __crc_mtk_wcn_stp_register_rx_thread_get */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_stp_register_rx_thread_get = NULL;

/* Exported Object: __crc_mtk_wcn_stp_sdio_wake_up_ctrl */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_stp_sdio_wake_up_ctrl = NULL;

/* Exported Object: __crc_mtk_stp_dbg_poll_cpupcr */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_stp_dbg_poll_cpupcr = NULL;

/* Demangled: mtk_wcn_stp_register_if_rx */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_register_if_rx(void) {
    ALOGD("mtk_wcn_stp_register_if_rx() called");
    return 0;
}

/* Demangled: osal_dbg_print */
extern "C" __attribute__((visibility("default"))) int osal_dbg_print(void) {
    ALOGD("osal_dbg_print() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_register_if_tx */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_register_if_tx(void) {
    ALOGD("mtk_wcn_stp_register_if_tx() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_register_tx_event_cb */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_register_tx_event_cb(void) {
    ALOGD("mtk_wcn_stp_register_tx_event_cb() called");
    return 0;
}

/* Demangled: osal_bug_on */
extern "C" __attribute__((visibility("default"))) int osal_bug_on(void) {
    ALOGD("osal_bug_on() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_register_rx_has_pending_data */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_register_rx_has_pending_data(void) {
    ALOGD("mtk_wcn_stp_register_rx_has_pending_data() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_register_tx_has_pending_data */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_register_tx_has_pending_data(void) {
    ALOGD("mtk_wcn_stp_register_tx_has_pending_data() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_register_rx_thread_get */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_register_rx_thread_get(void) {
    ALOGD("mtk_wcn_stp_register_rx_thread_get() called");
    return 0;
}

/* Demangled: stp_drv_init */
extern "C" __attribute__((visibility("default"))) int stp_drv_init(void) {
    ALOGD("stp_drv_init() called");
    return 0;
}

/* Demangled: stp_drv_exit */
extern "C" __attribute__((visibility("default"))) int stp_drv_exit(void) {
    ALOGD("stp_drv_exit() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_sdio_wake_up_ctrl */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_sdio_wake_up_ctrl(void) {
    ALOGD("mtk_wcn_stp_sdio_wake_up_ctrl() called");
    return 0;
}

/* Demangled: stp_sdio_wake_up_ctrl */
extern "C" __attribute__((visibility("default"))) int stp_sdio_wake_up_ctrl(void) {
    ALOGD("stp_sdio_wake_up_ctrl() called");
    return 0;
}

/* Demangled: mtk_stp_dbg_poll_cpupcr */
extern "C" __attribute__((visibility("default"))) int mtk_stp_dbg_poll_cpupcr(void) {
    ALOGD("mtk_stp_dbg_poll_cpupcr() called");
    return 0;
}

/* Exported Object: WMT_CLOCK_RATE_CMD */
extern "C" __attribute__((visibility("default"))) void* WMT_CLOCK_RATE_CMD = NULL;

/* Exported Object: WMT_CLOCK_RATE_EVT */
extern "C" __attribute__((visibility("default"))) void* WMT_CLOCK_RATE_EVT = NULL;

/* Exported Object: WMT_PATCH_DWN_USE_DMA_CMD */
extern "C" __attribute__((visibility("default"))) void* WMT_PATCH_DWN_USE_DMA_CMD = NULL;

/* Exported Object: WMT_PATCH_DWN_USE_DMA_EVT */
extern "C" __attribute__((visibility("default"))) void* WMT_PATCH_DWN_USE_DMA_EVT = NULL;

/* Exported Object: g_deep_sleep_flag */
extern "C" __attribute__((visibility("default"))) void* g_deep_sleep_flag = NULL;

/* Exported Object: __crc_mtk_wcn_wmt_psm_ctrl */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_wmt_psm_ctrl = NULL;

/* Exported Object: __crc_mtk_wcn_wmt_func_off */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_wmt_func_off = NULL;

/* Exported Object: __crc_mtk_wcn_wmt_func_on */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_wmt_func_on = NULL;

/* Exported Object: __crc_mtk_wcn_wmt_therm_ctrl */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_wmt_therm_ctrl = NULL;

/* Exported Object: __crc_mtk_wcn_wmt_hwver_get */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_wmt_hwver_get = NULL;

/* Exported Object: __crc_mtk_wcn_wmt_ic_info_get */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_wmt_ic_info_get = NULL;

/* Exported Object: __crc_mtk_wcn_wmt_dsns_ctrl */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_wmt_dsns_ctrl = NULL;

/* Exported Object: __crc_mtk_wcn_wmt_msgcb_reg */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_wmt_msgcb_reg = NULL;

/* Exported Object: __crc_mtk_wcn_wmt_msgcb_unreg */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_wmt_msgcb_unreg = NULL;

/* Exported Object: __crc_mtk_wcn_stp_wmt_sdio_op_reg */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_stp_wmt_sdio_op_reg = NULL;

/* Exported Object: __crc_mtk_wcn_stp_wmt_sdio_host_awake */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_stp_wmt_sdio_host_awake = NULL;

/* Exported Object: __crc_mtk_wcn_wmt_assert_timeout */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_wmt_assert_timeout = NULL;

/* Exported Object: __crc_mtk_wcn_wmt_assert */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_wmt_assert = NULL;

/* Exported Object: __crc_mtk_wcn_wmt_assert_keyword */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_wmt_assert_keyword = NULL;

/* Exported Object: __crc_mtk_wcn_wmt_flash_patch_ctrl */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_wmt_flash_patch_ctrl = NULL;

/* Exported Object: __crc_mtk_wcn_wmt_co_clock_flag_get */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_wmt_co_clock_flag_get = NULL;

/* Exported Object: __crc_mtk_wcn_wmt_wlan_reg */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_wmt_wlan_reg = NULL;

/* Exported Object: __crc_mtk_wcn_wmt_wlan_unreg */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_wmt_wlan_unreg = NULL;

/* Exported Object: __crc_mtk_wcn_set_connsys_power_off_flag */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_set_connsys_power_off_flag = NULL;

/* Exported Object: __crc_mtk_wcn_wmt_do_reset */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_wmt_do_reset = NULL;

/* Exported Object: __crc_mtk_wcn_wmt_do_reset_only */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_wmt_do_reset_only = NULL;

/* Exported Object: __crc_mtk_wcn_wmt_set_wifi_ver */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_wmt_set_wifi_ver = NULL;

/* Exported Object: __crc_mtk_wcn_wmt_wifi_fem_cfg_report */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_wmt_wifi_fem_cfg_report = NULL;

/* Exported Object: __crc_mtk_wcn_wmt_dump_wmtd_backtrace */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_wmt_dump_wmtd_backtrace = NULL;

/* Exported Object: __crc_mtk_wmt_get_gps_lna_pin_num */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wmt_get_gps_lna_pin_num = NULL;

/* Exported Object: __crc_mtk_wmt_set_ext_ldo */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wmt_set_ext_ldo = NULL;

/* Exported Object: __crc_mtk_wmt_gps_mcu_ctrl */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wmt_gps_mcu_ctrl = NULL;

/* Exported Object: __crc_mtk_wcn_wmt_set_mcif_mpu_protection */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_wmt_set_mcif_mpu_protection = NULL;

/* Exported Object: __crc_mtk_wmt_gps_suspend_ctrl */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wmt_gps_suspend_ctrl = NULL;

/* Exported Object: __crc_mtk_wmt_gps_l1_suspend_ctrl */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wmt_gps_l1_suspend_ctrl = NULL;

/* Exported Object: __crc_mtk_wmt_gps_l5_suspend_ctrl */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wmt_gps_l5_suspend_ctrl = NULL;

/* Exported Object: __crc_mtk_wcn_wmt_mpu_lock_aquire */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_wmt_mpu_lock_aquire = NULL;

/* Exported Object: __crc_mtk_wcn_wmt_mpu_lock_release */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_wmt_mpu_lock_release = NULL;

/* Demangled: mtk_wcn_wmt_psm_ctrl */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_wmt_psm_ctrl(void) {
    ALOGD("mtk_wcn_wmt_psm_ctrl() called");
    return 0;
}

/* Demangled: mtk_wcn_wmt_func_off */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_wmt_func_off(void) {
    ALOGD("mtk_wcn_wmt_func_off() called");
    return 0;
}

/* Demangled: mtk_wcn_wmt_func_on */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_wmt_func_on(void) {
    ALOGD("mtk_wcn_wmt_func_on() called");
    return 0;
}

/* Demangled: mtk_wcn_wmt_therm_ctrl */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_wmt_therm_ctrl(void) {
    ALOGD("mtk_wcn_wmt_therm_ctrl() called");
    return 0;
}

/* Demangled: mtk_wcn_wmt_hwver_get */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_wmt_hwver_get(void) {
    ALOGD("mtk_wcn_wmt_hwver_get() called");
    return 0;
}

/* Demangled: mtk_wcn_wmt_ic_info_get */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_wmt_ic_info_get(void) {
    ALOGD("mtk_wcn_wmt_ic_info_get() called");
    return 0;
}

/* Demangled: mtk_wcn_wmt_dsns_ctrl */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_wmt_dsns_ctrl(void) {
    ALOGD("mtk_wcn_wmt_dsns_ctrl() called");
    return 0;
}

/* Demangled: mtk_wcn_wmt_msgcb_reg */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_wmt_msgcb_reg(void) {
    ALOGD("mtk_wcn_wmt_msgcb_reg() called");
    return 0;
}

/* Demangled: mtk_wcn_wmt_msgcb_unreg */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_wmt_msgcb_unreg(void) {
    ALOGD("mtk_wcn_wmt_msgcb_unreg() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_wmt_sdio_op_reg */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_wmt_sdio_op_reg(void) {
    ALOGD("mtk_wcn_stp_wmt_sdio_op_reg() called");
    return 0;
}

/* Demangled: mtk_wcn_wmt_sdio_rw_cb_reg */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_wmt_sdio_rw_cb_reg(void) {
    ALOGD("mtk_wcn_wmt_sdio_rw_cb_reg() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_wmt_sdio_host_awake */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_wmt_sdio_host_awake(void) {
    ALOGD("mtk_wcn_stp_wmt_sdio_host_awake() called");
    return 0;
}

/* Demangled: mtk_wcn_wmt_assert_timeout */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_wmt_assert_timeout(void) {
    ALOGD("mtk_wcn_wmt_assert_timeout() called");
    return 0;
}

/* Demangled: mtk_wcn_wmt_assert */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_wmt_assert(void) {
    ALOGD("mtk_wcn_wmt_assert() called");
    return 0;
}

/* Demangled: mtk_wcn_wmt_assert_keyword */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_wmt_assert_keyword(void) {
    ALOGD("mtk_wcn_wmt_assert_keyword() called");
    return 0;
}

/* Demangled: mtk_wcn_wmt_flash_patch_ctrl */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_wmt_flash_patch_ctrl(void) {
    ALOGD("mtk_wcn_wmt_flash_patch_ctrl() called");
    return 0;
}

/* Demangled: mtk_wcn_wmt_co_clock_flag_get */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_wmt_co_clock_flag_get(void) {
    ALOGD("mtk_wcn_wmt_co_clock_flag_get() called");
    return 0;
}

/* Demangled: mtk_wcn_wmt_wlan_reg */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_wmt_wlan_reg(void) {
    ALOGD("mtk_wcn_wmt_wlan_reg() called");
    return 0;
}

/* Exported Object: mtk_wcn_wlan_bus_tx_cnt */
extern "C" __attribute__((visibility("default"))) void* mtk_wcn_wlan_bus_tx_cnt = NULL;

/* Exported Object: mtk_wcn_wlan_bus_tx_cnt_clr */
extern "C" __attribute__((visibility("default"))) void* mtk_wcn_wlan_bus_tx_cnt_clr = NULL;

/* Demangled: mtk_wcn_wmt_wlan_unreg */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_wmt_wlan_unreg(void) {
    ALOGD("mtk_wcn_wmt_wlan_unreg() called");
    return 0;
}

/* Demangled: mtk_wcn_wmt_do_reset */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_wmt_do_reset(void) {
    ALOGD("mtk_wcn_wmt_do_reset() called");
    return 0;
}

/* Demangled: mtk_wcn_wmt_do_reset_only */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_wmt_do_reset_only(void) {
    ALOGD("mtk_wcn_wmt_do_reset_only() called");
    return 0;
}

/* Demangled: mtk_wcn_wmt_set_wifi_ver */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_wmt_set_wifi_ver(void) {
    ALOGD("mtk_wcn_wmt_set_wifi_ver() called");
    return 0;
}

/* Demangled: mtk_wcn_wmt_wifi_fem_cfg_report */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_wmt_wifi_fem_cfg_report(void) {
    ALOGD("mtk_wcn_wmt_wifi_fem_cfg_report() called");
    return 0;
}

/* Demangled: mtk_wmt_set_ext_ldo */
extern "C" __attribute__((visibility("default"))) int mtk_wmt_set_ext_ldo(void) {
    ALOGD("mtk_wmt_set_ext_ldo() called");
    return 0;
}

/* Demangled: mtk_wmt_gps_mcu_ctrl */
extern "C" __attribute__((visibility("default"))) int mtk_wmt_gps_mcu_ctrl(void) {
    ALOGD("mtk_wmt_gps_mcu_ctrl() called");
    return 0;
}

/* Demangled: mtk_wcn_wmt_set_mcif_mpu_protection */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_wmt_set_mcif_mpu_protection(void) {
    ALOGD("mtk_wcn_wmt_set_mcif_mpu_protection() called");
    return 0;
}

/* Demangled: mtk_wmt_gps_suspend_ctrl */
extern "C" __attribute__((visibility("default"))) int mtk_wmt_gps_suspend_ctrl(void) {
    ALOGD("mtk_wmt_gps_suspend_ctrl() called");
    return 0;
}

/* Demangled: mtk_wmt_gps_l1_suspend_ctrl */
extern "C" __attribute__((visibility("default"))) int mtk_wmt_gps_l1_suspend_ctrl(void) {
    ALOGD("mtk_wmt_gps_l1_suspend_ctrl() called");
    return 0;
}

/* Demangled: mtk_wmt_gps_l5_suspend_ctrl */
extern "C" __attribute__((visibility("default"))) int mtk_wmt_gps_l5_suspend_ctrl(void) {
    ALOGD("mtk_wmt_gps_l5_suspend_ctrl() called");
    return 0;
}

/* Demangled: mtk_wcn_wmt_mpu_lock_aquire */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_wmt_mpu_lock_aquire(void) {
    ALOGD("mtk_wcn_wmt_mpu_lock_aquire() called");
    return 0;
}

/* Demangled: mtk_wcn_wmt_mpu_lock_release */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_wmt_mpu_lock_release(void) {
    ALOGD("mtk_wcn_wmt_mpu_lock_release() called");
    return 0;
}

/* Demangled: _stp_btm_get_free_op */
extern "C" __attribute__((visibility("default"))) int _stp_btm_get_free_op(void) {
    ALOGD("_stp_btm_get_free_op() called");
    return 0;
}

/* Exported Object: gBtmDbgLevel */
extern "C" __attribute__((visibility("default"))) void* gBtmDbgLevel = NULL;

/* Demangled: _stp_btm_put_act_op */
extern "C" __attribute__((visibility("default"))) int _stp_btm_put_act_op(void) {
    ALOGD("_stp_btm_put_act_op() called");
    return 0;
}

/* Demangled: stp_btm_notify_coredump_timeout_wq */
extern "C" __attribute__((visibility("default"))) int stp_btm_notify_coredump_timeout_wq(void) {
    ALOGD("stp_btm_notify_coredump_timeout_wq() called");
    return 0;
}

/* Demangled: stp_btm_notify_assert_timeout_wq */
extern "C" __attribute__((visibility("default"))) int stp_btm_notify_assert_timeout_wq(void) {
    ALOGD("stp_btm_notify_assert_timeout_wq() called");
    return 0;
}

/* Demangled: stp_notify_btm_poll_cpupcr_ctrl */
extern "C" __attribute__((visibility("default"))) int stp_notify_btm_poll_cpupcr_ctrl(void) {
    ALOGD("stp_notify_btm_poll_cpupcr_ctrl() called");
    return 0;
}

/* Demangled: stp_dbg_poll_cpupcr_ctrl */
extern "C" __attribute__((visibility("default"))) int stp_dbg_poll_cpupcr_ctrl(void) {
    ALOGD("stp_dbg_poll_cpupcr_ctrl() called");
    return 0;
}

/* Exported Object: stp_btm */
extern "C" __attribute__((visibility("default"))) void* stp_btm = NULL;

/* Demangled: stp_btm_init_trigger_assert_timer */
extern "C" __attribute__((visibility("default"))) int stp_btm_init_trigger_assert_timer(void) {
    ALOGD("stp_btm_init_trigger_assert_timer() called");
    return 0;
}

/* Exported Object: g_btm_op_name */
extern "C" __attribute__((visibility("default"))) void* g_btm_op_name = NULL;

/* Demangled: connsys_dedicated_log_flush_emi */
extern "C" __attribute__((visibility("default"))) int connsys_dedicated_log_flush_emi(void) {
    ALOGD("connsys_dedicated_log_flush_emi() called");
    return 0;
}

/* Demangled: stp_dbg_core_dump_flush */
extern "C" __attribute__((visibility("default"))) int stp_dbg_core_dump_flush(void) {
    ALOGD("stp_dbg_core_dump_flush() called");
    return 0;
}

/* Demangled: stp_dbg_core_dump */
extern "C" __attribute__((visibility("default"))) int stp_dbg_core_dump(void) {
    ALOGD("stp_dbg_core_dump() called");
    return 0;
}

/* Demangled: stp_dbg_set_coredump_timer_state */
extern "C" __attribute__((visibility("default"))) int stp_dbg_set_coredump_timer_state(void) {
    ALOGD("stp_dbg_set_coredump_timer_state() called");
    return 0;
}

/* Demangled: stp_dbg_nl_send_data */
extern "C" __attribute__((visibility("default"))) int stp_dbg_nl_send_data(void) {
    ALOGD("stp_dbg_nl_send_data() called");
    return 0;
}

/* Demangled: wmt_idc_msg_to_lte_handing */
extern "C" __attribute__((visibility("default"))) int wmt_idc_msg_to_lte_handing(void) {
    ALOGD("wmt_idc_msg_to_lte_handing() called");
    return 0;
}

/* Demangled: stp_dbg_stop_emi_dump */
extern "C" __attribute__((visibility("default"))) int stp_dbg_stop_emi_dump(void) {
    ALOGD("stp_dbg_stop_emi_dump() called");
    return 0;
}

/* Demangled: stp_dbg_is_btif_rxd_be_blocked */
extern "C" __attribute__((visibility("default"))) int stp_dbg_is_btif_rxd_be_blocked(void) {
    ALOGD("stp_dbg_is_btif_rxd_be_blocked() called");
    return 0;
}

/* Demangled: stp_btm_set_current_op */
extern "C" __attribute__((visibility("default"))) int stp_btm_set_current_op(void) {
    ALOGD("stp_btm_set_current_op() called");
    return 0;
}

/* Demangled: stp_btm_get_current_op */
extern "C" __attribute__((visibility("default"))) int stp_btm_get_current_op(void) {
    ALOGD("stp_btm_get_current_op() called");
    return 0;
}

/* Demangled: stp_btm_start_trigger_assert_timer */
extern "C" __attribute__((visibility("default"))) int stp_btm_start_trigger_assert_timer(void) {
    ALOGD("stp_btm_start_trigger_assert_timer() called");
    return 0;
}

/* Exported Object: stp_btm_i */
extern "C" __attribute__((visibility("default"))) void* stp_btm_i = NULL;

/* Exported Object: __crc_mtk_wcn_hif_sdio_update_cb_reg */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_hif_sdio_update_cb_reg = NULL;

/* Exported Object: __crc_mtk_wcn_hif_sdio_client_reg */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_hif_sdio_client_reg = NULL;

/* Exported Object: __crc_mtk_wcn_hif_sdio_client_unreg */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_hif_sdio_client_unreg = NULL;

/* Exported Object: __crc_mtk_wcn_hif_sdio_readb */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_hif_sdio_readb = NULL;

/* Exported Object: __crc_mtk_wcn_hif_sdio_writeb */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_hif_sdio_writeb = NULL;

/* Exported Object: __crc_mtk_wcn_hif_sdio_readl */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_hif_sdio_readl = NULL;

/* Exported Object: __crc_mtk_wcn_hif_sdio_writel */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_hif_sdio_writel = NULL;

/* Exported Object: __crc_mtk_wcn_hif_sdio_read_buf */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_hif_sdio_read_buf = NULL;

/* Exported Object: __crc_mtk_wcn_hif_sdio_write_buf */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_hif_sdio_write_buf = NULL;

/* Exported Object: __crc_mtk_wcn_hif_sdio_abort */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_hif_sdio_abort = NULL;

/* Exported Object: __crc_mtk_wcn_hif_sdio_set_drvdata */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_hif_sdio_set_drvdata = NULL;

/* Exported Object: __crc_mtk_wcn_hif_sdio_get_drvdata */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_hif_sdio_get_drvdata = NULL;

/* Exported Object: __crc_mtk_wcn_hif_sdio_wmt_control */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_hif_sdio_wmt_control = NULL;

/* Exported Object: __crc_mtk_wcn_hif_sdio_get_dev */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_hif_sdio_get_dev = NULL;

/* Exported Object: __crc_mtk_wcn_hif_sdio_bus_set_power */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_hif_sdio_bus_set_power = NULL;

/* Exported Object: __crc_mtk_wcn_hif_sdio_enable_irq */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_hif_sdio_enable_irq = NULL;

/* Exported Object: __crc_mtk_wcn_hif_sdio_drv_init */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_hif_sdio_drv_init = NULL;

/* Exported Object: __crc_mtk_wcn_hif_sdio_driver_exit */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_hif_sdio_driver_exit = NULL;

/* Demangled: mtk_wcn_hif_sdio_irq_flag_set */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_hif_sdio_irq_flag_set(void) {
    ALOGD("mtk_wcn_hif_sdio_irq_flag_set() called");
    return 0;
}

/* Demangled: mtk_wcn_hif_sdio_update_cb_reg */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_hif_sdio_update_cb_reg(void) {
    ALOGD("mtk_wcn_hif_sdio_update_cb_reg() called");
    return 0;
}

/* Demangled: hif_sdio_wake_up_ctrl */
extern "C" __attribute__((visibility("default"))) int hif_sdio_wake_up_ctrl(void) {
    ALOGD("hif_sdio_wake_up_ctrl() called");
    return 0;
}

/* Exported Object: g_hif_sdio_ds_info_list */
extern "C" __attribute__((visibility("default"))) void* g_hif_sdio_ds_info_list = NULL;

/* Exported Object: gHifSdioDbgLvl */
extern "C" __attribute__((visibility("default"))) void* gHifSdioDbgLvl = NULL;

/* Exported Object: g_hif_deep_sleep_flag */
extern "C" __attribute__((visibility("default"))) void* g_hif_deep_sleep_flag = NULL;

/* Demangled: osal_gettimeofday */
extern "C" __attribute__((visibility("default"))) int osal_gettimeofday(void) {
    ALOGD("osal_gettimeofday() called");
    return 0;
}

/* Demangled: mtk_wcn_hif_sdio_f0_readb */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_hif_sdio_f0_readb(void) {
    ALOGD("mtk_wcn_hif_sdio_f0_readb() called");
    return 0;
}

/* Demangled: mtk_wcn_hif_sdio_readl */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_hif_sdio_readl(void) {
    ALOGD("mtk_wcn_hif_sdio_readl() called");
    return 0;
}

/* Demangled: mtk_wcn_hif_sdio_client_reg */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_hif_sdio_client_reg(void) {
    ALOGD("mtk_wcn_hif_sdio_client_reg() called");
    return 0;
}

/* Demangled: mtk_wcn_hif_sdio_client_unreg */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_hif_sdio_client_unreg(void) {
    ALOGD("mtk_wcn_hif_sdio_client_unreg() called");
    return 0;
}

/* Demangled: mtk_wcn_hif_sdio_readb */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_hif_sdio_readb(void) {
    ALOGD("mtk_wcn_hif_sdio_readb() called");
    return 0;
}

/* Demangled: mtk_wcn_hif_sdio_writeb */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_hif_sdio_writeb(void) {
    ALOGD("mtk_wcn_hif_sdio_writeb() called");
    return 0;
}

/* Demangled: mtk_wcn_hif_sdio_writel */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_hif_sdio_writel(void) {
    ALOGD("mtk_wcn_hif_sdio_writel() called");
    return 0;
}

/* Demangled: mtk_wcn_hif_sdio_read_buf */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_hif_sdio_read_buf(void) {
    ALOGD("mtk_wcn_hif_sdio_read_buf() called");
    return 0;
}

/* Demangled: mtk_wcn_hif_sdio_write_buf */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_hif_sdio_write_buf(void) {
    ALOGD("mtk_wcn_hif_sdio_write_buf() called");
    return 0;
}

/* Demangled: mtk_wcn_hif_sdio_abort */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_hif_sdio_abort(void) {
    ALOGD("mtk_wcn_hif_sdio_abort() called");
    return 0;
}

/* Demangled: mtk_wcn_hif_sdio_set_drvdata */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_hif_sdio_set_drvdata(void) {
    ALOGD("mtk_wcn_hif_sdio_set_drvdata() called");
    return 0;
}

/* Demangled: mtk_wcn_hif_sdio_get_drvdata */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_hif_sdio_get_drvdata(void) {
    ALOGD("mtk_wcn_hif_sdio_get_drvdata() called");
    return 0;
}

/* Demangled: mtk_wcn_hif_sdio_get_dev */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_hif_sdio_get_dev(void) {
    ALOGD("mtk_wcn_hif_sdio_get_dev() called");
    return 0;
}

/* Demangled: mtk_wcn_hif_sdio_bus_set_power */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_hif_sdio_bus_set_power(void) {
    ALOGD("mtk_wcn_hif_sdio_bus_set_power() called");
    return 0;
}

/* Demangled: mtk_wcn_hif_sdio_enable_irq */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_hif_sdio_enable_irq(void) {
    ALOGD("mtk_wcn_hif_sdio_enable_irq() called");
    return 0;
}

/* Demangled: mtk_wcn_hif_sdio_f0_writeb */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_hif_sdio_f0_writeb(void) {
    ALOGD("mtk_wcn_hif_sdio_f0_writeb() called");
    return 0;
}

/* Demangled: mtk_wcn_hif_sdio_drv_init */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_hif_sdio_drv_init(void) {
    ALOGD("mtk_wcn_hif_sdio_drv_init() called");
    return 0;
}

/* Demangled: mtk_wcn_hif_sdio_driver_exit */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_hif_sdio_driver_exit(void) {
    ALOGD("mtk_wcn_hif_sdio_driver_exit() called");
    return 0;
}

/* Exported Object: __mod_sdio__mtk_sdio_id_tbl_device_table */
extern "C" __attribute__((visibility("default"))) void* __mod_sdio__mtk_sdio_id_tbl_device_table = NULL;

/* Demangled: stp_dbg_soc_core_dump */
extern "C" __attribute__((visibility("default"))) int stp_dbg_soc_core_dump(void) {
    ALOGD("stp_dbg_soc_core_dump() called");
    return 0;
}

/* Exported Object: g_paged_dump_len */
extern "C" __attribute__((visibility("default"))) void* g_paged_dump_len = NULL;

/* Exported Object: issue_type */
extern "C" __attribute__((visibility("default"))) void* issue_type = NULL;

/* Exported Object: g_paged_trace_len */
extern "C" __attribute__((visibility("default"))) void* g_paged_trace_len = NULL;

/* Exported Object: g_paged_trace_buffer */
extern "C" __attribute__((visibility("default"))) void* g_paged_trace_buffer = NULL;

/* Demangled: stp_dbg_start_coredump_timer */
extern "C" __attribute__((visibility("default"))) int stp_dbg_start_coredump_timer(void) {
    ALOGD("stp_dbg_start_coredump_timer() called");
    return 0;
}

/* Demangled: stp_dbg_get_coredump_timer_state */
extern "C" __attribute__((visibility("default"))) int stp_dbg_get_coredump_timer_state(void) {
    ALOGD("stp_dbg_get_coredump_timer_state() called");
    return 0;
}

/* Exported Object: g_paged_dump_buffer */
extern "C" __attribute__((visibility("default"))) void* g_paged_dump_buffer = NULL;

/* Demangled: stp_dbg_aee_send */
extern "C" __attribute__((visibility("default"))) int stp_dbg_aee_send(void) {
    ALOGD("stp_dbg_aee_send() called");
    return 0;
}

/* Demangled: stp_dbg_dump_send_retry_handler */
extern "C" __attribute__((visibility("default"))) int stp_dbg_dump_send_retry_handler(void) {
    ALOGD("stp_dbg_dump_send_retry_handler() called");
    return 0;
}

/* Demangled: stp_dbg_poll_dmaregs */
extern "C" __attribute__((visibility("default"))) int stp_dbg_poll_dmaregs(void) {
    ALOGD("stp_dbg_poll_dmaregs() called");
    return 0;
}

/* Demangled: stp_dbg_soc_id_to_task */
extern "C" __attribute__((visibility("default"))) int stp_dbg_soc_id_to_task(void) {
    ALOGD("stp_dbg_soc_id_to_task() called");
    return 0;
}

/* Exported Object: soc_gen_two_task_id_adapter */
extern "C" __attribute__((visibility("default"))) void* soc_gen_two_task_id_adapter = NULL;

/* Exported Object: soc_gen_three_task_id_adapter */
extern "C" __attribute__((visibility("default"))) void* soc_gen_three_task_id_adapter = NULL;

/* Demangled: stp_dbg_soc_read_debug_crs */
extern "C" __attribute__((visibility("default"))) int stp_dbg_soc_read_debug_crs(void) {
    ALOGD("stp_dbg_soc_read_debug_crs() called");
    return 0;
}

/* Demangled: stp_dbg_combo_core_dump */
extern "C" __attribute__((visibility("default"))) int stp_dbg_combo_core_dump(void) {
    ALOGD("stp_dbg_combo_core_dump() called");
    return 0;
}

/* Demangled: stp_dbg_dmp_out_ex */
extern "C" __attribute__((visibility("default"))) int stp_dbg_dmp_out_ex(void) {
    ALOGD("stp_dbg_dmp_out_ex() called");
    return 0;
}

/* Demangled: stp_dbg_combo_id_to_task */
extern "C" __attribute__((visibility("default"))) int stp_dbg_combo_id_to_task(void) {
    ALOGD("stp_dbg_combo_id_to_task() called");
    return 0;
}

/* Exported Object: combo_legacy_task_id_adapter */
extern "C" __attribute__((visibility("default"))) void* combo_legacy_task_id_adapter = NULL;

/* Demangled: osal_strcat */
extern "C" __attribute__((visibility("default"))) int osal_strcat(void) {
    ALOGD("osal_strcat() called");
    return 0;
}

/* Demangled: osal_strnstr */
extern "C" __attribute__((visibility("default"))) int osal_strnstr(void) {
    ALOGD("osal_strnstr() called");
    return 0;
}

/* Demangled: osal_dbg_assert */
extern "C" __attribute__((visibility("default"))) int osal_dbg_assert(void) {
    ALOGD("osal_dbg_assert() called");
    return 0;
}

/* Demangled: osal_wait_for_signal */
extern "C" __attribute__((visibility("default"))) int osal_wait_for_signal(void) {
    ALOGD("osal_wait_for_signal() called");
    return 0;
}

/* Demangled: osal_signal_active_state */
extern "C" __attribute__((visibility("default"))) int osal_signal_active_state(void) {
    ALOGD("osal_signal_active_state() called");
    return 0;
}

/* Demangled: osal_wait_for_event_bit_set */
extern "C" __attribute__((visibility("default"))) int osal_wait_for_event_bit_set(void) {
    ALOGD("osal_wait_for_event_bit_set() called");
    return 0;
}

/* Demangled: osal_wait_for_event_bit_clr */
extern "C" __attribute__((visibility("default"))) int osal_wait_for_event_bit_clr(void) {
    ALOGD("osal_wait_for_event_bit_clr() called");
    return 0;
}

/* Demangled: _osal_fifo_init */
extern "C" __attribute__((visibility("default"))) int _osal_fifo_init(void) {
    ALOGD("_osal_fifo_init() called");
    return 0;
}

/* Demangled: _osal_fifo_deinit */
extern "C" __attribute__((visibility("default"))) int _osal_fifo_deinit(void) {
    ALOGD("_osal_fifo_deinit() called");
    return 0;
}

/* Demangled: _osal_fifo_size */
extern "C" __attribute__((visibility("default"))) int _osal_fifo_size(void) {
    ALOGD("_osal_fifo_size() called");
    return 0;
}

/* Demangled: _osal_fifo_avail_size */
extern "C" __attribute__((visibility("default"))) int _osal_fifo_avail_size(void) {
    ALOGD("_osal_fifo_avail_size() called");
    return 0;
}

/* Demangled: _osal_fifo_len */
extern "C" __attribute__((visibility("default"))) int _osal_fifo_len(void) {
    ALOGD("_osal_fifo_len() called");
    return 0;
}

/* Demangled: _osal_fifo_is_empty */
extern "C" __attribute__((visibility("default"))) int _osal_fifo_is_empty(void) {
    ALOGD("_osal_fifo_is_empty() called");
    return 0;
}

/* Demangled: _osal_fifo_is_full */
extern "C" __attribute__((visibility("default"))) int _osal_fifo_is_full(void) {
    ALOGD("_osal_fifo_is_full() called");
    return 0;
}

/* Demangled: _osal_fifo_data_in */
extern "C" __attribute__((visibility("default"))) int _osal_fifo_data_in(void) {
    ALOGD("_osal_fifo_data_in() called");
    return 0;
}

/* Demangled: _osal_fifo_data_out */
extern "C" __attribute__((visibility("default"))) int _osal_fifo_data_out(void) {
    ALOGD("_osal_fifo_data_out() called");
    return 0;
}

/* Demangled: _osal_fifo_reset */
extern "C" __attribute__((visibility("default"))) int _osal_fifo_reset(void) {
    ALOGD("_osal_fifo_reset() called");
    return 0;
}

/* Demangled: osal_fifo_sz */
extern "C" __attribute__((visibility("default"))) int osal_fifo_sz(void) {
    ALOGD("osal_fifo_sz() called");
    return 0;
}

/* Demangled: osal_fifo_avail */
extern "C" __attribute__((visibility("default"))) int osal_fifo_avail(void) {
    ALOGD("osal_fifo_avail() called");
    return 0;
}

/* Demangled: osal_fifo_is_empty */
extern "C" __attribute__((visibility("default"))) int osal_fifo_is_empty(void) {
    ALOGD("osal_fifo_is_empty() called");
    return 0;
}

/* Demangled: osal_fifo_is_full */
extern "C" __attribute__((visibility("default"))) int osal_fifo_is_full(void) {
    ALOGD("osal_fifo_is_full() called");
    return 0;
}

/* Demangled: osal_trylock_unsleepable_lock */
extern "C" __attribute__((visibility("default"))) int osal_trylock_unsleepable_lock(void) {
    ALOGD("osal_trylock_unsleepable_lock() called");
    return 0;
}

/* Demangled: osal_udelay */
extern "C" __attribute__((visibility("default"))) int osal_udelay(void) {
    ALOGD("osal_udelay() called");
    return 0;
}

/* Exported Object: ftrace_flag */
extern "C" __attribute__((visibility("default"))) void* ftrace_flag = NULL;

/* Demangled: osal_set_op_result */
extern "C" __attribute__((visibility("default"))) int osal_set_op_result(void) {
    ALOGD("osal_set_op_result() called");
    return 0;
}

/* Demangled: osal_opq_has_op */
extern "C" __attribute__((visibility("default"))) int osal_opq_has_op(void) {
    ALOGD("osal_opq_has_op() called");
    return 0;
}

/* Demangled: ring_init */
extern "C" __attribute__((visibility("default"))) int ring_init(void) {
    ALOGD("ring_init() called");
    return 0;
}

/* Demangled: ring_read_prepare */
extern "C" __attribute__((visibility("default"))) int ring_read_prepare(void) {
    ALOGD("ring_read_prepare() called");
    return 0;
}

/* Demangled: _ring_segment_prepare_item */
extern "C" __attribute__((visibility("default"))) int _ring_segment_prepare_item(void) {
    ALOGD("_ring_segment_prepare_item() called");
    return 0;
}

/* Demangled: _ring_read_commit */
extern "C" __attribute__((visibility("default"))) int _ring_read_commit(void) {
    ALOGD("_ring_read_commit() called");
    return 0;
}

/* Demangled: ring_overwrite_prepare */
extern "C" __attribute__((visibility("default"))) int ring_overwrite_prepare(void) {
    ALOGD("ring_overwrite_prepare() called");
    return 0;
}

/* Demangled: _ring_segment_prepare */
extern "C" __attribute__((visibility("default"))) int _ring_segment_prepare(void) {
    ALOGD("_ring_segment_prepare() called");
    return 0;
}

/* Demangled: _ring_write_commit */
extern "C" __attribute__((visibility("default"))) int _ring_write_commit(void) {
    ALOGD("_ring_write_commit() called");
    return 0;
}

/* Exported Object: __crc_wmt_dev_patch_get */
extern "C" __attribute__((visibility("default"))) void* __crc_wmt_dev_patch_get = NULL;

/* Exported Object: __crc_mtk_wcn_common_drv_init */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_common_drv_init = NULL;

/* Exported Object: __crc_mtk_wcn_common_drv_exit */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_common_drv_exit = NULL;

/* Demangled: wmt_dev_apo_ctrl */
extern "C" __attribute__((visibility("default"))) int wmt_dev_apo_ctrl(void) {
    ALOGD("wmt_dev_apo_ctrl() called");
    return 0;
}

/* Exported Object: always_pwr_on_flag */
extern "C" __attribute__((visibility("default"))) void* always_pwr_on_flag = NULL;

/* Demangled: wmt_lpbk_handler */
extern "C" __attribute__((visibility("default"))) int wmt_lpbk_handler(void) {
    ALOGD("wmt_lpbk_handler() called");
    return 0;
}

/* Demangled: wmt_dev_blank_handler */
extern "C" __attribute__((visibility("default"))) int wmt_dev_blank_handler(void) {
    ALOGD("wmt_dev_blank_handler() called");
    return 0;
}

/* Exported Object: u4RxFlag */
extern "C" __attribute__((visibility("default"))) void* u4RxFlag = NULL;

/* Exported Object: gpRxEvent */
extern "C" __attribute__((visibility("default"))) void* gpRxEvent = NULL;

/* Demangled: wmt_dev_patch_info_free */
extern "C" __attribute__((visibility("default"))) int wmt_dev_patch_info_free(void) {
    ALOGD("wmt_dev_patch_info_free() called");
    return 0;
}

/* Exported Object: pPatchInfo */
extern "C" __attribute__((visibility("default"))) void* pPatchInfo = NULL;

/* Demangled: wmt_dev_is_file_exist */
extern "C" __attribute__((visibility("default"))) int wmt_dev_is_file_exist(void) {
    ALOGD("wmt_dev_is_file_exist() called");
    return 0;
}

/* Demangled: wmt_dev_tra_bitf_update */
extern "C" __attribute__((visibility("default"))) int wmt_dev_tra_bitf_update(void) {
    ALOGD("wmt_dev_tra_bitf_update() called");
    return 0;
}

/* Demangled: wmt_dev_tra_uart_update */
extern "C" __attribute__((visibility("default"))) int wmt_dev_tra_uart_update(void) {
    ALOGD("wmt_dev_tra_uart_update() called");
    return 0;
}

/* Demangled: wmt_dev_set_temp_threshold */
extern "C" __attribute__((visibility("default"))) int wmt_dev_set_temp_threshold(void) {
    ALOGD("wmt_dev_set_temp_threshold() called");
    return 0;
}

/* Demangled: WMT_write */
extern "C" __attribute__((visibility("default"))) int WMT_write(void) {
    ALOGD("WMT_write() called");
    return 0;
}

/* Demangled: WMT_read */
extern "C" __attribute__((visibility("default"))) int WMT_read(void) {
    ALOGD("WMT_read() called");
    return 0;
}

/* Demangled: WMT_poll */
extern "C" __attribute__((visibility("default"))) int WMT_poll(void) {
    ALOGD("WMT_poll() called");
    return 0;
}

/* Demangled: WMT_unlocked_ioctl */
extern "C" __attribute__((visibility("default"))) int WMT_unlocked_ioctl(void) {
    ALOGD("WMT_unlocked_ioctl() called");
    return 0;
}

/* Exported Object: hif_info */
extern "C" __attribute__((visibility("default"))) void* hif_info = NULL;

/* Exported Object: pAtchNum */
extern "C" __attribute__((visibility("default"))) void* pAtchNum = NULL;

/* Demangled: wmt_dbg_fwinfor_from_emi */
extern "C" __attribute__((visibility("default"))) int wmt_dbg_fwinfor_from_emi(void) {
    ALOGD("wmt_dbg_fwinfor_from_emi() called");
    return 0;
}

/* Demangled: WMT_compat_ioctl */
extern "C" __attribute__((visibility("default"))) int WMT_compat_ioctl(void) {
    ALOGD("WMT_compat_ioctl() called");
    return 0;
}

/* Exported Object: gWmtClose */
extern "C" __attribute__((visibility("default"))) void* gWmtClose = NULL;

/* Demangled: wmt_dev_bgw_desense_init */
extern "C" __attribute__((visibility("default"))) int wmt_dev_bgw_desense_init(void) {
    ALOGD("wmt_dev_bgw_desense_init() called");
    return 0;
}

/* Demangled: bgw_init_socket */
extern "C" __attribute__((visibility("default"))) int bgw_init_socket(void) {
    ALOGD("bgw_init_socket() called");
    return 0;
}

/* Demangled: wmt_dev_bgw_desense_deinit */
extern "C" __attribute__((visibility("default"))) int wmt_dev_bgw_desense_deinit(void) {
    ALOGD("wmt_dev_bgw_desense_deinit() called");
    return 0;
}

/* Demangled: bgw_destroy_netlink_kernel */
extern "C" __attribute__((visibility("default"))) int bgw_destroy_netlink_kernel(void) {
    ALOGD("bgw_destroy_netlink_kernel() called");
    return 0;
}

/* Demangled: send_command_to_daemon */
extern "C" __attribute__((visibility("default"))) int send_command_to_daemon(void) {
    ALOGD("send_command_to_daemon() called");
    return 0;
}

/* Exported Object: gWmtFops */
extern "C" __attribute__((visibility("default"))) void* gWmtFops = NULL;

/* Exported Object: wmt_class */
extern "C" __attribute__((visibility("default"))) void* wmt_class = NULL;

/* Exported Object: wmt_dev */
extern "C" __attribute__((visibility("default"))) void* wmt_dev = NULL;

/* Demangled: wmt_dev_user_proc_remove */
extern "C" __attribute__((visibility("default"))) int wmt_dev_user_proc_remove(void) {
    ALOGD("wmt_dev_user_proc_remove() called");
    return 0;
}

/* Demangled: wmt_dev_user_proc_setup */
extern "C" __attribute__((visibility("default"))) int wmt_dev_user_proc_setup(void) {
    ALOGD("wmt_dev_user_proc_setup() called");
    return 0;
}

/* Demangled: wmt_dev_proc_init */
extern "C" __attribute__((visibility("default"))) int wmt_dev_proc_init(void) {
    ALOGD("wmt_dev_proc_init() called");
    return 0;
}

/* Demangled: wmt_alarm_init */
extern "C" __attribute__((visibility("default"))) int wmt_alarm_init(void) {
    ALOGD("wmt_alarm_init() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_uart_drv_init */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_uart_drv_init(void) {
    ALOGD("mtk_wcn_stp_uart_drv_init() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_sdio_drv_init */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_sdio_drv_init(void) {
    ALOGD("mtk_wcn_stp_sdio_drv_init() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_uart_drv_exit */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_uart_drv_exit(void) {
    ALOGD("mtk_wcn_stp_uart_drv_exit() called");
    return 0;
}

/* Demangled: mtk_wcn_stp_sdio_drv_exit */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stp_sdio_drv_exit(void) {
    ALOGD("mtk_wcn_stp_sdio_drv_exit() called");
    return 0;
}

/* Demangled: wmt_dev_proc_deinit */
extern "C" __attribute__((visibility("default"))) int wmt_dev_proc_deinit(void) {
    ALOGD("wmt_dev_proc_deinit() called");
    return 0;
}

/* Demangled: wmt_alarm_deinit */
extern "C" __attribute__((visibility("default"))) int wmt_alarm_deinit(void) {
    ALOGD("wmt_alarm_deinit() called");
    return 0;
}

/* Demangled: connsys_log_blank_state_changed */
extern "C" __attribute__((visibility("default"))) int connsys_log_blank_state_changed(void) {
    ALOGD("connsys_log_blank_state_changed() called");
    return 0;
}

/* Exported Object: currentLpbkStatus */
extern "C" __attribute__((visibility("default"))) void* currentLpbkStatus = NULL;

/* Exported Object: __crc_mtk_wcn_stp_sdio_drv_init */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_stp_sdio_drv_init = NULL;

/* Exported Object: __crc_mtk_wcn_stp_sdio_drv_exit */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_stp_sdio_drv_exit = NULL;

/* Exported Object: gStpSdioDbgLvl */
extern "C" __attribute__((visibility("default"))) void* gStpSdioDbgLvl = NULL;

/* Exported Object: g_stp_sdio_host_count */
extern "C" __attribute__((visibility("default"))) void* g_stp_sdio_host_count = NULL;

/* Exported Object: g_stp_sdio_host_info */
extern "C" __attribute__((visibility("default"))) void* g_stp_sdio_host_info = NULL;

/* Exported Object: fake_coredump_lock */
extern "C" __attribute__((visibility("default"))) void* fake_coredump_lock = NULL;

/* Demangled: stp_sdio_rw_retry */
extern "C" __attribute__((visibility("default"))) int stp_sdio_rw_retry(void) {
    ALOGD("stp_sdio_rw_retry() called");
    return 0;
}

/* Demangled: stp_sdio_tx */
extern "C" __attribute__((visibility("default"))) int stp_sdio_tx(void) {
    ALOGD("stp_sdio_tx() called");
    return 0;
}

/* Demangled: stp_sdio_issue_fake_coredump */
extern "C" __attribute__((visibility("default"))) int stp_sdio_issue_fake_coredump(void) {
    ALOGD("stp_sdio_issue_fake_coredump() called");
    return 0;
}

/* Demangled: stp_sdio_own_ctrl */
extern "C" __attribute__((visibility("default"))) int stp_sdio_own_ctrl(void) {
    ALOGD("stp_sdio_own_ctrl() called");
    return 0;
}

/* Demangled: stp_sdio_rxdbg_setup */
extern "C" __attribute__((visibility("default"))) int stp_sdio_rxdbg_setup(void) {
    ALOGD("stp_sdio_rxdbg_setup() called");
    return 0;
}

/* Demangled: stp_sdio_rxdbg_remove */
extern "C" __attribute__((visibility("default"))) int stp_sdio_rxdbg_remove(void) {
    ALOGD("stp_sdio_rxdbg_remove() called");
    return 0;
}

/* Demangled: stp_sdio_dump_info */
extern "C" __attribute__((visibility("default"))) int stp_sdio_dump_info(void) {
    ALOGD("stp_sdio_dump_info() called");
    return 0;
}

/* Demangled: stp_sdio_txdbg_setup */
extern "C" __attribute__((visibility("default"))) int stp_sdio_txdbg_setup(void) {
    ALOGD("stp_sdio_txdbg_setup() called");
    return 0;
}

/* Demangled: stp_sdio_txdbg_remove */
extern "C" __attribute__((visibility("default"))) int stp_sdio_txdbg_remove(void) {
    ALOGD("stp_sdio_txdbg_remove() called");
    return 0;
}

/* Demangled: stp_sdio_owndbg_setup */
extern "C" __attribute__((visibility("default"))) int stp_sdio_owndbg_setup(void) {
    ALOGD("stp_sdio_owndbg_setup() called");
    return 0;
}

/* Demangled: stp_sdio_owndbg_remove */
extern "C" __attribute__((visibility("default"))) int stp_sdio_owndbg_remove(void) {
    ALOGD("stp_sdio_owndbg_remove() called");
    return 0;
}

/* Demangled: stp_sdio_reg_rw */
extern "C" __attribute__((visibility("default"))) int stp_sdio_reg_rw(void) {
    ALOGD("stp_sdio_reg_rw() called");
    return 0;
}

/* Exported Object: g_stp_sdio_cltinfo */
extern "C" __attribute__((visibility("default"))) void* g_stp_sdio_cltinfo = NULL;

/* Exported Object: gp_info */
extern "C" __attribute__((visibility("default"))) void* gp_info = NULL;

/* Exported Object: g_ownback_done */
extern "C" __attribute__((visibility("default"))) void* g_ownback_done = NULL;

/* Exported Object: is_wait_ownback */
extern "C" __attribute__((visibility("default"))) void* is_wait_ownback = NULL;

/* Exported Object: gWmtIdcInfo */
extern "C" __attribute__((visibility("default"))) void* gWmtIdcInfo = NULL;

/* Demangled: wmt_idc_msg_from_lte_handing */
extern "C" __attribute__((visibility("default"))) int wmt_idc_msg_from_lte_handing(void) {
    ALOGD("wmt_idc_msg_from_lte_handing() called");
    return 0;
}

/* Demangled: wmt_idc_dump_debug_msg */
extern "C" __attribute__((visibility("default"))) int wmt_idc_dump_debug_msg(void) {
    ALOGD("wmt_idc_dump_debug_msg() called");
    return 0;
}

/* Demangled: wmt_idc_msg_to_lte_handing_for_test */
extern "C" __attribute__((visibility("default"))) int wmt_idc_msg_to_lte_handing_for_test(void) {
    ALOGD("wmt_idc_msg_to_lte_handing_for_test() called");
    return 0;
}

/* Exported Object: __crc_mtk_wcn_stp_uart_drv_init */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_stp_uart_drv_init = NULL;

/* Exported Object: __crc_mtk_wcn_stp_uart_drv_exit */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_stp_uart_drv_exit = NULL;

/* Exported Object: g_stp_uart_rx_fifo */
extern "C" __attribute__((visibility("default"))) void* g_stp_uart_rx_fifo = NULL;

/* Exported Object: g_stp_uart_rx_fifo_tasklet */
extern "C" __attribute__((visibility("default"))) void* g_stp_uart_rx_fifo_tasklet = NULL;

/* Exported Object: g_rx_data */
extern "C" __attribute__((visibility("default"))) void* g_rx_data = NULL;

/* Exported Object: wr_idx */
extern "C" __attribute__((visibility("default"))) void* wr_idx = NULL;

/* Exported Object: rd_idx */
extern "C" __attribute__((visibility("default"))) void* rd_idx = NULL;

/* Exported Object: stp_tty */
extern "C" __attribute__((visibility("default"))) void* stp_tty = NULL;

/* Exported Object: tx_buf */
extern "C" __attribute__((visibility("default"))) void* tx_buf = NULL;

/* Exported Object: g_stp_uart_rx_fifo_spinlock */
extern "C" __attribute__((visibility("default"))) void* g_stp_uart_rx_fifo_spinlock = NULL;

/* Exported Object: buf_lock */
extern "C" __attribute__((visibility("default"))) void* buf_lock = NULL;

/* Exported Object: buf_emi */
extern "C" __attribute__((visibility("default"))) void* buf_emi = NULL;

/* Demangled: wmt_dev_dbg_setup */
extern "C" __attribute__((visibility("default"))) int wmt_dev_dbg_setup(void) {
    ALOGD("wmt_dev_dbg_setup() called");
    return 0;
}

/* Exported Object: gCoexBuf */
extern "C" __attribute__((visibility("default"))) void* gCoexBuf = NULL;

/* Demangled: wmt_dev_dbg_remove */
extern "C" __attribute__((visibility("default"))) int wmt_dev_dbg_remove(void) {
    ALOGD("wmt_dev_dbg_remove() called");
    return 0;
}

/* Demangled: wmt_step_print_version */
extern "C" __attribute__((visibility("default"))) int wmt_step_print_version(void) {
    ALOGD("wmt_step_print_version() called");
    return 0;
}

/* Demangled: wmt_step_deinit */
extern "C" __attribute__((visibility("default"))) int wmt_step_deinit(void) {
    ALOGD("wmt_step_deinit() called");
    return 0;
}

/* Demangled: wmt_step_init */
extern "C" __attribute__((visibility("default"))) int wmt_step_init(void) {
    ALOGD("wmt_step_init() called");
    return 0;
}

/* Demangled: connsys_dedicated_log_set_log_mode */
extern "C" __attribute__((visibility("default"))) int connsys_dedicated_log_set_log_mode(void) {
    ALOGD("connsys_dedicated_log_set_log_mode() called");
    return 0;
}

/* Demangled: connsys_dedicated_log_dump_emi */
extern "C" __attribute__((visibility("default"))) int connsys_dedicated_log_dump_emi(void) {
    ALOGD("connsys_dedicated_log_dump_emi() called");
    return 0;
}

/* Demangled: connsys_log_alarm_enable */
extern "C" __attribute__((visibility("default"))) int connsys_log_alarm_enable(void) {
    ALOGD("connsys_log_alarm_enable() called");
    return 0;
}

/* Demangled: connsys_log_alarm_disable */
extern "C" __attribute__((visibility("default"))) int connsys_log_alarm_disable(void) {
    ALOGD("connsys_log_alarm_disable() called");
    return 0;
}

/* Demangled: wmt_alarm_start */
extern "C" __attribute__((visibility("default"))) int wmt_alarm_start(void) {
    ALOGD("wmt_alarm_start() called");
    return 0;
}

/* Demangled: wmt_alarm_cancel */
extern "C" __attribute__((visibility("default"))) int wmt_alarm_cancel(void) {
    ALOGD("wmt_alarm_cancel() called");
    return 0;
}

/* Demangled: mtk_btif_rxd_be_blocked_flag_get */
extern "C" __attribute__((visibility("default"))) int mtk_btif_rxd_be_blocked_flag_get(void) {
    ALOGD("mtk_btif_rxd_be_blocked_flag_get() called");
    return 0;
}

/* Demangled: stp_dbg_core_dump_deinit_gcoredump */
extern "C" __attribute__((visibility("default"))) int stp_dbg_core_dump_deinit_gcoredump(void) {
    ALOGD("stp_dbg_core_dump_deinit_gcoredump() called");
    return 0;
}

/* Demangled: stp_dbg_set_fw_info */
extern "C" __attribute__((visibility("default"))) int stp_dbg_set_fw_info(void) {
    ALOGD("stp_dbg_set_fw_info() called");
    return 0;
}

/* Exported Object: g_stp_dbg */
extern "C" __attribute__((visibility("default"))) void* g_stp_dbg = NULL;

/* Exported Object: gStpDbgDumpType */
extern "C" __attribute__((visibility("default"))) void* gStpDbgDumpType = NULL;

/* Exported Object: gStpDbgLogOut */
extern "C" __attribute__((visibility("default"))) void* gStpDbgLogOut = NULL;

/* Demangled: stp_dbg_nl_send */
extern "C" __attribute__((visibility("default"))) int stp_dbg_nl_send(void) {
    ALOGD("stp_dbg_nl_send() called");
    return 0;
}

/* Demangled: stp_dbg_clear_cpupcr_reg_info */
extern "C" __attribute__((visibility("default"))) int stp_dbg_clear_cpupcr_reg_info(void) {
    ALOGD("stp_dbg_clear_cpupcr_reg_info() called");
    return 0;
}

/* Demangled: stp_dbg_get_host_trigger_assert */
extern "C" __attribute__((visibility("default"))) int stp_dbg_get_host_trigger_assert(void) {
    ALOGD("stp_dbg_get_host_trigger_assert() called");
    return 0;
}

/* Demangled: stp_dbg_id_to_task */
extern "C" __attribute__((visibility("default"))) int stp_dbg_id_to_task(void) {
    ALOGD("stp_dbg_id_to_task() called");
    return 0;
}

/* Demangled: wmt_dev_proc_for_dump_info_setup */
extern "C" __attribute__((visibility("default"))) int wmt_dev_proc_for_dump_info_setup(void) {
    ALOGD("wmt_dev_proc_for_dump_info_setup() called");
    return 0;
}

/* Demangled: wmt_dev_proc_for_dump_info_remove */
extern "C" __attribute__((visibility("default"))) int wmt_dev_proc_for_dump_info_remove(void) {
    ALOGD("wmt_dev_proc_for_dump_info_remove() called");
    return 0;
}

/* Demangled: wmt_dev_proc_for_aee_setup */
extern "C" __attribute__((visibility("default"))) int wmt_dev_proc_for_aee_setup(void) {
    ALOGD("wmt_dev_proc_for_aee_setup() called");
    return 0;
}

/* Demangled: wmt_dev_proc_for_aee_remove */
extern "C" __attribute__((visibility("default"))) int wmt_dev_proc_for_aee_remove(void) {
    ALOGD("wmt_dev_proc_for_aee_remove() called");
    return 0;
}

/* Exported Object: g_wmt_alarm */
extern "C" __attribute__((visibility("default"))) void* g_wmt_alarm = NULL;

/* Demangled: _wmt_alarm_cancel_nolock */
extern "C" __attribute__((visibility("default"))) int _wmt_alarm_cancel_nolock(void) {
    ALOGD("_wmt_alarm_cancel_nolock() called");
    return 0;
}

/* Exported Object: __crc_fw_log_wmt_init */
extern "C" __attribute__((visibility("default"))) void* __crc_fw_log_wmt_init = NULL;

/* Exported Object: __crc_fw_log_wmt_deinit */
extern "C" __attribute__((visibility("default"))) void* __crc_fw_log_wmt_deinit = NULL;

/* Demangled: connsys_log_read_to_user */
extern "C" __attribute__((visibility("default"))) int connsys_log_read_to_user(void) {
    ALOGD("connsys_log_read_to_user() called");
    return 0;
}

/* Demangled: connsys_log_get_buf_size */
extern "C" __attribute__((visibility("default"))) int connsys_log_get_buf_size(void) {
    ALOGD("connsys_log_get_buf_size() called");
    return 0;
}

/* Exported Object: gLogFops */
extern "C" __attribute__((visibility("default"))) void* gLogFops = NULL;

/* Demangled: connsys_log_init */
extern "C" __attribute__((visibility("default"))) int connsys_log_init(void) {
    ALOGD("connsys_log_init() called");
    return 0;
}

/* Demangled: connsys_log_register_event_cb */
extern "C" __attribute__((visibility("default"))) int connsys_log_register_event_cb(void) {
    ALOGD("connsys_log_register_event_cb() called");
    return 0;
}

/* Demangled: connsys_log_deinit */
extern "C" __attribute__((visibility("default"))) int connsys_log_deinit(void) {
    ALOGD("connsys_log_deinit() called");
    return 0;
}

/* Demangled: _wmt_step_do_register_action */
extern "C" __attribute__((visibility("default"))) int _wmt_step_do_register_action(void) {
    ALOGD("_wmt_step_do_register_action() called");
    return 0;
}

/* Exported Object: g_step_env */
extern "C" __attribute__((visibility("default"))) void* g_step_env = NULL;

/* Demangled: wmt_step_setup */
extern "C" __attribute__((visibility("default"))) int wmt_step_setup(void) {
    ALOGD("wmt_step_setup() called");
    return 0;
}

/* Demangled: wmt_step_do_emi_action */
extern "C" __attribute__((visibility("default"))) int wmt_step_do_emi_action(void) {
    ALOGD("wmt_step_do_emi_action() called");
    return 0;
}

/* Demangled: wmt_step_do_condition_emi_action */
extern "C" __attribute__((visibility("default"))) int wmt_step_do_condition_emi_action(void) {
    ALOGD("wmt_step_do_condition_emi_action() called");
    return 0;
}

/* Demangled: wmt_step_do_register_action */
extern "C" __attribute__((visibility("default"))) int wmt_step_do_register_action(void) {
    ALOGD("wmt_step_do_register_action() called");
    return 0;
}

/* Demangled: wmt_step_do_condition_register_action */
extern "C" __attribute__((visibility("default"))) int wmt_step_do_condition_register_action(void) {
    ALOGD("wmt_step_do_condition_register_action() called");
    return 0;
}

/* Demangled: wmt_step_do_gpio_action */
extern "C" __attribute__((visibility("default"))) int wmt_step_do_gpio_action(void) {
    ALOGD("wmt_step_do_gpio_action() called");
    return 0;
}

/* Demangled: wmt_step_do_disable_reset_action */
extern "C" __attribute__((visibility("default"))) int wmt_step_do_disable_reset_action(void) {
    ALOGD("wmt_step_do_disable_reset_action() called");
    return 0;
}

/* Demangled: wmt_step_do_chip_reset_action */
extern "C" __attribute__((visibility("default"))) int wmt_step_do_chip_reset_action(void) {
    ALOGD("wmt_step_do_chip_reset_action() called");
    return 0;
}

/* Demangled: wmt_step_do_keep_wakeup_action */
extern "C" __attribute__((visibility("default"))) int wmt_step_do_keep_wakeup_action(void) {
    ALOGD("wmt_step_do_keep_wakeup_action() called");
    return 0;
}

/* Demangled: wmt_step_do_cancel_wakeup_action */
extern "C" __attribute__((visibility("default"))) int wmt_step_do_cancel_wakeup_action(void) {
    ALOGD("wmt_step_do_cancel_wakeup_action() called");
    return 0;
}

/* Demangled: wmt_step_do_periodic_dump_action */
extern "C" __attribute__((visibility("default"))) int wmt_step_do_periodic_dump_action(void) {
    ALOGD("wmt_step_do_periodic_dump_action() called");
    return 0;
}

/* Demangled: wmt_step_do_show_string_action */
extern "C" __attribute__((visibility("default"))) int wmt_step_do_show_string_action(void) {
    ALOGD("wmt_step_do_show_string_action() called");
    return 0;
}

/* Demangled: wmt_step_do_sleep_action */
extern "C" __attribute__((visibility("default"))) int wmt_step_do_sleep_action(void) {
    ALOGD("wmt_step_do_sleep_action() called");
    return 0;
}

/* Demangled: wmt_step_do_condition_action */
extern "C" __attribute__((visibility("default"))) int wmt_step_do_condition_action(void) {
    ALOGD("wmt_step_do_condition_action() called");
    return 0;
}

/* Demangled: wmt_step_do_value_action */
extern "C" __attribute__((visibility("default"))) int wmt_step_do_value_action(void) {
    ALOGD("wmt_step_do_value_action() called");
    return 0;
}

/* Demangled: wmt_step_create_action */
extern "C" __attribute__((visibility("default"))) int wmt_step_create_action(void) {
    ALOGD("wmt_step_create_action() called");
    return 0;
}

/* Demangled: wmt_step_init_pd_env */
extern "C" __attribute__((visibility("default"))) int wmt_step_init_pd_env(void) {
    ALOGD("wmt_step_init_pd_env() called");
    return 0;
}

/* Demangled: wmt_step_deinit_pd_env */
extern "C" __attribute__((visibility("default"))) int wmt_step_deinit_pd_env(void) {
    ALOGD("wmt_step_deinit_pd_env() called");
    return 0;
}

/* Demangled: wmt_step_get_periodic_dump_entry */
extern "C" __attribute__((visibility("default"))) int wmt_step_get_periodic_dump_entry(void) {
    ALOGD("wmt_step_get_periodic_dump_entry() called");
    return 0;
}

/* Demangled: wmt_step_parse_data */
extern "C" __attribute__((visibility("default"))) int wmt_step_parse_data(void) {
    ALOGD("wmt_step_parse_data() called");
    return 0;
}

/* Demangled: wmt_step_read_file */
extern "C" __attribute__((visibility("default"))) int wmt_step_read_file(void) {
    ALOGD("wmt_step_read_file() called");
    return 0;
}

/* Demangled: wmt_step_remove_action */
extern "C" __attribute__((visibility("default"))) int wmt_step_remove_action(void) {
    ALOGD("wmt_step_remove_action() called");
    return 0;
}

/* Demangled: wmt_step_do_actions */
extern "C" __attribute__((visibility("default"))) int wmt_step_do_actions(void) {
    ALOGD("wmt_step_do_actions() called");
    return 0;
}

/* Demangled: wmt_step_func_crtl_do_actions */
extern "C" __attribute__((visibility("default"))) int wmt_step_func_crtl_do_actions(void) {
    ALOGD("wmt_step_func_crtl_do_actions() called");
    return 0;
}

/* Demangled: wmt_step_command_timeout_do_actions */
extern "C" __attribute__((visibility("default"))) int wmt_step_command_timeout_do_actions(void) {
    ALOGD("wmt_step_command_timeout_do_actions() called");
    return 0;
}

/* Exported Object: g_stp_btif */
extern "C" __attribute__((visibility("default"))) void* g_stp_btif = NULL;

/* Demangled: mtk_wcn_consys_stp_btif_rx_has_pending_data */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_stp_btif_rx_has_pending_data(void) {
    ALOGD("mtk_wcn_consys_stp_btif_rx_has_pending_data() called");
    return 0;
}

/* Demangled: mtk_wcn_consys_stp_btif_tx_has_pending_data */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_stp_btif_tx_has_pending_data(void) {
    ALOGD("mtk_wcn_consys_stp_btif_tx_has_pending_data() called");
    return 0;
}

/* Demangled: mtk_wcn_consys_stp_btif_rx_thread_get */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_stp_btif_rx_thread_get(void) {
    ALOGD("mtk_wcn_consys_stp_btif_rx_thread_get() called");
    return 0;
}

/* Demangled: mtk_wcn_consys_stp_btif_rx */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_consys_stp_btif_rx(void) {
    ALOGD("mtk_wcn_consys_stp_btif_rx() called");
    return 0;
}

/* Demangled: ring_dump */
extern "C" __attribute__((visibility("default"))) int ring_dump(void) {
    ALOGD("ring_dump() called");
    return 0;
}

/* Demangled: ring_dump_segment */
extern "C" __attribute__((visibility("default"))) int ring_dump_segment(void) {
    ALOGD("ring_dump_segment() called");
    return 0;
}

/* Demangled: ring_write_prepare */
extern "C" __attribute__((visibility("default"))) int ring_write_prepare(void) {
    ALOGD("ring_write_prepare() called");
    return 0;
}

/* Demangled: __ring_segment_prepare */
extern "C" __attribute__((visibility("default"))) int __ring_segment_prepare(void) {
    ALOGD("__ring_segment_prepare() called");
    return 0;
}

/* Demangled: ring_emi_init */
extern "C" __attribute__((visibility("default"))) int ring_emi_init(void) {
    ALOGD("ring_emi_init() called");
    return 0;
}

/* Demangled: ring_emi_dump */
extern "C" __attribute__((visibility("default"))) int ring_emi_dump(void) {
    ALOGD("ring_emi_dump() called");
    return 0;
}

/* Demangled: ring_emi_dump_segment */
extern "C" __attribute__((visibility("default"))) int ring_emi_dump_segment(void) {
    ALOGD("ring_emi_dump_segment() called");
    return 0;
}

/* Demangled: ring_emi_read_prepare */
extern "C" __attribute__((visibility("default"))) int ring_emi_read_prepare(void) {
    ALOGD("ring_emi_read_prepare() called");
    return 0;
}

/* Demangled: ring_emi_write_prepare */
extern "C" __attribute__((visibility("default"))) int ring_emi_write_prepare(void) {
    ALOGD("ring_emi_write_prepare() called");
    return 0;
}

/* Demangled: _ring_emi_segment_prepare */
extern "C" __attribute__((visibility("default"))) int _ring_emi_segment_prepare(void) {
    ALOGD("_ring_emi_segment_prepare() called");
    return 0;
}

/* Demangled: _ring_emi_read_commit */
extern "C" __attribute__((visibility("default"))) int _ring_emi_read_commit(void) {
    ALOGD("_ring_emi_read_commit() called");
    return 0;
}

/* Demangled: _ring_emi_write_commit */
extern "C" __attribute__((visibility("default"))) int _ring_emi_write_commit(void) {
    ALOGD("_ring_emi_write_commit() called");
    return 0;
}

/* Exported Object: __crc_connsys_log_alarm_enable */
extern "C" __attribute__((visibility("default"))) void* __crc_connsys_log_alarm_enable = NULL;

/* Exported Object: __crc_connsys_log_alarm_disable */
extern "C" __attribute__((visibility("default"))) void* __crc_connsys_log_alarm_disable = NULL;

/* Exported Object: __crc_connsys_log_blank_state_changed */
extern "C" __attribute__((visibility("default"))) void* __crc_connsys_log_blank_state_changed = NULL;

/* Exported Object: __crc_connsys_dedicated_log_path_apsoc_init */
extern "C" __attribute__((visibility("default"))) void* __crc_connsys_dedicated_log_path_apsoc_init = NULL;

/* Exported Object: __crc_connsys_dedicated_log_path_apsoc_deinit */
extern "C" __attribute__((visibility("default"))) void* __crc_connsys_dedicated_log_path_apsoc_deinit = NULL;

/* Exported Object: __crc_connsys_log_init */
extern "C" __attribute__((visibility("default"))) void* __crc_connsys_log_init = NULL;

/* Exported Object: __crc_connsys_log_deinit */
extern "C" __attribute__((visibility("default"))) void* __crc_connsys_log_deinit = NULL;

/* Exported Object: __crc_connsys_log_get_buf_size */
extern "C" __attribute__((visibility("default"))) void* __crc_connsys_log_get_buf_size = NULL;

/* Exported Object: __crc_connsys_log_register_event_cb */
extern "C" __attribute__((visibility("default"))) void* __crc_connsys_log_register_event_cb = NULL;

/* Exported Object: __crc_connsys_log_read */
extern "C" __attribute__((visibility("default"))) void* __crc_connsys_log_read = NULL;

/* Exported Object: __crc_connsys_log_read_to_user */
extern "C" __attribute__((visibility("default"))) void* __crc_connsys_log_read_to_user = NULL;

/* Exported Object: __crc_connsys_log_get_emi_log_base_vir_addr */
extern "C" __attribute__((visibility("default"))) void* __crc_connsys_log_get_emi_log_base_vir_addr = NULL;

/* Exported Object: __crc_connsys_dedicated_log_get_utc_time */
extern "C" __attribute__((visibility("default"))) void* __crc_connsys_dedicated_log_get_utc_time = NULL;

/* Demangled: connlog_cache_allocate */
extern "C" __attribute__((visibility("default"))) int connlog_cache_allocate(void) {
    ALOGD("connlog_cache_allocate() called");
    return 0;
}

/* Demangled: connsys_log_read */
extern "C" __attribute__((visibility("default"))) int connsys_log_read(void) {
    ALOGD("connsys_log_read() called");
    return 0;
}

/* Demangled: connsys_log_get_emi_log_base_vir_addr */
extern "C" __attribute__((visibility("default"))) int connsys_log_get_emi_log_base_vir_addr(void) {
    ALOGD("connsys_log_get_emi_log_base_vir_addr() called");
    return 0;
}

/* Demangled: connsys_dedicated_log_get_log_mode */
extern "C" __attribute__((visibility("default"))) int connsys_dedicated_log_get_log_mode(void) {
    ALOGD("connsys_dedicated_log_get_log_mode() called");
    return 0;
}

/* Exported Object: log_head */
extern "C" __attribute__((visibility("default"))) void* log_head = NULL;

/* Exported Object: timesync_head */
extern "C" __attribute__((visibility("default"))) void* timesync_head = NULL;

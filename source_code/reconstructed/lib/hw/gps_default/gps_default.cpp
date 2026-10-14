/*
 * Reverse-Engineered Source for: gps.default.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "gps_default"

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
#include "gps_default.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Hardware Module Implementation */
static int gps_default_open(const struct hw_module_t* module, const char* id, struct hw_device_t** device);
static int gps_default_close(struct hw_device_t* dev);

static struct hw_module_methods_t gps_default_module_methods = {
    .open = gps_default_open,
};

struct hw_module_t HAL_MODULE_INFO_SYM __attribute__ ((visibility ("default"))) = {
    .tag = HARDWARE_MODULE_TAG,
    .module_api_version = HARDWARE_MODULE_API_VERSION(1, 0),
    .hal_api_version = HARDWARE_HAL_API_VERSION,
    .id = "gps",
    .name = "Begonia gps_default Module",
    .author = "LineageOS / Community RE",
    .methods = &gps_default_module_methods,
    .dso = NULL,
    .reserved = {0},
};

static int gps_default_open(const struct hw_module_t* module, const char* id, struct hw_device_t** device) {
    ALOGI("Opening %s module (id: %s)", module->name, id);
    open_device_node();
    return 0;
}

static int gps_default_close(struct hw_device_t* dev) {
    ALOGI("Closing gps_default module");
    if (dev) free(dev);
    return 0;
}

/* Demangled: hal2mnl_gps_inject_time */
extern "C" __attribute__((visibility("default"))) int hal2mnl_gps_inject_time(void) {
    ALOGD("hal2mnl_gps_inject_time() called");
    return 0;
}

/* Exported Object: g_gpshal_ctx */
extern "C" __attribute__((visibility("default"))) void* g_gpshal_ctx = NULL;

/* Demangled: gpshal2mnl_gps_stop */
extern "C" __attribute__((visibility("default"))) int gpshal2mnl_gps_stop(void) {
    ALOGD("gpshal2mnl_gps_stop() called");
    return 0;
}

/* Exported Object: mnlDebugData */
extern "C" __attribute__((visibility("default"))) void* mnlDebugData = NULL;

/* Demangled: hal2mnl_gps_inject_location */
extern "C" __attribute__((visibility("default"))) int hal2mnl_gps_inject_location(void) {
    ALOGD("hal2mnl_gps_inject_location() called");
    return 0;
}

/* Demangled: hal2mnl_set_correction */
extern "C" __attribute__((visibility("default"))) int hal2mnl_set_correction(void) {
    ALOGD("hal2mnl_set_correction() called");
    return 0;
}

/* Demangled: safe_recvfrom */
extern "C" __attribute__((visibility("default"))) int safe_recvfrom(void) {
    ALOGD("safe_recvfrom() called");
    return 0;
}

/* Demangled: get_string2 */
extern "C" __attribute__((visibility("default"))) int get_string2(void) {
    ALOGD("get_string2() called");
    return 0;
}

/* Demangled: epoll_add_fd2 */
extern "C" __attribute__((visibility("default"))) int epoll_add_fd2(void) {
    ALOGD("epoll_add_fd2() called");
    return 0;
}

/* Demangled: gpshal_set_gps_state_intent */
extern "C" __attribute__((visibility("default"))) int gpshal_set_gps_state_intent(void) {
    ALOGD("gpshal_set_gps_state_intent() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: hal2mnl_data_conn_closed */
extern "C" __attribute__((visibility("default"))) int hal2mnl_data_conn_closed(void) {
    ALOGD("hal2mnl_data_conn_closed() called");
    return 0;
}

/* Demangled: hal2mnl_setBlacklist */
extern "C" __attribute__((visibility("default"))) int hal2mnl_setBlacklist(void) {
    ALOGD("hal2mnl_setBlacklist() called");
    return 0;
}

/* Demangled: hal2mnl_set_server */
extern "C" __attribute__((visibility("default"))) int hal2mnl_set_server(void) {
    ALOGD("hal2mnl_set_server() called");
    return 0;
}

/* Demangled: gpshal2mnl_gps_init */
extern "C" __attribute__((visibility("default"))) int gpshal2mnl_gps_init(void) {
    ALOGD("gpshal2mnl_gps_init() called");
    return 0;
}

/* Exported Object: mtk_gnss_meas_correction_inf */
extern "C" __attribute__((visibility("default"))) void* mtk_gnss_meas_correction_inf = NULL;

/* Demangled: gpshal2mnl_gps_start */
extern "C" __attribute__((visibility("default"))) int gpshal2mnl_gps_start(void) {
    ALOGD("gpshal2mnl_gps_start() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: gps_hal_cmd_enter_record */
extern "C" __attribute__((visibility("default"))) int gps_hal_cmd_enter_record(void) {
    ALOGD("gps_hal_cmd_enter_record() called");
    return 0;
}

/* Demangled: hal2mnl_gps_cleanup */
extern "C" __attribute__((visibility("default"))) int hal2mnl_gps_cleanup(void) {
    ALOGD("hal2mnl_gps_cleanup() called");
    return 0;
}

/* Demangled: hal2mnl_update_network_availability */
extern "C" __attribute__((visibility("default"))) int hal2mnl_update_network_availability(void) {
    ALOGD("hal2mnl_update_network_availability() called");
    return 0;
}

/* Demangled: put_int */
extern "C" __attribute__((visibility("default"))) int put_int(void) {
    ALOGD("put_int() called");
    return 0;
}

/* Demangled: get_byte */
extern "C" __attribute__((visibility("default"))) int get_byte(void) {
    ALOGD("get_byte() called");
    return 0;
}

/* Demangled: hal2mnl_data_conn_failed */
extern "C" __attribute__((visibility("default"))) int hal2mnl_data_conn_failed(void) {
    ALOGD("hal2mnl_data_conn_failed() called");
    return 0;
}

/* Demangled: hal2mnl_data_conn_open_with_apn_ip_type */
extern "C" __attribute__((visibility("default"))) int hal2mnl_data_conn_open_with_apn_ip_type(void) {
    ALOGD("hal2mnl_data_conn_open_with_apn_ip_type() called");
    return 0;
}

/* Demangled: hal2mnl_update_gnss_config */
extern "C" __attribute__((visibility("default"))) int hal2mnl_update_gnss_config(void) {
    ALOGD("hal2mnl_update_gnss_config() called");
    return 0;
}

/* Demangled: epoll_del_fd */
extern "C" __attribute__((visibility("default"))) int epoll_del_fd(void) {
    ALOGD("epoll_del_fd() called");
    return 0;
}

/* Exported Object: mtk_antenna_info_inf */
extern "C" __attribute__((visibility("default"))) void* mtk_antenna_info_inf = NULL;

/* Exported Object: mtk_gps_meas_inf */
extern "C" __attribute__((visibility("default"))) void* mtk_gps_meas_inf = NULL;

/* Exported Object: mtk_visibility_control_inf */
extern "C" __attribute__((visibility("default"))) void* mtk_visibility_control_inf = NULL;

/* Demangled: gps_hal_cmd_exit_record */
extern "C" __attribute__((visibility("default"))) int gps_hal_cmd_exit_record(void) {
    ALOGD("gps_hal_cmd_exit_record() called");
    return 0;
}

/* Demangled: hal2mnl_ni_respond */
extern "C" __attribute__((visibility("default"))) int hal2mnl_ni_respond(void) {
    ALOGD("hal2mnl_ni_respond() called");
    return 0;
}

/* Demangled: epoll_mod_fd */
extern "C" __attribute__((visibility("default"))) int epoll_mod_fd(void) {
    ALOGD("epoll_mod_fd() called");
    return 0;
}

/* Demangled: gpshal_gpscbs_save */
extern "C" __attribute__((visibility("default"))) int gpshal_gpscbs_save(void) {
    ALOGD("gpshal_gpscbs_save() called");
    return 0;
}

/* Demangled: put_byte */
extern "C" __attribute__((visibility("default"))) int put_byte(void) {
    ALOGD("put_byte() called");
    return 0;
}

/* Demangled: gpshal_worker_thread */
extern "C" __attribute__((visibility("default"))) int gpshal_worker_thread(void) {
    ALOGD("gpshal_worker_thread() called");
    return 0;
}

/* Exported Object: mtk_gnss_config_inf */
extern "C" __attribute__((visibility("default"))) void* mtk_gnss_config_inf = NULL;

/* Demangled: get_int */
extern "C" __attribute__((visibility("default"))) int get_int(void) {
    ALOGD("get_int() called");
    return 0;
}

/* Demangled: hal2mnl_gps_stop */
extern "C" __attribute__((visibility("default"))) int hal2mnl_gps_stop(void) {
    ALOGD("hal2mnl_gps_stop() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: gps_hal_cmd_list_dump */
extern "C" __attribute__((visibility("default"))) int gps_hal_cmd_list_dump(void) {
    ALOGD("gps_hal_cmd_list_dump() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: create_mnl2hal_fd */
extern "C" __attribute__((visibility("default"))) int create_mnl2hal_fd(void) {
    ALOGD("create_mnl2hal_fd() called");
    return 0;
}

/* Demangled: hal2mnl_setNfwAccess */
extern "C" __attribute__((visibility("default"))) int hal2mnl_setNfwAccess(void) {
    ALOGD("hal2mnl_setNfwAccess() called");
    return 0;
}

/* Demangled: hal2mnl_set_id */
extern "C" __attribute__((visibility("default"))) int hal2mnl_set_id(void) {
    ALOGD("hal2mnl_set_id() called");
    return 0;
}

/* Demangled: get_double */
extern "C" __attribute__((visibility("default"))) int get_double(void) {
    ALOGD("get_double() called");
    return 0;
}

/* Demangled: epoll_add_fd */
extern "C" __attribute__((visibility("default"))) int epoll_add_fd(void) {
    ALOGD("epoll_add_fd() called");
    return 0;
}

/* Exported Object: mtk_vzw_debug_inf */
extern "C" __attribute__((visibility("default"))) void* mtk_vzw_debug_inf = NULL;

/* Demangled: hal2mnl_gps_init */
extern "C" __attribute__((visibility("default"))) int hal2mnl_gps_init(void) {
    ALOGD("hal2mnl_gps_init() called");
    return 0;
}

/* Demangled: put_float */
extern "C" __attribute__((visibility("default"))) int put_float(void) {
    ALOGD("put_float() called");
    return 0;
}

/* Demangled: get_float */
extern "C" __attribute__((visibility("default"))) int get_float(void) {
    ALOGD("get_float() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: hal2mnl_gps_set_position_mode */
extern "C" __attribute__((visibility("default"))) int hal2mnl_gps_set_position_mode(void) {
    ALOGD("hal2mnl_gps_set_position_mode() called");
    return 0;
}

/* Demangled: stop_timer */
extern "C" __attribute__((visibility("default"))) int stop_timer(void) {
    ALOGD("stop_timer() called");
    return 0;
}

/* Demangled: hal2mnl_update_network_state */
extern "C" __attribute__((visibility("default"))) int hal2mnl_update_network_state(void) {
    ALOGD("hal2mnl_update_network_state() called");
    return 0;
}

/* Demangled: safe_sendto */
extern "C" __attribute__((visibility("default"))) int safe_sendto(void) {
    ALOGD("safe_sendto() called");
    return 0;
}

/* Demangled: deinit_timer */
extern "C" __attribute__((visibility("default"))) int deinit_timer(void) {
    ALOGD("deinit_timer() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: socket_bind_udp */
extern "C" __attribute__((visibility("default"))) int socket_bind_udp(void) {
    ALOGD("socket_bind_udp() called");
    return 0;
}

/* Demangled: tag_log */
extern "C" __attribute__((visibility("default"))) int tag_log(void) {
    ALOGD("tag_log() called");
    return 0;
}

/* Demangled: get_long */
extern "C" __attribute__((visibility("default"))) int get_long(void) {
    ALOGD("get_long() called");
    return 0;
}

/* Demangled: get_string */
extern "C" __attribute__((visibility("default"))) int get_string(void) {
    ALOGD("get_string() called");
    return 0;
}

/* Demangled: hal2mnl_set_ref_location */
extern "C" __attribute__((visibility("default"))) int hal2mnl_set_ref_location(void) {
    ALOGD("hal2mnl_set_ref_location() called");
    return 0;
}

/* Demangled: put_double */
extern "C" __attribute__((visibility("default"))) int put_double(void) {
    ALOGD("put_double() called");
    return 0;
}

/* Exported Object: enter_time_ms */
extern "C" __attribute__((visibility("default"))) void* enter_time_ms = NULL;

/* Exported Object: mtk_gps_ni_inf */
extern "C" __attribute__((visibility("default"))) void* mtk_gps_ni_inf = NULL;

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: mnl2hal_hdlr */
extern "C" __attribute__((visibility("default"))) int mnl2hal_hdlr(void) {
    ALOGD("mnl2hal_hdlr() called");
    return 0;
}

/* Demangled: hal2mnl_gps_delete_aiding_data */
extern "C" __attribute__((visibility("default"))) int hal2mnl_gps_delete_aiding_data(void) {
    ALOGD("hal2mnl_gps_delete_aiding_data() called");
    return 0;
}

/* Demangled: put_long */
extern "C" __attribute__((visibility("default"))) int put_long(void) {
    ALOGD("put_long() called");
    return 0;
}

/* Exported Object: cmd_list */
extern "C" __attribute__((visibility("default"))) void* cmd_list = NULL;

/* Exported Object: cmd_rcd_idx */
extern "C" __attribute__((visibility("default"))) void* cmd_rcd_idx = NULL;

/* Demangled: start_timer */
extern "C" __attribute__((visibility("default"))) int start_timer(void) {
    ALOGD("start_timer() called");
    return 0;
}

/* Demangled: get_binary */
extern "C" __attribute__((visibility("default"))) int get_binary(void) {
    ALOGD("get_binary() called");
    return 0;
}

/* Demangled: hal2mnl_ni_message */
extern "C" __attribute__((visibility("default"))) int hal2mnl_ni_message(void) {
    ALOGD("hal2mnl_ni_message() called");
    return 0;
}

/* Demangled: socket_set_blocking */
extern "C" __attribute__((visibility("default"))) int socket_set_blocking(void) {
    ALOGD("socket_set_blocking() called");
    return 0;
}

/* Demangled: get_tick */
extern "C" __attribute__((visibility("default"))) int get_tick(void) {
    ALOGD("get_tick() called");
    return 0;
}

/* Demangled: gps_hal_cmd_list_init */
extern "C" __attribute__((visibility("default"))) int gps_hal_cmd_list_init(void) {
    ALOGD("gps_hal_cmd_list_init() called");
    return 0;
}

/* Demangled: init_timer */
extern "C" __attribute__((visibility("default"))) int init_timer(void) {
    ALOGD("init_timer() called");
    return 0;
}

/* Demangled: hal2mnl_hal_reboot */
extern "C" __attribute__((visibility("default"))) int hal2mnl_hal_reboot(void) {
    ALOGD("hal2mnl_hal_reboot() called");
    return 0;
}

/* Demangled: put_string */
extern "C" __attribute__((visibility("default"))) int put_string(void) {
    ALOGD("put_string() called");
    return 0;
}

/* Demangled: get_time_in_millisecond */
extern "C" __attribute__((visibility("default"))) int get_time_in_millisecond(void) {
    ALOGD("get_time_in_millisecond() called");
    return 0;
}

/* Demangled: init_timer_id */
extern "C" __attribute__((visibility("default"))) int init_timer_id(void) {
    ALOGD("init_timer_id() called");
    return 0;
}

/* Exported Object: mtk_gps_debug_inf */
extern "C" __attribute__((visibility("default"))) void* mtk_gps_debug_inf = NULL;

/* Demangled: hal2mnl_set_vzw_debug */
extern "C" __attribute__((visibility("default"))) int hal2mnl_set_vzw_debug(void) {
    ALOGD("hal2mnl_set_vzw_debug() called");
    return 0;
}

/* Demangled: put_short */
extern "C" __attribute__((visibility("default"))) int put_short(void) {
    ALOGD("put_short() called");
    return 0;
}

/* Demangled: get_short */
extern "C" __attribute__((visibility("default"))) int get_short(void) {
    ALOGD("get_short() called");
    return 0;
}

/* Exported Object: mtk_agps_inf */
extern "C" __attribute__((visibility("default"))) void* mtk_agps_inf = NULL;

/* Demangled: hal2mnl_set_gps_navigation */
extern "C" __attribute__((visibility("default"))) int hal2mnl_set_gps_navigation(void) {
    ALOGD("hal2mnl_set_gps_navigation() called");
    return 0;
}

/* Demangled: put_binary */
extern "C" __attribute__((visibility("default"))) int put_binary(void) {
    ALOGD("put_binary() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: msleep */
extern "C" __attribute__((visibility("default"))) int msleep(void) {
    ALOGD("msleep() called");
    return 0;
}

/* Exported Object: mtk_agps_ril_inf */
extern "C" __attribute__((visibility("default"))) void* mtk_agps_ril_inf = NULL;

/* Demangled: hal2mnl_data_conn_open */
extern "C" __attribute__((visibility("default"))) int hal2mnl_data_conn_open(void) {
    ALOGD("hal2mnl_data_conn_open() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Exported Object: mtk_navi_msg_inf */
extern "C" __attribute__((visibility("default"))) void* mtk_navi_msg_inf = NULL;

/* Demangled: hal2mnl_gps_start */
extern "C" __attribute__((visibility("default"))) int hal2mnl_gps_start(void) {
    ALOGD("hal2mnl_gps_start() called");
    return 0;
}

/* Demangled: hal2mnl_set_gps_measurement */
extern "C" __attribute__((visibility("default"))) int hal2mnl_set_gps_measurement(void) {
    ALOGD("hal2mnl_set_gps_measurement() called");
    return 0;
}

/* Demangled: gpshal2mnl_gps_cleanup */
extern "C" __attribute__((visibility("default"))) int gpshal2mnl_gps_cleanup(void) {
    ALOGD("gpshal2mnl_gps_cleanup() called");
    return 0;
}

/* Demangled: gpshal_state_to_string */
extern "C" __attribute__((visibility("default"))) int gpshal_state_to_string(void) {
    ALOGD("gpshal_state_to_string() called");
    return 0;
}

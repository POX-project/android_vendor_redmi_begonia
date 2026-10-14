/*
 * Reverse-Engineered ABI Specification for: gps.default.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: gps.default.so
 */

#ifndef BEGONIA_RE_GPS_DEFAULT_H
#define BEGONIA_RE_GPS_DEFAULT_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Standard Android Hardware Module Symbol */
extern struct hw_module_t HAL_MODULE_INFO_SYM;

/* Symbol: hal2mnl_gps_inject_time */
/* Demangled: hal2mnl_gps_inject_time */
int hal2mnl_gps_inject_time(void);

/* Symbol: g_gpshal_ctx */
/* Demangled: g_gpshal_ctx */
extern void* g_gpshal_ctx;

/* Symbol: gpshal2mnl_gps_stop */
/* Demangled: gpshal2mnl_gps_stop */
int gpshal2mnl_gps_stop(void);

/* Symbol: mnlDebugData */
/* Demangled: mnlDebugData */
extern void* mnlDebugData;

/* Symbol: hal2mnl_gps_inject_location */
/* Demangled: hal2mnl_gps_inject_location */
int hal2mnl_gps_inject_location(void);

/* Symbol: hal2mnl_set_correction */
/* Demangled: hal2mnl_set_correction */
int hal2mnl_set_correction(void);

/* Symbol: safe_recvfrom */
/* Demangled: safe_recvfrom */
int safe_recvfrom(void);

/* Symbol: get_string2 */
/* Demangled: get_string2 */
int get_string2(void);

/* Symbol: epoll_add_fd2 */
/* Demangled: epoll_add_fd2 */
int epoll_add_fd2(void);

/* Symbol: gpshal_set_gps_state_intent */
/* Demangled: gpshal_set_gps_state_intent */
int gpshal_set_gps_state_intent(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: hal2mnl_data_conn_closed */
/* Demangled: hal2mnl_data_conn_closed */
int hal2mnl_data_conn_closed(void);

/* Symbol: hal2mnl_setBlacklist */
/* Demangled: hal2mnl_setBlacklist */
int hal2mnl_setBlacklist(void);

/* Symbol: hal2mnl_set_server */
/* Demangled: hal2mnl_set_server */
int hal2mnl_set_server(void);

/* Symbol: gpshal2mnl_gps_init */
/* Demangled: gpshal2mnl_gps_init */
int gpshal2mnl_gps_init(void);

/* Symbol: mtk_gnss_meas_correction_inf */
/* Demangled: mtk_gnss_meas_correction_inf */
extern void* mtk_gnss_meas_correction_inf;

/* Symbol: gpshal2mnl_gps_start */
/* Demangled: gpshal2mnl_gps_start */
int gpshal2mnl_gps_start(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: gps_hal_cmd_enter_record */
/* Demangled: gps_hal_cmd_enter_record */
int gps_hal_cmd_enter_record(void);

/* Symbol: hal2mnl_gps_cleanup */
/* Demangled: hal2mnl_gps_cleanup */
int hal2mnl_gps_cleanup(void);

/* Symbol: hal2mnl_update_network_availability */
/* Demangled: hal2mnl_update_network_availability */
int hal2mnl_update_network_availability(void);

/* Symbol: put_int */
/* Demangled: put_int */
int put_int(void);

/* Symbol: get_byte */
/* Demangled: get_byte */
int get_byte(void);

/* Symbol: hal2mnl_data_conn_failed */
/* Demangled: hal2mnl_data_conn_failed */
int hal2mnl_data_conn_failed(void);

/* Symbol: hal2mnl_data_conn_open_with_apn_ip_type */
/* Demangled: hal2mnl_data_conn_open_with_apn_ip_type */
int hal2mnl_data_conn_open_with_apn_ip_type(void);

/* Symbol: hal2mnl_update_gnss_config */
/* Demangled: hal2mnl_update_gnss_config */
int hal2mnl_update_gnss_config(void);

/* Symbol: epoll_del_fd */
/* Demangled: epoll_del_fd */
int epoll_del_fd(void);

/* Symbol: mtk_antenna_info_inf */
/* Demangled: mtk_antenna_info_inf */
extern void* mtk_antenna_info_inf;

/* Symbol: mtk_gps_meas_inf */
/* Demangled: mtk_gps_meas_inf */
extern void* mtk_gps_meas_inf;

/* Symbol: mtk_visibility_control_inf */
/* Demangled: mtk_visibility_control_inf */
extern void* mtk_visibility_control_inf;

/* Symbol: gps_hal_cmd_exit_record */
/* Demangled: gps_hal_cmd_exit_record */
int gps_hal_cmd_exit_record(void);

/* Symbol: hal2mnl_ni_respond */
/* Demangled: hal2mnl_ni_respond */
int hal2mnl_ni_respond(void);

/* Symbol: epoll_mod_fd */
/* Demangled: epoll_mod_fd */
int epoll_mod_fd(void);

/* Symbol: gpshal_gpscbs_save */
/* Demangled: gpshal_gpscbs_save */
int gpshal_gpscbs_save(void);

/* Symbol: put_byte */
/* Demangled: put_byte */
int put_byte(void);

/* Symbol: gpshal_worker_thread */
/* Demangled: gpshal_worker_thread */
int gpshal_worker_thread(void);

/* Symbol: mtk_gnss_config_inf */
/* Demangled: mtk_gnss_config_inf */
extern void* mtk_gnss_config_inf;

/* Symbol: get_int */
/* Demangled: get_int */
int get_int(void);

/* Symbol: hal2mnl_gps_stop */
/* Demangled: hal2mnl_gps_stop */
int hal2mnl_gps_stop(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: gps_hal_cmd_list_dump */
/* Demangled: gps_hal_cmd_list_dump */
int gps_hal_cmd_list_dump(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: create_mnl2hal_fd */
/* Demangled: create_mnl2hal_fd */
int create_mnl2hal_fd(void);

/* Symbol: hal2mnl_setNfwAccess */
/* Demangled: hal2mnl_setNfwAccess */
int hal2mnl_setNfwAccess(void);

/* Symbol: hal2mnl_set_id */
/* Demangled: hal2mnl_set_id */
int hal2mnl_set_id(void);

/* Symbol: get_double */
/* Demangled: get_double */
int get_double(void);

/* Symbol: epoll_add_fd */
/* Demangled: epoll_add_fd */
int epoll_add_fd(void);

/* Symbol: mtk_vzw_debug_inf */
/* Demangled: mtk_vzw_debug_inf */
extern void* mtk_vzw_debug_inf;

/* Symbol: hal2mnl_gps_init */
/* Demangled: hal2mnl_gps_init */
int hal2mnl_gps_init(void);

/* Symbol: put_float */
/* Demangled: put_float */
int put_float(void);

/* Symbol: get_float */
/* Demangled: get_float */
int get_float(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: hal2mnl_gps_set_position_mode */
/* Demangled: hal2mnl_gps_set_position_mode */
int hal2mnl_gps_set_position_mode(void);

/* Symbol: stop_timer */
/* Demangled: stop_timer */
int stop_timer(void);

/* Symbol: hal2mnl_update_network_state */
/* Demangled: hal2mnl_update_network_state */
int hal2mnl_update_network_state(void);

/* Symbol: safe_sendto */
/* Demangled: safe_sendto */
int safe_sendto(void);

/* Symbol: deinit_timer */
/* Demangled: deinit_timer */
int deinit_timer(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: socket_bind_udp */
/* Demangled: socket_bind_udp */
int socket_bind_udp(void);

/* Symbol: tag_log */
/* Demangled: tag_log */
int tag_log(void);

/* Symbol: get_long */
/* Demangled: get_long */
int get_long(void);

/* Symbol: get_string */
/* Demangled: get_string */
int get_string(void);

/* Symbol: hal2mnl_set_ref_location */
/* Demangled: hal2mnl_set_ref_location */
int hal2mnl_set_ref_location(void);

/* Symbol: put_double */
/* Demangled: put_double */
int put_double(void);

/* Symbol: enter_time_ms */
/* Demangled: enter_time_ms */
extern void* enter_time_ms;

/* Symbol: mtk_gps_ni_inf */
/* Demangled: mtk_gps_ni_inf */
extern void* mtk_gps_ni_inf;

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: mnl2hal_hdlr */
/* Demangled: mnl2hal_hdlr */
int mnl2hal_hdlr(void);

/* Symbol: hal2mnl_gps_delete_aiding_data */
/* Demangled: hal2mnl_gps_delete_aiding_data */
int hal2mnl_gps_delete_aiding_data(void);

/* Symbol: put_long */
/* Demangled: put_long */
int put_long(void);

/* Symbol: cmd_list */
/* Demangled: cmd_list */
extern void* cmd_list;

/* Symbol: cmd_rcd_idx */
/* Demangled: cmd_rcd_idx */
extern void* cmd_rcd_idx;

/* Symbol: start_timer */
/* Demangled: start_timer */
int start_timer(void);

/* Symbol: get_binary */
/* Demangled: get_binary */
int get_binary(void);

/* Symbol: hal2mnl_ni_message */
/* Demangled: hal2mnl_ni_message */
int hal2mnl_ni_message(void);

/* Symbol: socket_set_blocking */
/* Demangled: socket_set_blocking */
int socket_set_blocking(void);

/* Symbol: get_tick */
/* Demangled: get_tick */
int get_tick(void);

/* Symbol: gps_hal_cmd_list_init */
/* Demangled: gps_hal_cmd_list_init */
int gps_hal_cmd_list_init(void);

/* Symbol: init_timer */
/* Demangled: init_timer */
int init_timer(void);

/* Symbol: hal2mnl_hal_reboot */
/* Demangled: hal2mnl_hal_reboot */
int hal2mnl_hal_reboot(void);

/* Symbol: put_string */
/* Demangled: put_string */
int put_string(void);

/* Symbol: get_time_in_millisecond */
/* Demangled: get_time_in_millisecond */
int get_time_in_millisecond(void);

/* Symbol: init_timer_id */
/* Demangled: init_timer_id */
int init_timer_id(void);

/* Symbol: mtk_gps_debug_inf */
/* Demangled: mtk_gps_debug_inf */
extern void* mtk_gps_debug_inf;

/* Symbol: hal2mnl_set_vzw_debug */
/* Demangled: hal2mnl_set_vzw_debug */
int hal2mnl_set_vzw_debug(void);

/* Symbol: put_short */
/* Demangled: put_short */
int put_short(void);

/* Symbol: get_short */
/* Demangled: get_short */
int get_short(void);

/* Symbol: mtk_agps_inf */
/* Demangled: mtk_agps_inf */
extern void* mtk_agps_inf;

/* Symbol: hal2mnl_set_gps_navigation */
/* Demangled: hal2mnl_set_gps_navigation */
int hal2mnl_set_gps_navigation(void);

/* Symbol: put_binary */
/* Demangled: put_binary */
int put_binary(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: msleep */
/* Demangled: msleep */
int msleep(void);

/* Symbol: mtk_agps_ril_inf */
/* Demangled: mtk_agps_ril_inf */
extern void* mtk_agps_ril_inf;

/* Symbol: hal2mnl_data_conn_open */
/* Demangled: hal2mnl_data_conn_open */
int hal2mnl_data_conn_open(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: mtk_navi_msg_inf */
/* Demangled: mtk_navi_msg_inf */
extern void* mtk_navi_msg_inf;

/* Symbol: hal2mnl_gps_start */
/* Demangled: hal2mnl_gps_start */
int hal2mnl_gps_start(void);

/* Symbol: hal2mnl_set_gps_measurement */
/* Demangled: hal2mnl_set_gps_measurement */
int hal2mnl_set_gps_measurement(void);

/* Symbol: gpshal2mnl_gps_cleanup */
/* Demangled: gpshal2mnl_gps_cleanup */
int gpshal2mnl_gps_cleanup(void);

/* Symbol: gpshal_state_to_string */
/* Demangled: gpshal_state_to_string */
int gpshal_state_to_string(void);

__END_DECLS

#endif /* BEGONIA_RE_GPS_DEFAULT_H */

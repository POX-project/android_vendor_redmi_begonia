/*
 * Reverse-Engineered ABI Specification for: libviagpsrpc.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libviagpsrpc.so
 */

#ifndef BEGONIA_RE_LIBVIAGPSRPC_H
#define BEGONIA_RE_LIBVIAGPSRPC_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: gps_rpc_event_cb_func_0x00000001_svc */
/* Demangled: gps_rpc_event_cb_func_0x00000001_svc */
int gps_rpc_event_cb_func_0x00000001_svc(void);

/* Symbol: xdr_GpsPRMeasDataT */
/* Demangled: xdr_GpsPRMeasDataT */
int xdr_GpsPRMeasDataT(void);

/* Symbol: xdr_GpsSocketCreateMsgT */
/* Demangled: xdr_GpsSocketCreateMsgT */
int xdr_GpsSocketCreateMsgT(void);

/* Symbol: xdr_gps_rpc_ioctl_cb_data_t */
/* Demangled: xdr_gps_rpc_ioctl_cb_data_t */
int xdr_gps_rpc_ioctl_cb_data_t(void);

/* Symbol: xdr_gps_rpc_report_satellite_t */
/* Demangled: xdr_gps_rpc_report_satellite_t */
int xdr_gps_rpc_report_satellite_t(void);

/* Symbol: xdr_server_open_status_t */
/* Demangled: xdr_server_open_status_t */
int xdr_server_open_status_t(void);

/* Symbol: gps_request_no_need_assist_data */
/* Demangled: gps_request_no_need_assist_data */
int gps_request_no_need_assist_data(void);

/* Symbol: gps_rpc_ioctl_0x00000001 */
/* Demangled: gps_rpc_ioctl_0x00000001 */
int gps_rpc_ioctl_0x00000001(void);

/* Symbol: gpsrpccbprog_0x00000001_freeresult */
/* Demangled: gpsrpccbprog_0x00000001_freeresult */
int gpsrpccbprog_0x00000001_freeresult(void);

/* Symbol: xdr_GpsSuplCDMAInformationT */
/* Demangled: xdr_GpsSuplCDMAInformationT */
int xdr_GpsSuplCDMAInformationT(void);

/* Symbol: request_write_mutex */
/* Demangled: request_write_mutex */
extern void* request_write_mutex;

/* Symbol: xdr_gps_rpc_loc_server_close_status_t */
/* Demangled: xdr_gps_rpc_loc_server_close_status_t */
int xdr_gps_rpc_loc_server_close_status_t(void);

/* Symbol: gps_report_prm_data */
/* Demangled: gps_report_prm_data */
int gps_report_prm_data(void);

/* Symbol: gps_set_mpc_servaddr */
/* Demangled: gps_set_mpc_servaddr */
int gps_set_mpc_servaddr(void);

/* Symbol: nmea_counter */
/* Demangled: nmea_counter */
extern void* nmea_counter;

/* Symbol: response_alm_mutex */
/* Demangled: response_alm_mutex */
extern void* response_alm_mutex;

/* Symbol: test_mutex */
/* Demangled: test_mutex */
extern void* test_mutex;

/* Symbol: xdr_GpsSocketCreateRspMsgT */
/* Demangled: xdr_GpsSocketCreateRspMsgT */
int xdr_GpsSocketCreateRspMsgT(void);

/* Symbol: xdr_ValAppAddrT */
/* Demangled: xdr_ValAppAddrT */
int xdr_ValAppAddrT(void);

/* Symbol: xdr_gps_rpc_rat_mode_t */
/* Demangled: xdr_gps_rpc_rat_mode_t */
int xdr_gps_rpc_rat_mode_t(void);

/* Symbol: xdr_GpsPositionErrorT */
/* Demangled: xdr_GpsPositionErrorT */
int xdr_GpsPositionErrorT(void);

/* Symbol: xdr_GpsSessionCfgRpcT */
/* Demangled: xdr_GpsSessionCfgRpcT */
int xdr_GpsSessionCfgRpcT(void);

/* Symbol: xdr_GpsSocketCloseRspMsgT */
/* Demangled: xdr_GpsSocketCloseRspMsgT */
int xdr_GpsSocketCloseRspMsgT(void);

/* Symbol: eventQ_write */
/* Demangled: eventQ_write */
int eventQ_write(void);

/* Symbol: gps_request_gps_rat_mode_rsp */
/* Demangled: gps_request_gps_rat_mode_rsp */
int gps_request_gps_rat_mode_rsp(void);

/* Symbol: test_cond */
/* Demangled: test_cond */
extern void* test_cond;

/* Symbol: xdr_gps_rpc_client_handle_t */
/* Demangled: xdr_gps_rpc_client_handle_t */
int xdr_gps_rpc_client_handle_t(void);

/* Symbol: xdr_gps_rpc_report_nmea_t */
/* Demangled: xdr_gps_rpc_report_nmea_t */
int xdr_gps_rpc_report_nmea_t(void);

/* Symbol: gps_request_connection_status */
/* Demangled: gps_request_connection_status */
int gps_request_connection_status(void);

/* Symbol: xdr_GpsTimeMsgRpcT */
/* Demangled: xdr_GpsTimeMsgRpcT */
int xdr_GpsTimeMsgRpcT(void);

/* Symbol: xdr_gps_rpc_report_injectassist_t */
/* Demangled: xdr_gps_rpc_report_injectassist_t */
int xdr_gps_rpc_report_injectassist_t(void);

/* Symbol: xdr_gps_rpc_server_req_cmd_t */
/* Demangled: xdr_gps_rpc_server_req_cmd_t */
int xdr_gps_rpc_server_req_cmd_t(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: xdr_GpsSystemTimeT */
/* Demangled: xdr_GpsSystemTimeT */
int xdr_GpsSystemTimeT(void);

/* Symbol: xdr_gps_rpc_report_ioctl_t */
/* Demangled: xdr_gps_rpc_report_ioctl_t */
int xdr_gps_rpc_report_ioctl_t(void);

/* Symbol: gps_request_send_poweron_ack */
/* Demangled: gps_request_send_poweron_ack */
int gps_request_send_poweron_ack(void);

/* Symbol: xdr_gps_rpc_stop_fix_args */
/* Demangled: xdr_gps_rpc_stop_fix_args */
int xdr_gps_rpc_stop_fix_args(void);

/* Symbol: xdr_GpsFrameSyncRpcT */
/* Demangled: xdr_GpsFrameSyncRpcT */
int xdr_GpsFrameSyncRpcT(void);

/* Symbol: xdr_GpsFreqAidingRpcT */
/* Demangled: xdr_GpsFreqAidingRpcT */
int xdr_GpsFreqAidingRpcT(void);

/* Symbol: xdr_GpsLocRpcT */
/* Demangled: xdr_GpsLocRpcT */
int xdr_GpsLocRpcT(void);

/* Symbol: xdr_GpsPRMeasRpcT */
/* Demangled: xdr_GpsPRMeasRpcT */
int xdr_GpsPRMeasRpcT(void);

/* Symbol: gps_request_ni_pos */
/* Demangled: gps_request_ni_pos */
int gps_request_ni_pos(void);

/* Symbol: xdr_GpsCTMpcCfgRpcT */
/* Demangled: xdr_GpsCTMpcCfgRpcT */
int xdr_GpsCTMpcCfgRpcT(void);

/* Symbol: xdr_GpsCpLocRespRpcT */
/* Demangled: xdr_GpsCpLocRespRpcT */
int xdr_GpsCpLocRespRpcT(void);

/* Symbol: xdr_gps_rpc_open_args */
/* Demangled: xdr_gps_rpc_open_args */
int xdr_gps_rpc_open_args(void);

/* Symbol: xdr_gps_rpc_start_fix_args */
/* Demangled: xdr_gps_rpc_start_fix_args */
int xdr_gps_rpc_start_fix_args(void);

/* Symbol: xdr_GpsRpcFixModeT */
/* Demangled: xdr_GpsRpcFixModeT */
int xdr_GpsRpcFixModeT(void);

/* Symbol: xdr_gps_rpc_fix_mode_t */
/* Demangled: xdr_gps_rpc_fix_mode_t */
int xdr_gps_rpc_fix_mode_t(void);

/* Symbol: xdr_stop_gps_fix */
/* Demangled: xdr_stop_gps_fix */
int xdr_stop_gps_fix(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: gps_request_refloc_data */
/* Demangled: gps_request_refloc_data */
int gps_request_refloc_data(void);

/* Symbol: gps_request_time_aiding */
/* Demangled: gps_request_time_aiding */
int gps_request_time_aiding(void);

/* Symbol: xdr_gps_rpc_version_rets */
/* Demangled: xdr_gps_rpc_version_rets */
int xdr_gps_rpc_version_rets(void);

/* Symbol: xdr_GpsFakePowerOnRpcT */
/* Demangled: xdr_GpsFakePowerOnRpcT */
int xdr_GpsFakePowerOnRpcT(void);

/* Symbol: xdr_GpsSocketCloseMsgT */
/* Demangled: xdr_GpsSocketCloseMsgT */
int xdr_GpsSocketCloseMsgT(void);

/* Symbol: gps_rpc_ioctl_process_cb */
/* Demangled: gps_rpc_ioctl_process_cb */
int gps_rpc_ioctl_process_cb(void);

/* Symbol: gps_rpc_apicb_app_init */
/* Demangled: gps_rpc_apicb_app_init */
int gps_rpc_apicb_app_init(void);

/* Symbol: xdr_GpsCustomerSettingT */
/* Demangled: xdr_GpsCustomerSettingT */
int xdr_GpsCustomerSettingT(void);

/* Symbol: gpsrpccbprog_0x00000001 */
/* Demangled: gpsrpccbprog_0x00000001 */
int gpsrpccbprog_0x00000001(void);

/* Symbol: xdr_gps_rpc_cb_rets */
/* Demangled: xdr_gps_rpc_cb_rets */
int xdr_gps_rpc_cb_rets(void);

/* Symbol: xdr_GpsAADataRpcT */
/* Demangled: xdr_GpsAADataRpcT */
int xdr_GpsAADataRpcT(void);

/* Symbol: xdr_GpsLocRptRpcT */
/* Demangled: xdr_GpsLocRptRpcT */
int xdr_GpsLocRptRpcT(void);

/* Symbol: xdr_GpsPowerOnRpcT */
/* Demangled: xdr_GpsPowerOnRpcT */
int xdr_GpsPowerOnRpcT(void);

/* Symbol: xdr_GpsPpmReqCmdT */
/* Demangled: xdr_GpsPpmReqCmdT */
int xdr_GpsPpmReqCmdT(void);

/* Symbol: xdr_gps_rpc_status_event_t */
/* Demangled: xdr_gps_rpc_status_event_t */
int xdr_gps_rpc_status_event_t(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: gps_request_rat_mode_setting */
/* Demangled: gps_request_rat_mode_setting */
int gps_request_rat_mode_setting(void);

/* Symbol: gps_request_start_fix */
/* Demangled: gps_request_start_fix */
int gps_request_start_fix(void);

/* Symbol: xdr_GpsTcpbSendDataMsgT */
/* Demangled: xdr_GpsTcpbSendDataMsgT */
int xdr_GpsTcpbSendDataMsgT(void);

/* Symbol: xdr_gps_rpc_status_event_data_t */
/* Demangled: xdr_gps_rpc_status_event_data_t */
int xdr_gps_rpc_status_event_data_t(void);

/* Symbol: silence_snprintf */
/* Demangled: silence_snprintf */
int silence_snprintf(void);

/* Symbol: xdr_gps_rpc_cb_event_payload_t */
/* Demangled: xdr_gps_rpc_cb_event_payload_t */
int xdr_gps_rpc_cb_event_payload_t(void);

/* Symbol: xdr_GpsAfltPilotMeasurementT */
/* Demangled: xdr_GpsAfltPilotMeasurementT */
int xdr_GpsAfltPilotMeasurementT(void);

/* Symbol: xdr_GpsConnectionStatusMsgT */
/* Demangled: xdr_GpsConnectionStatusMsgT */
int xdr_GpsConnectionStatusMsgT(void);

/* Symbol: xdr_GpsIonRpcT */
/* Demangled: xdr_GpsIonRpcT */
int xdr_GpsIonRpcT(void);

/* Symbol: xdr_GpsQosT */
/* Demangled: xdr_GpsQosT */
int xdr_GpsQosT(void);

/* Symbol: gps_rpc_eng_ioctl */
/* Demangled: gps_rpc_eng_ioctl */
int gps_rpc_eng_ioctl(void);

/* Symbol: send_request */
/* Demangled: send_request */
int send_request(void);

/* Symbol: xdr_GpsPrivacySettingRpcT */
/* Demangled: xdr_GpsPrivacySettingRpcT */
int xdr_GpsPrivacySettingRpcT(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: gps_provide_refloc_data */
/* Demangled: gps_provide_refloc_data */
int gps_provide_refloc_data(void);

/* Symbol: xdr_gps_rpc_event_mask_t */
/* Demangled: xdr_gps_rpc_event_mask_t */
int xdr_gps_rpc_event_mask_t(void);

/* Symbol: xdr_gps_rpc_server_req_data_t */
/* Demangled: xdr_gps_rpc_server_req_data_t */
int xdr_gps_rpc_server_req_data_t(void);

/* Symbol: gps_request_assist_data */
/* Demangled: gps_request_assist_data */
int gps_request_assist_data(void);

/* Symbol: gps_request_set_pde_server */
/* Demangled: gps_request_set_pde_server */
int gps_request_set_pde_server(void);

/* Symbol: gps_request_socket_close_rsp */
/* Demangled: gps_request_socket_close_rsp */
int gps_request_socket_close_rsp(void);

/* Symbol: gps_request_stop */
/* Demangled: gps_request_stop */
int gps_request_stop(void);

/* Symbol: gps_rpc_close_0x00000001 */
/* Demangled: gps_rpc_close_0x00000001 */
int gps_rpc_close_0x00000001(void);

/* Symbol: gps_rpc_version_0x00000001 */
/* Demangled: gps_rpc_version_0x00000001 */
int gps_rpc_version_0x00000001(void);

/* Symbol: xdr_gps_rpc_ioctl_data_t */
/* Demangled: xdr_gps_rpc_ioctl_data_t */
int xdr_gps_rpc_ioctl_data_t(void);

/* Symbol: xdr_AppConnStatusT */
/* Demangled: xdr_AppConnStatusT */
int xdr_AppConnStatusT(void);

/* Symbol: xdr_GpsRatModeSettingMsgT */
/* Demangled: xdr_GpsRatModeSettingMsgT */
int xdr_GpsRatModeSettingMsgT(void);

/* Symbol: xdr_gps_rpc_server_conn_handle_t */
/* Demangled: xdr_gps_rpc_server_conn_handle_t */
int xdr_gps_rpc_server_conn_handle_t(void);

/* Symbol: xdr_rpc_resp_type */
/* Demangled: xdr_rpc_resp_type */
int xdr_rpc_resp_type(void);

/* Symbol: rpc_get_version */
/* Demangled: rpc_get_version */
int rpc_get_version(void);

/* Symbol: xdr_GpsAADataT */
/* Demangled: xdr_GpsAADataT */
int xdr_GpsAADataT(void);

/* Symbol: xdr_rpc_notify_info_struct */
/* Demangled: xdr_rpc_notify_info_struct */
int xdr_rpc_notify_info_struct(void);

/* Symbol: eventQ_init */
/* Demangled: eventQ_init */
int eventQ_init(void);

/* Symbol: eventQ_read */
/* Demangled: eventQ_read */
int eventQ_read(void);

/* Symbol: gps_request_cell_info */
/* Demangled: gps_request_cell_info */
int gps_request_cell_info(void);

/* Symbol: gps_request_send_fake_poweron_ack */
/* Demangled: gps_request_send_fake_poweron_ack */
int gps_request_send_fake_poweron_ack(void);

/* Symbol: gps_rpc_dev_ioctl */
/* Demangled: gps_rpc_dev_ioctl */
int gps_rpc_dev_ioctl(void);

/* Symbol: gps_rpc_eng_data */
/* Demangled: gps_rpc_eng_data */
extern void* gps_rpc_eng_data;

/* Symbol: gps_rpc_eng_ioctl_wait_cb */
/* Demangled: gps_rpc_eng_ioctl_wait_cb */
int gps_rpc_eng_ioctl_wait_cb(void);

/* Symbol: gps_rpc_stop_fix_0x00000001 */
/* Demangled: gps_rpc_stop_fix_0x00000001 */
int gps_rpc_stop_fix_0x00000001(void);

/* Symbol: xdr_GpsSuplHRPDInformationT */
/* Demangled: xdr_GpsSuplHRPDInformationT */
int xdr_GpsSuplHRPDInformationT(void);

/* Symbol: xdr_server_close_status_t */
/* Demangled: xdr_server_close_status_t */
int xdr_server_close_status_t(void);

/* Symbol: gps_request_period_sync */
/* Demangled: gps_request_period_sync */
int gps_request_period_sync(void);

/* Symbol: gps_request_tcp_data_send_rsp */
/* Demangled: gps_request_tcp_data_send_rsp */
int gps_request_tcp_data_send_rsp(void);

/* Symbol: xdr_gps_rpc_ioctl_rets */
/* Demangled: xdr_gps_rpc_ioctl_rets */
int xdr_gps_rpc_ioctl_rets(void);

/* Symbol: xdr_GpsEphPrnDataT */
/* Demangled: xdr_GpsEphPrnDataT */
int xdr_GpsEphPrnDataT(void);

/* Symbol: xdr_GpsTcpbRecvRspMsgT */
/* Demangled: xdr_GpsTcpbRecvRspMsgT */
int xdr_GpsTcpbRecvRspMsgT(void);

/* Symbol: xdr_gps_rpc_server_open_status_t */
/* Demangled: xdr_gps_rpc_server_open_status_t */
int xdr_gps_rpc_server_open_status_t(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: gps_request_send_aa_req */
/* Demangled: gps_request_send_aa_req */
int gps_request_send_aa_req(void);

/* Symbol: set_customer */
/* Demangled: set_customer */
int set_customer(void);

/* Symbol: xdr_gps_rpc_close_rets */
/* Demangled: xdr_gps_rpc_close_rets */
int xdr_gps_rpc_close_rets(void);

/* Symbol: xdr_GpsEmergencyCallRpcT */
/* Demangled: xdr_GpsEmergencyCallRpcT */
int xdr_GpsEmergencyCallRpcT(void);

/* Symbol: xdr_GpsSuplCellInformationRspMsgT */
/* Demangled: xdr_GpsSuplCellInformationRspMsgT */
int xdr_GpsSuplCellInformationRspMsgT(void);

/* Symbol: gps_set_low_power_mode */
/* Demangled: gps_set_low_power_mode */
int gps_set_low_power_mode(void);

/* Symbol: xdr_GpsMpcIs801ModeRpcT */
/* Demangled: xdr_GpsMpcIs801ModeRpcT */
int xdr_GpsMpcIs801ModeRpcT(void);

/* Symbol: gps_set_position_mode */
/* Demangled: gps_set_position_mode */
int gps_set_position_mode(void);

/* Symbol: process_alm_report */
/* Demangled: process_alm_report */
int process_alm_report(void);

/* Symbol: response_eph_mutex */
/* Demangled: response_eph_mutex */
extern void* response_eph_mutex;

/* Symbol: xdr_GpsAfltMeasurementMsgT */
/* Demangled: xdr_GpsAfltMeasurementMsgT */
int xdr_GpsAfltMeasurementMsgT(void);

/* Symbol: xdr_GpsRefLocRespRpcT */
/* Demangled: xdr_GpsRefLocRespRpcT */
int xdr_GpsRefLocRespRpcT(void);

/* Symbol: gps_request_freq_aiding */
/* Demangled: gps_request_freq_aiding */
int gps_request_freq_aiding(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: gps_rpc_dev_close */
/* Demangled: gps_rpc_dev_close */
int gps_rpc_dev_close(void);

/* Symbol: xdr_gps_rpc_ioctl_cmd_t */
/* Demangled: xdr_gps_rpc_ioctl_cmd_t */
int xdr_gps_rpc_ioctl_cmd_t(void);

/* Symbol: xdr_gps_rpc_cb_args */
/* Demangled: xdr_gps_rpc_cb_args */
int xdr_gps_rpc_cb_args(void);

/* Symbol: xdr_gps_rpc_engine_state_e_t */
/* Demangled: xdr_gps_rpc_engine_state_e_t */
int xdr_gps_rpc_engine_state_e_t(void);

/* Symbol: gps_request_ni_pos_resp */
/* Demangled: gps_request_ni_pos_resp */
int gps_request_ni_pos_resp(void);

/* Symbol: xdr_GpsEventRpcT */
/* Demangled: xdr_GpsEventRpcT */
int xdr_GpsEventRpcT(void);

/* Symbol: xdr_GpsFreqAidReqRpcT */
/* Demangled: xdr_GpsFreqAidReqRpcT */
int xdr_GpsFreqAidReqRpcT(void);

/* Symbol: xdr_GpsMpcPostionTechRpcT */
/* Demangled: xdr_GpsMpcPostionTechRpcT */
int xdr_GpsMpcPostionTechRpcT(void);

/* Symbol: xdr_GpsTcpbDataSendRspMsgT */
/* Demangled: xdr_GpsTcpbDataSendRspMsgT */
int xdr_GpsTcpbDataSendRspMsgT(void);

/* Symbol: xdr_gps_rpc_report_status_t */
/* Demangled: xdr_gps_rpc_report_status_t */
int xdr_gps_rpc_report_status_t(void);

/* Symbol: gps_rpc_open_0x00000001 */
/* Demangled: gps_rpc_open_0x00000001 */
int gps_rpc_open_0x00000001(void);

/* Symbol: xdr_GpsAlmPrnDataT */
/* Demangled: xdr_GpsAlmPrnDataT */
int xdr_GpsAlmPrnDataT(void);

/* Symbol: gps_request_power_on */
/* Demangled: gps_request_power_on */
int gps_request_power_on(void);

/* Symbol: process_eph_report */
/* Demangled: process_eph_report */
int process_eph_report(void);

/* Symbol: gps_rpc_event_cb_func_0x00000001 */
/* Demangled: gps_rpc_event_cb_func_0x00000001 */
int gps_rpc_event_cb_func_0x00000001(void);

/* Symbol: xdr_GpsNIPositionRequestCmdT */
/* Demangled: xdr_GpsNIPositionRequestCmdT */
int xdr_GpsNIPositionRequestCmdT(void);

/* Symbol: xdr_GpsRpcSelectionTypeT */
/* Demangled: xdr_GpsRpcSelectionTypeT */
int xdr_GpsRpcSelectionTypeT(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: xdr_GpsTcpbDataRecvMsgT */
/* Demangled: xdr_GpsTcpbDataRecvMsgT */
int xdr_GpsTcpbDataRecvMsgT(void);

/* Symbol: xdr_gps_rpc_report_reqserver_t */
/* Demangled: xdr_gps_rpc_report_reqserver_t */
int xdr_gps_rpc_report_reqserver_t(void);

/* Symbol: xdr_gps_rpc_version_t */
/* Demangled: xdr_gps_rpc_version_t */
int xdr_gps_rpc_version_t(void);

/* Symbol: xdr_rpc_boolean */
/* Demangled: xdr_rpc_boolean */
int xdr_rpc_boolean(void);

/* Symbol: gps_eng_report_nmea */
/* Demangled: gps_eng_report_nmea */
int gps_eng_report_nmea(void);

/* Symbol: viarpc_init */
/* Demangled: viarpc_init */
int viarpc_init(void);

/* Symbol: xdr_GpsAlmPrnRpcT */
/* Demangled: xdr_GpsAlmPrnRpcT */
int xdr_GpsAlmPrnRpcT(void);

/* Symbol: xdr_ServiceType */
/* Demangled: xdr_ServiceType */
int xdr_ServiceType(void);

/* Symbol: eventQ_clear */
/* Demangled: eventQ_clear */
int eventQ_clear(void);

/* Symbol: gps_request_stop_fix */
/* Demangled: gps_request_stop_fix */
int gps_request_stop_fix(void);

/* Symbol: xdr_gps_rpc_stop_fix_rets */
/* Demangled: xdr_gps_rpc_stop_fix_rets */
int xdr_gps_rpc_stop_fix_rets(void);

/* Symbol: gps_rpc_null_0x00000001 */
/* Demangled: gps_rpc_null_0x00000001 */
int gps_rpc_null_0x00000001(void);

/* Symbol: gps_request_del_aiding_ack */
/* Demangled: gps_request_del_aiding_ack */
int gps_request_del_aiding_ack(void);

/* Symbol: gps_rpc_api_clnt */
/* Demangled: gps_rpc_api_clnt */
extern void* gps_rpc_api_clnt;

/* Symbol: response_process_mutex */
/* Demangled: response_process_mutex */
extern void* response_process_mutex;

/* Symbol: xdr_gps_rpc_open_rets */
/* Demangled: xdr_gps_rpc_open_rets */
int xdr_gps_rpc_open_rets(void);

/* Symbol: xdr_gps_rpc_start_fix_rets */
/* Demangled: xdr_gps_rpc_start_fix_rets */
int xdr_gps_rpc_start_fix_rets(void);

/* Symbol: xdr_GpsNIPositionRequestIndT */
/* Demangled: xdr_GpsNIPositionRequestIndT */
int xdr_GpsNIPositionRequestIndT(void);

/* Symbol: gps_request_tcp_data_recv */
/* Demangled: gps_request_tcp_data_recv */
int gps_request_tcp_data_recv(void);

/* Symbol: gps_rpc_apicbprog_freeresult */
/* Demangled: gps_rpc_apicbprog_freeresult */
int gps_rpc_apicbprog_freeresult(void);

/* Symbol: gps_rpc_svr_port */
/* Demangled: gps_rpc_svr_port */
extern void* gps_rpc_svr_port;

/* Symbol: gps_set_privacy_mode */
/* Demangled: gps_set_privacy_mode */
int gps_set_privacy_mode(void);

/* Symbol: xdr_GpsAassistReqRpcT */
/* Demangled: xdr_GpsAassistReqRpcT */
int xdr_GpsAassistReqRpcT(void);

/* Symbol: gps_request_socket_create_rsp */
/* Demangled: gps_request_socket_create_rsp */
int gps_request_socket_create_rsp(void);

/* Symbol: gps_rpc_start_fix_0x00000001 */
/* Demangled: gps_rpc_start_fix_0x00000001 */
int gps_rpc_start_fix_0x00000001(void);

/* Symbol: xdr_GpsEphPrnRpcT */
/* Demangled: xdr_GpsEphPrnRpcT */
int xdr_GpsEphPrnRpcT(void);

/* Symbol: xdr_GpsMpcNotifyRpcT */
/* Demangled: xdr_GpsMpcNotifyRpcT */
int xdr_GpsMpcNotifyRpcT(void);

/* Symbol: xdr_gps_rpc_fix_session_state_t */
/* Demangled: xdr_gps_rpc_fix_session_state_t */
int xdr_gps_rpc_fix_session_state_t(void);

/* Symbol: xdr_GpsSocketStatusT */
/* Demangled: xdr_GpsSocketStatusT */
int xdr_GpsSocketStatusT(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: xdr_gps_rpc_ioctl_args */
/* Demangled: xdr_gps_rpc_ioctl_args */
int xdr_gps_rpc_ioctl_args(void);

/* Symbol: xdr_GpsRpcFixTypeT */
/* Demangled: xdr_GpsRpcFixTypeT */
int xdr_GpsRpcFixTypeT(void);

/* Symbol: xdr_GpsWriteServerConfigReqT */
/* Demangled: xdr_GpsWriteServerConfigReqT */
int xdr_GpsWriteServerConfigReqT(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: gps_request_send_stop_ack */
/* Demangled: gps_request_send_stop_ack */
int gps_request_send_stop_ack(void);

/* Symbol: xdr_gps_rpc_close_args */
/* Demangled: xdr_gps_rpc_close_args */
int xdr_gps_rpc_close_args(void);

/* Symbol: xdr_GpsRpcFixQualityT */
/* Demangled: xdr_GpsRpcFixQualityT */
int xdr_GpsRpcFixQualityT(void);

/* Symbol: xdr_PeriodSyncMsgT */
/* Demangled: xdr_PeriodSyncMsgT */
int xdr_PeriodSyncMsgT(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBVIAGPSRPC_H */

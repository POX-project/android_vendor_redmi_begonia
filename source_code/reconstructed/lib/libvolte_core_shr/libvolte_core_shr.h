/*
 * Reverse-Engineered ABI Specification for: libvolte_core_shr.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libvolte_core_shr.so
 */

#ifndef BEGONIA_RE_LIBVOLTE_CORE_SHR_H
#define BEGONIA_RE_LIBVOLTE_CORE_SHR_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: voip_array_create */
/* Demangled: voip_array_create */
int voip_array_create(void);

/* Symbol: voip_get_mem */
/* Demangled: voip_get_mem */
int voip_get_mem(void);

/* Symbol: MUTX_Size */
/* Demangled: MUTX_Size */
int MUTX_Size(void);

/* Symbol: MUTX_Init */
/* Demangled: MUTX_Init */
int MUTX_Init(void);

/* Symbol: __aeabi_unwind_cpp_pr0 */
/* Demangled: __aeabi_unwind_cpp_pr0 */
int __aeabi_unwind_cpp_pr0(void);

/* Symbol: voip_array_destroy */
/* Demangled: voip_array_destroy */
int voip_array_destroy(void);

/* Symbol: MUTX_Get */
/* Demangled: MUTX_Get */
int MUTX_Get(void);

/* Symbol: MUTX_Put */
/* Demangled: MUTX_Put */
int MUTX_Put(void);

/* Symbol: MUTX_Dest */
/* Demangled: MUTX_Dest */
int MUTX_Dest(void);

/* Symbol: voip_free_mem */
/* Demangled: voip_free_mem */
int voip_free_mem(void);

/* Symbol: voip_array_add */
/* Demangled: voip_array_add */
int voip_array_add(void);

/* Symbol: __aeabi_unwind_cpp_pr1 */
/* Demangled: __aeabi_unwind_cpp_pr1 */
int __aeabi_unwind_cpp_pr1(void);

/* Symbol: voip_array_set */
/* Demangled: voip_array_set */
int voip_array_set(void);

/* Symbol: voip_array_del */
/* Demangled: voip_array_del */
int voip_array_del(void);

/* Symbol: voip_array_del2 */
/* Demangled: voip_array_del2 */
int voip_array_del2(void);

/* Symbol: voip_array_get */
/* Demangled: voip_array_get */
int voip_array_get(void);

/* Symbol: voip_array_find */
/* Demangled: voip_array_find */
int voip_array_find(void);

/* Symbol: voip_cque_create */
/* Demangled: voip_cque_create */
int voip_cque_create(void);

/* Symbol: voip_cque_destroy */
/* Demangled: voip_cque_destroy */
int voip_cque_destroy(void);

/* Symbol: voip_cque_push_back */
/* Demangled: voip_cque_push_back */
int voip_cque_push_back(void);

/* Symbol: __aeabi_idiv */
/* Demangled: __aeabi_idiv */
int __aeabi_idiv(void);

/* Symbol: voip_cque_push_front */
/* Demangled: voip_cque_push_front */
int voip_cque_push_front(void);

/* Symbol: voip_cque_pop_front */
/* Demangled: voip_cque_pop_front */
int voip_cque_pop_front(void);

/* Symbol: voip_cque_index */
/* Demangled: voip_cque_index */
int voip_cque_index(void);

/* Symbol: voip_cque_get_num_of_items */
/* Demangled: voip_cque_get_num_of_items */
int voip_cque_get_num_of_items(void);

/* Symbol: voip_list_create */
/* Demangled: voip_list_create */
int voip_list_create(void);

/* Symbol: voip_list_destroy */
/* Demangled: voip_list_destroy */
int voip_list_destroy(void);

/* Symbol: LIST_Del */
/* Demangled: LIST_Del */
int LIST_Del(void);

/* Symbol: voip_list_add */
/* Demangled: voip_list_add */
int voip_list_add(void);

/* Symbol: LIST_AddTail */
/* Demangled: LIST_AddTail */
int LIST_AddTail(void);

/* Symbol: voip_list_get */
/* Demangled: voip_list_get */
int voip_list_get(void);

/* Symbol: voip_list_del */
/* Demangled: voip_list_del */
int voip_list_del(void);

/* Symbol: voip_list_del_node */
/* Demangled: voip_list_del_node */
int voip_list_del_node(void);

/* Symbol: voip_list_insert_node */
/* Demangled: voip_list_insert_node */
int voip_list_insert_node(void);

/* Symbol: __LIST_Add */
/* Demangled: __LIST_Add */
int __LIST_Add(void);

/* Symbol: voip_list_find_node */
/* Demangled: voip_list_find_node */
int voip_list_find_node(void);

/* Symbol: voip_list_find_data */
/* Demangled: voip_list_find_data */
int voip_list_find_data(void);

/* Symbol: voip_list_get_head */
/* Demangled: voip_list_get_head */
int voip_list_get_head(void);

/* Symbol: voip_list_get_next */
/* Demangled: voip_list_get_next */
int voip_list_get_next(void);

/* Symbol: voip_list_count */
/* Demangled: voip_list_count */
int voip_list_count(void);

/* Symbol: LIST_Add */
/* Demangled: LIST_Add */
int LIST_Add(void);

/* Symbol: __LIST_Del */
/* Demangled: __LIST_Del */
int __LIST_Del(void);

/* Symbol: LIST_DelInit */
/* Demangled: LIST_DelInit */
int LIST_DelInit(void);

/* Symbol: LIST_Splice */
/* Demangled: LIST_Splice */
int LIST_Splice(void);

/* Symbol: voip_strlen */
/* Demangled: voip_strlen */
int voip_strlen(void);

/* Symbol: voip_strncpy */
/* Demangled: voip_strncpy */
int voip_strncpy(void);

/* Symbol: VOIP_strdup */
/* Demangled: VOIP_strdup */
int VOIP_strdup(void);

/* Symbol: SIP_get_mem */
/* Demangled: SIP_get_mem */
int SIP_get_mem(void);

/* Symbol: voip_strcasecmp */
/* Demangled: voip_strcasecmp */
int voip_strcasecmp(void);

/* Symbol: voip_strrev */
/* Demangled: voip_strrev */
int voip_strrev(void);

/* Symbol: _voip_str_replace */
/* Demangled: _voip_str_replace */
int _voip_str_replace(void);

/* Symbol: voip_str_replace */
/* Demangled: voip_str_replace */
int voip_str_replace(void);

/* Symbol: voip_strtok_r */
/* Demangled: voip_strtok_r */
int voip_strtok_r(void);

/* Symbol: voip_char_ucase */
/* Demangled: voip_char_ucase */
int voip_char_ucase(void);

/* Symbol: voip_char_lcase */
/* Demangled: voip_char_lcase */
int voip_char_lcase(void);

/* Symbol: voip_triml */
/* Demangled: voip_triml */
int voip_triml(void);

/* Symbol: voip_trimr */
/* Demangled: voip_trimr */
int voip_trimr(void);

/* Symbol: voip_trim */
/* Demangled: voip_trim */
int voip_trim(void);

/* Symbol: voip_snprintf */
/* Demangled: voip_snprintf */
int voip_snprintf(void);

/* Symbol: voip_alloc_sprintf */
/* Demangled: voip_alloc_sprintf */
int voip_alloc_sprintf(void);

/* Symbol: voip_parser_address_str */
/* Demangled: voip_parser_address_str */
int voip_parser_address_str(void);

/* Symbol: voip_remove_char */
/* Demangled: voip_remove_char */
int voip_remove_char(void);

/* Symbol: TIME_Size */
/* Demangled: TIME_Size */
int TIME_Size(void);

/* Symbol: TIME_Init */
/* Demangled: TIME_Init */
int TIME_Init(void);

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int __aeabi_uidiv(void);

/* Symbol: __umodsi3 */
/* Demangled: __umodsi3 */
int __umodsi3(void);

/* Symbol: TIME_Dest */
/* Demangled: TIME_Dest */
int TIME_Dest(void);

/* Symbol: TIME_Deactivate */
/* Demangled: TIME_Deactivate */
int TIME_Deactivate(void);

/* Symbol: TIME_Ctrl */
/* Demangled: TIME_Ctrl */
int TIME_Ctrl(void);

/* Symbol: Channel_Create */
/* Demangled: Channel_Create */
int Channel_Create(void);

/* Symbol: socket_local_client */
/* Demangled: socket_local_client */
int socket_local_client(void);

/* Symbol: __modsi3 */
/* Demangled: __modsi3 */
int __modsi3(void);

/* Symbol: Channel_Close */
/* Demangled: Channel_Close */
int Channel_Close(void);

/* Symbol: Channel_Wait */
/* Demangled: Channel_Wait */
int Channel_Wait(void);

/* Symbol: Channel_Data_Free */
/* Demangled: Channel_Data_Free */
int Channel_Data_Free(void);

/* Symbol: Channel_Send */
/* Demangled: Channel_Send */
int Channel_Send(void);

/* Symbol: Channel_Get_Item */
/* Demangled: Channel_Get_Item */
int Channel_Get_Item(void);

/* Symbol: Channel_Listen */
/* Demangled: Channel_Listen */
int Channel_Listen(void);

/* Symbol: auto_testing_set_id */
/* Demangled: auto_testing_set_id */
int auto_testing_set_id(void);

/* Symbol: auto_testing_get_id */
/* Demangled: auto_testing_get_id */
int auto_testing_get_id(void);

/* Symbol: sip_mem_init */
/* Demangled: sip_mem_init */
int sip_mem_init(void);

/* Symbol: sip_mem_status */
/* Demangled: sip_mem_status */
int sip_mem_status(void);

/* Symbol: sip_mem_get_free */
/* Demangled: sip_mem_get_free */
int sip_mem_get_free(void);

/* Symbol: SIP_free_mem */
/* Demangled: SIP_free_mem */
int SIP_free_mem(void);

/* Symbol: SIP_test_free_mem */
/* Demangled: SIP_test_free_mem */
int SIP_test_free_mem(void);

/* Symbol: MSGQ_Init */
/* Demangled: MSGQ_Init */
int MSGQ_Init(void);

/* Symbol: MSGQ_Free */
/* Demangled: MSGQ_Free */
int MSGQ_Free(void);

/* Symbol: MSGQ_Put */
/* Demangled: MSGQ_Put */
int MSGQ_Put(void);

/* Symbol: MSGQ_Put2 */
/* Demangled: MSGQ_Put2 */
int MSGQ_Put2(void);

/* Symbol: MSGQ_Get */
/* Demangled: MSGQ_Get */
int MSGQ_Get(void);

/* Symbol: MSGQ_GetMsg */
/* Demangled: MSGQ_GetMsg */
int MSGQ_GetMsg(void);

/* Symbol: MUTX_Ctrl */
/* Demangled: MUTX_Ctrl */
int MUTX_Ctrl(void);

/* Symbol: SEMA_Size */
/* Demangled: SEMA_Size */
int SEMA_Size(void);

/* Symbol: SEMA_Init */
/* Demangled: SEMA_Init */
int SEMA_Init(void);

/* Symbol: SEMA_Dest */
/* Demangled: SEMA_Dest */
int SEMA_Dest(void);

/* Symbol: SEMA_Get */
/* Demangled: SEMA_Get */
int SEMA_Get(void);

/* Symbol: SEMA_Put */
/* Demangled: SEMA_Put */
int SEMA_Put(void);

/* Symbol: SEMA_Value */
/* Demangled: SEMA_Value */
int SEMA_Value(void);

/* Symbol: SEMA_Ctrl */
/* Demangled: SEMA_Ctrl */
int SEMA_Ctrl(void);

/* Symbol: TASK_Run */
/* Demangled: TASK_Run */
int TASK_Run(void);

/* Symbol: voip_task_create */
/* Demangled: voip_task_create */
int voip_task_create(void);

/* Symbol: voip_task_destroy */
/* Demangled: voip_task_destroy */
int voip_task_destroy(void);

/* Symbol: voip_task_sleep */
/* Demangled: voip_task_sleep */
int voip_task_sleep(void);

/* Symbol: WakeLock_acquire */
/* Demangled: WakeLock_acquire */
int WakeLock_acquire(void);

/* Symbol: WakeLock_acquire_ex */
/* Demangled: WakeLock_acquire_ex */
int WakeLock_acquire_ex(void);

/* Symbol: WakeLock_release */
/* Demangled: WakeLock_release */
int WakeLock_release(void);

/* Symbol: WakeLock_release_ex */
/* Demangled: WakeLock_release_ex */
int WakeLock_release_ex(void);

/* Symbol: WakeLock_clear */
/* Demangled: WakeLock_clear */
int WakeLock_clear(void);

/* Symbol: WakeLock_init */
/* Demangled: WakeLock_init */
int WakeLock_init(void);

/* Symbol: WakeLock_deinit */
/* Demangled: WakeLock_deinit */
int WakeLock_deinit(void);

/* Symbol: sdp_ctrl_table_init */
/* Demangled: sdp_ctrl_table_init */
int sdp_ctrl_table_init(void);

/* Symbol: g_sdps */
/* Demangled: g_sdps */
extern void* g_sdps;

/* Symbol: g_wan_mac */
/* Demangled: g_wan_mac */
extern void* g_wan_mac;

/* Symbol: sdp_ctrl_table_start_port_update */
/* Demangled: sdp_ctrl_table_start_port_update */
int sdp_ctrl_table_start_port_update(void);

/* Symbol: sdp_ctrl_table_port_range_update */
/* Demangled: sdp_ctrl_table_port_range_update */
int sdp_ctrl_table_port_range_update(void);

/* Symbol: sdp_ctrl_table_deinit */
/* Demangled: sdp_ctrl_table_deinit */
int sdp_ctrl_table_deinit(void);

/* Symbol: sdp_ctrl_table_reset */
/* Demangled: sdp_ctrl_table_reset */
int sdp_ctrl_table_reset(void);

/* Symbol: sdp_ctrl_get_media_port */
/* Demangled: sdp_ctrl_get_media_port */
int sdp_ctrl_get_media_port(void);

/* Symbol: sdp_ctrl_get_session_id */
/* Demangled: sdp_ctrl_get_session_id */
int sdp_ctrl_get_session_id(void);

/* Symbol: sdp_ctrl_get_restore_attrs */
/* Demangled: sdp_ctrl_get_restore_attrs */
int sdp_ctrl_get_restore_attrs(void);

/* Symbol: sdp_msg_get_negotiation_tcap */
/* Demangled: sdp_msg_get_negotiation_tcap */
int sdp_msg_get_negotiation_tcap(void);

/* Symbol: sdp_msg_get_negotiation_acap */
/* Demangled: sdp_msg_get_negotiation_acap */
int sdp_msg_get_negotiation_acap(void);

/* Symbol: sdp_msg_create_negotiation_sdp */
/* Demangled: sdp_msg_create_negotiation_sdp */
int sdp_msg_create_negotiation_sdp(void);

/* Symbol: sdp_msg_struct_copy */
/* Demangled: sdp_msg_struct_copy */
int sdp_msg_struct_copy(void);

/* Symbol: sdp_msg_remove_attribute */
/* Demangled: sdp_msg_remove_attribute */
int sdp_msg_remove_attribute(void);

/* Symbol: sdp_msg_rm_media_attribute */
/* Demangled: sdp_msg_rm_media_attribute */
int sdp_msg_rm_media_attribute(void);

/* Symbol: sdp_msg_free_attribute */
/* Demangled: sdp_msg_free_attribute */
int sdp_msg_free_attribute(void);

/* Symbol: sdp_msg_add_attribute */
/* Demangled: sdp_msg_add_attribute */
int sdp_msg_add_attribute(void);

/* Symbol: sdp_msg_initialize */
/* Demangled: sdp_msg_initialize */
int sdp_msg_initialize(void);

/* Symbol: _sdp_msg_deinitialize */
/* Demangled: _sdp_msg_deinitialize */
int _sdp_msg_deinitialize(void);

/* Symbol: sdp_msg_int_pack_required_size */
/* Demangled: sdp_msg_int_pack_required_size */
int sdp_msg_int_pack_required_size(void);

/* Symbol: sdp_msg_unpack */
/* Demangled: sdp_msg_unpack */
int sdp_msg_unpack(void);

/* Symbol: sdp_msg_free_attribute_item */
/* Demangled: sdp_msg_free_attribute_item */
int sdp_msg_free_attribute_item(void);

/* Symbol: sdp_msg_free_media */
/* Demangled: sdp_msg_free_media */
int sdp_msg_free_media(void);

/* Symbol: sdp_msg_internal_pack */
/* Demangled: sdp_msg_internal_pack */
int sdp_msg_internal_pack(void);

/* Symbol: sdp_nwk_type */
/* Demangled: sdp_nwk_type */
extern void* sdp_nwk_type;

/* Symbol: sdp_addr_type */
/* Demangled: sdp_addr_type */
extern void* sdp_addr_type;

/* Symbol: sdp_bandwidth_string */
/* Demangled: sdp_bandwidth_string */
extern void* sdp_bandwidth_string;

/* Symbol: sdp_media_type */
/* Demangled: sdp_media_type */
extern void* sdp_media_type;

/* Symbol: sdp_msg_free_bandwidth */
/* Demangled: sdp_msg_free_bandwidth */
int sdp_msg_free_bandwidth(void);

/* Symbol: sdp_msg_media_create */
/* Demangled: sdp_msg_media_create */
int sdp_msg_media_create(void);

/* Symbol: sdp_msg_get_attribute */
/* Demangled: sdp_msg_get_attribute */
int sdp_msg_get_attribute(void);

/* Symbol: sdp_msg_replace_attribute */
/* Demangled: sdp_msg_replace_attribute */
int sdp_msg_replace_attribute(void);

/* Symbol: sdp_msg_get_media */
/* Demangled: sdp_msg_get_media */
int sdp_msg_get_media(void);

/* Symbol: sdp_get_image_fmt */
/* Demangled: sdp_get_image_fmt */
int sdp_get_image_fmt(void);

/* Symbol: sdp_image_proto_type */
/* Demangled: sdp_image_proto_type */
extern void* sdp_image_proto_type;

/* Symbol: sdp_restore_attrs */
/* Demangled: sdp_restore_attrs */
int sdp_restore_attrs(void);

/* Symbol: sdp_get_rtp_direction */
/* Demangled: sdp_get_rtp_direction */
int sdp_get_rtp_direction(void);

/* Symbol: sdp_get_rtp_settings */
/* Demangled: sdp_get_rtp_settings */
int sdp_get_rtp_settings(void);

/* Symbol: sdp_clock_rate_string */
/* Demangled: sdp_clock_rate_string */
extern void* sdp_clock_rate_string;

/* Symbol: sdp_prcd_status_type_string */
/* Demangled: sdp_prcd_status_type_string */
extern void* sdp_prcd_status_type_string;

/* Symbol: sdp_prcd_direction_string */
/* Demangled: sdp_prcd_direction_string */
extern void* sdp_prcd_direction_string;

/* Symbol: sdp_prcd_strength_string */
/* Demangled: sdp_prcd_strength_string */
extern void* sdp_prcd_strength_string;

/* Symbol: sdp_ecn_method_string */
/* Demangled: sdp_ecn_method_string */
extern void* sdp_ecn_method_string;

/* Symbol: sdp_prcd_type_string */
/* Demangled: sdp_prcd_type_string */
extern void* sdp_prcd_type_string;

/* Symbol: sdp_sendrecv_string */
/* Demangled: sdp_sendrecv_string */
extern void* sdp_sendrecv_string;

/* Symbol: sdp_channel_type */
/* Demangled: sdp_channel_type */
extern void* sdp_channel_type;

/* Symbol: sdp_t38_bitrate_string */
/* Demangled: sdp_t38_bitrate_string */
extern void* sdp_t38_bitrate_string;

/* Symbol: sdp_t38_rtmngt_string */
/* Demangled: sdp_t38_rtmngt_string */
extern void* sdp_t38_rtmngt_string;

/* Symbol: sdp_t38_boolean_string */
/* Demangled: sdp_t38_boolean_string */
extern void* sdp_t38_boolean_string;

/* Symbol: sdp_t38_udpec_string */
/* Demangled: sdp_t38_udpec_string */
extern void* sdp_t38_udpec_string;

/* Symbol: applib_base64_decode */
/* Demangled: applib_base64_decode */
int applib_base64_decode(void);

/* Symbol: applib_find_base64_boundary */
/* Demangled: applib_find_base64_boundary */
int applib_find_base64_boundary(void);

/* Symbol: applib_base64_encode */
/* Demangled: applib_base64_encode */
int applib_base64_encode(void);

/* Symbol: app_base64_encode */
/* Demangled: app_base64_encode */
extern void* app_base64_encode;

/* Symbol: applib_dt_is_leap_year */
/* Demangled: applib_dt_is_leap_year */
int applib_dt_is_leap_year(void);

/* Symbol: applib_dt_last_day_of_mon */
/* Demangled: applib_dt_last_day_of_mon */
int applib_dt_last_day_of_mon(void);

/* Symbol: g_dt_day_per_mon */
/* Demangled: g_dt_day_per_mon */
extern void* g_dt_day_per_mon;

/* Symbol: applib_dt_dow */
/* Demangled: applib_dt_dow */
int applib_dt_dow(void);

/* Symbol: applib_dt_utc_to_rtc */
/* Demangled: applib_dt_utc_to_rtc */
int applib_dt_utc_to_rtc(void);

/* Symbol: applib_conv_tz_to_mytime */
/* Demangled: applib_conv_tz_to_mytime */
int applib_conv_tz_to_mytime(void);

/* Symbol: applib_dt_decrease_time */
/* Demangled: applib_dt_decrease_time */
int applib_dt_decrease_time(void);

/* Symbol: applib_dt_increase_time */
/* Demangled: applib_dt_increase_time */
int applib_dt_increase_time(void);

/* Symbol: applib_dt_compare_time */
/* Demangled: applib_dt_compare_time */
int applib_dt_compare_time(void);

/* Symbol: applib_dt_is_valid */
/* Demangled: applib_dt_is_valid */
int applib_dt_is_valid(void);

/* Symbol: applib_dt_utc_sec_2_mytime */
/* Demangled: applib_dt_utc_sec_2_mytime */
int applib_dt_utc_sec_2_mytime(void);

/* Symbol: applib_dt_rfc1123_rfc850_asctime_dateString2Time */
/* Demangled: applib_dt_rfc1123_rfc850_asctime_dateString2Time */
int applib_dt_rfc1123_rfc850_asctime_dateString2Time(void);

/* Symbol: applib_dt_time2rfc1123dateString */
/* Demangled: applib_dt_time2rfc1123dateString */
int applib_dt_time2rfc1123dateString(void);

/* Symbol: mime_tolower */
/* Demangled: mime_tolower */
int mime_tolower(void);

/* Symbol: mime_strnicmp */
/* Demangled: mime_strnicmp */
int mime_strnicmp(void);

/* Symbol: mime_stricmp */
/* Demangled: mime_stricmp */
int mime_stricmp(void);

/* Symbol: mime_type_look_up */
/* Demangled: mime_type_look_up */
int mime_type_look_up(void);

/* Symbol: g_applib_mime_tbl */
/* Demangled: g_applib_mime_tbl */
extern void* g_applib_mime_tbl;

/* Symbol: app_unicode_to_ucs2encoding */
/* Demangled: app_unicode_to_ucs2encoding */
int app_unicode_to_ucs2encoding(void);

/* Symbol: app_ucs2encoding_to_unicode */
/* Demangled: app_ucs2encoding_to_unicode */
int app_ucs2encoding_to_unicode(void);

/* Symbol: app_ucs2_strlen */
/* Demangled: app_ucs2_strlen */
int app_ucs2_strlen(void);

/* Symbol: app_ucs2_strcmp */
/* Demangled: app_ucs2_strcmp */
int app_ucs2_strcmp(void);

/* Symbol: app_ucs2_strcpy */
/* Demangled: app_ucs2_strcpy */
int app_ucs2_strcpy(void);

/* Symbol: app_ucs2_strncmp */
/* Demangled: app_ucs2_strncmp */
int app_ucs2_strncmp(void);

/* Symbol: app_ucs2_strncpy */
/* Demangled: app_ucs2_strncpy */
int app_ucs2_strncpy(void);

/* Symbol: app_ucs2_strcat */
/* Demangled: app_ucs2_strcat */
int app_ucs2_strcat(void);

/* Symbol: app_ucs2_strncat */
/* Demangled: app_ucs2_strncat */
int app_ucs2_strncat(void);

/* Symbol: app_ucs2str_appendchar */
/* Demangled: app_ucs2str_appendchar */
int app_ucs2str_appendchar(void);

/* Symbol: app_ucs2str_n_appendchar */
/* Demangled: app_ucs2str_n_appendchar */
int app_ucs2str_n_appendchar(void);

/* Symbol: app_ansii_to_unicodestring */
/* Demangled: app_ansii_to_unicodestring */
int app_ansii_to_unicodestring(void);

/* Symbol: app_ansii_n_to_unicodestring */
/* Demangled: app_ansii_n_to_unicodestring */
int app_ansii_n_to_unicodestring(void);

/* Symbol: app_unicode_to_ansii */
/* Demangled: app_unicode_to_ansii */
int app_unicode_to_ansii(void);

/* Symbol: app_unicode_n_to_ansii */
/* Demangled: app_unicode_n_to_ansii */
int app_unicode_n_to_ansii(void);

/* Symbol: che_init */
/* Demangled: che_init */
int che_init(void);

/* Symbol: che_key_action */
/* Demangled: che_key_action */
int che_key_action(void);

/* Symbol: che_set_iv */
/* Demangled: che_set_iv */
int che_set_iv(void);

/* Symbol: che_process */
/* Demangled: che_process */
int che_process(void);

/* Symbol: che_sw_md5 */
/* Demangled: che_sw_md5 */
int che_sw_md5(void);

/* Symbol: CHE_md5_init */
/* Demangled: CHE_md5_init */
int CHE_md5_init(void);

/* Symbol: CHE_md5_append */
/* Demangled: CHE_md5_append */
int CHE_md5_append(void);

/* Symbol: CHE_md5_finish */
/* Demangled: CHE_md5_finish */
int CHE_md5_finish(void);

/* Symbol: inet_msg_unpack_body_into_msg */
/* Demangled: inet_msg_unpack_body_into_msg */
int inet_msg_unpack_body_into_msg(void);

/* Symbol: inet_msg_unpack_body */
/* Demangled: inet_msg_unpack_body */
int inet_msg_unpack_body(void);

/* Symbol: inet_msg_initialize */
/* Demangled: inet_msg_initialize */
int inet_msg_initialize(void);

/* Symbol: inet_msg_deinitialize_body */
/* Demangled: inet_msg_deinitialize_body */
int inet_msg_deinitialize_body(void);

/* Symbol: inet_free_body_list */
/* Demangled: inet_free_body_list */
int inet_free_body_list(void);

/* Symbol: inet_msg_deinitialize */
/* Demangled: inet_msg_deinitialize */
int inet_msg_deinitialize(void);

/* Symbol: inet_free_header_list */
/* Demangled: inet_free_header_list */
int inet_free_header_list(void);

/* Symbol: inet_int_str_struct_free_fn */
/* Demangled: inet_int_str_struct_free_fn */
int inet_int_str_struct_free_fn(void);

/* Symbol: inet_msg_unpack */
/* Demangled: inet_msg_unpack */
int inet_msg_unpack(void);

/* Symbol: inet_msg_unpack_header */
/* Demangled: inet_msg_unpack_header */
int inet_msg_unpack_header(void);

/* Symbol: inet_msg_pack_required_size */
/* Demangled: inet_msg_pack_required_size */
int inet_msg_pack_required_size(void);

/* Symbol: inet_msg_pack_req_status_line_required_size */
/* Demangled: inet_msg_pack_req_status_line_required_size */
int inet_msg_pack_req_status_line_required_size(void);

/* Symbol: inet_msg_pack_header_list_required_size */
/* Demangled: inet_msg_pack_header_list_required_size */
int inet_msg_pack_header_list_required_size(void);

/* Symbol: inet_msg_pack_body_required_size */
/* Demangled: inet_msg_pack_body_required_size */
int inet_msg_pack_body_required_size(void);

/* Symbol: inet_msg_pack */
/* Demangled: inet_msg_pack */
int inet_msg_pack(void);

/* Symbol: inet_msg_pack_req_status_line */
/* Demangled: inet_msg_pack_req_status_line */
int inet_msg_pack_req_status_line(void);

/* Symbol: inet_msg_pack_header */
/* Demangled: inet_msg_pack_header */
int inet_msg_pack_header(void);

/* Symbol: inet_msg_pack_body */
/* Demangled: inet_msg_pack_body */
int inet_msg_pack_body(void);

/* Symbol: inet_msg_is_request */
/* Demangled: inet_msg_is_request */
int inet_msg_is_request(void);

/* Symbol: inet_msg_get_header_field_num */
/* Demangled: inet_msg_get_header_field_num */
int inet_msg_get_header_field_num(void);

/* Symbol: inet_msg_get_header_field */
/* Demangled: inet_msg_get_header_field */
int inet_msg_get_header_field(void);

/* Symbol: inet_msg_header_pack_fn */
/* Demangled: inet_msg_header_pack_fn */
int inet_msg_header_pack_fn(void);

/* Symbol: inet_msg_pack_header_required_size */
/* Demangled: inet_msg_pack_header_required_size */
int inet_msg_pack_header_required_size(void);

/* Symbol: inet_msg_add_header_field */
/* Demangled: inet_msg_add_header_field */
int inet_msg_add_header_field(void);

/* Symbol: inet_msg_is_header_val_int */
/* Demangled: inet_msg_is_header_val_int */
int inet_msg_is_header_val_int(void);

/* Symbol: inet_msg_header_unpack_fn */
/* Demangled: inet_msg_header_unpack_fn */
int inet_msg_header_unpack_fn(void);

/* Symbol: inet_msg_header_val_add_to_list_fn */
/* Demangled: inet_msg_header_val_add_to_list_fn */
int inet_msg_header_val_add_to_list_fn(void);

/* Symbol: inet_msg_rm_header_field */
/* Demangled: inet_msg_rm_header_field */
int inet_msg_rm_header_field(void);

/* Symbol: inet_free_header_struct */
/* Demangled: inet_free_header_struct */
int inet_free_header_struct(void);

/* Symbol: inet_msg_rm_all_header_fields */
/* Demangled: inet_msg_rm_all_header_fields */
int inet_msg_rm_all_header_fields(void);

/* Symbol: inet_msg_cp_header_field */
/* Demangled: inet_msg_cp_header_field */
int inet_msg_cp_header_field(void);

/* Symbol: inet_msg_cp_header_field_alone */
/* Demangled: inet_msg_cp_header_field_alone */
int inet_msg_cp_header_field_alone(void);

/* Symbol: inet_msg_header_val_struct_copy_fn */
/* Demangled: inet_msg_header_val_struct_copy_fn */
int inet_msg_header_val_struct_copy_fn(void);

/* Symbol: inet_msg_get_body_data */
/* Demangled: inet_msg_get_body_data */
int inet_msg_get_body_data(void);

/* Symbol: inet_msg_add_body_data */
/* Demangled: inet_msg_add_body_data */
int inet_msg_add_body_data(void);

/* Symbol: inet_msg_rm_body_file */
/* Demangled: inet_msg_rm_body_file */
int inet_msg_rm_body_file(void);

/* Symbol: inet_msg_cp_body_part */
/* Demangled: inet_msg_cp_body_part */
int inet_msg_cp_body_part(void);

/* Symbol: inet_msg_header_val_struct_free_fn */
/* Demangled: inet_msg_header_val_struct_free_fn */
int inet_msg_header_val_struct_free_fn(void);

/* Symbol: inet_auth_gen_authorization */
/* Demangled: inet_auth_gen_authorization */
int inet_auth_gen_authorization(void);

/* Symbol: inet_auth_calc_hentity */
/* Demangled: inet_auth_calc_hentity */
int inet_auth_calc_hentity(void);

/* Symbol: inet_auth_calc_ha1 */
/* Demangled: inet_auth_calc_ha1 */
int inet_auth_calc_ha1(void);

/* Symbol: inet_auth_calc_digest_response */
/* Demangled: inet_auth_calc_digest_response */
int inet_auth_calc_digest_response(void);

/* Symbol: inet_authorization_struct_free_fn */
/* Demangled: inet_authorization_struct_free_fn */
int inet_authorization_struct_free_fn(void);

/* Symbol: cnonce_base */
/* Demangled: cnonce_base */
extern void* cnonce_base;

/* Symbol: inet_method_name_table */
/* Demangled: inet_method_name_table */
extern void* inet_method_name_table;

/* Symbol: inet_msg_get_body_num */
/* Demangled: inet_msg_get_body_num */
int inet_msg_get_body_num(void);

/* Symbol: inet_kal_uint32_struct_copy_fn */
/* Demangled: inet_kal_uint32_struct_copy_fn */
int inet_kal_uint32_struct_copy_fn(void);

/* Symbol: inet_kal_string_struct_copy_fn */
/* Demangled: inet_kal_string_struct_copy_fn */
int inet_kal_string_struct_copy_fn(void);

/* Symbol: inet_param_struct_copy_fn */
/* Demangled: inet_param_struct_copy_fn */
int inet_param_struct_copy_fn(void);

/* Symbol: inet_param_uri_header_copy_fn */
/* Demangled: inet_param_uri_header_copy_fn */
int inet_param_uri_header_copy_fn(void);

/* Symbol: inet_uri_header_struct_free_fn */
/* Demangled: inet_uri_header_struct_free_fn */
int inet_uri_header_struct_free_fn(void);

/* Symbol: inet_param_list_struct_copy_fn */
/* Demangled: inet_param_list_struct_copy_fn */
int inet_param_list_struct_copy_fn(void);

/* Symbol: inet_param_list_struct_free_fn */
/* Demangled: inet_param_list_struct_free_fn */
int inet_param_list_struct_free_fn(void);

/* Symbol: inet_param_struct_free_fn */
/* Demangled: inet_param_struct_free_fn */
int inet_param_struct_free_fn(void);

/* Symbol: inet_uri_header_list_copy_fn */
/* Demangled: inet_uri_header_list_copy_fn */
int inet_uri_header_list_copy_fn(void);

/* Symbol: inet_int_struct_copy_fn */
/* Demangled: inet_int_struct_copy_fn */
int inet_int_struct_copy_fn(void);

/* Symbol: inet_int_list_struct_copy_fn */
/* Demangled: inet_int_list_struct_copy_fn */
int inet_int_list_struct_copy_fn(void);

/* Symbol: inet_int_list_struct_free_fn */
/* Demangled: inet_int_list_struct_free_fn */
int inet_int_list_struct_free_fn(void);

/* Symbol: inet_int_param_struct_copy_fn */
/* Demangled: inet_int_param_struct_copy_fn */
int inet_int_param_struct_copy_fn(void);

/* Symbol: inet_int_param_struct_free_fn */
/* Demangled: inet_int_param_struct_free_fn */
int inet_int_param_struct_free_fn(void);

/* Symbol: inet_int_param_list_struct_copy_fn */
/* Demangled: inet_int_param_list_struct_copy_fn */
int inet_int_param_list_struct_copy_fn(void);

/* Symbol: inet_int_param_list_struct_free_fn */
/* Demangled: inet_int_param_list_struct_free_fn */
int inet_int_param_list_struct_free_fn(void);

/* Symbol: inet_str_struct_copy_fn */
/* Demangled: inet_str_struct_copy_fn */
int inet_str_struct_copy_fn(void);

/* Symbol: inet_str_struct_free_fn */
/* Demangled: inet_str_struct_free_fn */
int inet_str_struct_free_fn(void);

/* Symbol: inet_str_list_struct_copy_fn */
/* Demangled: inet_str_list_struct_copy_fn */
int inet_str_list_struct_copy_fn(void);

/* Symbol: inet_str_list_struct_free_fn */
/* Demangled: inet_str_list_struct_free_fn */
int inet_str_list_struct_free_fn(void);

/* Symbol: inet_str_param_struct_copy_fn */
/* Demangled: inet_str_param_struct_copy_fn */
int inet_str_param_struct_copy_fn(void);

/* Symbol: inet_str_param_struct_free_fn */
/* Demangled: inet_str_param_struct_free_fn */
int inet_str_param_struct_free_fn(void);

/* Symbol: inet_str_param_list_struct_copy_fn */
/* Demangled: inet_str_param_list_struct_copy_fn */
int inet_str_param_list_struct_copy_fn(void);

/* Symbol: inet_str_param_list_struct_free_fn */
/* Demangled: inet_str_param_list_struct_free_fn */
int inet_str_param_list_struct_free_fn(void);

/* Symbol: inet_int_str_struct_copy_fn */
/* Demangled: inet_int_str_struct_copy_fn */
int inet_int_str_struct_copy_fn(void);

/* Symbol: inet_int_str_list_struct_copy_fn */
/* Demangled: inet_int_str_list_struct_copy_fn */
int inet_int_str_list_struct_copy_fn(void);

/* Symbol: inet_int_str_list_struct_free_fn */
/* Demangled: inet_int_str_list_struct_free_fn */
int inet_int_str_list_struct_free_fn(void);

/* Symbol: inet_uri_struct_copy_fn */
/* Demangled: inet_uri_struct_copy_fn */
int inet_uri_struct_copy_fn(void);

/* Symbol: inet_uri_struct_free_fn */
/* Demangled: inet_uri_struct_free_fn */
int inet_uri_struct_free_fn(void);

/* Symbol: inet_uri_header_list_struct_free_fn */
/* Demangled: inet_uri_header_list_struct_free_fn */
int inet_uri_header_list_struct_free_fn(void);

/* Symbol: inet_authenticate_struct_copy_fn */
/* Demangled: inet_authenticate_struct_copy_fn */
int inet_authenticate_struct_copy_fn(void);

/* Symbol: inet_authenticate_struct_free_fn */
/* Demangled: inet_authenticate_struct_free_fn */
int inet_authenticate_struct_free_fn(void);

/* Symbol: inet_authorization_struct_copy_fn */
/* Demangled: inet_authorization_struct_copy_fn */
int inet_authorization_struct_copy_fn(void);

/* Symbol: inet_authentication_info_struct_copy_fn */
/* Demangled: inet_authentication_info_struct_copy_fn */
int inet_authentication_info_struct_copy_fn(void);

/* Symbol: inet_authentication_info_struct_free_fn */
/* Demangled: inet_authentication_info_struct_free_fn */
int inet_authentication_info_struct_free_fn(void);

/* Symbol: inet_addr_struct_copy_fn */
/* Demangled: inet_addr_struct_copy_fn */
int inet_addr_struct_copy_fn(void);

/* Symbol: inet_addr_struct_free_fn */
/* Demangled: inet_addr_struct_free_fn */
int inet_addr_struct_free_fn(void);

/* Symbol: inet_addr_list_struct_copy_fn */
/* Demangled: inet_addr_list_struct_copy_fn */
int inet_addr_list_struct_copy_fn(void);

/* Symbol: inet_addr_list_struct_free_fn */
/* Demangled: inet_addr_list_struct_free_fn */
int inet_addr_list_struct_free_fn(void);

/* Symbol: inet_content_range_struct_copy_fn */
/* Demangled: inet_content_range_struct_copy_fn */
int inet_content_range_struct_copy_fn(void);

/* Symbol: inet_content_range_struct_free_fn */
/* Demangled: inet_content_range_struct_free_fn */
int inet_content_range_struct_free_fn(void);

/* Symbol: inet_cookie_struct_copy_fn */
/* Demangled: inet_cookie_struct_copy_fn */
int inet_cookie_struct_copy_fn(void);

/* Symbol: inet_cookie_struct_free_fn */
/* Demangled: inet_cookie_struct_free_fn */
int inet_cookie_struct_free_fn(void);

/* Symbol: inet_cookie_list_struct_copy_fn */
/* Demangled: inet_cookie_list_struct_copy_fn */
int inet_cookie_list_struct_copy_fn(void);

/* Symbol: inet_cookie_list_struct_free_fn */
/* Demangled: inet_cookie_list_struct_free_fn */
int inet_cookie_list_struct_free_fn(void);

/* Symbol: inet_content_type_struct_copy_fn */
/* Demangled: inet_content_type_struct_copy_fn */
int inet_content_type_struct_copy_fn(void);

/* Symbol: inet_content_type_struct_free_fn */
/* Demangled: inet_content_type_struct_free_fn */
int inet_content_type_struct_free_fn(void);

/* Symbol: inet_content_type_list_struct_copy_fn */
/* Demangled: inet_content_type_list_struct_copy_fn */
int inet_content_type_list_struct_copy_fn(void);

/* Symbol: inet_content_type_list_struct_free_fn */
/* Demangled: inet_content_type_list_struct_free_fn */
int inet_content_type_list_struct_free_fn(void);

/* Symbol: inet_cseq_struct_copy_fn */
/* Demangled: inet_cseq_struct_copy_fn */
int inet_cseq_struct_copy_fn(void);

/* Symbol: inet_via_struct_copy_fn */
/* Demangled: inet_via_struct_copy_fn */
int inet_via_struct_copy_fn(void);

/* Symbol: inet_via_struct_free_fn */
/* Demangled: inet_via_struct_free_fn */
int inet_via_struct_free_fn(void);

/* Symbol: inet_via_list_struct_copy_fn */
/* Demangled: inet_via_list_struct_copy_fn */
int inet_via_list_struct_copy_fn(void);

/* Symbol: inet_via_list_struct_free_fn */
/* Demangled: inet_via_list_struct_free_fn */
int inet_via_list_struct_free_fn(void);

/* Symbol: inet_retry_after_struct_copy_fn */
/* Demangled: inet_retry_after_struct_copy_fn */
int inet_retry_after_struct_copy_fn(void);

/* Symbol: inet_int_struct_free_fn */
/* Demangled: inet_int_struct_free_fn */
int inet_int_struct_free_fn(void);

/* Symbol: inet_kal_uint32_struct_free_fn */
/* Demangled: inet_kal_uint32_struct_free_fn */
int inet_kal_uint32_struct_free_fn(void);

/* Symbol: inet_kal_string_struct_free_fn */
/* Demangled: inet_kal_string_struct_free_fn */
int inet_kal_string_struct_free_fn(void);

/* Symbol: inet_cseq_struct_free_fn */
/* Demangled: inet_cseq_struct_free_fn */
int inet_cseq_struct_free_fn(void);

/* Symbol: inet_retry_after_struct_free_fn */
/* Demangled: inet_retry_after_struct_free_fn */
int inet_retry_after_struct_free_fn(void);

/* Symbol: inet_add_val_to_addr_list_fn */
/* Demangled: inet_add_val_to_addr_list_fn */
int inet_add_val_to_addr_list_fn(void);

/* Symbol: inet_add_val_to_content_type_list_fn */
/* Demangled: inet_add_val_to_content_type_list_fn */
int inet_add_val_to_content_type_list_fn(void);

/* Symbol: inet_add_val_to_cookie_list_fn */
/* Demangled: inet_add_val_to_cookie_list_fn */
int inet_add_val_to_cookie_list_fn(void);

/* Symbol: inet_add_val_to_int_str_list_fn */
/* Demangled: inet_add_val_to_int_str_list_fn */
int inet_add_val_to_int_str_list_fn(void);

/* Symbol: inet_add_val_to_str_param_list_fn */
/* Demangled: inet_add_val_to_str_param_list_fn */
int inet_add_val_to_str_param_list_fn(void);

/* Symbol: inet_add_val_to_str_list_fn */
/* Demangled: inet_add_val_to_str_list_fn */
int inet_add_val_to_str_list_fn(void);

/* Symbol: inet_add_val_to_via_list_fn */
/* Demangled: inet_add_val_to_via_list_fn */
int inet_add_val_to_via_list_fn(void);

/* Symbol: inet_add_val_to_replaces_list_fn */
/* Demangled: inet_add_val_to_replaces_list_fn */
int inet_add_val_to_replaces_list_fn(void);

/* Symbol: inet_msg_pack_authorization */
/* Demangled: inet_msg_pack_authorization */
int inet_msg_pack_authorization(void);

/* Symbol: inet_msg_pack_string */
/* Demangled: inet_msg_pack_string */
int inet_msg_pack_string(void);

/* Symbol: inet_msg_pack_authenticate */
/* Demangled: inet_msg_pack_authenticate */
int inet_msg_pack_authenticate(void);

/* Symbol: inet_msg_pack_space_string_list */
/* Demangled: inet_msg_pack_space_string_list */
int inet_msg_pack_space_string_list(void);

/* Symbol: inet_msg_pack_authentication_info */
/* Demangled: inet_msg_pack_authentication_info */
int inet_msg_pack_authentication_info(void);

/* Symbol: inet_msg_pack_content_type */
/* Demangled: inet_msg_pack_content_type */
int inet_msg_pack_content_type(void);

/* Symbol: inet_msg_pack_param_list */
/* Demangled: inet_msg_pack_param_list */
int inet_msg_pack_param_list(void);

/* Symbol: inet_msg_pack_content_type_list */
/* Demangled: inet_msg_pack_content_type_list */
int inet_msg_pack_content_type_list(void);

/* Symbol: inet_msg_pack_cseq */
/* Demangled: inet_msg_pack_cseq */
int inet_msg_pack_cseq(void);

/* Symbol: inet_msg_pack_content_range */
/* Demangled: inet_msg_pack_content_range */
int inet_msg_pack_content_range(void);

/* Symbol: inet_msg_pack_via */
/* Demangled: inet_msg_pack_via */
int inet_msg_pack_via(void);

/* Symbol: inet_msg_pack_via_list */
/* Demangled: inet_msg_pack_via_list */
int inet_msg_pack_via_list(void);

/* Symbol: inet_msg_pack_retry_after */
/* Demangled: inet_msg_pack_retry_after */
int inet_msg_pack_retry_after(void);

/* Symbol: inet_msg_pack_if_range */
/* Demangled: inet_msg_pack_if_range */
int inet_msg_pack_if_range(void);

/* Symbol: inet_msg_pack_method */
/* Demangled: inet_msg_pack_method */
int inet_msg_pack_method(void);

/* Symbol: inet_msg_pack_method_list */
/* Demangled: inet_msg_pack_method_list */
int inet_msg_pack_method_list(void);

/* Symbol: inet_msg_pack_cookie */
/* Demangled: inet_msg_pack_cookie */
int inet_msg_pack_cookie(void);

/* Symbol: inet_msg_pack_cache_control */
/* Demangled: inet_msg_pack_cache_control */
int inet_msg_pack_cache_control(void);

/* Symbol: inet_cache_control_name_table */
/* Demangled: inet_cache_control_name_table */
extern void* inet_cache_control_name_table;

/* Symbol: inet_msg_pack_addr_list */
/* Demangled: inet_msg_pack_addr_list */
int inet_msg_pack_addr_list(void);

/* Symbol: inet_msg_pack_uri */
/* Demangled: inet_msg_pack_uri */
int inet_msg_pack_uri(void);

/* Symbol: inet_msg_pack_uri_header_list */
/* Demangled: inet_msg_pack_uri_header_list */
int inet_msg_pack_uri_header_list(void);

/* Symbol: inet_uri_table */
/* Demangled: inet_uri_table */
extern void* inet_uri_table;

/* Symbol: inet_msg_pack_date_string */
/* Demangled: inet_msg_pack_date_string */
int inet_msg_pack_date_string(void);

/* Symbol: inet_msg_header_name_str */
/* Demangled: inet_msg_header_name_str */
int inet_msg_header_name_str(void);

/* Symbol: inet_msg_pack_integer */
/* Demangled: inet_msg_pack_integer */
int inet_msg_pack_integer(void);

/* Symbol: inet_msg_pack_header_name_list */
/* Demangled: inet_msg_pack_header_name_list */
int inet_msg_pack_header_name_list(void);

/* Symbol: inet_msg_pack_rs_value_string_list */
/* Demangled: inet_msg_pack_rs_value_string_list */
int inet_msg_pack_rs_value_string_list(void);

/* Symbol: inet_msg_pack_ac_value_string_list */
/* Demangled: inet_msg_pack_ac_value_string_list */
int inet_msg_pack_ac_value_string_list(void);

/* Symbol: inet_msg_pack_string_list */
/* Demangled: inet_msg_pack_string_list */
int inet_msg_pack_string_list(void);

/* Symbol: inet_msg_pack_str_param */
/* Demangled: inet_msg_pack_str_param */
int inet_msg_pack_str_param(void);

/* Symbol: inet_msg_pack_str_param_list */
/* Demangled: inet_msg_pack_str_param_list */
int inet_msg_pack_str_param_list(void);

/* Symbol: inet_msg_get_compact_header_name */
/* Demangled: inet_msg_get_compact_header_name */
int inet_msg_get_compact_header_name(void);

/* Symbol: inet_msg_get_param_val */
/* Demangled: inet_msg_get_param_val */
int inet_msg_get_param_val(void);

/* Symbol: inet_msg_mime_quote */
/* Demangled: inet_msg_mime_quote */
int inet_msg_mime_quote(void);

/* Symbol: inet_msg_pack_set_additional_user_unreserved_character */
/* Demangled: inet_msg_pack_set_additional_user_unreserved_character */
int inet_msg_pack_set_additional_user_unreserved_character(void);

/* Symbol: inet_msg_get_header_entry */
/* Demangled: inet_msg_get_header_entry */
int inet_msg_get_header_entry(void);

/* Symbol: inet_msg_get_app_header_entry_by_headerid */
/* Demangled: inet_msg_get_app_header_entry_by_headerid */
int inet_msg_get_app_header_entry_by_headerid(void);

/* Symbol: inet_msg_get_app_header_res */
/* Demangled: inet_msg_get_app_header_res */
int inet_msg_get_app_header_res(void);

/* Symbol: inet_msg_header_get_type_by_header_name */
/* Demangled: inet_msg_header_get_type_by_header_name */
int inet_msg_header_get_type_by_header_name(void);

/* Symbol: inet_trans_prot_table */
/* Demangled: inet_trans_prot_table */
extern void* inet_trans_prot_table;

/* Symbol: inet_msg_unpack_content_type_list */
/* Demangled: inet_msg_unpack_content_type_list */
int inet_msg_unpack_content_type_list(void);

/* Symbol: inet_msg_unpack_str_param_list */
/* Demangled: inet_msg_unpack_str_param_list */
int inet_msg_unpack_str_param_list(void);

/* Symbol: inet_msg_unpack_ac_value_string_list */
/* Demangled: inet_msg_unpack_ac_value_string_list */
int inet_msg_unpack_ac_value_string_list(void);

/* Symbol: inet_msg_unpack_string_list */
/* Demangled: inet_msg_unpack_string_list */
int inet_msg_unpack_string_list(void);

/* Symbol: inet_msg_unpack_integer */
/* Demangled: inet_msg_unpack_integer */
int inet_msg_unpack_integer(void);

/* Symbol: inet_msg_unpack_string */
/* Demangled: inet_msg_unpack_string */
int inet_msg_unpack_string(void);

/* Symbol: inet_msg_unpack_method_list */
/* Demangled: inet_msg_unpack_method_list */
int inet_msg_unpack_method_list(void);

/* Symbol: inet_msg_unpack_authentication_info */
/* Demangled: inet_msg_unpack_authentication_info */
int inet_msg_unpack_authentication_info(void);

/* Symbol: inet_msg_unpack_authorization */
/* Demangled: inet_msg_unpack_authorization */
int inet_msg_unpack_authorization(void);

/* Symbol: inet_msg_unpack_cache_control */
/* Demangled: inet_msg_unpack_cache_control */
int inet_msg_unpack_cache_control(void);

/* Symbol: inet_msg_unpack_addr_list */
/* Demangled: inet_msg_unpack_addr_list */
int inet_msg_unpack_addr_list(void);

/* Symbol: inet_msg_unpack_content_type */
/* Demangled: inet_msg_unpack_content_type */
int inet_msg_unpack_content_type(void);

/* Symbol: inet_msg_unpack_uri */
/* Demangled: inet_msg_unpack_uri */
int inet_msg_unpack_uri(void);

/* Symbol: inet_msg_unpack_content_range */
/* Demangled: inet_msg_unpack_content_range */
int inet_msg_unpack_content_range(void);

/* Symbol: inet_msg_unpack_cseq */
/* Demangled: inet_msg_unpack_cseq */
int inet_msg_unpack_cseq(void);

/* Symbol: inet_msg_unpack_date_string */
/* Demangled: inet_msg_unpack_date_string */
int inet_msg_unpack_date_string(void);

/* Symbol: inet_msg_unpack_from_addr_list */
/* Demangled: inet_msg_unpack_from_addr_list */
int inet_msg_unpack_from_addr_list(void);

/* Symbol: inet_msg_unpack_if_range */
/* Demangled: inet_msg_unpack_if_range */
int inet_msg_unpack_if_range(void);

/* Symbol: inet_msg_unpack_authenticate */
/* Demangled: inet_msg_unpack_authenticate */
int inet_msg_unpack_authenticate(void);

/* Symbol: inet_msg_unpack_retry_after */
/* Demangled: inet_msg_unpack_retry_after */
int inet_msg_unpack_retry_after(void);

/* Symbol: inet_msg_unpack_set_cookie_v1 */
/* Demangled: inet_msg_unpack_set_cookie_v1 */
int inet_msg_unpack_set_cookie_v1(void);

/* Symbol: inet_msg_unpack_set_cookie_v2 */
/* Demangled: inet_msg_unpack_set_cookie_v2 */
int inet_msg_unpack_set_cookie_v2(void);

/* Symbol: inet_msg_pack_session_expires */
/* Demangled: inet_msg_pack_session_expires */
int inet_msg_pack_session_expires(void);

/* Symbol: inet_msg_unpack_session_expires */
/* Demangled: inet_msg_unpack_session_expires */
int inet_msg_unpack_session_expires(void);

/* Symbol: inet_session_expires_struct_copy_fn */
/* Demangled: inet_session_expires_struct_copy_fn */
int inet_session_expires_struct_copy_fn(void);

/* Symbol: inet_session_expires_struct_free_fn */
/* Demangled: inet_session_expires_struct_free_fn */
int inet_session_expires_struct_free_fn(void);

/* Symbol: inet_msg_pack_timestamp */
/* Demangled: inet_msg_pack_timestamp */
int inet_msg_pack_timestamp(void);

/* Symbol: inet_msg_unpack_timestamp */
/* Demangled: inet_msg_unpack_timestamp */
int inet_msg_unpack_timestamp(void);

/* Symbol: inet_timestamp_struct_copy_fn */
/* Demangled: inet_timestamp_struct_copy_fn */
int inet_timestamp_struct_copy_fn(void);

/* Symbol: inet_msg_unpack_header_name_list */
/* Demangled: inet_msg_unpack_header_name_list */
int inet_msg_unpack_header_name_list(void);

/* Symbol: inet_msg_unpack_via_list */
/* Demangled: inet_msg_unpack_via_list */
int inet_msg_unpack_via_list(void);

/* Symbol: inet_msg_pack_event */
/* Demangled: inet_msg_pack_event */
int inet_msg_pack_event(void);

/* Symbol: inet_msg_unpack_event */
/* Demangled: inet_msg_unpack_event */
int inet_msg_unpack_event(void);

/* Symbol: inet_event_struct_copy_fn */
/* Demangled: inet_event_struct_copy_fn */
int inet_event_struct_copy_fn(void);

/* Symbol: inet_event_struct_free_fn */
/* Demangled: inet_event_struct_free_fn */
int inet_event_struct_free_fn(void);

/* Symbol: inet_msg_pack_subscription_state */
/* Demangled: inet_msg_pack_subscription_state */
int inet_msg_pack_subscription_state(void);

/* Symbol: inet_msg_unpack_subscription_state */
/* Demangled: inet_msg_unpack_subscription_state */
int inet_msg_unpack_subscription_state(void);

/* Symbol: inet_subscription_state_struct_copy_fn */
/* Demangled: inet_subscription_state_struct_copy_fn */
int inet_subscription_state_struct_copy_fn(void);

/* Symbol: inet_subscription_state_struct_free_fn */
/* Demangled: inet_subscription_state_struct_free_fn */
int inet_subscription_state_struct_free_fn(void);

/* Symbol: inet_answer_mode_struct_copy_fn */
/* Demangled: inet_answer_mode_struct_copy_fn */
int inet_answer_mode_struct_copy_fn(void);

/* Symbol: inet_answer_mode_struct_free_fn */
/* Demangled: inet_answer_mode_struct_free_fn */
int inet_answer_mode_struct_free_fn(void);

/* Symbol: inet_msg_pack_answer_mode */
/* Demangled: inet_msg_pack_answer_mode */
int inet_msg_pack_answer_mode(void);

/* Symbol: inet_msg_unpack_answer_mode */
/* Demangled: inet_msg_unpack_answer_mode */
int inet_msg_unpack_answer_mode(void);

/* Symbol: inet_msg_pack_replaces_list */
/* Demangled: inet_msg_pack_replaces_list */
int inet_msg_pack_replaces_list(void);

/* Symbol: inet_msg_unpack_replaces_list */
/* Demangled: inet_msg_unpack_replaces_list */
int inet_msg_unpack_replaces_list(void);

/* Symbol: inet_replaces_list_struct_copy_fn */
/* Demangled: inet_replaces_list_struct_copy_fn */
int inet_replaces_list_struct_copy_fn(void);

/* Symbol: inet_replaces_list_struct_free_fn */
/* Demangled: inet_replaces_list_struct_free_fn */
int inet_replaces_list_struct_free_fn(void);

/* Symbol: inet_msg_pack_msg_context_struct */
/* Demangled: inet_msg_pack_msg_context_struct */
int inet_msg_pack_msg_context_struct(void);

/* Symbol: inet_msg_unpack_msg_context_struct */
/* Demangled: inet_msg_unpack_msg_context_struct */
int inet_msg_unpack_msg_context_struct(void);

/* Symbol: inet_msg_context_struct_copy_fn */
/* Demangled: inet_msg_context_struct_copy_fn */
int inet_msg_context_struct_copy_fn(void);

/* Symbol: inet_msg_pack_rack */
/* Demangled: inet_msg_pack_rack */
int inet_msg_pack_rack(void);

/* Symbol: inet_msg_unpack_rack */
/* Demangled: inet_msg_unpack_rack */
int inet_msg_unpack_rack(void);

/* Symbol: inet_rack_struct_copy_fn */
/* Demangled: inet_rack_struct_copy_fn */
int inet_rack_struct_copy_fn(void);

/* Symbol: inet_rack_struct_free_fn */
/* Demangled: inet_rack_struct_free_fn */
int inet_rack_struct_free_fn(void);

/* Symbol: inet_msg_pack_rtsp_transport */
/* Demangled: inet_msg_pack_rtsp_transport */
int inet_msg_pack_rtsp_transport(void);

/* Symbol: inet_msg_unpack_rtsp_transport */
/* Demangled: inet_msg_unpack_rtsp_transport */
int inet_msg_unpack_rtsp_transport(void);

/* Symbol: inet_transport_struct_rtsp_copy_fn */
/* Demangled: inet_transport_struct_rtsp_copy_fn */
int inet_transport_struct_rtsp_copy_fn(void);

/* Symbol: inet_transport_struct_rtsp_free_fn */
/* Demangled: inet_transport_struct_rtsp_free_fn */
int inet_transport_struct_rtsp_free_fn(void);

/* Symbol: inet_msg_pack_rtsp_rtpinfo */
/* Demangled: inet_msg_pack_rtsp_rtpinfo */
int inet_msg_pack_rtsp_rtpinfo(void);

/* Symbol: inet_msg_unpack_rtsp_rtpinfo */
/* Demangled: inet_msg_unpack_rtsp_rtpinfo */
int inet_msg_unpack_rtsp_rtpinfo(void);

/* Symbol: inet_rtpinfo_struct_rtsp_copy_fn */
/* Demangled: inet_rtpinfo_struct_rtsp_copy_fn */
int inet_rtpinfo_struct_rtsp_copy_fn(void);

/* Symbol: inet_rtpinfo_struct_rtsp_free_fn */
/* Demangled: inet_rtpinfo_struct_rtsp_free_fn */
int inet_rtpinfo_struct_rtsp_free_fn(void);

/* Symbol: inet_msg_pack_reason_list */
/* Demangled: inet_msg_pack_reason_list */
int inet_msg_pack_reason_list(void);

/* Symbol: inet_msg_unpack_reason_list */
/* Demangled: inet_msg_unpack_reason_list */
int inet_msg_unpack_reason_list(void);

/* Symbol: inet_reason_list_struct_copy_fn */
/* Demangled: inet_reason_list_struct_copy_fn */
int inet_reason_list_struct_copy_fn(void);

/* Symbol: inet_reason_list_struct_free_fn */
/* Demangled: inet_reason_list_struct_free_fn */
int inet_reason_list_struct_free_fn(void);

/* Symbol: inet_add_val_to_reason_list_fn */
/* Demangled: inet_add_val_to_reason_list_fn */
int inet_add_val_to_reason_list_fn(void);

/* Symbol: inet_msg_unpack_rs_value_string_list */
/* Demangled: inet_msg_unpack_rs_value_string_list */
int inet_msg_unpack_rs_value_string_list(void);

/* Symbol: inet_msg_unpack_rtsp_session */
/* Demangled: inet_msg_unpack_rtsp_session */
int inet_msg_unpack_rtsp_session(void);

/* Symbol: inet_msg_pack_rtsp_cseq */
/* Demangled: inet_msg_pack_rtsp_cseq */
int inet_msg_pack_rtsp_cseq(void);

/* Symbol: inet_msg_unpack_rtsp_cseq */
/* Demangled: inet_msg_unpack_rtsp_cseq */
int inet_msg_unpack_rtsp_cseq(void);

/* Symbol: inet_cseq_struct_rtsp_copy_fn */
/* Demangled: inet_cseq_struct_rtsp_copy_fn */
int inet_cseq_struct_rtsp_copy_fn(void);

/* Symbol: inet_cseq_struct_rtsp_free_fn */
/* Demangled: inet_cseq_struct_rtsp_free_fn */
int inet_cseq_struct_rtsp_free_fn(void);

/* Symbol: inet_msg_pack_rtsp_range */
/* Demangled: inet_msg_pack_rtsp_range */
int inet_msg_pack_rtsp_range(void);

/* Symbol: inet_msg_unpack_rtsp_range */
/* Demangled: inet_msg_unpack_rtsp_range */
int inet_msg_unpack_rtsp_range(void);

/* Symbol: inet_range_struct_rtsp_copy_fn */
/* Demangled: inet_range_struct_rtsp_copy_fn */
int inet_range_struct_rtsp_copy_fn(void);

/* Symbol: inet_range_struct_rtsp_free_fn */
/* Demangled: inet_range_struct_rtsp_free_fn */
int inet_range_struct_rtsp_free_fn(void);

/* Symbol: inet_msg_skipcfws2 */
/* Demangled: inet_msg_skipcfws2 */
int inet_msg_skipcfws2(void);

/* Symbol: inet_rtpinfo_element_struct_rtsp_free_fn */
/* Demangled: inet_rtpinfo_element_struct_rtsp_free_fn */
int inet_rtpinfo_element_struct_rtsp_free_fn(void);

/* Symbol: inet_msg_pack_rtsp_rtpinfo_element */
/* Demangled: inet_msg_pack_rtsp_rtpinfo_element */
int inet_msg_pack_rtsp_rtpinfo_element(void);

/* Symbol: __aeabi_l2f */
/* Demangled: __aeabi_l2f */
int __aeabi_l2f(void);

/* Symbol: inet_rtpinfo_element_struct_rtsp_copy_fn */
/* Demangled: inet_rtpinfo_element_struct_rtsp_copy_fn */
int inet_rtpinfo_element_struct_rtsp_copy_fn(void);

/* Symbol: inet_msg_get_compact_header_type */
/* Demangled: inet_msg_get_compact_header_type */
int inet_msg_get_compact_header_type(void);

/* Symbol: inet_msg_unpack_param */
/* Demangled: inet_msg_unpack_param */
int inet_msg_unpack_param(void);

/* Symbol: inet_replaces_struct_free_fn */
/* Demangled: inet_replaces_struct_free_fn */
int inet_replaces_struct_free_fn(void);

/* Symbol: inet_msg_skipfws2 */
/* Demangled: inet_msg_skipfws2 */
int inet_msg_skipfws2(void);

/* Symbol: inet_msg_mime_skipws */
/* Demangled: inet_msg_mime_skipws */
int inet_msg_mime_skipws(void);

/* Symbol: inet_msg_pack_reason */
/* Demangled: inet_msg_pack_reason */
int inet_msg_pack_reason(void);

/* Symbol: inet_replaces_struct_copy_fn */
/* Demangled: inet_replaces_struct_copy_fn */
int inet_replaces_struct_copy_fn(void);

/* Symbol: inet_reason_struct_copy_fn */
/* Demangled: inet_reason_struct_copy_fn */
int inet_reason_struct_copy_fn(void);

/* Symbol: inet_reason_struct_free_fn */
/* Demangled: inet_reason_struct_free_fn */
int inet_reason_struct_free_fn(void);

/* Symbol: inet_msg_get_header_type */
/* Demangled: inet_msg_get_header_type */
int inet_msg_get_header_type(void);

/* Symbol: inet_msg_unpack_space_string_list */
/* Demangled: inet_msg_unpack_space_string_list */
int inet_msg_unpack_space_string_list(void);

/* Symbol: inet_msg_get_token */
/* Demangled: inet_msg_get_token */
int inet_msg_get_token(void);

/* Symbol: inet_msg_unpack_auth_message_qop */
/* Demangled: inet_msg_unpack_auth_message_qop */
int inet_msg_unpack_auth_message_qop(void);

/* Symbol: inet_msg_get_next_token */
/* Demangled: inet_msg_get_next_token */
int inet_msg_get_next_token(void);

/* Symbol: inet_msg_add_int_str_object_to_list */
/* Demangled: inet_msg_add_int_str_object_to_list */
int inet_msg_add_int_str_object_to_list(void);

/* Symbol: inet_msg_skipcfws */
/* Demangled: inet_msg_skipcfws */
int inet_msg_skipcfws(void);

/* Symbol: inet_msg_unpack_uri_with_len */
/* Demangled: inet_msg_unpack_uri_with_len */
int inet_msg_unpack_uri_with_len(void);

/* Symbol: inet_msg_unpack_method */
/* Demangled: inet_msg_unpack_method */
int inet_msg_unpack_method(void);

/* Symbol: inet_msg_unpack_cookie */
/* Demangled: inet_msg_unpack_cookie */
int inet_msg_unpack_cookie(void);

/* Symbol: inet_msg_add_int_object_to_list */
/* Demangled: inet_msg_add_int_object_to_list */
int inet_msg_add_int_object_to_list(void);

/* Symbol: inet_msg_skipws */
/* Demangled: inet_msg_skipws */
int inet_msg_skipws(void);

/* Symbol: inet_msg_unpack_uri_headers */
/* Demangled: inet_msg_unpack_uri_headers */
int inet_msg_unpack_uri_headers(void);

/* Symbol: inet_msg_unpack_req_status_line */
/* Demangled: inet_msg_unpack_req_status_line */
int inet_msg_unpack_req_status_line(void);

/* Symbol: inet_msg_unpack_generic_header */
/* Demangled: inet_msg_unpack_generic_header */
int inet_msg_unpack_generic_header(void);

/* Symbol: inet_msg_get_line */
/* Demangled: inet_msg_get_line */
int inet_msg_get_line(void);

/* Symbol: inet_msg_get_multiline */
/* Demangled: inet_msg_get_multiline */
int inet_msg_get_multiline(void);

/* Symbol: inet_msg_cvt_escape_string_to_normal_string */
/* Demangled: inet_msg_cvt_escape_string_to_normal_string */
int inet_msg_cvt_escape_string_to_normal_string(void);

/* Symbol: _inet_msg_trimcfws */
/* Demangled: _inet_msg_trimcfws */
int _inet_msg_trimcfws(void);

/* Symbol: inet_msg_get_unique_id */
/* Demangled: inet_msg_get_unique_id */
int inet_msg_get_unique_id(void);

/* Symbol: inet_msg_mime_skip_comment */
/* Demangled: inet_msg_mime_skip_comment */
int inet_msg_mime_skip_comment(void);

/* Symbol: inet_msg_ucs2strdup */
/* Demangled: inet_msg_ucs2strdup */
int inet_msg_ucs2strdup(void);

/* Symbol: inet_msg_struct_2_string */
/* Demangled: inet_msg_struct_2_string */
int inet_msg_struct_2_string(void);

/* Symbol: inet_msg_get_header_pack_size */
/* Demangled: inet_msg_get_header_pack_size */
int inet_msg_get_header_pack_size(void);

/* Symbol: inet_msg_get_method_string */
/* Demangled: inet_msg_get_method_string */
int inet_msg_get_method_string(void);

/* Symbol: inet_msg_reverse_addr_list */
/* Demangled: inet_msg_reverse_addr_list */
int inet_msg_reverse_addr_list(void);

/* Symbol: inet_msg_get_param */
/* Demangled: inet_msg_get_param */
int inet_msg_get_param(void);

/* Symbol: inet_cvt_hex */
/* Demangled: inet_cvt_hex */
int inet_cvt_hex(void);

/* Symbol: inet_msg_replace_char_to_tags */
/* Demangled: inet_msg_replace_char_to_tags */
int inet_msg_replace_char_to_tags(void);

/* Symbol: inet_msg_mapping_char_to_ascii */
/* Demangled: inet_msg_mapping_char_to_ascii */
int inet_msg_mapping_char_to_ascii(void);

/* Symbol: inet_cvt_hex_string_to_char_array */
/* Demangled: inet_cvt_hex_string_to_char_array */
int inet_cvt_hex_string_to_char_array(void);

/* Symbol: inet_msg_cvt_normal_string_to_escape_string */
/* Demangled: inet_msg_cvt_normal_string_to_escape_string */
int inet_msg_cvt_normal_string_to_escape_string(void);

/* Symbol: inet_auth_calc_hmac_md5 */
/* Demangled: inet_auth_calc_hmac_md5 */
int inet_auth_calc_hmac_md5(void);

/* Symbol: inet_msg_check_value_in_int_list */
/* Demangled: inet_msg_check_value_in_int_list */
int inet_msg_check_value_in_int_list(void);

/* Symbol: inet_msg_add_param_object_to_list */
/* Demangled: inet_msg_add_param_object_to_list */
int inet_msg_add_param_object_to_list(void);

/* Symbol: inet_msg_rm_param_object_from_list */
/* Demangled: inet_msg_rm_param_object_from_list */
int inet_msg_rm_param_object_from_list(void);

/* Symbol: inet_msg_get_param_object_num */
/* Demangled: inet_msg_get_param_object_num */
int inet_msg_get_param_object_num(void);

/* Symbol: inet_msg_add_str_object_to_list */
/* Demangled: inet_msg_add_str_object_to_list */
int inet_msg_add_str_object_to_list(void);

/* Symbol: inet_msg_rm_str_object_from_list */
/* Demangled: inet_msg_rm_str_object_from_list */
int inet_msg_rm_str_object_from_list(void);

/* Symbol: inet_msg_add_cookie_to_list */
/* Demangled: inet_msg_add_cookie_to_list */
int inet_msg_add_cookie_to_list(void);

/* Symbol: inet_msg_check_value_in_str_list */
/* Demangled: inet_msg_check_value_in_str_list */
int inet_msg_check_value_in_str_list(void);

/* Symbol: inet_msg_check_value_in_int_str_list */
/* Demangled: inet_msg_check_value_in_int_str_list */
int inet_msg_check_value_in_int_str_list(void);

/* Symbol: inet_msg_check_value_in_str_param_list */
/* Demangled: inet_msg_check_value_in_str_param_list */
int inet_msg_check_value_in_str_param_list(void);

/* Symbol: inet_msg_add_header_to_uri */
/* Demangled: inet_msg_add_header_to_uri */
int inet_msg_add_header_to_uri(void);

/* Symbol: sip_inet_errcode_convert */
/* Demangled: sip_inet_errcode_convert */
int sip_inet_errcode_convert(void);

/* Symbol: sip_msg_get_method */
/* Demangled: sip_msg_get_method */
int sip_msg_get_method(void);

/* Symbol: sip_msg_struct_check */
/* Demangled: sip_msg_struct_check */
int sip_msg_struct_check(void);

/* Symbol: sip_msg_get_method_str */
/* Demangled: sip_msg_get_method_str */
int sip_msg_get_method_str(void);

/* Symbol: sip_msg_get_resp_code */
/* Demangled: sip_msg_get_resp_code */
int sip_msg_get_resp_code(void);

/* Symbol: sip_msg_get_cseq_seq */
/* Demangled: sip_msg_get_cseq_seq */
int sip_msg_get_cseq_seq(void);

/* Symbol: sip_msg_get_cseq_method */
/* Demangled: sip_msg_get_cseq_method */
int sip_msg_get_cseq_method(void);

/* Symbol: sip_msg_get_resp_phrase */
/* Demangled: sip_msg_get_resp_phrase */
int sip_msg_get_resp_phrase(void);

/* Symbol: sip_msg_get_uri */
/* Demangled: sip_msg_get_uri */
int sip_msg_get_uri(void);

/* Symbol: sip_msg_generate_random_string */
/* Demangled: sip_msg_generate_random_string */
int sip_msg_generate_random_string(void);

/* Symbol: sip_B64Chars */
/* Demangled: sip_B64Chars */
extern void* sip_B64Chars;

/* Symbol: sip_msg_generate_tag */
/* Demangled: sip_msg_generate_tag */
int sip_msg_generate_tag(void);

/* Symbol: sip_msg_generate_callid */
/* Demangled: sip_msg_generate_callid */
int sip_msg_generate_callid(void);

/* Symbol: sip_msg_generate_branch */
/* Demangled: sip_msg_generate_branch */
int sip_msg_generate_branch(void);

/* Symbol: sip_msg_generate_boundary */
/* Demangled: sip_msg_generate_boundary */
int sip_msg_generate_boundary(void);

/* Symbol: sip_msg_generate_sessionid */
/* Demangled: sip_msg_generate_sessionid */
int sip_msg_generate_sessionid(void);

/* Symbol: sip_SessionID_Chars */
/* Demangled: sip_SessionID_Chars */
extern void* sip_SessionID_Chars;

/* Symbol: sip_msg_copy_uri_alone */
/* Demangled: sip_msg_copy_uri_alone */
int sip_msg_copy_uri_alone(void);

/* Symbol: sip_msg_copy_addr_alone */
/* Demangled: sip_msg_copy_addr_alone */
int sip_msg_copy_addr_alone(void);

/* Symbol: sip_msg_reverse_addr_list */
/* Demangled: sip_msg_reverse_addr_list */
int sip_msg_reverse_addr_list(void);

/* Symbol: sip_via_list_alloc */
/* Demangled: sip_via_list_alloc */
int sip_via_list_alloc(void);

/* Symbol: sip_msg_get_param */
/* Demangled: sip_msg_get_param */
int sip_msg_get_param(void);

/* Symbol: sip_msg_set_method */
/* Demangled: sip_msg_set_method */
int sip_msg_set_method(void);

/* Symbol: sip_msg_set_reg_acct_id */
/* Demangled: sip_msg_set_reg_acct_id */
int sip_msg_set_reg_acct_id(void);

/* Symbol: sip_get_default_status_pharse */
/* Demangled: sip_get_default_status_pharse */
int sip_get_default_status_pharse(void);

/* Symbol: sip_status_phrase_table */
/* Demangled: sip_status_phrase_table */
extern void* sip_status_phrase_table;

/* Symbol: sip_msg_set_resp_code */
/* Demangled: sip_msg_set_resp_code */
int sip_msg_set_resp_code(void);

/* Symbol: sip_msg_set_resp_phrase */
/* Demangled: sip_msg_set_resp_phrase */
int sip_msg_set_resp_phrase(void);

/* Symbol: sip_msg_set_uri */
/* Demangled: sip_msg_set_uri */
int sip_msg_set_uri(void);

/* Symbol: sip_msg_set_uri_str */
/* Demangled: sip_msg_set_uri_str */
int sip_msg_set_uri_str(void);

/* Symbol: sip_msg_set_via */
/* Demangled: sip_msg_set_via */
int sip_msg_set_via(void);

/* Symbol: sip_msg_get_body_data */
/* Demangled: sip_msg_get_body_data */
int sip_msg_get_body_data(void);

/* Symbol: sip_skip_uri_scheme */
/* Demangled: sip_skip_uri_scheme */
int sip_skip_uri_scheme(void);

/* Symbol: sip_replace_realm */
/* Demangled: sip_replace_realm */
int sip_replace_realm(void);

/* Symbol: sip_get_realm */
/* Demangled: sip_get_realm */
int sip_get_realm(void);

/* Symbol: sip_get_username */
/* Demangled: sip_get_username */
int sip_get_username(void);

/* Symbol: sip_get_uri_scheme */
/* Demangled: sip_get_uri_scheme */
int sip_get_uri_scheme(void);

/* Symbol: sip_get_uri_scheme_str */
/* Demangled: sip_get_uri_scheme_str */
int sip_get_uri_scheme_str(void);

/* Symbol: sip_msg_cmp_username_part */
/* Demangled: sip_msg_cmp_username_part */
int sip_msg_cmp_username_part(void);

/* Symbol: sip_msg_unpack_from_addr_list */
/* Demangled: sip_msg_unpack_from_addr_list */
int sip_msg_unpack_from_addr_list(void);

/* Symbol: sip_msg_unpack_history_info_from_addr_list */
/* Demangled: sip_msg_unpack_history_info_from_addr_list */
int sip_msg_unpack_history_info_from_addr_list(void);

/* Symbol: sip_msg_int_add_hdr_4pack */
/* Demangled: sip_msg_int_add_hdr_4pack */
int sip_msg_int_add_hdr_4pack(void);

/* Symbol: sip_msg_pack_required_size */
/* Demangled: sip_msg_pack_required_size */
int sip_msg_pack_required_size(void);

/* Symbol: sip_msg_pack_required_size_compact_headers */
/* Demangled: sip_msg_pack_required_size_compact_headers */
int sip_msg_pack_required_size_compact_headers(void);

/* Symbol: sip_msg_int_pack */
/* Demangled: sip_msg_int_pack */
int sip_msg_int_pack(void);

/* Symbol: sip_msg_pack */
/* Demangled: sip_msg_pack */
int sip_msg_pack(void);

/* Symbol: sip_msg_pack_compact_headers */
/* Demangled: sip_msg_pack_compact_headers */
int sip_msg_pack_compact_headers(void);

/* Symbol: sip_msg_unpack */
/* Demangled: sip_msg_unpack */
int sip_msg_unpack(void);

/* Symbol: sip_msg_int_unpack_body_into_msg */
/* Demangled: sip_msg_int_unpack_body_into_msg */
int sip_msg_int_unpack_body_into_msg(void);

/* Symbol: sip_msg_unpack_body_into_msg */
/* Demangled: sip_msg_unpack_body_into_msg */
int sip_msg_unpack_body_into_msg(void);

/* Symbol: sip_msg_add_addr_to_last_list */
/* Demangled: sip_msg_add_addr_to_last_list */
int sip_msg_add_addr_to_last_list(void);

/* Symbol: sip_msg_rm_1st_addr_from_list */
/* Demangled: sip_msg_rm_1st_addr_from_list */
int sip_msg_rm_1st_addr_from_list(void);

/* Symbol: sip_msg_free_addr_list */
/* Demangled: sip_msg_free_addr_list */
int sip_msg_free_addr_list(void);

/* Symbol: sip_is_addr_contain_lr */
/* Demangled: sip_is_addr_contain_lr */
int sip_is_addr_contain_lr(void);

/* Symbol: sip_msg_is_valid_uri */
/* Demangled: sip_msg_is_valid_uri */
int sip_msg_is_valid_uri(void);

/* Symbol: sip_msg_new_uri */
/* Demangled: sip_msg_new_uri */
int sip_msg_new_uri(void);

/* Symbol: sip_msg_content_type_compatible */
/* Demangled: sip_msg_content_type_compatible */
int sip_msg_content_type_compatible(void);

/* Symbol: sip_msg_get_body_by_content_type */
/* Demangled: sip_msg_get_body_by_content_type */
int sip_msg_get_body_by_content_type(void);

/* Symbol: sip_msg_new_addr_list */
/* Demangled: sip_msg_new_addr_list */
int sip_msg_new_addr_list(void);

/* Symbol: sip_msg_free_uri */
/* Demangled: sip_msg_free_uri */
int sip_msg_free_uri(void);

/* Symbol: sip_msg_new_addr_list_from_uri */
/* Demangled: sip_msg_new_addr_list_from_uri */
int sip_msg_new_addr_list_from_uri(void);

/* Symbol: sip_msg_new_uri_from_addr_list */
/* Demangled: sip_msg_new_uri_from_addr_list */
int sip_msg_new_uri_from_addr_list(void);

/* Symbol: sip_msg_uri_cmp */
/* Demangled: sip_msg_uri_cmp */
int sip_msg_uri_cmp(void);

/* Symbol: sip_msg_host_ipv6_addr_compare */
/* Demangled: sip_msg_host_ipv6_addr_compare */
int sip_msg_host_ipv6_addr_compare(void);

/* Symbol: sip_msg_is_within_dialog */
/* Demangled: sip_msg_is_within_dialog */
int sip_msg_is_within_dialog(void);

/* Symbol: sip_msg_set_strict_routing */
/* Demangled: sip_msg_set_strict_routing */
int sip_msg_set_strict_routing(void);

/* Symbol: sip_msg_get_strict_routing */
/* Demangled: sip_msg_get_strict_routing */
int sip_msg_get_strict_routing(void);

/* Symbol: uas_check_accept_header */
/* Demangled: uas_check_accept_header */
int uas_check_accept_header(void);

/* Symbol: sip_ua_string */
/* Demangled: sip_ua_string */
extern void* sip_ua_string;

/* Symbol: sip_get_msg_body_type */
/* Demangled: sip_get_msg_body_type */
int sip_get_msg_body_type(void);

/* Symbol: sip_msg_set_content_type_multipart_mixed */
/* Demangled: sip_msg_set_content_type_multipart_mixed */
int sip_msg_set_content_type_multipart_mixed(void);

/* Symbol: uas_check_content_type */
/* Demangled: uas_check_content_type */
int uas_check_content_type(void);

/* Symbol: uas_check_option_tags */
/* Demangled: uas_check_option_tags */
int uas_check_option_tags(void);

/* Symbol: uas_check_allow_header */
/* Demangled: uas_check_allow_header */
int uas_check_allow_header(void);

/* Symbol: sip_get_TAG_in_header */
/* Demangled: sip_get_TAG_in_header */
int sip_get_TAG_in_header(void);

/* Symbol: sip_check_recv_message */
/* Demangled: sip_check_recv_message */
int sip_check_recv_message(void);

/* Symbol: sip_check_request_message */
/* Demangled: sip_check_request_message */
int sip_check_request_message(void);

/* Symbol: sip_replace_suppt_message */
/* Demangled: sip_replace_suppt_message */
int sip_replace_suppt_message(void);

/* Symbol: sip_add_tag */
/* Demangled: sip_add_tag */
int sip_add_tag(void);

/* Symbol: sip_replace_tag */
/* Demangled: sip_replace_tag */
int sip_replace_tag(void);

/* Symbol: sip_perform_body_length_checking */
/* Demangled: sip_perform_body_length_checking */
int sip_perform_body_length_checking(void);

/* Symbol: sip_perform_ack_for_ts */
/* Demangled: sip_perform_ack_for_ts */
int sip_perform_ack_for_ts(void);

/* Symbol: sip_perform_default_port */
/* Demangled: sip_perform_default_port */
int sip_perform_default_port(void);

/* Symbol: sip_msg_free_via_list */
/* Demangled: sip_msg_free_via_list */
int sip_msg_free_via_list(void);

/* Symbol: sip_msg_copy_uri_by_struct */
/* Demangled: sip_msg_copy_uri_by_struct */
int sip_msg_copy_uri_by_struct(void);

/* Symbol: sip_msg_unpack_header_for_notify */
/* Demangled: sip_msg_unpack_header_for_notify */
int sip_msg_unpack_header_for_notify(void);

/* Symbol: sip_msg_free_authenticate_struct */
/* Demangled: sip_msg_free_authenticate_struct */
int sip_msg_free_authenticate_struct(void);

/* Symbol: sip_msg_free_authorization_struct */
/* Demangled: sip_msg_free_authorization_struct */
int sip_msg_free_authorization_struct(void);

/* Symbol: sip_msg_copy_param_list_struct */
/* Demangled: sip_msg_copy_param_list_struct */
int sip_msg_copy_param_list_struct(void);

/* Symbol: sip_msg_free_int_str_struct */
/* Demangled: sip_msg_free_int_str_struct */
int sip_msg_free_int_str_struct(void);

/* Symbol: sip_encode_call_uri */
/* Demangled: sip_encode_call_uri */
int sip_encode_call_uri(void);

/* Symbol: sip_decode_call_uri */
/* Demangled: sip_decode_call_uri */
int sip_decode_call_uri(void);

/* Symbol: sip_decode_replaces */
/* Demangled: sip_decode_replaces */
int sip_decode_replaces(void);

/* Symbol: sip_create_and_init_response */
/* Demangled: sip_create_and_init_response */
int sip_create_and_init_response(void);

/* Symbol: SIP_msg_struct_create */
/* Demangled: SIP_msg_struct_create */
int SIP_msg_struct_create(void);

/* Symbol: SIP_msg_struct_destroy */
/* Demangled: SIP_msg_struct_destroy */
int SIP_msg_struct_destroy(void);

/* Symbol: sip_msg_copy_headers_from_reqmsg */
/* Demangled: sip_msg_copy_headers_from_reqmsg */
int sip_msg_copy_headers_from_reqmsg(void);

/* Symbol: sip_msg_add_headers_from_setting */
/* Demangled: sip_msg_add_headers_from_setting */
int sip_msg_add_headers_from_setting(void);

/* Symbol: sip_msg_get_contact_expires */
/* Demangled: sip_msg_get_contact_expires */
int sip_msg_get_contact_expires(void);

/* Symbol: sip_msg_set_request_uri */
/* Demangled: sip_msg_set_request_uri */
int sip_msg_set_request_uri(void);

/* Symbol: sip_msg_set_cseq */
/* Demangled: sip_msg_set_cseq */
int sip_msg_set_cseq(void);

/* Symbol: sip_msg_update_cseq */
/* Demangled: sip_msg_update_cseq */
int sip_msg_update_cseq(void);

/* Symbol: sip_msg_update_expires */
/* Demangled: sip_msg_update_expires */
int sip_msg_update_expires(void);

/* Symbol: sip_msg_update_callid */
/* Demangled: sip_msg_update_callid */
int sip_msg_update_callid(void);

/* Symbol: sip_msg_uri_ipv6_addr_compare */
/* Demangled: sip_msg_uri_ipv6_addr_compare */
int sip_msg_uri_ipv6_addr_compare(void);

/* Symbol: sip_msg_count_headers */
/* Demangled: sip_msg_count_headers */
int sip_msg_count_headers(void);

/* Symbol: sip_msg_remove_duplicate_from_to_addr */
/* Demangled: sip_msg_remove_duplicate_from_to_addr */
int sip_msg_remove_duplicate_from_to_addr(void);

/* Symbol: sip_msg_is_bad_request */
/* Demangled: sip_msg_is_bad_request */
int sip_msg_is_bad_request(void);

/* Symbol: sip_msg_is_replaces_header_valid */
/* Demangled: sip_msg_is_replaces_header_valid */
int sip_msg_is_replaces_header_valid(void);

/* Symbol: sip_msg_is_version_supported */
/* Demangled: sip_msg_is_version_supported */
int sip_msg_is_version_supported(void);

/* Symbol: sip_msg_is_option_known */
/* Demangled: sip_msg_is_option_known */
int sip_msg_is_option_known(void);

/* Symbol: known_option_tags */
/* Demangled: known_option_tags */
extern void* known_option_tags;

/* Symbol: sip_msg_are_require_options_known */
/* Demangled: sip_msg_are_require_options_known */
int sip_msg_are_require_options_known(void);

/* Symbol: sip_msg_add_unsupported_header */
/* Demangled: sip_msg_add_unsupported_header */
int sip_msg_add_unsupported_header(void);

/* Symbol: sip_msg_call_id_compare */
/* Demangled: sip_msg_call_id_compare */
int sip_msg_call_id_compare(void);

/* Symbol: sip_msg_token_compare */
/* Demangled: sip_msg_token_compare */
int sip_msg_token_compare(void);

/* Symbol: sip_msg_iso3166_1_alpha_2_from_mcc */
/* Demangled: sip_msg_iso3166_1_alpha_2_from_mcc */
int sip_msg_iso3166_1_alpha_2_from_mcc(void);

/* Symbol: sip_msg_addr_reset_param_list */
/* Demangled: sip_msg_addr_reset_param_list */
int sip_msg_addr_reset_param_list(void);

/* Symbol: sip_msg_get_reason_header_cause_number */
/* Demangled: sip_msg_get_reason_header_cause_number */
int sip_msg_get_reason_header_cause_number(void);

/* Symbol: sip_msg_addr_add_header_to_uri */
/* Demangled: sip_msg_addr_add_header_to_uri */
int sip_msg_addr_add_header_to_uri(void);

/* Symbol: sip_msg_uri_reset_header_list */
/* Demangled: sip_msg_uri_reset_header_list */
int sip_msg_uri_reset_header_list(void);

/* Symbol: sip_msg_uri_remove_from_param_list */
/* Demangled: sip_msg_uri_remove_from_param_list */
int sip_msg_uri_remove_from_param_list(void);

/* Symbol: sip_msg_get_retry_after_time */
/* Demangled: sip_msg_get_retry_after_time */
int sip_msg_get_retry_after_time(void);

/* Symbol: sip_msg_set_reason_header */
/* Demangled: sip_msg_set_reason_header */
int sip_msg_set_reason_header(void);

/* Symbol: sip_msg_check_response_source */
/* Demangled: sip_msg_check_response_source */
int sip_msg_check_response_source(void);

/* Symbol: sip_msg_copy_uri_from_addr_list_by_scheme */
/* Demangled: sip_msg_copy_uri_from_addr_list_by_scheme */
int sip_msg_copy_uri_from_addr_list_by_scheme(void);

/* Symbol: sip_msg_convert_tel_to_sip_uri */
/* Demangled: sip_msg_convert_tel_to_sip_uri */
int sip_msg_convert_tel_to_sip_uri(void);

/* Symbol: sip_msg_warning_header_parser */
/* Demangled: sip_msg_warning_header_parser */
int sip_msg_warning_header_parser(void);

/* Symbol: sip_msg_struct_init */
/* Demangled: sip_msg_struct_init */
int sip_msg_struct_init(void);

/* Symbol: sip_msg_struct_get_max */
/* Demangled: sip_msg_struct_get_max */
int sip_msg_struct_get_max(void);

/* Symbol: sip_msg_struct_get_used */
/* Demangled: sip_msg_struct_get_used */
int sip_msg_struct_get_used(void);

/* Symbol: sip_msg_struct_dump */
/* Demangled: sip_msg_struct_dump */
int sip_msg_struct_dump(void);

/* Symbol: sip_msg_struct_clear_all_index */
/* Demangled: sip_msg_struct_clear_all_index */
int sip_msg_struct_clear_all_index(void);

/* Symbol: sip_msg_log */
/* Demangled: sip_msg_log */
int sip_msg_log(void);

/* Symbol: sip_msg_struct_clear_reg_msg_index_by_account */
/* Demangled: sip_msg_struct_clear_reg_msg_index_by_account */
int sip_msg_struct_clear_reg_msg_index_by_account(void);

/* Symbol: SIP_msg_struct_copy */
/* Demangled: SIP_msg_struct_copy */
int SIP_msg_struct_copy(void);

/* Symbol: sip_msg_struct_status */
/* Demangled: sip_msg_struct_status */
int sip_msg_struct_status(void);

/* Symbol: sip_msg_status_get */
/* Demangled: sip_msg_status_get */
int sip_msg_status_get(void);

/* Symbol: rt_malloc */
/* Demangled: rt_malloc */
int rt_malloc(void);

/* Symbol: rt_free */
/* Demangled: rt_free */
int rt_free(void);

/* Symbol: Rule_Append_RuleSet_with_Single_Header_Param */
/* Demangled: Rule_Append_RuleSet_with_Single_Header_Param */
int Rule_Append_RuleSet_with_Single_Header_Param(void);

/* Symbol: RuleCond_Create */
/* Demangled: RuleCond_Create */
int RuleCond_Create(void);

/* Symbol: RuleItem_Create */
/* Demangled: RuleItem_Create */
int RuleItem_Create(void);

/* Symbol: RuleItem_SetRuleCond */
/* Demangled: RuleItem_SetRuleCond */
int RuleItem_SetRuleCond(void);

/* Symbol: Level2_GetRuleSetbyMethod */
/* Demangled: Level2_GetRuleSetbyMethod */
int Level2_GetRuleSetbyMethod(void);

/* Symbol: RuleSet_SetRuleItem */
/* Demangled: RuleSet_SetRuleItem */
int RuleSet_SetRuleItem(void);

/* Symbol: RuleSet_Create */
/* Demangled: RuleSet_Create */
int RuleSet_Create(void);

/* Symbol: Level2_SetRuleSet */
/* Demangled: Level2_SetRuleSet */
int Level2_SetRuleSet(void);

/* Symbol: RuleSet_Delete */
/* Demangled: RuleSet_Delete */
int RuleSet_Delete(void);

/* Symbol: Rule_Append_RuleSet_with_Multi_Header_Param */
/* Demangled: Rule_Append_RuleSet_with_Multi_Header_Param */
int Rule_Append_RuleSet_with_Multi_Header_Param(void);

/* Symbol: Rule_Replace_RuleSet_with_Single_Header_Param */
/* Demangled: Rule_Replace_RuleSet_with_Single_Header_Param */
int Rule_Replace_RuleSet_with_Single_Header_Param(void);

/* Symbol: Rule_Replace_RuleSet_with_Multi_Header_Param */
/* Demangled: Rule_Replace_RuleSet_with_Multi_Header_Param */
int Rule_Replace_RuleSet_with_Multi_Header_Param(void);

/* Symbol: Level2_Create */
/* Demangled: Level2_Create */
int Level2_Create(void);

/* Symbol: Level2_Delete */
/* Demangled: Level2_Delete */
int Level2_Delete(void);

/* Symbol: RuleItem_Delete */
/* Demangled: RuleItem_Delete */
int RuleItem_Delete(void);

/* Symbol: Level2_GetRuleSetbyIndex */
/* Demangled: Level2_GetRuleSetbyIndex */
int Level2_GetRuleSetbyIndex(void);

/* Symbol: Level2_RemoveRuleSetbyMethod */
/* Demangled: Level2_RemoveRuleSetbyMethod */
int Level2_RemoveRuleSetbyMethod(void);

/* Symbol: Level2_PackAll */
/* Demangled: Level2_PackAll */
int Level2_PackAll(void);

/* Symbol: RuleSet_PackAll */
/* Demangled: RuleSet_PackAll */
int RuleSet_PackAll(void);

/* Symbol: RuleItem_PackAll */
/* Demangled: RuleItem_PackAll */
int RuleItem_PackAll(void);

/* Symbol: Level2_Unpack2Level2 */
/* Demangled: Level2_Unpack2Level2 */
int Level2_Unpack2Level2(void);

/* Symbol: RuleSet_Unpack2Level2 */
/* Demangled: RuleSet_Unpack2Level2 */
int RuleSet_Unpack2Level2(void);

/* Symbol: RuleItem_Unpack2Set */
/* Demangled: RuleItem_Unpack2Set */
int RuleItem_Unpack2Set(void);

/* Symbol: Level2_MemDump */
/* Demangled: Level2_MemDump */
int Level2_MemDump(void);

/* Symbol: Level2_StructDumpAll */
/* Demangled: Level2_StructDumpAll */
int Level2_StructDumpAll(void);

/* Symbol: RuleCond_Delete */
/* Demangled: RuleCond_Delete */
int RuleCond_Delete(void);

/* Symbol: RuleSet_DeleteAll */
/* Demangled: RuleSet_DeleteAll */
int RuleSet_DeleteAll(void);

/* Symbol: RuleItem_DeleteAll */
/* Demangled: RuleItem_DeleteAll */
int RuleItem_DeleteAll(void);

/* Symbol: RuleCond_DeleteAll */
/* Demangled: RuleCond_DeleteAll */
int RuleCond_DeleteAll(void);

/* Symbol: RuleSet_GetRuleItembyIndex */
/* Demangled: RuleSet_GetRuleItembyIndex */
int RuleSet_GetRuleItembyIndex(void);

/* Symbol: RuleSet_RemoveRuleItembyIndex */
/* Demangled: RuleSet_RemoveRuleItembyIndex */
int RuleSet_RemoveRuleItembyIndex(void);

/* Symbol: RuleCond_PackAll */
/* Demangled: RuleCond_PackAll */
int RuleCond_PackAll(void);

/* Symbol: RuleSet_Unpack2Set */
/* Demangled: RuleSet_Unpack2Set */
int RuleSet_Unpack2Set(void);

/* Symbol: RuleCond_Unpack2Item */
/* Demangled: RuleCond_Unpack2Item */
int RuleCond_Unpack2Item(void);

/* Symbol: RuleSet_MemDump */
/* Demangled: RuleSet_MemDump */
int RuleSet_MemDump(void);

/* Symbol: RuleSet_StructDumpAll */
/* Demangled: RuleSet_StructDumpAll */
int RuleSet_StructDumpAll(void);

/* Symbol: RuleItem_GetRuleCondbyHeader */
/* Demangled: RuleItem_GetRuleCondbyHeader */
int RuleItem_GetRuleCondbyHeader(void);

/* Symbol: RuleItem_MemDump */
/* Demangled: RuleItem_MemDump */
int RuleItem_MemDump(void);

/* Symbol: RuleItem_StructDumpAll */
/* Demangled: RuleItem_StructDumpAll */
int RuleItem_StructDumpAll(void);

/* Symbol: RuleItem_Unpack2Item */
/* Demangled: RuleItem_Unpack2Item */
int RuleItem_Unpack2Item(void);

/* Symbol: RuleCond_SetParam */
/* Demangled: RuleCond_SetParam */
int RuleCond_SetParam(void);

/* Symbol: RuleCond_StructDumpSingle */
/* Demangled: RuleCond_StructDumpSingle */
int RuleCond_StructDumpSingle(void);

/* Symbol: RuleCond_StructDumpAll */
/* Demangled: RuleCond_StructDumpAll */
int RuleCond_StructDumpAll(void);

/* Symbol: RuleCond_MemDump */
/* Demangled: RuleCond_MemDump */
int RuleCond_MemDump(void);

/* Symbol: RuleCond_PackSingle */
/* Demangled: RuleCond_PackSingle */
int RuleCond_PackSingle(void);

/* Symbol: RuleCond_Unpack2Cond */
/* Demangled: RuleCond_Unpack2Cond */
int RuleCond_Unpack2Cond(void);

/* Symbol: Rule_Capability_Init */
/* Demangled: Rule_Capability_Init */
int Rule_Capability_Init(void);

/* Symbol: Rule_Capability_Deinit */
/* Demangled: Rule_Capability_Deinit */
int Rule_Capability_Deinit(void);

/* Symbol: Rule_Level0_Set */
/* Demangled: Rule_Level0_Set */
int Rule_Level0_Set(void);

/* Symbol: Rule_Level1_Set */
/* Demangled: Rule_Level1_Set */
int Rule_Level1_Set(void);

/* Symbol: Rule_Level2_Set */
/* Demangled: Rule_Level2_Set */
int Rule_Level2_Set(void);

/* Symbol: Rule_Level2_Append_with_Single_Header_Filed */
/* Demangled: Rule_Level2_Append_with_Single_Header_Filed */
int Rule_Level2_Append_with_Single_Header_Filed(void);

/* Symbol: Rule_Level2_Append_with_Multi_Header_Fileds */
/* Demangled: Rule_Level2_Append_with_Multi_Header_Fileds */
int Rule_Level2_Append_with_Multi_Header_Fileds(void);

/* Symbol: Rule_Level2_Replace_with_Single_Header_Filed */
/* Demangled: Rule_Level2_Replace_with_Single_Header_Filed */
int Rule_Level2_Replace_with_Single_Header_Filed(void);

/* Symbol: Rule_Level2_Replace_with_Multi_Header_Fileds */
/* Demangled: Rule_Level2_Replace_with_Multi_Header_Fileds */
int Rule_Level2_Replace_with_Multi_Header_Fileds(void);

/* Symbol: Rule_Level3_Set */
/* Demangled: Rule_Level3_Set */
int Rule_Level3_Set(void);

/* Symbol: Rule_Capability_Pack */
/* Demangled: Rule_Capability_Pack */
int Rule_Capability_Pack(void);

/* Symbol: volte_service_create */
/* Demangled: volte_service_create */
int volte_service_create(void);

/* Symbol: volte_service_send_msg */
/* Demangled: volte_service_send_msg */
int volte_service_send_msg(void);

/* Symbol: volte_service_destroy */
/* Demangled: volte_service_destroy */
int volte_service_destroy(void);

/* Symbol: volte_service_send_msg_by_channel */
/* Demangled: volte_service_send_msg_by_channel */
int volte_service_send_msg_by_channel(void);

/* Symbol: volte_service_listen */
/* Demangled: volte_service_listen */
int volte_service_listen(void);

/* Symbol: VoLTE_Event_Reg_State_s */
/* Demangled: VoLTE_Event_Reg_State_s */
extern void* VoLTE_Event_Reg_State_s;

/* Symbol: volte_sip_stack_msgq_handler */
/* Demangled: volte_sip_stack_msgq_handler */
int volte_sip_stack_msgq_handler(void);

/* Symbol: _volte_sip_stack_create */
/* Demangled: _volte_sip_stack_create */
int _volte_sip_stack_create(void);

/* Symbol: volte_sip_stack_destroy */
/* Demangled: volte_sip_stack_destroy */
int volte_sip_stack_destroy(void);

/* Symbol: volte_sip_stack_disconnect */
/* Demangled: volte_sip_stack_disconnect */
int volte_sip_stack_disconnect(void);

/* Symbol: volte_sip_stack_connect */
/* Demangled: volte_sip_stack_connect */
int volte_sip_stack_connect(void);

/* Symbol: volte_reg_del_wait_conn */
/* Demangled: volte_reg_del_wait_conn */
int volte_reg_del_wait_conn(void);

/* Symbol: volte_sip_stack_disconnect_without_del_conn */
/* Demangled: volte_sip_stack_disconnect_without_del_conn */
int volte_sip_stack_disconnect_without_del_conn(void);

/* Symbol: volte_sip_stack_ipsec_setup */
/* Demangled: volte_sip_stack_ipsec_setup */
int volte_sip_stack_ipsec_setup(void);

/* Symbol: volte_sip_stack_ipsec_change_to_regular */
/* Demangled: volte_sip_stack_ipsec_change_to_regular */
int volte_sip_stack_ipsec_change_to_regular(void);

/* Symbol: volte_sip_stack_ipsec_refresh */
/* Demangled: volte_sip_stack_ipsec_refresh */
int volte_sip_stack_ipsec_refresh(void);

/* Symbol: volte_sip_stack_ipsec_connect */
/* Demangled: volte_sip_stack_ipsec_connect */
int volte_sip_stack_ipsec_connect(void);

/* Symbol: volte_sip_stack_ipsec_delete */
/* Demangled: volte_sip_stack_ipsec_delete */
int volte_sip_stack_ipsec_delete(void);

/* Symbol: volte_sip_stack_ipsec_clear */
/* Demangled: volte_sip_stack_ipsec_clear */
int volte_sip_stack_ipsec_clear(void);

/* Symbol: volte_sip_stack_reset_tcp_client */
/* Demangled: volte_sip_stack_reset_tcp_client */
int volte_sip_stack_reset_tcp_client(void);

/* Symbol: volte_sip_stack_update_setting */
/* Demangled: volte_sip_stack_update_setting */
int volte_sip_stack_update_setting(void);

/* Symbol: volte_sip_stack_reg_bind */
/* Demangled: volte_sip_stack_reg_bind */
int volte_sip_stack_reg_bind(void);

/* Symbol: volte_sip_stack_reg_unbind */
/* Demangled: volte_sip_stack_reg_unbind */
int volte_sip_stack_reg_unbind(void);

/* Symbol: volte_sip_stack_reg_connect */
/* Demangled: volte_sip_stack_reg_connect */
int volte_sip_stack_reg_connect(void);

/* Symbol: volte_sip_stack_reg_disconnect */
/* Demangled: volte_sip_stack_reg_disconnect */
int volte_sip_stack_reg_disconnect(void);

/* Symbol: volte_sip_stack_update_rcs_state_to_dispatcher */
/* Demangled: volte_sip_stack_update_rcs_state_to_dispatcher */
int volte_sip_stack_update_rcs_state_to_dispatcher(void);

/* Symbol: volte_sip_stack_reg_capability */
/* Demangled: volte_sip_stack_reg_capability */
int volte_sip_stack_reg_capability(void);

/* Symbol: volte_sip_stack_reg_operation */
/* Demangled: volte_sip_stack_reg_operation */
int volte_sip_stack_reg_operation(void);

/* Symbol: volte_sip_stack_reg_state */
/* Demangled: volte_sip_stack_reg_state */
int volte_sip_stack_reg_state(void);

/* Symbol: volte_sip_stack_start_keep_alive */
/* Demangled: volte_sip_stack_start_keep_alive */
int volte_sip_stack_start_keep_alive(void);

/* Symbol: volte_sip_stack_stop_keep_alive */
/* Demangled: volte_sip_stack_stop_keep_alive */
int volte_sip_stack_stop_keep_alive(void);

/* Symbol: volte_sip_stack_query_reg_ready */
/* Demangled: volte_sip_stack_query_reg_ready */
int volte_sip_stack_query_reg_ready(void);

/* Symbol: volte_sip_stack_query_if_em_ts_exist */
/* Demangled: volte_sip_stack_query_if_em_ts_exist */
int volte_sip_stack_query_if_em_ts_exist(void);

/* Symbol: volte_sip_stack_send_sip */
/* Demangled: volte_sip_stack_send_sip */
int volte_sip_stack_send_sip(void);

/* Symbol: volte_sip_stack_abort_sip_request */
/* Demangled: volte_sip_stack_abort_sip_request */
int volte_sip_stack_abort_sip_request(void);

/* Symbol: volte_sip_stack_ind_sip_by_channel */
/* Demangled: volte_sip_stack_ind_sip_by_channel */
int volte_sip_stack_ind_sip_by_channel(void);

/* Symbol: volte_sip_stack_send_msg */
/* Demangled: volte_sip_stack_send_msg */
int volte_sip_stack_send_msg(void);

/* Symbol: volte_sip_stack_send_msg_by_channel */
/* Demangled: volte_sip_stack_send_msg_by_channel */
int volte_sip_stack_send_msg_by_channel(void);

/* Symbol: volte_sip_stack_listen */
/* Demangled: volte_sip_stack_listen */
int volte_sip_stack_listen(void);

/* Symbol: volte_sip_stack_wait */
/* Demangled: volte_sip_stack_wait */
int volte_sip_stack_wait(void);

/* Symbol: volte_sip_info_from_sipmsg */
/* Demangled: volte_sip_info_from_sipmsg */
int volte_sip_info_from_sipmsg(void);

/* Symbol: volte_sip_info_to_sipmsg */
/* Demangled: volte_sip_info_to_sipmsg */
int volte_sip_info_to_sipmsg(void);

/* Symbol: volte_sip_info_free */
/* Demangled: volte_sip_info_free */
int volte_sip_info_free(void);

/* Symbol: volte_sipmsg_free */
/* Demangled: volte_sipmsg_free */
int volte_sipmsg_free(void);

/* Symbol: volte_sipmsg_set_pei_info */
/* Demangled: volte_sipmsg_set_pei_info */
int volte_sipmsg_set_pei_info(void);

/* Symbol: volte_sipmsg_set_network_info */
/* Demangled: volte_sipmsg_set_network_info */
int volte_sipmsg_set_network_info(void);

/* Symbol: volte_sipmsg_set_pani_header */
/* Demangled: volte_sipmsg_set_pani_header */
int volte_sipmsg_set_pani_header(void);

/* Symbol: volte_sipmsg_set_3gpp_network_info_with_pani */
/* Demangled: volte_sipmsg_set_3gpp_network_info_with_pani */
int volte_sipmsg_set_3gpp_network_info_with_pani(void);

/* Symbol: volte_is_iso3166_1_alpha_2_country */
/* Demangled: volte_is_iso3166_1_alpha_2_country */
int volte_is_iso3166_1_alpha_2_country(void);

/* Symbol: volte_convert_mcc_to_country_code */
/* Demangled: volte_convert_mcc_to_country_code */
int volte_convert_mcc_to_country_code(void);

/* Symbol: volte_sipmsg_add_country_string_to_pani */
/* Demangled: volte_sipmsg_add_country_string_to_pani */
int volte_sipmsg_add_country_string_to_pani(void);

/* Symbol: volte_sipmsg_add_local_time_zone_to_pani */
/* Demangled: volte_sipmsg_add_local_time_zone_to_pani */
int volte_sipmsg_add_local_time_zone_to_pani(void);

/* Symbol: volte_gen_local_time_zone */
/* Demangled: volte_gen_local_time_zone */
int volte_gen_local_time_zone(void);

/* Symbol: volte_sipmsg_add_accept_contact_preference */
/* Demangled: volte_sipmsg_add_accept_contact_preference */
int volte_sipmsg_add_accept_contact_preference(void);

/* Symbol: volte_sipmsg_add_country_from_cell_to_pani */
/* Demangled: volte_sipmsg_add_country_from_cell_to_pani */
int volte_sipmsg_add_country_from_cell_to_pani(void);

/* Symbol: volte_sipmsg_add_cellid_to_pani */
/* Demangled: volte_sipmsg_add_cellid_to_pani */
int volte_sipmsg_add_cellid_to_pani(void);

/* Symbol: volte_gen_timestamp */
/* Demangled: volte_gen_timestamp */
int volte_gen_timestamp(void);

/* Symbol: volte_gen_timestamp_for_lbs */
/* Demangled: volte_gen_timestamp_for_lbs */
int volte_gen_timestamp_for_lbs(void);

/* Symbol: volte_sipmsg_set_3gpp_network_info */
/* Demangled: volte_sipmsg_set_3gpp_network_info */
int volte_sipmsg_set_3gpp_network_info(void);

/* Symbol: volte_sipmsg_set_cellular_network_info */
/* Demangled: volte_sipmsg_set_cellular_network_info */
int volte_sipmsg_set_cellular_network_info(void);

/* Symbol: volte_atcmd_relay_parser */
/* Demangled: volte_atcmd_relay_parser */
int volte_atcmd_relay_parser(void);

/* Symbol: volte_atcmd_relay_parser_geo */
/* Demangled: volte_atcmd_relay_parser_geo */
int volte_atcmd_relay_parser_geo(void);

/* Symbol: volte_sipmsg_set_3gpp_network_info_local_time_zone */
/* Demangled: volte_sipmsg_set_3gpp_network_info_local_time_zone */
int volte_sipmsg_set_3gpp_network_info_local_time_zone(void);

/* Symbol: volte_sipmsg_set_p_cellular_network_info */
/* Demangled: volte_sipmsg_set_p_cellular_network_info */
int volte_sipmsg_set_p_cellular_network_info(void);

/* Symbol: volte_sip_pidf_lo */
/* Demangled: volte_sip_pidf_lo */
int volte_sip_pidf_lo(void);

/* Symbol: volte_sip_pidf_lo_dev_id */
/* Demangled: volte_sip_pidf_lo_dev_id */
int volte_sip_pidf_lo_dev_id(void);

/* Symbol: volte_sip_pidf_lo_gs_civic */
/* Demangled: volte_sip_pidf_lo_gs_civic */
int volte_sip_pidf_lo_gs_civic(void);

/* Symbol: volte_sip_stack_ind_notify_sip_block */
/* Demangled: volte_sip_stack_ind_notify_sip_block */
int volte_sip_stack_ind_notify_sip_block(void);

/* Symbol: volte_sip_pidf_lo_civic */
/* Demangled: volte_sip_pidf_lo_civic */
int volte_sip_pidf_lo_civic(void);

/* Symbol: volte_sip_pidf_lo_e_ims_iwlan */
/* Demangled: volte_sip_pidf_lo_e_ims_iwlan */
int volte_sip_pidf_lo_e_ims_iwlan(void);

/* Symbol: volte_set_tlv */
/* Demangled: volte_set_tlv */
int volte_set_tlv(void);

/* Symbol: volte_sip_stack_ind_dbg_sip_info */
/* Demangled: volte_sip_stack_ind_dbg_sip_info */
int volte_sip_stack_ind_dbg_sip_info(void);

/* Symbol: volte_sip_stack_init */
/* Demangled: volte_sip_stack_init */
int volte_sip_stack_init(void);

/* Symbol: volte_sip_stack_restore */
/* Demangled: volte_sip_stack_restore */
int volte_sip_stack_restore(void);

/* Symbol: volte_sip_stack_ind_external_ua_state */
/* Demangled: volte_sip_stack_ind_external_ua_state */
int volte_sip_stack_ind_external_ua_state(void);

/* Symbol: socket_local_server_bind */
/* Demangled: socket_local_server_bind */
int socket_local_server_bind(void);

/* Symbol: socket_make_sockaddr_un */
/* Demangled: socket_make_sockaddr_un */
int socket_make_sockaddr_un(void);

/* Symbol: socket_local_client_connect */
/* Demangled: socket_local_client_connect */
int socket_local_client_connect(void);

/* Symbol: __udivsi3 */
/* Demangled: __udivsi3 */
int __udivsi3(void);

/* Symbol: __aeabi_idiv0 */
/* Demangled: __aeabi_idiv0 */
int __aeabi_idiv0(void);

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int __aeabi_uidivmod(void);

/* Symbol: __divsi3 */
/* Demangled: __divsi3 */
int __divsi3(void);

/* Symbol: __aeabi_idivmod */
/* Demangled: __aeabi_idivmod */
int __aeabi_idivmod(void);

/* Symbol: __aeabi_frsub */
/* Demangled: __aeabi_frsub */
int __aeabi_frsub(void);

/* Symbol: __subsf3 */
/* Demangled: __subsf3 */
int __subsf3(void);

/* Symbol: __aeabi_fsub */
/* Demangled: __aeabi_fsub */
int __aeabi_fsub(void);

/* Symbol: __addsf3 */
/* Demangled: __addsf3 */
int __addsf3(void);

/* Symbol: __aeabi_fadd */
/* Demangled: __aeabi_fadd */
int __aeabi_fadd(void);

/* Symbol: __floatunsisf */
/* Demangled: __floatunsisf */
int __floatunsisf(void);

/* Symbol: __aeabi_ui2f */
/* Demangled: __aeabi_ui2f */
int __aeabi_ui2f(void);

/* Symbol: __floatsisf */
/* Demangled: __floatsisf */
int __floatsisf(void);

/* Symbol: __aeabi_i2f */
/* Demangled: __aeabi_i2f */
int __aeabi_i2f(void);

/* Symbol: __floatundisf */
/* Demangled: __floatundisf */
int __floatundisf(void);

/* Symbol: __aeabi_ul2f */
/* Demangled: __aeabi_ul2f */
int __aeabi_ul2f(void);

/* Symbol: __floatdisf */
/* Demangled: __floatdisf */
int __floatdisf(void);

/* Symbol: __aeabi_ldiv0 */
/* Demangled: __aeabi_ldiv0 */
int __aeabi_ldiv0(void);

/* Symbol: __aeabi_unwind_cpp_pr2 */
/* Demangled: __aeabi_unwind_cpp_pr2 */
int __aeabi_unwind_cpp_pr2(void);

/* Symbol: __gnu_Unwind_Restore_VFP_D */
/* Demangled: __gnu_Unwind_Restore_VFP_D */
int __gnu_Unwind_Restore_VFP_D(void);

/* Symbol: __gnu_Unwind_Restore_VFP */
/* Demangled: __gnu_Unwind_Restore_VFP */
int __gnu_Unwind_Restore_VFP(void);

/* Symbol: __gnu_Unwind_Restore_VFP_D_16_to_31 */
/* Demangled: __gnu_Unwind_Restore_VFP_D_16_to_31 */
int __gnu_Unwind_Restore_VFP_D_16_to_31(void);

/* Symbol: __gnu_Unwind_Restore_WMMXD */
/* Demangled: __gnu_Unwind_Restore_WMMXD */
int __gnu_Unwind_Restore_WMMXD(void);

/* Symbol: __gnu_Unwind_Restore_WMMXC */
/* Demangled: __gnu_Unwind_Restore_WMMXC */
int __gnu_Unwind_Restore_WMMXC(void);

/* Symbol: restore_core_regs */
/* Demangled: restore_core_regs */
int restore_core_regs(void);

/* Symbol: _Unwind_GetCFA */
/* Demangled: _Unwind_GetCFA */
int _Unwind_GetCFA(void);

/* Symbol: __gnu_Unwind_RaiseException */
/* Demangled: __gnu_Unwind_RaiseException */
int __gnu_Unwind_RaiseException(void);

/* Symbol: __gnu_Unwind_ForcedUnwind */
/* Demangled: __gnu_Unwind_ForcedUnwind */
int __gnu_Unwind_ForcedUnwind(void);

/* Symbol: __gnu_Unwind_Resume */
/* Demangled: __gnu_Unwind_Resume */
int __gnu_Unwind_Resume(void);

/* Symbol: __gnu_Unwind_Resume_or_Rethrow */
/* Demangled: __gnu_Unwind_Resume_or_Rethrow */
int __gnu_Unwind_Resume_or_Rethrow(void);

/* Symbol: _Unwind_Complete */
/* Demangled: _Unwind_Complete */
int _Unwind_Complete(void);

/* Symbol: _Unwind_DeleteException */
/* Demangled: _Unwind_DeleteException */
int _Unwind_DeleteException(void);

/* Symbol: _Unwind_VRS_Get */
/* Demangled: _Unwind_VRS_Get */
int _Unwind_VRS_Get(void);

/* Symbol: _Unwind_VRS_Set */
/* Demangled: _Unwind_VRS_Set */
int _Unwind_VRS_Set(void);

/* Symbol: __gnu_Unwind_Backtrace */
/* Demangled: __gnu_Unwind_Backtrace */
int __gnu_Unwind_Backtrace(void);

/* Symbol: __gnu_unwind_execute */
/* Demangled: __gnu_unwind_execute */
int __gnu_unwind_execute(void);

/* Symbol: _Unwind_VRS_Pop */
/* Demangled: _Unwind_VRS_Pop */
int _Unwind_VRS_Pop(void);

/* Symbol: __gnu_Unwind_Save_VFP_D */
/* Demangled: __gnu_Unwind_Save_VFP_D */
int __gnu_Unwind_Save_VFP_D(void);

/* Symbol: __gnu_Unwind_Save_VFP */
/* Demangled: __gnu_Unwind_Save_VFP */
int __gnu_Unwind_Save_VFP(void);

/* Symbol: __gnu_Unwind_Save_VFP_D_16_to_31 */
/* Demangled: __gnu_Unwind_Save_VFP_D_16_to_31 */
int __gnu_Unwind_Save_VFP_D_16_to_31(void);

/* Symbol: __gnu_Unwind_Save_WMMXD */
/* Demangled: __gnu_Unwind_Save_WMMXD */
int __gnu_Unwind_Save_WMMXD(void);

/* Symbol: __gnu_Unwind_Save_WMMXC */
/* Demangled: __gnu_Unwind_Save_WMMXC */
int __gnu_Unwind_Save_WMMXC(void);

/* Symbol: __restore_core_regs */
/* Demangled: __restore_core_regs */
int __restore_core_regs(void);

/* Symbol: ___Unwind_RaiseException */
/* Demangled: ___Unwind_RaiseException */
int ___Unwind_RaiseException(void);

/* Symbol: _Unwind_RaiseException */
/* Demangled: _Unwind_RaiseException */
int _Unwind_RaiseException(void);

/* Symbol: ___Unwind_Resume */
/* Demangled: ___Unwind_Resume */
int ___Unwind_Resume(void);

/* Symbol: _Unwind_Resume */
/* Demangled: _Unwind_Resume */
int _Unwind_Resume(void);

/* Symbol: ___Unwind_Resume_or_Rethrow */
/* Demangled: ___Unwind_Resume_or_Rethrow */
int ___Unwind_Resume_or_Rethrow(void);

/* Symbol: _Unwind_Resume_or_Rethrow */
/* Demangled: _Unwind_Resume_or_Rethrow */
int _Unwind_Resume_or_Rethrow(void);

/* Symbol: ___Unwind_ForcedUnwind */
/* Demangled: ___Unwind_ForcedUnwind */
int ___Unwind_ForcedUnwind(void);

/* Symbol: _Unwind_ForcedUnwind */
/* Demangled: _Unwind_ForcedUnwind */
int _Unwind_ForcedUnwind(void);

/* Symbol: ___Unwind_Backtrace */
/* Demangled: ___Unwind_Backtrace */
int ___Unwind_Backtrace(void);

/* Symbol: _Unwind_Backtrace */
/* Demangled: _Unwind_Backtrace */
int _Unwind_Backtrace(void);

/* Symbol: __gnu_unwind_frame */
/* Demangled: __gnu_unwind_frame */
int __gnu_unwind_frame(void);

/* Symbol: _Unwind_GetRegionStart */
/* Demangled: _Unwind_GetRegionStart */
int _Unwind_GetRegionStart(void);

/* Symbol: _Unwind_GetLanguageSpecificData */
/* Demangled: _Unwind_GetLanguageSpecificData */
int _Unwind_GetLanguageSpecificData(void);

/* Symbol: _Unwind_GetDataRelBase */
/* Demangled: _Unwind_GetDataRelBase */
int _Unwind_GetDataRelBase(void);

/* Symbol: _Unwind_GetTextRelBase */
/* Demangled: _Unwind_GetTextRelBase */
int _Unwind_GetTextRelBase(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

__END_DECLS

#endif /* BEGONIA_RE_LIBVOLTE_CORE_SHR_H */

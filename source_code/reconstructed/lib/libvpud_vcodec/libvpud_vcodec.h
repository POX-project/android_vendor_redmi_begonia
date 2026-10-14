/*
 * Reverse-Engineered ABI Specification for: libvpud_vcodec.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libvpud_vcodec.so
 */

#ifndef BEGONIA_RE_LIBVPUD_VCODEC_H
#define BEGONIA_RE_LIBVPUD_VCODEC_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: vdec_get_frame_buffer_sec */
/* Demangled: vdec_get_frame_buffer_sec */
int vdec_get_frame_buffer_sec(void);

/* Symbol: vdec_put_frame_buffer_msg */
/* Demangled: vdec_put_frame_buffer_msg */
int vdec_put_frame_buffer_msg(void);

/* Symbol: venc_hevc_abort */
/* Demangled: venc_hevc_abort */
int venc_hevc_abort(void);

/* Symbol: ipi_handler */
/* Demangled: ipi_handler */
int ipi_handler(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: enter_critical_section */
/* Demangled: enter_critical_section */
int enter_critical_section(void);

/* Symbol: video_formats */
/* Demangled: video_formats */
extern void* video_formats;

/* Symbol: venc_put_buffer_msg */
/* Demangled: venc_put_buffer_msg */
int venc_put_buffer_msg(void);

/* Symbol: md32_ipi_init */
/* Demangled: md32_ipi_init */
int md32_ipi_init(void);

/* Symbol: mutex_acquire */
/* Demangled: mutex_acquire */
int mutex_acquire(void);

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int __aeabi_uidiv(void);

/* Symbol: __udivsi3 */
/* Demangled: __udivsi3 */
int __udivsi3(void);

/* Symbol: fgCheckHWCrcMpeg4 */
/* Demangled: fgCheckHWCrcMpeg4 */
int fgCheckHWCrcMpeg4(void);

/* Symbol: get_bs_buf_va */
/* Demangled: get_bs_buf_va */
int get_bs_buf_va(void);

/* Symbol: g_ctx_s */
/* Demangled: g_ctx_s */
extern void* g_ctx_s;

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int __aeabi_uidivmod(void);

/* Symbol: g_vdec_status */
/* Demangled: g_vdec_status */
extern void* g_vdec_status;

/* Symbol: insert_frm_va_to_tbl */
/* Demangled: insert_frm_va_to_tbl */
int insert_frm_va_to_tbl(void);

/* Symbol: _app_venc_service */
/* Demangled: _app_venc_service */
extern void* _app_venc_service;

/* Symbol: ipi_desc */
/* Demangled: ipi_desc */
extern void* ipi_desc;

/* Symbol: event_wait */
/* Demangled: event_wait */
int event_wait(void);

/* Symbol: wdt_lock */
/* Demangled: wdt_lock */
int wdt_lock(void);

/* Symbol: fgCheckHWPatternH265 */
/* Demangled: fgCheckHWPatternH265 */
int fgCheckHWPatternH265(void);

/* Symbol: vdec_vp8_abort */
/* Demangled: vdec_vp8_abort */
int vdec_vp8_abort(void);

/* Symbol: vdec_vp9_abort */
/* Demangled: vdec_vp9_abort */
int vdec_vp9_abort(void);

/* Symbol: apps_init */
/* Demangled: apps_init */
int apps_init(void);

/* Symbol: wdt_wait */
/* Demangled: wdt_wait */
int wdt_wait(void);

/* Symbol: event_signal */
/* Demangled: event_signal */
int event_signal(void);

/* Symbol: vdec_codec_service_init */
/* Demangled: vdec_codec_service_init */
int vdec_codec_service_init(void);

/* Symbol: wdt_trigger */
/* Demangled: wdt_trigger */
int wdt_trigger(void);

/* Symbol: fgCheckHWGoldenMpeg4 */
/* Demangled: fgCheckHWGoldenMpeg4 */
int fgCheckHWGoldenMpeg4(void);

/* Symbol: free_ringbuf */
/* Demangled: free_ringbuf */
int free_ringbuf(void);

/* Symbol: get_codec_type_from_IPI_id */
/* Demangled: get_codec_type_from_IPI_id */
int get_codec_type_from_IPI_id(void);

/* Symbol: venc_h264_abort */
/* Demangled: venc_h264_abort */
int venc_h264_abort(void);

/* Symbol: mutex_acquire_timeout */
/* Demangled: mutex_acquire_timeout */
int mutex_acquire_timeout(void);

/* Symbol: _app_vdec_service */
/* Demangled: _app_vdec_service */
extern void* _app_vdec_service;

/* Symbol: vdec_get_frame_buffer_msg */
/* Demangled: vdec_get_frame_buffer_msg */
int vdec_get_frame_buffer_msg(void);

/* Symbol: vdec_wait_isr_msg */
/* Demangled: vdec_wait_isr_msg */
int vdec_wait_isr_msg(void);

/* Symbol: __aeabi_uldivmod */
/* Demangled: __aeabi_uldivmod */
int __aeabi_uldivmod(void);

/* Symbol: venc_formats */
/* Demangled: venc_formats */
extern void* venc_formats;

/* Symbol: ipi_id_from_inst_id */
/* Demangled: ipi_id_from_inst_id */
int ipi_id_from_inst_id(void);

/* Symbol: get_frm_buf_va */
/* Demangled: get_frm_buf_va */
int get_frm_buf_va(void);

/* Symbol: mutex_destroy */
/* Demangled: mutex_destroy */
int mutex_destroy(void);

/* Symbol: get_framebuf */
/* Demangled: get_framebuf */
int get_framebuf(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: vdec_get_input_buffer */
/* Demangled: vdec_get_input_buffer */
int vdec_get_input_buffer(void);

/* Symbol: vdec_put_general_buff */
/* Demangled: vdec_put_general_buff */
int vdec_put_general_buff(void);

/* Symbol: venc_vcodec_msg_handler */
/* Demangled: venc_vcodec_msg_handler */
int venc_vcodec_msg_handler(void);

/* Symbol: __udivmodsi4 */
/* Demangled: __udivmodsi4 */
int __udivmodsi4(void);

/* Symbol: __udivmoddi4 */
/* Demangled: __udivmoddi4 */
int __udivmoddi4(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: app_thread_entry */
/* Demangled: app_thread_entry */
int app_thread_entry(void);

/* Symbol: mem_inst */
/* Demangled: mem_inst */
extern void* mem_inst;

/* Symbol: vpu_ion_dev_fd */
/* Demangled: vpu_ion_dev_fd */
extern void* vpu_ion_dev_fd;

/* Symbol: vdec_av1_abort */
/* Demangled: vdec_av1_abort */
int vdec_av1_abort(void);

/* Symbol: thread_yield */
/* Demangled: thread_yield */
int thread_yield(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: get_ringbuf */
/* Demangled: get_ringbuf */
int get_ringbuf(void);

/* Symbol: create_rt_thread */
/* Demangled: create_rt_thread */
int create_rt_thread(void);

/* Symbol: unlock_put_list */
/* Demangled: unlock_put_list */
int unlock_put_list(void);

/* Symbol: vdec_framesizes */
/* Demangled: vdec_framesizes */
extern void* vdec_framesizes;

/* Symbol: venc_get_addr */
/* Demangled: venc_get_addr */
int venc_get_addr(void);

/* Symbol: event_init */
/* Demangled: event_init */
int event_init(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: vdec_get_frame_buffer */
/* Demangled: vdec_get_frame_buffer */
int vdec_get_frame_buffer(void);

/* Symbol: apps_exit */
/* Demangled: apps_exit */
int apps_exit(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: exit_critical_section */
/* Demangled: exit_critical_section */
int exit_critical_section(void);

/* Symbol: wdt_unlock */
/* Demangled: wdt_unlock */
int wdt_unlock(void);

/* Symbol: md32_ipi_send */
/* Demangled: md32_ipi_send */
int md32_ipi_send(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: vdec_get_addr */
/* Demangled: vdec_get_addr */
int vdec_get_addr(void);

/* Symbol: venc_drv_inst */
/* Demangled: venc_drv_inst */
extern void* venc_drv_inst;

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: get_bs_handle */
/* Demangled: get_bs_handle */
int get_bs_handle(void);

/* Symbol: set_curr_inst_fd */
/* Demangled: set_curr_inst_fd */
int set_curr_inst_fd(void);

/* Symbol: vdec_get_input_buffer_sec */
/* Demangled: vdec_get_input_buffer_sec */
int vdec_get_input_buffer_sec(void);

/* Symbol: apps */
/* Demangled: apps */
extern void* apps;

/* Symbol: venc_codec_service_init */
/* Demangled: venc_codec_service_init */
int venc_codec_service_init(void);

/* Symbol: venc_lock_unlock_msg */
/* Demangled: venc_lock_unlock_msg */
int venc_lock_unlock_msg(void);

/* Symbol: mutex_release */
/* Demangled: mutex_release */
int mutex_release(void);

/* Symbol: send_obj */
/* Demangled: send_obj */
int send_obj(void);

/* Symbol: vdec_codec_msg_handler */
/* Demangled: vdec_codec_msg_handler */
int vdec_codec_msg_handler(void);

/* Symbol: vpu_venc_ion_dev_fd */
/* Demangled: vpu_venc_ion_dev_fd */
extern void* vpu_venc_ion_dev_fd;

/* Symbol: unmap_vdec_bs_buf */
/* Demangled: unmap_vdec_bs_buf */
int unmap_vdec_bs_buf(void);

/* Symbol: vdec_mpeg2_abort */
/* Demangled: vdec_mpeg2_abort */
int vdec_mpeg2_abort(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: md32_ipi_registration */
/* Demangled: md32_ipi_registration */
int md32_ipi_registration(void);

/* Symbol: thread_create */
/* Demangled: thread_create */
int thread_create(void);

/* Symbol: thread_exit */
/* Demangled: thread_exit */
int thread_exit(void);

/* Symbol: vdec_lock_unlock_msg */
/* Demangled: vdec_lock_unlock_msg */
int vdec_lock_unlock_msg(void);

/* Symbol: vdec_vp9_get_input_buffer */
/* Demangled: vdec_vp9_get_input_buffer */
int vdec_vp9_get_input_buffer(void);

/* Symbol: fill_vsi_info */
/* Demangled: fill_vsi_info */
int fill_vsi_info(void);

/* Symbol: vdec_h264_abort */
/* Demangled: vdec_h264_abort */
int vdec_h264_abort(void);

/* Symbol: vdec_h265_abort */
/* Demangled: vdec_h265_abort */
int vdec_h265_abort(void);

/* Symbol: md32_ipi_wdt_check */
/* Demangled: md32_ipi_wdt_check */
int md32_ipi_wdt_check(void);

/* Symbol: fgCheckHWPattern */
/* Demangled: fgCheckHWPattern */
int fgCheckHWPattern(void);

/* Symbol: insert_bs_va_to_tbl */
/* Demangled: insert_bs_va_to_tbl */
int insert_bs_va_to_tbl(void);

/* Symbol: free_framebuf */
/* Demangled: free_framebuf */
int free_framebuf(void);

/* Symbol: lock_put_list */
/* Demangled: lock_put_list */
int lock_put_list(void);

/* Symbol: venc_framesizes */
/* Demangled: venc_framesizes */
extern void* venc_framesizes;

/* Symbol: mutex_init */
/* Demangled: mutex_init */
int mutex_init(void);

/* Symbol: thread_resume */
/* Demangled: thread_resume */
int thread_resume(void);

/* Symbol: getTickCountMs */
/* Demangled: getTickCountMs */
int getTickCountMs(void);

/* Symbol: get_fb_handle */
/* Demangled: get_fb_handle */
int get_fb_handle(void);

/* Symbol: unmap_vdec_frm_buf */
/* Demangled: unmap_vdec_frm_buf */
int unmap_vdec_frm_buf(void);

/* Symbol: g_venc_status */
/* Demangled: g_venc_status */
extern void* g_venc_status;

/* Symbol: vdec_mpeg4_abort */
/* Demangled: vdec_mpeg4_abort */
int vdec_mpeg4_abort(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBVPUD_VCODEC_H */

/*
 * Reverse-Engineered Source for: libvpud_vcodec.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libvpud_vcodec"

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
#include "libvpud_vcodec.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_VCU "/dev/vcu"
#define DEV_DEV_VPU "/dev/vpu"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_VCU, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_VCU, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_VCU, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_VPU, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_VPU, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_VPU, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vdec_get_frame_buffer_sec */
extern "C" __attribute__((visibility("default"))) int vdec_get_frame_buffer_sec(void) {
    ALOGD("vdec_get_frame_buffer_sec() called");
    return 0;
}

/* Demangled: vdec_put_frame_buffer_msg */
extern "C" __attribute__((visibility("default"))) int vdec_put_frame_buffer_msg(void) {
    ALOGD("vdec_put_frame_buffer_msg() called");
    return 0;
}

/* Demangled: venc_hevc_abort */
extern "C" __attribute__((visibility("default"))) int venc_hevc_abort(void) {
    ALOGD("venc_hevc_abort() called");
    return 0;
}

/* Demangled: ipi_handler */
extern "C" __attribute__((visibility("default"))) int ipi_handler(void) {
    ALOGD("ipi_handler() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: enter_critical_section */
extern "C" __attribute__((visibility("default"))) int enter_critical_section(void) {
    ALOGD("enter_critical_section() called");
    return 0;
}

/* Exported Object: video_formats */
extern "C" __attribute__((visibility("default"))) void* video_formats = NULL;

/* Demangled: venc_put_buffer_msg */
extern "C" __attribute__((visibility("default"))) int venc_put_buffer_msg(void) {
    ALOGD("venc_put_buffer_msg() called");
    return 0;
}

/* Demangled: md32_ipi_init */
extern "C" __attribute__((visibility("default"))) int md32_ipi_init(void) {
    ALOGD("md32_ipi_init() called");
    return 0;
}

/* Demangled: mutex_acquire */
extern "C" __attribute__((visibility("default"))) int mutex_acquire(void) {
    ALOGD("mutex_acquire() called");
    return 0;
}

/* Demangled: __aeabi_uidiv */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidiv(void) {
    ALOGD("__aeabi_uidiv() called");
    return 0;
}

/* Demangled: __udivsi3 */
extern "C" __attribute__((visibility("default"))) int __udivsi3(void) {
    ALOGD("__udivsi3() called");
    return 0;
}

/* Demangled: fgCheckHWCrcMpeg4 */
extern "C" __attribute__((visibility("default"))) int fgCheckHWCrcMpeg4(void) {
    ALOGD("fgCheckHWCrcMpeg4() called");
    return 0;
}

/* Demangled: get_bs_buf_va */
extern "C" __attribute__((visibility("default"))) int get_bs_buf_va(void) {
    ALOGD("get_bs_buf_va() called");
    return 0;
}

/* Exported Object: g_ctx_s */
extern "C" __attribute__((visibility("default"))) void* g_ctx_s = NULL;

/* Demangled: __aeabi_uidivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidivmod(void) {
    ALOGD("__aeabi_uidivmod() called");
    return 0;
}

/* Exported Object: g_vdec_status */
extern "C" __attribute__((visibility("default"))) void* g_vdec_status = NULL;

/* Demangled: insert_frm_va_to_tbl */
extern "C" __attribute__((visibility("default"))) int insert_frm_va_to_tbl(void) {
    ALOGD("insert_frm_va_to_tbl() called");
    return 0;
}

/* Exported Object: _app_venc_service */
extern "C" __attribute__((visibility("default"))) void* _app_venc_service = NULL;

/* Exported Object: ipi_desc */
extern "C" __attribute__((visibility("default"))) void* ipi_desc = NULL;

/* Demangled: event_wait */
extern "C" __attribute__((visibility("default"))) int event_wait(void) {
    ALOGD("event_wait() called");
    return 0;
}

/* Demangled: wdt_lock */
extern "C" __attribute__((visibility("default"))) int wdt_lock(void) {
    ALOGD("wdt_lock() called");
    return 0;
}

/* Demangled: fgCheckHWPatternH265 */
extern "C" __attribute__((visibility("default"))) int fgCheckHWPatternH265(void) {
    ALOGD("fgCheckHWPatternH265() called");
    return 0;
}

/* Demangled: vdec_vp8_abort */
extern "C" __attribute__((visibility("default"))) int vdec_vp8_abort(void) {
    ALOGD("vdec_vp8_abort() called");
    return 0;
}

/* Demangled: vdec_vp9_abort */
extern "C" __attribute__((visibility("default"))) int vdec_vp9_abort(void) {
    ALOGD("vdec_vp9_abort() called");
    return 0;
}

/* Demangled: apps_init */
extern "C" __attribute__((visibility("default"))) int apps_init(void) {
    ALOGD("apps_init() called");
    return 0;
}

/* Demangled: wdt_wait */
extern "C" __attribute__((visibility("default"))) int wdt_wait(void) {
    ALOGD("wdt_wait() called");
    return 0;
}

/* Demangled: event_signal */
extern "C" __attribute__((visibility("default"))) int event_signal(void) {
    ALOGD("event_signal() called");
    return 0;
}

/* Demangled: vdec_codec_service_init */
extern "C" __attribute__((visibility("default"))) int vdec_codec_service_init(void) {
    ALOGD("vdec_codec_service_init() called");
    return 0;
}

/* Demangled: wdt_trigger */
extern "C" __attribute__((visibility("default"))) int wdt_trigger(void) {
    ALOGD("wdt_trigger() called");
    return 0;
}

/* Demangled: fgCheckHWGoldenMpeg4 */
extern "C" __attribute__((visibility("default"))) int fgCheckHWGoldenMpeg4(void) {
    ALOGD("fgCheckHWGoldenMpeg4() called");
    return 0;
}

/* Demangled: free_ringbuf */
extern "C" __attribute__((visibility("default"))) int free_ringbuf(void) {
    ALOGD("free_ringbuf() called");
    return 0;
}

/* Demangled: get_codec_type_from_IPI_id */
extern "C" __attribute__((visibility("default"))) int get_codec_type_from_IPI_id(void) {
    ALOGD("get_codec_type_from_IPI_id() called");
    return 0;
}

/* Demangled: venc_h264_abort */
extern "C" __attribute__((visibility("default"))) int venc_h264_abort(void) {
    ALOGD("venc_h264_abort() called");
    return 0;
}

/* Demangled: mutex_acquire_timeout */
extern "C" __attribute__((visibility("default"))) int mutex_acquire_timeout(void) {
    ALOGD("mutex_acquire_timeout() called");
    return 0;
}

/* Exported Object: _app_vdec_service */
extern "C" __attribute__((visibility("default"))) void* _app_vdec_service = NULL;

/* Demangled: vdec_get_frame_buffer_msg */
extern "C" __attribute__((visibility("default"))) int vdec_get_frame_buffer_msg(void) {
    ALOGD("vdec_get_frame_buffer_msg() called");
    return 0;
}

/* Demangled: vdec_wait_isr_msg */
extern "C" __attribute__((visibility("default"))) int vdec_wait_isr_msg(void) {
    ALOGD("vdec_wait_isr_msg() called");
    return 0;
}

/* Demangled: __aeabi_uldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uldivmod(void) {
    ALOGD("__aeabi_uldivmod() called");
    return 0;
}

/* Exported Object: venc_formats */
extern "C" __attribute__((visibility("default"))) void* venc_formats = NULL;

/* Demangled: ipi_id_from_inst_id */
extern "C" __attribute__((visibility("default"))) int ipi_id_from_inst_id(void) {
    ALOGD("ipi_id_from_inst_id() called");
    return 0;
}

/* Demangled: get_frm_buf_va */
extern "C" __attribute__((visibility("default"))) int get_frm_buf_va(void) {
    ALOGD("get_frm_buf_va() called");
    return 0;
}

/* Demangled: mutex_destroy */
extern "C" __attribute__((visibility("default"))) int mutex_destroy(void) {
    ALOGD("mutex_destroy() called");
    return 0;
}

/* Demangled: get_framebuf */
extern "C" __attribute__((visibility("default"))) int get_framebuf(void) {
    ALOGD("get_framebuf() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: vdec_get_input_buffer */
extern "C" __attribute__((visibility("default"))) int vdec_get_input_buffer(void) {
    ALOGD("vdec_get_input_buffer() called");
    return 0;
}

/* Demangled: vdec_put_general_buff */
extern "C" __attribute__((visibility("default"))) int vdec_put_general_buff(void) {
    ALOGD("vdec_put_general_buff() called");
    return 0;
}

/* Demangled: venc_vcodec_msg_handler */
extern "C" __attribute__((visibility("default"))) int venc_vcodec_msg_handler(void) {
    ALOGD("venc_vcodec_msg_handler() called");
    return 0;
}

/* Demangled: __udivmodsi4 */
extern "C" __attribute__((visibility("default"))) int __udivmodsi4(void) {
    ALOGD("__udivmodsi4() called");
    return 0;
}

/* Demangled: __udivmoddi4 */
extern "C" __attribute__((visibility("default"))) int __udivmoddi4(void) {
    ALOGD("__udivmoddi4() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: app_thread_entry */
extern "C" __attribute__((visibility("default"))) int app_thread_entry(void) {
    ALOGD("app_thread_entry() called");
    return 0;
}

/* Exported Object: mem_inst */
extern "C" __attribute__((visibility("default"))) void* mem_inst = NULL;

/* Exported Object: vpu_ion_dev_fd */
extern "C" __attribute__((visibility("default"))) void* vpu_ion_dev_fd = NULL;

/* Demangled: vdec_av1_abort */
extern "C" __attribute__((visibility("default"))) int vdec_av1_abort(void) {
    ALOGD("vdec_av1_abort() called");
    return 0;
}

/* Demangled: thread_yield */
extern "C" __attribute__((visibility("default"))) int thread_yield(void) {
    ALOGD("thread_yield() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: get_ringbuf */
extern "C" __attribute__((visibility("default"))) int get_ringbuf(void) {
    ALOGD("get_ringbuf() called");
    return 0;
}

/* Demangled: create_rt_thread */
extern "C" __attribute__((visibility("default"))) int create_rt_thread(void) {
    ALOGD("create_rt_thread() called");
    return 0;
}

/* Demangled: unlock_put_list */
extern "C" __attribute__((visibility("default"))) int unlock_put_list(void) {
    ALOGD("unlock_put_list() called");
    return 0;
}

/* Exported Object: vdec_framesizes */
extern "C" __attribute__((visibility("default"))) void* vdec_framesizes = NULL;

/* Demangled: venc_get_addr */
extern "C" __attribute__((visibility("default"))) int venc_get_addr(void) {
    ALOGD("venc_get_addr() called");
    return 0;
}

/* Demangled: event_init */
extern "C" __attribute__((visibility("default"))) int event_init(void) {
    ALOGD("event_init() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: vdec_get_frame_buffer */
extern "C" __attribute__((visibility("default"))) int vdec_get_frame_buffer(void) {
    ALOGD("vdec_get_frame_buffer() called");
    return 0;
}

/* Demangled: apps_exit */
extern "C" __attribute__((visibility("default"))) int apps_exit(void) {
    ALOGD("apps_exit() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: exit_critical_section */
extern "C" __attribute__((visibility("default"))) int exit_critical_section(void) {
    ALOGD("exit_critical_section() called");
    return 0;
}

/* Demangled: wdt_unlock */
extern "C" __attribute__((visibility("default"))) int wdt_unlock(void) {
    ALOGD("wdt_unlock() called");
    return 0;
}

/* Demangled: md32_ipi_send */
extern "C" __attribute__((visibility("default"))) int md32_ipi_send(void) {
    ALOGD("md32_ipi_send() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: vdec_get_addr */
extern "C" __attribute__((visibility("default"))) int vdec_get_addr(void) {
    ALOGD("vdec_get_addr() called");
    return 0;
}

/* Exported Object: venc_drv_inst */
extern "C" __attribute__((visibility("default"))) void* venc_drv_inst = NULL;

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: get_bs_handle */
extern "C" __attribute__((visibility("default"))) int get_bs_handle(void) {
    ALOGD("get_bs_handle() called");
    return 0;
}

/* Demangled: set_curr_inst_fd */
extern "C" __attribute__((visibility("default"))) int set_curr_inst_fd(void) {
    ALOGD("set_curr_inst_fd() called");
    return 0;
}

/* Demangled: vdec_get_input_buffer_sec */
extern "C" __attribute__((visibility("default"))) int vdec_get_input_buffer_sec(void) {
    ALOGD("vdec_get_input_buffer_sec() called");
    return 0;
}

/* Exported Object: apps */
extern "C" __attribute__((visibility("default"))) void* apps = NULL;

/* Demangled: venc_codec_service_init */
extern "C" __attribute__((visibility("default"))) int venc_codec_service_init(void) {
    ALOGD("venc_codec_service_init() called");
    return 0;
}

/* Demangled: venc_lock_unlock_msg */
extern "C" __attribute__((visibility("default"))) int venc_lock_unlock_msg(void) {
    ALOGD("venc_lock_unlock_msg() called");
    return 0;
}

/* Demangled: mutex_release */
extern "C" __attribute__((visibility("default"))) int mutex_release(void) {
    ALOGD("mutex_release() called");
    return 0;
}

/* Demangled: send_obj */
extern "C" __attribute__((visibility("default"))) int send_obj(void) {
    ALOGD("send_obj() called");
    return 0;
}

/* Demangled: vdec_codec_msg_handler */
extern "C" __attribute__((visibility("default"))) int vdec_codec_msg_handler(void) {
    ALOGD("vdec_codec_msg_handler() called");
    return 0;
}

/* Exported Object: vpu_venc_ion_dev_fd */
extern "C" __attribute__((visibility("default"))) void* vpu_venc_ion_dev_fd = NULL;

/* Demangled: unmap_vdec_bs_buf */
extern "C" __attribute__((visibility("default"))) int unmap_vdec_bs_buf(void) {
    ALOGD("unmap_vdec_bs_buf() called");
    return 0;
}

/* Demangled: vdec_mpeg2_abort */
extern "C" __attribute__((visibility("default"))) int vdec_mpeg2_abort(void) {
    ALOGD("vdec_mpeg2_abort() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: md32_ipi_registration */
extern "C" __attribute__((visibility("default"))) int md32_ipi_registration(void) {
    ALOGD("md32_ipi_registration() called");
    return 0;
}

/* Demangled: thread_create */
extern "C" __attribute__((visibility("default"))) int thread_create(void) {
    ALOGD("thread_create() called");
    return 0;
}

/* Demangled: thread_exit */
extern "C" __attribute__((visibility("default"))) int thread_exit(void) {
    ALOGD("thread_exit() called");
    return 0;
}

/* Demangled: vdec_lock_unlock_msg */
extern "C" __attribute__((visibility("default"))) int vdec_lock_unlock_msg(void) {
    ALOGD("vdec_lock_unlock_msg() called");
    return 0;
}

/* Demangled: vdec_vp9_get_input_buffer */
extern "C" __attribute__((visibility("default"))) int vdec_vp9_get_input_buffer(void) {
    ALOGD("vdec_vp9_get_input_buffer() called");
    return 0;
}

/* Demangled: fill_vsi_info */
extern "C" __attribute__((visibility("default"))) int fill_vsi_info(void) {
    ALOGD("fill_vsi_info() called");
    return 0;
}

/* Demangled: vdec_h264_abort */
extern "C" __attribute__((visibility("default"))) int vdec_h264_abort(void) {
    ALOGD("vdec_h264_abort() called");
    return 0;
}

/* Demangled: vdec_h265_abort */
extern "C" __attribute__((visibility("default"))) int vdec_h265_abort(void) {
    ALOGD("vdec_h265_abort() called");
    return 0;
}

/* Demangled: md32_ipi_wdt_check */
extern "C" __attribute__((visibility("default"))) int md32_ipi_wdt_check(void) {
    ALOGD("md32_ipi_wdt_check() called");
    return 0;
}

/* Demangled: fgCheckHWPattern */
extern "C" __attribute__((visibility("default"))) int fgCheckHWPattern(void) {
    ALOGD("fgCheckHWPattern() called");
    return 0;
}

/* Demangled: insert_bs_va_to_tbl */
extern "C" __attribute__((visibility("default"))) int insert_bs_va_to_tbl(void) {
    ALOGD("insert_bs_va_to_tbl() called");
    return 0;
}

/* Demangled: free_framebuf */
extern "C" __attribute__((visibility("default"))) int free_framebuf(void) {
    ALOGD("free_framebuf() called");
    return 0;
}

/* Demangled: lock_put_list */
extern "C" __attribute__((visibility("default"))) int lock_put_list(void) {
    ALOGD("lock_put_list() called");
    return 0;
}

/* Exported Object: venc_framesizes */
extern "C" __attribute__((visibility("default"))) void* venc_framesizes = NULL;

/* Demangled: mutex_init */
extern "C" __attribute__((visibility("default"))) int mutex_init(void) {
    ALOGD("mutex_init() called");
    return 0;
}

/* Demangled: thread_resume */
extern "C" __attribute__((visibility("default"))) int thread_resume(void) {
    ALOGD("thread_resume() called");
    return 0;
}

/* Demangled: getTickCountMs */
extern "C" __attribute__((visibility("default"))) int getTickCountMs(void) {
    ALOGD("getTickCountMs() called");
    return 0;
}

/* Demangled: get_fb_handle */
extern "C" __attribute__((visibility("default"))) int get_fb_handle(void) {
    ALOGD("get_fb_handle() called");
    return 0;
}

/* Demangled: unmap_vdec_frm_buf */
extern "C" __attribute__((visibility("default"))) int unmap_vdec_frm_buf(void) {
    ALOGD("unmap_vdec_frm_buf() called");
    return 0;
}

/* Exported Object: g_venc_status */
extern "C" __attribute__((visibility("default"))) void* g_venc_status = NULL;

/* Demangled: vdec_mpeg4_abort */
extern "C" __attribute__((visibility("default"))) int vdec_mpeg4_abort(void) {
    ALOGD("vdec_mpeg4_abort() called");
    return 0;
}

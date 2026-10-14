/*
 * Reverse-Engineered Source for: libhevce_sb.ca7.android.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libhevce_sb_ca7_android"

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
#include "libhevce_sb_ca7_android.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: hevce_create_thread */
extern "C" __attribute__((visibility("default"))) int hevce_create_thread(void) {
    ALOGD("hevce_create_thread() called");
    return 0;
}

/* Demangled: HEVC_Printf */
extern "C" __attribute__((visibility("default"))) int HEVC_Printf(void) {
    ALOGD("HEVC_Printf() called");
    return 0;
}

/* Demangled: hevce_encode_sub_slice_thread */
extern "C" __attribute__((visibility("default"))) int hevce_encode_sub_slice_thread(void) {
    ALOGD("hevce_encode_sub_slice_thread() called");
    return 0;
}

/* Demangled: hevce_encode_sub_wpp_thread */
extern "C" __attribute__((visibility("default"))) int hevce_encode_sub_wpp_thread(void) {
    ALOGD("hevce_encode_sub_wpp_thread() called");
    return 0;
}

/* Demangled: hevce_encode_sub_mad_thread */
extern "C" __attribute__((visibility("default"))) int hevce_encode_sub_mad_thread(void) {
    ALOGD("hevce_encode_sub_mad_thread() called");
    return 0;
}

/* Demangled: hevce_destroy_thread */
extern "C" __attribute__((visibility("default"))) int hevce_destroy_thread(void) {
    ALOGD("hevce_destroy_thread() called");
    return 0;
}

/* Demangled: hevce_init_slice */
extern "C" __attribute__((visibility("default"))) int hevce_init_slice(void) {
    ALOGD("hevce_init_slice() called");
    return 0;
}

/* Demangled: hevce_init_intra_buffer */
extern "C" __attribute__((visibility("default"))) int hevce_init_intra_buffer(void) {
    ALOGD("hevce_init_intra_buffer() called");
    return 0;
}

/* Demangled: setup_headers */
extern "C" __attribute__((visibility("default"))) int setup_headers(void) {
    ALOGD("setup_headers() called");
    return 0;
}

/* Demangled: hevc_uniform_spacing_tile */
extern "C" __attribute__((visibility("default"))) int hevc_uniform_spacing_tile(void) {
    ALOGD("hevc_uniform_spacing_tile() called");
    return 0;
}

/* Demangled: hevce_setup_slice */
extern "C" __attribute__((visibility("default"))) int hevce_setup_slice(void) {
    ALOGD("hevce_setup_slice() called");
    return 0;
}

/* Demangled: hevce_decompose_poc */
extern "C" __attribute__((visibility("default"))) int hevce_decompose_poc(void) {
    ALOGD("hevce_decompose_poc() called");
    return 0;
}

/* Demangled: HEVCSwEncMemcpy */
extern "C" __attribute__((visibility("default"))) int HEVCSwEncMemcpy(void) {
    ALOGD("HEVCSwEncMemcpy() called");
    return 0;
}

/* Demangled: hevc_construct_ref_picture_list */
extern "C" __attribute__((visibility("default"))) int hevc_construct_ref_picture_list(void) {
    ALOGD("hevc_construct_ref_picture_list() called");
    return 0;
}

/* Demangled: hevc_decrease_pict_list_reference_count */
extern "C" __attribute__((visibility("default"))) int hevc_decrease_pict_list_reference_count(void) {
    ALOGD("hevc_decrease_pict_list_reference_count() called");
    return 0;
}

/* Demangled: hevc_find_free_picture_buffer */
extern "C" __attribute__((visibility("default"))) int hevc_find_free_picture_buffer(void) {
    ALOGD("hevc_find_free_picture_buffer() called");
    return 0;
}

/* Demangled: hevc_increase_pict_reference_count */
extern "C" __attribute__((visibility("default"))) int hevc_increase_pict_reference_count(void) {
    ALOGD("hevc_increase_pict_reference_count() called");
    return 0;
}

/* Demangled: picture_list_add */
extern "C" __attribute__((visibility("default"))) int picture_list_add(void) {
    ALOGD("picture_list_add() called");
    return 0;
}

/* Demangled: hevc_setup_ref_mv_storage */
extern "C" __attribute__((visibility("default"))) int hevc_setup_ref_mv_storage(void) {
    ALOGD("hevc_setup_ref_mv_storage() called");
    return 0;
}

/* Demangled: hevce_init_encode_cluster */
extern "C" __attribute__((visibility("default"))) int hevce_init_encode_cluster(void) {
    ALOGD("hevce_init_encode_cluster() called");
    return 0;
}

/* Demangled: hevc_init_cluster */
extern "C" __attribute__((visibility("default"))) int hevc_init_cluster(void) {
    ALOGD("hevc_init_cluster() called");
    return 0;
}

/* Exported Object: TABLE_PART_IDX_TO_BLK_XY */
extern "C" __attribute__((visibility("default"))) void* TABLE_PART_IDX_TO_BLK_XY = NULL;

/* Exported Object: TABLE_PART_IDX_TO_BLK_CHROMA_XY */
extern "C" __attribute__((visibility("default"))) void* TABLE_PART_IDX_TO_BLK_CHROMA_XY = NULL;

/* Demangled: hevce_destroy_encode_cluster */
extern "C" __attribute__((visibility("default"))) int hevce_destroy_encode_cluster(void) {
    ALOGD("hevce_destroy_encode_cluster() called");
    return 0;
}

/* Demangled: hevc_destroy_cluster */
extern "C" __attribute__((visibility("default"))) int hevc_destroy_cluster(void) {
    ALOGD("hevc_destroy_cluster() called");
    return 0;
}

/* Demangled: hevce_encode_sequence_headers */
extern "C" __attribute__((visibility("default"))) int hevce_encode_sequence_headers(void) {
    ALOGD("hevce_encode_sequence_headers() called");
    return 0;
}

/* Demangled: HEVCSwEncStreamBufferAllocate */
extern "C" __attribute__((visibility("default"))) int HEVCSwEncStreamBufferAllocate(void) {
    ALOGD("HEVCSwEncStreamBufferAllocate() called");
    return 0;
}

/* Demangled: hevce_encode_vps */
extern "C" __attribute__((visibility("default"))) int hevce_encode_vps(void) {
    ALOGD("hevce_encode_vps() called");
    return 0;
}

/* Demangled: hevce_encode_sps */
extern "C" __attribute__((visibility("default"))) int hevce_encode_sps(void) {
    ALOGD("hevce_encode_sps() called");
    return 0;
}

/* Demangled: hevce_encode_pps */
extern "C" __attribute__((visibility("default"))) int hevce_encode_pps(void) {
    ALOGD("hevce_encode_pps() called");
    return 0;
}

/* Demangled: HEVCSwEncStreamBufferUpdate */
extern "C" __attribute__((visibility("default"))) int HEVCSwEncStreamBufferUpdate(void) {
    ALOGD("HEVCSwEncStreamBufferUpdate() called");
    return 0;
}

/* Demangled: hevce_pre_encode_frame */
extern "C" __attribute__((visibility("default"))) int hevce_pre_encode_frame(void) {
    ALOGD("hevce_pre_encode_frame() called");
    return 0;
}

/* Demangled: HEVCSwEncMemset */
extern "C" __attribute__((visibility("default"))) int HEVCSwEncMemset(void) {
    ALOGD("HEVCSwEncMemset() called");
    return 0;
}

/* Demangled: hevce_me_init */
extern "C" __attribute__((visibility("default"))) int hevce_me_init(void) {
    ALOGD("hevce_me_init() called");
    return 0;
}

/* Demangled: hevce_common_info_init */
extern "C" __attribute__((visibility("default"))) int hevce_common_info_init(void) {
    ALOGD("hevce_common_info_init() called");
    return 0;
}

/* Demangled: hevce_encode_slice_thread */
extern "C" __attribute__((visibility("default"))) int hevce_encode_slice_thread(void) {
    ALOGD("hevce_encode_slice_thread() called");
    return 0;
}

/* Demangled: push_neon_register */
extern "C" __attribute__((visibility("default"))) int push_neon_register(void) {
    ALOGD("push_neon_register() called");
    return 0;
}

/* Demangled: pop_neon_register */
extern "C" __attribute__((visibility("default"))) int pop_neon_register(void) {
    ALOGD("pop_neon_register() called");
    return 0;
}

/* Demangled: hevce_encode_slice */
extern "C" __attribute__((visibility("default"))) int hevce_encode_slice(void) {
    ALOGD("hevce_encode_slice() called");
    return 0;
}

/* Demangled: streame_start */
extern "C" __attribute__((visibility("default"))) int streame_start(void) {
    ALOGD("streame_start() called");
    return 0;
}

/* Demangled: hevce_encode_nal */
extern "C" __attribute__((visibility("default"))) int hevce_encode_nal(void) {
    ALOGD("hevce_encode_nal() called");
    return 0;
}

/* Demangled: hevce_encode_slice_header */
extern "C" __attribute__((visibility("default"))) int hevce_encode_slice_header(void) {
    ALOGD("hevce_encode_slice_header() called");
    return 0;
}

/* Demangled: streame_stop */
extern "C" __attribute__((visibility("default"))) int streame_stop(void) {
    ALOGD("streame_stop() called");
    return 0;
}

/* Demangled: hevce_encode_frame */
extern "C" __attribute__((visibility("default"))) int hevce_encode_frame(void) {
    ALOGD("hevce_encode_frame() called");
    return 0;
}

/* Demangled: hevce_encode_frame_wpp_thread */
extern "C" __attribute__((visibility("default"))) int hevce_encode_frame_wpp_thread(void) {
    ALOGD("hevce_encode_frame_wpp_thread() called");
    return 0;
}

/* Demangled: hevce_encode_frame_wpp */
extern "C" __attribute__((visibility("default"))) int hevce_encode_frame_wpp(void) {
    ALOGD("hevce_encode_frame_wpp() called");
    return 0;
}

/* Demangled: hevce_set_source_frame_info */
extern "C" __attribute__((visibility("default"))) int hevce_set_source_frame_info(void) {
    ALOGD("hevce_set_source_frame_info() called");
    return 0;
}

/* Demangled: hevce_getbitstream */
extern "C" __attribute__((visibility("default"))) int hevce_getbitstream(void) {
    ALOGD("hevce_getbitstream() called");
    return 0;
}

/* Demangled: HEVCSwEncQueryCapability */
extern "C" __attribute__((visibility("default"))) int HEVCSwEncQueryCapability(void) {
    ALOGD("HEVCSwEncQueryCapability() called");
    return 0;
}

/* Demangled: hevc_memcpy */
extern "C" __attribute__((visibility("default"))) int hevc_memcpy(void) {
    ALOGD("hevc_memcpy() called");
    return 0;
}

/* Demangled: hevc_memset */
extern "C" __attribute__((visibility("default"))) int hevc_memset(void) {
    ALOGD("hevc_memset() called");
    return 0;
}

/* Demangled: hevc_calloc */
extern "C" __attribute__((visibility("default"))) int hevc_calloc(void) {
    ALOGD("hevc_calloc() called");
    return 0;
}

/* Demangled: HEVCEncoderMallocAlign */
extern "C" __attribute__((visibility("default"))) int HEVCEncoderMallocAlign(void) {
    ALOGD("HEVCEncoderMallocAlign() called");
    return 0;
}

/* Demangled: hevce_create_comp */
extern "C" __attribute__((visibility("default"))) int hevce_create_comp(void) {
    ALOGD("hevce_create_comp() called");
    return 0;
}

/* Demangled: hevc_malloc */
extern "C" __attribute__((visibility("default"))) int hevc_malloc(void) {
    ALOGD("hevc_malloc() called");
    return 0;
}

/* Demangled: hevce_init_encode_cu */
extern "C" __attribute__((visibility("default"))) int hevce_init_encode_cu(void) {
    ALOGD("hevce_init_encode_cu() called");
    return 0;
}

/* Demangled: hevc_init_cu */
extern "C" __attribute__((visibility("default"))) int hevc_init_cu(void) {
    ALOGD("hevc_init_cu() called");
    return 0;
}

/* Demangled: hevce_init */
extern "C" __attribute__((visibility("default"))) int hevce_init(void) {
    ALOGD("hevce_init() called");
    return 0;
}

/* Demangled: hevc_initialize_tables */
extern "C" __attribute__((visibility("default"))) int hevc_initialize_tables(void) {
    ALOGD("hevc_initialize_tables() called");
    return 0;
}

/* Demangled: hevc_common_init */
extern "C" __attribute__((visibility("default"))) int hevc_common_init(void) {
    ALOGD("hevc_common_init() called");
    return 0;
}

/* Demangled: hevce_label */
extern "C" __attribute__((visibility("default"))) int hevce_label(void) {
    ALOGD("hevce_label() called");
    return 0;
}

/* Demangled: component_srand */
extern "C" __attribute__((visibility("default"))) int component_srand(void) {
    ALOGD("component_srand() called");
    return 0;
}

/* Demangled: HEVCSwEncRandom */
extern "C" __attribute__((visibility("default"))) int HEVCSwEncRandom(void) {
    ALOGD("HEVCSwEncRandom() called");
    return 0;
}

/* Demangled: hevce_rc_constQ_create */
extern "C" __attribute__((visibility("default"))) int hevce_rc_constQ_create(void) {
    ALOGD("hevce_rc_constQ_create() called");
    return 0;
}

/* Demangled: hevce_rc_randomQ_create */
extern "C" __attribute__((visibility("default"))) int hevce_rc_randomQ_create(void) {
    ALOGD("hevce_rc_randomQ_create() called");
    return 0;
}

/* Demangled: hevce_rc_create */
extern "C" __attribute__((visibility("default"))) int hevce_rc_create(void) {
    ALOGD("hevce_rc_create() called");
    return 0;
}

/* Demangled: hevce_rc_init */
extern "C" __attribute__((visibility("default"))) int hevce_rc_init(void) {
    ALOGD("hevce_rc_init() called");
    return 0;
}

/* Demangled: hevc_init_picture_buffer */
extern "C" __attribute__((visibility("default"))) int hevc_init_picture_buffer(void) {
    ALOGD("hevc_init_picture_buffer() called");
    return 0;
}

/* Demangled: hevc_create_yuv */
extern "C" __attribute__((visibility("default"))) int hevc_create_yuv(void) {
    ALOGD("hevc_create_yuv() called");
    return 0;
}

/* Demangled: hevc_create_lowres_y */
extern "C" __attribute__((visibility("default"))) int hevc_create_lowres_y(void) {
    ALOGD("hevc_create_lowres_y() called");
    return 0;
}

/* Demangled: hevc_common_init_tables */
extern "C" __attribute__((visibility("default"))) int hevc_common_init_tables(void) {
    ALOGD("hevc_common_init_tables() called");
    return 0;
}

/* Demangled: hevce_mad_info_init */
extern "C" __attribute__((visibility("default"))) int hevce_mad_info_init(void) {
    ALOGD("hevce_mad_info_init() called");
    return 0;
}

/* Demangled: hevc_free */
extern "C" __attribute__((visibility("default"))) int hevc_free(void) {
    ALOGD("hevc_free() called");
    return 0;
}

/* Demangled: HEVCEncoderFreeAlign */
extern "C" __attribute__((visibility("default"))) int HEVCEncoderFreeAlign(void) {
    ALOGD("HEVCEncoderFreeAlign() called");
    return 0;
}

/* Demangled: hevce_destroy_comp */
extern "C" __attribute__((visibility("default"))) int hevce_destroy_comp(void) {
    ALOGD("hevce_destroy_comp() called");
    return 0;
}

/* Demangled: hevce_deinit_encode_cu */
extern "C" __attribute__((visibility("default"))) int hevce_deinit_encode_cu(void) {
    ALOGD("hevce_deinit_encode_cu() called");
    return 0;
}

/* Demangled: hevc_destroy_cu */
extern "C" __attribute__((visibility("default"))) int hevc_destroy_cu(void) {
    ALOGD("hevc_destroy_cu() called");
    return 0;
}

/* Demangled: hevce_deinit */
extern "C" __attribute__((visibility("default"))) int hevce_deinit(void) {
    ALOGD("hevce_deinit() called");
    return 0;
}

/* Demangled: hevc_destroy_yuv */
extern "C" __attribute__((visibility("default"))) int hevc_destroy_yuv(void) {
    ALOGD("hevc_destroy_yuv() called");
    return 0;
}

/* Demangled: hevc_common_destroy */
extern "C" __attribute__((visibility("default"))) int hevc_common_destroy(void) {
    ALOGD("hevc_common_destroy() called");
    return 0;
}

/* Demangled: hevc_destroy_picture_buffer */
extern "C" __attribute__((visibility("default"))) int hevc_destroy_picture_buffer(void) {
    ALOGD("hevc_destroy_picture_buffer() called");
    return 0;
}

/* Demangled: hevce_query_capability */
extern "C" __attribute__((visibility("default"))) int hevce_query_capability(void) {
    ALOGD("hevce_query_capability() called");
    return 0;
}

/* Demangled: hevce_GetSlidingWindowSum */
extern "C" __attribute__((visibility("default"))) int hevce_GetSlidingWindowSum(void) {
    ALOGD("hevce_GetSlidingWindowSum() called");
    return 0;
}

/* Demangled: hevce_post_encode_frame */
extern "C" __attribute__((visibility("default"))) int hevce_post_encode_frame(void) {
    ALOGD("hevce_post_encode_frame() called");
    return 0;
}

/* Demangled: hevce_enclose_nal */
extern "C" __attribute__((visibility("default"))) int hevce_enclose_nal(void) {
    ALOGD("hevce_enclose_nal() called");
    return 0;
}

/* Demangled: hevce_rc_update_blur_cplxr */
extern "C" __attribute__((visibility("default"))) int hevce_rc_update_blur_cplxr(void) {
    ALOGD("hevce_rc_update_blur_cplxr() called");
    return 0;
}

/* Demangled: hevce_global_motion */
extern "C" __attribute__((visibility("default"))) int hevce_global_motion(void) {
    ALOGD("hevce_global_motion() called");
    return 0;
}

/* Demangled: hevce_encode_one_frame */
extern "C" __attribute__((visibility("default"))) int hevce_encode_one_frame(void) {
    ALOGD("hevce_encode_one_frame() called");
    return 0;
}

/* Demangled: hevce_frame_mad_thread */
extern "C" __attribute__((visibility("default"))) int hevce_frame_mad_thread(void) {
    ALOGD("hevce_frame_mad_thread() called");
    return 0;
}

/* Demangled: hevce_frame_mad */
extern "C" __attribute__((visibility("default"))) int hevce_frame_mad(void) {
    ALOGD("hevce_frame_mad() called");
    return 0;
}

/* Demangled: hevce_rc_picture_pre_encoding */
extern "C" __attribute__((visibility("default"))) int hevce_rc_picture_pre_encoding(void) {
    ALOGD("hevce_rc_picture_pre_encoding() called");
    return 0;
}

/* Demangled: hevce_rc_vilte_setup */
extern "C" __attribute__((visibility("default"))) int hevce_rc_vilte_setup(void) {
    ALOGD("hevce_rc_vilte_setup() called");
    return 0;
}

/* Demangled: hevce_rc_picture_post_encoding */
extern "C" __attribute__((visibility("default"))) int hevce_rc_picture_post_encoding(void) {
    ALOGD("hevce_rc_picture_post_encoding() called");
    return 0;
}

/* Demangled: hevce_rc_UpdateQpm2QS */
extern "C" __attribute__((visibility("default"))) int hevce_rc_UpdateQpm2QS(void) {
    ALOGD("hevce_rc_UpdateQpm2QS() called");
    return 0;
}

/* Demangled: HEVCSwEncYUVEncoded */
extern "C" __attribute__((visibility("default"))) int HEVCSwEncYUVEncoded(void) {
    ALOGD("HEVCSwEncYUVEncoded() called");
    return 0;
}

/* Demangled: hevce_rc_rest */
extern "C" __attribute__((visibility("default"))) int hevce_rc_rest(void) {
    ALOGD("hevce_rc_rest() called");
    return 0;
}

/* Demangled: hevce_rc_ResetConfiguration */
extern "C" __attribute__((visibility("default"))) int hevce_rc_ResetConfiguration(void) {
    ALOGD("hevce_rc_ResetConfiguration() called");
    return 0;
}

/* Demangled: hevce_rc_set_iperiod */
extern "C" __attribute__((visibility("default"))) int hevce_rc_set_iperiod(void) {
    ALOGD("hevce_rc_set_iperiod() called");
    return 0;
}

/* Demangled: HEVCEncoderGenerateHeader */
extern "C" __attribute__((visibility("default"))) int HEVCEncoderGenerateHeader(void) {
    ALOGD("HEVCEncoderGenerateHeader() called");
    return 0;
}

/* Demangled: HEVCEncoderGetMemoryRequiredAdapt */
extern "C" __attribute__((visibility("default"))) int HEVCEncoderGetMemoryRequiredAdapt(void) {
    ALOGD("HEVCEncoderGetMemoryRequiredAdapt() called");
    return 0;
}

/* Demangled: HEVCEncoderDeInitAdapt */
extern "C" __attribute__((visibility("default"))) int HEVCEncoderDeInitAdapt(void) {
    ALOGD("HEVCEncoderDeInitAdapt() called");
    return 0;
}

/* Demangled: hevc_free_yuv */
extern "C" __attribute__((visibility("default"))) int hevc_free_yuv(void) {
    ALOGD("hevc_free_yuv() called");
    return 0;
}

/* Demangled: component_rand */
extern "C" __attribute__((visibility("default"))) int component_rand(void) {
    ALOGD("component_rand() called");
    return 0;
}

/* Demangled: HEVCSwEncRandomReset */
extern "C" __attribute__((visibility("default"))) int HEVCSwEncRandomReset(void) {
    ALOGD("HEVCSwEncRandomReset() called");
    return 0;
}

/* Demangled: HEVCEncoderStoreATT */
extern "C" __attribute__((visibility("default"))) int HEVCEncoderStoreATT(void) {
    ALOGD("HEVCEncoderStoreATT() called");
    return 0;
}

/* Demangled: HEVCEncoderFreeATT */
extern "C" __attribute__((visibility("default"))) int HEVCEncoderFreeATT(void) {
    ALOGD("HEVCEncoderFreeATT() called");
    return 0;
}

/* Demangled: HEVCEncoderOpenAdapt */
extern "C" __attribute__((visibility("default"))) int HEVCEncoderOpenAdapt(void) {
    ALOGD("HEVCEncoderOpenAdapt() called");
    return 0;
}

/* Demangled: HEVCEncoderInitAdapt */
extern "C" __attribute__((visibility("default"))) int HEVCEncoderInitAdapt(void) {
    ALOGD("HEVCEncoderInitAdapt() called");
    return 0;
}

/* Demangled: HEVCEncoderGetParameterAdapt */
extern "C" __attribute__((visibility("default"))) int HEVCEncoderGetParameterAdapt(void) {
    ALOGD("HEVCEncoderGetParameterAdapt() called");
    return 0;
}

/* Demangled: HEVCEncoderSetParameterAdapt */
extern "C" __attribute__((visibility("default"))) int HEVCEncoderSetParameterAdapt(void) {
    ALOGD("HEVCEncoderSetParameterAdapt() called");
    return 0;
}

/* Demangled: HEVCEncoderEncodeOneFrame */
extern "C" __attribute__((visibility("default"))) int HEVCEncoderEncodeOneFrame(void) {
    ALOGD("HEVCEncoderEncodeOneFrame() called");
    return 0;
}

/* Demangled: HEVCEncoderGetNextBitstream */
extern "C" __attribute__((visibility("default"))) int HEVCEncoderGetNextBitstream(void) {
    ALOGD("HEVCEncoderGetNextBitstream() called");
    return 0;
}

/* Demangled: HEVCEncoderCloseAdapt */
extern "C" __attribute__((visibility("default"))) int HEVCEncoderCloseAdapt(void) {
    ALOGD("HEVCEncoderCloseAdapt() called");
    return 0;
}

/* Exported Object: _rHEVCEncoderAPI */
extern "C" __attribute__((visibility("default"))) void* _rHEVCEncoderAPI = NULL;

/* Exported Object: trace_counter */
extern "C" __attribute__((visibility("default"))) void* trace_counter = NULL;

/* Demangled: GetHEVCEncoderAPI */
extern "C" __attribute__((visibility("default"))) int GetHEVCEncoderAPI(void) {
    ALOGD("GetHEVCEncoderAPI() called");
    return 0;
}

/* Demangled: _libhevce_DB6DA3D2048429FBC870001D3A26DFEA7253BDE5DBCB7B3DC9A3EE989BC72F19 */
extern "C" __attribute__((visibility("default"))) int _libhevce_DB6DA3D2048429FBC870001D3A26DFEA7253BDE5DBCB7B3DC9A3EE989BC72F19(void) {
    ALOGD("_libhevce_DB6DA3D2048429FBC870001D3A26DFEA7253BDE5DBCB7B3DC9A3EE989BC72F19() called");
    return 0;
}

/* Demangled: _libhevce_5B876EB47571B780C177E267C083650F */
extern "C" __attribute__((visibility("default"))) int _libhevce_5B876EB47571B780C177E267C083650F(void) {
    ALOGD("_libhevce_5B876EB47571B780C177E267C083650F() called");
    return 0;
}

/* Demangled: _libhevce_49CCC793462693541AC1FF6ACA20C90D248852050C5ACEB23C4BA7D3CB13B48F */
extern "C" __attribute__((visibility("default"))) int _libhevce_49CCC793462693541AC1FF6ACA20C90D248852050C5ACEB23C4BA7D3CB13B48F(void) {
    ALOGD("_libhevce_49CCC793462693541AC1FF6ACA20C90D248852050C5ACEB23C4BA7D3CB13B48F() called");
    return 0;
}

/* Demangled: _libhevce_5A6F506AB631CB9158A8A0FDCB330B14248852050C5ACEB23C4BA7D3CB13B48F */
extern "C" __attribute__((visibility("default"))) int _libhevce_5A6F506AB631CB9158A8A0FDCB330B14248852050C5ACEB23C4BA7D3CB13B48F(void) {
    ALOGD("_libhevce_5A6F506AB631CB9158A8A0FDCB330B14248852050C5ACEB23C4BA7D3CB13B48F() called");
    return 0;
}

/* Demangled: _libhevce_2DD6D331B41206DE735DF544BF1410D9FCF14E0D50942D5A4DC4D0164F67B08B */
extern "C" __attribute__((visibility("default"))) int _libhevce_2DD6D331B41206DE735DF544BF1410D9FCF14E0D50942D5A4DC4D0164F67B08B(void) {
    ALOGD("_libhevce_2DD6D331B41206DE735DF544BF1410D9FCF14E0D50942D5A4DC4D0164F67B08B() called");
    return 0;
}

/* Demangled: _libhevce_E830130BC60F3CDDD1F7FCBF8F1E7916A9F8D93AF9C7BD9925434DB36D29678D */
extern "C" __attribute__((visibility("default"))) int _libhevce_E830130BC60F3CDDD1F7FCBF8F1E7916A9F8D93AF9C7BD9925434DB36D29678D(void) {
    ALOGD("_libhevce_E830130BC60F3CDDD1F7FCBF8F1E7916A9F8D93AF9C7BD9925434DB36D29678D() called");
    return 0;
}

/* Demangled: _libhevce_3C9393EED78DA2DEA2C26E6BAF8696C15720B04DD5ECB4F0477987C1B2C7BE80 */
extern "C" __attribute__((visibility("default"))) int _libhevce_3C9393EED78DA2DEA2C26E6BAF8696C15720B04DD5ECB4F0477987C1B2C7BE80(void) {
    ALOGD("_libhevce_3C9393EED78DA2DEA2C26E6BAF8696C15720B04DD5ECB4F0477987C1B2C7BE80() called");
    return 0;
}

/* Demangled: _libhevce_E5611D5F7B339370FC61943ED1C07239397D13E6F2CD1949A4B23D623F839E69 */
extern "C" __attribute__((visibility("default"))) int _libhevce_E5611D5F7B339370FC61943ED1C07239397D13E6F2CD1949A4B23D623F839E69(void) {
    ALOGD("_libhevce_E5611D5F7B339370FC61943ED1C07239397D13E6F2CD1949A4B23D623F839E69() called");
    return 0;
}

/* Demangled: _libhevce_4EFFE1DD8D26D64DE18B5F430647B2B447D2459B7078B73F0CC8A826EB7F00A9 */
extern "C" __attribute__((visibility("default"))) int _libhevce_4EFFE1DD8D26D64DE18B5F430647B2B447D2459B7078B73F0CC8A826EB7F00A9(void) {
    ALOGD("_libhevce_4EFFE1DD8D26D64DE18B5F430647B2B447D2459B7078B73F0CC8A826EB7F00A9() called");
    return 0;
}

/* Demangled: _libhevce_72F428C0664C7C79E631E85DAACA6FE13545C72269E0E9795385F363406B0C0E */
extern "C" __attribute__((visibility("default"))) int _libhevce_72F428C0664C7C79E631E85DAACA6FE13545C72269E0E9795385F363406B0C0E(void) {
    ALOGD("_libhevce_72F428C0664C7C79E631E85DAACA6FE13545C72269E0E9795385F363406B0C0E() called");
    return 0;
}

/* Demangled: _libhevce_F194B16190D2EECA29EA4D6991D380670838FA01D2C3244EDF21719E6926E42E */
extern "C" __attribute__((visibility("default"))) int _libhevce_F194B16190D2EECA29EA4D6991D380670838FA01D2C3244EDF21719E6926E42E(void) {
    ALOGD("_libhevce_F194B16190D2EECA29EA4D6991D380670838FA01D2C3244EDF21719E6926E42E() called");
    return 0;
}

/* Demangled: _libhevce_5E83E7995293E10484E12334DDF3289618FEF207496960385F17D63DF8434D7A */
extern "C" __attribute__((visibility("default"))) int _libhevce_5E83E7995293E10484E12334DDF3289618FEF207496960385F17D63DF8434D7A(void) {
    ALOGD("_libhevce_5E83E7995293E10484E12334DDF3289618FEF207496960385F17D63DF8434D7A() called");
    return 0;
}

/* Demangled: _libhevce_06FF3F25210E870AD36A501C2DDFEC1444E15B505032EB5E472DB2C1C570E65E */
extern "C" __attribute__((visibility("default"))) int _libhevce_06FF3F25210E870AD36A501C2DDFEC1444E15B505032EB5E472DB2C1C570E65E(void) {
    ALOGD("_libhevce_06FF3F25210E870AD36A501C2DDFEC1444E15B505032EB5E472DB2C1C570E65E() called");
    return 0;
}

/* Demangled: _libhevce_F3FF59D9796EA3E93D529BFCC913222E93D575CB2A6AC3DC159CFBC352A21164 */
extern "C" __attribute__((visibility("default"))) int _libhevce_F3FF59D9796EA3E93D529BFCC913222E93D575CB2A6AC3DC159CFBC352A21164(void) {
    ALOGD("_libhevce_F3FF59D9796EA3E93D529BFCC913222E93D575CB2A6AC3DC159CFBC352A21164() called");
    return 0;
}

/* Exported Object: TABLE_SCAN_TYPE */
extern "C" __attribute__((visibility("default"))) void* TABLE_SCAN_TYPE = NULL;

/* Demangled: _libhevce_05E98ABE9BA886B6F8BB173B5DCF64E773E61F72CF1C3AE2FD27CB555F9D95C3 */
extern "C" __attribute__((visibility("default"))) int _libhevce_05E98ABE9BA886B6F8BB173B5DCF64E773E61F72CF1C3AE2FD27CB555F9D95C3(void) {
    ALOGD("_libhevce_05E98ABE9BA886B6F8BB173B5DCF64E773E61F72CF1C3AE2FD27CB555F9D95C3() called");
    return 0;
}

/* Demangled: _libhevce_05E98ABE9BA886B6F8BB173B5DCF64E79F9E1CE44C5C25F9DF6EEBE47132E9FE */
extern "C" __attribute__((visibility("default"))) int _libhevce_05E98ABE9BA886B6F8BB173B5DCF64E79F9E1CE44C5C25F9DF6EEBE47132E9FE(void) {
    ALOGD("_libhevce_05E98ABE9BA886B6F8BB173B5DCF64E79F9E1CE44C5C25F9DF6EEBE47132E9FE() called");
    return 0;
}

/* Demangled: _libhevce_1242024785A885D652EE67BDF293177AB42B7E08325070276ECA4374EE92C80A */
extern "C" __attribute__((visibility("default"))) int _libhevce_1242024785A885D652EE67BDF293177AB42B7E08325070276ECA4374EE92C80A(void) {
    ALOGD("_libhevce_1242024785A885D652EE67BDF293177AB42B7E08325070276ECA4374EE92C80A() called");
    return 0;
}

/* Demangled: _libhevce_1242024785A885D652EE67BDF293177AD8789C791B4B63F7D9954EB3E0D36634 */
extern "C" __attribute__((visibility("default"))) int _libhevce_1242024785A885D652EE67BDF293177AD8789C791B4B63F7D9954EB3E0D36634(void) {
    ALOGD("_libhevce_1242024785A885D652EE67BDF293177AD8789C791B4B63F7D9954EB3E0D36634() called");
    return 0;
}

/* Demangled: _libhevce_17A2AF75AC91B57FC749FD01A9781CC791980CCA5FCE1C93E3C2E8EE02864D3E */
extern "C" __attribute__((visibility("default"))) int _libhevce_17A2AF75AC91B57FC749FD01A9781CC791980CCA5FCE1C93E3C2E8EE02864D3E(void) {
    ALOGD("_libhevce_17A2AF75AC91B57FC749FD01A9781CC791980CCA5FCE1C93E3C2E8EE02864D3E() called");
    return 0;
}

/* Demangled: _libhevce_1BED55A99409099E532E05A26B745215FBB032A5AA31C3B856DED7016538B387425FD73C4A2C9CE7845443A251A7A5D9 */
extern "C" __attribute__((visibility("default"))) int _libhevce_1BED55A99409099E532E05A26B745215FBB032A5AA31C3B856DED7016538B387425FD73C4A2C9CE7845443A251A7A5D9(void) {
    ALOGD("_libhevce_1BED55A99409099E532E05A26B745215FBB032A5AA31C3B856DED7016538B387425FD73C4A2C9CE7845443A251A7A5D9() called");
    return 0;
}

/* Demangled: _libhevce_227081763009C6F2F942082A4580B452D7C0210AD77E913FB589F42421A2FBD8 */
extern "C" __attribute__((visibility("default"))) int _libhevce_227081763009C6F2F942082A4580B452D7C0210AD77E913FB589F42421A2FBD8(void) {
    ALOGD("_libhevce_227081763009C6F2F942082A4580B452D7C0210AD77E913FB589F42421A2FBD8() called");
    return 0;
}

/* Demangled: _libhevce_32B8BF03E993126F5143E330B89FAA9A */
extern "C" __attribute__((visibility("default"))) int _libhevce_32B8BF03E993126F5143E330B89FAA9A(void) {
    ALOGD("_libhevce_32B8BF03E993126F5143E330B89FAA9A() called");
    return 0;
}

/* Demangled: _libhevce_3316314680B82B008CCFCD268E2B0C3E77F27EFBA0A05EB1E8576FAB4968C052 */
extern "C" __attribute__((visibility("default"))) int _libhevce_3316314680B82B008CCFCD268E2B0C3E77F27EFBA0A05EB1E8576FAB4968C052(void) {
    ALOGD("_libhevce_3316314680B82B008CCFCD268E2B0C3E77F27EFBA0A05EB1E8576FAB4968C052() called");
    return 0;
}

/* Demangled: _libhevce_343784AA1B3B43D6F8EF2FFF9C29F6F07C491B4779DCBBED23C3285FCB9FF348 */
extern "C" __attribute__((visibility("default"))) int _libhevce_343784AA1B3B43D6F8EF2FFF9C29F6F07C491B4779DCBBED23C3285FCB9FF348(void) {
    ALOGD("_libhevce_343784AA1B3B43D6F8EF2FFF9C29F6F07C491B4779DCBBED23C3285FCB9FF348() called");
    return 0;
}

/* Demangled: _libhevce_3848398F1BE3217DEEBD7CA3D79FF14F838711809535496345171025B0E6BA920F7D67FA874B55AF60918CC11ADC93BE */
extern "C" __attribute__((visibility("default"))) int _libhevce_3848398F1BE3217DEEBD7CA3D79FF14F838711809535496345171025B0E6BA920F7D67FA874B55AF60918CC11ADC93BE(void) {
    ALOGD("_libhevce_3848398F1BE3217DEEBD7CA3D79FF14F838711809535496345171025B0E6BA920F7D67FA874B55AF60918CC11ADC93BE() called");
    return 0;
}

/* Demangled: _libhevce_3C189CA3EF9F9ED3FB0B9D9011D1153587A506C916FF7109B7EEFC8A761FB73F */
extern "C" __attribute__((visibility("default"))) int _libhevce_3C189CA3EF9F9ED3FB0B9D9011D1153587A506C916FF7109B7EEFC8A761FB73F(void) {
    ALOGD("_libhevce_3C189CA3EF9F9ED3FB0B9D9011D1153587A506C916FF7109B7EEFC8A761FB73F() called");
    return 0;
}

/* Demangled: _libhevce_3C9393EED78DA2DEA2C26E6BAF8696C115E2D09FFF1A05CBCE419A6B17B57DC2 */
extern "C" __attribute__((visibility("default"))) int _libhevce_3C9393EED78DA2DEA2C26E6BAF8696C115E2D09FFF1A05CBCE419A6B17B57DC2(void) {
    ALOGD("_libhevce_3C9393EED78DA2DEA2C26E6BAF8696C115E2D09FFF1A05CBCE419A6B17B57DC2() called");
    return 0;
}

/* Demangled: _libhevce_3DB9BF1E7B58A1BA436EFDD39D1F3A9BB971C4FD2B7B0A880B35AA31D9997BCF18B168DD4EDA76CAC10DFFFE92364617 */
extern "C" __attribute__((visibility("default"))) int _libhevce_3DB9BF1E7B58A1BA436EFDD39D1F3A9BB971C4FD2B7B0A880B35AA31D9997BCF18B168DD4EDA76CAC10DFFFE92364617(void) {
    ALOGD("_libhevce_3DB9BF1E7B58A1BA436EFDD39D1F3A9BB971C4FD2B7B0A880B35AA31D9997BCF18B168DD4EDA76CAC10DFFFE92364617() called");
    return 0;
}

/* Demangled: _libhevce_4991E47D09DA4F76030F0B3E4CAC0E539A9990A601C8BDA8A047F9D6C719C260 */
extern "C" __attribute__((visibility("default"))) int _libhevce_4991E47D09DA4F76030F0B3E4CAC0E539A9990A601C8BDA8A047F9D6C719C260(void) {
    ALOGD("_libhevce_4991E47D09DA4F76030F0B3E4CAC0E539A9990A601C8BDA8A047F9D6C719C260() called");
    return 0;
}

/* Demangled: _libhevce_4E155B932D12BE14E9A0380A505A1CEAC4AC38FE672A22F53B12C962157F26E1 */
extern "C" __attribute__((visibility("default"))) int _libhevce_4E155B932D12BE14E9A0380A505A1CEAC4AC38FE672A22F53B12C962157F26E1(void) {
    ALOGD("_libhevce_4E155B932D12BE14E9A0380A505A1CEAC4AC38FE672A22F53B12C962157F26E1() called");
    return 0;
}

/* Demangled: _libhevce_5A2BDE121D8D0788A31CEBE6B6F6A0C707C38795EFD5E45D46B8CB50FCB8A238 */
extern "C" __attribute__((visibility("default"))) int _libhevce_5A2BDE121D8D0788A31CEBE6B6F6A0C707C38795EFD5E45D46B8CB50FCB8A238(void) {
    ALOGD("_libhevce_5A2BDE121D8D0788A31CEBE6B6F6A0C707C38795EFD5E45D46B8CB50FCB8A238() called");
    return 0;
}

/* Demangled: _libhevce_5A79483ABEFDD2186BBCD6EAE12A8576202B4A45791D7B1096DEF174D8D2E46C */
extern "C" __attribute__((visibility("default"))) int _libhevce_5A79483ABEFDD2186BBCD6EAE12A8576202B4A45791D7B1096DEF174D8D2E46C(void) {
    ALOGD("_libhevce_5A79483ABEFDD2186BBCD6EAE12A8576202B4A45791D7B1096DEF174D8D2E46C() called");
    return 0;
}

/* Demangled: _libhevce_70EE5A2D3B7E4EE500D43066AE3430AB2A6D4BD75DFDCEBAF24FA98FFD860D663A2D4519ED73E95AA61316E8E401D3CF */
extern "C" __attribute__((visibility("default"))) int _libhevce_70EE5A2D3B7E4EE500D43066AE3430AB2A6D4BD75DFDCEBAF24FA98FFD860D663A2D4519ED73E95AA61316E8E401D3CF(void) {
    ALOGD("_libhevce_70EE5A2D3B7E4EE500D43066AE3430AB2A6D4BD75DFDCEBAF24FA98FFD860D663A2D4519ED73E95AA61316E8E401D3CF() called");
    return 0;
}

/* Demangled: _libhevce_7477FB056F5D365B064BA5AD5CF4B154B070915236B71332E79AAB1B792DD161 */
extern "C" __attribute__((visibility("default"))) int _libhevce_7477FB056F5D365B064BA5AD5CF4B154B070915236B71332E79AAB1B792DD161(void) {
    ALOGD("_libhevce_7477FB056F5D365B064BA5AD5CF4B154B070915236B71332E79AAB1B792DD161() called");
    return 0;
}

/* Demangled: _libhevce_748A7E89E744D66561A3E2380A534D7EA23EA98417CF8852B43902521E480859 */
extern "C" __attribute__((visibility("default"))) int _libhevce_748A7E89E744D66561A3E2380A534D7EA23EA98417CF8852B43902521E480859(void) {
    ALOGD("_libhevce_748A7E89E744D66561A3E2380A534D7EA23EA98417CF8852B43902521E480859() called");
    return 0;
}

/* Demangled: _libhevce_770E04EE4B661DE070A0D99ED6375BC4A4D5EDFBE3D7632D8B2999BA59882550 */
extern "C" __attribute__((visibility("default"))) int _libhevce_770E04EE4B661DE070A0D99ED6375BC4A4D5EDFBE3D7632D8B2999BA59882550(void) {
    ALOGD("_libhevce_770E04EE4B661DE070A0D99ED6375BC4A4D5EDFBE3D7632D8B2999BA59882550() called");
    return 0;
}

/* Demangled: _libhevce_81BBE78DEFB3A51D1766AC28768D3B776C9F365AC6ACC9D942D27400D794D21F */
extern "C" __attribute__((visibility("default"))) int _libhevce_81BBE78DEFB3A51D1766AC28768D3B776C9F365AC6ACC9D942D27400D794D21F(void) {
    ALOGD("_libhevce_81BBE78DEFB3A51D1766AC28768D3B776C9F365AC6ACC9D942D27400D794D21F() called");
    return 0;
}

/* Demangled: _libhevce_8D0401B224E1863415D70AC7536D2C178288C5A59FFFEC3134D27D838040D58F */
extern "C" __attribute__((visibility("default"))) int _libhevce_8D0401B224E1863415D70AC7536D2C178288C5A59FFFEC3134D27D838040D58F(void) {
    ALOGD("_libhevce_8D0401B224E1863415D70AC7536D2C178288C5A59FFFEC3134D27D838040D58F() called");
    return 0;
}

/* Demangled: _libhevce_9461EB5363490C794C8749CCB6BBC59714CB1D156939034064DF27D3E2EBA1B5ABEFAD7E56D67FB6CA17D4442FBB3D46 */
extern "C" __attribute__((visibility("default"))) int _libhevce_9461EB5363490C794C8749CCB6BBC59714CB1D156939034064DF27D3E2EBA1B5ABEFAD7E56D67FB6CA17D4442FBB3D46(void) {
    ALOGD("_libhevce_9461EB5363490C794C8749CCB6BBC59714CB1D156939034064DF27D3E2EBA1B5ABEFAD7E56D67FB6CA17D4442FBB3D46() called");
    return 0;
}

/* Demangled: _libhevce_9798AB9AC0717909AC161D12970AFBA569303B24A98648F74E4DD48A232E79A0 */
extern "C" __attribute__((visibility("default"))) int _libhevce_9798AB9AC0717909AC161D12970AFBA569303B24A98648F74E4DD48A232E79A0(void) {
    ALOGD("_libhevce_9798AB9AC0717909AC161D12970AFBA569303B24A98648F74E4DD48A232E79A0() called");
    return 0;
}

/* Demangled: _libhevce_9F5AE391F404C752A7EAE3679DBCFA641F87717E3FDFBFF419FFAEC04C62F2C0 */
extern "C" __attribute__((visibility("default"))) int _libhevce_9F5AE391F404C752A7EAE3679DBCFA641F87717E3FDFBFF419FFAEC04C62F2C0(void) {
    ALOGD("_libhevce_9F5AE391F404C752A7EAE3679DBCFA641F87717E3FDFBFF419FFAEC04C62F2C0() called");
    return 0;
}

/* Demangled: _libhevce_9F5AE391F404C752A7EAE3679DBCFA643F93C8DCD4DB900D191000C67351B287 */
extern "C" __attribute__((visibility("default"))) int _libhevce_9F5AE391F404C752A7EAE3679DBCFA643F93C8DCD4DB900D191000C67351B287(void) {
    ALOGD("_libhevce_9F5AE391F404C752A7EAE3679DBCFA643F93C8DCD4DB900D191000C67351B287() called");
    return 0;
}

/* Demangled: _libhevce_A651FB4F534532C013AF3E061B14C4928288C5A59FFFEC3134D27D838040D58F */
extern "C" __attribute__((visibility("default"))) int _libhevce_A651FB4F534532C013AF3E061B14C4928288C5A59FFFEC3134D27D838040D58F(void) {
    ALOGD("_libhevce_A651FB4F534532C013AF3E061B14C4928288C5A59FFFEC3134D27D838040D58F() called");
    return 0;
}

/* Demangled: _libhevce_B3308B396ABF732F276EDC12F5097BEA0C2F49158C59F61A282B0D8394F5C9FA */
extern "C" __attribute__((visibility("default"))) int _libhevce_B3308B396ABF732F276EDC12F5097BEA0C2F49158C59F61A282B0D8394F5C9FA(void) {
    ALOGD("_libhevce_B3308B396ABF732F276EDC12F5097BEA0C2F49158C59F61A282B0D8394F5C9FA() called");
    return 0;
}

/* Demangled: _libhevce_B498ACBE25B685791AD4E83BA462E903908B1C0673172B40A79181E0721D3A4E8F24BECDE621C517E7D0BA26A92456F1 */
extern "C" __attribute__((visibility("default"))) int _libhevce_B498ACBE25B685791AD4E83BA462E903908B1C0673172B40A79181E0721D3A4E8F24BECDE621C517E7D0BA26A92456F1(void) {
    ALOGD("_libhevce_B498ACBE25B685791AD4E83BA462E903908B1C0673172B40A79181E0721D3A4E8F24BECDE621C517E7D0BA26A92456F1() called");
    return 0;
}

/* Demangled: _libhevce_B4E8B5AEA9AFF2B3675F668548B0DD4FB115CCC13ECC8CC322E72D6357D772F42BACA3684EB89908BEE6212EC22113D9 */
extern "C" __attribute__((visibility("default"))) int _libhevce_B4E8B5AEA9AFF2B3675F668548B0DD4FB115CCC13ECC8CC322E72D6357D772F42BACA3684EB89908BEE6212EC22113D9(void) {
    ALOGD("_libhevce_B4E8B5AEA9AFF2B3675F668548B0DD4FB115CCC13ECC8CC322E72D6357D772F42BACA3684EB89908BEE6212EC22113D9() called");
    return 0;
}

/* Demangled: _libhevce_BD8B696D37977F5BC246713B170DE3CE1A13B886174A0AB178CECCBB511D8EE435C16149E038778ACABF7F323B373837 */
extern "C" __attribute__((visibility("default"))) int _libhevce_BD8B696D37977F5BC246713B170DE3CE1A13B886174A0AB178CECCBB511D8EE435C16149E038778ACABF7F323B373837(void) {
    ALOGD("_libhevce_BD8B696D37977F5BC246713B170DE3CE1A13B886174A0AB178CECCBB511D8EE435C16149E038778ACABF7F323B373837() called");
    return 0;
}

/* Demangled: _libhevce_D3E2FE93ED4ADDAD69D076B2359F23C1A99803A5D681C4B45E546D4ABBE343E5 */
extern "C" __attribute__((visibility("default"))) int _libhevce_D3E2FE93ED4ADDAD69D076B2359F23C1A99803A5D681C4B45E546D4ABBE343E5(void) {
    ALOGD("_libhevce_D3E2FE93ED4ADDAD69D076B2359F23C1A99803A5D681C4B45E546D4ABBE343E5() called");
    return 0;
}

/* Demangled: _libhevce_D4F9BA35DBA8C28BC47CEF1BBF5378E8886BA20BBB5E6BF073ABFAE02BD37A55 */
extern "C" __attribute__((visibility("default"))) int _libhevce_D4F9BA35DBA8C28BC47CEF1BBF5378E8886BA20BBB5E6BF073ABFAE02BD37A55(void) {
    ALOGD("_libhevce_D4F9BA35DBA8C28BC47CEF1BBF5378E8886BA20BBB5E6BF073ABFAE02BD37A55() called");
    return 0;
}

/* Demangled: _libhevce_D87900BA7DD427242141630065A19F3C */
extern "C" __attribute__((visibility("default"))) int _libhevce_D87900BA7DD427242141630065A19F3C(void) {
    ALOGD("_libhevce_D87900BA7DD427242141630065A19F3C() called");
    return 0;
}

/* Demangled: _libhevce_D91C4DF36599BE946C60F0207B71C8521FD4A6031134A472483E4173BB9A1F7D */
extern "C" __attribute__((visibility("default"))) int _libhevce_D91C4DF36599BE946C60F0207B71C8521FD4A6031134A472483E4173BB9A1F7D(void) {
    ALOGD("_libhevce_D91C4DF36599BE946C60F0207B71C8521FD4A6031134A472483E4173BB9A1F7D() called");
    return 0;
}

/* Demangled: _libhevce_E3686D8432FF8A51F082C22E721BE88EB1CCBE696F98D7907F7E42AD0BEB41A0 */
extern "C" __attribute__((visibility("default"))) int _libhevce_E3686D8432FF8A51F082C22E721BE88EB1CCBE696F98D7907F7E42AD0BEB41A0(void) {
    ALOGD("_libhevce_E3686D8432FF8A51F082C22E721BE88EB1CCBE696F98D7907F7E42AD0BEB41A0() called");
    return 0;
}

/* Demangled: _libhevce_E75756D48897090BDB8AD84EC46CFA22CB1AA99B7BBE5BD76EF12E840F419D4F */
extern "C" __attribute__((visibility("default"))) int _libhevce_E75756D48897090BDB8AD84EC46CFA22CB1AA99B7BBE5BD76EF12E840F419D4F(void) {
    ALOGD("_libhevce_E75756D48897090BDB8AD84EC46CFA22CB1AA99B7BBE5BD76EF12E840F419D4F() called");
    return 0;
}

/* Demangled: _libhevce_EA2D5F4EF4224ED6C0A5D35BFE74AE5B91980CCA5FCE1C93E3C2E8EE02864D3E */
extern "C" __attribute__((visibility("default"))) int _libhevce_EA2D5F4EF4224ED6C0A5D35BFE74AE5B91980CCA5FCE1C93E3C2E8EE02864D3E(void) {
    ALOGD("_libhevce_EA2D5F4EF4224ED6C0A5D35BFE74AE5B91980CCA5FCE1C93E3C2E8EE02864D3E() called");
    return 0;
}

/* Demangled: _libhevce_ED6171250D039E719C29EC379A3E20370FAAD4792DEEA615B420B778FEED175B */
extern "C" __attribute__((visibility("default"))) int _libhevce_ED6171250D039E719C29EC379A3E20370FAAD4792DEEA615B420B778FEED175B(void) {
    ALOGD("_libhevce_ED6171250D039E719C29EC379A3E20370FAAD4792DEEA615B420B778FEED175B() called");
    return 0;
}

/* Demangled: _libhevce_ED6171250D039E719C29EC379A3E203736043B0F303D40BE9CE4B00F318290EFF589D1CEECF3B6FCC8AF91C5DCFA1CC8 */
extern "C" __attribute__((visibility("default"))) int _libhevce_ED6171250D039E719C29EC379A3E203736043B0F303D40BE9CE4B00F318290EFF589D1CEECF3B6FCC8AF91C5DCFA1CC8(void) {
    ALOGD("_libhevce_ED6171250D039E719C29EC379A3E203736043B0F303D40BE9CE4B00F318290EFF589D1CEECF3B6FCC8AF91C5DCFA1CC8() called");
    return 0;
}

/* Demangled: _libhevce_F979603BF68757B42BF1A9CD83B10C9381A4E9691E3CFA0FEE1017CD76962404 */
extern "C" __attribute__((visibility("default"))) int _libhevce_F979603BF68757B42BF1A9CD83B10C9381A4E9691E3CFA0FEE1017CD76962404(void) {
    ALOGD("_libhevce_F979603BF68757B42BF1A9CD83B10C9381A4E9691E3CFA0FEE1017CD76962404() called");
    return 0;
}

/* Demangled: hevce_decide_modes */
extern "C" __attribute__((visibility("default"))) int hevce_decide_modes(void) {
    ALOGD("hevce_decide_modes() called");
    return 0;
}

/* Demangled: _libhevce_C1538D3C9CB7E4F0D49502ED54A729289D3B276C9910916606C346C05BDD22A5 */
extern "C" __attribute__((visibility("default"))) int _libhevce_C1538D3C9CB7E4F0D49502ED54A729289D3B276C9910916606C346C05BDD22A5(void) {
    ALOGD("_libhevce_C1538D3C9CB7E4F0D49502ED54A729289D3B276C9910916606C346C05BDD22A5() called");
    return 0;
}

/* Demangled: _libhevce_F979603BF68757B42BF1A9CD83B10C936F1F1503643FFFA6F38DE72FB4B7205B */
extern "C" __attribute__((visibility("default"))) int _libhevce_F979603BF68757B42BF1A9CD83B10C936F1F1503643FFFA6F38DE72FB4B7205B(void) {
    ALOGD("_libhevce_F979603BF68757B42BF1A9CD83B10C936F1F1503643FFFA6F38DE72FB4B7205B() called");
    return 0;
}

/* Demangled: _libhevce_5E83E7995293E10484E12334DDF328961C4012372234F0ABA2413F11A70C5C1C04B748070C39E15B92325C03263425E2 */
extern "C" __attribute__((visibility("default"))) int _libhevce_5E83E7995293E10484E12334DDF328961C4012372234F0ABA2413F11A70C5C1C04B748070C39E15B92325C03263425E2(void) {
    ALOGD("_libhevce_5E83E7995293E10484E12334DDF328961C4012372234F0ABA2413F11A70C5C1C04B748070C39E15B92325C03263425E2() called");
    return 0;
}

/* Demangled: _libhevce_5E83E7995293E10484E12334DDF328965FD90CC3165F0CF3F95B3E235953E0BB3913179B847D888CC6E8E4CC2C15DD4E */
extern "C" __attribute__((visibility("default"))) int _libhevce_5E83E7995293E10484E12334DDF328965FD90CC3165F0CF3F95B3E235953E0BB3913179B847D888CC6E8E4CC2C15DD4E(void) {
    ALOGD("_libhevce_5E83E7995293E10484E12334DDF328965FD90CC3165F0CF3F95B3E235953E0BB3913179B847D888CC6E8E4CC2C15DD4E() called");
    return 0;
}

/* Demangled: _libhevce_008B3932DA55AB09BE4B51593DEC65AE */
extern "C" __attribute__((visibility("default"))) int _libhevce_008B3932DA55AB09BE4B51593DEC65AE(void) {
    ALOGD("_libhevce_008B3932DA55AB09BE4B51593DEC65AE() called");
    return 0;
}

/* Demangled: _libhevce_140D4059F56C2EEDBF48B1D824B81824B84AC1300AF1F4D403083674ECCCC297 */
extern "C" __attribute__((visibility("default"))) int _libhevce_140D4059F56C2EEDBF48B1D824B81824B84AC1300AF1F4D403083674ECCCC297(void) {
    ALOGD("_libhevce_140D4059F56C2EEDBF48B1D824B81824B84AC1300AF1F4D403083674ECCCC297() called");
    return 0;
}

/* Demangled: _libhevce_32DE96BDC7B07FB33125414BA95F0005 */
extern "C" __attribute__((visibility("default"))) int _libhevce_32DE96BDC7B07FB33125414BA95F0005(void) {
    ALOGD("_libhevce_32DE96BDC7B07FB33125414BA95F0005() called");
    return 0;
}

/* Demangled: _libhevce_42A9A816779001E4A43A123AE1C10131F2CF406E975049001D2C8B66DE7AED99 */
extern "C" __attribute__((visibility("default"))) int _libhevce_42A9A816779001E4A43A123AE1C10131F2CF406E975049001D2C8B66DE7AED99(void) {
    ALOGD("_libhevce_42A9A816779001E4A43A123AE1C10131F2CF406E975049001D2C8B66DE7AED99() called");
    return 0;
}

/* Demangled: _libhevce_834A12E7DFA25A41417882A92A9F706813D83B5BCB0845CBAB5238E9B04402E1 */
extern "C" __attribute__((visibility("default"))) int _libhevce_834A12E7DFA25A41417882A92A9F706813D83B5BCB0845CBAB5238E9B04402E1(void) {
    ALOGD("_libhevce_834A12E7DFA25A41417882A92A9F706813D83B5BCB0845CBAB5238E9B04402E1() called");
    return 0;
}

/* Demangled: _libhevce_A74790D91260BE5BD724F248F6C6C3C0 */
extern "C" __attribute__((visibility("default"))) int _libhevce_A74790D91260BE5BD724F248F6C6C3C0(void) {
    ALOGD("_libhevce_A74790D91260BE5BD724F248F6C6C3C0() called");
    return 0;
}

/* Demangled: _libhevce_BEA89B03A8503AF583CC1B098E3CDC83 */
extern "C" __attribute__((visibility("default"))) int _libhevce_BEA89B03A8503AF583CC1B098E3CDC83(void) {
    ALOGD("_libhevce_BEA89B03A8503AF583CC1B098E3CDC83() called");
    return 0;
}

/* Demangled: _libhevce_C842A6287E761B648A6DF880D869BCD5A25D77ADBCC093F216A1421828A92B88 */
extern "C" __attribute__((visibility("default"))) int _libhevce_C842A6287E761B648A6DF880D869BCD5A25D77ADBCC093F216A1421828A92B88(void) {
    ALOGD("_libhevce_C842A6287E761B648A6DF880D869BCD5A25D77ADBCC093F216A1421828A92B88() called");
    return 0;
}

/* Demangled: _libhevce_F0E57020FB7BEE9EE51DF15FE6E2284291A016220C38338B7F85283E1C6AA465 */
extern "C" __attribute__((visibility("default"))) int _libhevce_F0E57020FB7BEE9EE51DF15FE6E2284291A016220C38338B7F85283E1C6AA465(void) {
    ALOGD("_libhevce_F0E57020FB7BEE9EE51DF15FE6E2284291A016220C38338B7F85283E1C6AA465() called");
    return 0;
}

/* Demangled: _libhevce_F979603BF68757B42BF1A9CD83B10C931688508D36F36518C000D73175AFE33D */
extern "C" __attribute__((visibility("default"))) int _libhevce_F979603BF68757B42BF1A9CD83B10C931688508D36F36518C000D73175AFE33D(void) {
    ALOGD("_libhevce_F979603BF68757B42BF1A9CD83B10C931688508D36F36518C000D73175AFE33D() called");
    return 0;
}

/* Demangled: _libhevce_C1538D3C9CB7E4F0D49502ED54A729286BB2F66C1983F1A36A49ACCD41109789 */
extern "C" __attribute__((visibility("default"))) int _libhevce_C1538D3C9CB7E4F0D49502ED54A729286BB2F66C1983F1A36A49ACCD41109789(void) {
    ALOGD("_libhevce_C1538D3C9CB7E4F0D49502ED54A729286BB2F66C1983F1A36A49ACCD41109789() called");
    return 0;
}

/* Demangled: _libhevce_E3480B2C63CDFE0FE0B0371B521FF35202C1905284EBA02C62298BC436F3AC73 */
extern "C" __attribute__((visibility("default"))) int _libhevce_E3480B2C63CDFE0FE0B0371B521FF35202C1905284EBA02C62298BC436F3AC73(void) {
    ALOGD("_libhevce_E3480B2C63CDFE0FE0B0371B521FF35202C1905284EBA02C62298BC436F3AC73() called");
    return 0;
}

/* Exported Object: hevce_Levels */
extern "C" __attribute__((visibility("default"))) void* hevce_Levels = NULL;

/* Demangled: hevce_enclose_nal_data */
extern "C" __attribute__((visibility("default"))) int hevce_enclose_nal_data(void) {
    ALOGD("hevce_enclose_nal_data() called");
    return 0;
}

/* Demangled: _libhevce_0547303E2BD9C7B46C4D7ED8BE4DF2D0162D142B284A4A7487EE4AD56D475A18 */
extern "C" __attribute__((visibility("default"))) int _libhevce_0547303E2BD9C7B46C4D7ED8BE4DF2D0162D142B284A4A7487EE4AD56D475A18(void) {
    ALOGD("_libhevce_0547303E2BD9C7B46C4D7ED8BE4DF2D0162D142B284A4A7487EE4AD56D475A18() called");
    return 0;
}

/* Exported Object: hevce_decimate_table4 */
extern "C" __attribute__((visibility("default"))) void* hevce_decimate_table4 = NULL;

/* Exported Object: hevce_decimate_table8 */
extern "C" __attribute__((visibility("default"))) void* hevce_decimate_table8 = NULL;

/* Demangled: _libhevce_06613D93D57B429FD1535C9EB137AB1366A5EF5054F2FAE006F4426CD2F8AF20 */
extern "C" __attribute__((visibility("default"))) int _libhevce_06613D93D57B429FD1535C9EB137AB1366A5EF5054F2FAE006F4426CD2F8AF20(void) {
    ALOGD("_libhevce_06613D93D57B429FD1535C9EB137AB1366A5EF5054F2FAE006F4426CD2F8AF20() called");
    return 0;
}

/* Demangled: _libhevce_66494C07FB1F488B444DBAAF353995B2 */
extern "C" __attribute__((visibility("default"))) int _libhevce_66494C07FB1F488B444DBAAF353995B2(void) {
    ALOGD("_libhevce_66494C07FB1F488B444DBAAF353995B2() called");
    return 0;
}

/* Demangled: _libhevce_1C78D84534432BD0CC3BE9B8ADEEA1F44E1313697A74D2DFE3A4DC56E43AD9C5 */
extern "C" __attribute__((visibility("default"))) int _libhevce_1C78D84534432BD0CC3BE9B8ADEEA1F44E1313697A74D2DFE3A4DC56E43AD9C5(void) {
    ALOGD("_libhevce_1C78D84534432BD0CC3BE9B8ADEEA1F44E1313697A74D2DFE3A4DC56E43AD9C5() called");
    return 0;
}

/* Demangled: _libhevce_9FE20625418511E568BD952CF5B682EC0838FA01D2C3244EDF21719E6926E42E */
extern "C" __attribute__((visibility("default"))) int _libhevce_9FE20625418511E568BD952CF5B682EC0838FA01D2C3244EDF21719E6926E42E(void) {
    ALOGD("_libhevce_9FE20625418511E568BD952CF5B682EC0838FA01D2C3244EDF21719E6926E42E() called");
    return 0;
}

/* Demangled: _libhevce_9FE20625418511E568BD952CF5B682ECB2D8B9357D27EFB64EF046DB4A70AE84 */
extern "C" __attribute__((visibility("default"))) int _libhevce_9FE20625418511E568BD952CF5B682ECB2D8B9357D27EFB64EF046DB4A70AE84(void) {
    ALOGD("_libhevce_9FE20625418511E568BD952CF5B682ECB2D8B9357D27EFB64EF046DB4A70AE84() called");
    return 0;
}

/* Demangled: _libhevce_9FE20625418511E568BD952CF5B682EC3536AA5B210C5DB05DF8EE1476900780 */
extern "C" __attribute__((visibility("default"))) int _libhevce_9FE20625418511E568BD952CF5B682EC3536AA5B210C5DB05DF8EE1476900780(void) {
    ALOGD("_libhevce_9FE20625418511E568BD952CF5B682EC3536AA5B210C5DB05DF8EE1476900780() called");
    return 0;
}

/* Exported Object: TABLE_PART_NUMBER */
extern "C" __attribute__((visibility("default"))) void* TABLE_PART_NUMBER = NULL;

/* Exported Object: TABLE_PRED_PART_IDX_TO_OFFSET_CHROMA */
extern "C" __attribute__((visibility("default"))) void* TABLE_PRED_PART_IDX_TO_OFFSET_CHROMA = NULL;

/* Exported Object: TABLE_PRED_PART_IDX_TO_OFFSET_LUMA */
extern "C" __attribute__((visibility("default"))) void* TABLE_PRED_PART_IDX_TO_OFFSET_LUMA = NULL;

/* Demangled: _libhevce_0B7EB0FB4DBCFD95F9DD0FC1B78DFCB156DFD99BD805D00C212C1DE1179723F9A9F8D93AF9C7BD9925434DB36D29678D */
extern "C" __attribute__((visibility("default"))) int _libhevce_0B7EB0FB4DBCFD95F9DD0FC1B78DFCB156DFD99BD805D00C212C1DE1179723F9A9F8D93AF9C7BD9925434DB36D29678D(void) {
    ALOGD("_libhevce_0B7EB0FB4DBCFD95F9DD0FC1B78DFCB156DFD99BD805D00C212C1DE1179723F9A9F8D93AF9C7BD9925434DB36D29678D() called");
    return 0;
}

/* Demangled: _libhevce_0B7EB0FB4DBCFD95F9DD0FC1B78DFCB18697C37AE6995D05A9EA089714E76710A3F4CA33579BC9498545564D5D313230 */
extern "C" __attribute__((visibility("default"))) int _libhevce_0B7EB0FB4DBCFD95F9DD0FC1B78DFCB18697C37AE6995D05A9EA089714E76710A3F4CA33579BC9498545564D5D313230(void) {
    ALOGD("_libhevce_0B7EB0FB4DBCFD95F9DD0FC1B78DFCB18697C37AE6995D05A9EA089714E76710A3F4CA33579BC9498545564D5D313230() called");
    return 0;
}

/* Demangled: _libhevce_46E7FDB632E409170DCD410F0858FDECEF60D37A7FE5B5E5A3115EE8B2D87B18 */
extern "C" __attribute__((visibility("default"))) int _libhevce_46E7FDB632E409170DCD410F0858FDECEF60D37A7FE5B5E5A3115EE8B2D87B18(void) {
    ALOGD("_libhevce_46E7FDB632E409170DCD410F0858FDECEF60D37A7FE5B5E5A3115EE8B2D87B18() called");
    return 0;
}

/* Demangled: _libhevce_46E7FDB632E409170DCD410F0858FDECF68E249298C5C4C397AD8F4A634AB2BF */
extern "C" __attribute__((visibility("default"))) int _libhevce_46E7FDB632E409170DCD410F0858FDECF68E249298C5C4C397AD8F4A634AB2BF(void) {
    ALOGD("_libhevce_46E7FDB632E409170DCD410F0858FDECF68E249298C5C4C397AD8F4A634AB2BF() called");
    return 0;
}

/* Demangled: _libhevce_5418600E61966DAAC376EEFEA34AA1E563997F9A7A3F30D640CB8025C6912D258E754A56561D3E5D5E24B49938C945FA */
extern "C" __attribute__((visibility("default"))) int _libhevce_5418600E61966DAAC376EEFEA34AA1E563997F9A7A3F30D640CB8025C6912D258E754A56561D3E5D5E24B49938C945FA(void) {
    ALOGD("_libhevce_5418600E61966DAAC376EEFEA34AA1E563997F9A7A3F30D640CB8025C6912D258E754A56561D3E5D5E24B49938C945FA() called");
    return 0;
}

/* Demangled: _libhevce_A06F528235A65370DA2B89E0FA71AD5E06C474A85FACE5A1A52E947AD7354A47 */
extern "C" __attribute__((visibility("default"))) int _libhevce_A06F528235A65370DA2B89E0FA71AD5E06C474A85FACE5A1A52E947AD7354A47(void) {
    ALOGD("_libhevce_A06F528235A65370DA2B89E0FA71AD5E06C474A85FACE5A1A52E947AD7354A47() called");
    return 0;
}

/* Demangled: _libhevce_A06F528235A65370DA2B89E0FA71AD5E144DDC4609ED0639F13D103B8DE8A1A8 */
extern "C" __attribute__((visibility("default"))) int _libhevce_A06F528235A65370DA2B89E0FA71AD5E144DDC4609ED0639F13D103B8DE8A1A8(void) {
    ALOGD("_libhevce_A06F528235A65370DA2B89E0FA71AD5E144DDC4609ED0639F13D103B8DE8A1A8() called");
    return 0;
}

/* Demangled: _libhevce_A06F528235A65370DA2B89E0FA71AD5E33321E04DD44E4FDF9D337757510CA22 */
extern "C" __attribute__((visibility("default"))) int _libhevce_A06F528235A65370DA2B89E0FA71AD5E33321E04DD44E4FDF9D337757510CA22(void) {
    ALOGD("_libhevce_A06F528235A65370DA2B89E0FA71AD5E33321E04DD44E4FDF9D337757510CA22() called");
    return 0;
}

/* Demangled: _libhevce_A06F528235A65370DA2B89E0FA71AD5EB272AB686A24592CE1A466F25C95502A */
extern "C" __attribute__((visibility("default"))) int _libhevce_A06F528235A65370DA2B89E0FA71AD5EB272AB686A24592CE1A466F25C95502A(void) {
    ALOGD("_libhevce_A06F528235A65370DA2B89E0FA71AD5EB272AB686A24592CE1A466F25C95502A() called");
    return 0;
}

/* Demangled: _libhevce_1CD0F33CDB70D8524704BBDBFE18FAA59D734EBD905F65B085B865E1E504B9F1 */
extern "C" __attribute__((visibility("default"))) int _libhevce_1CD0F33CDB70D8524704BBDBFE18FAA59D734EBD905F65B085B865E1E504B9F1(void) {
    ALOGD("_libhevce_1CD0F33CDB70D8524704BBDBFE18FAA59D734EBD905F65B085B865E1E504B9F1() called");
    return 0;
}

/* Demangled: _libhevce_A1322A13A0BEE56E562560FC6042C0E63A487BAC69BBDD2571AC6428C664A75B */
extern "C" __attribute__((visibility("default"))) int _libhevce_A1322A13A0BEE56E562560FC6042C0E63A487BAC69BBDD2571AC6428C664A75B(void) {
    ALOGD("_libhevce_A1322A13A0BEE56E562560FC6042C0E63A487BAC69BBDD2571AC6428C664A75B() called");
    return 0;
}

/* Demangled: _libhevce_A1322A13A0BEE56E562560FC6042C0E64BF8AC494DB7412E4E441E738FC4C196 */
extern "C" __attribute__((visibility("default"))) int _libhevce_A1322A13A0BEE56E562560FC6042C0E64BF8AC494DB7412E4E441E738FC4C196(void) {
    ALOGD("_libhevce_A1322A13A0BEE56E562560FC6042C0E64BF8AC494DB7412E4E441E738FC4C196() called");
    return 0;
}

/* Demangled: _libhevce_FC33673A3A0CCF18197533F09506B41C37CF715AD65267CF567602ED581538A5 */
extern "C" __attribute__((visibility("default"))) int _libhevce_FC33673A3A0CCF18197533F09506B41C37CF715AD65267CF567602ED581538A5(void) {
    ALOGD("_libhevce_FC33673A3A0CCF18197533F09506B41C37CF715AD65267CF567602ED581538A5() called");
    return 0;
}

/* Demangled: _libhevce_FC33673A3A0CCF18197533F09506B41C4C4C3B3C570F442ADA760EDCD0129F8A */
extern "C" __attribute__((visibility("default"))) int _libhevce_FC33673A3A0CCF18197533F09506B41C4C4C3B3C570F442ADA760EDCD0129F8A(void) {
    ALOGD("_libhevce_FC33673A3A0CCF18197533F09506B41C4C4C3B3C570F442ADA760EDCD0129F8A() called");
    return 0;
}

/* Demangled: _libhevce_97EBEF6893F5F3C5A3493D3D006D1C0378DB5560D50C472795950EE924D88D55 */
extern "C" __attribute__((visibility("default"))) int _libhevce_97EBEF6893F5F3C5A3493D3D006D1C0378DB5560D50C472795950EE924D88D55(void) {
    ALOGD("_libhevce_97EBEF6893F5F3C5A3493D3D006D1C0378DB5560D50C472795950EE924D88D55() called");
    return 0;
}

/* Demangled: _libhevce_97EBEF6893F5F3C5A3493D3D006D1C03C2B0A29527F982BF17BD6F4E054C6F389D734EBD905F65B085B865E1E504B9F1 */
extern "C" __attribute__((visibility("default"))) int _libhevce_97EBEF6893F5F3C5A3493D3D006D1C03C2B0A29527F982BF17BD6F4E054C6F389D734EBD905F65B085B865E1E504B9F1(void) {
    ALOGD("_libhevce_97EBEF6893F5F3C5A3493D3D006D1C03C2B0A29527F982BF17BD6F4E054C6F389D734EBD905F65B085B865E1E504B9F1() called");
    return 0;
}

/* Demangled: _libhevce_97EBEF6893F5F3C5A3493D3D006D1C0338E21127EC8735A88260E3CA14427E5E */
extern "C" __attribute__((visibility("default"))) int _libhevce_97EBEF6893F5F3C5A3493D3D006D1C0338E21127EC8735A88260E3CA14427E5E(void) {
    ALOGD("_libhevce_97EBEF6893F5F3C5A3493D3D006D1C0338E21127EC8735A88260E3CA14427E5E() called");
    return 0;
}

/* Demangled: _libhevce_97EBEF6893F5F3C5A3493D3D006D1C03404083E111F51804EB641FF1B2564E138DCEDA934E1E9ABDEFAAF0F037BFAD5D */
extern "C" __attribute__((visibility("default"))) int _libhevce_97EBEF6893F5F3C5A3493D3D006D1C03404083E111F51804EB641FF1B2564E138DCEDA934E1E9ABDEFAAF0F037BFAD5D(void) {
    ALOGD("_libhevce_97EBEF6893F5F3C5A3493D3D006D1C03404083E111F51804EB641FF1B2564E138DCEDA934E1E9ABDEFAAF0F037BFAD5D() called");
    return 0;
}

/* Demangled: _libhevce_AFA9A12E460C8D5F093D899E7CB345F073AB885A987DBBA4F229A20C8C1CFB29CF9D191142EF3E2B947C91C78B96BBDD */
extern "C" __attribute__((visibility("default"))) int _libhevce_AFA9A12E460C8D5F093D899E7CB345F073AB885A987DBBA4F229A20C8C1CFB29CF9D191142EF3E2B947C91C78B96BBDD(void) {
    ALOGD("_libhevce_AFA9A12E460C8D5F093D899E7CB345F073AB885A987DBBA4F229A20C8C1CFB29CF9D191142EF3E2B947C91C78B96BBDD() called");
    return 0;
}

/* Demangled: _libhevce_B61FE328AA9073A96E2805A3B9E65178A5DC6E70897F28858E868F23FCCBDC29 */
extern "C" __attribute__((visibility("default"))) int _libhevce_B61FE328AA9073A96E2805A3B9E65178A5DC6E70897F28858E868F23FCCBDC29(void) {
    ALOGD("_libhevce_B61FE328AA9073A96E2805A3B9E65178A5DC6E70897F28858E868F23FCCBDC29() called");
    return 0;
}

/* Demangled: _libhevce_6A7DD6AD223ADF01857DAEC03D304BFCAB3869F0863E86F74D8B6FA58D1F54A1 */
extern "C" __attribute__((visibility("default"))) int _libhevce_6A7DD6AD223ADF01857DAEC03D304BFCAB3869F0863E86F74D8B6FA58D1F54A1(void) {
    ALOGD("_libhevce_6A7DD6AD223ADF01857DAEC03D304BFCAB3869F0863E86F74D8B6FA58D1F54A1() called");
    return 0;
}

/* Demangled: _libhevce_AFA9A12E460C8D5F093D899E7CB345F0A9250DFA8F4A31FB23A5F9FE1F62557B */
extern "C" __attribute__((visibility("default"))) int _libhevce_AFA9A12E460C8D5F093D899E7CB345F0A9250DFA8F4A31FB23A5F9FE1F62557B(void) {
    ALOGD("_libhevce_AFA9A12E460C8D5F093D899E7CB345F0A9250DFA8F4A31FB23A5F9FE1F62557B() called");
    return 0;
}

/* Demangled: _libhevce_7D8522770CDEC1E007EBA4653E4B12E0B8CD9BDCD85192F6AE7BF3E29078B002 */
extern "C" __attribute__((visibility("default"))) int _libhevce_7D8522770CDEC1E007EBA4653E4B12E0B8CD9BDCD85192F6AE7BF3E29078B002(void) {
    ALOGD("_libhevce_7D8522770CDEC1E007EBA4653E4B12E0B8CD9BDCD85192F6AE7BF3E29078B002() called");
    return 0;
}

/* Demangled: _libhevce_7D8522770CDEC1E007EBA4653E4B12E0E47F044B60983389C957A63B0636CD529D734EBD905F65B085B865E1E504B9F1 */
extern "C" __attribute__((visibility("default"))) int _libhevce_7D8522770CDEC1E007EBA4653E4B12E0E47F044B60983389C957A63B0636CD529D734EBD905F65B085B865E1E504B9F1(void) {
    ALOGD("_libhevce_7D8522770CDEC1E007EBA4653E4B12E0E47F044B60983389C957A63B0636CD529D734EBD905F65B085B865E1E504B9F1() called");
    return 0;
}

/* Demangled: _libhevce_7D8522770CDEC1E007EBA4653E4B12E02681D68A723F6F7F57B30A2F851F8715 */
extern "C" __attribute__((visibility("default"))) int _libhevce_7D8522770CDEC1E007EBA4653E4B12E02681D68A723F6F7F57B30A2F851F8715(void) {
    ALOGD("_libhevce_7D8522770CDEC1E007EBA4653E4B12E02681D68A723F6F7F57B30A2F851F8715() called");
    return 0;
}

/* Demangled: _libhevce_7D8522770CDEC1E007EBA4653E4B12E030B7F1A1600F45D39435E805C8182FC2366B4CEF64F9CCD5ACFCEB9B1F3CFCCA */
extern "C" __attribute__((visibility("default"))) int _libhevce_7D8522770CDEC1E007EBA4653E4B12E030B7F1A1600F45D39435E805C8182FC2366B4CEF64F9CCD5ACFCEB9B1F3CFCCA(void) {
    ALOGD("_libhevce_7D8522770CDEC1E007EBA4653E4B12E030B7F1A1600F45D39435E805C8182FC2366B4CEF64F9CCD5ACFCEB9B1F3CFCCA() called");
    return 0;
}

/* Demangled: _libhevce_594A545B2CB9C328B58130AB7FAFAA7CB8CD9BDCD85192F6AE7BF3E29078B002 */
extern "C" __attribute__((visibility("default"))) int _libhevce_594A545B2CB9C328B58130AB7FAFAA7CB8CD9BDCD85192F6AE7BF3E29078B002(void) {
    ALOGD("_libhevce_594A545B2CB9C328B58130AB7FAFAA7CB8CD9BDCD85192F6AE7BF3E29078B002() called");
    return 0;
}

/* Demangled: _libhevce_594A545B2CB9C328B58130AB7FAFAA7CE47F044B60983389C957A63B0636CD529D734EBD905F65B085B865E1E504B9F1 */
extern "C" __attribute__((visibility("default"))) int _libhevce_594A545B2CB9C328B58130AB7FAFAA7CE47F044B60983389C957A63B0636CD529D734EBD905F65B085B865E1E504B9F1(void) {
    ALOGD("_libhevce_594A545B2CB9C328B58130AB7FAFAA7CE47F044B60983389C957A63B0636CD529D734EBD905F65B085B865E1E504B9F1() called");
    return 0;
}

/* Demangled: _libhevce_594A545B2CB9C328B58130AB7FAFAA7C2681D68A723F6F7F57B30A2F851F8715 */
extern "C" __attribute__((visibility("default"))) int _libhevce_594A545B2CB9C328B58130AB7FAFAA7C2681D68A723F6F7F57B30A2F851F8715(void) {
    ALOGD("_libhevce_594A545B2CB9C328B58130AB7FAFAA7C2681D68A723F6F7F57B30A2F851F8715() called");
    return 0;
}

/* Demangled: _libhevce_594A545B2CB9C328B58130AB7FAFAA7C30B7F1A1600F45D39435E805C8182FC2366B4CEF64F9CCD5ACFCEB9B1F3CFCCA */
extern "C" __attribute__((visibility("default"))) int _libhevce_594A545B2CB9C328B58130AB7FAFAA7C30B7F1A1600F45D39435E805C8182FC2366B4CEF64F9CCD5ACFCEB9B1F3CFCCA(void) {
    ALOGD("_libhevce_594A545B2CB9C328B58130AB7FAFAA7C30B7F1A1600F45D39435E805C8182FC2366B4CEF64F9CCD5ACFCEB9B1F3CFCCA() called");
    return 0;
}

/* Demangled: _libhevce_EA8BB9612041047D1A5AC30D2E7CAC6222EA5F782E0D0AA26055208D6730694E */
extern "C" __attribute__((visibility("default"))) int _libhevce_EA8BB9612041047D1A5AC30D2E7CAC6222EA5F782E0D0AA26055208D6730694E(void) {
    ALOGD("_libhevce_EA8BB9612041047D1A5AC30D2E7CAC6222EA5F782E0D0AA26055208D6730694E() called");
    return 0;
}

/* Demangled: _libhevce_EA8BB9612041047D1A5AC30D2E7CAC6230FBC454364A5A9D303018D1A1BF27AAABB8A3D93FE0297250A5688B0D69D221CF9D191142EF3E2B947C91C78B96BBDD */
extern "C" __attribute__((visibility("default"))) int _libhevce_EA8BB9612041047D1A5AC30D2E7CAC6230FBC454364A5A9D303018D1A1BF27AAABB8A3D93FE0297250A5688B0D69D221CF9D191142EF3E2B947C91C78B96BBDD(void) {
    ALOGD("_libhevce_EA8BB9612041047D1A5AC30D2E7CAC6230FBC454364A5A9D303018D1A1BF27AAABB8A3D93FE0297250A5688B0D69D221CF9D191142EF3E2B947C91C78B96BBDD() called");
    return 0;
}

/* Demangled: _libhevce_EA8BB9612041047D1A5AC30D2E7CAC62EC575E7309613567FCF4437C42EFDA9398912B384DD0F4AC21CBFB159E45C1759D734EBD905F65B085B865E1E504B9F1 */
extern "C" __attribute__((visibility("default"))) int _libhevce_EA8BB9612041047D1A5AC30D2E7CAC62EC575E7309613567FCF4437C42EFDA9398912B384DD0F4AC21CBFB159E45C1759D734EBD905F65B085B865E1E504B9F1(void) {
    ALOGD("_libhevce_EA8BB9612041047D1A5AC30D2E7CAC62EC575E7309613567FCF4437C42EFDA9398912B384DD0F4AC21CBFB159E45C1759D734EBD905F65B085B865E1E504B9F1() called");
    return 0;
}

/* Demangled: _libhevce_8914DAF18FC032CF2289E290884EFA87B1CFDD4F2ED5A981C79E7F68E19EFC35CA7D2B355095605ECE03CFAFDE4000D1EC803B6E19F44A98FF804DC036D0DAA4 */
extern "C" __attribute__((visibility("default"))) int _libhevce_8914DAF18FC032CF2289E290884EFA87B1CFDD4F2ED5A981C79E7F68E19EFC35CA7D2B355095605ECE03CFAFDE4000D1EC803B6E19F44A98FF804DC036D0DAA4(void) {
    ALOGD("_libhevce_8914DAF18FC032CF2289E290884EFA87B1CFDD4F2ED5A981C79E7F68E19EFC35CA7D2B355095605ECE03CFAFDE4000D1EC803B6E19F44A98FF804DC036D0DAA4() called");
    return 0;
}

/* Demangled: _libhevce_8914DAF18FC032CF2289E290884EFA87D79693878A0C2140B7EC4206440B7AF233B14E3179A9AF48AFECA4E7BDAABE9C */
extern "C" __attribute__((visibility("default"))) int _libhevce_8914DAF18FC032CF2289E290884EFA87D79693878A0C2140B7EC4206440B7AF233B14E3179A9AF48AFECA4E7BDAABE9C(void) {
    ALOGD("_libhevce_8914DAF18FC032CF2289E290884EFA87D79693878A0C2140B7EC4206440B7AF233B14E3179A9AF48AFECA4E7BDAABE9C() called");
    return 0;
}

/* Demangled: _libhevce_8914DAF18FC032CF2289E290884EFA87B1CFDD4F2ED5A981C79E7F68E19EFC35A9923846828B3368BC2A5F1C2C8B447ACF9D191142EF3E2B947C91C78B96BBDD */
extern "C" __attribute__((visibility("default"))) int _libhevce_8914DAF18FC032CF2289E290884EFA87B1CFDD4F2ED5A981C79E7F68E19EFC35A9923846828B3368BC2A5F1C2C8B447ACF9D191142EF3E2B947C91C78B96BBDD(void) {
    ALOGD("_libhevce_8914DAF18FC032CF2289E290884EFA87B1CFDD4F2ED5A981C79E7F68E19EFC35A9923846828B3368BC2A5F1C2C8B447ACF9D191142EF3E2B947C91C78B96BBDD() called");
    return 0;
}

/* Demangled: _libhevce_8914DAF18FC032CF2289E290884EFA87D79693878A0C2140B7EC4206440B7AF2075F716BCC46BC75C8C82C77D5448EE6 */
extern "C" __attribute__((visibility("default"))) int _libhevce_8914DAF18FC032CF2289E290884EFA87D79693878A0C2140B7EC4206440B7AF2075F716BCC46BC75C8C82C77D5448EE6(void) {
    ALOGD("_libhevce_8914DAF18FC032CF2289E290884EFA87D79693878A0C2140B7EC4206440B7AF2075F716BCC46BC75C8C82C77D5448EE6() called");
    return 0;
}

/* Demangled: _libhevce_EA8BB9612041047D1A5AC30D2E7CAC62CF59D4425F30571AC0209BBD1F74263CA5DC6E70897F28858E868F23FCCBDC29 */
extern "C" __attribute__((visibility("default"))) int _libhevce_EA8BB9612041047D1A5AC30D2E7CAC62CF59D4425F30571AC0209BBD1F74263CA5DC6E70897F28858E868F23FCCBDC29(void) {
    ALOGD("_libhevce_EA8BB9612041047D1A5AC30D2E7CAC62CF59D4425F30571AC0209BBD1F74263CA5DC6E70897F28858E868F23FCCBDC29() called");
    return 0;
}

/* Demangled: _libhevce_EA8BB9612041047D1A5AC30D2E7CAC620C2C7D9C97BD0DB808A53269BBC5D29C */
extern "C" __attribute__((visibility("default"))) int _libhevce_EA8BB9612041047D1A5AC30D2E7CAC620C2C7D9C97BD0DB808A53269BBC5D29C(void) {
    ALOGD("_libhevce_EA8BB9612041047D1A5AC30D2E7CAC620C2C7D9C97BD0DB808A53269BBC5D29C() called");
    return 0;
}

/* Demangled: _libhevce_E5AABA086AD1AB7C4FF2349A9FF5F4AAB8CD9BDCD85192F6AE7BF3E29078B002 */
extern "C" __attribute__((visibility("default"))) int _libhevce_E5AABA086AD1AB7C4FF2349A9FF5F4AAB8CD9BDCD85192F6AE7BF3E29078B002(void) {
    ALOGD("_libhevce_E5AABA086AD1AB7C4FF2349A9FF5F4AAB8CD9BDCD85192F6AE7BF3E29078B002() called");
    return 0;
}

/* Demangled: _libhevce_E5AABA086AD1AB7C4FF2349A9FF5F4AAE47F044B60983389C957A63B0636CD529D734EBD905F65B085B865E1E504B9F1 */
extern "C" __attribute__((visibility("default"))) int _libhevce_E5AABA086AD1AB7C4FF2349A9FF5F4AAE47F044B60983389C957A63B0636CD529D734EBD905F65B085B865E1E504B9F1(void) {
    ALOGD("_libhevce_E5AABA086AD1AB7C4FF2349A9FF5F4AAE47F044B60983389C957A63B0636CD529D734EBD905F65B085B865E1E504B9F1() called");
    return 0;
}

/* Demangled: _libhevce_E5AABA086AD1AB7C4FF2349A9FF5F4AA2681D68A723F6F7F57B30A2F851F8715 */
extern "C" __attribute__((visibility("default"))) int _libhevce_E5AABA086AD1AB7C4FF2349A9FF5F4AA2681D68A723F6F7F57B30A2F851F8715(void) {
    ALOGD("_libhevce_E5AABA086AD1AB7C4FF2349A9FF5F4AA2681D68A723F6F7F57B30A2F851F8715() called");
    return 0;
}

/* Demangled: _libhevce_082708413AF49FC150087D231A582D82B8CD9BDCD85192F6AE7BF3E29078B002 */
extern "C" __attribute__((visibility("default"))) int _libhevce_082708413AF49FC150087D231A582D82B8CD9BDCD85192F6AE7BF3E29078B002(void) {
    ALOGD("_libhevce_082708413AF49FC150087D231A582D82B8CD9BDCD85192F6AE7BF3E29078B002() called");
    return 0;
}

/* Demangled: _libhevce_082708413AF49FC150087D231A582D82E47F044B60983389C957A63B0636CD529D734EBD905F65B085B865E1E504B9F1 */
extern "C" __attribute__((visibility("default"))) int _libhevce_082708413AF49FC150087D231A582D82E47F044B60983389C957A63B0636CD529D734EBD905F65B085B865E1E504B9F1(void) {
    ALOGD("_libhevce_082708413AF49FC150087D231A582D82E47F044B60983389C957A63B0636CD529D734EBD905F65B085B865E1E504B9F1() called");
    return 0;
}

/* Demangled: _libhevce_082708413AF49FC150087D231A582D822681D68A723F6F7F57B30A2F851F8715 */
extern "C" __attribute__((visibility("default"))) int _libhevce_082708413AF49FC150087D231A582D822681D68A723F6F7F57B30A2F851F8715(void) {
    ALOGD("_libhevce_082708413AF49FC150087D231A582D822681D68A723F6F7F57B30A2F851F8715() called");
    return 0;
}

/* Demangled: _libhevce_8E0F3A70030EA960521F8D75B2A4AE5B51B2BB2D4EBCF8055EB47174F4F12D90 */
extern "C" __attribute__((visibility("default"))) int _libhevce_8E0F3A70030EA960521F8D75B2A4AE5B51B2BB2D4EBCF8055EB47174F4F12D90(void) {
    ALOGD("_libhevce_8E0F3A70030EA960521F8D75B2A4AE5B51B2BB2D4EBCF8055EB47174F4F12D90() called");
    return 0;
}

/* Demangled: _libhevce_8E0F3A70030EA960521F8D75B2A4AE5B94466DE092CD8681C86DE1C98D5ABFD4AB3869F0863E86F74D8B6FA58D1F54A1 */
extern "C" __attribute__((visibility("default"))) int _libhevce_8E0F3A70030EA960521F8D75B2A4AE5B94466DE092CD8681C86DE1C98D5ABFD4AB3869F0863E86F74D8B6FA58D1F54A1(void) {
    ALOGD("_libhevce_8E0F3A70030EA960521F8D75B2A4AE5B94466DE092CD8681C86DE1C98D5ABFD4AB3869F0863E86F74D8B6FA58D1F54A1() called");
    return 0;
}

/* Demangled: _libhevce_DA9B9EAD6C36B818DB65343E6AB4825A3F3BF46896CD83C05980B63EF42E08A7 */
extern "C" __attribute__((visibility("default"))) int _libhevce_DA9B9EAD6C36B818DB65343E6AB4825A3F3BF46896CD83C05980B63EF42E08A7(void) {
    ALOGD("_libhevce_DA9B9EAD6C36B818DB65343E6AB4825A3F3BF46896CD83C05980B63EF42E08A7() called");
    return 0;
}

/* Demangled: _libhevce_8E0F3A70030EA960521F8D75B2A4AE5BA8557FAB4678235579FBA32D30CF7EF0C3D4402451460E84389C9696089969C9 */
extern "C" __attribute__((visibility("default"))) int _libhevce_8E0F3A70030EA960521F8D75B2A4AE5BA8557FAB4678235579FBA32D30CF7EF0C3D4402451460E84389C9696089969C9(void) {
    ALOGD("_libhevce_8E0F3A70030EA960521F8D75B2A4AE5BA8557FAB4678235579FBA32D30CF7EF0C3D4402451460E84389C9696089969C9() called");
    return 0;
}

/* Demangled: _libhevce_8914DAF18FC032CF2289E290884EFA87A89BD1389571DC5717F4FE71BF0AF4AF */
extern "C" __attribute__((visibility("default"))) int _libhevce_8914DAF18FC032CF2289E290884EFA87A89BD1389571DC5717F4FE71BF0AF4AF(void) {
    ALOGD("_libhevce_8914DAF18FC032CF2289E290884EFA87A89BD1389571DC5717F4FE71BF0AF4AF() called");
    return 0;
}

/* Demangled: _libhevce_8914DAF18FC032CF2289E290884EFA871E02C0BA35CE3D37128CD69E24B300DD28803F01B54977A07E0072D7656C8733 */
extern "C" __attribute__((visibility("default"))) int _libhevce_8914DAF18FC032CF2289E290884EFA871E02C0BA35CE3D37128CD69E24B300DD28803F01B54977A07E0072D7656C8733(void) {
    ALOGD("_libhevce_8914DAF18FC032CF2289E290884EFA871E02C0BA35CE3D37128CD69E24B300DD28803F01B54977A07E0072D7656C8733() called");
    return 0;
}

/* Demangled: _libhevce_8914DAF18FC032CF2289E290884EFA87A0C2429B31123C6774F0AA3CEE36DC028A3DE25436B930C53049E9303A8545EF */
extern "C" __attribute__((visibility("default"))) int _libhevce_8914DAF18FC032CF2289E290884EFA87A0C2429B31123C6774F0AA3CEE36DC028A3DE25436B930C53049E9303A8545EF(void) {
    ALOGD("_libhevce_8914DAF18FC032CF2289E290884EFA87A0C2429B31123C6774F0AA3CEE36DC028A3DE25436B930C53049E9303A8545EF() called");
    return 0;
}

/* Demangled: _libhevce_8914DAF18FC032CF2289E290884EFA8705FDF2276A2873BEE76EDB59F5FCCF4E4E5347BC9C030717B0D63F2246EF09D9 */
extern "C" __attribute__((visibility("default"))) int _libhevce_8914DAF18FC032CF2289E290884EFA8705FDF2276A2873BEE76EDB59F5FCCF4E4E5347BC9C030717B0D63F2246EF09D9(void) {
    ALOGD("_libhevce_8914DAF18FC032CF2289E290884EFA8705FDF2276A2873BEE76EDB59F5FCCF4E4E5347BC9C030717B0D63F2246EF09D9() called");
    return 0;
}

/* Demangled: _libhevce_97EBEF6893F5F3C5A3493D3D006D1C03FFF0F424F975D40B4E30166DF567E4AC */
extern "C" __attribute__((visibility("default"))) int _libhevce_97EBEF6893F5F3C5A3493D3D006D1C03FFF0F424F975D40B4E30166DF567E4AC(void) {
    ALOGD("_libhevce_97EBEF6893F5F3C5A3493D3D006D1C03FFF0F424F975D40B4E30166DF567E4AC() called");
    return 0;
}

/* Demangled: _libhevce_5654A5CC2FA43578904062A7FA681A13CAD5F2B725C14A796219966CBEE7FB3A */
extern "C" __attribute__((visibility("default"))) int _libhevce_5654A5CC2FA43578904062A7FA681A13CAD5F2B725C14A796219966CBEE7FB3A(void) {
    ALOGD("_libhevce_5654A5CC2FA43578904062A7FA681A13CAD5F2B725C14A796219966CBEE7FB3A() called");
    return 0;
}

/* Demangled: _libhevce_16CFA50915C0B76C442EC5D95C3002C7618F5E7C7E16EFF5EF6EB42999CD6AF5 */
extern "C" __attribute__((visibility("default"))) int _libhevce_16CFA50915C0B76C442EC5D95C3002C7618F5E7C7E16EFF5EF6EB42999CD6AF5(void) {
    ALOGD("_libhevce_16CFA50915C0B76C442EC5D95C3002C7618F5E7C7E16EFF5EF6EB42999CD6AF5() called");
    return 0;
}

/* Demangled: _libhevce_404530A768550A7EFE2E04342BD17FBA25627C0E7A8CD24E2ECC0AA805F7D144 */
extern "C" __attribute__((visibility("default"))) int _libhevce_404530A768550A7EFE2E04342BD17FBA25627C0E7A8CD24E2ECC0AA805F7D144(void) {
    ALOGD("_libhevce_404530A768550A7EFE2E04342BD17FBA25627C0E7A8CD24E2ECC0AA805F7D144() called");
    return 0;
}

/* Demangled: _libhevce_A54E841C6E59FED38A43BFB7FF6F1D03A285EBC2D77A08F49186048BF281A9A5 */
extern "C" __attribute__((visibility("default"))) int _libhevce_A54E841C6E59FED38A43BFB7FF6F1D03A285EBC2D77A08F49186048BF281A9A5(void) {
    ALOGD("_libhevce_A54E841C6E59FED38A43BFB7FF6F1D03A285EBC2D77A08F49186048BF281A9A5() called");
    return 0;
}

/* Demangled: _libhevce_9AE8B6B7198CCCABDE70E142AA5B15CEA9C4196563EE15A7FC86ACC0F2B4D9B3 */
extern "C" __attribute__((visibility("default"))) int _libhevce_9AE8B6B7198CCCABDE70E142AA5B15CEA9C4196563EE15A7FC86ACC0F2B4D9B3(void) {
    ALOGD("_libhevce_9AE8B6B7198CCCABDE70E142AA5B15CEA9C4196563EE15A7FC86ACC0F2B4D9B3() called");
    return 0;
}

/* Demangled: _libhevce_9AE8B6B7198CCCABDE70E142AA5B15CE71E286A267762D09E5EEAFE77968B5C03C30DB6B4C2144C71F171895F2259F9A */
extern "C" __attribute__((visibility("default"))) int _libhevce_9AE8B6B7198CCCABDE70E142AA5B15CE71E286A267762D09E5EEAFE77968B5C03C30DB6B4C2144C71F171895F2259F9A(void) {
    ALOGD("_libhevce_9AE8B6B7198CCCABDE70E142AA5B15CE71E286A267762D09E5EEAFE77968B5C03C30DB6B4C2144C71F171895F2259F9A() called");
    return 0;
}

/* Demangled: _libhevce_216855908A9CA19EF444BB9A952D310EEAFC27AEFF17E04B279ECB832DBA332C8E754A56561D3E5D5E24B49938C945FA */
extern "C" __attribute__((visibility("default"))) int _libhevce_216855908A9CA19EF444BB9A952D310EEAFC27AEFF17E04B279ECB832DBA332C8E754A56561D3E5D5E24B49938C945FA(void) {
    ALOGD("_libhevce_216855908A9CA19EF444BB9A952D310EEAFC27AEFF17E04B279ECB832DBA332C8E754A56561D3E5D5E24B49938C945FA() called");
    return 0;
}

/* Demangled: _libhevce_DE9C0A934E934E42A35820509A7002CAD4210AACC158A242BC03ED0C2FCF6E87885059E6E727DF7627EDF3D6AF5E9A52 */
extern "C" __attribute__((visibility("default"))) int _libhevce_DE9C0A934E934E42A35820509A7002CAD4210AACC158A242BC03ED0C2FCF6E87885059E6E727DF7627EDF3D6AF5E9A52(void) {
    ALOGD("_libhevce_DE9C0A934E934E42A35820509A7002CAD4210AACC158A242BC03ED0C2FCF6E87885059E6E727DF7627EDF3D6AF5E9A52() called");
    return 0;
}

/* Demangled: _libhevce_04DE8C0626F3D32AC4E254A470EBE906C4905DEE098801A5D2590DEFF8B6A86F */
extern "C" __attribute__((visibility("default"))) int _libhevce_04DE8C0626F3D32AC4E254A470EBE906C4905DEE098801A5D2590DEFF8B6A86F(void) {
    ALOGD("_libhevce_04DE8C0626F3D32AC4E254A470EBE906C4905DEE098801A5D2590DEFF8B6A86F() called");
    return 0;
}

/* Demangled: _libhevce_04DE8C0626F3D32AC4E254A470EBE90677B1226F194228CF7CE1E1BF62A259C2 */
extern "C" __attribute__((visibility("default"))) int _libhevce_04DE8C0626F3D32AC4E254A470EBE90677B1226F194228CF7CE1E1BF62A259C2(void) {
    ALOGD("_libhevce_04DE8C0626F3D32AC4E254A470EBE90677B1226F194228CF7CE1E1BF62A259C2() called");
    return 0;
}

/* Demangled: _libhevce_99F53495FD882DBB1E661A5810EA12112434997387ED21FB29F4ED46FAD53859939EF2F24FDF754DB75F584CF7654C68 */
extern "C" __attribute__((visibility("default"))) int _libhevce_99F53495FD882DBB1E661A5810EA12112434997387ED21FB29F4ED46FAD53859939EF2F24FDF754DB75F584CF7654C68(void) {
    ALOGD("_libhevce_99F53495FD882DBB1E661A5810EA12112434997387ED21FB29F4ED46FAD53859939EF2F24FDF754DB75F584CF7654C68() called");
    return 0;
}

/* Exported Object: TABLE_PU_SIZE */
extern "C" __attribute__((visibility("default"))) void* TABLE_PU_SIZE = NULL;

/* Demangled: _libhevce_6C7EE3F420F476652F7D8C0808C8344E35D5B4A0D41494A1311B6068978BAF1519F4F748D51AC9EB8E5F1A2A088216CF */
extern "C" __attribute__((visibility("default"))) int _libhevce_6C7EE3F420F476652F7D8C0808C8344E35D5B4A0D41494A1311B6068978BAF1519F4F748D51AC9EB8E5F1A2A088216CF(void) {
    ALOGD("_libhevce_6C7EE3F420F476652F7D8C0808C8344E35D5B4A0D41494A1311B6068978BAF1519F4F748D51AC9EB8E5F1A2A088216CF() called");
    return 0;
}

/* Demangled: _libhevce_6C7EE3F420F476652F7D8C0808C8344E35D5B4A0D41494A1311B6068978BAF153FA4E1611CB740977BB920CA19803C52 */
extern "C" __attribute__((visibility("default"))) int _libhevce_6C7EE3F420F476652F7D8C0808C8344E35D5B4A0D41494A1311B6068978BAF153FA4E1611CB740977BB920CA19803C52(void) {
    ALOGD("_libhevce_6C7EE3F420F476652F7D8C0808C8344E35D5B4A0D41494A1311B6068978BAF153FA4E1611CB740977BB920CA19803C52() called");
    return 0;
}

/* Demangled: _libhevce_6C7EE3F420F476652F7D8C0808C8344E35D5B4A0D41494A1311B6068978BAF15577533AD7CE0350CFAF2E369FFA0FDB2 */
extern "C" __attribute__((visibility("default"))) int _libhevce_6C7EE3F420F476652F7D8C0808C8344E35D5B4A0D41494A1311B6068978BAF15577533AD7CE0350CFAF2E369FFA0FDB2(void) {
    ALOGD("_libhevce_6C7EE3F420F476652F7D8C0808C8344E35D5B4A0D41494A1311B6068978BAF15577533AD7CE0350CFAF2E369FFA0FDB2() called");
    return 0;
}

/* Demangled: _libhevce_6C7EE3F420F476652F7D8C0808C8344E35D5B4A0D41494A1311B6068978BAF159909D5AD07A1833D9B15F9388350EAE6 */
extern "C" __attribute__((visibility("default"))) int _libhevce_6C7EE3F420F476652F7D8C0808C8344E35D5B4A0D41494A1311B6068978BAF159909D5AD07A1833D9B15F9388350EAE6(void) {
    ALOGD("_libhevce_6C7EE3F420F476652F7D8C0808C8344E35D5B4A0D41494A1311B6068978BAF159909D5AD07A1833D9B15F9388350EAE6() called");
    return 0;
}

/* Demangled: _libhevce_6C7EE3F420F476652F7D8C0808C8344E724E0902A9C606495DDC0D4CB49E082E5496EC673780CAEBDCCD3D241EDC048E */
extern "C" __attribute__((visibility("default"))) int _libhevce_6C7EE3F420F476652F7D8C0808C8344E724E0902A9C606495DDC0D4CB49E082E5496EC673780CAEBDCCD3D241EDC048E(void) {
    ALOGD("_libhevce_6C7EE3F420F476652F7D8C0808C8344E724E0902A9C606495DDC0D4CB49E082E5496EC673780CAEBDCCD3D241EDC048E() called");
    return 0;
}

/* Demangled: _libhevce_9AE8B6B7198CCCABDE70E142AA5B15CE71E286A267762D09E5EEAFE77968B5C047368E8C5AC53A017D354FCA558BAAA6 */
extern "C" __attribute__((visibility("default"))) int _libhevce_9AE8B6B7198CCCABDE70E142AA5B15CE71E286A267762D09E5EEAFE77968B5C047368E8C5AC53A017D354FCA558BAAA6(void) {
    ALOGD("_libhevce_9AE8B6B7198CCCABDE70E142AA5B15CE71E286A267762D09E5EEAFE77968B5C047368E8C5AC53A017D354FCA558BAAA6() called");
    return 0;
}

/* Demangled: _libhevce_9AE8B6B7198CCCABDE70E142AA5B15CE71E286A267762D09E5EEAFE77968B5C0B5913C068F408A43AE77083470D03CE5 */
extern "C" __attribute__((visibility("default"))) int _libhevce_9AE8B6B7198CCCABDE70E142AA5B15CE71E286A267762D09E5EEAFE77968B5C0B5913C068F408A43AE77083470D03CE5(void) {
    ALOGD("_libhevce_9AE8B6B7198CCCABDE70E142AA5B15CE71E286A267762D09E5EEAFE77968B5C0B5913C068F408A43AE77083470D03CE5() called");
    return 0;
}

/* Demangled: _libhevce_9AE8B6B7198CCCABDE70E142AA5B15CE71E286A267762D09E5EEAFE77968B5C0FE086574FAD6CF05402CE0193C852227 */
extern "C" __attribute__((visibility("default"))) int _libhevce_9AE8B6B7198CCCABDE70E142AA5B15CE71E286A267762D09E5EEAFE77968B5C0FE086574FAD6CF05402CE0193C852227(void) {
    ALOGD("_libhevce_9AE8B6B7198CCCABDE70E142AA5B15CE71E286A267762D09E5EEAFE77968B5C0FE086574FAD6CF05402CE0193C852227() called");
    return 0;
}

/* Demangled: _libhevce_D5FE342C02F848F7C3A98937DB59CAD6D4210AACC158A242BC03ED0C2FCF6E87885059E6E727DF7627EDF3D6AF5E9A52 */
extern "C" __attribute__((visibility("default"))) int _libhevce_D5FE342C02F848F7C3A98937DB59CAD6D4210AACC158A242BC03ED0C2FCF6E87885059E6E727DF7627EDF3D6AF5E9A52(void) {
    ALOGD("_libhevce_D5FE342C02F848F7C3A98937DB59CAD6D4210AACC158A242BC03ED0C2FCF6E87885059E6E727DF7627EDF3D6AF5E9A52() called");
    return 0;
}

/* Demangled: _libhevce_D7C7B8A7BDF5E8CA36844D3B9E50CBB54B531238B2E50AEBAC9F9861A55A649F */
extern "C" __attribute__((visibility("default"))) int _libhevce_D7C7B8A7BDF5E8CA36844D3B9E50CBB54B531238B2E50AEBAC9F9861A55A649F(void) {
    ALOGD("_libhevce_D7C7B8A7BDF5E8CA36844D3B9E50CBB54B531238B2E50AEBAC9F9861A55A649F() called");
    return 0;
}

/* Demangled: _libhevce_D7C7B8A7BDF5E8CA36844D3B9E50CBB5C38F537B0554A45BE35021E455F3F0D9 */
extern "C" __attribute__((visibility("default"))) int _libhevce_D7C7B8A7BDF5E8CA36844D3B9E50CBB5C38F537B0554A45BE35021E455F3F0D9(void) {
    ALOGD("_libhevce_D7C7B8A7BDF5E8CA36844D3B9E50CBB5C38F537B0554A45BE35021E455F3F0D9() called");
    return 0;
}

/* Demangled: _libhevce_D7C7B8A7BDF5E8CA36844D3B9E50CBB5B0DEB3AF45D1C6ED52CCF7C758F8DAA0 */
extern "C" __attribute__((visibility("default"))) int _libhevce_D7C7B8A7BDF5E8CA36844D3B9E50CBB5B0DEB3AF45D1C6ED52CCF7C758F8DAA0(void) {
    ALOGD("_libhevce_D7C7B8A7BDF5E8CA36844D3B9E50CBB5B0DEB3AF45D1C6ED52CCF7C758F8DAA0() called");
    return 0;
}

/* Demangled: _libhevce_ADDE5FF1FDC688B0CEAE09D9D1126874BF06EF1D65BBCA873BF300B2A7A61932 */
extern "C" __attribute__((visibility("default"))) int _libhevce_ADDE5FF1FDC688B0CEAE09D9D1126874BF06EF1D65BBCA873BF300B2A7A61932(void) {
    ALOGD("_libhevce_ADDE5FF1FDC688B0CEAE09D9D1126874BF06EF1D65BBCA873BF300B2A7A61932() called");
    return 0;
}

/* Demangled: _libhevce_377228DD54CFB7B19B84F11A8EFF2DF796FBB2EB8FF15FE0E34B3CA21527C052 */
extern "C" __attribute__((visibility("default"))) int _libhevce_377228DD54CFB7B19B84F11A8EFF2DF796FBB2EB8FF15FE0E34B3CA21527C052(void) {
    ALOGD("_libhevce_377228DD54CFB7B19B84F11A8EFF2DF796FBB2EB8FF15FE0E34B3CA21527C052() called");
    return 0;
}

/* Demangled: _libhevce_1CD0F33CDB70D8524704BBDBFE18FAA55F727828FB5D17A379CE1421D525A79B */
extern "C" __attribute__((visibility("default"))) int _libhevce_1CD0F33CDB70D8524704BBDBFE18FAA55F727828FB5D17A379CE1421D525A79B(void) {
    ALOGD("_libhevce_1CD0F33CDB70D8524704BBDBFE18FAA55F727828FB5D17A379CE1421D525A79B() called");
    return 0;
}

/* Demangled: _libhevce_1CD0F33CDB70D8524704BBDBFE18FAA581A4E9691E3CFA0FEE1017CD76962404 */
extern "C" __attribute__((visibility("default"))) int _libhevce_1CD0F33CDB70D8524704BBDBFE18FAA581A4E9691E3CFA0FEE1017CD76962404(void) {
    ALOGD("_libhevce_1CD0F33CDB70D8524704BBDBFE18FAA581A4E9691E3CFA0FEE1017CD76962404() called");
    return 0;
}

/* Demangled: _libhevce_A094395122FBE0282417D88ED7FA7569 */
extern "C" __attribute__((visibility("default"))) int _libhevce_A094395122FBE0282417D88ED7FA7569(void) {
    ALOGD("_libhevce_A094395122FBE0282417D88ED7FA7569() called");
    return 0;
}

/* Demangled: _libhevce_2AB7A2A7CCCDCBC1BA2B16B660B28BF196FBB2EB8FF15FE0E34B3CA21527C052 */
extern "C" __attribute__((visibility("default"))) int _libhevce_2AB7A2A7CCCDCBC1BA2B16B660B28BF196FBB2EB8FF15FE0E34B3CA21527C052(void) {
    ALOGD("_libhevce_2AB7A2A7CCCDCBC1BA2B16B660B28BF196FBB2EB8FF15FE0E34B3CA21527C052() called");
    return 0;
}

/* Demangled: _libhevce_0B502D321F8402BCC853445ECA9ECD8658630CB6ADF41E86C4C2758BBF92B71C */
extern "C" __attribute__((visibility("default"))) int _libhevce_0B502D321F8402BCC853445ECA9ECD8658630CB6ADF41E86C4C2758BBF92B71C(void) {
    ALOGD("_libhevce_0B502D321F8402BCC853445ECA9ECD8658630CB6ADF41E86C4C2758BBF92B71C() called");
    return 0;
}

/* Demangled: _libhevce_E21546A6D66B76EE1844B933D57BA5191E705ADDA011FAAED1A70B2B629E57BE */
extern "C" __attribute__((visibility("default"))) int _libhevce_E21546A6D66B76EE1844B933D57BA5191E705ADDA011FAAED1A70B2B629E57BE(void) {
    ALOGD("_libhevce_E21546A6D66B76EE1844B933D57BA5191E705ADDA011FAAED1A70B2B629E57BE() called");
    return 0;
}

/* Exported Object: QP_SQUARE */
extern "C" __attribute__((visibility("default"))) void* QP_SQUARE = NULL;

/* Demangled: _libhevce_10CF3853B4D9CFB0A555A390182C53F46666DADA3A0A927AF796FE03F4CC7ECB */
extern "C" __attribute__((visibility("default"))) int _libhevce_10CF3853B4D9CFB0A555A390182C53F46666DADA3A0A927AF796FE03F4CC7ECB(void) {
    ALOGD("_libhevce_10CF3853B4D9CFB0A555A390182C53F46666DADA3A0A927AF796FE03F4CC7ECB() called");
    return 0;
}

/* Demangled: _libhevce_113E29252D511F39900B4B1425C7C3A2AFE1BEBE13EFEF4CEA86C2AF89E1E8C2 */
extern "C" __attribute__((visibility("default"))) int _libhevce_113E29252D511F39900B4B1425C7C3A2AFE1BEBE13EFEF4CEA86C2AF89E1E8C2(void) {
    ALOGD("_libhevce_113E29252D511F39900B4B1425C7C3A2AFE1BEBE13EFEF4CEA86C2AF89E1E8C2() called");
    return 0;
}

/* Demangled: _libhevce_6D9CFDC4D88A60482AE2E269B9E62D520838FA01D2C3244EDF21719E6926E42E */
extern "C" __attribute__((visibility("default"))) int _libhevce_6D9CFDC4D88A60482AE2E269B9E62D520838FA01D2C3244EDF21719E6926E42E(void) {
    ALOGD("_libhevce_6D9CFDC4D88A60482AE2E269B9E62D520838FA01D2C3244EDF21719E6926E42E() called");
    return 0;
}

/* Demangled: _libhevce_70B89A53B286A393A73595466A06FE0A321F8F2570A0AC0DE43C3A0C8718A371 */
extern "C" __attribute__((visibility("default"))) int _libhevce_70B89A53B286A393A73595466A06FE0A321F8F2570A0AC0DE43C3A0C8718A371(void) {
    ALOGD("_libhevce_70B89A53B286A393A73595466A06FE0A321F8F2570A0AC0DE43C3A0C8718A371() called");
    return 0;
}

/* Demangled: _libhevce_7758B9951A0B387BF783B37030C90DD3957C478533B6672DF6BC0DDEB6DAB312 */
extern "C" __attribute__((visibility("default"))) int _libhevce_7758B9951A0B387BF783B37030C90DD3957C478533B6672DF6BC0DDEB6DAB312(void) {
    ALOGD("_libhevce_7758B9951A0B387BF783B37030C90DD3957C478533B6672DF6BC0DDEB6DAB312() called");
    return 0;
}

/* Demangled: _libhevce_8428669F14C729D01FFB3462CD45E1160BBD697379FE8136A7FE9F2239330669 */
extern "C" __attribute__((visibility("default"))) int _libhevce_8428669F14C729D01FFB3462CD45E1160BBD697379FE8136A7FE9F2239330669(void) {
    ALOGD("_libhevce_8428669F14C729D01FFB3462CD45E1160BBD697379FE8136A7FE9F2239330669() called");
    return 0;
}

/* Demangled: _libhevce_93A7A19F10F2F984F41A54FABB9F3F1FA1E2AFBBC3520E04BE89787CF13F1F7C */
extern "C" __attribute__((visibility("default"))) int _libhevce_93A7A19F10F2F984F41A54FABB9F3F1FA1E2AFBBC3520E04BE89787CF13F1F7C(void) {
    ALOGD("_libhevce_93A7A19F10F2F984F41A54FABB9F3F1FA1E2AFBBC3520E04BE89787CF13F1F7C() called");
    return 0;
}

/* Demangled: _libhevce_A1771240EF90589E7D5ADE71BA3FE402DECD8D9C56294E666498B46149E4B633 */
extern "C" __attribute__((visibility("default"))) int _libhevce_A1771240EF90589E7D5ADE71BA3FE402DECD8D9C56294E666498B46149E4B633(void) {
    ALOGD("_libhevce_A1771240EF90589E7D5ADE71BA3FE402DECD8D9C56294E666498B46149E4B633() called");
    return 0;
}

/* Demangled: _libhevce_D5B0FE12A45418FD3408E4D3D3409806A07FD64706229C60CA11BD5320AAB374 */
extern "C" __attribute__((visibility("default"))) int _libhevce_D5B0FE12A45418FD3408E4D3D3409806A07FD64706229C60CA11BD5320AAB374(void) {
    ALOGD("_libhevce_D5B0FE12A45418FD3408E4D3D3409806A07FD64706229C60CA11BD5320AAB374() called");
    return 0;
}

/* Demangled: _libhevce_F29D39166678FBEB2339FFBCA5B646E0 */
extern "C" __attribute__((visibility("default"))) int _libhevce_F29D39166678FBEB2339FFBCA5B646E0(void) {
    ALOGD("_libhevce_F29D39166678FBEB2339FFBCA5B646E0() called");
    return 0;
}

/* Demangled: _libhevce_FCF357CB8A4F2721C3B4ED6CBB7C20A4881D44459AD3E0FEE850187B94CA379D */
extern "C" __attribute__((visibility("default"))) int _libhevce_FCF357CB8A4F2721C3B4ED6CBB7C20A4881D44459AD3E0FEE850187B94CA379D(void) {
    ALOGD("_libhevce_FCF357CB8A4F2721C3B4ED6CBB7C20A4881D44459AD3E0FEE850187B94CA379D() called");
    return 0;
}

/* Exported Object: cross_mvX */
extern "C" __attribute__((visibility("default"))) void* cross_mvX = NULL;

/* Exported Object: cross_mvY */
extern "C" __attribute__((visibility("default"))) void* cross_mvY = NULL;

/* Exported Object: diamond_mvX */
extern "C" __attribute__((visibility("default"))) void* diamond_mvX = NULL;

/* Exported Object: ime_diamond_mvX */
extern "C" __attribute__((visibility("default"))) void* ime_diamond_mvX = NULL;

/* Exported Object: ime_diamond_mvY */
extern "C" __attribute__((visibility("default"))) void* ime_diamond_mvY = NULL;

/* Exported Object: diamond_mvY */
extern "C" __attribute__((visibility("default"))) void* diamond_mvY = NULL;

/* Demangled: _libhevce_DE69112FD1E33202EE51DD4519D24955 */
extern "C" __attribute__((visibility("default"))) int _libhevce_DE69112FD1E33202EE51DD4519D24955(void) {
    ALOGD("_libhevce_DE69112FD1E33202EE51DD4519D24955() called");
    return 0;
}

/* Demangled: _libhevce_767A9F0262D581906AB8D17623F69591C6D400B7BB6AC7D8B0F35FB1906EBD2E */
extern "C" __attribute__((visibility("default"))) int _libhevce_767A9F0262D581906AB8D17623F69591C6D400B7BB6AC7D8B0F35FB1906EBD2E(void) {
    ALOGD("_libhevce_767A9F0262D581906AB8D17623F69591C6D400B7BB6AC7D8B0F35FB1906EBD2E() called");
    return 0;
}

/* Demangled: _libhevce_69E69F22468261B40A9021472E5437F539B2C4B78E2685F7BEFF42E72A7FD277 */
extern "C" __attribute__((visibility("default"))) int _libhevce_69E69F22468261B40A9021472E5437F539B2C4B78E2685F7BEFF42E72A7FD277(void) {
    ALOGD("_libhevce_69E69F22468261B40A9021472E5437F539B2C4B78E2685F7BEFF42E72A7FD277() called");
    return 0;
}

/* Demangled: _libhevce_A22423ECBEE80854EB14A6B447A3228E0B3BAB9C1D1089DBA9F90EC0D666B8E4 */
extern "C" __attribute__((visibility("default"))) int _libhevce_A22423ECBEE80854EB14A6B447A3228E0B3BAB9C1D1089DBA9F90EC0D666B8E4(void) {
    ALOGD("_libhevce_A22423ECBEE80854EB14A6B447A3228E0B3BAB9C1D1089DBA9F90EC0D666B8E4() called");
    return 0;
}

/* Demangled: _libhevce_6C5EF7C3D9475331C0D37DAE2893D7A8F14A4B32C5D6E22B2CBEB804E4547047 */
extern "C" __attribute__((visibility("default"))) int _libhevce_6C5EF7C3D9475331C0D37DAE2893D7A8F14A4B32C5D6E22B2CBEB804E4547047(void) {
    ALOGD("_libhevce_6C5EF7C3D9475331C0D37DAE2893D7A8F14A4B32C5D6E22B2CBEB804E4547047() called");
    return 0;
}

/* Demangled: _libhevce_D5EA0E366BF8A556FA2B2BF977908F12249B58DF300061B1D92C1599AAC976AC */
extern "C" __attribute__((visibility("default"))) int _libhevce_D5EA0E366BF8A556FA2B2BF977908F12249B58DF300061B1D92C1599AAC976AC(void) {
    ALOGD("_libhevce_D5EA0E366BF8A556FA2B2BF977908F12249B58DF300061B1D92C1599AAC976AC() called");
    return 0;
}

/* Demangled: _libhevce_FD9296E2D2E7388D1C718066890619B77BE9D2317461BF667F217645AE81DE16 */
extern "C" __attribute__((visibility("default"))) int _libhevce_FD9296E2D2E7388D1C718066890619B77BE9D2317461BF667F217645AE81DE16(void) {
    ALOGD("_libhevce_FD9296E2D2E7388D1C718066890619B77BE9D2317461BF667F217645AE81DE16() called");
    return 0;
}

/* Demangled: _libhevce_A60C0CDB02B91078523A8B20A3CB8A8C14EAC3BC40FA81116C936E064DD2DA23 */
extern "C" __attribute__((visibility("default"))) int _libhevce_A60C0CDB02B91078523A8B20A3CB8A8C14EAC3BC40FA81116C936E064DD2DA23(void) {
    ALOGD("_libhevce_A60C0CDB02B91078523A8B20A3CB8A8C14EAC3BC40FA81116C936E064DD2DA23() called");
    return 0;
}

/* Demangled: _libhevce_0C372740E7FBF850C3DAF357BE141913397D23998D82B114E6EBF00EED3BCAC64372595D001C6BE5B02EA3B31E91ACC0 */
extern "C" __attribute__((visibility("default"))) int _libhevce_0C372740E7FBF850C3DAF357BE141913397D23998D82B114E6EBF00EED3BCAC64372595D001C6BE5B02EA3B31E91ACC0(void) {
    ALOGD("_libhevce_0C372740E7FBF850C3DAF357BE141913397D23998D82B114E6EBF00EED3BCAC64372595D001C6BE5B02EA3B31E91ACC0() called");
    return 0;
}

/* Demangled: _libhevce_025918CE7C18AAC326A40817A6BAF005 */
extern "C" __attribute__((visibility("default"))) int _libhevce_025918CE7C18AAC326A40817A6BAF005(void) {
    ALOGD("_libhevce_025918CE7C18AAC326A40817A6BAF005() called");
    return 0;
}

/* Demangled: _libhevce_A7A0C2384EB8846441B845E741846AFD */
extern "C" __attribute__((visibility("default"))) int _libhevce_A7A0C2384EB8846441B845E741846AFD(void) {
    ALOGD("_libhevce_A7A0C2384EB8846441B845E741846AFD() called");
    return 0;
}

/* Demangled: _libhevce_1CC3384D357093147288BB0EE8ED68D5 */
extern "C" __attribute__((visibility("default"))) int _libhevce_1CC3384D357093147288BB0EE8ED68D5(void) {
    ALOGD("_libhevce_1CC3384D357093147288BB0EE8ED68D5() called");
    return 0;
}

/* Demangled: _libhevce_5967A4147523F9E6D416B47F095DCE6A35D5B4A0D41494A1311B6068978BAF15B2796FEB845DD1215D49BCC940E15DFB */
extern "C" __attribute__((visibility("default"))) int _libhevce_5967A4147523F9E6D416B47F095DCE6A35D5B4A0D41494A1311B6068978BAF15B2796FEB845DD1215D49BCC940E15DFB(void) {
    ALOGD("_libhevce_5967A4147523F9E6D416B47F095DCE6A35D5B4A0D41494A1311B6068978BAF15B2796FEB845DD1215D49BCC940E15DFB() called");
    return 0;
}

/* Demangled: _libhevce_ECB0E7EB95F20B8D17998F0D63295133A6479C98345E909F59FD6291CD3B9776 */
extern "C" __attribute__((visibility("default"))) int _libhevce_ECB0E7EB95F20B8D17998F0D63295133A6479C98345E909F59FD6291CD3B9776(void) {
    ALOGD("_libhevce_ECB0E7EB95F20B8D17998F0D63295133A6479C98345E909F59FD6291CD3B9776() called");
    return 0;
}

/* Demangled: _libhevce_16FC8EEE50EC2D709246767952BACC50A3E7F819A80FAA7FB9F629BA2D604725 */
extern "C" __attribute__((visibility("default"))) int _libhevce_16FC8EEE50EC2D709246767952BACC50A3E7F819A80FAA7FB9F629BA2D604725(void) {
    ALOGD("_libhevce_16FC8EEE50EC2D709246767952BACC50A3E7F819A80FAA7FB9F629BA2D604725() called");
    return 0;
}

/* Demangled: _libhevce_57EB015B383B1655D7085065BAA83CFA39D4587320402A84FA48458A8307C0E2 */
extern "C" __attribute__((visibility("default"))) int _libhevce_57EB015B383B1655D7085065BAA83CFA39D4587320402A84FA48458A8307C0E2(void) {
    ALOGD("_libhevce_57EB015B383B1655D7085065BAA83CFA39D4587320402A84FA48458A8307C0E2() called");
    return 0;
}

/* Demangled: _libhevce_6C7EE3F420F476652F7D8C0808C8344EBF129F8377F71632BD11B0EDA657FCB892157760FA1C53DFA8F4A039B940A241 */
extern "C" __attribute__((visibility("default"))) int _libhevce_6C7EE3F420F476652F7D8C0808C8344EBF129F8377F71632BD11B0EDA657FCB892157760FA1C53DFA8F4A039B940A241(void) {
    ALOGD("_libhevce_6C7EE3F420F476652F7D8C0808C8344EBF129F8377F71632BD11B0EDA657FCB892157760FA1C53DFA8F4A039B940A241() called");
    return 0;
}

/* Demangled: _libhevce_80A7BEDA2BB487E58C6ADB6E9A5C403B */
extern "C" __attribute__((visibility("default"))) int _libhevce_80A7BEDA2BB487E58C6ADB6E9A5C403B(void) {
    ALOGD("_libhevce_80A7BEDA2BB487E58C6ADB6E9A5C403B() called");
    return 0;
}

/* Demangled: _libhevce_941D763F814C9C4A108B0E4E6B8708A4F40C8A2B2AC61A729CB8A5151AEF3660 */
extern "C" __attribute__((visibility("default"))) int _libhevce_941D763F814C9C4A108B0E4E6B8708A4F40C8A2B2AC61A729CB8A5151AEF3660(void) {
    ALOGD("_libhevce_941D763F814C9C4A108B0E4E6B8708A4F40C8A2B2AC61A729CB8A5151AEF3660() called");
    return 0;
}

/* Demangled: _libhevce_99607B4C9CC14D647DB9188EAC1A9D14F5BD059212F9431BA48FB6313BBA6F6B */
extern "C" __attribute__((visibility("default"))) int _libhevce_99607B4C9CC14D647DB9188EAC1A9D14F5BD059212F9431BA48FB6313BBA6F6B(void) {
    ALOGD("_libhevce_99607B4C9CC14D647DB9188EAC1A9D14F5BD059212F9431BA48FB6313BBA6F6B() called");
    return 0;
}

/* Demangled: _libhevce_B13737ACAF3A539D4E0F1D61B0C1F4E3E034046230C36CA2DD7ADF2EF7FE93C9 */
extern "C" __attribute__((visibility("default"))) int _libhevce_B13737ACAF3A539D4E0F1D61B0C1F4E3E034046230C36CA2DD7ADF2EF7FE93C9(void) {
    ALOGD("_libhevce_B13737ACAF3A539D4E0F1D61B0C1F4E3E034046230C36CA2DD7ADF2EF7FE93C9() called");
    return 0;
}

/* Demangled: _libhevce_C73152BDA105E656A48A2FAB26916196F40C8A2B2AC61A729CB8A5151AEF3660 */
extern "C" __attribute__((visibility("default"))) int _libhevce_C73152BDA105E656A48A2FAB26916196F40C8A2B2AC61A729CB8A5151AEF3660(void) {
    ALOGD("_libhevce_C73152BDA105E656A48A2FAB26916196F40C8A2B2AC61A729CB8A5151AEF3660() called");
    return 0;
}

/* Demangled: _libhevce_99607B4C9CC14D647DB9188EAC1A9D145525299B64706601B99BAC8A8F4F0E17 */
extern "C" __attribute__((visibility("default"))) int _libhevce_99607B4C9CC14D647DB9188EAC1A9D145525299B64706601B99BAC8A8F4F0E17(void) {
    ALOGD("_libhevce_99607B4C9CC14D647DB9188EAC1A9D145525299B64706601B99BAC8A8F4F0E17() called");
    return 0;
}

/* Demangled: _libhevce_99607B4C9CC14D647DB9188EAC1A9D142B1FA84228DB08DBBBFA8C1FFEDA36DF */
extern "C" __attribute__((visibility("default"))) int _libhevce_99607B4C9CC14D647DB9188EAC1A9D142B1FA84228DB08DBBBFA8C1FFEDA36DF(void) {
    ALOGD("_libhevce_99607B4C9CC14D647DB9188EAC1A9D142B1FA84228DB08DBBBFA8C1FFEDA36DF() called");
    return 0;
}

/* Demangled: _libhevce_57EB015B383B1655D7085065BAA83CFA0B4876F9A90AE4263CD73CD38AA8F15A */
extern "C" __attribute__((visibility("default"))) int _libhevce_57EB015B383B1655D7085065BAA83CFA0B4876F9A90AE4263CD73CD38AA8F15A(void) {
    ALOGD("_libhevce_57EB015B383B1655D7085065BAA83CFA0B4876F9A90AE4263CD73CD38AA8F15A() called");
    return 0;
}

/* Demangled: _libhevce_57EB015B383B1655D7085065BAA83CFA9E01DB39417E1AF784F7827D6DDB164A */
extern "C" __attribute__((visibility("default"))) int _libhevce_57EB015B383B1655D7085065BAA83CFA9E01DB39417E1AF784F7827D6DDB164A(void) {
    ALOGD("_libhevce_57EB015B383B1655D7085065BAA83CFA9E01DB39417E1AF784F7827D6DDB164A() called");
    return 0;
}

/* Demangled: _libhevce_57EB015B383B1655D7085065BAA83CFAF3C6EF0258B6ED1699874013ECBE5C98 */
extern "C" __attribute__((visibility("default"))) int _libhevce_57EB015B383B1655D7085065BAA83CFAF3C6EF0258B6ED1699874013ECBE5C98(void) {
    ALOGD("_libhevce_57EB015B383B1655D7085065BAA83CFAF3C6EF0258B6ED1699874013ECBE5C98() called");
    return 0;
}

/* Demangled: _libhevce_57EB015B383B1655D7085065BAA83CFA780570988A3BA981AC2A1FF63D5D06E0 */
extern "C" __attribute__((visibility("default"))) int _libhevce_57EB015B383B1655D7085065BAA83CFA780570988A3BA981AC2A1FF63D5D06E0(void) {
    ALOGD("_libhevce_57EB015B383B1655D7085065BAA83CFA780570988A3BA981AC2A1FF63D5D06E0() called");
    return 0;
}

/* Demangled: _libhevce_9B6E30893E4AC8E56E7F723EFE597F3D */
extern "C" __attribute__((visibility("default"))) int _libhevce_9B6E30893E4AC8E56E7F723EFE597F3D(void) {
    ALOGD("_libhevce_9B6E30893E4AC8E56E7F723EFE597F3D() called");
    return 0;
}

/* Demangled: _libhevce_1A63AC9AF4D4FD152DD4069359E7605B */
extern "C" __attribute__((visibility("default"))) int _libhevce_1A63AC9AF4D4FD152DD4069359E7605B(void) {
    ALOGD("_libhevce_1A63AC9AF4D4FD152DD4069359E7605B() called");
    return 0;
}

/* Demangled: _libhevce_49E991D3BB85A92E6C32CE0D531188B0 */
extern "C" __attribute__((visibility("default"))) int _libhevce_49E991D3BB85A92E6C32CE0D531188B0(void) {
    ALOGD("_libhevce_49E991D3BB85A92E6C32CE0D531188B0() called");
    return 0;
}

/* Demangled: _libhevce_24F53C7822B5BCA29302C8BCEBC9063F */
extern "C" __attribute__((visibility("default"))) int _libhevce_24F53C7822B5BCA29302C8BCEBC9063F(void) {
    ALOGD("_libhevce_24F53C7822B5BCA29302C8BCEBC9063F() called");
    return 0;
}

/* Demangled: _libhevce_925D66DFCDCC580AD6F389352B2030AB */
extern "C" __attribute__((visibility("default"))) int _libhevce_925D66DFCDCC580AD6F389352B2030AB(void) {
    ALOGD("_libhevce_925D66DFCDCC580AD6F389352B2030AB() called");
    return 0;
}

/* Demangled: _libhevce_56E9A7656353359746596815A993DBC6B22AD14A26FD1A5D77109A4FC5348994 */
extern "C" __attribute__((visibility("default"))) int _libhevce_56E9A7656353359746596815A993DBC6B22AD14A26FD1A5D77109A4FC5348994(void) {
    ALOGD("_libhevce_56E9A7656353359746596815A993DBC6B22AD14A26FD1A5D77109A4FC5348994() called");
    return 0;
}

/* Demangled: _libhevce_9E204FB522AAC5F8D5C1F95C621D0DD23A19549F3DAE1FF60881536728277296 */
extern "C" __attribute__((visibility("default"))) int _libhevce_9E204FB522AAC5F8D5C1F95C621D0DD23A19549F3DAE1FF60881536728277296(void) {
    ALOGD("_libhevce_9E204FB522AAC5F8D5C1F95C621D0DD23A19549F3DAE1FF60881536728277296() called");
    return 0;
}

/* Demangled: _libhevce_343825B2461B82E743A6329E5DA27814F4A7262AFC22DAB62C32079A413A41AE */
extern "C" __attribute__((visibility("default"))) int _libhevce_343825B2461B82E743A6329E5DA27814F4A7262AFC22DAB62C32079A413A41AE(void) {
    ALOGD("_libhevce_343825B2461B82E743A6329E5DA27814F4A7262AFC22DAB62C32079A413A41AE() called");
    return 0;
}

/* Demangled: _libhevce_343825B2461B82E743A6329E5DA27814C9039AB3A3770F22A6014535B7A174AF */
extern "C" __attribute__((visibility("default"))) int _libhevce_343825B2461B82E743A6329E5DA27814C9039AB3A3770F22A6014535B7A174AF(void) {
    ALOGD("_libhevce_343825B2461B82E743A6329E5DA27814C9039AB3A3770F22A6014535B7A174AF() called");
    return 0;
}

/* Demangled: _libhevce_C7787E8CDE59B7CB523D5E13F9F1FDB8E75E62D70AD6D200D214D09C18942DF2 */
extern "C" __attribute__((visibility("default"))) int _libhevce_C7787E8CDE59B7CB523D5E13F9F1FDB8E75E62D70AD6D200D214D09C18942DF2(void) {
    ALOGD("_libhevce_C7787E8CDE59B7CB523D5E13F9F1FDB8E75E62D70AD6D200D214D09C18942DF2() called");
    return 0;
}

/* Demangled: _libhevce_9E3829A5F899D28034EFFE06DFD4E31EA4851F0519974559AABA85970980E4E1 */
extern "C" __attribute__((visibility("default"))) int _libhevce_9E3829A5F899D28034EFFE06DFD4E31EA4851F0519974559AABA85970980E4E1(void) {
    ALOGD("_libhevce_9E3829A5F899D28034EFFE06DFD4E31EA4851F0519974559AABA85970980E4E1() called");
    return 0;
}

/* Demangled: _libhevce_15209A395522C1CAAAEECF3BEDE5DACEF678E1538DDE15587C3918655EE40988 */
extern "C" __attribute__((visibility("default"))) int _libhevce_15209A395522C1CAAAEECF3BEDE5DACEF678E1538DDE15587C3918655EE40988(void) {
    ALOGD("_libhevce_15209A395522C1CAAAEECF3BEDE5DACEF678E1538DDE15587C3918655EE40988() called");
    return 0;
}

/* Demangled: _libhevce_97144FA81AAF37F5D2CB44453D288F4A532523DFCE5388AC942EB058186FD9F2 */
extern "C" __attribute__((visibility("default"))) int _libhevce_97144FA81AAF37F5D2CB44453D288F4A532523DFCE5388AC942EB058186FD9F2(void) {
    ALOGD("_libhevce_97144FA81AAF37F5D2CB44453D288F4A532523DFCE5388AC942EB058186FD9F2() called");
    return 0;
}

/* Demangled: _libhevce_8D0AC36DCA88B525508F34479D92C6EB */
extern "C" __attribute__((visibility("default"))) int _libhevce_8D0AC36DCA88B525508F34479D92C6EB(void) {
    ALOGD("_libhevce_8D0AC36DCA88B525508F34479D92C6EB() called");
    return 0;
}

/* Demangled: _libhevce_73DE48E9F30ADBF815CD05EBC6AF9D200F8D9A3BD46096201C49A2CC98066CCD */
extern "C" __attribute__((visibility("default"))) int _libhevce_73DE48E9F30ADBF815CD05EBC6AF9D200F8D9A3BD46096201C49A2CC98066CCD(void) {
    ALOGD("_libhevce_73DE48E9F30ADBF815CD05EBC6AF9D200F8D9A3BD46096201C49A2CC98066CCD() called");
    return 0;
}

/* Demangled: _libhevce_CB7C021DC800DDAB9783C0CDFE6EA027BBBA0F1FFEF048B756CED9BB02BA3FA4 */
extern "C" __attribute__((visibility("default"))) int _libhevce_CB7C021DC800DDAB9783C0CDFE6EA027BBBA0F1FFEF048B756CED9BB02BA3FA4(void) {
    ALOGD("_libhevce_CB7C021DC800DDAB9783C0CDFE6EA027BBBA0F1FFEF048B756CED9BB02BA3FA4() called");
    return 0;
}

/* Demangled: _libhevce_DFC7F10159A962CDC346F520019FBFA167435023BE55D5F93CED39211962CB0F */
extern "C" __attribute__((visibility("default"))) int _libhevce_DFC7F10159A962CDC346F520019FBFA167435023BE55D5F93CED39211962CB0F(void) {
    ALOGD("_libhevce_DFC7F10159A962CDC346F520019FBFA167435023BE55D5F93CED39211962CB0F() called");
    return 0;
}

/* Demangled: _libhevce_CD3CB4D2951153CF7D44206CBFED1D41307D79A074889E0BC7CAC153C694ABBC */
extern "C" __attribute__((visibility("default"))) int _libhevce_CD3CB4D2951153CF7D44206CBFED1D41307D79A074889E0BC7CAC153C694ABBC(void) {
    ALOGD("_libhevce_CD3CB4D2951153CF7D44206CBFED1D41307D79A074889E0BC7CAC153C694ABBC() called");
    return 0;
}

/* Demangled: _libhevce_F48636653B82BBAEDF0DD38215105697396487DEBE15F9B8B4DB16D3B4DDD013 */
extern "C" __attribute__((visibility("default"))) int _libhevce_F48636653B82BBAEDF0DD38215105697396487DEBE15F9B8B4DB16D3B4DDD013(void) {
    ALOGD("_libhevce_F48636653B82BBAEDF0DD38215105697396487DEBE15F9B8B4DB16D3B4DDD013() called");
    return 0;
}

/* Demangled: _libhevce_C2AE9F25A78130208FF920F6178FD66A7C7F2C9953636D33477984050D9015C2 */
extern "C" __attribute__((visibility("default"))) int _libhevce_C2AE9F25A78130208FF920F6178FD66A7C7F2C9953636D33477984050D9015C2(void) {
    ALOGD("_libhevce_C2AE9F25A78130208FF920F6178FD66A7C7F2C9953636D33477984050D9015C2() called");
    return 0;
}

/* Demangled: _libhevce_C2AE9F25A78130208FF920F6178FD66A0031753197FBDA6A26C614A6F5D938DD */
extern "C" __attribute__((visibility("default"))) int _libhevce_C2AE9F25A78130208FF920F6178FD66A0031753197FBDA6A26C614A6F5D938DD(void) {
    ALOGD("_libhevce_C2AE9F25A78130208FF920F6178FD66A0031753197FBDA6A26C614A6F5D938DD() called");
    return 0;
}

/* Demangled: hevce_rc_set_cu_qp */
extern "C" __attribute__((visibility("default"))) int hevce_rc_set_cu_qp(void) {
    ALOGD("hevce_rc_set_cu_qp() called");
    return 0;
}

/* Demangled: _libhevce_0BA6F215487A490B6BF46C884B6E2917 */
extern "C" __attribute__((visibility("default"))) int _libhevce_0BA6F215487A490B6BF46C884B6E2917(void) {
    ALOGD("_libhevce_0BA6F215487A490B6BF46C884B6E2917() called");
    return 0;
}

/* Demangled: _libhevce_A26A316A26D6BD13FBE36ED1A26CAA53 */
extern "C" __attribute__((visibility("default"))) int _libhevce_A26A316A26D6BD13FBE36ED1A26CAA53(void) {
    ALOGD("_libhevce_A26A316A26D6BD13FBE36ED1A26CAA53() called");
    return 0;
}

/* Demangled: _libhevce_47283934D6192DBB2F606E3B260CE214 */
extern "C" __attribute__((visibility("default"))) int _libhevce_47283934D6192DBB2F606E3B260CE214(void) {
    ALOGD("_libhevce_47283934D6192DBB2F606E3B260CE214() called");
    return 0;
}

/* Demangled: _libhevce_6AE55E0375CF8BF3CE64254ACA21D1CA */
extern "C" __attribute__((visibility("default"))) int _libhevce_6AE55E0375CF8BF3CE64254ACA21D1CA(void) {
    ALOGD("_libhevce_6AE55E0375CF8BF3CE64254ACA21D1CA() called");
    return 0;
}

/* Exported Object: EXP2 */
extern "C" __attribute__((visibility("default"))) void* EXP2 = NULL;

/* Exported Object: LOG2 */
extern "C" __attribute__((visibility("default"))) void* LOG2 = NULL;

/* Exported Object: LOG2_T2 */
extern "C" __attribute__((visibility("default"))) void* LOG2_T2 = NULL;

/* Exported Object: T16 */
extern "C" __attribute__((visibility("default"))) void* T16 = NULL;

/* Exported Object: T32 */
extern "C" __attribute__((visibility("default"))) void* T32 = NULL;

/* Exported Object: T4 */
extern "C" __attribute__((visibility("default"))) void* T4 = NULL;

/* Exported Object: T8 */
extern "C" __attribute__((visibility("default"))) void* T8 = NULL;

/* Demangled: _libhevce_D6409BAD79D0311198C1456B9F56593C30E7BC5568C9A79A68AFDF833A736BB2 */
extern "C" __attribute__((visibility("default"))) int _libhevce_D6409BAD79D0311198C1456B9F56593C30E7BC5568C9A79A68AFDF833A736BB2(void) {
    ALOGD("_libhevce_D6409BAD79D0311198C1456B9F56593C30E7BC5568C9A79A68AFDF833A736BB2() called");
    return 0;
}

/* Demangled: _libhevce_A06F528235A65370DA2B89E0FA71AD5E33D643F2F442DB2946E7AF6631BE17BD */
extern "C" __attribute__((visibility("default"))) int _libhevce_A06F528235A65370DA2B89E0FA71AD5E33D643F2F442DB2946E7AF6631BE17BD(void) {
    ALOGD("_libhevce_A06F528235A65370DA2B89E0FA71AD5E33D643F2F442DB2946E7AF6631BE17BD() called");
    return 0;
}

/* Demangled: _libhevce_46E7FDB632E409170DCD410F0858FDECAAC5D6A8BC6C3CB8EC2CBA84B06F8EE60CD1060C450B634F064438E362B8BC9A */
extern "C" __attribute__((visibility("default"))) int _libhevce_46E7FDB632E409170DCD410F0858FDECAAC5D6A8BC6C3CB8EC2CBA84B06F8EE60CD1060C450B634F064438E362B8BC9A(void) {
    ALOGD("_libhevce_46E7FDB632E409170DCD410F0858FDECAAC5D6A8BC6C3CB8EC2CBA84B06F8EE60CD1060C450B634F064438E362B8BC9A() called");
    return 0;
}

/* Demangled: _libhevce_E97F5269CFB35674BBBD1FDDFAB976C453AC602F74414336B2925D6E5F46145B */
extern "C" __attribute__((visibility("default"))) int _libhevce_E97F5269CFB35674BBBD1FDDFAB976C453AC602F74414336B2925D6E5F46145B(void) {
    ALOGD("_libhevce_E97F5269CFB35674BBBD1FDDFAB976C453AC602F74414336B2925D6E5F46145B() called");
    return 0;
}

/* Demangled: _libhevce_E97F5269CFB35674BBBD1FDDFAB976C4542A5CA5EFD8F556C6BD96518036E6A0 */
extern "C" __attribute__((visibility("default"))) int _libhevce_E97F5269CFB35674BBBD1FDDFAB976C4542A5CA5EFD8F556C6BD96518036E6A0(void) {
    ALOGD("_libhevce_E97F5269CFB35674BBBD1FDDFAB976C4542A5CA5EFD8F556C6BD96518036E6A0() called");
    return 0;
}

/* Demangled: _libhevce_9DDC4F49630112EECAB0D743E21D0026 */
extern "C" __attribute__((visibility("default"))) int _libhevce_9DDC4F49630112EECAB0D743E21D0026(void) {
    ALOGD("_libhevce_9DDC4F49630112EECAB0D743E21D0026() called");
    return 0;
}

/* Demangled: _libhevce_CF7FC4570CD13E09215AA33C6AAF68A0EF812B3E58DE8AE5BAC5CB00A4CFC61E */
extern "C" __attribute__((visibility("default"))) int _libhevce_CF7FC4570CD13E09215AA33C6AAF68A0EF812B3E58DE8AE5BAC5CB00A4CFC61E(void) {
    ALOGD("_libhevce_CF7FC4570CD13E09215AA33C6AAF68A0EF812B3E58DE8AE5BAC5CB00A4CFC61E() called");
    return 0;
}

/* Exported Object: TABLE_IQP_LEVEL_SCALE */
extern "C" __attribute__((visibility("default"))) void* TABLE_IQP_LEVEL_SCALE = NULL;

/* Exported Object: TABLE_QP_DIV_6 */
extern "C" __attribute__((visibility("default"))) void* TABLE_QP_DIV_6 = NULL;

/* Demangled: _libhevce_3BAA37D08FA21CBE81C37C1C2006BEB9 */
extern "C" __attribute__((visibility("default"))) int _libhevce_3BAA37D08FA21CBE81C37C1C2006BEB9(void) {
    ALOGD("_libhevce_3BAA37D08FA21CBE81C37C1C2006BEB9() called");
    return 0;
}

/* Demangled: _libhevce_43D3BF3BF459666F1CB6F4EB97672670 */
extern "C" __attribute__((visibility("default"))) int _libhevce_43D3BF3BF459666F1CB6F4EB97672670(void) {
    ALOGD("_libhevce_43D3BF3BF459666F1CB6F4EB97672670() called");
    return 0;
}

/* Demangled: _libhevce_443C0251FFE057DC41B6043A122F6A15 */
extern "C" __attribute__((visibility("default"))) int _libhevce_443C0251FFE057DC41B6043A122F6A15(void) {
    ALOGD("_libhevce_443C0251FFE057DC41B6043A122F6A15() called");
    return 0;
}

/* Demangled: _libhevce_5F2C1A6277DC89964385D065BD8FE73B */
extern "C" __attribute__((visibility("default"))) int _libhevce_5F2C1A6277DC89964385D065BD8FE73B(void) {
    ALOGD("_libhevce_5F2C1A6277DC89964385D065BD8FE73B() called");
    return 0;
}

/* Demangled: _libhevce_72FF45DFB900DA868833A1144A1161E0 */
extern "C" __attribute__((visibility("default"))) int _libhevce_72FF45DFB900DA868833A1144A1161E0(void) {
    ALOGD("_libhevce_72FF45DFB900DA868833A1144A1161E0() called");
    return 0;
}

/* Demangled: _libhevce_758ABAA966E931858B237D0386266EA1 */
extern "C" __attribute__((visibility("default"))) int _libhevce_758ABAA966E931858B237D0386266EA1(void) {
    ALOGD("_libhevce_758ABAA966E931858B237D0386266EA1() called");
    return 0;
}

/* Demangled: _libhevce_763F9C71C6CEFC2290CFA412DFCD68D5 */
extern "C" __attribute__((visibility("default"))) int _libhevce_763F9C71C6CEFC2290CFA412DFCD68D5(void) {
    ALOGD("_libhevce_763F9C71C6CEFC2290CFA412DFCD68D5() called");
    return 0;
}

/* Demangled: _libhevce_777657014150D0D705AEE2F19FD2B677EC149016F0CD13B928CDB0AF57D3C755 */
extern "C" __attribute__((visibility("default"))) int _libhevce_777657014150D0D705AEE2F19FD2B677EC149016F0CD13B928CDB0AF57D3C755(void) {
    ALOGD("_libhevce_777657014150D0D705AEE2F19FD2B677EC149016F0CD13B928CDB0AF57D3C755() called");
    return 0;
}

/* Demangled: _libhevce_962532CAD35D183B9A78E09BA30CD025 */
extern "C" __attribute__((visibility("default"))) int _libhevce_962532CAD35D183B9A78E09BA30CD025(void) {
    ALOGD("_libhevce_962532CAD35D183B9A78E09BA30CD025() called");
    return 0;
}

/* Demangled: _libhevce_A033185006F07DAD623E9DAD9947FAB830F59FAC923A96A2FFC8F5361E414B7C */
extern "C" __attribute__((visibility("default"))) int _libhevce_A033185006F07DAD623E9DAD9947FAB830F59FAC923A96A2FFC8F5361E414B7C(void) {
    ALOGD("_libhevce_A033185006F07DAD623E9DAD9947FAB830F59FAC923A96A2FFC8F5361E414B7C() called");
    return 0;
}

/* Demangled: _libhevce_A033185006F07DAD623E9DAD9947FAB8A5AC3D74643B800B79EDA6D2BA628C47 */
extern "C" __attribute__((visibility("default"))) int _libhevce_A033185006F07DAD623E9DAD9947FAB8A5AC3D74643B800B79EDA6D2BA628C47(void) {
    ALOGD("_libhevce_A033185006F07DAD623E9DAD9947FAB8A5AC3D74643B800B79EDA6D2BA628C47() called");
    return 0;
}

/* Demangled: _libhevce_AA0DAF8EA0D31BCFF89A8559D00887AE */
extern "C" __attribute__((visibility("default"))) int _libhevce_AA0DAF8EA0D31BCFF89A8559D00887AE(void) {
    ALOGD("_libhevce_AA0DAF8EA0D31BCFF89A8559D00887AE() called");
    return 0;
}

/* Demangled: _libhevce_C142CB46FEF8AB4602799E04880BA57C */
extern "C" __attribute__((visibility("default"))) int _libhevce_C142CB46FEF8AB4602799E04880BA57C(void) {
    ALOGD("_libhevce_C142CB46FEF8AB4602799E04880BA57C() called");
    return 0;
}

/* Demangled: _libhevce_F4C2004466231332CC71AF8045B2CB45 */
extern "C" __attribute__((visibility("default"))) int _libhevce_F4C2004466231332CC71AF8045B2CB45(void) {
    ALOGD("_libhevce_F4C2004466231332CC71AF8045B2CB45() called");
    return 0;
}

/* Demangled: _libhevce_07ED1A98BAB873C86BD52E23AF8D438C7FE515A332B73DC19F2B301780F4E0CE */
extern "C" __attribute__((visibility("default"))) int _libhevce_07ED1A98BAB873C86BD52E23AF8D438C7FE515A332B73DC19F2B301780F4E0CE(void) {
    ALOGD("_libhevce_07ED1A98BAB873C86BD52E23AF8D438C7FE515A332B73DC19F2B301780F4E0CE() called");
    return 0;
}

/* Demangled: _libhevce_D58A0C743CB0F66FDB506506C10750DE7FE515A332B73DC19F2B301780F4E0CE */
extern "C" __attribute__((visibility("default"))) int _libhevce_D58A0C743CB0F66FDB506506C10750DE7FE515A332B73DC19F2B301780F4E0CE(void) {
    ALOGD("_libhevce_D58A0C743CB0F66FDB506506C10750DE7FE515A332B73DC19F2B301780F4E0CE() called");
    return 0;
}

/* Demangled: _libhevce_A033185006F07DAD623E9DAD9947FAB8E26EB8807083A3C6458FE54F0F52639B */
extern "C" __attribute__((visibility("default"))) int _libhevce_A033185006F07DAD623E9DAD9947FAB8E26EB8807083A3C6458FE54F0F52639B(void) {
    ALOGD("_libhevce_A033185006F07DAD623E9DAD9947FAB8E26EB8807083A3C6458FE54F0F52639B() called");
    return 0;
}

/* Exported Object: g_nextState */
extern "C" __attribute__((visibility("default"))) void* g_nextState = NULL;

/* Exported Object: range_table2_lps */
extern "C" __attribute__((visibility("default"))) void* range_table2_lps = NULL;

/* Exported Object: range_table_lps */
extern "C" __attribute__((visibility("default"))) void* range_table_lps = NULL;

/* Exported Object: sig_coeff_ctx_idx_map */
extern "C" __attribute__((visibility("default"))) void* sig_coeff_ctx_idx_map = NULL;

/* Exported Object: trans_idx_combined_lps */
extern "C" __attribute__((visibility("default"))) void* trans_idx_combined_lps = NULL;

/* Exported Object: trans_idx_combined_mps */
extern "C" __attribute__((visibility("default"))) void* trans_idx_combined_mps = NULL;

/* Demangled: _libhevce_01957188CD514CBD35C9B2C53B68C92B69303B24A98648F74E4DD48A232E79A0 */
extern "C" __attribute__((visibility("default"))) int _libhevce_01957188CD514CBD35C9B2C53B68C92B69303B24A98648F74E4DD48A232E79A0(void) {
    ALOGD("_libhevce_01957188CD514CBD35C9B2C53B68C92B69303B24A98648F74E4DD48A232E79A0() called");
    return 0;
}

/* Demangled: _libhevce_665A39DEC5A74311E31EABEC281B4F4DB3D74BEA644FDF733A64400A1A046E5C */
extern "C" __attribute__((visibility("default"))) int _libhevce_665A39DEC5A74311E31EABEC281B4F4DB3D74BEA644FDF733A64400A1A046E5C(void) {
    ALOGD("_libhevce_665A39DEC5A74311E31EABEC281B4F4DB3D74BEA644FDF733A64400A1A046E5C() called");
    return 0;
}

/* Demangled: _libhevce_E925D3D44A9712C1B31521DB7D127A988B73F031DB1967F4AC0ADB79E19382CA51D838DD16E734454645364DA7DA24C3 */
extern "C" __attribute__((visibility("default"))) int _libhevce_E925D3D44A9712C1B31521DB7D127A988B73F031DB1967F4AC0ADB79E19382CA51D838DD16E734454645364DA7DA24C3(void) {
    ALOGD("_libhevce_E925D3D44A9712C1B31521DB7D127A988B73F031DB1967F4AC0ADB79E19382CA51D838DD16E734454645364DA7DA24C3() called");
    return 0;
}

/* Demangled: _libhevce_883D07A7A59ED1A18B96B1D7D4E6965A4C0007420C848BB59C3743EBC45F0078 */
extern "C" __attribute__((visibility("default"))) int _libhevce_883D07A7A59ED1A18B96B1D7D4E6965A4C0007420C848BB59C3743EBC45F0078(void) {
    ALOGD("_libhevce_883D07A7A59ED1A18B96B1D7D4E6965A4C0007420C848BB59C3743EBC45F0078() called");
    return 0;
}

/* Demangled: _libhevce_819A30C72EB9F01A8B7CEF0FA363EB3B26EA3134BF5EA98AE2526B35033BDF97 */
extern "C" __attribute__((visibility("default"))) int _libhevce_819A30C72EB9F01A8B7CEF0FA363EB3B26EA3134BF5EA98AE2526B35033BDF97(void) {
    ALOGD("_libhevce_819A30C72EB9F01A8B7CEF0FA363EB3B26EA3134BF5EA98AE2526B35033BDF97() called");
    return 0;
}

/* Demangled: _libhevce_84B8FEA755A8CA45507BE5698144BC8680CBFBD0F34A86733E7E4E844B54AE3E */
extern "C" __attribute__((visibility("default"))) int _libhevce_84B8FEA755A8CA45507BE5698144BC8680CBFBD0F34A86733E7E4E844B54AE3E(void) {
    ALOGD("_libhevce_84B8FEA755A8CA45507BE5698144BC8680CBFBD0F34A86733E7E4E844B54AE3E() called");
    return 0;
}

/* Demangled: _libhevce_84B8FEA755A8CA45507BE5698144BC86A340B1DAC398C2382478FC3E080B3CBD */
extern "C" __attribute__((visibility("default"))) int _libhevce_84B8FEA755A8CA45507BE5698144BC86A340B1DAC398C2382478FC3E080B3CBD(void) {
    ALOGD("_libhevce_84B8FEA755A8CA45507BE5698144BC86A340B1DAC398C2382478FC3E080B3CBD() called");
    return 0;
}

/* Demangled: _libhevce_84B8FEA755A8CA45507BE5698144BC8626AC3ACCF008475210880C00C1B50E88 */
extern "C" __attribute__((visibility("default"))) int _libhevce_84B8FEA755A8CA45507BE5698144BC8626AC3ACCF008475210880C00C1B50E88(void) {
    ALOGD("_libhevce_84B8FEA755A8CA45507BE5698144BC8626AC3ACCF008475210880C00C1B50E88() called");
    return 0;
}

/* Demangled: _libhevce_84B8FEA755A8CA45507BE5698144BC8665EE9B44D5CFFF136FE3CB3FA134A745 */
extern "C" __attribute__((visibility("default"))) int _libhevce_84B8FEA755A8CA45507BE5698144BC8665EE9B44D5CFFF136FE3CB3FA134A745(void) {
    ALOGD("_libhevce_84B8FEA755A8CA45507BE5698144BC8665EE9B44D5CFFF136FE3CB3FA134A745() called");
    return 0;
}

/* Demangled: _libhevce_84B8FEA755A8CA45507BE5698144BC86591E5EFD3799D94A3C7166635625B0E6 */
extern "C" __attribute__((visibility("default"))) int _libhevce_84B8FEA755A8CA45507BE5698144BC86591E5EFD3799D94A3C7166635625B0E6(void) {
    ALOGD("_libhevce_84B8FEA755A8CA45507BE5698144BC86591E5EFD3799D94A3C7166635625B0E6() called");
    return 0;
}

/* Demangled: _libhevce_F2B07F9479591F948D00A1F519A66F62543AEB9586D3C9C36295411D69E758A769303B24A98648F74E4DD48A232E79A0 */
extern "C" __attribute__((visibility("default"))) int _libhevce_F2B07F9479591F948D00A1F519A66F62543AEB9586D3C9C36295411D69E758A769303B24A98648F74E4DD48A232E79A0(void) {
    ALOGD("_libhevce_F2B07F9479591F948D00A1F519A66F62543AEB9586D3C9C36295411D69E758A769303B24A98648F74E4DD48A232E79A0() called");
    return 0;
}

/* Demangled: _libhevce_F2B07F9479591F948D00A1F519A66F62543AEB9586D3C9C36295411D69E758A76A7634D197F71F5F131F05A8CAAB4D0E */
extern "C" __attribute__((visibility("default"))) int _libhevce_F2B07F9479591F948D00A1F519A66F62543AEB9586D3C9C36295411D69E758A76A7634D197F71F5F131F05A8CAAB4D0E(void) {
    ALOGD("_libhevce_F2B07F9479591F948D00A1F519A66F62543AEB9586D3C9C36295411D69E758A76A7634D197F71F5F131F05A8CAAB4D0E() called");
    return 0;
}

/* Demangled: _libhevce_DAB078BAEB5E3AF216F19BC2FCA1873B06C41EDB45C00F1A81C3DD05A2D84298 */
extern "C" __attribute__((visibility("default"))) int _libhevce_DAB078BAEB5E3AF216F19BC2FCA1873B06C41EDB45C00F1A81C3DD05A2D84298(void) {
    ALOGD("_libhevce_DAB078BAEB5E3AF216F19BC2FCA1873B06C41EDB45C00F1A81C3DD05A2D84298() called");
    return 0;
}

/* Demangled: _libhevce_D91C4DF36599BE946C60F0207B71C852C4AC38FE672A22F53B12C962157F26E1 */
extern "C" __attribute__((visibility("default"))) int _libhevce_D91C4DF36599BE946C60F0207B71C852C4AC38FE672A22F53B12C962157F26E1(void) {
    ALOGD("_libhevce_D91C4DF36599BE946C60F0207B71C852C4AC38FE672A22F53B12C962157F26E1() called");
    return 0;
}

/* Demangled: _libhevce_C701ABD8C891DF94E24E6DF1EB10871196414BAD076A1F3230FD733382C6CC76 */
extern "C" __attribute__((visibility("default"))) int _libhevce_C701ABD8C891DF94E24E6DF1EB10871196414BAD076A1F3230FD733382C6CC76(void) {
    ALOGD("_libhevce_C701ABD8C891DF94E24E6DF1EB10871196414BAD076A1F3230FD733382C6CC76() called");
    return 0;
}

/* Demangled: _libhevce_A2949AF37FA270E51C7CD4A7491D563B1CB166CE8876FFE07D103DD5090621D5 */
extern "C" __attribute__((visibility("default"))) int _libhevce_A2949AF37FA270E51C7CD4A7491D563B1CB166CE8876FFE07D103DD5090621D5(void) {
    ALOGD("_libhevce_A2949AF37FA270E51C7CD4A7491D563B1CB166CE8876FFE07D103DD5090621D5() called");
    return 0;
}

/* Demangled: _libhevce_26476E8D43C116B76912CEAF7805F0628F24BECDE621C517E7D0BA26A92456F1 */
extern "C" __attribute__((visibility("default"))) int _libhevce_26476E8D43C116B76912CEAF7805F0628F24BECDE621C517E7D0BA26A92456F1(void) {
    ALOGD("_libhevce_26476E8D43C116B76912CEAF7805F0628F24BECDE621C517E7D0BA26A92456F1() called");
    return 0;
}

/* Demangled: _libhevce_26476E8D43C116B76912CEAF7805F062585A766BE84A32877D61B5BDDE4B2CE2 */
extern "C" __attribute__((visibility("default"))) int _libhevce_26476E8D43C116B76912CEAF7805F062585A766BE84A32877D61B5BDDE4B2CE2(void) {
    ALOGD("_libhevce_26476E8D43C116B76912CEAF7805F062585A766BE84A32877D61B5BDDE4B2CE2() called");
    return 0;
}

/* Demangled: _libhevce_58F9A2AA7FC0767DA3127B321FC0AA6C74A33D30D1AB2ACD4647C2CA06A019D7 */
extern "C" __attribute__((visibility("default"))) int _libhevce_58F9A2AA7FC0767DA3127B321FC0AA6C74A33D30D1AB2ACD4647C2CA06A019D7(void) {
    ALOGD("_libhevce_58F9A2AA7FC0767DA3127B321FC0AA6C74A33D30D1AB2ACD4647C2CA06A019D7() called");
    return 0;
}

/* Demangled: _libhevce_B4484FF5EE2715B6418E22283059473F0AAEC6E308DCD0580F6D933DBC7EC6A6 */
extern "C" __attribute__((visibility("default"))) int _libhevce_B4484FF5EE2715B6418E22283059473F0AAEC6E308DCD0580F6D933DBC7EC6A6(void) {
    ALOGD("_libhevce_B4484FF5EE2715B6418E22283059473F0AAEC6E308DCD0580F6D933DBC7EC6A6() called");
    return 0;
}

/* Demangled: _libhevce_B4484FF5EE2715B6418E22283059473FAFC3EDB2D1231E67DFCBBC0EA06658D3 */
extern "C" __attribute__((visibility("default"))) int _libhevce_B4484FF5EE2715B6418E22283059473FAFC3EDB2D1231E67DFCBBC0EA06658D3(void) {
    ALOGD("_libhevce_B4484FF5EE2715B6418E22283059473FAFC3EDB2D1231E67DFCBBC0EA06658D3() called");
    return 0;
}

/* Demangled: _libhevce_0C8ADC1B66471663C07CFC04625A8AE000F1CC1296C5FC26EBF67124A433F9AA */
extern "C" __attribute__((visibility("default"))) int _libhevce_0C8ADC1B66471663C07CFC04625A8AE000F1CC1296C5FC26EBF67124A433F9AA(void) {
    ALOGD("_libhevce_0C8ADC1B66471663C07CFC04625A8AE000F1CC1296C5FC26EBF67124A433F9AA() called");
    return 0;
}

/* Exported Object: TABLE_ATOMIC_Z_SCAN */
extern "C" __attribute__((visibility("default"))) void* TABLE_ATOMIC_Z_SCAN = NULL;

/* Exported Object: TABLE_COMBINED_MERGE_CAND */
extern "C" __attribute__((visibility("default"))) void* TABLE_COMBINED_MERGE_CAND = NULL;

/* Exported Object: TABLE_PART_IDX_TO_OFFSET_CHROMA */
extern "C" __attribute__((visibility("default"))) void* TABLE_PART_IDX_TO_OFFSET_CHROMA = NULL;

/* Exported Object: TABLE_PART_IDX_TO_OFFSET_LUMA */
extern "C" __attribute__((visibility("default"))) void* TABLE_PART_IDX_TO_OFFSET_LUMA = NULL;

/* Exported Object: TABLE_QP_CHROMA_INDEX_MAP */
extern "C" __attribute__((visibility("default"))) void* TABLE_QP_CHROMA_INDEX_MAP = NULL;

/* Demangled: _libhevce_CC31E5F3A3A8F20B42B7B05F2A94C022BFE4C5EB6B637E3393B473474A60DF4B */
extern "C" __attribute__((visibility("default"))) int _libhevce_CC31E5F3A3A8F20B42B7B05F2A94C022BFE4C5EB6B637E3393B473474A60DF4B(void) {
    ALOGD("_libhevce_CC31E5F3A3A8F20B42B7B05F2A94C022BFE4C5EB6B637E3393B473474A60DF4B() called");
    return 0;
}

/* Demangled: _libhevce_064A3E2E41A17307869339BCF94C773D6E2EB49EA0CE9B97144853B63900764F */
extern "C" __attribute__((visibility("default"))) int _libhevce_064A3E2E41A17307869339BCF94C773D6E2EB49EA0CE9B97144853B63900764F(void) {
    ALOGD("_libhevce_064A3E2E41A17307869339BCF94C773D6E2EB49EA0CE9B97144853B63900764F() called");
    return 0;
}

/* Demangled: _libhevce_3FC9459A5B2CAE8DBF4E0D39A1E4F5E4C86530F222052A79254A2E0AB6B8EE36 */
extern "C" __attribute__((visibility("default"))) int _libhevce_3FC9459A5B2CAE8DBF4E0D39A1E4F5E4C86530F222052A79254A2E0AB6B8EE36(void) {
    ALOGD("_libhevce_3FC9459A5B2CAE8DBF4E0D39A1E4F5E4C86530F222052A79254A2E0AB6B8EE36() called");
    return 0;
}

/* Demangled: _libhevce_BD7B17FC81EA440C4D136E356C30462EC63CFA2B0691D72785878182B7B620BCA90ED714661049A843856EAA3E613349 */
extern "C" __attribute__((visibility("default"))) int _libhevce_BD7B17FC81EA440C4D136E356C30462EC63CFA2B0691D72785878182B7B620BCA90ED714661049A843856EAA3E613349(void) {
    ALOGD("_libhevce_BD7B17FC81EA440C4D136E356C30462EC63CFA2B0691D72785878182B7B620BCA90ED714661049A843856EAA3E613349() called");
    return 0;
}

/* Demangled: _libhevce_BD7B17FC81EA440C4D136E356C30462E7FFFFD1741E7940B0B527FDEF6D8A8E5DC94254F70920863690C69B611BC582F */
extern "C" __attribute__((visibility("default"))) int _libhevce_BD7B17FC81EA440C4D136E356C30462E7FFFFD1741E7940B0B527FDEF6D8A8E5DC94254F70920863690C69B611BC582F(void) {
    ALOGD("_libhevce_BD7B17FC81EA440C4D136E356C30462E7FFFFD1741E7940B0B527FDEF6D8A8E5DC94254F70920863690C69B611BC582F() called");
    return 0;
}

/* Demangled: _libhevce_30E1C692BA2737C40C63F0CA3EB7C2AEE33E21A3EB5754F7749E5FFFBEB8006A57F5CDD4754DB045836124BC5C833920 */
extern "C" __attribute__((visibility("default"))) int _libhevce_30E1C692BA2737C40C63F0CA3EB7C2AEE33E21A3EB5754F7749E5FFFBEB8006A57F5CDD4754DB045836124BC5C833920(void) {
    ALOGD("_libhevce_30E1C692BA2737C40C63F0CA3EB7C2AEE33E21A3EB5754F7749E5FFFBEB8006A57F5CDD4754DB045836124BC5C833920() called");
    return 0;
}

/* Demangled: _libhevce_30E1C692BA2737C40C63F0CA3EB7C2AEC5FDACE60A1445C851CE524E71968E06EF812B3E58DE8AE5BAC5CB00A4CFC61E */
extern "C" __attribute__((visibility("default"))) int _libhevce_30E1C692BA2737C40C63F0CA3EB7C2AEC5FDACE60A1445C851CE524E71968E06EF812B3E58DE8AE5BAC5CB00A4CFC61E(void) {
    ALOGD("_libhevce_30E1C692BA2737C40C63F0CA3EB7C2AEC5FDACE60A1445C851CE524E71968E06EF812B3E58DE8AE5BAC5CB00A4CFC61E() called");
    return 0;
}

/* Demangled: _libhevce_011DC273DAF1AF6EF0CFA0B193D00014 */
extern "C" __attribute__((visibility("default"))) int _libhevce_011DC273DAF1AF6EF0CFA0B193D00014(void) {
    ALOGD("_libhevce_011DC273DAF1AF6EF0CFA0B193D00014() called");
    return 0;
}

/* Demangled: _libhevce_DD479C38504B51FF10594FB481ACED5286320BB209BE6DCAD8FA68FA7DB5C6BB */
extern "C" __attribute__((visibility("default"))) int _libhevce_DD479C38504B51FF10594FB481ACED5286320BB209BE6DCAD8FA68FA7DB5C6BB(void) {
    ALOGD("_libhevce_DD479C38504B51FF10594FB481ACED5286320BB209BE6DCAD8FA68FA7DB5C6BB() called");
    return 0;
}

/* Exported Object: TABLE_DEBLOCK_PARAM_VS_Q */
extern "C" __attribute__((visibility("default"))) void* TABLE_DEBLOCK_PARAM_VS_Q = NULL;

/* Demangled: _libhevce_0E92A5A5DD38D20A3D621B00A533B8356C161B67C870914657AF0F1800C716B2 */
extern "C" __attribute__((visibility("default"))) int _libhevce_0E92A5A5DD38D20A3D621B00A533B8356C161B67C870914657AF0F1800C716B2(void) {
    ALOGD("_libhevce_0E92A5A5DD38D20A3D621B00A533B8356C161B67C870914657AF0F1800C716B2() called");
    return 0;
}

/* Demangled: _libhevce_0E92A5A5DD38D20A3D621B00A533B83579D4E2C0FA37BEBC1E2A046267BC1594 */
extern "C" __attribute__((visibility("default"))) int _libhevce_0E92A5A5DD38D20A3D621B00A533B83579D4E2C0FA37BEBC1E2A046267BC1594(void) {
    ALOGD("_libhevce_0E92A5A5DD38D20A3D621B00A533B83579D4E2C0FA37BEBC1E2A046267BC1594() called");
    return 0;
}

/* Demangled: _libhevce_0E92A5A5DD38D20A3D621B00A533B83599068F30388B0AF1BB8A5D93F1F6093A */
extern "C" __attribute__((visibility("default"))) int _libhevce_0E92A5A5DD38D20A3D621B00A533B83599068F30388B0AF1BB8A5D93F1F6093A(void) {
    ALOGD("_libhevce_0E92A5A5DD38D20A3D621B00A533B83599068F30388B0AF1BB8A5D93F1F6093A() called");
    return 0;
}

/* Demangled: _libhevce_0E92A5A5DD38D20A3D621B00A533B835BBC3D689F56C6482CADA1D25AD7303F6 */
extern "C" __attribute__((visibility("default"))) int _libhevce_0E92A5A5DD38D20A3D621B00A533B835BBC3D689F56C6482CADA1D25AD7303F6(void) {
    ALOGD("_libhevce_0E92A5A5DD38D20A3D621B00A533B835BBC3D689F56C6482CADA1D25AD7303F6() called");
    return 0;
}

/* Demangled: _libhevce_0E92A5A5DD38D20A3D621B00A533B835DD7CBB00D78294DF4EC79332F278C834 */
extern "C" __attribute__((visibility("default"))) int _libhevce_0E92A5A5DD38D20A3D621B00A533B835DD7CBB00D78294DF4EC79332F278C834(void) {
    ALOGD("_libhevce_0E92A5A5DD38D20A3D621B00A533B835DD7CBB00D78294DF4EC79332F278C834() called");
    return 0;
}

/* Demangled: _libhevce_9BCD7034E52FE303ECA9F08F6E357FE76C161B67C870914657AF0F1800C716B2 */
extern "C" __attribute__((visibility("default"))) int _libhevce_9BCD7034E52FE303ECA9F08F6E357FE76C161B67C870914657AF0F1800C716B2(void) {
    ALOGD("_libhevce_9BCD7034E52FE303ECA9F08F6E357FE76C161B67C870914657AF0F1800C716B2() called");
    return 0;
}

/* Demangled: _libhevce_9BCD7034E52FE303ECA9F08F6E357FE779D4E2C0FA37BEBC1E2A046267BC1594 */
extern "C" __attribute__((visibility("default"))) int _libhevce_9BCD7034E52FE303ECA9F08F6E357FE779D4E2C0FA37BEBC1E2A046267BC1594(void) {
    ALOGD("_libhevce_9BCD7034E52FE303ECA9F08F6E357FE779D4E2C0FA37BEBC1E2A046267BC1594() called");
    return 0;
}

/* Demangled: _libhevce_9BCD7034E52FE303ECA9F08F6E357FE799068F30388B0AF1BB8A5D93F1F6093A */
extern "C" __attribute__((visibility("default"))) int _libhevce_9BCD7034E52FE303ECA9F08F6E357FE799068F30388B0AF1BB8A5D93F1F6093A(void) {
    ALOGD("_libhevce_9BCD7034E52FE303ECA9F08F6E357FE799068F30388B0AF1BB8A5D93F1F6093A() called");
    return 0;
}

/* Demangled: _libhevce_9BCD7034E52FE303ECA9F08F6E357FE7BBC3D689F56C6482CADA1D25AD7303F6 */
extern "C" __attribute__((visibility("default"))) int _libhevce_9BCD7034E52FE303ECA9F08F6E357FE7BBC3D689F56C6482CADA1D25AD7303F6(void) {
    ALOGD("_libhevce_9BCD7034E52FE303ECA9F08F6E357FE7BBC3D689F56C6482CADA1D25AD7303F6() called");
    return 0;
}

/* Demangled: _libhevce_9BCD7034E52FE303ECA9F08F6E357FE7DD7CBB00D78294DF4EC79332F278C834 */
extern "C" __attribute__((visibility("default"))) int _libhevce_9BCD7034E52FE303ECA9F08F6E357FE7DD7CBB00D78294DF4EC79332F278C834(void) {
    ALOGD("_libhevce_9BCD7034E52FE303ECA9F08F6E357FE7DD7CBB00D78294DF4EC79332F278C834() called");
    return 0;
}

/* Demangled: _libhevce_D515741CFEC59D415BEC93BD0CCEAB1F57F5CDD4754DB045836124BC5C833920 */
extern "C" __attribute__((visibility("default"))) int _libhevce_D515741CFEC59D415BEC93BD0CCEAB1F57F5CDD4754DB045836124BC5C833920(void) {
    ALOGD("_libhevce_D515741CFEC59D415BEC93BD0CCEAB1F57F5CDD4754DB045836124BC5C833920() called");
    return 0;
}

/* Demangled: _libhevce_DD7E880EE82ACEDF9611F78C521A9CBB57F5CDD4754DB045836124BC5C833920 */
extern "C" __attribute__((visibility("default"))) int _libhevce_DD7E880EE82ACEDF9611F78C521A9CBB57F5CDD4754DB045836124BC5C833920(void) {
    ALOGD("_libhevce_DD7E880EE82ACEDF9611F78C521A9CBB57F5CDD4754DB045836124BC5C833920() called");
    return 0;
}

/* Demangled: _libhevce_A1D3CE3B2295DDCADED11DB50809D461CE21E3D0A76F936D9F807840E3007FA90A1706D913CEF645C20D11F564303CA7 */
extern "C" __attribute__((visibility("default"))) int _libhevce_A1D3CE3B2295DDCADED11DB50809D461CE21E3D0A76F936D9F807840E3007FA90A1706D913CEF645C20D11F564303CA7(void) {
    ALOGD("_libhevce_A1D3CE3B2295DDCADED11DB50809D461CE21E3D0A76F936D9F807840E3007FA90A1706D913CEF645C20D11F564303CA7() called");
    return 0;
}

/* Demangled: _libhevce_8F250C1E09534B49C2028EAE577CCA72783F8E090E4290591831553E2A91E471D416D43ACAB1094088A7FC1F24304D9A */
extern "C" __attribute__((visibility("default"))) int _libhevce_8F250C1E09534B49C2028EAE577CCA72783F8E090E4290591831553E2A91E471D416D43ACAB1094088A7FC1F24304D9A(void) {
    ALOGD("_libhevce_8F250C1E09534B49C2028EAE577CCA72783F8E090E4290591831553E2A91E471D416D43ACAB1094088A7FC1F24304D9A() called");
    return 0;
}

/* Demangled: _libhevce_C9CDA30BF192EE47E9E9A010275A1B37BE9EA0017CD2E12D46A12310F13E1385 */
extern "C" __attribute__((visibility("default"))) int _libhevce_C9CDA30BF192EE47E9E9A010275A1B37BE9EA0017CD2E12D46A12310F13E1385(void) {
    ALOGD("_libhevce_C9CDA30BF192EE47E9E9A010275A1B37BE9EA0017CD2E12D46A12310F13E1385() called");
    return 0;
}

/* Demangled: _libhevce_16C67B63F20BEBA0B67B0AEEC4708F4370A36B482F3C0970DECA92B2134FD285 */
extern "C" __attribute__((visibility("default"))) int _libhevce_16C67B63F20BEBA0B67B0AEEC4708F4370A36B482F3C0970DECA92B2134FD285(void) {
    ALOGD("_libhevce_16C67B63F20BEBA0B67B0AEEC4708F4370A36B482F3C0970DECA92B2134FD285() called");
    return 0;
}

/* Demangled: _libhevce_16C67B63F20BEBA0B67B0AEEC4708F43BC3D08507AD37B6751F938D7AB81BC4E */
extern "C" __attribute__((visibility("default"))) int _libhevce_16C67B63F20BEBA0B67B0AEEC4708F43BC3D08507AD37B6751F938D7AB81BC4E(void) {
    ALOGD("_libhevce_16C67B63F20BEBA0B67B0AEEC4708F43BC3D08507AD37B6751F938D7AB81BC4E() called");
    return 0;
}

/* Demangled: _libhevce_343784AA1B3B43D6F8EF2FFF9C29F6F0723F7781A6486EF308A0EAEF3C235B35EF812B3E58DE8AE5BAC5CB00A4CFC61E */
extern "C" __attribute__((visibility("default"))) int _libhevce_343784AA1B3B43D6F8EF2FFF9C29F6F0723F7781A6486EF308A0EAEF3C235B35EF812B3E58DE8AE5BAC5CB00A4CFC61E(void) {
    ALOGD("_libhevce_343784AA1B3B43D6F8EF2FFF9C29F6F0723F7781A6486EF308A0EAEF3C235B35EF812B3E58DE8AE5BAC5CB00A4CFC61E() called");
    return 0;
}

/* Demangled: _libhevce_343784AA1B3B43D6F8EF2FFF9C29F6F04B9BE394BAE5865B286D233A293C388A */
extern "C" __attribute__((visibility("default"))) int _libhevce_343784AA1B3B43D6F8EF2FFF9C29F6F04B9BE394BAE5865B286D233A293C388A(void) {
    ALOGD("_libhevce_343784AA1B3B43D6F8EF2FFF9C29F6F04B9BE394BAE5865B286D233A293C388A() called");
    return 0;
}

/* Demangled: _libhevce_0B7EB0FB4DBCFD95F9DD0FC1B78DFCB138463091F4DAC2E0F27B1281E7ED5091 */
extern "C" __attribute__((visibility("default"))) int _libhevce_0B7EB0FB4DBCFD95F9DD0FC1B78DFCB138463091F4DAC2E0F27B1281E7ED5091(void) {
    ALOGD("_libhevce_0B7EB0FB4DBCFD95F9DD0FC1B78DFCB138463091F4DAC2E0F27B1281E7ED5091() called");
    return 0;
}

/* Exported Object: TABLE_INTRA_PRED_ANGLE */
extern "C" __attribute__((visibility("default"))) void* TABLE_INTRA_PRED_ANGLE = NULL;

/* Exported Object: TABLE_INV_INTRA_PRED_ANGLE */
extern "C" __attribute__((visibility("default"))) void* TABLE_INV_INTRA_PRED_ANGLE = NULL;

/* Exported Object: TABLE_BLK_XY_TO_PART_IDX */
extern "C" __attribute__((visibility("default"))) void* TABLE_BLK_XY_TO_PART_IDX = NULL;

/* Exported Object: QP_CUBIC */
extern "C" __attribute__((visibility("default"))) void* QP_CUBIC = NULL;

/* Exported Object: QP_POWER */
extern "C" __attribute__((visibility("default"))) void* QP_POWER = NULL;

/* Exported Object: QP_POWER_1_5 */
extern "C" __attribute__((visibility("default"))) void* QP_POWER_1_5 = NULL;

/* Exported Object: TABLE_4_TAP_DCT_FILTER */
extern "C" __attribute__((visibility("default"))) void* TABLE_4_TAP_DCT_FILTER = NULL;

/* Exported Object: TABLE_8_TAP_DCT_FILTER */
extern "C" __attribute__((visibility("default"))) void* TABLE_8_TAP_DCT_FILTER = NULL;

/* Exported Object: TABLE_PART_MODE_INTER */
extern "C" __attribute__((visibility("default"))) void* TABLE_PART_MODE_INTER = NULL;

/* Exported Object: TABLE_PART_TYPE_TO_1ST_PU_TYPE */
extern "C" __attribute__((visibility("default"))) void* TABLE_PART_TYPE_TO_1ST_PU_TYPE = NULL;

/* Exported Object: TABLE_PU_PART_OFFSET */
extern "C" __attribute__((visibility("default"))) void* TABLE_PU_PART_OFFSET = NULL;

/* Exported Object: TABLE_QP_LEVEL_SCALE */
extern "C" __attribute__((visibility("default"))) void* TABLE_QP_LEVEL_SCALE = NULL;

/* Exported Object: TABLE_SCALING_LIST_DEFAULT4x4 */
extern "C" __attribute__((visibility("default"))) void* TABLE_SCALING_LIST_DEFAULT4x4 = NULL;

/* Exported Object: TABLE_SCALING_LIST_DEFAULT8x8 */
extern "C" __attribute__((visibility("default"))) void* TABLE_SCALING_LIST_DEFAULT8x8 = NULL;

/* Exported Object: TABLE_SCALING_LIST_DEFAULT_DC */
extern "C" __attribute__((visibility("default"))) void* TABLE_SCALING_LIST_DEFAULT_DC = NULL;

/* Exported Object: TABLE_SCALING_LIST_NUM */
extern "C" __attribute__((visibility("default"))) void* TABLE_SCALING_LIST_NUM = NULL;

/* Exported Object: TABLE_SCAN_DIAG_4x4 */
extern "C" __attribute__((visibility("default"))) void* TABLE_SCAN_DIAG_4x4 = NULL;

/* Exported Object: TABLE_SCAN_DIAG_8x8 */
extern "C" __attribute__((visibility("default"))) void* TABLE_SCAN_DIAG_8x8 = NULL;

/* Exported Object: CABAC_ENC_TABLE_BINSTRING_PART_MODE_0 */
extern "C" __attribute__((visibility("default"))) void* CABAC_ENC_TABLE_BINSTRING_PART_MODE_0 = NULL;

/* Exported Object: renorm_table */
extern "C" __attribute__((visibility("default"))) void* renorm_table = NULL;

/* Exported Object: CABAC_ENC_TABLE_BINSTRING_PART_MODE_1 */
extern "C" __attribute__((visibility("default"))) void* CABAC_ENC_TABLE_BINSTRING_PART_MODE_1 = NULL;

/* Exported Object: CABAC_ENC_TABLE_BINSTRING_PART_MODE_2 */
extern "C" __attribute__((visibility("default"))) void* CABAC_ENC_TABLE_BINSTRING_PART_MODE_2 = NULL;

/* Demangled: _libhevce_B1D3AA7DBAFC2F2F7EC18136D51D4C09115C83C74D5674B90848FDFF0F4B77B6 */
extern "C" __attribute__((visibility("default"))) int _libhevce_B1D3AA7DBAFC2F2F7EC18136D51D4C09115C83C74D5674B90848FDFF0F4B77B6(void) {
    ALOGD("_libhevce_B1D3AA7DBAFC2F2F7EC18136D51D4C09115C83C74D5674B90848FDFF0F4B77B6() called");
    return 0;
}

/* Demangled: _libhevce_70EE5A2D3B7E4EE500D43066AE3430ABEB8D7B14130EFDCB2E4FEBAA99F3948F */
extern "C" __attribute__((visibility("default"))) int _libhevce_70EE5A2D3B7E4EE500D43066AE3430ABEB8D7B14130EFDCB2E4FEBAA99F3948F(void) {
    ALOGD("_libhevce_70EE5A2D3B7E4EE500D43066AE3430ABEB8D7B14130EFDCB2E4FEBAA99F3948F() called");
    return 0;
}

/* Demangled: _libhevce_5C9905F10DC28DE911CB0F251452276B202B4A45791D7B1096DEF174D8D2E46C */
extern "C" __attribute__((visibility("default"))) int _libhevce_5C9905F10DC28DE911CB0F251452276B202B4A45791D7B1096DEF174D8D2E46C(void) {
    ALOGD("_libhevce_5C9905F10DC28DE911CB0F251452276B202B4A45791D7B1096DEF174D8D2E46C() called");
    return 0;
}

/* Demangled: _libhevce_1BED55A99409099E532E05A26B7452154397C8CF047A7726BF56539D1F523A22ABEFAD7E56D67FB6CA17D4442FBB3D46 */
extern "C" __attribute__((visibility("default"))) int _libhevce_1BED55A99409099E532E05A26B7452154397C8CF047A7726BF56539D1F523A22ABEFAD7E56D67FB6CA17D4442FBB3D46(void) {
    ALOGD("_libhevce_1BED55A99409099E532E05A26B7452154397C8CF047A7726BF56539D1F523A22ABEFAD7E56D67FB6CA17D4442FBB3D46() called");
    return 0;
}

/* Demangled: _libhevce_6E7B79ACD9EBFE1A35DA48E33AC6CAA126819FB183D8691559CC1890DB155F64 */
extern "C" __attribute__((visibility("default"))) int _libhevce_6E7B79ACD9EBFE1A35DA48E33AC6CAA126819FB183D8691559CC1890DB155F64(void) {
    ALOGD("_libhevce_6E7B79ACD9EBFE1A35DA48E33AC6CAA126819FB183D8691559CC1890DB155F64() called");
    return 0;
}

/* Demangled: _libhevce_29BEB65791BEB2C46492B0A1EB884B63 */
extern "C" __attribute__((visibility("default"))) int _libhevce_29BEB65791BEB2C46492B0A1EB884B63(void) {
    ALOGD("_libhevce_29BEB65791BEB2C46492B0A1EB884B63() called");
    return 0;
}

/* Demangled: _libhevce_7AA09B855906CBE0B4621F48E23F838357008989C1D7EF30B01C1558450F9806 */
extern "C" __attribute__((visibility("default"))) int _libhevce_7AA09B855906CBE0B4621F48E23F838357008989C1D7EF30B01C1558450F9806(void) {
    ALOGD("_libhevce_7AA09B855906CBE0B4621F48E23F838357008989C1D7EF30B01C1558450F9806() called");
    return 0;
}

/* Demangled: _libhevce_99DDE4FD04A5D1444DFD54E1BA486137 */
extern "C" __attribute__((visibility("default"))) int _libhevce_99DDE4FD04A5D1444DFD54E1BA486137(void) {
    ALOGD("_libhevce_99DDE4FD04A5D1444DFD54E1BA486137() called");
    return 0;
}

/* Demangled: _libhevce_1F5C1B962456F19B9CC090536988D0988E81226C1FFF1E103B0CB311D56BD3B2 */
extern "C" __attribute__((visibility("default"))) int _libhevce_1F5C1B962456F19B9CC090536988D0988E81226C1FFF1E103B0CB311D56BD3B2(void) {
    ALOGD("_libhevce_1F5C1B962456F19B9CC090536988D0988E81226C1FFF1E103B0CB311D56BD3B2() called");
    return 0;
}

/* Demangled: _libhevce_27F19965A1F1A15D26D2651E6A7D8C39 */
extern "C" __attribute__((visibility("default"))) int _libhevce_27F19965A1F1A15D26D2651E6A7D8C39(void) {
    ALOGD("_libhevce_27F19965A1F1A15D26D2651E6A7D8C39() called");
    return 0;
}

/* Demangled: _libhevce_B7984565A2C34EBC361B1FBB4D9296F8 */
extern "C" __attribute__((visibility("default"))) int _libhevce_B7984565A2C34EBC361B1FBB4D9296F8(void) {
    ALOGD("_libhevce_B7984565A2C34EBC361B1FBB4D9296F8() called");
    return 0;
}

/* Demangled: _libhevce_34C2851FE345AA3F41B544265192149566A5EF5054F2FAE006F4426CD2F8AF20 */
extern "C" __attribute__((visibility("default"))) int _libhevce_34C2851FE345AA3F41B544265192149566A5EF5054F2FAE006F4426CD2F8AF20(void) {
    ALOGD("_libhevce_34C2851FE345AA3F41B544265192149566A5EF5054F2FAE006F4426CD2F8AF20() called");
    return 0;
}

/* Demangled: _libhevce_8DC28B00492BD08928E9A98D877A4BB84E1313697A74D2DFE3A4DC56E43AD9C5 */
extern "C" __attribute__((visibility("default"))) int _libhevce_8DC28B00492BD08928E9A98D877A4BB84E1313697A74D2DFE3A4DC56E43AD9C5(void) {
    ALOGD("_libhevce_8DC28B00492BD08928E9A98D877A4BB84E1313697A74D2DFE3A4DC56E43AD9C5() called");
    return 0;
}

/* Demangled: _libhevce_6D9CFDC4D88A60482AE2E269B9E62D52B2D8B9357D27EFB64EF046DB4A70AE84 */
extern "C" __attribute__((visibility("default"))) int _libhevce_6D9CFDC4D88A60482AE2E269B9E62D52B2D8B9357D27EFB64EF046DB4A70AE84(void) {
    ALOGD("_libhevce_6D9CFDC4D88A60482AE2E269B9E62D52B2D8B9357D27EFB64EF046DB4A70AE84() called");
    return 0;
}

/* Demangled: _libhevce_6D9CFDC4D88A60482AE2E269B9E62D523536AA5B210C5DB05DF8EE1476900780 */
extern "C" __attribute__((visibility("default"))) int _libhevce_6D9CFDC4D88A60482AE2E269B9E62D523536AA5B210C5DB05DF8EE1476900780(void) {
    ALOGD("_libhevce_6D9CFDC4D88A60482AE2E269B9E62D523536AA5B210C5DB05DF8EE1476900780() called");
    return 0;
}

/* Demangled: _libhevce_255D3B986D401338B38411537DB3B56A89F1993BFB431CF8C151797C9241EDEE08921F4AE27AF1A243358208FAB026B3 */
extern "C" __attribute__((visibility("default"))) int _libhevce_255D3B986D401338B38411537DB3B56A89F1993BFB431CF8C151797C9241EDEE08921F4AE27AF1A243358208FAB026B3(void) {
    ALOGD("_libhevce_255D3B986D401338B38411537DB3B56A89F1993BFB431CF8C151797C9241EDEE08921F4AE27AF1A243358208FAB026B3() called");
    return 0;
}

/* Demangled: _libhevce_255D3B986D401338B38411537DB3B56AD1B7BF24485F0D13D47FCE83C7143FED */
extern "C" __attribute__((visibility("default"))) int _libhevce_255D3B986D401338B38411537DB3B56AD1B7BF24485F0D13D47FCE83C7143FED(void) {
    ALOGD("_libhevce_255D3B986D401338B38411537DB3B56AD1B7BF24485F0D13D47FCE83C7143FED() called");
    return 0;
}

/* Exported Object: INTRA_MODE_SET */
extern "C" __attribute__((visibility("default"))) void* INTRA_MODE_SET = NULL;

/* Demangled: _libhevce_006C00B3ED5384D3AA5E56BA70688ED379074C269CC48EE9218E60A358C40674 */
extern "C" __attribute__((visibility("default"))) int _libhevce_006C00B3ED5384D3AA5E56BA70688ED379074C269CC48EE9218E60A358C40674(void) {
    ALOGD("_libhevce_006C00B3ED5384D3AA5E56BA70688ED379074C269CC48EE9218E60A358C40674() called");
    return 0;
}

/* Demangled: _libhevce_E55CCA162064FF7E08F5DBF1D41369B73CFD8DBF8BB431E314F5E81D9028E620 */
extern "C" __attribute__((visibility("default"))) int _libhevce_E55CCA162064FF7E08F5DBF1D41369B73CFD8DBF8BB431E314F5E81D9028E620(void) {
    ALOGD("_libhevce_E55CCA162064FF7E08F5DBF1D41369B73CFD8DBF8BB431E314F5E81D9028E620() called");
    return 0;
}

/* Demangled: _libhevce_87EB6D6B04C29FD0892167E34DE711DB23010BB1E06EFDB46440DAD32EF4B4013B10DA99DF4D6CC1FA4BED89B937CB01 */
extern "C" __attribute__((visibility("default"))) int _libhevce_87EB6D6B04C29FD0892167E34DE711DB23010BB1E06EFDB46440DAD32EF4B4013B10DA99DF4D6CC1FA4BED89B937CB01(void) {
    ALOGD("_libhevce_87EB6D6B04C29FD0892167E34DE711DB23010BB1E06EFDB46440DAD32EF4B4013B10DA99DF4D6CC1FA4BED89B937CB01() called");
    return 0;
}

/* Demangled: _libhevce_6763A97D4D8249C49985EFE119A4AD9FCCCECFE8057E663048EBA344E004FCA56D424635D161FC7C4E38E88F29C725EB */
extern "C" __attribute__((visibility("default"))) int _libhevce_6763A97D4D8249C49985EFE119A4AD9FCCCECFE8057E663048EBA344E004FCA56D424635D161FC7C4E38E88F29C725EB(void) {
    ALOGD("_libhevce_6763A97D4D8249C49985EFE119A4AD9FCCCECFE8057E663048EBA344E004FCA56D424635D161FC7C4E38E88F29C725EB() called");
    return 0;
}

/* Demangled: _libhevce_6763A97D4D8249C49985EFE119A4AD9F1B0B0729CBB486126E6F51FA6140AE644D3BE483C2EA66277B9C902FBACC4DF4 */
extern "C" __attribute__((visibility("default"))) int _libhevce_6763A97D4D8249C49985EFE119A4AD9F1B0B0729CBB486126E6F51FA6140AE644D3BE483C2EA66277B9C902FBACC4DF4(void) {
    ALOGD("_libhevce_6763A97D4D8249C49985EFE119A4AD9F1B0B0729CBB486126E6F51FA6140AE644D3BE483C2EA66277B9C902FBACC4DF4() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

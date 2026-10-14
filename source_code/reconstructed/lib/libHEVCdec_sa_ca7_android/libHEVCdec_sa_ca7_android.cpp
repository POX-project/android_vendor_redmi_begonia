/*
 * Reverse-Engineered Source for: libHEVCdec_sa.ca7.android.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libHEVCdec_sa_ca7_android"

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
#include "libHEVCdec_sa_ca7_android.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: HEVCDecoderOpenAdapt */
extern "C" __attribute__((visibility("default"))) int HEVCDecoderOpenAdapt(void) {
    ALOGD("HEVCDecoderOpenAdapt() called");
    return 0;
}

/* Demangled: hevc_initialize_tables */
extern "C" __attribute__((visibility("default"))) int hevc_initialize_tables(void) {
    ALOGD("hevc_initialize_tables() called");
    return 0;
}

/* Exported Object: frame_num */
extern "C" __attribute__((visibility("default"))) void* frame_num = NULL;

/* Exported Object: TABLE_SCALING_LIST_DEFAULT4x4 */
extern "C" __attribute__((visibility("default"))) void* TABLE_SCALING_LIST_DEFAULT4x4 = NULL;

/* Exported Object: TABLE_SCALING_LIST_DEFAULT8x8 */
extern "C" __attribute__((visibility("default"))) void* TABLE_SCALING_LIST_DEFAULT8x8 = NULL;

/* Exported Object: TABLE_SCALING_LIST_DEFAULT_DC */
extern "C" __attribute__((visibility("default"))) void* TABLE_SCALING_LIST_DEFAULT_DC = NULL;

/* Demangled: HEVCD_FRAME_DECODE_thread */
extern "C" __attribute__((visibility("default"))) int HEVCD_FRAME_DECODE_thread(void) {
    ALOGD("HEVCD_FRAME_DECODE_thread() called");
    return 0;
}

/* Demangled: LCU_VLD_REC_thread */
extern "C" __attribute__((visibility("default"))) int LCU_VLD_REC_thread(void) {
    ALOGD("LCU_VLD_REC_thread() called");
    return 0;
}

/* Demangled: HEVCDecoderGetParameterAdapt */
extern "C" __attribute__((visibility("default"))) int HEVCDecoderGetParameterAdapt(void) {
    ALOGD("HEVCDecoderGetParameterAdapt() called");
    return 0;
}

/* Demangled: streamd_read */
extern "C" __attribute__((visibility("default"))) int streamd_read(void) {
    ALOGD("streamd_read() called");
    return 0;
}

/* Demangled: hevc_GetTime */
extern "C" __attribute__((visibility("default"))) int hevc_GetTime(void) {
    ALOGD("hevc_GetTime() called");
    return 0;
}

/* Exported Object: tv */
extern "C" __attribute__((visibility("default"))) void* tv = NULL;

/* Demangled: queryCpuInfo */
extern "C" __attribute__((visibility("default"))) int queryCpuInfo(void) {
    ALOGD("queryCpuInfo() called");
    return 0;
}

/* Exported Object: cpu_info */
extern "C" __attribute__((visibility("default"))) void* cpu_info = NULL;

/* Demangled: HEVCDecoderPerfServiceInit */
extern "C" __attribute__((visibility("default"))) int HEVCDecoderPerfServiceInit(void) {
    ALOGD("HEVCDecoderPerfServiceInit() called");
    return 0;
}

/* Demangled: HEVCDecoderPerfServiceDeInit */
extern "C" __attribute__((visibility("default"))) int HEVCDecoderPerfServiceDeInit(void) {
    ALOGD("HEVCDecoderPerfServiceDeInit() called");
    return 0;
}

/* Demangled: HEVCDecoderPerfServiceSwitchLevel */
extern "C" __attribute__((visibility("default"))) int HEVCDecoderPerfServiceSwitchLevel(void) {
    ALOGD("HEVCDecoderPerfServiceSwitchLevel() called");
    return 0;
}

/* Demangled: HEVCDecoderPerfServiceBeforeIDR */
extern "C" __attribute__((visibility("default"))) int HEVCDecoderPerfServiceBeforeIDR(void) {
    ALOGD("HEVCDecoderPerfServiceBeforeIDR() called");
    return 0;
}

/* Demangled: HEVCDecoderPerfServiceAfterIDR */
extern "C" __attribute__((visibility("default"))) int HEVCDecoderPerfServiceAfterIDR(void) {
    ALOGD("HEVCDecoderPerfServiceAfterIDR() called");
    return 0;
}

/* Demangled: HEVCDecoderPerfServicebyFrame */
extern "C" __attribute__((visibility("default"))) int HEVCDecoderPerfServicebyFrame(void) {
    ALOGD("HEVCDecoderPerfServicebyFrame() called");
    return 0;
}

/* Demangled: HEVCBindingCoresInit */
extern "C" __attribute__((visibility("default"))) int HEVCBindingCoresInit(void) {
    ALOGD("HEVCBindingCoresInit() called");
    return 0;
}

/* Demangled: HEVCDecoderInitAdapt */
extern "C" __attribute__((visibility("default"))) int HEVCDecoderInitAdapt(void) {
    ALOGD("HEVCDecoderInitAdapt() called");
    return 0;
}

/* Exported Object: HEVCD_Factor_Rn2 */
extern "C" __attribute__((visibility("default"))) void* HEVCD_Factor_Rn2 = NULL;

/* Exported Object: HEVCD_qaulity_stg_tab5 */
extern "C" __attribute__((visibility("default"))) void* HEVCD_qaulity_stg_tab5 = NULL;

/* Exported Object: HEVCD_Factor_Rn3 */
extern "C" __attribute__((visibility("default"))) void* HEVCD_Factor_Rn3 = NULL;

/* Exported Object: HEVCD_qaulity_stg_tab1 */
extern "C" __attribute__((visibility("default"))) void* HEVCD_qaulity_stg_tab1 = NULL;

/* Exported Object: HEVCD_Factor_Rn */
extern "C" __attribute__((visibility("default"))) void* HEVCD_Factor_Rn = NULL;

/* Exported Object: HEVCD_qaulity_stg_tab2 */
extern "C" __attribute__((visibility("default"))) void* HEVCD_qaulity_stg_tab2 = NULL;

/* Exported Object: HEVCD_qaulity_stg_tab3 */
extern "C" __attribute__((visibility("default"))) void* HEVCD_qaulity_stg_tab3 = NULL;

/* Exported Object: HEVCD_qaulity_stg_tab4 */
extern "C" __attribute__((visibility("default"))) void* HEVCD_qaulity_stg_tab4 = NULL;

/* Demangled: tstop */
extern "C" __attribute__((visibility("default"))) int tstop(void) {
    ALOGD("tstop() called");
    return 0;
}

/* Demangled: HEVC_DebugPrintf */
extern "C" __attribute__((visibility("default"))) int HEVC_DebugPrintf(void) {
    ALOGD("HEVC_DebugPrintf() called");
    return 0;
}

/* Demangled: HEVC_ErrorPrintf */
extern "C" __attribute__((visibility("default"))) int HEVC_ErrorPrintf(void) {
    ALOGD("HEVC_ErrorPrintf() called");
    return 0;
}

/* Demangled: HEVC_InfoPrintf */
extern "C" __attribute__((visibility("default"))) int HEVC_InfoPrintf(void) {
    ALOGD("HEVC_InfoPrintf() called");
    return 0;
}

/* Demangled: HEVC_WarningPrintf */
extern "C" __attribute__((visibility("default"))) int HEVC_WarningPrintf(void) {
    ALOGD("HEVC_WarningPrintf() called");
    return 0;
}

/* Demangled: HEVC_CountedPrintf */
extern "C" __attribute__((visibility("default"))) int HEVC_CountedPrintf(void) {
    ALOGD("HEVC_CountedPrintf() called");
    return 0;
}

/* Demangled: hevc_malloc */
extern "C" __attribute__((visibility("default"))) int hevc_malloc(void) {
    ALOGD("hevc_malloc() called");
    return 0;
}

/* Demangled: hevc_free */
extern "C" __attribute__((visibility("default"))) int hevc_free(void) {
    ALOGD("hevc_free() called");
    return 0;
}

/* Demangled: HEVCDecoderCloseAdapt */
extern "C" __attribute__((visibility("default"))) int HEVCDecoderCloseAdapt(void) {
    ALOGD("HEVCDecoderCloseAdapt() called");
    return 0;
}

/* Demangled: hevc_destroy_cluster */
extern "C" __attribute__((visibility("default"))) int hevc_destroy_cluster(void) {
    ALOGD("hevc_destroy_cluster() called");
    return 0;
}

/* Demangled: hevc_destroy_picture_buffer */
extern "C" __attribute__((visibility("default"))) int hevc_destroy_picture_buffer(void) {
    ALOGD("hevc_destroy_picture_buffer() called");
    return 0;
}

/* Demangled: sort_picture_buffer */
extern "C" __attribute__((visibility("default"))) int sort_picture_buffer(void) {
    ALOGD("sort_picture_buffer() called");
    return 0;
}

/* Demangled: count_reorder_pictures */
extern "C" __attribute__((visibility("default"))) int count_reorder_pictures(void) {
    ALOGD("count_reorder_pictures() called");
    return 0;
}

/* Demangled: remove_smallest_picture */
extern "C" __attribute__((visibility("default"))) int remove_smallest_picture(void) {
    ALOGD("remove_smallest_picture() called");
    return 0;
}

/* Demangled: hevcd_collect_unref_pictures_to_display_buffer */
extern "C" __attribute__((visibility("default"))) int hevcd_collect_unref_pictures_to_display_buffer(void) {
    ALOGD("hevcd_collect_unref_pictures_to_display_buffer() called");
    return 0;
}

/* Demangled: hevc_set_pict_displayed */
extern "C" __attribute__((visibility("default"))) int hevc_set_pict_displayed(void) {
    ALOGD("hevc_set_pict_displayed() called");
    return 0;
}

/* Demangled: hevcd_init_decode_cu */
extern "C" __attribute__((visibility("default"))) int hevcd_init_decode_cu(void) {
    ALOGD("hevcd_init_decode_cu() called");
    return 0;
}

/* Demangled: hevc_init_cu */
extern "C" __attribute__((visibility("default"))) int hevc_init_cu(void) {
    ALOGD("hevc_init_cu() called");
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

/* Demangled: hevc_sleep */
extern "C" __attribute__((visibility("default"))) int hevc_sleep(void) {
    ALOGD("hevc_sleep() called");
    return 0;
}

/* Demangled: hevcd_collect_free_yuv */
extern "C" __attribute__((visibility("default"))) int hevcd_collect_free_yuv(void) {
    ALOGD("hevcd_collect_free_yuv() called");
    return 0;
}

/* Demangled: hevcd_free_yuv */
extern "C" __attribute__((visibility("default"))) int hevcd_free_yuv(void) {
    ALOGD("hevcd_free_yuv() called");
    return 0;
}

/* Demangled: hevcd_flush_free_yuv */
extern "C" __attribute__((visibility("default"))) int hevcd_flush_free_yuv(void) {
    ALOGD("hevcd_flush_free_yuv() called");
    return 0;
}

/* Demangled: hevcd_return_Bitstream_buffer */
extern "C" __attribute__((visibility("default"))) int hevcd_return_Bitstream_buffer(void) {
    ALOGD("hevcd_return_Bitstream_buffer() called");
    return 0;
}

/* Demangled: hevcd_allocate_yuv */
extern "C" __attribute__((visibility("default"))) int hevcd_allocate_yuv(void) {
    ALOGD("hevcd_allocate_yuv() called");
    return 0;
}

/* Demangled: build_reference_check_list_for_cluster */
extern "C" __attribute__((visibility("default"))) int build_reference_check_list_for_cluster(void) {
    ALOGD("build_reference_check_list_for_cluster() called");
    return 0;
}

/* Demangled: hevcd_flush */
extern "C" __attribute__((visibility("default"))) int hevcd_flush(void) {
    ALOGD("hevcd_flush() called");
    return 0;
}

/* Demangled: hevc_decrease_pict_reference_count */
extern "C" __attribute__((visibility("default"))) int hevc_decrease_pict_reference_count(void) {
    ALOGD("hevc_decrease_pict_reference_count() called");
    return 0;
}

/* Demangled: HEVCDecoderStartAdapt */
extern "C" __attribute__((visibility("default"))) int HEVCDecoderStartAdapt(void) {
    ALOGD("HEVCDecoderStartAdapt() called");
    return 0;
}

/* Demangled: hevcd_decode_NAL_header */
extern "C" __attribute__((visibility("default"))) int hevcd_decode_NAL_header(void) {
    ALOGD("hevcd_decode_NAL_header() called");
    return 0;
}

/* Demangled: hevcd_decode_SEI */
extern "C" __attribute__((visibility("default"))) int hevcd_decode_SEI(void) {
    ALOGD("hevcd_decode_SEI() called");
    return 0;
}

/* Demangled: hevcd_decode_PPS */
extern "C" __attribute__((visibility("default"))) int hevcd_decode_PPS(void) {
    ALOGD("hevcd_decode_PPS() called");
    return 0;
}

/* Demangled: hevcd_decode_SPS */
extern "C" __attribute__((visibility("default"))) int hevcd_decode_SPS(void) {
    ALOGD("hevcd_decode_SPS() called");
    return 0;
}

/* Demangled: hevcd_decode_slice_header */
extern "C" __attribute__((visibility("default"))) int hevcd_decode_slice_header(void) {
    ALOGD("hevcd_decode_slice_header() called");
    return 0;
}

/* Demangled: hevcd_decode_VPS */
extern "C" __attribute__((visibility("default"))) int hevcd_decode_VPS(void) {
    ALOGD("hevcd_decode_VPS() called");
    return 0;
}

/* Demangled: hevc_malloc_internal */
extern "C" __attribute__((visibility("default"))) int hevc_malloc_internal(void) {
    ALOGD("hevc_malloc_internal() called");
    return 0;
}

/* Demangled: hevcd_decode_slice */
extern "C" __attribute__((visibility("default"))) int hevcd_decode_slice(void) {
    ALOGD("hevcd_decode_slice() called");
    return 0;
}

/* Demangled: hevc_decrease_pict_list_reference_count */
extern "C" __attribute__((visibility("default"))) int hevc_decrease_pict_list_reference_count(void) {
    ALOGD("hevc_decrease_pict_list_reference_count() called");
    return 0;
}

/* Demangled: hevc_init_TMV */
extern "C" __attribute__((visibility("default"))) int hevc_init_TMV(void) {
    ALOGD("hevc_init_TMV() called");
    return 0;
}

/* Demangled: hevc_find_free_picture_buffer */
extern "C" __attribute__((visibility("default"))) int hevc_find_free_picture_buffer(void) {
    ALOGD("hevc_find_free_picture_buffer() called");
    return 0;
}

/* Demangled: hevcd_derive_poc */
extern "C" __attribute__((visibility("default"))) int hevcd_derive_poc(void) {
    ALOGD("hevcd_derive_poc() called");
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

/* Demangled: picture_list_remove_a_list */
extern "C" __attribute__((visibility("default"))) int picture_list_remove_a_list(void) {
    ALOGD("picture_list_remove_a_list() called");
    return 0;
}

/* Demangled: hevc_init_picture_buffer */
extern "C" __attribute__((visibility("default"))) int hevc_init_picture_buffer(void) {
    ALOGD("hevc_init_picture_buffer() called");
    return 0;
}

/* Demangled: hevc_common_init */
extern "C" __attribute__((visibility("default"))) int hevc_common_init(void) {
    ALOGD("hevc_common_init() called");
    return 0;
}

/* Demangled: hevc_init_cluster */
extern "C" __attribute__((visibility("default"))) int hevc_init_cluster(void) {
    ALOGD("hevc_init_cluster() called");
    return 0;
}

/* Demangled: hevcd_adatpive_complexity_decoding */
extern "C" __attribute__((visibility("default"))) int hevcd_adatpive_complexity_decoding(void) {
    ALOGD("hevcd_adatpive_complexity_decoding() called");
    return 0;
}

/* Demangled: hevcd_flush_all */
extern "C" __attribute__((visibility("default"))) int hevcd_flush_all(void) {
    ALOGD("hevcd_flush_all() called");
    return 0;
}

/* Demangled: HEVCDecoderSetParameterAdapt */
extern "C" __attribute__((visibility("default"))) int HEVCDecoderSetParameterAdapt(void) {
    ALOGD("HEVCDecoderSetParameterAdapt() called");
    return 0;
}

/* Demangled: HEVCDecoderDeInitAdapt */
extern "C" __attribute__((visibility("default"))) int HEVCDecoderDeInitAdapt(void) {
    ALOGD("HEVCDecoderDeInitAdapt() called");
    return 0;
}

/* Demangled: CRC_adler32 */
extern "C" __attribute__((visibility("default"))) int CRC_adler32(void) {
    ALOGD("CRC_adler32() called");
    return 0;
}

/* Demangled: HEVCDecoderGetNextDisplay */
extern "C" __attribute__((visibility("default"))) int HEVCDecoderGetNextDisplay(void) {
    ALOGD("HEVCDecoderGetNextDisplay() called");
    return 0;
}

/* Demangled: hevcd_peek_NAL_information */
extern "C" __attribute__((visibility("default"))) int hevcd_peek_NAL_information(void) {
    ALOGD("hevcd_peek_NAL_information() called");
    return 0;
}

/* Demangled: streamd_start */
extern "C" __attribute__((visibility("default"))) int streamd_start(void) {
    ALOGD("streamd_start() called");
    return 0;
}

/* Demangled: streamd_peek */
extern "C" __attribute__((visibility("default"))) int streamd_peek(void) {
    ALOGD("streamd_peek() called");
    return 0;
}

/* Demangled: hevcd_decode_SPS_pic_width_height */
extern "C" __attribute__((visibility("default"))) int hevcd_decode_SPS_pic_width_height(void) {
    ALOGD("hevcd_decode_SPS_pic_width_height() called");
    return 0;
}

/* Demangled: streamd_read_uvlc */
extern "C" __attribute__((visibility("default"))) int streamd_read_uvlc(void) {
    ALOGD("streamd_read_uvlc() called");
    return 0;
}

/* Demangled: HEVCDecoderGetCodecRequired */
extern "C" __attribute__((visibility("default"))) int HEVCDecoderGetCodecRequired(void) {
    ALOGD("HEVCDecoderGetCodecRequired() called");
    return 0;
}

/* Demangled: GetHEVCDecoderAPI */
extern "C" __attribute__((visibility("default"))) int GetHEVCDecoderAPI(void) {
    ALOGD("GetHEVCDecoderAPI() called");
    return 0;
}

/* Demangled: hevcd_show_dpb */
extern "C" __attribute__((visibility("default"))) int hevcd_show_dpb(void) {
    ALOGD("hevcd_show_dpb() called");
    return 0;
}

/* Exported Object: rHEVCDecAPI */
extern "C" __attribute__((visibility("default"))) void* rHEVCDecAPI = NULL;

/* Exported Object: MaxLumaPs_Level_Table */
extern "C" __attribute__((visibility("default"))) void* MaxLumaPs_Level_Table = NULL;

/* Exported Object: perfFreqTableL */
extern "C" __attribute__((visibility("default"))) void* perfFreqTableL = NULL;

/* Exported Object: perfFreqTableLL */
extern "C" __attribute__((visibility("default"))) void* perfFreqTableLL = NULL;

/* Exported Object: dbg_thumbnail_utime */
extern "C" __attribute__((visibility("default"))) void* dbg_thumbnail_utime = NULL;

/* Exported Object: cur_thumbnail_utime */
extern "C" __attribute__((visibility("default"))) void* cur_thumbnail_utime = NULL;

/* Exported Object: end_thumbnail_utime */
extern "C" __attribute__((visibility("default"))) void* end_thumbnail_utime = NULL;

/* Exported Object: start_thumbnail_utime */
extern "C" __attribute__((visibility("default"))) void* start_thumbnail_utime = NULL;

/* Exported Object: global_comp */
extern "C" __attribute__((visibility("default"))) void* global_comp = NULL;

/* Exported Object: frame_addr */
extern "C" __attribute__((visibility("default"))) void* frame_addr = NULL;

/* Exported Object: payload_count */
extern "C" __attribute__((visibility("default"))) void* payload_count = NULL;

/* Exported Object: payload_len */
extern "C" __attribute__((visibility("default"))) void* payload_len = NULL;

/* Exported Object: payload_num */
extern "C" __attribute__((visibility("default"))) void* payload_num = NULL;

/* Exported Object: TABLE_SCAN_DIAG_8x8 */
extern "C" __attribute__((visibility("default"))) void* TABLE_SCAN_DIAG_8x8 = NULL;

/* Exported Object: TABLE_SCAN_DIAG_4x4 */
extern "C" __attribute__((visibility("default"))) void* TABLE_SCAN_DIAG_4x4 = NULL;

/* Exported Object: TABLE_SCALING_LIST_NUM */
extern "C" __attribute__((visibility("default"))) void* TABLE_SCALING_LIST_NUM = NULL;

/* Exported Object: TABLE_DEBLOCK_PARAM_VS_Q */
extern "C" __attribute__((visibility("default"))) void* TABLE_DEBLOCK_PARAM_VS_Q = NULL;

/* Exported Object: TABLE_4_TAP_DCT_FILTER */
extern "C" __attribute__((visibility("default"))) void* TABLE_4_TAP_DCT_FILTER = NULL;

/* Exported Object: TABLE_2_TAP_BILIEAR_FILTER_8 */
extern "C" __attribute__((visibility("default"))) void* TABLE_2_TAP_BILIEAR_FILTER_8 = NULL;

/* Exported Object: TABLE_2_TAP_BILIEAR_FILTER_4 */
extern "C" __attribute__((visibility("default"))) void* TABLE_2_TAP_BILIEAR_FILTER_4 = NULL;

/* Exported Object: TABLE_2_TAP_BICUBIC_FILTER_8 */
extern "C" __attribute__((visibility("default"))) void* TABLE_2_TAP_BICUBIC_FILTER_8 = NULL;

/* Exported Object: TABLE_2_TAP_BICUBIC_FILTER_4 */
extern "C" __attribute__((visibility("default"))) void* TABLE_2_TAP_BICUBIC_FILTER_4 = NULL;

/* Exported Object: TABLE_6_TAP_LCZ_FILTER */
extern "C" __attribute__((visibility("default"))) void* TABLE_6_TAP_LCZ_FILTER = NULL;

/* Exported Object: TABLE_4_TAP_LCZ_FILTER */
extern "C" __attribute__((visibility("default"))) void* TABLE_4_TAP_LCZ_FILTER = NULL;

/* Exported Object: TABLE_8_TAP_DCT_FILTER */
extern "C" __attribute__((visibility("default"))) void* TABLE_8_TAP_DCT_FILTER = NULL;

/* Exported Object: TABLE_4_TAP_DCT_FILTER_S16 */
extern "C" __attribute__((visibility("default"))) void* TABLE_4_TAP_DCT_FILTER_S16 = NULL;

/* Exported Object: TABLE_4_TAP_DCT_FILTER_U8 */
extern "C" __attribute__((visibility("default"))) void* TABLE_4_TAP_DCT_FILTER_U8 = NULL;

/* Exported Object: TABLE_8_TAP_DCT_FILTER_S16 */
extern "C" __attribute__((visibility("default"))) void* TABLE_8_TAP_DCT_FILTER_S16 = NULL;

/* Exported Object: TABLE_8_TAP_DCT_FILTER_U8 */
extern "C" __attribute__((visibility("default"))) void* TABLE_8_TAP_DCT_FILTER_U8 = NULL;

/* Exported Object: TABLE_PART_IDX_TO_OFFSET_CHROMA */
extern "C" __attribute__((visibility("default"))) void* TABLE_PART_IDX_TO_OFFSET_CHROMA = NULL;

/* Exported Object: TABLE_PART_IDX_TO_OFFSET_LUMA */
extern "C" __attribute__((visibility("default"))) void* TABLE_PART_IDX_TO_OFFSET_LUMA = NULL;

/* Exported Object: TABLE_PART_IDX_TO_BLK_CHROMA_XY */
extern "C" __attribute__((visibility("default"))) void* TABLE_PART_IDX_TO_BLK_CHROMA_XY = NULL;

/* Exported Object: TABLE_PART_IDX_TO_BLK_XY */
extern "C" __attribute__((visibility("default"))) void* TABLE_PART_IDX_TO_BLK_XY = NULL;

/* Exported Object: TABLE_BLK_XY_TO_PART_IDX */
extern "C" __attribute__((visibility("default"))) void* TABLE_BLK_XY_TO_PART_IDX = NULL;

/* Exported Object: TABLE_ATOMIC_Z_SCAN */
extern "C" __attribute__((visibility("default"))) void* TABLE_ATOMIC_Z_SCAN = NULL;

/* Exported Object: TABLE_PART_TYPE_TO_1ST_PU_TYPE */
extern "C" __attribute__((visibility("default"))) void* TABLE_PART_TYPE_TO_1ST_PU_TYPE = NULL;

/* Exported Object: TABLE_PART_NUMBER */
extern "C" __attribute__((visibility("default"))) void* TABLE_PART_NUMBER = NULL;

/* Exported Object: TABLE_COMBINED_MERGE_CAND */
extern "C" __attribute__((visibility("default"))) void* TABLE_COMBINED_MERGE_CAND = NULL;

/* Exported Object: TABLE_PU_PART_OFFSET */
extern "C" __attribute__((visibility("default"))) void* TABLE_PU_PART_OFFSET = NULL;

/* Exported Object: TABLE_PU_SIZE_SUM */
extern "C" __attribute__((visibility("default"))) void* TABLE_PU_SIZE_SUM = NULL;

/* Exported Object: TABLE_PU_SIZE */
extern "C" __attribute__((visibility("default"))) void* TABLE_PU_SIZE = NULL;

/* Exported Object: TABLE_INV_INTRA_PRED_ANGLE */
extern "C" __attribute__((visibility("default"))) void* TABLE_INV_INTRA_PRED_ANGLE = NULL;

/* Exported Object: TABLE_INTRA_PRED_ANGLE */
extern "C" __attribute__((visibility("default"))) void* TABLE_INTRA_PRED_ANGLE = NULL;

/* Exported Object: TABLE_QP_CHROMA_INDEX_MAP */
extern "C" __attribute__((visibility("default"))) void* TABLE_QP_CHROMA_INDEX_MAP = NULL;

/* Exported Object: TABLE_QP_DIV_6 */
extern "C" __attribute__((visibility("default"))) void* TABLE_QP_DIV_6 = NULL;

/* Exported Object: TABLE_QP_LEVEL_SCALE */
extern "C" __attribute__((visibility("default"))) void* TABLE_QP_LEVEL_SCALE = NULL;

/* Exported Object: TABLE_IQP_LEVEL_SCALE */
extern "C" __attribute__((visibility("default"))) void* TABLE_IQP_LEVEL_SCALE = NULL;

/* Exported Object: TABLE_SCAN_TYPE */
extern "C" __attribute__((visibility("default"))) void* TABLE_SCAN_TYPE = NULL;

/* Exported Object: TABLE_PART_MODE_INTER */
extern "C" __attribute__((visibility("default"))) void* TABLE_PART_MODE_INTER = NULL;

/* Demangled: _HEVCdec_1C18F7501E6AB05E5BB66DAA5BD24B4FE957E3E987C87EBD71D6DFF150E8FFB5 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_1C18F7501E6AB05E5BB66DAA5BD24B4FE957E3E987C87EBD71D6DFF150E8FFB5(void) {
    ALOGD("_HEVCdec_1C18F7501E6AB05E5BB66DAA5BD24B4FE957E3E987C87EBD71D6DFF150E8FFB5() called");
    return 0;
}

/* Demangled: _HEVCdec_53FD92545334DF467970CA34CADDD116DB243E965609C05C6FC49550761FA68C */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_53FD92545334DF467970CA34CADDD116DB243E965609C05C6FC49550761FA68C(void) {
    ALOGD("_HEVCdec_53FD92545334DF467970CA34CADDD116DB243E965609C05C6FC49550761FA68C() called");
    return 0;
}

/* Demangled: _HEVCdec_A83171E38119CE735B8B8540E24B5C474CA4070719EEE07D33BE3E3403F8ACB9 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_A83171E38119CE735B8B8540E24B5C474CA4070719EEE07D33BE3E3403F8ACB9(void) {
    ALOGD("_HEVCdec_A83171E38119CE735B8B8540E24B5C474CA4070719EEE07D33BE3E3403F8ACB9() called");
    return 0;
}

/* Demangled: _HEVCdec_8F2EF43ABCBF41506BC0577F91B7D01B9DC2DB4C4C08936C54462868876FC609 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_8F2EF43ABCBF41506BC0577F91B7D01B9DC2DB4C4C08936C54462868876FC609(void) {
    ALOGD("_HEVCdec_8F2EF43ABCBF41506BC0577F91B7D01B9DC2DB4C4C08936C54462868876FC609() called");
    return 0;
}

/* Demangled: _HEVCdec_A83171E38119CE735B8B8540E24B5C4767B9881C135F54F87B83EFCE24C95277 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_A83171E38119CE735B8B8540E24B5C4767B9881C135F54F87B83EFCE24C95277(void) {
    ALOGD("_HEVCdec_A83171E38119CE735B8B8540E24B5C4767B9881C135F54F87B83EFCE24C95277() called");
    return 0;
}

/* Demangled: _HEVCdec_DFD79C1E4CC45F8E3E33B35B06C786087787D35258FBEB7583C8226FC7D0C5B2 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_DFD79C1E4CC45F8E3E33B35B06C786087787D35258FBEB7583C8226FC7D0C5B2(void) {
    ALOGD("_HEVCdec_DFD79C1E4CC45F8E3E33B35B06C786087787D35258FBEB7583C8226FC7D0C5B2() called");
    return 0;
}

/* Demangled: _HEVCdec_A83171E38119CE735B8B8540E24B5C4746F9ECB8092C99020C19DE7D3438FDEA */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_A83171E38119CE735B8B8540E24B5C4746F9ECB8092C99020C19DE7D3438FDEA(void) {
    ALOGD("_HEVCdec_A83171E38119CE735B8B8540E24B5C4746F9ECB8092C99020C19DE7D3438FDEA() called");
    return 0;
}

/* Demangled: _HEVCdec_17B435B387BC667E9DBCE3CB4631152B */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_17B435B387BC667E9DBCE3CB4631152B(void) {
    ALOGD("_HEVCdec_17B435B387BC667E9DBCE3CB4631152B() called");
    return 0;
}

/* Demangled: _HEVCdec_26A4CFBBF56600B283198D6F82C0157027C7A6479A458BD5E32C67EA70DC46C3 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_26A4CFBBF56600B283198D6F82C0157027C7A6479A458BD5E32C67EA70DC46C3(void) {
    ALOGD("_HEVCdec_26A4CFBBF56600B283198D6F82C0157027C7A6479A458BD5E32C67EA70DC46C3() called");
    return 0;
}

/* Demangled: _HEVCdec_45380E6F237C12FD1F72321FA404ADF6AEB54F7A3B1165B731C09755D01589F4F967E88E421102852273BFCC2CBCD1BD */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_45380E6F237C12FD1F72321FA404ADF6AEB54F7A3B1165B731C09755D01589F4F967E88E421102852273BFCC2CBCD1BD(void) {
    ALOGD("_HEVCdec_45380E6F237C12FD1F72321FA404ADF6AEB54F7A3B1165B731C09755D01589F4F967E88E421102852273BFCC2CBCD1BD() called");
    return 0;
}

/* Demangled: _HEVCdec_45380E6F237C12FD1F72321FA404ADF6AEB54F7A3B1165B731C09755D01589F40BF6D8FD336ACFDC4FE0F0BD5DBABBA2 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_45380E6F237C12FD1F72321FA404ADF6AEB54F7A3B1165B731C09755D01589F40BF6D8FD336ACFDC4FE0F0BD5DBABBA2(void) {
    ALOGD("_HEVCdec_45380E6F237C12FD1F72321FA404ADF6AEB54F7A3B1165B731C09755D01589F40BF6D8FD336ACFDC4FE0F0BD5DBABBA2() called");
    return 0;
}

/* Demangled: _HEVCdec_ED062625CD181DCFF81A49323259A382DDDB7833CE2A0EA73F283536BB48A2DA */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_ED062625CD181DCFF81A49323259A382DDDB7833CE2A0EA73F283536BB48A2DA(void) {
    ALOGD("_HEVCdec_ED062625CD181DCFF81A49323259A382DDDB7833CE2A0EA73F283536BB48A2DA() called");
    return 0;
}

/* Demangled: _HEVCdec_1FDB1C9A9A6D74A80A0C25D54F3746C959FEA9960B48D4F4E90543BFDBB605EF */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_1FDB1C9A9A6D74A80A0C25D54F3746C959FEA9960B48D4F4E90543BFDBB605EF(void) {
    ALOGD("_HEVCdec_1FDB1C9A9A6D74A80A0C25D54F3746C959FEA9960B48D4F4E90543BFDBB605EF() called");
    return 0;
}

/* Demangled: _HEVCdec_07FE298F124AD1347E185CE5FD6C4DAC102B4FA5665C8DD2BD3D4CADA89EBB4B */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_07FE298F124AD1347E185CE5FD6C4DAC102B4FA5665C8DD2BD3D4CADA89EBB4B(void) {
    ALOGD("_HEVCdec_07FE298F124AD1347E185CE5FD6C4DAC102B4FA5665C8DD2BD3D4CADA89EBB4B() called");
    return 0;
}

/* Demangled: hevc_common_destroy */
extern "C" __attribute__((visibility("default"))) int hevc_common_destroy(void) {
    ALOGD("hevc_common_destroy() called");
    return 0;
}

/* Demangled: _HEVCdec_0138E8117C056F819087087C4570EB641BE957F7BFD4F7B93F5D971EBEE6A9FA */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_0138E8117C056F819087087C4570EB641BE957F7BFD4F7B93F5D971EBEE6A9FA(void) {
    ALOGD("_HEVCdec_0138E8117C056F819087087C4570EB641BE957F7BFD4F7B93F5D971EBEE6A9FA() called");
    return 0;
}

/* Demangled: _HEVCdec_90DDA2436E4551E106AF0D9381AFE61A1BE957F7BFD4F7B93F5D971EBEE6A9FA */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_90DDA2436E4551E106AF0D9381AFE61A1BE957F7BFD4F7B93F5D971EBEE6A9FA(void) {
    ALOGD("_HEVCdec_90DDA2436E4551E106AF0D9381AFE61A1BE957F7BFD4F7B93F5D971EBEE6A9FA() called");
    return 0;
}

/* Demangled: _HEVCdec_239CB8FDEE4C3B1063E53A0412E45ABD9AE76917D852ABF6F66BA8A5ABF4F64E */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_239CB8FDEE4C3B1063E53A0412E45ABD9AE76917D852ABF6F66BA8A5ABF4F64E(void) {
    ALOGD("_HEVCdec_239CB8FDEE4C3B1063E53A0412E45ABD9AE76917D852ABF6F66BA8A5ABF4F64E() called");
    return 0;
}

/* Demangled: _HEVCdec_5328E44803B60007010B00531A70A2190EA14065D8964C0841EF151B33472368 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_5328E44803B60007010B00531A70A2190EA14065D8964C0841EF151B33472368(void) {
    ALOGD("_HEVCdec_5328E44803B60007010B00531A70A2190EA14065D8964C0841EF151B33472368() called");
    return 0;
}

/* Demangled: _HEVCdec_CD07E811EBA584221257C90A969ADF01DF98D81C89DE8CDAB4CBD65241191B8E6DB619DF5FDA6B034770EE712B076747 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_CD07E811EBA584221257C90A969ADF01DF98D81C89DE8CDAB4CBD65241191B8E6DB619DF5FDA6B034770EE712B076747(void) {
    ALOGD("_HEVCdec_CD07E811EBA584221257C90A969ADF01DF98D81C89DE8CDAB4CBD65241191B8E6DB619DF5FDA6B034770EE712B076747() called");
    return 0;
}

/* Demangled: _HEVCdec_701E7AF45A1B29C8D290B3C9A5DB026842AED351670F42A001EB8DE7992CF180 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_701E7AF45A1B29C8D290B3C9A5DB026842AED351670F42A001EB8DE7992CF180(void) {
    ALOGD("_HEVCdec_701E7AF45A1B29C8D290B3C9A5DB026842AED351670F42A001EB8DE7992CF180() called");
    return 0;
}

/* Demangled: _HEVCdec_25A3A5F2ADE82F7EA724CF0DEB5BDF610640CE41A4C656BD9EEC03FC46504749 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_25A3A5F2ADE82F7EA724CF0DEB5BDF610640CE41A4C656BD9EEC03FC46504749(void) {
    ALOGD("_HEVCdec_25A3A5F2ADE82F7EA724CF0DEB5BDF610640CE41A4C656BD9EEC03FC46504749() called");
    return 0;
}

/* Demangled: _HEVCdec_0EC0D3991245A46F36CB09684AF6B397C0A1ED852A514BD00427E71CA6B6BA63 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_0EC0D3991245A46F36CB09684AF6B397C0A1ED852A514BD00427E71CA6B6BA63(void) {
    ALOGD("_HEVCdec_0EC0D3991245A46F36CB09684AF6B397C0A1ED852A514BD00427E71CA6B6BA63() called");
    return 0;
}

/* Demangled: _HEVCdec_0EC0D3991245A46F36CB09684AF6B3975278D8EC501ECF124AAD5EB748CCDA6F */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_0EC0D3991245A46F36CB09684AF6B3975278D8EC501ECF124AAD5EB748CCDA6F(void) {
    ALOGD("_HEVCdec_0EC0D3991245A46F36CB09684AF6B3975278D8EC501ECF124AAD5EB748CCDA6F() called");
    return 0;
}

/* Demangled: _HEVCdec_B91C8C2B0DC679649033433A652B9D04739B0607000A98E4B31035B55E5DC3C4 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_B91C8C2B0DC679649033433A652B9D04739B0607000A98E4B31035B55E5DC3C4(void) {
    ALOGD("_HEVCdec_B91C8C2B0DC679649033433A652B9D04739B0607000A98E4B31035B55E5DC3C4() called");
    return 0;
}

/* Demangled: _HEVCdec_B91C8C2B0DC679649033433A652B9D04EAC43E174FD97DDFBA0C667B6DBF59FD */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_B91C8C2B0DC679649033433A652B9D04EAC43E174FD97DDFBA0C667B6DBF59FD(void) {
    ALOGD("_HEVCdec_B91C8C2B0DC679649033433A652B9D04EAC43E174FD97DDFBA0C667B6DBF59FD() called");
    return 0;
}

/* Demangled: _HEVCdec_E2F470C97A324E3F126243BDA0CD0989D9E55622F33687F797100BB40256A9DF */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_E2F470C97A324E3F126243BDA0CD0989D9E55622F33687F797100BB40256A9DF(void) {
    ALOGD("_HEVCdec_E2F470C97A324E3F126243BDA0CD0989D9E55622F33687F797100BB40256A9DF() called");
    return 0;
}

/* Demangled: _HEVCdec_67C0071DBBDA898E03DD35A14CA57DE5A9F6F407FF7DC67C954282D5CE6A63AE */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_67C0071DBBDA898E03DD35A14CA57DE5A9F6F407FF7DC67C954282D5CE6A63AE(void) {
    ALOGD("_HEVCdec_67C0071DBBDA898E03DD35A14CA57DE5A9F6F407FF7DC67C954282D5CE6A63AE() called");
    return 0;
}

/* Demangled: _HEVCdec_D4AE0E56D3A9DA9F63D8DDCE3FC0D884EFA7EB21C1DA2AF7C6A95E67C0DAC6B4 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_D4AE0E56D3A9DA9F63D8DDCE3FC0D884EFA7EB21C1DA2AF7C6A95E67C0DAC6B4(void) {
    ALOGD("_HEVCdec_D4AE0E56D3A9DA9F63D8DDCE3FC0D884EFA7EB21C1DA2AF7C6A95E67C0DAC6B4() called");
    return 0;
}

/* Demangled: _HEVCdec_AC2CAB8CEB8C4C04436889925212E6699EDB6DD81291E7A4A3189F6908ABBF17 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_AC2CAB8CEB8C4C04436889925212E6699EDB6DD81291E7A4A3189F6908ABBF17(void) {
    ALOGD("_HEVCdec_AC2CAB8CEB8C4C04436889925212E6699EDB6DD81291E7A4A3189F6908ABBF17() called");
    return 0;
}

/* Demangled: _HEVCdec_224D274DDB982B873F22EE91166B41A8AFBFED248D78AF139638855EB8ACD226 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_224D274DDB982B873F22EE91166B41A8AFBFED248D78AF139638855EB8ACD226(void) {
    ALOGD("_HEVCdec_224D274DDB982B873F22EE91166B41A8AFBFED248D78AF139638855EB8ACD226() called");
    return 0;
}

/* Demangled: _HEVCdec_4A5E0A6513E93570D80147773865314EEFA7EB21C1DA2AF7C6A95E67C0DAC6B4 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_4A5E0A6513E93570D80147773865314EEFA7EB21C1DA2AF7C6A95E67C0DAC6B4(void) {
    ALOGD("_HEVCdec_4A5E0A6513E93570D80147773865314EEFA7EB21C1DA2AF7C6A95E67C0DAC6B4() called");
    return 0;
}

/* Demangled: _HEVCdec_76F1F5AF9514A43BF33AB1A671EFC858FB2FC4F5AD49774678BE2A5BECF8A581 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_76F1F5AF9514A43BF33AB1A671EFC858FB2FC4F5AD49774678BE2A5BECF8A581(void) {
    ALOGD("_HEVCdec_76F1F5AF9514A43BF33AB1A671EFC858FB2FC4F5AD49774678BE2A5BECF8A581() called");
    return 0;
}

/* Demangled: _HEVCdec_58A0369B3F9ECD5EE84BD838EC3CAB2839F12AB847706E25B741E1950BDEEF74 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_58A0369B3F9ECD5EE84BD838EC3CAB2839F12AB847706E25B741E1950BDEEF74(void) {
    ALOGD("_HEVCdec_58A0369B3F9ECD5EE84BD838EC3CAB2839F12AB847706E25B741E1950BDEEF74() called");
    return 0;
}

/* Demangled: _HEVCdec_FE201DAA3FA6B5B50BE67917B17973571B59BABDD1BA25CD3EAD91782B54C452 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_FE201DAA3FA6B5B50BE67917B17973571B59BABDD1BA25CD3EAD91782B54C452(void) {
    ALOGD("_HEVCdec_FE201DAA3FA6B5B50BE67917B17973571B59BABDD1BA25CD3EAD91782B54C452() called");
    return 0;
}

/* Demangled: _HEVCdec_8DF8ADB007731DDAE6661D7270132A3004D7D869EB5A962889C13BE0FC4DD145 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_8DF8ADB007731DDAE6661D7270132A3004D7D869EB5A962889C13BE0FC4DD145(void) {
    ALOGD("_HEVCdec_8DF8ADB007731DDAE6661D7270132A3004D7D869EB5A962889C13BE0FC4DD145() called");
    return 0;
}

/* Demangled: _HEVCdec_AEBD0D97673D1DA07914ECB94A4DFA91884341425FA7C85C5407043E14318713 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_AEBD0D97673D1DA07914ECB94A4DFA91884341425FA7C85C5407043E14318713(void) {
    ALOGD("_HEVCdec_AEBD0D97673D1DA07914ECB94A4DFA91884341425FA7C85C5407043E14318713() called");
    return 0;
}

/* Demangled: _HEVCdec_7491ADE07907DCD639D32656B7CD5514764D96F79ED933CE088BD6A134BE975FC799C28DD17B67E05764E86EB2E8EB8F */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_7491ADE07907DCD639D32656B7CD5514764D96F79ED933CE088BD6A134BE975FC799C28DD17B67E05764E86EB2E8EB8F(void) {
    ALOGD("_HEVCdec_7491ADE07907DCD639D32656B7CD5514764D96F79ED933CE088BD6A134BE975FC799C28DD17B67E05764E86EB2E8EB8F() called");
    return 0;
}

/* Demangled: _HEVCdec_20F3A342BC14F673C4F84030F376F6A420FE929FA8D022EA71965BB8A758F479 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_20F3A342BC14F673C4F84030F376F6A420FE929FA8D022EA71965BB8A758F479(void) {
    ALOGD("_HEVCdec_20F3A342BC14F673C4F84030F376F6A420FE929FA8D022EA71965BB8A758F479() called");
    return 0;
}

/* Demangled: _HEVCdec_3D6CEB680E93D59C60FF9E579F1CC9670CB90ABFC1A1848405E54154B175AB6A */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_3D6CEB680E93D59C60FF9E579F1CC9670CB90ABFC1A1848405E54154B175AB6A(void) {
    ALOGD("_HEVCdec_3D6CEB680E93D59C60FF9E579F1CC9670CB90ABFC1A1848405E54154B175AB6A() called");
    return 0;
}

/* Demangled: _HEVCdec_6EF5EF4D5877DD59433A85C3FB1704B2EFF936CFA90037D17AADACC815FBC4E8 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_6EF5EF4D5877DD59433A85C3FB1704B2EFF936CFA90037D17AADACC815FBC4E8(void) {
    ALOGD("_HEVCdec_6EF5EF4D5877DD59433A85C3FB1704B2EFF936CFA90037D17AADACC815FBC4E8() called");
    return 0;
}

/* Demangled: _HEVCdec_D140F335172FDC7BAEE1D7A19E4C949A4AD3C0C3D4632B69404E1E771D45C66B */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_D140F335172FDC7BAEE1D7A19E4C949A4AD3C0C3D4632B69404E1E771D45C66B(void) {
    ALOGD("_HEVCdec_D140F335172FDC7BAEE1D7A19E4C949A4AD3C0C3D4632B69404E1E771D45C66B() called");
    return 0;
}

/* Demangled: _HEVCdec_8341AB34591389F512546B893F84094BDC9F3FF8EFD6E2889F0CA9F72C0D1CCC */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_8341AB34591389F512546B893F84094BDC9F3FF8EFD6E2889F0CA9F72C0D1CCC(void) {
    ALOGD("_HEVCdec_8341AB34591389F512546B893F84094BDC9F3FF8EFD6E2889F0CA9F72C0D1CCC() called");
    return 0;
}

/* Demangled: _HEVCdec_A0E624A062D8870EF590355376C4882C */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_A0E624A062D8870EF590355376C4882C(void) {
    ALOGD("_HEVCdec_A0E624A062D8870EF590355376C4882C() called");
    return 0;
}

/* Demangled: _HEVCdec_87FD30325ACD0F8416FEFDA1F1BBC484FF89AFFD06E9C64D23631305730451FD578D22C1070FD8B04411671E964EA54E */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_87FD30325ACD0F8416FEFDA1F1BBC484FF89AFFD06E9C64D23631305730451FD578D22C1070FD8B04411671E964EA54E(void) {
    ALOGD("_HEVCdec_87FD30325ACD0F8416FEFDA1F1BBC484FF89AFFD06E9C64D23631305730451FD578D22C1070FD8B04411671E964EA54E() called");
    return 0;
}

/* Demangled: _HEVCdec_528AD8F5B1E96B6D01503CD1FB91934105DB3394F96D449B32312D5B0A85858C */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_528AD8F5B1E96B6D01503CD1FB91934105DB3394F96D449B32312D5B0A85858C(void) {
    ALOGD("_HEVCdec_528AD8F5B1E96B6D01503CD1FB91934105DB3394F96D449B32312D5B0A85858C() called");
    return 0;
}

/* Demangled: _HEVCdec_A8BCEEEF0FCF6BFD978977571CEDDED01516EC512DCA3C572133613A084CA564 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_A8BCEEEF0FCF6BFD978977571CEDDED01516EC512DCA3C572133613A084CA564(void) {
    ALOGD("_HEVCdec_A8BCEEEF0FCF6BFD978977571CEDDED01516EC512DCA3C572133613A084CA564() called");
    return 0;
}

/* Demangled: _HEVCdec_D0967F061D4730C65AAEAB86D27C0CEF05D449C412F5A87871A08403154EF44B */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_D0967F061D4730C65AAEAB86D27C0CEF05D449C412F5A87871A08403154EF44B(void) {
    ALOGD("_HEVCdec_D0967F061D4730C65AAEAB86D27C0CEF05D449C412F5A87871A08403154EF44B() called");
    return 0;
}

/* Demangled: _HEVCdec_008E4D80169BB2FD92427E279965451A26509975E7FCC8E1F91171C9EE01E5310CF6CD409EEF9843EBD244B90457EE9B */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_008E4D80169BB2FD92427E279965451A26509975E7FCC8E1F91171C9EE01E5310CF6CD409EEF9843EBD244B90457EE9B(void) {
    ALOGD("_HEVCdec_008E4D80169BB2FD92427E279965451A26509975E7FCC8E1F91171C9EE01E5310CF6CD409EEF9843EBD244B90457EE9B() called");
    return 0;
}

/* Demangled: _HEVCdec_346195B0B81472512DCF888D3E18C8D9A7762D8D0EEA86F5E288F201F2912EBE */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_346195B0B81472512DCF888D3E18C8D9A7762D8D0EEA86F5E288F201F2912EBE(void) {
    ALOGD("_HEVCdec_346195B0B81472512DCF888D3E18C8D9A7762D8D0EEA86F5E288F201F2912EBE() called");
    return 0;
}

/* Demangled: _HEVCdec_31237AECD600AC3096CDC677630DEE9CA84CAE8732F5880DB7CCE754DB2D7972 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_31237AECD600AC3096CDC677630DEE9CA84CAE8732F5880DB7CCE754DB2D7972(void) {
    ALOGD("_HEVCdec_31237AECD600AC3096CDC677630DEE9CA84CAE8732F5880DB7CCE754DB2D7972() called");
    return 0;
}

/* Demangled: _HEVCdec_CEFB4C999D344AA24200DD899CAF73FEC84C693735C0562C5B7861C896E61F78 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_CEFB4C999D344AA24200DD899CAF73FEC84C693735C0562C5B7861C896E61F78(void) {
    ALOGD("_HEVCdec_CEFB4C999D344AA24200DD899CAF73FEC84C693735C0562C5B7861C896E61F78() called");
    return 0;
}

/* Demangled: _HEVCdec_CFC64209835521688DA089309EBBA45F */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_CFC64209835521688DA089309EBBA45F(void) {
    ALOGD("_HEVCdec_CFC64209835521688DA089309EBBA45F() called");
    return 0;
}

/* Demangled: _HEVCdec_6D6FF2C9B5BC9822A60293BC88A8AA26 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_6D6FF2C9B5BC9822A60293BC88A8AA26(void) {
    ALOGD("_HEVCdec_6D6FF2C9B5BC9822A60293BC88A8AA26() called");
    return 0;
}

/* Demangled: _HEVCdec_E9C8826B9EAA091024D71024ECA1A0E28C477BE179F164EE5FEACE049CB31355 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_E9C8826B9EAA091024D71024ECA1A0E28C477BE179F164EE5FEACE049CB31355(void) {
    ALOGD("_HEVCdec_E9C8826B9EAA091024D71024ECA1A0E28C477BE179F164EE5FEACE049CB31355() called");
    return 0;
}

/* Demangled: _HEVCdec_E9C8826B9EAA091024D71024ECA1A0E258497E78BCAB07F726FD198E1AF846DB */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_E9C8826B9EAA091024D71024ECA1A0E258497E78BCAB07F726FD198E1AF846DB(void) {
    ALOGD("_HEVCdec_E9C8826B9EAA091024D71024ECA1A0E258497E78BCAB07F726FD198E1AF846DB() called");
    return 0;
}

/* Demangled: _HEVCdec_668CF3709F5655DF2DEBEC0FC2701E71A78D7B0E03EB818159B1B1191BC6CBF7 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_668CF3709F5655DF2DEBEC0FC2701E71A78D7B0E03EB818159B1B1191BC6CBF7(void) {
    ALOGD("_HEVCdec_668CF3709F5655DF2DEBEC0FC2701E71A78D7B0E03EB818159B1B1191BC6CBF7() called");
    return 0;
}

/* Demangled: _HEVCdec_72BB8EC836A669CFD5E9D6A89299386DEF72ECBDB07349487CADBB836B3D7CFA */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_72BB8EC836A669CFD5E9D6A89299386DEF72ECBDB07349487CADBB836B3D7CFA(void) {
    ALOGD("_HEVCdec_72BB8EC836A669CFD5E9D6A89299386DEF72ECBDB07349487CADBB836B3D7CFA() called");
    return 0;
}

/* Demangled: _HEVCdec_CC889AF6DE93BC1469F6E255F1AB95B7E740621CDB6ED05685347BC5AFB52F111D35084D42F88ADC13A10FE9792C8F35 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_CC889AF6DE93BC1469F6E255F1AB95B7E740621CDB6ED05685347BC5AFB52F111D35084D42F88ADC13A10FE9792C8F35(void) {
    ALOGD("_HEVCdec_CC889AF6DE93BC1469F6E255F1AB95B7E740621CDB6ED05685347BC5AFB52F111D35084D42F88ADC13A10FE9792C8F35() called");
    return 0;
}

/* Demangled: _HEVCdec_F58A30C992E5D3834AE61FD592A4E17286504D2AE8B61D45BFB1C383D1ADC8FC */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_F58A30C992E5D3834AE61FD592A4E17286504D2AE8B61D45BFB1C383D1ADC8FC(void) {
    ALOGD("_HEVCdec_F58A30C992E5D3834AE61FD592A4E17286504D2AE8B61D45BFB1C383D1ADC8FC() called");
    return 0;
}

/* Demangled: _HEVCdec_A50B923EA1095142A8A43E3AF50DC487 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_A50B923EA1095142A8A43E3AF50DC487(void) {
    ALOGD("_HEVCdec_A50B923EA1095142A8A43E3AF50DC487() called");
    return 0;
}

/* Demangled: _HEVCdec_26D47E66F505263EBE77AE3AE09A73C7937C8977C740BDF75BE579120615EA46 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_26D47E66F505263EBE77AE3AE09A73C7937C8977C740BDF75BE579120615EA46(void) {
    ALOGD("_HEVCdec_26D47E66F505263EBE77AE3AE09A73C7937C8977C740BDF75BE579120615EA46() called");
    return 0;
}

/* Demangled: _HEVCdec_E1044FF15148DA3E150AFA882D49A68996713B31E457345BEEB72FA8611051BB */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_E1044FF15148DA3E150AFA882D49A68996713B31E457345BEEB72FA8611051BB(void) {
    ALOGD("_HEVCdec_E1044FF15148DA3E150AFA882D49A68996713B31E457345BEEB72FA8611051BB() called");
    return 0;
}

/* Demangled: _HEVCdec_5A761349B8407B65ADFF8BC24C369183 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_5A761349B8407B65ADFF8BC24C369183(void) {
    ALOGD("_HEVCdec_5A761349B8407B65ADFF8BC24C369183() called");
    return 0;
}

/* Demangled: _HEVCdec_E71D96879679997158306F1023775ED235ADA8ABE4A349FE7BDC21BA7F23E599 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_E71D96879679997158306F1023775ED235ADA8ABE4A349FE7BDC21BA7F23E599(void) {
    ALOGD("_HEVCdec_E71D96879679997158306F1023775ED235ADA8ABE4A349FE7BDC21BA7F23E599() called");
    return 0;
}

/* Demangled: _HEVCdec_F414942871DD545364410D06A3BE1CEC */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_F414942871DD545364410D06A3BE1CEC(void) {
    ALOGD("_HEVCdec_F414942871DD545364410D06A3BE1CEC() called");
    return 0;
}

/* Demangled: _HEVCdec_61DCC63D4EE8549E3BEDE3EC0FB7CACDC5CF2955D2279D270E6C6A2A72AEECB6 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_61DCC63D4EE8549E3BEDE3EC0FB7CACDC5CF2955D2279D270E6C6A2A72AEECB6(void) {
    ALOGD("_HEVCdec_61DCC63D4EE8549E3BEDE3EC0FB7CACDC5CF2955D2279D270E6C6A2A72AEECB6() called");
    return 0;
}

/* Demangled: _HEVCdec_9F8BE84D1EF27CF39E5E96D7AE691181 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_9F8BE84D1EF27CF39E5E96D7AE691181(void) {
    ALOGD("_HEVCdec_9F8BE84D1EF27CF39E5E96D7AE691181() called");
    return 0;
}

/* Demangled: _HEVCdec_6A03BC4BB0599D46507FE7C3B55593CF */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_6A03BC4BB0599D46507FE7C3B55593CF(void) {
    ALOGD("_HEVCdec_6A03BC4BB0599D46507FE7C3B55593CF() called");
    return 0;
}

/* Demangled: _HEVCdec_A1B0076EF8B595E710B804CAF961A886 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_A1B0076EF8B595E710B804CAF961A886(void) {
    ALOGD("_HEVCdec_A1B0076EF8B595E710B804CAF961A886() called");
    return 0;
}

/* Demangled: _HEVCdec_9BE731DCAF1792AC1561425282D34C6C4121C5905D397851FCF9A8F6E4EDA85F2140EC6092AB040A0077EAD8ECC15B31 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_9BE731DCAF1792AC1561425282D34C6C4121C5905D397851FCF9A8F6E4EDA85F2140EC6092AB040A0077EAD8ECC15B31(void) {
    ALOGD("_HEVCdec_9BE731DCAF1792AC1561425282D34C6C4121C5905D397851FCF9A8F6E4EDA85F2140EC6092AB040A0077EAD8ECC15B31() called");
    return 0;
}

/* Demangled: _HEVCdec_D67EEA504E9EC942B1A9FBF3BBE30B7797F9691C26529EA521E172288A6E2642 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_D67EEA504E9EC942B1A9FBF3BBE30B7797F9691C26529EA521E172288A6E2642(void) {
    ALOGD("_HEVCdec_D67EEA504E9EC942B1A9FBF3BBE30B7797F9691C26529EA521E172288A6E2642() called");
    return 0;
}

/* Demangled: _HEVCdec_325F76ABFBDF27F1699BCD0ECC86F411451E969077501734E81F7B22340FFE759DC2DB4C4C08936C54462868876FC609 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_325F76ABFBDF27F1699BCD0ECC86F411451E969077501734E81F7B22340FFE759DC2DB4C4C08936C54462868876FC609(void) {
    ALOGD("_HEVCdec_325F76ABFBDF27F1699BCD0ECC86F411451E969077501734E81F7B22340FFE759DC2DB4C4C08936C54462868876FC609() called");
    return 0;
}

/* Demangled: _HEVCdec_D25A504697B372B1E8AF835F60EC8DE81AF1EF29EC349BB4FE3A883CA7356133 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_D25A504697B372B1E8AF835F60EC8DE81AF1EF29EC349BB4FE3A883CA7356133(void) {
    ALOGD("_HEVCdec_D25A504697B372B1E8AF835F60EC8DE81AF1EF29EC349BB4FE3A883CA7356133() called");
    return 0;
}

/* Demangled: _HEVCdec_DA17B75095182981E28D845C07E34442 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_DA17B75095182981E28D845C07E34442(void) {
    ALOGD("_HEVCdec_DA17B75095182981E28D845C07E34442() called");
    return 0;
}

/* Demangled: _HEVCdec_E423655D943DD8C35812FD18937C79A25798D43BF75ACDD7E5B3FA94A47C04AD */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_E423655D943DD8C35812FD18937C79A25798D43BF75ACDD7E5B3FA94A47C04AD(void) {
    ALOGD("_HEVCdec_E423655D943DD8C35812FD18937C79A25798D43BF75ACDD7E5B3FA94A47C04AD() called");
    return 0;
}

/* Demangled: _HEVCdec_4FBC8535D549BE7739A303F37072777FF967E88E421102852273BFCC2CBCD1BD */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_4FBC8535D549BE7739A303F37072777FF967E88E421102852273BFCC2CBCD1BD(void) {
    ALOGD("_HEVCdec_4FBC8535D549BE7739A303F37072777FF967E88E421102852273BFCC2CBCD1BD() called");
    return 0;
}

/* Demangled: _HEVCdec_6748736E63BA3D69F33E52F59633C050EDDE5E94D5A774D17751EE1E6D6D7BBC */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_6748736E63BA3D69F33E52F59633C050EDDE5E94D5A774D17751EE1E6D6D7BBC(void) {
    ALOGD("_HEVCdec_6748736E63BA3D69F33E52F59633C050EDDE5E94D5A774D17751EE1E6D6D7BBC() called");
    return 0;
}

/* Demangled: _HEVCdec_D9EE9A3761013CA0CC65C3D613345690C97D4C2FDBFB5033BEB373B3309BCC5C */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_D9EE9A3761013CA0CC65C3D613345690C97D4C2FDBFB5033BEB373B3309BCC5C(void) {
    ALOGD("_HEVCdec_D9EE9A3761013CA0CC65C3D613345690C97D4C2FDBFB5033BEB373B3309BCC5C() called");
    return 0;
}

/* Demangled: hevcd_decode_partition_row */
extern "C" __attribute__((visibility("default"))) int hevcd_decode_partition_row(void) {
    ALOGD("hevcd_decode_partition_row() called");
    return 0;
}

/* Demangled: _HEVCdec_70498FB121A1FA5CFC56BC8FF2B3970F1516EC512DCA3C572133613A084CA564 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_70498FB121A1FA5CFC56BC8FF2B3970F1516EC512DCA3C572133613A084CA564(void) {
    ALOGD("_HEVCdec_70498FB121A1FA5CFC56BC8FF2B3970F1516EC512DCA3C572133613A084CA564() called");
    return 0;
}

/* Demangled: _HEVCdec_A8BCEEEF0FCF6BFD978977571CEDDED06D6581125DFA8FFD089F18C7AF4677A3 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_A8BCEEEF0FCF6BFD978977571CEDDED06D6581125DFA8FFD089F18C7AF4677A3(void) {
    ALOGD("_HEVCdec_A8BCEEEF0FCF6BFD978977571CEDDED06D6581125DFA8FFD089F18C7AF4677A3() called");
    return 0;
}

/* Demangled: _HEVCdec_AE1E74F7FE44907FB7E2F04BCD4E67B96D6581125DFA8FFD089F18C7AF4677A3 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_AE1E74F7FE44907FB7E2F04BCD4E67B96D6581125DFA8FFD089F18C7AF4677A3(void) {
    ALOGD("_HEVCdec_AE1E74F7FE44907FB7E2F04BCD4E67B96D6581125DFA8FFD089F18C7AF4677A3() called");
    return 0;
}

/* Demangled: _HEVCdec_589A82F5927A338289A4697BF787790C475AAAED5C575B98EA5FF9373ED9057D */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_589A82F5927A338289A4697BF787790C475AAAED5C575B98EA5FF9373ED9057D(void) {
    ALOGD("_HEVCdec_589A82F5927A338289A4697BF787790C475AAAED5C575B98EA5FF9373ED9057D() called");
    return 0;
}

/* Demangled: _HEVCdec_7E6973F4784A018D257AF20A70F2BCDD6AE190173C87C4ED7D05025922F1D053 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_7E6973F4784A018D257AF20A70F2BCDD6AE190173C87C4ED7D05025922F1D053(void) {
    ALOGD("_HEVCdec_7E6973F4784A018D257AF20A70F2BCDD6AE190173C87C4ED7D05025922F1D053() called");
    return 0;
}

/* Exported Object: cur_start_utime */
extern "C" __attribute__((visibility("default"))) void* cur_start_utime = NULL;

/* Exported Object: cur_thread_id */
extern "C" __attribute__((visibility("default"))) void* cur_thread_id = NULL;

/* Exported Object: callback_start_utime */
extern "C" __attribute__((visibility("default"))) void* callback_start_utime = NULL;

/* Exported Object: callback_end_utime */
extern "C" __attribute__((visibility("default"))) void* callback_end_utime = NULL;

/* Exported Object: cur_end_utime */
extern "C" __attribute__((visibility("default"))) void* cur_end_utime = NULL;

/* Demangled: hevcd_decode_partition_row_VLD */
extern "C" __attribute__((visibility("default"))) int hevcd_decode_partition_row_VLD(void) {
    ALOGD("hevcd_decode_partition_row_VLD() called");
    return 0;
}

/* Demangled: hevcd_decode_partition_row_REC */
extern "C" __attribute__((visibility("default"))) int hevcd_decode_partition_row_REC(void) {
    ALOGD("hevcd_decode_partition_row_REC() called");
    return 0;
}

/* Demangled: _HEVCdec_ECCEF173421F998F2500E9910EB3FD20AB492D8BDE9F642FDDA90AD6FC26ECEA */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_ECCEF173421F998F2500E9910EB3FD20AB492D8BDE9F642FDDA90AD6FC26ECEA(void) {
    ALOGD("_HEVCdec_ECCEF173421F998F2500E9910EB3FD20AB492D8BDE9F642FDDA90AD6FC26ECEA() called");
    return 0;
}

/* Demangled: hevcd_decode_start */
extern "C" __attribute__((visibility("default"))) int hevcd_decode_start(void) {
    ALOGD("hevcd_decode_start() called");
    return 0;
}

/* Demangled: _HEVCdec_A7970FC4F9ECDE5649B9F3D007D140B9F74A26F4CEE8649614D595FC012CED0C */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_A7970FC4F9ECDE5649B9F3D007D140B9F74A26F4CEE8649614D595FC012CED0C(void) {
    ALOGD("_HEVCdec_A7970FC4F9ECDE5649B9F3D007D140B9F74A26F4CEE8649614D595FC012CED0C() called");
    return 0;
}

/* Demangled: format_string */
extern "C" __attribute__((visibility("default"))) int format_string(void) {
    ALOGD("format_string() called");
    return 0;
}

/* Demangled: _HEVCdec_5E5B45FCFC8A4FB474ADD00851267BEDD6E7412B6AD3D67DFD084A87DEB1D8CB */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_5E5B45FCFC8A4FB474ADD00851267BEDD6E7412B6AD3D67DFD084A87DEB1D8CB(void) {
    ALOGD("_HEVCdec_5E5B45FCFC8A4FB474ADD00851267BEDD6E7412B6AD3D67DFD084A87DEB1D8CB() called");
    return 0;
}

/* Demangled: _HEVCdec_C9DC3B5DE2F672E90D7784E02CD9E501D8C26DDDF14FD41AC8EDF5329AEA844D */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_C9DC3B5DE2F672E90D7784E02CD9E501D8C26DDDF14FD41AC8EDF5329AEA844D(void) {
    ALOGD("_HEVCdec_C9DC3B5DE2F672E90D7784E02CD9E501D8C26DDDF14FD41AC8EDF5329AEA844D() called");
    return 0;
}

/* Demangled: _HEVCdec_0F044BC0F9ADDE506FE6BF73F182B72D */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_0F044BC0F9ADDE506FE6BF73F182B72D(void) {
    ALOGD("_HEVCdec_0F044BC0F9ADDE506FE6BF73F182B72D() called");
    return 0;
}

/* Demangled: _HEVCdec_B6F5F91B46436EB8146049D46AD149E62D2222EF989FBAC08EB3D77F5B52FF68 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_B6F5F91B46436EB8146049D46AD149E62D2222EF989FBAC08EB3D77F5B52FF68(void) {
    ALOGD("_HEVCdec_B6F5F91B46436EB8146049D46AD149E62D2222EF989FBAC08EB3D77F5B52FF68() called");
    return 0;
}

/* Demangled: streamd_read_svlc */
extern "C" __attribute__((visibility("default"))) int streamd_read_svlc(void) {
    ALOGD("streamd_read_svlc() called");
    return 0;
}

/* Demangled: _HEVCdec_D9F5A7D5912BFE2CB1F2D6EC4A7EC02B935B0883F9803C6CE1418BC459BF59B2 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_D9F5A7D5912BFE2CB1F2D6EC4A7EC02B935B0883F9803C6CE1418BC459BF59B2(void) {
    ALOGD("_HEVCdec_D9F5A7D5912BFE2CB1F2D6EC4A7EC02B935B0883F9803C6CE1418BC459BF59B2() called");
    return 0;
}

/* Demangled: _HEVCdec_EE9C65DD947B691CD5E2E0D0B0BB6150 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_EE9C65DD947B691CD5E2E0D0B0BB6150(void) {
    ALOGD("_HEVCdec_EE9C65DD947B691CD5E2E0D0B0BB6150() called");
    return 0;
}

/* Demangled: _HEVCdec_6B4AB1B0A965A28B3F4E0471EB31E9640CB8BD481CA833C956E5ED0C4B99AAB4 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_6B4AB1B0A965A28B3F4E0471EB31E9640CB8BD481CA833C956E5ED0C4B99AAB4(void) {
    ALOGD("_HEVCdec_6B4AB1B0A965A28B3F4E0471EB31E9640CB8BD481CA833C956E5ED0C4B99AAB4() called");
    return 0;
}

/* Demangled: _HEVCdec_416F973BA204728B10281AC89BD1D4B3935B0883F9803C6CE1418BC459BF59B2 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_416F973BA204728B10281AC89BD1D4B3935B0883F9803C6CE1418BC459BF59B2(void) {
    ALOGD("_HEVCdec_416F973BA204728B10281AC89BD1D4B3935B0883F9803C6CE1418BC459BF59B2() called");
    return 0;
}

/* Demangled: _HEVCdec_179E9802FC6549DD20D112E6B48DAA76 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_179E9802FC6549DD20D112E6B48DAA76(void) {
    ALOGD("_HEVCdec_179E9802FC6549DD20D112E6B48DAA76() called");
    return 0;
}

/* Demangled: _HEVCdec_0C2DFBD6B897CE58754A91876E587931C29C426F93C42EF6520A0A9DB0B41199 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_0C2DFBD6B897CE58754A91876E587931C29C426F93C42EF6520A0A9DB0B41199(void) {
    ALOGD("_HEVCdec_0C2DFBD6B897CE58754A91876E587931C29C426F93C42EF6520A0A9DB0B41199() called");
    return 0;
}

/* Demangled: _HEVCdec_8E29C8E230AE21E2E65DEA9912DA5E43C2B6F35A806795E777B0E28478208720 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_8E29C8E230AE21E2E65DEA9912DA5E43C2B6F35A806795E777B0E28478208720(void) {
    ALOGD("_HEVCdec_8E29C8E230AE21E2E65DEA9912DA5E43C2B6F35A806795E777B0E28478208720() called");
    return 0;
}

/* Demangled: _HEVCdec_D8009966923267179F442CE95D232FE0D29C4D15619AC45CC47B3B25C9C8DBAD */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_D8009966923267179F442CE95D232FE0D29C4D15619AC45CC47B3B25C9C8DBAD(void) {
    ALOGD("_HEVCdec_D8009966923267179F442CE95D232FE0D29C4D15619AC45CC47B3B25C9C8DBAD() called");
    return 0;
}

/* Demangled: _HEVCdec_230FC1CA3C2C148C741C73942133E1B7 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_230FC1CA3C2C148C741C73942133E1B7(void) {
    ALOGD("_HEVCdec_230FC1CA3C2C148C741C73942133E1B7() called");
    return 0;
}

/* Exported Object: HEVCD_Factor_Rn1 */
extern "C" __attribute__((visibility("default"))) void* HEVCD_Factor_Rn1 = NULL;

/* Demangled: _HEVCdec_BD6BE1A52E0F7D53DE1C0D887F34EC234797DF093622CFC97CC95EF6E80EAF98 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_BD6BE1A52E0F7D53DE1C0D887F34EC234797DF093622CFC97CC95EF6E80EAF98(void) {
    ALOGD("_HEVCdec_BD6BE1A52E0F7D53DE1C0D887F34EC234797DF093622CFC97CC95EF6E80EAF98() called");
    return 0;
}

/* Demangled: _HEVCdec_3D6CEB680E93D59C60FF9E579F1CC96732B6C2F4D8AE26622FB992AFCD390BDD */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_3D6CEB680E93D59C60FF9E579F1CC96732B6C2F4D8AE26622FB992AFCD390BDD(void) {
    ALOGD("_HEVCdec_3D6CEB680E93D59C60FF9E579F1CC96732B6C2F4D8AE26622FB992AFCD390BDD() called");
    return 0;
}

/* Demangled: _HEVCdec_3D6CEB680E93D59C60FF9E579F1CC967FADAA9B28731BD14C17A98D17CD49825 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_3D6CEB680E93D59C60FF9E579F1CC967FADAA9B28731BD14C17A98D17CD49825(void) {
    ALOGD("_HEVCdec_3D6CEB680E93D59C60FF9E579F1CC967FADAA9B28731BD14C17A98D17CD49825() called");
    return 0;
}

/* Demangled: _HEVCdec_3D6CEB680E93D59C60FF9E579F1CC96711CDE4AA2FD2C72D7A78A3A0BB2C88CD */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_3D6CEB680E93D59C60FF9E579F1CC96711CDE4AA2FD2C72D7A78A3A0BB2C88CD(void) {
    ALOGD("_HEVCdec_3D6CEB680E93D59C60FF9E579F1CC96711CDE4AA2FD2C72D7A78A3A0BB2C88CD() called");
    return 0;
}

/* Demangled: _HEVCdec_3D6CEB680E93D59C60FF9E579F1CC9676CF780A46102FDE124F398A81DD2837D */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_3D6CEB680E93D59C60FF9E579F1CC9676CF780A46102FDE124F398A81DD2837D(void) {
    ALOGD("_HEVCdec_3D6CEB680E93D59C60FF9E579F1CC9676CF780A46102FDE124F398A81DD2837D() called");
    return 0;
}

/* Demangled: _HEVCdec_3D6CEB680E93D59C60FF9E579F1CC967B44B1ADC467A9643849DD540767AEA47 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_3D6CEB680E93D59C60FF9E579F1CC967B44B1ADC467A9643849DD540767AEA47(void) {
    ALOGD("_HEVCdec_3D6CEB680E93D59C60FF9E579F1CC967B44B1ADC467A9643849DD540767AEA47() called");
    return 0;
}

/* Demangled: _HEVCdec_5210A4241D60A54AB1EC7DD06390F8781516EC512DCA3C572133613A084CA564 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_5210A4241D60A54AB1EC7DD06390F8781516EC512DCA3C572133613A084CA564(void) {
    ALOGD("_HEVCdec_5210A4241D60A54AB1EC7DD06390F8781516EC512DCA3C572133613A084CA564() called");
    return 0;
}

/* Demangled: _HEVCdec_1AB0C89F8B8DBBBCACA87CCC837FDFCC0222E2D31CC13B584F57BEC2CD8E94AE */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_1AB0C89F8B8DBBBCACA87CCC837FDFCC0222E2D31CC13B584F57BEC2CD8E94AE(void) {
    ALOGD("_HEVCdec_1AB0C89F8B8DBBBCACA87CCC837FDFCC0222E2D31CC13B584F57BEC2CD8E94AE() called");
    return 0;
}

/* Demangled: _HEVCdec_4A5E0A6513E93570D80147773865314E09E08B8ABF9A6EE4414E5097E0712988 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_4A5E0A6513E93570D80147773865314E09E08B8ABF9A6EE4414E5097E0712988(void) {
    ALOGD("_HEVCdec_4A5E0A6513E93570D80147773865314E09E08B8ABF9A6EE4414E5097E0712988() called");
    return 0;
}

/* Demangled: _HEVCdec_D4AE0E56D3A9DA9F63D8DDCE3FC0D88490C2DF7BB052EC0DF901F8A6BBBBE1F5BDB90AA52EB394AC49CEA754A0393619 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_D4AE0E56D3A9DA9F63D8DDCE3FC0D88490C2DF7BB052EC0DF901F8A6BBBBE1F5BDB90AA52EB394AC49CEA754A0393619(void) {
    ALOGD("_HEVCdec_D4AE0E56D3A9DA9F63D8DDCE3FC0D88490C2DF7BB052EC0DF901F8A6BBBBE1F5BDB90AA52EB394AC49CEA754A0393619() called");
    return 0;
}

/* Demangled: _HEVCdec_D4AE0E56D3A9DA9F63D8DDCE3FC0D88490C2DF7BB052EC0DF901F8A6BBBBE1F5E4631AB1443366995F7C50D175BF44FF */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_D4AE0E56D3A9DA9F63D8DDCE3FC0D88490C2DF7BB052EC0DF901F8A6BBBBE1F5E4631AB1443366995F7C50D175BF44FF(void) {
    ALOGD("_HEVCdec_D4AE0E56D3A9DA9F63D8DDCE3FC0D88490C2DF7BB052EC0DF901F8A6BBBBE1F5E4631AB1443366995F7C50D175BF44FF() called");
    return 0;
}

/* Demangled: _HEVCdec_D4AE0E56D3A9DA9F63D8DDCE3FC0D884A37E96ADE5EAA96CF98FF6B4D4759570BDB90AA52EB394AC49CEA754A0393619 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_D4AE0E56D3A9DA9F63D8DDCE3FC0D884A37E96ADE5EAA96CF98FF6B4D4759570BDB90AA52EB394AC49CEA754A0393619(void) {
    ALOGD("_HEVCdec_D4AE0E56D3A9DA9F63D8DDCE3FC0D884A37E96ADE5EAA96CF98FF6B4D4759570BDB90AA52EB394AC49CEA754A0393619() called");
    return 0;
}

/* Demangled: _HEVCdec_D4AE0E56D3A9DA9F63D8DDCE3FC0D884A37E96ADE5EAA96CF98FF6B4D4759570E4631AB1443366995F7C50D175BF44FF */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_D4AE0E56D3A9DA9F63D8DDCE3FC0D884A37E96ADE5EAA96CF98FF6B4D4759570E4631AB1443366995F7C50D175BF44FF(void) {
    ALOGD("_HEVCdec_D4AE0E56D3A9DA9F63D8DDCE3FC0D884A37E96ADE5EAA96CF98FF6B4D4759570E4631AB1443366995F7C50D175BF44FF() called");
    return 0;
}

/* Demangled: _HEVCdec_D4AE0E56D3A9DA9F63D8DDCE3FC0D88484B975922310F62F68AC832D8879F0F184281E36CD5CDAE21F6433747100EFBE */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_D4AE0E56D3A9DA9F63D8DDCE3FC0D88484B975922310F62F68AC832D8879F0F184281E36CD5CDAE21F6433747100EFBE(void) {
    ALOGD("_HEVCdec_D4AE0E56D3A9DA9F63D8DDCE3FC0D88484B975922310F62F68AC832D8879F0F184281E36CD5CDAE21F6433747100EFBE() called");
    return 0;
}

/* Demangled: _HEVCdec_D4AE0E56D3A9DA9F63D8DDCE3FC0D88484B975922310F62F68AC832D8879F0F1A631868BF82B9EFB61B9E9631890115F */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_D4AE0E56D3A9DA9F63D8DDCE3FC0D88484B975922310F62F68AC832D8879F0F1A631868BF82B9EFB61B9E9631890115F(void) {
    ALOGD("_HEVCdec_D4AE0E56D3A9DA9F63D8DDCE3FC0D88484B975922310F62F68AC832D8879F0F1A631868BF82B9EFB61B9E9631890115F() called");
    return 0;
}

/* Demangled: _HEVCdec_A7E9DEE728B61EEB55E7654692DDFAD99881E5B49AD25E2EACFFD3322A95791B */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_A7E9DEE728B61EEB55E7654692DDFAD99881E5B49AD25E2EACFFD3322A95791B(void) {
    ALOGD("_HEVCdec_A7E9DEE728B61EEB55E7654692DDFAD99881E5B49AD25E2EACFFD3322A95791B() called");
    return 0;
}

/* Demangled: _HEVCdec_F432C04908137521AC462A29ACC3D37CF967E88E421102852273BFCC2CBCD1BD */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_F432C04908137521AC462A29ACC3D37CF967E88E421102852273BFCC2CBCD1BD(void) {
    ALOGD("_HEVCdec_F432C04908137521AC462A29ACC3D37CF967E88E421102852273BFCC2CBCD1BD() called");
    return 0;
}

/* Exported Object: trans_idx_combined_mps */
extern "C" __attribute__((visibility("default"))) void* trans_idx_combined_mps = NULL;

/* Exported Object: trans_idx_combined_lps */
extern "C" __attribute__((visibility("default"))) void* trans_idx_combined_lps = NULL;

/* Exported Object: range_table_lps */
extern "C" __attribute__((visibility("default"))) void* range_table_lps = NULL;

/* Exported Object: sig_coeff_ctx_idx_map2 */
extern "C" __attribute__((visibility("default"))) void* sig_coeff_ctx_idx_map2 = NULL;

/* Exported Object: sig_coeff_ctx_idx_map1 */
extern "C" __attribute__((visibility("default"))) void* sig_coeff_ctx_idx_map1 = NULL;

/* Demangled: _HEVCdec_9EFA94E5AA9125A58A187C1FDB6CA920D05DFCAF266ABE998400CFDAE7211D8B3FCB31935857DEFFEE8022E423072875 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_9EFA94E5AA9125A58A187C1FDB6CA920D05DFCAF266ABE998400CFDAE7211D8B3FCB31935857DEFFEE8022E423072875(void) {
    ALOGD("_HEVCdec_9EFA94E5AA9125A58A187C1FDB6CA920D05DFCAF266ABE998400CFDAE7211D8B3FCB31935857DEFFEE8022E423072875() called");
    return 0;
}

/* Demangled: _HEVCdec_D9781BF9B7BD49FD5A1600DF9E9EE7A3CFFB442AC044999278B9DEB8BD0292B6 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_D9781BF9B7BD49FD5A1600DF9E9EE7A3CFFB442AC044999278B9DEB8BD0292B6(void) {
    ALOGD("_HEVCdec_D9781BF9B7BD49FD5A1600DF9E9EE7A3CFFB442AC044999278B9DEB8BD0292B6() called");
    return 0;
}

/* Demangled: _HEVCdec_D9781BF9B7BD49FD5A1600DF9E9EE7A3D47545751527FCE3B0421D2B382082FD */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_D9781BF9B7BD49FD5A1600DF9E9EE7A3D47545751527FCE3B0421D2B382082FD(void) {
    ALOGD("_HEVCdec_D9781BF9B7BD49FD5A1600DF9E9EE7A3D47545751527FCE3B0421D2B382082FD() called");
    return 0;
}

/* Demangled: _HEVCdec_D9781BF9B7BD49FD5A1600DF9E9EE7A36645238A58B7F4B2BBC8832E43690DC5 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_D9781BF9B7BD49FD5A1600DF9E9EE7A36645238A58B7F4B2BBC8832E43690DC5(void) {
    ALOGD("_HEVCdec_D9781BF9B7BD49FD5A1600DF9E9EE7A36645238A58B7F4B2BBC8832E43690DC5() called");
    return 0;
}

/* Demangled: _HEVCdec_9EFA94E5AA9125A58A187C1FDB6CA920593E8093904F80343554D1185EFE7AB98FF8A9BA9E2C8B7B85964DE339B46DAF */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_9EFA94E5AA9125A58A187C1FDB6CA920593E8093904F80343554D1185EFE7AB98FF8A9BA9E2C8B7B85964DE339B46DAF(void) {
    ALOGD("_HEVCdec_9EFA94E5AA9125A58A187C1FDB6CA920593E8093904F80343554D1185EFE7AB98FF8A9BA9E2C8B7B85964DE339B46DAF() called");
    return 0;
}

/* Demangled: _HEVCdec_42271E3AF6160E6A19E888F16B10DAE98FF8A9BA9E2C8B7B85964DE339B46DAF */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_42271E3AF6160E6A19E888F16B10DAE98FF8A9BA9E2C8B7B85964DE339B46DAF(void) {
    ALOGD("_HEVCdec_42271E3AF6160E6A19E888F16B10DAE98FF8A9BA9E2C8B7B85964DE339B46DAF() called");
    return 0;
}

/* Demangled: _HEVCdec_0F057A5A04F91B6B9F257E903782A074967FE62B83B1504049EA749E602F1E7C91E1965DB56CB53D608F69A9A54BFEEB */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_0F057A5A04F91B6B9F257E903782A074967FE62B83B1504049EA749E602F1E7C91E1965DB56CB53D608F69A9A54BFEEB(void) {
    ALOGD("_HEVCdec_0F057A5A04F91B6B9F257E903782A074967FE62B83B1504049EA749E602F1E7C91E1965DB56CB53D608F69A9A54BFEEB() called");
    return 0;
}

/* Demangled: _HEVCdec_1B7EDEA412DB7CED5459BEF16C4F0CC4CFFB442AC044999278B9DEB8BD0292B6 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_1B7EDEA412DB7CED5459BEF16C4F0CC4CFFB442AC044999278B9DEB8BD0292B6(void) {
    ALOGD("_HEVCdec_1B7EDEA412DB7CED5459BEF16C4F0CC4CFFB442AC044999278B9DEB8BD0292B6() called");
    return 0;
}

/* Demangled: _HEVCdec_1B7EDEA412DB7CED5459BEF16C4F0CC4D47545751527FCE3B0421D2B382082FD */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_1B7EDEA412DB7CED5459BEF16C4F0CC4D47545751527FCE3B0421D2B382082FD(void) {
    ALOGD("_HEVCdec_1B7EDEA412DB7CED5459BEF16C4F0CC4D47545751527FCE3B0421D2B382082FD() called");
    return 0;
}

/* Demangled: _HEVCdec_1B7EDEA412DB7CED5459BEF16C4F0CC46645238A58B7F4B2BBC8832E43690DC5 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_1B7EDEA412DB7CED5459BEF16C4F0CC46645238A58B7F4B2BBC8832E43690DC5(void) {
    ALOGD("_HEVCdec_1B7EDEA412DB7CED5459BEF16C4F0CC46645238A58B7F4B2BBC8832E43690DC5() called");
    return 0;
}

/* Demangled: _HEVCdec_0F057A5A04F91B6B9F257E903782A0746653015F48D3793BB2C753FEE08ABD7B5C88788F17707F00CFA1EEDA9EE8C148 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_0F057A5A04F91B6B9F257E903782A0746653015F48D3793BB2C753FEE08ABD7B5C88788F17707F00CFA1EEDA9EE8C148(void) {
    ALOGD("_HEVCdec_0F057A5A04F91B6B9F257E903782A0746653015F48D3793BB2C753FEE08ABD7B5C88788F17707F00CFA1EEDA9EE8C148() called");
    return 0;
}

/* Demangled: _HEVCdec_8C96BC0B0416E3AE3BC243F0EF1B28F78FF8A9BA9E2C8B7B85964DE339B46DAF */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_8C96BC0B0416E3AE3BC243F0EF1B28F78FF8A9BA9E2C8B7B85964DE339B46DAF(void) {
    ALOGD("_HEVCdec_8C96BC0B0416E3AE3BC243F0EF1B28F78FF8A9BA9E2C8B7B85964DE339B46DAF() called");
    return 0;
}

/* Demangled: _HEVCdec_A03EDD3857E4FDA1B7A32341E89F87C5C0ADE5444025ED1488D75220B0E1988E */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_A03EDD3857E4FDA1B7A32341E89F87C5C0ADE5444025ED1488D75220B0E1988E(void) {
    ALOGD("_HEVCdec_A03EDD3857E4FDA1B7A32341E89F87C5C0ADE5444025ED1488D75220B0E1988E() called");
    return 0;
}

/* Demangled: _HEVCdec_29294C9597B9C0DD79FC26D589EC7C77 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_29294C9597B9C0DD79FC26D589EC7C77(void) {
    ALOGD("_HEVCdec_29294C9597B9C0DD79FC26D589EC7C77() called");
    return 0;
}

/* Demangled: _HEVCdec_4127FF6B21075D953B58B98276D7359F */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_4127FF6B21075D953B58B98276D7359F(void) {
    ALOGD("_HEVCdec_4127FF6B21075D953B58B98276D7359F() called");
    return 0;
}

/* Demangled: _HEVCdec_A03EDD3857E4FDA1B7A32341E89F87C54B04D7A49F0AC4E677CB3A32DF3B33B8 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_A03EDD3857E4FDA1B7A32341E89F87C54B04D7A49F0AC4E677CB3A32DF3B33B8(void) {
    ALOGD("_HEVCdec_A03EDD3857E4FDA1B7A32341E89F87C54B04D7A49F0AC4E677CB3A32DF3B33B8() called");
    return 0;
}

/* Demangled: _HEVCdec_A03EDD3857E4FDA1B7A32341E89F87C5A48FEB0FDE5182602441366402E5DAA3 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_A03EDD3857E4FDA1B7A32341E89F87C5A48FEB0FDE5182602441366402E5DAA3(void) {
    ALOGD("_HEVCdec_A03EDD3857E4FDA1B7A32341E89F87C5A48FEB0FDE5182602441366402E5DAA3() called");
    return 0;
}

/* Demangled: _HEVCdec_F2B9CA3E3BBFA8F3EC9EC0D47E1B5996F24111A63BB7D790F7F705DABD7539AA */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_F2B9CA3E3BBFA8F3EC9EC0D47E1B5996F24111A63BB7D790F7F705DABD7539AA(void) {
    ALOGD("_HEVCdec_F2B9CA3E3BBFA8F3EC9EC0D47E1B5996F24111A63BB7D790F7F705DABD7539AA() called");
    return 0;
}

/* Demangled: _HEVCdec_67B5602329834F65880F48C1F75ACBD2916965E13317DBE2149E0DCF98C5ADCC */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_67B5602329834F65880F48C1F75ACBD2916965E13317DBE2149E0DCF98C5ADCC(void) {
    ALOGD("_HEVCdec_67B5602329834F65880F48C1F75ACBD2916965E13317DBE2149E0DCF98C5ADCC() called");
    return 0;
}

/* Demangled: _HEVCdec_8C52221A6A7CB6AD4CDC8D9ECFB1ED1B */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_8C52221A6A7CB6AD4CDC8D9ECFB1ED1B(void) {
    ALOGD("_HEVCdec_8C52221A6A7CB6AD4CDC8D9ECFB1ED1B() called");
    return 0;
}

/* Demangled: _HEVCdec_E8F7FCC22CCCBEA64AF8AAA985E9277C */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_E8F7FCC22CCCBEA64AF8AAA985E9277C(void) {
    ALOGD("_HEVCdec_E8F7FCC22CCCBEA64AF8AAA985E9277C() called");
    return 0;
}

/* Demangled: _HEVCdec_4F5F9309F139B0BEEDD507E8668DE8833B05B833152CAC99393F3A357ACC82C0 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_4F5F9309F139B0BEEDD507E8668DE8833B05B833152CAC99393F3A357ACC82C0(void) {
    ALOGD("_HEVCdec_4F5F9309F139B0BEEDD507E8668DE8833B05B833152CAC99393F3A357ACC82C0() called");
    return 0;
}

/* Demangled: _HEVCdec_9FE856C114F8B85CB6B2CC545F7E844248710F0A04307B102CECBBAEE0E1998BD29C4D15619AC45CC47B3B25C9C8DBAD */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_9FE856C114F8B85CB6B2CC545F7E844248710F0A04307B102CECBBAEE0E1998BD29C4D15619AC45CC47B3B25C9C8DBAD(void) {
    ALOGD("_HEVCdec_9FE856C114F8B85CB6B2CC545F7E844248710F0A04307B102CECBBAEE0E1998BD29C4D15619AC45CC47B3B25C9C8DBAD() called");
    return 0;
}

/* Demangled: _HEVCdec_4F5F9309F139B0BEEDD507E8668DE8832854A20EA4DFE6B575359EBBFB1926C1 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_4F5F9309F139B0BEEDD507E8668DE8832854A20EA4DFE6B575359EBBFB1926C1(void) {
    ALOGD("_HEVCdec_4F5F9309F139B0BEEDD507E8668DE8832854A20EA4DFE6B575359EBBFB1926C1() called");
    return 0;
}

/* Demangled: _HEVCdec_67C0071DBBDA898E03DD35A14CA57DE511AA95482F28A27D642EC9ED6368BA73 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_67C0071DBBDA898E03DD35A14CA57DE511AA95482F28A27D642EC9ED6368BA73(void) {
    ALOGD("_HEVCdec_67C0071DBBDA898E03DD35A14CA57DE511AA95482F28A27D642EC9ED6368BA73() called");
    return 0;
}

/* Demangled: _HEVCdec_919E2283818D309307B850FE175E21513C3D74562A7B009F04081D4ED23BCFAD */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_919E2283818D309307B850FE175E21513C3D74562A7B009F04081D4ED23BCFAD(void) {
    ALOGD("_HEVCdec_919E2283818D309307B850FE175E21513C3D74562A7B009F04081D4ED23BCFAD() called");
    return 0;
}

/* Demangled: _HEVCdec_E9D32A5B614E0E987E08CACFAAEC7C3E012F8FE51FB2E4444461A3A018541AB3 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_E9D32A5B614E0E987E08CACFAAEC7C3E012F8FE51FB2E4444461A3A018541AB3(void) {
    ALOGD("_HEVCdec_E9D32A5B614E0E987E08CACFAAEC7C3E012F8FE51FB2E4444461A3A018541AB3() called");
    return 0;
}

/* Demangled: _HEVCdec_4F83909FB865BBFC656F73D7ED68FF38358EA26A227B281ADCB87E9438B785DA */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_4F83909FB865BBFC656F73D7ED68FF38358EA26A227B281ADCB87E9438B785DA(void) {
    ALOGD("_HEVCdec_4F83909FB865BBFC656F73D7ED68FF38358EA26A227B281ADCB87E9438B785DA() called");
    return 0;
}

/* Demangled: _HEVCdec_D1E16C2B1523ACAE9A86E624A2393E90BDB90AA52EB394AC49CEA754A0393619 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_D1E16C2B1523ACAE9A86E624A2393E90BDB90AA52EB394AC49CEA754A0393619(void) {
    ALOGD("_HEVCdec_D1E16C2B1523ACAE9A86E624A2393E90BDB90AA52EB394AC49CEA754A0393619() called");
    return 0;
}

/* Demangled: _HEVCdec_E65F35AFAEEC6E378B6D85D6DCA5F37A7EC1CED6A6596A93D19529CFF14CA94C */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_E65F35AFAEEC6E378B6D85D6DCA5F37A7EC1CED6A6596A93D19529CFF14CA94C(void) {
    ALOGD("_HEVCdec_E65F35AFAEEC6E378B6D85D6DCA5F37A7EC1CED6A6596A93D19529CFF14CA94C() called");
    return 0;
}

/* Demangled: _HEVCdec_919E2283818D309307B850FE175E215111B02692EBBFC319531E736A31F3B4D7 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_919E2283818D309307B850FE175E215111B02692EBBFC319531E736A31F3B4D7(void) {
    ALOGD("_HEVCdec_919E2283818D309307B850FE175E215111B02692EBBFC319531E736A31F3B4D7() called");
    return 0;
}

/* Demangled: _HEVCdec_919E2283818D309307B850FE175E215197B89341E4BF05BD08BD11536FF6EB25 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_919E2283818D309307B850FE175E215197B89341E4BF05BD08BD11536FF6EB25(void) {
    ALOGD("_HEVCdec_919E2283818D309307B850FE175E215197B89341E4BF05BD08BD11536FF6EB25() called");
    return 0;
}

/* Demangled: _HEVCdec_919E2283818D309307B850FE175E2151E87AE6C76854420FD0E3B704811E4E5B */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_919E2283818D309307B850FE175E2151E87AE6C76854420FD0E3B704811E4E5B(void) {
    ALOGD("_HEVCdec_919E2283818D309307B850FE175E2151E87AE6C76854420FD0E3B704811E4E5B() called");
    return 0;
}

/* Demangled: _HEVCdec_DE5CE0736A540F9B7C4971CE04996D33358EA26A227B281ADCB87E9438B785DA */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_DE5CE0736A540F9B7C4971CE04996D33358EA26A227B281ADCB87E9438B785DA(void) {
    ALOGD("_HEVCdec_DE5CE0736A540F9B7C4971CE04996D33358EA26A227B281ADCB87E9438B785DA() called");
    return 0;
}

/* Demangled: _HEVCdec_38CB4AC9939FB48766B9C8903BCD7547358EA26A227B281ADCB87E9438B785DA */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_38CB4AC9939FB48766B9C8903BCD7547358EA26A227B281ADCB87E9438B785DA(void) {
    ALOGD("_HEVCdec_38CB4AC9939FB48766B9C8903BCD7547358EA26A227B281ADCB87E9438B785DA() called");
    return 0;
}

/* Demangled: _HEVCdec_31292764A2202C94EA6BDEC07FD4B83648B4216EFACD6704B7656BD6D3481943 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_31292764A2202C94EA6BDEC07FD4B83648B4216EFACD6704B7656BD6D3481943(void) {
    ALOGD("_HEVCdec_31292764A2202C94EA6BDEC07FD4B83648B4216EFACD6704B7656BD6D3481943() called");
    return 0;
}

/* Demangled: _HEVCdec_38CB4AC9939FB48766B9C8903BCD7547D603271E3D84DDD25A24026B6034E185 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_38CB4AC9939FB48766B9C8903BCD7547D603271E3D84DDD25A24026B6034E185(void) {
    ALOGD("_HEVCdec_38CB4AC9939FB48766B9C8903BCD7547D603271E3D84DDD25A24026B6034E185() called");
    return 0;
}

/* Demangled: _HEVCdec_DE5CE0736A540F9B7C4971CE04996D33D603271E3D84DDD25A24026B6034E185 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_DE5CE0736A540F9B7C4971CE04996D33D603271E3D84DDD25A24026B6034E185(void) {
    ALOGD("_HEVCdec_DE5CE0736A540F9B7C4971CE04996D33D603271E3D84DDD25A24026B6034E185() called");
    return 0;
}

/* Demangled: _HEVCdec_31292764A2202C94EA6BDEC07FD4B836358EA26A227B281ADCB87E9438B785DA */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_31292764A2202C94EA6BDEC07FD4B836358EA26A227B281ADCB87E9438B785DA(void) {
    ALOGD("_HEVCdec_31292764A2202C94EA6BDEC07FD4B836358EA26A227B281ADCB87E9438B785DA() called");
    return 0;
}

/* Demangled: _HEVCdec_F8D09444E679EF6A8E0E43056A78AD82CB50B2A46BEA7A5A574B901C5DBC08BE */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_F8D09444E679EF6A8E0E43056A78AD82CB50B2A46BEA7A5A574B901C5DBC08BE(void) {
    ALOGD("_HEVCdec_F8D09444E679EF6A8E0E43056A78AD82CB50B2A46BEA7A5A574B901C5DBC08BE() called");
    return 0;
}

/* Demangled: _HEVCdec_56DCAD745FCB8C89225ED1ACCFA1513C5D02E57AED1828C584A42AA0E1990EB0 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_56DCAD745FCB8C89225ED1ACCFA1513C5D02E57AED1828C584A42AA0E1990EB0(void) {
    ALOGD("_HEVCdec_56DCAD745FCB8C89225ED1ACCFA1513C5D02E57AED1828C584A42AA0E1990EB0() called");
    return 0;
}

/* Demangled: _HEVCdec_E9D32A5B614E0E987E08CACFAAEC7C3E807CB3BB023E32D2642488331F41C63D */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_E9D32A5B614E0E987E08CACFAAEC7C3E807CB3BB023E32D2642488331F41C63D(void) {
    ALOGD("_HEVCdec_E9D32A5B614E0E987E08CACFAAEC7C3E807CB3BB023E32D2642488331F41C63D() called");
    return 0;
}

/* Demangled: _HEVCdec_E9D32A5B614E0E987E08CACFAAEC7C3E88760C2EDDECDBD77B236FDFC9E3F0ED */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_E9D32A5B614E0E987E08CACFAAEC7C3E88760C2EDDECDBD77B236FDFC9E3F0ED(void) {
    ALOGD("_HEVCdec_E9D32A5B614E0E987E08CACFAAEC7C3E88760C2EDDECDBD77B236FDFC9E3F0ED() called");
    return 0;
}

/* Demangled: _HEVCdec_EF47F92ED998ABBF2F24E8BEE94533B0B660764E2D02A25CB1E60E59340F14A7 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_EF47F92ED998ABBF2F24E8BEE94533B0B660764E2D02A25CB1E60E59340F14A7(void) {
    ALOGD("_HEVCdec_EF47F92ED998ABBF2F24E8BEE94533B0B660764E2D02A25CB1E60E59340F14A7() called");
    return 0;
}

/* Demangled: _HEVCdec_DE5CE0736A540F9B7C4971CE04996D33BDEC15A09D29DD6691D00262A09CBF74 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_DE5CE0736A540F9B7C4971CE04996D33BDEC15A09D29DD6691D00262A09CBF74(void) {
    ALOGD("_HEVCdec_DE5CE0736A540F9B7C4971CE04996D33BDEC15A09D29DD6691D00262A09CBF74() called");
    return 0;
}

/* Demangled: _HEVCdec_A874FEDD78B8C00F818E657BBEDF6A04AB9AE473942A036BECDEEB6C24A88345 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_A874FEDD78B8C00F818E657BBEDF6A04AB9AE473942A036BECDEEB6C24A88345(void) {
    ALOGD("_HEVCdec_A874FEDD78B8C00F818E657BBEDF6A04AB9AE473942A036BECDEEB6C24A88345() called");
    return 0;
}

/* Demangled: _HEVCdec_38CB4AC9939FB48766B9C8903BCD7547BDEC15A09D29DD6691D00262A09CBF74 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_38CB4AC9939FB48766B9C8903BCD7547BDEC15A09D29DD6691D00262A09CBF74(void) {
    ALOGD("_HEVCdec_38CB4AC9939FB48766B9C8903BCD7547BDEC15A09D29DD6691D00262A09CBF74() called");
    return 0;
}

/* Demangled: _HEVCdec_31292764A2202C94EA6BDEC07FD4B836BDEC15A09D29DD6691D00262A09CBF74 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_31292764A2202C94EA6BDEC07FD4B836BDEC15A09D29DD6691D00262A09CBF74(void) {
    ALOGD("_HEVCdec_31292764A2202C94EA6BDEC07FD4B836BDEC15A09D29DD6691D00262A09CBF74() called");
    return 0;
}

/* Demangled: _HEVCdec_31292764A2202C94EA6BDEC07FD4B836CE57CA0C53DABD7B00C023FBDE18CFF9 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_31292764A2202C94EA6BDEC07FD4B836CE57CA0C53DABD7B00C023FBDE18CFF9(void) {
    ALOGD("_HEVCdec_31292764A2202C94EA6BDEC07FD4B836CE57CA0C53DABD7B00C023FBDE18CFF9() called");
    return 0;
}

/* Demangled: _HEVCdec_4F83909FB865BBFC656F73D7ED68FF38BDEC15A09D29DD6691D00262A09CBF74 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_4F83909FB865BBFC656F73D7ED68FF38BDEC15A09D29DD6691D00262A09CBF74(void) {
    ALOGD("_HEVCdec_4F83909FB865BBFC656F73D7ED68FF38BDEC15A09D29DD6691D00262A09CBF74() called");
    return 0;
}

/* Demangled: _HEVCdec_F8D09444E679EF6A8E0E43056A78AD82461938FC554F3D8B087E768BD12E7C38 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_F8D09444E679EF6A8E0E43056A78AD82461938FC554F3D8B087E768BD12E7C38(void) {
    ALOGD("_HEVCdec_F8D09444E679EF6A8E0E43056A78AD82461938FC554F3D8B087E768BD12E7C38() called");
    return 0;
}

/* Demangled: _HEVCdec_31292764A2202C94EA6BDEC07FD4B836B0C7B736D35077F9EBFA16FF556BE613 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_31292764A2202C94EA6BDEC07FD4B836B0C7B736D35077F9EBFA16FF556BE613(void) {
    ALOGD("_HEVCdec_31292764A2202C94EA6BDEC07FD4B836B0C7B736D35077F9EBFA16FF556BE613() called");
    return 0;
}

/* Demangled: _HEVCdec_4F83909FB865BBFC656F73D7ED68FF38B0C7B736D35077F9EBFA16FF556BE613 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_4F83909FB865BBFC656F73D7ED68FF38B0C7B736D35077F9EBFA16FF556BE613(void) {
    ALOGD("_HEVCdec_4F83909FB865BBFC656F73D7ED68FF38B0C7B736D35077F9EBFA16FF556BE613() called");
    return 0;
}

/* Demangled: _HEVCdec_31292764A2202C94EA6BDEC07FD4B8363737CA379B8258305B982B89D429B86C */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_31292764A2202C94EA6BDEC07FD4B8363737CA379B8258305B982B89D429B86C(void) {
    ALOGD("_HEVCdec_31292764A2202C94EA6BDEC07FD4B8363737CA379B8258305B982B89D429B86C() called");
    return 0;
}

/* Demangled: _HEVCdec_31292764A2202C94EA6BDEC07FD4B836276AAE7DCC8C1DA14BC2BA64555C0F3D */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_31292764A2202C94EA6BDEC07FD4B836276AAE7DCC8C1DA14BC2BA64555C0F3D(void) {
    ALOGD("_HEVCdec_31292764A2202C94EA6BDEC07FD4B836276AAE7DCC8C1DA14BC2BA64555C0F3D() called");
    return 0;
}

/* Demangled: _HEVCdec_31292764A2202C94EA6BDEC07FD4B8368AE2E6FD29F248E308F32D6FA5C85FCE */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_31292764A2202C94EA6BDEC07FD4B8368AE2E6FD29F248E308F32D6FA5C85FCE(void) {
    ALOGD("_HEVCdec_31292764A2202C94EA6BDEC07FD4B8368AE2E6FD29F248E308F32D6FA5C85FCE() called");
    return 0;
}

/* Demangled: _HEVCdec_4F83909FB865BBFC656F73D7ED68FF388AE2E6FD29F248E308F32D6FA5C85FCE */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_4F83909FB865BBFC656F73D7ED68FF388AE2E6FD29F248E308F32D6FA5C85FCE(void) {
    ALOGD("_HEVCdec_4F83909FB865BBFC656F73D7ED68FF388AE2E6FD29F248E308F32D6FA5C85FCE() called");
    return 0;
}

/* Demangled: _HEVCdec_F8D09444E679EF6A8E0E43056A78AD824EEF96D4B9A49B3D2FACEEE6D06A2E62 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_F8D09444E679EF6A8E0E43056A78AD824EEF96D4B9A49B3D2FACEEE6D06A2E62(void) {
    ALOGD("_HEVCdec_F8D09444E679EF6A8E0E43056A78AD824EEF96D4B9A49B3D2FACEEE6D06A2E62() called");
    return 0;
}

/* Demangled: _HEVCdec_38CB4AC9939FB48766B9C8903BCD75478AE2E6FD29F248E308F32D6FA5C85FCE */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_38CB4AC9939FB48766B9C8903BCD75478AE2E6FD29F248E308F32D6FA5C85FCE(void) {
    ALOGD("_HEVCdec_38CB4AC9939FB48766B9C8903BCD75478AE2E6FD29F248E308F32D6FA5C85FCE() called");
    return 0;
}

/* Demangled: _HEVCdec_DE5CE0736A540F9B7C4971CE04996D338AE2E6FD29F248E308F32D6FA5C85FCE */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_DE5CE0736A540F9B7C4971CE04996D338AE2E6FD29F248E308F32D6FA5C85FCE(void) {
    ALOGD("_HEVCdec_DE5CE0736A540F9B7C4971CE04996D338AE2E6FD29F248E308F32D6FA5C85FCE() called");
    return 0;
}

/* Demangled: _HEVCdec_67C0071DBBDA898E03DD35A14CA57DE54FB15AB39E052C698F47D19A981F66D13FCB31935857DEFFEE8022E423072875 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_67C0071DBBDA898E03DD35A14CA57DE54FB15AB39E052C698F47D19A981F66D13FCB31935857DEFFEE8022E423072875(void) {
    ALOGD("_HEVCdec_67C0071DBBDA898E03DD35A14CA57DE54FB15AB39E052C698F47D19A981F66D13FCB31935857DEFFEE8022E423072875() called");
    return 0;
}

/* Demangled: _HEVCdec_D1E16C2B1523ACAE9A86E624A2393E90EB049B53E12FA1ACA6FC8F150781D287 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_D1E16C2B1523ACAE9A86E624A2393E90EB049B53E12FA1ACA6FC8F150781D287(void) {
    ALOGD("_HEVCdec_D1E16C2B1523ACAE9A86E624A2393E90EB049B53E12FA1ACA6FC8F150781D287() called");
    return 0;
}

/* Demangled: _HEVCdec_56DCAD745FCB8C89225ED1ACCFA1513C2C774BA16D40F0BD23E0AD9A6E2B4547 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_56DCAD745FCB8C89225ED1ACCFA1513C2C774BA16D40F0BD23E0AD9A6E2B4547(void) {
    ALOGD("_HEVCdec_56DCAD745FCB8C89225ED1ACCFA1513C2C774BA16D40F0BD23E0AD9A6E2B4547() called");
    return 0;
}

/* Demangled: _HEVCdec_A874FEDD78B8C00F818E657BBEDF6A0402193B94B603D6085E511A65BEF2D713 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_A874FEDD78B8C00F818E657BBEDF6A0402193B94B603D6085E511A65BEF2D713(void) {
    ALOGD("_HEVCdec_A874FEDD78B8C00F818E657BBEDF6A0402193B94B603D6085E511A65BEF2D713() called");
    return 0;
}

/* Demangled: _HEVCdec_9FE856C114F8B85CB6B2CC545F7E84424098AED21AE67F744370CFFD09E40CFBDD739B34C8D415F21BF78B3A69EA1DA4 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_9FE856C114F8B85CB6B2CC545F7E84424098AED21AE67F744370CFFD09E40CFBDD739B34C8D415F21BF78B3A69EA1DA4(void) {
    ALOGD("_HEVCdec_9FE856C114F8B85CB6B2CC545F7E84424098AED21AE67F744370CFFD09E40CFBDD739B34C8D415F21BF78B3A69EA1DA4() called");
    return 0;
}

/* Demangled: _HEVCdec_9FE856C114F8B85CB6B2CC545F7E8442AE67E5AD6E88BBD96C13C598FB923945 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_9FE856C114F8B85CB6B2CC545F7E8442AE67E5AD6E88BBD96C13C598FB923945(void) {
    ALOGD("_HEVCdec_9FE856C114F8B85CB6B2CC545F7E8442AE67E5AD6E88BBD96C13C598FB923945() called");
    return 0;
}

/* Demangled: _HEVCdec_D45EE35E9DE943461592621277472BF2 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_D45EE35E9DE943461592621277472BF2(void) {
    ALOGD("_HEVCdec_D45EE35E9DE943461592621277472BF2() called");
    return 0;
}

/* Demangled: _HEVCdec_E5A04507050AFE1E088B2A276F8E327731FF5248FA741C41387819D7AE40CDC2 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_E5A04507050AFE1E088B2A276F8E327731FF5248FA741C41387819D7AE40CDC2(void) {
    ALOGD("_HEVCdec_E5A04507050AFE1E088B2A276F8E327731FF5248FA741C41387819D7AE40CDC2() called");
    return 0;
}

/* Demangled: _HEVCdec_744060E268FF7555E4F7A7CD4F8F7751 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_744060E268FF7555E4F7A7CD4F8F7751(void) {
    ALOGD("_HEVCdec_744060E268FF7555E4F7A7CD4F8F7751() called");
    return 0;
}

/* Demangled: _HEVCdec_4CACB88AF8747BE3090914B36DA539FB5A7EE11225CD6D41D78B91E1FC3BFED9 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_4CACB88AF8747BE3090914B36DA539FB5A7EE11225CD6D41D78B91E1FC3BFED9(void) {
    ALOGD("_HEVCdec_4CACB88AF8747BE3090914B36DA539FB5A7EE11225CD6D41D78B91E1FC3BFED9() called");
    return 0;
}

/* Demangled: _HEVCdec_710AA0934A9C4002EA9ED0D2A6BB0956B8EF7948EDDE7EE2D5A0EBEB8401679FC9BBAC2A70A223FBD4D1082164319486 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_710AA0934A9C4002EA9ED0D2A6BB0956B8EF7948EDDE7EE2D5A0EBEB8401679FC9BBAC2A70A223FBD4D1082164319486(void) {
    ALOGD("_HEVCdec_710AA0934A9C4002EA9ED0D2A6BB0956B8EF7948EDDE7EE2D5A0EBEB8401679FC9BBAC2A70A223FBD4D1082164319486() called");
    return 0;
}

/* Demangled: _HEVCdec_710AA0934A9C4002EA9ED0D2A6BB0956B8EF7948EDDE7EE2D5A0EBEB8401679FEE3F500BABD4AFC403C74EF5D743684E */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_710AA0934A9C4002EA9ED0D2A6BB0956B8EF7948EDDE7EE2D5A0EBEB8401679FEE3F500BABD4AFC403C74EF5D743684E(void) {
    ALOGD("_HEVCdec_710AA0934A9C4002EA9ED0D2A6BB0956B8EF7948EDDE7EE2D5A0EBEB8401679FEE3F500BABD4AFC403C74EF5D743684E() called");
    return 0;
}

/* Demangled: _HEVCdec_EBC158A69CAAE17D1D6AC43AE4F29703EBFA5ADB675BE2E7510C86D2F4BF1AE9 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_EBC158A69CAAE17D1D6AC43AE4F29703EBFA5ADB675BE2E7510C86D2F4BF1AE9(void) {
    ALOGD("_HEVCdec_EBC158A69CAAE17D1D6AC43AE4F29703EBFA5ADB675BE2E7510C86D2F4BF1AE9() called");
    return 0;
}

/* Demangled: _HEVCdec_710AA0934A9C4002EA9ED0D2A6BB095617BD158A4F47D8C5FEE1ED481541E8D37CE0B3C38577F08D631D490597810544 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_710AA0934A9C4002EA9ED0D2A6BB095617BD158A4F47D8C5FEE1ED481541E8D37CE0B3C38577F08D631D490597810544(void) {
    ALOGD("_HEVCdec_710AA0934A9C4002EA9ED0D2A6BB095617BD158A4F47D8C5FEE1ED481541E8D37CE0B3C38577F08D631D490597810544() called");
    return 0;
}

/* Demangled: _HEVCdec_710AA0934A9C4002EA9ED0D2A6BB095624725C990D1EA469BBBA60390F40BB36 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_710AA0934A9C4002EA9ED0D2A6BB095624725C990D1EA469BBBA60390F40BB36(void) {
    ALOGD("_HEVCdec_710AA0934A9C4002EA9ED0D2A6BB095624725C990D1EA469BBBA60390F40BB36() called");
    return 0;
}

/* Demangled: _HEVCdec_4D0241DA1CE812FBC1379A3DFC097EB7A5C5FA589F9680EA874C55D329715FE3 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_4D0241DA1CE812FBC1379A3DFC097EB7A5C5FA589F9680EA874C55D329715FE3(void) {
    ALOGD("_HEVCdec_4D0241DA1CE812FBC1379A3DFC097EB7A5C5FA589F9680EA874C55D329715FE3() called");
    return 0;
}

/* Demangled: _HEVCdec_1D38E05D116A41B118D885C2BE27DFAE100CAF64563954CFF2D2D72E0AC57FDE441A6A5663D808151CA573F5EF50AF78 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_1D38E05D116A41B118D885C2BE27DFAE100CAF64563954CFF2D2D72E0AC57FDE441A6A5663D808151CA573F5EF50AF78(void) {
    ALOGD("_HEVCdec_1D38E05D116A41B118D885C2BE27DFAE100CAF64563954CFF2D2D72E0AC57FDE441A6A5663D808151CA573F5EF50AF78() called");
    return 0;
}

/* Demangled: _HEVCdec_13D4801FED456160BCBE047E1F1694B3BEBF927D0B438AD352B2FF394CB2B513F45110B4698283FE6CCFEE977D87151A */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_13D4801FED456160BCBE047E1F1694B3BEBF927D0B438AD352B2FF394CB2B513F45110B4698283FE6CCFEE977D87151A(void) {
    ALOGD("_HEVCdec_13D4801FED456160BCBE047E1F1694B3BEBF927D0B438AD352B2FF394CB2B513F45110B4698283FE6CCFEE977D87151A() called");
    return 0;
}

/* Demangled: _HEVCdec_1D38E05D116A41B118D885C2BE27DFAE100CAF64563954CFF2D2D72E0AC57FDE */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_1D38E05D116A41B118D885C2BE27DFAE100CAF64563954CFF2D2D72E0AC57FDE(void) {
    ALOGD("_HEVCdec_1D38E05D116A41B118D885C2BE27DFAE100CAF64563954CFF2D2D72E0AC57FDE() called");
    return 0;
}

/* Demangled: _HEVCdec_13D4801FED456160BCBE047E1F1694B3BEBF927D0B438AD352B2FF394CB2B513362024D649F6E1BD0DD8D16CBF801F84 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_13D4801FED456160BCBE047E1F1694B3BEBF927D0B438AD352B2FF394CB2B513362024D649F6E1BD0DD8D16CBF801F84(void) {
    ALOGD("_HEVCdec_13D4801FED456160BCBE047E1F1694B3BEBF927D0B438AD352B2FF394CB2B513362024D649F6E1BD0DD8D16CBF801F84() called");
    return 0;
}

/* Demangled: _HEVCdec_984D77325B7D84B4653412F802C42624717F530C961C5953648FEB34341C0EFF */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_984D77325B7D84B4653412F802C42624717F530C961C5953648FEB34341C0EFF(void) {
    ALOGD("_HEVCdec_984D77325B7D84B4653412F802C42624717F530C961C5953648FEB34341C0EFF() called");
    return 0;
}

/* Demangled: _HEVCdec_1D38E05D116A41B118D885C2BE27DFAE100CAF64563954CFF2D2D72E0AC57FDE30CD407B6327DF555C86408491AE3CB9 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_1D38E05D116A41B118D885C2BE27DFAE100CAF64563954CFF2D2D72E0AC57FDE30CD407B6327DF555C86408491AE3CB9(void) {
    ALOGD("_HEVCdec_1D38E05D116A41B118D885C2BE27DFAE100CAF64563954CFF2D2D72E0AC57FDE30CD407B6327DF555C86408491AE3CB9() called");
    return 0;
}

/* Demangled: _HEVCdec_13D4801FED456160BCBE047E1F1694B3BEBF927D0B438AD352B2FF394CB2B513B7AB42BA7C9A52566B96E15EDE1A2E10 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_13D4801FED456160BCBE047E1F1694B3BEBF927D0B438AD352B2FF394CB2B513B7AB42BA7C9A52566B96E15EDE1A2E10(void) {
    ALOGD("_HEVCdec_13D4801FED456160BCBE047E1F1694B3BEBF927D0B438AD352B2FF394CB2B513B7AB42BA7C9A52566B96E15EDE1A2E10() called");
    return 0;
}

/* Demangled: _HEVCdec_0EFCDE3BC80EF2A35A43171A07C09BF421EE28C2B9CE6A03120EE02FF88051AEC9BBAC2A70A223FBD4D1082164319486 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_0EFCDE3BC80EF2A35A43171A07C09BF421EE28C2B9CE6A03120EE02FF88051AEC9BBAC2A70A223FBD4D1082164319486(void) {
    ALOGD("_HEVCdec_0EFCDE3BC80EF2A35A43171A07C09BF421EE28C2B9CE6A03120EE02FF88051AEC9BBAC2A70A223FBD4D1082164319486() called");
    return 0;
}

/* Demangled: _HEVCdec_EBC158A69CAAE17D1D6AC43AE4F297032C6571F9652DDDB31C2F558596C760E7 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_EBC158A69CAAE17D1D6AC43AE4F297032C6571F9652DDDB31C2F558596C760E7(void) {
    ALOGD("_HEVCdec_EBC158A69CAAE17D1D6AC43AE4F297032C6571F9652DDDB31C2F558596C760E7() called");
    return 0;
}

/* Demangled: _HEVCdec_4D0241DA1CE812FBC1379A3DFC097EB7DE01246411A96DA110ECF7FB4AA0E82D999763261EFD868C13B93FD5534E5155 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_4D0241DA1CE812FBC1379A3DFC097EB7DE01246411A96DA110ECF7FB4AA0E82D999763261EFD868C13B93FD5534E5155(void) {
    ALOGD("_HEVCdec_4D0241DA1CE812FBC1379A3DFC097EB7DE01246411A96DA110ECF7FB4AA0E82D999763261EFD868C13B93FD5534E5155() called");
    return 0;
}

/* Demangled: _HEVCdec_1D38E05D116A41B118D885C2BE27DFAE100CAF64563954CFF2D2D72E0AC57FDEBF0B5274F369BC127B627EEB7E599FB419B2FBD81C92FD6CDA5A555A5CCB4D91 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_1D38E05D116A41B118D885C2BE27DFAE100CAF64563954CFF2D2D72E0AC57FDEBF0B5274F369BC127B627EEB7E599FB419B2FBD81C92FD6CDA5A555A5CCB4D91(void) {
    ALOGD("_HEVCdec_1D38E05D116A41B118D885C2BE27DFAE100CAF64563954CFF2D2D72E0AC57FDEBF0B5274F369BC127B627EEB7E599FB419B2FBD81C92FD6CDA5A555A5CCB4D91() called");
    return 0;
}

/* Demangled: _HEVCdec_13D4801FED456160BCBE047E1F1694B3BEBF927D0B438AD352B2FF394CB2B513F7ED8C523DA2088DFCD6E3E0684D0AA1008CE8B7DBE49937BA8CD678BFFC02FC */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_13D4801FED456160BCBE047E1F1694B3BEBF927D0B438AD352B2FF394CB2B513F7ED8C523DA2088DFCD6E3E0684D0AA1008CE8B7DBE49937BA8CD678BFFC02FC(void) {
    ALOGD("_HEVCdec_13D4801FED456160BCBE047E1F1694B3BEBF927D0B438AD352B2FF394CB2B513F7ED8C523DA2088DFCD6E3E0684D0AA1008CE8B7DBE49937BA8CD678BFFC02FC() called");
    return 0;
}

/* Demangled: _HEVCdec_984D77325B7D84B4653412F802C42624B24030C01ABCF39B2C413405D2804387999763261EFD868C13B93FD5534E5155 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_984D77325B7D84B4653412F802C42624B24030C01ABCF39B2C413405D2804387999763261EFD868C13B93FD5534E5155(void) {
    ALOGD("_HEVCdec_984D77325B7D84B4653412F802C42624B24030C01ABCF39B2C413405D2804387999763261EFD868C13B93FD5534E5155() called");
    return 0;
}

/* Demangled: _HEVCdec_51845344E10C165A30ABFF93C37A1185AEF8B201C01A233CBF63A4EC5F79E5E4B2D79A5DEBAB93234A3DA5E3304AF782 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_51845344E10C165A30ABFF93C37A1185AEF8B201C01A233CBF63A4EC5F79E5E4B2D79A5DEBAB93234A3DA5E3304AF782(void) {
    ALOGD("_HEVCdec_51845344E10C165A30ABFF93C37A1185AEF8B201C01A233CBF63A4EC5F79E5E4B2D79A5DEBAB93234A3DA5E3304AF782() called");
    return 0;
}

/* Demangled: _HEVCdec_33C06937A6D3A7348946D5D3451431E14BDF3D458ECD66F817DD593BDE64F58E */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_33C06937A6D3A7348946D5D3451431E14BDF3D458ECD66F817DD593BDE64F58E(void) {
    ALOGD("_HEVCdec_33C06937A6D3A7348946D5D3451431E14BDF3D458ECD66F817DD593BDE64F58E() called");
    return 0;
}

/* Demangled: _HEVCdec_5F31E042128189F500BD016DDC2FB590C412473BD37F98F5F040A3F33AF9E84E */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_5F31E042128189F500BD016DDC2FB590C412473BD37F98F5F040A3F33AF9E84E(void) {
    ALOGD("_HEVCdec_5F31E042128189F500BD016DDC2FB590C412473BD37F98F5F040A3F33AF9E84E() called");
    return 0;
}

/* Demangled: _HEVCdec_CD274BB46C81E43447FC83624780F65806587A7F89E120B3C03C082224B09B08 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_CD274BB46C81E43447FC83624780F65806587A7F89E120B3C03C082224B09B08(void) {
    ALOGD("_HEVCdec_CD274BB46C81E43447FC83624780F65806587A7F89E120B3C03C082224B09B08() called");
    return 0;
}

/* Demangled: _HEVCdec_E9425B3E19D60ACF3C2162D5A4447CDE1D5B2C5CB9E0B7F2C316CACEDD46BA3BDAAAE1AD411F03C9129BD0216981B525 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_E9425B3E19D60ACF3C2162D5A4447CDE1D5B2C5CB9E0B7F2C316CACEDD46BA3BDAAAE1AD411F03C9129BD0216981B525(void) {
    ALOGD("_HEVCdec_E9425B3E19D60ACF3C2162D5A4447CDE1D5B2C5CB9E0B7F2C316CACEDD46BA3BDAAAE1AD411F03C9129BD0216981B525() called");
    return 0;
}

/* Demangled: _HEVCdec_CD274BB46C81E43447FC83624780F658D4B183BC33BA92DCF113AC753208E98A */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_CD274BB46C81E43447FC83624780F658D4B183BC33BA92DCF113AC753208E98A(void) {
    ALOGD("_HEVCdec_CD274BB46C81E43447FC83624780F658D4B183BC33BA92DCF113AC753208E98A() called");
    return 0;
}

/* Demangled: _HEVCdec_E8E1C5556EDD8CEF095E2B57FCC6DCC13EBD472426F1F5D411B2515C87A4D9F6FEAB2E84E19886579CB14551FE38C1E4 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_E8E1C5556EDD8CEF095E2B57FCC6DCC13EBD472426F1F5D411B2515C87A4D9F6FEAB2E84E19886579CB14551FE38C1E4(void) {
    ALOGD("_HEVCdec_E8E1C5556EDD8CEF095E2B57FCC6DCC13EBD472426F1F5D411B2515C87A4D9F6FEAB2E84E19886579CB14551FE38C1E4() called");
    return 0;
}

/* Demangled: _HEVCdec_CD274BB46C81E43447FC83624780F658856C3DA6D266C2353A59EC9C349FEEE9 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_CD274BB46C81E43447FC83624780F658856C3DA6D266C2353A59EC9C349FEEE9(void) {
    ALOGD("_HEVCdec_CD274BB46C81E43447FC83624780F658856C3DA6D266C2353A59EC9C349FEEE9() called");
    return 0;
}

/* Demangled: _HEVCdec_E8E1C5556EDD8CEF095E2B57FCC6DCC15C0EB25AB74865AB782E531795713529FEAB2E84E19886579CB14551FE38C1E4 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_E8E1C5556EDD8CEF095E2B57FCC6DCC15C0EB25AB74865AB782E531795713529FEAB2E84E19886579CB14551FE38C1E4(void) {
    ALOGD("_HEVCdec_E8E1C5556EDD8CEF095E2B57FCC6DCC15C0EB25AB74865AB782E531795713529FEAB2E84E19886579CB14551FE38C1E4() called");
    return 0;
}

/* Demangled: _HEVCdec_CD274BB46C81E43447FC83624780F6588F886E2C4F7213A9F497F1187F47E69D */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_CD274BB46C81E43447FC83624780F6588F886E2C4F7213A9F497F1187F47E69D(void) {
    ALOGD("_HEVCdec_CD274BB46C81E43447FC83624780F6588F886E2C4F7213A9F497F1187F47E69D() called");
    return 0;
}

/* Demangled: _HEVCdec_CD274BB46C81E43447FC83624780F658E43C2C66EE984EE9C9F566473B220E23633648B432F7D940C3501C1E6BA191E5 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_CD274BB46C81E43447FC83624780F658E43C2C66EE984EE9C9F566473B220E23633648B432F7D940C3501C1E6BA191E5(void) {
    ALOGD("_HEVCdec_CD274BB46C81E43447FC83624780F658E43C2C66EE984EE9C9F566473B220E23633648B432F7D940C3501C1E6BA191E5() called");
    return 0;
}

/* Demangled: _HEVCdec_E9425B3E19D60ACF3C2162D5A4447CDE1D5B2C5CB9E0B7F2C316CACEDD46BA3B */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_E9425B3E19D60ACF3C2162D5A4447CDE1D5B2C5CB9E0B7F2C316CACEDD46BA3B(void) {
    ALOGD("_HEVCdec_E9425B3E19D60ACF3C2162D5A4447CDE1D5B2C5CB9E0B7F2C316CACEDD46BA3B() called");
    return 0;
}

/* Demangled: _HEVCdec_E9425B3E19D60ACF3C2162D5A4447CDE1D5B2C5CB9E0B7F2C316CACEDD46BA3BAB8A269942CE8A43BE20290D2EA17C46 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_E9425B3E19D60ACF3C2162D5A4447CDE1D5B2C5CB9E0B7F2C316CACEDD46BA3BAB8A269942CE8A43BE20290D2EA17C46(void) {
    ALOGD("_HEVCdec_E9425B3E19D60ACF3C2162D5A4447CDE1D5B2C5CB9E0B7F2C316CACEDD46BA3BAB8A269942CE8A43BE20290D2EA17C46() called");
    return 0;
}

/* Demangled: _HEVCdec_9FE856C114F8B85CB6B2CC545F7E8442AA9E95C80BEC2A8E1EFFE1CF15F4353AF9C477AFEC465E6D343464E37399EA8B */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_9FE856C114F8B85CB6B2CC545F7E8442AA9E95C80BEC2A8E1EFFE1CF15F4353AF9C477AFEC465E6D343464E37399EA8B(void) {
    ALOGD("_HEVCdec_9FE856C114F8B85CB6B2CC545F7E8442AA9E95C80BEC2A8E1EFFE1CF15F4353AF9C477AFEC465E6D343464E37399EA8B() called");
    return 0;
}

/* Demangled: _HEVCdec_E9D32A5B614E0E987E08CACFAAEC7C3E03FF165DF7D1A4FD8FBE6078FDB4FBDE */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_E9D32A5B614E0E987E08CACFAAEC7C3E03FF165DF7D1A4FD8FBE6078FDB4FBDE(void) {
    ALOGD("_HEVCdec_E9D32A5B614E0E987E08CACFAAEC7C3E03FF165DF7D1A4FD8FBE6078FDB4FBDE() called");
    return 0;
}

/* Demangled: _HEVCdec_E9D32A5B614E0E987E08CACFAAEC7C3EF4E4CEA318489DAE0B0ECC822B8EE04E */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_E9D32A5B614E0E987E08CACFAAEC7C3EF4E4CEA318489DAE0B0ECC822B8EE04E(void) {
    ALOGD("_HEVCdec_E9D32A5B614E0E987E08CACFAAEC7C3EF4E4CEA318489DAE0B0ECC822B8EE04E() called");
    return 0;
}

/* Demangled: _HEVCdec_E9D32A5B614E0E987E08CACFAAEC7C3E3941D9FDA7EFCB4F3A1D995FAA0368F8 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_E9D32A5B614E0E987E08CACFAAEC7C3E3941D9FDA7EFCB4F3A1D995FAA0368F8(void) {
    ALOGD("_HEVCdec_E9D32A5B614E0E987E08CACFAAEC7C3E3941D9FDA7EFCB4F3A1D995FAA0368F8() called");
    return 0;
}

/* Demangled: _HEVCdec_31292764A2202C94EA6BDEC07FD4B836C0531FF7E182468B92DACD9DA39888BF */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_31292764A2202C94EA6BDEC07FD4B836C0531FF7E182468B92DACD9DA39888BF(void) {
    ALOGD("_HEVCdec_31292764A2202C94EA6BDEC07FD4B836C0531FF7E182468B92DACD9DA39888BF() called");
    return 0;
}

/* Demangled: _HEVCdec_31292764A2202C94EA6BDEC07FD4B8362D34107EA9CF8690A940BC02B987F2A9 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_31292764A2202C94EA6BDEC07FD4B8362D34107EA9CF8690A940BC02B987F2A9(void) {
    ALOGD("_HEVCdec_31292764A2202C94EA6BDEC07FD4B8362D34107EA9CF8690A940BC02B987F2A9() called");
    return 0;
}

/* Demangled: _HEVCdec_31292764A2202C94EA6BDEC07FD4B836C271924C3BEB7AAD36DF90C3A24310A2 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_31292764A2202C94EA6BDEC07FD4B836C271924C3BEB7AAD36DF90C3A24310A2(void) {
    ALOGD("_HEVCdec_31292764A2202C94EA6BDEC07FD4B836C271924C3BEB7AAD36DF90C3A24310A2() called");
    return 0;
}

/* Demangled: _HEVCdec_31292764A2202C94EA6BDEC07FD4B836569BE95A9FB24B1025523311B40801A6 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_31292764A2202C94EA6BDEC07FD4B836569BE95A9FB24B1025523311B40801A6(void) {
    ALOGD("_HEVCdec_31292764A2202C94EA6BDEC07FD4B836569BE95A9FB24B1025523311B40801A6() called");
    return 0;
}

/* Demangled: _HEVCdec_38CB4AC9939FB48766B9C8903BCD7547B0C7B736D35077F9EBFA16FF556BE613 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_38CB4AC9939FB48766B9C8903BCD7547B0C7B736D35077F9EBFA16FF556BE613(void) {
    ALOGD("_HEVCdec_38CB4AC9939FB48766B9C8903BCD7547B0C7B736D35077F9EBFA16FF556BE613() called");
    return 0;
}

/* Demangled: _HEVCdec_EF47F92ED998ABBF2F24E8BEE94533B07144CDEC1A9AD328D6777D25E16072BE */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_EF47F92ED998ABBF2F24E8BEE94533B07144CDEC1A9AD328D6777D25E16072BE(void) {
    ALOGD("_HEVCdec_EF47F92ED998ABBF2F24E8BEE94533B07144CDEC1A9AD328D6777D25E16072BE() called");
    return 0;
}

/* Demangled: _HEVCdec_DE5CE0736A540F9B7C4971CE04996D33B0C7B736D35077F9EBFA16FF556BE613 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_DE5CE0736A540F9B7C4971CE04996D33B0C7B736D35077F9EBFA16FF556BE613(void) {
    ALOGD("_HEVCdec_DE5CE0736A540F9B7C4971CE04996D33B0C7B736D35077F9EBFA16FF556BE613() called");
    return 0;
}

/* Demangled: _HEVCdec_515D1F30D1503EB7D0D9757936504D263A4CA3526CAFBFFB3CEDB7DD17AF0C7A */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_515D1F30D1503EB7D0D9757936504D263A4CA3526CAFBFFB3CEDB7DD17AF0C7A(void) {
    ALOGD("_HEVCdec_515D1F30D1503EB7D0D9757936504D263A4CA3526CAFBFFB3CEDB7DD17AF0C7A() called");
    return 0;
}

/* Demangled: _HEVCdec_515D1F30D1503EB7D0D9757936504D264FB4412FC2A141179856EC47BA9766DE */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_515D1F30D1503EB7D0D9757936504D264FB4412FC2A141179856EC47BA9766DE(void) {
    ALOGD("_HEVCdec_515D1F30D1503EB7D0D9757936504D264FB4412FC2A141179856EC47BA9766DE() called");
    return 0;
}

/* Demangled: _HEVCdec_515D1F30D1503EB7D0D9757936504D26CAB5962622D51D12D79F63C2C3A857F6AB492D8BDE9F642FDDA90AD6FC26ECEA */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_515D1F30D1503EB7D0D9757936504D26CAB5962622D51D12D79F63C2C3A857F6AB492D8BDE9F642FDDA90AD6FC26ECEA(void) {
    ALOGD("_HEVCdec_515D1F30D1503EB7D0D9757936504D26CAB5962622D51D12D79F63C2C3A857F6AB492D8BDE9F642FDDA90AD6FC26ECEA() called");
    return 0;
}

/* Demangled: _HEVCdec_515D1F30D1503EB7D0D9757936504D26246868B11E8C52F526ED95DAF3E39037A29802A88AB45AF6F1C5F7F3CA515D85 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_515D1F30D1503EB7D0D9757936504D26246868B11E8C52F526ED95DAF3E39037A29802A88AB45AF6F1C5F7F3CA515D85(void) {
    ALOGD("_HEVCdec_515D1F30D1503EB7D0D9757936504D26246868B11E8C52F526ED95DAF3E39037A29802A88AB45AF6F1C5F7F3CA515D85() called");
    return 0;
}

/* Demangled: _HEVCdec_515D1F30D1503EB7D0D9757936504D260B718865433A89C242FC59903CEE3F6A */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_515D1F30D1503EB7D0D9757936504D260B718865433A89C242FC59903CEE3F6A(void) {
    ALOGD("_HEVCdec_515D1F30D1503EB7D0D9757936504D260B718865433A89C242FC59903CEE3F6A() called");
    return 0;
}

/* Demangled: _HEVCdec_515D1F30D1503EB7D0D9757936504D265AE374D07E707BAB882CBAE48677F97D */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_515D1F30D1503EB7D0D9757936504D265AE374D07E707BAB882CBAE48677F97D(void) {
    ALOGD("_HEVCdec_515D1F30D1503EB7D0D9757936504D265AE374D07E707BAB882CBAE48677F97D() called");
    return 0;
}

/* Demangled: _HEVCdec_B0F61F80584D809AE0F31625BDABD7C82738D93EDF9A5C5511116458786FAA71 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_B0F61F80584D809AE0F31625BDABD7C82738D93EDF9A5C5511116458786FAA71(void) {
    ALOGD("_HEVCdec_B0F61F80584D809AE0F31625BDABD7C82738D93EDF9A5C5511116458786FAA71() called");
    return 0;
}

/* Demangled: _HEVCdec_B0F61F80584D809AE0F31625BDABD7C8752F2A306822DEA5C032E52F74092C7DFEAB2E84E19886579CB14551FE38C1E4 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_B0F61F80584D809AE0F31625BDABD7C8752F2A306822DEA5C032E52F74092C7DFEAB2E84E19886579CB14551FE38C1E4(void) {
    ALOGD("_HEVCdec_B0F61F80584D809AE0F31625BDABD7C8752F2A306822DEA5C032E52F74092C7DFEAB2E84E19886579CB14551FE38C1E4() called");
    return 0;
}

/* Demangled: _HEVCdec_B0F61F80584D809AE0F31625BDABD7C84213B55D574477E1C483F70F2EEEA351AB492D8BDE9F642FDDA90AD6FC26ECEA */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_B0F61F80584D809AE0F31625BDABD7C84213B55D574477E1C483F70F2EEEA351AB492D8BDE9F642FDDA90AD6FC26ECEA(void) {
    ALOGD("_HEVCdec_B0F61F80584D809AE0F31625BDABD7C84213B55D574477E1C483F70F2EEEA351AB492D8BDE9F642FDDA90AD6FC26ECEA() called");
    return 0;
}

/* Demangled: _HEVCdec_B0F61F80584D809AE0F31625BDABD7C8B906C83FBECE5C23D065937EFF990980FEAB2E84E19886579CB14551FE38C1E4 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_B0F61F80584D809AE0F31625BDABD7C8B906C83FBECE5C23D065937EFF990980FEAB2E84E19886579CB14551FE38C1E4(void) {
    ALOGD("_HEVCdec_B0F61F80584D809AE0F31625BDABD7C8B906C83FBECE5C23D065937EFF990980FEAB2E84E19886579CB14551FE38C1E4() called");
    return 0;
}

/* Demangled: _HEVCdec_B0F61F80584D809AE0F31625BDABD7C8894D04609240F87FFDD2CDF62917AEC2AB492D8BDE9F642FDDA90AD6FC26ECEA */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_B0F61F80584D809AE0F31625BDABD7C8894D04609240F87FFDD2CDF62917AEC2AB492D8BDE9F642FDDA90AD6FC26ECEA(void) {
    ALOGD("_HEVCdec_B0F61F80584D809AE0F31625BDABD7C8894D04609240F87FFDD2CDF62917AEC2AB492D8BDE9F642FDDA90AD6FC26ECEA() called");
    return 0;
}

/* Demangled: _HEVCdec_B0F61F80584D809AE0F31625BDABD7C85EEA5B38B5B00F6A9D872B699D9CD389 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_B0F61F80584D809AE0F31625BDABD7C85EEA5B38B5B00F6A9D872B699D9CD389(void) {
    ALOGD("_HEVCdec_B0F61F80584D809AE0F31625BDABD7C85EEA5B38B5B00F6A9D872B699D9CD389() called");
    return 0;
}

/* Demangled: _HEVCdec_B0F61F80584D809AE0F31625BDABD7C8D26A07EED4895045E9B19E7F64C26BB0FEAB2E84E19886579CB14551FE38C1E4 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_B0F61F80584D809AE0F31625BDABD7C8D26A07EED4895045E9B19E7F64C26BB0FEAB2E84E19886579CB14551FE38C1E4(void) {
    ALOGD("_HEVCdec_B0F61F80584D809AE0F31625BDABD7C8D26A07EED4895045E9B19E7F64C26BB0FEAB2E84E19886579CB14551FE38C1E4() called");
    return 0;
}

/* Demangled: _HEVCdec_339F8BD7A38B358933850FC531BB4ED2 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_339F8BD7A38B358933850FC531BB4ED2(void) {
    ALOGD("_HEVCdec_339F8BD7A38B358933850FC531BB4ED2() called");
    return 0;
}

/* Demangled: _HEVCdec_1F0F7122762C54A68F6D99F9CBB7CFE5A3C620F24920DA078088D7973D17C8A0 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_1F0F7122762C54A68F6D99F9CBB7CFE5A3C620F24920DA078088D7973D17C8A0(void) {
    ALOGD("_HEVCdec_1F0F7122762C54A68F6D99F9CBB7CFE5A3C620F24920DA078088D7973D17C8A0() called");
    return 0;
}

/* Demangled: _HEVCdec_05CE70FD899CD9292071E5C20D38E1C85A7EE11225CD6D41D78B91E1FC3BFED9 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_05CE70FD899CD9292071E5C20D38E1C85A7EE11225CD6D41D78B91E1FC3BFED9(void) {
    ALOGD("_HEVCdec_05CE70FD899CD9292071E5C20D38E1C85A7EE11225CD6D41D78B91E1FC3BFED9() called");
    return 0;
}

/* Demangled: _HEVCdec_339F8BD7A38B358933850FC531BB4ED2049C5ADD80DE3779991D57B2100CC691 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_339F8BD7A38B358933850FC531BB4ED2049C5ADD80DE3779991D57B2100CC691(void) {
    ALOGD("_HEVCdec_339F8BD7A38B358933850FC531BB4ED2049C5ADD80DE3779991D57B2100CC691() called");
    return 0;
}

/* Demangled: _HEVCdec_05CE70FD899CD9292071E5C20D38E1C859F16D2B6AF60AAA7B70DCCB3503EEE0 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_05CE70FD899CD9292071E5C20D38E1C859F16D2B6AF60AAA7B70DCCB3503EEE0(void) {
    ALOGD("_HEVCdec_05CE70FD899CD9292071E5C20D38E1C859F16D2B6AF60AAA7B70DCCB3503EEE0() called");
    return 0;
}

/* Demangled: _HEVCdec_339F8BD7A38B358933850FC531BB4ED2441A6A5663D808151CA573F5EF50AF78 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_339F8BD7A38B358933850FC531BB4ED2441A6A5663D808151CA573F5EF50AF78(void) {
    ALOGD("_HEVCdec_339F8BD7A38B358933850FC531BB4ED2441A6A5663D808151CA573F5EF50AF78() called");
    return 0;
}

/* Demangled: _HEVCdec_05CE70FD899CD9292071E5C20D38E1C868F004079B5DBD12E117F07A27C4E0B1 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_05CE70FD899CD9292071E5C20D38E1C868F004079B5DBD12E117F07A27C4E0B1(void) {
    ALOGD("_HEVCdec_05CE70FD899CD9292071E5C20D38E1C868F004079B5DBD12E117F07A27C4E0B1() called");
    return 0;
}

/* Demangled: _HEVCdec_339F8BD7A38B358933850FC531BB4ED2F35DF394F87F24E33A6B245C14DEDCCD */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_339F8BD7A38B358933850FC531BB4ED2F35DF394F87F24E33A6B245C14DEDCCD(void) {
    ALOGD("_HEVCdec_339F8BD7A38B358933850FC531BB4ED2F35DF394F87F24E33A6B245C14DEDCCD() called");
    return 0;
}

/* Demangled: _HEVCdec_05CE70FD899CD9292071E5C20D38E1C8AFFD8B3B55361B29CEAF962B5E51A807FADE025F15A14AB68C7ADD16B127F528 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_05CE70FD899CD9292071E5C20D38E1C8AFFD8B3B55361B29CEAF962B5E51A807FADE025F15A14AB68C7ADD16B127F528(void) {
    ALOGD("_HEVCdec_05CE70FD899CD9292071E5C20D38E1C8AFFD8B3B55361B29CEAF962B5E51A807FADE025F15A14AB68C7ADD16B127F528() called");
    return 0;
}

/* Demangled: _HEVCdec_77AD689CF5E80D2CC9CA1B26C27BF8FA0BD9490DD07DFE4426EEB426CDE88DD9 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_77AD689CF5E80D2CC9CA1B26C27BF8FA0BD9490DD07DFE4426EEB426CDE88DD9(void) {
    ALOGD("_HEVCdec_77AD689CF5E80D2CC9CA1B26C27BF8FA0BD9490DD07DFE4426EEB426CDE88DD9() called");
    return 0;
}

/* Demangled: _HEVCdec_CCD7282630F5905800E63B74D484721AE977C6F0805085BFE8829A47B2665D35 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_CCD7282630F5905800E63B74D484721AE977C6F0805085BFE8829A47B2665D35(void) {
    ALOGD("_HEVCdec_CCD7282630F5905800E63B74D484721AE977C6F0805085BFE8829A47B2665D35() called");
    return 0;
}

/* Demangled: _HEVCdec_CCD7282630F5905800E63B74D484721A968E0A1A6546D6E99EB97EB648A46ED0 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_CCD7282630F5905800E63B74D484721A968E0A1A6546D6E99EB97EB648A46ED0(void) {
    ALOGD("_HEVCdec_CCD7282630F5905800E63B74D484721A968E0A1A6546D6E99EB97EB648A46ED0() called");
    return 0;
}

/* Demangled: _HEVCdec_CCD7282630F5905800E63B74D484721A3DDD47668DB70E18DCB3922A691E642F */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_CCD7282630F5905800E63B74D484721A3DDD47668DB70E18DCB3922A691E642F(void) {
    ALOGD("_HEVCdec_CCD7282630F5905800E63B74D484721A3DDD47668DB70E18DCB3922A691E642F() called");
    return 0;
}

/* Demangled: _HEVCdec_CCD7282630F5905800E63B74D484721AAE40AB2AB5CB51E11CCCC70E8ABFAA40 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_CCD7282630F5905800E63B74D484721AAE40AB2AB5CB51E11CCCC70E8ABFAA40(void) {
    ALOGD("_HEVCdec_CCD7282630F5905800E63B74D484721AAE40AB2AB5CB51E11CCCC70E8ABFAA40() called");
    return 0;
}

/* Demangled: _HEVCdec_CCD7282630F5905800E63B74D484721AFDC1D3009E941518E91AC1821E8CA5D6 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_CCD7282630F5905800E63B74D484721AFDC1D3009E941518E91AC1821E8CA5D6(void) {
    ALOGD("_HEVCdec_CCD7282630F5905800E63B74D484721AFDC1D3009E941518E91AC1821E8CA5D6() called");
    return 0;
}

/* Demangled: _HEVCdec_CCD7282630F5905800E63B74D484721A6FC3D9ACC5C506B73459C964BE32A357 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_CCD7282630F5905800E63B74D484721A6FC3D9ACC5C506B73459C964BE32A357(void) {
    ALOGD("_HEVCdec_CCD7282630F5905800E63B74D484721A6FC3D9ACC5C506B73459C964BE32A357() called");
    return 0;
}

/* Demangled: _HEVCdec_84FEEAFA404DAFB496942183CFF846C69254B312224E1613664B81B8C9B1CA47 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_84FEEAFA404DAFB496942183CFF846C69254B312224E1613664B81B8C9B1CA47(void) {
    ALOGD("_HEVCdec_84FEEAFA404DAFB496942183CFF846C69254B312224E1613664B81B8C9B1CA47() called");
    return 0;
}

/* Demangled: _HEVCdec_84FEEAFA404DAFB496942183CFF846C6B1A1FC4A10FF5DDBC422074720499C53 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_84FEEAFA404DAFB496942183CFF846C6B1A1FC4A10FF5DDBC422074720499C53(void) {
    ALOGD("_HEVCdec_84FEEAFA404DAFB496942183CFF846C6B1A1FC4A10FF5DDBC422074720499C53() called");
    return 0;
}

/* Demangled: _HEVCdec_CCD7282630F5905800E63B74D484721A9B6B8313A6FC1D029040132727603935 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_CCD7282630F5905800E63B74D484721A9B6B8313A6FC1D029040132727603935(void) {
    ALOGD("_HEVCdec_CCD7282630F5905800E63B74D484721A9B6B8313A6FC1D029040132727603935() called");
    return 0;
}

/* Demangled: _HEVCdec_118B0276ABA41A9737CA6FBB4F9F7A8CE573560859D2A90395A630176523C182 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_118B0276ABA41A9737CA6FBB4F9F7A8CE573560859D2A90395A630176523C182(void) {
    ALOGD("_HEVCdec_118B0276ABA41A9737CA6FBB4F9F7A8CE573560859D2A90395A630176523C182() called");
    return 0;
}

/* Demangled: _HEVCdec_14B30BF4C63EBC5762AB3179FBC38AA657C85E353BA37D080D9F96FB9D741417FEAB2E84E19886579CB14551FE38C1E4 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_14B30BF4C63EBC5762AB3179FBC38AA657C85E353BA37D080D9F96FB9D741417FEAB2E84E19886579CB14551FE38C1E4(void) {
    ALOGD("_HEVCdec_14B30BF4C63EBC5762AB3179FBC38AA657C85E353BA37D080D9F96FB9D741417FEAB2E84E19886579CB14551FE38C1E4() called");
    return 0;
}

/* Demangled: _HEVCdec_14B30BF4C63EBC5762AB3179FBC38AA61CD4363B6FC5BE555C78BAA26CF39C05 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_14B30BF4C63EBC5762AB3179FBC38AA61CD4363B6FC5BE555C78BAA26CF39C05(void) {
    ALOGD("_HEVCdec_14B30BF4C63EBC5762AB3179FBC38AA61CD4363B6FC5BE555C78BAA26CF39C05() called");
    return 0;
}

/* Demangled: _HEVCdec_84FEEAFA404DAFB496942183CFF846C61B6F89E3D1A7704CCEA64EE9EAA92C32 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_84FEEAFA404DAFB496942183CFF846C61B6F89E3D1A7704CCEA64EE9EAA92C32(void) {
    ALOGD("_HEVCdec_84FEEAFA404DAFB496942183CFF846C61B6F89E3D1A7704CCEA64EE9EAA92C32() called");
    return 0;
}

/* Demangled: _HEVCdec_14B30BF4C63EBC5762AB3179FBC38AA61F9F32A2BA29F0E79F8C20B3E9F840AE */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_14B30BF4C63EBC5762AB3179FBC38AA61F9F32A2BA29F0E79F8C20B3E9F840AE(void) {
    ALOGD("_HEVCdec_14B30BF4C63EBC5762AB3179FBC38AA61F9F32A2BA29F0E79F8C20B3E9F840AE() called");
    return 0;
}

/* Demangled: _HEVCdec_77AD689CF5E80D2CC9CA1B26C27BF8FAE7CE0BFEF9C9A123DC4448ACC61872D1F1FE3D75E7F4FA9B3AC56D9B3C17FB24 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_77AD689CF5E80D2CC9CA1B26C27BF8FAE7CE0BFEF9C9A123DC4448ACC61872D1F1FE3D75E7F4FA9B3AC56D9B3C17FB24(void) {
    ALOGD("_HEVCdec_77AD689CF5E80D2CC9CA1B26C27BF8FAE7CE0BFEF9C9A123DC4448ACC61872D1F1FE3D75E7F4FA9B3AC56D9B3C17FB24() called");
    return 0;
}

/* Demangled: _HEVCdec_B0F61F80584D809AE0F31625BDABD7C8104CC2C54FDDC4AF2527A0318B987E7FE35D142C0480616524F4CEFFD3FCDDED */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_B0F61F80584D809AE0F31625BDABD7C8104CC2C54FDDC4AF2527A0318B987E7FE35D142C0480616524F4CEFFD3FCDDED(void) {
    ALOGD("_HEVCdec_B0F61F80584D809AE0F31625BDABD7C8104CC2C54FDDC4AF2527A0318B987E7FE35D142C0480616524F4CEFFD3FCDDED() called");
    return 0;
}

/* Demangled: _HEVCdec_B0F61F80584D809AE0F31625BDABD7C8A740C0FB12BBD3C4FFFACFB5E8D28C9B6A5708B3E8E53797FCCC7B0194EA72BB */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_B0F61F80584D809AE0F31625BDABD7C8A740C0FB12BBD3C4FFFACFB5E8D28C9B6A5708B3E8E53797FCCC7B0194EA72BB(void) {
    ALOGD("_HEVCdec_B0F61F80584D809AE0F31625BDABD7C8A740C0FB12BBD3C4FFFACFB5E8D28C9B6A5708B3E8E53797FCCC7B0194EA72BB() called");
    return 0;
}

/* Demangled: _HEVCdec_B0F61F80584D809AE0F31625BDABD7C8BC60C88090C507FC5CB65812A22D6EE35998BCCA7DDB6D9D521C54A72C30558D */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_B0F61F80584D809AE0F31625BDABD7C8BC60C88090C507FC5CB65812A22D6EE35998BCCA7DDB6D9D521C54A72C30558D(void) {
    ALOGD("_HEVCdec_B0F61F80584D809AE0F31625BDABD7C8BC60C88090C507FC5CB65812A22D6EE35998BCCA7DDB6D9D521C54A72C30558D() called");
    return 0;
}

/* Demangled: _HEVCdec_B0F61F80584D809AE0F31625BDABD7C858972C92882D9823F6F1E729710D5EC05998BCCA7DDB6D9D521C54A72C30558D */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_B0F61F80584D809AE0F31625BDABD7C858972C92882D9823F6F1E729710D5EC05998BCCA7DDB6D9D521C54A72C30558D(void) {
    ALOGD("_HEVCdec_B0F61F80584D809AE0F31625BDABD7C858972C92882D9823F6F1E729710D5EC05998BCCA7DDB6D9D521C54A72C30558D() called");
    return 0;
}

/* Demangled: _HEVCdec_B0F61F80584D809AE0F31625BDABD7C8EB14F4628276E3D393503893634C59585998BCCA7DDB6D9D521C54A72C30558D */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_B0F61F80584D809AE0F31625BDABD7C8EB14F4628276E3D393503893634C59585998BCCA7DDB6D9D521C54A72C30558D(void) {
    ALOGD("_HEVCdec_B0F61F80584D809AE0F31625BDABD7C8EB14F4628276E3D393503893634C59585998BCCA7DDB6D9D521C54A72C30558D() called");
    return 0;
}

/* Demangled: _HEVCdec_B0F61F80584D809AE0F31625BDABD7C8104CC2C54FDDC4AF2527A0318B987E7F472336B800B55EA09D55D7BC2FA5D72E */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_B0F61F80584D809AE0F31625BDABD7C8104CC2C54FDDC4AF2527A0318B987E7F472336B800B55EA09D55D7BC2FA5D72E(void) {
    ALOGD("_HEVCdec_B0F61F80584D809AE0F31625BDABD7C8104CC2C54FDDC4AF2527A0318B987E7F472336B800B55EA09D55D7BC2FA5D72E() called");
    return 0;
}

/* Demangled: _HEVCdec_B0F61F80584D809AE0F31625BDABD7C8394078E9127EC746D25DCB4F5DEB01C75998BCCA7DDB6D9D521C54A72C30558D */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_B0F61F80584D809AE0F31625BDABD7C8394078E9127EC746D25DCB4F5DEB01C75998BCCA7DDB6D9D521C54A72C30558D(void) {
    ALOGD("_HEVCdec_B0F61F80584D809AE0F31625BDABD7C8394078E9127EC746D25DCB4F5DEB01C75998BCCA7DDB6D9D521C54A72C30558D() called");
    return 0;
}

/* Demangled: _HEVCdec_118B0276ABA41A9737CA6FBB4F9F7A8C4A456ED72D75AF288FBE7ED6C7DACF09B18DA3DF289A5A425AC883B8207ECECE */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_118B0276ABA41A9737CA6FBB4F9F7A8C4A456ED72D75AF288FBE7ED6C7DACF09B18DA3DF289A5A425AC883B8207ECECE(void) {
    ALOGD("_HEVCdec_118B0276ABA41A9737CA6FBB4F9F7A8C4A456ED72D75AF288FBE7ED6C7DACF09B18DA3DF289A5A425AC883B8207ECECE() called");
    return 0;
}

/* Demangled: _HEVCdec_B0F61F80584D809AE0F31625BDABD7C8AE067A36AFB1F39052370C6D6F4B380BFDC1D3009E941518E91AC1821E8CA5D6 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_B0F61F80584D809AE0F31625BDABD7C8AE067A36AFB1F39052370C6D6F4B380BFDC1D3009E941518E91AC1821E8CA5D6(void) {
    ALOGD("_HEVCdec_B0F61F80584D809AE0F31625BDABD7C8AE067A36AFB1F39052370C6D6F4B380BFDC1D3009E941518E91AC1821E8CA5D6() called");
    return 0;
}

/* Demangled: _HEVCdec_B0F61F80584D809AE0F31625BDABD7C8AE067A36AFB1F39052370C6D6F4B380B9254B312224E1613664B81B8C9B1CA47 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_B0F61F80584D809AE0F31625BDABD7C8AE067A36AFB1F39052370C6D6F4B380B9254B312224E1613664B81B8C9B1CA47(void) {
    ALOGD("_HEVCdec_B0F61F80584D809AE0F31625BDABD7C8AE067A36AFB1F39052370C6D6F4B380B9254B312224E1613664B81B8C9B1CA47() called");
    return 0;
}

/* Demangled: _HEVCdec_B0F61F80584D809AE0F31625BDABD7C8AE067A36AFB1F39052370C6D6F4B380BB1A1FC4A10FF5DDBC422074720499C53 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_B0F61F80584D809AE0F31625BDABD7C8AE067A36AFB1F39052370C6D6F4B380BB1A1FC4A10FF5DDBC422074720499C53(void) {
    ALOGD("_HEVCdec_B0F61F80584D809AE0F31625BDABD7C8AE067A36AFB1F39052370C6D6F4B380BB1A1FC4A10FF5DDBC422074720499C53() called");
    return 0;
}

/* Demangled: _HEVCdec_B0F61F80584D809AE0F31625BDABD7C8A79AE33784A85B54CE17AD831515182DB1A1FC4A10FF5DDBC422074720499C53 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_B0F61F80584D809AE0F31625BDABD7C8A79AE33784A85B54CE17AD831515182DB1A1FC4A10FF5DDBC422074720499C53(void) {
    ALOGD("_HEVCdec_B0F61F80584D809AE0F31625BDABD7C8A79AE33784A85B54CE17AD831515182DB1A1FC4A10FF5DDBC422074720499C53() called");
    return 0;
}

/* Demangled: _HEVCdec_77AD689CF5E80D2CC9CA1B26C27BF8FA21E4FF989FFCEFCF2FC880EF42D19698AF3CE6EBD472701E22C670AE7E456FBB */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_77AD689CF5E80D2CC9CA1B26C27BF8FA21E4FF989FFCEFCF2FC880EF42D19698AF3CE6EBD472701E22C670AE7E456FBB(void) {
    ALOGD("_HEVCdec_77AD689CF5E80D2CC9CA1B26C27BF8FA21E4FF989FFCEFCF2FC880EF42D19698AF3CE6EBD472701E22C670AE7E456FBB() called");
    return 0;
}

/* Demangled: _HEVCdec_92BDA6787A09CFD13894CB52E61679E7C05BDB21A2E225D9251B410F636A662766D22B273EAA61D2AD4B8F187A7C3494 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_92BDA6787A09CFD13894CB52E61679E7C05BDB21A2E225D9251B410F636A662766D22B273EAA61D2AD4B8F187A7C3494(void) {
    ALOGD("_HEVCdec_92BDA6787A09CFD13894CB52E61679E7C05BDB21A2E225D9251B410F636A662766D22B273EAA61D2AD4B8F187A7C3494() called");
    return 0;
}

/* Demangled: _HEVCdec_92BDA6787A09CFD13894CB52E61679E727D245BF6BDB6458D370C01253E243EF5998BCCA7DDB6D9D521C54A72C30558D */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_92BDA6787A09CFD13894CB52E61679E727D245BF6BDB6458D370C01253E243EF5998BCCA7DDB6D9D521C54A72C30558D(void) {
    ALOGD("_HEVCdec_92BDA6787A09CFD13894CB52E61679E727D245BF6BDB6458D370C01253E243EF5998BCCA7DDB6D9D521C54A72C30558D() called");
    return 0;
}

/* Demangled: _HEVCdec_92BDA6787A09CFD13894CB52E61679E749691CF1B54096A6AE903F1D68E26DA8AB8A269942CE8A43BE20290D2EA17C46 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_92BDA6787A09CFD13894CB52E61679E749691CF1B54096A6AE903F1D68E26DA8AB8A269942CE8A43BE20290D2EA17C46(void) {
    ALOGD("_HEVCdec_92BDA6787A09CFD13894CB52E61679E749691CF1B54096A6AE903F1D68E26DA8AB8A269942CE8A43BE20290D2EA17C46() called");
    return 0;
}

/* Demangled: _HEVCdec_92BDA6787A09CFD13894CB52E61679E7B5AC1F37A047C2576C1D23189248817BAB8A269942CE8A43BE20290D2EA17C46 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_92BDA6787A09CFD13894CB52E61679E7B5AC1F37A047C2576C1D23189248817BAB8A269942CE8A43BE20290D2EA17C46(void) {
    ALOGD("_HEVCdec_92BDA6787A09CFD13894CB52E61679E7B5AC1F37A047C2576C1D23189248817BAB8A269942CE8A43BE20290D2EA17C46() called");
    return 0;
}

/* Demangled: _HEVCdec_92BDA6787A09CFD13894CB52E61679E7D8BE705D4ED55AA0317CE7574B057916AB8A269942CE8A43BE20290D2EA17C46 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_92BDA6787A09CFD13894CB52E61679E7D8BE705D4ED55AA0317CE7574B057916AB8A269942CE8A43BE20290D2EA17C46(void) {
    ALOGD("_HEVCdec_92BDA6787A09CFD13894CB52E61679E7D8BE705D4ED55AA0317CE7574B057916AB8A269942CE8A43BE20290D2EA17C46() called");
    return 0;
}

/* Demangled: _HEVCdec_92BDA6787A09CFD13894CB52E61679E7C05BDB21A2E225D9251B410F636A66275E9C8CCEB17EEEDA5B158130DE53E117 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_92BDA6787A09CFD13894CB52E61679E7C05BDB21A2E225D9251B410F636A66275E9C8CCEB17EEEDA5B158130DE53E117(void) {
    ALOGD("_HEVCdec_92BDA6787A09CFD13894CB52E61679E7C05BDB21A2E225D9251B410F636A66275E9C8CCEB17EEEDA5B158130DE53E117() called");
    return 0;
}

/* Demangled: _HEVCdec_92BDA6787A09CFD13894CB52E61679E7B6330F959C4CF5C2A6EB510757463AFD947C7A1D3B9CF913334C4A5699F1AB59 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_92BDA6787A09CFD13894CB52E61679E7B6330F959C4CF5C2A6EB510757463AFD947C7A1D3B9CF913334C4A5699F1AB59(void) {
    ALOGD("_HEVCdec_92BDA6787A09CFD13894CB52E61679E7B6330F959C4CF5C2A6EB510757463AFD947C7A1D3B9CF913334C4A5699F1AB59() called");
    return 0;
}

/* Demangled: _HEVCdec_92BDA6787A09CFD13894CB52E61679E796E9C53573B33116E9DB091CAF708E1F947C7A1D3B9CF913334C4A5699F1AB59 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_92BDA6787A09CFD13894CB52E61679E796E9C53573B33116E9DB091CAF708E1F947C7A1D3B9CF913334C4A5699F1AB59(void) {
    ALOGD("_HEVCdec_92BDA6787A09CFD13894CB52E61679E796E9C53573B33116E9DB091CAF708E1F947C7A1D3B9CF913334C4A5699F1AB59() called");
    return 0;
}

/* Demangled: _HEVCdec_92BDA6787A09CFD13894CB52E61679E7766F0952DE93F485A6EEE8EC1C380AF3AB8A269942CE8A43BE20290D2EA17C46 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_92BDA6787A09CFD13894CB52E61679E7766F0952DE93F485A6EEE8EC1C380AF3AB8A269942CE8A43BE20290D2EA17C46(void) {
    ALOGD("_HEVCdec_92BDA6787A09CFD13894CB52E61679E7766F0952DE93F485A6EEE8EC1C380AF3AB8A269942CE8A43BE20290D2EA17C46() called");
    return 0;
}

/* Demangled: _HEVCdec_118B0276ABA41A9737CA6FBB4F9F7A8CE918520CB7E4E53C0EC86AA5399C21C9993168214C6754922A6A0CDE8F805D0A */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_118B0276ABA41A9737CA6FBB4F9F7A8CE918520CB7E4E53C0EC86AA5399C21C9993168214C6754922A6A0CDE8F805D0A(void) {
    ALOGD("_HEVCdec_118B0276ABA41A9737CA6FBB4F9F7A8CE918520CB7E4E53C0EC86AA5399C21C9993168214C6754922A6A0CDE8F805D0A() called");
    return 0;
}

/* Demangled: _HEVCdec_92BDA6787A09CFD13894CB52E61679E71FBDFEE3A6001BFB9A178E8638AAFF733075DD2B3146C6AF3A67D97F5F945631 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_92BDA6787A09CFD13894CB52E61679E71FBDFEE3A6001BFB9A178E8638AAFF733075DD2B3146C6AF3A67D97F5F945631(void) {
    ALOGD("_HEVCdec_92BDA6787A09CFD13894CB52E61679E71FBDFEE3A6001BFB9A178E8638AAFF733075DD2B3146C6AF3A67D97F5F945631() called");
    return 0;
}

/* Demangled: _HEVCdec_92BDA6787A09CFD13894CB52E61679E7091E5EF4360ACBD0F73BA5953D5444656A5708B3E8E53797FCCC7B0194EA72BB */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_92BDA6787A09CFD13894CB52E61679E7091E5EF4360ACBD0F73BA5953D5444656A5708B3E8E53797FCCC7B0194EA72BB(void) {
    ALOGD("_HEVCdec_92BDA6787A09CFD13894CB52E61679E7091E5EF4360ACBD0F73BA5953D5444656A5708B3E8E53797FCCC7B0194EA72BB() called");
    return 0;
}

/* Demangled: _HEVCdec_92BDA6787A09CFD13894CB52E61679E79B61588406DD6CFC0F66E3E8BCAD1102947C7A1D3B9CF913334C4A5699F1AB59 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_92BDA6787A09CFD13894CB52E61679E79B61588406DD6CFC0F66E3E8BCAD1102947C7A1D3B9CF913334C4A5699F1AB59(void) {
    ALOGD("_HEVCdec_92BDA6787A09CFD13894CB52E61679E79B61588406DD6CFC0F66E3E8BCAD1102947C7A1D3B9CF913334C4A5699F1AB59() called");
    return 0;
}

/* Demangled: _HEVCdec_92BDA6787A09CFD13894CB52E61679E7BD772D89F9B91BDD1E3C5CD52D9C553E6A5708B3E8E53797FCCC7B0194EA72BB */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_92BDA6787A09CFD13894CB52E61679E7BD772D89F9B91BDD1E3C5CD52D9C553E6A5708B3E8E53797FCCC7B0194EA72BB(void) {
    ALOGD("_HEVCdec_92BDA6787A09CFD13894CB52E61679E7BD772D89F9B91BDD1E3C5CD52D9C553E6A5708B3E8E53797FCCC7B0194EA72BB() called");
    return 0;
}

/* Demangled: _HEVCdec_77AD689CF5E80D2CC9CA1B26C27BF8FA21E4FF989FFCEFCF2FC880EF42D196981B48E6CEC23BB6DFB906722EA77AC96C26BACA0054A85C4E4D9EC1D5D9A78B98 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_77AD689CF5E80D2CC9CA1B26C27BF8FA21E4FF989FFCEFCF2FC880EF42D196981B48E6CEC23BB6DFB906722EA77AC96C26BACA0054A85C4E4D9EC1D5D9A78B98(void) {
    ALOGD("_HEVCdec_77AD689CF5E80D2CC9CA1B26C27BF8FA21E4FF989FFCEFCF2FC880EF42D196981B48E6CEC23BB6DFB906722EA77AC96C26BACA0054A85C4E4D9EC1D5D9A78B98() called");
    return 0;
}

/* Demangled: _HEVCdec_92BDA6787A09CFD13894CB52E61679E7658736DAF163237D3E0BC8CD6B1D0D525998BCCA7DDB6D9D521C54A72C30558D */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_92BDA6787A09CFD13894CB52E61679E7658736DAF163237D3E0BC8CD6B1D0D525998BCCA7DDB6D9D521C54A72C30558D(void) {
    ALOGD("_HEVCdec_92BDA6787A09CFD13894CB52E61679E7658736DAF163237D3E0BC8CD6B1D0D525998BCCA7DDB6D9D521C54A72C30558D() called");
    return 0;
}

/* Demangled: _HEVCdec_92BDA6787A09CFD13894CB52E61679E7F4F6442EB1381BF8B980D0FB120D954A6A5708B3E8E53797FCCC7B0194EA72BB */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_92BDA6787A09CFD13894CB52E61679E7F4F6442EB1381BF8B980D0FB120D954A6A5708B3E8E53797FCCC7B0194EA72BB(void) {
    ALOGD("_HEVCdec_92BDA6787A09CFD13894CB52E61679E7F4F6442EB1381BF8B980D0FB120D954A6A5708B3E8E53797FCCC7B0194EA72BB() called");
    return 0;
}

/* Demangled: _HEVCdec_92BDA6787A09CFD13894CB52E61679E7F1A954E657CCBDE01009BF662381D6545998BCCA7DDB6D9D521C54A72C30558D */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_92BDA6787A09CFD13894CB52E61679E7F1A954E657CCBDE01009BF662381D6545998BCCA7DDB6D9D521C54A72C30558D(void) {
    ALOGD("_HEVCdec_92BDA6787A09CFD13894CB52E61679E7F1A954E657CCBDE01009BF662381D6545998BCCA7DDB6D9D521C54A72C30558D() called");
    return 0;
}

/* Demangled: _HEVCdec_92BDA6787A09CFD13894CB52E61679E7E4CD181ECB85659170F5B5627A8177036A5708B3E8E53797FCCC7B0194EA72BB */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_92BDA6787A09CFD13894CB52E61679E7E4CD181ECB85659170F5B5627A8177036A5708B3E8E53797FCCC7B0194EA72BB(void) {
    ALOGD("_HEVCdec_92BDA6787A09CFD13894CB52E61679E7E4CD181ECB85659170F5B5627A8177036A5708B3E8E53797FCCC7B0194EA72BB() called");
    return 0;
}

/* Demangled: _HEVCdec_77AD689CF5E80D2CC9CA1B26C27BF8FA21E4FF989FFCEFCF2FC880EF42D19698FA572EC783AA75C7969D9C3A0355A4A9 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_77AD689CF5E80D2CC9CA1B26C27BF8FA21E4FF989FFCEFCF2FC880EF42D19698FA572EC783AA75C7969D9C3A0355A4A9(void) {
    ALOGD("_HEVCdec_77AD689CF5E80D2CC9CA1B26C27BF8FA21E4FF989FFCEFCF2FC880EF42D19698FA572EC783AA75C7969D9C3A0355A4A9() called");
    return 0;
}

/* Demangled: _HEVCdec_92BDA6787A09CFD13894CB52E61679E739D532CF52772FED5A1648DE0A8320A689BE1E4DAD5F3F74EE3DBE378797CF37 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_92BDA6787A09CFD13894CB52E61679E739D532CF52772FED5A1648DE0A8320A689BE1E4DAD5F3F74EE3DBE378797CF37(void) {
    ALOGD("_HEVCdec_92BDA6787A09CFD13894CB52E61679E739D532CF52772FED5A1648DE0A8320A689BE1E4DAD5F3F74EE3DBE378797CF37() called");
    return 0;
}

/* Demangled: _HEVCdec_92BDA6787A09CFD13894CB52E61679E739D532CF52772FED5A1648DE0A8320A6B657987580DEFC4AF2A56FB566F1937C */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_92BDA6787A09CFD13894CB52E61679E739D532CF52772FED5A1648DE0A8320A6B657987580DEFC4AF2A56FB566F1937C(void) {
    ALOGD("_HEVCdec_92BDA6787A09CFD13894CB52E61679E739D532CF52772FED5A1648DE0A8320A6B657987580DEFC4AF2A56FB566F1937C() called");
    return 0;
}

/* Demangled: _HEVCdec_92BDA6787A09CFD13894CB52E61679E739D532CF52772FED5A1648DE0A8320A6472336B800B55EA09D55D7BC2FA5D72E */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_92BDA6787A09CFD13894CB52E61679E739D532CF52772FED5A1648DE0A8320A6472336B800B55EA09D55D7BC2FA5D72E(void) {
    ALOGD("_HEVCdec_92BDA6787A09CFD13894CB52E61679E739D532CF52772FED5A1648DE0A8320A6472336B800B55EA09D55D7BC2FA5D72E() called");
    return 0;
}

/* Demangled: _HEVCdec_92BDA6787A09CFD13894CB52E61679E78CD9843409A4023EDED5E99C53271912E35D142C0480616524F4CEFFD3FCDDED */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_92BDA6787A09CFD13894CB52E61679E78CD9843409A4023EDED5E99C53271912E35D142C0480616524F4CEFFD3FCDDED(void) {
    ALOGD("_HEVCdec_92BDA6787A09CFD13894CB52E61679E78CD9843409A4023EDED5E99C53271912E35D142C0480616524F4CEFFD3FCDDED() called");
    return 0;
}

/* Demangled: _HEVCdec_92BDA6787A09CFD13894CB52E61679E78CD9843409A4023EDED5E99C53271912472336B800B55EA09D55D7BC2FA5D72E */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_92BDA6787A09CFD13894CB52E61679E78CD9843409A4023EDED5E99C53271912472336B800B55EA09D55D7BC2FA5D72E(void) {
    ALOGD("_HEVCdec_92BDA6787A09CFD13894CB52E61679E78CD9843409A4023EDED5E99C53271912472336B800B55EA09D55D7BC2FA5D72E() called");
    return 0;
}

/* Demangled: _HEVCdec_92BDA6787A09CFD13894CB52E61679E739D532CF52772FED5A1648DE0A8320A640BFBD6F5F8856DE86A91C3252110330 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_92BDA6787A09CFD13894CB52E61679E739D532CF52772FED5A1648DE0A8320A640BFBD6F5F8856DE86A91C3252110330(void) {
    ALOGD("_HEVCdec_92BDA6787A09CFD13894CB52E61679E739D532CF52772FED5A1648DE0A8320A640BFBD6F5F8856DE86A91C3252110330() called");
    return 0;
}

/* Demangled: _HEVCdec_92BDA6787A09CFD13894CB52E61679E739D532CF52772FED5A1648DE0A8320A6E35D142C0480616524F4CEFFD3FCDDED */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_92BDA6787A09CFD13894CB52E61679E739D532CF52772FED5A1648DE0A8320A6E35D142C0480616524F4CEFFD3FCDDED(void) {
    ALOGD("_HEVCdec_92BDA6787A09CFD13894CB52E61679E739D532CF52772FED5A1648DE0A8320A6E35D142C0480616524F4CEFFD3FCDDED() called");
    return 0;
}

/* Demangled: _HEVCdec_118B0276ABA41A9737CA6FBB4F9F7A8CE918520CB7E4E53C0EC86AA5399C21C9C6CEC05FA31E737142C6B02F1AB4E6AAEAAB25ABBF50F0A63D7355A68DF4088E */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_118B0276ABA41A9737CA6FBB4F9F7A8CE918520CB7E4E53C0EC86AA5399C21C9C6CEC05FA31E737142C6B02F1AB4E6AAEAAB25ABBF50F0A63D7355A68DF4088E(void) {
    ALOGD("_HEVCdec_118B0276ABA41A9737CA6FBB4F9F7A8CE918520CB7E4E53C0EC86AA5399C21C9C6CEC05FA31E737142C6B02F1AB4E6AAEAAB25ABBF50F0A63D7355A68DF4088E() called");
    return 0;
}

/* Demangled: _HEVCdec_92BDA6787A09CFD13894CB52E61679E7D19BB87DB3B2FEAB1CF8067B276DC4555998BCCA7DDB6D9D521C54A72C30558D */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_92BDA6787A09CFD13894CB52E61679E7D19BB87DB3B2FEAB1CF8067B276DC4555998BCCA7DDB6D9D521C54A72C30558D(void) {
    ALOGD("_HEVCdec_92BDA6787A09CFD13894CB52E61679E7D19BB87DB3B2FEAB1CF8067B276DC4555998BCCA7DDB6D9D521C54A72C30558D() called");
    return 0;
}

/* Demangled: _HEVCdec_118B0276ABA41A9737CA6FBB4F9F7A8CE918520CB7E4E53C0EC86AA5399C21C9E1176FD61FD51788CD3895D5CF632DE1AFBFED248D78AF139638855EB8ACD226 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_118B0276ABA41A9737CA6FBB4F9F7A8CE918520CB7E4E53C0EC86AA5399C21C9E1176FD61FD51788CD3895D5CF632DE1AFBFED248D78AF139638855EB8ACD226(void) {
    ALOGD("_HEVCdec_118B0276ABA41A9737CA6FBB4F9F7A8CE918520CB7E4E53C0EC86AA5399C21C9E1176FD61FD51788CD3895D5CF632DE1AFBFED248D78AF139638855EB8ACD226() called");
    return 0;
}

/* Demangled: _HEVCdec_92BDA6787A09CFD13894CB52E61679E7A7C9D40FC5E7A90CA8601BEB6AB575146FC3D9ACC5C506B73459C964BE32A357 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_92BDA6787A09CFD13894CB52E61679E7A7C9D40FC5E7A90CA8601BEB6AB575146FC3D9ACC5C506B73459C964BE32A357(void) {
    ALOGD("_HEVCdec_92BDA6787A09CFD13894CB52E61679E7A7C9D40FC5E7A90CA8601BEB6AB575146FC3D9ACC5C506B73459C964BE32A357() called");
    return 0;
}

/* Demangled: _HEVCdec_92BDA6787A09CFD13894CB52E61679E7A7C9D40FC5E7A90CA8601BEB6AB575143DDD47668DB70E18DCB3922A691E642F */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_92BDA6787A09CFD13894CB52E61679E7A7C9D40FC5E7A90CA8601BEB6AB575143DDD47668DB70E18DCB3922A691E642F(void) {
    ALOGD("_HEVCdec_92BDA6787A09CFD13894CB52E61679E7A7C9D40FC5E7A90CA8601BEB6AB575143DDD47668DB70E18DCB3922A691E642F() called");
    return 0;
}

/* Demangled: _HEVCdec_92BDA6787A09CFD13894CB52E61679E7A7C9D40FC5E7A90CA8601BEB6AB57514FDC1D3009E941518E91AC1821E8CA5D6 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_92BDA6787A09CFD13894CB52E61679E7A7C9D40FC5E7A90CA8601BEB6AB57514FDC1D3009E941518E91AC1821E8CA5D6(void) {
    ALOGD("_HEVCdec_92BDA6787A09CFD13894CB52E61679E7A7C9D40FC5E7A90CA8601BEB6AB57514FDC1D3009E941518E91AC1821E8CA5D6() called");
    return 0;
}

/* Demangled: _HEVCdec_CCD7282630F5905800E63B74D484721AAA6FB6B8706E13093E9A640545FDAD94 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_CCD7282630F5905800E63B74D484721AAA6FB6B8706E13093E9A640545FDAD94(void) {
    ALOGD("_HEVCdec_CCD7282630F5905800E63B74D484721AAA6FB6B8706E13093E9A640545FDAD94() called");
    return 0;
}

/* Demangled: _HEVCdec_14B30BF4C63EBC5762AB3179FBC38AA6499A17A4C108537083630FA5DC30D429 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_14B30BF4C63EBC5762AB3179FBC38AA6499A17A4C108537083630FA5DC30D429(void) {
    ALOGD("_HEVCdec_14B30BF4C63EBC5762AB3179FBC38AA6499A17A4C108537083630FA5DC30D429() called");
    return 0;
}

/* Demangled: _HEVCdec_339F8BD7A38B358933850FC531BB4ED26FF128D65E09509C956B1AEB223099C6259B2909D505FE41888E7557C8F90D97 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_339F8BD7A38B358933850FC531BB4ED26FF128D65E09509C956B1AEB223099C6259B2909D505FE41888E7557C8F90D97(void) {
    ALOGD("_HEVCdec_339F8BD7A38B358933850FC531BB4ED26FF128D65E09509C956B1AEB223099C6259B2909D505FE41888E7557C8F90D97() called");
    return 0;
}

/* Demangled: _HEVCdec_05CE70FD899CD9292071E5C20D38E1C8F0CECC15711917B467454138A4AEF06E008CE8B7DBE49937BA8CD678BFFC02FC */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_05CE70FD899CD9292071E5C20D38E1C8F0CECC15711917B467454138A4AEF06E008CE8B7DBE49937BA8CD678BFFC02FC(void) {
    ALOGD("_HEVCdec_05CE70FD899CD9292071E5C20D38E1C8F0CECC15711917B467454138A4AEF06E008CE8B7DBE49937BA8CD678BFFC02FC() called");
    return 0;
}

/* Demangled: _HEVCdec_77AD689CF5E80D2CC9CA1B26C27BF8FAE7CE0BFEF9C9A123DC4448ACC61872D1F0DDAC40CD2CCB23F16802BBA5904E3D */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_77AD689CF5E80D2CC9CA1B26C27BF8FAE7CE0BFEF9C9A123DC4448ACC61872D1F0DDAC40CD2CCB23F16802BBA5904E3D(void) {
    ALOGD("_HEVCdec_77AD689CF5E80D2CC9CA1B26C27BF8FAE7CE0BFEF9C9A123DC4448ACC61872D1F0DDAC40CD2CCB23F16802BBA5904E3D() called");
    return 0;
}

/* Demangled: _HEVCdec_B0F61F80584D809AE0F31625BDABD7C84B0DC2249A485B384A9576C1B646224106E6AFA340C8492E23812BD532C72A455998BCCA7DDB6D9D521C54A72C30558D */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_B0F61F80584D809AE0F31625BDABD7C84B0DC2249A485B384A9576C1B646224106E6AFA340C8492E23812BD532C72A455998BCCA7DDB6D9D521C54A72C30558D(void) {
    ALOGD("_HEVCdec_B0F61F80584D809AE0F31625BDABD7C84B0DC2249A485B384A9576C1B646224106E6AFA340C8492E23812BD532C72A455998BCCA7DDB6D9D521C54A72C30558D() called");
    return 0;
}

/* Demangled: _HEVCdec_B0F61F80584D809AE0F31625BDABD7C84B0DC2249A485B384A9576C1B6462241B8C4C69A213E0799BEB83F1ABE515360FEAB2E84E19886579CB14551FE38C1E4 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_B0F61F80584D809AE0F31625BDABD7C84B0DC2249A485B384A9576C1B6462241B8C4C69A213E0799BEB83F1ABE515360FEAB2E84E19886579CB14551FE38C1E4(void) {
    ALOGD("_HEVCdec_B0F61F80584D809AE0F31625BDABD7C84B0DC2249A485B384A9576C1B6462241B8C4C69A213E0799BEB83F1ABE515360FEAB2E84E19886579CB14551FE38C1E4() called");
    return 0;
}

/* Demangled: _HEVCdec_B0F61F80584D809AE0F31625BDABD7C84B0DC2249A485B384A9576C1B64622416184F053A223D9DD7EFD15447C7BC45AFEAB2E84E19886579CB14551FE38C1E4 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_B0F61F80584D809AE0F31625BDABD7C84B0DC2249A485B384A9576C1B64622416184F053A223D9DD7EFD15447C7BC45AFEAB2E84E19886579CB14551FE38C1E4(void) {
    ALOGD("_HEVCdec_B0F61F80584D809AE0F31625BDABD7C84B0DC2249A485B384A9576C1B64622416184F053A223D9DD7EFD15447C7BC45AFEAB2E84E19886579CB14551FE38C1E4() called");
    return 0;
}

/* Demangled: _HEVCdec_B0F61F80584D809AE0F31625BDABD7C84B0DC2249A485B384A9576C1B646224160F3E383BC741CDD99D35EB3A7E671A0FEAB2E84E19886579CB14551FE38C1E4 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_B0F61F80584D809AE0F31625BDABD7C84B0DC2249A485B384A9576C1B646224160F3E383BC741CDD99D35EB3A7E671A0FEAB2E84E19886579CB14551FE38C1E4(void) {
    ALOGD("_HEVCdec_B0F61F80584D809AE0F31625BDABD7C84B0DC2249A485B384A9576C1B646224160F3E383BC741CDD99D35EB3A7E671A0FEAB2E84E19886579CB14551FE38C1E4() called");
    return 0;
}

/* Demangled: _HEVCdec_B0F61F80584D809AE0F31625BDABD7C84B0DC2249A485B384A9576C1B6462241B43F85C35F4B0142CE3C2931CC496E2CFEAB2E84E19886579CB14551FE38C1E4 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_B0F61F80584D809AE0F31625BDABD7C84B0DC2249A485B384A9576C1B6462241B43F85C35F4B0142CE3C2931CC496E2CFEAB2E84E19886579CB14551FE38C1E4(void) {
    ALOGD("_HEVCdec_B0F61F80584D809AE0F31625BDABD7C84B0DC2249A485B384A9576C1B6462241B43F85C35F4B0142CE3C2931CC496E2CFEAB2E84E19886579CB14551FE38C1E4() called");
    return 0;
}

/* Demangled: _HEVCdec_B0F61F80584D809AE0F31625BDABD7C84B0DC2249A485B384A9576C1B6462241FEADC835947D16066B2E8EBF232204045998BCCA7DDB6D9D521C54A72C30558D */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_B0F61F80584D809AE0F31625BDABD7C84B0DC2249A485B384A9576C1B6462241FEADC835947D16066B2E8EBF232204045998BCCA7DDB6D9D521C54A72C30558D(void) {
    ALOGD("_HEVCdec_B0F61F80584D809AE0F31625BDABD7C84B0DC2249A485B384A9576C1B6462241FEADC835947D16066B2E8EBF232204045998BCCA7DDB6D9D521C54A72C30558D() called");
    return 0;
}

/* Demangled: _HEVCdec_B0F61F80584D809AE0F31625BDABD7C84B0DC2249A485B384A9576C1B646224123E726F91B97E516E9109B97D2FF503AAB492D8BDE9F642FDDA90AD6FC26ECEA */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_B0F61F80584D809AE0F31625BDABD7C84B0DC2249A485B384A9576C1B646224123E726F91B97E516E9109B97D2FF503AAB492D8BDE9F642FDDA90AD6FC26ECEA(void) {
    ALOGD("_HEVCdec_B0F61F80584D809AE0F31625BDABD7C84B0DC2249A485B384A9576C1B646224123E726F91B97E516E9109B97D2FF503AAB492D8BDE9F642FDDA90AD6FC26ECEA() called");
    return 0;
}

/* Demangled: _HEVCdec_118B0276ABA41A9737CA6FBB4F9F7A8C4A456ED72D75AF288FBE7ED6C7DACF0961C131C701DFBFEE61D68255C70E7695 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_118B0276ABA41A9737CA6FBB4F9F7A8C4A456ED72D75AF288FBE7ED6C7DACF0961C131C701DFBFEE61D68255C70E7695(void) {
    ALOGD("_HEVCdec_118B0276ABA41A9737CA6FBB4F9F7A8C4A456ED72D75AF288FBE7ED6C7DACF0961C131C701DFBFEE61D68255C70E7695() called");
    return 0;
}

/* Demangled: _HEVCdec_B0F61F80584D809AE0F31625BDABD7C8294A7D5316D0852FBB41A6656BA907CD2D07753F033529F8C845E91A7341531BB1A1FC4A10FF5DDBC422074720499C53 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_B0F61F80584D809AE0F31625BDABD7C8294A7D5316D0852FBB41A6656BA907CD2D07753F033529F8C845E91A7341531BB1A1FC4A10FF5DDBC422074720499C53(void) {
    ALOGD("_HEVCdec_B0F61F80584D809AE0F31625BDABD7C8294A7D5316D0852FBB41A6656BA907CD2D07753F033529F8C845E91A7341531BB1A1FC4A10FF5DDBC422074720499C53() called");
    return 0;
}

/* Demangled: _HEVCdec_B0F61F80584D809AE0F31625BDABD7C8294A7D5316D0852FBB41A6656BA907CDB02A935994C50892476A5681272A15C5B1D0BAE0D238A5A16F9E4B09C4FBA143 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_B0F61F80584D809AE0F31625BDABD7C8294A7D5316D0852FBB41A6656BA907CDB02A935994C50892476A5681272A15C5B1D0BAE0D238A5A16F9E4B09C4FBA143(void) {
    ALOGD("_HEVCdec_B0F61F80584D809AE0F31625BDABD7C8294A7D5316D0852FBB41A6656BA907CDB02A935994C50892476A5681272A15C5B1D0BAE0D238A5A16F9E4B09C4FBA143() called");
    return 0;
}

/* Demangled: _HEVCdec_B0F61F80584D809AE0F31625BDABD7C8294A7D5316D0852FBB41A6656BA907CDFB9DE9AC3906153CBDFE72F91B0BFC9CAB8A269942CE8A43BE20290D2EA17C46 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_B0F61F80584D809AE0F31625BDABD7C8294A7D5316D0852FBB41A6656BA907CDFB9DE9AC3906153CBDFE72F91B0BFC9CAB8A269942CE8A43BE20290D2EA17C46(void) {
    ALOGD("_HEVCdec_B0F61F80584D809AE0F31625BDABD7C8294A7D5316D0852FBB41A6656BA907CDFB9DE9AC3906153CBDFE72F91B0BFC9CAB8A269942CE8A43BE20290D2EA17C46() called");
    return 0;
}

/* Demangled: _HEVCdec_B0F61F80584D809AE0F31625BDABD7C8294A7D5316D0852FBB41A6656BA907CD18E8CB4AB8A45F3BCF0BDFAE9C2231DCB1A1FC4A10FF5DDBC422074720499C53 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_B0F61F80584D809AE0F31625BDABD7C8294A7D5316D0852FBB41A6656BA907CD18E8CB4AB8A45F3BCF0BDFAE9C2231DCB1A1FC4A10FF5DDBC422074720499C53(void) {
    ALOGD("_HEVCdec_B0F61F80584D809AE0F31625BDABD7C8294A7D5316D0852FBB41A6656BA907CD18E8CB4AB8A45F3BCF0BDFAE9C2231DCB1A1FC4A10FF5DDBC422074720499C53() called");
    return 0;
}

/* Demangled: _HEVCdec_B0F61F80584D809AE0F31625BDABD7C8294A7D5316D0852FBB41A6656BA907CD85635EC5840EBFC751A1EE58EA986D14B1D0BAE0D238A5A16F9E4B09C4FBA143 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_B0F61F80584D809AE0F31625BDABD7C8294A7D5316D0852FBB41A6656BA907CD85635EC5840EBFC751A1EE58EA986D14B1D0BAE0D238A5A16F9E4B09C4FBA143(void) {
    ALOGD("_HEVCdec_B0F61F80584D809AE0F31625BDABD7C8294A7D5316D0852FBB41A6656BA907CD85635EC5840EBFC751A1EE58EA986D14B1D0BAE0D238A5A16F9E4B09C4FBA143() called");
    return 0;
}

/* Demangled: _HEVCdec_B0F61F80584D809AE0F31625BDABD7C8294A7D5316D0852FBB41A6656BA907CDBF9BB040D2BA395EBD8D5EE305AB1D81B1D0BAE0D238A5A16F9E4B09C4FBA143 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_B0F61F80584D809AE0F31625BDABD7C8294A7D5316D0852FBB41A6656BA907CDBF9BB040D2BA395EBD8D5EE305AB1D81B1D0BAE0D238A5A16F9E4B09C4FBA143(void) {
    ALOGD("_HEVCdec_B0F61F80584D809AE0F31625BDABD7C8294A7D5316D0852FBB41A6656BA907CDBF9BB040D2BA395EBD8D5EE305AB1D81B1D0BAE0D238A5A16F9E4B09C4FBA143() called");
    return 0;
}

/* Demangled: _HEVCdec_B0F61F80584D809AE0F31625BDABD7C8294A7D5316D0852FBB41A6656BA907CDD50051215FB507BACF402E6E0180CE1DB1D0BAE0D238A5A16F9E4B09C4FBA143 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_B0F61F80584D809AE0F31625BDABD7C8294A7D5316D0852FBB41A6656BA907CDD50051215FB507BACF402E6E0180CE1DB1D0BAE0D238A5A16F9E4B09C4FBA143(void) {
    ALOGD("_HEVCdec_B0F61F80584D809AE0F31625BDABD7C8294A7D5316D0852FBB41A6656BA907CDD50051215FB507BACF402E6E0180CE1DB1D0BAE0D238A5A16F9E4B09C4FBA143() called");
    return 0;
}

/* Demangled: _HEVCdec_B0F61F80584D809AE0F31625BDABD7C8294A7D5316D0852FBB41A6656BA907CD6FD61BEFE5DEB44E79D851E46347A2E9B1D0BAE0D238A5A16F9E4B09C4FBA143 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_B0F61F80584D809AE0F31625BDABD7C8294A7D5316D0852FBB41A6656BA907CD6FD61BEFE5DEB44E79D851E46347A2E9B1D0BAE0D238A5A16F9E4B09C4FBA143(void) {
    ALOGD("_HEVCdec_B0F61F80584D809AE0F31625BDABD7C8294A7D5316D0852FBB41A6656BA907CD6FD61BEFE5DEB44E79D851E46347A2E9B1D0BAE0D238A5A16F9E4B09C4FBA143() called");
    return 0;
}

/* Demangled: _HEVCdec_B0F61F80584D809AE0F31625BDABD7C8294A7D5316D0852FBB41A6656BA907CD506B5DBB90818C36A274C41466BE19A1AB8A269942CE8A43BE20290D2EA17C46 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_B0F61F80584D809AE0F31625BDABD7C8294A7D5316D0852FBB41A6656BA907CD506B5DBB90818C36A274C41466BE19A1AB8A269942CE8A43BE20290D2EA17C46(void) {
    ALOGD("_HEVCdec_B0F61F80584D809AE0F31625BDABD7C8294A7D5316D0852FBB41A6656BA907CD506B5DBB90818C36A274C41466BE19A1AB8A269942CE8A43BE20290D2EA17C46() called");
    return 0;
}

/* Demangled: _HEVCdec_C43D6B5844E0C65FF842E5E1DBD1C396 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_C43D6B5844E0C65FF842E5E1DBD1C396(void) {
    ALOGD("_HEVCdec_C43D6B5844E0C65FF842E5E1DBD1C396() called");
    return 0;
}

/* Demangled: _HEVCdec_09F93E4098E849A69A9C4AF5B3650F086A5708B3E8E53797FCCC7B0194EA72BB */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_09F93E4098E849A69A9C4AF5B3650F086A5708B3E8E53797FCCC7B0194EA72BB(void) {
    ALOGD("_HEVCdec_09F93E4098E849A69A9C4AF5B3650F086A5708B3E8E53797FCCC7B0194EA72BB() called");
    return 0;
}

/* Demangled: _HEVCdec_E3B31574A0442EB075C2E57E17D9394A6A5708B3E8E53797FCCC7B0194EA72BB */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_E3B31574A0442EB075C2E57E17D9394A6A5708B3E8E53797FCCC7B0194EA72BB(void) {
    ALOGD("_HEVCdec_E3B31574A0442EB075C2E57E17D9394A6A5708B3E8E53797FCCC7B0194EA72BB() called");
    return 0;
}

/* Demangled: _HEVCdec_6D59EBF73733C23FE494DB40C9DE44B67D77FC1A47D65CEC2F9FE792811E5360 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_6D59EBF73733C23FE494DB40C9DE44B67D77FC1A47D65CEC2F9FE792811E5360(void) {
    ALOGD("_HEVCdec_6D59EBF73733C23FE494DB40C9DE44B67D77FC1A47D65CEC2F9FE792811E5360() called");
    return 0;
}

/* Demangled: _HEVCdec_171594421642851FA6A822771071ECE85CB18EA44C4632E0E92B34586DB9E6C8 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_171594421642851FA6A822771071ECE85CB18EA44C4632E0E92B34586DB9E6C8(void) {
    ALOGD("_HEVCdec_171594421642851FA6A822771071ECE85CB18EA44C4632E0E92B34586DB9E6C8() called");
    return 0;
}

/* Demangled: _HEVCdec_D13E5A5458C4545BE4A1DFCAA87C71A06A5708B3E8E53797FCCC7B0194EA72BB */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_D13E5A5458C4545BE4A1DFCAA87C71A06A5708B3E8E53797FCCC7B0194EA72BB(void) {
    ALOGD("_HEVCdec_D13E5A5458C4545BE4A1DFCAA87C71A06A5708B3E8E53797FCCC7B0194EA72BB() called");
    return 0;
}

/* Demangled: _HEVCdec_251BF3C99CDEF0CBC3FBBF7E48CE524FA54E522FEDF694A93BC53551A097578A */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_251BF3C99CDEF0CBC3FBBF7E48CE524FA54E522FEDF694A93BC53551A097578A(void) {
    ALOGD("_HEVCdec_251BF3C99CDEF0CBC3FBBF7E48CE524FA54E522FEDF694A93BC53551A097578A() called");
    return 0;
}

/* Demangled: _HEVCdec_92B54941FDB4E484F77FEB3B964AF54A5153C3EF205F429763BE8BA1F8E1B4F4 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_92B54941FDB4E484F77FEB3B964AF54A5153C3EF205F429763BE8BA1F8E1B4F4(void) {
    ALOGD("_HEVCdec_92B54941FDB4E484F77FEB3B964AF54A5153C3EF205F429763BE8BA1F8E1B4F4() called");
    return 0;
}

/* Demangled: _HEVCdec_825B10074A728FF089357F9DD7BF0FE6 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_825B10074A728FF089357F9DD7BF0FE6(void) {
    ALOGD("_HEVCdec_825B10074A728FF089357F9DD7BF0FE6() called");
    return 0;
}

/* Demangled: _HEVCdec_E96AE4572EAECC595B83329548006A7D */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_E96AE4572EAECC595B83329548006A7D(void) {
    ALOGD("_HEVCdec_E96AE4572EAECC595B83329548006A7D() called");
    return 0;
}

/* Demangled: _HEVCdec_9A836F6BE4F325F8BA3D4C38C36C5B48 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_9A836F6BE4F325F8BA3D4C38C36C5B48(void) {
    ALOGD("_HEVCdec_9A836F6BE4F325F8BA3D4C38C36C5B48() called");
    return 0;
}

/* Demangled: _HEVCdec_09A806FF3AFB3FA19410EDAA130367ECA624549AE081373A651B25399A51C406 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_09A806FF3AFB3FA19410EDAA130367ECA624549AE081373A651B25399A51C406(void) {
    ALOGD("_HEVCdec_09A806FF3AFB3FA19410EDAA130367ECA624549AE081373A651B25399A51C406() called");
    return 0;
}

/* Demangled: _HEVCdec_EBBECCEEF3B3E84AE26BC3512F13A8D0F5D5F395C75C885CEE217B2925418323 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_EBBECCEEF3B3E84AE26BC3512F13A8D0F5D5F395C75C885CEE217B2925418323(void) {
    ALOGD("_HEVCdec_EBBECCEEF3B3E84AE26BC3512F13A8D0F5D5F395C75C885CEE217B2925418323() called");
    return 0;
}

/* Demangled: _HEVCdec_6214D34EBC297ED56F3222FCE957DE4F993828CE76B2E9E09A2BBB12433C68C0 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_6214D34EBC297ED56F3222FCE957DE4F993828CE76B2E9E09A2BBB12433C68C0(void) {
    ALOGD("_HEVCdec_6214D34EBC297ED56F3222FCE957DE4F993828CE76B2E9E09A2BBB12433C68C0() called");
    return 0;
}

/* Demangled: _HEVCdec_B8C9DF73456CA8787EF1F18DED1B04FACA52E077E80ED4EB45F87BCCF8270A15 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_B8C9DF73456CA8787EF1F18DED1B04FACA52E077E80ED4EB45F87BCCF8270A15(void) {
    ALOGD("_HEVCdec_B8C9DF73456CA8787EF1F18DED1B04FACA52E077E80ED4EB45F87BCCF8270A15() called");
    return 0;
}

/* Demangled: _HEVCdec_5867C0B8FA823B0A8E7FDB3A11A28990 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_5867C0B8FA823B0A8E7FDB3A11A28990(void) {
    ALOGD("_HEVCdec_5867C0B8FA823B0A8E7FDB3A11A28990() called");
    return 0;
}

/* Demangled: _HEVCdec_859444B3FB22874426E98B396A079A3353238E2F28541E9C91B305498DE6CB85 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_859444B3FB22874426E98B396A079A3353238E2F28541E9C91B305498DE6CB85(void) {
    ALOGD("_HEVCdec_859444B3FB22874426E98B396A079A3353238E2F28541E9C91B305498DE6CB85() called");
    return 0;
}

/* Demangled: _HEVCdec_859444B3FB22874426E98B396A079A33168D122198E1AF24522EFE0A3591AD6E0CF6CD409EEF9843EBD244B90457EE9B */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_859444B3FB22874426E98B396A079A33168D122198E1AF24522EFE0A3591AD6E0CF6CD409EEF9843EBD244B90457EE9B(void) {
    ALOGD("_HEVCdec_859444B3FB22874426E98B396A079A33168D122198E1AF24522EFE0A3591AD6E0CF6CD409EEF9843EBD244B90457EE9B() called");
    return 0;
}

/* Demangled: _HEVCdec_859444B3FB22874426E98B396A079A332E1C529806E559AFDB412663D8188867 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_859444B3FB22874426E98B396A079A332E1C529806E559AFDB412663D8188867(void) {
    ALOGD("_HEVCdec_859444B3FB22874426E98B396A079A332E1C529806E559AFDB412663D8188867() called");
    return 0;
}

/* Demangled: _HEVCdec_B03D076BD9035DBA3768CFB7239AAF107EC1CED6A6596A93D19529CFF14CA94C */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_B03D076BD9035DBA3768CFB7239AAF107EC1CED6A6596A93D19529CFF14CA94C(void) {
    ALOGD("_HEVCdec_B03D076BD9035DBA3768CFB7239AAF107EC1CED6A6596A93D19529CFF14CA94C() called");
    return 0;
}

/* Demangled: _HEVCdec_4940027BEAE69295A506258C5A87C76BA8A5E28FA0EDFEB8A146CD805B2A1512 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_4940027BEAE69295A506258C5A87C76BA8A5E28FA0EDFEB8A146CD805B2A1512(void) {
    ALOGD("_HEVCdec_4940027BEAE69295A506258C5A87C76BA8A5E28FA0EDFEB8A146CD805B2A1512() called");
    return 0;
}

/* Demangled: _HEVCdec_B03D076BD9035DBA3768CFB7239AAF10B1D0BAE0D238A5A16F9E4B09C4FBA143 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_B03D076BD9035DBA3768CFB7239AAF10B1D0BAE0D238A5A16F9E4B09C4FBA143(void) {
    ALOGD("_HEVCdec_B03D076BD9035DBA3768CFB7239AAF10B1D0BAE0D238A5A16F9E4B09C4FBA143() called");
    return 0;
}

/* Demangled: _HEVCdec_4940027BEAE69295A506258C5A87C76BAB8A269942CE8A43BE20290D2EA17C46 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_4940027BEAE69295A506258C5A87C76BAB8A269942CE8A43BE20290D2EA17C46(void) {
    ALOGD("_HEVCdec_4940027BEAE69295A506258C5A87C76BAB8A269942CE8A43BE20290D2EA17C46() called");
    return 0;
}

/* Demangled: _HEVCdec_12A05F075AA9574E36509743A0079E76B1D0BAE0D238A5A16F9E4B09C4FBA143 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_12A05F075AA9574E36509743A0079E76B1D0BAE0D238A5A16F9E4B09C4FBA143(void) {
    ALOGD("_HEVCdec_12A05F075AA9574E36509743A0079E76B1D0BAE0D238A5A16F9E4B09C4FBA143() called");
    return 0;
}

/* Demangled: _HEVCdec_12A05F075AA9574E36509743A0079E76D32A1F7A421F227EDCF9C7999A2BFE23 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_12A05F075AA9574E36509743A0079E76D32A1F7A421F227EDCF9C7999A2BFE23(void) {
    ALOGD("_HEVCdec_12A05F075AA9574E36509743A0079E76D32A1F7A421F227EDCF9C7999A2BFE23() called");
    return 0;
}

/* Demangled: _HEVCdec_D1EDAA76EBA986F6559160082FCAA2C2AB8A269942CE8A43BE20290D2EA17C46 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_D1EDAA76EBA986F6559160082FCAA2C2AB8A269942CE8A43BE20290D2EA17C46(void) {
    ALOGD("_HEVCdec_D1EDAA76EBA986F6559160082FCAA2C2AB8A269942CE8A43BE20290D2EA17C46() called");
    return 0;
}

/* Demangled: _HEVCdec_D1EDAA76EBA986F6559160082FCAA2C20E6205933E3ABE6C237379E741968D9C */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_D1EDAA76EBA986F6559160082FCAA2C20E6205933E3ABE6C237379E741968D9C(void) {
    ALOGD("_HEVCdec_D1EDAA76EBA986F6559160082FCAA2C20E6205933E3ABE6C237379E741968D9C() called");
    return 0;
}

/* Demangled: _HEVCdec_D1EDAA76EBA986F6559160082FCAA2C26373107E6C9461E51C80E354B9F301B4 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_D1EDAA76EBA986F6559160082FCAA2C26373107E6C9461E51C80E354B9F301B4(void) {
    ALOGD("_HEVCdec_D1EDAA76EBA986F6559160082FCAA2C26373107E6C9461E51C80E354B9F301B4() called");
    return 0;
}

/* Demangled: _HEVCdec_A44063566620981F4AF0D74B619A27A60E6205933E3ABE6C237379E741968D9C */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_A44063566620981F4AF0D74B619A27A60E6205933E3ABE6C237379E741968D9C(void) {
    ALOGD("_HEVCdec_A44063566620981F4AF0D74B619A27A60E6205933E3ABE6C237379E741968D9C() called");
    return 0;
}

/* Demangled: _HEVCdec_A44063566620981F4AF0D74B619A27A6ED45B476884AE4AD7F2EA7DEB1A76B4A */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_A44063566620981F4AF0D74B619A27A6ED45B476884AE4AD7F2EA7DEB1A76B4A(void) {
    ALOGD("_HEVCdec_A44063566620981F4AF0D74B619A27A6ED45B476884AE4AD7F2EA7DEB1A76B4A() called");
    return 0;
}

/* Demangled: _HEVCdec_A44063566620981F4AF0D74B619A27A6AB8A269942CE8A43BE20290D2EA17C46 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_A44063566620981F4AF0D74B619A27A6AB8A269942CE8A43BE20290D2EA17C46(void) {
    ALOGD("_HEVCdec_A44063566620981F4AF0D74B619A27A6AB8A269942CE8A43BE20290D2EA17C46() called");
    return 0;
}

/* Demangled: _HEVCdec_A44063566620981F4AF0D74B619A27A66373107E6C9461E51C80E354B9F301B4 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_A44063566620981F4AF0D74B619A27A66373107E6C9461E51C80E354B9F301B4(void) {
    ALOGD("_HEVCdec_A44063566620981F4AF0D74B619A27A66373107E6C9461E51C80E354B9F301B4() called");
    return 0;
}

/* Exported Object: T32 */
extern "C" __attribute__((visibility("default"))) void* T32 = NULL;

/* Exported Object: T16 */
extern "C" __attribute__((visibility("default"))) void* T16 = NULL;

/* Exported Object: T8 */
extern "C" __attribute__((visibility("default"))) void* T8 = NULL;

/* Exported Object: T4 */
extern "C" __attribute__((visibility("default"))) void* T4 = NULL;

/* Demangled: _HEVCdec_14B30BF4C63EBC5762AB3179FBC38AA6A6459AA543BF5E9AE054607EA232ECCF */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_14B30BF4C63EBC5762AB3179FBC38AA6A6459AA543BF5E9AE054607EA232ECCF(void) {
    ALOGD("_HEVCdec_14B30BF4C63EBC5762AB3179FBC38AA6A6459AA543BF5E9AE054607EA232ECCF() called");
    return 0;
}

/* Demangled: _HEVCdec_CCD7282630F5905800E63B74D484721A29256F05CFACE5540F69B1B517680337 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_CCD7282630F5905800E63B74D484721A29256F05CFACE5540F69B1B517680337(void) {
    ALOGD("_HEVCdec_CCD7282630F5905800E63B74D484721A29256F05CFACE5540F69B1B517680337() called");
    return 0;
}

/* Demangled: _HEVCdec_B0F61F80584D809AE0F31625BDABD7C8AE067A36AFB1F39052370C6D6F4B380BAE40AB2AB5CB51E11CCCC70E8ABFAA40 */
extern "C" __attribute__((visibility("default"))) int _HEVCdec_B0F61F80584D809AE0F31625BDABD7C8AE067A36AFB1F39052370C6D6F4B380BAE40AB2AB5CB51E11CCCC70E8ABFAA40(void) {
    ALOGD("_HEVCdec_B0F61F80584D809AE0F31625BDABD7C8AE067A36AFB1F39052370C6D6F4B380BAE40AB2AB5CB51E11CCCC70E8ABFAA40() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

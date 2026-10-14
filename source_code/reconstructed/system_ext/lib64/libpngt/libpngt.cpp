/*
 * Reverse-Engineered Source for: libpngt.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libpngt"

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
#include "libpngt.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: png_fixed_error */
extern "C" __attribute__((visibility("default"))) int png_fixed_error(void) {
    ALOGD("png_fixed_error() called");
    return 0;
}

/* Demangled: png_get_y_offset_inches */
extern "C" __attribute__((visibility("default"))) int png_get_y_offset_inches(void) {
    ALOGD("png_get_y_offset_inches() called");
    return 0;
}

/* Demangled: png_set_swap_alpha */
extern "C" __attribute__((visibility("default"))) int png_set_swap_alpha(void) {
    ALOGD("png_set_swap_alpha() called");
    return 0;
}

/* Demangled: png_colorspace_set_ICC */
extern "C" __attribute__((visibility("default"))) int png_colorspace_set_ICC(void) {
    ALOGD("png_colorspace_set_ICC() called");
    return 0;
}

/* Demangled: png_read_start_row */
extern "C" __attribute__((visibility("default"))) int png_read_start_row(void) {
    ALOGD("png_read_start_row() called");
    return 0;
}

/* Demangled: png_set_background_fixed */
extern "C" __attribute__((visibility("default"))) int png_set_background_fixed(void) {
    ALOGD("png_set_background_fixed() called");
    return 0;
}

/* Demangled: png_set_sPLT */
extern "C" __attribute__((visibility("default"))) int png_set_sPLT(void) {
    ALOGD("png_set_sPLT() called");
    return 0;
}

/* Demangled: png_flush */
extern "C" __attribute__((visibility("default"))) int png_flush(void) {
    ALOGD("png_flush() called");
    return 0;
}

/* Demangled: png_colorspace_set_endpoints */
extern "C" __attribute__((visibility("default"))) int png_colorspace_set_endpoints(void) {
    ALOGD("png_colorspace_set_endpoints() called");
    return 0;
}

/* Demangled: png_get_pixel_aspect_ratio_fixed */
extern "C" __attribute__((visibility("default"))) int png_get_pixel_aspect_ratio_fixed(void) {
    ALOGD("png_get_pixel_aspect_ratio_fixed() called");
    return 0;
}

/* Demangled: png_set_gAMA */
extern "C" __attribute__((visibility("default"))) int png_set_gAMA(void) {
    ALOGD("png_set_gAMA() called");
    return 0;
}

/* Demangled: png_create_write_struct_2 */
extern "C" __attribute__((visibility("default"))) int png_create_write_struct_2(void) {
    ALOGD("png_create_write_struct_2() called");
    return 0;
}

/* Demangled: png_create_png_struct */
extern "C" __attribute__((visibility("default"))) int png_create_png_struct(void) {
    ALOGD("png_create_png_struct() called");
    return 0;
}

/* Demangled: png_handle_as_unknown */
extern "C" __attribute__((visibility("default"))) int png_handle_as_unknown(void) {
    ALOGD("png_handle_as_unknown() called");
    return 0;
}

/* Demangled: png_progressive_combine_row */
extern "C" __attribute__((visibility("default"))) int png_progressive_combine_row(void) {
    ALOGD("png_progressive_combine_row() called");
    return 0;
}

/* Demangled: png_set_palette_to_rgb */
extern "C" __attribute__((visibility("default"))) int png_set_palette_to_rgb(void) {
    ALOGD("png_set_palette_to_rgb() called");
    return 0;
}

/* Demangled: png_icc_check_length */
extern "C" __attribute__((visibility("default"))) int png_icc_check_length(void) {
    ALOGD("png_icc_check_length() called");
    return 0;
}

/* Demangled: png_get_image_width */
extern "C" __attribute__((visibility("default"))) int png_get_image_width(void) {
    ALOGD("png_get_image_width() called");
    return 0;
}

/* Demangled: png_set_read_status_fn */
extern "C" __attribute__((visibility("default"))) int png_set_read_status_fn(void) {
    ALOGD("png_set_read_status_fn() called");
    return 0;
}

/* Demangled: png_get_bit_depth */
extern "C" __attribute__((visibility("default"))) int png_get_bit_depth(void) {
    ALOGD("png_get_bit_depth() called");
    return 0;
}

/* Demangled: png_ascii_from_fp */
extern "C" __attribute__((visibility("default"))) int png_ascii_from_fp(void) {
    ALOGD("png_ascii_from_fp() called");
    return 0;
}

/* Demangled: png_set_cHRM_XYZ */
extern "C" __attribute__((visibility("default"))) int png_set_cHRM_XYZ(void) {
    ALOGD("png_set_cHRM_XYZ() called");
    return 0;
}

/* Demangled: png_write_tIME */
extern "C" __attribute__((visibility("default"))) int png_write_tIME(void) {
    ALOGD("png_write_tIME() called");
    return 0;
}

/* Demangled: png_get_y_pixels_per_meter */
extern "C" __attribute__((visibility("default"))) int png_get_y_pixels_per_meter(void) {
    ALOGD("png_get_y_pixels_per_meter() called");
    return 0;
}

/* Demangled: png_set_bgr */
extern "C" __attribute__((visibility("default"))) int png_set_bgr(void) {
    ALOGD("png_set_bgr() called");
    return 0;
}

/* Demangled: png_colorspace_sync */
extern "C" __attribute__((visibility("default"))) int png_colorspace_sync(void) {
    ALOGD("png_colorspace_sync() called");
    return 0;
}

/* Demangled: png_get_uint_16 */
extern "C" __attribute__((visibility("default"))) int png_get_uint_16(void) {
    ALOGD("png_get_uint_16() called");
    return 0;
}

/* Demangled: png_convert_from_time_t */
extern "C" __attribute__((visibility("default"))) int png_convert_from_time_t(void) {
    ALOGD("png_convert_from_time_t() called");
    return 0;
}

/* Demangled: png_chunk_report */
extern "C" __attribute__((visibility("default"))) int png_chunk_report(void) {
    ALOGD("png_chunk_report() called");
    return 0;
}

/* Demangled: png_realloc_array */
extern "C" __attribute__((visibility("default"))) int png_realloc_array(void) {
    ALOGD("png_realloc_array() called");
    return 0;
}

/* Demangled: png_image_finish_read */
extern "C" __attribute__((visibility("default"))) int png_image_finish_read(void) {
    ALOGD("png_image_finish_read() called");
    return 0;
}

/* Demangled: png_write_find_filter */
extern "C" __attribute__((visibility("default"))) int png_write_find_filter(void) {
    ALOGD("png_write_find_filter() called");
    return 0;
}

/* Demangled: png_muldiv */
extern "C" __attribute__((visibility("default"))) int png_muldiv(void) {
    ALOGD("png_muldiv() called");
    return 0;
}

/* Demangled: png_get_x_offset_microns */
extern "C" __attribute__((visibility("default"))) int png_get_x_offset_microns(void) {
    ALOGD("png_get_x_offset_microns() called");
    return 0;
}

/* Demangled: png_image_begin_read_from_memory */
extern "C" __attribute__((visibility("default"))) int png_image_begin_read_from_memory(void) {
    ALOGD("png_image_begin_read_from_memory() called");
    return 0;
}

/* Demangled: png_free */
extern "C" __attribute__((visibility("default"))) int png_free(void) {
    ALOGD("png_free() called");
    return 0;
}

/* Demangled: png_sig_cmp */
extern "C" __attribute__((visibility("default"))) int png_sig_cmp(void) {
    ALOGD("png_sig_cmp() called");
    return 0;
}

/* Demangled: png_get_rows */
extern "C" __attribute__((visibility("default"))) int png_get_rows(void) {
    ALOGD("png_get_rows() called");
    return 0;
}

/* Demangled: png_combine_row */
extern "C" __attribute__((visibility("default"))) int png_combine_row(void) {
    ALOGD("png_combine_row() called");
    return 0;
}

/* Demangled: png_handle_sPLT */
extern "C" __attribute__((visibility("default"))) int png_handle_sPLT(void) {
    ALOGD("png_handle_sPLT() called");
    return 0;
}

/* Demangled: png_set_read_fn */
extern "C" __attribute__((visibility("default"))) int png_set_read_fn(void) {
    ALOGD("png_set_read_fn() called");
    return 0;
}

/* Demangled: png_set_packing */
extern "C" __attribute__((visibility("default"))) int png_set_packing(void) {
    ALOGD("png_set_packing() called");
    return 0;
}

/* Demangled: png_do_invert */
extern "C" __attribute__((visibility("default"))) int png_do_invert(void) {
    ALOGD("png_do_invert() called");
    return 0;
}

/* Demangled: png_set_tIME */
extern "C" __attribute__((visibility("default"))) int png_set_tIME(void) {
    ALOGD("png_set_tIME() called");
    return 0;
}

/* Demangled: png_get_io_state */
extern "C" __attribute__((visibility("default"))) int png_get_io_state(void) {
    ALOGD("png_get_io_state() called");
    return 0;
}

/* Demangled: png_handle_gAMA */
extern "C" __attribute__((visibility("default"))) int png_handle_gAMA(void) {
    ALOGD("png_handle_gAMA() called");
    return 0;
}

/* Demangled: png_read_finish_row */
extern "C" __attribute__((visibility("default"))) int png_read_finish_row(void) {
    ALOGD("png_read_finish_row() called");
    return 0;
}

/* Demangled: png_set_sCAL_fixed */
extern "C" __attribute__((visibility("default"))) int png_set_sCAL_fixed(void) {
    ALOGD("png_set_sCAL_fixed() called");
    return 0;
}

/* Demangled: png_set_user_limits */
extern "C" __attribute__((visibility("default"))) int png_set_user_limits(void) {
    ALOGD("png_set_user_limits() called");
    return 0;
}

/* Demangled: png_read_filter_row_avg3_neon */
extern "C" __attribute__((visibility("default"))) int png_read_filter_row_avg3_neon(void) {
    ALOGD("png_read_filter_row_avg3_neon() called");
    return 0;
}

/* Demangled: png_benign_error */
extern "C" __attribute__((visibility("default"))) int png_benign_error(void) {
    ALOGD("png_benign_error() called");
    return 0;
}

/* Demangled: png_malloc */
extern "C" __attribute__((visibility("default"))) int png_malloc(void) {
    ALOGD("png_malloc() called");
    return 0;
}

/* Demangled: png_reciprocal2 */
extern "C" __attribute__((visibility("default"))) int png_reciprocal2(void) {
    ALOGD("png_reciprocal2() called");
    return 0;
}

/* Demangled: png_get_tRNS */
extern "C" __attribute__((visibility("default"))) int png_get_tRNS(void) {
    ALOGD("png_get_tRNS() called");
    return 0;
}

/* Demangled: png_check_chunk_name */
extern "C" __attribute__((visibility("default"))) int png_check_chunk_name(void) {
    ALOGD("png_check_chunk_name() called");
    return 0;
}

/* Demangled: png_colorspace_set_sRGB */
extern "C" __attribute__((visibility("default"))) int png_colorspace_set_sRGB(void) {
    ALOGD("png_colorspace_set_sRGB() called");
    return 0;
}

/* Demangled: png_safecat */
extern "C" __attribute__((visibility("default"))) int png_safecat(void) {
    ALOGD("png_safecat() called");
    return 0;
}

/* Demangled: png_user_version_check */
extern "C" __attribute__((visibility("default"))) int png_user_version_check(void) {
    ALOGD("png_user_version_check() called");
    return 0;
}

/* Demangled: png_push_read_chunk */
extern "C" __attribute__((visibility("default"))) int png_push_read_chunk(void) {
    ALOGD("png_push_read_chunk() called");
    return 0;
}

/* Demangled: png_colorspace_set_gamma */
extern "C" __attribute__((visibility("default"))) int png_colorspace_set_gamma(void) {
    ALOGD("png_colorspace_set_gamma() called");
    return 0;
}

/* Demangled: png_get_compression_type */
extern "C" __attribute__((visibility("default"))) int png_get_compression_type(void) {
    ALOGD("png_get_compression_type() called");
    return 0;
}

/* Demangled: png_check_keyword */
extern "C" __attribute__((visibility("default"))) int png_check_keyword(void) {
    ALOGD("png_check_keyword() called");
    return 0;
}

/* Demangled: png_calculate_crc */
extern "C" __attribute__((visibility("default"))) int png_calculate_crc(void) {
    ALOGD("png_calculate_crc() called");
    return 0;
}

/* Demangled: png_init_io */
extern "C" __attribute__((visibility("default"))) int png_init_io(void) {
    ALOGD("png_init_io() called");
    return 0;
}

/* Demangled: png_get_bKGD */
extern "C" __attribute__((visibility("default"))) int png_get_bKGD(void) {
    ALOGD("png_get_bKGD() called");
    return 0;
}

/* Demangled: png_default_read_data */
extern "C" __attribute__((visibility("default"))) int png_default_read_data(void) {
    ALOGD("png_default_read_data() called");
    return 0;
}

/* Demangled: png_set_gamma_fixed */
extern "C" __attribute__((visibility("default"))) int png_set_gamma_fixed(void) {
    ALOGD("png_set_gamma_fixed() called");
    return 0;
}

/* Demangled: png_colorspace_sync_info */
extern "C" __attribute__((visibility("default"))) int png_colorspace_sync_info(void) {
    ALOGD("png_colorspace_sync_info() called");
    return 0;
}

/* Demangled: png_get_sCAL_s */
extern "C" __attribute__((visibility("default"))) int png_get_sCAL_s(void) {
    ALOGD("png_get_sCAL_s() called");
    return 0;
}

/* Demangled: png_set_keep_unknown_chunks */
extern "C" __attribute__((visibility("default"))) int png_set_keep_unknown_chunks(void) {
    ALOGD("png_set_keep_unknown_chunks() called");
    return 0;
}

/* Demangled: png_do_strip_channel */
extern "C" __attribute__((visibility("default"))) int png_do_strip_channel(void) {
    ALOGD("png_do_strip_channel() called");
    return 0;
}

/* Demangled: png_write_chunk_data */
extern "C" __attribute__((visibility("default"))) int png_write_chunk_data(void) {
    ALOGD("png_write_chunk_data() called");
    return 0;
}

/* Demangled: png_malloc_warn */
extern "C" __attribute__((visibility("default"))) int png_malloc_warn(void) {
    ALOGD("png_malloc_warn() called");
    return 0;
}

/* Demangled: png_safe_execute */
extern "C" __attribute__((visibility("default"))) int png_safe_execute(void) {
    ALOGD("png_safe_execute() called");
    return 0;
}

/* Demangled: png_get_pCAL */
extern "C" __attribute__((visibility("default"))) int png_get_pCAL(void) {
    ALOGD("png_get_pCAL() called");
    return 0;
}

/* Demangled: png_read_info */
extern "C" __attribute__((visibility("default"))) int png_read_info(void) {
    ALOGD("png_read_info() called");
    return 0;
}

/* Demangled: png_set_sig_bytes */
extern "C" __attribute__((visibility("default"))) int png_set_sig_bytes(void) {
    ALOGD("png_set_sig_bytes() called");
    return 0;
}

/* Demangled: png_get_error_ptr */
extern "C" __attribute__((visibility("default"))) int png_get_error_ptr(void) {
    ALOGD("png_get_error_ptr() called");
    return 0;
}

/* Demangled: png_push_read_IDAT */
extern "C" __attribute__((visibility("default"))) int png_push_read_IDAT(void) {
    ALOGD("png_push_read_IDAT() called");
    return 0;
}

/* Demangled: png_set_user_transform_info */
extern "C" __attribute__((visibility("default"))) int png_set_user_transform_info(void) {
    ALOGD("png_set_user_transform_info() called");
    return 0;
}

/* Demangled: png_set_sRGB_gAMA_and_cHRM */
extern "C" __attribute__((visibility("default"))) int png_set_sRGB_gAMA_and_cHRM(void) {
    ALOGD("png_set_sRGB_gAMA_and_cHRM() called");
    return 0;
}

/* Demangled: png_do_write_interlace */
extern "C" __attribute__((visibility("default"))) int png_do_write_interlace(void) {
    ALOGD("png_do_write_interlace() called");
    return 0;
}

/* Demangled: png_check_IHDR */
extern "C" __attribute__((visibility("default"))) int png_check_IHDR(void) {
    ALOGD("png_check_IHDR() called");
    return 0;
}

/* Demangled: png_get_copyright */
extern "C" __attribute__((visibility("default"))) int png_get_copyright(void) {
    ALOGD("png_get_copyright() called");
    return 0;
}

/* Demangled: png_get_compression_buffer_size */
extern "C" __attribute__((visibility("default"))) int png_get_compression_buffer_size(void) {
    ALOGD("png_get_compression_buffer_size() called");
    return 0;
}

/* Demangled: png_handle_tIME */
extern "C" __attribute__((visibility("default"))) int png_handle_tIME(void) {
    ALOGD("png_handle_tIME() called");
    return 0;
}

/* Demangled: png_read_IDAT_data */
extern "C" __attribute__((visibility("default"))) int png_read_IDAT_data(void) {
    ALOGD("png_read_IDAT_data() called");
    return 0;
}

/* Demangled: png_set_text */
extern "C" __attribute__((visibility("default"))) int png_set_text(void) {
    ALOGD("png_set_text() called");
    return 0;
}

/* Demangled: png_default_flush */
extern "C" __attribute__((visibility("default"))) int png_default_flush(void) {
    ALOGD("png_default_flush() called");
    return 0;
}

/* Demangled: png_get_pHYs */
extern "C" __attribute__((visibility("default"))) int png_get_pHYs(void) {
    ALOGD("png_get_pHYs() called");
    return 0;
}

/* Demangled: png_get_x_pixels_per_meter */
extern "C" __attribute__((visibility("default"))) int png_get_x_pixels_per_meter(void) {
    ALOGD("png_get_x_pixels_per_meter() called");
    return 0;
}

/* Demangled: png_get_y_pixels_per_inch */
extern "C" __attribute__((visibility("default"))) int png_get_y_pixels_per_inch(void) {
    ALOGD("png_get_y_pixels_per_inch() called");
    return 0;
}

/* Demangled: png_handle_unknown */
extern "C" __attribute__((visibility("default"))) int png_handle_unknown(void) {
    ALOGD("png_handle_unknown() called");
    return 0;
}

/* Demangled: png_set_gamma */
extern "C" __attribute__((visibility("default"))) int png_set_gamma(void) {
    ALOGD("png_set_gamma() called");
    return 0;
}

/* Demangled: png_read_filter_row_sub4_neon */
extern "C" __attribute__((visibility("default"))) int png_read_filter_row_sub4_neon(void) {
    ALOGD("png_read_filter_row_sub4_neon() called");
    return 0;
}

/* Demangled: png_start_read_image */
extern "C" __attribute__((visibility("default"))) int png_start_read_image(void) {
    ALOGD("png_start_read_image() called");
    return 0;
}

/* Demangled: png_set_unknown_chunk_location */
extern "C" __attribute__((visibility("default"))) int png_set_unknown_chunk_location(void) {
    ALOGD("png_set_unknown_chunk_location() called");
    return 0;
}

/* Demangled: png_read_filter_row_up_neon */
extern "C" __attribute__((visibility("default"))) int png_read_filter_row_up_neon(void) {
    ALOGD("png_read_filter_row_up_neon() called");
    return 0;
}

/* Demangled: png_colorspace_set_rgb_coefficients */
extern "C" __attribute__((visibility("default"))) int png_colorspace_set_rgb_coefficients(void) {
    ALOGD("png_colorspace_set_rgb_coefficients() called");
    return 0;
}

/* Demangled: png_get_io_ptr */
extern "C" __attribute__((visibility("default"))) int png_get_io_ptr(void) {
    ALOGD("png_get_io_ptr() called");
    return 0;
}

/* Demangled: png_get_user_transform_ptr */
extern "C" __attribute__((visibility("default"))) int png_get_user_transform_ptr(void) {
    ALOGD("png_get_user_transform_ptr() called");
    return 0;
}

/* Demangled: png_get_sCAL_fixed */
extern "C" __attribute__((visibility("default"))) int png_get_sCAL_fixed(void) {
    ALOGD("png_get_sCAL_fixed() called");
    return 0;
}

/* Demangled: png_set_packswap */
extern "C" __attribute__((visibility("default"))) int png_set_packswap(void) {
    ALOGD("png_set_packswap() called");
    return 0;
}

/* Demangled: png_get_sCAL */
extern "C" __attribute__((visibility("default"))) int png_get_sCAL(void) {
    ALOGD("png_get_sCAL() called");
    return 0;
}

/* Demangled: png_set_chunk_cache_max */
extern "C" __attribute__((visibility("default"))) int png_set_chunk_cache_max(void) {
    ALOGD("png_set_chunk_cache_max() called");
    return 0;
}

/* Demangled: png_get_palette_max */
extern "C" __attribute__((visibility("default"))) int png_get_palette_max(void) {
    ALOGD("png_get_palette_max() called");
    return 0;
}

/* Demangled: png_get_mem_ptr */
extern "C" __attribute__((visibility("default"))) int png_get_mem_ptr(void) {
    ALOGD("png_get_mem_ptr() called");
    return 0;
}

/* Demangled: png_compress_IDAT */
extern "C" __attribute__((visibility("default"))) int png_compress_IDAT(void) {
    ALOGD("png_compress_IDAT() called");
    return 0;
}

/* Demangled: png_write_chunk_end */
extern "C" __attribute__((visibility("default"))) int png_write_chunk_end(void) {
    ALOGD("png_write_chunk_end() called");
    return 0;
}

/* Demangled: png_get_image_height */
extern "C" __attribute__((visibility("default"))) int png_get_image_height(void) {
    ALOGD("png_get_image_height() called");
    return 0;
}

/* Demangled: png_process_data */
extern "C" __attribute__((visibility("default"))) int png_process_data(void) {
    ALOGD("png_process_data() called");
    return 0;
}

/* Demangled: png_process_data_skip */
extern "C" __attribute__((visibility("default"))) int png_process_data_skip(void) {
    ALOGD("png_process_data_skip() called");
    return 0;
}

/* Demangled: png_free_buffer_list */
extern "C" __attribute__((visibility("default"))) int png_free_buffer_list(void) {
    ALOGD("png_free_buffer_list() called");
    return 0;
}

/* Demangled: png_convert_from_struct_tm */
extern "C" __attribute__((visibility("default"))) int png_convert_from_struct_tm(void) {
    ALOGD("png_convert_from_struct_tm() called");
    return 0;
}

/* Demangled: png_write_info */
extern "C" __attribute__((visibility("default"))) int png_write_info(void) {
    ALOGD("png_write_info() called");
    return 0;
}

/* Demangled: png_write_oFFs */
extern "C" __attribute__((visibility("default"))) int png_write_oFFs(void) {
    ALOGD("png_write_oFFs() called");
    return 0;
}

/* Demangled: png_write_sRGB */
extern "C" __attribute__((visibility("default"))) int png_write_sRGB(void) {
    ALOGD("png_write_sRGB() called");
    return 0;
}

/* Demangled: png_read_filter_row_paeth4_neon */
extern "C" __attribute__((visibility("default"))) int png_read_filter_row_paeth4_neon(void) {
    ALOGD("png_read_filter_row_paeth4_neon() called");
    return 0;
}

/* Demangled: png_destroy_info_struct */
extern "C" __attribute__((visibility("default"))) int png_destroy_info_struct(void) {
    ALOGD("png_destroy_info_struct() called");
    return 0;
}

/* Demangled: png_get_cHRM */
extern "C" __attribute__((visibility("default"))) int png_get_cHRM(void) {
    ALOGD("png_get_cHRM() called");
    return 0;
}

/* Demangled: png_get_cHRM_XYZ */
extern "C" __attribute__((visibility("default"))) int png_get_cHRM_XYZ(void) {
    ALOGD("png_get_cHRM_XYZ() called");
    return 0;
}

/* Demangled: png_get_unknown_chunks */
extern "C" __attribute__((visibility("default"))) int png_get_unknown_chunks(void) {
    ALOGD("png_get_unknown_chunks() called");
    return 0;
}

/* Demangled: png_convert_to_rfc1123_buffer */
extern "C" __attribute__((visibility("default"))) int png_convert_to_rfc1123_buffer(void) {
    ALOGD("png_convert_to_rfc1123_buffer() called");
    return 0;
}

/* Demangled: png_process_data_pause */
extern "C" __attribute__((visibility("default"))) int png_process_data_pause(void) {
    ALOGD("png_process_data_pause() called");
    return 0;
}

/* Demangled: png_create_read_struct */
extern "C" __attribute__((visibility("default"))) int png_create_read_struct(void) {
    ALOGD("png_create_read_struct() called");
    return 0;
}

/* Demangled: png_convert_to_rfc1123 */
extern "C" __attribute__((visibility("default"))) int png_convert_to_rfc1123(void) {
    ALOGD("png_convert_to_rfc1123() called");
    return 0;
}

/* Demangled: png_safe_error */
extern "C" __attribute__((visibility("default"))) int png_safe_error(void) {
    ALOGD("png_safe_error() called");
    return 0;
}

/* Demangled: png_get_IHDR */
extern "C" __attribute__((visibility("default"))) int png_get_IHDR(void) {
    ALOGD("png_get_IHDR() called");
    return 0;
}

/* Demangled: png_gamma_significant */
extern "C" __attribute__((visibility("default"))) int png_gamma_significant(void) {
    ALOGD("png_gamma_significant() called");
    return 0;
}

/* Demangled: png_free_jmpbuf */
extern "C" __attribute__((visibility("default"))) int png_free_jmpbuf(void) {
    ALOGD("png_free_jmpbuf() called");
    return 0;
}

/* Demangled: png_longjmp */
extern "C" __attribute__((visibility("default"))) int png_longjmp(void) {
    ALOGD("png_longjmp() called");
    return 0;
}

/* Demangled: png_get_hIST */
extern "C" __attribute__((visibility("default"))) int png_get_hIST(void) {
    ALOGD("png_get_hIST() called");
    return 0;
}

/* Demangled: png_set_shift */
extern "C" __attribute__((visibility("default"))) int png_set_shift(void) {
    ALOGD("png_set_shift() called");
    return 0;
}

/* Demangled: png_set_oFFs */
extern "C" __attribute__((visibility("default"))) int png_set_oFFs(void) {
    ALOGD("png_set_oFFs() called");
    return 0;
}

/* Demangled: png_set_sRGB */
extern "C" __attribute__((visibility("default"))) int png_set_sRGB(void) {
    ALOGD("png_set_sRGB() called");
    return 0;
}

/* Demangled: png_write_sCAL_s */
extern "C" __attribute__((visibility("default"))) int png_write_sCAL_s(void) {
    ALOGD("png_write_sCAL_s() called");
    return 0;
}

/* Demangled: png_app_error */
extern "C" __attribute__((visibility("default"))) int png_app_error(void) {
    ALOGD("png_app_error() called");
    return 0;
}

/* Demangled: png_set_progressive_read_fn */
extern "C" __attribute__((visibility("default"))) int png_set_progressive_read_fn(void) {
    ALOGD("png_set_progressive_read_fn() called");
    return 0;
}

/* Demangled: png_set_strip_alpha */
extern "C" __attribute__((visibility("default"))) int png_set_strip_alpha(void) {
    ALOGD("png_set_strip_alpha() called");
    return 0;
}

/* Demangled: png_get_int_32 */
extern "C" __attribute__((visibility("default"))) int png_get_int_32(void) {
    ALOGD("png_get_int_32() called");
    return 0;
}

/* Demangled: png_permit_mng_features */
extern "C" __attribute__((visibility("default"))) int png_permit_mng_features(void) {
    ALOGD("png_permit_mng_features() called");
    return 0;
}

/* Demangled: png_write_info_before_PLTE */
extern "C" __attribute__((visibility("default"))) int png_write_info_before_PLTE(void) {
    ALOGD("png_write_info_before_PLTE() called");
    return 0;
}

/* Demangled: png_write_sBIT */
extern "C" __attribute__((visibility("default"))) int png_write_sBIT(void) {
    ALOGD("png_write_sBIT() called");
    return 0;
}

/* Demangled: png_access_version_number */
extern "C" __attribute__((visibility("default"))) int png_access_version_number(void) {
    ALOGD("png_access_version_number() called");
    return 0;
}

/* Demangled: png_get_pHYs_dpi */
extern "C" __attribute__((visibility("default"))) int png_get_pHYs_dpi(void) {
    ALOGD("png_get_pHYs_dpi() called");
    return 0;
}

/* Demangled: png_do_check_palette_indexes */
extern "C" __attribute__((visibility("default"))) int png_do_check_palette_indexes(void) {
    ALOGD("png_do_check_palette_indexes() called");
    return 0;
}

/* Demangled: png_set_alpha_mode */
extern "C" __attribute__((visibility("default"))) int png_set_alpha_mode(void) {
    ALOGD("png_set_alpha_mode() called");
    return 0;
}

/* Demangled: png_write_iCCP */
extern "C" __attribute__((visibility("default"))) int png_write_iCCP(void) {
    ALOGD("png_write_iCCP() called");
    return 0;
}

/* Demangled: png_reset_zstream */
extern "C" __attribute__((visibility("default"))) int png_reset_zstream(void) {
    ALOGD("png_reset_zstream() called");
    return 0;
}

/* Demangled: png_zfree */
extern "C" __attribute__((visibility("default"))) int png_zfree(void) {
    ALOGD("png_zfree() called");
    return 0;
}

/* Demangled: png_chunk_benign_error */
extern "C" __attribute__((visibility("default"))) int png_chunk_benign_error(void) {
    ALOGD("png_chunk_benign_error() called");
    return 0;
}

/* Demangled: png_get_x_pixels_per_inch */
extern "C" __attribute__((visibility("default"))) int png_get_x_pixels_per_inch(void) {
    ALOGD("png_get_x_pixels_per_inch() called");
    return 0;
}

/* Demangled: png_read_rows */
extern "C" __attribute__((visibility("default"))) int png_read_rows(void) {
    ALOGD("png_read_rows() called");
    return 0;
}

/* Demangled: png_set_expand_gray_1_2_4_to_8 */
extern "C" __attribute__((visibility("default"))) int png_set_expand_gray_1_2_4_to_8(void) {
    ALOGD("png_set_expand_gray_1_2_4_to_8() called");
    return 0;
}

/* Demangled: png_set_quantize */
extern "C" __attribute__((visibility("default"))) int png_set_quantize(void) {
    ALOGD("png_set_quantize() called");
    return 0;
}

/* Demangled: png_set_unknown_chunks */
extern "C" __attribute__((visibility("default"))) int png_set_unknown_chunks(void) {
    ALOGD("png_set_unknown_chunks() called");
    return 0;
}

/* Demangled: png_set_compression_level */
extern "C" __attribute__((visibility("default"))) int png_set_compression_level(void) {
    ALOGD("png_set_compression_level() called");
    return 0;
}

/* Demangled: png_process_IDAT_data */
extern "C" __attribute__((visibility("default"))) int png_process_IDAT_data(void) {
    ALOGD("png_process_IDAT_data() called");
    return 0;
}

/* Demangled: png_write_PLTE */
extern "C" __attribute__((visibility("default"))) int png_write_PLTE(void) {
    ALOGD("png_write_PLTE() called");
    return 0;
}

/* Demangled: png_error */
extern "C" __attribute__((visibility("default"))) int png_error(void) {
    ALOGD("png_error() called");
    return 0;
}

/* Demangled: png_image_error */
extern "C" __attribute__((visibility("default"))) int png_image_error(void) {
    ALOGD("png_image_error() called");
    return 0;
}

/* Demangled: png_read_filter_row */
extern "C" __attribute__((visibility("default"))) int png_read_filter_row(void) {
    ALOGD("png_read_filter_row() called");
    return 0;
}

/* Demangled: png_read_chunk_header */
extern "C" __attribute__((visibility("default"))) int png_read_chunk_header(void) {
    ALOGD("png_read_chunk_header() called");
    return 0;
}

/* Demangled: png_set_sBIT */
extern "C" __attribute__((visibility("default"))) int png_set_sBIT(void) {
    ALOGD("png_set_sBIT() called");
    return 0;
}

/* Demangled: png_get_current_row_number */
extern "C" __attribute__((visibility("default"))) int png_get_current_row_number(void) {
    ALOGD("png_get_current_row_number() called");
    return 0;
}

/* Demangled: png_get_y_offset_inches_fixed */
extern "C" __attribute__((visibility("default"))) int png_get_y_offset_inches_fixed(void) {
    ALOGD("png_get_y_offset_inches_fixed() called");
    return 0;
}

/* Demangled: png_free_default */
extern "C" __attribute__((visibility("default"))) int png_free_default(void) {
    ALOGD("png_free_default() called");
    return 0;
}

/* Demangled: png_set_iCCP */
extern "C" __attribute__((visibility("default"))) int png_set_iCCP(void) {
    ALOGD("png_set_iCCP() called");
    return 0;
}

/* Demangled: png_data_freer */
extern "C" __attribute__((visibility("default"))) int png_data_freer(void) {
    ALOGD("png_data_freer() called");
    return 0;
}

/* Demangled: png_set_expand_16 */
extern "C" __attribute__((visibility("default"))) int png_set_expand_16(void) {
    ALOGD("png_set_expand_16() called");
    return 0;
}

/* Demangled: png_get_pixel_aspect_ratio */
extern "C" __attribute__((visibility("default"))) int png_get_pixel_aspect_ratio(void) {
    ALOGD("png_get_pixel_aspect_ratio() called");
    return 0;
}

/* Demangled: png_set_PLTE */
extern "C" __attribute__((visibility("default"))) int png_set_PLTE(void) {
    ALOGD("png_set_PLTE() called");
    return 0;
}

/* Demangled: png_handle_oFFs */
extern "C" __attribute__((visibility("default"))) int png_handle_oFFs(void) {
    ALOGD("png_handle_oFFs() called");
    return 0;
}

/* Demangled: png_handle_sRGB */
extern "C" __attribute__((visibility("default"))) int png_handle_sRGB(void) {
    ALOGD("png_handle_sRGB() called");
    return 0;
}

/* Demangled: png_set_invert_mono */
extern "C" __attribute__((visibility("default"))) int png_set_invert_mono(void) {
    ALOGD("png_set_invert_mono() called");
    return 0;
}

/* Demangled: png_crc_error */
extern "C" __attribute__((visibility("default"))) int png_crc_error(void) {
    ALOGD("png_crc_error() called");
    return 0;
}

/* Demangled: png_fixed */
extern "C" __attribute__((visibility("default"))) int png_fixed(void) {
    ALOGD("png_fixed() called");
    return 0;
}

/* Demangled: png_reset_crc */
extern "C" __attribute__((visibility("default"))) int png_reset_crc(void) {
    ALOGD("png_reset_crc() called");
    return 0;
}

/* Demangled: png_get_pixels_per_inch */
extern "C" __attribute__((visibility("default"))) int png_get_pixels_per_inch(void) {
    ALOGD("png_get_pixels_per_inch() called");
    return 0;
}

/* Demangled: png_image_write_to_stdio */
extern "C" __attribute__((visibility("default"))) int png_image_write_to_stdio(void) {
    ALOGD("png_image_write_to_stdio() called");
    return 0;
}

/* Demangled: png_set_filter_heuristics */
extern "C" __attribute__((visibility("default"))) int png_set_filter_heuristics(void) {
    ALOGD("png_set_filter_heuristics() called");
    return 0;
}

/* Demangled: png_read_filter_row_sub3_neon */
extern "C" __attribute__((visibility("default"))) int png_read_filter_row_sub3_neon(void) {
    ALOGD("png_read_filter_row_sub3_neon() called");
    return 0;
}

/* Demangled: png_image_free */
extern "C" __attribute__((visibility("default"))) int png_image_free(void) {
    ALOGD("png_image_free() called");
    return 0;
}

/* Demangled: png_destroy_png_struct */
extern "C" __attribute__((visibility("default"))) int png_destroy_png_struct(void) {
    ALOGD("png_destroy_png_struct() called");
    return 0;
}

/* Demangled: png_set_chunk_malloc_max */
extern "C" __attribute__((visibility("default"))) int png_set_chunk_malloc_max(void) {
    ALOGD("png_set_chunk_malloc_max() called");
    return 0;
}

/* Demangled: png_set_text_compression_mem_level */
extern "C" __attribute__((visibility("default"))) int png_set_text_compression_mem_level(void) {
    ALOGD("png_set_text_compression_mem_level() called");
    return 0;
}

/* Demangled: png_set_tRNS_to_alpha */
extern "C" __attribute__((visibility("default"))) int png_set_tRNS_to_alpha(void) {
    ALOGD("png_set_tRNS_to_alpha() called");
    return 0;
}

/* Demangled: png_set_text_compression_method */
extern "C" __attribute__((visibility("default"))) int png_set_text_compression_method(void) {
    ALOGD("png_set_text_compression_method() called");
    return 0;
}

/* Demangled: png_gamma_8bit_correct */
extern "C" __attribute__((visibility("default"))) int png_gamma_8bit_correct(void) {
    ALOGD("png_gamma_8bit_correct() called");
    return 0;
}

/* Demangled: png_set_invert_alpha */
extern "C" __attribute__((visibility("default"))) int png_set_invert_alpha(void) {
    ALOGD("png_set_invert_alpha() called");
    return 0;
}

/* Demangled: png_do_write_transformations */
extern "C" __attribute__((visibility("default"))) int png_do_write_transformations(void) {
    ALOGD("png_do_write_transformations() called");
    return 0;
}

/* Demangled: png_destroy_gamma_table */
extern "C" __attribute__((visibility("default"))) int png_destroy_gamma_table(void) {
    ALOGD("png_destroy_gamma_table() called");
    return 0;
}

/* Demangled: png_icc_set_sRGB */
extern "C" __attribute__((visibility("default"))) int png_icc_set_sRGB(void) {
    ALOGD("png_icc_set_sRGB() called");
    return 0;
}

/* Demangled: png_set_mem_fn */
extern "C" __attribute__((visibility("default"))) int png_set_mem_fn(void) {
    ALOGD("png_set_mem_fn() called");
    return 0;
}

/* Demangled: png_get_user_chunk_ptr */
extern "C" __attribute__((visibility("default"))) int png_get_user_chunk_ptr(void) {
    ALOGD("png_get_user_chunk_ptr() called");
    return 0;
}

/* Demangled: png_get_x_offset_inches_fixed */
extern "C" __attribute__((visibility("default"))) int png_get_x_offset_inches_fixed(void) {
    ALOGD("png_get_x_offset_inches_fixed() called");
    return 0;
}

/* Demangled: png_handle_sBIT */
extern "C" __attribute__((visibility("default"))) int png_handle_sBIT(void) {
    ALOGD("png_handle_sBIT() called");
    return 0;
}

/* Demangled: png_write_cHRM_fixed */
extern "C" __attribute__((visibility("default"))) int png_write_cHRM_fixed(void) {
    ALOGD("png_write_cHRM_fixed() called");
    return 0;
}

/* Demangled: png_write_rows */
extern "C" __attribute__((visibility("default"))) int png_write_rows(void) {
    ALOGD("png_write_rows() called");
    return 0;
}

/* Demangled: png_get_sPLT */
extern "C" __attribute__((visibility("default"))) int png_get_sPLT(void) {
    ALOGD("png_get_sPLT() called");
    return 0;
}

/* Demangled: png_handle_iCCP */
extern "C" __attribute__((visibility("default"))) int png_handle_iCCP(void) {
    ALOGD("png_handle_iCCP() called");
    return 0;
}

/* Demangled: png_set_compression_buffer_size */
extern "C" __attribute__((visibility("default"))) int png_set_compression_buffer_size(void) {
    ALOGD("png_set_compression_buffer_size() called");
    return 0;
}

/* Demangled: png_create_write_struct */
extern "C" __attribute__((visibility("default"))) int png_create_write_struct(void) {
    ALOGD("png_create_write_struct() called");
    return 0;
}

/* Demangled: png_write_chunk_start */
extern "C" __attribute__((visibility("default"))) int png_write_chunk_start(void) {
    ALOGD("png_write_chunk_start() called");
    return 0;
}

/* Demangled: png_colorspace_set_chromaticities */
extern "C" __attribute__((visibility("default"))) int png_colorspace_set_chromaticities(void) {
    ALOGD("png_colorspace_set_chromaticities() called");
    return 0;
}

/* Demangled: png_get_channels */
extern "C" __attribute__((visibility("default"))) int png_get_channels(void) {
    ALOGD("png_get_channels() called");
    return 0;
}

/* Demangled: png_get_gAMA */
extern "C" __attribute__((visibility("default"))) int png_get_gAMA(void) {
    ALOGD("png_get_gAMA() called");
    return 0;
}

/* Demangled: png_push_fill_buffer */
extern "C" __attribute__((visibility("default"))) int png_push_fill_buffer(void) {
    ALOGD("png_push_fill_buffer() called");
    return 0;
}

/* Demangled: png_set_rgb_to_gray_fixed */
extern "C" __attribute__((visibility("default"))) int png_set_rgb_to_gray_fixed(void) {
    ALOGD("png_set_rgb_to_gray_fixed() called");
    return 0;
}

/* Demangled: png_write_tRNS */
extern "C" __attribute__((visibility("default"))) int png_write_tRNS(void) {
    ALOGD("png_write_tRNS() called");
    return 0;
}

/* Demangled: png_handle_PLTE */
extern "C" __attribute__((visibility("default"))) int png_handle_PLTE(void) {
    ALOGD("png_handle_PLTE() called");
    return 0;
}

/* Demangled: png_init_filter_functions_neon */
extern "C" __attribute__((visibility("default"))) int png_init_filter_functions_neon(void) {
    ALOGD("png_init_filter_functions_neon() called");
    return 0;
}

/* Demangled: png_set_invalid */
extern "C" __attribute__((visibility("default"))) int png_set_invalid(void) {
    ALOGD("png_set_invalid() called");
    return 0;
}

/* Demangled: png_get_x_offset_pixels */
extern "C" __attribute__((visibility("default"))) int png_get_x_offset_pixels(void) {
    ALOGD("png_get_x_offset_pixels() called");
    return 0;
}

/* Demangled: png_get_progressive_ptr */
extern "C" __attribute__((visibility("default"))) int png_get_progressive_ptr(void) {
    ALOGD("png_get_progressive_ptr() called");
    return 0;
}

/* Demangled: png_push_read_sig */
extern "C" __attribute__((visibility("default"))) int png_push_read_sig(void) {
    ALOGD("png_push_read_sig() called");
    return 0;
}

/* Demangled: png_read_update_info */
extern "C" __attribute__((visibility("default"))) int png_read_update_info(void) {
    ALOGD("png_read_update_info() called");
    return 0;
}

/* Demangled: png_read_filter_row_paeth3_neon */
extern "C" __attribute__((visibility("default"))) int png_read_filter_row_paeth3_neon(void) {
    ALOGD("png_read_filter_row_paeth3_neon() called");
    return 0;
}

/* Demangled: png_get_rowbytes */
extern "C" __attribute__((visibility("default"))) int png_get_rowbytes(void) {
    ALOGD("png_get_rowbytes() called");
    return 0;
}

/* Demangled: png_set_benign_errors */
extern "C" __attribute__((visibility("default"))) int png_set_benign_errors(void) {
    ALOGD("png_set_benign_errors() called");
    return 0;
}

/* Demangled: png_set_rows */
extern "C" __attribute__((visibility("default"))) int png_set_rows(void) {
    ALOGD("png_set_rows() called");
    return 0;
}

/* Demangled: png_write_bKGD */
extern "C" __attribute__((visibility("default"))) int png_write_bKGD(void) {
    ALOGD("png_write_bKGD() called");
    return 0;
}

/* Demangled: png_check_fp_string */
extern "C" __attribute__((visibility("default"))) int png_check_fp_string(void) {
    ALOGD("png_check_fp_string() called");
    return 0;
}

/* Demangled: png_gamma_16bit_correct */
extern "C" __attribute__((visibility("default"))) int png_gamma_16bit_correct(void) {
    ALOGD("png_gamma_16bit_correct() called");
    return 0;
}

/* Demangled: png_set_longjmp_fn */
extern "C" __attribute__((visibility("default"))) int png_set_longjmp_fn(void) {
    ALOGD("png_set_longjmp_fn() called");
    return 0;
}

/* Demangled: png_save_uint_32 */
extern "C" __attribute__((visibility("default"))) int png_save_uint_32(void) {
    ALOGD("png_save_uint_32() called");
    return 0;
}

/* Demangled: png_set_rgb_to_gray */
extern "C" __attribute__((visibility("default"))) int png_set_rgb_to_gray(void) {
    ALOGD("png_set_rgb_to_gray() called");
    return 0;
}

/* Demangled: png_set_sCAL_s */
extern "C" __attribute__((visibility("default"))) int png_set_sCAL_s(void) {
    ALOGD("png_set_sCAL_s() called");
    return 0;
}

/* Demangled: png_set_tRNS */
extern "C" __attribute__((visibility("default"))) int png_set_tRNS(void) {
    ALOGD("png_set_tRNS() called");
    return 0;
}

/* Demangled: png_write_pCAL */
extern "C" __attribute__((visibility("default"))) int png_write_pCAL(void) {
    ALOGD("png_write_pCAL() called");
    return 0;
}

/* Demangled: png_set_filter */
extern "C" __attribute__((visibility("default"))) int png_set_filter(void) {
    ALOGD("png_set_filter() called");
    return 0;
}

/* Demangled: png_icc_check_header */
extern "C" __attribute__((visibility("default"))) int png_icc_check_header(void) {
    ALOGD("png_icc_check_header() called");
    return 0;
}

/* Demangled: png_get_io_chunk_type */
extern "C" __attribute__((visibility("default"))) int png_get_io_chunk_type(void) {
    ALOGD("png_get_io_chunk_type() called");
    return 0;
}

/* Demangled: png_malloc_default */
extern "C" __attribute__((visibility("default"))) int png_malloc_default(void) {
    ALOGD("png_malloc_default() called");
    return 0;
}

/* Demangled: png_read_sig */
extern "C" __attribute__((visibility("default"))) int png_read_sig(void) {
    ALOGD("png_read_sig() called");
    return 0;
}

/* Demangled: png_default_write_data */
extern "C" __attribute__((visibility("default"))) int png_default_write_data(void) {
    ALOGD("png_default_write_data() called");
    return 0;
}

/* Demangled: png_set_compression_mem_level */
extern "C" __attribute__((visibility("default"))) int png_set_compression_mem_level(void) {
    ALOGD("png_set_compression_mem_level() called");
    return 0;
}

/* Demangled: png_set_write_user_transform_fn */
extern "C" __attribute__((visibility("default"))) int png_set_write_user_transform_fn(void) {
    ALOGD("png_set_write_user_transform_fn() called");
    return 0;
}

/* Demangled: png_get_valid */
extern "C" __attribute__((visibility("default"))) int png_get_valid(void) {
    ALOGD("png_get_valid() called");
    return 0;
}

/* Demangled: png_set_scale_16 */
extern "C" __attribute__((visibility("default"))) int png_set_scale_16(void) {
    ALOGD("png_set_scale_16() called");
    return 0;
}

/* Demangled: png_set_bKGD */
extern "C" __attribute__((visibility("default"))) int png_set_bKGD(void) {
    ALOGD("png_set_bKGD() called");
    return 0;
}

/* Demangled: png_write_sig */
extern "C" __attribute__((visibility("default"))) int png_write_sig(void) {
    ALOGD("png_write_sig() called");
    return 0;
}

/* Demangled: png_chunk_unknown_handling */
extern "C" __attribute__((visibility("default"))) int png_chunk_unknown_handling(void) {
    ALOGD("png_chunk_unknown_handling() called");
    return 0;
}

/* Demangled: png_malloc_base */
extern "C" __attribute__((visibility("default"))) int png_malloc_base(void) {
    ALOGD("png_malloc_base() called");
    return 0;
}

/* Demangled: png_get_tIME */
extern "C" __attribute__((visibility("default"))) int png_get_tIME(void) {
    ALOGD("png_get_tIME() called");
    return 0;
}

/* Demangled: png_init_read_transformations */
extern "C" __attribute__((visibility("default"))) int png_init_read_transformations(void) {
    ALOGD("png_init_read_transformations() called");
    return 0;
}

/* Demangled: png_set_check_for_invalid_index */
extern "C" __attribute__((visibility("default"))) int png_set_check_for_invalid_index(void) {
    ALOGD("png_set_check_for_invalid_index() called");
    return 0;
}

/* Demangled: png_set_filter_heuristics_fixed */
extern "C" __attribute__((visibility("default"))) int png_set_filter_heuristics_fixed(void) {
    ALOGD("png_set_filter_heuristics_fixed() called");
    return 0;
}

/* Demangled: png_write_pHYs */
extern "C" __attribute__((visibility("default"))) int png_write_pHYs(void) {
    ALOGD("png_write_pHYs() called");
    return 0;
}

/* Demangled: png_ascii_from_fixed */
extern "C" __attribute__((visibility("default"))) int png_ascii_from_fixed(void) {
    ALOGD("png_ascii_from_fixed() called");
    return 0;
}

/* Demangled: png_get_header_version */
extern "C" __attribute__((visibility("default"))) int png_get_header_version(void) {
    ALOGD("png_get_header_version() called");
    return 0;
}

/* Demangled: png_set_read_user_transform_fn */
extern "C" __attribute__((visibility("default"))) int png_set_read_user_transform_fn(void) {
    ALOGD("png_set_read_user_transform_fn() called");
    return 0;
}

/* Demangled: png_set_pCAL */
extern "C" __attribute__((visibility("default"))) int png_set_pCAL(void) {
    ALOGD("png_set_pCAL() called");
    return 0;
}

/* Demangled: png_write_gAMA_fixed */
extern "C" __attribute__((visibility("default"))) int png_write_gAMA_fixed(void) {
    ALOGD("png_write_gAMA_fixed() called");
    return 0;
}

/* Demangled: png_get_user_width_max */
extern "C" __attribute__((visibility("default"))) int png_get_user_width_max(void) {
    ALOGD("png_get_user_width_max() called");
    return 0;
}

/* Demangled: png_read_push_finish_row */
extern "C" __attribute__((visibility("default"))) int png_read_push_finish_row(void) {
    ALOGD("png_read_push_finish_row() called");
    return 0;
}

/* Demangled: png_create_read_struct_2 */
extern "C" __attribute__((visibility("default"))) int png_create_read_struct_2(void) {
    ALOGD("png_create_read_struct_2() called");
    return 0;
}

/* Demangled: png_write_IEND */
extern "C" __attribute__((visibility("default"))) int png_write_IEND(void) {
    ALOGD("png_write_IEND() called");
    return 0;
}

/* Demangled: png_info_init_3 */
extern "C" __attribute__((visibility("default"))) int png_info_init_3(void) {
    ALOGD("png_info_init_3() called");
    return 0;
}

/* Demangled: png_set_add_alpha */
extern "C" __attribute__((visibility("default"))) int png_set_add_alpha(void) {
    ALOGD("png_set_add_alpha() called");
    return 0;
}

/* Demangled: png_write_start_row */
extern "C" __attribute__((visibility("default"))) int png_write_start_row(void) {
    ALOGD("png_write_start_row() called");
    return 0;
}

/* Demangled: png_calloc */
extern "C" __attribute__((visibility("default"))) int png_calloc(void) {
    ALOGD("png_calloc() called");
    return 0;
}

/* Demangled: png_set_option */
extern "C" __attribute__((visibility("default"))) int png_set_option(void) {
    ALOGD("png_set_option() called");
    return 0;
}

/* Demangled: png_get_current_pass_number */
extern "C" __attribute__((visibility("default"))) int png_get_current_pass_number(void) {
    ALOGD("png_get_current_pass_number() called");
    return 0;
}

/* Demangled: png_read_row */
extern "C" __attribute__((visibility("default"))) int png_read_row(void) {
    ALOGD("png_read_row() called");
    return 0;
}

/* Demangled: png_set_pHYs */
extern "C" __attribute__((visibility("default"))) int png_set_pHYs(void) {
    ALOGD("png_set_pHYs() called");
    return 0;
}

/* Demangled: png_write_chunk */
extern "C" __attribute__((visibility("default"))) int png_write_chunk(void) {
    ALOGD("png_write_chunk() called");
    return 0;
}

/* Exported Object: png_sRGB_base */
extern "C" __attribute__((visibility("default"))) void* png_sRGB_base = NULL;

/* Demangled: png_do_read_interlace */
extern "C" __attribute__((visibility("default"))) int png_do_read_interlace(void) {
    ALOGD("png_do_read_interlace() called");
    return 0;
}

/* Demangled: png_get_uint_31 */
extern "C" __attribute__((visibility("default"))) int png_get_uint_31(void) {
    ALOGD("png_get_uint_31() called");
    return 0;
}

/* Demangled: png_handle_tRNS */
extern "C" __attribute__((visibility("default"))) int png_handle_tRNS(void) {
    ALOGD("png_handle_tRNS() called");
    return 0;
}

/* Demangled: png_read_end */
extern "C" __attribute__((visibility("default"))) int png_read_end(void) {
    ALOGD("png_read_end() called");
    return 0;
}

/* Demangled: png_set_alpha_mode_fixed */
extern "C" __attribute__((visibility("default"))) int png_set_alpha_mode_fixed(void) {
    ALOGD("png_set_alpha_mode_fixed() called");
    return 0;
}

/* Demangled: png_set_cHRM_fixed */
extern "C" __attribute__((visibility("default"))) int png_set_cHRM_fixed(void) {
    ALOGD("png_set_cHRM_fixed() called");
    return 0;
}

/* Demangled: png_write_row */
extern "C" __attribute__((visibility("default"))) int png_write_row(void) {
    ALOGD("png_write_row() called");
    return 0;
}

/* Demangled: png_write_zTXt */
extern "C" __attribute__((visibility("default"))) int png_write_zTXt(void) {
    ALOGD("png_write_zTXt() called");
    return 0;
}

/* Demangled: png_push_process_row */
extern "C" __attribute__((visibility("default"))) int png_push_process_row(void) {
    ALOGD("png_push_process_row() called");
    return 0;
}

/* Demangled: png_push_save_buffer */
extern "C" __attribute__((visibility("default"))) int png_push_save_buffer(void) {
    ALOGD("png_push_save_buffer() called");
    return 0;
}

/* Demangled: png_get_uint_32 */
extern "C" __attribute__((visibility("default"))) int png_get_uint_32(void) {
    ALOGD("png_get_uint_32() called");
    return 0;
}

/* Demangled: png_set_filler */
extern "C" __attribute__((visibility("default"))) int png_set_filler(void) {
    ALOGD("png_set_filler() called");
    return 0;
}

/* Demangled: png_write_end */
extern "C" __attribute__((visibility("default"))) int png_write_end(void) {
    ALOGD("png_write_end() called");
    return 0;
}

/* Demangled: png_get_x_offset_inches */
extern "C" __attribute__((visibility("default"))) int png_get_x_offset_inches(void) {
    ALOGD("png_get_x_offset_inches() called");
    return 0;
}

/* Demangled: png_malloc_array */
extern "C" __attribute__((visibility("default"))) int png_malloc_array(void) {
    ALOGD("png_malloc_array() called");
    return 0;
}

/* Demangled: png_set_crc_action */
extern "C" __attribute__((visibility("default"))) int png_set_crc_action(void) {
    ALOGD("png_set_crc_action() called");
    return 0;
}

/* Demangled: png_image_write_to_file */
extern "C" __attribute__((visibility("default"))) int png_image_write_to_file(void) {
    ALOGD("png_image_write_to_file() called");
    return 0;
}

/* Demangled: png_save_int_32 */
extern "C" __attribute__((visibility("default"))) int png_save_int_32(void) {
    ALOGD("png_save_int_32() called");
    return 0;
}

/* Demangled: png_handle_bKGD */
extern "C" __attribute__((visibility("default"))) int png_handle_bKGD(void) {
    ALOGD("png_handle_bKGD() called");
    return 0;
}

/* Demangled: png_set_strip_16 */
extern "C" __attribute__((visibility("default"))) int png_set_strip_16(void) {
    ALOGD("png_set_strip_16() called");
    return 0;
}

/* Demangled: png_set_flush */
extern "C" __attribute__((visibility("default"))) int png_set_flush(void) {
    ALOGD("png_set_flush() called");
    return 0;
}

/* Demangled: png_write_iTXt */
extern "C" __attribute__((visibility("default"))) int png_write_iTXt(void) {
    ALOGD("png_write_iTXt() called");
    return 0;
}

/* Demangled: png_muldiv_warn */
extern "C" __attribute__((visibility("default"))) int png_muldiv_warn(void) {
    ALOGD("png_muldiv_warn() called");
    return 0;
}

/* Demangled: png_get_text */
extern "C" __attribute__((visibility("default"))) int png_get_text(void) {
    ALOGD("png_get_text() called");
    return 0;
}

/* Demangled: png_set_swap */
extern "C" __attribute__((visibility("default"))) int png_set_swap(void) {
    ALOGD("png_set_swap() called");
    return 0;
}

/* Demangled: png_build_gamma_table */
extern "C" __attribute__((visibility("default"))) int png_build_gamma_table(void) {
    ALOGD("png_build_gamma_table() called");
    return 0;
}

/* Demangled: png_handle_pCAL */
extern "C" __attribute__((visibility("default"))) int png_handle_pCAL(void) {
    ALOGD("png_handle_pCAL() called");
    return 0;
}

/* Demangled: png_do_swap */
extern "C" __attribute__((visibility("default"))) int png_do_swap(void) {
    ALOGD("png_do_swap() called");
    return 0;
}

/* Demangled: png_image_write_to_memory */
extern "C" __attribute__((visibility("default"))) int png_image_write_to_memory(void) {
    ALOGD("png_image_write_to_memory() called");
    return 0;
}

/* Demangled: png_app_warning */
extern "C" __attribute__((visibility("default"))) int png_app_warning(void) {
    ALOGD("png_app_warning() called");
    return 0;
}

/* Demangled: png_get_chunk_cache_max */
extern "C" __attribute__((visibility("default"))) int png_get_chunk_cache_max(void) {
    ALOGD("png_get_chunk_cache_max() called");
    return 0;
}

/* Demangled: png_set_read_user_chunk_fn */
extern "C" __attribute__((visibility("default"))) int png_set_read_user_chunk_fn(void) {
    ALOGD("png_set_read_user_chunk_fn() called");
    return 0;
}

/* Demangled: png_set_sCAL */
extern "C" __attribute__((visibility("default"))) int png_set_sCAL(void) {
    ALOGD("png_set_sCAL() called");
    return 0;
}

/* Demangled: png_get_rgb_to_gray_status */
extern "C" __attribute__((visibility("default"))) int png_get_rgb_to_gray_status(void) {
    ALOGD("png_get_rgb_to_gray_status() called");
    return 0;
}

/* Demangled: png_read_finish_IDAT */
extern "C" __attribute__((visibility("default"))) int png_read_finish_IDAT(void) {
    ALOGD("png_read_finish_IDAT() called");
    return 0;
}

/* Demangled: png_read_data */
extern "C" __attribute__((visibility("default"))) int png_read_data(void) {
    ALOGD("png_read_data() called");
    return 0;
}

/* Demangled: png_set_background */
extern "C" __attribute__((visibility("default"))) int png_set_background(void) {
    ALOGD("png_set_background() called");
    return 0;
}

/* Demangled: png_write_IHDR */
extern "C" __attribute__((visibility("default"))) int png_write_IHDR(void) {
    ALOGD("png_write_IHDR() called");
    return 0;
}

/* Demangled: png_get_header_ver */
extern "C" __attribute__((visibility("default"))) int png_get_header_ver(void) {
    ALOGD("png_get_header_ver() called");
    return 0;
}

/* Demangled: png_get_cHRM_XYZ_fixed */
extern "C" __attribute__((visibility("default"))) int png_get_cHRM_XYZ_fixed(void) {
    ALOGD("png_get_cHRM_XYZ_fixed() called");
    return 0;
}

/* Demangled: png_push_restore_buffer */
extern "C" __attribute__((visibility("default"))) int png_push_restore_buffer(void) {
    ALOGD("png_push_restore_buffer() called");
    return 0;
}

/* Demangled: png_write_hIST */
extern "C" __attribute__((visibility("default"))) int png_write_hIST(void) {
    ALOGD("png_write_hIST() called");
    return 0;
}

/* Exported Object: png_sRGB_delta */
extern "C" __attribute__((visibility("default"))) void* png_sRGB_delta = NULL;

/* Demangled: png_get_signature */
extern "C" __attribute__((visibility("default"))) int png_get_signature(void) {
    ALOGD("png_get_signature() called");
    return 0;
}

/* Demangled: png_handle_pHYs */
extern "C" __attribute__((visibility("default"))) int png_handle_pHYs(void) {
    ALOGD("png_handle_pHYs() called");
    return 0;
}

/* Demangled: png_set_cHRM */
extern "C" __attribute__((visibility("default"))) int png_set_cHRM(void) {
    ALOGD("png_set_cHRM() called");
    return 0;
}

/* Demangled: png_write_tEXt */
extern "C" __attribute__((visibility("default"))) int png_write_tEXt(void) {
    ALOGD("png_write_tEXt() called");
    return 0;
}

/* Demangled: png_set_error_fn */
extern "C" __attribute__((visibility("default"))) int png_set_error_fn(void) {
    ALOGD("png_set_error_fn() called");
    return 0;
}

/* Demangled: png_read_transform_info */
extern "C" __attribute__((visibility("default"))) int png_read_transform_info(void) {
    ALOGD("png_read_transform_info() called");
    return 0;
}

/* Demangled: png_get_libpng_ver */
extern "C" __attribute__((visibility("default"))) int png_get_libpng_ver(void) {
    ALOGD("png_get_libpng_ver() called");
    return 0;
}

/* Demangled: png_zalloc */
extern "C" __attribute__((visibility("default"))) int png_zalloc(void) {
    ALOGD("png_zalloc() called");
    return 0;
}

/* Demangled: png_handle_IEND */
extern "C" __attribute__((visibility("default"))) int png_handle_IEND(void) {
    ALOGD("png_handle_IEND() called");
    return 0;
}

/* Demangled: png_push_have_info */
extern "C" __attribute__((visibility("default"))) int png_push_have_info(void) {
    ALOGD("png_push_have_info() called");
    return 0;
}

/* Demangled: png_set_gray_to_rgb */
extern "C" __attribute__((visibility("default"))) int png_set_gray_to_rgb(void) {
    ALOGD("png_set_gray_to_rgb() called");
    return 0;
}

/* Demangled: png_do_packswap */
extern "C" __attribute__((visibility("default"))) int png_do_packswap(void) {
    ALOGD("png_do_packswap() called");
    return 0;
}

/* Demangled: png_set_IHDR */
extern "C" __attribute__((visibility("default"))) int png_set_IHDR(void) {
    ALOGD("png_set_IHDR() called");
    return 0;
}

/* Demangled: png_set_gAMA_fixed */
extern "C" __attribute__((visibility("default"))) int png_set_gAMA_fixed(void) {
    ALOGD("png_set_gAMA_fixed() called");
    return 0;
}

/* Demangled: png_set_text_compression_level */
extern "C" __attribute__((visibility("default"))) int png_set_text_compression_level(void) {
    ALOGD("png_set_text_compression_level() called");
    return 0;
}

/* Demangled: png_destroy_read_struct */
extern "C" __attribute__((visibility("default"))) int png_destroy_read_struct(void) {
    ALOGD("png_destroy_read_struct() called");
    return 0;
}

/* Demangled: png_format_number */
extern "C" __attribute__((visibility("default"))) int png_format_number(void) {
    ALOGD("png_format_number() called");
    return 0;
}

/* Demangled: png_image_begin_read_from_stdio */
extern "C" __attribute__((visibility("default"))) int png_image_begin_read_from_stdio(void) {
    ALOGD("png_image_begin_read_from_stdio() called");
    return 0;
}

/* Demangled: png_set_hIST */
extern "C" __attribute__((visibility("default"))) int png_set_hIST(void) {
    ALOGD("png_set_hIST() called");
    return 0;
}

/* Demangled: png_set_compression_window_bits */
extern "C" __attribute__((visibility("default"))) int png_set_compression_window_bits(void) {
    ALOGD("png_set_compression_window_bits() called");
    return 0;
}

/* Demangled: png_set_text_compression_strategy */
extern "C" __attribute__((visibility("default"))) int png_set_text_compression_strategy(void) {
    ALOGD("png_set_text_compression_strategy() called");
    return 0;
}

/* Demangled: png_build_grayscale_palette */
extern "C" __attribute__((visibility("default"))) int png_build_grayscale_palette(void) {
    ALOGD("png_build_grayscale_palette() called");
    return 0;
}

/* Demangled: png_gamma_correct */
extern "C" __attribute__((visibility("default"))) int png_gamma_correct(void) {
    ALOGD("png_gamma_correct() called");
    return 0;
}

/* Demangled: png_get_y_offset_pixels */
extern "C" __attribute__((visibility("default"))) int png_get_y_offset_pixels(void) {
    ALOGD("png_get_y_offset_pixels() called");
    return 0;
}

/* Demangled: png_crc_finish */
extern "C" __attribute__((visibility("default"))) int png_crc_finish(void) {
    ALOGD("png_crc_finish() called");
    return 0;
}

/* Demangled: png_set_cHRM_XYZ_fixed */
extern "C" __attribute__((visibility("default"))) int png_set_cHRM_XYZ_fixed(void) {
    ALOGD("png_set_cHRM_XYZ_fixed() called");
    return 0;
}

/* Demangled: png_set_write_status_fn */
extern "C" __attribute__((visibility("default"))) int png_set_write_status_fn(void) {
    ALOGD("png_set_write_status_fn() called");
    return 0;
}

/* Demangled: png_handle_zTXt */
extern "C" __attribute__((visibility("default"))) int png_handle_zTXt(void) {
    ALOGD("png_handle_zTXt() called");
    return 0;
}

/* Demangled: png_reciprocal */
extern "C" __attribute__((visibility("default"))) int png_reciprocal(void) {
    ALOGD("png_reciprocal() called");
    return 0;
}

/* Demangled: png_get_filter_type */
extern "C" __attribute__((visibility("default"))) int png_get_filter_type(void) {
    ALOGD("png_get_filter_type() called");
    return 0;
}

/* Demangled: png_handle_sCAL */
extern "C" __attribute__((visibility("default"))) int png_handle_sCAL(void) {
    ALOGD("png_handle_sCAL() called");
    return 0;
}

/* Demangled: png_read_image */
extern "C" __attribute__((visibility("default"))) int png_read_image(void) {
    ALOGD("png_read_image() called");
    return 0;
}

/* Demangled: png_write_flush */
extern "C" __attribute__((visibility("default"))) int png_write_flush(void) {
    ALOGD("png_write_flush() called");
    return 0;
}

/* Demangled: png_read_filter_row_avg4_neon */
extern "C" __attribute__((visibility("default"))) int png_read_filter_row_avg4_neon(void) {
    ALOGD("png_read_filter_row_avg4_neon() called");
    return 0;
}

/* Demangled: png_check_fp_number */
extern "C" __attribute__((visibility("default"))) int png_check_fp_number(void) {
    ALOGD("png_check_fp_number() called");
    return 0;
}

/* Demangled: png_crc_read */
extern "C" __attribute__((visibility("default"))) int png_crc_read(void) {
    ALOGD("png_crc_read() called");
    return 0;
}

/* Demangled: png_set_text_2 */
extern "C" __attribute__((visibility("default"))) int png_set_text_2(void) {
    ALOGD("png_set_text_2() called");
    return 0;
}

/* Demangled: png_set_write_fn */
extern "C" __attribute__((visibility("default"))) int png_set_write_fn(void) {
    ALOGD("png_set_write_fn() called");
    return 0;
}

/* Demangled: png_set_compression_method */
extern "C" __attribute__((visibility("default"))) int png_set_compression_method(void) {
    ALOGD("png_set_compression_method() called");
    return 0;
}

/* Demangled: png_handle_iTXt */
extern "C" __attribute__((visibility("default"))) int png_handle_iTXt(void) {
    ALOGD("png_handle_iTXt() called");
    return 0;
}

/* Demangled: png_write_finish_row */
extern "C" __attribute__((visibility("default"))) int png_write_finish_row(void) {
    ALOGD("png_write_finish_row() called");
    return 0;
}

/* Demangled: png_get_color_type */
extern "C" __attribute__((visibility("default"))) int png_get_color_type(void) {
    ALOGD("png_get_color_type() called");
    return 0;
}

/* Demangled: png_get_oFFs */
extern "C" __attribute__((visibility("default"))) int png_get_oFFs(void) {
    ALOGD("png_get_oFFs() called");
    return 0;
}

/* Demangled: png_get_sRGB */
extern "C" __attribute__((visibility("default"))) int png_get_sRGB(void) {
    ALOGD("png_get_sRGB() called");
    return 0;
}

/* Demangled: png_handle_cHRM */
extern "C" __attribute__((visibility("default"))) int png_handle_cHRM(void) {
    ALOGD("png_handle_cHRM() called");
    return 0;
}

/* Demangled: png_do_bgr */
extern "C" __attribute__((visibility("default"))) int png_do_bgr(void) {
    ALOGD("png_do_bgr() called");
    return 0;
}

/* Demangled: png_write_data */
extern "C" __attribute__((visibility("default"))) int png_write_data(void) {
    ALOGD("png_write_data() called");
    return 0;
}

/* Demangled: png_do_read_transformations */
extern "C" __attribute__((visibility("default"))) int png_do_read_transformations(void) {
    ALOGD("png_do_read_transformations() called");
    return 0;
}

/* Demangled: png_chunk_error */
extern "C" __attribute__((visibility("default"))) int png_chunk_error(void) {
    ALOGD("png_chunk_error() called");
    return 0;
}

/* Demangled: png_handle_IHDR */
extern "C" __attribute__((visibility("default"))) int png_handle_IHDR(void) {
    ALOGD("png_handle_IHDR() called");
    return 0;
}

/* Demangled: png_create_info_struct */
extern "C" __attribute__((visibility("default"))) int png_create_info_struct(void) {
    ALOGD("png_create_info_struct() called");
    return 0;
}

/* Demangled: png_free_data */
extern "C" __attribute__((visibility("default"))) int png_free_data(void) {
    ALOGD("png_free_data() called");
    return 0;
}

/* Demangled: png_get_user_height_max */
extern "C" __attribute__((visibility("default"))) int png_get_user_height_max(void) {
    ALOGD("png_get_user_height_max() called");
    return 0;
}

/* Demangled: png_handle_hIST */
extern "C" __attribute__((visibility("default"))) int png_handle_hIST(void) {
    ALOGD("png_handle_hIST() called");
    return 0;
}

/* Demangled: png_set_text_compression_window_bits */
extern "C" __attribute__((visibility("default"))) int png_set_text_compression_window_bits(void) {
    ALOGD("png_set_text_compression_window_bits() called");
    return 0;
}

/* Demangled: png_handle_tEXt */
extern "C" __attribute__((visibility("default"))) int png_handle_tEXt(void) {
    ALOGD("png_handle_tEXt() called");
    return 0;
}

/* Demangled: png_push_have_row */
extern "C" __attribute__((visibility("default"))) int png_push_have_row(void) {
    ALOGD("png_push_have_row() called");
    return 0;
}

/* Demangled: png_image_begin_read_from_file */
extern "C" __attribute__((visibility("default"))) int png_image_begin_read_from_file(void) {
    ALOGD("png_image_begin_read_from_file() called");
    return 0;
}

/* Exported Object: png_sRGB_table */
extern "C" __attribute__((visibility("default"))) void* png_sRGB_table = NULL;

/* Demangled: png_get_interlace_type */
extern "C" __attribute__((visibility("default"))) int png_get_interlace_type(void) {
    ALOGD("png_get_interlace_type() called");
    return 0;
}

/* Demangled: png_get_sBIT */
extern "C" __attribute__((visibility("default"))) int png_get_sBIT(void) {
    ALOGD("png_get_sBIT() called");
    return 0;
}

/* Demangled: png_push_have_end */
extern "C" __attribute__((visibility("default"))) int png_push_have_end(void) {
    ALOGD("png_push_have_end() called");
    return 0;
}

/* Demangled: png_set_expand */
extern "C" __attribute__((visibility("default"))) int png_set_expand(void) {
    ALOGD("png_set_expand() called");
    return 0;
}

/* Demangled: png_set_compression_strategy */
extern "C" __attribute__((visibility("default"))) int png_set_compression_strategy(void) {
    ALOGD("png_set_compression_strategy() called");
    return 0;
}

/* Demangled: png_write_image */
extern "C" __attribute__((visibility("default"))) int png_write_image(void) {
    ALOGD("png_write_image() called");
    return 0;
}

/* Demangled: png_write_sPLT */
extern "C" __attribute__((visibility("default"))) int png_write_sPLT(void) {
    ALOGD("png_write_sPLT() called");
    return 0;
}

/* Demangled: png_destroy_write_struct */
extern "C" __attribute__((visibility("default"))) int png_destroy_write_struct(void) {
    ALOGD("png_destroy_write_struct() called");
    return 0;
}

/* Demangled: png_icc_check_tag_table */
extern "C" __attribute__((visibility("default"))) int png_icc_check_tag_table(void) {
    ALOGD("png_icc_check_tag_table() called");
    return 0;
}

/* Demangled: png_get_cHRM_fixed */
extern "C" __attribute__((visibility("default"))) int png_get_cHRM_fixed(void) {
    ALOGD("png_get_cHRM_fixed() called");
    return 0;
}

/* Demangled: png_get_chunk_malloc_max */
extern "C" __attribute__((visibility("default"))) int png_get_chunk_malloc_max(void) {
    ALOGD("png_get_chunk_malloc_max() called");
    return 0;
}

/* Demangled: png_get_iCCP */
extern "C" __attribute__((visibility("default"))) int png_get_iCCP(void) {
    ALOGD("png_get_iCCP() called");
    return 0;
}

/* Demangled: png_get_y_offset_microns */
extern "C" __attribute__((visibility("default"))) int png_get_y_offset_microns(void) {
    ALOGD("png_get_y_offset_microns() called");
    return 0;
}

/* Demangled: png_read_png */
extern "C" __attribute__((visibility("default"))) int png_read_png(void) {
    ALOGD("png_read_png() called");
    return 0;
}

/* Demangled: png_set_interlace_handling */
extern "C" __attribute__((visibility("default"))) int png_set_interlace_handling(void) {
    ALOGD("png_set_interlace_handling() called");
    return 0;
}

/* Demangled: png_save_uint_16 */
extern "C" __attribute__((visibility("default"))) int png_save_uint_16(void) {
    ALOGD("png_save_uint_16() called");
    return 0;
}

/* Demangled: png_zstream_error */
extern "C" __attribute__((visibility("default"))) int png_zstream_error(void) {
    ALOGD("png_zstream_error() called");
    return 0;
}

/* Demangled: png_process_some_data */
extern "C" __attribute__((visibility("default"))) int png_process_some_data(void) {
    ALOGD("png_process_some_data() called");
    return 0;
}

/* Demangled: png_write_png */
extern "C" __attribute__((visibility("default"))) int png_write_png(void) {
    ALOGD("png_write_png() called");
    return 0;
}

/* Demangled: png_get_PLTE */
extern "C" __attribute__((visibility("default"))) int png_get_PLTE(void) {
    ALOGD("png_get_PLTE() called");
    return 0;
}

/* Demangled: png_get_gAMA_fixed */
extern "C" __attribute__((visibility("default"))) int png_get_gAMA_fixed(void) {
    ALOGD("png_get_gAMA_fixed() called");
    return 0;
}

/* Demangled: png_get_pixels_per_meter */
extern "C" __attribute__((visibility("default"))) int png_get_pixels_per_meter(void) {
    ALOGD("png_get_pixels_per_meter() called");
    return 0;
}

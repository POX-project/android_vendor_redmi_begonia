/*
 * Reverse-Engineered ABI Specification for: libpngt.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libpngt.so
 */

#ifndef BEGONIA_RE_LIBPNGT_H
#define BEGONIA_RE_LIBPNGT_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: png_fixed_error */
/* Demangled: png_fixed_error */
int png_fixed_error(void);

/* Symbol: png_get_y_offset_inches */
/* Demangled: png_get_y_offset_inches */
int png_get_y_offset_inches(void);

/* Symbol: png_set_swap_alpha */
/* Demangled: png_set_swap_alpha */
int png_set_swap_alpha(void);

/* Symbol: png_colorspace_set_ICC */
/* Demangled: png_colorspace_set_ICC */
int png_colorspace_set_ICC(void);

/* Symbol: png_read_start_row */
/* Demangled: png_read_start_row */
int png_read_start_row(void);

/* Symbol: png_set_background_fixed */
/* Demangled: png_set_background_fixed */
int png_set_background_fixed(void);

/* Symbol: png_set_sPLT */
/* Demangled: png_set_sPLT */
int png_set_sPLT(void);

/* Symbol: png_flush */
/* Demangled: png_flush */
int png_flush(void);

/* Symbol: png_colorspace_set_endpoints */
/* Demangled: png_colorspace_set_endpoints */
int png_colorspace_set_endpoints(void);

/* Symbol: png_get_pixel_aspect_ratio_fixed */
/* Demangled: png_get_pixel_aspect_ratio_fixed */
int png_get_pixel_aspect_ratio_fixed(void);

/* Symbol: png_set_gAMA */
/* Demangled: png_set_gAMA */
int png_set_gAMA(void);

/* Symbol: png_create_write_struct_2 */
/* Demangled: png_create_write_struct_2 */
int png_create_write_struct_2(void);

/* Symbol: png_create_png_struct */
/* Demangled: png_create_png_struct */
int png_create_png_struct(void);

/* Symbol: png_handle_as_unknown */
/* Demangled: png_handle_as_unknown */
int png_handle_as_unknown(void);

/* Symbol: png_progressive_combine_row */
/* Demangled: png_progressive_combine_row */
int png_progressive_combine_row(void);

/* Symbol: png_set_palette_to_rgb */
/* Demangled: png_set_palette_to_rgb */
int png_set_palette_to_rgb(void);

/* Symbol: png_icc_check_length */
/* Demangled: png_icc_check_length */
int png_icc_check_length(void);

/* Symbol: png_get_image_width */
/* Demangled: png_get_image_width */
int png_get_image_width(void);

/* Symbol: png_set_read_status_fn */
/* Demangled: png_set_read_status_fn */
int png_set_read_status_fn(void);

/* Symbol: png_get_bit_depth */
/* Demangled: png_get_bit_depth */
int png_get_bit_depth(void);

/* Symbol: png_ascii_from_fp */
/* Demangled: png_ascii_from_fp */
int png_ascii_from_fp(void);

/* Symbol: png_set_cHRM_XYZ */
/* Demangled: png_set_cHRM_XYZ */
int png_set_cHRM_XYZ(void);

/* Symbol: png_write_tIME */
/* Demangled: png_write_tIME */
int png_write_tIME(void);

/* Symbol: png_get_y_pixels_per_meter */
/* Demangled: png_get_y_pixels_per_meter */
int png_get_y_pixels_per_meter(void);

/* Symbol: png_set_bgr */
/* Demangled: png_set_bgr */
int png_set_bgr(void);

/* Symbol: png_colorspace_sync */
/* Demangled: png_colorspace_sync */
int png_colorspace_sync(void);

/* Symbol: png_get_uint_16 */
/* Demangled: png_get_uint_16 */
int png_get_uint_16(void);

/* Symbol: png_convert_from_time_t */
/* Demangled: png_convert_from_time_t */
int png_convert_from_time_t(void);

/* Symbol: png_chunk_report */
/* Demangled: png_chunk_report */
int png_chunk_report(void);

/* Symbol: png_realloc_array */
/* Demangled: png_realloc_array */
int png_realloc_array(void);

/* Symbol: png_image_finish_read */
/* Demangled: png_image_finish_read */
int png_image_finish_read(void);

/* Symbol: png_write_find_filter */
/* Demangled: png_write_find_filter */
int png_write_find_filter(void);

/* Symbol: png_muldiv */
/* Demangled: png_muldiv */
int png_muldiv(void);

/* Symbol: png_get_x_offset_microns */
/* Demangled: png_get_x_offset_microns */
int png_get_x_offset_microns(void);

/* Symbol: png_image_begin_read_from_memory */
/* Demangled: png_image_begin_read_from_memory */
int png_image_begin_read_from_memory(void);

/* Symbol: png_free */
/* Demangled: png_free */
int png_free(void);

/* Symbol: png_sig_cmp */
/* Demangled: png_sig_cmp */
int png_sig_cmp(void);

/* Symbol: png_get_rows */
/* Demangled: png_get_rows */
int png_get_rows(void);

/* Symbol: png_combine_row */
/* Demangled: png_combine_row */
int png_combine_row(void);

/* Symbol: png_handle_sPLT */
/* Demangled: png_handle_sPLT */
int png_handle_sPLT(void);

/* Symbol: png_set_read_fn */
/* Demangled: png_set_read_fn */
int png_set_read_fn(void);

/* Symbol: png_set_packing */
/* Demangled: png_set_packing */
int png_set_packing(void);

/* Symbol: png_do_invert */
/* Demangled: png_do_invert */
int png_do_invert(void);

/* Symbol: png_set_tIME */
/* Demangled: png_set_tIME */
int png_set_tIME(void);

/* Symbol: png_get_io_state */
/* Demangled: png_get_io_state */
int png_get_io_state(void);

/* Symbol: png_handle_gAMA */
/* Demangled: png_handle_gAMA */
int png_handle_gAMA(void);

/* Symbol: png_read_finish_row */
/* Demangled: png_read_finish_row */
int png_read_finish_row(void);

/* Symbol: png_set_sCAL_fixed */
/* Demangled: png_set_sCAL_fixed */
int png_set_sCAL_fixed(void);

/* Symbol: png_set_user_limits */
/* Demangled: png_set_user_limits */
int png_set_user_limits(void);

/* Symbol: png_read_filter_row_avg3_neon */
/* Demangled: png_read_filter_row_avg3_neon */
int png_read_filter_row_avg3_neon(void);

/* Symbol: png_benign_error */
/* Demangled: png_benign_error */
int png_benign_error(void);

/* Symbol: png_malloc */
/* Demangled: png_malloc */
int png_malloc(void);

/* Symbol: png_reciprocal2 */
/* Demangled: png_reciprocal2 */
int png_reciprocal2(void);

/* Symbol: png_get_tRNS */
/* Demangled: png_get_tRNS */
int png_get_tRNS(void);

/* Symbol: png_check_chunk_name */
/* Demangled: png_check_chunk_name */
int png_check_chunk_name(void);

/* Symbol: png_colorspace_set_sRGB */
/* Demangled: png_colorspace_set_sRGB */
int png_colorspace_set_sRGB(void);

/* Symbol: png_safecat */
/* Demangled: png_safecat */
int png_safecat(void);

/* Symbol: png_user_version_check */
/* Demangled: png_user_version_check */
int png_user_version_check(void);

/* Symbol: png_push_read_chunk */
/* Demangled: png_push_read_chunk */
int png_push_read_chunk(void);

/* Symbol: png_colorspace_set_gamma */
/* Demangled: png_colorspace_set_gamma */
int png_colorspace_set_gamma(void);

/* Symbol: png_get_compression_type */
/* Demangled: png_get_compression_type */
int png_get_compression_type(void);

/* Symbol: png_check_keyword */
/* Demangled: png_check_keyword */
int png_check_keyword(void);

/* Symbol: png_calculate_crc */
/* Demangled: png_calculate_crc */
int png_calculate_crc(void);

/* Symbol: png_init_io */
/* Demangled: png_init_io */
int png_init_io(void);

/* Symbol: png_get_bKGD */
/* Demangled: png_get_bKGD */
int png_get_bKGD(void);

/* Symbol: png_default_read_data */
/* Demangled: png_default_read_data */
int png_default_read_data(void);

/* Symbol: png_set_gamma_fixed */
/* Demangled: png_set_gamma_fixed */
int png_set_gamma_fixed(void);

/* Symbol: png_colorspace_sync_info */
/* Demangled: png_colorspace_sync_info */
int png_colorspace_sync_info(void);

/* Symbol: png_get_sCAL_s */
/* Demangled: png_get_sCAL_s */
int png_get_sCAL_s(void);

/* Symbol: png_set_keep_unknown_chunks */
/* Demangled: png_set_keep_unknown_chunks */
int png_set_keep_unknown_chunks(void);

/* Symbol: png_do_strip_channel */
/* Demangled: png_do_strip_channel */
int png_do_strip_channel(void);

/* Symbol: png_write_chunk_data */
/* Demangled: png_write_chunk_data */
int png_write_chunk_data(void);

/* Symbol: png_malloc_warn */
/* Demangled: png_malloc_warn */
int png_malloc_warn(void);

/* Symbol: png_safe_execute */
/* Demangled: png_safe_execute */
int png_safe_execute(void);

/* Symbol: png_get_pCAL */
/* Demangled: png_get_pCAL */
int png_get_pCAL(void);

/* Symbol: png_read_info */
/* Demangled: png_read_info */
int png_read_info(void);

/* Symbol: png_set_sig_bytes */
/* Demangled: png_set_sig_bytes */
int png_set_sig_bytes(void);

/* Symbol: png_get_error_ptr */
/* Demangled: png_get_error_ptr */
int png_get_error_ptr(void);

/* Symbol: png_push_read_IDAT */
/* Demangled: png_push_read_IDAT */
int png_push_read_IDAT(void);

/* Symbol: png_set_user_transform_info */
/* Demangled: png_set_user_transform_info */
int png_set_user_transform_info(void);

/* Symbol: png_set_sRGB_gAMA_and_cHRM */
/* Demangled: png_set_sRGB_gAMA_and_cHRM */
int png_set_sRGB_gAMA_and_cHRM(void);

/* Symbol: png_do_write_interlace */
/* Demangled: png_do_write_interlace */
int png_do_write_interlace(void);

/* Symbol: png_check_IHDR */
/* Demangled: png_check_IHDR */
int png_check_IHDR(void);

/* Symbol: png_get_copyright */
/* Demangled: png_get_copyright */
int png_get_copyright(void);

/* Symbol: png_get_compression_buffer_size */
/* Demangled: png_get_compression_buffer_size */
int png_get_compression_buffer_size(void);

/* Symbol: png_handle_tIME */
/* Demangled: png_handle_tIME */
int png_handle_tIME(void);

/* Symbol: png_read_IDAT_data */
/* Demangled: png_read_IDAT_data */
int png_read_IDAT_data(void);

/* Symbol: png_set_text */
/* Demangled: png_set_text */
int png_set_text(void);

/* Symbol: png_default_flush */
/* Demangled: png_default_flush */
int png_default_flush(void);

/* Symbol: png_get_pHYs */
/* Demangled: png_get_pHYs */
int png_get_pHYs(void);

/* Symbol: png_get_x_pixels_per_meter */
/* Demangled: png_get_x_pixels_per_meter */
int png_get_x_pixels_per_meter(void);

/* Symbol: png_get_y_pixels_per_inch */
/* Demangled: png_get_y_pixels_per_inch */
int png_get_y_pixels_per_inch(void);

/* Symbol: png_handle_unknown */
/* Demangled: png_handle_unknown */
int png_handle_unknown(void);

/* Symbol: png_set_gamma */
/* Demangled: png_set_gamma */
int png_set_gamma(void);

/* Symbol: png_read_filter_row_sub4_neon */
/* Demangled: png_read_filter_row_sub4_neon */
int png_read_filter_row_sub4_neon(void);

/* Symbol: png_start_read_image */
/* Demangled: png_start_read_image */
int png_start_read_image(void);

/* Symbol: png_set_unknown_chunk_location */
/* Demangled: png_set_unknown_chunk_location */
int png_set_unknown_chunk_location(void);

/* Symbol: png_read_filter_row_up_neon */
/* Demangled: png_read_filter_row_up_neon */
int png_read_filter_row_up_neon(void);

/* Symbol: png_colorspace_set_rgb_coefficients */
/* Demangled: png_colorspace_set_rgb_coefficients */
int png_colorspace_set_rgb_coefficients(void);

/* Symbol: png_get_io_ptr */
/* Demangled: png_get_io_ptr */
int png_get_io_ptr(void);

/* Symbol: png_get_user_transform_ptr */
/* Demangled: png_get_user_transform_ptr */
int png_get_user_transform_ptr(void);

/* Symbol: png_get_sCAL_fixed */
/* Demangled: png_get_sCAL_fixed */
int png_get_sCAL_fixed(void);

/* Symbol: png_set_packswap */
/* Demangled: png_set_packswap */
int png_set_packswap(void);

/* Symbol: png_get_sCAL */
/* Demangled: png_get_sCAL */
int png_get_sCAL(void);

/* Symbol: png_set_chunk_cache_max */
/* Demangled: png_set_chunk_cache_max */
int png_set_chunk_cache_max(void);

/* Symbol: png_get_palette_max */
/* Demangled: png_get_palette_max */
int png_get_palette_max(void);

/* Symbol: png_get_mem_ptr */
/* Demangled: png_get_mem_ptr */
int png_get_mem_ptr(void);

/* Symbol: png_compress_IDAT */
/* Demangled: png_compress_IDAT */
int png_compress_IDAT(void);

/* Symbol: png_write_chunk_end */
/* Demangled: png_write_chunk_end */
int png_write_chunk_end(void);

/* Symbol: png_get_image_height */
/* Demangled: png_get_image_height */
int png_get_image_height(void);

/* Symbol: png_process_data */
/* Demangled: png_process_data */
int png_process_data(void);

/* Symbol: png_process_data_skip */
/* Demangled: png_process_data_skip */
int png_process_data_skip(void);

/* Symbol: png_free_buffer_list */
/* Demangled: png_free_buffer_list */
int png_free_buffer_list(void);

/* Symbol: png_convert_from_struct_tm */
/* Demangled: png_convert_from_struct_tm */
int png_convert_from_struct_tm(void);

/* Symbol: png_write_info */
/* Demangled: png_write_info */
int png_write_info(void);

/* Symbol: png_write_oFFs */
/* Demangled: png_write_oFFs */
int png_write_oFFs(void);

/* Symbol: png_write_sRGB */
/* Demangled: png_write_sRGB */
int png_write_sRGB(void);

/* Symbol: png_read_filter_row_paeth4_neon */
/* Demangled: png_read_filter_row_paeth4_neon */
int png_read_filter_row_paeth4_neon(void);

/* Symbol: png_destroy_info_struct */
/* Demangled: png_destroy_info_struct */
int png_destroy_info_struct(void);

/* Symbol: png_get_cHRM */
/* Demangled: png_get_cHRM */
int png_get_cHRM(void);

/* Symbol: png_get_cHRM_XYZ */
/* Demangled: png_get_cHRM_XYZ */
int png_get_cHRM_XYZ(void);

/* Symbol: png_get_unknown_chunks */
/* Demangled: png_get_unknown_chunks */
int png_get_unknown_chunks(void);

/* Symbol: png_convert_to_rfc1123_buffer */
/* Demangled: png_convert_to_rfc1123_buffer */
int png_convert_to_rfc1123_buffer(void);

/* Symbol: png_process_data_pause */
/* Demangled: png_process_data_pause */
int png_process_data_pause(void);

/* Symbol: png_create_read_struct */
/* Demangled: png_create_read_struct */
int png_create_read_struct(void);

/* Symbol: png_convert_to_rfc1123 */
/* Demangled: png_convert_to_rfc1123 */
int png_convert_to_rfc1123(void);

/* Symbol: png_safe_error */
/* Demangled: png_safe_error */
int png_safe_error(void);

/* Symbol: png_get_IHDR */
/* Demangled: png_get_IHDR */
int png_get_IHDR(void);

/* Symbol: png_gamma_significant */
/* Demangled: png_gamma_significant */
int png_gamma_significant(void);

/* Symbol: png_free_jmpbuf */
/* Demangled: png_free_jmpbuf */
int png_free_jmpbuf(void);

/* Symbol: png_longjmp */
/* Demangled: png_longjmp */
int png_longjmp(void);

/* Symbol: png_get_hIST */
/* Demangled: png_get_hIST */
int png_get_hIST(void);

/* Symbol: png_set_shift */
/* Demangled: png_set_shift */
int png_set_shift(void);

/* Symbol: png_set_oFFs */
/* Demangled: png_set_oFFs */
int png_set_oFFs(void);

/* Symbol: png_set_sRGB */
/* Demangled: png_set_sRGB */
int png_set_sRGB(void);

/* Symbol: png_write_sCAL_s */
/* Demangled: png_write_sCAL_s */
int png_write_sCAL_s(void);

/* Symbol: png_app_error */
/* Demangled: png_app_error */
int png_app_error(void);

/* Symbol: png_set_progressive_read_fn */
/* Demangled: png_set_progressive_read_fn */
int png_set_progressive_read_fn(void);

/* Symbol: png_set_strip_alpha */
/* Demangled: png_set_strip_alpha */
int png_set_strip_alpha(void);

/* Symbol: png_get_int_32 */
/* Demangled: png_get_int_32 */
int png_get_int_32(void);

/* Symbol: png_permit_mng_features */
/* Demangled: png_permit_mng_features */
int png_permit_mng_features(void);

/* Symbol: png_write_info_before_PLTE */
/* Demangled: png_write_info_before_PLTE */
int png_write_info_before_PLTE(void);

/* Symbol: png_write_sBIT */
/* Demangled: png_write_sBIT */
int png_write_sBIT(void);

/* Symbol: png_access_version_number */
/* Demangled: png_access_version_number */
int png_access_version_number(void);

/* Symbol: png_get_pHYs_dpi */
/* Demangled: png_get_pHYs_dpi */
int png_get_pHYs_dpi(void);

/* Symbol: png_do_check_palette_indexes */
/* Demangled: png_do_check_palette_indexes */
int png_do_check_palette_indexes(void);

/* Symbol: png_set_alpha_mode */
/* Demangled: png_set_alpha_mode */
int png_set_alpha_mode(void);

/* Symbol: png_write_iCCP */
/* Demangled: png_write_iCCP */
int png_write_iCCP(void);

/* Symbol: png_reset_zstream */
/* Demangled: png_reset_zstream */
int png_reset_zstream(void);

/* Symbol: png_zfree */
/* Demangled: png_zfree */
int png_zfree(void);

/* Symbol: png_chunk_benign_error */
/* Demangled: png_chunk_benign_error */
int png_chunk_benign_error(void);

/* Symbol: png_get_x_pixels_per_inch */
/* Demangled: png_get_x_pixels_per_inch */
int png_get_x_pixels_per_inch(void);

/* Symbol: png_read_rows */
/* Demangled: png_read_rows */
int png_read_rows(void);

/* Symbol: png_set_expand_gray_1_2_4_to_8 */
/* Demangled: png_set_expand_gray_1_2_4_to_8 */
int png_set_expand_gray_1_2_4_to_8(void);

/* Symbol: png_set_quantize */
/* Demangled: png_set_quantize */
int png_set_quantize(void);

/* Symbol: png_set_unknown_chunks */
/* Demangled: png_set_unknown_chunks */
int png_set_unknown_chunks(void);

/* Symbol: png_set_compression_level */
/* Demangled: png_set_compression_level */
int png_set_compression_level(void);

/* Symbol: png_process_IDAT_data */
/* Demangled: png_process_IDAT_data */
int png_process_IDAT_data(void);

/* Symbol: png_write_PLTE */
/* Demangled: png_write_PLTE */
int png_write_PLTE(void);

/* Symbol: png_error */
/* Demangled: png_error */
int png_error(void);

/* Symbol: png_image_error */
/* Demangled: png_image_error */
int png_image_error(void);

/* Symbol: png_read_filter_row */
/* Demangled: png_read_filter_row */
int png_read_filter_row(void);

/* Symbol: png_read_chunk_header */
/* Demangled: png_read_chunk_header */
int png_read_chunk_header(void);

/* Symbol: png_set_sBIT */
/* Demangled: png_set_sBIT */
int png_set_sBIT(void);

/* Symbol: png_get_current_row_number */
/* Demangled: png_get_current_row_number */
int png_get_current_row_number(void);

/* Symbol: png_get_y_offset_inches_fixed */
/* Demangled: png_get_y_offset_inches_fixed */
int png_get_y_offset_inches_fixed(void);

/* Symbol: png_free_default */
/* Demangled: png_free_default */
int png_free_default(void);

/* Symbol: png_set_iCCP */
/* Demangled: png_set_iCCP */
int png_set_iCCP(void);

/* Symbol: png_data_freer */
/* Demangled: png_data_freer */
int png_data_freer(void);

/* Symbol: png_set_expand_16 */
/* Demangled: png_set_expand_16 */
int png_set_expand_16(void);

/* Symbol: png_get_pixel_aspect_ratio */
/* Demangled: png_get_pixel_aspect_ratio */
int png_get_pixel_aspect_ratio(void);

/* Symbol: png_set_PLTE */
/* Demangled: png_set_PLTE */
int png_set_PLTE(void);

/* Symbol: png_handle_oFFs */
/* Demangled: png_handle_oFFs */
int png_handle_oFFs(void);

/* Symbol: png_handle_sRGB */
/* Demangled: png_handle_sRGB */
int png_handle_sRGB(void);

/* Symbol: png_set_invert_mono */
/* Demangled: png_set_invert_mono */
int png_set_invert_mono(void);

/* Symbol: png_crc_error */
/* Demangled: png_crc_error */
int png_crc_error(void);

/* Symbol: png_fixed */
/* Demangled: png_fixed */
int png_fixed(void);

/* Symbol: png_reset_crc */
/* Demangled: png_reset_crc */
int png_reset_crc(void);

/* Symbol: png_get_pixels_per_inch */
/* Demangled: png_get_pixels_per_inch */
int png_get_pixels_per_inch(void);

/* Symbol: png_image_write_to_stdio */
/* Demangled: png_image_write_to_stdio */
int png_image_write_to_stdio(void);

/* Symbol: png_set_filter_heuristics */
/* Demangled: png_set_filter_heuristics */
int png_set_filter_heuristics(void);

/* Symbol: png_read_filter_row_sub3_neon */
/* Demangled: png_read_filter_row_sub3_neon */
int png_read_filter_row_sub3_neon(void);

/* Symbol: png_image_free */
/* Demangled: png_image_free */
int png_image_free(void);

/* Symbol: png_destroy_png_struct */
/* Demangled: png_destroy_png_struct */
int png_destroy_png_struct(void);

/* Symbol: png_set_chunk_malloc_max */
/* Demangled: png_set_chunk_malloc_max */
int png_set_chunk_malloc_max(void);

/* Symbol: png_set_text_compression_mem_level */
/* Demangled: png_set_text_compression_mem_level */
int png_set_text_compression_mem_level(void);

/* Symbol: png_set_tRNS_to_alpha */
/* Demangled: png_set_tRNS_to_alpha */
int png_set_tRNS_to_alpha(void);

/* Symbol: png_set_text_compression_method */
/* Demangled: png_set_text_compression_method */
int png_set_text_compression_method(void);

/* Symbol: png_gamma_8bit_correct */
/* Demangled: png_gamma_8bit_correct */
int png_gamma_8bit_correct(void);

/* Symbol: png_set_invert_alpha */
/* Demangled: png_set_invert_alpha */
int png_set_invert_alpha(void);

/* Symbol: png_do_write_transformations */
/* Demangled: png_do_write_transformations */
int png_do_write_transformations(void);

/* Symbol: png_destroy_gamma_table */
/* Demangled: png_destroy_gamma_table */
int png_destroy_gamma_table(void);

/* Symbol: png_icc_set_sRGB */
/* Demangled: png_icc_set_sRGB */
int png_icc_set_sRGB(void);

/* Symbol: png_set_mem_fn */
/* Demangled: png_set_mem_fn */
int png_set_mem_fn(void);

/* Symbol: png_get_user_chunk_ptr */
/* Demangled: png_get_user_chunk_ptr */
int png_get_user_chunk_ptr(void);

/* Symbol: png_get_x_offset_inches_fixed */
/* Demangled: png_get_x_offset_inches_fixed */
int png_get_x_offset_inches_fixed(void);

/* Symbol: png_handle_sBIT */
/* Demangled: png_handle_sBIT */
int png_handle_sBIT(void);

/* Symbol: png_write_cHRM_fixed */
/* Demangled: png_write_cHRM_fixed */
int png_write_cHRM_fixed(void);

/* Symbol: png_write_rows */
/* Demangled: png_write_rows */
int png_write_rows(void);

/* Symbol: png_get_sPLT */
/* Demangled: png_get_sPLT */
int png_get_sPLT(void);

/* Symbol: png_handle_iCCP */
/* Demangled: png_handle_iCCP */
int png_handle_iCCP(void);

/* Symbol: png_set_compression_buffer_size */
/* Demangled: png_set_compression_buffer_size */
int png_set_compression_buffer_size(void);

/* Symbol: png_create_write_struct */
/* Demangled: png_create_write_struct */
int png_create_write_struct(void);

/* Symbol: png_write_chunk_start */
/* Demangled: png_write_chunk_start */
int png_write_chunk_start(void);

/* Symbol: png_colorspace_set_chromaticities */
/* Demangled: png_colorspace_set_chromaticities */
int png_colorspace_set_chromaticities(void);

/* Symbol: png_get_channels */
/* Demangled: png_get_channels */
int png_get_channels(void);

/* Symbol: png_get_gAMA */
/* Demangled: png_get_gAMA */
int png_get_gAMA(void);

/* Symbol: png_push_fill_buffer */
/* Demangled: png_push_fill_buffer */
int png_push_fill_buffer(void);

/* Symbol: png_set_rgb_to_gray_fixed */
/* Demangled: png_set_rgb_to_gray_fixed */
int png_set_rgb_to_gray_fixed(void);

/* Symbol: png_write_tRNS */
/* Demangled: png_write_tRNS */
int png_write_tRNS(void);

/* Symbol: png_handle_PLTE */
/* Demangled: png_handle_PLTE */
int png_handle_PLTE(void);

/* Symbol: png_init_filter_functions_neon */
/* Demangled: png_init_filter_functions_neon */
int png_init_filter_functions_neon(void);

/* Symbol: png_set_invalid */
/* Demangled: png_set_invalid */
int png_set_invalid(void);

/* Symbol: png_get_x_offset_pixels */
/* Demangled: png_get_x_offset_pixels */
int png_get_x_offset_pixels(void);

/* Symbol: png_get_progressive_ptr */
/* Demangled: png_get_progressive_ptr */
int png_get_progressive_ptr(void);

/* Symbol: png_push_read_sig */
/* Demangled: png_push_read_sig */
int png_push_read_sig(void);

/* Symbol: png_read_update_info */
/* Demangled: png_read_update_info */
int png_read_update_info(void);

/* Symbol: png_read_filter_row_paeth3_neon */
/* Demangled: png_read_filter_row_paeth3_neon */
int png_read_filter_row_paeth3_neon(void);

/* Symbol: png_get_rowbytes */
/* Demangled: png_get_rowbytes */
int png_get_rowbytes(void);

/* Symbol: png_set_benign_errors */
/* Demangled: png_set_benign_errors */
int png_set_benign_errors(void);

/* Symbol: png_set_rows */
/* Demangled: png_set_rows */
int png_set_rows(void);

/* Symbol: png_write_bKGD */
/* Demangled: png_write_bKGD */
int png_write_bKGD(void);

/* Symbol: png_check_fp_string */
/* Demangled: png_check_fp_string */
int png_check_fp_string(void);

/* Symbol: png_gamma_16bit_correct */
/* Demangled: png_gamma_16bit_correct */
int png_gamma_16bit_correct(void);

/* Symbol: png_set_longjmp_fn */
/* Demangled: png_set_longjmp_fn */
int png_set_longjmp_fn(void);

/* Symbol: png_save_uint_32 */
/* Demangled: png_save_uint_32 */
int png_save_uint_32(void);

/* Symbol: png_set_rgb_to_gray */
/* Demangled: png_set_rgb_to_gray */
int png_set_rgb_to_gray(void);

/* Symbol: png_set_sCAL_s */
/* Demangled: png_set_sCAL_s */
int png_set_sCAL_s(void);

/* Symbol: png_set_tRNS */
/* Demangled: png_set_tRNS */
int png_set_tRNS(void);

/* Symbol: png_write_pCAL */
/* Demangled: png_write_pCAL */
int png_write_pCAL(void);

/* Symbol: png_set_filter */
/* Demangled: png_set_filter */
int png_set_filter(void);

/* Symbol: png_icc_check_header */
/* Demangled: png_icc_check_header */
int png_icc_check_header(void);

/* Symbol: png_get_io_chunk_type */
/* Demangled: png_get_io_chunk_type */
int png_get_io_chunk_type(void);

/* Symbol: png_malloc_default */
/* Demangled: png_malloc_default */
int png_malloc_default(void);

/* Symbol: png_read_sig */
/* Demangled: png_read_sig */
int png_read_sig(void);

/* Symbol: png_default_write_data */
/* Demangled: png_default_write_data */
int png_default_write_data(void);

/* Symbol: png_set_compression_mem_level */
/* Demangled: png_set_compression_mem_level */
int png_set_compression_mem_level(void);

/* Symbol: png_set_write_user_transform_fn */
/* Demangled: png_set_write_user_transform_fn */
int png_set_write_user_transform_fn(void);

/* Symbol: png_get_valid */
/* Demangled: png_get_valid */
int png_get_valid(void);

/* Symbol: png_set_scale_16 */
/* Demangled: png_set_scale_16 */
int png_set_scale_16(void);

/* Symbol: png_set_bKGD */
/* Demangled: png_set_bKGD */
int png_set_bKGD(void);

/* Symbol: png_write_sig */
/* Demangled: png_write_sig */
int png_write_sig(void);

/* Symbol: png_chunk_unknown_handling */
/* Demangled: png_chunk_unknown_handling */
int png_chunk_unknown_handling(void);

/* Symbol: png_malloc_base */
/* Demangled: png_malloc_base */
int png_malloc_base(void);

/* Symbol: png_get_tIME */
/* Demangled: png_get_tIME */
int png_get_tIME(void);

/* Symbol: png_init_read_transformations */
/* Demangled: png_init_read_transformations */
int png_init_read_transformations(void);

/* Symbol: png_set_check_for_invalid_index */
/* Demangled: png_set_check_for_invalid_index */
int png_set_check_for_invalid_index(void);

/* Symbol: png_set_filter_heuristics_fixed */
/* Demangled: png_set_filter_heuristics_fixed */
int png_set_filter_heuristics_fixed(void);

/* Symbol: png_write_pHYs */
/* Demangled: png_write_pHYs */
int png_write_pHYs(void);

/* Symbol: png_ascii_from_fixed */
/* Demangled: png_ascii_from_fixed */
int png_ascii_from_fixed(void);

/* Symbol: png_get_header_version */
/* Demangled: png_get_header_version */
int png_get_header_version(void);

/* Symbol: png_set_read_user_transform_fn */
/* Demangled: png_set_read_user_transform_fn */
int png_set_read_user_transform_fn(void);

/* Symbol: png_set_pCAL */
/* Demangled: png_set_pCAL */
int png_set_pCAL(void);

/* Symbol: png_write_gAMA_fixed */
/* Demangled: png_write_gAMA_fixed */
int png_write_gAMA_fixed(void);

/* Symbol: png_get_user_width_max */
/* Demangled: png_get_user_width_max */
int png_get_user_width_max(void);

/* Symbol: png_read_push_finish_row */
/* Demangled: png_read_push_finish_row */
int png_read_push_finish_row(void);

/* Symbol: png_create_read_struct_2 */
/* Demangled: png_create_read_struct_2 */
int png_create_read_struct_2(void);

/* Symbol: png_write_IEND */
/* Demangled: png_write_IEND */
int png_write_IEND(void);

/* Symbol: png_info_init_3 */
/* Demangled: png_info_init_3 */
int png_info_init_3(void);

/* Symbol: png_set_add_alpha */
/* Demangled: png_set_add_alpha */
int png_set_add_alpha(void);

/* Symbol: png_write_start_row */
/* Demangled: png_write_start_row */
int png_write_start_row(void);

/* Symbol: png_calloc */
/* Demangled: png_calloc */
int png_calloc(void);

/* Symbol: png_set_option */
/* Demangled: png_set_option */
int png_set_option(void);

/* Symbol: png_get_current_pass_number */
/* Demangled: png_get_current_pass_number */
int png_get_current_pass_number(void);

/* Symbol: png_read_row */
/* Demangled: png_read_row */
int png_read_row(void);

/* Symbol: png_set_pHYs */
/* Demangled: png_set_pHYs */
int png_set_pHYs(void);

/* Symbol: png_write_chunk */
/* Demangled: png_write_chunk */
int png_write_chunk(void);

/* Symbol: png_sRGB_base */
/* Demangled: png_sRGB_base */
extern void* png_sRGB_base;

/* Symbol: png_do_read_interlace */
/* Demangled: png_do_read_interlace */
int png_do_read_interlace(void);

/* Symbol: png_get_uint_31 */
/* Demangled: png_get_uint_31 */
int png_get_uint_31(void);

/* Symbol: png_handle_tRNS */
/* Demangled: png_handle_tRNS */
int png_handle_tRNS(void);

/* Symbol: png_read_end */
/* Demangled: png_read_end */
int png_read_end(void);

/* Symbol: png_set_alpha_mode_fixed */
/* Demangled: png_set_alpha_mode_fixed */
int png_set_alpha_mode_fixed(void);

/* Symbol: png_set_cHRM_fixed */
/* Demangled: png_set_cHRM_fixed */
int png_set_cHRM_fixed(void);

/* Symbol: png_write_row */
/* Demangled: png_write_row */
int png_write_row(void);

/* Symbol: png_write_zTXt */
/* Demangled: png_write_zTXt */
int png_write_zTXt(void);

/* Symbol: png_push_process_row */
/* Demangled: png_push_process_row */
int png_push_process_row(void);

/* Symbol: png_push_save_buffer */
/* Demangled: png_push_save_buffer */
int png_push_save_buffer(void);

/* Symbol: png_get_uint_32 */
/* Demangled: png_get_uint_32 */
int png_get_uint_32(void);

/* Symbol: png_set_filler */
/* Demangled: png_set_filler */
int png_set_filler(void);

/* Symbol: png_write_end */
/* Demangled: png_write_end */
int png_write_end(void);

/* Symbol: png_get_x_offset_inches */
/* Demangled: png_get_x_offset_inches */
int png_get_x_offset_inches(void);

/* Symbol: png_malloc_array */
/* Demangled: png_malloc_array */
int png_malloc_array(void);

/* Symbol: png_set_crc_action */
/* Demangled: png_set_crc_action */
int png_set_crc_action(void);

/* Symbol: png_image_write_to_file */
/* Demangled: png_image_write_to_file */
int png_image_write_to_file(void);

/* Symbol: png_save_int_32 */
/* Demangled: png_save_int_32 */
int png_save_int_32(void);

/* Symbol: png_handle_bKGD */
/* Demangled: png_handle_bKGD */
int png_handle_bKGD(void);

/* Symbol: png_set_strip_16 */
/* Demangled: png_set_strip_16 */
int png_set_strip_16(void);

/* Symbol: png_set_flush */
/* Demangled: png_set_flush */
int png_set_flush(void);

/* Symbol: png_write_iTXt */
/* Demangled: png_write_iTXt */
int png_write_iTXt(void);

/* Symbol: png_muldiv_warn */
/* Demangled: png_muldiv_warn */
int png_muldiv_warn(void);

/* Symbol: png_get_text */
/* Demangled: png_get_text */
int png_get_text(void);

/* Symbol: png_set_swap */
/* Demangled: png_set_swap */
int png_set_swap(void);

/* Symbol: png_build_gamma_table */
/* Demangled: png_build_gamma_table */
int png_build_gamma_table(void);

/* Symbol: png_handle_pCAL */
/* Demangled: png_handle_pCAL */
int png_handle_pCAL(void);

/* Symbol: png_do_swap */
/* Demangled: png_do_swap */
int png_do_swap(void);

/* Symbol: png_image_write_to_memory */
/* Demangled: png_image_write_to_memory */
int png_image_write_to_memory(void);

/* Symbol: png_app_warning */
/* Demangled: png_app_warning */
int png_app_warning(void);

/* Symbol: png_get_chunk_cache_max */
/* Demangled: png_get_chunk_cache_max */
int png_get_chunk_cache_max(void);

/* Symbol: png_set_read_user_chunk_fn */
/* Demangled: png_set_read_user_chunk_fn */
int png_set_read_user_chunk_fn(void);

/* Symbol: png_set_sCAL */
/* Demangled: png_set_sCAL */
int png_set_sCAL(void);

/* Symbol: png_get_rgb_to_gray_status */
/* Demangled: png_get_rgb_to_gray_status */
int png_get_rgb_to_gray_status(void);

/* Symbol: png_read_finish_IDAT */
/* Demangled: png_read_finish_IDAT */
int png_read_finish_IDAT(void);

/* Symbol: png_read_data */
/* Demangled: png_read_data */
int png_read_data(void);

/* Symbol: png_set_background */
/* Demangled: png_set_background */
int png_set_background(void);

/* Symbol: png_write_IHDR */
/* Demangled: png_write_IHDR */
int png_write_IHDR(void);

/* Symbol: png_get_header_ver */
/* Demangled: png_get_header_ver */
int png_get_header_ver(void);

/* Symbol: png_get_cHRM_XYZ_fixed */
/* Demangled: png_get_cHRM_XYZ_fixed */
int png_get_cHRM_XYZ_fixed(void);

/* Symbol: png_push_restore_buffer */
/* Demangled: png_push_restore_buffer */
int png_push_restore_buffer(void);

/* Symbol: png_write_hIST */
/* Demangled: png_write_hIST */
int png_write_hIST(void);

/* Symbol: png_sRGB_delta */
/* Demangled: png_sRGB_delta */
extern void* png_sRGB_delta;

/* Symbol: png_get_signature */
/* Demangled: png_get_signature */
int png_get_signature(void);

/* Symbol: png_handle_pHYs */
/* Demangled: png_handle_pHYs */
int png_handle_pHYs(void);

/* Symbol: png_set_cHRM */
/* Demangled: png_set_cHRM */
int png_set_cHRM(void);

/* Symbol: png_write_tEXt */
/* Demangled: png_write_tEXt */
int png_write_tEXt(void);

/* Symbol: png_set_error_fn */
/* Demangled: png_set_error_fn */
int png_set_error_fn(void);

/* Symbol: png_read_transform_info */
/* Demangled: png_read_transform_info */
int png_read_transform_info(void);

/* Symbol: png_get_libpng_ver */
/* Demangled: png_get_libpng_ver */
int png_get_libpng_ver(void);

/* Symbol: png_zalloc */
/* Demangled: png_zalloc */
int png_zalloc(void);

/* Symbol: png_handle_IEND */
/* Demangled: png_handle_IEND */
int png_handle_IEND(void);

/* Symbol: png_push_have_info */
/* Demangled: png_push_have_info */
int png_push_have_info(void);

/* Symbol: png_set_gray_to_rgb */
/* Demangled: png_set_gray_to_rgb */
int png_set_gray_to_rgb(void);

/* Symbol: png_do_packswap */
/* Demangled: png_do_packswap */
int png_do_packswap(void);

/* Symbol: png_set_IHDR */
/* Demangled: png_set_IHDR */
int png_set_IHDR(void);

/* Symbol: png_set_gAMA_fixed */
/* Demangled: png_set_gAMA_fixed */
int png_set_gAMA_fixed(void);

/* Symbol: png_set_text_compression_level */
/* Demangled: png_set_text_compression_level */
int png_set_text_compression_level(void);

/* Symbol: png_destroy_read_struct */
/* Demangled: png_destroy_read_struct */
int png_destroy_read_struct(void);

/* Symbol: png_format_number */
/* Demangled: png_format_number */
int png_format_number(void);

/* Symbol: png_image_begin_read_from_stdio */
/* Demangled: png_image_begin_read_from_stdio */
int png_image_begin_read_from_stdio(void);

/* Symbol: png_set_hIST */
/* Demangled: png_set_hIST */
int png_set_hIST(void);

/* Symbol: png_set_compression_window_bits */
/* Demangled: png_set_compression_window_bits */
int png_set_compression_window_bits(void);

/* Symbol: png_set_text_compression_strategy */
/* Demangled: png_set_text_compression_strategy */
int png_set_text_compression_strategy(void);

/* Symbol: png_build_grayscale_palette */
/* Demangled: png_build_grayscale_palette */
int png_build_grayscale_palette(void);

/* Symbol: png_gamma_correct */
/* Demangled: png_gamma_correct */
int png_gamma_correct(void);

/* Symbol: png_get_y_offset_pixels */
/* Demangled: png_get_y_offset_pixels */
int png_get_y_offset_pixels(void);

/* Symbol: png_crc_finish */
/* Demangled: png_crc_finish */
int png_crc_finish(void);

/* Symbol: png_set_cHRM_XYZ_fixed */
/* Demangled: png_set_cHRM_XYZ_fixed */
int png_set_cHRM_XYZ_fixed(void);

/* Symbol: png_set_write_status_fn */
/* Demangled: png_set_write_status_fn */
int png_set_write_status_fn(void);

/* Symbol: png_handle_zTXt */
/* Demangled: png_handle_zTXt */
int png_handle_zTXt(void);

/* Symbol: png_reciprocal */
/* Demangled: png_reciprocal */
int png_reciprocal(void);

/* Symbol: png_get_filter_type */
/* Demangled: png_get_filter_type */
int png_get_filter_type(void);

/* Symbol: png_handle_sCAL */
/* Demangled: png_handle_sCAL */
int png_handle_sCAL(void);

/* Symbol: png_read_image */
/* Demangled: png_read_image */
int png_read_image(void);

/* Symbol: png_write_flush */
/* Demangled: png_write_flush */
int png_write_flush(void);

/* Symbol: png_read_filter_row_avg4_neon */
/* Demangled: png_read_filter_row_avg4_neon */
int png_read_filter_row_avg4_neon(void);

/* Symbol: png_check_fp_number */
/* Demangled: png_check_fp_number */
int png_check_fp_number(void);

/* Symbol: png_crc_read */
/* Demangled: png_crc_read */
int png_crc_read(void);

/* Symbol: png_set_text_2 */
/* Demangled: png_set_text_2 */
int png_set_text_2(void);

/* Symbol: png_set_write_fn */
/* Demangled: png_set_write_fn */
int png_set_write_fn(void);

/* Symbol: png_set_compression_method */
/* Demangled: png_set_compression_method */
int png_set_compression_method(void);

/* Symbol: png_handle_iTXt */
/* Demangled: png_handle_iTXt */
int png_handle_iTXt(void);

/* Symbol: png_write_finish_row */
/* Demangled: png_write_finish_row */
int png_write_finish_row(void);

/* Symbol: png_get_color_type */
/* Demangled: png_get_color_type */
int png_get_color_type(void);

/* Symbol: png_get_oFFs */
/* Demangled: png_get_oFFs */
int png_get_oFFs(void);

/* Symbol: png_get_sRGB */
/* Demangled: png_get_sRGB */
int png_get_sRGB(void);

/* Symbol: png_handle_cHRM */
/* Demangled: png_handle_cHRM */
int png_handle_cHRM(void);

/* Symbol: png_do_bgr */
/* Demangled: png_do_bgr */
int png_do_bgr(void);

/* Symbol: png_write_data */
/* Demangled: png_write_data */
int png_write_data(void);

/* Symbol: png_do_read_transformations */
/* Demangled: png_do_read_transformations */
int png_do_read_transformations(void);

/* Symbol: png_chunk_error */
/* Demangled: png_chunk_error */
int png_chunk_error(void);

/* Symbol: png_handle_IHDR */
/* Demangled: png_handle_IHDR */
int png_handle_IHDR(void);

/* Symbol: png_create_info_struct */
/* Demangled: png_create_info_struct */
int png_create_info_struct(void);

/* Symbol: png_free_data */
/* Demangled: png_free_data */
int png_free_data(void);

/* Symbol: png_get_user_height_max */
/* Demangled: png_get_user_height_max */
int png_get_user_height_max(void);

/* Symbol: png_handle_hIST */
/* Demangled: png_handle_hIST */
int png_handle_hIST(void);

/* Symbol: png_set_text_compression_window_bits */
/* Demangled: png_set_text_compression_window_bits */
int png_set_text_compression_window_bits(void);

/* Symbol: png_handle_tEXt */
/* Demangled: png_handle_tEXt */
int png_handle_tEXt(void);

/* Symbol: png_push_have_row */
/* Demangled: png_push_have_row */
int png_push_have_row(void);

/* Symbol: png_image_begin_read_from_file */
/* Demangled: png_image_begin_read_from_file */
int png_image_begin_read_from_file(void);

/* Symbol: png_sRGB_table */
/* Demangled: png_sRGB_table */
extern void* png_sRGB_table;

/* Symbol: png_get_interlace_type */
/* Demangled: png_get_interlace_type */
int png_get_interlace_type(void);

/* Symbol: png_get_sBIT */
/* Demangled: png_get_sBIT */
int png_get_sBIT(void);

/* Symbol: png_push_have_end */
/* Demangled: png_push_have_end */
int png_push_have_end(void);

/* Symbol: png_set_expand */
/* Demangled: png_set_expand */
int png_set_expand(void);

/* Symbol: png_set_compression_strategy */
/* Demangled: png_set_compression_strategy */
int png_set_compression_strategy(void);

/* Symbol: png_write_image */
/* Demangled: png_write_image */
int png_write_image(void);

/* Symbol: png_write_sPLT */
/* Demangled: png_write_sPLT */
int png_write_sPLT(void);

/* Symbol: png_destroy_write_struct */
/* Demangled: png_destroy_write_struct */
int png_destroy_write_struct(void);

/* Symbol: png_icc_check_tag_table */
/* Demangled: png_icc_check_tag_table */
int png_icc_check_tag_table(void);

/* Symbol: png_get_cHRM_fixed */
/* Demangled: png_get_cHRM_fixed */
int png_get_cHRM_fixed(void);

/* Symbol: png_get_chunk_malloc_max */
/* Demangled: png_get_chunk_malloc_max */
int png_get_chunk_malloc_max(void);

/* Symbol: png_get_iCCP */
/* Demangled: png_get_iCCP */
int png_get_iCCP(void);

/* Symbol: png_get_y_offset_microns */
/* Demangled: png_get_y_offset_microns */
int png_get_y_offset_microns(void);

/* Symbol: png_read_png */
/* Demangled: png_read_png */
int png_read_png(void);

/* Symbol: png_set_interlace_handling */
/* Demangled: png_set_interlace_handling */
int png_set_interlace_handling(void);

/* Symbol: png_save_uint_16 */
/* Demangled: png_save_uint_16 */
int png_save_uint_16(void);

/* Symbol: png_zstream_error */
/* Demangled: png_zstream_error */
int png_zstream_error(void);

/* Symbol: png_process_some_data */
/* Demangled: png_process_some_data */
int png_process_some_data(void);

/* Symbol: png_write_png */
/* Demangled: png_write_png */
int png_write_png(void);

/* Symbol: png_get_PLTE */
/* Demangled: png_get_PLTE */
int png_get_PLTE(void);

/* Symbol: png_get_gAMA_fixed */
/* Demangled: png_get_gAMA_fixed */
int png_get_gAMA_fixed(void);

/* Symbol: png_get_pixels_per_meter */
/* Demangled: png_get_pixels_per_meter */
int png_get_pixels_per_meter(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBPNGT_H */

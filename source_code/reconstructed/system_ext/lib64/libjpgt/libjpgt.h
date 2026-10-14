/*
 * Reverse-Engineered ABI Specification for: libjpgt.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libjpgt.so
 */

#ifndef BEGONIA_RE_LIBJPGT_H
#define BEGONIA_RE_LIBJPGT_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: jpeg_natural_order6 */
/* Demangled: jpeg_natural_order6 */
extern void* jpeg_natural_order6;

/* Symbol: jpeg_idct_1x2 */
/* Demangled: jpeg_idct_1x2 */
int jpeg_idct_1x2(void);

/* Symbol: jpeg_new_colormap */
/* Demangled: jpeg_new_colormap */
int jpeg_new_colormap(void);

/* Symbol: jpeg_natural_order7 */
/* Demangled: jpeg_natural_order7 */
extern void* jpeg_natural_order7;

/* Symbol: jpeg_core_output_dimensions */
/* Demangled: jpeg_core_output_dimensions */
int jpeg_core_output_dimensions(void);

/* Symbol: jpeg_write_marker */
/* Demangled: jpeg_write_marker */
int jpeg_write_marker(void);

/* Symbol: jpeg_fdct_8x4 */
/* Demangled: jpeg_fdct_8x4 */
int jpeg_fdct_8x4(void);

/* Symbol: jinit_marker_reader */
/* Demangled: jinit_marker_reader */
int jinit_marker_reader(void);

/* Symbol: jpeg_mem_dest */
/* Demangled: jpeg_mem_dest */
int jpeg_mem_dest(void);

/* Symbol: jinit_d_post_controller */
/* Demangled: jinit_d_post_controller */
int jinit_d_post_controller(void);

/* Symbol: jinit_arith_encoder */
/* Demangled: jinit_arith_encoder */
int jinit_arith_encoder(void);

/* Symbol: jinit_arith_decoder */
/* Demangled: jinit_arith_decoder */
int jinit_arith_decoder(void);

/* Symbol: jpeg_fdct_9x9 */
/* Demangled: jpeg_fdct_9x9 */
int jpeg_fdct_9x9(void);

/* Symbol: jpeg_default_qtables */
/* Demangled: jpeg_default_qtables */
int jpeg_default_qtables(void);

/* Symbol: jinit_inverse_dct */
/* Demangled: jinit_inverse_dct */
int jinit_inverse_dct(void);

/* Symbol: jpeg_idct_12x6 */
/* Demangled: jpeg_idct_12x6 */
int jpeg_idct_12x6(void);

/* Symbol: jpeg_CreateDecompress */
/* Demangled: jpeg_CreateDecompress */
int jpeg_CreateDecompress(void);

/* Symbol: jpeg_idct_7x14 */
/* Demangled: jpeg_idct_7x14 */
int jpeg_idct_7x14(void);

/* Symbol: jpeg_fdct_11x11 */
/* Demangled: jpeg_fdct_11x11 */
int jpeg_fdct_11x11(void);

/* Symbol: jpeg_fdct_14x14 */
/* Demangled: jpeg_fdct_14x14 */
int jpeg_fdct_14x14(void);

/* Symbol: jinit_c_main_controller */
/* Demangled: jinit_c_main_controller */
int jinit_c_main_controller(void);

/* Symbol: jpeg_calc_jpeg_dimensions */
/* Demangled: jpeg_calc_jpeg_dimensions */
int jpeg_calc_jpeg_dimensions(void);

/* Symbol: jpeg_fdct_6x12 */
/* Demangled: jpeg_fdct_6x12 */
int jpeg_fdct_6x12(void);

/* Symbol: jpeg_fdct_6x3 */
/* Demangled: jpeg_fdct_6x3 */
int jpeg_fdct_6x3(void);

/* Symbol: jinit_marker_writer */
/* Demangled: jinit_marker_writer */
int jinit_marker_writer(void);

/* Symbol: jpeg_write_scanlines */
/* Demangled: jpeg_write_scanlines */
int jpeg_write_scanlines(void);

/* Symbol: jpeg_fdct_7x7 */
/* Demangled: jpeg_fdct_7x7 */
int jpeg_fdct_7x7(void);

/* Symbol: jpeg_set_quality */
/* Demangled: jpeg_set_quality */
int jpeg_set_quality(void);

/* Symbol: jpeg_read_header */
/* Demangled: jpeg_read_header */
int jpeg_read_header(void);

/* Symbol: jpeg_stdio_src */
/* Demangled: jpeg_stdio_src */
int jpeg_stdio_src(void);

/* Symbol: jpeg_write_tables */
/* Demangled: jpeg_write_tables */
int jpeg_write_tables(void);

/* Symbol: jdiv_round_up */
/* Demangled: jdiv_round_up */
int jdiv_round_up(void);

/* Symbol: jpeg_idct_10x5 */
/* Demangled: jpeg_idct_10x5 */
int jpeg_idct_10x5(void);

/* Symbol: jpeg_abort */
/* Demangled: jpeg_abort */
int jpeg_abort(void);

/* Symbol: jpeg_finish_compress */
/* Demangled: jpeg_finish_compress */
int jpeg_finish_compress(void);

/* Symbol: jpeg_natural_order */
/* Demangled: jpeg_natural_order */
extern void* jpeg_natural_order;

/* Symbol: jpeg_fdct_6x6 */
/* Demangled: jpeg_fdct_6x6 */
int jpeg_fdct_6x6(void);

/* Symbol: jpeg_alloc_huff_table */
/* Demangled: jpeg_alloc_huff_table */
int jpeg_alloc_huff_table(void);

/* Symbol: jpeg_write_coefficients */
/* Demangled: jpeg_write_coefficients */
int jpeg_write_coefficients(void);

/* Symbol: jpeg_stdio_dest */
/* Demangled: jpeg_stdio_dest */
int jpeg_stdio_dest(void);

/* Symbol: jinit_c_coef_controller */
/* Demangled: jinit_c_coef_controller */
int jinit_c_coef_controller(void);

/* Symbol: jpeg_fdct_4x2 */
/* Demangled: jpeg_fdct_4x2 */
int jpeg_fdct_4x2(void);

/* Symbol: jpeg_fdct_5x5 */
/* Demangled: jpeg_fdct_5x5 */
int jpeg_fdct_5x5(void);

/* Symbol: jpeg_set_linear_quality */
/* Demangled: jpeg_set_linear_quality */
int jpeg_set_linear_quality(void);

/* Symbol: jinit_master_decompress */
/* Demangled: jinit_master_decompress */
int jinit_master_decompress(void);

/* Symbol: jinit_merged_upsampler */
/* Demangled: jinit_merged_upsampler */
int jinit_merged_upsampler(void);

/* Symbol: jpeg_fdct_ifast */
/* Demangled: jpeg_fdct_ifast */
int jpeg_fdct_ifast(void);

/* Symbol: jpeg_quality_scaling */
/* Demangled: jpeg_quality_scaling */
int jpeg_quality_scaling(void);

/* Symbol: jpeg_idct_12x12 */
/* Demangled: jpeg_idct_12x12 */
int jpeg_idct_12x12(void);

/* Symbol: jpeg_idct_15x15 */
/* Demangled: jpeg_idct_15x15 */
int jpeg_idct_15x15(void);

/* Symbol: jpeg_idct_islow */
/* Demangled: jpeg_idct_islow */
int jpeg_idct_islow(void);

/* Symbol: jpeg_calc_output_dimensions */
/* Demangled: jpeg_calc_output_dimensions */
int jpeg_calc_output_dimensions(void);

/* Symbol: jpeg_destroy */
/* Demangled: jpeg_destroy */
int jpeg_destroy(void);

/* Symbol: jpeg_fdct_4x4 */
/* Demangled: jpeg_fdct_4x4 */
int jpeg_fdct_4x4(void);

/* Symbol: jinit_huff_encoder */
/* Demangled: jinit_huff_encoder */
int jinit_huff_encoder(void);

/* Symbol: jinit_downsampler */
/* Demangled: jinit_downsampler */
int jinit_downsampler(void);

/* Symbol: jpeg_mem_src */
/* Demangled: jpeg_mem_src */
int jpeg_mem_src(void);

/* Symbol: jinit_huff_decoder */
/* Demangled: jinit_huff_decoder */
int jinit_huff_decoder(void);

/* Symbol: jpeg_set_marker_processor */
/* Demangled: jpeg_set_marker_processor */
int jpeg_set_marker_processor(void);

/* Symbol: jinit_1pass_quantizer */
/* Demangled: jinit_1pass_quantizer */
int jinit_1pass_quantizer(void);

/* Symbol: jpeg_destroy_compress */
/* Demangled: jpeg_destroy_compress */
int jpeg_destroy_compress(void);

/* Symbol: jpeg_read_scanlines */
/* Demangled: jpeg_read_scanlines */
int jpeg_read_scanlines(void);

/* Symbol: jinit_upsampler */
/* Demangled: jinit_upsampler */
int jinit_upsampler(void);

/* Symbol: jinit_memory_mgr */
/* Demangled: jinit_memory_mgr */
int jinit_memory_mgr(void);

/* Symbol: jpeg_fdct_3x3 */
/* Demangled: jpeg_fdct_3x3 */
int jpeg_fdct_3x3(void);

/* Symbol: jpeg_fdct_float */
/* Demangled: jpeg_fdct_float */
int jpeg_fdct_float(void);

/* Symbol: jpeg_free_small */
/* Demangled: jpeg_free_small */
int jpeg_free_small(void);

/* Symbol: jpeg_get_large */
/* Demangled: jpeg_get_large */
int jpeg_get_large(void);

/* Symbol: jpeg_mem_term */
/* Demangled: jpeg_mem_term */
int jpeg_mem_term(void);

/* Symbol: jround_up */
/* Demangled: jround_up */
int jround_up(void);

/* Symbol: jpeg_fdct_2x1 */
/* Demangled: jpeg_fdct_2x1 */
int jpeg_fdct_2x1(void);

/* Symbol: jinit_input_controller */
/* Demangled: jinit_input_controller */
int jinit_input_controller(void);

/* Symbol: jpeg_consume_input */
/* Demangled: jpeg_consume_input */
int jpeg_consume_input(void);

/* Symbol: jpeg_fdct_2x2 */
/* Demangled: jpeg_fdct_2x2 */
int jpeg_fdct_2x2(void);

/* Symbol: jpeg_fdct_4x8 */
/* Demangled: jpeg_fdct_4x8 */
int jpeg_fdct_4x8(void);

/* Symbol: jpeg_copy_critical_parameters */
/* Demangled: jpeg_copy_critical_parameters */
int jpeg_copy_critical_parameters(void);

/* Symbol: jpeg_resync_to_restart */
/* Demangled: jpeg_resync_to_restart */
int jpeg_resync_to_restart(void);

/* Symbol: jpeg_idct_6x12 */
/* Demangled: jpeg_idct_6x12 */
int jpeg_idct_6x12(void);

/* Symbol: jinit_compress_master */
/* Demangled: jinit_compress_master */
int jinit_compress_master(void);

/* Symbol: jpeg_fdct_3x6 */
/* Demangled: jpeg_fdct_3x6 */
int jpeg_fdct_3x6(void);

/* Symbol: jcopy_block_row */
/* Demangled: jcopy_block_row */
int jcopy_block_row(void);

/* Symbol: jpeg_fdct_10x10 */
/* Demangled: jpeg_fdct_10x10 */
int jpeg_fdct_10x10(void);

/* Symbol: jpeg_fdct_13x13 */
/* Demangled: jpeg_fdct_13x13 */
int jpeg_fdct_13x13(void);

/* Symbol: jpeg_fdct_16x16 */
/* Demangled: jpeg_fdct_16x16 */
int jpeg_fdct_16x16(void);

/* Symbol: jpeg_fdct_1x1 */
/* Demangled: jpeg_fdct_1x1 */
int jpeg_fdct_1x1(void);

/* Symbol: jpeg_fdct_2x4 */
/* Demangled: jpeg_fdct_2x4 */
int jpeg_fdct_2x4(void);

/* Symbol: jpeg_fdct_5x10 */
/* Demangled: jpeg_fdct_5x10 */
int jpeg_fdct_5x10(void);

/* Symbol: jpeg_input_complete */
/* Demangled: jpeg_input_complete */
int jpeg_input_complete(void);

/* Symbol: jpeg_fdct_1x2 */
/* Demangled: jpeg_fdct_1x2 */
int jpeg_fdct_1x2(void);

/* Symbol: jpeg_finish_output */
/* Demangled: jpeg_finish_output */
int jpeg_finish_output(void);

/* Symbol: jpeg_set_colorspace */
/* Demangled: jpeg_set_colorspace */
int jpeg_set_colorspace(void);

/* Symbol: jpeg_has_multiple_scans */
/* Demangled: jpeg_has_multiple_scans */
int jpeg_has_multiple_scans(void);

/* Symbol: jinit_forward_dct */
/* Demangled: jinit_forward_dct */
int jinit_forward_dct(void);

/* Symbol: jpeg_fdct_8x16 */
/* Demangled: jpeg_fdct_8x16 */
int jpeg_fdct_8x16(void);

/* Symbol: jpeg_idct_8x4 */
/* Demangled: jpeg_idct_8x4 */
int jpeg_idct_8x4(void);

/* Symbol: jpeg_destroy_decompress */
/* Demangled: jpeg_destroy_decompress */
int jpeg_destroy_decompress(void);

/* Symbol: jpeg_fdct_16x8 */
/* Demangled: jpeg_fdct_16x8 */
int jpeg_fdct_16x8(void);

/* Symbol: jpeg_idct_9x9 */
/* Demangled: jpeg_idct_9x9 */
int jpeg_idct_9x9(void);

/* Symbol: jpeg_start_output */
/* Demangled: jpeg_start_output */
int jpeg_start_output(void);

/* Symbol: jpeg_std_error */
/* Demangled: jpeg_std_error */
int jpeg_std_error(void);

/* Symbol: jpeg_open_backing_store */
/* Demangled: jpeg_open_backing_store */
int jpeg_open_backing_store(void);

/* Symbol: jpeg_suppress_tables */
/* Demangled: jpeg_suppress_tables */
int jpeg_suppress_tables(void);

/* Symbol: jpeg_start_compress */
/* Demangled: jpeg_start_compress */
int jpeg_start_compress(void);

/* Symbol: jpeg_idct_11x11 */
/* Demangled: jpeg_idct_11x11 */
int jpeg_idct_11x11(void);

/* Symbol: jpeg_idct_14x14 */
/* Demangled: jpeg_idct_14x14 */
int jpeg_idct_14x14(void);

/* Symbol: jinit_2pass_quantizer */
/* Demangled: jinit_2pass_quantizer */
int jinit_2pass_quantizer(void);

/* Symbol: jinit_color_converter */
/* Demangled: jinit_color_converter */
int jinit_color_converter(void);

/* Symbol: jpeg_simple_progression */
/* Demangled: jpeg_simple_progression */
int jpeg_simple_progression(void);

/* Symbol: jpeg_idct_6x3 */
/* Demangled: jpeg_idct_6x3 */
int jpeg_idct_6x3(void);

/* Symbol: jpeg_write_m_header */
/* Demangled: jpeg_write_m_header */
int jpeg_write_m_header(void);

/* Symbol: jpeg_idct_7x7 */
/* Demangled: jpeg_idct_7x7 */
int jpeg_idct_7x7(void);

/* Symbol: jpeg_fdct_14x7 */
/* Demangled: jpeg_fdct_14x7 */
int jpeg_fdct_14x7(void);

/* Symbol: jpeg_alloc_quant_table */
/* Demangled: jpeg_alloc_quant_table */
int jpeg_alloc_quant_table(void);

/* Symbol: jpeg_abort_decompress */
/* Demangled: jpeg_abort_decompress */
int jpeg_abort_decompress(void);

/* Symbol: jpeg_idct_5x10 */
/* Demangled: jpeg_idct_5x10 */
int jpeg_idct_5x10(void);

/* Symbol: jpeg_idct_6x6 */
/* Demangled: jpeg_idct_6x6 */
int jpeg_idct_6x6(void);

/* Symbol: jpeg_save_markers */
/* Demangled: jpeg_save_markers */
int jpeg_save_markers(void);

/* Symbol: jpeg_mem_init */
/* Demangled: jpeg_mem_init */
int jpeg_mem_init(void);

/* Symbol: jpeg_abort_compress */
/* Demangled: jpeg_abort_compress */
int jpeg_abort_compress(void);

/* Symbol: jcopy_sample_rows */
/* Demangled: jcopy_sample_rows */
int jcopy_sample_rows(void);

/* Symbol: jinit_color_deconverter */
/* Demangled: jinit_color_deconverter */
int jinit_color_deconverter(void);

/* Symbol: jpeg_idct_4x2 */
/* Demangled: jpeg_idct_4x2 */
int jpeg_idct_4x2(void);

/* Symbol: jpeg_idct_5x5 */
/* Demangled: jpeg_idct_5x5 */
int jpeg_idct_5x5(void);

/* Symbol: jpeg_read_coefficients */
/* Demangled: jpeg_read_coefficients */
int jpeg_read_coefficients(void);

/* Symbol: jpeg_write_m_byte */
/* Demangled: jpeg_write_m_byte */
int jpeg_write_m_byte(void);

/* Symbol: jpeg_fdct_12x12 */
/* Demangled: jpeg_fdct_12x12 */
int jpeg_fdct_12x12(void);

/* Symbol: jpeg_fdct_15x15 */
/* Demangled: jpeg_fdct_15x15 */
int jpeg_fdct_15x15(void);

/* Symbol: jpeg_fdct_islow */
/* Demangled: jpeg_fdct_islow */
int jpeg_fdct_islow(void);

/* Symbol: jinit_c_master_control */
/* Demangled: jinit_c_master_control */
int jinit_c_master_control(void);

/* Symbol: jpeg_idct_8x16 */
/* Demangled: jpeg_idct_8x16 */
int jpeg_idct_8x16(void);

/* Symbol: jpeg_idct_ifast */
/* Demangled: jpeg_idct_ifast */
int jpeg_idct_ifast(void);

/* Symbol: jpeg_std_message_table */
/* Demangled: jpeg_std_message_table */
extern void* jpeg_std_message_table;

/* Symbol: jpeg_aritab */
/* Demangled: jpeg_aritab */
extern void* jpeg_aritab;

/* Symbol: jpeg_fdct_12x6 */
/* Demangled: jpeg_fdct_12x6 */
int jpeg_fdct_12x6(void);

/* Symbol: jpeg_finish_decompress */
/* Demangled: jpeg_finish_decompress */
int jpeg_finish_decompress(void);

/* Symbol: jpeg_idct_4x4 */
/* Demangled: jpeg_idct_4x4 */
int jpeg_idct_4x4(void);

/* Symbol: jinit_d_main_controller */
/* Demangled: jinit_d_main_controller */
int jinit_d_main_controller(void);

/* Symbol: jpeg_CreateCompress */
/* Demangled: jpeg_CreateCompress */
int jpeg_CreateCompress(void);

/* Symbol: jpeg_fdct_7x14 */
/* Demangled: jpeg_fdct_7x14 */
int jpeg_fdct_7x14(void);

/* Symbol: jpeg_add_quant_table */
/* Demangled: jpeg_add_quant_table */
int jpeg_add_quant_table(void);

/* Symbol: jpeg_idct_16x8 */
/* Demangled: jpeg_idct_16x8 */
int jpeg_idct_16x8(void);

/* Symbol: jpeg_free_large */
/* Demangled: jpeg_free_large */
int jpeg_free_large(void);

/* Symbol: jpeg_write_raw_data */
/* Demangled: jpeg_write_raw_data */
int jpeg_write_raw_data(void);

/* Symbol: jpeg_default_colorspace */
/* Demangled: jpeg_default_colorspace */
int jpeg_default_colorspace(void);

/* Symbol: jpeg_idct_3x3 */
/* Demangled: jpeg_idct_3x3 */
int jpeg_idct_3x3(void);

/* Symbol: jpeg_idct_float */
/* Demangled: jpeg_idct_float */
int jpeg_idct_float(void);

/* Symbol: jpeg_natural_order2 */
/* Demangled: jpeg_natural_order2 */
extern void* jpeg_natural_order2;

/* Symbol: jpeg_start_decompress */
/* Demangled: jpeg_start_decompress */
int jpeg_start_decompress(void);

/* Symbol: jpeg_idct_2x1 */
/* Demangled: jpeg_idct_2x1 */
int jpeg_idct_2x1(void);

/* Symbol: jpeg_get_small */
/* Demangled: jpeg_get_small */
int jpeg_get_small(void);

/* Symbol: jpeg_natural_order3 */
/* Demangled: jpeg_natural_order3 */
extern void* jpeg_natural_order3;

/* Symbol: jpeg_set_defaults */
/* Demangled: jpeg_set_defaults */
int jpeg_set_defaults(void);

/* Symbol: jpeg_idct_2x2 */
/* Demangled: jpeg_idct_2x2 */
int jpeg_idct_2x2(void);

/* Symbol: jpeg_idct_4x8 */
/* Demangled: jpeg_idct_4x8 */
int jpeg_idct_4x8(void);

/* Symbol: jpeg_fdct_10x5 */
/* Demangled: jpeg_fdct_10x5 */
int jpeg_fdct_10x5(void);

/* Symbol: jinit_c_prep_controller */
/* Demangled: jinit_c_prep_controller */
int jinit_c_prep_controller(void);

/* Symbol: jpeg_natural_order4 */
/* Demangled: jpeg_natural_order4 */
extern void* jpeg_natural_order4;

/* Symbol: jpeg_read_raw_data */
/* Demangled: jpeg_read_raw_data */
int jpeg_read_raw_data(void);

/* Symbol: jpeg_idct_3x6 */
/* Demangled: jpeg_idct_3x6 */
int jpeg_idct_3x6(void);

/* Symbol: jpeg_natural_order5 */
/* Demangled: jpeg_natural_order5 */
extern void* jpeg_natural_order5;

/* Symbol: jinit_d_coef_controller */
/* Demangled: jinit_d_coef_controller */
int jinit_d_coef_controller(void);

/* Symbol: jpeg_idct_10x10 */
/* Demangled: jpeg_idct_10x10 */
int jpeg_idct_10x10(void);

/* Symbol: jpeg_idct_13x13 */
/* Demangled: jpeg_idct_13x13 */
int jpeg_idct_13x13(void);

/* Symbol: jpeg_idct_14x7 */
/* Demangled: jpeg_idct_14x7 */
int jpeg_idct_14x7(void);

/* Symbol: jpeg_idct_16x16 */
/* Demangled: jpeg_idct_16x16 */
int jpeg_idct_16x16(void);

/* Symbol: jpeg_idct_1x1 */
/* Demangled: jpeg_idct_1x1 */
int jpeg_idct_1x1(void);

/* Symbol: jpeg_idct_2x4 */
/* Demangled: jpeg_idct_2x4 */
int jpeg_idct_2x4(void);

/* Symbol: jpeg_mem_available */
/* Demangled: jpeg_mem_available */
int jpeg_mem_available(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBJPGT_H */

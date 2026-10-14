/*
 * Reverse-Engineered ABI Specification for: libvpx.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libvpx.so
 */

#ifndef BEGONIA_RE_LIBVPX_H
#define BEGONIA_RE_LIBVPX_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: vpx_codec_vp9_cx */
/* Demangled: vpx_codec_vp9_cx */
int vpx_codec_vp9_cx(void);

/* Symbol: vpx_codec_version_extra_str */
/* Demangled: vpx_codec_version_extra_str */
int vpx_codec_version_extra_str(void);

/* Symbol: vpx_codec_enc_init_multi_ver */
/* Demangled: vpx_codec_enc_init_multi_ver */
int vpx_codec_enc_init_multi_ver(void);

/* Symbol: vpx_codec_get_preview_frame */
/* Demangled: vpx_codec_get_preview_frame */
int vpx_codec_get_preview_frame(void);

/* Symbol: vpx_codec_version_str */
/* Demangled: vpx_codec_version_str */
int vpx_codec_version_str(void);

/* Symbol: vpx_codec_get_stream_info */
/* Demangled: vpx_codec_get_stream_info */
int vpx_codec_get_stream_info(void);

/* Symbol: vpx_codec_pkt_list_get */
/* Demangled: vpx_codec_pkt_list_get */
int vpx_codec_pkt_list_get(void);

/* Symbol: vpx_codec_set_cx_data_buf */
/* Demangled: vpx_codec_set_cx_data_buf */
int vpx_codec_set_cx_data_buf(void);

/* Symbol: vpx_codec_vp8_cx */
/* Demangled: vpx_codec_vp8_cx */
int vpx_codec_vp8_cx(void);

/* Symbol: vpx_codec_vp9_dx */
/* Demangled: vpx_codec_vp9_dx */
int vpx_codec_vp9_dx(void);

/* Symbol: vpx_codec_control_ */
/* Demangled: vpx_codec_control_ */
int vpx_codec_control_(void);

/* Symbol: vpx_codec_destroy */
/* Demangled: vpx_codec_destroy */
int vpx_codec_destroy(void);

/* Symbol: vpx_codec_vp8_dx_algo */
/* Demangled: vpx_codec_vp8_dx_algo */
extern void* vpx_codec_vp8_dx_algo;

/* Symbol: vpx_codec_err_to_string */
/* Demangled: vpx_codec_err_to_string */
int vpx_codec_err_to_string(void);

/* Symbol: vpx_img_wrap */
/* Demangled: vpx_img_wrap */
int vpx_img_wrap(void);

/* Symbol: vpx_codec_vp8_cx_algo */
/* Demangled: vpx_codec_vp8_cx_algo */
extern void* vpx_codec_vp8_cx_algo;

/* Symbol: vpx_codec_version */
/* Demangled: vpx_codec_version */
int vpx_codec_version(void);

/* Symbol: vpx_codec_get_frame */
/* Demangled: vpx_codec_get_frame */
int vpx_codec_get_frame(void);

/* Symbol: vpx_img_set_rect */
/* Demangled: vpx_img_set_rect */
int vpx_img_set_rect(void);

/* Symbol: vpx_codec_vp8_dx */
/* Demangled: vpx_codec_vp8_dx */
int vpx_codec_vp8_dx(void);

/* Symbol: vpx_codec_dec_init_ver */
/* Demangled: vpx_codec_dec_init_ver */
int vpx_codec_dec_init_ver(void);

/* Symbol: vpx_codec_peek_stream_info */
/* Demangled: vpx_codec_peek_stream_info */
int vpx_codec_peek_stream_info(void);

/* Symbol: vpx_codec_register_put_frame_cb */
/* Demangled: vpx_codec_register_put_frame_cb */
int vpx_codec_register_put_frame_cb(void);

/* Symbol: vpx_codec_set_frame_buffer_functions */
/* Demangled: vpx_codec_set_frame_buffer_functions */
int vpx_codec_set_frame_buffer_functions(void);

/* Symbol: vpx_codec_enc_init_ver */
/* Demangled: vpx_codec_enc_init_ver */
int vpx_codec_enc_init_ver(void);

/* Symbol: vpx_codec_get_cx_data */
/* Demangled: vpx_codec_get_cx_data */
int vpx_codec_get_cx_data(void);

/* Symbol: vpx_codec_get_global_headers */
/* Demangled: vpx_codec_get_global_headers */
int vpx_codec_get_global_headers(void);

/* Symbol: vpx_codec_vp9_dx_algo */
/* Demangled: vpx_codec_vp9_dx_algo */
extern void* vpx_codec_vp9_dx_algo;

/* Symbol: vpx_codec_error_detail */
/* Demangled: vpx_codec_error_detail */
int vpx_codec_error_detail(void);

/* Symbol: vpx_codec_get_caps */
/* Demangled: vpx_codec_get_caps */
int vpx_codec_get_caps(void);

/* Symbol: vpx_codec_decode */
/* Demangled: vpx_codec_decode */
int vpx_codec_decode(void);

/* Symbol: vpx_codec_enc_config_set */
/* Demangled: vpx_codec_enc_config_set */
int vpx_codec_enc_config_set(void);

/* Symbol: vpx_codec_vp9_cx_algo */
/* Demangled: vpx_codec_vp9_cx_algo */
extern void* vpx_codec_vp9_cx_algo;

/* Symbol: vpx_codec_enc_config_default */
/* Demangled: vpx_codec_enc_config_default */
int vpx_codec_enc_config_default(void);

/* Symbol: vpx_codec_build_config */
/* Demangled: vpx_codec_build_config */
int vpx_codec_build_config(void);

/* Symbol: vpx_codec_pkt_list_add */
/* Demangled: vpx_codec_pkt_list_add */
int vpx_codec_pkt_list_add(void);

/* Symbol: vpx_codec_error */
/* Demangled: vpx_codec_error */
int vpx_codec_error(void);

/* Symbol: vpx_codec_iface_name */
/* Demangled: vpx_codec_iface_name */
int vpx_codec_iface_name(void);

/* Symbol: vpx_codec_register_put_slice_cb */
/* Demangled: vpx_codec_register_put_slice_cb */
int vpx_codec_register_put_slice_cb(void);

/* Symbol: vpx_codec_encode */
/* Demangled: vpx_codec_encode */
int vpx_codec_encode(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBVPX_H */

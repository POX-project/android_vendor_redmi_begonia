/*
 * Reverse-Engineered ABI Specification for: libvorbisidec.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libvorbisidec.so
 */

#ifndef BEGONIA_RE_LIBVORBISIDEC_H
#define BEGONIA_RE_LIBVORBISIDEC_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: floor1_memosize */
/* Demangled: floor1_memosize */
int floor1_memosize(void);

/* Symbol: ogg_stream_create */
/* Demangled: ogg_stream_create */
int ogg_stream_create(void);

/* Symbol: ogg_stream_init */
/* Demangled: ogg_stream_init */
int ogg_stream_init(void);

/* Symbol: ogg_stream_pagein */
/* Demangled: ogg_stream_pagein */
int ogg_stream_pagein(void);

/* Symbol: ogg_sync_reset */
/* Demangled: ogg_sync_reset */
int ogg_sync_reset(void);

/* Symbol: res_clear_info */
/* Demangled: res_clear_info */
int res_clear_info(void);

/* Symbol: ogg_page_bos */
/* Demangled: ogg_page_bos */
int ogg_page_bos(void);

/* Symbol: start_time */
/* Demangled: start_time */
extern void* start_time;

/* Symbol: vorbis_comment_query */
/* Demangled: vorbis_comment_query */
int vorbis_comment_query(void);

/* Symbol: ogg_sync_pageseek */
/* Demangled: ogg_sync_pageseek */
int ogg_sync_pageseek(void);

/* Symbol: mapping_clear_info */
/* Demangled: mapping_clear_info */
int mapping_clear_info(void);

/* Symbol: floor0_free_info */
/* Demangled: floor0_free_info */
int floor0_free_info(void);

/* Symbol: floor0_info_unpack */
/* Demangled: floor0_info_unpack */
int floor0_info_unpack(void);

/* Symbol: floor0_inverse1 */
/* Demangled: floor0_inverse1 */
int floor0_inverse1(void);

/* Symbol: ogg_buffer_dup */
/* Demangled: ogg_buffer_dup */
int ogg_buffer_dup(void);

/* Symbol: ogg_page_version */
/* Demangled: ogg_page_version */
int ogg_page_version(void);

/* Symbol: ov_raw_tell */
/* Demangled: ov_raw_tell */
int ov_raw_tell(void);

/* Symbol: oggpack_eop */
/* Demangled: oggpack_eop */
int oggpack_eop(void);

/* Symbol: mdct_unroll_lap */
/* Demangled: mdct_unroll_lap */
int mdct_unroll_lap(void);

/* Symbol: vorbis_dsp_restart */
/* Demangled: vorbis_dsp_restart */
int vorbis_dsp_restart(void);

/* Symbol: floor0_inverse2 */
/* Demangled: floor0_inverse2 */
int floor0_inverse2(void);

/* Symbol: floor1_free_info */
/* Demangled: floor1_free_info */
int floor1_free_info(void);

/* Symbol: floor1_info_unpack */
/* Demangled: floor1_info_unpack */
int floor1_info_unpack(void);

/* Symbol: floor1_inverse1 */
/* Demangled: floor1_inverse1 */
int floor1_inverse1(void);

/* Symbol: ogg_page_eos */
/* Demangled: ogg_page_eos */
int ogg_page_eos(void);

/* Symbol: ogg_sync_clear */
/* Demangled: ogg_sync_clear */
int ogg_sync_clear(void);

/* Symbol: vorbis_book_decodev_add */
/* Demangled: vorbis_book_decodev_add */
int vorbis_book_decodev_add(void);

/* Symbol: vorbis_book_unpack */
/* Demangled: vorbis_book_unpack */
int vorbis_book_unpack(void);

/* Symbol: floor1_inverse2 */
/* Demangled: floor1_inverse2 */
int floor1_inverse2(void);

/* Symbol: _vorbis_unpack_info */
/* Demangled: _vorbis_unpack_info */
int _vorbis_unpack_info(void);

/* Symbol: ov_read */
/* Demangled: ov_read */
int ov_read(void);

/* Symbol: ov_seekable */
/* Demangled: ov_seekable */
int ov_seekable(void);

/* Symbol: decode_map */
/* Demangled: decode_map */
extern void* decode_map;

/* Symbol: vorbis_dsp_clear */
/* Demangled: vorbis_dsp_clear */
int vorbis_dsp_clear(void);

/* Symbol: ogg_page_continued */
/* Demangled: ogg_page_continued */
int ogg_page_continued(void);

/* Symbol: ogg_page_dup */
/* Demangled: ogg_page_dup */
int ogg_page_dup(void);

/* Symbol: oggpack_bytes */
/* Demangled: oggpack_bytes */
int oggpack_bytes(void);

/* Symbol: vorbis_book_decode */
/* Demangled: vorbis_book_decode */
int vorbis_book_decode(void);

/* Symbol: mdct_shift_right */
/* Demangled: mdct_shift_right */
extern void* mdct_shift_right;

/* Symbol: ogg_sync_destroy */
/* Demangled: ogg_sync_destroy */
int ogg_sync_destroy(void);

/* Symbol: vorbis_book_decodev_set */
/* Demangled: vorbis_book_decodev_set */
int vorbis_book_decodev_set(void);

/* Symbol: ogg_page_packets */
/* Demangled: ogg_page_packets */
int ogg_page_packets(void);

/* Symbol: _VDBG_free */
/* Demangled: _VDBG_free */
int _VDBG_free(void);

/* Symbol: ov_streams */
/* Demangled: ov_streams */
int ov_streams(void);

/* Symbol: ov_test_callbacks */
/* Demangled: ov_test_callbacks */
int ov_test_callbacks(void);

/* Symbol: ov_time_tell */
/* Demangled: ov_time_tell */
int ov_time_tell(void);

/* Symbol: decode_packed_entry_number */
/* Demangled: decode_packed_entry_number */
extern void* decode_packed_entry_number;

/* Symbol: vorbis_dsp_destroy */
/* Demangled: vorbis_dsp_destroy */
int vorbis_dsp_destroy(void);

/* Symbol: vorbis_dsp_synthesis */
/* Demangled: vorbis_dsp_synthesis */
int vorbis_dsp_synthesis(void);

/* Symbol: ogg_stream_packetpeek */
/* Demangled: ogg_stream_packetpeek */
int ogg_stream_packetpeek(void);

/* Symbol: vorbis_comment_query_count */
/* Demangled: vorbis_comment_query_count */
int vorbis_comment_query_count(void);

/* Symbol: ov_test */
/* Demangled: ov_test */
int ov_test(void);

/* Symbol: vorbis_book_clear */
/* Demangled: vorbis_book_clear */
int vorbis_book_clear(void);

/* Symbol: res_inverse */
/* Demangled: res_inverse */
int res_inverse(void);

/* Symbol: mdct_unroll_postlap */
/* Demangled: mdct_unroll_postlap */
extern void* mdct_unroll_postlap;

/* Symbol: vorbis_info_blocksize */
/* Demangled: vorbis_info_blocksize */
int vorbis_info_blocksize(void);

/* Symbol: ogg_stream_reset_serialno */
/* Demangled: ogg_stream_reset_serialno */
int ogg_stream_reset_serialno(void);

/* Symbol: mdct_backward */
/* Demangled: mdct_backward */
int mdct_backward(void);

/* Symbol: mdct_backwardARM */
/* Demangled: mdct_backwardARM */
extern void* mdct_backwardARM;

/* Symbol: mdct_unroll_prelap */
/* Demangled: mdct_unroll_prelap */
extern void* mdct_unroll_prelap;

/* Symbol: vorbis_info_clear */
/* Demangled: vorbis_info_clear */
int vorbis_info_clear(void);

/* Symbol: mapping_inverse */
/* Demangled: mapping_inverse */
int mapping_inverse(void);

/* Symbol: render_lineARM */
/* Demangled: render_lineARM */
extern void* render_lineARM;

/* Symbol: _vorbis_unpack_comment */
/* Demangled: _vorbis_unpack_comment */
int _vorbis_unpack_comment(void);

/* Symbol: ov_pcm_seek_page */
/* Demangled: ov_pcm_seek_page */
int ov_pcm_seek_page(void);

/* Symbol: ov_pcm_total */
/* Demangled: ov_pcm_total */
int ov_pcm_total(void);

/* Symbol: vorbis_lsp_to_curve */
/* Demangled: vorbis_lsp_to_curve */
int vorbis_lsp_to_curve(void);

/* Symbol: render_point */
/* Demangled: render_point */
int render_point(void);

/* Symbol: ogg_sync_bufferin */
/* Demangled: ogg_sync_bufferin */
int ogg_sync_bufferin(void);

/* Symbol: ogg_sync_wrote */
/* Demangled: ogg_sync_wrote */
int ogg_sync_wrote(void);

/* Symbol: _ilog */
/* Demangled: _ilog */
int _ilog(void);

/* Symbol: ogg_stream_reset */
/* Demangled: ogg_stream_reset */
int ogg_stream_reset(void);

/* Symbol: oggpack_readinit */
/* Demangled: oggpack_readinit */
extern void* oggpack_readinit;

/* Symbol: mdct_unroll_part2 */
/* Demangled: mdct_unroll_part2 */
extern void* mdct_unroll_part2;

/* Symbol: res_unpack */
/* Demangled: res_unpack */
int res_unpack(void);

/* Symbol: ov_clear */
/* Demangled: ov_clear */
int ov_clear(void);

/* Symbol: ov_pcm_seek */
/* Demangled: ov_pcm_seek */
int ov_pcm_seek(void);

/* Symbol: ogg_sync_create */
/* Demangled: ogg_sync_create */
int ogg_sync_create(void);

/* Symbol: ogg_sync_init */
/* Demangled: ogg_sync_init */
int ogg_sync_init(void);

/* Symbol: mdct_unroll_part3 */
/* Demangled: mdct_unroll_part3 */
extern void* mdct_unroll_part3;

/* Symbol: oggpack_bits */
/* Demangled: oggpack_bits */
int oggpack_bits(void);

/* Symbol: ogg_sync_pageout */
/* Demangled: ogg_sync_pageout */
int ogg_sync_pageout(void);

/* Symbol: vorbis_comment_clear */
/* Demangled: vorbis_comment_clear */
int vorbis_comment_clear(void);

/* Symbol: gerrno */
/* Demangled: gerrno */
extern void* gerrno;

/* Symbol: ov_serialnumber */
/* Demangled: ov_serialnumber */
int ov_serialnumber(void);

/* Symbol: vorbis_dsp_create */
/* Demangled: vorbis_dsp_create */
int vorbis_dsp_create(void);

/* Symbol: vorbis_dsp_init */
/* Demangled: vorbis_dsp_init */
int vorbis_dsp_init(void);

/* Symbol: ogg_stream_clear */
/* Demangled: ogg_stream_clear */
int ogg_stream_clear(void);

/* Symbol: ov_bitrate */
/* Demangled: ov_bitrate */
int ov_bitrate(void);

/* Symbol: ov_bitrate_instant */
/* Demangled: ov_bitrate_instant */
int ov_bitrate_instant(void);

/* Symbol: ov_info */
/* Demangled: ov_info */
int ov_info(void);

/* Symbol: oggpack_look */
/* Demangled: oggpack_look */
extern void* oggpack_look;

/* Symbol: vorbis_packet_blocksize */
/* Demangled: vorbis_packet_blocksize */
int vorbis_packet_blocksize(void);

/* Symbol: ogg_stream_destroy */
/* Demangled: ogg_stream_destroy */
int ogg_stream_destroy(void);

/* Symbol: ov_raw_total */
/* Demangled: ov_raw_total */
int ov_raw_total(void);

/* Symbol: vorbis_dsp_pcmout */
/* Demangled: vorbis_dsp_pcmout */
int vorbis_dsp_pcmout(void);

/* Symbol: _checksum */
/* Demangled: _checksum */
extern void* _checksum;

/* Symbol: ogg_page_pageno */
/* Demangled: ogg_page_pageno */
int ogg_page_pageno(void);

/* Symbol: _vorbis_unpack_books */
/* Demangled: _vorbis_unpack_books */
int _vorbis_unpack_books(void);

/* Symbol: vorbis_book_decodevs_add */
/* Demangled: vorbis_book_decodevs_add */
int vorbis_book_decodevs_add(void);

/* Symbol: vorbis_info_init */
/* Demangled: vorbis_info_init */
int vorbis_info_init(void);

/* Symbol: FLOOR_fromdB_LOOKUP */
/* Demangled: FLOOR_fromdB_LOOKUP */
extern void* FLOOR_fromdB_LOOKUP;

/* Symbol: ogg_packet_release */
/* Demangled: ogg_packet_release */
int ogg_packet_release(void);

/* Symbol: ov_pcm_tell */
/* Demangled: ov_pcm_tell */
int ov_pcm_tell(void);

/* Symbol: ogg_page_serialno */
/* Demangled: ogg_page_serialno */
int ogg_page_serialno(void);

/* Symbol: ov_open_callbacks */
/* Demangled: ov_open_callbacks */
int ov_open_callbacks(void);

/* Symbol: ov_raw_seek */
/* Demangled: ov_raw_seek */
int ov_raw_seek(void);

/* Symbol: ov_test_open */
/* Demangled: ov_test_open */
int ov_test_open(void);

/* Symbol: decode_packed_entry_number_REALSTART */
/* Demangled: decode_packed_entry_number_REALSTART */
extern void* decode_packed_entry_number_REALSTART;

/* Symbol: vorbis_dsp_read */
/* Demangled: vorbis_dsp_read */
int vorbis_dsp_read(void);

/* Symbol: vorbis_book_decodevv_add */
/* Demangled: vorbis_book_decodevv_add */
extern void* vorbis_book_decodevv_add;

/* Symbol: ov_open */
/* Demangled: ov_open */
int ov_open(void);

/* Symbol: ov_time_seek_page */
/* Demangled: ov_time_seek_page */
int ov_time_seek_page(void);

/* Symbol: ov_time_total */
/* Demangled: ov_time_total */
int ov_time_total(void);

/* Symbol: oggpack_adv */
/* Demangled: oggpack_adv */
extern void* oggpack_adv;

/* Symbol: oggpack_read */
/* Demangled: oggpack_read */
extern void* oggpack_read;

/* Symbol: ogg_stream_packetout */
/* Demangled: ogg_stream_packetout */
int ogg_stream_packetout(void);

/* Symbol: _VDBG_dump */
/* Demangled: _VDBG_dump */
int _VDBG_dump(void);

/* Symbol: global_bytes */
/* Demangled: global_bytes */
extern void* global_bytes;

/* Symbol: ov_comment */
/* Demangled: ov_comment */
int ov_comment(void);

/* Symbol: _book_maptype1_quantvals */
/* Demangled: _book_maptype1_quantvals */
int _book_maptype1_quantvals(void);

/* Symbol: ogg_page_granulepos */
/* Demangled: ogg_page_granulepos */
int ogg_page_granulepos(void);

/* Symbol: mapping_info_unpack */
/* Demangled: mapping_info_unpack */
int mapping_info_unpack(void);

/* Symbol: ogg_page_release */
/* Demangled: ogg_page_release */
int ogg_page_release(void);

/* Symbol: _VDBG_malloc */
/* Demangled: _VDBG_malloc */
int _VDBG_malloc(void);

/* Symbol: floor0_memosize */
/* Demangled: floor0_memosize */
int floor0_memosize(void);

/* Symbol: vorbis_comment_init */
/* Demangled: vorbis_comment_init */
int vorbis_comment_init(void);

/* Symbol: vorbis_dsp_headerin */
/* Demangled: vorbis_dsp_headerin */
int vorbis_dsp_headerin(void);

/* Symbol: ov_time_seek */
/* Demangled: ov_time_seek */
int ov_time_seek(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBVORBISIDEC_H */

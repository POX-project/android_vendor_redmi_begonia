/*
 * Reverse-Engineered Source for: libvorbisidec.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libvorbisidec"

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
#include "libvorbisidec.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: floor1_memosize */
extern "C" __attribute__((visibility("default"))) int floor1_memosize(void) {
    ALOGD("floor1_memosize() called");
    return 0;
}

/* Demangled: ogg_stream_create */
extern "C" __attribute__((visibility("default"))) int ogg_stream_create(void) {
    ALOGD("ogg_stream_create() called");
    return 0;
}

/* Demangled: ogg_stream_init */
extern "C" __attribute__((visibility("default"))) int ogg_stream_init(void) {
    ALOGD("ogg_stream_init() called");
    return 0;
}

/* Demangled: ogg_stream_pagein */
extern "C" __attribute__((visibility("default"))) int ogg_stream_pagein(void) {
    ALOGD("ogg_stream_pagein() called");
    return 0;
}

/* Demangled: ogg_sync_reset */
extern "C" __attribute__((visibility("default"))) int ogg_sync_reset(void) {
    ALOGD("ogg_sync_reset() called");
    return 0;
}

/* Demangled: res_clear_info */
extern "C" __attribute__((visibility("default"))) int res_clear_info(void) {
    ALOGD("res_clear_info() called");
    return 0;
}

/* Demangled: ogg_page_bos */
extern "C" __attribute__((visibility("default"))) int ogg_page_bos(void) {
    ALOGD("ogg_page_bos() called");
    return 0;
}

/* Exported Object: start_time */
extern "C" __attribute__((visibility("default"))) void* start_time = NULL;

/* Demangled: vorbis_comment_query */
extern "C" __attribute__((visibility("default"))) int vorbis_comment_query(void) {
    ALOGD("vorbis_comment_query() called");
    return 0;
}

/* Demangled: ogg_sync_pageseek */
extern "C" __attribute__((visibility("default"))) int ogg_sync_pageseek(void) {
    ALOGD("ogg_sync_pageseek() called");
    return 0;
}

/* Demangled: mapping_clear_info */
extern "C" __attribute__((visibility("default"))) int mapping_clear_info(void) {
    ALOGD("mapping_clear_info() called");
    return 0;
}

/* Demangled: floor0_free_info */
extern "C" __attribute__((visibility("default"))) int floor0_free_info(void) {
    ALOGD("floor0_free_info() called");
    return 0;
}

/* Demangled: floor0_info_unpack */
extern "C" __attribute__((visibility("default"))) int floor0_info_unpack(void) {
    ALOGD("floor0_info_unpack() called");
    return 0;
}

/* Demangled: floor0_inverse1 */
extern "C" __attribute__((visibility("default"))) int floor0_inverse1(void) {
    ALOGD("floor0_inverse1() called");
    return 0;
}

/* Demangled: ogg_buffer_dup */
extern "C" __attribute__((visibility("default"))) int ogg_buffer_dup(void) {
    ALOGD("ogg_buffer_dup() called");
    return 0;
}

/* Demangled: ogg_page_version */
extern "C" __attribute__((visibility("default"))) int ogg_page_version(void) {
    ALOGD("ogg_page_version() called");
    return 0;
}

/* Demangled: ov_raw_tell */
extern "C" __attribute__((visibility("default"))) int ov_raw_tell(void) {
    ALOGD("ov_raw_tell() called");
    return 0;
}

/* Demangled: oggpack_eop */
extern "C" __attribute__((visibility("default"))) int oggpack_eop(void) {
    ALOGD("oggpack_eop() called");
    return 0;
}

/* Demangled: mdct_unroll_lap */
extern "C" __attribute__((visibility("default"))) int mdct_unroll_lap(void) {
    ALOGD("mdct_unroll_lap() called");
    return 0;
}

/* Demangled: vorbis_dsp_restart */
extern "C" __attribute__((visibility("default"))) int vorbis_dsp_restart(void) {
    ALOGD("vorbis_dsp_restart() called");
    return 0;
}

/* Demangled: floor0_inverse2 */
extern "C" __attribute__((visibility("default"))) int floor0_inverse2(void) {
    ALOGD("floor0_inverse2() called");
    return 0;
}

/* Demangled: floor1_free_info */
extern "C" __attribute__((visibility("default"))) int floor1_free_info(void) {
    ALOGD("floor1_free_info() called");
    return 0;
}

/* Demangled: floor1_info_unpack */
extern "C" __attribute__((visibility("default"))) int floor1_info_unpack(void) {
    ALOGD("floor1_info_unpack() called");
    return 0;
}

/* Demangled: floor1_inverse1 */
extern "C" __attribute__((visibility("default"))) int floor1_inverse1(void) {
    ALOGD("floor1_inverse1() called");
    return 0;
}

/* Demangled: ogg_page_eos */
extern "C" __attribute__((visibility("default"))) int ogg_page_eos(void) {
    ALOGD("ogg_page_eos() called");
    return 0;
}

/* Demangled: ogg_sync_clear */
extern "C" __attribute__((visibility("default"))) int ogg_sync_clear(void) {
    ALOGD("ogg_sync_clear() called");
    return 0;
}

/* Demangled: vorbis_book_decodev_add */
extern "C" __attribute__((visibility("default"))) int vorbis_book_decodev_add(void) {
    ALOGD("vorbis_book_decodev_add() called");
    return 0;
}

/* Demangled: vorbis_book_unpack */
extern "C" __attribute__((visibility("default"))) int vorbis_book_unpack(void) {
    ALOGD("vorbis_book_unpack() called");
    return 0;
}

/* Demangled: floor1_inverse2 */
extern "C" __attribute__((visibility("default"))) int floor1_inverse2(void) {
    ALOGD("floor1_inverse2() called");
    return 0;
}

/* Demangled: _vorbis_unpack_info */
extern "C" __attribute__((visibility("default"))) int _vorbis_unpack_info(void) {
    ALOGD("_vorbis_unpack_info() called");
    return 0;
}

/* Demangled: ov_read */
extern "C" __attribute__((visibility("default"))) int ov_read(void) {
    ALOGD("ov_read() called");
    return 0;
}

/* Demangled: ov_seekable */
extern "C" __attribute__((visibility("default"))) int ov_seekable(void) {
    ALOGD("ov_seekable() called");
    return 0;
}

/* Exported Object: decode_map */
extern "C" __attribute__((visibility("default"))) void* decode_map = NULL;

/* Demangled: vorbis_dsp_clear */
extern "C" __attribute__((visibility("default"))) int vorbis_dsp_clear(void) {
    ALOGD("vorbis_dsp_clear() called");
    return 0;
}

/* Demangled: ogg_page_continued */
extern "C" __attribute__((visibility("default"))) int ogg_page_continued(void) {
    ALOGD("ogg_page_continued() called");
    return 0;
}

/* Demangled: ogg_page_dup */
extern "C" __attribute__((visibility("default"))) int ogg_page_dup(void) {
    ALOGD("ogg_page_dup() called");
    return 0;
}

/* Demangled: oggpack_bytes */
extern "C" __attribute__((visibility("default"))) int oggpack_bytes(void) {
    ALOGD("oggpack_bytes() called");
    return 0;
}

/* Demangled: vorbis_book_decode */
extern "C" __attribute__((visibility("default"))) int vorbis_book_decode(void) {
    ALOGD("vorbis_book_decode() called");
    return 0;
}

/* Exported Object: mdct_shift_right */
extern "C" __attribute__((visibility("default"))) void* mdct_shift_right = NULL;

/* Demangled: ogg_sync_destroy */
extern "C" __attribute__((visibility("default"))) int ogg_sync_destroy(void) {
    ALOGD("ogg_sync_destroy() called");
    return 0;
}

/* Demangled: vorbis_book_decodev_set */
extern "C" __attribute__((visibility("default"))) int vorbis_book_decodev_set(void) {
    ALOGD("vorbis_book_decodev_set() called");
    return 0;
}

/* Demangled: ogg_page_packets */
extern "C" __attribute__((visibility("default"))) int ogg_page_packets(void) {
    ALOGD("ogg_page_packets() called");
    return 0;
}

/* Demangled: _VDBG_free */
extern "C" __attribute__((visibility("default"))) int _VDBG_free(void) {
    ALOGD("_VDBG_free() called");
    return 0;
}

/* Demangled: ov_streams */
extern "C" __attribute__((visibility("default"))) int ov_streams(void) {
    ALOGD("ov_streams() called");
    return 0;
}

/* Demangled: ov_test_callbacks */
extern "C" __attribute__((visibility("default"))) int ov_test_callbacks(void) {
    ALOGD("ov_test_callbacks() called");
    return 0;
}

/* Demangled: ov_time_tell */
extern "C" __attribute__((visibility("default"))) int ov_time_tell(void) {
    ALOGD("ov_time_tell() called");
    return 0;
}

/* Exported Object: decode_packed_entry_number */
extern "C" __attribute__((visibility("default"))) void* decode_packed_entry_number = NULL;

/* Demangled: vorbis_dsp_destroy */
extern "C" __attribute__((visibility("default"))) int vorbis_dsp_destroy(void) {
    ALOGD("vorbis_dsp_destroy() called");
    return 0;
}

/* Demangled: vorbis_dsp_synthesis */
extern "C" __attribute__((visibility("default"))) int vorbis_dsp_synthesis(void) {
    ALOGD("vorbis_dsp_synthesis() called");
    return 0;
}

/* Demangled: ogg_stream_packetpeek */
extern "C" __attribute__((visibility("default"))) int ogg_stream_packetpeek(void) {
    ALOGD("ogg_stream_packetpeek() called");
    return 0;
}

/* Demangled: vorbis_comment_query_count */
extern "C" __attribute__((visibility("default"))) int vorbis_comment_query_count(void) {
    ALOGD("vorbis_comment_query_count() called");
    return 0;
}

/* Demangled: ov_test */
extern "C" __attribute__((visibility("default"))) int ov_test(void) {
    ALOGD("ov_test() called");
    return 0;
}

/* Demangled: vorbis_book_clear */
extern "C" __attribute__((visibility("default"))) int vorbis_book_clear(void) {
    ALOGD("vorbis_book_clear() called");
    return 0;
}

/* Demangled: res_inverse */
extern "C" __attribute__((visibility("default"))) int res_inverse(void) {
    ALOGD("res_inverse() called");
    return 0;
}

/* Exported Object: mdct_unroll_postlap */
extern "C" __attribute__((visibility("default"))) void* mdct_unroll_postlap = NULL;

/* Demangled: vorbis_info_blocksize */
extern "C" __attribute__((visibility("default"))) int vorbis_info_blocksize(void) {
    ALOGD("vorbis_info_blocksize() called");
    return 0;
}

/* Demangled: ogg_stream_reset_serialno */
extern "C" __attribute__((visibility("default"))) int ogg_stream_reset_serialno(void) {
    ALOGD("ogg_stream_reset_serialno() called");
    return 0;
}

/* Demangled: mdct_backward */
extern "C" __attribute__((visibility("default"))) int mdct_backward(void) {
    ALOGD("mdct_backward() called");
    return 0;
}

/* Exported Object: mdct_backwardARM */
extern "C" __attribute__((visibility("default"))) void* mdct_backwardARM = NULL;

/* Exported Object: mdct_unroll_prelap */
extern "C" __attribute__((visibility("default"))) void* mdct_unroll_prelap = NULL;

/* Demangled: vorbis_info_clear */
extern "C" __attribute__((visibility("default"))) int vorbis_info_clear(void) {
    ALOGD("vorbis_info_clear() called");
    return 0;
}

/* Demangled: mapping_inverse */
extern "C" __attribute__((visibility("default"))) int mapping_inverse(void) {
    ALOGD("mapping_inverse() called");
    return 0;
}

/* Exported Object: render_lineARM */
extern "C" __attribute__((visibility("default"))) void* render_lineARM = NULL;

/* Demangled: _vorbis_unpack_comment */
extern "C" __attribute__((visibility("default"))) int _vorbis_unpack_comment(void) {
    ALOGD("_vorbis_unpack_comment() called");
    return 0;
}

/* Demangled: ov_pcm_seek_page */
extern "C" __attribute__((visibility("default"))) int ov_pcm_seek_page(void) {
    ALOGD("ov_pcm_seek_page() called");
    return 0;
}

/* Demangled: ov_pcm_total */
extern "C" __attribute__((visibility("default"))) int ov_pcm_total(void) {
    ALOGD("ov_pcm_total() called");
    return 0;
}

/* Demangled: vorbis_lsp_to_curve */
extern "C" __attribute__((visibility("default"))) int vorbis_lsp_to_curve(void) {
    ALOGD("vorbis_lsp_to_curve() called");
    return 0;
}

/* Demangled: render_point */
extern "C" __attribute__((visibility("default"))) int render_point(void) {
    ALOGD("render_point() called");
    return 0;
}

/* Demangled: ogg_sync_bufferin */
extern "C" __attribute__((visibility("default"))) int ogg_sync_bufferin(void) {
    ALOGD("ogg_sync_bufferin() called");
    return 0;
}

/* Demangled: ogg_sync_wrote */
extern "C" __attribute__((visibility("default"))) int ogg_sync_wrote(void) {
    ALOGD("ogg_sync_wrote() called");
    return 0;
}

/* Demangled: _ilog */
extern "C" __attribute__((visibility("default"))) int _ilog(void) {
    ALOGD("_ilog() called");
    return 0;
}

/* Demangled: ogg_stream_reset */
extern "C" __attribute__((visibility("default"))) int ogg_stream_reset(void) {
    ALOGD("ogg_stream_reset() called");
    return 0;
}

/* Exported Object: oggpack_readinit */
extern "C" __attribute__((visibility("default"))) void* oggpack_readinit = NULL;

/* Exported Object: mdct_unroll_part2 */
extern "C" __attribute__((visibility("default"))) void* mdct_unroll_part2 = NULL;

/* Demangled: res_unpack */
extern "C" __attribute__((visibility("default"))) int res_unpack(void) {
    ALOGD("res_unpack() called");
    return 0;
}

/* Demangled: ov_clear */
extern "C" __attribute__((visibility("default"))) int ov_clear(void) {
    ALOGD("ov_clear() called");
    return 0;
}

/* Demangled: ov_pcm_seek */
extern "C" __attribute__((visibility("default"))) int ov_pcm_seek(void) {
    ALOGD("ov_pcm_seek() called");
    return 0;
}

/* Demangled: ogg_sync_create */
extern "C" __attribute__((visibility("default"))) int ogg_sync_create(void) {
    ALOGD("ogg_sync_create() called");
    return 0;
}

/* Demangled: ogg_sync_init */
extern "C" __attribute__((visibility("default"))) int ogg_sync_init(void) {
    ALOGD("ogg_sync_init() called");
    return 0;
}

/* Exported Object: mdct_unroll_part3 */
extern "C" __attribute__((visibility("default"))) void* mdct_unroll_part3 = NULL;

/* Demangled: oggpack_bits */
extern "C" __attribute__((visibility("default"))) int oggpack_bits(void) {
    ALOGD("oggpack_bits() called");
    return 0;
}

/* Demangled: ogg_sync_pageout */
extern "C" __attribute__((visibility("default"))) int ogg_sync_pageout(void) {
    ALOGD("ogg_sync_pageout() called");
    return 0;
}

/* Demangled: vorbis_comment_clear */
extern "C" __attribute__((visibility("default"))) int vorbis_comment_clear(void) {
    ALOGD("vorbis_comment_clear() called");
    return 0;
}

/* Exported Object: gerrno */
extern "C" __attribute__((visibility("default"))) void* gerrno = NULL;

/* Demangled: ov_serialnumber */
extern "C" __attribute__((visibility("default"))) int ov_serialnumber(void) {
    ALOGD("ov_serialnumber() called");
    return 0;
}

/* Demangled: vorbis_dsp_create */
extern "C" __attribute__((visibility("default"))) int vorbis_dsp_create(void) {
    ALOGD("vorbis_dsp_create() called");
    return 0;
}

/* Demangled: vorbis_dsp_init */
extern "C" __attribute__((visibility("default"))) int vorbis_dsp_init(void) {
    ALOGD("vorbis_dsp_init() called");
    return 0;
}

/* Demangled: ogg_stream_clear */
extern "C" __attribute__((visibility("default"))) int ogg_stream_clear(void) {
    ALOGD("ogg_stream_clear() called");
    return 0;
}

/* Demangled: ov_bitrate */
extern "C" __attribute__((visibility("default"))) int ov_bitrate(void) {
    ALOGD("ov_bitrate() called");
    return 0;
}

/* Demangled: ov_bitrate_instant */
extern "C" __attribute__((visibility("default"))) int ov_bitrate_instant(void) {
    ALOGD("ov_bitrate_instant() called");
    return 0;
}

/* Demangled: ov_info */
extern "C" __attribute__((visibility("default"))) int ov_info(void) {
    ALOGD("ov_info() called");
    return 0;
}

/* Exported Object: oggpack_look */
extern "C" __attribute__((visibility("default"))) void* oggpack_look = NULL;

/* Demangled: vorbis_packet_blocksize */
extern "C" __attribute__((visibility("default"))) int vorbis_packet_blocksize(void) {
    ALOGD("vorbis_packet_blocksize() called");
    return 0;
}

/* Demangled: ogg_stream_destroy */
extern "C" __attribute__((visibility("default"))) int ogg_stream_destroy(void) {
    ALOGD("ogg_stream_destroy() called");
    return 0;
}

/* Demangled: ov_raw_total */
extern "C" __attribute__((visibility("default"))) int ov_raw_total(void) {
    ALOGD("ov_raw_total() called");
    return 0;
}

/* Demangled: vorbis_dsp_pcmout */
extern "C" __attribute__((visibility("default"))) int vorbis_dsp_pcmout(void) {
    ALOGD("vorbis_dsp_pcmout() called");
    return 0;
}

/* Exported Object: _checksum */
extern "C" __attribute__((visibility("default"))) void* _checksum = NULL;

/* Demangled: ogg_page_pageno */
extern "C" __attribute__((visibility("default"))) int ogg_page_pageno(void) {
    ALOGD("ogg_page_pageno() called");
    return 0;
}

/* Demangled: _vorbis_unpack_books */
extern "C" __attribute__((visibility("default"))) int _vorbis_unpack_books(void) {
    ALOGD("_vorbis_unpack_books() called");
    return 0;
}

/* Demangled: vorbis_book_decodevs_add */
extern "C" __attribute__((visibility("default"))) int vorbis_book_decodevs_add(void) {
    ALOGD("vorbis_book_decodevs_add() called");
    return 0;
}

/* Demangled: vorbis_info_init */
extern "C" __attribute__((visibility("default"))) int vorbis_info_init(void) {
    ALOGD("vorbis_info_init() called");
    return 0;
}

/* Exported Object: FLOOR_fromdB_LOOKUP */
extern "C" __attribute__((visibility("default"))) void* FLOOR_fromdB_LOOKUP = NULL;

/* Demangled: ogg_packet_release */
extern "C" __attribute__((visibility("default"))) int ogg_packet_release(void) {
    ALOGD("ogg_packet_release() called");
    return 0;
}

/* Demangled: ov_pcm_tell */
extern "C" __attribute__((visibility("default"))) int ov_pcm_tell(void) {
    ALOGD("ov_pcm_tell() called");
    return 0;
}

/* Demangled: ogg_page_serialno */
extern "C" __attribute__((visibility("default"))) int ogg_page_serialno(void) {
    ALOGD("ogg_page_serialno() called");
    return 0;
}

/* Demangled: ov_open_callbacks */
extern "C" __attribute__((visibility("default"))) int ov_open_callbacks(void) {
    ALOGD("ov_open_callbacks() called");
    return 0;
}

/* Demangled: ov_raw_seek */
extern "C" __attribute__((visibility("default"))) int ov_raw_seek(void) {
    ALOGD("ov_raw_seek() called");
    return 0;
}

/* Demangled: ov_test_open */
extern "C" __attribute__((visibility("default"))) int ov_test_open(void) {
    ALOGD("ov_test_open() called");
    return 0;
}

/* Exported Object: decode_packed_entry_number_REALSTART */
extern "C" __attribute__((visibility("default"))) void* decode_packed_entry_number_REALSTART = NULL;

/* Demangled: vorbis_dsp_read */
extern "C" __attribute__((visibility("default"))) int vorbis_dsp_read(void) {
    ALOGD("vorbis_dsp_read() called");
    return 0;
}

/* Exported Object: vorbis_book_decodevv_add */
extern "C" __attribute__((visibility("default"))) void* vorbis_book_decodevv_add = NULL;

/* Demangled: ov_open */
extern "C" __attribute__((visibility("default"))) int ov_open(void) {
    ALOGD("ov_open() called");
    return 0;
}

/* Demangled: ov_time_seek_page */
extern "C" __attribute__((visibility("default"))) int ov_time_seek_page(void) {
    ALOGD("ov_time_seek_page() called");
    return 0;
}

/* Demangled: ov_time_total */
extern "C" __attribute__((visibility("default"))) int ov_time_total(void) {
    ALOGD("ov_time_total() called");
    return 0;
}

/* Exported Object: oggpack_adv */
extern "C" __attribute__((visibility("default"))) void* oggpack_adv = NULL;

/* Exported Object: oggpack_read */
extern "C" __attribute__((visibility("default"))) void* oggpack_read = NULL;

/* Demangled: ogg_stream_packetout */
extern "C" __attribute__((visibility("default"))) int ogg_stream_packetout(void) {
    ALOGD("ogg_stream_packetout() called");
    return 0;
}

/* Demangled: _VDBG_dump */
extern "C" __attribute__((visibility("default"))) int _VDBG_dump(void) {
    ALOGD("_VDBG_dump() called");
    return 0;
}

/* Exported Object: global_bytes */
extern "C" __attribute__((visibility("default"))) void* global_bytes = NULL;

/* Demangled: ov_comment */
extern "C" __attribute__((visibility("default"))) int ov_comment(void) {
    ALOGD("ov_comment() called");
    return 0;
}

/* Demangled: _book_maptype1_quantvals */
extern "C" __attribute__((visibility("default"))) int _book_maptype1_quantvals(void) {
    ALOGD("_book_maptype1_quantvals() called");
    return 0;
}

/* Demangled: ogg_page_granulepos */
extern "C" __attribute__((visibility("default"))) int ogg_page_granulepos(void) {
    ALOGD("ogg_page_granulepos() called");
    return 0;
}

/* Demangled: mapping_info_unpack */
extern "C" __attribute__((visibility("default"))) int mapping_info_unpack(void) {
    ALOGD("mapping_info_unpack() called");
    return 0;
}

/* Demangled: ogg_page_release */
extern "C" __attribute__((visibility("default"))) int ogg_page_release(void) {
    ALOGD("ogg_page_release() called");
    return 0;
}

/* Demangled: _VDBG_malloc */
extern "C" __attribute__((visibility("default"))) int _VDBG_malloc(void) {
    ALOGD("_VDBG_malloc() called");
    return 0;
}

/* Demangled: floor0_memosize */
extern "C" __attribute__((visibility("default"))) int floor0_memosize(void) {
    ALOGD("floor0_memosize() called");
    return 0;
}

/* Demangled: vorbis_comment_init */
extern "C" __attribute__((visibility("default"))) int vorbis_comment_init(void) {
    ALOGD("vorbis_comment_init() called");
    return 0;
}

/* Demangled: vorbis_dsp_headerin */
extern "C" __attribute__((visibility("default"))) int vorbis_dsp_headerin(void) {
    ALOGD("vorbis_dsp_headerin() called");
    return 0;
}

/* Demangled: ov_time_seek */
extern "C" __attribute__((visibility("default"))) int ov_time_seek(void) {
    ALOGD("ov_time_seek() called");
    return 0;
}

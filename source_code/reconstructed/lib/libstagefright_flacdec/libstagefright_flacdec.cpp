/*
 * Reverse-Engineered Source for: libstagefright_flacdec.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libstagefright_flacdec"

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
#include "libstagefright_flacdec.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: FLAC__FRAME_HEADER_RESERVED_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__FRAME_HEADER_RESERVED_LEN = NULL;

/* Exported Object: FLAC__STREAM_METADATA_CUESHEET_INDEX_NUMBER_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__STREAM_METADATA_CUESHEET_INDEX_NUMBER_LEN = NULL;

/* Exported Object: FLAC__STREAM_METADATA_CUESHEET_IS_CD_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__STREAM_METADATA_CUESHEET_IS_CD_LEN = NULL;

/* Exported Object: FLAC__StreamDecoderReadStatusString */
extern "C" __attribute__((visibility("default"))) void* FLAC__StreamDecoderReadStatusString = NULL;

/* Demangled: FLAC__stream_decoder_set_metadata_respond_all */
extern "C" __attribute__((visibility("default"))) int FLAC__stream_decoder_set_metadata_respond_all(void) {
    ALOGD("FLAC__stream_decoder_set_metadata_respond_all() called");
    return 0;
}

/* Exported Object: FLAC__FRAME_HEADER_CHANNEL_ASSIGNMENT_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__FRAME_HEADER_CHANNEL_ASSIGNMENT_LEN = NULL;

/* Exported Object: FLAC__STREAM_METADATA_STREAMINFO_MIN_BLOCK_SIZE_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__STREAM_METADATA_STREAMINFO_MIN_BLOCK_SIZE_LEN = NULL;

/* Demangled: FLAC__format_sample_rate_is_subset */
extern "C" __attribute__((visibility("default"))) int FLAC__format_sample_rate_is_subset(void) {
    ALOGD("FLAC__format_sample_rate_is_subset() called");
    return 0;
}

/* Demangled: FLAC__memory_alloc_aligned */
extern "C" __attribute__((visibility("default"))) int FLAC__memory_alloc_aligned(void) {
    ALOGD("FLAC__memory_alloc_aligned() called");
    return 0;
}

/* Exported Object: FLAC__StreamDecoderInitStatusString */
extern "C" __attribute__((visibility("default"))) void* FLAC__StreamDecoderInitStatusString = NULL;

/* Demangled: FLAC__stream_decoder_set_metadata_ignore */
extern "C" __attribute__((visibility("default"))) int FLAC__stream_decoder_set_metadata_ignore(void) {
    ALOGD("FLAC__stream_decoder_set_metadata_ignore() called");
    return 0;
}

/* Demangled: android::FLACDecoder::errorCallback(FLAC__StreamDecoderErrorStatus) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11FLACDecoder13errorCallbackE30FLAC__StreamDecoderErrorStatus(void) {
    ALOGD("_ZN7android11FLACDecoder13errorCallbackE30FLAC__StreamDecoderErrorStatus() called");
    return 0;
}

/* Demangled: FLAC__cpu_info */
extern "C" __attribute__((visibility("default"))) int FLAC__cpu_info(void) {
    ALOGD("FLAC__cpu_info() called");
    return 0;
}

/* Exported Object: FLAC__ENTROPY_CODING_METHOD_PARTITIONED_RICE2_ESCAPE_PARAMETER */
extern "C" __attribute__((visibility("default"))) void* FLAC__ENTROPY_CODING_METHOD_PARTITIONED_RICE2_ESCAPE_PARAMETER = NULL;

/* Demangled: FLAC__lpc_restore_signal */
extern "C" __attribute__((visibility("default"))) int FLAC__lpc_restore_signal(void) {
    ALOGD("FLAC__lpc_restore_signal() called");
    return 0;
}

/* Demangled: FLAC__stream_decoder_get_md5_checking */
extern "C" __attribute__((visibility("default"))) int FLAC__stream_decoder_get_md5_checking(void) {
    ALOGD("FLAC__stream_decoder_get_md5_checking() called");
    return 0;
}

/* Demangled: FLAC__stream_decoder_init_FILE */
extern "C" __attribute__((visibility("default"))) int FLAC__stream_decoder_init_FILE(void) {
    ALOGD("FLAC__stream_decoder_init_FILE() called");
    return 0;
}

/* Exported Object: FLAC__STREAM_METADATA_VORBIS_COMMENT_NUM_COMMENTS_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__STREAM_METADATA_VORBIS_COMMENT_NUM_COMMENTS_LEN = NULL;

/* Demangled: FLAC__bitreader_init */
extern "C" __attribute__((visibility("default"))) int FLAC__bitreader_init(void) {
    ALOGD("FLAC__bitreader_init() called");
    return 0;
}

/* Exported Object: FLAC__STREAM_METADATA_STREAMINFO_CHANNELS_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__STREAM_METADATA_STREAMINFO_CHANNELS_LEN = NULL;

/* Exported Object: FLAC__STREAM_SYNC_STRING */
extern "C" __attribute__((visibility("default"))) void* FLAC__STREAM_SYNC_STRING = NULL;

/* Demangled: FLAC__stream_decoder_seek_absolute */
extern "C" __attribute__((visibility("default"))) int FLAC__stream_decoder_seek_absolute(void) {
    ALOGD("FLAC__stream_decoder_seek_absolute() called");
    return 0;
}

/* Demangled: android::FLACDecoder::flush() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11FLACDecoder5flushEv(void) {
    ALOGD("_ZN7android11FLACDecoder5flushEv() called");
    return 0;
}

/* Exported Object: FLAC__STREAM_METADATA_STREAMINFO_MIN_FRAME_SIZE_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__STREAM_METADATA_STREAMINFO_MIN_FRAME_SIZE_LEN = NULL;

/* Demangled: FLAC__format_entropy_coding_method_partitioned_rice_contents_ensure_size */
extern "C" __attribute__((visibility("default"))) int FLAC__format_entropy_coding_method_partitioned_rice_contents_ensure_size(void) {
    ALOGD("FLAC__format_entropy_coding_method_partitioned_rice_contents_ensure_size() called");
    return 0;
}

/* Demangled: FLAC__format_seektable_is_legal */
extern "C" __attribute__((visibility("default"))) int FLAC__format_seektable_is_legal(void) {
    ALOGD("FLAC__format_seektable_is_legal() called");
    return 0;
}

/* Demangled: FLAC__bitreader_get_read_crc16 */
extern "C" __attribute__((visibility("default"))) int FLAC__bitreader_get_read_crc16(void) {
    ALOGD("FLAC__bitreader_get_read_crc16() called");
    return 0;
}

/* Demangled: FLAC__bitreader_read_unary_unsigned */
extern "C" __attribute__((visibility("default"))) int FLAC__bitreader_read_unary_unsigned(void) {
    ALOGD("FLAC__bitreader_read_unary_unsigned() called");
    return 0;
}

/* Exported Object: FLAC__STREAM_METADATA_CUESHEET_RESERVED_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__STREAM_METADATA_CUESHEET_RESERVED_LEN = NULL;

/* Demangled: FLAC__format_seektable_sort */
extern "C" __attribute__((visibility("default"))) int FLAC__format_seektable_sort(void) {
    ALOGD("FLAC__format_seektable_sort() called");
    return 0;
}

/* Demangled: android::FLACDecoder::init() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11FLACDecoder4initEv(void) {
    ALOGD("_ZN7android11FLACDecoder4initEv() called");
    return 0;
}

/* Exported Object: FLAC__ENTROPY_CODING_METHOD_PARTITIONED_RICE2_PARAMETER_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__ENTROPY_CODING_METHOD_PARTITIONED_RICE2_PARAMETER_LEN = NULL;

/* Exported Object: FLAC__SUBFRAME_LPC_QLP_COEFF_PRECISION_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__SUBFRAME_LPC_QLP_COEFF_PRECISION_LEN = NULL;

/* Demangled: FLAC__format_entropy_coding_method_partitioned_rice_contents_init */
extern "C" __attribute__((visibility("default"))) int FLAC__format_entropy_coding_method_partitioned_rice_contents_init(void) {
    ALOGD("FLAC__format_entropy_coding_method_partitioned_rice_contents_init() called");
    return 0;
}

/* Demangled: safe_malloc_mul_2op_p */
extern "C" __attribute__((visibility("default"))) int safe_malloc_mul_2op_p(void) {
    ALOGD("safe_malloc_mul_2op_p() called");
    return 0;
}

/* Demangled: FLAC__stream_decoder_get_state */
extern "C" __attribute__((visibility("default"))) int FLAC__stream_decoder_get_state(void) {
    ALOGD("FLAC__stream_decoder_get_state() called");
    return 0;
}

/* Demangled: FLAC__stream_decoder_set_metadata_ignore_application */
extern "C" __attribute__((visibility("default"))) int FLAC__stream_decoder_set_metadata_ignore_application(void) {
    ALOGD("FLAC__stream_decoder_set_metadata_ignore_application() called");
    return 0;
}

/* Exported Object: FLAC__STREAM_METADATA_LENGTH_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__STREAM_METADATA_LENGTH_LEN = NULL;

/* Exported Object: FLAC__SUBFRAME_TYPE_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__SUBFRAME_TYPE_LEN = NULL;

/* Demangled: FLAC__bitreader_read_rice_signed */
extern "C" __attribute__((visibility("default"))) int FLAC__bitreader_read_rice_signed(void) {
    ALOGD("FLAC__bitreader_read_rice_signed() called");
    return 0;
}

/* Demangled: FLAC__bitreader_skip_bits_no_crc */
extern "C" __attribute__((visibility("default"))) int FLAC__bitreader_skip_bits_no_crc(void) {
    ALOGD("FLAC__bitreader_skip_bits_no_crc() called");
    return 0;
}

/* Exported Object: FLAC__SUBFRAME_WASTED_BITS_FLAG_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__SUBFRAME_WASTED_BITS_FLAG_LEN = NULL;

/* Demangled: android::FLACDecoder::FLACDecoder() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11FLACDecoderC1Ev(void) {
    ALOGD("_ZN7android11FLACDecoderC1Ev() called");
    return 0;
}

/* Demangled: android::FLACDecoder::~FLACDecoder() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11FLACDecoderD2Ev(void) {
    ALOGD("_ZN7android11FLACDecoderD2Ev() called");
    return 0;
}

/* Demangled: FLAC__bitreader_read_byte_block_aligned_no_crc */
extern "C" __attribute__((visibility("default"))) int FLAC__bitreader_read_byte_block_aligned_no_crc(void) {
    ALOGD("FLAC__bitreader_read_byte_block_aligned_no_crc() called");
    return 0;
}

/* Exported Object: FLAC__FP_ONE */
extern "C" __attribute__((visibility("default"))) void* FLAC__FP_ONE = NULL;

/* Exported Object: FLAC__FRAME_HEADER_ZERO_PAD_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__FRAME_HEADER_ZERO_PAD_LEN = NULL;

/* Exported Object: FLAC__SUBFRAME_TYPE_CONSTANT_BYTE_ALIGNED_MASK */
extern "C" __attribute__((visibility("default"))) void* FLAC__SUBFRAME_TYPE_CONSTANT_BYTE_ALIGNED_MASK = NULL;

/* Exported Object: FLAC__StreamDecoderErrorStatusString */
extern "C" __attribute__((visibility("default"))) void* FLAC__StreamDecoderErrorStatusString = NULL;

/* Exported Object: FLAC__STREAM_METADATA_CUESHEET_INDEX_OFFSET_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__STREAM_METADATA_CUESHEET_INDEX_OFFSET_LEN = NULL;

/* Exported Object: FLAC__StreamDecoderTellStatusString */
extern "C" __attribute__((visibility("default"))) void* FLAC__StreamDecoderTellStatusString = NULL;

/* Demangled: FLAC__stream_decoder_process_until_end_of_stream */
extern "C" __attribute__((visibility("default"))) int FLAC__stream_decoder_process_until_end_of_stream(void) {
    ALOGD("FLAC__stream_decoder_process_until_end_of_stream() called");
    return 0;
}

/* Demangled: android::FLACDecoder::readCallback(unsigned char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11FLACDecoder12readCallbackEPhPj(void) {
    ALOGD("_ZN7android11FLACDecoder12readCallbackEPhPj() called");
    return 0;
}

/* Exported Object: FLAC__STREAM_METADATA_CUESHEET_INDEX_RESERVED_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__STREAM_METADATA_CUESHEET_INDEX_RESERVED_LEN = NULL;

/* Exported Object: FLAC__STREAM_METADATA_STREAMINFO_BITS_PER_SAMPLE_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__STREAM_METADATA_STREAMINFO_BITS_PER_SAMPLE_LEN = NULL;

/* Demangled: FLAC__stream_decoder_get_sample_rate */
extern "C" __attribute__((visibility("default"))) int FLAC__stream_decoder_get_sample_rate(void) {
    ALOGD("FLAC__stream_decoder_get_sample_rate() called");
    return 0;
}

/* Demangled: FLAC__stream_decoder_set_metadata_ignore_all */
extern "C" __attribute__((visibility("default"))) int FLAC__stream_decoder_set_metadata_ignore_all(void) {
    ALOGD("FLAC__stream_decoder_set_metadata_ignore_all() called");
    return 0;
}

/* Exported Object: FLAC__FRAME_FOOTER_CRC_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__FRAME_FOOTER_CRC_LEN = NULL;

/* Exported Object: FLAC__STREAM_METADATA_CUESHEET_TRACK_PRE_EMPHASIS_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__STREAM_METADATA_CUESHEET_TRACK_PRE_EMPHASIS_LEN = NULL;

/* Exported Object: FLAC__STREAM_METADATA_STREAMINFO_SAMPLE_RATE_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__STREAM_METADATA_STREAMINFO_SAMPLE_RATE_LEN = NULL;

/* Demangled: FLAC__stream_decoder_set_metadata_respond */
extern "C" __attribute__((visibility("default"))) int FLAC__stream_decoder_set_metadata_respond(void) {
    ALOGD("FLAC__stream_decoder_set_metadata_respond() called");
    return 0;
}

/* Demangled: FLAC__bitreader_read_rice_signed_block */
extern "C" __attribute__((visibility("default"))) int FLAC__bitreader_read_rice_signed_block(void) {
    ALOGD("FLAC__bitreader_read_rice_signed_block() called");
    return 0;
}

/* Demangled: FLAC__crc8_update */
extern "C" __attribute__((visibility("default"))) int FLAC__crc8_update(void) {
    ALOGD("FLAC__crc8_update() called");
    return 0;
}

/* Exported Object: FLAC__ENTROPY_CODING_METHOD_TYPE_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__ENTROPY_CODING_METHOD_TYPE_LEN = NULL;

/* Exported Object: FLAC__STREAM_METADATA_CUESHEET_TRACK_ISRC_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__STREAM_METADATA_CUESHEET_TRACK_ISRC_LEN = NULL;

/* Demangled: FLAC__bitreader_read_utf8_uint64 */
extern "C" __attribute__((visibility("default"))) int FLAC__bitreader_read_utf8_uint64(void) {
    ALOGD("FLAC__bitreader_read_utf8_uint64() called");
    return 0;
}

/* Exported Object: FLAC__crc16_table */
extern "C" __attribute__((visibility("default"))) void* FLAC__crc16_table = NULL;

/* Exported Object: FLAC__FRAME_HEADER_BITS_PER_SAMPLE_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__FRAME_HEADER_BITS_PER_SAMPLE_LEN = NULL;

/* Exported Object: FLAC__StreamDecoderLengthStatusString */
extern "C" __attribute__((visibility("default"))) void* FLAC__StreamDecoderLengthStatusString = NULL;

/* Demangled: FLAC__stream_decoder_init_stream */
extern "C" __attribute__((visibility("default"))) int FLAC__stream_decoder_init_stream(void) {
    ALOGD("FLAC__stream_decoder_init_stream() called");
    return 0;
}

/* Exported Object: vtable for android::FLACDecoder */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android11FLACDecoderE = NULL;

/* Demangled: FLAC__bitreader_get_input_bits_unconsumed */
extern "C" __attribute__((visibility("default"))) int FLAC__bitreader_get_input_bits_unconsumed(void) {
    ALOGD("FLAC__bitreader_get_input_bits_unconsumed() called");
    return 0;
}

/* Demangled: FLAC__bitreader_read_utf8_uint32 */
extern "C" __attribute__((visibility("default"))) int FLAC__bitreader_read_utf8_uint32(void) {
    ALOGD("FLAC__bitreader_read_utf8_uint32() called");
    return 0;
}

/* Demangled: FLAC__crc8_update_block */
extern "C" __attribute__((visibility("default"))) int FLAC__crc8_update_block(void) {
    ALOGD("FLAC__crc8_update_block() called");
    return 0;
}

/* Exported Object: FLAC__ENTROPY_CODING_METHOD_PARTITIONED_RICE_ESCAPE_PARAMETER */
extern "C" __attribute__((visibility("default"))) void* FLAC__ENTROPY_CODING_METHOD_PARTITIONED_RICE_ESCAPE_PARAMETER = NULL;

/* Exported Object: FLAC__FRAME_HEADER_SYNC_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__FRAME_HEADER_SYNC_LEN = NULL;

/* Demangled: FLAC__MD5Accumulate */
extern "C" __attribute__((visibility("default"))) int FLAC__MD5Accumulate(void) {
    ALOGD("FLAC__MD5Accumulate() called");
    return 0;
}

/* Demangled: FLAC__MD5Final */
extern "C" __attribute__((visibility("default"))) int FLAC__MD5Final(void) {
    ALOGD("FLAC__MD5Final() called");
    return 0;
}

/* Exported Object: FLAC__ENTROPY_CODING_METHOD_PARTITIONED_RICE_ORDER_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__ENTROPY_CODING_METHOD_PARTITIONED_RICE_ORDER_LEN = NULL;

/* Exported Object: FLAC__STREAM_METADATA_IS_LAST_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__STREAM_METADATA_IS_LAST_LEN = NULL;

/* Exported Object: FLAC__STREAM_METADATA_CUESHEET_LEAD_IN_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__STREAM_METADATA_CUESHEET_LEAD_IN_LEN = NULL;

/* Exported Object: FLAC__STREAM_METADATA_PICTURE_COLORS_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__STREAM_METADATA_PICTURE_COLORS_LEN = NULL;

/* Exported Object: FLAC__STREAM_METADATA_PICTURE_TYPE_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__STREAM_METADATA_PICTURE_TYPE_LEN = NULL;

/* Demangled: FLAC__stream_decoder_get_bits_per_sample */
extern "C" __attribute__((visibility("default"))) int FLAC__stream_decoder_get_bits_per_sample(void) {
    ALOGD("FLAC__stream_decoder_get_bits_per_sample() called");
    return 0;
}

/* Demangled: FLAC__stream_decoder_finish */
extern "C" __attribute__((visibility("default"))) int FLAC__stream_decoder_finish(void) {
    ALOGD("FLAC__stream_decoder_finish() called");
    return 0;
}

/* Demangled: FLAC__stream_decoder_init_file */
extern "C" __attribute__((visibility("default"))) int FLAC__stream_decoder_init_file(void) {
    ALOGD("FLAC__stream_decoder_init_file() called");
    return 0;
}

/* Demangled: android::FLACDecoder::addDataToBuffer(unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11FLACDecoder15addDataToBufferEPKhj(void) {
    ALOGD("_ZN7android11FLACDecoder15addDataToBufferEPKhj() called");
    return 0;
}

/* Demangled: FLAC__fixed_compute_best_predictor */
extern "C" __attribute__((visibility("default"))) int FLAC__fixed_compute_best_predictor(void) {
    ALOGD("FLAC__fixed_compute_best_predictor() called");
    return 0;
}

/* Exported Object: FLAC__STREAM_METADATA_SEEKPOINT_PLACEHOLDER */
extern "C" __attribute__((visibility("default"))) void* FLAC__STREAM_METADATA_SEEKPOINT_PLACEHOLDER = NULL;

/* Exported Object: FLAC__crc8_table */
extern "C" __attribute__((visibility("default"))) void* FLAC__crc8_table = NULL;

/* Exported Object: FLAC__STREAM_SYNC */
extern "C" __attribute__((visibility("default"))) void* FLAC__STREAM_SYNC = NULL;

/* Demangled: FLAC__stream_decoder_get_channel_assignment */
extern "C" __attribute__((visibility("default"))) int FLAC__stream_decoder_get_channel_assignment(void) {
    ALOGD("FLAC__stream_decoder_get_channel_assignment() called");
    return 0;
}

/* Demangled: FLAC__bitreader_bits_left_for_byte_alignment */
extern "C" __attribute__((visibility("default"))) int FLAC__bitreader_bits_left_for_byte_alignment(void) {
    ALOGD("FLAC__bitreader_bits_left_for_byte_alignment() called");
    return 0;
}

/* Demangled: FLAC__memory_alloc_aligned_uint32_array */
extern "C" __attribute__((visibility("default"))) int FLAC__memory_alloc_aligned_uint32_array(void) {
    ALOGD("FLAC__memory_alloc_aligned_uint32_array() called");
    return 0;
}

/* Demangled: FLAC__fixed_restore_signal */
extern "C" __attribute__((visibility("default"))) int FLAC__fixed_restore_signal(void) {
    ALOGD("FLAC__fixed_restore_signal() called");
    return 0;
}

/* Demangled: android::FLACDecoder::writeCallback(FLAC__Frame const*, int const* const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11FLACDecoder13writeCallbackEPK11FLAC__FramePKPKi(void) {
    ALOGD("_ZN7android11FLACDecoder13writeCallbackEPK11FLAC__FramePKPKi() called");
    return 0;
}

/* Exported Object: FLAC__SubframeTypeString */
extern "C" __attribute__((visibility("default"))) void* FLAC__SubframeTypeString = NULL;

/* Demangled: FLAC__format_vorbiscomment_entry_value_is_legal */
extern "C" __attribute__((visibility("default"))) int FLAC__format_vorbiscomment_entry_value_is_legal(void) {
    ALOGD("FLAC__format_vorbiscomment_entry_value_is_legal() called");
    return 0;
}

/* Demangled: FLAC__memory_alloc_aligned_uint64_array */
extern "C" __attribute__((visibility("default"))) int FLAC__memory_alloc_aligned_uint64_array(void) {
    ALOGD("FLAC__memory_alloc_aligned_uint64_array() called");
    return 0;
}

/* Demangled: android::FLACDecoder::~FLACDecoder() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11FLACDecoderD0Ev(void) {
    ALOGD("_ZN7android11FLACDecoderD0Ev() called");
    return 0;
}

/* Demangled: FLAC__fixed_compute_residual */
extern "C" __attribute__((visibility("default"))) int FLAC__fixed_compute_residual(void) {
    ALOGD("FLAC__fixed_compute_residual() called");
    return 0;
}

/* Demangled: android::FLACDecoder::metadataCallback(FLAC__StreamMetadata const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11FLACDecoder16metadataCallbackEPK20FLAC__StreamMetadata(void) {
    ALOGD("_ZN7android11FLACDecoder16metadataCallbackEPK20FLAC__StreamMetadata() called");
    return 0;
}

/* Demangled: FLAC__bitreader_delete */
extern "C" __attribute__((visibility("default"))) int FLAC__bitreader_delete(void) {
    ALOGD("FLAC__bitreader_delete() called");
    return 0;
}

/* Exported Object: FLAC__FP_E */
extern "C" __attribute__((visibility("default"))) void* FLAC__FP_E = NULL;

/* Exported Object: FLAC__STREAM_SYNC_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__STREAM_SYNC_LEN = NULL;

/* Demangled: FLAC__stream_decoder_delete */
extern "C" __attribute__((visibility("default"))) int FLAC__stream_decoder_delete(void) {
    ALOGD("FLAC__stream_decoder_delete() called");
    return 0;
}

/* Demangled: android::FLACDecoder::FLACDecoder() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11FLACDecoderC2Ev(void) {
    ALOGD("_ZN7android11FLACDecoderC2Ev() called");
    return 0;
}

/* Demangled: FLAC__bitreader_read_raw_int32 */
extern "C" __attribute__((visibility("default"))) int FLAC__bitreader_read_raw_int32(void) {
    ALOGD("FLAC__bitreader_read_raw_int32() called");
    return 0;
}

/* Exported Object: FLAC__STREAM_METADATA_PICTURE_DEPTH_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__STREAM_METADATA_PICTURE_DEPTH_LEN = NULL;

/* Demangled: FLAC__stream_decoder_get_resolved_state_string */
extern "C" __attribute__((visibility("default"))) int FLAC__stream_decoder_get_resolved_state_string(void) {
    ALOGD("FLAC__stream_decoder_get_resolved_state_string() called");
    return 0;
}

/* Demangled: FLAC__bitreader_clear */
extern "C" __attribute__((visibility("default"))) int FLAC__bitreader_clear(void) {
    ALOGD("FLAC__bitreader_clear() called");
    return 0;
}

/* Demangled: FLAC__bitreader_reset_read_crc16 */
extern "C" __attribute__((visibility("default"))) int FLAC__bitreader_reset_read_crc16(void) {
    ALOGD("FLAC__bitreader_reset_read_crc16() called");
    return 0;
}

/* Exported Object: FLAC__FRAME_HEADER_BLOCK_SIZE_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__FRAME_HEADER_BLOCK_SIZE_LEN = NULL;

/* Demangled: FLAC__format_entropy_coding_method_partitioned_rice_contents_clear */
extern "C" __attribute__((visibility("default"))) int FLAC__format_entropy_coding_method_partitioned_rice_contents_clear(void) {
    ALOGD("FLAC__format_entropy_coding_method_partitioned_rice_contents_clear() called");
    return 0;
}

/* Demangled: FLAC__format_vorbiscomment_entry_name_is_legal */
extern "C" __attribute__((visibility("default"))) int FLAC__format_vorbiscomment_entry_name_is_legal(void) {
    ALOGD("FLAC__format_vorbiscomment_entry_name_is_legal() called");
    return 0;
}

/* Exported Object: FLAC_API_SUPPORTS_OGG_FLAC */
extern "C" __attribute__((visibility("default"))) void* FLAC_API_SUPPORTS_OGG_FLAC = NULL;

/* Exported Object: FLAC__StreamDecoderStateString */
extern "C" __attribute__((visibility("default"))) void* FLAC__StreamDecoderStateString = NULL;

/* Demangled: android::FLACDecoder::parseMetadata(unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11FLACDecoder13parseMetadataEPKhj(void) {
    ALOGD("_ZN7android11FLACDecoder13parseMetadataEPKhj() called");
    return 0;
}

/* Exported Object: FLAC__FP_ONE_HALF */
extern "C" __attribute__((visibility("default"))) void* FLAC__FP_ONE_HALF = NULL;

/* Exported Object: FLAC__STREAM_METADATA_SEEKPOINT_SAMPLE_NUMBER_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__STREAM_METADATA_SEEKPOINT_SAMPLE_NUMBER_LEN = NULL;

/* Demangled: FLAC__format_picture_is_legal */
extern "C" __attribute__((visibility("default"))) int FLAC__format_picture_is_legal(void) {
    ALOGD("FLAC__format_picture_is_legal() called");
    return 0;
}

/* Demangled: FLAC__format_vorbiscomment_entry_is_legal */
extern "C" __attribute__((visibility("default"))) int FLAC__format_vorbiscomment_entry_is_legal(void) {
    ALOGD("FLAC__format_vorbiscomment_entry_is_legal() called");
    return 0;
}

/* Exported Object: FLAC__STREAM_METADATA_APPLICATION_ID_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__STREAM_METADATA_APPLICATION_ID_LEN = NULL;

/* Exported Object: FLAC__STREAM_METADATA_PICTURE_HEIGHT_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__STREAM_METADATA_PICTURE_HEIGHT_LEN = NULL;

/* Demangled: FLAC__format_blocksize_is_subset */
extern "C" __attribute__((visibility("default"))) int FLAC__format_blocksize_is_subset(void) {
    ALOGD("FLAC__format_blocksize_is_subset() called");
    return 0;
}

/* Demangled: FLAC__format_get_max_rice_partition_order */
extern "C" __attribute__((visibility("default"))) int FLAC__format_get_max_rice_partition_order(void) {
    ALOGD("FLAC__format_get_max_rice_partition_order() called");
    return 0;
}

/* Demangled: FLAC__format_sample_rate_is_valid */
extern "C" __attribute__((visibility("default"))) int FLAC__format_sample_rate_is_valid(void) {
    ALOGD("FLAC__format_sample_rate_is_valid() called");
    return 0;
}

/* Demangled: FLAC__stream_decoder_init_ogg_FILE */
extern "C" __attribute__((visibility("default"))) int FLAC__stream_decoder_init_ogg_FILE(void) {
    ALOGD("FLAC__stream_decoder_init_ogg_FILE() called");
    return 0;
}

/* Demangled: FLAC__crc8 */
extern "C" __attribute__((visibility("default"))) int FLAC__crc8(void) {
    ALOGD("FLAC__crc8() called");
    return 0;
}

/* Demangled: FLAC__stream_decoder_get_blocksize */
extern "C" __attribute__((visibility("default"))) int FLAC__stream_decoder_get_blocksize(void) {
    ALOGD("FLAC__stream_decoder_get_blocksize() called");
    return 0;
}

/* Demangled: FLAC__crc16 */
extern "C" __attribute__((visibility("default"))) int FLAC__crc16(void) {
    ALOGD("FLAC__crc16() called");
    return 0;
}

/* Exported Object: FLAC__FRAME_HEADER_SAMPLE_RATE_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__FRAME_HEADER_SAMPLE_RATE_LEN = NULL;

/* Exported Object: FLAC__MetadataTypeString */
extern "C" __attribute__((visibility("default"))) void* FLAC__MetadataTypeString = NULL;

/* Exported Object: FLAC__StreamMetadata_Picture_TypeString */
extern "C" __attribute__((visibility("default"))) void* FLAC__StreamMetadata_Picture_TypeString = NULL;

/* Demangled: FLAC__bitreader_free */
extern "C" __attribute__((visibility("default"))) int FLAC__bitreader_free(void) {
    ALOGD("FLAC__bitreader_free() called");
    return 0;
}

/* Demangled: FLAC__bitreader_skip_byte_block_aligned_no_crc */
extern "C" __attribute__((visibility("default"))) int FLAC__bitreader_skip_byte_block_aligned_no_crc(void) {
    ALOGD("FLAC__bitreader_skip_byte_block_aligned_no_crc() called");
    return 0;
}

/* Exported Object: FLAC__ENTROPY_CODING_METHOD_PARTITIONED_RICE_PARAMETER_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__ENTROPY_CODING_METHOD_PARTITIONED_RICE_PARAMETER_LEN = NULL;

/* Exported Object: FLAC__STREAM_METADATA_CUESHEET_NUM_TRACKS_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__STREAM_METADATA_CUESHEET_NUM_TRACKS_LEN = NULL;

/* Exported Object: FLAC__STREAM_METADATA_CUESHEET_TRACK_NUMBER_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__STREAM_METADATA_CUESHEET_TRACK_NUMBER_LEN = NULL;

/* Exported Object: FLAC__STREAM_METADATA_STREAMINFO_MAX_BLOCK_SIZE_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__STREAM_METADATA_STREAMINFO_MAX_BLOCK_SIZE_LEN = NULL;

/* Demangled: FLAC__stream_decoder_new */
extern "C" __attribute__((visibility("default"))) int FLAC__stream_decoder_new(void) {
    ALOGD("FLAC__stream_decoder_new() called");
    return 0;
}

/* Demangled: FLAC__fixedpoint_log2 */
extern "C" __attribute__((visibility("default"))) int FLAC__fixedpoint_log2(void) {
    ALOGD("FLAC__fixedpoint_log2() called");
    return 0;
}

/* Exported Object: FLAC__FRAME_HEADER_BLOCKING_STRATEGY_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__FRAME_HEADER_BLOCKING_STRATEGY_LEN = NULL;

/* Exported Object: FLAC__SUBFRAME_LPC_QLP_SHIFT_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__SUBFRAME_LPC_QLP_SHIFT_LEN = NULL;

/* Demangled: FLAC__memory_alloc_aligned_unsigned_array */
extern "C" __attribute__((visibility("default"))) int FLAC__memory_alloc_aligned_unsigned_array(void) {
    ALOGD("FLAC__memory_alloc_aligned_unsigned_array() called");
    return 0;
}

/* Demangled: FLAC__stream_decoder_process_until_end_of_metadata */
extern "C" __attribute__((visibility("default"))) int FLAC__stream_decoder_process_until_end_of_metadata(void) {
    ALOGD("FLAC__stream_decoder_process_until_end_of_metadata() called");
    return 0;
}

/* Demangled: FLAC__bitreader_read_raw_uint64 */
extern "C" __attribute__((visibility("default"))) int FLAC__bitreader_read_raw_uint64(void) {
    ALOGD("FLAC__bitreader_read_raw_uint64() called");
    return 0;
}

/* Demangled: FLAC__bitreader_read_uint32_little_endian */
extern "C" __attribute__((visibility("default"))) int FLAC__bitreader_read_uint32_little_endian(void) {
    ALOGD("FLAC__bitreader_read_uint32_little_endian() called");
    return 0;
}

/* Exported Object: FLAC__STREAM_METADATA_CUESHEET_TRACK_RESERVED_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__STREAM_METADATA_CUESHEET_TRACK_RESERVED_LEN = NULL;

/* Exported Object: FLAC__StreamDecoderWriteStatusString */
extern "C" __attribute__((visibility("default"))) void* FLAC__StreamDecoderWriteStatusString = NULL;

/* Demangled: FLAC__bitreader_read_raw_uint32 */
extern "C" __attribute__((visibility("default"))) int FLAC__bitreader_read_raw_uint32(void) {
    ALOGD("FLAC__bitreader_read_raw_uint32() called");
    return 0;
}

/* Exported Object: FLAC__FrameNumberTypeString */
extern "C" __attribute__((visibility("default"))) void* FLAC__FrameNumberTypeString = NULL;

/* Exported Object: FLAC__STREAM_METADATA_PICTURE_DESCRIPTION_LENGTH_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__STREAM_METADATA_PICTURE_DESCRIPTION_LENGTH_LEN = NULL;

/* Exported Object: FLAC__STREAM_METADATA_CUESHEET_TRACK_TYPE_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__STREAM_METADATA_CUESHEET_TRACK_TYPE_LEN = NULL;

/* Exported Object: FLAC__STREAM_METADATA_SEEKPOINT_FRAME_SAMPLES_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__STREAM_METADATA_SEEKPOINT_FRAME_SAMPLES_LEN = NULL;

/* Exported Object: FLAC__STREAM_METADATA_STREAMINFO_MAX_FRAME_SIZE_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__STREAM_METADATA_STREAMINFO_MAX_FRAME_SIZE_LEN = NULL;

/* Exported Object: FLAC__STREAM_METADATA_VORBIS_COMMENT_ENTRY_LENGTH_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__STREAM_METADATA_VORBIS_COMMENT_ENTRY_LENGTH_LEN = NULL;

/* Demangled: FLAC__stream_decoder_get_total_samples */
extern "C" __attribute__((visibility("default"))) int FLAC__stream_decoder_get_total_samples(void) {
    ALOGD("FLAC__stream_decoder_get_total_samples() called");
    return 0;
}

/* Demangled: FLAC__bitreader_new */
extern "C" __attribute__((visibility("default"))) int FLAC__bitreader_new(void) {
    ALOGD("FLAC__bitreader_new() called");
    return 0;
}

/* Exported Object: FLAC__FP_LN2 */
extern "C" __attribute__((visibility("default"))) void* FLAC__FP_LN2 = NULL;

/* Exported Object: FLAC__STREAM_METADATA_STREAMINFO_MD5SUM_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__STREAM_METADATA_STREAMINFO_MD5SUM_LEN = NULL;

/* Exported Object: FLAC__VENDOR_STRING */
extern "C" __attribute__((visibility("default"))) void* FLAC__VENDOR_STRING = NULL;

/* Demangled: FLAC__stream_decoder_skip_single_frame */
extern "C" __attribute__((visibility("default"))) int FLAC__stream_decoder_skip_single_frame(void) {
    ALOGD("FLAC__stream_decoder_skip_single_frame() called");
    return 0;
}

/* Demangled: android::FLACDecoder::decodeOneFrame(unsigned char const*, unsigned int, void*, unsigned int*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11FLACDecoder14decodeOneFrameEPKhjPvPjb(void) {
    ALOGD("_ZN7android11FLACDecoder14decodeOneFrameEPKhjPvPjb() called");
    return 0;
}

/* Demangled: FLAC__stream_decoder_get_decode_position */
extern "C" __attribute__((visibility("default"))) int FLAC__stream_decoder_get_decode_position(void) {
    ALOGD("FLAC__stream_decoder_get_decode_position() called");
    return 0;
}

/* Exported Object: FLAC__STREAM_METADATA_SEEKPOINT_STREAM_OFFSET_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__STREAM_METADATA_SEEKPOINT_STREAM_OFFSET_LEN = NULL;

/* Demangled: FLAC__lpc_restore_signal_wide */
extern "C" __attribute__((visibility("default"))) int FLAC__lpc_restore_signal_wide(void) {
    ALOGD("FLAC__lpc_restore_signal_wide() called");
    return 0;
}

/* Demangled: FLAC__stream_decoder_flush */
extern "C" __attribute__((visibility("default"))) int FLAC__stream_decoder_flush(void) {
    ALOGD("FLAC__stream_decoder_flush() called");
    return 0;
}

/* Demangled: FLAC__stream_decoder_set_metadata_respond_application */
extern "C" __attribute__((visibility("default"))) int FLAC__stream_decoder_set_metadata_respond_application(void) {
    ALOGD("FLAC__stream_decoder_set_metadata_respond_application() called");
    return 0;
}

/* Demangled: FLAC__bitreader_dump */
extern "C" __attribute__((visibility("default"))) int FLAC__bitreader_dump(void) {
    ALOGD("FLAC__bitreader_dump() called");
    return 0;
}

/* Demangled: FLAC__fixed_compute_best_predictor_wide */
extern "C" __attribute__((visibility("default"))) int FLAC__fixed_compute_best_predictor_wide(void) {
    ALOGD("FLAC__fixed_compute_best_predictor_wide() called");
    return 0;
}

/* Exported Object: FLAC__SUBFRAME_TYPE_FIXED_BYTE_ALIGNED_MASK */
extern "C" __attribute__((visibility("default"))) void* FLAC__SUBFRAME_TYPE_FIXED_BYTE_ALIGNED_MASK = NULL;

/* Demangled: FLAC__format_get_max_rice_partition_order_from_blocksize */
extern "C" __attribute__((visibility("default"))) int FLAC__format_get_max_rice_partition_order_from_blocksize(void) {
    ALOGD("FLAC__format_get_max_rice_partition_order_from_blocksize() called");
    return 0;
}

/* Demangled: FLAC__memory_alloc_aligned_int32_array */
extern "C" __attribute__((visibility("default"))) int FLAC__memory_alloc_aligned_int32_array(void) {
    ALOGD("FLAC__memory_alloc_aligned_int32_array() called");
    return 0;
}

/* Demangled: FLAC__MD5Init */
extern "C" __attribute__((visibility("default"))) int FLAC__MD5Init(void) {
    ALOGD("FLAC__MD5Init() called");
    return 0;
}

/* Demangled: android::FLACDecoder::~FLACDecoder() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11FLACDecoderD1Ev(void) {
    ALOGD("_ZN7android11FLACDecoderD1Ev() called");
    return 0;
}

/* Exported Object: FLAC__SUBFRAME_TYPE_VERBATIM_BYTE_ALIGNED_MASK */
extern "C" __attribute__((visibility("default"))) void* FLAC__SUBFRAME_TYPE_VERBATIM_BYTE_ALIGNED_MASK = NULL;

/* Demangled: FLAC__format_get_max_rice_partition_order_from_blocksize_limited_max_and_predictor_order */
extern "C" __attribute__((visibility("default"))) int FLAC__format_get_max_rice_partition_order_from_blocksize_limited_max_and_predictor_order(void) {
    ALOGD("FLAC__format_get_max_rice_partition_order_from_blocksize_limited_max_and_predictor_order() called");
    return 0;
}

/* Demangled: FLAC__format_cuesheet_is_legal */
extern "C" __attribute__((visibility("default"))) int FLAC__format_cuesheet_is_legal(void) {
    ALOGD("FLAC__format_cuesheet_is_legal() called");
    return 0;
}

/* Demangled: FLAC__stream_decoder_process_single */
extern "C" __attribute__((visibility("default"))) int FLAC__stream_decoder_process_single(void) {
    ALOGD("FLAC__stream_decoder_process_single() called");
    return 0;
}

/* Demangled: android::FLACDecoder::Create() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11FLACDecoder6CreateEv(void) {
    ALOGD("_ZN7android11FLACDecoder6CreateEv() called");
    return 0;
}

/* Exported Object: FLAC__ENTROPY_CODING_METHOD_PARTITIONED_RICE_RAW_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__ENTROPY_CODING_METHOD_PARTITIONED_RICE_RAW_LEN = NULL;

/* Exported Object: FLAC__EntropyCodingMethodTypeString */
extern "C" __attribute__((visibility("default"))) void* FLAC__EntropyCodingMethodTypeString = NULL;

/* Exported Object: FLAC__STREAM_METADATA_CUESHEET_MEDIA_CATALOG_NUMBER_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__STREAM_METADATA_CUESHEET_MEDIA_CATALOG_NUMBER_LEN = NULL;

/* Exported Object: FLAC__STREAM_METADATA_CUESHEET_TRACK_OFFSET_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__STREAM_METADATA_CUESHEET_TRACK_OFFSET_LEN = NULL;

/* Demangled: FLAC__stream_decoder_init_ogg_stream */
extern "C" __attribute__((visibility("default"))) int FLAC__stream_decoder_init_ogg_stream(void) {
    ALOGD("FLAC__stream_decoder_init_ogg_stream() called");
    return 0;
}

/* Exported Object: FLAC__FP_ZERO */
extern "C" __attribute__((visibility("default"))) void* FLAC__FP_ZERO = NULL;

/* Exported Object: FLAC__STREAM_METADATA_PICTURE_DATA_LENGTH_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__STREAM_METADATA_PICTURE_DATA_LENGTH_LEN = NULL;

/* Exported Object: FLAC__STREAM_METADATA_PICTURE_MIME_TYPE_LENGTH_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__STREAM_METADATA_PICTURE_MIME_TYPE_LENGTH_LEN = NULL;

/* Exported Object: FLAC__STREAM_METADATA_PICTURE_WIDTH_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__STREAM_METADATA_PICTURE_WIDTH_LEN = NULL;

/* Exported Object: FLAC__STREAM_METADATA_TYPE_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__STREAM_METADATA_TYPE_LEN = NULL;

/* Exported Object: FLAC__SUBFRAME_TYPE_LPC_BYTE_ALIGNED_MASK */
extern "C" __attribute__((visibility("default"))) void* FLAC__SUBFRAME_TYPE_LPC_BYTE_ALIGNED_MASK = NULL;

/* Demangled: FLAC__stream_decoder_get_channels */
extern "C" __attribute__((visibility("default"))) int FLAC__stream_decoder_get_channels(void) {
    ALOGD("FLAC__stream_decoder_get_channels() called");
    return 0;
}

/* Demangled: FLAC__stream_decoder_set_ogg_serial_number */
extern "C" __attribute__((visibility("default"))) int FLAC__stream_decoder_set_ogg_serial_number(void) {
    ALOGD("FLAC__stream_decoder_set_ogg_serial_number() called");
    return 0;
}

/* Exported Object: FLAC__ChannelAssignmentString */
extern "C" __attribute__((visibility("default"))) void* FLAC__ChannelAssignmentString = NULL;

/* Exported Object: FLAC__FRAME_HEADER_CRC_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__FRAME_HEADER_CRC_LEN = NULL;

/* Exported Object: FLAC__STREAM_METADATA_CUESHEET_TRACK_NUM_INDICES_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__STREAM_METADATA_CUESHEET_TRACK_NUM_INDICES_LEN = NULL;

/* Exported Object: FLAC__VERSION_STRING */
extern "C" __attribute__((visibility("default"))) void* FLAC__VERSION_STRING = NULL;

/* Exported Object: FLAC__StreamDecoderSeekStatusString */
extern "C" __attribute__((visibility("default"))) void* FLAC__StreamDecoderSeekStatusString = NULL;

/* Demangled: FLAC__stream_decoder_get_input_bytes_unconsumed */
extern "C" __attribute__((visibility("default"))) int FLAC__stream_decoder_get_input_bytes_unconsumed(void) {
    ALOGD("FLAC__stream_decoder_get_input_bytes_unconsumed() called");
    return 0;
}

/* Exported Object: FLAC__SUBFRAME_ZERO_PAD_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__SUBFRAME_ZERO_PAD_LEN = NULL;

/* Demangled: FLAC__stream_decoder_init_ogg_file */
extern "C" __attribute__((visibility("default"))) int FLAC__stream_decoder_init_ogg_file(void) {
    ALOGD("FLAC__stream_decoder_init_ogg_file() called");
    return 0;
}

/* Exported Object: FLAC__FRAME_HEADER_SYNC */
extern "C" __attribute__((visibility("default"))) void* FLAC__FRAME_HEADER_SYNC = NULL;

/* Demangled: FLAC__stream_decoder_reset */
extern "C" __attribute__((visibility("default"))) int FLAC__stream_decoder_reset(void) {
    ALOGD("FLAC__stream_decoder_reset() called");
    return 0;
}

/* Demangled: FLAC__stream_decoder_set_md5_checking */
extern "C" __attribute__((visibility("default"))) int FLAC__stream_decoder_set_md5_checking(void) {
    ALOGD("FLAC__stream_decoder_set_md5_checking() called");
    return 0;
}

/* Demangled: FLAC__bitreader_is_consumed_byte_aligned */
extern "C" __attribute__((visibility("default"))) int FLAC__bitreader_is_consumed_byte_aligned(void) {
    ALOGD("FLAC__bitreader_is_consumed_byte_aligned() called");
    return 0;
}

/* Exported Object: FLAC__STREAM_METADATA_STREAMINFO_TOTAL_SAMPLES_LEN */
extern "C" __attribute__((visibility("default"))) void* FLAC__STREAM_METADATA_STREAMINFO_TOTAL_SAMPLES_LEN = NULL;

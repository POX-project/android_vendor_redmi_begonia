/*
 * Reverse-Engineered ABI Specification for: libstagefright_flacdec.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libstagefright_flacdec.so
 */

#ifndef BEGONIA_RE_LIBSTAGEFRIGHT_FLACDEC_H
#define BEGONIA_RE_LIBSTAGEFRIGHT_FLACDEC_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: FLAC__FRAME_HEADER_RESERVED_LEN */
/* Demangled: FLAC__FRAME_HEADER_RESERVED_LEN */
extern void* FLAC__FRAME_HEADER_RESERVED_LEN;

/* Symbol: FLAC__STREAM_METADATA_CUESHEET_INDEX_NUMBER_LEN */
/* Demangled: FLAC__STREAM_METADATA_CUESHEET_INDEX_NUMBER_LEN */
extern void* FLAC__STREAM_METADATA_CUESHEET_INDEX_NUMBER_LEN;

/* Symbol: FLAC__STREAM_METADATA_CUESHEET_IS_CD_LEN */
/* Demangled: FLAC__STREAM_METADATA_CUESHEET_IS_CD_LEN */
extern void* FLAC__STREAM_METADATA_CUESHEET_IS_CD_LEN;

/* Symbol: FLAC__StreamDecoderReadStatusString */
/* Demangled: FLAC__StreamDecoderReadStatusString */
extern void* FLAC__StreamDecoderReadStatusString;

/* Symbol: FLAC__stream_decoder_set_metadata_respond_all */
/* Demangled: FLAC__stream_decoder_set_metadata_respond_all */
int FLAC__stream_decoder_set_metadata_respond_all(void);

/* Symbol: FLAC__FRAME_HEADER_CHANNEL_ASSIGNMENT_LEN */
/* Demangled: FLAC__FRAME_HEADER_CHANNEL_ASSIGNMENT_LEN */
extern void* FLAC__FRAME_HEADER_CHANNEL_ASSIGNMENT_LEN;

/* Symbol: FLAC__STREAM_METADATA_STREAMINFO_MIN_BLOCK_SIZE_LEN */
/* Demangled: FLAC__STREAM_METADATA_STREAMINFO_MIN_BLOCK_SIZE_LEN */
extern void* FLAC__STREAM_METADATA_STREAMINFO_MIN_BLOCK_SIZE_LEN;

/* Symbol: FLAC__format_sample_rate_is_subset */
/* Demangled: FLAC__format_sample_rate_is_subset */
int FLAC__format_sample_rate_is_subset(void);

/* Symbol: FLAC__memory_alloc_aligned */
/* Demangled: FLAC__memory_alloc_aligned */
int FLAC__memory_alloc_aligned(void);

/* Symbol: FLAC__StreamDecoderInitStatusString */
/* Demangled: FLAC__StreamDecoderInitStatusString */
extern void* FLAC__StreamDecoderInitStatusString;

/* Symbol: FLAC__stream_decoder_set_metadata_ignore */
/* Demangled: FLAC__stream_decoder_set_metadata_ignore */
int FLAC__stream_decoder_set_metadata_ignore(void);

/* Symbol: _ZN7android11FLACDecoder13errorCallbackE30FLAC__StreamDecoderErrorStatus */
/* Demangled: android::FLACDecoder::errorCallback(FLAC__StreamDecoderErrorStatus) */
int _ZN7android11FLACDecoder13errorCallbackE30FLAC__StreamDecoderErrorStatus(void);

/* Symbol: FLAC__cpu_info */
/* Demangled: FLAC__cpu_info */
int FLAC__cpu_info(void);

/* Symbol: FLAC__ENTROPY_CODING_METHOD_PARTITIONED_RICE2_ESCAPE_PARAMETER */
/* Demangled: FLAC__ENTROPY_CODING_METHOD_PARTITIONED_RICE2_ESCAPE_PARAMETER */
extern void* FLAC__ENTROPY_CODING_METHOD_PARTITIONED_RICE2_ESCAPE_PARAMETER;

/* Symbol: FLAC__lpc_restore_signal */
/* Demangled: FLAC__lpc_restore_signal */
int FLAC__lpc_restore_signal(void);

/* Symbol: FLAC__stream_decoder_get_md5_checking */
/* Demangled: FLAC__stream_decoder_get_md5_checking */
int FLAC__stream_decoder_get_md5_checking(void);

/* Symbol: FLAC__stream_decoder_init_FILE */
/* Demangled: FLAC__stream_decoder_init_FILE */
int FLAC__stream_decoder_init_FILE(void);

/* Symbol: FLAC__STREAM_METADATA_VORBIS_COMMENT_NUM_COMMENTS_LEN */
/* Demangled: FLAC__STREAM_METADATA_VORBIS_COMMENT_NUM_COMMENTS_LEN */
extern void* FLAC__STREAM_METADATA_VORBIS_COMMENT_NUM_COMMENTS_LEN;

/* Symbol: FLAC__bitreader_init */
/* Demangled: FLAC__bitreader_init */
int FLAC__bitreader_init(void);

/* Symbol: FLAC__STREAM_METADATA_STREAMINFO_CHANNELS_LEN */
/* Demangled: FLAC__STREAM_METADATA_STREAMINFO_CHANNELS_LEN */
extern void* FLAC__STREAM_METADATA_STREAMINFO_CHANNELS_LEN;

/* Symbol: FLAC__STREAM_SYNC_STRING */
/* Demangled: FLAC__STREAM_SYNC_STRING */
extern void* FLAC__STREAM_SYNC_STRING;

/* Symbol: FLAC__stream_decoder_seek_absolute */
/* Demangled: FLAC__stream_decoder_seek_absolute */
int FLAC__stream_decoder_seek_absolute(void);

/* Symbol: _ZN7android11FLACDecoder5flushEv */
/* Demangled: android::FLACDecoder::flush() */
int _ZN7android11FLACDecoder5flushEv(void);

/* Symbol: FLAC__STREAM_METADATA_STREAMINFO_MIN_FRAME_SIZE_LEN */
/* Demangled: FLAC__STREAM_METADATA_STREAMINFO_MIN_FRAME_SIZE_LEN */
extern void* FLAC__STREAM_METADATA_STREAMINFO_MIN_FRAME_SIZE_LEN;

/* Symbol: FLAC__format_entropy_coding_method_partitioned_rice_contents_ensure_size */
/* Demangled: FLAC__format_entropy_coding_method_partitioned_rice_contents_ensure_size */
int FLAC__format_entropy_coding_method_partitioned_rice_contents_ensure_size(void);

/* Symbol: FLAC__format_seektable_is_legal */
/* Demangled: FLAC__format_seektable_is_legal */
int FLAC__format_seektable_is_legal(void);

/* Symbol: FLAC__bitreader_get_read_crc16 */
/* Demangled: FLAC__bitreader_get_read_crc16 */
int FLAC__bitreader_get_read_crc16(void);

/* Symbol: FLAC__bitreader_read_unary_unsigned */
/* Demangled: FLAC__bitreader_read_unary_unsigned */
int FLAC__bitreader_read_unary_unsigned(void);

/* Symbol: FLAC__STREAM_METADATA_CUESHEET_RESERVED_LEN */
/* Demangled: FLAC__STREAM_METADATA_CUESHEET_RESERVED_LEN */
extern void* FLAC__STREAM_METADATA_CUESHEET_RESERVED_LEN;

/* Symbol: FLAC__format_seektable_sort */
/* Demangled: FLAC__format_seektable_sort */
int FLAC__format_seektable_sort(void);

/* Symbol: _ZN7android11FLACDecoder4initEv */
/* Demangled: android::FLACDecoder::init() */
int _ZN7android11FLACDecoder4initEv(void);

/* Symbol: FLAC__ENTROPY_CODING_METHOD_PARTITIONED_RICE2_PARAMETER_LEN */
/* Demangled: FLAC__ENTROPY_CODING_METHOD_PARTITIONED_RICE2_PARAMETER_LEN */
extern void* FLAC__ENTROPY_CODING_METHOD_PARTITIONED_RICE2_PARAMETER_LEN;

/* Symbol: FLAC__SUBFRAME_LPC_QLP_COEFF_PRECISION_LEN */
/* Demangled: FLAC__SUBFRAME_LPC_QLP_COEFF_PRECISION_LEN */
extern void* FLAC__SUBFRAME_LPC_QLP_COEFF_PRECISION_LEN;

/* Symbol: FLAC__format_entropy_coding_method_partitioned_rice_contents_init */
/* Demangled: FLAC__format_entropy_coding_method_partitioned_rice_contents_init */
int FLAC__format_entropy_coding_method_partitioned_rice_contents_init(void);

/* Symbol: safe_malloc_mul_2op_p */
/* Demangled: safe_malloc_mul_2op_p */
int safe_malloc_mul_2op_p(void);

/* Symbol: FLAC__stream_decoder_get_state */
/* Demangled: FLAC__stream_decoder_get_state */
int FLAC__stream_decoder_get_state(void);

/* Symbol: FLAC__stream_decoder_set_metadata_ignore_application */
/* Demangled: FLAC__stream_decoder_set_metadata_ignore_application */
int FLAC__stream_decoder_set_metadata_ignore_application(void);

/* Symbol: FLAC__STREAM_METADATA_LENGTH_LEN */
/* Demangled: FLAC__STREAM_METADATA_LENGTH_LEN */
extern void* FLAC__STREAM_METADATA_LENGTH_LEN;

/* Symbol: FLAC__SUBFRAME_TYPE_LEN */
/* Demangled: FLAC__SUBFRAME_TYPE_LEN */
extern void* FLAC__SUBFRAME_TYPE_LEN;

/* Symbol: FLAC__bitreader_read_rice_signed */
/* Demangled: FLAC__bitreader_read_rice_signed */
int FLAC__bitreader_read_rice_signed(void);

/* Symbol: FLAC__bitreader_skip_bits_no_crc */
/* Demangled: FLAC__bitreader_skip_bits_no_crc */
int FLAC__bitreader_skip_bits_no_crc(void);

/* Symbol: FLAC__SUBFRAME_WASTED_BITS_FLAG_LEN */
/* Demangled: FLAC__SUBFRAME_WASTED_BITS_FLAG_LEN */
extern void* FLAC__SUBFRAME_WASTED_BITS_FLAG_LEN;

/* Symbol: _ZN7android11FLACDecoderC1Ev */
/* Demangled: android::FLACDecoder::FLACDecoder() */
int _ZN7android11FLACDecoderC1Ev(void);

/* Symbol: _ZN7android11FLACDecoderD2Ev */
/* Demangled: android::FLACDecoder::~FLACDecoder() */
int _ZN7android11FLACDecoderD2Ev(void);

/* Symbol: FLAC__bitreader_read_byte_block_aligned_no_crc */
/* Demangled: FLAC__bitreader_read_byte_block_aligned_no_crc */
int FLAC__bitreader_read_byte_block_aligned_no_crc(void);

/* Symbol: FLAC__FP_ONE */
/* Demangled: FLAC__FP_ONE */
extern void* FLAC__FP_ONE;

/* Symbol: FLAC__FRAME_HEADER_ZERO_PAD_LEN */
/* Demangled: FLAC__FRAME_HEADER_ZERO_PAD_LEN */
extern void* FLAC__FRAME_HEADER_ZERO_PAD_LEN;

/* Symbol: FLAC__SUBFRAME_TYPE_CONSTANT_BYTE_ALIGNED_MASK */
/* Demangled: FLAC__SUBFRAME_TYPE_CONSTANT_BYTE_ALIGNED_MASK */
extern void* FLAC__SUBFRAME_TYPE_CONSTANT_BYTE_ALIGNED_MASK;

/* Symbol: FLAC__StreamDecoderErrorStatusString */
/* Demangled: FLAC__StreamDecoderErrorStatusString */
extern void* FLAC__StreamDecoderErrorStatusString;

/* Symbol: FLAC__STREAM_METADATA_CUESHEET_INDEX_OFFSET_LEN */
/* Demangled: FLAC__STREAM_METADATA_CUESHEET_INDEX_OFFSET_LEN */
extern void* FLAC__STREAM_METADATA_CUESHEET_INDEX_OFFSET_LEN;

/* Symbol: FLAC__StreamDecoderTellStatusString */
/* Demangled: FLAC__StreamDecoderTellStatusString */
extern void* FLAC__StreamDecoderTellStatusString;

/* Symbol: FLAC__stream_decoder_process_until_end_of_stream */
/* Demangled: FLAC__stream_decoder_process_until_end_of_stream */
int FLAC__stream_decoder_process_until_end_of_stream(void);

/* Symbol: _ZN7android11FLACDecoder12readCallbackEPhPj */
/* Demangled: android::FLACDecoder::readCallback(unsigned char*, unsigned int*) */
int _ZN7android11FLACDecoder12readCallbackEPhPj(void);

/* Symbol: FLAC__STREAM_METADATA_CUESHEET_INDEX_RESERVED_LEN */
/* Demangled: FLAC__STREAM_METADATA_CUESHEET_INDEX_RESERVED_LEN */
extern void* FLAC__STREAM_METADATA_CUESHEET_INDEX_RESERVED_LEN;

/* Symbol: FLAC__STREAM_METADATA_STREAMINFO_BITS_PER_SAMPLE_LEN */
/* Demangled: FLAC__STREAM_METADATA_STREAMINFO_BITS_PER_SAMPLE_LEN */
extern void* FLAC__STREAM_METADATA_STREAMINFO_BITS_PER_SAMPLE_LEN;

/* Symbol: FLAC__stream_decoder_get_sample_rate */
/* Demangled: FLAC__stream_decoder_get_sample_rate */
int FLAC__stream_decoder_get_sample_rate(void);

/* Symbol: FLAC__stream_decoder_set_metadata_ignore_all */
/* Demangled: FLAC__stream_decoder_set_metadata_ignore_all */
int FLAC__stream_decoder_set_metadata_ignore_all(void);

/* Symbol: FLAC__FRAME_FOOTER_CRC_LEN */
/* Demangled: FLAC__FRAME_FOOTER_CRC_LEN */
extern void* FLAC__FRAME_FOOTER_CRC_LEN;

/* Symbol: FLAC__STREAM_METADATA_CUESHEET_TRACK_PRE_EMPHASIS_LEN */
/* Demangled: FLAC__STREAM_METADATA_CUESHEET_TRACK_PRE_EMPHASIS_LEN */
extern void* FLAC__STREAM_METADATA_CUESHEET_TRACK_PRE_EMPHASIS_LEN;

/* Symbol: FLAC__STREAM_METADATA_STREAMINFO_SAMPLE_RATE_LEN */
/* Demangled: FLAC__STREAM_METADATA_STREAMINFO_SAMPLE_RATE_LEN */
extern void* FLAC__STREAM_METADATA_STREAMINFO_SAMPLE_RATE_LEN;

/* Symbol: FLAC__stream_decoder_set_metadata_respond */
/* Demangled: FLAC__stream_decoder_set_metadata_respond */
int FLAC__stream_decoder_set_metadata_respond(void);

/* Symbol: FLAC__bitreader_read_rice_signed_block */
/* Demangled: FLAC__bitreader_read_rice_signed_block */
int FLAC__bitreader_read_rice_signed_block(void);

/* Symbol: FLAC__crc8_update */
/* Demangled: FLAC__crc8_update */
int FLAC__crc8_update(void);

/* Symbol: FLAC__ENTROPY_CODING_METHOD_TYPE_LEN */
/* Demangled: FLAC__ENTROPY_CODING_METHOD_TYPE_LEN */
extern void* FLAC__ENTROPY_CODING_METHOD_TYPE_LEN;

/* Symbol: FLAC__STREAM_METADATA_CUESHEET_TRACK_ISRC_LEN */
/* Demangled: FLAC__STREAM_METADATA_CUESHEET_TRACK_ISRC_LEN */
extern void* FLAC__STREAM_METADATA_CUESHEET_TRACK_ISRC_LEN;

/* Symbol: FLAC__bitreader_read_utf8_uint64 */
/* Demangled: FLAC__bitreader_read_utf8_uint64 */
int FLAC__bitreader_read_utf8_uint64(void);

/* Symbol: FLAC__crc16_table */
/* Demangled: FLAC__crc16_table */
extern void* FLAC__crc16_table;

/* Symbol: FLAC__FRAME_HEADER_BITS_PER_SAMPLE_LEN */
/* Demangled: FLAC__FRAME_HEADER_BITS_PER_SAMPLE_LEN */
extern void* FLAC__FRAME_HEADER_BITS_PER_SAMPLE_LEN;

/* Symbol: FLAC__StreamDecoderLengthStatusString */
/* Demangled: FLAC__StreamDecoderLengthStatusString */
extern void* FLAC__StreamDecoderLengthStatusString;

/* Symbol: FLAC__stream_decoder_init_stream */
/* Demangled: FLAC__stream_decoder_init_stream */
int FLAC__stream_decoder_init_stream(void);

/* Symbol: _ZTVN7android11FLACDecoderE */
/* Demangled: vtable for android::FLACDecoder */
extern void* _ZTVN7android11FLACDecoderE;

/* Symbol: FLAC__bitreader_get_input_bits_unconsumed */
/* Demangled: FLAC__bitreader_get_input_bits_unconsumed */
int FLAC__bitreader_get_input_bits_unconsumed(void);

/* Symbol: FLAC__bitreader_read_utf8_uint32 */
/* Demangled: FLAC__bitreader_read_utf8_uint32 */
int FLAC__bitreader_read_utf8_uint32(void);

/* Symbol: FLAC__crc8_update_block */
/* Demangled: FLAC__crc8_update_block */
int FLAC__crc8_update_block(void);

/* Symbol: FLAC__ENTROPY_CODING_METHOD_PARTITIONED_RICE_ESCAPE_PARAMETER */
/* Demangled: FLAC__ENTROPY_CODING_METHOD_PARTITIONED_RICE_ESCAPE_PARAMETER */
extern void* FLAC__ENTROPY_CODING_METHOD_PARTITIONED_RICE_ESCAPE_PARAMETER;

/* Symbol: FLAC__FRAME_HEADER_SYNC_LEN */
/* Demangled: FLAC__FRAME_HEADER_SYNC_LEN */
extern void* FLAC__FRAME_HEADER_SYNC_LEN;

/* Symbol: FLAC__MD5Accumulate */
/* Demangled: FLAC__MD5Accumulate */
int FLAC__MD5Accumulate(void);

/* Symbol: FLAC__MD5Final */
/* Demangled: FLAC__MD5Final */
int FLAC__MD5Final(void);

/* Symbol: FLAC__ENTROPY_CODING_METHOD_PARTITIONED_RICE_ORDER_LEN */
/* Demangled: FLAC__ENTROPY_CODING_METHOD_PARTITIONED_RICE_ORDER_LEN */
extern void* FLAC__ENTROPY_CODING_METHOD_PARTITIONED_RICE_ORDER_LEN;

/* Symbol: FLAC__STREAM_METADATA_IS_LAST_LEN */
/* Demangled: FLAC__STREAM_METADATA_IS_LAST_LEN */
extern void* FLAC__STREAM_METADATA_IS_LAST_LEN;

/* Symbol: FLAC__STREAM_METADATA_CUESHEET_LEAD_IN_LEN */
/* Demangled: FLAC__STREAM_METADATA_CUESHEET_LEAD_IN_LEN */
extern void* FLAC__STREAM_METADATA_CUESHEET_LEAD_IN_LEN;

/* Symbol: FLAC__STREAM_METADATA_PICTURE_COLORS_LEN */
/* Demangled: FLAC__STREAM_METADATA_PICTURE_COLORS_LEN */
extern void* FLAC__STREAM_METADATA_PICTURE_COLORS_LEN;

/* Symbol: FLAC__STREAM_METADATA_PICTURE_TYPE_LEN */
/* Demangled: FLAC__STREAM_METADATA_PICTURE_TYPE_LEN */
extern void* FLAC__STREAM_METADATA_PICTURE_TYPE_LEN;

/* Symbol: FLAC__stream_decoder_get_bits_per_sample */
/* Demangled: FLAC__stream_decoder_get_bits_per_sample */
int FLAC__stream_decoder_get_bits_per_sample(void);

/* Symbol: FLAC__stream_decoder_finish */
/* Demangled: FLAC__stream_decoder_finish */
int FLAC__stream_decoder_finish(void);

/* Symbol: FLAC__stream_decoder_init_file */
/* Demangled: FLAC__stream_decoder_init_file */
int FLAC__stream_decoder_init_file(void);

/* Symbol: _ZN7android11FLACDecoder15addDataToBufferEPKhj */
/* Demangled: android::FLACDecoder::addDataToBuffer(unsigned char const*, unsigned int) */
int _ZN7android11FLACDecoder15addDataToBufferEPKhj(void);

/* Symbol: FLAC__fixed_compute_best_predictor */
/* Demangled: FLAC__fixed_compute_best_predictor */
int FLAC__fixed_compute_best_predictor(void);

/* Symbol: FLAC__STREAM_METADATA_SEEKPOINT_PLACEHOLDER */
/* Demangled: FLAC__STREAM_METADATA_SEEKPOINT_PLACEHOLDER */
extern void* FLAC__STREAM_METADATA_SEEKPOINT_PLACEHOLDER;

/* Symbol: FLAC__crc8_table */
/* Demangled: FLAC__crc8_table */
extern void* FLAC__crc8_table;

/* Symbol: FLAC__STREAM_SYNC */
/* Demangled: FLAC__STREAM_SYNC */
extern void* FLAC__STREAM_SYNC;

/* Symbol: FLAC__stream_decoder_get_channel_assignment */
/* Demangled: FLAC__stream_decoder_get_channel_assignment */
int FLAC__stream_decoder_get_channel_assignment(void);

/* Symbol: FLAC__bitreader_bits_left_for_byte_alignment */
/* Demangled: FLAC__bitreader_bits_left_for_byte_alignment */
int FLAC__bitreader_bits_left_for_byte_alignment(void);

/* Symbol: FLAC__memory_alloc_aligned_uint32_array */
/* Demangled: FLAC__memory_alloc_aligned_uint32_array */
int FLAC__memory_alloc_aligned_uint32_array(void);

/* Symbol: FLAC__fixed_restore_signal */
/* Demangled: FLAC__fixed_restore_signal */
int FLAC__fixed_restore_signal(void);

/* Symbol: _ZN7android11FLACDecoder13writeCallbackEPK11FLAC__FramePKPKi */
/* Demangled: android::FLACDecoder::writeCallback(FLAC__Frame const*, int const* const*) */
int _ZN7android11FLACDecoder13writeCallbackEPK11FLAC__FramePKPKi(void);

/* Symbol: FLAC__SubframeTypeString */
/* Demangled: FLAC__SubframeTypeString */
extern void* FLAC__SubframeTypeString;

/* Symbol: FLAC__format_vorbiscomment_entry_value_is_legal */
/* Demangled: FLAC__format_vorbiscomment_entry_value_is_legal */
int FLAC__format_vorbiscomment_entry_value_is_legal(void);

/* Symbol: FLAC__memory_alloc_aligned_uint64_array */
/* Demangled: FLAC__memory_alloc_aligned_uint64_array */
int FLAC__memory_alloc_aligned_uint64_array(void);

/* Symbol: _ZN7android11FLACDecoderD0Ev */
/* Demangled: android::FLACDecoder::~FLACDecoder() */
int _ZN7android11FLACDecoderD0Ev(void);

/* Symbol: FLAC__fixed_compute_residual */
/* Demangled: FLAC__fixed_compute_residual */
int FLAC__fixed_compute_residual(void);

/* Symbol: _ZN7android11FLACDecoder16metadataCallbackEPK20FLAC__StreamMetadata */
/* Demangled: android::FLACDecoder::metadataCallback(FLAC__StreamMetadata const*) */
int _ZN7android11FLACDecoder16metadataCallbackEPK20FLAC__StreamMetadata(void);

/* Symbol: FLAC__bitreader_delete */
/* Demangled: FLAC__bitreader_delete */
int FLAC__bitreader_delete(void);

/* Symbol: FLAC__FP_E */
/* Demangled: FLAC__FP_E */
extern void* FLAC__FP_E;

/* Symbol: FLAC__STREAM_SYNC_LEN */
/* Demangled: FLAC__STREAM_SYNC_LEN */
extern void* FLAC__STREAM_SYNC_LEN;

/* Symbol: FLAC__stream_decoder_delete */
/* Demangled: FLAC__stream_decoder_delete */
int FLAC__stream_decoder_delete(void);

/* Symbol: _ZN7android11FLACDecoderC2Ev */
/* Demangled: android::FLACDecoder::FLACDecoder() */
int _ZN7android11FLACDecoderC2Ev(void);

/* Symbol: FLAC__bitreader_read_raw_int32 */
/* Demangled: FLAC__bitreader_read_raw_int32 */
int FLAC__bitreader_read_raw_int32(void);

/* Symbol: FLAC__STREAM_METADATA_PICTURE_DEPTH_LEN */
/* Demangled: FLAC__STREAM_METADATA_PICTURE_DEPTH_LEN */
extern void* FLAC__STREAM_METADATA_PICTURE_DEPTH_LEN;

/* Symbol: FLAC__stream_decoder_get_resolved_state_string */
/* Demangled: FLAC__stream_decoder_get_resolved_state_string */
int FLAC__stream_decoder_get_resolved_state_string(void);

/* Symbol: FLAC__bitreader_clear */
/* Demangled: FLAC__bitreader_clear */
int FLAC__bitreader_clear(void);

/* Symbol: FLAC__bitreader_reset_read_crc16 */
/* Demangled: FLAC__bitreader_reset_read_crc16 */
int FLAC__bitreader_reset_read_crc16(void);

/* Symbol: FLAC__FRAME_HEADER_BLOCK_SIZE_LEN */
/* Demangled: FLAC__FRAME_HEADER_BLOCK_SIZE_LEN */
extern void* FLAC__FRAME_HEADER_BLOCK_SIZE_LEN;

/* Symbol: FLAC__format_entropy_coding_method_partitioned_rice_contents_clear */
/* Demangled: FLAC__format_entropy_coding_method_partitioned_rice_contents_clear */
int FLAC__format_entropy_coding_method_partitioned_rice_contents_clear(void);

/* Symbol: FLAC__format_vorbiscomment_entry_name_is_legal */
/* Demangled: FLAC__format_vorbiscomment_entry_name_is_legal */
int FLAC__format_vorbiscomment_entry_name_is_legal(void);

/* Symbol: FLAC_API_SUPPORTS_OGG_FLAC */
/* Demangled: FLAC_API_SUPPORTS_OGG_FLAC */
extern void* FLAC_API_SUPPORTS_OGG_FLAC;

/* Symbol: FLAC__StreamDecoderStateString */
/* Demangled: FLAC__StreamDecoderStateString */
extern void* FLAC__StreamDecoderStateString;

/* Symbol: _ZN7android11FLACDecoder13parseMetadataEPKhj */
/* Demangled: android::FLACDecoder::parseMetadata(unsigned char const*, unsigned int) */
int _ZN7android11FLACDecoder13parseMetadataEPKhj(void);

/* Symbol: FLAC__FP_ONE_HALF */
/* Demangled: FLAC__FP_ONE_HALF */
extern void* FLAC__FP_ONE_HALF;

/* Symbol: FLAC__STREAM_METADATA_SEEKPOINT_SAMPLE_NUMBER_LEN */
/* Demangled: FLAC__STREAM_METADATA_SEEKPOINT_SAMPLE_NUMBER_LEN */
extern void* FLAC__STREAM_METADATA_SEEKPOINT_SAMPLE_NUMBER_LEN;

/* Symbol: FLAC__format_picture_is_legal */
/* Demangled: FLAC__format_picture_is_legal */
int FLAC__format_picture_is_legal(void);

/* Symbol: FLAC__format_vorbiscomment_entry_is_legal */
/* Demangled: FLAC__format_vorbiscomment_entry_is_legal */
int FLAC__format_vorbiscomment_entry_is_legal(void);

/* Symbol: FLAC__STREAM_METADATA_APPLICATION_ID_LEN */
/* Demangled: FLAC__STREAM_METADATA_APPLICATION_ID_LEN */
extern void* FLAC__STREAM_METADATA_APPLICATION_ID_LEN;

/* Symbol: FLAC__STREAM_METADATA_PICTURE_HEIGHT_LEN */
/* Demangled: FLAC__STREAM_METADATA_PICTURE_HEIGHT_LEN */
extern void* FLAC__STREAM_METADATA_PICTURE_HEIGHT_LEN;

/* Symbol: FLAC__format_blocksize_is_subset */
/* Demangled: FLAC__format_blocksize_is_subset */
int FLAC__format_blocksize_is_subset(void);

/* Symbol: FLAC__format_get_max_rice_partition_order */
/* Demangled: FLAC__format_get_max_rice_partition_order */
int FLAC__format_get_max_rice_partition_order(void);

/* Symbol: FLAC__format_sample_rate_is_valid */
/* Demangled: FLAC__format_sample_rate_is_valid */
int FLAC__format_sample_rate_is_valid(void);

/* Symbol: FLAC__stream_decoder_init_ogg_FILE */
/* Demangled: FLAC__stream_decoder_init_ogg_FILE */
int FLAC__stream_decoder_init_ogg_FILE(void);

/* Symbol: FLAC__crc8 */
/* Demangled: FLAC__crc8 */
int FLAC__crc8(void);

/* Symbol: FLAC__stream_decoder_get_blocksize */
/* Demangled: FLAC__stream_decoder_get_blocksize */
int FLAC__stream_decoder_get_blocksize(void);

/* Symbol: FLAC__crc16 */
/* Demangled: FLAC__crc16 */
int FLAC__crc16(void);

/* Symbol: FLAC__FRAME_HEADER_SAMPLE_RATE_LEN */
/* Demangled: FLAC__FRAME_HEADER_SAMPLE_RATE_LEN */
extern void* FLAC__FRAME_HEADER_SAMPLE_RATE_LEN;

/* Symbol: FLAC__MetadataTypeString */
/* Demangled: FLAC__MetadataTypeString */
extern void* FLAC__MetadataTypeString;

/* Symbol: FLAC__StreamMetadata_Picture_TypeString */
/* Demangled: FLAC__StreamMetadata_Picture_TypeString */
extern void* FLAC__StreamMetadata_Picture_TypeString;

/* Symbol: FLAC__bitreader_free */
/* Demangled: FLAC__bitreader_free */
int FLAC__bitreader_free(void);

/* Symbol: FLAC__bitreader_skip_byte_block_aligned_no_crc */
/* Demangled: FLAC__bitreader_skip_byte_block_aligned_no_crc */
int FLAC__bitreader_skip_byte_block_aligned_no_crc(void);

/* Symbol: FLAC__ENTROPY_CODING_METHOD_PARTITIONED_RICE_PARAMETER_LEN */
/* Demangled: FLAC__ENTROPY_CODING_METHOD_PARTITIONED_RICE_PARAMETER_LEN */
extern void* FLAC__ENTROPY_CODING_METHOD_PARTITIONED_RICE_PARAMETER_LEN;

/* Symbol: FLAC__STREAM_METADATA_CUESHEET_NUM_TRACKS_LEN */
/* Demangled: FLAC__STREAM_METADATA_CUESHEET_NUM_TRACKS_LEN */
extern void* FLAC__STREAM_METADATA_CUESHEET_NUM_TRACKS_LEN;

/* Symbol: FLAC__STREAM_METADATA_CUESHEET_TRACK_NUMBER_LEN */
/* Demangled: FLAC__STREAM_METADATA_CUESHEET_TRACK_NUMBER_LEN */
extern void* FLAC__STREAM_METADATA_CUESHEET_TRACK_NUMBER_LEN;

/* Symbol: FLAC__STREAM_METADATA_STREAMINFO_MAX_BLOCK_SIZE_LEN */
/* Demangled: FLAC__STREAM_METADATA_STREAMINFO_MAX_BLOCK_SIZE_LEN */
extern void* FLAC__STREAM_METADATA_STREAMINFO_MAX_BLOCK_SIZE_LEN;

/* Symbol: FLAC__stream_decoder_new */
/* Demangled: FLAC__stream_decoder_new */
int FLAC__stream_decoder_new(void);

/* Symbol: FLAC__fixedpoint_log2 */
/* Demangled: FLAC__fixedpoint_log2 */
int FLAC__fixedpoint_log2(void);

/* Symbol: FLAC__FRAME_HEADER_BLOCKING_STRATEGY_LEN */
/* Demangled: FLAC__FRAME_HEADER_BLOCKING_STRATEGY_LEN */
extern void* FLAC__FRAME_HEADER_BLOCKING_STRATEGY_LEN;

/* Symbol: FLAC__SUBFRAME_LPC_QLP_SHIFT_LEN */
/* Demangled: FLAC__SUBFRAME_LPC_QLP_SHIFT_LEN */
extern void* FLAC__SUBFRAME_LPC_QLP_SHIFT_LEN;

/* Symbol: FLAC__memory_alloc_aligned_unsigned_array */
/* Demangled: FLAC__memory_alloc_aligned_unsigned_array */
int FLAC__memory_alloc_aligned_unsigned_array(void);

/* Symbol: FLAC__stream_decoder_process_until_end_of_metadata */
/* Demangled: FLAC__stream_decoder_process_until_end_of_metadata */
int FLAC__stream_decoder_process_until_end_of_metadata(void);

/* Symbol: FLAC__bitreader_read_raw_uint64 */
/* Demangled: FLAC__bitreader_read_raw_uint64 */
int FLAC__bitreader_read_raw_uint64(void);

/* Symbol: FLAC__bitreader_read_uint32_little_endian */
/* Demangled: FLAC__bitreader_read_uint32_little_endian */
int FLAC__bitreader_read_uint32_little_endian(void);

/* Symbol: FLAC__STREAM_METADATA_CUESHEET_TRACK_RESERVED_LEN */
/* Demangled: FLAC__STREAM_METADATA_CUESHEET_TRACK_RESERVED_LEN */
extern void* FLAC__STREAM_METADATA_CUESHEET_TRACK_RESERVED_LEN;

/* Symbol: FLAC__StreamDecoderWriteStatusString */
/* Demangled: FLAC__StreamDecoderWriteStatusString */
extern void* FLAC__StreamDecoderWriteStatusString;

/* Symbol: FLAC__bitreader_read_raw_uint32 */
/* Demangled: FLAC__bitreader_read_raw_uint32 */
int FLAC__bitreader_read_raw_uint32(void);

/* Symbol: FLAC__FrameNumberTypeString */
/* Demangled: FLAC__FrameNumberTypeString */
extern void* FLAC__FrameNumberTypeString;

/* Symbol: FLAC__STREAM_METADATA_PICTURE_DESCRIPTION_LENGTH_LEN */
/* Demangled: FLAC__STREAM_METADATA_PICTURE_DESCRIPTION_LENGTH_LEN */
extern void* FLAC__STREAM_METADATA_PICTURE_DESCRIPTION_LENGTH_LEN;

/* Symbol: FLAC__STREAM_METADATA_CUESHEET_TRACK_TYPE_LEN */
/* Demangled: FLAC__STREAM_METADATA_CUESHEET_TRACK_TYPE_LEN */
extern void* FLAC__STREAM_METADATA_CUESHEET_TRACK_TYPE_LEN;

/* Symbol: FLAC__STREAM_METADATA_SEEKPOINT_FRAME_SAMPLES_LEN */
/* Demangled: FLAC__STREAM_METADATA_SEEKPOINT_FRAME_SAMPLES_LEN */
extern void* FLAC__STREAM_METADATA_SEEKPOINT_FRAME_SAMPLES_LEN;

/* Symbol: FLAC__STREAM_METADATA_STREAMINFO_MAX_FRAME_SIZE_LEN */
/* Demangled: FLAC__STREAM_METADATA_STREAMINFO_MAX_FRAME_SIZE_LEN */
extern void* FLAC__STREAM_METADATA_STREAMINFO_MAX_FRAME_SIZE_LEN;

/* Symbol: FLAC__STREAM_METADATA_VORBIS_COMMENT_ENTRY_LENGTH_LEN */
/* Demangled: FLAC__STREAM_METADATA_VORBIS_COMMENT_ENTRY_LENGTH_LEN */
extern void* FLAC__STREAM_METADATA_VORBIS_COMMENT_ENTRY_LENGTH_LEN;

/* Symbol: FLAC__stream_decoder_get_total_samples */
/* Demangled: FLAC__stream_decoder_get_total_samples */
int FLAC__stream_decoder_get_total_samples(void);

/* Symbol: FLAC__bitreader_new */
/* Demangled: FLAC__bitreader_new */
int FLAC__bitreader_new(void);

/* Symbol: FLAC__FP_LN2 */
/* Demangled: FLAC__FP_LN2 */
extern void* FLAC__FP_LN2;

/* Symbol: FLAC__STREAM_METADATA_STREAMINFO_MD5SUM_LEN */
/* Demangled: FLAC__STREAM_METADATA_STREAMINFO_MD5SUM_LEN */
extern void* FLAC__STREAM_METADATA_STREAMINFO_MD5SUM_LEN;

/* Symbol: FLAC__VENDOR_STRING */
/* Demangled: FLAC__VENDOR_STRING */
extern void* FLAC__VENDOR_STRING;

/* Symbol: FLAC__stream_decoder_skip_single_frame */
/* Demangled: FLAC__stream_decoder_skip_single_frame */
int FLAC__stream_decoder_skip_single_frame(void);

/* Symbol: _ZN7android11FLACDecoder14decodeOneFrameEPKhjPvPjb */
/* Demangled: android::FLACDecoder::decodeOneFrame(unsigned char const*, unsigned int, void*, unsigned int*, bool) */
int _ZN7android11FLACDecoder14decodeOneFrameEPKhjPvPjb(void);

/* Symbol: FLAC__stream_decoder_get_decode_position */
/* Demangled: FLAC__stream_decoder_get_decode_position */
int FLAC__stream_decoder_get_decode_position(void);

/* Symbol: FLAC__STREAM_METADATA_SEEKPOINT_STREAM_OFFSET_LEN */
/* Demangled: FLAC__STREAM_METADATA_SEEKPOINT_STREAM_OFFSET_LEN */
extern void* FLAC__STREAM_METADATA_SEEKPOINT_STREAM_OFFSET_LEN;

/* Symbol: FLAC__lpc_restore_signal_wide */
/* Demangled: FLAC__lpc_restore_signal_wide */
int FLAC__lpc_restore_signal_wide(void);

/* Symbol: FLAC__stream_decoder_flush */
/* Demangled: FLAC__stream_decoder_flush */
int FLAC__stream_decoder_flush(void);

/* Symbol: FLAC__stream_decoder_set_metadata_respond_application */
/* Demangled: FLAC__stream_decoder_set_metadata_respond_application */
int FLAC__stream_decoder_set_metadata_respond_application(void);

/* Symbol: FLAC__bitreader_dump */
/* Demangled: FLAC__bitreader_dump */
int FLAC__bitreader_dump(void);

/* Symbol: FLAC__fixed_compute_best_predictor_wide */
/* Demangled: FLAC__fixed_compute_best_predictor_wide */
int FLAC__fixed_compute_best_predictor_wide(void);

/* Symbol: FLAC__SUBFRAME_TYPE_FIXED_BYTE_ALIGNED_MASK */
/* Demangled: FLAC__SUBFRAME_TYPE_FIXED_BYTE_ALIGNED_MASK */
extern void* FLAC__SUBFRAME_TYPE_FIXED_BYTE_ALIGNED_MASK;

/* Symbol: FLAC__format_get_max_rice_partition_order_from_blocksize */
/* Demangled: FLAC__format_get_max_rice_partition_order_from_blocksize */
int FLAC__format_get_max_rice_partition_order_from_blocksize(void);

/* Symbol: FLAC__memory_alloc_aligned_int32_array */
/* Demangled: FLAC__memory_alloc_aligned_int32_array */
int FLAC__memory_alloc_aligned_int32_array(void);

/* Symbol: FLAC__MD5Init */
/* Demangled: FLAC__MD5Init */
int FLAC__MD5Init(void);

/* Symbol: _ZN7android11FLACDecoderD1Ev */
/* Demangled: android::FLACDecoder::~FLACDecoder() */
int _ZN7android11FLACDecoderD1Ev(void);

/* Symbol: FLAC__SUBFRAME_TYPE_VERBATIM_BYTE_ALIGNED_MASK */
/* Demangled: FLAC__SUBFRAME_TYPE_VERBATIM_BYTE_ALIGNED_MASK */
extern void* FLAC__SUBFRAME_TYPE_VERBATIM_BYTE_ALIGNED_MASK;

/* Symbol: FLAC__format_get_max_rice_partition_order_from_blocksize_limited_max_and_predictor_order */
/* Demangled: FLAC__format_get_max_rice_partition_order_from_blocksize_limited_max_and_predictor_order */
int FLAC__format_get_max_rice_partition_order_from_blocksize_limited_max_and_predictor_order(void);

/* Symbol: FLAC__format_cuesheet_is_legal */
/* Demangled: FLAC__format_cuesheet_is_legal */
int FLAC__format_cuesheet_is_legal(void);

/* Symbol: FLAC__stream_decoder_process_single */
/* Demangled: FLAC__stream_decoder_process_single */
int FLAC__stream_decoder_process_single(void);

/* Symbol: _ZN7android11FLACDecoder6CreateEv */
/* Demangled: android::FLACDecoder::Create() */
int _ZN7android11FLACDecoder6CreateEv(void);

/* Symbol: FLAC__ENTROPY_CODING_METHOD_PARTITIONED_RICE_RAW_LEN */
/* Demangled: FLAC__ENTROPY_CODING_METHOD_PARTITIONED_RICE_RAW_LEN */
extern void* FLAC__ENTROPY_CODING_METHOD_PARTITIONED_RICE_RAW_LEN;

/* Symbol: FLAC__EntropyCodingMethodTypeString */
/* Demangled: FLAC__EntropyCodingMethodTypeString */
extern void* FLAC__EntropyCodingMethodTypeString;

/* Symbol: FLAC__STREAM_METADATA_CUESHEET_MEDIA_CATALOG_NUMBER_LEN */
/* Demangled: FLAC__STREAM_METADATA_CUESHEET_MEDIA_CATALOG_NUMBER_LEN */
extern void* FLAC__STREAM_METADATA_CUESHEET_MEDIA_CATALOG_NUMBER_LEN;

/* Symbol: FLAC__STREAM_METADATA_CUESHEET_TRACK_OFFSET_LEN */
/* Demangled: FLAC__STREAM_METADATA_CUESHEET_TRACK_OFFSET_LEN */
extern void* FLAC__STREAM_METADATA_CUESHEET_TRACK_OFFSET_LEN;

/* Symbol: FLAC__stream_decoder_init_ogg_stream */
/* Demangled: FLAC__stream_decoder_init_ogg_stream */
int FLAC__stream_decoder_init_ogg_stream(void);

/* Symbol: FLAC__FP_ZERO */
/* Demangled: FLAC__FP_ZERO */
extern void* FLAC__FP_ZERO;

/* Symbol: FLAC__STREAM_METADATA_PICTURE_DATA_LENGTH_LEN */
/* Demangled: FLAC__STREAM_METADATA_PICTURE_DATA_LENGTH_LEN */
extern void* FLAC__STREAM_METADATA_PICTURE_DATA_LENGTH_LEN;

/* Symbol: FLAC__STREAM_METADATA_PICTURE_MIME_TYPE_LENGTH_LEN */
/* Demangled: FLAC__STREAM_METADATA_PICTURE_MIME_TYPE_LENGTH_LEN */
extern void* FLAC__STREAM_METADATA_PICTURE_MIME_TYPE_LENGTH_LEN;

/* Symbol: FLAC__STREAM_METADATA_PICTURE_WIDTH_LEN */
/* Demangled: FLAC__STREAM_METADATA_PICTURE_WIDTH_LEN */
extern void* FLAC__STREAM_METADATA_PICTURE_WIDTH_LEN;

/* Symbol: FLAC__STREAM_METADATA_TYPE_LEN */
/* Demangled: FLAC__STREAM_METADATA_TYPE_LEN */
extern void* FLAC__STREAM_METADATA_TYPE_LEN;

/* Symbol: FLAC__SUBFRAME_TYPE_LPC_BYTE_ALIGNED_MASK */
/* Demangled: FLAC__SUBFRAME_TYPE_LPC_BYTE_ALIGNED_MASK */
extern void* FLAC__SUBFRAME_TYPE_LPC_BYTE_ALIGNED_MASK;

/* Symbol: FLAC__stream_decoder_get_channels */
/* Demangled: FLAC__stream_decoder_get_channels */
int FLAC__stream_decoder_get_channels(void);

/* Symbol: FLAC__stream_decoder_set_ogg_serial_number */
/* Demangled: FLAC__stream_decoder_set_ogg_serial_number */
int FLAC__stream_decoder_set_ogg_serial_number(void);

/* Symbol: FLAC__ChannelAssignmentString */
/* Demangled: FLAC__ChannelAssignmentString */
extern void* FLAC__ChannelAssignmentString;

/* Symbol: FLAC__FRAME_HEADER_CRC_LEN */
/* Demangled: FLAC__FRAME_HEADER_CRC_LEN */
extern void* FLAC__FRAME_HEADER_CRC_LEN;

/* Symbol: FLAC__STREAM_METADATA_CUESHEET_TRACK_NUM_INDICES_LEN */
/* Demangled: FLAC__STREAM_METADATA_CUESHEET_TRACK_NUM_INDICES_LEN */
extern void* FLAC__STREAM_METADATA_CUESHEET_TRACK_NUM_INDICES_LEN;

/* Symbol: FLAC__VERSION_STRING */
/* Demangled: FLAC__VERSION_STRING */
extern void* FLAC__VERSION_STRING;

/* Symbol: FLAC__StreamDecoderSeekStatusString */
/* Demangled: FLAC__StreamDecoderSeekStatusString */
extern void* FLAC__StreamDecoderSeekStatusString;

/* Symbol: FLAC__stream_decoder_get_input_bytes_unconsumed */
/* Demangled: FLAC__stream_decoder_get_input_bytes_unconsumed */
int FLAC__stream_decoder_get_input_bytes_unconsumed(void);

/* Symbol: FLAC__SUBFRAME_ZERO_PAD_LEN */
/* Demangled: FLAC__SUBFRAME_ZERO_PAD_LEN */
extern void* FLAC__SUBFRAME_ZERO_PAD_LEN;

/* Symbol: FLAC__stream_decoder_init_ogg_file */
/* Demangled: FLAC__stream_decoder_init_ogg_file */
int FLAC__stream_decoder_init_ogg_file(void);

/* Symbol: FLAC__FRAME_HEADER_SYNC */
/* Demangled: FLAC__FRAME_HEADER_SYNC */
extern void* FLAC__FRAME_HEADER_SYNC;

/* Symbol: FLAC__stream_decoder_reset */
/* Demangled: FLAC__stream_decoder_reset */
int FLAC__stream_decoder_reset(void);

/* Symbol: FLAC__stream_decoder_set_md5_checking */
/* Demangled: FLAC__stream_decoder_set_md5_checking */
int FLAC__stream_decoder_set_md5_checking(void);

/* Symbol: FLAC__bitreader_is_consumed_byte_aligned */
/* Demangled: FLAC__bitreader_is_consumed_byte_aligned */
int FLAC__bitreader_is_consumed_byte_aligned(void);

/* Symbol: FLAC__STREAM_METADATA_STREAMINFO_TOTAL_SAMPLES_LEN */
/* Demangled: FLAC__STREAM_METADATA_STREAMINFO_TOTAL_SAMPLES_LEN */
extern void* FLAC__STREAM_METADATA_STREAMINFO_TOTAL_SAMPLES_LEN;

__END_DECLS

#endif /* BEGONIA_RE_LIBSTAGEFRIGHT_FLACDEC_H */

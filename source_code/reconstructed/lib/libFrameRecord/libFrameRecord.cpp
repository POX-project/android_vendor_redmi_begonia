/*
 * Reverse-Engineered Source for: libFrameRecord.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libFrameRecord"

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
#include "libFrameRecord.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: png_warning_parameter */
extern "C" __attribute__((visibility("default"))) int png_warning_parameter(void) {
    ALOGD("png_warning_parameter() called");
    return 0;
}

/* Demangled: png_handle_pCAL */
extern "C" __attribute__((visibility("default"))) int png_handle_pCAL(void) {
    ALOGD("png_handle_pCAL() called");
    return 0;
}

/* Demangled: png_push_process_row */
extern "C" __attribute__((visibility("default"))) int png_push_process_row(void) {
    ALOGD("png_push_process_row() called");
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

/* Demangled: SnappyFile::~SnappyFile() */
extern "C" __attribute__((visibility("default"))) int _ZN10SnappyFileD1Ev(void) {
    ALOGD("_ZN10SnappyFileD1Ev() called");
    return 0;
}

/* Demangled: png_malloc_default */
extern "C" __attribute__((visibility("default"))) int png_malloc_default(void) {
    ALOGD("png_malloc_default() called");
    return 0;
}

/* Demangled: trace::Blob::visit(trace::Visitor&) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace4Blob5visitERNS_7VisitorE(void) {
    ALOGD("_ZN5trace4Blob5visitERNS_7VisitorE() called");
    return 0;
}

/* Demangled: trace::Null::toFloat() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace4Null7toFloatEv(void) {
    ALOGD("_ZNK5trace4Null7toFloatEv() called");
    return 0;
}

/* Demangled: trace::Float::toDouble() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace5Float8toDoubleEv(void) {
    ALOGD("_ZNK5trace5Float8toDoubleEv() called");
    return 0;
}

/* Exported Object: typeinfo for trace::Pointer */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5trace7PointerE = NULL;

/* Demangled: image::getBpp(image::G3D_FORMAT_TYPE) */
extern "C" __attribute__((visibility("default"))) int _ZN5image6getBppENS_15G3D_FORMAT_TYPEE(void) {
    ALOGD("_ZN5image6getBppENS_15G3D_FORMAT_TYPEE() called");
    return 0;
}

/* Demangled: png_read_finish_row */
extern "C" __attribute__((visibility("default"))) int png_read_finish_row(void) {
    ALOGD("png_read_finish_row() called");
    return 0;
}

/* Demangled: png_set_user_limits */
extern "C" __attribute__((visibility("default"))) int png_set_user_limits(void) {
    ALOGD("png_set_user_limits() called");
    return 0;
}

/* Demangled: gzdirect */
extern "C" __attribute__((visibility("default"))) int gzdirect(void) {
    ALOGD("gzdirect() called");
    return 0;
}

/* Demangled: png_set_read_status_fn */
extern "C" __attribute__((visibility("default"))) int png_set_read_status_fn(void) {
    ALOGD("png_set_read_status_fn() called");
    return 0;
}

/* Demangled: png_set_shift */
extern "C" __attribute__((visibility("default"))) int png_set_shift(void) {
    ALOGD("png_set_shift() called");
    return 0;
}

/* Demangled: png_do_chop */
extern "C" __attribute__((visibility("default"))) int png_do_chop(void) {
    ALOGD("png_do_chop() called");
    return 0;
}

/* Demangled: deflateEnd */
extern "C" __attribute__((visibility("default"))) int deflateEnd(void) {
    ALOGD("deflateEnd() called");
    return 0;
}

/* Demangled: trace::Value::toUIntPtr() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace5Value9toUIntPtrEv(void) {
    ALOGD("_ZNK5trace5Value9toUIntPtrEv() called");
    return 0;
}

/* Demangled: ARCRegisterEGLHook */
extern "C" __attribute__((visibility("default"))) int ARCRegisterEGLHook(void) {
    ALOGD("ARCRegisterEGLHook() called");
    return 0;
}

/* Demangled: png_set_rows */
extern "C" __attribute__((visibility("default"))) int png_set_rows(void) {
    ALOGD("png_set_rows() called");
    return 0;
}

/* Exported Object: typeinfo name for trace::Value */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5trace5ValueE = NULL;

/* Demangled: png_set_filler */
extern "C" __attribute__((visibility("default"))) int png_set_filler(void) {
    ALOGD("png_set_filler() called");
    return 0;
}

/* Demangled: png_write_IHDR */
extern "C" __attribute__((visibility("default"))) int png_write_IHDR(void) {
    ALOGD("png_write_IHDR() called");
    return 0;
}

/* Demangled: trace::Struct::~Struct() */
extern "C" __attribute__((visibility("default"))) int _ZN5trace6StructD2Ev(void) {
    ALOGD("_ZN5trace6StructD2Ev() called");
    return 0;
}

/* Demangled: snappy::GetUncompressedLength(snappy::Source*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN6snappy21GetUncompressedLengthEPNS_6SourceEPj(void) {
    ALOGD("_ZN6snappy21GetUncompressedLengthEPNS_6SourceEPj() called");
    return 0;
}

/* Demangled: snappy::Sink::~Sink() */
extern "C" __attribute__((visibility("default"))) int _ZN6snappy4SinkD1Ev(void) {
    ALOGD("_ZN6snappy4SinkD1Ev() called");
    return 0;
}

/* Demangled: png_push_crc_skip */
extern "C" __attribute__((visibility("default"))) int png_push_crc_skip(void) {
    ALOGD("png_push_crc_skip() called");
    return 0;
}

/* Exported Object: vtable for trace::Bool */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5trace4BoolE = NULL;

/* Exported Object: typeinfo for ARCHookListener */
extern "C" __attribute__((visibility("default"))) void* _ZTI15ARCHookListener = NULL;

/* Demangled: EzContextES20::ReadPixels() */
extern "C" __attribute__((visibility("default"))) int _ZN13EzContextES2010ReadPixelsEv(void) {
    ALOGD("_ZN13EzContextES2010ReadPixelsEv() called");
    return 0;
}

/* Demangled: GLDumperES11::ReadPixels(int) */
extern "C" __attribute__((visibility("default"))) int _ZN12GLDumperES1110ReadPixelsEi(void) {
    ALOGD("_ZN12GLDumperES1110ReadPixelsEi() called");
    return 0;
}

/* Demangled: png_set_invert_alpha */
extern "C" __attribute__((visibility("default"))) int png_set_invert_alpha(void) {
    ALOGD("png_set_invert_alpha() called");
    return 0;
}

/* Exported Object: typeinfo for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt3__113basic_filebufIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: png_get_io_state */
extern "C" __attribute__((visibility("default"))) int png_get_io_state(void) {
    ALOGD("png_get_io_state() called");
    return 0;
}

/* Demangled: png_set_packswap */
extern "C" __attribute__((visibility("default"))) int png_set_packswap(void) {
    ALOGD("png_set_packswap() called");
    return 0;
}

/* Demangled: trace::Visitor::visit(trace::Enum*) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace7Visitor5visitEPNS_4EnumE(void) {
    ALOGD("_ZN5trace7Visitor5visitEPNS_4EnumE() called");
    return 0;
}

/* Demangled: trace::Repr::toUInt() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace4Repr6toUIntEv(void) {
    ALOGD("_ZNK5trace4Repr6toUIntEv() called");
    return 0;
}

/* Demangled: trace::Pointer::toBool() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace7Pointer6toBoolEv(void) {
    ALOGD("_ZNK5trace7Pointer6toBoolEv() called");
    return 0;
}

/* Exported Object: vtable for trace::UInt */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5trace4UIntE = NULL;

/* Demangled: trace::Writer::beginRepr() */
extern "C" __attribute__((visibility("default"))) int _ZN5trace6Writer9beginReprEv(void) {
    ALOGD("_ZN5trace6Writer9beginReprEv() called");
    return 0;
}

/* Demangled: std::__1::vector<bool, std::__1::allocator<bool> >::resize(unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIbNS_9allocatorIbEEE6resizeEjb(void) {
    ALOGD("_ZNSt3__16vectorIbNS_9allocatorIbEEE6resizeEjb() called");
    return 0;
}

/* Demangled: png_get_io_ptr */
extern "C" __attribute__((visibility("default"))) int png_get_io_ptr(void) {
    ALOGD("png_get_io_ptr() called");
    return 0;
}

/* Demangled: png_get_error_ptr */
extern "C" __attribute__((visibility("default"))) int png_get_error_ptr(void) {
    ALOGD("png_get_error_ptr() called");
    return 0;
}

/* Demangled: png_set_sPLT */
extern "C" __attribute__((visibility("default"))) int png_set_sPLT(void) {
    ALOGD("png_set_sPLT() called");
    return 0;
}

/* Demangled: gzclose_r */
extern "C" __attribute__((visibility("default"))) int gzclose_r(void) {
    ALOGD("gzclose_r() called");
    return 0;
}

/* Demangled: trace::Call::~Call() */
extern "C" __attribute__((visibility("default"))) int _ZN5trace4CallD2Ev(void) {
    ALOGD("_ZN5trace4CallD2Ev() called");
    return 0;
}

/* Demangled: trace::Value::toString() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace5Value8toStringEv(void) {
    ALOGD("_ZNK5trace5Value8toStringEv() called");
    return 0;
}

/* Demangled: trace::Writer::writeSInt(long long) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace6Writer9writeSIntEx(void) {
    ALOGD("_ZN5trace6Writer9writeSIntEx() called");
    return 0;
}

/* Demangled: png_set_compression_level */
extern "C" __attribute__((visibility("default"))) int png_set_compression_level(void) {
    ALOGD("png_set_compression_level() called");
    return 0;
}

/* Demangled: png_handle_pHYs */
extern "C" __attribute__((visibility("default"))) int png_handle_pHYs(void) {
    ALOGD("png_handle_pHYs() called");
    return 0;
}

/* Demangled: png_push_read_chunk */
extern "C" __attribute__((visibility("default"))) int png_push_read_chunk(void) {
    ALOGD("png_push_read_chunk() called");
    return 0;
}

/* Demangled: trace::UInt::visit(trace::Visitor&) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace4UInt5visitERNS_7VisitorE(void) {
    ALOGD("_ZN5trace4UInt5visitERNS_7VisitorE() called");
    return 0;
}

/* Demangled: trace::Value::toPointer(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace5Value9toPointerEb(void) {
    ALOGD("_ZN5trace5Value9toPointerEb() called");
    return 0;
}

/* Demangled: trace::String::~String() */
extern "C" __attribute__((visibility("default"))) int _ZN5trace6StringD0Ev(void) {
    ALOGD("_ZN5trace6StringD0Ev() called");
    return 0;
}

/* Demangled: png_do_bgr */
extern "C" __attribute__((visibility("default"))) int png_do_bgr(void) {
    ALOGD("png_do_bgr() called");
    return 0;
}

/* Demangled: png_write_PLTE */
extern "C" __attribute__((visibility("default"))) int png_write_PLTE(void) {
    ALOGD("png_write_PLTE() called");
    return 0;
}

/* Demangled: gzungetc */
extern "C" __attribute__((visibility("default"))) int gzungetc(void) {
    ALOGD("gzungetc() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: png_get_y_pixels_per_meter */
extern "C" __attribute__((visibility("default"))) int png_get_y_pixels_per_meter(void) {
    ALOGD("png_get_y_pixels_per_meter() called");
    return 0;
}

/* Demangled: png_write_cHRM_fixed */
extern "C" __attribute__((visibility("default"))) int png_write_cHRM_fixed(void) {
    ALOGD("png_write_cHRM_fixed() called");
    return 0;
}

/* Demangled: png_set_palette_to_rgb */
extern "C" __attribute__((visibility("default"))) int png_set_palette_to_rgb(void) {
    ALOGD("png_set_palette_to_rgb() called");
    return 0;
}

/* Demangled: png_get_x_offset_microns */
extern "C" __attribute__((visibility("default"))) int png_get_x_offset_microns(void) {
    ALOGD("png_get_x_offset_microns() called");
    return 0;
}

/* Demangled: png_handle_tRNS */
extern "C" __attribute__((visibility("default"))) int png_handle_tRNS(void) {
    ALOGD("png_handle_tRNS() called");
    return 0;
}

/* Demangled: adler32_combine64 */
extern "C" __attribute__((visibility("default"))) int adler32_combine64(void) {
    ALOGD("adler32_combine64() called");
    return 0;
}

/* Demangled: trace::Visitor::visit(trace::Pointer*) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace7Visitor5visitEPNS_7PointerE(void) {
    ALOGD("_ZN5trace7Visitor5visitEPNS_7PointerE() called");
    return 0;
}

/* Demangled: trace::String::toString() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace6String8toStringEv(void) {
    ALOGD("_ZNK5trace6String8toStringEv() called");
    return 0;
}

/* Demangled: trace::Writer::writeDouble(double) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace6Writer11writeDoubleEd(void) {
    ALOGD("_ZN5trace6Writer11writeDoubleEd() called");
    return 0;
}

/* Demangled: trace::LocalWriter::beginLeave(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace11LocalWriter10beginLeaveEj(void) {
    ALOGD("_ZN5trace11LocalWriter10beginLeaveEj() called");
    return 0;
}

/* Demangled: png_handle_as_unknown */
extern "C" __attribute__((visibility("default"))) int png_handle_as_unknown(void) {
    ALOGD("png_handle_as_unknown() called");
    return 0;
}

/* Demangled: png_get_iCCP */
extern "C" __attribute__((visibility("default"))) int png_get_iCCP(void) {
    ALOGD("png_get_iCCP() called");
    return 0;
}

/* Demangled: gzclose_w */
extern "C" __attribute__((visibility("default"))) int gzclose_w(void) {
    ALOGD("gzclose_w() called");
    return 0;
}

/* Demangled: inflate_table */
extern "C" __attribute__((visibility("default"))) int inflate_table(void) {
    ALOGD("inflate_table() called");
    return 0;
}

/* Demangled: trace::Writer::~Writer() */
extern "C" __attribute__((visibility("default"))) int _ZN5trace6WriterD2Ev(void) {
    ALOGD("_ZN5trace6WriterD2Ev() called");
    return 0;
}

/* Demangled: png_get_cHRM_fixed */
extern "C" __attribute__((visibility("default"))) int png_get_cHRM_fixed(void) {
    ALOGD("png_get_cHRM_fixed() called");
    return 0;
}

/* Demangled: gzdopen */
extern "C" __attribute__((visibility("default"))) int gzdopen(void) {
    ALOGD("gzdopen() called");
    return 0;
}

/* Demangled: SnappyFile::rawPercentRead() */
extern "C" __attribute__((visibility("default"))) int _ZN10SnappyFile14rawPercentReadEv(void) {
    ALOGD("_ZN10SnappyFile14rawPercentReadEv() called");
    return 0;
}

/* Demangled: SnappyFile::SnappyFile(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10SnappyFileC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN10SnappyFileC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: png_write_find_filter */
extern "C" __attribute__((visibility("default"))) int png_write_find_filter(void) {
    ALOGD("png_write_find_filter() called");
    return 0;
}

/* Demangled: zlibCompileFlags */
extern "C" __attribute__((visibility("default"))) int zlibCompileFlags(void) {
    ALOGD("zlibCompileFlags() called");
    return 0;
}

/* Demangled: EzContextES20::DumpImage(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN13EzContextES209DumpImageEPKc(void) {
    ALOGD("_ZN13EzContextES209DumpImageEPKc() called");
    return 0;
}

/* Demangled: GLDumperES11::~GLDumperES11() */
extern "C" __attribute__((visibility("default"))) int _ZN12GLDumperES11D0Ev(void) {
    ALOGD("_ZN12GLDumperES11D0Ev() called");
    return 0;
}

/* Demangled: png_chunk_benign_error */
extern "C" __attribute__((visibility("default"))) int png_chunk_benign_error(void) {
    ALOGD("png_chunk_benign_error() called");
    return 0;
}

/* Demangled: png_do_read_interlace */
extern "C" __attribute__((visibility("default"))) int png_do_read_interlace(void) {
    ALOGD("png_do_read_interlace() called");
    return 0;
}

/* Exported Object: ARC::SDTrace::g_dumpMode */
extern "C" __attribute__((visibility("default"))) void* _ZN3ARC7SDTrace10g_dumpModeE = NULL;

/* Demangled: deflateTune */
extern "C" __attribute__((visibility("default"))) int deflateTune(void) {
    ALOGD("deflateTune() called");
    return 0;
}

/* Demangled: trace::Blob::toPointer() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace4Blob9toPointerEv(void) {
    ALOGD("_ZNK5trace4Blob9toPointerEv() called");
    return 0;
}

/* Exported Object: vtable for trace::Pointer */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5trace7PointerE = NULL;

/* Demangled: png_destroy_write_struct */
extern "C" __attribute__((visibility("default"))) int png_destroy_write_struct(void) {
    ALOGD("png_destroy_write_struct() called");
    return 0;
}

/* Demangled: png_get_IHDR */
extern "C" __attribute__((visibility("default"))) int png_get_IHDR(void) {
    ALOGD("png_get_IHDR() called");
    return 0;
}

/* Demangled: png_get_compression_type */
extern "C" __attribute__((visibility("default"))) int png_get_compression_type(void) {
    ALOGD("png_get_compression_type() called");
    return 0;
}

/* Demangled: _tr_stored_block */
extern "C" __attribute__((visibility("default"))) int _tr_stored_block(void) {
    ALOGD("_tr_stored_block() called");
    return 0;
}

/* Demangled: trace::String::~String() */
extern "C" __attribute__((visibility("default"))) int _ZN5trace6StringD2Ev(void) {
    ALOGD("_ZN5trace6StringD2Ev() called");
    return 0;
}

/* Demangled: trace::createSnappyStream(char const*, unsigned int, unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace18createSnappyStreamEPKcjjb(void) {
    ALOGD("_ZN5trace18createSnappyStreamEPKcjjb() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: deflateReset */
extern "C" __attribute__((visibility("default"))) int deflateReset(void) {
    ALOGD("deflateReset() called");
    return 0;
}

/* Demangled: EzContextES11::GetEGLSurfaceSize(int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN13EzContextES1117GetEGLSurfaceSizeEPiS0_(void) {
    ALOGD("_ZN13EzContextES1117GetEGLSurfaceSizeEPiS0_() called");
    return 0;
}

/* Demangled: png_set_hIST */
extern "C" __attribute__((visibility("default"))) int png_set_hIST(void) {
    ALOGD("png_set_hIST() called");
    return 0;
}

/* Demangled: gzrewind */
extern "C" __attribute__((visibility("default"))) int gzrewind(void) {
    ALOGD("gzrewind() called");
    return 0;
}

/* Exported Object: typeinfo name for trace::Enum */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5trace4EnumE = NULL;

/* Demangled: trace::Writer::writeUInt(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace6Writer9writeUIntEy(void) {
    ALOGD("_ZN5trace6Writer9writeUIntEy() called");
    return 0;
}

/* Demangled: EzContextES11::CalcContentDifference(float*) */
extern "C" __attribute__((visibility("default"))) int _ZN13EzContextES1121CalcContentDifferenceEPf(void) {
    ALOGD("_ZN13EzContextES1121CalcContentDifferenceEPf() called");
    return 0;
}

/* Exported Object: typeinfo name for GLDumperES11 */
extern "C" __attribute__((visibility("default"))) void* _ZTS12GLDumperES11 = NULL;

/* Exported Object: typeinfo for std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: png_process_data_skip */
extern "C" __attribute__((visibility("default"))) int png_process_data_skip(void) {
    ALOGD("png_process_data_skip() called");
    return 0;
}

/* Demangled: png_default_write_data */
extern "C" __attribute__((visibility("default"))) int png_default_write_data(void) {
    ALOGD("png_default_write_data() called");
    return 0;
}

/* Demangled: snappy::Source::~Source() */
extern "C" __attribute__((visibility("default"))) int _ZN6snappy6SourceD1Ev(void) {
    ALOGD("_ZN6snappy6SourceD1Ev() called");
    return 0;
}

/* Demangled: png_access_version_number */
extern "C" __attribute__((visibility("default"))) int png_access_version_number(void) {
    ALOGD("png_access_version_number() called");
    return 0;
}

/* Demangled: png_gamma_significant */
extern "C" __attribute__((visibility("default"))) int png_gamma_significant(void) {
    ALOGD("png_gamma_significant() called");
    return 0;
}

/* Demangled: png_get_gAMA */
extern "C" __attribute__((visibility("default"))) int png_get_gAMA(void) {
    ALOGD("png_get_gAMA() called");
    return 0;
}

/* Demangled: png_push_restore_buffer */
extern "C" __attribute__((visibility("default"))) int png_push_restore_buffer(void) {
    ALOGD("png_push_restore_buffer() called");
    return 0;
}

/* Demangled: png_set_rgb_to_gray_fixed */
extern "C" __attribute__((visibility("default"))) int png_set_rgb_to_gray_fixed(void) {
    ALOGD("png_set_rgb_to_gray_fixed() called");
    return 0;
}

/* Demangled: trace::Blob::~Blob() */
extern "C" __attribute__((visibility("default"))) int _ZN5trace4BlobD0Ev(void) {
    ALOGD("_ZN5trace4BlobD0Ev() called");
    return 0;
}

/* Exported Object: typeinfo for trace::Enum */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5trace4EnumE = NULL;

/* Demangled: trace::LocalWriter::~LocalWriter() */
extern "C" __attribute__((visibility("default"))) int _ZN5trace11LocalWriterD2Ev(void) {
    ALOGD("_ZN5trace11LocalWriterD2Ev() called");
    return 0;
}

/* Demangled: trace::Struct::toBool() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace6Struct6toBoolEv(void) {
    ALOGD("_ZNK5trace6Struct6toBoolEv() called");
    return 0;
}

/* Demangled: snappy::ByteArraySource::Skip(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6snappy15ByteArraySource4SkipEj(void) {
    ALOGD("_ZN6snappy15ByteArraySource4SkipEj() called");
    return 0;
}

/* Demangled: png_get_PLTE */
extern "C" __attribute__((visibility("default"))) int png_get_PLTE(void) {
    ALOGD("png_get_PLTE() called");
    return 0;
}

/* Demangled: png_read_filter_row */
extern "C" __attribute__((visibility("default"))) int png_read_filter_row(void) {
    ALOGD("png_read_filter_row() called");
    return 0;
}

/* Demangled: deflateBound */
extern "C" __attribute__((visibility("default"))) int deflateBound(void) {
    ALOGD("deflateBound() called");
    return 0;
}

/* Demangled: gzopen */
extern "C" __attribute__((visibility("default"))) int gzopen(void) {
    ALOGD("gzopen() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_14basic_iostreamIcS2_EE = NULL;

/* Demangled: GLDumperES11::~GLDumperES11() */
extern "C" __attribute__((visibility("default"))) int _ZN12GLDumperES11D2Ev(void) {
    ALOGD("_ZN12GLDumperES11D2Ev() called");
    return 0;
}

/* Demangled: image::Image::writePNG(std::__1::basic_ostream<char, std::__1::char_traits<char> >&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5image5Image8writePNGERNSt3__113basic_ostreamIcNS1_11char_traitsIcEEEE(void) {
    ALOGD("_ZNK5image5Image8writePNGERNSt3__113basic_ostreamIcNS1_11char_traitsIcEEEE() called");
    return 0;
}

/* Demangled: png_warning_parameter_signed */
extern "C" __attribute__((visibility("default"))) int png_warning_parameter_signed(void) {
    ALOGD("png_warning_parameter_signed() called");
    return 0;
}

/* Demangled: png_get_io_chunk_type */
extern "C" __attribute__((visibility("default"))) int png_get_io_chunk_type(void) {
    ALOGD("png_get_io_chunk_type() called");
    return 0;
}

/* Demangled: png_set_read_user_transform_fn */
extern "C" __attribute__((visibility("default"))) int png_set_read_user_transform_fn(void) {
    ALOGD("png_set_read_user_transform_fn() called");
    return 0;
}

/* Demangled: IGLDumper::~IGLDumper() */
extern "C" __attribute__((visibility("default"))) int _ZN9IGLDumperD1Ev(void) {
    ALOGD("_ZN9IGLDumperD1Ev() called");
    return 0;
}

/* Demangled: png_get_unknown_chunks */
extern "C" __attribute__((visibility("default"))) int png_get_unknown_chunks(void) {
    ALOGD("png_get_unknown_chunks() called");
    return 0;
}

/* Demangled: png_get_x_offset_inches */
extern "C" __attribute__((visibility("default"))) int png_get_x_offset_inches(void) {
    ALOGD("png_get_x_offset_inches() called");
    return 0;
}

/* Demangled: apitrace_init */
extern "C" __attribute__((visibility("default"))) int apitrace_init(void) {
    ALOGD("apitrace_init() called");
    return 0;
}

/* Exported Object: typeinfo for IGLDumper */
extern "C" __attribute__((visibility("default"))) void* _ZTI9IGLDumper = NULL;

/* Exported Object: typeinfo for GLDumperES20 */
extern "C" __attribute__((visibility("default"))) void* _ZTI12GLDumperES20 = NULL;

/* Demangled: png_ascii_from_fp */
extern "C" __attribute__((visibility("default"))) int png_ascii_from_fp(void) {
    ALOGD("png_ascii_from_fp() called");
    return 0;
}

/* Demangled: png_destroy_info_struct */
extern "C" __attribute__((visibility("default"))) int png_destroy_info_struct(void) {
    ALOGD("png_destroy_info_struct() called");
    return 0;
}

/* Demangled: png_set_bgr */
extern "C" __attribute__((visibility("default"))) int png_set_bgr(void) {
    ALOGD("png_set_bgr() called");
    return 0;
}

/* Demangled: SnappyFile::writeCompressedLength(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10SnappyFile21writeCompressedLengthEj(void) {
    ALOGD("_ZN10SnappyFile21writeCompressedLengthEj() called");
    return 0;
}

/* Demangled: trace::String::visit(trace::Visitor&) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace6String5visitERNS_7VisitorE(void) {
    ALOGD("_ZN5trace6String5visitERNS_7VisitorE() called");
    return 0;
}

/* Demangled: APIlog */
extern "C" __attribute__((visibility("default"))) int APIlog(void) {
    ALOGD("APIlog() called");
    return 0;
}

/* Demangled: sdTraceInit */
extern "C" __attribute__((visibility("default"))) int sdTraceInit(void) {
    ALOGD("sdTraceInit() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: png_get_user_height_max */
extern "C" __attribute__((visibility("default"))) int png_get_user_height_max(void) {
    ALOGD("png_get_user_height_max() called");
    return 0;
}

/* Demangled: FrameRecord::FrameRecord() */
extern "C" __attribute__((visibility("default"))) int _ZN11FrameRecordC1Ev(void) {
    ALOGD("_ZN11FrameRecordC1Ev() called");
    return 0;
}

/* Demangled: png_write_rows */
extern "C" __attribute__((visibility("default"))) int png_write_rows(void) {
    ALOGD("png_write_rows() called");
    return 0;
}

/* Demangled: _tr_init */
extern "C" __attribute__((visibility("default"))) int _tr_init(void) {
    ALOGD("_tr_init() called");
    return 0;
}

/* Demangled: trace::Blob::~Blob() */
extern "C" __attribute__((visibility("default"))) int _ZN5trace4BlobD2Ev(void) {
    ALOGD("_ZN5trace4BlobD2Ev() called");
    return 0;
}

/* Demangled: trace::Writer::writeString(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace6Writer11writeStringEPKc(void) {
    ALOGD("_ZN5trace6Writer11writeStringEPKc() called");
    return 0;
}

/* Demangled: png_set_unknown_chunk_location */
extern "C" __attribute__((visibility("default"))) int png_set_unknown_chunk_location(void) {
    ALOGD("png_set_unknown_chunk_location() called");
    return 0;
}

/* Demangled: GLDumperES11::GLDumperES11(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12GLDumperES11C1Eii(void) {
    ALOGD("_ZN12GLDumperES11C1Eii() called");
    return 0;
}

/* Demangled: png_set_quantize */
extern "C" __attribute__((visibility("default"))) int png_set_quantize(void) {
    ALOGD("png_set_quantize() called");
    return 0;
}

/* Demangled: gzgetc_ */
extern "C" __attribute__((visibility("default"))) int gzgetc_(void) {
    ALOGD("gzgetc_() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: png_set_gamma */
extern "C" __attribute__((visibility("default"))) int png_set_gamma(void) {
    ALOGD("png_set_gamma() called");
    return 0;
}

/* Demangled: png_do_write_invert_alpha */
extern "C" __attribute__((visibility("default"))) int png_do_write_invert_alpha(void) {
    ALOGD("png_do_write_invert_alpha() called");
    return 0;
}

/* Demangled: inflateUndermine */
extern "C" __attribute__((visibility("default"))) int inflateUndermine(void) {
    ALOGD("inflateUndermine() called");
    return 0;
}

/* Exported Object: typeinfo for snappy::Source */
extern "C" __attribute__((visibility("default"))) void* _ZTIN6snappy6SourceE = NULL;

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE0_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: png_set_cHRM_XYZ */
extern "C" __attribute__((visibility("default"))) int png_set_cHRM_XYZ(void) {
    ALOGD("png_set_cHRM_XYZ() called");
    return 0;
}

/* Demangled: png_set_chunk_malloc_max */
extern "C" __attribute__((visibility("default"))) int png_set_chunk_malloc_max(void) {
    ALOGD("png_set_chunk_malloc_max() called");
    return 0;
}

/* Exported Object: vtable for trace::File */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5trace4FileE = NULL;

/* Demangled: trace::Writer::writePointer(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace6Writer12writePointerEy(void) {
    ALOGD("_ZN5trace6Writer12writePointerEy() called");
    return 0;
}

/* Demangled: png_reciprocal */
extern "C" __attribute__((visibility("default"))) int png_reciprocal(void) {
    ALOGD("png_reciprocal() called");
    return 0;
}

/* Demangled: png_write_sPLT */
extern "C" __attribute__((visibility("default"))) int png_write_sPLT(void) {
    ALOGD("png_write_sPLT() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekpos(std::__1::fpos<mbstate_t>, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj() called");
    return 0;
}

/* Demangled: png_progressive_combine_row */
extern "C" __attribute__((visibility("default"))) int png_progressive_combine_row(void) {
    ALOGD("png_progressive_combine_row() called");
    return 0;
}

/* Demangled: gzread */
extern "C" __attribute__((visibility("default"))) int gzread(void) {
    ALOGD("gzread() called");
    return 0;
}

/* Demangled: png_crc_read */
extern "C" __attribute__((visibility("default"))) int png_crc_read(void) {
    ALOGD("png_crc_read() called");
    return 0;
}

/* Demangled: png_write_row */
extern "C" __attribute__((visibility("default"))) int png_write_row(void) {
    ALOGD("png_write_row() called");
    return 0;
}

/* Demangled: SnappyOutStream::SnappyOutStream(char const*, unsigned int, unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN15SnappyOutStreamC1EPKcjjb(void) {
    ALOGD("_ZN15SnappyOutStreamC1EPKcjjb() called");
    return 0;
}

/* Demangled: SnappyOutStream::~SnappyOutStream() */
extern "C" __attribute__((visibility("default"))) int _ZN15SnappyOutStreamD1Ev(void) {
    ALOGD("_ZN15SnappyOutStreamD1Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: snappy::Sink::GetAppendBuffer(unsigned int, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN6snappy4Sink15GetAppendBufferEjPc(void) {
    ALOGD("_ZN6snappy4Sink15GetAppendBufferEjPc() called");
    return 0;
}

/* Demangled: image::readPNG(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5image7readPNGEPKc(void) {
    ALOGD("_ZN5image7readPNGEPKc() called");
    return 0;
}

/* Demangled: png_error */
extern "C" __attribute__((visibility("default"))) int png_error(void) {
    ALOGD("png_error() called");
    return 0;
}

/* Demangled: png_set_filter */
extern "C" __attribute__((visibility("default"))) int png_set_filter(void) {
    ALOGD("png_set_filter() called");
    return 0;
}

/* Demangled: trace::Double::toSInt() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace6Double6toSIntEv(void) {
    ALOGD("_ZNK5trace6Double6toSIntEv() called");
    return 0;
}

/* Exported Object: typeinfo for snappy::ByteArraySource */
extern "C" __attribute__((visibility("default"))) void* _ZTIN6snappy15ByteArraySourceE = NULL;

/* Demangled: deflateSetHeader */
extern "C" __attribute__((visibility("default"))) int deflateSetHeader(void) {
    ALOGD("deflateSetHeader() called");
    return 0;
}

/* Exported Object: typeinfo for trace::Array */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5trace5ArrayE = NULL;

/* Exported Object: vtable for trace::Null */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5trace4NullE = NULL;

/* Demangled: EzContextES11::EzContextES11() */
extern "C" __attribute__((visibility("default"))) int _ZN13EzContextES11C2Ev(void) {
    ALOGD("_ZN13EzContextES11C2Ev() called");
    return 0;
}

/* Demangled: png_write_sCAL_s */
extern "C" __attribute__((visibility("default"))) int png_write_sCAL_s(void) {
    ALOGD("png_write_sCAL_s() called");
    return 0;
}

/* Demangled: trace::SInt::toBool() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace4SInt6toBoolEv(void) {
    ALOGD("_ZNK5trace4SInt6toBoolEv() called");
    return 0;
}

/* Demangled: snappy::UncheckedByteArraySink::GetAppendBuffer(unsigned int, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN6snappy22UncheckedByteArraySink15GetAppendBufferEjPc(void) {
    ALOGD("_ZN6snappy22UncheckedByteArraySink15GetAppendBufferEjPc() called");
    return 0;
}

/* Demangled: png_read_update_info */
extern "C" __attribute__((visibility("default"))) int png_read_update_info(void) {
    ALOGD("png_read_update_info() called");
    return 0;
}

/* Demangled: trace::Null::toPointer() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace4Null9toPointerEv(void) {
    ALOGD("_ZNK5trace4Null9toPointerEv() called");
    return 0;
}

/* Demangled: png_get_cHRM_XYZ */
extern "C" __attribute__((visibility("default"))) int png_get_cHRM_XYZ(void) {
    ALOGD("png_get_cHRM_XYZ() called");
    return 0;
}

/* Demangled: trace::Array::~Array() */
extern "C" __attribute__((visibility("default"))) int _ZN5trace5ArrayD1Ev(void) {
    ALOGD("_ZN5trace5ArrayD1Ev() called");
    return 0;
}

/* Demangled: png_get_rows */
extern "C" __attribute__((visibility("default"))) int png_get_rows(void) {
    ALOGD("png_get_rows() called");
    return 0;
}

/* Demangled: png_handle_tIME */
extern "C" __attribute__((visibility("default"))) int png_handle_tIME(void) {
    ALOGD("png_handle_tIME() called");
    return 0;
}

/* Demangled: inflateInit_ */
extern "C" __attribute__((visibility("default"))) int inflateInit_(void) {
    ALOGD("inflateInit_() called");
    return 0;
}

/* Demangled: png_write_chunk_start */
extern "C" __attribute__((visibility("default"))) int png_write_chunk_start(void) {
    ALOGD("png_write_chunk_start() called");
    return 0;
}

/* Demangled: png_get_user_chunk_ptr */
extern "C" __attribute__((visibility("default"))) int png_get_user_chunk_ptr(void) {
    ALOGD("png_get_user_chunk_ptr() called");
    return 0;
}

/* Demangled: png_process_some_data */
extern "C" __attribute__((visibility("default"))) int png_process_some_data(void) {
    ALOGD("png_process_some_data() called");
    return 0;
}

/* Exported Object: deflate_copyright */
extern "C" __attribute__((visibility("default"))) void* deflate_copyright = NULL;

/* Demangled: SnappyOutStream::flush() */
extern "C" __attribute__((visibility("default"))) int _ZN15SnappyOutStream5flushEv(void) {
    ALOGD("_ZN15SnappyOutStream5flushEv() called");
    return 0;
}

/* Demangled: png_push_read_IDAT */
extern "C" __attribute__((visibility("default"))) int png_push_read_IDAT(void) {
    ALOGD("png_push_read_IDAT() called");
    return 0;
}

/* Demangled: trace::Visitor::visit(trace::Float*) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace7Visitor5visitEPNS_5FloatE(void) {
    ALOGD("_ZN5trace7Visitor5visitEPNS_5FloatE() called");
    return 0;
}

/* Demangled: trace::Visitor::visit(trace::Double*) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace7Visitor5visitEPNS_6DoubleE(void) {
    ALOGD("_ZN5trace7Visitor5visitEPNS_6DoubleE() called");
    return 0;
}

/* Demangled: snappy_validate_compressed_buffer */
extern "C" __attribute__((visibility("default"))) int snappy_validate_compressed_buffer(void) {
    ALOGD("snappy_validate_compressed_buffer() called");
    return 0;
}

/* Exported Object: typeinfo name for EzContextES11 */
extern "C" __attribute__((visibility("default"))) void* _ZTS13EzContextES11 = NULL;

/* Demangled: png_write_end */
extern "C" __attribute__((visibility("default"))) int png_write_end(void) {
    ALOGD("png_write_end() called");
    return 0;
}

/* Demangled: png_destroy_struct */
extern "C" __attribute__((visibility("default"))) int png_destroy_struct(void) {
    ALOGD("png_destroy_struct() called");
    return 0;
}

/* Demangled: png_set_text */
extern "C" __attribute__((visibility("default"))) int png_set_text(void) {
    ALOGD("png_set_text() called");
    return 0;
}

/* Demangled: png_write_hIST */
extern "C" __attribute__((visibility("default"))) int png_write_hIST(void) {
    ALOGD("png_write_hIST() called");
    return 0;
}

/* Demangled: deflateInit2_ */
extern "C" __attribute__((visibility("default"))) int deflateInit2_(void) {
    ALOGD("deflateInit2_() called");
    return 0;
}

/* Exported Object: typeinfo for snappy::UncheckedByteArraySink */
extern "C" __attribute__((visibility("default"))) void* _ZTIN6snappy22UncheckedByteArraySinkE = NULL;

/* Exported Object: typeinfo name for ARCHookListener */
extern "C" __attribute__((visibility("default"))) void* _ZTS15ARCHookListener = NULL;

/* Demangled: png_push_handle_unknown */
extern "C" __attribute__((visibility("default"))) int png_push_handle_unknown(void) {
    ALOGD("png_push_handle_unknown() called");
    return 0;
}

/* Demangled: png_set_text_compression_method */
extern "C" __attribute__((visibility("default"))) int png_set_text_compression_method(void) {
    ALOGD("png_set_text_compression_method() called");
    return 0;
}

/* Exported Object: typeinfo name for trace::Double */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5trace6DoubleE = NULL;

/* Demangled: FrameRecord::SwapFrame() */
extern "C" __attribute__((visibility("default"))) int _ZN11FrameRecord9SwapFrameEv(void) {
    ALOGD("_ZN11FrameRecord9SwapFrameEv() called");
    return 0;
}

/* Demangled: png_get_sPLT */
extern "C" __attribute__((visibility("default"))) int png_get_sPLT(void) {
    ALOGD("png_get_sPLT() called");
    return 0;
}

/* Demangled: png_crc_finish */
extern "C" __attribute__((visibility("default"))) int png_crc_finish(void) {
    ALOGD("png_crc_finish() called");
    return 0;
}

/* Exported Object: trace::localWriter */
extern "C" __attribute__((visibility("default"))) void* _ZN5trace11localWriterE = NULL;

/* Demangled: snappy::ByteArraySource::~ByteArraySource() */
extern "C" __attribute__((visibility("default"))) int _ZN6snappy15ByteArraySourceD0Ev(void) {
    ALOGD("_ZN6snappy15ByteArraySourceD0Ev() called");
    return 0;
}

/* Demangled: ARCRegisterGLESv2Hook */
extern "C" __attribute__((visibility("default"))) int ARCRegisterGLESv2Hook(void) {
    ALOGD("ARCRegisterGLESv2Hook() called");
    return 0;
}

/* Demangled: png_set_alpha_mode_fixed */
extern "C" __attribute__((visibility("default"))) int png_set_alpha_mode_fixed(void) {
    ALOGD("png_set_alpha_mode_fixed() called");
    return 0;
}

/* Demangled: png_set_gAMA_fixed */
extern "C" __attribute__((visibility("default"))) int png_set_gAMA_fixed(void) {
    ALOGD("png_set_gAMA_fixed() called");
    return 0;
}

/* Demangled: trace::Enum::visit(trace::Visitor&) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace4Enum5visitERNS_7VisitorE(void) {
    ALOGD("_ZN5trace4Enum5visitERNS_7VisitorE() called");
    return 0;
}

/* Demangled: trace::Float::visit(trace::Visitor&) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace5Float5visitERNS_7VisitorE(void) {
    ALOGD("_ZN5trace5Float5visitERNS_7VisitorE() called");
    return 0;
}

/* Demangled: trace::Double::toUInt() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace6Double6toUIntEv(void) {
    ALOGD("_ZNK5trace6Double6toUIntEv() called");
    return 0;
}

/* Exported Object: vtable for snappy::Source */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6snappy6SourceE = NULL;

/* Demangled: png_get_channels */
extern "C" __attribute__((visibility("default"))) int png_get_channels(void) {
    ALOGD("png_get_channels() called");
    return 0;
}

/* Demangled: png_destroy_gamma_table */
extern "C" __attribute__((visibility("default"))) int png_destroy_gamma_table(void) {
    ALOGD("png_destroy_gamma_table() called");
    return 0;
}

/* Demangled: png_gamma_8bit_correct */
extern "C" __attribute__((visibility("default"))) int png_gamma_8bit_correct(void) {
    ALOGD("png_gamma_8bit_correct() called");
    return 0;
}

/* Demangled: png_set_error_fn */
extern "C" __attribute__((visibility("default"))) int png_set_error_fn(void) {
    ALOGD("png_set_error_fn() called");
    return 0;
}

/* Demangled: compress */
extern "C" __attribute__((visibility("default"))) int compress(void) {
    ALOGD("compress() called");
    return 0;
}

/* Demangled: trace::UInt::toFloat() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace4UInt7toFloatEv(void) {
    ALOGD("_ZNK5trace4UInt7toFloatEv() called");
    return 0;
}

/* Demangled: EzContextES20::SetFixSize(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN13EzContextES2010SetFixSizeEii(void) {
    ALOGD("_ZN13EzContextES2010SetFixSizeEii() called");
    return 0;
}

/* Exported Object: typeinfo name for GLDumperES20 */
extern "C" __attribute__((visibility("default"))) void* _ZTS12GLDumperES20 = NULL;

/* Demangled: png_set_strip_16 */
extern "C" __attribute__((visibility("default"))) int png_set_strip_16(void) {
    ALOGD("png_set_strip_16() called");
    return 0;
}

/* Demangled: png_write_info */
extern "C" __attribute__((visibility("default"))) int png_write_info(void) {
    ALOGD("png_write_info() called");
    return 0;
}

/* Demangled: trace::File::setCurrentOffset(trace::File::Offset const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace4File16setCurrentOffsetERKNS0_6OffsetE(void) {
    ALOGD("_ZN5trace4File16setCurrentOffsetERKNS0_6OffsetE() called");
    return 0;
}

/* Demangled: trace::Writer::writeBlob(void const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace6Writer9writeBlobEPKvj(void) {
    ALOGD("_ZN5trace6Writer9writeBlobEPKvj() called");
    return 0;
}

/* Exported Object: typeinfo for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: png_build_gamma_table */
extern "C" __attribute__((visibility("default"))) int png_build_gamma_table(void) {
    ALOGD("png_build_gamma_table() called");
    return 0;
}

/* Demangled: png_set_compression_window_bits */
extern "C" __attribute__((visibility("default"))) int png_set_compression_window_bits(void) {
    ALOGD("png_set_compression_window_bits() called");
    return 0;
}

/* Demangled: png_do_pack */
extern "C" __attribute__((visibility("default"))) int png_do_pack(void) {
    ALOGD("png_do_pack() called");
    return 0;
}

/* Demangled: trace::Bitmask::visit(trace::Visitor&) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace7Bitmask5visitERNS_7VisitorE(void) {
    ALOGD("_ZN5trace7Bitmask5visitERNS_7VisitorE() called");
    return 0;
}

/* Exported Object: typeinfo name for snappy::UncheckedByteArraySink */
extern "C" __attribute__((visibility("default"))) void* _ZTSN6snappy22UncheckedByteArraySinkE = NULL;

/* Demangled: png_set_compression_mem_level */
extern "C" __attribute__((visibility("default"))) int png_set_compression_mem_level(void) {
    ALOGD("png_set_compression_mem_level() called");
    return 0;
}

/* Demangled: SnappyFile::setCurrentOffset(trace::File::Offset const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10SnappyFile16setCurrentOffsetERKN5trace4File6OffsetE(void) {
    ALOGD("_ZN10SnappyFile16setCurrentOffsetERKN5trace4File6OffsetE() called");
    return 0;
}

/* Exported Object: vtable for trace::String */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5trace6StringE = NULL;

/* Demangled: snappy::ByteArraySource::Peek(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN6snappy15ByteArraySource4PeekEPj(void) {
    ALOGD("_ZN6snappy15ByteArraySource4PeekEPj() called");
    return 0;
}

/* Demangled: GLDumperES20::BackupStates() */
extern "C" __attribute__((visibility("default"))) int _ZN12GLDumperES2012BackupStatesEv(void) {
    ALOGD("_ZN12GLDumperES2012BackupStatesEv() called");
    return 0;
}

/* Demangled: png_get_x_offset_inches_fixed */
extern "C" __attribute__((visibility("default"))) int png_get_x_offset_inches_fixed(void) {
    ALOGD("png_get_x_offset_inches_fixed() called");
    return 0;
}

/* Demangled: png_push_handle_zTXt */
extern "C" __attribute__((visibility("default"))) int png_push_handle_zTXt(void) {
    ALOGD("png_push_handle_zTXt() called");
    return 0;
}

/* Demangled: png_do_unshift */
extern "C" __attribute__((visibility("default"))) int png_do_unshift(void) {
    ALOGD("png_do_unshift() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<trace::BoundBlob, std::__1::allocator<trace::BoundBlob> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIN5trace9BoundBlobENS_9allocatorIS2_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseIN5trace9BoundBlobENS_9allocatorIS2_EEE5clearEv() called");
    return 0;
}

/* Exported Object: typeinfo for trace::Visitor */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5trace7VisitorE = NULL;

/* Demangled: trace::Writer::beginArray(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace6Writer10beginArrayEj(void) {
    ALOGD("_ZN5trace6Writer10beginArrayEj() called");
    return 0;
}

/* Demangled: apitrace_setConfigs */
extern "C" __attribute__((visibility("default"))) int apitrace_setConfigs(void) {
    ALOGD("apitrace_setConfigs() called");
    return 0;
}

/* Demangled: png_get_interlace_type */
extern "C" __attribute__((visibility("default"))) int png_get_interlace_type(void) {
    ALOGD("png_get_interlace_type() called");
    return 0;
}

/* Demangled: png_do_unpack */
extern "C" __attribute__((visibility("default"))) int png_do_unpack(void) {
    ALOGD("png_do_unpack() called");
    return 0;
}

/* Demangled: adler32_combine */
extern "C" __attribute__((visibility("default"))) int adler32_combine(void) {
    ALOGD("adler32_combine() called");
    return 0;
}

/* Demangled: gzclose */
extern "C" __attribute__((visibility("default"))) int gzclose(void) {
    ALOGD("gzclose() called");
    return 0;
}

/* Demangled: FrameRecord::~FrameRecord() */
extern "C" __attribute__((visibility("default"))) int _ZN11FrameRecordD1Ev(void) {
    ALOGD("_ZN11FrameRecordD1Ev() called");
    return 0;
}

/* Demangled: ARC::SDTrace::ptSwapBuffers(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3ARC7SDTrace13ptSwapBuffersEj(void) {
    ALOGD("_ZN3ARC7SDTrace13ptSwapBuffersEj() called");
    return 0;
}

/* Demangled: png_read_transform_info */
extern "C" __attribute__((visibility("default"))) int png_read_transform_info(void) {
    ALOGD("png_read_transform_info() called");
    return 0;
}

/* Demangled: GLDumperES11::RestoreStates() */
extern "C" __attribute__((visibility("default"))) int _ZN12GLDumperES1113RestoreStatesEv(void) {
    ALOGD("_ZN12GLDumperES1113RestoreStatesEv() called");
    return 0;
}

/* Demangled: snappy::ByteArraySource::~ByteArraySource() */
extern "C" __attribute__((visibility("default"))) int _ZN6snappy15ByteArraySourceD2Ev(void) {
    ALOGD("_ZN6snappy15ByteArraySourceD2Ev() called");
    return 0;
}

/* Demangled: png_handle_IEND */
extern "C" __attribute__((visibility("default"))) int png_handle_IEND(void) {
    ALOGD("png_handle_IEND() called");
    return 0;
}

/* Demangled: png_set_background_fixed */
extern "C" __attribute__((visibility("default"))) int png_set_background_fixed(void) {
    ALOGD("png_set_background_fixed() called");
    return 0;
}

/* Demangled: trace::File::~File() */
extern "C" __attribute__((visibility("default"))) int _ZN5trace4FileD0Ev(void) {
    ALOGD("_ZN5trace4FileD0Ev() called");
    return 0;
}

/* Demangled: EzContextES11::~EzContextES11() */
extern "C" __attribute__((visibility("default"))) int _ZN13EzContextES11D0Ev(void) {
    ALOGD("_ZN13EzContextES11D0Ev() called");
    return 0;
}

/* Demangled: GLDumperES11::GLDumperES11(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12GLDumperES11C2Eii(void) {
    ALOGD("_ZN12GLDumperES11C2Eii() called");
    return 0;
}

/* Demangled: png_set_swap */
extern "C" __attribute__((visibility("default"))) int png_set_swap(void) {
    ALOGD("png_set_swap() called");
    return 0;
}

/* Demangled: png_get_chunk_cache_max */
extern "C" __attribute__((visibility("default"))) int png_get_chunk_cache_max(void) {
    ALOGD("png_get_chunk_cache_max() called");
    return 0;
}

/* Demangled: png_get_hIST */
extern "C" __attribute__((visibility("default"))) int png_get_hIST(void) {
    ALOGD("png_get_hIST() called");
    return 0;
}

/* Demangled: png_push_handle_iTXt */
extern "C" __attribute__((visibility("default"))) int png_push_handle_iTXt(void) {
    ALOGD("png_push_handle_iTXt() called");
    return 0;
}

/* Demangled: png_default_flush */
extern "C" __attribute__((visibility("default"))) int png_default_flush(void) {
    ALOGD("png_default_flush() called");
    return 0;
}

/* Exported Object: inflate_copyright */
extern "C" __attribute__((visibility("default"))) void* inflate_copyright = NULL;

/* Demangled: png_XYZ_from_xy_checked */
extern "C" __attribute__((visibility("default"))) int png_XYZ_from_xy_checked(void) {
    ALOGD("png_XYZ_from_xy_checked() called");
    return 0;
}

/* Demangled: png_set_gamma_fixed */
extern "C" __attribute__((visibility("default"))) int png_set_gamma_fixed(void) {
    ALOGD("png_set_gamma_fixed() called");
    return 0;
}

/* Demangled: png_set_chunk_cache_max */
extern "C" __attribute__((visibility("default"))) int png_set_chunk_cache_max(void) {
    ALOGD("png_set_chunk_cache_max() called");
    return 0;
}

/* Demangled: snappy::Compress(char const*, unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN6snappy8CompressEPKcjPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN6snappy8CompressEPKcjPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: EzContextES11::SetRatioSize(float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN13EzContextES1112SetRatioSizeEff(void) {
    ALOGD("_ZN13EzContextES1112SetRatioSizeEff() called");
    return 0;
}

/* Demangled: png_reciprocal2 */
extern "C" __attribute__((visibility("default"))) int png_reciprocal2(void) {
    ALOGD("png_reciprocal2() called");
    return 0;
}

/* Demangled: png_get_image_height */
extern "C" __attribute__((visibility("default"))) int png_get_image_height(void) {
    ALOGD("png_get_image_height() called");
    return 0;
}

/* Demangled: GLDumperES20::~GLDumperES20() */
extern "C" __attribute__((visibility("default"))) int _ZN12GLDumperES20D1Ev(void) {
    ALOGD("_ZN12GLDumperES20D1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Demangled: trace::Value::toDouble() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace5Value8toDoubleEv(void) {
    ALOGD("_ZNK5trace5Value8toDoubleEv() called");
    return 0;
}

/* Exported Object: typeinfo name for trace::Array */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5trace5ArrayE = NULL;

/* Demangled: png_gamma_correct */
extern "C" __attribute__((visibility("default"))) int png_gamma_correct(void) {
    ALOGD("png_gamma_correct() called");
    return 0;
}

/* Demangled: inflateReset2 */
extern "C" __attribute__((visibility("default"))) int inflateReset2(void) {
    ALOGD("inflateReset2() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt3__113basic_filebufIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: png_handle_oFFs */
extern "C" __attribute__((visibility("default"))) int png_handle_oFFs(void) {
    ALOGD("png_handle_oFFs() called");
    return 0;
}

/* Demangled: png_write_chunk */
extern "C" __attribute__((visibility("default"))) int png_write_chunk(void) {
    ALOGD("png_write_chunk() called");
    return 0;
}

/* Demangled: trace::Value::toFloat() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace5Value7toFloatEv(void) {
    ALOGD("_ZNK5trace5Value7toFloatEv() called");
    return 0;
}

/* Exported Object: ARC::SDTrace::g_msgFlags */
extern "C" __attribute__((visibility("default"))) void* _ZN3ARC7SDTrace10g_msgFlagsE = NULL;

/* Demangled: deflatePending */
extern "C" __attribute__((visibility("default"))) int deflatePending(void) {
    ALOGD("deflatePending() called");
    return 0;
}

/* Demangled: trace::File::~File() */
extern "C" __attribute__((visibility("default"))) int _ZN5trace4FileD2Ev(void) {
    ALOGD("_ZN5trace4FileD2Ev() called");
    return 0;
}

/* Demangled: EzContextES11::~EzContextES11() */
extern "C" __attribute__((visibility("default"))) int _ZN13EzContextES11D2Ev(void) {
    ALOGD("_ZN13EzContextES11D2Ev() called");
    return 0;
}

/* Demangled: png_handle_zTXt */
extern "C" __attribute__((visibility("default"))) int png_handle_zTXt(void) {
    ALOGD("png_handle_zTXt() called");
    return 0;
}

/* Demangled: png_do_read_transformations */
extern "C" __attribute__((visibility("default"))) int png_do_read_transformations(void) {
    ALOGD("png_do_read_transformations() called");
    return 0;
}

/* Exported Object: vtable for trace::Blob */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5trace4BlobE = NULL;

/* Exported Object: vtable for trace::Visitor */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5trace7VisitorE = NULL;

/* Demangled: trace::Writer::beginReturn() */
extern "C" __attribute__((visibility("default"))) int _ZN5trace6Writer11beginReturnEv(void) {
    ALOGD("_ZN5trace6Writer11beginReturnEv() called");
    return 0;
}

/* Demangled: IGLDumper::CalcContentDifference(float*, IGLDumper const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9IGLDumper21CalcContentDifferenceEPfPKS_(void) {
    ALOGD("_ZN9IGLDumper21CalcContentDifferenceEPfPKS_() called");
    return 0;
}

/* Demangled: GLDumperES20::ReadPixels(int) */
extern "C" __attribute__((visibility("default"))) int _ZN12GLDumperES2010ReadPixelsEi(void) {
    ALOGD("_ZN12GLDumperES2010ReadPixelsEi() called");
    return 0;
}

/* Demangled: png_handle_bKGD */
extern "C" __attribute__((visibility("default"))) int png_handle_bKGD(void) {
    ALOGD("png_handle_bKGD() called");
    return 0;
}

/* Demangled: png_push_fill_buffer */
extern "C" __attribute__((visibility("default"))) int png_push_fill_buffer(void) {
    ALOGD("png_push_fill_buffer() called");
    return 0;
}

/* Demangled: inflateBackInit_ */
extern "C" __attribute__((visibility("default"))) int inflateBackInit_(void) {
    ALOGD("inflateBackInit_() called");
    return 0;
}

/* Demangled: png_set_sRGB_gAMA_and_cHRM */
extern "C" __attribute__((visibility("default"))) int png_set_sRGB_gAMA_and_cHRM(void) {
    ALOGD("png_set_sRGB_gAMA_and_cHRM() called");
    return 0;
}

/* Demangled: png_set_sRGB */
extern "C" __attribute__((visibility("default"))) int png_set_sRGB(void) {
    ALOGD("png_set_sRGB() called");
    return 0;
}

/* Demangled: trace::StackFrame::~StackFrame() */
extern "C" __attribute__((visibility("default"))) int _ZN5trace10StackFrameD1Ev(void) {
    ALOGD("_ZN5trace10StackFrameD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo for trace::String */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5trace6StringE = NULL;

/* Demangled: png_get_sCAL_fixed */
extern "C" __attribute__((visibility("default"))) int png_get_sCAL_fixed(void) {
    ALOGD("png_get_sCAL_fixed() called");
    return 0;
}

/* Demangled: png_handle_iTXt */
extern "C" __attribute__((visibility("default"))) int png_handle_iTXt(void) {
    ALOGD("png_handle_iTXt() called");
    return 0;
}

/* Demangled: png_default_read_data */
extern "C" __attribute__((visibility("default"))) int png_default_read_data(void) {
    ALOGD("png_default_read_data() called");
    return 0;
}

/* Demangled: png_convert_from_time_t */
extern "C" __attribute__((visibility("default"))) int png_convert_from_time_t(void) {
    ALOGD("png_convert_from_time_t() called");
    return 0;
}

/* Demangled: deflateResetKeep */
extern "C" __attribute__((visibility("default"))) int deflateResetKeep(void) {
    ALOGD("deflateResetKeep() called");
    return 0;
}

/* Demangled: std::__1::vector<bool, std::__1::allocator<bool> >::reserve(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIbNS_9allocatorIbEEE7reserveEj(void) {
    ALOGD("_ZNSt3__16vectorIbNS_9allocatorIbEEE7reserveEj() called");
    return 0;
}

/* Demangled: gzopen64 */
extern "C" __attribute__((visibility("default"))) int gzopen64(void) {
    ALOGD("gzopen64() called");
    return 0;
}

/* Demangled: png_get_x_pixels_per_meter */
extern "C" __attribute__((visibility("default"))) int png_get_x_pixels_per_meter(void) {
    ALOGD("png_get_x_pixels_per_meter() called");
    return 0;
}

/* Demangled: png_do_compose */
extern "C" __attribute__((visibility("default"))) int png_do_compose(void) {
    ALOGD("png_do_compose() called");
    return 0;
}

/* Exported Object: typeinfo name for EzContextES20 */
extern "C" __attribute__((visibility("default"))) void* _ZTS13EzContextES20 = NULL;

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::sync() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv() called");
    return 0;
}

/* Exported Object: typeinfo for trace::Bitmask */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5trace7BitmaskE = NULL;

/* Demangled: png_check_IHDR */
extern "C" __attribute__((visibility("default"))) int png_check_IHDR(void) {
    ALOGD("png_check_IHDR() called");
    return 0;
}

/* Demangled: png_write_tEXt */
extern "C" __attribute__((visibility("default"))) int png_write_tEXt(void) {
    ALOGD("png_write_tEXt() called");
    return 0;
}

/* Demangled: gzeof */
extern "C" __attribute__((visibility("default"))) int gzeof(void) {
    ALOGD("gzeof() called");
    return 0;
}

/* Exported Object: vtable for snappy::Sink */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6snappy4SinkE = NULL;

/* Demangled: png_write_destroy */
extern "C" __attribute__((visibility("default"))) int png_write_destroy(void) {
    ALOGD("png_write_destroy() called");
    return 0;
}

/* Demangled: deflateCopy */
extern "C" __attribute__((visibility("default"))) int deflateCopy(void) {
    ALOGD("deflateCopy() called");
    return 0;
}

/* Demangled: trace::SInt::toSInt() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace4SInt6toSIntEv(void) {
    ALOGD("_ZNK5trace4SInt6toSIntEv() called");
    return 0;
}

/* Exported Object: vtable for trace::Bitmask */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5trace7BitmaskE = NULL;

/* Demangled: SnappyOutStream::write(void const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN15SnappyOutStream5writeEPKvj(void) {
    ALOGD("_ZN15SnappyOutStream5writeEPKvj() called");
    return 0;
}

/* Demangled: snappy::UncheckedByteArraySink::~UncheckedByteArraySink() */
extern "C" __attribute__((visibility("default"))) int _ZN6snappy22UncheckedByteArraySinkD1Ev(void) {
    ALOGD("_ZN6snappy22UncheckedByteArraySinkD1Ev() called");
    return 0;
}

/* Demangled: EzContextES11::BackupStates() */
extern "C" __attribute__((visibility("default"))) int _ZN13EzContextES1112BackupStatesEv(void) {
    ALOGD("_ZN13EzContextES1112BackupStatesEv() called");
    return 0;
}

/* Demangled: EzContextES20::EzContextES20() */
extern "C" __attribute__((visibility("default"))) int _ZN13EzContextES20C1Ev(void) {
    ALOGD("_ZN13EzContextES20C1Ev() called");
    return 0;
}

/* Demangled: png_handle_sCAL */
extern "C" __attribute__((visibility("default"))) int png_handle_sCAL(void) {
    ALOGD("png_handle_sCAL() called");
    return 0;
}

/* Demangled: trace::UInt::toBool() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace4UInt6toBoolEv(void) {
    ALOGD("_ZNK5trace4UInt6toBoolEv() called");
    return 0;
}

/* Demangled: snappy_compress */
extern "C" __attribute__((visibility("default"))) int snappy_compress(void) {
    ALOGD("snappy_compress() called");
    return 0;
}

/* Demangled: EzContextES11::RestoreStates() */
extern "C" __attribute__((visibility("default"))) int _ZN13EzContextES1113RestoreStatesEv(void) {
    ALOGD("_ZN13EzContextES1113RestoreStatesEv() called");
    return 0;
}

/* Demangled: png_free_data */
extern "C" __attribute__((visibility("default"))) int png_free_data(void) {
    ALOGD("png_free_data() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: trace::Pointer::toPointer() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace7Pointer9toPointerEv(void) {
    ALOGD("_ZNK5trace7Pointer9toPointerEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::imbue(std::__1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE() called");
    return 0;
}

/* Demangled: gzbuffer */
extern "C" __attribute__((visibility("default"))) int gzbuffer(void) {
    ALOGD("gzbuffer() called");
    return 0;
}

/* Demangled: trace::Value::toSInt() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace5Value6toSIntEv(void) {
    ALOGD("_ZNK5trace5Value6toSIntEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: png_set_sBIT */
extern "C" __attribute__((visibility("default"))) int png_set_sBIT(void) {
    ALOGD("png_set_sBIT() called");
    return 0;
}

/* Demangled: inflateSync */
extern "C" __attribute__((visibility("default"))) int inflateSync(void) {
    ALOGD("inflateSync() called");
    return 0;
}

/* Exported Object: vtable for trace::SInt */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5trace4SIntE = NULL;

/* Demangled: EzContextES20::SetRatioSize(float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN13EzContextES2012SetRatioSizeEff(void) {
    ALOGD("_ZN13EzContextES2012SetRatioSizeEff() called");
    return 0;
}

/* Demangled: png_flush */
extern "C" __attribute__((visibility("default"))) int png_flush(void) {
    ALOGD("png_flush() called");
    return 0;
}

/* Demangled: deflateParams */
extern "C" __attribute__((visibility("default"))) int deflateParams(void) {
    ALOGD("deflateParams() called");
    return 0;
}

/* Exported Object: vtable for trace::Float */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5trace5FloatE = NULL;

/* Demangled: GLDumperES20::ReadPixels(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12GLDumperES2010ReadPixelsEiii(void) {
    ALOGD("_ZN12GLDumperES2010ReadPixelsEiii() called");
    return 0;
}

/* Demangled: png_get_text */
extern "C" __attribute__((visibility("default"))) int png_get_text(void) {
    ALOGD("png_get_text() called");
    return 0;
}

/* Demangled: SnappyFile::SnappyFile(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10SnappyFileC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN10SnappyFileC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: trace::Blob::toPointer(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace4Blob9toPointerEb(void) {
    ALOGD("_ZN5trace4Blob9toPointerEb() called");
    return 0;
}

/* Demangled: ARCRegisterGLESv1Hook */
extern "C" __attribute__((visibility("default"))) int ARCRegisterGLESv1Hook(void) {
    ALOGD("ARCRegisterGLESv1Hook() called");
    return 0;
}

/* Demangled: png_set_write_fn */
extern "C" __attribute__((visibility("default"))) int png_set_write_fn(void) {
    ALOGD("png_set_write_fn() called");
    return 0;
}

/* Demangled: snappy::RawUncompress(char const*, unsigned int, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN6snappy13RawUncompressEPKcjPc(void) {
    ALOGD("_ZN6snappy13RawUncompressEPKcjPc() called");
    return 0;
}

/* Demangled: image::readPNG(std::__1::basic_istream<char, std::__1::char_traits<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5image7readPNGERNSt3__113basic_istreamIcNS0_11char_traitsIcEEEE(void) {
    ALOGD("_ZN5image7readPNGERNSt3__113basic_istreamIcNS0_11char_traitsIcEEEE() called");
    return 0;
}

/* Demangled: uncompress */
extern "C" __attribute__((visibility("default"))) int uncompress(void) {
    ALOGD("uncompress() called");
    return 0;
}

/* Demangled: trace::Array::visit(trace::Visitor&) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace5Array5visitERNS_7VisitorE(void) {
    ALOGD("_ZN5trace5Array5visitERNS_7VisitorE() called");
    return 0;
}

/* Demangled: trace::Visitor::visit(trace::Bitmask*) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace7Visitor5visitEPNS_7BitmaskE(void) {
    ALOGD("_ZN5trace7Visitor5visitEPNS_7BitmaskE() called");
    return 0;
}

/* Demangled: trace::Writer::writeString(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace6Writer11writeStringEPKcj(void) {
    ALOGD("_ZN5trace6Writer11writeStringEPKcj() called");
    return 0;
}

/* Demangled: trace::LocalWriter::endEnter() */
extern "C" __attribute__((visibility("default"))) int _ZN5trace11LocalWriter8endEnterEv(void) {
    ALOGD("_ZN5trace11LocalWriter8endEnterEv() called");
    return 0;
}

/* Demangled: ARC::SDTrace::ptCreateContext(unsigned int, ARC::SDTrace::ESType) */
extern "C" __attribute__((visibility("default"))) int _ZN3ARC7SDTrace15ptCreateContextEjNS0_6ESTypeE(void) {
    ALOGD("_ZN3ARC7SDTrace15ptCreateContextEjNS0_6ESTypeE() called");
    return 0;
}

/* Demangled: png_set_filter_heuristics_fixed */
extern "C" __attribute__((visibility("default"))) int png_set_filter_heuristics_fixed(void) {
    ALOGD("png_set_filter_heuristics_fixed() called");
    return 0;
}

/* Demangled: trace::Visitor::visit(trace::Struct*) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace7Visitor5visitEPNS_6StructE(void) {
    ALOGD("_ZN5trace7Visitor5visitEPNS_6StructE() called");
    return 0;
}

/* Demangled: trace::SInt::toUInt() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace4SInt6toUIntEv(void) {
    ALOGD("_ZNK5trace4SInt6toUIntEv() called");
    return 0;
}

/* Exported Object: typeinfo name for trace::Pointer */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5trace7PointerE = NULL;

/* Demangled: png_check_fp_number */
extern "C" __attribute__((visibility("default"))) int png_check_fp_number(void) {
    ALOGD("png_check_fp_number() called");
    return 0;
}

/* Demangled: png_get_mem_ptr */
extern "C" __attribute__((visibility("default"))) int png_get_mem_ptr(void) {
    ALOGD("png_get_mem_ptr() called");
    return 0;
}

/* Demangled: trace::Writer::writeEnum(trace::EnumSig const*, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace6Writer9writeEnumEPKNS_7EnumSigEx(void) {
    ALOGD("_ZN5trace6Writer9writeEnumEPKNS_7EnumSigEx() called");
    return 0;
}

/* Demangled: gzoffset */
extern "C" __attribute__((visibility("default"))) int gzoffset(void) {
    ALOGD("gzoffset() called");
    return 0;
}

/* Demangled: trace::Visitor::visit(trace::Bool*) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace7Visitor5visitEPNS_4BoolE(void) {
    ALOGD("_ZN5trace7Visitor5visitEPNS_4BoolE() called");
    return 0;
}

/* Exported Object: typeinfo name for trace::Struct */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5trace6StructE = NULL;

/* Demangled: trace::LocalWriter::flush() */
extern "C" __attribute__((visibility("default"))) int _ZN5trace11LocalWriter5flushEv(void) {
    ALOGD("_ZN5trace11LocalWriter5flushEv() called");
    return 0;
}

/* Demangled: png_set_text_compression_mem_level */
extern "C" __attribute__((visibility("default"))) int png_set_text_compression_mem_level(void) {
    ALOGD("png_set_text_compression_mem_level() called");
    return 0;
}

/* Demangled: deflateInit_ */
extern "C" __attribute__((visibility("default"))) int deflateInit_(void) {
    ALOGD("deflateInit_() called");
    return 0;
}

/* Demangled: GLDumperES20::RestoreStates() */
extern "C" __attribute__((visibility("default"))) int _ZN12GLDumperES2013RestoreStatesEv(void) {
    ALOGD("_ZN12GLDumperES2013RestoreStatesEv() called");
    return 0;
}

/* Demangled: png_set_pCAL */
extern "C" __attribute__((visibility("default"))) int png_set_pCAL(void) {
    ALOGD("png_set_pCAL() called");
    return 0;
}

/* Demangled: png_do_write_transformations */
extern "C" __attribute__((visibility("default"))) int png_do_write_transformations(void) {
    ALOGD("png_do_write_transformations() called");
    return 0;
}

/* Demangled: snappy::GetUncompressedLength(char const*, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN6snappy21GetUncompressedLengthEPKcjPj(void) {
    ALOGD("_ZN6snappy21GetUncompressedLengthEPKcjPj() called");
    return 0;
}

/* Demangled: trace::Visitor::visit(trace::UInt*) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace7Visitor5visitEPNS_4UIntE(void) {
    ALOGD("_ZN5trace7Visitor5visitEPNS_4UIntE() called");
    return 0;
}

/* Demangled: trace::Value::toUInt() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace5Value6toUIntEv(void) {
    ALOGD("_ZNK5trace5Value6toUIntEv() called");
    return 0;
}

/* Demangled: std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0> std::__1::__copy_unaligned<std::__1::vector<bool, std::__1::allocator<bool> >, false>(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__116__copy_unalignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_(void) {
    ALOGD("_ZNSt3__116__copy_unalignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_() called");
    return 0;
}

/* Demangled: snappy::ByteArraySource::Available() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6snappy15ByteArraySource9AvailableEv(void) {
    ALOGD("_ZNK6snappy15ByteArraySource9AvailableEv() called");
    return 0;
}

/* Demangled: png_process_data_pause */
extern "C" __attribute__((visibility("default"))) int png_process_data_pause(void) {
    ALOGD("png_process_data_pause() called");
    return 0;
}

/* Demangled: png_do_expand_16 */
extern "C" __attribute__((visibility("default"))) int png_do_expand_16(void) {
    ALOGD("png_do_expand_16() called");
    return 0;
}

/* Demangled: inflate_fast */
extern "C" __attribute__((visibility("default"))) int inflate_fast(void) {
    ALOGD("inflate_fast() called");
    return 0;
}

/* Demangled: trace::Repr::toString() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace4Repr8toStringEv(void) {
    ALOGD("_ZNK5trace4Repr8toStringEv() called");
    return 0;
}

/* Exported Object: vtable for snappy::UncheckedByteArraySink */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6snappy22UncheckedByteArraySinkE = NULL;

/* Demangled: EzContextES20::UpdateDrawableSize() */
extern "C" __attribute__((visibility("default"))) int _ZN13EzContextES2018UpdateDrawableSizeEv(void) {
    ALOGD("_ZN13EzContextES2018UpdateDrawableSizeEv() called");
    return 0;
}

/* Demangled: png_handle_cHRM */
extern "C" __attribute__((visibility("default"))) int png_handle_cHRM(void) {
    ALOGD("png_handle_cHRM() called");
    return 0;
}

/* Demangled: png_do_gray_to_rgb */
extern "C" __attribute__((visibility("default"))) int png_do_gray_to_rgb(void) {
    ALOGD("png_do_gray_to_rgb() called");
    return 0;
}

/* Demangled: png_do_read_invert_alpha */
extern "C" __attribute__((visibility("default"))) int png_do_read_invert_alpha(void) {
    ALOGD("png_do_read_invert_alpha() called");
    return 0;
}

/* Demangled: png_get_uint_16 */
extern "C" __attribute__((visibility("default"))) int png_get_uint_16(void) {
    ALOGD("png_get_uint_16() called");
    return 0;
}

/* Demangled: inflateGetDictionary */
extern "C" __attribute__((visibility("default"))) int inflateGetDictionary(void) {
    ALOGD("inflateGetDictionary() called");
    return 0;
}

/* Demangled: image::isPNGFormat(image::G3D_FORMAT_TYPE) */
extern "C" __attribute__((visibility("default"))) int _ZN5image11isPNGFormatENS_15G3D_FORMAT_TYPEE(void) {
    ALOGD("_ZN5image11isPNGFormatENS_15G3D_FORMAT_TYPEE() called");
    return 0;
}

/* Demangled: png_set_longjmp_fn */
extern "C" __attribute__((visibility("default"))) int png_set_longjmp_fn(void) {
    ALOGD("png_set_longjmp_fn() called");
    return 0;
}

/* Demangled: png_read_sig */
extern "C" __attribute__((visibility("default"))) int png_read_sig(void) {
    ALOGD("png_read_sig() called");
    return 0;
}

/* Demangled: png_set_invert_mono */
extern "C" __attribute__((visibility("default"))) int png_set_invert_mono(void) {
    ALOGD("png_set_invert_mono() called");
    return 0;
}

/* Demangled: SnappyFile::rawSkip(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10SnappyFile7rawSkipEj(void) {
    ALOGD("_ZN10SnappyFile7rawSkipEj() called");
    return 0;
}

/* Demangled: trace::Writer::Writer() */
extern "C" __attribute__((visibility("default"))) int _ZN5trace6WriterC1Ev(void) {
    ALOGD("_ZN5trace6WriterC1Ev() called");
    return 0;
}

/* Demangled: EzContextES11::CreateFBO() */
extern "C" __attribute__((visibility("default"))) int _ZN13EzContextES119CreateFBOEv(void) {
    ALOGD("_ZN13EzContextES119CreateFBOEv() called");
    return 0;
}

/* Demangled: png_read_chunk_header */
extern "C" __attribute__((visibility("default"))) int png_read_chunk_header(void) {
    ALOGD("png_read_chunk_header() called");
    return 0;
}

/* Demangled: trace::Writer::beginEnter(trace::FunctionSig const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace6Writer10beginEnterEPKNS_11FunctionSigEj(void) {
    ALOGD("_ZN5trace6Writer10beginEnterEPKNS_11FunctionSigEj() called");
    return 0;
}

/* Demangled: png_set_crc_action */
extern "C" __attribute__((visibility("default"))) int png_set_crc_action(void) {
    ALOGD("png_set_crc_action() called");
    return 0;
}

/* Demangled: png_write_sRGB */
extern "C" __attribute__((visibility("default"))) int png_write_sRGB(void) {
    ALOGD("png_write_sRGB() called");
    return 0;
}

/* Demangled: png_create_info_struct */
extern "C" __attribute__((visibility("default"))) int png_create_info_struct(void) {
    ALOGD("png_create_info_struct() called");
    return 0;
}

/* Demangled: gz_error */
extern "C" __attribute__((visibility("default"))) int gz_error(void) {
    ALOGD("gz_error() called");
    return 0;
}

/* Demangled: FrameRecord::DumpImage() */
extern "C" __attribute__((visibility("default"))) int _ZN11FrameRecord9DumpImageEv(void) {
    ALOGD("_ZN11FrameRecord9DumpImageEv() called");
    return 0;
}

/* Demangled: png_warning_parameter_unsigned */
extern "C" __attribute__((visibility("default"))) int png_warning_parameter_unsigned(void) {
    ALOGD("png_warning_parameter_unsigned() called");
    return 0;
}

/* Demangled: IGLDumper::IGLDumper(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9IGLDumperC2Eii(void) {
    ALOGD("_ZN9IGLDumperC2Eii() called");
    return 0;
}

/* Demangled: png_info_destroy */
extern "C" __attribute__((visibility("default"))) int png_info_destroy(void) {
    ALOGD("png_info_destroy() called");
    return 0;
}

/* Demangled: png_get_signature */
extern "C" __attribute__((visibility("default"))) int png_get_signature(void) {
    ALOGD("png_get_signature() called");
    return 0;
}

/* Demangled: png_get_x_offset_pixels */
extern "C" __attribute__((visibility("default"))) int png_get_x_offset_pixels(void) {
    ALOGD("png_get_x_offset_pixels() called");
    return 0;
}

/* Demangled: EzContextES20::RestoreStates() */
extern "C" __attribute__((visibility("default"))) int _ZN13EzContextES2013RestoreStatesEv(void) {
    ALOGD("_ZN13EzContextES2013RestoreStatesEv() called");
    return 0;
}

/* Demangled: png_read_data */
extern "C" __attribute__((visibility("default"))) int png_read_data(void) {
    ALOGD("png_read_data() called");
    return 0;
}

/* Demangled: png_set_pHYs */
extern "C" __attribute__((visibility("default"))) int png_set_pHYs(void) {
    ALOGD("png_set_pHYs() called");
    return 0;
}

/* Demangled: png_do_shift */
extern "C" __attribute__((visibility("default"))) int png_do_shift(void) {
    ALOGD("png_do_shift() called");
    return 0;
}

/* Exported Object: typeinfo name for SnappyFile */
extern "C" __attribute__((visibility("default"))) void* _ZTS10SnappyFile = NULL;

/* Demangled: trace::Double::toDouble() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace6Double8toDoubleEv(void) {
    ALOGD("_ZNK5trace6Double8toDoubleEv() called");
    return 0;
}

/* Exported Object: typeinfo for trace::OutStream */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5trace9OutStreamE = NULL;

/* Demangled: png_init_io */
extern "C" __attribute__((visibility("default"))) int png_init_io(void) {
    ALOGD("png_init_io() called");
    return 0;
}

/* Demangled: png_do_rgb_to_gray */
extern "C" __attribute__((visibility("default"))) int png_do_rgb_to_gray(void) {
    ALOGD("png_do_rgb_to_gray() called");
    return 0;
}

/* Demangled: png_get_current_pass_number */
extern "C" __attribute__((visibility("default"))) int png_get_current_pass_number(void) {
    ALOGD("png_get_current_pass_number() called");
    return 0;
}

/* Exported Object: typeinfo name for trace::Bool */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5trace4BoolE = NULL;

/* Demangled: EzContextES11::DeleteFBO() */
extern "C" __attribute__((visibility("default"))) int _ZN13EzContextES119DeleteFBOEv(void) {
    ALOGD("_ZN13EzContextES119DeleteFBOEv() called");
    return 0;
}

/* Demangled: png_get_progressive_ptr */
extern "C" __attribute__((visibility("default"))) int png_get_progressive_ptr(void) {
    ALOGD("png_get_progressive_ptr() called");
    return 0;
}

/* Demangled: png_set_text_2 */
extern "C" __attribute__((visibility("default"))) int png_set_text_2(void) {
    ALOGD("png_set_text_2() called");
    return 0;
}

/* Demangled: png_set_tRNS */
extern "C" __attribute__((visibility("default"))) int png_set_tRNS(void) {
    ALOGD("png_set_tRNS() called");
    return 0;
}

/* Demangled: gzvprintf */
extern "C" __attribute__((visibility("default"))) int gzvprintf(void) {
    ALOGD("gzvprintf() called");
    return 0;
}

/* Demangled: SnappyFile::flushReadCache(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10SnappyFile14flushReadCacheEj(void) {
    ALOGD("_ZN10SnappyFile14flushReadCacheEj() called");
    return 0;
}

/* Exported Object: typeinfo for trace::Bool */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5trace4BoolE = NULL;

/* Exported Object: typeinfo name for trace::UInt */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5trace4UIntE = NULL;

/* Demangled: SnappyOutStream::reopen() */
extern "C" __attribute__((visibility("default"))) int _ZN15SnappyOutStream6reopenEv(void) {
    ALOGD("_ZN15SnappyOutStream6reopenEv() called");
    return 0;
}

/* Demangled: trace::LocalWriter::LocalWriter() */
extern "C" __attribute__((visibility("default"))) int _ZN5trace11LocalWriterC1Ev(void) {
    ALOGD("_ZN5trace11LocalWriterC1Ev() called");
    return 0;
}

/* Demangled: EzContextES20::~EzContextES20() */
extern "C" __attribute__((visibility("default"))) int _ZN13EzContextES20D1Ev(void) {
    ALOGD("_ZN13EzContextES20D1Ev() called");
    return 0;
}

/* Demangled: png_write_start_row */
extern "C" __attribute__((visibility("default"))) int png_write_start_row(void) {
    ALOGD("png_write_start_row() called");
    return 0;
}

/* Demangled: SnappyFile::supportsOffsets() const */
extern "C" __attribute__((visibility("default"))) int _ZNK10SnappyFile15supportsOffsetsEv(void) {
    ALOGD("_ZNK10SnappyFile15supportsOffsetsEv() called");
    return 0;
}

/* Demangled: trace::WString::~WString() */
extern "C" __attribute__((visibility("default"))) int _ZN5trace7WStringD1Ev(void) {
    ALOGD("_ZN5trace7WStringD1Ev() called");
    return 0;
}

/* Demangled: trace::LocalWriter::setTraceExtName(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace11LocalWriter15setTraceExtNameEPKc(void) {
    ALOGD("_ZN5trace11LocalWriter15setTraceExtNameEPKc() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: inflateBack */
extern "C" __attribute__((visibility("default"))) int inflateBack(void) {
    ALOGD("inflateBack() called");
    return 0;
}

/* Demangled: trace::Null::toBool() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace4Null6toBoolEv(void) {
    ALOGD("_ZNK5trace4Null6toBoolEv() called");
    return 0;
}

/* Demangled: trace::Repr::toPointer() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace4Repr9toPointerEv(void) {
    ALOGD("_ZNK5trace4Repr9toPointerEv() called");
    return 0;
}

/* Exported Object: typeinfo for trace::UInt */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5trace4UIntE = NULL;

/* Exported Object: vtable for IGLDumper */
extern "C" __attribute__((visibility("default"))) void* _ZTV9IGLDumper = NULL;

/* Demangled: png_set_tRNS_to_alpha */
extern "C" __attribute__((visibility("default"))) int png_set_tRNS_to_alpha(void) {
    ALOGD("png_set_tRNS_to_alpha() called");
    return 0;
}

/* Demangled: png_free_default */
extern "C" __attribute__((visibility("default"))) int png_free_default(void) {
    ALOGD("png_free_default() called");
    return 0;
}

/* Demangled: png_push_read_zTXt */
extern "C" __attribute__((visibility("default"))) int png_push_read_zTXt(void) {
    ALOGD("png_push_read_zTXt() called");
    return 0;
}

/* Exported Object: typeinfo for SnappyFile */
extern "C" __attribute__((visibility("default"))) void* _ZTI10SnappyFile = NULL;

/* Demangled: trace::Array::toBool() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace5Array6toBoolEv(void) {
    ALOGD("_ZNK5trace5Array6toBoolEv() called");
    return 0;
}

/* Demangled: png_get_valid */
extern "C" __attribute__((visibility("default"))) int png_get_valid(void) {
    ALOGD("png_get_valid() called");
    return 0;
}

/* Demangled: png_get_rowbytes */
extern "C" __attribute__((visibility("default"))) int png_get_rowbytes(void) {
    ALOGD("png_get_rowbytes() called");
    return 0;
}

/* Demangled: png_handle_iCCP */
extern "C" __attribute__((visibility("default"))) int png_handle_iCCP(void) {
    ALOGD("png_handle_iCCP() called");
    return 0;
}

/* Demangled: png_set_swap_alpha */
extern "C" __attribute__((visibility("default"))) int png_set_swap_alpha(void) {
    ALOGD("png_set_swap_alpha() called");
    return 0;
}

/* Demangled: png_set_cHRM_fixed */
extern "C" __attribute__((visibility("default"))) int png_set_cHRM_fixed(void) {
    ALOGD("png_set_cHRM_fixed() called");
    return 0;
}

/* Demangled: gzoffset64 */
extern "C" __attribute__((visibility("default"))) int gzoffset64(void) {
    ALOGD("gzoffset64() called");
    return 0;
}

/* Demangled: gzgetc */
extern "C" __attribute__((visibility("default"))) int gzgetc(void) {
    ALOGD("gzgetc() called");
    return 0;
}

/* Demangled: std::__1::deque<trace::BoundBlob, std::__1::allocator<trace::BoundBlob> >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN5trace9BoundBlobENS_9allocatorIS2_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIN5trace9BoundBlobENS_9allocatorIS2_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: trace::Writer::writeWString(wchar_t const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace6Writer12writeWStringEPKwj(void) {
    ALOGD("_ZN5trace6Writer12writeWStringEPKwj() called");
    return 0;
}

/* Demangled: png_create_write_struct */
extern "C" __attribute__((visibility("default"))) int png_create_write_struct(void) {
    ALOGD("png_create_write_struct() called");
    return 0;
}

/* Demangled: png_write_sBIT */
extern "C" __attribute__((visibility("default"))) int png_write_sBIT(void) {
    ALOGD("png_write_sBIT() called");
    return 0;
}

/* Demangled: SnappyFile::~SnappyFile() */
extern "C" __attribute__((visibility("default"))) int _ZN10SnappyFileD0Ev(void) {
    ALOGD("_ZN10SnappyFileD0Ev() called");
    return 0;
}

/* Demangled: png_get_pixel_aspect_ratio */
extern "C" __attribute__((visibility("default"))) int png_get_pixel_aspect_ratio(void) {
    ALOGD("png_get_pixel_aspect_ratio() called");
    return 0;
}

/* Demangled: png_get_sRGB */
extern "C" __attribute__((visibility("default"))) int png_get_sRGB(void) {
    ALOGD("png_get_sRGB() called");
    return 0;
}

/* Demangled: png_set_cHRM_XYZ_fixed */
extern "C" __attribute__((visibility("default"))) int png_set_cHRM_XYZ_fixed(void) {
    ALOGD("png_set_cHRM_XYZ_fixed() called");
    return 0;
}

/* Demangled: png_set_keep_unknown_chunks */
extern "C" __attribute__((visibility("default"))) int png_set_keep_unknown_chunks(void) {
    ALOGD("png_set_keep_unknown_chunks() called");
    return 0;
}

/* Demangled: trace::Writer::close() */
extern "C" __attribute__((visibility("default"))) int _ZN5trace6Writer5closeEv(void) {
    ALOGD("_ZN5trace6Writer5closeEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev() called");
    return 0;
}

/* Demangled: png_destroy_struct_2 */
extern "C" __attribute__((visibility("default"))) int png_destroy_struct_2(void) {
    ALOGD("png_destroy_struct_2() called");
    return 0;
}

/* Demangled: png_get_chunk_malloc_max */
extern "C" __attribute__((visibility("default"))) int png_get_chunk_malloc_max(void) {
    ALOGD("png_get_chunk_malloc_max() called");
    return 0;
}

/* Demangled: png_handle_IHDR */
extern "C" __attribute__((visibility("default"))) int png_handle_IHDR(void) {
    ALOGD("png_handle_IHDR() called");
    return 0;
}

/* Demangled: png_push_read_iTXt */
extern "C" __attribute__((visibility("default"))) int png_push_read_iTXt(void) {
    ALOGD("png_push_read_iTXt() called");
    return 0;
}

/* Demangled: snappy_uncompress */
extern "C" __attribute__((visibility("default"))) int snappy_uncompress(void) {
    ALOGD("snappy_uncompress() called");
    return 0;
}

/* Demangled: trace::Struct::~Struct() */
extern "C" __attribute__((visibility("default"))) int _ZN5trace6StructD1Ev(void) {
    ALOGD("_ZN5trace6StructD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<trace::BoundBlob*, std::__1::allocator<trace::BoundBlob*> >::push_front(trace::BoundBlob*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN5trace9BoundBlobENS_9allocatorIS3_EEE10push_frontEOS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN5trace9BoundBlobENS_9allocatorIS3_EEE10push_frontEOS3_() called");
    return 0;
}

/* Demangled: snappy::Sink::~Sink() */
extern "C" __attribute__((visibility("default"))) int _ZN6snappy4SinkD0Ev(void) {
    ALOGD("_ZN6snappy4SinkD0Ev() called");
    return 0;
}

/* Exported Object: vtable for EzContextES11 */
extern "C" __attribute__((visibility("default"))) void* _ZTV13EzContextES11 = NULL;

/* Demangled: png_create_write_struct_2 */
extern "C" __attribute__((visibility("default"))) int png_create_write_struct_2(void) {
    ALOGD("png_create_write_struct_2() called");
    return 0;
}

/* Demangled: png_write_finish_row */
extern "C" __attribute__((visibility("default"))) int png_write_finish_row(void) {
    ALOGD("png_write_finish_row() called");
    return 0;
}

/* Demangled: png_save_uint_16 */
extern "C" __attribute__((visibility("default"))) int png_save_uint_16(void) {
    ALOGD("png_save_uint_16() called");
    return 0;
}

/* Demangled: inflateGetHeader */
extern "C" __attribute__((visibility("default"))) int inflateGetHeader(void) {
    ALOGD("inflateGetHeader() called");
    return 0;
}

/* Demangled: png_get_filter_type */
extern "C" __attribute__((visibility("default"))) int png_get_filter_type(void) {
    ALOGD("png_get_filter_type() called");
    return 0;
}

/* Demangled: png_set_background */
extern "C" __attribute__((visibility("default"))) int png_set_background(void) {
    ALOGD("png_set_background() called");
    return 0;
}

/* Exported Object: vtable for trace::Double */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5trace6DoubleE = NULL;

/* Demangled: trace::Writer::writeWString(wchar_t const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace6Writer12writeWStringEPKw(void) {
    ALOGD("_ZN5trace6Writer12writeWStringEPKw() called");
    return 0;
}

/* Demangled: IGLDumper::IGLDumper() */
extern "C" __attribute__((visibility("default"))) int _ZN9IGLDumperC2Ev(void) {
    ALOGD("_ZN9IGLDumperC2Ev() called");
    return 0;
}

/* Demangled: png_handle_gAMA */
extern "C" __attribute__((visibility("default"))) int png_handle_gAMA(void) {
    ALOGD("png_handle_gAMA() called");
    return 0;
}

/* Demangled: png_write_image */
extern "C" __attribute__((visibility("default"))) int png_write_image(void) {
    ALOGD("png_write_image() called");
    return 0;
}

/* Demangled: image::isBlockCompressed(image::G3D_FORMAT_TYPE) */
extern "C" __attribute__((visibility("default"))) int _ZN5image17isBlockCompressedENS_15G3D_FORMAT_TYPEE(void) {
    ALOGD("_ZN5image17isBlockCompressedENS_15G3D_FORMAT_TYPEE() called");
    return 0;
}

/* Demangled: SnappyFile::~SnappyFile() */
extern "C" __attribute__((visibility("default"))) int _ZN10SnappyFileD2Ev(void) {
    ALOGD("_ZN10SnappyFileD2Ev() called");
    return 0;
}

/* Demangled: trace::Call::~Call() */
extern "C" __attribute__((visibility("default"))) int _ZN5trace4CallD1Ev(void) {
    ALOGD("_ZN5trace4CallD1Ev() called");
    return 0;
}

/* Exported Object: trace::malloc_sig */
extern "C" __attribute__((visibility("default"))) void* _ZN5trace10malloc_sigE = NULL;

/* Demangled: snappy_uncompressed_length */
extern "C" __attribute__((visibility("default"))) int snappy_uncompressed_length(void) {
    ALOGD("snappy_uncompressed_length() called");
    return 0;
}

/* Demangled: EzContextES20::CreateFBO() */
extern "C" __attribute__((visibility("default"))) int _ZN13EzContextES209CreateFBOEv(void) {
    ALOGD("_ZN13EzContextES209CreateFBOEv() called");
    return 0;
}

/* Demangled: png_get_image_width */
extern "C" __attribute__((visibility("default"))) int png_get_image_width(void) {
    ALOGD("png_get_image_width() called");
    return 0;
}

/* Demangled: png_handle_PLTE */
extern "C" __attribute__((visibility("default"))) int png_handle_PLTE(void) {
    ALOGD("png_handle_PLTE() called");
    return 0;
}

/* Demangled: png_write_pCAL */
extern "C" __attribute__((visibility("default"))) int png_write_pCAL(void) {
    ALOGD("png_write_pCAL() called");
    return 0;
}

/* Demangled: snappy_max_compressed_length */
extern "C" __attribute__((visibility("default"))) int snappy_max_compressed_length(void) {
    ALOGD("snappy_max_compressed_length() called");
    return 0;
}

/* Exported Object: typeinfo for EzContextES11 */
extern "C" __attribute__((visibility("default"))) void* _ZTI13EzContextES11 = NULL;

/* Demangled: png_do_read_intrapixel */
extern "C" __attribute__((visibility("default"))) int png_do_read_intrapixel(void) {
    ALOGD("png_do_read_intrapixel() called");
    return 0;
}

/* Demangled: png_get_pHYs_dpi */
extern "C" __attribute__((visibility("default"))) int png_get_pHYs_dpi(void) {
    ALOGD("png_get_pHYs_dpi() called");
    return 0;
}

/* Exported Object: typeinfo for trace::Double */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5trace6DoubleE = NULL;

/* Exported Object: typeinfo for SnappyOutStream */
extern "C" __attribute__((visibility("default"))) void* _ZTI15SnappyOutStream = NULL;

/* Exported Object: typeinfo name for snappy::Source */
extern "C" __attribute__((visibility("default"))) void* _ZTSN6snappy6SourceE = NULL;

/* Demangled: png_XYZ_from_xy */
extern "C" __attribute__((visibility("default"))) int png_XYZ_from_xy(void) {
    ALOGD("png_XYZ_from_xy() called");
    return 0;
}

/* Demangled: png_get_header_ver */
extern "C" __attribute__((visibility("default"))) int png_get_header_ver(void) {
    ALOGD("png_get_header_ver() called");
    return 0;
}

/* Exported Object: vtable for trace::Value */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5trace5ValueE = NULL;

/* Demangled: snappy::Uncompress(char const*, unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN6snappy10UncompressEPKcjPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN6snappy10UncompressEPKcjPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: snappy::internal::WorkingMemory::GetHashTable(unsigned int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN6snappy8internal13WorkingMemory12GetHashTableEjPi(void) {
    ALOGD("_ZN6snappy8internal13WorkingMemory12GetHashTableEjPi() called");
    return 0;
}

/* Demangled: png_get_sBIT */
extern "C" __attribute__((visibility("default"))) int png_get_sBIT(void) {
    ALOGD("png_get_sBIT() called");
    return 0;
}

/* Demangled: png_get_sCAL_s */
extern "C" __attribute__((visibility("default"))) int png_get_sCAL_s(void) {
    ALOGD("png_get_sCAL_s() called");
    return 0;
}

/* Demangled: snappy::MaxCompressedLength(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6snappy19MaxCompressedLengthEj(void) {
    ALOGD("_ZN6snappy19MaxCompressedLengthEj() called");
    return 0;
}

/* Demangled: SnappyOutStream::writeCompressedLength(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN15SnappyOutStream21writeCompressedLengthEj(void) {
    ALOGD("_ZN15SnappyOutStream21writeCompressedLengthEj() called");
    return 0;
}

/* Demangled: trace::Writer::~Writer() */
extern "C" __attribute__((visibility("default"))) int _ZN5trace6WriterD1Ev(void) {
    ALOGD("_ZN5trace6WriterD1Ev() called");
    return 0;
}

/* Demangled: snappy::RawUncompressToIOVec(snappy::Source*, snappy::iovec const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6snappy20RawUncompressToIOVecEPNS_6SourceEPKNS_5iovecEj(void) {
    ALOGD("_ZN6snappy20RawUncompressToIOVecEPNS_6SourceEPKNS_5iovecEj() called");
    return 0;
}

/* Demangled: snappy::Sink::~Sink() */
extern "C" __attribute__((visibility("default"))) int _ZN6snappy4SinkD2Ev(void) {
    ALOGD("_ZN6snappy4SinkD2Ev() called");
    return 0;
}

/* Demangled: png_write_IDAT */
extern "C" __attribute__((visibility("default"))) int png_write_IDAT(void) {
    ALOGD("png_write_IDAT() called");
    return 0;
}

/* Demangled: _tr_flush_bits */
extern "C" __attribute__((visibility("default"))) int _tr_flush_bits(void) {
    ALOGD("_tr_flush_bits() called");
    return 0;
}

/* Demangled: gztell64 */
extern "C" __attribute__((visibility("default"))) int gztell64(void) {
    ALOGD("gztell64() called");
    return 0;
}

/* Demangled: gzgets */
extern "C" __attribute__((visibility("default"))) int gzgets(void) {
    ALOGD("gzgets() called");
    return 0;
}

/* Demangled: EGLTraceLinker_dlsym */
extern "C" __attribute__((visibility("default"))) int EGLTraceLinker_dlsym(void) {
    ALOGD("EGLTraceLinker_dlsym() called");
    return 0;
}

/* Demangled: png_process_IDAT_data */
extern "C" __attribute__((visibility("default"))) int png_process_IDAT_data(void) {
    ALOGD("png_process_IDAT_data() called");
    return 0;
}

/* Demangled: trace::Null::toPointer(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace4Null9toPointerEb(void) {
    ALOGD("_ZN5trace4Null9toPointerEb() called");
    return 0;
}

/* Demangled: trace::Visitor::visit(trace::Null*) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace7Visitor5visitEPNS_4NullE(void) {
    ALOGD("_ZN5trace7Visitor5visitEPNS_4NullE() called");
    return 0;
}

/* Demangled: trace::Null::toUIntPtr() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace4Null9toUIntPtrEv(void) {
    ALOGD("_ZNK5trace4Null9toUIntPtrEv() called");
    return 0;
}

/* Exported Object: vtable for trace::Repr */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5trace4ReprE = NULL;

/* Demangled: EzContextES11::SwapBuffers() */
extern "C" __attribute__((visibility("default"))) int _ZN13EzContextES1111SwapBuffersEv(void) {
    ALOGD("_ZN13EzContextES1111SwapBuffersEv() called");
    return 0;
}

/* Demangled: EzContextES20::DeleteFBO() */
extern "C" __attribute__((visibility("default"))) int _ZN13EzContextES209DeleteFBOEv(void) {
    ALOGD("_ZN13EzContextES209DeleteFBOEv() called");
    return 0;
}

/* Demangled: png_user_version_check */
extern "C" __attribute__((visibility("default"))) int png_user_version_check(void) {
    ALOGD("png_user_version_check() called");
    return 0;
}

/* Demangled: png_get_io_chunk_name */
extern "C" __attribute__((visibility("default"))) int png_get_io_chunk_name(void) {
    ALOGD("png_get_io_chunk_name() called");
    return 0;
}

/* Demangled: png_read_png */
extern "C" __attribute__((visibility("default"))) int png_read_png(void) {
    ALOGD("png_read_png() called");
    return 0;
}

/* Demangled: png_do_write_interlace */
extern "C" __attribute__((visibility("default"))) int png_do_write_interlace(void) {
    ALOGD("png_do_write_interlace() called");
    return 0;
}

/* Demangled: trace::Float::toBool() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace5Float6toBoolEv(void) {
    ALOGD("_ZNK5trace5Float6toBoolEv() called");
    return 0;
}

/* Demangled: compressBound */
extern "C" __attribute__((visibility("default"))) int compressBound(void) {
    ALOGD("compressBound() called");
    return 0;
}

/* Demangled: inflatePrime */
extern "C" __attribute__((visibility("default"))) int inflatePrime(void) {
    ALOGD("inflatePrime() called");
    return 0;
}

/* Demangled: trace::Double::visit(trace::Visitor&) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace6Double5visitERNS_7VisitorE(void) {
    ALOGD("_ZN5trace6Double5visitERNS_7VisitorE() called");
    return 0;
}

/* Demangled: trace::String::~String() */
extern "C" __attribute__((visibility("default"))) int _ZN5trace6StringD1Ev(void) {
    ALOGD("_ZN5trace6StringD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo for trace::WString */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5trace7WStringE = NULL;

/* Demangled: png_do_read_swap_alpha */
extern "C" __attribute__((visibility("default"))) int png_do_read_swap_alpha(void) {
    ALOGD("png_do_read_swap_alpha() called");
    return 0;
}

/* Demangled: png_write_pHYs */
extern "C" __attribute__((visibility("default"))) int png_write_pHYs(void) {
    ALOGD("png_write_pHYs() called");
    return 0;
}

/* Demangled: trace::WString::visit(trace::Visitor&) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace7WString5visitERNS_7VisitorE(void) {
    ALOGD("_ZN5trace7WString5visitERNS_7VisitorE() called");
    return 0;
}

/* Demangled: ARCUnregisterGLESv2Hook */
extern "C" __attribute__((visibility("default"))) int ARCUnregisterGLESv2Hook(void) {
    ALOGD("ARCUnregisterGLESv2Hook() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: png_set_scale_16 */
extern "C" __attribute__((visibility("default"))) int png_set_scale_16(void) {
    ALOGD("png_set_scale_16() called");
    return 0;
}

/* Demangled: png_check_fp_string */
extern "C" __attribute__((visibility("default"))) int png_check_fp_string(void) {
    ALOGD("png_check_fp_string() called");
    return 0;
}

/* Demangled: trace::Writer::endEnter() */
extern "C" __attribute__((visibility("default"))) int _ZN5trace6Writer8endEnterEv(void) {
    ALOGD("_ZN5trace6Writer8endEnterEv() called");
    return 0;
}

/* Demangled: snappy::Source::~Source() */
extern "C" __attribute__((visibility("default"))) int _ZN6snappy6SourceD0Ev(void) {
    ALOGD("_ZN6snappy6SourceD0Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev() called");
    return 0;
}

/* Demangled: png_calloc */
extern "C" __attribute__((visibility("default"))) int png_calloc(void) {
    ALOGD("png_calloc() called");
    return 0;
}

/* Demangled: png_get_x_pixels_per_inch */
extern "C" __attribute__((visibility("default"))) int png_get_x_pixels_per_inch(void) {
    ALOGD("png_get_x_pixels_per_inch() called");
    return 0;
}

/* Demangled: png_write_tRNS */
extern "C" __attribute__((visibility("default"))) int png_write_tRNS(void) {
    ALOGD("png_write_tRNS() called");
    return 0;
}

/* Exported Object: typeinfo name for trace::File */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5trace4FileE = NULL;

/* Demangled: trace::UInt::toSInt() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace4UInt6toSIntEv(void) {
    ALOGD("_ZNK5trace4UInt6toSIntEv() called");
    return 0;
}

/* Demangled: trace::LocalWriter::~LocalWriter() */
extern "C" __attribute__((visibility("default"))) int _ZN5trace11LocalWriterD1Ev(void) {
    ALOGD("_ZN5trace11LocalWriterD1Ev() called");
    return 0;
}

/* Demangled: png_get_pCAL */
extern "C" __attribute__((visibility("default"))) int png_get_pCAL(void) {
    ALOGD("png_get_pCAL() called");
    return 0;
}

/* Demangled: png_check_chunk_name */
extern "C" __attribute__((visibility("default"))) int png_check_chunk_name(void) {
    ALOGD("png_check_chunk_name() called");
    return 0;
}

/* Demangled: png_do_gamma */
extern "C" __attribute__((visibility("default"))) int png_do_gamma(void) {
    ALOGD("png_do_gamma() called");
    return 0;
}

/* Demangled: png_permit_mng_features */
extern "C" __attribute__((visibility("default"))) int png_permit_mng_features(void) {
    ALOGD("png_permit_mng_features() called");
    return 0;
}

/* Exported Object: typeinfo for trace::File */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5trace4FileE = NULL;

/* Demangled: trace::Call::argByName(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace4Call9argByNameEPKc(void) {
    ALOGD("_ZN5trace4Call9argByNameEPKc() called");
    return 0;
}

/* Demangled: EzContextES11::BlitFrameBuffer(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN13EzContextES1115BlitFrameBufferEj(void) {
    ALOGD("_ZN13EzContextES1115BlitFrameBufferEj() called");
    return 0;
}

/* Demangled: isInitDriver */
extern "C" __attribute__((visibility("default"))) int isInitDriver(void) {
    ALOGD("isInitDriver() called");
    return 0;
}

/* Demangled: GLDumperES11::~GLDumperES11() */
extern "C" __attribute__((visibility("default"))) int _ZN12GLDumperES11D1Ev(void) {
    ALOGD("_ZN12GLDumperES11D1Ev() called");
    return 0;
}

/* Demangled: png_destroy_read_struct */
extern "C" __attribute__((visibility("default"))) int png_destroy_read_struct(void) {
    ALOGD("png_destroy_read_struct() called");
    return 0;
}

/* Demangled: png_longjmp */
extern "C" __attribute__((visibility("default"))) int png_longjmp(void) {
    ALOGD("png_longjmp() called");
    return 0;
}

/* Demangled: png_set_flush */
extern "C" __attribute__((visibility("default"))) int png_set_flush(void) {
    ALOGD("png_set_flush() called");
    return 0;
}

/* Demangled: png_write_info_before_PLTE */
extern "C" __attribute__((visibility("default"))) int png_write_info_before_PLTE(void) {
    ALOGD("png_write_info_before_PLTE() called");
    return 0;
}

/* Exported Object: trace::free_sig */
extern "C" __attribute__((visibility("default"))) void* _ZN5trace8free_sigE = NULL;

/* Demangled: IGLDumper::~IGLDumper() */
extern "C" __attribute__((visibility("default"))) int _ZN9IGLDumperD0Ev(void) {
    ALOGD("_ZN9IGLDumperD0Ev() called");
    return 0;
}

/* Demangled: png_muldiv */
extern "C" __attribute__((visibility("default"))) int png_muldiv(void) {
    ALOGD("png_muldiv() called");
    return 0;
}

/* Demangled: png_do_packswap */
extern "C" __attribute__((visibility("default"))) int png_do_packswap(void) {
    ALOGD("png_do_packswap() called");
    return 0;
}

/* Demangled: png_do_read_filler */
extern "C" __attribute__((visibility("default"))) int png_do_read_filler(void) {
    ALOGD("png_do_read_filler() called");
    return 0;
}

/* Exported Object: ARC::SDTrace::g_sizeRatio */
extern "C" __attribute__((visibility("default"))) void* _ZN3ARC7SDTrace11g_sizeRatioE = NULL;

/* Exported Object: typeinfo name for IGLDumper */
extern "C" __attribute__((visibility("default"))) void* _ZTS9IGLDumper = NULL;

/* Demangled: png_fixed_error */
extern "C" __attribute__((visibility("default"))) int png_fixed_error(void) {
    ALOGD("png_fixed_error() called");
    return 0;
}

/* Demangled: png_warning */
extern "C" __attribute__((visibility("default"))) int png_warning(void) {
    ALOGD("png_warning() called");
    return 0;
}

/* Demangled: png_get_pixels_per_meter */
extern "C" __attribute__((visibility("default"))) int png_get_pixels_per_meter(void) {
    ALOGD("png_get_pixels_per_meter() called");
    return 0;
}

/* Demangled: png_get_y_offset_inches */
extern "C" __attribute__((visibility("default"))) int png_get_y_offset_inches(void) {
    ALOGD("png_get_y_offset_inches() called");
    return 0;
}

/* Demangled: png_set_tIME */
extern "C" __attribute__((visibility("default"))) int png_set_tIME(void) {
    ALOGD("png_set_tIME() called");
    return 0;
}

/* Demangled: png_zalloc */
extern "C" __attribute__((visibility("default"))) int png_zalloc(void) {
    ALOGD("png_zalloc() called");
    return 0;
}

/* Demangled: png_get_user_width_max */
extern "C" __attribute__((visibility("default"))) int png_get_user_width_max(void) {
    ALOGD("png_get_user_width_max() called");
    return 0;
}

/* Exported Object: typeinfo name for trace::Null */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5trace4NullE = NULL;

/* Demangled: trace::Writer::beginArg(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace6Writer8beginArgEj(void) {
    ALOGD("_ZN5trace6Writer8beginArgEj() called");
    return 0;
}

/* Demangled: crc32 */
extern "C" __attribute__((visibility("default"))) int crc32(void) {
    ALOGD("crc32() called");
    return 0;
}

/* Demangled: png_calculate_crc */
extern "C" __attribute__((visibility("default"))) int png_calculate_crc(void) {
    ALOGD("png_calculate_crc() called");
    return 0;
}

/* Demangled: png_get_color_type */
extern "C" __attribute__((visibility("default"))) int png_get_color_type(void) {
    ALOGD("png_get_color_type() called");
    return 0;
}

/* Demangled: zError */
extern "C" __attribute__((visibility("default"))) int zError(void) {
    ALOGD("zError() called");
    return 0;
}

/* Demangled: trace::Writer::writeStackFrame(trace::RawStackFrame const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace6Writer15writeStackFrameEPKNS_13RawStackFrameE(void) {
    ALOGD("_ZN5trace6Writer15writeStackFrameEPKNS_13RawStackFrameE() called");
    return 0;
}

/* Exported Object: vtable for GLDumperES11 */
extern "C" __attribute__((visibility("default"))) void* _ZTV12GLDumperES11 = NULL;

/* Demangled: png_set_text_compression_strategy */
extern "C" __attribute__((visibility("default"))) int png_set_text_compression_strategy(void) {
    ALOGD("png_set_text_compression_strategy() called");
    return 0;
}

/* Demangled: trace::Visitor::visit(trace::WString*) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace7Visitor5visitEPNS_7WStringE(void) {
    ALOGD("_ZN5trace7Visitor5visitEPNS_7WStringE() called");
    return 0;
}

/* Exported Object: typeinfo for trace::Null */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5trace4NullE = NULL;

/* Demangled: snappy::UncheckedByteArraySink::Append(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6snappy22UncheckedByteArraySink6AppendEPKcj(void) {
    ALOGD("_ZN6snappy22UncheckedByteArraySink6AppendEPKcj() called");
    return 0;
}

/* Demangled: snappy::Source::~Source() */
extern "C" __attribute__((visibility("default"))) int _ZN6snappy6SourceD2Ev(void) {
    ALOGD("_ZN6snappy6SourceD2Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev() called");
    return 0;
}

/* Demangled: trace::Blob::~Blob() */
extern "C" __attribute__((visibility("default"))) int _ZN5trace4BlobD1Ev(void) {
    ALOGD("_ZN5trace4BlobD1Ev() called");
    return 0;
}

/* Demangled: EzContextES20::GetEGLSurfaceSize(int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN13EzContextES2017GetEGLSurfaceSizeEPiS0_(void) {
    ALOGD("_ZN13EzContextES2017GetEGLSurfaceSizeEPiS0_() called");
    return 0;
}

/* Demangled: sdTraceRecord */
extern "C" __attribute__((visibility("default"))) int sdTraceRecord(void) {
    ALOGD("sdTraceRecord() called");
    return 0;
}

/* Demangled: adler32 */
extern "C" __attribute__((visibility("default"))) int adler32(void) {
    ALOGD("adler32() called");
    return 0;
}

/* Demangled: png_get_pHYs */
extern "C" __attribute__((visibility("default"))) int png_get_pHYs(void) {
    ALOGD("png_get_pHYs() called");
    return 0;
}

/* Demangled: trace::Struct::visit(trace::Visitor&) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace6Struct5visitERNS_7VisitorE(void) {
    ALOGD("_ZN5trace6Struct5visitERNS_7VisitorE() called");
    return 0;
}

/* Demangled: trace::Visitor::visit(trace::Array*) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace7Visitor5visitEPNS_5ArrayE(void) {
    ALOGD("_ZN5trace7Visitor5visitEPNS_5ArrayE() called");
    return 0;
}

/* Demangled: trace::UInt::toUInt() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace4UInt6toUIntEv(void) {
    ALOGD("_ZNK5trace4UInt6toUIntEv() called");
    return 0;
}

/* Exported Object: typeinfo name for trace::Visitor */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5trace7VisitorE = NULL;

/* Demangled: png_convert_to_rfc1123 */
extern "C" __attribute__((visibility("default"))) int png_convert_to_rfc1123(void) {
    ALOGD("png_convert_to_rfc1123() called");
    return 0;
}

/* Demangled: png_do_strip_channel */
extern "C" __attribute__((visibility("default"))) int png_do_strip_channel(void) {
    ALOGD("png_do_strip_channel() called");
    return 0;
}

/* Demangled: png_set_invalid */
extern "C" __attribute__((visibility("default"))) int png_set_invalid(void) {
    ALOGD("png_set_invalid() called");
    return 0;
}

/* Demangled: inflateSetDictionary */
extern "C" __attribute__((visibility("default"))) int inflateSetDictionary(void) {
    ALOGD("inflateSetDictionary() called");
    return 0;
}

/* Demangled: IGLDumper::~IGLDumper() */
extern "C" __attribute__((visibility("default"))) int _ZN9IGLDumperD2Ev(void) {
    ALOGD("_ZN9IGLDumperD2Ev() called");
    return 0;
}

/* Demangled: png_data_freer */
extern "C" __attribute__((visibility("default"))) int png_data_freer(void) {
    ALOGD("png_data_freer() called");
    return 0;
}

/* Demangled: png_get_pixel_aspect_ratio_fixed */
extern "C" __attribute__((visibility("default"))) int png_get_pixel_aspect_ratio_fixed(void) {
    ALOGD("png_get_pixel_aspect_ratio_fixed() called");
    return 0;
}

/* Demangled: png_handle_sPLT */
extern "C" __attribute__((visibility("default"))) int png_handle_sPLT(void) {
    ALOGD("png_handle_sPLT() called");
    return 0;
}

/* Exported Object: vtable for trace::WString */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5trace7WStringE = NULL;

/* Demangled: png_reset_zstream */
extern "C" __attribute__((visibility("default"))) int png_reset_zstream(void) {
    ALOGD("png_reset_zstream() called");
    return 0;
}

/* Demangled: png_get_tRNS */
extern "C" __attribute__((visibility("default"))) int png_get_tRNS(void) {
    ALOGD("png_get_tRNS() called");
    return 0;
}

/* Demangled: trace::File::createSnappy() */
extern "C" __attribute__((visibility("default"))) int _ZN5trace4File12createSnappyEv(void) {
    ALOGD("_ZN5trace4File12createSnappyEv() called");
    return 0;
}

/* Exported Object: vtable for EzContextES20 */
extern "C" __attribute__((visibility("default"))) void* _ZTV13EzContextES20 = NULL;

/* Demangled: png_combine_row */
extern "C" __attribute__((visibility("default"))) int png_combine_row(void) {
    ALOGD("png_combine_row() called");
    return 0;
}

/* Demangled: snappy::SnappyDecompressor::RefillTag() */
extern "C" __attribute__((visibility("default"))) int _ZN6snappy18SnappyDecompressor9RefillTagEv(void) {
    ALOGD("_ZN6snappy18SnappyDecompressor9RefillTagEv() called");
    return 0;
}

/* Exported Object: typeinfo name for snappy::ByteArraySource */
extern "C" __attribute__((visibility("default"))) void* _ZTSN6snappy15ByteArraySourceE = NULL;

/* Demangled: FrameRecord::Init(ARC::SDTrace::ESType) */
extern "C" __attribute__((visibility("default"))) int _ZN11FrameRecord4InitEN3ARC7SDTrace6ESTypeE(void) {
    ALOGD("_ZN11FrameRecord4InitEN3ARC7SDTrace6ESTypeE() called");
    return 0;
}

/* Demangled: png_fixed */
extern "C" __attribute__((visibility("default"))) int png_fixed(void) {
    ALOGD("png_fixed() called");
    return 0;
}

/* Demangled: png_free */
extern "C" __attribute__((visibility("default"))) int png_free(void) {
    ALOGD("png_free() called");
    return 0;
}

/* Demangled: gzwrite */
extern "C" __attribute__((visibility("default"))) int gzwrite(void) {
    ALOGD("gzwrite() called");
    return 0;
}

/* Demangled: SnappyOutStream::~SnappyOutStream() */
extern "C" __attribute__((visibility("default"))) int _ZN15SnappyOutStreamD0Ev(void) {
    ALOGD("_ZN15SnappyOutStreamD0Ev() called");
    return 0;
}

/* Demangled: FrameRecord::FrameRecord() */
extern "C" __attribute__((visibility("default"))) int _ZN11FrameRecordC2Ev(void) {
    ALOGD("_ZN11FrameRecordC2Ev() called");
    return 0;
}

/* Demangled: trace::Value::toPointer() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace5Value9toPointerEv(void) {
    ALOGD("_ZNK5trace5Value9toPointerEv() called");
    return 0;
}

/* Demangled: snappy::Compress(snappy::Source*, snappy::Sink*) */
extern "C" __attribute__((visibility("default"))) int _ZN6snappy8CompressEPNS_6SourceEPNS_4SinkE(void) {
    ALOGD("_ZN6snappy8CompressEPNS_6SourceEPNS_4SinkE() called");
    return 0;
}

/* Demangled: png_handle_unknown */
extern "C" __attribute__((visibility("default"))) int png_handle_unknown(void) {
    ALOGD("png_handle_unknown() called");
    return 0;
}

/* Demangled: FrameRecord::GetDumpPath(char*) */
extern "C" __attribute__((visibility("default"))) int _ZN11FrameRecord11GetDumpPathEPc(void) {
    ALOGD("_ZN11FrameRecord11GetDumpPathEPc() called");
    return 0;
}

/* Demangled: trace::Bool::toBool() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace4Bool6toBoolEv(void) {
    ALOGD("_ZNK5trace4Bool6toBoolEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<trace::BoundBlob*, std::__1::allocator<trace::BoundBlob*>&>::push_front(trace::BoundBlob* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN5trace9BoundBlobERNS_9allocatorIS3_EEE10push_frontERKS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN5trace9BoundBlobERNS_9allocatorIS3_EEE10push_frontERKS3_() called");
    return 0;
}

/* Demangled: trace::fakeMemcpy(void const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace10fakeMemcpyEPKvj(void) {
    ALOGD("_ZN5trace10fakeMemcpyEPKvj() called");
    return 0;
}

/* Demangled: EzContextES11::EzContextES11() */
extern "C" __attribute__((visibility("default"))) int _ZN13EzContextES11C1Ev(void) {
    ALOGD("_ZN13EzContextES11C1Ev() called");
    return 0;
}

/* Exported Object: typeinfo for EzContextES20 */
extern "C" __attribute__((visibility("default"))) void* _ZTI13EzContextES20 = NULL;

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

/* Exported Object: _dist_code */
extern "C" __attribute__((visibility("default"))) void* _dist_code = NULL;

/* Exported Object: typeinfo name for trace::Bitmask */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5trace7BitmaskE = NULL;

/* Exported Object: vtable for trace::Enum */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5trace4EnumE = NULL;

/* Demangled: snappy::RawCompress(char const*, unsigned int, char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN6snappy11RawCompressEPKcjPcPj(void) {
    ALOGD("_ZN6snappy11RawCompressEPKcjPcPj() called");
    return 0;
}

/* Demangled: png_ascii_from_fixed */
extern "C" __attribute__((visibility("default"))) int png_ascii_from_fixed(void) {
    ALOGD("png_ascii_from_fixed() called");
    return 0;
}

/* Demangled: gzerror */
extern "C" __attribute__((visibility("default"))) int gzerror(void) {
    ALOGD("gzerror() called");
    return 0;
}

/* Demangled: trace::Null::visit(trace::Visitor&) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace4Null5visitERNS_7VisitorE(void) {
    ALOGD("_ZN5trace4Null5visitERNS_7VisitorE() called");
    return 0;
}

/* Demangled: trace::Array::~Array() */
extern "C" __attribute__((visibility("default"))) int _ZN5trace5ArrayD0Ev(void) {
    ALOGD("_ZN5trace5ArrayD0Ev() called");
    return 0;
}

/* Demangled: png_get_uint_31 */
extern "C" __attribute__((visibility("default"))) int png_get_uint_31(void) {
    ALOGD("png_get_uint_31() called");
    return 0;
}

/* Demangled: png_set_sCAL_fixed */
extern "C" __attribute__((visibility("default"))) int png_set_sCAL_fixed(void) {
    ALOGD("png_set_sCAL_fixed() called");
    return 0;
}

/* Demangled: png_gamma_16bit_correct */
extern "C" __attribute__((visibility("default"))) int png_gamma_16bit_correct(void) {
    ALOGD("png_gamma_16bit_correct() called");
    return 0;
}

/* Demangled: png_get_uint_32 */
extern "C" __attribute__((visibility("default"))) int png_get_uint_32(void) {
    ALOGD("png_get_uint_32() called");
    return 0;
}

/* Demangled: trace::Writer::writeBitmask(trace::BitmaskSig const*, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace6Writer12writeBitmaskEPKNS_10BitmaskSigEy(void) {
    ALOGD("_ZN5trace6Writer12writeBitmaskEPKNS_10BitmaskSigEy() called");
    return 0;
}

/* Demangled: png_xy_from_XYZ */
extern "C" __attribute__((visibility("default"))) int png_xy_from_XYZ(void) {
    ALOGD("png_xy_from_XYZ() called");
    return 0;
}

/* Demangled: png_handle_hIST */
extern "C" __attribute__((visibility("default"))) int png_handle_hIST(void) {
    ALOGD("png_handle_hIST() called");
    return 0;
}

/* Demangled: png_read_image */
extern "C" __attribute__((visibility("default"))) int png_read_image(void) {
    ALOGD("png_read_image() called");
    return 0;
}

/* Demangled: gzprintf */
extern "C" __attribute__((visibility("default"))) int gzprintf(void) {
    ALOGD("gzprintf() called");
    return 0;
}

/* Demangled: trace::Repr::visit(trace::Visitor&) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace4Repr5visitERNS_7VisitorE(void) {
    ALOGD("_ZN5trace4Repr5visitERNS_7VisitorE() called");
    return 0;
}

/* Demangled: trace::Visitor::visit(trace::Blob*) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace7Visitor5visitEPNS_4BlobE(void) {
    ALOGD("_ZN5trace7Visitor5visitEPNS_4BlobE() called");
    return 0;
}

/* Demangled: SnappyOutStream::~SnappyOutStream() */
extern "C" __attribute__((visibility("default"))) int _ZN15SnappyOutStreamD2Ev(void) {
    ALOGD("_ZN15SnappyOutStreamD2Ev() called");
    return 0;
}

/* Demangled: png_set_user_transform_info */
extern "C" __attribute__((visibility("default"))) int png_set_user_transform_info(void) {
    ALOGD("png_set_user_transform_info() called");
    return 0;
}

/* Demangled: inflateCopy */
extern "C" __attribute__((visibility("default"))) int inflateCopy(void) {
    ALOGD("inflateCopy() called");
    return 0;
}

/* Demangled: png_check_cHRM_fixed */
extern "C" __attribute__((visibility("default"))) int png_check_cHRM_fixed(void) {
    ALOGD("png_check_cHRM_fixed() called");
    return 0;
}

/* Demangled: png_set_gray_to_rgb */
extern "C" __attribute__((visibility("default"))) int png_set_gray_to_rgb(void) {
    ALOGD("png_set_gray_to_rgb() called");
    return 0;
}

/* Demangled: png_write_chunk_end */
extern "C" __attribute__((visibility("default"))) int png_write_chunk_end(void) {
    ALOGD("png_write_chunk_end() called");
    return 0;
}

/* Demangled: gzseek64 */
extern "C" __attribute__((visibility("default"))) int gzseek64(void) {
    ALOGD("gzseek64() called");
    return 0;
}

/* Demangled: snappy::IsValidCompressedBuffer(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6snappy23IsValidCompressedBufferEPKcj(void) {
    ALOGD("_ZN6snappy23IsValidCompressedBufferEPKcj() called");
    return 0;
}

/* Demangled: png_do_expand */
extern "C" __attribute__((visibility("default"))) int png_do_expand(void) {
    ALOGD("png_do_expand() called");
    return 0;
}

/* Demangled: png_set_oFFs */
extern "C" __attribute__((visibility("default"))) int png_set_oFFs(void) {
    ALOGD("png_set_oFFs() called");
    return 0;
}

/* Demangled: png_get_user_transform_ptr */
extern "C" __attribute__((visibility("default"))) int png_get_user_transform_ptr(void) {
    ALOGD("png_get_user_transform_ptr() called");
    return 0;
}

/* Exported Object: typeinfo for std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt3__113basic_fstreamIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: trace::BoundBlob::totalSize */
extern "C" __attribute__((visibility("default"))) void* _ZN5trace9BoundBlob9totalSizeE = NULL;

/* Demangled: ARCUnregisterEGLHook */
extern "C" __attribute__((visibility("default"))) int ARCUnregisterEGLHook(void) {
    ALOGD("ARCUnregisterEGLHook() called");
    return 0;
}

/* Demangled: EzContextES11::UpdateDrawableSize() */
extern "C" __attribute__((visibility("default"))) int _ZN13EzContextES1118UpdateDrawableSizeEv(void) {
    ALOGD("_ZN13EzContextES1118UpdateDrawableSizeEv() called");
    return 0;
}

/* Demangled: trace::Null::toSInt() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace4Null6toSIntEv(void) {
    ALOGD("_ZNK5trace4Null6toSIntEv() called");
    return 0;
}

/* Demangled: png_sig_cmp */
extern "C" __attribute__((visibility("default"))) int png_sig_cmp(void) {
    ALOGD("png_sig_cmp() called");
    return 0;
}

/* Demangled: png_do_quantize */
extern "C" __attribute__((visibility("default"))) int png_do_quantize(void) {
    ALOGD("png_do_quantize() called");
    return 0;
}

/* Exported Object: vtable for trace::Struct */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5trace6StructE = NULL;

/* Demangled: trace::Array::~Array() */
extern "C" __attribute__((visibility("default"))) int _ZN5trace5ArrayD2Ev(void) {
    ALOGD("_ZN5trace5ArrayD2Ev() called");
    return 0;
}

/* Demangled: png_64bit_product */
extern "C" __attribute__((visibility("default"))) int png_64bit_product(void) {
    ALOGD("png_64bit_product() called");
    return 0;
}

/* Demangled: png_set_sCAL_s */
extern "C" __attribute__((visibility("default"))) int png_set_sCAL_s(void) {
    ALOGD("png_set_sCAL_s() called");
    return 0;
}

/* Demangled: png_write_tIME */
extern "C" __attribute__((visibility("default"))) int png_write_tIME(void) {
    ALOGD("png_write_tIME() called");
    return 0;
}

/* Demangled: gzclearerr */
extern "C" __attribute__((visibility("default"))) int gzclearerr(void) {
    ALOGD("gzclearerr() called");
    return 0;
}

/* Demangled: inflateBackEnd */
extern "C" __attribute__((visibility("default"))) int inflateBackEnd(void) {
    ALOGD("inflateBackEnd() called");
    return 0;
}

/* Demangled: trace::Repr::toDouble() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace4Repr8toDoubleEv(void) {
    ALOGD("_ZNK5trace4Repr8toDoubleEv() called");
    return 0;
}

/* Demangled: trace::LocalWriter::endLeave() */
extern "C" __attribute__((visibility("default"))) int _ZN5trace11LocalWriter8endLeaveEv(void) {
    ALOGD("_ZN5trace11LocalWriter8endLeaveEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::setbuf(char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci() called");
    return 0;
}

/* Demangled: png_decompress_chunk */
extern "C" __attribute__((visibility("default"))) int png_decompress_chunk(void) {
    ALOGD("png_decompress_chunk() called");
    return 0;
}

/* Demangled: png_set_bKGD */
extern "C" __attribute__((visibility("default"))) int png_set_bKGD(void) {
    ALOGD("png_set_bKGD() called");
    return 0;
}

/* Demangled: inflateResetKeep */
extern "C" __attribute__((visibility("default"))) int inflateResetKeep(void) {
    ALOGD("inflateResetKeep() called");
    return 0;
}

/* Demangled: EzContextES11::SetFixSize(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN13EzContextES1110SetFixSizeEii(void) {
    ALOGD("_ZN13EzContextES1110SetFixSizeEii() called");
    return 0;
}

/* Demangled: ARC::SDTrace::ptDestroyContext(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3ARC7SDTrace16ptDestroyContextEj(void) {
    ALOGD("_ZN3ARC7SDTrace16ptDestroyContextEj() called");
    return 0;
}

/* Demangled: png_read_destroy */
extern "C" __attribute__((visibility("default"))) int png_read_destroy(void) {
    ALOGD("png_read_destroy() called");
    return 0;
}

/* Demangled: png_set_compression_buffer_size */
extern "C" __attribute__((visibility("default"))) int png_set_compression_buffer_size(void) {
    ALOGD("png_set_compression_buffer_size() called");
    return 0;
}

/* Demangled: png_write_chunk_data */
extern "C" __attribute__((visibility("default"))) int png_write_chunk_data(void) {
    ALOGD("png_write_chunk_data() called");
    return 0;
}

/* Demangled: trace::Null::toString() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace4Null8toStringEv(void) {
    ALOGD("_ZNK5trace4Null8toStringEv() called");
    return 0;
}

/* Demangled: GLDumperES11::BackupStates() */
extern "C" __attribute__((visibility("default"))) int _ZN12GLDumperES1112BackupStatesEv(void) {
    ALOGD("_ZN12GLDumperES1112BackupStatesEv() called");
    return 0;
}

/* Demangled: png_get_libpng_ver */
extern "C" __attribute__((visibility("default"))) int png_get_libpng_ver(void) {
    ALOGD("png_get_libpng_ver() called");
    return 0;
}

/* Demangled: png_get_bit_depth */
extern "C" __attribute__((visibility("default"))) int png_get_bit_depth(void) {
    ALOGD("png_get_bit_depth() called");
    return 0;
}

/* Demangled: SnappyFile::rawGetc() */
extern "C" __attribute__((visibility("default"))) int _ZN10SnappyFile7rawGetcEv(void) {
    ALOGD("_ZN10SnappyFile7rawGetcEv() called");
    return 0;
}

/* Demangled: snappy::ByteArraySource::~ByteArraySource() */
extern "C" __attribute__((visibility("default"))) int _ZN6snappy15ByteArraySourceD1Ev(void) {
    ALOGD("_ZN6snappy15ByteArraySourceD1Ev() called");
    return 0;
}

/* Demangled: ARCUnregisterGLESv1Hook */
extern "C" __attribute__((visibility("default"))) int ARCUnregisterGLESv1Hook(void) {
    ALOGD("ARCUnregisterGLESv1Hook() called");
    return 0;
}

/* Demangled: png_do_swap */
extern "C" __attribute__((visibility("default"))) int png_do_swap(void) {
    ALOGD("png_do_swap() called");
    return 0;
}

/* Exported Object: vtable for SnappyFile */
extern "C" __attribute__((visibility("default"))) void* _ZTV10SnappyFile = NULL;

/* Exported Object: typeinfo name for trace::Blob */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5trace4BlobE = NULL;

/* Demangled: FrameRecord::TakeSnapshot(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11FrameRecord12TakeSnapshotEj(void) {
    ALOGD("_ZN11FrameRecord12TakeSnapshotEj() called");
    return 0;
}

/* Demangled: trace::Visitor::visit(trace::SInt*) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace7Visitor5visitEPNS_4SIntE(void) {
    ALOGD("_ZN5trace7Visitor5visitEPNS_4SIntE() called");
    return 0;
}

/* Demangled: trace::Double::toFloat() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace6Double7toFloatEv(void) {
    ALOGD("_ZNK5trace6Double7toFloatEv() called");
    return 0;
}

/* Exported Object: vtable for GLDumperES20 */
extern "C" __attribute__((visibility("default"))) void* _ZTV12GLDumperES20 = NULL;

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j(void) {
    ALOGD("_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j() called");
    return 0;
}

/* Demangled: trace::Null::toUInt() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace4Null6toUIntEv(void) {
    ALOGD("_ZNK5trace4Null6toUIntEv() called");
    return 0;
}

/* Exported Object: typeinfo for trace::Blob */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5trace4BlobE = NULL;

/* Demangled: EzContextES11::ReadPixels() */
extern "C" __attribute__((visibility("default"))) int _ZN13EzContextES1110ReadPixelsEv(void) {
    ALOGD("_ZN13EzContextES1110ReadPixelsEv() called");
    return 0;
}

/* Exported Object: typeinfo for trace::Float */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5trace5FloatE = NULL;

/* Demangled: png_safecat */
extern "C" __attribute__((visibility("default"))) int png_safecat(void) {
    ALOGD("png_safecat() called");
    return 0;
}

/* Demangled: png_chunk_error */
extern "C" __attribute__((visibility("default"))) int png_chunk_error(void) {
    ALOGD("png_chunk_error() called");
    return 0;
}

/* Demangled: png_set_sCAL */
extern "C" __attribute__((visibility("default"))) int png_set_sCAL(void) {
    ALOGD("png_set_sCAL() called");
    return 0;
}

/* Demangled: png_save_int_32 */
extern "C" __attribute__((visibility("default"))) int png_save_int_32(void) {
    ALOGD("png_save_int_32() called");
    return 0;
}

/* Demangled: deflateSetDictionary */
extern "C" __attribute__((visibility("default"))) int deflateSetDictionary(void) {
    ALOGD("deflateSetDictionary() called");
    return 0;
}

/* Demangled: trace::LocalWriter::open() */
extern "C" __attribute__((visibility("default"))) int _ZN5trace11LocalWriter4openEv(void) {
    ALOGD("_ZN5trace11LocalWriter4openEv() called");
    return 0;
}

/* Demangled: sdTraceEnableDump */
extern "C" __attribute__((visibility("default"))) int sdTraceEnableDump(void) {
    ALOGD("sdTraceEnableDump() called");
    return 0;
}

/* Demangled: GLDumperES20::~GLDumperES20() */
extern "C" __attribute__((visibility("default"))) int _ZN12GLDumperES20D0Ev(void) {
    ALOGD("_ZN12GLDumperES20D0Ev() called");
    return 0;
}

/* Demangled: png_get_compression_buffer_size */
extern "C" __attribute__((visibility("default"))) int png_get_compression_buffer_size(void) {
    ALOGD("png_get_compression_buffer_size() called");
    return 0;
}

/* Demangled: png_push_handle_tEXt */
extern "C" __attribute__((visibility("default"))) int png_push_handle_tEXt(void) {
    ALOGD("png_push_handle_tEXt() called");
    return 0;
}

/* Demangled: png_write_data */
extern "C" __attribute__((visibility("default"))) int png_write_data(void) {
    ALOGD("png_write_data() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<trace::BoundBlob*, std::__1::allocator<trace::BoundBlob*> >::push_back(trace::BoundBlob*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN5trace9BoundBlobENS_9allocatorIS3_EEE9push_backEOS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN5trace9BoundBlobENS_9allocatorIS3_EEE9push_backEOS3_() called");
    return 0;
}

/* Demangled: EzContextES20::BlitFrameBuffer(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN13EzContextES2015BlitFrameBufferEj(void) {
    ALOGD("_ZN13EzContextES2015BlitFrameBufferEj() called");
    return 0;
}

/* Demangled: FrameRecord::~FrameRecord() */
extern "C" __attribute__((visibility("default"))) int _ZN11FrameRecordD2Ev(void) {
    ALOGD("_ZN11FrameRecordD2Ev() called");
    return 0;
}

/* Demangled: png_get_header_version */
extern "C" __attribute__((visibility("default"))) int png_get_header_version(void) {
    ALOGD("png_get_header_version() called");
    return 0;
}

/* Demangled: png_chunk_warning */
extern "C" __attribute__((visibility("default"))) int png_chunk_warning(void) {
    ALOGD("png_chunk_warning() called");
    return 0;
}

/* Demangled: png_save_uint_32 */
extern "C" __attribute__((visibility("default"))) int png_save_uint_32(void) {
    ALOGD("png_save_uint_32() called");
    return 0;
}

/* Demangled: png_do_scale_16_to_8 */
extern "C" __attribute__((visibility("default"))) int png_do_scale_16_to_8(void) {
    ALOGD("png_do_scale_16_to_8() called");
    return 0;
}

/* Demangled: png_check_keyword */
extern "C" __attribute__((visibility("default"))) int png_check_keyword(void) {
    ALOGD("png_check_keyword() called");
    return 0;
}

/* Exported Object: typeinfo name for trace::OutStream */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5trace9OutStreamE = NULL;

/* Demangled: earlyInitDriver */
extern "C" __attribute__((visibility("default"))) int earlyInitDriver(void) {
    ALOGD("earlyInitDriver() called");
    return 0;
}

/* Demangled: png_get_tIME */
extern "C" __attribute__((visibility("default"))) int png_get_tIME(void) {
    ALOGD("png_get_tIME() called");
    return 0;
}

/* Demangled: png_build_grayscale_palette */
extern "C" __attribute__((visibility("default"))) int png_build_grayscale_palette(void) {
    ALOGD("png_build_grayscale_palette() called");
    return 0;
}

/* Demangled: png_set_text_compression_level */
extern "C" __attribute__((visibility("default"))) int png_set_text_compression_level(void) {
    ALOGD("png_set_text_compression_level() called");
    return 0;
}

/* Demangled: deflatePrime */
extern "C" __attribute__((visibility("default"))) int deflatePrime(void) {
    ALOGD("deflatePrime() called");
    return 0;
}

/* Demangled: trace::File::~File() */
extern "C" __attribute__((visibility("default"))) int _ZN5trace4FileD1Ev(void) {
    ALOGD("_ZN5trace4FileD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for SnappyOutStream */
extern "C" __attribute__((visibility("default"))) void* _ZTS15SnappyOutStream = NULL;

/* Demangled: EzContextES11::~EzContextES11() */
extern "C" __attribute__((visibility("default"))) int _ZN13EzContextES11D1Ev(void) {
    ALOGD("_ZN13EzContextES11D1Ev() called");
    return 0;
}

/* Demangled: png_write_IEND */
extern "C" __attribute__((visibility("default"))) int png_write_IEND(void) {
    ALOGD("png_write_IEND() called");
    return 0;
}

/* Demangled: trace::SInt::visit(trace::Visitor&) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace4SInt5visitERNS_7VisitorE(void) {
    ALOGD("_ZN5trace4SInt5visitERNS_7VisitorE() called");
    return 0;
}

/* Demangled: sdTraceDisableDump */
extern "C" __attribute__((visibility("default"))) int sdTraceDisableDump(void) {
    ALOGD("sdTraceDisableDump() called");
    return 0;
}

/* Demangled: trace::Float::toSInt() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace5Float6toSIntEv(void) {
    ALOGD("_ZNK5trace5Float6toSIntEv() called");
    return 0;
}

/* Demangled: trace::Pointer::toUIntPtr() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace7Pointer9toUIntPtrEv(void) {
    ALOGD("_ZNK5trace7Pointer9toUIntPtrEv() called");
    return 0;
}

/* Demangled: trace::Writer::writeBool(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace6Writer9writeBoolEb(void) {
    ALOGD("_ZN5trace6Writer9writeBoolEb() called");
    return 0;
}

/* Exported Object: typeinfo for snappy::Sink */
extern "C" __attribute__((visibility("default"))) void* _ZTIN6snappy4SinkE = NULL;

/* Demangled: png_get_y_pixels_per_inch */
extern "C" __attribute__((visibility("default"))) int png_get_y_pixels_per_inch(void) {
    ALOGD("png_get_y_pixels_per_inch() called");
    return 0;
}

/* Demangled: trace::File::File(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace4FileC2ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN5trace4FileC2ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: typeinfo for trace::Struct */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5trace6StructE = NULL;

/* Demangled: EzContextES11::DumpImage(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN13EzContextES119DumpImageEPKc(void) {
    ALOGD("_ZN13EzContextES119DumpImageEPKc() called");
    return 0;
}

/* Demangled: png_set_unknown_chunks */
extern "C" __attribute__((visibility("default"))) int png_set_unknown_chunks(void) {
    ALOGD("png_set_unknown_chunks() called");
    return 0;
}

/* Demangled: png_set_rgb_to_gray */
extern "C" __attribute__((visibility("default"))) int png_set_rgb_to_gray(void) {
    ALOGD("png_set_rgb_to_gray() called");
    return 0;
}

/* Demangled: png_set_benign_errors */
extern "C" __attribute__((visibility("default"))) int png_set_benign_errors(void) {
    ALOGD("png_set_benign_errors() called");
    return 0;
}

/* Demangled: png_write_gAMA_fixed */
extern "C" __attribute__((visibility("default"))) int png_write_gAMA_fixed(void) {
    ALOGD("png_write_gAMA_fixed() called");
    return 0;
}

/* Demangled: SnappyFile::rawOpen(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10SnappyFile7rawOpenERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN10SnappyFile7rawOpenERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: SnappyFile::rawRead(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10SnappyFile7rawReadEPvj(void) {
    ALOGD("_ZN10SnappyFile7rawReadEPvj() called");
    return 0;
}

/* Demangled: trace::Bool::toFloat() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace4Bool7toFloatEv(void) {
    ALOGD("_ZNK5trace4Bool7toFloatEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<trace::BoundBlob*, std::__1::allocator<trace::BoundBlob*>&>::push_back(trace::BoundBlob*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN5trace9BoundBlobERNS_9allocatorIS3_EEE9push_backEOS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN5trace9BoundBlobERNS_9allocatorIS3_EEE9push_backEOS3_() called");
    return 0;
}

/* Demangled: png_read_row */
extern "C" __attribute__((visibility("default"))) int png_read_row(void) {
    ALOGD("png_read_row() called");
    return 0;
}

/* Demangled: png_write_sig */
extern "C" __attribute__((visibility("default"))) int png_write_sig(void) {
    ALOGD("png_write_sig() called");
    return 0;
}

/* Exported Object: typeinfo name for trace::SInt */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5trace4SIntE = NULL;

/* Demangled: trace::Writer::writeNull() */
extern "C" __attribute__((visibility("default"))) int _ZN5trace6Writer9writeNullEv(void) {
    ALOGD("_ZN5trace6Writer9writeNullEv() called");
    return 0;
}

/* Demangled: GLDumperES20::~GLDumperES20() */
extern "C" __attribute__((visibility("default"))) int _ZN12GLDumperES20D2Ev(void) {
    ALOGD("_ZN12GLDumperES20D2Ev() called");
    return 0;
}

/* Demangled: png_set_read_fn */
extern "C" __attribute__((visibility("default"))) int png_set_read_fn(void) {
    ALOGD("png_set_read_fn() called");
    return 0;
}

/* Demangled: png_set_compression_method */
extern "C" __attribute__((visibility("default"))) int png_set_compression_method(void) {
    ALOGD("png_set_compression_method() called");
    return 0;
}

/* Demangled: trace::SInt::toFloat() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace4SInt7toFloatEv(void) {
    ALOGD("_ZNK5trace4SInt7toFloatEv() called");
    return 0;
}

/* Exported Object: vtable for trace::Array */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5trace5ArrayE = NULL;

/* Demangled: _ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELj0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELj0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_(void) {
    ALOGD("_ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELj0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_() called");
    return 0;
}

/* Demangled: png_create_struct */
extern "C" __attribute__((visibility("default"))) int png_create_struct(void) {
    ALOGD("png_create_struct() called");
    return 0;
}

/* Demangled: png_push_crc_finish */
extern "C" __attribute__((visibility("default"))) int png_push_crc_finish(void) {
    ALOGD("png_push_crc_finish() called");
    return 0;
}

/* Demangled: inflateMark */
extern "C" __attribute__((visibility("default"))) int inflateMark(void) {
    ALOGD("inflateMark() called");
    return 0;
}

/* Demangled: trace::Blob::toBool() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace4Blob6toBoolEv(void) {
    ALOGD("_ZNK5trace4Blob6toBoolEv() called");
    return 0;
}

/* Exported Object: typeinfo for trace::SInt */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5trace4SIntE = NULL;

/* Demangled: png_malloc */
extern "C" __attribute__((visibility("default"))) int png_malloc(void) {
    ALOGD("png_malloc() called");
    return 0;
}

/* Demangled: png_init_read_transformations */
extern "C" __attribute__((visibility("default"))) int png_init_read_transformations(void) {
    ALOGD("png_init_read_transformations() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: png_get_y_offset_inches_fixed */
extern "C" __attribute__((visibility("default"))) int png_get_y_offset_inches_fixed(void) {
    ALOGD("png_get_y_offset_inches_fixed() called");
    return 0;
}

/* Demangled: png_push_have_info */
extern "C" __attribute__((visibility("default"))) int png_push_have_info(void) {
    ALOGD("png_push_have_info() called");
    return 0;
}

/* Demangled: png_crc_error */
extern "C" __attribute__((visibility("default"))) int png_crc_error(void) {
    ALOGD("png_crc_error() called");
    return 0;
}

/* Demangled: png_write_oFFs */
extern "C" __attribute__((visibility("default"))) int png_write_oFFs(void) {
    ALOGD("png_write_oFFs() called");
    return 0;
}

/* Exported Object: _length_code */
extern "C" __attribute__((visibility("default"))) void* _length_code = NULL;

/* Demangled: zcfree */
extern "C" __attribute__((visibility("default"))) int zcfree(void) {
    ALOGD("zcfree() called");
    return 0;
}

/* Demangled: png_start_read_image */
extern "C" __attribute__((visibility("default"))) int png_start_read_image(void) {
    ALOGD("png_start_read_image() called");
    return 0;
}

/* Demangled: png_get_cHRM_XYZ_fixed */
extern "C" __attribute__((visibility("default"))) int png_get_cHRM_XYZ_fixed(void) {
    ALOGD("png_get_cHRM_XYZ_fixed() called");
    return 0;
}

/* Demangled: png_handle_tEXt */
extern "C" __attribute__((visibility("default"))) int png_handle_tEXt(void) {
    ALOGD("png_handle_tEXt() called");
    return 0;
}

/* Demangled: png_write_zTXt */
extern "C" __attribute__((visibility("default"))) int png_write_zTXt(void) {
    ALOGD("png_write_zTXt() called");
    return 0;
}

/* Demangled: trace::Bool::visit(trace::Visitor&) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace4Bool5visitERNS_7VisitorE(void) {
    ALOGD("_ZN5trace4Bool5visitERNS_7VisitorE() called");
    return 0;
}

/* Exported Object: vtable for snappy::ByteArraySource */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6snappy15ByteArraySourceE = NULL;

/* Demangled: sdTraceNeedDump */
extern "C" __attribute__((visibility("default"))) int sdTraceNeedDump(void) {
    ALOGD("sdTraceNeedDump() called");
    return 0;
}

/* Demangled: png_get_y_offset_microns */
extern "C" __attribute__((visibility("default"))) int png_get_y_offset_microns(void) {
    ALOGD("png_get_y_offset_microns() called");
    return 0;
}

/* Demangled: png_read_rows */
extern "C" __attribute__((visibility("default"))) int png_read_rows(void) {
    ALOGD("png_read_rows() called");
    return 0;
}

/* Demangled: png_set_cHRM */
extern "C" __attribute__((visibility("default"))) int png_set_cHRM(void) {
    ALOGD("png_set_cHRM() called");
    return 0;
}

/* Demangled: gzputc */
extern "C" __attribute__((visibility("default"))) int gzputc(void) {
    ALOGD("gzputc() called");
    return 0;
}

/* Demangled: _tr_tally */
extern "C" __attribute__((visibility("default"))) int _tr_tally(void) {
    ALOGD("_tr_tally() called");
    return 0;
}

/* Demangled: trace::Repr::toBool() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace4Repr6toBoolEv(void) {
    ALOGD("_ZNK5trace4Repr6toBoolEv() called");
    return 0;
}

/* Exported Object: typeinfo name for snappy::Sink */
extern "C" __attribute__((visibility("default"))) void* _ZTSN6snappy4SinkE = NULL;

/* Demangled: png_info_init_3 */
extern "C" __attribute__((visibility("default"))) int png_info_init_3(void) {
    ALOGD("png_info_init_3() called");
    return 0;
}

/* Demangled: get_crc_table */
extern "C" __attribute__((visibility("default"))) int get_crc_table(void) {
    ALOGD("get_crc_table() called");
    return 0;
}

/* Demangled: _tr_flush_block */
extern "C" __attribute__((visibility("default"))) int _tr_flush_block(void) {
    ALOGD("_tr_flush_block() called");
    return 0;
}

/* Demangled: trace::Float::toUInt() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace5Float6toUIntEv(void) {
    ALOGD("_ZNK5trace5Float6toUIntEv() called");
    return 0;
}

/* Demangled: snappy::UncheckedByteArraySink::~UncheckedByteArraySink() */
extern "C" __attribute__((visibility("default"))) int _ZN6snappy22UncheckedByteArraySinkD0Ev(void) {
    ALOGD("_ZN6snappy22UncheckedByteArraySinkD0Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for IEzContext */
extern "C" __attribute__((visibility("default"))) void* _ZTS10IEzContext = NULL;

/* Demangled: png_set_interlace_handling */
extern "C" __attribute__((visibility("default"))) int png_set_interlace_handling(void) {
    ALOGD("png_set_interlace_handling() called");
    return 0;
}

/* Demangled: png_do_invert */
extern "C" __attribute__((visibility("default"))) int png_do_invert(void) {
    ALOGD("png_do_invert() called");
    return 0;
}

/* Demangled: std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0> std::__1::__copy_aligned<std::__1::vector<bool, std::__1::allocator<bool> >, true>(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, true, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, true, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__copy_alignedINS_6vectorIbNS_9allocatorIbEEEELb1EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_(void) {
    ALOGD("_ZNSt3__114__copy_alignedINS_6vectorIbNS_9allocatorIbEEEELb1EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_() called");
    return 0;
}

/* Demangled: png_read_end */
extern "C" __attribute__((visibility("default"))) int png_read_end(void) {
    ALOGD("png_read_end() called");
    return 0;
}

/* Demangled: png_read_start_row */
extern "C" __attribute__((visibility("default"))) int png_read_start_row(void) {
    ALOGD("png_read_start_row() called");
    return 0;
}

/* Demangled: png_write_bKGD */
extern "C" __attribute__((visibility("default"))) int png_write_bKGD(void) {
    ALOGD("png_write_bKGD() called");
    return 0;
}

/* Demangled: trace::StackFrame::~StackFrame() */
extern "C" __attribute__((visibility("default"))) int _ZN5trace10StackFrameD2Ev(void) {
    ALOGD("_ZN5trace10StackFrameD2Ev() called");
    return 0;
}

/* Demangled: trace::Repr::toPointer(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace4Repr9toPointerEb(void) {
    ALOGD("_ZN5trace4Repr9toPointerEb() called");
    return 0;
}

/* Demangled: trace::Repr::toUIntPtr() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace4Repr9toUIntPtrEv(void) {
    ALOGD("_ZNK5trace4Repr9toUIntPtrEv() called");
    return 0;
}

/* Demangled: trace::LocalWriter::checkProcessId() */
extern "C" __attribute__((visibility("default"))) int _ZN5trace11LocalWriter14checkProcessIdEv(void) {
    ALOGD("_ZN5trace11LocalWriter14checkProcessIdEv() called");
    return 0;
}

/* Demangled: png_set_expand_gray_1_2_4_to_8 */
extern "C" __attribute__((visibility("default"))) int png_set_expand_gray_1_2_4_to_8(void) {
    ALOGD("png_set_expand_gray_1_2_4_to_8() called");
    return 0;
}

/* Demangled: png_set_mem_fn */
extern "C" __attribute__((visibility("default"))) int png_set_mem_fn(void) {
    ALOGD("png_set_mem_fn() called");
    return 0;
}

/* Demangled: snappy::internal::CompressFragment(char const*, unsigned int, char*, unsigned short*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6snappy8internal16CompressFragmentEPKcjPcPti(void) {
    ALOGD("_ZN6snappy8internal16CompressFragmentEPKcjPcPti() called");
    return 0;
}

/* Demangled: png_push_have_row */
extern "C" __attribute__((visibility("default"))) int png_push_have_row(void) {
    ALOGD("png_push_have_row() called");
    return 0;
}

/* Demangled: png_write_iTXt */
extern "C" __attribute__((visibility("default"))) int png_write_iTXt(void) {
    ALOGD("png_write_iTXt() called");
    return 0;
}

/* Demangled: trace::Pointer::visit(trace::Visitor&) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace7Pointer5visitERNS_7VisitorE(void) {
    ALOGD("_ZN5trace7Pointer5visitERNS_7VisitorE() called");
    return 0;
}

/* Demangled: png_set_read_user_chunk_fn */
extern "C" __attribute__((visibility("default"))) int png_set_read_user_chunk_fn(void) {
    ALOGD("png_set_read_user_chunk_fn() called");
    return 0;
}

/* Demangled: FrameRecord::GetProcessName(char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11FrameRecord14GetProcessNameEPcj(void) {
    ALOGD("_ZN11FrameRecord14GetProcessNameEPcj() called");
    return 0;
}

/* Demangled: png_get_rgb_to_gray_status */
extern "C" __attribute__((visibility("default"))) int png_get_rgb_to_gray_status(void) {
    ALOGD("png_get_rgb_to_gray_status() called");
    return 0;
}

/* Demangled: inflate */
extern "C" __attribute__((visibility("default"))) int inflate(void) {
    ALOGD("inflate() called");
    return 0;
}

/* Demangled: gzseek */
extern "C" __attribute__((visibility("default"))) int gzseek(void) {
    ALOGD("gzseek() called");
    return 0;
}

/* Demangled: inflateInit2_ */
extern "C" __attribute__((visibility("default"))) int inflateInit2_(void) {
    ALOGD("inflateInit2_() called");
    return 0;
}

/* Exported Object: typeinfo for IEzContext */
extern "C" __attribute__((visibility("default"))) void* _ZTI10IEzContext = NULL;

/* Exported Object: typeinfo name for trace::Float */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5trace5FloatE = NULL;

/* Demangled: EzContextES20::BackupStates() */
extern "C" __attribute__((visibility("default"))) int _ZN13EzContextES2012BackupStatesEv(void) {
    ALOGD("_ZN13EzContextES2012BackupStatesEv() called");
    return 0;
}

/* Demangled: EGLTraceLinker_dlopen */
extern "C" __attribute__((visibility("default"))) int EGLTraceLinker_dlopen(void) {
    ALOGD("EGLTraceLinker_dlopen() called");
    return 0;
}

/* Demangled: zlibVersion */
extern "C" __attribute__((visibility("default"))) int zlibVersion(void) {
    ALOGD("zlibVersion() called");
    return 0;
}

/* Demangled: std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0> std::__1::__copy_aligned<std::__1::vector<bool, std::__1::allocator<bool> >, false>(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__copy_alignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_(void) {
    ALOGD("_ZNSt3__114__copy_alignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_() called");
    return 0;
}

/* Demangled: png_get_gAMA_fixed */
extern "C" __attribute__((visibility("default"))) int png_get_gAMA_fixed(void) {
    ALOGD("png_get_gAMA_fixed() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Demangled: snappy::UncheckedByteArraySink::~UncheckedByteArraySink() */
extern "C" __attribute__((visibility("default"))) int _ZN6snappy22UncheckedByteArraySinkD2Ev(void) {
    ALOGD("_ZN6snappy22UncheckedByteArraySinkD2Ev() called");
    return 0;
}

/* Demangled: EzContextES20::CalcContentDifference(float*) */
extern "C" __attribute__((visibility("default"))) int _ZN13EzContextES2021CalcContentDifferenceEPf(void) {
    ALOGD("_ZN13EzContextES2021CalcContentDifferenceEPf() called");
    return 0;
}

/* Demangled: EzContextES20::EzContextES20() */
extern "C" __attribute__((visibility("default"))) int _ZN13EzContextES20C2Ev(void) {
    ALOGD("_ZN13EzContextES20C2Ev() called");
    return 0;
}

/* Demangled: png_zfree */
extern "C" __attribute__((visibility("default"))) int png_zfree(void) {
    ALOGD("png_zfree() called");
    return 0;
}

/* Demangled: png_get_oFFs */
extern "C" __attribute__((visibility("default"))) int png_get_oFFs(void) {
    ALOGD("png_get_oFFs() called");
    return 0;
}

/* Demangled: png_read_push_finish_row */
extern "C" __attribute__((visibility("default"))) int png_read_push_finish_row(void) {
    ALOGD("png_read_push_finish_row() called");
    return 0;
}

/* Demangled: png_set_expand_16 */
extern "C" __attribute__((visibility("default"))) int png_set_expand_16(void) {
    ALOGD("png_set_expand_16() called");
    return 0;
}

/* Demangled: crc32_combine */
extern "C" __attribute__((visibility("default"))) int crc32_combine(void) {
    ALOGD("crc32_combine() called");
    return 0;
}

/* Demangled: gzflush */
extern "C" __attribute__((visibility("default"))) int gzflush(void) {
    ALOGD("gzflush() called");
    return 0;
}

/* Demangled: trace::Float::toFloat() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace5Float7toFloatEv(void) {
    ALOGD("_ZNK5trace5Float7toFloatEv() called");
    return 0;
}

/* Demangled: GLDumperES20::GLDumperES20(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12GLDumperES20C1Eii(void) {
    ALOGD("_ZN12GLDumperES20C1Eii() called");
    return 0;
}

/* Demangled: inflateReset */
extern "C" __attribute__((visibility("default"))) int inflateReset(void) {
    ALOGD("inflateReset() called");
    return 0;
}

/* Demangled: png_set_progressive_read_fn */
extern "C" __attribute__((visibility("default"))) int png_set_progressive_read_fn(void) {
    ALOGD("png_set_progressive_read_fn() called");
    return 0;
}

/* Demangled: trace::Value::operator[](unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace5ValueixEj(void) {
    ALOGD("_ZNK5trace5ValueixEj() called");
    return 0;
}

/* Demangled: trace::Writer::writeFloat(float) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace6Writer10writeFloatEf(void) {
    ALOGD("_ZN5trace6Writer10writeFloatEf() called");
    return 0;
}

/* Demangled: sdTraceIsInit */
extern "C" __attribute__((visibility("default"))) int sdTraceIsInit(void) {
    ALOGD("sdTraceIsInit() called");
    return 0;
}

/* Demangled: png_push_have_end */
extern "C" __attribute__((visibility("default"))) int png_push_have_end(void) {
    ALOGD("png_push_have_end() called");
    return 0;
}

/* Demangled: png_set_iCCP */
extern "C" __attribute__((visibility("default"))) int png_set_iCCP(void) {
    ALOGD("png_set_iCCP() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: trace::Bool::toSInt() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace4Bool6toSIntEv(void) {
    ALOGD("_ZNK5trace4Bool6toSIntEv() called");
    return 0;
}

/* Exported Object: typeinfo name for trace::WString */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5trace7WStringE = NULL;

/* Demangled: png_set_filter_heuristics */
extern "C" __attribute__((visibility("default"))) int png_set_filter_heuristics(void) {
    ALOGD("png_set_filter_heuristics() called");
    return 0;
}

/* Demangled: gzputs */
extern "C" __attribute__((visibility("default"))) int gzputs(void) {
    ALOGD("gzputs() called");
    return 0;
}

/* Demangled: SnappyFile::currentOffset() */
extern "C" __attribute__((visibility("default"))) int _ZN10SnappyFile13currentOffsetEv(void) {
    ALOGD("_ZN10SnappyFile13currentOffsetEv() called");
    return 0;
}

/* Demangled: png_get_bKGD */
extern "C" __attribute__((visibility("default"))) int png_get_bKGD(void) {
    ALOGD("png_get_bKGD() called");
    return 0;
}

/* Demangled: SnappyOutStream::SnappyOutStream(char const*, unsigned int, unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN15SnappyOutStreamC2EPKcjjb(void) {
    ALOGD("_ZN15SnappyOutStreamC2EPKcjjb() called");
    return 0;
}

/* Demangled: image::Image::writePNG(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5image5Image8writePNGEPKc(void) {
    ALOGD("_ZNK5image5Image8writePNGEPKc() called");
    return 0;
}

/* Demangled: png_process_data */
extern "C" __attribute__((visibility("default"))) int png_process_data(void) {
    ALOGD("png_process_data() called");
    return 0;
}

/* Demangled: png_set_add_alpha */
extern "C" __attribute__((visibility("default"))) int png_set_add_alpha(void) {
    ALOGD("png_set_add_alpha() called");
    return 0;
}

/* Demangled: trace::Repr::toFloat() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace4Repr7toFloatEv(void) {
    ALOGD("_ZNK5trace4Repr7toFloatEv() called");
    return 0;
}

/* Demangled: png_benign_error */
extern "C" __attribute__((visibility("default"))) int png_benign_error(void) {
    ALOGD("png_benign_error() called");
    return 0;
}

/* Demangled: png_set_text_compression_window_bits */
extern "C" __attribute__((visibility("default"))) int png_set_text_compression_window_bits(void) {
    ALOGD("png_set_text_compression_window_bits() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<trace::BoundBlob, std::__1::allocator<trace::BoundBlob> >::~__deque_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIN5trace9BoundBlobENS_9allocatorIS2_EEED2Ev(void) {
    ALOGD("_ZNSt3__112__deque_baseIN5trace9BoundBlobENS_9allocatorIS2_EEED2Ev() called");
    return 0;
}

/* Demangled: trace::Writer::endLeave() */
extern "C" __attribute__((visibility("default"))) int _ZN5trace6Writer8endLeaveEv(void) {
    ALOGD("_ZN5trace6Writer8endLeaveEv() called");
    return 0;
}

/* Demangled: png_set_IHDR */
extern "C" __attribute__((visibility("default"))) int png_set_IHDR(void) {
    ALOGD("png_set_IHDR() called");
    return 0;
}

/* Demangled: png_muldiv_warn */
extern "C" __attribute__((visibility("default"))) int png_muldiv_warn(void) {
    ALOGD("png_muldiv_warn() called");
    return 0;
}

/* Demangled: inflateSyncPoint */
extern "C" __attribute__((visibility("default"))) int inflateSyncPoint(void) {
    ALOGD("inflateSyncPoint() called");
    return 0;
}

/* Demangled: snappy::RawUncompressToIOVec(char const*, unsigned int, snappy::iovec const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6snappy20RawUncompressToIOVecEPKcjPKNS_5iovecEj(void) {
    ALOGD("_ZN6snappy20RawUncompressToIOVecEPKcjPKNS_5iovecEj() called");
    return 0;
}

/* Demangled: png_handle_sRGB */
extern "C" __attribute__((visibility("default"))) int png_handle_sRGB(void) {
    ALOGD("png_handle_sRGB() called");
    return 0;
}

/* Demangled: png_convert_from_struct_tm */
extern "C" __attribute__((visibility("default"))) int png_convert_from_struct_tm(void) {
    ALOGD("png_convert_from_struct_tm() called");
    return 0;
}

/* Demangled: trace::String::toBool() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace6String6toBoolEv(void) {
    ALOGD("_ZNK5trace6String6toBoolEv() called");
    return 0;
}

/* Demangled: trace::Writer::beginStruct(trace::StructSig const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace6Writer11beginStructEPKNS_9StructSigE(void) {
    ALOGD("_ZN5trace6Writer11beginStructEPKNS_9StructSigE() called");
    return 0;
}

/* Demangled: png_read_info */
extern "C" __attribute__((visibility("default"))) int png_read_info(void) {
    ALOGD("png_read_info() called");
    return 0;
}

/* Demangled: png_push_read_sig */
extern "C" __attribute__((visibility("default"))) int png_push_read_sig(void) {
    ALOGD("png_push_read_sig() called");
    return 0;
}

/* Demangled: inflateEnd */
extern "C" __attribute__((visibility("default"))) int inflateEnd(void) {
    ALOGD("inflateEnd() called");
    return 0;
}

/* Demangled: png_do_write_intrapixel */
extern "C" __attribute__((visibility("default"))) int png_do_write_intrapixel(void) {
    ALOGD("png_do_write_intrapixel() called");
    return 0;
}

/* Demangled: crc32_combine64 */
extern "C" __attribute__((visibility("default"))) int crc32_combine64(void) {
    ALOGD("crc32_combine64() called");
    return 0;
}

/* Exported Object: typeinfo for trace::Value */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5trace5ValueE = NULL;

/* Demangled: png_get_copyright */
extern "C" __attribute__((visibility("default"))) int png_get_copyright(void) {
    ALOGD("png_get_copyright() called");
    return 0;
}

/* Demangled: png_do_expand_palette */
extern "C" __attribute__((visibility("default"))) int png_do_expand_palette(void) {
    ALOGD("png_do_expand_palette() called");
    return 0;
}

/* Demangled: png_reset_crc */
extern "C" __attribute__((visibility("default"))) int png_reset_crc(void) {
    ALOGD("png_reset_crc() called");
    return 0;
}

/* Demangled: png_set_gAMA */
extern "C" __attribute__((visibility("default"))) int png_set_gAMA(void) {
    ALOGD("png_set_gAMA() called");
    return 0;
}

/* Demangled: png_set_compression_strategy */
extern "C" __attribute__((visibility("default"))) int png_set_compression_strategy(void) {
    ALOGD("png_set_compression_strategy() called");
    return 0;
}

/* Demangled: png_write_png */
extern "C" __attribute__((visibility("default"))) int png_write_png(void) {
    ALOGD("png_write_png() called");
    return 0;
}

/* Demangled: trace::Visitor::visit(trace::Repr*) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace7Visitor5visitEPNS_4ReprE(void) {
    ALOGD("_ZN5trace7Visitor5visitEPNS_4ReprE() called");
    return 0;
}

/* Demangled: trace::Visitor::visit(trace::String*) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace7Visitor5visitEPNS_6StringE(void) {
    ALOGD("_ZN5trace7Visitor5visitEPNS_6StringE() called");
    return 0;
}

/* Exported Object: trace::memcpy_sig */
extern "C" __attribute__((visibility("default"))) void* _ZN5trace10memcpy_sigE = NULL;

/* Demangled: png_write_flush */
extern "C" __attribute__((visibility("default"))) int png_write_flush(void) {
    ALOGD("png_write_flush() called");
    return 0;
}

/* Exported Object: vtable for SnappyOutStream */
extern "C" __attribute__((visibility("default"))) void* _ZTV15SnappyOutStream = NULL;

/* Demangled: trace::Writer::beginLeave(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace6Writer10beginLeaveEj(void) {
    ALOGD("_ZN5trace6Writer10beginLeaveEj() called");
    return 0;
}

/* Demangled: GLDumperES11::ReadPixels(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12GLDumperES1110ReadPixelsEiii(void) {
    ALOGD("_ZN12GLDumperES1110ReadPixelsEiii() called");
    return 0;
}

/* Demangled: png_chunk_unknown_handling */
extern "C" __attribute__((visibility("default"))) int png_chunk_unknown_handling(void) {
    ALOGD("png_chunk_unknown_handling() called");
    return 0;
}

/* Demangled: png_get_sCAL */
extern "C" __attribute__((visibility("default"))) int png_get_sCAL(void) {
    ALOGD("png_get_sCAL() called");
    return 0;
}

/* Demangled: png_get_y_offset_pixels */
extern "C" __attribute__((visibility("default"))) int png_get_y_offset_pixels(void) {
    ALOGD("png_get_y_offset_pixels() called");
    return 0;
}

/* Demangled: png_push_save_buffer */
extern "C" __attribute__((visibility("default"))) int png_push_save_buffer(void) {
    ALOGD("png_push_save_buffer() called");
    return 0;
}

/* Demangled: png_set_PLTE */
extern "C" __attribute__((visibility("default"))) int png_set_PLTE(void) {
    ALOGD("png_set_PLTE() called");
    return 0;
}

/* Demangled: gztell */
extern "C" __attribute__((visibility("default"))) int gztell(void) {
    ALOGD("gztell() called");
    return 0;
}

/* Demangled: SnappyFile::createCache(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10SnappyFile11createCacheEj(void) {
    ALOGD("_ZN10SnappyFile11createCacheEj() called");
    return 0;
}

/* Demangled: trace::Bool::toUInt() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace4Bool6toUIntEv(void) {
    ALOGD("_ZNK5trace4Bool6toUIntEv() called");
    return 0;
}

/* Exported Object: typeinfo name for trace::String */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5trace6StringE = NULL;

/* Demangled: trace::Writer::open(char const*, unsigned int, unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace6Writer4openEPKcjjb(void) {
    ALOGD("_ZN5trace6Writer4openEPKcjjb() called");
    return 0;
}

/* Exported Object: trace::realloc_sig */
extern "C" __attribute__((visibility("default"))) void* _ZN5trace11realloc_sigE = NULL;

/* Demangled: png_set_packing */
extern "C" __attribute__((visibility("default"))) int png_set_packing(void) {
    ALOGD("png_set_packing() called");
    return 0;
}

/* Demangled: zcalloc */
extern "C" __attribute__((visibility("default"))) int zcalloc(void) {
    ALOGD("zcalloc() called");
    return 0;
}

/* Demangled: trace::WString::toBool() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace7WString6toBoolEv(void) {
    ALOGD("_ZNK5trace7WString6toBoolEv() called");
    return 0;
}

/* Demangled: trace::LocalWriter::beginEnter(trace::FunctionSig const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace11LocalWriter10beginEnterEPKNS_11FunctionSigEb(void) {
    ALOGD("_ZN5trace11LocalWriter10beginEnterEPKNS_11FunctionSigEb() called");
    return 0;
}

/* Demangled: SnappyOutStream::close() */
extern "C" __attribute__((visibility("default"))) int _ZN15SnappyOutStream5closeEv(void) {
    ALOGD("_ZN15SnappyOutStream5closeEv() called");
    return 0;
}

/* Demangled: png_set_expand */
extern "C" __attribute__((visibility("default"))) int png_set_expand(void) {
    ALOGD("png_set_expand() called");
    return 0;
}

/* Demangled: deflate */
extern "C" __attribute__((visibility("default"))) int deflate(void) {
    ALOGD("deflate() called");
    return 0;
}

/* Demangled: trace::Double::toBool() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace6Double6toBoolEv(void) {
    ALOGD("_ZNK5trace6Double6toBoolEv() called");
    return 0;
}

/* Demangled: trace::Writer::Writer() */
extern "C" __attribute__((visibility("default"))) int _ZN5trace6WriterC2Ev(void) {
    ALOGD("_ZN5trace6WriterC2Ev() called");
    return 0;
}

/* Demangled: EzContextES20::~EzContextES20() */
extern "C" __attribute__((visibility("default"))) int _ZN13EzContextES20D0Ev(void) {
    ALOGD("_ZN13EzContextES20D0Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: vtable for std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: png_formatted_warning */
extern "C" __attribute__((visibility("default"))) int png_formatted_warning(void) {
    ALOGD("png_formatted_warning() called");
    return 0;
}

/* Demangled: trace::WString::~WString() */
extern "C" __attribute__((visibility("default"))) int _ZN5trace7WStringD0Ev(void) {
    ALOGD("_ZN5trace7WStringD0Ev() called");
    return 0;
}

/* Demangled: png_get_pixels_per_inch */
extern "C" __attribute__((visibility("default"))) int png_get_pixels_per_inch(void) {
    ALOGD("png_get_pixels_per_inch() called");
    return 0;
}

/* Demangled: png_do_write_swap_alpha */
extern "C" __attribute__((visibility("default"))) int png_do_write_swap_alpha(void) {
    ALOGD("png_do_write_swap_alpha() called");
    return 0;
}

/* Demangled: trace::Writer::beginBacktrace(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace6Writer14beginBacktraceEj(void) {
    ALOGD("_ZN5trace6Writer14beginBacktraceEj() called");
    return 0;
}

/* Demangled: snappy::RawUncompress(snappy::Source*, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN6snappy13RawUncompressEPNS_6SourceEPc(void) {
    ALOGD("_ZN6snappy13RawUncompressEPNS_6SourceEPc() called");
    return 0;
}

/* Demangled: png_create_struct_2 */
extern "C" __attribute__((visibility("default"))) int png_create_struct_2(void) {
    ALOGD("png_create_struct_2() called");
    return 0;
}

/* Demangled: png_set_write_status_fn */
extern "C" __attribute__((visibility("default"))) int png_set_write_status_fn(void) {
    ALOGD("png_set_write_status_fn() called");
    return 0;
}

/* Demangled: png_handle_sBIT */
extern "C" __attribute__((visibility("default"))) int png_handle_sBIT(void) {
    ALOGD("png_handle_sBIT() called");
    return 0;
}

/* Demangled: png_get_current_row_number */
extern "C" __attribute__((visibility("default"))) int png_get_current_row_number(void) {
    ALOGD("png_get_current_row_number() called");
    return 0;
}

/* Demangled: SnappyFile::readCompressedLength() */
extern "C" __attribute__((visibility("default"))) int _ZN10SnappyFile20readCompressedLengthEv(void) {
    ALOGD("_ZN10SnappyFile20readCompressedLengthEv() called");
    return 0;
}

/* Demangled: trace::Null::toDouble() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace4Null8toDoubleEv(void) {
    ALOGD("_ZNK5trace4Null8toDoubleEv() called");
    return 0;
}

/* Demangled: trace::UInt::toDouble() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace4UInt8toDoubleEv(void) {
    ALOGD("_ZNK5trace4UInt8toDoubleEv() called");
    return 0;
}

/* Demangled: SnappyOutStream::flushWriteCache() */
extern "C" __attribute__((visibility("default"))) int _ZN15SnappyOutStream15flushWriteCacheEv(void) {
    ALOGD("_ZN15SnappyOutStream15flushWriteCacheEv() called");
    return 0;
}

/* Demangled: png_create_read_struct */
extern "C" __attribute__((visibility("default"))) int png_create_read_struct(void) {
    ALOGD("png_create_read_struct() called");
    return 0;
}

/* Demangled: compress2 */
extern "C" __attribute__((visibility("default"))) int compress2(void) {
    ALOGD("compress2() called");
    return 0;
}

/* Demangled: _tr_align */
extern "C" __attribute__((visibility("default"))) int _tr_align(void) {
    ALOGD("_tr_align() called");
    return 0;
}

/* Demangled: trace::Bool::toDouble() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace4Bool8toDoubleEv(void) {
    ALOGD("_ZNK5trace4Bool8toDoubleEv() called");
    return 0;
}

/* Demangled: png_format_number */
extern "C" __attribute__((visibility("default"))) int png_format_number(void) {
    ALOGD("png_format_number() called");
    return 0;
}

/* Demangled: png_do_encode_alpha */
extern "C" __attribute__((visibility("default"))) int png_do_encode_alpha(void) {
    ALOGD("png_do_encode_alpha() called");
    return 0;
}

/* Demangled: gzsetparams */
extern "C" __attribute__((visibility("default"))) int gzsetparams(void) {
    ALOGD("gzsetparams() called");
    return 0;
}

/* Demangled: snappy::Varint::Append32(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6snappy6Varint8Append32EPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEj(void) {
    ALOGD("_ZN6snappy6Varint8Append32EPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEj() called");
    return 0;
}

/* Exported Object: typeinfo name for trace::Repr */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5trace4ReprE = NULL;

/* Demangled: png_malloc_warn */
extern "C" __attribute__((visibility("default"))) int png_malloc_warn(void) {
    ALOGD("png_malloc_warn() called");
    return 0;
}

/* Demangled: trace::LocalWriter::LocalWriter() */
extern "C" __attribute__((visibility("default"))) int _ZN5trace11LocalWriterC2Ev(void) {
    ALOGD("_ZN5trace11LocalWriterC2Ev() called");
    return 0;
}

/* Demangled: EzContextES20::~EzContextES20() */
extern "C" __attribute__((visibility("default"))) int _ZN13EzContextES20D2Ev(void) {
    ALOGD("_ZN13EzContextES20D2Ev() called");
    return 0;
}

/* Demangled: ARC::SDTrace::ptCreateContextf(unsigned int, ARC::SDTrace::ESType) */
extern "C" __attribute__((visibility("default"))) int _ZN3ARC7SDTrace16ptCreateContextfEjNS0_6ESTypeE(void) {
    ALOGD("_ZN3ARC7SDTrace16ptCreateContextfEjNS0_6ESTypeE() called");
    return 0;
}

/* Demangled: png_set_sig_bytes */
extern "C" __attribute__((visibility("default"))) int png_set_sig_bytes(void) {
    ALOGD("png_set_sig_bytes() called");
    return 0;
}

/* Demangled: SnappyFile::rawClose() */
extern "C" __attribute__((visibility("default"))) int _ZN10SnappyFile8rawCloseEv(void) {
    ALOGD("_ZN10SnappyFile8rawCloseEv() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE8_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: trace::Struct::~Struct() */
extern "C" __attribute__((visibility("default"))) int _ZN5trace6StructD0Ev(void) {
    ALOGD("_ZN5trace6StructD0Ev() called");
    return 0;
}

/* Demangled: trace::Pointer::toPointer(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5trace7Pointer9toPointerEb(void) {
    ALOGD("_ZN5trace7Pointer9toPointerEb() called");
    return 0;
}

/* Demangled: trace::WString::~WString() */
extern "C" __attribute__((visibility("default"))) int _ZN5trace7WStringD2Ev(void) {
    ALOGD("_ZN5trace7WStringD2Ev() called");
    return 0;
}

/* Exported Object: typeinfo for trace::Repr */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5trace4ReprE = NULL;

/* Exported Object: typeinfo for GLDumperES11 */
extern "C" __attribute__((visibility("default"))) void* _ZTI12GLDumperES11 = NULL;

/* Demangled: GLDumperES20::GLDumperES20(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12GLDumperES20C2Eii(void) {
    ALOGD("_ZN12GLDumperES20C2Eii() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: png_create_read_struct_2 */
extern "C" __attribute__((visibility("default"))) int png_create_read_struct_2(void) {
    ALOGD("png_create_read_struct_2() called");
    return 0;
}

/* Exported Object: z_errmsg */
extern "C" __attribute__((visibility("default"))) void* z_errmsg = NULL;

/* Demangled: trace::Repr::toSInt() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace4Repr6toSIntEv(void) {
    ALOGD("_ZNK5trace4Repr6toSIntEv() called");
    return 0;
}

/* Demangled: EzContextES20::SwapBuffers() */
extern "C" __attribute__((visibility("default"))) int _ZN13EzContextES2011SwapBuffersEv(void) {
    ALOGD("_ZN13EzContextES2011SwapBuffersEv() called");
    return 0;
}

/* Demangled: image::getBlockSize(image::G3D_FORMAT_TYPE, unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN5image12getBlockSizeENS_15G3D_FORMAT_TYPEERjS1_(void) {
    ALOGD("_ZN5image12getBlockSizeENS_15G3D_FORMAT_TYPEERjS1_() called");
    return 0;
}

/* Demangled: trace::SInt::toDouble() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5trace4SInt8toDoubleEv(void) {
    ALOGD("_ZNK5trace4SInt8toDoubleEv() called");
    return 0;
}

/* Demangled: png_get_cHRM */
extern "C" __attribute__((visibility("default"))) int png_get_cHRM(void) {
    ALOGD("png_get_cHRM() called");
    return 0;
}

/* Demangled: png_push_read_tEXt */
extern "C" __attribute__((visibility("default"))) int png_push_read_tEXt(void) {
    ALOGD("png_push_read_tEXt() called");
    return 0;
}

/* Demangled: png_set_write_user_transform_fn */
extern "C" __attribute__((visibility("default"))) int png_set_write_user_transform_fn(void) {
    ALOGD("png_set_write_user_transform_fn() called");
    return 0;
}

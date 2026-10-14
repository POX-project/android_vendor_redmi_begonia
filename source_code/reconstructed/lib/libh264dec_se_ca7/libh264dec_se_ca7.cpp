/*
 * Reverse-Engineered Source for: libh264dec_se.ca7.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libh264dec_se_ca7"

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
#include "libh264dec_se_ca7.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: H264SwDecMalloc */
extern "C" __attribute__((visibility("default"))) int H264SwDecMalloc(void) {
    ALOGD("H264SwDecMalloc() called");
    return 0;
}

/* Exported Object: rH264CallBack */
extern "C" __attribute__((visibility("default"))) void* rH264CallBack = NULL;

/* Demangled: H264SwDecFree */
extern "C" __attribute__((visibility("default"))) int H264SwDecFree(void) {
    ALOGD("H264SwDecFree() called");
    return 0;
}

/* Demangled: H264DecoderSetParameterAdapt */
extern "C" __attribute__((visibility("default"))) int H264DecoderSetParameterAdapt(void) {
    ALOGD("H264DecoderSetParameterAdapt() called");
    return 0;
}

/* Demangled: H264DecoderGetParameterAdapt */
extern "C" __attribute__((visibility("default"))) int H264DecoderGetParameterAdapt(void) {
    ALOGD("H264DecoderGetParameterAdapt() called");
    return 0;
}

/* Demangled: H264SwDecQueryCapability */
extern "C" __attribute__((visibility("default"))) int H264SwDecQueryCapability(void) {
    ALOGD("H264SwDecQueryCapability() called");
    return 0;
}

/* Demangled: H264DecoderDeInitAdapt */
extern "C" __attribute__((visibility("default"))) int H264DecoderDeInitAdapt(void) {
    ALOGD("H264DecoderDeInitAdapt() called");
    return 0;
}

/* Demangled: H264SwDecRelease */
extern "C" __attribute__((visibility("default"))) int H264SwDecRelease(void) {
    ALOGD("H264SwDecRelease() called");
    return 0;
}

/* Exported Object: rVCODEC_OAL_Function_SMP */
extern "C" __attribute__((visibility("default"))) void* rVCODEC_OAL_Function_SMP = NULL;

/* Demangled: H264SwDecMemset */
extern "C" __attribute__((visibility("default"))) int H264SwDecMemset(void) {
    ALOGD("H264SwDecMemset() called");
    return 0;
}

/* Demangled: H264SwDecMemcpy */
extern "C" __attribute__((visibility("default"))) int H264SwDecMemcpy(void) {
    ALOGD("H264SwDecMemcpy() called");
    return 0;
}

/* Demangled: H264DecoderGetCodecRequiredAdapt */
extern "C" __attribute__((visibility("default"))) int H264DecoderGetCodecRequiredAdapt(void) {
    ALOGD("H264DecoderGetCodecRequiredAdapt() called");
    return 0;
}

/* Demangled: H264SwDecGetHeaderInfo */
extern "C" __attribute__((visibility("default"))) int H264SwDecGetHeaderInfo(void) {
    ALOGD("H264SwDecGetHeaderInfo() called");
    return 0;
}

/* Demangled: H264DecoderInitAdapt */
extern "C" __attribute__((visibility("default"))) int H264DecoderInitAdapt(void) {
    ALOGD("H264DecoderInitAdapt() called");
    return 0;
}

/* Demangled: H264SwDecInit */
extern "C" __attribute__((visibility("default"))) int H264SwDecInit(void) {
    ALOGD("H264SwDecInit() called");
    return 0;
}

/* Demangled: H264SwDecGetYUVStatus */
extern "C" __attribute__((visibility("default"))) int H264SwDecGetYUVStatus(void) {
    ALOGD("H264SwDecGetYUVStatus() called");
    return 0;
}

/* Demangled: DebugPrintf */
extern "C" __attribute__((visibility("default"))) int DebugPrintf(void) {
    ALOGD("DebugPrintf() called");
    return 0;
}

/* Demangled: h26decSmartDVFSInit */
extern "C" __attribute__((visibility("default"))) int h26decSmartDVFSInit(void) {
    ALOGD("h26decSmartDVFSInit() called");
    return 0;
}

/* Demangled: H264DecoderOpenAdapt */
extern "C" __attribute__((visibility("default"))) int H264DecoderOpenAdapt(void) {
    ALOGD("H264DecoderOpenAdapt() called");
    return 0;
}

/* Demangled: h264bsdDecode_NAL_Thread */
extern "C" __attribute__((visibility("default"))) int h264bsdDecode_NAL_Thread(void) {
    ALOGD("h264bsdDecode_NAL_Thread() called");
    return 0;
}

/* Demangled: VLD_REC_THREAD_MAIN */
extern "C" __attribute__((visibility("default"))) int VLD_REC_THREAD_MAIN(void) {
    ALOGD("VLD_REC_THREAD_MAIN() called");
    return 0;
}

/* Demangled: h264decSmartDVFSDeinit */
extern "C" __attribute__((visibility("default"))) int h264decSmartDVFSDeinit(void) {
    ALOGD("h264decSmartDVFSDeinit() called");
    return 0;
}

/* Demangled: H264DecoderCloseAdapt */
extern "C" __attribute__((visibility("default"))) int H264DecoderCloseAdapt(void) {
    ALOGD("H264DecoderCloseAdapt() called");
    return 0;
}

/* Demangled: h264ecSmartDVFSChangeFreqLevel */
extern "C" __attribute__((visibility("default"))) int h264ecSmartDVFSChangeFreqLevel(void) {
    ALOGD("h264ecSmartDVFSChangeFreqLevel() called");
    return 0;
}

/* Demangled: H264DecoderGetNextDisplay */
extern "C" __attribute__((visibility("default"))) int H264DecoderGetNextDisplay(void) {
    ALOGD("H264DecoderGetNextDisplay() called");
    return 0;
}

/* Demangled: H264SwDecNextPicture */
extern "C" __attribute__((visibility("default"))) int H264SwDecNextPicture(void) {
    ALOGD("H264SwDecNextPicture() called");
    return 0;
}

/* Demangled: h264bsdDecodeFlushBuffer */
extern "C" __attribute__((visibility("default"))) int h264bsdDecodeFlushBuffer(void) {
    ALOGD("h264bsdDecodeFlushBuffer() called");
    return 0;
}

/* Demangled: H264DecoderStartAdapt */
extern "C" __attribute__((visibility("default"))) int H264DecoderStartAdapt(void) {
    ALOGD("H264DecoderStartAdapt() called");
    return 0;
}

/* Demangled: H264SwDecDecode */
extern "C" __attribute__((visibility("default"))) int H264SwDecDecode(void) {
    ALOGD("H264SwDecDecode() called");
    return 0;
}

/* Demangled: H264SwDecGetInfo */
extern "C" __attribute__((visibility("default"))) int H264SwDecGetInfo(void) {
    ALOGD("H264SwDecGetInfo() called");
    return 0;
}

/* Exported Object: rH264API */
extern "C" __attribute__((visibility("default"))) void* rH264API = NULL;

/* Demangled: GetH264DecoderAPI */
extern "C" __attribute__((visibility("default"))) int GetH264DecoderAPI(void) {
    ALOGD("GetH264DecoderAPI() called");
    return 0;
}

/* Demangled: prof_clock */
extern "C" __attribute__((visibility("default"))) int prof_clock(void) {
    ALOGD("prof_clock() called");
    return 0;
}

/* Demangled: H264SwDecResetAfterFlush */
extern "C" __attribute__((visibility("default"))) int H264SwDecResetAfterFlush(void) {
    ALOGD("H264SwDecResetAfterFlush() called");
    return 0;
}

/* Demangled: h264bsdResetStorage */
extern "C" __attribute__((visibility("default"))) int h264bsdResetStorage(void) {
    ALOGD("h264bsdResetStorage() called");
    return 0;
}

/* Demangled: h264bsdInit */
extern "C" __attribute__((visibility("default"))) int h264bsdInit(void) {
    ALOGD("h264bsdInit() called");
    return 0;
}

/* Demangled: h264bsdPicWidth */
extern "C" __attribute__((visibility("default"))) int h264bsdPicWidth(void) {
    ALOGD("h264bsdPicWidth() called");
    return 0;
}

/* Demangled: h264bsdPicHeight */
extern "C" __attribute__((visibility("default"))) int h264bsdPicHeight(void) {
    ALOGD("h264bsdPicHeight() called");
    return 0;
}

/* Demangled: h264bsdVideoRange */
extern "C" __attribute__((visibility("default"))) int h264bsdVideoRange(void) {
    ALOGD("h264bsdVideoRange() called");
    return 0;
}

/* Demangled: h264bsdMatrixCoefficients */
extern "C" __attribute__((visibility("default"))) int h264bsdMatrixCoefficients(void) {
    ALOGD("h264bsdMatrixCoefficients() called");
    return 0;
}

/* Demangled: h264bsdCroppingParams */
extern "C" __attribute__((visibility("default"))) int h264bsdCroppingParams(void) {
    ALOGD("h264bsdCroppingParams() called");
    return 0;
}

/* Demangled: h264bsdSampleAspectRatio */
extern "C" __attribute__((visibility("default"))) int h264bsdSampleAspectRatio(void) {
    ALOGD("h264bsdSampleAspectRatio() called");
    return 0;
}

/* Demangled: h264bsdProfile */
extern "C" __attribute__((visibility("default"))) int h264bsdProfile(void) {
    ALOGD("h264bsdProfile() called");
    return 0;
}

/* Demangled: h264bsdShutdown */
extern "C" __attribute__((visibility("default"))) int h264bsdShutdown(void) {
    ALOGD("h264bsdShutdown() called");
    return 0;
}

/* Demangled: h264NeonPush */
extern "C" __attribute__((visibility("default"))) int h264NeonPush(void) {
    ALOGD("h264NeonPush() called");
    return 0;
}

/* Demangled: h264bsdDecode */
extern "C" __attribute__((visibility("default"))) int h264bsdDecode(void) {
    ALOGD("h264bsdDecode() called");
    return 0;
}

/* Demangled: h264NeonPop */
extern "C" __attribute__((visibility("default"))) int h264NeonPop(void) {
    ALOGD("h264NeonPop() called");
    return 0;
}

/* Demangled: h264bsdCheckValidParamSets */
extern "C" __attribute__((visibility("default"))) int h264bsdCheckValidParamSets(void) {
    ALOGD("h264bsdCheckValidParamSets() called");
    return 0;
}

/* Demangled: H264SwDecGetAPIVersion */
extern "C" __attribute__((visibility("default"))) int H264SwDecGetAPIVersion(void) {
    ALOGD("H264SwDecGetAPIVersion() called");
    return 0;
}

/* Demangled: h264bsdNextOutputPicture */
extern "C" __attribute__((visibility("default"))) int h264bsdNextOutputPicture(void) {
    ALOGD("h264bsdNextOutputPicture() called");
    return 0;
}

/* Demangled: h264bsdFlushBuffer */
extern "C" __attribute__((visibility("default"))) int h264bsdFlushBuffer(void) {
    ALOGD("h264bsdFlushBuffer() called");
    return 0;
}

/* Demangled: h264bsdResetDpb */
extern "C" __attribute__((visibility("default"))) int h264bsdResetDpb(void) {
    ALOGD("h264bsdResetDpb() called");
    return 0;
}

/* Demangled: InitNeighbourAfterResetDpb */
extern "C" __attribute__((visibility("default"))) int InitNeighbourAfterResetDpb(void) {
    ALOGD("InitNeighbourAfterResetDpb() called");
    return 0;
}

/* Demangled: h264bsdExtractNalUnit2 */
extern "C" __attribute__((visibility("default"))) int h264bsdExtractNalUnit2(void) {
    ALOGD("h264bsdExtractNalUnit2() called");
    return 0;
}

/* Demangled: h264bsdStrmInit */
extern "C" __attribute__((visibility("default"))) int h264bsdStrmInit(void) {
    ALOGD("h264bsdStrmInit() called");
    return 0;
}

/* Demangled: h264bsdDecodeNalUnit */
extern "C" __attribute__((visibility("default"))) int h264bsdDecodeNalUnit(void) {
    ALOGD("h264bsdDecodeNalUnit() called");
    return 0;
}

/* Demangled: h264bsdDecodeSeqParamSetWidthHeight */
extern "C" __attribute__((visibility("default"))) int h264bsdDecodeSeqParamSetWidthHeight(void) {
    ALOGD("h264bsdDecodeSeqParamSetWidthHeight() called");
    return 0;
}

/* Demangled: h264bsdDecodePicParamPartial */
extern "C" __attribute__((visibility("default"))) int h264bsdDecodePicParamPartial(void) {
    ALOGD("h264bsdDecodePicParamPartial() called");
    return 0;
}

/* Demangled: h264bsdDecodeCheckFieldPicFlag */
extern "C" __attribute__((visibility("default"))) int h264bsdDecodeCheckFieldPicFlag(void) {
    ALOGD("h264bsdDecodeCheckFieldPicFlag() called");
    return 0;
}

/* Exported Object: H264_qaulity_tab */
extern "C" __attribute__((visibility("default"))) void* H264_qaulity_tab = NULL;

/* Exported Object: H264_Factor_Rn */
extern "C" __attribute__((visibility("default"))) void* H264_Factor_Rn = NULL;

/* Exported Object: tv1 */
extern "C" __attribute__((visibility("default"))) void* tv1 = NULL;

/* Exported Object: mb_idx */
extern "C" __attribute__((visibility("default"))) void* mb_idx = NULL;

/* Exported Object: frame_idx */
extern "C" __attribute__((visibility("default"))) void* frame_idx = NULL;

/* Demangled: _libh264dec_asm_se_5BD57C6EF6E665A1B700D0CCC7FA7E5FC6A04DFB12EA511C9583D4E4114B7183 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_5BD57C6EF6E665A1B700D0CCC7FA7E5FC6A04DFB12EA511C9583D4E4114B7183(void) {
    ALOGD("_libh264dec_asm_se_5BD57C6EF6E665A1B700D0CCC7FA7E5FC6A04DFB12EA511C9583D4E4114B7183() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_C6EDD5989C73CB96C73541DD94DDB993125CC07CF9DA2A16FADD2CF2BE035553 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_C6EDD5989C73CB96C73541DD94DDB993125CC07CF9DA2A16FADD2CF2BE035553(void) {
    ALOGD("_libh264dec_asm_se_C6EDD5989C73CB96C73541DD94DDB993125CC07CF9DA2A16FADD2CF2BE035553() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_2F9258AF381457398F54CF0D100DDA19C6FFD984639B070770FC663CC15E1251 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_2F9258AF381457398F54CF0D100DDA19C6FFD984639B070770FC663CC15E1251(void) {
    ALOGD("_libh264dec_asm_se_2F9258AF381457398F54CF0D100DDA19C6FFD984639B070770FC663CC15E1251() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_017E273A2D5F2E42105666D559BF3C26B91F1020734106F6A754BA44C3D662DE */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_017E273A2D5F2E42105666D559BF3C26B91F1020734106F6A754BA44C3D662DE(void) {
    ALOGD("_libh264dec_asm_se_017E273A2D5F2E42105666D559BF3C26B91F1020734106F6A754BA44C3D662DE() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_0E0ECECADC0B8E0549ECC0393CE2AC9E */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_0E0ECECADC0B8E0549ECC0393CE2AC9E(void) {
    ALOGD("_libh264dec_asm_se_0E0ECECADC0B8E0549ECC0393CE2AC9E() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_25C6E9A8845D6D42429C0D5124C1AEE9490C2CD5905FC0E925A98DB0324EA2EB */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_25C6E9A8845D6D42429C0D5124C1AEE9490C2CD5905FC0E925A98DB0324EA2EB(void) {
    ALOGD("_libh264dec_asm_se_25C6E9A8845D6D42429C0D5124C1AEE9490C2CD5905FC0E925A98DB0324EA2EB() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_150BE6F08523712F136DEBC1B343705AF58B3FFD7A706DDF178A825178AFCAD3 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_150BE6F08523712F136DEBC1B343705AF58B3FFD7A706DDF178A825178AFCAD3(void) {
    ALOGD("_libh264dec_asm_se_150BE6F08523712F136DEBC1B343705AF58B3FFD7A706DDF178A825178AFCAD3() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_ACD4D2CC6E87C86B9667A48AB4B2B6BB15535FC37156A5CDD51480CB97E99D25 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_ACD4D2CC6E87C86B9667A48AB4B2B6BB15535FC37156A5CDD51480CB97E99D25(void) {
    ALOGD("_libh264dec_asm_se_ACD4D2CC6E87C86B9667A48AB4B2B6BB15535FC37156A5CDD51480CB97E99D25() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_FFF69D1848A9B510C80C67D1E18A2A9850A8C91216829FEDAF3203FE5F0B7AE4 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_FFF69D1848A9B510C80C67D1E18A2A9850A8C91216829FEDAF3203FE5F0B7AE4(void) {
    ALOGD("_libh264dec_asm_se_FFF69D1848A9B510C80C67D1E18A2A9850A8C91216829FEDAF3203FE5F0B7AE4() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_3B1B7FED5F90CC2DCA3EF432152D8EDAF993EE53E404C1D232DDFA69D6F49996 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_3B1B7FED5F90CC2DCA3EF432152D8EDAF993EE53E404C1D232DDFA69D6F49996(void) {
    ALOGD("_libh264dec_asm_se_3B1B7FED5F90CC2DCA3EF432152D8EDAF993EE53E404C1D232DDFA69D6F49996() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_CFFB1A79C1F91A655B02EACD0DA7E3F59290E23A2741EC3E5A367C7D7AEEEA93 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_CFFB1A79C1F91A655B02EACD0DA7E3F59290E23A2741EC3E5A367C7D7AEEEA93(void) {
    ALOGD("_libh264dec_asm_se_CFFB1A79C1F91A655B02EACD0DA7E3F59290E23A2741EC3E5A367C7D7AEEEA93() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_E9FAF8FE74D24F5CB86B1E6575E62BEE05C0694BD27CED52103B976BCC541B0A */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_E9FAF8FE74D24F5CB86B1E6575E62BEE05C0694BD27CED52103B976BCC541B0A(void) {
    ALOGD("_libh264dec_asm_se_E9FAF8FE74D24F5CB86B1E6575E62BEE05C0694BD27CED52103B976BCC541B0A() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_921FEBE466F303B5B96598ABA060EF05 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_921FEBE466F303B5B96598ABA060EF05(void) {
    ALOGD("_libh264dec_asm_se_921FEBE466F303B5B96598ABA060EF05() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_AF6D4775A6597DEC84B14444B6C304AD */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_AF6D4775A6597DEC84B14444B6C304AD(void) {
    ALOGD("_libh264dec_asm_se_AF6D4775A6597DEC84B14444B6C304AD() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_323EAAFFAEED4C2EDF268C0C8C821164EFDA1487DA7E37A1ABEEBF7A3D4D6447 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_323EAAFFAEED4C2EDF268C0C8C821164EFDA1487DA7E37A1ABEEBF7A3D4D6447(void) {
    ALOGD("_libh264dec_asm_se_323EAAFFAEED4C2EDF268C0C8C821164EFDA1487DA7E37A1ABEEBF7A3D4D6447() called");
    return 0;
}

/* Demangled: h264bsdExtractNalUnit */
extern "C" __attribute__((visibility("default"))) int h264bsdExtractNalUnit(void) {
    ALOGD("h264bsdExtractNalUnit() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_6684296201A5E3A39B3D2CE43FAE50BD */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_6684296201A5E3A39B3D2CE43FAE50BD(void) {
    ALOGD("_libh264dec_asm_se_6684296201A5E3A39B3D2CE43FAE50BD() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_AA3C543F1BB9CA0160B4B914D4601D38 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_AA3C543F1BB9CA0160B4B914D4601D38(void) {
    ALOGD("_libh264dec_asm_se_AA3C543F1BB9CA0160B4B914D4601D38() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_E8A76477C5294EC006F6C8D99DB8D2CE */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_E8A76477C5294EC006F6C8D99DB8D2CE(void) {
    ALOGD("_libh264dec_asm_se_E8A76477C5294EC006F6C8D99DB8D2CE() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_51DF7FA08B48969493B6F576CDEDEF4E */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_51DF7FA08B48969493B6F576CDEDEF4E(void) {
    ALOGD("_libh264dec_asm_se_51DF7FA08B48969493B6F576CDEDEF4E() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_19644115DA108D413CC9F280D3534F24ABA722B0F7369947E1ECE410498219B2 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_19644115DA108D413CC9F280D3534F24ABA722B0F7369947E1ECE410498219B2(void) {
    ALOGD("_libh264dec_asm_se_19644115DA108D413CC9F280D3534F24ABA722B0F7369947E1ECE410498219B2() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_3B4A34517B2C813D238797B69BAA117C033F3D90096B88F1AE159C64EBFB895E */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_3B4A34517B2C813D238797B69BAA117C033F3D90096B88F1AE159C64EBFB895E(void) {
    ALOGD("_libh264dec_asm_se_3B4A34517B2C813D238797B69BAA117C033F3D90096B88F1AE159C64EBFB895E() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_BC00B3E2DD5682A1E0A2A2A4CCF3A7A2AD494FE188F51EAD1120985866E6B58C */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_BC00B3E2DD5682A1E0A2A2A4CCF3A7A2AD494FE188F51EAD1120985866E6B58C(void) {
    ALOGD("_libh264dec_asm_se_BC00B3E2DD5682A1E0A2A2A4CCF3A7A2AD494FE188F51EAD1120985866E6B58C() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_3DD2B2B343FB7E55301379713732A6AE9209CBD0FE0CEB00EE9502DA230DA9F3 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_3DD2B2B343FB7E55301379713732A6AE9209CBD0FE0CEB00EE9502DA230DA9F3(void) {
    ALOGD("_libh264dec_asm_se_3DD2B2B343FB7E55301379713732A6AE9209CBD0FE0CEB00EE9502DA230DA9F3() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_7E7F17EDBA22739E786D1D99C1472CB519D786CADCAC8C50760468F92B85E36DF994B152BE6E589036B9CCFD33D6FEE0 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_7E7F17EDBA22739E786D1D99C1472CB519D786CADCAC8C50760468F92B85E36DF994B152BE6E589036B9CCFD33D6FEE0(void) {
    ALOGD("_libh264dec_asm_se_7E7F17EDBA22739E786D1D99C1472CB519D786CADCAC8C50760468F92B85E36DF994B152BE6E589036B9CCFD33D6FEE0() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_7E7F17EDBA22739E786D1D99C1472CB565F4ABB2F3BE29B765FCDB06484EC154BF444003AE535EAA8BE314908F82B8E2 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_7E7F17EDBA22739E786D1D99C1472CB565F4ABB2F3BE29B765FCDB06484EC154BF444003AE535EAA8BE314908F82B8E2(void) {
    ALOGD("_libh264dec_asm_se_7E7F17EDBA22739E786D1D99C1472CB565F4ABB2F3BE29B765FCDB06484EC154BF444003AE535EAA8BE314908F82B8E2() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_7E7F17EDBA22739E786D1D99C1472CB50FAF22D5E71EEBF7BD1CAD90A7AF9A92EDB3106978895697786A4B76E9B8F5A3 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_7E7F17EDBA22739E786D1D99C1472CB50FAF22D5E71EEBF7BD1CAD90A7AF9A92EDB3106978895697786A4B76E9B8F5A3(void) {
    ALOGD("_libh264dec_asm_se_7E7F17EDBA22739E786D1D99C1472CB50FAF22D5E71EEBF7BD1CAD90A7AF9A92EDB3106978895697786A4B76E9B8F5A3() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_FF2EC0E3C05D83591CB3C9A2A9E0AF1F */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_FF2EC0E3C05D83591CB3C9A2A9E0AF1F(void) {
    ALOGD("_libh264dec_asm_se_FF2EC0E3C05D83591CB3C9A2A9E0AF1F() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_59F5704FB7B3D8B4A14859435D0FDABE */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_59F5704FB7B3D8B4A14859435D0FDABE(void) {
    ALOGD("_libh264dec_asm_se_59F5704FB7B3D8B4A14859435D0FDABE() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_6C9D4CDA3069ADE0B468B852FF7613D6 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_6C9D4CDA3069ADE0B468B852FF7613D6(void) {
    ALOGD("_libh264dec_asm_se_6C9D4CDA3069ADE0B468B852FF7613D6() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_4DD7C2BF29DE064BB6AA138DA00B28583FE5913298A84FF303A364E32F7D9559B59FE97E843E0FAC90FF44168BC95139 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_4DD7C2BF29DE064BB6AA138DA00B28583FE5913298A84FF303A364E32F7D9559B59FE97E843E0FAC90FF44168BC95139(void) {
    ALOGD("_libh264dec_asm_se_4DD7C2BF29DE064BB6AA138DA00B28583FE5913298A84FF303A364E32F7D9559B59FE97E843E0FAC90FF44168BC95139() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_4DD7C2BF29DE064BB6AA138DA00B2858C6BBCE3FEFE52CE9EEBDCBD844DFDB04 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_4DD7C2BF29DE064BB6AA138DA00B2858C6BBCE3FEFE52CE9EEBDCBD844DFDB04(void) {
    ALOGD("_libh264dec_asm_se_4DD7C2BF29DE064BB6AA138DA00B2858C6BBCE3FEFE52CE9EEBDCBD844DFDB04() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_C4CBAA87D50D71DEC679D37D7B339CC1004A2C0D99F039D54A822C9C1B2E12DC */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_C4CBAA87D50D71DEC679D37D7B339CC1004A2C0D99F039D54A822C9C1B2E12DC(void) {
    ALOGD("_libh264dec_asm_se_C4CBAA87D50D71DEC679D37D7B339CC1004A2C0D99F039D54A822C9C1B2E12DC() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_C35552BB1D8CDD79784C8C93ABEDE204FC5E73F407CB2209F4B1E84C41ED3AD3 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_C35552BB1D8CDD79784C8C93ABEDE204FC5E73F407CB2209F4B1E84C41ED3AD3(void) {
    ALOGD("_libh264dec_asm_se_C35552BB1D8CDD79784C8C93ABEDE204FC5E73F407CB2209F4B1E84C41ED3AD3() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_C66E42307518332E0D682730923CFA4F */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_C66E42307518332E0D682730923CFA4F(void) {
    ALOGD("_libh264dec_asm_se_C66E42307518332E0D682730923CFA4F() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_3C7FE2440A2B473DC4AEF3B9FACB789D068F904C75996652C51B2C8AB2F88218 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_3C7FE2440A2B473DC4AEF3B9FACB789D068F904C75996652C51B2C8AB2F88218(void) {
    ALOGD("_libh264dec_asm_se_3C7FE2440A2B473DC4AEF3B9FACB789D068F904C75996652C51B2C8AB2F88218() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_C35552BB1D8CDD79784C8C93ABEDE204D45700D3143DEEAF3B99B21C350FA210 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_C35552BB1D8CDD79784C8C93ABEDE204D45700D3143DEEAF3B99B21C350FA210(void) {
    ALOGD("_libh264dec_asm_se_C35552BB1D8CDD79784C8C93ABEDE204D45700D3143DEEAF3B99B21C350FA210() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_67558465B38E4F6D8A2E4813CC0C5FE5CED6065E903597175DCCEF49F18DB124 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_67558465B38E4F6D8A2E4813CC0C5FE5CED6065E903597175DCCEF49F18DB124(void) {
    ALOGD("_libh264dec_asm_se_67558465B38E4F6D8A2E4813CC0C5FE5CED6065E903597175DCCEF49F18DB124() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_F887E687A8BF0E8E224ABD985684645B */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_F887E687A8BF0E8E224ABD985684645B(void) {
    ALOGD("_libh264dec_asm_se_F887E687A8BF0E8E224ABD985684645B() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_C35552BB1D8CDD79784C8C93ABEDE20429C5980070E862674C9114CA78324F8ADF0BCA579CCD4C6AA7B7A76B29EB9961 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_C35552BB1D8CDD79784C8C93ABEDE20429C5980070E862674C9114CA78324F8ADF0BCA579CCD4C6AA7B7A76B29EB9961(void) {
    ALOGD("_libh264dec_asm_se_C35552BB1D8CDD79784C8C93ABEDE20429C5980070E862674C9114CA78324F8ADF0BCA579CCD4C6AA7B7A76B29EB9961() called");
    return 0;
}

/* Exported Object: mv_count_in_mv_list_index */
extern "C" __attribute__((visibility("default"))) void* mv_count_in_mv_list_index = NULL;

/* Exported Object: MbPartPredMode */
extern "C" __attribute__((visibility("default"))) void* MbPartPredMode = NULL;

/* Exported Object: NumMbPartTbl */
extern "C" __attribute__((visibility("default"))) void* NumMbPartTbl = NULL;

/* Demangled: _libh264dec_asm_se_7AC44E04661DA361A04B89253E2BE817D45700D3143DEEAF3B99B21C350FA210 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_7AC44E04661DA361A04B89253E2BE817D45700D3143DEEAF3B99B21C350FA210(void) {
    ALOGD("_libh264dec_asm_se_7AC44E04661DA361A04B89253E2BE817D45700D3143DEEAF3B99B21C350FA210() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_46513CFFB01FD2548937B6817C1D8B11E988DF5C43D448A5737386103B09851D */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_46513CFFB01FD2548937B6817C1D8B11E988DF5C43D448A5737386103B09851D(void) {
    ALOGD("_libh264dec_asm_se_46513CFFB01FD2548937B6817C1D8B11E988DF5C43D448A5737386103B09851D() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_7F812E09942D0DB19CE7A4C1BE3A26655FA14F188A3925A05AA1E31DE936B873 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_7F812E09942D0DB19CE7A4C1BE3A26655FA14F188A3925A05AA1E31DE936B873(void) {
    ALOGD("_libh264dec_asm_se_7F812E09942D0DB19CE7A4C1BE3A26655FA14F188A3925A05AA1E31DE936B873() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_92ACF0ADD891107367E2E8AC5CA05806 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_92ACF0ADD891107367E2E8AC5CA05806(void) {
    ALOGD("_libh264dec_asm_se_92ACF0ADD891107367E2E8AC5CA05806() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_F70D8244091636670354598A8093AA22 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_F70D8244091636670354598A8093AA22(void) {
    ALOGD("_libh264dec_asm_se_F70D8244091636670354598A8093AA22() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_7E7F17EDBA22739E786D1D99C1472CB52CEBDAE583968CC7A2DDC7D0A92589F0EDB3106978895697786A4B76E9B8F5A3 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_7E7F17EDBA22739E786D1D99C1472CB52CEBDAE583968CC7A2DDC7D0A92589F0EDB3106978895697786A4B76E9B8F5A3(void) {
    ALOGD("_libh264dec_asm_se_7E7F17EDBA22739E786D1D99C1472CB52CEBDAE583968CC7A2DDC7D0A92589F0EDB3106978895697786A4B76E9B8F5A3() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_7E7F17EDBA22739E786D1D99C1472CB54259D5D7DF828A1A81FD50F370870D17 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_7E7F17EDBA22739E786D1D99C1472CB54259D5D7DF828A1A81FD50F370870D17(void) {
    ALOGD("_libh264dec_asm_se_7E7F17EDBA22739E786D1D99C1472CB54259D5D7DF828A1A81FD50F370870D17() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_7E7F17EDBA22739E786D1D99C1472CB5351AC1DF2AA6BF138B46C76D7B86D61A */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_7E7F17EDBA22739E786D1D99C1472CB5351AC1DF2AA6BF138B46C76D7B86D61A(void) {
    ALOGD("_libh264dec_asm_se_7E7F17EDBA22739E786D1D99C1472CB5351AC1DF2AA6BF138B46C76D7B86D61A() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_9B39176A0D561FF3FC0F2F3F0BB97A07ED5BE7AAE775F656C28B7EB18D438394 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_9B39176A0D561FF3FC0F2F3F0BB97A07ED5BE7AAE775F656C28B7EB18D438394(void) {
    ALOGD("_libh264dec_asm_se_9B39176A0D561FF3FC0F2F3F0BB97A07ED5BE7AAE775F656C28B7EB18D438394() called");
    return 0;
}

/* Exported Object: N_A_4x4B */
extern "C" __attribute__((visibility("default"))) void* N_A_4x4B = NULL;

/* Exported Object: N_B_4x4B */
extern "C" __attribute__((visibility("default"))) void* N_B_4x4B = NULL;

/* Exported Object: neighbor_idx_2_xy */
extern "C" __attribute__((visibility("default"))) void* neighbor_idx_2_xy = NULL;

/* Exported Object: neighour_Cb */
extern "C" __attribute__((visibility("default"))) void* neighour_Cb = NULL;

/* Exported Object: neighour_Cr */
extern "C" __attribute__((visibility("default"))) void* neighour_Cr = NULL;

/* Exported Object: neighour_Lu */
extern "C" __attribute__((visibility("default"))) void* neighour_Lu = NULL;

/* Exported Object: block_idx_2_xy */
extern "C" __attribute__((visibility("default"))) void* block_idx_2_xy = NULL;

/* Demangled: _libh264dec_asm_se_92457B140AFFEFA4EE0F70FCF7A652E3 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_92457B140AFFEFA4EE0F70FCF7A652E3(void) {
    ALOGD("_libh264dec_asm_se_92457B140AFFEFA4EE0F70FCF7A652E3() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_A5D420D437D4DD6A455C79007F58F01D */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_A5D420D437D4DD6A455C79007F58F01D(void) {
    ALOGD("_libh264dec_asm_se_A5D420D437D4DD6A455C79007F58F01D() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_7081CED1875C1CEDAB264F95CE59AB40 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_7081CED1875C1CEDAB264F95CE59AB40(void) {
    ALOGD("_libh264dec_asm_se_7081CED1875C1CEDAB264F95CE59AB40() called");
    return 0;
}

/* Exported Object: idctmask64 */
extern "C" __attribute__((visibility("default"))) void* idctmask64 = NULL;

/* Exported Object: idctmask16 */
extern "C" __attribute__((visibility("default"))) void* idctmask16 = NULL;

/* Demangled: _libh264dec_asm_se_F4E74BDFCEAD838DE7AE40A54095E8E9 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_F4E74BDFCEAD838DE7AE40A54095E8E9(void) {
    ALOGD("_libh264dec_asm_se_F4E74BDFCEAD838DE7AE40A54095E8E9() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_076A4FC1FABD807AA96A9DB651831535 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_076A4FC1FABD807AA96A9DB651831535(void) {
    ALOGD("_libh264dec_asm_se_076A4FC1FABD807AA96A9DB651831535() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_179237B347D9A0CB0426234647E10C3362EB33484DAC7C4DFBDCA38043E0C3E7 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_179237B347D9A0CB0426234647E10C3362EB33484DAC7C4DFBDCA38043E0C3E7(void) {
    ALOGD("_libh264dec_asm_se_179237B347D9A0CB0426234647E10C3362EB33484DAC7C4DFBDCA38043E0C3E7() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_2AC4847F39014FD8EAC97A778E3A4EF3 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_2AC4847F39014FD8EAC97A778E3A4EF3(void) {
    ALOGD("_libh264dec_asm_se_2AC4847F39014FD8EAC97A778E3A4EF3() called");
    return 0;
}

/* Exported Object: scan */
extern "C" __attribute__((visibility("default"))) void* scan = NULL;

/* Demangled: _libh264dec_asm_se_179237B347D9A0CB0426234647E10C3362D5E2327004F443636A4CB1D5FCFCF0 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_179237B347D9A0CB0426234647E10C3362D5E2327004F443636A4CB1D5FCFCF0(void) {
    ALOGD("_libh264dec_asm_se_179237B347D9A0CB0426234647E10C3362D5E2327004F443636A4CB1D5FCFCF0() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_4B479E61C02251DCC3EFBBE196554E40114D90B3734D91E91D9E406233679D0D */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_4B479E61C02251DCC3EFBBE196554E40114D90B3734D91E91D9E406233679D0D(void) {
    ALOGD("_libh264dec_asm_se_4B479E61C02251DCC3EFBBE196554E40114D90B3734D91E91D9E406233679D0D() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_179237B347D9A0CB0426234647E10C336DA16B20864DB8BA1C9E3E51D08736A5 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_179237B347D9A0CB0426234647E10C336DA16B20864DB8BA1C9E3E51D08736A5(void) {
    ALOGD("_libh264dec_asm_se_179237B347D9A0CB0426234647E10C336DA16B20864DB8BA1C9E3E51D08736A5() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_179237B347D9A0CB0426234647E10C33AADCA972730986032A1BBBC34A76404E */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_179237B347D9A0CB0426234647E10C33AADCA972730986032A1BBBC34A76404E(void) {
    ALOGD("_libh264dec_asm_se_179237B347D9A0CB0426234647E10C33AADCA972730986032A1BBBC34A76404E() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_179237B347D9A0CB0426234647E10C3358C8E1C792F31073308E8423BDEAEEF4 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_179237B347D9A0CB0426234647E10C3358C8E1C792F31073308E8423BDEAEEF4(void) {
    ALOGD("_libh264dec_asm_se_179237B347D9A0CB0426234647E10C3358C8E1C792F31073308E8423BDEAEEF4() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_CDBFF54545C8F54E067CB6A55093291E */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_CDBFF54545C8F54E067CB6A55093291E(void) {
    ALOGD("_libh264dec_asm_se_CDBFF54545C8F54E067CB6A55093291E() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_1B19AFB5F6A5664827600EC5DEA27D865CAF2CB56D19081F649B61774BE8C938 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_1B19AFB5F6A5664827600EC5DEA27D865CAF2CB56D19081F649B61774BE8C938(void) {
    ALOGD("_libh264dec_asm_se_1B19AFB5F6A5664827600EC5DEA27D865CAF2CB56D19081F649B61774BE8C938() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_179237B347D9A0CB0426234647E10C3393F171B3861C1CF541B9C4AFAAF1D321 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_179237B347D9A0CB0426234647E10C3393F171B3861C1CF541B9C4AFAAF1D321(void) {
    ALOGD("_libh264dec_asm_se_179237B347D9A0CB0426234647E10C3393F171B3861C1CF541B9C4AFAAF1D321() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_179237B347D9A0CB0426234647E10C33DED96D0CBFC662499268F62E0AB3A2A0 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_179237B347D9A0CB0426234647E10C33DED96D0CBFC662499268F62E0AB3A2A0(void) {
    ALOGD("_libh264dec_asm_se_179237B347D9A0CB0426234647E10C33DED96D0CBFC662499268F62E0AB3A2A0() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_1E4D86AD544F5F5D261A8B27E0FF84AA70B5A88F2A6DEB1595030FB9C6E47061 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_1E4D86AD544F5F5D261A8B27E0FF84AA70B5A88F2A6DEB1595030FB9C6E47061(void) {
    ALOGD("_libh264dec_asm_se_1E4D86AD544F5F5D261A8B27E0FF84AA70B5A88F2A6DEB1595030FB9C6E47061() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_9EB0B4771AC6C67D0BC2B71BF711B1E0033F3D90096B88F1AE159C64EBFB895E */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_9EB0B4771AC6C67D0BC2B71BF711B1E0033F3D90096B88F1AE159C64EBFB895E(void) {
    ALOGD("_libh264dec_asm_se_9EB0B4771AC6C67D0BC2B71BF711B1E0033F3D90096B88F1AE159C64EBFB895E() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_2AD70970C9DB89CA5D922AA50FD42384 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_2AD70970C9DB89CA5D922AA50FD42384(void) {
    ALOGD("_libh264dec_asm_se_2AD70970C9DB89CA5D922AA50FD42384() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_C4CBAA87D50D71DEC679D37D7B339CC1357002D3A460D61C620CE2EE3E98301B */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_C4CBAA87D50D71DEC679D37D7B339CC1357002D3A460D61C620CE2EE3E98301B(void) {
    ALOGD("_libh264dec_asm_se_C4CBAA87D50D71DEC679D37D7B339CC1357002D3A460D61C620CE2EE3E98301B() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_C4CBAA87D50D71DEC679D37D7B339CC172CCFAAB223BEAC4F3A93CE202D8A2F4 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_C4CBAA87D50D71DEC679D37D7B339CC172CCFAAB223BEAC4F3A93CE202D8A2F4(void) {
    ALOGD("_libh264dec_asm_se_C4CBAA87D50D71DEC679D37D7B339CC172CCFAAB223BEAC4F3A93CE202D8A2F4() called");
    return 0;
}

/* Exported Object: b_mbPartPredMode_offset */
extern "C" __attribute__((visibility("default"))) void* b_mbPartPredMode_offset = NULL;

/* Demangled: _libh264dec_asm_se_B5917591E3677CE3BA8599AA1B3A0AF7 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_B5917591E3677CE3BA8599AA1B3A0AF7(void) {
    ALOGD("_libh264dec_asm_se_B5917591E3677CE3BA8599AA1B3A0AF7() called");
    return 0;
}

/* Exported Object: b_SubMbPartPredMode_offset */
extern "C" __attribute__((visibility("default"))) void* b_SubMbPartPredMode_offset = NULL;

/* Exported Object: NumSubMbPartTbl */
extern "C" __attribute__((visibility("default"))) void* NumSubMbPartTbl = NULL;

/* Demangled: _libh264dec_asm_se_C4CBAA87D50D71DEC679D37D7B339CC195BD91C41F7BACC2D2C3B377E63638DD */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_C4CBAA87D50D71DEC679D37D7B339CC195BD91C41F7BACC2D2C3B377E63638DD(void) {
    ALOGD("_libh264dec_asm_se_C4CBAA87D50D71DEC679D37D7B339CC195BD91C41F7BACC2D2C3B377E63638DD() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_1B36A1F9ADE18FF67657D6D45CA31430F72B012314FC50EED5A0F33156A7A12A */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_1B36A1F9ADE18FF67657D6D45CA31430F72B012314FC50EED5A0F33156A7A12A(void) {
    ALOGD("_libh264dec_asm_se_1B36A1F9ADE18FF67657D6D45CA31430F72B012314FC50EED5A0F33156A7A12A() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_1FE86B8E37E951CDC0F6E3E760BFF2F28BC8F1BDF2CD3FCA3A9B1A8E4C77755C */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_1FE86B8E37E951CDC0F6E3E760BFF2F28BC8F1BDF2CD3FCA3A9B1A8E4C77755C(void) {
    ALOGD("_libh264dec_asm_se_1FE86B8E37E951CDC0F6E3E760BFF2F28BC8F1BDF2CD3FCA3A9B1A8E4C77755C() called");
    return 0;
}

/* Exported Object: iTblValLt5 */
extern "C" __attribute__((visibility("default"))) void* iTblValLt5 = NULL;

/* Exported Object: iTblValGe5 */
extern "C" __attribute__((visibility("default"))) void* iTblValGe5 = NULL;

/* Exported Object: CbpIntra16x16 */
extern "C" __attribute__((visibility("default"))) void* CbpIntra16x16 = NULL;

/* Exported Object: DetermineMBLAYER_NCPTR */
extern "C" __attribute__((visibility("default"))) void* DetermineMBLAYER_NCPTR = NULL;

/* Demangled: _libh264dec_asm_se_F5025570CB33C7A8D5C423204E978E2AF27AE8185601C3ED9D8FD7A3438ABE50 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_F5025570CB33C7A8D5C423204E978E2AF27AE8185601C3ED9D8FD7A3438ABE50(void) {
    ALOGD("_libh264dec_asm_se_F5025570CB33C7A8D5C423204E978E2AF27AE8185601C3ED9D8FD7A3438ABE50() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_9B9738CBDF208698E9AB49E533F8D244B6B4A62765C65A2AC55E395D28D2D965 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_9B9738CBDF208698E9AB49E533F8D244B6B4A62765C65A2AC55E395D28D2D965(void) {
    ALOGD("_libh264dec_asm_se_9B9738CBDF208698E9AB49E533F8D244B6B4A62765C65A2AC55E395D28D2D965() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_B452E07384E2E097BE37C4191BF7A5693EFC139D218BA237DAB32EF9801AAF55 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_B452E07384E2E097BE37C4191BF7A5693EFC139D218BA237DAB32EF9801AAF55(void) {
    ALOGD("_libh264dec_asm_se_B452E07384E2E097BE37C4191BF7A5693EFC139D218BA237DAB32EF9801AAF55() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_B802DFABE61D0F328AED20B177D092C4 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_B802DFABE61D0F328AED20B177D092C4(void) {
    ALOGD("_libh264dec_asm_se_B802DFABE61D0F328AED20B177D092C4() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_160A6B3F3583EF1874564C0D8F79FFD1CFD0105126EAD2F9C8201DCCD9831BA4 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_160A6B3F3583EF1874564C0D8F79FFD1CFD0105126EAD2F9C8201DCCD9831BA4(void) {
    ALOGD("_libh264dec_asm_se_160A6B3F3583EF1874564C0D8F79FFD1CFD0105126EAD2F9C8201DCCD9831BA4() called");
    return 0;
}

/* Exported Object: neighour_refIdx */
extern "C" __attribute__((visibility("default"))) void* neighour_refIdx = NULL;

/* Exported Object: neighour_mvd */
extern "C" __attribute__((visibility("default"))) void* neighour_mvd = NULL;

/* Demangled: _libh264dec_asm_se_B452E07384E2E097BE37C4191BF7A569F27AE8185601C3ED9D8FD7A3438ABE50 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_B452E07384E2E097BE37C4191BF7A569F27AE8185601C3ED9D8FD7A3438ABE50(void) {
    ALOGD("_libh264dec_asm_se_B452E07384E2E097BE37C4191BF7A569F27AE8185601C3ED9D8FD7A3438ABE50() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_7E302518F40CC6993FD875412D96B8BCC4C801867A5E2696D139232402CAB436 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_7E302518F40CC6993FD875412D96B8BCC4C801867A5E2696D139232402CAB436(void) {
    ALOGD("_libh264dec_asm_se_7E302518F40CC6993FD875412D96B8BCC4C801867A5E2696D139232402CAB436() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_1D0C969E5ABDF07E7C1EE4413EF85258C4C801867A5E2696D139232402CAB436 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_1D0C969E5ABDF07E7C1EE4413EF85258C4C801867A5E2696D139232402CAB436(void) {
    ALOGD("_libh264dec_asm_se_1D0C969E5ABDF07E7C1EE4413EF85258C4C801867A5E2696D139232402CAB436() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_F2B11E8A7BE69CB14FDE47AA38F30B25C4C801867A5E2696D139232402CAB436 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_F2B11E8A7BE69CB14FDE47AA38F30B25C4C801867A5E2696D139232402CAB436(void) {
    ALOGD("_libh264dec_asm_se_F2B11E8A7BE69CB14FDE47AA38F30B25C4C801867A5E2696D139232402CAB436() called");
    return 0;
}

/* Exported Object: SubMbPartModeTbl */
extern "C" __attribute__((visibility("default"))) void* SubMbPartModeTbl = NULL;

/* Demangled: _libh264dec_asm_se_7E302518F40CC6993FD875412D96B8BC1B00C9EADF1215D646318D189C39C087 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_7E302518F40CC6993FD875412D96B8BC1B00C9EADF1215D646318D189C39C087(void) {
    ALOGD("_libh264dec_asm_se_7E302518F40CC6993FD875412D96B8BC1B00C9EADF1215D646318D189C39C087() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_4B9E3EB28EFBD10086643B3673EF8B6EAB4571DDCB2928C15014C542367128C2 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_4B9E3EB28EFBD10086643B3673EF8B6EAB4571DDCB2928C15014C542367128C2(void) {
    ALOGD("_libh264dec_asm_se_4B9E3EB28EFBD10086643B3673EF8B6EAB4571DDCB2928C15014C542367128C2() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_4DD7C2BF29DE064BB6AA138DA00B2858EF16FAF2C4C8EF4B596C7BDD53FEE4B4 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_4DD7C2BF29DE064BB6AA138DA00B2858EF16FAF2C4C8EF4B596C7BDD53FEE4B4(void) {
    ALOGD("_libh264dec_asm_se_4DD7C2BF29DE064BB6AA138DA00B2858EF16FAF2C4C8EF4B596C7BDD53FEE4B4() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_2BFA575DB50814EF4AFEC8BE9F1B4D36FD7C8FDEB777A69AA3323491A18AED07 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_2BFA575DB50814EF4AFEC8BE9F1B4D36FD7C8FDEB777A69AA3323491A18AED07(void) {
    ALOGD("_libh264dec_asm_se_2BFA575DB50814EF4AFEC8BE9F1B4D36FD7C8FDEB777A69AA3323491A18AED07() called");
    return 0;
}

/* Exported Object: DetermineMBLAYER_NCPTR_CABAC */
extern "C" __attribute__((visibility("default"))) void* DetermineMBLAYER_NCPTR_CABAC = NULL;

/* Demangled: _libh264dec_asm_se_FF9213658C836A13F34B7E1098B256F1AB4571DDCB2928C15014C542367128C2 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_FF9213658C836A13F34B7E1098B256F1AB4571DDCB2928C15014C542367128C2(void) {
    ALOGD("_libh264dec_asm_se_FF9213658C836A13F34B7E1098B256F1AB4571DDCB2928C15014C542367128C2() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_2949236ADAD95557CC4E78A3C2F2C6A5DF0BCA579CCD4C6AA7B7A76B29EB9961 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_2949236ADAD95557CC4E78A3C2F2C6A5DF0BCA579CCD4C6AA7B7A76B29EB9961(void) {
    ALOGD("_libh264dec_asm_se_2949236ADAD95557CC4E78A3C2F2C6A5DF0BCA579CCD4C6AA7B7A76B29EB9961() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_0B5B195566F93E42470568E70C680199A7CF7AA31C1813456001324CAA53136C */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_0B5B195566F93E42470568E70C680199A7CF7AA31C1813456001324CAA53136C(void) {
    ALOGD("_libh264dec_asm_se_0B5B195566F93E42470568E70C680199A7CF7AA31C1813456001324CAA53136C() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_D5453EA14776EB621662EAF527C63692 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_D5453EA14776EB621662EAF527C63692(void) {
    ALOGD("_libh264dec_asm_se_D5453EA14776EB621662EAF527C63692() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_34174DBACEB03D98F41FC62BD5667661 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_34174DBACEB03D98F41FC62BD5667661(void) {
    ALOGD("_libh264dec_asm_se_34174DBACEB03D98F41FC62BD5667661() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_90AFB7F0730221525A8A8354268C43B0 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_90AFB7F0730221525A8A8354268C43B0(void) {
    ALOGD("_libh264dec_asm_se_90AFB7F0730221525A8A8354268C43B0() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_C3E9E0FC79A3BFA4D03B14963269F21E09B5F8176E1CE152C50B418C254A5737 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_C3E9E0FC79A3BFA4D03B14963269F21E09B5F8176E1CE152C50B418C254A5737(void) {
    ALOGD("_libh264dec_asm_se_C3E9E0FC79A3BFA4D03B14963269F21E09B5F8176E1CE152C50B418C254A5737() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_7C8DF255EAB8A97ED4C8F18732DA5F4B7E85DE2E1DA8074179FF55B50C25A6D5 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_7C8DF255EAB8A97ED4C8F18732DA5F4B7E85DE2E1DA8074179FF55B50C25A6D5(void) {
    ALOGD("_libh264dec_asm_se_7C8DF255EAB8A97ED4C8F18732DA5F4B7E85DE2E1DA8074179FF55B50C25A6D5() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_EE7AB5ADED7027EFC1CE5AB4AAB817EAAD6DD9192A9B7BF857416CDA7AC7743F */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_EE7AB5ADED7027EFC1CE5AB4AAB817EAAD6DD9192A9B7BF857416CDA7AC7743F(void) {
    ALOGD("_libh264dec_asm_se_EE7AB5ADED7027EFC1CE5AB4AAB817EAAD6DD9192A9B7BF857416CDA7AC7743F() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_0794F03DED7D3AC0AB6E8702194142E63CF8BD46DF6B0828C51FEBE06DC6B376 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_0794F03DED7D3AC0AB6E8702194142E63CF8BD46DF6B0828C51FEBE06DC6B376(void) {
    ALOGD("_libh264dec_asm_se_0794F03DED7D3AC0AB6E8702194142E63CF8BD46DF6B0828C51FEBE06DC6B376() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_F1CAA681891CB0257344862FAC4D5321132AE25EE17940E6567849339DD7E515 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_F1CAA681891CB0257344862FAC4D5321132AE25EE17940E6567849339DD7E515(void) {
    ALOGD("_libh264dec_asm_se_F1CAA681891CB0257344862FAC4D5321132AE25EE17940E6567849339DD7E515() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_F1CAA681891CB0257344862FAC4D5321E65C00101F10D8008035AF5A6453A855 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_F1CAA681891CB0257344862FAC4D5321E65C00101F10D8008035AF5A6453A855(void) {
    ALOGD("_libh264dec_asm_se_F1CAA681891CB0257344862FAC4D5321E65C00101F10D8008035AF5A6453A855() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_EE7AB5ADED7027EFC1CE5AB4AAB817EAEC103CA74B93F0E8F6EDCF66C9D9EC57 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_EE7AB5ADED7027EFC1CE5AB4AAB817EAEC103CA74B93F0E8F6EDCF66C9D9EC57(void) {
    ALOGD("_libh264dec_asm_se_EE7AB5ADED7027EFC1CE5AB4AAB817EAEC103CA74B93F0E8F6EDCF66C9D9EC57() called");
    return 0;
}

/* Exported Object: zigzag_scan8x8_field */
extern "C" __attribute__((visibility("default"))) void* zigzag_scan8x8_field = NULL;

/* Exported Object: qpDiv6 */
extern "C" __attribute__((visibility("default"))) void* qpDiv6 = NULL;

/* Exported Object: qpMod6 */
extern "C" __attribute__((visibility("default"))) void* qpMod6 = NULL;

/* Exported Object: h264bsdQpC */
extern "C" __attribute__((visibility("default"))) void* h264bsdQpC = NULL;

/* Exported Object: Reorderblock */
extern "C" __attribute__((visibility("default"))) void* Reorderblock = NULL;

/* Exported Object: zigzag_scan8x8_single */
extern "C" __attribute__((visibility("default"))) void* zigzag_scan8x8_single = NULL;

/* Demangled: _libh264dec_asm_se_7C8DF255EAB8A97ED4C8F18732DA5F4B8F92593F7A399F82AE19F8E5E4DE7CC5 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_7C8DF255EAB8A97ED4C8F18732DA5F4B8F92593F7A399F82AE19F8E5E4DE7CC5(void) {
    ALOGD("_libh264dec_asm_se_7C8DF255EAB8A97ED4C8F18732DA5F4B8F92593F7A399F82AE19F8E5E4DE7CC5() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_26954FFAE7168F0BBEA7BD3FBB9D4065 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_26954FFAE7168F0BBEA7BD3FBB9D4065(void) {
    ALOGD("_libh264dec_asm_se_26954FFAE7168F0BBEA7BD3FBB9D4065() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_7C8DF255EAB8A97ED4C8F18732DA5F4B */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_7C8DF255EAB8A97ED4C8F18732DA5F4B(void) {
    ALOGD("_libh264dec_asm_se_7C8DF255EAB8A97ED4C8F18732DA5F4B() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_F69C371E969B73C2E8D7A6A132B7D49707D05B58A575DAA860960CC46A42867A */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_F69C371E969B73C2E8D7A6A132B7D49707D05B58A575DAA860960CC46A42867A(void) {
    ALOGD("_libh264dec_asm_se_F69C371E969B73C2E8D7A6A132B7D49707D05B58A575DAA860960CC46A42867A() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_6BD79B7FD7D6D2F7B67462A55943288507D05B58A575DAA860960CC46A42867A */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_6BD79B7FD7D6D2F7B67462A55943288507D05B58A575DAA860960CC46A42867A(void) {
    ALOGD("_libh264dec_asm_se_6BD79B7FD7D6D2F7B67462A55943288507D05B58A575DAA860960CC46A42867A() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_37580A876FA6A7EA4D3BD9761E2B54DB2303F156E0156711ACFCEEBB8E0DADE8 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_37580A876FA6A7EA4D3BD9761E2B54DB2303F156E0156711ACFCEEBB8E0DADE8(void) {
    ALOGD("_libh264dec_asm_se_37580A876FA6A7EA4D3BD9761E2B54DB2303F156E0156711ACFCEEBB8E0DADE8() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_BEA6DAD7641C971822B264EA42C0615CF68FC01065B02ABF46B6822EAD7F8653 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_BEA6DAD7641C971822B264EA42C0615CF68FC01065B02ABF46B6822EAD7F8653(void) {
    ALOGD("_libh264dec_asm_se_BEA6DAD7641C971822B264EA42C0615CF68FC01065B02ABF46B6822EAD7F8653() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_8992223DDC9719BA853760E171B4D09B */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_8992223DDC9719BA853760E171B4D09B(void) {
    ALOGD("_libh264dec_asm_se_8992223DDC9719BA853760E171B4D09B() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_029BBCA9548BFC1042D487FCF911C4AF72F9F3DD0EC5ACBAF1561B685BE08649 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_029BBCA9548BFC1042D487FCF911C4AF72F9F3DD0EC5ACBAF1561B685BE08649(void) {
    ALOGD("_libh264dec_asm_se_029BBCA9548BFC1042D487FCF911C4AF72F9F3DD0EC5ACBAF1561B685BE08649() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_3F8552053401F6E038E55F48C09DDB3F91993564065A515361AF9F0EA4C4BF8C */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_3F8552053401F6E038E55F48C09DDB3F91993564065A515361AF9F0EA4C4BF8C(void) {
    ALOGD("_libh264dec_asm_se_3F8552053401F6E038E55F48C09DDB3F91993564065A515361AF9F0EA4C4BF8C() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_3F8552053401F6E038E55F48C09DDB3FCD5A92568484C3FD7FDA3771683FBC3F */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_3F8552053401F6E038E55F48C09DDB3FCD5A92568484C3FD7FDA3771683FBC3F(void) {
    ALOGD("_libh264dec_asm_se_3F8552053401F6E038E55F48C09DDB3FCD5A92568484C3FD7FDA3771683FBC3F() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_838C70E88633C4EC1C176D52BEF6A1BBA1599368C6587E2153FEF0A2B8724C16 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_838C70E88633C4EC1C176D52BEF6A1BBA1599368C6587E2153FEF0A2B8724C16(void) {
    ALOGD("_libh264dec_asm_se_838C70E88633C4EC1C176D52BEF6A1BBA1599368C6587E2153FEF0A2B8724C16() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_BFC7754CD21F0A5AA14781D921F9176F */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_BFC7754CD21F0A5AA14781D921F9176F(void) {
    ALOGD("_libh264dec_asm_se_BFC7754CD21F0A5AA14781D921F9176F() called");
    return 0;
}

/* Exported Object: cnt */
extern "C" __attribute__((visibility("default"))) void* cnt = NULL;

/* Exported Object: MbPartModeREC */
extern "C" __attribute__((visibility("default"))) void* MbPartModeREC = NULL;

/* Exported Object: PredModeIntra16x16 */
extern "C" __attribute__((visibility("default"))) void* PredModeIntra16x16 = NULL;

/* Demangled: _libh264dec_asm_se_931CBC135663C85DC9846538F90BEEEAF2D5E45BE17038B147B85E5DDD97B626 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_931CBC135663C85DC9846538F90BEEEAF2D5E45BE17038B147B85E5DDD97B626(void) {
    ALOGD("_libh264dec_asm_se_931CBC135663C85DC9846538F90BEEEAF2D5E45BE17038B147B85E5DDD97B626() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_6915D754FC0219C99E7C660CB5D580D2CDB92E329D783F96B73586FAC81F7E2F */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_6915D754FC0219C99E7C660CB5D580D2CDB92E329D783F96B73586FAC81F7E2F(void) {
    ALOGD("_libh264dec_asm_se_6915D754FC0219C99E7C660CB5D580D2CDB92E329D783F96B73586FAC81F7E2F() called");
    return 0;
}

/* Exported Object: zigzag_scan_single */
extern "C" __attribute__((visibility("default"))) void* zigzag_scan_single = NULL;

/* Demangled: _libh264dec_asm_se_F428F17FEE0D10B1E3A4F8882EB913F44D024F746B8A45B969FA4CA529F8AEC8 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_F428F17FEE0D10B1E3A4F8882EB913F44D024F746B8A45B969FA4CA529F8AEC8(void) {
    ALOGD("_libh264dec_asm_se_F428F17FEE0D10B1E3A4F8882EB913F44D024F746B8A45B969FA4CA529F8AEC8() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_C833CD749AA09BB2E0243C1262F839B575D001DC3EC9A2E31B0AB043544AFB73 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_C833CD749AA09BB2E0243C1262F839B575D001DC3EC9A2E31B0AB043544AFB73(void) {
    ALOGD("_libh264dec_asm_se_C833CD749AA09BB2E0243C1262F839B575D001DC3EC9A2E31B0AB043544AFB73() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_377201ED0F2F8D0FBED917D6D39DADB4F8C5BC26B2D05C6C1A8663CBFF9295C7 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_377201ED0F2F8D0FBED917D6D39DADB4F8C5BC26B2D05C6C1A8663CBFF9295C7(void) {
    ALOGD("_libh264dec_asm_se_377201ED0F2F8D0FBED917D6D39DADB4F8C5BC26B2D05C6C1A8663CBFF9295C7() called");
    return 0;
}

/* Exported Object: zigzag_scan_field */
extern "C" __attribute__((visibility("default"))) void* zigzag_scan_field = NULL;

/* Demangled: _libh264dec_asm_se_7E7F17EDBA22739E786D1D99C1472CB5B22CC89BA37DFC894986C935BF84AE60 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_7E7F17EDBA22739E786D1D99C1472CB5B22CC89BA37DFC894986C935BF84AE60(void) {
    ALOGD("_libh264dec_asm_se_7E7F17EDBA22739E786D1D99C1472CB5B22CC89BA37DFC894986C935BF84AE60() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_04E31A26EA50FDA5767D2F0A49D956AA033F3D90096B88F1AE159C64EBFB895E */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_04E31A26EA50FDA5767D2F0A49D956AA033F3D90096B88F1AE159C64EBFB895E(void) {
    ALOGD("_libh264dec_asm_se_04E31A26EA50FDA5767D2F0A49D956AA033F3D90096B88F1AE159C64EBFB895E() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_E05B7FB48A288E516C369598E01AD7C77B19A6A1C608E130BD6BC48F80E831F1 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_E05B7FB48A288E516C369598E01AD7C77B19A6A1C608E130BD6BC48F80E831F1(void) {
    ALOGD("_libh264dec_asm_se_E05B7FB48A288E516C369598E01AD7C77B19A6A1C608E130BD6BC48F80E831F1() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_DE9F5808C4995076604721E293F2B1A2922EA1D80A5DEC3DA02824413EB0C054 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_DE9F5808C4995076604721E293F2B1A2922EA1D80A5DEC3DA02824413EB0C054(void) {
    ALOGD("_libh264dec_asm_se_DE9F5808C4995076604721E293F2B1A2922EA1D80A5DEC3DA02824413EB0C054() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_A521324B3E5FCF3C5D97D35E2F0B02C707FE6089441E8FA24EBA0FA123092315 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_A521324B3E5FCF3C5D97D35E2F0B02C707FE6089441E8FA24EBA0FA123092315(void) {
    ALOGD("_libh264dec_asm_se_A521324B3E5FCF3C5D97D35E2F0B02C707FE6089441E8FA24EBA0FA123092315() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_519C771490ED5FC5A132AAAE25D7B35FE3839E34C1CD63AFFE7BC98C5CB49C2D */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_519C771490ED5FC5A132AAAE25D7B35FE3839E34C1CD63AFFE7BC98C5CB49C2D(void) {
    ALOGD("_libh264dec_asm_se_519C771490ED5FC5A132AAAE25D7B35FE3839E34C1CD63AFFE7BC98C5CB49C2D() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_56B067BF1E096E1A155D23C0F74CED9857DFC6C9B4C5234E66847EF13DC54F9E30AD0CF7A76F550708D539EB685F6878 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_56B067BF1E096E1A155D23C0F74CED9857DFC6C9B4C5234E66847EF13DC54F9E30AD0CF7A76F550708D539EB685F6878(void) {
    ALOGD("_libh264dec_asm_se_56B067BF1E096E1A155D23C0F74CED9857DFC6C9B4C5234E66847EF13DC54F9E30AD0CF7A76F550708D539EB685F6878() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_56B067BF1E096E1A155D23C0F74CED988E3CC4A9F8B4870BFF982933534E86AA */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_56B067BF1E096E1A155D23C0F74CED988E3CC4A9F8B4870BFF982933534E86AA(void) {
    ALOGD("_libh264dec_asm_se_56B067BF1E096E1A155D23C0F74CED988E3CC4A9F8B4870BFF982933534E86AA() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_7F455F74ACDA89EE9CDB142D17C154EFBF182B96C4E64B33A455FE0AFF60B3FC */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_7F455F74ACDA89EE9CDB142D17C154EFBF182B96C4E64B33A455FE0AFF60B3FC(void) {
    ALOGD("_libh264dec_asm_se_7F455F74ACDA89EE9CDB142D17C154EFBF182B96C4E64B33A455FE0AFF60B3FC() called");
    return 0;
}

/* Exported Object: mv_position_in_mv_list */
extern "C" __attribute__((visibility("default"))) void* mv_position_in_mv_list = NULL;

/* Demangled: _libh264dec_asm_se_2E01B5C2EDFB8276DC5285FBDD9F2192E624A3396E95909565640EF83F864E5BAB8C83CBFBEADEF289211B6288C78C63 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_2E01B5C2EDFB8276DC5285FBDD9F2192E624A3396E95909565640EF83F864E5BAB8C83CBFBEADEF289211B6288C78C63(void) {
    ALOGD("_libh264dec_asm_se_2E01B5C2EDFB8276DC5285FBDD9F2192E624A3396E95909565640EF83F864E5BAB8C83CBFBEADEF289211B6288C78C63() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_2E01B5C2EDFB8276DC5285FBDD9F2192E624A3396E95909565640EF83F864E5BF9B4A295BA326E942756FDD9B051D9ED */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_2E01B5C2EDFB8276DC5285FBDD9F2192E624A3396E95909565640EF83F864E5BF9B4A295BA326E942756FDD9B051D9ED(void) {
    ALOGD("_libh264dec_asm_se_2E01B5C2EDFB8276DC5285FBDD9F2192E624A3396E95909565640EF83F864E5BF9B4A295BA326E942756FDD9B051D9ED() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_2E01B5C2EDFB8276DC5285FBDD9F2192E624A3396E95909565640EF83F864E5B8D84C703C2E4FE655A4D6E9A45126404 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_2E01B5C2EDFB8276DC5285FBDD9F2192E624A3396E95909565640EF83F864E5B8D84C703C2E4FE655A4D6E9A45126404(void) {
    ALOGD("_libh264dec_asm_se_2E01B5C2EDFB8276DC5285FBDD9F2192E624A3396E95909565640EF83F864E5B8D84C703C2E4FE655A4D6E9A45126404() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_2E01B5C2EDFB8276DC5285FBDD9F2192E624A3396E95909565640EF83F864E5BB44801F7A305944478E106FE62CAE000 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_2E01B5C2EDFB8276DC5285FBDD9F2192E624A3396E95909565640EF83F864E5BB44801F7A305944478E106FE62CAE000(void) {
    ALOGD("_libh264dec_asm_se_2E01B5C2EDFB8276DC5285FBDD9F2192E624A3396E95909565640EF83F864E5BB44801F7A305944478E106FE62CAE000() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_451E717AB747B2237437C71B83BC21FB15AE9E4FE316ED469ACAB1B03503548B */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_451E717AB747B2237437C71B83BC21FB15AE9E4FE316ED469ACAB1B03503548B(void) {
    ALOGD("_libh264dec_asm_se_451E717AB747B2237437C71B83BC21FB15AE9E4FE316ED469ACAB1B03503548B() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_563931AED4AA3A4787395C9846B973F9909292AB383FB0E5453700D8BF28335A13603AF0716F1959B7C49F02B37E40EF */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_563931AED4AA3A4787395C9846B973F9909292AB383FB0E5453700D8BF28335A13603AF0716F1959B7C49F02B37E40EF(void) {
    ALOGD("_libh264dec_asm_se_563931AED4AA3A4787395C9846B973F9909292AB383FB0E5453700D8BF28335A13603AF0716F1959B7C49F02B37E40EF() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_563931AED4AA3A4787395C9846B973F90F6CFC1A784FE4BEADE7B19C852AB77F44229D0CE826D3C0111D4CDA7A49CB59 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_563931AED4AA3A4787395C9846B973F90F6CFC1A784FE4BEADE7B19C852AB77F44229D0CE826D3C0111D4CDA7A49CB59(void) {
    ALOGD("_libh264dec_asm_se_563931AED4AA3A4787395C9846B973F90F6CFC1A784FE4BEADE7B19C852AB77F44229D0CE826D3C0111D4CDA7A49CB59() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_1C513E2E4DC3DE94AD3B56524720BC112CC1FE1413E12D2988C7F543047897F84B308077A4455A49628A5137A5D07173 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_1C513E2E4DC3DE94AD3B56524720BC112CC1FE1413E12D2988C7F543047897F84B308077A4455A49628A5137A5D07173(void) {
    ALOGD("_libh264dec_asm_se_1C513E2E4DC3DE94AD3B56524720BC112CC1FE1413E12D2988C7F543047897F84B308077A4455A49628A5137A5D07173() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_EA1B8658BB14E44E7E674BD0D8FD2481CD1895AAB8FF237637BC201D8865F180 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_EA1B8658BB14E44E7E674BD0D8FD2481CD1895AAB8FF237637BC201D8865F180(void) {
    ALOGD("_libh264dec_asm_se_EA1B8658BB14E44E7E674BD0D8FD2481CD1895AAB8FF237637BC201D8865F180() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_563931AED4AA3A4787395C9846B973F93828A29F81CA5433496074037BD2D5EB */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_563931AED4AA3A4787395C9846B973F93828A29F81CA5433496074037BD2D5EB(void) {
    ALOGD("_libh264dec_asm_se_563931AED4AA3A4787395C9846B973F93828A29F81CA5433496074037BD2D5EB() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_B084C13DE1A8C70C0878502880F81F3AE5134109816633C00942C06F661B095A */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_B084C13DE1A8C70C0878502880F81F3AE5134109816633C00942C06F661B095A(void) {
    ALOGD("_libh264dec_asm_se_B084C13DE1A8C70C0878502880F81F3AE5134109816633C00942C06F661B095A() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB4154027C6CA379A16A97C5CA4114A3E81804C65B05277EFAD47166A5099BA51E42 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB4154027C6CA379A16A97C5CA4114A3E81804C65B05277EFAD47166A5099BA51E42(void) {
    ALOGD("_libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB4154027C6CA379A16A97C5CA4114A3E81804C65B05277EFAD47166A5099BA51E42() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB4154027C6CA379A16A97C5CA4114A3E8186252E64F2677B11040E4E6E34C64A547 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB4154027C6CA379A16A97C5CA4114A3E8186252E64F2677B11040E4E6E34C64A547(void) {
    ALOGD("_libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB4154027C6CA379A16A97C5CA4114A3E8186252E64F2677B11040E4E6E34C64A547() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB418F2E0641B92B267CF27589FD5FA6E9B7BABCDFDC49C9180E52C6674C35CA3A60 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB418F2E0641B92B267CF27589FD5FA6E9B7BABCDFDC49C9180E52C6674C35CA3A60(void) {
    ALOGD("_libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB418F2E0641B92B267CF27589FD5FA6E9B7BABCDFDC49C9180E52C6674C35CA3A60() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB418F2E0641B92B267CF27589FD5FA6E9B75797EEB0F173A2D325A712D5DCEEAFD5 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB418F2E0641B92B267CF27589FD5FA6E9B75797EEB0F173A2D325A712D5DCEEAFD5(void) {
    ALOGD("_libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB418F2E0641B92B267CF27589FD5FA6E9B75797EEB0F173A2D325A712D5DCEEAFD5() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB418F2E0641B92B267CF27589FD5FA6E9B7BABCDFDC49C9180E52C6674C35CA3A60C29351FC6B552323E21B165B2F1F507A */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB418F2E0641B92B267CF27589FD5FA6E9B7BABCDFDC49C9180E52C6674C35CA3A60C29351FC6B552323E21B165B2F1F507A(void) {
    ALOGD("_libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB418F2E0641B92B267CF27589FD5FA6E9B7BABCDFDC49C9180E52C6674C35CA3A60C29351FC6B552323E21B165B2F1F507A() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB418F2E0641B92B267CF27589FD5FA6E9B75797EEB0F173A2D325A712D5DCEEAFD5C29351FC6B552323E21B165B2F1F507A */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB418F2E0641B92B267CF27589FD5FA6E9B75797EEB0F173A2D325A712D5DCEEAFD5C29351FC6B552323E21B165B2F1F507A(void) {
    ALOGD("_libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB418F2E0641B92B267CF27589FD5FA6E9B75797EEB0F173A2D325A712D5DCEEAFD5C29351FC6B552323E21B165B2F1F507A() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB4154027C6CA379A16A97C5CA4114A3E81830335DBB6E061B46A2A2A55715FAEE1C */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB4154027C6CA379A16A97C5CA4114A3E81830335DBB6E061B46A2A2A55715FAEE1C(void) {
    ALOGD("_libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB4154027C6CA379A16A97C5CA4114A3E81830335DBB6E061B46A2A2A55715FAEE1C() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB4154027C6CA379A16A97C5CA4114A3E8182659B8F0E5BB7E8C0FDD150470AD0BAF */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB4154027C6CA379A16A97C5CA4114A3E8182659B8F0E5BB7E8C0FDD150470AD0BAF(void) {
    ALOGD("_libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB4154027C6CA379A16A97C5CA4114A3E8182659B8F0E5BB7E8C0FDD150470AD0BAF() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_563931AED4AA3A4787395C9846B973F98D8C11240E48E61ED4A2F68AFAEBBFF6DF7F4ADBF5551AEC09D1ACDC5562B17F */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_563931AED4AA3A4787395C9846B973F98D8C11240E48E61ED4A2F68AFAEBBFF6DF7F4ADBF5551AEC09D1ACDC5562B17F(void) {
    ALOGD("_libh264dec_asm_se_563931AED4AA3A4787395C9846B973F98D8C11240E48E61ED4A2F68AFAEBBFF6DF7F4ADBF5551AEC09D1ACDC5562B17F() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_5BBB3BC8E5E60BAF0D749DC21567A79AEFF23788CDAEE63050B5A09993866879D22793EA8F7F2003B18CD8ADDE9C8FB4 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_5BBB3BC8E5E60BAF0D749DC21567A79AEFF23788CDAEE63050B5A09993866879D22793EA8F7F2003B18CD8ADDE9C8FB4(void) {
    ALOGD("_libh264dec_asm_se_5BBB3BC8E5E60BAF0D749DC21567A79AEFF23788CDAEE63050B5A09993866879D22793EA8F7F2003B18CD8ADDE9C8FB4() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_D00E494DC524669B5BE3650517F935C321B66AB7B01163DC7ECD942D967D54D7 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_D00E494DC524669B5BE3650517F935C321B66AB7B01163DC7ECD942D967D54D7(void) {
    ALOGD("_libh264dec_asm_se_D00E494DC524669B5BE3650517F935C321B66AB7B01163DC7ECD942D967D54D7() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_4F07FC128657D7C7CBB50E1E28044763621215FDEE488C5D8F36CEC17FB3B43D */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_4F07FC128657D7C7CBB50E1E28044763621215FDEE488C5D8F36CEC17FB3B43D(void) {
    ALOGD("_libh264dec_asm_se_4F07FC128657D7C7CBB50E1E28044763621215FDEE488C5D8F36CEC17FB3B43D() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_AA9A93DF477BC9BCB8D9B9BF0291B7BD0FC3EBBC67CBD971E7A74A568D00CA9C */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_AA9A93DF477BC9BCB8D9B9BF0291B7BD0FC3EBBC67CBD971E7A74A568D00CA9C(void) {
    ALOGD("_libh264dec_asm_se_AA9A93DF477BC9BCB8D9B9BF0291B7BD0FC3EBBC67CBD971E7A74A568D00CA9C() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_536F891EF306F3E6279BE37332FC249E520D0506434A0B9C503C1BE4CCC4A451 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_536F891EF306F3E6279BE37332FC249E520D0506434A0B9C503C1BE4CCC4A451(void) {
    ALOGD("_libh264dec_asm_se_536F891EF306F3E6279BE37332FC249E520D0506434A0B9C503C1BE4CCC4A451() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_A6B2A2975CF055107F0F6AA2EE202D90520D0506434A0B9C503C1BE4CCC4A451 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_A6B2A2975CF055107F0F6AA2EE202D90520D0506434A0B9C503C1BE4CCC4A451(void) {
    ALOGD("_libh264dec_asm_se_A6B2A2975CF055107F0F6AA2EE202D90520D0506434A0B9C503C1BE4CCC4A451() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_EA1B8658BB14E44E7E674BD0D8FD2481E228314F8A0B7CCB4845293495ADB7E3 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_EA1B8658BB14E44E7E674BD0D8FD2481E228314F8A0B7CCB4845293495ADB7E3(void) {
    ALOGD("_libh264dec_asm_se_EA1B8658BB14E44E7E674BD0D8FD2481E228314F8A0B7CCB4845293495ADB7E3() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_EA1B8658BB14E44E7E674BD0D8FD24819799618B50ED3F5B1E41614419888DDD */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_EA1B8658BB14E44E7E674BD0D8FD24819799618B50ED3F5B1E41614419888DDD(void) {
    ALOGD("_libh264dec_asm_se_EA1B8658BB14E44E7E674BD0D8FD24819799618B50ED3F5B1E41614419888DDD() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_EA1B8658BB14E44E7E674BD0D8FD2481F978F5FEBEEFC71F0CE4A666FA055DC5 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_EA1B8658BB14E44E7E674BD0D8FD2481F978F5FEBEEFC71F0CE4A666FA055DC5(void) {
    ALOGD("_libh264dec_asm_se_EA1B8658BB14E44E7E674BD0D8FD2481F978F5FEBEEFC71F0CE4A666FA055DC5() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_A818CF653C335FF1F5AD11D980BF72A35374430751F0D0B4F21021AB96C0096B */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_A818CF653C335FF1F5AD11D980BF72A35374430751F0D0B4F21021AB96C0096B(void) {
    ALOGD("_libh264dec_asm_se_A818CF653C335FF1F5AD11D980BF72A35374430751F0D0B4F21021AB96C0096B() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_196D7C0E04382C143472FBDD4490DAA2A8C03D100DB909B67D9ED21E23602F707B19A6A1C608E130BD6BC48F80E831F1 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_196D7C0E04382C143472FBDD4490DAA2A8C03D100DB909B67D9ED21E23602F707B19A6A1C608E130BD6BC48F80E831F1(void) {
    ALOGD("_libh264dec_asm_se_196D7C0E04382C143472FBDD4490DAA2A8C03D100DB909B67D9ED21E23602F707B19A6A1C608E130BD6BC48F80E831F1() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_6B16BFE46806DA002DBE939BC51BE7F105C0694BD27CED52103B976BCC541B0A */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_6B16BFE46806DA002DBE939BC51BE7F105C0694BD27CED52103B976BCC541B0A(void) {
    ALOGD("_libh264dec_asm_se_6B16BFE46806DA002DBE939BC51BE7F105C0694BD27CED52103B976BCC541B0A() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_7BC7A98169EAAF471AB58497CA50837E89F85553AB96455FF613367E4DB3DE30 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_7BC7A98169EAAF471AB58497CA50837E89F85553AB96455FF613367E4DB3DE30(void) {
    ALOGD("_libh264dec_asm_se_7BC7A98169EAAF471AB58497CA50837E89F85553AB96455FF613367E4DB3DE30() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_38CA01030A7799FC9740E7934019C669587E5DC2972499BFA652D1C52384D7A0 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_38CA01030A7799FC9740E7934019C669587E5DC2972499BFA652D1C52384D7A0(void) {
    ALOGD("_libh264dec_asm_se_38CA01030A7799FC9740E7934019C669587E5DC2972499BFA652D1C52384D7A0() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_E2BC8AE91D6A38AEEB87BE3399401D1C95EE2EF3561C6023BB52761513238C44 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_E2BC8AE91D6A38AEEB87BE3399401D1C95EE2EF3561C6023BB52761513238C44(void) {
    ALOGD("_libh264dec_asm_se_E2BC8AE91D6A38AEEB87BE3399401D1C95EE2EF3561C6023BB52761513238C44() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_D8574B9E9F9D89877D25E2A801EC03409812294DBA9003EFFB6EE5A211CC43C6 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_D8574B9E9F9D89877D25E2A801EC03409812294DBA9003EFFB6EE5A211CC43C6(void) {
    ALOGD("_libh264dec_asm_se_D8574B9E9F9D89877D25E2A801EC03409812294DBA9003EFFB6EE5A211CC43C6() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_D8574B9E9F9D89877D25E2A801EC03405B9D952A92A3A8CD64A699C07E4D7535 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_D8574B9E9F9D89877D25E2A801EC03405B9D952A92A3A8CD64A699C07E4D7535(void) {
    ALOGD("_libh264dec_asm_se_D8574B9E9F9D89877D25E2A801EC03405B9D952A92A3A8CD64A699C07E4D7535() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_B2EDFEC4546E4A051792CA87EC6E4BDE68C7AFFFBB0F8D2E13E83BB4F34EDC3A */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_B2EDFEC4546E4A051792CA87EC6E4BDE68C7AFFFBB0F8D2E13E83BB4F34EDC3A(void) {
    ALOGD("_libh264dec_asm_se_B2EDFEC4546E4A051792CA87EC6E4BDE68C7AFFFBB0F8D2E13E83BB4F34EDC3A() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_EF323CAB1E9DB4FCF38D7B065EE1C1A61AF6804FA64E02BFBA2087E2FBAFC1F1 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_EF323CAB1E9DB4FCF38D7B065EE1C1A61AF6804FA64E02BFBA2087E2FBAFC1F1(void) {
    ALOGD("_libh264dec_asm_se_EF323CAB1E9DB4FCF38D7B065EE1C1A61AF6804FA64E02BFBA2087E2FBAFC1F1() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_04265D507FE957896A6C07C5FDCB3C6BD3DB03967EFABD362086EAA7FFED11DF */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_04265D507FE957896A6C07C5FDCB3C6BD3DB03967EFABD362086EAA7FFED11DF(void) {
    ALOGD("_libh264dec_asm_se_04265D507FE957896A6C07C5FDCB3C6BD3DB03967EFABD362086EAA7FFED11DF() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_CC131B8DFD4D073370749241D3D22421CA06A5278101AF95EE42622758CBF087 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_CC131B8DFD4D073370749241D3D22421CA06A5278101AF95EE42622758CBF087(void) {
    ALOGD("_libh264dec_asm_se_CC131B8DFD4D073370749241D3D22421CA06A5278101AF95EE42622758CBF087() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_CC131B8DFD4D073370749241D3D22421F87CED505139921DB3BA494AB84E81DD */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_CC131B8DFD4D073370749241D3D22421F87CED505139921DB3BA494AB84E81DD(void) {
    ALOGD("_libh264dec_asm_se_CC131B8DFD4D073370749241D3D22421F87CED505139921DB3BA494AB84E81DD() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_0E16B9BD2F75B44096DB12E35B1993DD9369FE57B912EFBC74EBD03D7B719B3A */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_0E16B9BD2F75B44096DB12E35B1993DD9369FE57B912EFBC74EBD03D7B719B3A(void) {
    ALOGD("_libh264dec_asm_se_0E16B9BD2F75B44096DB12E35B1993DD9369FE57B912EFBC74EBD03D7B719B3A() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_267728F61024B7C39EC596E432993B36 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_267728F61024B7C39EC596E432993B36(void) {
    ALOGD("_libh264dec_asm_se_267728F61024B7C39EC596E432993B36() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_D030D898FBC962E75E0739505A26379E2D2F20CDCBD104FDAF8B93DABCA05ECA */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_D030D898FBC962E75E0739505A26379E2D2F20CDCBD104FDAF8B93DABCA05ECA(void) {
    ALOGD("_libh264dec_asm_se_D030D898FBC962E75E0739505A26379E2D2F20CDCBD104FDAF8B93DABCA05ECA() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_7436206918FCC79876E92837BFBB7FFED85F5E018E5C60F3258277FD7EFA493E */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_7436206918FCC79876E92837BFBB7FFED85F5E018E5C60F3258277FD7EFA493E(void) {
    ALOGD("_libh264dec_asm_se_7436206918FCC79876E92837BFBB7FFED85F5E018E5C60F3258277FD7EFA493E() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_C4C908FCD1CD8D6334D84EA87946D9F861EEBA4306DD45CA3E0BA5B9D4C28339 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_C4C908FCD1CD8D6334D84EA87946D9F861EEBA4306DD45CA3E0BA5B9D4C28339(void) {
    ALOGD("_libh264dec_asm_se_C4C908FCD1CD8D6334D84EA87946D9F861EEBA4306DD45CA3E0BA5B9D4C28339() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_6F4D36E6C43D223EAFEE129BAFCB37371C5CD1DEC054DB98C2E61719833FF256 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_6F4D36E6C43D223EAFEE129BAFCB37371C5CD1DEC054DB98C2E61719833FF256(void) {
    ALOGD("_libh264dec_asm_se_6F4D36E6C43D223EAFEE129BAFCB37371C5CD1DEC054DB98C2E61719833FF256() called");
    return 0;
}

/* Exported Object: dequant_coef */
extern "C" __attribute__((visibility("default"))) void* dequant_coef = NULL;

/* Demangled: _libh264dec_asm_se_43CAAA2AA47CC5BB700A1E6798467DBD760B7C1F90DC7E88631A40B3979B9932 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_43CAAA2AA47CC5BB700A1E6798467DBD760B7C1F90DC7E88631A40B3979B9932(void) {
    ALOGD("_libh264dec_asm_se_43CAAA2AA47CC5BB700A1E6798467DBD760B7C1F90DC7E88631A40B3979B9932() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_D030D898FBC962E75E0739505A26379E4D024F746B8A45B969FA4CA529F8AEC8 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_D030D898FBC962E75E0739505A26379E4D024F746B8A45B969FA4CA529F8AEC8(void) {
    ALOGD("_libh264dec_asm_se_D030D898FBC962E75E0739505A26379E4D024F746B8A45B969FA4CA529F8AEC8() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_D030D898FBC962E75E0739505A26379E6FD7A4396AC24107DECEE40EBC5DBDC6 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_D030D898FBC962E75E0739505A26379E6FD7A4396AC24107DECEE40EBC5DBDC6(void) {
    ALOGD("_libh264dec_asm_se_D030D898FBC962E75E0739505A26379E6FD7A4396AC24107DECEE40EBC5DBDC6() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_44AE890283E3C1739062EEFB02585FCE81A7014DAC2990A6503E4E9F2152238E */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_44AE890283E3C1739062EEFB02585FCE81A7014DAC2990A6503E4E9F2152238E(void) {
    ALOGD("_libh264dec_asm_se_44AE890283E3C1739062EEFB02585FCE81A7014DAC2990A6503E4E9F2152238E() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_B54E35CD2954D5CA0408F72822E5B112FCB9A4266EDDFBE7FF09E3F28C2ED4BC */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_B54E35CD2954D5CA0408F72822E5B112FCB9A4266EDDFBE7FF09E3F28C2ED4BC(void) {
    ALOGD("_libh264dec_asm_se_B54E35CD2954D5CA0408F72822E5B112FCB9A4266EDDFBE7FF09E3F28C2ED4BC() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_059724E352630CCFE2D8E174102E16A8 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_059724E352630CCFE2D8E174102E16A8(void) {
    ALOGD("_libh264dec_asm_se_059724E352630CCFE2D8E174102E16A8() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_E97EEC8B0822F02DF4AFEBDA46C6DB211FA413A3D6E1068F94CDABF1C848B9D1 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_E97EEC8B0822F02DF4AFEBDA46C6DB211FA413A3D6E1068F94CDABF1C848B9D1(void) {
    ALOGD("_libh264dec_asm_se_E97EEC8B0822F02DF4AFEBDA46C6DB211FA413A3D6E1068F94CDABF1C848B9D1() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_7436206918FCC79876E92837BFBB7FFED3D598917F0A524C433E8FF18E524D58 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_7436206918FCC79876E92837BFBB7FFED3D598917F0A524C433E8FF18E524D58(void) {
    ALOGD("_libh264dec_asm_se_7436206918FCC79876E92837BFBB7FFED3D598917F0A524C433E8FF18E524D58() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_A0C87B874B454356F971D12BEC48F8200150848B88D421A7FB723BBC9BA8D97A */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_A0C87B874B454356F971D12BEC48F8200150848B88D421A7FB723BBC9BA8D97A(void) {
    ALOGD("_libh264dec_asm_se_A0C87B874B454356F971D12BEC48F8200150848B88D421A7FB723BBC9BA8D97A() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_DF40A7FD5B421CAE7E13CCA4892944E5B5FC9C194FFE584C24D2C6926F4A983F */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_DF40A7FD5B421CAE7E13CCA4892944E5B5FC9C194FFE584C24D2C6926F4A983F(void) {
    ALOGD("_libh264dec_asm_se_DF40A7FD5B421CAE7E13CCA4892944E5B5FC9C194FFE584C24D2C6926F4A983F() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_FF59006306A78C99C6AAAA01204F064FC72D0B1D958CF1E2E65358957325738D */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_FF59006306A78C99C6AAAA01204F064FC72D0B1D958CF1E2E65358957325738D(void) {
    ALOGD("_libh264dec_asm_se_FF59006306A78C99C6AAAA01204F064FC72D0B1D958CF1E2E65358957325738D() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_2F2B7D504F9E7F2C2D488B7B09A73099636AC62FE19359CE18D62748F6EDEA13 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_2F2B7D504F9E7F2C2D488B7B09A73099636AC62FE19359CE18D62748F6EDEA13(void) {
    ALOGD("_libh264dec_asm_se_2F2B7D504F9E7F2C2D488B7B09A73099636AC62FE19359CE18D62748F6EDEA13() called");
    return 0;
}

/* Exported Object: h264bsdBlockXY */
extern "C" __attribute__((visibility("default"))) void* h264bsdBlockXY = NULL;

/* Demangled: _libh264dec_asm_se_DF40A7FD5B421CAE7E13CCA4892944E55214D987D1AECB87D62C6C48E5AF1AE2 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_DF40A7FD5B421CAE7E13CCA4892944E55214D987D1AECB87D62C6C48E5AF1AE2(void) {
    ALOGD("_libh264dec_asm_se_DF40A7FD5B421CAE7E13CCA4892944E55214D987D1AECB87D62C6C48E5AF1AE2() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_37580A876FA6A7EA4D3BD9761E2B54DB08183DA30551D5898B4C9C998D01CE37 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_37580A876FA6A7EA4D3BD9761E2B54DB08183DA30551D5898B4C9C998D01CE37(void) {
    ALOGD("_libh264dec_asm_se_37580A876FA6A7EA4D3BD9761E2B54DB08183DA30551D5898B4C9C998D01CE37() called");
    return 0;
}

/* Exported Object: h264bsdBlockX */
extern "C" __attribute__((visibility("default"))) void* h264bsdBlockX = NULL;

/* Exported Object: h264bsdBlockY */
extern "C" __attribute__((visibility("default"))) void* h264bsdBlockY = NULL;

/* Demangled: _libh264dec_asm_se_27EB14ADD275475F7F9F77AD008A4AEB24E06781D9F0201302C573F7C1152E1F */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_27EB14ADD275475F7F9F77AD008A4AEB24E06781D9F0201302C573F7C1152E1F(void) {
    ALOGD("_libh264dec_asm_se_27EB14ADD275475F7F9F77AD008A4AEB24E06781D9F0201302C573F7C1152E1F() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_EFF59556CAE15CEEE3B5E7BF25C1C046F02433C857158266C68E935DD4F8B0DB */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_EFF59556CAE15CEEE3B5E7BF25C1C046F02433C857158266C68E935DD4F8B0DB(void) {
    ALOGD("_libh264dec_asm_se_EFF59556CAE15CEEE3B5E7BF25C1C046F02433C857158266C68E935DD4F8B0DB() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_0E7C12643BF4264D0C40B571C9E66EBD07D05B58A575DAA860960CC46A42867A */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_0E7C12643BF4264D0C40B571C9E66EBD07D05B58A575DAA860960CC46A42867A(void) {
    ALOGD("_libh264dec_asm_se_0E7C12643BF4264D0C40B571C9E66EBD07D05B58A575DAA860960CC46A42867A() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_FBE98D4EF88004C53F3E09F889967E3B647E7FE2D1E7740CC235B06B456918A9 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_FBE98D4EF88004C53F3E09F889967E3B647E7FE2D1E7740CC235B06B456918A9(void) {
    ALOGD("_libh264dec_asm_se_FBE98D4EF88004C53F3E09F889967E3B647E7FE2D1E7740CC235B06B456918A9() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_0E7C12643BF4264D0C40B571C9E66EBDD7F41620A8B3691C19027CCADD5A0AFE */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_0E7C12643BF4264D0C40B571C9E66EBDD7F41620A8B3691C19027CCADD5A0AFE(void) {
    ALOGD("_libh264dec_asm_se_0E7C12643BF4264D0C40B571C9E66EBDD7F41620A8B3691C19027CCADD5A0AFE() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_27EB14ADD275475F7F9F77AD008A4AEB787D1514823137407D7BABA528ACEE7F */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_27EB14ADD275475F7F9F77AD008A4AEB787D1514823137407D7BABA528ACEE7F(void) {
    ALOGD("_libh264dec_asm_se_27EB14ADD275475F7F9F77AD008A4AEB787D1514823137407D7BABA528ACEE7F() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_C2A19D260CF26CA7D71B9737D9CB247CA5B3ABE87806C85DC1865A9549C372F3 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_C2A19D260CF26CA7D71B9737D9CB247CA5B3ABE87806C85DC1865A9549C372F3(void) {
    ALOGD("_libh264dec_asm_se_C2A19D260CF26CA7D71B9737D9CB247CA5B3ABE87806C85DC1865A9549C372F3() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_2F2B7D504F9E7F2C2D488B7B09A7309905BE1F8E3F0384F0E56AF46697086C80 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_2F2B7D504F9E7F2C2D488B7B09A7309905BE1F8E3F0384F0E56AF46697086C80(void) {
    ALOGD("_libh264dec_asm_se_2F2B7D504F9E7F2C2D488B7B09A7309905BE1F8E3F0384F0E56AF46697086C80() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_C2A19D260CF26CA7D71B9737D9CB247CEEDBE676BC1A0F8C352537F5DC9FEBBC */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_C2A19D260CF26CA7D71B9737D9CB247CEEDBE676BC1A0F8C352537F5DC9FEBBC(void) {
    ALOGD("_libh264dec_asm_se_C2A19D260CF26CA7D71B9737D9CB247CEEDBE676BC1A0F8C352537F5DC9FEBBC() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_986914D98FD2112AD804C85B2F17EE3C59B85EE315AF0303434046122FE62622D368FC0E0E990108EB4516806928E61F */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_986914D98FD2112AD804C85B2F17EE3C59B85EE315AF0303434046122FE62622D368FC0E0E990108EB4516806928E61F(void) {
    ALOGD("_libh264dec_asm_se_986914D98FD2112AD804C85B2F17EE3C59B85EE315AF0303434046122FE62622D368FC0E0E990108EB4516806928E61F() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_986914D98FD2112AD804C85B2F17EE3CAEE0B83FD778B6A4702A780177E5B282 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_986914D98FD2112AD804C85B2F17EE3CAEE0B83FD778B6A4702A780177E5B282(void) {
    ALOGD("_libh264dec_asm_se_986914D98FD2112AD804C85B2F17EE3CAEE0B83FD778B6A4702A780177E5B282() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_903BD5AE315A380DFBF90E7A92A5F5C524E06781D9F0201302C573F7C1152E1F */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_903BD5AE315A380DFBF90E7A92A5F5C524E06781D9F0201302C573F7C1152E1F(void) {
    ALOGD("_libh264dec_asm_se_903BD5AE315A380DFBF90E7A92A5F5C524E06781D9F0201302C573F7C1152E1F() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_71BF474AE33424B89FB0CA88CBC381390A9DF039F3C0FA71E6504E75B73EC1C3 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_71BF474AE33424B89FB0CA88CBC381390A9DF039F3C0FA71E6504E75B73EC1C3(void) {
    ALOGD("_libh264dec_asm_se_71BF474AE33424B89FB0CA88CBC381390A9DF039F3C0FA71E6504E75B73EC1C3() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_71BF474AE33424B89FB0CA88CBC3813940E64A89E940454A5473B79246A66576 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_71BF474AE33424B89FB0CA88CBC3813940E64A89E940454A5473B79246A66576(void) {
    ALOGD("_libh264dec_asm_se_71BF474AE33424B89FB0CA88CBC3813940E64A89E940454A5473B79246A66576() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_2FEBA9C0318B62E991DC741E1835605B5A059F449815E1854EA0A7FBC5045578DF72A0B02DE5ACE2EDEE57627BA8DD9C */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_2FEBA9C0318B62E991DC741E1835605B5A059F449815E1854EA0A7FBC5045578DF72A0B02DE5ACE2EDEE57627BA8DD9C(void) {
    ALOGD("_libh264dec_asm_se_2FEBA9C0318B62E991DC741E1835605B5A059F449815E1854EA0A7FBC5045578DF72A0B02DE5ACE2EDEE57627BA8DD9C() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_2FEBA9C0318B62E991DC741E1835605B5A059F449815E1854EA0A7FBC5045578CD5A92568484C3FD7FDA3771683FBC3F */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_2FEBA9C0318B62E991DC741E1835605B5A059F449815E1854EA0A7FBC5045578CD5A92568484C3FD7FDA3771683FBC3F(void) {
    ALOGD("_libh264dec_asm_se_2FEBA9C0318B62E991DC741E1835605B5A059F449815E1854EA0A7FBC5045578CD5A92568484C3FD7FDA3771683FBC3F() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_2FEBA9C0318B62E991DC741E1835605B6EBF52A714165ABEFDF8CF19BA1374CEF24D968A03B12EE5E85BA0FDD087F490 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_2FEBA9C0318B62E991DC741E1835605B6EBF52A714165ABEFDF8CF19BA1374CEF24D968A03B12EE5E85BA0FDD087F490(void) {
    ALOGD("_libh264dec_asm_se_2FEBA9C0318B62E991DC741E1835605B6EBF52A714165ABEFDF8CF19BA1374CEF24D968A03B12EE5E85BA0FDD087F490() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_2FEBA9C0318B62E991DC741E1835605B6EBF52A714165ABEFDF8CF19BA1374CED7F2D6CC093FC7AE7B817CC4C71A7295 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_2FEBA9C0318B62E991DC741E1835605B6EBF52A714165ABEFDF8CF19BA1374CED7F2D6CC093FC7AE7B817CC4C71A7295(void) {
    ALOGD("_libh264dec_asm_se_2FEBA9C0318B62E991DC741E1835605B6EBF52A714165ABEFDF8CF19BA1374CED7F2D6CC093FC7AE7B817CC4C71A7295() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_986914D98FD2112AD804C85B2F17EE3C6475734EE69B72CB605A6C3FBAA3C871FC57F4BAE1A8E4480EE4F7B162864C3C */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_986914D98FD2112AD804C85B2F17EE3C6475734EE69B72CB605A6C3FBAA3C871FC57F4BAE1A8E4480EE4F7B162864C3C(void) {
    ALOGD("_libh264dec_asm_se_986914D98FD2112AD804C85B2F17EE3C6475734EE69B72CB605A6C3FBAA3C871FC57F4BAE1A8E4480EE4F7B162864C3C() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_986914D98FD2112AD804C85B2F17EE3C3D8D156ABADA2F624AAB5E6778AA9B34 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_986914D98FD2112AD804C85B2F17EE3C3D8D156ABADA2F624AAB5E6778AA9B34(void) {
    ALOGD("_libh264dec_asm_se_986914D98FD2112AD804C85B2F17EE3C3D8D156ABADA2F624AAB5E6778AA9B34() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_903BD5AE315A380DFBF90E7A92A5F5C5825F35032A2A6575EAB82B642557E6FB6DB3776E06440113238EBDA114BC4E0D */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_903BD5AE315A380DFBF90E7A92A5F5C5825F35032A2A6575EAB82B642557E6FB6DB3776E06440113238EBDA114BC4E0D(void) {
    ALOGD("_libh264dec_asm_se_903BD5AE315A380DFBF90E7A92A5F5C5825F35032A2A6575EAB82B642557E6FB6DB3776E06440113238EBDA114BC4E0D() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_903BD5AE315A380DFBF90E7A92A5F5C5825F35032A2A6575EAB82B642557E6FB */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_903BD5AE315A380DFBF90E7A92A5F5C5825F35032A2A6575EAB82B642557E6FB(void) {
    ALOGD("_libh264dec_asm_se_903BD5AE315A380DFBF90E7A92A5F5C5825F35032A2A6575EAB82B642557E6FB() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_986914D98FD2112AD804C85B2F17EE3C4B186923BD72CD093515051920C303F7568840E5C366498D23264FC61C084A50 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_986914D98FD2112AD804C85B2F17EE3C4B186923BD72CD093515051920C303F7568840E5C366498D23264FC61C084A50(void) {
    ALOGD("_libh264dec_asm_se_986914D98FD2112AD804C85B2F17EE3C4B186923BD72CD093515051920C303F7568840E5C366498D23264FC61C084A50() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_986914D98FD2112AD804C85B2F17EE3C8735445F7B0AA74ACC49F2860FD9D121 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_986914D98FD2112AD804C85B2F17EE3C8735445F7B0AA74ACC49F2860FD9D121(void) {
    ALOGD("_libh264dec_asm_se_986914D98FD2112AD804C85B2F17EE3C8735445F7B0AA74ACC49F2860FD9D121() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_903BD5AE315A380DFBF90E7A92A5F5C5F0623AA3CD647655120669B1AC0CC7A7 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_903BD5AE315A380DFBF90E7A92A5F5C5F0623AA3CD647655120669B1AC0CC7A7(void) {
    ALOGD("_libh264dec_asm_se_903BD5AE315A380DFBF90E7A92A5F5C5F0623AA3CD647655120669B1AC0CC7A7() called");
    return 0;
}

/* Exported Object: N_C_4x4B */
extern "C" __attribute__((visibility("default"))) void* N_C_4x4B = NULL;

/* Exported Object: N_D_4x4B */
extern "C" __attribute__((visibility("default"))) void* N_D_4x4B = NULL;

/* Demangled: _libh264dec_asm_se_4BE11B8D8DC5F6CE18E7CD68840FD8FAD38C2FC5D0BB7F7F27A5B683CBB0053C */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_4BE11B8D8DC5F6CE18E7CD68840FD8FAD38C2FC5D0BB7F7F27A5B683CBB0053C(void) {
    ALOGD("_libh264dec_asm_se_4BE11B8D8DC5F6CE18E7CD68840FD8FAD38C2FC5D0BB7F7F27A5B683CBB0053C() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_4DD7C2BF29DE064BB6AA138DA00B2858DE496EB4D6D33353A4673F40E0862DB401461F180B6F8A02A2E6D5E7AEE549ED */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_4DD7C2BF29DE064BB6AA138DA00B2858DE496EB4D6D33353A4673F40E0862DB401461F180B6F8A02A2E6D5E7AEE549ED(void) {
    ALOGD("_libh264dec_asm_se_4DD7C2BF29DE064BB6AA138DA00B2858DE496EB4D6D33353A4673F40E0862DB401461F180B6F8A02A2E6D5E7AEE549ED() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_36CF0542EC791039C97389FE2E63408F07D05B58A575DAA860960CC46A42867A */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_36CF0542EC791039C97389FE2E63408F07D05B58A575DAA860960CC46A42867A(void) {
    ALOGD("_libh264dec_asm_se_36CF0542EC791039C97389FE2E63408F07D05B58A575DAA860960CC46A42867A() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_37580A876FA6A7EA4D3BD9761E2B54DB00F6778A65626932387C065F2736C776 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_37580A876FA6A7EA4D3BD9761E2B54DB00F6778A65626932387C065F2736C776(void) {
    ALOGD("_libh264dec_asm_se_37580A876FA6A7EA4D3BD9761E2B54DB00F6778A65626932387C065F2736C776() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_884CA6D4D8C0377F53EF850979610AE40DD151AC87F3FB6D9AB46B5AE972F2C7 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_884CA6D4D8C0377F53EF850979610AE40DD151AC87F3FB6D9AB46B5AE972F2C7(void) {
    ALOGD("_libh264dec_asm_se_884CA6D4D8C0377F53EF850979610AE40DD151AC87F3FB6D9AB46B5AE972F2C7() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_30722E56092D3AA81E1766F353BBFC98CD5A92568484C3FD7FDA3771683FBC3F */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_30722E56092D3AA81E1766F353BBFC98CD5A92568484C3FD7FDA3771683FBC3F(void) {
    ALOGD("_libh264dec_asm_se_30722E56092D3AA81E1766F353BBFC98CD5A92568484C3FD7FDA3771683FBC3F() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_6FED3A8F72B29991ECFDBEBACE60D6B0C677AE8C7D9EFDEBC6A1BB4A65730716 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_6FED3A8F72B29991ECFDBEBACE60D6B0C677AE8C7D9EFDEBC6A1BB4A65730716(void) {
    ALOGD("_libh264dec_asm_se_6FED3A8F72B29991ECFDBEBACE60D6B0C677AE8C7D9EFDEBC6A1BB4A65730716() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_AA91483248189F65DF7D465A95D9FE99A4823FB0F9AA6F3CCABA20F965C39D77 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_AA91483248189F65DF7D465A95D9FE99A4823FB0F9AA6F3CCABA20F965C39D77(void) {
    ALOGD("_libh264dec_asm_se_AA91483248189F65DF7D465A95D9FE99A4823FB0F9AA6F3CCABA20F965C39D77() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_AA91483248189F65DF7D465A95D9FE9988A2A7F58369368EC5EC6FBF551618ACFDC7111F7BA3E8FBBB07C2899B3E2BF4 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_AA91483248189F65DF7D465A95D9FE9988A2A7F58369368EC5EC6FBF551618ACFDC7111F7BA3E8FBBB07C2899B3E2BF4(void) {
    ALOGD("_libh264dec_asm_se_AA91483248189F65DF7D465A95D9FE9988A2A7F58369368EC5EC6FBF551618ACFDC7111F7BA3E8FBBB07C2899B3E2BF4() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_1F64A08232F2908E29BAA3F53C3627BB18BAA4578C88B23F3DD9322A68E8CA92 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_1F64A08232F2908E29BAA3F53C3627BB18BAA4578C88B23F3DD9322A68E8CA92(void) {
    ALOGD("_libh264dec_asm_se_1F64A08232F2908E29BAA3F53C3627BB18BAA4578C88B23F3DD9322A68E8CA92() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_F6BDA646137C174B90EE4C4183FBED48 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_F6BDA646137C174B90EE4C4183FBED48(void) {
    ALOGD("_libh264dec_asm_se_F6BDA646137C174B90EE4C4183FBED48() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_EE7AB5ADED7027EFC1CE5AB4AAB817EA2BA025E9AEAE5691D91C8D851043B4B5 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_EE7AB5ADED7027EFC1CE5AB4AAB817EA2BA025E9AEAE5691D91C8D851043B4B5(void) {
    ALOGD("_libh264dec_asm_se_EE7AB5ADED7027EFC1CE5AB4AAB817EA2BA025E9AEAE5691D91C8D851043B4B5() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_B17D535B3CF7F54A2ACDD4789079C3B2F5150479EE3CB6575BBED3882156935D */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_B17D535B3CF7F54A2ACDD4789079C3B2F5150479EE3CB6575BBED3882156935D(void) {
    ALOGD("_libh264dec_asm_se_B17D535B3CF7F54A2ACDD4789079C3B2F5150479EE3CB6575BBED3882156935D() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_07F57C8CCEE1DD0A52D4984FC4DF1693DE92F3913B071F827613C2F63D050836 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_07F57C8CCEE1DD0A52D4984FC4DF1693DE92F3913B071F827613C2F63D050836(void) {
    ALOGD("_libh264dec_asm_se_07F57C8CCEE1DD0A52D4984FC4DF1693DE92F3913B071F827613C2F63D050836() called");
    return 0;
}

/* Exported Object: h264bsdProcessBlockSel */
extern "C" __attribute__((visibility("default"))) void* h264bsdProcessBlockSel = NULL;

/* Demangled: _libh264dec_asm_se_5A84218A6939F7A85EA29881BAC68B49DA359825F10B53F202DC5C750B2F07C1 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_5A84218A6939F7A85EA29881BAC68B49DA359825F10B53F202DC5C750B2F07C1(void) {
    ALOGD("_libh264dec_asm_se_5A84218A6939F7A85EA29881BAC68B49DA359825F10B53F202DC5C750B2F07C1() called");
    return 0;
}

/* Exported Object: TrailingOneTbl1 */
extern "C" __attribute__((visibility("default"))) void* TrailingOneTbl1 = NULL;

/* Exported Object: TrailingOneTbl2 */
extern "C" __attribute__((visibility("default"))) void* TrailingOneTbl2 = NULL;

/* Exported Object: TrailingOneTbl3 */
extern "C" __attribute__((visibility("default"))) void* TrailingOneTbl3 = NULL;

/* Demangled: _libh264dec_asm_se_8D2A8DFE8624E39376ED68AEC5030072B72881E9617B4B5B48E49B4D3F18E572 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_8D2A8DFE8624E39376ED68AEC5030072B72881E9617B4B5B48E49B4D3F18E572(void) {
    ALOGD("_libh264dec_asm_se_8D2A8DFE8624E39376ED68AEC5030072B72881E9617B4B5B48E49B4D3F18E572() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_8D2A8DFE8624E39376ED68AEC503007231B539E0A7021E90F1B57D0089904F8D */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_8D2A8DFE8624E39376ED68AEC503007231B539E0A7021E90F1B57D0089904F8D(void) {
    ALOGD("_libh264dec_asm_se_8D2A8DFE8624E39376ED68AEC503007231B539E0A7021E90F1B57D0089904F8D() called");
    return 0;
}

/* Exported Object: h264_norm_shift */
extern "C" __attribute__((visibility("default"))) void* h264_norm_shift = NULL;

/* Demangled: _libh264dec_asm_se_8F6F9E220E74BCDED65001234AF9C015 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_8F6F9E220E74BCDED65001234AF9C015(void) {
    ALOGD("_libh264dec_asm_se_8F6F9E220E74BCDED65001234AF9C015() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_02513073AAB191CCF261A692B58B2C21DF0BCA579CCD4C6AA7B7A76B29EB9961 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_02513073AAB191CCF261A692B58B2C21DF0BCA579CCD4C6AA7B7A76B29EB9961(void) {
    ALOGD("_libh264dec_asm_se_02513073AAB191CCF261A692B58B2C21DF0BCA579CCD4C6AA7B7A76B29EB9961() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_5643C51D5A2981C9C95190BD50266EF507A20A581E6FE11BF2EAA7225498A6EB */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_5643C51D5A2981C9C95190BD50266EF507A20A581E6FE11BF2EAA7225498A6EB(void) {
    ALOGD("_libh264dec_asm_se_5643C51D5A2981C9C95190BD50266EF507A20A581E6FE11BF2EAA7225498A6EB() called");
    return 0;
}

/* Exported Object: h264bsdClip_weighted */
extern "C" __attribute__((visibility("default"))) void* h264bsdClip_weighted = NULL;

/* Demangled: _libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFDBFAEA7BB951B0C1B876B7FB1EF0833ABFB65DE32D36C93A87B66D6629FCFC481 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFDBFAEA7BB951B0C1B876B7FB1EF0833ABFB65DE32D36C93A87B66D6629FCFC481(void) {
    ALOGD("_libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFDBFAEA7BB951B0C1B876B7FB1EF0833ABFB65DE32D36C93A87B66D6629FCFC481() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFD5DFED1F3D3A88C81FF26E6784464AB48FB65DE32D36C93A87B66D6629FCFC481 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFD5DFED1F3D3A88C81FF26E6784464AB48FB65DE32D36C93A87B66D6629FCFC481(void) {
    ALOGD("_libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFD5DFED1F3D3A88C81FF26E6784464AB48FB65DE32D36C93A87B66D6629FCFC481() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_A84B549A0415688653A0F78CB373301AE001730D3D492FB2161C03F69EE7EC1A */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_A84B549A0415688653A0F78CB373301AE001730D3D492FB2161C03F69EE7EC1A(void) {
    ALOGD("_libh264dec_asm_se_A84B549A0415688653A0F78CB373301AE001730D3D492FB2161C03F69EE7EC1A() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_A5544C5308A9ED0FD474DA5A6CF024568CDC75C65B3857853D149F19F8F80911 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_A5544C5308A9ED0FD474DA5A6CF024568CDC75C65B3857853D149F19F8F80911(void) {
    ALOGD("_libh264dec_asm_se_A5544C5308A9ED0FD474DA5A6CF024568CDC75C65B3857853D149F19F8F80911() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFD72697F1C258709B313F5B338D3F6D2D97802AB756475C3A0FD9CC386462AF9EB */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFD72697F1C258709B313F5B338D3F6D2D97802AB756475C3A0FD9CC386462AF9EB(void) {
    ALOGD("_libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFD72697F1C258709B313F5B338D3F6D2D97802AB756475C3A0FD9CC386462AF9EB() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_86C8F254507F9854BF77CECC7896536037A7C3FD91F03C86AE18274B7BDC2664 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_86C8F254507F9854BF77CECC7896536037A7C3FD91F03C86AE18274B7BDC2664(void) {
    ALOGD("_libh264dec_asm_se_86C8F254507F9854BF77CECC7896536037A7C3FD91F03C86AE18274B7BDC2664() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFDBFAEA7BB951B0C1B876B7FB1EF0833ABADEB9694520C7BDFD4F0800AC5FBA0E6 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFDBFAEA7BB951B0C1B876B7FB1EF0833ABADEB9694520C7BDFD4F0800AC5FBA0E6(void) {
    ALOGD("_libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFDBFAEA7BB951B0C1B876B7FB1EF0833ABADEB9694520C7BDFD4F0800AC5FBA0E6() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFD5DFED1F3D3A88C81FF26E6784464AB48ADEB9694520C7BDFD4F0800AC5FBA0E6 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFD5DFED1F3D3A88C81FF26E6784464AB48ADEB9694520C7BDFD4F0800AC5FBA0E6(void) {
    ALOGD("_libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFD5DFED1F3D3A88C81FF26E6784464AB48ADEB9694520C7BDFD4F0800AC5FBA0E6() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFD72697F1C258709B313F5B338D3F6D2D9EF440790D1B5B1AEC93F04482C1FACBE */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFD72697F1C258709B313F5B338D3F6D2D9EF440790D1B5B1AEC93F04482C1FACBE(void) {
    ALOGD("_libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFD72697F1C258709B313F5B338D3F6D2D9EF440790D1B5B1AEC93F04482C1FACBE() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFDBFAEA7BB951B0C1B876B7FB1EF0833AB56946A7BD655070304949106BB03D440 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFDBFAEA7BB951B0C1B876B7FB1EF0833AB56946A7BD655070304949106BB03D440(void) {
    ALOGD("_libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFDBFAEA7BB951B0C1B876B7FB1EF0833AB56946A7BD655070304949106BB03D440() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFD5DFED1F3D3A88C81FF26E6784464AB4856946A7BD655070304949106BB03D440 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFD5DFED1F3D3A88C81FF26E6784464AB4856946A7BD655070304949106BB03D440(void) {
    ALOGD("_libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFD5DFED1F3D3A88C81FF26E6784464AB4856946A7BD655070304949106BB03D440() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFD72697F1C258709B313F5B338D3F6D2D9DD99A91BF179F6AA878CA4AE692F49A5 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFD72697F1C258709B313F5B338D3F6D2D9DD99A91BF179F6AA878CA4AE692F49A5(void) {
    ALOGD("_libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFD72697F1C258709B313F5B338D3F6D2D9DD99A91BF179F6AA878CA4AE692F49A5() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_838C70E88633C4EC1C176D52BEF6A1BBE52E79BC888C083277B81AFD17F60CC0 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_838C70E88633C4EC1C176D52BEF6A1BBE52E79BC888C083277B81AFD17F60CC0(void) {
    ALOGD("_libh264dec_asm_se_838C70E88633C4EC1C176D52BEF6A1BBE52E79BC888C083277B81AFD17F60CC0() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFD159704A5AE606F06E8DBE48D0AC3B465 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFD159704A5AE606F06E8DBE48D0AC3B465(void) {
    ALOGD("_libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFD159704A5AE606F06E8DBE48D0AC3B465() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFD2E111C500825B0928B529CCB3EE8C311DBA6E7FEC30B3A441D2D1AB389C673BF */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFD2E111C500825B0928B529CCB3EE8C311DBA6E7FEC30B3A441D2D1AB389C673BF(void) {
    ALOGD("_libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFD2E111C500825B0928B529CCB3EE8C311DBA6E7FEC30B3A441D2D1AB389C673BF() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFD2E111C500825B0928B529CCB3EE8C311E1817F917254E56D606DE03133AE2661 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFD2E111C500825B0928B529CCB3EE8C311E1817F917254E56D606DE03133AE2661(void) {
    ALOGD("_libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFD2E111C500825B0928B529CCB3EE8C311E1817F917254E56D606DE03133AE2661() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFD936F031489AD16F56DA3125B54551BE7 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFD936F031489AD16F56DA3125B54551BE7(void) {
    ALOGD("_libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFD936F031489AD16F56DA3125B54551BE7() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFD2E111C500825B0928B529CCB3EE8C311ECDFD6C7EFC3F7F4C167119599B62C2A */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFD2E111C500825B0928B529CCB3EE8C311ECDFD6C7EFC3F7F4C167119599B62C2A(void) {
    ALOGD("_libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFD2E111C500825B0928B529CCB3EE8C311ECDFD6C7EFC3F7F4C167119599B62C2A() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFDBCB09259447370078133AB4348DDD205 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFDBCB09259447370078133AB4348DDD205(void) {
    ALOGD("_libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFDBCB09259447370078133AB4348DDD205() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_1F64A08232F2908E29BAA3F53C3627BB1E79F221D43AD25511F5C33C4EC1A6850D4DF8B414F8292D7E7A61AB2E0CD7B7 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_1F64A08232F2908E29BAA3F53C3627BB1E79F221D43AD25511F5C33C4EC1A6850D4DF8B414F8292D7E7A61AB2E0CD7B7(void) {
    ALOGD("_libh264dec_asm_se_1F64A08232F2908E29BAA3F53C3627BB1E79F221D43AD25511F5C33C4EC1A6850D4DF8B414F8292D7E7A61AB2E0CD7B7() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_1F64A08232F2908E29BAA3F53C3627BB43112CDFC904D6563BD09A8E6F054E90 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_1F64A08232F2908E29BAA3F53C3627BB43112CDFC904D6563BD09A8E6F054E90(void) {
    ALOGD("_libh264dec_asm_se_1F64A08232F2908E29BAA3F53C3627BB43112CDFC904D6563BD09A8E6F054E90() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_C5B81C501BA9B11CD118E67956919BB9A003939392583F151C1E863C45EE8060 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_C5B81C501BA9B11CD118E67956919BB9A003939392583F151C1E863C45EE8060(void) {
    ALOGD("_libh264dec_asm_se_C5B81C501BA9B11CD118E67956919BB9A003939392583F151C1E863C45EE8060() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_07F57C8CCEE1DD0A52D4984FC4DF169353A09787C84B324AAEFB2472F405BA21 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_07F57C8CCEE1DD0A52D4984FC4DF169353A09787C84B324AAEFB2472F405BA21(void) {
    ALOGD("_libh264dec_asm_se_07F57C8CCEE1DD0A52D4984FC4DF169353A09787C84B324AAEFB2472F405BA21() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_07F57C8CCEE1DD0A52D4984FC4DF1693179736EF65206961AB86BB013F283EEF */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_07F57C8CCEE1DD0A52D4984FC4DF1693179736EF65206961AB86BB013F283EEF(void) {
    ALOGD("_libh264dec_asm_se_07F57C8CCEE1DD0A52D4984FC4DF1693179736EF65206961AB86BB013F283EEF() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_302A3CB905B757B7E59C061ADED469D0 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_302A3CB905B757B7E59C061ADED469D0(void) {
    ALOGD("_libh264dec_asm_se_302A3CB905B757B7E59C061ADED469D0() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_884CA6D4D8C0377F53EF850979610AE43BAAFF27EED47812AC45F26DC450C701 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_884CA6D4D8C0377F53EF850979610AE43BAAFF27EED47812AC45F26DC450C701(void) {
    ALOGD("_libh264dec_asm_se_884CA6D4D8C0377F53EF850979610AE43BAAFF27EED47812AC45F26DC450C701() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_884CA6D4D8C0377F53EF850979610AE46D6BE378FFE58F65557CDB8CA88F542F */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_884CA6D4D8C0377F53EF850979610AE46D6BE378FFE58F65557CDB8CA88F542F(void) {
    ALOGD("_libh264dec_asm_se_884CA6D4D8C0377F53EF850979610AE46D6BE378FFE58F65557CDB8CA88F542F() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_884CA6D4D8C0377F53EF850979610AE48BC8E0D0B9492538F879EE514140F0E9 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_884CA6D4D8C0377F53EF850979610AE48BC8E0D0B9492538F879EE514140F0E9(void) {
    ALOGD("_libh264dec_asm_se_884CA6D4D8C0377F53EF850979610AE48BC8E0D0B9492538F879EE514140F0E9() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_884CA6D4D8C0377F53EF850979610AE4F81572384B531390C48A6BB320DE0C32 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_884CA6D4D8C0377F53EF850979610AE4F81572384B531390C48A6BB320DE0C32(void) {
    ALOGD("_libh264dec_asm_se_884CA6D4D8C0377F53EF850979610AE4F81572384B531390C48A6BB320DE0C32() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_6C4BCED0D5C489AFC24D5F34E054DF340900D5877059B2054AED912855CB6B22 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_6C4BCED0D5C489AFC24D5F34E054DF340900D5877059B2054AED912855CB6B22(void) {
    ALOGD("_libh264dec_asm_se_6C4BCED0D5C489AFC24D5F34E054DF340900D5877059B2054AED912855CB6B22() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_EB3BE7D2D867F8265274AC82FBB0EDE8EAF7FB729E69C6A9C153632B506DBCDB */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_EB3BE7D2D867F8265274AC82FBB0EDE8EAF7FB729E69C6A9C153632B506DBCDB(void) {
    ALOGD("_libh264dec_asm_se_EB3BE7D2D867F8265274AC82FBB0EDE8EAF7FB729E69C6A9C153632B506DBCDB() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_EB3BE7D2D867F8265274AC82FBB0EDE8D4BDC10478954A120194DFE7ED80CAF3 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_EB3BE7D2D867F8265274AC82FBB0EDE8D4BDC10478954A120194DFE7ED80CAF3(void) {
    ALOGD("_libh264dec_asm_se_EB3BE7D2D867F8265274AC82FBB0EDE8D4BDC10478954A120194DFE7ED80CAF3() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_EB3BE7D2D867F8265274AC82FBB0EDE8D176F6E9E943A9A82F0CDA68E8DB1A8E */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_EB3BE7D2D867F8265274AC82FBB0EDE8D176F6E9E943A9A82F0CDA68E8DB1A8E(void) {
    ALOGD("_libh264dec_asm_se_EB3BE7D2D867F8265274AC82FBB0EDE8D176F6E9E943A9A82F0CDA68E8DB1A8E() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_2CF69948756C5465A2E7E3326ECF4B3B2855AA50487815A8F8130DCC40D36C72 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_2CF69948756C5465A2E7E3326ECF4B3B2855AA50487815A8F8130DCC40D36C72(void) {
    ALOGD("_libh264dec_asm_se_2CF69948756C5465A2E7E3326ECF4B3B2855AA50487815A8F8130DCC40D36C72() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_884CA6D4D8C0377F53EF850979610AE47CE1FCC3E6FD128630CA268F8D075DF2 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_884CA6D4D8C0377F53EF850979610AE47CE1FCC3E6FD128630CA268F8D075DF2(void) {
    ALOGD("_libh264dec_asm_se_884CA6D4D8C0377F53EF850979610AE47CE1FCC3E6FD128630CA268F8D075DF2() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_6E940F998006C59C4F654EB3099320BE706694C37CD930122BDF3005AEB6235D */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_6E940F998006C59C4F654EB3099320BE706694C37CD930122BDF3005AEB6235D(void) {
    ALOGD("_libh264dec_asm_se_6E940F998006C59C4F654EB3099320BE706694C37CD930122BDF3005AEB6235D() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_6E940F998006C59C4F654EB3099320BEA8F1954CCAE9D8708D7E5A9F1BBB4301 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_6E940F998006C59C4F654EB3099320BEA8F1954CCAE9D8708D7E5A9F1BBB4301(void) {
    ALOGD("_libh264dec_asm_se_6E940F998006C59C4F654EB3099320BEA8F1954CCAE9D8708D7E5A9F1BBB4301() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_6E940F998006C59C4F654EB3099320BE12BE1AC34DC90401F8AA3DA1094496E1 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_6E940F998006C59C4F654EB3099320BE12BE1AC34DC90401F8AA3DA1094496E1(void) {
    ALOGD("_libh264dec_asm_se_6E940F998006C59C4F654EB3099320BE12BE1AC34DC90401F8AA3DA1094496E1() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_79AA2E8B0C65D85DF0CFA688BA407A72FA2281F58A2519E31C284A998178BA5C3B401DC5D24F613FC9AC71F6596874EA */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_79AA2E8B0C65D85DF0CFA688BA407A72FA2281F58A2519E31C284A998178BA5C3B401DC5D24F613FC9AC71F6596874EA(void) {
    ALOGD("_libh264dec_asm_se_79AA2E8B0C65D85DF0CFA688BA407A72FA2281F58A2519E31C284A998178BA5C3B401DC5D24F613FC9AC71F6596874EA() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_EB3BE7D2D867F8265274AC82FBB0EDE854C400C080F3CE6E3AAFB21478B227B7 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_EB3BE7D2D867F8265274AC82FBB0EDE854C400C080F3CE6E3AAFB21478B227B7(void) {
    ALOGD("_libh264dec_asm_se_EB3BE7D2D867F8265274AC82FBB0EDE854C400C080F3CE6E3AAFB21478B227B7() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_4D375E3AB312856A31F69BEAB5A6C836 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_4D375E3AB312856A31F69BEAB5A6C836(void) {
    ALOGD("_libh264dec_asm_se_4D375E3AB312856A31F69BEAB5A6C836() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFD72697F1C258709B313F5B338D3F6D2D9EEBD2BEA7449D2E06A0740AE17ACEF54 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFD72697F1C258709B313F5B338D3F6D2D9EEBD2BEA7449D2E06A0740AE17ACEF54(void) {
    ALOGD("_libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFD72697F1C258709B313F5B338D3F6D2D9EEBD2BEA7449D2E06A0740AE17ACEF54() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFD72697F1C258709B313F5B338D3F6D2D9971B09CCD410EB7F505A44923D292A6A */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFD72697F1C258709B313F5B338D3F6D2D9971B09CCD410EB7F505A44923D292A6A(void) {
    ALOGD("_libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFD72697F1C258709B313F5B338D3F6D2D9971B09CCD410EB7F505A44923D292A6A() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFDBFAEA7BB951B0C1B876B7FB1EF0833AB85F725349DAFFD5FAB16B3E6A625E92F */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFDBFAEA7BB951B0C1B876B7FB1EF0833AB85F725349DAFFD5FAB16B3E6A625E92F(void) {
    ALOGD("_libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFDBFAEA7BB951B0C1B876B7FB1EF0833AB85F725349DAFFD5FAB16B3E6A625E92F() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFDBFAEA7BB951B0C1B876B7FB1EF0833AB373F2C1C5F4033DC9DB19A0ED6A855BA */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFDBFAEA7BB951B0C1B876B7FB1EF0833AB373F2C1C5F4033DC9DB19A0ED6A855BA(void) {
    ALOGD("_libh264dec_asm_se_C3C2D6D64747D905E7C4904541ECCFFDBFAEA7BB951B0C1B876B7FB1EF0833AB373F2C1C5F4033DC9DB19A0ED6A855BA() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_2BFA575DB50814EF4AFEC8BE9F1B4D369BFE07486EC3BCBE6CBDC1D14171280AF370137EE0D4B9C66ACB4632C4A43C0B */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_2BFA575DB50814EF4AFEC8BE9F1B4D369BFE07486EC3BCBE6CBDC1D14171280AF370137EE0D4B9C66ACB4632C4A43C0B(void) {
    ALOGD("_libh264dec_asm_se_2BFA575DB50814EF4AFEC8BE9F1B4D369BFE07486EC3BCBE6CBDC1D14171280AF370137EE0D4B9C66ACB4632C4A43C0B() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_6BF868B5A094B4F1AF73AD6E707B96C89ECFE88E1354F66E550F5F800BCEA0BD */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_6BF868B5A094B4F1AF73AD6E707B96C89ECFE88E1354F66E550F5F800BCEA0BD(void) {
    ALOGD("_libh264dec_asm_se_6BF868B5A094B4F1AF73AD6E707B96C89ECFE88E1354F66E550F5F800BCEA0BD() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_936466A5988CA4B17F9288D3F167380B */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_936466A5988CA4B17F9288D3F167380B(void) {
    ALOGD("_libh264dec_asm_se_936466A5988CA4B17F9288D3F167380B() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_2447D039705B3BA5E120EAB84C3C6330 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_2447D039705B3BA5E120EAB84C3C6330(void) {
    ALOGD("_libh264dec_asm_se_2447D039705B3BA5E120EAB84C3C6330() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_EC5ABC785A4C59B6BAD4965A9945298F */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_EC5ABC785A4C59B6BAD4965A9945298F(void) {
    ALOGD("_libh264dec_asm_se_EC5ABC785A4C59B6BAD4965A9945298F() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_44BF9C73FDDEF2C3D57439070CB83797FB65DE32D36C93A87B66D6629FCFC481 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_44BF9C73FDDEF2C3D57439070CB83797FB65DE32D36C93A87B66D6629FCFC481(void) {
    ALOGD("_libh264dec_asm_se_44BF9C73FDDEF2C3D57439070CB83797FB65DE32D36C93A87B66D6629FCFC481() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_44BF9C73FDDEF2C3D57439070CB83797ADEB9694520C7BDFD4F0800AC5FBA0E6 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_44BF9C73FDDEF2C3D57439070CB83797ADEB9694520C7BDFD4F0800AC5FBA0E6(void) {
    ALOGD("_libh264dec_asm_se_44BF9C73FDDEF2C3D57439070CB83797ADEB9694520C7BDFD4F0800AC5FBA0E6() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_A9504B64D9977CA2FAAA24F059125346007B2AA3BEC5ADCB79AB4221FA443F08 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_A9504B64D9977CA2FAAA24F059125346007B2AA3BEC5ADCB79AB4221FA443F08(void) {
    ALOGD("_libh264dec_asm_se_A9504B64D9977CA2FAAA24F059125346007B2AA3BEC5ADCB79AB4221FA443F08() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_A7E87F7F75B442C0EC6A418F781210F32CB0E20CEF78F2D975F8FFB35BA1EC9C */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_A7E87F7F75B442C0EC6A418F781210F32CB0E20CEF78F2D975F8FFB35BA1EC9C(void) {
    ALOGD("_libh264dec_asm_se_A7E87F7F75B442C0EC6A418F781210F32CB0E20CEF78F2D975F8FFB35BA1EC9C() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_4F9ACAF7724DD6EB4B9AFECA369AB02E787D1514823137407D7BABA528ACEE7F */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_4F9ACAF7724DD6EB4B9AFECA369AB02E787D1514823137407D7BABA528ACEE7F(void) {
    ALOGD("_libh264dec_asm_se_4F9ACAF7724DD6EB4B9AFECA369AB02E787D1514823137407D7BABA528ACEE7F() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_4F669F3F8215AC9217CEB0D957F429AAA9F45E7A95D653B7BB17A1848CD38329 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_4F669F3F8215AC9217CEB0D957F429AAA9F45E7A95D653B7BB17A1848CD38329(void) {
    ALOGD("_libh264dec_asm_se_4F669F3F8215AC9217CEB0D957F429AAA9F45E7A95D653B7BB17A1848CD38329() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_4F669F3F8215AC9217CEB0D957F429AAB14DBEF002CA01CCA6D5D6355FC03176 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_4F669F3F8215AC9217CEB0D957F429AAB14DBEF002CA01CCA6D5D6355FC03176(void) {
    ALOGD("_libh264dec_asm_se_4F669F3F8215AC9217CEB0D957F429AAB14DBEF002CA01CCA6D5D6355FC03176() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_4F669F3F8215AC9217CEB0D957F429AAE35509BC4F3B9ECDD50CD09CEFBBA14D */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_4F669F3F8215AC9217CEB0D957F429AAE35509BC4F3B9ECDD50CD09CEFBBA14D(void) {
    ALOGD("_libh264dec_asm_se_4F669F3F8215AC9217CEB0D957F429AAE35509BC4F3B9ECDD50CD09CEFBBA14D() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_EFF59556CAE15CEEE3B5E7BF25C1C0463C516FF55C9EFBDC9B0118B27382DC81 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_EFF59556CAE15CEEE3B5E7BF25C1C0463C516FF55C9EFBDC9B0118B27382DC81(void) {
    ALOGD("_libh264dec_asm_se_EFF59556CAE15CEEE3B5E7BF25C1C0463C516FF55C9EFBDC9B0118B27382DC81() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_23E5D37CEF90E31767E0FE33D92D6BC9ADDCC2B75C154B4ADF7D5849280D7786370302110DD1772351D39E696CB49E1E */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_23E5D37CEF90E31767E0FE33D92D6BC9ADDCC2B75C154B4ADF7D5849280D7786370302110DD1772351D39E696CB49E1E(void) {
    ALOGD("_libh264dec_asm_se_23E5D37CEF90E31767E0FE33D92D6BC9ADDCC2B75C154B4ADF7D5849280D7786370302110DD1772351D39E696CB49E1E() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_18D78CE21DB9E2387E05A7813770DA0819A3562E046375AB8FCAE90AC8A9F5754A38499CFB7909D7D10CDE8FC688E91F */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_18D78CE21DB9E2387E05A7813770DA0819A3562E046375AB8FCAE90AC8A9F5754A38499CFB7909D7D10CDE8FC688E91F(void) {
    ALOGD("_libh264dec_asm_se_18D78CE21DB9E2387E05A7813770DA0819A3562E046375AB8FCAE90AC8A9F5754A38499CFB7909D7D10CDE8FC688E91F() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_C2A19D260CF26CA7D71B9737D9CB247CA5B3ABE87806C85DC1865A9549C372F3056C8609652E9053A2854DE3DE9E0E6C */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_C2A19D260CF26CA7D71B9737D9CB247CA5B3ABE87806C85DC1865A9549C372F3056C8609652E9053A2854DE3DE9E0E6C(void) {
    ALOGD("_libh264dec_asm_se_C2A19D260CF26CA7D71B9737D9CB247CA5B3ABE87806C85DC1865A9549C372F3056C8609652E9053A2854DE3DE9E0E6C() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB418F2E0641B92B267CF27589FD5FA6E9B75FCCCA991898218137BB0D95DBCC1CFC404AB388505F2E6E424305EDD8B4DB9E */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB418F2E0641B92B267CF27589FD5FA6E9B75FCCCA991898218137BB0D95DBCC1CFC404AB388505F2E6E424305EDD8B4DB9E(void) {
    ALOGD("_libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB418F2E0641B92B267CF27589FD5FA6E9B75FCCCA991898218137BB0D95DBCC1CFC404AB388505F2E6E424305EDD8B4DB9E() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB418F2E0641B92B267CF27589FD5FA6E9B75FCCCA991898218137BB0D95DBCC1CFC56DA0BB30FD893A3A42273438F0A5B5A */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB418F2E0641B92B267CF27589FD5FA6E9B75FCCCA991898218137BB0D95DBCC1CFC56DA0BB30FD893A3A42273438F0A5B5A(void) {
    ALOGD("_libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB418F2E0641B92B267CF27589FD5FA6E9B75FCCCA991898218137BB0D95DBCC1CFC56DA0BB30FD893A3A42273438F0A5B5A() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB418F2E0641B92B267CF27589FD5FA6E9B75FCCCA991898218137BB0D95DBCC1CFC */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB418F2E0641B92B267CF27589FD5FA6E9B75FCCCA991898218137BB0D95DBCC1CFC(void) {
    ALOGD("_libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB418F2E0641B92B267CF27589FD5FA6E9B75FCCCA991898218137BB0D95DBCC1CFC() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB418F2E0641B92B267CF27589FD5FA6E9B75FCCCA991898218137BB0D95DBCC1CFCC29351FC6B552323E21B165B2F1F507A */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB418F2E0641B92B267CF27589FD5FA6E9B75FCCCA991898218137BB0D95DBCC1CFCC29351FC6B552323E21B165B2F1F507A(void) {
    ALOGD("_libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB418F2E0641B92B267CF27589FD5FA6E9B75FCCCA991898218137BB0D95DBCC1CFCC29351FC6B552323E21B165B2F1F507A() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB418F2E0641B92B267CF27589FD5FA6E9B74C0D84316A9D662F815DB36617C10CC4 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB418F2E0641B92B267CF27589FD5FA6E9B74C0D84316A9D662F815DB36617C10CC4(void) {
    ALOGD("_libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB418F2E0641B92B267CF27589FD5FA6E9B74C0D84316A9D662F815DB36617C10CC4() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_6E338FBDFB79A2C6A3905E6CF5A30DDE58BF369046D79F36CB792D8645E5B035A19552079860964C9083C290CE631664 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_6E338FBDFB79A2C6A3905E6CF5A30DDE58BF369046D79F36CB792D8645E5B035A19552079860964C9083C290CE631664(void) {
    ALOGD("_libh264dec_asm_se_6E338FBDFB79A2C6A3905E6CF5A30DDE58BF369046D79F36CB792D8645E5B035A19552079860964C9083C290CE631664() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_6E338FBDFB79A2C6A3905E6CF5A30DDE58BF369046D79F36CB792D8645E5B035704CDB8D9C7E3C100385DE13ED27570A033F3D90096B88F1AE159C64EBFB895E */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_6E338FBDFB79A2C6A3905E6CF5A30DDE58BF369046D79F36CB792D8645E5B035704CDB8D9C7E3C100385DE13ED27570A033F3D90096B88F1AE159C64EBFB895E(void) {
    ALOGD("_libh264dec_asm_se_6E338FBDFB79A2C6A3905E6CF5A30DDE58BF369046D79F36CB792D8645E5B035704CDB8D9C7E3C100385DE13ED27570A033F3D90096B88F1AE159C64EBFB895E() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_6E338FBDFB79A2C6A3905E6CF5A30DDE58BF369046D79F36CB792D8645E5B03570AA8C36427EF30109A9D41C98EE6B1F */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_6E338FBDFB79A2C6A3905E6CF5A30DDE58BF369046D79F36CB792D8645E5B03570AA8C36427EF30109A9D41C98EE6B1F(void) {
    ALOGD("_libh264dec_asm_se_6E338FBDFB79A2C6A3905E6CF5A30DDE58BF369046D79F36CB792D8645E5B03570AA8C36427EF30109A9D41C98EE6B1F() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_6E338FBDFB79A2C6A3905E6CF5A30DDE1A030DC35C91C11EF10D8BD4C94346ABA19552079860964C9083C290CE631664 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_6E338FBDFB79A2C6A3905E6CF5A30DDE1A030DC35C91C11EF10D8BD4C94346ABA19552079860964C9083C290CE631664(void) {
    ALOGD("_libh264dec_asm_se_6E338FBDFB79A2C6A3905E6CF5A30DDE1A030DC35C91C11EF10D8BD4C94346ABA19552079860964C9083C290CE631664() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_6E338FBDFB79A2C6A3905E6CF5A30DDE1A030DC35C91C11EF10D8BD4C94346AB704CDB8D9C7E3C100385DE13ED27570A033F3D90096B88F1AE159C64EBFB895E */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_6E338FBDFB79A2C6A3905E6CF5A30DDE1A030DC35C91C11EF10D8BD4C94346AB704CDB8D9C7E3C100385DE13ED27570A033F3D90096B88F1AE159C64EBFB895E(void) {
    ALOGD("_libh264dec_asm_se_6E338FBDFB79A2C6A3905E6CF5A30DDE1A030DC35C91C11EF10D8BD4C94346AB704CDB8D9C7E3C100385DE13ED27570A033F3D90096B88F1AE159C64EBFB895E() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_6E338FBDFB79A2C6A3905E6CF5A30DDE1A030DC35C91C11EF10D8BD4C94346AB70AA8C36427EF30109A9D41C98EE6B1F */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_6E338FBDFB79A2C6A3905E6CF5A30DDE1A030DC35C91C11EF10D8BD4C94346AB70AA8C36427EF30109A9D41C98EE6B1F(void) {
    ALOGD("_libh264dec_asm_se_6E338FBDFB79A2C6A3905E6CF5A30DDE1A030DC35C91C11EF10D8BD4C94346AB70AA8C36427EF30109A9D41C98EE6B1F() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB418F2E0641B92B267CF27589FD5FA6E9B73013F41E21C77A313CC82405ABBB3D47404AB388505F2E6E424305EDD8B4DB9E */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB418F2E0641B92B267CF27589FD5FA6E9B73013F41E21C77A313CC82405ABBB3D47404AB388505F2E6E424305EDD8B4DB9E(void) {
    ALOGD("_libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB418F2E0641B92B267CF27589FD5FA6E9B73013F41E21C77A313CC82405ABBB3D47404AB388505F2E6E424305EDD8B4DB9E() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB418F2E0641B92B267CF27589FD5FA6E9B73013F41E21C77A313CC82405ABBB3D4756DA0BB30FD893A3A42273438F0A5B5A */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB418F2E0641B92B267CF27589FD5FA6E9B73013F41E21C77A313CC82405ABBB3D4756DA0BB30FD893A3A42273438F0A5B5A(void) {
    ALOGD("_libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB418F2E0641B92B267CF27589FD5FA6E9B73013F41E21C77A313CC82405ABBB3D4756DA0BB30FD893A3A42273438F0A5B5A() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB418F2E0641B92B267CF27589FD5FA6E9B73013F41E21C77A313CC82405ABBB3D47 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB418F2E0641B92B267CF27589FD5FA6E9B73013F41E21C77A313CC82405ABBB3D47(void) {
    ALOGD("_libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB418F2E0641B92B267CF27589FD5FA6E9B73013F41E21C77A313CC82405ABBB3D47() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB418F2E0641B92B267CF27589FD5FA6E9B73013F41E21C77A313CC82405ABBB3D47C29351FC6B552323E21B165B2F1F507A */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB418F2E0641B92B267CF27589FD5FA6E9B73013F41E21C77A313CC82405ABBB3D47C29351FC6B552323E21B165B2F1F507A(void) {
    ALOGD("_libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB418F2E0641B92B267CF27589FD5FA6E9B73013F41E21C77A313CC82405ABBB3D47C29351FC6B552323E21B165B2F1F507A() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB418F2E0641B92B267CF27589FD5FA6E9B7BF1293C9F1E1568CA6ACD0330A0C84F6 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB418F2E0641B92B267CF27589FD5FA6E9B7BF1293C9F1E1568CA6ACD0330A0C84F6(void) {
    ALOGD("_libh264dec_asm_se_A79C369B7A5D417D97C19A62E9E4AB418F2E0641B92B267CF27589FD5FA6E9B7BF1293C9F1E1568CA6ACD0330A0C84F6() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_6E338FBDFB79A2C6A3905E6CF5A30DDEF9A7C4F8BC3469176BDFBD80AF4D8BB65A7E37387C30BA0E5041D98B016202AF */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_6E338FBDFB79A2C6A3905E6CF5A30DDEF9A7C4F8BC3469176BDFBD80AF4D8BB65A7E37387C30BA0E5041D98B016202AF(void) {
    ALOGD("_libh264dec_asm_se_6E338FBDFB79A2C6A3905E6CF5A30DDEF9A7C4F8BC3469176BDFBD80AF4D8BB65A7E37387C30BA0E5041D98B016202AF() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_6E338FBDFB79A2C6A3905E6CF5A30DDE0E6C733F9C334B7C7506CAF30635D4425A7E37387C30BA0E5041D98B016202AF */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_6E338FBDFB79A2C6A3905E6CF5A30DDE0E6C733F9C334B7C7506CAF30635D4425A7E37387C30BA0E5041D98B016202AF(void) {
    ALOGD("_libh264dec_asm_se_6E338FBDFB79A2C6A3905E6CF5A30DDE0E6C733F9C334B7C7506CAF30635D4425A7E37387C30BA0E5041D98B016202AF() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_4DD7C2BF29DE064BB6AA138DA00B2858DE496EB4D6D33353A4673F40E0862DB45A744639F344739002A1255A2344373F */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_4DD7C2BF29DE064BB6AA138DA00B2858DE496EB4D6D33353A4673F40E0862DB45A744639F344739002A1255A2344373F(void) {
    ALOGD("_libh264dec_asm_se_4DD7C2BF29DE064BB6AA138DA00B2858DE496EB4D6D33353A4673F40E0862DB45A744639F344739002A1255A2344373F() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_4DD7C2BF29DE064BB6AA138DA00B28581549E670E7033DCA538A9D3B9841226AC4D670CB3ABB30CA1BF39F4B38D69E82 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_4DD7C2BF29DE064BB6AA138DA00B28581549E670E7033DCA538A9D3B9841226AC4D670CB3ABB30CA1BF39F4B38D69E82(void) {
    ALOGD("_libh264dec_asm_se_4DD7C2BF29DE064BB6AA138DA00B28581549E670E7033DCA538A9D3B9841226AC4D670CB3ABB30CA1BF39F4B38D69E82() called");
    return 0;
}

/* Exported Object: affneighbor_mbA */
extern "C" __attribute__((visibility("default"))) void* affneighbor_mbA = NULL;

/* Demangled: _libh264dec_asm_se_610E13730FD6DA4BE2FABFE18CB2BB5D57F497626500E5254B091D0DE9788D7A */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_610E13730FD6DA4BE2FABFE18CB2BB5D57F497626500E5254B091D0DE9788D7A(void) {
    ALOGD("_libh264dec_asm_se_610E13730FD6DA4BE2FABFE18CB2BB5D57F497626500E5254B091D0DE9788D7A() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_6021B392A2EF783CF6F474CB81E21C4B0905571C819B48752900C8ED4ACB155D */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_6021B392A2EF783CF6F474CB81E21C4B0905571C819B48752900C8ED4ACB155D(void) {
    ALOGD("_libh264dec_asm_se_6021B392A2EF783CF6F474CB81E21C4B0905571C819B48752900C8ED4ACB155D() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_8BA8AFDB156988BDEE4E5C26A77586F65F9F0FCE2677DEEFA22B0C0AC83F0EF6 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_8BA8AFDB156988BDEE4E5C26A77586F65F9F0FCE2677DEEFA22B0C0AC83F0EF6(void) {
    ALOGD("_libh264dec_asm_se_8BA8AFDB156988BDEE4E5C26A77586F65F9F0FCE2677DEEFA22B0C0AC83F0EF6() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_6021B392A2EF783CF6F474CB81E21C4BC831A4B9544BC60972C8D893E1E210C3 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_6021B392A2EF783CF6F474CB81E21C4BC831A4B9544BC60972C8D893E1E210C3(void) {
    ALOGD("_libh264dec_asm_se_6021B392A2EF783CF6F474CB81E21C4BC831A4B9544BC60972C8D893E1E210C3() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_6E2496A9007C70E69A4D95DC6E958D11 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_6E2496A9007C70E69A4D95DC6E958D11(void) {
    ALOGD("_libh264dec_asm_se_6E2496A9007C70E69A4D95DC6E958D11() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_CB1149726920FB45F850EECDDC068F27 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_CB1149726920FB45F850EECDDC068F27(void) {
    ALOGD("_libh264dec_asm_se_CB1149726920FB45F850EECDDC068F27() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_F1DB1BAF8E99021192A5627A49DA36A7 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_F1DB1BAF8E99021192A5627A49DA36A7(void) {
    ALOGD("_libh264dec_asm_se_F1DB1BAF8E99021192A5627A49DA36A7() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_8CF0FCB14A1DF323D4B55E2519D07D2C */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_8CF0FCB14A1DF323D4B55E2519D07D2C(void) {
    ALOGD("_libh264dec_asm_se_8CF0FCB14A1DF323D4B55E2519D07D2C() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_0D6318459C1006CF1D8EF788A53E1BD9 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_0D6318459C1006CF1D8EF788A53E1BD9(void) {
    ALOGD("_libh264dec_asm_se_0D6318459C1006CF1D8EF788A53E1BD9() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_725334B1C860369B825DB18CFAE4F587 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_725334B1C860369B825DB18CFAE4F587(void) {
    ALOGD("_libh264dec_asm_se_725334B1C860369B825DB18CFAE4F587() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_787CBE54789A7F9B5CF7164B04F24920 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_787CBE54789A7F9B5CF7164B04F24920(void) {
    ALOGD("_libh264dec_asm_se_787CBE54789A7F9B5CF7164B04F24920() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_66F41C1C89F10FFFFF54F930D322D87A */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_66F41C1C89F10FFFFF54F930D322D87A(void) {
    ALOGD("_libh264dec_asm_se_66F41C1C89F10FFFFF54F930D322D87A() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_C66C14F00D63411D2BFA91246CDB3C2E */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_C66C14F00D63411D2BFA91246CDB3C2E(void) {
    ALOGD("_libh264dec_asm_se_C66C14F00D63411D2BFA91246CDB3C2E() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_1D3516966D5C494363F138AF259CDC1741B54665DBF7D24216D51D1C19C32466 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_1D3516966D5C494363F138AF259CDC1741B54665DBF7D24216D51D1C19C32466(void) {
    ALOGD("_libh264dec_asm_se_1D3516966D5C494363F138AF259CDC1741B54665DBF7D24216D51D1C19C32466() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_5C295F8E5090E9978F7F04A7A5F062FC5A744639F344739002A1255A2344373F */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_5C295F8E5090E9978F7F04A7A5F062FC5A744639F344739002A1255A2344373F(void) {
    ALOGD("_libh264dec_asm_se_5C295F8E5090E9978F7F04A7A5F062FC5A744639F344739002A1255A2344373F() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_1D3516966D5C494363F138AF259CDC175D5F876FBA7A96F5E5DF349FADC7C9AF */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_1D3516966D5C494363F138AF259CDC175D5F876FBA7A96F5E5DF349FADC7C9AF(void) {
    ALOGD("_libh264dec_asm_se_1D3516966D5C494363F138AF259CDC175D5F876FBA7A96F5E5DF349FADC7C9AF() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_956255438113800ADD9DFC22C363882E5A744639F344739002A1255A2344373F */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_956255438113800ADD9DFC22C363882E5A744639F344739002A1255A2344373F(void) {
    ALOGD("_libh264dec_asm_se_956255438113800ADD9DFC22C363882E5A744639F344739002A1255A2344373F() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_1D3516966D5C494363F138AF259CDC1776DB4D8DF4C497A81A73904BD56F4E6C */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_1D3516966D5C494363F138AF259CDC1776DB4D8DF4C497A81A73904BD56F4E6C(void) {
    ALOGD("_libh264dec_asm_se_1D3516966D5C494363F138AF259CDC1776DB4D8DF4C497A81A73904BD56F4E6C() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_5C295F8E5090E9978F7F04A7A5F062FCF556801F2B4978897C65B19442EAEEEA */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_5C295F8E5090E9978F7F04A7A5F062FCF556801F2B4978897C65B19442EAEEEA(void) {
    ALOGD("_libh264dec_asm_se_5C295F8E5090E9978F7F04A7A5F062FCF556801F2B4978897C65B19442EAEEEA() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_7DFFFFAD696545E167C9B7D7C59090E4 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_7DFFFFAD696545E167C9B7D7C59090E4(void) {
    ALOGD("_libh264dec_asm_se_7DFFFFAD696545E167C9B7D7C59090E4() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_878C366717669A7FB0633160E04A1F56 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_878C366717669A7FB0633160E04A1F56(void) {
    ALOGD("_libh264dec_asm_se_878C366717669A7FB0633160E04A1F56() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_0241DFE45BA7CF12290BAC1F018FECCF2A251C53A870E3D5BB3F639916DBB058 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_0241DFE45BA7CF12290BAC1F018FECCF2A251C53A870E3D5BB3F639916DBB058(void) {
    ALOGD("_libh264dec_asm_se_0241DFE45BA7CF12290BAC1F018FECCF2A251C53A870E3D5BB3F639916DBB058() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_4723DBF5B4CCE1A671EDDE91B3137A08CC9C2B5C7CB6EAC6911635F36C4293A3 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_4723DBF5B4CCE1A671EDDE91B3137A08CC9C2B5C7CB6EAC6911635F36C4293A3(void) {
    ALOGD("_libh264dec_asm_se_4723DBF5B4CCE1A671EDDE91B3137A08CC9C2B5C7CB6EAC6911635F36C4293A3() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_0241DFE45BA7CF12290BAC1F018FECCF2445E3C1603BF74D6B599D3E6162063E */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_0241DFE45BA7CF12290BAC1F018FECCF2445E3C1603BF74D6B599D3E6162063E(void) {
    ALOGD("_libh264dec_asm_se_0241DFE45BA7CF12290BAC1F018FECCF2445E3C1603BF74D6B599D3E6162063E() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_0241DFE45BA7CF12290BAC1F018FECCFFFACE2C36BB022730A09ACDE1D12AA92 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_0241DFE45BA7CF12290BAC1F018FECCFFFACE2C36BB022730A09ACDE1D12AA92(void) {
    ALOGD("_libh264dec_asm_se_0241DFE45BA7CF12290BAC1F018FECCFFFACE2C36BB022730A09ACDE1D12AA92() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_1E3CF9FFBDDB095E55C873DE13B6021D */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_1E3CF9FFBDDB095E55C873DE13B6021D(void) {
    ALOGD("_libh264dec_asm_se_1E3CF9FFBDDB095E55C873DE13B6021D() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_4723DBF5B4CCE1A671EDDE91B3137A08C87EFC4D8E0C642E1A991BF61DD7CF0BF8E23379C28FA8C9D9F7F5D4660A8CD0 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_4723DBF5B4CCE1A671EDDE91B3137A08C87EFC4D8E0C642E1A991BF61DD7CF0BF8E23379C28FA8C9D9F7F5D4660A8CD0(void) {
    ALOGD("_libh264dec_asm_se_4723DBF5B4CCE1A671EDDE91B3137A08C87EFC4D8E0C642E1A991BF61DD7CF0BF8E23379C28FA8C9D9F7F5D4660A8CD0() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_4723DBF5B4CCE1A671EDDE91B3137A08F6E28C7659BC230584B8863A4BCAB4B4418B6B4FCDDFE3DA67D57AA66E5AC8DA6260F493C0B21E24F9244ABB6A93208C */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_4723DBF5B4CCE1A671EDDE91B3137A08F6E28C7659BC230584B8863A4BCAB4B4418B6B4FCDDFE3DA67D57AA66E5AC8DA6260F493C0B21E24F9244ABB6A93208C(void) {
    ALOGD("_libh264dec_asm_se_4723DBF5B4CCE1A671EDDE91B3137A08F6E28C7659BC230584B8863A4BCAB4B4418B6B4FCDDFE3DA67D57AA66E5AC8DA6260F493C0B21E24F9244ABB6A93208C() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_4723DBF5B4CCE1A671EDDE91B3137A08F6E28C7659BC230584B8863A4BCAB4B4245590301374C65E60542EA7FE0EF3496260F493C0B21E24F9244ABB6A93208C */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_4723DBF5B4CCE1A671EDDE91B3137A08F6E28C7659BC230584B8863A4BCAB4B4245590301374C65E60542EA7FE0EF3496260F493C0B21E24F9244ABB6A93208C(void) {
    ALOGD("_libh264dec_asm_se_4723DBF5B4CCE1A671EDDE91B3137A08F6E28C7659BC230584B8863A4BCAB4B4245590301374C65E60542EA7FE0EF3496260F493C0B21E24F9244ABB6A93208C() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_4723DBF5B4CCE1A671EDDE91B3137A08A2DC6B73A2597348C09436B3CAA14DAE8A79E829AEC46341B0356F280C685066 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_4723DBF5B4CCE1A671EDDE91B3137A08A2DC6B73A2597348C09436B3CAA14DAE8A79E829AEC46341B0356F280C685066(void) {
    ALOGD("_libh264dec_asm_se_4723DBF5B4CCE1A671EDDE91B3137A08A2DC6B73A2597348C09436B3CAA14DAE8A79E829AEC46341B0356F280C685066() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_4723DBF5B4CCE1A671EDDE91B3137A084E59112F726257B9756F2710714C4C68C694CBA1B4AF516F881C318CCF44883D */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_4723DBF5B4CCE1A671EDDE91B3137A084E59112F726257B9756F2710714C4C68C694CBA1B4AF516F881C318CCF44883D(void) {
    ALOGD("_libh264dec_asm_se_4723DBF5B4CCE1A671EDDE91B3137A084E59112F726257B9756F2710714C4C68C694CBA1B4AF516F881C318CCF44883D() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_4723DBF5B4CCE1A671EDDE91B3137A08F6E28C7659BC230584B8863A4BCAB4B470DBB96D1D54D45DAA0D4F0A509E0D056260F493C0B21E24F9244ABB6A93208C */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_4723DBF5B4CCE1A671EDDE91B3137A08F6E28C7659BC230584B8863A4BCAB4B470DBB96D1D54D45DAA0D4F0A509E0D056260F493C0B21E24F9244ABB6A93208C(void) {
    ALOGD("_libh264dec_asm_se_4723DBF5B4CCE1A671EDDE91B3137A08F6E28C7659BC230584B8863A4BCAB4B470DBB96D1D54D45DAA0D4F0A509E0D056260F493C0B21E24F9244ABB6A93208C() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_4723DBF5B4CCE1A671EDDE91B3137A08F6E28C7659BC230584B8863A4BCAB4B405BC51A037098E98A8E60EE438B27EA36260F493C0B21E24F9244ABB6A93208C */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_4723DBF5B4CCE1A671EDDE91B3137A08F6E28C7659BC230584B8863A4BCAB4B405BC51A037098E98A8E60EE438B27EA36260F493C0B21E24F9244ABB6A93208C(void) {
    ALOGD("_libh264dec_asm_se_4723DBF5B4CCE1A671EDDE91B3137A08F6E28C7659BC230584B8863A4BCAB4B405BC51A037098E98A8E60EE438B27EA36260F493C0B21E24F9244ABB6A93208C() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_4723DBF5B4CCE1A671EDDE91B3137A08A2DC6B73A2597348C09436B3CAA14DAE4E7F3E501F4EC408FA6DFA2248985C5B */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_4723DBF5B4CCE1A671EDDE91B3137A08A2DC6B73A2597348C09436B3CAA14DAE4E7F3E501F4EC408FA6DFA2248985C5B(void) {
    ALOGD("_libh264dec_asm_se_4723DBF5B4CCE1A671EDDE91B3137A08A2DC6B73A2597348C09436B3CAA14DAE4E7F3E501F4EC408FA6DFA2248985C5B() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_4723DBF5B4CCE1A671EDDE91B3137A084E59112F726257B9756F2710714C4C68E5765B7F1CA8BB4A1FAABA60C22A803F */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_4723DBF5B4CCE1A671EDDE91B3137A084E59112F726257B9756F2710714C4C68E5765B7F1CA8BB4A1FAABA60C22A803F(void) {
    ALOGD("_libh264dec_asm_se_4723DBF5B4CCE1A671EDDE91B3137A084E59112F726257B9756F2710714C4C68E5765B7F1CA8BB4A1FAABA60C22A803F() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_4723DBF5B4CCE1A671EDDE91B3137A08A2DC6B73A2597348C09436B3CAA14DAEEED1799BD7D671D776449004D9EDD335 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_4723DBF5B4CCE1A671EDDE91B3137A08A2DC6B73A2597348C09436B3CAA14DAEEED1799BD7D671D776449004D9EDD335(void) {
    ALOGD("_libh264dec_asm_se_4723DBF5B4CCE1A671EDDE91B3137A08A2DC6B73A2597348C09436B3CAA14DAEEED1799BD7D671D776449004D9EDD335() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_4723DBF5B4CCE1A671EDDE91B3137A08A2DC6B73A2597348C09436B3CAA14DAED22BC2682CD52CAAE839D2D3AC907E4A589DC0D319236B5D3515875CD79712F9 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_4723DBF5B4CCE1A671EDDE91B3137A08A2DC6B73A2597348C09436B3CAA14DAED22BC2682CD52CAAE839D2D3AC907E4A589DC0D319236B5D3515875CD79712F9(void) {
    ALOGD("_libh264dec_asm_se_4723DBF5B4CCE1A671EDDE91B3137A08A2DC6B73A2597348C09436B3CAA14DAED22BC2682CD52CAAE839D2D3AC907E4A589DC0D319236B5D3515875CD79712F9() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_4723DBF5B4CCE1A671EDDE91B3137A08A2DC6B73A2597348C09436B3CAA14DAED5B7436F8583A5A082F34C66C443E1E5589DC0D319236B5D3515875CD79712F9 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_4723DBF5B4CCE1A671EDDE91B3137A08A2DC6B73A2597348C09436B3CAA14DAED5B7436F8583A5A082F34C66C443E1E5589DC0D319236B5D3515875CD79712F9(void) {
    ALOGD("_libh264dec_asm_se_4723DBF5B4CCE1A671EDDE91B3137A08A2DC6B73A2597348C09436B3CAA14DAED5B7436F8583A5A082F34C66C443E1E5589DC0D319236B5D3515875CD79712F9() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_4723DBF5B4CCE1A671EDDE91B3137A08A2DC6B73A2597348C09436B3CAA14DAE7F177983FF4260A9696B4EB33C578771 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_4723DBF5B4CCE1A671EDDE91B3137A08A2DC6B73A2597348C09436B3CAA14DAE7F177983FF4260A9696B4EB33C578771(void) {
    ALOGD("_libh264dec_asm_se_4723DBF5B4CCE1A671EDDE91B3137A08A2DC6B73A2597348C09436B3CAA14DAE7F177983FF4260A9696B4EB33C578771() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_4723DBF5B4CCE1A671EDDE91B3137A084E59112F726257B9756F2710714C4C68D9009CAFA21D7C0315D8F57D90FF504D */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_4723DBF5B4CCE1A671EDDE91B3137A084E59112F726257B9756F2710714C4C68D9009CAFA21D7C0315D8F57D90FF504D(void) {
    ALOGD("_libh264dec_asm_se_4723DBF5B4CCE1A671EDDE91B3137A084E59112F726257B9756F2710714C4C68D9009CAFA21D7C0315D8F57D90FF504D() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_956255438113800ADD9DFC22C363882E43603220AC3C39C7B724919861786E62 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_956255438113800ADD9DFC22C363882E43603220AC3C39C7B724919861786E62(void) {
    ALOGD("_libh264dec_asm_se_956255438113800ADD9DFC22C363882E43603220AC3C39C7B724919861786E62() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_956255438113800ADD9DFC22C363882ED1990FBE89DDA867B3BB8C0D5F67718C033F3D90096B88F1AE159C64EBFB895E */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_956255438113800ADD9DFC22C363882ED1990FBE89DDA867B3BB8C0D5F67718C033F3D90096B88F1AE159C64EBFB895E(void) {
    ALOGD("_libh264dec_asm_se_956255438113800ADD9DFC22C363882ED1990FBE89DDA867B3BB8C0D5F67718C033F3D90096B88F1AE159C64EBFB895E() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_5C295F8E5090E9978F7F04A7A5F062FC43603220AC3C39C7B724919861786E62 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_5C295F8E5090E9978F7F04A7A5F062FC43603220AC3C39C7B724919861786E62(void) {
    ALOGD("_libh264dec_asm_se_5C295F8E5090E9978F7F04A7A5F062FC43603220AC3C39C7B724919861786E62() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_5C295F8E5090E9978F7F04A7A5F062FCD1990FBE89DDA867B3BB8C0D5F67718C033F3D90096B88F1AE159C64EBFB895E */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_5C295F8E5090E9978F7F04A7A5F062FCD1990FBE89DDA867B3BB8C0D5F67718C033F3D90096B88F1AE159C64EBFB895E(void) {
    ALOGD("_libh264dec_asm_se_5C295F8E5090E9978F7F04A7A5F062FCD1990FBE89DDA867B3BB8C0D5F67718C033F3D90096B88F1AE159C64EBFB895E() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_5C295F8E5090E9978F7F04A7A5F062FCCDDE7F2EF0693345C1BD7CB76E60C7A5 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_5C295F8E5090E9978F7F04A7A5F062FCCDDE7F2EF0693345C1BD7CB76E60C7A5(void) {
    ALOGD("_libh264dec_asm_se_5C295F8E5090E9978F7F04A7A5F062FCCDDE7F2EF0693345C1BD7CB76E60C7A5() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_5C295F8E5090E9978F7F04A7A5F062FC79D61D3F259139DE349DAD301FE2D22085630CF7CE8540972AEF776E602D4EDE */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_5C295F8E5090E9978F7F04A7A5F062FC79D61D3F259139DE349DAD301FE2D22085630CF7CE8540972AEF776E602D4EDE(void) {
    ALOGD("_libh264dec_asm_se_5C295F8E5090E9978F7F04A7A5F062FC79D61D3F259139DE349DAD301FE2D22085630CF7CE8540972AEF776E602D4EDE() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_7A12EB13743A720D93A2809EA14095FF */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_7A12EB13743A720D93A2809EA14095FF(void) {
    ALOGD("_libh264dec_asm_se_7A12EB13743A720D93A2809EA14095FF() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_20632C689910365F5A843E5DE30CA969CB1F440BA7D02D965A14131495564B5F */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_20632C689910365F5A843E5DE30CA969CB1F440BA7D02D965A14131495564B5F(void) {
    ALOGD("_libh264dec_asm_se_20632C689910365F5A843E5DE30CA969CB1F440BA7D02D965A14131495564B5F() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_20632C689910365F5A843E5DE30CA96988B270DF2F09628616548FBC23CD7535 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_20632C689910365F5A843E5DE30CA96988B270DF2F09628616548FBC23CD7535(void) {
    ALOGD("_libh264dec_asm_se_20632C689910365F5A843E5DE30CA96988B270DF2F09628616548FBC23CD7535() called");
    return 0;
}

/* Demangled: _libh264dec_asm_se_417091BE6860399CC3FE7634B509294CB960F376219BC5E3D36272459E3C5D10 */
extern "C" __attribute__((visibility("default"))) int _libh264dec_asm_se_417091BE6860399CC3FE7634B509294CB960F376219BC5E3D36272459E3C5D10(void) {
    ALOGD("_libh264dec_asm_se_417091BE6860399CC3FE7634B509294CB960F376219BC5E3D36272459E3C5D10() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

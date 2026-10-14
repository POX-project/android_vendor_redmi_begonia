/*
 * Reverse-Engineered Source for: liblept.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "liblept"

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
#include "liblept.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: numaDestroy */
extern "C" __attribute__((visibility("default"))) int numaDestroy(void) {
    ALOGD("numaDestroy() called");
    return 0;
}

/* Demangled: ptaTranslate */
extern "C" __attribute__((visibility("default"))) int ptaTranslate(void) {
    ALOGD("ptaTranslate() called");
    return 0;
}

/* Demangled: pixBilinearPtaColor */
extern "C" __attribute__((visibility("default"))) int pixBilinearPtaColor(void) {
    ALOGD("pixBilinearPtaColor() called");
    return 0;
}

/* Demangled: numaaGetCount */
extern "C" __attribute__((visibility("default"))) int numaaGetCount(void) {
    ALOGD("numaaGetCount() called");
    return 0;
}

/* Demangled: pixRenderHashBoxArb */
extern "C" __attribute__((visibility("default"))) int pixRenderHashBoxArb(void) {
    ALOGD("pixRenderHashBoxArb() called");
    return 0;
}

/* Demangled: pixClose */
extern "C" __attribute__((visibility("default"))) int pixClose(void) {
    ALOGD("pixClose() called");
    return 0;
}

/* Demangled: saConvertFilesToPdfData */
extern "C" __attribute__((visibility("default"))) int saConvertFilesToPdfData(void) {
    ALOGD("saConvertFilesToPdfData() called");
    return 0;
}

/* Demangled: pixGetGrayHistogramInRect */
extern "C" __attribute__((visibility("default"))) int pixGetGrayHistogramInRect(void) {
    ALOGD("pixGetGrayHistogramInRect() called");
    return 0;
}

/* Demangled: boxContains */
extern "C" __attribute__((visibility("default"))) int boxContains(void) {
    ALOGD("boxContains() called");
    return 0;
}

/* Demangled: pixaWriteFiles */
extern "C" __attribute__((visibility("default"))) int pixaWriteFiles(void) {
    ALOGD("pixaWriteFiles() called");
    return 0;
}

/* Demangled: pixWriteStreamAsciiPnm */
extern "C" __attribute__((visibility("default"))) int pixWriteStreamAsciiPnm(void) {
    ALOGD("pixWriteStreamAsciiPnm() called");
    return 0;
}

/* Demangled: pixRotateShearCenter */
extern "C" __attribute__((visibility("default"))) int pixRotateShearCenter(void) {
    ALOGD("pixRotateShearCenter() called");
    return 0;
}

/* Demangled: pixScaleRGBToGray2 */
extern "C" __attribute__((visibility("default"))) int pixScaleRGBToGray2(void) {
    ALOGD("pixScaleRGBToGray2() called");
    return 0;
}

/* Demangled: pixcmapGetRankIntensity */
extern "C" __attribute__((visibility("default"))) int pixcmapGetRankIntensity(void) {
    ALOGD("pixcmapGetRankIntensity() called");
    return 0;
}

/* Demangled: pixaaGetBoxa */
extern "C" __attribute__((visibility("default"))) int pixaaGetBoxa(void) {
    ALOGD("pixaaGetBoxa() called");
    return 0;
}

/* Demangled: pixaConvertToSameDepth */
extern "C" __attribute__((visibility("default"))) int pixaConvertToSameDepth(void) {
    ALOGD("pixaConvertToSameDepth() called");
    return 0;
}

/* Demangled: boxaaQuadtreeRegions */
extern "C" __attribute__((visibility("default"))) int boxaaQuadtreeRegions(void) {
    ALOGD("boxaaQuadtreeRegions() called");
    return 0;
}

/* Demangled: pixColorSegmentClean */
extern "C" __attribute__((visibility("default"))) int pixColorSegmentClean(void) {
    ALOGD("pixColorSegmentClean() called");
    return 0;
}

/* Demangled: pixCensusTransform */
extern "C" __attribute__((visibility("default"))) int pixCensusTransform(void) {
    ALOGD("pixCensusTransform() called");
    return 0;
}

/* Demangled: recogTrainFromBoot */
extern "C" __attribute__((visibility("default"))) int recogTrainFromBoot(void) {
    ALOGD("recogTrainFromBoot() called");
    return 0;
}

/* Demangled: boxaSplitEvenOdd */
extern "C" __attribute__((visibility("default"))) int boxaSplitEvenOdd(void) {
    ALOGD("boxaSplitEvenOdd() called");
    return 0;
}

/* Demangled: encodeBase64 */
extern "C" __attribute__((visibility("default"))) int encodeBase64(void) {
    ALOGD("encodeBase64() called");
    return 0;
}

/* Demangled: numaGetRefcount */
extern "C" __attribute__((visibility("default"))) int numaGetRefcount(void) {
    ALOGD("numaGetRefcount() called");
    return 0;
}

/* Demangled: pixaAddTextlines */
extern "C" __attribute__((visibility("default"))) int pixaAddTextlines(void) {
    ALOGD("pixaAddTextlines() called");
    return 0;
}

/* Demangled: convertUnscaledFilesToPdf */
extern "C" __attribute__((visibility("default"))) int convertUnscaledFilesToPdf(void) {
    ALOGD("convertUnscaledFilesToPdf() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Rotate_nativeRotateOrth */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Rotate_nativeRotateOrth(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Rotate_nativeRotateOrth() called");
    return 0;
}

/* Demangled: pixGeneratePtaBoundary */
extern "C" __attribute__((visibility("default"))) int pixGeneratePtaBoundary(void) {
    ALOGD("pixGeneratePtaBoundary() called");
    return 0;
}

/* Demangled: pixReadStream */
extern "C" __attribute__((visibility("default"))) int pixReadStream(void) {
    ALOGD("pixReadStream() called");
    return 0;
}

/* Demangled: pixWriteMemWebP */
extern "C" __attribute__((visibility("default"))) int pixWriteMemWebP(void) {
    ALOGD("pixWriteMemWebP() called");
    return 0;
}

/* Demangled: dewarpSinglePageInit */
extern "C" __attribute__((visibility("default"))) int dewarpSinglePageInit(void) {
    ALOGD("dewarpSinglePageInit() called");
    return 0;
}

/* Demangled: pixWriteStreamJpeg */
extern "C" __attribute__((visibility("default"))) int pixWriteStreamJpeg(void) {
    ALOGD("pixWriteStreamJpeg() called");
    return 0;
}

/* Demangled: pixReadHeader */
extern "C" __attribute__((visibility("default"))) int pixReadHeader(void) {
    ALOGD("pixReadHeader() called");
    return 0;
}

/* Demangled: pixMakeMaskFromVal */
extern "C" __attribute__((visibility("default"))) int pixMakeMaskFromVal(void) {
    ALOGD("pixMakeMaskFromVal() called");
    return 0;
}

/* Demangled: pixacompAddPix */
extern "C" __attribute__((visibility("default"))) int pixacompAddPix(void) {
    ALOGD("pixacompAddPix() called");
    return 0;
}

/* Demangled: pixOctcubeQuantFromCmap */
extern "C" __attribute__((visibility("default"))) int pixOctcubeQuantFromCmap(void) {
    ALOGD("pixOctcubeQuantFromCmap() called");
    return 0;
}

/* Demangled: dpixWriteStream */
extern "C" __attribute__((visibility("default"))) int dpixWriteStream(void) {
    ALOGD("dpixWriteStream() called");
    return 0;
}

/* Demangled: pixThresholdSpreadNorm */
extern "C" __attribute__((visibility("default"))) int pixThresholdSpreadNorm(void) {
    ALOGD("pixThresholdSpreadNorm() called");
    return 0;
}

/* Demangled: pixAffinePtaWithAlpha */
extern "C" __attribute__((visibility("default"))) int pixAffinePtaWithAlpha(void) {
    ALOGD("pixAffinePtaWithAlpha() called");
    return 0;
}

/* Demangled: kernelGetParameters */
extern "C" __attribute__((visibility("default"))) int kernelGetParameters(void) {
    ALOGD("kernelGetParameters() called");
    return 0;
}

/* Demangled: fpixSetPixel */
extern "C" __attribute__((visibility("default"))) int fpixSetPixel(void) {
    ALOGD("fpixSetPixel() called");
    return 0;
}

/* Demangled: ccbaAddCcb */
extern "C" __attribute__((visibility("default"))) int ccbaAddCcb(void) {
    ALOGD("ccbaAddCcb() called");
    return 0;
}

/* Demangled: dpixSetAllArbitrary */
extern "C" __attribute__((visibility("default"))) int dpixSetAllArbitrary(void) {
    ALOGD("dpixSetAllArbitrary() called");
    return 0;
}

/* Demangled: pixacompGetBox */
extern "C" __attribute__((visibility("default"))) int pixacompGetBox(void) {
    ALOGD("pixacompGetBox() called");
    return 0;
}

/* Demangled: pixGetDifferenceStats */
extern "C" __attribute__((visibility("default"))) int pixGetDifferenceStats(void) {
    ALOGD("pixGetDifferenceStats() called");
    return 0;
}

/* Demangled: fpixConvolveSep */
extern "C" __attribute__((visibility("default"))) int fpixConvolveSep(void) {
    ALOGD("fpixConvolveSep() called");
    return 0;
}

/* Demangled: fpixRasterop */
extern "C" __attribute__((visibility("default"))) int fpixRasterop(void) {
    ALOGD("fpixRasterop() called");
    return 0;
}

/* Demangled: fpixRotate180 */
extern "C" __attribute__((visibility("default"))) int fpixRotate180(void) {
    ALOGD("fpixRotate180() called");
    return 0;
}

/* Demangled: getScaledParametersPS */
extern "C" __attribute__((visibility("default"))) int getScaledParametersPS(void) {
    ALOGD("getScaledParametersPS() called");
    return 0;
}

/* Demangled: pixDeserializeFromMemory */
extern "C" __attribute__((visibility("default"))) int pixDeserializeFromMemory(void) {
    ALOGD("pixDeserializeFromMemory() called");
    return 0;
}

/* Demangled: strcodeGenerate */
extern "C" __attribute__((visibility("default"))) int strcodeGenerate(void) {
    ALOGD("strcodeGenerate() called");
    return 0;
}

/* Demangled: boxaWriteMem */
extern "C" __attribute__((visibility("default"))) int boxaWriteMem(void) {
    ALOGD("boxaWriteMem() called");
    return 0;
}

/* Demangled: pixColorGrayCmap */
extern "C" __attribute__((visibility("default"))) int pixColorGrayCmap(void) {
    ALOGD("pixColorGrayCmap() called");
    return 0;
}

/* Demangled: pixConvolveWithBias */
extern "C" __attribute__((visibility("default"))) int pixConvolveWithBias(void) {
    ALOGD("pixConvolveWithBias() called");
    return 0;
}

/* Demangled: listJoin */
extern "C" __attribute__((visibility("default"))) int listJoin(void) {
    ALOGD("listJoin() called");
    return 0;
}

/* Demangled: fgetPngColormapInfo */
extern "C" __attribute__((visibility("default"))) int fgetPngColormapInfo(void) {
    ALOGD("fgetPngColormapInfo() called");
    return 0;
}

/* Demangled: pixCompareBinary */
extern "C" __attribute__((visibility("default"))) int pixCompareBinary(void) {
    ALOGD("pixCompareBinary() called");
    return 0;
}

/* Demangled: pixGetAverageTiledRGB */
extern "C" __attribute__((visibility("default"))) int pixGetAverageTiledRGB(void) {
    ALOGD("pixGetAverageTiledRGB() called");
    return 0;
}

/* Demangled: pixFindSkewSweepAndSearchScore */
extern "C" __attribute__((visibility("default"))) int pixFindSkewSweepAndSearchScore(void) {
    ALOGD("pixFindSkewSweepAndSearchScore() called");
    return 0;
}

/* Demangled: recogIdentifyPix */
extern "C" __attribute__((visibility("default"))) int recogIdentifyPix(void) {
    ALOGD("recogIdentifyPix() called");
    return 0;
}

/* Demangled: pixClearPixel */
extern "C" __attribute__((visibility("default"))) int pixClearPixel(void) {
    ALOGD("pixClearPixel() called");
    return 0;
}

/* Demangled: ptaDestroy */
extern "C" __attribute__((visibility("default"))) int ptaDestroy(void) {
    ALOGD("ptaDestroy() called");
    return 0;
}

/* Demangled: pixcmapSetBlackAndWhite */
extern "C" __attribute__((visibility("default"))) int pixcmapSetBlackAndWhite(void) {
    ALOGD("pixcmapSetBlackAndWhite() called");
    return 0;
}

/* Demangled: pixOpen */
extern "C" __attribute__((visibility("default"))) int pixOpen(void) {
    ALOGD("pixOpen() called");
    return 0;
}

/* Demangled: l_setDataFourBytes */
extern "C" __attribute__((visibility("default"))) int l_setDataFourBytes(void) {
    ALOGD("l_setDataFourBytes() called");
    return 0;
}

/* Demangled: dewarpGetTextlineCenters */
extern "C" __attribute__((visibility("default"))) int dewarpGetTextlineCenters(void) {
    ALOGD("dewarpGetTextlineCenters() called");
    return 0;
}

/* Demangled: pixcmapReadMem */
extern "C" __attribute__((visibility("default"))) int pixcmapReadMem(void) {
    ALOGD("pixcmapReadMem() called");
    return 0;
}

/* Demangled: pixcmapUsableColor */
extern "C" __attribute__((visibility("default"))) int pixcmapUsableColor(void) {
    ALOGD("pixcmapUsableColor() called");
    return 0;
}

/* Demangled: sarrayWriteStream */
extern "C" __attribute__((visibility("default"))) int sarrayWriteStream(void) {
    ALOGD("sarrayWriteStream() called");
    return 0;
}

/* Demangled: pixRenderPolygon */
extern "C" __attribute__((visibility("default"))) int pixRenderPolygon(void) {
    ALOGD("pixRenderPolygon() called");
    return 0;
}

/* Demangled: pixaaVerifyDepth */
extern "C" __attribute__((visibility("default"))) int pixaaVerifyDepth(void) {
    ALOGD("pixaaVerifyDepth() called");
    return 0;
}

/* Demangled: pixAbsDifference */
extern "C" __attribute__((visibility("default"))) int pixAbsDifference(void) {
    ALOGD("pixAbsDifference() called");
    return 0;
}

/* Demangled: pixCopyRGBComponent */
extern "C" __attribute__((visibility("default"))) int pixCopyRGBComponent(void) {
    ALOGD("pixCopyRGBComponent() called");
    return 0;
}

/* Demangled: pixSetTextline */
extern "C" __attribute__((visibility("default"))) int pixSetTextline(void) {
    ALOGD("pixSetTextline() called");
    return 0;
}

/* Demangled: lstackAdd */
extern "C" __attribute__((visibility("default"))) int lstackAdd(void) {
    ALOGD("lstackAdd() called");
    return 0;
}

/* Demangled: boxaAddBox */
extern "C" __attribute__((visibility("default"))) int boxaAddBox(void) {
    ALOGD("boxaAddBox() called");
    return 0;
}

/* Demangled: convertRGBToHSV */
extern "C" __attribute__((visibility("default"))) int convertRGBToHSV(void) {
    ALOGD("convertRGBToHSV() called");
    return 0;
}

/* Demangled: dewarpDestroy */
extern "C" __attribute__((visibility("default"))) int dewarpDestroy(void) {
    ALOGD("dewarpDestroy() called");
    return 0;
}

/* Demangled: pixRenderPolyline */
extern "C" __attribute__((visibility("default"))) int pixRenderPolyline(void) {
    ALOGD("pixRenderPolyline() called");
    return 0;
}

/* Demangled: pixStrokeWidthTransform */
extern "C" __attribute__((visibility("default"))) int pixStrokeWidthTransform(void) {
    ALOGD("pixStrokeWidthTransform() called");
    return 0;
}

/* Demangled: ptaConvertToBox */
extern "C" __attribute__((visibility("default"))) int ptaConvertToBox(void) {
    ALOGD("ptaConvertToBox() called");
    return 0;
}

/* Demangled: listDestroy */
extern "C" __attribute__((visibility("default"))) int listDestroy(void) {
    ALOGD("listDestroy() called");
    return 0;
}

/* Demangled: numaFindPeaks */
extern "C" __attribute__((visibility("default"))) int numaFindPeaks(void) {
    ALOGD("numaFindPeaks() called");
    return 0;
}

/* Demangled: numaGetHistogramStats */
extern "C" __attribute__((visibility("default"))) int numaGetHistogramStats(void) {
    ALOGD("numaGetHistogramStats() called");
    return 0;
}

/* Demangled: pixaChangeRefcount */
extern "C" __attribute__((visibility("default"))) int pixaChangeRefcount(void) {
    ALOGD("pixaChangeRefcount() called");
    return 0;
}

/* Demangled: convertFilesToPS */
extern "C" __attribute__((visibility("default"))) int convertFilesToPS(void) {
    ALOGD("convertFilesToPS() called");
    return 0;
}

/* Demangled: pixReadStreamTiff */
extern "C" __attribute__((visibility("default"))) int pixReadStreamTiff(void) {
    ALOGD("pixReadStreamTiff() called");
    return 0;
}

/* Demangled: recogDestroy */
extern "C" __attribute__((visibility("default"))) int recogDestroy(void) {
    ALOGD("recogDestroy() called");
    return 0;
}

/* Demangled: stringReplace */
extern "C" __attribute__((visibility("default"))) int stringReplace(void) {
    ALOGD("stringReplace() called");
    return 0;
}

/* Demangled: lheapPrint */
extern "C" __attribute__((visibility("default"))) int lheapPrint(void) {
    ALOGD("lheapPrint() called");
    return 0;
}

/* Demangled: pixSeedfillMorph */
extern "C" __attribute__((visibility("default"))) int pixSeedfillMorph(void) {
    ALOGD("pixSeedfillMorph() called");
    return 0;
}

/* Demangled: bbufferReadStream */
extern "C" __attribute__((visibility("default"))) int bbufferReadStream(void) {
    ALOGD("bbufferReadStream() called");
    return 0;
}

/* Demangled: makeGrayQuantColormapArb */
extern "C" __attribute__((visibility("default"))) int makeGrayQuantColormapArb(void) {
    ALOGD("makeGrayQuantColormapArb() called");
    return 0;
}

/* Demangled: pixDitherTo2bpp */
extern "C" __attribute__((visibility("default"))) int pixDitherTo2bpp(void) {
    ALOGD("pixDitherTo2bpp() called");
    return 0;
}

/* Demangled: numaWindowedMeanSquare */
extern "C" __attribute__((visibility("default"))) int numaWindowedMeanSquare(void) {
    ALOGD("numaWindowedMeanSquare() called");
    return 0;
}

/* Demangled: pixaSelectByAreaFraction */
extern "C" __attribute__((visibility("default"))) int pixaSelectByAreaFraction(void) {
    ALOGD("pixaSelectByAreaFraction() called");
    return 0;
}

/* Demangled: numaMakeConstant */
extern "C" __attribute__((visibility("default"))) int numaMakeConstant(void) {
    ALOGD("numaMakeConstant() called");
    return 0;
}

/* Demangled: lept_free */
extern "C" __attribute__((visibility("default"))) int lept_free(void) {
    ALOGD("lept_free() called");
    return 0;
}

/* Demangled: selDestroy */
extern "C" __attribute__((visibility("default"))) int selDestroy(void) {
    ALOGD("selDestroy() called");
    return 0;
}

/* Demangled: rasteropUniLow */
extern "C" __attribute__((visibility("default"))) int rasteropUniLow(void) {
    ALOGD("rasteropUniLow() called");
    return 0;
}

/* Demangled: pixQuadraticVShearSampled */
extern "C" __attribute__((visibility("default"))) int pixQuadraticVShearSampled(void) {
    ALOGD("pixQuadraticVShearSampled() called");
    return 0;
}

/* Demangled: pixStretchHorizontalSampled */
extern "C" __attribute__((visibility("default"))) int pixStretchHorizontalSampled(void) {
    ALOGD("pixStretchHorizontalSampled() called");
    return 0;
}

/* Demangled: ccbaWriteSVGString */
extern "C" __attribute__((visibility("default"))) int ccbaWriteSVGString(void) {
    ALOGD("ccbaWriteSVGString() called");
    return 0;
}

/* Demangled: l_dnaHashGetTotalCount */
extern "C" __attribute__((visibility("default"))) int l_dnaHashGetTotalCount(void) {
    ALOGD("l_dnaHashGetTotalCount() called");
    return 0;
}

/* Demangled: fpixRemoveBorder */
extern "C" __attribute__((visibility("default"))) int fpixRemoveBorder(void) {
    ALOGD("fpixRemoveBorder() called");
    return 0;
}

/* Demangled: getBilinearXformCoeffs */
extern "C" __attribute__((visibility("default"))) int getBilinearXformCoeffs(void) {
    ALOGD("getBilinearXformCoeffs() called");
    return 0;
}

/* Demangled: ptaCropToMask */
extern "C" __attribute__((visibility("default"))) int ptaCropToMask(void) {
    ALOGD("ptaCropToMask() called");
    return 0;
}

/* Demangled: recogRead */
extern "C" __attribute__((visibility("default"))) int recogRead(void) {
    ALOGD("recogRead() called");
    return 0;
}

/* Demangled: recogReplaceInRecoga */
extern "C" __attribute__((visibility("default"))) int recogReplaceInRecoga(void) {
    ALOGD("recogReplaceInRecoga() called");
    return 0;
}

/* Demangled: pixRunlengthTransform */
extern "C" __attribute__((visibility("default"))) int pixRunlengthTransform(void) {
    ALOGD("pixRunlengthTransform() called");
    return 0;
}

/* Demangled: pixaaDisplay */
extern "C" __attribute__((visibility("default"))) int pixaaDisplay(void) {
    ALOGD("pixaaDisplay() called");
    return 0;
}

/* Demangled: pixConvertRGBToColormap */
extern "C" __attribute__((visibility("default"))) int pixConvertRGBToColormap(void) {
    ALOGD("pixConvertRGBToColormap() called");
    return 0;
}

/* Demangled: pixRenderLineBlend */
extern "C" __attribute__((visibility("default"))) int pixRenderLineBlend(void) {
    ALOGD("pixRenderLineBlend() called");
    return 0;
}

/* Demangled: pixRenderPolylineArb */
extern "C" __attribute__((visibility("default"))) int pixRenderPolylineArb(void) {
    ALOGD("pixRenderPolylineArb() called");
    return 0;
}

/* Demangled: pixRenderPta */
extern "C" __attribute__((visibility("default"))) int pixRenderPta(void) {
    ALOGD("pixRenderPta() called");
    return 0;
}

/* Demangled: pixConnCompTransform */
extern "C" __attribute__((visibility("default"))) int pixConnCompTransform(void) {
    ALOGD("pixConnCompTransform() called");
    return 0;
}

/* Demangled: bbufferExtendArray */
extern "C" __attribute__((visibility("default"))) int bbufferExtendArray(void) {
    ALOGD("bbufferExtendArray() called");
    return 0;
}

/* Demangled: makePixelCentroidTab8 */
extern "C" __attribute__((visibility("default"))) int makePixelCentroidTab8(void) {
    ALOGD("makePixelCentroidTab8() called");
    return 0;
}

/* Demangled: pixUnsharpMaskingGray */
extern "C" __attribute__((visibility("default"))) int pixUnsharpMaskingGray(void) {
    ALOGD("pixUnsharpMaskingGray() called");
    return 0;
}

/* Demangled: makeGrayQuantTableArb */
extern "C" __attribute__((visibility("default"))) int makeGrayQuantTableArb(void) {
    ALOGD("makeGrayQuantTableArb() called");
    return 0;
}

/* Demangled: thresholdToBinaryLow */
extern "C" __attribute__((visibility("default"))) int thresholdToBinaryLow(void) {
    ALOGD("thresholdToBinaryLow() called");
    return 0;
}

/* Demangled: pixaExtendArrayToSize */
extern "C" __attribute__((visibility("default"))) int pixaExtendArrayToSize(void) {
    ALOGD("pixaExtendArrayToSize() called");
    return 0;
}

/* Demangled: ptaNoisyLinearLSF */
extern "C" __attribute__((visibility("default"))) int ptaNoisyLinearLSF(void) {
    ALOGD("ptaNoisyLinearLSF() called");
    return 0;
}

/* Demangled: recogWrite */
extern "C" __attribute__((visibility("default"))) int recogWrite(void) {
    ALOGD("recogWrite() called");
    return 0;
}

/* Demangled: fileCorruptByMutation */
extern "C" __attribute__((visibility("default"))) int fileCorruptByMutation(void) {
    ALOGD("fileCorruptByMutation() called");
    return 0;
}

/* Demangled: pixaMorphSequenceByRegion */
extern "C" __attribute__((visibility("default"))) int pixaMorphSequenceByRegion(void) {
    ALOGD("pixaMorphSequenceByRegion() called");
    return 0;
}

/* Demangled: numaJoin */
extern "C" __attribute__((visibility("default"))) int numaJoin(void) {
    ALOGD("numaJoin() called");
    return 0;
}

/* Demangled: boxaPlotSides */
extern "C" __attribute__((visibility("default"))) int boxaPlotSides(void) {
    ALOGD("boxaPlotSides() called");
    return 0;
}

/* Demangled: kernelCreateFromFile */
extern "C" __attribute__((visibility("default"))) int kernelCreateFromFile(void) {
    ALOGD("kernelCreateFromFile() called");
    return 0;
}

/* Demangled: sarraySplitString */
extern "C" __attribute__((visibility("default"))) int sarraySplitString(void) {
    ALOGD("sarraySplitString() called");
    return 0;
}

/* Demangled: getTiffResolution */
extern "C" __attribute__((visibility("default"))) int getTiffResolution(void) {
    ALOGD("getTiffResolution() called");
    return 0;
}

/* Demangled: pixRotate180 */
extern "C" __attribute__((visibility("default"))) int pixRotate180(void) {
    ALOGD("pixRotate180() called");
    return 0;
}

/* Demangled: sarrayToStringRange */
extern "C" __attribute__((visibility("default"))) int sarrayToStringRange(void) {
    ALOGD("sarrayToStringRange() called");
    return 0;
}

/* Demangled: l_amapGetFirst */
extern "C" __attribute__((visibility("default"))) int l_amapGetFirst(void) {
    ALOGD("l_amapGetFirst() called");
    return 0;
}

/* Demangled: numaInterpolateArbxInterval */
extern "C" __attribute__((visibility("default"))) int numaInterpolateArbxInterval(void) {
    ALOGD("numaInterpolateArbxInterval() called");
    return 0;
}

/* Demangled: l_clearDataBit */
extern "C" __attribute__((visibility("default"))) int l_clearDataBit(void) {
    ALOGD("l_clearDataBit() called");
    return 0;
}

/* Demangled: l_byteaGetSize */
extern "C" __attribute__((visibility("default"))) int l_byteaGetSize(void) {
    ALOGD("l_byteaGetSize() called");
    return 0;
}

/* Demangled: pixcmapGetNearestGrayIndex */
extern "C" __attribute__((visibility("default"))) int pixcmapGetNearestGrayIndex(void) {
    ALOGD("pixcmapGetNearestGrayIndex() called");
    return 0;
}

/* Demangled: pixConvertRGBToXYZ */
extern "C" __attribute__((visibility("default"))) int pixConvertRGBToXYZ(void) {
    ALOGD("pixConvertRGBToXYZ() called");
    return 0;
}

/* Demangled: lqueueDestroy */
extern "C" __attribute__((visibility("default"))) int lqueueDestroy(void) {
    ALOGD("lqueueDestroy() called");
    return 0;
}

/* Demangled: pixaAccumulateSamples */
extern "C" __attribute__((visibility("default"))) int pixaAccumulateSamples(void) {
    ALOGD("pixaAccumulateSamples() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Rotate_nativeRotate */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Rotate_nativeRotate(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Rotate_nativeRotate() called");
    return 0;
}

/* Demangled: rchExtract */
extern "C" __attribute__((visibility("default"))) int rchExtract(void) {
    ALOGD("rchExtract() called");
    return 0;
}

/* Demangled: numaGetSortIndex */
extern "C" __attribute__((visibility("default"))) int numaGetSortIndex(void) {
    ALOGD("numaGetSortIndex() called");
    return 0;
}

/* Demangled: convertFilesToPdf */
extern "C" __attribute__((visibility("default"))) int convertFilesToPdf(void) {
    ALOGD("convertFilesToPdf() called");
    return 0;
}

/* Demangled: l_dnaIntersectionByAset */
extern "C" __attribute__((visibility("default"))) int l_dnaIntersectionByAset(void) {
    ALOGD("l_dnaIntersectionByAset() called");
    return 0;
}

/* Demangled: numaInterpolateEqxVal */
extern "C" __attribute__((visibility("default"))) int numaInterpolateEqxVal(void) {
    ALOGD("numaInterpolateEqxVal() called");
    return 0;
}

/* Demangled: pixSetWidth */
extern "C" __attribute__((visibility("default"))) int pixSetWidth(void) {
    ALOGD("pixSetWidth() called");
    return 0;
}

/* Demangled: pixcompCreateFromPix */
extern "C" __attribute__((visibility("default"))) int pixcompCreateFromPix(void) {
    ALOGD("pixcompCreateFromPix() called");
    return 0;
}

/* Demangled: pixQuadtreeMean */
extern "C" __attribute__((visibility("default"))) int pixQuadtreeMean(void) {
    ALOGD("pixQuadtreeMean() called");
    return 0;
}

/* Demangled: adjacentOnPixelInRaster */
extern "C" __attribute__((visibility("default"))) int adjacentOnPixelInRaster(void) {
    ALOGD("adjacentOnPixelInRaster() called");
    return 0;
}

/* Demangled: boxaReplaceBox */
extern "C" __attribute__((visibility("default"))) int boxaReplaceBox(void) {
    ALOGD("boxaReplaceBox() called");
    return 0;
}

/* Demangled: pixUnionOfMorphOps */
extern "C" __attribute__((visibility("default"))) int pixUnionOfMorphOps(void) {
    ALOGD("pixUnionOfMorphOps() called");
    return 0;
}

/* Demangled: pixAverageByRow */
extern "C" __attribute__((visibility("default"))) int pixAverageByRow(void) {
    ALOGD("pixAverageByRow() called");
    return 0;
}

/* Demangled: pixVShearCenter */
extern "C" __attribute__((visibility("default"))) int pixVShearCenter(void) {
    ALOGD("pixVShearCenter() called");
    return 0;
}

/* Demangled: stopTimer */
extern "C" __attribute__((visibility("default"))) int stopTimer(void) {
    ALOGD("stopTimer() called");
    return 0;
}

/* Demangled: fopenReadStream */
extern "C" __attribute__((visibility("default"))) int fopenReadStream(void) {
    ALOGD("fopenReadStream() called");
    return 0;
}

/* Demangled: pixaDisplayTiledInRows */
extern "C" __attribute__((visibility("default"))) int pixaDisplayTiledInRows(void) {
    ALOGD("pixaDisplayTiledInRows() called");
    return 0;
}

/* Demangled: numaCopyParameters */
extern "C" __attribute__((visibility("default"))) int numaCopyParameters(void) {
    ALOGD("numaCopyParameters() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Pix_nativeGetRefCount */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Pix_nativeGetRefCount(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Pix_nativeGetRefCount() called");
    return 0;
}

/* Demangled: pixaGetBoxaCount */
extern "C" __attribute__((visibility("default"))) int pixaGetBoxaCount(void) {
    ALOGD("pixaGetBoxaCount() called");
    return 0;
}

/* Demangled: pixGetBinnedComponentRange */
extern "C" __attribute__((visibility("default"))) int pixGetBinnedComponentRange(void) {
    ALOGD("pixGetBinnedComponentRange() called");
    return 0;
}

/* Demangled: recogDidExists */
extern "C" __attribute__((visibility("default"))) int recogDidExists(void) {
    ALOGD("recogDidExists() called");
    return 0;
}

/* Demangled: pixaaReadFromFiles */
extern "C" __attribute__((visibility("default"))) int pixaaReadFromFiles(void) {
    ALOGD("pixaaReadFromFiles() called");
    return 0;
}

/* Demangled: sarrayAppend */
extern "C" __attribute__((visibility("default"))) int sarrayAppend(void) {
    ALOGD("sarrayAppend() called");
    return 0;
}

/* Demangled: pixEndianByteSwap */
extern "C" __attribute__((visibility("default"))) int pixEndianByteSwap(void) {
    ALOGD("pixEndianByteSwap() called");
    return 0;
}

/* Demangled: pixCombineMasked */
extern "C" __attribute__((visibility("default"))) int pixCombineMasked(void) {
    ALOGD("pixCombineMasked() called");
    return 0;
}

/* Demangled: pixcmapGetCount */
extern "C" __attribute__((visibility("default"))) int pixcmapGetCount(void) {
    ALOGD("pixcmapGetCount() called");
    return 0;
}

/* Demangled: pixAddMixedBorder */
extern "C" __attribute__((visibility("default"))) int pixAddMixedBorder(void) {
    ALOGD("pixAddMixedBorder() called");
    return 0;
}

/* Demangled: pixTestForSimilarity */
extern "C" __attribute__((visibility("default"))) int pixTestForSimilarity(void) {
    ALOGD("pixTestForSimilarity() called");
    return 0;
}

/* Demangled: jbClassifyRankHaus */
extern "C" __attribute__((visibility("default"))) int jbClassifyRankHaus(void) {
    ALOGD("jbClassifyRankHaus() called");
    return 0;
}

/* Demangled: l_amapGetPrev */
extern "C" __attribute__((visibility("default"))) int l_amapGetPrev(void) {
    ALOGD("l_amapGetPrev() called");
    return 0;
}

/* Demangled: l_rbtreeGetFirst */
extern "C" __attribute__((visibility("default"))) int l_rbtreeGetFirst(void) {
    ALOGD("l_rbtreeGetFirst() called");
    return 0;
}

/* Demangled: ptaGetBoundingRegion */
extern "C" __attribute__((visibility("default"))) int ptaGetBoundingRegion(void) {
    ALOGD("ptaGetBoundingRegion() called");
    return 0;
}

/* Demangled: sarrayDestroy */
extern "C" __attribute__((visibility("default"))) int sarrayDestroy(void) {
    ALOGD("sarrayDestroy() called");
    return 0;
}

/* Demangled: pixOctcubeHistogram */
extern "C" __attribute__((visibility("default"))) int pixOctcubeHistogram(void) {
    ALOGD("pixOctcubeHistogram() called");
    return 0;
}

/* Demangled: lstackRemove */
extern "C" __attribute__((visibility("default"))) int lstackRemove(void) {
    ALOGD("lstackRemove() called");
    return 0;
}

/* Demangled: isPngInterlaced */
extern "C" __attribute__((visibility("default"))) int isPngInterlaced(void) {
    ALOGD("isPngInterlaced() called");
    return 0;
}

/* Demangled: pixSetComponentArbitrary */
extern "C" __attribute__((visibility("default"))) int pixSetComponentArbitrary(void) {
    ALOGD("pixSetComponentArbitrary() called");
    return 0;
}

/* Demangled: pixGetAverageMaskedRGB */
extern "C" __attribute__((visibility("default"))) int pixGetAverageMaskedRGB(void) {
    ALOGD("pixGetAverageMaskedRGB() called");
    return 0;
}

/* Demangled: quadtreeMaxLevels */
extern "C" __attribute__((visibility("default"))) int quadtreeMaxLevels(void) {
    ALOGD("quadtreeMaxLevels() called");
    return 0;
}

/* Demangled: getFilenamesInDirectory */
extern "C" __attribute__((visibility("default"))) int getFilenamesInDirectory(void) {
    ALOGD("getFilenamesInDirectory() called");
    return 0;
}

/* Demangled: boxaPermuteRandom */
extern "C" __attribute__((visibility("default"))) int boxaPermuteRandom(void) {
    ALOGD("boxaPermuteRandom() called");
    return 0;
}

/* Demangled: jbDataSave */
extern "C" __attribute__((visibility("default"))) int jbDataSave(void) {
    ALOGD("jbDataSave() called");
    return 0;
}

/* Demangled: l_dnaCopy */
extern "C" __attribute__((visibility("default"))) int l_dnaCopy(void) {
    ALOGD("l_dnaCopy() called");
    return 0;
}

/* Demangled: l_dnaWriteStream */
extern "C" __attribute__((visibility("default"))) int l_dnaWriteStream(void) {
    ALOGD("l_dnaWriteStream() called");
    return 0;
}

/* Demangled: l_asetInsert */
extern "C" __attribute__((visibility("default"))) int l_asetInsert(void) {
    ALOGD("l_asetInsert() called");
    return 0;
}

/* Demangled: convertJpegToPS */
extern "C" __attribute__((visibility("default"))) int convertJpegToPS(void) {
    ALOGD("convertJpegToPS() called");
    return 0;
}

/* Demangled: pixOctreeQuantNumColors */
extern "C" __attribute__((visibility("default"))) int pixOctreeQuantNumColors(void) {
    ALOGD("pixOctreeQuantNumColors() called");
    return 0;
}

/* Demangled: pixConvertGrayToFalseColor */
extern "C" __attribute__((visibility("default"))) int pixConvertGrayToFalseColor(void) {
    ALOGD("pixConvertGrayToFalseColor() called");
    return 0;
}

/* Demangled: dewarpaDestroy */
extern "C" __attribute__((visibility("default"))) int dewarpaDestroy(void) {
    ALOGD("dewarpaDestroy() called");
    return 0;
}

/* Demangled: fpixCopyResolution */
extern "C" __attribute__((visibility("default"))) int fpixCopyResolution(void) {
    ALOGD("fpixCopyResolution() called");
    return 0;
}

/* Demangled: boxaaExtendWithInit */
extern "C" __attribute__((visibility("default"))) int boxaaExtendWithInit(void) {
    ALOGD("boxaaExtendWithInit() called");
    return 0;
}

/* Demangled: pixColorGray */
extern "C" __attribute__((visibility("default"))) int pixColorGray(void) {
    ALOGD("pixColorGray() called");
    return 0;
}

/* Demangled: l_pdfSetG4ImageMask */
extern "C" __attribute__((visibility("default"))) int l_pdfSetG4ImageMask(void) {
    ALOGD("l_pdfSetG4ImageMask() called");
    return 0;
}

/* Demangled: pixExtractBarcodeCrossings */
extern "C" __attribute__((visibility("default"))) int pixExtractBarcodeCrossings(void) {
    ALOGD("pixExtractBarcodeCrossings() called");
    return 0;
}

/* Demangled: scaleBinaryLow */
extern "C" __attribute__((visibility("default"))) int scaleBinaryLow(void) {
    ALOGD("scaleBinaryLow() called");
    return 0;
}

/* Demangled: ptaaTruncate */
extern "C" __attribute__((visibility("default"))) int ptaaTruncate(void) {
    ALOGD("ptaaTruncate() called");
    return 0;
}

/* Demangled: pixMakeHistoHS */
extern "C" __attribute__((visibility("default"))) int pixMakeHistoHS(void) {
    ALOGD("pixMakeHistoHS() called");
    return 0;
}

/* Demangled: pixSeedfill */
extern "C" __attribute__((visibility("default"))) int pixSeedfill(void) {
    ALOGD("pixSeedfill() called");
    return 0;
}

/* Demangled: kernelRead */
extern "C" __attribute__((visibility("default"))) int kernelRead(void) {
    ALOGD("kernelRead() called");
    return 0;
}

/* Demangled: grayHistogramsToEMD */
extern "C" __attribute__((visibility("default"))) int grayHistogramsToEMD(void) {
    ALOGD("grayHistogramsToEMD() called");
    return 0;
}

/* Demangled: pixAffinePtaColor */
extern "C" __attribute__((visibility("default"))) int pixAffinePtaColor(void) {
    ALOGD("pixAffinePtaColor() called");
    return 0;
}

/* Demangled: boxaaInitFull */
extern "C" __attribute__((visibility("default"))) int boxaaInitFull(void) {
    ALOGD("boxaaInitFull() called");
    return 0;
}

/* Demangled: pixGetDifferenceHistogram */
extern "C" __attribute__((visibility("default"))) int pixGetDifferenceHistogram(void) {
    ALOGD("pixGetDifferenceHistogram() called");
    return 0;
}

/* Demangled: pixCloseBrick */
extern "C" __attribute__((visibility("default"))) int pixCloseBrick(void) {
    ALOGD("pixCloseBrick() called");
    return 0;
}

/* Demangled: pixFastTophat */
extern "C" __attribute__((visibility("default"))) int pixFastTophat(void) {
    ALOGD("pixFastTophat() called");
    return 0;
}

/* Demangled: pixaFindWidthHeightRatio */
extern "C" __attribute__((visibility("default"))) int pixaFindWidthHeightRatio(void) {
    ALOGD("pixaFindWidthHeightRatio() called");
    return 0;
}

/* Demangled: pixMakeHistoHV */
extern "C" __attribute__((visibility("default"))) int pixMakeHistoHV(void) {
    ALOGD("pixMakeHistoHV() called");
    return 0;
}

/* Demangled: numaNormalizeHistogram */
extern "C" __attribute__((visibility("default"))) int numaNormalizeHistogram(void) {
    ALOGD("numaNormalizeHistogram() called");
    return 0;
}

/* Demangled: pixCountArbInRect */
extern "C" __attribute__((visibility("default"))) int pixCountArbInRect(void) {
    ALOGD("pixCountArbInRect() called");
    return 0;
}

/* Demangled: makeTempDirname */
extern "C" __attribute__((visibility("default"))) int makeTempDirname(void) {
    ALOGD("makeTempDirname() called");
    return 0;
}

/* Demangled: selaMakeThinSets */
extern "C" __attribute__((visibility("default"))) int selaMakeThinSets(void) {
    ALOGD("selaMakeThinSets() called");
    return 0;
}

/* Demangled: seedfillGrayLow */
extern "C" __attribute__((visibility("default"))) int seedfillGrayLow(void) {
    ALOGD("seedfillGrayLow() called");
    return 0;
}

/* Demangled: selGetName */
extern "C" __attribute__((visibility("default"))) int selGetName(void) {
    ALOGD("selGetName() called");
    return 0;
}

/* Demangled: pixConvertRGBToSaturation */
extern "C" __attribute__((visibility("default"))) int pixConvertRGBToSaturation(void) {
    ALOGD("pixConvertRGBToSaturation() called");
    return 0;
}

/* Demangled: pixAlphaIsOpaque */
extern "C" __attribute__((visibility("default"))) int pixAlphaIsOpaque(void) {
    ALOGD("pixAlphaIsOpaque() called");
    return 0;
}

/* Demangled: pixCreateTemplateNoInit */
extern "C" __attribute__((visibility("default"))) int pixCreateTemplateNoInit(void) {
    ALOGD("pixCreateTemplateNoInit() called");
    return 0;
}

/* Demangled: pixRotateBySampling */
extern "C" __attribute__((visibility("default"))) int pixRotateBySampling(void) {
    ALOGD("pixRotateBySampling() called");
    return 0;
}

/* Demangled: boxaBinSort */
extern "C" __attribute__((visibility("default"))) int boxaBinSort(void) {
    ALOGD("boxaBinSort() called");
    return 0;
}

/* Demangled: pixcmapGetRangeValues */
extern "C" __attribute__((visibility("default"))) int pixcmapGetRangeValues(void) {
    ALOGD("pixcmapGetRangeValues() called");
    return 0;
}

/* Demangled: dpixGetMax */
extern "C" __attribute__((visibility("default"))) int dpixGetMax(void) {
    ALOGD("dpixGetMax() called");
    return 0;
}

/* Demangled: ptraConcatenatePdfToData */
extern "C" __attribute__((visibility("default"))) int ptraConcatenatePdfToData(void) {
    ALOGD("ptraConcatenatePdfToData() called");
    return 0;
}

/* Demangled: pixVarianceByColumn */
extern "C" __attribute__((visibility("default"))) int pixVarianceByColumn(void) {
    ALOGD("pixVarianceByColumn() called");
    return 0;
}

/* Demangled: pixReduceBinary2 */
extern "C" __attribute__((visibility("default"))) int pixReduceBinary2(void) {
    ALOGD("pixReduceBinary2() called");
    return 0;
}

/* Demangled: numaWriteStream */
extern "C" __attribute__((visibility("default"))) int numaWriteStream(void) {
    ALOGD("numaWriteStream() called");
    return 0;
}

/* Demangled: pixBlockconvTiled */
extern "C" __attribute__((visibility("default"))) int pixBlockconvTiled(void) {
    ALOGD("pixBlockconvTiled() called");
    return 0;
}

/* Demangled: l_dnaGetIValue */
extern "C" __attribute__((visibility("default"))) int l_dnaGetIValue(void) {
    ALOGD("l_dnaGetIValue() called");
    return 0;
}

/* Demangled: fpixLinearCombination */
extern "C" __attribute__((visibility("default"))) int fpixLinearCombination(void) {
    ALOGD("fpixLinearCombination() called");
    return 0;
}

/* Demangled: recogGetDid */
extern "C" __attribute__((visibility("default"))) int recogGetDid(void) {
    ALOGD("recogGetDid() called");
    return 0;
}

/* Demangled: pixFindHistoPeaksHSV */
extern "C" __attribute__((visibility("default"))) int pixFindHistoPeaksHSV(void) {
    ALOGD("pixFindHistoPeaksHSV() called");
    return 0;
}

/* Demangled: grayInterHistogramStats */
extern "C" __attribute__((visibility("default"))) int grayInterHistogramStats(void) {
    ALOGD("grayInterHistogramStats() called");
    return 0;
}

/* Demangled: scaleMipmapLow */
extern "C" __attribute__((visibility("default"))) int scaleMipmapLow(void) {
    ALOGD("scaleMipmapLow() called");
    return 0;
}

/* Demangled: pixBackgroundNormMorph */
extern "C" __attribute__((visibility("default"))) int pixBackgroundNormMorph(void) {
    ALOGD("pixBackgroundNormMorph() called");
    return 0;
}

/* Demangled: ptraJoin */
extern "C" __attribute__((visibility("default"))) int ptraJoin(void) {
    ALOGD("ptraJoin() called");
    return 0;
}

/* Demangled: boxaTranslate */
extern "C" __attribute__((visibility("default"))) int boxaTranslate(void) {
    ALOGD("boxaTranslate() called");
    return 0;
}

/* Demangled: extractMinMaxComponent */
extern "C" __attribute__((visibility("default"))) int extractMinMaxComponent(void) {
    ALOGD("extractMinMaxComponent() called");
    return 0;
}

/* Demangled: pixaMakeSizeIndicator */
extern "C" __attribute__((visibility("default"))) int pixaMakeSizeIndicator(void) {
    ALOGD("pixaMakeSizeIndicator() called");
    return 0;
}

/* Demangled: l_byteaCopyData */
extern "C" __attribute__((visibility("default"))) int l_byteaCopyData(void) {
    ALOGD("l_byteaCopyData() called");
    return 0;
}

/* Demangled: dpixGetResolution */
extern "C" __attribute__((visibility("default"))) int dpixGetResolution(void) {
    ALOGD("dpixGetResolution() called");
    return 0;
}

/* Demangled: ptaPtInsidePolygon */
extern "C" __attribute__((visibility("default"))) int ptaPtInsidePolygon(void) {
    ALOGD("ptaPtInsidePolygon() called");
    return 0;
}

/* Demangled: pixOpenGray3 */
extern "C" __attribute__((visibility("default"))) int pixOpenGray3(void) {
    ALOGD("pixOpenGray3() called");
    return 0;
}

/* Demangled: pixWriteMemPam */
extern "C" __attribute__((visibility("default"))) int pixWriteMemPam(void) {
    ALOGD("pixWriteMemPam() called");
    return 0;
}

/* Demangled: convertToPdfSegmented */
extern "C" __attribute__((visibility("default"))) int convertToPdfSegmented(void) {
    ALOGD("convertToPdfSegmented() called");
    return 0;
}

/* Demangled: tiffGetCount */
extern "C" __attribute__((visibility("default"))) int tiffGetCount(void) {
    ALOGD("tiffGetCount() called");
    return 0;
}

/* Demangled: pixGetOuterBordersPtaa */
extern "C" __attribute__((visibility("default"))) int pixGetOuterBordersPtaa(void) {
    ALOGD("pixGetOuterBordersPtaa() called");
    return 0;
}

/* Demangled: numaOpen */
extern "C" __attribute__((visibility("default"))) int numaOpen(void) {
    ALOGD("numaOpen() called");
    return 0;
}

/* Demangled: numaContrastTRC */
extern "C" __attribute__((visibility("default"))) int numaContrastTRC(void) {
    ALOGD("numaContrastTRC() called");
    return 0;
}

/* Demangled: pixConvolveRGBSep */
extern "C" __attribute__((visibility("default"))) int pixConvolveRGBSep(void) {
    ALOGD("pixConvolveRGBSep() called");
    return 0;
}

/* Demangled: l_dnaaGetValue */
extern "C" __attribute__((visibility("default"))) int l_dnaaGetValue(void) {
    ALOGD("l_dnaaGetValue() called");
    return 0;
}

/* Demangled: scaleSmoothLow */
extern "C" __attribute__((visibility("default"))) int scaleSmoothLow(void) {
    ALOGD("scaleSmoothLow() called");
    return 0;
}

/* Demangled: pixCorrelationScoreSimple */
extern "C" __attribute__((visibility("default"))) int pixCorrelationScoreSimple(void) {
    ALOGD("pixCorrelationScoreSimple() called");
    return 0;
}

/* Demangled: l_rbtreeLookup */
extern "C" __attribute__((visibility("default"))) int l_rbtreeLookup(void) {
    ALOGD("l_rbtreeLookup() called");
    return 0;
}

/* Demangled: pixRankFilterRGB */
extern "C" __attribute__((visibility("default"))) int pixRankFilterRGB(void) {
    ALOGD("pixRankFilterRGB() called");
    return 0;
}

/* Demangled: pixBlendGrayAdapt */
extern "C" __attribute__((visibility("default"))) int pixBlendGrayAdapt(void) {
    ALOGD("pixBlendGrayAdapt() called");
    return 0;
}

/* Demangled: l_byteaAppendString */
extern "C" __attribute__((visibility("default"))) int l_byteaAppendString(void) {
    ALOGD("l_byteaAppendString() called");
    return 0;
}

/* Demangled: pixScaleToSize */
extern "C" __attribute__((visibility("default"))) int pixScaleToSize(void) {
    ALOGD("pixScaleToSize() called");
    return 0;
}

/* Demangled: l_dnaSetValue */
extern "C" __attribute__((visibility("default"))) int l_dnaSetValue(void) {
    ALOGD("l_dnaSetValue() called");
    return 0;
}

/* Demangled: getImagelibVersions */
extern "C" __attribute__((visibility("default"))) int getImagelibVersions(void) {
    ALOGD("getImagelibVersions() called");
    return 0;
}

/* Demangled: concatenatePdf */
extern "C" __attribute__((visibility("default"))) int concatenatePdf(void) {
    ALOGD("concatenatePdf() called");
    return 0;
}

/* Demangled: convertImageDataToPdf */
extern "C" __attribute__((visibility("default"))) int convertImageDataToPdf(void) {
    ALOGD("convertImageDataToPdf() called");
    return 0;
}

/* Demangled: pixConvertCmapTo1 */
extern "C" __attribute__((visibility("default"))) int pixConvertCmapTo1(void) {
    ALOGD("pixConvertCmapTo1() called");
    return 0;
}

/* Demangled: fopenWriteWinTempfile */
extern "C" __attribute__((visibility("default"))) int fopenWriteWinTempfile(void) {
    ALOGD("fopenWriteWinTempfile() called");
    return 0;
}

/* Demangled: sarrayToString */
extern "C" __attribute__((visibility("default"))) int sarrayToString(void) {
    ALOGD("sarrayToString() called");
    return 0;
}

/* Demangled: applyLinearFit */
extern "C" __attribute__((visibility("default"))) int applyLinearFit(void) {
    ALOGD("applyLinearFit() called");
    return 0;
}

/* Demangled: numaaFlattenToNuma */
extern "C" __attribute__((visibility("default"))) int numaaFlattenToNuma(void) {
    ALOGD("numaaFlattenToNuma() called");
    return 0;
}

/* Demangled: pixDestroyColormap */
extern "C" __attribute__((visibility("default"))) int pixDestroyColormap(void) {
    ALOGD("pixDestroyColormap() called");
    return 0;
}

/* Demangled: selCreateFromColorPix */
extern "C" __attribute__((visibility("default"))) int selCreateFromColorPix(void) {
    ALOGD("selCreateFromColorPix() called");
    return 0;
}

/* Demangled: dewarpFindHorizDisparity */
extern "C" __attribute__((visibility("default"))) int dewarpFindHorizDisparity(void) {
    ALOGD("dewarpFindHorizDisparity() called");
    return 0;
}

/* Demangled: pixRemoveBorderConnComps */
extern "C" __attribute__((visibility("default"))) int pixRemoveBorderConnComps(void) {
    ALOGD("pixRemoveBorderConnComps() called");
    return 0;
}

/* Demangled: pixScaleToGray2 */
extern "C" __attribute__((visibility("default"))) int pixScaleToGray2(void) {
    ALOGD("pixScaleToGray2() called");
    return 0;
}

/* Demangled: pixColorGrayRegions */
extern "C" __attribute__((visibility("default"))) int pixColorGrayRegions(void) {
    ALOGD("pixColorGrayRegions() called");
    return 0;
}

/* Demangled: pixScaleToGray3 */
extern "C" __attribute__((visibility("default"))) int pixScaleToGray3(void) {
    ALOGD("pixScaleToGray3() called");
    return 0;
}

/* Demangled: pixScaleToGray4 */
extern "C" __attribute__((visibility("default"))) int pixScaleToGray4(void) {
    ALOGD("pixScaleToGray4() called");
    return 0;
}

/* Demangled: pixVShearLI */
extern "C" __attribute__((visibility("default"))) int pixVShearLI(void) {
    ALOGD("pixVShearLI() called");
    return 0;
}

/* Demangled: l_pdfSetDateAndVersion */
extern "C" __attribute__((visibility("default"))) int l_pdfSetDateAndVersion(void) {
    ALOGD("l_pdfSetDateAndVersion() called");
    return 0;
}

/* Demangled: recogCreateFromRecog */
extern "C" __attribute__((visibility("default"))) int recogCreateFromRecog(void) {
    ALOGD("recogCreateFromRecog() called");
    return 0;
}

/* Demangled: boxCreateValid */
extern "C" __attribute__((visibility("default"))) int boxCreateValid(void) {
    ALOGD("boxCreateValid() called");
    return 0;
}

/* Demangled: ccbaGenerateSPGlobalLocs */
extern "C" __attribute__((visibility("default"))) int ccbaGenerateSPGlobalLocs(void) {
    ALOGD("ccbaGenerateSPGlobalLocs() called");
    return 0;
}

/* Demangled: pixaaWriteMem */
extern "C" __attribute__((visibility("default"))) int pixaaWriteMem(void) {
    ALOGD("pixaaWriteMem() called");
    return 0;
}

/* Demangled: sarrayGetArray */
extern "C" __attribute__((visibility("default"))) int sarrayGetArray(void) {
    ALOGD("sarrayGetArray() called");
    return 0;
}

/* Demangled: pixScaleGray4xLIDither */
extern "C" __attribute__((visibility("default"))) int pixScaleGray4xLIDither(void) {
    ALOGD("pixScaleGray4xLIDither() called");
    return 0;
}

/* Demangled: pixScaleToGray6 */
extern "C" __attribute__((visibility("default"))) int pixScaleToGray6(void) {
    ALOGD("pixScaleToGray6() called");
    return 0;
}

/* Demangled: pixXor */
extern "C" __attribute__((visibility("default"))) int pixXor(void) {
    ALOGD("pixXor() called");
    return 0;
}

/* Demangled: selaFindSelByName */
extern "C" __attribute__((visibility("default"))) int selaFindSelByName(void) {
    ALOGD("selaFindSelByName() called");
    return 0;
}

/* Demangled: listAddToHead */
extern "C" __attribute__((visibility("default"))) int listAddToHead(void) {
    ALOGD("listAddToHead() called");
    return 0;
}

/* Demangled: pixSetHeight */
extern "C" __attribute__((visibility("default"))) int pixSetHeight(void) {
    ALOGD("pixSetHeight() called");
    return 0;
}

/* Demangled: pixRotateWithAlpha */
extern "C" __attribute__((visibility("default"))) int pixRotateWithAlpha(void) {
    ALOGD("pixRotateWithAlpha() called");
    return 0;
}

/* Demangled: makeSumTabSG2 */
extern "C" __attribute__((visibility("default"))) int makeSumTabSG2(void) {
    ALOGD("makeSumTabSG2() called");
    return 0;
}

/* Demangled: makeSumTabSG3 */
extern "C" __attribute__((visibility("default"))) int makeSumTabSG3(void) {
    ALOGD("makeSumTabSG3() called");
    return 0;
}

/* Demangled: pixScaleToGray8 */
extern "C" __attribute__((visibility("default"))) int pixScaleToGray8(void) {
    ALOGD("pixScaleToGray8() called");
    return 0;
}

/* Demangled: scaleToGray16Low */
extern "C" __attribute__((visibility("default"))) int scaleToGray16Low(void) {
    ALOGD("scaleToGray16Low() called");
    return 0;
}

/* Demangled: pixaFindStrokeWidth */
extern "C" __attribute__((visibility("default"))) int pixaFindStrokeWidth(void) {
    ALOGD("pixaFindStrokeWidth() called");
    return 0;
}

/* Demangled: pixClipBoxToForeground */
extern "C" __attribute__((visibility("default"))) int pixClipBoxToForeground(void) {
    ALOGD("pixClipBoxToForeground() called");
    return 0;
}

/* Demangled: findNextBorderPixel */
extern "C" __attribute__((visibility("default"))) int findNextBorderPixel(void) {
    ALOGD("findNextBorderPixel() called");
    return 0;
}

/* Demangled: dewarpCreateRef */
extern "C" __attribute__((visibility("default"))) int dewarpCreateRef(void) {
    ALOGD("dewarpCreateRef() called");
    return 0;
}

/* Demangled: recogReadStream */
extern "C" __attribute__((visibility("default"))) int recogReadStream(void) {
    ALOGD("recogReadStream() called");
    return 0;
}

/* Demangled: makeSumTabSG4 */
extern "C" __attribute__((visibility("default"))) int makeSumTabSG4(void) {
    ALOGD("makeSumTabSG4() called");
    return 0;
}

/* Demangled: scaleBySamplingLow */
extern "C" __attribute__((visibility("default"))) int scaleBySamplingLow(void) {
    ALOGD("scaleBySamplingLow() called");
    return 0;
}

/* Demangled: numaGammaTRC */
extern "C" __attribute__((visibility("default"))) int numaGammaTRC(void) {
    ALOGD("numaGammaTRC() called");
    return 0;
}

/* Demangled: pixCreateNoInit */
extern "C" __attribute__((visibility("default"))) int pixCreateNoInit(void) {
    ALOGD("pixCreateNoInit() called");
    return 0;
}

/* Demangled: pixcmapReadStream */
extern "C" __attribute__((visibility("default"))) int pixcmapReadStream(void) {
    ALOGD("pixcmapReadStream() called");
    return 0;
}

/* Demangled: numaaJoin */
extern "C" __attribute__((visibility("default"))) int numaaJoin(void) {
    ALOGD("numaaJoin() called");
    return 0;
}

/* Demangled: pixaEqual */
extern "C" __attribute__((visibility("default"))) int pixaEqual(void) {
    ALOGD("pixaEqual() called");
    return 0;
}

/* Demangled: pixMedianCutQuant */
extern "C" __attribute__((visibility("default"))) int pixMedianCutQuant(void) {
    ALOGD("pixMedianCutQuant() called");
    return 0;
}

/* Demangled: pixHalfEdgeByBandpass */
extern "C" __attribute__((visibility("default"))) int pixHalfEdgeByBandpass(void) {
    ALOGD("pixHalfEdgeByBandpass() called");
    return 0;
}

/* Demangled: ccbaStepChainsToPixCoords */
extern "C" __attribute__((visibility("default"))) int ccbaStepChainsToPixCoords(void) {
    ALOGD("ccbaStepChainsToPixCoords() called");
    return 0;
}

/* Demangled: pixCountByRow */
extern "C" __attribute__((visibility("default"))) int pixCountByRow(void) {
    ALOGD("pixCountByRow() called");
    return 0;
}

/* Demangled: ptaaWriteStream */
extern "C" __attribute__((visibility("default"))) int ptaaWriteStream(void) {
    ALOGD("ptaaWriteStream() called");
    return 0;
}

/* Demangled: pixGetColormap */
extern "C" __attribute__((visibility("default"))) int pixGetColormap(void) {
    ALOGD("pixGetColormap() called");
    return 0;
}

/* Demangled: pixAffinePtaGray */
extern "C" __attribute__((visibility("default"))) int pixAffinePtaGray(void) {
    ALOGD("pixAffinePtaGray() called");
    return 0;
}

/* Demangled: l_getDataTwoBytes */
extern "C" __attribute__((visibility("default"))) int l_getDataTwoBytes(void) {
    ALOGD("l_getDataTwoBytes() called");
    return 0;
}

/* Demangled: l_dnaaReplaceDna */
extern "C" __attribute__((visibility("default"))) int l_dnaaReplaceDna(void) {
    ALOGD("l_dnaaReplaceDna() called");
    return 0;
}

/* Demangled: kernelCreateFromPix */
extern "C" __attribute__((visibility("default"))) int kernelCreateFromPix(void) {
    ALOGD("kernelCreateFromPix() called");
    return 0;
}

/* Demangled: pixScaleBinary */
extern "C" __attribute__((visibility("default"))) int pixScaleBinary(void) {
    ALOGD("pixScaleBinary() called");
    return 0;
}

/* Demangled: l_byteaInitFromMem */
extern "C" __attribute__((visibility("default"))) int l_byteaInitFromMem(void) {
    ALOGD("l_byteaInitFromMem() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Pix_nativeGetHeight */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Pix_nativeGetHeight(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Pix_nativeGetHeight() called");
    return 0;
}

/* Demangled: pixFixedOctcubeQuantGenRGB */
extern "C" __attribute__((visibility("default"))) int pixFixedOctcubeQuantGenRGB(void) {
    ALOGD("pixFixedOctcubeQuantGenRGB() called");
    return 0;
}

/* Demangled: pixReadJp2k */
extern "C" __attribute__((visibility("default"))) int pixReadJp2k(void) {
    ALOGD("pixReadJp2k() called");
    return 0;
}

/* Demangled: ptaIntersectionByAset */
extern "C" __attribute__((visibility("default"))) int ptaIntersectionByAset(void) {
    ALOGD("ptaIntersectionByAset() called");
    return 0;
}

/* Demangled: recogaExtractNumbers */
extern "C" __attribute__((visibility("default"))) int recogaExtractNumbers(void) {
    ALOGD("recogaExtractNumbers() called");
    return 0;
}

/* Demangled: pixaccAdd */
extern "C" __attribute__((visibility("default"))) int pixaccAdd(void) {
    ALOGD("pixaccAdd() called");
    return 0;
}

/* Demangled: pixRotate90 */
extern "C" __attribute__((visibility("default"))) int pixRotate90(void) {
    ALOGD("pixRotate90() called");
    return 0;
}

/* Demangled: dpixChangeRefcount */
extern "C" __attribute__((visibility("default"))) int dpixChangeRefcount(void) {
    ALOGD("dpixChangeRefcount() called");
    return 0;
}

/* Demangled: recogMakeDecodingArrays */
extern "C" __attribute__((visibility("default"))) int recogMakeDecodingArrays(void) {
    ALOGD("recogMakeDecodingArrays() called");
    return 0;
}

/* Demangled: boxClone */
extern "C" __attribute__((visibility("default"))) int boxClone(void) {
    ALOGD("boxClone() called");
    return 0;
}

/* Demangled: jbAccumulateComposites */
extern "C" __attribute__((visibility("default"))) int jbAccumulateComposites(void) {
    ALOGD("jbAccumulateComposites() called");
    return 0;
}

/* Demangled: ptraConcatenatePdf */
extern "C" __attribute__((visibility("default"))) int ptraConcatenatePdf(void) {
    ALOGD("ptraConcatenatePdf() called");
    return 0;
}

/* Demangled: pixGenerateCIData */
extern "C" __attribute__((visibility("default"))) int pixGenerateCIData(void) {
    ALOGD("pixGenerateCIData() called");
    return 0;
}

/* Demangled: pixCompareGray */
extern "C" __attribute__((visibility("default"))) int pixCompareGray(void) {
    ALOGD("pixCompareGray() called");
    return 0;
}

/* Demangled: pixaMorphSequenceByComponent */
extern "C" __attribute__((visibility("default"))) int pixaMorphSequenceByComponent(void) {
    ALOGD("pixaMorphSequenceByComponent() called");
    return 0;
}

/* Demangled: makePixelSumTab8 */
extern "C" __attribute__((visibility("default"))) int makePixelSumTab8(void) {
    ALOGD("makePixelSumTab8() called");
    return 0;
}

/* Demangled: boxContainsPt */
extern "C" __attribute__((visibility("default"))) int boxContainsPt(void) {
    ALOGD("boxContainsPt() called");
    return 0;
}

/* Demangled: boxaModifyWithBoxa */
extern "C" __attribute__((visibility("default"))) int boxaModifyWithBoxa(void) {
    ALOGD("boxaModifyWithBoxa() called");
    return 0;
}

/* Demangled: dewarpaSetValidModels */
extern "C" __attribute__((visibility("default"))) int dewarpaSetValidModels(void) {
    ALOGD("dewarpaSetValidModels() called");
    return 0;
}

/* Demangled: sarrayCreateLinesFromString */
extern "C" __attribute__((visibility("default"))) int sarrayCreateLinesFromString(void) {
    ALOGD("sarrayCreateLinesFromString() called");
    return 0;
}

/* Demangled: listRemoveElement */
extern "C" __attribute__((visibility("default"))) int listRemoveElement(void) {
    ALOGD("listRemoveElement() called");
    return 0;
}

/* Demangled: pixTophat */
extern "C" __attribute__((visibility("default"))) int pixTophat(void) {
    ALOGD("pixTophat() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_WriteFile_nativeWriteBitmap */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_WriteFile_nativeWriteBitmap(void) {
    ALOGD("Java_com_googlecode_leptonica_android_WriteFile_nativeWriteBitmap() called");
    return 0;
}

/* Demangled: makeDoGKernel */
extern "C" __attribute__((visibility("default"))) int makeDoGKernel(void) {
    ALOGD("makeDoGKernel() called");
    return 0;
}

/* Demangled: pixaSelectWithString */
extern "C" __attribute__((visibility("default"))) int pixaSelectWithString(void) {
    ALOGD("pixaSelectWithString() called");
    return 0;
}

/* Demangled: pixConvertGrayToColormap */
extern "C" __attribute__((visibility("default"))) int pixConvertGrayToColormap(void) {
    ALOGD("pixConvertGrayToColormap() called");
    return 0;
}

/* Demangled: pixelShiftByComponent */
extern "C" __attribute__((visibility("default"))) int pixelShiftByComponent(void) {
    ALOGD("pixelShiftByComponent() called");
    return 0;
}

/* Demangled: pixCorrelationScoreShifted */
extern "C" __attribute__((visibility("default"))) int pixCorrelationScoreShifted(void) {
    ALOGD("pixCorrelationScoreShifted() called");
    return 0;
}

/* Demangled: ptaaGetPt */
extern "C" __attribute__((visibility("default"))) int ptaaGetPt(void) {
    ALOGD("ptaaGetPt() called");
    return 0;
}

/* Demangled: pixDilateGray3 */
extern "C" __attribute__((visibility("default"))) int pixDilateGray3(void) {
    ALOGD("pixDilateGray3() called");
    return 0;
}

/* Demangled: generateUncompressedPS */
extern "C" __attribute__((visibility("default"))) int generateUncompressedPS(void) {
    ALOGD("generateUncompressedPS() called");
    return 0;
}

/* Demangled: recogProcessSingleLabelled */
extern "C" __attribute__((visibility("default"))) int recogProcessSingleLabelled(void) {
    ALOGD("recogProcessSingleLabelled() called");
    return 0;
}

/* Demangled: numaPseudorandomSequence */
extern "C" __attribute__((visibility("default"))) int numaPseudorandomSequence(void) {
    ALOGD("numaPseudorandomSequence() called");
    return 0;
}

/* Demangled: dewarpaShowArrays */
extern "C" __attribute__((visibility("default"))) int dewarpaShowArrays(void) {
    ALOGD("dewarpaShowArrays() called");
    return 0;
}

/* Demangled: pixCountByColumn */
extern "C" __attribute__((visibility("default"))) int pixCountByColumn(void) {
    ALOGD("pixCountByColumn() called");
    return 0;
}

/* Demangled: recogaWriteMem */
extern "C" __attribute__((visibility("default"))) int recogaWriteMem(void) {
    ALOGD("recogaWriteMem() called");
    return 0;
}

/* Demangled: zlibUncompress */
extern "C" __attribute__((visibility("default"))) int zlibUncompress(void) {
    ALOGD("zlibUncompress() called");
    return 0;
}

/* Demangled: pixGetCCBorders */
extern "C" __attribute__((visibility("default"))) int pixGetCCBorders(void) {
    ALOGD("pixGetCCBorders() called");
    return 0;
}

/* Demangled: l_makeTempFilename */
extern "C" __attribute__((visibility("default"))) int l_makeTempFilename(void) {
    ALOGD("l_makeTempFilename() called");
    return 0;
}

/* Demangled: sarrayIntersectionByHash */
extern "C" __attribute__((visibility("default"))) int sarrayIntersectionByHash(void) {
    ALOGD("sarrayIntersectionByHash() called");
    return 0;
}

/* Demangled: pixSauvolaGetThreshold */
extern "C" __attribute__((visibility("default"))) int pixSauvolaGetThreshold(void) {
    ALOGD("pixSauvolaGetThreshold() called");
    return 0;
}

/* Demangled: boxEqual */
extern "C" __attribute__((visibility("default"))) int boxEqual(void) {
    ALOGD("boxEqual() called");
    return 0;
}

/* Demangled: pixConvertRGBToValue */
extern "C" __attribute__((visibility("default"))) int pixConvertRGBToValue(void) {
    ALOGD("pixConvertRGBToValue() called");
    return 0;
}

/* Demangled: numaGetParameters */
extern "C" __attribute__((visibility("default"))) int numaGetParameters(void) {
    ALOGD("numaGetParameters() called");
    return 0;
}

/* Demangled: pixScaleColor4xLI */
extern "C" __attribute__((visibility("default"))) int pixScaleColor4xLI(void) {
    ALOGD("pixScaleColor4xLI() called");
    return 0;
}

/* Demangled: fpixAddMirroredBorder */
extern "C" __attribute__((visibility("default"))) int fpixAddMirroredBorder(void) {
    ALOGD("fpixAddMirroredBorder() called");
    return 0;
}

/* Demangled: pixModifyBrightness */
extern "C" __attribute__((visibility("default"))) int pixModifyBrightness(void) {
    ALOGD("pixModifyBrightness() called");
    return 0;
}

/* Demangled: pixWriteJpeg */
extern "C" __attribute__((visibility("default"))) int pixWriteJpeg(void) {
    ALOGD("pixWriteJpeg() called");
    return 0;
}

/* Demangled: rotateAMColorLow */
extern "C" __attribute__((visibility("default"))) int rotateAMColorLow(void) {
    ALOGD("rotateAMColorLow() called");
    return 0;
}

/* Demangled: pixBilinearPtaGray */
extern "C" __attribute__((visibility("default"))) int pixBilinearPtaGray(void) {
    ALOGD("pixBilinearPtaGray() called");
    return 0;
}

/* Demangled: pixBlockconvGrayTile */
extern "C" __attribute__((visibility("default"))) int pixBlockconvGrayTile(void) {
    ALOGD("pixBlockconvGrayTile() called");
    return 0;
}

/* Demangled: generatePtaaHashBoxa */
extern "C" __attribute__((visibility("default"))) int generatePtaaHashBoxa(void) {
    ALOGD("generatePtaaHashBoxa() called");
    return 0;
}

/* Demangled: boxaCompareRegions */
extern "C" __attribute__((visibility("default"))) int boxaCompareRegions(void) {
    ALOGD("boxaCompareRegions() called");
    return 0;
}

/* Demangled: nextOnPixelInRasterLow */
extern "C" __attribute__((visibility("default"))) int nextOnPixelInRasterLow(void) {
    ALOGD("nextOnPixelInRasterLow() called");
    return 0;
}

/* Demangled: pixDilate */
extern "C" __attribute__((visibility("default"))) int pixDilate(void) {
    ALOGD("pixDilate() called");
    return 0;
}

/* Exported Object: AlphaMaskBorderVals */
extern "C" __attribute__((visibility("default"))) void* AlphaMaskBorderVals = NULL;

/* Demangled: arrayFindEachSequence */
extern "C" __attribute__((visibility("default"))) int arrayFindEachSequence(void) {
    ALOGD("arrayFindEachSequence() called");
    return 0;
}

/* Demangled: sarrayAddString */
extern "C" __attribute__((visibility("default"))) int sarrayAddString(void) {
    ALOGD("sarrayAddString() called");
    return 0;
}

/* Demangled: pixCloseBrickDwa */
extern "C" __attribute__((visibility("default"))) int pixCloseBrickDwa(void) {
    ALOGD("pixCloseBrickDwa() called");
    return 0;
}

/* Demangled: pixColumnStats */
extern "C" __attribute__((visibility("default"))) int pixColumnStats(void) {
    ALOGD("pixColumnStats() called");
    return 0;
}

/* Demangled: pixaFindAreaFraction */
extern "C" __attribute__((visibility("default"))) int pixaFindAreaFraction(void) {
    ALOGD("pixaFindAreaFraction() called");
    return 0;
}

/* Demangled: pixcmapShiftIntensity */
extern "C" __attribute__((visibility("default"))) int pixcmapShiftIntensity(void) {
    ALOGD("pixcmapShiftIntensity() called");
    return 0;
}

/* Demangled: pixOrientDetect */
extern "C" __attribute__((visibility("default"))) int pixOrientDetect(void) {
    ALOGD("pixOrientDetect() called");
    return 0;
}

/* Demangled: pixMorphDwa_1 */
extern "C" __attribute__((visibility("default"))) int pixMorphDwa_1(void) {
    ALOGD("pixMorphDwa_1() called");
    return 0;
}

/* Demangled: dpixSetPixel */
extern "C" __attribute__((visibility("default"))) int dpixSetPixel(void) {
    ALOGD("dpixSetPixel() called");
    return 0;
}

/* Demangled: pixaBinSort */
extern "C" __attribute__((visibility("default"))) int pixaBinSort(void) {
    ALOGD("pixaBinSort() called");
    return 0;
}

/* Demangled: recogaWritePixaa */
extern "C" __attribute__((visibility("default"))) int recogaWritePixaa(void) {
    ALOGD("recogaWritePixaa() called");
    return 0;
}

/* Demangled: stringFindSubstr */
extern "C" __attribute__((visibility("default"))) int stringFindSubstr(void) {
    ALOGD("stringFindSubstr() called");
    return 0;
}

/* Demangled: pixMorphDwa_2 */
extern "C" __attribute__((visibility("default"))) int pixMorphDwa_2(void) {
    ALOGD("pixMorphDwa_2() called");
    return 0;
}

/* Demangled: pixaWriteMem */
extern "C" __attribute__((visibility("default"))) int pixaWriteMem(void) {
    ALOGD("pixaWriteMem() called");
    return 0;
}

/* Demangled: dewarpaApplyDisparityBoxa */
extern "C" __attribute__((visibility("default"))) int dewarpaApplyDisparityBoxa(void) {
    ALOGD("dewarpaApplyDisparityBoxa() called");
    return 0;
}

/* Demangled: l_dnaaDestroy */
extern "C" __attribute__((visibility("default"))) int l_dnaaDestroy(void) {
    ALOGD("l_dnaaDestroy() called");
    return 0;
}

/* Demangled: boxaSelectByArea */
extern "C" __attribute__((visibility("default"))) int boxaSelectByArea(void) {
    ALOGD("boxaSelectByArea() called");
    return 0;
}

/* Demangled: pixSetInRect */
extern "C" __attribute__((visibility("default"))) int pixSetInRect(void) {
    ALOGD("pixSetInRect() called");
    return 0;
}

/* Demangled: numaSortIndexAutoSelect */
extern "C" __attribute__((visibility("default"))) int numaSortIndexAutoSelect(void) {
    ALOGD("numaSortIndexAutoSelect() called");
    return 0;
}

/* Demangled: pixItalicWords */
extern "C" __attribute__((visibility("default"))) int pixItalicWords(void) {
    ALOGD("pixItalicWords() called");
    return 0;
}

/* Demangled: pixReadStreamGif */
extern "C" __attribute__((visibility("default"))) int pixReadStreamGif(void) {
    ALOGD("pixReadStreamGif() called");
    return 0;
}

/* Demangled: recogaTrainingDone */
extern "C" __attribute__((visibility("default"))) int recogaTrainingDone(void) {
    ALOGD("recogaTrainingDone() called");
    return 0;
}

/* Demangled: pixGetRunCentersOnLine */
extern "C" __attribute__((visibility("default"))) int pixGetRunCentersOnLine(void) {
    ALOGD("pixGetRunCentersOnLine() called");
    return 0;
}

/* Demangled: __udivmoddi4 */
extern "C" __attribute__((visibility("default"))) int fn___udivmoddi4(void) __asm__("__udivmoddi4");
int fn___udivmoddi4(void) {
    ALOGD("__udivmoddi4() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Pix_nativeGetDimensions */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Pix_nativeGetDimensions(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Pix_nativeGetDimensions() called");
    return 0;
}

/* Demangled: pixaThinConnected */
extern "C" __attribute__((visibility("default"))) int pixaThinConnected(void) {
    ALOGD("pixaThinConnected() called");
    return 0;
}

/* Demangled: makeRGBIndexTables */
extern "C" __attribute__((visibility("default"))) int makeRGBIndexTables(void) {
    ALOGD("makeRGBIndexTables() called");
    return 0;
}

/* Demangled: setPixelLow */
extern "C" __attribute__((visibility("default"))) int setPixelLow(void) {
    ALOGD("setPixelLow() called");
    return 0;
}

/* Demangled: stringCompareLexical */
extern "C" __attribute__((visibility("default"))) int stringCompareLexical(void) {
    ALOGD("stringCompareLexical() called");
    return 0;
}

/* Demangled: pixFillMapHoles */
extern "C" __attribute__((visibility("default"))) int pixFillMapHoles(void) {
    ALOGD("pixFillMapHoles() called");
    return 0;
}

/* Demangled: pixGlobalNormRGB */
extern "C" __attribute__((visibility("default"))) int pixGlobalNormRGB(void) {
    ALOGD("pixGlobalNormRGB() called");
    return 0;
}

/* Demangled: ptaGetNeighborPixLocs */
extern "C" __attribute__((visibility("default"))) int ptaGetNeighborPixLocs(void) {
    ALOGD("ptaGetNeighborPixLocs() called");
    return 0;
}

/* Demangled: selaReadStream */
extern "C" __attribute__((visibility("default"))) int selaReadStream(void) {
    ALOGD("selaReadStream() called");
    return 0;
}

/* Demangled: pixQuadraticVShearLI */
extern "C" __attribute__((visibility("default"))) int pixQuadraticVShearLI(void) {
    ALOGD("pixQuadraticVShearLI() called");
    return 0;
}

/* Demangled: pixLocalExtrema */
extern "C" __attribute__((visibility("default"))) int pixLocalExtrema(void) {
    ALOGD("pixLocalExtrema() called");
    return 0;
}

/* Demangled: boxaMakeAreaIndicator */
extern "C" __attribute__((visibility("default"))) int boxaMakeAreaIndicator(void) {
    ALOGD("boxaMakeAreaIndicator() called");
    return 0;
}

/* Demangled: kernelNormalize */
extern "C" __attribute__((visibility("default"))) int kernelNormalize(void) {
    ALOGD("kernelNormalize() called");
    return 0;
}

/* Demangled: numaSortAutoSelect */
extern "C" __attribute__((visibility("default"))) int numaSortAutoSelect(void) {
    ALOGD("numaSortAutoSelect() called");
    return 0;
}

/* Demangled: applyQuadraticFit */
extern "C" __attribute__((visibility("default"))) int applyQuadraticFit(void) {
    ALOGD("applyQuadraticFit() called");
    return 0;
}

/* Demangled: scaleAreaMapLow2 */
extern "C" __attribute__((visibility("default"))) int scaleAreaMapLow2(void) {
    ALOGD("scaleAreaMapLow2() called");
    return 0;
}

/* Demangled: ccbaDisplaySPBorder */
extern "C" __attribute__((visibility("default"))) int ccbaDisplaySPBorder(void) {
    ALOGD("ccbaDisplaySPBorder() called");
    return 0;
}

/* Demangled: pixUnsharpMaskingGray1D */
extern "C" __attribute__((visibility("default"))) int pixUnsharpMaskingGray1D(void) {
    ALOGD("pixUnsharpMaskingGray1D() called");
    return 0;
}

/* Demangled: pixRenderGridArb */
extern "C" __attribute__((visibility("default"))) int pixRenderGridArb(void) {
    ALOGD("pixRenderGridArb() called");
    return 0;
}

/* Demangled: pixaScaleToSize */
extern "C" __attribute__((visibility("default"))) int pixaScaleToSize(void) {
    ALOGD("pixaScaleToSize() called");
    return 0;
}

/* Demangled: pixOpenGray */
extern "C" __attribute__((visibility("default"))) int pixOpenGray(void) {
    ALOGD("pixOpenGray() called");
    return 0;
}

/* Demangled: fpixaConvertLABToRGB */
extern "C" __attribute__((visibility("default"))) int fpixaConvertLABToRGB(void) {
    ALOGD("fpixaConvertLABToRGB() called");
    return 0;
}

/* Demangled: pixGetLastOffPixelInRun */
extern "C" __attribute__((visibility("default"))) int pixGetLastOffPixelInRun(void) {
    ALOGD("pixGetLastOffPixelInRun() called");
    return 0;
}

/* Demangled: pixaConvertToPdfData */
extern "C" __attribute__((visibility("default"))) int pixaConvertToPdfData(void) {
    ALOGD("pixaConvertToPdfData() called");
    return 0;
}

/* Demangled: sarrayGetCount */
extern "C" __attribute__((visibility("default"))) int sarrayGetCount(void) {
    ALOGD("sarrayGetCount() called");
    return 0;
}

/* Demangled: pixGetHoleBorder */
extern "C" __attribute__((visibility("default"))) int pixGetHoleBorder(void) {
    ALOGD("pixGetHoleBorder() called");
    return 0;
}

/* Demangled: numaGetMedian */
extern "C" __attribute__((visibility("default"))) int numaGetMedian(void) {
    ALOGD("numaGetMedian() called");
    return 0;
}

/* Demangled: getExtendedCompositeParameters */
extern "C" __attribute__((visibility("default"))) int getExtendedCompositeParameters(void) {
    ALOGD("getExtendedCompositeParameters() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Pixa_nativeGetCount */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Pixa_nativeGetCount(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Pixa_nativeGetCount() called");
    return 0;
}

/* Demangled: pixApplyInvBackgroundGrayMap */
extern "C" __attribute__((visibility("default"))) int pixApplyInvBackgroundGrayMap(void) {
    ALOGD("pixApplyInvBackgroundGrayMap() called");
    return 0;
}

/* Demangled: boxaReadMem */
extern "C" __attribute__((visibility("default"))) int boxaReadMem(void) {
    ALOGD("boxaReadMem() called");
    return 0;
}

/* Demangled: fileConcatenate */
extern "C" __attribute__((visibility("default"))) int fileConcatenate(void) {
    ALOGD("fileConcatenate() called");
    return 0;
}

/* Demangled: sarrayParseRange */
extern "C" __attribute__((visibility("default"))) int sarrayParseRange(void) {
    ALOGD("sarrayParseRange() called");
    return 0;
}

/* Demangled: sarrayChangeRefcount */
extern "C" __attribute__((visibility("default"))) int sarrayChangeRefcount(void) {
    ALOGD("sarrayChangeRefcount() called");
    return 0;
}

/* Demangled: pixFillHolesToBoundingRect */
extern "C" __attribute__((visibility("default"))) int pixFillHolesToBoundingRect(void) {
    ALOGD("pixFillHolesToBoundingRect() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Pixa_nativeCopy */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Pixa_nativeCopy(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Pixa_nativeCopy() called");
    return 0;
}

/* Demangled: pixColorGrayRegionsCmap */
extern "C" __attribute__((visibility("default"))) int pixColorGrayRegionsCmap(void) {
    ALOGD("pixColorGrayRegionsCmap() called");
    return 0;
}

/* Demangled: l_dnaaCreate */
extern "C" __attribute__((visibility("default"))) int l_dnaaCreate(void) {
    ALOGD("l_dnaaCreate() called");
    return 0;
}

/* Demangled: regTestCompareSimilarPix */
extern "C" __attribute__((visibility("default"))) int regTestCompareSimilarPix(void) {
    ALOGD("regTestCompareSimilarPix() called");
    return 0;
}

/* Demangled: selPrintToString */
extern "C" __attribute__((visibility("default"))) int selPrintToString(void) {
    ALOGD("selPrintToString() called");
    return 0;
}

/* Demangled: pixFindSkewSweepAndSearchScorePivot */
extern "C" __attribute__((visibility("default"))) int pixFindSkewSweepAndSearchScorePivot(void) {
    ALOGD("pixFindSkewSweepAndSearchScorePivot() called");
    return 0;
}

/* Demangled: pixDisplayMultiple */
extern "C" __attribute__((visibility("default"))) int pixDisplayMultiple(void) {
    ALOGD("pixDisplayMultiple() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Pixa_nativeSort */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Pixa_nativeSort(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Pixa_nativeSort() called");
    return 0;
}

/* Demangled: pixcmapSetAlpha */
extern "C" __attribute__((visibility("default"))) int pixcmapSetAlpha(void) {
    ALOGD("pixcmapSetAlpha() called");
    return 0;
}

/* Demangled: l_dnaInsertNumber */
extern "C" __attribute__((visibility("default"))) int l_dnaInsertNumber(void) {
    ALOGD("l_dnaInsertNumber() called");
    return 0;
}

/* Demangled: numaArithOp */
extern "C" __attribute__((visibility("default"))) int numaArithOp(void) {
    ALOGD("numaArithOp() called");
    return 0;
}

/* Demangled: dpixCreate */
extern "C" __attribute__((visibility("default"))) int dpixCreate(void) {
    ALOGD("dpixCreate() called");
    return 0;
}

/* Demangled: l_dnaWrite */
extern "C" __attribute__((visibility("default"))) int l_dnaWrite(void) {
    ALOGD("l_dnaWrite() called");
    return 0;
}

/* Demangled: pixExtractOnLine */
extern "C" __attribute__((visibility("default"))) int pixExtractOnLine(void) {
    ALOGD("pixExtractOnLine() called");
    return 0;
}

/* Demangled: recogSetScaling */
extern "C" __attribute__((visibility("default"))) int recogSetScaling(void) {
    ALOGD("recogSetScaling() called");
    return 0;
}

/* Demangled: getImpliedFileFormat */
extern "C" __attribute__((visibility("default"))) int getImpliedFileFormat(void) {
    ALOGD("getImpliedFileFormat() called");
    return 0;
}

/* Demangled: fileFormatIsTiff */
extern "C" __attribute__((visibility("default"))) int fileFormatIsTiff(void) {
    ALOGD("fileFormatIsTiff() called");
    return 0;
}

/* Demangled: pixaCompareInPdf */
extern "C" __attribute__((visibility("default"))) int pixaCompareInPdf(void) {
    ALOGD("pixaCompareInPdf() called");
    return 0;
}

/* Demangled: pixWriteStringPS */
extern "C" __attribute__((visibility("default"))) int pixWriteStringPS(void) {
    ALOGD("pixWriteStringPS() called");
    return 0;
}

/* Demangled: recogShowMatchesInRange */
extern "C" __attribute__((visibility("default"))) int recogShowMatchesInRange(void) {
    ALOGD("recogShowMatchesInRange() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Clip_nativeClipRectangle */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Clip_nativeClipRectangle(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Clip_nativeClipRectangle() called");
    return 0;
}

/* Demangled: l_rbtreeGetLast */
extern "C" __attribute__((visibility("default"))) int l_rbtreeGetLast(void) {
    ALOGD("l_rbtreeGetLast() called");
    return 0;
}

/* Demangled: pixGenTextblockMask */
extern "C" __attribute__((visibility("default"))) int pixGenTextblockMask(void) {
    ALOGD("pixGenTextblockMask() called");
    return 0;
}

/* Demangled: ptaaGetBoundaryPixels */
extern "C" __attribute__((visibility("default"))) int ptaaGetBoundaryPixels(void) {
    ALOGD("ptaaGetBoundaryPixels() called");
    return 0;
}

/* Demangled: pixMirroredTiling */
extern "C" __attribute__((visibility("default"))) int pixMirroredTiling(void) {
    ALOGD("pixMirroredTiling() called");
    return 0;
}

/* Demangled: convertTiffMultipageToPS */
extern "C" __attribute__((visibility("default"))) int convertTiffMultipageToPS(void) {
    ALOGD("convertTiffMultipageToPS() called");
    return 0;
}

/* Demangled: pixcmapConvertYUVToRGB */
extern "C" __attribute__((visibility("default"))) int pixcmapConvertYUVToRGB(void) {
    ALOGD("pixcmapConvertYUVToRGB() called");
    return 0;
}

/* Demangled: generatePtaBox */
extern "C" __attribute__((visibility("default"))) int generatePtaBox(void) {
    ALOGD("generatePtaBox() called");
    return 0;
}

/* Demangled: generatePtaFilledSquare */
extern "C" __attribute__((visibility("default"))) int generatePtaFilledSquare(void) {
    ALOGD("generatePtaFilledSquare() called");
    return 0;
}

/* Demangled: pixacompGetPixcomp */
extern "C" __attribute__((visibility("default"))) int pixacompGetPixcomp(void) {
    ALOGD("pixacompGetPixcomp() called");
    return 0;
}

/* Demangled: pixClipRectangle */
extern "C" __attribute__((visibility("default"))) int pixClipRectangle(void) {
    ALOGD("pixClipRectangle() called");
    return 0;
}

/* Demangled: pixacompGetBoxGeometry */
extern "C" __attribute__((visibility("default"))) int pixacompGetBoxGeometry(void) {
    ALOGD("pixacompGetBoxGeometry() called");
    return 0;
}

/* Demangled: recogGetParent */
extern "C" __attribute__((visibility("default"))) int recogGetParent(void) {
    ALOGD("recogGetParent() called");
    return 0;
}

/* Demangled: pixColorContent */
extern "C" __attribute__((visibility("default"))) int pixColorContent(void) {
    ALOGD("pixColorContent() called");
    return 0;
}

/* Demangled: pixUpDownDetectDwa */
extern "C" __attribute__((visibility("default"))) int pixUpDownDetectDwa(void) {
    ALOGD("pixUpDownDetectDwa() called");
    return 0;
}

/* Demangled: dpixSetData */
extern "C" __attribute__((visibility("default"))) int dpixSetData(void) {
    ALOGD("dpixSetData() called");
    return 0;
}

/* Demangled: readHeaderJpeg */
extern "C" __attribute__((visibility("default"))) int readHeaderJpeg(void) {
    ALOGD("readHeaderJpeg() called");
    return 0;
}

/* Demangled: ptraReverse */
extern "C" __attribute__((visibility("default"))) int ptraReverse(void) {
    ALOGD("ptraReverse() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_MorphApp_nativePixFastTophat */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_MorphApp_nativePixFastTophat(void) {
    ALOGD("Java_com_googlecode_leptonica_android_MorphApp_nativePixFastTophat() called");
    return 0;
}

/* Demangled: pixcmapDestroy */
extern "C" __attribute__((visibility("default"))) int pixcmapDestroy(void) {
    ALOGD("pixcmapDestroy() called");
    return 0;
}

/* Demangled: jbCorrelationInitWithoutComponents */
extern "C" __attribute__((visibility("default"))) int jbCorrelationInitWithoutComponents(void) {
    ALOGD("jbCorrelationInitWithoutComponents() called");
    return 0;
}

/* Demangled: numaAddBorder */
extern "C" __attribute__((visibility("default"))) int numaAddBorder(void) {
    ALOGD("numaAddBorder() called");
    return 0;
}

/* Demangled: boxaSaveValid */
extern "C" __attribute__((visibility("default"))) int boxaSaveValid(void) {
    ALOGD("boxaSaveValid() called");
    return 0;
}

/* Demangled: getMorphBorderPixelColor */
extern "C" __attribute__((visibility("default"))) int getMorphBorderPixelColor(void) {
    ALOGD("getMorphBorderPixelColor() called");
    return 0;
}

/* Demangled: makeOrientDecision */
extern "C" __attribute__((visibility("default"))) int makeOrientDecision(void) {
    ALOGD("makeOrientDecision() called");
    return 0;
}

/* Demangled: pixRenderLine */
extern "C" __attribute__((visibility("default"))) int pixRenderLine(void) {
    ALOGD("pixRenderLine() called");
    return 0;
}

/* Demangled: modifyTrailingSlash */
extern "C" __attribute__((visibility("default"))) int modifyTrailingSlash(void) {
    ALOGD("modifyTrailingSlash() called");
    return 0;
}

/* Demangled: pixAddGray */
extern "C" __attribute__((visibility("default"))) int pixAddGray(void) {
    ALOGD("pixAddGray() called");
    return 0;
}

/* Demangled: pixApplyLocalThreshold */
extern "C" __attribute__((visibility("default"))) int pixApplyLocalThreshold(void) {
    ALOGD("pixApplyLocalThreshold() called");
    return 0;
}

/* Demangled: fpixGetMin */
extern "C" __attribute__((visibility("default"))) int fpixGetMin(void) {
    ALOGD("fpixGetMin() called");
    return 0;
}

/* Demangled: pixaDisplayTiledWithText */
extern "C" __attribute__((visibility("default"))) int pixaDisplayTiledWithText(void) {
    ALOGD("pixaDisplayTiledWithText() called");
    return 0;
}

/* Demangled: pixSetWpl */
extern "C" __attribute__((visibility("default"))) int pixSetWpl(void) {
    ALOGD("pixSetWpl() called");
    return 0;
}

/* Demangled: pixacompWriteStream */
extern "C" __attribute__((visibility("default"))) int pixacompWriteStream(void) {
    ALOGD("pixacompWriteStream() called");
    return 0;
}

/* Demangled: __aeabi_uidivmod */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_uidivmod(void) __asm__("__aeabi_uidivmod");
int fn___aeabi_uidivmod(void) {
    ALOGD("__aeabi_uidivmod() called");
    return 0;
}

/* Demangled: l_setDataDibit */
extern "C" __attribute__((visibility("default"))) int l_setDataDibit(void) {
    ALOGD("l_setDataDibit() called");
    return 0;
}

/* Demangled: numaTransform */
extern "C" __attribute__((visibility("default"))) int numaTransform(void) {
    ALOGD("numaTransform() called");
    return 0;
}

/* Demangled: pixAverageOnLine */
extern "C" __attribute__((visibility("default"))) int pixAverageOnLine(void) {
    ALOGD("pixAverageOnLine() called");
    return 0;
}

/* Demangled: selCreateFromPta */
extern "C" __attribute__((visibility("default"))) int selCreateFromPta(void) {
    ALOGD("selCreateFromPta() called");
    return 0;
}

/* Demangled: pixStretchHorizontalLI */
extern "C" __attribute__((visibility("default"))) int pixStretchHorizontalLI(void) {
    ALOGD("pixStretchHorizontalLI() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_MorphApp_nativePixTophat */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_MorphApp_nativePixTophat(void) {
    ALOGD("Java_com_googlecode_leptonica_android_MorphApp_nativePixTophat() called");
    return 0;
}

/* Demangled: boxaConstrainSize */
extern "C" __attribute__((visibility("default"))) int boxaConstrainSize(void) {
    ALOGD("boxaConstrainSize() called");
    return 0;
}

/* Demangled: l_byteaGetData */
extern "C" __attribute__((visibility("default"))) int l_byteaGetData(void) {
    ALOGD("l_byteaGetData() called");
    return 0;
}

/* Demangled: generatePtaGrid */
extern "C" __attribute__((visibility("default"))) int generatePtaGrid(void) {
    ALOGD("generatePtaGrid() called");
    return 0;
}

/* Demangled: pixaaScaleToSizeVar */
extern "C" __attribute__((visibility("default"))) int pixaaScaleToSizeVar(void) {
    ALOGD("pixaaScaleToSizeVar() called");
    return 0;
}

/* Demangled: pixThreshold8 */
extern "C" __attribute__((visibility("default"))) int pixThreshold8(void) {
    ALOGD("pixThreshold8() called");
    return 0;
}

/* Exported Object: bwmap */
extern "C" __attribute__((visibility("default"))) void* bwmap = NULL;

/* Demangled: selaDestroy */
extern "C" __attribute__((visibility("default"))) int selaDestroy(void) {
    ALOGD("selaDestroy() called");
    return 0;
}

/* Demangled: pixReadMemJp2k */
extern "C" __attribute__((visibility("default"))) int pixReadMemJp2k(void) {
    ALOGD("pixReadMemJp2k() called");
    return 0;
}

/* Demangled: ptaGetRefcount */
extern "C" __attribute__((visibility("default"))) int ptaGetRefcount(void) {
    ALOGD("ptaGetRefcount() called");
    return 0;
}

/* Demangled: returnErrorPtr */
extern "C" __attribute__((visibility("default"))) int returnErrorPtr(void) {
    ALOGD("returnErrorPtr() called");
    return 0;
}

/* Demangled: pixcmapAddNewColor */
extern "C" __attribute__((visibility("default"))) int pixcmapAddNewColor(void) {
    ALOGD("pixcmapAddNewColor() called");
    return 0;
}

/* Demangled: fpixSetAllArbitrary */
extern "C" __attribute__((visibility("default"))) int fpixSetAllArbitrary(void) {
    ALOGD("fpixSetAllArbitrary() called");
    return 0;
}

/* Demangled: findFileFormatBuffer */
extern "C" __attribute__((visibility("default"))) int findFileFormatBuffer(void) {
    ALOGD("findFileFormatBuffer() called");
    return 0;
}

/* Demangled: makeLogBase2Tab */
extern "C" __attribute__((visibility("default"))) int makeLogBase2Tab(void) {
    ALOGD("makeLogBase2Tab() called");
    return 0;
}

/* Demangled: sarrayConvertFilesToPS */
extern "C" __attribute__((visibility("default"))) int sarrayConvertFilesToPS(void) {
    ALOGD("sarrayConvertFilesToPS() called");
    return 0;
}

/* Demangled: pixSetResolution */
extern "C" __attribute__((visibility("default"))) int pixSetResolution(void) {
    ALOGD("pixSetResolution() called");
    return 0;
}

/* Demangled: pixBlocksum */
extern "C" __attribute__((visibility("default"))) int pixBlocksum(void) {
    ALOGD("pixBlocksum() called");
    return 0;
}

/* Demangled: pixSetAllGray */
extern "C" __attribute__((visibility("default"))) int pixSetAllGray(void) {
    ALOGD("pixSetAllGray() called");
    return 0;
}

/* Demangled: pixInitAccumulate */
extern "C" __attribute__((visibility("default"))) int pixInitAccumulate(void) {
    ALOGD("pixInitAccumulate() called");
    return 0;
}

/* Demangled: pixGetDepth */
extern "C" __attribute__((visibility("default"))) int pixGetDepth(void) {
    ALOGD("pixGetDepth() called");
    return 0;
}

/* Demangled: pixRunHistogramMorph */
extern "C" __attribute__((visibility("default"))) int pixRunHistogramMorph(void) {
    ALOGD("pixRunHistogramMorph() called");
    return 0;
}

/* Demangled: pixDitherTo2bppSpec */
extern "C" __attribute__((visibility("default"))) int pixDitherTo2bppSpec(void) {
    ALOGD("pixDitherTo2bppSpec() called");
    return 0;
}

/* Demangled: selGetTypeAtOrigin */
extern "C" __attribute__((visibility("default"))) int selGetTypeAtOrigin(void) {
    ALOGD("selGetTypeAtOrigin() called");
    return 0;
}

/* Demangled: pixGetRasterData */
extern "C" __attribute__((visibility("default"))) int pixGetRasterData(void) {
    ALOGD("pixGetRasterData() called");
    return 0;
}

/* Demangled: scaleColorAreaMapLow */
extern "C" __attribute__((visibility("default"))) int scaleColorAreaMapLow(void) {
    ALOGD("scaleColorAreaMapLow() called");
    return 0;
}

/* Demangled: pixAffineSampledPta */
extern "C" __attribute__((visibility("default"))) int pixAffineSampledPta(void) {
    ALOGD("pixAffineSampledPta() called");
    return 0;
}

/* Demangled: pixaccMultConst */
extern "C" __attribute__((visibility("default"))) int pixaccMultConst(void) {
    ALOGD("pixaccMultConst() called");
    return 0;
}

/* Demangled: pixIntersectionOfMorphOps */
extern "C" __attribute__((visibility("default"))) int pixIntersectionOfMorphOps(void) {
    ALOGD("pixIntersectionOfMorphOps() called");
    return 0;
}

/* Demangled: numaMakeRankFromHistogram */
extern "C" __attribute__((visibility("default"))) int numaMakeRankFromHistogram(void) {
    ALOGD("numaMakeRankFromHistogram() called");
    return 0;
}

/* Demangled: pixaaScaleToSize */
extern "C" __attribute__((visibility("default"))) int pixaaScaleToSize(void) {
    ALOGD("pixaaScaleToSize() called");
    return 0;
}

/* Demangled: pixRotateAMGray */
extern "C" __attribute__((visibility("default"))) int pixRotateAMGray(void) {
    ALOGD("pixRotateAMGray() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_memcpy4(void) __asm__("__aeabi_memcpy4");
int fn___aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: convertPtaLineTo4cc */
extern "C" __attribute__((visibility("default"))) int convertPtaLineTo4cc(void) {
    ALOGD("convertPtaLineTo4cc() called");
    return 0;
}

/* Demangled: fpixRenderContours */
extern "C" __attribute__((visibility("default"))) int fpixRenderContours(void) {
    ALOGD("fpixRenderContours() called");
    return 0;
}

/* Demangled: fgetJpegResolution */
extern "C" __attribute__((visibility("default"))) int fgetJpegResolution(void) {
    ALOGD("fgetJpegResolution() called");
    return 0;
}

/* Demangled: kernelInvert */
extern "C" __attribute__((visibility("default"))) int kernelInvert(void) {
    ALOGD("kernelInvert() called");
    return 0;
}

/* Demangled: pixcmapConvertRGBToYUV */
extern "C" __attribute__((visibility("default"))) int pixcmapConvertRGBToYUV(void) {
    ALOGD("pixcmapConvertRGBToYUV() called");
    return 0;
}

/* Demangled: pixUnsharpMaskingGray2D */
extern "C" __attribute__((visibility("default"))) int pixUnsharpMaskingGray2D(void) {
    ALOGD("pixUnsharpMaskingGray2D() called");
    return 0;
}

/* Demangled: pixSwapAndDestroy */
extern "C" __attribute__((visibility("default"))) int pixSwapAndDestroy(void) {
    ALOGD("pixSwapAndDestroy() called");
    return 0;
}

/* Demangled: pixVarianceByRow */
extern "C" __attribute__((visibility("default"))) int pixVarianceByRow(void) {
    ALOGD("pixVarianceByRow() called");
    return 0;
}

/* Demangled: writeImageCompressedToPSFile */
extern "C" __attribute__((visibility("default"))) int writeImageCompressedToPSFile(void) {
    ALOGD("writeImageCompressedToPSFile() called");
    return 0;
}

/* Demangled: recogSetChannelParams */
extern "C" __attribute__((visibility("default"))) int recogSetChannelParams(void) {
    ALOGD("recogSetChannelParams() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_memcpy8(void) __asm__("__aeabi_memcpy8");
int fn___aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: pixaccDestroy */
extern "C" __attribute__((visibility("default"))) int pixaccDestroy(void) {
    ALOGD("pixaccDestroy() called");
    return 0;
}

/* Demangled: readHeaderPng */
extern "C" __attribute__((visibility("default"))) int readHeaderPng(void) {
    ALOGD("readHeaderPng() called");
    return 0;
}

/* Demangled: pmsDestroy */
extern "C" __attribute__((visibility("default"))) int pmsDestroy(void) {
    ALOGD("pmsDestroy() called");
    return 0;
}

/* Demangled: regTestComparePix */
extern "C" __attribute__((visibility("default"))) int regTestComparePix(void) {
    ALOGD("regTestComparePix() called");
    return 0;
}

/* Demangled: pixHolesByFilling */
extern "C" __attribute__((visibility("default"))) int pixHolesByFilling(void) {
    ALOGD("pixHolesByFilling() called");
    return 0;
}

/* Demangled: numaAddSpecifiedBorder */
extern "C" __attribute__((visibility("default"))) int numaAddSpecifiedBorder(void) {
    ALOGD("numaAddSpecifiedBorder() called");
    return 0;
}

/* Demangled: makeValTabSG2 */
extern "C" __attribute__((visibility("default"))) int makeValTabSG2(void) {
    ALOGD("makeValTabSG2() called");
    return 0;
}

/* Demangled: pixCopyInputFormat */
extern "C" __attribute__((visibility("default"))) int pixCopyInputFormat(void) {
    ALOGD("pixCopyInputFormat() called");
    return 0;
}

/* Demangled: makePlotPtaFromNumaGen */
extern "C" __attribute__((visibility("default"))) int makePlotPtaFromNumaGen(void) {
    ALOGD("makePlotPtaFromNumaGen() called");
    return 0;
}

/* Demangled: makeValTabSG3 */
extern "C" __attribute__((visibility("default"))) int makeValTabSG3(void) {
    ALOGD("makeValTabSG3() called");
    return 0;
}

/* Demangled: pixSetColormap */
extern "C" __attribute__((visibility("default"))) int pixSetColormap(void) {
    ALOGD("pixSetColormap() called");
    return 0;
}

/* Demangled: boxGetCenter */
extern "C" __attribute__((visibility("default"))) int boxGetCenter(void) {
    ALOGD("boxGetCenter() called");
    return 0;
}

/* Demangled: pixUnsharpMaskingFast */
extern "C" __attribute__((visibility("default"))) int pixUnsharpMaskingFast(void) {
    ALOGD("pixUnsharpMaskingFast() called");
    return 0;
}

/* Demangled: makeValTabSG4 */
extern "C" __attribute__((visibility("default"))) int makeValTabSG4(void) {
    ALOGD("makeValTabSG4() called");
    return 0;
}

/* Demangled: linearInterpolatePixelGray */
extern "C" __attribute__((visibility("default"))) int linearInterpolatePixelGray(void) {
    ALOGD("linearInterpolatePixelGray() called");
    return 0;
}

/* Demangled: generatePtaaBoxa */
extern "C" __attribute__((visibility("default"))) int generatePtaaBoxa(void) {
    ALOGD("generatePtaaBoxa() called");
    return 0;
}

/* Demangled: fpixRead */
extern "C" __attribute__((visibility("default"))) int fpixRead(void) {
    ALOGD("fpixRead() called");
    return 0;
}

/* Demangled: fpixSetResolution */
extern "C" __attribute__((visibility("default"))) int fpixSetResolution(void) {
    ALOGD("fpixSetResolution() called");
    return 0;
}

/* Demangled: pixVarianceInRect */
extern "C" __attribute__((visibility("default"))) int pixVarianceInRect(void) {
    ALOGD("pixVarianceInRect() called");
    return 0;
}

/* Demangled: pixaAddBorderGeneral */
extern "C" __attribute__((visibility("default"))) int pixaAddBorderGeneral(void) {
    ALOGD("pixaAddBorderGeneral() called");
    return 0;
}

/* Demangled: boxaGetRankVals */
extern "C" __attribute__((visibility("default"))) int boxaGetRankVals(void) {
    ALOGD("boxaGetRankVals() called");
    return 0;
}

/* Demangled: numaShiftValue */
extern "C" __attribute__((visibility("default"))) int numaShiftValue(void) {
    ALOGD("numaShiftValue() called");
    return 0;
}

/* Demangled: l_dnaDestroy */
extern "C" __attribute__((visibility("default"))) int l_dnaDestroy(void) {
    ALOGD("l_dnaDestroy() called");
    return 0;
}

/* Demangled: l_generateCIData */
extern "C" __attribute__((visibility("default"))) int l_generateCIData(void) {
    ALOGD("l_generateCIData() called");
    return 0;
}

/* Demangled: readHeaderPnm */
extern "C" __attribute__((visibility("default"))) int readHeaderPnm(void) {
    ALOGD("readHeaderPnm() called");
    return 0;
}

/* Demangled: makeValTabSG6 */
extern "C" __attribute__((visibility("default"))) int makeValTabSG6(void) {
    ALOGD("makeValTabSG6() called");
    return 0;
}

/* Demangled: bmfGetWordWidths */
extern "C" __attribute__((visibility("default"))) int bmfGetWordWidths(void) {
    ALOGD("bmfGetWordWidths() called");
    return 0;
}

/* Demangled: recogaIdentifyMultiple */
extern "C" __attribute__((visibility("default"))) int recogaIdentifyMultiple(void) {
    ALOGD("recogaIdentifyMultiple() called");
    return 0;
}

/* Demangled: pixSetStrokeWidth */
extern "C" __attribute__((visibility("default"))) int pixSetStrokeWidth(void) {
    ALOGD("pixSetStrokeWidth() called");
    return 0;
}

/* Demangled: bilinearXformPt */
extern "C" __attribute__((visibility("default"))) int bilinearXformPt(void) {
    ALOGD("bilinearXformPt() called");
    return 0;
}

/* Demangled: pixBlendMask */
extern "C" __attribute__((visibility("default"))) int pixBlendMask(void) {
    ALOGD("pixBlendMask() called");
    return 0;
}

/* Demangled: pixOr */
extern "C" __attribute__((visibility("default"))) int pixOr(void) {
    ALOGD("pixOr() called");
    return 0;
}

/* Demangled: pixcmapGetColor32 */
extern "C" __attribute__((visibility("default"))) int pixcmapGetColor32(void) {
    ALOGD("pixcmapGetColor32() called");
    return 0;
}

/* Demangled: decodeAscii85 */
extern "C" __attribute__((visibility("default"))) int decodeAscii85(void) {
    ALOGD("decodeAscii85() called");
    return 0;
}

/* Demangled: fpixWrite */
extern "C" __attribute__((visibility("default"))) int fpixWrite(void) {
    ALOGD("fpixWrite() called");
    return 0;
}

/* Demangled: pixMultConstAccumulate */
extern "C" __attribute__((visibility("default"))) int pixMultConstAccumulate(void) {
    ALOGD("pixMultConstAccumulate() called");
    return 0;
}

/* Demangled: numaHistogramGetValFromRank */
extern "C" __attribute__((visibility("default"))) int numaHistogramGetValFromRank(void) {
    ALOGD("numaHistogramGetValFromRank() called");
    return 0;
}

/* Demangled: makeValTabSG8 */
extern "C" __attribute__((visibility("default"))) int makeValTabSG8(void) {
    ALOGD("makeValTabSG8() called");
    return 0;
}

/* Demangled: fpixConvolve */
extern "C" __attribute__((visibility("default"))) int fpixConvolve(void) {
    ALOGD("fpixConvolve() called");
    return 0;
}

/* Demangled: dewarpCreate */
extern "C" __attribute__((visibility("default"))) int dewarpCreate(void) {
    ALOGD("dewarpCreate() called");
    return 0;
}

/* Demangled: pixCountTextColumns */
extern "C" __attribute__((visibility("default"))) int pixCountTextColumns(void) {
    ALOGD("pixCountTextColumns() called");
    return 0;
}

/* Demangled: fpixFlipTB */
extern "C" __attribute__((visibility("default"))) int fpixFlipTB(void) {
    ALOGD("fpixFlipTB() called");
    return 0;
}

/* Demangled: pixReadMemSpix */
extern "C" __attribute__((visibility("default"))) int pixReadMemSpix(void) {
    ALOGD("pixReadMemSpix() called");
    return 0;
}

/* Demangled: selaWriteStream */
extern "C" __attribute__((visibility("default"))) int selaWriteStream(void) {
    ALOGD("selaWriteStream() called");
    return 0;
}

/* Demangled: dpixCreateTemplate */
extern "C" __attribute__((visibility("default"))) int dpixCreateTemplate(void) {
    ALOGD("dpixCreateTemplate() called");
    return 0;
}

/* Demangled: pixWriteMemPdf */
extern "C" __attribute__((visibility("default"))) int pixWriteMemPdf(void) {
    ALOGD("pixWriteMemPdf() called");
    return 0;
}

/* Demangled: pixGlobalNormNoSatRGB */
extern "C" __attribute__((visibility("default"))) int pixGlobalNormNoSatRGB(void) {
    ALOGD("pixGlobalNormNoSatRGB() called");
    return 0;
}

/* Demangled: pixOctreeQuantByPopulation */
extern "C" __attribute__((visibility("default"))) int pixOctreeQuantByPopulation(void) {
    ALOGD("pixOctreeQuantByPopulation() called");
    return 0;
}

/* Demangled: pixConvertRGBToHue */
extern "C" __attribute__((visibility("default"))) int pixConvertRGBToHue(void) {
    ALOGD("pixConvertRGBToHue() called");
    return 0;
}

/* Demangled: sarrayReadStream */
extern "C" __attribute__((visibility("default"))) int sarrayReadStream(void) {
    ALOGD("sarrayReadStream() called");
    return 0;
}

/* Demangled: pixHDome */
extern "C" __attribute__((visibility("default"))) int pixHDome(void) {
    ALOGD("pixHDome() called");
    return 0;
}

/* Demangled: lheapGetCount */
extern "C" __attribute__((visibility("default"))) int lheapGetCount(void) {
    ALOGD("lheapGetCount() called");
    return 0;
}

/* Demangled: listInsertAfter */
extern "C" __attribute__((visibility("default"))) int listInsertAfter(void) {
    ALOGD("listInsertAfter() called");
    return 0;
}

/* Demangled: regTestCompareStrings */
extern "C" __attribute__((visibility("default"))) int regTestCompareStrings(void) {
    ALOGD("regTestCompareStrings() called");
    return 0;
}

/* Demangled: ccbaWrite */
extern "C" __attribute__((visibility("default"))) int ccbaWrite(void) {
    ALOGD("ccbaWrite() called");
    return 0;
}

/* Demangled: jbAddPageComponents */
extern "C" __attribute__((visibility("default"))) int jbAddPageComponents(void) {
    ALOGD("jbAddPageComponents() called");
    return 0;
}

/* Demangled: pixaComparePhotoRegionsByHisto */
extern "C" __attribute__((visibility("default"))) int pixaComparePhotoRegionsByHisto(void) {
    ALOGD("pixaComparePhotoRegionsByHisto() called");
    return 0;
}

/* Demangled: numaGetHistogramStatsOnInterval */
extern "C" __attribute__((visibility("default"))) int numaGetHistogramStatsOnInterval(void) {
    ALOGD("numaGetHistogramStatsOnInterval() called");
    return 0;
}

/* Demangled: pixRowStats */
extern "C" __attribute__((visibility("default"))) int pixRowStats(void) {
    ALOGD("pixRowStats() called");
    return 0;
}

/* Demangled: pixRotateOrth */
extern "C" __attribute__((visibility("default"))) int pixRotateOrth(void) {
    ALOGD("pixRotateOrth() called");
    return 0;
}

/* Demangled: pixSetLowContrast */
extern "C" __attribute__((visibility("default"))) int pixSetLowContrast(void) {
    ALOGD("pixSetLowContrast() called");
    return 0;
}

/* Demangled: pixaReadMem */
extern "C" __attribute__((visibility("default"))) int pixaReadMem(void) {
    ALOGD("pixaReadMem() called");
    return 0;
}

/* Demangled: l_dnaShiftValue */
extern "C" __attribute__((visibility("default"))) int l_dnaShiftValue(void) {
    ALOGD("l_dnaShiftValue() called");
    return 0;
}

/* Demangled: recogSetPadParams */
extern "C" __attribute__((visibility("default"))) int recogSetPadParams(void) {
    ALOGD("recogSetPadParams() called");
    return 0;
}

/* Demangled: selaAddDwaLinear */
extern "C" __attribute__((visibility("default"))) int selaAddDwaLinear(void) {
    ALOGD("selaAddDwaLinear() called");
    return 0;
}

/* Demangled: __aeabi_memmove4 */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_memmove4(void) __asm__("__aeabi_memmove4");
int fn___aeabi_memmove4(void) {
    ALOGD("__aeabi_memmove4() called");
    return 0;
}

/* Demangled: pixGetBackgroundRGBMap */
extern "C" __attribute__((visibility("default"))) int pixGetBackgroundRGBMap(void) {
    ALOGD("pixGetBackgroundRGBMap() called");
    return 0;
}

/* Demangled: boxaaReadFromFiles */
extern "C" __attribute__((visibility("default"))) int boxaaReadFromFiles(void) {
    ALOGD("boxaaReadFromFiles() called");
    return 0;
}

/* Demangled: pixSetBorderVal */
extern "C" __attribute__((visibility("default"))) int pixSetBorderVal(void) {
    ALOGD("pixSetBorderVal() called");
    return 0;
}

/* Demangled: selaGetCount */
extern "C" __attribute__((visibility("default"))) int selaGetCount(void) {
    ALOGD("selaGetCount() called");
    return 0;
}

/* Demangled: pixcmapSerializeToMemory */
extern "C" __attribute__((visibility("default"))) int pixcmapSerializeToMemory(void) {
    ALOGD("pixcmapSerializeToMemory() called");
    return 0;
}

/* Demangled: dewarpShowResults */
extern "C" __attribute__((visibility("default"))) int dewarpShowResults(void) {
    ALOGD("dewarpShowResults() called");
    return 0;
}

/* Demangled: fpixaGetPixel */
extern "C" __attribute__((visibility("default"))) int fpixaGetPixel(void) {
    ALOGD("fpixaGetPixel() called");
    return 0;
}

/* Demangled: pixFindPageForeground */
extern "C" __attribute__((visibility("default"))) int pixFindPageForeground(void) {
    ALOGD("pixFindPageForeground() called");
    return 0;
}

/* Demangled: l_dnaaReadStream */
extern "C" __attribute__((visibility("default"))) int l_dnaaReadStream(void) {
    ALOGD("l_dnaaReadStream() called");
    return 0;
}

/* Demangled: pixConvertTo8Or32 */
extern "C" __attribute__((visibility("default"))) int pixConvertTo8Or32(void) {
    ALOGD("pixConvertTo8Or32() called");
    return 0;
}

/* Demangled: pixaFindAreaFractionMasked */
extern "C" __attribute__((visibility("default"))) int pixaFindAreaFractionMasked(void) {
    ALOGD("pixaFindAreaFractionMasked() called");
    return 0;
}

/* Demangled: recogPreSplittingFilter */
extern "C" __attribute__((visibility("default"))) int recogPreSplittingFilter(void) {
    ALOGD("recogPreSplittingFilter() called");
    return 0;
}

/* Demangled: pixGetRGBLine */
extern "C" __attribute__((visibility("default"))) int pixGetRGBLine(void) {
    ALOGD("pixGetRGBLine() called");
    return 0;
}

/* Demangled: appendSubdirs */
extern "C" __attribute__((visibility("default"))) int appendSubdirs(void) {
    ALOGD("appendSubdirs() called");
    return 0;
}

/* Demangled: pixMaskOverColorRange */
extern "C" __attribute__((visibility("default"))) int pixMaskOverColorRange(void) {
    ALOGD("pixMaskOverColorRange() called");
    return 0;
}

/* Demangled: pixcmapHasColor */
extern "C" __attribute__((visibility("default"))) int pixcmapHasColor(void) {
    ALOGD("pixcmapHasColor() called");
    return 0;
}

/* Demangled: pixRankRowTransform */
extern "C" __attribute__((visibility("default"))) int pixRankRowTransform(void) {
    ALOGD("pixRankRowTransform() called");
    return 0;
}

/* Demangled: pixaFindWidthHeightProduct */
extern "C" __attribute__((visibility("default"))) int pixaFindWidthHeightProduct(void) {
    ALOGD("pixaFindWidthHeightProduct() called");
    return 0;
}

/* Demangled: __aeabi_memmove8 */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_memmove8(void) __asm__("__aeabi_memmove8");
int fn___aeabi_memmove8(void) {
    ALOGD("__aeabi_memmove8() called");
    return 0;
}

/* Demangled: pixThresholdToBinary */
extern "C" __attribute__((visibility("default"))) int pixThresholdToBinary(void) {
    ALOGD("pixThresholdToBinary() called");
    return 0;
}

/* Demangled: boxaReadStream */
extern "C" __attribute__((visibility("default"))) int boxaReadStream(void) {
    ALOGD("boxaReadStream() called");
    return 0;
}

/* Demangled: lept_rmdir */
extern "C" __attribute__((visibility("default"))) int lept_rmdir(void) {
    ALOGD("lept_rmdir() called");
    return 0;
}

/* Demangled: pixReadIndexed */
extern "C" __attribute__((visibility("default"))) int pixReadIndexed(void) {
    ALOGD("pixReadIndexed() called");
    return 0;
}

/* Demangled: pixFHMTGen_1 */
extern "C" __attribute__((visibility("default"))) int pixFHMTGen_1(void) {
    ALOGD("pixFHMTGen_1() called");
    return 0;
}

/* Demangled: makeFlatKernel */
extern "C" __attribute__((visibility("default"))) int makeFlatKernel(void) {
    ALOGD("makeFlatKernel() called");
    return 0;
}

/* Demangled: recogShowMatch */
extern "C" __attribute__((visibility("default"))) int recogShowMatch(void) {
    ALOGD("recogShowMatch() called");
    return 0;
}

/* Demangled: l_asetCreateFromSarray */
extern "C" __attribute__((visibility("default"))) int l_asetCreateFromSarray(void) {
    ALOGD("l_asetCreateFromSarray() called");
    return 0;
}

/* Demangled: sudokuReadFile */
extern "C" __attribute__((visibility("default"))) int sudokuReadFile(void) {
    ALOGD("sudokuReadFile() called");
    return 0;
}

/* Demangled: ptaWrite */
extern "C" __attribute__((visibility("default"))) int ptaWrite(void) {
    ALOGD("ptaWrite() called");
    return 0;
}

/* Demangled: l_byteaInitFromFile */
extern "C" __attribute__((visibility("default"))) int l_byteaInitFromFile(void) {
    ALOGD("l_byteaInitFromFile() called");
    return 0;
}

/* Demangled: pixaSelectByPerimSizeRatio */
extern "C" __attribute__((visibility("default"))) int pixaSelectByPerimSizeRatio(void) {
    ALOGD("pixaSelectByPerimSizeRatio() called");
    return 0;
}

/* Demangled: pixaDisplayLinearly */
extern "C" __attribute__((visibility("default"))) int pixaDisplayLinearly(void) {
    ALOGD("pixaDisplayLinearly() called");
    return 0;
}

/* Demangled: rotateAMColorFastLow */
extern "C" __attribute__((visibility("default"))) int rotateAMColorFastLow(void) {
    ALOGD("rotateAMColorFastLow() called");
    return 0;
}

/* Demangled: numaEarthMoverDistance */
extern "C" __attribute__((visibility("default"))) int numaEarthMoverDistance(void) {
    ALOGD("numaEarthMoverDistance() called");
    return 0;
}

/* Demangled: numaReadStream */
extern "C" __attribute__((visibility("default"))) int numaReadStream(void) {
    ALOGD("numaReadStream() called");
    return 0;
}

/* Demangled: pixMinMaxNearLine */
extern "C" __attribute__((visibility("default"))) int pixMinMaxNearLine(void) {
    ALOGD("pixMinMaxNearLine() called");
    return 0;
}

/* Demangled: pixWriteMixedToPS */
extern "C" __attribute__((visibility("default"))) int pixWriteMixedToPS(void) {
    ALOGD("pixWriteMixedToPS() called");
    return 0;
}

/* Demangled: generateG4PS */
extern "C" __attribute__((visibility("default"))) int generateG4PS(void) {
    ALOGD("generateG4PS() called");
    return 0;
}

/* Demangled: fnbytesInFile */
extern "C" __attribute__((visibility("default"))) int fnbytesInFile(void) {
    ALOGD("fnbytesInFile() called");
    return 0;
}

/* Demangled: pixcmapRead */
extern "C" __attribute__((visibility("default"))) int pixcmapRead(void) {
    ALOGD("pixcmapRead() called");
    return 0;
}

/* Demangled: l_dnaJoin */
extern "C" __attribute__((visibility("default"))) int l_dnaJoin(void) {
    ALOGD("l_dnaJoin() called");
    return 0;
}

/* Demangled: dpixAddMultConstant */
extern "C" __attribute__((visibility("default"))) int dpixAddMultConstant(void) {
    ALOGD("dpixAddMultConstant() called");
    return 0;
}

/* Demangled: gplotRead */
extern "C" __attribute__((visibility("default"))) int gplotRead(void) {
    ALOGD("gplotRead() called");
    return 0;
}

/* Demangled: jbGetComponents */
extern "C" __attribute__((visibility("default"))) int jbGetComponents(void) {
    ALOGD("jbGetComponents() called");
    return 0;
}

/* Demangled: pixScaleToSizeRel */
extern "C" __attribute__((visibility("default"))) int pixScaleToSizeRel(void) {
    ALOGD("pixScaleToSizeRel() called");
    return 0;
}

/* Demangled: pixFewColorsMedianCutQuantMixed */
extern "C" __attribute__((visibility("default"))) int pixFewColorsMedianCutQuantMixed(void) {
    ALOGD("pixFewColorsMedianCutQuantMixed() called");
    return 0;
}

/* Demangled: pixSetMirroredBorder */
extern "C" __attribute__((visibility("default"))) int pixSetMirroredBorder(void) {
    ALOGD("pixSetMirroredBorder() called");
    return 0;
}

/* Demangled: boxaExtractSortedPattern */
extern "C" __attribute__((visibility("default"))) int boxaExtractSortedPattern(void) {
    ALOGD("boxaExtractSortedPattern() called");
    return 0;
}

/* Demangled: pixAverageIntensityProfile */
extern "C" __attribute__((visibility("default"))) int pixAverageIntensityProfile(void) {
    ALOGD("pixAverageIntensityProfile() called");
    return 0;
}

/* Demangled: pixacompReadMem */
extern "C" __attribute__((visibility("default"))) int pixacompReadMem(void) {
    ALOGD("pixacompReadMem() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Pix_nativeGetPixel */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Pix_nativeGetPixel(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Pix_nativeGetPixel() called");
    return 0;
}

/* Demangled: pixCloseGray3 */
extern "C" __attribute__((visibility("default"))) int pixCloseGray3(void) {
    ALOGD("pixCloseGray3() called");
    return 0;
}

/* Demangled: boxSimilar */
extern "C" __attribute__((visibility("default"))) int boxSimilar(void) {
    ALOGD("boxSimilar() called");
    return 0;
}

/* Demangled: pixFMorphopGen_1 */
extern "C" __attribute__((visibility("default"))) int pixFMorphopGen_1(void) {
    ALOGD("pixFMorphopGen_1() called");
    return 0;
}

/* Demangled: kernelGetSum */
extern "C" __attribute__((visibility("default"))) int kernelGetSum(void) {
    ALOGD("kernelGetSum() called");
    return 0;
}

/* Demangled: l_amapGetLast */
extern "C" __attribute__((visibility("default"))) int l_amapGetLast(void) {
    ALOGD("l_amapGetLast() called");
    return 0;
}

/* Demangled: numaaReadStream */
extern "C" __attribute__((visibility("default"))) int numaaReadStream(void) {
    ALOGD("numaaReadStream() called");
    return 0;
}

/* Demangled: pixSaveTiled */
extern "C" __attribute__((visibility("default"))) int pixSaveTiled(void) {
    ALOGD("pixSaveTiled() called");
    return 0;
}

/* Demangled: pixReadMemWebP */
extern "C" __attribute__((visibility("default"))) int pixReadMemWebP(void) {
    ALOGD("pixReadMemWebP() called");
    return 0;
}

/* Demangled: pixReadMemBmp */
extern "C" __attribute__((visibility("default"))) int pixReadMemBmp(void) {
    ALOGD("pixReadMemBmp() called");
    return 0;
}

/* Demangled: kernelGetMinMax */
extern "C" __attribute__((visibility("default"))) int kernelGetMinMax(void) {
    ALOGD("kernelGetMinMax() called");
    return 0;
}

/* Demangled: pixFMorphopGen_2 */
extern "C" __attribute__((visibility("default"))) int pixFMorphopGen_2(void) {
    ALOGD("pixFMorphopGen_2() called");
    return 0;
}

/* Demangled: numaInsertNumber */
extern "C" __attribute__((visibility("default"))) int numaInsertNumber(void) {
    ALOGD("numaInsertNumber() called");
    return 0;
}

/* Demangled: saConvertUnscaledFilesToPdf */
extern "C" __attribute__((visibility("default"))) int saConvertUnscaledFilesToPdf(void) {
    ALOGD("saConvertUnscaledFilesToPdf() called");
    return 0;
}

/* Demangled: convertToPSEmbed */
extern "C" __attribute__((visibility("default"))) int convertToPSEmbed(void) {
    ALOGD("convertToPSEmbed() called");
    return 0;
}

/* Demangled: ptaScale */
extern "C" __attribute__((visibility("default"))) int ptaScale(void) {
    ALOGD("ptaScale() called");
    return 0;
}

/* Demangled: pixShiftByComponent */
extern "C" __attribute__((visibility("default"))) int pixShiftByComponent(void) {
    ALOGD("pixShiftByComponent() called");
    return 0;
}

/* Demangled: numaaReadMem */
extern "C" __attribute__((visibility("default"))) int numaaReadMem(void) {
    ALOGD("numaaReadMem() called");
    return 0;
}

/* Demangled: pixEndianByteSwapNew */
extern "C" __attribute__((visibility("default"))) int pixEndianByteSwapNew(void) {
    ALOGD("pixEndianByteSwapNew() called");
    return 0;
}

/* Demangled: pixGetAverageValue */
extern "C" __attribute__((visibility("default"))) int pixGetAverageValue(void) {
    ALOGD("pixGetAverageValue() called");
    return 0;
}

/* Demangled: ptaRead */
extern "C" __attribute__((visibility("default"))) int ptaRead(void) {
    ALOGD("ptaRead() called");
    return 0;
}

/* Demangled: genRandomIntegerInRange */
extern "C" __attribute__((visibility("default"))) int genRandomIntegerInRange(void) {
    ALOGD("genRandomIntegerInRange() called");
    return 0;
}

/* Demangled: fpixGetWpl */
extern "C" __attribute__((visibility("default"))) int fpixGetWpl(void) {
    ALOGD("fpixGetWpl() called");
    return 0;
}

/* Demangled: dewarpWrite */
extern "C" __attribute__((visibility("default"))) int dewarpWrite(void) {
    ALOGD("dewarpWrite() called");
    return 0;
}

/* Demangled: l_dnaReadStream */
extern "C" __attribute__((visibility("default"))) int l_dnaReadStream(void) {
    ALOGD("l_dnaReadStream() called");
    return 0;
}

/* Demangled: fmorphopgen_low_1 */
extern "C" __attribute__((visibility("default"))) int fmorphopgen_low_1(void) {
    ALOGD("fmorphopgen_low_1() called");
    return 0;
}

/* Demangled: fmorphopgen_low_2 */
extern "C" __attribute__((visibility("default"))) int fmorphopgen_low_2(void) {
    ALOGD("fmorphopgen_low_2() called");
    return 0;
}

/* Demangled: l_hashStringToUint64 */
extern "C" __attribute__((visibility("default"))) int l_hashStringToUint64(void) {
    ALOGD("l_hashStringToUint64() called");
    return 0;
}

/* Demangled: boxaaGetCount */
extern "C" __attribute__((visibility("default"))) int boxaaGetCount(void) {
    ALOGD("boxaaGetCount() called");
    return 0;
}

/* Demangled: pixReadStreamJp2k */
extern "C" __attribute__((visibility("default"))) int pixReadStreamJp2k(void) {
    ALOGD("pixReadStreamJp2k() called");
    return 0;
}

/* Demangled: recogShowContent */
extern "C" __attribute__((visibility("default"))) int recogShowContent(void) {
    ALOGD("recogShowContent() called");
    return 0;
}

/* Demangled: pixAffineSequential */
extern "C" __attribute__((visibility("default"))) int pixAffineSequential(void) {
    ALOGD("pixAffineSequential() called");
    return 0;
}

/* Demangled: pixConvertRGBToGrayMinMax */
extern "C" __attribute__((visibility("default"))) int pixConvertRGBToGrayMinMax(void) {
    ALOGD("pixConvertRGBToGrayMinMax() called");
    return 0;
}

/* Demangled: boxaaReplaceBoxa */
extern "C" __attribute__((visibility("default"))) int boxaaReplaceBoxa(void) {
    ALOGD("boxaaReplaceBoxa() called");
    return 0;
}

/* Demangled: pixScaleGray2xLIThresh */
extern "C" __attribute__((visibility("default"))) int pixScaleGray2xLIThresh(void) {
    ALOGD("pixScaleGray2xLIThresh() called");
    return 0;
}

/* Demangled: sarraySortByIndex */
extern "C" __attribute__((visibility("default"))) int sarraySortByIndex(void) {
    ALOGD("sarraySortByIndex() called");
    return 0;
}

/* Demangled: pixHShearCorner */
extern "C" __attribute__((visibility("default"))) int pixHShearCorner(void) {
    ALOGD("pixHShearCorner() called");
    return 0;
}

/* Demangled: l_setDataTwoBytes */
extern "C" __attribute__((visibility("default"))) int l_setDataTwoBytes(void) {
    ALOGD("l_setDataTwoBytes() called");
    return 0;
}

/* Demangled: boxaaFlattenToBoxa */
extern "C" __attribute__((visibility("default"))) int boxaaFlattenToBoxa(void) {
    ALOGD("boxaaFlattenToBoxa() called");
    return 0;
}

/* Demangled: boxaSwapBoxes */
extern "C" __attribute__((visibility("default"))) int boxaSwapBoxes(void) {
    ALOGD("boxaSwapBoxes() called");
    return 0;
}

/* Demangled: fpixProjective */
extern "C" __attribute__((visibility("default"))) int fpixProjective(void) {
    ALOGD("fpixProjective() called");
    return 0;
}

/* Demangled: pixAddConstantGray */
extern "C" __attribute__((visibility("default"))) int pixAddConstantGray(void) {
    ALOGD("pixAddConstantGray() called");
    return 0;
}

/* Demangled: pixaSort2dByIndex */
extern "C" __attribute__((visibility("default"))) int pixaSort2dByIndex(void) {
    ALOGD("pixaSort2dByIndex() called");
    return 0;
}

/* Demangled: fpixChangeRefcount */
extern "C" __attribute__((visibility("default"))) int fpixChangeRefcount(void) {
    ALOGD("fpixChangeRefcount() called");
    return 0;
}

/* Demangled: pixRenderPtaArb */
extern "C" __attribute__((visibility("default"))) int pixRenderPtaArb(void) {
    ALOGD("pixRenderPtaArb() called");
    return 0;
}

/* Demangled: convertFlateToPS */
extern "C" __attribute__((visibility("default"))) int convertFlateToPS(void) {
    ALOGD("convertFlateToPS() called");
    return 0;
}

/* Demangled: pixConvertYUVToRGB */
extern "C" __attribute__((visibility("default"))) int pixConvertYUVToRGB(void) {
    ALOGD("pixConvertYUVToRGB() called");
    return 0;
}

/* Demangled: l_binaryRead */
extern "C" __attribute__((visibility("default"))) int l_binaryRead(void) {
    ALOGD("l_binaryRead() called");
    return 0;
}

/* Demangled: getResA4Page */
extern "C" __attribute__((visibility("default"))) int getResA4Page(void) {
    ALOGD("getResA4Page() called");
    return 0;
}

/* Demangled: boxaInitFull */
extern "C" __attribute__((visibility("default"))) int boxaInitFull(void) {
    ALOGD("boxaInitFull() called");
    return 0;
}

/* Demangled: pixDrawBoxa */
extern "C" __attribute__((visibility("default"))) int pixDrawBoxa(void) {
    ALOGD("pixDrawBoxa() called");
    return 0;
}

/* Demangled: pixaccCreateFromPix */
extern "C" __attribute__((visibility("default"))) int pixaccCreateFromPix(void) {
    ALOGD("pixaccCreateFromPix() called");
    return 0;
}

/* Demangled: pixBlend */
extern "C" __attribute__((visibility("default"))) int pixBlend(void) {
    ALOGD("pixBlend() called");
    return 0;
}

/* Demangled: pixHMT */
extern "C" __attribute__((visibility("default"))) int pixHMT(void) {
    ALOGD("pixHMT() called");
    return 0;
}

/* Demangled: pixAssignToNearestColor */
extern "C" __attribute__((visibility("default"))) int pixAssignToNearestColor(void) {
    ALOGD("pixAssignToNearestColor() called");
    return 0;
}

/* Demangled: pixVarThresholdToBinary */
extern "C" __attribute__((visibility("default"))) int pixVarThresholdToBinary(void) {
    ALOGD("pixVarThresholdToBinary() called");
    return 0;
}

/* Demangled: pixacompAddBox */
extern "C" __attribute__((visibility("default"))) int pixacompAddBox(void) {
    ALOGD("pixacompAddBox() called");
    return 0;
}

/* Demangled: pixWriteSegmentedPageToPS */
extern "C" __attribute__((visibility("default"))) int pixWriteSegmentedPageToPS(void) {
    ALOGD("pixWriteSegmentedPageToPS() called");
    return 0;
}

/* Demangled: stringReplaceEachSubstr */
extern "C" __attribute__((visibility("default"))) int stringReplaceEachSubstr(void) {
    ALOGD("stringReplaceEachSubstr() called");
    return 0;
}

/* Demangled: numaFindExtrema */
extern "C" __attribute__((visibility("default"))) int numaFindExtrema(void) {
    ALOGD("numaFindExtrema() called");
    return 0;
}

/* Demangled: listRemoveFromTail */
extern "C" __attribute__((visibility("default"))) int listRemoveFromTail(void) {
    ALOGD("listRemoveFromTail() called");
    return 0;
}

/* Demangled: ptaWriteStream */
extern "C" __attribute__((visibility("default"))) int ptaWriteStream(void) {
    ALOGD("ptaWriteStream() called");
    return 0;
}

/* Demangled: l_rbtreePrint */
extern "C" __attribute__((visibility("default"))) int l_rbtreePrint(void) {
    ALOGD("l_rbtreePrint() called");
    return 0;
}

/* Demangled: __aeabi_d2ulz */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_d2ulz(void) __asm__("__aeabi_d2ulz");
int fn___aeabi_d2ulz(void) {
    ALOGD("__aeabi_d2ulz() called");
    return 0;
}

/* Demangled: pixOctreeColorQuantGeneral */
extern "C" __attribute__((visibility("default"))) int pixOctreeColorQuantGeneral(void) {
    ALOGD("pixOctreeColorQuantGeneral() called");
    return 0;
}

/* Demangled: pixSearchBinaryMaze */
extern "C" __attribute__((visibility("default"))) int pixSearchBinaryMaze(void) {
    ALOGD("pixSearchBinaryMaze() called");
    return 0;
}

/* Demangled: pixAbsDiffInRect */
extern "C" __attribute__((visibility("default"))) int pixAbsDiffInRect(void) {
    ALOGD("pixAbsDiffInRect() called");
    return 0;
}

/* Demangled: projectiveXformSampledPt */
extern "C" __attribute__((visibility("default"))) int projectiveXformSampledPt(void) {
    ALOGD("projectiveXformSampledPt() called");
    return 0;
}

/* Demangled: pixGetDimensions */
extern "C" __attribute__((visibility("default"))) int pixGetDimensions(void) {
    ALOGD("pixGetDimensions() called");
    return 0;
}

/* Demangled: nextOnPixelInRaster */
extern "C" __attribute__((visibility("default"))) int nextOnPixelInRaster(void) {
    ALOGD("nextOnPixelInRaster() called");
    return 0;
}

/* Demangled: fpixaConvertXYZToRGB */
extern "C" __attribute__((visibility("default"))) int fpixaConvertXYZToRGB(void) {
    ALOGD("fpixaConvertXYZToRGB() called");
    return 0;
}

/* Demangled: l_dnaSetParameters */
extern "C" __attribute__((visibility("default"))) int l_dnaSetParameters(void) {
    ALOGD("l_dnaSetParameters() called");
    return 0;
}

/* Demangled: numaClone */
extern "C" __attribute__((visibility("default"))) int numaClone(void) {
    ALOGD("numaClone() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Binarize_nativeSauvolaBinarizeTiled */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Binarize_nativeSauvolaBinarizeTiled(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Binarize_nativeSauvolaBinarizeTiled() called");
    return 0;
}

/* Demangled: boxaaCreate */
extern "C" __attribute__((visibility("default"))) int boxaaCreate(void) {
    ALOGD("boxaaCreate() called");
    return 0;
}

/* Demangled: boxaIntersectsBox */
extern "C" __attribute__((visibility("default"))) int boxaIntersectsBox(void) {
    ALOGD("boxaIntersectsBox() called");
    return 0;
}

/* Demangled: pixRankBinByStrip */
extern "C" __attribute__((visibility("default"))) int pixRankBinByStrip(void) {
    ALOGD("pixRankBinByStrip() called");
    return 0;
}

/* Demangled: pixaaRead */
extern "C" __attribute__((visibility("default"))) int pixaaRead(void) {
    ALOGD("pixaaRead() called");
    return 0;
}

/* Demangled: pixScaleColor2xLI */
extern "C" __attribute__((visibility("default"))) int pixScaleColor2xLI(void) {
    ALOGD("pixScaleColor2xLI() called");
    return 0;
}

/* Demangled: startWallTimer */
extern "C" __attribute__((visibility("default"))) int startWallTimer(void) {
    ALOGD("startWallTimer() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Pixa_nativeCreate */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Pixa_nativeCreate(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Pixa_nativeCreate() called");
    return 0;
}

/* Demangled: pixResizeImageData */
extern "C" __attribute__((visibility("default"))) int pixResizeImageData(void) {
    ALOGD("pixResizeImageData() called");
    return 0;
}

/* Demangled: pixFindCornerPixels */
extern "C" __attribute__((visibility("default"))) int pixFindCornerPixels(void) {
    ALOGD("pixFindCornerPixels() called");
    return 0;
}

/* Demangled: pixHShear */
extern "C" __attribute__((visibility("default"))) int pixHShear(void) {
    ALOGD("pixHShear() called");
    return 0;
}

/* Demangled: nbytesInFile */
extern "C" __attribute__((visibility("default"))) int nbytesInFile(void) {
    ALOGD("nbytesInFile() called");
    return 0;
}

/* Demangled: pixacompRead */
extern "C" __attribute__((visibility("default"))) int pixacompRead(void) {
    ALOGD("pixacompRead() called");
    return 0;
}

/* Demangled: pixConvert1To16 */
extern "C" __attribute__((visibility("default"))) int pixConvert1To16(void) {
    ALOGD("pixConvert1To16() called");
    return 0;
}

/* Demangled: pixScaleToGrayFast */
extern "C" __attribute__((visibility("default"))) int pixScaleToGrayFast(void) {
    ALOGD("pixScaleToGrayFast() called");
    return 0;
}

/* Demangled: boxaExtractAsNuma */
extern "C" __attribute__((visibility("default"))) int boxaExtractAsNuma(void) {
    ALOGD("boxaExtractAsNuma() called");
    return 0;
}

/* Demangled: ccbaGenerateStepChains */
extern "C" __attribute__((visibility("default"))) int ccbaGenerateStepChains(void) {
    ALOGD("ccbaGenerateStepChains() called");
    return 0;
}

/* Demangled: pixaGetPixArray */
extern "C" __attribute__((visibility("default"))) int pixaGetPixArray(void) {
    ALOGD("pixaGetPixArray() called");
    return 0;
}

/* Demangled: numaMakeAbsValue */
extern "C" __attribute__((visibility("default"))) int numaMakeAbsValue(void) {
    ALOGD("numaMakeAbsValue() called");
    return 0;
}

/* Demangled: l_byteaWrite */
extern "C" __attribute__((visibility("default"))) int l_byteaWrite(void) {
    ALOGD("l_byteaWrite() called");
    return 0;
}

/* Demangled: fhmtautogen1 */
extern "C" __attribute__((visibility("default"))) int fhmtautogen1(void) {
    ALOGD("fhmtautogen1() called");
    return 0;
}

/* Demangled: fpixaCopy */
extern "C" __attribute__((visibility("default"))) int fpixaCopy(void) {
    ALOGD("fpixaCopy() called");
    return 0;
}

/* Demangled: pmsGetLevelForDealloc */
extern "C" __attribute__((visibility("default"))) int pmsGetLevelForDealloc(void) {
    ALOGD("pmsGetLevelForDealloc() called");
    return 0;
}

/* Demangled: fhmtautogen2 */
extern "C" __attribute__((visibility("default"))) int fhmtautogen2(void) {
    ALOGD("fhmtautogen2() called");
    return 0;
}

/* Demangled: numaConvertToInt */
extern "C" __attribute__((visibility("default"))) int numaConvertToInt(void) {
    ALOGD("numaConvertToInt() called");
    return 0;
}

/* Demangled: pixSmoothConnectedRegions */
extern "C" __attribute__((visibility("default"))) int pixSmoothConnectedRegions(void) {
    ALOGD("pixSmoothConnectedRegions() called");
    return 0;
}

/* Demangled: pixMaskedThreshOnBackgroundNorm */
extern "C" __attribute__((visibility("default"))) int pixMaskedThreshOnBackgroundNorm(void) {
    ALOGD("pixMaskedThreshOnBackgroundNorm() called");
    return 0;
}

/* Demangled: dewarpaDestroyDewarp */
extern "C" __attribute__((visibility("default"))) int dewarpaDestroyDewarp(void) {
    ALOGD("dewarpaDestroyDewarp() called");
    return 0;
}

/* Demangled: pixcompGetDimensions */
extern "C" __attribute__((visibility("default"))) int pixcompGetDimensions(void) {
    ALOGD("pixcompGetDimensions() called");
    return 0;
}

/* Demangled: l_byteaDestroy */
extern "C" __attribute__((visibility("default"))) int l_byteaDestroy(void) {
    ALOGD("l_byteaDestroy() called");
    return 0;
}

/* Demangled: recogGetClassIndex */
extern "C" __attribute__((visibility("default"))) int recogGetClassIndex(void) {
    ALOGD("recogGetClassIndex() called");
    return 0;
}

/* Demangled: pixacompWriteMem */
extern "C" __attribute__((visibility("default"))) int pixacompWriteMem(void) {
    ALOGD("pixacompWriteMem() called");
    return 0;
}

/* Demangled: pixConvertTo8Color */
extern "C" __attribute__((visibility("default"))) int pixConvertTo8Color(void) {
    ALOGD("pixConvertTo8Color() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Pixa_nativeGetPix */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Pixa_nativeGetPix(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Pixa_nativeGetPix() called");
    return 0;
}

/* Demangled: boxaWrite */
extern "C" __attribute__((visibility("default"))) int boxaWrite(void) {
    ALOGD("boxaWrite() called");
    return 0;
}

/* Demangled: ptaSelectByValue */
extern "C" __attribute__((visibility("default"))) int ptaSelectByValue(void) {
    ALOGD("ptaSelectByValue() called");
    return 0;
}

/* Demangled: l_dnaHashCreateFromDna */
extern "C" __attribute__((visibility("default"))) int l_dnaHashCreateFromDna(void) {
    ALOGD("l_dnaHashCreateFromDna() called");
    return 0;
}

/* Demangled: pixaAddPixWithText */
extern "C" __attribute__((visibility("default"))) int pixaAddPixWithText(void) {
    ALOGD("pixaAddPixWithText() called");
    return 0;
}

/* Demangled: pixReadStreamSpix */
extern "C" __attribute__((visibility("default"))) int pixReadStreamSpix(void) {
    ALOGD("pixReadStreamSpix() called");
    return 0;
}

/* Demangled: sarrayIntersectionByAset */
extern "C" __attribute__((visibility("default"))) int sarrayIntersectionByAset(void) {
    ALOGD("sarrayIntersectionByAset() called");
    return 0;
}

/* Demangled: pixaAnyColormaps */
extern "C" __attribute__((visibility("default"))) int pixaAnyColormaps(void) {
    ALOGD("pixaAnyColormaps() called");
    return 0;
}

/* Demangled: pixDisplayPtaaPattern */
extern "C" __attribute__((visibility("default"))) int pixDisplayPtaaPattern(void) {
    ALOGD("pixDisplayPtaaPattern() called");
    return 0;
}

/* Demangled: l_asetGetNext */
extern "C" __attribute__((visibility("default"))) int l_asetGetNext(void) {
    ALOGD("l_asetGetNext() called");
    return 0;
}

/* Demangled: pixDilateBrickDwa */
extern "C" __attribute__((visibility("default"))) int pixDilateBrickDwa(void) {
    ALOGD("pixDilateBrickDwa() called");
    return 0;
}

/* Demangled: pixClipToForeground */
extern "C" __attribute__((visibility("default"))) int pixClipToForeground(void) {
    ALOGD("pixClipToForeground() called");
    return 0;
}

/* Demangled: pixaSplitIntoFiles */
extern "C" __attribute__((visibility("default"))) int pixaSplitIntoFiles(void) {
    ALOGD("pixaSplitIntoFiles() called");
    return 0;
}

/* Demangled: pixColorizeGray */
extern "C" __attribute__((visibility("default"))) int pixColorizeGray(void) {
    ALOGD("pixColorizeGray() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Pix_nativeCreatePix */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Pix_nativeCreatePix(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Pix_nativeCreatePix() called");
    return 0;
}

/* Demangled: pixAddAlphaToBlend */
extern "C" __attribute__((visibility("default"))) int pixAddAlphaToBlend(void) {
    ALOGD("pixAddAlphaToBlend() called");
    return 0;
}

/* Demangled: fpixGetDimensions */
extern "C" __attribute__((visibility("default"))) int fpixGetDimensions(void) {
    ALOGD("fpixGetDimensions() called");
    return 0;
}

/* Demangled: pixConvertToFPix */
extern "C" __attribute__((visibility("default"))) int pixConvertToFPix(void) {
    ALOGD("pixConvertToFPix() called");
    return 0;
}

/* Demangled: recogaWrite */
extern "C" __attribute__((visibility("default"))) int recogaWrite(void) {
    ALOGD("recogaWrite() called");
    return 0;
}

/* Demangled: strcodeCreate */
extern "C" __attribute__((visibility("default"))) int strcodeCreate(void) {
    ALOGD("strcodeCreate() called");
    return 0;
}

/* Demangled: boxIntersects */
extern "C" __attribute__((visibility("default"))) int boxIntersects(void) {
    ALOGD("boxIntersects() called");
    return 0;
}

/* Demangled: pixTransferAllData */
extern "C" __attribute__((visibility("default"))) int pixTransferAllData(void) {
    ALOGD("pixTransferAllData() called");
    return 0;
}

/* Demangled: pixCopyColormap */
extern "C" __attribute__((visibility("default"))) int pixCopyColormap(void) {
    ALOGD("pixCopyColormap() called");
    return 0;
}

/* Demangled: pixCopyDimensions */
extern "C" __attribute__((visibility("default"))) int pixCopyDimensions(void) {
    ALOGD("pixCopyDimensions() called");
    return 0;
}

/* Demangled: pixacompReadStream */
extern "C" __attribute__((visibility("default"))) int pixacompReadStream(void) {
    ALOGD("pixacompReadStream() called");
    return 0;
}

/* Demangled: pixSetInputFormat */
extern "C" __attribute__((visibility("default"))) int pixSetInputFormat(void) {
    ALOGD("pixSetInputFormat() called");
    return 0;
}

/* Demangled: boxaRead */
extern "C" __attribute__((visibility("default"))) int boxaRead(void) {
    ALOGD("boxaRead() called");
    return 0;
}

/* Demangled: getFormatExtension */
extern "C" __attribute__((visibility("default"))) int getFormatExtension(void) {
    ALOGD("getFormatExtension() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Box_nativeCreate */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Box_nativeCreate(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Box_nativeCreate() called");
    return 0;
}

/* Demangled: boxaaGetExtent */
extern "C" __attribute__((visibility("default"))) int boxaaGetExtent(void) {
    ALOGD("boxaaGetExtent() called");
    return 0;
}

/* Demangled: pixBlendGrayInverse */
extern "C" __attribute__((visibility("default"))) int pixBlendGrayInverse(void) {
    ALOGD("pixBlendGrayInverse() called");
    return 0;
}

/* Demangled: pixDisplayDiffBinary */
extern "C" __attribute__((visibility("default"))) int pixDisplayDiffBinary(void) {
    ALOGD("pixDisplayDiffBinary() called");
    return 0;
}

/* Demangled: fpixWriteMem */
extern "C" __attribute__((visibility("default"))) int fpixWriteMem(void) {
    ALOGD("fpixWriteMem() called");
    return 0;
}

/* Demangled: pixWriteMemGif */
extern "C" __attribute__((visibility("default"))) int pixWriteMemGif(void) {
    ALOGD("pixWriteMemGif() called");
    return 0;
}

/* Demangled: pixaaTruncate */
extern "C" __attribute__((visibility("default"))) int pixaaTruncate(void) {
    ALOGD("pixaaTruncate() called");
    return 0;
}

/* Demangled: selaAddCrossJunctions */
extern "C" __attribute__((visibility("default"))) int selaAddCrossJunctions(void) {
    ALOGD("selaAddCrossJunctions() called");
    return 0;
}

/* Demangled: boxaScale */
extern "C" __attribute__((visibility("default"))) int boxaScale(void) {
    ALOGD("boxaScale() called");
    return 0;
}

/* Demangled: pixSetBlackOrWhiteBoxa */
extern "C" __attribute__((visibility("default"))) int pixSetBlackOrWhiteBoxa(void) {
    ALOGD("pixSetBlackOrWhiteBoxa() called");
    return 0;
}

/* Demangled: pixSetInRectArbitrary */
extern "C" __attribute__((visibility("default"))) int pixSetInRectArbitrary(void) {
    ALOGD("pixSetInRectArbitrary() called");
    return 0;
}

/* Demangled: boxaAffineTransform */
extern "C" __attribute__((visibility("default"))) int boxaAffineTransform(void) {
    ALOGD("boxaAffineTransform() called");
    return 0;
}

/* Demangled: l_setAlphaMaskBorder */
extern "C" __attribute__((visibility("default"))) int l_setAlphaMaskBorder(void) {
    ALOGD("l_setAlphaMaskBorder() called");
    return 0;
}

/* Demangled: pixaaSizeRange */
extern "C" __attribute__((visibility("default"))) int pixaaSizeRange(void) {
    ALOGD("pixaaSizeRange() called");
    return 0;
}

/* Demangled: ptaWriteMem */
extern "C" __attribute__((visibility("default"))) int ptaWriteMem(void) {
    ALOGD("ptaWriteMem() called");
    return 0;
}

/* Demangled: rasteropHipLow */
extern "C" __attribute__((visibility("default"))) int rasteropHipLow(void) {
    ALOGD("rasteropHipLow() called");
    return 0;
}

/* Demangled: pixFillBgFromBorder */
extern "C" __attribute__((visibility("default"))) int pixFillBgFromBorder(void) {
    ALOGD("pixFillBgFromBorder() called");
    return 0;
}

/* Demangled: bbufferCreate */
extern "C" __attribute__((visibility("default"))) int bbufferCreate(void) {
    ALOGD("bbufferCreate() called");
    return 0;
}

/* Demangled: kernelCreateFromString */
extern "C" __attribute__((visibility("default"))) int kernelCreateFromString(void) {
    ALOGD("kernelCreateFromString() called");
    return 0;
}

/* Demangled: listInsertBefore */
extern "C" __attribute__((visibility("default"))) int listInsertBefore(void) {
    ALOGD("listInsertBefore() called");
    return 0;
}

/* Demangled: pixSetZlibCompression */
extern "C" __attribute__((visibility("default"))) int pixSetZlibCompression(void) {
    ALOGD("pixSetZlibCompression() called");
    return 0;
}

/* Demangled: pixRead */
extern "C" __attribute__((visibility("default"))) int pixRead(void) {
    ALOGD("pixRead() called");
    return 0;
}

/* Demangled: bmfCreate */
extern "C" __attribute__((visibility("default"))) int bmfCreate(void) {
    ALOGD("bmfCreate() called");
    return 0;
}

/* Demangled: pixSplitIntoBoxa */
extern "C" __attribute__((visibility("default"))) int pixSplitIntoBoxa(void) {
    ALOGD("pixSplitIntoBoxa() called");
    return 0;
}

/* Demangled: dpixRead */
extern "C" __attribute__((visibility("default"))) int dpixRead(void) {
    ALOGD("dpixRead() called");
    return 0;
}

/* Demangled: pixFreeData */
extern "C" __attribute__((visibility("default"))) int pixFreeData(void) {
    ALOGD("pixFreeData() called");
    return 0;
}

/* Demangled: boxaaTranspose */
extern "C" __attribute__((visibility("default"))) int boxaaTranspose(void) {
    ALOGD("boxaaTranspose() called");
    return 0;
}

/* Demangled: pixaDisplayTiledInColumns */
extern "C" __attribute__((visibility("default"))) int pixaDisplayTiledInColumns(void) {
    ALOGD("pixaDisplayTiledInColumns() called");
    return 0;
}

/* Demangled: convertG4ToPS */
extern "C" __attribute__((visibility("default"))) int convertG4ToPS(void) {
    ALOGD("convertG4ToPS() called");
    return 0;
}

/* Demangled: pixVarianceInRectangle */
extern "C" __attribute__((visibility("default"))) int pixVarianceInRectangle(void) {
    ALOGD("pixVarianceInRectangle() called");
    return 0;
}

/* Demangled: pixSeedfillGraySimple */
extern "C" __attribute__((visibility("default"))) int pixSeedfillGraySimple(void) {
    ALOGD("pixSeedfillGraySimple() called");
    return 0;
}

/* Demangled: lept_calloc */
extern "C" __attribute__((visibility("default"))) int lept_calloc(void) {
    ALOGD("lept_calloc() called");
    return 0;
}

/* Demangled: ptaaGetCount */
extern "C" __attribute__((visibility("default"))) int ptaaGetCount(void) {
    ALOGD("ptaaGetCount() called");
    return 0;
}

/* Demangled: lept_mv */
extern "C" __attribute__((visibility("default"))) int lept_mv(void) {
    ALOGD("lept_mv() called");
    return 0;
}

/* Demangled: boxaPruneSortedOnOverlap */
extern "C" __attribute__((visibility("default"))) int boxaPruneSortedOnOverlap(void) {
    ALOGD("boxaPruneSortedOnOverlap() called");
    return 0;
}

/* Demangled: pixSetData */
extern "C" __attribute__((visibility("default"))) int pixSetData(void) {
    ALOGD("pixSetData() called");
    return 0;
}

/* Demangled: bilinearXformSampledPt */
extern "C" __attribute__((visibility("default"))) int bilinearXformSampledPt(void) {
    ALOGD("bilinearXformSampledPt() called");
    return 0;
}

/* Demangled: fpixaGetFPixDimensions */
extern "C" __attribute__((visibility("default"))) int fpixaGetFPixDimensions(void) {
    ALOGD("fpixaGetFPixDimensions() called");
    return 0;
}

/* Demangled: fpixConvertToDPix */
extern "C" __attribute__((visibility("default"))) int fpixConvertToDPix(void) {
    ALOGD("fpixConvertToDPix() called");
    return 0;
}

/* Demangled: ptaaIndexLabelledPixels */
extern "C" __attribute__((visibility("default"))) int ptaaIndexLabelledPixels(void) {
    ALOGD("ptaaIndexLabelledPixels() called");
    return 0;
}

/* Demangled: l_pngSetReadStrip16To8 */
extern "C" __attribute__((visibility("default"))) int l_pngSetReadStrip16To8(void) {
    ALOGD("l_pngSetReadStrip16To8() called");
    return 0;
}

/* Demangled: recogGetIndex */
extern "C" __attribute__((visibility("default"))) int recogGetIndex(void) {
    ALOGD("recogGetIndex() called");
    return 0;
}

/* Demangled: scaleColor2xLILineLow */
extern "C" __attribute__((visibility("default"))) int scaleColor2xLILineLow(void) {
    ALOGD("scaleColor2xLILineLow() called");
    return 0;
}

/* Demangled: pixGenerateSelBoundary */
extern "C" __attribute__((visibility("default"))) int pixGenerateSelBoundary(void) {
    ALOGD("pixGenerateSelBoundary() called");
    return 0;
}

/* Demangled: pixaaDisplayTiledAndScaled */
extern "C" __attribute__((visibility("default"))) int pixaaDisplayTiledAndScaled(void) {
    ALOGD("pixaaDisplayTiledAndScaled() called");
    return 0;
}

/* Demangled: pixWriteStreamPam */
extern "C" __attribute__((visibility("default"))) int pixWriteStreamPam(void) {
    ALOGD("pixWriteStreamPam() called");
    return 0;
}

/* Demangled: recogIdentifyPixa */
extern "C" __attribute__((visibility("default"))) int recogIdentifyPixa(void) {
    ALOGD("recogIdentifyPixa() called");
    return 0;
}

/* Demangled: ccbaDestroy */
extern "C" __attribute__((visibility("default"))) int ccbaDestroy(void) {
    ALOGD("ccbaDestroy() called");
    return 0;
}

/* Demangled: splitPathAtDirectory */
extern "C" __attribute__((visibility("default"))) int splitPathAtDirectory(void) {
    ALOGD("splitPathAtDirectory() called");
    return 0;
}

/* Demangled: pixConvertToPdfSegmented */
extern "C" __attribute__((visibility("default"))) int pixConvertToPdfSegmented(void) {
    ALOGD("pixConvertToPdfSegmented() called");
    return 0;
}

/* Demangled: pixReadStreamWebP */
extern "C" __attribute__((visibility("default"))) int pixReadStreamWebP(void) {
    ALOGD("pixReadStreamWebP() called");
    return 0;
}

/* Demangled: selWrite */
extern "C" __attribute__((visibility("default"))) int selWrite(void) {
    ALOGD("selWrite() called");
    return 0;
}

/* Demangled: numaSortByIndex */
extern "C" __attribute__((visibility("default"))) int numaSortByIndex(void) {
    ALOGD("numaSortByIndex() called");
    return 0;
}

/* Demangled: extractG4DataFromFile */
extern "C" __attribute__((visibility("default"))) int extractG4DataFromFile(void) {
    ALOGD("extractG4DataFromFile() called");
    return 0;
}

/* Demangled: pixaWriteStream */
extern "C" __attribute__((visibility("default"))) int pixaWriteStream(void) {
    ALOGD("pixaWriteStream() called");
    return 0;
}

/* Demangled: pixReadMemPng */
extern "C" __attribute__((visibility("default"))) int pixReadMemPng(void) {
    ALOGD("pixReadMemPng() called");
    return 0;
}

/* Demangled: bmfGetPix */
extern "C" __attribute__((visibility("default"))) int bmfGetPix(void) {
    ALOGD("bmfGetPix() called");
    return 0;
}

/* Demangled: boxaaReadMem */
extern "C" __attribute__((visibility("default"))) int boxaaReadMem(void) {
    ALOGD("boxaaReadMem() called");
    return 0;
}

/* Demangled: pixErodeCompBrick */
extern "C" __attribute__((visibility("default"))) int pixErodeCompBrick(void) {
    ALOGD("pixErodeCompBrick() called");
    return 0;
}

/* Demangled: recogSetTemplateType */
extern "C" __attribute__((visibility("default"))) int recogSetTemplateType(void) {
    ALOGD("recogSetTemplateType() called");
    return 0;
}

/* Demangled: scaleColorLILow */
extern "C" __attribute__((visibility("default"))) int scaleColorLILow(void) {
    ALOGD("scaleColorLILow() called");
    return 0;
}

/* Demangled: pixGetRefcount */
extern "C" __attribute__((visibility("default"))) int pixGetRefcount(void) {
    ALOGD("pixGetRefcount() called");
    return 0;
}

/* Demangled: kernelSetElement */
extern "C" __attribute__((visibility("default"))) int kernelSetElement(void) {
    ALOGD("kernelSetElement() called");
    return 0;
}

/* Demangled: boxaSelectWithIndicator */
extern "C" __attribute__((visibility("default"))) int boxaSelectWithIndicator(void) {
    ALOGD("boxaSelectWithIndicator() called");
    return 0;
}

/* Demangled: pixNumColors */
extern "C" __attribute__((visibility("default"))) int pixNumColors(void) {
    ALOGD("pixNumColors() called");
    return 0;
}

/* Demangled: pixcmapConvertToHex */
extern "C" __attribute__((visibility("default"))) int pixcmapConvertToHex(void) {
    ALOGD("pixcmapConvertToHex() called");
    return 0;
}

/* Demangled: pixcmapGetDistanceToColor */
extern "C" __attribute__((visibility("default"))) int pixcmapGetDistanceToColor(void) {
    ALOGD("pixcmapGetDistanceToColor() called");
    return 0;
}

/* Demangled: pixRenderHashBoxBlend */
extern "C" __attribute__((visibility("default"))) int pixRenderHashBoxBlend(void) {
    ALOGD("pixRenderHashBoxBlend() called");
    return 0;
}

/* Demangled: boxaDestroy */
extern "C" __attribute__((visibility("default"))) int boxaDestroy(void) {
    ALOGD("boxaDestroy() called");
    return 0;
}

/* Demangled: dewarpaSetCurvatures */
extern "C" __attribute__((visibility("default"))) int dewarpaSetCurvatures(void) {
    ALOGD("dewarpaSetCurvatures() called");
    return 0;
}

/* Demangled: ptaGetQuadraticLSF */
extern "C" __attribute__((visibility("default"))) int ptaGetQuadraticLSF(void) {
    ALOGD("ptaGetQuadraticLSF() called");
    return 0;
}

/* Demangled: dewarpaModelStats */
extern "C" __attribute__((visibility("default"))) int dewarpaModelStats(void) {
    ALOGD("dewarpaModelStats() called");
    return 0;
}

/* Demangled: l_generateFlateData */
extern "C" __attribute__((visibility("default"))) int l_generateFlateData(void) {
    ALOGD("l_generateFlateData() called");
    return 0;
}

/* Demangled: rchaDestroy */
extern "C" __attribute__((visibility("default"))) int rchaDestroy(void) {
    ALOGD("rchaDestroy() called");
    return 0;
}

/* Demangled: decodeBase64 */
extern "C" __attribute__((visibility("default"))) int decodeBase64(void) {
    ALOGD("decodeBase64() called");
    return 0;
}

/* Demangled: pixBlendBoxaRandom */
extern "C" __attribute__((visibility("default"))) int pixBlendBoxaRandom(void) {
    ALOGD("pixBlendBoxaRandom() called");
    return 0;
}

/* Demangled: pixcmapWriteStream */
extern "C" __attribute__((visibility("default"))) int pixcmapWriteStream(void) {
    ALOGD("pixcmapWriteStream() called");
    return 0;
}

/* Demangled: gplotWrite */
extern "C" __attribute__((visibility("default"))) int gplotWrite(void) {
    ALOGD("gplotWrite() called");
    return 0;
}

/* Demangled: recogaGetRecog */
extern "C" __attribute__((visibility("default"))) int recogaGetRecog(void) {
    ALOGD("recogaGetRecog() called");
    return 0;
}

/* Demangled: pixModifyStrokeWidth */
extern "C" __attribute__((visibility("default"))) int pixModifyStrokeWidth(void) {
    ALOGD("pixModifyStrokeWidth() called");
    return 0;
}

/* Demangled: boxaGetCoverage */
extern "C" __attribute__((visibility("default"))) int boxaGetCoverage(void) {
    ALOGD("boxaGetCoverage() called");
    return 0;
}

/* Demangled: pixMeanInRectangle */
extern "C" __attribute__((visibility("default"))) int pixMeanInRectangle(void) {
    ALOGD("pixMeanInRectangle() called");
    return 0;
}

/* Demangled: pixReadMemPnm */
extern "C" __attribute__((visibility("default"))) int pixReadMemPnm(void) {
    ALOGD("pixReadMemPnm() called");
    return 0;
}

/* Demangled: regTestCompareFiles */
extern "C" __attribute__((visibility("default"))) int regTestCompareFiles(void) {
    ALOGD("regTestCompareFiles() called");
    return 0;
}

/* Demangled: stringNew */
extern "C" __attribute__((visibility("default"))) int stringNew(void) {
    ALOGD("stringNew() called");
    return 0;
}

/* Demangled: pixaSelectByPerimToAreaRatio */
extern "C" __attribute__((visibility("default"))) int pixaSelectByPerimToAreaRatio(void) {
    ALOGD("pixaSelectByPerimToAreaRatio() called");
    return 0;
}

/* Demangled: pixSnapColor */
extern "C" __attribute__((visibility("default"))) int pixSnapColor(void) {
    ALOGD("pixSnapColor() called");
    return 0;
}

/* Demangled: recogCreateFromPixa */
extern "C" __attribute__((visibility("default"))) int recogCreateFromPixa(void) {
    ALOGD("recogCreateFromPixa() called");
    return 0;
}

/* Demangled: selaAddDwaCombs */
extern "C" __attribute__((visibility("default"))) int selaAddDwaCombs(void) {
    ALOGD("selaAddDwaCombs() called");
    return 0;
}

/* Demangled: pixDisplayLayersRGBA */
extern "C" __attribute__((visibility("default"))) int pixDisplayLayersRGBA(void) {
    ALOGD("pixDisplayLayersRGBA() called");
    return 0;
}

/* Demangled: gplotDestroy */
extern "C" __attribute__((visibility("default"))) int gplotDestroy(void) {
    ALOGD("gplotDestroy() called");
    return 0;
}

/* Demangled: pixMultConstantGray */
extern "C" __attribute__((visibility("default"))) int pixMultConstantGray(void) {
    ALOGD("pixMultConstantGray() called");
    return 0;
}

/* Demangled: boxAdjustSides */
extern "C" __attribute__((visibility("default"))) int boxAdjustSides(void) {
    ALOGD("boxAdjustSides() called");
    return 0;
}

/* Demangled: pixFindMaxRuns */
extern "C" __attribute__((visibility("default"))) int pixFindMaxRuns(void) {
    ALOGD("pixFindMaxRuns() called");
    return 0;
}

/* Demangled: kernelSetOrigin */
extern "C" __attribute__((visibility("default"))) int kernelSetOrigin(void) {
    ALOGD("kernelSetOrigin() called");
    return 0;
}

/* Demangled: pixcmapContrastTRC */
extern "C" __attribute__((visibility("default"))) int pixcmapContrastTRC(void) {
    ALOGD("pixcmapContrastTRC() called");
    return 0;
}

/* Demangled: l_dnaGetDArray */
extern "C" __attribute__((visibility("default"))) int l_dnaGetDArray(void) {
    ALOGD("l_dnaGetDArray() called");
    return 0;
}

/* Demangled: pixFindAreaFraction */
extern "C" __attribute__((visibility("default"))) int pixFindAreaFraction(void) {
    ALOGD("pixFindAreaFraction() called");
    return 0;
}

/* Demangled: sudokuDestroy */
extern "C" __attribute__((visibility("default"))) int sudokuDestroy(void) {
    ALOGD("sudokuDestroy() called");
    return 0;
}

/* Demangled: pixSetTextblock */
extern "C" __attribute__((visibility("default"))) int pixSetTextblock(void) {
    ALOGD("pixSetTextblock() called");
    return 0;
}

/* Demangled: boxaReconcilePairWidth */
extern "C" __attribute__((visibility("default"))) int boxaReconcilePairWidth(void) {
    ALOGD("boxaReconcilePairWidth() called");
    return 0;
}

/* Demangled: l_dnaCreate */
extern "C" __attribute__((visibility("default"))) int l_dnaCreate(void) {
    ALOGD("l_dnaCreate() called");
    return 0;
}

/* Demangled: pixDilateCompBrickExtendDwa */
extern "C" __attribute__((visibility("default"))) int pixDilateCompBrickExtendDwa(void) {
    ALOGD("pixDilateCompBrickExtendDwa() called");
    return 0;
}

/* Demangled: pixWindowedVariance */
extern "C" __attribute__((visibility("default"))) int pixWindowedVariance(void) {
    ALOGD("pixWindowedVariance() called");
    return 0;
}

/* Demangled: pixaaCreate */
extern "C" __attribute__((visibility("default"))) int pixaaCreate(void) {
    ALOGD("pixaaCreate() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Pixa_nativeWriteToFileRandomCmap */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Pixa_nativeWriteToFileRandomCmap(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Pixa_nativeWriteToFileRandomCmap() called");
    return 0;
}

/* Demangled: ptraaFlattenToPtra */
extern "C" __attribute__((visibility("default"))) int ptraaFlattenToPtra(void) {
    ALOGD("ptraaFlattenToPtra() called");
    return 0;
}

/* Demangled: boxaRemoveBox */
extern "C" __attribute__((visibility("default"))) int boxaRemoveBox(void) {
    ALOGD("boxaRemoveBox() called");
    return 0;
}

/* Demangled: boxaClear */
extern "C" __attribute__((visibility("default"))) int boxaClear(void) {
    ALOGD("boxaClear() called");
    return 0;
}

/* Demangled: pixConvert1To2Cmap */
extern "C" __attribute__((visibility("default"))) int pixConvert1To2Cmap(void) {
    ALOGD("pixConvert1To2Cmap() called");
    return 0;
}

/* Demangled: listGetCount */
extern "C" __attribute__((visibility("default"))) int listGetCount(void) {
    ALOGD("listGetCount() called");
    return 0;
}

/* Demangled: pixAbsDiffByColumn */
extern "C" __attribute__((visibility("default"))) int pixAbsDiffByColumn(void) {
    ALOGD("pixAbsDiffByColumn() called");
    return 0;
}

/* Demangled: pixCombineMaskedGeneral */
extern "C" __attribute__((visibility("default"))) int pixCombineMaskedGeneral(void) {
    ALOGD("pixCombineMaskedGeneral() called");
    return 0;
}

/* Demangled: pixSetUnderTransparency */
extern "C" __attribute__((visibility("default"))) int pixSetUnderTransparency(void) {
    ALOGD("pixSetUnderTransparency() called");
    return 0;
}

/* Demangled: recogExtractPixa */
extern "C" __attribute__((visibility("default"))) int recogExtractPixa(void) {
    ALOGD("recogExtractPixa() called");
    return 0;
}

/* Demangled: saConvertUnscaledFilesToPdfData */
extern "C" __attribute__((visibility("default"))) int saConvertUnscaledFilesToPdfData(void) {
    ALOGD("saConvertUnscaledFilesToPdfData() called");
    return 0;
}

/* Demangled: pixcompDestroy */
extern "C" __attribute__((visibility("default"))) int pixcompDestroy(void) {
    ALOGD("pixcompDestroy() called");
    return 0;
}

/* Demangled: pixDisplayWrite */
extern "C" __attribute__((visibility("default"))) int pixDisplayWrite(void) {
    ALOGD("pixDisplayWrite() called");
    return 0;
}

/* Demangled: fopenWriteStream */
extern "C" __attribute__((visibility("default"))) int fopenWriteStream(void) {
    ALOGD("fopenWriteStream() called");
    return 0;
}

/* Demangled: numaaReplaceNuma */
extern "C" __attribute__((visibility("default"))) int numaaReplaceNuma(void) {
    ALOGD("numaaReplaceNuma() called");
    return 0;
}

/* Demangled: ptaaGetPta */
extern "C" __attribute__((visibility("default"))) int ptaaGetPta(void) {
    ALOGD("ptaaGetPta() called");
    return 0;
}

/* Demangled: gplotGenCommandFile */
extern "C" __attribute__((visibility("default"))) int gplotGenCommandFile(void) {
    ALOGD("gplotGenCommandFile() called");
    return 0;
}

/* Demangled: pixaCreateFromPix */
extern "C" __attribute__((visibility("default"))) int pixaCreateFromPix(void) {
    ALOGD("pixaCreateFromPix() called");
    return 0;
}

/* Demangled: pixThresholdForFgBg */
extern "C" __attribute__((visibility("default"))) int pixThresholdForFgBg(void) {
    ALOGD("pixThresholdForFgBg() called");
    return 0;
}

/* Demangled: fileCopy */
extern "C" __attribute__((visibility("default"))) int fileCopy(void) {
    ALOGD("fileCopy() called");
    return 0;
}

/* Demangled: sarrayRemoveDupsByHash */
extern "C" __attribute__((visibility("default"))) int sarrayRemoveDupsByHash(void) {
    ALOGD("sarrayRemoveDupsByHash() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Pixa_nativeJoin */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Pixa_nativeJoin(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Pixa_nativeJoin() called");
    return 0;
}

/* Demangled: pixReduceRankBinary2 */
extern "C" __attribute__((visibility("default"))) int pixReduceRankBinary2(void) {
    ALOGD("pixReduceRankBinary2() called");
    return 0;
}

/* Demangled: pixBlendBackgroundToColor */
extern "C" __attribute__((visibility("default"))) int pixBlendBackgroundToColor(void) {
    ALOGD("pixBlendBackgroundToColor() called");
    return 0;
}

/* Demangled: ccbaReadStream */
extern "C" __attribute__((visibility("default"))) int ccbaReadStream(void) {
    ALOGD("ccbaReadStream() called");
    return 0;
}

/* Demangled: pixMaskOverColorPixels */
extern "C" __attribute__((visibility("default"))) int pixMaskOverColorPixels(void) {
    ALOGD("pixMaskOverColorPixels() called");
    return 0;
}

/* Demangled: l_dnaCreateFromDArray */
extern "C" __attribute__((visibility("default"))) int l_dnaCreateFromDArray(void) {
    ALOGD("l_dnaCreateFromDArray() called");
    return 0;
}

/* Demangled: l_dnaaTruncate */
extern "C" __attribute__((visibility("default"))) int l_dnaaTruncate(void) {
    ALOGD("l_dnaaTruncate() called");
    return 0;
}

/* Demangled: pixRemoveAlpha */
extern "C" __attribute__((visibility("default"))) int pixRemoveAlpha(void) {
    ALOGD("pixRemoveAlpha() called");
    return 0;
}

/* Demangled: boxaaCopy */
extern "C" __attribute__((visibility("default"))) int boxaaCopy(void) {
    ALOGD("boxaaCopy() called");
    return 0;
}

/* Demangled: numaGetBinSortIndex */
extern "C" __attribute__((visibility("default"))) int numaGetBinSortIndex(void) {
    ALOGD("numaGetBinSortIndex() called");
    return 0;
}

/* Demangled: pixExtractData */
extern "C" __attribute__((visibility("default"))) int pixExtractData(void) {
    ALOGD("pixExtractData() called");
    return 0;
}

/* Demangled: stopTimerNested */
extern "C" __attribute__((visibility("default"))) int stopTimerNested(void) {
    ALOGD("stopTimerNested() called");
    return 0;
}

/* Demangled: pixaDisplayBoxaa */
extern "C" __attribute__((visibility("default"))) int pixaDisplayBoxaa(void) {
    ALOGD("pixaDisplayBoxaa() called");
    return 0;
}

/* Demangled: fpixReadStream */
extern "C" __attribute__((visibility("default"))) int fpixReadStream(void) {
    ALOGD("fpixReadStream() called");
    return 0;
}

/* Demangled: l_dnaRemoveDupsByHash */
extern "C" __attribute__((visibility("default"))) int l_dnaRemoveDupsByHash(void) {
    ALOGD("l_dnaRemoveDupsByHash() called");
    return 0;
}

/* Demangled: pixModifySaturation */
extern "C" __attribute__((visibility("default"))) int pixModifySaturation(void) {
    ALOGD("pixModifySaturation() called");
    return 0;
}

/* Demangled: pixaaGetPix */
extern "C" __attribute__((visibility("default"))) int pixaaGetPix(void) {
    ALOGD("pixaaGetPix() called");
    return 0;
}

/* Demangled: generateJpegPS */
extern "C" __attribute__((visibility("default"))) int generateJpegPS(void) {
    ALOGD("generateJpegPS() called");
    return 0;
}

/* Demangled: dewarpaCreateFromPixacomp */
extern "C" __attribute__((visibility("default"))) int dewarpaCreateFromPixacomp(void) {
    ALOGD("dewarpaCreateFromPixacomp() called");
    return 0;
}

/* Demangled: ptaaSortByIndex */
extern "C" __attribute__((visibility("default"))) int ptaaSortByIndex(void) {
    ALOGD("ptaaSortByIndex() called");
    return 0;
}

/* Demangled: numaSplitDistribution */
extern "C" __attribute__((visibility("default"))) int numaSplitDistribution(void) {
    ALOGD("numaSplitDistribution() called");
    return 0;
}

/* Demangled: pixGetRegionsBinary */
extern "C" __attribute__((visibility("default"))) int pixGetRegionsBinary(void) {
    ALOGD("pixGetRegionsBinary() called");
    return 0;
}

/* Demangled: pixConvertToPdfData */
extern "C" __attribute__((visibility("default"))) int pixConvertToPdfData(void) {
    ALOGD("pixConvertToPdfData() called");
    return 0;
}

/* Demangled: pixSetPadBitsBand */
extern "C" __attribute__((visibility("default"))) int pixSetPadBitsBand(void) {
    ALOGD("pixSetPadBitsBand() called");
    return 0;
}

/* Exported Object: gplotfilestyles */
extern "C" __attribute__((visibility("default"))) void* gplotfilestyles = NULL;

/* Demangled: numaGetRankBinValues */
extern "C" __attribute__((visibility("default"))) int numaGetRankBinValues(void) {
    ALOGD("numaGetRankBinValues() called");
    return 0;
}

/* Demangled: pixaaInitFull */
extern "C" __attribute__((visibility("default"))) int pixaaInitFull(void) {
    ALOGD("pixaaInitFull() called");
    return 0;
}

/* Demangled: l_compareKeys */
extern "C" __attribute__((visibility("default"))) int l_compareKeys(void) {
    ALOGD("l_compareKeys() called");
    return 0;
}

/* Demangled: kernelDestroy */
extern "C" __attribute__((visibility("default"))) int kernelDestroy(void) {
    ALOGD("kernelDestroy() called");
    return 0;
}

/* Demangled: dewarpaWriteStream */
extern "C" __attribute__((visibility("default"))) int dewarpaWriteStream(void) {
    ALOGD("dewarpaWriteStream() called");
    return 0;
}

/* Demangled: ptraCreate */
extern "C" __attribute__((visibility("default"))) int ptraCreate(void) {
    ALOGD("ptraCreate() called");
    return 0;
}

/* Demangled: pixGetBlackOrWhiteVal */
extern "C" __attribute__((visibility("default"))) int pixGetBlackOrWhiteVal(void) {
    ALOGD("pixGetBlackOrWhiteVal() called");
    return 0;
}

/* Demangled: ptaaReplacePta */
extern "C" __attribute__((visibility("default"))) int ptaaReplacePta(void) {
    ALOGD("ptaaReplacePta() called");
    return 0;
}

/* Demangled: pixDisplayWriteFormat */
extern "C" __attribute__((visibility("default"))) int pixDisplayWriteFormat(void) {
    ALOGD("pixDisplayWriteFormat() called");
    return 0;
}

/* Demangled: pixReadMem */
extern "C" __attribute__((visibility("default"))) int pixReadMem(void) {
    ALOGD("pixReadMem() called");
    return 0;
}

/* Demangled: pixReadBarcodeWidths */
extern "C" __attribute__((visibility("default"))) int pixReadBarcodeWidths(void) {
    ALOGD("pixReadBarcodeWidths() called");
    return 0;
}

/* Demangled: ptaTransform */
extern "C" __attribute__((visibility("default"))) int ptaTransform(void) {
    ALOGD("ptaTransform() called");
    return 0;
}

/* Demangled: pixBilateral */
extern "C" __attribute__((visibility("default"))) int pixBilateral(void) {
    ALOGD("pixBilateral() called");
    return 0;
}

/* Demangled: pixBlendColorByChannel */
extern "C" __attribute__((visibility("default"))) int pixBlendColorByChannel(void) {
    ALOGD("pixBlendColorByChannel() called");
    return 0;
}

/* Demangled: pixGenerateFromPta */
extern "C" __attribute__((visibility("default"))) int pixGenerateFromPta(void) {
    ALOGD("pixGenerateFromPta() called");
    return 0;
}

/* Demangled: pixSelectiveConnCompFill */
extern "C" __attribute__((visibility("default"))) int pixSelectiveConnCompFill(void) {
    ALOGD("pixSelectiveConnCompFill() called");
    return 0;
}

/* Demangled: pixcmapConvertRGBToHSV */
extern "C" __attribute__((visibility("default"))) int pixcmapConvertRGBToHSV(void) {
    ALOGD("pixcmapConvertRGBToHSV() called");
    return 0;
}

/* Demangled: readHeaderMemJpeg */
extern "C" __attribute__((visibility("default"))) int readHeaderMemJpeg(void) {
    ALOGD("readHeaderMemJpeg() called");
    return 0;
}

/* Demangled: numaAddNumber */
extern "C" __attribute__((visibility("default"))) int numaAddNumber(void) {
    ALOGD("numaAddNumber() called");
    return 0;
}

/* Demangled: pixTwoSidedEdgeFilter */
extern "C" __attribute__((visibility("default"))) int pixTwoSidedEdgeFilter(void) {
    ALOGD("pixTwoSidedEdgeFilter() called");
    return 0;
}

/* Demangled: affineXformSampledPt */
extern "C" __attribute__((visibility("default"))) int affineXformSampledPt(void) {
    ALOGD("affineXformSampledPt() called");
    return 0;
}

/* Demangled: pixCorrelationScore */
extern "C" __attribute__((visibility("default"))) int pixCorrelationScore(void) {
    ALOGD("pixCorrelationScore() called");
    return 0;
}

/* Demangled: fpixCreateTemplate */
extern "C" __attribute__((visibility("default"))) int fpixCreateTemplate(void) {
    ALOGD("fpixCreateTemplate() called");
    return 0;
}

/* Demangled: create2dFloatArray */
extern "C" __attribute__((visibility("default"))) int create2dFloatArray(void) {
    ALOGD("create2dFloatArray() called");
    return 0;
}

/* Demangled: generatePtaPolyline */
extern "C" __attribute__((visibility("default"))) int generatePtaPolyline(void) {
    ALOGD("generatePtaPolyline() called");
    return 0;
}

/* Demangled: pixacompWrite */
extern "C" __attribute__((visibility("default"))) int pixacompWrite(void) {
    ALOGD("pixacompWrite() called");
    return 0;
}

/* Demangled: pixaRemovePix */
extern "C" __attribute__((visibility("default"))) int pixaRemovePix(void) {
    ALOGD("pixaRemovePix() called");
    return 0;
}

/* Demangled: pixRenderRandomCmapPtaa */
extern "C" __attribute__((visibility("default"))) int pixRenderRandomCmapPtaa(void) {
    ALOGD("pixRenderRandomCmapPtaa() called");
    return 0;
}

/* Demangled: pixCorrelationScoreThresholded */
extern "C" __attribute__((visibility("default"))) int pixCorrelationScoreThresholded(void) {
    ALOGD("pixCorrelationScoreThresholded() called");
    return 0;
}

/* Demangled: fpixSetData */
extern "C" __attribute__((visibility("default"))) int fpixSetData(void) {
    ALOGD("fpixSetData() called");
    return 0;
}

/* Demangled: fpixAutoRenderContours */
extern "C" __attribute__((visibility("default"))) int fpixAutoRenderContours(void) {
    ALOGD("fpixAutoRenderContours() called");
    return 0;
}

/* Demangled: convertImageDataToPdfData */
extern "C" __attribute__((visibility("default"))) int convertImageDataToPdfData(void) {
    ALOGD("convertImageDataToPdfData() called");
    return 0;
}

/* Demangled: pixWriteStreamTiff */
extern "C" __attribute__((visibility("default"))) int pixWriteStreamTiff(void) {
    ALOGD("pixWriteStreamTiff() called");
    return 0;
}

/* Demangled: pixFlipLR */
extern "C" __attribute__((visibility("default"))) int pixFlipLR(void) {
    ALOGD("pixFlipLR() called");
    return 0;
}

/* Demangled: sela8ccThin */
extern "C" __attribute__((visibility("default"))) int sela8ccThin(void) {
    ALOGD("sela8ccThin() called");
    return 0;
}

/* Demangled: pixColorSegment */
extern "C" __attribute__((visibility("default"))) int pixColorSegment(void) {
    ALOGD("pixColorSegment() called");
    return 0;
}

/* Demangled: dewarpReadStream */
extern "C" __attribute__((visibility("default"))) int dewarpReadStream(void) {
    ALOGD("dewarpReadStream() called");
    return 0;
}

/* Demangled: pixScaleAndTransferAlpha */
extern "C" __attribute__((visibility("default"))) int pixScaleAndTransferAlpha(void) {
    ALOGD("pixScaleAndTransferAlpha() called");
    return 0;
}

/* Demangled: pixaConvertTo1 */
extern "C" __attribute__((visibility("default"))) int pixaConvertTo1(void) {
    ALOGD("pixaConvertTo1() called");
    return 0;
}

/* Demangled: pixacompCreateFromPixa */
extern "C" __attribute__((visibility("default"))) int pixacompCreateFromPixa(void) {
    ALOGD("pixacompCreateFromPixa() called");
    return 0;
}

/* Demangled: pixConvert1To32 */
extern "C" __attribute__((visibility("default"))) int pixConvert1To32(void) {
    ALOGD("pixConvert1To32() called");
    return 0;
}

/* Demangled: fpixaAddFPix */
extern "C" __attribute__((visibility("default"))) int fpixaAddFPix(void) {
    ALOGD("fpixaAddFPix() called");
    return 0;
}

/* Demangled: dpixReadMem */
extern "C" __attribute__((visibility("default"))) int dpixReadMem(void) {
    ALOGD("dpixReadMem() called");
    return 0;
}

/* Demangled: convertSortedToNumberedPathnames */
extern "C" __attribute__((visibility("default"))) int convertSortedToNumberedPathnames(void) {
    ALOGD("convertSortedToNumberedPathnames() called");
    return 0;
}

/* Demangled: pixFindSkewSweep */
extern "C" __attribute__((visibility("default"))) int pixFindSkewSweep(void) {
    ALOGD("pixFindSkewSweep() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_JpegIO_nativeCompressToJpeg */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_JpegIO_nativeCompressToJpeg(void) {
    ALOGD("Java_com_googlecode_leptonica_android_JpegIO_nativeCompressToJpeg() called");
    return 0;
}

/* Demangled: boxClipToRectangle */
extern "C" __attribute__((visibility("default"))) int boxClipToRectangle(void) {
    ALOGD("boxClipToRectangle() called");
    return 0;
}

/* Demangled: pixBestCorrelation */
extern "C" __attribute__((visibility("default"))) int pixBestCorrelation(void) {
    ALOGD("pixBestCorrelation() called");
    return 0;
}

/* Demangled: pixBlockconvGrayUnnormalized */
extern "C" __attribute__((visibility("default"))) int pixBlockconvGrayUnnormalized(void) {
    ALOGD("pixBlockconvGrayUnnormalized() called");
    return 0;
}

/* Demangled: fpixGetRefcount */
extern "C" __attribute__((visibility("default"))) int fpixGetRefcount(void) {
    ALOGD("fpixGetRefcount() called");
    return 0;
}

/* Demangled: arrayFindSequence */
extern "C" __attribute__((visibility("default"))) int arrayFindSequence(void) {
    ALOGD("arrayFindSequence() called");
    return 0;
}

/* Demangled: freadHeaderJpeg */
extern "C" __attribute__((visibility("default"))) int freadHeaderJpeg(void) {
    ALOGD("freadHeaderJpeg() called");
    return 0;
}

/* Demangled: boxaFillSequence */
extern "C" __attribute__((visibility("default"))) int boxaFillSequence(void) {
    ALOGD("boxaFillSequence() called");
    return 0;
}

/* Demangled: boxaaAlignBox */
extern "C" __attribute__((visibility("default"))) int boxaaAlignBox(void) {
    ALOGD("boxaaAlignBox() called");
    return 0;
}

/* Demangled: pixScaleGray2xLIDither */
extern "C" __attribute__((visibility("default"))) int pixScaleGray2xLIDither(void) {
    ALOGD("pixScaleGray2xLIDither() called");
    return 0;
}

/* Demangled: pixWrite */
extern "C" __attribute__((visibility("default"))) int pixWrite(void) {
    ALOGD("pixWrite() called");
    return 0;
}

/* Demangled: numaHasOnlyIntegers */
extern "C" __attribute__((visibility("default"))) int numaHasOnlyIntegers(void) {
    ALOGD("numaHasOnlyIntegers() called");
    return 0;
}

/* Demangled: numaDilate */
extern "C" __attribute__((visibility("default"))) int numaDilate(void) {
    ALOGD("numaDilate() called");
    return 0;
}

/* Demangled: selCreate */
extern "C" __attribute__((visibility("default"))) int selCreate(void) {
    ALOGD("selCreate() called");
    return 0;
}

/* Demangled: l_dnaFindValByHash */
extern "C" __attribute__((visibility("default"))) int l_dnaFindValByHash(void) {
    ALOGD("l_dnaFindValByHash() called");
    return 0;
}

/* Demangled: numaRead */
extern "C" __attribute__((visibility("default"))) int numaRead(void) {
    ALOGD("numaRead() called");
    return 0;
}

/* Demangled: pixSetAll */
extern "C" __attribute__((visibility("default"))) int pixSetAll(void) {
    ALOGD("pixSetAll() called");
    return 0;
}

/* Demangled: boxaHandleOverlaps */
extern "C" __attribute__((visibility("default"))) int boxaHandleOverlaps(void) {
    ALOGD("boxaHandleOverlaps() called");
    return 0;
}

/* Demangled: pixaConvertTo8 */
extern "C" __attribute__((visibility("default"))) int pixaConvertTo8(void) {
    ALOGD("pixaConvertTo8() called");
    return 0;
}

/* Demangled: numaaCompareImagesByBoxes */
extern "C" __attribute__((visibility("default"))) int numaaCompareImagesByBoxes(void) {
    ALOGD("numaaCompareImagesByBoxes() called");
    return 0;
}

/* Demangled: pixcmapColorToGray */
extern "C" __attribute__((visibility("default"))) int pixcmapColorToGray(void) {
    ALOGD("pixcmapColorToGray() called");
    return 0;
}

/* Demangled: pixRenderHashBoxa */
extern "C" __attribute__((visibility("default"))) int pixRenderHashBoxa(void) {
    ALOGD("pixRenderHashBoxa() called");
    return 0;
}

/* Demangled: selaGetCombName */
extern "C" __attribute__((visibility("default"))) int selaGetCombName(void) {
    ALOGD("selaGetCombName() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Boxa_nativeGetGeometry */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Boxa_nativeGetGeometry(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Boxa_nativeGetGeometry() called");
    return 0;
}

/* Demangled: composeRGBAPixel */
extern "C" __attribute__((visibility("default"))) int composeRGBAPixel(void) {
    ALOGD("composeRGBAPixel() called");
    return 0;
}

/* Demangled: encodeAscii85 */
extern "C" __attribute__((visibility("default"))) int encodeAscii85(void) {
    ALOGD("encodeAscii85() called");
    return 0;
}

/* Demangled: kernelWrite */
extern "C" __attribute__((visibility("default"))) int kernelWrite(void) {
    ALOGD("kernelWrite() called");
    return 0;
}

/* Demangled: l_rbtreeInsert */
extern "C" __attribute__((visibility("default"))) int l_rbtreeInsert(void) {
    ALOGD("l_rbtreeInsert() called");
    return 0;
}

/* Demangled: pixSetBlackOrWhite */
extern "C" __attribute__((visibility("default"))) int pixSetBlackOrWhite(void) {
    ALOGD("pixSetBlackOrWhite() called");
    return 0;
}

/* Demangled: pixaConstrainedSelect */
extern "C" __attribute__((visibility("default"))) int pixaConstrainedSelect(void) {
    ALOGD("pixaConstrainedSelect() called");
    return 0;
}

/* Demangled: pixWriteMemJpeg */
extern "C" __attribute__((visibility("default"))) int pixWriteMemJpeg(void) {
    ALOGD("pixWriteMemJpeg() called");
    return 0;
}

/* Demangled: pixUsesCmapColor */
extern "C" __attribute__((visibility("default"))) int pixUsesCmapColor(void) {
    ALOGD("pixUsesCmapColor() called");
    return 0;
}

/* Demangled: pixSeedfill4BB */
extern "C" __attribute__((visibility("default"))) int pixSeedfill4BB(void) {
    ALOGD("pixSeedfill4BB() called");
    return 0;
}

/* Demangled: dewarpBuildPageModel */
extern "C" __attribute__((visibility("default"))) int dewarpBuildPageModel(void) {
    ALOGD("dewarpBuildPageModel() called");
    return 0;
}

/* Demangled: kernelReadStream */
extern "C" __attribute__((visibility("default"))) int kernelReadStream(void) {
    ALOGD("kernelReadStream() called");
    return 0;
}

/* Demangled: generateBinaryMaze */
extern "C" __attribute__((visibility("default"))) int generateBinaryMaze(void) {
    ALOGD("generateBinaryMaze() called");
    return 0;
}

/* Demangled: pixFindRepCloseTile */
extern "C" __attribute__((visibility("default"))) int pixFindRepCloseTile(void) {
    ALOGD("pixFindRepCloseTile() called");
    return 0;
}

/* Demangled: numaGetCount */
extern "C" __attribute__((visibility("default"))) int numaGetCount(void) {
    ALOGD("numaGetCount() called");
    return 0;
}

/* Demangled: pixRenderLineArb */
extern "C" __attribute__((visibility("default"))) int pixRenderLineArb(void) {
    ALOGD("pixRenderLineArb() called");
    return 0;
}

/* Demangled: pixaaDisplayByPixa */
extern "C" __attribute__((visibility("default"))) int pixaaDisplayByPixa(void) {
    ALOGD("pixaaDisplayByPixa() called");
    return 0;
}

/* Demangled: recogCorrelationBestChar */
extern "C" __attribute__((visibility("default"))) int recogCorrelationBestChar(void) {
    ALOGD("recogCorrelationBestChar() called");
    return 0;
}

/* Demangled: regTestWritePixAndCheck */
extern "C" __attribute__((visibility("default"))) int regTestWritePixAndCheck(void) {
    ALOGD("regTestWritePixAndCheck() called");
    return 0;
}

/* Demangled: seedfillGrayLowSimple */
extern "C" __attribute__((visibility("default"))) int seedfillGrayLowSimple(void) {
    ALOGD("seedfillGrayLowSimple() called");
    return 0;
}

/* Demangled: lstackPrint */
extern "C" __attribute__((visibility("default"))) int lstackPrint(void) {
    ALOGD("lstackPrint() called");
    return 0;
}

/* Demangled: pixaDestroy */
extern "C" __attribute__((visibility("default"))) int pixaDestroy(void) {
    ALOGD("pixaDestroy() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_AdaptiveMap_nativeBackgroundNormMorph */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_AdaptiveMap_nativeBackgroundNormMorph(void) {
    ALOGD("Java_com_googlecode_leptonica_android_AdaptiveMap_nativeBackgroundNormMorph() called");
    return 0;
}

/* Demangled: pixColorGrayMasked */
extern "C" __attribute__((visibility("default"))) int pixColorGrayMasked(void) {
    ALOGD("pixColorGrayMasked() called");
    return 0;
}

/* Demangled: pixcmapAddNearestColor */
extern "C" __attribute__((visibility("default"))) int pixcmapAddNearestColor(void) {
    ALOGD("pixcmapAddNearestColor() called");
    return 0;
}

/* Demangled: pixFewColorsOctcubeQuant1 */
extern "C" __attribute__((visibility("default"))) int pixFewColorsOctcubeQuant1(void) {
    ALOGD("pixFewColorsOctcubeQuant1() called");
    return 0;
}

/* Demangled: numaConvertToDna */
extern "C" __attribute__((visibility("default"))) int numaConvertToDna(void) {
    ALOGD("numaConvertToDna() called");
    return 0;
}

/* Demangled: pixScale */
extern "C" __attribute__((visibility("default"))) int pixScale(void) {
    ALOGD("pixScale() called");
    return 0;
}

/* Demangled: l_getDataDibit */
extern "C" __attribute__((visibility("default"))) int l_getDataDibit(void) {
    ALOGD("l_getDataDibit() called");
    return 0;
}

/* Demangled: pixFewColorsOctcubeQuant2 */
extern "C" __attribute__((visibility("default"))) int pixFewColorsOctcubeQuant2(void) {
    ALOGD("pixFewColorsOctcubeQuant2() called");
    return 0;
}

/* Demangled: pixHShearCenter */
extern "C" __attribute__((visibility("default"))) int pixHShearCenter(void) {
    ALOGD("pixHShearCenter() called");
    return 0;
}

/* Demangled: __udivsi3 */
extern "C" __attribute__((visibility("default"))) int fn___udivsi3(void) __asm__("__udivsi3");
int fn___udivsi3(void) {
    ALOGD("__udivsi3() called");
    return 0;
}

/* Demangled: pixExtendByReplication */
extern "C" __attribute__((visibility("default"))) int pixExtendByReplication(void) {
    ALOGD("pixExtendByReplication() called");
    return 0;
}

/* Demangled: pixcmapShiftByComponent */
extern "C" __attribute__((visibility("default"))) int pixcmapShiftByComponent(void) {
    ALOGD("pixcmapShiftByComponent() called");
    return 0;
}

/* Demangled: recogAddSamples */
extern "C" __attribute__((visibility("default"))) int recogAddSamples(void) {
    ALOGD("recogAddSamples() called");
    return 0;
}

/* Demangled: numaWindowedVariance */
extern "C" __attribute__((visibility("default"))) int numaWindowedVariance(void) {
    ALOGD("numaWindowedVariance() called");
    return 0;
}

/* Demangled: pixaCreateFromPixacomp */
extern "C" __attribute__((visibility("default"))) int pixaCreateFromPixacomp(void) {
    ALOGD("pixaCreateFromPixacomp() called");
    return 0;
}

/* Demangled: ptaContainsPt */
extern "C" __attribute__((visibility("default"))) int ptaContainsPt(void) {
    ALOGD("ptaContainsPt() called");
    return 0;
}

/* Demangled: pixPaintSelfThroughMask */
extern "C" __attribute__((visibility("default"))) int pixPaintSelfThroughMask(void) {
    ALOGD("pixPaintSelfThroughMask() called");
    return 0;
}

/* Demangled: pixConvertTo1BySampling */
extern "C" __attribute__((visibility("default"))) int pixConvertTo1BySampling(void) {
    ALOGD("pixConvertTo1BySampling() called");
    return 0;
}

/* Demangled: pixConvertTo32BySampling */
extern "C" __attribute__((visibility("default"))) int pixConvertTo32BySampling(void) {
    ALOGD("pixConvertTo32BySampling() called");
    return 0;
}

/* Demangled: pixaReadFiles */
extern "C" __attribute__((visibility("default"))) int pixaReadFiles(void) {
    ALOGD("pixaReadFiles() called");
    return 0;
}

/* Demangled: pixApplyVariableGrayMap */
extern "C" __attribute__((visibility("default"))) int pixApplyVariableGrayMap(void) {
    ALOGD("pixApplyVariableGrayMap() called");
    return 0;
}

/* Demangled: boxaaInsertBoxa */
extern "C" __attribute__((visibility("default"))) int boxaaInsertBoxa(void) {
    ALOGD("boxaaInsertBoxa() called");
    return 0;
}

/* Demangled: sarrayCreate */
extern "C" __attribute__((visibility("default"))) int sarrayCreate(void) {
    ALOGD("sarrayCreate() called");
    return 0;
}

/* Demangled: pixColorMagnitude */
extern "C" __attribute__((visibility("default"))) int pixColorMagnitude(void) {
    ALOGD("pixColorMagnitude() called");
    return 0;
}

/* Demangled: convertXYZToRGB */
extern "C" __attribute__((visibility("default"))) int convertXYZToRGB(void) {
    ALOGD("convertXYZToRGB() called");
    return 0;
}

/* Demangled: thresholdTo2bppLow */
extern "C" __attribute__((visibility("default"))) int thresholdTo2bppLow(void) {
    ALOGD("thresholdTo2bppLow() called");
    return 0;
}

/* Demangled: listAddToTail */
extern "C" __attribute__((visibility("default"))) int listAddToTail(void) {
    ALOGD("listAddToTail() called");
    return 0;
}

/* Demangled: linearInterpolatePixelColor */
extern "C" __attribute__((visibility("default"))) int linearInterpolatePixelColor(void) {
    ALOGD("linearInterpolatePixelColor() called");
    return 0;
}

/* Demangled: pixDisplayMatchedPattern */
extern "C" __attribute__((visibility("default"))) int pixDisplayMatchedPattern(void) {
    ALOGD("pixDisplayMatchedPattern() called");
    return 0;
}

/* Demangled: pixaExtendIterative */
extern "C" __attribute__((visibility("default"))) int pixaExtendIterative(void) {
    ALOGD("pixaExtendIterative() called");
    return 0;
}

/* Demangled: pixRemoveSeededComponents */
extern "C" __attribute__((visibility("default"))) int pixRemoveSeededComponents(void) {
    ALOGD("pixRemoveSeededComponents() called");
    return 0;
}

/* Demangled: numaGetFValue */
extern "C" __attribute__((visibility("default"))) int numaGetFValue(void) {
    ALOGD("numaGetFValue() called");
    return 0;
}

/* Demangled: pixSubtractGray */
extern "C" __attribute__((visibility("default"))) int pixSubtractGray(void) {
    ALOGD("pixSubtractGray() called");
    return 0;
}

/* Demangled: pixErode */
extern "C" __attribute__((visibility("default"))) int pixErode(void) {
    ALOGD("pixErode() called");
    return 0;
}

/* Demangled: sarrayCreateWordsFromString */
extern "C" __attribute__((visibility("default"))) int sarrayCreateWordsFromString(void) {
    ALOGD("sarrayCreateWordsFromString() called");
    return 0;
}

/* Demangled: pixWriteStream */
extern "C" __attribute__((visibility("default"))) int pixWriteStream(void) {
    ALOGD("pixWriteStream() called");
    return 0;
}

/* Demangled: jbDataWrite */
extern "C" __attribute__((visibility("default"))) int jbDataWrite(void) {
    ALOGD("jbDataWrite() called");
    return 0;
}

/* Demangled: sarrayCopy */
extern "C" __attribute__((visibility("default"))) int sarrayCopy(void) {
    ALOGD("sarrayCopy() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Pixa_nativeAddPix */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Pixa_nativeAddPix(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Pixa_nativeAddPix() called");
    return 0;
}

/* Demangled: getSortedPathnamesInDirectory */
extern "C" __attribute__((visibility("default"))) int getSortedPathnamesInDirectory(void) {
    ALOGD("getSortedPathnamesInDirectory() called");
    return 0;
}

/* Demangled: jbAddPage */
extern "C" __attribute__((visibility("default"))) int jbAddPage(void) {
    ALOGD("jbAddPage() called");
    return 0;
}

/* Demangled: pixFindPerimToAreaRatio */
extern "C" __attribute__((visibility("default"))) int pixFindPerimToAreaRatio(void) {
    ALOGD("pixFindPerimToAreaRatio() called");
    return 0;
}

/* Demangled: sarraySort */
extern "C" __attribute__((visibility("default"))) int sarraySort(void) {
    ALOGD("sarraySort() called");
    return 0;
}

/* Demangled: selGetElement */
extern "C" __attribute__((visibility("default"))) int selGetElement(void) {
    ALOGD("selGetElement() called");
    return 0;
}

/* Demangled: pixRenderBoxArb */
extern "C" __attribute__((visibility("default"))) int pixRenderBoxArb(void) {
    ALOGD("pixRenderBoxArb() called");
    return 0;
}

/* Demangled: pixacompDestroy */
extern "C" __attribute__((visibility("default"))) int pixacompDestroy(void) {
    ALOGD("pixacompDestroy() called");
    return 0;
}

/* Demangled: pixaSelectWithIndicator */
extern "C" __attribute__((visibility("default"))) int pixaSelectWithIndicator(void) {
    ALOGD("pixaSelectWithIndicator() called");
    return 0;
}

/* Demangled: fpixConvertToPix */
extern "C" __attribute__((visibility("default"))) int fpixConvertToPix(void) {
    ALOGD("fpixConvertToPix() called");
    return 0;
}

/* Demangled: pixDisplayPta */
extern "C" __attribute__((visibility("default"))) int pixDisplayPta(void) {
    ALOGD("pixDisplayPta() called");
    return 0;
}

/* Demangled: pixScanForForeground */
extern "C" __attribute__((visibility("default"))) int pixScanForForeground(void) {
    ALOGD("pixScanForForeground() called");
    return 0;
}

/* Demangled: makeGrayQuantTargetTable */
extern "C" __attribute__((visibility("default"))) int makeGrayQuantTargetTable(void) {
    ALOGD("makeGrayQuantTargetTable() called");
    return 0;
}

/* Demangled: numaaWriteStream */
extern "C" __attribute__((visibility("default"))) int numaaWriteStream(void) {
    ALOGD("numaaWriteStream() called");
    return 0;
}

/* Demangled: numaCountReversals */
extern "C" __attribute__((visibility("default"))) int numaCountReversals(void) {
    ALOGD("numaCountReversals() called");
    return 0;
}

/* Demangled: pixAddBorderGeneral */
extern "C" __attribute__((visibility("default"))) int pixAddBorderGeneral(void) {
    ALOGD("pixAddBorderGeneral() called");
    return 0;
}

/* Demangled: ptaGetIPt */
extern "C" __attribute__((visibility("default"))) int ptaGetIPt(void) {
    ALOGD("ptaGetIPt() called");
    return 0;
}

/* Demangled: dewarpWriteStream */
extern "C" __attribute__((visibility("default"))) int dewarpWriteStream(void) {
    ALOGD("dewarpWriteStream() called");
    return 0;
}

/* Demangled: l_amapInsert */
extern "C" __attribute__((visibility("default"))) int l_amapInsert(void) {
    ALOGD("l_amapInsert() called");
    return 0;
}

/* Demangled: pmsCustomDealloc */
extern "C" __attribute__((visibility("default"))) int pmsCustomDealloc(void) {
    ALOGD("pmsCustomDealloc() called");
    return 0;
}

/* Demangled: pixTilingCreate */
extern "C" __attribute__((visibility("default"))) int pixTilingCreate(void) {
    ALOGD("pixTilingCreate() called");
    return 0;
}

/* Demangled: numaaDestroy */
extern "C" __attribute__((visibility("default"))) int numaaDestroy(void) {
    ALOGD("numaaDestroy() called");
    return 0;
}

/* Demangled: pixContrastTRC */
extern "C" __attribute__((visibility("default"))) int pixContrastTRC(void) {
    ALOGD("pixContrastTRC() called");
    return 0;
}

/* Demangled: pixWritePSEmbed */
extern "C" __attribute__((visibility("default"))) int pixWritePSEmbed(void) {
    ALOGD("pixWritePSEmbed() called");
    return 0;
}

/* Demangled: recogCorrelationBestRow */
extern "C" __attribute__((visibility("default"))) int recogCorrelationBestRow(void) {
    ALOGD("recogCorrelationBestRow() called");
    return 0;
}

/* Demangled: shiftDataHorizontalLow */
extern "C" __attribute__((visibility("default"))) int shiftDataHorizontalLow(void) {
    ALOGD("shiftDataHorizontalLow() called");
    return 0;
}

/* Demangled: pixCreate */
extern "C" __attribute__((visibility("default"))) int pixCreate(void) {
    ALOGD("pixCreate() called");
    return 0;
}

/* Demangled: l_bootnum_gen1 */
extern "C" __attribute__((visibility("default"))) int l_bootnum_gen1(void) {
    ALOGD("l_bootnum_gen1() called");
    return 0;
}

/* Demangled: pixThresholdOn8bpp */
extern "C" __attribute__((visibility("default"))) int pixThresholdOn8bpp(void) {
    ALOGD("pixThresholdOn8bpp() called");
    return 0;
}

/* Demangled: pixReadHeaderMem */
extern "C" __attribute__((visibility("default"))) int pixReadHeaderMem(void) {
    ALOGD("pixReadHeaderMem() called");
    return 0;
}

/* Demangled: l_bootnum_gen2 */
extern "C" __attribute__((visibility("default"))) int l_bootnum_gen2(void) {
    ALOGD("l_bootnum_gen2() called");
    return 0;
}

/* Demangled: pixRenderPolylineBlend */
extern "C" __attribute__((visibility("default"))) int pixRenderPolylineBlend(void) {
    ALOGD("pixRenderPolylineBlend() called");
    return 0;
}

/* Demangled: numaSimilar */
extern "C" __attribute__((visibility("default"))) int numaSimilar(void) {
    ALOGD("numaSimilar() called");
    return 0;
}

/* Demangled: l_bootnum_gen3 */
extern "C" __attribute__((visibility("default"))) int l_bootnum_gen3(void) {
    ALOGD("l_bootnum_gen3() called");
    return 0;
}

/* Demangled: pixCompareRankDifference */
extern "C" __attribute__((visibility("default"))) int pixCompareRankDifference(void) {
    ALOGD("pixCompareRankDifference() called");
    return 0;
}

/* Demangled: pixFindBaselines */
extern "C" __attribute__((visibility("default"))) int pixFindBaselines(void) {
    ALOGD("pixFindBaselines() called");
    return 0;
}

/* Demangled: getCutPathForHole */
extern "C" __attribute__((visibility("default"))) int getCutPathForHole(void) {
    ALOGD("getCutPathForHole() called");
    return 0;
}

/* Demangled: pixReadBarcodes */
extern "C" __attribute__((visibility("default"))) int pixReadBarcodes(void) {
    ALOGD("pixReadBarcodes() called");
    return 0;
}

/* Demangled: pixBackgroundNorm */
extern "C" __attribute__((visibility("default"))) int pixBackgroundNorm(void) {
    ALOGD("pixBackgroundNorm() called");
    return 0;
}

/* Demangled: affineInvertXform */
extern "C" __attribute__((visibility("default"))) int affineInvertXform(void) {
    ALOGD("affineInvertXform() called");
    return 0;
}

/* Demangled: fpixGetPixel */
extern "C" __attribute__((visibility("default"))) int fpixGetPixel(void) {
    ALOGD("fpixGetPixel() called");
    return 0;
}

/* Demangled: pixOpenCompBrick */
extern "C" __attribute__((visibility("default"))) int pixOpenCompBrick(void) {
    ALOGD("pixOpenCompBrick() called");
    return 0;
}

/* Demangled: pixFindLargestRectangle */
extern "C" __attribute__((visibility("default"))) int pixFindLargestRectangle(void) {
    ALOGD("pixFindLargestRectangle() called");
    return 0;
}

/* Demangled: pixColorFraction */
extern "C" __attribute__((visibility("default"))) int pixColorFraction(void) {
    ALOGD("pixColorFraction() called");
    return 0;
}

/* Demangled: pixcmapConvertHSVToRGB */
extern "C" __attribute__((visibility("default"))) int pixcmapConvertHSVToRGB(void) {
    ALOGD("pixcmapConvertHSVToRGB() called");
    return 0;
}

/* Demangled: recogSetBootflag */
extern "C" __attribute__((visibility("default"))) int recogSetBootflag(void) {
    ALOGD("recogSetBootflag() called");
    return 0;
}

/* Demangled: fpixaGetFPix */
extern "C" __attribute__((visibility("default"))) int fpixaGetFPix(void) {
    ALOGD("fpixaGetFPix() called");
    return 0;
}

/* Demangled: pixcompWriteStreamInfo */
extern "C" __attribute__((visibility("default"))) int pixcompWriteStreamInfo(void) {
    ALOGD("pixcompWriteStreamInfo() called");
    return 0;
}

/* Demangled: ptaRemovePt */
extern "C" __attribute__((visibility("default"))) int ptaRemovePt(void) {
    ALOGD("ptaRemovePt() called");
    return 0;
}

/* Demangled: fpixAddMultConstant */
extern "C" __attribute__((visibility("default"))) int fpixAddMultConstant(void) {
    ALOGD("fpixAddMultConstant() called");
    return 0;
}

/* Demangled: pixChooseOutputFormat */
extern "C" __attribute__((visibility("default"))) int pixChooseOutputFormat(void) {
    ALOGD("pixChooseOutputFormat() called");
    return 0;
}

/* Demangled: boxIsValid */
extern "C" __attribute__((visibility("default"))) int boxIsValid(void) {
    ALOGD("boxIsValid() called");
    return 0;
}

/* Demangled: ccbaDisplayBorder */
extern "C" __attribute__((visibility("default"))) int ccbaDisplayBorder(void) {
    ALOGD("ccbaDisplayBorder() called");
    return 0;
}

/* Demangled: pixaAddTextNumber */
extern "C" __attribute__((visibility("default"))) int pixaAddTextNumber(void) {
    ALOGD("pixaAddTextNumber() called");
    return 0;
}

/* Demangled: boxaaWriteStream */
extern "C" __attribute__((visibility("default"))) int boxaaWriteStream(void) {
    ALOGD("boxaaWriteStream() called");
    return 0;
}

/* Demangled: pixComponentFunction */
extern "C" __attribute__((visibility("default"))) int pixComponentFunction(void) {
    ALOGD("pixComponentFunction() called");
    return 0;
}

/* Demangled: convertLABToRGB */
extern "C" __attribute__((visibility("default"))) int convertLABToRGB(void) {
    ALOGD("convertLABToRGB() called");
    return 0;
}

/* Demangled: pixMorphSequenceByComponent */
extern "C" __attribute__((visibility("default"))) int pixMorphSequenceByComponent(void) {
    ALOGD("pixMorphSequenceByComponent() called");
    return 0;
}

/* Demangled: pixScaleRGBToBinaryFast */
extern "C" __attribute__((visibility("default"))) int pixScaleRGBToBinaryFast(void) {
    ALOGD("pixScaleRGBToBinaryFast() called");
    return 0;
}

/* Demangled: pixColorSegmentRemoveColors */
extern "C" __attribute__((visibility("default"))) int pixColorSegmentRemoveColors(void) {
    ALOGD("pixColorSegmentRemoveColors() called");
    return 0;
}

/* Demangled: dewarpaStripRefModels */
extern "C" __attribute__((visibility("default"))) int dewarpaStripRefModels(void) {
    ALOGD("dewarpaStripRefModels() called");
    return 0;
}

/* Demangled: pixcompCopy */
extern "C" __attribute__((visibility("default"))) int pixcompCopy(void) {
    ALOGD("pixcompCopy() called");
    return 0;
}

/* Demangled: recogWriteStream */
extern "C" __attribute__((visibility("default"))) int recogWriteStream(void) {
    ALOGD("recogWriteStream() called");
    return 0;
}

/* Demangled: pixBackgroundNormFlex */
extern "C" __attribute__((visibility("default"))) int pixBackgroundNormFlex(void) {
    ALOGD("pixBackgroundNormFlex() called");
    return 0;
}

/* Demangled: pixBilateralGray */
extern "C" __attribute__((visibility("default"))) int pixBilateralGray(void) {
    ALOGD("pixBilateralGray() called");
    return 0;
}

/* Demangled: dewarpaRestoreModels */
extern "C" __attribute__((visibility("default"))) int dewarpaRestoreModels(void) {
    ALOGD("dewarpaRestoreModels() called");
    return 0;
}

/* Demangled: numaCreateFromString */
extern "C" __attribute__((visibility("default"))) int numaCreateFromString(void) {
    ALOGD("numaCreateFromString() called");
    return 0;
}

/* Demangled: pixBilateralGrayExact */
extern "C" __attribute__((visibility("default"))) int pixBilateralGrayExact(void) {
    ALOGD("pixBilateralGrayExact() called");
    return 0;
}

/* Demangled: pixGetMaxValueInRect */
extern "C" __attribute__((visibility("default"))) int pixGetMaxValueInRect(void) {
    ALOGD("pixGetMaxValueInRect() called");
    return 0;
}

/* Demangled: sarrayReplaceString */
extern "C" __attribute__((visibility("default"))) int sarrayReplaceString(void) {
    ALOGD("sarrayReplaceString() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Pix_nativeGetSpp */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Pix_nativeGetSpp(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Pix_nativeGetSpp() called");
    return 0;
}

/* Demangled: boxSeparationDistance */
extern "C" __attribute__((visibility("default"))) int boxSeparationDistance(void) {
    ALOGD("boxSeparationDistance() called");
    return 0;
}

/* Demangled: jbCorrelation */
extern "C" __attribute__((visibility("default"))) int jbCorrelation(void) {
    ALOGD("jbCorrelation() called");
    return 0;
}

/* Demangled: pixGetAverageTiled */
extern "C" __attribute__((visibility("default"))) int pixGetAverageTiled(void) {
    ALOGD("pixGetAverageTiled() called");
    return 0;
}

/* Demangled: l_dnaGetParameters */
extern "C" __attribute__((visibility("default"))) int l_dnaGetParameters(void) {
    ALOGD("l_dnaGetParameters() called");
    return 0;
}

/* Demangled: pixConvertToDPix */
extern "C" __attribute__((visibility("default"))) int pixConvertToDPix(void) {
    ALOGD("pixConvertToDPix() called");
    return 0;
}

/* Demangled: jbDataRead */
extern "C" __attribute__((visibility("default"))) int jbDataRead(void) {
    ALOGD("jbDataRead() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Enhance_nativeUnsharpMasking */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Enhance_nativeUnsharpMasking(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Enhance_nativeUnsharpMasking() called");
    return 0;
}

/* Demangled: dpixGetData */
extern "C" __attribute__((visibility("default"))) int dpixGetData(void) {
    ALOGD("dpixGetData() called");
    return 0;
}

/* Demangled: fpixRotateOrth */
extern "C" __attribute__((visibility("default"))) int fpixRotateOrth(void) {
    ALOGD("fpixRotateOrth() called");
    return 0;
}

/* Demangled: l_generateG4Data */
extern "C" __attribute__((visibility("default"))) int l_generateG4Data(void) {
    ALOGD("l_generateG4Data() called");
    return 0;
}

/* Demangled: pixConnCompIncrAdd */
extern "C" __attribute__((visibility("default"))) int pixConnCompIncrAdd(void) {
    ALOGD("pixConnCompIncrAdd() called");
    return 0;
}

/* Demangled: pixaReadMultipageTiff */
extern "C" __attribute__((visibility("default"))) int pixaReadMultipageTiff(void) {
    ALOGD("pixaReadMultipageTiff() called");
    return 0;
}

/* Demangled: pixaCreateFromBoxa */
extern "C" __attribute__((visibility("default"))) int pixaCreateFromBoxa(void) {
    ALOGD("pixaCreateFromBoxa() called");
    return 0;
}

/* Demangled: pixConvertRGBToYUV */
extern "C" __attribute__((visibility("default"))) int pixConvertRGBToYUV(void) {
    ALOGD("pixConvertRGBToYUV() called");
    return 0;
}

/* Demangled: sarrayConvertFilesFittedToPS */
extern "C" __attribute__((visibility("default"))) int sarrayConvertFilesFittedToPS(void) {
    ALOGD("sarrayConvertFilesFittedToPS() called");
    return 0;
}

/* Demangled: sarrayConvertWordsToLines */
extern "C" __attribute__((visibility("default"))) int sarrayConvertWordsToLines(void) {
    ALOGD("sarrayConvertWordsToLines() called");
    return 0;
}

/* Demangled: pixaCopy */
extern "C" __attribute__((visibility("default"))) int pixaCopy(void) {
    ALOGD("pixaCopy() called");
    return 0;
}

/* Demangled: boxClipToRectangleParams */
extern "C" __attribute__((visibility("default"))) int boxClipToRectangleParams(void) {
    ALOGD("boxClipToRectangleParams() called");
    return 0;
}

/* Demangled: pixGetCmapHistogramMasked */
extern "C" __attribute__((visibility("default"))) int pixGetCmapHistogramMasked(void) {
    ALOGD("pixGetCmapHistogramMasked() called");
    return 0;
}

/* Demangled: pixaGetRenderingDepth */
extern "C" __attribute__((visibility("default"))) int pixaGetRenderingDepth(void) {
    ALOGD("pixaGetRenderingDepth() called");
    return 0;
}

/* Demangled: sarrayWrite */
extern "C" __attribute__((visibility("default"))) int sarrayWrite(void) {
    ALOGD("sarrayWrite() called");
    return 0;
}

/* Demangled: pixaSort */
extern "C" __attribute__((visibility("default"))) int pixaSort(void) {
    ALOGD("pixaSort() called");
    return 0;
}

/* Demangled: pixConvertLossless */
extern "C" __attribute__((visibility("default"))) int pixConvertLossless(void) {
    ALOGD("pixConvertLossless() called");
    return 0;
}

/* Demangled: l_generateFlateDataPdf */
extern "C" __attribute__((visibility("default"))) int l_generateFlateDataPdf(void) {
    ALOGD("l_generateFlateDataPdf() called");
    return 0;
}

/* Demangled: ptaaReadStream */
extern "C" __attribute__((visibility("default"))) int ptaaReadStream(void) {
    ALOGD("ptaaReadStream() called");
    return 0;
}

/* Demangled: scaleGrayLILow */
extern "C" __attribute__((visibility("default"))) int scaleGrayLILow(void) {
    ALOGD("scaleGrayLILow() called");
    return 0;
}

/* Demangled: pixAddGaussianNoise */
extern "C" __attribute__((visibility("default"))) int pixAddGaussianNoise(void) {
    ALOGD("pixAddGaussianNoise() called");
    return 0;
}

/* Demangled: pixRenderPtaBlend */
extern "C" __attribute__((visibility("default"))) int pixRenderPtaBlend(void) {
    ALOGD("pixRenderPtaBlend() called");
    return 0;
}

/* Demangled: l_getDataBit */
extern "C" __attribute__((visibility("default"))) int l_getDataBit(void) {
    ALOGD("l_getDataBit() called");
    return 0;
}

/* Demangled: pixCorrelationBinary */
extern "C" __attribute__((visibility("default"))) int pixCorrelationBinary(void) {
    ALOGD("pixCorrelationBinary() called");
    return 0;
}

/* Demangled: pixaCountText */
extern "C" __attribute__((visibility("default"))) int pixaCountText(void) {
    ALOGD("pixaCountText() called");
    return 0;
}

/* Demangled: pixDisplayHitMissSel */
extern "C" __attribute__((visibility("default"))) int pixDisplayHitMissSel(void) {
    ALOGD("pixDisplayHitMissSel() called");
    return 0;
}

/* Demangled: boxaWriteStream */
extern "C" __attribute__((visibility("default"))) int boxaWriteStream(void) {
    ALOGD("boxaWriteStream() called");
    return 0;
}

/* Demangled: pixMeasureSaturation */
extern "C" __attribute__((visibility("default"))) int pixMeasureSaturation(void) {
    ALOGD("pixMeasureSaturation() called");
    return 0;
}

/* Demangled: pixDitherToBinary */
extern "C" __attribute__((visibility("default"))) int pixDitherToBinary(void) {
    ALOGD("pixDitherToBinary() called");
    return 0;
}

/* Demangled: ptaCopyRange */
extern "C" __attribute__((visibility("default"))) int ptaCopyRange(void) {
    ALOGD("ptaCopyRange() called");
    return 0;
}

/* Demangled: convertRGBToLAB */
extern "C" __attribute__((visibility("default"))) int convertRGBToLAB(void) {
    ALOGD("convertRGBToLAB() called");
    return 0;
}

/* Demangled: pixPadToCenterCentroid */
extern "C" __attribute__((visibility("default"))) int pixPadToCenterCentroid(void) {
    ALOGD("pixPadToCenterCentroid() called");
    return 0;
}

/* Exported Object: gplotfileoutputs */
extern "C" __attribute__((visibility("default"))) void* gplotfileoutputs = NULL;

/* Demangled: numaaRead */
extern "C" __attribute__((visibility("default"))) int numaaRead(void) {
    ALOGD("numaaRead() called");
    return 0;
}

/* Demangled: pixGetRangeValues */
extern "C" __attribute__((visibility("default"))) int pixGetRangeValues(void) {
    ALOGD("pixGetRangeValues() called");
    return 0;
}

/* Demangled: recogWriteMem */
extern "C" __attribute__((visibility("default"))) int recogWriteMem(void) {
    ALOGD("recogWriteMem() called");
    return 0;
}

/* Demangled: saConcatenatePdfToData */
extern "C" __attribute__((visibility("default"))) int saConcatenatePdfToData(void) {
    ALOGD("saConcatenatePdfToData() called");
    return 0;
}

/* Demangled: pixConvertRGBToGrayArb */
extern "C" __attribute__((visibility("default"))) int pixConvertRGBToGrayArb(void) {
    ALOGD("pixConvertRGBToGrayArb() called");
    return 0;
}

/* Demangled: scaleToGray8Low */
extern "C" __attribute__((visibility("default"))) int scaleToGray8Low(void) {
    ALOGD("scaleToGray8Low() called");
    return 0;
}

/* Demangled: pixFindStrokeLength */
extern "C" __attribute__((visibility("default"))) int pixFindStrokeLength(void) {
    ALOGD("pixFindStrokeLength() called");
    return 0;
}

/* Demangled: pixaDisplayMultiTiled */
extern "C" __attribute__((visibility("default"))) int pixaDisplayMultiTiled(void) {
    ALOGD("pixaDisplayMultiTiled() called");
    return 0;
}

/* Demangled: pixScaleColorLI */
extern "C" __attribute__((visibility("default"))) int pixScaleColorLI(void) {
    ALOGD("pixScaleColorLI() called");
    return 0;
}

/* Demangled: pixScaleMipmap */
extern "C" __attribute__((visibility("default"))) int pixScaleMipmap(void) {
    ALOGD("pixScaleMipmap() called");
    return 0;
}

/* Demangled: boxaTransform */
extern "C" __attribute__((visibility("default"))) int boxaTransform(void) {
    ALOGD("boxaTransform() called");
    return 0;
}

/* Demangled: makeGaussianKernel */
extern "C" __attribute__((visibility("default"))) int makeGaussianKernel(void) {
    ALOGD("makeGaussianKernel() called");
    return 0;
}

/* Demangled: pixcmapAddColor */
extern "C" __attribute__((visibility("default"))) int pixcmapAddColor(void) {
    ALOGD("pixcmapAddColor() called");
    return 0;
}

/* Demangled: fpixWriteStream */
extern "C" __attribute__((visibility("default"))) int fpixWriteStream(void) {
    ALOGD("fpixWriteStream() called");
    return 0;
}

/* Demangled: l_dnaHashCreate */
extern "C" __attribute__((visibility("default"))) int l_dnaHashCreate(void) {
    ALOGD("l_dnaHashCreate() called");
    return 0;
}

/* Demangled: pixWriteStreamPdf */
extern "C" __attribute__((visibility("default"))) int pixWriteStreamPdf(void) {
    ALOGD("pixWriteStreamPdf() called");
    return 0;
}

/* Demangled: seedfillGrayInvLow */
extern "C" __attribute__((visibility("default"))) int seedfillGrayInvLow(void) {
    ALOGD("seedfillGrayInvLow() called");
    return 0;
}

/* Demangled: pixSizesEqual */
extern "C" __attribute__((visibility("default"))) int pixSizesEqual(void) {
    ALOGD("pixSizesEqual() called");
    return 0;
}

/* Demangled: makeRangeKernel */
extern "C" __attribute__((visibility("default"))) int makeRangeKernel(void) {
    ALOGD("makeRangeKernel() called");
    return 0;
}

/* Demangled: pixExtractTextlines */
extern "C" __attribute__((visibility("default"))) int pixExtractTextlines(void) {
    ALOGD("pixExtractTextlines() called");
    return 0;
}

/* Demangled: pixFindSkewSweepAndSearch */
extern "C" __attribute__((visibility("default"))) int pixFindSkewSweepAndSearch(void) {
    ALOGD("pixFindSkewSweepAndSearch() called");
    return 0;
}

/* Demangled: dewarpaSetMaxDistance */
extern "C" __attribute__((visibility("default"))) int dewarpaSetMaxDistance(void) {
    ALOGD("dewarpaSetMaxDistance() called");
    return 0;
}

/* Demangled: dpixGetMin */
extern "C" __attribute__((visibility("default"))) int dpixGetMin(void) {
    ALOGD("dpixGetMin() called");
    return 0;
}

/* Demangled: ditherTo2bppLow */
extern "C" __attribute__((visibility("default"))) int ditherTo2bppLow(void) {
    ALOGD("ditherTo2bppLow() called");
    return 0;
}

/* Demangled: l_dnaaCreateFull */
extern "C" __attribute__((visibility("default"))) int l_dnaaCreateFull(void) {
    ALOGD("l_dnaaCreateFull() called");
    return 0;
}

/* Demangled: l_byteaFindEachSequence */
extern "C" __attribute__((visibility("default"))) int l_byteaFindEachSequence(void) {
    ALOGD("l_byteaFindEachSequence() called");
    return 0;
}

/* Demangled: pixSnapColorCmap */
extern "C" __attribute__((visibility("default"))) int pixSnapColorCmap(void) {
    ALOGD("pixSnapColorCmap() called");
    return 0;
}

/* Demangled: displayHSVColorRange */
extern "C" __attribute__((visibility("default"))) int displayHSVColorRange(void) {
    ALOGD("displayHSVColorRange() called");
    return 0;
}

/* Demangled: pixCopySpp */
extern "C" __attribute__((visibility("default"))) int pixCopySpp(void) {
    ALOGD("pixCopySpp() called");
    return 0;
}

/* Demangled: wshedCreate */
extern "C" __attribute__((visibility("default"))) int wshedCreate(void) {
    ALOGD("wshedCreate() called");
    return 0;
}

/* Demangled: ptaaAddPta */
extern "C" __attribute__((visibility("default"))) int ptaaAddPta(void) {
    ALOGD("ptaaAddPta() called");
    return 0;
}

/* Demangled: pixRenderBoxaBlend */
extern "C" __attribute__((visibility("default"))) int pixRenderBoxaBlend(void) {
    ALOGD("pixRenderBoxaBlend() called");
    return 0;
}

/* Demangled: ptaGetCubicLSF */
extern "C" __attribute__((visibility("default"))) int ptaGetCubicLSF(void) {
    ALOGD("ptaGetCubicLSF() called");
    return 0;
}

/* Demangled: recogAverageSamples */
extern "C" __attribute__((visibility("default"))) int recogAverageSamples(void) {
    ALOGD("recogAverageSamples() called");
    return 0;
}

/* Demangled: pixGetWidth */
extern "C" __attribute__((visibility("default"))) int pixGetWidth(void) {
    ALOGD("pixGetWidth() called");
    return 0;
}

/* Demangled: convertG4ToPSString */
extern "C" __attribute__((visibility("default"))) int convertG4ToPSString(void) {
    ALOGD("convertG4ToPSString() called");
    return 0;
}

/* Demangled: pixFindNormalizedSquareSum */
extern "C" __attribute__((visibility("default"))) int pixFindNormalizedSquareSum(void) {
    ALOGD("pixFindNormalizedSquareSum() called");
    return 0;
}

/* Demangled: boxaRotateOrth */
extern "C" __attribute__((visibility("default"))) int boxaRotateOrth(void) {
    ALOGD("boxaRotateOrth() called");
    return 0;
}

/* Demangled: pixRenderHashMaskArb */
extern "C" __attribute__((visibility("default"))) int pixRenderHashMaskArb(void) {
    ALOGD("pixRenderHashMaskArb() called");
    return 0;
}

/* Demangled: makeGaussianKernelSep */
extern "C" __attribute__((visibility("default"))) int makeGaussianKernelSep(void) {
    ALOGD("makeGaussianKernelSep() called");
    return 0;
}

/* Demangled: pixScaleLI */
extern "C" __attribute__((visibility("default"))) int pixScaleLI(void) {
    ALOGD("pixScaleLI() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_WriteFile_nativeWriteBytes8 */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_WriteFile_nativeWriteBytes8(void) {
    ALOGD("Java_com_googlecode_leptonica_android_WriteFile_nativeWriteBytes8() called");
    return 0;
}

/* Demangled: pixConvertTo8BySampling */
extern "C" __attribute__((visibility("default"))) int pixConvertTo8BySampling(void) {
    ALOGD("pixConvertTo8BySampling() called");
    return 0;
}

/* Demangled: l_dnaHashCreateFromPta */
extern "C" __attribute__((visibility("default"))) int l_dnaHashCreateFromPta(void) {
    ALOGD("l_dnaHashCreateFromPta() called");
    return 0;
}

/* Demangled: rotateAMColorCornerLow */
extern "C" __attribute__((visibility("default"))) int rotateAMColorCornerLow(void) {
    ALOGD("rotateAMColorCornerLow() called");
    return 0;
}

/* Demangled: numaWindowedMedian */
extern "C" __attribute__((visibility("default"))) int numaWindowedMedian(void) {
    ALOGD("numaWindowedMedian() called");
    return 0;
}

/* Demangled: pixConvertRGBToLuminance */
extern "C" __attribute__((visibility("default"))) int pixConvertRGBToLuminance(void) {
    ALOGD("pixConvertRGBToLuminance() called");
    return 0;
}

/* Demangled: pixConvert24To32 */
extern "C" __attribute__((visibility("default"))) int pixConvert24To32(void) {
    ALOGD("pixConvert24To32() called");
    return 0;
}

/* Demangled: pixConvertRGBToGrayFast */
extern "C" __attribute__((visibility("default"))) int pixConvertRGBToGrayFast(void) {
    ALOGD("pixConvertRGBToGrayFast() called");
    return 0;
}

/* Demangled: pixHShearIP */
extern "C" __attribute__((visibility("default"))) int pixHShearIP(void) {
    ALOGD("pixHShearIP() called");
    return 0;
}

/* Demangled: l_getDataByte */
extern "C" __attribute__((visibility("default"))) int l_getDataByte(void) {
    ALOGD("l_getDataByte() called");
    return 0;
}

/* Demangled: pixFindPerimSizeRatio */
extern "C" __attribute__((visibility("default"))) int pixFindPerimSizeRatio(void) {
    ALOGD("pixFindPerimSizeRatio() called");
    return 0;
}

/* Demangled: pixaaAddPix */
extern "C" __attribute__((visibility("default"))) int pixaaAddPix(void) {
    ALOGD("pixaaAddPix() called");
    return 0;
}

/* Demangled: pixConvert4To8 */
extern "C" __attribute__((visibility("default"))) int pixConvert4To8(void) {
    ALOGD("pixConvert4To8() called");
    return 0;
}

/* Demangled: pixaCreate */
extern "C" __attribute__((visibility("default"))) int pixaCreate(void) {
    ALOGD("pixaCreate() called");
    return 0;
}

/* Demangled: l_dnaaWriteStream */
extern "C" __attribute__((visibility("default"))) int l_dnaaWriteStream(void) {
    ALOGD("l_dnaaWriteStream() called");
    return 0;
}

/* Demangled: findFileFormatStream */
extern "C" __attribute__((visibility("default"))) int findFileFormatStream(void) {
    ALOGD("findFileFormatStream() called");
    return 0;
}

/* Demangled: numaInvertMap */
extern "C" __attribute__((visibility("default"))) int numaInvertMap(void) {
    ALOGD("numaInvertMap() called");
    return 0;
}

/* Demangled: sarrayPadToSameSize */
extern "C" __attribute__((visibility("default"))) int sarrayPadToSameSize(void) {
    ALOGD("sarrayPadToSameSize() called");
    return 0;
}

/* Demangled: pixWriteStreamPS */
extern "C" __attribute__((visibility("default"))) int pixWriteStreamPS(void) {
    ALOGD("pixWriteStreamPS() called");
    return 0;
}

/* Demangled: pixGetSpp */
extern "C" __attribute__((visibility("default"))) int pixGetSpp(void) {
    ALOGD("pixGetSpp() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Scale_nativeScaleGeneral */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Scale_nativeScaleGeneral(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Scale_nativeScaleGeneral() called");
    return 0;
}

/* Demangled: boxaAdjustHeightToTarget */
extern "C" __attribute__((visibility("default"))) int boxaAdjustHeightToTarget(void) {
    ALOGD("boxaAdjustHeightToTarget() called");
    return 0;
}

/* Demangled: sreadHeaderSpix */
extern "C" __attribute__((visibility("default"))) int sreadHeaderSpix(void) {
    ALOGD("sreadHeaderSpix() called");
    return 0;
}

/* Demangled: JNI_OnLoad */
extern "C" __attribute__((visibility("default"))) int JNI_OnLoad(void) {
    ALOGD("JNI_OnLoad() called");
    return 0;
}

/* Demangled: parseStringForNumbers */
extern "C" __attribute__((visibility("default"))) int parseStringForNumbers(void) {
    ALOGD("parseStringForNumbers() called");
    return 0;
}

/* Demangled: numaaCreateFull */
extern "C" __attribute__((visibility("default"))) int numaaCreateFull(void) {
    ALOGD("numaaCreateFull() called");
    return 0;
}

/* Demangled: pixAffine */
extern "C" __attribute__((visibility("default"))) int pixAffine(void) {
    ALOGD("pixAffine() called");
    return 0;
}

/* Demangled: convertOnBigEnd16 */
extern "C" __attribute__((visibility("default"))) int convertOnBigEnd16(void) {
    ALOGD("convertOnBigEnd16() called");
    return 0;
}

/* Demangled: pixDrawBoxaRandom */
extern "C" __attribute__((visibility("default"))) int pixDrawBoxaRandom(void) {
    ALOGD("pixDrawBoxaRandom() called");
    return 0;
}

/* Demangled: l_dnaChangeRefcount */
extern "C" __attribute__((visibility("default"))) int l_dnaChangeRefcount(void) {
    ALOGD("l_dnaChangeRefcount() called");
    return 0;
}

/* Demangled: numaRandomPermutation */
extern "C" __attribute__((visibility("default"))) int numaRandomPermutation(void) {
    ALOGD("numaRandomPermutation() called");
    return 0;
}

/* Demangled: regTestCleanup */
extern "C" __attribute__((visibility("default"))) int regTestCleanup(void) {
    ALOGD("regTestCleanup() called");
    return 0;
}

/* Demangled: stringCopy */
extern "C" __attribute__((visibility("default"))) int stringCopy(void) {
    ALOGD("stringCopy() called");
    return 0;
}

/* Demangled: bbufferWriteStream */
extern "C" __attribute__((visibility("default"))) int bbufferWriteStream(void) {
    ALOGD("bbufferWriteStream() called");
    return 0;
}

/* Demangled: boxaGetArea */
extern "C" __attribute__((visibility("default"))) int boxaGetArea(void) {
    ALOGD("boxaGetArea() called");
    return 0;
}

/* Demangled: dewarpRead */
extern "C" __attribute__((visibility("default"))) int dewarpRead(void) {
    ALOGD("dewarpRead() called");
    return 0;
}

/* Demangled: pixMultMatrixColor */
extern "C" __attribute__((visibility("default"))) int pixMultMatrixColor(void) {
    ALOGD("pixMultMatrixColor() called");
    return 0;
}

/* Demangled: ptaaAddPt */
extern "C" __attribute__((visibility("default"))) int ptaaAddPt(void) {
    ALOGD("ptaaAddPt() called");
    return 0;
}

/* Demangled: applyCubicFit */
extern "C" __attribute__((visibility("default"))) int applyCubicFit(void) {
    ALOGD("applyCubicFit() called");
    return 0;
}

/* Demangled: pixGetBinnedColor */
extern "C" __attribute__((visibility("default"))) int pixGetBinnedColor(void) {
    ALOGD("pixGetBinnedColor() called");
    return 0;
}

/* Demangled: pixacompInterleave */
extern "C" __attribute__((visibility("default"))) int pixacompInterleave(void) {
    ALOGD("pixacompInterleave() called");
    return 0;
}

/* Demangled: recogaCreateFromPixaa */
extern "C" __attribute__((visibility("default"))) int recogaCreateFromPixaa(void) {
    ALOGD("recogaCreateFromPixaa() called");
    return 0;
}

/* Demangled: pixAffineColor */
extern "C" __attribute__((visibility("default"))) int pixAffineColor(void) {
    ALOGD("pixAffineColor() called");
    return 0;
}

/* Demangled: l_amapSize */
extern "C" __attribute__((visibility("default"))) int l_amapSize(void) {
    ALOGD("l_amapSize() called");
    return 0;
}

/* Demangled: pixCloseGeneralized */
extern "C" __attribute__((visibility("default"))) int pixCloseGeneralized(void) {
    ALOGD("pixCloseGeneralized() called");
    return 0;
}

/* Demangled: pixacompCreateWithInit */
extern "C" __attribute__((visibility("default"))) int pixacompCreateWithInit(void) {
    ALOGD("pixacompCreateWithInit() called");
    return 0;
}

/* Demangled: l_getCurrentTime */
extern "C" __attribute__((visibility("default"))) int l_getCurrentTime(void) {
    ALOGD("l_getCurrentTime() called");
    return 0;
}

/* Demangled: extractRGBValues */
extern "C" __attribute__((visibility("default"))) int extractRGBValues(void) {
    ALOGD("extractRGBValues() called");
    return 0;
}

/* Demangled: gplotAddPlot */
extern "C" __attribute__((visibility("default"))) int gplotAddPlot(void) {
    ALOGD("gplotAddPlot() called");
    return 0;
}

/* Demangled: boxaSizeRange */
extern "C" __attribute__((visibility("default"))) int boxaSizeRange(void) {
    ALOGD("boxaSizeRange() called");
    return 0;
}

/* Demangled: dewarpPopulateFullRes */
extern "C" __attribute__((visibility("default"))) int dewarpPopulateFullRes(void) {
    ALOGD("dewarpPopulateFullRes() called");
    return 0;
}

/* Demangled: ptaCreateFromNuma */
extern "C" __attribute__((visibility("default"))) int ptaCreateFromNuma(void) {
    ALOGD("ptaCreateFromNuma() called");
    return 0;
}

/* Demangled: ptaaJoin */
extern "C" __attribute__((visibility("default"))) int ptaaJoin(void) {
    ALOGD("ptaaJoin() called");
    return 0;
}

/* Demangled: pixaGetPix */
extern "C" __attribute__((visibility("default"))) int pixaGetPix(void) {
    ALOGD("pixaGetPix() called");
    return 0;
}

/* Demangled: pixaSelectRange */
extern "C" __attribute__((visibility("default"))) int pixaSelectRange(void) {
    ALOGD("pixaSelectRange() called");
    return 0;
}

/* Demangled: boxaSmoothSequenceLS */
extern "C" __attribute__((visibility("default"))) int boxaSmoothSequenceLS(void) {
    ALOGD("boxaSmoothSequenceLS() called");
    return 0;
}

/* Demangled: generatePtaLineFromPt */
extern "C" __attribute__((visibility("default"))) int generatePtaLineFromPt(void) {
    ALOGD("generatePtaLineFromPt() called");
    return 0;
}

/* Demangled: dewarpWriteMem */
extern "C" __attribute__((visibility("default"))) int dewarpWriteMem(void) {
    ALOGD("dewarpWriteMem() called");
    return 0;
}

/* Demangled: numaEqualizeTRC */
extern "C" __attribute__((visibility("default"))) int numaEqualizeTRC(void) {
    ALOGD("numaEqualizeTRC() called");
    return 0;
}

/* Demangled: numaGetEdgeValues */
extern "C" __attribute__((visibility("default"))) int numaGetEdgeValues(void) {
    ALOGD("numaGetEdgeValues() called");
    return 0;
}

/* Demangled: recogSplitIntoCharacters */
extern "C" __attribute__((visibility("default"))) int recogSplitIntoCharacters(void) {
    ALOGD("recogSplitIntoCharacters() called");
    return 0;
}

/* Demangled: listFindElement */
extern "C" __attribute__((visibility("default"))) int listFindElement(void) {
    ALOGD("listFindElement() called");
    return 0;
}

/* Demangled: pixaaReadStream */
extern "C" __attribute__((visibility("default"))) int pixaaReadStream(void) {
    ALOGD("pixaaReadStream() called");
    return 0;
}

/* Demangled: pixGetLastOnPixelInRun */
extern "C" __attribute__((visibility("default"))) int pixGetLastOnPixelInRun(void) {
    ALOGD("pixGetLastOnPixelInRun() called");
    return 0;
}

/* Demangled: dpixWrite */
extern "C" __attribute__((visibility("default"))) int dpixWrite(void) {
    ALOGD("dpixWrite() called");
    return 0;
}

/* Demangled: pixSelectByPerimToAreaRatio */
extern "C" __attribute__((visibility("default"))) int pixSelectByPerimToAreaRatio(void) {
    ALOGD("pixSelectByPerimToAreaRatio() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Box_nativeDestroy */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Box_nativeDestroy(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Box_nativeDestroy() called");
    return 0;
}

/* Demangled: sarrayClear */
extern "C" __attribute__((visibility("default"))) int sarrayClear(void) {
    ALOGD("sarrayClear() called");
    return 0;
}

/* Demangled: recogCorrelAverages */
extern "C" __attribute__((visibility("default"))) int recogCorrelAverages(void) {
    ALOGD("recogCorrelAverages() called");
    return 0;
}

/* Demangled: ptaRemoveDupsByHash */
extern "C" __attribute__((visibility("default"))) int ptaRemoveDupsByHash(void) {
    ALOGD("ptaRemoveDupsByHash() called");
    return 0;
}

/* Demangled: dpixEndianByteSwap */
extern "C" __attribute__((visibility("default"))) int dpixEndianByteSwap(void) {
    ALOGD("dpixEndianByteSwap() called");
    return 0;
}

/* Demangled: pixGetRankColorArray */
extern "C" __attribute__((visibility("default"))) int pixGetRankColorArray(void) {
    ALOGD("pixGetRankColorArray() called");
    return 0;
}

/* Demangled: pixReadStreamBmp */
extern "C" __attribute__((visibility("default"))) int pixReadStreamBmp(void) {
    ALOGD("pixReadStreamBmp() called");
    return 0;
}

/* Demangled: pixAddSingleTextblock */
extern "C" __attribute__((visibility("default"))) int pixAddSingleTextblock(void) {
    ALOGD("pixAddSingleTextblock() called");
    return 0;
}

/* Demangled: getOctcubeIndexFromRGB */
extern "C" __attribute__((visibility("default"))) int getOctcubeIndexFromRGB(void) {
    ALOGD("getOctcubeIndexFromRGB() called");
    return 0;
}

/* Demangled: pixScaleResolution */
extern "C" __attribute__((visibility("default"))) int pixScaleResolution(void) {
    ALOGD("pixScaleResolution() called");
    return 0;
}

/* Demangled: fopenReadFromMemory */
extern "C" __attribute__((visibility("default"))) int fopenReadFromMemory(void) {
    ALOGD("fopenReadFromMemory() called");
    return 0;
}

/* Demangled: pixMirrorDetectDwa */
extern "C" __attribute__((visibility("default"))) int pixMirrorDetectDwa(void) {
    ALOGD("pixMirrorDetectDwa() called");
    return 0;
}

/* Demangled: generatePtaHashBox */
extern "C" __attribute__((visibility("default"))) int generatePtaHashBox(void) {
    ALOGD("generatePtaHashBox() called");
    return 0;
}

/* Demangled: ptraGetMaxIndex */
extern "C" __attribute__((visibility("default"))) int ptraGetMaxIndex(void) {
    ALOGD("ptraGetMaxIndex() called");
    return 0;
}

/* Demangled: pixGetResolution */
extern "C" __attribute__((visibility("default"))) int pixGetResolution(void) {
    ALOGD("pixGetResolution() called");
    return 0;
}

/* Demangled: recogScaleCharacter */
extern "C" __attribute__((visibility("default"))) int recogScaleCharacter(void) {
    ALOGD("recogScaleCharacter() called");
    return 0;
}

/* Demangled: pixScaleBySamplingToSize */
extern "C" __attribute__((visibility("default"))) int pixScaleBySamplingToSize(void) {
    ALOGD("pixScaleBySamplingToSize() called");
    return 0;
}

/* Demangled: pixWriteTiff */
extern "C" __attribute__((visibility("default"))) int pixWriteTiff(void) {
    ALOGD("pixWriteTiff() called");
    return 0;
}

/* Demangled: pixCleanupByteProcessing */
extern "C" __attribute__((visibility("default"))) int pixCleanupByteProcessing(void) {
    ALOGD("pixCleanupByteProcessing() called");
    return 0;
}

/* Demangled: boxGetSideLocations */
extern "C" __attribute__((visibility("default"))) int boxGetSideLocations(void) {
    ALOGD("boxGetSideLocations() called");
    return 0;
}

/* Demangled: pixMedianCutQuantGeneral */
extern "C" __attribute__((visibility("default"))) int pixMedianCutQuantGeneral(void) {
    ALOGD("pixMedianCutQuantGeneral() called");
    return 0;
}

/* Demangled: rasteropLow */
extern "C" __attribute__((visibility("default"))) int rasteropLow(void) {
    ALOGD("rasteropLow() called");
    return 0;
}

/* Demangled: boxaEncapsulateAligned */
extern "C" __attribute__((visibility("default"))) int boxaEncapsulateAligned(void) {
    ALOGD("boxaEncapsulateAligned() called");
    return 0;
}

/* Demangled: l_byteaWriteStream */
extern "C" __attribute__((visibility("default"))) int l_byteaWriteStream(void) {
    ALOGD("l_byteaWriteStream() called");
    return 0;
}

/* Demangled: numaGetBinnedMedian */
extern "C" __attribute__((visibility("default"))) int numaGetBinnedMedian(void) {
    ALOGD("numaGetBinnedMedian() called");
    return 0;
}

/* Demangled: l_CIDataDestroy */
extern "C" __attribute__((visibility("default"))) int l_CIDataDestroy(void) {
    ALOGD("l_CIDataDestroy() called");
    return 0;
}

/* Demangled: getLogBase2 */
extern "C" __attribute__((visibility("default"))) int getLogBase2(void) {
    ALOGD("getLogBase2() called");
    return 0;
}

/* Demangled: splitStringToParagraphs */
extern "C" __attribute__((visibility("default"))) int splitStringToParagraphs(void) {
    ALOGD("splitStringToParagraphs() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Pix_nativeClone */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Pix_nativeClone(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Pix_nativeClone() called");
    return 0;
}

/* Demangled: sarrayRemoveDupsByAset */
extern "C" __attribute__((visibility("default"))) int sarrayRemoveDupsByAset(void) {
    ALOGD("sarrayRemoveDupsByAset() called");
    return 0;
}

/* Demangled: selRead */
extern "C" __attribute__((visibility("default"))) int selRead(void) {
    ALOGD("selRead() called");
    return 0;
}

/* Demangled: pixMakeRangeMaskSV */
extern "C" __attribute__((visibility("default"))) int pixMakeRangeMaskSV(void) {
    ALOGD("pixMakeRangeMaskSV() called");
    return 0;
}

/* Demangled: pixShiftAndTransferAlpha */
extern "C" __attribute__((visibility("default"))) int pixShiftAndTransferAlpha(void) {
    ALOGD("pixShiftAndTransferAlpha() called");
    return 0;
}

/* Demangled: pixaWriteStreamInfo */
extern "C" __attribute__((visibility("default"))) int pixaWriteStreamInfo(void) {
    ALOGD("pixaWriteStreamInfo() called");
    return 0;
}

/* Demangled: pixLocToColorTransform */
extern "C" __attribute__((visibility("default"))) int pixLocToColorTransform(void) {
    ALOGD("pixLocToColorTransform() called");
    return 0;
}

/* Demangled: ioFormatTest */
extern "C" __attribute__((visibility("default"))) int ioFormatTest(void) {
    ALOGD("ioFormatTest() called");
    return 0;
}

/* Demangled: numaSetValue */
extern "C" __attribute__((visibility("default"))) int numaSetValue(void) {
    ALOGD("numaSetValue() called");
    return 0;
}

/* Demangled: fpixaConvertLABToXYZ */
extern "C" __attribute__((visibility("default"))) int fpixaConvertLABToXYZ(void) {
    ALOGD("fpixaConvertLABToXYZ() called");
    return 0;
}

/* Demangled: ptraGetActualCount */
extern "C" __attribute__((visibility("default"))) int ptraGetActualCount(void) {
    ALOGD("ptraGetActualCount() called");
    return 0;
}

/* Demangled: pixaaWriteStream */
extern "C" __attribute__((visibility("default"))) int pixaaWriteStream(void) {
    ALOGD("pixaaWriteStream() called");
    return 0;
}

/* Demangled: pixAddAlphaTo1bpp */
extern "C" __attribute__((visibility("default"))) int pixAddAlphaTo1bpp(void) {
    ALOGD("pixAddAlphaTo1bpp() called");
    return 0;
}

/* Demangled: lept_rmfile */
extern "C" __attribute__((visibility("default"))) int lept_rmfile(void) {
    ALOGD("lept_rmfile() called");
    return 0;
}

/* Demangled: pixcompCreateFromString */
extern "C" __attribute__((visibility("default"))) int pixcompCreateFromString(void) {
    ALOGD("pixcompCreateFromString() called");
    return 0;
}

/* Demangled: pixcmapWriteMem */
extern "C" __attribute__((visibility("default"))) int pixcmapWriteMem(void) {
    ALOGD("pixcmapWriteMem() called");
    return 0;
}

/* Demangled: ptaSortByIndex */
extern "C" __attribute__((visibility("default"))) int ptaSortByIndex(void) {
    ALOGD("ptaSortByIndex() called");
    return 0;
}

/* Demangled: l_dnaRemoveDupsByAset */
extern "C" __attribute__((visibility("default"))) int l_dnaRemoveDupsByAset(void) {
    ALOGD("l_dnaRemoveDupsByAset() called");
    return 0;
}

/* Demangled: selectComposableSels */
extern "C" __attribute__((visibility("default"))) int selectComposableSels(void) {
    ALOGD("selectComposableSels() called");
    return 0;
}

/* Demangled: numaCrossingsByThreshold */
extern "C" __attribute__((visibility("default"))) int numaCrossingsByThreshold(void) {
    ALOGD("numaCrossingsByThreshold() called");
    return 0;
}

/* Demangled: pixConvertToSubpixelRGB */
extern "C" __attribute__((visibility("default"))) int pixConvertToSubpixelRGB(void) {
    ALOGD("pixConvertToSubpixelRGB() called");
    return 0;
}

/* Demangled: numaQuantizeCrossingsByWindow */
extern "C" __attribute__((visibility("default"))) int numaQuantizeCrossingsByWindow(void) {
    ALOGD("numaQuantizeCrossingsByWindow() called");
    return 0;
}

/* Demangled: pixFindMaxVerticalRunOnLine */
extern "C" __attribute__((visibility("default"))) int pixFindMaxVerticalRunOnLine(void) {
    ALOGD("pixFindMaxVerticalRunOnLine() called");
    return 0;
}

/* Demangled: seedfillGrayInvLowSimple */
extern "C" __attribute__((visibility("default"))) int seedfillGrayInvLowSimple(void) {
    ALOGD("seedfillGrayInvLowSimple() called");
    return 0;
}

/* Demangled: pixWriteImpliedFormat */
extern "C" __attribute__((visibility("default"))) int pixWriteImpliedFormat(void) {
    ALOGD("pixWriteImpliedFormat() called");
    return 0;
}

/* Demangled: gaussjordan */
extern "C" __attribute__((visibility("default"))) int gaussjordan(void) {
    ALOGD("gaussjordan() called");
    return 0;
}

/* Demangled: gplotSimple1 */
extern "C" __attribute__((visibility("default"))) int gplotSimple1(void) {
    ALOGD("gplotSimple1() called");
    return 0;
}

/* Demangled: pixContrastTRCMasked */
extern "C" __attribute__((visibility("default"))) int pixContrastTRCMasked(void) {
    ALOGD("pixContrastTRCMasked() called");
    return 0;
}

/* Demangled: pixMorphSequenceMasked */
extern "C" __attribute__((visibility("default"))) int pixMorphSequenceMasked(void) {
    ALOGD("pixMorphSequenceMasked() called");
    return 0;
}

/* Demangled: pixacompReplacePixcomp */
extern "C" __attribute__((visibility("default"))) int pixacompReplacePixcomp(void) {
    ALOGD("pixacompReplacePixcomp() called");
    return 0;
}

/* Demangled: recogaShowContent */
extern "C" __attribute__((visibility("default"))) int recogaShowContent(void) {
    ALOGD("recogaShowContent() called");
    return 0;
}

/* Demangled: l_byteaAppendData */
extern "C" __attribute__((visibility("default"))) int l_byteaAppendData(void) {
    ALOGD("l_byteaAppendData() called");
    return 0;
}

/* Demangled: jbWordsInTextlines */
extern "C" __attribute__((visibility("default"))) int jbWordsInTextlines(void) {
    ALOGD("jbWordsInTextlines() called");
    return 0;
}

/* Demangled: pixGetRGBHistogram */
extern "C" __attribute__((visibility("default"))) int pixGetRGBHistogram(void) {
    ALOGD("pixGetRGBHistogram() called");
    return 0;
}

/* Demangled: convertRGBToXYZ */
extern "C" __attribute__((visibility("default"))) int convertRGBToXYZ(void) {
    ALOGD("convertRGBToXYZ() called");
    return 0;
}

/* Demangled: gplotSimple2 */
extern "C" __attribute__((visibility("default"))) int gplotSimple2(void) {
    ALOGD("gplotSimple2() called");
    return 0;
}

/* Demangled: l_dnaaGetDna */
extern "C" __attribute__((visibility("default"))) int l_dnaaGetDna(void) {
    ALOGD("l_dnaaGetDna() called");
    return 0;
}

/* Demangled: numaGetIValue */
extern "C" __attribute__((visibility("default"))) int numaGetIValue(void) {
    ALOGD("numaGetIValue() called");
    return 0;
}

/* Demangled: pixColorMorphSequence */
extern "C" __attribute__((visibility("default"))) int pixColorMorphSequence(void) {
    ALOGD("pixColorMorphSequence() called");
    return 0;
}

/* Demangled: pixRasteropFullImage */
extern "C" __attribute__((visibility("default"))) int pixRasteropFullImage(void) {
    ALOGD("pixRasteropFullImage() called");
    return 0;
}

/* Demangled: dewarpaInsertDewarp */
extern "C" __attribute__((visibility("default"))) int dewarpaInsertDewarp(void) {
    ALOGD("dewarpaInsertDewarp() called");
    return 0;
}

/* Demangled: pixCloseCompBrickDwa */
extern "C" __attribute__((visibility("default"))) int pixCloseCompBrickDwa(void) {
    ALOGD("pixCloseCompBrickDwa() called");
    return 0;
}

/* Demangled: selaGetBrickName */
extern "C" __attribute__((visibility("default"))) int selaGetBrickName(void) {
    ALOGD("selaGetBrickName() called");
    return 0;
}

/* Demangled: pixcmapGetIndex */
extern "C" __attribute__((visibility("default"))) int pixcmapGetIndex(void) {
    ALOGD("pixcmapGetIndex() called");
    return 0;
}

/* Demangled: jbDataRender */
extern "C" __attribute__((visibility("default"))) int jbDataRender(void) {
    ALOGD("jbDataRender() called");
    return 0;
}

/* Demangled: pixDisplayPtaPattern */
extern "C" __attribute__((visibility("default"))) int pixDisplayPtaPattern(void) {
    ALOGD("pixDisplayPtaPattern() called");
    return 0;
}

/* Demangled: lheapSwapUp */
extern "C" __attribute__((visibility("default"))) int lheapSwapUp(void) {
    ALOGD("lheapSwapUp() called");
    return 0;
}

/* Demangled: pixRankHaustest */
extern "C" __attribute__((visibility("default"))) int pixRankHaustest(void) {
    ALOGD("pixRankHaustest() called");
    return 0;
}

/* Demangled: pixDilateCompBrick */
extern "C" __attribute__((visibility("default"))) int pixDilateCompBrick(void) {
    ALOGD("pixDilateCompBrick() called");
    return 0;
}

/* Demangled: numaSelectCrossingThreshold */
extern "C" __attribute__((visibility("default"))) int numaSelectCrossingThreshold(void) {
    ALOGD("numaSelectCrossingThreshold() called");
    return 0;
}

/* Demangled: pixProjectiveSampled */
extern "C" __attribute__((visibility("default"))) int pixProjectiveSampled(void) {
    ALOGD("pixProjectiveSampled() called");
    return 0;
}

/* Demangled: applyQuarticFit */
extern "C" __attribute__((visibility("default"))) int applyQuarticFit(void) {
    ALOGD("applyQuarticFit() called");
    return 0;
}

/* Demangled: pixFindSkewAndDeskew */
extern "C" __attribute__((visibility("default"))) int pixFindSkewAndDeskew(void) {
    ALOGD("pixFindSkewAndDeskew() called");
    return 0;
}

/* Demangled: pixSetPixel */
extern "C" __attribute__((visibility("default"))) int pixSetPixel(void) {
    ALOGD("pixSetPixel() called");
    return 0;
}

/* Demangled: pixCompareGrayOrRGB */
extern "C" __attribute__((visibility("default"))) int pixCompareGrayOrRGB(void) {
    ALOGD("pixCompareGrayOrRGB() called");
    return 0;
}

/* Demangled: ptaGetArrays */
extern "C" __attribute__((visibility("default"))) int ptaGetArrays(void) {
    ALOGD("ptaGetArrays() called");
    return 0;
}

/* Demangled: fpixGetResolution */
extern "C" __attribute__((visibility("default"))) int fpixGetResolution(void) {
    ALOGD("fpixGetResolution() called");
    return 0;
}

/* Demangled: kernelDisplayInPix */
extern "C" __attribute__((visibility("default"))) int kernelDisplayInPix(void) {
    ALOGD("kernelDisplayInPix() called");
    return 0;
}

/* Demangled: numaClose */
extern "C" __attribute__((visibility("default"))) int numaClose(void) {
    ALOGD("numaClose() called");
    return 0;
}

/* Demangled: pixCopyResolution */
extern "C" __attribute__((visibility("default"))) int pixCopyResolution(void) {
    ALOGD("pixCopyResolution() called");
    return 0;
}

/* Demangled: genPathname */
extern "C" __attribute__((visibility("default"))) int genPathname(void) {
    ALOGD("genPathname() called");
    return 0;
}

/* Demangled: selaAddBasic */
extern "C" __attribute__((visibility("default"))) int selaAddBasic(void) {
    ALOGD("selaAddBasic() called");
    return 0;
}

/* Demangled: pixRasterop */
extern "C" __attribute__((visibility("default"))) int pixRasterop(void) {
    ALOGD("pixRasterop() called");
    return 0;
}

/* Demangled: pathJoin */
extern "C" __attribute__((visibility("default"))) int pathJoin(void) {
    ALOGD("pathJoin() called");
    return 0;
}

/* Demangled: pixCountPixelsByRow */
extern "C" __attribute__((visibility("default"))) int pixCountPixelsByRow(void) {
    ALOGD("pixCountPixelsByRow() called");
    return 0;
}

/* Demangled: dewarpSinglePage */
extern "C" __attribute__((visibility("default"))) int dewarpSinglePage(void) {
    ALOGD("dewarpSinglePage() called");
    return 0;
}

/* Demangled: l_dnaGetIArray */
extern "C" __attribute__((visibility("default"))) int l_dnaGetIArray(void) {
    ALOGD("l_dnaGetIArray() called");
    return 0;
}

/* Demangled: pixRenderHashBox */
extern "C" __attribute__((visibility("default"))) int pixRenderHashBox(void) {
    ALOGD("pixRenderHashBox() called");
    return 0;
}

/* Demangled: pixOctreeColorQuant */
extern "C" __attribute__((visibility("default"))) int pixOctreeColorQuant(void) {
    ALOGD("pixOctreeColorQuant() called");
    return 0;
}

/* Demangled: numaaGetValue */
extern "C" __attribute__((visibility("default"))) int numaaGetValue(void) {
    ALOGD("numaaGetValue() called");
    return 0;
}

/* Demangled: pixRankColumnTransform */
extern "C" __attribute__((visibility("default"))) int pixRankColumnTransform(void) {
    ALOGD("pixRankColumnTransform() called");
    return 0;
}

/* Demangled: fpixaCreate */
extern "C" __attribute__((visibility("default"))) int fpixaCreate(void) {
    ALOGD("fpixaCreate() called");
    return 0;
}

/* Demangled: dpixGetWpl */
extern "C" __attribute__((visibility("default"))) int dpixGetWpl(void) {
    ALOGD("dpixGetWpl() called");
    return 0;
}

/* Demangled: selaGetSel */
extern "C" __attribute__((visibility("default"))) int selaGetSel(void) {
    ALOGD("selaGetSel() called");
    return 0;
}

/* Demangled: pixSeedfill4 */
extern "C" __attribute__((visibility("default"))) int pixSeedfill4(void) {
    ALOGD("pixSeedfill4() called");
    return 0;
}

/* Demangled: pixGetGrayHistogram */
extern "C" __attribute__((visibility("default"))) int pixGetGrayHistogram(void) {
    ALOGD("pixGetGrayHistogram() called");
    return 0;
}

/* Demangled: pixWriteStreamGif */
extern "C" __attribute__((visibility("default"))) int pixWriteStreamGif(void) {
    ALOGD("pixWriteStreamGif() called");
    return 0;
}

/* Demangled: generatePtaBoxa */
extern "C" __attribute__((visibility("default"))) int generatePtaBoxa(void) {
    ALOGD("generatePtaBoxa() called");
    return 0;
}

/* Demangled: lqueueAdd */
extern "C" __attribute__((visibility("default"))) int lqueueAdd(void) {
    ALOGD("lqueueAdd() called");
    return 0;
}

/* Demangled: pixaaIsFull */
extern "C" __attribute__((visibility("default"))) int pixaaIsFull(void) {
    ALOGD("pixaaIsFull() called");
    return 0;
}

/* Demangled: l_chooseDisplayProg */
extern "C" __attribute__((visibility("default"))) int l_chooseDisplayProg(void) {
    ALOGD("l_chooseDisplayProg() called");
    return 0;
}

/* Demangled: composeRGBPixel */
extern "C" __attribute__((visibility("default"))) int composeRGBPixel(void) {
    ALOGD("composeRGBPixel() called");
    return 0;
}

/* Demangled: boxaaJoin */
extern "C" __attribute__((visibility("default"))) int boxaaJoin(void) {
    ALOGD("boxaaJoin() called");
    return 0;
}

/* Demangled: pixMedianCutQuantMixed */
extern "C" __attribute__((visibility("default"))) int pixMedianCutQuantMixed(void) {
    ALOGD("pixMedianCutQuantMixed() called");
    return 0;
}

/* Demangled: pixDecideIfText */
extern "C" __attribute__((visibility("default"))) int pixDecideIfText(void) {
    ALOGD("pixDecideIfText() called");
    return 0;
}

/* Demangled: dpixDestroy */
extern "C" __attribute__((visibility("default"))) int dpixDestroy(void) {
    ALOGD("dpixDestroy() called");
    return 0;
}

/* Demangled: addColorizedGrayToCmap */
extern "C" __attribute__((visibility("default"))) int addColorizedGrayToCmap(void) {
    ALOGD("addColorizedGrayToCmap() called");
    return 0;
}

/* Demangled: pixEndianTwoByteSwapNew */
extern "C" __attribute__((visibility("default"))) int pixEndianTwoByteSwapNew(void) {
    ALOGD("pixEndianTwoByteSwapNew() called");
    return 0;
}

/* Demangled: pixacompGetPixDimensions */
extern "C" __attribute__((visibility("default"))) int pixacompGetPixDimensions(void) {
    ALOGD("pixacompGetPixDimensions() called");
    return 0;
}

/* Demangled: selaAddTJunctions */
extern "C" __attribute__((visibility("default"))) int selaAddTJunctions(void) {
    ALOGD("selaAddTJunctions() called");
    return 0;
}

/* Demangled: pixSeedfill8 */
extern "C" __attribute__((visibility("default"))) int pixSeedfill8(void) {
    ALOGD("pixSeedfill8() called");
    return 0;
}

/* Demangled: gplotGenDataFiles */
extern "C" __attribute__((visibility("default"))) int gplotGenDataFiles(void) {
    ALOGD("gplotGenDataFiles() called");
    return 0;
}

/* Demangled: quadtreeGetParent */
extern "C" __attribute__((visibility("default"))) int quadtreeGetParent(void) {
    ALOGD("quadtreeGetParent() called");
    return 0;
}

/* Demangled: l_dnaCreateFromIArray */
extern "C" __attribute__((visibility("default"))) int l_dnaCreateFromIArray(void) {
    ALOGD("l_dnaCreateFromIArray() called");
    return 0;
}

/* Demangled: numaIsSorted */
extern "C" __attribute__((visibility("default"))) int numaIsSorted(void) {
    ALOGD("numaIsSorted() called");
    return 0;
}

/* Demangled: __aeabi_ul2d */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_ul2d(void) __asm__("__aeabi_ul2d");
int fn___aeabi_ul2d(void) {
    ALOGD("__aeabi_ul2d() called");
    return 0;
}

/* Demangled: pixaGetLinePtrs */
extern "C" __attribute__((visibility("default"))) int pixaGetLinePtrs(void) {
    ALOGD("pixaGetLinePtrs() called");
    return 0;
}

/* Demangled: dewarpaWrite */
extern "C" __attribute__((visibility("default"))) int dewarpaWrite(void) {
    ALOGD("dewarpaWrite() called");
    return 0;
}

/* Demangled: thresholdToBinaryLineLow */
extern "C" __attribute__((visibility("default"))) int thresholdToBinaryLineLow(void) {
    ALOGD("thresholdToBinaryLineLow() called");
    return 0;
}

/* Demangled: l_asetSize */
extern "C" __attribute__((visibility("default"))) int l_asetSize(void) {
    ALOGD("l_asetSize() called");
    return 0;
}

/* Demangled: recogaWriteStream */
extern "C" __attribute__((visibility("default"))) int recogaWriteStream(void) {
    ALOGD("recogaWriteStream() called");
    return 0;
}

/* Demangled: __aeabi_uidiv */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_uidiv(void) __asm__("__aeabi_uidiv");
int fn___aeabi_uidiv(void) {
    ALOGD("__aeabi_uidiv() called");
    return 0;
}

/* Demangled: boxChangeRefcount */
extern "C" __attribute__((visibility("default"))) int boxChangeRefcount(void) {
    ALOGD("boxChangeRefcount() called");
    return 0;
}

/* Demangled: pixDisplayWithTitle */
extern "C" __attribute__((visibility("default"))) int pixDisplayWithTitle(void) {
    ALOGD("pixDisplayWithTitle() called");
    return 0;
}

/* Demangled: ptraCompactArray */
extern "C" __attribute__((visibility("default"))) int ptraCompactArray(void) {
    ALOGD("ptraCompactArray() called");
    return 0;
}

/* Demangled: pixaInitFull */
extern "C" __attribute__((visibility("default"))) int pixaInitFull(void) {
    ALOGD("pixaInitFull() called");
    return 0;
}

/* Demangled: boxaGetMedianVals */
extern "C" __attribute__((visibility("default"))) int boxaGetMedianVals(void) {
    ALOGD("boxaGetMedianVals() called");
    return 0;
}

/* Demangled: pixPrintStreamInfo */
extern "C" __attribute__((visibility("default"))) int pixPrintStreamInfo(void) {
    ALOGD("pixPrintStreamInfo() called");
    return 0;
}

/* Demangled: readHeaderTiff */
extern "C" __attribute__((visibility("default"))) int readHeaderTiff(void) {
    ALOGD("readHeaderTiff() called");
    return 0;
}

/* Demangled: recogStringToIndex */
extern "C" __attribute__((visibility("default"))) int recogStringToIndex(void) {
    ALOGD("recogStringToIndex() called");
    return 0;
}

/* Demangled: makeMSBitLocTab */
extern "C" __attribute__((visibility("default"))) int makeMSBitLocTab(void) {
    ALOGD("makeMSBitLocTab() called");
    return 0;
}

/* Demangled: pixGetOuterBorderPta */
extern "C" __attribute__((visibility("default"))) int pixGetOuterBorderPta(void) {
    ALOGD("pixGetOuterBorderPta() called");
    return 0;
}

/* Demangled: lstackGetCount */
extern "C" __attribute__((visibility("default"))) int lstackGetCount(void) {
    ALOGD("lstackGetCount() called");
    return 0;
}

/* Demangled: pixTestClipToForeground */
extern "C" __attribute__((visibility("default"))) int pixTestClipToForeground(void) {
    ALOGD("pixTestClipToForeground() called");
    return 0;
}

/* Demangled: convertG4ToPSEmbed */
extern "C" __attribute__((visibility("default"))) int convertG4ToPSEmbed(void) {
    ALOGD("convertG4ToPSEmbed() called");
    return 0;
}

/* Demangled: lept_rm */
extern "C" __attribute__((visibility("default"))) int lept_rm(void) {
    ALOGD("lept_rm() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Pix_nativeGetDepth */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Pix_nativeGetDepth(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Pix_nativeGetDepth() called");
    return 0;
}

/* Demangled: l_dnaHashDestroy */
extern "C" __attribute__((visibility("default"))) int l_dnaHashDestroy(void) {
    ALOGD("l_dnaHashDestroy() called");
    return 0;
}

/* Demangled: pixaaGetCount */
extern "C" __attribute__((visibility("default"))) int pixaaGetCount(void) {
    ALOGD("pixaaGetCount() called");
    return 0;
}

/* Demangled: pixacompSetOffset */
extern "C" __attribute__((visibility("default"))) int pixacompSetOffset(void) {
    ALOGD("pixacompSetOffset() called");
    return 0;
}

/* Demangled: pixSeedfillGrayBasin */
extern "C" __attribute__((visibility("default"))) int pixSeedfillGrayBasin(void) {
    ALOGD("pixSeedfillGrayBasin() called");
    return 0;
}

/* Demangled: pixSetChromaSampling */
extern "C" __attribute__((visibility("default"))) int pixSetChromaSampling(void) {
    ALOGD("pixSetChromaSampling() called");
    return 0;
}

/* Demangled: pixUnsharpMasking */
extern "C" __attribute__((visibility("default"))) int pixUnsharpMasking(void) {
    ALOGD("pixUnsharpMasking() called");
    return 0;
}

/* Demangled: boxaaGetBox */
extern "C" __attribute__((visibility("default"))) int boxaaGetBox(void) {
    ALOGD("boxaaGetBox() called");
    return 0;
}

/* Demangled: numaInterpolateArbxVal */
extern "C" __attribute__((visibility("default"))) int numaInterpolateArbxVal(void) {
    ALOGD("numaInterpolateArbxVal() called");
    return 0;
}

/* Demangled: pixaSetBoxa */
extern "C" __attribute__((visibility("default"))) int pixaSetBoxa(void) {
    ALOGD("pixaSetBoxa() called");
    return 0;
}

/* Demangled: ptraaCreate */
extern "C" __attribute__((visibility("default"))) int ptraaCreate(void) {
    ALOGD("ptraaCreate() called");
    return 0;
}

/* Demangled: pixRotateShearIP */
extern "C" __attribute__((visibility("default"))) int pixRotateShearIP(void) {
    ALOGD("pixRotateShearIP() called");
    return 0;
}

/* Demangled: pixScaleGrayMinMax2 */
extern "C" __attribute__((visibility("default"))) int pixScaleGrayMinMax2(void) {
    ALOGD("pixScaleGrayMinMax2() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Pixa_nativeGetBox */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Pixa_nativeGetBox(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Pixa_nativeGetBox() called");
    return 0;
}

/* Demangled: pixSobelEdgeFilter */
extern "C" __attribute__((visibility("default"))) int pixSobelEdgeFilter(void) {
    ALOGD("pixSobelEdgeFilter() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_ReadFile_nativeReadMem */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_ReadFile_nativeReadMem(void) {
    ALOGD("Java_com_googlecode_leptonica_android_ReadFile_nativeReadMem() called");
    return 0;
}

/* Demangled: pixBlendGray */
extern "C" __attribute__((visibility("default"))) int pixBlendGray(void) {
    ALOGD("pixBlendGray() called");
    return 0;
}

/* Demangled: pixBlendHardLight */
extern "C" __attribute__((visibility("default"))) int pixBlendHardLight(void) {
    ALOGD("pixBlendHardLight() called");
    return 0;
}

/* Demangled: pixBlendWithGrayMask */
extern "C" __attribute__((visibility("default"))) int pixBlendWithGrayMask(void) {
    ALOGD("pixBlendWithGrayMask() called");
    return 0;
}

/* Demangled: jbRankHausInit */
extern "C" __attribute__((visibility("default"))) int jbRankHausInit(void) {
    ALOGD("jbRankHausInit() called");
    return 0;
}

/* Demangled: pixWindowedStats */
extern "C" __attribute__((visibility("default"))) int pixWindowedStats(void) {
    ALOGD("pixWindowedStats() called");
    return 0;
}

/* Demangled: pixOpenCompBrickExtendDwa */
extern "C" __attribute__((visibility("default"))) int pixOpenCompBrickExtendDwa(void) {
    ALOGD("pixOpenCompBrickExtendDwa() called");
    return 0;
}

/* Demangled: pixaaCreateFromPixa */
extern "C" __attribute__((visibility("default"))) int pixaaCreateFromPixa(void) {
    ALOGD("pixaaCreateFromPixa() called");
    return 0;
}

/* Demangled: pixQuantizeIfFewColors */
extern "C" __attribute__((visibility("default"))) int pixQuantizeIfFewColors(void) {
    ALOGD("pixQuantizeIfFewColors() called");
    return 0;
}

/* Demangled: fpixaConvertXYZToLAB */
extern "C" __attribute__((visibility("default"))) int fpixaConvertXYZToLAB(void) {
    ALOGD("fpixaConvertXYZToLAB() called");
    return 0;
}

/* Demangled: l_dnaDiffAdjValues */
extern "C" __attribute__((visibility("default"))) int l_dnaDiffAdjValues(void) {
    ALOGD("l_dnaDiffAdjValues() called");
    return 0;
}

/* Demangled: gplotSimpleN */
extern "C" __attribute__((visibility("default"))) int gplotSimpleN(void) {
    ALOGD("gplotSimpleN() called");
    return 0;
}

/* Demangled: pixErodeCompBrickDwa */
extern "C" __attribute__((visibility("default"))) int pixErodeCompBrickDwa(void) {
    ALOGD("pixErodeCompBrickDwa() called");
    return 0;
}

/* Demangled: pixPlotAlongPta */
extern "C" __attribute__((visibility("default"))) int pixPlotAlongPta(void) {
    ALOGD("pixPlotAlongPta() called");
    return 0;
}

/* Demangled: pixCreateRGBImage */
extern "C" __attribute__((visibility("default"))) int pixCreateRGBImage(void) {
    ALOGD("pixCreateRGBImage() called");
    return 0;
}

/* Demangled: l_binaryWrite */
extern "C" __attribute__((visibility("default"))) int l_binaryWrite(void) {
    ALOGD("l_binaryWrite() called");
    return 0;
}

/* Demangled: dpixGetPixel */
extern "C" __attribute__((visibility("default"))) int dpixGetPixel(void) {
    ALOGD("dpixGetPixel() called");
    return 0;
}

/* Demangled: pixaRemovePixAndSave */
extern "C" __attribute__((visibility("default"))) int pixaRemovePixAndSave(void) {
    ALOGD("pixaRemovePixAndSave() called");
    return 0;
}

/* Demangled: getResLetterPage */
extern "C" __attribute__((visibility("default"))) int getResLetterPage(void) {
    ALOGD("getResLetterPage() called");
    return 0;
}

/* Demangled: pixTranslate */
extern "C" __attribute__((visibility("default"))) int pixTranslate(void) {
    ALOGD("pixTranslate() called");
    return 0;
}

/* Demangled: l_asetGetFirst */
extern "C" __attribute__((visibility("default"))) int l_asetGetFirst(void) {
    ALOGD("l_asetGetFirst() called");
    return 0;
}

/* Demangled: freadHeaderPng */
extern "C" __attribute__((visibility("default"))) int freadHeaderPng(void) {
    ALOGD("freadHeaderPng() called");
    return 0;
}

/* Demangled: pmsCreate */
extern "C" __attribute__((visibility("default"))) int pmsCreate(void) {
    ALOGD("pmsCreate() called");
    return 0;
}

/* Demangled: affineXformPt */
extern "C" __attribute__((visibility("default"))) int affineXformPt(void) {
    ALOGD("affineXformPt() called");
    return 0;
}

/* Demangled: pixWordBoxesByDilation */
extern "C" __attribute__((visibility("default"))) int pixWordBoxesByDilation(void) {
    ALOGD("pixWordBoxesByDilation() called");
    return 0;
}

/* Demangled: pixNumSignificantGrayColors */
extern "C" __attribute__((visibility("default"))) int pixNumSignificantGrayColors(void) {
    ALOGD("pixNumSignificantGrayColors() called");
    return 0;
}

/* Demangled: pixDisplayPtaa */
extern "C" __attribute__((visibility("default"))) int pixDisplayPtaa(void) {
    ALOGD("pixDisplayPtaa() called");
    return 0;
}

/* Demangled: pixGenerateMaskByDiscr32 */
extern "C" __attribute__((visibility("default"))) int pixGenerateMaskByDiscr32(void) {
    ALOGD("pixGenerateMaskByDiscr32() called");
    return 0;
}

/* Demangled: pixThresholdPixelSum */
extern "C" __attribute__((visibility("default"))) int pixThresholdPixelSum(void) {
    ALOGD("pixThresholdPixelSum() called");
    return 0;
}

/* Demangled: pixGenerateHalftoneMask */
extern "C" __attribute__((visibility("default"))) int pixGenerateHalftoneMask(void) {
    ALOGD("pixGenerateHalftoneMask() called");
    return 0;
}

/* Demangled: pixaSelectByWidthHeightRatio */
extern "C" __attribute__((visibility("default"))) int pixaSelectByWidthHeightRatio(void) {
    ALOGD("pixaSelectByWidthHeightRatio() called");
    return 0;
}

/* Demangled: stringConcatNew */
extern "C" __attribute__((visibility("default"))) int stringConcatNew(void) {
    ALOGD("stringConcatNew() called");
    return 0;
}

/* Demangled: pixGetHeight */
extern "C" __attribute__((visibility("default"))) int pixGetHeight(void) {
    ALOGD("pixGetHeight() called");
    return 0;
}

/* Demangled: l_asetDestroy */
extern "C" __attribute__((visibility("default"))) int l_asetDestroy(void) {
    ALOGD("l_asetDestroy() called");
    return 0;
}

/* Demangled: fpixReadMem */
extern "C" __attribute__((visibility("default"))) int fpixReadMem(void) {
    ALOGD("fpixReadMem() called");
    return 0;
}

/* Demangled: numaFitMax */
extern "C" __attribute__((visibility("default"))) int numaFitMax(void) {
    ALOGD("numaFitMax() called");
    return 0;
}

/* Demangled: pixForegroundFraction */
extern "C" __attribute__((visibility("default"))) int pixForegroundFraction(void) {
    ALOGD("pixForegroundFraction() called");
    return 0;
}

/* Demangled: pixRotateAM */
extern "C" __attribute__((visibility("default"))) int pixRotateAM(void) {
    ALOGD("pixRotateAM() called");
    return 0;
}

/* Demangled: pixaSetStrokeWidth */
extern "C" __attribute__((visibility("default"))) int pixaSetStrokeWidth(void) {
    ALOGD("pixaSetStrokeWidth() called");
    return 0;
}

/* Demangled: numaGetMax */
extern "C" __attribute__((visibility("default"))) int numaGetMax(void) {
    ALOGD("numaGetMax() called");
    return 0;
}

/* Demangled: pixReadJpeg */
extern "C" __attribute__((visibility("default"))) int pixReadJpeg(void) {
    ALOGD("pixReadJpeg() called");
    return 0;
}

/* Demangled: pixcmapResetColor */
extern "C" __attribute__((visibility("default"))) int pixcmapResetColor(void) {
    ALOGD("pixcmapResetColor() called");
    return 0;
}

/* Demangled: fpixaChangeRefcount */
extern "C" __attribute__((visibility("default"))) int fpixaChangeRefcount(void) {
    ALOGD("fpixaChangeRefcount() called");
    return 0;
}

/* Demangled: numaChooseSortType */
extern "C" __attribute__((visibility("default"))) int numaChooseSortType(void) {
    ALOGD("numaChooseSortType() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Pix_nativeCreateFromData */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Pix_nativeCreateFromData(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Pix_nativeCreateFromData() called");
    return 0;
}

/* Demangled: l_setDataByte */
extern "C" __attribute__((visibility("default"))) int l_setDataByte(void) {
    ALOGD("l_setDataByte() called");
    return 0;
}

/* Demangled: pixcmapCreateLinear */
extern "C" __attribute__((visibility("default"))) int pixcmapCreateLinear(void) {
    ALOGD("pixcmapCreateLinear() called");
    return 0;
}

/* Demangled: jbTemplatesFromComposites */
extern "C" __attribute__((visibility("default"))) int jbTemplatesFromComposites(void) {
    ALOGD("jbTemplatesFromComposites() called");
    return 0;
}

/* Demangled: pixAbsDiffOnLine */
extern "C" __attribute__((visibility("default"))) int pixAbsDiffOnLine(void) {
    ALOGD("pixAbsDiffOnLine() called");
    return 0;
}

/* Demangled: findFileFormat */
extern "C" __attribute__((visibility("default"))) int findFileFormat(void) {
    ALOGD("findFileFormat() called");
    return 0;
}

/* Demangled: pixReadStreamPng */
extern "C" __attribute__((visibility("default"))) int pixReadStreamPng(void) {
    ALOGD("pixReadStreamPng() called");
    return 0;
}

/* Demangled: freadHeaderPnm */
extern "C" __attribute__((visibility("default"))) int freadHeaderPnm(void) {
    ALOGD("freadHeaderPnm() called");
    return 0;
}

/* Demangled: wshedRenderFill */
extern "C" __attribute__((visibility("default"))) int wshedRenderFill(void) {
    ALOGD("wshedRenderFill() called");
    return 0;
}

/* Demangled: pixGetData */
extern "C" __attribute__((visibility("default"))) int pixGetData(void) {
    ALOGD("pixGetData() called");
    return 0;
}

/* Demangled: getAffineXformCoeffs */
extern "C" __attribute__((visibility("default"))) int getAffineXformCoeffs(void) {
    ALOGD("getAffineXformCoeffs() called");
    return 0;
}

/* Demangled: pixGetGrayHistogramMasked */
extern "C" __attribute__((visibility("default"))) int pixGetGrayHistogramMasked(void) {
    ALOGD("pixGetGrayHistogramMasked() called");
    return 0;
}

/* Demangled: pixRankFilter */
extern "C" __attribute__((visibility("default"))) int pixRankFilter(void) {
    ALOGD("pixRankFilter() called");
    return 0;
}

/* Demangled: convertOnBigEnd32 */
extern "C" __attribute__((visibility("default"))) int convertOnBigEnd32(void) {
    ALOGD("convertOnBigEnd32() called");
    return 0;
}

/* Demangled: pixUnpackBinary */
extern "C" __attribute__((visibility("default"))) int pixUnpackBinary(void) {
    ALOGD("pixUnpackBinary() called");
    return 0;
}

/* Demangled: pixGenHalftoneMask */
extern "C" __attribute__((visibility("default"))) int pixGenHalftoneMask(void) {
    ALOGD("pixGenHalftoneMask() called");
    return 0;
}

/* Demangled: findTiffCompression */
extern "C" __attribute__((visibility("default"))) int findTiffCompression(void) {
    ALOGD("findTiffCompression() called");
    return 0;
}

/* Demangled: numaGetNonzeroRange */
extern "C" __attribute__((visibility("default"))) int numaGetNonzeroRange(void) {
    ALOGD("numaGetNonzeroRange() called");
    return 0;
}

/* Demangled: lqueueCreate */
extern "C" __attribute__((visibility("default"))) int lqueueCreate(void) {
    ALOGD("lqueueCreate() called");
    return 0;
}

/* Demangled: pixAverageByColumn */
extern "C" __attribute__((visibility("default"))) int pixAverageByColumn(void) {
    ALOGD("pixAverageByColumn() called");
    return 0;
}

/* Demangled: pixaaAddPixa */
extern "C" __attribute__((visibility("default"))) int pixaaAddPixa(void) {
    ALOGD("pixaaAddPixa() called");
    return 0;
}

/* Demangled: numaHistogramGetRankFromVal */
extern "C" __attribute__((visibility("default"))) int numaHistogramGetRankFromVal(void) {
    ALOGD("numaHistogramGetRankFromVal() called");
    return 0;
}

/* Demangled: lineEndianByteSwap */
extern "C" __attribute__((visibility("default"))) int lineEndianByteSwap(void) {
    ALOGD("lineEndianByteSwap() called");
    return 0;
}

/* Demangled: pixaReadStream */
extern "C" __attribute__((visibility("default"))) int pixaReadStream(void) {
    ALOGD("pixaReadStream() called");
    return 0;
}

/* Demangled: pixWriteMemPS */
extern "C" __attribute__((visibility("default"))) int pixWriteMemPS(void) {
    ALOGD("pixWriteMemPS() called");
    return 0;
}

/* Demangled: recogaGetCount */
extern "C" __attribute__((visibility("default"))) int recogaGetCount(void) {
    ALOGD("recogaGetCount() called");
    return 0;
}

/* Demangled: l_setDataBitVal */
extern "C" __attribute__((visibility("default"))) int l_setDataBitVal(void) {
    ALOGD("l_setDataBitVal() called");
    return 0;
}

/* Demangled: l_dnaClone */
extern "C" __attribute__((visibility("default"))) int l_dnaClone(void) {
    ALOGD("l_dnaClone() called");
    return 0;
}

/* Demangled: sarrayRemoveString */
extern "C" __attribute__((visibility("default"))) int sarrayRemoveString(void) {
    ALOGD("sarrayRemoveString() called");
    return 0;
}

/* Demangled: pixAddMirroredBorder */
extern "C" __attribute__((visibility("default"))) int pixAddMirroredBorder(void) {
    ALOGD("pixAddMirroredBorder() called");
    return 0;
}

/* Demangled: pixSeedfillGray */
extern "C" __attribute__((visibility("default"))) int pixSeedfillGray(void) {
    ALOGD("pixSeedfillGray() called");
    return 0;
}

/* Demangled: pixReadStreamPnm */
extern "C" __attribute__((visibility("default"))) int pixReadStreamPnm(void) {
    ALOGD("pixReadStreamPnm() called");
    return 0;
}

/* Demangled: recogDecode */
extern "C" __attribute__((visibility("default"))) int recogDecode(void) {
    ALOGD("recogDecode() called");
    return 0;
}

/* Demangled: boxGetGeometry */
extern "C" __attribute__((visibility("default"))) int boxGetGeometry(void) {
    ALOGD("boxGetGeometry() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Pix_nativeGetData */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Pix_nativeGetData(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Pix_nativeGetData() called");
    return 0;
}

/* Demangled: numaRemoveBorder */
extern "C" __attribute__((visibility("default"))) int numaRemoveBorder(void) {
    ALOGD("numaRemoveBorder() called");
    return 0;
}

/* Demangled: getLeptonicaVersion */
extern "C" __attribute__((visibility("default"))) int getLeptonicaVersion(void) {
    ALOGD("getLeptonicaVersion() called");
    return 0;
}

/* Demangled: wshedRenderColors */
extern "C" __attribute__((visibility("default"))) int wshedRenderColors(void) {
    ALOGD("wshedRenderColors() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_memset4(void) __asm__("__aeabi_memset4");
int fn___aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: l_dnaRead */
extern "C" __attribute__((visibility("default"))) int l_dnaRead(void) {
    ALOGD("l_dnaRead() called");
    return 0;
}

/* Demangled: pixCloseSafe */
extern "C" __attribute__((visibility("default"))) int pixCloseSafe(void) {
    ALOGD("pixCloseSafe() called");
    return 0;
}

/* Demangled: boxaFindInvalidBoxes */
extern "C" __attribute__((visibility("default"))) int boxaFindInvalidBoxes(void) {
    ALOGD("boxaFindInvalidBoxes() called");
    return 0;
}

/* Demangled: dpixWriteMem */
extern "C" __attribute__((visibility("default"))) int dpixWriteMem(void) {
    ALOGD("dpixWriteMem() called");
    return 0;
}

/* Demangled: pixCropToSize */
extern "C" __attribute__((visibility("default"))) int pixCropToSize(void) {
    ALOGD("pixCropToSize() called");
    return 0;
}

/* Demangled: pixTilingGetSize */
extern "C" __attribute__((visibility("default"))) int pixTilingGetSize(void) {
    ALOGD("pixTilingGetSize() called");
    return 0;
}

/* Demangled: pixProcessBarcodes */
extern "C" __attribute__((visibility("default"))) int pixProcessBarcodes(void) {
    ALOGD("pixProcessBarcodes() called");
    return 0;
}

/* Demangled: recogaIdentifyPixa */
extern "C" __attribute__((visibility("default"))) int recogaIdentifyPixa(void) {
    ALOGD("recogaIdentifyPixa() called");
    return 0;
}

/* Demangled: boxaGetSizes */
extern "C" __attribute__((visibility("default"))) int boxaGetSizes(void) {
    ALOGD("boxaGetSizes() called");
    return 0;
}

/* Demangled: dewarpaReadStream */
extern "C" __attribute__((visibility("default"))) int dewarpaReadStream(void) {
    ALOGD("dewarpaReadStream() called");
    return 0;
}

/* Demangled: l_dnaMakeSequence */
extern "C" __attribute__((visibility("default"))) int l_dnaMakeSequence(void) {
    ALOGD("l_dnaMakeSequence() called");
    return 0;
}

/* Demangled: pixCreateFromPixcomp */
extern "C" __attribute__((visibility("default"))) int pixCreateFromPixcomp(void) {
    ALOGD("pixCreateFromPixcomp() called");
    return 0;
}

/* Demangled: pixSauvolaBinarizeTiled */
extern "C" __attribute__((visibility("default"))) int pixSauvolaBinarizeTiled(void) {
    ALOGD("pixSauvolaBinarizeTiled() called");
    return 0;
}

/* Demangled: pixEqualWithCmap */
extern "C" __attribute__((visibility("default"))) int pixEqualWithCmap(void) {
    ALOGD("pixEqualWithCmap() called");
    return 0;
}

/* Demangled: sarrayJoin */
extern "C" __attribute__((visibility("default"))) int sarrayJoin(void) {
    ALOGD("sarrayJoin() called");
    return 0;
}

/* Demangled: pixSetSpecial */
extern "C" __attribute__((visibility("default"))) int pixSetSpecial(void) {
    ALOGD("pixSetSpecial() called");
    return 0;
}

/* Demangled: l_rbtreeGetNext */
extern "C" __attribute__((visibility("default"))) int l_rbtreeGetNext(void) {
    ALOGD("l_rbtreeGetNext() called");
    return 0;
}

/* Demangled: numaGetMode */
extern "C" __attribute__((visibility("default"))) int numaGetMode(void) {
    ALOGD("numaGetMode() called");
    return 0;
}

/* Demangled: pixCountPixelsInRow */
extern "C" __attribute__((visibility("default"))) int pixCountPixelsInRow(void) {
    ALOGD("pixCountPixelsInRow() called");
    return 0;
}

/* Demangled: pixConvert32To8 */
extern "C" __attribute__((visibility("default"))) int pixConvert32To8(void) {
    ALOGD("pixConvert32To8() called");
    return 0;
}

/* Demangled: pixRotateAMColorCorner */
extern "C" __attribute__((visibility("default"))) int pixRotateAMColorCorner(void) {
    ALOGD("pixRotateAMColorCorner() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_memset8(void) __asm__("__aeabi_memset8");
int fn___aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: boxaConvertToPta */
extern "C" __attribute__((visibility("default"))) int boxaConvertToPta(void) {
    ALOGD("boxaConvertToPta() called");
    return 0;
}

/* Demangled: l_byteaCopy */
extern "C" __attribute__((visibility("default"))) int l_byteaCopy(void) {
    ALOGD("l_byteaCopy() called");
    return 0;
}

/* Demangled: pixMorphCompSequence */
extern "C" __attribute__((visibility("default"))) int pixMorphCompSequence(void) {
    ALOGD("pixMorphCompSequence() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_memclr4(void) __asm__("__aeabi_memclr4");
int fn___aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: pixFractionFgInMask */
extern "C" __attribute__((visibility("default"))) int pixFractionFgInMask(void) {
    ALOGD("pixFractionFgInMask() called");
    return 0;
}

/* Demangled: pixaScaleToSizeRel */
extern "C" __attribute__((visibility("default"))) int pixaScaleToSizeRel(void) {
    ALOGD("pixaScaleToSizeRel() called");
    return 0;
}

/* Demangled: pixRemoveColormap */
extern "C" __attribute__((visibility("default"))) int pixRemoveColormap(void) {
    ALOGD("pixRemoveColormap() called");
    return 0;
}

/* Demangled: kernelCopy */
extern "C" __attribute__((visibility("default"))) int kernelCopy(void) {
    ALOGD("kernelCopy() called");
    return 0;
}

/* Demangled: pixFillPolygon */
extern "C" __attribute__((visibility("default"))) int pixFillPolygon(void) {
    ALOGD("pixFillPolygon() called");
    return 0;
}

/* Demangled: numaaWriteMem */
extern "C" __attribute__((visibility("default"))) int numaaWriteMem(void) {
    ALOGD("numaaWriteMem() called");
    return 0;
}

/* Demangled: scaleGray2xLILow */
extern "C" __attribute__((visibility("default"))) int scaleGray2xLILow(void) {
    ALOGD("scaleGray2xLILow() called");
    return 0;
}

/* Demangled: pixaccMultConstAccumulate */
extern "C" __attribute__((visibility("default"))) int pixaccMultConstAccumulate(void) {
    ALOGD("pixaccMultConstAccumulate() called");
    return 0;
}

/* Demangled: dpixSetDimensions */
extern "C" __attribute__((visibility("default"))) int dpixSetDimensions(void) {
    ALOGD("dpixSetDimensions() called");
    return 0;
}

/* Demangled: recogProcessMultLabelled */
extern "C" __attribute__((visibility("default"))) int recogProcessMultLabelled(void) {
    ALOGD("recogProcessMultLabelled() called");
    return 0;
}

/* Demangled: scaleToGray6Low */
extern "C" __attribute__((visibility("default"))) int scaleToGray6Low(void) {
    ALOGD("scaleToGray6Low() called");
    return 0;
}

/* Demangled: setMsgSeverity */
extern "C" __attribute__((visibility("default"))) int setMsgSeverity(void) {
    ALOGD("setMsgSeverity() called");
    return 0;
}

/* Demangled: stringReverse */
extern "C" __attribute__((visibility("default"))) int stringReverse(void) {
    ALOGD("stringReverse() called");
    return 0;
}

/* Demangled: lept_mkdir */
extern "C" __attribute__((visibility("default"))) int lept_mkdir(void) {
    ALOGD("lept_mkdir() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_memclr8(void) __asm__("__aeabi_memclr8");
int fn___aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: numaInterpolateEqxInterval */
extern "C" __attribute__((visibility("default"))) int numaInterpolateEqxInterval(void) {
    ALOGD("numaInterpolateEqxInterval() called");
    return 0;
}

/* Demangled: sudokuCreate */
extern "C" __attribute__((visibility("default"))) int sudokuCreate(void) {
    ALOGD("sudokuCreate() called");
    return 0;
}

/* Demangled: boxaaSelectRange */
extern "C" __attribute__((visibility("default"))) int boxaaSelectRange(void) {
    ALOGD("boxaaSelectRange() called");
    return 0;
}

/* Demangled: lheapDestroy */
extern "C" __attribute__((visibility("default"))) int lheapDestroy(void) {
    ALOGD("lheapDestroy() called");
    return 0;
}

/* Demangled: l_dnaaGetCount */
extern "C" __attribute__((visibility("default"))) int l_dnaaGetCount(void) {
    ALOGD("l_dnaaGetCount() called");
    return 0;
}

/* Demangled: pixaCountPixels */
extern "C" __attribute__((visibility("default"))) int pixaCountPixels(void) {
    ALOGD("pixaCountPixels() called");
    return 0;
}

/* Demangled: pixProjectivePtaGray */
extern "C" __attribute__((visibility("default"))) int pixProjectivePtaGray(void) {
    ALOGD("pixProjectivePtaGray() called");
    return 0;
}

/* Demangled: l_binaryReadSelectStream */
extern "C" __attribute__((visibility("default"))) int l_binaryReadSelectStream(void) {
    ALOGD("l_binaryReadSelectStream() called");
    return 0;
}

/* Demangled: pixRemoveUnusedColors */
extern "C" __attribute__((visibility("default"))) int pixRemoveUnusedColors(void) {
    ALOGD("pixRemoveUnusedColors() called");
    return 0;
}

/* Demangled: pixConvertRGBToHSV */
extern "C" __attribute__((visibility("default"))) int pixConvertRGBToHSV(void) {
    ALOGD("pixConvertRGBToHSV() called");
    return 0;
}

/* Demangled: jbGetULCorners */
extern "C" __attribute__((visibility("default"))) int jbGetULCorners(void) {
    ALOGD("jbGetULCorners() called");
    return 0;
}

/* Demangled: boxaGetWhiteblocks */
extern "C" __attribute__((visibility("default"))) int boxaGetWhiteblocks(void) {
    ALOGD("boxaGetWhiteblocks() called");
    return 0;
}

/* Demangled: pixNumberOccupiedOctcubes */
extern "C" __attribute__((visibility("default"))) int pixNumberOccupiedOctcubes(void) {
    ALOGD("pixNumberOccupiedOctcubes() called");
    return 0;
}

/* Demangled: pixHMTDwa_1 */
extern "C" __attribute__((visibility("default"))) int pixHMTDwa_1(void) {
    ALOGD("pixHMTDwa_1() called");
    return 0;
}

/* Demangled: numaEvalHaarSum */
extern "C" __attribute__((visibility("default"))) int numaEvalHaarSum(void) {
    ALOGD("numaEvalHaarSum() called");
    return 0;
}

/* Demangled: pixClipMasked */
extern "C" __attribute__((visibility("default"))) int pixClipMasked(void) {
    ALOGD("pixClipMasked() called");
    return 0;
}

/* Demangled: pixaaReadMem */
extern "C" __attribute__((visibility("default"))) int pixaaReadMem(void) {
    ALOGD("pixaaReadMem() called");
    return 0;
}

/* Demangled: pixReadFromMultipageTiff */
extern "C" __attribute__((visibility("default"))) int pixReadFromMultipageTiff(void) {
    ALOGD("pixReadFromMultipageTiff() called");
    return 0;
}

/* Demangled: boxaGetCount */
extern "C" __attribute__((visibility("default"))) int boxaGetCount(void) {
    ALOGD("boxaGetCount() called");
    return 0;
}

/* Demangled: l_dnaSetCount */
extern "C" __attribute__((visibility("default"))) int l_dnaSetCount(void) {
    ALOGD("l_dnaSetCount() called");
    return 0;
}

/* Demangled: pixWriteStreamJp2k */
extern "C" __attribute__((visibility("default"))) int pixWriteStreamJp2k(void) {
    ALOGD("pixWriteStreamJp2k() called");
    return 0;
}

/* Demangled: pixMorphCompSequenceDwa */
extern "C" __attribute__((visibility("default"))) int pixMorphCompSequenceDwa(void) {
    ALOGD("pixMorphCompSequenceDwa() called");
    return 0;
}

/* Demangled: pixaAddPix */
extern "C" __attribute__((visibility("default"))) int pixaAddPix(void) {
    ALOGD("pixaAddPix() called");
    return 0;
}

/* Demangled: pixSetYRes */
extern "C" __attribute__((visibility("default"))) int pixSetYRes(void) {
    ALOGD("pixSetYRes() called");
    return 0;
}

/* Demangled: numaaGetNumberCount */
extern "C" __attribute__((visibility("default"))) int numaaGetNumberCount(void) {
    ALOGD("numaaGetNumberCount() called");
    return 0;
}

/* Demangled: numaGetMedianVariation */
extern "C" __attribute__((visibility("default"))) int numaGetMedianVariation(void) {
    ALOGD("numaGetMedianVariation() called");
    return 0;
}

/* Demangled: pixConvert8To16 */
extern "C" __attribute__((visibility("default"))) int pixConvert8To16(void) {
    ALOGD("pixConvert8To16() called");
    return 0;
}

/* Demangled: pixZero */
extern "C" __attribute__((visibility("default"))) int pixZero(void) {
    ALOGD("pixZero() called");
    return 0;
}

/* Demangled: pixCentroid */
extern "C" __attribute__((visibility("default"))) int pixCentroid(void) {
    ALOGD("pixCentroid() called");
    return 0;
}

/* Demangled: fpixAddSlopeBorder */
extern "C" __attribute__((visibility("default"))) int fpixAddSlopeBorder(void) {
    ALOGD("fpixAddSlopeBorder() called");
    return 0;
}

/* Demangled: convertToNUpPixa */
extern "C" __attribute__((visibility("default"))) int convertToNUpPixa(void) {
    ALOGD("convertToNUpPixa() called");
    return 0;
}

/* Demangled: recogaReadStream */
extern "C" __attribute__((visibility("default"))) int recogaReadStream(void) {
    ALOGD("recogaReadStream() called");
    return 0;
}

/* Demangled: numaReplaceNumber */
extern "C" __attribute__((visibility("default"))) int numaReplaceNumber(void) {
    ALOGD("numaReplaceNumber() called");
    return 0;
}

/* Demangled: boxConvertToPta */
extern "C" __attribute__((visibility("default"))) int boxConvertToPta(void) {
    ALOGD("boxConvertToPta() called");
    return 0;
}

/* Demangled: pixFindAreaFractionMasked */
extern "C" __attribute__((visibility("default"))) int pixFindAreaFractionMasked(void) {
    ALOGD("pixFindAreaFractionMasked() called");
    return 0;
}

/* Demangled: stringReplaceSubstr */
extern "C" __attribute__((visibility("default"))) int stringReplaceSubstr(void) {
    ALOGD("stringReplaceSubstr() called");
    return 0;
}

/* Demangled: pixaReadBoth */
extern "C" __attribute__((visibility("default"))) int pixaReadBoth(void) {
    ALOGD("pixaReadBoth() called");
    return 0;
}

/* Demangled: pixExtractBarcodes */
extern "C" __attribute__((visibility("default"))) int pixExtractBarcodes(void) {
    ALOGD("pixExtractBarcodes() called");
    return 0;
}

/* Demangled: pixRotateShear */
extern "C" __attribute__((visibility("default"))) int pixRotateShear(void) {
    ALOGD("pixRotateShear() called");
    return 0;
}

/* Demangled: pixGetInvBackgroundMap */
extern "C" __attribute__((visibility("default"))) int pixGetInvBackgroundMap(void) {
    ALOGD("pixGetInvBackgroundMap() called");
    return 0;
}

/* Demangled: selGetParameters */
extern "C" __attribute__((visibility("default"))) int selGetParameters(void) {
    ALOGD("selGetParameters() called");
    return 0;
}

/* Demangled: logScaleRGBVal */
extern "C" __attribute__((visibility("default"))) int logScaleRGBVal(void) {
    ALOGD("logScaleRGBVal() called");
    return 0;
}

/* Demangled: sarrayCreateInitialized */
extern "C" __attribute__((visibility("default"))) int sarrayCreateInitialized(void) {
    ALOGD("sarrayCreateInitialized() called");
    return 0;
}

/* Demangled: pixFindSkew */
extern "C" __attribute__((visibility("default"))) int pixFindSkew(void) {
    ALOGD("pixFindSkew() called");
    return 0;
}

/* Demangled: gplotMakeOutput */
extern "C" __attribute__((visibility("default"))) int gplotMakeOutput(void) {
    ALOGD("gplotMakeOutput() called");
    return 0;
}

/* Demangled: selaGetSelnames */
extern "C" __attribute__((visibility("default"))) int selaGetSelnames(void) {
    ALOGD("selaGetSelnames() called");
    return 0;
}

/* Demangled: numaReverse */
extern "C" __attribute__((visibility("default"))) int numaReverse(void) {
    ALOGD("numaReverse() called");
    return 0;
}

/* Demangled: pixQuadtreeVariance */
extern "C" __attribute__((visibility("default"))) int pixQuadtreeVariance(void) {
    ALOGD("pixQuadtreeVariance() called");
    return 0;
}

/* Demangled: pixHShearLI */
extern "C" __attribute__((visibility("default"))) int pixHShearLI(void) {
    ALOGD("pixHShearLI() called");
    return 0;
}

/* Demangled: pixBilinearColor */
extern "C" __attribute__((visibility("default"))) int pixBilinearColor(void) {
    ALOGD("pixBilinearColor() called");
    return 0;
}

/* Demangled: boxSetSideLocations */
extern "C" __attribute__((visibility("default"))) int boxSetSideLocations(void) {
    ALOGD("boxSetSideLocations() called");
    return 0;
}

/* Demangled: boxaExtractAsPta */
extern "C" __attribute__((visibility("default"))) int boxaExtractAsPta(void) {
    ALOGD("boxaExtractAsPta() called");
    return 0;
}

/* Demangled: generatePtaFilledCircle */
extern "C" __attribute__((visibility("default"))) int generatePtaFilledCircle(void) {
    ALOGD("generatePtaFilledCircle() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_memset(void) __asm__("__aeabi_memset");
int fn___aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: seedspreadLow */
extern "C" __attribute__((visibility("default"))) int seedspreadLow(void) {
    ALOGD("seedspreadLow() called");
    return 0;
}

/* Demangled: makeMosaicStrips */
extern "C" __attribute__((visibility("default"))) int makeMosaicStrips(void) {
    ALOGD("makeMosaicStrips() called");
    return 0;
}

/* Demangled: boxaSelectRange */
extern "C" __attribute__((visibility("default"))) int boxaSelectRange(void) {
    ALOGD("boxaSelectRange() called");
    return 0;
}

/* Demangled: pixSelectByPerimSizeRatio */
extern "C" __attribute__((visibility("default"))) int pixSelectByPerimSizeRatio(void) {
    ALOGD("pixSelectByPerimSizeRatio() called");
    return 0;
}

/* Demangled: pixConvert2To8 */
extern "C" __attribute__((visibility("default"))) int pixConvert2To8(void) {
    ALOGD("pixConvert2To8() called");
    return 0;
}

/* Demangled: stopWallTimer */
extern "C" __attribute__((visibility("default"))) int stopWallTimer(void) {
    ALOGD("stopWallTimer() called");
    return 0;
}

/* Demangled: l_productMatVec */
extern "C" __attribute__((visibility("default"))) int l_productMatVec(void) {
    ALOGD("l_productMatVec() called");
    return 0;
}

/* Demangled: l_byteaSplit */
extern "C" __attribute__((visibility("default"))) int l_byteaSplit(void) {
    ALOGD("l_byteaSplit() called");
    return 0;
}

/* Demangled: sarrayWriteMem */
extern "C" __attribute__((visibility("default"))) int sarrayWriteMem(void) {
    ALOGD("sarrayWriteMem() called");
    return 0;
}

/* Demangled: ptaGetPt */
extern "C" __attribute__((visibility("default"))) int ptaGetPt(void) {
    ALOGD("ptaGetPt() called");
    return 0;
}

/* Demangled: ptaaReadMem */
extern "C" __attribute__((visibility("default"))) int ptaaReadMem(void) {
    ALOGD("ptaaReadMem() called");
    return 0;
}

/* Demangled: pixFindDifferentialSquareSum */
extern "C" __attribute__((visibility("default"))) int pixFindDifferentialSquareSum(void) {
    ALOGD("pixFindDifferentialSquareSum() called");
    return 0;
}

/* Demangled: bbufferDestroyAndSaveData */
extern "C" __attribute__((visibility("default"))) int bbufferDestroyAndSaveData(void) {
    ALOGD("bbufferDestroyAndSaveData() called");
    return 0;
}

/* Demangled: pixScaleAreaMap2 */
extern "C" __attribute__((visibility("default"))) int pixScaleAreaMap2(void) {
    ALOGD("pixScaleAreaMap2() called");
    return 0;
}

/* Demangled: pixConvertRGBToGraySatBoost */
extern "C" __attribute__((visibility("default"))) int pixConvertRGBToGraySatBoost(void) {
    ALOGD("pixConvertRGBToGraySatBoost() called");
    return 0;
}

/* Demangled: pixScaleGrayToBinaryFast */
extern "C" __attribute__((visibility("default"))) int pixScaleGrayToBinaryFast(void) {
    ALOGD("pixScaleGrayToBinaryFast() called");
    return 0;
}

/* Demangled: ptaConvertToBoxa */
extern "C" __attribute__((visibility("default"))) int ptaConvertToBoxa(void) {
    ALOGD("ptaConvertToBoxa() called");
    return 0;
}

/* Demangled: boxaaReadStream */
extern "C" __attribute__((visibility("default"))) int boxaaReadStream(void) {
    ALOGD("boxaaReadStream() called");
    return 0;
}

/* Demangled: pixMakeHistoSV */
extern "C" __attribute__((visibility("default"))) int pixMakeHistoSV(void) {
    ALOGD("pixMakeHistoSV() called");
    return 0;
}

/* Demangled: l_compressGrayHistograms */
extern "C" __attribute__((visibility("default"))) int l_compressGrayHistograms(void) {
    ALOGD("l_compressGrayHistograms() called");
    return 0;
}

/* Demangled: recogBestCorrelForPadding */
extern "C" __attribute__((visibility("default"))) int recogBestCorrelForPadding(void) {
    ALOGD("recogBestCorrelForPadding() called");
    return 0;
}

/* Demangled: pixPaintBoxaRandom */
extern "C" __attribute__((visibility("default"))) int pixPaintBoxaRandom(void) {
    ALOGD("pixPaintBoxaRandom() called");
    return 0;
}

/* Demangled: fpixThresholdToPix */
extern "C" __attribute__((visibility("default"))) int fpixThresholdToPix(void) {
    ALOGD("fpixThresholdToPix() called");
    return 0;
}

/* Demangled: recogResetBmf */
extern "C" __attribute__((visibility("default"))) int recogResetBmf(void) {
    ALOGD("recogResetBmf() called");
    return 0;
}

/* Demangled: returnErrorFloat */
extern "C" __attribute__((visibility("default"))) int returnErrorFloat(void) {
    ALOGD("returnErrorFloat() called");
    return 0;
}

/* Demangled: ptaCreate */
extern "C" __attribute__((visibility("default"))) int ptaCreate(void) {
    ALOGD("ptaCreate() called");
    return 0;
}

/* Demangled: numaDiscretizeRankAndIntensity */
extern "C" __attribute__((visibility("default"))) int numaDiscretizeRankAndIntensity(void) {
    ALOGD("numaDiscretizeRankAndIntensity() called");
    return 0;
}

/* Demangled: l_getStructStrFromFile */
extern "C" __attribute__((visibility("default"))) int l_getStructStrFromFile(void) {
    ALOGD("l_getStructStrFromFile() called");
    return 0;
}

/* Demangled: recogaRead */
extern "C" __attribute__((visibility("default"))) int recogaRead(void) {
    ALOGD("recogaRead() called");
    return 0;
}

/* Demangled: pixScaleGray4xLI */
extern "C" __attribute__((visibility("default"))) int pixScaleGray4xLI(void) {
    ALOGD("pixScaleGray4xLI() called");
    return 0;
}

/* Demangled: pixaJoin */
extern "C" __attribute__((visibility("default"))) int pixaJoin(void) {
    ALOGD("pixaJoin() called");
    return 0;
}

/* Demangled: pixBilinearGray */
extern "C" __attribute__((visibility("default"))) int pixBilinearGray(void) {
    ALOGD("pixBilinearGray() called");
    return 0;
}

/* Demangled: pixConnCompBB */
extern "C" __attribute__((visibility("default"))) int pixConnCompBB(void) {
    ALOGD("pixConnCompBB() called");
    return 0;
}

/* Demangled: pixGetLinePtrs */
extern "C" __attribute__((visibility("default"))) int pixGetLinePtrs(void) {
    ALOGD("pixGetLinePtrs() called");
    return 0;
}

/* Demangled: fhmtautogen */
extern "C" __attribute__((visibility("default"))) int fhmtautogen(void) {
    ALOGD("fhmtautogen() called");
    return 0;
}

/* Demangled: numaLowPassIntervals */
extern "C" __attribute__((visibility("default"))) int numaLowPassIntervals(void) {
    ALOGD("numaLowPassIntervals() called");
    return 0;
}

/* Demangled: pmsCustomAlloc */
extern "C" __attribute__((visibility("default"))) int pmsCustomAlloc(void) {
    ALOGD("pmsCustomAlloc() called");
    return 0;
}

/* Demangled: recogRunViterbi */
extern "C" __attribute__((visibility("default"))) int recogRunViterbi(void) {
    ALOGD("recogRunViterbi() called");
    return 0;
}

/* Demangled: pixFindStrokeWidth */
extern "C" __attribute__((visibility("default"))) int pixFindStrokeWidth(void) {
    ALOGD("pixFindStrokeWidth() called");
    return 0;
}

/* Demangled: boxaRemoveBoxAndSave */
extern "C" __attribute__((visibility("default"))) int boxaRemoveBoxAndSave(void) {
    ALOGD("boxaRemoveBoxAndSave() called");
    return 0;
}

/* Demangled: l_asetDelete */
extern "C" __attribute__((visibility("default"))) int l_asetDelete(void) {
    ALOGD("l_asetDelete() called");
    return 0;
}

/* Demangled: pixaSetText */
extern "C" __attribute__((visibility("default"))) int pixaSetText(void) {
    ALOGD("pixaSetText() called");
    return 0;
}

/* Demangled: fpixClone */
extern "C" __attribute__((visibility("default"))) int fpixClone(void) {
    ALOGD("fpixClone() called");
    return 0;
}

/* Demangled: numaEmpty */
extern "C" __attribute__((visibility("default"))) int numaEmpty(void) {
    ALOGD("numaEmpty() called");
    return 0;
}

/* Demangled: boxaaDestroy */
extern "C" __attribute__((visibility("default"))) int boxaaDestroy(void) {
    ALOGD("boxaaDestroy() called");
    return 0;
}

/* Demangled: fpixGetData */
extern "C" __attribute__((visibility("default"))) int fpixGetData(void) {
    ALOGD("fpixGetData() called");
    return 0;
}

/* Demangled: pixaaGetPixa */
extern "C" __attribute__((visibility("default"))) int pixaaGetPixa(void) {
    ALOGD("pixaaGetPixa() called");
    return 0;
}

/* Demangled: numaMakeDelta */
extern "C" __attribute__((visibility("default"))) int numaMakeDelta(void) {
    ALOGD("numaMakeDelta() called");
    return 0;
}

/* Demangled: ptraRemoveLast */
extern "C" __attribute__((visibility("default"))) int ptraRemoveLast(void) {
    ALOGD("ptraRemoveLast() called");
    return 0;
}

/* Demangled: pixRotateAMColor */
extern "C" __attribute__((visibility("default"))) int pixRotateAMColor(void) {
    ALOGD("pixRotateAMColor() called");
    return 0;
}

/* Demangled: pixPaintThroughMask */
extern "C" __attribute__((visibility("default"))) int pixPaintThroughMask(void) {
    ALOGD("pixPaintThroughMask() called");
    return 0;
}

/* Demangled: bbufferDestroy */
extern "C" __attribute__((visibility("default"))) int bbufferDestroy(void) {
    ALOGD("bbufferDestroy() called");
    return 0;
}

/* Demangled: pixThinConnectedBySet */
extern "C" __attribute__((visibility("default"))) int pixThinConnectedBySet(void) {
    ALOGD("pixThinConnectedBySet() called");
    return 0;
}

/* Demangled: dewarpaWriteMem */
extern "C" __attribute__((visibility("default"))) int dewarpaWriteMem(void) {
    ALOGD("dewarpaWriteMem() called");
    return 0;
}

/* Demangled: strtokSafe */
extern "C" __attribute__((visibility("default"))) int strtokSafe(void) {
    ALOGD("strtokSafe() called");
    return 0;
}

/* Demangled: boxRelocateOneSide */
extern "C" __attribute__((visibility("default"))) int boxRelocateOneSide(void) {
    ALOGD("boxRelocateOneSide() called");
    return 0;
}

/* Demangled: l_dnaaAddDna */
extern "C" __attribute__((visibility("default"))) int l_dnaaAddDna(void) {
    ALOGD("l_dnaaAddDna() called");
    return 0;
}

/* Demangled: l_dnaHashGetCount */
extern "C" __attribute__((visibility("default"))) int l_dnaHashGetCount(void) {
    ALOGD("l_dnaHashGetCount() called");
    return 0;
}

/* Demangled: rchDestroy */
extern "C" __attribute__((visibility("default"))) int rchDestroy(void) {
    ALOGD("rchDestroy() called");
    return 0;
}

/* Demangled: fileAppendString */
extern "C" __attribute__((visibility("default"))) int fileAppendString(void) {
    ALOGD("fileAppendString() called");
    return 0;
}

/* Demangled: dewarpBuildLineModel */
extern "C" __attribute__((visibility("default"))) int dewarpBuildLineModel(void) {
    ALOGD("dewarpBuildLineModel() called");
    return 0;
}

/* Demangled: l_asetCreate */
extern "C" __attribute__((visibility("default"))) int l_asetCreate(void) {
    ALOGD("l_asetCreate() called");
    return 0;
}

/* Demangled: dpixResizeImageData */
extern "C" __attribute__((visibility("default"))) int dpixResizeImageData(void) {
    ALOGD("dpixResizeImageData() called");
    return 0;
}

/* Demangled: numaQuantizeCrossingsByWidth */
extern "C" __attribute__((visibility("default"))) int numaQuantizeCrossingsByWidth(void) {
    ALOGD("numaQuantizeCrossingsByWidth() called");
    return 0;
}

/* Demangled: pixDeskewBarcode */
extern "C" __attribute__((visibility("default"))) int pixDeskewBarcode(void) {
    ALOGD("pixDeskewBarcode() called");
    return 0;
}

/* Demangled: pixWriteStreamSpix */
extern "C" __attribute__((visibility("default"))) int pixWriteStreamSpix(void) {
    ALOGD("pixWriteStreamSpix() called");
    return 0;
}

/* Demangled: pixRemoveBorder */
extern "C" __attribute__((visibility("default"))) int pixRemoveBorder(void) {
    ALOGD("pixRemoveBorder() called");
    return 0;
}

/* Demangled: ptaReverse */
extern "C" __attribute__((visibility("default"))) int ptaReverse(void) {
    ALOGD("ptaReverse() called");
    return 0;
}

/* Demangled: ptraRemove */
extern "C" __attribute__((visibility("default"))) int ptraRemove(void) {
    ALOGD("ptraRemove() called");
    return 0;
}

/* Demangled: pixClipRectangles */
extern "C" __attribute__((visibility("default"))) int pixClipRectangles(void) {
    ALOGD("pixClipRectangles() called");
    return 0;
}

/* Demangled: pixReadMemJpeg */
extern "C" __attribute__((visibility("default"))) int pixReadMemJpeg(void) {
    ALOGD("pixReadMemJpeg() called");
    return 0;
}

/* Demangled: convertFilesFittedToPS */
extern "C" __attribute__((visibility("default"))) int convertFilesFittedToPS(void) {
    ALOGD("convertFilesFittedToPS() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Pix_nativeInvert */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Pix_nativeInvert(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Pix_nativeInvert() called");
    return 0;
}

/* Demangled: pixOtsuAdaptiveThreshold */
extern "C" __attribute__((visibility("default"))) int pixOtsuAdaptiveThreshold(void) {
    ALOGD("pixOtsuAdaptiveThreshold() called");
    return 0;
}

/* Demangled: pixOtsuThreshOnBackgroundNorm */
extern "C" __attribute__((visibility("default"))) int pixOtsuThreshOnBackgroundNorm(void) {
    ALOGD("pixOtsuThreshOnBackgroundNorm() called");
    return 0;
}

/* Demangled: l_dnaConvertToNuma */
extern "C" __attribute__((visibility("default"))) int l_dnaConvertToNuma(void) {
    ALOGD("l_dnaConvertToNuma() called");
    return 0;
}

/* Demangled: pixThresholdTo4bpp */
extern "C" __attribute__((visibility("default"))) int pixThresholdTo4bpp(void) {
    ALOGD("pixThresholdTo4bpp() called");
    return 0;
}

/* Demangled: numaCrossingsByPeaks */
extern "C" __attribute__((visibility("default"))) int numaCrossingsByPeaks(void) {
    ALOGD("numaCrossingsByPeaks() called");
    return 0;
}

/* Demangled: numaEvalBestHaarParameters */
extern "C" __attribute__((visibility("default"))) int numaEvalBestHaarParameters(void) {
    ALOGD("numaEvalBestHaarParameters() called");
    return 0;
}

/* Demangled: pixRenderHashBoxaBlend */
extern "C" __attribute__((visibility("default"))) int pixRenderHashBoxaBlend(void) {
    ALOGD("pixRenderHashBoxaBlend() called");
    return 0;
}

/* Demangled: numaUniformSampling */
extern "C" __attribute__((visibility("default"))) int numaUniformSampling(void) {
    ALOGD("numaUniformSampling() called");
    return 0;
}

/* Demangled: ptraAdd */
extern "C" __attribute__((visibility("default"))) int ptraAdd(void) {
    ALOGD("ptraAdd() called");
    return 0;
}

/* Demangled: pixGetRGBComponentCmap */
extern "C" __attribute__((visibility("default"))) int pixGetRGBComponentCmap(void) {
    ALOGD("pixGetRGBComponentCmap() called");
    return 0;
}

/* Demangled: convertFlateToPSEmbed */
extern "C" __attribute__((visibility("default"))) int convertFlateToPSEmbed(void) {
    ALOGD("convertFlateToPSEmbed() called");
    return 0;
}

/* Demangled: pixColorSegmentCluster */
extern "C" __attribute__((visibility("default"))) int pixColorSegmentCluster(void) {
    ALOGD("pixColorSegmentCluster() called");
    return 0;
}

/* Demangled: pixFindRectangleComps */
extern "C" __attribute__((visibility("default"))) int pixFindRectangleComps(void) {
    ALOGD("pixFindRectangleComps() called");
    return 0;
}

/* Demangled: recogGetClassString */
extern "C" __attribute__((visibility("default"))) int recogGetClassString(void) {
    ALOGD("recogGetClassString() called");
    return 0;
}

/* Demangled: numaBinSort */
extern "C" __attribute__((visibility("default"))) int numaBinSort(void) {
    ALOGD("numaBinSort() called");
    return 0;
}

/* Demangled: sudokuGenerate */
extern "C" __attribute__((visibility("default"))) int sudokuGenerate(void) {
    ALOGD("sudokuGenerate() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Box_nativeGetX */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Box_nativeGetX(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Box_nativeGetX() called");
    return 0;
}

/* Demangled: pixResizeToMatch */
extern "C" __attribute__((visibility("default"))) int pixResizeToMatch(void) {
    ALOGD("pixResizeToMatch() called");
    return 0;
}

/* Demangled: __aeabi_uldivmod */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_uldivmod(void) __asm__("__aeabi_uldivmod");
int fn___aeabi_uldivmod(void) {
    ALOGD("__aeabi_uldivmod() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Box_nativeGetY */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Box_nativeGetY(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Box_nativeGetY() called");
    return 0;
}

/* Demangled: ccbaWriteStream */
extern "C" __attribute__((visibility("default"))) int ccbaWriteStream(void) {
    ALOGD("ccbaWriteStream() called");
    return 0;
}

/* Demangled: pixHasHighlightRed */
extern "C" __attribute__((visibility("default"))) int pixHasHighlightRed(void) {
    ALOGD("pixHasHighlightRed() called");
    return 0;
}

/* Demangled: listReverse */
extern "C" __attribute__((visibility("default"))) int listReverse(void) {
    ALOGD("listReverse() called");
    return 0;
}

/* Demangled: scaleGray2xLILineLow */
extern "C" __attribute__((visibility("default"))) int scaleGray2xLILineLow(void) {
    ALOGD("scaleGray2xLILineLow() called");
    return 0;
}

/* Demangled: pixMakeAlphaFromMask */
extern "C" __attribute__((visibility("default"))) int pixMakeAlphaFromMask(void) {
    ALOGD("pixMakeAlphaFromMask() called");
    return 0;
}

/* Demangled: pixTilingGetCount */
extern "C" __attribute__((visibility("default"))) int pixTilingGetCount(void) {
    ALOGD("pixTilingGetCount() called");
    return 0;
}

/* Demangled: pixBilinearSampledPta */
extern "C" __attribute__((visibility("default"))) int pixBilinearSampledPta(void) {
    ALOGD("pixBilinearSampledPta() called");
    return 0;
}

/* Demangled: pixSeedfillBinary */
extern "C" __attribute__((visibility("default"))) int pixSeedfillBinary(void) {
    ALOGD("pixSeedfillBinary() called");
    return 0;
}

/* Demangled: ptaClone */
extern "C" __attribute__((visibility("default"))) int ptaClone(void) {
    ALOGD("ptaClone() called");
    return 0;
}

/* Demangled: selaAddSel */
extern "C" __attribute__((visibility("default"))) int selaAddSel(void) {
    ALOGD("selaAddSel() called");
    return 0;
}

/* Demangled: reformatPacked64 */
extern "C" __attribute__((visibility("default"))) int reformatPacked64(void) {
    ALOGD("reformatPacked64() called");
    return 0;
}

/* Demangled: bmfDestroy */
extern "C" __attribute__((visibility("default"))) int bmfDestroy(void) {
    ALOGD("bmfDestroy() called");
    return 0;
}

/* Demangled: makeRGBToIndexTables */
extern "C" __attribute__((visibility("default"))) int makeRGBToIndexTables(void) {
    ALOGD("makeRGBToIndexTables() called");
    return 0;
}

/* Demangled: fpixRotate90 */
extern "C" __attribute__((visibility("default"))) int fpixRotate90(void) {
    ALOGD("fpixRotate90() called");
    return 0;
}

/* Demangled: pixErodeBrickDwa */
extern "C" __attribute__((visibility("default"))) int pixErodeBrickDwa(void) {
    ALOGD("pixErodeBrickDwa() called");
    return 0;
}

/* Demangled: pixSeedfillBinaryRestricted */
extern "C" __attribute__((visibility("default"))) int pixSeedfillBinaryRestricted(void) {
    ALOGD("pixSeedfillBinaryRestricted() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Binarize_nativeOtsuAdaptiveThreshold */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Binarize_nativeOtsuAdaptiveThreshold(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Binarize_nativeOtsuAdaptiveThreshold() called");
    return 0;
}

/* Demangled: pixRotateBinaryNice */
extern "C" __attribute__((visibility("default"))) int pixRotateBinaryNice(void) {
    ALOGD("pixRotateBinaryNice() called");
    return 0;
}

/* Demangled: boxaGetAverageSize */
extern "C" __attribute__((visibility("default"))) int boxaGetAverageSize(void) {
    ALOGD("boxaGetAverageSize() called");
    return 0;
}

/* Demangled: l_hashPtToUint64 */
extern "C" __attribute__((visibility("default"))) int l_hashPtToUint64(void) {
    ALOGD("l_hashPtToUint64() called");
    return 0;
}

/* Demangled: pixScaleGrayRankCascade */
extern "C" __attribute__((visibility("default"))) int pixScaleGrayRankCascade(void) {
    ALOGD("pixScaleGrayRankCascade() called");
    return 0;
}

/* Demangled: pixQuadraticVShear */
extern "C" __attribute__((visibility("default"))) int pixQuadraticVShear(void) {
    ALOGD("pixQuadraticVShear() called");
    return 0;
}

/* Demangled: pixExpandBinaryPower2 */
extern "C" __attribute__((visibility("default"))) int pixExpandBinaryPower2(void) {
    ALOGD("pixExpandBinaryPower2() called");
    return 0;
}

/* Demangled: boxTransform */
extern "C" __attribute__((visibility("default"))) int boxTransform(void) {
    ALOGD("boxTransform() called");
    return 0;
}

/* Demangled: pixaDisplayTiledByIndex */
extern "C" __attribute__((visibility("default"))) int pixaDisplayTiledByIndex(void) {
    ALOGD("pixaDisplayTiledByIndex() called");
    return 0;
}

/* Demangled: jbClasserCreate */
extern "C" __attribute__((visibility("default"))) int jbClasserCreate(void) {
    ALOGD("jbClasserCreate() called");
    return 0;
}

/* Demangled: fgetJp2kResolution */
extern "C" __attribute__((visibility("default"))) int fgetJp2kResolution(void) {
    ALOGD("fgetJp2kResolution() called");
    return 0;
}

/* Demangled: numaSubsample */
extern "C" __attribute__((visibility("default"))) int numaSubsample(void) {
    ALOGD("numaSubsample() called");
    return 0;
}

/* Demangled: pixWriteMemBmp */
extern "C" __attribute__((visibility("default"))) int pixWriteMemBmp(void) {
    ALOGD("pixWriteMemBmp() called");
    return 0;
}

/* Exported Object: MORPH_BC */
extern "C" __attribute__((visibility("default"))) void* MORPH_BC = NULL;

/* Demangled: pixGetRGBComponent */
extern "C" __attribute__((visibility("default"))) int pixGetRGBComponent(void) {
    ALOGD("pixGetRGBComponent() called");
    return 0;
}

/* Demangled: pixGetEdgeProfile */
extern "C" __attribute__((visibility("default"))) int pixGetEdgeProfile(void) {
    ALOGD("pixGetEdgeProfile() called");
    return 0;
}

/* Demangled: ptaRemoveDupsByAset */
extern "C" __attribute__((visibility("default"))) int ptaRemoveDupsByAset(void) {
    ALOGD("ptaRemoveDupsByAset() called");
    return 0;
}

/* Demangled: ptraReplace */
extern "C" __attribute__((visibility("default"))) int ptraReplace(void) {
    ALOGD("ptraReplace() called");
    return 0;
}

/* Demangled: pixRotateAMCorner */
extern "C" __attribute__((visibility("default"))) int pixRotateAMCorner(void) {
    ALOGD("pixRotateAMCorner() called");
    return 0;
}

/* Demangled: cidConvertToPdfData */
extern "C" __attribute__((visibility("default"))) int cidConvertToPdfData(void) {
    ALOGD("cidConvertToPdfData() called");
    return 0;
}

/* Demangled: writeMultipageTiffSA */
extern "C" __attribute__((visibility("default"))) int writeMultipageTiffSA(void) {
    ALOGD("writeMultipageTiffSA() called");
    return 0;
}

/* Demangled: numaCreate */
extern "C" __attribute__((visibility("default"))) int numaCreate(void) {
    ALOGD("numaCreate() called");
    return 0;
}

/* Demangled: pixConvertHSVToRGB */
extern "C" __attribute__((visibility("default"))) int pixConvertHSVToRGB(void) {
    ALOGD("pixConvertHSVToRGB() called");
    return 0;
}

/* Demangled: pixRotate2Shear */
extern "C" __attribute__((visibility("default"))) int pixRotate2Shear(void) {
    ALOGD("pixRotate2Shear() called");
    return 0;
}

/* Demangled: pixBilateralExact */
extern "C" __attribute__((visibility("default"))) int pixBilateralExact(void) {
    ALOGD("pixBilateralExact() called");
    return 0;
}

/* Demangled: l_setConvolveSampling */
extern "C" __attribute__((visibility("default"))) int l_setConvolveSampling(void) {
    ALOGD("l_setConvolveSampling() called");
    return 0;
}

/* Demangled: l_dnaaWrite */
extern "C" __attribute__((visibility("default"))) int l_dnaaWrite(void) {
    ALOGD("l_dnaaWrite() called");
    return 0;
}

/* Demangled: pixGetColumnStats */
extern "C" __attribute__((visibility("default"))) int pixGetColumnStats(void) {
    ALOGD("pixGetColumnStats() called");
    return 0;
}

/* Demangled: pixaRotateOrth */
extern "C" __attribute__((visibility("default"))) int pixaRotateOrth(void) {
    ALOGD("pixaRotateOrth() called");
    return 0;
}

/* Demangled: ptaInsertPt */
extern "C" __attribute__((visibility("default"))) int ptaInsertPt(void) {
    ALOGD("ptaInsertPt() called");
    return 0;
}

/* Demangled: pixRasteropHip */
extern "C" __attribute__((visibility("default"))) int pixRasteropHip(void) {
    ALOGD("pixRasteropHip() called");
    return 0;
}

/* Demangled: pixWriteStreamWebP */
extern "C" __attribute__((visibility("default"))) int pixWriteStreamWebP(void) {
    ALOGD("pixWriteStreamWebP() called");
    return 0;
}

/* Demangled: pixPaintBoxa */
extern "C" __attribute__((visibility("default"))) int pixPaintBoxa(void) {
    ALOGD("pixPaintBoxa() called");
    return 0;
}

/* Demangled: numaGetSpanValues */
extern "C" __attribute__((visibility("default"))) int numaGetSpanValues(void) {
    ALOGD("numaGetSpanValues() called");
    return 0;
}

/* Demangled: stringJoin */
extern "C" __attribute__((visibility("default"))) int stringJoin(void) {
    ALOGD("stringJoin() called");
    return 0;
}

/* Demangled: ptaGetQuarticLSF */
extern "C" __attribute__((visibility("default"))) int ptaGetQuarticLSF(void) {
    ALOGD("ptaGetQuarticLSF() called");
    return 0;
}

/* Demangled: sudokuTestUniqueness */
extern "C" __attribute__((visibility("default"))) int sudokuTestUniqueness(void) {
    ALOGD("sudokuTestUniqueness() called");
    return 0;
}

/* Demangled: selSetOrigin */
extern "C" __attribute__((visibility("default"))) int selSetOrigin(void) {
    ALOGD("selSetOrigin() called");
    return 0;
}

/* Demangled: l_amapGetNext */
extern "C" __attribute__((visibility("default"))) int l_amapGetNext(void) {
    ALOGD("l_amapGetNext() called");
    return 0;
}

/* Demangled: pixaIsFull */
extern "C" __attribute__((visibility("default"))) int pixaIsFull(void) {
    ALOGD("pixaIsFull() called");
    return 0;
}

/* Demangled: boxaDisplayTiled */
extern "C" __attribute__((visibility("default"))) int boxaDisplayTiled(void) {
    ALOGD("boxaDisplayTiled() called");
    return 0;
}

/* Demangled: pixaccFinal */
extern "C" __attribute__((visibility("default"))) int pixaccFinal(void) {
    ALOGD("pixaccFinal() called");
    return 0;
}

/* Demangled: fhmtgen_low_1 */
extern "C" __attribute__((visibility("default"))) int fhmtgen_low_1(void) {
    ALOGD("fhmtgen_low_1() called");
    return 0;
}

/* Demangled: pixRenderContours */
extern "C" __attribute__((visibility("default"))) int pixRenderContours(void) {
    ALOGD("pixRenderContours() called");
    return 0;
}

/* Demangled: numaThresholdEdges */
extern "C" __attribute__((visibility("default"))) int numaThresholdEdges(void) {
    ALOGD("numaThresholdEdges() called");
    return 0;
}

/* Demangled: pixDestroy */
extern "C" __attribute__((visibility("default"))) int pixDestroy(void) {
    ALOGD("pixDestroy() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_ReadFile_nativeReadBitmap */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_ReadFile_nativeReadBitmap(void) {
    ALOGD("Java_com_googlecode_leptonica_android_ReadFile_nativeReadBitmap() called");
    return 0;
}

/* Demangled: numaConvertToSarray */
extern "C" __attribute__((visibility("default"))) int numaConvertToSarray(void) {
    ALOGD("numaConvertToSarray() called");
    return 0;
}

/* Demangled: convertTiffMultipageToPdf */
extern "C" __attribute__((visibility("default"))) int convertTiffMultipageToPdf(void) {
    ALOGD("convertTiffMultipageToPdf() called");
    return 0;
}

/* Demangled: sarrayUnionByAset */
extern "C" __attribute__((visibility("default"))) int sarrayUnionByAset(void) {
    ALOGD("sarrayUnionByAset() called");
    return 0;
}

/* Demangled: boxaInsertBox */
extern "C" __attribute__((visibility("default"))) int boxaInsertBox(void) {
    ALOGD("boxaInsertBox() called");
    return 0;
}

/* Demangled: pixaGetBoxa */
extern "C" __attribute__((visibility("default"))) int pixaGetBoxa(void) {
    ALOGD("pixaGetBoxa() called");
    return 0;
}

/* Demangled: numaMakeSequence */
extern "C" __attribute__((visibility("default"))) int numaMakeSequence(void) {
    ALOGD("numaMakeSequence() called");
    return 0;
}

/* Demangled: boxaaAddBox */
extern "C" __attribute__((visibility("default"))) int boxaaAddBox(void) {
    ALOGD("boxaaAddBox() called");
    return 0;
}

/* Demangled: boxaPermutePseudorandom */
extern "C" __attribute__((visibility("default"))) int boxaPermutePseudorandom(void) {
    ALOGD("boxaPermutePseudorandom() called");
    return 0;
}

/* Demangled: pixGetWordBoxesInTextlines */
extern "C" __attribute__((visibility("default"))) int pixGetWordBoxesInTextlines(void) {
    ALOGD("pixGetWordBoxesInTextlines() called");
    return 0;
}

/* Demangled: pixEstimateBackground */
extern "C" __attribute__((visibility("default"))) int pixEstimateBackground(void) {
    ALOGD("pixEstimateBackground() called");
    return 0;
}

/* Demangled: recogCreateDid */
extern "C" __attribute__((visibility("default"))) int recogCreateDid(void) {
    ALOGD("recogCreateDid() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Pixa_nativeAddBox */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Pixa_nativeAddBox(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Pixa_nativeAddBox() called");
    return 0;
}

/* Demangled: boxaCreate */
extern "C" __attribute__((visibility("default"))) int boxaCreate(void) {
    ALOGD("boxaCreate() called");
    return 0;
}

/* Demangled: fpixResizeImageData */
extern "C" __attribute__((visibility("default"))) int fpixResizeImageData(void) {
    ALOGD("fpixResizeImageData() called");
    return 0;
}

/* Demangled: pixScaleGrayRank2 */
extern "C" __attribute__((visibility("default"))) int pixScaleGrayRank2(void) {
    ALOGD("pixScaleGrayRank2() called");
    return 0;
}

/* Demangled: pixFindSkewOrthogonalRange */
extern "C" __attribute__((visibility("default"))) int pixFindSkewOrthogonalRange(void) {
    ALOGD("pixFindSkewOrthogonalRange() called");
    return 0;
}

/* Demangled: sudokuReadString */
extern "C" __attribute__((visibility("default"))) int sudokuReadString(void) {
    ALOGD("sudokuReadString() called");
    return 0;
}

/* Demangled: pixSetXRes */
extern "C" __attribute__((visibility("default"))) int pixSetXRes(void) {
    ALOGD("pixSetXRes() called");
    return 0;
}

/* Demangled: pixOrientDetectDwa */
extern "C" __attribute__((visibility("default"))) int pixOrientDetectDwa(void) {
    ALOGD("pixOrientDetectDwa() called");
    return 0;
}

/* Demangled: pixAddWithIndicator */
extern "C" __attribute__((visibility("default"))) int pixAddWithIndicator(void) {
    ALOGD("pixAddWithIndicator() called");
    return 0;
}

/* Demangled: pixConvertGrayToSubpixelRGB */
extern "C" __attribute__((visibility("default"))) int pixConvertGrayToSubpixelRGB(void) {
    ALOGD("pixConvertGrayToSubpixelRGB() called");
    return 0;
}

/* Demangled: selaAddHitMiss */
extern "C" __attribute__((visibility("default"))) int selaAddHitMiss(void) {
    ALOGD("selaAddHitMiss() called");
    return 0;
}

/* Demangled: pixRotate */
extern "C" __attribute__((visibility("default"))) int pixRotate(void) {
    ALOGD("pixRotate() called");
    return 0;
}

/* Demangled: pixBilinearPta */
extern "C" __attribute__((visibility("default"))) int pixBilinearPta(void) {
    ALOGD("pixBilinearPta() called");
    return 0;
}

/* Demangled: pixSplitComponentIntoBoxa */
extern "C" __attribute__((visibility("default"))) int pixSplitComponentIntoBoxa(void) {
    ALOGD("pixSplitComponentIntoBoxa() called");
    return 0;
}

/* Demangled: pixaaSelectRange */
extern "C" __attribute__((visibility("default"))) int pixaaSelectRange(void) {
    ALOGD("pixaaSelectRange() called");
    return 0;
}

/* Demangled: pixConvert1To2 */
extern "C" __attribute__((visibility("default"))) int pixConvert1To2(void) {
    ALOGD("pixConvert1To2() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Pix_nativeDestroy */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Pix_nativeDestroy(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Pix_nativeDestroy() called");
    return 0;
}

/* Demangled: pixInvert */
extern "C" __attribute__((visibility("default"))) int pixInvert(void) {
    ALOGD("pixInvert() called");
    return 0;
}

/* Demangled: boxSetGeometry */
extern "C" __attribute__((visibility("default"))) int boxSetGeometry(void) {
    ALOGD("boxSetGeometry() called");
    return 0;
}

/* Exported Object: ConvolveSamplingFactX */
extern "C" __attribute__((visibility("default"))) void* ConvolveSamplingFactX = NULL;

/* Demangled: pixcmapGammaTRC */
extern "C" __attribute__((visibility("default"))) int pixcmapGammaTRC(void) {
    ALOGD("pixcmapGammaTRC() called");
    return 0;
}

/* Exported Object: ConvolveSamplingFactY */
extern "C" __attribute__((visibility("default"))) void* ConvolveSamplingFactY = NULL;

/* Demangled: pixConvert1To4 */
extern "C" __attribute__((visibility("default"))) int pixConvert1To4(void) {
    ALOGD("pixConvert1To4() called");
    return 0;
}

/* Demangled: pixCountPixels */
extern "C" __attribute__((visibility("default"))) int pixCountPixels(void) {
    ALOGD("pixCountPixels() called");
    return 0;
}

/* Demangled: dewarpaGetDewarp */
extern "C" __attribute__((visibility("default"))) int dewarpaGetDewarp(void) {
    ALOGD("dewarpaGetDewarp() called");
    return 0;
}

/* Demangled: numaRebinHistogram */
extern "C" __attribute__((visibility("default"))) int numaRebinHistogram(void) {
    ALOGD("numaRebinHistogram() called");
    return 0;
}

/* Demangled: ptaCyclicPerm */
extern "C" __attribute__((visibility("default"))) int ptaCyclicPerm(void) {
    ALOGD("ptaCyclicPerm() called");
    return 0;
}

/* Demangled: pixFindVerticalRuns */
extern "C" __attribute__((visibility("default"))) int pixFindVerticalRuns(void) {
    ALOGD("pixFindVerticalRuns() called");
    return 0;
}

/* Demangled: pixBlockBilateralExact */
extern "C" __attribute__((visibility("default"))) int pixBlockBilateralExact(void) {
    ALOGD("pixBlockBilateralExact() called");
    return 0;
}

/* Demangled: boxaaGetBoxCount */
extern "C" __attribute__((visibility("default"))) int boxaaGetBoxCount(void) {
    ALOGD("boxaaGetBoxCount() called");
    return 0;
}

/* Demangled: boxIntersectByLine */
extern "C" __attribute__((visibility("default"))) int boxIntersectByLine(void) {
    ALOGD("boxIntersectByLine() called");
    return 0;
}

/* Demangled: pixSubtract */
extern "C" __attribute__((visibility("default"))) int pixSubtract(void) {
    ALOGD("pixSubtract() called");
    return 0;
}

/* Demangled: saConvertFilesToPdf */
extern "C" __attribute__((visibility("default"))) int saConvertFilesToPdf(void) {
    ALOGD("saConvertFilesToPdf() called");
    return 0;
}

/* Demangled: pixCropToMatch */
extern "C" __attribute__((visibility("default"))) int pixCropToMatch(void) {
    ALOGD("pixCropToMatch() called");
    return 0;
}

/* Demangled: recogRemoveOutliers */
extern "C" __attribute__((visibility("default"))) int recogRemoveOutliers(void) {
    ALOGD("recogRemoveOutliers() called");
    return 0;
}

/* Demangled: pixConvert1To8 */
extern "C" __attribute__((visibility("default"))) int pixConvert1To8(void) {
    ALOGD("pixConvert1To8() called");
    return 0;
}

/* Demangled: convertXYZToLAB */
extern "C" __attribute__((visibility("default"))) int convertXYZToLAB(void) {
    ALOGD("convertXYZToLAB() called");
    return 0;
}

/* Demangled: generateFlatePS */
extern "C" __attribute__((visibility("default"))) int generateFlatePS(void) {
    ALOGD("generateFlatePS() called");
    return 0;
}

/* Demangled: pixWriteAutoFormat */
extern "C" __attribute__((visibility("default"))) int pixWriteAutoFormat(void) {
    ALOGD("pixWriteAutoFormat() called");
    return 0;
}

/* Demangled: getCompositeParameters */
extern "C" __attribute__((visibility("default"))) int getCompositeParameters(void) {
    ALOGD("getCompositeParameters() called");
    return 0;
}

/* Demangled: pixacompGetBoxa */
extern "C" __attribute__((visibility("default"))) int pixacompGetBoxa(void) {
    ALOGD("pixacompGetBoxa() called");
    return 0;
}

/* Demangled: pixMinMaxTiles */
extern "C" __attribute__((visibility("default"))) int pixMinMaxTiles(void) {
    ALOGD("pixMinMaxTiles() called");
    return 0;
}

/* Demangled: pixMakeMaskFromLUT */
extern "C" __attribute__((visibility("default"))) int pixMakeMaskFromLUT(void) {
    ALOGD("pixMakeMaskFromLUT() called");
    return 0;
}

/* Demangled: dewarpaUseBothArrays */
extern "C" __attribute__((visibility("default"))) int dewarpaUseBothArrays(void) {
    ALOGD("dewarpaUseBothArrays() called");
    return 0;
}

/* Demangled: ptaTestIntersection */
extern "C" __attribute__((visibility("default"))) int ptaTestIntersection(void) {
    ALOGD("ptaTestIntersection() called");
    return 0;
}

/* Demangled: pixExtractBarcodeWidths1 */
extern "C" __attribute__((visibility("default"))) int pixExtractBarcodeWidths1(void) {
    ALOGD("pixExtractBarcodeWidths1() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_WriteFile_nativeWriteImpliedFormat */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_WriteFile_nativeWriteImpliedFormat(void) {
    ALOGD("Java_com_googlecode_leptonica_android_WriteFile_nativeWriteImpliedFormat() called");
    return 0;
}

/* Demangled: boxaSortByIndex */
extern "C" __attribute__((visibility("default"))) int boxaSortByIndex(void) {
    ALOGD("boxaSortByIndex() called");
    return 0;
}

/* Demangled: ccbaCreate */
extern "C" __attribute__((visibility("default"))) int ccbaCreate(void) {
    ALOGD("ccbaCreate() called");
    return 0;
}

/* Demangled: jbRankHaus */
extern "C" __attribute__((visibility("default"))) int jbRankHaus(void) {
    ALOGD("jbRankHaus() called");
    return 0;
}

/* Demangled: pixMaxDynamicRange */
extern "C" __attribute__((visibility("default"))) int pixMaxDynamicRange(void) {
    ALOGD("pixMaxDynamicRange() called");
    return 0;
}

/* Demangled: cmapEqual */
extern "C" __attribute__((visibility("default"))) int cmapEqual(void) {
    ALOGD("cmapEqual() called");
    return 0;
}

/* Demangled: pixExtractBarcodeWidths2 */
extern "C" __attribute__((visibility("default"))) int pixExtractBarcodeWidths2(void) {
    ALOGD("pixExtractBarcodeWidths2() called");
    return 0;
}

/* Demangled: pixSetupByteProcessing */
extern "C" __attribute__((visibility("default"))) int pixSetupByteProcessing(void) {
    ALOGD("pixSetupByteProcessing() called");
    return 0;
}

/* Demangled: pixBackgroundNormGrayArray */
extern "C" __attribute__((visibility("default"))) int pixBackgroundNormGrayArray(void) {
    ALOGD("pixBackgroundNormGrayArray() called");
    return 0;
}

/* Demangled: boxaPlotSizes */
extern "C" __attribute__((visibility("default"))) int boxaPlotSizes(void) {
    ALOGD("boxaPlotSizes() called");
    return 0;
}

/* Demangled: fpixAddContinuedBorder */
extern "C" __attribute__((visibility("default"))) int fpixAddContinuedBorder(void) {
    ALOGD("fpixAddContinuedBorder() called");
    return 0;
}

/* Demangled: pixGetBackgroundGrayMapMorph */
extern "C" __attribute__((visibility("default"))) int pixGetBackgroundGrayMapMorph(void) {
    ALOGD("pixGetBackgroundGrayMapMorph() called");
    return 0;
}

/* Exported Object: ImageFileFormatExtensions */
extern "C" __attribute__((visibility("default"))) void* ImageFileFormatExtensions = NULL;

/* Demangled: pixaInsertPix */
extern "C" __attribute__((visibility("default"))) int pixaInsertPix(void) {
    ALOGD("pixaInsertPix() called");
    return 0;
}

/* Demangled: pixRasteropVip */
extern "C" __attribute__((visibility("default"))) int pixRasteropVip(void) {
    ALOGD("pixRasteropVip() called");
    return 0;
}

/* Demangled: pixSeedfill8BB */
extern "C" __attribute__((visibility("default"))) int pixSeedfill8BB(void) {
    ALOGD("pixSeedfill8BB() called");
    return 0;
}

/* Demangled: pixCloseCompBrickExtendDwa */
extern "C" __attribute__((visibility("default"))) int pixCloseCompBrickExtendDwa(void) {
    ALOGD("pixCloseCompBrickExtendDwa() called");
    return 0;
}

/* Demangled: extractNumberFromFilename */
extern "C" __attribute__((visibility("default"))) int extractNumberFromFilename(void) {
    ALOGD("extractNumberFromFilename() called");
    return 0;
}

/* Demangled: pixSetAllArbitrary */
extern "C" __attribute__((visibility("default"))) int pixSetAllArbitrary(void) {
    ALOGD("pixSetAllArbitrary() called");
    return 0;
}

/* Demangled: pixConvert8To32 */
extern "C" __attribute__((visibility("default"))) int pixConvert8To32(void) {
    ALOGD("pixConvert8To32() called");
    return 0;
}

/* Demangled: pixRotate3Shear */
extern "C" __attribute__((visibility("default"))) int pixRotate3Shear(void) {
    ALOGD("pixRotate3Shear() called");
    return 0;
}

/* Demangled: pixScaleToGray16 */
extern "C" __attribute__((visibility("default"))) int pixScaleToGray16(void) {
    ALOGD("pixScaleToGray16() called");
    return 0;
}

/* Demangled: pixGetRunsOnLine */
extern "C" __attribute__((visibility("default"))) int pixGetRunsOnLine(void) {
    ALOGD("pixGetRunsOnLine() called");
    return 0;
}

/* Demangled: fileCorruptByDeletion */
extern "C" __attribute__((visibility("default"))) int fileCorruptByDeletion(void) {
    ALOGD("fileCorruptByDeletion() called");
    return 0;
}

/* Demangled: pixConvertColorToSubpixelRGB */
extern "C" __attribute__((visibility("default"))) int pixConvertColorToSubpixelRGB(void) {
    ALOGD("pixConvertColorToSubpixelRGB() called");
    return 0;
}

/* Demangled: pixFadeWithGray */
extern "C" __attribute__((visibility("default"))) int pixFadeWithGray(void) {
    ALOGD("pixFadeWithGray() called");
    return 0;
}

/* Demangled: boxOverlapFraction */
extern "C" __attribute__((visibility("default"))) int boxOverlapFraction(void) {
    ALOGD("boxOverlapFraction() called");
    return 0;
}

/* Demangled: stringJoinIP */
extern "C" __attribute__((visibility("default"))) int stringJoinIP(void) {
    ALOGD("stringJoinIP() called");
    return 0;
}

/* Demangled: pixCountPixelsByColumn */
extern "C" __attribute__((visibility("default"))) int pixCountPixelsByColumn(void) {
    ALOGD("pixCountPixelsByColumn() called");
    return 0;
}

/* Demangled: pixDeskew */
extern "C" __attribute__((visibility("default"))) int pixDeskew(void) {
    ALOGD("pixDeskew() called");
    return 0;
}

/* Demangled: selaWrite */
extern "C" __attribute__((visibility("default"))) int selaWrite(void) {
    ALOGD("selaWrite() called");
    return 0;
}

/* Demangled: pixGenerateSelWithRuns */
extern "C" __attribute__((visibility("default"))) int pixGenerateSelWithRuns(void) {
    ALOGD("pixGenerateSelWithRuns() called");
    return 0;
}

/* Demangled: pixStretchHorizontal */
extern "C" __attribute__((visibility("default"))) int pixStretchHorizontal(void) {
    ALOGD("pixStretchHorizontal() called");
    return 0;
}

/* Demangled: pixApplyInvBackgroundRGBMap */
extern "C" __attribute__((visibility("default"))) int pixApplyInvBackgroundRGBMap(void) {
    ALOGD("pixApplyInvBackgroundRGBMap() called");
    return 0;
}

/* Demangled: pixClearAll */
extern "C" __attribute__((visibility("default"))) int pixClearAll(void) {
    ALOGD("pixClearAll() called");
    return 0;
}

/* Demangled: pixOctcubeQuantMixedWithGray */
extern "C" __attribute__((visibility("default"))) int pixOctcubeQuantMixedWithGray(void) {
    ALOGD("pixOctcubeQuantMixedWithGray() called");
    return 0;
}

/* Demangled: fpixaGetCount */
extern "C" __attribute__((visibility("default"))) int fpixaGetCount(void) {
    ALOGD("fpixaGetCount() called");
    return 0;
}

/* Demangled: convertSegmentedFilesToPdf */
extern "C" __attribute__((visibility("default"))) int convertSegmentedFilesToPdf(void) {
    ALOGD("convertSegmentedFilesToPdf() called");
    return 0;
}

/* Demangled: pixRemoveColormapGeneral */
extern "C" __attribute__((visibility("default"))) int pixRemoveColormapGeneral(void) {
    ALOGD("pixRemoveColormapGeneral() called");
    return 0;
}

/* Demangled: numaMakeHistogramClipped */
extern "C" __attribute__((visibility("default"))) int numaMakeHistogramClipped(void) {
    ALOGD("numaMakeHistogramClipped() called");
    return 0;
}

/* Demangled: convertByteToHexAscii */
extern "C" __attribute__((visibility("default"))) int convertByteToHexAscii(void) {
    ALOGD("convertByteToHexAscii() called");
    return 0;
}

/* Demangled: sarraySelectByRange */
extern "C" __attribute__((visibility("default"))) int sarraySelectByRange(void) {
    ALOGD("sarraySelectByRange() called");
    return 0;
}

/* Demangled: pixExpandBinaryReplicate */
extern "C" __attribute__((visibility("default"))) int pixExpandBinaryReplicate(void) {
    ALOGD("pixExpandBinaryReplicate() called");
    return 0;
}

/* Demangled: lheapAdd */
extern "C" __attribute__((visibility("default"))) int lheapAdd(void) {
    ALOGD("lheapAdd() called");
    return 0;
}

/* Demangled: pixaDisplayOnLattice */
extern "C" __attribute__((visibility("default"))) int pixaDisplayOnLattice(void) {
    ALOGD("pixaDisplayOnLattice() called");
    return 0;
}

/* Demangled: pixReadStreamJpeg */
extern "C" __attribute__((visibility("default"))) int pixReadStreamJpeg(void) {
    ALOGD("pixReadStreamJpeg() called");
    return 0;
}

/* Demangled: distanceFunctionLow */
extern "C" __attribute__((visibility("default"))) int distanceFunctionLow(void) {
    ALOGD("distanceFunctionLow() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_GrayQuant_nativePixThresholdToBinary */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_GrayQuant_nativePixThresholdToBinary(void) {
    ALOGD("Java_com_googlecode_leptonica_android_GrayQuant_nativePixThresholdToBinary() called");
    return 0;
}

/* Demangled: lept_fopen */
extern "C" __attribute__((visibility("default"))) int lept_fopen(void) {
    ALOGD("lept_fopen() called");
    return 0;
}

/* Demangled: pixaSortByIndex */
extern "C" __attribute__((visibility("default"))) int pixaSortByIndex(void) {
    ALOGD("pixaSortByIndex() called");
    return 0;
}

/* Demangled: boxaEqual */
extern "C" __attribute__((visibility("default"))) int boxaEqual(void) {
    ALOGD("boxaEqual() called");
    return 0;
}

/* Demangled: ptaGetRange */
extern "C" __attribute__((visibility("default"))) int ptaGetRange(void) {
    ALOGD("ptaGetRange() called");
    return 0;
}

/* Demangled: fpixSetWpl */
extern "C" __attribute__((visibility("default"))) int fpixSetWpl(void) {
    ALOGD("fpixSetWpl() called");
    return 0;
}

/* Demangled: pixErodeCompBrickExtendDwa */
extern "C" __attribute__((visibility("default"))) int pixErodeCompBrickExtendDwa(void) {
    ALOGD("pixErodeCompBrickExtendDwa() called");
    return 0;
}

/* Demangled: ptraSwap */
extern "C" __attribute__((visibility("default"))) int ptraSwap(void) {
    ALOGD("ptraSwap() called");
    return 0;
}

/* Demangled: pixBlockconvAccum */
extern "C" __attribute__((visibility("default"))) int pixBlockconvAccum(void) {
    ALOGD("pixBlockconvAccum() called");
    return 0;
}

/* Demangled: l_dnaUnionByAset */
extern "C" __attribute__((visibility("default"))) int l_dnaUnionByAset(void) {
    ALOGD("l_dnaUnionByAset() called");
    return 0;
}

/* Demangled: pixProjectiveGray */
extern "C" __attribute__((visibility("default"))) int pixProjectiveGray(void) {
    ALOGD("pixProjectiveGray() called");
    return 0;
}

/* Demangled: recogTrainLabelled */
extern "C" __attribute__((visibility("default"))) int recogTrainLabelled(void) {
    ALOGD("recogTrainLabelled() called");
    return 0;
}

/* Demangled: pixaDisplay */
extern "C" __attribute__((visibility("default"))) int pixaDisplay(void) {
    ALOGD("pixaDisplay() called");
    return 0;
}

/* Demangled: pixTRCMap */
extern "C" __attribute__((visibility("default"))) int pixTRCMap(void) {
    ALOGD("pixTRCMap() called");
    return 0;
}

/* Demangled: fmorphautogen1 */
extern "C" __attribute__((visibility("default"))) int fmorphautogen1(void) {
    ALOGD("fmorphautogen1() called");
    return 0;
}

/* Demangled: sarrayGetString */
extern "C" __attribute__((visibility("default"))) int sarrayGetString(void) {
    ALOGD("sarrayGetString() called");
    return 0;
}

/* Demangled: pixUpDownDetectGeneral */
extern "C" __attribute__((visibility("default"))) int pixUpDownDetectGeneral(void) {
    ALOGD("pixUpDownDetectGeneral() called");
    return 0;
}

/* Demangled: fmorphautogen2 */
extern "C" __attribute__((visibility("default"))) int fmorphautogen2(void) {
    ALOGD("fmorphautogen2() called");
    return 0;
}

/* Demangled: dpixReadStream */
extern "C" __attribute__((visibility("default"))) int dpixReadStream(void) {
    ALOGD("dpixReadStream() called");
    return 0;
}

/* Demangled: pixAddContinuedBorder */
extern "C" __attribute__((visibility("default"))) int pixAddContinuedBorder(void) {
    ALOGD("pixAddContinuedBorder() called");
    return 0;
}

/* Demangled: pixCopyBorder */
extern "C" __attribute__((visibility("default"))) int pixCopyBorder(void) {
    ALOGD("pixCopyBorder() called");
    return 0;
}

/* Demangled: convertToPdf */
extern "C" __attribute__((visibility("default"))) int convertToPdf(void) {
    ALOGD("convertToPdf() called");
    return 0;
}

/* Demangled: pixErodeBrick */
extern "C" __attribute__((visibility("default"))) int pixErodeBrick(void) {
    ALOGD("pixErodeBrick() called");
    return 0;
}

/* Demangled: sarrayAppendRange */
extern "C" __attribute__((visibility("default"))) int sarrayAppendRange(void) {
    ALOGD("sarrayAppendRange() called");
    return 0;
}

/* Demangled: pixSetMaskedCmap */
extern "C" __attribute__((visibility("default"))) int pixSetMaskedCmap(void) {
    ALOGD("pixSetMaskedCmap() called");
    return 0;
}

/* Demangled: jbGetLLCorners */
extern "C" __attribute__((visibility("default"))) int jbGetLLCorners(void) {
    ALOGD("jbGetLLCorners() called");
    return 0;
}

/* Demangled: pixAccumulate */
extern "C" __attribute__((visibility("default"))) int pixAccumulate(void) {
    ALOGD("pixAccumulate() called");
    return 0;
}

/* Demangled: selCreateFromPix */
extern "C" __attribute__((visibility("default"))) int selCreateFromPix(void) {
    ALOGD("selCreateFromPix() called");
    return 0;
}

/* Demangled: boxPrintStreamInfo */
extern "C" __attribute__((visibility("default"))) int boxPrintStreamInfo(void) {
    ALOGD("boxPrintStreamInfo() called");
    return 0;
}

/* Demangled: pixaaFlattenToPixa */
extern "C" __attribute__((visibility("default"))) int pixaaFlattenToPixa(void) {
    ALOGD("pixaaFlattenToPixa() called");
    return 0;
}

/* Demangled: pixThresholdToValue */
extern "C" __attribute__((visibility("default"))) int pixThresholdToValue(void) {
    ALOGD("pixThresholdToValue() called");
    return 0;
}

/* Demangled: boxDestroy */
extern "C" __attribute__((visibility("default"))) int boxDestroy(void) {
    ALOGD("boxDestroy() called");
    return 0;
}

/* Demangled: pixGetWordsInTextlines */
extern "C" __attribute__((visibility("default"))) int pixGetWordsInTextlines(void) {
    ALOGD("pixGetWordsInTextlines() called");
    return 0;
}

/* Demangled: pixcmapIsBlackAndWhite */
extern "C" __attribute__((visibility("default"))) int pixcmapIsBlackAndWhite(void) {
    ALOGD("pixcmapIsBlackAndWhite() called");
    return 0;
}

/* Demangled: selCreateBrick */
extern "C" __attribute__((visibility("default"))) int selCreateBrick(void) {
    ALOGD("selCreateBrick() called");
    return 0;
}

/* Demangled: pixRemoveMatchedPattern */
extern "C" __attribute__((visibility("default"))) int pixRemoveMatchedPattern(void) {
    ALOGD("pixRemoveMatchedPattern() called");
    return 0;
}

/* Demangled: pixProjectivePtaWithAlpha */
extern "C" __attribute__((visibility("default"))) int pixProjectivePtaWithAlpha(void) {
    ALOGD("pixProjectivePtaWithAlpha() called");
    return 0;
}

/* Demangled: recogSkipIdentify */
extern "C" __attribute__((visibility("default"))) int recogSkipIdentify(void) {
    ALOGD("recogSkipIdentify() called");
    return 0;
}

/* Demangled: pixGetAutoFormat */
extern "C" __attribute__((visibility("default"))) int pixGetAutoFormat(void) {
    ALOGD("pixGetAutoFormat() called");
    return 0;
}

/* Demangled: pixSelectByWidthHeightRatio */
extern "C" __attribute__((visibility("default"))) int pixSelectByWidthHeightRatio(void) {
    ALOGD("pixSelectByWidthHeightRatio() called");
    return 0;
}

/* Demangled: pixWriteMemPng */
extern "C" __attribute__((visibility("default"))) int pixWriteMemPng(void) {
    ALOGD("pixWriteMemPng() called");
    return 0;
}

/* Demangled: regTestCheckFile */
extern "C" __attribute__((visibility("default"))) int regTestCheckFile(void) {
    ALOGD("regTestCheckFile() called");
    return 0;
}

/* Demangled: ccbaRead */
extern "C" __attribute__((visibility("default"))) int ccbaRead(void) {
    ALOGD("ccbaRead() called");
    return 0;
}

/* Demangled: fpixDestroy */
extern "C" __attribute__((visibility("default"))) int fpixDestroy(void) {
    ALOGD("fpixDestroy() called");
    return 0;
}

/* Demangled: ptaSetPt */
extern "C" __attribute__((visibility("default"))) int ptaSetPt(void) {
    ALOGD("ptaSetPt() called");
    return 0;
}

/* Demangled: pixChangeRefcount */
extern "C" __attribute__((visibility("default"))) int pixChangeRefcount(void) {
    ALOGD("pixChangeRefcount() called");
    return 0;
}

/* Demangled: pixSetMasked */
extern "C" __attribute__((visibility("default"))) int pixSetMasked(void) {
    ALOGD("pixSetMasked() called");
    return 0;
}

/* Demangled: generatePtaHashBoxa */
extern "C" __attribute__((visibility("default"))) int generatePtaHashBoxa(void) {
    ALOGD("generatePtaHashBoxa() called");
    return 0;
}

/* Demangled: numaAddToNumber */
extern "C" __attribute__((visibility("default"))) int numaAddToNumber(void) {
    ALOGD("numaAddToNumber() called");
    return 0;
}

/* Demangled: l_dnaaFlattenToDna */
extern "C" __attribute__((visibility("default"))) int l_dnaaFlattenToDna(void) {
    ALOGD("l_dnaaFlattenToDna() called");
    return 0;
}

/* Demangled: numaaGetPtrArray */
extern "C" __attribute__((visibility("default"))) int numaaGetPtrArray(void) {
    ALOGD("numaaGetPtrArray() called");
    return 0;
}

/* Demangled: saConcatenatePdf */
extern "C" __attribute__((visibility("default"))) int saConcatenatePdf(void) {
    ALOGD("saConcatenatePdf() called");
    return 0;
}

/* Demangled: fgetPngResolution */
extern "C" __attribute__((visibility("default"))) int fgetPngResolution(void) {
    ALOGD("fgetPngResolution() called");
    return 0;
}

/* Demangled: pixConnCompAreaTransform */
extern "C" __attribute__((visibility("default"))) int pixConnCompAreaTransform(void) {
    ALOGD("pixConnCompAreaTransform() called");
    return 0;
}

/* Demangled: pixProjectiveColor */
extern "C" __attribute__((visibility("default"))) int pixProjectiveColor(void) {
    ALOGD("pixProjectiveColor() called");
    return 0;
}

/* Demangled: boxaReconcileEvenOddHeight */
extern "C" __attribute__((visibility("default"))) int boxaReconcileEvenOddHeight(void) {
    ALOGD("boxaReconcileEvenOddHeight() called");
    return 0;
}

/* Demangled: pixcmapDeserializeFromMemory */
extern "C" __attribute__((visibility("default"))) int pixcmapDeserializeFromMemory(void) {
    ALOGD("pixcmapDeserializeFromMemory() called");
    return 0;
}

/* Demangled: runlengthMembershipOnLine */
extern "C" __attribute__((visibility("default"))) int runlengthMembershipOnLine(void) {
    ALOGD("runlengthMembershipOnLine() called");
    return 0;
}

/* Demangled: pixFlipFHMTGen */
extern "C" __attribute__((visibility("default"))) int pixFlipFHMTGen(void) {
    ALOGD("pixFlipFHMTGen() called");
    return 0;
}

/* Demangled: l_asetGetPrev */
extern "C" __attribute__((visibility("default"))) int l_asetGetPrev(void) {
    ALOGD("l_asetGetPrev() called");
    return 0;
}

/* Demangled: numaGetCountRelativeToZero */
extern "C" __attribute__((visibility("default"))) int numaGetCountRelativeToZero(void) {
    ALOGD("numaGetCountRelativeToZero() called");
    return 0;
}

/* Demangled: genConstrainedNumaInRange */
extern "C" __attribute__((visibility("default"))) int genConstrainedNumaInRange(void) {
    ALOGD("genConstrainedNumaInRange() called");
    return 0;
}

/* Demangled: numaMakeHistogram */
extern "C" __attribute__((visibility("default"))) int numaMakeHistogram(void) {
    ALOGD("numaMakeHistogram() called");
    return 0;
}

/* Demangled: pixFindThreshFgExtent */
extern "C" __attribute__((visibility("default"))) int pixFindThreshFgExtent(void) {
    ALOGD("pixFindThreshFgExtent() called");
    return 0;
}

/* Demangled: parseForProtos */
extern "C" __attribute__((visibility("default"))) int parseForProtos(void) {
    ALOGD("parseForProtos() called");
    return 0;
}

/* Demangled: pixacompCreateFromSA */
extern "C" __attribute__((visibility("default"))) int pixacompCreateFromSA(void) {
    ALOGD("pixacompCreateFromSA() called");
    return 0;
}

/* Demangled: pixMedianFilter */
extern "C" __attribute__((visibility("default"))) int pixMedianFilter(void) {
    ALOGD("pixMedianFilter() called");
    return 0;
}

/* Demangled: readHeaderMemTiff */
extern "C" __attribute__((visibility("default"))) int readHeaderMemTiff(void) {
    ALOGD("readHeaderMemTiff() called");
    return 0;
}

/* Demangled: pixRasteropIP */
extern "C" __attribute__((visibility("default"))) int pixRasteropIP(void) {
    ALOGD("pixRasteropIP() called");
    return 0;
}

/* Demangled: pixMedianCutHisto */
extern "C" __attribute__((visibility("default"))) int pixMedianCutHisto(void) {
    ALOGD("pixMedianCutHisto() called");
    return 0;
}

/* Demangled: pixacompGetCount */
extern "C" __attribute__((visibility("default"))) int pixacompGetCount(void) {
    ALOGD("pixacompGetCount() called");
    return 0;
}

/* Demangled: lqueueGetCount */
extern "C" __attribute__((visibility("default"))) int lqueueGetCount(void) {
    ALOGD("lqueueGetCount() called");
    return 0;
}

/* Demangled: pixWriteMemPnm */
extern "C" __attribute__((visibility("default"))) int pixWriteMemPnm(void) {
    ALOGD("pixWriteMemPnm() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Box_nativeGetGeometry */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Box_nativeGetGeometry(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Box_nativeGetGeometry() called");
    return 0;
}

/* Demangled: pixaGetCount */
extern "C" __attribute__((visibility("default"))) int pixaGetCount(void) {
    ALOGD("pixaGetCount() called");
    return 0;
}

/* Demangled: boxaContainedInBox */
extern "C" __attribute__((visibility("default"))) int boxaContainedInBox(void) {
    ALOGD("boxaContainedInBox() called");
    return 0;
}

/* Demangled: convertYUVToRGB */
extern "C" __attribute__((visibility("default"))) int convertYUVToRGB(void) {
    ALOGD("convertYUVToRGB() called");
    return 0;
}

/* Demangled: pixWriteJp2k */
extern "C" __attribute__((visibility("default"))) int pixWriteJp2k(void) {
    ALOGD("pixWriteJp2k() called");
    return 0;
}

/* Demangled: pixConvertToPdf */
extern "C" __attribute__((visibility("default"))) int pixConvertToPdf(void) {
    ALOGD("pixConvertToPdf() called");
    return 0;
}

/* Demangled: lept_rm_match */
extern "C" __attribute__((visibility("default"))) int lept_rm_match(void) {
    ALOGD("lept_rm_match() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Box_nativeGetHeight */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Box_nativeGetHeight(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Box_nativeGetHeight() called");
    return 0;
}

/* Demangled: ptaTranspose */
extern "C" __attribute__((visibility("default"))) int ptaTranspose(void) {
    ALOGD("ptaTranspose() called");
    return 0;
}

/* Demangled: scaleToGray4Low */
extern "C" __attribute__((visibility("default"))) int scaleToGray4Low(void) {
    ALOGD("scaleToGray4Low() called");
    return 0;
}

/* Demangled: pixConvolve */
extern "C" __attribute__((visibility("default"))) int pixConvolve(void) {
    ALOGD("pixConvolve() called");
    return 0;
}

/* Demangled: pixaWrite */
extern "C" __attribute__((visibility("default"))) int pixaWrite(void) {
    ALOGD("pixaWrite() called");
    return 0;
}

/* Demangled: pixColorGrayMaskedCmap */
extern "C" __attribute__((visibility("default"))) int pixColorGrayMaskedCmap(void) {
    ALOGD("pixColorGrayMaskedCmap() called");
    return 0;
}

/* Demangled: pixClipBoxToEdges */
extern "C" __attribute__((visibility("default"))) int pixClipBoxToEdges(void) {
    ALOGD("pixClipBoxToEdges() called");
    return 0;
}

/* Demangled: pixaaAddBox */
extern "C" __attribute__((visibility("default"))) int pixaaAddBox(void) {
    ALOGD("pixaaAddBox() called");
    return 0;
}

/* Demangled: pixBilinearPtaWithAlpha */
extern "C" __attribute__((visibility("default"))) int pixBilinearPtaWithAlpha(void) {
    ALOGD("pixBilinearPtaWithAlpha() called");
    return 0;
}

/* Demangled: pixTilingPaintTile */
extern "C" __attribute__((visibility("default"))) int pixTilingPaintTile(void) {
    ALOGD("pixTilingPaintTile() called");
    return 0;
}

/* Demangled: fpixCopy */
extern "C" __attribute__((visibility("default"))) int fpixCopy(void) {
    ALOGD("fpixCopy() called");
    return 0;
}

/* Demangled: pixaFindPerimToAreaRatio */
extern "C" __attribute__((visibility("default"))) int pixaFindPerimToAreaRatio(void) {
    ALOGD("pixaFindPerimToAreaRatio() called");
    return 0;
}

/* Demangled: pixaccGetOffset */
extern "C" __attribute__((visibility("default"))) int pixaccGetOffset(void) {
    ALOGD("pixaccGetOffset() called");
    return 0;
}

/* Demangled: pixSelectByAreaFraction */
extern "C" __attribute__((visibility("default"))) int pixSelectByAreaFraction(void) {
    ALOGD("pixSelectByAreaFraction() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Pixa_nativeMergeAndReplacePix */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Pixa_nativeMergeAndReplacePix(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Pixa_nativeMergeAndReplacePix() called");
    return 0;
}

/* Demangled: l_psWriteBoundingBox */
extern "C" __attribute__((visibility("default"))) int l_psWriteBoundingBox(void) {
    ALOGD("l_psWriteBoundingBox() called");
    return 0;
}

/* Demangled: freadHeaderTiff */
extern "C" __attribute__((visibility("default"))) int freadHeaderTiff(void) {
    ALOGD("freadHeaderTiff() called");
    return 0;
}

/* Demangled: boxaWindowedMedian */
extern "C" __attribute__((visibility("default"))) int boxaWindowedMedian(void) {
    ALOGD("boxaWindowedMedian() called");
    return 0;
}

/* Demangled: lheapCreate */
extern "C" __attribute__((visibility("default"))) int lheapCreate(void) {
    ALOGD("lheapCreate() called");
    return 0;
}

/* Demangled: numaSimpleStats */
extern "C" __attribute__((visibility("default"))) int numaSimpleStats(void) {
    ALOGD("numaSimpleStats() called");
    return 0;
}

/* Demangled: pixFlipTB */
extern "C" __attribute__((visibility("default"))) int pixFlipTB(void) {
    ALOGD("pixFlipTB() called");
    return 0;
}

/* Demangled: pixaDisplayTiled */
extern "C" __attribute__((visibility("default"))) int pixaDisplayTiled(void) {
    ALOGD("pixaDisplayTiled() called");
    return 0;
}

/* Demangled: pixCountConnComp */
extern "C" __attribute__((visibility("default"))) int pixCountConnComp(void) {
    ALOGD("pixCountConnComp() called");
    return 0;
}

/* Demangled: boxaaRemoveBoxa */
extern "C" __attribute__((visibility("default"))) int boxaaRemoveBoxa(void) {
    ALOGD("boxaaRemoveBoxa() called");
    return 0;
}

/* Demangled: pixcmapGetRGBA32 */
extern "C" __attribute__((visibility("default"))) int pixcmapGetRGBA32(void) {
    ALOGD("pixcmapGetRGBA32() called");
    return 0;
}

/* Demangled: pixGrayMorphSequence */
extern "C" __attribute__((visibility("default"))) int pixGrayMorphSequence(void) {
    ALOGD("pixGrayMorphSequence() called");
    return 0;
}

/* Demangled: pixScaleWithAlpha */
extern "C" __attribute__((visibility("default"))) int pixScaleWithAlpha(void) {
    ALOGD("pixScaleWithAlpha() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Pix_nativeGetInputFormat */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Pix_nativeGetInputFormat(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Pix_nativeGetInputFormat() called");
    return 0;
}

/* Demangled: numaaAddNuma */
extern "C" __attribute__((visibility("default"))) int numaaAddNuma(void) {
    ALOGD("numaaAddNuma() called");
    return 0;
}

/* Demangled: pixGetMostPopulatedColors */
extern "C" __attribute__((visibility("default"))) int pixGetMostPopulatedColors(void) {
    ALOGD("pixGetMostPopulatedColors() called");
    return 0;
}

/* Demangled: jbClassifyCorrelation */
extern "C" __attribute__((visibility("default"))) int jbClassifyCorrelation(void) {
    ALOGD("jbClassifyCorrelation() called");
    return 0;
}

/* Demangled: create2dIntArray */
extern "C" __attribute__((visibility("default"))) int create2dIntArray(void) {
    ALOGD("create2dIntArray() called");
    return 0;
}

/* Demangled: strcodeCreateFromFile */
extern "C" __attribute__((visibility("default"))) int strcodeCreateFromFile(void) {
    ALOGD("strcodeCreateFromFile() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Pixa_nativeAdd */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Pixa_nativeAdd(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Pixa_nativeAdd() called");
    return 0;
}

/* Demangled: l_dnaCopyParameters */
extern "C" __attribute__((visibility("default"))) int l_dnaCopyParameters(void) {
    ALOGD("l_dnaCopyParameters() called");
    return 0;
}

/* Demangled: ptraDestroy */
extern "C" __attribute__((visibility("default"))) int ptraDestroy(void) {
    ALOGD("ptraDestroy() called");
    return 0;
}

/* Demangled: ptaGetCount */
extern "C" __attribute__((visibility("default"))) int ptaGetCount(void) {
    ALOGD("ptaGetCount() called");
    return 0;
}

/* Demangled: pixGetLocalSkewTransform */
extern "C" __attribute__((visibility("default"))) int pixGetLocalSkewTransform(void) {
    ALOGD("pixGetLocalSkewTransform() called");
    return 0;
}

/* Demangled: pixScanForEdge */
extern "C" __attribute__((visibility("default"))) int pixScanForEdge(void) {
    ALOGD("pixScanForEdge() called");
    return 0;
}

/* Demangled: pixaScale */
extern "C" __attribute__((visibility("default"))) int pixaScale(void) {
    ALOGD("pixaScale() called");
    return 0;
}

/* Demangled: pixaGetBox */
extern "C" __attribute__((visibility("default"))) int pixaGetBox(void) {
    ALOGD("pixaGetBox() called");
    return 0;
}

/* Demangled: l_dnaaGetDnaCount */
extern "C" __attribute__((visibility("default"))) int l_dnaaGetDnaCount(void) {
    ALOGD("l_dnaaGetDnaCount() called");
    return 0;
}

/* Demangled: l_dnaaRead */
extern "C" __attribute__((visibility("default"))) int l_dnaaRead(void) {
    ALOGD("l_dnaaRead() called");
    return 0;
}

/* Demangled: pixSearchGrayMaze */
extern "C" __attribute__((visibility("default"))) int pixSearchGrayMaze(void) {
    ALOGD("pixSearchGrayMaze() called");
    return 0;
}

/* Demangled: pixWriteMemTiff */
extern "C" __attribute__((visibility("default"))) int pixWriteMemTiff(void) {
    ALOGD("pixWriteMemTiff() called");
    return 0;
}

/* Demangled: boxaaFlattenAligned */
extern "C" __attribute__((visibility("default"))) int boxaaFlattenAligned(void) {
    ALOGD("boxaaFlattenAligned() called");
    return 0;
}

/* Demangled: sela4ccThin */
extern "C" __attribute__((visibility("default"))) int sela4ccThin(void) {
    ALOGD("sela4ccThin() called");
    return 0;
}

/* Demangled: pixSetText */
extern "C" __attribute__((visibility("default"))) int pixSetText(void) {
    ALOGD("pixSetText() called");
    return 0;
}

/* Demangled: pixReversalProfile */
extern "C" __attribute__((visibility("default"))) int pixReversalProfile(void) {
    ALOGD("pixReversalProfile() called");
    return 0;
}

/* Demangled: pixacompConvertToPdf */
extern "C" __attribute__((visibility("default"))) int pixacompConvertToPdf(void) {
    ALOGD("pixacompConvertToPdf() called");
    return 0;
}

/* Demangled: regTestSetup */
extern "C" __attribute__((visibility("default"))) int regTestSetup(void) {
    ALOGD("regTestSetup() called");
    return 0;
}

/* Demangled: pixRenderHashBoxaArb */
extern "C" __attribute__((visibility("default"))) int pixRenderHashBoxaArb(void) {
    ALOGD("pixRenderHashBoxaArb() called");
    return 0;
}

/* Demangled: pixProjectivePtaColor */
extern "C" __attribute__((visibility("default"))) int pixProjectivePtaColor(void) {
    ALOGD("pixProjectivePtaColor() called");
    return 0;
}

/* Demangled: recogaReadMem */
extern "C" __attribute__((visibility("default"))) int recogaReadMem(void) {
    ALOGD("recogaReadMem() called");
    return 0;
}

/* Demangled: pixaaDestroy */
extern "C" __attribute__((visibility("default"))) int pixaaDestroy(void) {
    ALOGD("pixaaDestroy() called");
    return 0;
}

/* Demangled: pixcmapWrite */
extern "C" __attribute__((visibility("default"))) int pixcmapWrite(void) {
    ALOGD("pixcmapWrite() called");
    return 0;
}

/* Demangled: l_fileDisplay */
extern "C" __attribute__((visibility("default"))) int l_fileDisplay(void) {
    ALOGD("l_fileDisplay() called");
    return 0;
}

/* Demangled: getProjectiveXformCoeffs */
extern "C" __attribute__((visibility("default"))) int getProjectiveXformCoeffs(void) {
    ALOGD("getProjectiveXformCoeffs() called");
    return 0;
}

/* Demangled: numaWindowedStats */
extern "C" __attribute__((visibility("default"))) int numaWindowedStats(void) {
    ALOGD("numaWindowedStats() called");
    return 0;
}

/* Demangled: pixaInterleave */
extern "C" __attribute__((visibility("default"))) int pixaInterleave(void) {
    ALOGD("pixaInterleave() called");
    return 0;
}

/* Demangled: ptaUnionByHash */
extern "C" __attribute__((visibility("default"))) int ptaUnionByHash(void) {
    ALOGD("ptaUnionByHash() called");
    return 0;
}

/* Demangled: pixRandomHarmonicWarp */
extern "C" __attribute__((visibility("default"))) int pixRandomHarmonicWarp(void) {
    ALOGD("pixRandomHarmonicWarp() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Pixa_nativeDestroy */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Pixa_nativeDestroy(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Pixa_nativeDestroy() called");
    return 0;
}

/* Demangled: dewarpReadMem */
extern "C" __attribute__((visibility("default"))) int dewarpReadMem(void) {
    ALOGD("dewarpReadMem() called");
    return 0;
}

/* Demangled: gplotSimpleXY1 */
extern "C" __attribute__((visibility("default"))) int gplotSimpleXY1(void) {
    ALOGD("gplotSimpleXY1() called");
    return 0;
}

/* Demangled: sarraySelectBySubstring */
extern "C" __attribute__((visibility("default"))) int sarraySelectBySubstring(void) {
    ALOGD("sarraySelectBySubstring() called");
    return 0;
}

/* Demangled: pixcmapAddRGBA */
extern "C" __attribute__((visibility("default"))) int pixcmapAddRGBA(void) {
    ALOGD("pixcmapAddRGBA() called");
    return 0;
}

/* Demangled: pixDilateGray */
extern "C" __attribute__((visibility("default"))) int pixDilateGray(void) {
    ALOGD("pixDilateGray() called");
    return 0;
}

/* Demangled: gaussDistribSampling */
extern "C" __attribute__((visibility("default"))) int gaussDistribSampling(void) {
    ALOGD("gaussDistribSampling() called");
    return 0;
}

/* Demangled: gplotSimpleXY2 */
extern "C" __attribute__((visibility("default"))) int gplotSimpleXY2(void) {
    ALOGD("gplotSimpleXY2() called");
    return 0;
}

/* Demangled: pixScaleGray2xLI */
extern "C" __attribute__((visibility("default"))) int pixScaleGray2xLI(void) {
    ALOGD("pixScaleGray2xLI() called");
    return 0;
}

/* Demangled: numaRemoveNumber */
extern "C" __attribute__((visibility("default"))) int numaRemoveNumber(void) {
    ALOGD("numaRemoveNumber() called");
    return 0;
}

/* Demangled: ptraaInsertPtra */
extern "C" __attribute__((visibility("default"))) int ptraaInsertPtra(void) {
    ALOGD("ptraaInsertPtra() called");
    return 0;
}

/* Demangled: ptaaWriteMem */
extern "C" __attribute__((visibility("default"))) int ptaaWriteMem(void) {
    ALOGD("ptaaWriteMem() called");
    return 0;
}

/* Demangled: selReadStream */
extern "C" __attribute__((visibility("default"))) int selReadStream(void) {
    ALOGD("selReadStream() called");
    return 0;
}

/* Demangled: pixGetAverageMasked */
extern "C" __attribute__((visibility("default"))) int pixGetAverageMasked(void) {
    ALOGD("pixGetAverageMasked() called");
    return 0;
}

/* Demangled: l_getDataQbit */
extern "C" __attribute__((visibility("default"))) int l_getDataQbit(void) {
    ALOGD("l_getDataQbit() called");
    return 0;
}

/* Demangled: pixcmapCopy */
extern "C" __attribute__((visibility("default"))) int pixcmapCopy(void) {
    ALOGD("pixcmapCopy() called");
    return 0;
}

/* Demangled: pixCloseCompBrick */
extern "C" __attribute__((visibility("default"))) int pixCloseCompBrick(void) {
    ALOGD("pixCloseCompBrick() called");
    return 0;
}

/* Demangled: pixDisplayColorArray */
extern "C" __attribute__((visibility("default"))) int pixDisplayColorArray(void) {
    ALOGD("pixDisplayColorArray() called");
    return 0;
}

/* Demangled: pixaExtractColumnFromEachPix */
extern "C" __attribute__((visibility("default"))) int pixaExtractColumnFromEachPix(void) {
    ALOGD("pixaExtractColumnFromEachPix() called");
    return 0;
}

/* Demangled: stringSplitOnToken */
extern "C" __attribute__((visibility("default"))) int stringSplitOnToken(void) {
    ALOGD("stringSplitOnToken() called");
    return 0;
}

/* Demangled: pixSetSelectCmap */
extern "C" __attribute__((visibility("default"))) int pixSetSelectCmap(void) {
    ALOGD("pixSetSelectCmap() called");
    return 0;
}

/* Demangled: sarrayGenerateIntegers */
extern "C" __attribute__((visibility("default"))) int sarrayGenerateIntegers(void) {
    ALOGD("sarrayGenerateIntegers() called");
    return 0;
}

/* Demangled: pixacompAddPixcomp */
extern "C" __attribute__((visibility("default"))) int pixacompAddPixcomp(void) {
    ALOGD("pixacompAddPixcomp() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_memclr(void) __asm__("__aeabi_memclr");
int fn___aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: pixComparePhotoRegionsByHisto */
extern "C" __attribute__((visibility("default"))) int pixComparePhotoRegionsByHisto(void) {
    ALOGD("pixComparePhotoRegionsByHisto() called");
    return 0;
}

/* Demangled: pixModifyHue */
extern "C" __attribute__((visibility("default"))) int pixModifyHue(void) {
    ALOGD("pixModifyHue() called");
    return 0;
}

/* Demangled: numaLogicalOp */
extern "C" __attribute__((visibility("default"))) int numaLogicalOp(void) {
    ALOGD("numaLogicalOp() called");
    return 0;
}

/* Demangled: extractRGBAValues */
extern "C" __attribute__((visibility("default"))) int extractRGBAValues(void) {
    ALOGD("extractRGBAValues() called");
    return 0;
}

/* Demangled: pixaGetPixDimensions */
extern "C" __attribute__((visibility("default"))) int pixaGetPixDimensions(void) {
    ALOGD("pixaGetPixDimensions() called");
    return 0;
}

/* Demangled: l_byteaJoin */
extern "C" __attribute__((visibility("default"))) int l_byteaJoin(void) {
    ALOGD("l_byteaJoin() called");
    return 0;
}

/* Demangled: lstackDestroy */
extern "C" __attribute__((visibility("default"))) int lstackDestroy(void) {
    ALOGD("lstackDestroy() called");
    return 0;
}

/* Demangled: dewarpaModelStatus */
extern "C" __attribute__((visibility("default"))) int dewarpaModelStatus(void) {
    ALOGD("dewarpaModelStatus() called");
    return 0;
}

/* Demangled: pixGrayQuantFromCmap */
extern "C" __attribute__((visibility("default"))) int pixGrayQuantFromCmap(void) {
    ALOGD("pixGrayQuantFromCmap() called");
    return 0;
}

/* Demangled: dewarpaInsertRefModels */
extern "C" __attribute__((visibility("default"))) int dewarpaInsertRefModels(void) {
    ALOGD("dewarpaInsertRefModels() called");
    return 0;
}

/* Demangled: ditherToBinaryLineLow */
extern "C" __attribute__((visibility("default"))) int ditherToBinaryLineLow(void) {
    ALOGD("ditherToBinaryLineLow() called");
    return 0;
}

/* Demangled: pixaSizeRange */
extern "C" __attribute__((visibility("default"))) int pixaSizeRange(void) {
    ALOGD("pixaSizeRange() called");
    return 0;
}

/* Demangled: convertOnLittleEnd16 */
extern "C" __attribute__((visibility("default"))) int convertOnLittleEnd16(void) {
    ALOGD("convertOnLittleEnd16() called");
    return 0;
}

/* Demangled: pixCreateHeader */
extern "C" __attribute__((visibility("default"))) int pixCreateHeader(void) {
    ALOGD("pixCreateHeader() called");
    return 0;
}

/* Demangled: pixGetColorNearMaskBoundary */
extern "C" __attribute__((visibility("default"))) int pixGetColorNearMaskBoundary(void) {
    ALOGD("pixGetColorNearMaskBoundary() called");
    return 0;
}

/* Demangled: pixWarpStereoscopic */
extern "C" __attribute__((visibility("default"))) int pixWarpStereoscopic(void) {
    ALOGD("pixWarpStereoscopic() called");
    return 0;
}

/* Demangled: pixaSplitPix */
extern "C" __attribute__((visibility("default"))) int pixaSplitPix(void) {
    ALOGD("pixaSplitPix() called");
    return 0;
}

/* Demangled: pixFindAreaPerimRatio */
extern "C" __attribute__((visibility("default"))) int pixFindAreaPerimRatio(void) {
    ALOGD("pixFindAreaPerimRatio() called");
    return 0;
}

/* Demangled: pixGetWpl */
extern "C" __attribute__((visibility("default"))) int pixGetWpl(void) {
    ALOGD("pixGetWpl() called");
    return 0;
}

/* Demangled: ptaaDestroy */
extern "C" __attribute__((visibility("default"))) int ptaaDestroy(void) {
    ALOGD("ptaaDestroy() called");
    return 0;
}

/* Demangled: readHeaderJp2k */
extern "C" __attribute__((visibility("default"))) int readHeaderJp2k(void) {
    ALOGD("readHeaderJp2k() called");
    return 0;
}

/* Demangled: ptaCopy */
extern "C" __attribute__((visibility("default"))) int ptaCopy(void) {
    ALOGD("ptaCopy() called");
    return 0;
}

/* Demangled: pixThresholdTo2bpp */
extern "C" __attribute__((visibility("default"))) int pixThresholdTo2bpp(void) {
    ALOGD("pixThresholdTo2bpp() called");
    return 0;
}

/* Demangled: selCreateComb */
extern "C" __attribute__((visibility("default"))) int selCreateComb(void) {
    ALOGD("selCreateComb() called");
    return 0;
}

/* Demangled: ptaSort */
extern "C" __attribute__((visibility("default"))) int ptaSort(void) {
    ALOGD("ptaSort() called");
    return 0;
}

/* Demangled: convertLABToXYZ */
extern "C" __attribute__((visibility("default"))) int convertLABToXYZ(void) {
    ALOGD("convertLABToXYZ() called");
    return 0;
}

/* Demangled: dewarpDebug */
extern "C" __attribute__((visibility("default"))) int dewarpDebug(void) {
    ALOGD("dewarpDebug() called");
    return 0;
}

/* Demangled: pixSubsampleBoundaryPixels */
extern "C" __attribute__((visibility("default"))) int pixSubsampleBoundaryPixels(void) {
    ALOGD("pixSubsampleBoundaryPixels() called");
    return 0;
}

/* Demangled: __udivmodsi4 */
extern "C" __attribute__((visibility("default"))) int fn___udivmodsi4(void) __asm__("__udivmodsi4");
int fn___udivmodsi4(void) {
    ALOGD("__udivmodsi4() called");
    return 0;
}

/* Demangled: dewarpaApplyDisparity */
extern "C" __attribute__((visibility("default"))) int dewarpaApplyDisparity(void) {
    ALOGD("dewarpaApplyDisparity() called");
    return 0;
}

/* Demangled: l_asetCreateFromDna */
extern "C" __attribute__((visibility("default"))) int l_asetCreateFromDna(void) {
    ALOGD("l_asetCreateFromDna() called");
    return 0;
}

/* Demangled: pixScaleRGBToGrayFast */
extern "C" __attribute__((visibility("default"))) int pixScaleRGBToGrayFast(void) {
    ALOGD("pixScaleRGBToGrayFast() called");
    return 0;
}

/* Demangled: pixGetExtremeValue */
extern "C" __attribute__((visibility("default"))) int pixGetExtremeValue(void) {
    ALOGD("pixGetExtremeValue() called");
    return 0;
}

/* Demangled: scaleColor2xLILow */
extern "C" __attribute__((visibility("default"))) int scaleColor2xLILow(void) {
    ALOGD("scaleColor2xLILow() called");
    return 0;
}

/* Demangled: fpixEndianByteSwap */
extern "C" __attribute__((visibility("default"))) int fpixEndianByteSwap(void) {
    ALOGD("fpixEndianByteSwap() called");
    return 0;
}

/* Demangled: l_generateCIDataForPdf */
extern "C" __attribute__((visibility("default"))) int l_generateCIDataForPdf(void) {
    ALOGD("l_generateCIDataForPdf() called");
    return 0;
}

/* Demangled: rchaExtract */
extern "C" __attribute__((visibility("default"))) int rchaExtract(void) {
    ALOGD("rchaExtract() called");
    return 0;
}

/* Demangled: pixClone */
extern "C" __attribute__((visibility("default"))) int pixClone(void) {
    ALOGD("pixClone() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_ReadFile_nativeReadFile */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_ReadFile_nativeReadFile(void) {
    ALOGD("Java_com_googlecode_leptonica_android_ReadFile_nativeReadFile() called");
    return 0;
}

/* Demangled: pixGetRankValueMaskedRGB */
extern "C" __attribute__((visibility("default"))) int pixGetRankValueMaskedRGB(void) {
    ALOGD("pixGetRankValueMaskedRGB() called");
    return 0;
}

/* Demangled: pixThresholdByConnComp */
extern "C" __attribute__((visibility("default"))) int pixThresholdByConnComp(void) {
    ALOGD("pixThresholdByConnComp() called");
    return 0;
}

/* Demangled: pixMaskConnComp */
extern "C" __attribute__((visibility("default"))) int pixMaskConnComp(void) {
    ALOGD("pixMaskConnComp() called");
    return 0;
}

/* Demangled: pixacompGetPix */
extern "C" __attribute__((visibility("default"))) int pixacompGetPix(void) {
    ALOGD("pixacompGetPix() called");
    return 0;
}

/* Demangled: dpixScaleByInteger */
extern "C" __attribute__((visibility("default"))) int dpixScaleByInteger(void) {
    ALOGD("dpixScaleByInteger() called");
    return 0;
}

/* Demangled: pixThresholdGrayArb */
extern "C" __attribute__((visibility("default"))) int pixThresholdGrayArb(void) {
    ALOGD("pixThresholdGrayArb() called");
    return 0;
}

/* Demangled: ptaNoisyQuadraticLSF */
extern "C" __attribute__((visibility("default"))) int ptaNoisyQuadraticLSF(void) {
    ALOGD("ptaNoisyQuadraticLSF() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Skew_nativeFindSkew */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Skew_nativeFindSkew(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Skew_nativeFindSkew() called");
    return 0;
}

/* Demangled: l_binaryCopy */
extern "C" __attribute__((visibility("default"))) int l_binaryCopy(void) {
    ALOGD("l_binaryCopy() called");
    return 0;
}

/* Demangled: l_binaryReadStream */
extern "C" __attribute__((visibility("default"))) int l_binaryReadStream(void) {
    ALOGD("l_binaryReadStream() called");
    return 0;
}

/* Demangled: numaaTruncate */
extern "C" __attribute__((visibility("default"))) int numaaTruncate(void) {
    ALOGD("numaaTruncate() called");
    return 0;
}

/* Demangled: fpixDisplayMaxDynamicRange */
extern "C" __attribute__((visibility("default"))) int fpixDisplayMaxDynamicRange(void) {
    ALOGD("fpixDisplayMaxDynamicRange() called");
    return 0;
}

/* Demangled: fpixAffinePta */
extern "C" __attribute__((visibility("default"))) int fpixAffinePta(void) {
    ALOGD("fpixAffinePta() called");
    return 0;
}

/* Demangled: pixAverageInRect */
extern "C" __attribute__((visibility("default"))) int pixAverageInRect(void) {
    ALOGD("pixAverageInRect() called");
    return 0;
}

/* Demangled: pixaClear */
extern "C" __attribute__((visibility("default"))) int pixaClear(void) {
    ALOGD("pixaClear() called");
    return 0;
}

/* Demangled: pixaRenderComponent */
extern "C" __attribute__((visibility("default"))) int pixaRenderComponent(void) {
    ALOGD("pixaRenderComponent() called");
    return 0;
}

/* Demangled: pixAddMinimalGrayColormap8 */
extern "C" __attribute__((visibility("default"))) int pixAddMinimalGrayColormap8(void) {
    ALOGD("pixAddMinimalGrayColormap8() called");
    return 0;
}

/* Demangled: pixBackgroundNormRGBArrays */
extern "C" __attribute__((visibility("default"))) int pixBackgroundNormRGBArrays(void) {
    ALOGD("pixBackgroundNormRGBArrays() called");
    return 0;
}

/* Demangled: lheapSort */
extern "C" __attribute__((visibility("default"))) int lheapSort(void) {
    ALOGD("lheapSort() called");
    return 0;
}

/* Demangled: pixaaWrite */
extern "C" __attribute__((visibility("default"))) int pixaaWrite(void) {
    ALOGD("pixaaWrite() called");
    return 0;
}

/* Demangled: pixWriteWebP */
extern "C" __attribute__((visibility("default"))) int pixWriteWebP(void) {
    ALOGD("pixWriteWebP() called");
    return 0;
}

/* Demangled: pixRemoveBorderGeneral */
extern "C" __attribute__((visibility("default"))) int pixRemoveBorderGeneral(void) {
    ALOGD("pixRemoveBorderGeneral() called");
    return 0;
}

/* Demangled: pixDecideIfPhotoImage */
extern "C" __attribute__((visibility("default"))) int pixDecideIfPhotoImage(void) {
    ALOGD("pixDecideIfPhotoImage() called");
    return 0;
}

/* Demangled: lept_direxists */
extern "C" __attribute__((visibility("default"))) int lept_direxists(void) {
    ALOGD("lept_direxists() called");
    return 0;
}

/* Demangled: boxaSelectBySize */
extern "C" __attribute__((visibility("default"))) int boxaSelectBySize(void) {
    ALOGD("boxaSelectBySize() called");
    return 0;
}

/* Demangled: pixelLinearMapToTargetColor */
extern "C" __attribute__((visibility("default"))) int pixelLinearMapToTargetColor(void) {
    ALOGD("pixelLinearMapToTargetColor() called");
    return 0;
}

/* Demangled: numaGetSumOnInterval */
extern "C" __attribute__((visibility("default"))) int numaGetSumOnInterval(void) {
    ALOGD("numaGetSumOnInterval() called");
    return 0;
}

/* Demangled: pixGetRowStats */
extern "C" __attribute__((visibility("default"))) int pixGetRowStats(void) {
    ALOGD("pixGetRowStats() called");
    return 0;
}

/* Demangled: pixAffineGray */
extern "C" __attribute__((visibility("default"))) int pixAffineGray(void) {
    ALOGD("pixAffineGray() called");
    return 0;
}

/* Demangled: pixEqual */
extern "C" __attribute__((visibility("default"))) int pixEqual(void) {
    ALOGD("pixEqual() called");
    return 0;
}

/* Demangled: ptaGetSortIndex */
extern "C" __attribute__((visibility("default"))) int ptaGetSortIndex(void) {
    ALOGD("ptaGetSortIndex() called");
    return 0;
}

/* Demangled: ptaaWrite */
extern "C" __attribute__((visibility("default"))) int ptaaWrite(void) {
    ALOGD("ptaaWrite() called");
    return 0;
}

/* Demangled: pixMirrorDetect */
extern "C" __attribute__((visibility("default"))) int pixMirrorDetect(void) {
    ALOGD("pixMirrorDetect() called");
    return 0;
}

/* Demangled: ditherTo2bppLineLow */
extern "C" __attribute__((visibility("default"))) int ditherTo2bppLineLow(void) {
    ALOGD("ditherTo2bppLineLow() called");
    return 0;
}

/* Demangled: pixFindOverlapFraction */
extern "C" __attribute__((visibility("default"))) int pixFindOverlapFraction(void) {
    ALOGD("pixFindOverlapFraction() called");
    return 0;
}

/* Demangled: pixProjectivePta */
extern "C" __attribute__((visibility("default"))) int pixProjectivePta(void) {
    ALOGD("pixProjectivePta() called");
    return 0;
}

/* Demangled: pixGetInputFormat */
extern "C" __attribute__((visibility("default"))) int pixGetInputFormat(void) {
    ALOGD("pixGetInputFormat() called");
    return 0;
}

/* Demangled: pixGetRGBPixel */
extern "C" __attribute__((visibility("default"))) int pixGetRGBPixel(void) {
    ALOGD("pixGetRGBPixel() called");
    return 0;
}

/* Demangled: pixGetRankValue */
extern "C" __attribute__((visibility("default"))) int pixGetRankValue(void) {
    ALOGD("pixGetRankValue() called");
    return 0;
}

/* Demangled: pixLinearTRCTiled */
extern "C" __attribute__((visibility("default"))) int pixLinearTRCTiled(void) {
    ALOGD("pixLinearTRCTiled() called");
    return 0;
}

/* Demangled: pixSetRGBComponent */
extern "C" __attribute__((visibility("default"))) int pixSetRGBComponent(void) {
    ALOGD("pixSetRGBComponent() called");
    return 0;
}

/* Demangled: numaaGetNuma */
extern "C" __attribute__((visibility("default"))) int numaaGetNuma(void) {
    ALOGD("numaaGetNuma() called");
    return 0;
}

/* Demangled: ptaGetMinMax */
extern "C" __attribute__((visibility("default"))) int ptaGetMinMax(void) {
    ALOGD("ptaGetMinMax() called");
    return 0;
}

/* Demangled: pixRenderBoxa */
extern "C" __attribute__((visibility("default"))) int pixRenderBoxa(void) {
    ALOGD("pixRenderBoxa() called");
    return 0;
}

/* Demangled: l_clearDataDibit */
extern "C" __attribute__((visibility("default"))) int l_clearDataDibit(void) {
    ALOGD("l_clearDataDibit() called");
    return 0;
}

/* Demangled: pixScaleAreaMap */
extern "C" __attribute__((visibility("default"))) int pixScaleAreaMap(void) {
    ALOGD("pixScaleAreaMap() called");
    return 0;
}

/* Demangled: thresholdTo4bppLow */
extern "C" __attribute__((visibility("default"))) int thresholdTo4bppLow(void) {
    ALOGD("thresholdTo4bppLow() called");
    return 0;
}

/* Demangled: numaGetStatsUsingHistogram */
extern "C" __attribute__((visibility("default"))) int numaGetStatsUsingHistogram(void) {
    ALOGD("numaGetStatsUsingHistogram() called");
    return 0;
}

/* Demangled: l_dnaHashGetDna */
extern "C" __attribute__((visibility("default"))) int l_dnaHashGetDna(void) {
    ALOGD("l_dnaHashGetDna() called");
    return 0;
}

/* Demangled: regTestCompareValues */
extern "C" __attribute__((visibility("default"))) int regTestCompareValues(void) {
    ALOGD("regTestCompareValues() called");
    return 0;
}

/* Demangled: pixExpandReplicate */
extern "C" __attribute__((visibility("default"))) int pixExpandReplicate(void) {
    ALOGD("pixExpandReplicate() called");
    return 0;
}

/* Demangled: l_generateJpegData */
extern "C" __attribute__((visibility("default"))) int l_generateJpegData(void) {
    ALOGD("l_generateJpegData() called");
    return 0;
}

/* Demangled: pixConvertForPSWrap */
extern "C" __attribute__((visibility("default"))) int pixConvertForPSWrap(void) {
    ALOGD("pixConvertForPSWrap() called");
    return 0;
}

/* Demangled: pixVShear */
extern "C" __attribute__((visibility("default"))) int pixVShear(void) {
    ALOGD("pixVShear() called");
    return 0;
}

/* Demangled: gplotSimpleXYN */
extern "C" __attribute__((visibility("default"))) int gplotSimpleXYN(void) {
    ALOGD("gplotSimpleXYN() called");
    return 0;
}

/* Demangled: l_amapFind */
extern "C" __attribute__((visibility("default"))) int l_amapFind(void) {
    ALOGD("l_amapFind() called");
    return 0;
}

/* Demangled: convertUnscaledToPdfData */
extern "C" __attribute__((visibility("default"))) int convertUnscaledToPdfData(void) {
    ALOGD("convertUnscaledToPdfData() called");
    return 0;
}

/* Demangled: pixConvertRGBToGray */
extern "C" __attribute__((visibility("default"))) int pixConvertRGBToGray(void) {
    ALOGD("pixConvertRGBToGray() called");
    return 0;
}

/* Demangled: recogShowAverageTemplates */
extern "C" __attribute__((visibility("default"))) int recogShowAverageTemplates(void) {
    ALOGD("recogShowAverageTemplates() called");
    return 0;
}

/* Demangled: scaleToGray3Low */
extern "C" __attribute__((visibility("default"))) int scaleToGray3Low(void) {
    ALOGD("scaleToGray3Low() called");
    return 0;
}

/* Demangled: pixSeedfillGrayInvSimple */
extern "C" __attribute__((visibility("default"))) int pixSeedfillGrayInvSimple(void) {
    ALOGD("pixSeedfillGrayInvSimple() called");
    return 0;
}

/* Demangled: pixSimpleCaptcha */
extern "C" __attribute__((visibility("default"))) int pixSimpleCaptcha(void) {
    ALOGD("pixSimpleCaptcha() called");
    return 0;
}

/* Demangled: pixConvert16To8 */
extern "C" __attribute__((visibility("default"))) int pixConvert16To8(void) {
    ALOGD("pixConvert16To8() called");
    return 0;
}

/* Demangled: readHeaderSpix */
extern "C" __attribute__((visibility("default"))) int readHeaderSpix(void) {
    ALOGD("readHeaderSpix() called");
    return 0;
}

/* Demangled: pixReadMemFromMultipageTiff */
extern "C" __attribute__((visibility("default"))) int pixReadMemFromMultipageTiff(void) {
    ALOGD("pixReadMemFromMultipageTiff() called");
    return 0;
}

/* Demangled: ccbaGenerateGlobalLocs */
extern "C" __attribute__((visibility("default"))) int ccbaGenerateGlobalLocs(void) {
    ALOGD("ccbaGenerateGlobalLocs() called");
    return 0;
}

/* Demangled: pixCompareTiled */
extern "C" __attribute__((visibility("default"))) int pixCompareTiled(void) {
    ALOGD("pixCompareTiled() called");
    return 0;
}

/* Demangled: pixSaveTiledOutline */
extern "C" __attribute__((visibility("default"))) int pixSaveTiledOutline(void) {
    ALOGD("pixSaveTiledOutline() called");
    return 0;
}

/* Demangled: pixcompDetermineFormat */
extern "C" __attribute__((visibility("default"))) int pixcompDetermineFormat(void) {
    ALOGD("pixcompDetermineFormat() called");
    return 0;
}

/* Demangled: pixBackgroundNormSimple */
extern "C" __attribute__((visibility("default"))) int pixBackgroundNormSimple(void) {
    ALOGD("pixBackgroundNormSimple() called");
    return 0;
}

/* Demangled: boxaTransformOrdered */
extern "C" __attribute__((visibility("default"))) int boxaTransformOrdered(void) {
    ALOGD("boxaTransformOrdered() called");
    return 0;
}

/* Demangled: pixcmapCreateRandom */
extern "C" __attribute__((visibility("default"))) int pixcmapCreateRandom(void) {
    ALOGD("pixcmapCreateRandom() called");
    return 0;
}

/* Demangled: pixcmapToArrays */
extern "C" __attribute__((visibility("default"))) int pixcmapToArrays(void) {
    ALOGD("pixcmapToArrays() called");
    return 0;
}

/* Demangled: pixaConvertToNUpPixa */
extern "C" __attribute__((visibility("default"))) int pixaConvertToNUpPixa(void) {
    ALOGD("pixaConvertToNUpPixa() called");
    return 0;
}

/* Demangled: pixAlphaBlendUniform */
extern "C" __attribute__((visibility("default"))) int pixAlphaBlendUniform(void) {
    ALOGD("pixAlphaBlendUniform() called");
    return 0;
}

/* Demangled: pixGetRandomPixel */
extern "C" __attribute__((visibility("default"))) int pixGetRandomPixel(void) {
    ALOGD("pixGetRandomPixel() called");
    return 0;
}

/* Demangled: pixaWriteCompressedToPS */
extern "C" __attribute__((visibility("default"))) int pixaWriteCompressedToPS(void) {
    ALOGD("pixaWriteCompressedToPS() called");
    return 0;
}

/* Demangled: scaleGrayAreaMapLow */
extern "C" __attribute__((visibility("default"))) int scaleGrayAreaMapLow(void) {
    ALOGD("scaleGrayAreaMapLow() called");
    return 0;
}

/* Demangled: pixcmapClear */
extern "C" __attribute__((visibility("default"))) int pixcmapClear(void) {
    ALOGD("pixcmapClear() called");
    return 0;
}

/* Demangled: pixaConvertTo8Color */
extern "C" __attribute__((visibility("default"))) int pixaConvertTo8Color(void) {
    ALOGD("pixaConvertTo8Color() called");
    return 0;
}

/* Demangled: boxaGetExtent */
extern "C" __attribute__((visibility("default"))) int boxaGetExtent(void) {
    ALOGD("boxaGetExtent() called");
    return 0;
}

/* Demangled: pixcmapGetRGBA */
extern "C" __attribute__((visibility("default"))) int pixcmapGetRGBA(void) {
    ALOGD("pixcmapGetRGBA() called");
    return 0;
}

/* Demangled: pixEqualizeTRC */
extern "C" __attribute__((visibility("default"))) int pixEqualizeTRC(void) {
    ALOGD("pixEqualizeTRC() called");
    return 0;
}

/* Demangled: pixGetColorHistogram */
extern "C" __attribute__((visibility("default"))) int pixGetColorHistogram(void) {
    ALOGD("pixGetColorHistogram() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Pix_nativeGetWidth */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Pix_nativeGetWidth(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Pix_nativeGetWidth() called");
    return 0;
}

/* Demangled: pixGetRankValueMasked */
extern "C" __attribute__((visibility("default"))) int pixGetRankValueMasked(void) {
    ALOGD("pixGetRankValueMasked() called");
    return 0;
}

/* Demangled: fpixProjectivePta */
extern "C" __attribute__((visibility("default"))) int fpixProjectivePta(void) {
    ALOGD("fpixProjectivePta() called");
    return 0;
}

/* Demangled: pixSetSelectMaskedCmap */
extern "C" __attribute__((visibility("default"))) int pixSetSelectMaskedCmap(void) {
    ALOGD("pixSetSelectMaskedCmap() called");
    return 0;
}

/* Demangled: pixAbsDiffByRow */
extern "C" __attribute__((visibility("default"))) int pixAbsDiffByRow(void) {
    ALOGD("pixAbsDiffByRow() called");
    return 0;
}

/* Demangled: pixWriteMem */
extern "C" __attribute__((visibility("default"))) int pixWriteMem(void) {
    ALOGD("pixWriteMem() called");
    return 0;
}

/* Demangled: l_productMat2 */
extern "C" __attribute__((visibility("default"))) int l_productMat2(void) {
    ALOGD("l_productMat2() called");
    return 0;
}

/* Demangled: resetMorphBoundaryCondition */
extern "C" __attribute__((visibility("default"))) int resetMorphBoundaryCondition(void) {
    ALOGD("resetMorphBoundaryCondition() called");
    return 0;
}

/* Demangled: pixWindowedVarianceOnLine */
extern "C" __attribute__((visibility("default"))) int pixWindowedVarianceOnLine(void) {
    ALOGD("pixWindowedVarianceOnLine() called");
    return 0;
}

/* Demangled: recogAppend */
extern "C" __attribute__((visibility("default"))) int recogAppend(void) {
    ALOGD("recogAppend() called");
    return 0;
}

/* Demangled: l_productMat3 */
extern "C" __attribute__((visibility("default"))) int l_productMat3(void) {
    ALOGD("l_productMat3() called");
    return 0;
}

/* Demangled: boxaCopy */
extern "C" __attribute__((visibility("default"))) int boxaCopy(void) {
    ALOGD("boxaCopy() called");
    return 0;
}

/* Demangled: dpixSetResolution */
extern "C" __attribute__((visibility("default"))) int dpixSetResolution(void) {
    ALOGD("dpixSetResolution() called");
    return 0;
}

/* Demangled: createMatrix2dRotate */
extern "C" __attribute__((visibility("default"))) int createMatrix2dRotate(void) {
    ALOGD("createMatrix2dRotate() called");
    return 0;
}

/* Demangled: l_productMat4 */
extern "C" __attribute__((visibility("default"))) int l_productMat4(void) {
    ALOGD("l_productMat4() called");
    return 0;
}

/* Demangled: boxaSort */
extern "C" __attribute__((visibility("default"))) int boxaSort(void) {
    ALOGD("boxaSort() called");
    return 0;
}

/* Demangled: pixTilingDestroy */
extern "C" __attribute__((visibility("default"))) int pixTilingDestroy(void) {
    ALOGD("pixTilingDestroy() called");
    return 0;
}

/* Demangled: fpixaGetData */
extern "C" __attribute__((visibility("default"))) int fpixaGetData(void) {
    ALOGD("fpixaGetData() called");
    return 0;
}

/* Demangled: dewarpFindVertDisparity */
extern "C" __attribute__((visibility("default"))) int dewarpFindVertDisparity(void) {
    ALOGD("dewarpFindVertDisparity() called");
    return 0;
}

/* Demangled: pixSetDepth */
extern "C" __attribute__((visibility("default"))) int pixSetDepth(void) {
    ALOGD("pixSetDepth() called");
    return 0;
}

/* Demangled: ptaaRead */
extern "C" __attribute__((visibility("default"))) int ptaaRead(void) {
    ALOGD("ptaaRead() called");
    return 0;
}

/* Demangled: pixAffinePta */
extern "C" __attribute__((visibility("default"))) int pixAffinePta(void) {
    ALOGD("pixAffinePta() called");
    return 0;
}

/* Demangled: dpixGetRefcount */
extern "C" __attribute__((visibility("default"))) int dpixGetRefcount(void) {
    ALOGD("dpixGetRefcount() called");
    return 0;
}

/* Demangled: pixStereoFromPair */
extern "C" __attribute__((visibility("default"))) int pixStereoFromPair(void) {
    ALOGD("pixStereoFromPair() called");
    return 0;
}

/* Demangled: pixSelectLargeULComp */
extern "C" __attribute__((visibility("default"))) int pixSelectLargeULComp(void) {
    ALOGD("pixSelectLargeULComp() called");
    return 0;
}

/* Demangled: pixcmapToRGBTable */
extern "C" __attribute__((visibility("default"))) int pixcmapToRGBTable(void) {
    ALOGD("pixcmapToRGBTable() called");
    return 0;
}

/* Demangled: pixCropAlignedToCentroid */
extern "C" __attribute__((visibility("default"))) int pixCropAlignedToCentroid(void) {
    ALOGD("pixCropAlignedToCentroid() called");
    return 0;
}

/* Demangled: l_dnaAddNumber */
extern "C" __attribute__((visibility("default"))) int l_dnaAddNumber(void) {
    ALOGD("l_dnaAddNumber() called");
    return 0;
}

/* Demangled: pixCreateTemplate */
extern "C" __attribute__((visibility("default"))) int pixCreateTemplate(void) {
    ALOGD("pixCreateTemplate() called");
    return 0;
}

/* Demangled: pixCloseSafeBrick */
extern "C" __attribute__((visibility("default"))) int pixCloseSafeBrick(void) {
    ALOGD("pixCloseSafeBrick() called");
    return 0;
}

/* Demangled: l_dnaRemoveNumber */
extern "C" __attribute__((visibility("default"))) int l_dnaRemoveNumber(void) {
    ALOGD("l_dnaRemoveNumber() called");
    return 0;
}

/* Demangled: numaChangeRefcount */
extern "C" __attribute__((visibility("default"))) int numaChangeRefcount(void) {
    ALOGD("numaChangeRefcount() called");
    return 0;
}

/* Demangled: pixConvertToPdfDataSegmented */
extern "C" __attribute__((visibility("default"))) int pixConvertToPdfDataSegmented(void) {
    ALOGD("pixConvertToPdfDataSegmented() called");
    return 0;
}

/* Demangled: ptaSubsample */
extern "C" __attribute__((visibility("default"))) int ptaSubsample(void) {
    ALOGD("ptaSubsample() called");
    return 0;
}

/* Demangled: pixEmbedForRotation */
extern "C" __attribute__((visibility("default"))) int pixEmbedForRotation(void) {
    ALOGD("pixEmbedForRotation() called");
    return 0;
}

/* Demangled: lstackCreate */
extern "C" __attribute__((visibility("default"))) int lstackCreate(void) {
    ALOGD("lstackCreate() called");
    return 0;
}

/* Demangled: pixConnCompIncrInit */
extern "C" __attribute__((visibility("default"))) int pixConnCompIncrInit(void) {
    ALOGD("pixConnCompIncrInit() called");
    return 0;
}

/* Demangled: pixScaleSmooth */
extern "C" __attribute__((visibility("default"))) int pixScaleSmooth(void) {
    ALOGD("pixScaleSmooth() called");
    return 0;
}

/* Demangled: dpixLinearCombination */
extern "C" __attribute__((visibility("default"))) int dpixLinearCombination(void) {
    ALOGD("dpixLinearCombination() called");
    return 0;
}

/* Demangled: pixSelectBySize */
extern "C" __attribute__((visibility("default"))) int pixSelectBySize(void) {
    ALOGD("pixSelectBySize() called");
    return 0;
}

/* Demangled: convertGrayCodeToBinary */
extern "C" __attribute__((visibility("default"))) int convertGrayCodeToBinary(void) {
    ALOGD("convertGrayCodeToBinary() called");
    return 0;
}

/* Demangled: pixCopy */
extern "C" __attribute__((visibility("default"))) int pixCopy(void) {
    ALOGD("pixCopy() called");
    return 0;
}

/* Demangled: l_byteaInitFromStream */
extern "C" __attribute__((visibility("default"))) int l_byteaInitFromStream(void) {
    ALOGD("l_byteaInitFromStream() called");
    return 0;
}

/* Demangled: locateOutsideSeedPixel */
extern "C" __attribute__((visibility("default"))) int locateOutsideSeedPixel(void) {
    ALOGD("locateOutsideSeedPixel() called");
    return 0;
}

/* Demangled: dpixCopy */
extern "C" __attribute__((visibility("default"))) int dpixCopy(void) {
    ALOGD("dpixCopy() called");
    return 0;
}

/* Demangled: ptraInsert */
extern "C" __attribute__((visibility("default"))) int ptraInsert(void) {
    ALOGD("ptraInsert() called");
    return 0;
}

/* Demangled: pixFinalAccumulateThreshold */
extern "C" __attribute__((visibility("default"))) int pixFinalAccumulateThreshold(void) {
    ALOGD("pixFinalAccumulateThreshold() called");
    return 0;
}

/* Demangled: sudokuOutput */
extern "C" __attribute__((visibility("default"))) int sudokuOutput(void) {
    ALOGD("sudokuOutput() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_ReadFile_nativeReplaceBytes8 */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_ReadFile_nativeReplaceBytes8(void) {
    ALOGD("Java_com_googlecode_leptonica_android_ReadFile_nativeReplaceBytes8() called");
    return 0;
}

/* Demangled: pixSeedspread */
extern "C" __attribute__((visibility("default"))) int pixSeedspread(void) {
    ALOGD("pixSeedspread() called");
    return 0;
}

/* Demangled: sela4and8ccThin */
extern "C" __attribute__((visibility("default"))) int sela4and8ccThin(void) {
    ALOGD("sela4and8ccThin() called");
    return 0;
}

/* Demangled: pixcmapGetFreeCount */
extern "C" __attribute__((visibility("default"))) int pixcmapGetFreeCount(void) {
    ALOGD("pixcmapGetFreeCount() called");
    return 0;
}

/* Demangled: pixaDisplayTiledAndScaled */
extern "C" __attribute__((visibility("default"))) int pixaDisplayTiledAndScaled(void) {
    ALOGD("pixaDisplayTiledAndScaled() called");
    return 0;
}

/* Demangled: lheapSwapDown */
extern "C" __attribute__((visibility("default"))) int lheapSwapDown(void) {
    ALOGD("lheapSwapDown() called");
    return 0;
}

/* Demangled: rasteropVipLow */
extern "C" __attribute__((visibility("default"))) int rasteropVipLow(void) {
    ALOGD("rasteropVipLow() called");
    return 0;
}

/* Demangled: pixExtractBorderConnComps */
extern "C" __attribute__((visibility("default"))) int pixExtractBorderConnComps(void) {
    ALOGD("pixExtractBorderConnComps() called");
    return 0;
}

/* Demangled: pixFewColorsOctcubeQuantMixed */
extern "C" __attribute__((visibility("default"))) int pixFewColorsOctcubeQuantMixed(void) {
    ALOGD("pixFewColorsOctcubeQuantMixed() called");
    return 0;
}

/* Demangled: pixRenderBox */
extern "C" __attribute__((visibility("default"))) int pixRenderBox(void) {
    ALOGD("pixRenderBox() called");
    return 0;
}

/* Demangled: scaleGray4xLILineLow */
extern "C" __attribute__((visibility("default"))) int scaleGray4xLILineLow(void) {
    ALOGD("scaleGray4xLILineLow() called");
    return 0;
}

/* Demangled: boxaSelectLargeULBox */
extern "C" __attribute__((visibility("default"))) int boxaSelectLargeULBox(void) {
    ALOGD("boxaSelectLargeULBox() called");
    return 0;
}

/* Demangled: pixBlendInRect */
extern "C" __attribute__((visibility("default"))) int pixBlendInRect(void) {
    ALOGD("pixBlendInRect() called");
    return 0;
}

/* Demangled: pixcmapGetMinDepth */
extern "C" __attribute__((visibility("default"))) int pixcmapGetMinDepth(void) {
    ALOGD("pixcmapGetMinDepth() called");
    return 0;
}

/* Demangled: pixSetOrClearBorder */
extern "C" __attribute__((visibility("default"))) int pixSetOrClearBorder(void) {
    ALOGD("pixSetOrClearBorder() called");
    return 0;
}

/* Demangled: pixSaveTiledWithText */
extern "C" __attribute__((visibility("default"))) int pixSaveTiledWithText(void) {
    ALOGD("pixSaveTiledWithText() called");
    return 0;
}

/* Demangled: readHeaderWebP */
extern "C" __attribute__((visibility("default"))) int readHeaderWebP(void) {
    ALOGD("readHeaderWebP() called");
    return 0;
}

/* Demangled: bbufferRead */
extern "C" __attribute__((visibility("default"))) int bbufferRead(void) {
    ALOGD("bbufferRead() called");
    return 0;
}

/* Demangled: pixTilingNoStripOnPaint */
extern "C" __attribute__((visibility("default"))) int pixTilingNoStripOnPaint(void) {
    ALOGD("pixTilingNoStripOnPaint() called");
    return 0;
}

/* Demangled: dewarpaRead */
extern "C" __attribute__((visibility("default"))) int dewarpaRead(void) {
    ALOGD("dewarpaRead() called");
    return 0;
}

/* Demangled: pixAdaptThresholdToBinary */
extern "C" __attribute__((visibility("default"))) int pixAdaptThresholdToBinary(void) {
    ALOGD("pixAdaptThresholdToBinary() called");
    return 0;
}

/* Demangled: convertNumberedMasksToBoxaa */
extern "C" __attribute__((visibility("default"))) int convertNumberedMasksToBoxaa(void) {
    ALOGD("convertNumberedMasksToBoxaa() called");
    return 0;
}

/* Demangled: writeMultipageTiff */
extern "C" __attribute__((visibility("default"))) int writeMultipageTiff(void) {
    ALOGD("writeMultipageTiff() called");
    return 0;
}

/* Demangled: readHeaderMemPng */
extern "C" __attribute__((visibility("default"))) int readHeaderMemPng(void) {
    ALOGD("readHeaderMemPng() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Pix_nativeCopy */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Pix_nativeCopy(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Pix_nativeCopy() called");
    return 0;
}

/* Demangled: pixConvertTo1 */
extern "C" __attribute__((visibility("default"))) int pixConvertTo1(void) {
    ALOGD("pixConvertTo1() called");
    return 0;
}

/* Demangled: pixDistanceFunction */
extern "C" __attribute__((visibility("default"))) int pixDistanceFunction(void) {
    ALOGD("pixDistanceFunction() called");
    return 0;
}

/* Demangled: makeSubsampleTab2x */
extern "C" __attribute__((visibility("default"))) int makeSubsampleTab2x(void) {
    ALOGD("makeSubsampleTab2x() called");
    return 0;
}

/* Demangled: pixFillClosedBorders */
extern "C" __attribute__((visibility("default"))) int pixFillClosedBorders(void) {
    ALOGD("pixFillClosedBorders() called");
    return 0;
}

/* Demangled: pixaDisplayUnsplit */
extern "C" __attribute__((visibility("default"))) int pixaDisplayUnsplit(void) {
    ALOGD("pixaDisplayUnsplit() called");
    return 0;
}

/* Demangled: pixFixedOctcubeQuant256 */
extern "C" __attribute__((visibility("default"))) int pixFixedOctcubeQuant256(void) {
    ALOGD("pixFixedOctcubeQuant256() called");
    return 0;
}

/* Demangled: pixConnCompPixa */
extern "C" __attribute__((visibility("default"))) int pixConnCompPixa(void) {
    ALOGD("pixConnCompPixa() called");
    return 0;
}

/* Demangled: pixacompWriteStreamInfo */
extern "C" __attribute__((visibility("default"))) int pixacompWriteStreamInfo(void) {
    ALOGD("pixacompWriteStreamInfo() called");
    return 0;
}

/* Demangled: pixConvertTo16 */
extern "C" __attribute__((visibility("default"))) int pixConvertTo16(void) {
    ALOGD("pixConvertTo16() called");
    return 0;
}

/* Demangled: fpixGetMax */
extern "C" __attribute__((visibility("default"))) int fpixGetMax(void) {
    ALOGD("fpixGetMax() called");
    return 0;
}

/* Demangled: dewarpMinimize */
extern "C" __attribute__((visibility("default"))) int dewarpMinimize(void) {
    ALOGD("dewarpMinimize() called");
    return 0;
}

/* Demangled: pixSetBorderRingVal */
extern "C" __attribute__((visibility("default"))) int pixSetBorderRingVal(void) {
    ALOGD("pixSetBorderRingVal() called");
    return 0;
}

/* Demangled: boxaaWrite */
extern "C" __attribute__((visibility("default"))) int boxaaWrite(void) {
    ALOGD("boxaaWrite() called");
    return 0;
}

/* Demangled: boxOverlapRegion */
extern "C" __attribute__((visibility("default"))) int boxOverlapRegion(void) {
    ALOGD("boxOverlapRegion() called");
    return 0;
}

/* Demangled: ccbaGetCount */
extern "C" __attribute__((visibility("default"))) int ccbaGetCount(void) {
    ALOGD("ccbaGetCount() called");
    return 0;
}

/* Demangled: selSetElement */
extern "C" __attribute__((visibility("default"))) int selSetElement(void) {
    ALOGD("selSetElement() called");
    return 0;
}

/* Demangled: pixaaClear */
extern "C" __attribute__((visibility("default"))) int pixaaClear(void) {
    ALOGD("pixaaClear() called");
    return 0;
}

/* Demangled: recogaAddRecog */
extern "C" __attribute__((visibility("default"))) int recogaAddRecog(void) {
    ALOGD("recogaAddRecog() called");
    return 0;
}

/* Demangled: stringCat */
extern "C" __attribute__((visibility("default"))) int stringCat(void) {
    ALOGD("stringCat() called");
    return 0;
}

/* Demangled: lqueueRemove */
extern "C" __attribute__((visibility("default"))) int lqueueRemove(void) {
    ALOGD("lqueueRemove() called");
    return 0;
}

/* Demangled: readHeaderMemPnm */
extern "C" __attribute__((visibility("default"))) int readHeaderMemPnm(void) {
    ALOGD("readHeaderMemPnm() called");
    return 0;
}

/* Demangled: sarrayClone */
extern "C" __attribute__((visibility("default"))) int sarrayClone(void) {
    ALOGD("sarrayClone() called");
    return 0;
}

/* Demangled: pixRotateAMColorFast */
extern "C" __attribute__((visibility("default"))) int pixRotateAMColorFast(void) {
    ALOGD("pixRotateAMColorFast() called");
    return 0;
}

/* Demangled: lept_cp */
extern "C" __attribute__((visibility("default"))) int lept_cp(void) {
    ALOGD("lept_cp() called");
    return 0;
}

/* Demangled: boxaSort2d */
extern "C" __attribute__((visibility("default"))) int boxaSort2d(void) {
    ALOGD("boxaSort2d() called");
    return 0;
}

/* Demangled: dewarpaListPages */
extern "C" __attribute__((visibility("default"))) int dewarpaListPages(void) {
    ALOGD("dewarpaListPages() called");
    return 0;
}

/* Demangled: pixDitherToBinarySpec */
extern "C" __attribute__((visibility("default"))) int pixDitherToBinarySpec(void) {
    ALOGD("pixDitherToBinarySpec() called");
    return 0;
}

/* Demangled: convertToPdfData */
extern "C" __attribute__((visibility("default"))) int convertToPdfData(void) {
    ALOGD("convertToPdfData() called");
    return 0;
}

/* Demangled: pixMaxDynamicRangeRGB */
extern "C" __attribute__((visibility("default"))) int pixMaxDynamicRangeRGB(void) {
    ALOGD("pixMaxDynamicRangeRGB() called");
    return 0;
}

/* Demangled: pixReadWithHint */
extern "C" __attribute__((visibility("default"))) int pixReadWithHint(void) {
    ALOGD("pixReadWithHint() called");
    return 0;
}

/* Demangled: pixConvertTo8 */
extern "C" __attribute__((visibility("default"))) int pixConvertTo8(void) {
    ALOGD("pixConvertTo8() called");
    return 0;
}

/* Demangled: zlibCompress */
extern "C" __attribute__((visibility("default"))) int zlibCompress(void) {
    ALOGD("zlibCompress() called");
    return 0;
}

/* Demangled: pixUpDownDetectGeneralDwa */
extern "C" __attribute__((visibility("default"))) int pixUpDownDetectGeneralDwa(void) {
    ALOGD("pixUpDownDetectGeneralDwa() called");
    return 0;
}

/* Demangled: scaleRGBToGray2Low */
extern "C" __attribute__((visibility("default"))) int scaleRGBToGray2Low(void) {
    ALOGD("scaleRGBToGray2Low() called");
    return 0;
}

/* Demangled: boxaaAddBoxa */
extern "C" __attribute__((visibility("default"))) int boxaaAddBoxa(void) {
    ALOGD("boxaaAddBoxa() called");
    return 0;
}

/* Demangled: numaGetFArray */
extern "C" __attribute__((visibility("default"))) int numaGetFArray(void) {
    ALOGD("numaGetFArray() called");
    return 0;
}

/* Demangled: pixAddTextlines */
extern "C" __attribute__((visibility("default"))) int pixAddTextlines(void) {
    ALOGD("pixAddTextlines() called");
    return 0;
}

/* Demangled: pixSplitDistributionFgBg */
extern "C" __attribute__((visibility("default"))) int pixSplitDistributionFgBg(void) {
    ALOGD("pixSplitDistributionFgBg() called");
    return 0;
}

/* Demangled: pixCompareRGB */
extern "C" __attribute__((visibility("default"))) int pixCompareRGB(void) {
    ALOGD("pixCompareRGB() called");
    return 0;
}

/* Demangled: getNumberedPathnamesInDirectory */
extern "C" __attribute__((visibility("default"))) int getNumberedPathnamesInDirectory(void) {
    ALOGD("getNumberedPathnamesInDirectory() called");
    return 0;
}

/* Demangled: pixaConvertTo32 */
extern "C" __attribute__((visibility("default"))) int pixaConvertTo32(void) {
    ALOGD("pixaConvertTo32() called");
    return 0;
}

/* Demangled: convertBinaryToGrayCode */
extern "C" __attribute__((visibility("default"))) int convertBinaryToGrayCode(void) {
    ALOGD("convertBinaryToGrayCode() called");
    return 0;
}

/* Demangled: pixBackgroundNormRGBArraysMorph */
extern "C" __attribute__((visibility("default"))) int pixBackgroundNormRGBArraysMorph(void) {
    ALOGD("pixBackgroundNormRGBArraysMorph() called");
    return 0;
}

/* Demangled: pixWriteTiffCustom */
extern "C" __attribute__((visibility("default"))) int pixWriteTiffCustom(void) {
    ALOGD("pixWriteTiffCustom() called");
    return 0;
}

/* Demangled: boxaaWriteMem */
extern "C" __attribute__((visibility("default"))) int boxaaWriteMem(void) {
    ALOGD("boxaaWriteMem() called");
    return 0;
}

/* Demangled: l_rbtreeDestroy */
extern "C" __attribute__((visibility("default"))) int l_rbtreeDestroy(void) {
    ALOGD("l_rbtreeDestroy() called");
    return 0;
}

/* Demangled: selSetName */
extern "C" __attribute__((visibility("default"))) int selSetName(void) {
    ALOGD("selSetName() called");
    return 0;
}

/* Demangled: pixTilingGetTile */
extern "C" __attribute__((visibility("default"))) int pixTilingGetTile(void) {
    ALOGD("pixTilingGetTile() called");
    return 0;
}

/* Demangled: boxTransformOrdered */
extern "C" __attribute__((visibility("default"))) int boxTransformOrdered(void) {
    ALOGD("boxTransformOrdered() called");
    return 0;
}

/* Demangled: jbCorrelationInit */
extern "C" __attribute__((visibility("default"))) int jbCorrelationInit(void) {
    ALOGD("jbCorrelationInit() called");
    return 0;
}

/* Demangled: fpixaSetPixel */
extern "C" __attribute__((visibility("default"))) int fpixaSetPixel(void) {
    ALOGD("fpixaSetPixel() called");
    return 0;
}

/* Demangled: numaCreateFromFArray */
extern "C" __attribute__((visibility("default"))) int numaCreateFromFArray(void) {
    ALOGD("numaCreateFromFArray() called");
    return 0;
}

/* Demangled: convertFlateToPSString */
extern "C" __attribute__((visibility("default"))) int convertFlateToPSString(void) {
    ALOGD("convertFlateToPSString() called");
    return 0;
}

/* Demangled: ptraGetPtrToItem */
extern "C" __attribute__((visibility("default"))) int ptraGetPtrToItem(void) {
    ALOGD("ptraGetPtrToItem() called");
    return 0;
}

/* Demangled: pixSauvolaBinarize */
extern "C" __attribute__((visibility("default"))) int pixSauvolaBinarize(void) {
    ALOGD("pixSauvolaBinarize() called");
    return 0;
}

/* Demangled: pixGetYRes */
extern "C" __attribute__((visibility("default"))) int pixGetYRes(void) {
    ALOGD("pixGetYRes() called");
    return 0;
}

/* Demangled: pixWordMaskByDilation */
extern "C" __attribute__((visibility("default"))) int pixWordMaskByDilation(void) {
    ALOGD("pixWordMaskByDilation() called");
    return 0;
}

/* Demangled: fpixPrintStream */
extern "C" __attribute__((visibility("default"))) int fpixPrintStream(void) {
    ALOGD("fpixPrintStream() called");
    return 0;
}

/* Demangled: pixExtractBoundary */
extern "C" __attribute__((visibility("default"))) int pixExtractBoundary(void) {
    ALOGD("pixExtractBoundary() called");
    return 0;
}

/* Demangled: concatenatePdfToData */
extern "C" __attribute__((visibility("default"))) int concatenatePdfToData(void) {
    ALOGD("concatenatePdfToData() called");
    return 0;
}

/* Demangled: l_setDataQbit */
extern "C" __attribute__((visibility("default"))) int l_setDataQbit(void) {
    ALOGD("l_setDataQbit() called");
    return 0;
}

/* Demangled: boxaIsFull */
extern "C" __attribute__((visibility("default"))) int boxaIsFull(void) {
    ALOGD("boxaIsFull() called");
    return 0;
}

/* Demangled: l_asetFind */
extern "C" __attribute__((visibility("default"))) int l_asetFind(void) {
    ALOGD("l_asetFind() called");
    return 0;
}

/* Demangled: numaMakeThresholdIndicator */
extern "C" __attribute__((visibility("default"))) int numaMakeThresholdIndicator(void) {
    ALOGD("numaMakeThresholdIndicator() called");
    return 0;
}

/* Demangled: l_convertCharstrToInt */
extern "C" __attribute__((visibility("default"))) int l_convertCharstrToInt(void) {
    ALOGD("l_convertCharstrToInt() called");
    return 0;
}

/* Demangled: ptaaCreate */
extern "C" __attribute__((visibility("default"))) int ptaaCreate(void) {
    ALOGD("ptaaCreate() called");
    return 0;
}

/* Demangled: numaGetPartialSums */
extern "C" __attribute__((visibility("default"))) int numaGetPartialSums(void) {
    ALOGD("numaGetPartialSums() called");
    return 0;
}

/* Demangled: l_getFormattedDate */
extern "C" __attribute__((visibility("default"))) int l_getFormattedDate(void) {
    ALOGD("l_getFormattedDate() called");
    return 0;
}

/* Demangled: pixaAddBox */
extern "C" __attribute__((visibility("default"))) int pixaAddBox(void) {
    ALOGD("pixaAddBox() called");
    return 0;
}

/* Demangled: pixMinOrMax */
extern "C" __attribute__((visibility("default"))) int pixMinOrMax(void) {
    ALOGD("pixMinOrMax() called");
    return 0;
}

/* Demangled: dewarpaInfo */
extern "C" __attribute__((visibility("default"))) int dewarpaInfo(void) {
    ALOGD("dewarpaInfo() called");
    return 0;
}

/* Demangled: pixMultConstantColor */
extern "C" __attribute__((visibility("default"))) int pixMultConstantColor(void) {
    ALOGD("pixMultConstantColor() called");
    return 0;
}

/* Demangled: convertOnLittleEnd32 */
extern "C" __attribute__((visibility("default"))) int convertOnLittleEnd32(void) {
    ALOGD("convertOnLittleEnd32() called");
    return 0;
}

/* Demangled: numaSetParameters */
extern "C" __attribute__((visibility("default"))) int numaSetParameters(void) {
    ALOGD("numaSetParameters() called");
    return 0;
}

/* Demangled: boxaaRead */
extern "C" __attribute__((visibility("default"))) int boxaaRead(void) {
    ALOGD("boxaaRead() called");
    return 0;
}

/* Demangled: boxaGetNearestToPt */
extern "C" __attribute__((visibility("default"))) int boxaGetNearestToPt(void) {
    ALOGD("boxaGetNearestToPt() called");
    return 0;
}

/* Demangled: selaDisplayInPix */
extern "C" __attribute__((visibility("default"))) int selaDisplayInPix(void) {
    ALOGD("selaDisplayInPix() called");
    return 0;
}

/* Demangled: pixUpDownDetect */
extern "C" __attribute__((visibility("default"))) int pixUpDownDetect(void) {
    ALOGD("pixUpDownDetect() called");
    return 0;
}

/* Demangled: pixMorphSequenceByRegion */
extern "C" __attribute__((visibility("default"))) int pixMorphSequenceByRegion(void) {
    ALOGD("pixMorphSequenceByRegion() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Edge_nativePixSobelEdgeFilter */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Edge_nativePixSobelEdgeFilter(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Edge_nativePixSobelEdgeFilter() called");
    return 0;
}

/* Demangled: pixAnd */
extern "C" __attribute__((visibility("default"))) int pixAnd(void) {
    ALOGD("pixAnd() called");
    return 0;
}

/* Demangled: pixaVerifyDepth */
extern "C" __attribute__((visibility("default"))) int pixaVerifyDepth(void) {
    ALOGD("pixaVerifyDepth() called");
    return 0;
}

/* Demangled: pixaccCreate */
extern "C" __attribute__((visibility("default"))) int pixaccCreate(void) {
    ALOGD("pixaccCreate() called");
    return 0;
}

/* Demangled: dewarpaCreate */
extern "C" __attribute__((visibility("default"))) int dewarpaCreate(void) {
    ALOGD("dewarpaCreate() called");
    return 0;
}

/* Demangled: numaReadMem */
extern "C" __attribute__((visibility("default"))) int numaReadMem(void) {
    ALOGD("numaReadMem() called");
    return 0;
}

/* Demangled: lept_fclose */
extern "C" __attribute__((visibility("default"))) int lept_fclose(void) {
    ALOGD("lept_fclose() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Pix_nativeSetPixel */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Pix_nativeSetPixel(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Pix_nativeSetPixel() called");
    return 0;
}

/* Demangled: fpixaDisplayQuadtree */
extern "C" __attribute__((visibility("default"))) int fpixaDisplayQuadtree(void) {
    ALOGD("fpixaDisplayQuadtree() called");
    return 0;
}

/* Demangled: compareTilesByHisto */
extern "C" __attribute__((visibility("default"))) int compareTilesByHisto(void) {
    ALOGD("compareTilesByHisto() called");
    return 0;
}

/* Demangled: pixGammaTRCMasked */
extern "C" __attribute__((visibility("default"))) int pixGammaTRCMasked(void) {
    ALOGD("pixGammaTRCMasked() called");
    return 0;
}

/* Demangled: pixFlipPixel */
extern "C" __attribute__((visibility("default"))) int pixFlipPixel(void) {
    ALOGD("pixFlipPixel() called");
    return 0;
}

/* Demangled: pixAddRepeatedBorder */
extern "C" __attribute__((visibility("default"))) int pixAddRepeatedBorder(void) {
    ALOGD("pixAddRepeatedBorder() called");
    return 0;
}

/* Demangled: pixRankFilterGray */
extern "C" __attribute__((visibility("default"))) int pixRankFilterGray(void) {
    ALOGD("pixRankFilterGray() called");
    return 0;
}

/* Demangled: startTimerNested */
extern "C" __attribute__((visibility("default"))) int startTimerNested(void) {
    ALOGD("startTimerNested() called");
    return 0;
}

/* Demangled: scaleToGray2Low */
extern "C" __attribute__((visibility("default"))) int scaleToGray2Low(void) {
    ALOGD("scaleToGray2Low() called");
    return 0;
}

/* Demangled: pixaGetBoxGeometry */
extern "C" __attribute__((visibility("default"))) int pixaGetBoxGeometry(void) {
    ALOGD("pixaGetBoxGeometry() called");
    return 0;
}

/* Demangled: pixScaleBySampling */
extern "C" __attribute__((visibility("default"))) int pixScaleBySampling(void) {
    ALOGD("pixScaleBySampling() called");
    return 0;
}

/* Demangled: pixMultiplyByColor */
extern "C" __attribute__((visibility("default"))) int pixMultiplyByColor(void) {
    ALOGD("pixMultiplyByColor() called");
    return 0;
}

/* Demangled: boxaExtendArrayToSize */
extern "C" __attribute__((visibility("default"))) int boxaExtendArrayToSize(void) {
    ALOGD("boxaExtendArrayToSize() called");
    return 0;
}

/* Demangled: pixcmapGrayToColor */
extern "C" __attribute__((visibility("default"))) int pixcmapGrayToColor(void) {
    ALOGD("pixcmapGrayToColor() called");
    return 0;
}

/* Demangled: pixErodeGray */
extern "C" __attribute__((visibility("default"))) int pixErodeGray(void) {
    ALOGD("pixErodeGray() called");
    return 0;
}

/* Demangled: l_dnaHashAdd */
extern "C" __attribute__((visibility("default"))) int l_dnaHashAdd(void) {
    ALOGD("l_dnaHashAdd() called");
    return 0;
}

/* Demangled: pixAddBlackOrWhiteBorder */
extern "C" __attribute__((visibility("default"))) int pixAddBlackOrWhiteBorder(void) {
    ALOGD("pixAddBlackOrWhiteBorder() called");
    return 0;
}

/* Demangled: ptaRotate */
extern "C" __attribute__((visibility("default"))) int ptaRotate(void) {
    ALOGD("ptaRotate() called");
    return 0;
}

/* Demangled: numaaGetNumaCount */
extern "C" __attribute__((visibility("default"))) int numaaGetNumaCount(void) {
    ALOGD("numaaGetNumaCount() called");
    return 0;
}

/* Demangled: dewarpRemoveShortLines */
extern "C" __attribute__((visibility("default"))) int dewarpRemoveShortLines(void) {
    ALOGD("dewarpRemoveShortLines() called");
    return 0;
}

/* Demangled: morphSequenceVerify */
extern "C" __attribute__((visibility("default"))) int morphSequenceVerify(void) {
    ALOGD("morphSequenceVerify() called");
    return 0;
}

/* Demangled: pixConformsToRectangle */
extern "C" __attribute__((visibility("default"))) int pixConformsToRectangle(void) {
    ALOGD("pixConformsToRectangle() called");
    return 0;
}

/* Demangled: quadtreeGetChildren */
extern "C" __attribute__((visibility("default"))) int quadtreeGetChildren(void) {
    ALOGD("quadtreeGetChildren() called");
    return 0;
}

/* Demangled: recogSplittingFilter */
extern "C" __attribute__((visibility("default"))) int recogSplittingFilter(void) {
    ALOGD("recogSplittingFilter() called");
    return 0;
}

/* Demangled: ccbDestroy */
extern "C" __attribute__((visibility("default"))) int ccbDestroy(void) {
    ALOGD("ccbDestroy() called");
    return 0;
}

/* Demangled: ditherToBinaryLow */
extern "C" __attribute__((visibility("default"))) int ditherToBinaryLow(void) {
    ALOGD("ditherToBinaryLow() called");
    return 0;
}

/* Demangled: pixHaustest */
extern "C" __attribute__((visibility("default"))) int pixHaustest(void) {
    ALOGD("pixHaustest() called");
    return 0;
}

/* Demangled: ptaGetInsideBox */
extern "C" __attribute__((visibility("default"))) int ptaGetInsideBox(void) {
    ALOGD("ptaGetInsideBox() called");
    return 0;
}

/* Demangled: barcodeFormatIsSupported */
extern "C" __attribute__((visibility("default"))) int barcodeFormatIsSupported(void) {
    ALOGD("barcodeFormatIsSupported() called");
    return 0;
}

/* Demangled: pixWriteStreamBmp */
extern "C" __attribute__((visibility("default"))) int pixWriteStreamBmp(void) {
    ALOGD("pixWriteStreamBmp() called");
    return 0;
}

/* Demangled: pixThinConnected */
extern "C" __attribute__((visibility("default"))) int pixThinConnected(void) {
    ALOGD("pixThinConnected() called");
    return 0;
}

/* Demangled: pixelFractionalShift */
extern "C" __attribute__((visibility("default"))) int pixelFractionalShift(void) {
    ALOGD("pixelFractionalShift() called");
    return 0;
}

/* Demangled: pixGenPhotoHistos */
extern "C" __attribute__((visibility("default"))) int pixGenPhotoHistos(void) {
    ALOGD("pixGenPhotoHistos() called");
    return 0;
}

/* Demangled: pixMeasureEdgeSmoothness */
extern "C" __attribute__((visibility("default"))) int pixMeasureEdgeSmoothness(void) {
    ALOGD("pixMeasureEdgeSmoothness() called");
    return 0;
}

/* Demangled: pixGammaTRCWithAlpha */
extern "C" __attribute__((visibility("default"))) int pixGammaTRCWithAlpha(void) {
    ALOGD("pixGammaTRCWithAlpha() called");
    return 0;
}

/* Demangled: pixConvert1To4Cmap */
extern "C" __attribute__((visibility("default"))) int pixConvert1To4Cmap(void) {
    ALOGD("pixConvert1To4Cmap() called");
    return 0;
}

/* Demangled: pixSelectedLocalExtrema */
extern "C" __attribute__((visibility("default"))) int pixSelectedLocalExtrema(void) {
    ALOGD("pixSelectedLocalExtrema() called");
    return 0;
}

/* Demangled: l_setDataBit */
extern "C" __attribute__((visibility("default"))) int l_setDataBit(void) {
    ALOGD("l_setDataBit() called");
    return 0;
}

/* Demangled: pixWindowedMeanSquare */
extern "C" __attribute__((visibility("default"))) int pixWindowedMeanSquare(void) {
    ALOGD("pixWindowedMeanSquare() called");
    return 0;
}

/* Demangled: pixGrayQuantFromHisto */
extern "C" __attribute__((visibility("default"))) int pixGrayQuantFromHisto(void) {
    ALOGD("pixGrayQuantFromHisto() called");
    return 0;
}

/* Demangled: pixGetCmapHistogram */
extern "C" __attribute__((visibility("default"))) int pixGetCmapHistogram(void) {
    ALOGD("pixGetCmapHistogram() called");
    return 0;
}

/* Demangled: pixLocateBarcodes */
extern "C" __attribute__((visibility("default"))) int pixLocateBarcodes(void) {
    ALOGD("pixLocateBarcodes() called");
    return 0;
}

/* Demangled: pixaccGetPix */
extern "C" __attribute__((visibility("default"))) int pixaccGetPix(void) {
    ALOGD("pixaccGetPix() called");
    return 0;
}

/* Demangled: pixSeedfillGrayInv */
extern "C" __attribute__((visibility("default"))) int pixSeedfillGrayInv(void) {
    ALOGD("pixSeedfillGrayInv() called");
    return 0;
}

/* Demangled: pixGetBackgroundGrayMap */
extern "C" __attribute__((visibility("default"))) int pixGetBackgroundGrayMap(void) {
    ALOGD("pixGetBackgroundGrayMap() called");
    return 0;
}

/* Demangled: boxaaExtendArray */
extern "C" __attribute__((visibility("default"))) int boxaaExtendArray(void) {
    ALOGD("boxaaExtendArray() called");
    return 0;
}

/* Demangled: numaGetRankValue */
extern "C" __attribute__((visibility("default"))) int numaGetRankValue(void) {
    ALOGD("numaGetRankValue() called");
    return 0;
}

/* Demangled: dpixConvertToPix */
extern "C" __attribute__((visibility("default"))) int dpixConvertToPix(void) {
    ALOGD("dpixConvertToPix() called");
    return 0;
}

/* Demangled: fpixAddBorder */
extern "C" __attribute__((visibility("default"))) int fpixAddBorder(void) {
    ALOGD("fpixAddBorder() called");
    return 0;
}

/* Demangled: pixacompReplacePix */
extern "C" __attribute__((visibility("default"))) int pixacompReplacePix(void) {
    ALOGD("pixacompReplacePix() called");
    return 0;
}

/* Demangled: writeImageFileInfo */
extern "C" __attribute__((visibility("default"))) int writeImageFileInfo(void) {
    ALOGD("writeImageFileInfo() called");
    return 0;
}

/* Demangled: boxaGetValidBox */
extern "C" __attribute__((visibility("default"))) int boxaGetValidBox(void) {
    ALOGD("boxaGetValidBox() called");
    return 0;
}

/* Demangled: fgetJpegComment */
extern "C" __attribute__((visibility("default"))) int fgetJpegComment(void) {
    ALOGD("fgetJpegComment() called");
    return 0;
}

/* Demangled: l_byteaCreate */
extern "C" __attribute__((visibility("default"))) int l_byteaCreate(void) {
    ALOGD("l_byteaCreate() called");
    return 0;
}

/* Demangled: pixaccSubtract */
extern "C" __attribute__((visibility("default"))) int pixaccSubtract(void) {
    ALOGD("pixaccSubtract() called");
    return 0;
}

/* Demangled: fpixFlipLR */
extern "C" __attribute__((visibility("default"))) int fpixFlipLR(void) {
    ALOGD("fpixFlipLR() called");
    return 0;
}

/* Demangled: l_rbtreeGetCount */
extern "C" __attribute__((visibility("default"))) int l_rbtreeGetCount(void) {
    ALOGD("l_rbtreeGetCount() called");
    return 0;
}

/* Demangled: jbAddPages */
extern "C" __attribute__((visibility("default"))) int jbAddPages(void) {
    ALOGD("jbAddPages() called");
    return 0;
}

/* Demangled: pixColorShiftRGB */
extern "C" __attribute__((visibility("default"))) int pixColorShiftRGB(void) {
    ALOGD("pixColorShiftRGB() called");
    return 0;
}

/* Demangled: recogGetCount */
extern "C" __attribute__((visibility("default"))) int recogGetCount(void) {
    ALOGD("recogGetCount() called");
    return 0;
}

/* Demangled: ptaAffineTransform */
extern "C" __attribute__((visibility("default"))) int ptaAffineTransform(void) {
    ALOGD("ptaAffineTransform() called");
    return 0;
}

/* Demangled: pixSetRGBPixel */
extern "C" __attribute__((visibility("default"))) int pixSetRGBPixel(void) {
    ALOGD("pixSetRGBPixel() called");
    return 0;
}

/* Demangled: pixErodeGray3 */
extern "C" __attribute__((visibility("default"))) int pixErodeGray3(void) {
    ALOGD("pixErodeGray3() called");
    return 0;
}

/* Demangled: selectDefaultPdfEncoding */
extern "C" __attribute__((visibility("default"))) int selectDefaultPdfEncoding(void) {
    ALOGD("selectDefaultPdfEncoding() called");
    return 0;
}

/* Demangled: pixGetMomentByColumn */
extern "C" __attribute__((visibility("default"))) int pixGetMomentByColumn(void) {
    ALOGD("pixGetMomentByColumn() called");
    return 0;
}

/* Demangled: __fixunsdfdi */
extern "C" __attribute__((visibility("default"))) int fn___fixunsdfdi(void) __asm__("__fixunsdfdi");
int fn___fixunsdfdi(void) {
    ALOGD("__fixunsdfdi() called");
    return 0;
}

/* Demangled: boxaSimilar */
extern "C" __attribute__((visibility("default"))) int boxaSimilar(void) {
    ALOGD("boxaSimilar() called");
    return 0;
}

/* Demangled: ptraaGetSize */
extern "C" __attribute__((visibility("default"))) int ptraaGetSize(void) {
    ALOGD("ptraaGetSize() called");
    return 0;
}

/* Demangled: bmfGetLineStrings */
extern "C" __attribute__((visibility("default"))) int bmfGetLineStrings(void) {
    ALOGD("bmfGetLineStrings() called");
    return 0;
}

/* Demangled: pixGetSortedNeighborValues */
extern "C" __attribute__((visibility("default"))) int pixGetSortedNeighborValues(void) {
    ALOGD("pixGetSortedNeighborValues() called");
    return 0;
}

/* Demangled: ptaReadMem */
extern "C" __attribute__((visibility("default"))) int ptaReadMem(void) {
    ALOGD("ptaReadMem() called");
    return 0;
}

/* Demangled: selaRead */
extern "C" __attribute__((visibility("default"))) int selaRead(void) {
    ALOGD("selaRead() called");
    return 0;
}

/* Demangled: lept_isPrime */
extern "C" __attribute__((visibility("default"))) int lept_isPrime(void) {
    ALOGD("lept_isPrime() called");
    return 0;
}

/* Demangled: dpixClone */
extern "C" __attribute__((visibility("default"))) int dpixClone(void) {
    ALOGD("dpixClone() called");
    return 0;
}

/* Demangled: dpixGetDimensions */
extern "C" __attribute__((visibility("default"))) int dpixGetDimensions(void) {
    ALOGD("dpixGetDimensions() called");
    return 0;
}

/* Demangled: recogTrainingFinished */
extern "C" __attribute__((visibility("default"))) int recogTrainingFinished(void) {
    ALOGD("recogTrainingFinished() called");
    return 0;
}

/* Demangled: pixWindowedMean */
extern "C" __attribute__((visibility("default"))) int pixWindowedMean(void) {
    ALOGD("pixWindowedMean() called");
    return 0;
}

/* Demangled: boxaGetValidCount */
extern "C" __attribute__((visibility("default"))) int boxaGetValidCount(void) {
    ALOGD("boxaGetValidCount() called");
    return 0;
}

/* Demangled: pixGenerateMaskByValue */
extern "C" __attribute__((visibility("default"))) int pixGenerateMaskByValue(void) {
    ALOGD("pixGenerateMaskByValue() called");
    return 0;
}

/* Demangled: pixGetPSNR */
extern "C" __attribute__((visibility("default"))) int pixGetPSNR(void) {
    ALOGD("pixGetPSNR() called");
    return 0;
}

/* Demangled: numaCopy */
extern "C" __attribute__((visibility("default"))) int numaCopy(void) {
    ALOGD("numaCopy() called");
    return 0;
}

/* Demangled: pixaDisplayOnColor */
extern "C" __attribute__((visibility("default"))) int pixaDisplayOnColor(void) {
    ALOGD("pixaDisplayOnColor() called");
    return 0;
}

/* Demangled: pixFindMaxHorizontalRunOnLine */
extern "C" __attribute__((visibility("default"))) int pixFindMaxHorizontalRunOnLine(void) {
    ALOGD("pixFindMaxHorizontalRunOnLine() called");
    return 0;
}

/* Demangled: __aeabi_memmove */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_memmove(void) __asm__("__aeabi_memmove");
int fn___aeabi_memmove(void) {
    ALOGD("__aeabi_memmove() called");
    return 0;
}

/* Demangled: boxaExtendArray */
extern "C" __attribute__((visibility("default"))) int boxaExtendArray(void) {
    ALOGD("boxaExtendArray() called");
    return 0;
}

/* Demangled: boxaaGetBoxa */
extern "C" __attribute__((visibility("default"))) int boxaaGetBoxa(void) {
    ALOGD("boxaaGetBoxa() called");
    return 0;
}

/* Demangled: numaSort */
extern "C" __attribute__((visibility("default"))) int numaSort(void) {
    ALOGD("numaSort() called");
    return 0;
}

/* Demangled: pixGetCmapHistogramInRect */
extern "C" __attribute__((visibility("default"))) int pixGetCmapHistogramInRect(void) {
    ALOGD("pixGetCmapHistogramInRect() called");
    return 0;
}

/* Demangled: pixSetPixelColumn */
extern "C" __attribute__((visibility("default"))) int pixSetPixelColumn(void) {
    ALOGD("pixSetPixelColumn() called");
    return 0;
}

/* Demangled: sarrayFindStringByHash */
extern "C" __attribute__((visibility("default"))) int sarrayFindStringByHash(void) {
    ALOGD("sarrayFindStringByHash() called");
    return 0;
}

/* Demangled: pixSelectMinInConnComp */
extern "C" __attribute__((visibility("default"))) int pixSelectMinInConnComp(void) {
    ALOGD("pixSelectMinInConnComp() called");
    return 0;
}

/* Demangled: pixSerializeToMemory */
extern "C" __attribute__((visibility("default"))) int pixSerializeToMemory(void) {
    ALOGD("pixSerializeToMemory() called");
    return 0;
}

/* Demangled: pixRotateAMGrayCorner */
extern "C" __attribute__((visibility("default"))) int pixRotateAMGrayCorner(void) {
    ALOGD("pixRotateAMGrayCorner() called");
    return 0;
}

/* Demangled: boxaGetBoxGeometry */
extern "C" __attribute__((visibility("default"))) int boxaGetBoxGeometry(void) {
    ALOGD("boxaGetBoxGeometry() called");
    return 0;
}

/* Demangled: pixBilinear */
extern "C" __attribute__((visibility("default"))) int pixBilinear(void) {
    ALOGD("pixBilinear() called");
    return 0;
}

/* Demangled: convertRGBToYUV */
extern "C" __attribute__((visibility("default"))) int convertRGBToYUV(void) {
    ALOGD("convertRGBToYUV() called");
    return 0;
}

/* Demangled: l_dnaReplaceNumber */
extern "C" __attribute__((visibility("default"))) int l_dnaReplaceNumber(void) {
    ALOGD("l_dnaReplaceNumber() called");
    return 0;
}

/* Demangled: recogReadMem */
extern "C" __attribute__((visibility("default"))) int recogReadMem(void) {
    ALOGD("recogReadMem() called");
    return 0;
}

/* Demangled: rotateAMGrayCornerLow */
extern "C" __attribute__((visibility("default"))) int rotateAMGrayCornerLow(void) {
    ALOGD("rotateAMGrayCornerLow() called");
    return 0;
}

/* Demangled: numaWrite */
extern "C" __attribute__((visibility("default"))) int numaWrite(void) {
    ALOGD("numaWrite() called");
    return 0;
}

/* Demangled: pixRemoveWithIndicator */
extern "C" __attribute__((visibility("default"))) int pixRemoveWithIndicator(void) {
    ALOGD("pixRemoveWithIndicator() called");
    return 0;
}

/* Demangled: bmfGetWidth */
extern "C" __attribute__((visibility("default"))) int bmfGetWidth(void) {
    ALOGD("bmfGetWidth() called");
    return 0;
}

/* Demangled: pixcmapIsOpaque */
extern "C" __attribute__((visibility("default"))) int pixcmapIsOpaque(void) {
    ALOGD("pixcmapIsOpaque() called");
    return 0;
}

/* Demangled: generatePtaWideLine */
extern "C" __attribute__((visibility("default"))) int generatePtaWideLine(void) {
    ALOGD("generatePtaWideLine() called");
    return 0;
}

/* Demangled: pixaCentroids */
extern "C" __attribute__((visibility("default"))) int pixaCentroids(void) {
    ALOGD("pixaCentroids() called");
    return 0;
}

/* Demangled: pixOpenGeneralized */
extern "C" __attribute__((visibility("default"))) int pixOpenGeneralized(void) {
    ALOGD("pixOpenGeneralized() called");
    return 0;
}

/* Demangled: pixaHasColor */
extern "C" __attribute__((visibility("default"))) int pixaHasColor(void) {
    ALOGD("pixaHasColor() called");
    return 0;
}

/* Demangled: recogDebugAverages */
extern "C" __attribute__((visibility("default"))) int recogDebugAverages(void) {
    ALOGD("recogDebugAverages() called");
    return 0;
}

/* Demangled: findNextLargerPrime */
extern "C" __attribute__((visibility("default"))) int findNextLargerPrime(void) {
    ALOGD("findNextLargerPrime() called");
    return 0;
}

/* Demangled: pixAdaptThresholdToBinaryGen */
extern "C" __attribute__((visibility("default"))) int pixAdaptThresholdToBinaryGen(void) {
    ALOGD("pixAdaptThresholdToBinaryGen() called");
    return 0;
}

/* Demangled: pixaClipToPix */
extern "C" __attribute__((visibility("default"))) int pixaClipToPix(void) {
    ALOGD("pixaClipToPix() called");
    return 0;
}

/* Demangled: l_angleBetweenVectors */
extern "C" __attribute__((visibility("default"))) int l_angleBetweenVectors(void) {
    ALOGD("l_angleBetweenVectors() called");
    return 0;
}

/* Demangled: pixaModifyStrokeWidth */
extern "C" __attribute__((visibility("default"))) int pixaModifyStrokeWidth(void) {
    ALOGD("pixaModifyStrokeWidth() called");
    return 0;
}

/* Demangled: boxaCombineOverlaps */
extern "C" __attribute__((visibility("default"))) int boxaCombineOverlaps(void) {
    ALOGD("boxaCombineOverlaps() called");
    return 0;
}

/* Demangled: pixLinearMapToTargetColor */
extern "C" __attribute__((visibility("default"))) int pixLinearMapToTargetColor(void) {
    ALOGD("pixLinearMapToTargetColor() called");
    return 0;
}

/* Demangled: makePlotPtaFromNuma */
extern "C" __attribute__((visibility("default"))) int makePlotPtaFromNuma(void) {
    ALOGD("makePlotPtaFromNuma() called");
    return 0;
}

/* Demangled: l_clearDataQbit */
extern "C" __attribute__((visibility("default"))) int l_clearDataQbit(void) {
    ALOGD("l_clearDataQbit() called");
    return 0;
}

/* Demangled: boxCopy */
extern "C" __attribute__((visibility("default"))) int boxCopy(void) {
    ALOGD("boxCopy() called");
    return 0;
}

/* Demangled: pixBlockrank */
extern "C" __attribute__((visibility("default"))) int pixBlockrank(void) {
    ALOGD("pixBlockrank() called");
    return 0;
}

/* Demangled: pixMeanSquareAccum */
extern "C" __attribute__((visibility("default"))) int pixMeanSquareAccum(void) {
    ALOGD("pixMeanSquareAccum() called");
    return 0;
}

/* Demangled: filesAreIdentical */
extern "C" __attribute__((visibility("default"))) int filesAreIdentical(void) {
    ALOGD("filesAreIdentical() called");
    return 0;
}

/* Demangled: numaInvert */
extern "C" __attribute__((visibility("default"))) int numaInvert(void) {
    ALOGD("numaInvert() called");
    return 0;
}

/* Demangled: pixEndianTwoByteSwap */
extern "C" __attribute__((visibility("default"))) int pixEndianTwoByteSwap(void) {
    ALOGD("pixEndianTwoByteSwap() called");
    return 0;
}

/* Demangled: pixacompCreate */
extern "C" __attribute__((visibility("default"))) int pixacompCreate(void) {
    ALOGD("pixacompCreate() called");
    return 0;
}

/* Demangled: pixConvert32To16 */
extern "C" __attribute__((visibility("default"))) int pixConvert32To16(void) {
    ALOGD("pixConvert32To16() called");
    return 0;
}

/* Demangled: recogaCreateFromRecog */
extern "C" __attribute__((visibility("default"))) int recogaCreateFromRecog(void) {
    ALOGD("recogaCreateFromRecog() called");
    return 0;
}

/* Demangled: fpixaDestroy */
extern "C" __attribute__((visibility("default"))) int fpixaDestroy(void) {
    ALOGD("fpixaDestroy() called");
    return 0;
}

/* Demangled: make8To2DitherTables */
extern "C" __attribute__((visibility("default"))) int make8To2DitherTables(void) {
    ALOGD("make8To2DitherTables() called");
    return 0;
}

/* Demangled: ptaUnionByAset */
extern "C" __attribute__((visibility("default"))) int ptaUnionByAset(void) {
    ALOGD("ptaUnionByAset() called");
    return 0;
}

/* Demangled: pixProjectiveSampledPta */
extern "C" __attribute__((visibility("default"))) int pixProjectiveSampledPta(void) {
    ALOGD("pixProjectiveSampledPta() called");
    return 0;
}

/* Demangled: jbClasserDestroy */
extern "C" __attribute__((visibility("default"))) int jbClasserDestroy(void) {
    ALOGD("jbClasserDestroy() called");
    return 0;
}

/* Demangled: ptaGetPixelsFromPix */
extern "C" __attribute__((visibility("default"))) int ptaGetPixelsFromPix(void) {
    ALOGD("ptaGetPixelsFromPix() called");
    return 0;
}

/* Demangled: pixConvert1To8Cmap */
extern "C" __attribute__((visibility("default"))) int pixConvert1To8Cmap(void) {
    ALOGD("pixConvert1To8Cmap() called");
    return 0;
}

/* Demangled: convertSegmentedPagesToPS */
extern "C" __attribute__((visibility("default"))) int convertSegmentedPagesToPS(void) {
    ALOGD("convertSegmentedPagesToPS() called");
    return 0;
}

/* Demangled: recogaDestroy */
extern "C" __attribute__((visibility("default"))) int recogaDestroy(void) {
    ALOGD("recogaDestroy() called");
    return 0;
}

/* Demangled: wshedBasins */
extern "C" __attribute__((visibility("default"))) int wshedBasins(void) {
    ALOGD("wshedBasins() called");
    return 0;
}

/* Demangled: pixAddBorder */
extern "C" __attribute__((visibility("default"))) int pixAddBorder(void) {
    ALOGD("pixAddBorder() called");
    return 0;
}

/* Demangled: pixaSaveFont */
extern "C" __attribute__((visibility("default"))) int pixaSaveFont(void) {
    ALOGD("pixaSaveFont() called");
    return 0;
}

/* Demangled: boxaLocationRange */
extern "C" __attribute__((visibility("default"))) int boxaLocationRange(void) {
    ALOGD("boxaLocationRange() called");
    return 0;
}

/* Demangled: boxaMakeSizeIndicator */
extern "C" __attribute__((visibility("default"))) int boxaMakeSizeIndicator(void) {
    ALOGD("boxaMakeSizeIndicator() called");
    return 0;
}

/* Demangled: pixaConvertToPdf */
extern "C" __attribute__((visibility("default"))) int pixaConvertToPdf(void) {
    ALOGD("pixaConvertToPdf() called");
    return 0;
}

/* Demangled: dpixConvertToFPix */
extern "C" __attribute__((visibility("default"))) int dpixConvertToFPix(void) {
    ALOGD("dpixConvertToFPix() called");
    return 0;
}

/* Demangled: l_asetGetLast */
extern "C" __attribute__((visibility("default"))) int l_asetGetLast(void) {
    ALOGD("l_asetGetLast() called");
    return 0;
}

/* Demangled: numaDifferentiateInterval */
extern "C" __attribute__((visibility("default"))) int numaDifferentiateInterval(void) {
    ALOGD("numaDifferentiateInterval() called");
    return 0;
}

/* Demangled: returnErrorInt */
extern "C" __attribute__((visibility("default"))) int returnErrorInt(void) {
    ALOGD("returnErrorInt() called");
    return 0;
}

/* Demangled: linearScaleRGBVal */
extern "C" __attribute__((visibility("default"))) int linearScaleRGBVal(void) {
    ALOGD("linearScaleRGBVal() called");
    return 0;
}

/* Demangled: stringLength */
extern "C" __attribute__((visibility("default"))) int stringLength(void) {
    ALOGD("stringLength() called");
    return 0;
}

/* Demangled: sarrayRead */
extern "C" __attribute__((visibility("default"))) int sarrayRead(void) {
    ALOGD("sarrayRead() called");
    return 0;
}

/* Demangled: pixcmapToOctcubeLUT */
extern "C" __attribute__((visibility("default"))) int pixcmapToOctcubeLUT(void) {
    ALOGD("pixcmapToOctcubeLUT() called");
    return 0;
}

/* Demangled: dewarpaSetCheckColumns */
extern "C" __attribute__((visibility("default"))) int dewarpaSetCheckColumns(void) {
    ALOGD("dewarpaSetCheckColumns() called");
    return 0;
}

/* Demangled: kernelGetElement */
extern "C" __attribute__((visibility("default"))) int kernelGetElement(void) {
    ALOGD("kernelGetElement() called");
    return 0;
}

/* Exported Object: gplotstylenames */
extern "C" __attribute__((visibility("default"))) void* gplotstylenames = NULL;

/* Demangled: pixRenderPlotFromNumaGen */
extern "C" __attribute__((visibility("default"))) int pixRenderPlotFromNumaGen(void) {
    ALOGD("pixRenderPlotFromNumaGen() called");
    return 0;
}

/* Demangled: pixCleanBackgroundToWhite */
extern "C" __attribute__((visibility("default"))) int pixCleanBackgroundToWhite(void) {
    ALOGD("pixCleanBackgroundToWhite() called");
    return 0;
}

/* Demangled: pixSetSpp */
extern "C" __attribute__((visibility("default"))) int pixSetSpp(void) {
    ALOGD("pixSetSpp() called");
    return 0;
}

/* Demangled: pixConvolveRGB */
extern "C" __attribute__((visibility("default"))) int pixConvolveRGB(void) {
    ALOGD("pixConvolveRGB() called");
    return 0;
}

/* Demangled: fpixScaleByInteger */
extern "C" __attribute__((visibility("default"))) int fpixScaleByInteger(void) {
    ALOGD("fpixScaleByInteger() called");
    return 0;
}

/* Demangled: pixRankFilterWithScaling */
extern "C" __attribute__((visibility("default"))) int pixRankFilterWithScaling(void) {
    ALOGD("pixRankFilterWithScaling() called");
    return 0;
}

/* Demangled: l_dnaHashCreateFromSarray */
extern "C" __attribute__((visibility("default"))) int l_dnaHashCreateFromSarray(void) {
    ALOGD("l_dnaHashCreateFromSarray() called");
    return 0;
}

/* Demangled: l_binaryReadSelect */
extern "C" __attribute__((visibility("default"))) int l_binaryReadSelect(void) {
    ALOGD("l_binaryReadSelect() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Pixa_nativeGetBoxGeometry */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Pixa_nativeGetBoxGeometry(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Pixa_nativeGetBoxGeometry() called");
    return 0;
}

/* Demangled: boxaRotate */
extern "C" __attribute__((visibility("default"))) int boxaRotate(void) {
    ALOGD("boxaRotate() called");
    return 0;
}

/* Demangled: l_dnaEmpty */
extern "C" __attribute__((visibility("default"))) int l_dnaEmpty(void) {
    ALOGD("l_dnaEmpty() called");
    return 0;
}

/* Demangled: pixRenderPlotFromNuma */
extern "C" __attribute__((visibility("default"))) int pixRenderPlotFromNuma(void) {
    ALOGD("pixRenderPlotFromNuma() called");
    return 0;
}

/* Demangled: pixScaleGrayLI */
extern "C" __attribute__((visibility("default"))) int pixScaleGrayLI(void) {
    ALOGD("pixScaleGrayLI() called");
    return 0;
}

/* Demangled: pixReadTiff */
extern "C" __attribute__((visibility("default"))) int pixReadTiff(void) {
    ALOGD("pixReadTiff() called");
    return 0;
}

/* Demangled: pixContrastNorm */
extern "C" __attribute__((visibility("default"))) int pixContrastNorm(void) {
    ALOGD("pixContrastNorm() called");
    return 0;
}

/* Demangled: pixDeskewLocal */
extern "C" __attribute__((visibility("default"))) int pixDeskewLocal(void) {
    ALOGD("pixDeskewLocal() called");
    return 0;
}

/* Demangled: pixGetXRes */
extern "C" __attribute__((visibility("default"))) int pixGetXRes(void) {
    ALOGD("pixGetXRes() called");
    return 0;
}

/* Demangled: pixcmapGetDepth */
extern "C" __attribute__((visibility("default"))) int pixcmapGetDepth(void) {
    ALOGD("pixcmapGetDepth() called");
    return 0;
}

/* Demangled: l_dnaGetDValue */
extern "C" __attribute__((visibility("default"))) int l_dnaGetDValue(void) {
    ALOGD("l_dnaGetDValue() called");
    return 0;
}

/* Demangled: l_dnaIntersectionByHash */
extern "C" __attribute__((visibility("default"))) int l_dnaIntersectionByHash(void) {
    ALOGD("l_dnaIntersectionByHash() called");
    return 0;
}

/* Demangled: pixGenerateMaskByBand */
extern "C" __attribute__((visibility("default"))) int pixGenerateMaskByBand(void) {
    ALOGD("pixGenerateMaskByBand() called");
    return 0;
}

/* Demangled: l_amapDestroy */
extern "C" __attribute__((visibility("default"))) int l_amapDestroy(void) {
    ALOGD("l_amapDestroy() called");
    return 0;
}

/* Demangled: numaErode */
extern "C" __attribute__((visibility("default"))) int numaErode(void) {
    ALOGD("numaErode() called");
    return 0;
}

/* Demangled: pixaFindDimensions */
extern "C" __attribute__((visibility("default"))) int pixaFindDimensions(void) {
    ALOGD("pixaFindDimensions() called");
    return 0;
}

/* Demangled: pixacompGetBoxaCount */
extern "C" __attribute__((visibility("default"))) int pixacompGetBoxaCount(void) {
    ALOGD("pixacompGetBoxaCount() called");
    return 0;
}

/* Demangled: ccbaGetCcb */
extern "C" __attribute__((visibility("default"))) int ccbaGetCcb(void) {
    ALOGD("ccbaGetCcb() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Boxa_nativeDestroy */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Boxa_nativeDestroy(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Boxa_nativeDestroy() called");
    return 0;
}

/* Demangled: pixConvertTo32 */
extern "C" __attribute__((visibility("default"))) int pixConvertTo32(void) {
    ALOGD("pixConvertTo32() called");
    return 0;
}

/* Demangled: pmsLogInfo */
extern "C" __attribute__((visibility("default"))) int pmsLogInfo(void) {
    ALOGD("pmsLogInfo() called");
    return 0;
}

/* Demangled: selReadFromColorImage */
extern "C" __attribute__((visibility("default"))) int selReadFromColorImage(void) {
    ALOGD("selReadFromColorImage() called");
    return 0;
}

/* Demangled: pixGetPixel */
extern "C" __attribute__((visibility("default"))) int pixGetPixel(void) {
    ALOGD("pixGetPixel() called");
    return 0;
}

/* Demangled: fpixCreate */
extern "C" __attribute__((visibility("default"))) int fpixCreate(void) {
    ALOGD("fpixCreate() called");
    return 0;
}

/* Demangled: selectComposableSizes */
extern "C" __attribute__((visibility("default"))) int selectComposableSizes(void) {
    ALOGD("selectComposableSizes() called");
    return 0;
}

/* Demangled: pixAffineSampled */
extern "C" __attribute__((visibility("default"))) int pixAffineSampled(void) {
    ALOGD("pixAffineSampled() called");
    return 0;
}

/* Demangled: bmfGetBaseline */
extern "C" __attribute__((visibility("default"))) int bmfGetBaseline(void) {
    ALOGD("bmfGetBaseline() called");
    return 0;
}

/* Demangled: pixCloseSafeCompBrick */
extern "C" __attribute__((visibility("default"))) int pixCloseSafeCompBrick(void) {
    ALOGD("pixCloseSafeCompBrick() called");
    return 0;
}

/* Demangled: pixacompDisplayTiledAndScaled */
extern "C" __attribute__((visibility("default"))) int pixacompDisplayTiledAndScaled(void) {
    ALOGD("pixacompDisplayTiledAndScaled() called");
    return 0;
}

/* Demangled: pixBackgroundNormGrayArrayMorph */
extern "C" __attribute__((visibility("default"))) int pixBackgroundNormGrayArrayMorph(void) {
    ALOGD("pixBackgroundNormGrayArrayMorph() called");
    return 0;
}

/* Demangled: createMatrix2dTranslate */
extern "C" __attribute__((visibility("default"))) int createMatrix2dTranslate(void) {
    ALOGD("createMatrix2dTranslate() called");
    return 0;
}

/* Demangled: pixClearInRect */
extern "C" __attribute__((visibility("default"))) int pixClearInRect(void) {
    ALOGD("pixClearInRect() called");
    return 0;
}

/* Demangled: sarrayReadMem */
extern "C" __attribute__((visibility("default"))) int sarrayReadMem(void) {
    ALOGD("sarrayReadMem() called");
    return 0;
}

/* Demangled: selaCreateFromFile */
extern "C" __attribute__((visibility("default"))) int selaCreateFromFile(void) {
    ALOGD("selaCreateFromFile() called");
    return 0;
}

/* Demangled: pixScaleByIntSampling */
extern "C" __attribute__((visibility("default"))) int pixScaleByIntSampling(void) {
    ALOGD("pixScaleByIntSampling() called");
    return 0;
}

/* Demangled: pixColorMorph */
extern "C" __attribute__((visibility("default"))) int pixColorMorph(void) {
    ALOGD("pixColorMorph() called");
    return 0;
}

/* Demangled: lept_roundftoi */
extern "C" __attribute__((visibility("default"))) int lept_roundftoi(void) {
    ALOGD("lept_roundftoi() called");
    return 0;
}

/* Demangled: convertFilesTo1bpp */
extern "C" __attribute__((visibility("default"))) int convertFilesTo1bpp(void) {
    ALOGD("convertFilesTo1bpp() called");
    return 0;
}

/* Demangled: pixReadMemGif */
extern "C" __attribute__((visibility("default"))) int pixReadMemGif(void) {
    ALOGD("pixReadMemGif() called");
    return 0;
}

/* Demangled: pixMakeFrameMask */
extern "C" __attribute__((visibility("default"))) int pixMakeFrameMask(void) {
    ALOGD("pixMakeFrameMask() called");
    return 0;
}

/* Demangled: rotateAMGrayLow */
extern "C" __attribute__((visibility("default"))) int rotateAMGrayLow(void) {
    ALOGD("rotateAMGrayLow() called");
    return 0;
}

/* Demangled: splitPathAtExtension */
extern "C" __attribute__((visibility("default"))) int splitPathAtExtension(void) {
    ALOGD("splitPathAtExtension() called");
    return 0;
}

/* Demangled: dewarpaReadMem */
extern "C" __attribute__((visibility("default"))) int dewarpaReadMem(void) {
    ALOGD("dewarpaReadMem() called");
    return 0;
}

/* Demangled: pixScaleToGray */
extern "C" __attribute__((visibility("default"))) int pixScaleToGray(void) {
    ALOGD("pixScaleToGray() called");
    return 0;
}

/* Demangled: pixGetColorHistogramMasked */
extern "C" __attribute__((visibility("default"))) int pixGetColorHistogramMasked(void) {
    ALOGD("pixGetColorHistogramMasked() called");
    return 0;
}

/* Demangled: jbDataDestroy */
extern "C" __attribute__((visibility("default"))) int jbDataDestroy(void) {
    ALOGD("jbDataDestroy() called");
    return 0;
}

/* Demangled: pixSetMaskedGeneral */
extern "C" __attribute__((visibility("default"))) int pixSetMaskedGeneral(void) {
    ALOGD("pixSetMaskedGeneral() called");
    return 0;
}

/* Demangled: pixGetGrayHistogramTiled */
extern "C" __attribute__((visibility("default"))) int pixGetGrayHistogramTiled(void) {
    ALOGD("pixGetGrayHistogramTiled() called");
    return 0;
}

/* Demangled: bmfGetStringWidth */
extern "C" __attribute__((visibility("default"))) int bmfGetStringWidth(void) {
    ALOGD("bmfGetStringWidth() called");
    return 0;
}

/* Demangled: boxaaDisplay */
extern "C" __attribute__((visibility("default"))) int boxaaDisplay(void) {
    ALOGD("boxaaDisplay() called");
    return 0;
}

/* Demangled: numaGetMin */
extern "C" __attribute__((visibility("default"))) int numaGetMin(void) {
    ALOGD("numaGetMin() called");
    return 0;
}

/* Demangled: l_rbtreeDelete */
extern "C" __attribute__((visibility("default"))) int l_rbtreeDelete(void) {
    ALOGD("l_rbtreeDelete() called");
    return 0;
}

/* Demangled: pixOpenBrick */
extern "C" __attribute__((visibility("default"))) int pixOpenBrick(void) {
    ALOGD("pixOpenBrick() called");
    return 0;
}

/* Demangled: numaMakeHistogramAuto */
extern "C" __attribute__((visibility("default"))) int numaMakeHistogramAuto(void) {
    ALOGD("numaMakeHistogramAuto() called");
    return 0;
}

/* Demangled: convertToNUpFiles */
extern "C" __attribute__((visibility("default"))) int convertToNUpFiles(void) {
    ALOGD("convertToNUpFiles() called");
    return 0;
}

/* Demangled: selDisplayInPix */
extern "C" __attribute__((visibility("default"))) int selDisplayInPix(void) {
    ALOGD("selDisplayInPix() called");
    return 0;
}

/* Demangled: boxaGetBox */
extern "C" __attribute__((visibility("default"))) int boxaGetBox(void) {
    ALOGD("boxaGetBox() called");
    return 0;
}

/* Demangled: selCreateFromString */
extern "C" __attribute__((visibility("default"))) int selCreateFromString(void) {
    ALOGD("selCreateFromString() called");
    return 0;
}

/* Demangled: pixFinalAccumulate */
extern "C" __attribute__((visibility("default"))) int pixFinalAccumulate(void) {
    ALOGD("pixFinalAccumulate() called");
    return 0;
}

/* Demangled: pixaGetDepthInfo */
extern "C" __attribute__((visibility("default"))) int pixaGetDepthInfo(void) {
    ALOGD("pixaGetDepthInfo() called");
    return 0;
}

/* Demangled: numaSortGeneral */
extern "C" __attribute__((visibility("default"))) int numaSortGeneral(void) {
    ALOGD("numaSortGeneral() called");
    return 0;
}

/* Demangled: pixRemoveBorderToSize */
extern "C" __attribute__((visibility("default"))) int pixRemoveBorderToSize(void) {
    ALOGD("pixRemoveBorderToSize() called");
    return 0;
}

/* Demangled: l_getDataFourBytes */
extern "C" __attribute__((visibility("default"))) int l_getDataFourBytes(void) {
    ALOGD("l_getDataFourBytes() called");
    return 0;
}

/* Demangled: ccbCreate */
extern "C" __attribute__((visibility("default"))) int ccbCreate(void) {
    ALOGD("ccbCreate() called");
    return 0;
}

/* Demangled: pixProjective */
extern "C" __attribute__((visibility("default"))) int pixProjective(void) {
    ALOGD("pixProjective() called");
    return 0;
}

/* Demangled: pixBlendColor */
extern "C" __attribute__((visibility("default"))) int pixBlendColor(void) {
    ALOGD("pixBlendColor() called");
    return 0;
}

/* Demangled: pixColorsForQuantization */
extern "C" __attribute__((visibility("default"))) int pixColorsForQuantization(void) {
    ALOGD("pixColorsForQuantization() called");
    return 0;
}

/* Demangled: pixSeedfillBB */
extern "C" __attribute__((visibility("default"))) int pixSeedfillBB(void) {
    ALOGD("pixSeedfillBB() called");
    return 0;
}

/* Demangled: pixWriteStreamPng */
extern "C" __attribute__((visibility("default"))) int pixWriteStreamPng(void) {
    ALOGD("pixWriteStreamPng() called");
    return 0;
}

/* Demangled: pixCloseGray */
extern "C" __attribute__((visibility("default"))) int pixCloseGray(void) {
    ALOGD("pixCloseGray() called");
    return 0;
}

/* Demangled: recogTrainUnlabelled */
extern "C" __attribute__((visibility("default"))) int recogTrainUnlabelled(void) {
    ALOGD("recogTrainUnlabelled() called");
    return 0;
}

/* Demangled: recogaFinishAveraging */
extern "C" __attribute__((visibility("default"))) int recogaFinishAveraging(void) {
    ALOGD("recogaFinishAveraging() called");
    return 0;
}

/* Exported Object: LeptMsgSeverity */
extern "C" __attribute__((visibility("default"))) void* LeptMsgSeverity = NULL;

/* Demangled: createMatrix2dScale */
extern "C" __attribute__((visibility("default"))) int createMatrix2dScale(void) {
    ALOGD("createMatrix2dScale() called");
    return 0;
}

/* Demangled: lheapSortStrictOrder */
extern "C" __attribute__((visibility("default"))) int lheapSortStrictOrder(void) {
    ALOGD("lheapSortStrictOrder() called");
    return 0;
}

/* Demangled: pixSplitIntoCharacters */
extern "C" __attribute__((visibility("default"))) int pixSplitIntoCharacters(void) {
    ALOGD("pixSplitIntoCharacters() called");
    return 0;
}

/* Demangled: l_rbtreeCreate */
extern "C" __attribute__((visibility("default"))) int l_rbtreeCreate(void) {
    ALOGD("l_rbtreeCreate() called");
    return 0;
}

/* Demangled: pixScaleToGrayMipmap */
extern "C" __attribute__((visibility("default"))) int pixScaleToGrayMipmap(void) {
    ALOGD("pixScaleToGrayMipmap() called");
    return 0;
}

/* Demangled: reallocNew */
extern "C" __attribute__((visibility("default"))) int reallocNew(void) {
    ALOGD("reallocNew() called");
    return 0;
}

/* Demangled: ccbaWriteSVG */
extern "C" __attribute__((visibility("default"))) int ccbaWriteSVG(void) {
    ALOGD("ccbaWriteSVG() called");
    return 0;
}

/* Demangled: generatePtaLine */
extern "C" __attribute__((visibility("default"))) int generatePtaLine(void) {
    ALOGD("generatePtaLine() called");
    return 0;
}

/* Demangled: pixGenTextlineMask */
extern "C" __attribute__((visibility("default"))) int pixGenTextlineMask(void) {
    ALOGD("pixGenTextlineMask() called");
    return 0;
}

/* Demangled: pixBilinearSampled */
extern "C" __attribute__((visibility("default"))) int pixBilinearSampled(void) {
    ALOGD("pixBilinearSampled() called");
    return 0;
}

/* Demangled: pixaGetFont */
extern "C" __attribute__((visibility("default"))) int pixaGetFont(void) {
    ALOGD("pixaGetFont() called");
    return 0;
}

/* Demangled: ptaJoin */
extern "C" __attribute__((visibility("default"))) int ptaJoin(void) {
    ALOGD("ptaJoin() called");
    return 0;
}

/* Demangled: pixaGetAlignedStats */
extern "C" __attribute__((visibility("default"))) int pixaGetAlignedStats(void) {
    ALOGD("pixaGetAlignedStats() called");
    return 0;
}

/* Demangled: l_asetCreateFromPta */
extern "C" __attribute__((visibility("default"))) int l_asetCreateFromPta(void) {
    ALOGD("l_asetCreateFromPta() called");
    return 0;
}

/* Demangled: pixaRead */
extern "C" __attribute__((visibility("default"))) int pixaRead(void) {
    ALOGD("pixaRead() called");
    return 0;
}

/* Demangled: numaGetSum */
extern "C" __attribute__((visibility("default"))) int numaGetSum(void) {
    ALOGD("numaGetSum() called");
    return 0;
}

/* Demangled: linearInterpolatePixelFloat */
extern "C" __attribute__((visibility("default"))) int linearInterpolatePixelFloat(void) {
    ALOGD("linearInterpolatePixelFloat() called");
    return 0;
}

/* Demangled: pixBlendCmap */
extern "C" __attribute__((visibility("default"))) int pixBlendCmap(void) {
    ALOGD("pixBlendCmap() called");
    return 0;
}

/* Demangled: boxOverlapArea */
extern "C" __attribute__((visibility("default"))) int boxOverlapArea(void) {
    ALOGD("boxOverlapArea() called");
    return 0;
}

/* Demangled: boxaSetSide */
extern "C" __attribute__((visibility("default"))) int boxaSetSide(void) {
    ALOGD("boxaSetSide() called");
    return 0;
}

/* Demangled: pixRenderBoxBlend */
extern "C" __attribute__((visibility("default"))) int pixRenderBoxBlend(void) {
    ALOGD("pixRenderBoxBlend() called");
    return 0;
}

/* Demangled: readHeaderMemJp2k */
extern "C" __attribute__((visibility("default"))) int readHeaderMemJp2k(void) {
    ALOGD("readHeaderMemJp2k() called");
    return 0;
}

/* Demangled: pixAddText */
extern "C" __attribute__((visibility("default"))) int pixAddText(void) {
    ALOGD("pixAddText() called");
    return 0;
}

/* Demangled: pixWriteStreamPnm */
extern "C" __attribute__((visibility("default"))) int pixWriteStreamPnm(void) {
    ALOGD("pixWriteStreamPnm() called");
    return 0;
}

/* Demangled: pixVShearCorner */
extern "C" __attribute__((visibility("default"))) int pixVShearCorner(void) {
    ALOGD("pixVShearCorner() called");
    return 0;
}

/* Demangled: dpixCopyResolution */
extern "C" __attribute__((visibility("default"))) int dpixCopyResolution(void) {
    ALOGD("dpixCopyResolution() called");
    return 0;
}

/* Demangled: pixacompCreateFromFiles */
extern "C" __attribute__((visibility("default"))) int pixacompCreateFromFiles(void) {
    ALOGD("pixacompCreateFromFiles() called");
    return 0;
}

/* Demangled: pixConvert32To24 */
extern "C" __attribute__((visibility("default"))) int pixConvert32To24(void) {
    ALOGD("pixConvert32To24() called");
    return 0;
}

/* Demangled: numaGetIArray */
extern "C" __attribute__((visibility("default"))) int numaGetIArray(void) {
    ALOGD("numaGetIArray() called");
    return 0;
}

/* Demangled: numaClipToInterval */
extern "C" __attribute__((visibility("default"))) int numaClipToInterval(void) {
    ALOGD("numaClipToInterval() called");
    return 0;
}

/* Demangled: pixMorphGradient */
extern "C" __attribute__((visibility("default"))) int pixMorphGradient(void) {
    ALOGD("pixMorphGradient() called");
    return 0;
}

/* Demangled: numaIntegrateInterval */
extern "C" __attribute__((visibility("default"))) int numaIntegrateInterval(void) {
    ALOGD("numaIntegrateInterval() called");
    return 0;
}

/* Demangled: pixSplitComponentWithProfile */
extern "C" __attribute__((visibility("default"))) int pixSplitComponentWithProfile(void) {
    ALOGD("pixSplitComponentWithProfile() called");
    return 0;
}

/* Demangled: pixacompConvertToPdfData */
extern "C" __attribute__((visibility("default"))) int pixacompConvertToPdfData(void) {
    ALOGD("pixacompConvertToPdfData() called");
    return 0;
}

/* Demangled: pixConvertGrayToColormap8 */
extern "C" __attribute__((visibility("default"))) int pixConvertGrayToColormap8(void) {
    ALOGD("pixConvertGrayToColormap8() called");
    return 0;
}

/* Demangled: pixWritePng */
extern "C" __attribute__((visibility("default"))) int pixWritePng(void) {
    ALOGD("pixWritePng() called");
    return 0;
}

/* Demangled: ptaFindPtByHash */
extern "C" __attribute__((visibility("default"))) int ptaFindPtByHash(void) {
    ALOGD("ptaFindPtByHash() called");
    return 0;
}

/* Demangled: pixScaleGrayMinMax */
extern "C" __attribute__((visibility("default"))) int pixScaleGrayMinMax(void) {
    ALOGD("pixScaleGrayMinMax() called");
    return 0;
}

/* Demangled: ptaAddPt */
extern "C" __attribute__((visibility("default"))) int ptaAddPt(void) {
    ALOGD("ptaAddPt() called");
    return 0;
}

/* Demangled: gplotCreate */
extern "C" __attribute__((visibility("default"))) int gplotCreate(void) {
    ALOGD("gplotCreate() called");
    return 0;
}

/* Demangled: stringRemoveChars */
extern "C" __attribute__((visibility("default"))) int stringRemoveChars(void) {
    ALOGD("stringRemoveChars() called");
    return 0;
}

/* Demangled: pixaaExtendArray */
extern "C" __attribute__((visibility("default"))) int pixaaExtendArray(void) {
    ALOGD("pixaaExtendArray() called");
    return 0;
}

/* Demangled: ccbaDisplayImage1 */
extern "C" __attribute__((visibility("default"))) int ccbaDisplayImage1(void) {
    ALOGD("ccbaDisplayImage1() called");
    return 0;
}

/* Demangled: getRGBFromIndex */
extern "C" __attribute__((visibility("default"))) int getRGBFromIndex(void) {
    ALOGD("getRGBFromIndex() called");
    return 0;
}

/* Demangled: seedfillBinaryLow */
extern "C" __attribute__((visibility("default"))) int seedfillBinaryLow(void) {
    ALOGD("seedfillBinaryLow() called");
    return 0;
}

/* Demangled: ccbaDisplayImage2 */
extern "C" __attribute__((visibility("default"))) int ccbaDisplayImage2(void) {
    ALOGD("ccbaDisplayImage2() called");
    return 0;
}

/* Demangled: l_hashFloat64ToUint64 */
extern "C" __attribute__((visibility("default"))) int l_hashFloat64ToUint64(void) {
    ALOGD("l_hashFloat64ToUint64() called");
    return 0;
}

/* Demangled: pixMorphSequenceDwa */
extern "C" __attribute__((visibility("default"))) int pixMorphSequenceDwa(void) {
    ALOGD("pixMorphSequenceDwa() called");
    return 0;
}

/* Demangled: convertJpegToPSString */
extern "C" __attribute__((visibility("default"))) int convertJpegToPSString(void) {
    ALOGD("convertJpegToPSString() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_ReadFile_nativeReadFiles */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_ReadFile_nativeReadFiles(void) {
    ALOGD("Java_com_googlecode_leptonica_android_ReadFile_nativeReadFiles() called");
    return 0;
}

/* Demangled: numaCreateFromIArray */
extern "C" __attribute__((visibility("default"))) int numaCreateFromIArray(void) {
    ALOGD("numaCreateFromIArray() called");
    return 0;
}

/* Demangled: pixaaReplacePixa */
extern "C" __attribute__((visibility("default"))) int pixaaReplacePixa(void) {
    ALOGD("pixaaReplacePixa() called");
    return 0;
}

/* Demangled: recogPadTrainingSet */
extern "C" __attribute__((visibility("default"))) int recogPadTrainingSet(void) {
    ALOGD("recogPadTrainingSet() called");
    return 0;
}

/* Demangled: pixRotateShearCenterIP */
extern "C" __attribute__((visibility("default"))) int pixRotateShearCenterIP(void) {
    ALOGD("pixRotateShearCenterIP() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Scale_nativeScale */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Scale_nativeScale(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Scale_nativeScale() called");
    return 0;
}

/* Demangled: pixConnComp */
extern "C" __attribute__((visibility("default"))) int pixConnComp(void) {
    ALOGD("pixConnComp() called");
    return 0;
}

/* Demangled: makeGrayQuantIndexTable */
extern "C" __attribute__((visibility("default"))) int makeGrayQuantIndexTable(void) {
    ALOGD("makeGrayQuantIndexTable() called");
    return 0;
}

/* Demangled: freadHeaderJp2k */
extern "C" __attribute__((visibility("default"))) int freadHeaderJp2k(void) {
    ALOGD("freadHeaderJp2k() called");
    return 0;
}

/* Demangled: ptaGetBoundaryPixels */
extern "C" __attribute__((visibility("default"))) int ptaGetBoundaryPixels(void) {
    ALOGD("ptaGetBoundaryPixels() called");
    return 0;
}

/* Demangled: strcodeFinalize */
extern "C" __attribute__((visibility("default"))) int strcodeFinalize(void) {
    ALOGD("strcodeFinalize() called");
    return 0;
}

/* Demangled: bbufferWrite */
extern "C" __attribute__((visibility("default"))) int bbufferWrite(void) {
    ALOGD("bbufferWrite() called");
    return 0;
}

/* Demangled: boxaAdjustWidthToTarget */
extern "C" __attribute__((visibility("default"))) int boxaAdjustWidthToTarget(void) {
    ALOGD("boxaAdjustWidthToTarget() called");
    return 0;
}

/* Demangled: boxaSmoothSequenceMedian */
extern "C" __attribute__((visibility("default"))) int boxaSmoothSequenceMedian(void) {
    ALOGD("boxaSmoothSequenceMedian() called");
    return 0;
}

/* Demangled: dewarpSinglePageRun */
extern "C" __attribute__((visibility("default"))) int dewarpSinglePageRun(void) {
    ALOGD("dewarpSinglePageRun() called");
    return 0;
}

/* Demangled: listFindTail */
extern "C" __attribute__((visibility("default"))) int listFindTail(void) {
    ALOGD("listFindTail() called");
    return 0;
}

/* Demangled: startTimer */
extern "C" __attribute__((visibility("default"))) int startTimer(void) {
    ALOGD("startTimer() called");
    return 0;
}

/* Demangled: pixSetAlphaOverWhite */
extern "C" __attribute__((visibility("default"))) int pixSetAlphaOverWhite(void) {
    ALOGD("pixSetAlphaOverWhite() called");
    return 0;
}

/* Demangled: l_setNeutralBoostVal */
extern "C" __attribute__((visibility("default"))) int l_setNeutralBoostVal(void) {
    ALOGD("l_setNeutralBoostVal() called");
    return 0;
}

/* Demangled: pixcmapGetColor */
extern "C" __attribute__((visibility("default"))) int pixcmapGetColor(void) {
    ALOGD("pixcmapGetColor() called");
    return 0;
}

/* Demangled: l_amapDelete */
extern "C" __attribute__((visibility("default"))) int l_amapDelete(void) {
    ALOGD("l_amapDelete() called");
    return 0;
}

/* Demangled: numaaWrite */
extern "C" __attribute__((visibility("default"))) int numaaWrite(void) {
    ALOGD("numaaWrite() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_memcpy(void) __asm__("__aeabi_memcpy");
int fn___aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: pixGetOuterBorder */
extern "C" __attribute__((visibility("default"))) int pixGetOuterBorder(void) {
    ALOGD("pixGetOuterBorder() called");
    return 0;
}

/* Demangled: l_uncompressGrayHistograms */
extern "C" __attribute__((visibility("default"))) int l_uncompressGrayHistograms(void) {
    ALOGD("l_uncompressGrayHistograms() called");
    return 0;
}

/* Demangled: boxaSort2dByIndex */
extern "C" __attribute__((visibility("default"))) int boxaSort2dByIndex(void) {
    ALOGD("boxaSort2dByIndex() called");
    return 0;
}

/* Demangled: pixEqualWithAlpha */
extern "C" __attribute__((visibility("default"))) int pixEqualWithAlpha(void) {
    ALOGD("pixEqualWithAlpha() called");
    return 0;
}

/* Demangled: pixaaJoin */
extern "C" __attribute__((visibility("default"))) int pixaaJoin(void) {
    ALOGD("pixaaJoin() called");
    return 0;
}

/* Demangled: pixWriteMemTiffCustom */
extern "C" __attribute__((visibility("default"))) int pixWriteMemTiffCustom(void) {
    ALOGD("pixWriteMemTiffCustom() called");
    return 0;
}

/* Demangled: pixGetBackgroundRGBMapMorph */
extern "C" __attribute__((visibility("default"))) int pixGetBackgroundRGBMapMorph(void) {
    ALOGD("pixGetBackgroundRGBMapMorph() called");
    return 0;
}

/* Demangled: pixRenderBoxaArb */
extern "C" __attribute__((visibility("default"))) int pixRenderBoxaArb(void) {
    ALOGD("pixRenderBoxaArb() called");
    return 0;
}

/* Demangled: convertHSVToRGB */
extern "C" __attribute__((visibility("default"))) int convertHSVToRGB(void) {
    ALOGD("convertHSVToRGB() called");
    return 0;
}

/* Demangled: dpixSetWpl */
extern "C" __attribute__((visibility("default"))) int dpixSetWpl(void) {
    ALOGD("dpixSetWpl() called");
    return 0;
}

/* Demangled: sarrayGetRefcount */
extern "C" __attribute__((visibility("default"))) int sarrayGetRefcount(void) {
    ALOGD("sarrayGetRefcount() called");
    return 0;
}

/* Demangled: pixGammaTRC */
extern "C" __attribute__((visibility("default"))) int pixGammaTRC(void) {
    ALOGD("pixGammaTRC() called");
    return 0;
}

/* Demangled: boxRotateOrth */
extern "C" __attribute__((visibility("default"))) int boxRotateOrth(void) {
    ALOGD("boxRotateOrth() called");
    return 0;
}

/* Demangled: pixacompJoin */
extern "C" __attribute__((visibility("default"))) int pixacompJoin(void) {
    ALOGD("pixacompJoin() called");
    return 0;
}

/* Demangled: pixBlockconv */
extern "C" __attribute__((visibility("default"))) int pixBlockconv(void) {
    ALOGD("pixBlockconv() called");
    return 0;
}

/* Demangled: pixReduceRankBinaryCascade */
extern "C" __attribute__((visibility("default"))) int pixReduceRankBinaryCascade(void) {
    ALOGD("pixReduceRankBinaryCascade() called");
    return 0;
}

/* Demangled: numaaCreate */
extern "C" __attribute__((visibility("default"))) int numaaCreate(void) {
    ALOGD("numaaCreate() called");
    return 0;
}

/* Demangled: pixWriteMemJp2k */
extern "C" __attribute__((visibility("default"))) int pixWriteMemJp2k(void) {
    ALOGD("pixWriteMemJp2k() called");
    return 0;
}

/* Demangled: l_amapCreate */
extern "C" __attribute__((visibility("default"))) int l_amapCreate(void) {
    ALOGD("l_amapCreate() called");
    return 0;
}

/* Demangled: pixaFindPerimSizeRatio */
extern "C" __attribute__((visibility("default"))) int pixaFindPerimSizeRatio(void) {
    ALOGD("pixaFindPerimSizeRatio() called");
    return 0;
}

/* Demangled: pixAddGrayColormap8 */
extern "C" __attribute__((visibility("default"))) int pixAddGrayColormap8(void) {
    ALOGD("pixAddGrayColormap8() called");
    return 0;
}

/* Demangled: lqueuePrint */
extern "C" __attribute__((visibility("default"))) int lqueuePrint(void) {
    ALOGD("lqueuePrint() called");
    return 0;
}

/* Demangled: recogProcessToIdentify */
extern "C" __attribute__((visibility("default"))) int recogProcessToIdentify(void) {
    ALOGD("recogProcessToIdentify() called");
    return 0;
}

/* Demangled: pixDisplay */
extern "C" __attribute__((visibility("default"))) int pixDisplay(void) {
    ALOGD("pixDisplay() called");
    return 0;
}

/* Demangled: pixGetPerceptualDiff */
extern "C" __attribute__((visibility("default"))) int pixGetPerceptualDiff(void) {
    ALOGD("pixGetPerceptualDiff() called");
    return 0;
}

/* Demangled: numaWriteMem */
extern "C" __attribute__((visibility("default"))) int numaWriteMem(void) {
    ALOGD("numaWriteMem() called");
    return 0;
}

/* Demangled: recogDestroyDid */
extern "C" __attribute__((visibility("default"))) int recogDestroyDid(void) {
    ALOGD("recogDestroyDid() called");
    return 0;
}

/* Demangled: pixMorphSequence */
extern "C" __attribute__((visibility("default"))) int pixMorphSequence(void) {
    ALOGD("pixMorphSequence() called");
    return 0;
}

/* Demangled: pixGetLocalSkewAngles */
extern "C" __attribute__((visibility("default"))) int pixGetLocalSkewAngles(void) {
    ALOGD("pixGetLocalSkewAngles() called");
    return 0;
}

/* Demangled: ptaGetLinearLSF */
extern "C" __attribute__((visibility("default"))) int ptaGetLinearLSF(void) {
    ALOGD("ptaGetLinearLSF() called");
    return 0;
}

/* Demangled: kernelCreate */
extern "C" __attribute__((visibility("default"))) int kernelCreate(void) {
    ALOGD("kernelCreate() called");
    return 0;
}

/* Demangled: wshedApply */
extern "C" __attribute__((visibility("default"))) int wshedApply(void) {
    ALOGD("wshedApply() called");
    return 0;
}

/* Demangled: ptraaDestroy */
extern "C" __attribute__((visibility("default"))) int ptraaDestroy(void) {
    ALOGD("ptraaDestroy() called");
    return 0;
}

/* Demangled: convertJpegToPSEmbed */
extern "C" __attribute__((visibility("default"))) int convertJpegToPSEmbed(void) {
    ALOGD("convertJpegToPSEmbed() called");
    return 0;
}

/* Demangled: scaleGray4xLILow */
extern "C" __attribute__((visibility("default"))) int scaleGray4xLILow(void) {
    ALOGD("scaleGray4xLILow() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Box_nativeGetWidth */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Box_nativeGetWidth(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Box_nativeGetWidth() called");
    return 0;
}

/* Demangled: pixScaleGeneral */
extern "C" __attribute__((visibility("default"))) int pixScaleGeneral(void) {
    ALOGD("pixScaleGeneral() called");
    return 0;
}

/* Demangled: numaWindowedMean */
extern "C" __attribute__((visibility("default"))) int numaWindowedMean(void) {
    ALOGD("numaWindowedMean() called");
    return 0;
}

/* Demangled: pixDilateBrick */
extern "C" __attribute__((visibility("default"))) int pixDilateBrick(void) {
    ALOGD("pixDilateBrick() called");
    return 0;
}

/* Demangled: selRotateOrth */
extern "C" __attribute__((visibility("default"))) int selRotateOrth(void) {
    ALOGD("selRotateOrth() called");
    return 0;
}

/* Demangled: l_dnaaGetNumberCount */
extern "C" __attribute__((visibility("default"))) int l_dnaaGetNumberCount(void) {
    ALOGD("l_dnaaGetNumberCount() called");
    return 0;
}

/* Demangled: pixOpenCompBrickDwa */
extern "C" __attribute__((visibility("default"))) int pixOpenCompBrickDwa(void) {
    ALOGD("pixOpenCompBrickDwa() called");
    return 0;
}

/* Demangled: pixGenerateSelRandom */
extern "C" __attribute__((visibility("default"))) int pixGenerateSelRandom(void) {
    ALOGD("pixGenerateSelRandom() called");
    return 0;
}

/* Demangled: pixcmapAddBlackOrWhite */
extern "C" __attribute__((visibility("default"))) int pixcmapAddBlackOrWhite(void) {
    ALOGD("pixcmapAddBlackOrWhite() called");
    return 0;
}

/* Demangled: locatePtRadially */
extern "C" __attribute__((visibility("default"))) int locatePtRadially(void) {
    ALOGD("locatePtRadially() called");
    return 0;
}

/* Demangled: __floatundidf */
extern "C" __attribute__((visibility("default"))) int fn___floatundidf(void) __asm__("__floatundidf");
int fn___floatundidf(void) {
    ALOGD("__floatundidf() called");
    return 0;
}

/* Demangled: pixSimpleColorQuantize */
extern "C" __attribute__((visibility("default"))) int pixSimpleColorQuantize(void) {
    ALOGD("pixSimpleColorQuantize() called");
    return 0;
}

/* Demangled: pixMakeRangeMaskHS */
extern "C" __attribute__((visibility("default"))) int pixMakeRangeMaskHS(void) {
    ALOGD("pixMakeRangeMaskHS() called");
    return 0;
}

/* Demangled: pixCompareWithTranslation */
extern "C" __attribute__((visibility("default"))) int pixCompareWithTranslation(void) {
    ALOGD("pixCompareWithTranslation() called");
    return 0;
}

/* Demangled: pmsGetAlloc */
extern "C" __attribute__((visibility("default"))) int pmsGetAlloc(void) {
    ALOGD("pmsGetAlloc() called");
    return 0;
}

/* Demangled: recogMakeBootDigitRecog */
extern "C" __attribute__((visibility("default"))) int recogMakeBootDigitRecog(void) {
    ALOGD("recogMakeBootDigitRecog() called");
    return 0;
}

/* Demangled: boxaaExtendArrayToSize */
extern "C" __attribute__((visibility("default"))) int boxaaExtendArrayToSize(void) {
    ALOGD("boxaaExtendArrayToSize() called");
    return 0;
}

/* Demangled: boxaLinearFit */
extern "C" __attribute__((visibility("default"))) int boxaLinearFit(void) {
    ALOGD("boxaLinearFit() called");
    return 0;
}

/* Demangled: ptaEmpty */
extern "C" __attribute__((visibility("default"))) int ptaEmpty(void) {
    ALOGD("ptaEmpty() called");
    return 0;
}

/* Demangled: fpixAffine */
extern "C" __attribute__((visibility("default"))) int fpixAffine(void) {
    ALOGD("fpixAffine() called");
    return 0;
}

/* Demangled: kernelWriteStream */
extern "C" __attribute__((visibility("default"))) int kernelWriteStream(void) {
    ALOGD("kernelWriteStream() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Pixa_nativeReplacePix */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Pixa_nativeReplacePix(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Pixa_nativeReplacePix() called");
    return 0;
}

/* Demangled: pixConvolveSep */
extern "C" __attribute__((visibility("default"))) int pixConvolveSep(void) {
    ALOGD("pixConvolveSep() called");
    return 0;
}

/* Demangled: pixaReadFilesSA */
extern "C" __attribute__((visibility("default"))) int pixaReadFilesSA(void) {
    ALOGD("pixaReadFilesSA() called");
    return 0;
}

/* Demangled: pixReadMemTiff */
extern "C" __attribute__((visibility("default"))) int pixReadMemTiff(void) {
    ALOGD("pixReadMemTiff() called");
    return 0;
}

/* Demangled: pixaDisplayRandomCmap */
extern "C" __attribute__((visibility("default"))) int pixaDisplayRandomCmap(void) {
    ALOGD("pixaDisplayRandomCmap() called");
    return 0;
}

/* Demangled: barcodeDispatchDecoder */
extern "C" __attribute__((visibility("default"))) int barcodeDispatchDecoder(void) {
    ALOGD("barcodeDispatchDecoder() called");
    return 0;
}

/* Demangled: boxaJoin */
extern "C" __attribute__((visibility("default"))) int boxaJoin(void) {
    ALOGD("boxaJoin() called");
    return 0;
}

/* Demangled: pixMakeRangeMaskHV */
extern "C" __attribute__((visibility("default"))) int pixMakeRangeMaskHV(void) {
    ALOGD("pixMakeRangeMaskHV() called");
    return 0;
}

/* Demangled: pixOpenBrickDwa */
extern "C" __attribute__((visibility("default"))) int pixOpenBrickDwa(void) {
    ALOGD("pixOpenBrickDwa() called");
    return 0;
}

/* Demangled: pixVShearIP */
extern "C" __attribute__((visibility("default"))) int pixVShearIP(void) {
    ALOGD("pixVShearIP() called");
    return 0;
}

/* Demangled: boxaMergeEvenOdd */
extern "C" __attribute__((visibility("default"))) int boxaMergeEvenOdd(void) {
    ALOGD("boxaMergeEvenOdd() called");
    return 0;
}

/* Demangled: pixMaskBoxa */
extern "C" __attribute__((visibility("default"))) int pixMaskBoxa(void) {
    ALOGD("pixMaskBoxa() called");
    return 0;
}

/* Demangled: projectiveXformPt */
extern "C" __attribute__((visibility("default"))) int projectiveXformPt(void) {
    ALOGD("projectiveXformPt() called");
    return 0;
}

/* Demangled: gplotSetScaling */
extern "C" __attribute__((visibility("default"))) int gplotSetScaling(void) {
    ALOGD("gplotSetScaling() called");
    return 0;
}

/* Demangled: ptaIntersectionByHash */
extern "C" __attribute__((visibility("default"))) int ptaIntersectionByHash(void) {
    ALOGD("ptaIntersectionByHash() called");
    return 0;
}

/* Demangled: freadHeaderSpix */
extern "C" __attribute__((visibility("default"))) int freadHeaderSpix(void) {
    ALOGD("freadHeaderSpix() called");
    return 0;
}

/* Demangled: pixacompGetOffset */
extern "C" __attribute__((visibility("default"))) int pixacompGetOffset(void) {
    ALOGD("pixacompGetOffset() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_ReadFile_nativeReadBytes8 */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_ReadFile_nativeReadBytes8(void) {
    ALOGD("Java_com_googlecode_leptonica_android_ReadFile_nativeReadBytes8() called");
    return 0;
}

/* Demangled: pixCentroid8 */
extern "C" __attribute__((visibility("default"))) int pixCentroid8(void) {
    ALOGD("pixCentroid8() called");
    return 0;
}

/* Demangled: ptaChangeRefcount */
extern "C" __attribute__((visibility("default"))) int ptaChangeRefcount(void) {
    ALOGD("ptaChangeRefcount() called");
    return 0;
}

/* Demangled: l_dnaMakeHistoByHash */
extern "C" __attribute__((visibility("default"))) int l_dnaMakeHistoByHash(void) {
    ALOGD("l_dnaMakeHistoByHash() called");
    return 0;
}

/* Demangled: pixSetDimensions */
extern "C" __attribute__((visibility("default"))) int pixSetDimensions(void) {
    ALOGD("pixSetDimensions() called");
    return 0;
}

/* Demangled: pixFindEqualValues */
extern "C" __attribute__((visibility("default"))) int pixFindEqualValues(void) {
    ALOGD("pixFindEqualValues() called");
    return 0;
}

/* Demangled: boxaaSizeRange */
extern "C" __attribute__((visibility("default"))) int boxaaSizeRange(void) {
    ALOGD("boxaaSizeRange() called");
    return 0;
}

/* Demangled: ccbaGenerateSinglePath */
extern "C" __attribute__((visibility("default"))) int ccbaGenerateSinglePath(void) {
    ALOGD("ccbaGenerateSinglePath() called");
    return 0;
}

/* Demangled: pixFindHorizontalRuns */
extern "C" __attribute__((visibility("default"))) int pixFindHorizontalRuns(void) {
    ALOGD("pixFindHorizontalRuns() called");
    return 0;
}

/* Demangled: ptaReplicatePattern */
extern "C" __attribute__((visibility("default"))) int ptaReplicatePattern(void) {
    ALOGD("ptaReplicatePattern() called");
    return 0;
}

/* Demangled: convertToPdfDataSegmented */
extern "C" __attribute__((visibility("default"))) int convertToPdfDataSegmented(void) {
    ALOGD("convertToPdfDataSegmented() called");
    return 0;
}

/* Exported Object: NumImageFileFormatExtensions */
extern "C" __attribute__((visibility("default"))) void* NumImageFileFormatExtensions = NULL;

/* Demangled: boxCreate */
extern "C" __attribute__((visibility("default"))) int boxCreate(void) {
    ALOGD("boxCreate() called");
    return 0;
}

/* Demangled: numaSortPair */
extern "C" __attribute__((visibility("default"))) int numaSortPair(void) {
    ALOGD("numaSortPair() called");
    return 0;
}

/* Demangled: setPixMemoryManager */
extern "C" __attribute__((visibility("default"))) int setPixMemoryManager(void) {
    ALOGD("setPixMemoryManager() called");
    return 0;
}

/* Demangled: pixAddRGB */
extern "C" __attribute__((visibility("default"))) int pixAddRGB(void) {
    ALOGD("pixAddRGB() called");
    return 0;
}

/* Demangled: numaSetCount */
extern "C" __attribute__((visibility("default"))) int numaSetCount(void) {
    ALOGD("numaSetCount() called");
    return 0;
}

/* Demangled: pixGetText */
extern "C" __attribute__((visibility("default"))) int pixGetText(void) {
    ALOGD("pixGetText() called");
    return 0;
}

/* Demangled: pmsGetLevelForAlloc */
extern "C" __attribute__((visibility("default"))) int pmsGetLevelForAlloc(void) {
    ALOGD("pmsGetLevelForAlloc() called");
    return 0;
}

/* Demangled: convertSepCharsInPath */
extern "C" __attribute__((visibility("default"))) int convertSepCharsInPath(void) {
    ALOGD("convertSepCharsInPath() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_Convert_nativeConvertTo8 */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_Convert_nativeConvertTo8(void) {
    ALOGD("Java_com_googlecode_leptonica_android_Convert_nativeConvertTo8() called");
    return 0;
}

/* Demangled: pixQuantFromCmap */
extern "C" __attribute__((visibility("default"))) int pixQuantFromCmap(void) {
    ALOGD("pixQuantFromCmap() called");
    return 0;
}

/* Demangled: l_dnaGetCount */
extern "C" __attribute__((visibility("default"))) int l_dnaGetCount(void) {
    ALOGD("l_dnaGetCount() called");
    return 0;
}

/* Demangled: pixWriteMemSpix */
extern "C" __attribute__((visibility("default"))) int pixWriteMemSpix(void) {
    ALOGD("pixWriteMemSpix() called");
    return 0;
}

/* Demangled: numaaAddNumber */
extern "C" __attribute__((visibility("default"))) int numaaAddNumber(void) {
    ALOGD("numaaAddNumber() called");
    return 0;
}

/* Demangled: lheapRemove */
extern "C" __attribute__((visibility("default"))) int lheapRemove(void) {
    ALOGD("lheapRemove() called");
    return 0;
}

/* Demangled: pixaSelectBySize */
extern "C" __attribute__((visibility("default"))) int pixaSelectBySize(void) {
    ALOGD("pixaSelectBySize() called");
    return 0;
}

/* Demangled: listRemoveFromHead */
extern "C" __attribute__((visibility("default"))) int listRemoveFromHead(void) {
    ALOGD("listRemoveFromHead() called");
    return 0;
}

/* Demangled: pixcompCreateFromFile */
extern "C" __attribute__((visibility("default"))) int pixcompCreateFromFile(void) {
    ALOGD("pixcompCreateFromFile() called");
    return 0;
}

/* Demangled: fprintTiffInfo */
extern "C" __attribute__((visibility("default"))) int fprintTiffInfo(void) {
    ALOGD("fprintTiffInfo() called");
    return 0;
}

/* Demangled: recogCreate */
extern "C" __attribute__((visibility("default"))) int recogCreate(void) {
    ALOGD("recogCreate() called");
    return 0;
}

/* Demangled: sudokuSolve */
extern "C" __attribute__((visibility("default"))) int sudokuSolve(void) {
    ALOGD("sudokuSolve() called");
    return 0;
}

/* Demangled: Java_com_googlecode_leptonica_android_AdaptiveMap_nativePixContrastNorm */
extern "C" __attribute__((visibility("default"))) int Java_com_googlecode_leptonica_android_AdaptiveMap_nativePixContrastNorm(void) {
    ALOGD("Java_com_googlecode_leptonica_android_AdaptiveMap_nativePixContrastNorm() called");
    return 0;
}

/* Demangled: pixGenerateMaskByBand32 */
extern "C" __attribute__((visibility("default"))) int pixGenerateMaskByBand32(void) {
    ALOGD("pixGenerateMaskByBand32() called");
    return 0;
}

/* Demangled: ptaaInitFull */
extern "C" __attribute__((visibility("default"))) int ptaaInitFull(void) {
    ALOGD("ptaaInitFull() called");
    return 0;
}

/* Demangled: recogaCreate */
extern "C" __attribute__((visibility("default"))) int recogaCreate(void) {
    ALOGD("recogaCreate() called");
    return 0;
}

/* Demangled: pixDilateCompBrickDwa */
extern "C" __attribute__((visibility("default"))) int pixDilateCompBrickDwa(void) {
    ALOGD("pixDilateCompBrickDwa() called");
    return 0;
}

/* Demangled: readHeaderMemWebP */
extern "C" __attribute__((visibility("default"))) int readHeaderMemWebP(void) {
    ALOGD("readHeaderMemWebP() called");
    return 0;
}

/* Demangled: boxBoundingRegion */
extern "C" __attribute__((visibility("default"))) int boxBoundingRegion(void) {
    ALOGD("boxBoundingRegion() called");
    return 0;
}

/* Demangled: pixaReplacePix */
extern "C" __attribute__((visibility("default"))) int pixaReplacePix(void) {
    ALOGD("pixaReplacePix() called");
    return 0;
}

/* Demangled: pixConvertRGBToLAB */
extern "C" __attribute__((visibility("default"))) int pixConvertRGBToLAB(void) {
    ALOGD("pixConvertRGBToLAB() called");
    return 0;
}

/* Demangled: selWriteStream */
extern "C" __attribute__((visibility("default"))) int selWriteStream(void) {
    ALOGD("selWriteStream() called");
    return 0;
}

/* Demangled: l_dnaGetRefcount */
extern "C" __attribute__((visibility("default"))) int l_dnaGetRefcount(void) {
    ALOGD("l_dnaGetRefcount() called");
    return 0;
}

/* Demangled: l_rbtreeGetPrev */
extern "C" __attribute__((visibility("default"))) int l_rbtreeGetPrev(void) {
    ALOGD("l_rbtreeGetPrev() called");
    return 0;
}

/* Demangled: pixSetPadBits */
extern "C" __attribute__((visibility("default"))) int pixSetPadBits(void) {
    ALOGD("pixSetPadBits() called");
    return 0;
}

/* Demangled: selaCreate */
extern "C" __attribute__((visibility("default"))) int selaCreate(void) {
    ALOGD("selaCreate() called");
    return 0;
}

/* Demangled: pixBlockconvGray */
extern "C" __attribute__((visibility("default"))) int pixBlockconvGray(void) {
    ALOGD("pixBlockconvGray() called");
    return 0;
}

/* Demangled: selFindMaxTranslations */
extern "C" __attribute__((visibility("default"))) int selFindMaxTranslations(void) {
    ALOGD("selFindMaxTranslations() called");
    return 0;
}

/* Demangled: ptaReadStream */
extern "C" __attribute__((visibility("default"))) int ptaReadStream(void) {
    ALOGD("ptaReadStream() called");
    return 0;
}

/* Demangled: boxGetRefcount */
extern "C" __attribute__((visibility("default"))) int boxGetRefcount(void) {
    ALOGD("boxGetRefcount() called");
    return 0;
}

/* Demangled: pixScaleGray4xLIThresh */
extern "C" __attribute__((visibility("default"))) int pixScaleGray4xLIThresh(void) {
    ALOGD("pixScaleGray4xLIThresh() called");
    return 0;
}

/* Demangled: fmorphautogen */
extern "C" __attribute__((visibility("default"))) int fmorphautogen(void) {
    ALOGD("fmorphautogen() called");
    return 0;
}

/* Demangled: selCopy */
extern "C" __attribute__((visibility("default"))) int selCopy(void) {
    ALOGD("selCopy() called");
    return 0;
}

/* Demangled: ptraaGetPtra */
extern "C" __attribute__((visibility("default"))) int ptraaGetPtra(void) {
    ALOGD("ptraaGetPtra() called");
    return 0;
}

/* Demangled: pixcmapCountGrayColors */
extern "C" __attribute__((visibility("default"))) int pixcmapCountGrayColors(void) {
    ALOGD("pixcmapCountGrayColors() called");
    return 0;
}

/* Demangled: pixcmapGetNearestIndex */
extern "C" __attribute__((visibility("default"))) int pixcmapGetNearestIndex(void) {
    ALOGD("pixcmapGetNearestIndex() called");
    return 0;
}

/* Demangled: fpixSetDimensions */
extern "C" __attribute__((visibility("default"))) int fpixSetDimensions(void) {
    ALOGD("fpixSetDimensions() called");
    return 0;
}

/* Demangled: pixGetAllCCBorders */
extern "C" __attribute__((visibility("default"))) int pixGetAllCCBorders(void) {
    ALOGD("pixGetAllCCBorders() called");
    return 0;
}

/* Demangled: pixCompareGrayByHisto */
extern "C" __attribute__((visibility("default"))) int pixCompareGrayByHisto(void) {
    ALOGD("pixCompareGrayByHisto() called");
    return 0;
}

/* Demangled: l_dnaaAddNumber */
extern "C" __attribute__((visibility("default"))) int l_dnaaAddNumber(void) {
    ALOGD("l_dnaaAddNumber() called");
    return 0;
}

/* Demangled: pixUnsharpMaskingGrayFast */
extern "C" __attribute__((visibility("default"))) int pixUnsharpMaskingGrayFast(void) {
    ALOGD("pixUnsharpMaskingGrayFast() called");
    return 0;
}

/* Demangled: pixFindLargeRectangles */
extern "C" __attribute__((visibility("default"))) int pixFindLargeRectangles(void) {
    ALOGD("pixFindLargeRectangles() called");
    return 0;
}

/* Demangled: pixCopyText */
extern "C" __attribute__((visibility("default"))) int pixCopyText(void) {
    ALOGD("pixCopyText() called");
    return 0;
}

/* Demangled: wshedDestroy */
extern "C" __attribute__((visibility("default"))) int wshedDestroy(void) {
    ALOGD("wshedDestroy() called");
    return 0;
}

/* Demangled: pixcmapCreate */
extern "C" __attribute__((visibility("default"))) int pixcmapCreate(void) {
    ALOGD("pixcmapCreate() called");
    return 0;
}

/* Demangled: boxaClipToBox */
extern "C" __attribute__((visibility("default"))) int boxaClipToBox(void) {
    ALOGD("boxaClipToBox() called");
    return 0;
}

/* Demangled: pixDeskewGeneral */
extern "C" __attribute__((visibility("default"))) int pixDeskewGeneral(void) {
    ALOGD("pixDeskewGeneral() called");
    return 0;
}

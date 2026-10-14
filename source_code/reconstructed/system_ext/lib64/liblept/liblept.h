/*
 * Reverse-Engineered ABI Specification for: liblept.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: liblept.so
 */

#ifndef BEGONIA_RE_LIBLEPT_H
#define BEGONIA_RE_LIBLEPT_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: ptraRemoveLast */
/* Demangled: ptraRemoveLast */
int ptraRemoveLast(void);

/* Symbol: pixAbsDiffByRow */
/* Demangled: pixAbsDiffByRow */
int pixAbsDiffByRow(void);

/* Symbol: pixReadStreamWebP */
/* Demangled: pixReadStreamWebP */
int pixReadStreamWebP(void);

/* Symbol: pixScaleByIntSampling */
/* Demangled: pixScaleByIntSampling */
int pixScaleByIntSampling(void);

/* Symbol: recogaAddRecog */
/* Demangled: recogaAddRecog */
int recogaAddRecog(void);

/* Symbol: pixSetTextline */
/* Demangled: pixSetTextline */
int pixSetTextline(void);

/* Symbol: writeMultipageTiffSA */
/* Demangled: writeMultipageTiffSA */
int writeMultipageTiffSA(void);

/* Symbol: kernelCreate */
/* Demangled: kernelCreate */
int kernelCreate(void);

/* Symbol: readHeaderMemPng */
/* Demangled: readHeaderMemPng */
int readHeaderMemPng(void);

/* Symbol: pixScaleGray4xLI */
/* Demangled: pixScaleGray4xLI */
int pixScaleGray4xLI(void);

/* Symbol: pixaFindStrokeWidth */
/* Demangled: pixaFindStrokeWidth */
int pixaFindStrokeWidth(void);

/* Symbol: pixSplitComponentIntoBoxa */
/* Demangled: pixSplitComponentIntoBoxa */
int pixSplitComponentIntoBoxa(void);

/* Symbol: l_byteaJoin */
/* Demangled: l_byteaJoin */
int l_byteaJoin(void);

/* Symbol: pixDilateGray */
/* Demangled: pixDilateGray */
int pixDilateGray(void);

/* Symbol: pixCompareGrayByHisto */
/* Demangled: pixCompareGrayByHisto */
int pixCompareGrayByHisto(void);

/* Symbol: selCreateFromString */
/* Demangled: selCreateFromString */
int selCreateFromString(void);

/* Symbol: l_amapDelete */
/* Demangled: l_amapDelete */
int l_amapDelete(void);

/* Symbol: pixRotate2Shear */
/* Demangled: pixRotate2Shear */
int pixRotate2Shear(void);

/* Symbol: bilinearXformPt */
/* Demangled: bilinearXformPt */
int bilinearXformPt(void);

/* Symbol: pixAdaptThresholdToBinary */
/* Demangled: pixAdaptThresholdToBinary */
int pixAdaptThresholdToBinary(void);

/* Symbol: gplotfilestyles */
/* Demangled: gplotfilestyles */
extern void* gplotfilestyles;

/* Symbol: pixaaSelectRange */
/* Demangled: pixaaSelectRange */
int pixaaSelectRange(void);

/* Symbol: fprintTiffInfo */
/* Demangled: fprintTiffInfo */
int fprintTiffInfo(void);

/* Symbol: pixaReadFiles */
/* Demangled: pixaReadFiles */
int pixaReadFiles(void);

/* Symbol: pixMaskedThreshOnBackgroundNorm */
/* Demangled: pixMaskedThreshOnBackgroundNorm */
int pixMaskedThreshOnBackgroundNorm(void);

/* Symbol: pixConvertTo8BySampling */
/* Demangled: pixConvertTo8BySampling */
int pixConvertTo8BySampling(void);

/* Symbol: pixFindNormalizedSquareSum */
/* Demangled: pixFindNormalizedSquareSum */
int pixFindNormalizedSquareSum(void);

/* Symbol: pixWriteMemTiff */
/* Demangled: pixWriteMemTiff */
int pixWriteMemTiff(void);

/* Symbol: gplotSimpleXYN */
/* Demangled: gplotSimpleXYN */
int gplotSimpleXYN(void);

/* Symbol: fpixAutoRenderContours */
/* Demangled: fpixAutoRenderContours */
int fpixAutoRenderContours(void);

/* Symbol: readHeaderMemPnm */
/* Demangled: readHeaderMemPnm */
int readHeaderMemPnm(void);

/* Symbol: sarrayToStringRange */
/* Demangled: sarrayToStringRange */
int sarrayToStringRange(void);

/* Symbol: sarrayFindStringByHash */
/* Demangled: sarrayFindStringByHash */
int sarrayFindStringByHash(void);

/* Symbol: pixcmapGammaTRC */
/* Demangled: pixcmapGammaTRC */
int pixcmapGammaTRC(void);

/* Symbol: pixColorGrayMaskedCmap */
/* Demangled: pixColorGrayMaskedCmap */
int pixColorGrayMaskedCmap(void);

/* Symbol: pixReadStreamGif */
/* Demangled: pixReadStreamGif */
int pixReadStreamGif(void);

/* Symbol: pixWriteStreamPS */
/* Demangled: pixWriteStreamPS */
int pixWriteStreamPS(void);

/* Symbol: Java_com_googlecode_leptonica_android_Pix_nativeGetSpp */
/* Demangled: Java_com_googlecode_leptonica_android_Pix_nativeGetSpp */
int Java_com_googlecode_leptonica_android_Pix_nativeGetSpp(void);

/* Symbol: sarrayToString */
/* Demangled: sarrayToString */
int sarrayToString(void);

/* Symbol: pixTRCMap */
/* Demangled: pixTRCMap */
int pixTRCMap(void);

/* Symbol: ptaConvertToBoxa */
/* Demangled: ptaConvertToBoxa */
int ptaConvertToBoxa(void);

/* Symbol: pixacompCreate */
/* Demangled: pixacompCreate */
int pixacompCreate(void);

/* Symbol: fileCopy */
/* Demangled: fileCopy */
int fileCopy(void);

/* Symbol: pixScaleGray4xLIDither */
/* Demangled: pixScaleGray4xLIDither */
int pixScaleGray4xLIDither(void);

/* Symbol: pixcmapRead */
/* Demangled: pixcmapRead */
int pixcmapRead(void);

/* Symbol: dewarpaCreate */
/* Demangled: dewarpaCreate */
int dewarpaCreate(void);

/* Symbol: pixSimpleColorQuantize */
/* Demangled: pixSimpleColorQuantize */
int pixSimpleColorQuantize(void);

/* Symbol: pixRemoveUnusedColors */
/* Demangled: pixRemoveUnusedColors */
int pixRemoveUnusedColors(void);

/* Symbol: recogWrite */
/* Demangled: recogWrite */
int recogWrite(void);

/* Symbol: getImpliedFileFormat */
/* Demangled: getImpliedFileFormat */
int getImpliedFileFormat(void);

/* Symbol: pixBackgroundNormRGBArraysMorph */
/* Demangled: pixBackgroundNormRGBArraysMorph */
int pixBackgroundNormRGBArraysMorph(void);

/* Symbol: lept_free */
/* Demangled: lept_free */
int lept_free(void);

/* Symbol: boxaInsertBox */
/* Demangled: boxaInsertBox */
int boxaInsertBox(void);

/* Symbol: l_asetCreate */
/* Demangled: l_asetCreate */
int l_asetCreate(void);

/* Symbol: pixGetRandomPixel */
/* Demangled: pixGetRandomPixel */
int pixGetRandomPixel(void);

/* Symbol: pixaCopy */
/* Demangled: pixaCopy */
int pixaCopy(void);

/* Symbol: boxaGetValidCount */
/* Demangled: boxaGetValidCount */
int boxaGetValidCount(void);

/* Symbol: pixGetAllCCBorders */
/* Demangled: pixGetAllCCBorders */
int pixGetAllCCBorders(void);

/* Symbol: pixThresholdPixelSum */
/* Demangled: pixThresholdPixelSum */
int pixThresholdPixelSum(void);

/* Symbol: numaaCreateFull */
/* Demangled: numaaCreateFull */
int numaaCreateFull(void);

/* Symbol: convertOnBigEnd32 */
/* Demangled: convertOnBigEnd32 */
int convertOnBigEnd32(void);

/* Symbol: ccbCreate */
/* Demangled: ccbCreate */
int ccbCreate(void);

/* Symbol: pixRankHaustest */
/* Demangled: pixRankHaustest */
int pixRankHaustest(void);

/* Symbol: pixWriteStreamPdf */
/* Demangled: pixWriteStreamPdf */
int pixWriteStreamPdf(void);

/* Symbol: pixHShear */
/* Demangled: pixHShear */
int pixHShear(void);

/* Symbol: numaDestroy */
/* Demangled: numaDestroy */
int numaDestroy(void);

/* Symbol: pixScaleBySampling */
/* Demangled: pixScaleBySampling */
int pixScaleBySampling(void);

/* Symbol: pixIntersectionOfMorphOps */
/* Demangled: pixIntersectionOfMorphOps */
int pixIntersectionOfMorphOps(void);

/* Symbol: pixSetAllArbitrary */
/* Demangled: pixSetAllArbitrary */
int pixSetAllArbitrary(void);

/* Symbol: ccbaGetCount */
/* Demangled: ccbaGetCount */
int ccbaGetCount(void);

/* Symbol: dewarpaUseBothArrays */
/* Demangled: dewarpaUseBothArrays */
int dewarpaUseBothArrays(void);

/* Symbol: l_dnaGetRefcount */
/* Demangled: l_dnaGetRefcount */
int l_dnaGetRefcount(void);

/* Symbol: l_asetDestroy */
/* Demangled: l_asetDestroy */
int l_asetDestroy(void);

/* Symbol: pixExtractBoundary */
/* Demangled: pixExtractBoundary */
int pixExtractBoundary(void);

/* Symbol: pixExtractData */
/* Demangled: pixExtractData */
int pixExtractData(void);

/* Symbol: pixcompDetermineFormat */
/* Demangled: pixcompDetermineFormat */
int pixcompDetermineFormat(void);

/* Symbol: convertFlateToPSEmbed */
/* Demangled: convertFlateToPSEmbed */
int convertFlateToPSEmbed(void);

/* Symbol: ptaaJoin */
/* Demangled: ptaaJoin */
int ptaaJoin(void);

/* Symbol: pixVarThresholdToBinary */
/* Demangled: pixVarThresholdToBinary */
int pixVarThresholdToBinary(void);

/* Symbol: boxaGetArea */
/* Demangled: boxaGetArea */
int boxaGetArea(void);

/* Symbol: ptaaAddPt */
/* Demangled: ptaaAddPt */
int ptaaAddPt(void);

/* Symbol: boxCopy */
/* Demangled: boxCopy */
int boxCopy(void);

/* Symbol: convertHSVToRGB */
/* Demangled: convertHSVToRGB */
int convertHSVToRGB(void);

/* Symbol: convertXYZToRGB */
/* Demangled: convertXYZToRGB */
int convertXYZToRGB(void);

/* Symbol: pixConvertRGBToHue */
/* Demangled: pixConvertRGBToHue */
int pixConvertRGBToHue(void);

/* Symbol: pixaccCreate */
/* Demangled: pixaccCreate */
int pixaccCreate(void);

/* Symbol: l_dnaRemoveDupsByAset */
/* Demangled: l_dnaRemoveDupsByAset */
int l_dnaRemoveDupsByAset(void);

/* Symbol: pixFindCornerPixels */
/* Demangled: pixFindCornerPixels */
int pixFindCornerPixels(void);

/* Symbol: pixcmapGetDistanceToColor */
/* Demangled: pixcmapGetDistanceToColor */
int pixcmapGetDistanceToColor(void);

/* Symbol: l_dnaGetDArray */
/* Demangled: l_dnaGetDArray */
int l_dnaGetDArray(void);

/* Symbol: l_asetDelete */
/* Demangled: l_asetDelete */
int l_asetDelete(void);

/* Symbol: getLeptonicaVersion */
/* Demangled: getLeptonicaVersion */
int getLeptonicaVersion(void);

/* Symbol: pixClipBoxToForeground */
/* Demangled: pixClipBoxToForeground */
int pixClipBoxToForeground(void);

/* Symbol: scaleColorAreaMapLow */
/* Demangled: scaleColorAreaMapLow */
int scaleColorAreaMapLow(void);

/* Symbol: pixSetSelectMaskedCmap */
/* Demangled: pixSetSelectMaskedCmap */
int pixSetSelectMaskedCmap(void);

/* Symbol: pixConvertColorToSubpixelRGB */
/* Demangled: pixConvertColorToSubpixelRGB */
int pixConvertColorToSubpixelRGB(void);

/* Symbol: lept_cp */
/* Demangled: lept_cp */
int lept_cp(void);

/* Symbol: ptaaCreate */
/* Demangled: ptaaCreate */
int ptaaCreate(void);

/* Symbol: ptraConcatenatePdf */
/* Demangled: ptraConcatenatePdf */
int ptraConcatenatePdf(void);

/* Symbol: pixConvert32To8 */
/* Demangled: pixConvert32To8 */
int pixConvert32To8(void);

/* Symbol: scaleToGray2Low */
/* Demangled: scaleToGray2Low */
int scaleToGray2Low(void);

/* Symbol: parseStringForNumbers */
/* Demangled: parseStringForNumbers */
int parseStringForNumbers(void);

/* Symbol: pixaGetRenderingDepth */
/* Demangled: pixaGetRenderingDepth */
int pixaGetRenderingDepth(void);

/* Symbol: fileAppendString */
/* Demangled: fileAppendString */
int fileAppendString(void);

/* Symbol: pixGammaTRCMasked */
/* Demangled: pixGammaTRCMasked */
int pixGammaTRCMasked(void);

/* Symbol: pixaaIsFull */
/* Demangled: pixaaIsFull */
int pixaaIsFull(void);

/* Symbol: pixOrientDetectDwa */
/* Demangled: pixOrientDetectDwa */
int pixOrientDetectDwa(void);

/* Symbol: pixCopy */
/* Demangled: pixCopy */
int pixCopy(void);

/* Symbol: pixFewColorsOctcubeQuant1 */
/* Demangled: pixFewColorsOctcubeQuant1 */
int pixFewColorsOctcubeQuant1(void);

/* Symbol: pixacompGetPix */
/* Demangled: pixacompGetPix */
int pixacompGetPix(void);

/* Symbol: pixRenderHashBoxaArb */
/* Demangled: pixRenderHashBoxaArb */
int pixRenderHashBoxaArb(void);

/* Symbol: readHeaderMemJpeg */
/* Demangled: readHeaderMemJpeg */
int readHeaderMemJpeg(void);

/* Symbol: recogAppend */
/* Demangled: recogAppend */
int recogAppend(void);

/* Symbol: boxaaRead */
/* Demangled: boxaaRead */
int boxaaRead(void);

/* Symbol: pixFewColorsOctcubeQuant2 */
/* Demangled: pixFewColorsOctcubeQuant2 */
int pixFewColorsOctcubeQuant2(void);

/* Symbol: pixDisplayMatchedPattern */
/* Demangled: pixDisplayMatchedPattern */
int pixDisplayMatchedPattern(void);

/* Symbol: boxaSelectByArea */
/* Demangled: boxaSelectByArea */
int boxaSelectByArea(void);

/* Symbol: pixHMTDwa_1 */
/* Demangled: pixHMTDwa_1 */
int pixHMTDwa_1(void);

/* Symbol: generatePtaPolyline */
/* Demangled: generatePtaPolyline */
int generatePtaPolyline(void);

/* Symbol: pixaDisplayTiledInColumns */
/* Demangled: pixaDisplayTiledInColumns */
int pixaDisplayTiledInColumns(void);

/* Symbol: recogProcessSingleLabelled */
/* Demangled: recogProcessSingleLabelled */
int recogProcessSingleLabelled(void);

/* Symbol: pixBackgroundNormGrayArray */
/* Demangled: pixBackgroundNormGrayArray */
int pixBackgroundNormGrayArray(void);

/* Symbol: getNumberedPathnamesInDirectory */
/* Demangled: getNumberedPathnamesInDirectory */
int getNumberedPathnamesInDirectory(void);

/* Symbol: pixGetDimensions */
/* Demangled: pixGetDimensions */
int pixGetDimensions(void);

/* Symbol: pixAddSingleTextblock */
/* Demangled: pixAddSingleTextblock */
int pixAddSingleTextblock(void);

/* Symbol: dpixResizeImageData */
/* Demangled: dpixResizeImageData */
int dpixResizeImageData(void);

/* Symbol: generateUncompressedPS */
/* Demangled: generateUncompressedPS */
int generateUncompressedPS(void);

/* Symbol: pixDeskewGeneral */
/* Demangled: pixDeskewGeneral */
int pixDeskewGeneral(void);

/* Symbol: pixRenderRandomCmapPtaa */
/* Demangled: pixRenderRandomCmapPtaa */
int pixRenderRandomCmapPtaa(void);

/* Symbol: selaGetSelnames */
/* Demangled: selaGetSelnames */
int selaGetSelnames(void);

/* Symbol: numaInvert */
/* Demangled: numaInvert */
int numaInvert(void);

/* Symbol: pixCopyText */
/* Demangled: pixCopyText */
int pixCopyText(void);

/* Symbol: pixDisplayLayersRGBA */
/* Demangled: pixDisplayLayersRGBA */
int pixDisplayLayersRGBA(void);

/* Symbol: pixConvertRGBToGray */
/* Demangled: pixConvertRGBToGray */
int pixConvertRGBToGray(void);

/* Symbol: pixSaveTiledWithText */
/* Demangled: pixSaveTiledWithText */
int pixSaveTiledWithText(void);

/* Symbol: pixaConvertToNUpPixa */
/* Demangled: pixaConvertToNUpPixa */
int pixaConvertToNUpPixa(void);

/* Symbol: pixMorphSequence */
/* Demangled: pixMorphSequence */
int pixMorphSequence(void);

/* Symbol: pixTilingPaintTile */
/* Demangled: pixTilingPaintTile */
int pixTilingPaintTile(void);

/* Symbol: dpixGetWpl */
/* Demangled: dpixGetWpl */
int dpixGetWpl(void);

/* Symbol: numaIsSorted */
/* Demangled: numaIsSorted */
int numaIsSorted(void);

/* Symbol: pixMakeMaskFromVal */
/* Demangled: pixMakeMaskFromVal */
int pixMakeMaskFromVal(void);

/* Symbol: boxRotateOrth */
/* Demangled: boxRotateOrth */
int boxRotateOrth(void);

/* Symbol: Java_com_googlecode_leptonica_android_Binarize_nativeOtsuAdaptiveThreshold */
/* Demangled: Java_com_googlecode_leptonica_android_Binarize_nativeOtsuAdaptiveThreshold */
int Java_com_googlecode_leptonica_android_Binarize_nativeOtsuAdaptiveThreshold(void);

/* Symbol: jbClassifyCorrelation */
/* Demangled: jbClassifyCorrelation */
int jbClassifyCorrelation(void);

/* Symbol: numaSelectCrossingThreshold */
/* Demangled: numaSelectCrossingThreshold */
int numaSelectCrossingThreshold(void);

/* Symbol: l_pdfSetDateAndVersion */
/* Demangled: l_pdfSetDateAndVersion */
int l_pdfSetDateAndVersion(void);

/* Symbol: pixPaintBoxa */
/* Demangled: pixPaintBoxa */
int pixPaintBoxa(void);

/* Symbol: sarrayIntersectionByAset */
/* Demangled: sarrayIntersectionByAset */
int sarrayIntersectionByAset(void);

/* Symbol: pixSetStrokeWidth */
/* Demangled: pixSetStrokeWidth */
int pixSetStrokeWidth(void);

/* Symbol: pixScaleGrayMinMax2 */
/* Demangled: pixScaleGrayMinMax2 */
int pixScaleGrayMinMax2(void);

/* Symbol: pixCombineMasked */
/* Demangled: pixCombineMasked */
int pixCombineMasked(void);

/* Symbol: boxaaRemoveBoxa */
/* Demangled: boxaaRemoveBoxa */
int boxaaRemoveBoxa(void);

/* Symbol: pixThresholdToBinary */
/* Demangled: pixThresholdToBinary */
int pixThresholdToBinary(void);

/* Symbol: dewarpReadMem */
/* Demangled: dewarpReadMem */
int dewarpReadMem(void);

/* Symbol: pixRotateAMGrayCorner */
/* Demangled: pixRotateAMGrayCorner */
int pixRotateAMGrayCorner(void);

/* Symbol: l_dnaClone */
/* Demangled: l_dnaClone */
int l_dnaClone(void);

/* Symbol: l_dnaaTruncate */
/* Demangled: l_dnaaTruncate */
int l_dnaaTruncate(void);

/* Symbol: pixVarianceInRect */
/* Demangled: pixVarianceInRect */
int pixVarianceInRect(void);

/* Symbol: bbufferDestroy */
/* Demangled: bbufferDestroy */
int bbufferDestroy(void);

/* Symbol: sarrayGenerateIntegers */
/* Demangled: sarrayGenerateIntegers */
int sarrayGenerateIntegers(void);

/* Symbol: recogTrainUnlabelled */
/* Demangled: recogTrainUnlabelled */
int recogTrainUnlabelled(void);

/* Symbol: numaGetMedian */
/* Demangled: numaGetMedian */
int numaGetMedian(void);

/* Symbol: pixSetBlackOrWhiteBoxa */
/* Demangled: pixSetBlackOrWhiteBoxa */
int pixSetBlackOrWhiteBoxa(void);

/* Symbol: pixSetWpl */
/* Demangled: pixSetWpl */
int pixSetWpl(void);

/* Symbol: Java_com_googlecode_leptonica_android_WriteFile_nativeWriteBitmap */
/* Demangled: Java_com_googlecode_leptonica_android_WriteFile_nativeWriteBitmap */
int Java_com_googlecode_leptonica_android_WriteFile_nativeWriteBitmap(void);

/* Symbol: pixConvertRGBToXYZ */
/* Demangled: pixConvertRGBToXYZ */
int pixConvertRGBToXYZ(void);

/* Symbol: ptaGetPixelsFromPix */
/* Demangled: ptaGetPixelsFromPix */
int ptaGetPixelsFromPix(void);

/* Symbol: kernelCreateFromFile */
/* Demangled: kernelCreateFromFile */
int kernelCreateFromFile(void);

/* Symbol: pixaaReplacePixa */
/* Demangled: pixaaReplacePixa */
int pixaaReplacePixa(void);

/* Symbol: pixExtractBarcodes */
/* Demangled: pixExtractBarcodes */
int pixExtractBarcodes(void);

/* Symbol: fpixaConvertLABToXYZ */
/* Demangled: fpixaConvertLABToXYZ */
int fpixaConvertLABToXYZ(void);

/* Symbol: l_dnaaWriteStream */
/* Demangled: l_dnaaWriteStream */
int l_dnaaWriteStream(void);

/* Symbol: lheapSwapUp */
/* Demangled: lheapSwapUp */
int lheapSwapUp(void);

/* Symbol: jbAccumulateComposites */
/* Demangled: jbAccumulateComposites */
int jbAccumulateComposites(void);

/* Symbol: morphSequenceVerify */
/* Demangled: morphSequenceVerify */
int morphSequenceVerify(void);

/* Symbol: numaMakeHistogramAuto */
/* Demangled: numaMakeHistogramAuto */
int numaMakeHistogramAuto(void);

/* Symbol: recogShowMatch */
/* Demangled: recogShowMatch */
int recogShowMatch(void);

/* Symbol: returnErrorInt */
/* Demangled: returnErrorInt */
int returnErrorInt(void);

/* Symbol: pixaWrite */
/* Demangled: pixaWrite */
int pixaWrite(void);

/* Symbol: l_dnaCreateFromDArray */
/* Demangled: l_dnaCreateFromDArray */
int l_dnaCreateFromDArray(void);

/* Symbol: pixaMorphSequenceByComponent */
/* Demangled: pixaMorphSequenceByComponent */
int pixaMorphSequenceByComponent(void);

/* Symbol: pixOpenCompBrickExtendDwa */
/* Demangled: pixOpenCompBrickExtendDwa */
int pixOpenCompBrickExtendDwa(void);

/* Symbol: pixSeedfillBinaryRestricted */
/* Demangled: pixSeedfillBinaryRestricted */
int pixSeedfillBinaryRestricted(void);

/* Symbol: pixaSelectWithIndicator */
/* Demangled: pixaSelectWithIndicator */
int pixaSelectWithIndicator(void);

/* Symbol: rchaExtract */
/* Demangled: rchaExtract */
int rchaExtract(void);

/* Symbol: pixcmapCreate */
/* Demangled: pixcmapCreate */
int pixcmapCreate(void);

/* Symbol: pixGetRasterData */
/* Demangled: pixGetRasterData */
int pixGetRasterData(void);

/* Symbol: pixConvertToSubpixelRGB */
/* Demangled: pixConvertToSubpixelRGB */
int pixConvertToSubpixelRGB(void);

/* Symbol: l_rbtreePrint */
/* Demangled: l_rbtreePrint */
int l_rbtreePrint(void);

/* Symbol: pixQuadraticVShearSampled */
/* Demangled: pixQuadraticVShearSampled */
int pixQuadraticVShearSampled(void);

/* Symbol: pixBackgroundNormSimple */
/* Demangled: pixBackgroundNormSimple */
int pixBackgroundNormSimple(void);

/* Symbol: l_bootnum_gen1 */
/* Demangled: l_bootnum_gen1 */
int l_bootnum_gen1(void);

/* Symbol: boxaInitFull */
/* Demangled: boxaInitFull */
int boxaInitFull(void);

/* Symbol: boxaPlotSides */
/* Demangled: boxaPlotSides */
int boxaPlotSides(void);

/* Symbol: pixColorSegmentCluster */
/* Demangled: pixColorSegmentCluster */
int pixColorSegmentCluster(void);

/* Symbol: pixConvertRGBToColormap */
/* Demangled: pixConvertRGBToColormap */
int pixConvertRGBToColormap(void);

/* Symbol: Java_com_googlecode_leptonica_android_Pixa_nativeDestroy */
/* Demangled: Java_com_googlecode_leptonica_android_Pixa_nativeDestroy */
int Java_com_googlecode_leptonica_android_Pixa_nativeDestroy(void);

/* Symbol: l_getDataTwoBytes */
/* Demangled: l_getDataTwoBytes */
int l_getDataTwoBytes(void);

/* Symbol: l_bootnum_gen2 */
/* Demangled: l_bootnum_gen2 */
int l_bootnum_gen2(void);

/* Symbol: pixaReadStream */
/* Demangled: pixaReadStream */
int pixaReadStream(void);

/* Symbol: pixWriteStreamAsciiPnm */
/* Demangled: pixWriteStreamAsciiPnm */
int pixWriteStreamAsciiPnm(void);

/* Symbol: pixDisplayWrite */
/* Demangled: pixDisplayWrite */
int pixDisplayWrite(void);

/* Symbol: l_bootnum_gen3 */
/* Demangled: l_bootnum_gen3 */
int l_bootnum_gen3(void);

/* Symbol: selaReadStream */
/* Demangled: selaReadStream */
int selaReadStream(void);

/* Symbol: selDestroy */
/* Demangled: selDestroy */
int selDestroy(void);

/* Symbol: pixAlphaIsOpaque */
/* Demangled: pixAlphaIsOpaque */
int pixAlphaIsOpaque(void);

/* Symbol: pixMultConstantColor */
/* Demangled: pixMultConstantColor */
int pixMultConstantColor(void);

/* Symbol: numaCopyParameters */
/* Demangled: numaCopyParameters */
int numaCopyParameters(void);

/* Symbol: pixBlendGrayAdapt */
/* Demangled: pixBlendGrayAdapt */
int pixBlendGrayAdapt(void);

/* Symbol: pixaIsFull */
/* Demangled: pixaIsFull */
int pixaIsFull(void);

/* Symbol: fpixClone */
/* Demangled: fpixClone */
int fpixClone(void);

/* Symbol: listDestroy */
/* Demangled: listDestroy */
int listDestroy(void);

/* Symbol: numaGetRankBinValues */
/* Demangled: numaGetRankBinValues */
int numaGetRankBinValues(void);

/* Symbol: pixRemoveWithIndicator */
/* Demangled: pixRemoveWithIndicator */
int pixRemoveWithIndicator(void);

/* Symbol: pixVarianceInRectangle */
/* Demangled: pixVarianceInRectangle */
int pixVarianceInRectangle(void);

/* Symbol: pixBlendInRect */
/* Demangled: pixBlendInRect */
int pixBlendInRect(void);

/* Symbol: sarrayCopy */
/* Demangled: sarrayCopy */
int sarrayCopy(void);

/* Symbol: l_dnaFindValByHash */
/* Demangled: l_dnaFindValByHash */
int l_dnaFindValByHash(void);

/* Symbol: pixConvertTo1 */
/* Demangled: pixConvertTo1 */
int pixConvertTo1(void);

/* Symbol: decodeAscii85 */
/* Demangled: decodeAscii85 */
int decodeAscii85(void);

/* Symbol: pixWindowedVarianceOnLine */
/* Demangled: pixWindowedVarianceOnLine */
int pixWindowedVarianceOnLine(void);

/* Symbol: gaussjordan */
/* Demangled: gaussjordan */
int gaussjordan(void);

/* Symbol: sarrayPadToSameSize */
/* Demangled: sarrayPadToSameSize */
int sarrayPadToSameSize(void);

/* Symbol: pixCreateNoInit */
/* Demangled: pixCreateNoInit */
int pixCreateNoInit(void);

/* Symbol: Java_com_googlecode_leptonica_android_GrayQuant_nativePixThresholdToBinary */
/* Demangled: Java_com_googlecode_leptonica_android_GrayQuant_nativePixThresholdToBinary */
int Java_com_googlecode_leptonica_android_GrayQuant_nativePixThresholdToBinary(void);

/* Symbol: l_setDataBit */
/* Demangled: l_setDataBit */
int l_setDataBit(void);

/* Symbol: l_uncompressGrayHistograms */
/* Demangled: l_uncompressGrayHistograms */
int l_uncompressGrayHistograms(void);

/* Symbol: l_dnaIntersectionByHash */
/* Demangled: l_dnaIntersectionByHash */
int l_dnaIntersectionByHash(void);

/* Symbol: pixConvert16To8 */
/* Demangled: pixConvert16To8 */
int pixConvert16To8(void);

/* Symbol: selaGetSel */
/* Demangled: selaGetSel */
int selaGetSel(void);

/* Symbol: l_fileDisplay */
/* Demangled: l_fileDisplay */
int l_fileDisplay(void);

/* Symbol: dewarpaSetCheckColumns */
/* Demangled: dewarpaSetCheckColumns */
int dewarpaSetCheckColumns(void);

/* Symbol: pixColorMorph */
/* Demangled: pixColorMorph */
int pixColorMorph(void);

/* Symbol: pixEqualizeTRC */
/* Demangled: pixEqualizeTRC */
int pixEqualizeTRC(void);

/* Symbol: stringReplaceSubstr */
/* Demangled: stringReplaceSubstr */
int stringReplaceSubstr(void);

/* Symbol: pixWriteWebP */
/* Demangled: pixWriteWebP */
int pixWriteWebP(void);

/* Symbol: pixSelectiveConnCompFill */
/* Demangled: pixSelectiveConnCompFill */
int pixSelectiveConnCompFill(void);

/* Symbol: recogGetClassString */
/* Demangled: recogGetClassString */
int recogGetClassString(void);

/* Symbol: scaleRGBToGray2Low */
/* Demangled: scaleRGBToGray2Low */
int scaleRGBToGray2Low(void);

/* Symbol: selaAddSel */
/* Demangled: selaAddSel */
int selaAddSel(void);

/* Symbol: pixColorGrayCmap */
/* Demangled: pixColorGrayCmap */
int pixColorGrayCmap(void);

/* Symbol: pixOpenBrickDwa */
/* Demangled: pixOpenBrickDwa */
int pixOpenBrickDwa(void);

/* Symbol: scaleBySamplingLow */
/* Demangled: scaleBySamplingLow */
int scaleBySamplingLow(void);

/* Symbol: pixFillHolesToBoundingRect */
/* Demangled: pixFillHolesToBoundingRect */
int pixFillHolesToBoundingRect(void);

/* Symbol: pixConvertTo8 */
/* Demangled: pixConvertTo8 */
int pixConvertTo8(void);

/* Symbol: pixSobelEdgeFilter */
/* Demangled: pixSobelEdgeFilter */
int pixSobelEdgeFilter(void);

/* Symbol: pixBilinearSampled */
/* Demangled: pixBilinearSampled */
int pixBilinearSampled(void);

/* Symbol: pixCountByColumn */
/* Demangled: pixCountByColumn */
int pixCountByColumn(void);

/* Symbol: boxaGetWhiteblocks */
/* Demangled: boxaGetWhiteblocks */
int boxaGetWhiteblocks(void);

/* Symbol: boxaFillSequence */
/* Demangled: boxaFillSequence */
int boxaFillSequence(void);

/* Symbol: boxaModifyWithBoxa */
/* Demangled: boxaModifyWithBoxa */
int boxaModifyWithBoxa(void);

/* Symbol: pixClearPixel */
/* Demangled: pixClearPixel */
int pixClearPixel(void);

/* Symbol: pixRotateShearIP */
/* Demangled: pixRotateShearIP */
int pixRotateShearIP(void);

/* Symbol: l_dnaCopyParameters */
/* Demangled: l_dnaCopyParameters */
int l_dnaCopyParameters(void);

/* Symbol: makeGrayQuantTargetTable */
/* Demangled: makeGrayQuantTargetTable */
int makeGrayQuantTargetTable(void);

/* Symbol: pixCombineMaskedGeneral */
/* Demangled: pixCombineMaskedGeneral */
int pixCombineMaskedGeneral(void);

/* Symbol: pixConvertGrayToSubpixelRGB */
/* Demangled: pixConvertGrayToSubpixelRGB */
int pixConvertGrayToSubpixelRGB(void);

/* Symbol: fpixGetDimensions */
/* Demangled: fpixGetDimensions */
int fpixGetDimensions(void);

/* Symbol: numaaWriteMem */
/* Demangled: numaaWriteMem */
int numaaWriteMem(void);

/* Symbol: numaArithOp */
/* Demangled: numaArithOp */
int numaArithOp(void);

/* Symbol: numaChooseSortType */
/* Demangled: numaChooseSortType */
int numaChooseSortType(void);

/* Symbol: pixGetSortedNeighborValues */
/* Demangled: pixGetSortedNeighborValues */
int pixGetSortedNeighborValues(void);

/* Symbol: pixBlendWithGrayMask */
/* Demangled: pixBlendWithGrayMask */
int pixBlendWithGrayMask(void);

/* Symbol: l_dnaWrite */
/* Demangled: l_dnaWrite */
int l_dnaWrite(void);

/* Symbol: l_rbtreeGetLast */
/* Demangled: l_rbtreeGetLast */
int l_rbtreeGetLast(void);

/* Symbol: selaGetBrickName */
/* Demangled: selaGetBrickName */
int selaGetBrickName(void);

/* Symbol: pixFreeData */
/* Demangled: pixFreeData */
int pixFreeData(void);

/* Symbol: recogaIdentifyPixa */
/* Demangled: recogaIdentifyPixa */
int recogaIdentifyPixa(void);

/* Symbol: Java_com_googlecode_leptonica_android_ReadFile_nativeReadFile */
/* Demangled: Java_com_googlecode_leptonica_android_ReadFile_nativeReadFile */
int Java_com_googlecode_leptonica_android_ReadFile_nativeReadFile(void);

/* Symbol: boxGetCenter */
/* Demangled: boxGetCenter */
int boxGetCenter(void);

/* Symbol: pixConvertRGBToLuminance */
/* Demangled: pixConvertRGBToLuminance */
int pixConvertRGBToLuminance(void);

/* Symbol: generatePtaHashBoxa */
/* Demangled: generatePtaHashBoxa */
int generatePtaHashBoxa(void);

/* Symbol: pixcmapHasColor */
/* Demangled: pixcmapHasColor */
int pixcmapHasColor(void);

/* Symbol: pixRemoveMatchedPattern */
/* Demangled: pixRemoveMatchedPattern */
int pixRemoveMatchedPattern(void);

/* Symbol: pixCloseCompBrickDwa */
/* Demangled: pixCloseCompBrickDwa */
int pixCloseCompBrickDwa(void);

/* Symbol: startTimer */
/* Demangled: startTimer */
int startTimer(void);

/* Symbol: pixBlendMask */
/* Demangled: pixBlendMask */
int pixBlendMask(void);

/* Symbol: fpixaSetPixel */
/* Demangled: fpixaSetPixel */
int fpixaSetPixel(void);

/* Symbol: pixSeedfillGraySimple */
/* Demangled: pixSeedfillGraySimple */
int pixSeedfillGraySimple(void);

/* Symbol: boxaSelectWithIndicator */
/* Demangled: boxaSelectWithIndicator */
int boxaSelectWithIndicator(void);

/* Symbol: pixaCentroids */
/* Demangled: pixaCentroids */
int pixaCentroids(void);

/* Symbol: pixaaJoin */
/* Demangled: pixaaJoin */
int pixaaJoin(void);

/* Symbol: numaaDestroy */
/* Demangled: numaaDestroy */
int numaaDestroy(void);

/* Symbol: l_byteaDestroy */
/* Demangled: l_byteaDestroy */
int l_byteaDestroy(void);

/* Symbol: pixReadMemGif */
/* Demangled: pixReadMemGif */
int pixReadMemGif(void);

/* Symbol: pixFindHorizontalRuns */
/* Demangled: pixFindHorizontalRuns */
int pixFindHorizontalRuns(void);

/* Symbol: pixacompGetBox */
/* Demangled: pixacompGetBox */
int pixacompGetBox(void);

/* Symbol: pixSplitDistributionFgBg */
/* Demangled: pixSplitDistributionFgBg */
int pixSplitDistributionFgBg(void);

/* Symbol: numaSortPair */
/* Demangled: numaSortPair */
int numaSortPair(void);

/* Symbol: sarrayRemoveDupsByHash */
/* Demangled: sarrayRemoveDupsByHash */
int sarrayRemoveDupsByHash(void);

/* Symbol: Java_com_googlecode_leptonica_android_Box_nativeGetHeight */
/* Demangled: Java_com_googlecode_leptonica_android_Box_nativeGetHeight */
int Java_com_googlecode_leptonica_android_Box_nativeGetHeight(void);

/* Symbol: pixAddBorderGeneral */
/* Demangled: pixAddBorderGeneral */
int pixAddBorderGeneral(void);

/* Symbol: pixaCreateFromBoxa */
/* Demangled: pixaCreateFromBoxa */
int pixaCreateFromBoxa(void);

/* Symbol: numaGetFArray */
/* Demangled: numaGetFArray */
int numaGetFArray(void);

/* Symbol: pixCountPixelsInRow */
/* Demangled: pixCountPixelsInRow */
int pixCountPixelsInRow(void);

/* Symbol: numaSetParameters */
/* Demangled: numaSetParameters */
int numaSetParameters(void);

/* Symbol: pixcmapShiftIntensity */
/* Demangled: pixcmapShiftIntensity */
int pixcmapShiftIntensity(void);

/* Symbol: l_dnaaReadStream */
/* Demangled: l_dnaaReadStream */
int l_dnaaReadStream(void);

/* Symbol: numaRemoveBorder */
/* Demangled: numaRemoveBorder */
int numaRemoveBorder(void);

/* Symbol: ptaaWriteStream */
/* Demangled: ptaaWriteStream */
int ptaaWriteStream(void);

/* Symbol: pixUnsharpMasking */
/* Demangled: pixUnsharpMasking */
int pixUnsharpMasking(void);

/* Symbol: readHeaderPng */
/* Demangled: readHeaderPng */
int readHeaderPng(void);

/* Symbol: boxaWriteStream */
/* Demangled: boxaWriteStream */
int boxaWriteStream(void);

/* Symbol: pixTestForSimilarity */
/* Demangled: pixTestForSimilarity */
int pixTestForSimilarity(void);

/* Symbol: numaWriteMem */
/* Demangled: numaWriteMem */
int numaWriteMem(void);

/* Symbol: pixaSelectWithString */
/* Demangled: pixaSelectWithString */
int pixaSelectWithString(void);

/* Symbol: ptaaReplacePta */
/* Demangled: ptaaReplacePta */
int ptaaReplacePta(void);

/* Symbol: pixQuadtreeVariance */
/* Demangled: pixQuadtreeVariance */
int pixQuadtreeVariance(void);

/* Symbol: Java_com_googlecode_leptonica_android_Pix_nativeGetDepth */
/* Demangled: Java_com_googlecode_leptonica_android_Pix_nativeGetDepth */
int Java_com_googlecode_leptonica_android_Pix_nativeGetDepth(void);

/* Symbol: boxaExtractAsNuma */
/* Demangled: boxaExtractAsNuma */
int boxaExtractAsNuma(void);

/* Symbol: Java_com_googlecode_leptonica_android_WriteFile_nativeWriteBytes8 */
/* Demangled: Java_com_googlecode_leptonica_android_WriteFile_nativeWriteBytes8 */
int Java_com_googlecode_leptonica_android_WriteFile_nativeWriteBytes8(void);

/* Symbol: numaaGetCount */
/* Demangled: numaaGetCount */
int numaaGetCount(void);

/* Symbol: pixGetWordBoxesInTextlines */
/* Demangled: pixGetWordBoxesInTextlines */
int pixGetWordBoxesInTextlines(void);

/* Symbol: pixRemoveBorderConnComps */
/* Demangled: pixRemoveBorderConnComps */
int pixRemoveBorderConnComps(void);

/* Symbol: pixRotateAMColor */
/* Demangled: pixRotateAMColor */
int pixRotateAMColor(void);

/* Symbol: makePixelSumTab8 */
/* Demangled: makePixelSumTab8 */
int makePixelSumTab8(void);

/* Symbol: boxaWriteMem */
/* Demangled: boxaWriteMem */
int boxaWriteMem(void);

/* Symbol: arrayFindEachSequence */
/* Demangled: arrayFindEachSequence */
int arrayFindEachSequence(void);

/* Symbol: fpixPrintStream */
/* Demangled: fpixPrintStream */
int fpixPrintStream(void);

/* Symbol: fpixWrite */
/* Demangled: fpixWrite */
int fpixWrite(void);

/* Symbol: pixGetAverageMasked */
/* Demangled: pixGetAverageMasked */
int pixGetAverageMasked(void);

/* Symbol: boxaSelectLargeULBox */
/* Demangled: boxaSelectLargeULBox */
int boxaSelectLargeULBox(void);

/* Symbol: pixaaGetPix */
/* Demangled: pixaaGetPix */
int pixaaGetPix(void);

/* Symbol: readHeaderPnm */
/* Demangled: readHeaderPnm */
int readHeaderPnm(void);

/* Symbol: nbytesInFile */
/* Demangled: nbytesInFile */
int nbytesInFile(void);

/* Symbol: pixInvert */
/* Demangled: pixInvert */
int pixInvert(void);

/* Symbol: pixRemoveBorderGeneral */
/* Demangled: pixRemoveBorderGeneral */
int pixRemoveBorderGeneral(void);

/* Symbol: ptaScale */
/* Demangled: ptaScale */
int ptaScale(void);

/* Symbol: fpixChangeRefcount */
/* Demangled: fpixChangeRefcount */
int fpixChangeRefcount(void);

/* Symbol: recogExtractPixa */
/* Demangled: recogExtractPixa */
int recogExtractPixa(void);

/* Symbol: pixScaleToGrayMipmap */
/* Demangled: pixScaleToGrayMipmap */
int pixScaleToGrayMipmap(void);

/* Symbol: Java_com_googlecode_leptonica_android_Boxa_nativeGetGeometry */
/* Demangled: Java_com_googlecode_leptonica_android_Boxa_nativeGetGeometry */
int Java_com_googlecode_leptonica_android_Boxa_nativeGetGeometry(void);

/* Symbol: pixCountPixelsByRow */
/* Demangled: pixCountPixelsByRow */
int pixCountPixelsByRow(void);

/* Symbol: numaaAddNumber */
/* Demangled: numaaAddNumber */
int numaaAddNumber(void);

/* Symbol: bmfGetStringWidth */
/* Demangled: bmfGetStringWidth */
int bmfGetStringWidth(void);

/* Symbol: pixStretchHorizontalSampled */
/* Demangled: pixStretchHorizontalSampled */
int pixStretchHorizontalSampled(void);

/* Symbol: pixVShearIP */
/* Demangled: pixVShearIP */
int pixVShearIP(void);

/* Symbol: bmfCreate */
/* Demangled: bmfCreate */
int bmfCreate(void);

/* Symbol: fpixGetMax */
/* Demangled: fpixGetMax */
int fpixGetMax(void);

/* Symbol: ptaSelectByValue */
/* Demangled: ptaSelectByValue */
int ptaSelectByValue(void);

/* Symbol: dpixSetResolution */
/* Demangled: dpixSetResolution */
int dpixSetResolution(void);

/* Symbol: selCreateBrick */
/* Demangled: selCreateBrick */
int selCreateBrick(void);

/* Symbol: pixConvertToPdfDataSegmented */
/* Demangled: pixConvertToPdfDataSegmented */
int pixConvertToPdfDataSegmented(void);

/* Symbol: pixaaAddPix */
/* Demangled: pixaaAddPix */
int pixaaAddPix(void);

/* Symbol: boxaTransform */
/* Demangled: boxaTransform */
int boxaTransform(void);

/* Symbol: numaRandomPermutation */
/* Demangled: numaRandomPermutation */
int numaRandomPermutation(void);

/* Symbol: pixNumColors */
/* Demangled: pixNumColors */
int pixNumColors(void);

/* Symbol: pixcmapConvertToHex */
/* Demangled: pixcmapConvertToHex */
int pixcmapConvertToHex(void);

/* Symbol: pixSeedfillBB */
/* Demangled: pixSeedfillBB */
int pixSeedfillBB(void);

/* Symbol: dewarpDestroy */
/* Demangled: dewarpDestroy */
int dewarpDestroy(void);

/* Symbol: lheapPrint */
/* Demangled: lheapPrint */
int lheapPrint(void);

/* Symbol: pixReadJpeg */
/* Demangled: pixReadJpeg */
int pixReadJpeg(void);

/* Symbol: pixaWriteStreamInfo */
/* Demangled: pixaWriteStreamInfo */
int pixaWriteStreamInfo(void);

/* Symbol: boxaGetCoverage */
/* Demangled: boxaGetCoverage */
int boxaGetCoverage(void);

/* Symbol: pixcmapCountGrayColors */
/* Demangled: pixcmapCountGrayColors */
int pixcmapCountGrayColors(void);

/* Symbol: pixFixedOctcubeQuantGenRGB */
/* Demangled: pixFixedOctcubeQuantGenRGB */
int pixFixedOctcubeQuantGenRGB(void);

/* Symbol: fpixAddMirroredBorder */
/* Demangled: fpixAddMirroredBorder */
int fpixAddMirroredBorder(void);

/* Symbol: numaCreate */
/* Demangled: numaCreate */
int numaCreate(void);

/* Symbol: boxaPermuteRandom */
/* Demangled: boxaPermuteRandom */
int boxaPermuteRandom(void);

/* Symbol: pixcmapGetRGBA32 */
/* Demangled: pixcmapGetRGBA32 */
int pixcmapGetRGBA32(void);

/* Symbol: pixGetMaxValueInRect */
/* Demangled: pixGetMaxValueInRect */
int pixGetMaxValueInRect(void);

/* Symbol: pixBestCorrelation */
/* Demangled: pixBestCorrelation */
int pixBestCorrelation(void);

/* Symbol: pixConvert1To8Cmap */
/* Demangled: pixConvert1To8Cmap */
int pixConvert1To8Cmap(void);

/* Symbol: pixLocToColorTransform */
/* Demangled: pixLocToColorTransform */
int pixLocToColorTransform(void);

/* Symbol: generateG4PS */
/* Demangled: generateG4PS */
int generateG4PS(void);

/* Symbol: pixRemoveSeededComponents */
/* Demangled: pixRemoveSeededComponents */
int pixRemoveSeededComponents(void);

/* Symbol: numaGetCount */
/* Demangled: numaGetCount */
int numaGetCount(void);

/* Symbol: ptaReplicatePattern */
/* Demangled: ptaReplicatePattern */
int ptaReplicatePattern(void);

/* Symbol: isPngInterlaced */
/* Demangled: isPngInterlaced */
int isPngInterlaced(void);

/* Symbol: pixMirroredTiling */
/* Demangled: pixMirroredTiling */
int pixMirroredTiling(void);

/* Symbol: pmsGetLevelForAlloc */
/* Demangled: pmsGetLevelForAlloc */
int pmsGetLevelForAlloc(void);

/* Symbol: recogShowMatchesInRange */
/* Demangled: recogShowMatchesInRange */
int recogShowMatchesInRange(void);

/* Symbol: pixRotateShearCenter */
/* Demangled: pixRotateShearCenter */
int pixRotateShearCenter(void);

/* Symbol: pixZero */
/* Demangled: pixZero */
int pixZero(void);

/* Symbol: lstackAdd */
/* Demangled: lstackAdd */
int lstackAdd(void);

/* Symbol: pixBlockconvGrayUnnormalized */
/* Demangled: pixBlockconvGrayUnnormalized */
int pixBlockconvGrayUnnormalized(void);

/* Symbol: l_asetFind */
/* Demangled: l_asetFind */
int l_asetFind(void);

/* Symbol: create2dFloatArray */
/* Demangled: create2dFloatArray */
int create2dFloatArray(void);

/* Symbol: selaAddDwaLinear */
/* Demangled: selaAddDwaLinear */
int selaAddDwaLinear(void);

/* Symbol: jbCorrelationInit */
/* Demangled: jbCorrelationInit */
int jbCorrelationInit(void);

/* Symbol: l_dnaaGetNumberCount */
/* Demangled: l_dnaaGetNumberCount */
int l_dnaaGetNumberCount(void);

/* Symbol: pixaSelectByPerimToAreaRatio */
/* Demangled: pixaSelectByPerimToAreaRatio */
int pixaSelectByPerimToAreaRatio(void);

/* Symbol: pixaReadMultipageTiff */
/* Demangled: pixaReadMultipageTiff */
int pixaReadMultipageTiff(void);

/* Symbol: l_byteaAppendData */
/* Demangled: l_byteaAppendData */
int l_byteaAppendData(void);

/* Symbol: numaWriteStream */
/* Demangled: numaWriteStream */
int numaWriteStream(void);

/* Symbol: pixaConvertToPdf */
/* Demangled: pixaConvertToPdf */
int pixaConvertToPdf(void);

/* Symbol: dewarpPopulateFullRes */
/* Demangled: dewarpPopulateFullRes */
int dewarpPopulateFullRes(void);

/* Symbol: ptaGetQuadraticLSF */
/* Demangled: ptaGetQuadraticLSF */
int ptaGetQuadraticLSF(void);

/* Symbol: Java_com_googlecode_leptonica_android_Pixa_nativeGetPix */
/* Demangled: Java_com_googlecode_leptonica_android_Pixa_nativeGetPix */
int Java_com_googlecode_leptonica_android_Pixa_nativeGetPix(void);

/* Symbol: sela4and8ccThin */
/* Demangled: sela4and8ccThin */
int sela4and8ccThin(void);

/* Symbol: pixConvert1To4Cmap */
/* Demangled: pixConvert1To4Cmap */
int pixConvert1To4Cmap(void);

/* Symbol: pixFlipFHMTGen */
/* Demangled: pixFlipFHMTGen */
int pixFlipFHMTGen(void);

/* Symbol: modifyTrailingSlash */
/* Demangled: modifyTrailingSlash */
int modifyTrailingSlash(void);

/* Symbol: selGetName */
/* Demangled: selGetName */
int selGetName(void);

/* Symbol: pixRasteropIP */
/* Demangled: pixRasteropIP */
int pixRasteropIP(void);

/* Symbol: pixThresholdByConnComp */
/* Demangled: pixThresholdByConnComp */
int pixThresholdByConnComp(void);

/* Symbol: jbAddPageComponents */
/* Demangled: jbAddPageComponents */
int jbAddPageComponents(void);

/* Symbol: sarrayReadStream */
/* Demangled: sarrayReadStream */
int sarrayReadStream(void);

/* Symbol: seedfillGrayInvLowSimple */
/* Demangled: seedfillGrayInvLowSimple */
int seedfillGrayInvLowSimple(void);

/* Symbol: numaGetIArray */
/* Demangled: numaGetIArray */
int numaGetIArray(void);

/* Symbol: l_dnaaAddNumber */
/* Demangled: l_dnaaAddNumber */
int l_dnaaAddNumber(void);

/* Symbol: pixAverageByColumn */
/* Demangled: pixAverageByColumn */
int pixAverageByColumn(void);

/* Symbol: recogaWriteMem */
/* Demangled: recogaWriteMem */
int recogaWriteMem(void);

/* Symbol: Java_com_googlecode_leptonica_android_Pixa_nativeAddPix */
/* Demangled: Java_com_googlecode_leptonica_android_Pixa_nativeAddPix */
int Java_com_googlecode_leptonica_android_Pixa_nativeAddPix(void);

/* Symbol: makeRangeKernel */
/* Demangled: makeRangeKernel */
int makeRangeKernel(void);

/* Symbol: boxaaWrite */
/* Demangled: boxaaWrite */
int boxaaWrite(void);

/* Symbol: reformatPacked64 */
/* Demangled: reformatPacked64 */
int reformatPacked64(void);

/* Symbol: ptraInsert */
/* Demangled: ptraInsert */
int ptraInsert(void);

/* Symbol: ptaDestroy */
/* Demangled: ptaDestroy */
int ptaDestroy(void);

/* Symbol: boxaSmoothSequenceMedian */
/* Demangled: boxaSmoothSequenceMedian */
int boxaSmoothSequenceMedian(void);

/* Symbol: pixModifySaturation */
/* Demangled: pixModifySaturation */
int pixModifySaturation(void);

/* Symbol: pixReduceRankBinaryCascade */
/* Demangled: pixReduceRankBinaryCascade */
int pixReduceRankBinaryCascade(void);

/* Symbol: l_generateJpegData */
/* Demangled: l_generateJpegData */
int l_generateJpegData(void);

/* Symbol: pixacompWriteStreamInfo */
/* Demangled: pixacompWriteStreamInfo */
int pixacompWriteStreamInfo(void);

/* Symbol: pixReadFromMultipageTiff */
/* Demangled: pixReadFromMultipageTiff */
int pixReadFromMultipageTiff(void);

/* Symbol: pixcmapCreateLinear */
/* Demangled: pixcmapCreateLinear */
int pixcmapCreateLinear(void);

/* Symbol: pixWindowedStats */
/* Demangled: pixWindowedStats */
int pixWindowedStats(void);

/* Symbol: makeOrientDecision */
/* Demangled: makeOrientDecision */
int makeOrientDecision(void);

/* Symbol: numaClose */
/* Demangled: numaClose */
int numaClose(void);

/* Symbol: pixSetBorderRingVal */
/* Demangled: pixSetBorderRingVal */
int pixSetBorderRingVal(void);

/* Symbol: pixFindBaselines */
/* Demangled: pixFindBaselines */
int pixFindBaselines(void);

/* Symbol: pixCountArbInRect */
/* Demangled: pixCountArbInRect */
int pixCountArbInRect(void);

/* Symbol: pixMakeRangeMaskSV */
/* Demangled: pixMakeRangeMaskSV */
int pixMakeRangeMaskSV(void);

/* Symbol: ptraGetMaxIndex */
/* Demangled: ptraGetMaxIndex */
int ptraGetMaxIndex(void);

/* Symbol: pixcompCreateFromString */
/* Demangled: pixcompCreateFromString */
int pixcompCreateFromString(void);

/* Symbol: findNextBorderPixel */
/* Demangled: findNextBorderPixel */
int findNextBorderPixel(void);

/* Symbol: dewarpaModelStats */
/* Demangled: dewarpaModelStats */
int dewarpaModelStats(void);

/* Symbol: numaCreateFromFArray */
/* Demangled: numaCreateFromFArray */
int numaCreateFromFArray(void);

/* Symbol: l_byteaGetSize */
/* Demangled: l_byteaGetSize */
int l_byteaGetSize(void);

/* Symbol: pixErodeGray */
/* Demangled: pixErodeGray */
int pixErodeGray(void);

/* Symbol: fpixSetData */
/* Demangled: fpixSetData */
int fpixSetData(void);

/* Symbol: thresholdToBinaryLineLow */
/* Demangled: thresholdToBinaryLineLow */
int thresholdToBinaryLineLow(void);

/* Symbol: pixRotateAMCorner */
/* Demangled: pixRotateAMCorner */
int pixRotateAMCorner(void);

/* Symbol: pixFlipLR */
/* Demangled: pixFlipLR */
int pixFlipLR(void);

/* Symbol: dewarpaSetValidModels */
/* Demangled: dewarpaSetValidModels */
int dewarpaSetValidModels(void);

/* Symbol: pixAffinePta */
/* Demangled: pixAffinePta */
int pixAffinePta(void);

/* Symbol: pixBlendBoxaRandom */
/* Demangled: pixBlendBoxaRandom */
int pixBlendBoxaRandom(void);

/* Symbol: dpixReadStream */
/* Demangled: dpixReadStream */
int dpixReadStream(void);

/* Symbol: numaRead */
/* Demangled: numaRead */
int numaRead(void);

/* Symbol: extractRGBAValues */
/* Demangled: extractRGBAValues */
int extractRGBAValues(void);

/* Symbol: recogIdentifyPix */
/* Demangled: recogIdentifyPix */
int recogIdentifyPix(void);

/* Symbol: regTestCompareStrings */
/* Demangled: regTestCompareStrings */
int regTestCompareStrings(void);

/* Symbol: regTestWritePixAndCheck */
/* Demangled: regTestWritePixAndCheck */
int regTestWritePixAndCheck(void);

/* Symbol: pixAddBorder */
/* Demangled: pixAddBorder */
int pixAddBorder(void);

/* Symbol: boxaSort2d */
/* Demangled: boxaSort2d */
int boxaSort2d(void);

/* Symbol: dewarpShowResults */
/* Demangled: dewarpShowResults */
int dewarpShowResults(void);

/* Symbol: pixaGetPix */
/* Demangled: pixaGetPix */
int pixaGetPix(void);

/* Symbol: ptraaGetPtra */
/* Demangled: ptraaGetPtra */
int ptraaGetPtra(void);

/* Symbol: recogMakeBootDigitRecog */
/* Demangled: recogMakeBootDigitRecog */
int recogMakeBootDigitRecog(void);

/* Symbol: boxaRead */
/* Demangled: boxaRead */
int boxaRead(void);

/* Symbol: recogaGetCount */
/* Demangled: recogaGetCount */
int recogaGetCount(void);

/* Symbol: l_dnaHashCreateFromSarray */
/* Demangled: l_dnaHashCreateFromSarray */
int l_dnaHashCreateFromSarray(void);

/* Symbol: pixFindStrokeWidth */
/* Demangled: pixFindStrokeWidth */
int pixFindStrokeWidth(void);

/* Symbol: pixModifyHue */
/* Demangled: pixModifyHue */
int pixModifyHue(void);

/* Symbol: pixOrientDetect */
/* Demangled: pixOrientDetect */
int pixOrientDetect(void);

/* Symbol: pixUpDownDetectDwa */
/* Demangled: pixUpDownDetectDwa */
int pixUpDownDetectDwa(void);

/* Symbol: pixCopyDimensions */
/* Demangled: pixCopyDimensions */
int pixCopyDimensions(void);

/* Symbol: pixaAddPix */
/* Demangled: pixaAddPix */
int pixaAddPix(void);

/* Symbol: barcodeDispatchDecoder */
/* Demangled: barcodeDispatchDecoder */
int barcodeDispatchDecoder(void);

/* Symbol: pixPaintBoxaRandom */
/* Demangled: pixPaintBoxaRandom */
int pixPaintBoxaRandom(void);

/* Symbol: dewarpRemoveShortLines */
/* Demangled: dewarpRemoveShortLines */
int dewarpRemoveShortLines(void);

/* Symbol: fpixaDestroy */
/* Demangled: fpixaDestroy */
int fpixaDestroy(void);

/* Symbol: jbGetLLCorners */
/* Demangled: jbGetLLCorners */
int jbGetLLCorners(void);

/* Symbol: numaGetEdgeValues */
/* Demangled: numaGetEdgeValues */
int numaGetEdgeValues(void);

/* Symbol: pixConvertTo1BySampling */
/* Demangled: pixConvertTo1BySampling */
int pixConvertTo1BySampling(void);

/* Symbol: sreadHeaderSpix */
/* Demangled: sreadHeaderSpix */
int sreadHeaderSpix(void);

/* Symbol: rotateAMGrayLow */
/* Demangled: rotateAMGrayLow */
int rotateAMGrayLow(void);

/* Symbol: linearInterpolatePixelColor */
/* Demangled: linearInterpolatePixelColor */
int linearInterpolatePixelColor(void);

/* Symbol: pixRenderBoxArb */
/* Demangled: pixRenderBoxArb */
int pixRenderBoxArb(void);

/* Symbol: ptaaSortByIndex */
/* Demangled: ptaaSortByIndex */
int ptaaSortByIndex(void);

/* Symbol: dpixChangeRefcount */
/* Demangled: dpixChangeRefcount */
int dpixChangeRefcount(void);

/* Symbol: selGetTypeAtOrigin */
/* Demangled: selGetTypeAtOrigin */
int selGetTypeAtOrigin(void);

/* Symbol: l_getDataBit */
/* Demangled: l_getDataBit */
int l_getDataBit(void);

/* Symbol: dewarpaListPages */
/* Demangled: dewarpaListPages */
int dewarpaListPages(void);

/* Symbol: boxaSortByIndex */
/* Demangled: boxaSortByIndex */
int boxaSortByIndex(void);

/* Symbol: pixSelectByPerimSizeRatio */
/* Demangled: pixSelectByPerimSizeRatio */
int pixSelectByPerimSizeRatio(void);

/* Symbol: regTestSetup */
/* Demangled: regTestSetup */
int regTestSetup(void);

/* Symbol: pixGetHeight */
/* Demangled: pixGetHeight */
int pixGetHeight(void);

/* Symbol: pixAffineSampled */
/* Demangled: pixAffineSampled */
int pixAffineSampled(void);

/* Symbol: pixReadStreamJp2k */
/* Demangled: pixReadStreamJp2k */
int pixReadStreamJp2k(void);

/* Symbol: pixaaDisplayByPixa */
/* Demangled: pixaaDisplayByPixa */
int pixaaDisplayByPixa(void);

/* Symbol: convertSepCharsInPath */
/* Demangled: convertSepCharsInPath */
int convertSepCharsInPath(void);

/* Symbol: pixWriteStreamWebP */
/* Demangled: pixWriteStreamWebP */
int pixWriteStreamWebP(void);

/* Symbol: pixCreateRGBImage */
/* Demangled: pixCreateRGBImage */
int pixCreateRGBImage(void);

/* Symbol: pixcmapUsableColor */
/* Demangled: pixcmapUsableColor */
int pixcmapUsableColor(void);

/* Symbol: dewarpaGetDewarp */
/* Demangled: dewarpaGetDewarp */
int dewarpaGetDewarp(void);

/* Symbol: pixMirrorDetect */
/* Demangled: pixMirrorDetect */
int pixMirrorDetect(void);

/* Symbol: pixFindPerimSizeRatio */
/* Demangled: pixFindPerimSizeRatio */
int pixFindPerimSizeRatio(void);

/* Symbol: pixVShearCenter */
/* Demangled: pixVShearCenter */
int pixVShearCenter(void);

/* Symbol: l_byteaSplit */
/* Demangled: l_byteaSplit */
int l_byteaSplit(void);

/* Symbol: lstackDestroy */
/* Demangled: lstackDestroy */
int lstackDestroy(void);

/* Symbol: pixReadMemJpeg */
/* Demangled: pixReadMemJpeg */
int pixReadMemJpeg(void);

/* Symbol: pixBackgroundNorm */
/* Demangled: pixBackgroundNorm */
int pixBackgroundNorm(void);

/* Symbol: ptaaGetCount */
/* Demangled: ptaaGetCount */
int ptaaGetCount(void);

/* Symbol: pixMorphDwa_1 */
/* Demangled: pixMorphDwa_1 */
int pixMorphDwa_1(void);

/* Symbol: freadHeaderJpeg */
/* Demangled: freadHeaderJpeg */
int freadHeaderJpeg(void);

/* Symbol: readHeaderJpeg */
/* Demangled: readHeaderJpeg */
int readHeaderJpeg(void);

/* Symbol: pixSplitIntoCharacters */
/* Demangled: pixSplitIntoCharacters */
int pixSplitIntoCharacters(void);

/* Symbol: pixMorphDwa_2 */
/* Demangled: pixMorphDwa_2 */
int pixMorphDwa_2(void);

/* Symbol: pixaaSizeRange */
/* Demangled: pixaaSizeRange */
int pixaaSizeRange(void);

/* Symbol: pixWriteSegmentedPageToPS */
/* Demangled: pixWriteSegmentedPageToPS */
int pixWriteSegmentedPageToPS(void);

/* Symbol: pixSetYRes */
/* Demangled: pixSetYRes */
int pixSetYRes(void);

/* Symbol: encodeAscii85 */
/* Demangled: encodeAscii85 */
int encodeAscii85(void);

/* Symbol: pixaSetBoxa */
/* Demangled: pixaSetBoxa */
int pixaSetBoxa(void);

/* Symbol: convertFilesToPS */
/* Demangled: convertFilesToPS */
int convertFilesToPS(void);

/* Symbol: recogaWrite */
/* Demangled: recogaWrite */
int recogaWrite(void);

/* Symbol: pixMakeHistoHS */
/* Demangled: pixMakeHistoHS */
int pixMakeHistoHS(void);

/* Symbol: pixEstimateBackground */
/* Demangled: pixEstimateBackground */
int pixEstimateBackground(void);

/* Symbol: convertRGBToLAB */
/* Demangled: convertRGBToLAB */
int convertRGBToLAB(void);

/* Symbol: kernelReadStream */
/* Demangled: kernelReadStream */
int kernelReadStream(void);

/* Symbol: pixAddContinuedBorder */
/* Demangled: pixAddContinuedBorder */
int pixAddContinuedBorder(void);

/* Symbol: pixRankFilter */
/* Demangled: pixRankFilter */
int pixRankFilter(void);

/* Symbol: Java_com_googlecode_leptonica_android_Pixa_nativeMergeAndReplacePix */
/* Demangled: Java_com_googlecode_leptonica_android_Pixa_nativeMergeAndReplacePix */
int Java_com_googlecode_leptonica_android_Pixa_nativeMergeAndReplacePix(void);

/* Symbol: boxaaGetBox */
/* Demangled: boxaaGetBox */
int boxaaGetBox(void);

/* Symbol: pixMakeHistoHV */
/* Demangled: pixMakeHistoHV */
int pixMakeHistoHV(void);

/* Symbol: dpixSetWpl */
/* Demangled: dpixSetWpl */
int dpixSetWpl(void);

/* Symbol: numaUniformSampling */
/* Demangled: numaUniformSampling */
int numaUniformSampling(void);

/* Symbol: recogProcessMultLabelled */
/* Demangled: recogProcessMultLabelled */
int recogProcessMultLabelled(void);

/* Symbol: boxRelocateOneSide */
/* Demangled: boxRelocateOneSide */
int boxRelocateOneSide(void);

/* Symbol: l_dnaUnionByAset */
/* Demangled: l_dnaUnionByAset */
int l_dnaUnionByAset(void);

/* Symbol: numaCreateFromIArray */
/* Demangled: numaCreateFromIArray */
int numaCreateFromIArray(void);

/* Symbol: pixAddGray */
/* Demangled: pixAddGray */
int pixAddGray(void);

/* Symbol: pixacompGetPixcomp */
/* Demangled: pixacompGetPixcomp */
int pixacompGetPixcomp(void);

/* Symbol: numaaCreate */
/* Demangled: numaaCreate */
int numaaCreate(void);

/* Symbol: pixModifyBrightness */
/* Demangled: pixModifyBrightness */
int pixModifyBrightness(void);

/* Symbol: pixRotateAMColorCorner */
/* Demangled: pixRotateAMColorCorner */
int pixRotateAMColorCorner(void);

/* Symbol: getFilenamesInDirectory */
/* Demangled: getFilenamesInDirectory */
int getFilenamesInDirectory(void);

/* Symbol: Java_com_googlecode_leptonica_android_Box_nativeGetGeometry */
/* Demangled: Java_com_googlecode_leptonica_android_Box_nativeGetGeometry */
int Java_com_googlecode_leptonica_android_Box_nativeGetGeometry(void);

/* Symbol: pixRasterop */
/* Demangled: pixRasterop */
int pixRasterop(void);

/* Symbol: pixaReplacePix */
/* Demangled: pixaReplacePix */
int pixaReplacePix(void);

/* Symbol: bmfDestroy */
/* Demangled: bmfDestroy */
int bmfDestroy(void);

/* Symbol: boxaaAddBox */
/* Demangled: boxaaAddBox */
int boxaaAddBox(void);

/* Symbol: pixShiftByComponent */
/* Demangled: pixShiftByComponent */
int pixShiftByComponent(void);

/* Symbol: pixGetBlackOrWhiteVal */
/* Demangled: pixGetBlackOrWhiteVal */
int pixGetBlackOrWhiteVal(void);

/* Symbol: pixaaAddBox */
/* Demangled: pixaaAddBox */
int pixaaAddBox(void);

/* Symbol: ptraReverse */
/* Demangled: ptraReverse */
int ptraReverse(void);

/* Symbol: pixaRead */
/* Demangled: pixaRead */
int pixaRead(void);

/* Symbol: pixCorrelationScoreShifted */
/* Demangled: pixCorrelationScoreShifted */
int pixCorrelationScoreShifted(void);

/* Symbol: pixaChangeRefcount */
/* Demangled: pixaChangeRefcount */
int pixaChangeRefcount(void);

/* Symbol: generateJpegPS */
/* Demangled: generateJpegPS */
int generateJpegPS(void);

/* Symbol: recogDestroy */
/* Demangled: recogDestroy */
int recogDestroy(void);

/* Symbol: pixSetPixel */
/* Demangled: pixSetPixel */
int pixSetPixel(void);

/* Symbol: boxaWrite */
/* Demangled: boxaWrite */
int boxaWrite(void);

/* Symbol: selCopy */
/* Demangled: selCopy */
int selCopy(void);

/* Symbol: pixErodeBrickDwa */
/* Demangled: pixErodeBrickDwa */
int pixErodeBrickDwa(void);

/* Symbol: addColorizedGrayToCmap */
/* Demangled: addColorizedGrayToCmap */
int addColorizedGrayToCmap(void);

/* Symbol: pixConnCompAreaTransform */
/* Demangled: pixConnCompAreaTransform */
int pixConnCompAreaTransform(void);

/* Symbol: scaleAreaMapLow2 */
/* Demangled: scaleAreaMapLow2 */
int scaleAreaMapLow2(void);

/* Symbol: numaSortByIndex */
/* Demangled: numaSortByIndex */
int numaSortByIndex(void);

/* Symbol: kernelWrite */
/* Demangled: kernelWrite */
int kernelWrite(void);

/* Symbol: pixaScaleToSize */
/* Demangled: pixaScaleToSize */
int pixaScaleToSize(void);

/* Symbol: pixScaleToGray16 */
/* Demangled: pixScaleToGray16 */
int pixScaleToGray16(void);

/* Symbol: l_setDataQbit */
/* Demangled: l_setDataQbit */
int l_setDataQbit(void);

/* Symbol: pixCompareBinary */
/* Demangled: pixCompareBinary */
int pixCompareBinary(void);

/* Symbol: gplotGenCommandFile */
/* Demangled: gplotGenCommandFile */
int gplotGenCommandFile(void);

/* Symbol: pixWriteMixedToPS */
/* Demangled: pixWriteMixedToPS */
int pixWriteMixedToPS(void);

/* Symbol: kernelCreateFromPix */
/* Demangled: kernelCreateFromPix */
int kernelCreateFromPix(void);

/* Symbol: pixForegroundFraction */
/* Demangled: pixForegroundFraction */
int pixForegroundFraction(void);

/* Symbol: regTestCheckFile */
/* Demangled: regTestCheckFile */
int regTestCheckFile(void);

/* Symbol: pixGetRankValueMasked */
/* Demangled: pixGetRankValueMasked */
int pixGetRankValueMasked(void);

/* Symbol: numaGetRankValue */
/* Demangled: numaGetRankValue */
int numaGetRankValue(void);

/* Symbol: pixcmapConvertRGBToHSV */
/* Demangled: pixcmapConvertRGBToHSV */
int pixcmapConvertRGBToHSV(void);

/* Symbol: pixaScale */
/* Demangled: pixaScale */
int pixaScale(void);

/* Symbol: boxaAffineTransform */
/* Demangled: boxaAffineTransform */
int boxaAffineTransform(void);

/* Symbol: pixSetMaskedCmap */
/* Demangled: pixSetMaskedCmap */
int pixSetMaskedCmap(void);

/* Symbol: stringJoin */
/* Demangled: stringJoin */
int stringJoin(void);

/* Symbol: l_hashPtToUint64 */
/* Demangled: l_hashPtToUint64 */
int l_hashPtToUint64(void);

/* Symbol: pixCreate */
/* Demangled: pixCreate */
int pixCreate(void);

/* Symbol: Java_com_googlecode_leptonica_android_Pixa_nativeGetBox */
/* Demangled: Java_com_googlecode_leptonica_android_Pixa_nativeGetBox */
int Java_com_googlecode_leptonica_android_Pixa_nativeGetBox(void);

/* Symbol: pixCloseSafeBrick */
/* Demangled: pixCloseSafeBrick */
int pixCloseSafeBrick(void);

/* Symbol: boxaRemoveBoxAndSave */
/* Demangled: boxaRemoveBoxAndSave */
int boxaRemoveBoxAndSave(void);

/* Symbol: pixRotate90 */
/* Demangled: pixRotate90 */
int pixRotate90(void);

/* Symbol: sarrayClear */
/* Demangled: sarrayClear */
int sarrayClear(void);

/* Symbol: l_hashStringToUint64 */
/* Demangled: l_hashStringToUint64 */
int l_hashStringToUint64(void);

/* Symbol: pixFindDifferentialSquareSum */
/* Demangled: pixFindDifferentialSquareSum */
int pixFindDifferentialSquareSum(void);

/* Symbol: pixCloseSafeCompBrick */
/* Demangled: pixCloseSafeCompBrick */
int pixCloseSafeCompBrick(void);

/* Symbol: pixConvertRGBToGraySatBoost */
/* Demangled: pixConvertRGBToGraySatBoost */
int pixConvertRGBToGraySatBoost(void);

/* Symbol: dpixWriteMem */
/* Demangled: dpixWriteMem */
int dpixWriteMem(void);

/* Symbol: recogaShowContent */
/* Demangled: recogaShowContent */
int recogaShowContent(void);

/* Symbol: Java_com_googlecode_leptonica_android_Pixa_nativeAddBox */
/* Demangled: Java_com_googlecode_leptonica_android_Pixa_nativeAddBox */
int Java_com_googlecode_leptonica_android_Pixa_nativeAddBox(void);

/* Symbol: pixBilinearGray */
/* Demangled: pixBilinearGray */
int pixBilinearGray(void);

/* Symbol: pixRenderLineBlend */
/* Demangled: pixRenderLineBlend */
int pixRenderLineBlend(void);

/* Symbol: strtokSafe */
/* Demangled: strtokSafe */
int strtokSafe(void);

/* Symbol: pixRead */
/* Demangled: pixRead */
int pixRead(void);

/* Symbol: pixFinalAccumulate */
/* Demangled: pixFinalAccumulate */
int pixFinalAccumulate(void);

/* Symbol: pixClipToForeground */
/* Demangled: pixClipToForeground */
int pixClipToForeground(void);

/* Symbol: pixAverageInRect */
/* Demangled: pixAverageInRect */
int pixAverageInRect(void);

/* Symbol: pixacompConvertToPdf */
/* Demangled: pixacompConvertToPdf */
int pixacompConvertToPdf(void);

/* Symbol: convertG4ToPSString */
/* Demangled: convertG4ToPSString */
int convertG4ToPSString(void);

/* Symbol: fnbytesInFile */
/* Demangled: fnbytesInFile */
int fnbytesInFile(void);

/* Symbol: pixaaClear */
/* Demangled: pixaaClear */
int pixaaClear(void);

/* Symbol: pixWriteMemJpeg */
/* Demangled: pixWriteMemJpeg */
int pixWriteMemJpeg(void);

/* Symbol: recogMakeDecodingArrays */
/* Demangled: recogMakeDecodingArrays */
int recogMakeDecodingArrays(void);

/* Symbol: lqueueGetCount */
/* Demangled: lqueueGetCount */
int lqueueGetCount(void);

/* Symbol: boxaExtendArray */
/* Demangled: boxaExtendArray */
int boxaExtendArray(void);

/* Symbol: convertXYZToLAB */
/* Demangled: convertXYZToLAB */
int convertXYZToLAB(void);

/* Symbol: l_dnaaWrite */
/* Demangled: l_dnaaWrite */
int l_dnaaWrite(void);

/* Symbol: recogCorrelationBestChar */
/* Demangled: recogCorrelationBestChar */
int recogCorrelationBestChar(void);

/* Symbol: Java_com_googlecode_leptonica_android_Convert_nativeConvertTo8 */
/* Demangled: Java_com_googlecode_leptonica_android_Convert_nativeConvertTo8 */
int Java_com_googlecode_leptonica_android_Convert_nativeConvertTo8(void);

/* Symbol: gplotSetScaling */
/* Demangled: gplotSetScaling */
int gplotSetScaling(void);

/* Symbol: ditherTo2bppLow */
/* Demangled: ditherTo2bppLow */
int ditherTo2bppLow(void);

/* Symbol: l_asetGetPrev */
/* Demangled: l_asetGetPrev */
int l_asetGetPrev(void);

/* Symbol: pixRenderLineArb */
/* Demangled: pixRenderLineArb */
int pixRenderLineArb(void);

/* Symbol: fpixAddMultConstant */
/* Demangled: fpixAddMultConstant */
int fpixAddMultConstant(void);

/* Symbol: dewarpaWriteMem */
/* Demangled: dewarpaWriteMem */
int dewarpaWriteMem(void);

/* Symbol: pixGetAverageMaskedRGB */
/* Demangled: pixGetAverageMaskedRGB */
int pixGetAverageMaskedRGB(void);

/* Symbol: pixaWriteMem */
/* Demangled: pixaWriteMem */
int pixaWriteMem(void);

/* Symbol: composeRGBPixel */
/* Demangled: composeRGBPixel */
int composeRGBPixel(void);

/* Symbol: dewarpaStripRefModels */
/* Demangled: dewarpaStripRefModels */
int dewarpaStripRefModels(void);

/* Symbol: distanceFunctionLow */
/* Demangled: distanceFunctionLow */
int distanceFunctionLow(void);

/* Symbol: seedfillBinaryLow */
/* Demangled: seedfillBinaryLow */
int seedfillBinaryLow(void);

/* Symbol: pixaThinConnected */
/* Demangled: pixaThinConnected */
int pixaThinConnected(void);

/* Symbol: pixGetRGBLine */
/* Demangled: pixGetRGBLine */
int pixGetRGBLine(void);

/* Symbol: pixEqualWithCmap */
/* Demangled: pixEqualWithCmap */
int pixEqualWithCmap(void);

/* Symbol: ptaCreateFromNuma */
/* Demangled: ptaCreateFromNuma */
int ptaCreateFromNuma(void);

/* Symbol: l_dnaaGetValue */
/* Demangled: l_dnaaGetValue */
int l_dnaaGetValue(void);

/* Symbol: numaGetMode */
/* Demangled: numaGetMode */
int numaGetMode(void);

/* Symbol: pixaGetBox */
/* Demangled: pixaGetBox */
int pixaGetBox(void);

/* Symbol: l_dnaSetValue */
/* Demangled: l_dnaSetValue */
int l_dnaSetValue(void);

/* Symbol: pixFindThreshFgExtent */
/* Demangled: pixFindThreshFgExtent */
int pixFindThreshFgExtent(void);

/* Symbol: boxaMakeAreaIndicator */
/* Demangled: boxaMakeAreaIndicator */
int boxaMakeAreaIndicator(void);

/* Symbol: pixDisplayPtaPattern */
/* Demangled: pixDisplayPtaPattern */
int pixDisplayPtaPattern(void);

/* Symbol: numaMakeHistogramClipped */
/* Demangled: numaMakeHistogramClipped */
int numaMakeHistogramClipped(void);

/* Symbol: pixClipMasked */
/* Demangled: pixClipMasked */
int pixClipMasked(void);

/* Symbol: pixWritePSEmbed */
/* Demangled: pixWritePSEmbed */
int pixWritePSEmbed(void);

/* Symbol: boxaaJoin */
/* Demangled: boxaaJoin */
int boxaaJoin(void);

/* Symbol: kernelGetMinMax */
/* Demangled: kernelGetMinMax */
int kernelGetMinMax(void);

/* Symbol: dpixGetRefcount */
/* Demangled: dpixGetRefcount */
int dpixGetRefcount(void);

/* Symbol: ptaGetQuarticLSF */
/* Demangled: ptaGetQuarticLSF */
int ptaGetQuarticLSF(void);

/* Symbol: pixaAddBox */
/* Demangled: pixaAddBox */
int pixaAddBox(void);

/* Symbol: compareTilesByHisto */
/* Demangled: compareTilesByHisto */
int compareTilesByHisto(void);

/* Symbol: numaReadMem */
/* Demangled: numaReadMem */
int numaReadMem(void);

/* Symbol: pixacompGetBoxGeometry */
/* Demangled: pixacompGetBoxGeometry */
int pixacompGetBoxGeometry(void);

/* Symbol: pixApplyInvBackgroundRGBMap */
/* Demangled: pixApplyInvBackgroundRGBMap */
int pixApplyInvBackgroundRGBMap(void);

/* Symbol: pixMaskOverColorRange */
/* Demangled: pixMaskOverColorRange */
int pixMaskOverColorRange(void);

/* Symbol: pixUpDownDetectGeneralDwa */
/* Demangled: pixUpDownDetectGeneralDwa */
int pixUpDownDetectGeneralDwa(void);

/* Symbol: pixMorphGradient */
/* Demangled: pixMorphGradient */
int pixMorphGradient(void);

/* Symbol: pixaaReadStream */
/* Demangled: pixaaReadStream */
int pixaaReadStream(void);

/* Symbol: pixScaleGray2xLI */
/* Demangled: pixScaleGray2xLI */
int pixScaleGray2xLI(void);

/* Symbol: pixHShearCenter */
/* Demangled: pixHShearCenter */
int pixHShearCenter(void);

/* Symbol: pixOctreeQuantByPopulation */
/* Demangled: pixOctreeQuantByPopulation */
int pixOctreeQuantByPopulation(void);

/* Symbol: fpixCopy */
/* Demangled: fpixCopy */
int fpixCopy(void);

/* Symbol: pixGetData */
/* Demangled: pixGetData */
int pixGetData(void);

/* Symbol: pixVarianceByColumn */
/* Demangled: pixVarianceByColumn */
int pixVarianceByColumn(void);

/* Symbol: ioFormatTest */
/* Demangled: ioFormatTest */
int ioFormatTest(void);

/* Symbol: selaAddTJunctions */
/* Demangled: selaAddTJunctions */
int selaAddTJunctions(void);

/* Symbol: boxGetSideLocations */
/* Demangled: boxGetSideLocations */
int boxGetSideLocations(void);

/* Symbol: boxaMakeSizeIndicator */
/* Demangled: boxaMakeSizeIndicator */
int boxaMakeSizeIndicator(void);

/* Symbol: stringCat */
/* Demangled: stringCat */
int stringCat(void);

/* Symbol: bmfGetLineStrings */
/* Demangled: bmfGetLineStrings */
int bmfGetLineStrings(void);

/* Symbol: ptaaDestroy */
/* Demangled: ptaaDestroy */
int ptaaDestroy(void);

/* Symbol: pixConvertRGBToSaturation */
/* Demangled: pixConvertRGBToSaturation */
int pixConvertRGBToSaturation(void);

/* Symbol: dewarpGetTextlineCenters */
/* Demangled: dewarpGetTextlineCenters */
int dewarpGetTextlineCenters(void);

/* Symbol: pixFindAreaFractionMasked */
/* Demangled: pixFindAreaFractionMasked */
int pixFindAreaFractionMasked(void);

/* Symbol: recogCreateFromRecog */
/* Demangled: recogCreateFromRecog */
int recogCreateFromRecog(void);

/* Symbol: selaCreate */
/* Demangled: selaCreate */
int selaCreate(void);

/* Symbol: pixScaleGray4xLIThresh */
/* Demangled: pixScaleGray4xLIThresh */
int pixScaleGray4xLIThresh(void);

/* Symbol: l_dnaRemoveNumber */
/* Demangled: l_dnaRemoveNumber */
int l_dnaRemoveNumber(void);

/* Symbol: l_rbtreeGetFirst */
/* Demangled: l_rbtreeGetFirst */
int l_rbtreeGetFirst(void);

/* Symbol: pixaAddBorderGeneral */
/* Demangled: pixaAddBorderGeneral */
int pixaAddBorderGeneral(void);

/* Symbol: pixConnComp */
/* Demangled: pixConnComp */
int pixConnComp(void);

/* Symbol: boxContainsPt */
/* Demangled: boxContainsPt */
int boxContainsPt(void);

/* Symbol: pixSelectLargeULComp */
/* Demangled: pixSelectLargeULComp */
int pixSelectLargeULComp(void);

/* Symbol: boxaSizeRange */
/* Demangled: boxaSizeRange */
int boxaSizeRange(void);

/* Symbol: selGetParameters */
/* Demangled: selGetParameters */
int selGetParameters(void);

/* Symbol: numaErode */
/* Demangled: numaErode */
int numaErode(void);

/* Symbol: ptaWriteStream */
/* Demangled: ptaWriteStream */
int ptaWriteStream(void);

/* Symbol: l_dnaaFlattenToDna */
/* Demangled: l_dnaaFlattenToDna */
int l_dnaaFlattenToDna(void);

/* Symbol: gplotGenDataFiles */
/* Demangled: gplotGenDataFiles */
int gplotGenDataFiles(void);

/* Symbol: ptraRemove */
/* Demangled: ptraRemove */
int ptraRemove(void);

/* Symbol: pixScaleToSizeRel */
/* Demangled: pixScaleToSizeRel */
int pixScaleToSizeRel(void);

/* Symbol: recogReadStream */
/* Demangled: recogReadStream */
int recogReadStream(void);

/* Symbol: pixGetOuterBorderPta */
/* Demangled: pixGetOuterBorderPta */
int pixGetOuterBorderPta(void);

/* Symbol: fpixAddSlopeBorder */
/* Demangled: fpixAddSlopeBorder */
int fpixAddSlopeBorder(void);

/* Symbol: fpixAddContinuedBorder */
/* Demangled: fpixAddContinuedBorder */
int fpixAddContinuedBorder(void);

/* Symbol: pixScaleToGray */
/* Demangled: pixScaleToGray */
int pixScaleToGray(void);

/* Symbol: ptaWriteMem */
/* Demangled: ptaWriteMem */
int ptaWriteMem(void);

/* Symbol: pixFillPolygon */
/* Demangled: pixFillPolygon */
int pixFillPolygon(void);

/* Symbol: pixGenerateCIData */
/* Demangled: pixGenerateCIData */
int pixGenerateCIData(void);

/* Symbol: pixSelectByPerimToAreaRatio */
/* Demangled: pixSelectByPerimToAreaRatio */
int pixSelectByPerimToAreaRatio(void);

/* Symbol: pixConvert1To2 */
/* Demangled: pixConvert1To2 */
int pixConvert1To2(void);

/* Symbol: sarrayWriteMem */
/* Demangled: sarrayWriteMem */
int sarrayWriteMem(void);

/* Symbol: pixWriteStreamBmp */
/* Demangled: pixWriteStreamBmp */
int pixWriteStreamBmp(void);

/* Symbol: pixUpDownDetectGeneral */
/* Demangled: pixUpDownDetectGeneral */
int pixUpDownDetectGeneral(void);

/* Symbol: fpixAffinePta */
/* Demangled: fpixAffinePta */
int fpixAffinePta(void);

/* Symbol: ptaNoisyLinearLSF */
/* Demangled: ptaNoisyLinearLSF */
int ptaNoisyLinearLSF(void);

/* Symbol: ptraaGetSize */
/* Demangled: ptraaGetSize */
int ptraaGetSize(void);

/* Symbol: pixHolesByFilling */
/* Demangled: pixHolesByFilling */
int pixHolesByFilling(void);

/* Symbol: dewarpFindVertDisparity */
/* Demangled: dewarpFindVertDisparity */
int dewarpFindVertDisparity(void);

/* Symbol: fpixAddBorder */
/* Demangled: fpixAddBorder */
int fpixAddBorder(void);

/* Symbol: pixConvert1To4 */
/* Demangled: pixConvert1To4 */
int pixConvert1To4(void);

/* Symbol: sarrayRead */
/* Demangled: sarrayRead */
int sarrayRead(void);

/* Symbol: selaWrite */
/* Demangled: selaWrite */
int selaWrite(void);

/* Symbol: Java_com_googlecode_leptonica_android_ReadFile_nativeReadBitmap */
/* Demangled: Java_com_googlecode_leptonica_android_ReadFile_nativeReadBitmap */
int Java_com_googlecode_leptonica_android_ReadFile_nativeReadBitmap(void);

/* Symbol: pixDisplayPtaa */
/* Demangled: pixDisplayPtaa */
int pixDisplayPtaa(void);

/* Symbol: reallocNew */
/* Demangled: reallocNew */
int reallocNew(void);

/* Symbol: recogResetBmf */
/* Demangled: recogResetBmf */
int recogResetBmf(void);

/* Symbol: pixWriteTiffCustom */
/* Demangled: pixWriteTiffCustom */
int pixWriteTiffCustom(void);

/* Symbol: pixOtsuThreshOnBackgroundNorm */
/* Demangled: pixOtsuThreshOnBackgroundNorm */
int pixOtsuThreshOnBackgroundNorm(void);

/* Symbol: makeGrayQuantTableArb */
/* Demangled: makeGrayQuantTableArb */
int makeGrayQuantTableArb(void);

/* Symbol: numaRebinHistogram */
/* Demangled: numaRebinHistogram */
int numaRebinHistogram(void);

/* Symbol: pixReadHeaderMem */
/* Demangled: pixReadHeaderMem */
int pixReadHeaderMem(void);

/* Symbol: ptaReadStream */
/* Demangled: ptaReadStream */
int ptaReadStream(void);

/* Symbol: recogaDestroy */
/* Demangled: recogaDestroy */
int recogaDestroy(void);

/* Symbol: pixBlockconv */
/* Demangled: pixBlockconv */
int pixBlockconv(void);

/* Symbol: boxaaTranspose */
/* Demangled: boxaaTranspose */
int boxaaTranspose(void);

/* Symbol: pixConvert1To8 */
/* Demangled: pixConvert1To8 */
int pixConvert1To8(void);

/* Symbol: pixaSelectBySize */
/* Demangled: pixaSelectBySize */
int pixaSelectBySize(void);

/* Symbol: pixaAnyColormaps */
/* Demangled: pixaAnyColormaps */
int pixaAnyColormaps(void);

/* Symbol: jbClasserDestroy */
/* Demangled: jbClasserDestroy */
int jbClasserDestroy(void);

/* Symbol: numaHistogramGetValFromRank */
/* Demangled: numaHistogramGetValFromRank */
int numaHistogramGetValFromRank(void);

/* Symbol: convertFlateToPSString */
/* Demangled: convertFlateToPSString */
int convertFlateToPSString(void);

/* Symbol: pixRenderPtaBlend */
/* Demangled: pixRenderPtaBlend */
int pixRenderPtaBlend(void);

/* Symbol: numaSort */
/* Demangled: numaSort */
int numaSort(void);

/* Symbol: pixGenerateMaskByBand32 */
/* Demangled: pixGenerateMaskByBand32 */
int pixGenerateMaskByBand32(void);

/* Symbol: pixGetGrayHistogramMasked */
/* Demangled: pixGetGrayHistogramMasked */
int pixGetGrayHistogramMasked(void);

/* Symbol: jbTemplatesFromComposites */
/* Demangled: jbTemplatesFromComposites */
int jbTemplatesFromComposites(void);

/* Symbol: pixWriteJp2k */
/* Demangled: pixWriteJp2k */
int pixWriteJp2k(void);

/* Symbol: pixWriteMemPam */
/* Demangled: pixWriteMemPam */
int pixWriteMemPam(void);

/* Symbol: pixScaleColor4xLI */
/* Demangled: pixScaleColor4xLI */
int pixScaleColor4xLI(void);

/* Symbol: pixVShearLI */
/* Demangled: pixVShearLI */
int pixVShearLI(void);

/* Symbol: pixConnCompBB */
/* Demangled: pixConnCompBB */
int pixConnCompBB(void);

/* Symbol: l_byteaInitFromStream */
/* Demangled: l_byteaInitFromStream */
int l_byteaInitFromStream(void);

/* Symbol: getCutPathForHole */
/* Demangled: getCutPathForHole */
int getCutPathForHole(void);

/* Symbol: generatePtaLine */
/* Demangled: generatePtaLine */
int generatePtaLine(void);

/* Symbol: ptaRemoveDupsByHash */
/* Demangled: ptaRemoveDupsByHash */
int ptaRemoveDupsByHash(void);

/* Symbol: recogWriteMem */
/* Demangled: recogWriteMem */
int recogWriteMem(void);

/* Symbol: Java_com_googlecode_leptonica_android_Pixa_nativeGetBoxGeometry */
/* Demangled: Java_com_googlecode_leptonica_android_Pixa_nativeGetBoxGeometry */
int Java_com_googlecode_leptonica_android_Pixa_nativeGetBoxGeometry(void);

/* Symbol: bbufferExtendArray */
/* Demangled: bbufferExtendArray */
int bbufferExtendArray(void);

/* Symbol: lqueueDestroy */
/* Demangled: lqueueDestroy */
int lqueueDestroy(void);

/* Symbol: AlphaMaskBorderVals */
/* Demangled: AlphaMaskBorderVals */
extern void* AlphaMaskBorderVals;

/* Symbol: ptaGetCount */
/* Demangled: ptaGetCount */
int ptaGetCount(void);

/* Symbol: boxaSort */
/* Demangled: boxaSort */
int boxaSort(void);

/* Symbol: sela4ccThin */
/* Demangled: sela4ccThin */
int sela4ccThin(void);

/* Symbol: ptaCropToMask */
/* Demangled: ptaCropToMask */
int ptaCropToMask(void);

/* Symbol: pixacompWriteStream */
/* Demangled: pixacompWriteStream */
int pixacompWriteStream(void);

/* Symbol: selCreateFromColorPix */
/* Demangled: selCreateFromColorPix */
int selCreateFromColorPix(void);

/* Symbol: pixCreateTemplate */
/* Demangled: pixCreateTemplate */
int pixCreateTemplate(void);

/* Symbol: pixConvertRGBToGrayMinMax */
/* Demangled: pixConvertRGBToGrayMinMax */
int pixConvertRGBToGrayMinMax(void);

/* Symbol: boxaSetSide */
/* Demangled: boxaSetSide */
int boxaSetSide(void);

/* Symbol: fpixReadStream */
/* Demangled: fpixReadStream */
int fpixReadStream(void);

/* Symbol: sarrayAppendRange */
/* Demangled: sarrayAppendRange */
int sarrayAppendRange(void);

/* Symbol: convertNumberedMasksToBoxaa */
/* Demangled: convertNumberedMasksToBoxaa */
int convertNumberedMasksToBoxaa(void);

/* Symbol: boxaRotate */
/* Demangled: boxaRotate */
int boxaRotate(void);

/* Symbol: kernelSetOrigin */
/* Demangled: kernelSetOrigin */
int kernelSetOrigin(void);

/* Symbol: pixWindowedMean */
/* Demangled: pixWindowedMean */
int pixWindowedMean(void);

/* Symbol: dewarpaShowArrays */
/* Demangled: dewarpaShowArrays */
int dewarpaShowArrays(void);

/* Symbol: parseForProtos */
/* Demangled: parseForProtos */
int parseForProtos(void);

/* Symbol: pixHalfEdgeByBandpass */
/* Demangled: pixHalfEdgeByBandpass */
int pixHalfEdgeByBandpass(void);

/* Symbol: pixRenderPta */
/* Demangled: pixRenderPta */
int pixRenderPta(void);

/* Symbol: recogRunViterbi */
/* Demangled: recogRunViterbi */
int recogRunViterbi(void);

/* Symbol: sudokuOutput */
/* Demangled: sudokuOutput */
int sudokuOutput(void);

/* Symbol: pixaaGetPixa */
/* Demangled: pixaaGetPixa */
int pixaaGetPixa(void);

/* Symbol: pixClipBoxToEdges */
/* Demangled: pixClipBoxToEdges */
int pixClipBoxToEdges(void);

/* Symbol: pixaInterleave */
/* Demangled: pixaInterleave */
int pixaInterleave(void);

/* Symbol: convertToNUpPixa */
/* Demangled: convertToNUpPixa */
int convertToNUpPixa(void);

/* Symbol: adjacentOnPixelInRaster */
/* Demangled: adjacentOnPixelInRaster */
int adjacentOnPixelInRaster(void);

/* Symbol: boxClone */
/* Demangled: boxClone */
int boxClone(void);

/* Symbol: pixaComparePhotoRegionsByHisto */
/* Demangled: pixaComparePhotoRegionsByHisto */
int pixaComparePhotoRegionsByHisto(void);

/* Symbol: convertToNUpFiles */
/* Demangled: convertToNUpFiles */
int convertToNUpFiles(void);

/* Symbol: pixaWriteFiles */
/* Demangled: pixaWriteFiles */
int pixaWriteFiles(void);

/* Symbol: pixMaxDynamicRangeRGB */
/* Demangled: pixMaxDynamicRangeRGB */
int pixMaxDynamicRangeRGB(void);

/* Symbol: boxaSaveValid */
/* Demangled: boxaSaveValid */
int boxaSaveValid(void);

/* Symbol: dpixDestroy */
/* Demangled: dpixDestroy */
int dpixDestroy(void);

/* Symbol: dewarpSinglePageRun */
/* Demangled: dewarpSinglePageRun */
int dewarpSinglePageRun(void);

/* Symbol: generatePtaHashBox */
/* Demangled: generatePtaHashBox */
int generatePtaHashBox(void);

/* Symbol: pixProcessBarcodes */
/* Demangled: pixProcessBarcodes */
int pixProcessBarcodes(void);

/* Symbol: pixGetMostPopulatedColors */
/* Demangled: pixGetMostPopulatedColors */
int pixGetMostPopulatedColors(void);

/* Symbol: lheapDestroy */
/* Demangled: lheapDestroy */
int lheapDestroy(void);

/* Symbol: pixSetChromaSampling */
/* Demangled: pixSetChromaSampling */
int pixSetChromaSampling(void);

/* Symbol: pixGetRGBComponentCmap */
/* Demangled: pixGetRGBComponentCmap */
int pixGetRGBComponentCmap(void);

/* Symbol: pixaExtractColumnFromEachPix */
/* Demangled: pixaExtractColumnFromEachPix */
int pixaExtractColumnFromEachPix(void);

/* Symbol: pixDisplayMultiple */
/* Demangled: pixDisplayMultiple */
int pixDisplayMultiple(void);

/* Symbol: ccbaWriteStream */
/* Demangled: ccbaWriteStream */
int ccbaWriteStream(void);

/* Symbol: pixPadToCenterCentroid */
/* Demangled: pixPadToCenterCentroid */
int pixPadToCenterCentroid(void);

/* Symbol: pixContrastTRC */
/* Demangled: pixContrastTRC */
int pixContrastTRC(void);

/* Symbol: fileFormatIsTiff */
/* Demangled: fileFormatIsTiff */
int fileFormatIsTiff(void);

/* Symbol: recogSplittingFilter */
/* Demangled: recogSplittingFilter */
int recogSplittingFilter(void);

/* Symbol: pixOtsuAdaptiveThreshold */
/* Demangled: pixOtsuAdaptiveThreshold */
int pixOtsuAdaptiveThreshold(void);

/* Symbol: numaAddNumber */
/* Demangled: numaAddNumber */
int numaAddNumber(void);

/* Symbol: numaGetMax */
/* Demangled: numaGetMax */
int numaGetMax(void);

/* Symbol: pixBilateralGrayExact */
/* Demangled: pixBilateralGrayExact */
int pixBilateralGrayExact(void);

/* Symbol: decodeBase64 */
/* Demangled: decodeBase64 */
int decodeBase64(void);

/* Symbol: l_dnaHashCreateFromPta */
/* Demangled: l_dnaHashCreateFromPta */
int l_dnaHashCreateFromPta(void);

/* Symbol: recogGetCount */
/* Demangled: recogGetCount */
int recogGetCount(void);

/* Symbol: boxaRotateOrth */
/* Demangled: boxaRotateOrth */
int boxaRotateOrth(void);

/* Symbol: l_dnaInsertNumber */
/* Demangled: l_dnaInsertNumber */
int l_dnaInsertNumber(void);

/* Symbol: boxGetRefcount */
/* Demangled: boxGetRefcount */
int boxGetRefcount(void);

/* Symbol: pixcmapConvertRGBToYUV */
/* Demangled: pixcmapConvertRGBToYUV */
int pixcmapConvertRGBToYUV(void);

/* Symbol: generateBinaryMaze */
/* Demangled: generateBinaryMaze */
int generateBinaryMaze(void);

/* Symbol: pixcompCreateFromPix */
/* Demangled: pixcompCreateFromPix */
int pixcompCreateFromPix(void);

/* Symbol: convertFlateToPS */
/* Demangled: convertFlateToPS */
int convertFlateToPS(void);

/* Symbol: pixReadStreamBmp */
/* Demangled: pixReadStreamBmp */
int pixReadStreamBmp(void);

/* Symbol: boxaaGetBoxa */
/* Demangled: boxaaGetBoxa */
int boxaaGetBoxa(void);

/* Symbol: pixSeedfill8BB */
/* Demangled: pixSeedfill8BB */
int pixSeedfill8BB(void);

/* Symbol: pixaSetText */
/* Demangled: pixaSetText */
int pixaSetText(void);

/* Symbol: pixAffinePtaColor */
/* Demangled: pixAffinePtaColor */
int pixAffinePtaColor(void);

/* Symbol: pixMedianCutQuant */
/* Demangled: pixMedianCutQuant */
int pixMedianCutQuant(void);

/* Symbol: l_dnaAddNumber */
/* Demangled: l_dnaAddNumber */
int l_dnaAddNumber(void);

/* Symbol: pixUnpackBinary */
/* Demangled: pixUnpackBinary */
int pixUnpackBinary(void);

/* Symbol: pixMeanInRectangle */
/* Demangled: pixMeanInRectangle */
int pixMeanInRectangle(void);

/* Symbol: boxGetGeometry */
/* Demangled: boxGetGeometry */
int boxGetGeometry(void);

/* Symbol: bbufferWrite */
/* Demangled: bbufferWrite */
int bbufferWrite(void);

/* Symbol: boxaaExtendWithInit */
/* Demangled: boxaaExtendWithInit */
int boxaaExtendWithInit(void);

/* Symbol: l_byteaWriteStream */
/* Demangled: l_byteaWriteStream */
int l_byteaWriteStream(void);

/* Symbol: pixMinMaxNearLine */
/* Demangled: pixMinMaxNearLine */
int pixMinMaxNearLine(void);

/* Symbol: fpixFlipTB */
/* Demangled: fpixFlipTB */
int fpixFlipTB(void);

/* Symbol: pixHaustest */
/* Demangled: pixHaustest */
int pixHaustest(void);

/* Symbol: pixMaskBoxa */
/* Demangled: pixMaskBoxa */
int pixMaskBoxa(void);

/* Symbol: pixCountByRow */
/* Demangled: pixCountByRow */
int pixCountByRow(void);

/* Symbol: pixaSort */
/* Demangled: pixaSort */
int pixaSort(void);

/* Symbol: pixcmapDeserializeFromMemory */
/* Demangled: pixcmapDeserializeFromMemory */
int pixcmapDeserializeFromMemory(void);

/* Symbol: selDisplayInPix */
/* Demangled: selDisplayInPix */
int selDisplayInPix(void);

/* Symbol: pixGammaTRCWithAlpha */
/* Demangled: pixGammaTRCWithAlpha */
int pixGammaTRCWithAlpha(void);

/* Symbol: pixRenderPlotFromNumaGen */
/* Demangled: pixRenderPlotFromNumaGen */
int pixRenderPlotFromNumaGen(void);

/* Symbol: pixaSortByIndex */
/* Demangled: pixaSortByIndex */
int pixaSortByIndex(void);

/* Symbol: ptaaGetBoundaryPixels */
/* Demangled: ptaaGetBoundaryPixels */
int ptaaGetBoundaryPixels(void);

/* Symbol: ptaSortByIndex */
/* Demangled: ptaSortByIndex */
int ptaSortByIndex(void);

/* Symbol: pixTransferAllData */
/* Demangled: pixTransferAllData */
int pixTransferAllData(void);

/* Symbol: pixSetResolution */
/* Demangled: pixSetResolution */
int pixSetResolution(void);

/* Symbol: lheapSortStrictOrder */
/* Demangled: lheapSortStrictOrder */
int lheapSortStrictOrder(void);

/* Symbol: pixAccumulate */
/* Demangled: pixAccumulate */
int pixAccumulate(void);

/* Symbol: linearScaleRGBVal */
/* Demangled: linearScaleRGBVal */
int linearScaleRGBVal(void);

/* Symbol: pixProjectivePtaWithAlpha */
/* Demangled: pixProjectivePtaWithAlpha */
int pixProjectivePtaWithAlpha(void);

/* Symbol: stopWallTimer */
/* Demangled: stopWallTimer */
int stopWallTimer(void);

/* Symbol: boxaConstrainSize */
/* Demangled: boxaConstrainSize */
int boxaConstrainSize(void);

/* Symbol: pixMedianCutQuantGeneral */
/* Demangled: pixMedianCutQuantGeneral */
int pixMedianCutQuantGeneral(void);

/* Symbol: convertLABToRGB */
/* Demangled: convertLABToRGB */
int convertLABToRGB(void);

/* Symbol: l_dnaHashCreate */
/* Demangled: l_dnaHashCreate */
int l_dnaHashCreate(void);

/* Symbol: pixMultConstAccumulate */
/* Demangled: pixMultConstAccumulate */
int pixMultConstAccumulate(void);

/* Symbol: pixaDisplayLinearly */
/* Demangled: pixaDisplayLinearly */
int pixaDisplayLinearly(void);

/* Symbol: ptaCopy */
/* Demangled: ptaCopy */
int ptaCopy(void);

/* Symbol: Java_com_googlecode_leptonica_android_ReadFile_nativeReadBytes8 */
/* Demangled: Java_com_googlecode_leptonica_android_ReadFile_nativeReadBytes8 */
int Java_com_googlecode_leptonica_android_ReadFile_nativeReadBytes8(void);

/* Symbol: pixBackgroundNormGrayArrayMorph */
/* Demangled: pixBackgroundNormGrayArrayMorph */
int pixBackgroundNormGrayArrayMorph(void);

/* Symbol: pixThinConnected */
/* Demangled: pixThinConnected */
int pixThinConnected(void);

/* Symbol: l_dnaReplaceNumber */
/* Demangled: l_dnaReplaceNumber */
int l_dnaReplaceNumber(void);

/* Symbol: l_dnaIntersectionByAset */
/* Demangled: l_dnaIntersectionByAset */
int l_dnaIntersectionByAset(void);

/* Symbol: fpixLinearCombination */
/* Demangled: fpixLinearCombination */
int fpixLinearCombination(void);

/* Symbol: jbClassifyRankHaus */
/* Demangled: jbClassifyRankHaus */
int jbClassifyRankHaus(void);

/* Symbol: pixcompGetDimensions */
/* Demangled: pixcompGetDimensions */
int pixcompGetDimensions(void);

/* Symbol: ptaSubsample */
/* Demangled: ptaSubsample */
int ptaSubsample(void);

/* Symbol: regTestCompareValues */
/* Demangled: regTestCompareValues */
int regTestCompareValues(void);

/* Symbol: pixClone */
/* Demangled: pixClone */
int pixClone(void);

/* Symbol: pixBilinearPtaWithAlpha */
/* Demangled: pixBilinearPtaWithAlpha */
int pixBilinearPtaWithAlpha(void);

/* Symbol: numaReplaceNumber */
/* Demangled: numaReplaceNumber */
int numaReplaceNumber(void);

/* Symbol: pixAddTextlines */
/* Demangled: pixAddTextlines */
int pixAddTextlines(void);

/* Symbol: ptaaGetPt */
/* Demangled: ptaaGetPt */
int ptaaGetPt(void);

/* Symbol: numaGetStatsUsingHistogram */
/* Demangled: numaGetStatsUsingHistogram */
int numaGetStatsUsingHistogram(void);

/* Symbol: convertJpegToPSEmbed */
/* Demangled: convertJpegToPSEmbed */
int convertJpegToPSEmbed(void);

/* Symbol: makeValTabSG2 */
/* Demangled: makeValTabSG2 */
int makeValTabSG2(void);

/* Symbol: bwmap */
/* Demangled: bwmap */
extern void* bwmap;

/* Symbol: dewarpaDestroyDewarp */
/* Demangled: dewarpaDestroyDewarp */
int dewarpaDestroyDewarp(void);

/* Symbol: pixVarianceByRow */
/* Demangled: pixVarianceByRow */
int pixVarianceByRow(void);

/* Symbol: pixaSelectByWidthHeightRatio */
/* Demangled: pixaSelectByWidthHeightRatio */
int pixaSelectByWidthHeightRatio(void);

/* Symbol: makeValTabSG3 */
/* Demangled: makeValTabSG3 */
int makeValTabSG3(void);

/* Symbol: pixGetColormap */
/* Demangled: pixGetColormap */
int pixGetColormap(void);

/* Symbol: boxaTranslate */
/* Demangled: boxaTranslate */
int boxaTranslate(void);

/* Symbol: numaGetHistogramStats */
/* Demangled: numaGetHistogramStats */
int numaGetHistogramStats(void);

/* Symbol: makeValTabSG4 */
/* Demangled: makeValTabSG4 */
int makeValTabSG4(void);

/* Symbol: dpixAddMultConstant */
/* Demangled: dpixAddMultConstant */
int dpixAddMultConstant(void);

/* Symbol: makeValTabSG6 */
/* Demangled: makeValTabSG6 */
int makeValTabSG6(void);

/* Symbol: sudokuGenerate */
/* Demangled: sudokuGenerate */
int sudokuGenerate(void);

/* Symbol: pixAffineSampledPta */
/* Demangled: pixAffineSampledPta */
int pixAffineSampledPta(void);

/* Symbol: boxIsValid */
/* Demangled: boxIsValid */
int boxIsValid(void);

/* Symbol: numaaReadMem */
/* Demangled: numaaReadMem */
int numaaReadMem(void);

/* Symbol: pixEndianTwoByteSwap */
/* Demangled: pixEndianTwoByteSwap */
int pixEndianTwoByteSwap(void);

/* Symbol: pixcmapAddNewColor */
/* Demangled: pixcmapAddNewColor */
int pixcmapAddNewColor(void);

/* Symbol: grayInterHistogramStats */
/* Demangled: grayInterHistogramStats */
int grayInterHistogramStats(void);

/* Symbol: fpixConvertToPix */
/* Demangled: fpixConvertToPix */
int fpixConvertToPix(void);

/* Symbol: numaSortAutoSelect */
/* Demangled: numaSortAutoSelect */
int numaSortAutoSelect(void);

/* Symbol: pixFindMaxVerticalRunOnLine */
/* Demangled: pixFindMaxVerticalRunOnLine */
int pixFindMaxVerticalRunOnLine(void);

/* Symbol: makeValTabSG8 */
/* Demangled: makeValTabSG8 */
int makeValTabSG8(void);

/* Symbol: Java_com_googlecode_leptonica_android_WriteFile_nativeWriteImpliedFormat */
/* Demangled: Java_com_googlecode_leptonica_android_WriteFile_nativeWriteImpliedFormat */
int Java_com_googlecode_leptonica_android_WriteFile_nativeWriteImpliedFormat(void);

/* Symbol: pixBilateral */
/* Demangled: pixBilateral */
int pixBilateral(void);

/* Symbol: pixcmapCreateRandom */
/* Demangled: pixcmapCreateRandom */
int pixcmapCreateRandom(void);

/* Symbol: l_binaryCopy */
/* Demangled: l_binaryCopy */
int l_binaryCopy(void);

/* Symbol: pixNumSignificantGrayColors */
/* Demangled: pixNumSignificantGrayColors */
int pixNumSignificantGrayColors(void);

/* Symbol: pixcmapSetBlackAndWhite */
/* Demangled: pixcmapSetBlackAndWhite */
int pixcmapSetBlackAndWhite(void);

/* Symbol: pixReadStreamSpix */
/* Demangled: pixReadStreamSpix */
int pixReadStreamSpix(void);

/* Symbol: wshedCreate */
/* Demangled: wshedCreate */
int wshedCreate(void);

/* Symbol: l_clearDataDibit */
/* Demangled: l_clearDataDibit */
int l_clearDataDibit(void);

/* Symbol: boxaaReadMem */
/* Demangled: boxaaReadMem */
int boxaaReadMem(void);

/* Symbol: dpixCopy */
/* Demangled: dpixCopy */
int dpixCopy(void);

/* Symbol: pixGetGrayHistogramTiled */
/* Demangled: pixGetGrayHistogramTiled */
int pixGetGrayHistogramTiled(void);

/* Symbol: recogCreate */
/* Demangled: recogCreate */
int recogCreate(void);

/* Symbol: recogCreateFromPixa */
/* Demangled: recogCreateFromPixa */
int recogCreateFromPixa(void);

/* Symbol: recogTrainingFinished */
/* Demangled: recogTrainingFinished */
int recogTrainingFinished(void);

/* Symbol: boxaCombineOverlaps */
/* Demangled: boxaCombineOverlaps */
int boxaCombineOverlaps(void);

/* Symbol: pixcmapContrastTRC */
/* Demangled: pixcmapContrastTRC */
int pixcmapContrastTRC(void);

/* Symbol: pixcmapGrayToColor */
/* Demangled: pixcmapGrayToColor */
int pixcmapGrayToColor(void);

/* Symbol: pixRotateAMGray */
/* Demangled: pixRotateAMGray */
int pixRotateAMGray(void);

/* Symbol: pixConvolveWithBias */
/* Demangled: pixConvolveWithBias */
int pixConvolveWithBias(void);

/* Symbol: fgetJpegResolution */
/* Demangled: fgetJpegResolution */
int fgetJpegResolution(void);

/* Symbol: numaLowPassIntervals */
/* Demangled: numaLowPassIntervals */
int numaLowPassIntervals(void);

/* Symbol: pixCorrelationScoreSimple */
/* Demangled: pixCorrelationScoreSimple */
int pixCorrelationScoreSimple(void);

/* Symbol: numaGetRefcount */
/* Demangled: numaGetRefcount */
int numaGetRefcount(void);

/* Symbol: pixacompAddPix */
/* Demangled: pixacompAddPix */
int pixacompAddPix(void);

/* Symbol: recogScaleCharacter */
/* Demangled: recogScaleCharacter */
int recogScaleCharacter(void);

/* Symbol: pixGetOuterBorder */
/* Demangled: pixGetOuterBorder */
int pixGetOuterBorder(void);

/* Symbol: dewarpSinglePage */
/* Demangled: dewarpSinglePage */
int dewarpSinglePage(void);

/* Symbol: pixGetLastOnPixelInRun */
/* Demangled: pixGetLastOnPixelInRun */
int pixGetLastOnPixelInRun(void);

/* Symbol: pixWordMaskByDilation */
/* Demangled: pixWordMaskByDilation */
int pixWordMaskByDilation(void);

/* Symbol: dpixWriteStream */
/* Demangled: dpixWriteStream */
int dpixWriteStream(void);

/* Symbol: pixGetBinnedColor */
/* Demangled: pixGetBinnedColor */
int pixGetBinnedColor(void);

/* Symbol: fmorphautogen */
/* Demangled: fmorphautogen */
int fmorphautogen(void);

/* Symbol: numaInvertMap */
/* Demangled: numaInvertMap */
int numaInvertMap(void);

/* Symbol: pixCopyColormap */
/* Demangled: pixCopyColormap */
int pixCopyColormap(void);

/* Symbol: pixQuadtreeMean */
/* Demangled: pixQuadtreeMean */
int pixQuadtreeMean(void);

/* Symbol: boxaScale */
/* Demangled: boxaScale */
int boxaScale(void);

/* Symbol: pixNumberOccupiedOctcubes */
/* Demangled: pixNumberOccupiedOctcubes */
int pixNumberOccupiedOctcubes(void);

/* Symbol: fpixaGetPixel */
/* Demangled: fpixaGetPixel */
int fpixaGetPixel(void);

/* Symbol: numaMakeAbsValue */
/* Demangled: numaMakeAbsValue */
int numaMakeAbsValue(void);

/* Symbol: pixcompDestroy */
/* Demangled: pixcompDestroy */
int pixcompDestroy(void);

/* Symbol: sarrayRemoveDupsByAset */
/* Demangled: sarrayRemoveDupsByAset */
int sarrayRemoveDupsByAset(void);

/* Symbol: pixBlockBilateralExact */
/* Demangled: pixBlockBilateralExact */
int pixBlockBilateralExact(void);

/* Symbol: boxaGetValidBox */
/* Demangled: boxaGetValidBox */
int boxaGetValidBox(void);

/* Symbol: boxaWindowedMedian */
/* Demangled: boxaWindowedMedian */
int boxaWindowedMedian(void);

/* Symbol: l_binaryWrite */
/* Demangled: l_binaryWrite */
int l_binaryWrite(void);

/* Symbol: dpixCreate */
/* Demangled: dpixCreate */
int dpixCreate(void);

/* Symbol: pixCreateFromPixcomp */
/* Demangled: pixCreateFromPixcomp */
int pixCreateFromPixcomp(void);

/* Symbol: Java_com_googlecode_leptonica_android_Pix_nativeGetDimensions */
/* Demangled: Java_com_googlecode_leptonica_android_Pix_nativeGetDimensions */
int Java_com_googlecode_leptonica_android_Pix_nativeGetDimensions(void);

/* Symbol: pixMinMaxTiles */
/* Demangled: pixMinMaxTiles */
int pixMinMaxTiles(void);

/* Symbol: gplotCreate */
/* Demangled: gplotCreate */
int gplotCreate(void);

/* Symbol: pixSetText */
/* Demangled: pixSetText */
int pixSetText(void);

/* Symbol: kernelCreateFromString */
/* Demangled: kernelCreateFromString */
int kernelCreateFromString(void);

/* Symbol: convertToPdfSegmented */
/* Demangled: convertToPdfSegmented */
int convertToPdfSegmented(void);

/* Symbol: pixGetRangeValues */
/* Demangled: pixGetRangeValues */
int pixGetRangeValues(void);

/* Symbol: recogaWriteStream */
/* Demangled: recogaWriteStream */
int recogaWriteStream(void);

/* Symbol: boxCreate */
/* Demangled: boxCreate */
int boxCreate(void);

/* Symbol: pixApplyInvBackgroundGrayMap */
/* Demangled: pixApplyInvBackgroundGrayMap */
int pixApplyInvBackgroundGrayMap(void);

/* Symbol: pixcmapAddRGBA */
/* Demangled: pixcmapAddRGBA */
int pixcmapAddRGBA(void);

/* Symbol: pixaccGetPix */
/* Demangled: pixaccGetPix */
int pixaccGetPix(void);

/* Symbol: numaaAddNuma */
/* Demangled: numaaAddNuma */
int numaaAddNuma(void);

/* Symbol: pixGetRGBHistogram */
/* Demangled: pixGetRGBHistogram */
int pixGetRGBHistogram(void);

/* Symbol: l_amapGetNext */
/* Demangled: l_amapGetNext */
int l_amapGetNext(void);

/* Symbol: pixRotateBinaryNice */
/* Demangled: pixRotateBinaryNice */
int pixRotateBinaryNice(void);

/* Symbol: pixComponentFunction */
/* Demangled: pixComponentFunction */
int pixComponentFunction(void);

/* Symbol: pixaccSubtract */
/* Demangled: pixaccSubtract */
int pixaccSubtract(void);

/* Symbol: pixDestroyColormap */
/* Demangled: pixDestroyColormap */
int pixDestroyColormap(void);

/* Symbol: pixcmapClear */
/* Demangled: pixcmapClear */
int pixcmapClear(void);

/* Symbol: pixUnsharpMaskingGrayFast */
/* Demangled: pixUnsharpMaskingGrayFast */
int pixUnsharpMaskingGrayFast(void);

/* Symbol: selectComposableSizes */
/* Demangled: selectComposableSizes */
int selectComposableSizes(void);

/* Symbol: boxaClipToBox */
/* Demangled: boxaClipToBox */
int boxaClipToBox(void);

/* Symbol: numaGetBinSortIndex */
/* Demangled: numaGetBinSortIndex */
int numaGetBinSortIndex(void);

/* Symbol: dewarpSinglePageInit */
/* Demangled: dewarpSinglePageInit */
int dewarpSinglePageInit(void);

/* Symbol: numaHistogramGetRankFromVal */
/* Demangled: numaHistogramGetRankFromVal */
int numaHistogramGetRankFromVal(void);

/* Symbol: pixaSelectRange */
/* Demangled: pixaSelectRange */
int pixaSelectRange(void);

/* Symbol: l_productMat2 */
/* Demangled: l_productMat2 */
int l_productMat2(void);

/* Symbol: convertJpegToPSString */
/* Demangled: convertJpegToPSString */
int convertJpegToPSString(void);

/* Symbol: l_productMat3 */
/* Demangled: l_productMat3 */
int l_productMat3(void);

/* Symbol: pixSubtract */
/* Demangled: pixSubtract */
int pixSubtract(void);

/* Symbol: pixAddWithIndicator */
/* Demangled: pixAddWithIndicator */
int pixAddWithIndicator(void);

/* Symbol: pixacompCreateFromSA */
/* Demangled: pixacompCreateFromSA */
int pixacompCreateFromSA(void);

/* Symbol: stopTimer */
/* Demangled: stopTimer */
int stopTimer(void);

/* Symbol: pixWrite */
/* Demangled: pixWrite */
int pixWrite(void);

/* Symbol: l_productMat4 */
/* Demangled: l_productMat4 */
int l_productMat4(void);

/* Symbol: gplotAddPlot */
/* Demangled: gplotAddPlot */
int gplotAddPlot(void);

/* Symbol: jbWordsInTextlines */
/* Demangled: jbWordsInTextlines */
int jbWordsInTextlines(void);

/* Symbol: seedspreadLow */
/* Demangled: seedspreadLow */
int seedspreadLow(void);

/* Symbol: appendSubdirs */
/* Demangled: appendSubdirs */
int appendSubdirs(void);

/* Symbol: pixWriteImpliedFormat */
/* Demangled: pixWriteImpliedFormat */
int pixWriteImpliedFormat(void);

/* Symbol: numaJoin */
/* Demangled: numaJoin */
int numaJoin(void);

/* Symbol: pixDecideIfPhotoImage */
/* Demangled: pixDecideIfPhotoImage */
int pixDecideIfPhotoImage(void);

/* Symbol: dpixLinearCombination */
/* Demangled: dpixLinearCombination */
int dpixLinearCombination(void);

/* Symbol: pixWriteStreamJp2k */
/* Demangled: pixWriteStreamJp2k */
int pixWriteStreamJp2k(void);

/* Symbol: numaMakeDelta */
/* Demangled: numaMakeDelta */
int numaMakeDelta(void);

/* Symbol: pixFewColorsOctcubeQuantMixed */
/* Demangled: pixFewColorsOctcubeQuantMixed */
int pixFewColorsOctcubeQuantMixed(void);

/* Symbol: dpixSetDimensions */
/* Demangled: dpixSetDimensions */
int dpixSetDimensions(void);

/* Symbol: linearInterpolatePixelFloat */
/* Demangled: linearInterpolatePixelFloat */
int linearInterpolatePixelFloat(void);

/* Symbol: genPathname */
/* Demangled: genPathname */
int genPathname(void);

/* Symbol: convertOnLittleEnd16 */
/* Demangled: convertOnLittleEnd16 */
int convertOnLittleEnd16(void);

/* Symbol: numaConvertToInt */
/* Demangled: numaConvertToInt */
int numaConvertToInt(void);

/* Symbol: scaleGray2xLILineLow */
/* Demangled: scaleGray2xLILineLow */
int scaleGray2xLILineLow(void);

/* Symbol: l_dnaHashAdd */
/* Demangled: l_dnaHashAdd */
int l_dnaHashAdd(void);

/* Symbol: pixMorphSequenceByRegion */
/* Demangled: pixMorphSequenceByRegion */
int pixMorphSequenceByRegion(void);

/* Symbol: quadtreeGetParent */
/* Demangled: quadtreeGetParent */
int quadtreeGetParent(void);

/* Symbol: bmfGetBaseline */
/* Demangled: bmfGetBaseline */
int bmfGetBaseline(void);

/* Symbol: boxaJoin */
/* Demangled: boxaJoin */
int boxaJoin(void);

/* Symbol: pixRenderBoxaArb */
/* Demangled: pixRenderBoxaArb */
int pixRenderBoxaArb(void);

/* Symbol: convertByteToHexAscii */
/* Demangled: convertByteToHexAscii */
int convertByteToHexAscii(void);

/* Symbol: ptraSwap */
/* Demangled: ptraSwap */
int ptraSwap(void);

/* Symbol: recogaExtractNumbers */
/* Demangled: recogaExtractNumbers */
int recogaExtractNumbers(void);

/* Symbol: pixSeedfill */
/* Demangled: pixSeedfill */
int pixSeedfill(void);

/* Symbol: dpixEndianByteSwap */
/* Demangled: dpixEndianByteSwap */
int dpixEndianByteSwap(void);

/* Symbol: fpixSetResolution */
/* Demangled: fpixSetResolution */
int fpixSetResolution(void);

/* Symbol: pixWriteMemGif */
/* Demangled: pixWriteMemGif */
int pixWriteMemGif(void);

/* Symbol: pixacompWriteMem */
/* Demangled: pixacompWriteMem */
int pixacompWriteMem(void);

/* Symbol: lineEndianByteSwap */
/* Demangled: lineEndianByteSwap */
int lineEndianByteSwap(void);

/* Symbol: ptraaInsertPtra */
/* Demangled: ptraaInsertPtra */
int ptraaInsertPtra(void);

/* Symbol: ptaReadMem */
/* Demangled: ptaReadMem */
int ptaReadMem(void);

/* Symbol: sarrayCreateInitialized */
/* Demangled: sarrayCreateInitialized */
int sarrayCreateInitialized(void);

/* Symbol: boxaaDisplay */
/* Demangled: boxaaDisplay */
int boxaaDisplay(void);

/* Symbol: pixFillClosedBorders */
/* Demangled: pixFillClosedBorders */
int pixFillClosedBorders(void);

/* Symbol: dewarpaModelStatus */
/* Demangled: dewarpaModelStatus */
int dewarpaModelStatus(void);

/* Symbol: pixAddBlackOrWhiteBorder */
/* Demangled: pixAddBlackOrWhiteBorder */
int pixAddBlackOrWhiteBorder(void);

/* Symbol: pixRankBinByStrip */
/* Demangled: pixRankBinByStrip */
int pixRankBinByStrip(void);

/* Symbol: boxaLinearFit */
/* Demangled: boxaLinearFit */
int boxaLinearFit(void);

/* Symbol: pixcmapAddNearestColor */
/* Demangled: pixcmapAddNearestColor */
int pixcmapAddNearestColor(void);

/* Symbol: l_dnaCreate */
/* Demangled: l_dnaCreate */
int l_dnaCreate(void);

/* Symbol: selectComposableSels */
/* Demangled: selectComposableSels */
int selectComposableSels(void);

/* Symbol: sarraySort */
/* Demangled: sarraySort */
int sarraySort(void);

/* Symbol: recogaCreate */
/* Demangled: recogaCreate */
int recogaCreate(void);

/* Symbol: fpixaGetFPixDimensions */
/* Demangled: fpixaGetFPixDimensions */
int fpixaGetFPixDimensions(void);

/* Symbol: numaaGetNumaCount */
/* Demangled: numaaGetNumaCount */
int numaaGetNumaCount(void);

/* Symbol: dewarpWriteStream */
/* Demangled: dewarpWriteStream */
int dewarpWriteStream(void);

/* Symbol: numaGetPartialSums */
/* Demangled: numaGetPartialSums */
int numaGetPartialSums(void);

/* Symbol: pixRowStats */
/* Demangled: pixRowStats */
int pixRowStats(void);

/* Symbol: pixaSelectByAreaFraction */
/* Demangled: pixaSelectByAreaFraction */
int pixaSelectByAreaFraction(void);

/* Symbol: pixDeskewBarcode */
/* Demangled: pixDeskewBarcode */
int pixDeskewBarcode(void);

/* Symbol: scaleToGray8Low */
/* Demangled: scaleToGray8Low */
int scaleToGray8Low(void);

/* Symbol: pixCorrelationScore */
/* Demangled: pixCorrelationScore */
int pixCorrelationScore(void);

/* Symbol: ptraConcatenatePdfToData */
/* Demangled: ptraConcatenatePdfToData */
int ptraConcatenatePdfToData(void);

/* Symbol: pixaccGetOffset */
/* Demangled: pixaccGetOffset */
int pixaccGetOffset(void);

/* Symbol: pixWriteMemTiffCustom */
/* Demangled: pixWriteMemTiffCustom */
int pixWriteMemTiffCustom(void);

/* Symbol: ptaContainsPt */
/* Demangled: ptaContainsPt */
int ptaContainsPt(void);

/* Symbol: pixaccFinal */
/* Demangled: pixaccFinal */
int pixaccFinal(void);

/* Symbol: pixacompGetOffset */
/* Demangled: pixacompGetOffset */
int pixacompGetOffset(void);

/* Symbol: listJoin */
/* Demangled: listJoin */
int listJoin(void);

/* Symbol: l_asetGetLast */
/* Demangled: l_asetGetLast */
int l_asetGetLast(void);

/* Symbol: pixcmapGetRankIntensity */
/* Demangled: pixcmapGetRankIntensity */
int pixcmapGetRankIntensity(void);

/* Symbol: ditherTo2bppLineLow */
/* Demangled: ditherTo2bppLineLow */
int ditherTo2bppLineLow(void);

/* Symbol: pixClipRectangles */
/* Demangled: pixClipRectangles */
int pixClipRectangles(void);

/* Symbol: nextOnPixelInRaster */
/* Demangled: nextOnPixelInRaster */
int nextOnPixelInRaster(void);

/* Symbol: pixelShiftByComponent */
/* Demangled: pixelShiftByComponent */
int pixelShiftByComponent(void);

/* Symbol: pixGetDifferenceHistogram */
/* Demangled: pixGetDifferenceHistogram */
int pixGetDifferenceHistogram(void);

/* Symbol: pixThresholdGrayArb */
/* Demangled: pixThresholdGrayArb */
int pixThresholdGrayArb(void);

/* Symbol: l_pngSetReadStrip16To8 */
/* Demangled: l_pngSetReadStrip16To8 */
int l_pngSetReadStrip16To8(void);

/* Symbol: pixRasteropHip */
/* Demangled: pixRasteropHip */
int pixRasteropHip(void);

/* Symbol: selRead */
/* Demangled: selRead */
int selRead(void);

/* Symbol: strcodeFinalize */
/* Demangled: strcodeFinalize */
int strcodeFinalize(void);

/* Symbol: Java_com_googlecode_leptonica_android_Pixa_nativeReplacePix */
/* Demangled: Java_com_googlecode_leptonica_android_Pixa_nativeReplacePix */
int Java_com_googlecode_leptonica_android_Pixa_nativeReplacePix(void);

/* Symbol: l_amapSize */
/* Demangled: l_amapSize */
int l_amapSize(void);

/* Symbol: pixcmapReadStream */
/* Demangled: pixcmapReadStream */
int pixcmapReadStream(void);

/* Symbol: pixComparePhotoRegionsByHisto */
/* Demangled: pixComparePhotoRegionsByHisto */
int pixComparePhotoRegionsByHisto(void);

/* Symbol: ptaUnionByHash */
/* Demangled: ptaUnionByHash */
int ptaUnionByHash(void);

/* Symbol: stringFindSubstr */
/* Demangled: stringFindSubstr */
int stringFindSubstr(void);

/* Symbol: pixScaleGray2xLIDither */
/* Demangled: pixScaleGray2xLIDither */
int pixScaleGray2xLIDither(void);

/* Symbol: boxaReadStream */
/* Demangled: boxaReadStream */
int boxaReadStream(void);

/* Symbol: boxaaInitFull */
/* Demangled: boxaaInitFull */
int boxaaInitFull(void);

/* Symbol: l_byteaGetData */
/* Demangled: l_byteaGetData */
int l_byteaGetData(void);

/* Symbol: pixacompGetCount */
/* Demangled: pixacompGetCount */
int pixacompGetCount(void);

/* Symbol: ccbaDisplayBorder */
/* Demangled: ccbaDisplayBorder */
int ccbaDisplayBorder(void);

/* Symbol: ccbaRead */
/* Demangled: ccbaRead */
int ccbaRead(void);

/* Symbol: Java_com_googlecode_leptonica_android_Pix_nativeCopy */
/* Demangled: Java_com_googlecode_leptonica_android_Pix_nativeCopy */
int Java_com_googlecode_leptonica_android_Pix_nativeCopy(void);

/* Symbol: pixSetInputFormat */
/* Demangled: pixSetInputFormat */
int pixSetInputFormat(void);

/* Symbol: pixaEqual */
/* Demangled: pixaEqual */
int pixaEqual(void);

/* Symbol: Java_com_googlecode_leptonica_android_AdaptiveMap_nativePixContrastNorm */
/* Demangled: Java_com_googlecode_leptonica_android_AdaptiveMap_nativePixContrastNorm */
int Java_com_googlecode_leptonica_android_AdaptiveMap_nativePixContrastNorm(void);

/* Symbol: pixExtendByReplication */
/* Demangled: pixExtendByReplication */
int pixExtendByReplication(void);

/* Symbol: numaGetMedianVariation */
/* Demangled: numaGetMedianVariation */
int numaGetMedianVariation(void);

/* Symbol: pixConvertRGBToHSV */
/* Demangled: pixConvertRGBToHSV */
int pixConvertRGBToHSV(void);

/* Symbol: pixCompareRGB */
/* Demangled: pixCompareRGB */
int pixCompareRGB(void);

/* Symbol: pixaFindPerimToAreaRatio */
/* Demangled: pixaFindPerimToAreaRatio */
int pixaFindPerimToAreaRatio(void);

/* Symbol: recogCreateDid */
/* Demangled: recogCreateDid */
int recogCreateDid(void);

/* Symbol: pixaJoin */
/* Demangled: pixaJoin */
int pixaJoin(void);

/* Symbol: boxConvertToPta */
/* Demangled: boxConvertToPta */
int boxConvertToPta(void);

/* Symbol: generatePtaGrid */
/* Demangled: generatePtaGrid */
int generatePtaGrid(void);

/* Symbol: pixCloseBrickDwa */
/* Demangled: pixCloseBrickDwa */
int pixCloseBrickDwa(void);

/* Symbol: numaWindowedMeanSquare */
/* Demangled: numaWindowedMeanSquare */
int numaWindowedMeanSquare(void);

/* Symbol: Java_com_googlecode_leptonica_android_Box_nativeCreate */
/* Demangled: Java_com_googlecode_leptonica_android_Box_nativeCreate */
int Java_com_googlecode_leptonica_android_Box_nativeCreate(void);

/* Symbol: stringReverse */
/* Demangled: stringReverse */
int stringReverse(void);

/* Symbol: pixReadMemBmp */
/* Demangled: pixReadMemBmp */
int pixReadMemBmp(void);

/* Symbol: boxaaReadStream */
/* Demangled: boxaaReadStream */
int boxaaReadStream(void);

/* Symbol: pixcmapGetMinDepth */
/* Demangled: pixcmapGetMinDepth */
int pixcmapGetMinDepth(void);

/* Symbol: pixColorSegmentRemoveColors */
/* Demangled: pixColorSegmentRemoveColors */
int pixColorSegmentRemoveColors(void);

/* Symbol: fpixConvolve */
/* Demangled: fpixConvolve */
int fpixConvolve(void);

/* Symbol: gplotstylenames */
/* Demangled: gplotstylenames */
extern void* gplotstylenames;

/* Symbol: pixRemoveBorderToSize */
/* Demangled: pixRemoveBorderToSize */
int pixRemoveBorderToSize(void);

/* Symbol: numaConvertToDna */
/* Demangled: numaConvertToDna */
int numaConvertToDna(void);

/* Symbol: Java_com_googlecode_leptonica_android_JpegIO_nativeCompressToJpeg */
/* Demangled: Java_com_googlecode_leptonica_android_JpegIO_nativeCompressToJpeg */
int Java_com_googlecode_leptonica_android_JpegIO_nativeCompressToJpeg(void);

/* Symbol: pixGenPhotoHistos */
/* Demangled: pixGenPhotoHistos */
int pixGenPhotoHistos(void);

/* Symbol: pixGetDifferenceStats */
/* Demangled: pixGetDifferenceStats */
int pixGetDifferenceStats(void);

/* Symbol: dewarpFindHorizDisparity */
/* Demangled: dewarpFindHorizDisparity */
int dewarpFindHorizDisparity(void);

/* Symbol: pixaDisplayTiledAndScaled */
/* Demangled: pixaDisplayTiledAndScaled */
int pixaDisplayTiledAndScaled(void);

/* Symbol: numaaGetPtrArray */
/* Demangled: numaaGetPtrArray */
int numaaGetPtrArray(void);

/* Symbol: pixFractionFgInMask */
/* Demangled: pixFractionFgInMask */
int pixFractionFgInMask(void);

/* Symbol: recogWriteStream */
/* Demangled: recogWriteStream */
int recogWriteStream(void);

/* Symbol: pixFindHistoPeaksHSV */
/* Demangled: pixFindHistoPeaksHSV */
int pixFindHistoPeaksHSV(void);

/* Symbol: pixConvolveRGBSep */
/* Demangled: pixConvolveRGBSep */
int pixConvolveRGBSep(void);

/* Symbol: l_dnaSetParameters */
/* Demangled: l_dnaSetParameters */
int l_dnaSetParameters(void);

/* Symbol: pixCopyBorder */
/* Demangled: pixCopyBorder */
int pixCopyBorder(void);

/* Symbol: recogTrainFromBoot */
/* Demangled: recogTrainFromBoot */
int recogTrainFromBoot(void);

/* Symbol: pixWriteAutoFormat */
/* Demangled: pixWriteAutoFormat */
int pixWriteAutoFormat(void);

/* Symbol: pixBilinearPtaColor */
/* Demangled: pixBilinearPtaColor */
int pixBilinearPtaColor(void);

/* Symbol: boxaaDestroy */
/* Demangled: boxaaDestroy */
int boxaaDestroy(void);

/* Symbol: numaSplitDistribution */
/* Demangled: numaSplitDistribution */
int numaSplitDistribution(void);

/* Symbol: pixaDisplayUnsplit */
/* Demangled: pixaDisplayUnsplit */
int pixaDisplayUnsplit(void);

/* Symbol: pixacompAddBox */
/* Demangled: pixacompAddBox */
int pixacompAddBox(void);

/* Symbol: pixSimpleCaptcha */
/* Demangled: pixSimpleCaptcha */
int pixSimpleCaptcha(void);

/* Symbol: boxaaWriteStream */
/* Demangled: boxaaWriteStream */
int boxaaWriteStream(void);

/* Symbol: selSetElement */
/* Demangled: selSetElement */
int selSetElement(void);

/* Symbol: selCreate */
/* Demangled: selCreate */
int selCreate(void);

/* Symbol: pixGetRGBComponent */
/* Demangled: pixGetRGBComponent */
int pixGetRGBComponent(void);

/* Symbol: ptraCreate */
/* Demangled: ptraCreate */
int ptraCreate(void);

/* Symbol: pixTranslate */
/* Demangled: pixTranslate */
int pixTranslate(void);

/* Symbol: stringSplitOnToken */
/* Demangled: stringSplitOnToken */
int stringSplitOnToken(void);

/* Symbol: fhmtautogen */
/* Demangled: fhmtautogen */
int fhmtautogen(void);

/* Symbol: saConcatenatePdfToData */
/* Demangled: saConcatenatePdfToData */
int saConcatenatePdfToData(void);

/* Symbol: pixaConstrainedSelect */
/* Demangled: pixaConstrainedSelect */
int pixaConstrainedSelect(void);

/* Symbol: pmsCustomAlloc */
/* Demangled: pmsCustomAlloc */
int pmsCustomAlloc(void);

/* Symbol: boxDestroy */
/* Demangled: boxDestroy */
int boxDestroy(void);

/* Symbol: linearInterpolatePixelGray */
/* Demangled: linearInterpolatePixelGray */
int linearInterpolatePixelGray(void);

/* Symbol: pixExpandBinaryPower2 */
/* Demangled: pixExpandBinaryPower2 */
int pixExpandBinaryPower2(void);

/* Symbol: fpixConvolveSep */
/* Demangled: fpixConvolveSep */
int fpixConvolveSep(void);

/* Symbol: pixaaGetBoxa */
/* Demangled: pixaaGetBoxa */
int pixaaGetBoxa(void);

/* Symbol: pixFindSkewSweepAndSearchScore */
/* Demangled: pixFindSkewSweepAndSearchScore */
int pixFindSkewSweepAndSearchScore(void);

/* Symbol: sudokuReadFile */
/* Demangled: sudokuReadFile */
int sudokuReadFile(void);

/* Symbol: pixacompDisplayTiledAndScaled */
/* Demangled: pixacompDisplayTiledAndScaled */
int pixacompDisplayTiledAndScaled(void);

/* Symbol: boxaContainedInBox */
/* Demangled: boxaContainedInBox */
int boxaContainedInBox(void);

/* Symbol: concatenatePdf */
/* Demangled: concatenatePdf */
int concatenatePdf(void);

/* Symbol: lept_rmfile */
/* Demangled: lept_rmfile */
int lept_rmfile(void);

/* Symbol: cidConvertToPdfData */
/* Demangled: cidConvertToPdfData */
int cidConvertToPdfData(void);

/* Symbol: pixaInsertPix */
/* Demangled: pixaInsertPix */
int pixaInsertPix(void);

/* Symbol: recogAverageSamples */
/* Demangled: recogAverageSamples */
int recogAverageSamples(void);

/* Symbol: Java_com_googlecode_leptonica_android_Pixa_nativeCopy */
/* Demangled: Java_com_googlecode_leptonica_android_Pixa_nativeCopy */
int Java_com_googlecode_leptonica_android_Pixa_nativeCopy(void);

/* Symbol: boxaExtendArrayToSize */
/* Demangled: boxaExtendArrayToSize */
int boxaExtendArrayToSize(void);

/* Symbol: pixWriteMemPdf */
/* Demangled: pixWriteMemPdf */
int pixWriteMemPdf(void);

/* Symbol: l_pdfSetG4ImageMask */
/* Demangled: l_pdfSetG4ImageMask */
int l_pdfSetG4ImageMask(void);

/* Symbol: pixSetWidth */
/* Demangled: pixSetWidth */
int pixSetWidth(void);

/* Symbol: recogReadMem */
/* Demangled: recogReadMem */
int recogReadMem(void);

/* Symbol: selaAddHitMiss */
/* Demangled: selaAddHitMiss */
int selaAddHitMiss(void);

/* Symbol: pixSetInRectArbitrary */
/* Demangled: pixSetInRectArbitrary */
int pixSetInRectArbitrary(void);

/* Symbol: l_dnaaGetCount */
/* Demangled: l_dnaaGetCount */
int l_dnaaGetCount(void);

/* Symbol: pixcmapToArrays */
/* Demangled: pixcmapToArrays */
int pixcmapToArrays(void);

/* Symbol: l_dnaSetCount */
/* Demangled: l_dnaSetCount */
int l_dnaSetCount(void);

/* Symbol: fhmtautogen1 */
/* Demangled: fhmtautogen1 */
int fhmtautogen1(void);

/* Symbol: pixCropToMatch */
/* Demangled: pixCropToMatch */
int pixCropToMatch(void);

/* Symbol: stringConcatNew */
/* Demangled: stringConcatNew */
int stringConcatNew(void);

/* Symbol: findNextLargerPrime */
/* Demangled: findNextLargerPrime */
int findNextLargerPrime(void);

/* Symbol: pixResizeImageData */
/* Demangled: pixResizeImageData */
int pixResizeImageData(void);

/* Symbol: fhmtautogen2 */
/* Demangled: fhmtautogen2 */
int fhmtautogen2(void);

/* Symbol: fhmtgen_low_1 */
/* Demangled: fhmtgen_low_1 */
int fhmtgen_low_1(void);

/* Symbol: generatePtaBoxa */
/* Demangled: generatePtaBoxa */
int generatePtaBoxa(void);

/* Symbol: Java_com_googlecode_leptonica_android_Pix_nativeSetPixel */
/* Demangled: Java_com_googlecode_leptonica_android_Pix_nativeSetPixel */
int Java_com_googlecode_leptonica_android_Pix_nativeSetPixel(void);

/* Symbol: fpixRead */
/* Demangled: fpixRead */
int fpixRead(void);

/* Symbol: pixFindOverlapFraction */
/* Demangled: pixFindOverlapFraction */
int pixFindOverlapFraction(void);

/* Symbol: pixWriteMem */
/* Demangled: pixWriteMem */
int pixWriteMem(void);

/* Symbol: pixcompWriteStreamInfo */
/* Demangled: pixcompWriteStreamInfo */
int pixcompWriteStreamInfo(void);

/* Symbol: pixTilingGetCount */
/* Demangled: pixTilingGetCount */
int pixTilingGetCount(void);

/* Symbol: pixProjectiveColor */
/* Demangled: pixProjectiveColor */
int pixProjectiveColor(void);

/* Symbol: boxaaQuadtreeRegions */
/* Demangled: boxaaQuadtreeRegions */
int boxaaQuadtreeRegions(void);

/* Symbol: pixScaleBySamplingToSize */
/* Demangled: pixScaleBySamplingToSize */
int pixScaleBySamplingToSize(void);

/* Symbol: pixColorGrayMasked */
/* Demangled: pixColorGrayMasked */
int pixColorGrayMasked(void);

/* Symbol: fpixaAddFPix */
/* Demangled: fpixaAddFPix */
int fpixaAddFPix(void);

/* Symbol: thresholdTo4bppLow */
/* Demangled: thresholdTo4bppLow */
int thresholdTo4bppLow(void);

/* Symbol: numaaReadStream */
/* Demangled: numaaReadStream */
int numaaReadStream(void);

/* Symbol: writeMultipageTiff */
/* Demangled: writeMultipageTiff */
int writeMultipageTiff(void);

/* Symbol: dewarpaWrite */
/* Demangled: dewarpaWrite */
int dewarpaWrite(void);

/* Symbol: recogRemoveOutliers */
/* Demangled: recogRemoveOutliers */
int recogRemoveOutliers(void);

/* Symbol: Java_com_googlecode_leptonica_android_Pix_nativeGetInputFormat */
/* Demangled: Java_com_googlecode_leptonica_android_Pix_nativeGetInputFormat */
int Java_com_googlecode_leptonica_android_Pix_nativeGetInputFormat(void);

/* Symbol: rchExtract */
/* Demangled: rchExtract */
int rchExtract(void);

/* Symbol: boxaSort2dByIndex */
/* Demangled: boxaSort2dByIndex */
int boxaSort2dByIndex(void);

/* Symbol: pixGetWordsInTextlines */
/* Demangled: pixGetWordsInTextlines */
int pixGetWordsInTextlines(void);

/* Symbol: pixGetBinnedComponentRange */
/* Demangled: pixGetBinnedComponentRange */
int pixGetBinnedComponentRange(void);

/* Symbol: selaCreateFromFile */
/* Demangled: selaCreateFromFile */
int selaCreateFromFile(void);

/* Symbol: Java_com_googlecode_leptonica_android_Pixa_nativeWriteToFileRandomCmap */
/* Demangled: Java_com_googlecode_leptonica_android_Pixa_nativeWriteToFileRandomCmap */
int Java_com_googlecode_leptonica_android_Pixa_nativeWriteToFileRandomCmap(void);

/* Symbol: numaFindExtrema */
/* Demangled: numaFindExtrema */
int numaFindExtrema(void);

/* Symbol: sarrayCreateLinesFromString */
/* Demangled: sarrayCreateLinesFromString */
int sarrayCreateLinesFromString(void);

/* Symbol: convertToPSEmbed */
/* Demangled: convertToPSEmbed */
int convertToPSEmbed(void);

/* Symbol: l_compareKeys */
/* Demangled: l_compareKeys */
int l_compareKeys(void);

/* Symbol: boxaGetCount */
/* Demangled: boxaGetCount */
int boxaGetCount(void);

/* Symbol: pixcmapGetRangeValues */
/* Demangled: pixcmapGetRangeValues */
int pixcmapGetRangeValues(void);

/* Symbol: strcodeCreate */
/* Demangled: strcodeCreate */
int strcodeCreate(void);

/* Symbol: pixGetPixel */
/* Demangled: pixGetPixel */
int pixGetPixel(void);

/* Symbol: boxaaWriteMem */
/* Demangled: boxaaWriteMem */
int boxaaWriteMem(void);

/* Symbol: pixAbsDiffInRect */
/* Demangled: pixAbsDiffInRect */
int pixAbsDiffInRect(void);

/* Symbol: fpixCopyResolution */
/* Demangled: fpixCopyResolution */
int fpixCopyResolution(void);

/* Symbol: pixSetHeight */
/* Demangled: pixSetHeight */
int pixSetHeight(void);

/* Symbol: pixSelectByWidthHeightRatio */
/* Demangled: pixSelectByWidthHeightRatio */
int pixSelectByWidthHeightRatio(void);

/* Symbol: ptaGetSortIndex */
/* Demangled: ptaGetSortIndex */
int ptaGetSortIndex(void);

/* Symbol: pixMultMatrixColor */
/* Demangled: pixMultMatrixColor */
int pixMultMatrixColor(void);

/* Symbol: pixConvert4To8 */
/* Demangled: pixConvert4To8 */
int pixConvert4To8(void);

/* Symbol: pixRotateAMColorFast */
/* Demangled: pixRotateAMColorFast */
int pixRotateAMColorFast(void);

/* Symbol: numaEqualizeTRC */
/* Demangled: numaEqualizeTRC */
int numaEqualizeTRC(void);

/* Symbol: pixGenerateMaskByBand */
/* Demangled: pixGenerateMaskByBand */
int pixGenerateMaskByBand(void);

/* Symbol: l_asetGetFirst */
/* Demangled: l_asetGetFirst */
int l_asetGetFirst(void);

/* Symbol: numaCreateFromString */
/* Demangled: numaCreateFromString */
int numaCreateFromString(void);

/* Symbol: sarrayConvertFilesFittedToPS */
/* Demangled: sarrayConvertFilesFittedToPS */
int sarrayConvertFilesFittedToPS(void);

/* Symbol: pixReadStreamTiff */
/* Demangled: pixReadStreamTiff */
int pixReadStreamTiff(void);

/* Symbol: sarrayAppend */
/* Demangled: sarrayAppend */
int sarrayAppend(void);

/* Symbol: l_asetCreateFromSarray */
/* Demangled: l_asetCreateFromSarray */
int l_asetCreateFromSarray(void);

/* Symbol: numaSortGeneral */
/* Demangled: numaSortGeneral */
int numaSortGeneral(void);

/* Symbol: numaGetSumOnInterval */
/* Demangled: numaGetSumOnInterval */
int numaGetSumOnInterval(void);

/* Symbol: pixaccDestroy */
/* Demangled: pixaccDestroy */
int pixaccDestroy(void);

/* Symbol: pixConnCompPixa */
/* Demangled: pixConnCompPixa */
int pixConnCompPixa(void);

/* Symbol: fmorphautogen1 */
/* Demangled: fmorphautogen1 */
int fmorphautogen1(void);

/* Symbol: dpixClone */
/* Demangled: dpixClone */
int dpixClone(void);

/* Symbol: pixMakeFrameMask */
/* Demangled: pixMakeFrameMask */
int pixMakeFrameMask(void);

/* Symbol: rchaDestroy */
/* Demangled: rchaDestroy */
int rchaDestroy(void);

/* Symbol: l_setDataByte */
/* Demangled: l_setDataByte */
int l_setDataByte(void);

/* Symbol: fmorphautogen2 */
/* Demangled: fmorphautogen2 */
int fmorphautogen2(void);

/* Symbol: gplotWrite */
/* Demangled: gplotWrite */
int gplotWrite(void);

/* Symbol: convertImageDataToPdf */
/* Demangled: convertImageDataToPdf */
int convertImageDataToPdf(void);

/* Symbol: pixaCreateFromPixacomp */
/* Demangled: pixaCreateFromPixacomp */
int pixaCreateFromPixacomp(void);

/* Symbol: ptaGetRefcount */
/* Demangled: ptaGetRefcount */
int ptaGetRefcount(void);

/* Symbol: pixAddAlphaToBlend */
/* Demangled: pixAddAlphaToBlend */
int pixAddAlphaToBlend(void);

/* Symbol: bmfGetPix */
/* Demangled: bmfGetPix */
int bmfGetPix(void);

/* Symbol: boxaExtractAsPta */
/* Demangled: boxaExtractAsPta */
int boxaExtractAsPta(void);

/* Symbol: convertRGBToXYZ */
/* Demangled: convertRGBToXYZ */
int convertRGBToXYZ(void);

/* Symbol: l_dnaGetIArray */
/* Demangled: l_dnaGetIArray */
int l_dnaGetIArray(void);

/* Symbol: pixRenderContours */
/* Demangled: pixRenderContours */
int pixRenderContours(void);

/* Symbol: ccbaReadStream */
/* Demangled: ccbaReadStream */
int ccbaReadStream(void);

/* Symbol: dewarpaWriteStream */
/* Demangled: dewarpaWriteStream */
int dewarpaWriteStream(void);

/* Symbol: scaleToGray3Low */
/* Demangled: scaleToGray3Low */
int scaleToGray3Low(void);

/* Symbol: fpixaGetData */
/* Demangled: fpixaGetData */
int fpixaGetData(void);

/* Symbol: quadtreeMaxLevels */
/* Demangled: quadtreeMaxLevels */
int quadtreeMaxLevels(void);

/* Symbol: readHeaderMemWebP */
/* Demangled: readHeaderMemWebP */
int readHeaderMemWebP(void);

/* Symbol: pixHShearIP */
/* Demangled: pixHShearIP */
int pixHShearIP(void);

/* Symbol: boxaaGetCount */
/* Demangled: boxaaGetCount */
int boxaaGetCount(void);

/* Symbol: pixColorFraction */
/* Demangled: pixColorFraction */
int pixColorFraction(void);

/* Symbol: numaDifferentiateInterval */
/* Demangled: numaDifferentiateInterval */
int numaDifferentiateInterval(void);

/* Symbol: pixBlendCmap */
/* Demangled: pixBlendCmap */
int pixBlendCmap(void);

/* Symbol: pixApplyVariableGrayMap */
/* Demangled: pixApplyVariableGrayMap */
int pixApplyVariableGrayMap(void);

/* Symbol: nextOnPixelInRasterLow */
/* Demangled: nextOnPixelInRasterLow */
int nextOnPixelInRasterLow(void);

/* Symbol: sarrayJoin */
/* Demangled: sarrayJoin */
int sarrayJoin(void);

/* Symbol: pixaClipToPix */
/* Demangled: pixaClipToPix */
int pixaClipToPix(void);

/* Symbol: convertOnLittleEnd32 */
/* Demangled: convertOnLittleEnd32 */
int convertOnLittleEnd32(void);

/* Symbol: recogCorrelationBestRow */
/* Demangled: recogCorrelationBestRow */
int recogCorrelationBestRow(void);

/* Symbol: l_chooseDisplayProg */
/* Demangled: l_chooseDisplayProg */
int l_chooseDisplayProg(void);

/* Symbol: getLogBase2 */
/* Demangled: getLogBase2 */
int getLogBase2(void);

/* Symbol: pixcmapAddBlackOrWhite */
/* Demangled: pixcmapAddBlackOrWhite */
int pixcmapAddBlackOrWhite(void);

/* Symbol: pixOctreeQuantNumColors */
/* Demangled: pixOctreeQuantNumColors */
int pixOctreeQuantNumColors(void);

/* Symbol: pixSetRGBPixel */
/* Demangled: pixSetRGBPixel */
int pixSetRGBPixel(void);

/* Symbol: l_generateCIData */
/* Demangled: l_generateCIData */
int l_generateCIData(void);

/* Symbol: arrayFindSequence */
/* Demangled: arrayFindSequence */
int arrayFindSequence(void);

/* Symbol: recogSetScaling */
/* Demangled: recogSetScaling */
int recogSetScaling(void);

/* Symbol: pixScaleColorLI */
/* Demangled: pixScaleColorLI */
int pixScaleColorLI(void);

/* Symbol: lqueueAdd */
/* Demangled: lqueueAdd */
int lqueueAdd(void);

/* Symbol: pixFindSkewOrthogonalRange */
/* Demangled: pixFindSkewOrthogonalRange */
int pixFindSkewOrthogonalRange(void);

/* Symbol: pixOctreeColorQuantGeneral */
/* Demangled: pixOctreeColorQuantGeneral */
int pixOctreeColorQuantGeneral(void);

/* Symbol: selCreateFromPix */
/* Demangled: selCreateFromPix */
int selCreateFromPix(void);

/* Symbol: pixacompRead */
/* Demangled: pixacompRead */
int pixacompRead(void);

/* Symbol: pixConvertGrayToColormap */
/* Demangled: pixConvertGrayToColormap */
int pixConvertGrayToColormap(void);

/* Symbol: ptaaReadMem */
/* Demangled: ptaaReadMem */
int ptaaReadMem(void);

/* Symbol: pixSnapColor */
/* Demangled: pixSnapColor */
int pixSnapColor(void);

/* Symbol: pixGrayQuantFromCmap */
/* Demangled: pixGrayQuantFromCmap */
int pixGrayQuantFromCmap(void);

/* Symbol: pixErodeCompBrickExtendDwa */
/* Demangled: pixErodeCompBrickExtendDwa */
int pixErodeCompBrickExtendDwa(void);

/* Symbol: l_generateG4Data */
/* Demangled: l_generateG4Data */
int l_generateG4Data(void);

/* Symbol: convertBinaryToGrayCode */
/* Demangled: convertBinaryToGrayCode */
int convertBinaryToGrayCode(void);

/* Symbol: Java_com_googlecode_leptonica_android_Pix_nativeCreatePix */
/* Demangled: Java_com_googlecode_leptonica_android_Pix_nativeCreatePix */
int Java_com_googlecode_leptonica_android_Pix_nativeCreatePix(void);

/* Symbol: fpixaCreate */
/* Demangled: fpixaCreate */
int fpixaCreate(void);

/* Symbol: fpixAffine */
/* Demangled: fpixAffine */
int fpixAffine(void);

/* Symbol: kernelSetElement */
/* Demangled: kernelSetElement */
int kernelSetElement(void);

/* Symbol: pixSnapColorCmap */
/* Demangled: pixSnapColorCmap */
int pixSnapColorCmap(void);

/* Symbol: pixConvertTo8Or32 */
/* Demangled: pixConvertTo8Or32 */
int pixConvertTo8Or32(void);

/* Symbol: pixCloseCompBrickExtendDwa */
/* Demangled: pixCloseCompBrickExtendDwa */
int pixCloseCompBrickExtendDwa(void);

/* Symbol: numaConvertToSarray */
/* Demangled: numaConvertToSarray */
int numaConvertToSarray(void);

/* Symbol: pixaInitFull */
/* Demangled: pixaInitFull */
int pixaInitFull(void);

/* Symbol: recogSetPadParams */
/* Demangled: recogSetPadParams */
int recogSetPadParams(void);

/* Symbol: sarrayRemoveString */
/* Demangled: sarrayRemoveString */
int sarrayRemoveString(void);

/* Symbol: jbDataRender */
/* Demangled: jbDataRender */
int jbDataRender(void);

/* Symbol: pixcmapShiftByComponent */
/* Demangled: pixcmapShiftByComponent */
int pixcmapShiftByComponent(void);

/* Symbol: l_dnaaGetDna */
/* Demangled: l_dnaaGetDna */
int l_dnaaGetDna(void);

/* Symbol: ptraGetActualCount */
/* Demangled: ptraGetActualCount */
int ptraGetActualCount(void);

/* Symbol: pixQuadraticVShear */
/* Demangled: pixQuadraticVShear */
int pixQuadraticVShear(void);

/* Symbol: makePixelCentroidTab8 */
/* Demangled: makePixelCentroidTab8 */
int makePixelCentroidTab8(void);

/* Symbol: ptraGetPtrToItem */
/* Demangled: ptraGetPtrToItem */
int ptraGetPtrToItem(void);

/* Symbol: pixMorphSequenceByComponent */
/* Demangled: pixMorphSequenceByComponent */
int pixMorphSequenceByComponent(void);

/* Symbol: l_setNeutralBoostVal */
/* Demangled: l_setNeutralBoostVal */
int l_setNeutralBoostVal(void);

/* Symbol: pixGetXRes */
/* Demangled: pixGetXRes */
int pixGetXRes(void);

/* Symbol: l_dnaaAddDna */
/* Demangled: l_dnaaAddDna */
int l_dnaaAddDna(void);

/* Symbol: pixOpenCompBrick */
/* Demangled: pixOpenCompBrick */
int pixOpenCompBrick(void);

/* Symbol: pixaaDisplay */
/* Demangled: pixaaDisplay */
int pixaaDisplay(void);

/* Symbol: pixcompCopy */
/* Demangled: pixcompCopy */
int pixcompCopy(void);

/* Symbol: pixModifyStrokeWidth */
/* Demangled: pixModifyStrokeWidth */
int pixModifyStrokeWidth(void);

/* Symbol: lept_isPrime */
/* Demangled: lept_isPrime */
int lept_isPrime(void);

/* Symbol: pixcmapGetIndex */
/* Demangled: pixcmapGetIndex */
int pixcmapGetIndex(void);

/* Symbol: pixCorrelationBinary */
/* Demangled: pixCorrelationBinary */
int pixCorrelationBinary(void);

/* Symbol: pixDitherToBinarySpec */
/* Demangled: pixDitherToBinarySpec */
int pixDitherToBinarySpec(void);

/* Symbol: pixScaleBinary */
/* Demangled: pixScaleBinary */
int pixScaleBinary(void);

/* Symbol: pixMaskOverColorPixels */
/* Demangled: pixMaskOverColorPixels */
int pixMaskOverColorPixels(void);

/* Symbol: numaaWriteStream */
/* Demangled: numaaWriteStream */
int numaaWriteStream(void);

/* Symbol: pixacompCreateWithInit */
/* Demangled: pixacompCreateWithInit */
int pixacompCreateWithInit(void);

/* Symbol: selaAddCrossJunctions */
/* Demangled: selaAddCrossJunctions */
int selaAddCrossJunctions(void);

/* Symbol: pixConvertRGBToYUV */
/* Demangled: pixConvertRGBToYUV */
int pixConvertRGBToYUV(void);

/* Symbol: l_dnaHashDestroy */
/* Demangled: l_dnaHashDestroy */
int l_dnaHashDestroy(void);

/* Symbol: dpixCopyResolution */
/* Demangled: dpixCopyResolution */
int dpixCopyResolution(void);

/* Symbol: dpixWrite */
/* Demangled: dpixWrite */
int dpixWrite(void);

/* Symbol: pixReadBarcodeWidths */
/* Demangled: pixReadBarcodeWidths */
int pixReadBarcodeWidths(void);

/* Symbol: recogaReadMem */
/* Demangled: recogaReadMem */
int recogaReadMem(void);

/* Symbol: recogIdentifyPixa */
/* Demangled: recogIdentifyPixa */
int recogIdentifyPixa(void);

/* Symbol: pixColorGray */
/* Demangled: pixColorGray */
int pixColorGray(void);

/* Symbol: l_rbtreeLookup */
/* Demangled: l_rbtreeLookup */
int l_rbtreeLookup(void);

/* Symbol: numaGetSpanValues */
/* Demangled: numaGetSpanValues */
int numaGetSpanValues(void);

/* Symbol: rasteropVipLow */
/* Demangled: rasteropVipLow */
int rasteropVipLow(void);

/* Symbol: boxaaReadFromFiles */
/* Demangled: boxaaReadFromFiles */
int boxaaReadFromFiles(void);

/* Symbol: boxaReconcileEvenOddHeight */
/* Demangled: boxaReconcileEvenOddHeight */
int boxaReconcileEvenOddHeight(void);

/* Symbol: lstackRemove */
/* Demangled: lstackRemove */
int lstackRemove(void);

/* Symbol: l_dnaCreateFromIArray */
/* Demangled: l_dnaCreateFromIArray */
int l_dnaCreateFromIArray(void);

/* Symbol: pixaFindPerimSizeRatio */
/* Demangled: pixaFindPerimSizeRatio */
int pixaFindPerimSizeRatio(void);

/* Symbol: rotateAMColorFastLow */
/* Demangled: rotateAMColorFastLow */
int rotateAMColorFastLow(void);

/* Symbol: pixAddConstantGray */
/* Demangled: pixAddConstantGray */
int pixAddConstantGray(void);

/* Symbol: listFindElement */
/* Demangled: listFindElement */
int listFindElement(void);

/* Symbol: numaLogicalOp */
/* Demangled: numaLogicalOp */
int numaLogicalOp(void);

/* Symbol: pixStretchHorizontalLI */
/* Demangled: pixStretchHorizontalLI */
int pixStretchHorizontalLI(void);

/* Symbol: bbufferRead */
/* Demangled: bbufferRead */
int bbufferRead(void);

/* Symbol: pixSetBorderVal */
/* Demangled: pixSetBorderVal */
int pixSetBorderVal(void);

/* Symbol: pixSetMaskedGeneral */
/* Demangled: pixSetMaskedGeneral */
int pixSetMaskedGeneral(void);

/* Symbol: sarrayParseRange */
/* Demangled: sarrayParseRange */
int sarrayParseRange(void);

/* Symbol: l_rbtreeGetNext */
/* Demangled: l_rbtreeGetNext */
int l_rbtreeGetNext(void);

/* Symbol: pixSeedfillGray */
/* Demangled: pixSeedfillGray */
int pixSeedfillGray(void);

/* Symbol: l_clearDataBit */
/* Demangled: l_clearDataBit */
int l_clearDataBit(void);

/* Symbol: pixTilingGetTile */
/* Demangled: pixTilingGetTile */
int pixTilingGetTile(void);

/* Symbol: makeGrayQuantIndexTable */
/* Demangled: makeGrayQuantIndexTable */
int makeGrayQuantIndexTable(void);

/* Symbol: pixReadIndexed */
/* Demangled: pixReadIndexed */
int pixReadIndexed(void);

/* Symbol: selGetElement */
/* Demangled: selGetElement */
int selGetElement(void);

/* Symbol: pixFillMapHoles */
/* Demangled: pixFillMapHoles */
int pixFillMapHoles(void);

/* Symbol: l_byteaInitFromMem */
/* Demangled: l_byteaInitFromMem */
int l_byteaInitFromMem(void);

/* Symbol: lqueueRemove */
/* Demangled: lqueueRemove */
int lqueueRemove(void);

/* Symbol: numaCrossingsByPeaks */
/* Demangled: numaCrossingsByPeaks */
int numaCrossingsByPeaks(void);

/* Symbol: pixConvertToPdf */
/* Demangled: pixConvertToPdf */
int pixConvertToPdf(void);

/* Symbol: pixacompReadStream */
/* Demangled: pixacompReadStream */
int pixacompReadStream(void);

/* Symbol: pixacompReplacePixcomp */
/* Demangled: pixacompReplacePixcomp */
int pixacompReplacePixcomp(void);

/* Symbol: ptaRead */
/* Demangled: ptaRead */
int ptaRead(void);

/* Symbol: wshedDestroy */
/* Demangled: wshedDestroy */
int wshedDestroy(void);

/* Symbol: returnErrorPtr */
/* Demangled: returnErrorPtr */
int returnErrorPtr(void);

/* Symbol: sela8ccThin */
/* Demangled: sela8ccThin */
int sela8ccThin(void);

/* Symbol: pixUnsharpMaskingFast */
/* Demangled: pixUnsharpMaskingFast */
int pixUnsharpMaskingFast(void);

/* Symbol: pixGetColorHistogram */
/* Demangled: pixGetColorHistogram */
int pixGetColorHistogram(void);

/* Symbol: startTimerNested */
/* Demangled: startTimerNested */
int startTimerNested(void);

/* Symbol: selReadFromColorImage */
/* Demangled: selReadFromColorImage */
int selReadFromColorImage(void);

/* Symbol: pixScale */
/* Demangled: pixScale */
int pixScale(void);

/* Symbol: boxOverlapArea */
/* Demangled: boxOverlapArea */
int boxOverlapArea(void);

/* Symbol: boxaaSizeRange */
/* Demangled: boxaaSizeRange */
int boxaaSizeRange(void);

/* Symbol: ccbaDestroy */
/* Demangled: ccbaDestroy */
int ccbaDestroy(void);

/* Symbol: jbRankHaus */
/* Demangled: jbRankHaus */
int jbRankHaus(void);

/* Symbol: jbRankHausInit */
/* Demangled: jbRankHausInit */
int jbRankHausInit(void);

/* Symbol: Java_com_googlecode_leptonica_android_AdaptiveMap_nativeBackgroundNormMorph */
/* Demangled: Java_com_googlecode_leptonica_android_AdaptiveMap_nativeBackgroundNormMorph */
int Java_com_googlecode_leptonica_android_AdaptiveMap_nativeBackgroundNormMorph(void);

/* Symbol: lept_calloc */
/* Demangled: lept_calloc */
int lept_calloc(void);

/* Symbol: dpixGetMax */
/* Demangled: dpixGetMax */
int dpixGetMax(void);

/* Symbol: fpixRemoveBorder */
/* Demangled: fpixRemoveBorder */
int fpixRemoveBorder(void);

/* Symbol: convertUnscaledToPdfData */
/* Demangled: convertUnscaledToPdfData */
int convertUnscaledToPdfData(void);

/* Symbol: pixGetBackgroundGrayMapMorph */
/* Demangled: pixGetBackgroundGrayMapMorph */
int pixGetBackgroundGrayMapMorph(void);

/* Symbol: pixHasHighlightRed */
/* Demangled: pixHasHighlightRed */
int pixHasHighlightRed(void);

/* Symbol: applyLinearFit */
/* Demangled: applyLinearFit */
int applyLinearFit(void);

/* Symbol: pixDisplayPta */
/* Demangled: pixDisplayPta */
int pixDisplayPta(void);

/* Symbol: pixFMorphopGen_1 */
/* Demangled: pixFMorphopGen_1 */
int pixFMorphopGen_1(void);

/* Symbol: pixSetSpecial */
/* Demangled: pixSetSpecial */
int pixSetSpecial(void);

/* Symbol: recogaFinishAveraging */
/* Demangled: recogaFinishAveraging */
int recogaFinishAveraging(void);

/* Symbol: Java_com_googlecode_leptonica_android_Box_nativeGetX */
/* Demangled: Java_com_googlecode_leptonica_android_Box_nativeGetX */
int Java_com_googlecode_leptonica_android_Box_nativeGetX(void);

/* Symbol: selaMakeThinSets */
/* Demangled: selaMakeThinSets */
int selaMakeThinSets(void);

/* Symbol: pixColorsForQuantization */
/* Demangled: pixColorsForQuantization */
int pixColorsForQuantization(void);

/* Symbol: pixSetAllGray */
/* Demangled: pixSetAllGray */
int pixSetAllGray(void);

/* Symbol: l_dnaHashGetCount */
/* Demangled: l_dnaHashGetCount */
int l_dnaHashGetCount(void);

/* Symbol: pixFMorphopGen_2 */
/* Demangled: pixFMorphopGen_2 */
int pixFMorphopGen_2(void);

/* Symbol: ptaRemoveDupsByAset */
/* Demangled: ptaRemoveDupsByAset */
int ptaRemoveDupsByAset(void);

/* Symbol: convertSegmentedPagesToPS */
/* Demangled: convertSegmentedPagesToPS */
int convertSegmentedPagesToPS(void);

/* Symbol: Java_com_googlecode_leptonica_android_Box_nativeGetY */
/* Demangled: Java_com_googlecode_leptonica_android_Box_nativeGetY */
int Java_com_googlecode_leptonica_android_Box_nativeGetY(void);

/* Symbol: pixcmapWriteMem */
/* Demangled: pixcmapWriteMem */
int pixcmapWriteMem(void);

/* Symbol: dpixReadMem */
/* Demangled: dpixReadMem */
int dpixReadMem(void);

/* Symbol: affineInvertXform */
/* Demangled: affineInvertXform */
int affineInvertXform(void);

/* Symbol: pixSetMirroredBorder */
/* Demangled: pixSetMirroredBorder */
int pixSetMirroredBorder(void);

/* Symbol: selaGetCount */
/* Demangled: selaGetCount */
int selaGetCount(void);

/* Symbol: l_binaryRead */
/* Demangled: l_binaryRead */
int l_binaryRead(void);

/* Symbol: recogSplitIntoCharacters */
/* Demangled: recogSplitIntoCharacters */
int recogSplitIntoCharacters(void);

/* Symbol: lept_mkdir */
/* Demangled: lept_mkdir */
int lept_mkdir(void);

/* Symbol: boxaGetNearestToPt */
/* Demangled: boxaGetNearestToPt */
int boxaGetNearestToPt(void);

/* Symbol: boxaSelectRange */
/* Demangled: boxaSelectRange */
int boxaSelectRange(void);

/* Symbol: pixOctcubeQuantMixedWithGray */
/* Demangled: pixOctcubeQuantMixedWithGray */
int pixOctcubeQuantMixedWithGray(void);

/* Symbol: dpixRead */
/* Demangled: dpixRead */
int dpixRead(void);

/* Symbol: selSetName */
/* Demangled: selSetName */
int selSetName(void);

/* Symbol: stringLength */
/* Demangled: stringLength */
int stringLength(void);

/* Symbol: pixWriteStreamSpix */
/* Demangled: pixWriteStreamSpix */
int pixWriteStreamSpix(void);

/* Symbol: fileCorruptByDeletion */
/* Demangled: fileCorruptByDeletion */
int fileCorruptByDeletion(void);

/* Symbol: pixAffineGray */
/* Demangled: pixAffineGray */
int pixAffineGray(void);

/* Symbol: pixaaDestroy */
/* Demangled: pixaaDestroy */
int pixaaDestroy(void);

/* Symbol: ptaAddPt */
/* Demangled: ptaAddPt */
int ptaAddPt(void);

/* Symbol: boxaaExtendArray */
/* Demangled: boxaaExtendArray */
int boxaaExtendArray(void);

/* Symbol: ccbaWriteSVG */
/* Demangled: ccbaWriteSVG */
int ccbaWriteSVG(void);

/* Symbol: pixHMT */
/* Demangled: pixHMT */
int pixHMT(void);

/* Symbol: pixSaveTiled */
/* Demangled: pixSaveTiled */
int pixSaveTiled(void);

/* Symbol: regTestCleanup */
/* Demangled: regTestCleanup */
int regTestCleanup(void);

/* Symbol: pixScaleGrayRankCascade */
/* Demangled: pixScaleGrayRankCascade */
int pixScaleGrayRankCascade(void);

/* Symbol: pixRotateOrth */
/* Demangled: pixRotateOrth */
int pixRotateOrth(void);

/* Symbol: pixColorSegment */
/* Demangled: pixColorSegment */
int pixColorSegment(void);

/* Symbol: pixRenderHashBoxBlend */
/* Demangled: pixRenderHashBoxBlend */
int pixRenderHashBoxBlend(void);

/* Symbol: pixInitAccumulate */
/* Demangled: pixInitAccumulate */
int pixInitAccumulate(void);

/* Symbol: l_CIDataDestroy */
/* Demangled: l_CIDataDestroy */
int l_CIDataDestroy(void);

/* Symbol: pixScaleColor2xLI */
/* Demangled: pixScaleColor2xLI */
int pixScaleColor2xLI(void);

/* Symbol: sudokuCreate */
/* Demangled: sudokuCreate */
int sudokuCreate(void);

/* Symbol: l_setDataTwoBytes */
/* Demangled: l_setDataTwoBytes */
int l_setDataTwoBytes(void);

/* Symbol: listRemoveElement */
/* Demangled: listRemoveElement */
int listRemoveElement(void);

/* Symbol: MORPH_BC */
/* Demangled: MORPH_BC */
extern void* MORPH_BC;

/* Symbol: pixRankFilterRGB */
/* Demangled: pixRankFilterRGB */
int pixRankFilterRGB(void);

/* Symbol: pathJoin */
/* Demangled: pathJoin */
int pathJoin(void);

/* Symbol: ccbaCreate */
/* Demangled: ccbaCreate */
int ccbaCreate(void);

/* Symbol: pixaSplitPix */
/* Demangled: pixaSplitPix */
int pixaSplitPix(void);

/* Symbol: ConvolveSamplingFactX */
/* Demangled: ConvolveSamplingFactX */
extern void* ConvolveSamplingFactX;

/* Symbol: l_getFormattedDate */
/* Demangled: l_getFormattedDate */
int l_getFormattedDate(void);

/* Symbol: pixaaVerifyDepth */
/* Demangled: pixaaVerifyDepth */
int pixaaVerifyDepth(void);

/* Symbol: pixSerializeToMemory */
/* Demangled: pixSerializeToMemory */
int pixSerializeToMemory(void);

/* Symbol: boxaEqual */
/* Demangled: boxaEqual */
int boxaEqual(void);

/* Symbol: numaWindowedMedian */
/* Demangled: numaWindowedMedian */
int numaWindowedMedian(void);

/* Symbol: pixConvertYUVToRGB */
/* Demangled: pixConvertYUVToRGB */
int pixConvertYUVToRGB(void);

/* Symbol: ConvolveSamplingFactY */
/* Demangled: ConvolveSamplingFactY */
extern void* ConvolveSamplingFactY;

/* Symbol: dewarpaInsertDewarp */
/* Demangled: dewarpaInsertDewarp */
int dewarpaInsertDewarp(void);

/* Symbol: dpixConvertToPix */
/* Demangled: dpixConvertToPix */
int dpixConvertToPix(void);

/* Symbol: pixFindStrokeLength */
/* Demangled: pixFindStrokeLength */
int pixFindStrokeLength(void);

/* Symbol: boxaMergeEvenOdd */
/* Demangled: boxaMergeEvenOdd */
int boxaMergeEvenOdd(void);

/* Symbol: pixFindLargestRectangle */
/* Demangled: pixFindLargestRectangle */
int pixFindLargestRectangle(void);

/* Symbol: sarrayReplaceString */
/* Demangled: sarrayReplaceString */
int sarrayReplaceString(void);

/* Symbol: pixReadMemFromMultipageTiff */
/* Demangled: pixReadMemFromMultipageTiff */
int pixReadMemFromMultipageTiff(void);

/* Symbol: numaNormalizeHistogram */
/* Demangled: numaNormalizeHistogram */
int numaNormalizeHistogram(void);

/* Symbol: pixProjectiveSampled */
/* Demangled: pixProjectiveSampled */
int pixProjectiveSampled(void);

/* Symbol: ptaGetCubicLSF */
/* Demangled: ptaGetCubicLSF */
int ptaGetCubicLSF(void);

/* Symbol: fpixGetMin */
/* Demangled: fpixGetMin */
int fpixGetMin(void);

/* Symbol: l_asetCreateFromDna */
/* Demangled: l_asetCreateFromDna */
int l_asetCreateFromDna(void);

/* Symbol: pixGenHalftoneMask */
/* Demangled: pixGenHalftoneMask */
int pixGenHalftoneMask(void);

/* Symbol: pixConvert24To32 */
/* Demangled: pixConvert24To32 */
int pixConvert24To32(void);

/* Symbol: pixConnCompTransform */
/* Demangled: pixConnCompTransform */
int pixConnCompTransform(void);

/* Symbol: rotateAMColorLow */
/* Demangled: rotateAMColorLow */
int rotateAMColorLow(void);

/* Symbol: pixaModifyStrokeWidth */
/* Demangled: pixaModifyStrokeWidth */
int pixaModifyStrokeWidth(void);

/* Symbol: pixaSort2dByIndex */
/* Demangled: pixaSort2dByIndex */
int pixaSort2dByIndex(void);

/* Symbol: gaussDistribSampling */
/* Demangled: gaussDistribSampling */
int gaussDistribSampling(void);

/* Symbol: dewarpWriteMem */
/* Demangled: dewarpWriteMem */
int dewarpWriteMem(void);

/* Symbol: genRandomIntegerInRange */
/* Demangled: genRandomIntegerInRange */
int genRandomIntegerInRange(void);

/* Symbol: getBilinearXformCoeffs */
/* Demangled: getBilinearXformCoeffs */
int getBilinearXformCoeffs(void);

/* Symbol: ptaTranspose */
/* Demangled: ptaTranspose */
int ptaTranspose(void);

/* Symbol: Java_com_googlecode_leptonica_android_Skew_nativeFindSkew */
/* Demangled: Java_com_googlecode_leptonica_android_Skew_nativeFindSkew */
int Java_com_googlecode_leptonica_android_Skew_nativeFindSkew(void);

/* Symbol: pixWindowedVariance */
/* Demangled: pixWindowedVariance */
int pixWindowedVariance(void);

/* Symbol: dewarpaApplyDisparity */
/* Demangled: dewarpaApplyDisparity */
int dewarpaApplyDisparity(void);

/* Symbol: pixGrayMorphSequence */
/* Demangled: pixGrayMorphSequence */
int pixGrayMorphSequence(void);

/* Symbol: fgetPngResolution */
/* Demangled: fgetPngResolution */
int fgetPngResolution(void);

/* Symbol: selaRead */
/* Demangled: selaRead */
int selaRead(void);

/* Symbol: Java_com_googlecode_leptonica_android_Rotate_nativeRotate */
/* Demangled: Java_com_googlecode_leptonica_android_Rotate_nativeRotate */
int Java_com_googlecode_leptonica_android_Rotate_nativeRotate(void);

/* Symbol: pixRunHistogramMorph */
/* Demangled: pixRunHistogramMorph */
int pixRunHistogramMorph(void);

/* Symbol: listAddToTail */
/* Demangled: listAddToTail */
int listAddToTail(void);

/* Symbol: pixWriteStringPS */
/* Demangled: pixWriteStringPS */
int pixWriteStringPS(void);

/* Symbol: ptaaReadStream */
/* Demangled: ptaaReadStream */
int ptaaReadStream(void);

/* Symbol: recogStringToIndex */
/* Demangled: recogStringToIndex */
int recogStringToIndex(void);

/* Symbol: fopenWriteStream */
/* Demangled: fopenWriteStream */
int fopenWriteStream(void);

/* Symbol: pixaDisplayBoxaa */
/* Demangled: pixaDisplayBoxaa */
int pixaDisplayBoxaa(void);

/* Symbol: convertG4ToPSEmbed */
/* Demangled: convertG4ToPSEmbed */
int convertG4ToPSEmbed(void);

/* Symbol: l_convertCharstrToInt */
/* Demangled: l_convertCharstrToInt */
int l_convertCharstrToInt(void);

/* Symbol: pixWriteTiff */
/* Demangled: pixWriteTiff */
int pixWriteTiff(void);

/* Symbol: pixaSaveFont */
/* Demangled: pixaSaveFont */
int pixaSaveFont(void);

/* Symbol: resetMorphBoundaryCondition */
/* Demangled: resetMorphBoundaryCondition */
int resetMorphBoundaryCondition(void);

/* Symbol: l_binaryReadSelect */
/* Demangled: l_binaryReadSelect */
int l_binaryReadSelect(void);

/* Symbol: pixWriteStreamPng */
/* Demangled: pixWriteStreamPng */
int pixWriteStreamPng(void);

/* Symbol: pixSelectByAreaFraction */
/* Demangled: pixSelectByAreaFraction */
int pixSelectByAreaFraction(void);

/* Symbol: pixSeedfillGrayInv */
/* Demangled: pixSeedfillGrayInv */
int pixSeedfillGrayInv(void);

/* Symbol: gplotDestroy */
/* Demangled: gplotDestroy */
int gplotDestroy(void);

/* Symbol: bbufferDestroyAndSaveData */
/* Demangled: bbufferDestroyAndSaveData */
int bbufferDestroyAndSaveData(void);

/* Symbol: boxPrintStreamInfo */
/* Demangled: boxPrintStreamInfo */
int boxPrintStreamInfo(void);

/* Symbol: ptaGetInsideBox */
/* Demangled: ptaGetInsideBox */
int ptaGetInsideBox(void);

/* Symbol: pixaGetCount */
/* Demangled: pixaGetCount */
int pixaGetCount(void);

/* Symbol: l_setDataBitVal */
/* Demangled: l_setDataBitVal */
int l_setDataBitVal(void);

/* Symbol: dewarpBuildPageModel */
/* Demangled: dewarpBuildPageModel */
int dewarpBuildPageModel(void);

/* Symbol: makePlotPtaFromNumaGen */
/* Demangled: makePlotPtaFromNumaGen */
int makePlotPtaFromNumaGen(void);

/* Symbol: pixRenderPtaArb */
/* Demangled: pixRenderPtaArb */
int pixRenderPtaArb(void);

/* Symbol: applyCubicFit */
/* Demangled: applyCubicFit */
int applyCubicFit(void);

/* Symbol: sudokuDestroy */
/* Demangled: sudokuDestroy */
int sudokuDestroy(void);

/* Symbol: boxaExtractSortedPattern */
/* Demangled: boxaExtractSortedPattern */
int boxaExtractSortedPattern(void);

/* Symbol: numaInterpolateArbxVal */
/* Demangled: numaInterpolateArbxVal */
int numaInterpolateArbxVal(void);

/* Symbol: pixGenTextlineMask */
/* Demangled: pixGenTextlineMask */
int pixGenTextlineMask(void);

/* Symbol: barcodeFormatIsSupported */
/* Demangled: barcodeFormatIsSupported */
int barcodeFormatIsSupported(void);

/* Symbol: ccbaGenerateSinglePath */
/* Demangled: ccbaGenerateSinglePath */
int ccbaGenerateSinglePath(void);

/* Symbol: generatePtaBox */
/* Demangled: generatePtaBox */
int generatePtaBox(void);

/* Symbol: numaSubsample */
/* Demangled: numaSubsample */
int numaSubsample(void);

/* Symbol: pixGetRunCentersOnLine */
/* Demangled: pixGetRunCentersOnLine */
int pixGetRunCentersOnLine(void);

/* Symbol: l_setDataFourBytes */
/* Demangled: l_setDataFourBytes */
int l_setDataFourBytes(void);

/* Symbol: pixSeedfillBinary */
/* Demangled: pixSeedfillBinary */
int pixSeedfillBinary(void);

/* Symbol: pixSetDimensions */
/* Demangled: pixSetDimensions */
int pixSetDimensions(void);

/* Symbol: pixVShear */
/* Demangled: pixVShear */
int pixVShear(void);

/* Symbol: l_getDataQbit */
/* Demangled: l_getDataQbit */
int l_getDataQbit(void);

/* Symbol: boxaAdjustWidthToTarget */
/* Demangled: boxaAdjustWidthToTarget */
int boxaAdjustWidthToTarget(void);

/* Symbol: thresholdToBinaryLow */
/* Demangled: thresholdToBinaryLow */
int thresholdToBinaryLow(void);

/* Symbol: pixWriteStreamPnm */
/* Demangled: pixWriteStreamPnm */
int pixWriteStreamPnm(void);

/* Symbol: pixFlipTB */
/* Demangled: pixFlipTB */
int pixFlipTB(void);

/* Symbol: pixPlotAlongPta */
/* Demangled: pixPlotAlongPta */
int pixPlotAlongPta(void);

/* Symbol: Java_com_googlecode_leptonica_android_Box_nativeGetWidth */
/* Demangled: Java_com_googlecode_leptonica_android_Box_nativeGetWidth */
int Java_com_googlecode_leptonica_android_Box_nativeGetWidth(void);

/* Symbol: fpixDisplayMaxDynamicRange */
/* Demangled: fpixDisplayMaxDynamicRange */
int fpixDisplayMaxDynamicRange(void);

/* Symbol: pixThresholdTo4bpp */
/* Demangled: pixThresholdTo4bpp */
int pixThresholdTo4bpp(void);

/* Symbol: pixSetInRect */
/* Demangled: pixSetInRect */
int pixSetInRect(void);

/* Symbol: pixExtractBorderConnComps */
/* Demangled: pixExtractBorderConnComps */
int pixExtractBorderConnComps(void);

/* Symbol: findFileFormatStream */
/* Demangled: findFileFormatStream */
int findFileFormatStream(void);

/* Symbol: kernelDestroy */
/* Demangled: kernelDestroy */
int kernelDestroy(void);

/* Symbol: pixEqualWithAlpha */
/* Demangled: pixEqualWithAlpha */
int pixEqualWithAlpha(void);

/* Symbol: pixGetCmapHistogramInRect */
/* Demangled: pixGetCmapHistogramInRect */
int pixGetCmapHistogramInRect(void);

/* Symbol: pixcmapGetColor */
/* Demangled: pixcmapGetColor */
int pixcmapGetColor(void);

/* Symbol: gplotSimple1 */
/* Demangled: gplotSimple1 */
int gplotSimple1(void);

/* Symbol: pixBlendColor */
/* Demangled: pixBlendColor */
int pixBlendColor(void);

/* Symbol: lept_mv */
/* Demangled: lept_mv */
int lept_mv(void);

/* Symbol: getTiffResolution */
/* Demangled: getTiffResolution */
int getTiffResolution(void);

/* Symbol: gplotSimple2 */
/* Demangled: gplotSimple2 */
int gplotSimple2(void);

/* Symbol: pixCloseBrick */
/* Demangled: pixCloseBrick */
int pixCloseBrick(void);

/* Symbol: ImageFileFormatExtensions */
/* Demangled: ImageFileFormatExtensions */
extern void* ImageFileFormatExtensions;

/* Symbol: pixFindPerimToAreaRatio */
/* Demangled: pixFindPerimToAreaRatio */
int pixFindPerimToAreaRatio(void);

/* Symbol: Java_com_googlecode_leptonica_android_Pix_nativeCreateFromData */
/* Demangled: Java_com_googlecode_leptonica_android_Pix_nativeCreateFromData */
int Java_com_googlecode_leptonica_android_Pix_nativeCreateFromData(void);

/* Symbol: pixaGetBoxGeometry */
/* Demangled: pixaGetBoxGeometry */
int pixaGetBoxGeometry(void);

/* Symbol: kernelGetElement */
/* Demangled: kernelGetElement */
int kernelGetElement(void);

/* Symbol: convertImageDataToPdfData */
/* Demangled: convertImageDataToPdfData */
int convertImageDataToPdfData(void);

/* Symbol: pixRankRowTransform */
/* Demangled: pixRankRowTransform */
int pixRankRowTransform(void);

/* Symbol: pixGetInvBackgroundMap */
/* Demangled: pixGetInvBackgroundMap */
int pixGetInvBackgroundMap(void);

/* Symbol: dewarpDebug */
/* Demangled: dewarpDebug */
int dewarpDebug(void);

/* Symbol: fpixProjective */
/* Demangled: fpixProjective */
int fpixProjective(void);

/* Symbol: pixContrastNorm */
/* Demangled: pixContrastNorm */
int pixContrastNorm(void);

/* Symbol: pixSetOrClearBorder */
/* Demangled: pixSetOrClearBorder */
int pixSetOrClearBorder(void);

/* Symbol: pixGetEdgeProfile */
/* Demangled: pixGetEdgeProfile */
int pixGetEdgeProfile(void);

/* Symbol: pixFindAreaPerimRatio */
/* Demangled: pixFindAreaPerimRatio */
int pixFindAreaPerimRatio(void);

/* Symbol: pixaaTruncate */
/* Demangled: pixaaTruncate */
int pixaaTruncate(void);

/* Symbol: recogGetDid */
/* Demangled: recogGetDid */
int recogGetDid(void);

/* Symbol: pixGetAverageTiled */
/* Demangled: pixGetAverageTiled */
int pixGetAverageTiled(void);

/* Symbol: pixConvertRGBToGrayArb */
/* Demangled: pixConvertRGBToGrayArb */
int pixConvertRGBToGrayArb(void);

/* Symbol: Java_com_googlecode_leptonica_android_Pixa_nativeGetCount */
/* Demangled: Java_com_googlecode_leptonica_android_Pixa_nativeGetCount */
int Java_com_googlecode_leptonica_android_Pixa_nativeGetCount(void);

/* Symbol: dpixGetData */
/* Demangled: dpixGetData */
int dpixGetData(void);

/* Symbol: rotateAMGrayCornerLow */
/* Demangled: rotateAMGrayCornerLow */
int rotateAMGrayCornerLow(void);

/* Symbol: pixGetInputFormat */
/* Demangled: pixGetInputFormat */
int pixGetInputFormat(void);

/* Symbol: numaSimpleStats */
/* Demangled: numaSimpleStats */
int numaSimpleStats(void);

/* Symbol: convertUnscaledFilesToPdf */
/* Demangled: convertUnscaledFilesToPdf */
int convertUnscaledFilesToPdf(void);

/* Symbol: pmsLogInfo */
/* Demangled: pmsLogInfo */
int pmsLogInfo(void);

/* Symbol: sarraySelectBySubstring */
/* Demangled: sarraySelectBySubstring */
int sarraySelectBySubstring(void);

/* Symbol: boxaRemoveBox */
/* Demangled: boxaRemoveBox */
int boxaRemoveBox(void);

/* Symbol: sarrayGetCount */
/* Demangled: sarrayGetCount */
int sarrayGetCount(void);

/* Symbol: dewarpCreate */
/* Demangled: dewarpCreate */
int dewarpCreate(void);

/* Symbol: ptaaWrite */
/* Demangled: ptaaWrite */
int ptaaWrite(void);

/* Symbol: createMatrix2dRotate */
/* Demangled: createMatrix2dRotate */
int createMatrix2dRotate(void);

/* Symbol: boxaDisplayTiled */
/* Demangled: boxaDisplayTiled */
int boxaDisplayTiled(void);

/* Symbol: pixDitherTo2bpp */
/* Demangled: pixDitherTo2bpp */
int pixDitherTo2bpp(void);

/* Symbol: pixSelectMinInConnComp */
/* Demangled: pixSelectMinInConnComp */
int pixSelectMinInConnComp(void);

/* Symbol: fpixWriteStream */
/* Demangled: fpixWriteStream */
int fpixWriteStream(void);

/* Symbol: pixHDome */
/* Demangled: pixHDome */
int pixHDome(void);

/* Symbol: ptaGetMinMax */
/* Demangled: ptaGetMinMax */
int ptaGetMinMax(void);

/* Symbol: l_dnaConvertToNuma */
/* Demangled: l_dnaConvertToNuma */
int l_dnaConvertToNuma(void);

/* Symbol: pixClose */
/* Demangled: pixClose */
int pixClose(void);

/* Symbol: pixCloseGray3 */
/* Demangled: pixCloseGray3 */
int pixCloseGray3(void);

/* Symbol: pixExtractBarcodeCrossings */
/* Demangled: pixExtractBarcodeCrossings */
int pixExtractBarcodeCrossings(void);

/* Symbol: gplotfileoutputs */
/* Demangled: gplotfileoutputs */
extern void* gplotfileoutputs;

/* Symbol: pixReadStreamPng */
/* Demangled: pixReadStreamPng */
int pixReadStreamPng(void);

/* Symbol: ptaGetBoundaryPixels */
/* Demangled: ptaGetBoundaryPixels */
int ptaGetBoundaryPixels(void);

/* Symbol: scaleMipmapLow */
/* Demangled: scaleMipmapLow */
int scaleMipmapLow(void);

/* Symbol: getProjectiveXformCoeffs */
/* Demangled: getProjectiveXformCoeffs */
int getProjectiveXformCoeffs(void);

/* Symbol: lstackPrint */
/* Demangled: lstackPrint */
int lstackPrint(void);

/* Symbol: pixGetBackgroundRGBMapMorph */
/* Demangled: pixGetBackgroundRGBMapMorph */
int pixGetBackgroundRGBMapMorph(void);

/* Symbol: pixRenderHashBoxaBlend */
/* Demangled: pixRenderHashBoxaBlend */
int pixRenderHashBoxaBlend(void);

/* Symbol: pixGrayQuantFromHisto */
/* Demangled: pixGrayQuantFromHisto */
int pixGrayQuantFromHisto(void);

/* Symbol: pixaMorphSequenceByRegion */
/* Demangled: pixaMorphSequenceByRegion */
int pixaMorphSequenceByRegion(void);

/* Symbol: NumImageFileFormatExtensions */
/* Demangled: NumImageFileFormatExtensions */
extern void* NumImageFileFormatExtensions;

/* Symbol: JNI_OnLoad */
/* Demangled: JNI_OnLoad */
int JNI_OnLoad(void);

/* Symbol: pixGetPerceptualDiff */
/* Demangled: pixGetPerceptualDiff */
int pixGetPerceptualDiff(void);

/* Symbol: applyQuadraticFit */
/* Demangled: applyQuadraticFit */
int applyQuadraticFit(void);

/* Symbol: pixConvertToPdfSegmented */
/* Demangled: pixConvertToPdfSegmented */
int pixConvertToPdfSegmented(void);

/* Symbol: bilinearXformSampledPt */
/* Demangled: bilinearXformSampledPt */
int bilinearXformSampledPt(void);

/* Symbol: boxaCreate */
/* Demangled: boxaCreate */
int boxaCreate(void);

/* Symbol: lheapRemove */
/* Demangled: lheapRemove */
int lheapRemove(void);

/* Symbol: Java_com_googlecode_leptonica_android_Pix_nativeInvert */
/* Demangled: Java_com_googlecode_leptonica_android_Pix_nativeInvert */
int Java_com_googlecode_leptonica_android_Pix_nativeInvert(void);

/* Symbol: pixaClear */
/* Demangled: pixaClear */
int pixaClear(void);

/* Symbol: pixConvert1To16 */
/* Demangled: pixConvert1To16 */
int pixConvert1To16(void);

/* Symbol: pixProjectivePta */
/* Demangled: pixProjectivePta */
int pixProjectivePta(void);

/* Symbol: ptraJoin */
/* Demangled: ptraJoin */
int ptraJoin(void);

/* Symbol: pixRotateShearCenterIP */
/* Demangled: pixRotateShearCenterIP */
int pixRotateShearCenterIP(void);

/* Symbol: pixGetExtremeValue */
/* Demangled: pixGetExtremeValue */
int pixGetExtremeValue(void);

/* Symbol: pixReadStreamPnm */
/* Demangled: pixReadStreamPnm */
int pixReadStreamPnm(void);

/* Symbol: fpixDestroy */
/* Demangled: fpixDestroy */
int fpixDestroy(void);

/* Symbol: pixaDisplayOnLattice */
/* Demangled: pixaDisplayOnLattice */
int pixaDisplayOnLattice(void);

/* Symbol: pixcmapAddColor */
/* Demangled: pixcmapAddColor */
int pixcmapAddColor(void);

/* Symbol: pixReadMemWebP */
/* Demangled: pixReadMemWebP */
int pixReadMemWebP(void);

/* Symbol: Java_com_googlecode_leptonica_android_Pix_nativeDestroy */
/* Demangled: Java_com_googlecode_leptonica_android_Pix_nativeDestroy */
int Java_com_googlecode_leptonica_android_Pix_nativeDestroy(void);

/* Symbol: pixScaleGeneral */
/* Demangled: pixScaleGeneral */
int pixScaleGeneral(void);

/* Symbol: pixShiftAndTransferAlpha */
/* Demangled: pixShiftAndTransferAlpha */
int pixShiftAndTransferAlpha(void);

/* Symbol: readHeaderWebP */
/* Demangled: readHeaderWebP */
int readHeaderWebP(void);

/* Symbol: recogDidExists */
/* Demangled: recogDidExists */
int recogDidExists(void);

/* Symbol: boxaGetSizes */
/* Demangled: boxaGetSizes */
int boxaGetSizes(void);

/* Symbol: l_rbtreeInsert */
/* Demangled: l_rbtreeInsert */
int l_rbtreeInsert(void);

/* Symbol: getExtendedCompositeParameters */
/* Demangled: getExtendedCompositeParameters */
int getExtendedCompositeParameters(void);

/* Symbol: pixExtractBarcodeWidths1 */
/* Demangled: pixExtractBarcodeWidths1 */
int pixExtractBarcodeWidths1(void);

/* Symbol: fopenReadFromMemory */
/* Demangled: fopenReadFromMemory */
int fopenReadFromMemory(void);

/* Symbol: pixExtractBarcodeWidths2 */
/* Demangled: pixExtractBarcodeWidths2 */
int pixExtractBarcodeWidths2(void);

/* Symbol: pixHShearLI */
/* Demangled: pixHShearLI */
int pixHShearLI(void);

/* Symbol: pixMultConstantGray */
/* Demangled: pixMultConstantGray */
int pixMultConstantGray(void);

/* Symbol: numaaGetNumberCount */
/* Demangled: numaaGetNumberCount */
int numaaGetNumberCount(void);

/* Symbol: pixConvolveRGB */
/* Demangled: pixConvolveRGB */
int pixConvolveRGB(void);

/* Symbol: fgetPngColormapInfo */
/* Demangled: fgetPngColormapInfo */
int fgetPngColormapInfo(void);

/* Symbol: pixSetTextblock */
/* Demangled: pixSetTextblock */
int pixSetTextblock(void);

/* Symbol: pixXor */
/* Demangled: pixXor */
int pixXor(void);

/* Symbol: pixMakeMaskFromLUT */
/* Demangled: pixMakeMaskFromLUT */
int pixMakeMaskFromLUT(void);

/* Symbol: fpixSetDimensions */
/* Demangled: fpixSetDimensions */
int fpixSetDimensions(void);

/* Symbol: pixThresholdSpreadNorm */
/* Demangled: pixThresholdSpreadNorm */
int pixThresholdSpreadNorm(void);

/* Symbol: listFindTail */
/* Demangled: listFindTail */
int listFindTail(void);

/* Symbol: l_setAlphaMaskBorder */
/* Demangled: l_setAlphaMaskBorder */
int l_setAlphaMaskBorder(void);

/* Symbol: projectiveXformSampledPt */
/* Demangled: projectiveXformSampledPt */
int projectiveXformSampledPt(void);

/* Symbol: pixLocalExtrema */
/* Demangled: pixLocalExtrema */
int pixLocalExtrema(void);

/* Symbol: pixaGetBoxa */
/* Demangled: pixaGetBoxa */
int pixaGetBoxa(void);

/* Symbol: gplotSimpleN */
/* Demangled: gplotSimpleN */
int gplotSimpleN(void);

/* Symbol: listRemoveFromTail */
/* Demangled: listRemoveFromTail */
int listRemoveFromTail(void);

/* Symbol: Java_com_googlecode_leptonica_android_Pixa_nativeAdd */
/* Demangled: Java_com_googlecode_leptonica_android_Pixa_nativeAdd */
int Java_com_googlecode_leptonica_android_Pixa_nativeAdd(void);

/* Symbol: ptaSort */
/* Demangled: ptaSort */
int ptaSort(void);

/* Symbol: pixFindPageForeground */
/* Demangled: pixFindPageForeground */
int pixFindPageForeground(void);

/* Symbol: dewarpReadStream */
/* Demangled: dewarpReadStream */
int dewarpReadStream(void);

/* Symbol: pixReadStream */
/* Demangled: pixReadStream */
int pixReadStream(void);

/* Symbol: dpixConvertToFPix */
/* Demangled: dpixConvertToFPix */
int dpixConvertToFPix(void);

/* Symbol: jbCorrelationInitWithoutComponents */
/* Demangled: jbCorrelationInitWithoutComponents */
int jbCorrelationInitWithoutComponents(void);

/* Symbol: pixMultiplyByColor */
/* Demangled: pixMultiplyByColor */
int pixMultiplyByColor(void);

/* Symbol: pixDrawBoxa */
/* Demangled: pixDrawBoxa */
int pixDrawBoxa(void);

/* Symbol: pixDisplayPtaaPattern */
/* Demangled: pixDisplayPtaaPattern */
int pixDisplayPtaaPattern(void);

/* Symbol: fpixEndianByteSwap */
/* Demangled: fpixEndianByteSwap */
int fpixEndianByteSwap(void);

/* Symbol: pixSetData */
/* Demangled: pixSetData */
int pixSetData(void);

/* Symbol: numaaFlattenToNuma */
/* Demangled: numaaFlattenToNuma */
int numaaFlattenToNuma(void);

/* Symbol: recogaCreateFromPixaa */
/* Demangled: recogaCreateFromPixaa */
int recogaCreateFromPixaa(void);

/* Symbol: numaaCompareImagesByBoxes */
/* Demangled: numaaCompareImagesByBoxes */
int numaaCompareImagesByBoxes(void);

/* Symbol: l_dnaGetDValue */
/* Demangled: l_dnaGetDValue */
int l_dnaGetDValue(void);

/* Symbol: pixRenderBoxBlend */
/* Demangled: pixRenderBoxBlend */
int pixRenderBoxBlend(void);

/* Symbol: kernelCopy */
/* Demangled: kernelCopy */
int kernelCopy(void);

/* Symbol: fmorphopgen_low_1 */
/* Demangled: fmorphopgen_low_1 */
int fmorphopgen_low_1(void);

/* Symbol: ptaUnionByAset */
/* Demangled: ptaUnionByAset */
int ptaUnionByAset(void);

/* Symbol: pixRenderHashBoxArb */
/* Demangled: pixRenderHashBoxArb */
int pixRenderHashBoxArb(void);

/* Symbol: pixAddGaussianNoise */
/* Demangled: pixAddGaussianNoise */
int pixAddGaussianNoise(void);

/* Symbol: pixBlocksum */
/* Demangled: pixBlocksum */
int pixBlocksum(void);

/* Symbol: ptaGetArrays */
/* Demangled: ptaGetArrays */
int ptaGetArrays(void);

/* Symbol: fmorphopgen_low_2 */
/* Demangled: fmorphopgen_low_2 */
int fmorphopgen_low_2(void);

/* Symbol: pixMorphSequenceMasked */
/* Demangled: pixMorphSequenceMasked */
int pixMorphSequenceMasked(void);

/* Symbol: tiffGetCount */
/* Demangled: tiffGetCount */
int tiffGetCount(void);

/* Symbol: scaleToGray6Low */
/* Demangled: scaleToGray6Low */
int scaleToGray6Low(void);

/* Symbol: pixSelectBySize */
/* Demangled: pixSelectBySize */
int pixSelectBySize(void);

/* Symbol: regTestCompareSimilarPix */
/* Demangled: regTestCompareSimilarPix */
int regTestCompareSimilarPix(void);

/* Symbol: pixSeedfillGrayInvSimple */
/* Demangled: pixSeedfillGrayInvSimple */
int pixSeedfillGrayInvSimple(void);

/* Symbol: pixFadeWithGray */
/* Demangled: pixFadeWithGray */
int pixFadeWithGray(void);

/* Symbol: pixRasteropVip */
/* Demangled: pixRasteropVip */
int pixRasteropVip(void);

/* Symbol: pixDisplayHitMissSel */
/* Demangled: pixDisplayHitMissSel */
int pixDisplayHitMissSel(void);

/* Symbol: pixelFractionalShift */
/* Demangled: pixelFractionalShift */
int pixelFractionalShift(void);

/* Symbol: pixScaleGray2xLIThresh */
/* Demangled: pixScaleGray2xLIThresh */
int pixScaleGray2xLIThresh(void);

/* Symbol: pixaConvertTo1 */
/* Demangled: pixaConvertTo1 */
int pixaConvertTo1(void);

/* Symbol: pixWritePng */
/* Demangled: pixWritePng */
int pixWritePng(void);

/* Symbol: selPrintToString */
/* Demangled: selPrintToString */
int selPrintToString(void);

/* Symbol: pixWriteStreamTiff */
/* Demangled: pixWriteStreamTiff */
int pixWriteStreamTiff(void);

/* Symbol: pixStereoFromPair */
/* Demangled: pixStereoFromPair */
int pixStereoFromPair(void);

/* Symbol: pixGetSpp */
/* Demangled: pixGetSpp */
int pixGetSpp(void);

/* Symbol: pixCleanupByteProcessing */
/* Demangled: pixCleanupByteProcessing */
int pixCleanupByteProcessing(void);

/* Symbol: pixBilateralExact */
/* Demangled: pixBilateralExact */
int pixBilateralExact(void);

/* Symbol: boxaSwapBoxes */
/* Demangled: boxaSwapBoxes */
int boxaSwapBoxes(void);

/* Symbol: jbDataRead */
/* Demangled: jbDataRead */
int jbDataRead(void);

/* Symbol: pixaFindDimensions */
/* Demangled: pixaFindDimensions */
int pixaFindDimensions(void);

/* Symbol: l_byteaAppendString */
/* Demangled: l_byteaAppendString */
int l_byteaAppendString(void);

/* Symbol: zlibCompress */
/* Demangled: zlibCompress */
int zlibCompress(void);

/* Symbol: pixcmapConvertYUVToRGB */
/* Demangled: pixcmapConvertYUVToRGB */
int pixcmapConvertYUVToRGB(void);

/* Symbol: pixMeasureEdgeSmoothness */
/* Demangled: pixMeasureEdgeSmoothness */
int pixMeasureEdgeSmoothness(void);

/* Symbol: pixConvert32To16 */
/* Demangled: pixConvert32To16 */
int pixConvert32To16(void);

/* Symbol: dewarpaInsertRefModels */
/* Demangled: dewarpaInsertRefModels */
int dewarpaInsertRefModels(void);

/* Symbol: fpixSetAllArbitrary */
/* Demangled: fpixSetAllArbitrary */
int fpixSetAllArbitrary(void);

/* Symbol: pixaSetStrokeWidth */
/* Demangled: pixaSetStrokeWidth */
int pixaSetStrokeWidth(void);

/* Symbol: pixConvertRGBToGrayFast */
/* Demangled: pixConvertRGBToGrayFast */
int pixConvertRGBToGrayFast(void);

/* Symbol: pixMorphCompSequenceDwa */
/* Demangled: pixMorphCompSequenceDwa */
int pixMorphCompSequenceDwa(void);

/* Symbol: recogSkipIdentify */
/* Demangled: recogSkipIdentify */
int recogSkipIdentify(void);

/* Symbol: l_byteaCreate */
/* Demangled: l_byteaCreate */
int l_byteaCreate(void);

/* Symbol: ccbaDisplaySPBorder */
/* Demangled: ccbaDisplaySPBorder */
int ccbaDisplaySPBorder(void);

/* Symbol: numaFitMax */
/* Demangled: numaFitMax */
int numaFitMax(void);

/* Symbol: pixConformsToRectangle */
/* Demangled: pixConformsToRectangle */
int pixConformsToRectangle(void);

/* Symbol: numaQuantizeCrossingsByWidth */
/* Demangled: numaQuantizeCrossingsByWidth */
int numaQuantizeCrossingsByWidth(void);

/* Symbol: pixRunlengthTransform */
/* Demangled: pixRunlengthTransform */
int pixRunlengthTransform(void);

/* Symbol: selaAddDwaCombs */
/* Demangled: selaAddDwaCombs */
int selaAddDwaCombs(void);

/* Symbol: pixcmapColorToGray */
/* Demangled: pixcmapColorToGray */
int pixcmapColorToGray(void);

/* Symbol: readHeaderMemJp2k */
/* Demangled: readHeaderMemJp2k */
int readHeaderMemJp2k(void);

/* Symbol: pixaaScaleToSize */
/* Demangled: pixaaScaleToSize */
int pixaaScaleToSize(void);

/* Symbol: pixEmbedForRotation */
/* Demangled: pixEmbedForRotation */
int pixEmbedForRotation(void);

/* Symbol: pixWriteMemWebP */
/* Demangled: pixWriteMemWebP */
int pixWriteMemWebP(void);

/* Symbol: pixColorGrayRegions */
/* Demangled: pixColorGrayRegions */
int pixColorGrayRegions(void);

/* Symbol: pixMinOrMax */
/* Demangled: pixMinOrMax */
int pixMinOrMax(void);

/* Symbol: numaFindPeaks */
/* Demangled: numaFindPeaks */
int numaFindPeaks(void);

/* Symbol: pixaConvertTo8 */
/* Demangled: pixaConvertTo8 */
int pixaConvertTo8(void);

/* Symbol: ptaaIndexLabelledPixels */
/* Demangled: ptaaIndexLabelledPixels */
int ptaaIndexLabelledPixels(void);

/* Symbol: generateFlatePS */
/* Demangled: generateFlatePS */
int generateFlatePS(void);

/* Symbol: pixBlockconvAccum */
/* Demangled: pixBlockconvAccum */
int pixBlockconvAccum(void);

/* Symbol: saConcatenatePdf */
/* Demangled: saConcatenatePdf */
int saConcatenatePdf(void);

/* Symbol: recogCorrelAverages */
/* Demangled: recogCorrelAverages */
int recogCorrelAverages(void);

/* Symbol: ccbDestroy */
/* Demangled: ccbDestroy */
int ccbDestroy(void);

/* Symbol: generatePtaLineFromPt */
/* Demangled: generatePtaLineFromPt */
int generatePtaLineFromPt(void);

/* Symbol: pixacompSetOffset */
/* Demangled: pixacompSetOffset */
int pixacompSetOffset(void);

/* Symbol: ptaTransform */
/* Demangled: ptaTransform */
int ptaTransform(void);

/* Symbol: fpixaGetCount */
/* Demangled: fpixaGetCount */
int fpixaGetCount(void);

/* Symbol: fpixProjectivePta */
/* Demangled: fpixProjectivePta */
int fpixProjectivePta(void);

/* Symbol: listInsertAfter */
/* Demangled: listInsertAfter */
int listInsertAfter(void);

/* Symbol: ptraCompactArray */
/* Demangled: ptraCompactArray */
int ptraCompactArray(void);

/* Symbol: pixReduceBinary2 */
/* Demangled: pixReduceBinary2 */
int pixReduceBinary2(void);

/* Symbol: boxSimilar */
/* Demangled: boxSimilar */
int boxSimilar(void);

/* Symbol: lstackCreate */
/* Demangled: lstackCreate */
int lstackCreate(void);

/* Symbol: ptaGetRange */
/* Demangled: ptaGetRange */
int ptaGetRange(void);

/* Symbol: pixSmoothConnectedRegions */
/* Demangled: pixSmoothConnectedRegions */
int pixSmoothConnectedRegions(void);

/* Symbol: pixDeskewLocal */
/* Demangled: pixDeskewLocal */
int pixDeskewLocal(void);

/* Symbol: sarrayWriteStream */
/* Demangled: sarrayWriteStream */
int sarrayWriteStream(void);

/* Symbol: numaContrastTRC */
/* Demangled: numaContrastTRC */
int numaContrastTRC(void);

/* Symbol: findFileFormat */
/* Demangled: findFileFormat */
int findFileFormat(void);

/* Symbol: recogRead */
/* Demangled: recogRead */
int recogRead(void);

/* Symbol: pixFindRectangleComps */
/* Demangled: pixFindRectangleComps */
int pixFindRectangleComps(void);

/* Symbol: ptaRemovePt */
/* Demangled: ptaRemovePt */
int ptaRemovePt(void);

/* Symbol: ccbaGenerateStepChains */
/* Demangled: ccbaGenerateStepChains */
int ccbaGenerateStepChains(void);

/* Symbol: l_generateFlateData */
/* Demangled: l_generateFlateData */
int l_generateFlateData(void);

/* Symbol: boxEqual */
/* Demangled: boxEqual */
int boxEqual(void);

/* Symbol: lqueueCreate */
/* Demangled: lqueueCreate */
int lqueueCreate(void);

/* Symbol: pixBilinearSampledPta */
/* Demangled: pixBilinearSampledPta */
int pixBilinearSampledPta(void);

/* Symbol: getFormatExtension */
/* Demangled: getFormatExtension */
int getFormatExtension(void);

/* Symbol: pixGetWidth */
/* Demangled: pixGetWidth */
int pixGetWidth(void);

/* Symbol: pixCompareGrayOrRGB */
/* Demangled: pixCompareGrayOrRGB */
int pixCompareGrayOrRGB(void);

/* Symbol: pixaGetAlignedStats */
/* Demangled: pixaGetAlignedStats */
int pixaGetAlignedStats(void);

/* Symbol: scaleGray4xLILow */
/* Demangled: scaleGray4xLILow */
int scaleGray4xLILow(void);

/* Symbol: l_dnaGetCount */
/* Demangled: l_dnaGetCount */
int l_dnaGetCount(void);

/* Symbol: pixWriteMemBmp */
/* Demangled: pixWriteMemBmp */
int pixWriteMemBmp(void);

/* Symbol: dewarpaReadStream */
/* Demangled: dewarpaReadStream */
int dewarpaReadStream(void);

/* Symbol: pixDilateCompBrick */
/* Demangled: pixDilateCompBrick */
int pixDilateCompBrick(void);

/* Symbol: selSetOrigin */
/* Demangled: selSetOrigin */
int selSetOrigin(void);

/* Symbol: Java_com_googlecode_leptonica_android_Pix_nativeGetPixel */
/* Demangled: Java_com_googlecode_leptonica_android_Pix_nativeGetPixel */
int Java_com_googlecode_leptonica_android_Pix_nativeGetPixel(void);

/* Symbol: pixMakeRangeMaskHS */
/* Demangled: pixMakeRangeMaskHS */
int pixMakeRangeMaskHS(void);

/* Symbol: pixReadStreamJpeg */
/* Demangled: pixReadStreamJpeg */
int pixReadStreamJpeg(void);

/* Symbol: pixaCountText */
/* Demangled: pixaCountText */
int pixaCountText(void);

/* Symbol: pixAddGrayColormap8 */
/* Demangled: pixAddGrayColormap8 */
int pixAddGrayColormap8(void);

/* Symbol: stopTimerNested */
/* Demangled: stopTimerNested */
int stopTimerNested(void);

/* Symbol: sarraySelectByRange */
/* Demangled: sarraySelectByRange */
int sarraySelectByRange(void);

/* Symbol: pixFastTophat */
/* Demangled: pixFastTophat */
int pixFastTophat(void);

/* Symbol: dewarpRead */
/* Demangled: dewarpRead */
int dewarpRead(void);

/* Symbol: jbClasserCreate */
/* Demangled: jbClasserCreate */
int jbClasserCreate(void);

/* Symbol: kernelDisplayInPix */
/* Demangled: kernelDisplayInPix */
int kernelDisplayInPix(void);

/* Symbol: pixRotateShear */
/* Demangled: pixRotateShear */
int pixRotateShear(void);

/* Symbol: pixMakeRangeMaskHV */
/* Demangled: pixMakeRangeMaskHV */
int pixMakeRangeMaskHV(void);

/* Symbol: pixRenderGridArb */
/* Demangled: pixRenderGridArb */
int pixRenderGridArb(void);

/* Symbol: kernelGetSum */
/* Demangled: kernelGetSum */
int kernelGetSum(void);

/* Symbol: pixGetMomentByColumn */
/* Demangled: pixGetMomentByColumn */
int pixGetMomentByColumn(void);

/* Symbol: scaleGray4xLILineLow */
/* Demangled: scaleGray4xLILineLow */
int scaleGray4xLILineLow(void);

/* Symbol: ccbaWriteSVGString */
/* Demangled: ccbaWriteSVGString */
int ccbaWriteSVGString(void);

/* Symbol: pixCompareWithTranslation */
/* Demangled: pixCompareWithTranslation */
int pixCompareWithTranslation(void);

/* Symbol: pixMeasureSaturation */
/* Demangled: pixMeasureSaturation */
int pixMeasureSaturation(void);

/* Symbol: pixRenderPolyline */
/* Demangled: pixRenderPolyline */
int pixRenderPolyline(void);

/* Symbol: pixacompJoin */
/* Demangled: pixacompJoin */
int pixacompJoin(void);

/* Symbol: pixBilateralGray */
/* Demangled: pixBilateralGray */
int pixBilateralGray(void);

/* Symbol: pixConvertGrayToFalseColor */
/* Demangled: pixConvertGrayToFalseColor */
int pixConvertGrayToFalseColor(void);

/* Symbol: numaRemoveNumber */
/* Demangled: numaRemoveNumber */
int numaRemoveNumber(void);

/* Symbol: LeptMsgSeverity */
/* Demangled: LeptMsgSeverity */
extern void* LeptMsgSeverity;

/* Symbol: boxaEncapsulateAligned */
/* Demangled: boxaEncapsulateAligned */
int boxaEncapsulateAligned(void);

/* Symbol: writeImageCompressedToPSFile */
/* Demangled: writeImageCompressedToPSFile */
int writeImageCompressedToPSFile(void);

/* Symbol: ptaGetBoundingRegion */
/* Demangled: ptaGetBoundingRegion */
int ptaGetBoundingRegion(void);

/* Symbol: pixcmapResetColor */
/* Demangled: pixcmapResetColor */
int pixcmapResetColor(void);

/* Symbol: boxaGetExtent */
/* Demangled: boxaGetExtent */
int boxaGetExtent(void);

/* Symbol: lept_roundftoi */
/* Demangled: lept_roundftoi */
int lept_roundftoi(void);

/* Symbol: pixBlockconvTiled */
/* Demangled: pixBlockconvTiled */
int pixBlockconvTiled(void);

/* Symbol: pixAverageIntensityProfile */
/* Demangled: pixAverageIntensityProfile */
int pixAverageIntensityProfile(void);

/* Symbol: recogSetBootflag */
/* Demangled: recogSetBootflag */
int recogSetBootflag(void);

/* Symbol: numaaReplaceNuma */
/* Demangled: numaaReplaceNuma */
int numaaReplaceNuma(void);

/* Symbol: l_dnaCopy */
/* Demangled: l_dnaCopy */
int l_dnaCopy(void);

/* Symbol: pixGetAverageTiledRGB */
/* Demangled: pixGetAverageTiledRGB */
int pixGetAverageTiledRGB(void);

/* Symbol: pixaDisplay */
/* Demangled: pixaDisplay */
int pixaDisplay(void);

/* Symbol: numaThresholdEdges */
/* Demangled: numaThresholdEdges */
int numaThresholdEdges(void);

/* Symbol: pixCountPixelsByColumn */
/* Demangled: pixCountPixelsByColumn */
int pixCountPixelsByColumn(void);

/* Symbol: pixRotateAM */
/* Demangled: pixRotateAM */
int pixRotateAM(void);

/* Symbol: pixSetupByteProcessing */
/* Demangled: pixSetupByteProcessing */
int pixSetupByteProcessing(void);

/* Symbol: numaGetNonzeroRange */
/* Demangled: numaGetNonzeroRange */
int numaGetNonzeroRange(void);

/* Symbol: pixErode */
/* Demangled: pixErode */
int pixErode(void);

/* Symbol: pixConvert32To24 */
/* Demangled: pixConvert32To24 */
int pixConvert32To24(void);

/* Symbol: scaleColor2xLILineLow */
/* Demangled: scaleColor2xLILineLow */
int scaleColor2xLILineLow(void);

/* Symbol: jbDataSave */
/* Demangled: jbDataSave */
int jbDataSave(void);

/* Symbol: pixReadMemPng */
/* Demangled: pixReadMemPng */
int pixReadMemPng(void);

/* Symbol: getScaledParametersPS */
/* Demangled: getScaledParametersPS */
int getScaledParametersPS(void);

/* Symbol: pixRasteropFullImage */
/* Demangled: pixRasteropFullImage */
int pixRasteropFullImage(void);

/* Symbol: l_amapDestroy */
/* Demangled: l_amapDestroy */
int l_amapDestroy(void);

/* Symbol: pixEqual */
/* Demangled: pixEqual */
int pixEqual(void);

/* Symbol: ptaIntersectionByHash */
/* Demangled: ptaIntersectionByHash */
int ptaIntersectionByHash(void);

/* Symbol: pixAlphaBlendUniform */
/* Demangled: pixAlphaBlendUniform */
int pixAlphaBlendUniform(void);

/* Symbol: sarrayDestroy */
/* Demangled: sarrayDestroy */
int sarrayDestroy(void);

/* Symbol: pixcmapGetRGBA */
/* Demangled: pixcmapGetRGBA */
int pixcmapGetRGBA(void);

/* Symbol: pixcmapSetAlpha */
/* Demangled: pixcmapSetAlpha */
int pixcmapSetAlpha(void);

/* Symbol: pixaaWriteStream */
/* Demangled: pixaaWriteStream */
int pixaaWriteStream(void);

/* Symbol: numaaGetNuma */
/* Demangled: numaaGetNuma */
int numaaGetNuma(void);

/* Symbol: numaPseudorandomSequence */
/* Demangled: numaPseudorandomSequence */
int numaPseudorandomSequence(void);

/* Symbol: numaClipToInterval */
/* Demangled: numaClipToInterval */
int numaClipToInterval(void);

/* Symbol: dewarpaCreateFromPixacomp */
/* Demangled: dewarpaCreateFromPixacomp */
int dewarpaCreateFromPixacomp(void);

/* Symbol: pixDilateBrick */
/* Demangled: pixDilateBrick */
int pixDilateBrick(void);

/* Symbol: listGetCount */
/* Demangled: listGetCount */
int listGetCount(void);

/* Symbol: pixConvert1To32 */
/* Demangled: pixConvert1To32 */
int pixConvert1To32(void);

/* Symbol: pixConvert2To8 */
/* Demangled: pixConvert2To8 */
int pixConvert2To8(void);

/* Symbol: recogaReadStream */
/* Demangled: recogaReadStream */
int recogaReadStream(void);

/* Symbol: convertGrayCodeToBinary */
/* Demangled: convertGrayCodeToBinary */
int convertGrayCodeToBinary(void);

/* Symbol: fpixaConvertLABToRGB */
/* Demangled: fpixaConvertLABToRGB */
int fpixaConvertLABToRGB(void);

/* Symbol: l_dnaGetParameters */
/* Demangled: l_dnaGetParameters */
int l_dnaGetParameters(void);

/* Symbol: lept_fopen */
/* Demangled: lept_fopen */
int lept_fopen(void);

/* Symbol: strcodeCreateFromFile */
/* Demangled: strcodeCreateFromFile */
int strcodeCreateFromFile(void);

/* Symbol: pixGlobalNormRGB */
/* Demangled: pixGlobalNormRGB */
int pixGlobalNormRGB(void);

/* Symbol: boxaConvertToPta */
/* Demangled: boxaConvertToPta */
int boxaConvertToPta(void);

/* Symbol: pixSplitIntoBoxa */
/* Demangled: pixSplitIntoBoxa */
int pixSplitIntoBoxa(void);

/* Symbol: numaGetParameters */
/* Demangled: numaGetParameters */
int numaGetParameters(void);

/* Symbol: pixConvert1To2Cmap */
/* Demangled: pixConvert1To2Cmap */
int pixConvert1To2Cmap(void);

/* Symbol: pixReadMemPnm */
/* Demangled: pixReadMemPnm */
int pixReadMemPnm(void);

/* Symbol: convertJpegToPS */
/* Demangled: convertJpegToPS */
int convertJpegToPS(void);

/* Symbol: pixcmapToRGBTable */
/* Demangled: pixcmapToRGBTable */
int pixcmapToRGBTable(void);

/* Symbol: fpixaConvertXYZToRGB */
/* Demangled: fpixaConvertXYZToRGB */
int fpixaConvertXYZToRGB(void);

/* Symbol: pixGetLastOffPixelInRun */
/* Demangled: pixGetLastOffPixelInRun */
int pixGetLastOffPixelInRun(void);

/* Symbol: numaMakeSequence */
/* Demangled: numaMakeSequence */
int numaMakeSequence(void);

/* Symbol: l_generateFlateDataPdf */
/* Demangled: l_generateFlateDataPdf */
int l_generateFlateDataPdf(void);

/* Symbol: pixMorphCompSequence */
/* Demangled: pixMorphCompSequence */
int pixMorphCompSequence(void);

/* Symbol: pixaAddPixWithText */
/* Demangled: pixaAddPixWithText */
int pixaAddPixWithText(void);

/* Symbol: pixAddMinimalGrayColormap8 */
/* Demangled: pixAddMinimalGrayColormap8 */
int pixAddMinimalGrayColormap8(void);

/* Symbol: pixSetAlphaOverWhite */
/* Demangled: pixSetAlphaOverWhite */
int pixSetAlphaOverWhite(void);

/* Symbol: pixDrawBoxaRandom */
/* Demangled: pixDrawBoxaRandom */
int pixDrawBoxaRandom(void);

/* Symbol: numaCrossingsByThreshold */
/* Demangled: numaCrossingsByThreshold */
int numaCrossingsByThreshold(void);

/* Symbol: extractG4DataFromFile */
/* Demangled: extractG4DataFromFile */
int extractG4DataFromFile(void);

/* Symbol: runlengthMembershipOnLine */
/* Demangled: runlengthMembershipOnLine */
int runlengthMembershipOnLine(void);

/* Symbol: numaGammaTRC */
/* Demangled: numaGammaTRC */
int numaGammaTRC(void);

/* Symbol: pixScaleSmooth */
/* Demangled: pixScaleSmooth */
int pixScaleSmooth(void);

/* Symbol: boxClipToRectangle */
/* Demangled: boxClipToRectangle */
int boxClipToRectangle(void);

/* Symbol: ptaJoin */
/* Demangled: ptaJoin */
int ptaJoin(void);

/* Symbol: ccbaGenerateSPGlobalLocs */
/* Demangled: ccbaGenerateSPGlobalLocs */
int ccbaGenerateSPGlobalLocs(void);

/* Symbol: numaGetMin */
/* Demangled: numaGetMin */
int numaGetMin(void);

/* Symbol: ptraReplace */
/* Demangled: ptraReplace */
int ptraReplace(void);

/* Symbol: selWrite */
/* Demangled: selWrite */
int selWrite(void);

/* Symbol: boxaAdjustHeightToTarget */
/* Demangled: boxaAdjustHeightToTarget */
int boxaAdjustHeightToTarget(void);

/* Symbol: pixConvertTo16 */
/* Demangled: pixConvertTo16 */
int pixConvertTo16(void);

/* Symbol: getAffineXformCoeffs */
/* Demangled: getAffineXformCoeffs */
int getAffineXformCoeffs(void);

/* Symbol: boxaSplitEvenOdd */
/* Demangled: boxaSplitEvenOdd */
int boxaSplitEvenOdd(void);

/* Symbol: l_byteaCopy */
/* Demangled: l_byteaCopy */
int l_byteaCopy(void);

/* Symbol: pixAddMixedBorder */
/* Demangled: pixAddMixedBorder */
int pixAddMixedBorder(void);

/* Symbol: pixacompGetBoxa */
/* Demangled: pixacompGetBoxa */
int pixacompGetBoxa(void);

/* Symbol: numaGetFValue */
/* Demangled: numaGetFValue */
int numaGetFValue(void);

/* Symbol: l_dnaaReplaceDna */
/* Demangled: l_dnaaReplaceDna */
int l_dnaaReplaceDna(void);

/* Symbol: l_angleBetweenVectors */
/* Demangled: l_angleBetweenVectors */
int l_angleBetweenVectors(void);

/* Symbol: pixCompareGray */
/* Demangled: pixCompareGray */
int pixCompareGray(void);

/* Symbol: pixChangeRefcount */
/* Demangled: pixChangeRefcount */
int pixChangeRefcount(void);

/* Symbol: recogTrainLabelled */
/* Demangled: recogTrainLabelled */
int recogTrainLabelled(void);

/* Symbol: pixScaleGrayMinMax */
/* Demangled: pixScaleGrayMinMax */
int pixScaleGrayMinMax(void);

/* Symbol: pixDilateGray3 */
/* Demangled: pixDilateGray3 */
int pixDilateGray3(void);

/* Symbol: sudokuReadString */
/* Demangled: sudokuReadString */
int sudokuReadString(void);

/* Symbol: pixaGetFont */
/* Demangled: pixaGetFont */
int pixaGetFont(void);

/* Symbol: pixColorContent */
/* Demangled: pixColorContent */
int pixColorContent(void);

/* Symbol: pixConvolveSep */
/* Demangled: pixConvolveSep */
int pixConvolveSep(void);

/* Symbol: dpixGetResolution */
/* Demangled: dpixGetResolution */
int dpixGetResolution(void);

/* Symbol: pixaccCreateFromPix */
/* Demangled: pixaccCreateFromPix */
int pixaccCreateFromPix(void);

/* Symbol: sarraySortByIndex */
/* Demangled: sarraySortByIndex */
int sarraySortByIndex(void);

/* Symbol: pixGetBackgroundGrayMap */
/* Demangled: pixGetBackgroundGrayMap */
int pixGetBackgroundGrayMap(void);

/* Symbol: ptaRotate */
/* Demangled: ptaRotate */
int ptaRotate(void);

/* Symbol: generatePtaFilledCircle */
/* Demangled: generatePtaFilledCircle */
int generatePtaFilledCircle(void);

/* Symbol: ptraaCreate */
/* Demangled: ptraaCreate */
int ptraaCreate(void);

/* Symbol: pixFinalAccumulateThreshold */
/* Demangled: pixFinalAccumulateThreshold */
int pixFinalAccumulateThreshold(void);

/* Symbol: selaWriteStream */
/* Demangled: selaWriteStream */
int selaWriteStream(void);

/* Symbol: pixClearAll */
/* Demangled: pixClearAll */
int pixClearAll(void);

/* Symbol: boxaDestroy */
/* Demangled: boxaDestroy */
int boxaDestroy(void);

/* Symbol: Java_com_googlecode_leptonica_android_Pixa_nativeSort */
/* Demangled: Java_com_googlecode_leptonica_android_Pixa_nativeSort */
int Java_com_googlecode_leptonica_android_Pixa_nativeSort(void);

/* Symbol: pixaDestroy */
/* Demangled: pixaDestroy */
int pixaDestroy(void);

/* Symbol: thresholdTo2bppLow */
/* Demangled: thresholdTo2bppLow */
int thresholdTo2bppLow(void);

/* Symbol: pixSetBlackOrWhite */
/* Demangled: pixSetBlackOrWhite */
int pixSetBlackOrWhite(void);

/* Symbol: pixacompInterleave */
/* Demangled: pixacompInterleave */
int pixacompInterleave(void);

/* Symbol: pixReadWithHint */
/* Demangled: pixReadWithHint */
int pixReadWithHint(void);

/* Symbol: pixCentroid8 */
/* Demangled: pixCentroid8 */
int pixCentroid8(void);

/* Symbol: ptaGetNeighborPixLocs */
/* Demangled: ptaGetNeighborPixLocs */
int ptaGetNeighborPixLocs(void);

/* Symbol: Java_com_googlecode_leptonica_android_Edge_nativePixSobelEdgeFilter */
/* Demangled: Java_com_googlecode_leptonica_android_Edge_nativePixSobelEdgeFilter */
int Java_com_googlecode_leptonica_android_Edge_nativePixSobelEdgeFilter(void);

/* Symbol: pixGetCCBorders */
/* Demangled: pixGetCCBorders */
int pixGetCCBorders(void);

/* Symbol: dewarpaRestoreModels */
/* Demangled: dewarpaRestoreModels */
int dewarpaRestoreModels(void);

/* Symbol: pixPaintSelfThroughMask */
/* Demangled: pixPaintSelfThroughMask */
int pixPaintSelfThroughMask(void);

/* Symbol: pixSizesEqual */
/* Demangled: pixSizesEqual */
int pixSizesEqual(void);

/* Symbol: boxIntersects */
/* Demangled: boxIntersects */
int boxIntersects(void);

/* Symbol: pixContrastTRCMasked */
/* Demangled: pixContrastTRCMasked */
int pixContrastTRCMasked(void);

/* Symbol: selFindMaxTranslations */
/* Demangled: selFindMaxTranslations */
int selFindMaxTranslations(void);

/* Symbol: numaIntegrateInterval */
/* Demangled: numaIntegrateInterval */
int numaIntegrateInterval(void);

/* Symbol: numaOpen */
/* Demangled: numaOpen */
int numaOpen(void);

/* Symbol: pixExtractTextlines */
/* Demangled: pixExtractTextlines */
int pixExtractTextlines(void);

/* Symbol: pixReadBarcodes */
/* Demangled: pixReadBarcodes */
int pixReadBarcodes(void);

/* Symbol: selaDestroy */
/* Demangled: selaDestroy */
int selaDestroy(void);

/* Symbol: jbAddPages */
/* Demangled: jbAddPages */
int jbAddPages(void);

/* Symbol: lheapSwapDown */
/* Demangled: lheapSwapDown */
int lheapSwapDown(void);

/* Symbol: pixAddText */
/* Demangled: pixAddText */
int pixAddText(void);

/* Symbol: setPixMemoryManager */
/* Demangled: setPixMemoryManager */
int setPixMemoryManager(void);

/* Symbol: pixVShearCorner */
/* Demangled: pixVShearCorner */
int pixVShearCorner(void);

/* Symbol: pixAffine */
/* Demangled: pixAffine */
int pixAffine(void);

/* Symbol: dewarpaRead */
/* Demangled: dewarpaRead */
int dewarpaRead(void);

/* Symbol: affineXformPt */
/* Demangled: affineXformPt */
int affineXformPt(void);

/* Symbol: boxaClear */
/* Demangled: boxaClear */
int boxaClear(void);

/* Symbol: pixUsesCmapColor */
/* Demangled: pixUsesCmapColor */
int pixUsesCmapColor(void);

/* Symbol: numaWindowedVariance */
/* Demangled: numaWindowedVariance */
int numaWindowedVariance(void);

/* Symbol: ptaChangeRefcount */
/* Demangled: ptaChangeRefcount */
int ptaChangeRefcount(void);

/* Symbol: seedfillGrayLow */
/* Demangled: seedfillGrayLow */
int seedfillGrayLow(void);

/* Symbol: l_hashFloat64ToUint64 */
/* Demangled: l_hashFloat64ToUint64 */
int l_hashFloat64ToUint64(void);

/* Symbol: pixaSizeRange */
/* Demangled: pixaSizeRange */
int pixaSizeRange(void);

/* Symbol: pixOpenBrick */
/* Demangled: pixOpenBrick */
int pixOpenBrick(void);

/* Symbol: affineXformSampledPt */
/* Demangled: affineXformSampledPt */
int affineXformSampledPt(void);

/* Symbol: getCompositeParameters */
/* Demangled: getCompositeParameters */
int getCompositeParameters(void);

/* Symbol: genConstrainedNumaInRange */
/* Demangled: genConstrainedNumaInRange */
int genConstrainedNumaInRange(void);

/* Symbol: pixaConvertTo8Color */
/* Demangled: pixaConvertTo8Color */
int pixaConvertTo8Color(void);

/* Symbol: scaleToGray16Low */
/* Demangled: scaleToGray16Low */
int scaleToGray16Low(void);

/* Symbol: pixBlend */
/* Demangled: pixBlend */
int pixBlend(void);

/* Symbol: dpixSetAllArbitrary */
/* Demangled: dpixSetAllArbitrary */
int dpixSetAllArbitrary(void);

/* Symbol: locatePtRadially */
/* Demangled: locatePtRadially */
int locatePtRadially(void);

/* Symbol: pixConnCompIncrInit */
/* Demangled: pixConnCompIncrInit */
int pixConnCompIncrInit(void);

/* Symbol: pixRenderHashBoxa */
/* Demangled: pixRenderHashBoxa */
int pixRenderHashBoxa(void);

/* Symbol: ptaPtInsidePolygon */
/* Demangled: ptaPtInsidePolygon */
int ptaPtInsidePolygon(void);

/* Symbol: pixGenerateHalftoneMask */
/* Demangled: pixGenerateHalftoneMask */
int pixGenerateHalftoneMask(void);

/* Symbol: pixTestClipToForeground */
/* Demangled: pixTestClipToForeground */
int pixTestClipToForeground(void);

/* Symbol: Java_com_googlecode_leptonica_android_Scale_nativeScaleGeneral */
/* Demangled: Java_com_googlecode_leptonica_android_Scale_nativeScaleGeneral */
int Java_com_googlecode_leptonica_android_Scale_nativeScaleGeneral(void);

/* Symbol: pixReadJp2k */
/* Demangled: pixReadJp2k */
int pixReadJp2k(void);

/* Symbol: stringJoinIP */
/* Demangled: stringJoinIP */
int stringJoinIP(void);

/* Symbol: seedfillGrayInvLow */
/* Demangled: seedfillGrayInvLow */
int seedfillGrayInvLow(void);

/* Symbol: l_byteaWrite */
/* Demangled: l_byteaWrite */
int l_byteaWrite(void);

/* Symbol: selaDisplayInPix */
/* Demangled: selaDisplayInPix */
int selaDisplayInPix(void);

/* Symbol: pixDisplayColorArray */
/* Demangled: pixDisplayColorArray */
int pixDisplayColorArray(void);

/* Symbol: startWallTimer */
/* Demangled: startWallTimer */
int startWallTimer(void);

/* Symbol: bbufferReadStream */
/* Demangled: bbufferReadStream */
int bbufferReadStream(void);

/* Symbol: pixThinConnectedBySet */
/* Demangled: pixThinConnectedBySet */
int pixThinConnectedBySet(void);

/* Symbol: pixConvertForPSWrap */
/* Demangled: pixConvertForPSWrap */
int pixConvertForPSWrap(void);

/* Symbol: pixRotate3Shear */
/* Demangled: pixRotate3Shear */
int pixRotate3Shear(void);

/* Symbol: pixBlendColorByChannel */
/* Demangled: pixBlendColorByChannel */
int pixBlendColorByChannel(void);

/* Symbol: pixColorGrayRegionsCmap */
/* Demangled: pixColorGrayRegionsCmap */
int pixColorGrayRegionsCmap(void);

/* Symbol: sarrayClone */
/* Demangled: sarrayClone */
int sarrayClone(void);

/* Symbol: splitStringToParagraphs */
/* Demangled: splitStringToParagraphs */
int splitStringToParagraphs(void);

/* Symbol: jbDataDestroy */
/* Demangled: jbDataDestroy */
int jbDataDestroy(void);

/* Symbol: pixFlipPixel */
/* Demangled: pixFlipPixel */
int pixFlipPixel(void);

/* Symbol: pixDilateCompBrickExtendDwa */
/* Demangled: pixDilateCompBrickExtendDwa */
int pixDilateCompBrickExtendDwa(void);

/* Symbol: pixaaReadMem */
/* Demangled: pixaaReadMem */
int pixaaReadMem(void);

/* Symbol: numaGetIValue */
/* Demangled: numaGetIValue */
int numaGetIValue(void);

/* Symbol: pixBilinearPtaGray */
/* Demangled: pixBilinearPtaGray */
int pixBilinearPtaGray(void);

/* Symbol: recogPreSplittingFilter */
/* Demangled: recogPreSplittingFilter */
int recogPreSplittingFilter(void);

/* Symbol: pixFillBgFromBorder */
/* Demangled: pixFillBgFromBorder */
int pixFillBgFromBorder(void);

/* Symbol: fpixResizeImageData */
/* Demangled: fpixResizeImageData */
int fpixResizeImageData(void);

/* Symbol: pixSetDepth */
/* Demangled: pixSetDepth */
int pixSetDepth(void);

/* Symbol: lheapAdd */
/* Demangled: lheapAdd */
int lheapAdd(void);

/* Symbol: fpixRasterop */
/* Demangled: fpixRasterop */
int fpixRasterop(void);

/* Symbol: pixOpenGray3 */
/* Demangled: pixOpenGray3 */
int pixOpenGray3(void);

/* Symbol: Java_com_googlecode_leptonica_android_MorphApp_nativePixTophat */
/* Demangled: Java_com_googlecode_leptonica_android_MorphApp_nativePixTophat */
int Java_com_googlecode_leptonica_android_MorphApp_nativePixTophat(void);

/* Symbol: pixScaleAreaMap */
/* Demangled: pixScaleAreaMap */
int pixScaleAreaMap(void);

/* Symbol: lheapCreate */
/* Demangled: lheapCreate */
int lheapCreate(void);

/* Symbol: sarrayCreateWordsFromString */
/* Demangled: sarrayCreateWordsFromString */
int sarrayCreateWordsFromString(void);

/* Symbol: boxBoundingRegion */
/* Demangled: boxBoundingRegion */
int boxBoundingRegion(void);

/* Symbol: pixBackgroundNormMorph */
/* Demangled: pixBackgroundNormMorph */
int pixBackgroundNormMorph(void);

/* Symbol: pixProjectiveSampledPta */
/* Demangled: pixProjectiveSampledPta */
int pixProjectiveSampledPta(void);

/* Symbol: pixFewColorsMedianCutQuantMixed */
/* Demangled: pixFewColorsMedianCutQuantMixed */
int pixFewColorsMedianCutQuantMixed(void);

/* Symbol: fpixSetPixel */
/* Demangled: fpixSetPixel */
int fpixSetPixel(void);

/* Symbol: pixacompCreateFromPixa */
/* Demangled: pixacompCreateFromPixa */
int pixacompCreateFromPixa(void);

/* Symbol: pixMaskConnComp */
/* Demangled: pixMaskConnComp */
int pixMaskConnComp(void);

/* Symbol: pixaDisplayTiledInRows */
/* Demangled: pixaDisplayTiledInRows */
int pixaDisplayTiledInRows(void);

/* Symbol: boxaLocationRange */
/* Demangled: boxaLocationRange */
int boxaLocationRange(void);

/* Symbol: numaEmpty */
/* Demangled: numaEmpty */
int numaEmpty(void);

/* Symbol: pixCopyRGBComponent */
/* Demangled: pixCopyRGBComponent */
int pixCopyRGBComponent(void);

/* Symbol: jbDataWrite */
/* Demangled: jbDataWrite */
int jbDataWrite(void);

/* Symbol: pixcmapGetNearestGrayIndex */
/* Demangled: pixcmapGetNearestGrayIndex */
int pixcmapGetNearestGrayIndex(void);

/* Symbol: pixcmapDestroy */
/* Demangled: pixcmapDestroy */
int pixcmapDestroy(void);

/* Symbol: boxaSmoothSequenceLS */
/* Demangled: boxaSmoothSequenceLS */
int boxaSmoothSequenceLS(void);

/* Symbol: pixApplyLocalThreshold */
/* Demangled: pixApplyLocalThreshold */
int pixApplyLocalThreshold(void);

/* Symbol: pixCloseGeneralized */
/* Demangled: pixCloseGeneralized */
int pixCloseGeneralized(void);

/* Symbol: pixRemoveAlpha */
/* Demangled: pixRemoveAlpha */
int pixRemoveAlpha(void);

/* Symbol: boxaaExtendArrayToSize */
/* Demangled: boxaaExtendArrayToSize */
int boxaaExtendArrayToSize(void);

/* Symbol: pixConvertLossless */
/* Demangled: pixConvertLossless */
int pixConvertLossless(void);

/* Symbol: l_setDataDibit */
/* Demangled: l_setDataDibit */
int l_setDataDibit(void);

/* Symbol: pixLinearMapToTargetColor */
/* Demangled: pixLinearMapToTargetColor */
int pixLinearMapToTargetColor(void);

/* Symbol: pixBackgroundNormFlex */
/* Demangled: pixBackgroundNormFlex */
int pixBackgroundNormFlex(void);

/* Symbol: pixGetLocalSkewAngles */
/* Demangled: pixGetLocalSkewAngles */
int pixGetLocalSkewAngles(void);

/* Symbol: pixTilingDestroy */
/* Demangled: pixTilingDestroy */
int pixTilingDestroy(void);

/* Symbol: boxaGetAverageSize */
/* Demangled: boxaGetAverageSize */
int boxaGetAverageSize(void);

/* Symbol: fpixGetWpl */
/* Demangled: fpixGetWpl */
int fpixGetWpl(void);

/* Symbol: pixExpandBinaryReplicate */
/* Demangled: pixExpandBinaryReplicate */
int pixExpandBinaryReplicate(void);

/* Symbol: pixcmapGetFreeCount */
/* Demangled: pixcmapGetFreeCount */
int pixcmapGetFreeCount(void);

/* Symbol: pixaDisplayTiledByIndex */
/* Demangled: pixaDisplayTiledByIndex */
int pixaDisplayTiledByIndex(void);

/* Symbol: fpixRotate90 */
/* Demangled: fpixRotate90 */
int fpixRotate90(void);

/* Symbol: pixQuadraticVShearLI */
/* Demangled: pixQuadraticVShearLI */
int pixQuadraticVShearLI(void);

/* Symbol: pixWriteJpeg */
/* Demangled: pixWriteJpeg */
int pixWriteJpeg(void);

/* Symbol: numaHasOnlyIntegers */
/* Demangled: numaHasOnlyIntegers */
int numaHasOnlyIntegers(void);

/* Symbol: wshedRenderFill */
/* Demangled: wshedRenderFill */
int wshedRenderFill(void);

/* Symbol: pixCompareRankDifference */
/* Demangled: pixCompareRankDifference */
int pixCompareRankDifference(void);

/* Symbol: fgetJp2kResolution */
/* Demangled: fgetJp2kResolution */
int fgetJp2kResolution(void);

/* Symbol: pixGetAverageValue */
/* Demangled: pixGetAverageValue */
int pixGetAverageValue(void);

/* Symbol: pixaCompareInPdf */
/* Demangled: pixaCompareInPdf */
int pixaCompareInPdf(void);

/* Symbol: scaleColorLILow */
/* Demangled: scaleColorLILow */
int scaleColorLILow(void);

/* Symbol: pixAbsDiffByColumn */
/* Demangled: pixAbsDiffByColumn */
int pixAbsDiffByColumn(void);

/* Symbol: convertToPdf */
/* Demangled: convertToPdf */
int convertToPdf(void);

/* Symbol: pixGetRankValue */
/* Demangled: pixGetRankValue */
int pixGetRankValue(void);

/* Symbol: recogSetTemplateType */
/* Demangled: recogSetTemplateType */
int recogSetTemplateType(void);

/* Symbol: sarrayGetString */
/* Demangled: sarrayGetString */
int sarrayGetString(void);

/* Symbol: boxaaFlattenAligned */
/* Demangled: boxaaFlattenAligned */
int boxaaFlattenAligned(void);

/* Symbol: fpixaGetFPix */
/* Demangled: fpixaGetFPix */
int fpixaGetFPix(void);

/* Symbol: pixMakeHistoSV */
/* Demangled: pixMakeHistoSV */
int pixMakeHistoSV(void);

/* Symbol: pixGetLinePtrs */
/* Demangled: pixGetLinePtrs */
int pixGetLinePtrs(void);

/* Symbol: pixAbsDifference */
/* Demangled: pixAbsDifference */
int pixAbsDifference(void);

/* Symbol: pixaDisplayOnColor */
/* Demangled: pixaDisplayOnColor */
int pixaDisplayOnColor(void);

/* Symbol: rasteropLow */
/* Demangled: rasteropLow */
int rasteropLow(void);

/* Symbol: pixCountConnComp */
/* Demangled: pixCountConnComp */
int pixCountConnComp(void);

/* Symbol: ccbaDisplayImage1 */
/* Demangled: ccbaDisplayImage1 */
int ccbaDisplayImage1(void);

/* Symbol: pixErodeBrick */
/* Demangled: pixErodeBrick */
int pixErodeBrick(void);

/* Symbol: dewarpaApplyDisparityBoxa */
/* Demangled: dewarpaApplyDisparityBoxa */
int dewarpaApplyDisparityBoxa(void);

/* Symbol: numaReverse */
/* Demangled: numaReverse */
int numaReverse(void);

/* Symbol: pixacompGetPixDimensions */
/* Demangled: pixacompGetPixDimensions */
int pixacompGetPixDimensions(void);

/* Symbol: recogDestroyDid */
/* Demangled: recogDestroyDid */
int recogDestroyDid(void);

/* Symbol: ccbaDisplayImage2 */
/* Demangled: ccbaDisplayImage2 */
int ccbaDisplayImage2(void);

/* Symbol: pixGetCmapHistogram */
/* Demangled: pixGetCmapHistogram */
int pixGetCmapHistogram(void);

/* Symbol: fpixScaleByInteger */
/* Demangled: fpixScaleByInteger */
int fpixScaleByInteger(void);

/* Symbol: pixaRotateOrth */
/* Demangled: pixaRotateOrth */
int pixaRotateOrth(void);

/* Symbol: setMsgSeverity */
/* Demangled: setMsgSeverity */
int setMsgSeverity(void);

/* Symbol: pixOpen */
/* Demangled: pixOpen */
int pixOpen(void);

/* Symbol: fpixGetRefcount */
/* Demangled: fpixGetRefcount */
int fpixGetRefcount(void);

/* Symbol: l_asetGetNext */
/* Demangled: l_asetGetNext */
int l_asetGetNext(void);

/* Symbol: pixSetSpp */
/* Demangled: pixSetSpp */
int pixSetSpp(void);

/* Symbol: sarrayWrite */
/* Demangled: sarrayWrite */
int sarrayWrite(void);

/* Symbol: pixSelectedLocalExtrema */
/* Demangled: pixSelectedLocalExtrema */
int pixSelectedLocalExtrema(void);

/* Symbol: bbufferCreate */
/* Demangled: bbufferCreate */
int bbufferCreate(void);

/* Symbol: sarrayAddString */
/* Demangled: sarrayAddString */
int sarrayAddString(void);

/* Symbol: convertLABToXYZ */
/* Demangled: convertLABToXYZ */
int convertLABToXYZ(void);

/* Symbol: saConvertUnscaledFilesToPdf */
/* Demangled: saConvertUnscaledFilesToPdf */
int saConvertUnscaledFilesToPdf(void);

/* Symbol: pixaMakeSizeIndicator */
/* Demangled: pixaMakeSizeIndicator */
int pixaMakeSizeIndicator(void);

/* Symbol: l_getDataDibit */
/* Demangled: l_getDataDibit */
int l_getDataDibit(void);

/* Symbol: pixReadMemJp2k */
/* Demangled: pixReadMemJp2k */
int pixReadMemJp2k(void);

/* Symbol: pixClipRectangle */
/* Demangled: pixClipRectangle */
int pixClipRectangle(void);

/* Symbol: boxaSelectBySize */
/* Demangled: boxaSelectBySize */
int boxaSelectBySize(void);

/* Symbol: convertRGBToHSV */
/* Demangled: convertRGBToHSV */
int convertRGBToHSV(void);

/* Symbol: freadHeaderJp2k */
/* Demangled: freadHeaderJp2k */
int freadHeaderJp2k(void);

/* Symbol: readHeaderJp2k */
/* Demangled: readHeaderJp2k */
int readHeaderJp2k(void);

/* Symbol: pixColumnStats */
/* Demangled: pixColumnStats */
int pixColumnStats(void);

/* Symbol: pixaaDisplayTiledAndScaled */
/* Demangled: pixaaDisplayTiledAndScaled */
int pixaaDisplayTiledAndScaled(void);

/* Symbol: makeMosaicStrips */
/* Demangled: makeMosaicStrips */
int makeMosaicStrips(void);

/* Symbol: pixSeedfill4 */
/* Demangled: pixSeedfill4 */
int pixSeedfill4(void);

/* Symbol: dpixSetPixel */
/* Demangled: dpixSetPixel */
int dpixSetPixel(void);

/* Symbol: pixScaleWithAlpha */
/* Demangled: pixScaleWithAlpha */
int pixScaleWithAlpha(void);

/* Symbol: pixHShearCorner */
/* Demangled: pixHShearCorner */
int pixHShearCorner(void);

/* Symbol: pixaaWrite */
/* Demangled: pixaaWrite */
int pixaaWrite(void);

/* Symbol: pmsDestroy */
/* Demangled: pmsDestroy */
int pmsDestroy(void);

/* Symbol: pixFindMaxRuns */
/* Demangled: pixFindMaxRuns */
int pixFindMaxRuns(void);

/* Symbol: bmfGetWidth */
/* Demangled: bmfGetWidth */
int bmfGetWidth(void);

/* Symbol: splitPathAtDirectory */
/* Demangled: splitPathAtDirectory */
int splitPathAtDirectory(void);

/* Symbol: fpixCreateTemplate */
/* Demangled: fpixCreateTemplate */
int fpixCreateTemplate(void);

/* Symbol: ptaSetPt */
/* Demangled: ptaSetPt */
int ptaSetPt(void);

/* Symbol: pixGetRankColorArray */
/* Demangled: pixGetRankColorArray */
int pixGetRankColorArray(void);

/* Symbol: getResLetterPage */
/* Demangled: getResLetterPage */
int getResLetterPage(void);

/* Symbol: l_dnaaCreateFull */
/* Demangled: l_dnaaCreateFull */
int l_dnaaCreateFull(void);

/* Symbol: pixErodeGray3 */
/* Demangled: pixErodeGray3 */
int pixErodeGray3(void);

/* Symbol: ptaTestIntersection */
/* Demangled: ptaTestIntersection */
int ptaTestIntersection(void);

/* Symbol: Java_com_googlecode_leptonica_android_Box_nativeDestroy */
/* Demangled: Java_com_googlecode_leptonica_android_Box_nativeDestroy */
int Java_com_googlecode_leptonica_android_Box_nativeDestroy(void);

/* Symbol: pixSeedfill8 */
/* Demangled: pixSeedfill8 */
int pixSeedfill8(void);

/* Symbol: pixDisplayWithTitle */
/* Demangled: pixDisplayWithTitle */
int pixDisplayWithTitle(void);

/* Symbol: l_dnaaGetDnaCount */
/* Demangled: l_dnaaGetDnaCount */
int l_dnaaGetDnaCount(void);

/* Symbol: l_asetSize */
/* Demangled: l_asetSize */
int l_asetSize(void);

/* Symbol: pixDeserializeFromMemory */
/* Demangled: pixDeserializeFromMemory */
int pixDeserializeFromMemory(void);

/* Symbol: pixRemoveColormapGeneral */
/* Demangled: pixRemoveColormapGeneral */
int pixRemoveColormapGeneral(void);

/* Symbol: pixacompWrite */
/* Demangled: pixacompWrite */
int pixacompWrite(void);

/* Symbol: displayHSVColorRange */
/* Demangled: displayHSVColorRange */
int displayHSVColorRange(void);

/* Symbol: pixAverageByRow */
/* Demangled: pixAverageByRow */
int pixAverageByRow(void);

/* Symbol: boxaCompareRegions */
/* Demangled: boxaCompareRegions */
int boxaCompareRegions(void);

/* Symbol: dewarpaInfo */
/* Demangled: dewarpaInfo */
int dewarpaInfo(void);

/* Symbol: pmsCreate */
/* Demangled: pmsCreate */
int pmsCreate(void);

/* Symbol: numaQuantizeCrossingsByWindow */
/* Demangled: numaQuantizeCrossingsByWindow */
int numaQuantizeCrossingsByWindow(void);

/* Symbol: l_binaryReadSelectStream */
/* Demangled: l_binaryReadSelectStream */
int l_binaryReadSelectStream(void);

/* Symbol: l_getDataByte */
/* Demangled: l_getDataByte */
int l_getDataByte(void);

/* Symbol: pixSearchBinaryMaze */
/* Demangled: pixSearchBinaryMaze */
int pixSearchBinaryMaze(void);

/* Symbol: pixConvertTo32 */
/* Demangled: pixConvertTo32 */
int pixConvertTo32(void);

/* Symbol: numaSetValue */
/* Demangled: numaSetValue */
int numaSetValue(void);

/* Symbol: ptaEmpty */
/* Demangled: ptaEmpty */
int ptaEmpty(void);

/* Symbol: pixMeanSquareAccum */
/* Demangled: pixMeanSquareAccum */
int pixMeanSquareAccum(void);

/* Symbol: pixCreateHeader */
/* Demangled: pixCreateHeader */
int pixCreateHeader(void);

/* Symbol: pixaaExtendArray */
/* Demangled: pixaaExtendArray */
int pixaaExtendArray(void);

/* Symbol: scaleSmoothLow */
/* Demangled: scaleSmoothLow */
int scaleSmoothLow(void);

/* Symbol: Java_com_googlecode_leptonica_android_Pix_nativeGetRefCount */
/* Demangled: Java_com_googlecode_leptonica_android_Pix_nativeGetRefCount */
int Java_com_googlecode_leptonica_android_Pix_nativeGetRefCount(void);

/* Symbol: pixLinearTRCTiled */
/* Demangled: pixLinearTRCTiled */
int pixLinearTRCTiled(void);

/* Symbol: pixGetAutoFormat */
/* Demangled: pixGetAutoFormat */
int pixGetAutoFormat(void);

/* Symbol: Java_com_googlecode_leptonica_android_Pixa_nativeJoin */
/* Demangled: Java_com_googlecode_leptonica_android_Pixa_nativeJoin */
int Java_com_googlecode_leptonica_android_Pixa_nativeJoin(void);

/* Symbol: pixConvertToFPix */
/* Demangled: pixConvertToFPix */
int pixConvertToFPix(void);

/* Symbol: pixAddRepeatedBorder */
/* Demangled: pixAddRepeatedBorder */
int pixAddRepeatedBorder(void);

/* Symbol: getRGBFromIndex */
/* Demangled: getRGBFromIndex */
int getRGBFromIndex(void);

/* Symbol: pixDitherToBinary */
/* Demangled: pixDitherToBinary */
int pixDitherToBinary(void);

/* Symbol: pixThresholdTo2bpp */
/* Demangled: pixThresholdTo2bpp */
int pixThresholdTo2bpp(void);

/* Symbol: fgetJpegComment */
/* Demangled: fgetJpegComment */
int fgetJpegComment(void);

/* Symbol: kernelRead */
/* Demangled: kernelRead */
int kernelRead(void);

/* Symbol: pixEndianTwoByteSwapNew */
/* Demangled: pixEndianTwoByteSwapNew */
int pixEndianTwoByteSwapNew(void);

/* Symbol: pixAbsDiffOnLine */
/* Demangled: pixAbsDiffOnLine */
int pixAbsDiffOnLine(void);

/* Symbol: numaEvalHaarSum */
/* Demangled: numaEvalHaarSum */
int numaEvalHaarSum(void);

/* Symbol: pixDeskew */
/* Demangled: pixDeskew */
int pixDeskew(void);

/* Symbol: logScaleRGBVal */
/* Demangled: logScaleRGBVal */
int logScaleRGBVal(void);

/* Symbol: convertFilesFittedToPS */
/* Demangled: convertFilesFittedToPS */
int convertFilesFittedToPS(void);

/* Symbol: splitPathAtExtension */
/* Demangled: splitPathAtExtension */
int splitPathAtExtension(void);

/* Symbol: pixacompDestroy */
/* Demangled: pixacompDestroy */
int pixacompDestroy(void);

/* Symbol: fpixaDisplayQuadtree */
/* Demangled: fpixaDisplayQuadtree */
int fpixaDisplayQuadtree(void);

/* Symbol: wshedRenderColors */
/* Demangled: wshedRenderColors */
int wshedRenderColors(void);

/* Symbol: boxaaSelectRange */
/* Demangled: boxaaSelectRange */
int boxaaSelectRange(void);

/* Symbol: numaGetSum */
/* Demangled: numaGetSum */
int numaGetSum(void);

/* Symbol: fpixConvertToDPix */
/* Demangled: fpixConvertToDPix */
int fpixConvertToDPix(void);

/* Symbol: l_dnaHashGetDna */
/* Demangled: l_dnaHashGetDna */
int l_dnaHashGetDna(void);

/* Symbol: pixTilingGetSize */
/* Demangled: pixTilingGetSize */
int pixTilingGetSize(void);

/* Symbol: pixScaleGrayLI */
/* Demangled: pixScaleGrayLI */
int pixScaleGrayLI(void);

/* Symbol: rchDestroy */
/* Demangled: rchDestroy */
int rchDestroy(void);

/* Symbol: lept_rm */
/* Demangled: lept_rm */
int lept_rm(void);

/* Symbol: pixGetRankValueMaskedRGB */
/* Demangled: pixGetRankValueMaskedRGB */
int pixGetRankValueMaskedRGB(void);

/* Symbol: fpixaChangeRefcount */
/* Demangled: fpixaChangeRefcount */
int fpixaChangeRefcount(void);

/* Symbol: pixSetLowContrast */
/* Demangled: pixSetLowContrast */
int pixSetLowContrast(void);

/* Symbol: numaWindowedMean */
/* Demangled: numaWindowedMean */
int numaWindowedMean(void);

/* Symbol: l_amapInsert */
/* Demangled: l_amapInsert */
int l_amapInsert(void);

/* Symbol: l_generateCIDataForPdf */
/* Demangled: l_generateCIDataForPdf */
int l_generateCIDataForPdf(void);

/* Symbol: pixaConvertToSameDepth */
/* Demangled: pixaConvertToSameDepth */
int pixaConvertToSameDepth(void);

/* Symbol: pixCensusTransform */
/* Demangled: pixCensusTransform */
int pixCensusTransform(void);

/* Symbol: dewarpCreateRef */
/* Demangled: dewarpCreateRef */
int dewarpCreateRef(void);

/* Symbol: fpixReadMem */
/* Demangled: fpixReadMem */
int fpixReadMem(void);

/* Symbol: pixGetRGBPixel */
/* Demangled: pixGetRGBPixel */
int pixGetRGBPixel(void);

/* Symbol: recogAddSamples */
/* Demangled: recogAddSamples */
int recogAddSamples(void);

/* Symbol: sarrayConvertWordsToLines */
/* Demangled: sarrayConvertWordsToLines */
int sarrayConvertWordsToLines(void);

/* Symbol: ptaGetPt */
/* Demangled: ptaGetPt */
int ptaGetPt(void);

/* Symbol: numaGetSortIndex */
/* Demangled: numaGetSortIndex */
int numaGetSortIndex(void);

/* Symbol: zlibUncompress */
/* Demangled: zlibUncompress */
int zlibUncompress(void);

/* Symbol: pixaaReadFromFiles */
/* Demangled: pixaaReadFromFiles */
int pixaaReadFromFiles(void);

/* Symbol: ptraaFlattenToPtra */
/* Demangled: ptraaFlattenToPtra */
int ptraaFlattenToPtra(void);

/* Symbol: pixResizeToMatch */
/* Demangled: pixResizeToMatch */
int pixResizeToMatch(void);

/* Symbol: l_compressGrayHistograms */
/* Demangled: l_compressGrayHistograms */
int l_compressGrayHistograms(void);

/* Symbol: pixGenerateFromPta */
/* Demangled: pixGenerateFromPta */
int pixGenerateFromPta(void);

/* Symbol: generatePtaFilledSquare */
/* Demangled: generatePtaFilledSquare */
int generatePtaFilledSquare(void);

/* Symbol: l_amapFind */
/* Demangled: l_amapFind */
int l_amapFind(void);

/* Symbol: pixDilateBrickDwa */
/* Demangled: pixDilateBrickDwa */
int pixDilateBrickDwa(void);

/* Symbol: wshedBasins */
/* Demangled: wshedBasins */
int wshedBasins(void);

/* Symbol: pixOpenGray */
/* Demangled: pixOpenGray */
int pixOpenGray(void);

/* Symbol: pixOctcubeHistogram */
/* Demangled: pixOctcubeHistogram */
int pixOctcubeHistogram(void);

/* Symbol: pixGenerateMaskByValue */
/* Demangled: pixGenerateMaskByValue */
int pixGenerateMaskByValue(void);

/* Symbol: dewarpaDestroy */
/* Demangled: dewarpaDestroy */
int dewarpaDestroy(void);

/* Symbol: dpixScaleByInteger */
/* Demangled: dpixScaleByInteger */
int dpixScaleByInteger(void);

/* Symbol: makeGrayQuantColormapArb */
/* Demangled: makeGrayQuantColormapArb */
int makeGrayQuantColormapArb(void);

/* Symbol: numaInterpolateArbxInterval */
/* Demangled: numaInterpolateArbxInterval */
int numaInterpolateArbxInterval(void);

/* Symbol: pixChooseOutputFormat */
/* Demangled: pixChooseOutputFormat */
int pixChooseOutputFormat(void);

/* Symbol: boxaIsFull */
/* Demangled: boxaIsFull */
int boxaIsFull(void);

/* Symbol: pixCleanBackgroundToWhite */
/* Demangled: pixCleanBackgroundToWhite */
int pixCleanBackgroundToWhite(void);

/* Symbol: pixAffinePtaGray */
/* Demangled: pixAffinePtaGray */
int pixAffinePtaGray(void);

/* Symbol: boxOverlapFraction */
/* Demangled: boxOverlapFraction */
int boxOverlapFraction(void);

/* Symbol: ccbaGenerateGlobalLocs */
/* Demangled: ccbaGenerateGlobalLocs */
int ccbaGenerateGlobalLocs(void);

/* Symbol: selRotateOrth */
/* Demangled: selRotateOrth */
int selRotateOrth(void);

/* Symbol: convertFilesTo1bpp */
/* Demangled: convertFilesTo1bpp */
int convertFilesTo1bpp(void);

/* Symbol: make8To2DitherTables */
/* Demangled: make8To2DitherTables */
int make8To2DitherTables(void);

/* Symbol: pixWriteMemJp2k */
/* Demangled: pixWriteMemJp2k */
int pixWriteMemJp2k(void);

/* Symbol: pixCloseSafe */
/* Demangled: pixCloseSafe */
int pixCloseSafe(void);

/* Symbol: numaAddBorder */
/* Demangled: numaAddBorder */
int numaAddBorder(void);

/* Symbol: pixReversalProfile */
/* Demangled: pixReversalProfile */
int pixReversalProfile(void);

/* Symbol: pixThreshold8 */
/* Demangled: pixThreshold8 */
int pixThreshold8(void);

/* Symbol: findTiffCompression */
/* Demangled: findTiffCompression */
int findTiffCompression(void);

/* Symbol: pixcmapGetCount */
/* Demangled: pixcmapGetCount */
int pixcmapGetCount(void);

/* Symbol: pixcmapToOctcubeLUT */
/* Demangled: pixcmapToOctcubeLUT */
int pixcmapToOctcubeLUT(void);

/* Symbol: pixScaleToSize */
/* Demangled: pixScaleToSize */
int pixScaleToSize(void);

/* Symbol: pixGlobalNormNoSatRGB */
/* Demangled: pixGlobalNormNoSatRGB */
int pixGlobalNormNoSatRGB(void);

/* Symbol: pixConvertTo32BySampling */
/* Demangled: pixConvertTo32BySampling */
int pixConvertTo32BySampling(void);

/* Symbol: makeSumTabSG2 */
/* Demangled: makeSumTabSG2 */
int makeSumTabSG2(void);

/* Symbol: l_rbtreeDestroy */
/* Demangled: l_rbtreeDestroy */
int l_rbtreeDestroy(void);

/* Symbol: numaGetCountRelativeToZero */
/* Demangled: numaGetCountRelativeToZero */
int numaGetCountRelativeToZero(void);

/* Symbol: ptraDestroy */
/* Demangled: ptraDestroy */
int ptraDestroy(void);

/* Symbol: makeSumTabSG3 */
/* Demangled: makeSumTabSG3 */
int makeSumTabSG3(void);

/* Symbol: pixSubtractGray */
/* Demangled: pixSubtractGray */
int pixSubtractGray(void);

/* Symbol: l_dnaMakeHistoByHash */
/* Demangled: l_dnaMakeHistoByHash */
int l_dnaMakeHistoByHash(void);

/* Symbol: pixRenderPolylineBlend */
/* Demangled: pixRenderPolylineBlend */
int pixRenderPolylineBlend(void);

/* Symbol: ditherToBinaryLineLow */
/* Demangled: ditherToBinaryLineLow */
int ditherToBinaryLineLow(void);

/* Symbol: listReverse */
/* Demangled: listReverse */
int listReverse(void);

/* Symbol: getResA4Page */
/* Demangled: getResA4Page */
int getResA4Page(void);

/* Symbol: recogGetClassIndex */
/* Demangled: recogGetClassIndex */
int recogGetClassIndex(void);

/* Symbol: makeSumTabSG4 */
/* Demangled: makeSumTabSG4 */
int makeSumTabSG4(void);

/* Symbol: pixFindEqualValues */
/* Demangled: pixFindEqualValues */
int pixFindEqualValues(void);

/* Symbol: createMatrix2dTranslate */
/* Demangled: createMatrix2dTranslate */
int createMatrix2dTranslate(void);

/* Symbol: gplotMakeOutput */
/* Demangled: gplotMakeOutput */
int gplotMakeOutput(void);

/* Symbol: pixGeneratePtaBoundary */
/* Demangled: pixGeneratePtaBoundary */
int pixGeneratePtaBoundary(void);

/* Symbol: saConvertFilesToPdf */
/* Demangled: saConvertFilesToPdf */
int saConvertFilesToPdf(void);

/* Symbol: Java_com_googlecode_leptonica_android_Boxa_nativeDestroy */
/* Demangled: Java_com_googlecode_leptonica_android_Boxa_nativeDestroy */
int Java_com_googlecode_leptonica_android_Boxa_nativeDestroy(void);

/* Symbol: composeRGBAPixel */
/* Demangled: composeRGBAPixel */
int composeRGBAPixel(void);

/* Symbol: pixcmapConvertHSVToRGB */
/* Demangled: pixcmapConvertHSVToRGB */
int pixcmapConvertHSVToRGB(void);

/* Symbol: pixLocateBarcodes */
/* Demangled: pixLocateBarcodes */
int pixLocateBarcodes(void);

/* Symbol: dpixCreateTemplate */
/* Demangled: dpixCreateTemplate */
int dpixCreateTemplate(void);

/* Symbol: boxaaFlattenToBoxa */
/* Demangled: boxaaFlattenToBoxa */
int boxaaFlattenToBoxa(void);

/* Symbol: pixMedianCutHisto */
/* Demangled: pixMedianCutHisto */
int pixMedianCutHisto(void);

/* Symbol: numaGetHistogramStatsOnInterval */
/* Demangled: numaGetHistogramStatsOnInterval */
int numaGetHistogramStatsOnInterval(void);

/* Symbol: ptaTranslate */
/* Demangled: ptaTranslate */
int ptaTranslate(void);

/* Symbol: jbGetULCorners */
/* Demangled: jbGetULCorners */
int jbGetULCorners(void);

/* Symbol: pixGenTextblockMask */
/* Demangled: pixGenTextblockMask */
int pixGenTextblockMask(void);

/* Symbol: pixaScaleToSizeRel */
/* Demangled: pixaScaleToSizeRel */
int pixaScaleToSizeRel(void);

/* Symbol: pixelLinearMapToTargetColor */
/* Demangled: pixelLinearMapToTargetColor */
int pixelLinearMapToTargetColor(void);

/* Symbol: pixaWriteCompressedToPS */
/* Demangled: pixaWriteCompressedToPS */
int pixaWriteCompressedToPS(void);

/* Symbol: l_asetInsert */
/* Demangled: l_asetInsert */
int l_asetInsert(void);

/* Symbol: pixColorizeGray */
/* Demangled: pixColorizeGray */
int pixColorizeGray(void);

/* Symbol: pixDilateCompBrickDwa */
/* Demangled: pixDilateCompBrickDwa */
int pixDilateCompBrickDwa(void);

/* Symbol: numaaTruncate */
/* Demangled: numaaTruncate */
int numaaTruncate(void);

/* Symbol: numaDilate */
/* Demangled: numaDilate */
int numaDilate(void);

/* Symbol: sarrayGetRefcount */
/* Demangled: sarrayGetRefcount */
int sarrayGetRefcount(void);

/* Symbol: pixSubsampleBoundaryPixels */
/* Demangled: pixSubsampleBoundaryPixels */
int pixSubsampleBoundaryPixels(void);

/* Symbol: pixGenerateMaskByDiscr32 */
/* Demangled: pixGenerateMaskByDiscr32 */
int pixGenerateMaskByDiscr32(void);

/* Symbol: Java_com_googlecode_leptonica_android_MorphApp_nativePixFastTophat */
/* Demangled: Java_com_googlecode_leptonica_android_MorphApp_nativePixFastTophat */
int Java_com_googlecode_leptonica_android_MorphApp_nativePixFastTophat(void);

/* Symbol: boxAdjustSides */
/* Demangled: boxAdjustSides */
int boxAdjustSides(void);

/* Symbol: numaSortIndexAutoSelect */
/* Demangled: numaSortIndexAutoSelect */
int numaSortIndexAutoSelect(void);

/* Symbol: pixErodeCompBrickDwa */
/* Demangled: pixErodeCompBrickDwa */
int pixErodeCompBrickDwa(void);

/* Symbol: pixaaScaleToSizeVar */
/* Demangled: pixaaScaleToSizeVar */
int pixaaScaleToSizeVar(void);

/* Symbol: pixConvert8To16 */
/* Demangled: pixConvert8To16 */
int pixConvert8To16(void);

/* Symbol: pixaGetBoxaCount */
/* Demangled: pixaGetBoxaCount */
int pixaGetBoxaCount(void);

/* Symbol: numaChangeRefcount */
/* Demangled: numaChangeRefcount */
int numaChangeRefcount(void);

/* Symbol: pmsGetAlloc */
/* Demangled: pmsGetAlloc */
int pmsGetAlloc(void);

/* Symbol: extractNumberFromFilename */
/* Demangled: extractNumberFromFilename */
int extractNumberFromFilename(void);

/* Symbol: pixWriteStreamJpeg */
/* Demangled: pixWriteStreamJpeg */
int pixWriteStreamJpeg(void);

/* Symbol: pixaSelectByPerimSizeRatio */
/* Demangled: pixaSelectByPerimSizeRatio */
int pixaSelectByPerimSizeRatio(void);

/* Symbol: convertTiffMultipageToPS */
/* Demangled: convertTiffMultipageToPS */
int convertTiffMultipageToPS(void);

/* Symbol: ptaGetLinearLSF */
/* Demangled: ptaGetLinearLSF */
int ptaGetLinearLSF(void);

/* Symbol: pixBilinearColor */
/* Demangled: pixBilinearColor */
int pixBilinearColor(void);

/* Symbol: boxTransformOrdered */
/* Demangled: boxTransformOrdered */
int boxTransformOrdered(void);

/* Symbol: saConvertUnscaledFilesToPdfData */
/* Demangled: saConvertUnscaledFilesToPdfData */
int saConvertUnscaledFilesToPdfData(void);

/* Symbol: pixAddAlphaTo1bpp */
/* Demangled: pixAddAlphaTo1bpp */
int pixAddAlphaTo1bpp(void);

/* Symbol: pixSetXRes */
/* Demangled: pixSetXRes */
int pixSetXRes(void);

/* Symbol: pixCountPixels */
/* Demangled: pixCountPixels */
int pixCountPixels(void);

/* Symbol: pixCopyInputFormat */
/* Demangled: pixCopyInputFormat */
int pixCopyInputFormat(void);

/* Symbol: getImagelibVersions */
/* Demangled: getImagelibVersions */
int getImagelibVersions(void);

/* Symbol: boxSeparationDistance */
/* Demangled: boxSeparationDistance */
int boxSeparationDistance(void);

/* Symbol: pixGetPSNR */
/* Demangled: pixGetPSNR */
int pixGetPSNR(void);

/* Symbol: pixaDisplayTiled */
/* Demangled: pixaDisplayTiled */
int pixaDisplayTiled(void);

/* Symbol: boxaBinSort */
/* Demangled: boxaBinSort */
int boxaBinSort(void);

/* Symbol: pixWordBoxesByDilation */
/* Demangled: pixWordBoxesByDilation */
int pixWordBoxesByDilation(void);

/* Symbol: numaMakeRankFromHistogram */
/* Demangled: numaMakeRankFromHistogram */
int numaMakeRankFromHistogram(void);

/* Symbol: pixaBinSort */
/* Demangled: pixaBinSort */
int pixaBinSort(void);

/* Symbol: pixaReadFilesSA */
/* Demangled: pixaReadFilesSA */
int pixaReadFilesSA(void);

/* Symbol: pixRotate180 */
/* Demangled: pixRotate180 */
int pixRotate180(void);

/* Symbol: pixColorMagnitude */
/* Demangled: pixColorMagnitude */
int pixColorMagnitude(void);

/* Symbol: l_dnaRead */
/* Demangled: l_dnaRead */
int l_dnaRead(void);

/* Symbol: numaaRead */
/* Demangled: numaaRead */
int numaaRead(void);

/* Symbol: pixSetRGBComponent */
/* Demangled: pixSetRGBComponent */
int pixSetRGBComponent(void);

/* Symbol: ccbaStepChainsToPixCoords */
/* Demangled: ccbaStepChainsToPixCoords */
int ccbaStepChainsToPixCoords(void);

/* Symbol: pixCentroid */
/* Demangled: pixCentroid */
int pixCentroid(void);

/* Symbol: l_rbtreeCreate */
/* Demangled: l_rbtreeCreate */
int l_rbtreeCreate(void);

/* Symbol: dewarpaSetCurvatures */
/* Demangled: dewarpaSetCurvatures */
int dewarpaSetCurvatures(void);

/* Symbol: pixaaInitFull */
/* Demangled: pixaaInitFull */
int pixaaInitFull(void);

/* Symbol: fpixaCopy */
/* Demangled: fpixaCopy */
int fpixaCopy(void);

/* Symbol: projectiveXformPt */
/* Demangled: projectiveXformPt */
int projectiveXformPt(void);

/* Symbol: pixRenderLine */
/* Demangled: pixRenderLine */
int pixRenderLine(void);

/* Symbol: pixFindRepCloseTile */
/* Demangled: pixFindRepCloseTile */
int pixFindRepCloseTile(void);

/* Symbol: pixScaleGrayRank2 */
/* Demangled: pixScaleGrayRank2 */
int pixScaleGrayRank2(void);

/* Symbol: l_getStructStrFromFile */
/* Demangled: l_getStructStrFromFile */
int l_getStructStrFromFile(void);

/* Symbol: pixSauvolaBinarize */
/* Demangled: pixSauvolaBinarize */
int pixSauvolaBinarize(void);

/* Symbol: l_dnaChangeRefcount */
/* Demangled: l_dnaChangeRefcount */
int l_dnaChangeRefcount(void);

/* Symbol: lheapSort */
/* Demangled: lheapSort */
int lheapSort(void);

/* Symbol: freadHeaderPng */
/* Demangled: freadHeaderPng */
int freadHeaderPng(void);

/* Symbol: extractMinMaxComponent */
/* Demangled: extractMinMaxComponent */
int extractMinMaxComponent(void);

/* Symbol: generatePtaaBoxa */
/* Demangled: generatePtaaBoxa */
int generatePtaaBoxa(void);

/* Symbol: pixMirrorDetectDwa */
/* Demangled: pixMirrorDetectDwa */
int pixMirrorDetectDwa(void);

/* Symbol: pixExpandReplicate */
/* Demangled: pixExpandReplicate */
int pixExpandReplicate(void);

/* Symbol: pixBlockrank */
/* Demangled: pixBlockrank */
int pixBlockrank(void);

/* Symbol: l_rbtreeDelete */
/* Demangled: l_rbtreeDelete */
int l_rbtreeDelete(void);

/* Symbol: pixPrintStreamInfo */
/* Demangled: pixPrintStreamInfo */
int pixPrintStreamInfo(void);

/* Symbol: pixFindMaxHorizontalRunOnLine */
/* Demangled: pixFindMaxHorizontalRunOnLine */
int pixFindMaxHorizontalRunOnLine(void);

/* Symbol: scaleToGray4Low */
/* Demangled: scaleToGray4Low */
int scaleToGray4Low(void);

/* Symbol: numaMakeConstant */
/* Demangled: numaMakeConstant */
int numaMakeConstant(void);

/* Symbol: convertRGBToYUV */
/* Demangled: convertRGBToYUV */
int convertRGBToYUV(void);

/* Symbol: getMorphBorderPixelColor */
/* Demangled: getMorphBorderPixelColor */
int getMorphBorderPixelColor(void);

/* Symbol: pixaFindWidthHeightRatio */
/* Demangled: pixaFindWidthHeightRatio */
int pixaFindWidthHeightRatio(void);

/* Symbol: l_productMatVec */
/* Demangled: l_productMatVec */
int l_productMatVec(void);

/* Symbol: pixAdaptThresholdToBinaryGen */
/* Demangled: pixAdaptThresholdToBinaryGen */
int pixAdaptThresholdToBinaryGen(void);

/* Symbol: recogProcessToIdentify */
/* Demangled: recogProcessToIdentify */
int recogProcessToIdentify(void);

/* Symbol: pixWriteStream */
/* Demangled: pixWriteStream */
int pixWriteStream(void);

/* Symbol: numaTransform */
/* Demangled: numaTransform */
int numaTransform(void);

/* Symbol: fpixGetData */
/* Demangled: fpixGetData */
int fpixGetData(void);

/* Symbol: pixaGetDepthInfo */
/* Demangled: pixaGetDepthInfo */
int pixaGetDepthInfo(void);

/* Symbol: pmsCustomDealloc */
/* Demangled: pmsCustomDealloc */
int pmsCustomDealloc(void);

/* Symbol: selWriteStream */
/* Demangled: selWriteStream */
int selWriteStream(void);

/* Symbol: lept_rm_match */
/* Demangled: lept_rm_match */
int lept_rm_match(void);

/* Symbol: Java_com_googlecode_leptonica_android_Pix_nativeGetHeight */
/* Demangled: Java_com_googlecode_leptonica_android_Pix_nativeGetHeight */
int Java_com_googlecode_leptonica_android_Pix_nativeGetHeight(void);

/* Symbol: boxaHandleOverlaps */
/* Demangled: boxaHandleOverlaps */
int boxaHandleOverlaps(void);

/* Symbol: pixUnsharpMaskingGray1D */
/* Demangled: pixUnsharpMaskingGray1D */
int pixUnsharpMaskingGray1D(void);

/* Symbol: makeGaussianKernelSep */
/* Demangled: makeGaussianKernelSep */
int makeGaussianKernelSep(void);

/* Symbol: convertToPdfDataSegmented */
/* Demangled: convertToPdfDataSegmented */
int convertToPdfDataSegmented(void);

/* Symbol: pixGetColorNearMaskBoundary */
/* Demangled: pixGetColorNearMaskBoundary */
int pixGetColorNearMaskBoundary(void);

/* Symbol: freadHeaderPnm */
/* Demangled: freadHeaderPnm */
int freadHeaderPnm(void);

/* Symbol: rasteropUniLow */
/* Demangled: rasteropUniLow */
int rasteropUniLow(void);

/* Symbol: Java_com_googlecode_leptonica_android_Pix_nativeGetData */
/* Demangled: Java_com_googlecode_leptonica_android_Pix_nativeGetData */
int Java_com_googlecode_leptonica_android_Pix_nativeGetData(void);

/* Symbol: boxaReplaceBox */
/* Demangled: boxaReplaceBox */
int boxaReplaceBox(void);

/* Symbol: lheapGetCount */
/* Demangled: lheapGetCount */
int lheapGetCount(void);

/* Symbol: l_dnaRemoveDupsByHash */
/* Demangled: l_dnaRemoveDupsByHash */
int l_dnaRemoveDupsByHash(void);

/* Symbol: makePlotPtaFromNuma */
/* Demangled: makePlotPtaFromNuma */
int makePlotPtaFromNuma(void);

/* Symbol: pixFindLargeRectangles */
/* Demangled: pixFindLargeRectangles */
int pixFindLargeRectangles(void);

/* Symbol: pixAverageOnLine */
/* Demangled: pixAverageOnLine */
int pixAverageOnLine(void);

/* Symbol: seedfillGrayLowSimple */
/* Demangled: seedfillGrayLowSimple */
int seedfillGrayLowSimple(void);

/* Symbol: sudokuTestUniqueness */
/* Demangled: sudokuTestUniqueness */
int sudokuTestUniqueness(void);

/* Symbol: lept_direxists */
/* Demangled: lept_direxists */
int lept_direxists(void);

/* Symbol: pixaVerifyDepth */
/* Demangled: pixaVerifyDepth */
int pixaVerifyDepth(void);

/* Symbol: pixRenderBoxaBlend */
/* Demangled: pixRenderBoxaBlend */
int pixRenderBoxaBlend(void);

/* Symbol: pixProjectivePtaGray */
/* Demangled: pixProjectivePtaGray */
int pixProjectivePtaGray(void);

/* Symbol: pixFindSkewSweep */
/* Demangled: pixFindSkewSweep */
int pixFindSkewSweep(void);

/* Symbol: Java_com_googlecode_leptonica_android_Pix_nativeGetWidth */
/* Demangled: Java_com_googlecode_leptonica_android_Pix_nativeGetWidth */
int Java_com_googlecode_leptonica_android_Pix_nativeGetWidth(void);

/* Symbol: boxaaGetBoxCount */
/* Demangled: boxaaGetBoxCount */
int boxaaGetBoxCount(void);

/* Symbol: pixScaleAndTransferAlpha */
/* Demangled: pixScaleAndTransferAlpha */
int pixScaleAndTransferAlpha(void);

/* Symbol: numaEvalBestHaarParameters */
/* Demangled: numaEvalBestHaarParameters */
int numaEvalBestHaarParameters(void);

/* Symbol: pixGetRegionsBinary */
/* Demangled: pixGetRegionsBinary */
int pixGetRegionsBinary(void);

/* Symbol: pixConvertToPdfData */
/* Demangled: pixConvertToPdfData */
int pixConvertToPdfData(void);

/* Symbol: pixaDisplayMultiTiled */
/* Demangled: pixaDisplayMultiTiled */
int pixaDisplayMultiTiled(void);

/* Symbol: recogPadTrainingSet */
/* Demangled: recogPadTrainingSet */
int recogPadTrainingSet(void);

/* Symbol: sarrayGetArray */
/* Demangled: sarrayGetArray */
int sarrayGetArray(void);

/* Symbol: makeGaussianKernel */
/* Demangled: makeGaussianKernel */
int makeGaussianKernel(void);

/* Symbol: pixaGetPixDimensions */
/* Demangled: pixaGetPixDimensions */
int pixaGetPixDimensions(void);

/* Symbol: pixAssignToNearestColor */
/* Demangled: pixAssignToNearestColor */
int pixAssignToNearestColor(void);

/* Symbol: dewarpWrite */
/* Demangled: dewarpWrite */
int dewarpWrite(void);

/* Symbol: listAddToHead */
/* Demangled: listAddToHead */
int listAddToHead(void);

/* Symbol: convertSortedToNumberedPathnames */
/* Demangled: convertSortedToNumberedPathnames */
int convertSortedToNumberedPathnames(void);

/* Symbol: pixSearchGrayMaze */
/* Demangled: pixSearchGrayMaze */
int pixSearchGrayMaze(void);

/* Symbol: selCreateComb */
/* Demangled: selCreateComb */
int selCreateComb(void);

/* Symbol: pixRenderPolylineArb */
/* Demangled: pixRenderPolylineArb */
int pixRenderPolylineArb(void);

/* Symbol: l_psWriteBoundingBox */
/* Demangled: l_psWriteBoundingBox */
int l_psWriteBoundingBox(void);

/* Symbol: pixFindSkewAndDeskew */
/* Demangled: pixFindSkewAndDeskew */
int pixFindSkewAndDeskew(void);

/* Symbol: pixFindSkewSweepAndSearch */
/* Demangled: pixFindSkewSweepAndSearch */
int pixFindSkewSweepAndSearch(void);

/* Symbol: boxaaCreate */
/* Demangled: boxaaCreate */
int boxaaCreate(void);

/* Symbol: pixDecideIfText */
/* Demangled: pixDecideIfText */
int pixDecideIfText(void);

/* Symbol: pixDitherTo2bppSpec */
/* Demangled: pixDitherTo2bppSpec */
int pixDitherTo2bppSpec(void);

/* Symbol: pixaaCreate */
/* Demangled: pixaaCreate */
int pixaaCreate(void);

/* Symbol: boxaPruneSortedOnOverlap */
/* Demangled: boxaPruneSortedOnOverlap */
int boxaPruneSortedOnOverlap(void);

/* Symbol: pixPaintThroughMask */
/* Demangled: pixPaintThroughMask */
int pixPaintThroughMask(void);

/* Symbol: pixCompareTiled */
/* Demangled: pixCompareTiled */
int pixCompareTiled(void);

/* Symbol: makeLogBase2Tab */
/* Demangled: makeLogBase2Tab */
int makeLogBase2Tab(void);

/* Symbol: writeImageFileInfo */
/* Demangled: writeImageFileInfo */
int writeImageFileInfo(void);

/* Symbol: pixScaleRGBToBinaryFast */
/* Demangled: pixScaleRGBToBinaryFast */
int pixScaleRGBToBinaryFast(void);

/* Symbol: l_byteaFindEachSequence */
/* Demangled: l_byteaFindEachSequence */
int l_byteaFindEachSequence(void);

/* Symbol: ccbaGetCcb */
/* Demangled: ccbaGetCcb */
int ccbaGetCcb(void);

/* Symbol: ptaaGetPta */
/* Demangled: ptaaGetPta */
int ptaaGetPta(void);

/* Symbol: pixConvertRGBToLAB */
/* Demangled: pixConvertRGBToLAB */
int pixConvertRGBToLAB(void);

/* Symbol: l_amapGetPrev */
/* Demangled: l_amapGetPrev */
int l_amapGetPrev(void);

/* Symbol: dewarpMinimize */
/* Demangled: dewarpMinimize */
int dewarpMinimize(void);

/* Symbol: numaDiscretizeRankAndIntensity */
/* Demangled: numaDiscretizeRankAndIntensity */
int numaDiscretizeRankAndIntensity(void);

/* Symbol: pixGetResolution */
/* Demangled: pixGetResolution */
int pixGetResolution(void);

/* Symbol: pixaAccumulateSamples */
/* Demangled: pixaAccumulateSamples */
int pixaAccumulateSamples(void);

/* Symbol: ccbaAddCcb */
/* Demangled: ccbaAddCcb */
int ccbaAddCcb(void);

/* Symbol: ptaaAddPta */
/* Demangled: ptaaAddPta */
int ptaaAddPta(void);

/* Symbol: fpixaConvertXYZToLAB */
/* Demangled: fpixaConvertXYZToLAB */
int fpixaConvertXYZToLAB(void);

/* Symbol: l_dnaDestroy */
/* Demangled: l_dnaDestroy */
int l_dnaDestroy(void);

/* Symbol: pixacompCreateFromFiles */
/* Demangled: pixacompCreateFromFiles */
int pixacompCreateFromFiles(void);

/* Symbol: pixAffineColor */
/* Demangled: pixAffineColor */
int pixAffineColor(void);

/* Symbol: boxChangeRefcount */
/* Demangled: boxChangeRefcount */
int boxChangeRefcount(void);

/* Symbol: boxTransform */
/* Demangled: boxTransform */
int boxTransform(void);

/* Symbol: pixCloseCompBrick */
/* Demangled: pixCloseCompBrick */
int pixCloseCompBrick(void);

/* Symbol: pixaaCreateFromPixa */
/* Demangled: pixaaCreateFromPixa */
int pixaaCreateFromPixa(void);

/* Symbol: l_asetCreateFromPta */
/* Demangled: l_asetCreateFromPta */
int l_asetCreateFromPta(void);

/* Symbol: l_rbtreeGetCount */
/* Demangled: l_rbtreeGetCount */
int l_rbtreeGetCount(void);

/* Symbol: pixConvertTo8Color */
/* Demangled: pixConvertTo8Color */
int pixConvertTo8Color(void);

/* Symbol: pixProjective */
/* Demangled: pixProjective */
int pixProjective(void);

/* Symbol: sarrayConvertFilesToPS */
/* Demangled: sarrayConvertFilesToPS */
int sarrayConvertFilesToPS(void);

/* Symbol: ptaInsertPt */
/* Demangled: ptaInsertPt */
int ptaInsertPt(void);

/* Symbol: pixEndianByteSwap */
/* Demangled: pixEndianByteSwap */
int pixEndianByteSwap(void);

/* Symbol: ptaReverse */
/* Demangled: ptaReverse */
int ptaReverse(void);

/* Symbol: stringReplace */
/* Demangled: stringReplace */
int stringReplace(void);

/* Symbol: recogaIdentifyMultiple */
/* Demangled: recogaIdentifyMultiple */
int recogaIdentifyMultiple(void);

/* Symbol: pixGetYRes */
/* Demangled: pixGetYRes */
int pixGetYRes(void);

/* Symbol: jbCorrelation */
/* Demangled: jbCorrelation */
int jbCorrelation(void);

/* Symbol: fpixSetWpl */
/* Demangled: fpixSetWpl */
int fpixSetWpl(void);

/* Symbol: pixRenderBox */
/* Demangled: pixRenderBox */
int pixRenderBox(void);

/* Symbol: Java_com_googlecode_leptonica_android_ReadFile_nativeReplaceBytes8 */
/* Demangled: Java_com_googlecode_leptonica_android_ReadFile_nativeReplaceBytes8 */
int Java_com_googlecode_leptonica_android_ReadFile_nativeReplaceBytes8(void);

/* Symbol: sarraySplitString */
/* Demangled: sarraySplitString */
int sarraySplitString(void);

/* Symbol: ptaaInitFull */
/* Demangled: ptaaInitFull */
int ptaaInitFull(void);

/* Symbol: readHeaderMemTiff */
/* Demangled: readHeaderMemTiff */
int readHeaderMemTiff(void);

/* Symbol: selaFindSelByName */
/* Demangled: selaFindSelByName */
int selaFindSelByName(void);

/* Symbol: ptaaTruncate */
/* Demangled: ptaaTruncate */
int ptaaTruncate(void);

/* Symbol: sarrayIntersectionByHash */
/* Demangled: sarrayIntersectionByHash */
int sarrayIntersectionByHash(void);

/* Symbol: dpixGetMin */
/* Demangled: dpixGetMin */
int dpixGetMin(void);

/* Symbol: makeDoGKernel */
/* Demangled: makeDoGKernel */
int makeDoGKernel(void);

/* Symbol: sarrayReadMem */
/* Demangled: sarrayReadMem */
int sarrayReadMem(void);

/* Symbol: Java_com_googlecode_leptonica_android_Pixa_nativeCreate */
/* Demangled: Java_com_googlecode_leptonica_android_Pixa_nativeCreate */
int Java_com_googlecode_leptonica_android_Pixa_nativeCreate(void);

/* Symbol: boxContains */
/* Demangled: boxContains */
int boxContains(void);

/* Symbol: ptaaRead */
/* Demangled: ptaaRead */
int ptaaRead(void);

/* Symbol: recogGetParent */
/* Demangled: recogGetParent */
int recogGetParent(void);

/* Symbol: recogReplaceInRecoga */
/* Demangled: recogReplaceInRecoga */
int recogReplaceInRecoga(void);

/* Symbol: sudokuSolve */
/* Demangled: sudokuSolve */
int sudokuSolve(void);

/* Symbol: boxCreateValid */
/* Demangled: boxCreateValid */
int boxCreateValid(void);

/* Symbol: convertYUVToRGB */
/* Demangled: convertYUVToRGB */
int convertYUVToRGB(void);

/* Symbol: pixaaWriteMem */
/* Demangled: pixaaWriteMem */
int pixaaWriteMem(void);

/* Symbol: pixaHasColor */
/* Demangled: pixaHasColor */
int pixaHasColor(void);

/* Symbol: pixacompConvertToPdfData */
/* Demangled: pixacompConvertToPdfData */
int pixacompConvertToPdfData(void);

/* Symbol: pixConvertCmapTo1 */
/* Demangled: pixConvertCmapTo1 */
int pixConvertCmapTo1(void);

/* Symbol: convertG4ToPS */
/* Demangled: convertG4ToPS */
int convertG4ToPS(void);

/* Symbol: pixcmapWriteStream */
/* Demangled: pixcmapWriteStream */
int pixcmapWriteStream(void);

/* Symbol: l_dnaEmpty */
/* Demangled: l_dnaEmpty */
int l_dnaEmpty(void);

/* Symbol: l_dnaWriteStream */
/* Demangled: l_dnaWriteStream */
int l_dnaWriteStream(void);

/* Symbol: generatePtaWideLine */
/* Demangled: generatePtaWideLine */
int generatePtaWideLine(void);

/* Symbol: pixConnCompIncrAdd */
/* Demangled: pixConnCompIncrAdd */
int pixConnCompIncrAdd(void);

/* Symbol: recogaTrainingDone */
/* Demangled: recogaTrainingDone */
int recogaTrainingDone(void);

/* Symbol: fpixThresholdToPix */
/* Demangled: fpixThresholdToPix */
int fpixThresholdToPix(void);

/* Symbol: selReadStream */
/* Demangled: selReadStream */
int selReadStream(void);

/* Symbol: returnErrorFloat */
/* Demangled: returnErrorFloat */
int returnErrorFloat(void);

/* Symbol: stringCopy */
/* Demangled: stringCopy */
int stringCopy(void);

/* Symbol: pixcmapCopy */
/* Demangled: pixcmapCopy */
int pixcmapCopy(void);

/* Symbol: pixcmapWrite */
/* Demangled: pixcmapWrite */
int pixcmapWrite(void);

/* Symbol: cmapEqual */
/* Demangled: cmapEqual */
int cmapEqual(void);

/* Symbol: numaCountReversals */
/* Demangled: numaCountReversals */
int numaCountReversals(void);

/* Symbol: boxaGetMedianVals */
/* Demangled: boxaGetMedianVals */
int boxaGetMedianVals(void);

/* Symbol: pixOctcubeQuantFromCmap */
/* Demangled: pixOctcubeQuantFromCmap */
int pixOctcubeQuantFromCmap(void);

/* Symbol: pixacompReplacePix */
/* Demangled: pixacompReplacePix */
int pixacompReplacePix(void);

/* Symbol: ptaIntersectionByAset */
/* Demangled: ptaIntersectionByAset */
int ptaIntersectionByAset(void);

/* Symbol: pixScaleLI */
/* Demangled: pixScaleLI */
int pixScaleLI(void);

/* Symbol: pixGetOuterBordersPtaa */
/* Demangled: pixGetOuterBordersPtaa */
int pixGetOuterBordersPtaa(void);

/* Symbol: numaInterpolateEqxVal */
/* Demangled: numaInterpolateEqxVal */
int numaInterpolateEqxVal(void);

/* Symbol: pmsGetLevelForDealloc */
/* Demangled: pmsGetLevelForDealloc */
int pmsGetLevelForDealloc(void);

/* Symbol: recogBestCorrelForPadding */
/* Demangled: recogBestCorrelForPadding */
int recogBestCorrelForPadding(void);

/* Symbol: pixGetLocalSkewTransform */
/* Demangled: pixGetLocalSkewTransform */
int pixGetLocalSkewTransform(void);

/* Symbol: pixScaleAreaMap2 */
/* Demangled: pixScaleAreaMap2 */
int pixScaleAreaMap2(void);

/* Symbol: pixSetMasked */
/* Demangled: pixSetMasked */
int pixSetMasked(void);

/* Symbol: pixDilate */
/* Demangled: pixDilate */
int pixDilate(void);

/* Symbol: boxaFindInvalidBoxes */
/* Demangled: boxaFindInvalidBoxes */
int boxaFindInvalidBoxes(void);

/* Symbol: boxaaGetExtent */
/* Demangled: boxaaGetExtent */
int boxaaGetExtent(void);

/* Symbol: pixGetCmapHistogramMasked */
/* Demangled: pixGetCmapHistogramMasked */
int pixGetCmapHistogramMasked(void);

/* Symbol: pixaFindAreaFractionMasked */
/* Demangled: pixaFindAreaFractionMasked */
int pixaFindAreaFractionMasked(void);

/* Symbol: ptaCopyRange */
/* Demangled: ptaCopyRange */
int ptaCopyRange(void);

/* Symbol: scaleBinaryLow */
/* Demangled: scaleBinaryLow */
int scaleBinaryLow(void);

/* Symbol: fileConcatenate */
/* Demangled: fileConcatenate */
int fileConcatenate(void);

/* Symbol: pixacompGetBoxaCount */
/* Demangled: pixacompGetBoxaCount */
int pixacompGetBoxaCount(void);

/* Symbol: Java_com_googlecode_leptonica_android_Clip_nativeClipRectangle */
/* Demangled: Java_com_googlecode_leptonica_android_Clip_nativeClipRectangle */
int Java_com_googlecode_leptonica_android_Clip_nativeClipRectangle(void);

/* Symbol: makeSubsampleTab2x */
/* Demangled: makeSubsampleTab2x */
int makeSubsampleTab2x(void);

/* Symbol: pixBlockconvGrayTile */
/* Demangled: pixBlockconvGrayTile */
int pixBlockconvGrayTile(void);

/* Symbol: l_dnaaDestroy */
/* Demangled: l_dnaaDestroy */
int l_dnaaDestroy(void);

/* Symbol: fopenWriteWinTempfile */
/* Demangled: fopenWriteWinTempfile */
int fopenWriteWinTempfile(void);

/* Symbol: Java_com_googlecode_leptonica_android_Scale_nativeScale */
/* Demangled: Java_com_googlecode_leptonica_android_Scale_nativeScale */
int Java_com_googlecode_leptonica_android_Scale_nativeScale(void);

/* Symbol: Java_com_googlecode_leptonica_android_Binarize_nativeSauvolaBinarizeTiled */
/* Demangled: Java_com_googlecode_leptonica_android_Binarize_nativeSauvolaBinarizeTiled */
int Java_com_googlecode_leptonica_android_Binarize_nativeSauvolaBinarizeTiled(void);

/* Symbol: l_byteaCopyData */
/* Demangled: l_byteaCopyData */
int l_byteaCopyData(void);

/* Symbol: pixUnsharpMaskingGray2D */
/* Demangled: pixUnsharpMaskingGray2D */
int pixUnsharpMaskingGray2D(void);

/* Symbol: pixSwapAndDestroy */
/* Demangled: pixSwapAndDestroy */
int pixSwapAndDestroy(void);

/* Symbol: numaInterpolateEqxInterval */
/* Demangled: numaInterpolateEqxInterval */
int numaInterpolateEqxInterval(void);

/* Symbol: fileCorruptByMutation */
/* Demangled: fileCorruptByMutation */
int fileCorruptByMutation(void);

/* Symbol: pixaCreate */
/* Demangled: pixaCreate */
int pixaCreate(void);

/* Symbol: kernelNormalize */
/* Demangled: kernelNormalize */
int kernelNormalize(void);

/* Symbol: pixaaGetCount */
/* Demangled: pixaaGetCount */
int pixaaGetCount(void);

/* Symbol: kernelWriteStream */
/* Demangled: kernelWriteStream */
int kernelWriteStream(void);

/* Symbol: pixaReadMem */
/* Demangled: pixaReadMem */
int pixaReadMem(void);

/* Symbol: boxaReadMem */
/* Demangled: boxaReadMem */
int boxaReadMem(void);

/* Symbol: pixTilingNoStripOnPaint */
/* Demangled: pixTilingNoStripOnPaint */
int pixTilingNoStripOnPaint(void);

/* Symbol: stringRemoveChars */
/* Demangled: stringRemoveChars */
int stringRemoveChars(void);

/* Symbol: pixReadMemSpix */
/* Demangled: pixReadMemSpix */
int pixReadMemSpix(void);

/* Symbol: pixFindAreaFraction */
/* Demangled: pixFindAreaFraction */
int pixFindAreaFraction(void);

/* Symbol: readHeaderSpix */
/* Demangled: readHeaderSpix */
int readHeaderSpix(void);

/* Symbol: freadHeaderSpix */
/* Demangled: freadHeaderSpix */
int freadHeaderSpix(void);

/* Symbol: l_getDataFourBytes */
/* Demangled: l_getDataFourBytes */
int l_getDataFourBytes(void);

/* Symbol: stringCompareLexical */
/* Demangled: stringCompareLexical */
int stringCompareLexical(void);

/* Symbol: pixScaleRGBToGray2 */
/* Demangled: pixScaleRGBToGray2 */
int pixScaleRGBToGray2(void);

/* Symbol: pixaGetLinePtrs */
/* Demangled: pixaGetLinePtrs */
int pixaGetLinePtrs(void);

/* Symbol: lstackGetCount */
/* Demangled: lstackGetCount */
int lstackGetCount(void);

/* Symbol: recogaCreateFromRecog */
/* Demangled: recogaCreateFromRecog */
int recogaCreateFromRecog(void);

/* Symbol: recogaRead */
/* Demangled: recogaRead */
int recogaRead(void);

/* Symbol: pixCropAlignedToCentroid */
/* Demangled: pixCropAlignedToCentroid */
int pixCropAlignedToCentroid(void);

/* Symbol: pixScanForForeground */
/* Demangled: pixScanForForeground */
int pixScanForForeground(void);

/* Symbol: regTestCompareFiles */
/* Demangled: regTestCompareFiles */
int regTestCompareFiles(void);

/* Symbol: sarrayChangeRefcount */
/* Demangled: sarrayChangeRefcount */
int sarrayChangeRefcount(void);

/* Symbol: Java_com_googlecode_leptonica_android_Enhance_nativeUnsharpMasking */
/* Demangled: Java_com_googlecode_leptonica_android_Enhance_nativeUnsharpMasking */
int Java_com_googlecode_leptonica_android_Enhance_nativeUnsharpMasking(void);

/* Symbol: pixConvolve */
/* Demangled: pixConvolve */
int pixConvolve(void);

/* Symbol: dpixSetData */
/* Demangled: dpixSetData */
int dpixSetData(void);

/* Symbol: numaGetBinnedMedian */
/* Demangled: numaGetBinnedMedian */
int numaGetBinnedMedian(void);

/* Symbol: pixDisplayWriteFormat */
/* Demangled: pixDisplayWriteFormat */
int pixDisplayWriteFormat(void);

/* Symbol: boxaaCopy */
/* Demangled: boxaaCopy */
int boxaaCopy(void);

/* Symbol: getOctcubeIndexFromRGB */
/* Demangled: getOctcubeIndexFromRGB */
int getOctcubeIndexFromRGB(void);

/* Symbol: l_setConvolveSampling */
/* Demangled: l_setConvolveSampling */
int l_setConvolveSampling(void);

/* Symbol: dpixGetDimensions */
/* Demangled: dpixGetDimensions */
int dpixGetDimensions(void);

/* Symbol: makeFlatKernel */
/* Demangled: makeFlatKernel */
int makeFlatKernel(void);

/* Symbol: pixConvert8To32 */
/* Demangled: pixConvert8To32 */
int pixConvert8To32(void);

/* Symbol: pixWriteMemPng */
/* Demangled: pixWriteMemPng */
int pixWriteMemPng(void);

/* Symbol: scaleGray2xLILow */
/* Demangled: scaleGray2xLILow */
int scaleGray2xLILow(void);

/* Symbol: Java_com_googlecode_leptonica_android_ReadFile_nativeReadFiles */
/* Demangled: Java_com_googlecode_leptonica_android_ReadFile_nativeReadFiles */
int Java_com_googlecode_leptonica_android_ReadFile_nativeReadFiles(void);

/* Symbol: boxaSimilar */
/* Demangled: boxaSimilar */
int boxaSimilar(void);

/* Symbol: saConvertFilesToPdfData */
/* Demangled: saConvertFilesToPdfData */
int saConvertFilesToPdfData(void);

/* Symbol: pixaDisplayTiledWithText */
/* Demangled: pixaDisplayTiledWithText */
int pixaDisplayTiledWithText(void);

/* Symbol: recogaWritePixaa */
/* Demangled: recogaWritePixaa */
int recogaWritePixaa(void);

/* Symbol: boxSetSideLocations */
/* Demangled: boxSetSideLocations */
int boxSetSideLocations(void);

/* Symbol: fopenReadStream */
/* Demangled: fopenReadStream */
int fopenReadStream(void);

/* Symbol: pixCreateTemplateNoInit */
/* Demangled: pixCreateTemplateNoInit */
int pixCreateTemplateNoInit(void);

/* Symbol: gplotRead */
/* Demangled: gplotRead */
int gplotRead(void);

/* Symbol: scaleGrayLILow */
/* Demangled: scaleGrayLILow */
int scaleGrayLILow(void);

/* Symbol: pixGenerateSelWithRuns */
/* Demangled: pixGenerateSelWithRuns */
int pixGenerateSelWithRuns(void);

/* Symbol: fpixGetResolution */
/* Demangled: fpixGetResolution */
int fpixGetResolution(void);

/* Symbol: pixRotateWithAlpha */
/* Demangled: pixRotateWithAlpha */
int pixRotateWithAlpha(void);

/* Symbol: makeMSBitLocTab */
/* Demangled: makeMSBitLocTab */
int makeMSBitLocTab(void);

/* Symbol: Java_com_googlecode_leptonica_android_ReadFile_nativeReadMem */
/* Demangled: Java_com_googlecode_leptonica_android_ReadFile_nativeReadMem */
int Java_com_googlecode_leptonica_android_ReadFile_nativeReadMem(void);

/* Symbol: convertFilesToPdf */
/* Demangled: convertFilesToPdf */
int convertFilesToPdf(void);

/* Symbol: pixaExtendArrayToSize */
/* Demangled: pixaExtendArrayToSize */
int pixaExtendArrayToSize(void);

/* Symbol: pixaSplitIntoFiles */
/* Demangled: pixaSplitIntoFiles */
int pixaSplitIntoFiles(void);

/* Symbol: pixBackgroundNormRGBArrays */
/* Demangled: pixBackgroundNormRGBArrays */
int pixBackgroundNormRGBArrays(void);

/* Symbol: listRemoveFromHead */
/* Demangled: listRemoveFromHead */
int listRemoveFromHead(void);

/* Symbol: pixSetZlibCompression */
/* Demangled: pixSetZlibCompression */
int pixSetZlibCompression(void);

/* Symbol: pixWriteMemPnm */
/* Demangled: pixWriteMemPnm */
int pixWriteMemPnm(void);

/* Symbol: ptaaWriteMem */
/* Demangled: ptaaWriteMem */
int ptaaWriteMem(void);

/* Symbol: pixScaleResolution */
/* Demangled: pixScaleResolution */
int pixScaleResolution(void);

/* Symbol: boxaTransformOrdered */
/* Demangled: boxaTransformOrdered */
int boxaTransformOrdered(void);

/* Symbol: boxaaAlignBox */
/* Demangled: boxaaAlignBox */
int boxaaAlignBox(void);

/* Symbol: l_dnaHashGetTotalCount */
/* Demangled: l_dnaHashGetTotalCount */
int l_dnaHashGetTotalCount(void);

/* Symbol: encodeBase64 */
/* Demangled: encodeBase64 */
int encodeBase64(void);

/* Symbol: fpixRotate180 */
/* Demangled: fpixRotate180 */
int fpixRotate180(void);

/* Symbol: pixSauvolaBinarizeTiled */
/* Demangled: pixSauvolaBinarizeTiled */
int pixSauvolaBinarizeTiled(void);

/* Symbol: fpixRenderContours */
/* Demangled: fpixRenderContours */
int fpixRenderContours(void);

/* Symbol: numaBinSort */
/* Demangled: numaBinSort */
int numaBinSort(void);

/* Symbol: regTestComparePix */
/* Demangled: regTestComparePix */
int regTestComparePix(void);

/* Symbol: Java_com_googlecode_leptonica_android_Rotate_nativeRotateOrth */
/* Demangled: Java_com_googlecode_leptonica_android_Rotate_nativeRotateOrth */
int Java_com_googlecode_leptonica_android_Rotate_nativeRotateOrth(void);

/* Symbol: bbufferWriteStream */
/* Demangled: bbufferWriteStream */
int bbufferWriteStream(void);

/* Symbol: pixConvertRGBToValue */
/* Demangled: pixConvertRGBToValue */
int pixConvertRGBToValue(void);

/* Symbol: pixSetPixelColumn */
/* Demangled: pixSetPixelColumn */
int pixSetPixelColumn(void);

/* Symbol: boxaaInsertBoxa */
/* Demangled: boxaaInsertBoxa */
int boxaaInsertBoxa(void);

/* Symbol: ccbaWrite */
/* Demangled: ccbaWrite */
int ccbaWrite(void);

/* Symbol: pixWriteStreamPam */
/* Demangled: pixWriteStreamPam */
int pixWriteStreamPam(void);

/* Symbol: pixcmapIsOpaque */
/* Demangled: pixcmapIsOpaque */
int pixcmapIsOpaque(void);

/* Symbol: pixColorMorphSequence */
/* Demangled: pixColorMorphSequence */
int pixColorMorphSequence(void);

/* Symbol: numaMakeHistogram */
/* Demangled: numaMakeHistogram */
int numaMakeHistogram(void);

/* Symbol: pixGetRowStats */
/* Demangled: pixGetRowStats */
int pixGetRowStats(void);

/* Symbol: stringNew */
/* Demangled: stringNew */
int stringNew(void);

/* Symbol: pixRemoveBorder */
/* Demangled: pixRemoveBorder */
int pixRemoveBorder(void);

/* Symbol: pixCopySpp */
/* Demangled: pixCopySpp */
int pixCopySpp(void);

/* Symbol: pixProjectiveGray */
/* Demangled: pixProjectiveGray */
int pixProjectiveGray(void);

/* Symbol: pixReduceRankBinary2 */
/* Demangled: pixReduceRankBinary2 */
int pixReduceRankBinary2(void);

/* Symbol: makeRGBIndexTables */
/* Demangled: makeRGBIndexTables */
int makeRGBIndexTables(void);

/* Symbol: setPixelLow */
/* Demangled: setPixelLow */
int setPixelLow(void);

/* Symbol: findFileFormatBuffer */
/* Demangled: findFileFormatBuffer */
int findFileFormatBuffer(void);

/* Symbol: pixSeedfillGrayBasin */
/* Demangled: pixSeedfillGrayBasin */
int pixSeedfillGrayBasin(void);

/* Symbol: pixaConvertTo32 */
/* Demangled: pixaConvertTo32 */
int pixaConvertTo32(void);

/* Symbol: dewarpBuildLineModel */
/* Demangled: dewarpBuildLineModel */
int dewarpBuildLineModel(void);

/* Symbol: pixCountTextColumns */
/* Demangled: pixCountTextColumns */
int pixCountTextColumns(void);

/* Symbol: convertToPdfData */
/* Demangled: convertToPdfData */
int convertToPdfData(void);

/* Symbol: pixSetPadBits */
/* Demangled: pixSetPadBits */
int pixSetPadBits(void);

/* Symbol: pixProjectivePtaColor */
/* Demangled: pixProjectivePtaColor */
int pixProjectivePtaColor(void);

/* Symbol: pixGetRunsOnLine */
/* Demangled: pixGetRunsOnLine */
int pixGetRunsOnLine(void);

/* Symbol: pixTwoSidedEdgeFilter */
/* Demangled: pixTwoSidedEdgeFilter */
int pixTwoSidedEdgeFilter(void);

/* Symbol: pixcmapReadMem */
/* Demangled: pixcmapReadMem */
int pixcmapReadMem(void);

/* Symbol: fpixWriteMem */
/* Demangled: fpixWriteMem */
int fpixWriteMem(void);

/* Symbol: pixRenderPlotFromNuma */
/* Demangled: pixRenderPlotFromNuma */
int pixRenderPlotFromNuma(void);

/* Symbol: pixScaleMipmap */
/* Demangled: pixScaleMipmap */
int pixScaleMipmap(void);

/* Symbol: extractRGBValues */
/* Demangled: extractRGBValues */
int extractRGBValues(void);

/* Symbol: pixCorrelationScoreThresholded */
/* Demangled: pixCorrelationScoreThresholded */
int pixCorrelationScoreThresholded(void);

/* Symbol: recogDebugAverages */
/* Demangled: recogDebugAverages */
int recogDebugAverages(void);

/* Symbol: pixGenerateSelRandom */
/* Demangled: pixGenerateSelRandom */
int pixGenerateSelRandom(void);

/* Symbol: pixReadMem */
/* Demangled: pixReadMem */
int pixReadMem(void);

/* Symbol: pixCloseGray */
/* Demangled: pixCloseGray */
int pixCloseGray(void);

/* Symbol: boxOverlapRegion */
/* Demangled: boxOverlapRegion */
int boxOverlapRegion(void);

/* Symbol: pixColorSegmentClean */
/* Demangled: pixColorSegmentClean */
int pixColorSegmentClean(void);

/* Symbol: pixaRemovePix */
/* Demangled: pixaRemovePix */
int pixaRemovePix(void);

/* Symbol: pixAffinePtaWithAlpha */
/* Demangled: pixAffinePtaWithAlpha */
int pixAffinePtaWithAlpha(void);

/* Symbol: pixBilinear */
/* Demangled: pixBilinear */
int pixBilinear(void);

/* Symbol: pixcmapIsBlackAndWhite */
/* Demangled: pixcmapIsBlackAndWhite */
int pixcmapIsBlackAndWhite(void);

/* Symbol: numaEarthMoverDistance */
/* Demangled: numaEarthMoverDistance */
int numaEarthMoverDistance(void);

/* Symbol: pixWriteMemSpix */
/* Demangled: pixWriteMemSpix */
int pixWriteMemSpix(void);

/* Symbol: pixGetDepth */
/* Demangled: pixGetDepth */
int pixGetDepth(void);

/* Symbol: pixItalicWords */
/* Demangled: pixItalicWords */
int pixItalicWords(void);

/* Symbol: numaClone */
/* Demangled: numaClone */
int numaClone(void);

/* Symbol: boxaGetBox */
/* Demangled: boxaGetBox */
int boxaGetBox(void);

/* Symbol: fpixRotateOrth */
/* Demangled: fpixRotateOrth */
int fpixRotateOrth(void);

/* Symbol: pixQuantizeIfFewColors */
/* Demangled: pixQuantizeIfFewColors */
int pixQuantizeIfFewColors(void);

/* Symbol: lqueuePrint */
/* Demangled: lqueuePrint */
int lqueuePrint(void);

/* Symbol: fpixGetPixel */
/* Demangled: fpixGetPixel */
int fpixGetPixel(void);

/* Symbol: pixRankColumnTransform */
/* Demangled: pixRankColumnTransform */
int pixRankColumnTransform(void);

/* Symbol: recogShowAverageTemplates */
/* Demangled: recogShowAverageTemplates */
int recogShowAverageTemplates(void);

/* Symbol: boxaAddBox */
/* Demangled: boxaAddBox */
int boxaAddBox(void);

/* Symbol: numaSetCount */
/* Demangled: numaSetCount */
int numaSetCount(void);

/* Symbol: selaAddBasic */
/* Demangled: selaAddBasic */
int selaAddBasic(void);

/* Symbol: pixacompAddPixcomp */
/* Demangled: pixacompAddPixcomp */
int pixacompAddPixcomp(void);

/* Symbol: ptaNoisyQuadraticLSF */
/* Demangled: ptaNoisyQuadraticLSF */
int ptaNoisyQuadraticLSF(void);

/* Symbol: pixScaleGrayToBinaryFast */
/* Demangled: pixScaleGrayToBinaryFast */
int pixScaleGrayToBinaryFast(void);

/* Symbol: create2dIntArray */
/* Demangled: create2dIntArray */
int create2dIntArray(void);

/* Symbol: pixGetHoleBorder */
/* Demangled: pixGetHoleBorder */
int pixGetHoleBorder(void);

/* Symbol: pixOctreeColorQuant */
/* Demangled: pixOctreeColorQuant */
int pixOctreeColorQuant(void);

/* Symbol: pixMakeAlphaFromMask */
/* Demangled: pixMakeAlphaFromMask */
int pixMakeAlphaFromMask(void);

/* Symbol: pixaccMultConstAccumulate */
/* Demangled: pixaccMultConstAccumulate */
int pixaccMultConstAccumulate(void);

/* Symbol: ptaGetIPt */
/* Demangled: ptaGetIPt */
int ptaGetIPt(void);

/* Symbol: pixRenderPolygon */
/* Demangled: pixRenderPolygon */
int pixRenderPolygon(void);

/* Symbol: pixcmapGetNearestIndex */
/* Demangled: pixcmapGetNearestIndex */
int pixcmapGetNearestIndex(void);

/* Symbol: pixRenderHashMaskArb */
/* Demangled: pixRenderHashMaskArb */
int pixRenderHashMaskArb(void);

/* Symbol: pixSeedspread */
/* Demangled: pixSeedspread */
int pixSeedspread(void);

/* Symbol: kernelInvert */
/* Demangled: kernelInvert */
int kernelInvert(void);

/* Symbol: pixSetUnderTransparency */
/* Demangled: pixSetUnderTransparency */
int pixSetUnderTransparency(void);

/* Symbol: pixaaRead */
/* Demangled: pixaaRead */
int pixaaRead(void);

/* Symbol: pixRotate */
/* Demangled: pixRotate */
int pixRotate(void);

/* Symbol: jbGetComponents */
/* Demangled: jbGetComponents */
int jbGetComponents(void);

/* Symbol: listInsertBefore */
/* Demangled: listInsertBefore */
int listInsertBefore(void);

/* Symbol: pixClearInRect */
/* Demangled: pixClearInRect */
int pixClearInRect(void);

/* Symbol: pixMaxDynamicRange */
/* Demangled: pixMaxDynamicRange */
int pixMaxDynamicRange(void);

/* Symbol: pixDisplayDiffBinary */
/* Demangled: pixDisplayDiffBinary */
int pixDisplayDiffBinary(void);

/* Symbol: convertTiffMultipageToPdf */
/* Demangled: convertTiffMultipageToPdf */
int convertTiffMultipageToPdf(void);

/* Symbol: pixGetGrayHistogramInRect */
/* Demangled: pixGetGrayHistogramInRect */
int pixGetGrayHistogramInRect(void);

/* Symbol: l_makeTempFilename */
/* Demangled: l_makeTempFilename */
int l_makeTempFilename(void);

/* Symbol: pixReadTiff */
/* Demangled: pixReadTiff */
int pixReadTiff(void);

/* Symbol: applyQuarticFit */
/* Demangled: applyQuarticFit */
int applyQuarticFit(void);

/* Symbol: pixFindSkew */
/* Demangled: pixFindSkew */
int pixFindSkew(void);

/* Symbol: pixBlendGray */
/* Demangled: pixBlendGray */
int pixBlendGray(void);

/* Symbol: boxaaReplaceBoxa */
/* Demangled: boxaaReplaceBoxa */
int boxaaReplaceBoxa(void);

/* Symbol: pixThresholdOn8bpp */
/* Demangled: pixThresholdOn8bpp */
int pixThresholdOn8bpp(void);

/* Symbol: pixCropToSize */
/* Demangled: pixCropToSize */
int pixCropToSize(void);

/* Symbol: pixaFindWidthHeightProduct */
/* Demangled: pixaFindWidthHeightProduct */
int pixaFindWidthHeightProduct(void);

/* Symbol: fpixFlipLR */
/* Demangled: fpixFlipLR */
int fpixFlipLR(void);

/* Symbol: pixSetComponentArbitrary */
/* Demangled: pixSetComponentArbitrary */
int pixSetComponentArbitrary(void);

/* Symbol: ptraaDestroy */
/* Demangled: ptraaDestroy */
int ptraaDestroy(void);

/* Symbol: quadtreeGetChildren */
/* Demangled: quadtreeGetChildren */
int quadtreeGetChildren(void);

/* Symbol: pixGetColorHistogramMasked */
/* Demangled: pixGetColorHistogramMasked */
int pixGetColorHistogramMasked(void);

/* Symbol: rotateAMColorCornerLow */
/* Demangled: rotateAMColorCornerLow */
int rotateAMColorCornerLow(void);

/* Symbol: pixGetWpl */
/* Demangled: pixGetWpl */
int pixGetWpl(void);

/* Symbol: pixaDisplayRandomCmap */
/* Demangled: pixaDisplayRandomCmap */
int pixaDisplayRandomCmap(void);

/* Symbol: pixBlockconvGray */
/* Demangled: pixBlockconvGray */
int pixBlockconvGray(void);

/* Symbol: convertPtaLineTo4cc */
/* Demangled: convertPtaLineTo4cc */
int convertPtaLineTo4cc(void);

/* Symbol: pixSetPadBitsBand */
/* Demangled: pixSetPadBitsBand */
int pixSetPadBitsBand(void);

/* Symbol: pixConvertGrayToColormap8 */
/* Demangled: pixConvertGrayToColormap8 */
int pixConvertGrayToColormap8(void);

/* Symbol: pixScaleToGrayFast */
/* Demangled: pixScaleToGrayFast */
int pixScaleToGrayFast(void);

/* Symbol: pixRandomHarmonicWarp */
/* Demangled: pixRandomHarmonicWarp */
int pixRandomHarmonicWarp(void);

/* Symbol: pixBilinearPta */
/* Demangled: pixBilinearPta */
int pixBilinearPta(void);

/* Symbol: convertOnBigEnd16 */
/* Demangled: convertOnBigEnd16 */
int convertOnBigEnd16(void);

/* Symbol: l_binaryReadStream */
/* Demangled: l_binaryReadStream */
int l_binaryReadStream(void);

/* Symbol: pixGenerateSelBoundary */
/* Demangled: pixGenerateSelBoundary */
int pixGenerateSelBoundary(void);

/* Symbol: pixGammaTRC */
/* Demangled: pixGammaTRC */
int pixGammaTRC(void);

/* Symbol: pixSeedfill4BB */
/* Demangled: pixSeedfill4BB */
int pixSeedfill4BB(void);

/* Symbol: pixOpenCompBrickDwa */
/* Demangled: pixOpenCompBrickDwa */
int pixOpenCompBrickDwa(void);

/* Symbol: selCreateFromPta */
/* Demangled: selCreateFromPta */
int selCreateFromPta(void);

/* Symbol: strcodeGenerate */
/* Demangled: strcodeGenerate */
int strcodeGenerate(void);

/* Symbol: pixBlendBackgroundToColor */
/* Demangled: pixBlendBackgroundToColor */
int pixBlendBackgroundToColor(void);

/* Symbol: pixcmapSerializeToMemory */
/* Demangled: pixcmapSerializeToMemory */
int pixcmapSerializeToMemory(void);

/* Symbol: pixSetSelectCmap */
/* Demangled: pixSetSelectCmap */
int pixSetSelectCmap(void);

/* Symbol: selectDefaultPdfEncoding */
/* Demangled: selectDefaultPdfEncoding */
int selectDefaultPdfEncoding(void);

/* Symbol: numaReadStream */
/* Demangled: numaReadStream */
int numaReadStream(void);

/* Symbol: pixRenderBoxa */
/* Demangled: pixRenderBoxa */
int pixRenderBoxa(void);

/* Symbol: numaInsertNumber */
/* Demangled: numaInsertNumber */
int numaInsertNumber(void);

/* Symbol: boxaReconcilePairWidth */
/* Demangled: boxaReconcilePairWidth */
int boxaReconcilePairWidth(void);

/* Symbol: ptaConvertToBox */
/* Demangled: ptaConvertToBox */
int ptaConvertToBox(void);

/* Symbol: pixGetGrayHistogram */
/* Demangled: pixGetGrayHistogram */
int pixGetGrayHistogram(void);

/* Symbol: pixErodeCompBrick */
/* Demangled: pixErodeCompBrick */
int pixErodeCompBrick(void);

/* Symbol: numaAddSpecifiedBorder */
/* Demangled: numaAddSpecifiedBorder */
int numaAddSpecifiedBorder(void);

/* Symbol: filesAreIdentical */
/* Demangled: filesAreIdentical */
int filesAreIdentical(void);

/* Symbol: ptaCreate */
/* Demangled: ptaCreate */
int ptaCreate(void);

/* Symbol: pixDisplay */
/* Demangled: pixDisplay */
int pixDisplay(void);

/* Symbol: pixaccMultConst */
/* Demangled: pixaccMultConst */
int pixaccMultConst(void);

/* Symbol: l_dnaHashCreateFromDna */
/* Demangled: l_dnaHashCreateFromDna */
int l_dnaHashCreateFromDna(void);

/* Symbol: sarrayUnionByAset */
/* Demangled: sarrayUnionByAset */
int sarrayUnionByAset(void);

/* Symbol: l_clearDataQbit */
/* Demangled: l_clearDataQbit */
int l_clearDataQbit(void);

/* Symbol: locateOutsideSeedPixel */
/* Demangled: locateOutsideSeedPixel */
int locateOutsideSeedPixel(void);

/* Symbol: pixReadHeader */
/* Demangled: pixReadHeader */
int pixReadHeader(void);

/* Symbol: pixFindVerticalRuns */
/* Demangled: pixFindVerticalRuns */
int pixFindVerticalRuns(void);

/* Symbol: pixBlendHardLight */
/* Demangled: pixBlendHardLight */
int pixBlendHardLight(void);

/* Symbol: dewarpaSetMaxDistance */
/* Demangled: dewarpaSetMaxDistance */
int dewarpaSetMaxDistance(void);

/* Symbol: numaaGetValue */
/* Demangled: numaaGetValue */
int numaaGetValue(void);

/* Symbol: pixCopyResolution */
/* Demangled: pixCopyResolution */
int pixCopyResolution(void);

/* Symbol: pixAddMirroredBorder */
/* Demangled: pixAddMirroredBorder */
int pixAddMirroredBorder(void);

/* Symbol: numaWrite */
/* Demangled: numaWrite */
int numaWrite(void);

/* Symbol: l_amapGetFirst */
/* Demangled: l_amapGetFirst */
int l_amapGetFirst(void);

/* Symbol: pixConvertHSVToRGB */
/* Demangled: pixConvertHSVToRGB */
int pixConvertHSVToRGB(void);

/* Symbol: dpixGetPixel */
/* Demangled: dpixGetPixel */
int dpixGetPixel(void);

/* Symbol: numaMakeThresholdIndicator */
/* Demangled: numaMakeThresholdIndicator */
int numaMakeThresholdIndicator(void);

/* Symbol: pixEndianByteSwapNew */
/* Demangled: pixEndianByteSwapNew */
int pixEndianByteSwapNew(void);

/* Symbol: pixFindSkewSweepAndSearchScorePivot */
/* Demangled: pixFindSkewSweepAndSearchScorePivot */
int pixFindSkewSweepAndSearchScorePivot(void);

/* Symbol: pixSetAll */
/* Demangled: pixSetAll */
int pixSetAll(void);

/* Symbol: jbAddPage */
/* Demangled: jbAddPage */
int jbAddPage(void);

/* Symbol: pixaCountPixels */
/* Demangled: pixaCountPixels */
int pixaCountPixels(void);

/* Symbol: pixaConvertToPdfData */
/* Demangled: pixaConvertToPdfData */
int pixaConvertToPdfData(void);

/* Symbol: pixThresholdToValue */
/* Demangled: pixThresholdToValue */
int pixThresholdToValue(void);

/* Symbol: bmfGetWordWidths */
/* Demangled: bmfGetWordWidths */
int bmfGetWordWidths(void);

/* Symbol: l_dnaaRead */
/* Demangled: l_dnaaRead */
int l_dnaaRead(void);

/* Symbol: pixScaleRGBToGrayFast */
/* Demangled: pixScaleRGBToGrayFast */
int pixScaleRGBToGrayFast(void);

/* Symbol: pixFHMTGen_1 */
/* Demangled: pixFHMTGen_1 */
int pixFHMTGen_1(void);

/* Symbol: pixacompReadMem */
/* Demangled: pixacompReadMem */
int pixacompReadMem(void);

/* Symbol: recogDecode */
/* Demangled: recogDecode */
int recogDecode(void);

/* Symbol: pixTophat */
/* Demangled: pixTophat */
int pixTophat(void);

/* Symbol: createMatrix2dScale */
/* Demangled: createMatrix2dScale */
int createMatrix2dScale(void);

/* Symbol: pixaCreateFromPix */
/* Demangled: pixaCreateFromPix */
int pixaCreateFromPix(void);

/* Symbol: ptaClone */
/* Demangled: ptaClone */
int ptaClone(void);

/* Symbol: ptaCyclicPerm */
/* Demangled: ptaCyclicPerm */
int ptaCyclicPerm(void);

/* Symbol: pixRankFilterWithScaling */
/* Demangled: pixRankFilterWithScaling */
int pixRankFilterWithScaling(void);

/* Symbol: boxaGetBoxGeometry */
/* Demangled: boxaGetBoxGeometry */
int boxaGetBoxGeometry(void);

/* Symbol: pixMedianFilter */
/* Demangled: pixMedianFilter */
int pixMedianFilter(void);

/* Symbol: sarrayCreate */
/* Demangled: sarrayCreate */
int sarrayCreate(void);

/* Symbol: l_dnaReadStream */
/* Demangled: l_dnaReadStream */
int l_dnaReadStream(void);

/* Symbol: l_dnaDiffAdjValues */
/* Demangled: l_dnaDiffAdjValues */
int l_dnaDiffAdjValues(void);

/* Symbol: pixaaAddPixa */
/* Demangled: pixaaAddPixa */
int pixaaAddPixa(void);

/* Symbol: makeTempDirname */
/* Demangled: makeTempDirname */
int makeTempDirname(void);

/* Symbol: lept_fclose */
/* Demangled: lept_fclose */
int lept_fclose(void);

/* Symbol: pixRotateBySampling */
/* Demangled: pixRotateBySampling */
int pixRotateBySampling(void);

/* Symbol: boxaIntersectsBox */
/* Demangled: boxaIntersectsBox */
int boxaIntersectsBox(void);

/* Symbol: pixMedianCutQuantMixed */
/* Demangled: pixMedianCutQuantMixed */
int pixMedianCutQuantMixed(void);

/* Symbol: pixaaFlattenToPixa */
/* Demangled: pixaaFlattenToPixa */
int pixaaFlattenToPixa(void);

/* Symbol: l_rbtreeGetPrev */
/* Demangled: l_rbtreeGetPrev */
int l_rbtreeGetPrev(void);

/* Symbol: boxaPermutePseudorandom */
/* Demangled: boxaPermutePseudorandom */
int boxaPermutePseudorandom(void);

/* Symbol: pixColorShiftRGB */
/* Demangled: pixColorShiftRGB */
int pixColorShiftRGB(void);

/* Symbol: pixSeedfillMorph */
/* Demangled: pixSeedfillMorph */
int pixSeedfillMorph(void);

/* Symbol: numaWindowedStats */
/* Demangled: numaWindowedStats */
int numaWindowedStats(void);

/* Symbol: pixOr */
/* Demangled: pixOr */
int pixOr(void);

/* Symbol: numaShiftValue */
/* Demangled: numaShiftValue */
int numaShiftValue(void);

/* Symbol: ditherToBinaryLow */
/* Demangled: ditherToBinaryLow */
int ditherToBinaryLow(void);

/* Symbol: dewarpaReadMem */
/* Demangled: dewarpaReadMem */
int dewarpaReadMem(void);

/* Symbol: pixAddRGB */
/* Demangled: pixAddRGB */
int pixAddRGB(void);

/* Symbol: ptaFindPtByHash */
/* Demangled: ptaFindPtByHash */
int ptaFindPtByHash(void);

/* Symbol: pixaAddTextNumber */
/* Demangled: pixaAddTextNumber */
int pixaAddTextNumber(void);

/* Symbol: l_dnaGetIValue */
/* Demangled: l_dnaGetIValue */
int l_dnaGetIValue(void);

/* Symbol: pixRenderHashBox */
/* Demangled: pixRenderHashBox */
int pixRenderHashBox(void);

/* Symbol: l_amapGetLast */
/* Demangled: l_amapGetLast */
int l_amapGetLast(void);

/* Symbol: concatenatePdfToData */
/* Demangled: concatenatePdfToData */
int concatenatePdfToData(void);

/* Symbol: recogGetIndex */
/* Demangled: recogGetIndex */
int recogGetIndex(void);

/* Symbol: boxSetGeometry */
/* Demangled: boxSetGeometry */
int boxSetGeometry(void);

/* Symbol: pixUpDownDetect */
/* Demangled: pixUpDownDetect */
int pixUpDownDetect(void);

/* Symbol: generatePtaaHashBoxa */
/* Demangled: generatePtaaHashBoxa */
int generatePtaaHashBoxa(void);

/* Symbol: pixaWriteStream */
/* Demangled: pixaWriteStream */
int pixaWriteStream(void);

/* Symbol: recogSetChannelParams */
/* Demangled: recogSetChannelParams */
int recogSetChannelParams(void);

/* Symbol: rasteropHipLow */
/* Demangled: rasteropHipLow */
int rasteropHipLow(void);

/* Symbol: pixTilingCreate */
/* Demangled: pixTilingCreate */
int pixTilingCreate(void);

/* Symbol: pixMorphSequenceDwa */
/* Demangled: pixMorphSequenceDwa */
int pixMorphSequenceDwa(void);

/* Symbol: gplotSimpleXY1 */
/* Demangled: gplotSimpleXY1 */
int gplotSimpleXY1(void);

/* Symbol: numaSimilar */
/* Demangled: numaSimilar */
int numaSimilar(void);

/* Symbol: ptraAdd */
/* Demangled: ptraAdd */
int ptraAdd(void);

/* Symbol: pixGetColumnStats */
/* Demangled: pixGetColumnStats */
int pixGetColumnStats(void);

/* Symbol: makeRGBToIndexTables */
/* Demangled: makeRGBToIndexTables */
int makeRGBToIndexTables(void);

/* Symbol: gplotSimpleXY2 */
/* Demangled: gplotSimpleXY2 */
int gplotSimpleXY2(void);

/* Symbol: pixaExtendIterative */
/* Demangled: pixaExtendIterative */
int pixaExtendIterative(void);

/* Symbol: convertSegmentedFilesToPdf */
/* Demangled: convertSegmentedFilesToPdf */
int convertSegmentedFilesToPdf(void);

/* Symbol: pixReadMemTiff */
/* Demangled: pixReadMemTiff */
int pixReadMemTiff(void);

/* Symbol: recogaGetRecog */
/* Demangled: recogaGetRecog */
int recogaGetRecog(void);

/* Symbol: boxaaAddBoxa */
/* Demangled: boxaaAddBoxa */
int boxaaAddBoxa(void);

/* Symbol: pixConvertToDPix */
/* Demangled: pixConvertToDPix */
int pixConvertToDPix(void);

/* Symbol: numaAddToNumber */
/* Demangled: numaAddToNumber */
int numaAddToNumber(void);

/* Symbol: pixcompCreateFromFile */
/* Demangled: pixcompCreateFromFile */
int pixcompCreateFromFile(void);

/* Symbol: readHeaderTiff */
/* Demangled: readHeaderTiff */
int readHeaderTiff(void);

/* Symbol: scaleGrayAreaMapLow */
/* Demangled: scaleGrayAreaMapLow */
int scaleGrayAreaMapLow(void);

/* Symbol: freadHeaderTiff */
/* Demangled: freadHeaderTiff */
int freadHeaderTiff(void);

/* Symbol: pixDestroy */
/* Demangled: pixDestroy */
int pixDestroy(void);

/* Symbol: boxClipToRectangleParams */
/* Demangled: boxClipToRectangleParams */
int boxClipToRectangleParams(void);

/* Symbol: pixSplitComponentWithProfile */
/* Demangled: pixSplitComponentWithProfile */
int pixSplitComponentWithProfile(void);

/* Symbol: pixaAddTextlines */
/* Demangled: pixaAddTextlines */
int pixaAddTextlines(void);

/* Symbol: pixWarpStereoscopic */
/* Demangled: pixWarpStereoscopic */
int pixWarpStereoscopic(void);

/* Symbol: fpixCreate */
/* Demangled: fpixCreate */
int fpixCreate(void);

/* Symbol: pixOpenGeneralized */
/* Demangled: pixOpenGeneralized */
int pixOpenGeneralized(void);

/* Symbol: l_getCurrentTime */
/* Demangled: l_getCurrentTime */
int l_getCurrentTime(void);

/* Symbol: wshedApply */
/* Demangled: wshedApply */
int wshedApply(void);

/* Symbol: pixWindowedMeanSquare */
/* Demangled: pixWindowedMeanSquare */
int pixWindowedMeanSquare(void);

/* Symbol: pixWriteStreamGif */
/* Demangled: pixWriteStreamGif */
int pixWriteStreamGif(void);

/* Symbol: pixScanForEdge */
/* Demangled: pixScanForEdge */
int pixScanForEdge(void);

/* Symbol: pixStretchHorizontal */
/* Demangled: pixStretchHorizontal */
int pixStretchHorizontal(void);

/* Symbol: pixaccAdd */
/* Demangled: pixaccAdd */
int pixaccAdd(void);

/* Symbol: stringReplaceEachSubstr */
/* Demangled: stringReplaceEachSubstr */
int stringReplaceEachSubstr(void);

/* Symbol: getSortedPathnamesInDirectory */
/* Demangled: getSortedPathnamesInDirectory */
int getSortedPathnamesInDirectory(void);

/* Symbol: l_dnaJoin */
/* Demangled: l_dnaJoin */
int l_dnaJoin(void);

/* Symbol: numaaJoin */
/* Demangled: numaaJoin */
int numaaJoin(void);

/* Symbol: pixRankFilterGray */
/* Demangled: pixRankFilterGray */
int pixRankFilterGray(void);

/* Symbol: shiftDataHorizontalLow */
/* Demangled: shiftDataHorizontalLow */
int shiftDataHorizontalLow(void);

/* Symbol: l_dnaShiftValue */
/* Demangled: l_dnaShiftValue */
int l_dnaShiftValue(void);

/* Symbol: pixUnsharpMaskingGray */
/* Demangled: pixUnsharpMaskingGray */
int pixUnsharpMaskingGray(void);

/* Symbol: pixUnionOfMorphOps */
/* Demangled: pixUnionOfMorphOps */
int pixUnionOfMorphOps(void);

/* Symbol: pixAnd */
/* Demangled: pixAnd */
int pixAnd(void);

/* Symbol: pixSetColormap */
/* Demangled: pixSetColormap */
int pixSetColormap(void);

/* Symbol: pixcmapGetColor32 */
/* Demangled: pixcmapGetColor32 */
int pixcmapGetColor32(void);

/* Symbol: pixGetText */
/* Demangled: pixGetText */
int pixGetText(void);

/* Symbol: scaleColor2xLILow */
/* Demangled: scaleColor2xLILow */
int scaleColor2xLILow(void);

/* Symbol: boxIntersectByLine */
/* Demangled: boxIntersectByLine */
int boxIntersectByLine(void);

/* Symbol: pixcmapGetDepth */
/* Demangled: pixcmapGetDepth */
int pixcmapGetDepth(void);

/* Symbol: pixScaleToGray2 */
/* Demangled: pixScaleToGray2 */
int pixScaleToGray2(void);

/* Symbol: selaGetCombName */
/* Demangled: selaGetCombName */
int selaGetCombName(void);

/* Symbol: l_byteaInitFromFile */
/* Demangled: l_byteaInitFromFile */
int l_byteaInitFromFile(void);

/* Symbol: pixaGetPixArray */
/* Demangled: pixaGetPixArray */
int pixaGetPixArray(void);

/* Symbol: pixSaveTiledOutline */
/* Demangled: pixSaveTiledOutline */
int pixSaveTiledOutline(void);

/* Symbol: pixScaleToGray3 */
/* Demangled: pixScaleToGray3 */
int pixScaleToGray3(void);

/* Symbol: pixBlendGrayInverse */
/* Demangled: pixBlendGrayInverse */
int pixBlendGrayInverse(void);

/* Symbol: l_dnaMakeSequence */
/* Demangled: l_dnaMakeSequence */
int l_dnaMakeSequence(void);

/* Symbol: pixaRemovePixAndSave */
/* Demangled: pixaRemovePixAndSave */
int pixaRemovePixAndSave(void);

/* Symbol: pixStrokeWidthTransform */
/* Demangled: pixStrokeWidthTransform */
int pixStrokeWidthTransform(void);

/* Symbol: pixScaleToGray4 */
/* Demangled: pixScaleToGray4 */
int pixScaleToGray4(void);

/* Symbol: boxaGetRankVals */
/* Demangled: boxaGetRankVals */
int boxaGetRankVals(void);

/* Symbol: numaCopy */
/* Demangled: numaCopy */
int numaCopy(void);

/* Symbol: pixWriteMemPS */
/* Demangled: pixWriteMemPS */
int pixWriteMemPS(void);

/* Symbol: recogShowContent */
/* Demangled: recogShowContent */
int recogShowContent(void);

/* Symbol: pixGetRefcount */
/* Demangled: pixGetRefcount */
int pixGetRefcount(void);

/* Symbol: pixQuantFromCmap */
/* Demangled: pixQuantFromCmap */
int pixQuantFromCmap(void);

/* Symbol: pixThresholdForFgBg */
/* Demangled: pixThresholdForFgBg */
int pixThresholdForFgBg(void);

/* Symbol: pixScaleToGray6 */
/* Demangled: pixScaleToGray6 */
int pixScaleToGray6(void);

/* Symbol: Java_com_googlecode_leptonica_android_Pix_nativeClone */
/* Demangled: Java_com_googlecode_leptonica_android_Pix_nativeClone */
int Java_com_googlecode_leptonica_android_Pix_nativeClone(void);

/* Symbol: ptaWrite */
/* Demangled: ptaWrite */
int ptaWrite(void);

/* Symbol: lept_rmdir */
/* Demangled: lept_rmdir */
int lept_rmdir(void);

/* Symbol: pixSauvolaGetThreshold */
/* Demangled: pixSauvolaGetThreshold */
int pixSauvolaGetThreshold(void);

/* Symbol: boxaCopy */
/* Demangled: boxaCopy */
int boxaCopy(void);

/* Symbol: l_dnaaCreate */
/* Demangled: l_dnaaCreate */
int l_dnaaCreate(void);

/* Symbol: pixaReadBoth */
/* Demangled: pixaReadBoth */
int pixaReadBoth(void);

/* Symbol: pixScaleToGray8 */
/* Demangled: pixScaleToGray8 */
int pixScaleToGray8(void);

/* Symbol: pixFixedOctcubeQuant256 */
/* Demangled: pixFixedOctcubeQuant256 */
int pixFixedOctcubeQuant256(void);

/* Symbol: l_amapCreate */
/* Demangled: l_amapCreate */
int l_amapCreate(void);

/* Symbol: pixAffineSequential */
/* Demangled: pixAffineSequential */
int pixAffineSequential(void);

/* Symbol: kernelGetParameters */
/* Demangled: kernelGetParameters */
int kernelGetParameters(void);

/* Symbol: boxaPlotSizes */
/* Demangled: boxaPlotSizes */
int boxaPlotSizes(void);

/* Symbol: numaaWrite */
/* Demangled: numaaWrite */
int numaaWrite(void);

/* Symbol: grayHistogramsToEMD */
/* Demangled: grayHistogramsToEMD */
int grayHistogramsToEMD(void);

/* Symbol: pixExtractOnLine */
/* Demangled: pixExtractOnLine */
int pixExtractOnLine(void);

/* Symbol: pixaRenderComponent */
/* Demangled: pixaRenderComponent */
int pixaRenderComponent(void);

/* Symbol: pixGetBackgroundRGBMap */
/* Demangled: pixGetBackgroundRGBMap */
int pixGetBackgroundRGBMap(void);

/* Symbol: pixRemoveColormap */
/* Demangled: pixRemoveColormap */
int pixRemoveColormap(void);

/* Symbol: ptaAffineTransform */
/* Demangled: ptaAffineTransform */
int ptaAffineTransform(void);

/* Symbol: pixDistanceFunction */
/* Demangled: pixDistanceFunction */
int pixDistanceFunction(void);

/* Symbol: pixaFindAreaFraction */
/* Demangled: pixaFindAreaFraction */
int pixaFindAreaFraction(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBLEPT_H */

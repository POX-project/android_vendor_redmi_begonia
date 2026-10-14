/*
 * Reverse-Engineered ABI Specification for: libtess.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libtess.so
 */

#ifndef BEGONIA_RE_LIBTESS_H
#define BEGONIA_RE_LIBTESS_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN9tesseract11TessBaseAPI11IsValidWordEPKc */
/* Demangled: tesseract::TessBaseAPI::IsValidWord(char const*) */
int _ZN9tesseract11TessBaseAPI11IsValidWordEPKc(void);

/* Symbol: _ZN9tesseract15StructuredTableC2Ev */
/* Demangled: tesseract::StructuredTable::StructuredTable() */
int _ZN9tesseract15StructuredTableC2Ev(void);

/* Symbol: _ZN9tesseract11TessBaseAPI19GetVariableAsStringEPKcP6STRING */
/* Demangled: tesseract::TessBaseAPI::GetVariableAsString(char const*, STRING*) */
int _ZN9tesseract11TessBaseAPI19GetVariableAsStringEPKcP6STRING(void);

/* Symbol: _ZN9tesseract11CharAltListD1Ev */
/* Demangled: tesseract::CharAltList::~CharAltList() */
int _ZN9tesseract11CharAltListD1Ev(void);

/* Symbol: _ZNSt3__112__hash_tableIP8BLOBNBOXN9tesseract7PtrHashIS1_EENS_8equal_toIS2_EENS_9allocatorIS2_EEE25__emplace_unique_key_argsIS2_JRKS2_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<BLOBNBOX*, void*>*>, bool> std::__1::__hash_table<BLOBNBOX*, tesseract::PtrHash<BLOBNBOX>, std::__1::equal_to<BLOBNBOX*>, std::__1::allocator<BLOBNBOX*> >::__emplace_unique_key_args<BLOBNBOX*, BLOBNBOX* const&>(BLOBNBOX* const&, BLOBNBOX* const&) */
int _ZNSt3__112__hash_tableIP8BLOBNBOXN9tesseract7PtrHashIS1_EENS_8equal_toIS2_EENS_9allocatorIS2_EEE25__emplace_unique_key_argsIS2_JRKS2_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: edges_min_nonhole */
/* Demangled: edges_min_nonhole */
extern void* edges_min_nonhole;

/* Symbol: _ZNK10UNICHARSET13SizesDistinctEii */
/* Demangled: UNICHARSET::SizesDistinct(int, int) const */
int _ZNK10UNICHARSET13SizesDistinctEii(void);

/* Symbol: _ZN9tesseract8Classify13MasterMatcherEP20INT_TEMPLATES_STRUCTsPK18INT_FEATURE_STRUCTPKhPP18ADAPT_CLASS_STRUCTiiRK4TBOXRK13GenericVectorI16CP_RESULT_STRUCTEP13ADAPT_RESULTS */
/* Demangled: tesseract::Classify::MasterMatcher(INT_TEMPLATES_STRUCT*, short, INT_FEATURE_STRUCT const*, unsigned char const*, ADAPT_CLASS_STRUCT**, int, int, TBOX const&, GenericVector<CP_RESULT_STRUCT> const&, ADAPT_RESULTS*) */
int _ZN9tesseract8Classify13MasterMatcherEP20INT_TEMPLATES_STRUCTsPK18INT_FEATURE_STRUCTPKhPP18ADAPT_CLASS_STRUCTiiRK4TBOXRK13GenericVectorI16CP_RESULT_STRUCTEP13ADAPT_RESULTS(void);

/* Symbol: _ZN9tesseract14BaselineDetectC1EiRK6FCOORDP13TO_BLOCK_LIST */
/* Demangled: tesseract::BaselineDetect::BaselineDetect(int, FCOORD const&, TO_BLOCK_LIST*) */
int _ZN9tesseract14BaselineDetectC1EiRK6FCOORDP13TO_BLOCK_LIST(void);

/* Symbol: textord_spline_outlier_fraction */
/* Demangled: textord_spline_outlier_fraction */
extern void* textord_spline_outlier_fraction;

/* Symbol: _ZN7UNICHAR9utf8_stepEPKc */
/* Demangled: UNICHAR::utf8_step(char const*) */
int _ZN7UNICHAR9utf8_stepEPKc(void);

/* Symbol: _ZN9tesseract12ErrorCounter14AccumulateJunkEbRK13GenericVectorINS_13UnicharRatingEEPNS_14TrainingSampleE */
/* Demangled: tesseract::ErrorCounter::AccumulateJunk(bool, GenericVector<tesseract::UnicharRating> const&, tesseract::TrainingSample*) */
int _ZN9tesseract12ErrorCounter14AccumulateJunkEbRK13GenericVectorINS_13UnicharRatingEEPNS_14TrainingSampleE(void);

/* Symbol: _ZN13GenericVectorItE15double_the_sizeEv */
/* Demangled: GenericVector<unsigned short>::double_the_size() */
int _ZN13GenericVectorItE15double_the_sizeEv(void);

/* Symbol: _ZNK13GenericVectorIN9tesseract15UnicharAndFontsEE16SerializeClassesEP7__sFILE */
/* Demangled: GenericVector<tesseract::UnicharAndFonts>::SerializeClasses(__sFILE*) const */
int _ZNK13GenericVectorIN9tesseract15UnicharAndFontsEE16SerializeClassesEP7__sFILE(void);

/* Symbol: _ZN9tesseract12ColumnFinder17SmoothPartnerRunsEv */
/* Demangled: tesseract::ColumnFinder::SmoothPartnerRuns() */
int _ZN9tesseract12ColumnFinder17SmoothPartnerRunsEv(void);

/* Symbol: _ZNSt3__112__hash_tableIPN9tesseract12ColPartitionENS1_7PtrHashIS2_EENS_8equal_toIS3_EENS_9allocatorIS3_EEE4findIS3_EENS_15__hash_iteratorIPNS_11__hash_nodeIS3_PvEEEERKT_ */
/* Demangled: std::__1::__hash_iterator<std::__1::__hash_node<tesseract::ColPartition*, void*>*> std::__1::__hash_table<tesseract::ColPartition*, tesseract::PtrHash<tesseract::ColPartition>, std::__1::equal_to<tesseract::ColPartition*>, std::__1::allocator<tesseract::ColPartition*> >::find<tesseract::ColPartition*>(tesseract::ColPartition* const&) */
int _ZNSt3__112__hash_tableIPN9tesseract12ColPartitionENS1_7PtrHashIS2_EENS_8equal_toIS3_EENS_9allocatorIS3_EEE4findIS3_EENS_15__hash_iteratorIPNS_11__hash_nodeIS3_PvEEEERKT_(void);

/* Symbol: _ZN9tesseract9ImageData8AddBoxesERK13GenericVectorI4TBOXERKS1_I6STRINGERKS1_IiE */
/* Demangled: tesseract::ImageData::AddBoxes(GenericVector<TBOX> const&, GenericVector<STRING> const&, GenericVector<int> const&) */
int _ZN9tesseract9ImageData8AddBoxesERK13GenericVectorI4TBOXERKS1_I6STRINGERKS1_IiE(void);

/* Symbol: _ZN9tesseract8ClassifyD2Ev */
/* Demangled: tesseract::Classify::~Classify() */
int _ZN9tesseract8ClassifyD2Ev(void);

/* Symbol: _ZN9tesseract21TrainingSample_zapperEP10ELIST_LINK */
/* Demangled: tesseract::TrainingSample_zapper(ELIST_LINK*) */
int _ZN9tesseract21TrainingSample_zapperEP10ELIST_LINK(void);

/* Symbol: _ZN13GenericVectorI17GenericVectorEqEqIiEE5clearEv */
/* Demangled: GenericVector<GenericVectorEqEq<int> >::clear() */
int _ZN13GenericVectorI17GenericVectorEqEqIiEE5clearEv(void);

/* Symbol: _ZN9tesseract4Dict23dawg_permute_and_selectERK13GenericVectorIP16BLOB_CHOICE_LISTEf */
/* Demangled: tesseract::Dict::dawg_permute_and_select(GenericVector<BLOB_CHOICE_LIST*> const&, float) */
int _ZN9tesseract4Dict23dawg_permute_and_selectERK13GenericVectorIP16BLOB_CHOICE_LISTEf(void);

/* Symbol: _ZN9tesseract8CharSampD2Ev */
/* Demangled: tesseract::CharSamp::~CharSamp() */
int _ZN9tesseract8CharSampD2Ev(void);

/* Symbol: _ZN9tesseract4DictC2EPNS_6CCUtilE */
/* Demangled: tesseract::Dict::Dict(tesseract::CCUtil*) */
int _ZN9tesseract4DictC2EPNS_6CCUtilE(void);

/* Symbol: _Z13C_BLOB_zapperP10ELIST_LINK */
/* Demangled: C_BLOB_zapper(ELIST_LINK*) */
int _Z13C_BLOB_zapperP10ELIST_LINK(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5closeEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::close() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5closeEv(void);

/* Symbol: _ZN9tesseract9Tesseract14SetupWordPassNEiPNS_8WordDataE */
/* Demangled: tesseract::Tesseract::SetupWordPassN(int, tesseract::WordData*) */
int _ZN9tesseract9Tesseract14SetupWordPassNEiPNS_8WordDataE(void);

/* Symbol: _ZN9tesseract13FontInfoTableD2Ev */
/* Demangled: tesseract::FontInfoTable::~FontInfoTable() */
int _ZN9tesseract13FontInfoTableD2Ev(void);

/* Symbol: _ZN9tesseract12DocumentDataD1Ev */
/* Demangled: tesseract::DocumentData::~DocumentData() */
int _ZN9tesseract12DocumentDataD1Ev(void);

/* Symbol: _ZN13GenericVectorIN9tesseract17TrainingSampleSet17FontClassDistanceEE5clearEv */
/* Demangled: GenericVector<tesseract::TrainingSampleSet::FontClassDistance>::clear() */
int _ZN13GenericVectorIN9tesseract17TrainingSampleSet17FontClassDistanceEE5clearEv(void);

/* Symbol: _ZN13SORTED_FLOATS3addEfi */
/* Demangled: SORTED_FLOATS::add(float, int) */
int _ZN13SORTED_FLOATS3addEfi(void);

/* Symbol: textord_fast_pitch_test */
/* Demangled: textord_fast_pitch_test */
extern void* textord_fast_pitch_test;

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(void);

/* Symbol: TessBaseAPIGetIntVariable */
/* Demangled: TessBaseAPIGetIntVariable */
int TessBaseAPIGetIntVariable(void);

/* Symbol: _Z11BucketStartifi */
/* Demangled: BucketStart(int, float, int) */
int _Z11BucketStartifi(void);

/* Symbol: _ZN9tesseract21ConvNetCharClassifier4FoldEv */
/* Demangled: tesseract::ConvNetCharClassifier::Fold() */
int _ZN9tesseract21ConvNetCharClassifier4FoldEv(void);

/* Symbol: _ZN13GenericVectorI18INT_FEATURE_STRUCTE7reserveEi */
/* Demangled: GenericVector<INT_FEATURE_STRUCT>::reserve(int) */
int _ZN13GenericVectorI18INT_FEATURE_STRUCTE7reserveEi(void);

/* Symbol: TessBaseAPIGetDatapath */
/* Demangled: TessBaseAPIGetDatapath */
int TessBaseAPIGetDatapath(void);

/* Symbol: _Z17c_blob_comparatorPKvS0_ */
/* Demangled: c_blob_comparator(void const*, void const*) */
int _Z17c_blob_comparatorPKvS0_(void);

/* Symbol: _ZN9tesseract10BeamSearch7CleanupEv */
/* Demangled: tesseract::BeamSearch::Cleanup() */
int _ZN9tesseract10BeamSearch7CleanupEv(void);

/* Symbol: _ZN9tesseract8CharSampC2Eii */
/* Demangled: tesseract::CharSamp::CharSamp(int, int) */
int _ZN9tesseract8CharSampC2Eii(void);

/* Symbol: _ZNK9tesseract18TextlineProjection11EvaluateBoxERK4TBOXPK6DENORMb */
/* Demangled: tesseract::TextlineProjection::EvaluateBox(TBOX const&, DENORM const*, bool) const */
int _ZNK9tesseract18TextlineProjection11EvaluateBoxERK4TBOXPK6DENORMb(void);

/* Symbol: TessDeleteBlockList */
/* Demangled: TessDeleteBlockList */
int TessDeleteBlockList(void);

/* Symbol: _ZN8TESSLINE4MoveE6ICOORD */
/* Demangled: TESSLINE::Move(ICOORD) */
int _ZN8TESSLINE4MoveE6ICOORD(void);

/* Symbol: _Z9long_randl */
/* Demangled: long_rand(long) */
int _Z9long_randl(void);

/* Symbol: _ZN9tesseract4DictD2Ev */
/* Demangled: tesseract::Dict::~Dict() */
int _ZN9tesseract4DictD2Ev(void);

/* Symbol: _ZN9tesseract15CubeRecoContextC1EPNS_9TesseractE */
/* Demangled: tesseract::CubeRecoContext::CubeRecoContext(tesseract::Tesseract*) */
int _ZN9tesseract15CubeRecoContextC1EPNS_9TesseractE(void);

/* Symbol: _ZN9tesseract14ResultIterator24MoveToLogicalStartOfWordEv */
/* Demangled: tesseract::ResultIterator::MoveToLogicalStartOfWord() */
int _ZN9tesseract14ResultIterator24MoveToLogicalStartOfWordEv(void);

/* Symbol: _ZN6FCOORD20binary_angle_plus_piEd */
/* Demangled: FCOORD::binary_angle_plus_pi(double) */
int _ZN6FCOORD20binary_angle_plus_piEd(void);

/* Symbol: _ZN13GenericVectorIN9tesseract8FontInfoEE18DeSerializeClassesEbP7__sFILE */
/* Demangled: GenericVector<tesseract::FontInfo>::DeSerializeClasses(bool, __sFILE*) */
int _ZN13GenericVectorIN9tesseract8FontInfoEE18DeSerializeClassesEbP7__sFILE(void);

/* Symbol: _ZN5TBLOB8CopyFromERKS_ */
/* Demangled: TBLOB::CopyFrom(TBLOB const&) */
int _ZN5TBLOB8CopyFromERKS_(void);

/* Symbol: _ZN9tesseract11ParamsModel4CopyERKS0_ */
/* Demangled: tesseract::ParamsModel::Copy(tesseract::ParamsModel const&) */
int _ZN9tesseract11ParamsModel4CopyERKS0_(void);

/* Symbol: _ZN9tesseract9CubeUtils7ToLowerEPKiPNS_7CharSetE */
/* Demangled: tesseract::CubeUtils::ToLower(int const*, tesseract::CharSet*) */
int _ZN9tesseract9CubeUtils7ToLowerEPKiPNS_7CharSetE(void);

/* Symbol: _ZN9tesseract16FeatureChebyshevC1EPNS_12TuningParamsE */
/* Demangled: tesseract::FeatureChebyshev::FeatureChebyshev(tesseract::TuningParams*) */
int _ZN9tesseract16FeatureChebyshevC1EPNS_12TuningParamsE(void);

/* Symbol: _ZN9tesseract12ColumnFinder20InsertRemainingNoiseEP8TO_BLOCK */
/* Demangled: tesseract::ColumnFinder::InsertRemainingNoise(TO_BLOCK*) */
int _ZN9tesseract12ColumnFinder20InsertRemainingNoiseEP8TO_BLOCK(void);

/* Symbol: _ZN9tesseract10GridSearchINS_11WordWithBoxENS_17WordWithBox_CLISTENS_16WordWithBox_C_ITEE14NextRectSearchEv */
/* Demangled: tesseract::GridSearch<tesseract::WordWithBox, tesseract::WordWithBox_CLIST, tesseract::WordWithBox_C_IT>::NextRectSearch() */
int _ZN9tesseract10GridSearchINS_11WordWithBoxENS_17WordWithBox_CLISTENS_16WordWithBox_C_ITEE14NextRectSearchEv(void);

/* Symbol: _ZNK13GenericVectorIS_IN9tesseract24ParamsTrainingHypothesisEEE4backEv */
/* Demangled: GenericVector<GenericVector<tesseract::ParamsTrainingHypothesis> >::back() const */
int _ZNK13GenericVectorIS_IN9tesseract24ParamsTrainingHypothesisEEE4backEv(void);

/* Symbol: _ZN9tesseract8CCStruct17kAscenderFractionE */
/* Demangled: tesseract::CCStruct::kAscenderFraction */
extern void* _ZN9tesseract8CCStruct17kAscenderFractionE;

/* Symbol: _ZN10UNICHARSET14debug_utf8_strEPKc */
/* Demangled: UNICHARSET::debug_utf8_str(char const*) */
int _ZN10UNICHARSET14debug_utf8_strEPKc(void);

/* Symbol: _ZNK9tesseract11BaselineRow5PrintEv */
/* Demangled: tesseract::BaselineRow::Print() const */
int _ZNK9tesseract11BaselineRow5PrintEv(void);

/* Symbol: textord_fp_chop_error */
/* Demangled: textord_fp_chop_error */
extern void* textord_fp_chop_error;

/* Symbol: _ZN5BLOCK25reflect_polygon_in_y_axisEv */
/* Demangled: BLOCK::reflect_polygon_in_y_axis() */
int _ZN5BLOCK25reflect_polygon_in_y_axisEv(void);

/* Symbol: _ZNK10UNICHARSET18UNICHAR_PROPERTIES13AnyRangeEmptyEv */
/* Demangled: UNICHARSET::UNICHAR_PROPERTIES::AnyRangeEmpty() const */
int _ZNK10UNICHARSET18UNICHAR_PROPERTIES13AnyRangeEmptyEv(void);

/* Symbol: _ZNK9tesseract12ColPartition12LeftBlobRuleEv */
/* Demangled: tesseract::ColPartition::LeftBlobRule() const */
int _ZNK9tesseract12ColPartition12LeftBlobRuleEv(void);

/* Symbol: _Z11InsertNodesP6KDTREEP6KDNODE */
/* Demangled: InsertNodes(KDTREE*, KDNODE*) */
int _Z11InsertNodesP6KDTREEP6KDNODE(void);

/* Symbol: _ZNK9tesseract5Shape22ContainsFontPropertiesERKNS_13FontInfoTableEj */
/* Demangled: tesseract::Shape::ContainsFontProperties(tesseract::FontInfoTable const&, unsigned int) const */
int _ZNK9tesseract5Shape22ContainsFontPropertiesERKNS_13FontInfoTableEj(void);

/* Symbol: _ZN9tesseract13BaselineBlock19FitLineSpacingModelERK13GenericVectorIdEdPdS5_Pi */
/* Demangled: tesseract::BaselineBlock::FitLineSpacingModel(GenericVector<double> const&, double, double*, double*, int*) */
int _ZN9tesseract13BaselineBlock19FitLineSpacingModelERK13GenericVectorIdEdPdS5_Pi(void);

/* Symbol: _ZN14BLOCK_RES_LIST9deep_copyEPKS_PFP9BLOCK_RESPKS2_E */
/* Demangled: BLOCK_RES_LIST::deep_copy(BLOCK_RES_LIST const*, BLOCK_RES* (*)(BLOCK_RES const*)) */
int _ZN14BLOCK_RES_LIST9deep_copyEPKS_PFP9BLOCK_RESPKS2_E(void);

/* Symbol: _Z14DistributionOKP7BUCKETS */
/* Demangled: DistributionOK(BUCKETS*) */
int _Z14DistributionOKP7BUCKETS(void);

/* Symbol: _ZN9tesseract13MasterTrainer24WriteInttempAndPFFMTableERK10UNICHARSETS3_RKNS_10ShapeTableEP12CLASS_STRUCTPKcSA_ */
/* Demangled: tesseract::MasterTrainer::WriteInttempAndPFFMTable(UNICHARSET const&, UNICHARSET const&, tesseract::ShapeTable const&, CLASS_STRUCT*, char const*, char const*) */
int _ZN9tesseract13MasterTrainer24WriteInttempAndPFFMTableERK10UNICHARSETS3_RKNS_10ShapeTableEP12CLASS_STRUCTPKcSA_(void);

/* Symbol: textord_words_maxspace */
/* Demangled: textord_words_maxspace */
extern void* textord_words_maxspace;

/* Symbol: _ZN9tesseract9Tesseract20recog_word_recursiveEP8WERD_RES */
/* Demangled: tesseract::Tesseract::recog_word_recursive(WERD_RES*) */
int _ZN9tesseract9Tesseract20recog_word_recursiveEP8WERD_RES(void);

/* Symbol: _ZN8BLOBNBOX15CleanNeighboursEP13BLOBNBOX_LIST */
/* Demangled: BLOBNBOX::CleanNeighbours(BLOBNBOX_LIST*) */
int _ZN8BLOBNBOX15CleanNeighboursEP13BLOBNBOX_LIST(void);

/* Symbol: _ZN9tesseract11TessBaseAPI16SetDebugVariableEPKcS2_ */
/* Demangled: tesseract::TessBaseAPI::SetDebugVariable(char const*, char const*) */
int _ZN9tesseract11TessBaseAPI16SetDebugVariableEPKcS2_(void);

/* Symbol: TessBaseAPIGetBoxText */
/* Demangled: TessBaseAPIGetBoxText */
int TessBaseAPIGetBoxText(void);

/* Symbol: _ZN9tesseract7IntGridD2Ev */
/* Demangled: tesseract::IntGrid::~IntGrid() */
int _ZN9tesseract7IntGridD2Ev(void);

/* Symbol: _ZN9tesseract12ColPartition9RemoveBoxEP8BLOBNBOX */
/* Demangled: tesseract::ColPartition::RemoveBox(BLOBNBOX*) */
int _ZN9tesseract12ColPartition9RemoveBoxEP8BLOBNBOX(void);

/* Symbol: _ZN9tesseract11StrokeWidthD2Ev */
/* Demangled: tesseract::StrokeWidth::~StrokeWidth() */
int _ZN9tesseract11StrokeWidthD2Ev(void);

/* Symbol: _ZNK9tesseract9TabVector9SimilarToERK6ICOORDRKS0_PNS_8BlobGridE */
/* Demangled: tesseract::TabVector::SimilarTo(ICOORD const&, tesseract::TabVector const&, tesseract::BlobGrid*) const */
int _ZNK9tesseract9TabVector9SimilarToERK6ICOORDRKS0_PNS_8BlobGridE(void);

/* Symbol: _ZN13GenericVectorIN9tesseract9KDPairIncIfiEEE5clearEv */
/* Demangled: GenericVector<tesseract::KDPairInc<float, int> >::clear() */
int _ZN13GenericVectorIN9tesseract9KDPairIncIfiEEE5clearEv(void);

/* Symbol: _Z17old_first_xheightP6TO_ROWP4TBOXiiP7QSPLINEf */
/* Demangled: old_first_xheight(TO_ROW*, TBOX*, int, int, QSPLINE*, float) */
int _Z17old_first_xheightP6TO_ROWP4TBOXiiP7QSPLINEf(void);

/* Symbol: _ZN9tesseract11TessBaseAPI21RunAdaptiveClassifierEP5TBLOBiPiPfS3_ */
/* Demangled: tesseract::TessBaseAPI::RunAdaptiveClassifier(TBLOB*, int, int*, float*, int*) */
int _ZN9tesseract11TessBaseAPI21RunAdaptiveClassifierEP5TBLOBiPiPfS3_(void);

/* Symbol: _ZNSt3__112__hash_tableIPN9tesseract12ColPartitionENS1_7PtrHashIS2_EENS_8equal_toIS3_EENS_9allocatorIS3_EEED2Ev */
/* Demangled: std::__1::__hash_table<tesseract::ColPartition*, tesseract::PtrHash<tesseract::ColPartition>, std::__1::equal_to<tesseract::ColPartition*>, std::__1::allocator<tesseract::ColPartition*> >::~__hash_table() */
int _ZNSt3__112__hash_tableIPN9tesseract12ColPartitionENS1_7PtrHashIS2_EENS_8equal_toIS3_EENS_9allocatorIS3_EEED2Ev(void);

/* Symbol: _ZN13GenericVectorIP5TBLOBE9push_backES1_ */
/* Demangled: GenericVector<TBLOB*>::push_back(TBLOB*) */
int _ZN13GenericVectorIP5TBLOBE9push_backES1_(void);

/* Symbol: _Z11free_structPviPKc */
/* Demangled: free_struct(void*, int, char const*) */
int _Z11free_structPviPKc(void);

/* Symbol: _ZN7UNICHAR5beginEPKci */
/* Demangled: UNICHAR::begin(char const*, int) */
int _ZN7UNICHAR5beginEPKci(void);

/* Symbol: _ZN13GenericVectorIN9tesseract12KDPtrPairDecIf4SEAMEEE5clearEv */
/* Demangled: GenericVector<tesseract::KDPtrPairDec<float, SEAM> >::clear() */
int _ZN13GenericVectorIN9tesseract12KDPtrPairDecIf4SEAMEEE5clearEv(void);

/* Symbol: _ZN9tesseract7BoxWord9ChangeBoxEiRK4TBOX */
/* Demangled: tesseract::BoxWord::ChangeBox(int, TBOX const&) */
int _ZN9tesseract7BoxWord9ChangeBoxEiRK4TBOX(void);

/* Symbol: _Z22ShortNameToFeatureTypeRK19FEATURE_DEFS_STRUCTPKc */
/* Demangled: ShortNameToFeatureType(FEATURE_DEFS_STRUCT const&, char const*) */
int _Z22ShortNameToFeatureTypeRK19FEATURE_DEFS_STRUCTPKc(void);

/* Symbol: _ZN9tesseract9CubeUtils6StrCmpEPKiS2_ */
/* Demangled: tesseract::CubeUtils::StrCmp(int const*, int const*) */
int _ZN9tesseract9CubeUtils6StrCmpEPKiS2_(void);

/* Symbol: _ZN9tesseract11StrokeWidth16ConfirmEasyMergeEPKNS_12ColPartitionES3_ */
/* Demangled: tesseract::StrokeWidth::ConfirmEasyMerge(tesseract::ColPartition const*, tesseract::ColPartition const*) */
int _ZN9tesseract11StrokeWidth16ConfirmEasyMergeEPKNS_12ColPartitionES3_(void);

/* Symbol: _ZN9tesseract10ParamUtils15ResetToDefaultsEPNS_13ParamsVectorsE */
/* Demangled: tesseract::ParamUtils::ResetToDefaults(tesseract::ParamsVectors*) */
int _ZN9tesseract10ParamUtils15ResetToDefaultsEPNS_13ParamsVectorsE(void);

/* Symbol: TessResultRendererTitle */
/* Demangled: TessResultRendererTitle */
int TessResultRendererTitle(void);

/* Symbol: _ZN6C_BLOBC2EP14C_OUTLINE_LIST */
/* Demangled: C_BLOB::C_BLOB(C_OUTLINE_LIST*) */
int _ZN6C_BLOBC2EP14C_OUTLINE_LIST(void);

/* Symbol: _ZNSt3__112__hash_tableIPN9tesseract10ColSegmentENS1_7PtrHashIS2_EENS_8equal_toIS3_EENS_9allocatorIS3_EEE6rehashEj */
/* Demangled: std::__1::__hash_table<tesseract::ColSegment*, tesseract::PtrHash<tesseract::ColSegment>, std::__1::equal_to<tesseract::ColSegment*>, std::__1::allocator<tesseract::ColSegment*> >::rehash(unsigned int) */
int _ZNSt3__112__hash_tableIPN9tesseract10ColSegmentENS1_7PtrHashIS2_EENS_8equal_toIS3_EENS_9allocatorIS3_EEE6rehashEj(void);

/* Symbol: _ZN9tesseract13LanguageModel17GenerateNgramInfoEPKcffiifPKNS_17ViterbiStateEntryE */
/* Demangled: tesseract::LanguageModel::GenerateNgramInfo(char const*, float, float, int, int, float, tesseract::ViterbiStateEntry const*) */
int _ZN9tesseract13LanguageModel17GenerateNgramInfoEPKcffiifPKNS_17ViterbiStateEntryE(void);

/* Symbol: _ZN9tesseract12AffineMatrixEiiiiiPdS0_S0_S0_ */
/* Demangled: tesseract::AffineMatrix(int, int, int, int, int, double*, double*, double*, double*) */
int _ZN9tesseract12AffineMatrixEiiiiiPdS0_S0_S0_(void);

/* Symbol: __aeabi_ldivmod */
/* Demangled: __aeabi_ldivmod */
int fn___aeabi_ldivmod(void) __asm__("__aeabi_ldivmod");

/* Symbol: _ZN9tesseract15ColPartitionSet29AccumulateColumnWidthsAndGapsEPiS1_S1_S1_ */
/* Demangled: tesseract::ColPartitionSet::AccumulateColumnWidthsAndGaps(int*, int*, int*, int*) */
int _ZN9tesseract15ColPartitionSet29AccumulateColumnWidthsAndGapsEPiS1_S1_S1_(void);

/* Symbol: _ZN13GenericVectorIN9tesseract9KDPairIncIfP6EDGEPTEEE5clearEv */
/* Demangled: GenericVector<tesseract::KDPairInc<float, EDGEPT*> >::clear() */
int _ZN13GenericVectorIN9tesseract9KDPairIncIfP6EDGEPTEEE5clearEv(void);

/* Symbol: _ZN9tesseract11TessBaseAPI11GetUTF8TextEv */
/* Demangled: tesseract::TessBaseAPI::GetUTF8Text() */
int _ZN9tesseract11TessBaseAPI11GetUTF8TextEv(void);

/* Symbol: _ZN13GenericVectorIN9tesseract8WordDataEE7reserveEi */
/* Demangled: GenericVector<tesseract::WordData>::reserve(int) */
int _ZN13GenericVectorIN9tesseract8WordDataEE7reserveEi(void);

/* Symbol: _ZNK9tesseract16ImageThresholder22OtsuThresholdRectToPixEP3PixPS2_ */
/* Demangled: tesseract::ImageThresholder::OtsuThresholdRectToPix(Pix*, Pix**) const */
int _ZNK9tesseract16ImageThresholder22OtsuThresholdRectToPixEP3PixPS2_(void);

/* Symbol: _ZNK9tesseract13MasterTrainer9SerializeEP7__sFILE */
/* Demangled: tesseract::MasterTrainer::Serialize(__sFILE*) const */
int _ZNK9tesseract13MasterTrainer9SerializeEP7__sFILE(void);

/* Symbol: _ZNK13GenericVectorIN9tesseract11ObjectCacheINS0_4DawgEE14ReferenceCountEE4backEv */
/* Demangled: GenericVector<tesseract::ObjectCache<tesseract::Dawg>::ReferenceCount>::back() const */
int _ZNK13GenericVectorIN9tesseract11ObjectCacheINS0_4DawgEE14ReferenceCountEE4backEv(void);

/* Symbol: _ZNK9tesseract14PixelHistogram19GetHistogramMaximumEPi */
/* Demangled: tesseract::PixelHistogram::GetHistogramMaximum(int*) const */
int _ZNK9tesseract14PixelHistogram19GetHistogramMaximumEPi(void);

/* Symbol: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeSetOutputName */
/* Demangled: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeSetOutputName */
int Java_com_googlecode_tesseract_android_TessBaseAPI_nativeSetOutputName(void);

/* Symbol: _ZNSt3__112basic_stringIiNS_11char_traitsIiEENS_9allocatorIiEEE9push_backEi */
/* Demangled: std::__1::basic_string<int, std::__1::char_traits<int>, std::__1::allocator<int> >::push_back(int) */
int _ZNSt3__112basic_stringIiNS_11char_traitsIiEENS_9allocatorIiEEE9push_backEi(void);

/* Symbol: _ZN9tesseract12ColPartition11CopyLeftTabERKS0_b */
/* Demangled: tesseract::ColPartition::CopyLeftTab(tesseract::ColPartition const&, bool) */
int _ZN9tesseract12ColPartition11CopyLeftTabERKS0_b(void);

/* Symbol: _ZN9tesseract11TessBaseAPI13SetInputImageEP3Pix */
/* Demangled: tesseract::TessBaseAPI::SetInputImage(Pix*) */
int _ZN9tesseract11TessBaseAPI13SetInputImageEP3Pix(void);

/* Symbol: _ZN9tesseract14TrainingSample11DeSerializeEbP7__sFILE */
/* Demangled: tesseract::TrainingSample::DeSerialize(bool, __sFILE*) */
int _ZN9tesseract14TrainingSample11DeSerializeEbP7__sFILE(void);

/* Symbol: _ZN8WERD_RES18SetScriptPositionsEv */
/* Demangled: WERD_RES::SetScriptPositions() */
int _ZN8WERD_RES18SetScriptPositionsEv(void);

/* Symbol: _ZN9tesseract12ColumnFinderC1EiRK6ICOORDS3_ibdPNS_14TabVector_LISTES5_ii */
/* Demangled: tesseract::ColumnFinder::ColumnFinder(int, ICOORD const&, ICOORD const&, int, bool, double, tesseract::TabVector_LIST*, tesseract::TabVector_LIST*, int, int) */
int _ZN9tesseract12ColumnFinderC1EiRK6ICOORDS3_ibdPNS_14TabVector_LISTES5_ii(void);

/* Symbol: _ZN9tesseract12RowsFitModelEPK13GenericVectorINS_19RowScratchRegistersEEiiPK14ParagraphModel */
/* Demangled: tesseract::RowsFitModel(GenericVector<tesseract::RowScratchRegisters> const*, int, int, ParagraphModel const*) */
int _ZN9tesseract12RowsFitModelEPK13GenericVectorINS_19RowScratchRegistersEEiiPK14ParagraphModel(void);

/* Symbol: _ZN9tesseract10DetLineFit3AddERK6ICOORDi */
/* Demangled: tesseract::DetLineFit::Add(ICOORD const&, int) */
int _ZN9tesseract10DetLineFit3AddERK6ICOORDi(void);

/* Symbol: _ZN6C_BLOB17count_transitionsEi */
/* Demangled: C_BLOB::count_transitions(int) */
int _ZN6C_BLOB17count_transitionsEi(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract11DoubleParamEE15double_the_sizeEv */
/* Demangled: GenericVector<tesseract::DoubleParam*>::double_the_size() */
int _ZN13GenericVectorIPN9tesseract11DoubleParamEE15double_the_sizeEv(void);

/* Symbol: CharNormDesc */
/* Demangled: CharNormDesc */
extern void* CharNormDesc;

/* Symbol: _ZN9tesseract13BaselineBlockC2EibP8TO_BLOCK */
/* Demangled: tesseract::BaselineBlock::BaselineBlock(int, bool, TO_BLOCK*) */
int _ZN9tesseract13BaselineBlockC2EibP8TO_BLOCK(void);

/* Symbol: _ZN9tesseract13LanguageModel23ComputeAdjustedPathCostEPNS_17ViterbiStateEntryE */
/* Demangled: tesseract::LanguageModel::ComputeAdjustedPathCost(tesseract::ViterbiStateEntry*) */
int _ZN9tesseract13LanguageModel23ComputeAdjustedPathCostEPNS_17ViterbiStateEntryE(void);

/* Symbol: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeConstruct */
/* Demangled: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeConstruct */
int Java_com_googlecode_tesseract_android_TessBaseAPI_nativeConstruct(void);

/* Symbol: TessBaseAPIGetMutableIterator */
/* Demangled: TessBaseAPIGetMutableIterator */
int TessBaseAPIGetMutableIterator(void);

/* Symbol: _ZN9tesseract10CubeObject13RecognizeWordEPNS_9LangModelE */
/* Demangled: tesseract::CubeObject::RecognizeWord(tesseract::LangModel*) */
int _ZN9tesseract10CubeObject13RecognizeWordEPNS_9LangModelE(void);

/* Symbol: _ZN3REJ16setrej_nn_acceptEv */
/* Demangled: REJ::setrej_nn_accept() */
int _ZN3REJ16setrej_nn_acceptEv(void);

/* Symbol: _Z19NextDirectionChangeP8list_rec */
/* Demangled: NextDirectionChange(list_rec*) */
int _Z19NextDirectionChangeP8list_rec(void);

/* Symbol: _ZTVN9tesseract9TesseractE */
/* Demangled: vtable for tesseract::Tesseract */
extern void* _ZTVN9tesseract9TesseractE;

/* Symbol: _ZN9tesseract7ConComp3AddEii */
/* Demangled: tesseract::ConComp::Add(int, int) */
int _ZN9tesseract7ConComp3AddEii(void);

/* Symbol: _ZN12FPSEGPT_LIST9deep_copyEPKS_PFP7FPSEGPTPKS2_E */
/* Demangled: FPSEGPT_LIST::deep_copy(FPSEGPT_LIST const*, FPSEGPT* (*)(FPSEGPT const*)) */
int _ZN12FPSEGPT_LIST9deep_copyEPKS_PFP7FPSEGPTPKS2_E(void);

/* Symbol: _ZNK9tesseract17LTRResultIterator18WordFontAttributesEPbS1_S1_S1_S1_S1_PiS2_ */
/* Demangled: tesseract::LTRResultIterator::WordFontAttributes(bool*, bool*, bool*, bool*, bool*, bool*, int*, int*) const */
int _ZNK9tesseract17LTRResultIterator18WordFontAttributesEPbS1_S1_S1_S1_S1_PiS2_(void);

/* Symbol: _Z18ApproximateOutlinebP9C_OUTLINE */
/* Demangled: ApproximateOutline(bool, C_OUTLINE*) */
int _Z18ApproximateOutlinebP9C_OUTLINE(void);

/* Symbol: _Z8delete_dP8list_recPvPFiS1_S1_E */
/* Demangled: delete_d(list_rec*, void*, int (*)(void*, void*)) */
int _Z8delete_dP8list_recPvPFiS1_S1_E(void);

/* Symbol: _ZN13GenericVectorIN9tesseract7FontSetEE5clearEv */
/* Demangled: GenericVector<tesseract::FontSet>::clear() */
int _ZN13GenericVectorIN9tesseract7FontSetEE5clearEv(void);

/* Symbol: _ZN9tesseract7ConComp5ShiftEii */
/* Demangled: tesseract::ConComp::Shift(int, int) */
int _ZN9tesseract7ConComp5ShiftEii(void);

/* Symbol: _ZN9tesseract9TabVector11ExtendToBoxEP8BLOBNBOX */
/* Demangled: tesseract::TabVector::ExtendToBox(BLOBNBOX*) */
int _ZN9tesseract9TabVector11ExtendToBoxEP8BLOBNBOX(void);

/* Symbol: TessBaseAPIPrintVariablesToFile */
/* Demangled: TessBaseAPIPrintVariablesToFile */
int TessBaseAPIPrintVariablesToFile(void);

/* Symbol: _ZN13GenericVectorIN9tesseract14LineHypothesisEE6removeEi */
/* Demangled: GenericVector<tesseract::LineHypothesis>::remove(int) */
int _ZN13GenericVectorIN9tesseract14LineHypothesisEE6removeEi(void);

/* Symbol: _ZN3REJ14setrej_dubiousEv */
/* Demangled: REJ::setrej_dubious() */
int _ZN3REJ14setrej_dubiousEv(void);

/* Symbol: _ZTVN9tesseract8ClassifyE */
/* Demangled: vtable for tesseract::Classify */
extern void* _ZTVN9tesseract8ClassifyE;

/* Symbol: _ZN9tesseract12ColPartition25RefineTextPartnersByMergeEbbPNS_18ColPartition_CLISTEPNS_16ColPartitionGridE */
/* Demangled: tesseract::ColPartition::RefineTextPartnersByMerge(bool, bool, tesseract::ColPartition_CLIST*, tesseract::ColPartitionGrid*) */
int _ZN9tesseract12ColPartition25RefineTextPartnersByMergeEbbPNS_18ColPartition_CLISTEPNS_16ColPartitionGridE(void);

/* Symbol: _Z20fixed_split_coutlineP9C_OUTLINEsfP12C_OUTLINE_ITS2_ */
/* Demangled: fixed_split_coutline(C_OUTLINE*, short, float, C_OUTLINE_IT*, C_OUTLINE_IT*) */
int _Z20fixed_split_coutlineP9C_OUTLINEsfP12C_OUTLINE_ITS2_(void);

/* Symbol: _ZNK13GenericVectorIN9tesseract14LineHypothesisEE9get_indexES1_ */
/* Demangled: GenericVector<tesseract::LineHypothesis>::get_index(tesseract::LineHypothesis) const */
int _ZNK13GenericVectorIN9tesseract14LineHypothesisEE9get_indexES1_(void);

/* Symbol: _ZNK10UNICHARSET14save_to_stringEP6STRING */
/* Demangled: UNICHARSET::save_to_string(STRING*) const */
int _ZNK10UNICHARSET14save_to_stringEP6STRING(void);

/* Symbol: _ZN14IntegerMatcher17ApplyCNCorrectionEfiii */
/* Demangled: IntegerMatcher::ApplyCNCorrection(float, int, int, int) */
int _ZN14IntegerMatcher17ApplyCNCorrectionEfiii(void);

/* Symbol: _ZN9tesseract8BlobGridC2EiRK6ICOORDS3_ */
/* Demangled: tesseract::BlobGrid::BlobGrid(int, ICOORD const&, ICOORD const&) */
int _ZN9tesseract8BlobGridC2EiRK6ICOORDS3_(void);

/* Symbol: _ZN9tesseract12LMPainPoints20kLooseMaxCharWhRatioE */
/* Demangled: tesseract::LMPainPoints::kLooseMaxCharWhRatio */
extern void* _ZN9tesseract12LMPainPoints20kLooseMaxCharWhRatioE;

/* Symbol: _ZN9tesseract18EquationDetectBase17RenderSpecialTextEP3PixP8BLOBNBOX */
/* Demangled: tesseract::EquationDetectBase::RenderSpecialText(Pix*, BLOBNBOX*) */
int _ZN9tesseract18EquationDetectBase17RenderSpecialTextEP3PixP8BLOBNBOX(void);

/* Symbol: _ZTVN9tesseract17LTRResultIteratorE */
/* Demangled: vtable for tesseract::LTRResultIterator */
extern void* _ZTVN9tesseract17LTRResultIteratorE;

/* Symbol: _ZNK9tesseract5Shape22ContainsUnicharAndFontEii */
/* Demangled: tesseract::Shape::ContainsUnicharAndFont(int, int) const */
int _ZNK9tesseract5Shape22ContainsUnicharAndFontEii(void);

/* Symbol: _ZN9tesseract4Dict16AcceptableChoiceERK11WERD_CHOICENS_22XHeightConsistencyEnumE */
/* Demangled: tesseract::Dict::AcceptableChoice(WERD_CHOICE const&, tesseract::XHeightConsistencyEnum) */
int _ZN9tesseract4Dict16AcceptableChoiceERK11WERD_CHOICENS_22XHeightConsistencyEnumE(void);

/* Symbol: _ZNK9tesseract7IntGrid14ThresholdToPixEi */
/* Demangled: tesseract::IntGrid::ThresholdToPix(int) const */
int _ZNK9tesseract7IntGrid14ThresholdToPixEi(void);

/* Symbol: _ZN9tesseract7TabFind17InsertBlobsToGridEbbP13BLOBNBOX_LISTPNS_6BBGridI8BLOBNBOX14BLOBNBOX_CLIST13BLOBNBOX_C_ITEE */
/* Demangled: tesseract::TabFind::InsertBlobsToGrid(bool, bool, BLOBNBOX_LIST*, tesseract::BBGrid<BLOBNBOX, BLOBNBOX_CLIST, BLOBNBOX_C_IT>*) */
int _ZN9tesseract7TabFind17InsertBlobsToGridEbbP13BLOBNBOX_LISTPNS_6BBGridI8BLOBNBOX14BLOBNBOX_CLIST13BLOBNBOX_C_ITEE(void);

/* Symbol: _ZN9tesseract11TableFinder15GetColumnBlocksEPPNS_15ColPartitionSetEPNS_15ColSegment_LISTE */
/* Demangled: tesseract::TableFinder::GetColumnBlocks(tesseract::ColPartitionSet**, tesseract::ColSegment_LIST*) */
int _ZN9tesseract11TableFinder15GetColumnBlocksEPPNS_15ColPartitionSetEPNS_15ColSegment_LISTE(void);

/* Symbol: TessBaseAPIGetTextlines */
/* Demangled: TessBaseAPIGetTextlines */
int TessBaseAPIGetTextlines(void);

/* Symbol: _ZN9tesseract15CrownCompatibleEPK13GenericVectorINS_19RowScratchRegistersEEiiPK14ParagraphModel */
/* Demangled: tesseract::CrownCompatible(GenericVector<tesseract::RowScratchRegisters> const*, int, int, ParagraphModel const*) */
int _ZN9tesseract15CrownCompatibleEPK13GenericVectorINS_19RowScratchRegistersEEiiPK14ParagraphModel(void);

/* Symbol: _Z11ReadFeatureP7__sFILEPK19FEATURE_DESC_STRUCT */
/* Demangled: ReadFeature(__sFILE*, FEATURE_DESC_STRUCT const*) */
int _Z11ReadFeatureP7__sFILEPK19FEATURE_DESC_STRUCT(void);

/* Symbol: _ZN9tesseract14EquationDetect29IdentifyInlinePartsHorizontalEv */
/* Demangled: tesseract::EquationDetect::IdentifyInlinePartsHorizontal() */
int _ZN9tesseract14EquationDetect29IdentifyInlinePartsHorizontalEv(void);

/* Symbol: _ZN9tesseract7Textord15correlate_linesEP8TO_BLOCKf */
/* Demangled: tesseract::Textord::correlate_lines(TO_BLOCK*, float) */
int _ZN9tesseract7Textord15correlate_linesEP8TO_BLOCKf(void);

/* Symbol: _ZN13GenericVectorIS_I6STRINGEE9push_backES1_ */
/* Demangled: GenericVector<GenericVector<STRING> >::push_back(GenericVector<STRING>) */
int _ZN13GenericVectorIS_I6STRINGEE9push_backES1_(void);

/* Symbol: _ZN10POLY_BLOCK17reflect_in_y_axisEv */
/* Demangled: POLY_BLOCK::reflect_in_y_axis() */
int _ZN10POLY_BLOCK17reflect_in_y_axisEv(void);

/* Symbol: _ZN9tesseract12LMPainPoints5DequeEP12MATRIX_COORDPf */
/* Demangled: tesseract::LMPainPoints::Deque(MATRIX_COORD*, float*) */
int _ZN9tesseract12LMPainPoints5DequeEP12MATRIX_COORDPf(void);

/* Symbol: _ZNK9tesseract17TrainingSampleSet16GetCloudFeaturesEii */
/* Demangled: tesseract::TrainingSampleSet::GetCloudFeatures(int, int) const */
int _ZNK9tesseract17TrainingSampleSet16GetCloudFeaturesEii(void);

/* Symbol: _ZTVN9tesseract4TrieE */
/* Demangled: vtable for tesseract::Trie */
extern void* _ZTVN9tesseract4TrieE;

/* Symbol: _ZN5TBLOB13PolygonalCopyEbP6C_BLOB */
/* Demangled: TBLOB::PolygonalCopy(bool, C_BLOB*) */
int _ZN5TBLOB13PolygonalCopyEbP6C_BLOB(void);

/* Symbol: _ZN15ScratchEvidence25UpdateSumOfProtoEvidencesEP16INT_CLASS_STRUCTPjs */
/* Demangled: ScratchEvidence::UpdateSumOfProtoEvidences(INT_CLASS_STRUCT*, unsigned int*, short) */
int _ZN15ScratchEvidence25UpdateSumOfProtoEvidencesEP16INT_CLASS_STRUCTPjs(void);

/* Symbol: _ZN9tesseract12ColPartition9MakeBlockERK6ICOORDS3_PNS_17ColPartition_LISTES5_ */
/* Demangled: tesseract::ColPartition::MakeBlock(ICOORD const&, ICOORD const&, tesseract::ColPartition_LIST*, tesseract::ColPartition_LIST*) */
int _ZN9tesseract12ColPartition9MakeBlockERK6ICOORDS3_PNS_17ColPartition_LISTES5_(void);

/* Symbol: _ZN9tesseract14WorkingPartSet12AddPartitionEPNS_12ColPartitionE */
/* Demangled: tesseract::WorkingPartSet::AddPartition(tesseract::ColPartition*) */
int _ZN9tesseract14WorkingPartSet12AddPartitionEPNS_12ColPartitionE(void);

/* Symbol: _ZN9tesseract9TabVector5DebugEPKc */
/* Demangled: tesseract::TabVector::Debug(char const*) */
int _ZN9tesseract9TabVector5DebugEPKc(void);

/* Symbol: _ZN6TO_ROW27compute_vertical_projectionEv */
/* Demangled: TO_ROW::compute_vertical_projection() */
int _ZN6TO_ROW27compute_vertical_projectionEv(void);

/* Symbol: _ZN9tesseract14SampleIteratorC1Ev */
/* Demangled: tesseract::SampleIterator::SampleIterator() */
int _ZN9tesseract14SampleIteratorC1Ev(void);

/* Symbol: _ZNK3ROW23restricted_bounding_boxEbb */
/* Demangled: ROW::restricted_bounding_box(bool, bool) const */
int _ZNK3ROW23restricted_bounding_boxEbb(void);

/* Symbol: _ZN9tesseract17CubeLineSegmenter9SmallLineEP3Box */
/* Demangled: tesseract::CubeLineSegmenter::SmallLine(Box*) */
int _ZN9tesseract17CubeLineSegmenter9SmallLineEP3Box(void);

/* Symbol: _ZN9tesseract17WordListLangModelD0Ev */
/* Demangled: tesseract::WordListLangModel::~WordListLangModel() */
int _ZN9tesseract17WordListLangModelD0Ev(void);

/* Symbol: _ZN9tesseract7TabFind14RightTabForBoxERK4TBOXbb */
/* Demangled: tesseract::TabFind::RightTabForBox(TBOX const&, bool, bool) */
int _ZN9tesseract7TabFind14RightTabForBoxERK4TBOXbb(void);

/* Symbol: _ZN9tesseract10ColSegmentC1Ev */
/* Demangled: tesseract::ColSegment::ColSegment() */
int _ZN9tesseract10ColSegmentC1Ev(void);

/* Symbol: _ZN9tesseract6BBGridINS_12ColPartitionENS_18ColPartition_CLISTENS_17ColPartition_C_ITEED2Ev */
/* Demangled: tesseract::BBGrid<tesseract::ColPartition, tesseract::ColPartition_CLIST, tesseract::ColPartition_C_IT>::~BBGrid() */
int _ZN9tesseract6BBGridINS_12ColPartitionENS_18ColPartition_CLISTENS_17ColPartition_C_ITEED2Ev(void);

/* Symbol: _ZNK9tesseract18TextlineProjection20DistanceOfBoxFromBoxERK4TBOXS3_bPK6DENORMb */
/* Demangled: tesseract::TextlineProjection::DistanceOfBoxFromBox(TBOX const&, TBOX const&, bool, DENORM const*, bool) const */
int _ZNK9tesseract18TextlineProjection20DistanceOfBoxFromBoxERK4TBOXS3_bPK6DENORMb(void);

/* Symbol: _ZN11PAGE_RES_IT17DeleteCurrentWordEv */
/* Demangled: PAGE_RES_IT::DeleteCurrentWord() */
int _ZN11PAGE_RES_IT17DeleteCurrentWordEv(void);

/* Symbol: _ZN14ELIST_ITERATOR12move_to_lastEv */
/* Demangled: ELIST_ITERATOR::move_to_last() */
int _ZN14ELIST_ITERATOR12move_to_lastEv(void);

/* Symbol: _ZN9tesseract13TessLangModel21LoadLangModelElementsERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: tesseract::TessLangModel::LoadLangModelElements(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN9tesseract13TessLangModel21LoadLangModelElementsERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN9tesseract4Dict24LengthOfShortestAlphaRunERK11WERD_CHOICE */
/* Demangled: tesseract::Dict::LengthOfShortestAlphaRun(WERD_CHOICE const&) */
int _ZN9tesseract4Dict24LengthOfShortestAlphaRunERK11WERD_CHOICE(void);

/* Symbol: _ZN9tesseract9Tesseract23quality_based_rejectionER11PAGE_RES_ITh */
/* Demangled: tesseract::Tesseract::quality_based_rejection(PAGE_RES_IT&, unsigned char) */
int _ZN9tesseract9Tesseract23quality_based_rejectionER11PAGE_RES_ITh(void);

/* Symbol: _ZNK13GenericVectorI4TBOXE9SerializeEPN9tesseract5TFileE */
/* Demangled: GenericVector<TBOX>::Serialize(tesseract::TFile*) const */
int _ZNK13GenericVectorI4TBOXE9SerializeEPN9tesseract5TFileE(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract14TrainingSampleEE15double_the_sizeEv */
/* Demangled: GenericVector<tesseract::TrainingSample*>::double_the_size() */
int _ZN13GenericVectorIPN9tesseract14TrainingSampleEE15double_the_sizeEv(void);

/* Symbol: _ZN9tesseract12SearchColumn7CleanupEv */
/* Demangled: tesseract::SearchColumn::Cleanup() */
int _ZN9tesseract12SearchColumn7CleanupEv(void);

/* Symbol: _ZN13GenericVectorIyE9push_backEy */
/* Demangled: GenericVector<unsigned long long>::push_back(unsigned long long) */
int _ZN13GenericVectorIyE9push_backEy(void);

/* Symbol: _ZN9tesseract9Tesseract20SetBlackAndWhitelistEv */
/* Demangled: tesseract::Tesseract::SetBlackAndWhitelist() */
int _ZN9tesseract9Tesseract20SetBlackAndWhitelistEv(void);

/* Symbol: _ZN9tesseract17CubeLineSegmenter9CrackLineEP3PixP3Box */
/* Demangled: tesseract::CubeLineSegmenter::CrackLine(Pix*, Box*) */
int _ZN9tesseract17CubeLineSegmenter9CrackLineEP3PixP3Box(void);

/* Symbol: _ZN9tesseract7Textord25TransferDiacriticsToWordsEP13BLOBNBOX_LISTRK6FCOORDPNS_6BBGridINS_11WordWithBoxENS_17WordWithBox_CLISTENS_16WordWithBox_C_ITEEE */
/* Demangled: tesseract::Textord::TransferDiacriticsToWords(BLOBNBOX_LIST*, FCOORD const&, tesseract::BBGrid<tesseract::WordWithBox, tesseract::WordWithBox_CLIST, tesseract::WordWithBox_C_IT>*) */
int _ZN9tesseract7Textord25TransferDiacriticsToWordsEP13BLOBNBOX_LISTRK6FCOORDPNS_6BBGridINS_11WordWithBoxENS_17WordWithBox_CLISTENS_16WordWithBox_C_ITEEE(void);

/* Symbol: _ZN9tesseract7Wordrec20UpdateSegSearchNodesEfiP13GenericVectorINS_16SegSearchPendingEEP8WERD_RESPNS_12LMPainPointsEPNS_16BestChoiceBundleEP12BlamerBundle */
/* Demangled: tesseract::Wordrec::UpdateSegSearchNodes(float, int, GenericVector<tesseract::SegSearchPending>*, WERD_RES*, tesseract::LMPainPoints*, tesseract::BestChoiceBundle*, BlamerBundle*) */
int _ZN9tesseract7Wordrec20UpdateSegSearchNodesEfiP13GenericVectorINS_16SegSearchPendingEEP8WERD_RESPNS_12LMPainPointsEPNS_16BestChoiceBundleEP12BlamerBundle(void);

/* Symbol: TessMakeTessOCRRow */
/* Demangled: TessMakeTessOCRRow */
int TessMakeTessOCRRow(void);

/* Symbol: _ZN4SEAM19PrepareToInsertSeamERK13GenericVectorIPS_ERKS0_IP5TBLOBEib */
/* Demangled: SEAM::PrepareToInsertSeam(GenericVector<SEAM*> const&, GenericVector<TBLOB*> const&, int, bool) */
int _ZN4SEAM19PrepareToInsertSeamERK13GenericVectorIPS_ERKS0_IP5TBLOBEib(void);

/* Symbol: _ZN9tesseract8GridBase4InitEiRK6ICOORDS3_ */
/* Demangled: tesseract::GridBase::Init(int, ICOORD const&, ICOORD const&) */
int _ZN9tesseract8GridBase4InitEiRK6ICOORDS3_(void);

/* Symbol: _ZN9tesseract7Textord14find_textlinesEP8TO_BLOCKP6TO_ROWiP7QSPLINE */
/* Demangled: tesseract::Textord::find_textlines(TO_BLOCK*, TO_ROW*, int, QSPLINE*) */
int _ZN9tesseract7Textord14find_textlinesEP8TO_BLOCKP6TO_ROWiP7QSPLINE(void);

/* Symbol: _ZN13GenericVectorIN9tesseract16SegSearchPendingEE12init_to_sizeEiS1_ */
/* Demangled: GenericVector<tesseract::SegSearchPending>::init_to_size(int, tesseract::SegSearchPending) */
int _ZN13GenericVectorIN9tesseract16SegSearchPendingEE12init_to_sizeEiS1_(void);

/* Symbol: _ZN6ICOORD15set_with_shrinkEii */
/* Demangled: ICOORD::set_with_shrink(int, int) */
int _ZN6ICOORD15set_with_shrinkEii(void);

/* Symbol: _ZN3REJ42rej_between_quality_and_minimal_rej_acceptEv */
/* Demangled: REJ::rej_between_quality_and_minimal_rej_accept() */
int _ZN3REJ42rej_between_quality_and_minimal_rej_acceptEv(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract14TrainingSampleEE9push_backES2_ */
/* Demangled: GenericVector<tesseract::TrainingSample*>::push_back(tesseract::TrainingSample*) */
int _ZN13GenericVectorIPN9tesseract14TrainingSampleEE9push_backES2_(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::underflow() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv(void);

/* Symbol: _ZN9tesseract19RowScratchRegisters12AddStartLineEPK14ParagraphModel */
/* Demangled: tesseract::RowScratchRegisters::AddStartLine(ParagraphModel const*) */
int _ZN9tesseract19RowScratchRegisters12AddStartLineEPK14ParagraphModel(void);

/* Symbol: _ZN9tesseract5Shape12SortUnicharsEv */
/* Demangled: tesseract::Shape::SortUnichars() */
int _ZN9tesseract5Shape12SortUnicharsEv(void);

/* Symbol: textord_blocksall_testing */
/* Demangled: textord_blocksall_testing */
extern void* textord_blocksall_testing;

/* Symbol: _ZN5PDBLK4moveE6ICOORD */
/* Demangled: PDBLK::move(ICOORD) */
int _ZN5PDBLK4moveE6ICOORD(void);

/* Symbol: _Z17BlobMicroFeaturesP5TBLOBRK6DENORM */
/* Demangled: BlobMicroFeatures(TBLOB*, DENORM const&) */
int _Z17BlobMicroFeaturesP5TBLOBRK6DENORM(void);

/* Symbol: _ZN9tesseract11StrokeWidthC2EiRK6ICOORDS3_ */
/* Demangled: tesseract::StrokeWidth::StrokeWidth(int, ICOORD const&, ICOORD const&) */
int _ZN9tesseract11StrokeWidthC2EiRK6ICOORDS3_(void);

/* Symbol: TessHOcrRendererCreate */
/* Demangled: TessHOcrRendererCreate */
int TessHOcrRendererCreate(void);

/* Symbol: _ZNK6DENORM18LocalNormTransformERK6TPOINTPS0_ */
/* Demangled: DENORM::LocalNormTransform(TPOINT const&, TPOINT*) const */
int _ZNK6DENORM18LocalNormTransformERK6TPOINTPS0_(void);

/* Symbol: classify_cp_end_pad_loose */
/* Demangled: classify_cp_end_pad_loose */
extern void* classify_cp_end_pad_loose;

/* Symbol: _ZN13GenericVectorIxE7reserveEi */
/* Demangled: GenericVector<long long>::reserve(int) */
int _ZN13GenericVectorIxE7reserveEi(void);

/* Symbol: _ZN9tesseract11TableFinder21MoveColSegmentsToGridEPNS_15ColSegment_LISTEPNS_6BBGridINS_10ColSegmentENS_16ColSegment_CLISTENS_15ColSegment_C_ITEEE */
/* Demangled: tesseract::TableFinder::MoveColSegmentsToGrid(tesseract::ColSegment_LIST*, tesseract::BBGrid<tesseract::ColSegment, tesseract::ColSegment_CLIST, tesseract::ColSegment_C_IT>*) */
int _ZN9tesseract11TableFinder21MoveColSegmentsToGridEPNS_15ColSegment_LISTEPNS_6BBGridINS_10ColSegmentENS_16ColSegment_CLISTENS_15ColSegment_C_ITEEE(void);

/* Symbol: _ZN6STRINGC2ERKS_ */
/* Demangled: STRING::STRING(STRING const&) */
int _ZN6STRINGC2ERKS_(void);

/* Symbol: _ZN9tesseract12CharSampEnumD2Ev */
/* Demangled: tesseract::CharSampEnum::~CharSampEnum() */
int _ZN9tesseract12CharSampEnumD2Ev(void);

/* Symbol: _ZN9tesseract7TabFindD2Ev */
/* Demangled: tesseract::TabFind::~TabFind() */
int _ZN9tesseract7TabFindD2Ev(void);

/* Symbol: _ZN14C_OUTLINE_FRAGC1E6ICOORDS0_P9C_OUTLINEss */
/* Demangled: C_OUTLINE_FRAG::C_OUTLINE_FRAG(ICOORD, ICOORD, C_OUTLINE*, short, short) */
int _ZN14C_OUTLINE_FRAGC1E6ICOORDS0_P9C_OUTLINEss(void);

/* Symbol: _ZN6GAPMAP9table_gapEss */
/* Demangled: GAPMAP::table_gap(short, short) */
int _ZN6GAPMAP9table_gapEss(void);

/* Symbol: _ZN9tesseract7Textord14cleanup_blocksEbP10BLOCK_LIST */
/* Demangled: tesseract::Textord::cleanup_blocks(bool, BLOCK_LIST*) */
int _ZN9tesseract7Textord14cleanup_blocksEbP10BLOCK_LIST(void);

/* Symbol: _ZN12BlamerBundle15BlameClassifierERK10UNICHARSETRK4TBOXRK16BLOB_CHOICE_LISTb */
/* Demangled: BlamerBundle::BlameClassifier(UNICHARSET const&, TBOX const&, BLOB_CHOICE_LIST const&, bool) */
int _ZN12BlamerBundle15BlameClassifierERK10UNICHARSETRK4TBOXRK16BLOB_CHOICE_LISTb(void);

/* Symbol: _ZN9tesseract5TFile5FReadEPvii */
/* Demangled: tesseract::TFile::FRead(void*, int, int) */
int _ZN9tesseract5TFile5FReadEPvii(void);

/* Symbol: _Z14FreeStatisticsP10STATISTICS */
/* Demangled: FreeStatistics(STATISTICS*) */
int _Z14FreeStatisticsP10STATISTICS(void);

/* Symbol: _ZN9tesseract33textord_tabfind_show_reject_blobsE */
/* Demangled: tesseract::textord_tabfind_show_reject_blobs */
extern void* _ZN9tesseract33textord_tabfind_show_reject_blobsE;

/* Symbol: __divdi3 */
/* Demangled: __divdi3 */
int fn___divdi3(void) __asm__("__divdi3");

/* Symbol: _ZN9tesseract11TessBaseAPI10GetRegionsEPP4Pixa */
/* Demangled: tesseract::TessBaseAPI::GetRegions(Pixa**) */
int _ZN9tesseract11TessBaseAPI10GetRegionsEPP4Pixa(void);

/* Symbol: _ZN9tesseract18TessResultRenderer6insertEPS0_ */
/* Demangled: tesseract::TessResultRenderer::insert(tesseract::TessResultRenderer*) */
int _ZN9tesseract18TessResultRenderer6insertEPS0_(void);

/* Symbol: _ZN3REJ21rej_between_nn_and_mmEv */
/* Demangled: REJ::rej_between_nn_and_mm() */
int _ZN3REJ21rej_between_nn_and_mmEv(void);

/* Symbol: _ZN9tesseract9BitVector10lsb_index_E */
/* Demangled: tesseract::BitVector::lsb_index_ */
extern void* _ZN9tesseract9BitVector10lsb_index_E;

/* Symbol: _ZNK6ELIST26lengthEv */
/* Demangled: ELIST2::length() const */
int _ZNK6ELIST26lengthEv(void);

/* Symbol: _Z13streamtofloatP7__sFILE */
/* Demangled: streamtofloat(__sFILE*) */
int _Z13streamtofloatP7__sFILE(void);

/* Symbol: textord_skew_lag */
/* Demangled: textord_skew_lag */
extern void* textord_skew_lag;

/* Symbol: _ZNK5TBLOB13GetEdgeCoordsERK4TBOXP13GenericVectorIS3_IiEES6_ */
/* Demangled: TBLOB::GetEdgeCoords(TBOX const&, GenericVector<GenericVector<int> >*, GenericVector<GenericVector<int> >*) const */
int _ZNK5TBLOB13GetEdgeCoordsERK4TBOXP13GenericVectorIS3_IiEES6_(void);

/* Symbol: _Z13InitIntegerFXv */
/* Demangled: InitIntegerFX() */
int _Z13InitIntegerFXv(void);

/* Symbol: _ZNK9tesseract14TrainingSample4CopyEv */
/* Demangled: tesseract::TrainingSample::Copy() const */
int _ZNK9tesseract14TrainingSample4CopyEv(void);

/* Symbol: _ZN9tesseract10CubeObjectC2EPNS_15CubeRecoContextEPNS_8CharSampE */
/* Demangled: tesseract::CubeObject::CubeObject(tesseract::CubeRecoContext*, tesseract::CharSamp*) */
int _ZN9tesseract10CubeObjectC2EPNS_15CubeRecoContextEPNS_8CharSampE(void);

/* Symbol: _ZN9tesseract17WordListLangModelC1EPNS_15CubeRecoContextE */
/* Demangled: tesseract::WordListLangModel::WordListLangModel(tesseract::CubeRecoContext*) */
int _ZN9tesseract17WordListLangModelC1EPNS_15CubeRecoContextE(void);

/* Symbol: TessPageIteratorNext */
/* Demangled: TessPageIteratorNext */
int TessPageIteratorNext(void);

/* Symbol: _ZTVN9tesseract18TessResultRendererE */
/* Demangled: vtable for tesseract::TessResultRenderer */
extern void* _ZTVN9tesseract18TessResultRendererE;

/* Symbol: _ZNK9tesseract12ColPartition19MatchingStrokeWidthERKS0_dd */
/* Demangled: tesseract::ColPartition::MatchingStrokeWidth(tesseract::ColPartition const&, double, double) const */
int _ZNK9tesseract12ColPartition19MatchingStrokeWidthERKS0_dd(void);

/* Symbol: pitsync_fake_depth */
/* Demangled: pitsync_fake_depth */
extern void* pitsync_fake_depth;

/* Symbol: _ZN6STRINGD1Ev */
/* Demangled: STRING::~STRING() */
int _ZN6STRINGD1Ev(void);

/* Symbol: _ZN13GenericVectorIP8WERD_RESE9push_backES1_ */
/* Demangled: GenericVector<WERD_RES*>::push_back(WERD_RES*) */
int _ZN13GenericVectorIP8WERD_RESE9push_backES1_(void);

/* Symbol: _ZN3REJ17setrej_poor_matchEv */
/* Demangled: REJ::setrej_poor_match() */
int _ZN3REJ17setrej_poor_matchEv(void);

/* Symbol: _ZTV29_TessMemberResultCallback_0_1ILb0EbN9tesseract7TabFindEiE */
/* Demangled: vtable for _TessMemberResultCallback_0_1<false, bool, tesseract::TabFind, int> */
extern void* _ZTV29_TessMemberResultCallback_0_1ILb0EbN9tesseract7TabFindEiE;

/* Symbol: _Z19set_global_loc_codei */
/* Demangled: set_global_loc_code(int) */
int _Z19set_global_loc_codei(void);

/* Symbol: _Z15WritePermConfigP7__sFILEP18PERM_CONFIG_STRUCT */
/* Demangled: WritePermConfig(__sFILE*, PERM_CONFIG_STRUCT*) */
int _Z15WritePermConfigP7__sFILEP18PERM_CONFIG_STRUCT(void);

/* Symbol: pitsync_joined_edge */
/* Demangled: pitsync_joined_edge */
extern void* pitsync_joined_edge;

/* Symbol: TessPageIteratorOrientation */
/* Demangled: TessPageIteratorOrientation */
int TessPageIteratorOrientation(void);

/* Symbol: TessResultIteratorGetPageIteratorConst */
/* Demangled: TessResultIteratorGetPageIteratorConst */
int TessResultIteratorGetPageIteratorConst(void);

/* Symbol: _ZNK9tesseract11TableFinder10gridheightEv */
/* Demangled: tesseract::TableFinder::gridheight() const */
int _ZNK9tesseract11TableFinder10gridheightEv(void);

/* Symbol: _ZN9tesseract10HOcrEscapeEPKc */
/* Demangled: tesseract::HOcrEscape(char const*) */
int _ZN9tesseract10HOcrEscapeEPKc(void);

/* Symbol: _ZN14ELIST_ITERATOR13data_relativeEa */
/* Demangled: ELIST_ITERATOR::data_relative(signed char) */
int _ZN14ELIST_ITERATOR13data_relativeEa(void);

/* Symbol: _ZNK8WERD_RES14GetBlobChoicesEi */
/* Demangled: WERD_RES::GetBlobChoices(int) const */
int _ZNK8WERD_RES14GetBlobChoicesEi(void);

/* Symbol: _ZN9tesseract10write_infoEP7__sFILERKNS_8FontInfoE */
/* Demangled: tesseract::write_info(__sFILE*, tesseract::FontInfo const&) */
int _ZN9tesseract10write_infoEP7__sFILERKNS_8FontInfoE(void);

/* Symbol: _ZNK9tesseract17TrainingSampleSet14SampleToStringERKNS_14TrainingSampleE */
/* Demangled: tesseract::TrainingSampleSet::SampleToString(tesseract::TrainingSample const&) const */
int _ZNK9tesseract17TrainingSampleSet14SampleToStringERKNS_14TrainingSampleE(void);

/* Symbol: _ZN9tesseract14BaselineDetect33ComputeBaselineSplinesAndXheightsERK6ICOORDbbbPNS_7TextordE */
/* Demangled: tesseract::BaselineDetect::ComputeBaselineSplinesAndXheights(ICOORD const&, bool, bool, bool, tesseract::Textord*) */
int _ZN9tesseract14BaselineDetect33ComputeBaselineSplinesAndXheightsERK6ICOORDbbbPNS_7TextordE(void);

/* Symbol: _ZN9tesseract15TableRecognizer14set_min_heightEi */
/* Demangled: tesseract::TableRecognizer::set_min_height(int) */
int _ZN9tesseract15TableRecognizer14set_min_heightEi(void);

/* Symbol: _ZN13GenericVectorIiE9push_backEi */
/* Demangled: GenericVector<int>::push_back(int) */
int _ZN13GenericVectorIiE9push_backEi(void);

/* Symbol: _ZN7QSPLINEC1EiPiPd */
/* Demangled: QSPLINE::QSPLINE(int, int*, double*) */
int _ZN7QSPLINEC1EiPiPd(void);

/* Symbol: _Z13truncate_pathPKcP6STRING */
/* Demangled: truncate_path(char const*, STRING*) */
int _Z13truncate_pathPKcP6STRING(void);

/* Symbol: _ZN9tesseract10ShapeTable15AddShapeToShapeEiRKNS_5ShapeE */
/* Demangled: tesseract::ShapeTable::AddShapeToShape(int, tesseract::Shape const&) */
int _ZN9tesseract10ShapeTable15AddShapeToShapeEiRKNS_5ShapeE(void);

/* Symbol: _ZN9tesseract17CubeLineSegmenter9ValidLineEP3PixP3Box */
/* Demangled: tesseract::CubeLineSegmenter::ValidLine(Pix*, Box*) */
int _ZN9tesseract17CubeLineSegmenter9ValidLineEP3PixP3Box(void);

/* Symbol: _ZN9tesseract12ColPartition17MakeLinePartitionE14BlobRegionTypeRK6ICOORDiiii */
/* Demangled: tesseract::ColPartition::MakeLinePartition(BlobRegionType, ICOORD const&, int, int, int, int) */
int _ZN9tesseract12ColPartition17MakeLinePartitionE14BlobRegionTypeRK6ICOORDiiii(void);

/* Symbol: _ZN13GenericVectorI4TBOXE7reserveEi */
/* Demangled: GenericVector<TBOX>::reserve(int) */
int _ZN13GenericVectorI4TBOXE7reserveEi(void);

/* Symbol: _ZN9tesseract10ParamUtils16GetParamAsStringEPKcPKNS_13ParamsVectorsEP6STRING */
/* Demangled: tesseract::ParamUtils::GetParamAsString(char const*, tesseract::ParamsVectors const*, STRING*) */
int _ZN9tesseract10ParamUtils16GetParamAsStringEPKcPKNS_13ParamsVectorsEP6STRING(void);

/* Symbol: _ZN9tesseract13DocumentCache10TotalPagesEv */
/* Demangled: tesseract::DocumentCache::TotalPages() */
int _ZN9tesseract13DocumentCache10TotalPagesEv(void);

/* Symbol: _ZN9tesseract14TrainingSample17DeSerializeCreateEbP7__sFILE */
/* Demangled: tesseract::TrainingSample::DeSerializeCreate(bool, __sFILE*) */
int _ZN9tesseract14TrainingSample17DeSerializeCreateEbP7__sFILE(void);

/* Symbol: _ZN9tesseract6BBGridINS_11WordWithBoxENS_17WordWithBox_CLISTENS_16WordWithBox_C_ITEED0Ev */
/* Demangled: tesseract::BBGrid<tesseract::WordWithBox, tesseract::WordWithBox_CLIST, tesseract::WordWithBox_C_IT>::~BBGrid() */
int _ZN9tesseract6BBGridINS_11WordWithBoxENS_17WordWithBox_CLISTENS_16WordWithBox_C_ITEED0Ev(void);

/* Symbol: _ZNK9tesseract17LTRResultIterator19SymbolIsSuperscriptEv */
/* Demangled: tesseract::LTRResultIterator::SymbolIsSuperscript() const */
int _ZNK9tesseract17LTRResultIterator19SymbolIsSuperscriptEv(void);

/* Symbol: _ZN9tesseract21ParagraphModelSmearerC2EP13GenericVectorINS_19RowScratchRegistersEEiiPNS_15ParagraphTheoryE */
/* Demangled: tesseract::ParagraphModelSmearer::ParagraphModelSmearer(GenericVector<tesseract::RowScratchRegisters>*, int, int, tesseract::ParagraphTheory*) */
int _ZN9tesseract21ParagraphModelSmearerC2EP13GenericVectorINS_19RowScratchRegistersEEiiPNS_15ParagraphTheoryE(void);

/* Symbol: _ZN9tesseract7BoxWordD2Ev */
/* Demangled: tesseract::BoxWord::~BoxWord() */
int _ZN9tesseract7BoxWordD2Ev(void);

/* Symbol: _ZNK9tesseract17TrainingSampleSet16GetCanonicalDistEii */
/* Demangled: tesseract::TrainingSampleSet::GetCanonicalDist(int, int) const */
int _ZNK9tesseract17TrainingSampleSet16GetCanonicalDistEii(void);

/* Symbol: _ZTVN9tesseract16FeatureChebyshevE */
/* Demangled: vtable for tesseract::FeatureChebyshev */
extern void* _ZTVN9tesseract16FeatureChebyshevE;

/* Symbol: _ZN9tesseract12ColumnFinder24ExtendRangePastSmallGapsEPPiPKiPKbiiiS1_ */
/* Demangled: tesseract::ColumnFinder::ExtendRangePastSmallGaps(int**, int const*, bool const*, int, int, int, int*) */
int _ZN9tesseract12ColumnFinder24ExtendRangePastSmallGapsEPPiPKiPKbiiiS1_(void);

/* Symbol: _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE;

/* Symbol: _ZN6C_BLOB6renderEv */
/* Demangled: C_BLOB::render() */
int _ZN6C_BLOB6renderEv(void);

/* Symbol: _ZN10UNICHARMAP5clearEv */
/* Demangled: UNICHARMAP::clear() */
int _ZN10UNICHARMAP5clearEv(void);

/* Symbol: _ZN9tesseract11AlignedBlobD1Ev */
/* Demangled: tesseract::AlignedBlob::~AlignedBlob() */
int _ZN9tesseract11AlignedBlobD1Ev(void);

/* Symbol: _ZN9tesseract19make_tesseract_blobEffffbP3Pix */
/* Demangled: tesseract::make_tesseract_blob(float, float, float, float, bool, Pix*) */
int _ZN9tesseract19make_tesseract_blobEffffbP3Pix(void);

/* Symbol: _ZN9tesseract15TessdataManager24TessdataTypeFromFileNameEPKcPNS_12TessdataTypeEPb */
/* Demangled: tesseract::TessdataManager::TessdataTypeFromFileName(char const*, tesseract::TessdataType*, bool*) */
int _ZN9tesseract15TessdataManager24TessdataTypeFromFileNameEPKcPNS_12TessdataTypeEPb(void);

/* Symbol: _ZNK9tesseract13IntFeatureMap17InverseMapFeatureEi */
/* Demangled: tesseract::IntFeatureMap::InverseMapFeature(int) const */
int _ZNK9tesseract13IntFeatureMap17InverseMapFeatureEi(void);

/* Symbol: _ZN9tesseract11TableFinder26set_left_to_right_languageEb */
/* Demangled: tesseract::TableFinder::set_left_to_right_language(bool) */
int _ZN9tesseract11TableFinder26set_left_to_right_languageEb(void);

/* Symbol: _ZN9tesseract17TrainingSampleSet13FontClassInfo11DeSerializeEbP7__sFILE */
/* Demangled: tesseract::TrainingSampleSet::FontClassInfo::DeSerialize(bool, __sFILE*) */
int _ZN9tesseract17TrainingSampleSet13FontClassInfo11DeSerializeEbP7__sFILE(void);

/* Symbol: textord_biased_skewcalc */
/* Demangled: textord_biased_skewcalc */
extern void* textord_biased_skewcalc;

/* Symbol: _ZN13GenericVectorIN10SortHelperIiE8SortPairIiEEE7reserveEi */
/* Demangled: GenericVector<SortHelper<int>::SortPair<int> >::reserve(int) */
int _ZN13GenericVectorIN10SortHelperIiE8SortPairIiEEE7reserveEi(void);

/* Symbol: _ZNK9tesseract18ShiroRekhaSplitter14DumpDebugImageEPKc */
/* Demangled: tesseract::ShiroRekhaSplitter::DumpDebugImage(char const*) const */
int _ZNK9tesseract18ShiroRekhaSplitter14DumpDebugImageEPKc(void);

/* Symbol: _ZN10OL_BUCKETSC1E6ICOORDS0_ */
/* Demangled: OL_BUCKETS::OL_BUCKETS(ICOORD, ICOORD) */
int _ZN10OL_BUCKETSC1E6ICOORDS0_(void);

/* Symbol: _ZN9tesseract7Wordrec28merge_and_put_fragment_listsEsssP16BLOB_CHOICE_LISTP6MATRIX */
/* Demangled: tesseract::Wordrec::merge_and_put_fragment_lists(short, short, short, BLOB_CHOICE_LIST*, MATRIX*) */
int _ZN9tesseract7Wordrec28merge_and_put_fragment_listsEsssP16BLOB_CHOICE_LISTP6MATRIX(void);

/* Symbol: _ZN9tesseract18TessResultRenderer12AppendStringEPKc */
/* Demangled: tesseract::TessResultRenderer::AppendString(char const*) */
int _ZN9tesseract18TessResultRenderer12AppendStringEPKc(void);

/* Symbol: _ZN8WERD_RES21CloneChoppedToRebuildEv */
/* Demangled: WERD_RES::CloneChoppedToRebuild() */
int _ZN8WERD_RES21CloneChoppedToRebuildEv(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract9TesseractEE7reserveEi */
/* Demangled: GenericVector<tesseract::Tesseract*>::reserve(int) */
int _ZN13GenericVectorIPN9tesseract9TesseractEE7reserveEi(void);

/* Symbol: _ZNK9tesseract10ShapeTable18MergedUnicharCountEii */
/* Demangled: tesseract::ShapeTable::MergedUnicharCount(int, int) const */
int _ZNK9tesseract10ShapeTable18MergedUnicharCountEii(void);

/* Symbol: _ZN9tesseract12ColumnFinder17AddToTempPartListEPNS_12ColPartitionEPNS_18ColPartition_CLISTE */
/* Demangled: tesseract::ColumnFinder::AddToTempPartList(tesseract::ColPartition*, tesseract::ColPartition_CLIST*) */
int _ZN9tesseract12ColumnFinder17AddToTempPartListEPNS_12ColPartitionEPNS_18ColPartition_CLISTE(void);

/* Symbol: _Z32TessBaseGetBlockTextOrientationsPN9tesseract11TessBaseAPIEPPiPPb */
/* Demangled: TessBaseGetBlockTextOrientations(tesseract::TessBaseAPI*, int**, bool**) */
int _Z32TessBaseGetBlockTextOrientationsPN9tesseract11TessBaseAPIEPPiPPb(void);

/* Symbol: _ZNK9tesseract4Dict12valid_bigramERK11WERD_CHOICES3_ */
/* Demangled: tesseract::Dict::valid_bigram(WERD_CHOICE const&, WERD_CHOICE const&) const */
int _ZNK9tesseract4Dict12valid_bigramERK11WERD_CHOICES3_(void);

/* Symbol: _Z7cprintfPKcz */
/* Demangled: cprintf(char const*, ...) */
int _Z7cprintfPKcz(void);

/* Symbol: PicoFeatDesc */
/* Demangled: PicoFeatDesc */
extern void* PicoFeatDesc;

/* Symbol: classify_cp_side_pad_tight */
/* Demangled: classify_cp_side_pad_tight */
extern void* classify_cp_side_pad_tight;

/* Symbol: textord_skewsmooth_offset */
/* Demangled: textord_skewsmooth_offset */
extern void* textord_skewsmooth_offset;

/* Symbol: _Z12alloc_structiPKc */
/* Demangled: alloc_struct(int, char const*) */
int _Z12alloc_structiPKc(void);

/* Symbol: _ZN13GenericVectorIN9tesseract15UnicharAndFontsEEpLERKS2_ */
/* Demangled: GenericVector<tesseract::UnicharAndFonts>::operator+=(GenericVector<tesseract::UnicharAndFonts> const&) */
int _ZN13GenericVectorIN9tesseract15UnicharAndFontsEEpLERKS2_(void);

/* Symbol: _ZNK9tesseract10ShapeTable15MasterFontCountEi */
/* Demangled: tesseract::ShapeTable::MasterFontCount(int) const */
int _ZNK9tesseract10ShapeTable15MasterFontCountEi(void);

/* Symbol: _ZN9tesseract11BaselineRowC1EdP6TO_ROW */
/* Demangled: tesseract::BaselineRow::BaselineRow(double, TO_ROW*) */
int _ZN9tesseract11BaselineRowC1EdP6TO_ROW(void);

/* Symbol: textord_old_xheight */
/* Demangled: textord_old_xheight */
extern void* textord_old_xheight;

/* Symbol: _ZN13GenericVectorIP5TBLOBE20delete_data_pointersEv */
/* Demangled: GenericVector<TBLOB*>::delete_data_pointers() */
int _ZN13GenericVectorIP5TBLOBE20delete_data_pointersEv(void);

/* Symbol: _ZN13GenericVectorIN9tesseract9KDPairIncIfP6EDGEPTEEE15double_the_sizeEv */
/* Demangled: GenericVector<tesseract::KDPairInc<float, EDGEPT*> >::double_the_size() */
int _ZN13GenericVectorIN9tesseract9KDPairIncIfP6EDGEPTEEE15double_the_sizeEv(void);

/* Symbol: _ZN9tesseract7Wordrec18chop_numbered_blobEP5TWERDibRK13GenericVectorIP4SEAME */
/* Demangled: tesseract::Wordrec::chop_numbered_blob(TWERD*, int, bool, GenericVector<SEAM*> const&) */
int _ZN9tesseract7Wordrec18chop_numbered_blobEP5TWERDibRK13GenericVectorIP4SEAME(void);

/* Symbol: _ZN9tesseract5TFile4OpenEP7__sFILEx */
/* Demangled: tesseract::TFile::Open(__sFILE*, long long) */
int _ZN9tesseract5TFile4OpenEP7__sFILEx(void);

/* Symbol: _Z20edgesteps_to_edgeptsP9C_OUTLINEP6EDGEPT */
/* Demangled: edgesteps_to_edgepts(C_OUTLINE*, EDGEPT*) */
int _Z20edgesteps_to_edgeptsP9C_OUTLINEP6EDGEPT(void);

/* Symbol: _ZNSt3__16vectorIfNS_9allocatorIfEEE6resizeEjRKf */
/* Demangled: std::__1::vector<float, std::__1::allocator<float> >::resize(unsigned int, float const&) */
int _ZNSt3__16vectorIfNS_9allocatorIfEEE6resizeEjRKf(void);

/* Symbol: _ZN9tesseract6BBGridINS_10ColSegmentENS_16ColSegment_CLISTENS_15ColSegment_C_ITEE11HandleClickEii */
/* Demangled: tesseract::BBGrid<tesseract::ColSegment, tesseract::ColSegment_CLIST, tesseract::ColSegment_C_IT>::HandleClick(int, int) */
int _ZN9tesseract6BBGridINS_10ColSegmentENS_16ColSegment_CLISTENS_15ColSegment_C_ITEE11HandleClickEii(void);

/* Symbol: _ZN9tesseract16ColPartitionGridD1Ev */
/* Demangled: tesseract::ColPartitionGrid::~ColPartitionGrid() */
int _ZN9tesseract16ColPartitionGridD1Ev(void);

/* Symbol: _ZN6C_BLOBC1EP9C_OUTLINE */
/* Demangled: C_BLOB::C_BLOB(C_OUTLINE*) */
int _ZN6C_BLOBC1EP9C_OUTLINE(void);

/* Symbol: _ZN9tesseract12PageIterator9BeginWordEi */
/* Demangled: tesseract::PageIterator::BeginWord(int) */
int _ZN9tesseract12PageIterator9BeginWordEi(void);

/* Symbol: _ZN9tesseract12ColPartition10SetLeftTabEPKNS_9TabVectorE */
/* Demangled: tesseract::ColPartition::SetLeftTab(tesseract::TabVector const*) */
int _ZN9tesseract12ColPartition10SetLeftTabEPKNS_9TabVectorE(void);

/* Symbol: _ZN3REJ8rejectedEv */
/* Demangled: REJ::rejected() */
int _ZN3REJ8rejectedEv(void);

/* Symbol: TessBaseAPIPrintVariables */
/* Demangled: TessBaseAPIPrintVariables */
int TessBaseAPIPrintVariables(void);

/* Symbol: _ZN8WERD_RES11fix_hyphensEv */
/* Demangled: WERD_RES::fix_hyphens() */
int _ZN8WERD_RES11fix_hyphensEv(void);

/* Symbol: _ZN9tesseract9Tesseract14unrej_good_chsEP8WERD_RESP3ROW */
/* Demangled: tesseract::Tesseract::unrej_good_chs(WERD_RES*, ROW*) */
int _ZN9tesseract9Tesseract14unrej_good_chsEP8WERD_RESP3ROW(void);

/* Symbol: _ZN9tesseract11TessBaseAPI14MakeTessOCRRowEffff */
/* Demangled: tesseract::TessBaseAPI::MakeTessOCRRow(float, float, float, float) */
int _ZN9tesseract11TessBaseAPI14MakeTessOCRRowEffff(void);

/* Symbol: _ZN9tesseract16ImageThresholder10GetPixRectEv */
/* Demangled: tesseract::ImageThresholder::GetPixRect() */
int _ZN9tesseract16ImageThresholder10GetPixRectEv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract11BaselineRowEE5clearEv */
/* Demangled: GenericVector<tesseract::BaselineRow*>::clear() */
int _ZN13GenericVectorIPN9tesseract11BaselineRowEE5clearEv(void);

/* Symbol: _ZTVN9tesseract16ColPartitionGridE */
/* Demangled: vtable for tesseract::ColPartitionGrid */
extern void* _ZTVN9tesseract16ColPartitionGridE;

/* Symbol: _ZN15ScratchEvidence13NormalizeSumsEP16INT_CLASS_STRUCTsi */
/* Demangled: ScratchEvidence::NormalizeSums(INT_CLASS_STRUCT*, short, int) */
int _ZN15ScratchEvidence13NormalizeSumsEP16INT_CLASS_STRUCTsi(void);

/* Symbol: _ZNK9tesseract5Shape12ContainsFontEi */
/* Demangled: tesseract::Shape::ContainsFont(int) const */
int _ZNK9tesseract5Shape12ContainsFontEi(void);

/* Symbol: _ZN9tesseract17TrainingSampleSet13FontClassInfoC1Ev */
/* Demangled: tesseract::TrainingSampleSet::FontClassInfo::FontClassInfo() */
int _ZN9tesseract17TrainingSampleSet13FontClassInfoC1Ev(void);

/* Symbol: _ZN9tesseract16ColPartitionGrid19ComputeTotalOverlapEPPS0_ */
/* Demangled: tesseract::ColPartitionGrid::ComputeTotalOverlap(tesseract::ColPartitionGrid**) */
int _ZN9tesseract16ColPartitionGrid19ComputeTotalOverlapEPPS0_(void);

/* Symbol: _ZN9tesseract11TableFinder10WriteToPixERK6FCOORD */
/* Demangled: tesseract::TableFinder::WriteToPix(FCOORD const&) */
int _ZN9tesseract11TableFinder10WriteToPixERK6FCOORD(void);

/* Symbol: _ZN5TWERD13PolygonalCopyEbP4WERD */
/* Demangled: TWERD::PolygonalCopy(bool, WERD*) */
int _ZN5TWERD13PolygonalCopyEbP4WERD(void);

/* Symbol: _ZN6STRING15SkipDeSerializeEbPN9tesseract5TFileE */
/* Demangled: STRING::SkipDeSerialize(bool, tesseract::TFile*) */
int _ZN6STRING15SkipDeSerializeEbPN9tesseract5TFileE(void);

/* Symbol: _ZN14IntegerMatcher14FindGoodProtosEP16INT_CLASS_STRUCTPjS2_tsP18INT_FEATURE_STRUCTPsii */
/* Demangled: IntegerMatcher::FindGoodProtos(INT_CLASS_STRUCT*, unsigned int*, unsigned int*, unsigned short, short, INT_FEATURE_STRUCT*, short*, int, int) */
int _ZN14IntegerMatcher14FindGoodProtosEP16INT_CLASS_STRUCTPjS2_tsP18INT_FEATURE_STRUCTPsii(void);

/* Symbol: _ZN9tesseract13TessLangModelC1ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_bPNS_15TessdataManagerEPNS_15CubeRecoContextE */
/* Demangled: tesseract::TessLangModel::TessLangModel(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, tesseract::TessdataManager*, tesseract::CubeRecoContext*) */
int _ZN9tesseract13TessLangModelC1ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_bPNS_15TessdataManagerEPNS_15CubeRecoContextE(void);

/* Symbol: _ZN9tesseract13MasterTrainer18SetupForClusteringERKNS_10ShapeTableERK19FEATURE_DEFS_STRUCTiPi */
/* Demangled: tesseract::MasterTrainer::SetupForClustering(tesseract::ShapeTable const&, FEATURE_DEFS_STRUCT const&, int, int*) */
int _ZN9tesseract13MasterTrainer18SetupForClusteringERKNS_10ShapeTableERK19FEATURE_DEFS_STRUCTiPi(void);

/* Symbol: _ZN9tesseract11TessBaseAPI20RecognizeForChopTestEP10ETEXT_DESC */
/* Demangled: tesseract::TessBaseAPI::RecognizeForChopTest(ETEXT_DESC*) */
int _ZN9tesseract11TessBaseAPI20RecognizeForChopTestEP10ETEXT_DESC(void);

/* Symbol: _ZN9tesseract8Classify11AdaptToCharEP5TBLOBiifP22ADAPT_TEMPLATES_STRUCT */
/* Demangled: tesseract::Classify::AdaptToChar(TBLOB*, int, int, float, ADAPT_TEMPLATES_STRUCT*) */
int _ZN9tesseract8Classify11AdaptToCharEP5TBLOBiifP22ADAPT_TEMPLATES_STRUCT(void);

/* Symbol: TessBaseAPIGetStrips */
/* Demangled: TessBaseAPIGetStrips */
int TessBaseAPIGetStrips(void);

/* Symbol: _ZNK6MATRIX8DeepCopyEv */
/* Demangled: MATRIX::DeepCopy() const */
int _ZNK6MATRIX8DeepCopyEv(void);

/* Symbol: _ZN9tesseract17TrainingSampleSet11DeSerializeEbP7__sFILE */
/* Demangled: tesseract::TrainingSampleSet::DeSerialize(bool, __sFILE*) */
int _ZN9tesseract17TrainingSampleSet11DeSerializeEbP7__sFILE(void);

/* Symbol: _ZN9tesseract4Trie16add_word_to_dawgERK11WERD_CHOICEPK13GenericVectorIbE */
/* Demangled: tesseract::Trie::add_word_to_dawg(WERD_CHOICE const&, GenericVector<bool> const*) */
int _ZN9tesseract4Trie16add_word_to_dawgERK11WERD_CHOICEPK13GenericVectorIbE(void);

/* Symbol: _Z13try_doc_fixed6ICOORDP13TO_BLOCK_LISTf */
/* Demangled: try_doc_fixed(ICOORD, TO_BLOCK_LIST*, float) */
int _Z13try_doc_fixed6ICOORDP13TO_BLOCK_LISTf(void);

/* Symbol: _ZN9tesseract16ImageThresholder12SetRectangleEiiii */
/* Demangled: tesseract::ImageThresholder::SetRectangle(int, int, int, int) */
int _ZN9tesseract16ImageThresholder12SetRectangleEiiii(void);

/* Symbol: _ZN9tesseract9ImageFind10FindImagesEP3Pix */
/* Demangled: tesseract::ImageFind::FindImages(Pix*) */
int _ZN9tesseract9ImageFind10FindImagesEP3Pix(void);

/* Symbol: _Z19MakeDegeneratePrototP6sampleP10STATISTICS10PROTOSTYLEi */
/* Demangled: MakeDegenerateProto(unsigned short, sample*, STATISTICS*, PROTOSTYLE, int) */
int _Z19MakeDegeneratePrototP6sampleP10STATISTICS10PROTOSTYLEi(void);

/* Symbol: _ZN9tesseract14ResultIterator12kMinorRunEndE */
/* Demangled: tesseract::ResultIterator::kMinorRunEnd */
extern void* _ZN9tesseract14ResultIterator12kMinorRunEndE;

/* Symbol: _ZN13GenericVectorIN9tesseract9KDPairIncId6ICOORDEEE15choose_nth_itemEiiiPj */
/* Demangled: GenericVector<tesseract::KDPairInc<double, ICOORD> >::choose_nth_item(int, int, int, unsigned int*) */
int _ZN13GenericVectorIN9tesseract9KDPairIncId6ICOORDEEE15choose_nth_itemEiiiPj(void);

/* Symbol: _ZN9tesseract7AltListD1Ev */
/* Demangled: tesseract::AltList::~AltList() */
int _ZN9tesseract7AltListD1Ev(void);

/* Symbol: _Z14partition_lineP4TBOXiPiPcS1_P7QSPLINEfPf */
/* Demangled: partition_line(TBOX*, int, int*, char*, int*, QSPLINE*, float, float*) */
int _Z14partition_lineP4TBOXiPiPcS1_P7QSPLINEfPf(void);

/* Symbol: _ZN9tesseract15StructuredTable15CountPartitionsERK4TBOX */
/* Demangled: tesseract::StructuredTable::CountPartitions(TBOX const&) */
int _ZN9tesseract15StructuredTable15CountPartitionsERK4TBOX(void);

/* Symbol: _ZN9tesseract9Tesseract15count_alphanumsEP8WERD_RES */
/* Demangled: tesseract::Tesseract::count_alphanums(WERD_RES*) */
int _ZN9tesseract9Tesseract15count_alphanumsEP8WERD_RES(void);

/* Symbol: _ZN9tesseract8Classify16ComputeNormMatchEiRK14FEATURE_STRUCTh */
/* Demangled: tesseract::Classify::ComputeNormMatch(int, FEATURE_STRUCT const&, unsigned char) */
int _ZN9tesseract8Classify16ComputeNormMatchEiRK14FEATURE_STRUCTh(void);

/* Symbol: _ZN9tesseract14IntFeatureDistD2Ev */
/* Demangled: tesseract::IntFeatureDist::~IntFeatureDist() */
int _ZN9tesseract14IntFeatureDistD2Ev(void);

/* Symbol: _ZN9tesseract9TabVectorC1EiiNS_12TabAlignmentEP14BLOBNBOX_CLIST */
/* Demangled: tesseract::TabVector::TabVector(int, int, tesseract::TabAlignment, BLOBNBOX_CLIST*) */
int _ZN9tesseract9TabVectorC1EiiNS_12TabAlignmentEP14BLOBNBOX_CLIST(void);

/* Symbol: _ZN9tesseract11TessBaseAPI14GetLTRIteratorEv */
/* Demangled: tesseract::TessBaseAPI::GetLTRIterator() */
int _ZN9tesseract11TessBaseAPI14GetLTRIteratorEv(void);

/* Symbol: _ZN9tesseract7BoxWord14DeleteAllBoxesEv */
/* Demangled: tesseract::BoxWord::DeleteAllBoxes() */
int _ZN9tesseract7BoxWord14DeleteAllBoxesEv(void);

/* Symbol: _ZNK9C_OUTLINE14increment_stepEiiP6ICOORDPiS2_ */
/* Demangled: C_OUTLINE::increment_step(int, int, ICOORD*, int*, int*) const */
int _ZNK9C_OUTLINE14increment_stepEiiP6ICOORDPiS2_(void);

/* Symbol: _ZN10UNICHARMAP15UNICHARMAP_NODED1Ev */
/* Demangled: UNICHARMAP::UNICHARMAP_NODE::~UNICHARMAP_NODE() */
int _ZN10UNICHARMAP15UNICHARMAP_NODED1Ev(void);

/* Symbol: _ZN9tesseract12ErrorCounter6CountsC1Ev */
/* Demangled: tesseract::ErrorCounter::Counts::Counts() */
int _ZN9tesseract12ErrorCounter6CountsC1Ev(void);

/* Symbol: _ZN9tesseract13TabConstraint14GetConstraintsEPNS_18TabConstraint_LISTEPiS3_ */
/* Demangled: tesseract::TabConstraint::GetConstraints(tesseract::TabConstraint_LIST*, int*, int*) */
int _ZN9tesseract13TabConstraint14GetConstraintsEPNS_18TabConstraint_LISTEPiS3_(void);

/* Symbol: _ZNK9tesseract5Shape15ContainsUnicharEi */
/* Demangled: tesseract::Shape::ContainsUnichar(int) const */
int _ZNK9tesseract5Shape15ContainsUnicharEi(void);

/* Symbol: _ZN9tesseract16CubeSearchObject11NoSpaceCostEii */
/* Demangled: tesseract::CubeSearchObject::NoSpaceCost(int, int) */
int _ZN9tesseract16CubeSearchObject11NoSpaceCostEii(void);

/* Symbol: _ZTVN9tesseract4DawgE */
/* Demangled: vtable for tesseract::Dawg */
extern void* _ZTVN9tesseract4DawgE;

/* Symbol: _ZN9tesseract11BaselineRow22SetupBlobDisplacementsERK6FCOORD */
/* Demangled: tesseract::BaselineRow::SetupBlobDisplacements(FCOORD const&) */
int _ZN9tesseract11BaselineRow22SetupBlobDisplacementsERK6FCOORD(void);

/* Symbol: _ZN9tesseract12ColPartition21MakeVerticalTextBlockERK6ICOORDS3_PNS_17ColPartition_LISTES5_ */
/* Demangled: tesseract::ColPartition::MakeVerticalTextBlock(ICOORD const&, ICOORD const&, tesseract::ColPartition_LIST*, tesseract::ColPartition_LIST*) */
int _ZN9tesseract12ColPartition21MakeVerticalTextBlockERK6ICOORDS3_PNS_17ColPartition_LISTES5_(void);

/* Symbol: _ZN9tesseract15ColPartitionSetC2EPNS_12ColPartitionE */
/* Demangled: tesseract::ColPartitionSet::ColPartitionSet(tesseract::ColPartition*) */
int _ZN9tesseract15ColPartitionSetC2EPNS_12ColPartitionE(void);

/* Symbol: _ZNK9tesseract11TableFinder9AllowBlobERK8BLOBNBOX */
/* Demangled: tesseract::TableFinder::AllowBlob(BLOBNBOX const&) const */
int _ZNK9tesseract11TableFinder9AllowBlobERK8BLOBNBOX(void);

/* Symbol: _ZN9tesseract14TabVector_LIST9deep_copyEPKS0_PFPNS_9TabVectorEPKS3_E */
/* Demangled: tesseract::TabVector_LIST::deep_copy(tesseract::TabVector_LIST const*, tesseract::TabVector* (*)(tesseract::TabVector const*)) */
int _ZN9tesseract14TabVector_LIST9deep_copyEPKS0_PFPNS_9TabVectorEPKS3_E(void);

/* Symbol: _Z8lessthanPKvS0_ */
/* Demangled: lessthan(void const*, void const*) */
int _Z8lessthanPKvS0_(void);

/* Symbol: _ZN6TO_ROW8add_blobEP8BLOBNBOXfff */
/* Demangled: TO_ROW::add_blob(BLOBNBOX*, float, float, float) */
int _ZN6TO_ROW8add_blobEP8BLOBNBOXfff(void);

/* Symbol: _ZN7QSPLINEC1EPiiS0_S0_ii */
/* Demangled: QSPLINE::QSPLINE(int*, int, int*, int*, int, int) */
int _ZN7QSPLINEC1EPiiS0_S0_ii(void);

/* Symbol: _ZN9tesseract12ColPartition14RefinePartnersE13PolyBlockTypebPNS_16ColPartitionGridE */
/* Demangled: tesseract::ColPartition::RefinePartners(PolyBlockType, bool, tesseract::ColPartitionGrid*) */
int _ZN9tesseract12ColPartition14RefinePartnersE13PolyBlockTypebPNS_16ColPartitionGridE(void);

/* Symbol: _ZN9tesseract12DocumentData7GetPageEi */
/* Demangled: tesseract::DocumentData::GetPage(int) */
int _ZN9tesseract12DocumentData7GetPageEi(void);

/* Symbol: _ZN12KDTreeSearchD2Ev */
/* Demangled: KDTreeSearch::~KDTreeSearch() */
int _ZN12KDTreeSearchD2Ev(void);

/* Symbol: _ZN9tesseract10kCrownLeftE */
/* Demangled: tesseract::kCrownLeft */
extern void* _ZN9tesseract10kCrownLeftE;

/* Symbol: _ZN11WERD_CHOICE13permuter_nameEh */
/* Demangled: WERD_CHOICE::permuter_name(unsigned char) */
int _ZN11WERD_CHOICE13permuter_nameEh(void);

/* Symbol: _ZN9tesseract9BitVector10SetAllTrueEv */
/* Demangled: tesseract::BitVector::SetAllTrue() */
int _ZN9tesseract9BitVector10SetAllTrueEv(void);

/* Symbol: _ZN9tesseract16CubeSearchObject17ComputeSpaceCostsEv */
/* Demangled: tesseract::CubeSearchObject::ComputeSpaceCosts() */
int _ZN9tesseract16CubeSearchObject17ComputeSpaceCostsEv(void);

/* Symbol: _ZN9tesseract11TableFinderC1Ev */
/* Demangled: tesseract::TableFinder::TableFinder() */
int _ZN9tesseract11TableFinderC1Ev(void);

/* Symbol: _ZN5STATSD1Ev */
/* Demangled: STATS::~STATS() */
int _ZN5STATSD1Ev(void);

/* Symbol: _ZN9tesseract12ErrorCounter16ComputeErrorRateEPNS_15ShapeClassifierEiNS_10CountTypesERKNS_13FontInfoTableERK13GenericVectorIP3PixEPNS_14SampleIteratorEPdSF_P6STRING */
/* Demangled: tesseract::ErrorCounter::ComputeErrorRate(tesseract::ShapeClassifier*, int, tesseract::CountTypes, tesseract::FontInfoTable const&, GenericVector<Pix*> const&, tesseract::SampleIterator*, double*, double*, STRING*) */
int _ZN9tesseract12ErrorCounter16ComputeErrorRateEPNS_15ShapeClassifierEiNS_10CountTypesERKNS_13FontInfoTableERK13GenericVectorIP3PixEPNS_14SampleIteratorEPdSF_P6STRING(void);

/* Symbol: _Z7is_samePvS_ */
/* Demangled: is_same(void*, void*) */
int _Z7is_samePvS_(void);

/* Symbol: _ZN9tesseract21TesseractCubeCombinerD0Ev */
/* Demangled: tesseract::TesseractCubeCombiner::~TesseractCubeCombiner() */
int _ZN9tesseract21TesseractCubeCombinerD0Ev(void);

/* Symbol: _ZN9tesseract12DocumentData17AddPageToDocumentEPNS_9ImageDataE */
/* Demangled: tesseract::DocumentData::AddPageToDocument(tesseract::ImageData*) */
int _ZN9tesseract12DocumentData17AddPageToDocumentEPNS_9ImageDataE(void);

/* Symbol: _ZNK9tesseract14TrainingSample15DisplayFeaturesEN10ScrollView5ColorEPS1_ */
/* Demangled: tesseract::TrainingSample::DisplayFeatures(ScrollView::Color, ScrollView*) const */
int _ZNK9tesseract14TrainingSample15DisplayFeaturesEN10ScrollView5ColorEPS1_(void);

/* Symbol: _ZN9tesseract13TessLangModel15IsValidSequenceEPNS_11LangModEdgeEPKibPS2_ */
/* Demangled: tesseract::TessLangModel::IsValidSequence(tesseract::LangModEdge*, int const*, bool, tesseract::LangModEdge**) */
int _ZN9tesseract13TessLangModel15IsValidSequenceEPNS_11LangModEdgeEPKibPS2_(void);

/* Symbol: _ZN9tesseract15TessPDFRenderer20BeginDocumentHandlerEv */
/* Demangled: tesseract::TessPDFRenderer::BeginDocumentHandler() */
int _ZN9tesseract15TessPDFRenderer20BeginDocumentHandlerEv(void);

/* Symbol: _ZN9tesseract8Classify16InitAdaptedClassEP5TBLOBiiP18ADAPT_CLASS_STRUCTP22ADAPT_TEMPLATES_STRUCT */
/* Demangled: tesseract::Classify::InitAdaptedClass(TBLOB*, int, int, ADAPT_CLASS_STRUCT*, ADAPT_TEMPLATES_STRUCT*) */
int _ZN9tesseract8Classify16InitAdaptedClassEP5TBLOBiiP18ADAPT_CLASS_STRUCTP22ADAPT_TEMPLATES_STRUCT(void);

/* Symbol: _ZN9tesseract15IntFeatureSpace11DeSerializeEbP7__sFILE */
/* Demangled: tesseract::IntFeatureSpace::DeSerialize(bool, __sFILE*) */
int _ZN9tesseract15IntFeatureSpace11DeSerializeEbP7__sFILE(void);

/* Symbol: _ZN9tesseract10DetLineFitD1Ev */
/* Demangled: tesseract::DetLineFit::~DetLineFit() */
int _ZN9tesseract10DetLineFitD1Ev(void);

/* Symbol: _ZN9tesseract8Classify22CharNormTrainingSampleEbiRKNS_14TrainingSampleEP13GenericVectorINS_13UnicharRatingEE */
/* Demangled: tesseract::Classify::CharNormTrainingSample(bool, int, tesseract::TrainingSample const&, GenericVector<tesseract::UnicharRating>*) */
int _ZN9tesseract8Classify22CharNormTrainingSampleEbiRKNS_14TrainingSampleEP13GenericVectorINS_13UnicharRatingEE(void);

/* Symbol: _Z17compute_pitch_sd2P6TO_ROWP5STATSssfRsS3_P14ICOORDELT_LISThss */
/* Demangled: compute_pitch_sd2(TO_ROW*, STATS*, short, short, float, short&, short&, ICOORDELT_LIST*, unsigned char, short, short) */
int _Z17compute_pitch_sd2P6TO_ROWP5STATSssfRsS3_P14ICOORDELT_LISThss(void);

/* Symbol: _ZN9tesseract11WordFeatureC2Ev */
/* Demangled: tesseract::WordFeature::WordFeature() */
int _ZN9tesseract11WordFeatureC2Ev(void);

/* Symbol: _ZN6DENORM4InitEv */
/* Demangled: DENORM::Init() */
int _ZN6DENORM4InitEv(void);

/* Symbol: _ZN6STRINGC2Ev */
/* Demangled: STRING::STRING() */
int _ZN6STRINGC2Ev(void);

/* Symbol: _ZN9tesseract11TableFinder35MarkPartitionsUsingLocalInformationEv */
/* Demangled: tesseract::TableFinder::MarkPartitionsUsingLocalInformation() */
int _ZN9tesseract11TableFinder35MarkPartitionsUsingLocalInformationEv(void);

/* Symbol: _ZNK7QSPLINE4plotEP3Pix */
/* Demangled: QSPLINE::plot(Pix*) const */
int _ZNK7QSPLINE4plotEP3Pix(void);

/* Symbol: _ZN9tesseract11TableFinder15GetTableRegionsEPNS_15ColSegment_LISTES2_ */
/* Demangled: tesseract::TableFinder::GetTableRegions(tesseract::ColSegment_LIST*, tesseract::ColSegment_LIST*) */
int _ZN9tesseract11TableFinder15GetTableRegionsEPNS_15ColSegment_LISTES2_(void);

/* Symbol: _ZN6REJMAPaSERKS_ */
/* Demangled: REJMAP::operator=(REJMAP const&) */
int _ZN6REJMAPaSERKS_(void);

/* Symbol: _ZN13GenericVectorIcE15double_the_sizeEv */
/* Demangled: GenericVector<char>::double_the_size() */
int _ZN13GenericVectorIcE15double_the_sizeEv(void);

/* Symbol: _ZNK9tesseract12ColPartition13MatchingSizesERKS0_ */
/* Demangled: tesseract::ColPartition::MatchingSizes(tesseract::ColPartition const&) const */
int _ZNK9tesseract12ColPartition13MatchingSizesERKS0_(void);

/* Symbol: _ZN7QSPLINE4moveE6ICOORD */
/* Demangled: QSPLINE::move(ICOORD) */
int _ZN7QSPLINE4moveE6ICOORD(void);

/* Symbol: _ZNK9tesseract10ShapeTable8DebugStrEi */
/* Demangled: tesseract::ShapeTable::DebugStr(int) const */
int _ZNK9tesseract10ShapeTable8DebugStrEi(void);

/* Symbol: _ZNK9tesseract8CharSamp5CloneEv */
/* Demangled: tesseract::CharSamp::Clone() const */
int _ZNK9tesseract8CharSamp5CloneEv(void);

/* Symbol: _ZN13GenericVectorIyE7reserveEi */
/* Demangled: GenericVector<unsigned long long>::reserve(int) */
int _ZN13GenericVectorIyE7reserveEi(void);

/* Symbol: _ZN9tesseract8GridBaseD2Ev */
/* Demangled: tesseract::GridBase::~GridBase() */
int _ZN9tesseract8GridBaseD2Ev(void);

/* Symbol: _Z13pick_x_heightP6TO_ROWPiS1_S1_P5STATSi */
/* Demangled: pick_x_height(TO_ROW*, int*, int*, int*, STATS*, int) */
int _Z13pick_x_heightP6TO_ROWPiS1_S1_P5STATSi(void);

/* Symbol: TessBaseAPIIsValidWord */
/* Demangled: TessBaseAPIIsValidWord */
int TessBaseAPIIsValidWord(void);

/* Symbol: _ZN9tesseract17AlignedBlobParamsC1EiiiiiiNS_12TabAlignmentE */
/* Demangled: tesseract::AlignedBlobParams::AlignedBlobParams(int, int, int, int, int, int, tesseract::TabAlignment) */
int _ZN9tesseract17AlignedBlobParamsC1EiiiiiiNS_12TabAlignmentE(void);

/* Symbol: _ZN9tesseract11TessBaseAPI18SetFillLatticeFuncEMNS_7WordrecEFvRK6MATRIXRK16WERD_CHOICE_LISTRK10UNICHARSETP12BlamerBundleE */
/* Demangled: tesseract::TessBaseAPI::SetFillLatticeFunc(void (tesseract::Wordrec::*)(MATRIX const&, WERD_CHOICE_LIST const&, UNICHARSET const&, BlamerBundle*)) */
int _ZN9tesseract11TessBaseAPI18SetFillLatticeFuncEMNS_7WordrecEFvRK6MATRIXRK16WERD_CHOICE_LISTRK10UNICHARSETP12BlamerBundleE(void);

/* Symbol: _ZTVN9tesseract15TessLangModEdgeE */
/* Demangled: vtable for tesseract::TessLangModEdge */
extern void* _ZTVN9tesseract15TessLangModEdgeE;

/* Symbol: _ZN9tesseract6Neuron4InitEv */
/* Demangled: tesseract::Neuron::Init() */
int _ZN9tesseract6Neuron4InitEv(void);

/* Symbol: _ZN9tesseract16AmbigSpec_zapperEP10ELIST_LINK */
/* Demangled: tesseract::AmbigSpec_zapper(ELIST_LINK*) */
int _ZN9tesseract16AmbigSpec_zapperEP10ELIST_LINK(void);

/* Symbol: _ZN9tesseract14GridReducedPixERK4TBOXi6ICOORDPiS4_ */
/* Demangled: tesseract::GridReducedPix(TBOX const&, int, ICOORD, int*, int*) */
int _ZN9tesseract14GridReducedPixERK4TBOXi6ICOORDPiS4_(void);

/* Symbol: _ZN9tesseract11StrokeWidth24GradeBlobsIntoPartitionsENS_11PageSegModeERK6FCOORDP8TO_BLOCKP3PixPK6DENORMbPNS_18TextlineProjectionEP13BLOBNBOX_LISTPNS_16ColPartitionGridEPNS_17ColPartition_LISTE */
/* Demangled: tesseract::StrokeWidth::GradeBlobsIntoPartitions(tesseract::PageSegMode, FCOORD const&, TO_BLOCK*, Pix*, DENORM const*, bool, tesseract::TextlineProjection*, BLOBNBOX_LIST*, tesseract::ColPartitionGrid*, tesseract::ColPartition_LIST*) */
int _ZN9tesseract11StrokeWidth24GradeBlobsIntoPartitionsENS_11PageSegModeERK6FCOORDP8TO_BLOCKP3PixPK6DENORMbPNS_18TextlineProjectionEP13BLOBNBOX_LISTPNS_16ColPartitionGridEPNS_17ColPartition_LISTE(void);

/* Symbol: _ZN9tesseract11StrokeWidth26SetNeighboursOnMediumBlobsEP8TO_BLOCK */
/* Demangled: tesseract::StrokeWidth::SetNeighboursOnMediumBlobs(TO_BLOCK*) */
int _ZN9tesseract11StrokeWidth26SetNeighboursOnMediumBlobsEP8TO_BLOCK(void);

/* Symbol: _ZN9tesseract16ColPartitionGrid20DeleteNonLeaderPartsEv */
/* Demangled: tesseract::ColPartitionGrid::DeleteNonLeaderParts() */
int _ZN9tesseract16ColPartitionGrid20DeleteNonLeaderPartsEv(void);

/* Symbol: _ZN9tesseract8sort_cmpIiEEiPKvS2_ */
/* Demangled: int tesseract::sort_cmp<int>(void const*, void const*) */
int _ZN9tesseract8sort_cmpIiEEiPKvS2_(void);

/* Symbol: _ZN9tesseract9ImageData6SetPixEP3Pix */
/* Demangled: tesseract::ImageData::SetPix(Pix*) */
int _ZN9tesseract9ImageData6SetPixEP3Pix(void);

/* Symbol: _ZN13GenericVectorIdE15choose_nth_itemEiiiPj */
/* Demangled: GenericVector<double>::choose_nth_item(int, int, int, unsigned int*) */
int _ZN13GenericVectorIdE15choose_nth_itemEiiiPj(void);

/* Symbol: _ZN9tesseract13UnicharAmbigs17InitUnicharAmbigsERK10UNICHARSETb */
/* Demangled: tesseract::UnicharAmbigs::InitUnicharAmbigs(UNICHARSET const&, bool) */
int _ZN9tesseract13UnicharAmbigs17InitUnicharAmbigsERK10UNICHARSETb(void);

/* Symbol: _ZN5PDBLKaSERKS_ */
/* Demangled: PDBLK::operator=(PDBLK const&) */
int _ZN5PDBLKaSERKS_(void);

/* Symbol: _ZNK9tesseract17TrainingSampleSet17GlobalSampleIndexEiii */
/* Demangled: tesseract::TrainingSampleSet::GlobalSampleIndex(int, int, int) const */
int _ZNK9tesseract17TrainingSampleSet17GlobalSampleIndexEiii(void);

/* Symbol: TessBaseAPIGetCubeRecoContext */
/* Demangled: TessBaseAPIGetCubeRecoContext */
int TessBaseAPIGetCubeRecoContext(void);

/* Symbol: _ZNK6STRING9SerializeEP7__sFILE */
/* Demangled: STRING::Serialize(__sFILE*) const */
int _ZNK6STRING9SerializeEP7__sFILE(void);

/* Symbol: _ZTVN9tesseract9NeuralNetE */
/* Demangled: vtable for tesseract::NeuralNet */
extern void* _ZTVN9tesseract9NeuralNetE;

/* Symbol: textord_testregion_bottom */
/* Demangled: textord_testregion_bottom */
extern void* textord_testregion_bottom;

/* Symbol: _ZN9tesseract6BBGridI8BLOBNBOX14BLOBNBOX_CLIST13BLOBNBOX_C_ITE5ClearEv */
/* Demangled: tesseract::BBGrid<BLOBNBOX, BLOBNBOX_CLIST, BLOBNBOX_C_IT>::Clear() */
int _ZN9tesseract6BBGridI8BLOBNBOX14BLOBNBOX_CLIST13BLOBNBOX_C_ITE5ClearEv(void);

/* Symbol: _ZN13GenericVectorIP4SEAME15double_the_sizeEv */
/* Demangled: GenericVector<SEAM*>::double_the_size() */
int _ZN13GenericVectorIP4SEAME15double_the_sizeEv(void);

/* Symbol: _ZN13GenericVectorI18INT_FEATURE_STRUCTE9push_backES0_ */
/* Demangled: GenericVector<INT_FEATURE_STRUCT>::push_back(INT_FEATURE_STRUCT) */
int _ZN13GenericVectorI18INT_FEATURE_STRUCTE9push_backES0_(void);

/* Symbol: _ZN9tesseract7IntGrid4InitEiRK6ICOORDS3_ */
/* Demangled: tesseract::IntGrid::Init(int, ICOORD const&, ICOORD const&) */
int _ZN9tesseract7IntGrid4InitEiRK6ICOORDS3_(void);

/* Symbol: TessBaseAPIGetUnichar */
/* Demangled: TessBaseAPIGetUnichar */
int TessBaseAPIGetUnichar(void);

/* Symbol: _ZN9tesseract27ParamsTrainingFeatureByNameEPKc */
/* Demangled: tesseract::ParamsTrainingFeatureByName(char const*) */
int _ZN9tesseract27ParamsTrainingFeatureByNameEPKc(void);

/* Symbol: _ZN9tesseract11TableFinder25set_global_median_leddingEi */
/* Demangled: tesseract::TableFinder::set_global_median_ledding(int) */
int _ZN9tesseract11TableFinder25set_global_median_leddingEi(void);

/* Symbol: _ZN9tesseract11CCUtilMutex4LockEv */
/* Demangled: tesseract::CCUtilMutex::Lock() */
int _ZN9tesseract11CCUtilMutex4LockEv(void);

/* Symbol: _ZN13GenericVectorIbE9push_backEb */
/* Demangled: GenericVector<bool>::push_back(bool) */
int _ZN13GenericVectorIbE9push_backEb(void);

/* Symbol: _ZN9tesseract9Tesseract16rejection_passesEP8PAGE_RESP10ETEXT_DESCPK4TBOXPKc */
/* Demangled: tesseract::Tesseract::rejection_passes(PAGE_RES*, ETEXT_DESC*, TBOX const*, char const*) */
int _ZN9tesseract9Tesseract16rejection_passesEP8PAGE_RESP10ETEXT_DESCPK4TBOXPKc(void);

/* Symbol: _ZN9tesseract11WordFeatureC2ERK6FCOORDh */
/* Demangled: tesseract::WordFeature::WordFeature(FCOORD const&, unsigned char) */
int _ZN9tesseract11WordFeatureC2ERK6FCOORDh(void);

/* Symbol: _ZN9tesseract15StructuredTable14ClearStructureEv */
/* Demangled: tesseract::StructuredTable::ClearStructure() */
int _ZN9tesseract15StructuredTable14ClearStructureEv(void);

/* Symbol: _ZN13GenericVectorIP11BLOB_CHOICEE5clearEv */
/* Demangled: GenericVector<BLOB_CHOICE*>::clear() */
int _ZN13GenericVectorIP11BLOB_CHOICEE5clearEv(void);

/* Symbol: _ZN5PDBLK9set_sidesEP14ICOORDELT_LISTS1_ */
/* Demangled: PDBLK::set_sides(ICOORDELT_LIST*, ICOORDELT_LIST*) */
int _ZN5PDBLK9set_sidesEP14ICOORDELT_LISTS1_(void);

/* Symbol: _ZN9tesseract16TessHOcrRenderer18EndDocumentHandlerEv */
/* Demangled: tesseract::TessHOcrRenderer::EndDocumentHandler() */
int _ZN9tesseract16TessHOcrRenderer18EndDocumentHandlerEv(void);

/* Symbol: _ZNK9tesseract17LTRResultIterator23GetParamsTrainingBundleEv */
/* Demangled: tesseract::LTRResultIterator::GetParamsTrainingBundle() const */
int _ZNK9tesseract17LTRResultIterator23GetParamsTrainingBundleEv(void);

/* Symbol: _ZN9tesseract7AltListC2Ei */
/* Demangled: tesseract::AltList::AltList(int) */
int _ZN9tesseract7AltListC2Ei(void);

/* Symbol: _ZN9tesseract15StructuredTableC1Ev */
/* Demangled: tesseract::StructuredTable::StructuredTable() */
int _ZN9tesseract15StructuredTableC1Ev(void);

/* Symbol: _ZN9tesseract11CharAltListD0Ev */
/* Demangled: tesseract::CharAltList::~CharAltList() */
int _ZN9tesseract11CharAltListD0Ev(void);

/* Symbol: _ZN8WERD_RES17FilterWordChoicesEi */
/* Demangled: WERD_RES::FilterWordChoices(int) */
int _ZN8WERD_RES17FilterWordChoicesEi(void);

/* Symbol: _Z22vigorous_noise_removalP8TO_BLOCK */
/* Demangled: vigorous_noise_removal(TO_BLOCK*) */
int _Z22vigorous_noise_removalP8TO_BLOCK(void);

/* Symbol: _ZN9tesseract21LikelyListMarkUnicodeEi */
/* Demangled: tesseract::LikelyListMarkUnicode(int) */
int _ZN9tesseract21LikelyListMarkUnicodeEi(void);

/* Symbol: _ZTVN9tesseract15ShapeClassifierE */
/* Demangled: vtable for tesseract::ShapeClassifier */
extern void* _ZTVN9tesseract15ShapeClassifierE;

/* Symbol: TessBaseAPIAnalyseLayout */
/* Demangled: TessBaseAPIAnalyseLayout */
int TessBaseAPIAnalyseLayout(void);

/* Symbol: _ZN14ScriptDetectorC1EPK13GenericVectorIiEP9OSResultsPN9tesseract9TesseractE */
/* Demangled: ScriptDetector::ScriptDetector(GenericVector<int> const*, OSResults*, tesseract::Tesseract*) */
int _ZN14ScriptDetectorC1EPK13GenericVectorIiEP9OSResultsPN9tesseract9TesseractE(void);

/* Symbol: _ZN9tesseract13OtsuThresholdEP3PixiiiiPPiS3_ */
/* Demangled: tesseract::OtsuThreshold(Pix*, int, int, int, int, int**, int**) */
int _ZN9tesseract13OtsuThresholdEP3PixiiiiPPiS3_(void);

/* Symbol: _ZN9tesseract8ClassifyD1Ev */
/* Demangled: tesseract::Classify::~Classify() */
int _ZN9tesseract8ClassifyD1Ev(void);

/* Symbol: _ZN9tesseract16ColPartitionGridC2Ev */
/* Demangled: tesseract::ColPartitionGrid::ColPartitionGrid() */
int _ZN9tesseract16ColPartitionGridC2Ev(void);

/* Symbol: _Z17WriteOldParamDescP7__sFILEPK19FEATURE_DESC_STRUCT */
/* Demangled: WriteOldParamDesc(__sFILE*, FEATURE_DESC_STRUCT const*) */
int _Z17WriteOldParamDescP7__sFILEPK19FEATURE_DESC_STRUCT(void);

/* Symbol: _ZN9tesseract8CharSampD1Ev */
/* Demangled: tesseract::CharSamp::~CharSamp() */
int _ZN9tesseract8CharSampD1Ev(void);

/* Symbol: _ZN9tesseract19RowScratchRegisters11SetBodyLineEv */
/* Demangled: tesseract::RowScratchRegisters::SetBodyLine() */
int _ZN9tesseract19RowScratchRegisters11SetBodyLineEv(void);

/* Symbol: _ZNK6FCOORD12to_directionEv */
/* Demangled: FCOORD::to_direction() const */
int _ZNK6FCOORD12to_directionEv(void);

/* Symbol: _ZN9tesseract13FontInfoTableD1Ev */
/* Demangled: tesseract::FontInfoTable::~FontInfoTable() */
int _ZN9tesseract13FontInfoTableD1Ev(void);

/* Symbol: _ZN13GenericVectorIPS_IiEE5clearEv */
/* Demangled: GenericVector<GenericVector<int>*>::clear() */
int _ZN13GenericVectorIPS_IiEE5clearEv(void);

/* Symbol: _ZN13GenericVectorIN9tesseract15UnicharAndFontsEEpLES1_ */
/* Demangled: GenericVector<tesseract::UnicharAndFonts>::operator+=(tesseract::UnicharAndFonts) */
int _ZN13GenericVectorIN9tesseract15UnicharAndFontsEEpLES1_(void);

/* Symbol: TessBaseAPIDetectOrientationScript */
/* Demangled: TessBaseAPIDetectOrientationScript */
int TessBaseAPIDetectOrientationScript(void);

/* Symbol: _ZN13GenericVectorIP5TBLOBEpLERKS2_ */
/* Demangled: GenericVector<TBLOB*>::operator+=(GenericVector<TBLOB*> const&) */
int _ZN13GenericVectorIP5TBLOBEpLERKS2_(void);

/* Symbol: _ZN6STRING9AllocDataEii */
/* Demangled: STRING::AllocData(int, int) */
int _ZN6STRING9AllocDataEii(void);

/* Symbol: _ZN9tesseract21ConvNetCharClassifier8LoadNetsERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_ */
/* Demangled: tesseract::ConvNetCharClassifier::LoadNets(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN9tesseract21ConvNetCharClassifier8LoadNetsERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_(void);

/* Symbol: _ZN9tesseract18CubeTessClassifierD2Ev */
/* Demangled: tesseract::CubeTessClassifier::~CubeTessClassifier() */
int _ZN9tesseract18CubeTessClassifierD2Ev(void);

/* Symbol: _ZN9tesseract15ParagraphTheory8AddModelERK14ParagraphModel */
/* Demangled: tesseract::ParagraphTheory::AddModel(ParagraphModel const&) */
int _ZN9tesseract15ParagraphTheory8AddModelERK14ParagraphModel(void);

/* Symbol: _ZN9tesseract4Bmp813FreeBmpBufferEPPh */
/* Demangled: tesseract::Bmp8::FreeBmpBuffer(unsigned char**) */
int _ZN9tesseract4Bmp813FreeBmpBufferEPPh(void);

/* Symbol: TessFindRowForBox */
/* Demangled: TessFindRowForBox */
int TessFindRowForBox(void);

/* Symbol: _ZNK11WERD_CHOICE21GetNonSuperscriptSpanEPiS0_ */
/* Demangled: WERD_CHOICE::GetNonSuperscriptSpan(int*, int*) const */
int _ZNK11WERD_CHOICE21GetNonSuperscriptSpanEPiS0_(void);

/* Symbol: _ZN9tesseract4DictD1Ev */
/* Demangled: tesseract::Dict::~Dict() */
int _ZN9tesseract4DictD1Ev(void);

/* Symbol: _ZN9tesseract13SortByBoxLeftI8BLOBNBOXEEiPKvS3_ */
/* Demangled: int tesseract::SortByBoxLeft<BLOBNBOX>(void const*, void const*) */
int _ZN9tesseract13SortByBoxLeftI8BLOBNBOXEEiPKvS3_(void);

/* Symbol: _ZN9tesseract4Bmp813FreeBmpBufferEPPj */
/* Demangled: tesseract::Bmp8::FreeBmpBuffer(unsigned int**) */
int _ZN9tesseract4Bmp813FreeBmpBufferEPPj(void);

/* Symbol: _ZN13GenericVectorIdE15double_the_sizeEv */
/* Demangled: GenericVector<double>::double_the_size() */
int _ZN13GenericVectorIdE15double_the_sizeEv(void);

/* Symbol: _ZN9tesseract15StructuredTable17AbsorbNearbyLinesEv */
/* Demangled: tesseract::StructuredTable::AbsorbNearbyLines() */
int _ZN9tesseract15StructuredTable17AbsorbNearbyLinesEv(void);

/* Symbol: _ZNK5SPLIT13IsLittleChunkEii */
/* Demangled: SPLIT::IsLittleChunk(int, int) const */
int _ZNK5SPLIT13IsLittleChunkEii(void);

/* Symbol: _ZNK4WERD17true_bounding_boxEv */
/* Demangled: WERD::true_bounding_box() const */
int _ZNK4WERD17true_bounding_boxEv(void);

/* Symbol: _ZN13GenericVectorIN9tesseract24ParamsTrainingHypothesisEE9push_backES1_ */
/* Demangled: GenericVector<tesseract::ParamsTrainingHypothesis>::push_back(tesseract::ParamsTrainingHypothesis) */
int _ZN13GenericVectorIN9tesseract24ParamsTrainingHypothesisEE9push_backES1_(void);

/* Symbol: _Z18FillPPCircularBitsPA2_jiffb */
/* Demangled: FillPPCircularBits(unsigned int (*) [2], int, float, float, bool) */
int _Z18FillPPCircularBitsPA2_jiffb(void);

/* Symbol: _Z15ComputeDistanceiP10PARAM_DESCPfS1_ */
/* Demangled: ComputeDistance(int, PARAM_DESC*, float*, float*) */
int _Z15ComputeDistanceiP10PARAM_DESCPfS1_(void);

/* Symbol: _ZNK9tesseract11BaselineRow13BaselineAngleEv */
/* Demangled: tesseract::BaselineRow::BaselineAngle() const */
int _ZNK9tesseract11BaselineRow13BaselineAngleEv(void);

/* Symbol: _ZN9tesseract18ShiroRekhaSplitter13GetModeHeightEP3Pix */
/* Demangled: tesseract::ShiroRekhaSplitter::GetModeHeight(Pix*) */
int _ZN9tesseract18ShiroRekhaSplitter13GetModeHeightEP3Pix(void);

/* Symbol: textord_all_prop */
/* Demangled: textord_all_prop */
extern void* textord_all_prop;

/* Symbol: textord_show_initial_words */
/* Demangled: textord_show_initial_words */
extern void* textord_show_initial_words;

/* Symbol: _ZN9tesseract9CubeUtils11UTF8ToUTF32EPKcPNSt3__112basic_stringIiNS3_11char_traitsIiEENS3_9allocatorIiEEEE */
/* Demangled: tesseract::CubeUtils::UTF8ToUTF32(char const*, std::__1::basic_string<int, std::__1::char_traits<int>, std::__1::allocator<int> >*) */
int _ZN9tesseract9CubeUtils11UTF8ToUTF32EPKcPNSt3__112basic_stringIiNS3_11char_traitsIiEENS3_9allocatorIiEEEE(void);

/* Symbol: _ZN5PDBLK8containsE6ICOORD */
/* Demangled: PDBLK::contains(ICOORD) */
int _ZN5PDBLK8containsE6ICOORD(void);

/* Symbol: _ZNK10UNICHARSET14get_propertiesEi */
/* Demangled: UNICHARSET::get_properties(int) const */
int _ZNK10UNICHARSET14get_propertiesEi(void);

/* Symbol: _Z19make_first_baselineP4TBOXiPiS1_P7QSPLINES3_f */
/* Demangled: make_first_baseline(TBOX*, int, int*, int*, QSPLINE*, QSPLINE*, float) */
int _Z19make_first_baselineP4TBOXiPiS1_P7QSPLINES3_f(void);

/* Symbol: _ZNK9tesseract14ResultIterator21CurrentParagraphIsLtrEv */
/* Demangled: tesseract::ResultIterator::CurrentParagraphIsLtr() const */
int _ZNK9tesseract14ResultIterator21CurrentParagraphIsLtrEv(void);

/* Symbol: _ZN6C_BLOBC2EP9C_OUTLINE */
/* Demangled: C_BLOB::C_BLOB(C_OUTLINE*) */
int _ZN6C_BLOBC2EP9C_OUTLINE(void);

/* Symbol: _ZN9tesseract14AmbigSpec_LIST9deep_copyEPKS0_PFPNS_9AmbigSpecEPKS3_E */
/* Demangled: tesseract::AmbigSpec_LIST::deep_copy(tesseract::AmbigSpec_LIST const*, tesseract::AmbigSpec* (*)(tesseract::AmbigSpec const*)) */
int _ZN9tesseract14AmbigSpec_LIST9deep_copyEPKS0_PFPNS_9AmbigSpecEPKS3_E(void);

/* Symbol: _ZN15ELIST2_ITERATOR8exchangeEPS_ */
/* Demangled: ELIST2_ITERATOR::exchange(ELIST2_ITERATOR*) */
int _ZN15ELIST2_ITERATOR8exchangeEPS_(void);

/* Symbol: _ZNK9tesseract11BaselineRow12SpaceBetweenERKS0_ */
/* Demangled: tesseract::BaselineRow::SpaceBetween(tesseract::BaselineRow const&) const */
int _ZNK9tesseract11BaselineRow12SpaceBetweenERKS0_(void);

/* Symbol: _ZN9tesseract7Wordrec16ResetNGramSearchEP8WERD_RESPNS_16BestChoiceBundleEP13GenericVectorINS_16SegSearchPendingEE */
/* Demangled: tesseract::Wordrec::ResetNGramSearch(WERD_RES*, tesseract::BestChoiceBundle*, GenericVector<tesseract::SegSearchPending>*) */
int _ZN9tesseract7Wordrec16ResetNGramSearchEP8WERD_RESPNS_16BestChoiceBundleEP13GenericVectorINS_16SegSearchPendingEE(void);

/* Symbol: _ZN13GenericVectorIN9tesseract19RowScratchRegistersEE7reserveEi */
/* Demangled: GenericVector<tesseract::RowScratchRegisters>::reserve(int) */
int _ZN13GenericVectorIN9tesseract19RowScratchRegistersEE7reserveEi(void);

/* Symbol: _ZN10UNICHARMAP15UNICHARMAP_NODEC2Ev */
/* Demangled: UNICHARMAP::UNICHARMAP_NODE::UNICHARMAP_NODE() */
int _ZN10UNICHARMAP15UNICHARMAP_NODEC2Ev(void);

/* Symbol: _ZNK9tesseract12SquishedDawg17num_forward_edgesEx */
/* Demangled: tesseract::SquishedDawg::num_forward_edges(long long) const */
int _ZNK9tesseract12SquishedDawg17num_forward_edgesEx(void);

/* Symbol: _ZN9tesseract7BoxWordaSERKS0_ */
/* Demangled: tesseract::BoxWord::operator=(tesseract::BoxWord const&) */
int _ZN9tesseract7BoxWordaSERKS0_(void);

/* Symbol: _ZNK6DENORM18LocalNormTransformERK6FCOORDPS0_ */
/* Demangled: DENORM::LocalNormTransform(FCOORD const&, FCOORD*) const */
int _ZNK6DENORM18LocalNormTransformERK6FCOORDPS0_(void);

/* Symbol: _Z10memreallocPvii */
/* Demangled: memrealloc(void*, int, int) */
int _Z10memreallocPvii(void);

/* Symbol: _ZN9tesseract12ColPartition11DisownBoxesEv */
/* Demangled: tesseract::ColPartition::DisownBoxes() */
int _ZN9tesseract12ColPartition11DisownBoxesEv(void);

/* Symbol: _ZN9tesseract20ColPartitionSet_LIST9deep_copyEPKS0_PFPNS_15ColPartitionSetEPKS3_E */
/* Demangled: tesseract::ColPartitionSet_LIST::deep_copy(tesseract::ColPartitionSet_LIST const*, tesseract::ColPartitionSet* (*)(tesseract::ColPartitionSet const*)) */
int _ZN9tesseract20ColPartitionSet_LIST9deep_copyEPKS0_PFPNS_15ColPartitionSetEPKS3_E(void);

/* Symbol: wordrec_display_all_words */
/* Demangled: wordrec_display_all_words */
extern void* wordrec_display_all_words;

/* Symbol: _ZN9tesseract12PageIteratorC2EP8PAGE_RESPNS_9TesseractEiiiiii */
/* Demangled: tesseract::PageIterator::PageIterator(PAGE_RES*, tesseract::Tesseract*, int, int, int, int, int, int) */
int _ZN9tesseract12PageIteratorC2EP8PAGE_RESPNS_9TesseractEiiiiii(void);

/* Symbol: _ZN13GenericVectorIPS_IiEE7reserveEi */
/* Demangled: GenericVector<GenericVector<int>*>::reserve(int) */
int _ZN13GenericVectorIPS_IiEE7reserveEi(void);

/* Symbol: _ZN9tesseract17CubeLineSegmenterC1EPNS_15CubeRecoContextEP3Pix */
/* Demangled: tesseract::CubeLineSegmenter::CubeLineSegmenter(tesseract::CubeRecoContext*, Pix*) */
int _ZN9tesseract17CubeLineSegmenterC1EPNS_15CubeRecoContextEP3Pix(void);

/* Symbol: _ZNK9tesseract12SquishedDawg14build_node_mapEPi */
/* Demangled: tesseract::SquishedDawg::build_node_map(int*) const */
int _ZNK9tesseract12SquishedDawg14build_node_mapEPi(void);

/* Symbol: _ZN9tesseract7IntGridD1Ev */
/* Demangled: tesseract::IntGrid::~IntGrid() */
int _ZN9tesseract7IntGridD1Ev(void);

/* Symbol: _ZN13SORTED_FLOATSixEi */
/* Demangled: SORTED_FLOATS::operator[](int) */
int _ZN13SORTED_FLOATSixEi(void);

/* Symbol: _ZN9tesseract11StrokeWidthD1Ev */
/* Demangled: tesseract::StrokeWidth::~StrokeWidth() */
int _ZN9tesseract11StrokeWidthD1Ev(void);

/* Symbol: _ZN9tesseract16TessHOcrRendererC1EPKc */
/* Demangled: tesseract::TessHOcrRenderer::TessHOcrRenderer(char const*) */
int _ZN9tesseract16TessHOcrRendererC1EPKc(void);

/* Symbol: _ZNK13GenericVectorIP5TBLOBE4backEv */
/* Demangled: GenericVector<TBLOB*>::back() const */
int _ZNK13GenericVectorIP5TBLOBE4backEv(void);

/* Symbol: _ZN13GenericVectorIN9tesseract9KDPairIncId6ICOORDEEE5clearEv */
/* Demangled: GenericVector<tesseract::KDPairInc<double, ICOORD> >::clear() */
int _ZN13GenericVectorIN9tesseract9KDPairIncId6ICOORDEEE5clearEv(void);

/* Symbol: _Z17count_block_votesP8TO_BLOCKRiS1_S1_S1_S1_S1_S1_ */
/* Demangled: count_block_votes(TO_BLOCK*, int&, int&, int&, int&, int&, int&, int&) */
int _Z17count_block_votesP8TO_BLOCKRiS1_S1_S1_S1_S1_S1_(void);

/* Symbol: kPolyBlockNames */
/* Demangled: kPolyBlockNames */
extern void* kPolyBlockNames;

/* Symbol: _ZNSt3__114__split_bufferIfRNS_9allocatorIfEEED2Ev */
/* Demangled: std::__1::__split_buffer<float, std::__1::allocator<float>&>::~__split_buffer() */
int _ZNSt3__114__split_bufferIfRNS_9allocatorIfEEED2Ev(void);

/* Symbol: _ZN9tesseract12ColumnFinder25GridInsertHLinePartitionsEv */
/* Demangled: tesseract::ColumnFinder::GridInsertHLinePartitions() */
int _ZN9tesseract12ColumnFinder25GridInsertHLinePartitionsEv(void);

/* Symbol: textord_oldbl_merge_parts */
/* Demangled: textord_oldbl_merge_parts */
extern void* textord_oldbl_merge_parts;

/* Symbol: _Z28RefreshWordBlobsFromNewBlobsP10BLOCK_LISTP11C_BLOB_LISTS2_ */
/* Demangled: RefreshWordBlobsFromNewBlobs(BLOCK_LIST*, C_BLOB_LIST*, C_BLOB_LIST*) */
int _Z28RefreshWordBlobsFromNewBlobsP10BLOCK_LISTP11C_BLOB_LISTS2_(void);

/* Symbol: _Z23ExtractCharNormFeaturesRK20INT_FX_RESULT_STRUCT */
/* Demangled: ExtractCharNormFeatures(INT_FX_RESULT_STRUCT const&) */
int _Z23ExtractCharNormFeaturesRK20INT_FX_RESULT_STRUCT(void);

/* Symbol: _ZN9tesseract13MasterTrainer9AddSampleEbPKcPNS_14TrainingSampleE */
/* Demangled: tesseract::MasterTrainer::AddSample(bool, char const*, tesseract::TrainingSample*) */
int _ZN9tesseract13MasterTrainer9AddSampleEbPKcPNS_14TrainingSampleE(void);

/* Symbol: _Z9free_cellP8list_rec */
/* Demangled: free_cell(list_rec*) */
int _Z9free_cellP8list_rec(void);

/* Symbol: _ZN9tesseract12ColumnFinderD2Ev */
/* Demangled: tesseract::ColumnFinder::~ColumnFinder() */
int _ZN9tesseract12ColumnFinderD2Ev(void);

/* Symbol: _ZNK9tesseract18TextlineProjection17DisplayProjectionEv */
/* Demangled: tesseract::TextlineProjection::DisplayProjection() const */
int _ZNK9tesseract18TextlineProjection17DisplayProjectionEv(void);

/* Symbol: _ZN13GenericVectorIfE12init_to_sizeEif */
/* Demangled: GenericVector<float>::init_to_size(int, float) */
int _ZN13GenericVectorIfE12init_to_sizeEif(void);

/* Symbol: _ZN5STATSC2Ev */
/* Demangled: STATS::STATS() */
int _ZN5STATSC2Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIN9tesseract16FontPairSizeInfoERNS_9allocatorIS2_EEED2Ev */
/* Demangled: std::__1::__split_buffer<tesseract::FontPairSizeInfo, std::__1::allocator<tesseract::FontPairSizeInfo>&>::~__split_buffer() */
int _ZNSt3__114__split_bufferIN9tesseract16FontPairSizeInfoERNS_9allocatorIS2_EEED2Ev(void);

/* Symbol: TessResultRendererEndDocument */
/* Demangled: TessResultRendererEndDocument */
int TessResultRendererEndDocument(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract14AmbigSpec_LISTEE9push_backES2_ */
/* Demangled: GenericVector<tesseract::AmbigSpec_LIST*>::push_back(tesseract::AmbigSpec_LIST*) */
int _ZN13GenericVectorIPN9tesseract14AmbigSpec_LISTEE9push_backES2_(void);

/* Symbol: _ZN9tesseract12ColPartition13RemovePartnerEbPS0_ */
/* Demangled: tesseract::ColPartition::RemovePartner(bool, tesseract::ColPartition*) */
int _ZN9tesseract12ColPartition13RemovePartnerEbPS0_(void);

/* Symbol: _ZN3REJ24setrej_not_tess_acceptedEv */
/* Demangled: REJ::setrej_not_tess_accepted() */
int _ZN3REJ24setrej_not_tess_acceptedEv(void);

/* Symbol: _ZNK13GenericVectorIN9tesseract7FontSetEE9get_indexES1_ */
/* Demangled: GenericVector<tesseract::FontSet>::get_index(tesseract::FontSet) const */
int _ZNK13GenericVectorIN9tesseract7FontSetEE9get_indexES1_(void);

/* Symbol: textord_oldbl_split_splines */
/* Demangled: textord_oldbl_split_splines */
extern void* textord_oldbl_split_splines;

/* Symbol: _ZNK9tesseract11TableFinder9gridwidthEv */
/* Demangled: tesseract::TableFinder::gridwidth() const */
int _ZNK9tesseract11TableFinder9gridwidthEv(void);

/* Symbol: _ZN9tesseract10DetLineFitC2Ev */
/* Demangled: tesseract::DetLineFit::DetLineFit() */
int _ZN9tesseract10DetLineFitC2Ev(void);

/* Symbol: _ZN9tesseract12DocumentData15IsPageAvailableEiPPNS_9ImageDataE */
/* Demangled: tesseract::DocumentData::IsPageAvailable(int, tesseract::ImageData**) */
int _ZN9tesseract12DocumentData15IsPageAvailableEiPPNS_9ImageDataE(void);

/* Symbol: _ZN4SEAM11CombineWithERKS_ */
/* Demangled: SEAM::CombineWith(SEAM const&) */
int _ZN4SEAM11CombineWithERKS_(void);

/* Symbol: _Z15NewAdaptedClassv */
/* Demangled: NewAdaptedClass() */
int _Z15NewAdaptedClassv(void);

/* Symbol: _ZNSt3__112__hash_tableIP8BLOBNBOXN9tesseract7PtrHashIS1_EENS_8equal_toIS2_EENS_9allocatorIS2_EEE4findIS2_EENS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEERKT_ */
/* Demangled: std::__1::__hash_iterator<std::__1::__hash_node<BLOBNBOX*, void*>*> std::__1::__hash_table<BLOBNBOX*, tesseract::PtrHash<BLOBNBOX>, std::__1::equal_to<BLOBNBOX*>, std::__1::allocator<BLOBNBOX*> >::find<BLOBNBOX*>(BLOBNBOX* const&) */
int _ZNSt3__112__hash_tableIP8BLOBNBOXN9tesseract7PtrHashIS1_EENS_8equal_toIS2_EENS_9allocatorIS2_EEE4findIS2_EENS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEERKT_(void);

/* Symbol: _ZN13GenericVectorIiEaSERKS0_ */
/* Demangled: GenericVector<int>::operator=(GenericVector<int> const&) */
int _ZN13GenericVectorIiEaSERKS0_(void);

/* Symbol: _ZN13GenericVectorIP4SEAME7reserveEi */
/* Demangled: GenericVector<SEAM*>::reserve(int) */
int _ZN13GenericVectorIP4SEAME7reserveEi(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract11StringParamEE9push_backES2_ */
/* Demangled: GenericVector<tesseract::StringParam*>::push_back(tesseract::StringParam*) */
int _ZN13GenericVectorIPN9tesseract11StringParamEE9push_backES2_(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract8IntParamEE6removeEi */
/* Demangled: GenericVector<tesseract::IntParam*>::remove(int) */
int _ZN13GenericVectorIPN9tesseract8IntParamEE6removeEi(void);

/* Symbol: _ZN9tesseract11TessBaseAPI12CatchSignalsEv */
/* Demangled: tesseract::TessBaseAPI::CatchSignals() */
int _ZN9tesseract11TessBaseAPI12CatchSignalsEv(void);

/* Symbol: _ZN9tesseract11TessBaseAPI8SetImageEPKhiiii */
/* Demangled: tesseract::TessBaseAPI::SetImage(unsigned char const*, int, int, int, int) */
int _ZN9tesseract11TessBaseAPI8SetImageEPKhiiii(void);

/* Symbol: _ZN7QSPLINEC2EPiiS0_S0_ii */
/* Demangled: QSPLINE::QSPLINE(int*, int, int*, int*, int, int) */
int _ZN7QSPLINEC2EPiiS0_S0_ii(void);

/* Symbol: _Z4WalkP6KDTREEPFvzEPvP6KDNODEi */
/* Demangled: Walk(KDTREE*, void (*)(...), void*, KDNODE*, int) */
int _Z4WalkP6KDTREEPFvzEPvP6KDNODEi(void);

/* Symbol: _ZN9tesseract4Bmp85ClearEv */
/* Demangled: tesseract::Bmp8::Clear() */
int _ZN9tesseract4Bmp85ClearEv(void);

/* Symbol: _Z9reverse_dP8list_rec */
/* Demangled: reverse_d(list_rec*) */
int _Z9reverse_dP8list_rec(void);

/* Symbol: _ZN9tesseract15InputFileBufferC2ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: tesseract::InputFileBuffer::InputFileBuffer(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN9tesseract15InputFileBufferC2ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN9tesseract12ColPartitionC2E14BlobRegionTypeRK6ICOORD */
/* Demangled: tesseract::ColPartition::ColPartition(BlobRegionType, ICOORD const&) */
int _ZN9tesseract12ColPartitionC2E14BlobRegionTypeRK6ICOORD(void);

/* Symbol: _Z11RightMarginP14ICOORDELT_LISTiPi */
/* Demangled: RightMargin(ICOORDELT_LIST*, int, int*) */
int _Z11RightMarginP14ICOORDELT_LISTiPi(void);

/* Symbol: _ZN9tesseract21ConvNetCharClassifier5TrainEPNS_8CharSampEi */
/* Demangled: tesseract::ConvNetCharClassifier::Train(tesseract::CharSamp*, int) */
int _ZN9tesseract21ConvNetCharClassifier5TrainEPNS_8CharSampEi(void);

/* Symbol: _ZNK9tesseract12SquishedDawg12edge_char_ofExib */
/* Demangled: tesseract::SquishedDawg::edge_char_of(long long, int, bool) const */
int _ZNK9tesseract12SquishedDawg12edge_char_ofExib(void);

/* Symbol: _ZNK9tesseract4Dict20IsSpaceDelimitedLangEv */
/* Demangled: tesseract::Dict::IsSpaceDelimitedLang() const */
int _ZNK9tesseract4Dict20IsSpaceDelimitedLangEv(void);

/* Symbol: _ZN6STRINGC1EPKc */
/* Demangled: STRING::STRING(char const*) */
int _ZN6STRINGC1EPKc(void);

/* Symbol: _ZNK9tesseract12PageIterator15IsAtBeginningOfENS_17PageIteratorLevelE */
/* Demangled: tesseract::PageIterator::IsAtBeginningOf(tesseract::PageIteratorLevel) const */
int _ZNK9tesseract12PageIterator15IsAtBeginningOfENS_17PageIteratorLevelE(void);

/* Symbol: _ZN9tesseract4Trie19kPuncPatternUnicodeE */
/* Demangled: tesseract::Trie::kPuncPatternUnicode */
extern void* _ZN9tesseract4Trie19kPuncPatternUnicodeE;

/* Symbol: _ZNK13GenericVectorIN9tesseract9KDPairIncIfP6EDGEPTEEE4backEv */
/* Demangled: GenericVector<tesseract::KDPairInc<float, EDGEPT*> >::back() const */
int _ZNK13GenericVectorIN9tesseract9KDPairIncIfP6EDGEPTEEE4backEv(void);

/* Symbol: _ZN9tesseract8Classify21ComputeCharNormArraysEP14FEATURE_STRUCTP20INT_TEMPLATES_STRUCTPhS5_ */
/* Demangled: tesseract::Classify::ComputeCharNormArrays(FEATURE_STRUCT*, INT_TEMPLATES_STRUCT*, unsigned char*, unsigned char*) */
int _ZN9tesseract8Classify21ComputeCharNormArraysEP14FEATURE_STRUCTP20INT_TEMPLATES_STRUCTPhS5_(void);

/* Symbol: _ZN9tesseract11TessBaseAPI23ClearAdaptiveClassifierEv */
/* Demangled: tesseract::TessBaseAPI::ClearAdaptiveClassifier() */
int _ZN9tesseract11TessBaseAPI23ClearAdaptiveClassifierEv(void);

/* Symbol: _ZN9tesseract12PageIteratorD2Ev */
/* Demangled: tesseract::PageIterator::~PageIterator() */
int _ZN9tesseract12PageIteratorD2Ev(void);

/* Symbol: _ZN9tesseract9ImageData8AddBoxesEPKc */
/* Demangled: tesseract::ImageData::AddBoxes(char const*) */
int _ZN9tesseract9ImageData8AddBoxesEPKc(void);

/* Symbol: _ZN9tesseract17WordListLangModelC2EPNS_15CubeRecoContextE */
/* Demangled: tesseract::WordListLangModel::WordListLangModel(tesseract::CubeRecoContext*) */
int _ZN9tesseract17WordListLangModelC2EPNS_15CubeRecoContextE(void);

/* Symbol: classify_cp_side_pad_medium */
/* Demangled: classify_cp_side_pad_medium */
extern void* classify_cp_side_pad_medium;

/* Symbol: _ZN9tesseract11TableFinder23GrowTableToIncludeLinesERK4TBOXS3_PS1_ */
/* Demangled: tesseract::TableFinder::GrowTableToIncludeLines(TBOX const&, TBOX const&, TBOX*) */
int _ZN9tesseract11TableFinder23GrowTableToIncludeLinesERK4TBOXS3_PS1_(void);

/* Symbol: TessBaseAPIGetInputName */
/* Demangled: TessBaseAPIGetInputName */
int TessBaseAPIGetInputName(void);

/* Symbol: _ZN9tesseract9Tesseract19classify_word_pass2ERKNS_8WordDataEPP8WERD_RESPNS_13PointerVectorIS4_EE */
/* Demangled: tesseract::Tesseract::classify_word_pass2(tesseract::WordData const&, WERD_RES**, tesseract::PointerVector<WERD_RES>*) */
int _ZN9tesseract9Tesseract19classify_word_pass2ERKNS_8WordDataEPP8WERD_RESPNS_13PointerVectorIS4_EE(void);

/* Symbol: _ZNK9tesseract11CharBigrams4CostEPKiPNS_7CharSetE */
/* Demangled: tesseract::CharBigrams::Cost(int const*, tesseract::CharSet*) const */
int _ZNK9tesseract11CharBigrams4CostEPKiPNS_7CharSetE(void);

/* Symbol: _ZN9tesseract12ColPartition13OKSpacingBlipEiiPPS0_ */
/* Demangled: tesseract::ColPartition::OKSpacingBlip(int, int, tesseract::ColPartition**) */
int _ZN9tesseract12ColPartition13OKSpacingBlipEiiPPS0_(void);

/* Symbol: _ZN9tesseract16LeftoverSegmentsERK13GenericVectorINS_19RowScratchRegistersEEPS0_INS_8IntervalEEii */
/* Demangled: tesseract::LeftoverSegments(GenericVector<tesseract::RowScratchRegisters> const&, GenericVector<tesseract::Interval>*, int, int) */
int _ZN9tesseract16LeftoverSegmentsERK13GenericVectorINS_19RowScratchRegistersEEPS0_INS_8IntervalEEii(void);

/* Symbol: _ZNK13GenericVectorIN9tesseract8FontInfoEE16SerializeClassesEP7__sFILE */
/* Demangled: GenericVector<tesseract::FontInfo>::SerializeClasses(__sFILE*) const */
int _ZNK13GenericVectorIN9tesseract8FontInfoEE16SerializeClassesEP7__sFILE(void);

/* Symbol: _ZN13GenericVectorIP11WERD_CHOICEE15double_the_sizeEv */
/* Demangled: GenericVector<WERD_CHOICE*>::double_the_size() */
int _ZN13GenericVectorIP11WERD_CHOICEE15double_the_sizeEv(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract18LanguageModelStateEE20delete_data_pointersEv */
/* Demangled: GenericVector<tesseract::LanguageModelState*>::delete_data_pointers() */
int _ZN13GenericVectorIPN9tesseract18LanguageModelStateEE20delete_data_pointersEv(void);

/* Symbol: _Z10MakeKDNodeP6KDTREEPfPvi */
/* Demangled: MakeKDNode(KDTREE*, float*, void*, int) */
int _Z10MakeKDNodeP6KDTREEPfPvi(void);

/* Symbol: _ZN9tesseract12ColPartition16SingletonPartnerEb */
/* Demangled: tesseract::ColPartition::SingletonPartner(bool) */
int _ZN9tesseract12ColPartition16SingletonPartnerEb(void);

/* Symbol: _ZN9tesseract4Trie13new_dawg_nodeEv */
/* Demangled: tesseract::Trie::new_dawg_node() */
int _ZN9tesseract4Trie13new_dawg_nodeEv(void);

/* Symbol: _ZN9tesseract8BlobGridD2Ev */
/* Demangled: tesseract::BlobGrid::~BlobGrid() */
int _ZN9tesseract8BlobGridD2Ev(void);

/* Symbol: _ZNK9tesseract12ColPartition5PrintEv */
/* Demangled: tesseract::ColPartition::Print() const */
int _ZNK9tesseract12ColPartition5PrintEv(void);

/* Symbol: gapmap_no_isolated_quanta */
/* Demangled: gapmap_no_isolated_quanta */
extern void* gapmap_no_isolated_quanta;

/* Symbol: words_default_prop_nonspace */
/* Demangled: words_default_prop_nonspace */
extern void* words_default_prop_nonspace;

/* Symbol: _ZNK9tesseract10DetLineFit23NumberOfMisfittedPointsEd */
/* Demangled: tesseract::DetLineFit::NumberOfMisfittedPoints(double) const */
int _ZNK9tesseract10DetLineFit23NumberOfMisfittedPointsEd(void);

/* Symbol: _Z13NewFeatureSeti */
/* Demangled: NewFeatureSet(int) */
int _Z13NewFeatureSeti(void);

/* Symbol: _ZNK9tesseract14TessClassifier13GetUnicharsetEv */
/* Demangled: tesseract::TessClassifier::GetUnicharset() const */
int _ZNK9tesseract14TessClassifier13GetUnicharsetEv(void);

/* Symbol: textord_descx_ratio_min */
/* Demangled: textord_descx_ratio_min */
extern void* textord_descx_ratio_min;

/* Symbol: _ZN9tesseract8Classify11WriteTRFileERK6STRING */
/* Demangled: tesseract::Classify::WriteTRFile(STRING const&) */
int _ZN9tesseract8Classify11WriteTRFileERK6STRING(void);

/* Symbol: _ZTVN9tesseract17WordListLangModelE */
/* Demangled: vtable for tesseract::WordListLangModel */
extern void* _ZTVN9tesseract17WordListLangModelE;

/* Symbol: _ZN9tesseract10GridSearchINS_10ColSegmentENS_16ColSegment_CLISTENS_15ColSegment_C_ITEE14NextRectSearchEv */
/* Demangled: tesseract::GridSearch<tesseract::ColSegment, tesseract::ColSegment_CLIST, tesseract::ColSegment_C_IT>::NextRectSearch() */
int _ZN9tesseract10GridSearchINS_10ColSegmentENS_16ColSegment_CLISTENS_15ColSegment_C_ITEE14NextRectSearchEv(void);

/* Symbol: _ZN9tesseract12LMPainPoints15GenerateInitialEP8WERD_RES */
/* Demangled: tesseract::LMPainPoints::GenerateInitial(WERD_RES*) */
int _ZN9tesseract12LMPainPoints15GenerateInitialEP8WERD_RES(void);

/* Symbol: _ZNK13GenericVectorIN9tesseract9KDPairIncIfiEEE4backEv */
/* Demangled: GenericVector<tesseract::KDPairInc<float, int> >::back() const */
int _ZNK13GenericVectorIN9tesseract9KDPairIncIfiEEE4backEv(void);

/* Symbol: _ZN9tesseract11TableFinder37SplitAndInsertFragmentedTextPartitionEPNS_12ColPartitionE */
/* Demangled: tesseract::TableFinder::SplitAndInsertFragmentedTextPartition(tesseract::ColPartition*) */
int _ZN9tesseract11TableFinder37SplitAndInsertFragmentedTextPartitionEPNS_12ColPartitionE(void);

/* Symbol: _ZN9tesseract13TabConstraintC1EPNS_9TabVectorEb */
/* Demangled: tesseract::TabConstraint::TabConstraint(tesseract::TabVector*, bool) */
int _ZN9tesseract13TabConstraintC1EPNS_9TabVectorEb(void);

/* Symbol: _ZN13GenericVectorIP14ParagraphModelE5clearEv */
/* Demangled: GenericVector<ParagraphModel*>::clear() */
int _ZN13GenericVectorIP14ParagraphModelE5clearEv(void);

/* Symbol: _ZN9tesseract14CubeClassifierC1EPNS_9TesseractE */
/* Demangled: tesseract::CubeClassifier::CubeClassifier(tesseract::Tesseract*) */
int _ZN9tesseract14CubeClassifierC1EPNS_9TesseractE(void);

/* Symbol: _ZN9tesseract8ClassifyC2Ev */
/* Demangled: tesseract::Classify::Classify() */
int _ZN9tesseract8ClassifyC2Ev(void);

/* Symbol: _ZN9tesseract10ShapeTable10AddToShapeEiii */
/* Demangled: tesseract::ShapeTable::AddToShape(int, int, int) */
int _ZN9tesseract10ShapeTable10AddToShapeEiii(void);

/* Symbol: _ZNK9tesseract5Shape9SerializeEP7__sFILE */
/* Demangled: tesseract::Shape::Serialize(__sFILE*) const */
int _ZNK9tesseract5Shape9SerializeEP7__sFILE(void);

/* Symbol: _ZN9tesseract8CharSampC2Ev */
/* Demangled: tesseract::CharSamp::CharSamp() */
int _ZN9tesseract8CharSampC2Ev(void);

/* Symbol: _ZN9tesseract11TessBaseAPI11GetIteratorEv */
/* Demangled: tesseract::TessBaseAPI::GetIterator() */
int _ZN9tesseract11TessBaseAPI11GetIteratorEv(void);

/* Symbol: _ZN9tesseract18TessResultRenderer10AppendDataEPKci */
/* Demangled: tesseract::TessResultRenderer::AppendData(char const*, int) */
int _ZN9tesseract18TessResultRenderer10AppendDataEPKci(void);

/* Symbol: _ZN9tesseract13FontInfoTableC2Ev */
/* Demangled: tesseract::FontInfoTable::FontInfoTable() */
int _ZN9tesseract13FontInfoTableC2Ev(void);

/* Symbol: _ZNK13GenericVectorIcE9SerializeEPN9tesseract5TFileE */
/* Demangled: GenericVector<char>::Serialize(tesseract::TFile*) const */
int _ZNK13GenericVectorIcE9SerializeEPN9tesseract5TFileE(void);

/* Symbol: _ZN9tesseract15ColPartitionSet16GetColumnByIndexEi */
/* Demangled: tesseract::ColPartitionSet::GetColumnByIndex(int) */
int _ZN9tesseract15ColPartitionSet16GetColumnByIndexEi(void);

/* Symbol: _ZNK13GenericVectorIN9tesseract8FontInfoEE9get_indexES1_ */
/* Demangled: GenericVector<tesseract::FontInfo>::get_index(tesseract::FontInfo) const */
int _ZNK13GenericVectorIN9tesseract8FontInfoEE9get_indexES1_(void);

/* Symbol: _ZN9tesseract13MasterTrainer24ReplaceFragmentedSamplesEv */
/* Demangled: tesseract::MasterTrainer::ReplaceFragmentedSamples() */
int _ZN9tesseract13MasterTrainer24ReplaceFragmentedSamplesEv(void);

/* Symbol: _ZN9tesseract8CharSampC1Eii */
/* Demangled: tesseract::CharSamp::CharSamp(int, int) */
int _ZN9tesseract8CharSampC1Eii(void);

/* Symbol: Java_com_googlecode_tesseract_android_TessPdfRenderer_nativeCreate */
/* Demangled: Java_com_googlecode_tesseract_android_TessPdfRenderer_nativeCreate */
int Java_com_googlecode_tesseract_android_TessPdfRenderer_nativeCreate(void);

/* Symbol: _ZN13GenericVectorI6STRINGEpLES0_ */
/* Demangled: GenericVector<STRING>::operator+=(STRING) */
int _ZN13GenericVectorI6STRINGEpLES0_(void);

/* Symbol: _ZN4WERD7join_onEPS_ */
/* Demangled: WERD::join_on(WERD*) */
int _ZN4WERD7join_onEPS_(void);

/* Symbol: _ZNSt3__112basic_stringIiNS_11char_traitsIiEENS_9allocatorIiEEE9__grow_byEjjjjjj */
/* Demangled: std::__1::basic_string<int, std::__1::char_traits<int>, std::__1::allocator<int> >::__grow_by(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZNSt3__112basic_stringIiNS_11char_traitsIiEENS_9allocatorIiEEE9__grow_byEjjjjjj(void);

/* Symbol: _ZNK4SEAM12FullPriorityEiididd */
/* Demangled: SEAM::FullPriority(int, int, double, int, double, double) const */
int _ZNK4SEAM12FullPriorityEiididd(void);

/* Symbol: _ZN9tesseract17CubeLineSegmenter7CleanUpEP3Pix */
/* Demangled: tesseract::CubeLineSegmenter::CleanUp(Pix*) */
int _ZN9tesseract17CubeLineSegmenter7CleanUpEP3Pix(void);

/* Symbol: _ZN9tesseract17WordListLangModel4InitEv */
/* Demangled: tesseract::WordListLangModel::Init() */
int _ZN9tesseract17WordListLangModel4InitEv(void);

/* Symbol: _ZN5TWERD5ClearEv */
/* Demangled: TWERD::Clear() */
int _ZN5TWERD5ClearEv(void);

/* Symbol: _ZN9tesseract10ShapeTable11DeleteShapeEi */
/* Demangled: tesseract::ShapeTable::DeleteShape(int) */
int _ZN9tesseract10ShapeTable11DeleteShapeEi(void);

/* Symbol: _ZNSt3__16vectorIN9tesseract16FontPairSizeInfoENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_ */
/* Demangled: void std::__1::vector<tesseract::FontPairSizeInfo, std::__1::allocator<tesseract::FontPairSizeInfo> >::__push_back_slow_path<tesseract::FontPairSizeInfo const&>(tesseract::FontPairSizeInfo const&) */
int _ZNSt3__16vectorIN9tesseract16FontPairSizeInfoENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void);

/* Symbol: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeGetConnectedComponents */
/* Demangled: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeGetConnectedComponents */
int Java_com_googlecode_tesseract_android_TessBaseAPI_nativeGetConnectedComponents(void);

/* Symbol: _Z13pixels_to_ptsii */
/* Demangled: pixels_to_pts(int, int) */
int _Z13pixels_to_ptsii(void);

/* Symbol: _ZN13GenericVectorIfEpLERKS0_ */
/* Demangled: GenericVector<float>::operator+=(GenericVector<float> const&) */
int _ZN13GenericVectorIfEpLERKS0_(void);

/* Symbol: _ZN9tesseract13FeatureHybridC1EPNS_12TuningParamsE */
/* Demangled: tesseract::FeatureHybrid::FeatureHybrid(tesseract::TuningParams*) */
int _ZN9tesseract13FeatureHybridC1EPNS_12TuningParamsE(void);

/* Symbol: _ZNK9tesseract4Dict19ProcessPatternEdgesEPKNS_4DawgERKNS_12DawgPositionEibPNS_8DawgArgsEP12PermuterType */
/* Demangled: tesseract::Dict::ProcessPatternEdges(tesseract::Dawg const*, tesseract::DawgPosition const&, int, bool, tesseract::DawgArgs*, PermuterType*) const */
int _ZNK9tesseract4Dict19ProcessPatternEdgesEPKNS_4DawgERKNS_12DawgPositionEibPNS_8DawgArgsEP12PermuterType(void);

/* Symbol: _ZN9tesseract19textord_show_tablesE */
/* Demangled: tesseract::textord_show_tables */
extern void* _ZN9tesseract19textord_show_tablesE;

/* Symbol: _Z20restore_outline_treeP8TESSLINE */
/* Demangled: restore_outline_tree(TESSLINE*) */
int _Z20restore_outline_treeP8TESSLINE(void);

/* Symbol: _ZN9tesseract18UnicodeSpanSkipper10SkipDigitsEi */
/* Demangled: tesseract::UnicodeSpanSkipper::SkipDigits(int) */
int _ZN9tesseract18UnicodeSpanSkipper10SkipDigitsEi(void);

/* Symbol: _ZN9tesseract6CCUtil10main_setupEPKcS2_ */
/* Demangled: tesseract::CCUtil::main_setup(char const*, char const*) */
int _ZN9tesseract6CCUtil10main_setupEPKcS2_(void);

/* Symbol: _ZN13GenericVectorIS_I6STRINGEE15double_the_sizeEv */
/* Demangled: GenericVector<GenericVector<STRING> >::double_the_size() */
int _ZN13GenericVectorIS_I6STRINGEE15double_the_sizeEv(void);

/* Symbol: _ZNK13GenericVectorIP16BLOB_CHOICE_LISTE3getEi */
/* Demangled: GenericVector<BLOB_CHOICE_LIST*>::get(int) const */
int _ZNK13GenericVectorIP16BLOB_CHOICE_LISTE3getEi(void);

/* Symbol: _ZTVN9tesseract11AlignedBlobE */
/* Demangled: vtable for tesseract::AlignedBlob */
extern void* _ZTVN9tesseract11AlignedBlobE;

/* Symbol: _ZN9tesseract7TabFind11CommonWidthEi */
/* Demangled: tesseract::TabFind::CommonWidth(int) */
int _ZN9tesseract7TabFind11CommonWidthEi(void);

/* Symbol: _ZN9tesseract11TessBaseAPI20ProcessPagesFileListEP7__sFILEP6STRINGPKciPNS_18TessResultRendererEi */
/* Demangled: tesseract::TessBaseAPI::ProcessPagesFileList(__sFILE*, STRING*, char const*, int, tesseract::TessResultRenderer*, int) */
int _ZN9tesseract11TessBaseAPI20ProcessPagesFileListEP7__sFILEP6STRINGPKciPNS_18TessResultRendererEi(void);

/* Symbol: _ZN9tesseract7BoxWord9InsertBoxEiRK4TBOX */
/* Demangled: tesseract::BoxWord::InsertBox(int, TBOX const&) */
int _ZN9tesseract7BoxWord9InsertBoxEiRK4TBOX(void);

/* Symbol: _ZN9tesseract16CubeSearchObjectC2EPNS_15CubeRecoContextEPNS_8CharSampE */
/* Demangled: tesseract::CubeSearchObject::CubeSearchObject(tesseract::CubeRecoContext*, tesseract::CharSamp*) */
int _ZN9tesseract16CubeSearchObjectC2EPNS_15CubeRecoContextEPNS_8CharSampE(void);

/* Symbol: _Z21C_OUTLINE_FRAG_zapperP10ELIST_LINK */
/* Demangled: C_OUTLINE_FRAG_zapper(ELIST_LINK*) */
int _Z21C_OUTLINE_FRAG_zapperP10ELIST_LINK(void);

/* Symbol: _Z10cancelFuncPvi */
/* Demangled: cancelFunc(void*, int) */
int _Z10cancelFuncPvi(void);

/* Symbol: _ZN5TBLOB5ClearEv */
/* Demangled: TBLOB::Clear() */
int _ZN5TBLOB5ClearEv(void);

/* Symbol: _ZN13GenericVectorIfE15double_the_sizeEv */
/* Demangled: GenericVector<float>::double_the_size() */
int _ZN13GenericVectorIfE15double_the_sizeEv(void);

/* Symbol: _ZN9tesseract23ParagraphModelByOutlineEiPK13GenericVectorINS_19RowScratchRegistersEEiii */
/* Demangled: tesseract::ParagraphModelByOutline(int, GenericVector<tesseract::RowScratchRegisters> const*, int, int, int) */
int _ZN9tesseract23ParagraphModelByOutlineEiPK13GenericVectorINS_19RowScratchRegistersEEiii(void);

/* Symbol: _ZNK9tesseract11BaselineRow8PerpDispERK6FCOORD */
/* Demangled: tesseract::BaselineRow::PerpDisp(FCOORD const&) const */
int _ZNK9tesseract11BaselineRow8PerpDispERK6FCOORD(void);

/* Symbol: _ZN9tesseract9TabVector6RotateERK6FCOORD */
/* Demangled: tesseract::TabVector::Rotate(FCOORD const&) */
int _ZN9tesseract9TabVector6RotateERK6FCOORD(void);

/* Symbol: _ZN9tesseract14EquationDetect17IdentifySeedPartsEv */
/* Demangled: tesseract::EquationDetect::IdentifySeedParts() */
int _ZN9tesseract14EquationDetect17IdentifySeedPartsEv(void);

/* Symbol: _ZN13GenericVectorIN9tesseract7RowInfoEE9push_backES1_ */
/* Demangled: GenericVector<tesseract::RowInfo>::push_back(tesseract::RowInfo) */
int _ZN13GenericVectorIN9tesseract7RowInfoEE9push_backES1_(void);

/* Symbol: _ZN6DENORMD2Ev */
/* Demangled: DENORM::~DENORM() */
int _ZN6DENORMD2Ev(void);

/* Symbol: _ZN13GenericVectorIN9tesseract7FontSetEE4readEP7__sFILEP19TessResultCallback3IbS4_PS1_bEb */
/* Demangled: GenericVector<tesseract::FontSet>::read(__sFILE*, TessResultCallback3<bool, __sFILE*, tesseract::FontSet*, bool>*, bool) */
int _ZN13GenericVectorIN9tesseract7FontSetEE4readEP7__sFILEP19TessResultCallback3IbS4_PS1_bEb(void);

/* Symbol: _Z8delete_dP8list_recPvP19TessResultCallback2IiS1_S1_E */
/* Demangled: delete_d(list_rec*, void*, TessResultCallback2<int, void*, void*>*) */
int _Z8delete_dP8list_recPvP19TessResultCallback2IiS1_S1_E(void);

/* Symbol: _Z14test_underlinehP6C_BLOBss */
/* Demangled: test_underline(unsigned char, C_BLOB*, short, short) */
int _Z14test_underlinehP6C_BLOBss(void);

/* Symbol: _Z14MakeNewClusterP9CLUSTERERP11TEMPCLUSTER */
/* Demangled: MakeNewCluster(CLUSTERER*, TEMPCLUSTER*) */
int _Z14MakeNewClusterP9CLUSTERERP11TEMPCLUSTER(void);

/* Symbol: _ZN9tesseract12CharSampEnumD1Ev */
/* Demangled: tesseract::CharSampEnum::~CharSampEnum() */
int _ZN9tesseract12CharSampEnumD1Ev(void);

/* Symbol: _ZN9tesseract7IntGridC2Ev */
/* Demangled: tesseract::IntGrid::IntGrid() */
int _ZN9tesseract7IntGridC2Ev(void);

/* Symbol: _ZN9tesseract7TabFindD1Ev */
/* Demangled: tesseract::TabFind::~TabFind() */
int _ZN9tesseract7TabFindD1Ev(void);

/* Symbol: _Z18free_int_templatesP20INT_TEMPLATES_STRUCT */
/* Demangled: free_int_templates(INT_TEMPLATES_STRUCT*) */
int _Z18free_int_templatesP20INT_TEMPLATES_STRUCT(void);

/* Symbol: _Z3popP8list_rec */
/* Demangled: pop(list_rec*) */
int _Z3popP8list_rec(void);

/* Symbol: _ZNK6TO_ROW5printEv */
/* Demangled: TO_ROW::print() const */
int _ZNK6TO_ROW5printEv(void);

/* Symbol: _ZN9tesseract10CachedFile4SizeEv */
/* Demangled: tesseract::CachedFile::Size() */
int _ZN9tesseract10CachedFile4SizeEv(void);

/* Symbol: _ZN9tesseract7TabFind10InsertBlobEbbP8BLOBNBOXPNS_6BBGridIS1_14BLOBNBOX_CLIST13BLOBNBOX_C_ITEE */
/* Demangled: tesseract::TabFind::InsertBlob(bool, bool, BLOBNBOX*, tesseract::BBGrid<BLOBNBOX, BLOBNBOX_CLIST, BLOBNBOX_C_IT>*) */
int _ZN9tesseract7TabFind10InsertBlobEbbP8BLOBNBOXPNS_6BBGridIS1_14BLOBNBOX_CLIST13BLOBNBOX_C_ITEE(void);

/* Symbol: _ZN9tesseract15TableRecognizerD2Ev */
/* Demangled: tesseract::TableRecognizer::~TableRecognizer() */
int _ZN9tesseract15TableRecognizerD2Ev(void);

/* Symbol: _ZN13GenericVectorIN9tesseract9KDPairIncIfiEEE15double_the_sizeEv */
/* Demangled: GenericVector<tesseract::KDPairInc<float, int> >::double_the_size() */
int _ZN13GenericVectorIN9tesseract9KDPairIncIfiEEE15double_the_sizeEv(void);

/* Symbol: _ZN9tesseract8CharSamp15ComputeFeaturesEiPf */
/* Demangled: tesseract::CharSamp::ComputeFeatures(int, float*) */
int _ZN9tesseract8CharSamp15ComputeFeaturesEiPf(void);

/* Symbol: _ZN9tesseract11TableFinder21GridMergeTableRegionsEv */
/* Demangled: tesseract::TableFinder::GridMergeTableRegions() */
int _ZN9tesseract11TableFinder21GridMergeTableRegionsEv(void);

/* Symbol: _ZN9tesseract11TessBaseAPI13FindRowForBoxEP10BLOCK_LISTiiii */
/* Demangled: tesseract::TessBaseAPI::FindRowForBox(BLOCK_LIST*, int, int, int, int) */
int _ZN9tesseract11TessBaseAPI13FindRowForBoxEP10BLOCK_LISTiiii(void);

/* Symbol: TessBaseAPIReadDebugConfigFile */
/* Demangled: TessBaseAPIReadDebugConfigFile */
int TessBaseAPIReadDebugConfigFile(void);

/* Symbol: _Z14WriteParamDescP7__sFILEtPK10PARAM_DESC */
/* Demangled: WriteParamDesc(__sFILE*, unsigned short, PARAM_DESC const*) */
int _Z14WriteParamDescP7__sFILEtPK10PARAM_DESC(void);

/* Symbol: _ZTVN9tesseract5CUtilE */
/* Demangled: vtable for tesseract::CUtil */
extern void* _ZTVN9tesseract5CUtilE;

/* Symbol: _ZN13GenericVectorIyE6removeEi */
/* Demangled: GenericVector<unsigned long long>::remove(int) */
int _ZN13GenericVectorIyE6removeEi(void);

/* Symbol: _ZN9tesseract18ShiroRekhaSplitter12PerformCloseEP3Pixi */
/* Demangled: tesseract::ShiroRekhaSplitter::PerformClose(Pix*, int) */
int _ZN9tesseract18ShiroRekhaSplitter12PerformCloseEP3Pixi(void);

/* Symbol: textord_ascx_ratio_min */
/* Demangled: textord_ascx_ratio_min */
extern void* textord_ascx_ratio_min;

/* Symbol: _ZN9tesseract9Tesseract23repeated_nonalphanum_wdEP8WERD_RESP3ROW */
/* Demangled: tesseract::Tesseract::repeated_nonalphanum_wd(WERD_RES*, ROW*) */
int _ZN9tesseract9Tesseract23repeated_nonalphanum_wdEP8WERD_RESP3ROW(void);

/* Symbol: _ZN9tesseract7TabFind21FindMedianGutterWidthEPNS_14TabVector_LISTE */
/* Demangled: tesseract::TabFind::FindMedianGutterWidth(tesseract::TabVector_LIST*) */
int _ZN9tesseract7TabFind21FindMedianGutterWidthEPNS_14TabVector_LISTE(void);

/* Symbol: _ZNSt3__112__hash_tableIPN9tesseract11WordWithBoxENS1_7PtrHashIS2_EENS_8equal_toIS3_EENS_9allocatorIS3_EEE6rehashEj */
/* Demangled: std::__1::__hash_table<tesseract::WordWithBox*, tesseract::PtrHash<tesseract::WordWithBox>, std::__1::equal_to<tesseract::WordWithBox*>, std::__1::allocator<tesseract::WordWithBox*> >::rehash(unsigned int) */
int _ZNSt3__112__hash_tableIPN9tesseract11WordWithBoxENS1_7PtrHashIS2_EENS_8equal_toIS3_EENS_9allocatorIS3_EEE6rehashEj(void);

/* Symbol: _ZNK9tesseract11TessBaseAPI14GetPageSegModeEv */
/* Demangled: tesseract::TessBaseAPI::GetPageSegMode() const */
int _ZNK9tesseract11TessBaseAPI14GetPageSegModeEv(void);

/* Symbol: _ZN9tesseract9Tesseract18ReassignDiacriticsEiP11PAGE_RES_ITPb */
/* Demangled: tesseract::Tesseract::ReassignDiacritics(int, PAGE_RES_IT*, bool*) */
int _ZN9tesseract9Tesseract18ReassignDiacriticsEiP11PAGE_RES_ITPb(void);

/* Symbol: _ZN13GenericVectorI17GenericVectorEqEqIPK14ParagraphModelEE15double_the_sizeEv */
/* Demangled: GenericVector<GenericVectorEqEq<ParagraphModel const*> >::double_the_size() */
int _ZN13GenericVectorI17GenericVectorEqEqIPK14ParagraphModelEE15double_the_sizeEv(void);

/* Symbol: _ZN13GenericVectorIN9tesseract12DawgPositionEE7reserveEi */
/* Demangled: GenericVector<tesseract::DawgPosition>::reserve(int) */
int _ZN13GenericVectorIN9tesseract12DawgPositionEE7reserveEi(void);

/* Symbol: edges_children_per_grandchild */
/* Demangled: edges_children_per_grandchild */
extern void* edges_children_per_grandchild;

/* Symbol: _ZN13GenericVectorIPN9tesseract18LanguageModelStateEE5clearEv */
/* Demangled: GenericVector<tesseract::LanguageModelState*>::clear() */
int _ZN13GenericVectorIPN9tesseract18LanguageModelStateEE5clearEv(void);

/* Symbol: _ZN8WERD_RES11IsAmbiguousEv */
/* Demangled: WERD_RES::IsAmbiguous() */
int _ZN8WERD_RES11IsAmbiguousEv(void);

/* Symbol: _ZN9tesseract25SeparateSimpleLeaderLinesEP13GenericVectorINS_19RowScratchRegistersEEiiPNS_15ParagraphTheoryE */
/* Demangled: tesseract::SeparateSimpleLeaderLines(GenericVector<tesseract::RowScratchRegisters>*, int, int, tesseract::ParagraphTheory*) */
int _ZN9tesseract25SeparateSimpleLeaderLinesEP13GenericVectorINS_19RowScratchRegistersEEiiPNS_15ParagraphTheoryE(void);

/* Symbol: _ZN9tesseract9Tesseract11non_0_digitERK10UNICHARSETi */
/* Demangled: tesseract::Tesseract::non_0_digit(UNICHARSET const&, int) */
int _ZN9tesseract9Tesseract11non_0_digitERK10UNICHARSETi(void);

/* Symbol: _Z8Integralddd */
/* Demangled: Integral(double, double, double) */
int _Z8Integralddd(void);

/* Symbol: _ZN9tesseract11TessBaseAPI16IsValidCharacterEPKc */
/* Demangled: tesseract::TessBaseAPI::IsValidCharacter(char const*) */
int _ZN9tesseract11TessBaseAPI16IsValidCharacterEPKc(void);

/* Symbol: _ZN13GenericVectorIfE7reserveEi */
/* Demangled: GenericVector<float>::reserve(int) */
int _ZN13GenericVectorIfE7reserveEi(void);

/* Symbol: _ZN9tesseract38GeometricClassifyThreeTabStopTextBlockEiRNS_24GeometricClassifierStateEPNS_15ParagraphTheoryE */
/* Demangled: tesseract::GeometricClassifyThreeTabStopTextBlock(int, tesseract::GeometricClassifierState&, tesseract::ParagraphTheory*) */
int _ZN9tesseract38GeometricClassifyThreeTabStopTextBlockEiRNS_24GeometricClassifierStateEPNS_15ParagraphTheoryE(void);

/* Symbol: _ZN6REJMAPC1ERKS_ */
/* Demangled: REJMAP::REJMAP(REJMAP const&) */
int _ZN6REJMAPC1ERKS_(void);

/* Symbol: _ZN9tesseract11StrokeWidth16DisplayGoodBlobsEPKcii */
/* Demangled: tesseract::StrokeWidth::DisplayGoodBlobs(char const*, int, int) */
int _ZN9tesseract11StrokeWidth16DisplayGoodBlobsEPKcii(void);

/* Symbol: _ZN13GenericVectorIbEpLERKS0_ */
/* Demangled: GenericVector<bool>::operator+=(GenericVector<bool> const&) */
int _ZN13GenericVectorIbEpLERKS0_(void);

/* Symbol: PicoFeatureLength */
/* Demangled: PicoFeatureLength */
extern void* PicoFeatureLength;

/* Symbol: _ZN9tesseract16FeatureChebyshevC2EPNS_12TuningParamsE */
/* Demangled: tesseract::FeatureChebyshev::FeatureChebyshev(tesseract::TuningParams*) */
int _ZN9tesseract16FeatureChebyshevC2EPNS_12TuningParamsE(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract15ColPartitionSetEE4moveEPS3_ */
/* Demangled: GenericVector<tesseract::ColPartitionSet*>::move(GenericVector<tesseract::ColPartitionSet*>*) */
int _ZN13GenericVectorIPN9tesseract15ColPartitionSetEE4moveEPS3_(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract10BlockGroupEE20delete_data_pointersEv */
/* Demangled: GenericVector<tesseract::BlockGroup*>::delete_data_pointers() */
int _ZN13GenericVectorIPN9tesseract10BlockGroupEE20delete_data_pointersEv(void);

/* Symbol: _ZN10UNICHARSET23load_from_inmemory_fileEPKcib */
/* Demangled: UNICHARSET::load_from_inmemory_file(char const*, int, bool) */
int _ZN10UNICHARSET23load_from_inmemory_fileEPKcib(void);

/* Symbol: _ZN9tesseract11StrokeWidth24FindHorizontalTextChainsEPNS_16ColPartitionGridE */
/* Demangled: tesseract::StrokeWidth::FindHorizontalTextChains(tesseract::ColPartitionGrid*) */
int _ZN9tesseract11StrokeWidth24FindHorizontalTextChainsEPNS_16ColPartitionGridE(void);

/* Symbol: _ZN9tesseract9TabVectorC1ERKS0_NS_12TabAlignmentERK6ICOORDP8BLOBNBOX */
/* Demangled: tesseract::TabVector::TabVector(tesseract::TabVector const&, tesseract::TabAlignment, ICOORD const&, BLOBNBOX*) */
int _ZN9tesseract9TabVectorC1ERKS0_NS_12TabAlignmentERK6ICOORDP8BLOBNBOX(void);

/* Symbol: _ZNSt3__112__hash_tableIPN9tesseract10ColSegmentENS1_7PtrHashIS2_EENS_8equal_toIS3_EENS_9allocatorIS3_EEE25__emplace_unique_key_argsIS3_JRKS3_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS3_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<tesseract::ColSegment*, void*>*>, bool> std::__1::__hash_table<tesseract::ColSegment*, tesseract::PtrHash<tesseract::ColSegment>, std::__1::equal_to<tesseract::ColSegment*>, std::__1::allocator<tesseract::ColSegment*> >::__emplace_unique_key_args<tesseract::ColSegment*, tesseract::ColSegment* const&>(tesseract::ColSegment* const&, tesseract::ColSegment* const&) */
int _ZNSt3__112__hash_tableIPN9tesseract10ColSegmentENS1_7PtrHashIS2_EENS_8equal_toIS3_EENS_9allocatorIS3_EEE25__emplace_unique_key_argsIS3_JRKS3_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS3_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN9tesseract8CharSampC2Eiiii */
/* Demangled: tesseract::CharSamp::CharSamp(int, int, int, int) */
int _ZN9tesseract8CharSampC2Eiiii(void);

/* Symbol: _ZN13GenericVectorIP5BLOCKE9push_backES1_ */
/* Demangled: GenericVector<BLOCK*>::push_back(BLOCK*) */
int _ZN13GenericVectorIP5BLOCKE9push_backES1_(void);

/* Symbol: _ZN9tesseract11TessBaseAPI27SetProbabilityInContextFuncEMNS_4DictEFdPKcS3_iS3_iE */
/* Demangled: tesseract::TessBaseAPI::SetProbabilityInContextFunc(double (tesseract::Dict::*)(char const*, char const*, int, char const*, int)) */
int _ZN9tesseract11TessBaseAPI27SetProbabilityInContextFuncEMNS_4DictEFdPKcS3_iS3_iE(void);

/* Symbol: _ZN9tesseract7BoxWordD1Ev */
/* Demangled: tesseract::BoxWord::~BoxWord() */
int _ZN9tesseract7BoxWordD1Ev(void);

/* Symbol: _ZN8WERD_RESD2Ev */
/* Demangled: WERD_RES::~WERD_RES() */
int _ZN8WERD_RESD2Ev(void);

/* Symbol: _Z15PDBLK_c1_zapperPv */
/* Demangled: PDBLK_c1_zapper(void*) */
int _Z15PDBLK_c1_zapperPv(void);

/* Symbol: _ZN9tesseract15ColPartitionSet14UnmatchedWidthEPS0_ */
/* Demangled: tesseract::ColPartitionSet::UnmatchedWidth(tesseract::ColPartitionSet*) */
int _ZN9tesseract15ColPartitionSet14UnmatchedWidthEPS0_(void);

/* Symbol: _ZN9tesseract11TessBaseAPI13TesseractRectEPKhiiiiii */
/* Demangled: tesseract::TessBaseAPI::TesseractRect(unsigned char const*, int, int, int, int, int, int) */
int _ZN9tesseract11TessBaseAPI13TesseractRectEPKhiiiiii(void);

/* Symbol: TessBaseAPIDelete */
/* Demangled: TessBaseAPIDelete */
int TessBaseAPIDelete(void);

/* Symbol: _ZNSt3__112__hash_tableIPN9tesseract12ColPartitionENS1_7PtrHashIS2_EENS_8equal_toIS3_EENS_9allocatorIS3_EEE25__emplace_unique_key_argsIS3_JRKS3_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS3_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<tesseract::ColPartition*, void*>*>, bool> std::__1::__hash_table<tesseract::ColPartition*, tesseract::PtrHash<tesseract::ColPartition>, std::__1::equal_to<tesseract::ColPartition*>, std::__1::allocator<tesseract::ColPartition*> >::__emplace_unique_key_args<tesseract::ColPartition*, tesseract::ColPartition* const&>(tesseract::ColPartition* const&, tesseract::ColPartition* const&) */
int _ZNSt3__112__hash_tableIPN9tesseract12ColPartitionENS1_7PtrHashIS2_EENS_8equal_toIS3_EENS_9allocatorIS3_EEE25__emplace_unique_key_argsIS3_JRKS3_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS3_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN9tesseract14ClosestClusterERK13GenericVectorINS_7ClusterEEi */
/* Demangled: tesseract::ClosestCluster(GenericVector<tesseract::Cluster> const&, int) */
int _ZN9tesseract14ClosestClusterERK13GenericVectorINS_7ClusterEEi(void);

/* Symbol: _ZN13GenericVectorIPS_IiEE15double_the_sizeEv */
/* Demangled: GenericVector<GenericVector<int>*>::double_the_size() */
int _ZN13GenericVectorIPS_IiEE15double_the_sizeEv(void);

/* Symbol: _ZN10UNICHARSET18UNICHAR_PROPERTIES13SetRangesOpenEv */
/* Demangled: UNICHARSET::UNICHAR_PROPERTIES::SetRangesOpen() */
int _ZN10UNICHARSET18UNICHAR_PROPERTIES13SetRangesOpenEv(void);

/* Symbol: _Z17outlines_to_blobsP5BLOCK6ICOORDS1_P14C_OUTLINE_LIST */
/* Demangled: outlines_to_blobs(BLOCK*, ICOORD, ICOORD, C_OUTLINE_LIST*) */
int _Z17outlines_to_blobsP5BLOCK6ICOORDS1_P14C_OUTLINE_LIST(void);

/* Symbol: _ZNK9tesseract15StructuredTable12column_countEv */
/* Demangled: tesseract::StructuredTable::column_count() const */
int _ZNK9tesseract15StructuredTable12column_countEv(void);

/* Symbol: _Z15ParseBoxFileStrPKcPiP6STRINGP4TBOX */
/* Demangled: ParseBoxFileStr(char const*, int*, STRING*, TBOX*) */
int _Z15ParseBoxFileStrPKcPiP6STRINGP4TBOX(void);

/* Symbol: _ZN9tesseract19kApostropheLikeUTF8E */
/* Demangled: tesseract::kApostropheLikeUTF8 */
extern void* _ZN9tesseract19kApostropheLikeUTF8E;

/* Symbol: _ZN9tesseract14TrainingSample13IndexFeaturesERKNS_15IntFeatureSpaceE */
/* Demangled: tesseract::TrainingSample::IndexFeatures(tesseract::IntFeatureSpace const&) */
int _ZN9tesseract14TrainingSample13IndexFeaturesERKNS_15IntFeatureSpaceE(void);

/* Symbol: _ZN13GenericVectorIP16TRIE_NODE_RECORDE9push_backES1_ */
/* Demangled: GenericVector<TRIE_NODE_RECORD*>::push_back(TRIE_NODE_RECORD*) */
int _ZN13GenericVectorIP16TRIE_NODE_RECORDE9push_backES1_(void);

/* Symbol: _ZN9tesseract11AlignedBlobD0Ev */
/* Demangled: tesseract::AlignedBlob::~AlignedBlob() */
int _ZN9tesseract11AlignedBlobD0Ev(void);

/* Symbol: _Z17RotateOutlineListRK6FCOORDP14C_OUTLINE_LIST */
/* Demangled: RotateOutlineList(FCOORD const&, C_OUTLINE_LIST*) */
int _Z17RotateOutlineListRK6FCOORDP14C_OUTLINE_LIST(void);

/* Symbol: _ZN9tesseract18kUTF8LineSeparatorE */
/* Demangled: tesseract::kUTF8LineSeparator */
extern void* _ZN9tesseract18kUTF8LineSeparatorE;

/* Symbol: _ZN9tesseract16ColPartitionGrid15MakeColPartSetsEP13GenericVectorIPNS_15ColPartitionSetEE */
/* Demangled: tesseract::ColPartitionGrid::MakeColPartSets(GenericVector<tesseract::ColPartitionSet*>*) */
int _ZN9tesseract16ColPartitionGrid15MakeColPartSetsEP13GenericVectorIPNS_15ColPartitionSetEE(void);

/* Symbol: textord_fix_makerow_bug */
/* Demangled: textord_fix_makerow_bug */
extern void* textord_fix_makerow_bug;

/* Symbol: _ZN13GenericVectorIN9tesseract9KDPairIncIf12MATRIX_COORDEEE15double_the_sizeEv */
/* Demangled: GenericVector<tesseract::KDPairInc<float, MATRIX_COORD> >::double_the_size() */
int _ZN13GenericVectorIN9tesseract9KDPairIncIf12MATRIX_COORDEEE15double_the_sizeEv(void);

/* Symbol: _ZN5STATS5clearEv */
/* Demangled: STATS::clear() */
int _ZN5STATS5clearEv(void);

/* Symbol: _ZN13GenericVectorIP14ParagraphModelE6removeEi */
/* Demangled: GenericVector<ParagraphModel*>::remove(int) */
int _ZN13GenericVectorIP14ParagraphModelE6removeEi(void);

/* Symbol: _Z6EfopenPKcS0_ */
/* Demangled: Efopen(char const*, char const*) */
int _Z6EfopenPKcS0_(void);

/* Symbol: _ZN9tesseract11CharSampSet16FromCharDumpFileENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: tesseract::CharSampSet::FromCharDumpFile(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN9tesseract11CharSampSet16FromCharDumpFileENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN9tesseract13FeatureHybridC2EPNS_12TuningParamsE */
/* Demangled: tesseract::FeatureHybrid::FeatureHybrid(tesseract::TuningParams*) */
int _ZN9tesseract13FeatureHybridC2EPNS_12TuningParamsE(void);

/* Symbol: _ZN9tesseract16ColPartitionGrid9MergePartEP19TessResultCallback2IbPNS_12ColPartitionEP4TBOXEPS1_IbPKS2_S9_ES3_ */
/* Demangled: tesseract::ColPartitionGrid::MergePart(TessResultCallback2<bool, tesseract::ColPartition*, TBOX*>*, TessResultCallback2<bool, tesseract::ColPartition const*, tesseract::ColPartition const*>*, tesseract::ColPartition*) */
int _ZN9tesseract16ColPartitionGrid9MergePartEP19TessResultCallback2IbPNS_12ColPartitionEP4TBOXEPS1_IbPKS2_S9_ES3_(void);

/* Symbol: _ZNK9tesseract18TextlineProjection24BestMeanGradientInColumnEPK6DENORMsssb */
/* Demangled: tesseract::TextlineProjection::BestMeanGradientInColumn(DENORM const*, short, short, short, bool) const */
int _ZNK9tesseract18TextlineProjection24BestMeanGradientInColumnEPK6DENORMsssb(void);

/* Symbol: _ZN9tesseract8Classify17AddLargeSpeckleToEiP16BLOB_CHOICE_LIST */
/* Demangled: tesseract::Classify::AddLargeSpeckleTo(int, BLOB_CHOICE_LIST*) */
int _ZN9tesseract8Classify17AddLargeSpeckleToEiP16BLOB_CHOICE_LIST(void);

/* Symbol: _ZN9tesseract12PageIterator5BeginEv */
/* Demangled: tesseract::PageIterator::Begin() */
int _ZN9tesseract12PageIterator5BeginEv(void);

/* Symbol: _ZN9tesseract9Tesseract8set_doneEP8WERD_RESs */
/* Demangled: tesseract::Tesseract::set_done(WERD_RES*, short) */
int _ZN9tesseract9Tesseract8set_doneEP8WERD_RESs(void);

/* Symbol: _ZN9tesseract21ConvNetCharClassifier15LoadFoldingSetsERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_PNS_9LangModelE */
/* Demangled: tesseract::ConvNetCharClassifier::LoadFoldingSets(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, tesseract::LangModel*) */
int _ZN9tesseract21ConvNetCharClassifier15LoadFoldingSetsERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_PNS_9LangModelE(void);

/* Symbol: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeStop */
/* Demangled: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeStop */
int Java_com_googlecode_tesseract_android_TessBaseAPI_nativeStop(void);

/* Symbol: TessBaseAPIGetVariableAsString */
/* Demangled: TessBaseAPIGetVariableAsString */
int TessBaseAPIGetVariableAsString(void);

/* Symbol: _ZN9tesseract5CUtilD2Ev */
/* Demangled: tesseract::CUtil::~CUtil() */
int _ZN9tesseract5CUtilD2Ev(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract14TrainingSampleEE20delete_data_pointersEv */
/* Demangled: GenericVector<tesseract::TrainingSample*>::delete_data_pointers() */
int _ZN13GenericVectorIPN9tesseract14TrainingSampleEE20delete_data_pointersEv(void);

/* Symbol: _ZN9tesseract16ColPartitionGrid10FindMarginEibiiiPKNS_12ColPartitionE */
/* Demangled: tesseract::ColPartitionGrid::FindMargin(int, bool, int, int, int, tesseract::ColPartition const*) */
int _ZN9tesseract16ColPartitionGrid10FindMarginEibiiiPKNS_12ColPartitionE(void);

/* Symbol: _Z13split_to_blobP8BLOBNBOXsfP14C_OUTLINE_LISTS2_ */
/* Demangled: split_to_blob(BLOBNBOX*, short, float, C_OUTLINE_LIST*, C_OUTLINE_LIST*) */
int _Z13split_to_blobP8BLOBNBOXsfP14C_OUTLINE_LISTS2_(void);

/* Symbol: _Z9os_detectP13TO_BLOCK_LISTP9OSResultsPN9tesseract9TesseractE */
/* Demangled: os_detect(TO_BLOCK_LIST*, OSResults*, tesseract::Tesseract*) */
int _Z9os_detectP13TO_BLOCK_LISTP9OSResultsPN9tesseract9TesseractE(void);

/* Symbol: _ZTV31_TessFunctionResultCallback_0_2ILb0EbRKN9tesseract14LineHypothesisES3_E */
/* Demangled: vtable for _TessFunctionResultCallback_0_2<false, bool, tesseract::LineHypothesis const&, tesseract::LineHypothesis const&> */
extern void* _ZTV31_TessFunctionResultCallback_0_2ILb0EbRKN9tesseract14LineHypothesisES3_E;

/* Symbol: _ZNK9tesseract14SampleIterator18CompactCharsetSizeEv */
/* Demangled: tesseract::SampleIterator::CompactCharsetSize() const */
int _ZNK9tesseract14SampleIterator18CompactCharsetSizeEv(void);

/* Symbol: _Z17find_cblob_limitsP6C_BLOBff6FCOORDRfS2_ */
/* Demangled: find_cblob_limits(C_BLOB*, float, float, FCOORD, float&, float&) */
int _Z17find_cblob_limitsP6C_BLOBff6FCOORDRfS2_(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract8IntParamEE5clearEv */
/* Demangled: GenericVector<tesseract::IntParam*>::clear() */
int _ZN13GenericVectorIPN9tesseract8IntParamEE5clearEv(void);

/* Symbol: _Z12WriteNFloatsP7__sFILEtPf */
/* Demangled: WriteNFloats(__sFILE*, unsigned short, float*) */
int _Z12WriteNFloatsP7__sFILEtPf(void);

/* Symbol: _ZNSt3__114__split_bufferIN9tesseract9NeuralNet4NodeERNS_9allocatorIS3_EEED2Ev */
/* Demangled: std::__1::__split_buffer<tesseract::NeuralNet::Node, std::__1::allocator<tesseract::NeuralNet::Node>&>::~__split_buffer() */
int _ZNSt3__114__split_bufferIN9tesseract9NeuralNet4NodeERNS_9allocatorIS3_EEED2Ev(void);

/* Symbol: _ZN9tesseract12ColPartition16SmoothPartnerRunEi */
/* Demangled: tesseract::ColPartition::SmoothPartnerRun(int) */
int _ZN9tesseract12ColPartition16SmoothPartnerRunEi(void);

/* Symbol: textord_spline_medianwin */
/* Demangled: textord_spline_medianwin */
extern void* textord_spline_medianwin;

/* Symbol: textord_debug_printable */
/* Demangled: textord_debug_printable */
extern void* textord_debug_printable;

/* Symbol: _ZNK9tesseract17TrainingSampleSet20GetCanonicalFeaturesEii */
/* Demangled: tesseract::TrainingSampleSet::GetCanonicalFeatures(int, int) const */
int _ZNK9tesseract17TrainingSampleSet20GetCanonicalFeaturesEii(void);

/* Symbol: _ZN9tesseract16ColPartitionGrid11HandleClickEii */
/* Demangled: tesseract::ColPartitionGrid::HandleClick(int, int) */
int _ZN9tesseract16ColPartitionGrid11HandleClickEii(void);

/* Symbol: _ZNSt3__112__hash_tableIPN9tesseract11WordWithBoxENS1_7PtrHashIS2_EENS_8equal_toIS3_EENS_9allocatorIS3_EEE8__rehashEj */
/* Demangled: std::__1::__hash_table<tesseract::WordWithBox*, tesseract::PtrHash<tesseract::WordWithBox>, std::__1::equal_to<tesseract::WordWithBox*>, std::__1::allocator<tesseract::WordWithBox*> >::__rehash(unsigned int) */
int _ZNSt3__112__hash_tableIPN9tesseract11WordWithBoxENS1_7PtrHashIS2_EENS_8equal_toIS3_EENS_9allocatorIS3_EEE8__rehashEj(void);

/* Symbol: _ZN9tesseract16ColPartitionGridD0Ev */
/* Demangled: tesseract::ColPartitionGrid::~ColPartitionGrid() */
int _ZN9tesseract16ColPartitionGridD0Ev(void);

/* Symbol: _ZN9tesseract8Classify16ShowBestMatchForEiPK18INT_FEATURE_STRUCTi */
/* Demangled: tesseract::Classify::ShowBestMatchFor(int, INT_FEATURE_STRUCT const*, int) */
int _ZN9tesseract8Classify16ShowBestMatchForEiPK18INT_FEATURE_STRUCTi(void);

/* Symbol: _ZNK9tesseract15IntFeatureSpace20IndexAndSortFeaturesEPK18INT_FEATURE_STRUCTiP13GenericVectorIiE */
/* Demangled: tesseract::IntFeatureSpace::IndexAndSortFeatures(INT_FEATURE_STRUCT const*, int, GenericVector<int>*) const */
int _ZNK9tesseract15IntFeatureSpace20IndexAndSortFeaturesEPK18INT_FEATURE_STRUCTiP13GenericVectorIiE(void);

/* Symbol: _ZNK9tesseract10ShapeTable17AddShapeToResultsERKNS_11ShapeRatingEP13GenericVectorIiEPS4_INS_13UnicharRatingEE */
/* Demangled: tesseract::ShapeTable::AddShapeToResults(tesseract::ShapeRating const&, GenericVector<int>*, GenericVector<tesseract::UnicharRating>*) const */
int _ZNK9tesseract10ShapeTable17AddShapeToResultsERKNS_11ShapeRatingEP13GenericVectorIiEPS4_INS_13UnicharRatingEE(void);

/* Symbol: _ZN9tesseract17LTRResultIteratorC2EP8PAGE_RESPNS_9TesseractEiiiiii */
/* Demangled: tesseract::LTRResultIterator::LTRResultIterator(PAGE_RES*, tesseract::Tesseract*, int, int, int, int, int, int) */
int _ZN9tesseract17LTRResultIteratorC2EP8PAGE_RESPNS_9TesseractEiiiiii(void);

/* Symbol: _ZN5STATSC2Eii */
/* Demangled: STATS::STATS(int, int) */
int _ZN5STATSC2Eii(void);

/* Symbol: _ZN9tesseract10GridSearchI8BLOBNBOX14BLOBNBOX_CLIST13BLOBNBOX_C_ITE15StartRectSearchERK4TBOX */
/* Demangled: tesseract::GridSearch<BLOBNBOX, BLOBNBOX_CLIST, BLOBNBOX_C_IT>::StartRectSearch(TBOX const&) */
int _ZN9tesseract10GridSearchI8BLOBNBOX14BLOBNBOX_CLIST13BLOBNBOX_C_ITE15StartRectSearchERK4TBOX(void);

/* Symbol: _ZN9tesseract18TextlineProjection19ConstructProjectionEP8TO_BLOCKRK6FCOORDP3Pix */
/* Demangled: tesseract::TextlineProjection::ConstructProjection(TO_BLOCK*, FCOORD const&, Pix*) */
int _ZN9tesseract18TextlineProjection19ConstructProjectionEP8TO_BLOCKRK6FCOORDP3Pix(void);

/* Symbol: _ZN9tesseract7Wordrec16InitialSegSearchEP8WERD_RESPNS_12LMPainPointsEP13GenericVectorINS_16SegSearchPendingEEPNS_16BestChoiceBundleEP12BlamerBundle */
/* Demangled: tesseract::Wordrec::InitialSegSearch(WERD_RES*, tesseract::LMPainPoints*, GenericVector<tesseract::SegSearchPending>*, tesseract::BestChoiceBundle*, BlamerBundle*) */
int _ZN9tesseract7Wordrec16InitialSegSearchEP8WERD_RESPNS_12LMPainPointsEP13GenericVectorINS_16SegSearchPendingEEPNS_16BestChoiceBundleEP12BlamerBundle(void);

/* Symbol: _ZNK9tesseract17LTRResultIterator25GetBlamerMisadaptionDebugEv */
/* Demangled: tesseract::LTRResultIterator::GetBlamerMisadaptionDebug() const */
int _ZNK9tesseract17LTRResultIterator25GetBlamerMisadaptionDebugEv(void);

/* Symbol: _Z16choose_partitionfPfifS_S_Pi */
/* Demangled: choose_partition(float, float*, int, float, float*, float*, int*) */
int _Z16choose_partitionfPfifS_S_Pi(void);

/* Symbol: _ZN9tesseract27textord_tablefind_show_markE */
/* Demangled: tesseract::textord_tablefind_show_mark */
extern void* _ZN9tesseract27textord_tablefind_show_markE;

/* Symbol: _ZN13GenericVectorIN9tesseract12KDPtrPairIncIf4SEAMEEE5clearEv */
/* Demangled: GenericVector<tesseract::KDPtrPairInc<float, SEAM> >::clear() */
int _ZN13GenericVectorIN9tesseract12KDPtrPairIncIf4SEAMEEE5clearEv(void);

/* Symbol: _ZN9tesseract8Classify14FreeNormProtosEv */
/* Demangled: tesseract::Classify::FreeNormProtos() */
int _ZN9tesseract8Classify14FreeNormProtosEv(void);

/* Symbol: _ZN9tesseract11BaselineRow18ComputeBoundingBoxEv */
/* Demangled: tesseract::BaselineRow::ComputeBoundingBox() */
int _ZN9tesseract11BaselineRow18ComputeBoundingBoxEv(void);

/* Symbol: _ZN9tesseract9Tesseract16worst_noise_blobEP8WERD_RESPf */
/* Demangled: tesseract::Tesseract::worst_noise_blob(WERD_RES*, float*) */
int _ZN9tesseract9Tesseract16worst_noise_blobEP8WERD_RESPf(void);

/* Symbol: _ZNK9tesseract12PageIterator32IsWithinFirstTextlineOfParagraphEv */
/* Demangled: tesseract::PageIterator::IsWithinFirstTextlineOfParagraph() const */
int _ZNK9tesseract12PageIterator32IsWithinFirstTextlineOfParagraphEv(void);

/* Symbol: _ZN9tesseract9Tesseract11non_O_upperERK10UNICHARSETi */
/* Demangled: tesseract::Tesseract::non_O_upper(UNICHARSET const&, int) */
int _ZN9tesseract9Tesseract11non_O_upperERK10UNICHARSETi(void);

/* Symbol: textord_restore_underlines */
/* Demangled: textord_restore_underlines */
extern void* textord_restore_underlines;

/* Symbol: _ZNK6STRINGneEPKc */
/* Demangled: STRING::operator!=(char const*) const */
int _ZNK6STRINGneEPKc(void);

/* Symbol: classify_num_cp_levels */
/* Demangled: classify_num_cp_levels */
extern void* classify_num_cp_levels;

/* Symbol: _ZN9tesseract4Bmp8C2Ett */
/* Demangled: tesseract::Bmp8::Bmp8(unsigned short, unsigned short) */
int _ZN9tesseract4Bmp8C2Ett(void);

/* Symbol: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeGetRegions */
/* Demangled: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeGetRegions */
int Java_com_googlecode_tesseract_android_TessBaseAPI_nativeGetRegions(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract9TesseractEE15double_the_sizeEv */
/* Demangled: GenericVector<tesseract::Tesseract*>::double_the_size() */
int _ZN13GenericVectorIPN9tesseract9TesseractEE15double_the_sizeEv(void);

/* Symbol: _ZNK9tesseract4Dawg13iterate_wordsERK10UNICHARSETP13TessCallback1IPK11WERD_CHOICEE */
/* Demangled: tesseract::Dawg::iterate_words(UNICHARSET const&, TessCallback1<WERD_CHOICE const*>*) const */
int _ZNK9tesseract4Dawg13iterate_wordsERK10UNICHARSETP13TessCallback1IPK11WERD_CHOICEE(void);

/* Symbol: _ZN13GenericVectorIxE5clearEv */
/* Demangled: GenericVector<long long>::clear() */
int _ZN13GenericVectorIxE5clearEv(void);

/* Symbol: textord_spline_shift_fraction */
/* Demangled: textord_spline_shift_fraction */
extern void* textord_spline_shift_fraction;

/* Symbol: TessBaseAPIGetInitLanguagesAsString */
/* Demangled: TessBaseAPIGetInitLanguagesAsString */
int TessBaseAPIGetInitLanguagesAsString(void);

/* Symbol: _ZN9tesseract7AltListD0Ev */
/* Demangled: tesseract::AltList::~AltList() */
int _ZN9tesseract7AltListD0Ev(void);

/* Symbol: _ZN9tesseract4Trie12trie_to_dawgEv */
/* Demangled: tesseract::Trie::trie_to_dawg() */
int _ZN9tesseract4Trie12trie_to_dawgEv(void);

/* Symbol: _Z13FreeProtoListPP8list_rec */
/* Demangled: FreeProtoList(list_rec**) */
int _Z13FreeProtoListPP8list_rec(void);

/* Symbol: _ZN9tesseract14IntFeatureDistD1Ev */
/* Demangled: tesseract::IntFeatureDist::~IntFeatureDist() */
int _ZN9tesseract14IntFeatureDistD1Ev(void);

/* Symbol: _ZN9tesseract12ColumnFinder28ReleaseBlobsAndCleanupUnusedEP8TO_BLOCK */
/* Demangled: tesseract::ColumnFinder::ReleaseBlobsAndCleanupUnused(TO_BLOCK*) */
int _ZN9tesseract12ColumnFinder28ReleaseBlobsAndCleanupUnusedEP8TO_BLOCK(void);

/* Symbol: _ZNK9C_OUTLINEltERKS_ */
/* Demangled: C_OUTLINE::operator<(C_OUTLINE const&) const */
int _ZNK9C_OUTLINEltERKS_(void);

/* Symbol: _ZN9tesseract12IndexMapBiDi6SetMapEib */
/* Demangled: tesseract::IndexMapBiDi::SetMap(int, bool) */
int _ZN9tesseract12IndexMapBiDi6SetMapEib(void);

/* Symbol: _ZN9tesseract17CubeLineSegmenter15kMaxConnCompWidE */
/* Demangled: tesseract::CubeLineSegmenter::kMaxConnCompWid */
extern void* _ZN9tesseract17CubeLineSegmenter15kMaxConnCompWidE;

/* Symbol: _ZN9tesseract11AlignedBlobC1EiRK6ICOORDS3_ */
/* Demangled: tesseract::AlignedBlob::AlignedBlob(int, ICOORD const&, ICOORD const&) */
int _ZN9tesseract11AlignedBlobC1EiRK6ICOORDS3_(void);

/* Symbol: _ZNK9tesseract12PageIterator12BlockPolygonEv */
/* Demangled: tesseract::PageIterator::BlockPolygon() const */
int _ZNK9tesseract12PageIterator12BlockPolygonEv(void);

/* Symbol: _Z25set_global_subsubloc_codei */
/* Demangled: set_global_subsubloc_code(int) */
int _Z25set_global_subsubloc_codei(void);

/* Symbol: edges_max_children_layers */
/* Demangled: edges_max_children_layers */
extern void* edges_max_children_layers;

/* Symbol: _ZN9tesseract11TessBaseAPI11InitLangModEPKcS2_ */
/* Demangled: tesseract::TessBaseAPI::InitLangMod(char const*, char const*) */
int _ZN9tesseract11TessBaseAPI11InitLangModEPKcS2_(void);

/* Symbol: _ZN9tesseract14EquationDetect16SetLangTesseractEPNS_9TesseractE */
/* Demangled: tesseract::EquationDetect::SetLangTesseract(tesseract::Tesseract*) */
int _ZN9tesseract14EquationDetect16SetLangTesseractEPNS_9TesseractE(void);

/* Symbol: _ZN4WERDaSERKS_ */
/* Demangled: WERD::operator=(WERD const&) */
int _ZN4WERDaSERKS_(void);

/* Symbol: _ZN13GenericVectorIN9tesseract14LineHypothesisEEaSERKS2_ */
/* Demangled: GenericVector<tesseract::LineHypothesis>::operator=(GenericVector<tesseract::LineHypothesis> const&) */
int _ZN13GenericVectorIN9tesseract14LineHypothesisEEaSERKS2_(void);

/* Symbol: TessBaseAPISetOutputName */
/* Demangled: TessBaseAPISetOutputName */
int TessBaseAPISetOutputName(void);

/* Symbol: _ZN9tesseract9Tesseract16fix_fuzzy_spacesEP10ETEXT_DESCiP8PAGE_RES */
/* Demangled: tesseract::Tesseract::fix_fuzzy_spaces(ETEXT_DESC*, int, PAGE_RES*) */
int _ZN9tesseract9Tesseract16fix_fuzzy_spacesEP10ETEXT_DESCiP8PAGE_RES(void);

/* Symbol: _ZN9tesseract10GridSearchINS_12ColPartitionENS_18ColPartition_CLISTENS_17ColPartition_C_ITEE11CommonStartEii */
/* Demangled: tesseract::GridSearch<tesseract::ColPartition, tesseract::ColPartition_CLIST, tesseract::ColPartition_C_IT>::CommonStart(int, int) */
int _ZN9tesseract10GridSearchINS_12ColPartitionENS_18ColPartition_CLISTENS_17ColPartition_C_ITEE11CommonStartEii(void);

/* Symbol: _ZN9tesseract12ColPartition6AbsorbEPS0_P19TessResultCallback1IbiE */
/* Demangled: tesseract::ColPartition::Absorb(tesseract::ColPartition*, TessResultCallback1<bool, int>*) */
int _ZN9tesseract12ColPartition6AbsorbEPS0_P19TessResultCallback1IbiE(void);

/* Symbol: _ZN9tesseract9NeuralNet16FastGetNetOutputIfEEbPKT_iPS2_ */
/* Demangled: bool tesseract::NeuralNet::FastGetNetOutput<float>(float const*, int, float*) */
int _ZN9tesseract9NeuralNet16FastGetNetOutputIfEEbPKT_iPS2_(void);

/* Symbol: _ZN12KDTreeSearchD1Ev */
/* Demangled: KDTreeSearch::~KDTreeSearch() */
int _ZN12KDTreeSearchD1Ev(void);

/* Symbol: _ZN9tesseract29HybridNeuralNetCharClassifierD2Ev */
/* Demangled: tesseract::HybridNeuralNetCharClassifier::~HybridNeuralNetCharClassifier() */
int _ZN9tesseract29HybridNeuralNetCharClassifierD2Ev(void);

/* Symbol: textord_xheight_error_margin */
/* Demangled: textord_xheight_error_margin */
extern void* textord_xheight_error_margin;

/* Symbol: _ZN9tesseract14EquationDetect16SearchNNVerticalEbPKNS_12ColPartitionE */
/* Demangled: tesseract::EquationDetect::SearchNNVertical(bool, tesseract::ColPartition const*) */
int _ZN9tesseract14EquationDetect16SearchNNVerticalEbPKNS_12ColPartitionE(void);

/* Symbol: _Z22PrintSegmentationStatsP10BLOCK_LIST */
/* Demangled: PrintSegmentationStats(BLOCK_LIST*) */
int _Z22PrintSegmentationStatsP10BLOCK_LIST(void);

/* Symbol: _ZN9BLOCK_RESC1EbP5BLOCK */
/* Demangled: BLOCK_RES::BLOCK_RES(bool, BLOCK*) */
int _ZN9BLOCK_RESC1EbP5BLOCK(void);

/* Symbol: _ZN9tesseract12CharSampEnumC2Ev */
/* Demangled: tesseract::CharSampEnum::CharSampEnum() */
int _ZN9tesseract12CharSampEnumC2Ev(void);

/* Symbol: _ZN9tesseract14EquationDetect18ExpandSeedVerticalEbPNS_12ColPartitionEP13GenericVectorIS2_E */
/* Demangled: tesseract::EquationDetect::ExpandSeedVertical(bool, tesseract::ColPartition*, GenericVector<tesseract::ColPartition*>*) */
int _ZN9tesseract14EquationDetect18ExpandSeedVerticalEbPNS_12ColPartitionEP13GenericVectorIS2_E(void);

/* Symbol: _ZN9tesseract11WordFeatureC1ERK6FCOORDh */
/* Demangled: tesseract::WordFeature::WordFeature(FCOORD const&, unsigned char) */
int _ZN9tesseract11WordFeatureC1ERK6FCOORDh(void);

/* Symbol: _ZN10POLY_BLOCKC1EP14ICOORDELT_LIST13PolyBlockType */
/* Demangled: POLY_BLOCK::POLY_BLOCK(ICOORDELT_LIST*, PolyBlockType) */
int _ZN10POLY_BLOCKC1EP14ICOORDELT_LIST13PolyBlockType(void);

/* Symbol: _ZNK9tesseract18TextlineProjection26DistanceOfBoxFromPartitionERK4TBOXRKNS_12ColPartitionEPK6DENORMb */
/* Demangled: tesseract::TextlineProjection::DistanceOfBoxFromPartition(TBOX const&, tesseract::ColPartition const&, DENORM const*, bool) const */
int _ZNK9tesseract18TextlineProjection26DistanceOfBoxFromPartitionERK4TBOXRKNS_12ColPartitionEPK6DENORMb(void);

/* Symbol: to_win */
/* Demangled: to_win */
extern void* to_win;

/* Symbol: debug_file */
/* Demangled: debug_file */
extern void* debug_file;

/* Symbol: _ZN9tesseract29HybridNeuralNetCharClassifier8CharCostEPNS_8CharSampE */
/* Demangled: tesseract::HybridNeuralNetCharClassifier::CharCost(tesseract::CharSamp*) */
int _ZN9tesseract29HybridNeuralNetCharClassifier8CharCostEPNS_8CharSampE(void);

/* Symbol: _ZN9tesseract12ColumnFinder19DisplayColumnBoundsEP13GenericVectorIPNS_15ColPartitionSetEE */
/* Demangled: tesseract::ColumnFinder::DisplayColumnBounds(GenericVector<tesseract::ColPartitionSet*>*) */
int _ZN9tesseract12ColumnFinder19DisplayColumnBoundsEP13GenericVectorIPNS_15ColPartitionSetEE(void);

/* Symbol: textord_oldbl_debug */
/* Demangled: textord_oldbl_debug */
extern void* textord_oldbl_debug;

/* Symbol: _Z15os_detect_blobsPK13GenericVectorIiEP14BLOBNBOX_CLISTP9OSResultsPN9tesseract9TesseractE */
/* Demangled: os_detect_blobs(GenericVector<int> const*, BLOBNBOX_CLIST*, OSResults*, tesseract::Tesseract*) */
int _Z15os_detect_blobsPK13GenericVectorIiEP14BLOBNBOX_CLISTP9OSResultsPN9tesseract9TesseractE(void);

/* Symbol: _ZN5CLIST13shallow_clearEv */
/* Demangled: CLIST::shallow_clear() */
int _ZN5CLIST13shallow_clearEv(void);

/* Symbol: _ZN9tesseract11CharSampSet3AddEPNS_8CharSampE */
/* Demangled: tesseract::CharSampSet::Add(tesseract::CharSamp*) */
int _ZN9tesseract11CharSampSet3AddEPNS_8CharSampE(void);

/* Symbol: _ZN9tesseract17CubeLineSegmenter8AddLinesEP4Pixa */
/* Demangled: tesseract::CubeLineSegmenter::AddLines(Pixa*) */
int _ZN9tesseract17CubeLineSegmenter8AddLinesEP4Pixa(void);

/* Symbol: _ZN9tesseract17CubeLineSegmenter8Pixa2PixEP4PixaPP3Box */
/* Demangled: tesseract::CubeLineSegmenter::Pixa2Pix(Pixa*, Box**) */
int _ZN9tesseract17CubeLineSegmenter8Pixa2PixEP4PixaPP3Box(void);

/* Symbol: _ZNSt3__16vectorIPfNS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE */
/* Demangled: std::__1::vector<float*, std::__1::allocator<float*> >::__swap_out_circular_buffer(std::__1::__split_buffer<float*, std::__1::allocator<float*>&>&) */
int _ZNSt3__16vectorIPfNS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE(void);

/* Symbol: _ZN9tesseract9Tesseract14word_deletableEP8WERD_RESRs */
/* Demangled: tesseract::Tesseract::word_deletable(WERD_RES*, short&) */
int _ZN9tesseract9Tesseract14word_deletableEP8WERD_RESRs(void);

/* Symbol: _ZN6STRINGC1Ev */
/* Demangled: STRING::STRING() */
int _ZN6STRINGC1Ev(void);

/* Symbol: _ZN9tesseract11kCrownRightE */
/* Demangled: tesseract::kCrownRight */
extern void* _ZN9tesseract11kCrownRightE;

/* Symbol: _ZN9tesseract11WordFeatureC1Ev */
/* Demangled: tesseract::WordFeature::WordFeature() */
int _ZN9tesseract11WordFeatureC1Ev(void);

/* Symbol: _ZNK7UNICHAR8utf8_strEv */
/* Demangled: UNICHAR::utf8_str() const */
int _ZNK7UNICHAR8utf8_strEv(void);

/* Symbol: _ZNK9tesseract7IntGrid13AnyZeroInRectERK4TBOX */
/* Demangled: tesseract::IntGrid::AnyZeroInRect(TBOX const&) const */
int _ZNK9tesseract7IntGrid13AnyZeroInRectERK4TBOX(void);

/* Symbol: _ZN9tesseract12ColPartition13ComputeLimitsEv */
/* Demangled: tesseract::ColPartition::ComputeLimits() */
int _ZN9tesseract12ColPartition13ComputeLimitsEv(void);

/* Symbol: _ZNK9tesseract12ColPartition15MatchingColumnsERKS0_ */
/* Demangled: tesseract::ColPartition::MatchingColumns(tesseract::ColPartition const&) const */
int _ZNK9tesseract12ColPartition15MatchingColumnsERKS0_(void);

/* Symbol: _ZNK9tesseract12PageIterator11BoundingBoxENS_17PageIteratorLevelEPiS2_S2_S2_ */
/* Demangled: tesseract::PageIterator::BoundingBox(tesseract::PageIteratorLevel, int*, int*, int*, int*) const */
int _ZNK9tesseract12PageIterator11BoundingBoxENS_17PageIteratorLevelEPiS2_S2_S2_(void);

/* Symbol: _ZN9tesseract8Classify14GetAmbiguitiesEP5TBLOBi */
/* Demangled: tesseract::Classify::GetAmbiguities(TBLOB*, int) */
int _ZN9tesseract8Classify14GetAmbiguitiesEP5TBLOBi(void);

/* Symbol: _ZN9tesseract14SampleIterator5ClearEv */
/* Demangled: tesseract::SampleIterator::Clear() */
int _ZN9tesseract14SampleIterator5ClearEv(void);

/* Symbol: _ZN9tesseract15InputFileBufferD2Ev */
/* Demangled: tesseract::InputFileBuffer::~InputFileBuffer() */
int _ZN9tesseract15InputFileBufferD2Ev(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract15ColPartitionSetEE7reserveEi */
/* Demangled: GenericVector<tesseract::ColPartitionSet*>::reserve(int) */
int _ZN13GenericVectorIPN9tesseract15ColPartitionSetEE7reserveEi(void);

/* Symbol: _ZN8TESSLINE8CopyFromERKS_ */
/* Demangled: TESSLINE::CopyFrom(TESSLINE const&) */
int _ZN8TESSLINE8CopyFromERKS_(void);

/* Symbol: _ZN13GenericVectorIsE11DeSerializeEbP7__sFILE */
/* Demangled: GenericVector<short>::DeSerialize(bool, __sFILE*) */
int _ZN13GenericVectorIsE11DeSerializeEbP7__sFILE(void);

/* Symbol: _ZN13GenericVectorItE5clearEv */
/* Demangled: GenericVector<unsigned short>::clear() */
int _ZN13GenericVectorItE5clearEv(void);

/* Symbol: _ZNK9tesseract12SquishedDawg10print_edgeEx */
/* Demangled: tesseract::SquishedDawg::print_edge(long long) const */
int _ZNK9tesseract12SquishedDawg10print_edgeEx(void);

/* Symbol: _ZN9tesseract17AlignedBlobParamsC1Eiii */
/* Demangled: tesseract::AlignedBlobParams::AlignedBlobParams(int, int, int) */
int _ZN9tesseract17AlignedBlobParamsC1Eiii(void);

/* Symbol: _ZN9tesseract13BaselineBlock19EstimateLineSpacingEv */
/* Demangled: tesseract::BaselineBlock::EstimateLineSpacing() */
int _ZN9tesseract13BaselineBlock19EstimateLineSpacingEv(void);

/* Symbol: _ZN9tesseract12ColPartition17LineSpacingBlocksERK6ICOORDS3_iPNS_17ColPartition_LISTES5_P10BLOCK_LISTP13TO_BLOCK_LIST */
/* Demangled: tesseract::ColPartition::LineSpacingBlocks(ICOORD const&, ICOORD const&, int, tesseract::ColPartition_LIST*, tesseract::ColPartition_LIST*, BLOCK_LIST*, TO_BLOCK_LIST*) */
int _ZN9tesseract12ColPartition17LineSpacingBlocksERK6ICOORDS3_iPNS_17ColPartition_LISTES5_P10BLOCK_LISTP13TO_BLOCK_LIST(void);

/* Symbol: _ZN9tesseract15TableRecognizer19set_max_text_heightEi */
/* Demangled: tesseract::TableRecognizer::set_max_text_height(int) */
int _ZN9tesseract15TableRecognizer19set_max_text_heightEi(void);

/* Symbol: _ZNK5TBLOB11NumOutlinesEv */
/* Demangled: TBLOB::NumOutlines() const */
int _ZNK5TBLOB11NumOutlinesEv(void);

/* Symbol: _ZN13GenericVectorIP4SEAMEpLERKS2_ */
/* Demangled: GenericVector<SEAM*>::operator+=(GenericVector<SEAM*> const&) */
int _ZN13GenericVectorIP4SEAMEpLERKS2_(void);

/* Symbol: _ZN13GenericVectorIN9tesseract15UnicharAndFontsEE15double_the_sizeEv */
/* Demangled: GenericVector<tesseract::UnicharAndFonts>::double_the_size() */
int _ZN13GenericVectorIN9tesseract15UnicharAndFontsEE15double_the_sizeEv(void);

/* Symbol: _ZN9tesseract8GridBaseD1Ev */
/* Demangled: tesseract::GridBase::~GridBase() */
int _ZN9tesseract8GridBaseD1Ev(void);

/* Symbol: _ZNK6DENORM20LocalDenormTransformERK6TPOINTPS0_ */
/* Demangled: DENORM::LocalDenormTransform(TPOINT const&, TPOINT*) const */
int _ZNK6DENORM20LocalDenormTransformERK6TPOINTPS0_(void);

/* Symbol: _ZN5PDBLKC1Essss */
/* Demangled: PDBLK::PDBLK(short, short, short, short) */
int _ZN5PDBLKC1Essss(void);

/* Symbol: _Z13destroy_nodesP8list_recPFvPvE */
/* Demangled: destroy_nodes(list_rec*, void (*)(void*)) */
int _Z13destroy_nodesP8list_recPFvPvE(void);

/* Symbol: _ZN9tesseract29HybridNeuralNetCharClassifier13SetLearnParamEPcf */
/* Demangled: tesseract::HybridNeuralNetCharClassifier::SetLearnParam(char*, float) */
int _ZN9tesseract29HybridNeuralNetCharClassifier13SetLearnParamEPcf(void);

/* Symbol: _ZN9tesseract15ColPartitionSet5PrintEv */
/* Demangled: tesseract::ColPartitionSet::Print() */
int _ZN9tesseract15ColPartitionSet5PrintEv(void);

/* Symbol: _ZN9tesseract7TabFind17FindAllTabVectorsEi */
/* Demangled: tesseract::TabFind::FindAllTabVectors(int) */
int _ZN9tesseract7TabFind17FindAllTabVectorsEi(void);

/* Symbol: _ZN9tesseract8Classify29StartBackupAdaptiveClassifierEv */
/* Demangled: tesseract::Classify::StartBackupAdaptiveClassifier() */
int _ZN9tesseract8Classify29StartBackupAdaptiveClassifierEv(void);

/* Symbol: _Z11Bucket16Forffi */
/* Demangled: Bucket16For(float, float, int) */
int _Z11Bucket16Forffi(void);

/* Symbol: _ZNK9tesseract13LanguageModel21GetTopLowerUpperDigitEP16BLOB_CHOICE_LISTPP11BLOB_CHOICES5_S5_ */
/* Demangled: tesseract::LanguageModel::GetTopLowerUpperDigit(BLOB_CHOICE_LIST*, BLOB_CHOICE**, BLOB_CHOICE**, BLOB_CHOICE**) const */
int _ZNK9tesseract13LanguageModel21GetTopLowerUpperDigitEP16BLOB_CHOICE_LISTPP11BLOB_CHOICES5_S5_(void);

/* Symbol: _ZN13GenericVectorI18INT_FEATURE_STRUCTE5clearEv */
/* Demangled: GenericVector<INT_FEATURE_STRUCT>::clear() */
int _ZN13GenericVectorI18INT_FEATURE_STRUCTE5clearEv(void);

/* Symbol: _ZN9tesseract10ParamUtils8SetParamEPKcS2_NS_18SetParamConstraintEPNS_13ParamsVectorsE */
/* Demangled: tesseract::ParamUtils::SetParam(char const*, char const*, tesseract::SetParamConstraint, tesseract::ParamsVectors*) */
int _ZN9tesseract10ParamUtils8SetParamEPKcS2_NS_18SetParamConstraintEPNS_13ParamsVectorsE(void);

/* Symbol: _ZN9tesseract16ImageThresholder8SetImageEPK3Pix */
/* Demangled: tesseract::ImageThresholder::SetImage(Pix const*) */
int _ZN9tesseract16ImageThresholder8SetImageEPK3Pix(void);

/* Symbol: TessResultIteratorGetUTF8Text */
/* Demangled: TessResultIteratorGetUTF8Text */
int TessResultIteratorGetUTF8Text(void);

/* Symbol: _ZNK11WERD_CHOICE12shallow_copyEii */
/* Demangled: WERD_CHOICE::shallow_copy(int, int) const */
int _ZNK11WERD_CHOICE12shallow_copyEii(void);

/* Symbol: _ZNK10UNICHARSET23get_script_id_from_nameEPKc */
/* Demangled: UNICHARSET::get_script_id_from_name(char const*) const */
int _ZNK10UNICHARSET23get_script_id_from_nameEPKc(void);

/* Symbol: _ZN11WERD_CHOICE17append_unichar_idEiiff */
/* Demangled: WERD_CHOICE::append_unichar_id(int, int, float, float) */
int _ZN11WERD_CHOICE17append_unichar_idEiiff(void);

/* Symbol: _ZN13BLOBNBOX_LIST9deep_copyEPKS_PFP8BLOBNBOXPKS2_E */
/* Demangled: BLOBNBOX_LIST::deep_copy(BLOBNBOX_LIST const*, BLOBNBOX* (*)(BLOBNBOX const*)) */
int _ZN13BLOBNBOX_LIST9deep_copyEPKS_PFP8BLOBNBOXPKS2_E(void);

/* Symbol: _ZN9tesseract9ImageDataC2EbP3Pix */
/* Demangled: tesseract::ImageData::ImageData(bool, Pix*) */
int _ZN9tesseract9ImageDataC2EbP3Pix(void);

/* Symbol: _ZNK9tesseract14ChoiceIterator11GetUTF8TextEv */
/* Demangled: tesseract::ChoiceIterator::GetUTF8Text() const */
int _ZNK9tesseract14ChoiceIterator11GetUTF8TextEv(void);

/* Symbol: _ZN9tesseract7BoxWordC2Ev */
/* Demangled: tesseract::BoxWord::BoxWord() */
int _ZN9tesseract7BoxWordC2Ev(void);

/* Symbol: _ZN7ROW_RESC1EbP3ROW */
/* Demangled: ROW_RES::ROW_RES(bool, ROW*) */
int _ZN7ROW_RESC1EbP3ROW(void);

/* Symbol: _ZN9tesseract17TrainingSampleSet13IndexFeaturesERKNS_15IntFeatureSpaceE */
/* Demangled: tesseract::TrainingSampleSet::IndexFeatures(tesseract::IntFeatureSpace const&) */
int _ZN9tesseract17TrainingSampleSet13IndexFeaturesERKNS_15IntFeatureSpaceE(void);

/* Symbol: _ZN9tesseract16CubeTuningParamsD2Ev */
/* Demangled: tesseract::CubeTuningParams::~CubeTuningParams() */
int _ZN9tesseract16CubeTuningParamsD2Ev(void);

/* Symbol: _ZN13GenericVectorIN9tesseract11ObjectCacheINS0_4DawgEE14ReferenceCountEE9push_backES4_ */
/* Demangled: GenericVector<tesseract::ObjectCache<tesseract::Dawg>::ReferenceCount>::push_back(tesseract::ObjectCache<tesseract::Dawg>::ReferenceCount) */
int _ZN13GenericVectorIN9tesseract11ObjectCacheINS0_4DawgEE14ReferenceCountEE9push_backES4_(void);

/* Symbol: _ZN9tesseract7TabFindC2EiRK6ICOORDS3_PNS_14TabVector_LISTEiii */
/* Demangled: tesseract::TabFind::TabFind(int, ICOORD const&, ICOORD const&, tesseract::TabVector_LIST*, int, int, int) */
int _ZN9tesseract7TabFindC2EiRK6ICOORDS3_PNS_14TabVector_LISTEiii(void);

/* Symbol: _ZN9tesseract9Tesseract5ClearEv */
/* Demangled: tesseract::Tesseract::Clear() */
int _ZN9tesseract9Tesseract5ClearEv(void);

/* Symbol: _ZTVN9tesseract12PageIteratorE */
/* Demangled: vtable for tesseract::PageIterator */
extern void* _ZTVN9tesseract12PageIteratorE;

/* Symbol: _ZN9tesseract14PixelHistogram28ConstructHorizontalCountHistEP3Pix */
/* Demangled: tesseract::PixelHistogram::ConstructHorizontalCountHist(Pix*) */
int _ZN9tesseract14PixelHistogram28ConstructHorizontalCountHistEP3Pix(void);

/* Symbol: _ZN9tesseract9Tesseract17cube_combine_wordEPNS_10CubeObjectEP8WERD_RESS4_ */
/* Demangled: tesseract::Tesseract::cube_combine_word(tesseract::CubeObject*, WERD_RES*, WERD_RES*) */
int _ZN9tesseract9Tesseract17cube_combine_wordEPNS_10CubeObjectEP8WERD_RESS4_(void);

/* Symbol: _ZNK9tesseract9ImageData7DisplayEv */
/* Demangled: tesseract::ImageData::Display() const */
int _ZNK9tesseract9ImageData7DisplayEv(void);

/* Symbol: _ZNSt3__112__hash_tableIP8BLOBNBOXN9tesseract7PtrHashIS1_EENS_8equal_toIS2_EENS_9allocatorIS2_EEE8__rehashEj */
/* Demangled: std::__1::__hash_table<BLOBNBOX*, tesseract::PtrHash<BLOBNBOX>, std::__1::equal_to<BLOBNBOX*>, std::__1::allocator<BLOBNBOX*> >::__rehash(unsigned int) */
int _ZNSt3__112__hash_tableIP8BLOBNBOXN9tesseract7PtrHashIS1_EENS_8equal_toIS2_EENS_9allocatorIS2_EEE8__rehashEj(void);

/* Symbol: _ZNK4TBOX9SerializeEP7__sFILE */
/* Demangled: TBOX::Serialize(__sFILE*) const */
int _ZNK4TBOX9SerializeEP7__sFILE(void);

/* Symbol: _ZN9tesseract18ShiroRekhaSplitter19SplitWordShiroRekhaENS0_13SplitStrategyEP3PixiiiP4Boxa */
/* Demangled: tesseract::ShiroRekhaSplitter::SplitWordShiroRekha(tesseract::ShiroRekhaSplitter::SplitStrategy, Pix*, int, int, int, Boxa*) */
int _ZN9tesseract18ShiroRekhaSplitter19SplitWordShiroRekhaENS0_13SplitStrategyEP3PixiiiP4Boxa(void);

/* Symbol: _ZNK9tesseract11TessBaseAPI26GetLoadedLanguagesAsVectorEP13GenericVectorI6STRINGE */
/* Demangled: tesseract::TessBaseAPI::GetLoadedLanguagesAsVector(GenericVector<STRING>*) const */
int _ZNK9tesseract11TessBaseAPI26GetLoadedLanguagesAsVectorEP13GenericVectorI6STRINGE(void);

/* Symbol: _ZN9tesseract9Tesseract24ComputeCompatibleXheightEP8WERD_RESPf */
/* Demangled: tesseract::Tesseract::ComputeCompatibleXheight(WERD_RES*, float*) */
int _ZN9tesseract9Tesseract24ComputeCompatibleXheightEP8WERD_RESPf(void);

/* Symbol: _ZN9tesseract17GeometricClassifyEiP13GenericVectorINS_19RowScratchRegistersEEiiPNS_15ParagraphTheoryE */
/* Demangled: tesseract::GeometricClassify(int, GenericVector<tesseract::RowScratchRegisters>*, int, int, tesseract::ParagraphTheory*) */
int _ZN9tesseract17GeometricClassifyEiP13GenericVectorINS_19RowScratchRegistersEEiiPNS_15ParagraphTheoryE(void);

/* Symbol: _ZN3REJ20rej_before_mm_acceptEv */
/* Demangled: REJ::rej_before_mm_accept() */
int _ZN3REJ20rej_before_mm_acceptEv(void);

/* Symbol: _ZN9tesseract9NeuralNet13CreateFastNetEv */
/* Demangled: tesseract::NeuralNet::CreateFastNet() */
int _ZN9tesseract9NeuralNet13CreateFastNetEv(void);

/* Symbol: _ZN9tesseract9TabVector5PrintEPKc */
/* Demangled: tesseract::TabVector::Print(char const*) */
int _ZN9tesseract9TabVector5PrintEPKc(void);

/* Symbol: _ZN9tesseract15TableRecognizer19HasSignificantLinesERK4TBOX */
/* Demangled: tesseract::TableRecognizer::HasSignificantLines(TBOX const&) */
int _ZN9tesseract15TableRecognizer19HasSignificantLinesERK4TBOX(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract11WordWithBoxEE9push_backES2_ */
/* Demangled: GenericVector<tesseract::WordWithBox*>::push_back(tesseract::WordWithBox*) */
int _ZN13GenericVectorIPN9tesseract11WordWithBoxEE9push_backES2_(void);

/* Symbol: _ZN9tesseract7Textord17make_a_word_breakEP6TO_ROW4TBOXsS3_ssS3_sRhS4_S4_S4_S4_ */
/* Demangled: tesseract::Textord::make_a_word_break(TO_ROW*, TBOX, short, TBOX, short, short, TBOX, short, unsigned char&, unsigned char&, unsigned char&, unsigned char&, unsigned char&) */
int _ZN9tesseract7Textord17make_a_word_breakEP6TO_ROW4TBOXsS3_ssS3_sRhS4_S4_S4_S4_(void);

/* Symbol: _ZN9tesseract18LanguageModelState5PrintEPKc */
/* Demangled: tesseract::LanguageModelState::Print(char const*) */
int _ZN9tesseract18LanguageModelState5PrintEPKc(void);

/* Symbol: _ZN9tesseract18CubeTessClassifier21UnicharClassifySampleERKNS_14TrainingSampleEP3PixiiP13GenericVectorINS_13UnicharRatingEE */
/* Demangled: tesseract::CubeTessClassifier::UnicharClassifySample(tesseract::TrainingSample const&, Pix*, int, int, GenericVector<tesseract::UnicharRating>*) */
int _ZN9tesseract18CubeTessClassifier21UnicharClassifySampleERKNS_14TrainingSampleEP3PixiiP13GenericVectorINS_13UnicharRatingEE(void);

/* Symbol: _ZN9tesseract6cmp_eqIiEEbRKT_S3_ */
/* Demangled: bool tesseract::cmp_eq<int>(int const&, int const&) */
int _ZN9tesseract6cmp_eqIiEEbRKT_S3_(void);

/* Symbol: _ZN9tesseract13MasterTrainer12LoadFontInfoEPKc */
/* Demangled: tesseract::MasterTrainer::LoadFontInfo(char const*) */
int _ZN9tesseract13MasterTrainer12LoadFontInfoEPKc(void);

/* Symbol: _ZN9tesseract17CubeLineSegmenter7kMinWidE */
/* Demangled: tesseract::CubeLineSegmenter::kMinWid */
extern void* _ZN9tesseract17CubeLineSegmenter7kMinWidE;

/* Symbol: _ZNK9tesseract14TrainingSample12GetCNFeatureEv */
/* Demangled: tesseract::TrainingSample::GetCNFeature() const */
int _ZNK9tesseract14TrainingSample12GetCNFeatureEv(void);

/* Symbol: _ZN9tesseract7Wordrec13chop_one_blobERK13GenericVectorI4TBOXERKS1_IP11BLOB_CHOICEEP8WERD_RESPi */
/* Demangled: tesseract::Wordrec::chop_one_blob(GenericVector<TBOX> const&, GenericVector<BLOB_CHOICE*> const&, WERD_RES*, int*) */
int _ZN9tesseract7Wordrec13chop_one_blobERK13GenericVectorI4TBOXERKS1_IP11BLOB_CHOICEEP8WERD_RESPi(void);

/* Symbol: _ZN9tesseract9Tesseract16ResegmentWordBoxEP10BLOCK_LISTRK4TBOXS5_PKc */
/* Demangled: tesseract::Tesseract::ResegmentWordBox(BLOCK_LIST*, TBOX const&, TBOX const&, char const*) */
int _ZN9tesseract9Tesseract16ResegmentWordBoxEP10BLOCK_LISTRK4TBOXS5_PKc(void);

/* Symbol: _ZNK9tesseract12PageIterator16IsAtFinalElementENS_17PageIteratorLevelES1_ */
/* Demangled: tesseract::PageIterator::IsAtFinalElement(tesseract::PageIteratorLevel, tesseract::PageIteratorLevel) const */
int _ZNK9tesseract12PageIterator16IsAtFinalElementENS_17PageIteratorLevelES1_(void);

/* Symbol: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeMeanConfidence */
/* Demangled: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeMeanConfidence */
int Java_com_googlecode_tesseract_android_TessBaseAPI_nativeMeanConfidence(void);

/* Symbol: _ZN13GenericVectorIN9tesseract7ClusterEE9push_backES1_ */
/* Demangled: GenericVector<tesseract::Cluster>::push_back(tesseract::Cluster) */
int _ZN13GenericVectorIN9tesseract7ClusterEE9push_backES1_(void);

/* Symbol: _ZN9tesseract11TableFinder21InsertRulingPartitionEPNS_12ColPartitionE */
/* Demangled: tesseract::TableFinder::InsertRulingPartition(tesseract::ColPartition*) */
int _ZN9tesseract11TableFinder21InsertRulingPartitionEPNS_12ColPartitionE(void);

/* Symbol: _ZN9tesseract15TableRecognizer19RecognizeLinedTableERK4TBOXPNS_15StructuredTableE */
/* Demangled: tesseract::TableRecognizer::RecognizeLinedTable(TBOX const&, tesseract::StructuredTable*) */
int _ZN9tesseract15TableRecognizer19RecognizeLinedTableERK4TBOXPNS_15StructuredTableE(void);

/* Symbol: _ZN9tesseract13LanguageModel20AddViterbiStateEntryEhfbiiP11BLOB_CHOICEPNS_18LanguageModelStateEPNS_17ViterbiStateEntryEPNS_12LMPainPointsEP8WERD_RESPNS_16BestChoiceBundleEP12BlamerBundle */
/* Demangled: tesseract::LanguageModel::AddViterbiStateEntry(unsigned char, float, bool, int, int, BLOB_CHOICE*, tesseract::LanguageModelState*, tesseract::ViterbiStateEntry*, tesseract::LMPainPoints*, WERD_RES*, tesseract::BestChoiceBundle*, BlamerBundle*) */
int _ZN9tesseract13LanguageModel20AddViterbiStateEntryEhfbiiP11BLOB_CHOICEPNS_18LanguageModelStateEPNS_17ViterbiStateEntryEPNS_12LMPainPointsEP8WERD_RESPNS_16BestChoiceBundleEP12BlamerBundle(void);

/* Symbol: _ZN9tesseract9Tesseract20tess_acceptable_wordEP8WERD_RES */
/* Demangled: tesseract::Tesseract::tess_acceptable_word(WERD_RES*) */
int _ZN9tesseract9Tesseract20tess_acceptable_wordEP8WERD_RES(void);

/* Symbol: _ZNK9tesseract10BeamSearch9BackTrackEPNS_12SearchObjectEiPiPS3_PP4Boxa */
/* Demangled: tesseract::BeamSearch::BackTrack(tesseract::SearchObject*, int, int*, int**, Boxa**) const */
int _ZNK9tesseract10BeamSearch9BackTrackEPNS_12SearchObjectEiPiPS3_PP4Boxa(void);

/* Symbol: _ZN4LLSQ3addEddd */
/* Demangled: LLSQ::add(double, double, double) */
int _ZN4LLSQ3addEddd(void);

/* Symbol: _ZNK4SEAM6RevealEv */
/* Demangled: SEAM::Reveal() const */
int _ZNK4SEAM6RevealEv(void);

/* Symbol: _Z23KDNearestNeighborSearchP6KDTREEPfifPiPPvS1_ */
/* Demangled: KDNearestNeighborSearch(KDTREE*, float*, int, float, int*, void**, float*) */
int _Z23KDNearestNeighborSearchP6KDTREEPfifPiPPvS1_(void);

/* Symbol: _ZN11PAGE_RES_IT20MakeCurrentWordFuzzyEv */
/* Demangled: PAGE_RES_IT::MakeCurrentWordFuzzy() */
int _ZN11PAGE_RES_IT20MakeCurrentWordFuzzyEv(void);

/* Symbol: _ZN9tesseract21TesseractCubeCombiner9ValidWordERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: tesseract::TesseractCubeCombiner::ValidWord(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN9tesseract21TesseractCubeCombiner9ValidWordERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN6TO_ROWC1EP8BLOBNBOXfff */
/* Demangled: TO_ROW::TO_ROW(BLOBNBOX*, float, float, float) */
int _ZN6TO_ROWC1EP8BLOBNBOXfff(void);

/* Symbol: _ZNK9tesseract17TrainingSampleSet15NumClassSamplesEiib */
/* Demangled: tesseract::TrainingSampleSet::NumClassSamples(int, int, bool) const */
int _ZNK9tesseract17TrainingSampleSet15NumClassSamplesEiib(void);

/* Symbol: _ZN9tesseract15StructuredTable28CountHorizontalIntersectionsEi */
/* Demangled: tesseract::StructuredTable::CountHorizontalIntersections(int) */
int _ZN9tesseract15StructuredTable28CountHorizontalIntersectionsEi(void);

/* Symbol: _ZN9tesseract15TessTsvRendererC2EPKc */
/* Demangled: tesseract::TessTsvRenderer::TessTsvRenderer(char const*) */
int _ZN9tesseract15TessTsvRendererC2EPKc(void);

/* Symbol: _ZN13GenericVectorIP13BLOBNBOX_LISTE9push_backES1_ */
/* Demangled: GenericVector<BLOBNBOX_LIST*>::push_back(BLOBNBOX_LIST*) */
int _ZN13GenericVectorIP13BLOBNBOX_LISTE9push_backES1_(void);

/* Symbol: _ZNK9tesseract19RowScratchRegisters11GetLineTypeEPK14ParagraphModel */
/* Demangled: tesseract::RowScratchRegisters::GetLineType(ParagraphModel const*) const */
int _ZNK9tesseract19RowScratchRegisters11GetLineTypeEPK14ParagraphModel(void);

/* Symbol: _Z20decreasing_top_orderPKvS0_ */
/* Demangled: decreasing_top_order(void const*, void const*) */
int _Z20decreasing_top_orderPKvS0_(void);

/* Symbol: _ZN9tesseract8ClassifyD0Ev */
/* Demangled: tesseract::Classify::~Classify() */
int _ZN9tesseract8ClassifyD0Ev(void);

/* Symbol: _ZN9tesseract16ColPartitionGridC1Ev */
/* Demangled: tesseract::ColPartitionGrid::ColPartitionGrid() */
int _ZN9tesseract16ColPartitionGridC1Ev(void);

/* Symbol: _ZN8WERD_RES23InitForRetryRecognitionERKS_ */
/* Demangled: WERD_RES::InitForRetryRecognition(WERD_RES const&) */
int _ZN8WERD_RES23InitForRetryRecognitionERKS_(void);

/* Symbol: _ZNK13GenericVectorIN9tesseract8FontInfoEE3getEi */
/* Demangled: GenericVector<tesseract::FontInfo>::get(int) const */
int _ZNK13GenericVectorIN9tesseract8FontInfoEE3getEi(void);

/* Symbol: _ZN13GenericVectorIP4SEAME20delete_data_pointersEv */
/* Demangled: GenericVector<SEAM*>::delete_data_pointers() */
int _ZN13GenericVectorIP4SEAME20delete_data_pointersEv(void);

/* Symbol: _ZTVN9tesseract7AltListE */
/* Demangled: vtable for tesseract::AltList */
extern void* _ZTVN9tesseract7AltListE;

/* Symbol: _ZN3ROW5printEP7__sFILE */
/* Demangled: ROW::print(__sFILE*) */
int _ZN3ROW5printEP7__sFILE(void);

/* Symbol: _ZN13GenericVectorIN9tesseract8FontInfoEE7reserveEi */
/* Demangled: GenericVector<tesseract::FontInfo>::reserve(int) */
int _ZN13GenericVectorIN9tesseract8FontInfoEE7reserveEi(void);

/* Symbol: _ZN13GenericVectorIcE15SkipDeSerializeEbPN9tesseract5TFileE */
/* Demangled: GenericVector<char>::SkipDeSerialize(bool, tesseract::TFile*) */
int _ZN13GenericVectorIcE15SkipDeSerializeEbPN9tesseract5TFileE(void);

/* Symbol: _ZN9tesseract10SearchNodeD2Ev */
/* Demangled: tesseract::SearchNode::~SearchNode() */
int _ZN9tesseract10SearchNodeD2Ev(void);

/* Symbol: _ZN13GenericVectorIP3PixE15double_the_sizeEv */
/* Demangled: GenericVector<Pix*>::double_the_size() */
int _ZN13GenericVectorIP3PixE15double_the_sizeEv(void);

/* Symbol: _ZN9tesseract10ShapeTableC2Ev */
/* Demangled: tesseract::ShapeTable::ShapeTable() */
int _ZN9tesseract10ShapeTableC2Ev(void);

/* Symbol: _ZN9tesseract11TessBaseAPI3EndEv */
/* Demangled: tesseract::TessBaseAPI::End() */
int _ZN9tesseract11TessBaseAPI3EndEv(void);

/* Symbol: _ZN9tesseract15TessOsdRendererC1EPKc */
/* Demangled: tesseract::TessOsdRenderer::TessOsdRenderer(char const*) */
int _ZN9tesseract15TessOsdRendererC1EPKc(void);

/* Symbol: _ZN9tesseract18CubeTessClassifierD1Ev */
/* Demangled: tesseract::CubeTessClassifier::~CubeTessClassifier() */
int _ZN9tesseract18CubeTessClassifierD1Ev(void);

/* Symbol: _ZN8WERD_RES12ClearResultsEv */
/* Demangled: WERD_RES::ClearResults() */
int _ZN8WERD_RES12ClearResultsEv(void);

/* Symbol: _ZNK9tesseract12PageIterator3CmpERKS0_ */
/* Demangled: tesseract::PageIterator::Cmp(tesseract::PageIterator const&) const */
int _ZNK9tesseract12PageIterator3CmpERKS0_(void);

/* Symbol: _ZN3REJ16setrej_small_xhtEv */
/* Demangled: REJ::setrej_small_xht() */
int _ZN3REJ16setrej_small_xhtEv(void);

/* Symbol: _Z10NewFeaturePK19FEATURE_DESC_STRUCT */
/* Demangled: NewFeature(FEATURE_DESC_STRUCT const*) */
int _Z10NewFeaturePK19FEATURE_DESC_STRUCT(void);

/* Symbol: _ZN9tesseract14SampleIterator5BeginEv */
/* Demangled: tesseract::SampleIterator::Begin() */
int _ZN9tesseract14SampleIterator5BeginEv(void);

/* Symbol: _ZN13GenericVectorIP16BLOB_CHOICE_LISTE20delete_data_pointersEv */
/* Demangled: GenericVector<BLOB_CHOICE_LIST*>::delete_data_pointers() */
int _ZN13GenericVectorIP16BLOB_CHOICE_LISTE20delete_data_pointersEv(void);

/* Symbol: _ZN3REJ21setrej_bad_repetitionEv */
/* Demangled: REJ::setrej_bad_repetition() */
int _ZN3REJ21setrej_bad_repetitionEv(void);

/* Symbol: _ZN9tesseract8Classify19GetAdaptiveFeaturesEP5TBLOBP18INT_FEATURE_STRUCTPP18FEATURE_SET_STRUCT */
/* Demangled: tesseract::Classify::GetAdaptiveFeatures(TBLOB*, INT_FEATURE_STRUCT*, FEATURE_SET_STRUCT**) */
int _ZN9tesseract8Classify19GetAdaptiveFeaturesEP5TBLOBP18INT_FEATURE_STRUCTPP18FEATURE_SET_STRUCT(void);

/* Symbol: _ZN13GenericVectorIxE15double_the_sizeEv */
/* Demangled: GenericVector<long long>::double_the_size() */
int _ZN13GenericVectorIxE15double_the_sizeEv(void);

/* Symbol: _ZN9tesseract10GridSearchINS_10ColSegmentENS_16ColSegment_CLISTENS_15ColSegment_C_ITEE15StartRectSearchERK4TBOX */
/* Demangled: tesseract::GridSearch<tesseract::ColSegment, tesseract::ColSegment_CLIST, tesseract::ColSegment_C_IT>::StartRectSearch(TBOX const&) */
int _ZN9tesseract10GridSearchINS_10ColSegmentENS_16ColSegment_CLISTENS_15ColSegment_C_ITEE15StartRectSearchERK4TBOX(void);

/* Symbol: _ZNSt3__112__hash_tableIPN9tesseract10ColSegmentENS1_7PtrHashIS2_EENS_8equal_toIS3_EENS_9allocatorIS3_EEE4findIS3_EENS_15__hash_iteratorIPNS_11__hash_nodeIS3_PvEEEERKT_ */
/* Demangled: std::__1::__hash_iterator<std::__1::__hash_node<tesseract::ColSegment*, void*>*> std::__1::__hash_table<tesseract::ColSegment*, tesseract::PtrHash<tesseract::ColSegment>, std::__1::equal_to<tesseract::ColSegment*>, std::__1::allocator<tesseract::ColSegment*> >::find<tesseract::ColSegment*>(tesseract::ColSegment* const&) */
int _ZNSt3__112__hash_tableIPN9tesseract10ColSegmentENS1_7PtrHashIS2_EENS_8equal_toIS3_EENS_9allocatorIS3_EEE4findIS3_EENS_15__hash_iteratorIPNS_11__hash_nodeIS3_PvEEEERKT_(void);

/* Symbol: _ZN9tesseract12ColPartition10AddPartnerEbPS0_ */
/* Demangled: tesseract::ColPartition::AddPartner(bool, tesseract::ColPartition*) */
int _ZN9tesseract12ColPartition10AddPartnerEbPS0_(void);

/* Symbol: _ZN9tesseract11TableFinder15GetTableColumnsEPNS_15ColSegment_LISTE */
/* Demangled: tesseract::TableFinder::GetTableColumns(tesseract::ColSegment_LIST*) */
int _ZN9tesseract11TableFinder15GetTableColumnsEPNS_15ColSegment_LISTE(void);

/* Symbol: _ZN9tesseract15ParagraphTheory19DiscardUnusedModelsERK17GenericVectorEqEqIPK14ParagraphModelE */
/* Demangled: tesseract::ParagraphTheory::DiscardUnusedModels(GenericVectorEqEq<ParagraphModel const*> const&) */
int _ZN9tesseract15ParagraphTheory19DiscardUnusedModelsERK17GenericVectorEqEqIPK14ParagraphModelE(void);

/* Symbol: _ZN6MATRIX20ConsumeAndMakeBiggerEi */
/* Demangled: MATRIX::ConsumeAndMakeBigger(int) */
int _ZN6MATRIX20ConsumeAndMakeBiggerEi(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract13BaselineBlockEE9push_backES2_ */
/* Demangled: GenericVector<tesseract::BaselineBlock*>::push_back(tesseract::BaselineBlock*) */
int _ZN13GenericVectorIPN9tesseract13BaselineBlockEE9push_backES2_(void);

/* Symbol: _ZN9tesseract11StrokeWidth20MarkLeaderNeighboursEPKNS_12ColPartitionENS_11LeftOrRightE */
/* Demangled: tesseract::StrokeWidth::MarkLeaderNeighbours(tesseract::ColPartition const*, tesseract::LeftOrRight) */
int _ZN9tesseract11StrokeWidth20MarkLeaderNeighboursEPKNS_12ColPartitionENS_11LeftOrRightE(void);

/* Symbol: _ZN9tesseract11TableFinder17GroupColumnBlocksEPNS_15ColSegment_LISTES2_ */
/* Demangled: tesseract::TableFinder::GroupColumnBlocks(tesseract::ColSegment_LIST*, tesseract::ColSegment_LIST*) */
int _ZN9tesseract11TableFinder17GroupColumnBlocksEPNS_15ColSegment_LISTES2_(void);

/* Symbol: _ZN9tesseract12LMPainPoints16GenerateFromPathEfPNS_17ViterbiStateEntryEP8WERD_RES */
/* Demangled: tesseract::LMPainPoints::GenerateFromPath(float, tesseract::ViterbiStateEntry*, WERD_RES*) */
int _ZN9tesseract12LMPainPoints16GenerateFromPathEfPNS_17ViterbiStateEntryEP8WERD_RES(void);

/* Symbol: _ZN5TBLOB9NormalizeEPK5BLOCKPK6FCOORDPK6DENORMffffffbP3Pix */
/* Demangled: TBLOB::Normalize(BLOCK const*, FCOORD const*, DENORM const*, float, float, float, float, float, float, bool, Pix*) */
int _ZN5TBLOB9NormalizeEPK5BLOCKPK6FCOORDPK6DENORMffffffbP3Pix(void);

/* Symbol: _ZN8WERD_RES22SetupBlobWidthsAndGapsEv */
/* Demangled: WERD_RES::SetupBlobWidthsAndGaps() */
int _ZN8WERD_RES22SetupBlobWidthsAndGapsEv(void);

/* Symbol: _Z23compute_fixed_pitch_cjk6ICOORDP13TO_BLOCK_LIST */
/* Demangled: compute_fixed_pitch_cjk(ICOORD, TO_BLOCK_LIST*) */
int _Z23compute_fixed_pitch_cjk6ICOORDP13TO_BLOCK_LIST(void);

/* Symbol: _Z11PARA_zapperP10ELIST_LINK */
/* Demangled: PARA_zapper(ELIST_LINK*) */
int _Z11PARA_zapperP10ELIST_LINK(void);

/* Symbol: _ZN6C_BLOBC1EP14C_OUTLINE_LIST */
/* Demangled: C_BLOB::C_BLOB(C_OUTLINE_LIST*) */
int _ZN6C_BLOBC1EP14C_OUTLINE_LIST(void);

/* Symbol: _ZN9tesseract10DetLineFit14ConstrainedFitERK6FCOORDddbP6ICOORD */
/* Demangled: tesseract::DetLineFit::ConstrainedFit(FCOORD const&, double, double, bool, ICOORD*) */
int _ZN9tesseract10DetLineFit14ConstrainedFitERK6FCOORDddbP6ICOORD(void);

/* Symbol: classify_cp_angle_pad_tight */
/* Demangled: classify_cp_angle_pad_tight */
extern void* classify_cp_angle_pad_tight;

/* Symbol: _ZN9tesseract5Shape8AddShapeERKS0_ */
/* Demangled: tesseract::Shape::AddShape(tesseract::Shape const&) */
int _ZN9tesseract5Shape8AddShapeERKS0_(void);

/* Symbol: _ZN9tesseract18ShiroRekhaSplitterD2Ev */
/* Demangled: tesseract::ShiroRekhaSplitter::~ShiroRekhaSplitter() */
int _ZN9tesseract18ShiroRekhaSplitterD2Ev(void);

/* Symbol: _ZN9tesseract11TessBaseAPI19SetSourceResolutionEi */
/* Demangled: tesseract::TessBaseAPI::SetSourceResolution(int) */
int _ZN9tesseract11TessBaseAPI19SetSourceResolutionEi(void);

/* Symbol: _Z7KDStoreP6KDTREEPfPv */
/* Demangled: KDStore(KDTREE*, float*, void*) */
int _Z7KDStoreP6KDTREEPfPv(void);

/* Symbol: _ZN9tesseract14IntFeatureDistC2Ev */
/* Demangled: tesseract::IntFeatureDist::IntFeatureDist() */
int _ZN9tesseract14IntFeatureDistC2Ev(void);

/* Symbol: _ZN13GenericVectorIN9tesseract9NodeChildEE9push_backES1_ */
/* Demangled: GenericVector<tesseract::NodeChild>::push_back(tesseract::NodeChild) */
int _ZN13GenericVectorIN9tesseract9NodeChildEE9push_backES1_(void);

/* Symbol: _ZNK9tesseract18ShiroRekhaSplitter13GetBoxForTBOXERK4TBOX */
/* Demangled: tesseract::ShiroRekhaSplitter::GetBoxForTBOX(TBOX const&) const */
int _ZNK9tesseract18ShiroRekhaSplitter13GetBoxForTBOXERK4TBOX(void);

/* Symbol: _Z13fix_row_pitchP6TO_ROWP8TO_BLOCKP13TO_BLOCK_LISTii */
/* Demangled: fix_row_pitch(TO_ROW*, TO_BLOCK*, TO_BLOCK_LIST*, int, int) */
int _Z13fix_row_pitchP6TO_ROWP8TO_BLOCKP13TO_BLOCK_LISTii(void);

/* Symbol: _ZN10UNICHARMAP15UNICHARMAP_NODEC1Ev */
/* Demangled: UNICHARMAP::UNICHARMAP_NODE::UNICHARMAP_NODE() */
int _ZN10UNICHARMAP15UNICHARMAP_NODEC1Ev(void);

/* Symbol: _ZN9tesseract32textord_tabfind_show_initialtabsE */
/* Demangled: tesseract::textord_tabfind_show_initialtabs */
extern void* _ZN9tesseract32textord_tabfind_show_initialtabsE;

/* Symbol: _ZN9tesseract4Dict15GlobalDawgCacheEv */
/* Demangled: tesseract::Dict::GlobalDawgCache() */
int _ZN9tesseract4Dict15GlobalDawgCacheEv(void);

/* Symbol: _ZNK8BLOBNBOX19MatchingStrokeWidthERKS_dd */
/* Demangled: BLOBNBOX::MatchingStrokeWidth(BLOBNBOX const&, double, double) const */
int _ZNK8BLOBNBOX19MatchingStrokeWidthERKS_dd(void);

/* Symbol: _ZNK9C_OUTLINE4areaEv */
/* Demangled: C_OUTLINE::area() const */
int _ZNK9C_OUTLINE4areaEv(void);

/* Symbol: _ZNK10UNICHARSET13unichar_to_idEPKc */
/* Demangled: UNICHARSET::unichar_to_id(char const*) const */
int _ZNK10UNICHARSET13unichar_to_idEPKc(void);

/* Symbol: _ZN9tesseract9Tesseract12garbage_wordEP8WERD_RESh */
/* Demangled: tesseract::Tesseract::garbage_word(WERD_RES*, unsigned char) */
int _ZN9tesseract9Tesseract12garbage_wordEP8WERD_RESh(void);

/* Symbol: _ZNK4SEAM9IsHealthyERK5TBLOBii */
/* Demangled: SEAM::IsHealthy(TBLOB const&, int, int) const */
int _ZNK4SEAM9IsHealthyERK5TBLOBii(void);

/* Symbol: _ZN9tesseract9BitVectorD2Ev */
/* Demangled: tesseract::BitVector::~BitVector() */
int _ZN9tesseract9BitVectorD2Ev(void);

/* Symbol: _ZN9tesseract13MasterTrainer16PreTrainingSetupEv */
/* Demangled: tesseract::MasterTrainer::PreTrainingSetup() */
int _ZN9tesseract13MasterTrainer16PreTrainingSetupEv(void);

/* Symbol: _ZN9tesseract10FeatureBmpD2Ev */
/* Demangled: tesseract::FeatureBmp::~FeatureBmp() */
int _ZN9tesseract10FeatureBmpD2Ev(void);

/* Symbol: _ZN9tesseract17WordListLangModel11AddString32EPKi */
/* Demangled: tesseract::WordListLangModel::AddString32(int const*) */
int _ZN9tesseract17WordListLangModel11AddString32EPKi(void);

/* Symbol: _ZN9tesseract7IntGridD0Ev */
/* Demangled: tesseract::IntGrid::~IntGrid() */
int _ZN9tesseract7IntGridD0Ev(void);

/* Symbol: _ZN9tesseract11StrokeWidthD0Ev */
/* Demangled: tesseract::StrokeWidth::~StrokeWidth() */
int _ZN9tesseract11StrokeWidthD0Ev(void);

/* Symbol: _ZN9tesseract11TableFinder16BelongToOneTableERK4TBOXS3_ */
/* Demangled: tesseract::TableFinder::BelongToOneTable(TBOX const&, TBOX const&) */
int _ZN9tesseract11TableFinder16BelongToOneTableERK4TBOXS3_(void);

/* Symbol: _ZN13GenericVectorIlE5clearEv */
/* Demangled: GenericVector<long>::clear() */
int _ZN13GenericVectorIlE5clearEv(void);

/* Symbol: _ZN3REJ22accept_if_good_qualityEv */
/* Demangled: REJ::accept_if_good_quality() */
int _ZN3REJ22accept_if_good_qualityEv(void);

/* Symbol: _ZN5ELIST17assign_to_sublistEP14ELIST_ITERATORS1_ */
/* Demangled: ELIST::assign_to_sublist(ELIST_ITERATOR*, ELIST_ITERATOR*) */
int _ZN5ELIST17assign_to_sublistEP14ELIST_ITERATORS1_(void);

/* Symbol: _Z11ReadNFloatsP7__sFILEtPf */
/* Demangled: ReadNFloats(__sFILE*, unsigned short, float*) */
int _Z11ReadNFloatsP7__sFILEtPf(void);

/* Symbol: _ZN9tesseract14SampleIterator14UniformSamplesEv */
/* Demangled: tesseract::SampleIterator::UniformSamples() */
int _ZN9tesseract14SampleIterator14UniformSamplesEv(void);

/* Symbol: textord_pitch_range */
/* Demangled: textord_pitch_range */
extern void* textord_pitch_range;

/* Symbol: _ZN9tesseract8Classify22InitAdaptiveClassifierEb */
/* Demangled: tesseract::Classify::InitAdaptiveClassifier(bool) */
int _ZN9tesseract8Classify22InitAdaptiveClassifierEb(void);

/* Symbol: _ZN8WERD_RES16FakeClassifyWordEiPP11BLOB_CHOICE */
/* Demangled: WERD_RES::FakeClassifyWord(int, BLOB_CHOICE**) */
int _ZN8WERD_RES16FakeClassifyWordEiPP11BLOB_CHOICE(void);

/* Symbol: _ZNK9C_OUTLINE14turn_directionEv */
/* Demangled: C_OUTLINE::turn_direction() const */
int _ZNK9C_OUTLINE14turn_directionEv(void);

/* Symbol: _ZN13BLOCK_RECT_ITC2EP5PDBLK */
/* Demangled: BLOCK_RECT_IT::BLOCK_RECT_IT(PDBLK*) */
int _ZN13BLOCK_RECT_ITC2EP5PDBLK(void);

/* Symbol: _ZN9tesseract12SquishedDawgD2Ev */
/* Demangled: tesseract::SquishedDawg::~SquishedDawg() */
int _ZN9tesseract12SquishedDawgD2Ev(void);

/* Symbol: _ZN9tesseract10GridSearchI8BLOBNBOX14BLOBNBOX_CLIST13BLOBNBOX_C_ITE14NextSideSearchEb */
/* Demangled: tesseract::GridSearch<BLOBNBOX, BLOBNBOX_CLIST, BLOBNBOX_C_IT>::NextSideSearch(bool) */
int _ZN9tesseract10GridSearchI8BLOBNBOX14BLOBNBOX_CLIST13BLOBNBOX_C_ITE14NextSideSearchEb(void);

/* Symbol: _ZN13GenericVectorI6STRINGE18DeSerializeClassesEbPN9tesseract5TFileE */
/* Demangled: GenericVector<STRING>::DeSerializeClasses(bool, tesseract::TFile*) */
int _ZN13GenericVectorI6STRINGE18DeSerializeClassesEbPN9tesseract5TFileE(void);

/* Symbol: _ZN9tesseract12ColumnFinderD1Ev */
/* Demangled: tesseract::ColumnFinder::~ColumnFinder() */
int _ZN9tesseract12ColumnFinderD1Ev(void);

/* Symbol: _ZN9tesseract4Dict10FinishLoadEv */
/* Demangled: tesseract::Dict::FinishLoad() */
int _ZN9tesseract4Dict10FinishLoadEv(void);

/* Symbol: _ZN5STATSC1Ev */
/* Demangled: STATS::STATS() */
int _ZN5STATSC1Ev(void);

/* Symbol: _ZN5TBLOB5ScaleEf */
/* Demangled: TBLOB::Scale(float) */
int _ZN5TBLOB5ScaleEf(void);

/* Symbol: _ZN9tesseract9NeuralNet11FeedForwardIfEEbPKT_PS2_ */
/* Demangled: bool tesseract::NeuralNet::FeedForward<float>(float const*, float*) */
int _ZN9tesseract9NeuralNet11FeedForwardIfEEbPKT_PS2_(void);

/* Symbol: _ZN9tesseract13LanguageModelC1EPK12UnicityTableINS_8FontInfoEEPNS_4DictE */
/* Demangled: tesseract::LanguageModel::LanguageModel(UnicityTable<tesseract::FontInfo> const*, tesseract::Dict*) */
int _ZN9tesseract13LanguageModelC1EPK12UnicityTableINS_8FontInfoEEPNS_4DictE(void);

/* Symbol: _Z15AddAdaptedClassP22ADAPT_TEMPLATES_STRUCTP18ADAPT_CLASS_STRUCTi */
/* Demangled: AddAdaptedClass(ADAPT_TEMPLATES_STRUCT*, ADAPT_CLASS_STRUCT*, int) */
int _Z15AddAdaptedClassP22ADAPT_TEMPLATES_STRUCTP18ADAPT_CLASS_STRUCTi(void);

/* Symbol: _ZNK9tesseract4Bmp830MeanHorizontalHistogramEntropyEv */
/* Demangled: tesseract::Bmp8::MeanHorizontalHistogramEntropy() const */
int _ZNK9tesseract4Bmp830MeanHorizontalHistogramEntropyEv(void);

/* Symbol: _ZN9tesseract10ColSegment9InsertBoxERK4TBOX */
/* Demangled: tesseract::ColSegment::InsertBox(TBOX const&) */
int _ZN9tesseract10ColSegment9InsertBoxERK4TBOX(void);

/* Symbol: _ZN9tesseract11TableFinder21GridMergeColumnBlocksEv */
/* Demangled: tesseract::TableFinder::GridMergeColumnBlocks() */
int _ZN9tesseract11TableFinder21GridMergeColumnBlocksEv(void);

/* Symbol: _ZN9tesseract7Wordrec17add_seam_to_queueEfP4SEAMPNS_11GenericHeapINS_12KDPtrPairIncIfS1_EEEE */
/* Demangled: tesseract::Wordrec::add_seam_to_queue(float, SEAM*, tesseract::GenericHeap<tesseract::KDPtrPairInc<float, SEAM> >*) */
int _ZN9tesseract7Wordrec17add_seam_to_queueEfP4SEAMPNS_11GenericHeapINS_12KDPtrPairIncIfS1_EEEE(void);

/* Symbol: _ZN9tesseract11TessBaseAPI15DeleteBlockListEP10BLOCK_LIST */
/* Demangled: tesseract::TessBaseAPI::DeleteBlockList(BLOCK_LIST*) */
int _ZN9tesseract11TessBaseAPI15DeleteBlockListEP10BLOCK_LIST(void);

/* Symbol: _ZN9tesseract18TessResultRendererC2EPKcS2_ */
/* Demangled: tesseract::TessResultRenderer::TessResultRenderer(char const*, char const*) */
int _ZN9tesseract18TessResultRendererC2EPKcS2_(void);

/* Symbol: _ZN13GenericVectorIP13BLOBNBOX_LISTE5clearEv */
/* Demangled: GenericVector<BLOBNBOX_LIST*>::clear() */
int _ZN13GenericVectorIP13BLOBNBOX_LISTE5clearEv(void);

/* Symbol: oldbl_xhfix */
/* Demangled: oldbl_xhfix */
extern void* oldbl_xhfix;

/* Symbol: _ZN9tesseract13LanguageModel23ExtractFeaturesFromPathERKNS_17ViterbiStateEntryEPf */
/* Demangled: tesseract::LanguageModel::ExtractFeaturesFromPath(tesseract::ViterbiStateEntry const&, float*) */
int _ZN9tesseract13LanguageModel23ExtractFeaturesFromPathERKNS_17ViterbiStateEntryEPf(void);

/* Symbol: _ZN9tesseract10DetLineFitC1Ev */
/* Demangled: tesseract::DetLineFit::DetLineFit() */
int _ZN9tesseract10DetLineFitC1Ev(void);

/* Symbol: _ZNK4SEAM9ApplySeamEbP5TBLOBS1_ */
/* Demangled: SEAM::ApplySeam(bool, TBLOB*, TBLOB*) const */
int _ZNK4SEAM9ApplySeamEbP5TBLOBS1_(void);

/* Symbol: _ZNK10UNICHARMAP13unichar_to_idEPKci */
/* Demangled: UNICHARMAP::unichar_to_id(char const*, int) const */
int _ZNK10UNICHARMAP13unichar_to_idEPKci(void);

/* Symbol: _ZN9tesseract10BeamSearchC1EPNS_15CubeRecoContextEb */
/* Demangled: tesseract::BeamSearch::BeamSearch(tesseract::CubeRecoContext*, bool) */
int _ZN9tesseract10BeamSearchC1EPNS_15CubeRecoContextEb(void);

/* Symbol: _ZN9tesseract16FeatureChebyshev15ComputeFeaturesEPNS_8CharSampEPf */
/* Demangled: tesseract::FeatureChebyshev::ComputeFeatures(tesseract::CharSamp*, float*) */
int _ZN9tesseract16FeatureChebyshev15ComputeFeaturesEPNS_8CharSampEPf(void);

/* Symbol: edges_max_children_per_outline */
/* Demangled: edges_max_children_per_outline */
extern void* edges_max_children_per_outline;

/* Symbol: _ZN9tesseract11StrokeWidth13DiacriticBlobEPNS_8BlobGridEP8BLOBNBOX */
/* Demangled: tesseract::StrokeWidth::DiacriticBlob(tesseract::BlobGrid*, BLOBNBOX*) */
int _ZN9tesseract11StrokeWidth13DiacriticBlobEPNS_8BlobGridEP8BLOBNBOX(void);

/* Symbol: _ZN9tesseract9TabVector8EvaluateERK6ICOORDPNS_7TabFindE */
/* Demangled: tesseract::TabVector::Evaluate(ICOORD const&, tesseract::TabFind*) */
int _ZN9tesseract9TabVector8EvaluateERK6ICOORDPNS_7TabFindE(void);

/* Symbol: _ZN9tesseract12LMPainPoints18GenerateFromAmbigsERK13GenericVectorI12DANGERR_INFOEPNS_17ViterbiStateEntryEP8WERD_RES */
/* Demangled: tesseract::LMPainPoints::GenerateFromAmbigs(GenericVector<DANGERR_INFO> const&, tesseract::ViterbiStateEntry*, WERD_RES*) */
int _ZN9tesseract12LMPainPoints18GenerateFromAmbigsERK13GenericVectorI12DANGERR_INFOEPNS_17ViterbiStateEntryEP8WERD_RES(void);

/* Symbol: _ZN13GenericVectorIP4PARAE12init_to_sizeEiS1_ */
/* Demangled: GenericVector<PARA*>::init_to_size(int, PARA*) */
int _ZN13GenericVectorIP4PARAE12init_to_sizeEiS1_(void);

/* Symbol: _ZN9tesseract11BaselineRowC2EdP6TO_ROW */
/* Demangled: tesseract::BaselineRow::BaselineRow(double, TO_ROW*) */
int _ZN9tesseract11BaselineRowC2EdP6TO_ROW(void);

/* Symbol: _ZN9tesseract17ScriptPosToStringENS_9ScriptPosE */
/* Demangled: tesseract::ScriptPosToString(tesseract::ScriptPos) */
int _ZN9tesseract17ScriptPosToStringENS_9ScriptPosE(void);

/* Symbol: _ZNK9tesseract11TessBaseAPI17GetDoubleVariableEPKcPd */
/* Demangled: tesseract::TessBaseAPI::GetDoubleVariable(char const*, double*) const */
int _ZNK9tesseract11TessBaseAPI17GetDoubleVariableEPKcPd(void);

/* Symbol: _Z13FreeClustererP9CLUSTERER */
/* Demangled: FreeClusterer(CLUSTERER*) */
int _Z13FreeClustererP9CLUSTERER(void);

/* Symbol: _ZNSt3__16vectorIfNS_9allocatorIfEEE26__swap_out_circular_bufferERNS_14__split_bufferIfRS2_EE */
/* Demangled: std::__1::vector<float, std::__1::allocator<float> >::__swap_out_circular_buffer(std::__1::__split_buffer<float, std::__1::allocator<float>&>&) */
int _ZNSt3__16vectorIfNS_9allocatorIfEEE26__swap_out_circular_bufferERNS_14__split_bufferIfRS2_EE(void);

/* Symbol: _ZN9tesseract11TessBaseAPI22TesseractExtractResultEPPcPPiPPfS4_S4_S4_S4_P8PAGE_RES */
/* Demangled: tesseract::TessBaseAPI::TesseractExtractResult(char**, int**, float**, int**, int**, int**, int**, PAGE_RES*) */
int _ZN9tesseract11TessBaseAPI22TesseractExtractResultEPPcPPiPPfS4_S4_S4_S4_P8PAGE_RES(void);

/* Symbol: _ZTVN9tesseract8CCStructE */
/* Demangled: vtable for tesseract::CCStruct */
extern void* _ZTVN9tesseract8CCStructE;

/* Symbol: _ZN9tesseract17CubeLineSegmenter8Pixa2PixEP4PixaPP3Boxii */
/* Demangled: tesseract::CubeLineSegmenter::Pixa2Pix(Pixa*, Box**, int, int) */
int _ZN9tesseract17CubeLineSegmenter8Pixa2PixEP4PixaPP3Boxii(void);

/* Symbol: _ZN9tesseract12SquishedDawg19write_squished_dawgEP7__sFILE */
/* Demangled: tesseract::SquishedDawg::write_squished_dawg(__sFILE*) */
int _ZN9tesseract12SquishedDawg19write_squished_dawgEP7__sFILE(void);

/* Symbol: _ZN9tesseract8GridBaseC2Ev */
/* Demangled: tesseract::GridBase::GridBase() */
int _ZN9tesseract8GridBaseC2Ev(void);

/* Symbol: _ZN9tesseract12ColumnFinder13AssignColumnsERK13GenericVectorIPNS_15ColPartitionSetEE */
/* Demangled: tesseract::ColumnFinder::AssignColumns(GenericVector<tesseract::ColPartitionSet*> const&) */
int _ZN9tesseract12ColumnFinder13AssignColumnsERK13GenericVectorIPNS_15ColPartitionSetEE(void);

/* Symbol: _Z18find_cblob_vlimitsP6C_BLOBffRfS1_ */
/* Demangled: find_cblob_vlimits(C_BLOB*, float, float, float&, float&) */
int _Z18find_cblob_vlimitsP6C_BLOBffRfS1_(void);

/* Symbol: _ZN9tesseract10DetLineFit3FitEiiP6ICOORDS2_ */
/* Demangled: tesseract::DetLineFit::Fit(int, int, ICOORD*, ICOORD*) */
int _ZN9tesseract10DetLineFit3FitEiiP6ICOORDS2_(void);

/* Symbol: _ZN16WERD_CHOICE_LIST9deep_copyEPKS_PFP11WERD_CHOICEPKS2_E */
/* Demangled: WERD_CHOICE_LIST::deep_copy(WERD_CHOICE_LIST const*, WERD_CHOICE* (*)(WERD_CHOICE const*)) */
int _ZN16WERD_CHOICE_LIST9deep_copyEPKS_PFP11WERD_CHOICEPKS2_E(void);

/* Symbol: _ZN6STRING6assignEPKci */
/* Demangled: STRING::assign(char const*, int) */
int _ZN6STRING6assignEPKci(void);

/* Symbol: _Z15ChangeDirectionP8list_recS0_9DIRECTION */
/* Demangled: ChangeDirection(list_rec*, list_rec*, DIRECTION) */
int _Z15ChangeDirectionP8list_recS0_9DIRECTION(void);

/* Symbol: _ZN6C_BLOB28CheckInverseFlagAndDirectionEv */
/* Demangled: C_BLOB::CheckInverseFlagAndDirection() */
int _ZN6C_BLOB28CheckInverseFlagAndDirectionEv(void);

/* Symbol: _ZN13GenericVectorIyE15double_the_sizeEv */
/* Demangled: GenericVector<unsigned long long>::double_the_size() */
int _ZN13GenericVectorIyE15double_the_sizeEv(void);

/* Symbol: _ZN9tesseract9Tesseract16read_config_fileEPKcNS_18SetParamConstraintE */
/* Demangled: tesseract::Tesseract::read_config_file(char const*, tesseract::SetParamConstraint) */
int _ZN9tesseract9Tesseract16read_config_fileEPKcNS_18SetParamConstraintE(void);

/* Symbol: _ZN8WERD_RES21SetAllScriptPositionsEN9tesseract9ScriptPosE */
/* Demangled: WERD_RES::SetAllScriptPositions(tesseract::ScriptPos) */
int _ZN8WERD_RES21SetAllScriptPositionsEN9tesseract9ScriptPosE(void);

/* Symbol: _ZN6STRING11ensure_cstrEi */
/* Demangled: STRING::ensure_cstr(int) */
int _ZN6STRING11ensure_cstrEi(void);

/* Symbol: _ZN9tesseract12PageIteratorD1Ev */
/* Demangled: tesseract::PageIterator::~PageIterator() */
int _ZN9tesseract12PageIteratorD1Ev(void);

/* Symbol: _ZN9tesseract16ColPartitionGrid19MakeSingleColumnSetEP19TessResultCallback1IbiE */
/* Demangled: tesseract::ColPartitionGrid::MakeSingleColumnSet(TessResultCallback1<bool, int>*) */
int _ZN9tesseract16ColPartitionGrid19MakeSingleColumnSetEP19TessResultCallback1IbiE(void);

/* Symbol: _ZN9tesseract11StrokeWidth17SetNeighbourFlowsEP8BLOBNBOX */
/* Demangled: tesseract::StrokeWidth::SetNeighbourFlows(BLOBNBOX*) */
int _ZN9tesseract11StrokeWidth17SetNeighbourFlowsEP8BLOBNBOX(void);

/* Symbol: _ZN13GenericVectorIN9tesseract9KDPairIncIfP6EDGEPTEEE9push_backES4_ */
/* Demangled: GenericVector<tesseract::KDPairInc<float, EDGEPT*> >::push_back(tesseract::KDPairInc<float, EDGEPT*>) */
int _ZN13GenericVectorIN9tesseract9KDPairIncIfP6EDGEPTEEE9push_backES4_(void);

/* Symbol: _ZNK9tesseract11TessBaseAPI8NumDawgsEv */
/* Demangled: tesseract::TessBaseAPI::NumDawgs() const */
int _ZNK9tesseract11TessBaseAPI8NumDawgsEv(void);

/* Symbol: _ZN9tesseract14EquationDetect8IsInlineEbiPNS_12ColPartitionE */
/* Demangled: tesseract::EquationDetect::IsInline(bool, int, tesseract::ColPartition*) */
int _ZN9tesseract14EquationDetect8IsInlineEbiPNS_12ColPartitionE(void);

/* Symbol: _ZN9tesseract12PageIterator19SetWordBlamerBundleEP12BlamerBundle */
/* Demangled: tesseract::PageIterator::SetWordBlamerBundle(BlamerBundle*) */
int _ZN9tesseract12PageIterator19SetWordBlamerBundleEP12BlamerBundle(void);

/* Symbol: _Z13FreeMFOutlinePv */
/* Demangled: FreeMFOutline(void*) */
int _Z13FreeMFOutlinePv(void);

/* Symbol: _Z12WriteFeatureP14FEATURE_STRUCTP6STRING */
/* Demangled: WriteFeature(FEATURE_STRUCT*, STRING*) */
int _Z12WriteFeatureP14FEATURE_STRUCTP6STRING(void);

/* Symbol: Java_com_googlecode_tesseract_android_ResultIterator_nativeIsAtBeginningOf */
/* Demangled: Java_com_googlecode_tesseract_android_ResultIterator_nativeIsAtBeginningOf */
int Java_com_googlecode_tesseract_android_ResultIterator_nativeIsAtBeginningOf(void);

/* Symbol: _ZN9tesseract18MarkStrongEvidenceEP13GenericVectorINS_19RowScratchRegistersEEii */
/* Demangled: tesseract::MarkStrongEvidence(GenericVector<tesseract::RowScratchRegisters>*, int, int) */
int _ZN9tesseract18MarkStrongEvidenceEP13GenericVectorINS_19RowScratchRegistersEEii(void);

/* Symbol: _Z24ConvertToOutlineFeaturesP8list_recP18FEATURE_SET_STRUCT */
/* Demangled: ConvertToOutlineFeatures(list_rec*, FEATURE_SET_STRUCT*) */
int _Z24ConvertToOutlineFeaturesP8list_recP18FEATURE_SET_STRUCT(void);

/* Symbol: _ZN9tesseract14PixelHistogram26ConstructVerticalCountHistEP3Pix */
/* Demangled: tesseract::PixelHistogram::ConstructVerticalCountHist(Pix*) */
int _ZN9tesseract14PixelHistogram26ConstructVerticalCountHistEP3Pix(void);

/* Symbol: _ZN9tesseract8CCStruct16kXHeightFractionE */
/* Demangled: tesseract::CCStruct::kXHeightFraction */
extern void* _ZN9tesseract8CCStruct16kXHeightFractionE;

/* Symbol: _ZNK9tesseract14ResultIterator23AppendUTF8ParagraphTextEP6STRING */
/* Demangled: tesseract::ResultIterator::AppendUTF8ParagraphText(STRING*) const */
int _ZNK9tesseract14ResultIterator23AppendUTF8ParagraphTextEP6STRING(void);

/* Symbol: _ZN13GenericVectorIN9tesseract7FontSetEE9push_backES1_ */
/* Demangled: GenericVector<tesseract::FontSet>::push_back(tesseract::FontSet) */
int _ZN13GenericVectorIN9tesseract7FontSetEE9push_backES1_(void);

/* Symbol: _ZN9tesseract12ColumnFinder11MakeColumnsEb */
/* Demangled: tesseract::ColumnFinder::MakeColumns(bool) */
int _ZN9tesseract12ColumnFinder11MakeColumnsEb(void);

/* Symbol: textord_really_old_xheight */
/* Demangled: textord_really_old_xheight */
extern void* textord_really_old_xheight;

/* Symbol: _ZN9tesseract9Tesseract17PrepareForPagesegEv */
/* Demangled: tesseract::Tesseract::PrepareForPageseg() */
int _ZN9tesseract9Tesseract17PrepareForPagesegEv(void);

/* Symbol: TessBaseAPIGetThresholdedImageScaleFactor */
/* Demangled: TessBaseAPIGetThresholdedImageScaleFactor */
int TessBaseAPIGetThresholdedImageScaleFactor(void);

/* Symbol: _ZN9tesseract12ColumnFinder10FindBlocksENS_11PageSegModeEP3PixiP8TO_BLOCKS3_S3_S3_P10BLOCK_LISTP13BLOBNBOX_LISTP13TO_BLOCK_LIST */
/* Demangled: tesseract::ColumnFinder::FindBlocks(tesseract::PageSegMode, Pix*, int, TO_BLOCK*, Pix*, Pix*, Pix*, BLOCK_LIST*, BLOBNBOX_LIST*, TO_BLOCK_LIST*) */
int _ZN9tesseract12ColumnFinder10FindBlocksENS_11PageSegModeEP3PixiP8TO_BLOCKS3_S3_S3_P10BLOCK_LISTP13BLOBNBOX_LISTP13TO_BLOCK_LIST(void);

/* Symbol: _ZNK13GenericVectorIS_I6STRINGEE4backEv */
/* Demangled: GenericVector<GenericVector<STRING> >::back() const */
int _ZNK13GenericVectorIS_I6STRINGEE4backEv(void);

/* Symbol: IntFeatDesc */
/* Demangled: IntFeatDesc */
extern void* IntFeatDesc;

/* Symbol: _ZN9tesseract7ConCompD2Ev */
/* Demangled: tesseract::ConComp::~ConComp() */
int _ZN9tesseract7ConCompD2Ev(void);

/* Symbol: _Z8memalloci */
/* Demangled: memalloc(int) */
int _Z8memalloci(void);

/* Symbol: _ZN9tesseract8BlobGridD1Ev */
/* Demangled: tesseract::BlobGrid::~BlobGrid() */
int _ZN9tesseract8BlobGridD1Ev(void);

/* Symbol: _ZN9tesseract13SortByBoxLeftINS_12ColPartitionEEEiPKvS3_ */
/* Demangled: int tesseract::SortByBoxLeft<tesseract::ColPartition>(void const*, void const*) */
int _ZN9tesseract13SortByBoxLeftINS_12ColPartitionEEEiPKvS3_(void);

/* Symbol: _ZN10UNICHARSET29PartialSetPropertiesFromOtherEiRKS_ */
/* Demangled: UNICHARSET::PartialSetPropertiesFromOther(int, UNICHARSET const&) */
int _ZN10UNICHARSET29PartialSetPropertiesFromOtherEiRKS_(void);

/* Symbol: _ZN9tesseract15InputFileBuffer4ReadEPvi */
/* Demangled: tesseract::InputFileBuffer::Read(void*, int) */
int _ZN9tesseract15InputFileBuffer4ReadEPvi(void);

/* Symbol: _ZN5BLOCK19compute_row_marginsEv */
/* Demangled: BLOCK::compute_row_margins() */
int _ZN5BLOCK19compute_row_marginsEv(void);

/* Symbol: _ZN9tesseract8Classify18CreateIntTemplatesEP12CLASS_STRUCTRK10UNICHARSET */
/* Demangled: tesseract::Classify::CreateIntTemplates(CLASS_STRUCT*, UNICHARSET const&) */
int _ZN9tesseract8Classify18CreateIntTemplatesEP12CLASS_STRUCTRK10UNICHARSET(void);

/* Symbol: _ZN9tesseract6Neuron7SigmoidEf */
/* Demangled: tesseract::Neuron::Sigmoid(float) */
int _ZN9tesseract6Neuron7SigmoidEf(void);

/* Symbol: _ZN9tesseract9Tesseract14safe_dict_wordEPK8WERD_RES */
/* Demangled: tesseract::Tesseract::safe_dict_word(WERD_RES const*) */
int _ZN9tesseract9Tesseract14safe_dict_wordEPK8WERD_RES(void);

/* Symbol: _Z14os_detect_blobP8BLOBNBOXP19OrientationDetectorP14ScriptDetectorP9OSResultsPN9tesseract9TesseractE */
/* Demangled: os_detect_blob(BLOBNBOX*, OrientationDetector*, ScriptDetector*, OSResults*, tesseract::Tesseract*) */
int _Z14os_detect_blobP8BLOBNBOXP19OrientationDetectorP14ScriptDetectorP9OSResultsPN9tesseract9TesseractE(void);

/* Symbol: _ZN9tesseract4Dict16AcceptableResultEP8WERD_RES */
/* Demangled: tesseract::Dict::AcceptableResult(WERD_RES*) */
int _ZN9tesseract4Dict16AcceptableResultEP8WERD_RES(void);

/* Symbol: _ZN9tesseract12DocumentDataC1ERK6STRING */
/* Demangled: tesseract::DocumentData::DocumentData(STRING const&) */
int _ZN9tesseract12DocumentDataC1ERK6STRING(void);

/* Symbol: _ZN9tesseract8ClassifyC1Ev */
/* Demangled: tesseract::Classify::Classify() */
int _ZN9tesseract8ClassifyC1Ev(void);

/* Symbol: _ZNK9tesseract5Shape30ContainsMultipleFontPropertiesERKNS_13FontInfoTableE */
/* Demangled: tesseract::Shape::ContainsMultipleFontProperties(tesseract::FontInfoTable const&) const */
int _ZNK9tesseract5Shape30ContainsMultipleFontPropertiesERKNS_13FontInfoTableE(void);

/* Symbol: _ZN9tesseract18ShiroRekhaSplitter5ClearEv */
/* Demangled: tesseract::ShiroRekhaSplitter::Clear() */
int _ZN9tesseract18ShiroRekhaSplitter5ClearEv(void);

/* Symbol: _ZN9tesseract8CharSampC1Ev */
/* Demangled: tesseract::CharSamp::CharSamp() */
int _ZN9tesseract8CharSampC1Ev(void);

/* Symbol: _ZN9tesseract6BBGridINS_12ColPartitionENS_18ColPartition_CLISTENS_17ColPartition_C_ITEED0Ev */
/* Demangled: tesseract::BBGrid<tesseract::ColPartition, tesseract::ColPartition_CLIST, tesseract::ColPartition_C_IT>::~BBGrid() */
int _ZN9tesseract6BBGridINS_12ColPartitionENS_18ColPartition_CLISTENS_17ColPartition_C_ITEED0Ev(void);

/* Symbol: _ZN9tesseract13TabConstraintC2EPNS_9TabVectorEb */
/* Demangled: tesseract::TabConstraint::TabConstraint(tesseract::TabVector*, bool) */
int _ZN9tesseract13TabConstraintC2EPNS_9TabVectorEb(void);

/* Symbol: _ZNK6STRING5c_strEv */
/* Demangled: STRING::c_str() const */
int _ZNK6STRING5c_strEv(void);

/* Symbol: _ZN8WERD_RES17ReplaceBestChoiceEP11WERD_CHOICE */
/* Demangled: WERD_RES::ReplaceBestChoice(WERD_CHOICE*) */
int _ZN8WERD_RES17ReplaceBestChoiceEP11WERD_CHOICE(void);

/* Symbol: _ZN9tesseract15CubeRecoContext4LoadEPNS_15TessdataManagerEP10UNICHARSET */
/* Demangled: tesseract::CubeRecoContext::Load(tesseract::TessdataManager*, UNICHARSET*) */
int _ZN9tesseract15CubeRecoContext4LoadEPNS_15TessdataManagerEP10UNICHARSET(void);

/* Symbol: _ZN9tesseract13FontInfoTableC1Ev */
/* Demangled: tesseract::FontInfoTable::FontInfoTable() */
int _ZN9tesseract13FontInfoTableC1Ev(void);

/* Symbol: _ZN9tesseract18NormalizeDirectionEhRK6FCOORDRK6DENORMPS4_ */
/* Demangled: tesseract::NormalizeDirection(unsigned char, FCOORD const&, DENORM const&, DENORM const*) */
int _ZN9tesseract18NormalizeDirectionEhRK6FCOORDRK6DENORMPS4_(void);

/* Symbol: _ZN9tesseract16CubeTuningParams4SaveENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: tesseract::CubeTuningParams::Save(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN9tesseract16CubeTuningParams4SaveENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZNSt3__16vectorIPNS0_IfNS_9allocatorIfEEEENS1_IS4_EEE21__push_back_slow_pathIS4_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >*, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> >*> >::__push_back_slow_path<std::__1::vector<float, std::__1::allocator<float> >*>(std::__1::vector<float, std::__1::allocator<float> >*&&) */
int _ZNSt3__16vectorIPNS0_IfNS_9allocatorIfEEEENS1_IS4_EEE21__push_back_slow_pathIS4_EEvOT_(void);

/* Symbol: TessBaseAPIOem */
/* Demangled: TessBaseAPIOem */
int TessBaseAPIOem(void);

/* Symbol: _ZN5STATS3addEii */
/* Demangled: STATS::add(int, int) */
int _ZN5STATS3addEii(void);

/* Symbol: _ZN13GenericVectorIN9tesseract24ParamsTrainingHypothesisEEaSERKS2_ */
/* Demangled: GenericVector<tesseract::ParamsTrainingHypothesis>::operator=(GenericVector<tesseract::ParamsTrainingHypothesis> const&) */
int _ZN13GenericVectorIN9tesseract24ParamsTrainingHypothesisEEaSERKS2_(void);

/* Symbol: _ZN9tesseract14EquationDetect18CheckSeedFgDensityEfPNS_12ColPartitionE */
/* Demangled: tesseract::EquationDetect::CheckSeedFgDensity(float, tesseract::ColPartition*) */
int _ZN9tesseract14EquationDetect18CheckSeedFgDensityEfPNS_12ColPartitionE(void);

/* Symbol: _ZN9tesseract14EquationDetect19IdentifyInlinePartsEv */
/* Demangled: tesseract::EquationDetect::IdentifyInlineParts() */
int _ZN9tesseract14EquationDetect19IdentifyInlinePartsEv(void);

/* Symbol: _ZN13GenericVectorIN9tesseract7ClusterEE5clearEv */
/* Demangled: GenericVector<tesseract::Cluster>::clear() */
int _ZN13GenericVectorIN9tesseract7ClusterEE5clearEv(void);

/* Symbol: _ZN10UNICHARSET7reserveEi */
/* Demangled: UNICHARSET::reserve(int) */
int _ZN10UNICHARSET7reserveEi(void);

/* Symbol: _ZN9tesseract9ImageFind19FindImagePartitionsEP3PixRK6FCOORDS5_P8TO_BLOCKPNS_7TabFindEPNS_16ColPartitionGridEPNS_17ColPartition_LISTE */
/* Demangled: tesseract::ImageFind::FindImagePartitions(Pix*, FCOORD const&, FCOORD const&, TO_BLOCK*, tesseract::TabFind*, tesseract::ColPartitionGrid*, tesseract::ColPartition_LIST*) */
int _ZN9tesseract9ImageFind19FindImagePartitionsEP3PixRK6FCOORDS5_P8TO_BLOCKPNS_7TabFindEPNS_16ColPartitionGridEPNS_17ColPartition_LISTE(void);

/* Symbol: _ZNK9tesseract14ResultIterator18CalculateBlobOrderEP13GenericVectorIiE */
/* Demangled: tesseract::ResultIterator::CalculateBlobOrder(GenericVector<int>*) const */
int _ZNK9tesseract14ResultIterator18CalculateBlobOrderEP13GenericVectorIiE(void);

/* Symbol: _ZN9C_OUTLINE18ComputeEdgeOffsetsEiP3Pix */
/* Demangled: C_OUTLINE::ComputeEdgeOffsets(int, Pix*) */
int _ZN9C_OUTLINE18ComputeEdgeOffsetsEiP3Pix(void);

/* Symbol: _ZN9tesseract17UniLikelyListItemEPK10UNICHARSETPK11WERD_CHOICE */
/* Demangled: tesseract::UniLikelyListItem(UNICHARSET const*, WERD_CHOICE const*) */
int _ZN9tesseract17UniLikelyListItemEPK10UNICHARSETPK11WERD_CHOICE(void);

/* Symbol: _ZN9tesseract7Wordrec8cc_recogEP8WERD_RES */
/* Demangled: tesseract::Wordrec::cc_recog(WERD_RES*) */
int _ZN9tesseract7Wordrec8cc_recogEP8WERD_RES(void);

/* Symbol: _ZN9tesseract9AmbigSpecC2Ev */
/* Demangled: tesseract::AmbigSpec::AmbigSpec() */
int _ZN9tesseract9AmbigSpecC2Ev(void);

/* Symbol: _ZN9tesseract8Classify16LooksLikeGarbageEP5TBLOB */
/* Demangled: tesseract::Classify::LooksLikeGarbage(TBLOB*) */
int _ZN9tesseract8Classify16LooksLikeGarbageEP5TBLOB(void);

/* Symbol: _ZN13GenericVectorIdE5clearEv */
/* Demangled: GenericVector<double>::clear() */
int _ZN13GenericVectorIdE5clearEv(void);

/* Symbol: _ZN9tesseract7TabFind29ApplyPartitionsToColumnWidthsEPNS_16ColPartitionGridEP5STATS */
/* Demangled: tesseract::TabFind::ApplyPartitionsToColumnWidths(tesseract::ColPartitionGrid*, STATS*) */
int _ZN9tesseract7TabFind29ApplyPartitionsToColumnWidthsEPNS_16ColPartitionGridEP5STATS(void);

/* Symbol: _ZN9tesseract7Wordrec18get_fragment_listsEsssssP6MATRIXP16BLOB_CHOICE_LIST */
/* Demangled: tesseract::Wordrec::get_fragment_lists(short, short, short, short, short, MATRIX*, BLOB_CHOICE_LIST*) */
int _ZN9tesseract7Wordrec18get_fragment_listsEsssssP6MATRIXP16BLOB_CHOICE_LIST(void);

/* Symbol: _ZN9tesseract11TessBaseAPI11SetDictFuncEMNS_4DictEKFiPvibE */
/* Demangled: tesseract::TessBaseAPI::SetDictFunc(int (tesseract::Dict::*)(void*, int, bool) const) */
int _ZN9tesseract11TessBaseAPI11SetDictFuncEMNS_4DictEKFiPvibE(void);

/* Symbol: _ZNK6C_BLOB12bounding_boxEv */
/* Demangled: C_BLOB::bounding_box() const */
int _ZNK6C_BLOB12bounding_boxEv(void);

/* Symbol: _ZN11PAGE_RES_IT13rej_stat_wordEv */
/* Demangled: PAGE_RES_IT::rej_stat_word() */
int _ZN11PAGE_RES_IT13rej_stat_wordEv(void);

/* Symbol: textord_debug_block */
/* Demangled: textord_debug_block */
extern void* textord_debug_block;

/* Symbol: TessPageIteratorBegin */
/* Demangled: TessPageIteratorBegin */
int TessPageIteratorBegin(void);

/* Symbol: _ZN9tesseract9Tesseract6TidyUpEP8PAGE_RES */
/* Demangled: tesseract::Tesseract::TidyUp(PAGE_RES*) */
int _ZN9tesseract9Tesseract6TidyUpEP8PAGE_RES(void);

/* Symbol: _ZN9tesseract7Textord20reduced_box_for_blobEP8BLOBNBOXP6TO_ROWPs */
/* Demangled: tesseract::Textord::reduced_box_for_blob(BLOBNBOX*, TO_ROW*, short*) */
int _ZN9tesseract7Textord20reduced_box_for_blobEP8BLOBNBOXP6TO_ROWPs(void);

/* Symbol: _ZN9tesseract7Wordrec13new_min_pointEP6EDGEPTPNS_11GenericHeapINS_9KDPairIncIfS2_EEEE */
/* Demangled: tesseract::Wordrec::new_min_point(EDGEPT*, tesseract::GenericHeap<tesseract::KDPairInc<float, EDGEPT*> >*) */
int _ZN9tesseract7Wordrec13new_min_pointEP6EDGEPTPNS_11GenericHeapINS_9KDPairIncIfS2_EEEE(void);

/* Symbol: _ZN6DENORMC2ERKS_ */
/* Demangled: DENORM::DENORM(DENORM const&) */
int _ZN6DENORMC2ERKS_(void);

/* Symbol: _ZN13GenericVectorIN9tesseract9KDPairIncIfiEEE6insertES2_i */
/* Demangled: GenericVector<tesseract::KDPairInc<float, int> >::insert(tesseract::KDPairInc<float, int>, int) */
int _ZN13GenericVectorIN9tesseract9KDPairIncIfiEEE6insertES2_i(void);

/* Symbol: _ZN9tesseract7TabFind16MakeColumnWidthsEiP5STATS */
/* Demangled: tesseract::TabFind::MakeColumnWidths(int, STATS*) */
int _ZN9tesseract7TabFind16MakeColumnWidthsEiP5STATS(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract11WordWithBoxEE7reserveEi */
/* Demangled: GenericVector<tesseract::WordWithBox*>::reserve(int) */
int _ZN13GenericVectorIPN9tesseract11WordWithBoxEE7reserveEi(void);

/* Symbol: _Z12GlobalParamsv */
/* Demangled: GlobalParams() */
int _Z12GlobalParamsv(void);

/* Symbol: _ZN13GenericVectorI4TBOXE5clearEv */
/* Demangled: GenericVector<TBOX>::clear() */
int _ZN13GenericVectorI4TBOXE5clearEv(void);

/* Symbol: _ZpLR4TBOXRKS_ */
/* Demangled: operator+=(TBOX&, TBOX const&) */
int _ZpLR4TBOXRKS_(void);

/* Symbol: _ZN9tesseract15CompareFontInfoERKNS_8FontInfoES2_ */
/* Demangled: tesseract::CompareFontInfo(tesseract::FontInfo const&, tesseract::FontInfo const&) */
int _ZN9tesseract15CompareFontInfoERKNS_8FontInfoES2_(void);

/* Symbol: _ZNK9tesseract7IntGrid16NeighbourhoodSumEv */
/* Demangled: tesseract::IntGrid::NeighbourhoodSum() const */
int _ZNK9tesseract7IntGrid16NeighbourhoodSumEv(void);

/* Symbol: _ZN9tesseract12ColumnFinder19AssignColumnToRangeEiiiPPiS1_ */
/* Demangled: tesseract::ColumnFinder::AssignColumnToRange(int, int, int, int**, int*) */
int _ZN9tesseract12ColumnFinder19AssignColumnToRangeEiiiPPiS1_(void);

/* Symbol: _ZN9tesseract16ColPartitionGrid6DeskewERK6FCOORD */
/* Demangled: tesseract::ColPartitionGrid::Deskew(FCOORD const&) */
int _ZN9tesseract16ColPartitionGrid6DeskewERK6FCOORD(void);

/* Symbol: _ZN9tesseract9Tesseract19init_recog_trainingERK6STRING */
/* Demangled: tesseract::Tesseract::init_recog_training(STRING const&) */
int _ZN9tesseract9Tesseract19init_recog_trainingERK6STRING(void);

/* Symbol: TessPageIteratorBoundingBox */
/* Demangled: TessPageIteratorBoundingBox */
int TessPageIteratorBoundingBox(void);

/* Symbol: _ZN13GenericVectorI6STRINGEaSERKS1_ */
/* Demangled: GenericVector<STRING>::operator=(GenericVector<STRING> const&) */
int _ZN13GenericVectorI6STRINGEaSERKS1_(void);

/* Symbol: _ZN13GenericVectorIN10SortHelperIiE8SortPairIiEEE15double_the_sizeEv */
/* Demangled: GenericVector<SortHelper<int>::SortPair<int> >::double_the_size() */
int _ZN13GenericVectorIN10SortHelperIiE8SortPairIiEEE15double_the_sizeEv(void);

/* Symbol: _ZN9tesseract12ColumnFinder23IsVerticallyAlignedTextEdP8TO_BLOCKP14BLOBNBOX_CLIST */
/* Demangled: tesseract::ColumnFinder::IsVerticallyAlignedText(double, TO_BLOCK*, BLOBNBOX_CLIST*) */
int _ZN9tesseract12ColumnFinder23IsVerticallyAlignedTextEdP8TO_BLOCKP14BLOBNBOX_CLIST(void);

/* Symbol: _ZN10UNICHARSET16set_ranges_emptyEv */
/* Demangled: UNICHARSET::set_ranges_empty() */
int _ZN10UNICHARSET16set_ranges_emptyEv(void);

/* Symbol: _ZNK13GenericVectorIiE3getEi */
/* Demangled: GenericVector<int>::get(int) const */
int _ZNK13GenericVectorIiE3getEi(void);

/* Symbol: _ZN9tesseract17TrainingSampleSet13MutableSampleEiii */
/* Demangled: tesseract::TrainingSampleSet::MutableSample(int, int, int) */
int _ZN9tesseract17TrainingSampleSet13MutableSampleEiii(void);

/* Symbol: _ZNK9tesseract17TrainingSampleSet18GetCanonicalSampleEii */
/* Demangled: tesseract::TrainingSampleSet::GetCanonicalSample(int, int) const */
int _ZNK9tesseract17TrainingSampleSet18GetCanonicalSampleEii(void);

/* Symbol: _ZN9tesseract12SearchColumnD2Ev */
/* Demangled: tesseract::SearchColumn::~SearchColumn() */
int _ZN9tesseract12SearchColumnD2Ev(void);

/* Symbol: _ZTVN9tesseract8GridBaseE */
/* Demangled: vtable for tesseract::GridBase */
extern void* _ZTVN9tesseract8GridBaseE;

/* Symbol: _ZN13GenericVectorIP14ParagraphModelE7reserveEi */
/* Demangled: GenericVector<ParagraphModel*>::reserve(int) */
int _ZN13GenericVectorIP14ParagraphModelE7reserveEi(void);

/* Symbol: _ZN6DENORMD1Ev */
/* Demangled: DENORM::~DENORM() */
int _ZN6DENORMD1Ev(void);

/* Symbol: _Z17GetCPPadsForLeveliPfS_S_ */
/* Demangled: GetCPPadsForLevel(int, float*, float*, float*) */
int _Z17GetCPPadsForLeveliPfS_S_(void);

/* Symbol: _ZNSt3__16vectorIfNS_9allocatorIfEEEC2EjRKf */
/* Demangled: std::__1::vector<float, std::__1::allocator<float> >::vector(unsigned int, float const&) */
int _ZNSt3__16vectorIfNS_9allocatorIfEEEC2EjRKf(void);

/* Symbol: _ZNK9tesseract17LTRResultIterator14GetBlamerDebugEv */
/* Demangled: tesseract::LTRResultIterator::GetBlamerDebug() const */
int _ZNK9tesseract17LTRResultIterator14GetBlamerDebugEv(void);

/* Symbol: _ZN9tesseract12CharSampEnumD0Ev */
/* Demangled: tesseract::CharSampEnum::~CharSampEnum() */
int _ZN9tesseract12CharSampEnumD0Ev(void);

/* Symbol: _ZN9tesseract7IntGridC1Ev */
/* Demangled: tesseract::IntGrid::IntGrid() */
int _ZN9tesseract7IntGridC1Ev(void);

/* Symbol: _ZNK9tesseract12ColPartition11ShallowCopyEv */
/* Demangled: tesseract::ColPartition::ShallowCopy() const */
int _ZNK9tesseract12ColPartition11ShallowCopyEv(void);

/* Symbol: _ZN9tesseract7TabFindD0Ev */
/* Demangled: tesseract::TabFind::~TabFind() */
int _ZN9tesseract7TabFindD0Ev(void);

/* Symbol: _ZTVN9tesseract6BBGridINS_10ColSegmentENS_16ColSegment_CLISTENS_15ColSegment_C_ITEEE */
/* Demangled: vtable for tesseract::BBGrid<tesseract::ColSegment, tesseract::ColSegment_CLIST, tesseract::ColSegment_C_IT> */
extern void* _ZTVN9tesseract6BBGridINS_10ColSegmentENS_16ColSegment_CLISTENS_15ColSegment_C_ITEEE;

/* Symbol: _ZN9tesseract11TessBaseAPI11GetHOCRTextEP10ETEXT_DESCi */
/* Demangled: tesseract::TessBaseAPI::GetHOCRText(ETEXT_DESC*, int) */
int _ZN9tesseract11TessBaseAPI11GetHOCRTextEP10ETEXT_DESCi(void);

/* Symbol: TessResultRendererBeginDocument */
/* Demangled: TessResultRendererBeginDocument */
int TessResultRendererBeginDocument(void);

/* Symbol: _ZN9tesseract8CCStruct18kDescenderFractionE */
/* Demangled: tesseract::CCStruct::kDescenderFraction */
extern void* _ZN9tesseract8CCStruct18kDescenderFractionE;

/* Symbol: TessChoiceIteratorNext */
/* Demangled: TessChoiceIteratorNext */
int TessChoiceIteratorNext(void);

/* Symbol: _ZN13GenericVectorIP8WERD_RESE15double_the_sizeEv */
/* Demangled: GenericVector<WERD_RES*>::double_the_size() */
int _ZN13GenericVectorIP8WERD_RESE15double_the_sizeEv(void);

/* Symbol: _Z15choose_nth_itemiPvijPFiPKvS1_E */
/* Demangled: choose_nth_item(int, void*, int, unsigned int, int (*)(void const*, void const*)) */
int _Z15choose_nth_itemiPvijPFiPKvS1_E(void);

/* Symbol: _ZNK9tesseract13IntFeatureMap19IsMapFeatureDeletedEi */
/* Demangled: tesseract::IntFeatureMap::IsMapFeatureDeleted(int) const */
int _ZNK9tesseract13IntFeatureMap19IsMapFeatureDeletedEi(void);

/* Symbol: _ZN9tesseract15TableRecognizerD1Ev */
/* Demangled: tesseract::TableRecognizer::~TableRecognizer() */
int _ZN9tesseract15TableRecognizerD1Ev(void);

/* Symbol: _ZN9tesseract15TessdataManager13WriteMetadataEPxPKcP7__sFILE */
/* Demangled: tesseract::TessdataManager::WriteMetadata(long long*, char const*, __sFILE*) */
int _ZN9tesseract15TessdataManager13WriteMetadataEPxPKcP7__sFILE(void);

/* Symbol: _ZN9tesseract16ColPartitionGrid18BestMergeCandidateEPKNS_12ColPartitionEPNS_18ColPartition_CLISTEbP19TessResultCallback2IbS3_S3_EPi */
/* Demangled: tesseract::ColPartitionGrid::BestMergeCandidate(tesseract::ColPartition const*, tesseract::ColPartition_CLIST*, bool, TessResultCallback2<bool, tesseract::ColPartition const*, tesseract::ColPartition const*>*, int*) */
int _ZN9tesseract16ColPartitionGrid18BestMergeCandidateEPKNS_12ColPartitionEPNS_18ColPartition_CLISTEbP19TessResultCallback2IbS3_S3_EPi(void);

/* Symbol: TessBaseAPIMeanTextConf */
/* Demangled: TessBaseAPIMeanTextConf */
int TessBaseAPIMeanTextConf(void);

/* Symbol: _ZN9tesseract9Tesseract20fp_eval_word_spacingER13WERD_RES_LIST */
/* Demangled: tesseract::Tesseract::fp_eval_word_spacing(WERD_RES_LIST&) */
int _ZN9tesseract9Tesseract20fp_eval_word_spacingER13WERD_RES_LIST(void);

/* Symbol: _Z10MakeSampleP9CLUSTERERPKfi */
/* Demangled: MakeSample(CLUSTERER*, float const*, int) */
int _Z10MakeSampleP9CLUSTERERPKfi(void);

/* Symbol: _ZN9tesseract13WordSizeModelC1EPNS_7CharSetEb */
/* Demangled: tesseract::WordSizeModel::WordSizeModel(tesseract::CharSet*, bool) */
int _ZN9tesseract13WordSizeModelC1EPNS_7CharSetEb(void);

/* Symbol: _ZTVN9tesseract15InputFileBufferE */
/* Demangled: vtable for tesseract::InputFileBuffer */
extern void* _ZTVN9tesseract15InputFileBufferE;

/* Symbol: _ZNK9tesseract11ParamsModel10EquivalentERKS0_ */
/* Demangled: tesseract::ParamsModel::Equivalent(tesseract::ParamsModel const&) const */
int _ZNK9tesseract11ParamsModel10EquivalentERKS0_(void);

/* Symbol: _ZN9tesseract12ColPartition7SplitAtEi */
/* Demangled: tesseract::ColPartition::SplitAt(int) */
int _ZN9tesseract12ColPartition7SplitAtEi(void);

/* Symbol: _Z13NewMixedProtosP6sampleP10STATISTICS */
/* Demangled: NewMixedProto(short, sample*, STATISTICS*) */
int _Z13NewMixedProtosP6sampleP10STATISTICS(void);

/* Symbol: _ZTVN9tesseract16TessTextRendererE */
/* Demangled: vtable for tesseract::TessTextRenderer */
extern void* _ZTVN9tesseract16TessTextRendererE;

/* Symbol: _ZN9tesseract9Tesseract21reject_mostly_rejectsEP8WERD_RES */
/* Demangled: tesseract::Tesseract::reject_mostly_rejects(WERD_RES*) */
int _ZN9tesseract9Tesseract21reject_mostly_rejectsEP8WERD_RES(void);

/* Symbol: _ZN9tesseract9Tesseract19ParseLanguageStringEPKcP13GenericVectorI6STRINGES6_ */
/* Demangled: tesseract::Tesseract::ParseLanguageString(char const*, GenericVector<STRING>*, GenericVector<STRING>*) */
int _ZN9tesseract9Tesseract19ParseLanguageStringEPKcP13GenericVectorI6STRINGES6_(void);

/* Symbol: _ZN5TBLOB4MoveE6ICOORD */
/* Demangled: TBLOB::Move(ICOORD) */
int _ZN5TBLOB4MoveE6ICOORD(void);

/* Symbol: _ZN9tesseract4Bmp810tan_table_E */
/* Demangled: tesseract::Bmp8::tan_table_ */
extern void* _ZN9tesseract4Bmp810tan_table_E;

/* Symbol: _ZN9tesseract6BBGridI8BLOBNBOX14BLOBNBOX_CLIST13BLOBNBOX_C_ITED2Ev */
/* Demangled: tesseract::BBGrid<BLOBNBOX, BLOBNBOX_CLIST, BLOBNBOX_C_IT>::~BBGrid() */
int _ZN9tesseract6BBGridI8BLOBNBOX14BLOBNBOX_CLIST13BLOBNBOX_C_ITED2Ev(void);

/* Symbol: textord_descheight_mode_fraction */
/* Demangled: textord_descheight_mode_fraction */
extern void* textord_descheight_mode_fraction;

/* Symbol: textord_wordstats_smooth_factor */
/* Demangled: textord_wordstats_smooth_factor */
extern void* textord_wordstats_smooth_factor;

/* Symbol: _ZN13GenericVectorIN9tesseract8IntervalEE15double_the_sizeEv */
/* Demangled: GenericVector<tesseract::Interval>::double_the_size() */
int _ZN13GenericVectorIN9tesseract8IntervalEE15double_the_sizeEv(void);

/* Symbol: edges_children_count_limit */
/* Demangled: edges_children_count_limit */
extern void* edges_children_count_limit;

/* Symbol: _ZN9tesseract9ImageFind10ComposeRGBEjjj */
/* Demangled: tesseract::ImageFind::ComposeRGB(unsigned int, unsigned int, unsigned int) */
int _ZN9tesseract9ImageFind10ComposeRGBEjjj(void);

/* Symbol: _ZNK9tesseract18TextlineProjection23MeanPixelsInLineSegmentEPK6DENORMi6TPOINTS4_ */
/* Demangled: tesseract::TextlineProjection::MeanPixelsInLineSegment(DENORM const*, int, TPOINT, TPOINT) const */
int _ZNK9tesseract18TextlineProjection23MeanPixelsInLineSegmentEPK6DENORMi6TPOINTS4_(void);

/* Symbol: _Z11signal_exiti */
/* Demangled: signal_exit(int) */
int _Z11signal_exiti(void);

/* Symbol: _ZN9tesseract14ResultIterator5BeginEv */
/* Demangled: tesseract::ResultIterator::Begin() */
int _ZN9tesseract14ResultIterator5BeginEv(void);

/* Symbol: _ZN13GenericVectorIN9tesseract7ClusterEE6removeEi */
/* Demangled: GenericVector<tesseract::Cluster>::remove(int) */
int _ZN13GenericVectorIN9tesseract7ClusterEE6removeEi(void);

/* Symbol: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&) */
int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_(void);

/* Symbol: _ZN9tesseract7Wordrec17add_point_to_listEPNS_11GenericHeapINS_9KDPairIncIfP6EDGEPTEEEES4_ */
/* Demangled: tesseract::Wordrec::add_point_to_list(tesseract::GenericHeap<tesseract::KDPairInc<float, EDGEPT*> >*, EDGEPT*) */
int _ZN9tesseract7Wordrec17add_point_to_listEPNS_11GenericHeapINS_9KDPairIncIfP6EDGEPTEEEES4_(void);

/* Symbol: _Z22determine_newline_typeP4WERDP5BLOCKS0_S2_ */
/* Demangled: determine_newline_type(WERD*, BLOCK*, WERD*, BLOCK*) */
int _Z22determine_newline_typeP4WERDP5BLOCKS0_S2_(void);

/* Symbol: _ZNSt3__16vectorIP11WERD_CHOICENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_ */
/* Demangled: void std::__1::vector<WERD_CHOICE*, std::__1::allocator<WERD_CHOICE*> >::__push_back_slow_path<WERD_CHOICE*>(WERD_CHOICE*&&) */
int _ZNSt3__16vectorIP11WERD_CHOICENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void);

/* Symbol: _ZNSt3__16vectorIdNS_9allocatorIdEEEC2Ej */
/* Demangled: std::__1::vector<double, std::__1::allocator<double> >::vector(unsigned int) */
int _ZNSt3__16vectorIdNS_9allocatorIdEEEC2Ej(void);

/* Symbol: _ZNK6DENORM20LocalDenormTransformERK6FCOORDPS0_ */
/* Demangled: DENORM::LocalDenormTransform(FCOORD const&, FCOORD*) const */
int _ZNK6DENORM20LocalDenormTransformERK6FCOORDPS0_(void);

/* Symbol: _ZN4WERDC2EP11C_BLOB_LISThPKc */
/* Demangled: WERD::WERD(C_BLOB_LIST*, unsigned char, char const*) */
int _ZN4WERDC2EP11C_BLOB_LISThPKc(void);

/* Symbol: _ZN6STRINGpLEPKc */
/* Demangled: STRING::operator+=(char const*) */
int _ZN6STRINGpLEPKc(void);

/* Symbol: TessChoiceIteratorGetUTF8Text */
/* Demangled: TessChoiceIteratorGetUTF8Text */
int TessChoiceIteratorGetUTF8Text(void);

/* Symbol: _ZN13GenericVectorIN9tesseract13UnicharRatingEE9push_backES1_ */
/* Demangled: GenericVector<tesseract::UnicharRating>::push_back(tesseract::UnicharRating) */
int _ZN13GenericVectorIN9tesseract13UnicharRatingEE9push_backES1_(void);

/* Symbol: _ZN14ICOORDELT_LIST9deep_copyEPKS_PFP9ICOORDELTPKS2_E */
/* Demangled: ICOORDELT_LIST::deep_copy(ICOORDELT_LIST const*, ICOORDELT* (*)(ICOORDELT const*)) */
int _ZN14ICOORDELT_LIST9deep_copyEPKS_PFP9ICOORDELTPKS2_E(void);

/* Symbol: _ZN9tesseract4Trie20kDigitPatternUnicodeE */
/* Demangled: tesseract::Trie::kDigitPatternUnicode */
extern void* _ZN9tesseract4Trie20kDigitPatternUnicodeE;

/* Symbol: _ZN9tesseract10ParamUtils11PrintParamsEP7__sFILEPKNS_13ParamsVectorsE */
/* Demangled: tesseract::ParamUtils::PrintParams(__sFILE*, tesseract::ParamsVectors const*) */
int _ZN9tesseract10ParamUtils11PrintParamsEP7__sFILEPKNS_13ParamsVectorsE(void);

/* Symbol: _ZN8WERD_RESD1Ev */
/* Demangled: WERD_RES::~WERD_RES() */
int _ZN8WERD_RESD1Ev(void);

/* Symbol: _ZN6REJMAP19rej_word_mostly_rejEv */
/* Demangled: REJMAP::rej_word_mostly_rej() */
int _ZN6REJMAP19rej_word_mostly_rejEv(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract12DocumentDataEE7reserveEi */
/* Demangled: GenericVector<tesseract::DocumentData*>::reserve(int) */
int _ZN13GenericVectorIPN9tesseract12DocumentDataEE7reserveEi(void);

/* Symbol: _ZN9tesseract13MasterTrainerC1ENS_17NormalizationModeEbbi */
/* Demangled: tesseract::MasterTrainer::MasterTrainer(tesseract::NormalizationMode, bool, bool, int) */
int _ZN9tesseract13MasterTrainerC1ENS_17NormalizationModeEbbi(void);

/* Symbol: _ZN9tesseract13UnicharAmbigs13LoadUniversalERK10UNICHARSETPS1_ */
/* Demangled: tesseract::UnicharAmbigs::LoadUniversal(UNICHARSET const&, UNICHARSET*) */
int _ZN9tesseract13UnicharAmbigs13LoadUniversalERK10UNICHARSETPS1_(void);

/* Symbol: _ZNSt3__16vectorIPN9tesseract9NeuralNetENS_9allocatorIS3_EEE6resizeEjRKS3_ */
/* Demangled: std::__1::vector<tesseract::NeuralNet*, std::__1::allocator<tesseract::NeuralNet*> >::resize(unsigned int, tesseract::NeuralNet* const&) */
int _ZNSt3__16vectorIPN9tesseract9NeuralNetENS_9allocatorIS3_EEE6resizeEjRKS3_(void);

/* Symbol: _ZN9tesseract16ColPartitionGrid22FindVPartitionPartnersEbPNS_12ColPartitionE */
/* Demangled: tesseract::ColPartitionGrid::FindVPartitionPartners(bool, tesseract::ColPartition*) */
int _ZN9tesseract16ColPartitionGrid22FindVPartitionPartnersEbPNS_12ColPartitionE(void);

/* Symbol: _Z10check_blobP5TBLOB */
/* Demangled: check_blob(TBLOB*) */
int _Z10check_blobP5TBLOB(void);

/* Symbol: _ZNK9tesseract8GridBase10GridCoordsEiiPiS1_ */
/* Demangled: tesseract::GridBase::GridCoords(int, int, int*, int*) const */
int _ZNK9tesseract8GridBase10GridCoordsEiiPiS1_(void);

/* Symbol: _ZN9tesseract16ImageThresholder14ThresholdToPixENS_11PageSegModeEPP3Pix */
/* Demangled: tesseract::ImageThresholder::ThresholdToPix(tesseract::PageSegMode, Pix**) */
int _ZN9tesseract16ImageThresholder14ThresholdToPixENS_11PageSegModeEPP3Pix(void);

/* Symbol: words_default_fixed_space */
/* Demangled: words_default_fixed_space */
extern void* words_default_fixed_space;

/* Symbol: _ZN9tesseract7Wordrec14chop_word_mainEP8WERD_RES */
/* Demangled: tesseract::Wordrec::chop_word_main(WERD_RES*) */
int _ZN9tesseract7Wordrec14chop_word_mainEP8WERD_RES(void);

/* Symbol: _ZN6STRING5splitEcP13GenericVectorIS_E */
/* Demangled: STRING::split(char, GenericVector<STRING>*) */
int _ZN6STRING5splitEcP13GenericVectorIS_E(void);

/* Symbol: _ZN9tesseract14EquationDetectD2Ev */
/* Demangled: tesseract::EquationDetect::~EquationDetect() */
int _ZN9tesseract14EquationDetectD2Ev(void);

/* Symbol: _ZN13GenericVectorIN9tesseract11ShapeRatingEEpLERKS2_ */
/* Demangled: GenericVector<tesseract::ShapeRating>::operator+=(GenericVector<tesseract::ShapeRating> const&) */
int _ZN13GenericVectorIN9tesseract11ShapeRatingEEpLERKS2_(void);

/* Symbol: _ZN9tesseract13TessLangModel18num_state_machine_E */
/* Demangled: tesseract::TessLangModel::num_state_machine_ */
extern void* _ZN9tesseract13TessLangModel18num_state_machine_E;

/* Symbol: _ZN13GenericVectorIP8WERD_RESEpLERKS2_ */
/* Demangled: GenericVector<WERD_RES*>::operator+=(GenericVector<WERD_RES*> const&) */
int _ZN13GenericVectorIP8WERD_RESEpLERKS2_(void);

/* Symbol: _ZN9tesseract4Dict17add_document_wordERK11WERD_CHOICE */
/* Demangled: tesseract::Dict::add_document_word(WERD_CHOICE const&) */
int _ZN9tesseract4Dict17add_document_wordERK11WERD_CHOICE(void);

/* Symbol: _ZN9tesseract16ImageThresholderD2Ev */
/* Demangled: tesseract::ImageThresholder::~ImageThresholder() */
int _ZN9tesseract16ImageThresholderD2Ev(void);

/* Symbol: _ZNK8BLOBNBOX13NeighbourGapsEPi */
/* Demangled: BLOBNBOX::NeighbourGaps(int*) const */
int _ZNK8BLOBNBOX13NeighbourGapsEPi(void);

/* Symbol: _ZN6STRINGC1EPKci */
/* Demangled: STRING::STRING(char const*, int) */
int _ZN6STRINGC1EPKci(void);

/* Symbol: _Z11InitBucketsP7BUCKETS */
/* Demangled: InitBuckets(BUCKETS*) */
int _Z11InitBucketsP7BUCKETS(void);

/* Symbol: _ZN9tesseract11BaselineRow24AdjustBaselineToParallelEiRK6FCOORD */
/* Demangled: tesseract::BaselineRow::AdjustBaselineToParallel(int, FCOORD const&) */
int _ZN9tesseract11BaselineRow24AdjustBaselineToParallelEiRK6FCOORD(void);

/* Symbol: _ZN13GenericVectorI4TBOXE6removeEi */
/* Demangled: GenericVector<TBOX>::remove(int) */
int _ZN13GenericVectorI4TBOXE6removeEi(void);

/* Symbol: _Z21make_initial_textrows6ICOORDP8TO_BLOCK6FCOORDh */
/* Demangled: make_initial_textrows(ICOORD, TO_BLOCK*, FCOORD, unsigned char) */
int _Z21make_initial_textrows6ICOORDP8TO_BLOCK6FCOORDh(void);

/* Symbol: _ZNK9tesseract17LTRResultIterator13WordDirectionEv */
/* Demangled: tesseract::LTRResultIterator::WordDirection() const */
int _ZNK9tesseract17LTRResultIterator13WordDirectionEv(void);

/* Symbol: _ZNK5STATS3ileEd */
/* Demangled: STATS::ile(double) const */
int _ZNK5STATS3ileEd(void);

/* Symbol: _ZNK9tesseract13IntFeatureMap12IndexFeatureERK18INT_FEATURE_STRUCT */
/* Demangled: tesseract::IntFeatureMap::IndexFeature(INT_FEATURE_STRUCT const&) const */
int _ZNK9tesseract13IntFeatureMap12IndexFeatureERK18INT_FEATURE_STRUCT(void);

/* Symbol: _ZN9tesseract15TessLangModEdgeC1EPNS_15CubeRecoContextEPKNS_4DawgExxi */
/* Demangled: tesseract::TessLangModEdge::TessLangModEdge(tesseract::CubeRecoContext*, tesseract::Dawg const*, long long, long long, int) */
int _ZN9tesseract15TessLangModEdgeC1EPNS_15CubeRecoContextEPKNS_4DawgExxi(void);

/* Symbol: _ZN9tesseract5CUtilD1Ev */
/* Demangled: tesseract::CUtil::~CUtil() */
int _ZN9tesseract5CUtilD1Ev(void);

/* Symbol: _ZN9tesseract14IsOpeningPunctEi */
/* Demangled: tesseract::IsOpeningPunct(int) */
int _ZN9tesseract14IsOpeningPunctEi(void);

/* Symbol: _ZNSt3__114__split_bufferIdRNS_9allocatorIdEEED2Ev */
/* Demangled: std::__1::__split_buffer<double, std::__1::allocator<double>&>::~__split_buffer() */
int _ZNSt3__114__split_bufferIdRNS_9allocatorIdEEED2Ev(void);

/* Symbol: _ZN12BlamerBundle15FillDebugStringERK6STRINGPK11WERD_CHOICEPS0_ */
/* Demangled: BlamerBundle::FillDebugString(STRING const&, WERD_CHOICE const*, STRING*) */
int _ZN12BlamerBundle15FillDebugStringERK6STRINGPK11WERD_CHOICEPS0_(void);

/* Symbol: _ZN9tesseract18CubeTessClassifierC2EPNS_9TesseractE */
/* Demangled: tesseract::CubeTessClassifier::CubeTessClassifier(tesseract::Tesseract*) */
int _ZN9tesseract18CubeTessClassifierC2EPNS_9TesseractE(void);

/* Symbol: _ZN12BlamerBundle12SetWordTruthERK10UNICHARSETPKcRK4TBOX */
/* Demangled: BlamerBundle::SetWordTruth(UNICHARSET const&, char const*, TBOX const&) */
int _ZN12BlamerBundle12SetWordTruthERK10UNICHARSETPKcRK4TBOX(void);

/* Symbol: _ZN9tesseract9BitVector11SetAllFalseEv */
/* Demangled: tesseract::BitVector::SetAllFalse() */
int _ZN9tesseract9BitVector11SetAllFalseEv(void);

/* Symbol: _ZN9tesseract13BaselineBlock20ParallelizeBaselinesEd */
/* Demangled: tesseract::BaselineBlock::ParallelizeBaselines(double) */
int _ZN9tesseract13BaselineBlock20ParallelizeBaselinesEd(void);

/* Symbol: _ZN9tesseract7Textord22clean_noise_from_wordsEP3ROW */
/* Demangled: tesseract::Textord::clean_noise_from_words(ROW*) */
int _ZN9tesseract7Textord22clean_noise_from_wordsEP3ROW(void);

/* Symbol: _ZN6REJMAP20rej_word_bad_qualityEv */
/* Demangled: REJMAP::rej_word_bad_quality() */
int _ZN6REJMAP20rej_word_bad_qualityEv(void);

/* Symbol: _ZN9tesseract7Wordrec14program_editupEPKcbb */
/* Demangled: tesseract::Wordrec::program_editup(char const*, bool, bool) */
int _ZN9tesseract7Wordrec14program_editupEPKcbb(void);

/* Symbol: _ZN7QSPLINEC2ERKS_ */
/* Demangled: QSPLINE::QSPLINE(QSPLINE const&) */
int _ZN7QSPLINEC2ERKS_(void);

/* Symbol: _ZN9tesseract9Tesseract15script_pos_passEP8PAGE_RES */
/* Demangled: tesseract::Tesseract::script_pos_pass(PAGE_RES*) */
int _ZN9tesseract9Tesseract15script_pos_passEP8PAGE_RES(void);

/* Symbol: _ZN9tesseract24DowngradeWeakestToCrownsEiPNS_15ParagraphTheoryEP13GenericVectorINS_19RowScratchRegistersEE */
/* Demangled: tesseract::DowngradeWeakestToCrowns(int, tesseract::ParagraphTheory*, GenericVector<tesseract::RowScratchRegisters>*) */
int _ZN9tesseract24DowngradeWeakestToCrownsEiPNS_15ParagraphTheoryEP13GenericVectorINS_19RowScratchRegistersEE(void);

/* Symbol: _ZN6DENORM5ClearEv */
/* Demangled: DENORM::Clear() */
int _ZN6DENORM5ClearEv(void);

/* Symbol: _ZN9tesseract4Dict15permute_choicesEPKcRK13GenericVectorIP16BLOB_CHOICE_LISTEiPK18CHAR_FRAGMENT_INFOP11WERD_CHOICEPfSE_SD_PiPv */
/* Demangled: tesseract::Dict::permute_choices(char const*, GenericVector<BLOB_CHOICE_LIST*> const&, int, CHAR_FRAGMENT_INFO const*, WERD_CHOICE*, float*, float*, WERD_CHOICE*, int*, void*) */
int _ZN9tesseract4Dict15permute_choicesEPKcRK13GenericVectorIP16BLOB_CHOICE_LISTEiPK18CHAR_FRAGMENT_INFOP11WERD_CHOICEPfSE_SD_PiPv(void);

/* Symbol: textord_debug_pitch_metric */
/* Demangled: textord_debug_pitch_metric */
extern void* textord_debug_pitch_metric;

/* Symbol: TessResultIteratorWordRecognitionLanguage */
/* Demangled: TessResultIteratorWordRecognitionLanguage */
int TessResultIteratorWordRecognitionLanguage(void);

/* Symbol: _ZN9tesseract9Tesseract11blamer_passEP8PAGE_RES */
/* Demangled: tesseract::Tesseract::blamer_pass(PAGE_RES*) */
int _ZN9tesseract9Tesseract11blamer_passEP8PAGE_RES(void);

/* Symbol: _ZN9tesseract9Tesseract20fix_noisy_space_listER13WERD_RES_LISTP3ROWP5BLOCK */
/* Demangled: tesseract::Tesseract::fix_noisy_space_list(WERD_RES_LIST&, ROW*, BLOCK*) */
int _ZN9tesseract9Tesseract20fix_noisy_space_listER13WERD_RES_LISTP3ROWP5BLOCK(void);

/* Symbol: _ZN9tesseract9TesseractD2Ev */
/* Demangled: tesseract::Tesseract::~Tesseract() */
int _ZN9tesseract9TesseractD2Ev(void);

/* Symbol: _ZN9tesseract4Bmp87DeslantEv */
/* Demangled: tesseract::Bmp8::Deslant() */
int _ZN9tesseract4Bmp87DeslantEv(void);

/* Symbol: _ZN9tesseract11CharBigramsD2Ev */
/* Demangled: tesseract::CharBigrams::~CharBigrams() */
int _ZN9tesseract11CharBigramsD2Ev(void);

/* Symbol: _ZN9tesseract15ColPartitionSet17ChangeWorkColumnsERK6ICOORDS3_iPNS_17ColPartition_LISTEPNS_19WorkingPartSet_LISTE */
/* Demangled: tesseract::ColPartitionSet::ChangeWorkColumns(ICOORD const&, ICOORD const&, int, tesseract::ColPartition_LIST*, tesseract::WorkingPartSet_LIST*) */
int _ZN9tesseract15ColPartitionSet17ChangeWorkColumnsERK6ICOORDS3_iPNS_17ColPartition_LISTEPNS_19WorkingPartSet_LISTE(void);

/* Symbol: _ZN9tesseract10DetLineFit14ConstrainedFitEdPf */
/* Demangled: tesseract::DetLineFit::ConstrainedFit(double, float*) */
int _ZN9tesseract10DetLineFit14ConstrainedFitEdPf(void);

/* Symbol: TessBaseAPIGetIterator */
/* Demangled: TessBaseAPIGetIterator */
int TessBaseAPIGetIterator(void);

/* Symbol: _ZN10POLY_BLOCK10compute_bbEv */
/* Demangled: POLY_BLOCK::compute_bb() */
int _ZN10POLY_BLOCK10compute_bbEv(void);

/* Symbol: _ZN13GenericVectorIiE6insertEii */
/* Demangled: GenericVector<int>::insert(int, int) */
int _ZN13GenericVectorIiE6insertEii(void);

/* Symbol: _Z12NewTempProtov */
/* Demangled: NewTempProto() */
int _Z12NewTempProtov(void);

/* Symbol: _Z20IMDebugConfigurationithPjj */
/* Demangled: IMDebugConfiguration(int, unsigned short, unsigned char, unsigned int*, unsigned int) */
int _Z20IMDebugConfigurationithPjj(void);

/* Symbol: _ZN14IntegerMatcher13FindBestMatchEP16INT_CLASS_STRUCTRK15ScratchEvidencePN9tesseract13UnicharRatingE */
/* Demangled: IntegerMatcher::FindBestMatch(INT_CLASS_STRUCT*, ScratchEvidence const&, tesseract::UnicharRating*) */
int _ZN14IntegerMatcher13FindBestMatchEP16INT_CLASS_STRUCTRK15ScratchEvidencePN9tesseract13UnicharRatingE(void);

/* Symbol: _Z12FreeOutlinesP8list_rec */
/* Demangled: FreeOutlines(list_rec*) */
int _Z12FreeOutlinesP8list_rec(void);

/* Symbol: _ZN9tesseract9CubeUtils9Prob2CostEd */
/* Demangled: tesseract::CubeUtils::Prob2Cost(double) */
int _ZN9tesseract9CubeUtils9Prob2CostEd(void);

/* Symbol: _Z6searchP8list_recPvP19TessResultCallback2IiS1_S1_E */
/* Demangled: search(list_rec*, void*, TessResultCallback2<int, void*, void*>*) */
int _Z6searchP8list_recPvP19TessResultCallback2IiS1_S1_E(void);

/* Symbol: edges_children_fix */
/* Demangled: edges_children_fix */
extern void* edges_children_fix;

/* Symbol: _Z12make_marginsP5PDBLKP13BLOCK_LINE_ITPhhsss */
/* Demangled: make_margins(PDBLK*, BLOCK_LINE_IT*, unsigned char*, unsigned char, short, short, short) */
int _Z12make_marginsP5PDBLKP13BLOCK_LINE_ITPhhsss(void);

/* Symbol: _ZN9tesseract9Tesseract22process_selected_wordsEP8PAGE_RESR4TBOXMS0_FhP11PAGE_RES_ITE */
/* Demangled: tesseract::Tesseract::process_selected_words(PAGE_RES*, TBOX&, unsigned char (tesseract::Tesseract::*)(PAGE_RES_IT*)) */
int _ZN9tesseract9Tesseract22process_selected_wordsEP8PAGE_RESR4TBOXMS0_FhP11PAGE_RES_ITE(void);

/* Symbol: _ZNK9tesseract16ImageThresholder18ThresholdRectToPixEP3PixiPKiS4_PS2_ */
/* Demangled: tesseract::ImageThresholder::ThresholdRectToPix(Pix*, int, int const*, int const*, Pix**) const */
int _ZNK9tesseract16ImageThresholder18ThresholdRectToPixEP3PixiPKiS4_PS2_(void);

/* Symbol: _ZN9tesseract9NeuralNet8AllocWgtEi */
/* Demangled: tesseract::NeuralNet::AllocWgt(int) */
int _ZN9tesseract9NeuralNet8AllocWgtEi(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: TessBaseAPIGetHOCRText */
/* Demangled: TessBaseAPIGetHOCRText */
int TessBaseAPIGetHOCRText(void);

/* Symbol: _ZNK9tesseract19RowScratchRegisters20UniqueBodyHypothesisEv */
/* Demangled: tesseract::RowScratchRegisters::UniqueBodyHypothesis() const */
int _ZNK9tesseract19RowScratchRegisters20UniqueBodyHypothesisEv(void);

/* Symbol: _Z19TestEllipticalProtoP9CLUSTERERP13CLUSTERCONFIGP6sampleP10STATISTICS */
/* Demangled: TestEllipticalProto(CLUSTERER*, CLUSTERCONFIG*, sample*, STATISTICS*) */
int _Z19TestEllipticalProtoP9CLUSTERERP13CLUSTERCONFIGP6sampleP10STATISTICS(void);

/* Symbol: _Z8nth_cellP8list_reci */
/* Demangled: nth_cell(list_rec*, int) */
int _Z8nth_cellP8list_reci(void);

/* Symbol: _ZN13GenericVectorIN9tesseract14LineHypothesisEE13push_back_newES1_ */
/* Demangled: GenericVector<tesseract::LineHypothesis>::push_back_new(tesseract::LineHypothesis) */
int _ZN13GenericVectorIN9tesseract14LineHypothesisEE13push_back_newES1_(void);

/* Symbol: _ZN13GenericVectorIP5TBLOBE7reserveEi */
/* Demangled: GenericVector<TBLOB*>::reserve(int) */
int _ZN13GenericVectorIP5TBLOBE7reserveEi(void);

/* Symbol: _ZN13GenericVectorItE9push_backEt */
/* Demangled: GenericVector<unsigned short>::push_back(unsigned short) */
int _ZN13GenericVectorItE9push_backEt(void);

/* Symbol: _ZNSt3__114__split_bufferIPN9tesseract9NeuralNetERNS_9allocatorIS3_EEED2Ev */
/* Demangled: std::__1::__split_buffer<tesseract::NeuralNet*, std::__1::allocator<tesseract::NeuralNet*>&>::~__split_buffer() */
int _ZNSt3__114__split_bufferIPN9tesseract9NeuralNetERNS_9allocatorIS3_EEED2Ev(void);

/* Symbol: _ZN9tesseract12ColumnFinder20ComputeMeanColumnGapEb */
/* Demangled: tesseract::ColumnFinder::ComputeMeanColumnGap(bool) */
int _ZN9tesseract12ColumnFinder20ComputeMeanColumnGapEb(void);

/* Symbol: _ZN6REJMAP10initialiseEs */
/* Demangled: REJMAP::initialise(short) */
int _ZN6REJMAP10initialiseEs(void);

/* Symbol: _ZNK9tesseract15ShapeClassifier13GetUnicharsetEv */
/* Demangled: tesseract::ShapeClassifier::GetUnicharset() const */
int _ZNK9tesseract15ShapeClassifier13GetUnicharsetEv(void);

/* Symbol: _ZN9C_OUTLINE4moveE6ICOORD */
/* Demangled: C_OUTLINE::move(ICOORD) */
int _ZN9C_OUTLINE4moveE6ICOORD(void);

/* Symbol: _Z13ConvertConfigPjiP16INT_CLASS_STRUCT */
/* Demangled: ConvertConfig(unsigned int*, int, INT_CLASS_STRUCT*) */
int _Z13ConvertConfigPjiP16INT_CLASS_STRUCT(void);

/* Symbol: _ZNK9tesseract8FontInfo9SerializeEP7__sFILE */
/* Demangled: tesseract::FontInfo::Serialize(__sFILE*) const */
int _ZNK9tesseract8FontInfo9SerializeEP7__sFILE(void);

/* Symbol: _Z13CircBucketForffi */
/* Demangled: CircBucketFor(float, float, int) */
int _Z13CircBucketForffi(void);

/* Symbol: _ZN9tesseract7TabFind21NothingYOverlapsInBoxERK4TBOXS3_ */
/* Demangled: tesseract::TabFind::NothingYOverlapsInBox(TBOX const&, TBOX const&) */
int _ZN9tesseract7TabFind21NothingYOverlapsInBoxERK4TBOXS3_(void);

/* Symbol: _ZN9tesseract13LanguageModel19FillConsistencyInfoEibP11BLOB_CHOICEPNS_17ViterbiStateEntryEP8WERD_RESPNS_17LMConsistencyInfoE */
/* Demangled: tesseract::LanguageModel::FillConsistencyInfo(int, bool, BLOB_CHOICE*, tesseract::ViterbiStateEntry*, WERD_RES*, tesseract::LMConsistencyInfo*) */
int _ZN9tesseract13LanguageModel19FillConsistencyInfoEibP11BLOB_CHOICEPNS_17ViterbiStateEntryEP8WERD_RESPNS_17LMConsistencyInfoE(void);

/* Symbol: _ZN9tesseract11TessBaseAPI9RecognizeEP10ETEXT_DESC */
/* Demangled: tesseract::TessBaseAPI::Recognize(ETEXT_DESC*) */
int _ZN9tesseract11TessBaseAPI9RecognizeEP10ETEXT_DESC(void);

/* Symbol: _ZN13GenericVectorIN9tesseract9KDPairIncIfP11TEMPCLUSTEREEE15double_the_sizeEv */
/* Demangled: GenericVector<tesseract::KDPairInc<float, TEMPCLUSTER*> >::double_the_size() */
int _ZN13GenericVectorIN9tesseract9KDPairIncIfP11TEMPCLUSTEREEE15double_the_sizeEv(void);

/* Symbol: _ZN9tesseract10DetLineFit3AddERK6ICOORD */
/* Demangled: tesseract::DetLineFit::Add(ICOORD const&) */
int _ZN9tesseract10DetLineFit3AddERK6ICOORD(void);

/* Symbol: _ZN9tesseract12SearchColumn4InitEv */
/* Demangled: tesseract::SearchColumn::Init() */
int _ZN9tesseract12SearchColumn4InitEv(void);

/* Symbol: _ZNK9tesseract14TrainingSample14RandomizedCopyEi */
/* Demangled: tesseract::TrainingSample::RandomizedCopy(int) const */
int _ZNK9tesseract14TrainingSample14RandomizedCopyEi(void);

/* Symbol: _ZN9tesseract9Tesseract14noise_outlinesEP5TWERD */
/* Demangled: tesseract::Tesseract::noise_outlines(TWERD*) */
int _ZN9tesseract9Tesseract14noise_outlinesEP5TWERD(void);

/* Symbol: _ZTVN9tesseract18EquationDetectBaseE */
/* Demangled: vtable for tesseract::EquationDetectBase */
extern void* _ZTVN9tesseract18EquationDetectBaseE;

/* Symbol: _ZN6DENORMC2Ev */
/* Demangled: DENORM::DENORM() */
int _ZN6DENORMC2Ev(void);

/* Symbol: _ZN9tesseract11CharSampSet11EnumSamplesENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPNS_12CharSampEnumE */
/* Demangled: tesseract::CharSampSet::EnumSamples(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, tesseract::CharSampEnum*) */
int _ZN9tesseract11CharSampSet11EnumSamplesENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPNS_12CharSampEnumE(void);

/* Symbol: _ZN9tesseract29HybridNeuralNetCharClassifierD1Ev */
/* Demangled: tesseract::HybridNeuralNetCharClassifier::~HybridNeuralNetCharClassifier() */
int _ZN9tesseract29HybridNeuralNetCharClassifierD1Ev(void);

/* Symbol: _ZN9tesseract7TabFind17ConfirmRaggedLeftEP8BLOBNBOXi */
/* Demangled: tesseract::TabFind::ConfirmRaggedLeft(BLOBNBOX*, int) */
int _ZN9tesseract7TabFind17ConfirmRaggedLeftEP8BLOBNBOXi(void);

/* Symbol: _ZNK9tesseract18TextlineProjection19EvaluateBoxInternalERK4TBOXPK6DENORMbPiS7_S7_S7_ */
/* Demangled: tesseract::TextlineProjection::EvaluateBoxInternal(TBOX const&, DENORM const*, bool, int*, int*, int*, int*) const */
int _ZNK9tesseract18TextlineProjection19EvaluateBoxInternalERK4TBOXPK6DENORMbPiS7_S7_S7_(void);

/* Symbol: _ZN9tesseract10CubeObjectC1EPNS_15CubeRecoContextEP3Pixiiii */
/* Demangled: tesseract::CubeObject::CubeObject(tesseract::CubeRecoContext*, Pix*, int, int, int, int) */
int _ZN9tesseract10CubeObjectC1EPNS_15CubeRecoContextEP3Pixiiii(void);

/* Symbol: _ZN13GenericVectorIPK14ParagraphModelE9push_backES2_ */
/* Demangled: GenericVector<ParagraphModel const*>::push_back(ParagraphModel const*) */
int _ZN13GenericVectorIPK14ParagraphModelE9push_backES2_(void);

/* Symbol: _ZNK9C_OUTLINE14render_outlineEiiP3Pix */
/* Demangled: C_OUTLINE::render_outline(int, int, Pix*) const */
int _ZNK9C_OUTLINE14render_outlineEiiP3Pix(void);

/* Symbol: _Z13TruncateParamfiiPc */
/* Demangled: TruncateParam(float, int, int, char*) */
int _Z13TruncateParamfiiPc(void);

/* Symbol: _ZN9tesseract4Dict14append_choicesEPKcRK13GenericVectorIP16BLOB_CHOICE_LISTERK11BLOB_CHOICEiPK18CHAR_FRAGMENT_INFOP11WERD_CHOICEPfSH_SG_PiPv */
/* Demangled: tesseract::Dict::append_choices(char const*, GenericVector<BLOB_CHOICE_LIST*> const&, BLOB_CHOICE const&, int, CHAR_FRAGMENT_INFO const*, WERD_CHOICE*, float*, float*, WERD_CHOICE*, int*, void*) */
int _ZN9tesseract4Dict14append_choicesEPKcRK13GenericVectorIP16BLOB_CHOICE_LISTERK11BLOB_CHOICEiPK18CHAR_FRAGMENT_INFOP11WERD_CHOICEPfSH_SG_PiPv(void);

/* Symbol: _ZNK10UNICHARSET9debug_strEi */
/* Demangled: UNICHARSET::debug_str(int) const */
int _ZNK10UNICHARSET9debug_strEi(void);

/* Symbol: _ZN13GenericVectorIPK14ParagraphModelEpLERKS3_ */
/* Demangled: GenericVector<ParagraphModel const*>::operator+=(GenericVector<ParagraphModel const*> const&) */
int _ZN13GenericVectorIPK14ParagraphModelEpLERKS3_(void);

/* Symbol: _ZN9tesseract10CachedFileC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: tesseract::CachedFile::CachedFile(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN9tesseract10CachedFileC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN9tesseract15TableRecognizerC2Ev */
/* Demangled: tesseract::TableRecognizer::TableRecognizer() */
int _ZN9tesseract15TableRecognizerC2Ev(void);

/* Symbol: _ZN13GenericVectorIN9tesseract8BlobDataEE15double_the_sizeEv */
/* Demangled: GenericVector<tesseract::BlobData>::double_the_size() */
int _ZN13GenericVectorIN9tesseract8BlobDataEE15double_the_sizeEv(void);

/* Symbol: _ZN9tesseract14LikelyListMarkERK6STRING */
/* Demangled: tesseract::LikelyListMark(STRING const&) */
int _ZN9tesseract14LikelyListMarkERK6STRING(void);

/* Symbol: _ZN13GenericVectorIcE7reserveEi */
/* Demangled: GenericVector<char>::reserve(int) */
int _ZN13GenericVectorIcE7reserveEi(void);

/* Symbol: _ZNK9tesseract19RowScratchRegisters15StartHypothesesEP17GenericVectorEqEqIPK14ParagraphModelE */
/* Demangled: tesseract::RowScratchRegisters::StartHypotheses(GenericVectorEqEq<ParagraphModel const*>*) const */
int _ZNK9tesseract19RowScratchRegisters15StartHypothesesEP17GenericVectorEqEqIPK14ParagraphModelE(void);

/* Symbol: _Z14FreePermConfigP18PERM_CONFIG_STRUCT */
/* Demangled: FreePermConfig(PERM_CONFIG_STRUCT*) */
int _Z14FreePermConfigP18PERM_CONFIG_STRUCT(void);

/* Symbol: _ZN9tesseract9NeuralNet4InitEv */
/* Demangled: tesseract::NeuralNet::Init() */
int _ZN9tesseract9NeuralNet4InitEv(void);

/* Symbol: _ZN9tesseract14BaselineDetectD2Ev */
/* Demangled: tesseract::BaselineDetect::~BaselineDetect() */
int _ZN9tesseract14BaselineDetectD2Ev(void);

/* Symbol: _ZN9tesseract8Classify13AdaptableWordEP8WERD_RES */
/* Demangled: tesseract::Classify::AdaptableWord(WERD_RES*) */
int _ZN9tesseract8Classify13AdaptableWordEP8WERD_RES(void);

/* Symbol: _ZN9tesseract10GridSearchINS_12ColPartitionENS_18ColPartition_CLISTENS_17ColPartition_C_ITEE14NextFullSearchEv */
/* Demangled: tesseract::GridSearch<tesseract::ColPartition, tesseract::ColPartition_CLIST, tesseract::ColPartition_C_IT>::NextFullSearch() */
int _ZN9tesseract10GridSearchINS_12ColPartitionENS_18ColPartition_CLISTENS_17ColPartition_C_ITEE14NextFullSearchEv(void);

/* Symbol: _ZNK9tesseract12PageIterator20PositionedAtSameWordEPK11PAGE_RES_IT */
/* Demangled: tesseract::PageIterator::PositionedAtSameWord(PAGE_RES_IT const*) const */
int _ZNK9tesseract12PageIterator20PositionedAtSameWordEPK11PAGE_RES_IT(void);

/* Symbol: _ZN9tesseract8Classify12AddNewResultERKNS_13UnicharRatingEP13ADAPT_RESULTS */
/* Demangled: tesseract::Classify::AddNewResult(tesseract::UnicharRating const&, ADAPT_RESULTS*) */
int _ZN9tesseract8Classify12AddNewResultERKNS_13UnicharRatingEP13ADAPT_RESULTS(void);

/* Symbol: _ZN9tesseract17TrainingSampleSet16DeleteableSampleEPKNS_14TrainingSampleE */
/* Demangled: tesseract::TrainingSampleSet::DeleteableSample(tesseract::TrainingSample const*) */
int _ZN9tesseract17TrainingSampleSet16DeleteableSampleEPKNS_14TrainingSampleE(void);

/* Symbol: _ZN9tesseract15InputFileBufferD1Ev */
/* Demangled: tesseract::InputFileBuffer::~InputFileBuffer() */
int _ZN9tesseract15InputFileBufferD1Ev(void);

/* Symbol: _ZN13GenericVectorIN9tesseract9KDPairIncIf12MATRIX_COORDEEE7reserveEi */
/* Demangled: GenericVector<tesseract::KDPairInc<float, MATRIX_COORD> >::reserve(int) */
int _ZN13GenericVectorIN9tesseract9KDPairIncIf12MATRIX_COORDEEE7reserveEi(void);

/* Symbol: _Z7Emalloci */
/* Demangled: Emalloc(int) */
int _Z7Emalloci(void);

/* Symbol: _ZNK9tesseract17LTRResultIterator13WordIsNumericEv */
/* Demangled: tesseract::LTRResultIterator::WordIsNumeric() const */
int _ZNK9tesseract17LTRResultIterator13WordIsNumericEv(void);

/* Symbol: _ZN13GenericVectorIN9tesseract24ParamsTrainingHypothesisEE7reserveEi */
/* Demangled: GenericVector<tesseract::ParamsTrainingHypothesis>::reserve(int) */
int _ZN13GenericVectorIN9tesseract24ParamsTrainingHypothesisEE7reserveEi(void);

/* Symbol: _ZN9tesseract13FontInfoTable19MoveSpacingInfoFromEPS0_ */
/* Demangled: tesseract::FontInfoTable::MoveSpacingInfoFrom(tesseract::FontInfoTable*) */
int _ZN9tesseract13FontInfoTable19MoveSpacingInfoFromEPS0_(void);

/* Symbol: _ZN9tesseract12DocumentData12LoadDocumentEPKcS2_ixPFbRK6STRINGP13GenericVectorIcEE */
/* Demangled: tesseract::DocumentData::LoadDocument(char const*, char const*, int, long long, bool (*)(STRING const&, GenericVector<char>*)) */
int _ZN9tesseract12DocumentData12LoadDocumentEPKcS2_ixPFbRK6STRINGP13GenericVectorIcEE(void);

/* Symbol: _ZN9tesseract8GridBaseD0Ev */
/* Demangled: tesseract::GridBase::~GridBase() */
int _ZN9tesseract8GridBaseD0Ev(void);

/* Symbol: _ZN9tesseract14EquationDetect16LabelSpecialTextEP8TO_BLOCK */
/* Demangled: tesseract::EquationDetect::LabelSpecialText(TO_BLOCK*) */
int _ZN9tesseract14EquationDetect16LabelSpecialTextEP8TO_BLOCK(void);

/* Symbol: _ZNK9tesseract10ShapeTable10SummaryStrEv */
/* Demangled: tesseract::ShapeTable::SummaryStr() const */
int _ZNK9tesseract10ShapeTable10SummaryStrEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPfRNS_9allocatorIS1_EEED2Ev */
/* Demangled: std::__1::__split_buffer<float*, std::__1::allocator<float*>&>::~__split_buffer() */
int _ZNSt3__114__split_bufferIPfRNS_9allocatorIS1_EEED2Ev(void);

/* Symbol: _ZN9tesseract10GridSearchI8BLOBNBOX14BLOBNBOX_CLIST13BLOBNBOX_C_ITE11CommonStartEii */
/* Demangled: tesseract::GridSearch<BLOBNBOX, BLOBNBOX_CLIST, BLOBNBOX_C_IT>::CommonStart(int, int) */
int _ZN9tesseract10GridSearchI8BLOBNBOX14BLOBNBOX_CLIST13BLOBNBOX_C_ITE11CommonStartEii(void);

/* Symbol: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeGetVersion */
/* Demangled: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeGetVersion */
int Java_com_googlecode_tesseract_android_TessBaseAPI_nativeGetVersion(void);

/* Symbol: _ZN9tesseract14ResultIteratorC2ERKNS_17LTRResultIteratorE */
/* Demangled: tesseract::ResultIterator::ResultIterator(tesseract::LTRResultIterator const&) */
int _ZN9tesseract14ResultIteratorC2ERKNS_17LTRResultIteratorE(void);

/* Symbol: _Z12ReadMemBoxesibPKcP13GenericVectorI4TBOXEPS1_I6STRINGES7_PS1_IiE */
/* Demangled: ReadMemBoxes(int, bool, char const*, GenericVector<TBOX>*, GenericVector<STRING>*, GenericVector<STRING>*, GenericVector<int>*) */
int _Z12ReadMemBoxesibPKcP13GenericVectorI4TBOXEPS1_I6STRINGES7_PS1_IiE(void);

/* Symbol: _ZN13GenericVectorIdE9push_backEd */
/* Demangled: GenericVector<double>::push_back(double) */
int _ZN13GenericVectorIdE9push_backEd(void);

/* Symbol: _ZN9tesseract19TabVector_c1_zapperEPv */
/* Demangled: tesseract::TabVector_c1_zapper(void*) */
int _ZN9tesseract19TabVector_c1_zapperEPv(void);

/* Symbol: _ZN9tesseract11TessBaseAPI16RecognitionPass1EP10BLOCK_LIST */
/* Demangled: tesseract::TessBaseAPI::RecognitionPass1(BLOCK_LIST*) */
int _ZN9tesseract11TessBaseAPI16RecognitionPass1EP10BLOCK_LIST(void);

/* Symbol: _ZN9tesseract14CubeClassifierD2Ev */
/* Demangled: tesseract::CubeClassifier::~CubeClassifier() */
int _ZN9tesseract14CubeClassifierD2Ev(void);

/* Symbol: _ZN9tesseract9Tesseract24unrej_good_quality_wordsER11PAGE_RES_IT */
/* Demangled: tesseract::Tesseract::unrej_good_quality_words(PAGE_RES_IT&) */
int _ZN9tesseract9Tesseract24unrej_good_quality_wordsER11PAGE_RES_IT(void);

/* Symbol: _ZNK4SEAM15CombineableWithERKS_if */
/* Demangled: SEAM::CombineableWith(SEAM const&, int, float) const */
int _ZNK4SEAM15CombineableWithERKS_if(void);

/* Symbol: _Z12swap_entriesPvjii */
/* Demangled: swap_entries(void*, unsigned int, int, int) */
int _Z12swap_entriesPvjii(void);

/* Symbol: _ZN9tesseract16ColPartitionGrid23RefinePartitionPartnersEb */
/* Demangled: tesseract::ColPartitionGrid::RefinePartitionPartners(bool) */
int _ZN9tesseract16ColPartitionGrid23RefinePartitionPartnersEb(void);

/* Symbol: _ZN9tesseract7BoxWordC1Ev */
/* Demangled: tesseract::BoxWord::BoxWord() */
int _ZN9tesseract7BoxWordC1Ev(void);

/* Symbol: _ZN9tesseract8Classify24SwitchAdaptiveClassifierEv */
/* Demangled: tesseract::Classify::SwitchAdaptiveClassifier() */
int _ZN9tesseract8Classify24SwitchAdaptiveClassifierEv(void);

/* Symbol: _ZN5PDBLK11render_maskERK6FCOORDP4TBOX */
/* Demangled: PDBLK::render_mask(FCOORD const&, TBOX*) */
int _ZN5PDBLK11render_maskERK6FCOORDP4TBOX(void);

/* Symbol: _ZNK5SPLIT6RevealEv */
/* Demangled: SPLIT::Reveal() const */
int _ZNK5SPLIT6RevealEv(void);

/* Symbol: _ZN9tesseract16CubeTuningParamsD1Ev */
/* Demangled: tesseract::CubeTuningParams::~CubeTuningParams() */
int _ZN9tesseract16CubeTuningParamsD1Ev(void);

/* Symbol: _ZN9tesseract13DocumentCache17GetPageSequentialEi */
/* Demangled: tesseract::DocumentCache::GetPageSequential(int) */
int _ZN9tesseract13DocumentCache17GetPageSequentialEi(void);

/* Symbol: _ZN10UNICHARSET21AppendOtherUnicharsetERKS_ */
/* Demangled: UNICHARSET::AppendOtherUnicharset(UNICHARSET const&) */
int _ZN10UNICHARSET21AppendOtherUnicharsetERKS_(void);

/* Symbol: _ZN9tesseract8Classify20ReadAdaptedTemplatesEP7__sFILE */
/* Demangled: tesseract::Classify::ReadAdaptedTemplates(__sFILE*) */
int _ZN9tesseract8Classify20ReadAdaptedTemplatesEP7__sFILE(void);

/* Symbol: _Z10GetBucketsP9CLUSTERER12DISTRIBUTIONjd */
/* Demangled: GetBuckets(CLUSTERER*, DISTRIBUTION, unsigned int, double) */
int _Z10GetBucketsP9CLUSTERER12DISTRIBUTIONjd(void);

/* Symbol: textord_min_xheight */
/* Demangled: textord_min_xheight */
extern void* textord_min_xheight;

/* Symbol: textord_test_mode */
/* Demangled: textord_test_mode */
extern void* textord_test_mode;

/* Symbol: _ZN9tesseract9Tesseract24init_tesseract_lang_dataEPKcS2_S2_NS_13OcrEngineModeEPPciPK13GenericVectorI6STRINGESA_b */
/* Demangled: tesseract::Tesseract::init_tesseract_lang_data(char const*, char const*, char const*, tesseract::OcrEngineMode, char**, int, GenericVector<STRING> const*, GenericVector<STRING> const*, bool) */
int _ZN9tesseract9Tesseract24init_tesseract_lang_dataEPKcS2_S2_NS_13OcrEngineModeEPPciPK13GenericVectorI6STRINGESA_b(void);

/* Symbol: _ZNK9tesseract12ColPartition16TopSpacingMarginEi */
/* Demangled: tesseract::ColPartition::TopSpacingMargin(int) const */
int _ZNK9tesseract12ColPartition16TopSpacingMarginEi(void);

/* Symbol: TessBaseAPIGetDawg */
/* Demangled: TessBaseAPIGetDawg */
int TessBaseAPIGetDawg(void);

/* Symbol: _ZNK11WERD_CHOICE19contains_unichar_idEi */
/* Demangled: WERD_CHOICE::contains_unichar_id(int) const */
int _ZNK11WERD_CHOICE19contains_unichar_idEi(void);

/* Symbol: _ZN9tesseract12ColPartition22RefinePartnerShortcutsEbPNS_18ColPartition_CLISTE */
/* Demangled: tesseract::ColPartition::RefinePartnerShortcuts(bool, tesseract::ColPartition_CLIST*) */
int _ZN9tesseract12ColPartition22RefinePartnerShortcutsEbPNS_18ColPartition_CLISTE(void);

/* Symbol: _ZN9tesseract11TableFinder20DisplayColPartitionsEP10ScrollViewPNS_16ColPartitionGridENS1_5ColorES5_ */
/* Demangled: tesseract::TableFinder::DisplayColPartitions(ScrollView*, tesseract::ColPartitionGrid*, ScrollView::Color, ScrollView::Color) */
int _ZN9tesseract11TableFinder20DisplayColPartitionsEP10ScrollViewPNS_16ColPartitionGridENS1_5ColorES5_(void);

/* Symbol: _ZN8TO_BLOCK18ComputeEdgeOffsetsEP3PixS1_ */
/* Demangled: TO_BLOCK::ComputeEdgeOffsets(Pix*, Pix*) */
int _ZN8TO_BLOCK18ComputeEdgeOffsetsEP3PixS1_(void);

/* Symbol: _ZN9tesseract7ConComp5MergeEPS0_ */
/* Demangled: tesseract::ConComp::Merge(tesseract::ConComp*) */
int _ZN9tesseract7ConComp5MergeEPS0_(void);

/* Symbol: textord_min_linesize */
/* Demangled: textord_min_linesize */
extern void* textord_min_linesize;

/* Symbol: textord_straight_baselines */
/* Demangled: textord_straight_baselines */
extern void* textord_straight_baselines;

/* Symbol: _ZN9tesseract16TessTextRendererC2EPKc */
/* Demangled: tesseract::TessTextRenderer::TessTextRenderer(char const*) */
int _ZN9tesseract16TessTextRendererC2EPKc(void);

/* Symbol: _ZN9tesseract13TabConstraint21CompatibleConstraintsEPNS_18TabConstraint_LISTES2_ */
/* Demangled: tesseract::TabConstraint::CompatibleConstraints(tesseract::TabConstraint_LIST*, tesseract::TabConstraint_LIST*) */
int _ZN9tesseract13TabConstraint21CompatibleConstraintsEPNS_18TabConstraint_LISTES2_(void);

/* Symbol: _Z10make_wordsPN9tesseract7TextordE6ICOORDfP10BLOCK_LISTP13TO_BLOCK_LIST */
/* Demangled: make_words(tesseract::Textord*, ICOORD, float, BLOCK_LIST*, TO_BLOCK_LIST*) */
int _Z10make_wordsPN9tesseract7TextordE6ICOORDfP10BLOCK_LISTP13TO_BLOCK_LIST(void);

/* Symbol: TessPDFRendererCreate */
/* Demangled: TessPDFRendererCreate */
int TessPDFRendererCreate(void);

/* Symbol: _ZNK9tesseract4Bmp810IsBlankRowEi */
/* Demangled: tesseract::Bmp8::IsBlankRow(int) const */
int _ZNK9tesseract4Bmp810IsBlankRowEi(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract11WordWithBoxEE15double_the_sizeEv */
/* Demangled: GenericVector<tesseract::WordWithBox*>::double_the_size() */
int _ZN13GenericVectorIPN9tesseract11WordWithBoxEE15double_the_sizeEv(void);

/* Symbol: _ZN19OrientationDetectorC1EPK13GenericVectorIiEP9OSResults */
/* Demangled: OrientationDetector::OrientationDetector(GenericVector<int> const*, OSResults*) */
int _ZN19OrientationDetectorC1EPK13GenericVectorIiEP9OSResults(void);

/* Symbol: _ZN9tesseract5CUtilC2Ev */
/* Demangled: tesseract::CUtil::CUtil() */
int _ZN9tesseract5CUtilC2Ev(void);

/* Symbol: _ZNK9tesseract17TrainingSampleSet22ComputeClusterDistanceEiiiiRKNS_13IntFeatureMapE */
/* Demangled: tesseract::TrainingSampleSet::ComputeClusterDistance(int, int, int, int, tesseract::IntFeatureMap const&) const */
int _ZNK9tesseract17TrainingSampleSet22ComputeClusterDistanceEiiiiRKNS_13IntFeatureMapE(void);

/* Symbol: _ZN9tesseract11TableFinder25set_global_median_xheightEi */
/* Demangled: tesseract::TableFinder::set_global_median_xheight(int) */
int _ZN9tesseract11TableFinder25set_global_median_xheightEi(void);

/* Symbol: _ZN9tesseract13LanguageModel16ComputeNgramCostEPKcffS2_PiPbPf */
/* Demangled: tesseract::LanguageModel::ComputeNgramCost(char const*, float, float, char const*, int*, bool*, float*) */
int _ZN9tesseract13LanguageModel16ComputeNgramCostEPKcffS2_PiPbPf(void);

/* Symbol: _ZN8BLOBNBOX24EstimateBaselinePositionEv */
/* Demangled: BLOBNBOX::EstimateBaselinePosition() */
int _ZN8BLOBNBOX24EstimateBaselinePositionEv(void);

/* Symbol: _ZN10BLOCK_LIST9deep_copyEPKS_PFP5BLOCKPKS2_E */
/* Demangled: BLOCK_LIST::deep_copy(BLOCK_LIST const*, BLOCK* (*)(BLOCK const*)) */
int _ZN10BLOCK_LIST9deep_copyEPKS_PFP5BLOCKPKS2_E(void);

/* Symbol: _ZN9tesseract13BaselineBlock17SpacingModelErrorEddd */
/* Demangled: tesseract::BaselineBlock::SpacingModelError(double, double, double) */
int _ZN9tesseract13BaselineBlock17SpacingModelErrorEddd(void);

/* Symbol: _ZN9tesseract9Tesseract20CorrectClassifyWordsEP8PAGE_RES */
/* Demangled: tesseract::Tesseract::CorrectClassifyWords(PAGE_RES*) */
int _ZN9tesseract9Tesseract20CorrectClassifyWordsEP8PAGE_RES(void);

/* Symbol: TessPageIteratorCopy */
/* Demangled: TessPageIteratorCopy */
int TessPageIteratorCopy(void);

/* Symbol: _ZN9tesseract21TesseractCubeCombiner14CombineResultsEP8WERD_RESPNS_10CubeObjectE */
/* Demangled: tesseract::TesseractCubeCombiner::CombineResults(WERD_RES*, tesseract::CubeObject*) */
int _ZN9tesseract21TesseractCubeCombiner14CombineResultsEP8WERD_RESPNS_10CubeObjectE(void);

/* Symbol: _ZNK10UNICHARSET2eqEiPKc */
/* Demangled: UNICHARSET::eq(int, char const*) const */
int _ZNK10UNICHARSET2eqEiPKc(void);

/* Symbol: _ZNK13GenericVectorIP14ParagraphModelE9get_indexES1_ */
/* Demangled: GenericVector<ParagraphModel*>::get_index(ParagraphModel*) const */
int _ZNK13GenericVectorIP14ParagraphModelE9get_indexES1_(void);

/* Symbol: _ZN9tesseract14CompareFontSetERKNS_7FontSetES2_ */
/* Demangled: tesseract::CompareFontSet(tesseract::FontSet const&, tesseract::FontSet const&) */
int _ZN9tesseract14CompareFontSetERKNS_7FontSetES2_(void);

/* Symbol: _Z14FreeTempConfigP18TEMP_CONFIG_STRUCT */
/* Demangled: FreeTempConfig(TEMP_CONFIG_STRUCT*) */
int _Z14FreeTempConfigP18TEMP_CONFIG_STRUCT(void);

/* Symbol: _Z19pre_associate_blobs6ICOORDP8TO_BLOCK6FCOORDh */
/* Demangled: pre_associate_blobs(ICOORD, TO_BLOCK*, FCOORD, unsigned char) */
int _Z19pre_associate_blobs6ICOORDP8TO_BLOCK6FCOORDh(void);

/* Symbol: _ZN9tesseract9ImageFind25ConnCompAndRectangularizeEP3PixPP4BoxaPP4Pixa */
/* Demangled: tesseract::ImageFind::ConnCompAndRectangularize(Pix*, Boxa**, Pixa**) */
int _ZN9tesseract9ImageFind25ConnCompAndRectangularizeEP3PixPP4BoxaPP4Pixa(void);

/* Symbol: _ZN12KDTreeSearch19BoxIntersectsSearchEPfS0_ */
/* Demangled: KDTreeSearch::BoxIntersectsSearch(float*, float*) */
int _ZN12KDTreeSearch19BoxIntersectsSearchEPfS0_(void);

/* Symbol: _Z17ClassConfigLengthP12CLASS_STRUCTPj */
/* Demangled: ClassConfigLength(CLASS_STRUCT*, unsigned int*) */
int _Z17ClassConfigLengthP12CLASS_STRUCTPj(void);

/* Symbol: _ZN9tesseract4Dict3EndEv */
/* Demangled: tesseract::Dict::End() */
int _ZN9tesseract4Dict3EndEv(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract18LanguageModelStateEE7reserveEi */
/* Demangled: GenericVector<tesseract::LanguageModelState*>::reserve(int) */
int _ZN13GenericVectorIPN9tesseract18LanguageModelStateEE7reserveEi(void);

/* Symbol: TessBaseAPIClearAdaptiveClassifier */
/* Demangled: TessBaseAPIClearAdaptiveClassifier */
int TessBaseAPIClearAdaptiveClassifier(void);

/* Symbol: _Z13join_segmentsP14C_OUTLINE_FRAGS0_ */
/* Demangled: join_segments(C_OUTLINE_FRAG*, C_OUTLINE_FRAG*) */
int _Z13join_segmentsP14C_OUTLINE_FRAGS0_(void);

/* Symbol: _ZN9tesseract11TessBaseAPI16GetTextDirectionEPiPf */
/* Demangled: tesseract::TessBaseAPI::GetTextDirection(int*, float*) */
int _ZN9tesseract11TessBaseAPI16GetTextDirectionEPiPf(void);

/* Symbol: _ZN5STATSC1Eii */
/* Demangled: STATS::STATS(int, int) */
int _ZN5STATSC1Eii(void);

/* Symbol: _ZN8TESSLINE5ClearEv */
/* Demangled: TESSLINE::Clear() */
int _ZN8TESSLINE5ClearEv(void);

/* Symbol: _ZNK9C_OUTLINE14winding_numberE6ICOORD */
/* Demangled: C_OUTLINE::winding_number(ICOORD) const */
int _ZNK9C_OUTLINE14winding_numberE6ICOORD(void);

/* Symbol: _ZN9tesseract10SearchNodeD1Ev */
/* Demangled: tesseract::SearchNode::~SearchNode() */
int _ZN9tesseract10SearchNodeD1Ev(void);

/* Symbol: _ZN9tesseract13TabConstraint16MergeConstraintsEPNS_18TabConstraint_LISTES2_ */
/* Demangled: tesseract::TabConstraint::MergeConstraints(tesseract::TabConstraint_LIST*, tesseract::TabConstraint_LIST*) */
int _ZN9tesseract13TabConstraint16MergeConstraintsEPNS_18TabConstraint_LISTES2_(void);

/* Symbol: _ZNK9tesseract11TessBaseAPI24GetInitLanguagesAsStringEv */
/* Demangled: tesseract::TessBaseAPI::GetInitLanguagesAsString() const */
int _ZNK9tesseract11TessBaseAPI24GetInitLanguagesAsStringEv(void);

/* Symbol: _ZTV29_TessMemberResultCallback_0_2ILb0EPcN9tesseract5TFileES0_iE */
/* Demangled: vtable for _TessMemberResultCallback_0_2<false, char*, tesseract::TFile, char*, int> */
extern void* _ZTV29_TessMemberResultCallback_0_2ILb0EPcN9tesseract5TFileES0_iE;

/* Symbol: _ZN9tesseract8Classify31ExpandShapesAndApplyCorrectionsEPP18ADAPT_CLASS_STRUCTbiiifiiPKhPNS_13UnicharRatingEP13ADAPT_RESULTS */
/* Demangled: tesseract::Classify::ExpandShapesAndApplyCorrections(ADAPT_CLASS_STRUCT**, bool, int, int, int, float, int, int, unsigned char const*, tesseract::UnicharRating*, ADAPT_RESULTS*) */
int _ZN9tesseract8Classify31ExpandShapesAndApplyCorrectionsEPP18ADAPT_CLASS_STRUCTbiiifiiPKhPNS_13UnicharRatingEP13ADAPT_RESULTS(void);

/* Symbol: _ZN9tesseract10ShapeTableC1Ev */
/* Demangled: tesseract::ShapeTable::ShapeTable() */
int _ZN9tesseract10ShapeTableC1Ev(void);

/* Symbol: _ZNK9tesseract14SampleIterator17SparseCharsetSizeEv */
/* Demangled: tesseract::SampleIterator::SparseCharsetSize() const */
int _ZNK9tesseract14SampleIterator17SparseCharsetSizeEv(void);

/* Symbol: TessBaseAPISetImage */
/* Demangled: TessBaseAPISetImage */
int TessBaseAPISetImage(void);

/* Symbol: _ZN9tesseract18CubeTessClassifierD0Ev */
/* Demangled: tesseract::CubeTessClassifier::~CubeTessClassifier() */
int _ZN9tesseract18CubeTessClassifierD0Ev(void);

/* Symbol: _ZN6REJMAP26rej_word_not_tess_acceptedEv */
/* Demangled: REJMAP::rej_word_not_tess_accepted() */
int _ZN6REJMAP26rej_word_not_tess_acceptedEv(void);

/* Symbol: _ZNK5SPLIT12FullPriorityEiididd */
/* Demangled: SPLIT::FullPriority(int, int, double, int, double, double) const */
int _ZNK5SPLIT12FullPriorityEiididd(void);

/* Symbol: _ZNK9tesseract14SampleIterator17GlobalSampleIndexEv */
/* Demangled: tesseract::SampleIterator::GlobalSampleIndex() const */
int _ZNK9tesseract14SampleIterator17GlobalSampleIndexEv(void);

/* Symbol: _ZN9tesseract15TableRecognizer13set_text_gridEPNS_16ColPartitionGridE */
/* Demangled: tesseract::TableRecognizer::set_text_grid(tesseract::ColPartitionGrid*) */
int _ZN9tesseract15TableRecognizer13set_text_gridEPNS_16ColPartitionGridE(void);

/* Symbol: _ZN9tesseract9Tesseract24recog_training_segmentedERK6STRINGP8PAGE_RESPV10ETEXT_DESCP7__sFILE */
/* Demangled: tesseract::Tesseract::recog_training_segmented(STRING const&, PAGE_RES*, ETEXT_DESC volatile*, __sFILE*) */
int _ZN9tesseract9Tesseract24recog_training_segmentedERK6STRINGP8PAGE_RESPV10ETEXT_DESCP7__sFILE(void);

/* Symbol: _ZN9tesseract17InitializeRowInfoEbRKNS_15MutableIteratorEPNS_7RowInfoE */
/* Demangled: tesseract::InitializeRowInfo(bool, tesseract::MutableIterator const&, tesseract::RowInfo*) */
int _ZN9tesseract17InitializeRowInfoEbRKNS_15MutableIteratorEPNS_7RowInfoE(void);

/* Symbol: _ZN13GenericVectorIP11WERD_CHOICEE7reserveEi */
/* Demangled: GenericVector<WERD_CHOICE*>::reserve(int) */
int _ZN13GenericVectorIP11WERD_CHOICEE7reserveEi(void);

/* Symbol: _ZNK9tesseract14TrainingSample9SerializeEP7__sFILE */
/* Demangled: tesseract::TrainingSample::Serialize(__sFILE*) const */
int _ZNK9tesseract14TrainingSample9SerializeEP7__sFILE(void);

/* Symbol: _ZN9tesseract4Bmp8C1Ett */
/* Demangled: tesseract::Bmp8::Bmp8(unsigned short, unsigned short) */
int _ZN9tesseract4Bmp8C1Ett(void);

/* Symbol: _ZN9tesseract11TableFinder24SmoothTablePartitionRunsEv */
/* Demangled: tesseract::TableFinder::SmoothTablePartitionRuns() */
int _ZN9tesseract11TableFinder24SmoothTablePartitionRunsEv(void);

/* Symbol: _ZN4WERD16GetNoiseOutlinesEP13GenericVectorIP9C_OUTLINEE */
/* Demangled: WERD::GetNoiseOutlines(GenericVector<C_OUTLINE*>*) */
int _ZN4WERD16GetNoiseOutlinesEP13GenericVectorIP9C_OUTLINEE(void);

/* Symbol: _ZN13GenericVectorIN9tesseract8WordDataEE15double_the_sizeEv */
/* Demangled: GenericVector<tesseract::WordData>::double_the_size() */
int _ZN13GenericVectorIN9tesseract8WordDataEE15double_the_sizeEv(void);

/* Symbol: _ZN9tesseract18ShiroRekhaSplitterD1Ev */
/* Demangled: tesseract::ShiroRekhaSplitter::~ShiroRekhaSplitter() */
int _ZN9tesseract18ShiroRekhaSplitterD1Ev(void);

/* Symbol: _ZNK8WERD_RES16PiecesAllNaturalEii */
/* Demangled: WERD_RES::PiecesAllNatural(int, int) const */
int _ZNK8WERD_RES16PiecesAllNaturalEii(void);

/* Symbol: _ZN14IntegerMatcher15FindBadFeaturesEP16INT_CLASS_STRUCTPjS2_tsP18INT_FEATURE_STRUCTPhii */
/* Demangled: IntegerMatcher::FindBadFeatures(INT_CLASS_STRUCT*, unsigned int*, unsigned int*, unsigned short, short, INT_FEATURE_STRUCT*, unsigned char*, int, int) */
int _ZN14IntegerMatcher15FindBadFeaturesEP16INT_CLASS_STRUCTPjS2_tsP18INT_FEATURE_STRUCTPhii(void);

/* Symbol: _ZN9tesseract13TessLangModel13IsLeadingPuncEi */
/* Demangled: tesseract::TessLangModel::IsLeadingPunc(int) */
int _ZN9tesseract13TessLangModel13IsLeadingPuncEi(void);

/* Symbol: _Z17add_repeated_wordP7WERD_ITRsS1_RhfS0_ */
/* Demangled: add_repeated_word(WERD_IT*, short&, short&, unsigned char&, float, WERD_IT*) */
int _Z17add_repeated_wordP7WERD_ITRsS1_RhfS0_(void);

/* Symbol: _ZN9tesseract15StructuredTable22FindCellSplitLocationsERK13GenericVectorIiES4_iPS2_ */
/* Demangled: tesseract::StructuredTable::FindCellSplitLocations(GenericVector<int> const&, GenericVector<int> const&, int, GenericVector<int>*) */
int _ZN9tesseract15StructuredTable22FindCellSplitLocationsERK13GenericVectorIiES4_iPS2_(void);

/* Symbol: _ZNK9tesseract18TextlineProjection21BestMeanGradientInRowEPK6DENORMsssb */
/* Demangled: tesseract::TextlineProjection::BestMeanGradientInRow(DENORM const*, short, short, short, bool) const */
int _ZNK9tesseract18TextlineProjection21BestMeanGradientInRowEPK6DENORMsssb(void);

/* Symbol: TessBaseAPIInitForAnalysePage */
/* Demangled: TessBaseAPIInitForAnalysePage */
int TessBaseAPIInitForAnalysePage(void);

/* Symbol: TessResultIteratorGetPageIterator */
/* Demangled: TessResultIteratorGetPageIterator */
int TessResultIteratorGetPageIterator(void);

/* Symbol: _ZN9tesseract15TessPDFRenderer18AppendPDFObjectDIYEj */
/* Demangled: tesseract::TessPDFRenderer::AppendPDFObjectDIY(unsigned int) */
int _ZN9tesseract15TessPDFRenderer18AppendPDFObjectDIYEj(void);

/* Symbol: _ZN9tesseract14IntFeatureDistC1Ev */
/* Demangled: tesseract::IntFeatureDist::IntFeatureDist() */
int _ZN9tesseract14IntFeatureDistC1Ev(void);

/* Symbol: _ZN9tesseract7Textord28clean_small_noise_from_wordsEP3ROW */
/* Demangled: tesseract::Textord::clean_small_noise_from_words(ROW*) */
int _ZN9tesseract7Textord28clean_small_noise_from_wordsEP3ROW(void);

/* Symbol: _Z14set_row_spacesP8TO_BLOCK6FCOORDh */
/* Demangled: set_row_spaces(TO_BLOCK*, FCOORD, unsigned char) */
int _Z14set_row_spacesP8TO_BLOCK6FCOORDh(void);

/* Symbol: _ZN9tesseract8Classify31ResetAdaptiveClassifierInternalEv */
/* Demangled: tesseract::Classify::ResetAdaptiveClassifierInternal() */
int _ZN9tesseract8Classify31ResetAdaptiveClassifierInternalEv(void);

/* Symbol: _ZN13GenericVectorIPKN9tesseract14TrainingSampleEE5clearEv */
/* Demangled: GenericVector<tesseract::TrainingSample const*>::clear() */
int _ZN13GenericVectorIPKN9tesseract14TrainingSampleEE5clearEv(void);

/* Symbol: TessBaseAPIGetTextlines1 */
/* Demangled: TessBaseAPIGetTextlines1 */
int TessBaseAPIGetTextlines1(void);

/* Symbol: _ZN9tesseract9Tesseract19match_current_wordsER13WERD_RES_LISTP3ROWP5BLOCK */
/* Demangled: tesseract::Tesseract::match_current_words(WERD_RES_LIST&, ROW*, BLOCK*) */
int _ZN9tesseract9Tesseract19match_current_wordsER13WERD_RES_LISTP3ROWP5BLOCK(void);

/* Symbol: _ZN13GenericVectorIN9tesseract8IntervalEE9push_backES1_ */
/* Demangled: GenericVector<tesseract::Interval>::push_back(tesseract::Interval) */
int _ZN13GenericVectorIN9tesseract8IntervalEE9push_backES1_(void);

/* Symbol: _ZNK9tesseract14ResultIterator21IsAtFirstSymbolOfWordEv */
/* Demangled: tesseract::ResultIterator::IsAtFirstSymbolOfWord() const */
int _ZNK9tesseract14ResultIterator21IsAtFirstSymbolOfWordEv(void);

/* Symbol: _ZN9tesseract9BitVectorD1Ev */
/* Demangled: tesseract::BitVector::~BitVector() */
int _ZN9tesseract9BitVectorD1Ev(void);

/* Symbol: _ZN9tesseract10FeatureBmpD1Ev */
/* Demangled: tesseract::FeatureBmp::~FeatureBmp() */
int _ZN9tesseract10FeatureBmpD1Ev(void);

/* Symbol: _ZN13GenericVectorIP16TRIE_NODE_RECORDE7reserveEi */
/* Demangled: GenericVector<TRIE_NODE_RECORD*>::reserve(int) */
int _ZN13GenericVectorIP16TRIE_NODE_RECORDE7reserveEi(void);

/* Symbol: _Z19deskew_block_coordsP8TO_BLOCKf */
/* Demangled: deskew_block_coords(TO_BLOCK*, float) */
int _Z19deskew_block_coordsP8TO_BLOCKf(void);

/* Symbol: _Z9make_rows6ICOORDP13TO_BLOCK_LIST */
/* Demangled: make_rows(ICOORD, TO_BLOCK_LIST*) */
int _Z9make_rows6ICOORDP13TO_BLOCK_LIST(void);

/* Symbol: _ZN9tesseract11TableFinder28set_global_median_blob_widthEi */
/* Demangled: tesseract::TableFinder::set_global_median_blob_width(int) */
int _ZN9tesseract11TableFinder28set_global_median_blob_widthEi(void);

/* Symbol: _ZNK6STRINGneERKS_ */
/* Demangled: STRING::operator!=(STRING const&) const */
int _ZNK6STRINGneERKS_(void);

/* Symbol: _ZN9tesseract11TableFinder10MakeWindowEiiPKc */
/* Demangled: tesseract::TableFinder::MakeWindow(int, int, char const*) */
int _ZN9tesseract11TableFinder10MakeWindowEiiPKc(void);

/* Symbol: _ZNK9tesseract19RowScratchRegisters17NonNullHypothesesEP17GenericVectorEqEqIPK14ParagraphModelE */
/* Demangled: tesseract::RowScratchRegisters::NonNullHypotheses(GenericVectorEqEq<ParagraphModel const*>*) const */
int _ZNK9tesseract19RowScratchRegisters17NonNullHypothesesEP17GenericVectorEqEqIPK14ParagraphModelE(void);

/* Symbol: _ZN9tesseract16ImageThresholder13GetImageSizesEPiS1_S1_S1_S1_S1_ */
/* Demangled: tesseract::ImageThresholder::GetImageSizes(int*, int*, int*, int*, int*, int*) */
int _ZN9tesseract16ImageThresholder13GetImageSizesEPiS1_S1_S1_S1_S1_(void);

/* Symbol: _ZTV31_TessFunctionResultCallback_0_1ILb0EvN9tesseract7FontSetEE */
/* Demangled: vtable for _TessFunctionResultCallback_0_1<false, void, tesseract::FontSet> */
extern void* _ZTV31_TessFunctionResultCallback_0_1ILb0EvN9tesseract7FontSetEE;

/* Symbol: _ZN9tesseract13TessLangModel9FreeEdgesEiPPNS_11LangModEdgeE */
/* Demangled: tesseract::TessLangModel::FreeEdges(int, tesseract::LangModEdge**) */
int _ZN9tesseract13TessLangModel9FreeEdgesEiPPNS_11LangModEdgeE(void);

/* Symbol: _ZN9tesseract12SquishedDawgD1Ev */
/* Demangled: tesseract::SquishedDawg::~SquishedDawg() */
int _ZN9tesseract12SquishedDawgD1Ev(void);

/* Symbol: _ZN9tesseract12DeleteObjectINS_10ColSegmentEEEvPT_ */
/* Demangled: void tesseract::DeleteObject<tesseract::ColSegment>(tesseract::ColSegment*) */
int _ZN9tesseract12DeleteObjectINS_10ColSegmentEEEvPT_(void);

/* Symbol: _ZNK4TBOX14x_almost_equalERKS_i */
/* Demangled: TBOX::x_almost_equal(TBOX const&, int) const */
int _ZNK4TBOX14x_almost_equalERKS_i(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract11StringParamEE5clearEv */
/* Demangled: GenericVector<tesseract::StringParam*>::clear() */
int _ZN13GenericVectorIPN9tesseract11StringParamEE5clearEv(void);

/* Symbol: _ZN9tesseract8Classify18RefreshDebugWindowEPP10ScrollViewPKciRK4TBOX */
/* Demangled: tesseract::Classify::RefreshDebugWindow(ScrollView**, char const*, int, TBOX const&) */
int _ZN9tesseract8Classify18RefreshDebugWindowEPP10ScrollViewPKciRK4TBOX(void);

/* Symbol: _ZN9tesseract12ColumnFinderD0Ev */
/* Demangled: tesseract::ColumnFinder::~ColumnFinder() */
int _ZN9tesseract12ColumnFinderD0Ev(void);

/* Symbol: _ZN9tesseract9Tesseract26ambigs_classify_and_outputEPKcP11PAGE_RES_ITP7__sFILE */
/* Demangled: tesseract::Tesseract::ambigs_classify_and_output(char const*, PAGE_RES_IT*, __sFILE*) */
int _ZN9tesseract9Tesseract26ambigs_classify_and_outputEPKcP11PAGE_RES_ITP7__sFILE(void);

/* Symbol: _ZN13GenericVectorIS_IiEE12init_to_sizeEiS0_ */
/* Demangled: GenericVector<GenericVector<int> >::init_to_size(int, GenericVector<int>) */
int _ZN13GenericVectorIS_IiEE12init_to_sizeEiS0_(void);

/* Symbol: _Z17ComputeChiSquaredtd */
/* Demangled: ComputeChiSquared(unsigned short, double) */
int _Z17ComputeChiSquaredtd(void);

/* Symbol: _Z17ComputePrototypesP9CLUSTERERP13CLUSTERCONFIG */
/* Demangled: ComputePrototypes(CLUSTERER*, CLUSTERCONFIG*) */
int _Z17ComputePrototypesP9CLUSTERERP13CLUSTERCONFIG(void);

/* Symbol: _ZN9tesseract17CubeLineSegmenter9SplitLineEP3PixP3Box */
/* Demangled: tesseract::CubeLineSegmenter::SplitLine(Pix*, Box*) */
int _ZN9tesseract17CubeLineSegmenter9SplitLineEP3PixP3Box(void);

/* Symbol: _ZN9tesseract16CubeTuningParams4LoadENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: tesseract::CubeTuningParams::Load(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN9tesseract16CubeTuningParams4LoadENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN9tesseract9ImageFind21ColorDistanceFromLineEPKhS2_S2_ */
/* Demangled: tesseract::ImageFind::ColorDistanceFromLine(unsigned char const*, unsigned char const*, unsigned char const*) */
int _ZN9tesseract9ImageFind21ColorDistanceFromLineEPKhS2_S2_(void);

/* Symbol: _ZN10OL_BUCKETS14count_childrenEP9C_OUTLINEi */
/* Demangled: OL_BUCKETS::count_children(C_OUTLINE*, int) */
int _ZN10OL_BUCKETS14count_childrenEP9C_OUTLINEi(void);

/* Symbol: _ZN9tesseract14InterwordSpaceERK13GenericVectorINS_19RowScratchRegistersEEii */
/* Demangled: tesseract::InterwordSpace(GenericVector<tesseract::RowScratchRegisters> const&, int, int) */
int _ZN9tesseract14InterwordSpaceERK13GenericVectorINS_19RowScratchRegistersEEii(void);

/* Symbol: _ZN9tesseract9BitVectorC2ERKS0_ */
/* Demangled: tesseract::BitVector::BitVector(tesseract::BitVector const&) */
int _ZN9tesseract9BitVectorC2ERKS0_(void);

/* Symbol: _ZN9tesseract7Textord20correlate_neighboursEP8TO_BLOCKPP6TO_ROWi */
/* Demangled: tesseract::Textord::correlate_neighbours(TO_BLOCK*, TO_ROW**, int) */
int _ZN9tesseract7Textord20correlate_neighboursEP8TO_BLOCKPP6TO_ROWi(void);

/* Symbol: _ZN7FPCUTPT5setupEPS_sP5STATSssss */
/* Demangled: FPCUTPT::setup(FPCUTPT*, short, STATS*, short, short, short, short) */
int _ZN7FPCUTPT5setupEPS_sP5STATSssss(void);

/* Symbol: _ZN9tesseract11TessBaseAPI11SetVariableEPKcS2_ */
/* Demangled: tesseract::TessBaseAPI::SetVariable(char const*, char const*) */
int _ZN9tesseract11TessBaseAPI11SetVariableEPKcS2_(void);

/* Symbol: _ZN13GenericVectorIP11BLOB_CHOICEE7reserveEi */
/* Demangled: GenericVector<BLOB_CHOICE*>::reserve(int) */
int _ZN13GenericVectorIP11BLOB_CHOICEE7reserveEi(void);

/* Symbol: _ZN9tesseract9Tesseract12count_alphasERK11WERD_CHOICE */
/* Demangled: tesseract::Tesseract::count_alphas(WERD_CHOICE const&) */
int _ZN9tesseract9Tesseract12count_alphasERK11WERD_CHOICE(void);

/* Symbol: _ZN8WERD_RES10BothSpacesEii */
/* Demangled: WERD_RES::BothSpaces(int, int) */
int _ZN8WERD_RES10BothSpacesEii(void);

/* Symbol: _ZN9tesseract9Tesseract15recog_all_wordsEP8PAGE_RESP10ETEXT_DESCPK4TBOXPKci */
/* Demangled: tesseract::Tesseract::recog_all_words(PAGE_RES*, ETEXT_DESC*, TBOX const*, char const*, int) */
int _ZN9tesseract9Tesseract15recog_all_wordsEP8PAGE_RESP10ETEXT_DESCPK4TBOXPKci(void);

/* Symbol: _ZN9tesseract17CalculateTabStopsEP13GenericVectorINS_19RowScratchRegistersEEiiiPS0_INS_7ClusterEES6_ */
/* Demangled: tesseract::CalculateTabStops(GenericVector<tesseract::RowScratchRegisters>*, int, int, int, GenericVector<tesseract::Cluster>*, GenericVector<tesseract::Cluster>*) */
int _ZN9tesseract17CalculateTabStopsEP13GenericVectorINS_19RowScratchRegistersEEiiiPS0_INS_7ClusterEES6_(void);

/* Symbol: _Z14NewSimpleProtosP6sample */
/* Demangled: NewSimpleProto(short, sample*) */
int _Z14NewSimpleProtosP6sample(void);

/* Symbol: _ZN9tesseract15IntFeatureSpace4InitEhhh */
/* Demangled: tesseract::IntFeatureSpace::Init(unsigned char, unsigned char, unsigned char) */
int _ZN9tesseract15IntFeatureSpace4InitEhhh(void);

/* Symbol: _ZN9tesseract11WordAltList6InsertEPiiPv */
/* Demangled: tesseract::WordAltList::Insert(int*, int, void*) */
int _ZN9tesseract11WordAltList6InsertEPiiPv(void);

/* Symbol: edges_boxarea */
/* Demangled: edges_boxarea */
extern void* edges_boxarea;

/* Symbol: _Z15try_block_fixedP8TO_BLOCKi */
/* Demangled: try_block_fixed(TO_BLOCK*, int) */
int _Z15try_block_fixedP8TO_BLOCKi(void);

/* Symbol: _ZN9tesseract21WordWithBox_c1_zapperEPv */
/* Demangled: tesseract::WordWithBox_c1_zapper(void*) */
int _ZN9tesseract21WordWithBox_c1_zapperEPv(void);

/* Symbol: _ZN13GenericVectorIN9tesseract9KDPairIncIfP6EDGEPTEEE7reserveEi */
/* Demangled: GenericVector<tesseract::KDPairInc<float, EDGEPT*> >::reserve(int) */
int _ZN13GenericVectorIN9tesseract9KDPairIncIfP6EDGEPTEEE7reserveEi(void);

/* Symbol: _ZN9tesseract12WordUnigrams6CreateERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_ */
/* Demangled: tesseract::WordUnigrams::Create(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN9tesseract12WordUnigrams6CreateERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_(void);

/* Symbol: _ZN13GenericVectorIN9tesseract8IntervalEE7reserveEi */
/* Demangled: GenericVector<tesseract::Interval>::reserve(int) */
int _ZN13GenericVectorIN9tesseract8IntervalEE7reserveEi(void);

/* Symbol: _ZN9tesseract10LineFinder12GetLineBoxesEbP3PixS2_P11C_BLOB_LISTP13BLOBNBOX_LIST */
/* Demangled: tesseract::LineFinder::GetLineBoxes(bool, Pix*, Pix*, C_BLOB_LIST*, BLOBNBOX_LIST*) */
int _ZN9tesseract10LineFinder12GetLineBoxesEbP3PixS2_P11C_BLOB_LISTP13BLOBNBOX_LIST(void);

/* Symbol: _ZN9tesseract7Textord13old_to_methodEP6TO_ROWP5STATSS4_S4_ss */
/* Demangled: tesseract::Textord::old_to_method(TO_ROW*, STATS*, STATS*, STATS*, short, short) */
int _ZN9tesseract7Textord13old_to_methodEP6TO_ROWP5STATSS4_S4_ss(void);

/* Symbol: _ZN9tesseract24ViterbiStateEntry_zapperEP10ELIST_LINK */
/* Demangled: tesseract::ViterbiStateEntry_zapper(ELIST_LINK*) */
int _ZN9tesseract24ViterbiStateEntry_zapperEP10ELIST_LINK(void);

/* Symbol: _ZN13GenericVectorIP14ParagraphModelE13push_back_newES1_ */
/* Demangled: GenericVector<ParagraphModel*>::push_back_new(ParagraphModel*) */
int _ZN13GenericVectorIP14ParagraphModelE13push_back_newES1_(void);

/* Symbol: _ZN13GenericVectorIP4PARAE5clearEv */
/* Demangled: GenericVector<PARA*>::clear() */
int _ZN13GenericVectorIP4PARAE5clearEv(void);

/* Symbol: _ZN5BLOCK5printEP7__sFILEh */
/* Demangled: BLOCK::print(__sFILE*, unsigned char) */
int _ZN5BLOCK5printEP7__sFILEh(void);

/* Symbol: _ZN9tesseract9Tesseract7flip_0OEP8WERD_RES */
/* Demangled: tesseract::Tesseract::flip_0O(WERD_RES*) */
int _ZN9tesseract9Tesseract7flip_0OEP8WERD_RES(void);

/* Symbol: _ZTVN9tesseract7IntGridE */
/* Demangled: vtable for tesseract::IntGrid */
extern void* _ZTVN9tesseract7IntGridE;

/* Symbol: textord_underline_threshold */
/* Demangled: textord_underline_threshold */
extern void* textord_underline_threshold;

/* Symbol: _ZN8WERD_RESaSERKS_ */
/* Demangled: WERD_RES::operator=(WERD_RES const&) */
int _ZN8WERD_RESaSERKS_(void);

/* Symbol: _ZNK11WERD_CHOICE5printEPKc */
/* Demangled: WERD_CHOICE::print(char const*) const */
int _ZNK11WERD_CHOICE5printEPKc(void);

/* Symbol: _Z14NormalizePicoXP18FEATURE_SET_STRUCT */
/* Demangled: NormalizePicoX(FEATURE_SET_STRUCT*) */
int _Z14NormalizePicoXP18FEATURE_SET_STRUCT(void);

/* Symbol: _ZNSt3__16vectorIPN9tesseract9NeuralNetENS_9allocatorIS3_EEE8__appendEjRKS3_ */
/* Demangled: std::__1::vector<tesseract::NeuralNet*, std::__1::allocator<tesseract::NeuralNet*> >::__append(unsigned int, tesseract::NeuralNet* const&) */
int _ZNSt3__16vectorIPN9tesseract9NeuralNetENS_9allocatorIS3_EEE8__appendEjRKS3_(void);

/* Symbol: _ZN9tesseract8GridBaseC1Ev */
/* Demangled: tesseract::GridBase::GridBase() */
int _ZN9tesseract8GridBaseC1Ev(void);

/* Symbol: _ZN13GenericVectorI12DANGERR_INFOE9push_backES0_ */
/* Demangled: GenericVector<DANGERR_INFO>::push_back(DANGERR_INFO) */
int _ZN13GenericVectorI12DANGERR_INFOE9push_backES0_(void);

/* Symbol: TessBaseAPIProcessPage */
/* Demangled: TessBaseAPIProcessPage */
int TessBaseAPIProcessPage(void);

/* Symbol: _ZN9tesseract12DocumentData20LoadPageInBackgroundEi */
/* Demangled: tesseract::DocumentData::LoadPageInBackground(int) */
int _ZN9tesseract12DocumentData20LoadPageInBackgroundEi(void);

/* Symbol: _ZN4TBOX12rotate_largeERK6FCOORD */
/* Demangled: TBOX::rotate_large(FCOORD const&) */
int _ZN4TBOX12rotate_largeERK6FCOORD(void);

/* Symbol: _ZN9tesseract12ErrorCounter12ReportErrorsEiNS_10CountTypesERKNS_13FontInfoTableERKNS_14SampleIteratorEPdP6STRING */
/* Demangled: tesseract::ErrorCounter::ReportErrors(int, tesseract::CountTypes, tesseract::FontInfoTable const&, tesseract::SampleIterator const&, double*, STRING*) */
int _ZN9tesseract12ErrorCounter12ReportErrorsEiNS_10CountTypesERKNS_13FontInfoTableERKNS_14SampleIteratorEPdP6STRING(void);

/* Symbol: _ZN9tesseract12ErrorCounter12ReportStringEbRKNS0_6CountsEP6STRING */
/* Demangled: tesseract::ErrorCounter::ReportString(bool, tesseract::ErrorCounter::Counts const&, STRING*) */
int _ZN9tesseract12ErrorCounter12ReportStringEbRKNS0_6CountsEP6STRING(void);

/* Symbol: classify_pp_end_pad */
/* Demangled: classify_pp_end_pad */
extern void* classify_pp_end_pad;

/* Symbol: _ZN9tesseract17WordListLangModel12WordVariantsERKNS_7CharSetENSt3__112basic_stringIiNS4_11char_traitsIiEENS4_9allocatorIiEEEEP11WERD_CHOICESA_PNS4_6vectorISC_NS8_ISC_EEEE */
/* Demangled: tesseract::WordListLangModel::WordVariants(tesseract::CharSet const&, std::__1::basic_string<int, std::__1::char_traits<int>, std::__1::allocator<int> >, WERD_CHOICE*, std::__1::basic_string<int, std::__1::char_traits<int>, std::__1::allocator<int> >, std::__1::vector<WERD_CHOICE*, std::__1::allocator<WERD_CHOICE*> >*) */
int _ZN9tesseract17WordListLangModel12WordVariantsERKNS_7CharSetENSt3__112basic_stringIiNS4_11char_traitsIiEENS4_9allocatorIiEEEEP11WERD_CHOICESA_PNS4_6vectorISC_NS8_ISC_EEEE(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract14TrainingSampleEE5clearEv */
/* Demangled: GenericVector<tesseract::TrainingSample*>::clear() */
int _ZN13GenericVectorIPN9tesseract14TrainingSampleEE5clearEv(void);

/* Symbol: _ZN9tesseract4Trie21reduce_lettered_edgesExixP13GenericVectorIyEPb */
/* Demangled: tesseract::Trie::reduce_lettered_edges(long long, int, long long, GenericVector<unsigned long long>*, bool*) */
int _ZN9tesseract4Trie21reduce_lettered_edgesExixP13GenericVectorIyEPb(void);

/* Symbol: _ZNK9tesseract14ResultIterator16IsAtFinalElementENS_17PageIteratorLevelES1_ */
/* Demangled: tesseract::ResultIterator::IsAtFinalElement(tesseract::PageIteratorLevel, tesseract::PageIteratorLevel) const */
int _ZNK9tesseract14ResultIterator16IsAtFinalElementENS_17PageIteratorLevelES1_(void);

/* Symbol: _ZNK9tesseract10ShapeTable22MasterDestinationIndexEi */
/* Demangled: tesseract::ShapeTable::MasterDestinationIndex(int) const */
int _ZNK9tesseract10ShapeTable22MasterDestinationIndexEi(void);

/* Symbol: _ZN9tesseract16CubeTuningParamsC2Ev */
/* Demangled: tesseract::CubeTuningParams::CubeTuningParams() */
int _ZN9tesseract16CubeTuningParamsC2Ev(void);

/* Symbol: _ZN13GenericVectorIdE7reserveEi */
/* Demangled: GenericVector<double>::reserve(int) */
int _ZN13GenericVectorIdE7reserveEi(void);

/* Symbol: _ZN9tesseract12PageIteratorD0Ev */
/* Demangled: tesseract::PageIterator::~PageIterator() */
int _ZN9tesseract12PageIteratorD0Ev(void);

/* Symbol: _ZN6REJMAP21rej_word_tess_failureEv */
/* Demangled: REJMAP::rej_word_tess_failure() */
int _ZN6REJMAP21rej_word_tess_failureEv(void);

/* Symbol: _Z9directionP6EDGEPT */
/* Demangled: direction(EDGEPT*) */
int _Z9directionP6EDGEPT(void);

/* Symbol: _ZN9tesseract17TrainingSampleSetC1ERKNS_13FontInfoTableE */
/* Demangled: tesseract::TrainingSampleSet::TrainingSampleSet(tesseract::FontInfoTable const&) */
int _ZN9tesseract17TrainingSampleSetC1ERKNS_13FontInfoTableE(void);

/* Symbol: _ZN9tesseract11TessBaseAPI18GetComponentImagesENS_17PageIteratorLevelEbbiPP4PixaPPiS6_ */
/* Demangled: tesseract::TessBaseAPI::GetComponentImages(tesseract::PageIteratorLevel, bool, bool, int, Pixa**, int**, int**) */
int _ZN9tesseract11TessBaseAPI18GetComponentImagesENS_17PageIteratorLevelEbbiPP4PixaPPiS6_(void);

/* Symbol: _ZN9tesseract13FontInfoTable6MoveToEP12UnicityTableINS_8FontInfoEE */
/* Demangled: tesseract::FontInfoTable::MoveTo(UnicityTable<tesseract::FontInfo>*) */
int _ZN9tesseract13FontInfoTable6MoveToEP12UnicityTableINS_8FontInfoEE(void);

/* Symbol: _ZN9tesseract8Classify18CharNormClassifierEP5TBLOBRKNS_14TrainingSampleEP13ADAPT_RESULTS */
/* Demangled: tesseract::Classify::CharNormClassifier(TBLOB*, tesseract::TrainingSample const&, ADAPT_RESULTS*) */
int _ZN9tesseract8Classify18CharNormClassifierEP5TBLOBRKNS_14TrainingSampleEP13ADAPT_RESULTS(void);

/* Symbol: _ZN9tesseract15SimpleClusterer11GetClustersEP13GenericVectorINS_7ClusterEE */
/* Demangled: tesseract::SimpleClusterer::GetClusters(GenericVector<tesseract::Cluster>*) */
int _ZN9tesseract15SimpleClusterer11GetClustersEP13GenericVectorINS_7ClusterEE(void);

/* Symbol: _ZN6C_BLOB18ComputeEdgeOffsetsEiP3Pix */
/* Demangled: C_BLOB::ComputeEdgeOffsets(int, Pix*) */
int _ZN6C_BLOB18ComputeEdgeOffsetsEiP3Pix(void);

/* Symbol: _ZN9tesseract8Classify23ConvertMatchesToChoicesERK6DENORMRK4TBOXP13ADAPT_RESULTSP16BLOB_CHOICE_LIST */
/* Demangled: tesseract::Classify::ConvertMatchesToChoices(DENORM const&, TBOX const&, ADAPT_RESULTS*, BLOB_CHOICE_LIST*) */
int _ZN9tesseract8Classify23ConvertMatchesToChoicesERK6DENORMRK4TBOXP13ADAPT_RESULTSP16BLOB_CHOICE_LIST(void);

/* Symbol: _ZN4MinKIfPvE6insertEfS0_ */
/* Demangled: MinK<float, void*>::insert(float, void*) */
int _ZN4MinKIfPvE6insertEfS0_(void);

/* Symbol: _ZN9tesseract7TabFind19ApplyTabConstraintsEv */
/* Demangled: tesseract::TabFind::ApplyTabConstraints() */
int _ZN9tesseract7TabFind19ApplyTabConstraintsEv(void);

/* Symbol: _ZN9tesseract4Bmp89ScaleFromEPS0_b */
/* Demangled: tesseract::Bmp8::ScaleFrom(tesseract::Bmp8*, bool) */
int _ZN9tesseract4Bmp89ScaleFromEPS0_b(void);

/* Symbol: _ZN9tesseract7IntGridC2EiRK6ICOORDS3_ */
/* Demangled: tesseract::IntGrid::IntGrid(int, ICOORD const&, ICOORD const&) */
int _ZN9tesseract7IntGridC2EiRK6ICOORDS3_(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE11__read_modeEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::__read_mode() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE11__read_modeEv(void);

/* Symbol: _ZN13GenericVectorIiE15double_the_sizeEv */
/* Demangled: GenericVector<int>::double_the_size() */
int _ZN13GenericVectorIiE15double_the_sizeEv(void);

/* Symbol: _ZN9tesseract21TesseractCubeCombiner14CompareStringsERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_bb */
/* Demangled: tesseract::TesseractCubeCombiner::CompareStrings(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN9tesseract21TesseractCubeCombiner14CompareStringsERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_bb(void);

/* Symbol: _ZN9tesseract5TFile10CloseWriteERK6STRINGPFbRK13GenericVectorIcES3_E */
/* Demangled: tesseract::TFile::CloseWrite(STRING const&, bool (*)(GenericVector<char> const&, STRING const&)) */
int _ZN9tesseract5TFile10CloseWriteERK6STRINGPFbRK13GenericVectorIcES3_E(void);

/* Symbol: _ZN9tesseract7ConCompD1Ev */
/* Demangled: tesseract::ConComp::~ConComp() */
int _ZN9tesseract7ConCompD1Ev(void);

/* Symbol: _ZN13GenericVectorIN9tesseract9KDPairIncIiyEEE5clearEv */
/* Demangled: GenericVector<tesseract::KDPairInc<int, unsigned long long> >::clear() */
int _ZN13GenericVectorIN9tesseract9KDPairIncIiyEEE5clearEv(void);

/* Symbol: _ZN9tesseract8BlobGridD0Ev */
/* Demangled: tesseract::BlobGrid::~BlobGrid() */
int _ZN9tesseract8BlobGridD0Ev(void);

/* Symbol: _ZN14ScriptDetector9must_stopEi */
/* Demangled: ScriptDetector::must_stop(int) */
int _ZN14ScriptDetector9must_stopEi(void);

/* Symbol: _ZN13CHAR_FRAGMENT9to_stringEPKciib */
/* Demangled: CHAR_FRAGMENT::to_string(char const*, int, int, bool) */
int _ZN13CHAR_FRAGMENT9to_stringEPKciib(void);

/* Symbol: _ZN9tesseract13IntFeatureMap15FinalizeMappingEPNS_14SampleIteratorE */
/* Demangled: tesseract::IntFeatureMap::FinalizeMapping(tesseract::SampleIterator*) */
int _ZN9tesseract13IntFeatureMap15FinalizeMappingEPNS_14SampleIteratorE(void);

/* Symbol: _ZN9tesseract10BeamSearchD2Ev */
/* Demangled: tesseract::BeamSearch::~BeamSearch() */
int _ZN9tesseract10BeamSearchD2Ev(void);

/* Symbol: _ZN18INT_FEATURE_STRUCTC2ERK6FCOORDh */
/* Demangled: INT_FEATURE_STRUCT::INT_FEATURE_STRUCT(FCOORD const&, unsigned char) */
int _ZN18INT_FEATURE_STRUCTC2ERK6FCOORDh(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract13BaselineBlockEE7reserveEi */
/* Demangled: GenericVector<tesseract::BaselineBlock*>::reserve(int) */
int _ZN13GenericVectorIPN9tesseract13BaselineBlockEE7reserveEi(void);

/* Symbol: _ZN14C_OUTLINE_FRAGC2EPS_s */
/* Demangled: C_OUTLINE_FRAG::C_OUTLINE_FRAG(C_OUTLINE_FRAG*, short) */
int _ZN14C_OUTLINE_FRAGC2EPS_s(void);

/* Symbol: _ZN9tesseract11StrokeWidth10EasyMergesEPNS_16ColPartitionGridE */
/* Demangled: tesseract::StrokeWidth::EasyMerges(tesseract::ColPartitionGrid*) */
int _ZN9tesseract11StrokeWidth10EasyMergesEPNS_16ColPartitionGridE(void);

/* Symbol: _ZN9tesseract9TabVector9MergeWithERK6ICOORDPS0_ */
/* Demangled: tesseract::TabVector::MergeWith(ICOORD const&, tesseract::TabVector*) */
int _ZN9tesseract9TabVector9MergeWithERK6ICOORDPS0_(void);

/* Symbol: _ZN9tesseract9TabVectorD2Ev */
/* Demangled: tesseract::TabVector::~TabVector() */
int _ZN9tesseract9TabVectorD2Ev(void);

/* Symbol: _ZNSt3__16vectorIP11WERD_CHOICENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE */
/* Demangled: std::__1::vector<WERD_CHOICE*, std::__1::allocator<WERD_CHOICE*> >::__swap_out_circular_buffer(std::__1::__split_buffer<WERD_CHOICE*, std::__1::allocator<WERD_CHOICE*>&>&) */
int _ZNSt3__16vectorIP11WERD_CHOICENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE(void);

/* Symbol: _ZN9tesseract4Trie19remove_edge_linkageExxibi */
/* Demangled: tesseract::Trie::remove_edge_linkage(long long, long long, int, bool, int) */
int _ZN9tesseract4Trie19remove_edge_linkageExxibi(void);

/* Symbol: _ZN9tesseract14EquationDetect10IsIndentedEPNS_12ColPartitionE */
/* Demangled: tesseract::EquationDetect::IsIndented(tesseract::ColPartition*) */
int _ZN9tesseract14EquationDetect10IsIndentedEPNS_12ColPartitionE(void);

/* Symbol: _ZN9tesseract9BitVectorC2Ei */
/* Demangled: tesseract::BitVector::BitVector(int) */
int _ZN9tesseract9BitVectorC2Ei(void);

/* Symbol: _Z10AddFeatureP18FEATURE_SET_STRUCTP14FEATURE_STRUCT */
/* Demangled: AddFeature(FEATURE_SET_STRUCT*, FEATURE_STRUCT*) */
int _Z10AddFeatureP18FEATURE_SET_STRUCTP14FEATURE_STRUCT(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract11BaselineRowEE9push_backES2_ */
/* Demangled: GenericVector<tesseract::BaselineRow*>::push_back(tesseract::BaselineRow*) */
int _ZN13GenericVectorIPN9tesseract11BaselineRowEE9push_backES2_(void);

/* Symbol: textord_words_def_fixed */
/* Demangled: textord_words_def_fixed */
extern void* textord_words_def_fixed;

/* Symbol: _ZN13GenericVectorIN9tesseract12DawgPositionEEpLERKS2_ */
/* Demangled: GenericVector<tesseract::DawgPosition>::operator+=(GenericVector<tesseract::DawgPosition> const&) */
int _ZN13GenericVectorIN9tesseract12DawgPositionEEpLERKS2_(void);

/* Symbol: _ZNK11PAGE_RES_ITeqERKS_ */
/* Demangled: PAGE_RES_IT::operator==(PAGE_RES_IT const&) const */
int _ZNK11PAGE_RES_ITeqERKS_(void);

/* Symbol: _ZNK14ParagraphModel10ComparableERKS_ */
/* Demangled: ParagraphModel::Comparable(ParagraphModel const&) const */
int _ZNK14ParagraphModel10ComparableERKS_(void);

/* Symbol: _ZN9tesseract11ParamsModel10LoadFromFpEPKcP7__sFILEx */
/* Demangled: tesseract::ParamsModel::LoadFromFp(char const*, __sFILE*, long long) */
int _ZN9tesseract11ParamsModel10LoadFromFpEPKcP7__sFILEx(void);

/* Symbol: _ZN9tesseract7BoxWordC2ERKS0_ */
/* Demangled: tesseract::BoxWord::BoxWord(tesseract::BoxWord const&) */
int _ZN9tesseract7BoxWordC2ERKS0_(void);

/* Symbol: _ZN9tesseract10SearchNode10PathStringEv */
/* Demangled: tesseract::SearchNode::PathString() */
int _ZN9tesseract10SearchNode10PathStringEv(void);

/* Symbol: _Z16add_frag_to_listP14C_OUTLINE_FRAGP19C_OUTLINE_FRAG_LIST */
/* Demangled: add_frag_to_list(C_OUTLINE_FRAG*, C_OUTLINE_FRAG_LIST*) */
int _Z16add_frag_to_listP14C_OUTLINE_FRAGP19C_OUTLINE_FRAG_LIST(void);

/* Symbol: _ZN9tesseract9ImageFind20pixNearlyRectangularEP3PixdddPiS3_S3_S3_ */
/* Demangled: tesseract::ImageFind::pixNearlyRectangular(Pix*, double, double, double, int*, int*, int*, int*) */
int _ZN9tesseract9ImageFind20pixNearlyRectangularEP3PixdddPiS3_S3_S3_(void);

/* Symbol: TessBaseAPIAdaptToWordStr */
/* Demangled: TessBaseAPIAdaptToWordStr */
int TessBaseAPIAdaptToWordStr(void);

/* Symbol: _ZNK9tesseract8Classify17ClassIDToDebugStrEPK20INT_TEMPLATES_STRUCTii */
/* Demangled: tesseract::Classify::ClassIDToDebugStr(INT_TEMPLATES_STRUCT const*, int, int) const */
int _ZNK9tesseract8Classify17ClassIDToDebugStrEPK20INT_TEMPLATES_STRUCTii(void);

/* Symbol: _ZN9tesseract15ColPartitionSet14GetColumnBoxesEiiPNS_15ColSegment_LISTE */
/* Demangled: tesseract::ColPartitionSet::GetColumnBoxes(int, int, tesseract::ColSegment_LIST*) */
int _ZN9tesseract15ColPartitionSet14GetColumnBoxesEiiPNS_15ColSegment_LISTE(void);

/* Symbol: _ZN9tesseract18TessResultRendererD2Ev */
/* Demangled: tesseract::TessResultRenderer::~TessResultRenderer() */
int _ZN9tesseract18TessResultRendererD2Ev(void);

/* Symbol: _ZN9tesseract18UnicodeSpanSkipper10SkipRomansEi */
/* Demangled: tesseract::UnicodeSpanSkipper::SkipRomans(int) */
int _ZN9tesseract18UnicodeSpanSkipper10SkipRomansEi(void);

/* Symbol: _ZN9tesseract9AmbigSpecC1Ev */
/* Demangled: tesseract::AmbigSpec::AmbigSpec() */
int _ZN9tesseract9AmbigSpecC1Ev(void);

/* Symbol: _ZN9tesseract9Tesseract13PreenXHeightsEP10BLOCK_LIST */
/* Demangled: tesseract::Tesseract::PreenXHeights(BLOCK_LIST*) */
int _ZN9tesseract9Tesseract13PreenXHeightsEP10BLOCK_LIST(void);

/* Symbol: _ZN9tesseract8GridBaseC1EiRK6ICOORDS3_ */
/* Demangled: tesseract::GridBase::GridBase(int, ICOORD const&, ICOORD const&) */
int _ZN9tesseract8GridBaseC1EiRK6ICOORDS3_(void);

/* Symbol: _ZN9tesseract9Tesseract13SearchForTextEPK13GenericVectorIP16BLOB_CHOICE_LISTEiiRKS1_IiEifPS7_PfSA_ */
/* Demangled: tesseract::Tesseract::SearchForText(GenericVector<BLOB_CHOICE_LIST*> const*, int, int, GenericVector<int> const&, int, float, GenericVector<int>*, float*, GenericVector<int>*) */
int _ZN9tesseract9Tesseract13SearchForTextEPK13GenericVectorIP16BLOB_CHOICE_LISTEiiRKS1_IiEifPS7_PfSA_(void);

/* Symbol: _ZN15ELIST2_ITERATOR13data_relativeEa */
/* Demangled: ELIST2_ITERATOR::data_relative(signed char) */
int _ZN15ELIST2_ITERATOR13data_relativeEa(void);

/* Symbol: _ZN9tesseract17CubeLineSegmenter19kMaxHorzAspectRatioE */
/* Demangled: tesseract::CubeLineSegmenter::kMaxHorzAspectRatio */
extern void* _ZN9tesseract17CubeLineSegmenter19kMaxHorzAspectRatioE;

/* Symbol: _ZN9tesseract13TessLangModel7IsDigitEi */
/* Demangled: tesseract::TessLangModel::IsDigit(int) */
int _ZN9tesseract13TessLangModel7IsDigitEi(void);

/* Symbol: _ZNK9tesseract11StrokeWidth16NoNoiseInBetweenERK4TBOXS3_ */
/* Demangled: tesseract::StrokeWidth::NoNoiseInBetween(TBOX const&, TBOX const&) const */
int _ZNK9tesseract11StrokeWidth16NoNoiseInBetweenERK4TBOXS3_(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract18LanguageModelStateEE15double_the_sizeEv */
/* Demangled: GenericVector<tesseract::LanguageModelState*>::double_the_size() */
int _ZN13GenericVectorIPN9tesseract18LanguageModelStateEE15double_the_sizeEv(void);

/* Symbol: _ZN9tesseract9Tesseract14fix_sp_fp_wordER11WERD_RES_ITP3ROWP5BLOCK */
/* Demangled: tesseract::Tesseract::fix_sp_fp_word(WERD_RES_IT&, ROW*, BLOCK*) */
int _ZN9tesseract9Tesseract14fix_sp_fp_wordER11WERD_RES_ITP3ROWP5BLOCK(void);

/* Symbol: _ZNK9tesseract15ParagraphTheory7IndexOfEPK14ParagraphModel */
/* Demangled: tesseract::ParagraphTheory::IndexOf(ParagraphModel const*) const */
int _ZNK9tesseract15ParagraphTheory7IndexOfEPK14ParagraphModel(void);

/* Symbol: _ZN9tesseract11StrokeWidth22RemoveLargeUnusedBlobsEP8TO_BLOCKPNS_16ColPartitionGridEPNS_17ColPartition_LISTE */
/* Demangled: tesseract::StrokeWidth::RemoveLargeUnusedBlobs(TO_BLOCK*, tesseract::ColPartitionGrid*, tesseract::ColPartition_LIST*) */
int _ZN9tesseract11StrokeWidth22RemoveLargeUnusedBlobsEP8TO_BLOCKPNS_16ColPartitionGridEPNS_17ColPartition_LISTE(void);

/* Symbol: _ZN9tesseract18TextlineProjection22IncrementRectangle8BitERK4TBOX */
/* Demangled: tesseract::TextlineProjection::IncrementRectangle8Bit(TBOX const&) */
int _ZN9tesseract18TextlineProjection22IncrementRectangle8BitERK4TBOX(void);

/* Symbol: _ZN9tesseract11TessBaseAPI9GetStripsEPP4PixaPPi */
/* Demangled: tesseract::TessBaseAPI::GetStrips(Pixa**, int**) */
int _ZN9tesseract11TessBaseAPI9GetStripsEPP4PixaPPi(void);

/* Symbol: _ZN9tesseract9Tesseract17MaximallyChopWordERK13GenericVectorI4TBOXEP5BLOCKP3ROWP8WERD_RES */
/* Demangled: tesseract::Tesseract::MaximallyChopWord(GenericVector<TBOX> const&, BLOCK*, ROW*, WERD_RES*) */
int _ZN9tesseract9Tesseract17MaximallyChopWordERK13GenericVectorI4TBOXEP5BLOCKP3ROWP8WERD_RES(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract11DoubleParamEE9push_backES2_ */
/* Demangled: GenericVector<tesseract::DoubleParam*>::push_back(tesseract::DoubleParam*) */
int _ZN13GenericVectorIPN9tesseract11DoubleParamEE9push_backES2_(void);

/* Symbol: _ZN12BlamerBundle16InitForSegSearchEPK11WERD_CHOICEP6MATRIXibP6STRINGP19TessResultCallback2IbiiE */
/* Demangled: BlamerBundle::InitForSegSearch(WERD_CHOICE const*, MATRIX*, int, bool, STRING*, TessResultCallback2<bool, int, int>*) */
int _ZN12BlamerBundle16InitForSegSearchEPK11WERD_CHOICEP6MATRIXibP6STRINGP19TessResultCallback2IbiiE(void);

/* Symbol: _ZN8BLOBNBOX10rotate_boxE6FCOORD */
/* Demangled: BLOBNBOX::rotate_box(FCOORD) */
int _ZN8BLOBNBOX10rotate_boxE6FCOORD(void);

/* Symbol: _ZN3REJ16setrej_block_rejEv */
/* Demangled: REJ::setrej_block_rej() */
int _ZN3REJ16setrej_block_rejEv(void);

/* Symbol: _ZN9tesseract18ShiroRekhaSplitterC2Ev */
/* Demangled: tesseract::ShiroRekhaSplitter::ShiroRekhaSplitter() */
int _ZN9tesseract18ShiroRekhaSplitterC2Ev(void);

/* Symbol: _ZNSt3__112__hash_tableIPN9tesseract10ColSegmentENS1_7PtrHashIS2_EENS_8equal_toIS3_EENS_9allocatorIS3_EEE5clearEv */
/* Demangled: std::__1::__hash_table<tesseract::ColSegment*, tesseract::PtrHash<tesseract::ColSegment>, std::__1::equal_to<tesseract::ColSegment*>, std::__1::allocator<tesseract::ColSegment*> >::clear() */
int _ZNSt3__112__hash_tableIPN9tesseract10ColSegmentENS1_7PtrHashIS2_EENS_8equal_toIS3_EENS_9allocatorIS3_EEE5clearEv(void);

/* Symbol: _ZN8WERD_RES20ConditionalBlobMergeEP19TessResultCallback2IiiiEPS0_IbRK4TBOXS5_E */
/* Demangled: WERD_RES::ConditionalBlobMerge(TessResultCallback2<int, int, int>*, TessResultCallback2<bool, TBOX const&, TBOX const&>*) */
int _ZN8WERD_RES20ConditionalBlobMergeEP19TessResultCallback2IiiiEPS0_IbRK4TBOXS5_E(void);

/* Symbol: _ZNK4SEAM4HideEv */
/* Demangled: SEAM::Hide() const */
int _ZNK4SEAM4HideEv(void);

/* Symbol: _ZN9tesseract12SearchColumnD1Ev */
/* Demangled: tesseract::SearchColumn::~SearchColumn() */
int _ZN9tesseract12SearchColumnD1Ev(void);

/* Symbol: _ZN9tesseract11TessBaseAPI12ClearResultsEv */
/* Demangled: tesseract::TessBaseAPI::ClearResults() */
int _ZN9tesseract11TessBaseAPI12ClearResultsEv(void);

/* Symbol: _ZN9tesseract9Tesseract23ConvertStringToUnicharsEPKcP13GenericVectorIiE */
/* Demangled: tesseract::Tesseract::ConvertStringToUnichars(char const*, GenericVector<int>*) */
int _ZN9tesseract9Tesseract23ConvertStringToUnicharsEPKcP13GenericVectorIiE(void);

/* Symbol: _ZNK9tesseract14CubeClassifier13GetShapeTableEv */
/* Demangled: tesseract::CubeClassifier::GetShapeTable() const */
int _ZNK9tesseract14CubeClassifier13GetShapeTableEv(void);

/* Symbol: _ZNK12BlamerBundle11SplitBundleEiibPS_S0_ */
/* Demangled: BlamerBundle::SplitBundle(int, int, bool, BlamerBundle*, BlamerBundle*) const */
int _ZNK12BlamerBundle11SplitBundleEiibPS_S0_(void);

/* Symbol: _Z17fixed_pitch_wordsP6TO_ROW6FCOORD */
/* Demangled: fixed_pitch_words(TO_ROW*, FCOORD) */
int _Z17fixed_pitch_wordsP6TO_ROW6FCOORD(void);

/* Symbol: _ZN9tesseract7Wordrec16choose_best_seamEPNS_11GenericHeapINS_12KDPtrPairIncIf4SEAMEEEEPK5SPLITfPPS3_P5TBLOBPNS1_INS_12KDPtrPairDecIfS3_EEEE */
/* Demangled: tesseract::Wordrec::choose_best_seam(tesseract::GenericHeap<tesseract::KDPtrPairInc<float, SEAM> >*, SPLIT const*, float, SEAM**, TBLOB*, tesseract::GenericHeap<tesseract::KDPtrPairDec<float, SEAM> >*) */
int _ZN9tesseract7Wordrec16choose_best_seamEPNS_11GenericHeapINS_12KDPtrPairIncIf4SEAMEEEEPK5SPLITfPPS3_P5TBLOBPNS1_INS_12KDPtrPairDecIfS3_EEEE(void);

/* Symbol: _ZN13GenericVectorIP13BLOBNBOX_LISTE7reserveEi */
/* Demangled: GenericVector<BLOBNBOX_LIST*>::reserve(int) */
int _ZN13GenericVectorIP13BLOBNBOX_LISTE7reserveEi(void);

/* Symbol: _ZNK9tesseract14EquationDetect14CountAlignmentERK13GenericVectorIiEi */
/* Demangled: tesseract::EquationDetect::CountAlignment(GenericVector<int> const&, int) const */
int _ZNK9tesseract14EquationDetect14CountAlignmentERK13GenericVectorIiEi(void);

/* Symbol: _ZN9tesseract9BitVectorC2Ev */
/* Demangled: tesseract::BitVector::BitVector() */
int _ZN9tesseract9BitVectorC2Ev(void);

/* Symbol: _ZNK9tesseract11TessBaseAPI29GetAvailableLanguagesAsVectorEP13GenericVectorI6STRINGE */
/* Demangled: tesseract::TessBaseAPI::GetAvailableLanguagesAsVector(GenericVector<STRING>*) const */
int _ZNK9tesseract11TessBaseAPI29GetAvailableLanguagesAsVectorEP13GenericVectorI6STRINGE(void);

/* Symbol: _ZNK9tesseract14ResultIterator18AppendUTF8WordTextEP6STRING */
/* Demangled: tesseract::ResultIterator::AppendUTF8WordText(STRING*) const */
int _ZNK9tesseract14ResultIterator18AppendUTF8WordTextEP6STRING(void);

/* Symbol: _ZN13GenericVectorIsE7reserveEi */
/* Demangled: GenericVector<short>::reserve(int) */
int _ZN13GenericVectorIsE7reserveEi(void);

/* Symbol: _ZN9tesseract15CubeRecoContext6CreateEPNS_9TesseractEPNS_15TessdataManagerEP10UNICHARSET */
/* Demangled: tesseract::CubeRecoContext::Create(tesseract::Tesseract*, tesseract::TessdataManager*, UNICHARSET*) */
int _ZN9tesseract15CubeRecoContext6CreateEPNS_9TesseractEPNS_15TessdataManagerEP10UNICHARSET(void);

/* Symbol: _ZNK9tesseract14ResultIterator21IsAtFinalSymbolOfWordEv */
/* Demangled: tesseract::ResultIterator::IsAtFinalSymbolOfWord() const */
int _ZNK9tesseract14ResultIterator21IsAtFinalSymbolOfWordEv(void);

/* Symbol: _Z5EfreePv */
/* Demangled: Efree(void*) */
int _Z5EfreePv(void);

/* Symbol: _ZN9tesseract8Classify22ExtractOutlineFeaturesEP5TBLOB */
/* Demangled: tesseract::Classify::ExtractOutlineFeatures(TBLOB*) */
int _ZN9tesseract8Classify22ExtractOutlineFeaturesEP5TBLOB(void);

/* Symbol: _Z16ComputeDirectionP8MFEDGEPTS0_ff */
/* Demangled: ComputeDirection(MFEDGEPT*, MFEDGEPT*, float, float) */
int _Z16ComputeDirectionP8MFEDGEPTS0_ff(void);

/* Symbol: _ZN9tesseract13TessLangModel5EdgesEPKcPKNS_4DawgExxPPNS_11LangModEdgeE */
/* Demangled: tesseract::TessLangModel::Edges(char const*, tesseract::Dawg const*, long long, long long, tesseract::LangModEdge**) */
int _ZN9tesseract13TessLangModel5EdgesEPKcPKNS_4DawgExxPPNS_11LangModEdgeE(void);

/* Symbol: _ZN9tesseract12ColPartition11SplitAtBlobEP8BLOBNBOX */
/* Demangled: tesseract::ColPartition::SplitAtBlob(BLOBNBOX*) */
int _ZN9tesseract12ColPartition11SplitAtBlobEP8BLOBNBOX(void);

/* Symbol: _ZN9tesseract16ColPartitionGrid26SplitOverlappingPartitionsEPNS_17ColPartition_LISTE */
/* Demangled: tesseract::ColPartitionGrid::SplitOverlappingPartitions(tesseract::ColPartition_LIST*) */
int _ZN9tesseract16ColPartitionGrid26SplitOverlappingPartitionsEPNS_17ColPartition_LISTE(void);

/* Symbol: _ZNK9tesseract13LanguageModel16GetNextParentVSEEbbPK11BLOB_CHOICEhRK10UNICHARSETP8WERD_RESPNS_20ViterbiStateEntry_ITEPh */
/* Demangled: tesseract::LanguageModel::GetNextParentVSE(bool, bool, BLOB_CHOICE const*, unsigned char, UNICHARSET const&, WERD_RES*, tesseract::ViterbiStateEntry_IT*, unsigned char*) const */
int _ZNK9tesseract13LanguageModel16GetNextParentVSEEbbPK11BLOB_CHOICEhRK10UNICHARSETP8WERD_RESPNS_20ViterbiStateEntry_ITEPh(void);

/* Symbol: _ZN11BLOB_CHOICEC2ERKS_ */
/* Demangled: BLOB_CHOICE::BLOB_CHOICE(BLOB_CHOICE const&) */
int _ZN11BLOB_CHOICEC2ERKS_(void);

/* Symbol: _ZN11WERD_CHOICE16ScriptPositionOfEbRK10UNICHARSETRK4TBOXi */
/* Demangled: WERD_CHOICE::ScriptPositionOf(bool, UNICHARSET const&, TBOX const&, int) */
int _ZN11WERD_CHOICE16ScriptPositionOfEbRK10UNICHARSETRK4TBOXi(void);

/* Symbol: _Z10ROW_zapperP10ELIST_LINK */
/* Demangled: ROW_zapper(ELIST_LINK*) */
int _Z10ROW_zapperP10ELIST_LINK(void);

/* Symbol: _ZN13GenericVectorIN10SortHelperIiE8SortPairIiEEE5clearEv */
/* Demangled: GenericVector<SortHelper<int>::SortPair<int> >::clear() */
int _ZN13GenericVectorIN10SortHelperIiE8SortPairIiEEE5clearEv(void);

/* Symbol: _ZNK8WERD_RES16PrintBestChoicesEv */
/* Demangled: WERD_RES::PrintBestChoices() const */
int _ZNK8WERD_RES16PrintBestChoicesEv(void);

/* Symbol: _ZN9tesseract16CubeSearchObject16RecognizeSegmentEii */
/* Demangled: tesseract::CubeSearchObject::RecognizeSegment(int, int) */
int _ZN9tesseract16CubeSearchObject16RecognizeSegmentEii(void);

/* Symbol: _ZN9tesseract11StrokeWidth17RemoveLineResidueEPNS_17ColPartition_LISTE */
/* Demangled: tesseract::StrokeWidth::RemoveLineResidue(tesseract::ColPartition_LIST*) */
int _ZN9tesseract11StrokeWidth17RemoveLineResidueEPNS_17ColPartition_LISTE(void);

/* Symbol: TessResultIteratorSymbolIsDropcap */
/* Demangled: TessResultIteratorSymbolIsDropcap */
int TessResultIteratorSymbolIsDropcap(void);

/* Symbol: _ZN10UNICHARSET8CopyFromERKS_ */
/* Demangled: UNICHARSET::CopyFrom(UNICHARSET const&) */
int _ZN10UNICHARSET8CopyFromERKS_(void);

/* Symbol: _ZN9tesseract13FeatureHybrid15ComputeFeaturesEPNS_8CharSampEPf */
/* Demangled: tesseract::FeatureHybrid::ComputeFeatures(tesseract::CharSamp*, float*) */
int _ZN9tesseract13FeatureHybrid15ComputeFeaturesEPNS_8CharSampEPf(void);

/* Symbol: _ZN7SVEvent4copyEv */
/* Demangled: SVEvent::copy() */
int _ZN7SVEvent4copyEv(void);

/* Symbol: _ZTVN9tesseract11TessBaseAPIE */
/* Demangled: vtable for tesseract::TessBaseAPI */
extern void* _ZTVN9tesseract11TessBaseAPIE;

/* Symbol: _ZN9tesseract9Tesseract17word_blob_qualityEP8WERD_RESP3ROW */
/* Demangled: tesseract::Tesseract::word_blob_quality(WERD_RES*, ROW*) */
int _ZN9tesseract9Tesseract17word_blob_qualityEP8WERD_RESP3ROW(void);

/* Symbol: _ZNK9tesseract10ShapeTable15NumMasterShapesEv */
/* Demangled: tesseract::ShapeTable::NumMasterShapes() const */
int _ZNK9tesseract10ShapeTable15NumMasterShapesEv(void);

/* Symbol: _Z6insertP8list_recPv */
/* Demangled: insert(list_rec*, void*) */
int _Z6insertP8list_recPv(void);

/* Symbol: _ZN13GenericVectorI12DANGERR_INFOE15double_the_sizeEv */
/* Demangled: GenericVector<DANGERR_INFO>::double_the_size() */
int _ZN13GenericVectorI12DANGERR_INFOE15double_the_sizeEv(void);

/* Symbol: _ZN9tesseract15ColPartitionSet12AddPartitionEPNS_12ColPartitionEPNS_15ColPartition_ITE */
/* Demangled: tesseract::ColPartitionSet::AddPartition(tesseract::ColPartition*, tesseract::ColPartition_IT*) */
int _ZN9tesseract15ColPartitionSet12AddPartitionEPNS_12ColPartitionEPNS_15ColPartition_ITE(void);

/* Symbol: __aeabi_memmove */
/* Demangled: __aeabi_memmove */
int fn___aeabi_memmove(void) __asm__("__aeabi_memmove");

/* Symbol: _ZN9tesseract10GridSearchINS_12ColPartitionENS_18ColPartition_CLISTENS_17ColPartition_C_ITEE10RemoveBBoxEv */
/* Demangled: tesseract::GridSearch<tesseract::ColPartition, tesseract::ColPartition_CLIST, tesseract::ColPartition_C_IT>::RemoveBBox() */
int _ZN9tesseract10GridSearchINS_12ColPartitionENS_18ColPartition_CLISTENS_17ColPartition_C_ITEE10RemoveBBoxEv(void);

/* Symbol: _ZN9tesseract19RowScratchRegisters12SetStartLineEv */
/* Demangled: tesseract::RowScratchRegisters::SetStartLine() */
int _ZN9tesseract19RowScratchRegisters12SetStartLineEv(void);

/* Symbol: _Z11make_edgeptiiP6EDGEPTS0_ */
/* Demangled: make_edgept(int, int, EDGEPT*, EDGEPT*) */
int _Z11make_edgeptiiP6EDGEPTS0_(void);

/* Symbol: textord_show_new_words */
/* Demangled: textord_show_new_words */
extern void* textord_show_new_words;

/* Symbol: TessDeleteTextArray */
/* Demangled: TessDeleteTextArray */
int TessDeleteTextArray(void);

/* Symbol: TessPageIteratorIsAtBeginningOf */
/* Demangled: TessPageIteratorIsAtBeginningOf */
int TessPageIteratorIsAtBeginningOf(void);

/* Symbol: TessResultRendererExtention */
/* Demangled: TessResultRendererExtention */
int TessResultRendererExtention(void);

/* Symbol: GeoFeatDesc */
/* Demangled: GeoFeatDesc */
extern void* GeoFeatDesc;

/* Symbol: _Z13empty_bucketsP5BLOCKP10OL_BUCKETS */
/* Demangled: empty_buckets(BLOCK*, OL_BUCKETS*) */
int _Z13empty_bucketsP5BLOCKP10OL_BUCKETS(void);

/* Symbol: _ZN9tesseract11StrokeWidth19DiacriticXGapFilledEPNS_8BlobGridERK4TBOXS5_ */
/* Demangled: tesseract::StrokeWidth::DiacriticXGapFilled(tesseract::BlobGrid*, TBOX const&, TBOX const&) */
int _ZN9tesseract11StrokeWidth19DiacriticXGapFilledEPNS_8BlobGridERK4TBOXS5_(void);

/* Symbol: _ZN9tesseract7Wordrec12angle_changeEP6EDGEPTS2_S2_ */
/* Demangled: tesseract::Wordrec::angle_change(EDGEPT*, EDGEPT*, EDGEPT*) */
int _ZN9tesseract7Wordrec12angle_changeEP6EDGEPTS2_S2_(void);

/* Symbol: _ZNK6DENORM5PrintEv */
/* Demangled: DENORM::Print() const */
int _ZNK6DENORM5PrintEv(void);

/* Symbol: _ZNK9tesseract13IntFeatureMap19InverseIndexFeatureEi */
/* Demangled: tesseract::IntFeatureMap::InverseIndexFeature(int) const */
int _ZNK9tesseract13IntFeatureMap19InverseIndexFeatureEi(void);

/* Symbol: _ZN9tesseract16CubeSearchObject8SegPtCntEv */
/* Demangled: tesseract::CubeSearchObject::SegPtCnt() */
int _ZN9tesseract16CubeSearchObject8SegPtCntEv(void);

/* Symbol: _ZN9tesseract13FeatureHybridD2Ev */
/* Demangled: tesseract::FeatureHybrid::~FeatureHybrid() */
int _ZN9tesseract13FeatureHybridD2Ev(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract13BaselineBlockEE20delete_data_pointersEv */
/* Demangled: GenericVector<tesseract::BaselineBlock*>::delete_data_pointers() */
int _ZN13GenericVectorIPN9tesseract13BaselineBlockEE20delete_data_pointersEv(void);

/* Symbol: _ZNK5STATS4modeEv */
/* Demangled: STATS::mode() const */
int _ZNK5STATS4modeEv(void);

/* Symbol: _ZN13GenericVectorIfE9push_backEf */
/* Demangled: GenericVector<float>::push_back(float) */
int _ZN13GenericVectorIfE9push_backEf(void);

/* Symbol: _ZTV29_TessMemberResultCallback_0_2ILb0Ei8WERD_RESiiE */
/* Demangled: vtable for _TessMemberResultCallback_0_2<false, int, WERD_RES, int, int> */
extern void* _ZTV29_TessMemberResultCallback_0_2ILb0Ei8WERD_RESiiE;

/* Symbol: _ZN13GenericVectorIfE15choose_nth_itemEiiiPj */
/* Demangled: GenericVector<float>::choose_nth_item(int, int, int, unsigned int*) */
int _ZN13GenericVectorIfE15choose_nth_itemEiiiPj(void);

/* Symbol: textord_show_expanded_rows */
/* Demangled: textord_show_expanded_rows */
extern void* textord_show_expanded_rows;

/* Symbol: _ZN9tesseract15StructuredTable13set_line_gridEPNS_16ColPartitionGridE */
/* Demangled: tesseract::StructuredTable::set_line_grid(tesseract::ColPartitionGrid*) */
int _ZN9tesseract15StructuredTable13set_line_gridEPNS_16ColPartitionGridE(void);

/* Symbol: _ZN13GenericVectorIN9tesseract14LineHypothesisEE15double_the_sizeEv */
/* Demangled: GenericVector<tesseract::LineHypothesis>::double_the_size() */
int _ZN13GenericVectorIN9tesseract14LineHypothesisEE15double_the_sizeEv(void);

/* Symbol: _ZN8BLOBNBOX22DefiniteIndividualFlowEv */
/* Demangled: BLOBNBOX::DefiniteIndividualFlow() */
int _ZN8BLOBNBOX22DefiniteIndividualFlowEv(void);

/* Symbol: _Z6searchP8list_recPvPFiS1_S1_E */
/* Demangled: search(list_rec*, void*, int (*)(void*, void*)) */
int _Z6searchP8list_recPvPFiS1_S1_E(void);

/* Symbol: _ZNK9tesseract12ColPartition16IsInSameColumnAsERKS0_ */
/* Demangled: tesseract::ColPartition::IsInSameColumnAs(tesseract::ColPartition const&) const */
int _ZNK9tesseract12ColPartition16IsInSameColumnAsERKS0_(void);

/* Symbol: _Z20OrientationIdToValueRKi */
/* Demangled: OrientationIdToValue(int const&) */
int _Z20OrientationIdToValueRKi(void);

/* Symbol: _ZN9tesseract11TessBaseAPI16AdaptToCharacterEPKciffff */
/* Demangled: tesseract::TessBaseAPI::AdaptToCharacter(char const*, int, float, float, float, float) */
int _ZN9tesseract11TessBaseAPI16AdaptToCharacterEPKciffff(void);

/* Symbol: _ZN9tesseract16CubeTuningParams6CreateERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_ */
/* Demangled: tesseract::CubeTuningParams::Create(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN9tesseract16CubeTuningParams6CreateERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_(void);

/* Symbol: _Z16FeatureDirectionh */
/* Demangled: FeatureDirection(unsigned char) */
int _Z16FeatureDirectionh(void);

/* Symbol: __floatdidf */
/* Demangled: __floatdidf */
int fn___floatdidf(void) __asm__("__floatdidf");

/* Symbol: _ZNK9tesseract14ResultIterator11GetUTF8TextENS_17PageIteratorLevelE */
/* Demangled: tesseract::ResultIterator::GetUTF8Text(tesseract::PageIteratorLevel) const */
int _ZNK9tesseract14ResultIterator11GetUTF8TextENS_17PageIteratorLevelE(void);

/* Symbol: _Z14MakeBoxFileStrPKcRK4TBOXiP6STRING */
/* Demangled: MakeBoxFileStr(char const*, TBOX const&, int, STRING*) */
int _Z14MakeBoxFileStrPKcRK4TBOXiP6STRING(void);

/* Symbol: _Z18ComputeOrientationP8MFEDGEPTS0_ */
/* Demangled: ComputeOrientation(MFEDGEPT*, MFEDGEPT*) */
int _Z18ComputeOrientationP8MFEDGEPTS0_(void);

/* Symbol: _ZN9tesseract15TableRecognizer29FindLinesBoundingBoxIterationEP4TBOX */
/* Demangled: tesseract::TableRecognizer::FindLinesBoundingBoxIteration(TBOX*) */
int _ZN9tesseract15TableRecognizer29FindLinesBoundingBoxIterationEP4TBOX(void);

/* Symbol: _ZN9tesseract13SortByBoxLeftINS_11WordWithBoxEEEiPKvS3_ */
/* Demangled: int tesseract::SortByBoxLeft<tesseract::WordWithBox>(void const*, void const*) */
int _ZN9tesseract13SortByBoxLeftINS_11WordWithBoxEEEiPKvS3_(void);

/* Symbol: _ZNK9tesseract12PageIterator13ParagraphInfoEPNS_22ParagraphJustificationEPbS3_Pi */
/* Demangled: tesseract::PageIterator::ParagraphInfo(tesseract::ParagraphJustification*, bool*, bool*, int*) const */
int _ZNK9tesseract12PageIterator13ParagraphInfoEPNS_22ParagraphJustificationEPbS3_Pi(void);

/* Symbol: _ZN13GenericVectorIN9tesseract14LineHypothesisEE5clearEv */
/* Demangled: GenericVector<tesseract::LineHypothesis>::clear() */
int _ZN13GenericVectorIN9tesseract14LineHypothesisEE5clearEv(void);

/* Symbol: _ZN9tesseract9Tesseract11alpha_countEPKcS2_ */
/* Demangled: tesseract::Tesseract::alpha_count(char const*, char const*) */
int _ZN9tesseract9Tesseract11alpha_countEPKcS2_(void);

/* Symbol: _ZN9tesseract16FloatWordFeature16FromWordFeaturesERK13GenericVectorINS_11WordFeatureEEPS1_IS0_E */
/* Demangled: tesseract::FloatWordFeature::FromWordFeatures(GenericVector<tesseract::WordFeature> const&, GenericVector<tesseract::FloatWordFeature>*) */
int _ZN9tesseract16FloatWordFeature16FromWordFeaturesERK13GenericVectorINS_11WordFeatureEEPS1_IS0_E(void);

/* Symbol: _ZNK5STATS2sdEv */
/* Demangled: STATS::sd() const */
int _ZNK5STATS2sdEv(void);

/* Symbol: _ZN9tesseract14EquationDetectD1Ev */
/* Demangled: tesseract::EquationDetect::~EquationDetect() */
int _ZN9tesseract14EquationDetectD1Ev(void);

/* Symbol: global_monitor */
/* Demangled: global_monitor */
extern void* global_monitor;

/* Symbol: _ZN9tesseract13MasterTrainer13ClusterShapesEiifPNS_10ShapeTableE */
/* Demangled: tesseract::MasterTrainer::ClusterShapes(int, int, float, tesseract::ShapeTable*) */
int _ZN9tesseract13MasterTrainer13ClusterShapesEiifPNS_10ShapeTableE(void);

/* Symbol: _Z11exists_filePKc */
/* Demangled: exists_file(char const*) */
int _Z11exists_filePKc(void);

/* Symbol: _ZN13GenericVectorIN9tesseract9NodeChildEE15double_the_sizeEv */
/* Demangled: GenericVector<tesseract::NodeChild>::double_the_size() */
int _ZN13GenericVectorIN9tesseract9NodeChildEE15double_the_sizeEv(void);

/* Symbol: _ZN9tesseract10GridSearchINS_10ColSegmentENS_16ColSegment_CLISTENS_15ColSegment_C_ITEE10CommonNextEv */
/* Demangled: tesseract::GridSearch<tesseract::ColSegment, tesseract::ColSegment_CLIST, tesseract::ColSegment_C_IT>::CommonNext() */
int _ZN9tesseract10GridSearchINS_10ColSegmentENS_16ColSegment_CLISTENS_15ColSegment_C_ITEE10CommonNextEv(void);

/* Symbol: _ZN9tesseract16ImageThresholderD1Ev */
/* Demangled: tesseract::ImageThresholder::~ImageThresholder() */
int _ZN9tesseract16ImageThresholderD1Ev(void);

/* Symbol: _ZN9tesseract10SearchNode12UpdateParentEPS0_iPNS_11LangModEdgeE */
/* Demangled: tesseract::SearchNode::UpdateParent(tesseract::SearchNode*, int, tesseract::LangModEdge*) */
int _ZN9tesseract10SearchNode12UpdateParentEPS0_iPNS_11LangModEdgeE(void);

/* Symbol: _Z12fill_heightsP6TO_ROWfiiP5STATSS2_ */
/* Demangled: fill_heights(TO_ROW*, float, int, int, STATS*, STATS*) */
int _Z12fill_heightsP6TO_ROWfiiP5STATSS2_(void);

/* Symbol: _Z11ReadNextBoxPiP7__sFILEP6STRINGP4TBOX */
/* Demangled: ReadNextBox(int*, __sFILE*, STRING*, TBOX*) */
int _Z11ReadNextBoxPiP7__sFILEP6STRINGP4TBOX(void);

/* Symbol: _ZN10UNICHARMAPD2Ev */
/* Demangled: UNICHARMAP::~UNICHARMAP() */
int _ZN10UNICHARMAPD2Ev(void);

/* Symbol: _ZN9tesseract16ColPartitionGridC1EiRK6ICOORDS3_ */
/* Demangled: tesseract::ColPartitionGrid::ColPartitionGrid(int, ICOORD const&, ICOORD const&) */
int _ZN9tesseract16ColPartitionGridC1EiRK6ICOORDS3_(void);

/* Symbol: _Z16check_path_legalP9CRACKEDGE */
/* Demangled: check_path_legal(CRACKEDGE*) */
int _Z16check_path_legalP9CRACKEDGE(void);

/* Symbol: _ZN9tesseract9Tesseract24acceptable_number_stringEPKcS2_ */
/* Demangled: tesseract::Tesseract::acceptable_number_string(char const*, char const*) */
int _ZN9tesseract9Tesseract24acceptable_number_stringEPKcS2_(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract9ImageDataEE7reserveEi */
/* Demangled: GenericVector<tesseract::ImageData*>::reserve(int) */
int _ZN13GenericVectorIPN9tesseract9ImageDataEE7reserveEi(void);

/* Symbol: _ZNK6STRING9SerializeEPN9tesseract5TFileE */
/* Demangled: STRING::Serialize(tesseract::TFile*) const */
int _ZNK6STRING9SerializeEPN9tesseract5TFileE(void);

/* Symbol: _ZNK9tesseract18TextlineProjection16VerticalDistanceEbiii */
/* Demangled: tesseract::TextlineProjection::VerticalDistance(bool, int, int, int) const */
int _ZNK9tesseract18TextlineProjection16VerticalDistanceEbiii(void);

/* Symbol: _ZN9tesseract10GridSearchINS_12ColPartitionENS_18ColPartition_CLISTENS_17ColPartition_C_ITEE13NextRadSearchEv */
/* Demangled: tesseract::GridSearch<tesseract::ColPartition, tesseract::ColPartition_CLIST, tesseract::ColPartition_C_IT>::NextRadSearch() */
int _ZN9tesseract10GridSearchINS_12ColPartitionENS_18ColPartition_CLISTENS_17ColPartition_C_ITEE13NextRadSearchEv(void);

/* Symbol: _ZN9tesseract14EquationDetect15SearchByOverlapEPNS_12ColPartitionEP13GenericVectorIS2_E */
/* Demangled: tesseract::EquationDetect::SearchByOverlap(tesseract::ColPartition*, GenericVector<tesseract::ColPartition*>*) */
int _ZN9tesseract14EquationDetect15SearchByOverlapEPNS_12ColPartitionEP13GenericVectorIS2_E(void);

/* Symbol: _ZN9tesseract14ResultIterator28MoveToLogicalStartOfTextlineEv */
/* Demangled: tesseract::ResultIterator::MoveToLogicalStartOfTextline() */
int _ZN9tesseract14ResultIterator28MoveToLogicalStartOfTextlineEv(void);

/* Symbol: _ZN9tesseract10SearchNodeC2EPNS_15CubeRecoContextEPS0_iPNS_11LangModEdgeEi */
/* Demangled: tesseract::SearchNode::SearchNode(tesseract::CubeRecoContext*, tesseract::SearchNode*, int, tesseract::LangModEdge*, int) */
int _ZN9tesseract10SearchNodeC2EPNS_15CubeRecoContextEPS0_iPNS_11LangModEdgeEi(void);

/* Symbol: _ZN9tesseract5CUtilD0Ev */
/* Demangled: tesseract::CUtil::~CUtil() */
int _ZN9tesseract5CUtilD0Ev(void);

/* Symbol: _ZNK9tesseract17ViterbiStateEntry5PrintEPKc */
/* Demangled: tesseract::ViterbiStateEntry::Print(char const*) const */
int _ZNK9tesseract17ViterbiStateEntry5PrintEPKc(void);

/* Symbol: _Z9CopyProtoP12PROTO_STRUCTS0_ */
/* Demangled: CopyProto(PROTO_STRUCT*, PROTO_STRUCT*) */
int _Z9CopyProtoP12PROTO_STRUCTS0_(void);

/* Symbol: _ZNK9tesseract4Bmp815ForegroundRatioEv */
/* Demangled: tesseract::Bmp8::ForegroundRatio() const */
int _ZNK9tesseract4Bmp815ForegroundRatioEv(void);

/* Symbol: _ZN9tesseract8sort_cmpIfEEiPKvS2_ */
/* Demangled: int tesseract::sort_cmp<float>(void const*, void const*) */
int _ZN9tesseract8sort_cmpIfEEiPKvS2_(void);

/* Symbol: _ZNK5BLOCK23restricted_bounding_boxEbb */
/* Demangled: BLOCK::restricted_bounding_box(bool, bool) const */
int _ZNK5BLOCK23restricted_bounding_boxEbb(void);

/* Symbol: _ZNK6STRING9FixHeaderEv */
/* Demangled: STRING::FixHeader() const */
int _ZNK6STRING9FixHeaderEv(void);

/* Symbol: _ZN9tesseract21TesseractCubeCombiner14CombineResultsEP8WERD_RESPNS_10CubeObjectEPNS_11WordAltListE */
/* Demangled: tesseract::TesseractCubeCombiner::CombineResults(WERD_RES*, tesseract::CubeObject*, tesseract::WordAltList*) */
int _ZN9tesseract21TesseractCubeCombiner14CombineResultsEP8WERD_RESPNS_10CubeObjectEPNS_11WordAltListE(void);

/* Symbol: _ZN9C_OUTLINEC2EPS_6FCOORD */
/* Demangled: C_OUTLINE::C_OUTLINE(C_OUTLINE*, FCOORD) */
int _ZN9C_OUTLINEC2EPS_6FCOORD(void);

/* Symbol: _Z22ConvertToPicoFeatures2P8list_recP18FEATURE_SET_STRUCT */
/* Demangled: ConvertToPicoFeatures2(list_rec*, FEATURE_SET_STRUCT*) */
int _Z22ConvertToPicoFeatures2P8list_recP18FEATURE_SET_STRUCT(void);

/* Symbol: _ZN9tesseract7ConCompC2Ev */
/* Demangled: tesseract::ConComp::ConComp() */
int _ZN9tesseract7ConCompC2Ev(void);

/* Symbol: equationdetect_save_spt_image */
/* Demangled: equationdetect_save_spt_image */
extern void* equationdetect_save_spt_image;

/* Symbol: _Z17StandardDeviationP9PROTOTYPEt */
/* Demangled: StandardDeviation(PROTOTYPE*, unsigned short) */
int _Z17StandardDeviationP9PROTOTYPEt(void);

/* Symbol: kIntFeatureType */
/* Demangled: kIntFeatureType */
extern void* kIntFeatureType;

/* Symbol: classify_min_slope */
/* Demangled: classify_min_slope */
extern void* classify_min_slope;

/* Symbol: _ZN9tesseract8CharSamp12FromConCompsEPPNS_7ConCompEiiPiPbS5_i */
/* Demangled: tesseract::CharSamp::FromConComps(tesseract::ConComp**, int, int, int*, bool*, bool*, int) */
int _ZN9tesseract8CharSamp12FromConCompsEPPNS_7ConCompEiiPiPbS5_i(void);

/* Symbol: _ZNK9tesseract8CharSamp7SegmentEPibii */
/* Demangled: tesseract::CharSamp::Segment(int*, bool, int, int) const */
int _ZNK9tesseract8CharSamp7SegmentEPibii(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::setbuf(char*, int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci(void);

/* Symbol: _ZN9tesseract11CharBigramsD1Ev */
/* Demangled: tesseract::CharBigrams::~CharBigrams() */
int _ZN9tesseract11CharBigramsD1Ev(void);

/* Symbol: _ZN9tesseract9TesseractD1Ev */
/* Demangled: tesseract::Tesseract::~Tesseract() */
int _ZN9tesseract9TesseractD1Ev(void);

/* Symbol: _ZN8WERD_RES16DebugWordChoicesEbPKc */
/* Demangled: WERD_RES::DebugWordChoices(bool, char const*) */
int _ZN8WERD_RES16DebugWordChoicesEbPKc(void);

/* Symbol: _ZNK9tesseract8Classify31ClassAndConfigIDToFontOrShapeIDEii */
/* Demangled: tesseract::Classify::ClassAndConfigIDToFontOrShapeID(int, int) const */
int _ZNK9tesseract8Classify31ClassAndConfigIDToFontOrShapeIDEii(void);

/* Symbol: _ZN9tesseract16CubeSearchObject7SegmentEv */
/* Demangled: tesseract::CubeSearchObject::Segment() */
int _ZN9tesseract16CubeSearchObject7SegmentEv(void);

/* Symbol: _ZN7FPSEGPTC1EP7FPCUTPT */
/* Demangled: FPSEGPT::FPSEGPT(FPCUTPT*) */
int _ZN7FPSEGPTC1EP7FPCUTPT(void);

/* Symbol: _ZN13GenericVectorIbE7reserveEi */
/* Demangled: GenericVector<bool>::reserve(int) */
int _ZN13GenericVectorIbE7reserveEi(void);

/* Symbol: _ZN13GenericVectorIN9tesseract8FontInfoEE5clearEv */
/* Demangled: GenericVector<tesseract::FontInfo>::clear() */
int _ZN13GenericVectorIN9tesseract8FontInfoEE5clearEv(void);

/* Symbol: _ZNK4LLSQ10mean_pointEv */
/* Demangled: LLSQ::mean_point() const */
int _ZNK4LLSQ10mean_pointEv(void);

/* Symbol: _ZN13BLOCK_RECT_IT11start_blockEv */
/* Demangled: BLOCK_RECT_IT::start_block() */
int _ZN13BLOCK_RECT_IT11start_blockEv(void);

/* Symbol: _ZN9tesseract29HybridNeuralNetCharClassifierC2EPNS_7CharSetEPNS_12TuningParamsEPNS_11FeatureBaseE */
/* Demangled: tesseract::HybridNeuralNetCharClassifier::HybridNeuralNetCharClassifier(tesseract::CharSet*, tesseract::TuningParams*, tesseract::FeatureBase*) */
int _ZN9tesseract29HybridNeuralNetCharClassifierC2EPNS_7CharSetEPNS_12TuningParamsEPNS_11FeatureBaseE(void);

/* Symbol: _ZN9tesseract11TessBaseAPI16RecognitionPass2EP10BLOCK_LISTP8PAGE_RES */
/* Demangled: tesseract::TessBaseAPI::RecognitionPass2(BLOCK_LIST*, PAGE_RES*) */
int _ZN9tesseract11TessBaseAPI16RecognitionPass2EP10BLOCK_LISTP8PAGE_RES(void);

/* Symbol: _ZN9tesseract9Tesseract17set_unlv_suspectsEP8WERD_RES */
/* Demangled: tesseract::Tesseract::set_unlv_suspects(WERD_RES*) */
int _ZN9tesseract9Tesseract17set_unlv_suspectsEP8WERD_RES(void);

/* Symbol: _ZNK6DENORM13LocalNormBlobEP5TBLOB */
/* Demangled: DENORM::LocalNormBlob(TBLOB*) const */
int _ZNK6DENORM13LocalNormBlobEP5TBLOB(void);

/* Symbol: _ZNK5STATS5printEv */
/* Demangled: STATS::print() const */
int _ZNK5STATS5printEv(void);

/* Symbol: _ZN9tesseract17CubeLineSegmenter19kMaxVertAspectRatioE */
/* Demangled: tesseract::CubeLineSegmenter::kMaxVertAspectRatio */
extern void* _ZN9tesseract17CubeLineSegmenter19kMaxVertAspectRatioE;

/* Symbol: _ZN13GenericVectorIN9tesseract12KDPtrPairIncIf4SEAMEEE7reserveEi */
/* Demangled: GenericVector<tesseract::KDPtrPairInc<float, SEAM> >::reserve(int) */
int _ZN13GenericVectorIN9tesseract12KDPtrPairIncIf4SEAMEEE7reserveEi(void);

/* Symbol: _ZTVN9tesseract11CharAltListE */
/* Demangled: vtable for tesseract::CharAltList */
extern void* _ZTVN9tesseract11CharAltListE;

/* Symbol: _ZN9tesseract7Textord18filter_noise_blobsEP13BLOBNBOX_LISTS2_S2_S2_ */
/* Demangled: tesseract::Textord::filter_noise_blobs(BLOBNBOX_LIST*, BLOBNBOX_LIST*, BLOBNBOX_LIST*, BLOBNBOX_LIST*) */
int _ZN9tesseract7Textord18filter_noise_blobsEP13BLOBNBOX_LISTS2_S2_S2_(void);

/* Symbol: _Z16make_pseudo_wordP8PAGE_RESRK4TBOX */
/* Demangled: make_pseudo_word(PAGE_RES*, TBOX const&) */
int _Z16make_pseudo_wordP8PAGE_RESRK4TBOX(void);

/* Symbol: _ZN9tesseract9Tesseract13write_resultsER11PAGE_RES_ITch */
/* Demangled: tesseract::Tesseract::write_results(PAGE_RES_IT&, char, unsigned char) */
int _ZN9tesseract9Tesseract13write_resultsER11PAGE_RES_ITch(void);

/* Symbol: _ZN9tesseract16ColPartitionGrid19FindMergeCandidatesEPKNS_12ColPartitionERK4TBOXbPNS_18ColPartition_CLISTE */
/* Demangled: tesseract::ColPartitionGrid::FindMergeCandidates(tesseract::ColPartition const*, TBOX const&, bool, tesseract::ColPartition_CLIST*) */
int _ZN9tesseract16ColPartitionGrid19FindMergeCandidatesEPKNS_12ColPartitionERK4TBOXbPNS_18ColPartition_CLISTE(void);

/* Symbol: _ZN13GenericVectorIP8BLOBNBOXE7reserveEi */
/* Demangled: GenericVector<BLOBNBOX*>::reserve(int) */
int _ZN13GenericVectorIP8BLOBNBOXE7reserveEi(void);

/* Symbol: _ZN9tesseract5TFile4OpenEPKci */
/* Demangled: tesseract::TFile::Open(char const*, int) */
int _ZN9tesseract5TFile4OpenEPKci(void);

/* Symbol: _ZN13GenericVectorI16CP_RESULT_STRUCTE7reserveEi */
/* Demangled: GenericVector<CP_RESULT_STRUCT>::reserve(int) */
int _ZN13GenericVectorI16CP_RESULT_STRUCTE7reserveEi(void);

/* Symbol: _ZN9tesseract14IntFeatureDist5ClearEv */
/* Demangled: tesseract::IntFeatureDist::Clear() */
int _ZN9tesseract14IntFeatureDist5ClearEv(void);

/* Symbol: ProtoDisplayWindow */
/* Demangled: ProtoDisplayWindow */
extern void* ProtoDisplayWindow;

/* Symbol: _ZN9tesseract9TabVector7SetYEndEi */
/* Demangled: tesseract::TabVector::SetYEnd(int) */
int _ZN9tesseract9TabVector7SetYEndEi(void);

/* Symbol: _ZN8TESSLINE5ScaleEf */
/* Demangled: TESSLINE::Scale(float) */
int _ZN8TESSLINE5ScaleEf(void);

/* Symbol: _Z15start_seam_listP5TWERDP13GenericVectorIP4SEAME */
/* Demangled: start_seam_list(TWERD*, GenericVector<SEAM*>*) */
int _Z15start_seam_listP5TWERDP13GenericVectorIP4SEAME(void);

/* Symbol: _ZNK9tesseract4Trie12edge_char_ofExxibiPPyPx */
/* Demangled: tesseract::Trie::edge_char_of(long long, long long, int, bool, int, unsigned long long**, long long*) const */
int _ZNK9tesseract4Trie12edge_char_ofExxibiPPyPx(void);

/* Symbol: _Z6v_edgeiP9CRACKEDGEP8CrackPos */
/* Demangled: v_edge(int, CRACKEDGE*, CrackPos*) */
int _Z6v_edgeiP9CRACKEDGEP8CrackPos(void);

/* Symbol: TessBaseAPIDetectOS */
/* Demangled: TessBaseAPIDetectOS */
int TessBaseAPIDetectOS(void);

/* Symbol: IntMatchWindow */
/* Demangled: IntMatchWindow */
extern void* IntMatchWindow;

/* Symbol: _ZTV16GENERIC_2D_ARRAYIN9tesseract17TrainingSampleSet13FontClassInfoEE */
/* Demangled: vtable for GENERIC_2D_ARRAY<tesseract::TrainingSampleSet::FontClassInfo> */
extern void* _ZTV16GENERIC_2D_ARRAYIN9tesseract17TrainingSampleSet13FontClassInfoEE;

/* Symbol: _ZN9tesseract4Bmp815ComputeTanTableEv */
/* Demangled: tesseract::Bmp8::ComputeTanTable() */
int _ZN9tesseract4Bmp815ComputeTanTableEv(void);

/* Symbol: _ZN9tesseract10LineFinder19FindAndRemoveVLinesEiP3PixPiS3_PS2_S2_S2_PNS_14TabVector_LISTE */
/* Demangled: tesseract::LineFinder::FindAndRemoveVLines(int, Pix*, int*, int*, Pix**, Pix*, Pix*, tesseract::TabVector_LIST*) */
int _ZN9tesseract10LineFinder19FindAndRemoveVLinesEiP3PixPiS3_PS2_S2_S2_PNS_14TabVector_LISTE(void);

/* Symbol: textord_spacesize_ratioprop */
/* Demangled: textord_spacesize_ratioprop */
extern void* textord_spacesize_ratioprop;

/* Symbol: _ZN9tesseract21TesseractCubeCombinerC1EPNS_15CubeRecoContextE */
/* Demangled: tesseract::TesseractCubeCombiner::TesseractCubeCombiner(tesseract::CubeRecoContext*) */
int _ZN9tesseract21TesseractCubeCombinerC1EPNS_15CubeRecoContextE(void);

/* Symbol: _ZN9tesseract9Tesseract14cube_recognizeEPNS_10CubeObjectEP5BLOCKP8WERD_RES */
/* Demangled: tesseract::Tesseract::cube_recognize(tesseract::CubeObject*, BLOCK*, WERD_RES*) */
int _ZN9tesseract9Tesseract14cube_recognizeEPNS_10CubeObjectEP5BLOCKP8WERD_RES(void);

/* Symbol: _ZN13GenericVectorI17GenericVectorEqEqIPK14ParagraphModelEE5clearEv */
/* Demangled: GenericVector<GenericVectorEqEq<ParagraphModel const*> >::clear() */
int _ZN13GenericVectorI17GenericVectorEqEqIPK14ParagraphModelEE5clearEv(void);

/* Symbol: _ZNK5SPLIT12SplitOutlineEv */
/* Demangled: SPLIT::SplitOutline() const */
int _ZNK5SPLIT12SplitOutlineEv(void);

/* Symbol: _ZN10UNICHARSET21ExpandRangesFromOtherERKS_ */
/* Demangled: UNICHARSET::ExpandRangesFromOther(UNICHARSET const&) */
int _ZN10UNICHARSET21ExpandRangesFromOtherERKS_(void);

/* Symbol: _ZN9tesseract11TessBaseAPI14AdaptToWordStrENS_11PageSegModeEPKc */
/* Demangled: tesseract::TessBaseAPI::AdaptToWordStr(tesseract::PageSegMode, char const*) */
int _ZN9tesseract11TessBaseAPI14AdaptToWordStrENS_11PageSegModeEPKc(void);

/* Symbol: _ZNK9tesseract15ShapeClassifier23FilterDuplicateUnicharsEP13GenericVectorINS_11ShapeRatingEE */
/* Demangled: tesseract::ShapeClassifier::FilterDuplicateUnichars(GenericVector<tesseract::ShapeRating>*) const */
int _ZNK9tesseract15ShapeClassifier23FilterDuplicateUnicharsEP13GenericVectorINS_11ShapeRatingEE(void);

/* Symbol: _ZN9tesseract4Dict16NoDangerousAmbigEP11WERD_CHOICEP13GenericVectorI12DANGERR_INFOEbP6MATRIX */
/* Demangled: tesseract::Dict::NoDangerousAmbig(WERD_CHOICE*, GenericVector<DANGERR_INFO>*, bool, MATRIX*) */
int _ZN9tesseract4Dict16NoDangerousAmbigEP11WERD_CHOICEP13GenericVectorI12DANGERR_INFOEbP6MATRIX(void);

/* Symbol: _ZN9tesseract7Textord16reduced_box_nextEP6TO_ROWP11BLOBNBOX_IT */
/* Demangled: tesseract::Textord::reduced_box_next(TO_ROW*, BLOBNBOX_IT*) */
int _ZN9tesseract7Textord16reduced_box_nextEP6TO_ROWP11BLOBNBOX_IT(void);

/* Symbol: _ZN9OSResults20set_best_orientationEi */
/* Demangled: OSResults::set_best_orientation(int) */
int _ZN9OSResults20set_best_orientationEi(void);

/* Symbol: _ZN5BLOCK9sort_rowsEv */
/* Demangled: BLOCK::sort_rows() */
int _ZN5BLOCK9sort_rowsEv(void);

/* Symbol: _ZNK5SPLIT9IsHealthyERK5TBLOBii */
/* Demangled: SPLIT::IsHealthy(TBLOB const&, int, int) const */
int _ZNK5SPLIT9IsHealthyERK5TBLOBii(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract14AmbigSpec_LISTEE7reserveEi */
/* Demangled: GenericVector<tesseract::AmbigSpec_LIST*>::reserve(int) */
int _ZN13GenericVectorIPN9tesseract14AmbigSpec_LISTEE7reserveEi(void);

/* Symbol: _ZN9tesseract5TFile6RewindEv */
/* Demangled: tesseract::TFile::Rewind() */
int _ZN9tesseract5TFile6RewindEv(void);

/* Symbol: _Z15InitFeatureDefsP19FEATURE_DEFS_STRUCT */
/* Demangled: InitFeatureDefs(FEATURE_DEFS_STRUCT*) */
int _Z15InitFeatureDefsP19FEATURE_DEFS_STRUCT(void);

/* Symbol: _Z22AddOutlineFeatureToSetP6FPOINTS0_P18FEATURE_SET_STRUCT */
/* Demangled: AddOutlineFeatureToSet(FPOINT*, FPOINT*, FEATURE_SET_STRUCT*) */
int _Z22AddOutlineFeatureToSetP6FPOINTS0_P18FEATURE_SET_STRUCT(void);

/* Symbol: _ZN9tesseract10BeamSearch6SearchEPNS_12SearchObjectEPNS_9LangModelE */
/* Demangled: tesseract::BeamSearch::Search(tesseract::SearchObject*, tesseract::LangModel*) */
int _ZN9tesseract10BeamSearch6SearchEPNS_12SearchObjectEPNS_9LangModelE(void);

/* Symbol: _ZN9tesseract11AlignedBlob9AlignTabsERKNS_17AlignedBlobParamsEbP8BLOBNBOXP14BLOBNBOX_CLISTPi */
/* Demangled: tesseract::AlignedBlob::AlignTabs(tesseract::AlignedBlobParams const&, bool, BLOBNBOX*, BLOBNBOX_CLIST*, int*) */
int _ZN9tesseract11AlignedBlob9AlignTabsERKNS_17AlignedBlobParamsEbP8BLOBNBOXP14BLOBNBOX_CLISTPi(void);

/* Symbol: _ZN9tesseract15StructuredTable21CountFilledCellsInRowEi */
/* Demangled: tesseract::StructuredTable::CountFilledCellsInRow(int) */
int _ZN9tesseract15StructuredTable21CountFilledCellsInRowEi(void);

/* Symbol: _ZN9tesseract5TFile5FGetsEPci */
/* Demangled: tesseract::TFile::FGets(char*, int) */
int _ZN9tesseract5TFile5FGetsEPci(void);

/* Symbol: _ZN6STRINGpLERKS_ */
/* Demangled: STRING::operator+=(STRING const&) */
int _ZN6STRINGpLERKS_(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::overflow(int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi(void);

/* Symbol: TessBaseAPICreate */
/* Demangled: TessBaseAPICreate */
int TessBaseAPICreate(void);

/* Symbol: _ZN9tesseract21FontSetDeleteCallbackENS_7FontSetE */
/* Demangled: tesseract::FontSetDeleteCallback(tesseract::FontSet) */
int _ZN9tesseract21FontSetDeleteCallbackENS_7FontSetE(void);

/* Symbol: _ZTVN9tesseract13FeatureHybridE */
/* Demangled: vtable for tesseract::FeatureHybrid */
extern void* _ZTVN9tesseract13FeatureHybridE;

/* Symbol: _ZNK9tesseract12ColPartition16OKDiacriticMergeERKS0_b */
/* Demangled: tesseract::ColPartition::OKDiacriticMerge(tesseract::ColPartition const&, bool) const */
int _ZNK9tesseract12ColPartition16OKDiacriticMergeERKS0_b(void);

/* Symbol: _ZN6DENORMC1Ev */
/* Demangled: DENORM::DENORM() */
int _ZN6DENORMC1Ev(void);

/* Symbol: _ZN9tesseract29HybridNeuralNetCharClassifierD0Ev */
/* Demangled: tesseract::HybridNeuralNetCharClassifier::~HybridNeuralNetCharClassifier() */
int _ZN9tesseract29HybridNeuralNetCharClassifierD0Ev(void);

/* Symbol: _ZN9tesseract10DawgLoader4LoadEv */
/* Demangled: tesseract::DawgLoader::Load() */
int _ZN9tesseract10DawgLoader4LoadEv(void);

/* Symbol: textord_show_page_cuts */
/* Demangled: textord_show_page_cuts */
extern void* textord_show_page_cuts;

/* Symbol: _ZN9tesseract7Textord11TextordPageENS_11PageSegModeERK6FCOORDiiP3PixS6_S6_bP13BLOBNBOX_LISTP10BLOCK_LISTP13TO_BLOCK_LIST */
/* Demangled: tesseract::Textord::TextordPage(tesseract::PageSegMode, FCOORD const&, int, int, Pix*, Pix*, Pix*, bool, BLOBNBOX_LIST*, BLOCK_LIST*, TO_BLOCK_LIST*) */
int _ZN9tesseract7Textord11TextordPageENS_11PageSegModeERK6FCOORDiiP3PixS6_S6_bP13BLOBNBOX_LISTP10BLOCK_LISTP13TO_BLOCK_LIST(void);

/* Symbol: _ZN9tesseract4kRLEE */
/* Demangled: tesseract::kRLE */
extern void* _ZN9tesseract4kRLEE;

/* Symbol: _ZN9tesseract10DetLineFit25ComputeUpperQuartileErrorEv */
/* Demangled: tesseract::DetLineFit::ComputeUpperQuartileError() */
int _ZN9tesseract10DetLineFit25ComputeUpperQuartileErrorEv(void);

/* Symbol: _ZNK6ICOORD12setup_renderEPS_S0_PiS1_ */
/* Demangled: ICOORD::setup_render(ICOORD*, ICOORD*, int*, int*) const */
int _ZNK6ICOORD12setup_renderEPS_S0_PiS1_(void);

/* Symbol: _ZNK9tesseract14SampleIterator13MutableSampleEv */
/* Demangled: tesseract::SampleIterator::MutableSample() const */
int _ZNK9tesseract14SampleIterator13MutableSampleEv(void);

/* Symbol: _ZN9tesseract13TessLangModel23RemoveInvalidCharactersEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: tesseract::TessLangModel::RemoveInvalidCharacters(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN9tesseract13TessLangModel23RemoveInvalidCharactersEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN9tesseract17CubeLineSegmenter4InitEv */
/* Demangled: tesseract::CubeLineSegmenter::Init() */
int _ZN9tesseract17CubeLineSegmenter4InitEv(void);

/* Symbol: _ZN9tesseract11AlignedBlob15FindAlignedBlobERKNS_17AlignedBlobParamsEbP8BLOBNBOXiPi */
/* Demangled: tesseract::AlignedBlob::FindAlignedBlob(tesseract::AlignedBlobParams const&, bool, BLOBNBOX*, int, int*) */
int _ZN9tesseract11AlignedBlob15FindAlignedBlobERKNS_17AlignedBlobParamsEbP8BLOBNBOXiPi(void);

/* Symbol: textord_lms_line_trials */
/* Demangled: textord_lms_line_trials */
extern void* textord_lms_line_trials;

/* Symbol: _ZN13GenericVectorIPK14ParagraphModelE13push_back_newES2_ */
/* Demangled: GenericVector<ParagraphModel const*>::push_back_new(ParagraphModel const*) */
int _ZN13GenericVectorIPK14ParagraphModelE13push_back_newES2_(void);

/* Symbol: _Z14ReadTempConfigP7__sFILE */
/* Demangled: ReadTempConfig(__sFILE*) */
int _Z14ReadTempConfigP7__sFILE(void);

/* Symbol: _ZNK9tesseract10ShapeTable18MasterUnicharCountEi */
/* Demangled: tesseract::ShapeTable::MasterUnicharCount(int) const */
int _ZNK9tesseract10ShapeTable18MasterUnicharCountEi(void);

/* Symbol: _ZN9tesseract13WordSizeModelC2EPNS_7CharSetEb */
/* Demangled: tesseract::WordSizeModel::WordSizeModel(tesseract::CharSet*, bool) */
int _ZN9tesseract13WordSizeModelC2EPNS_7CharSetEb(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract11BaselineRowEE7reserveEi */
/* Demangled: GenericVector<tesseract::BaselineRow*>::reserve(int) */
int _ZN13GenericVectorIPN9tesseract11BaselineRowEE7reserveEi(void);

/* Symbol: _ZN9tesseract12ColPartition13FakePartitionERK4TBOX13PolyBlockType14BlobRegionType16BlobTextFlowType */
/* Demangled: tesseract::ColPartition::FakePartition(TBOX const&, PolyBlockType, BlobRegionType, BlobTextFlowType) */
int _ZN9tesseract12ColPartition13FakePartitionERK4TBOX13PolyBlockType14BlobRegionType16BlobTextFlowType(void);

/* Symbol: _ZTV31_TessFunctionResultCallback_0_2ILb0EbRKN9tesseract8FontInfoES3_E */
/* Demangled: vtable for _TessFunctionResultCallback_0_2<false, bool, tesseract::FontInfo const&, tesseract::FontInfo const&> */
extern void* _ZTV31_TessFunctionResultCallback_0_2ILb0EbRKN9tesseract8FontInfoES3_E;

/* Symbol: _ZNK9tesseract15TessLangModEdge11DescriptionEv */
/* Demangled: tesseract::TessLangModEdge::Description() const */
int _ZNK9tesseract15TessLangModEdge11DescriptionEv(void);

/* Symbol: _ZN9tesseract7TabFind20ResetForVerticalTextERK6FCOORDS3_PNS_14TabVector_LISTEPi */
/* Demangled: tesseract::TabFind::ResetForVerticalText(FCOORD const&, FCOORD const&, tesseract::TabVector_LIST*, int*) */
int _ZN9tesseract7TabFind20ResetForVerticalTextERK6FCOORDS3_PNS_14TabVector_LISTEPi(void);

/* Symbol: _ZN9tesseract15TableRecognizerC1Ev */
/* Demangled: tesseract::TableRecognizer::TableRecognizer() */
int _ZN9tesseract15TableRecognizerC1Ev(void);

/* Symbol: _ZN9tesseract28textord_tablefind_show_statsE */
/* Demangled: tesseract::textord_tablefind_show_stats */
extern void* _ZN9tesseract28textord_tablefind_show_statsE;

/* Symbol: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeGetTextlines */
/* Demangled: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeGetTextlines */
int Java_com_googlecode_tesseract_android_TessBaseAPI_nativeGetTextlines(void);

/* Symbol: _ZN9tesseract15CubeRecoContextC2EPNS_9TesseractE */
/* Demangled: tesseract::CubeRecoContext::CubeRecoContext(tesseract::Tesseract*) */
int _ZN9tesseract15CubeRecoContextC2EPNS_9TesseractE(void);

/* Symbol: _ZN9tesseract17TrainingSampleSet17DeleteDeadSamplesEv */
/* Demangled: tesseract::TrainingSampleSet::DeleteDeadSamples() */
int _ZN9tesseract17TrainingSampleSet17DeleteDeadSamplesEv(void);

/* Symbol: _Z19fixed_chop_coutlineP9C_OUTLINEsfP19C_OUTLINE_FRAG_LISTS2_ */
/* Demangled: fixed_chop_coutline(C_OUTLINE*, short, float, C_OUTLINE_FRAG_LIST*, C_OUTLINE_FRAG_LIST*) */
int _Z19fixed_chop_coutlineP9C_OUTLINEsfP19C_OUTLINE_FRAG_LISTS2_(void);

/* Symbol: _ZN9tesseract9Tesseract22acceptable_word_stringERK10UNICHARSETPKcS5_ */
/* Demangled: tesseract::Tesseract::acceptable_word_string(UNICHARSET const&, char const*, char const*) */
int _ZN9tesseract9Tesseract22acceptable_word_stringERK10UNICHARSETPKcS5_(void);

/* Symbol: _ZN9tesseract14CubeClassifierC2EPNS_9TesseractE */
/* Demangled: tesseract::CubeClassifier::CubeClassifier(tesseract::Tesseract*) */
int _ZN9tesseract14CubeClassifierC2EPNS_9TesseractE(void);

/* Symbol: _ZN9tesseract16ImageThresholder14GetPixRectGreyEv */
/* Demangled: tesseract::ImageThresholder::GetPixRectGrey() */
int _ZN9tesseract16ImageThresholder14GetPixRectGreyEv(void);

/* Symbol: _ZNK9tesseract10ShapeTable19AnyMultipleUnicharsEv */
/* Demangled: tesseract::ShapeTable::AnyMultipleUnichars() const */
int _ZNK9tesseract10ShapeTable19AnyMultipleUnicharsEv(void);

/* Symbol: _ZNK9tesseract11CharBigrams18MeanCostWithSpacesEPKi */
/* Demangled: tesseract::CharBigrams::MeanCostWithSpaces(int const*) const */
int _ZNK9tesseract11CharBigrams18MeanCostWithSpacesEPKi(void);

/* Symbol: _ZN9tesseract15ColSegment_LIST9deep_copyEPKS0_PFPNS_10ColSegmentEPKS3_E */
/* Demangled: tesseract::ColSegment_LIST::deep_copy(tesseract::ColSegment_LIST const*, tesseract::ColSegment* (*)(tesseract::ColSegment const*)) */
int _ZN9tesseract15ColSegment_LIST9deep_copyEPKS0_PFPNS_10ColSegmentEPKS3_E(void);

/* Symbol: _ZN9tesseract12ClipBaselineEiiiiiPiS0_S0_S0_ */
/* Demangled: tesseract::ClipBaseline(int, int, int, int, int, int*, int*, int*, int*) */
int _ZN9tesseract12ClipBaselineEiiiiiPiS0_S0_S0_(void);

/* Symbol: _Z13FullPageBlockiiP10BLOCK_LIST */
/* Demangled: FullPageBlock(int, int, BLOCK_LIST*) */
int _Z13FullPageBlockiiP10BLOCK_LIST(void);

/* Symbol: _ZTV31_TessFunctionResultCallback_0_2ILb0EbRKPK14ParagraphModelS4_E */
/* Demangled: vtable for _TessFunctionResultCallback_0_2<false, bool, ParagraphModel const* const&, ParagraphModel const* const&> */
extern void* _ZTV31_TessFunctionResultCallback_0_2ILb0EbRKPK14ParagraphModelS4_E;

/* Symbol: _ZN9tesseract14BaselineDetectD1Ev */
/* Demangled: tesseract::BaselineDetect::~BaselineDetect() */
int _ZN9tesseract14BaselineDetectD1Ev(void);

/* Symbol: _ZN9tesseract12ColumnFinder21RotateAndReskewBlocksEbP13TO_BLOCK_LIST */
/* Demangled: tesseract::ColumnFinder::RotateAndReskewBlocks(bool, TO_BLOCK_LIST*) */
int _ZN9tesseract12ColumnFinder21RotateAndReskewBlocksEbP13TO_BLOCK_LIST(void);

/* Symbol: _ZN9tesseract9BitVectoroRERKS0_ */
/* Demangled: tesseract::BitVector::operator|=(tesseract::BitVector const&) */
int _ZN9tesseract9BitVectoroRERKS0_(void);

/* Symbol: _ZN9tesseract15InputFileBufferD0Ev */
/* Demangled: tesseract::InputFileBuffer::~InputFileBuffer() */
int _ZN9tesseract15InputFileBufferD0Ev(void);

/* Symbol: _ZN9tesseract10GridSearchINS_12ColPartitionENS_18ColPartition_CLISTENS_17ColPartition_C_ITEE14NextRectSearchEv */
/* Demangled: tesseract::GridSearch<tesseract::ColPartition, tesseract::ColPartition_CLIST, tesseract::ColPartition_C_IT>::NextRectSearch() */
int _ZN9tesseract10GridSearchINS_12ColPartitionENS_18ColPartition_CLISTENS_17ColPartition_C_ITEE14NextRectSearchEv(void);

/* Symbol: _ZN6DIR128C1E6FCOORD */
/* Demangled: DIR128::DIR128(FCOORD) */
int _ZN6DIR128C1E6FCOORD(void);

/* Symbol: _Z24restore_underlined_blobsP8TO_BLOCK */
/* Demangled: restore_underlined_blobs(TO_BLOCK*) */
int _Z24restore_underlined_blobsP8TO_BLOCK(void);

/* Symbol: _ZN9tesseract9NeuralNet11FeedForwardIdEEbPKT_PS2_ */
/* Demangled: bool tesseract::NeuralNet::FeedForward<double>(double const*, double*) */
int _ZN9tesseract9NeuralNet11FeedForwardIdEEbPKT_PS2_(void);

/* Symbol: _ZNSt3__111this_thread9sleep_forIxNS_5ratioILx1ELx1EEEEEvRKNS_6chrono8durationIT_T0_EE */
/* Demangled: void std::__1::this_thread::sleep_for<long long, std::__1::ratio<1ll, 1ll> >(std::__1::chrono::duration<long long, std::__1::ratio<1ll, 1ll> > const&) */
int _ZNSt3__111this_thread9sleep_forIxNS_5ratioILx1ELx1EEEEEvRKNS_6chrono8durationIT_T0_EE(void);

/* Symbol: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeGetPageSegMode */
/* Demangled: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeGetPageSegMode */
int Java_com_googlecode_tesseract_android_TessBaseAPI_nativeGetPageSegMode(void);

/* Symbol: _ZTVN9tesseract14ResultIteratorE */
/* Demangled: vtable for tesseract::ResultIterator */
extern void* _ZTVN9tesseract14ResultIteratorE;

/* Symbol: _ZN9tesseract17CubeLineSegmenter4LineEiPP3Box */
/* Demangled: tesseract::CubeLineSegmenter::Line(int, Box**) */
int _ZN9tesseract17CubeLineSegmenter4LineEiPP3Box(void);

/* Symbol: _ZN9tesseract16ColPartitionGrid22ComputePartitionColorsEP3PixiRK6FCOORD */
/* Demangled: tesseract::ColPartitionGrid::ComputePartitionColors(Pix*, int, FCOORD const&) */
int _ZN9tesseract16ColPartitionGrid22ComputePartitionColorsEP3PixiRK6FCOORD(void);

/* Symbol: _ZN9tesseract16ReCachePagesFuncEPv */
/* Demangled: tesseract::ReCachePagesFunc(void*) */
int _ZN9tesseract16ReCachePagesFuncEPv(void);

/* Symbol: _ZN13GenericVectorItE7reserveEi */
/* Demangled: GenericVector<unsigned short>::reserve(int) */
int _ZN13GenericVectorItE7reserveEi(void);

/* Symbol: _ZN9tesseract14CubeClassifierD1Ev */
/* Demangled: tesseract::CubeClassifier::~CubeClassifier() */
int _ZN9tesseract14CubeClassifierD1Ev(void);

/* Symbol: _ZN9tesseract7Wordrec14classify_pieceERK13GenericVectorIP4SEAMEssPKcP5TWERDP12BlamerBundle */
/* Demangled: tesseract::Wordrec::classify_piece(GenericVector<SEAM*> const&, short, short, char const*, TWERD*, BlamerBundle*) */
int _ZN9tesseract7Wordrec14classify_pieceERK13GenericVectorIP4SEAMEssPKcP5TWERDP12BlamerBundle(void);

/* Symbol: _ZN8TO_BLOCKD2Ev */
/* Demangled: TO_BLOCK::~TO_BLOCK() */
int _ZN8TO_BLOCKD2Ev(void);

/* Symbol: _ZN9tesseract12DocumentDataC2ERK6STRING */
/* Demangled: tesseract::DocumentData::DocumentData(STRING const&) */
int _ZN9tesseract12DocumentDataC2ERK6STRING(void);

/* Symbol: _ZNK7UNICHAR14const_iterator8is_legalEv */
/* Demangled: UNICHAR::const_iterator::is_legal() const */
int _ZNK7UNICHAR14const_iterator8is_legalEv(void);

/* Symbol: _ZNK9tesseract13IntFeatureMap13OffsetFeatureEii */
/* Demangled: tesseract::IntFeatureMap::OffsetFeature(int, int) const */
int _ZNK9tesseract13IntFeatureMap13OffsetFeatureEii(void);

/* Symbol: _ZN9tesseract18SetBlobStrokeWidthEP3PixP8BLOBNBOX */
/* Demangled: tesseract::SetBlobStrokeWidth(Pix*, BLOBNBOX*) */
int _ZN9tesseract18SetBlobStrokeWidthEP3PixP8BLOBNBOX(void);

/* Symbol: _ZN9tesseract11WordFeature4DrawERK13GenericVectorIS0_EP10ScrollView */
/* Demangled: tesseract::WordFeature::Draw(GenericVector<tesseract::WordFeature> const&, ScrollView*) */
int _ZN9tesseract11WordFeature4DrawERK13GenericVectorIS0_EP10ScrollView(void);

/* Symbol: _ZN4LLSQ3addEdd */
/* Demangled: LLSQ::add(double, double) */
int _ZN4LLSQ3addEdd(void);

/* Symbol: _ZN9tesseract9CubeUtils16SplitStringUsingERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_PNS1_6vectorIS7_NS5_IS7_EEEE */
/* Demangled: tesseract::CubeUtils::SplitStringUsing(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >*) */
int _ZN9tesseract9CubeUtils16SplitStringUsingERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_PNS1_6vectorIS7_NS5_IS7_EEEE(void);

/* Symbol: _ZN9tesseract16CubeTuningParamsD0Ev */
/* Demangled: tesseract::CubeTuningParams::~CubeTuningParams() */
int _ZN9tesseract16CubeTuningParamsD0Ev(void);

/* Symbol: _ZN7FPCUTPT6assignEPS_sshhsP5STATSfsss */
/* Demangled: FPCUTPT::assign(FPCUTPT*, short, short, unsigned char, unsigned char, short, STATS*, float, short, short, short) */
int _ZN7FPCUTPT6assignEPS_sshhsP5STATSfsss(void);

/* Symbol: _ZN13GenericVectorIN9tesseract10ScoredFontEEpLERKS2_ */
/* Demangled: GenericVector<tesseract::ScoredFont>::operator+=(GenericVector<tesseract::ScoredFont> const&) */
int _ZN13GenericVectorIN9tesseract10ScoredFontEEpLERKS2_(void);

/* Symbol: _ZNK4LLSQ3rmsEdd */
/* Demangled: LLSQ::rms(double, double) const */
int _ZNK4LLSQ3rmsEdd(void);

/* Symbol: _ZNSt3__112basic_stringIiNS_11char_traitsIiEENS_9allocatorIiEEEC2ERKS5_ */
/* Demangled: std::__1::basic_string<int, std::__1::char_traits<int>, std::__1::allocator<int> >::basic_string(std::__1::basic_string<int, std::__1::char_traits<int>, std::__1::allocator<int> > const&) */
int _ZNSt3__112basic_stringIiNS_11char_traitsIiEENS_9allocatorIiEEEC2ERKS5_(void);

/* Symbol: _ZN9tesseract12ColPartition26ComputeSpecialBlobsDensityEv */
/* Demangled: tesseract::ColPartition::ComputeSpecialBlobsDensity() */
int _ZN9tesseract12ColPartition26ComputeSpecialBlobsDensityEv(void);

/* Symbol: _ZNK9tesseract14SampleIterator13GetShapeEntryEv */
/* Demangled: tesseract::SampleIterator::GetShapeEntry() const */
int _ZNK9tesseract14SampleIterator13GetShapeEntryEv(void);

/* Symbol: _ZN9tesseract4Dict18UniformCertaintiesERK11WERD_CHOICE */
/* Demangled: tesseract::Dict::UniformCertainties(WERD_CHOICE const&) */
int _ZN9tesseract4Dict18UniformCertaintiesERK11WERD_CHOICE(void);

/* Symbol: textord_testregion_top */
/* Demangled: textord_testregion_top */
extern void* textord_testregion_top;

/* Symbol: _ZN6GAPMAPC2EP8TO_BLOCK */
/* Demangled: GAPMAP::GAPMAP(TO_BLOCK*) */
int _ZN6GAPMAPC2EP8TO_BLOCK(void);

/* Symbol: _ZN13GenericVectorIN9tesseract8BlobDataEE9push_backES1_ */
/* Demangled: GenericVector<tesseract::BlobData>::push_back(tesseract::BlobData) */
int _ZN13GenericVectorIN9tesseract8BlobDataEE9push_backES1_(void);

/* Symbol: _ZN13GenericVectorIfEaSERKS0_ */
/* Demangled: GenericVector<float>::operator=(GenericVector<float> const&) */
int _ZN13GenericVectorIfEaSERKS0_(void);

/* Symbol: _ZNK9tesseract4Dawg13iterate_wordsERK10UNICHARSETP13TessCallback1IPKcE */
/* Demangled: tesseract::Dawg::iterate_words(UNICHARSET const&, TessCallback1<char const*>*) const */
int _ZNK9tesseract4Dawg13iterate_wordsERK10UNICHARSETP13TessCallback1IPKcE(void);

/* Symbol: _ZN9tesseract4Trie15add_word_endingEPyxbi */
/* Demangled: tesseract::Trie::add_word_ending(unsigned long long*, long long, bool, int) */
int _ZN9tesseract4Trie15add_word_endingEPyxbi(void);

/* Symbol: _ZN9tesseract13BaselineBlock24ComputeBaselinePositionsERK6FCOORDP13GenericVectorIdE */
/* Demangled: tesseract::BaselineBlock::ComputeBaselinePositions(FCOORD const&, GenericVector<double>*) */
int _ZN9tesseract13BaselineBlock24ComputeBaselinePositionsERK6FCOORDP13GenericVectorIdE(void);

/* Symbol: _ZNK9tesseract11TableFinder5bleftEv */
/* Demangled: tesseract::TableFinder::bleft() const */
int _ZNK9tesseract11TableFinder5bleftEv(void);

/* Symbol: _Z15SavePixForCrashiP3Pix */
/* Demangled: SavePixForCrash(int, Pix*) */
int _Z15SavePixForCrashiP3Pix(void);

/* Symbol: _ZN9tesseract16ImageThresholderC2Ev */
/* Demangled: tesseract::ImageThresholder::ImageThresholder() */
int _ZN9tesseract16ImageThresholderC2Ev(void);

/* Symbol: _ZNK6DENORM13NormTransformEPKS_RK6TPOINTPS2_ */
/* Demangled: DENORM::NormTransform(DENORM const*, TPOINT const&, TPOINT*) const */
int _ZNK6DENORM13NormTransformEPKS_RK6TPOINTPS2_(void);

/* Symbol: _ZN11WERD_CHOICE18SetScriptPositionsEPKN9tesseract9ScriptPosEi */
/* Demangled: WERD_CHOICE::SetScriptPositions(tesseract::ScriptPos const*, int) */
int _ZN11WERD_CHOICE18SetScriptPositionsEPKN9tesseract9ScriptPosEi(void);

/* Symbol: _ZN9tesseract6BBGridINS_10ColSegmentENS_16ColSegment_CLISTENS_15ColSegment_C_ITEE13ClearGridDataEPFvPS1_E */
/* Demangled: tesseract::BBGrid<tesseract::ColSegment, tesseract::ColSegment_CLIST, tesseract::ColSegment_C_IT>::ClearGridData(void (*)(tesseract::ColSegment*)) */
int _ZN9tesseract6BBGridINS_10ColSegmentENS_16ColSegment_CLISTENS_15ColSegment_C_ITEE13ClearGridDataEPFvPS1_E(void);

/* Symbol: _ZN13GenericVectorIN9tesseract24ParamsTrainingHypothesisEEpLES1_ */
/* Demangled: GenericVector<tesseract::ParamsTrainingHypothesis>::operator+=(tesseract::ParamsTrainingHypothesis) */
int _ZN13GenericVectorIN9tesseract24ParamsTrainingHypothesisEEpLES1_(void);

/* Symbol: _ZN9tesseract8Classify20SetAdaptiveThresholdEf */
/* Demangled: tesseract::Classify::SetAdaptiveThreshold(float) */
int _ZN9tesseract8Classify20SetAdaptiveThresholdEf(void);

/* Symbol: _ZNK9tesseract10ShapeTable14MaxNumUnicharsEv */
/* Demangled: tesseract::ShapeTable::MaxNumUnichars() const */
int _ZNK9tesseract10ShapeTable14MaxNumUnicharsEv(void);

/* Symbol: _ZN9tesseract14ChoiceIterator4NextEv */
/* Demangled: tesseract::ChoiceIterator::Next() */
int _ZN9tesseract14ChoiceIterator4NextEv(void);

/* Symbol: _ZN9tesseract9Tesseract17init_cube_objectsEbPNS_15TessdataManagerE */
/* Demangled: tesseract::Tesseract::init_cube_objects(bool, tesseract::TessdataManager*) */
int _ZN9tesseract9Tesseract17init_cube_objectsEbPNS_15TessdataManagerE(void);

/* Symbol: _ZN9tesseract8Classify13MakePermanentEP22ADAPT_TEMPLATES_STRUCTiiP5TBLOB */
/* Demangled: tesseract::Classify::MakePermanent(ADAPT_TEMPLATES_STRUCT*, int, int, TBLOB*) */
int _ZN9tesseract8Classify13MakePermanentEP22ADAPT_TEMPLATES_STRUCTiiP5TBLOB(void);

/* Symbol: _ZN9tesseract5CUtilC1Ev */
/* Demangled: tesseract::CUtil::CUtil() */
int _ZN9tesseract5CUtilC1Ev(void);

/* Symbol: _Z24close_chopped_cfragmentsP19C_OUTLINE_FRAG_LISTP14C_OUTLINE_LISTfP12C_OUTLINE_IT */
/* Demangled: close_chopped_cfragments(C_OUTLINE_FRAG_LIST*, C_OUTLINE_LIST*, float, C_OUTLINE_IT*) */
int _Z24close_chopped_cfragmentsP19C_OUTLINE_FRAG_LISTP14C_OUTLINE_LISTfP12C_OUTLINE_IT(void);

/* Symbol: _ZN9tesseract15StructuredTable16set_bounding_boxERK4TBOX */
/* Demangled: tesseract::StructuredTable::set_bounding_box(TBOX const&) */
int _ZN9tesseract15StructuredTable16set_bounding_boxERK4TBOX(void);

/* Symbol: _ZN9tesseract13IntFeatureMap16DeleteMapFeatureEi */
/* Demangled: tesseract::IntFeatureMap::DeleteMapFeature(int) */
int _ZN9tesseract13IntFeatureMap16DeleteMapFeatureEi(void);

/* Symbol: _ZNK9tesseract15StructuredTable11space_belowEv */
/* Demangled: tesseract::StructuredTable::space_below() const */
int _ZNK9tesseract15StructuredTable11space_belowEv(void);

/* Symbol: TessBaseAPIGetFeaturesForBlob */
/* Demangled: TessBaseAPIGetFeaturesForBlob */
int TessBaseAPIGetFeaturesForBlob(void);

/* Symbol: _ZN9tesseract9Tesseract12fix_rep_charEP11PAGE_RES_IT */
/* Demangled: tesseract::Tesseract::fix_rep_char(PAGE_RES_IT*) */
int _ZN9tesseract9Tesseract12fix_rep_charEP11PAGE_RES_IT(void);

/* Symbol: _ZNK6DENORM15DenormTransformEPKS_RK6TPOINTPS2_ */
/* Demangled: DENORM::DenormTransform(DENORM const*, TPOINT const&, TPOINT*) const */
int _ZNK6DENORM15DenormTransformEPKS_RK6TPOINTPS2_(void);

/* Symbol: _ZN13GenericVectorIN9tesseract10DetLineFit10PointWidthEE5clearEv */
/* Demangled: GenericVector<tesseract::DetLineFit::PointWidth>::clear() */
int _ZN13GenericVectorIN9tesseract10DetLineFit10PointWidthEE5clearEv(void);

/* Symbol: _Z19ReadCharDescriptionRK19FEATURE_DEFS_STRUCTP7__sFILE */
/* Demangled: ReadCharDescription(FEATURE_DEFS_STRUCT const&, __sFILE*) */
int _Z19ReadCharDescriptionRK19FEATURE_DEFS_STRUCTP7__sFILE(void);

/* Symbol: _ZN9tesseract12ColPartition24MarkAsLeaderIfMonospacedEv */
/* Demangled: tesseract::ColPartition::MarkAsLeaderIfMonospaced() */
int _ZN9tesseract12ColPartition24MarkAsLeaderIfMonospacedEv(void);

/* Symbol: _ZN9tesseract14TESS_CHAR_LIST9deep_copyEPKS0_PFPNS_9TESS_CHAREPKS3_E */
/* Demangled: tesseract::TESS_CHAR_LIST::deep_copy(tesseract::TESS_CHAR_LIST const*, tesseract::TESS_CHAR* (*)(tesseract::TESS_CHAR const*)) */
int _ZN9tesseract14TESS_CHAR_LIST9deep_copyEPKS0_PFPNS_9TESS_CHAREPKS3_E(void);

/* Symbol: _Z14FPSEGPT_zapperP10ELIST_LINK */
/* Demangled: FPSEGPT_zapper(ELIST_LINK*) */
int _Z14FPSEGPT_zapperP10ELIST_LINK(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_4pairIP10ScrollView11SVEventTypeEENS2_IP11SVSemaphoreP7SVEventEEEENS_19__map_value_compareIS6_SC_NS_4lessIS6_EELb1EEENS_9allocatorISC_EEE7destroyEPNS_11__tree_nodeISC_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::pair<ScrollView*, SVEventType>, std::__1::pair<SVSemaphore*, SVEvent*> >, std::__1::__map_value_compare<std::__1::pair<ScrollView*, SVEventType>, std::__1::__value_type<std::__1::pair<ScrollView*, SVEventType>, std::__1::pair<SVSemaphore*, SVEvent*> >, std::__1::less<std::__1::pair<ScrollView*, SVEventType> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::pair<ScrollView*, SVEventType>, std::__1::pair<SVSemaphore*, SVEvent*> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::pair<ScrollView*, SVEventType>, std::__1::pair<SVSemaphore*, SVEvent*> >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_4pairIP10ScrollView11SVEventTypeEENS2_IP11SVSemaphoreP7SVEventEEEENS_19__map_value_compareIS6_SC_NS_4lessIS6_EELb1EEENS_9allocatorISC_EEE7destroyEPNS_11__tree_nodeISC_PvEE(void);

/* Symbol: blob_window */
/* Demangled: blob_window */
extern void* blob_window;

/* Symbol: _ZN13GenericVectorIN9tesseract15UnicharAndFontsEE12init_to_sizeEiS1_ */
/* Demangled: GenericVector<tesseract::UnicharAndFonts>::init_to_size(int, tesseract::UnicharAndFonts) */
int _ZN13GenericVectorIN9tesseract15UnicharAndFontsEE12init_to_sizeEiS1_(void);

/* Symbol: _ZN9tesseract17AlignedBlobParamsC2EiiiiiiNS_12TabAlignmentE */
/* Demangled: tesseract::AlignedBlobParams::AlignedBlobParams(int, int, int, int, int, int, tesseract::TabAlignment) */
int _ZN9tesseract17AlignedBlobParamsC2EiiiiiiNS_12TabAlignmentE(void);

/* Symbol: _ZNK9tesseract14ResultIterator17AppendSuffixMarksEP6STRING */
/* Demangled: tesseract::ResultIterator::AppendSuffixMarks(STRING*) const */
int _ZNK9tesseract14ResultIterator17AppendSuffixMarksEP6STRING(void);

/* Symbol: _ZN9tesseract12IndexMapBiDi5SetupEv */
/* Demangled: tesseract::IndexMapBiDi::Setup() */
int _ZN9tesseract12IndexMapBiDi5SetupEv(void);

/* Symbol: _ZN13GenericVectorIN9tesseract9KDPairIncIf12MATRIX_COORDEEE5clearEv */
/* Demangled: GenericVector<tesseract::KDPairInc<float, MATRIX_COORD> >::clear() */
int _ZN13GenericVectorIN9tesseract9KDPairIncIf12MATRIX_COORDEEE5clearEv(void);

/* Symbol: _ZN9tesseract9TesseractC2Ev */
/* Demangled: tesseract::Tesseract::Tesseract() */
int _ZN9tesseract9TesseractC2Ev(void);

/* Symbol: _ZNK4LLSQ1cEd */
/* Demangled: LLSQ::c(double) const */
int _ZNK4LLSQ1cEd(void);

/* Symbol: _ZNK9tesseract10ShapeTable9SerializeEP7__sFILE */
/* Demangled: tesseract::ShapeTable::Serialize(__sFILE*) const */
int _ZNK9tesseract10ShapeTable9SerializeEP7__sFILE(void);

/* Symbol: _ZN13GenericVectorIN9tesseract17TrainingSampleSet17FontClassDistanceEE7reserveEi */
/* Demangled: GenericVector<tesseract::TrainingSampleSet::FontClassDistance>::reserve(int) */
int _ZN13GenericVectorIN9tesseract17TrainingSampleSet17FontClassDistanceEE7reserveEi(void);

/* Symbol: _ZN9tesseract11CharBigramsC2Ev */
/* Demangled: tesseract::CharBigrams::CharBigrams() */
int _ZN9tesseract11CharBigramsC2Ev(void);

/* Symbol: _ZN9tesseract10GridSearchINS_11WordWithBoxENS_17WordWithBox_CLISTENS_16WordWithBox_C_ITEE10CommonNextEv */
/* Demangled: tesseract::GridSearch<tesseract::WordWithBox, tesseract::WordWithBox_CLIST, tesseract::WordWithBox_C_IT>::CommonNext() */
int _ZN9tesseract10GridSearchINS_11WordWithBoxENS_17WordWithBox_CLISTENS_16WordWithBox_C_ITEE10CommonNextEv(void);

/* Symbol: _ZN6STRINGaSEPKc */
/* Demangled: STRING::operator=(char const*) */
int _ZN6STRINGaSEPKc(void);

/* Symbol: _ZN9tesseract14EquationDetect24ComputeForegroundDensityERK4TBOX */
/* Demangled: tesseract::EquationDetect::ComputeForegroundDensity(TBOX const&) */
int _ZN9tesseract14EquationDetect24ComputeForegroundDensityERK4TBOX(void);

/* Symbol: _Z25vertical_cblob_projectionP6C_BLOBP5STATS */
/* Demangled: vertical_cblob_projection(C_BLOB*, STATS*) */
int _Z25vertical_cblob_projectionP6C_BLOBP5STATS(void);

/* Symbol: _ZN13GenericVectorIP14ParagraphModelE15double_the_sizeEv */
/* Demangled: GenericVector<ParagraphModel*>::double_the_size() */
int _ZN13GenericVectorIP14ParagraphModelE15double_the_sizeEv(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int fn___aeabi_memclr(void) __asm__("__aeabi_memclr");

/* Symbol: _ZN9tesseract16TessHOcrRendererC2EPKcb */
/* Demangled: tesseract::TessHOcrRenderer::TessHOcrRenderer(char const*, bool) */
int _ZN9tesseract16TessHOcrRendererC2EPKcb(void);

/* Symbol: _ZN13GenericVectorIxE9push_backEx */
/* Demangled: GenericVector<long long>::push_back(long long) */
int _ZN13GenericVectorIxE9push_backEx(void);

/* Symbol: _ZN5ELIST14internal_clearEPFvP10ELIST_LINKE */
/* Demangled: ELIST::internal_clear(void (*)(ELIST_LINK*)) */
int _ZN5ELIST14internal_clearEPFvP10ELIST_LINKE(void);

/* Symbol: _ZN9tesseract11TessBaseAPI11GetHOCRTextEi */
/* Demangled: tesseract::TessBaseAPI::GetHOCRText(int) */
int _ZN9tesseract11TessBaseAPI11GetHOCRTextEi(void);

/* Symbol: TessBaseAPISetSourceResolution */
/* Demangled: TessBaseAPISetSourceResolution */
int TessBaseAPISetSourceResolution(void);

/* Symbol: _ZN9WERD_LIST9deep_copyEPKS_PFP4WERDPKS2_E */
/* Demangled: WERD_LIST::deep_copy(WERD_LIST const*, WERD* (*)(WERD const*)) */
int _ZN9WERD_LIST9deep_copyEPKS_PFP4WERDPKS2_E(void);

/* Symbol: _ZN9tesseract12ColumnFinder25GridInsertVLinePartitionsEv */
/* Demangled: tesseract::ColumnFinder::GridInsertVLinePartitions() */
int _ZN9tesseract12ColumnFinder25GridInsertVLinePartitionsEv(void);

/* Symbol: _ZN9tesseract11StrokeWidth11HandleClickEii */
/* Demangled: tesseract::StrokeWidth::HandleClick(int, int) */
int _ZN9tesseract11StrokeWidth11HandleClickEii(void);

/* Symbol: _ZNK9tesseract15StructuredTable18FindVerticalMarginEPNS_16ColPartitionGridEib */
/* Demangled: tesseract::StructuredTable::FindVerticalMargin(tesseract::ColPartitionGrid*, int, bool) const */
int _ZNK9tesseract15StructuredTable18FindVerticalMarginEPNS_16ColPartitionGridEib(void);

/* Symbol: _ZN9tesseract15TessTsvRendererC2EPKcb */
/* Demangled: tesseract::TessTsvRenderer::TessTsvRenderer(char const*, bool) */
int _ZN9tesseract15TessTsvRendererC2EPKcb(void);

/* Symbol: _ZNK9tesseract19RowScratchRegisters11GetLineTypeEv */
/* Demangled: tesseract::RowScratchRegisters::GetLineType() const */
int _ZNK9tesseract19RowScratchRegisters11GetLineTypeEv(void);

/* Symbol: _Z13AdjustBucketsP7BUCKETSj */
/* Demangled: AdjustBuckets(BUCKETS*, unsigned int) */
int _Z13AdjustBucketsP7BUCKETSj(void);

/* Symbol: _ZN9tesseract13IntFeatureMapD2Ev */
/* Demangled: tesseract::IntFeatureMap::~IntFeatureMap() */
int _ZN9tesseract13IntFeatureMapD2Ev(void);

/* Symbol: _ZN9tesseract10SearchNode11LangModCostEPNS_11LangModEdgeEPS0_ */
/* Demangled: tesseract::SearchNode::LangModCost(tesseract::LangModEdge*, tesseract::SearchNode*) */
int _ZN9tesseract10SearchNode11LangModCostEPNS_11LangModEdgeEPS0_(void);

/* Symbol: _ZN9tesseract18TextlineProjection15PlotGradedBlobsEP13BLOBNBOX_LISTP10ScrollView */
/* Demangled: tesseract::TextlineProjection::PlotGradedBlobs(BLOBNBOX_LIST*, ScrollView*) */
int _ZN9tesseract18TextlineProjection15PlotGradedBlobsEP13BLOBNBOX_LISTP10ScrollView(void);

/* Symbol: textord_words_veto_power */
/* Demangled: textord_words_veto_power */
extern void* textord_words_veto_power;

/* Symbol: _ZTVN9tesseract7WordrecE */
/* Demangled: vtable for tesseract::Wordrec */
extern void* _ZTVN9tesseract7WordrecE;

/* Symbol: _ZN13GenericVectorIbEaSERKS0_ */
/* Demangled: GenericVector<bool>::operator=(GenericVector<bool> const&) */
int _ZN13GenericVectorIbEaSERKS0_(void);

/* Symbol: _ZNK9tesseract17LTRResultIterator13HasBlamerInfoEv */
/* Demangled: tesseract::LTRResultIterator::HasBlamerInfo() const */
int _ZNK9tesseract17LTRResultIterator13HasBlamerInfoEv(void);

/* Symbol: _ZN13GenericVectorI16CP_RESULT_STRUCTE5clearEv */
/* Demangled: GenericVector<CP_RESULT_STRUCT>::clear() */
int _ZN13GenericVectorI16CP_RESULT_STRUCTE5clearEv(void);

/* Symbol: _ZN13GenericVectorI16CP_RESULT_STRUCTE12init_to_sizeEiS0_ */
/* Demangled: GenericVector<CP_RESULT_STRUCT>::init_to_size(int, CP_RESULT_STRUCT) */
int _ZN13GenericVectorI16CP_RESULT_STRUCTE12init_to_sizeEiS0_(void);

/* Symbol: _ZN9tesseract11TessBaseAPI11GetUNLVTextEv */
/* Demangled: tesseract::TessBaseAPI::GetUNLVText() */
int _ZN9tesseract11TessBaseAPI11GetUNLVTextEv(void);

/* Symbol: _ZN4WERDC2EP11C_BLOB_LISTPS_ */
/* Demangled: WERD::WERD(C_BLOB_LIST*, WERD*) */
int _ZN4WERDC2EP11C_BLOB_LISTPS_(void);

/* Symbol: _ZN13GenericVectorIPKN9tesseract14TrainingSampleEE15double_the_sizeEv */
/* Demangled: GenericVector<tesseract::TrainingSample const*>::double_the_size() */
int _ZN13GenericVectorIPKN9tesseract14TrainingSampleEE15double_the_sizeEv(void);

/* Symbol: _ZN9tesseract13MasterTrainer14AddSpacingInfoEPKc */
/* Demangled: tesseract::MasterTrainer::AddSpacingInfo(char const*) */
int _ZN9tesseract13MasterTrainer14AddSpacingInfoEPKc(void);

/* Symbol: _ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEED2Ev */
/* Demangled: std::__1::__split_buffer<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&>::~__split_buffer() */
int _ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEED2Ev(void);

/* Symbol: _Z19mark_repeated_charsP6TO_ROW */
/* Demangled: mark_repeated_chars(TO_ROW*) */
int _Z19mark_repeated_charsP6TO_ROW(void);

/* Symbol: _ZN13GenericVectorIP5BLOCKE7reserveEi */
/* Demangled: GenericVector<BLOCK*>::reserve(int) */
int _ZN13GenericVectorIP5BLOCKE7reserveEi(void);

/* Symbol: _ZN9tesseract15TessTsvRendererC1EPKc */
/* Demangled: tesseract::TessTsvRenderer::TessTsvRenderer(char const*) */
int _ZN9tesseract15TessTsvRendererC1EPKc(void);

/* Symbol: _ZN9tesseract13MasterTrainer19ReadTrainingSamplesEPKcRK19FEATURE_DEFS_STRUCTb */
/* Demangled: tesseract::MasterTrainer::ReadTrainingSamples(char const*, FEATURE_DEFS_STRUCT const&, bool) */
int _ZN9tesseract13MasterTrainer19ReadTrainingSamplesEPKcRK19FEATURE_DEFS_STRUCTb(void);

/* Symbol: _ZN9tesseract18ShiroRekhaSplitterD0Ev */
/* Demangled: tesseract::ShiroRekhaSplitter::~ShiroRekhaSplitter() */
int _ZN9tesseract18ShiroRekhaSplitterD0Ev(void);

/* Symbol: _ZN6REJMAP21rej_word_bad_permuterEv */
/* Demangled: REJMAP::rej_word_bad_permuter() */
int _ZN6REJMAP21rej_word_bad_permuterEv(void);

/* Symbol: _ZTVN9tesseract13WordSizeModelE */
/* Demangled: vtable for tesseract::WordSizeModel */
extern void* _ZTVN9tesseract13WordSizeModelE;

/* Symbol: _Z15choose_nth_itemiPfi */
/* Demangled: choose_nth_item(int, float*, int) */
int _Z15choose_nth_itemiPfi(void);

/* Symbol: _ZN9tesseract4Bmp818kDeslantAngleCountE */
/* Demangled: tesseract::Bmp8::kDeslantAngleCount */
extern void* _ZN9tesseract4Bmp818kDeslantAngleCountE;

/* Symbol: _ZN13GenericVectorIN9tesseract8WordDataEE9push_backES1_ */
/* Demangled: GenericVector<tesseract::WordData>::push_back(tesseract::WordData) */
int _ZN13GenericVectorIN9tesseract8WordDataEE9push_backES1_(void);

/* Symbol: _Z8HeapSortiPiS_ */
/* Demangled: HeapSort(int, int*, int*) */
int _Z8HeapSortiPiS_(void);

/* Symbol: _ZN9tesseract29HybridNeuralNetCharClassifierC1EPNS_7CharSetEPNS_12TuningParamsEPNS_11FeatureBaseE */
/* Demangled: tesseract::HybridNeuralNetCharClassifier::HybridNeuralNetCharClassifier(tesseract::CharSet*, tesseract::TuningParams*, tesseract::FeatureBase*) */
int _ZN9tesseract29HybridNeuralNetCharClassifierC1EPNS_7CharSetEPNS_12TuningParamsEPNS_11FeatureBaseE(void);

/* Symbol: _ZN9tesseract14CubeLineObjectD2Ev */
/* Demangled: tesseract::CubeLineObject::~CubeLineObject() */
int _ZN9tesseract14CubeLineObjectD2Ev(void);

/* Symbol: _ZN9tesseract4Dict11adjust_wordEP11WERD_CHOICEbNS_22XHeightConsistencyEnumEfbb */
/* Demangled: tesseract::Dict::adjust_word(WERD_CHOICE*, bool, tesseract::XHeightConsistencyEnum, float, bool, bool) */
int _ZN9tesseract4Dict11adjust_wordEP11WERD_CHOICEbNS_22XHeightConsistencyEnumEfbb(void);

/* Symbol: _ZN9tesseract9Tesseract11output_passER11PAGE_RES_ITPK4TBOX */
/* Demangled: tesseract::Tesseract::output_pass(PAGE_RES_IT&, TBOX const*) */
int _ZN9tesseract9Tesseract11output_passER11PAGE_RES_ITPK4TBOX(void);

/* Symbol: _ZN8TO_BLOCKC1EP5BLOCK */
/* Demangled: TO_BLOCK::TO_BLOCK(BLOCK*) */
int _ZN8TO_BLOCKC1EP5BLOCK(void);

/* Symbol: _ZN10UNICHARMAP6insertEPKci */
/* Demangled: UNICHARMAP::insert(char const*, int) */
int _ZN10UNICHARMAP6insertEPKci(void);

/* Symbol: _ZN9tesseract8Classify17WriteIntTemplatesEP7__sFILEP20INT_TEMPLATES_STRUCTRK10UNICHARSET */
/* Demangled: tesseract::Classify::WriteIntTemplates(__sFILE*, INT_TEMPLATES_STRUCT*, UNICHARSET const&) */
int _ZN9tesseract8Classify17WriteIntTemplatesEP7__sFILEP20INT_TEMPLATES_STRUCTRK10UNICHARSET(void);

/* Symbol: _ZN9tesseract13MasterTrainer11IncludeJunkEv */
/* Demangled: tesseract::MasterTrainer::IncludeJunk() */
int _ZN9tesseract13MasterTrainer11IncludeJunkEv(void);

/* Symbol: _ZN9tesseract10FeatureBmpD0Ev */
/* Demangled: tesseract::FeatureBmp::~FeatureBmp() */
int _ZN9tesseract10FeatureBmpD0Ev(void);

/* Symbol: _Z16make_single_wordbP11TO_ROW_LISTP8ROW_LIST */
/* Demangled: make_single_word(bool, TO_ROW_LIST*, ROW_LIST*) */
int _Z16make_single_wordbP11TO_ROW_LISTP8ROW_LIST(void);

/* Symbol: __divmoddi4 */
/* Demangled: __divmoddi4 */
int fn___divmoddi4(void) __asm__("__divmoddi4");

/* Symbol: _ZN9tesseract4Dict17valid_punctuationERK11WERD_CHOICE */
/* Demangled: tesseract::Dict::valid_punctuation(WERD_CHOICE const&) */
int _ZN9tesseract4Dict17valid_punctuationERK11WERD_CHOICE(void);

/* Symbol: _ZN4QLSQ3fitEi */
/* Demangled: QLSQ::fit(int) */
int _ZN4QLSQ3fitEi(void);

/* Symbol: _ZN9tesseract14TrainingSample15ExtractCharDescEiiiiP16CHAR_DESC_STRUCT */
/* Demangled: tesseract::TrainingSample::ExtractCharDesc(int, int, int, int, CHAR_DESC_STRUCT*) */
int _ZN9tesseract14TrainingSample15ExtractCharDescEiiiiP16CHAR_DESC_STRUCT(void);

/* Symbol: _ZN9tesseract17CubeLineSegmenterD2Ev */
/* Demangled: tesseract::CubeLineSegmenter::~CubeLineSegmenter() */
int _ZN9tesseract17CubeLineSegmenterD2Ev(void);

/* Symbol: _ZN9tesseract12SquishedDawgD0Ev */
/* Demangled: tesseract::SquishedDawg::~SquishedDawg() */
int _ZN9tesseract12SquishedDawgD0Ev(void);

/* Symbol: _ZN9tesseract16ImageThresholder8SetImageEPKhiiii */
/* Demangled: tesseract::ImageThresholder::SetImage(unsigned char const*, int, int, int, int) */
int _ZN9tesseract16ImageThresholder8SetImageEPKhiiii(void);

/* Symbol: _ZN13GenericVectorIcEpLERKS0_ */
/* Demangled: GenericVector<char>::operator+=(GenericVector<char> const&) */
int _ZN13GenericVectorIcEpLERKS0_(void);

/* Symbol: _ZN9tesseract17ColPartition_LIST9deep_copyEPKS0_PFPNS_12ColPartitionEPKS3_E */
/* Demangled: tesseract::ColPartition_LIST::deep_copy(tesseract::ColPartition_LIST const*, tesseract::ColPartition* (*)(tesseract::ColPartition const*)) */
int _ZN9tesseract17ColPartition_LIST9deep_copyEPKS0_PFPNS_12ColPartitionEPKS3_E(void);

/* Symbol: _ZN8WERD_RES14StatesAllValidEv */
/* Demangled: WERD_RES::StatesAllValid() */
int _ZN8WERD_RES14StatesAllValidEv(void);

/* Symbol: _ZN9tesseract9Tesseract17word_char_qualityEP8WERD_RESP3ROWPsS5_ */
/* Demangled: tesseract::Tesseract::word_char_quality(WERD_RES*, ROW*, short*, short*) */
int _ZN9tesseract9Tesseract17word_char_qualityEP8WERD_RESP3ROWPsS5_(void);

/* Symbol: _ZN13GenericVectorIP13BLOBNBOX_LISTE15double_the_sizeEv */
/* Demangled: GenericVector<BLOBNBOX_LIST*>::double_the_size() */
int _ZN13GenericVectorIP13BLOBNBOX_LISTE15double_the_sizeEv(void);

/* Symbol: _ZN13TO_BLOCK_LIST9deep_copyEPKS_PFP8TO_BLOCKPKS2_E */
/* Demangled: TO_BLOCK_LIST::deep_copy(TO_BLOCK_LIST const*, TO_BLOCK* (*)(TO_BLOCK const*)) */
int _ZN13TO_BLOCK_LIST9deep_copyEPKS_PFP8TO_BLOCKPKS2_E(void);

/* Symbol: _ZN9tesseract5TFile6FWriteEPKvii */
/* Demangled: tesseract::TFile::FWrite(void const*, int, int) */
int _ZN9tesseract5TFile6FWriteEPKvii(void);

/* Symbol: _ZN6REJMAP21rej_word_no_alphanumsEv */
/* Demangled: REJMAP::rej_word_no_alphanums() */
int _ZN6REJMAP21rej_word_no_alphanumsEv(void);

/* Symbol: _ZN9tesseract17TrainingSampleSet9AddSampleEiPNS_14TrainingSampleE */
/* Demangled: tesseract::TrainingSampleSet::AddSample(int, tesseract::TrainingSample*) */
int _ZN9tesseract17TrainingSampleSet9AddSampleEiPNS_14TrainingSampleE(void);

/* Symbol: _Z22ConvertToMicroFeaturesP8list_recS0_ */
/* Demangled: ConvertToMicroFeatures(list_rec*, list_rec*) */
int _Z22ConvertToMicroFeaturesP8list_recS0_(void);

/* Symbol: _ZN9tesseract14ResultIterator22CalculateTextlineOrderEbRK13GenericVectorI21StrongScriptDirectionEP17GenericVectorEqEqIiE */
/* Demangled: tesseract::ResultIterator::CalculateTextlineOrder(bool, GenericVector<StrongScriptDirection> const&, GenericVectorEqEq<int>*) */
int _ZN9tesseract14ResultIterator22CalculateTextlineOrderEbRK13GenericVectorI21StrongScriptDirectionEP17GenericVectorEqEqIiE(void);

/* Symbol: _ZN4WERD4moveE6ICOORD */
/* Demangled: WERD::move(ICOORD) */
int _ZN4WERD4moveE6ICOORD(void);

/* Symbol: _ZTVN9tesseract12IndexMapBiDiE */
/* Demangled: vtable for tesseract::IndexMapBiDi */
extern void* _ZTVN9tesseract12IndexMapBiDiE;

/* Symbol: _ZN9tesseract17CubeLineSegmenter9MergeLineEP3PixP3BoxP4PixaP5Boxaa */
/* Demangled: tesseract::CubeLineSegmenter::MergeLine(Pix*, Box*, Pixa*, Boxaa*) */
int _ZN9tesseract17CubeLineSegmenter9MergeLineEP3PixP3BoxP4PixaP5Boxaa(void);

/* Symbol: _Z21find_best_dropout_rowP6TO_ROWifiP9TO_ROW_ITh */
/* Demangled: find_best_dropout_row(TO_ROW*, int, float, int, TO_ROW_IT*, unsigned char) */
int _Z21find_best_dropout_rowP6TO_ROWifiP9TO_ROW_ITh(void);

/* Symbol: _ZN18INT_FEATURE_STRUCTC1ERK6FCOORDh */
/* Demangled: INT_FEATURE_STRUCT::INT_FEATURE_STRUCT(FCOORD const&, unsigned char) */
int _ZN18INT_FEATURE_STRUCTC1ERK6FCOORDh(void);

/* Symbol: _ZNK9tesseract13TessLangModel8NumDawgsEv */
/* Demangled: tesseract::TessLangModel::NumDawgs() const */
int _ZNK9tesseract13TessLangModel8NumDawgsEv(void);

/* Symbol: _ZN9tesseract11TableFinder15RecognizeTablesEv */
/* Demangled: tesseract::TableFinder::RecognizeTables() */
int _ZN9tesseract11TableFinder15RecognizeTablesEv(void);

/* Symbol: _ZN9tesseract8Classify12PruneClassesEPK20INT_TEMPLATES_STRUCTiiPK18INT_FEATURE_STRUCTPKhPKtP13GenericVectorI16CP_RESULT_STRUCTE */
/* Demangled: tesseract::Classify::PruneClasses(INT_TEMPLATES_STRUCT const*, int, int, INT_FEATURE_STRUCT const*, unsigned char const*, unsigned short const*, GenericVector<CP_RESULT_STRUCT>*) */
int _ZN9tesseract8Classify12PruneClassesEPK20INT_TEMPLATES_STRUCTiiPK18INT_FEATURE_STRUCTPKhPKtP13GenericVectorI16CP_RESULT_STRUCTE(void);

/* Symbol: textord_debug_pitch_test */
/* Demangled: textord_debug_pitch_test */
extern void* textord_debug_pitch_test;

/* Symbol: _ZN9tesseract8Classify15ExtractFeaturesERK5TBLOBbP13GenericVectorI18INT_FEATURE_STRUCTES7_P20INT_FX_RESULT_STRUCTPS4_IiE */
/* Demangled: tesseract::Classify::ExtractFeatures(TBLOB const&, bool, GenericVector<INT_FEATURE_STRUCT>*, GenericVector<INT_FEATURE_STRUCT>*, INT_FX_RESULT_STRUCT*, GenericVector<int>*) */
int _ZN9tesseract8Classify15ExtractFeaturesERK5TBLOBbP13GenericVectorI18INT_FEATURE_STRUCTES7_P20INT_FX_RESULT_STRUCTPS4_IiE(void);

/* Symbol: _ZNSt3__16vectorIN9tesseract9NeuralNet4NodeENS_9allocatorIS3_EEE6resizeEj */
/* Demangled: std::__1::vector<tesseract::NeuralNet::Node, std::__1::allocator<tesseract::NeuralNet::Node> >::resize(unsigned int) */
int _ZNSt3__16vectorIN9tesseract9NeuralNet4NodeENS_9allocatorIS3_EEE6resizeEj(void);

/* Symbol: textord_testregion_left */
/* Demangled: textord_testregion_left */
extern void* textord_testregion_left;

/* Symbol: textord_linespace_iqrlimit */
/* Demangled: textord_linespace_iqrlimit */
extern void* textord_linespace_iqrlimit;

/* Symbol: _ZN8WERD_RES19SetupForRecognitionERK10UNICHARSETPN9tesseract9TesseractEP3PixiPK4TBOXbbbP3ROWPK5BLOCK */
/* Demangled: WERD_RES::SetupForRecognition(UNICHARSET const&, tesseract::Tesseract*, Pix*, int, TBOX const*, bool, bool, bool, ROW*, BLOCK const*) */
int _ZN8WERD_RES19SetupForRecognitionERK10UNICHARSETPN9tesseract9TesseractEP3PixiPK4TBOXbbbP3ROWPK5BLOCK(void);

/* Symbol: _ZN9tesseract16CubeSearchObject10CharSampleEii */
/* Demangled: tesseract::CubeSearchObject::CharSample(int, int) */
int _ZN9tesseract16CubeSearchObject10CharSampleEii(void);

/* Symbol: _ZN9tesseract13TessLangModel9max_edge_E */
/* Demangled: tesseract::TessLangModel::max_edge_ */
extern void* _ZN9tesseract13TessLangModel9max_edge_E;

/* Symbol: _ZN9tesseract16TessUnlvRenderer15AddImageHandlerEPNS_11TessBaseAPIE */
/* Demangled: tesseract::TessUnlvRenderer::AddImageHandler(tesseract::TessBaseAPI*) */
int _ZN9tesseract16TessUnlvRenderer15AddImageHandlerEPNS_11TessBaseAPIE(void);

/* Symbol: _ZN9tesseract4kPDFE */
/* Demangled: tesseract::kPDF */
extern void* _ZN9tesseract4kPDFE;

/* Symbol: _ZNK9tesseract10ShapeTable18MergeEqualUnicharsEiii */
/* Demangled: tesseract::ShapeTable::MergeEqualUnichars(int, int, int) const */
int _ZNK9tesseract10ShapeTable18MergeEqualUnicharsEiii(void);

/* Symbol: _ZN9tesseract15InputFileBufferC1ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: tesseract::InputFileBuffer::InputFileBuffer(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN9tesseract15InputFileBufferC1ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _Z16fixed_chop_cblobP6C_BLOBsfP14C_OUTLINE_LISTS2_ */
/* Demangled: fixed_chop_cblob(C_BLOB*, short, float, C_OUTLINE_LIST*, C_OUTLINE_LIST*) */
int _Z16fixed_chop_cblobP6C_BLOBsfP14C_OUTLINE_LISTS2_(void);

/* Symbol: _Z10join_edgesP9CRACKEDGES0_PS0_P12C_OUTLINE_IT */
/* Demangled: join_edges(CRACKEDGE*, CRACKEDGE*, CRACKEDGE**, C_OUTLINE_IT*) */
int _Z10join_edgesP9CRACKEDGES0_PS0_P12C_OUTLINE_IT(void);

/* Symbol: _ZN9tesseract6BBGridINS_12ColPartitionENS_18ColPartition_CLISTENS_17ColPartition_C_ITEE13ClearGridDataEPFvPS1_E */
/* Demangled: tesseract::BBGrid<tesseract::ColPartition, tesseract::ColPartition_CLIST, tesseract::ColPartition_C_IT>::ClearGridData(void (*)(tesseract::ColPartition*)) */
int _ZN9tesseract6BBGridINS_12ColPartitionENS_18ColPartition_CLISTENS_17ColPartition_C_ITEE13ClearGridDataEPFvPS1_E(void);

/* Symbol: _ZN9tesseract7TextordD2Ev */
/* Demangled: tesseract::Textord::~Textord() */
int _ZN9tesseract7TextordD2Ev(void);

/* Symbol: _ZNK9tesseract12PageIterator11OrientationEPNS_11OrientationEPNS_16WritingDirectionEPNS_13TextlineOrderEPf */
/* Demangled: tesseract::PageIterator::Orientation(tesseract::Orientation*, tesseract::WritingDirection*, tesseract::TextlineOrder*, float*) const */
int _ZNK9tesseract12PageIterator11OrientationEPNS_11OrientationEPNS_16WritingDirectionEPNS_13TextlineOrderEPf(void);

/* Symbol: _ZN9tesseract9Tesseract21font_recognition_passEP8PAGE_RES */
/* Demangled: tesseract::Tesseract::font_recognition_pass(PAGE_RES*) */
int _ZN9tesseract9Tesseract21font_recognition_passEP8PAGE_RES(void);

/* Symbol: _ZN9tesseract8Classify11LearnPiecesEPKciifNS_20CharSegmentationTypeES2_P8WERD_RES */
/* Demangled: tesseract::Classify::LearnPieces(char const*, int, int, float, tesseract::CharSegmentationType, char const*, WERD_RES*) */
int _ZN9tesseract8Classify11LearnPiecesEPKciifNS_20CharSegmentationTypeES2_P8WERD_RES(void);

/* Symbol: _ZN3REJ25setrej_minimal_rej_acceptEv */
/* Demangled: REJ::setrej_minimal_rej_accept() */
int _ZN3REJ25setrej_minimal_rej_acceptEv(void);

/* Symbol: _Z12AddIntConfigP16INT_CLASS_STRUCT */
/* Demangled: AddIntConfig(INT_CLASS_STRUCT*) */
int _Z12AddIntConfigP16INT_CLASS_STRUCT(void);

/* Symbol: _ZNSt3__16vectorIfNS_9allocatorIfEEEC2Ej */
/* Demangled: std::__1::vector<float, std::__1::allocator<float> >::vector(unsigned int) */
int _ZNSt3__16vectorIfNS_9allocatorIfEEEC2Ej(void);

/* Symbol: _ZN9tesseract10GridSearchI8BLOBNBOX14BLOBNBOX_CLIST13BLOBNBOX_C_ITE11SetIteratorEv */
/* Demangled: tesseract::GridSearch<BLOBNBOX, BLOBNBOX_CLIST, BLOBNBOX_C_IT>::SetIterator() */
int _ZN9tesseract10GridSearchI8BLOBNBOX14BLOBNBOX_CLIST13BLOBNBOX_C_ITE11SetIteratorEv(void);

/* Symbol: _ZN9tesseract11TessBaseAPI12ProcessPagesEPKcS2_iPNS_18TessResultRendererE */
/* Demangled: tesseract::TessBaseAPI::ProcessPages(char const*, char const*, int, tesseract::TessResultRenderer*) */
int _ZN9tesseract11TessBaseAPI12ProcessPagesEPKcS2_iPNS_18TessResultRendererE(void);

/* Symbol: _ZN8BLOBNBOX18BoundsWithinLimitsEii */
/* Demangled: BLOBNBOX::BoundsWithinLimits(int, int) */
int _ZN8BLOBNBOX18BoundsWithinLimitsEii(void);

/* Symbol: _ZN9tesseract9OtsuStatsEPKiPiS2_ */
/* Demangled: tesseract::OtsuStats(int const*, int*, int*) */
int _ZN9tesseract9OtsuStatsEPKiPiS2_(void);

/* Symbol: _ZN9tesseract9CubeUtils17CharSampleFromPixEP3Pixiiii */
/* Demangled: tesseract::CubeUtils::CharSampleFromPix(Pix*, int, int, int, int) */
int _ZN9tesseract9CubeUtils17CharSampleFromPixEP3Pixiiii(void);

/* Symbol: _ZN9tesseract16CubeTuningParamsC1Ev */
/* Demangled: tesseract::CubeTuningParams::CubeTuningParams() */
int _ZN9tesseract16CubeTuningParamsC1Ev(void);

/* Symbol: textord_projection_scale */
/* Demangled: textord_projection_scale */
extern void* textord_projection_scale;

/* Symbol: equationdetect_save_bi_image */
/* Demangled: equationdetect_save_bi_image */
extern void* equationdetect_save_bi_image;

/* Symbol: _Z11OpenBoxFileRK6STRING */
/* Demangled: OpenBoxFile(STRING const&) */
int _Z11OpenBoxFileRK6STRING(void);

/* Symbol: _ZN9tesseract12ErrorCounter6CountspLERKS1_ */
/* Demangled: tesseract::ErrorCounter::Counts::operator+=(tesseract::ErrorCounter::Counts const&) */
int _ZN9tesseract12ErrorCounter6CountspLERKS1_(void);

/* Symbol: classify_cp_side_pad_loose */
/* Demangled: classify_cp_side_pad_loose */
extern void* classify_cp_side_pad_loose;

/* Symbol: _ZN9tesseract4Trie14read_word_listEPKcRK10UNICHARSETNS0_16RTLReversePolicyEP13GenericVectorI6STRINGE */
/* Demangled: tesseract::Trie::read_word_list(char const*, UNICHARSET const&, tesseract::Trie::RTLReversePolicy, GenericVector<STRING>*) */
int _ZN9tesseract4Trie14read_word_listEPKcRK10UNICHARSETNS0_16RTLReversePolicyEP13GenericVectorI6STRINGE(void);

/* Symbol: _ZN9tesseract7Textord9wide_blobEP6TO_ROW4TBOX */
/* Demangled: tesseract::Textord::wide_blob(TO_ROW*, TBOX) */
int _ZN9tesseract7Textord9wide_blobEP6TO_ROW4TBOX(void);

/* Symbol: TessBaseAPINumDawgs */
/* Demangled: TessBaseAPINumDawgs */
int TessBaseAPINumDawgs(void);

/* Symbol: _ZN9tesseract9Tesseract20convert_bad_unlv_chsEP8WERD_RES */
/* Demangled: tesseract::Tesseract::convert_bad_unlv_chs(WERD_RES*) */
int _ZN9tesseract9Tesseract20convert_bad_unlv_chsEP8WERD_RES(void);

/* Symbol: _ZNK11WERD_CHOICE14punct_strippedEPiS0_ */
/* Demangled: WERD_CHOICE::punct_stripped(int*, int*) const */
int _ZNK11WERD_CHOICE14punct_strippedEPiS0_(void);

/* Symbol: _ZNK5SPLIT16SplitOutlineListEP8TESSLINE */
/* Demangled: SPLIT::SplitOutlineList(TESSLINE*) const */
int _ZNK5SPLIT16SplitOutlineListEP8TESSLINE(void);

/* Symbol: _ZN9tesseract16CubeSearchObject4InitEv */
/* Demangled: tesseract::CubeSearchObject::Init() */
int _ZN9tesseract16CubeSearchObject4InitEv(void);

/* Symbol: _ZN9tesseract10GridSearchINS_11WordWithBoxENS_17WordWithBox_CLISTENS_16WordWithBox_C_ITEE11SetIteratorEv */
/* Demangled: tesseract::GridSearch<tesseract::WordWithBox, tesseract::WordWithBox_CLIST, tesseract::WordWithBox_C_IT>::SetIterator() */
int _ZN9tesseract10GridSearchINS_11WordWithBoxENS_17WordWithBox_CLISTENS_16WordWithBox_C_ITEE11SetIteratorEv(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract12ColPartitionEE15double_the_sizeEv */
/* Demangled: GenericVector<tesseract::ColPartition*>::double_the_size() */
int _ZN13GenericVectorIPN9tesseract12ColPartitionEE15double_the_sizeEv(void);

/* Symbol: _ZN7UNICHARC1EPKci */
/* Demangled: UNICHAR::UNICHAR(char const*, int) */
int _ZN7UNICHARC1EPKci(void);

/* Symbol: _ZN9tesseract11TessBaseAPI10TextLengthEPi */
/* Demangled: tesseract::TessBaseAPI::TextLength(int*) */
int _ZN9tesseract11TessBaseAPI10TextLengthEPi(void);

/* Symbol: _ZN9PARA_LIST9deep_copyEPKS_PFP4PARAPKS2_E */
/* Demangled: PARA_LIST::deep_copy(PARA_LIST const*, PARA* (*)(PARA const*)) */
int _ZN9PARA_LIST9deep_copyEPKS_PFP4PARAPKS2_E(void);

/* Symbol: _ZN9tesseract9NeuralNet15FastFeedForwardIfEEbPKT_PS2_ */
/* Demangled: bool tesseract::NeuralNet::FastFeedForward<float>(float const*, float*) */
int _ZN9tesseract9NeuralNet15FastFeedForwardIfEEbPKT_PS2_(void);

/* Symbol: textord_debug_bugs */
/* Demangled: textord_debug_bugs */
extern void* textord_debug_bugs;

/* Symbol: _ZNK5TBLOB25ClassifyNormalizeIfNeededEv */
/* Demangled: TBLOB::ClassifyNormalizeIfNeeded() const */
int _ZNK5TBLOB25ClassifyNormalizeIfNeededEv(void);

/* Symbol: _ZN9tesseract12ColPartition16OverlapSplitBlobERK4TBOX */
/* Demangled: tesseract::ColPartition::OverlapSplitBlob(TBOX const&) */
int _ZN9tesseract12ColPartition16OverlapSplitBlobERK4TBOX(void);

/* Symbol: _ZN9tesseract9Tesseract11SegmentPageEPK6STRINGP10BLOCK_LISTPS0_P9OSResults */
/* Demangled: tesseract::Tesseract::SegmentPage(STRING const*, BLOCK_LIST*, tesseract::Tesseract*, OSResults*) */
int _ZN9tesseract9Tesseract11SegmentPageEPK6STRINGP10BLOCK_LISTPS0_P9OSResults(void);

/* Symbol: _ZNK12BlamerBundle25GuidedSegsearchStillGoingEv */
/* Demangled: BlamerBundle::GuidedSegsearchStillGoing() const */
int _ZNK12BlamerBundle25GuidedSegsearchStillGoingEv(void);

/* Symbol: _ZN5BLOCK6rotateERK6FCOORD */
/* Demangled: BLOCK::rotate(FCOORD const&) */
int _ZN5BLOCK6rotateERK6FCOORD(void);

/* Symbol: _ZN9tesseract7ConCompD0Ev */
/* Demangled: tesseract::ConComp::~ConComp() */
int _ZN9tesseract7ConCompD0Ev(void);

/* Symbol: _Z20split_stepped_splineP7QSPLINEfPiS1_Ri */
/* Demangled: split_stepped_spline(QSPLINE*, float, int*, int*, int&) */
int _Z20split_stepped_splineP7QSPLINEfPiS1_Ri(void);

/* Symbol: _ZNK9tesseract12PageIterator14GetBinaryImageENS_17PageIteratorLevelE */
/* Demangled: tesseract::PageIterator::GetBinaryImage(tesseract::PageIteratorLevel) const */
int _ZNK9tesseract12PageIterator14GetBinaryImageENS_17PageIteratorLevelE(void);

/* Symbol: _ZN9tesseract9Tesseract19tess_segment_pass_nEiP8WERD_RES */
/* Demangled: tesseract::Tesseract::tess_segment_pass_n(int, WERD_RES*) */
int _ZN9tesseract9Tesseract19tess_segment_pass_nEiP8WERD_RES(void);

/* Symbol: _ZN3REJ25rej_before_quality_acceptEv */
/* Demangled: REJ::rej_before_quality_accept() */
int _ZN3REJ25rej_before_quality_acceptEv(void);

/* Symbol: _ZN9tesseract12ErrorCounter14DebugNewErrorsEPNS_15ShapeClassifierES2_NS_10CountTypesERKNS_13FontInfoTableERK13GenericVectorIP3PixEPNS_14SampleIteratorE */
/* Demangled: tesseract::ErrorCounter::DebugNewErrors(tesseract::ShapeClassifier*, tesseract::ShapeClassifier*, tesseract::CountTypes, tesseract::FontInfoTable const&, GenericVector<Pix*> const&, tesseract::SampleIterator*) */
int _ZN9tesseract12ErrorCounter14DebugNewErrorsEPNS_15ShapeClassifierES2_NS_10CountTypesERKNS_13FontInfoTableERK13GenericVectorIP3PixEPNS_14SampleIteratorE(void);

/* Symbol: _Z16FillPPLinearBitsPA2_jiffb */
/* Demangled: FillPPLinearBits(unsigned int (*) [2], int, float, float, bool) */
int _Z16FillPPLinearBitsPA2_jiffb(void);

/* Symbol: _ZN9tesseract10BeamSearchD1Ev */
/* Demangled: tesseract::BeamSearch::~BeamSearch() */
int _ZN9tesseract10BeamSearchD1Ev(void);

/* Symbol: _Z16segment_baselineP6TO_ROWP8TO_BLOCKRiPi */
/* Demangled: segment_baseline(TO_ROW*, TO_BLOCK*, int&, int*) */
int _Z16segment_baselineP6TO_ROWP8TO_BLOCKRiPi(void);

/* Symbol: textord_fpiqr_ratio */
/* Demangled: textord_fpiqr_ratio */
extern void* textord_fpiqr_ratio;

/* Symbol: _ZNK7QSPLINE1yEd */
/* Demangled: QSPLINE::y(double) const */
int _ZNK7QSPLINE1yEd(void);

/* Symbol: _ZTVN9tesseract15TessOsdRendererE */
/* Demangled: vtable for tesseract::TessOsdRenderer */
extern void* _ZTVN9tesseract15TessOsdRendererE;

/* Symbol: _ZN9tesseract14EquationDetect20ExpandSeedHorizontalEbPNS_12ColPartitionEP13GenericVectorIS2_E */
/* Demangled: tesseract::EquationDetect::ExpandSeedHorizontal(bool, tesseract::ColPartition*, GenericVector<tesseract::ColPartition*>*) */
int _ZN9tesseract14EquationDetect20ExpandSeedHorizontalEbPNS_12ColPartitionEP13GenericVectorIS2_E(void);

/* Symbol: _ZN13GenericVectorIcE12init_to_sizeEic */
/* Demangled: GenericVector<char>::init_to_size(int, char) */
int _ZN13GenericVectorIcE12init_to_sizeEic(void);

/* Symbol: pitsync_linear_version */
/* Demangled: pitsync_linear_version */
extern void* pitsync_linear_version;

/* Symbol: _ZN9tesseract9TabVectorD1Ev */
/* Demangled: tesseract::TabVector::~TabVector() */
int _ZN9tesseract9TabVectorD1Ev(void);

/* Symbol: _ZN9OSResults10accumulateERKS_ */
/* Demangled: OSResults::accumulate(OSResults const&) */
int _ZN9OSResults10accumulateERKS_(void);

/* Symbol: _ZN13GenericVectorIyE5clearEv */
/* Demangled: GenericVector<unsigned long long>::clear() */
int _ZN13GenericVectorIyE5clearEv(void);

/* Symbol: _ZN9tesseract16ColPartitionGrid11DeletePartsEv */
/* Demangled: tesseract::ColPartitionGrid::DeleteParts() */
int _ZN9tesseract16ColPartitionGrid11DeletePartsEv(void);

/* Symbol: _ZNK9tesseract18TextlineProjection20MoveNonTextlineBlobsEP13BLOBNBOX_LISTS2_ */
/* Demangled: tesseract::TextlineProjection::MoveNonTextlineBlobs(BLOBNBOX_LIST*, BLOBNBOX_LIST*) const */
int _ZNK9tesseract18TextlineProjection20MoveNonTextlineBlobsEP13BLOBNBOX_LISTS2_(void);

/* Symbol: _Z16compute_pitch_sdP6TO_ROWP5STATSssffRfRsP14ICOORDELT_LISThss */
/* Demangled: compute_pitch_sd(TO_ROW*, STATS*, short, short, float, float, float&, short&, ICOORDELT_LIST*, unsigned char, short, short) */
int _Z16compute_pitch_sdP6TO_ROWP5STATSssffRfRsP14ICOORDELT_LISThss(void);

/* Symbol: _ZNK9tesseract11ParamsModel11ComputeCostEPKf */
/* Demangled: tesseract::ParamsModel::ComputeCost(float const*) const */
int _ZNK9tesseract11ParamsModel11ComputeCostEPKf(void);

/* Symbol: TessBaseAPIEnd */
/* Demangled: TessBaseAPIEnd */
int TessBaseAPIEnd(void);

/* Symbol: TessTextRendererCreate */
/* Demangled: TessTextRendererCreate */
int TessTextRendererCreate(void);

/* Symbol: _ZNK4TBOX14bounding_unionERKS_ */
/* Demangled: TBOX::bounding_union(TBOX const&) const */
int _ZNK4TBOX14bounding_unionERKS_(void);

/* Symbol: _ZN9tesseract9BitVectorC1Ei */
/* Demangled: tesseract::BitVector::BitVector(int) */
int _ZN9tesseract9BitVectorC1Ei(void);

/* Symbol: _ZN13GenericVectorIPK14ParagraphModelE15double_the_sizeEv */
/* Demangled: GenericVector<ParagraphModel const*>::double_the_size() */
int _ZN13GenericVectorIPK14ParagraphModelE15double_the_sizeEv(void);

/* Symbol: _ZN9tesseract11ParamsModel5PrintEv */
/* Demangled: tesseract::ParamsModel::Print() */
int _ZN9tesseract11ParamsModel5PrintEv(void);

/* Symbol: _ZN9tesseract13FontInfoTable11DeSerializeEbP7__sFILE */
/* Demangled: tesseract::FontInfoTable::DeSerialize(bool, __sFILE*) */
int _ZN9tesseract13FontInfoTable11DeSerializeEbP7__sFILE(void);

/* Symbol: _ZN8WERD_RES17SetupBlamerBundleEv */
/* Demangled: WERD_RES::SetupBlamerBundle() */
int _ZN8WERD_RES17SetupBlamerBundleEv(void);

/* Symbol: _ZNK6FCOORD18nearest_pt_on_lineERKS_S1_ */
/* Demangled: FCOORD::nearest_pt_on_line(FCOORD const&, FCOORD const&) const */
int _ZNK6FCOORD18nearest_pt_on_lineERKS_S1_(void);

/* Symbol: _ZN7UNICHAR14const_iteratorppEv */
/* Demangled: UNICHAR::const_iterator::operator++() */
int _ZN7UNICHAR14const_iteratorppEv(void);

/* Symbol: textord_ocropus_mode */
/* Demangled: textord_ocropus_mode */
extern void* textord_ocropus_mode;

/* Symbol: _ZN9tesseract9TabVector16ApplyConstraintsEv */
/* Demangled: tesseract::TabVector::ApplyConstraints() */
int _ZN9tesseract9TabVector16ApplyConstraintsEv(void);

/* Symbol: _Z20progressJavaCallbackPviiiii */
/* Demangled: progressJavaCallback(void*, int, int, int, int, int) */
int _Z20progressJavaCallbackPviiiii(void);

/* Symbol: _ZTV31_TessFunctionResultCallback_0_2ILb0EbP7__sFILERKN9tesseract8FontInfoEE */
/* Demangled: vtable for _TessFunctionResultCallback_0_2<false, bool, __sFILE*, tesseract::FontInfo const&> */
extern void* _ZTV31_TessFunctionResultCallback_0_2ILb0EbP7__sFILERKN9tesseract8FontInfoEE;

/* Symbol: classify_pico_feature_length */
/* Demangled: classify_pico_feature_length */
extern void* classify_pico_feature_length;

/* Symbol: _ZNSt3__114__split_bufferIPN9tesseract6NeuronERNS_9allocatorIS3_EEED2Ev */
/* Demangled: std::__1::__split_buffer<tesseract::Neuron*, std::__1::allocator<tesseract::Neuron*>&>::~__split_buffer() */
int _ZNSt3__114__split_bufferIPN9tesseract6NeuronERNS_9allocatorIS3_EEED2Ev(void);

/* Symbol: _ZN9tesseract7Wordrec14pick_good_seamEP5TBLOB */
/* Demangled: tesseract::Wordrec::pick_good_seam(TBLOB*) */
int _ZN9tesseract7Wordrec14pick_good_seamEP5TBLOB(void);

/* Symbol: _ZN9tesseract9Tesseract12reject_I_1_LEP8WERD_RES */
/* Demangled: tesseract::Tesseract::reject_I_1_L(WERD_RES*) */
int _ZN9tesseract9Tesseract12reject_I_1_LEP8WERD_RES(void);

/* Symbol: _ZNK10UNICHARSET19major_right_to_leftEv */
/* Demangled: UNICHARSET::major_right_to_left() const */
int _ZNK10UNICHARSET19major_right_to_leftEv(void);

/* Symbol: _ZN7SVMutex4LockEv */
/* Demangled: SVMutex::Lock() */
int _ZN7SVMutex4LockEv(void);

/* Symbol: _ZN9tesseract21ConvNetCharClassifier8ClassifyEPNS_8CharSampE */
/* Demangled: tesseract::ConvNetCharClassifier::Classify(tesseract::CharSamp*) */
int _ZN9tesseract21ConvNetCharClassifier8ClassifyEPNS_8CharSampE(void);

/* Symbol: _ZN17SORTED_FLOAT_LIST9deep_copyEPKS_PFP12SORTED_FLOATPKS2_E */
/* Demangled: SORTED_FLOAT_LIST::deep_copy(SORTED_FLOAT_LIST const*, SORTED_FLOAT* (*)(SORTED_FLOAT const*)) */
int _ZN17SORTED_FLOAT_LIST9deep_copyEPKS_PFP12SORTED_FLOATPKS2_E(void);

/* Symbol: _ZN9tesseract18TessResultRendererD1Ev */
/* Demangled: tesseract::TessResultRenderer::~TessResultRenderer() */
int _ZN9tesseract18TessResultRendererD1Ev(void);

/* Symbol: _ZN9tesseract9CubeUtilsD2Ev */
/* Demangled: tesseract::CubeUtils::~CubeUtils() */
int _ZN9tesseract9CubeUtilsD2Ev(void);

/* Symbol: _ZN9tesseract4Dict7case_okERK11WERD_CHOICERK10UNICHARSET */
/* Demangled: tesseract::Dict::case_ok(WERD_CHOICE const&, UNICHARSET const&) */
int _ZN9tesseract4Dict7case_okERK11WERD_CHOICERK10UNICHARSET(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract9BoolParamEE9push_backES2_ */
/* Demangled: GenericVector<tesseract::BoolParam*>::push_back(tesseract::BoolParam*) */
int _ZN13GenericVectorIPN9tesseract9BoolParamEE9push_backES2_(void);

/* Symbol: _ZN9tesseract9Tesseract26AssignDiacriticsToNewBlobsERK13GenericVectorIP9C_OUTLINEEiP4WERDP11PAGE_RES_ITPS1_IbEPS1_IP6C_BLOBE */
/* Demangled: tesseract::Tesseract::AssignDiacriticsToNewBlobs(GenericVector<C_OUTLINE*> const&, int, WERD*, PAGE_RES_IT*, GenericVector<bool>*, GenericVector<C_BLOB*>*) */
int _ZN9tesseract9Tesseract26AssignDiacriticsToNewBlobsERK13GenericVectorIP9C_OUTLINEEiP4WERDP11PAGE_RES_ITPS1_IbEPS1_IP6C_BLOBE(void);

/* Symbol: _ZN13GenericVectorIS_IN9tesseract24ParamsTrainingHypothesisEEE15double_the_sizeEv */
/* Demangled: GenericVector<GenericVector<tesseract::ParamsTrainingHypothesis> >::double_the_size() */
int _ZN13GenericVectorIS_IN9tesseract24ParamsTrainingHypothesisEEE15double_the_sizeEv(void);

/* Symbol: _ZN13GenericVectorIP4SEAMEaSERKS2_ */
/* Demangled: GenericVector<SEAM*>::operator=(GenericVector<SEAM*> const&) */
int _ZN13GenericVectorIP4SEAMEaSERKS2_(void);

/* Symbol: _Z16NormalizeOutlineP8list_recf */
/* Demangled: NormalizeOutline(list_rec*, float) */
int _Z16NormalizeOutlineP8list_recf(void);

/* Symbol: _ZTV29_TessMemberResultCallback_0_0ILb1EPN9tesseract4DawgENS0_10DawgLoaderEE */
/* Demangled: vtable for _TessMemberResultCallback_0_0<true, tesseract::Dawg*, tesseract::DawgLoader> */
extern void* _ZTV29_TessMemberResultCallback_0_0ILb1EPN9tesseract4DawgENS0_10DawgLoaderEE;

/* Symbol: textord_balance_factor */
/* Demangled: textord_balance_factor */
extern void* textord_balance_factor;

/* Symbol: _ZNK9tesseract18TextlineProjection17BoxOutOfHTextlineERK4TBOXPK6DENORMb */
/* Demangled: tesseract::TextlineProjection::BoxOutOfHTextline(TBOX const&, DENORM const*, bool) const */
int _ZNK9tesseract18TextlineProjection17BoxOutOfHTextlineERK4TBOXPK6DENORMb(void);

/* Symbol: _ZNK9tesseract11TessBaseAPI18GetCubeRecoContextEv */
/* Demangled: tesseract::TessBaseAPI::GetCubeRecoContext() const */
int _ZNK9tesseract11TessBaseAPI18GetCubeRecoContextEv(void);

/* Symbol: _ZN9tesseract9NeuralNet8FromFileENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: tesseract::NeuralNet::FromFile(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN9tesseract9NeuralNet8FromFileENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN9BLOCK_RESC2EbP5BLOCK */
/* Demangled: BLOCK_RES::BLOCK_RES(bool, BLOCK*) */
int _ZN9BLOCK_RESC2EbP5BLOCK(void);

/* Symbol: _ZN9tesseract18ShiroRekhaSplitterC1Ev */
/* Demangled: tesseract::ShiroRekhaSplitter::ShiroRekhaSplitter() */
int _ZN9tesseract18ShiroRekhaSplitterC1Ev(void);

/* Symbol: _ZN4WERD10CleanNoiseEf */
/* Demangled: WERD::CleanNoise(float) */
int _ZN4WERD10CleanNoiseEf(void);

/* Symbol: _Z11FreeSubTreeP6KDNODE */
/* Demangled: FreeSubTree(KDNODE*) */
int _Z11FreeSubTreeP6KDNODE(void);

/* Symbol: _ZN9tesseract7Textord16make_spline_rowsEP8TO_BLOCKfh */
/* Demangled: tesseract::Textord::make_spline_rows(TO_BLOCK*, float, unsigned char) */
int _ZN9tesseract7Textord16make_spline_rowsEP8TO_BLOCKfh(void);

/* Symbol: _ZN9tesseract16ColPartitionGrid21FindPartitionPartnersEv */
/* Demangled: tesseract::ColPartitionGrid::FindPartitionPartners() */
int _ZN9tesseract16ColPartitionGrid21FindPartitionPartnersEv(void);

/* Symbol: _ZN9tesseract15StructuredTable26CountVerticalIntersectionsEi */
/* Demangled: tesseract::StructuredTable::CountVerticalIntersections(int) */
int _ZN9tesseract15StructuredTable26CountVerticalIntersectionsEi(void);

/* Symbol: _ZTVN9tesseract6BBGridINS_11WordWithBoxENS_17WordWithBox_CLISTENS_16WordWithBox_C_ITEEE */
/* Demangled: vtable for tesseract::BBGrid<tesseract::WordWithBox, tesseract::WordWithBox_CLIST, tesseract::WordWithBox_C_IT> */
extern void* _ZTVN9tesseract6BBGridINS_11WordWithBoxENS_17WordWithBox_CLISTENS_16WordWithBox_C_ITEEE;

/* Symbol: _ZNK9tesseract10ShapeTable19AddUnicharToResultsEifP13GenericVectorIiEPS1_INS_13UnicharRatingEE */
/* Demangled: tesseract::ShapeTable::AddUnicharToResults(int, float, GenericVector<int>*, GenericVector<tesseract::UnicharRating>*) const */
int _ZNK9tesseract10ShapeTable19AddUnicharToResultsEifP13GenericVectorIiEPS1_INS_13UnicharRatingEE(void);

/* Symbol: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeSetImageBytes */
/* Demangled: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeSetImageBytes */
int Java_com_googlecode_tesseract_android_TessBaseAPI_nativeSetImageBytes(void);

/* Symbol: _ZN9tesseract17CubeLineSegmenter15VerticalClosingEP3PixiPP4Boxa */
/* Demangled: tesseract::CubeLineSegmenter::VerticalClosing(Pix*, int, Boxa**) */
int _ZN9tesseract17CubeLineSegmenter15VerticalClosingEP3PixiPP4Boxa(void);

/* Symbol: _ZN9tesseract9CubeUtils6StrDupEPKi */
/* Demangled: tesseract::CubeUtils::StrDup(int const*) */
int _ZN9tesseract9CubeUtils6StrDupEPKi(void);

/* Symbol: _ZN9tesseract13WordSizeModel6CreateERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_PNS_7CharSetEb */
/* Demangled: tesseract::WordSizeModel::Create(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, tesseract::CharSet*, bool) */
int _ZN9tesseract13WordSizeModel6CreateERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_PNS_7CharSetEb(void);

/* Symbol: _ZNK9tesseract14EquationDetect24PrintSpecialBlobsDensityEPKNS_12ColPartitionE */
/* Demangled: tesseract::EquationDetect::PrintSpecialBlobsDensity(tesseract::ColPartition const*) const */
int _ZNK9tesseract14EquationDetect24PrintSpecialBlobsDensityEPKNS_12ColPartitionE(void);

/* Symbol: _ZN14IntegerMatcher24kSEExponentialMultiplierE */
/* Demangled: IntegerMatcher::kSEExponentialMultiplier */
extern void* _ZN14IntegerMatcher24kSEExponentialMultiplierE;

/* Symbol: _ZN9tesseract16CubeSearchObject11NoSpaceCostEi */
/* Demangled: tesseract::CubeSearchObject::NoSpaceCost(int) */
int _ZN9tesseract16CubeSearchObject11NoSpaceCostEi(void);

/* Symbol: _ZN9tesseract12ColPartition7IsLegalEv */
/* Demangled: tesseract::ColPartition::IsLegal() */
int _ZN9tesseract12ColPartition7IsLegalEv(void);

/* Symbol: _ZN9tesseract7BoxWord10MergeBoxesEii */
/* Demangled: tesseract::BoxWord::MergeBoxes(int, int) */
int _ZN9tesseract7BoxWord10MergeBoxesEii(void);

/* Symbol: _ZN4SEAM10JoinPiecesERK13GenericVectorIPS_ERKS0_IP5TBLOBEii */
/* Demangled: SEAM::JoinPieces(GenericVector<SEAM*> const&, GenericVector<TBLOB*> const&, int, int) */
int _ZN4SEAM10JoinPiecesERK13GenericVectorIPS_ERKS0_IP5TBLOBEii(void);

/* Symbol: _ZN9tesseract9BitVectorC1Ev */
/* Demangled: tesseract::BitVector::BitVector() */
int _ZN9tesseract9BitVectorC1Ev(void);

/* Symbol: _Z23compute_line_occupationP8TO_BLOCKfiiPiS1_ */
/* Demangled: compute_line_occupation(TO_BLOCK*, float, int, int, int*, int*) */
int _Z23compute_line_occupationP8TO_BLOCKfiiPiS1_(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int fn___aeabi_memset4(void) __asm__("__aeabi_memset4");

/* Symbol: _ZN9tesseract9Tesseract25word_contains_non_1_digitEPKcS2_ */
/* Demangled: tesseract::Tesseract::word_contains_non_1_digit(char const*, char const*) */
int _ZN9tesseract9Tesseract25word_contains_non_1_digitEPKcS2_(void);

/* Symbol: _ZN10UNICHARSETD2Ev */
/* Demangled: UNICHARSET::~UNICHARSET() */
int _ZN10UNICHARSETD2Ev(void);

/* Symbol: _ZN9tesseract7DPPoint5SolveEiibMS0_FxPKS0_EiPS0_ */
/* Demangled: tesseract::DPPoint::Solve(int, int, bool, long long (tesseract::DPPoint::*)(tesseract::DPPoint const*), int, tesseract::DPPoint*) */
int _ZN9tesseract7DPPoint5SolveEiibMS0_FxPKS0_EiPS0_(void);

/* Symbol: _ZN9tesseract13MasterTrainer14DebugCanonicalEPKcS2_ */
/* Demangled: tesseract::MasterTrainer::DebugCanonical(char const*, char const*) */
int _ZN9tesseract13MasterTrainer14DebugCanonicalEPKcS2_(void);

/* Symbol: _ZN9tesseract10SearchNode13IdenticalPathEPS0_S1_ */
/* Demangled: tesseract::SearchNode::IdenticalPath(tesseract::SearchNode*, tesseract::SearchNode*) */
int _ZN9tesseract10SearchNode13IdenticalPathEPS0_S1_(void);

/* Symbol: _ZN13GenericVectorIN9tesseract16SegSearchPendingEE5clearEv */
/* Demangled: GenericVector<tesseract::SegSearchPending>::clear() */
int _ZN13GenericVectorIN9tesseract16SegSearchPendingEE5clearEv(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int fn___aeabi_memset8(void) __asm__("__aeabi_memset8");

/* Symbol: textord_interpolating_skew */
/* Demangled: textord_interpolating_skew */
extern void* textord_interpolating_skew;

/* Symbol: _ZN13GenericVectorIPN9tesseract12ColPartitionEE20delete_data_pointersEv */
/* Demangled: GenericVector<tesseract::ColPartition*>::delete_data_pointers() */
int _ZN13GenericVectorIPN9tesseract12ColPartitionEE20delete_data_pointersEv(void);

/* Symbol: _ZNK9tesseract14EquationDetect17GetOutputTiffNameEPKcP6STRING */
/* Demangled: tesseract::EquationDetect::GetOutputTiffName(char const*, STRING*) const */
int _ZNK9tesseract14EquationDetect17GetOutputTiffNameEPKcP6STRING(void);

/* Symbol: _ZNK9tesseract14EquationDetect19IsNearSmallNeighborERK4TBOXS3_ */
/* Demangled: tesseract::EquationDetect::IsNearSmallNeighbor(TBOX const&, TBOX const&) const */
int _ZNK9tesseract14EquationDetect19IsNearSmallNeighborERK4TBOXS3_(void);

/* Symbol: _ZN9tesseract31InternalParagraphModelByOutlineEPK13GenericVectorINS_19RowScratchRegistersEEiiiPb */
/* Demangled: tesseract::InternalParagraphModelByOutline(GenericVector<tesseract::RowScratchRegisters> const*, int, int, int, bool*) */
int _ZN9tesseract31InternalParagraphModelByOutlineEPK13GenericVectorINS_19RowScratchRegistersEEiiiPb(void);

/* Symbol: _Z9push_lastP8list_recPv */
/* Demangled: push_last(list_rec*, void*) */
int _Z9push_lastP8list_recPv(void);

/* Symbol: _ZN9tesseract34textord_tablefind_recognize_tablesE */
/* Demangled: tesseract::textord_tablefind_recognize_tables */
extern void* _ZN9tesseract34textord_tablefind_recognize_tablesE;

/* Symbol: __aeabi_memmove4 */
/* Demangled: __aeabi_memmove4 */
int fn___aeabi_memmove4(void) __asm__("__aeabi_memmove4");

/* Symbol: TessBaseAPIGetRegions */
/* Demangled: TessBaseAPIGetRegions */
int TessBaseAPIGetRegions(void);

/* Symbol: _ZN8BLOBNBOX16DeleteNoiseBlobsEP13BLOBNBOX_LIST */
/* Demangled: BLOBNBOX::DeleteNoiseBlobs(BLOBNBOX_LIST*) */
int _ZN8BLOBNBOX16DeleteNoiseBlobsEP13BLOBNBOX_LIST(void);

/* Symbol: _ZN9C_OUTLINEC1EPS_6FCOORD */
/* Demangled: C_OUTLINE::C_OUTLINE(C_OUTLINE*, FCOORD) */
int _ZN9C_OUTLINEC1EPS_6FCOORD(void);

/* Symbol: _ZN9tesseract9BitVector14hamming_table_E */
/* Demangled: tesseract::BitVector::hamming_table_ */
extern void* _ZN9tesseract9BitVector14hamming_table_E;

/* Symbol: _ZN9tesseract15kHyphenLikeUTF8E */
/* Demangled: tesseract::kHyphenLikeUTF8 */
extern void* _ZN9tesseract15kHyphenLikeUTF8E;

/* Symbol: _ZN9tesseract6BBGridI8BLOBNBOX14BLOBNBOX_CLIST13BLOBNBOX_C_ITED0Ev */
/* Demangled: tesseract::BBGrid<BLOBNBOX, BLOBNBOX_CLIST, BLOBNBOX_C_IT>::~BBGrid() */
int _ZN9tesseract6BBGridI8BLOBNBOX14BLOBNBOX_CLIST13BLOBNBOX_C_ITED0Ev(void);

/* Symbol: _Z16preserve_outlineP6EDGEPT */
/* Demangled: preserve_outline(EDGEPT*) */
int _Z16preserve_outlineP6EDGEPT(void);

/* Symbol: _ZN9tesseract21TesseractCubeCombinerC2EPNS_15CubeRecoContextE */
/* Demangled: tesseract::TesseractCubeCombiner::TesseractCubeCombiner(tesseract::CubeRecoContext*) */
int _ZN9tesseract21TesseractCubeCombinerC2EPNS_15CubeRecoContextE(void);

/* Symbol: _ZN11WERD_CHOICE18SetScriptPositionsEbP5TWERD */
/* Demangled: WERD_CHOICE::SetScriptPositions(bool, TWERD*) */
int _ZN11WERD_CHOICE18SetScriptPositionsEbP5TWERD(void);

/* Symbol: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeGetThresholdedImage */
/* Demangled: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeGetThresholdedImage */
int Java_com_googlecode_tesseract_android_TessBaseAPI_nativeGetThresholdedImage(void);

/* Symbol: _ZN9tesseract11TessBaseAPI12SetRectangleEiiii */
/* Demangled: tesseract::TessBaseAPI::SetRectangle(int, int, int, int) */
int _ZN9tesseract11TessBaseAPI12SetRectangleEiiii(void);

/* Symbol: TessBaseAPISetRectangle */
/* Demangled: TessBaseAPISetRectangle */
int TessBaseAPISetRectangle(void);

/* Symbol: _ZN13GenericVectorIN9tesseract13UnicharRatingEE15double_the_sizeEv */
/* Demangled: GenericVector<tesseract::UnicharRating>::double_the_size() */
int _ZN13GenericVectorIN9tesseract13UnicharRatingEE15double_the_sizeEv(void);

/* Symbol: _ZN9tesseract14TrainingSampleD2Ev */
/* Demangled: tesseract::TrainingSample::~TrainingSample() */
int _ZN9tesseract14TrainingSampleD2Ev(void);

/* Symbol: _ZN9tesseract17AlignedBlobParams12set_verticalEii */
/* Demangled: tesseract::AlignedBlobParams::set_vertical(int, int) */
int _ZN9tesseract17AlignedBlobParams12set_verticalEii(void);

/* Symbol: _ZN9tesseract10ColSegment8set_typeEv */
/* Demangled: tesseract::ColSegment::set_type() */
int _ZN9tesseract10ColSegment8set_typeEv(void);

/* Symbol: _ZN13GenericVectorI6STRINGE5clearEv */
/* Demangled: GenericVector<STRING>::clear() */
int _ZN13GenericVectorI6STRINGE5clearEv(void);

/* Symbol: _ZN9tesseract9Tesseract14check_debug_ptEP8WERD_RESi */
/* Demangled: tesseract::Tesseract::check_debug_pt(WERD_RES*, int) */
int _ZN9tesseract9Tesseract14check_debug_ptEP8WERD_RESi(void);

/* Symbol: classify_cp_end_pad_medium */
/* Demangled: classify_cp_end_pad_medium */
extern void* classify_cp_end_pad_medium;

/* Symbol: _ZN9tesseract13FeatureHybridD1Ev */
/* Demangled: tesseract::FeatureHybrid::~FeatureHybrid() */
int _ZN9tesseract13FeatureHybridD1Ev(void);

/* Symbol: _ZN9tesseract4Dict17reset_hyphen_varsEb */
/* Demangled: tesseract::Dict::reset_hyphen_vars(bool) */
int _ZN9tesseract4Dict17reset_hyphen_varsEb(void);

/* Symbol: _ZTVN9tesseract12ColumnFinderE */
/* Demangled: vtable for tesseract::ColumnFinder */
extern void* _ZTVN9tesseract12ColumnFinderE;

/* Symbol: _ZN9tesseract7TabFind18VeryDifferentSizesEii */
/* Demangled: tesseract::TabFind::VeryDifferentSizes(int, int) */
int _ZN9tesseract7TabFind18VeryDifferentSizesEii(void);

/* Symbol: __aeabi_memmove8 */
/* Demangled: __aeabi_memmove8 */
int fn___aeabi_memmove8(void) __asm__("__aeabi_memmove8");

/* Symbol: _ZN9tesseract11TessBaseAPI7DumpPGMEPKc */
/* Demangled: tesseract::TessBaseAPI::DumpPGM(char const*) */
int _ZN9tesseract11TessBaseAPI7DumpPGMEPKc(void);

/* Symbol: _ZN9tesseract14ResultIterator32IterateAndAppendUTF8TextlineTextEP6STRING */
/* Demangled: tesseract::ResultIterator::IterateAndAppendUTF8TextlineText(STRING*) */
int _ZN9tesseract14ResultIterator32IterateAndAppendUTF8TextlineTextEP6STRING(void);

/* Symbol: _ZN9tesseract9BitVectoreOERKS0_ */
/* Demangled: tesseract::BitVector::operator^=(tesseract::BitVector const&) */
int _ZN9tesseract9BitVectoreOERKS0_(void);

/* Symbol: _Z10FreeKDTreeP6KDTREE */
/* Demangled: FreeKDTree(KDTREE*) */
int _Z10FreeKDTreeP6KDTREE(void);

/* Symbol: _ZN9tesseract13TessLangModel8OODEdgesEPNS_11CharAltListExxPPNS_11LangModEdgeE */
/* Demangled: tesseract::TessLangModel::OODEdges(tesseract::CharAltList*, long long, long long, tesseract::LangModEdge**) */
int _ZN9tesseract13TessLangModel8OODEdgesEPNS_11CharAltListExxPPNS_11LangModEdgeE(void);

/* Symbol: devanagari_split_debugimage */
/* Demangled: devanagari_split_debugimage */
extern void* devanagari_split_debugimage;

/* Symbol: _ZN9tesseract11TableFinder16ConsecutiveBoxesERK4TBOXS3_ */
/* Demangled: tesseract::TableFinder::ConsecutiveBoxes(TBOX const&, TBOX const&) */
int _ZN9tesseract11TableFinder16ConsecutiveBoxesERK4TBOXS3_(void);

/* Symbol: _ZN9tesseract12ColumnFinder17SetEquationDetectEPNS_18EquationDetectBaseE */
/* Demangled: tesseract::ColumnFinder::SetEquationDetect(tesseract::EquationDetectBase*) */
int _ZN9tesseract12ColumnFinder17SetEquationDetectEPNS_18EquationDetectBaseE(void);

/* Symbol: _ZN9tesseract12ColumnFinder19RangeModalColumnSetEPPiPKiii */
/* Demangled: tesseract::ColumnFinder::RangeModalColumnSet(int**, int const*, int, int) */
int _ZN9tesseract12ColumnFinder19RangeModalColumnSetEPPiPKiii(void);

/* Symbol: _ZN13GenericVectorIN10SortHelperIiE8SortPairIiEEE9push_backES3_ */
/* Demangled: GenericVector<SortHelper<int>::SortPair<int> >::push_back(SortHelper<int>::SortPair<int>) */
int _ZN13GenericVectorIN10SortHelperIiE8SortPairIiEEE9push_backES3_(void);

/* Symbol: _ZN8WERD_RES11GetBlobsGapEi */
/* Demangled: WERD_RES::GetBlobsGap(int) */
int _ZN8WERD_RES11GetBlobsGapEi(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract10BlockGroupEE5clearEv */
/* Demangled: GenericVector<tesseract::BlockGroup*>::clear() */
int _ZN13GenericVectorIPN9tesseract10BlockGroupEE5clearEv(void);

/* Symbol: _ZN9tesseract18LanguageModelState5ClearEv */
/* Demangled: tesseract::LanguageModelState::Clear() */
int _ZN9tesseract18LanguageModelState5ClearEv(void);

/* Symbol: _ZN9tesseract11TessBaseAPI18GetMutableIteratorEv */
/* Demangled: tesseract::TessBaseAPI::GetMutableIterator() */
int _ZN9tesseract11TessBaseAPI18GetMutableIteratorEv(void);

/* Symbol: _Z22remove_nontext_regionsPN9tesseract9TesseractEP10BLOCK_LISTP13TO_BLOCK_LIST */
/* Demangled: remove_nontext_regions(tesseract::Tesseract*, BLOCK_LIST*, TO_BLOCK_LIST*) */
int _Z22remove_nontext_regionsPN9tesseract9TesseractEP10BLOCK_LISTP13TO_BLOCK_LIST(void);

/* Symbol: _ZN9tesseract10ParamUtils16ReadParamsFromFpEP7__sFILExNS_18SetParamConstraintEPNS_13ParamsVectorsE */
/* Demangled: tesseract::ParamUtils::ReadParamsFromFp(__sFILE*, long long, tesseract::SetParamConstraint, tesseract::ParamsVectors*) */
int _ZN9tesseract10ParamUtils16ReadParamsFromFpEP7__sFILExNS_18SetParamConstraintEPNS_13ParamsVectorsE(void);

/* Symbol: _ZNK11WERD_CHOICE11MatrixCoordEi */
/* Demangled: WERD_CHOICE::MatrixCoord(int) const */
int _ZNK11WERD_CHOICE11MatrixCoordEi(void);

/* Symbol: _ZN9tesseract10ShapeTable15ForceFontMergesEii */
/* Demangled: tesseract::ShapeTable::ForceFontMerges(int, int) */
int _ZN9tesseract10ShapeTable15ForceFontMergesEii(void);

/* Symbol: _ZNK10UNICHARSET13id_to_unicharEi */
/* Demangled: UNICHARSET::id_to_unichar(int) const */
int _ZNK10UNICHARSET13id_to_unicharEi(void);

/* Symbol: _ZNK9tesseract14ChoiceIterator10ConfidenceEv */
/* Demangled: tesseract::ChoiceIterator::Confidence() const */
int _ZNK9tesseract14ChoiceIterator10ConfidenceEv(void);

/* Symbol: _ZN9tesseract16TessUnlvRendererC2EPKc */
/* Demangled: tesseract::TessUnlvRenderer::TessUnlvRenderer(char const*) */
int _ZN9tesseract16TessUnlvRendererC2EPKc(void);

/* Symbol: _ZN14IntegerMatcher4InitEPN9tesseract8IntParamE */
/* Demangled: IntegerMatcher::Init(tesseract::IntParam*) */
int _ZN14IntegerMatcher4InitEPN9tesseract8IntParamE(void);

/* Symbol: _ZN13GenericVectorIN9tesseract15UnicharAndFontsEE7reserveEi */
/* Demangled: GenericVector<tesseract::UnicharAndFonts>::reserve(int) */
int _ZN13GenericVectorIN9tesseract15UnicharAndFontsEE7reserveEi(void);

/* Symbol: _ZN9tesseract17WordListLangModel8GetEdgesEPNS_11CharAltListEPNS_11LangModEdgeEPi */
/* Demangled: tesseract::WordListLangModel::GetEdges(tesseract::CharAltList*, tesseract::LangModEdge*, int*) */
int _ZN9tesseract17WordListLangModel8GetEdgesEPNS_11CharAltListEPNS_11LangModEdgeEPi(void);

/* Symbol: _ZN9tesseract9NeuralNet12GetNetOutputIdEEbPKT_iPS2_ */
/* Demangled: bool tesseract::NeuralNet::GetNetOutput<double>(double const*, int, double*) */
int _ZN9tesseract9NeuralNet12GetNetOutputIdEEbPKT_iPS2_(void);

/* Symbol: _ZN9tesseract15TableRecognizer14IsWeakTableRowEPNS_15StructuredTableEi */
/* Demangled: tesseract::TableRecognizer::IsWeakTableRow(tesseract::StructuredTable*, int) */
int _ZN9tesseract15TableRecognizer14IsWeakTableRowEPNS_15StructuredTableEi(void);

/* Symbol: _Z12BLOCK_zapperP10ELIST_LINK */
/* Demangled: BLOCK_zapper(ELIST_LINK*) */
int _Z12BLOCK_zapperP10ELIST_LINK(void);

/* Symbol: TessChoiceIteratorConfidence */
/* Demangled: TessChoiceIteratorConfidence */
int TessChoiceIteratorConfidence(void);

/* Symbol: _ZN9tesseract14EquationDetectD0Ev */
/* Demangled: tesseract::EquationDetect::~EquationDetect() */
int _ZN9tesseract14EquationDetectD0Ev(void);

/* Symbol: _ZN9tesseract8CharSamp8SetLabelENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: tesseract::CharSamp::SetLabel(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN9tesseract8CharSamp8SetLabelENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN9tesseract7Wordrec21chop_overlapping_blobERK13GenericVectorI4TBOXEbP8WERD_RESPi */
/* Demangled: tesseract::Wordrec::chop_overlapping_blob(GenericVector<TBOX> const&, bool, WERD_RES*, int*) */
int _ZN9tesseract7Wordrec21chop_overlapping_blobERK13GenericVectorI4TBOXEbP8WERD_RESPi(void);

/* Symbol: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeGetWords */
/* Demangled: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeGetWords */
int Java_com_googlecode_tesseract_android_TessBaseAPI_nativeGetWords(void);

/* Symbol: _ZN9tesseract9Tesseract34AssignDiacriticsToOverlappingBlobsERK13GenericVectorIP9C_OUTLINEEiP4WERDP11PAGE_RES_ITPS1_IbESC_PS1_IP6C_BLOBE */
/* Demangled: tesseract::Tesseract::AssignDiacriticsToOverlappingBlobs(GenericVector<C_OUTLINE*> const&, int, WERD*, PAGE_RES_IT*, GenericVector<bool>*, GenericVector<bool>*, GenericVector<C_BLOB*>*) */
int _ZN9tesseract9Tesseract34AssignDiacriticsToOverlappingBlobsERK13GenericVectorIP9C_OUTLINEEiP4WERDP11PAGE_RES_ITPS1_IbESC_PS1_IP6C_BLOBE(void);

/* Symbol: _ZN9tesseract16ImageThresholderD0Ev */
/* Demangled: tesseract::ImageThresholder::~ImageThresholder() */
int _ZN9tesseract16ImageThresholderD0Ev(void);

/* Symbol: _Z13MakeDimRandomtP9PROTOTYPEP10PARAM_DESC */
/* Demangled: MakeDimRandom(unsigned short, PROTOTYPE*, PARAM_DESC*) */
int _Z13MakeDimRandomtP9PROTOTYPEP10PARAM_DESC(void);

/* Symbol: _ZN9tesseract9TabVector9FitVectorENS_12TabAlignmentE6ICOORDiiP14BLOBNBOX_CLISTPiS5_ */
/* Demangled: tesseract::TabVector::FitVector(tesseract::TabAlignment, ICOORD, int, int, BLOBNBOX_CLIST*, int*, int*) */
int _ZN9tesseract9TabVector9FitVectorENS_12TabAlignmentE6ICOORDiiP14BLOBNBOX_CLISTPiS5_(void);

/* Symbol: _ZN9tesseract9Tesseract20split_and_recog_wordEP8WERD_RES */
/* Demangled: tesseract::Tesseract::split_and_recog_word(WERD_RES*) */
int _ZN9tesseract9Tesseract20split_and_recog_wordEP8WERD_RES(void);

/* Symbol: _ZNK6DENORM13NormTransformEPKS_RK6FCOORDPS2_ */
/* Demangled: DENORM::NormTransform(DENORM const*, FCOORD const&, FCOORD*) const */
int _ZNK6DENORM13NormTransformEPKS_RK6FCOORDPS2_(void);

/* Symbol: _ZN10UNICHARMAPD1Ev */
/* Demangled: UNICHARMAP::~UNICHARMAP() */
int _ZN10UNICHARMAPD1Ev(void);

/* Symbol: _ZNK13GenericVectorItE9SerializeEP7__sFILE */
/* Demangled: GenericVector<unsigned short>::Serialize(__sFILE*) const */
int _ZNK13GenericVectorItE9SerializeEP7__sFILE(void);

/* Symbol: _ZN9tesseract9Tesseract15ReportFailedBoxEi4TBOXPKcS3_ */
/* Demangled: tesseract::Tesseract::ReportFailedBox(int, TBOX, char const*, char const*) */
int _ZN9tesseract9Tesseract15ReportFailedBoxEi4TBOXPKcS3_(void);

/* Symbol: _ZN9tesseract9Tesseract20SubAndSuperscriptFixEP8WERD_RES */
/* Demangled: tesseract::Tesseract::SubAndSuperscriptFix(WERD_RES*) */
int _ZN9tesseract9Tesseract20SubAndSuperscriptFixEP8WERD_RES(void);

/* Symbol: _ZN13GenericVectorIiED2Ev */
/* Demangled: GenericVector<int>::~GenericVector() */
int _ZN13GenericVectorIiED2Ev(void);

/* Symbol: _ZN9tesseract9ImageDataD2Ev */
/* Demangled: tesseract::ImageData::~ImageData() */
int _ZN9tesseract9ImageDataD2Ev(void);

/* Symbol: _ZN8WERD_RES25ComputeAdaptionThresholdsEffffPf */
/* Demangled: WERD_RES::ComputeAdaptionThresholds(float, float, float, float, float*) */
int _ZN8WERD_RES25ComputeAdaptionThresholdsEffffPf(void);

/* Symbol: _ZN13BLOCK_LINE_IT8get_lineEsRs */
/* Demangled: BLOCK_LINE_IT::get_line(short, short&) */
int _ZN13BLOCK_LINE_IT8get_lineEsRs(void);

/* Symbol: _ZN11WERD_CHOICE19DisplaySegmentationEP5TWERD */
/* Demangled: WERD_CHOICE::DisplaySegmentation(TWERD*) */
int _ZN11WERD_CHOICE19DisplaySegmentationEP5TWERD(void);

/* Symbol: _ZN9tesseract15TessdataManager26TessdataTypeFromFileSuffixEPKcPNS_12TessdataTypeEPb */
/* Demangled: tesseract::TessdataManager::TessdataTypeFromFileSuffix(char const*, tesseract::TessdataType*, bool*) */
int _ZN9tesseract15TessdataManager26TessdataTypeFromFileSuffixEPKcPNS_12TessdataTypeEPb(void);

/* Symbol: _ZN3REJ21setrej_quality_acceptEv */
/* Demangled: REJ::setrej_quality_accept() */
int _ZN3REJ21setrej_quality_acceptEv(void);

/* Symbol: _ZN15ELIST2_ITERATOR15extract_sublistEPS_ */
/* Demangled: ELIST2_ITERATOR::extract_sublist(ELIST2_ITERATOR*) */
int _ZN15ELIST2_ITERATOR15extract_sublistEPS_(void);

/* Symbol: _ZNK7UNICHAR14const_iterator8get_utf8EPc */
/* Demangled: UNICHAR::const_iterator::get_utf8(char*) const */
int _ZNK7UNICHAR14const_iterator8get_utf8EPc(void);

/* Symbol: _Z19cleanup_rows_making6ICOORDP8TO_BLOCKf6FCOORDih */
/* Demangled: cleanup_rows_making(ICOORD, TO_BLOCK*, float, FCOORD, int, unsigned char) */
int _Z19cleanup_rows_making6ICOORDP8TO_BLOCKf6FCOORDih(void);

/* Symbol: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeSetVariable */
/* Demangled: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeSetVariable */
int Java_com_googlecode_tesseract_android_TessBaseAPI_nativeSetVariable(void);

/* Symbol: _ZN9tesseract15TessTsvRenderer15AddImageHandlerEPNS_11TessBaseAPIE */
/* Demangled: tesseract::TessTsvRenderer::AddImageHandler(tesseract::TessBaseAPI*) */
int _ZN9tesseract15TessTsvRenderer15AddImageHandlerEPNS_11TessBaseAPIE(void);

/* Symbol: _ZN9tesseract15ShapeClassifier12DebugDisplayERKNS_14TrainingSampleEP3Pixi */
/* Demangled: tesseract::ShapeClassifier::DebugDisplay(tesseract::TrainingSample const&, Pix*, int) */
int _ZN9tesseract15ShapeClassifier12DebugDisplayERKNS_14TrainingSampleEP3Pixi(void);

/* Symbol: _ZNK12BlamerBundle15ChoiceIsCorrectEPK11WERD_CHOICE */
/* Demangled: BlamerBundle::ChoiceIsCorrect(WERD_CHOICE const*) const */
int _ZNK12BlamerBundle15ChoiceIsCorrectEPK11WERD_CHOICE(void);

/* Symbol: _ZNK9tesseract14ResultIterator12LTRWordIndexEv */
/* Demangled: tesseract::ResultIterator::LTRWordIndex() const */
int _ZNK9tesseract14ResultIterator12LTRWordIndexEv(void);

/* Symbol: _ZN6STRING11DeSerializeEbP7__sFILE */
/* Demangled: STRING::DeSerialize(bool, __sFILE*) */
int _ZN6STRING11DeSerializeEbP7__sFILE(void);

/* Symbol: _ZN9tesseract15ColPartitionSet16ColumnContainingEii */
/* Demangled: tesseract::ColPartitionSet::ColumnContaining(int, int) */
int _ZN9tesseract15ColPartitionSet16ColumnContainingEii(void);

/* Symbol: _ZN9tesseract11StrokeWidth12FixBrokenCJKEP8TO_BLOCK */
/* Demangled: tesseract::StrokeWidth::FixBrokenCJK(TO_BLOCK*) */
int _ZN9tesseract11StrokeWidth12FixBrokenCJKEP8TO_BLOCK(void);

/* Symbol: _ZN9tesseract7Textord22find_mean_blob_spacingEP4WERD */
/* Demangled: tesseract::Textord::find_mean_blob_spacing(WERD*) */
int _ZN9tesseract7Textord22find_mean_blob_spacingEP4WERD(void);

/* Symbol: _ZN9tesseract11TessBaseAPI11ProcessPageEP3PixiPKcS4_iPNS_18TessResultRendererE */
/* Demangled: tesseract::TessBaseAPI::ProcessPage(Pix*, int, char const*, char const*, int, tesseract::TessResultRenderer*) */
int _ZN9tesseract11TessBaseAPI11ProcessPageEP3PixiPKcS4_iPNS_18TessResultRendererE(void);

/* Symbol: _ZN9tesseract11TessBaseAPI20ClearPersistentCacheEv */
/* Demangled: tesseract::TessBaseAPI::ClearPersistentCache() */
int _ZN9tesseract11TessBaseAPI20ClearPersistentCacheEv(void);

/* Symbol: _ZN9tesseract12PageIterator16RestartParagraphEv */
/* Demangled: tesseract::PageIterator::RestartParagraph() */
int _ZN9tesseract12PageIterator16RestartParagraphEv(void);

/* Symbol: _ZN9tesseract12PageIteratorC1ERKS0_ */
/* Demangled: tesseract::PageIterator::PageIterator(tesseract::PageIterator const&) */
int _ZN9tesseract12PageIteratorC1ERKS0_(void);

/* Symbol: _ZNK5SPLIT18UnsplitOutlineListEP5TBLOB */
/* Demangled: SPLIT::UnsplitOutlineList(TBLOB*) const */
int _ZNK5SPLIT18UnsplitOutlineListEP5TBLOB(void);

/* Symbol: _ZN9tesseract7TabFind12FindTabBoxesEid */
/* Demangled: tesseract::TabFind::FindTabBoxes(int, double) */
int _ZN9tesseract7TabFind12FindTabBoxesEid(void);

/* Symbol: _ZN9tesseract9TabVector10AddPartnerEPS0_ */
/* Demangled: tesseract::TabVector::AddPartner(tesseract::TabVector*) */
int _ZN9tesseract9TabVector10AddPartnerEPS0_(void);

/* Symbol: TessDeleteText */
/* Demangled: TessDeleteText */
int TessDeleteText(void);

/* Symbol: _ZN13GenericVectorIP8WERD_RESE20delete_data_pointersEv */
/* Demangled: GenericVector<WERD_RES*>::delete_data_pointers() */
int _ZN13GenericVectorIP8WERD_RESE20delete_data_pointersEv(void);

/* Symbol: _ZN9tesseract10GridSearchINS_12ColPartitionENS_18ColPartition_CLISTENS_17ColPartition_C_ITEE11SetIteratorEv */
/* Demangled: tesseract::GridSearch<tesseract::ColPartition, tesseract::ColPartition_CLIST, tesseract::ColPartition_C_IT>::SetIterator() */
int _ZN9tesseract10GridSearchINS_12ColPartitionENS_18ColPartition_CLISTENS_17ColPartition_C_ITEE11SetIteratorEv(void);

/* Symbol: _ZN9tesseract14EquationDetect19CheckSeedBlobsCountEPNS_12ColPartitionE */
/* Demangled: tesseract::EquationDetect::CheckSeedBlobsCount(tesseract::ColPartition*) */
int _ZN9tesseract14EquationDetect19CheckSeedBlobsCountEPNS_12ColPartitionE(void);

/* Symbol: _ZN9tesseract14ChoiceIteratorC2ERKNS_17LTRResultIteratorE */
/* Demangled: tesseract::ChoiceIterator::ChoiceIterator(tesseract::LTRResultIterator const&) */
int _ZN9tesseract14ChoiceIteratorC2ERKNS_17LTRResultIteratorE(void);

/* Symbol: _ZN13GenericVectorIN9tesseract7RowInfoEE5clearEv */
/* Demangled: GenericVector<tesseract::RowInfo>::clear() */
int _ZN13GenericVectorIN9tesseract7RowInfoEE5clearEv(void);

/* Symbol: _ZNK6DENORM15DenormTransformEPKS_RK6FCOORDPS2_ */
/* Demangled: DENORM::DenormTransform(DENORM const*, FCOORD const&, FCOORD*) const */
int _ZNK6DENORM15DenormTransformEPKS_RK6FCOORDPS2_(void);

/* Symbol: _ZN9tesseract7ConCompC1Ev */
/* Demangled: tesseract::ConComp::ConComp() */
int _ZN9tesseract7ConCompC1Ev(void);

/* Symbol: _ZTVN9tesseract12SquishedDawgE */
/* Demangled: vtable for tesseract::SquishedDawg */
extern void* _ZTVN9tesseract12SquishedDawgE;

/* Symbol: _ZN9tesseract21CharClassifierFactory6CreateERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_PNS_9LangModelEPNS_7CharSetEPNS_12TuningParamsE */
/* Demangled: tesseract::CharClassifierFactory::Create(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, tesseract::LangModel*, tesseract::CharSet*, tesseract::TuningParams*) */
int _ZN9tesseract21CharClassifierFactory6CreateERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_PNS_9LangModelEPNS_7CharSetEPNS_12TuningParamsE(void);

/* Symbol: wordrec_display_splits */
/* Demangled: wordrec_display_splits */
extern void* wordrec_display_splits;

/* Symbol: _ZN9tesseract7CharSet21LoadSupportedCharListEP7__sFILEP10UNICHARSET */
/* Demangled: tesseract::CharSet::LoadSupportedCharList(__sFILE*, UNICHARSET*) */
int _ZN9tesseract7CharSet21LoadSupportedCharListEP7__sFILEP10UNICHARSET(void);

/* Symbol: _Z15WriteTempConfigP7__sFILEP18TEMP_CONFIG_STRUCT */
/* Demangled: WriteTempConfig(__sFILE*, TEMP_CONFIG_STRUCT*) */
int _Z15WriteTempConfigP7__sFILEP18TEMP_CONFIG_STRUCT(void);

/* Symbol: _Z16fit_parallel_lmsfP6TO_ROW */
/* Demangled: fit_parallel_lms(float, TO_ROW*) */
int _Z16fit_parallel_lmsfP6TO_ROW(void);

/* Symbol: _ZN9tesseract7TabFind11CleanupTabsEv */
/* Demangled: tesseract::TabFind::CleanupTabs() */
int _ZN9tesseract7TabFind11CleanupTabsEv(void);

/* Symbol: _ZN9tesseract7TabFindC1EiRK6ICOORDS3_PNS_14TabVector_LISTEiii */
/* Demangled: tesseract::TabFind::TabFind(int, ICOORD const&, ICOORD const&, tesseract::TabVector_LIST*, int, int, int) */
int _ZN9tesseract7TabFindC1EiRK6ICOORDS3_PNS_14TabVector_LISTEiii(void);

/* Symbol: _ZN9tesseract9TesseractD0Ev */
/* Demangled: tesseract::Tesseract::~Tesseract() */
int _ZN9tesseract9TesseractD0Ev(void);

/* Symbol: _ZN10UNICHARSET16kCustomLigaturesE */
/* Demangled: UNICHARSET::kCustomLigatures */
extern void* _ZN10UNICHARSET16kCustomLigaturesE;

/* Symbol: _ZN13GenericVectorIN9tesseract9KDPairIncIiyEEE15double_the_sizeEv */
/* Demangled: GenericVector<tesseract::KDPairInc<int, unsigned long long> >::double_the_size() */
int _ZN13GenericVectorIN9tesseract9KDPairIncIiyEEE15double_the_sizeEv(void);

/* Symbol: _ZN9tesseract11StrokeWidth20OrientationSearchBoxEPNS_12ColPartitionEP4TBOX */
/* Demangled: tesseract::StrokeWidth::OrientationSearchBox(tesseract::ColPartition*, TBOX*) */
int _ZN9tesseract11StrokeWidth20OrientationSearchBoxEPNS_12ColPartitionEP4TBOX(void);

/* Symbol: _Z19compute_block_pitchP8TO_BLOCK6FCOORDih */
/* Demangled: compute_block_pitch(TO_BLOCK*, FCOORD, int, unsigned char) */
int _Z19compute_block_pitchP8TO_BLOCK6FCOORDih(void);

/* Symbol: TessResultIteratorConfidence */
/* Demangled: TessResultIteratorConfidence */
int TessResultIteratorConfidence(void);

/* Symbol: _ZN9tesseract14EquationDetect20MergePartsByLocationEv */
/* Demangled: tesseract::EquationDetect::MergePartsByLocation() */
int _ZN9tesseract14EquationDetect20MergePartsByLocationEv(void);

/* Symbol: _ZN9tesseract15TessdataManager4InitEPKci */
/* Demangled: tesseract::TessdataManager::Init(char const*, int) */
int _ZN9tesseract15TessdataManager4InitEPKci(void);

/* Symbol: _Z13FreePrototypePv */
/* Demangled: FreePrototype(void*) */
int _Z13FreePrototypePv(void);

/* Symbol: textord_fp_min_width */
/* Demangled: textord_fp_min_width */
extern void* textord_fp_min_width;

/* Symbol: _ZN9tesseract4Dict16absolute_garbageERK11WERD_CHOICERK10UNICHARSET */
/* Demangled: tesseract::Dict::absolute_garbage(WERD_CHOICE const&, UNICHARSET const&) */
int _ZN9tesseract4Dict16absolute_garbageERK11WERD_CHOICERK10UNICHARSET(void);

/* Symbol: _ZN9tesseract31textord_tabfind_show_partitionsE */
/* Demangled: tesseract::textord_tabfind_show_partitions */
extern void* _ZN9tesseract31textord_tabfind_show_partitionsE;

/* Symbol: _ZN9tesseract12LMPainPoints17GeneratePainPointEiiNS_16LMPainPointsTypeEfbfP8WERD_RES */
/* Demangled: tesseract::LMPainPoints::GeneratePainPoint(int, int, tesseract::LMPainPointsType, float, bool, float, WERD_RES*) */
int _ZN9tesseract12LMPainPoints17GeneratePainPointEiiNS_16LMPainPointsTypeEfbfP8WERD_RES(void);

/* Symbol: TessBaseAPIGetWords */
/* Demangled: TessBaseAPIGetWords */
int TessBaseAPIGetWords(void);

/* Symbol: _Z19MultipleCharSamplesP9CLUSTERERP6samplef */
/* Demangled: MultipleCharSamples(CLUSTERER*, sample*, float) */
int _Z19MultipleCharSamplesP9CLUSTERERP6samplef(void);

/* Symbol: _ZN9tesseract10CubeObject9NormalizeEv */
/* Demangled: tesseract::CubeObject::Normalize() */
int _ZN9tesseract10CubeObject9NormalizeEv(void);

/* Symbol: _ZN6STRING14add_str_doubleEPKcd */
/* Demangled: STRING::add_str_double(char const*, double) */
int _ZN6STRING14add_str_doubleEPKcd(void);

/* Symbol: _ZNK4TBOX12almost_equalERKS_i */
/* Demangled: TBOX::almost_equal(TBOX const&, int) const */
int _ZNK4TBOX12almost_equalERKS_i(void);

/* Symbol: _ZN9tesseract9Tesseract11AutoPageSegENS_11PageSegModeEP10BLOCK_LISTP13TO_BLOCK_LISTP13BLOBNBOX_LISTPS0_P9OSResults */
/* Demangled: tesseract::Tesseract::AutoPageSeg(tesseract::PageSegMode, BLOCK_LIST*, TO_BLOCK_LIST*, BLOBNBOX_LIST*, tesseract::Tesseract*, OSResults*) */
int _ZN9tesseract9Tesseract11AutoPageSegENS_11PageSegModeEP10BLOCK_LISTP13TO_BLOCK_LISTP13BLOBNBOX_LISTPS0_P9OSResults(void);

/* Symbol: _ZN9tesseract7BoxWord9DeleteBoxEi */
/* Demangled: tesseract::BoxWord::DeleteBox(int) */
int _ZN9tesseract7BoxWord9DeleteBoxEi(void);

/* Symbol: _Z13FreeBitVectorPj */
/* Demangled: FreeBitVector(unsigned int*) */
int _Z13FreeBitVectorPj(void);

/* Symbol: _ZNK13GenericVectorIN9tesseract7FontSetEE5writeEP7__sFILEP19TessResultCallback2IbS4_RKS1_E */
/* Demangled: GenericVector<tesseract::FontSet>::write(__sFILE*, TessResultCallback2<bool, __sFILE*, tesseract::FontSet const&>*) const */
int _ZNK13GenericVectorIN9tesseract7FontSetEE5writeEP7__sFILEP19TessResultCallback2IbS4_RKS1_E(void);

/* Symbol: _Z20CharNormalizeOutlineP8list_recRK6DENORM */
/* Demangled: CharNormalizeOutline(list_rec*, DENORM const&) */
int _Z20CharNormalizeOutlineP8list_recRK6DENORM(void);

/* Symbol: _ZN9tesseract4Trie17reduce_node_inputExPb */
/* Demangled: tesseract::Trie::reduce_node_input(long long, bool*) */
int _ZN9tesseract4Trie17reduce_node_inputExPb(void);

/* Symbol: _ZNK9tesseract12ColPartition12SizesSimilarERKS0_ */
/* Demangled: tesseract::ColPartition::SizesSimilar(tesseract::ColPartition const&) const */
int _ZNK9tesseract12ColPartition12SizesSimilarERKS0_(void);

/* Symbol: _ZN6REJMAP12accept_countEv */
/* Demangled: REJMAP::accept_count() */
int _ZN6REJMAP12accept_countEv(void);

/* Symbol: _ZN13GenericVectorIP5TBLOBE15double_the_sizeEv */
/* Demangled: GenericVector<TBLOB*>::double_the_size() */
int _ZN13GenericVectorIP5TBLOBE15double_the_sizeEv(void);

/* Symbol: _ZN9tesseract10DetLineFit3FitEPfS1_ */
/* Demangled: tesseract::DetLineFit::Fit(float*, float*) */
int _ZN9tesseract10DetLineFit3FitEPfS1_(void);

/* Symbol: _Z15DistanceSquarediP10PARAM_DESCPfS1_ */
/* Demangled: DistanceSquared(int, PARAM_DESC*, float*, float*) */
int _Z15DistanceSquarediP10PARAM_DESCPfS1_(void);

/* Symbol: _ZN9tesseract10GridSearchINS_11WordWithBoxENS_17WordWithBox_CLISTENS_16WordWithBox_C_ITEE11CommonStartEii */
/* Demangled: tesseract::GridSearch<tesseract::WordWithBox, tesseract::WordWithBox_CLIST, tesseract::WordWithBox_C_IT>::CommonStart(int, int) */
int _ZN9tesseract10GridSearchINS_11WordWithBoxENS_17WordWithBox_CLISTENS_16WordWithBox_C_ITEE11CommonStartEii(void);

/* Symbol: _ZN9tesseract4precEd */
/* Demangled: tesseract::prec(double) */
int _ZN9tesseract4precEd(void);

/* Symbol: _ZN5TBLOB20ComputeBoundingBoxesEv */
/* Demangled: TBLOB::ComputeBoundingBoxes() */
int _ZN5TBLOB20ComputeBoundingBoxesEv(void);

/* Symbol: _ZNK4LLSQ1mEv */
/* Demangled: LLSQ::m() const */
int _ZNK4LLSQ1mEv(void);

/* Symbol: _ZN9tesseract13ValidBodyLineEPK13GenericVectorINS_19RowScratchRegistersEEiPK14ParagraphModel */
/* Demangled: tesseract::ValidBodyLine(GenericVector<tesseract::RowScratchRegisters> const*, int, ParagraphModel const*) */
int _ZN9tesseract13ValidBodyLineEPK13GenericVectorINS_19RowScratchRegistersEEiPK14ParagraphModel(void);

/* Symbol: _ZN9tesseract14SampleIterator4InitEPKNS_12IndexMapBiDiEPKNS_10ShapeTableEbPNS_17TrainingSampleSetE */
/* Demangled: tesseract::SampleIterator::Init(tesseract::IndexMapBiDi const*, tesseract::ShapeTable const*, bool, tesseract::TrainingSampleSet*) */
int _ZN9tesseract14SampleIterator4InitEPKNS_12IndexMapBiDiEPKNS_10ShapeTableEbPNS_17TrainingSampleSetE(void);

/* Symbol: _ZN9tesseract14CubeLineObject25ComputeWordBreakThresholdEiPPNS_7ConCompEb */
/* Demangled: tesseract::CubeLineObject::ComputeWordBreakThreshold(int, tesseract::ConComp**, bool) */
int _ZN9tesseract14CubeLineObject25ComputeWordBreakThresholdEiPPNS_7ConCompEb(void);

/* Symbol: _ZN9tesseract11TableFinder21AdjustTableBoundariesEv */
/* Demangled: tesseract::TableFinder::AdjustTableBoundaries() */
int _ZN9tesseract11TableFinder21AdjustTableBoundariesEv(void);

/* Symbol: _ZN9C_OUTLINEaSERKS_ */
/* Demangled: C_OUTLINE::operator=(C_OUTLINE const&) */
int _ZN9C_OUTLINEaSERKS_(void);

/* Symbol: _ZNK9tesseract17LTRResultIterator14HasTruthStringEv */
/* Demangled: tesseract::LTRResultIterator::HasTruthString() const */
int _ZNK9tesseract17LTRResultIterator14HasTruthStringEv(void);

/* Symbol: _ZN8BLOBNBOX4chopEP11BLOBNBOX_ITS1_6FCOORDf */
/* Demangled: BLOBNBOX::chop(BLOBNBOX_IT*, BLOBNBOX_IT*, FCOORD, float) */
int _ZN8BLOBNBOX4chopEP11BLOBNBOX_ITS1_6FCOORDf(void);

/* Symbol: _ZN6TPOINT9IsCrossedERKS_S1_S1_S1_ */
/* Demangled: TPOINT::IsCrossed(TPOINT const&, TPOINT const&, TPOINT const&, TPOINT const&) */
int _ZN6TPOINT9IsCrossedERKS_S1_S1_S1_(void);

/* Symbol: _ZN9tesseract7Textord31TransferDiacriticsToBlockGroupsEP13BLOBNBOX_LISTP10BLOCK_LIST */
/* Demangled: tesseract::Textord::TransferDiacriticsToBlockGroups(BLOBNBOX_LIST*, BLOCK_LIST*) */
int _ZN9tesseract7Textord31TransferDiacriticsToBlockGroupsEP13BLOBNBOX_LISTP10BLOCK_LIST(void);

/* Symbol: _ZN9tesseract11TessBaseAPI14SetPageSegModeENS_11PageSegModeE */
/* Demangled: tesseract::TessBaseAPI::SetPageSegMode(tesseract::PageSegMode) */
int _ZN9tesseract11TessBaseAPI14SetPageSegModeENS_11PageSegModeE(void);

/* Symbol: _ZN9tesseract18ShiroRekhaSplitter12set_orig_pixEP3Pix */
/* Demangled: tesseract::ShiroRekhaSplitter::set_orig_pix(Pix*) */
int _ZN9tesseract18ShiroRekhaSplitter12set_orig_pixEP3Pix(void);

/* Symbol: _ZNK4TBOX12intersectionERKS_ */
/* Demangled: TBOX::intersection(TBOX const&) const */
int _ZNK4TBOX12intersectionERKS_(void);

/* Symbol: _ZN9tesseract15TessOsdRenderer15AddImageHandlerEPNS_11TessBaseAPIE */
/* Demangled: tesseract::TessOsdRenderer::AddImageHandler(tesseract::TessBaseAPI*) */
int _ZN9tesseract15TessOsdRenderer15AddImageHandlerEPNS_11TessBaseAPIE(void);

/* Symbol: _ZN5ELIST19add_sorted_and_findEPFiPKvS1_EbP10ELIST_LINK */
/* Demangled: ELIST::add_sorted_and_find(int (*)(void const*, void const*), bool, ELIST_LINK*) */
int _ZN5ELIST19add_sorted_and_findEPFiPKvS1_EbP10ELIST_LINK(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract5ShapeEE7reserveEi */
/* Demangled: GenericVector<tesseract::Shape*>::reserve(int) */
int _ZN13GenericVectorIPN9tesseract5ShapeEE7reserveEi(void);

/* Symbol: _ZN9tesseract12ColPartition10BiggestBoxEv */
/* Demangled: tesseract::ColPartition::BiggestBox() */
int _ZN9tesseract12ColPartition10BiggestBoxEv(void);

/* Symbol: _ZN9tesseract33textord_tabfind_only_strokewidthsE */
/* Demangled: tesseract::textord_tabfind_only_strokewidths */
extern void* _ZN9tesseract33textord_tabfind_only_strokewidthsE;

/* Symbol: textord_show_row_cuts */
/* Demangled: textord_show_row_cuts */
extern void* textord_show_row_cuts;

/* Symbol: _Z15WriteProtoStyleP7__sFILE10PROTOSTYLE */
/* Demangled: WriteProtoStyle(__sFILE*, PROTOSTYLE) */
int _Z15WriteProtoStyleP7__sFILE10PROTOSTYLE(void);

/* Symbol: _ZNK9tesseract17TrainingSampleSet9SerializeEP7__sFILE */
/* Demangled: tesseract::TrainingSampleSet::Serialize(__sFILE*) const */
int _ZNK9tesseract17TrainingSampleSet9SerializeEP7__sFILE(void);

/* Symbol: _ZN9tesseract7Wordrec17attempt_blob_chopEP5TWERDP5TBLOBibRK13GenericVectorIP4SEAME */
/* Demangled: tesseract::Wordrec::attempt_blob_chop(TWERD*, TBLOB*, int, bool, GenericVector<SEAM*> const&) */
int _ZN9tesseract7Wordrec17attempt_blob_chopEP5TWERDP5TBLOBibRK13GenericVectorIP4SEAME(void);

/* Symbol: _ZN9tesseract14EquationDetect17FindEquationPartsEPNS_16ColPartitionGridEPPNS_15ColPartitionSetE */
/* Demangled: tesseract::EquationDetect::FindEquationParts(tesseract::ColPartitionGrid*, tesseract::ColPartitionSet**) */
int _ZN9tesseract14EquationDetect17FindEquationPartsEPNS_16ColPartitionGridEPPNS_15ColPartitionSetE(void);

/* Symbol: _ZN13GenericVectorIN9tesseract7RowInfoEE7reserveEi */
/* Demangled: GenericVector<tesseract::RowInfo>::reserve(int) */
int _ZN13GenericVectorIN9tesseract7RowInfoEE7reserveEi(void);

/* Symbol: _ZN9tesseract12ColumnFinder17SetPartitionTypesEv */
/* Demangled: tesseract::ColumnFinder::SetPartitionTypes() */
int _ZN9tesseract12ColumnFinder17SetPartitionTypesEv(void);

/* Symbol: _ZN6GAPMAPC1EP8TO_BLOCK */
/* Demangled: GAPMAP::GAPMAP(TO_BLOCK*) */
int _ZN6GAPMAPC1EP8TO_BLOCK(void);

/* Symbol: _ZN9C_OUTLINE10chain_stepEi */
/* Demangled: C_OUTLINE::chain_step(int) */
int _ZN9C_OUTLINE10chain_stepEi(void);

/* Symbol: _ZN9tesseract21TesseractCubeCombiner15NormalizeStringERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbb */
/* Demangled: tesseract::TesseractCubeCombiner::NormalizeString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN9tesseract21TesseractCubeCombiner15NormalizeStringERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbb(void);

/* Symbol: kMicroFeatureType */
/* Demangled: kMicroFeatureType */
extern void* kMicroFeatureType;

/* Symbol: classify_max_slope */
/* Demangled: classify_max_slope */
extern void* classify_max_slope;

/* Symbol: _ZN9tesseract10CubeObject15RecognizePhraseEPNS_9LangModelE */
/* Demangled: tesseract::CubeObject::RecognizePhrase(tesseract::LangModel*) */
int _ZN9tesseract10CubeObject15RecognizePhraseEPNS_9LangModelE(void);

/* Symbol: _Z14ExtractIntFeatRK5TBLOBbP18INT_FEATURE_STRUCTS3_P20INT_FX_RESULT_STRUCT */
/* Demangled: ExtractIntFeat(TBLOB const&, bool, INT_FEATURE_STRUCT*, INT_FEATURE_STRUCT*, INT_FX_RESULT_STRUCT*) */
int _Z14ExtractIntFeatRK5TBLOBbP18INT_FEATURE_STRUCTS3_P20INT_FX_RESULT_STRUCT(void);

/* Symbol: _ZN9tesseract12ColumnFinderC2EiRK6ICOORDS3_ibdPNS_14TabVector_LISTES5_ii */
/* Demangled: tesseract::ColumnFinder::ColumnFinder(int, ICOORD const&, ICOORD const&, int, bool, double, tesseract::TabVector_LIST*, tesseract::TabVector_LIST*, int, int) */
int _ZN9tesseract12ColumnFinderC2EiRK6ICOORDS3_ibdPNS_14TabVector_LISTES5_ii(void);

/* Symbol: textord_words_definite_spread */
/* Demangled: textord_words_definite_spread */
extern void* textord_words_definite_spread;

/* Symbol: _Z12ReadAllBoxesibRK6STRINGP13GenericVectorI4TBOXEPS2_IS_ES7_PS2_IiE */
/* Demangled: ReadAllBoxes(int, bool, STRING const&, GenericVector<TBOX>*, GenericVector<STRING>*, GenericVector<STRING>*, GenericVector<int>*) */
int _Z12ReadAllBoxesibRK6STRINGP13GenericVectorI4TBOXEPS2_IS_ES7_PS2_IiE(void);

/* Symbol: _ZN13GenericVectorIN9tesseract14LineHypothesisEE7reserveEi */
/* Demangled: GenericVector<tesseract::LineHypothesis>::reserve(int) */
int _ZN13GenericVectorIN9tesseract14LineHypothesisEE7reserveEi(void);

/* Symbol: _ZN9tesseract14CubeLineObjectC2EPNS_15CubeRecoContextEP3Pix */
/* Demangled: tesseract::CubeLineObject::CubeLineObject(tesseract::CubeRecoContext*, Pix*) */
int _ZN9tesseract14CubeLineObjectC2EPNS_15CubeRecoContextEP3Pix(void);

/* Symbol: _Z20most_overlapping_rowP9TO_ROW_ITRP6TO_ROWfffh */
/* Demangled: most_overlapping_row(TO_ROW_IT*, TO_ROW*&, float, float, float, unsigned char) */
int _Z20most_overlapping_rowP9TO_ROW_ITRP6TO_ROWfffh(void);

/* Symbol: _ZN7FPCUTPT12assign_cheapEPS_sshhsP5STATSfsss */
/* Demangled: FPCUTPT::assign_cheap(FPCUTPT*, short, short, unsigned char, unsigned char, short, STATS*, float, short, short, short) */
int _ZN7FPCUTPT12assign_cheapEPS_sshhsP5STATSfsss(void);

/* Symbol: _ZN4TBOXC1Essss */
/* Demangled: TBOX::TBOX(short, short, short, short) */
int _ZN4TBOXC1Essss(void);

/* Symbol: _ZN9tesseract16TESS_CHAR_zapperEP10ELIST_LINK */
/* Demangled: tesseract::TESS_CHAR_zapper(ELIST_LINK*) */
int _ZN9tesseract16TESS_CHAR_zapperEP10ELIST_LINK(void);

/* Symbol: __aeabi_l2d */
/* Demangled: __aeabi_l2d */
int fn___aeabi_l2d(void) __asm__("__aeabi_l2d");

/* Symbol: _ZN7FPSEGPTC2Es */
/* Demangled: FPSEGPT::FPSEGPT(short) */
int _ZN7FPSEGPTC2Es(void);

/* Symbol: _ZN9tesseract21TesseractCubeCombiner15LoadCombinerNetEv */
/* Demangled: tesseract::TesseractCubeCombiner::LoadCombinerNet() */
int _ZN9tesseract21TesseractCubeCombiner15LoadCombinerNetEv(void);

/* Symbol: _ZN5STATS7clusterEfffiPS_ */
/* Demangled: STATS::cluster(float, float, float, int, STATS*) */
int _ZN5STATS7clusterEfffiPS_(void);

/* Symbol: _ZN9tesseract13TessLangModel14IsTrailingPuncEi */
/* Demangled: tesseract::TessLangModel::IsTrailingPunc(int) */
int _ZN9tesseract13TessLangModel14IsTrailingPuncEi(void);

/* Symbol: TessResultRendererNext */
/* Demangled: TessResultRendererNext */
int TessResultRendererNext(void);

/* Symbol: _ZTVN9tesseract21TesseractCubeCombinerE */
/* Demangled: vtable for tesseract::TesseractCubeCombiner */
extern void* _ZTVN9tesseract21TesseractCubeCombinerE;

/* Symbol: _ZN13GenericVectorIiE5clearEv */
/* Demangled: GenericVector<int>::clear() */
int _ZN13GenericVectorIiE5clearEv(void);

/* Symbol: _ZN3REJ22setrej_contains_blanksEv */
/* Demangled: REJ::setrej_contains_blanks() */
int _ZN3REJ22setrej_contains_blanksEv(void);

/* Symbol: _ZN13GenericVectorIP3PixE9push_backES1_ */
/* Demangled: GenericVector<Pix*>::push_back(Pix*) */
int _ZN13GenericVectorIP3PixE9push_backES1_(void);

/* Symbol: _ZN13GenericVectorIN9tesseract9KDPairIncIf12MATRIX_COORDEEE9push_backES3_ */
/* Demangled: GenericVector<tesseract::KDPairInc<float, MATRIX_COORD> >::push_back(tesseract::KDPairInc<float, MATRIX_COORD>) */
int _ZN13GenericVectorIN9tesseract9KDPairIncIf12MATRIX_COORDEEE9push_backES3_(void);

/* Symbol: _ZN9tesseract17TrainingSampleSet14DeleteOutliersERKNS_15IntFeatureSpaceEb */
/* Demangled: tesseract::TrainingSampleSet::DeleteOutliers(tesseract::IntFeatureSpace const&, bool) */
int _ZN9tesseract17TrainingSampleSet14DeleteOutliersERKNS_15IntFeatureSpaceEb(void);

/* Symbol: _ZNK9tesseract4Bmp812FindConCompsEPii */
/* Demangled: tesseract::Bmp8::FindConComps(int*, int) const */
int _ZNK9tesseract4Bmp812FindConCompsEPii(void);

/* Symbol: _ZN9tesseract17CubeLineSegmenter8kHgtBinsE */
/* Demangled: tesseract::CubeLineSegmenter::kHgtBins */
extern void* _ZN9tesseract17CubeLineSegmenter8kHgtBinsE;

/* Symbol: _ZTVN9tesseract16CubeSearchObjectE */
/* Demangled: vtable for tesseract::CubeSearchObject */
extern void* _ZTVN9tesseract16CubeSearchObjectE;

/* Symbol: _ZNSt3__112__hash_tableIPN9tesseract10ColSegmentENS1_7PtrHashIS2_EENS_8equal_toIS3_EENS_9allocatorIS3_EEED2Ev */
/* Demangled: std::__1::__hash_table<tesseract::ColSegment*, tesseract::PtrHash<tesseract::ColSegment>, std::__1::equal_to<tesseract::ColSegment*>, std::__1::allocator<tesseract::ColSegment*> >::~__hash_table() */
int _ZNSt3__112__hash_tableIPN9tesseract10ColSegmentENS1_7PtrHashIS2_EENS_8equal_toIS3_EENS_9allocatorIS3_EEED2Ev(void);

/* Symbol: _ZN9tesseract9TabVector7DisplayEP10ScrollView */
/* Demangled: tesseract::TabVector::Display(ScrollView*) */
int _ZN9tesseract9TabVector7DisplayEP10ScrollView(void);

/* Symbol: _ZN9tesseract7Wordrec12call_matcherEP5TBLOB */
/* Demangled: tesseract::Wordrec::call_matcher(TBLOB*) */
int _ZN9tesseract7Wordrec12call_matcherEP5TBLOB(void);

/* Symbol: _Z9FreeClassP12CLASS_STRUCT */
/* Demangled: FreeClass(CLASS_STRUCT*) */
int _Z9FreeClassP12CLASS_STRUCT(void);

/* Symbol: _ZNK9tesseract18TextlineProjection19ImageXToProjectionXEi */
/* Demangled: tesseract::TextlineProjection::ImageXToProjectionX(int) const */
int _ZNK9tesseract18TextlineProjection19ImageXToProjectionXEi(void);

/* Symbol: _ZN9tesseract9Tesseract16ApplyBoxTrainingERK6STRINGP8PAGE_RES */
/* Demangled: tesseract::Tesseract::ApplyBoxTraining(STRING const&, PAGE_RES*) */
int _ZN9tesseract9Tesseract16ApplyBoxTrainingERK6STRINGP8PAGE_RES(void);

/* Symbol: _ZN9tesseract14CubeClassifierD0Ev */
/* Demangled: tesseract::CubeClassifier::~CubeClassifier() */
int _ZN9tesseract14CubeClassifierD0Ev(void);

/* Symbol: _ZN8TO_BLOCKD1Ev */
/* Demangled: TO_BLOCK::~TO_BLOCK() */
int _ZN8TO_BLOCKD1Ev(void);

/* Symbol: _ZN9tesseract8CCStructD2Ev */
/* Demangled: tesseract::CCStruct::~CCStruct() */
int _ZN9tesseract8CCStructD2Ev(void);

/* Symbol: _ZNK9tesseract12SquishedDawg10print_nodeExi */
/* Demangled: tesseract::SquishedDawg::print_node(long long, int) const */
int _ZNK9tesseract12SquishedDawg10print_nodeExi(void);

/* Symbol: _ZN9tesseract9ImageFind16BoundsWithinRectEP3PixPiS3_S3_S3_ */
/* Demangled: tesseract::ImageFind::BoundsWithinRect(Pix*, int*, int*, int*, int*) */
int _ZN9tesseract9ImageFind16BoundsWithinRectEP3PixPiS3_S3_S3_(void);

/* Symbol: _ZN9tesseract15ColPartitionSetC1EPNS_17ColPartition_LISTE */
/* Demangled: tesseract::ColPartitionSet::ColPartitionSet(tesseract::ColPartition_LIST*) */
int _ZN9tesseract15ColPartitionSetC1EPNS_17ColPartition_LISTE(void);

/* Symbol: _Z13ReadPrototypeP7__sFILEt */
/* Demangled: ReadPrototype(__sFILE*, unsigned short) */
int _Z13ReadPrototypeP7__sFILEt(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract4DawgEE7reserveEi */
/* Demangled: GenericVector<tesseract::Dawg*>::reserve(int) */
int _ZN13GenericVectorIPN9tesseract4DawgEE7reserveEi(void);

/* Symbol: _ZN13GenericVectorIP16TRIE_NODE_RECORDE20delete_data_pointersEv */
/* Demangled: GenericVector<TRIE_NODE_RECORD*>::delete_data_pointers() */
int _ZN13GenericVectorIP16TRIE_NODE_RECORDE20delete_data_pointersEv(void);

/* Symbol: textord_debug_blob */
/* Demangled: textord_debug_blob */
extern void* textord_debug_blob;

/* Symbol: TessBaseAPISetDictFunc */
/* Demangled: TessBaseAPISetDictFunc */
int TessBaseAPISetDictFunc(void);

/* Symbol: _ZN3REJ20setrej_hyphen_acceptEv */
/* Demangled: REJ::setrej_hyphen_accept() */
int _ZN3REJ20setrej_hyphen_acceptEv(void);

/* Symbol: _ZN13BLOCK_RECT_IT7forwardEv */
/* Demangled: BLOCK_RECT_IT::forward() */
int _ZN13BLOCK_RECT_IT7forwardEv(void);

/* Symbol: _Z12is_same_nodePvS_ */
/* Demangled: is_same_node(void*, void*) */
int _Z12is_same_nodePvS_(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract9BoolParamEE7reserveEi */
/* Demangled: GenericVector<tesseract::BoolParam*>::reserve(int) */
int _ZN13GenericVectorIPN9tesseract9BoolParamEE7reserveEi(void);

/* Symbol: _ZN9tesseract16ImageThresholderC1Ev */
/* Demangled: tesseract::ImageThresholder::ImageThresholder() */
int _ZN9tesseract16ImageThresholderC1Ev(void);

/* Symbol: _ZNK9tesseract11TessBaseAPI17GetStringVariableEPKc */
/* Demangled: tesseract::TessBaseAPI::GetStringVariable(char const*) const */
int _ZNK9tesseract11TessBaseAPI17GetStringVariableEPKc(void);

/* Symbol: _ZN12BlamerBundle19SetMisAdaptionDebugEPK11WERD_CHOICEb */
/* Demangled: BlamerBundle::SetMisAdaptionDebug(WERD_CHOICE const*, bool) */
int _ZN12BlamerBundle19SetMisAdaptionDebugEPK11WERD_CHOICEb(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract12DocumentDataEE20delete_data_pointersEv */
/* Demangled: GenericVector<tesseract::DocumentData*>::delete_data_pointers() */
int _ZN13GenericVectorIPN9tesseract12DocumentDataEE20delete_data_pointersEv(void);

/* Symbol: _ZN13GenericVectorIN9tesseract9ShapeDistEE5clearEv */
/* Demangled: GenericVector<tesseract::ShapeDist>::clear() */
int _ZN13GenericVectorIN9tesseract9ShapeDistEE5clearEv(void);

/* Symbol: TessChoiceIteratorDelete */
/* Demangled: TessChoiceIteratorDelete */
int TessChoiceIteratorDelete(void);

/* Symbol: _ZN10UNICHARMAPC2Ev */
/* Demangled: UNICHARMAP::UNICHARMAP() */
int _ZN10UNICHARMAPC2Ev(void);

/* Symbol: _ZN13GenericVectorIbE12init_to_sizeEib */
/* Demangled: GenericVector<bool>::init_to_size(int, bool) */
int _ZN13GenericVectorIbE12init_to_sizeEib(void);

/* Symbol: _ZN4QLSQ3addEdd */
/* Demangled: QLSQ::add(double, double) */
int _ZN4QLSQ3addEdd(void);

/* Symbol: _Z17ComputeStatisticssP10PARAM_DESCP6sample */
/* Demangled: ComputeStatistics(short, PARAM_DESC*, sample*) */
int _Z17ComputeStatisticssP10PARAM_DESCP6sample(void);

/* Symbol: _ZN9tesseract5Shape15IsEqualUnicharsEPS0_ */
/* Demangled: tesseract::Shape::IsEqualUnichars(tesseract::Shape*) */
int _ZN9tesseract5Shape15IsEqualUnicharsEPS0_(void);

/* Symbol: _ZN9tesseract4DictC1EPNS_6CCUtilE */
/* Demangled: tesseract::Dict::Dict(tesseract::CCUtil*) */
int _ZN9tesseract4DictC1EPNS_6CCUtilE(void);

/* Symbol: _ZN9tesseract11AlignedBlob16debug_pix_index_E */
/* Demangled: tesseract::AlignedBlob::debug_pix_index_ */
extern void* _ZN9tesseract11AlignedBlob16debug_pix_index_E;

/* Symbol: _ZN8WERD_RES9SetupFakeERK10UNICHARSET */
/* Demangled: WERD_RES::SetupFake(UNICHARSET const&) */
int _ZN8WERD_RES9SetupFakeERK10UNICHARSET(void);

/* Symbol: _ZNSt3__114__split_bufferIPNS_6vectorIfNS_9allocatorIfEEEERNS2_IS5_EEED2Ev */
/* Demangled: std::__1::__split_buffer<std::__1::vector<float, std::__1::allocator<float> >*, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> >*>&>::~__split_buffer() */
int _ZNSt3__114__split_bufferIPNS_6vectorIfNS_9allocatorIfEEEERNS2_IS5_EEED2Ev(void);

/* Symbol: _Z19correct_row_xheightP6TO_ROWfff */
/* Demangled: correct_row_xheight(TO_ROW*, float, float, float) */
int _Z19correct_row_xheightP6TO_ROWfff(void);

/* Symbol: _ZN9tesseract7TabFind16SetBlobRuleEdgesEP13BLOBNBOX_LIST */
/* Demangled: tesseract::TabFind::SetBlobRuleEdges(BLOBNBOX_LIST*) */
int _ZN9tesseract7TabFind16SetBlobRuleEdgesEP13BLOBNBOX_LIST(void);

/* Symbol: _ZNSt3__112__hash_tableIPN9tesseract11WordWithBoxENS1_7PtrHashIS2_EENS_8equal_toIS3_EENS_9allocatorIS3_EEE5clearEv */
/* Demangled: std::__1::__hash_table<tesseract::WordWithBox*, tesseract::PtrHash<tesseract::WordWithBox>, std::__1::equal_to<tesseract::WordWithBox*>, std::__1::allocator<tesseract::WordWithBox*> >::clear() */
int _ZNSt3__112__hash_tableIPN9tesseract11WordWithBoxENS1_7PtrHashIS2_EENS_8equal_toIS3_EENS_9allocatorIS3_EEE5clearEv(void);

/* Symbol: _ZN12BlamerBundle15FinishSegSearchEPK11WERD_CHOICEbP6STRING */
/* Demangled: BlamerBundle::FinishSegSearch(WERD_CHOICE const*, bool, STRING*) */
int _ZN12BlamerBundle15FinishSegSearchEPK11WERD_CHOICEbP6STRING(void);

/* Symbol: _ZN13GenericVectorItE11DeSerializeEbP7__sFILE */
/* Demangled: GenericVector<unsigned short>::DeSerialize(bool, __sFILE*) */
int _ZN13GenericVectorItE11DeSerializeEbP7__sFILE(void);

/* Symbol: _ZNK9tesseract9TabVector11ShallowCopyEv */
/* Demangled: tesseract::TabVector::ShallowCopy() const */
int _ZNK9tesseract9TabVector11ShallowCopyEv(void);

/* Symbol: _ZN9tesseract11TessBaseAPI18InitForAnalysePageEv */
/* Demangled: tesseract::TessBaseAPI::InitForAnalysePage() */
int _ZN9tesseract11TessBaseAPI18InitForAnalysePageEv(void);

/* Symbol: _Z12divide_blobsP5TBLOBS0_bRK6TPOINT */
/* Demangled: divide_blobs(TBLOB*, TBLOB*, bool, TPOINT const&) */
int _Z12divide_blobsP5TBLOBS0_bRK6TPOINT(void);

/* Symbol: _ZNK11BLOB_CHOICE15PosAndSizeAgreeERKS_fb */
/* Demangled: BLOB_CHOICE::PosAndSizeAgree(BLOB_CHOICE const&, float, bool) const */
int _ZNK11BLOB_CHOICE15PosAndSizeAgreeERKS_fb(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract5ShapeEE9push_backES2_ */
/* Demangled: GenericVector<tesseract::Shape*>::push_back(tesseract::Shape*) */
int _ZN13GenericVectorIPN9tesseract5ShapeEE9push_backES2_(void);

/* Symbol: textord_show_initial_rows */
/* Demangled: textord_show_initial_rows */
extern void* textord_show_initial_rows;

/* Symbol: _ZN9tesseract14EquationDetectC1EPKcS2_ */
/* Demangled: tesseract::EquationDetect::EquationDetect(char const*, char const*) */
int _ZN9tesseract14EquationDetectC1EPKcS2_(void);

/* Symbol: _ZN9tesseract5TFile4OpenERK6STRINGPFbS3_P13GenericVectorIcEE */
/* Demangled: tesseract::TFile::Open(STRING const&, bool (*)(STRING const&, GenericVector<char>*)) */
int _ZN9tesseract5TFile4OpenERK6STRINGPFbS3_P13GenericVectorIcEE(void);

/* Symbol: _ZNK4SEAM5PrintEPKc */
/* Demangled: SEAM::Print(char const*) const */
int _ZNK4SEAM5PrintEPKc(void);

/* Symbol: _ZTVN9tesseract14TessClassifierE */
/* Demangled: vtable for tesseract::TessClassifier */
extern void* _ZTVN9tesseract14TessClassifierE;

/* Symbol: _ZNK9tesseract9Tesseract21BelievableSuperscriptEbRK8WERD_RESfPiS4_ */
/* Demangled: tesseract::Tesseract::BelievableSuperscript(bool, WERD_RES const&, float, int*, int*) const */
int _ZNK9tesseract9Tesseract21BelievableSuperscriptEbRK8WERD_RESfPiS4_(void);

/* Symbol: _Z16ReadAdaptedClassP7__sFILE */
/* Demangled: ReadAdaptedClass(__sFILE*) */
int _Z16ReadAdaptedClassP7__sFILE(void);

/* Symbol: _ZN9tesseract15StructuredTable18median_cell_heightEv */
/* Demangled: tesseract::StructuredTable::median_cell_height() */
int _ZN9tesseract15StructuredTable18median_cell_heightEv(void);

/* Symbol: _ZN9tesseract9TesseractC1Ev */
/* Demangled: tesseract::Tesseract::Tesseract() */
int _ZN9tesseract9TesseractC1Ev(void);

/* Symbol: _ZN9tesseract11CharBigramsC1Ev */
/* Demangled: tesseract::CharBigrams::CharBigrams() */
int _ZN9tesseract11CharBigramsC1Ev(void);

/* Symbol: _ZN9tesseract12ColPartition19DisownBoxesNoAssertEv */
/* Demangled: tesseract::ColPartition::DisownBoxesNoAssert() */
int _ZN9tesseract12ColPartition19DisownBoxesNoAssertEv(void);

/* Symbol: _ZN9tesseract16TessTextRendererC1EPKc */
/* Demangled: tesseract::TessTextRenderer::TessTextRenderer(char const*) */
int _ZN9tesseract16TessTextRendererC1EPKc(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract14AmbigSpec_LISTEE5clearEv */
/* Demangled: GenericVector<tesseract::AmbigSpec_LIST*>::clear() */
int _ZN13GenericVectorIPN9tesseract14AmbigSpec_LISTEE5clearEv(void);

/* Symbol: words_initial_upper */
/* Demangled: words_initial_upper */
extern void* words_initial_upper;

/* Symbol: _ZN9tesseract20LikelyParagraphStartERKNS_19RowScratchRegistersES2_ */
/* Demangled: tesseract::LikelyParagraphStart(tesseract::RowScratchRegisters const&, tesseract::RowScratchRegisters const&) */
int _ZN9tesseract20LikelyParagraphStartERKNS_19RowScratchRegistersES2_(void);

/* Symbol: _ZN9tesseract21WorkingPartSet_zapperEP10ELIST_LINK */
/* Demangled: tesseract::WorkingPartSet_zapper(ELIST_LINK*) */
int _ZN9tesseract21WorkingPartSet_zapperEP10ELIST_LINK(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract11WordWithBoxEE20delete_data_pointersEv */
/* Demangled: GenericVector<tesseract::WordWithBox*>::delete_data_pointers() */
int _ZN13GenericVectorIPN9tesseract11WordWithBoxEE20delete_data_pointersEv(void);

/* Symbol: _Z15TO_BLOCK_zapperP10ELIST_LINK */
/* Demangled: TO_BLOCK_zapper(ELIST_LINK*) */
int _Z15TO_BLOCK_zapperP10ELIST_LINK(void);

/* Symbol: _Z12streamtoumaxP7__sFILEi */
/* Demangled: streamtoumax(__sFILE*, int) */
int _Z12streamtoumaxP7__sFILEi(void);

/* Symbol: _ZTVN9tesseract10FeatureBmpE */
/* Demangled: vtable for tesseract::FeatureBmp */
extern void* _ZTVN9tesseract10FeatureBmpE;

/* Symbol: _ZN9tesseract8sort_cmpINS_9KDPairIncIiyEEEEiPKvS4_ */
/* Demangled: int tesseract::sort_cmp<tesseract::KDPairInc<int, unsigned long long> >(void const*, void const*) */
int _ZN9tesseract8sort_cmpINS_9KDPairIncIiyEEEEiPKvS4_(void);

/* Symbol: _ZN9tesseract11TableFinder17FilterFalseAlarmsEv */
/* Demangled: tesseract::TableFinder::FilterFalseAlarms() */
int _ZN9tesseract11TableFinder17FilterFalseAlarmsEv(void);

/* Symbol: _ZNK9tesseract18TextlineProjection18HorizontalDistanceEbiii */
/* Demangled: tesseract::TextlineProjection::HorizontalDistance(bool, int, int, int) const */
int _ZNK9tesseract18TextlineProjection18HorizontalDistanceEbiii(void);

/* Symbol: _ZN9tesseract12PageIterator10RestartRowEv */
/* Demangled: tesseract::PageIterator::RestartRow() */
int _ZN9tesseract12PageIterator10RestartRowEv(void);

/* Symbol: _ZN9tesseract9Tesseract20terrible_word_crunchEP8WERD_RES13GARBAGE_LEVEL */
/* Demangled: tesseract::Tesseract::terrible_word_crunch(WERD_RES*, GARBAGE_LEVEL) */
int _ZN9tesseract9Tesseract20terrible_word_crunchEP8WERD_RES13GARBAGE_LEVEL(void);

/* Symbol: _ZN6REJMAP10remove_posEs */
/* Demangled: REJMAP::remove_pos(short) */
int _ZN6REJMAP10remove_posEs(void);

/* Symbol: _ZN9tesseract13IntFeatureMapD1Ev */
/* Demangled: tesseract::IntFeatureMap::~IntFeatureMap() */
int _ZN9tesseract13IntFeatureMapD1Ev(void);

/* Symbol: _ZN9tesseract11ParamsModel12LoadFromFileEPKcS2_ */
/* Demangled: tesseract::ParamsModel::LoadFromFile(char const*, char const*) */
int _ZN9tesseract11ParamsModel12LoadFromFileEPKcS2_(void);

/* Symbol: _ZN9tesseract12ErrorCounter16AccumulateErrorsEbNS_10CountTypesERKNS_13FontInfoTableERK13GenericVectorINS_13UnicharRatingEEPNS_14TrainingSampleE */
/* Demangled: tesseract::ErrorCounter::AccumulateErrors(bool, tesseract::CountTypes, tesseract::FontInfoTable const&, GenericVector<tesseract::UnicharRating> const&, tesseract::TrainingSample*) */
int _ZN9tesseract12ErrorCounter16AccumulateErrorsEbNS_10CountTypesERKNS_13FontInfoTableERK13GenericVectorINS_13UnicharRatingEEPNS_14TrainingSampleE(void);

/* Symbol: _ZN9tesseract7Textord15find_componentsEP3PixP10BLOCK_LISTP13TO_BLOCK_LIST */
/* Demangled: tesseract::Textord::find_components(Pix*, BLOCK_LIST*, TO_BLOCK_LIST*) */
int _ZN9tesseract7Textord15find_componentsEP3PixP10BLOCK_LISTP13TO_BLOCK_LIST(void);

/* Symbol: _ZN9tesseract18LeftWordAttributesEPK10UNICHARSETPK11WERD_CHOICERK6STRINGPbS9_S9_ */
/* Demangled: tesseract::LeftWordAttributes(UNICHARSET const*, WERD_CHOICE const*, STRING const&, bool*, bool*, bool*) */
int _ZN9tesseract18LeftWordAttributesEPK10UNICHARSETPK11WERD_CHOICERK6STRINGPbS9_S9_(void);

/* Symbol: _Z11BoxFileNameRK6STRING */
/* Demangled: BoxFileName(STRING const&) */
int _Z11BoxFileNameRK6STRING(void);

/* Symbol: _ZN3REJ17setrej_mostly_rejEv */
/* Demangled: REJ::setrej_mostly_rej() */
int _ZN3REJ17setrej_mostly_rejEv(void);

/* Symbol: _ZN9tesseract4Bmp815CreateBmpBufferEiih */
/* Demangled: tesseract::Bmp8::CreateBmpBuffer(int, int, unsigned char) */
int _ZN9tesseract4Bmp815CreateBmpBufferEiih(void);

/* Symbol: _ZN6STRINGaSERKS_ */
/* Demangled: STRING::operator=(STRING const&) */
int _ZN6STRINGaSERKS_(void);

/* Symbol: _ZN9tesseract11TessBaseAPI9MakeTBLOBEP3Pix */
/* Demangled: tesseract::TessBaseAPI::MakeTBLOB(Pix*) */
int _ZN9tesseract11TessBaseAPI9MakeTBLOBEP3Pix(void);

/* Symbol: _ZN4WERD12shallow_copyEv */
/* Demangled: WERD::shallow_copy() */
int _ZN4WERD12shallow_copyEv(void);

/* Symbol: _Z12fixspace_dbgP8WERD_RES */
/* Demangled: fixspace_dbg(WERD_RES*) */
int _Z12fixspace_dbgP8WERD_RES(void);

/* Symbol: _ZN8TESSLINE12SetupFromPosEv */
/* Demangled: TESSLINE::SetupFromPos() */
int _ZN8TESSLINE12SetupFromPosEv(void);

/* Symbol: _ZN9tesseract5TFile9OpenWriteEP13GenericVectorIcE */
/* Demangled: tesseract::TFile::OpenWrite(GenericVector<char>*) */
int _ZN9tesseract5TFile9OpenWriteEP13GenericVectorIcE(void);

/* Symbol: _ZN4QLSQ6removeEdd */
/* Demangled: QLSQ::remove(double, double) */
int _ZN4QLSQ6removeEdd(void);

/* Symbol: _ZN3REJ33rej_between_mm_and_quality_acceptEv */
/* Demangled: REJ::rej_between_mm_and_quality_accept() */
int _ZN3REJ33rej_between_mm_and_quality_acceptEv(void);

/* Symbol: _ZNK9tesseract10ShapeTable10CommonFontEii */
/* Demangled: tesseract::ShapeTable::CommonFont(int, int) const */
int _ZNK9tesseract10ShapeTable10CommonFontEii(void);

/* Symbol: _ZN9tesseract12ColPartition10ClaimBoxesEv */
/* Demangled: tesseract::ColPartition::ClaimBoxes() */
int _ZN9tesseract12ColPartition10ClaimBoxesEv(void);

/* Symbol: _ZN3REJ13setrej_hyphenEv */
/* Demangled: REJ::setrej_hyphen() */
int _ZN3REJ13setrej_hyphenEv(void);

/* Symbol: _ZN6DENORM14SetupNonLinearEPKS_RK4TBOXffffRK13GenericVectorIS5_IiEES9_ */
/* Demangled: DENORM::SetupNonLinear(DENORM const*, TBOX const&, float, float, float, float, GenericVector<GenericVector<int> > const&, GenericVector<GenericVector<int> > const&) */
int _ZN6DENORM14SetupNonLinearEPKS_RK4TBOXffffRK13GenericVectorIS5_IiEES9_(void);

/* Symbol: _ZN9tesseract13UnicharRating22FirstResultWithUnicharERK13GenericVectorIS0_Ei */
/* Demangled: tesseract::UnicharRating::FirstResultWithUnichar(GenericVector<tesseract::UnicharRating> const&, int) */
int _ZN9tesseract13UnicharRating22FirstResultWithUnicharERK13GenericVectorIS0_Ei(void);

/* Symbol: _ZNK9tesseract4Dict17init_active_dawgsEPNS_18DawgPositionVectorEb */
/* Demangled: tesseract::Dict::init_active_dawgs(tesseract::DawgPositionVector*, bool) const */
int _ZNK9tesseract4Dict17init_active_dawgsEPNS_18DawgPositionVectorEb(void);

/* Symbol: _ZN9tesseract16ColPartitionGrid25ExtractPartitionsAsBlocksEP10BLOCK_LISTP13TO_BLOCK_LIST */
/* Demangled: tesseract::ColPartitionGrid::ExtractPartitionsAsBlocks(BLOCK_LIST*, TO_BLOCK_LIST*) */
int _ZN9tesseract16ColPartitionGrid25ExtractPartitionsAsBlocksEP10BLOCK_LISTP13TO_BLOCK_LIST(void);

/* Symbol: _ZN9tesseract21FirstWordWouldHaveFitERKNS_19RowScratchRegistersES2_NS_22ParagraphJustificationE */
/* Demangled: tesseract::FirstWordWouldHaveFit(tesseract::RowScratchRegisters const&, tesseract::RowScratchRegisters const&, tesseract::ParagraphJustification) */
int _ZN9tesseract21FirstWordWouldHaveFitERKNS_19RowScratchRegistersES2_NS_22ParagraphJustificationE(void);

/* Symbol: _ZN9tesseract11CharAltListC1EPKNS_7CharSetEi */
/* Demangled: tesseract::CharAltList::CharAltList(tesseract::CharSet const*, int) */
int _ZN9tesseract11CharAltListC1EPKNS_7CharSetEi(void);

/* Symbol: _ZN9tesseract12SearchColumn8BestNodeEv */
/* Demangled: tesseract::SearchColumn::BestNode() */
int _ZN9tesseract12SearchColumn8BestNodeEv(void);

/* Symbol: _ZN9tesseract13LanguageModel13ConstructWordEPNS_17ViterbiStateEntryEP8WERD_RESP13GenericVectorI12DANGERR_INFOEP12BlamerBundlePb */
/* Demangled: tesseract::LanguageModel::ConstructWord(tesseract::ViterbiStateEntry*, WERD_RES*, GenericVector<DANGERR_INFO>*, BlamerBundle*, bool*) */
int _ZN9tesseract13LanguageModel13ConstructWordEPNS_17ViterbiStateEntryEP8WERD_RESP13GenericVectorI12DANGERR_INFOEP12BlamerBundlePb(void);

/* Symbol: _ZN9tesseract9Tesseract24break_noisiest_blob_wordER13WERD_RES_LIST */
/* Demangled: tesseract::Tesseract::break_noisiest_blob_word(WERD_RES_LIST&) */
int _ZN9tesseract9Tesseract24break_noisiest_blob_wordER13WERD_RES_LIST(void);

/* Symbol: _ZN9tesseract13UnicharAmbigs17LoadUnicharAmbigsERK10UNICHARSETPNS_5TFileEibPS1_ */
/* Demangled: tesseract::UnicharAmbigs::LoadUnicharAmbigs(UNICHARSET const&, tesseract::TFile*, int, bool, UNICHARSET*) */
int _ZN9tesseract13UnicharAmbigs17LoadUnicharAmbigsERK10UNICHARSETPNS_5TFileEibPS1_(void);

/* Symbol: _ZN9tesseract14CubeLineObjectD1Ev */
/* Demangled: tesseract::CubeLineObject::~CubeLineObject() */
int _ZN9tesseract14CubeLineObjectD1Ev(void);

/* Symbol: _ZNK13GenericVectorIfE4backEv */
/* Demangled: GenericVector<float>::back() const */
int _ZNK13GenericVectorIfE4backEv(void);

/* Symbol: _Z11WERD_zapperP11ELIST2_LINK */
/* Demangled: WERD_zapper(ELIST2_LINK*) */
int _Z11WERD_zapperP11ELIST2_LINK(void);

/* Symbol: TessBaseAPIRecognizeForChopTest */
/* Demangled: TessBaseAPIRecognizeForChopTest */
int TessBaseAPIRecognizeForChopTest(void);

/* Symbol: _ZN13GenericVectorIN9tesseract9ShapeDistEE9push_backES1_ */
/* Demangled: GenericVector<tesseract::ShapeDist>::push_back(tesseract::ShapeDist) */
int _ZN13GenericVectorIN9tesseract9ShapeDistEE9push_backES1_(void);

/* Symbol: _ZN9tesseract18TextlineProjection12ProjectBlobsEP13BLOBNBOX_LISTRK6FCOORDRK4TBOXP3Pix */
/* Demangled: tesseract::TextlineProjection::ProjectBlobs(BLOBNBOX_LIST*, FCOORD const&, TBOX const&, Pix*) */
int _ZN9tesseract18TextlineProjection12ProjectBlobsEP13BLOBNBOX_LISTRK6FCOORDRK4TBOXP3Pix(void);

/* Symbol: _Z28ExtractBlobsFromSegmentationP10BLOCK_LISTP11C_BLOB_LIST */
/* Demangled: ExtractBlobsFromSegmentation(BLOCK_LIST*, C_BLOB_LIST*) */
int _Z28ExtractBlobsFromSegmentationP10BLOCK_LISTP11C_BLOB_LIST(void);

/* Symbol: _ZN9tesseract8Classify22ComputeCorrectedRatingEbiddiiiiiPKh */
/* Demangled: tesseract::Classify::ComputeCorrectedRating(bool, int, double, double, int, int, int, int, int, unsigned char const*) */
int _ZN9tesseract8Classify22ComputeCorrectedRatingEbiddiiiiiPKh(void);

/* Symbol: _ZN9tesseract12ColPartition21ReleaseNonLeaderBoxesEv */
/* Demangled: tesseract::ColPartition::ReleaseNonLeaderBoxes() */
int _ZN9tesseract12ColPartition21ReleaseNonLeaderBoxesEv(void);

/* Symbol: _ZN4WERD19AddSelectedOutlinesERK13GenericVectorIbERKS0_IP6C_BLOBERKS0_IP9C_OUTLINEEPb */
/* Demangled: WERD::AddSelectedOutlines(GenericVector<bool> const&, GenericVector<C_BLOB*> const&, GenericVector<C_OUTLINE*> const&, bool*) */
int _ZN4WERD19AddSelectedOutlinesERK13GenericVectorIbERKS0_IP6C_BLOBERKS0_IP9C_OUTLINEEPb(void);

/* Symbol: _ZN9tesseract13HistogramRectEP3PixiiiiiPi */
/* Demangled: tesseract::HistogramRect(Pix*, int, int, int, int, int, int*) */
int _ZN9tesseract13HistogramRectEP3PixiiiiiPi(void);

/* Symbol: _ZN9tesseract17CubeLineSegmenterD1Ev */
/* Demangled: tesseract::CubeLineSegmenter::~CubeLineSegmenter() */
int _ZN9tesseract17CubeLineSegmenterD1Ev(void);

/* Symbol: _ZN9tesseract33textord_tabfind_show_strokewidthsE */
/* Demangled: tesseract::textord_tabfind_show_strokewidths */
extern void* _ZN9tesseract33textord_tabfind_show_strokewidthsE;

/* Symbol: _ZN9tesseract15SortRightToLeftI8BLOBNBOXEEiPKvS3_ */
/* Demangled: int tesseract::SortRightToLeft<BLOBNBOX>(void const*, void const*) */
int _ZN9tesseract15SortRightToLeftI8BLOBNBOXEEiPKvS3_(void);

/* Symbol: _ZN9tesseract9Tesseract17PrepareForTessOCREP10BLOCK_LISTPS0_P9OSResults */
/* Demangled: tesseract::Tesseract::PrepareForTessOCR(BLOCK_LIST*, tesseract::Tesseract*, OSResults*) */
int _ZN9tesseract9Tesseract17PrepareForTessOCREP10BLOCK_LISTPS0_P9OSResults(void);

/* Symbol: _ZN9tesseract6Neuron13kSigmoidTableE */
/* Demangled: tesseract::Neuron::kSigmoidTable */
extern void* _ZN9tesseract6Neuron13kSigmoidTableE;

/* Symbol: _ZN9tesseract11TableFinder21InsertCleanPartitionsEPNS_16ColPartitionGridEP8TO_BLOCK */
/* Demangled: tesseract::TableFinder::InsertCleanPartitions(tesseract::ColPartitionGrid*, TO_BLOCK*) */
int _ZN9tesseract11TableFinder21InsertCleanPartitionsEPNS_16ColPartitionGridEP8TO_BLOCK(void);

/* Symbol: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeGetInitLanguagesAsString */
/* Demangled: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeGetInitLanguagesAsString */
int Java_com_googlecode_tesseract_android_TessBaseAPI_nativeGetInitLanguagesAsString(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract12ColPartitionEEpLERKS3_ */
/* Demangled: GenericVector<tesseract::ColPartition*>::operator+=(GenericVector<tesseract::ColPartition*> const&) */
int _ZN13GenericVectorIPN9tesseract12ColPartitionEEpLERKS3_(void);

/* Symbol: _ZNK9tesseract14EquationDetect16CheckSeedDensityEffPKNS_12ColPartitionE */
/* Demangled: tesseract::EquationDetect::CheckSeedDensity(float, float, tesseract::ColPartition const*) const */
int _ZNK9tesseract14EquationDetect16CheckSeedDensityEffPKNS_12ColPartitionE(void);

/* Symbol: _ZN9tesseract17LTRResultIterator21SetParagraphSeparatorEPKc */
/* Demangled: tesseract::LTRResultIterator::SetParagraphSeparator(char const*) */
int _ZN9tesseract17LTRResultIterator21SetParagraphSeparatorEPKc(void);

/* Symbol: _ZNK9tesseract9BitVector10NextSetBitEi */
/* Demangled: tesseract::BitVector::NextSetBit(int) const */
int _ZNK9tesseract9BitVector10NextSetBitEi(void);

/* Symbol: _Z12NewBitVectori */
/* Demangled: NewBitVector(int) */
int _Z12NewBitVectori(void);

/* Symbol: _ZN9tesseract8Classify17NormalizeOutlinesEP8list_recPfS3_ */
/* Demangled: tesseract::Classify::NormalizeOutlines(list_rec*, float*, float*) */
int _ZN9tesseract8Classify17NormalizeOutlinesEP8list_recPfS3_(void);

/* Symbol: _ZN9tesseract29HybridNeuralNetCharClassifier4FoldEv */
/* Demangled: tesseract::HybridNeuralNetCharClassifier::Fold() */
int _ZN9tesseract29HybridNeuralNetCharClassifier4FoldEv(void);

/* Symbol: _ZN13GenericVectorIlE15double_the_sizeEv */
/* Demangled: GenericVector<long>::double_the_size() */
int _ZN13GenericVectorIlE15double_the_sizeEv(void);

/* Symbol: _ZN13GenericVectorIP9C_OUTLINEE5clearEv */
/* Demangled: GenericVector<C_OUTLINE*>::clear() */
int _ZN13GenericVectorIP9C_OUTLINEE5clearEv(void);

/* Symbol: _Z6DoFillP9FILL_SPECP19CLASS_PRUNER_STRUCTjjj */
/* Demangled: DoFill(FILL_SPEC*, CLASS_PRUNER_STRUCT*, unsigned int, unsigned int, unsigned int) */
int _Z6DoFillP9FILL_SPECP19CLASS_PRUNER_STRUCTjjj(void);

/* Symbol: _ZNK9tesseract17TrainingSampleSet17ReliablySeparableEiiiiRKNS_13IntFeatureMapEb */
/* Demangled: tesseract::TrainingSampleSet::ReliablySeparable(int, int, int, int, tesseract::IntFeatureMap const&, bool) const */
int _ZNK9tesseract17TrainingSampleSet17ReliablySeparableEiiiiRKNS_13IntFeatureMapEb(void);

/* Symbol: _ZN9tesseract12IndexMapBiDi5MergeEii */
/* Demangled: tesseract::IndexMapBiDi::Merge(int, int) */
int _ZN9tesseract12IndexMapBiDi5MergeEii(void);

/* Symbol: _ZN9tesseract13BaselineBlockC1EibP8TO_BLOCK */
/* Demangled: tesseract::BaselineBlock::BaselineBlock(int, bool, TO_BLOCK*) */
int _ZN9tesseract13BaselineBlockC1EibP8TO_BLOCK(void);

/* Symbol: _ZN9tesseract12ColPartition22SetSpecialBlobsDensityE19BlobSpecialTextTypef */
/* Demangled: tesseract::ColPartition::SetSpecialBlobsDensity(BlobSpecialTextType, float) */
int _ZN9tesseract12ColPartition22SetSpecialBlobsDensityE19BlobSpecialTextTypef(void);

/* Symbol: _ZN9tesseract9ImageFind19BlankImageInBetweenERK4TBOXS3_S3_RK6FCOORDP3Pix */
/* Demangled: tesseract::ImageFind::BlankImageInBetween(TBOX const&, TBOX const&, TBOX const&, FCOORD const&, Pix*) */
int _ZN9tesseract9ImageFind19BlankImageInBetweenERK4TBOXS3_S3_RK6FCOORDP3Pix(void);

/* Symbol: gapmap_big_gaps */
/* Demangled: gapmap_big_gaps */
extern void* gapmap_big_gaps;

/* Symbol: _Z17count_pitch_statsP6TO_ROWP5STATSS2_ffhhi */
/* Demangled: count_pitch_stats(TO_ROW*, STATS*, STATS*, float, float, unsigned char, unsigned char, int) */
int _Z17count_pitch_statsP6TO_ROWP5STATSS2_ffhhi(void);

/* Symbol: TessBaseAPISetProbabilityInContextFunc */
/* Demangled: TessBaseAPISetProbabilityInContextFunc */
int TessBaseAPISetProbabilityInContextFunc(void);

/* Symbol: _ZN4SEAM13FindBlobWidthERK13GenericVectorIP5TBLOBEib */
/* Demangled: SEAM::FindBlobWidth(GenericVector<TBLOB*> const&, int, bool) */
int _ZN4SEAM13FindBlobWidthERK13GenericVectorIP5TBLOBEib(void);

/* Symbol: _ZNK9OSResults15get_best_scriptEi */
/* Demangled: OSResults::get_best_script(int) const */
int _ZNK9OSResults15get_best_scriptEi(void);

/* Symbol: _ZN9OSResults23update_best_orientationEv */
/* Demangled: OSResults::update_best_orientation() */
int _ZN9OSResults23update_best_orientationEv(void);

/* Symbol: _ZNK9tesseract15ParagraphTheory4FitsEPK13GenericVectorINS_19RowScratchRegistersEEii */
/* Demangled: tesseract::ParagraphTheory::Fits(GenericVector<tesseract::RowScratchRegisters> const*, int, int) const */
int _ZNK9tesseract15ParagraphTheory4FitsEPK13GenericVectorINS_19RowScratchRegistersEEii(void);

/* Symbol: _ZNK9tesseract18TextlineProjection19ImageYToProjectionYEi */
/* Demangled: tesseract::TextlineProjection::ImageYToProjectionY(int) const */
int _ZNK9tesseract18TextlineProjection19ImageYToProjectionYEi(void);

/* Symbol: _ZNK9tesseract9ImageData6GetPixEv */
/* Demangled: tesseract::ImageData::GetPix() const */
int _ZNK9tesseract9ImageData6GetPixEv(void);

/* Symbol: _ZN9tesseract12ColumnFinder31ComputeBlockAndClassifyRotationEP5BLOCK */
/* Demangled: tesseract::ColumnFinder::ComputeBlockAndClassifyRotation(BLOCK*) */
int _ZN9tesseract12ColumnFinder31ComputeBlockAndClassifyRotationEP5BLOCK(void);

/* Symbol: _ZNK9tesseract5Shape10IsSubsetOfERKS0_ */
/* Demangled: tesseract::Shape::IsSubsetOf(tesseract::Shape const&) const */
int _ZNK9tesseract5Shape10IsSubsetOfERKS0_(void);

/* Symbol: _ZN9tesseract7TextordD1Ev */
/* Demangled: tesseract::Textord::~Textord() */
int _ZN9tesseract7TextordD1Ev(void);

/* Symbol: _ZN13CHAR_FRAGMENT17parse_from_stringEPKc */
/* Demangled: CHAR_FRAGMENT::parse_from_string(char const*) */
int _ZN13CHAR_FRAGMENT17parse_from_stringEPKc(void);

/* Symbol: _ZN9tesseract10CubeObjectD2Ev */
/* Demangled: tesseract::CubeObject::~CubeObject() */
int _ZN9tesseract10CubeObjectD2Ev(void);

/* Symbol: _ZN9tesseract15ColPartitionSet4CopyEb */
/* Demangled: tesseract::ColPartitionSet::Copy(bool) */
int _ZN9tesseract15ColPartitionSet4CopyEb(void);

/* Symbol: _ZNK9tesseract16ImageThresholder7IsEmptyEv */
/* Demangled: tesseract::ImageThresholder::IsEmpty() const */
int _ZNK9tesseract16ImageThresholder7IsEmptyEv(void);

/* Symbol: _ZNK5TWERD12bounding_boxEv */
/* Demangled: TWERD::bounding_box() const */
int _ZNK5TWERD12bounding_boxEv(void);

/* Symbol: _ZN11TO_ROW_LIST9deep_copyEPKS_PFP6TO_ROWPKS2_E */
/* Demangled: TO_ROW_LIST::deep_copy(TO_ROW_LIST const*, TO_ROW* (*)(TO_ROW const*)) */
int _ZN11TO_ROW_LIST9deep_copyEPKS_PFP6TO_ROWPKS2_E(void);

/* Symbol: kCNFeatureType */
/* Demangled: kCNFeatureType */
extern void* kCNFeatureType;

/* Symbol: _ZN7FPSEGPTC2EP7FPCUTPT */
/* Demangled: FPSEGPT::FPSEGPT(FPCUTPT*) */
int _ZN7FPSEGPTC2EP7FPCUTPT(void);

/* Symbol: poly_wide_objects_better */
/* Demangled: poly_wide_objects_better */
extern void* poly_wide_objects_better;

/* Symbol: _ZN3ROW19recalc_bounding_boxEv */
/* Demangled: ROW::recalc_bounding_box() */
int _ZN3ROW19recalc_bounding_boxEv(void);

/* Symbol: _Z14MakeMixedProtoP9CLUSTERERP6sampleP10STATISTICSP7BUCKETSd */
/* Demangled: MakeMixedProto(CLUSTERER*, sample*, STATISTICS*, BUCKETS*, double) */
int _Z14MakeMixedProtoP9CLUSTERERP6sampleP10STATISTICSP7BUCKETSd(void);

/* Symbol: _Z9BucketEndifi */
/* Demangled: BucketEnd(int, float, int) */
int _Z9BucketEndifi(void);

/* Symbol: _ZN13GenericVectorIN9tesseract17TrainingSampleSet17FontClassDistanceEEpLERKS3_ */
/* Demangled: GenericVector<tesseract::TrainingSampleSet::FontClassDistance>::operator+=(GenericVector<tesseract::TrainingSampleSet::FontClassDistance> const&) */
int _ZN13GenericVectorIN9tesseract17TrainingSampleSet17FontClassDistanceEEpLERKS3_(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int fn___aeabi_memcpy(void) __asm__("__aeabi_memcpy");

/* Symbol: _ZN9tesseract17LTRResultIterator16SetLineSeparatorEPKc */
/* Demangled: tesseract::LTRResultIterator::SetLineSeparator(char const*) */
int _ZN9tesseract17LTRResultIterator16SetLineSeparatorEPKc(void);

/* Symbol: _ZNK9tesseract14SampleIterator17GetCompactClassIDEv */
/* Demangled: tesseract::SampleIterator::GetCompactClassID() const */
int _ZNK9tesseract14SampleIterator17GetCompactClassIDEv(void);

/* Symbol: _ZN9tesseract6BBGridI8BLOBNBOX14BLOBNBOX_CLIST13BLOBNBOX_C_ITE4InitEiRK6ICOORDS7_ */
/* Demangled: tesseract::BBGrid<BLOBNBOX, BLOBNBOX_CLIST, BLOBNBOX_C_IT>::Init(int, ICOORD const&, ICOORD const&) */
int _ZN9tesseract6BBGridI8BLOBNBOX14BLOBNBOX_CLIST13BLOBNBOX_C_ITE4InitEiRK6ICOORDS7_(void);

/* Symbol: _ZN9tesseract15ColPartitionSetD2Ev */
/* Demangled: tesseract::ColPartitionSet::~ColPartitionSet() */
int _ZN9tesseract15ColPartitionSetD2Ev(void);

/* Symbol: _ZN9tesseract11TessBaseAPI8SetImageEP3Pix */
/* Demangled: tesseract::TessBaseAPI::SetImage(Pix*) */
int _ZN9tesseract11TessBaseAPI8SetImageEP3Pix(void);

/* Symbol: _ZN13GenericVectorIN9tesseract13UnicharRatingEE7reserveEi */
/* Demangled: GenericVector<tesseract::UnicharRating>::reserve(int) */
int _ZN13GenericVectorIN9tesseract13UnicharRatingEE7reserveEi(void);

/* Symbol: _ZN9tesseract15CCNonTextDetectC1EiRK6ICOORDS3_ */
/* Demangled: tesseract::CCNonTextDetect::CCNonTextDetect(int, ICOORD const&, ICOORD const&) */
int _ZN9tesseract15CCNonTextDetectC1EiRK6ICOORDS3_(void);

/* Symbol: _ZNK9tesseract14ResultIterator22CalculateTextlineOrderEbRKNS_17LTRResultIteratorEP13GenericVectorI21StrongScriptDirectionEP17GenericVectorEqEqIiE */
/* Demangled: tesseract::ResultIterator::CalculateTextlineOrder(bool, tesseract::LTRResultIterator const&, GenericVector<StrongScriptDirection>*, GenericVectorEqEq<int>*) const */
int _ZNK9tesseract14ResultIterator22CalculateTextlineOrderEbRKNS_17LTRResultIteratorEP13GenericVectorI21StrongScriptDirectionEP17GenericVectorEqEqIiE(void);

/* Symbol: _ZN12KDTreeSearch9SearchRecEiP6KDNODE */
/* Demangled: KDTreeSearch::SearchRec(int, KDNODE*) */
int _ZN12KDTreeSearch9SearchRecEiP6KDNODE(void);

/* Symbol: _ZN9tesseract17WordListLangModel9AddStringEPKc */
/* Demangled: tesseract::WordListLangModel::AddString(char const*) */
int _ZN9tesseract17WordListLangModel9AddStringEPKc(void);

/* Symbol: _ZN9tesseract16CubeSearchObject16kUseCroppedCharsE */
/* Demangled: tesseract::CubeSearchObject::kUseCroppedChars */
extern void* _ZN9tesseract16CubeSearchObject16kUseCroppedCharsE;

/* Symbol: _ZN9tesseract4Bmp815LoadFromRawDataEPh */
/* Demangled: tesseract::Bmp8::LoadFromRawData(unsigned char*) */
int _ZN9tesseract4Bmp815LoadFromRawDataEPh(void);

/* Symbol: _ZN9tesseract13TessLangModel6FanOutEPNS_11CharAltListEPKNS_4DawgExxPKibPPNS_11LangModEdgeE */
/* Demangled: tesseract::TessLangModel::FanOut(tesseract::CharAltList*, tesseract::Dawg const*, long long, long long, int const*, bool, tesseract::LangModEdge**) */
int _ZN9tesseract13TessLangModel6FanOutEPNS_11CharAltListEPKNS_4DawgExxPKibPPNS_11LangModEdgeE(void);

/* Symbol: _ZN9tesseract9Tesseract21first_alphanum_offsetEPKcS2_ */
/* Demangled: tesseract::Tesseract::first_alphanum_offset(char const*, char const*) */
int _ZN9tesseract9Tesseract21first_alphanum_offsetEPKcS2_(void);

/* Symbol: _ZNK13GenericVectorI6STRINGE16SerializeClassesEPN9tesseract5TFileE */
/* Demangled: GenericVector<STRING>::SerializeClasses(tesseract::TFile*) const */
int _ZNK13GenericVectorI6STRINGE16SerializeClassesEPN9tesseract5TFileE(void);

/* Symbol: _ZN9tesseract13UnicharAmbigs15InsertIntoTableER13GenericVectorIPNS_14AmbigSpec_LISTEEiPiiPKciPNS_9AmbigSpecEP10UNICHARSET */
/* Demangled: tesseract::UnicharAmbigs::InsertIntoTable(GenericVector<tesseract::AmbigSpec_LIST*>&, int, int*, int, char const*, int, tesseract::AmbigSpec*, UNICHARSET*) */
int _ZN9tesseract13UnicharAmbigs15InsertIntoTableER13GenericVectorIPNS_14AmbigSpec_LISTEEiPiiPKciPNS_9AmbigSpecEP10UNICHARSET(void);

/* Symbol: _ZN13GenericVectorIN9tesseract12DawgPositionEE9push_backES1_ */
/* Demangled: GenericVector<tesseract::DawgPosition>::push_back(tesseract::DawgPosition) */
int _ZN13GenericVectorIN9tesseract12DawgPositionEE9push_backES1_(void);

/* Symbol: _ZNK10UNICHARSET13unichar_to_idEPKci */
/* Demangled: UNICHARSET::unichar_to_id(char const*, int) const */
int _ZNK10UNICHARSET13unichar_to_idEPKci(void);

/* Symbol: _ZN9tesseract9Tesseract15count_alphanumsERK11WERD_CHOICE */
/* Demangled: tesseract::Tesseract::count_alphanums(WERD_CHOICE const&) */
int _ZN9tesseract9Tesseract15count_alphanumsERK11WERD_CHOICE(void);

/* Symbol: _ZaNR4TBOXRKS_ */
/* Demangled: operator&=(TBOX&, TBOX const&) */
int _ZaNR4TBOXRKS_(void);

/* Symbol: _ZTV31_TessFunctionResultCallback_0_3ILb0EbP7__sFILEPN9tesseract8FontInfoEbE */
/* Demangled: vtable for _TessFunctionResultCallback_0_3<false, bool, __sFILE*, tesseract::FontInfo*, bool> */
extern void* _ZTV31_TessFunctionResultCallback_0_3ILb0EbP7__sFILEPN9tesseract8FontInfoEbE;

/* Symbol: _ZN9tesseract8CharSamp16FromCharDumpFileEP7__sFILE */
/* Demangled: tesseract::CharSamp::FromCharDumpFile(__sFILE*) */
int _ZN9tesseract8CharSamp16FromCharDumpFileEP7__sFILE(void);

/* Symbol: _ZN9tesseract10GridSearchI8BLOBNBOX14BLOBNBOX_CLIST13BLOBNBOX_C_ITE14NextFullSearchEv */
/* Demangled: tesseract::GridSearch<BLOBNBOX, BLOBNBOX_CLIST, BLOBNBOX_C_IT>::NextFullSearch() */
int _ZN9tesseract10GridSearchI8BLOBNBOX14BLOBNBOX_CLIST13BLOBNBOX_C_ITE14NextFullSearchEv(void);

/* Symbol: _ZNK9tesseract17TrainingSampleSet9GetSampleEiii */
/* Demangled: tesseract::TrainingSampleSet::GetSample(int, int, int) const */
int _ZNK9tesseract17TrainingSampleSet9GetSampleEiii(void);

/* Symbol: _ZN12BlamerBundle15LastChanceBlameEbP8WERD_RES */
/* Demangled: BlamerBundle::LastChanceBlame(bool, WERD_RES*) */
int _ZN12BlamerBundle15LastChanceBlameEbP8WERD_RES(void);

/* Symbol: _ZNK9tesseract10BeamSearch8SizeCostEPNS_12SearchObjectEPNS_10SearchNodeEPPi */
/* Demangled: tesseract::BeamSearch::SizeCost(tesseract::SearchObject*, tesseract::SearchNode*, int**) const */
int _ZNK9tesseract10BeamSearch8SizeCostEPNS_12SearchObjectEPNS_10SearchNodeEPPi(void);

/* Symbol: _ZN9tesseract9NeuralNet15FromInputBufferEPNS_15InputFileBufferE */
/* Demangled: tesseract::NeuralNet::FromInputBuffer(tesseract::InputFileBuffer*) */
int _ZN9tesseract9NeuralNet15FromInputBufferEPNS_15InputFileBufferE(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract10BlockGroupEE15double_the_sizeEv */
/* Demangled: GenericVector<tesseract::BlockGroup*>::double_the_size() */
int _ZN13GenericVectorIPN9tesseract10BlockGroupEE15double_the_sizeEv(void);

/* Symbol: _ZN9tesseract7Textord22CleanupSingleRowResultENS_11PageSegModeEP8PAGE_RES */
/* Demangled: tesseract::Textord::CleanupSingleRowResult(tesseract::PageSegMode, PAGE_RES*) */
int _ZN9tesseract7Textord22CleanupSingleRowResultENS_11PageSegModeEP8PAGE_RES(void);

/* Symbol: _ZN3ROWC1EP6TO_ROWss */
/* Demangled: ROW::ROW(TO_ROW*, short, short) */
int _ZN3ROWC1EP6TO_ROWss(void);

/* Symbol: _ZN9tesseract7CharSetD2Ev */
/* Demangled: tesseract::CharSet::~CharSet() */
int _ZN9tesseract7CharSetD2Ev(void);

/* Symbol: TessBaseAPISetInputName */
/* Demangled: TessBaseAPISetInputName */
int TessBaseAPISetInputName(void);

/* Symbol: _Z17check_pitch_sync3sssssP5STATSfRsP12FPSEGPT_LISTss */
/* Demangled: check_pitch_sync3(short, short, short, short, short, STATS*, float, short&, FPSEGPT_LIST*, short, short) */
int _Z17check_pitch_sync3sssssP5STATSfRsP12FPSEGPT_LISTss(void);

/* Symbol: _ZNK7UNICHAR9first_uniEv */
/* Demangled: UNICHAR::first_uni() const */
int _ZNK7UNICHAR9first_uniEv(void);

/* Symbol: _ZN13GenericVectorIP9C_OUTLINEE7reserveEi */
/* Demangled: GenericVector<C_OUTLINE*>::reserve(int) */
int _ZN13GenericVectorIP9C_OUTLINEE7reserveEi(void);

/* Symbol: _ZN13GenericVectorIP5TBLOBE5clearEv */
/* Demangled: GenericVector<TBLOB*>::clear() */
int _ZN13GenericVectorIP5TBLOBE5clearEv(void);

/* Symbol: _ZN9tesseract11CharSampSet18CreateCharDumpFileENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: tesseract::CharSampSet::CreateCharDumpFile(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN9tesseract11CharSampSet18CreateCharDumpFileENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZNSt3__16vectorIPNS0_IfNS_9allocatorIfEEEENS1_IS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS5_EE */
/* Demangled: std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >*, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> >*> >::__swap_out_circular_buffer(std::__1::__split_buffer<std::__1::vector<float, std::__1::allocator<float> >*, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> >*>&>&) */
int _ZNSt3__16vectorIPNS0_IfNS_9allocatorIfEEEENS1_IS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS5_EE(void);

/* Symbol: _ZN9tesseract12ColPartition12RightEdgeRunEPNS_15ColPartition_ITEP6ICOORDS4_ */
/* Demangled: tesseract::ColPartition::RightEdgeRun(tesseract::ColPartition_IT*, ICOORD*, ICOORD*) */
int _ZN9tesseract12ColPartition12RightEdgeRunEPNS_15ColPartition_ITEP6ICOORDS4_(void);

/* Symbol: _ZNK9tesseract12ColPartition19BottomSpacingMarginEi */
/* Demangled: tesseract::ColPartition::BottomSpacingMargin(int) const */
int _ZNK9tesseract12ColPartition19BottomSpacingMarginEi(void);

/* Symbol: TessResultIteratorNext */
/* Demangled: TessResultIteratorNext */
int TessResultIteratorNext(void);

/* Symbol: _ZN9tesseract19TessBoxTextRendererC2EPKc */
/* Demangled: tesseract::TessBoxTextRenderer::TessBoxTextRenderer(char const*) */
int _ZN9tesseract19TessBoxTextRendererC2EPKc(void);

/* Symbol: _ZN6STRING11truncate_atEi */
/* Demangled: STRING::truncate_at(int) */
int _ZN6STRING11truncate_atEi(void);

/* Symbol: _ZN9tesseract12ErrorCounterD2Ev */
/* Demangled: tesseract::ErrorCounter::~ErrorCounter() */
int _ZN9tesseract12ErrorCounterD2Ev(void);

/* Symbol: _ZNK9tesseract17LTRResultIterator23WordRecognitionLanguageEv */
/* Demangled: tesseract::LTRResultIterator::WordRecognitionLanguage() const */
int _ZNK9tesseract17LTRResultIterator23WordRecognitionLanguageEv(void);

/* Symbol: _ZN9tesseract14ValidFirstLineEPK13GenericVectorINS_19RowScratchRegistersEEiPK14ParagraphModel */
/* Demangled: tesseract::ValidFirstLine(GenericVector<tesseract::RowScratchRegisters> const*, int, ParagraphModel const*) */
int _ZN9tesseract14ValidFirstLineEPK13GenericVectorINS_19RowScratchRegistersEEiPK14ParagraphModel(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract8IntParamEE15double_the_sizeEv */
/* Demangled: GenericVector<tesseract::IntParam*>::double_the_size() */
int _ZN13GenericVectorIPN9tesseract8IntParamEE15double_the_sizeEv(void);

/* Symbol: _ZN9tesseract13MasterTrainer14TestClassifierENS_10CountTypesEibPNS_17TrainingSampleSetEPNS_15ShapeClassifierEP6STRING */
/* Demangled: tesseract::MasterTrainer::TestClassifier(tesseract::CountTypes, int, bool, tesseract::TrainingSampleSet*, tesseract::ShapeClassifier*, STRING*) */
int _ZN9tesseract13MasterTrainer14TestClassifierENS_10CountTypesEibPNS_17TrainingSampleSetEPNS_15ShapeClassifierEP6STRING(void);

/* Symbol: _Z8NewClassii */
/* Demangled: NewClass(int, int) */
int _Z8NewClassii(void);

/* Symbol: _ZN9tesseract18TessResultRendererD0Ev */
/* Demangled: tesseract::TessResultRenderer::~TessResultRenderer() */
int _ZN9tesseract18TessResultRendererD0Ev(void);

/* Symbol: _ZN8TO_BLOCK21ReSetAndReFilterBlobsEv */
/* Demangled: TO_BLOCK::ReSetAndReFilterBlobs() */
int _ZN8TO_BLOCK21ReSetAndReFilterBlobsEv(void);

/* Symbol: _ZN9tesseract8Classify18GetCharNormFeatureERK20INT_FX_RESULT_STRUCTP20INT_TEMPLATES_STRUCTPhS6_ */
/* Demangled: tesseract::Classify::GetCharNormFeature(INT_FX_RESULT_STRUCT const&, INT_TEMPLATES_STRUCT*, unsigned char*, unsigned char*) */
int _ZN9tesseract8Classify18GetCharNormFeatureERK20INT_FX_RESULT_STRUCTP20INT_TEMPLATES_STRUCTPhS6_(void);

/* Symbol: _ZN9tesseract9CubeUtilsD1Ev */
/* Demangled: tesseract::CubeUtils::~CubeUtils() */
int _ZN9tesseract9CubeUtilsD1Ev(void);

/* Symbol: _ZN9tesseract12ColumnFinder16GetDeskewVectorsEP6FCOORDS2_ */
/* Demangled: tesseract::ColumnFinder::GetDeskewVectors(FCOORD*, FCOORD*) */
int _ZN9tesseract12ColumnFinder16GetDeskewVectorsEP6FCOORDS2_(void);

/* Symbol: _ZN9tesseract13IntFeatureMapC2Ev */
/* Demangled: tesseract::IntFeatureMap::IntFeatureMap() */
int _ZN9tesseract13IntFeatureMapC2Ev(void);

/* Symbol: _ZN9tesseract7IntGrid6RotateERK6FCOORD */
/* Demangled: tesseract::IntGrid::Rotate(FCOORD const&) */
int _ZN9tesseract7IntGrid6RotateERK6FCOORD(void);

/* Symbol: _ZN14CLIST_ITERATOR12move_to_lastEv */
/* Demangled: CLIST_ITERATOR::move_to_last() */
int _ZN14CLIST_ITERATOR12move_to_lastEv(void);

/* Symbol: _ZNSt3__112basic_stringIiNS_11char_traitsIiEENS_9allocatorIiEEEC2ERKS5_jjRKS4_ */
/* Demangled: std::__1::basic_string<int, std::__1::char_traits<int>, std::__1::allocator<int> >::basic_string(std::__1::basic_string<int, std::__1::char_traits<int>, std::__1::allocator<int> > const&, unsigned int, unsigned int, std::__1::allocator<int> const&) */
int _ZNSt3__112basic_stringIiNS_11char_traitsIiEENS_9allocatorIiEEEC2ERKS5_jjRKS4_(void);

/* Symbol: _ZN9tesseract14BaselineDetect13SetDebugImageEP3PixRK6STRING */
/* Demangled: tesseract::BaselineDetect::SetDebugImage(Pix*, STRING const&) */
int _ZN9tesseract14BaselineDetect13SetDebugImageEP3PixRK6STRING(void);

/* Symbol: textord_show_fixed_cuts */
/* Demangled: textord_show_fixed_cuts */
extern void* textord_show_fixed_cuts;

/* Symbol: _ZN9tesseract11StrokeWidth23PartitionRemainingBlobsENS_11PageSegModeEPNS_16ColPartitionGridE */
/* Demangled: tesseract::StrokeWidth::PartitionRemainingBlobs(tesseract::PageSegMode, tesseract::ColPartitionGrid*) */
int _ZN9tesseract11StrokeWidth23PartitionRemainingBlobsENS_11PageSegModeEPNS_16ColPartitionGridE(void);

/* Symbol: _ZN9tesseract11TableFinder21FilterHeaderAndFooterEv */
/* Demangled: tesseract::TableFinder::FilterHeaderAndFooter() */
int _ZN9tesseract11TableFinder21FilterHeaderAndFooterEv(void);

/* Symbol: Java_com_googlecode_tesseract_android_ResultIterator_nativeGetUTF8Text */
/* Demangled: Java_com_googlecode_tesseract_android_ResultIterator_nativeGetUTF8Text */
int Java_com_googlecode_tesseract_android_ResultIterator_nativeGetUTF8Text(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract9ImageDataEE20delete_data_pointersEv */
/* Demangled: GenericVector<tesseract::ImageData*>::delete_data_pointers() */
int _ZN13GenericVectorIPN9tesseract9ImageDataEE20delete_data_pointersEv(void);

/* Symbol: _ZN9tesseract8Classify9LearnBlobERK6STRINGP5TBLOBRK6DENORMRK20INT_FX_RESULT_STRUCTPKc */
/* Demangled: tesseract::Classify::LearnBlob(STRING const&, TBLOB*, DENORM const&, INT_FX_RESULT_STRUCT const&, char const*) */
int _ZN9tesseract8Classify9LearnBlobERK6STRINGP5TBLOBRK6DENORMRK20INT_FX_RESULT_STRUCTPKc(void);

/* Symbol: _ZN9tesseract11WordAltListD2Ev */
/* Demangled: tesseract::WordAltList::~WordAltList() */
int _ZN9tesseract11WordAltListD2Ev(void);

/* Symbol: _ZN13GenericVectorIN9tesseract11ObjectCacheINS0_4DawgEE14ReferenceCountEE5clearEv */
/* Demangled: GenericVector<tesseract::ObjectCache<tesseract::Dawg>::ReferenceCount>::clear() */
int _ZN13GenericVectorIN9tesseract11ObjectCacheINS0_4DawgEE14ReferenceCountEE5clearEv(void);

/* Symbol: _ZNK9tesseract12ColPartition17MatchingTextColorERKS0_ */
/* Demangled: tesseract::ColPartition::MatchingTextColor(tesseract::ColPartition const&) const */
int _ZNK9tesseract12ColPartition17MatchingTextColorERKS0_(void);

/* Symbol: _ZN10OL_BUCKETS18outline_complexityEP9C_OUTLINEis */
/* Demangled: OL_BUCKETS::outline_complexity(C_OUTLINE*, int, short) */
int _ZN10OL_BUCKETS18outline_complexityEP9C_OUTLINEis(void);

/* Symbol: _ZN9tesseract11StrokeWidth23FindLeadersAndMarkNoiseEP8TO_BLOCKPNS_17ColPartition_LISTE */
/* Demangled: tesseract::StrokeWidth::FindLeadersAndMarkNoise(TO_BLOCK*, tesseract::ColPartition_LIST*) */
int _ZN9tesseract11StrokeWidth23FindLeadersAndMarkNoiseEP8TO_BLOCKPNS_17ColPartition_LISTE(void);

/* Symbol: _ZN9tesseract9Tesseract10ApplyBoxesERK6STRINGbP10BLOCK_LIST */
/* Demangled: tesseract::Tesseract::ApplyBoxes(STRING const&, bool, BLOCK_LIST*) */
int _ZN9tesseract9Tesseract10ApplyBoxesERK6STRINGbP10BLOCK_LIST(void);

/* Symbol: _ZN5CLIST12set_subtractEPFiPKvS1_EbPS_S4_ */
/* Demangled: CLIST::set_subtract(int (*)(void const*, void const*), bool, CLIST*, CLIST*) */
int _ZN5CLIST12set_subtractEPFiPKvS1_EbPS_S4_(void);

/* Symbol: _ZN9tesseract27textord_tabfind_find_tablesE */
/* Demangled: tesseract::textord_tabfind_find_tables */
extern void* _ZN9tesseract27textord_tabfind_find_tablesE;

/* Symbol: _Z12fit_lms_lineP6TO_ROW */
/* Demangled: fit_lms_line(TO_ROW*) */
int _Z12fit_lms_lineP6TO_ROW(void);

/* Symbol: _ZN9tesseract13MasterTrainer15PostLoadCleanupEv */
/* Demangled: tesseract::MasterTrainer::PostLoadCleanup() */
int _ZN9tesseract13MasterTrainer15PostLoadCleanupEv(void);

/* Symbol: _ZNK13GenericVectorIN9tesseract8IntervalEE4backEv */
/* Demangled: GenericVector<tesseract::Interval>::back() const */
int _ZNK13GenericVectorIN9tesseract8IntervalEE4backEv(void);

/* Symbol: _ZNK9tesseract14ResultIterator9BidiDebugEi */
/* Demangled: tesseract::ResultIterator::BidiDebug(int) const */
int _ZNK9tesseract14ResultIterator9BidiDebugEi(void);

/* Symbol: _ZNK8BLOBNBOX17MinMaxGapsClippedEPiS0_S0_S0_ */
/* Demangled: BLOBNBOX::MinMaxGapsClipped(int*, int*, int*, int*) const */
int _ZNK8BLOBNBOX17MinMaxGapsClippedEPiS0_S0_S0_(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract12DocumentDataEE15double_the_sizeEv */
/* Demangled: GenericVector<tesseract::DocumentData*>::double_the_size() */
int _ZN13GenericVectorIPN9tesseract12DocumentDataEE15double_the_sizeEv(void);

/* Symbol: _ZN9tesseract11WordAltList10PrintDebugEv */
/* Demangled: tesseract::WordAltList::PrintDebug() */
int _ZN9tesseract11WordAltList10PrintDebugEv(void);

/* Symbol: _ZN13GenericVectorIN9tesseract10DetLineFit10PointWidthEE7reserveEi */
/* Demangled: GenericVector<tesseract::DetLineFit::PointWidth>::reserve(int) */
int _ZN13GenericVectorIN9tesseract10DetLineFit10PointWidthEE7reserveEi(void);

/* Symbol: _ZN9tesseract11StrokeWidth21FindInitialPartitionsENS_11PageSegModeERK6FCOORDbP8TO_BLOCKP13BLOBNBOX_LISTPNS_16ColPartitionGridEPNS_17ColPartition_LISTEPS2_ */
/* Demangled: tesseract::StrokeWidth::FindInitialPartitions(tesseract::PageSegMode, FCOORD const&, bool, TO_BLOCK*, BLOBNBOX_LIST*, tesseract::ColPartitionGrid*, tesseract::ColPartition_LIST*, FCOORD*) */
int _ZN9tesseract11StrokeWidth21FindInitialPartitionsENS_11PageSegModeERK6FCOORDbP8TO_BLOCKP13BLOBNBOX_LISTPNS_16ColPartitionGridEPNS_17ColPartition_LISTEPS2_(void);

/* Symbol: TessPageIteratorBlockType */
/* Demangled: TessPageIteratorBlockType */
int TessPageIteratorBlockType(void);

/* Symbol: _ZN13GenericVectorIN9tesseract24ParamsTrainingHypothesisEE5clearEv */
/* Demangled: GenericVector<tesseract::ParamsTrainingHypothesis>::clear() */
int _ZN13GenericVectorIN9tesseract24ParamsTrainingHypothesisEE5clearEv(void);

/* Symbol: _ZN9tesseract11AlignedBlobC2EiRK6ICOORDS3_ */
/* Demangled: tesseract::AlignedBlob::AlignedBlob(int, ICOORD const&, ICOORD const&) */
int _ZN9tesseract11AlignedBlobC2EiRK6ICOORDS3_(void);

/* Symbol: _ZN9tesseract16ColPartitionGrid20SmoothInOneDirectionE16BlobNeighbourDirP3PixRK4TBOXRK6FCOORDbRKNS_12ColPartitionEPi */
/* Demangled: tesseract::ColPartitionGrid::SmoothInOneDirection(BlobNeighbourDir, Pix*, TBOX const&, FCOORD const&, bool, tesseract::ColPartition const&, int*) */
int _ZN9tesseract16ColPartitionGrid20SmoothInOneDirectionE16BlobNeighbourDirP3PixRK4TBOXRK6FCOORDbRKNS_12ColPartitionEPi(void);

/* Symbol: _ZN9tesseract16ColPartitionGrid23AccumulatePartDistancesERKNS_12ColPartitionERK6ICOORDRK4TBOXP3PixS9_RK6FCOORDbP13GenericVectorIiE */
/* Demangled: tesseract::ColPartitionGrid::AccumulatePartDistances(tesseract::ColPartition const&, ICOORD const&, TBOX const&, Pix*, TBOX const&, FCOORD const&, bool, GenericVector<int>*) */
int _ZN9tesseract16ColPartitionGrid23AccumulatePartDistancesERKNS_12ColPartitionERK6ICOORDRK4TBOXP3PixS9_RK6FCOORDbP13GenericVectorIiE(void);

/* Symbol: _ZN10UNICHARSETD1Ev */
/* Demangled: UNICHARSET::~UNICHARSET() */
int _ZN10UNICHARSETD1Ev(void);

/* Symbol: _Z13TO_ROW_zapperP11ELIST2_LINK */
/* Demangled: TO_ROW_zapper(ELIST2_LINK*) */
int _Z13TO_ROW_zapperP11ELIST2_LINK(void);

/* Symbol: _Z15ConvertOutlinesP8TESSLINEP8list_rec11OUTLINETYPE */
/* Demangled: ConvertOutlines(TESSLINE*, list_rec*, OUTLINETYPE) */
int _Z15ConvertOutlinesP8TESSLINEP8list_rec11OUTLINETYPE(void);

/* Symbol: _Z14segment_splineP4TBOXiPiS1_iiS1_ */
/* Demangled: segment_spline(TBOX*, int, int*, int*, int, int, int*) */
int _Z14segment_splineP4TBOXiPiS1_iiS1_(void);

/* Symbol: TessBaseAPISetMinOrientationMargin */
/* Demangled: TessBaseAPISetMinOrientationMargin */
int TessBaseAPISetMinOrientationMargin(void);

/* Symbol: _ZN3REJ16setrej_xht_fixupEv */
/* Demangled: REJ::setrej_xht_fixup() */
int _ZN3REJ16setrej_xht_fixupEv(void);

/* Symbol: _ZN9tesseract13MasterTrainer14LoadPageImagesEPKc */
/* Demangled: tesseract::MasterTrainer::LoadPageImages(char const*) */
int _ZN9tesseract13MasterTrainer14LoadPageImagesEPKc(void);

/* Symbol: _ZTV29_TessMemberResultCallback_0_2ILb0EPc19InMemoryFilePointerS0_iE */
/* Demangled: vtable for _TessMemberResultCallback_0_2<false, char*, InMemoryFilePointer, char*, int> */
extern void* _ZTV29_TessMemberResultCallback_0_2ILb0EPc19InMemoryFilePointerS0_iE;

/* Symbol: _ZTVN9tesseract18ShiroRekhaSplitterE */
/* Demangled: vtable for tesseract::ShiroRekhaSplitter */
extern void* _ZTVN9tesseract18ShiroRekhaSplitterE;

/* Symbol: _ZN9tesseract15StructuredTable15VerifyRowFilledEi */
/* Demangled: tesseract::StructuredTable::VerifyRowFilled(int) */
int _ZN9tesseract15StructuredTable15VerifyRowFilledEi(void);

/* Symbol: _ZN9tesseract14YOutlierPiecesEP8WERD_RESiiiPNS_9ScriptPosEPiS3_S4_ */
/* Demangled: tesseract::YOutlierPieces(WERD_RES*, int, int, int, tesseract::ScriptPos*, int*, tesseract::ScriptPos*, int*) */
int _ZN9tesseract14YOutlierPiecesEP8WERD_RESiiiPNS_9ScriptPosEPiS3_S4_(void);

/* Symbol: _ZN9tesseract15ColPartitionSet20LegalColumnCandidateEv */
/* Demangled: tesseract::ColPartitionSet::LegalColumnCandidate() */
int _ZN9tesseract15ColPartitionSet20LegalColumnCandidateEv(void);

/* Symbol: _ZN9tesseract7Wordrec19improve_by_choppingEfP8WERD_RESPNS_16BestChoiceBundleEP12BlamerBundlePNS_12LMPainPointsEP13GenericVectorINS_16SegSearchPendingEE */
/* Demangled: tesseract::Wordrec::improve_by_chopping(float, WERD_RES*, tesseract::BestChoiceBundle*, BlamerBundle*, tesseract::LMPainPoints*, GenericVector<tesseract::SegSearchPending>*) */
int _ZN9tesseract7Wordrec19improve_by_choppingEfP8WERD_RESPNS_16BestChoiceBundleEP12BlamerBundlePNS_12LMPainPointsEP13GenericVectorINS_16SegSearchPendingEE(void);

/* Symbol: _ZNK11WERD_CHOICE13TotalOfStatesEv */
/* Demangled: WERD_CHOICE::TotalOfStates() const */
int _ZNK11WERD_CHOICE13TotalOfStatesEv(void);

/* Symbol: _Z19FindNearestNeighborP6KDTREEP6samplePf */
/* Demangled: FindNearestNeighbor(KDTREE*, sample*, float*) */
int _Z19FindNearestNeighborP6KDTREEP6samplePf(void);

/* Symbol: _ZN7SVMutexC2Ev */
/* Demangled: SVMutex::SVMutex() */
int _ZN7SVMutexC2Ev(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::pbackfail(int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi(void);

/* Symbol: _ZN9tesseract11CharBigrams6CreateERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_ */
/* Demangled: tesseract::CharBigrams::Create(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN9tesseract11CharBigrams6CreateERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_(void);

/* Symbol: _ZNK7QSPLINE12spline_indexEd */
/* Demangled: QSPLINE::spline_index(double) const */
int _ZNK7QSPLINE12spline_indexEd(void);

/* Symbol: _Z14WritePrototypeP7__sFILEtP9PROTOTYPE */
/* Demangled: WritePrototype(__sFILE*, unsigned short, PROTOTYPE*) */
int _Z14WritePrototypeP7__sFILEtP9PROTOTYPE(void);

/* Symbol: _ZN9tesseract10CubeObject7CleanupEv */
/* Demangled: tesseract::CubeObject::Cleanup() */
int _ZN9tesseract10CubeObject7CleanupEv(void);

/* Symbol: _ZN9tesseract6BBGridINS_12ColPartitionENS_18ColPartition_CLISTENS_17ColPartition_C_ITEE5ClearEv */
/* Demangled: tesseract::BBGrid<tesseract::ColPartition, tesseract::ColPartition_CLIST, tesseract::ColPartition_C_IT>::Clear() */
int _ZN9tesseract6BBGridINS_12ColPartitionENS_18ColPartition_CLISTENS_17ColPartition_C_ITEE5ClearEv(void);

/* Symbol: _ZN9tesseract17TrainingSampleSetD2Ev */
/* Demangled: tesseract::TrainingSampleSet::~TrainingSampleSet() */
int _ZN9tesseract17TrainingSampleSetD2Ev(void);

/* Symbol: _ZN9tesseract15StructuredTable17median_cell_widthEv */
/* Demangled: tesseract::StructuredTable::median_cell_width() */
int _ZN9tesseract15StructuredTable17median_cell_widthEv(void);

/* Symbol: _ZNK9tesseract10DetLineFit33SufficientPointsForIndependentFitEv */
/* Demangled: tesseract::DetLineFit::SufficientPointsForIndependentFit() const */
int _ZNK9tesseract10DetLineFit33SufficientPointsForIndependentFitEv(void);

/* Symbol: _ZN9tesseract14TrainingSampleD1Ev */
/* Demangled: tesseract::TrainingSample::~TrainingSample() */
int _ZN9tesseract14TrainingSampleD1Ev(void);

/* Symbol: _ZN9tesseract19TrainingSample_LIST9deep_copyEPKS0_PFPNS_14TrainingSampleEPKS3_E */
/* Demangled: tesseract::TrainingSample_LIST::deep_copy(tesseract::TrainingSample_LIST const*, tesseract::TrainingSample* (*)(tesseract::TrainingSample const*)) */
int _ZN9tesseract19TrainingSample_LIST9deep_copyEPKS0_PFPNS_14TrainingSampleEPKS3_E(void);

/* Symbol: _ZTVN9tesseract14CharClassifierE */
/* Demangled: vtable for tesseract::CharClassifier */
extern void* _ZTVN9tesseract14CharClassifierE;

/* Symbol: _ZN9tesseract13FeatureHybrid20ComputeFeatureBitmapEPNS_8CharSampE */
/* Demangled: tesseract::FeatureHybrid::ComputeFeatureBitmap(tesseract::CharSamp*) */
int _ZN9tesseract13FeatureHybrid20ComputeFeatureBitmapEPNS_8CharSampE(void);

/* Symbol: _ZN9tesseract15StructuredTable24CountFilledCellsInColumnEi */
/* Demangled: tesseract::StructuredTable::CountFilledCellsInColumn(int) */
int _ZN9tesseract15StructuredTable24CountFilledCellsInColumnEi(void);

/* Symbol: _ZN9tesseract18TextlineProjectionD2Ev */
/* Demangled: tesseract::TextlineProjection::~TextlineProjection() */
int _ZN9tesseract18TextlineProjectionD2Ev(void);

/* Symbol: textord_debug_tabfind */
/* Demangled: textord_debug_tabfind */
extern void* textord_debug_tabfind;

/* Symbol: _ZN9tesseract13FeatureHybridD0Ev */
/* Demangled: tesseract::FeatureHybrid::~FeatureHybrid() */
int _ZN9tesseract13FeatureHybridD0Ev(void);

/* Symbol: stream_filelist */
/* Demangled: stream_filelist */
extern void* stream_filelist;

/* Symbol: _ZN9tesseract11TableFinder20SetPartitionSpacingsEPNS_16ColPartitionGridEPPNS_15ColPartitionSetE */
/* Demangled: tesseract::TableFinder::SetPartitionSpacings(tesseract::ColPartitionGrid*, tesseract::ColPartitionSet**) */
int _ZN9tesseract11TableFinder20SetPartitionSpacingsEPNS_16ColPartitionGridEPPNS_15ColPartitionSetE(void);

/* Symbol: _ZNK9tesseract18TextlineProjection20TransformToPixCoordsEPK6DENORMP6TPOINT */
/* Demangled: tesseract::TextlineProjection::TransformToPixCoords(DENORM const*, TPOINT*) const */
int _ZNK9tesseract18TextlineProjection20TransformToPixCoordsEPK6DENORMP6TPOINT(void);

/* Symbol: _ZN9tesseract14WorkingPartSet10MakeBlocksERK6ICOORDS3_iPNS_17ColPartition_LISTE */
/* Demangled: tesseract::WorkingPartSet::MakeBlocks(ICOORD const&, ICOORD const&, int, tesseract::ColPartition_LIST*) */
int _ZN9tesseract14WorkingPartSet10MakeBlocksERK6ICOORDS3_iPNS_17ColPartition_LISTE(void);

/* Symbol: _ZNK11WERD_CHOICE18has_rtl_unichar_idEv */
/* Demangled: WERD_CHOICE::has_rtl_unichar_id() const */
int _ZNK11WERD_CHOICE18has_rtl_unichar_idEv(void);

/* Symbol: _ZN9tesseract16FeatureChebyshev20ComputeFeatureBitmapEPNS_8CharSampE */
/* Demangled: tesseract::FeatureChebyshev::ComputeFeatureBitmap(tesseract::CharSamp*) */
int _ZN9tesseract16FeatureChebyshev20ComputeFeatureBitmapEPNS_8CharSampE(void);

/* Symbol: _ZN9tesseract15TessLangModEdgeC2EPNS_15CubeRecoContextEPKNS_4DawgExxi */
/* Demangled: tesseract::TessLangModEdge::TessLangModEdge(tesseract::CubeRecoContext*, tesseract::Dawg const*, long long, long long, int) */
int _ZN9tesseract15TessLangModEdgeC2EPNS_15CubeRecoContextEPKNS_4DawgExxi(void);

/* Symbol: _ZN9tesseract12DeleteObjectINS_12ColPartitionEEEvPT_ */
/* Demangled: void tesseract::DeleteObject<tesseract::ColPartition>(tesseract::ColPartition*) */
int _ZN9tesseract12DeleteObjectINS_12ColPartitionEEEvPT_(void);

/* Symbol: _ZN9tesseract7Wordrec10WordSearchEP8WERD_RES */
/* Demangled: tesseract::Wordrec::WordSearch(WERD_RES*) */
int _ZN9tesseract7Wordrec10WordSearchEP8WERD_RES(void);

/* Symbol: _ZN9tesseract11TessBaseAPI14ReadConfigFileEPKc */
/* Demangled: tesseract::TessBaseAPI::ReadConfigFile(char const*) */
int _ZN9tesseract11TessBaseAPI14ReadConfigFileEPKc(void);

/* Symbol: _ZN9tesseract15TessPDFRendererC1EPKcS2_ */
/* Demangled: tesseract::TessPDFRenderer::TessPDFRenderer(char const*, char const*) */
int _ZN9tesseract15TessPDFRendererC1EPKcS2_(void);

/* Symbol: _ZN9tesseract11CharSampSet7CleanupEv */
/* Demangled: tesseract::CharSampSet::Cleanup() */
int _ZN9tesseract11CharSampSet7CleanupEv(void);

/* Symbol: _Z28compute_occupation_thresholdiiiPiS_ */
/* Demangled: compute_occupation_threshold(int, int, int, int*, int*) */
int _Z28compute_occupation_thresholdiiiPiS_(void);

/* Symbol: _ZN7UNICHAR13UTF8ToUnicodeEPKcP13GenericVectorIiE */
/* Demangled: UNICHAR::UTF8ToUnicode(char const*, GenericVector<int>*) */
int _ZN7UNICHAR13UTF8ToUnicodeEPKcP13GenericVectorIiE(void);

/* Symbol: _Z19reject_poor_matchesP8WERD_RES */
/* Demangled: reject_poor_matches(WERD_RES*) */
int _Z19reject_poor_matchesP8WERD_RES(void);

/* Symbol: _ZNK8BLOBNBOX21ConfirmNoTabViolationERKS_ */
/* Demangled: BLOBNBOX::ConfirmNoTabViolation(BLOBNBOX const&) const */
int _ZNK8BLOBNBOX21ConfirmNoTabViolationERKS_(void);

/* Symbol: _ZNK9tesseract12ColPartition21ConfirmNoTabViolationERKS0_ */
/* Demangled: tesseract::ColPartition::ConfirmNoTabViolation(tesseract::ColPartition const&) const */
int _ZNK9tesseract12ColPartition21ConfirmNoTabViolationERKS0_(void);

/* Symbol: _ZN9tesseract18ShiroRekhaSplitter21GetShiroRekhaYExtentsEP3PixPiS3_S3_ */
/* Demangled: tesseract::ShiroRekhaSplitter::GetShiroRekhaYExtents(Pix*, int*, int*, int*) */
int _ZN9tesseract18ShiroRekhaSplitter21GetShiroRekhaYExtentsEP3PixPiS3_S3_(void);

/* Symbol: _ZN13GenericVectorI6STRINGE6removeEi */
/* Demangled: GenericVector<STRING>::remove(int) */
int _ZN13GenericVectorI6STRINGE6removeEi(void);

/* Symbol: _ZN4WERD7copy_onEPS_ */
/* Demangled: WERD::copy_on(WERD*) */
int _ZN4WERD7copy_onEPS_(void);

/* Symbol: _ZN3REJ13perm_rejectedEv */
/* Demangled: REJ::perm_rejected() */
int _ZN3REJ13perm_rejectedEv(void);

/* Symbol: _ZN9tesseract12IndexMapBiDi11DeSerializeEbP7__sFILE */
/* Demangled: tesseract::IndexMapBiDi::DeSerialize(bool, __sFILE*) */
int _ZN9tesseract12IndexMapBiDi11DeSerializeEbP7__sFILE(void);

/* Symbol: _Z5SolvePFdP9CHISTRUCTdEPvdd */
/* Demangled: Solve(double (*)(CHISTRUCT*, double), void*, double, double) */
int _Z5SolvePFdP9CHISTRUCTdEPvdd(void);

/* Symbol: _ZNK13GenericVectorIN9tesseract9KDPairIncIf12MATRIX_COORDEEE4backEv */
/* Demangled: GenericVector<tesseract::KDPairInc<float, MATRIX_COORD> >::back() const */
int _ZNK13GenericVectorIN9tesseract9KDPairIncIf12MATRIX_COORDEEE4backEv(void);

/* Symbol: _ZNSt3__112__hash_tableIP8BLOBNBOXN9tesseract7PtrHashIS1_EENS_8equal_toIS2_EENS_9allocatorIS2_EEED2Ev */
/* Demangled: std::__1::__hash_table<BLOBNBOX*, tesseract::PtrHash<BLOBNBOX>, std::__1::equal_to<BLOBNBOX*>, std::__1::allocator<BLOBNBOX*> >::~__hash_table() */
int _ZNSt3__112__hash_tableIP8BLOBNBOXN9tesseract7PtrHashIS1_EENS_8equal_toIS2_EENS_9allocatorIS2_EEED2Ev(void);

/* Symbol: textord_min_blobs_in_row */
/* Demangled: textord_min_blobs_in_row */
extern void* textord_min_blobs_in_row;

/* Symbol: _ZTV34_ConstTessMemberResultCallback_6_0ILb0EbN9tesseract12PageIteratorENS0_17PageIteratorLevelEiPiS3_S3_S3_E */
/* Demangled: vtable for _ConstTessMemberResultCallback_6_0<false, bool, tesseract::PageIterator, tesseract::PageIteratorLevel, int, int*, int*, int*, int*> */
extern void* _ZTV34_ConstTessMemberResultCallback_6_0ILb0EbN9tesseract12PageIteratorENS0_17PageIteratorLevelEiPiS3_S3_S3_E;

/* Symbol: _ZNK13GenericVectorIPN9tesseract15FontSpacingInfoEE3getEi */
/* Demangled: GenericVector<tesseract::FontSpacingInfo*>::get(int) const */
int _ZNK13GenericVectorIPN9tesseract15FontSpacingInfoEE3getEi(void);

/* Symbol: _ZN9tesseract13TessLangModel15num_max_repeat_E */
/* Demangled: tesseract::TessLangModel::num_max_repeat_ */
extern void* _ZN9tesseract13TessLangModel15num_max_repeat_E;

/* Symbol: _ZN9tesseract9ImageDataD1Ev */
/* Demangled: tesseract::ImageData::~ImageData() */
int _ZN9tesseract9ImageDataD1Ev(void);

/* Symbol: _Z10FillerDoneP12TABLE_FILLER */
/* Demangled: FillerDone(TABLE_FILLER*) */
int _Z10FillerDoneP12TABLE_FILLER(void);

/* Symbol: _ZN9tesseract6BBGridINS_12ColPartitionENS_18ColPartition_CLISTENS_17ColPartition_C_ITEE18AssertNoDuplicatesEv */
/* Demangled: tesseract::BBGrid<tesseract::ColPartition, tesseract::ColPartition_CLIST, tesseract::ColPartition_C_IT>::AssertNoDuplicates() */
int _ZN9tesseract6BBGridINS_12ColPartitionENS_18ColPartition_CLISTENS_17ColPartition_C_ITEE18AssertNoDuplicatesEv(void);

/* Symbol: _Z20assign_blobs_to_rowsP8TO_BLOCKPfihhh */
/* Demangled: assign_blobs_to_rows(TO_BLOCK*, float*, int, unsigned char, unsigned char, unsigned char) */
int _Z20assign_blobs_to_rowsP8TO_BLOCKPfihhh(void);

/* Symbol: _ZN9tesseract14EquationDetect14SplitCPHorLiteEPNS_12ColPartitionEP13GenericVectorI4TBOXE */
/* Demangled: tesseract::EquationDetect::SplitCPHorLite(tesseract::ColPartition*, GenericVector<TBOX>*) */
int _ZN9tesseract14EquationDetect14SplitCPHorLiteEPNS_12ColPartitionEP13GenericVectorI4TBOXE(void);

/* Symbol: _ZN9tesseract36InitializeTextAndBoxesPreRecognitionERKNS_15MutableIteratorEPNS_7RowInfoE */
/* Demangled: tesseract::InitializeTextAndBoxesPreRecognition(tesseract::MutableIterator const&, tesseract::RowInfo*) */
int _ZN9tesseract36InitializeTextAndBoxesPreRecognitionERKNS_15MutableIteratorEPNS_7RowInfoE(void);

/* Symbol: _ZN7QSPLINED2Ev */
/* Demangled: QSPLINE::~QSPLINE() */
int _ZN7QSPLINED2Ev(void);

/* Symbol: TessPageIteratorGetBinaryImage */
/* Demangled: TessPageIteratorGetBinaryImage */
int TessPageIteratorGetBinaryImage(void);

/* Symbol: _ZN9tesseract17TrainingSampleSet14LoadUnicharsetEPKc */
/* Demangled: tesseract::TrainingSampleSet::LoadUnicharset(char const*) */
int _ZN9tesseract17TrainingSampleSet14LoadUnicharsetEPKc(void);

/* Symbol: _ZN9tesseract16CubeSearchObject7CleanupEv */
/* Demangled: tesseract::CubeSearchObject::Cleanup() */
int _ZN9tesseract16CubeSearchObject7CleanupEv(void);

/* Symbol: _ZTVN9tesseract16CubeTuningParamsE */
/* Demangled: vtable for tesseract::CubeTuningParams */
extern void* _ZTVN9tesseract16CubeTuningParamsE;

/* Symbol: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeWordConfidences */
/* Demangled: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeWordConfidences */
int Java_com_googlecode_tesseract_android_TessBaseAPI_nativeWordConfidences(void);

/* Symbol: _ZN9tesseract9CubeUtils16ReadFileToStringERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPS7_ */
/* Demangled: tesseract::CubeUtils::ReadFileToString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN9tesseract9CubeUtils16ReadFileToStringERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPS7_(void);

/* Symbol: _ZNK9C_OUTLINE6renderEiiP3Pix */
/* Demangled: C_OUTLINE::render(int, int, Pix*) const */
int _ZNK9C_OUTLINE6renderEiiP3Pix(void);

/* Symbol: _ZN8ROW_LIST9deep_copyEPKS_PFP3ROWPKS2_E */
/* Demangled: ROW_LIST::deep_copy(ROW_LIST const*, ROW* (*)(ROW const*)) */
int _ZN8ROW_LIST9deep_copyEPKS_PFP3ROWPKS2_E(void);

/* Symbol: _ZTVN9tesseract7TabFindE */
/* Demangled: vtable for tesseract::TabFind */
extern void* _ZTVN9tesseract7TabFindE;

/* Symbol: _ZN7ROW_RESC2EbP3ROW */
/* Demangled: ROW_RES::ROW_RES(bool, ROW*) */
int _ZN7ROW_RESC2EbP3ROW(void);

/* Symbol: _ZN9tesseract6Neuron11FeedForwardEv */
/* Demangled: tesseract::Neuron::FeedForward() */
int _ZN9tesseract6Neuron11FeedForwardEv(void);

/* Symbol: _ZN9tesseract13BaselineBlock17RefineLineSpacingERK13GenericVectorIdE */
/* Demangled: tesseract::BaselineBlock::RefineLineSpacing(GenericVector<double> const&) */
int _ZN9tesseract13BaselineBlock17RefineLineSpacingERK13GenericVectorIdE(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract15ColPartitionSetEE6insertES2_i */
/* Demangled: GenericVector<tesseract::ColPartitionSet*>::insert(tesseract::ColPartitionSet*, int) */
int _ZN13GenericVectorIPN9tesseract15ColPartitionSetEE6insertES2_i(void);

/* Symbol: _ZNK7ERRCODE5errorEPKc16TessErrorLogCodeS1_z */
/* Demangled: ERRCODE::error(char const*, TessErrorLogCode, char const*, ...) const */
int _ZNK7ERRCODE5errorEPKc16TessErrorLogCodeS1_z(void);

/* Symbol: _Z8free_memPv */
/* Demangled: free_mem(void*) */
int _Z8free_memPv(void);

/* Symbol: _Z17compute_row_statsP8TO_BLOCKh */
/* Demangled: compute_row_stats(TO_BLOCK*, unsigned char) */
int _Z17compute_row_statsP8TO_BLOCKh(void);

/* Symbol: _Z18FindMatchingChoiceiP16BLOB_CHOICE_LIST */
/* Demangled: FindMatchingChoice(int, BLOB_CHOICE_LIST*) */
int _Z18FindMatchingChoiceiP16BLOB_CHOICE_LIST(void);

/* Symbol: _ZNK9tesseract15ShapeClassifier19UnicharPrintResultsEPKcRK13GenericVectorINS_13UnicharRatingEE */
/* Demangled: tesseract::ShapeClassifier::UnicharPrintResults(char const*, GenericVector<tesseract::UnicharRating> const&) const */
int _ZNK9tesseract15ShapeClassifier19UnicharPrintResultsEPKcRK13GenericVectorINS_13UnicharRatingEE(void);

/* Symbol: _ZNK9C_OUTLINE15IsLegallyNestedEv */
/* Demangled: C_OUTLINE::IsLegallyNested() const */
int _ZNK9C_OUTLINE15IsLegallyNestedEv(void);

/* Symbol: _ZNK9tesseract14IntFeatureDist20DebugFeatureDistanceERK13GenericVectorIiE */
/* Demangled: tesseract::IntFeatureDist::DebugFeatureDistance(GenericVector<int> const&) const */
int _ZNK9tesseract14IntFeatureDist20DebugFeatureDistanceERK13GenericVectorIiE(void);

/* Symbol: _ZN9tesseract14SampleIterator16NormalizeSamplesEv */
/* Demangled: tesseract::SampleIterator::NormalizeSamples() */
int _ZN9tesseract14SampleIterator16NormalizeSamplesEv(void);

/* Symbol: _ZN9tesseract12IndexMapBiDi14CompleteMergesEv */
/* Demangled: tesseract::IndexMapBiDi::CompleteMerges() */
int _ZN9tesseract12IndexMapBiDi14CompleteMergesEv(void);

/* Symbol: gapmap_debug */
/* Demangled: gapmap_debug */
extern void* gapmap_debug;

/* Symbol: Java_com_googlecode_tesseract_android_PageIterator_nativeNext */
/* Demangled: Java_com_googlecode_tesseract_android_PageIterator_nativeNext */
int Java_com_googlecode_tesseract_android_PageIterator_nativeNext(void);

/* Symbol: _ZNK9tesseract14EquationDetect17PaintSpecialTextsERK6STRING */
/* Demangled: tesseract::EquationDetect::PaintSpecialTexts(STRING const&) const */
int _ZNK9tesseract14EquationDetect17PaintSpecialTextsERK6STRING(void);

/* Symbol: TessBoxTextRendererCreate */
/* Demangled: TessBoxTextRendererCreate */
int TessBoxTextRendererCreate(void);

/* Symbol: _ZNK6ICOORD9SerializeEP7__sFILE */
/* Demangled: ICOORD::Serialize(__sFILE*) const */
int _ZNK6ICOORD9SerializeEP7__sFILE(void);

/* Symbol: _ZN7UNICHARC2Ei */
/* Demangled: UNICHAR::UNICHAR(int) */
int _ZN7UNICHARC2Ei(void);

/* Symbol: _ZNK10UNICHARSET19AnyRepeatedUnicodesEv */
/* Demangled: UNICHARSET::AnyRepeatedUnicodes() const */
int _ZNK10UNICHARSET19AnyRepeatedUnicodesEv(void);

/* Symbol: _Z17WriteAdaptedClassP7__sFILEP18ADAPT_CLASS_STRUCTi */
/* Demangled: WriteAdaptedClass(__sFILE*, ADAPT_CLASS_STRUCT*, int) */
int _Z17WriteAdaptedClassP7__sFILEP18ADAPT_CLASS_STRUCTi(void);

/* Symbol: classify_cp_angle_pad_loose */
/* Demangled: classify_cp_angle_pad_loose */
extern void* classify_cp_angle_pad_loose;

/* Symbol: _Z13crotate_cblobP6C_BLOB6FCOORD */
/* Demangled: crotate_cblob(C_BLOB*, FCOORD) */
int _Z13crotate_cblobP6C_BLOB6FCOORD(void);

/* Symbol: _ZN9tesseract11TableFinder17SetGlobalSpacingsEPNS_16ColPartitionGridE */
/* Demangled: tesseract::TableFinder::SetGlobalSpacings(tesseract::ColPartitionGrid*) */
int _ZN9tesseract11TableFinder17SetGlobalSpacingsEPNS_16ColPartitionGridE(void);

/* Symbol: _ZN9tesseract9CubeUtilsC2Ev */
/* Demangled: tesseract::CubeUtils::CubeUtils() */
int _ZN9tesseract9CubeUtilsC2Ev(void);

/* Symbol: _ZN9tesseract15TessTsvRenderer20BeginDocumentHandlerEv */
/* Demangled: tesseract::TessTsvRenderer::BeginDocumentHandler() */
int _ZN9tesseract15TessTsvRenderer20BeginDocumentHandlerEv(void);

/* Symbol: _ZNK9tesseract12IndexMapBiDi11MapFeaturesERK13GenericVectorIiEPS2_ */
/* Demangled: tesseract::IndexMapBiDi::MapFeatures(GenericVector<int> const&, GenericVector<int>*) const */
int _ZNK9tesseract12IndexMapBiDi11MapFeaturesERK13GenericVectorIiEPS2_(void);

/* Symbol: MicroFeatureDesc */
/* Demangled: MicroFeatureDesc */
extern void* MicroFeatureDesc;

/* Symbol: _ZNK9tesseract17TrainingSampleSet19AddAllFontsForClassEiPNS_5ShapeE */
/* Demangled: tesseract::TrainingSampleSet::AddAllFontsForClass(int, tesseract::Shape*) const */
int _ZNK9tesseract17TrainingSampleSet19AddAllFontsForClassEiPNS_5ShapeE(void);

/* Symbol: _ZN9tesseract10CachedFile4TellEv */
/* Demangled: tesseract::CachedFile::Tell() */
int _ZN9tesseract10CachedFile4TellEv(void);

/* Symbol: _ZNK9tesseract15ColPartitionSet15GoodColumnCountEv */
/* Demangled: tesseract::ColPartitionSet::GoodColumnCount() const */
int _ZNK9tesseract15ColPartitionSet15GoodColumnCountEv(void);

/* Symbol: _ZN6STRINGC1ERKS_ */
/* Demangled: STRING::STRING(STRING const&) */
int _ZN6STRINGC1ERKS_(void);

/* Symbol: _ZN6REJMAP16rej_word_row_rejEv */
/* Demangled: REJMAP::rej_word_row_rej() */
int _ZN6REJMAP16rej_word_row_rejEv(void);

/* Symbol: _ZN13BLOCK_RECT_IT12set_to_blockEP5PDBLK */
/* Demangled: BLOCK_RECT_IT::set_to_block(PDBLK*) */
int _ZN13BLOCK_RECT_IT12set_to_blockEP5PDBLK(void);

/* Symbol: _Z23IMDebugConfigurationSumiPhi */
/* Demangled: IMDebugConfigurationSum(int, unsigned char*, int) */
int _Z23IMDebugConfigurationSumiPhi(void);

/* Symbol: _ZN9tesseract22TraceBlockOnReducedPixEP5BLOCKi6ICOORDPiS3_ */
/* Demangled: tesseract::TraceBlockOnReducedPix(BLOCK*, int, ICOORD, int*, int*) */
int _ZN9tesseract22TraceBlockOnReducedPixEP5BLOCKi6ICOORDPiS3_(void);

/* Symbol: _ZN9tesseract7TabFind14FindTabVectorsEPNS_14TabVector_LISTEP13BLOBNBOX_LISTP8TO_BLOCKidPNS_16ColPartitionGridEP6FCOORDSA_ */
/* Demangled: tesseract::TabFind::FindTabVectors(tesseract::TabVector_LIST*, BLOBNBOX_LIST*, TO_BLOCK*, int, double, tesseract::ColPartitionGrid*, FCOORD*, FCOORD*) */
int _ZN9tesseract7TabFind14FindTabVectorsEPNS_14TabVector_LISTEP13BLOBNBOX_LISTP8TO_BLOCKidPNS_16ColPartitionGridEP6FCOORDSA_(void);

/* Symbol: _ZN9tesseract9ImageFind10ClipToByteEd */
/* Demangled: tesseract::ImageFind::ClipToByte(double) */
int _ZN9tesseract9ImageFind10ClipToByteEd(void);

/* Symbol: _ZTVNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE;

/* Symbol: _ZN8WERD_RES10InsertSeamEiP4SEAM */
/* Demangled: WERD_RES::InsertSeam(int, SEAM*) */
int _ZN8WERD_RES10InsertSeamEiP4SEAM(void);

/* Symbol: _ZN9tesseract8Classify13GetFontinfoIdEP18ADAPT_CLASS_STRUCTh */
/* Demangled: tesseract::Classify::GetFontinfoId(ADAPT_CLASS_STRUCT*, unsigned char) */
int _ZN9tesseract8Classify13GetFontinfoIdEP18ADAPT_CLASS_STRUCTh(void);

/* Symbol: _ZN9tesseract11CharAltList4SortEv */
/* Demangled: tesseract::CharAltList::Sort() */
int _ZN9tesseract11CharAltList4SortEv(void);

/* Symbol: _ZN9tesseract12ColPartitionD2Ev */
/* Demangled: tesseract::ColPartition::~ColPartition() */
int _ZN9tesseract12ColPartitionD2Ev(void);

/* Symbol: _Z20compute_row_descdropP6TO_ROWfiP5STATS */
/* Demangled: compute_row_descdrop(TO_ROW*, float, int, STATS*) */
int _Z20compute_row_descdropP6TO_ROWfiP5STATS(void);

/* Symbol: _ZN9tesseract11TessBaseAPI10GetBoxTextEi */
/* Demangled: tesseract::TessBaseAPI::GetBoxText(int) */
int _ZN9tesseract11TessBaseAPI10GetBoxTextEi(void);

/* Symbol: _ZN8WERD_RES12SetupBoxWordEv */
/* Demangled: WERD_RES::SetupBoxWord() */
int _ZN8WERD_RES12SetupBoxWordEv(void);

/* Symbol: _ZN9tesseract14EquationDetect19ComputeCPsSuperBBoxEv */
/* Demangled: tesseract::EquationDetect::ComputeCPsSuperBBox() */
int _ZN9tesseract14EquationDetect19ComputeCPsSuperBBoxEv(void);

/* Symbol: _ZN6DENORMaSERKS_ */
/* Demangled: DENORM::operator=(DENORM const&) */
int _ZN6DENORMaSERKS_(void);

/* Symbol: _ZN3ROWC2EP6TO_ROWss */
/* Demangled: ROW::ROW(TO_ROW*, short, short) */
int _ZN3ROWC2EP6TO_ROWss(void);

/* Symbol: _ZN9tesseract9Tesseract20fix_fuzzy_space_listER13WERD_RES_LISTP3ROWP5BLOCK */
/* Demangled: tesseract::Tesseract::fix_fuzzy_space_list(WERD_RES_LIST&, ROW*, BLOCK*) */
int _ZN9tesseract9Tesseract20fix_fuzzy_space_listER13WERD_RES_LISTP3ROWP5BLOCK(void);

/* Symbol: _ZN9tesseract11WordFeature11DeSerializeEbP7__sFILE */
/* Demangled: tesseract::WordFeature::DeSerialize(bool, __sFILE*) */
int _ZN9tesseract11WordFeature11DeSerializeEbP7__sFILE(void);

/* Symbol: _ZN9tesseract13DocumentCache10AddToCacheEPNS_12DocumentDataE */
/* Demangled: tesseract::DocumentCache::AddToCache(tesseract::DocumentData*) */
int _ZN9tesseract13DocumentCache10AddToCacheEPNS_12DocumentDataE(void);

/* Symbol: _ZN9tesseract12IndexMapBiDi17InitAndSetupRangeEiii */
/* Demangled: tesseract::IndexMapBiDi::InitAndSetupRange(int, int, int) */
int _ZN9tesseract12IndexMapBiDi17InitAndSetupRangeEiii(void);

/* Symbol: _ZN9tesseract8Classify12LargeSpeckleERK5TBLOB */
/* Demangled: tesseract::Classify::LargeSpeckle(TBLOB const&) */
int _ZN9tesseract8Classify12LargeSpeckleERK5TBLOB(void);

/* Symbol: _ZN9tesseract8Classify21EndAdaptiveClassifierEv */
/* Demangled: tesseract::Classify::EndAdaptiveClassifier() */
int _ZN9tesseract8Classify21EndAdaptiveClassifierEv(void);

/* Symbol: _ZN13GenericVectorIN9tesseract19RowScratchRegistersEE5clearEv */
/* Demangled: GenericVector<tesseract::RowScratchRegisters>::clear() */
int _ZN13GenericVectorIN9tesseract19RowScratchRegistersEE5clearEv(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract8IntParamEE7reserveEi */
/* Demangled: GenericVector<tesseract::IntParam*>::reserve(int) */
int _ZN13GenericVectorIPN9tesseract8IntParamEE7reserveEi(void);

/* Symbol: _Z13NextExtremityP8list_rec */
/* Demangled: NextExtremity(list_rec*) */
int _Z13NextExtremityP8list_rec(void);

/* Symbol: _ZN9tesseract12ColPartition21CountOverlappingBoxesERK4TBOX */
/* Demangled: tesseract::ColPartition::CountOverlappingBoxes(TBOX const&) */
int _ZN9tesseract12ColPartition21CountOverlappingBoxesERK4TBOX(void);

/* Symbol: wordrec_blob_pause */
/* Demangled: wordrec_blob_pause */
extern void* wordrec_blob_pause;

/* Symbol: _ZN9tesseract9Tesseract25fixspace_thinks_word_doneEP8WERD_RES */
/* Demangled: tesseract::Tesseract::fixspace_thinks_word_done(WERD_RES*) */
int _ZN9tesseract9Tesseract25fixspace_thinks_word_doneEP8WERD_RES(void);

/* Symbol: _ZN9tesseract20LikelyParagraphStartERKNS_19RowScratchRegistersES2_NS_22ParagraphJustificationE */
/* Demangled: tesseract::LikelyParagraphStart(tesseract::RowScratchRegisters const&, tesseract::RowScratchRegisters const&, tesseract::ParagraphJustification) */
int _ZN9tesseract20LikelyParagraphStartERKNS_19RowScratchRegistersES2_NS_22ParagraphJustificationE(void);

/* Symbol: _Z24compute_reject_thresholdP11WERD_CHOICE */
/* Demangled: compute_reject_threshold(WERD_CHOICE*) */
int _Z24compute_reject_thresholdP11WERD_CHOICE(void);

/* Symbol: _Z9alloc_memi */
/* Demangled: alloc_mem(int) */
int _Z9alloc_memi(void);

/* Symbol: _ZN9tesseract9BitVectoraNERKS0_ */
/* Demangled: tesseract::BitVector::operator&=(tesseract::BitVector const&) */
int _ZN9tesseract9BitVectoraNERKS0_(void);

/* Symbol: _ZN9tesseract14TessClassifier17DisplayClassifyAsERKNS_14TrainingSampleEP3PixiiPNS_13PointerVectorI10ScrollViewEE */
/* Demangled: tesseract::TessClassifier::DisplayClassifyAs(tesseract::TrainingSample const&, Pix*, int, int, tesseract::PointerVector<ScrollView>*) */
int _ZN9tesseract14TessClassifier17DisplayClassifyAsERKNS_14TrainingSampleEP3PixiiPNS_13PointerVectorI10ScrollViewEE(void);

/* Symbol: _ZN13GenericVectorIP8BLOBNBOXE9push_backES1_ */
/* Demangled: GenericVector<BLOBNBOX*>::push_back(BLOBNBOX*) */
int _ZN13GenericVectorIP8BLOBNBOXE9push_backES1_(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract12DocumentDataEE9push_backES2_ */
/* Demangled: GenericVector<tesseract::DocumentData*>::push_back(tesseract::DocumentData*) */
int _ZN13GenericVectorIPN9tesseract12DocumentDataEE9push_backES2_(void);

/* Symbol: _ZN9tesseract6CCUtilD2Ev */
/* Demangled: tesseract::CCUtil::~CCUtil() */
int _ZN9tesseract6CCUtilD2Ev(void);

/* Symbol: _ZN10UNICHARSETC2Ev */
/* Demangled: UNICHARSET::UNICHARSET() */
int _ZN10UNICHARSETC2Ev(void);

/* Symbol: _ZN9tesseract10ShapeTable14BuildFromShapeERKNS_5ShapeERKS0_ */
/* Demangled: tesseract::ShapeTable::BuildFromShape(tesseract::Shape const&, tesseract::ShapeTable const&) */
int _ZN9tesseract10ShapeTable14BuildFromShapeERKNS_5ShapeERKS0_(void);

/* Symbol: _ZN9tesseract17CubeLineSegmenter18kMaxValidLineRatioE */
/* Demangled: tesseract::CubeLineSegmenter::kMaxValidLineRatio */
extern void* _ZN9tesseract17CubeLineSegmenter18kMaxValidLineRatioE;

/* Symbol: _ZN13GenericVectorIP5BLOCKE15double_the_sizeEv */
/* Demangled: GenericVector<BLOCK*>::double_the_size() */
int _ZN13GenericVectorIP5BLOCKE15double_the_sizeEv(void);

/* Symbol: _ZTCNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern void* _ZTCNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE;

/* Symbol: _ZN9tesseract28textord_tabfind_show_columnsE */
/* Demangled: tesseract::textord_tabfind_show_columns */
extern void* _ZN9tesseract28textord_tabfind_show_columnsE;

/* Symbol: _ZN7FPSEGPTC1Es */
/* Demangled: FPSEGPT::FPSEGPT(short) */
int _ZN7FPSEGPTC1Es(void);

/* Symbol: _ZN9tesseract39textord_tabvector_vertical_gap_fractionE */
/* Demangled: tesseract::textord_tabvector_vertical_gap_fraction */
extern void* _ZN9tesseract39textord_tabvector_vertical_gap_fractionE;

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int fn___aeabi_memcpy4(void) __asm__("__aeabi_memcpy4");

/* Symbol: _Z17CreateClusterTreeP9CLUSTERER */
/* Demangled: CreateClusterTree(CLUSTERER*) */
int _Z17CreateClusterTreeP9CLUSTERER(void);

/* Symbol: _ZN9tesseract9Tesseract23doc_and_block_rejectionER11PAGE_RES_ITh */
/* Demangled: tesseract::Tesseract::doc_and_block_rejection(PAGE_RES_IT&, unsigned char) */
int _ZN9tesseract9Tesseract23doc_and_block_rejectionER11PAGE_RES_ITh(void);

/* Symbol: _ZN9tesseract7Textord19compute_row_xheightEP6TO_ROWRK6FCOORDfi */
/* Demangled: tesseract::Textord::compute_row_xheight(TO_ROW*, FCOORD const&, float, int) */
int _ZN9tesseract7Textord19compute_row_xheightEP6TO_ROWRK6FCOORDfi(void);

/* Symbol: _ZN9tesseract40ConvertHypothesizedModelRunsToParagraphsEiRK13GenericVectorINS_19RowScratchRegistersEEPS0_IP4PARAEPNS_15ParagraphTheoryE */
/* Demangled: tesseract::ConvertHypothesizedModelRunsToParagraphs(int, GenericVector<tesseract::RowScratchRegisters> const&, GenericVector<PARA*>*, tesseract::ParagraphTheory*) */
int _ZN9tesseract40ConvertHypothesizedModelRunsToParagraphsEiRK13GenericVectorINS_19RowScratchRegistersEEPS0_IP4PARAEPNS_15ParagraphTheoryE(void);

/* Symbol: _ZN11WERD_CHOICE21SetAllScriptPositionsEN9tesseract9ScriptPosE */
/* Demangled: WERD_CHOICE::SetAllScriptPositions(tesseract::ScriptPos) */
int _ZN11WERD_CHOICE21SetAllScriptPositionsEN9tesseract9ScriptPosE(void);

/* Symbol: _ZN9tesseract4Bmp816FromCharDumpFileEP7__sFILE */
/* Demangled: tesseract::Bmp8::FromCharDumpFile(__sFILE*) */
int _ZN9tesseract4Bmp816FromCharDumpFileEP7__sFILE(void);

/* Symbol: _ZN9tesseract4Bmp8D2Ev */
/* Demangled: tesseract::Bmp8::~Bmp8() */
int _ZN9tesseract4Bmp8D2Ev(void);

/* Symbol: _ZN9tesseract8BlobGridC1EiRK6ICOORDS3_ */
/* Demangled: tesseract::BlobGrid::BlobGrid(int, ICOORD const&, ICOORD const&) */
int _ZN9tesseract8BlobGridC1EiRK6ICOORDS3_(void);

/* Symbol: _ZN9tesseract15TableRecognizer25RecognizeWhitespacedTableERK4TBOXPNS_15StructuredTableE */
/* Demangled: tesseract::TableRecognizer::RecognizeWhitespacedTable(TBOX const&, tesseract::StructuredTable*) */
int _ZN9tesseract15TableRecognizer25RecognizeWhitespacedTableERK4TBOXPNS_15StructuredTableE(void);

/* Symbol: words_default_fixed_limit */
/* Demangled: words_default_fixed_limit */
extern void* words_default_fixed_limit;

/* Symbol: _ZN9OSResults18update_best_scriptEi */
/* Demangled: OSResults::update_best_script(int) */
int _ZN9OSResults18update_best_scriptEi(void);

/* Symbol: _ZN9tesseract12ColPartition15HasGoodBaselineEv */
/* Demangled: tesseract::ColPartition::HasGoodBaseline() */
int _ZN9tesseract12ColPartition15HasGoodBaselineEv(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int fn___aeabi_memcpy8(void) __asm__("__aeabi_memcpy8");

/* Symbol: _ZNK5SPLIT4HideEv */
/* Demangled: SPLIT::Hide() const */
int _ZNK5SPLIT4HideEv(void);

/* Symbol: _ZNK5STATS9local_minEi */
/* Demangled: STATS::local_min(int) const */
int _ZNK5STATS9local_minEi(void);

/* Symbol: _ZN10POLY_BLOCK8containsEPS_ */
/* Demangled: POLY_BLOCK::contains(POLY_BLOCK*) */
int _ZN10POLY_BLOCK8containsEPS_(void);

/* Symbol: _ZN9tesseract8Classify16RemoveBadMatchesEP13ADAPT_RESULTS */
/* Demangled: tesseract::Classify::RemoveBadMatches(ADAPT_RESULTS*) */
int _ZN9tesseract8Classify16RemoveBadMatchesEP13ADAPT_RESULTS(void);

/* Symbol: _ZN9tesseract12ErrorCounterC1ERK10UNICHARSETi */
/* Demangled: tesseract::ErrorCounter::ErrorCounter(UNICHARSET const&, int) */
int _ZN9tesseract12ErrorCounterC1ERK10UNICHARSETi(void);

/* Symbol: _ZN13GenericVectorIN9tesseract12DawgPositionEEaSERKS2_ */
/* Demangled: GenericVector<tesseract::DawgPosition>::operator=(GenericVector<tesseract::DawgPosition> const&) */
int _ZN13GenericVectorIN9tesseract12DawgPositionEEaSERKS2_(void);

/* Symbol: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeGetUTF8Text */
/* Demangled: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeGetUTF8Text */
int Java_com_googlecode_tesseract_android_TessBaseAPI_nativeGetUTF8Text(void);

/* Symbol: _ZN13GenericVectorIP6C_BLOBE5clearEv */
/* Demangled: GenericVector<C_BLOB*>::clear() */
int _ZN13GenericVectorIP6C_BLOBE5clearEv(void);

/* Symbol: _ZN9tesseract9Tesseract23init_tesseract_internalEPKcS2_S2_NS_13OcrEngineModeEPPciPK13GenericVectorI6STRINGESA_b */
/* Demangled: tesseract::Tesseract::init_tesseract_internal(char const*, char const*, char const*, tesseract::OcrEngineMode, char**, int, GenericVector<STRING> const*, GenericVector<STRING> const*, bool) */
int _ZN9tesseract9Tesseract23init_tesseract_internalEPKcS2_S2_NS_13OcrEngineModeEPPciPK13GenericVectorI6STRINGESA_b(void);

/* Symbol: _ZN9tesseract14SampleIterator4NextEv */
/* Demangled: tesseract::SampleIterator::Next() */
int _ZN9tesseract14SampleIterator4NextEv(void);

/* Symbol: _ZN9tesseract27textord_tabfind_show_blocksE */
/* Demangled: tesseract::textord_tabfind_show_blocks */
extern void* _ZN9tesseract27textord_tabfind_show_blocksE;

/* Symbol: _ZN9tesseract15CubeRecoContextD2Ev */
/* Demangled: tesseract::CubeRecoContext::~CubeRecoContext() */
int _ZN9tesseract15CubeRecoContextD2Ev(void);

/* Symbol: _ZN9tesseract8CCStructD1Ev */
/* Demangled: tesseract::CCStruct::~CCStruct() */
int _ZN9tesseract8CCStructD1Ev(void);

/* Symbol: _ZN6C_BLOB26ConstructBlobsFromOutlinesEbP14C_OUTLINE_LISTP9C_BLOB_ITS3_ */
/* Demangled: C_BLOB::ConstructBlobsFromOutlines(bool, C_OUTLINE_LIST*, C_BLOB_IT*, C_BLOB_IT*) */
int _ZN6C_BLOB26ConstructBlobsFromOutlinesEbP14C_OUTLINE_LISTP9C_BLOB_ITS3_(void);

/* Symbol: _ZN6STRING11add_str_intEPKci */
/* Demangled: STRING::add_str_int(char const*, int) */
int _ZN6STRING11add_str_intEPKci(void);

/* Symbol: edges_use_new_outline_complexity */
/* Demangled: edges_use_new_outline_complexity */
extern void* edges_use_new_outline_complexity;

/* Symbol: _ZN14CLIST_ITERATOR15extract_sublistEPS_ */
/* Demangled: CLIST_ITERATOR::extract_sublist(CLIST_ITERATOR*) */
int _ZN14CLIST_ITERATOR15extract_sublistEPS_(void);

/* Symbol: _Z15row_pitch_statsP6TO_ROWih */
/* Demangled: row_pitch_stats(TO_ROW*, int, unsigned char) */
int _Z15row_pitch_statsP6TO_ROWih(void);

/* Symbol: _ZNK9tesseract14ResultIterator14ParagraphIsLtrEv */
/* Demangled: tesseract::ResultIterator::ParagraphIsLtr() const */
int _ZNK9tesseract14ResultIterator14ParagraphIsLtrEv(void);

/* Symbol: _ZN12BlamerBundle10JoinBlamesERKS_S1_b */
/* Demangled: BlamerBundle::JoinBlames(BlamerBundle const&, BlamerBundle const&, bool) */
int _ZN12BlamerBundle10JoinBlamesERKS_S1_b(void);

/* Symbol: _Z21AddProtoToProtoPrunerP12PROTO_STRUCTiP16INT_CLASS_STRUCTb */
/* Demangled: AddProtoToProtoPruner(PROTO_STRUCT*, int, INT_CLASS_STRUCT*, bool) */
int _Z21AddProtoToProtoPrunerP12PROTO_STRUCTiP16INT_CLASS_STRUCTb(void);

/* Symbol: _Z12InvertMatrixPKfiPf */
/* Demangled: InvertMatrix(float const*, int, float*) */
int _Z12InvertMatrixPKfiPf(void);

/* Symbol: _ZNK9tesseract14SampleIterator9GetSampleEv */
/* Demangled: tesseract::SampleIterator::GetSample() const */
int _ZNK9tesseract14SampleIterator9GetSampleEv(void);

/* Symbol: _ZN9tesseract8CharSamp16FromCharDumpFileEPPh */
/* Demangled: tesseract::CharSamp::FromCharDumpFile(unsigned char**) */
int _ZN9tesseract8CharSamp16FromCharDumpFileEPPh(void);

/* Symbol: _ZNK13GenericVectorIP8WERD_RESE4backEv */
/* Demangled: GenericVector<WERD_RES*>::back() const */
int _ZNK13GenericVectorIP8WERD_RESE4backEv(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract12ColPartitionEE7reserveEi */
/* Demangled: GenericVector<tesseract::ColPartition*>::reserve(int) */
int _ZN13GenericVectorIPN9tesseract12ColPartitionEE7reserveEi(void);

/* Symbol: _Z9open_filePKcS0_ */
/* Demangled: open_file(char const*, char const*) */
int _Z9open_filePKcS0_(void);

/* Symbol: _ZN9tesseract18ShiroRekhaSplitter5SplitEb */
/* Demangled: tesseract::ShiroRekhaSplitter::Split(bool) */
int _ZN9tesseract18ShiroRekhaSplitter5SplitEb(void);

/* Symbol: _ZN10UNICHARMAPC1Ev */
/* Demangled: UNICHARMAP::UNICHARMAP() */
int _ZN10UNICHARMAPC1Ev(void);

/* Symbol: _Z18NewEllipticalProtosP6sampleP10STATISTICS */
/* Demangled: NewEllipticalProto(short, sample*, STATISTICS*) */
int _Z18NewEllipticalProtosP6sampleP10STATISTICS(void);

/* Symbol: _Z21MakePotentialClustersP17ClusteringContextP6samplei */
/* Demangled: MakePotentialClusters(ClusteringContext*, sample*, int) */
int _Z21MakePotentialClustersP17ClusteringContextP6samplei(void);

/* Symbol: _ZNK9tesseract10ShapeTable13AlreadyMergedEii */
/* Demangled: tesseract::ShapeTable::AlreadyMerged(int, int) const */
int _ZNK9tesseract10ShapeTable13AlreadyMergedEii(void);

/* Symbol: kernel_src */
/* Demangled: kernel_src */
extern void* kernel_src;

/* Symbol: _ZN9tesseract9ImageDataC2Ev */
/* Demangled: tesseract::ImageData::ImageData() */
int _ZN9tesseract9ImageDataC2Ev(void);

/* Symbol: _ZNK9tesseract11BaselineRow22SetupOldLineParametersEP6TO_ROW */
/* Demangled: tesseract::BaselineRow::SetupOldLineParameters(TO_ROW*) const */
int _ZNK9tesseract11BaselineRow22SetupOldLineParametersEP6TO_ROW(void);

/* Symbol: _ZN9tesseract36textord_tabvector_vertical_box_ratioE */
/* Demangled: tesseract::textord_tabvector_vertical_box_ratio */
extern void* _ZN9tesseract36textord_tabvector_vertical_box_ratioE;

/* Symbol: _ZN9tesseract10GridSearchI8BLOBNBOX14BLOBNBOX_CLIST13BLOBNBOX_C_ITE10CommonNextEv */
/* Demangled: tesseract::GridSearch<BLOBNBOX, BLOBNBOX_CLIST, BLOBNBOX_C_IT>::CommonNext() */
int _ZN9tesseract10GridSearchI8BLOBNBOX14BLOBNBOX_CLIST13BLOBNBOX_C_ITE10CommonNextEv(void);

/* Symbol: _ZN9tesseract11TessBaseAPI10GetOsdTextEi */
/* Demangled: tesseract::TessBaseAPI::GetOsdText(int) */
int _ZN9tesseract11TessBaseAPI10GetOsdTextEi(void);

/* Symbol: TessUnlvRendererCreate */
/* Demangled: TessUnlvRendererCreate */
int TessUnlvRendererCreate(void);

/* Symbol: _ZN6C_BLOB4moveE6ICOORD */
/* Demangled: C_BLOB::move(ICOORD) */
int _ZN6C_BLOB4moveE6ICOORD(void);

/* Symbol: _ZN9tesseract11CharSampSetD2Ev */
/* Demangled: tesseract::CharSampSet::~CharSampSet() */
int _ZN9tesseract11CharSampSetD2Ev(void);

/* Symbol: _ZN13GenericVectorIN9tesseract12KDPtrPairDecIf4SEAMEEE9push_backES3_ */
/* Demangled: GenericVector<tesseract::KDPtrPairDec<float, SEAM> >::push_back(tesseract::KDPtrPairDec<float, SEAM>) */
int _ZN13GenericVectorIN9tesseract12KDPtrPairDecIf4SEAMEEE9push_backES3_(void);

/* Symbol: _ZN13GenericVectorI6STRINGE9push_backES0_ */
/* Demangled: GenericVector<STRING>::push_back(STRING) */
int _ZN13GenericVectorI6STRINGE9push_backES0_(void);

/* Symbol: _ZN9tesseract9Tesseract18ClassifyBlobAsWordEiP11PAGE_RES_ITP6C_BLOBP6STRINGPf */
/* Demangled: tesseract::Tesseract::ClassifyBlobAsWord(int, PAGE_RES_IT*, C_BLOB*, STRING*, float*) */
int _ZN9tesseract9Tesseract18ClassifyBlobAsWordEiP11PAGE_RES_ITP6C_BLOBP6STRINGPf(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract11DoubleParamEE6removeEi */
/* Demangled: GenericVector<tesseract::DoubleParam*>::remove(int) */
int _ZN13GenericVectorIPN9tesseract11DoubleParamEE6removeEi(void);

/* Symbol: _ZNK5SPLIT12bounding_boxEv */
/* Demangled: SPLIT::bounding_box() const */
int _ZNK5SPLIT12bounding_boxEv(void);

/* Symbol: _Z19MakeRowFromSubBlobsP8TO_BLOCKP6C_BLOBP9TO_ROW_IT */
/* Demangled: MakeRowFromSubBlobs(TO_BLOCK*, C_BLOB*, TO_ROW_IT*) */
int _Z19MakeRowFromSubBlobsP8TO_BLOCKP6C_BLOBP9TO_ROW_IT(void);

/* Symbol: _ZN9tesseract17ColSegment_zapperEP10ELIST_LINK */
/* Demangled: tesseract::ColSegment_zapper(ELIST_LINK*) */
int _ZN9tesseract17ColSegment_zapperEP10ELIST_LINK(void);

/* Symbol: _ZTVN9tesseract15TessTsvRendererE */
/* Demangled: vtable for tesseract::TessTsvRenderer */
extern void* _ZTVN9tesseract15TessTsvRendererE;

/* Symbol: _ZN4WERDC1EP11C_BLOB_LISTPS_ */
/* Demangled: WERD::WERD(C_BLOB_LIST*, WERD*) */
int _ZN4WERDC1EP11C_BLOB_LISTPS_(void);

/* Symbol: _ZN7QSPLINEaSERKS_ */
/* Demangled: QSPLINE::operator=(QSPLINE const&) */
int _ZN7QSPLINEaSERKS_(void);

/* Symbol: _ZN9tesseract4Bmp815CreateBmpBufferEh */
/* Demangled: tesseract::Bmp8::CreateBmpBuffer(unsigned char) */
int _ZN9tesseract4Bmp815CreateBmpBufferEh(void);

/* Symbol: _ZTV29_TessMemberResultCallback_0_2ILb0EbN9tesseract11StrokeWidthEPNS0_12ColPartitionEP4TBOXE */
/* Demangled: vtable for _TessMemberResultCallback_0_2<false, bool, tesseract::StrokeWidth, tesseract::ColPartition*, TBOX*> */
extern void* _ZTV29_TessMemberResultCallback_0_2ILb0EbN9tesseract11StrokeWidthEPNS0_12ColPartitionEP4TBOXE;

/* Symbol: _ZN9tesseract11TessBaseAPI19ReadDebugConfigFileEPKc */
/* Demangled: tesseract::TessBaseAPI::ReadDebugConfigFile(char const*) */
int _ZN9tesseract11TessBaseAPI19ReadDebugConfigFileEPKc(void);

/* Symbol: _ZNK9tesseract12PageIterator11BoundingBoxENS_17PageIteratorLevelEiPiS2_S2_S2_ */
/* Demangled: tesseract::PageIterator::BoundingBox(tesseract::PageIteratorLevel, int, int*, int*, int*, int*) const */
int _ZNK9tesseract12PageIterator11BoundingBoxENS_17PageIteratorLevelEiPiS2_S2_S2_(void);

/* Symbol: _ZN8WERD_RES16merge_tess_failsEv */
/* Demangled: WERD_RES::merge_tess_fails() */
int _ZN8WERD_RES16merge_tess_failsEv(void);

/* Symbol: _ZN6REJMAP18rej_word_small_xhtEv */
/* Demangled: REJMAP::rej_word_small_xht() */
int _ZN6REJMAP18rej_word_small_xhtEv(void);

/* Symbol: _ZNK5STATS13print_summaryEv */
/* Demangled: STATS::print_summary() const */
int _ZNK5STATS13print_summaryEv(void);

/* Symbol: _ZN9tesseract10FeatureBmp20ComputeFeatureBitmapEPNS_8CharSampE */
/* Demangled: tesseract::FeatureBmp::ComputeFeatureBitmap(tesseract::CharSamp*) */
int _ZN9tesseract10FeatureBmp20ComputeFeatureBitmapEPNS_8CharSampE(void);

/* Symbol: _ZN9tesseract9NeuralNet15FastFeedForwardIdEEbPKT_PS2_ */
/* Demangled: bool tesseract::NeuralNet::FastFeedForward<double>(double const*, double*) */
int _ZN9tesseract9NeuralNet15FastFeedForwardIdEEbPKT_PS2_(void);

/* Symbol: _ZN9tesseract11StrokeWidthC1EiRK6ICOORDS3_ */
/* Demangled: tesseract::StrokeWidth::StrokeWidth(int, ICOORD const&, ICOORD const&) */
int _ZN9tesseract11StrokeWidthC1EiRK6ICOORDS3_(void);

/* Symbol: _ZNK8TESSLINE12bounding_boxEv */
/* Demangled: TESSLINE::bounding_box() const */
int _ZNK8TESSLINE12bounding_boxEv(void);

/* Symbol: _ZN9tesseract7WordrecD2Ev */
/* Demangled: tesseract::Wordrec::~Wordrec() */
int _ZN9tesseract7WordrecD2Ev(void);

/* Symbol: _Z18NewCharDescriptionRK19FEATURE_DEFS_STRUCT */
/* Demangled: NewCharDescription(FEATURE_DEFS_STRUCT const&) */
int _Z18NewCharDescriptionRK19FEATURE_DEFS_STRUCT(void);

/* Symbol: _Z20make_illegal_segmentP12FPSEGPT_LIST4TBOX11BLOBNBOX_ITsssS0_ */
/* Demangled: make_illegal_segment(FPSEGPT_LIST*, TBOX, BLOBNBOX_IT, short, short, short, FPSEGPT_LIST*) */
int _Z20make_illegal_segmentP12FPSEGPT_LIST4TBOX11BLOBNBOX_ITsssS0_(void);

/* Symbol: _ZN9tesseract14EquationDetect19IdentifyBlobsToSkipEPNS_12ColPartitionE */
/* Demangled: tesseract::EquationDetect::IdentifyBlobsToSkip(tesseract::ColPartition*) */
int _ZN9tesseract14EquationDetect19IdentifyBlobsToSkipEPNS_12ColPartitionE(void);

/* Symbol: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeSetDebug */
/* Demangled: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeSetDebug */
int Java_com_googlecode_tesseract_android_TessBaseAPI_nativeSetDebug(void);

/* Symbol: _ZN8WERD_RES5ClearEv */
/* Demangled: WERD_RES::Clear() */
int _ZN8WERD_RES5ClearEv(void);

/* Symbol: _ZN10UNICHARSET15post_load_setupEv */
/* Demangled: UNICHARSET::post_load_setup() */
int _ZN10UNICHARSET15post_load_setupEv(void);

/* Symbol: _Z15NumBucketsMatchPvS_ */
/* Demangled: NumBucketsMatch(void*, void*) */
int _Z15NumBucketsMatchPvS_(void);

/* Symbol: _ZN9tesseract10ShapeTable11MergeShapesEii */
/* Demangled: tesseract::ShapeTable::MergeShapes(int, int) */
int _ZN9tesseract10ShapeTable11MergeShapesEii(void);

/* Symbol: _ZNK11WERD_CHOICE13permuter_nameEv */
/* Demangled: WERD_CHOICE::permuter_name() const */
int _ZNK11WERD_CHOICE13permuter_nameEv(void);

/* Symbol: _ZN9tesseract9ImageData11DeSerializeEbPNS_5TFileE */
/* Demangled: tesseract::ImageData::DeSerialize(bool, tesseract::TFile*) */
int _ZN9tesseract9ImageData11DeSerializeEbPNS_5TFileE(void);

/* Symbol: _ZNK9tesseract10BeamSearch8BestNodeEv */
/* Demangled: tesseract::BeamSearch::BestNode() const */
int _ZNK9tesseract10BeamSearch8BestNodeEv(void);

/* Symbol: _ZN9tesseract11TableFinder12GrowTableBoxERK4TBOXPS1_ */
/* Demangled: tesseract::TableFinder::GrowTableBox(TBOX const&, TBOX*) */
int _ZN9tesseract11TableFinder12GrowTableBoxERK4TBOXPS1_(void);

/* Symbol: _ZN6REJMAP24rej_word_contains_blanksEv */
/* Demangled: REJMAP::rej_word_contains_blanks() */
int _ZN6REJMAP24rej_word_contains_blanksEv(void);

/* Symbol: _ZN10POLY_BLOCK7overlapEPS_ */
/* Demangled: POLY_BLOCK::overlap(POLY_BLOCK*) */
int _ZN10POLY_BLOCK7overlapEPS_(void);

/* Symbol: _ZNK9tesseract14TessClassifier13GetShapeTableEv */
/* Demangled: tesseract::TessClassifier::GetShapeTable() const */
int _ZNK9tesseract14TessClassifier13GetShapeTableEv(void);

/* Symbol: _ZN9tesseract7TabFind9TidyBlobsEP8TO_BLOCK */
/* Demangled: tesseract::TabFind::TidyBlobs(TO_BLOCK*) */
int _ZN9tesseract7TabFind9TidyBlobsEP8TO_BLOCK(void);

/* Symbol: _ZN9tesseract15StructuredTable14CalculateStatsEv */
/* Demangled: tesseract::StructuredTable::CalculateStats() */
int _ZN9tesseract15StructuredTable14CalculateStatsEv(void);

/* Symbol: _ZN11PAGE_RES_IT11restart_rowEv */
/* Demangled: PAGE_RES_IT::restart_row() */
int _ZN11PAGE_RES_IT11restart_rowEv(void);

/* Symbol: _Z15BLOBNBOX_zapperP10ELIST_LINK */
/* Demangled: BLOBNBOX_zapper(ELIST_LINK*) */
int _Z15BLOBNBOX_zapperP10ELIST_LINK(void);

/* Symbol: _ZN9tesseract18TextlineProjection10PadBlobBoxEP8BLOBNBOXP4TBOX */
/* Demangled: tesseract::TextlineProjection::PadBlobBox(BLOBNBOX*, TBOX*) */
int _ZN9tesseract18TextlineProjection10PadBlobBoxEP8BLOBNBOXP4TBOX(void);

/* Symbol: __udivmodsi4 */
/* Demangled: __udivmodsi4 */
int fn___udivmodsi4(void) __asm__("__udivmodsi4");

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::imbue(std::__1::locale const&) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void);

/* Symbol: _ZN9tesseract7DPPoint16CostWithVarianceEPKS0_ */
/* Demangled: tesseract::DPPoint::CostWithVariance(tesseract::DPPoint const*) */
int _ZN9tesseract7DPPoint16CostWithVarianceEPKS0_(void);

/* Symbol: _ZN9tesseract10BeamSearch14CreateChildrenEPNS_12SearchColumnEPNS_9LangModelEPNS_10SearchNodeEPNS_11LangModEdgeEPNS_11CharAltListEi */
/* Demangled: tesseract::BeamSearch::CreateChildren(tesseract::SearchColumn*, tesseract::LangModel*, tesseract::SearchNode*, tesseract::LangModEdge*, tesseract::CharAltList*, int) */
int _ZN9tesseract10BeamSearch14CreateChildrenEPNS_12SearchColumnEPNS_9LangModelEPNS_10SearchNodeEPNS_11LangModEdgeEPNS_11CharAltListEi(void);

/* Symbol: _ZN9tesseract6BBGridINS_10ColSegmentENS_16ColSegment_CLISTENS_15ColSegment_C_ITEE4InitEiRK6ICOORDS7_ */
/* Demangled: tesseract::BBGrid<tesseract::ColSegment, tesseract::ColSegment_CLIST, tesseract::ColSegment_C_IT>::Init(int, ICOORD const&, ICOORD const&) */
int _ZN9tesseract6BBGridINS_10ColSegmentENS_16ColSegment_CLISTENS_15ColSegment_C_ITEE4InitEiRK6ICOORDS7_(void);

/* Symbol: _ZNSt3__112__hash_tableIPN9tesseract12ColPartitionENS1_7PtrHashIS2_EENS_8equal_toIS3_EENS_9allocatorIS3_EEE8__rehashEj */
/* Demangled: std::__1::__hash_table<tesseract::ColPartition*, tesseract::PtrHash<tesseract::ColPartition>, std::__1::equal_to<tesseract::ColPartition*>, std::__1::allocator<tesseract::ColPartition*> >::__rehash(unsigned int) */
int _ZNSt3__112__hash_tableIPN9tesseract12ColPartitionENS1_7PtrHashIS2_EENS_8equal_toIS3_EENS_9allocatorIS3_EEE8__rehashEj(void);

/* Symbol: _ZNK4LLSQ7pearsonEv */
/* Demangled: LLSQ::pearson() const */
int _ZNK4LLSQ7pearsonEv(void);

/* Symbol: _ZN9tesseract9BitVector4InitEi */
/* Demangled: tesseract::BitVector::Init(int) */
int _ZN9tesseract9BitVector4InitEi(void);

/* Symbol: _ZN9tesseract13MasterTrainer12LoadXHeightsEPKc */
/* Demangled: tesseract::MasterTrainer::LoadXHeights(char const*) */
int _ZN9tesseract13MasterTrainer12LoadXHeightsEPKc(void);

/* Symbol: textord_words_def_prop */
/* Demangled: textord_words_def_prop */
extern void* textord_words_def_prop;

/* Symbol: _ZN13GenericVectorI4TBOXE9push_backES0_ */
/* Demangled: GenericVector<TBOX>::push_back(TBOX) */
int _ZN13GenericVectorI4TBOXE9push_backES0_(void);

/* Symbol: _ZN13GenericVectorIPS_IiEE9push_backES1_ */
/* Demangled: GenericVector<GenericVector<int>*>::push_back(GenericVector<int>*) */
int _ZN13GenericVectorIPS_IiEE9push_backES1_(void);

/* Symbol: _ZN9tesseract18TessResultRenderer13BeginDocumentEPKc */
/* Demangled: tesseract::TessResultRenderer::BeginDocument(char const*) */
int _ZN9tesseract18TessResultRenderer13BeginDocumentEPKc(void);

/* Symbol: _ZN9tesseract12DocumentData12ReCachePagesEv */
/* Demangled: tesseract::DocumentData::ReCachePages() */
int _ZN9tesseract12DocumentData12ReCachePagesEv(void);

/* Symbol: _ZN3REJ20rej_before_nn_acceptEv */
/* Demangled: REJ::rej_before_nn_accept() */
int _ZN3REJ20rej_before_nn_acceptEv(void);

/* Symbol: _ZN14ELIST_ITERATOR15extract_sublistEPS_ */
/* Demangled: ELIST_ITERATOR::extract_sublist(ELIST_ITERATOR*) */
int _ZN14ELIST_ITERATOR15extract_sublistEPS_(void);

/* Symbol: _Z10strtofloatPKc */
/* Demangled: strtofloat(char const*) */
int _Z10strtofloatPKc(void);

/* Symbol: _Z11PrintProtosP12CLASS_STRUCT */
/* Demangled: PrintProtos(CLASS_STRUCT*) */
int _Z11PrintProtosP12CLASS_STRUCT(void);

/* Symbol: _ZN9tesseract15StructuredTable21VerifyLinedTableCellsEv */
/* Demangled: tesseract::StructuredTable::VerifyLinedTableCells() */
int _ZN9tesseract15StructuredTable21VerifyLinedTableCellsEv(void);

/* Symbol: _ZN9tesseract7Wordrec16improve_one_blobERK13GenericVectorIP11BLOB_CHOICEEPS1_I12DANGERR_INFOEbbP8WERD_RESPi */
/* Demangled: tesseract::Wordrec::improve_one_blob(GenericVector<BLOB_CHOICE*> const&, GenericVector<DANGERR_INFO>*, bool, bool, WERD_RES*, int*) */
int _ZN9tesseract7Wordrec16improve_one_blobERK13GenericVectorIP11BLOB_CHOICEEPS1_I12DANGERR_INFOEbbP8WERD_RESPi(void);

/* Symbol: _ZN8WERD_RES15InitNonPointersEv */
/* Demangled: WERD_RES::InitNonPointers() */
int _ZN8WERD_RES15InitNonPointersEv(void);

/* Symbol: _ZN4WERDC1EP11C_BLOB_LISThPKc */
/* Demangled: WERD::WERD(C_BLOB_LIST*, unsigned char, char const*) */
int _ZN4WERDC1EP11C_BLOB_LISThPKc(void);

/* Symbol: _ZN5CLIST4sortEPFiPKvS1_E */
/* Demangled: CLIST::sort(int (*)(void const*, void const*)) */
int _ZN5CLIST4sortEPFiPKvS1_E(void);

/* Symbol: _ZN9tesseract15StructuredTable16CountFilledCellsEv */
/* Demangled: tesseract::StructuredTable::CountFilledCells() */
int _ZN9tesseract15StructuredTable16CountFilledCellsEv(void);

/* Symbol: _ZN9tesseract17LMConsistencyInfo25ComputeXheightConsistencyEPK11BLOB_CHOICEb */
/* Demangled: tesseract::LMConsistencyInfo::ComputeXheightConsistency(BLOB_CHOICE const*, bool) */
int _ZN9tesseract17LMConsistencyInfo25ComputeXheightConsistencyEPK11BLOB_CHOICEb(void);

/* Symbol: _ZNK9tesseract11TessBaseAPI14PrintVariablesEP7__sFILE */
/* Demangled: tesseract::TessBaseAPI::PrintVariables(__sFILE*) const */
int _ZNK9tesseract11TessBaseAPI14PrintVariablesEP7__sFILE(void);

/* Symbol: _ZN9tesseract4kRLME */
/* Demangled: tesseract::kRLM */
extern void* _ZN9tesseract4kRLME;

/* Symbol: _ZNK9tesseract8IndexMap9SerializeEP7__sFILE */
/* Demangled: tesseract::IndexMap::Serialize(__sFILE*) const */
int _ZNK9tesseract8IndexMap9SerializeEP7__sFILE(void);

/* Symbol: _ZN13GenericVectorIP3PixE7reserveEi */
/* Demangled: GenericVector<Pix*>::reserve(int) */
int _ZN13GenericVectorIP3PixE7reserveEi(void);

/* Symbol: _ZNK9tesseract4Bmp811IsIdenticalEPS0_ */
/* Demangled: tesseract::Bmp8::IsIdentical(tesseract::Bmp8*) const */
int _ZNK9tesseract4Bmp811IsIdenticalEPS0_(void);

/* Symbol: _ZNK9tesseract4Dawg12word_in_dawgERK11WERD_CHOICE */
/* Demangled: tesseract::Dawg::word_in_dawg(WERD_CHOICE const&) const */
int _ZNK9tesseract4Dawg12word_in_dawgERK11WERD_CHOICE(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::sync() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv(void);

/* Symbol: TessBaseAPIReadConfigFile */
/* Demangled: TessBaseAPIReadConfigFile */
int TessBaseAPIReadConfigFile(void);

/* Symbol: _ZNK9tesseract13FontInfoTable25SetContainsFontPropertiesEiRK13GenericVectorINS_10ScoredFontEE */
/* Demangled: tesseract::FontInfoTable::SetContainsFontProperties(int, GenericVector<tesseract::ScoredFont> const&) const */
int _ZNK9tesseract13FontInfoTable25SetContainsFontPropertiesEiRK13GenericVectorINS_10ScoredFontEE(void);

/* Symbol: _Z23delete_non_dropout_rowsP8TO_BLOCKf6FCOORDih */
/* Demangled: delete_non_dropout_rows(TO_BLOCK*, float, FCOORD, int, unsigned char) */
int _Z23delete_non_dropout_rowsP8TO_BLOCKf6FCOORDih(void);

/* Symbol: _ZN9tesseract9BitVector11SetSubtractERKS0_S2_ */
/* Demangled: tesseract::BitVector::SetSubtract(tesseract::BitVector const&, tesseract::BitVector const&) */
int _ZN9tesseract9BitVector11SetSubtractERKS0_S2_(void);

/* Symbol: _ZN9tesseract21ConvNetCharClassifier13SetLearnParamEPcf */
/* Demangled: tesseract::ConvNetCharClassifier::SetLearnParam(char*, float) */
int _ZN9tesseract21ConvNetCharClassifier13SetLearnParamEPcf(void);

/* Symbol: _ZN9tesseract9TabVectorC2ERKS0_NS_12TabAlignmentERK6ICOORDP8BLOBNBOX */
/* Demangled: tesseract::TabVector::TabVector(tesseract::TabVector const&, tesseract::TabAlignment, ICOORD const&, BLOBNBOX*) */
int _ZN9tesseract9TabVectorC2ERKS0_NS_12TabAlignmentERK6ICOORDP8BLOBNBOX(void);

/* Symbol: TessBaseAPIGetTextDirection */
/* Demangled: TessBaseAPIGetTextDirection */
int TessBaseAPIGetTextDirection(void);

/* Symbol: _ZN13GenericVectorIN9tesseract8BlobDataEE7reserveEi */
/* Demangled: GenericVector<tesseract::BlobData>::reserve(int) */
int _ZN13GenericVectorIN9tesseract8BlobDataEE7reserveEi(void);

/* Symbol: _Z19ExtractMicroFeatureP8list_recS0_ */
/* Demangled: ExtractMicroFeature(list_rec*, list_rec*) */
int _Z19ExtractMicroFeatureP8list_recS0_(void);

/* Symbol: _ZN9tesseract7TabFind19ComputeColumnWidthsEP10ScrollViewPNS_16ColPartitionGridE */
/* Demangled: tesseract::TabFind::ComputeColumnWidths(ScrollView*, tesseract::ColPartitionGrid*) */
int _ZN9tesseract7TabFind19ComputeColumnWidthsEP10ScrollViewPNS_16ColPartitionGridE(void);

/* Symbol: _ZN9tesseract4Bmp817HorizontalDeslantEPd */
/* Demangled: tesseract::Bmp8::HorizontalDeslant(double*) */
int _ZN9tesseract4Bmp817HorizontalDeslantEPd(void);

/* Symbol: _ZN9tesseract10CachedFile4OpenEv */
/* Demangled: tesseract::CachedFile::Open() */
int _ZN9tesseract10CachedFile4OpenEv(void);

/* Symbol: _ZN9tesseract11BaselineRow11FitBaselineEb */
/* Demangled: tesseract::BaselineRow::FitBaseline(bool) */
int _ZN9tesseract11BaselineRow11FitBaselineEb(void);

/* Symbol: _ZTV31_TessFunctionResultCallback_0_3ILb0EbP7__sFILEPN9tesseract7FontSetEbE */
/* Demangled: vtable for _TessFunctionResultCallback_0_3<false, bool, __sFILE*, tesseract::FontSet*, bool> */
extern void* _ZTV31_TessFunctionResultCallback_0_3ILb0EbP7__sFILEPN9tesseract7FontSetEbE;

/* Symbol: _ZN9tesseract24TraceOutlineOnReducedPixEP9C_OUTLINEi6ICOORDPiS3_ */
/* Demangled: tesseract::TraceOutlineOnReducedPix(C_OUTLINE*, int, ICOORD, int*, int*) */
int _ZN9tesseract24TraceOutlineOnReducedPixEP9C_OUTLINEi6ICOORDPiS3_(void);

/* Symbol: _ZN9tesseract11CCUtilMutex6UnlockEv */
/* Demangled: tesseract::CCUtilMutex::Unlock() */
int _ZN9tesseract11CCUtilMutex6UnlockEv(void);

/* Symbol: _ZNK5TBLOB14ComputeMomentsEP6FCOORDS1_ */
/* Demangled: TBLOB::ComputeMoments(FCOORD*, FCOORD*) const */
int _ZNK5TBLOB14ComputeMomentsEP6FCOORDS1_(void);

/* Symbol: _ZN9tesseract11TableFinder12LocateTablesEPNS_16ColPartitionGridEPPNS_15ColPartitionSetEP19TessResultCallback1IbiERK6FCOORD */
/* Demangled: tesseract::TableFinder::LocateTables(tesseract::ColPartitionGrid*, tesseract::ColPartitionSet**, TessResultCallback1<bool, int>*, FCOORD const&) */
int _ZN9tesseract11TableFinder12LocateTablesEPNS_16ColPartitionGridEPPNS_15ColPartitionSetEP19TessResultCallback1IbiERK6FCOORD(void);

/* Symbol: TessResultRendererInsert */
/* Demangled: TessResultRendererInsert */
int TessResultRendererInsert(void);

/* Symbol: textord_debug_images */
/* Demangled: textord_debug_images */
extern void* textord_debug_images;

/* Symbol: _ZN9tesseract9Tesseract30GetSubAndSuperscriptCandidatesEPK8WERD_RESPiPNS_9ScriptPosEPfS4_S6_S7_S7_S7_ */
/* Demangled: tesseract::Tesseract::GetSubAndSuperscriptCandidates(WERD_RES const*, int*, tesseract::ScriptPos*, float*, int*, tesseract::ScriptPos*, float*, float*, float*) */
int _ZN9tesseract9Tesseract30GetSubAndSuperscriptCandidatesEPK8WERD_RESPiPNS_9ScriptPosEPfS4_S6_S7_S7_S7_(void);

/* Symbol: _ZNK9tesseract9BitVector10NumSetBitsEv */
/* Demangled: tesseract::BitVector::NumSetBits() const */
int _ZNK9tesseract9BitVector10NumSetBitsEv(void);

/* Symbol: _ZN9tesseract8Classify18BaselineClassifierEP5TBLOBRK13GenericVectorI18INT_FEATURE_STRUCTERK20INT_FX_RESULT_STRUCTP22ADAPT_TEMPLATES_STRUCTP13ADAPT_RESULTS */
/* Demangled: tesseract::Classify::BaselineClassifier(TBLOB*, GenericVector<INT_FEATURE_STRUCT> const&, INT_FX_RESULT_STRUCT const&, ADAPT_TEMPLATES_STRUCT*, ADAPT_RESULTS*) */
int _ZN9tesseract8Classify18BaselineClassifierEP5TBLOBRK13GenericVectorI18INT_FEATURE_STRUCTERK20INT_FX_RESULT_STRUCTP22ADAPT_TEMPLATES_STRUCTP13ADAPT_RESULTS(void);

/* Symbol: _ZN9tesseract14CubeLineObject7ProcessEv */
/* Demangled: tesseract::CubeLineObject::Process() */
int _ZN9tesseract14CubeLineObject7ProcessEv(void);

/* Symbol: _ZN9tesseract9Tesseract19classify_word_pass1ERKNS_8WordDataEPP8WERD_RESPNS_13PointerVectorIS4_EE */
/* Demangled: tesseract::Tesseract::classify_word_pass1(tesseract::WordData const&, WERD_RES**, tesseract::PointerVector<WERD_RES>*) */
int _ZN9tesseract9Tesseract19classify_word_pass1ERKNS_8WordDataEPP8WERD_RESPNS_13PointerVectorIS4_EE(void);

/* Symbol: _Z15make_real_wordsPN9tesseract7TextordEP8TO_BLOCK6FCOORD */
/* Demangled: make_real_words(tesseract::Textord*, TO_BLOCK*, FCOORD) */
int _Z15make_real_wordsPN9tesseract7TextordEP8TO_BLOCK6FCOORD(void);

/* Symbol: _ZNK4WERD23restricted_bounding_boxEbb */
/* Demangled: WERD::restricted_bounding_box(bool, bool) const */
int _ZNK4WERD23restricted_bounding_boxEbb(void);

/* Symbol: _ZN13GenericVectorIP11WERD_CHOICEE9push_backES1_ */
/* Demangled: GenericVector<WERD_CHOICE*>::push_back(WERD_CHOICE*) */
int _ZN13GenericVectorIP11WERD_CHOICEE9push_backES1_(void);

/* Symbol: _ZN9tesseract10CubeObjectD1Ev */
/* Demangled: tesseract::CubeObject::~CubeObject() */
int _ZN9tesseract10CubeObjectD1Ev(void);

/* Symbol: _ZN9tesseract16ImageThresholder20GetPixRectThresholdsEv */
/* Demangled: tesseract::ImageThresholder::GetPixRectThresholds() */
int _ZN9tesseract16ImageThresholder20GetPixRectThresholdsEv(void);

/* Symbol: _ZN13GenericVectorIN9tesseract8FontInfoEE9push_backES1_ */
/* Demangled: GenericVector<tesseract::FontInfo>::push_back(tesseract::FontInfo) */
int _ZN13GenericVectorIN9tesseract8FontInfoEE9push_backES1_(void);

/* Symbol: _ZN8TESSLINE6RotateE6FCOORD */
/* Demangled: TESSLINE::Rotate(FCOORD) */
int _ZN8TESSLINE6RotateE6FCOORD(void);

/* Symbol: _ZN10UNICHARSET14unichar_insertEPKc */
/* Demangled: UNICHARSET::unichar_insert(char const*) */
int _ZN10UNICHARSET14unichar_insertEPKc(void);

/* Symbol: _ZN9tesseract4Trie26character_class_to_patternEc */
/* Demangled: tesseract::Trie::character_class_to_pattern(char) */
int _ZN9tesseract4Trie26character_class_to_patternEc(void);

/* Symbol: _ZN9tesseract8CCStructC2Ev */
/* Demangled: tesseract::CCStruct::CCStruct() */
int _ZN9tesseract8CCStructC2Ev(void);

/* Symbol: _ZN9tesseract15TessLangModEdgeC2EPNS_15CubeRecoContextEi */
/* Demangled: tesseract::TessLangModEdge::TessLangModEdge(tesseract::CubeRecoContext*, int) */
int _ZN9tesseract15TessLangModEdgeC2EPNS_15CubeRecoContextEi(void);

/* Symbol: _ZN9tesseract13TessLangModel15IsValidSequenceEPKibPPNS_11LangModEdgeE */
/* Demangled: tesseract::TessLangModel::IsValidSequence(int const*, bool, tesseract::LangModEdge**) */
int _ZN9tesseract13TessLangModel15IsValidSequenceEPKibPPNS_11LangModEdgeE(void);

/* Symbol: _ZNK10UNICHARSET13get_isprivateEi */
/* Demangled: UNICHARSET::get_isprivate(int) const */
int _ZNK10UNICHARSET13get_isprivateEi(void);

/* Symbol: _ZN13GenericVectorIN9tesseract15UnicharAndFontsEE5clearEv */
/* Demangled: GenericVector<tesseract::UnicharAndFonts>::clear() */
int _ZN13GenericVectorIN9tesseract15UnicharAndFontsEE5clearEv(void);

/* Symbol: _ZNSt3__16vectorIfNS_9allocatorIfEEE8__appendEj */
/* Demangled: std::__1::vector<float, std::__1::allocator<float> >::__append(unsigned int) */
int _ZNSt3__16vectorIfNS_9allocatorIfEEE8__appendEj(void);

/* Symbol: textord_fix_xheight_bug */
/* Demangled: textord_fix_xheight_bug */
extern void* textord_fix_xheight_bug;

/* Symbol: TessBaseAPIAllWordConfidences */
/* Demangled: TessBaseAPIAllWordConfidences */
int TessBaseAPIAllWordConfidences(void);

/* Symbol: TessBaseAPIInit1 */
/* Demangled: TessBaseAPIInit1 */
int TessBaseAPIInit1(void);

/* Symbol: _ZN5CLIST10add_sortedEPFiPKvS1_EbPv */
/* Demangled: CLIST::add_sorted(int (*)(void const*, void const*), bool, void*) */
int _ZN5CLIST10add_sortedEPFiPKvS1_EbPv(void);

/* Symbol: _ZNK6MATRIX5printERK10UNICHARSET */
/* Demangled: MATRIX::print(UNICHARSET const&) const */
int _ZNK6MATRIX5printERK10UNICHARSET(void);

/* Symbol: _ZN8WERD_RES10BothQuotesEii */
/* Demangled: WERD_RES::BothQuotes(int, int) */
int _ZN8WERD_RES10BothQuotesEii(void);

/* Symbol: _ZN6C_BLOB8FakeBlobERK4TBOX */
/* Demangled: C_BLOB::FakeBlob(TBOX const&) */
int _ZN6C_BLOB8FakeBlobERK4TBOX(void);

/* Symbol: TessBaseAPIInit2 */
/* Demangled: TessBaseAPIInit2 */
int TessBaseAPIInit2(void);

/* Symbol: _ZN8WERD_RES26SetupBasicsFromChoppedWordERK10UNICHARSET */
/* Demangled: WERD_RES::SetupBasicsFromChoppedWord(UNICHARSET const&) */
int _ZN8WERD_RES26SetupBasicsFromChoppedWordERK10UNICHARSET(void);

/* Symbol: _ZN9tesseract15ColPartitionSetD1Ev */
/* Demangled: tesseract::ColPartitionSet::~ColPartitionSet() */
int _ZN9tesseract15ColPartitionSetD1Ev(void);

/* Symbol: _ZN9tesseract12ColPartition22RefinePartnersInternalEbbPNS_16ColPartitionGridE */
/* Demangled: tesseract::ColPartition::RefinePartnersInternal(bool, bool, tesseract::ColPartitionGrid*) */
int _ZN9tesseract12ColPartition22RefinePartnersInternalEbbPNS_16ColPartitionGridE(void);

/* Symbol: _ZN9tesseract11TableFinder26GrowTableToIncludePartialsERK4TBOXS3_PS1_ */
/* Demangled: tesseract::TableFinder::GrowTableToIncludePartials(TBOX const&, TBOX const&, TBOX*) */
int _ZN9tesseract11TableFinder26GrowTableToIncludePartialsERK4TBOXS3_PS1_(void);

/* Symbol: TessBaseAPIInit3 */
/* Demangled: TessBaseAPIInit3 */
int TessBaseAPIInit3(void);

/* Symbol: _ZN9tesseract10GridSearchINS_10ColSegmentENS_16ColSegment_CLISTENS_15ColSegment_C_ITEE18RepositionIteratorEv */
/* Demangled: tesseract::GridSearch<tesseract::ColSegment, tesseract::ColSegment_CLIST, tesseract::ColSegment_C_IT>::RepositionIterator() */
int _ZN9tesseract10GridSearchINS_10ColSegmentENS_16ColSegment_CLISTENS_15ColSegment_C_ITEE18RepositionIteratorEv(void);

/* Symbol: _ZN13GenericVectorIP14ParagraphModelEpLERKS2_ */
/* Demangled: GenericVector<ParagraphModel*>::operator+=(GenericVector<ParagraphModel*> const&) */
int _ZN13GenericVectorIP14ParagraphModelEpLERKS2_(void);

/* Symbol: TessBaseAPIInit4 */
/* Demangled: TessBaseAPIInit4 */
int TessBaseAPIInit4(void);

/* Symbol: _ZN9tesseract15GetWordBaselineEiiiiiiiiiiiPdS0_S0_ */
/* Demangled: tesseract::GetWordBaseline(int, int, int, int, int, int, int, int, int, int, int, double*, double*, double*) */
int _ZN9tesseract15GetWordBaselineEiiiiiiiiiiiPdS0_S0_(void);

/* Symbol: _ZN13GenericVectorIP4PARAE7reserveEi */
/* Demangled: GenericVector<PARA*>::reserve(int) */
int _ZN13GenericVectorIP4PARAE7reserveEi(void);

/* Symbol: _ZN9tesseract34RecomputeMarginsAndClearHypothesesEP13GenericVectorINS_19RowScratchRegistersEEiii */
/* Demangled: tesseract::RecomputeMarginsAndClearHypotheses(GenericVector<tesseract::RowScratchRegisters>*, int, int, int) */
int _ZN9tesseract34RecomputeMarginsAndClearHypothesesEP13GenericVectorINS_19RowScratchRegistersEEiii(void);

/* Symbol: _ZN6TO_ROW11insert_blobEP8BLOBNBOX */
/* Demangled: TO_ROW::insert_blob(BLOBNBOX*) */
int _ZN6TO_ROW11insert_blobEP8BLOBNBOX(void);

/* Symbol: _ZN9tesseract6Neuron17AddFromConnectionEPS0_Pfi */
/* Demangled: tesseract::Neuron::AddFromConnection(tesseract::Neuron*, float*, int) */
int _ZN9tesseract6Neuron17AddFromConnectionEPS0_Pfi(void);

/* Symbol: _ZNK5STATS6medianEv */
/* Demangled: STATS::median() const */
int _ZNK5STATS6medianEv(void);

/* Symbol: _Z11FreeClusterP6sample */
/* Demangled: FreeCluster(sample*) */
int _Z11FreeClusterP6sample(void);

/* Symbol: _ZN9tesseract16FeatureChebyshevD2Ev */
/* Demangled: tesseract::FeatureChebyshev::~FeatureChebyshev() */
int _ZN9tesseract16FeatureChebyshevD2Ev(void);

/* Symbol: oldbl_holed_losscount */
/* Demangled: oldbl_holed_losscount */
extern void* oldbl_holed_losscount;

/* Symbol: _ZNK9tesseract12ColPartition19SpecialBlobsDensityE19BlobSpecialTextType */
/* Demangled: tesseract::ColPartition::SpecialBlobsDensity(BlobSpecialTextType) const */
int _ZNK9tesseract12ColPartition19SpecialBlobsDensityE19BlobSpecialTextType(void);

/* Symbol: _ZN9tesseract6BBGridI8BLOBNBOX14BLOBNBOX_CLIST13BLOBNBOX_C_ITE11HandleClickEii */
/* Demangled: tesseract::BBGrid<BLOBNBOX, BLOBNBOX_CLIST, BLOBNBOX_C_IT>::HandleClick(int, int) */
int _ZN9tesseract6BBGridI8BLOBNBOX14BLOBNBOX_CLIST13BLOBNBOX_C_ITE11HandleClickEii(void);

/* Symbol: _ZN9tesseract17MarkRowsWithModelEP13GenericVectorINS_19RowScratchRegistersEEiiPK14ParagraphModelbi */
/* Demangled: tesseract::MarkRowsWithModel(GenericVector<tesseract::RowScratchRegisters>*, int, int, ParagraphModel const*, bool, int) */
int _ZN9tesseract17MarkRowsWithModelEP13GenericVectorINS_19RowScratchRegistersEEiiPK14ParagraphModelbi(void);

/* Symbol: _ZN9tesseract13MasterTrainer11DeSerializeEbP7__sFILE */
/* Demangled: tesseract::MasterTrainer::DeSerialize(bool, __sFILE*) */
int _ZN9tesseract13MasterTrainer11DeSerializeEbP7__sFILE(void);

/* Symbol: _ZN9tesseract15StructuredTable16CalculateMarginsEv */
/* Demangled: tesseract::StructuredTable::CalculateMargins() */
int _ZN9tesseract15StructuredTable16CalculateMarginsEv(void);

/* Symbol: _ZN9tesseract11TessBaseAPI12MeanTextConfEv */
/* Demangled: tesseract::TessBaseAPI::MeanTextConf() */
int _ZN9tesseract11TessBaseAPI12MeanTextConfEv(void);

/* Symbol: TessBaseAPISetPageSegMode */
/* Demangled: TessBaseAPISetPageSegMode */
int TessBaseAPISetPageSegMode(void);

/* Symbol: TessNormalizeTBLOB */
/* Demangled: TessNormalizeTBLOB */
int TessNormalizeTBLOB(void);

/* Symbol: _ZN14C_OUTLINE_LIST9deep_copyEPKS_PFP9C_OUTLINEPKS2_E */
/* Demangled: C_OUTLINE_LIST::deep_copy(C_OUTLINE_LIST const*, C_OUTLINE* (*)(C_OUTLINE const*)) */
int _ZN14C_OUTLINE_LIST9deep_copyEPKS_PFP9C_OUTLINEPKS2_E(void);

/* Symbol: _ZN13GenericVectorI21StrongScriptDirectionE7reserveEi */
/* Demangled: GenericVector<StrongScriptDirection>::reserve(int) */
int _ZN13GenericVectorI21StrongScriptDirectionE7reserveEi(void);

/* Symbol: _ZN9tesseract13MasterTrainer38ReplicateAndRandomizeSamplesIfRequiredEv */
/* Demangled: tesseract::MasterTrainer::ReplicateAndRandomizeSamplesIfRequired() */
int _ZN9tesseract13MasterTrainer38ReplicateAndRandomizeSamplesIfRequiredEv(void);

/* Symbol: _ZN9tesseract16CubeSearchObject7CharBoxEii */
/* Demangled: tesseract::CubeSearchObject::CharBox(int, int) */
int _ZN9tesseract16CubeSearchObject7CharBoxEii(void);

/* Symbol: _ZN9tesseract7CharSetD1Ev */
/* Demangled: tesseract::CharSet::~CharSet() */
int _ZN9tesseract7CharSetD1Ev(void);

/* Symbol: _ZN4QLSQ5clearEv */
/* Demangled: QLSQ::clear() */
int _ZN4QLSQ5clearEv(void);

/* Symbol: textord_blockndoc_fixed */
/* Demangled: textord_blockndoc_fixed */
extern void* textord_blockndoc_fixed;

/* Symbol: _ZN9tesseract23assign_blobs_to_blocks2EP3PixP10BLOCK_LISTP13TO_BLOCK_LIST */
/* Demangled: tesseract::assign_blobs_to_blocks2(Pix*, BLOCK_LIST*, TO_BLOCK_LIST*) */
int _ZN9tesseract23assign_blobs_to_blocks2EP3PixP10BLOCK_LISTP13TO_BLOCK_LIST(void);

/* Symbol: TessBaseAPIProcessPages */
/* Demangled: TessBaseAPIProcessPages */
int TessBaseAPIProcessPages(void);

/* Symbol: classify_pp_side_pad */
/* Demangled: classify_pp_side_pad */
extern void* classify_pp_side_pad;

/* Symbol: _ZN9tesseract11TessBaseAPI20ProcessPagesInternalEPKcS2_iPNS_18TessResultRendererE */
/* Demangled: tesseract::TessBaseAPI::ProcessPagesInternal(char const*, char const*, int, tesseract::TessResultRenderer*) */
int _ZN9tesseract11TessBaseAPI20ProcessPagesInternalEPKcS2_iPNS_18TessResultRendererE(void);

/* Symbol: _ZN6C_BLOB10outer_areaEv */
/* Demangled: C_BLOB::outer_area() */
int _ZN6C_BLOB10outer_areaEv(void);

/* Symbol: _ZN9tesseract12ErrorCounterD1Ev */
/* Demangled: tesseract::ErrorCounter::~ErrorCounter() */
int _ZN9tesseract12ErrorCounterD1Ev(void);

/* Symbol: _ZNK9tesseract11BaselineRow24PerpDistanceFromBaselineERK6FCOORD */
/* Demangled: tesseract::BaselineRow::PerpDistanceFromBaseline(FCOORD const&) const */
int _ZNK9tesseract11BaselineRow24PerpDistanceFromBaselineERK6FCOORD(void);

/* Symbol: _ZN9tesseract19TessBoxTextRenderer15AddImageHandlerEPNS_11TessBaseAPIE */
/* Demangled: tesseract::TessBoxTextRenderer::AddImageHandler(tesseract::TessBaseAPI*) */
int _ZN9tesseract19TessBoxTextRenderer15AddImageHandlerEPNS_11TessBaseAPIE(void);

/* Symbol: _ZN6REJMAP5printEP7__sFILE */
/* Demangled: REJMAP::print(__sFILE*) */
int _ZN6REJMAP5printEP7__sFILE(void);

/* Symbol: _ZN9C_OUTLINE11step_coordsE */
/* Demangled: C_OUTLINE::step_coords */
extern void* _ZN9C_OUTLINE11step_coordsE;

/* Symbol: _Z13ExtractMicrosP5TBLOBRK6DENORM */
/* Demangled: ExtractMicros(TBLOB*, DENORM const&) */
int _Z13ExtractMicrosP5TBLOBRK6DENORM(void);

/* Symbol: textord_minxh */
/* Demangled: textord_minxh */
extern void* textord_minxh;

/* Symbol: _ZTV29_TessMemberResultCallback_2_2ILb0EbN9tesseract12LMPainPointsEdP8WERD_RESiiE */
/* Demangled: vtable for _TessMemberResultCallback_2_2<false, bool, tesseract::LMPainPoints, double, WERD_RES*, int, int> */
extern void* _ZTV29_TessMemberResultCallback_2_2ILb0EbN9tesseract12LMPainPointsEdP8WERD_RESiiE;

/* Symbol: _ZN9tesseract11TessBaseAPI15getOpenCLDeviceEPPv */
/* Demangled: tesseract::TessBaseAPI::getOpenCLDevice(void**) */
int _ZN9tesseract11TessBaseAPI15getOpenCLDeviceEPPv(void);

/* Symbol: _ZN13GenericVectorIsE9push_backEs */
/* Demangled: GenericVector<short>::push_back(short) */
int _ZN13GenericVectorIsE9push_backEs(void);

/* Symbol: _ZN9tesseract15CCNonTextDetect25MarkAndDeleteNonTextBlobsEP13BLOBNBOX_LISTiP10ScrollViewNS3_5ColorEP3Pix */
/* Demangled: tesseract::CCNonTextDetect::MarkAndDeleteNonTextBlobs(BLOBNBOX_LIST*, int, ScrollView*, ScrollView::Color, Pix*) */
int _ZN9tesseract15CCNonTextDetect25MarkAndDeleteNonTextBlobsEP13BLOBNBOX_LISTiP10ScrollViewNS3_5ColorEP3Pix(void);

/* Symbol: textord_words_default_maxspace */
/* Demangled: textord_words_default_maxspace */
extern void* textord_words_default_maxspace;

/* Symbol: _Z14divisible_blobP5TBLOBbP6TPOINT */
/* Demangled: divisible_blob(TBLOB*, bool, TPOINT*) */
int _Z14divisible_blobP5TBLOBbP6TPOINT(void);

/* Symbol: _ZN9tesseract8Classify19NewAdaptedTemplatesEb */
/* Demangled: tesseract::Classify::NewAdaptedTemplates(bool) */
int _ZN9tesseract8Classify19NewAdaptedTemplatesEb(void);

/* Symbol: _ZN9tesseract13IntFeatureMapC1Ev */
/* Demangled: tesseract::IntFeatureMap::IntFeatureMap() */
int _ZN9tesseract13IntFeatureMapC1Ev(void);

/* Symbol: _ZN13GenericVectorIN9tesseract11ShapeRatingEEaSERKS2_ */
/* Demangled: GenericVector<tesseract::ShapeRating>::operator=(GenericVector<tesseract::ShapeRating> const&) */
int _ZN13GenericVectorIN9tesseract11ShapeRatingEEaSERKS2_(void);

/* Symbol: _ZN9tesseract15ColPartitionSet17CompatibleColumnsEbPS0_P19TessResultCallback1IbiE */
/* Demangled: tesseract::ColPartitionSet::CompatibleColumns(bool, tesseract::ColPartitionSet*, TessResultCallback1<bool, int>*) */
int _ZN9tesseract15ColPartitionSet17CompatibleColumnsEbPS0_P19TessResultCallback1IbiE(void);

/* Symbol: textord_oldbl_paradef */
/* Demangled: textord_oldbl_paradef */
extern void* textord_oldbl_paradef;

/* Symbol: TessBaseAPIGetSourceYResolution */
/* Demangled: TessBaseAPIGetSourceYResolution */
int TessBaseAPIGetSourceYResolution(void);

/* Symbol: _ZN10UNICHARSET10add_scriptEPKc */
/* Demangled: UNICHARSET::add_script(char const*) */
int _ZN10UNICHARSET10add_scriptEPKc(void);

/* Symbol: _ZN12BlamerBundle15SetChopperBlameEPK8WERD_RESb */
/* Demangled: BlamerBundle::SetChopperBlame(WERD_RES const*, bool) */
int _ZN12BlamerBundle15SetChopperBlameEPK8WERD_RESb(void);

/* Symbol: _Z13ReadParamDescP7__sFILEt */
/* Demangled: ReadParamDesc(__sFILE*, unsigned short) */
int _Z13ReadParamDescP7__sFILEt(void);

/* Symbol: _ZNK9tesseract13IntFeatureMap15MapIndexFeatureEi */
/* Demangled: tesseract::IntFeatureMap::MapIndexFeature(int) const */
int _ZNK9tesseract13IntFeatureMap15MapIndexFeatureEi(void);

/* Symbol: _ZN9tesseract11WordAltList4SortEv */
/* Demangled: tesseract::WordAltList::Sort() */
int _ZN9tesseract11WordAltList4SortEv(void);

/* Symbol: _ZN9tesseract4Trie20kAlphaPatternUnicodeE */
/* Demangled: tesseract::Trie::kAlphaPatternUnicode */
extern void* _ZN9tesseract4Trie20kAlphaPatternUnicodeE;

/* Symbol: _ZN13GenericVectorIN9tesseract11ObjectCacheINS0_4DawgEE14ReferenceCountEE6removeEi */
/* Demangled: GenericVector<tesseract::ObjectCache<tesseract::Dawg>::ReferenceCount>::remove(int) */
int _ZN13GenericVectorIN9tesseract11ObjectCacheINS0_4DawgEE14ReferenceCountEE6removeEi(void);

/* Symbol: _ZN11WERD_CHOICEpLERKS_ */
/* Demangled: WERD_CHOICE::operator+=(WERD_CHOICE const&) */
int _ZN11WERD_CHOICEpLERKS_(void);

/* Symbol: _ZN9tesseract20kUniversalAmbigsFileE */
/* Demangled: tesseract::kUniversalAmbigsFile */
extern void* _ZN9tesseract20kUniversalAmbigsFileE;

/* Symbol: _ZN9tesseract11WordAltListD1Ev */
/* Demangled: tesseract::WordAltList::~WordAltList() */
int _ZN9tesseract11WordAltListD1Ev(void);

/* Symbol: _ZN9tesseract13TabConstraint16CreateConstraintEPNS_9TabVectorEb */
/* Demangled: tesseract::TabConstraint::CreateConstraint(tesseract::TabVector*, bool) */
int _ZN9tesseract13TabConstraint16CreateConstraintEPNS_9TabVectorEb(void);

/* Symbol: _ZN9tesseract11AlignedBlob18textord_debug_pix_E */
/* Demangled: tesseract::AlignedBlob::textord_debug_pix_ */
extern void* _ZN9tesseract11AlignedBlob18textord_debug_pix_E;

/* Symbol: _ZN9tesseract4Dict18SettupStopperPass2Ev */
/* Demangled: tesseract::Dict::SettupStopperPass2() */
int _ZN9tesseract4Dict18SettupStopperPass2Ev(void);

/* Symbol: _ZN9tesseract10GridSearchI8BLOBNBOX14BLOBNBOX_CLIST13BLOBNBOX_C_ITE18NextVerticalSearchEb */
/* Demangled: tesseract::GridSearch<BLOBNBOX, BLOBNBOX_CLIST, BLOBNBOX_C_IT>::NextVerticalSearch(bool) */
int _ZN9tesseract10GridSearchI8BLOBNBOX14BLOBNBOX_CLIST13BLOBNBOX_C_ITE18NextVerticalSearchEb(void);

/* Symbol: textord_underline_width */
/* Demangled: textord_underline_width */
extern void* textord_underline_width;

/* Symbol: _ZN9tesseract6BBGridINS_11WordWithBoxENS_17WordWithBox_CLISTENS_16WordWithBox_C_ITEE4InitEiRK6ICOORDS7_ */
/* Demangled: tesseract::BBGrid<tesseract::WordWithBox, tesseract::WordWithBox_CLIST, tesseract::WordWithBox_C_IT>::Init(int, ICOORD const&, ICOORD const&) */
int _ZN9tesseract6BBGridINS_11WordWithBoxENS_17WordWithBox_CLISTENS_16WordWithBox_C_ITEE4InitEiRK6ICOORDS7_(void);

/* Symbol: _Z20WriteCharDescriptionRK19FEATURE_DEFS_STRUCTP16CHAR_DESC_STRUCTP6STRING */
/* Demangled: WriteCharDescription(FEATURE_DEFS_STRUCT const&, CHAR_DESC_STRUCT*, STRING*) */
int _Z20WriteCharDescriptionRK19FEATURE_DEFS_STRUCTP16CHAR_DESC_STRUCTP6STRING(void);

/* Symbol: _ZNK9tesseract15IntFeatureSpace13IndexFeaturesEPK18INT_FEATURE_STRUCTiP13GenericVectorIiE */
/* Demangled: tesseract::IntFeatureSpace::IndexFeatures(INT_FEATURE_STRUCT const*, int, GenericVector<int>*) const */
int _ZNK9tesseract15IntFeatureSpace13IndexFeaturesEPK18INT_FEATURE_STRUCTiP13GenericVectorIiE(void);

/* Symbol: _ZN9tesseract12ColumnFinder22BiggestUnassignedRangeEiPKbPiS3_ */
/* Demangled: tesseract::ColumnFinder::BiggestUnassignedRange(int, bool const*, int*, int*) */
int _ZN9tesseract12ColumnFinder22BiggestUnassignedRangeEiPKbPiS3_(void);

/* Symbol: _ZN13GenericVectorIN9tesseract10ScoredFontEEaSERKS2_ */
/* Demangled: GenericVector<tesseract::ScoredFont>::operator=(GenericVector<tesseract::ScoredFont> const&) */
int _ZN13GenericVectorIN9tesseract10ScoredFontEEaSERKS2_(void);

/* Symbol: _ZN9tesseract12ColPartition40SetRegionAndFlowTypesFromProjectionValueEi */
/* Demangled: tesseract::ColPartition::SetRegionAndFlowTypesFromProjectionValue(int) */
int _ZN9tesseract12ColPartition40SetRegionAndFlowTypesFromProjectionValueEi(void);

/* Symbol: TessDeleteIntArray */
/* Demangled: TessDeleteIntArray */
int TessDeleteIntArray(void);

/* Symbol: _ZTVN9tesseract14EquationDetectE */
/* Demangled: vtable for tesseract::EquationDetect */
extern void* _ZTVN9tesseract14EquationDetectE;

/* Symbol: _ZN9tesseract10UnicodeForEPK10UNICHARSETPK11WERD_CHOICEi */
/* Demangled: tesseract::UnicodeFor(UNICHARSET const*, WERD_CHOICE const*, int) */
int _ZN9tesseract10UnicodeForEPK10UNICHARSETPK11WERD_CHOICEi(void);

/* Symbol: _ZNK14ParagraphModel8ToStringEv */
/* Demangled: ParagraphModel::ToString() const */
int _ZNK14ParagraphModel8ToStringEv(void);

/* Symbol: _ZN11WERD_CHOICED2Ev */
/* Demangled: WERD_CHOICE::~WERD_CHOICE() */
int _ZN11WERD_CHOICED2Ev(void);

/* Symbol: _Z7memfreePv */
/* Demangled: memfree(void*) */
int _Z7memfreePv(void);

/* Symbol: _ZTV31_TessFunctionResultCallback_1_1ILb0EvP13TessCallback1IPKcEPK11WERD_CHOICEE */
/* Demangled: vtable for _TessFunctionResultCallback_1_1<false, void, TessCallback1<char const*>*, WERD_CHOICE const*> */
extern void* _ZTV31_TessFunctionResultCallback_1_1ILb0EvP13TessCallback1IPKcEPK11WERD_CHOICEE;

/* Symbol: _ZN14C_OUTLINE_FRAG5closeEv */
/* Demangled: C_OUTLINE_FRAG::close() */
int _ZN14C_OUTLINE_FRAG5closeEv(void);

/* Symbol: _ZN9tesseract8IndexMap8CopyFromERKNS_12IndexMapBiDiE */
/* Demangled: tesseract::IndexMap::CopyFrom(tesseract::IndexMapBiDi const&) */
int _ZN9tesseract8IndexMap8CopyFromERKNS_12IndexMapBiDiE(void);

/* Symbol: _ZN13GenericVectorIN9tesseract12ErrorCounter6CountsEE7reserveEi */
/* Demangled: GenericVector<tesseract::ErrorCounter::Counts>::reserve(int) */
int _ZN13GenericVectorIN9tesseract12ErrorCounter6CountsEE7reserveEi(void);

/* Symbol: _ZN9tesseract13MasterTrainer18TestClassifierVOldEbPNS_15ShapeClassifierES2_ */
/* Demangled: tesseract::MasterTrainer::TestClassifierVOld(bool, tesseract::ShapeClassifier*, tesseract::ShapeClassifier*) */
int _ZN9tesseract13MasterTrainer18TestClassifierVOldEbPNS_15ShapeClassifierES2_(void);

/* Symbol: _ZN9tesseract11StrokeWidth20DetectAndRemoveNoiseEiRK4TBOXP8TO_BLOCKPNS_16ColPartitionGridEP13BLOBNBOX_LIST */
/* Demangled: tesseract::StrokeWidth::DetectAndRemoveNoise(int, TBOX const&, TO_BLOCK*, tesseract::ColPartitionGrid*, BLOBNBOX_LIST*) */
int _ZN9tesseract11StrokeWidth20DetectAndRemoveNoiseEiRK4TBOXP8TO_BLOCKPNS_16ColPartitionGridEP13BLOBNBOX_LIST(void);

/* Symbol: TessResultRendererAddImage */
/* Demangled: TessResultRendererAddImage */
int TessResultRendererAddImage(void);

/* Symbol: _ZN8WERD_RES18HyphenBoxesOverlapERK4TBOXS2_ */
/* Demangled: WERD_RES::HyphenBoxesOverlap(TBOX const&, TBOX const&) */
int _ZN8WERD_RES18HyphenBoxesOverlapERK4TBOXS2_(void);

/* Symbol: _ZN6FCOORD14from_directionEh */
/* Demangled: FCOORD::from_direction(unsigned char) */
int _ZN6FCOORD14from_directionEh(void);

/* Symbol: _ZN10UNICHARSET20kSpecialUnicharCodesE */
/* Demangled: UNICHARSET::kSpecialUnicharCodes */
extern void* _ZN10UNICHARSET20kSpecialUnicharCodesE;

/* Symbol: _ZN9tesseract11TessBaseAPI18AllWordConfidencesEv */
/* Demangled: tesseract::TessBaseAPI::AllWordConfidences() */
int _ZN9tesseract11TessBaseAPI18AllWordConfidencesEv(void);

/* Symbol: _ZN9tesseract11TessBaseAPI5ClearEv */
/* Demangled: tesseract::TessBaseAPI::Clear() */
int _ZN9tesseract11TessBaseAPI5ClearEv(void);

/* Symbol: _ZN13GenericVectorIS_I6STRINGEE7reserveEi */
/* Demangled: GenericVector<GenericVector<STRING> >::reserve(int) */
int _ZN13GenericVectorIS_I6STRINGEE7reserveEi(void);

/* Symbol: _ZN9tesseract10DetLineFit27ComputeConstrainedDistancesERK6FCOORDdd */
/* Demangled: tesseract::DetLineFit::ComputeConstrainedDistances(FCOORD const&, double, double) */
int _ZN9tesseract10DetLineFit27ComputeConstrainedDistancesERK6FCOORDdd(void);

/* Symbol: _ZN9tesseract9TabVector23VerticalTextlinePartnerEv */
/* Demangled: tesseract::TabVector::VerticalTextlinePartner() */
int _ZN9tesseract9TabVector23VerticalTextlinePartnerEv(void);

/* Symbol: _ZN13GenericVectorIN9tesseract15UnicharAndFontsEE9push_backES1_ */
/* Demangled: GenericVector<tesseract::UnicharAndFonts>::push_back(tesseract::UnicharAndFonts) */
int _ZN13GenericVectorIN9tesseract15UnicharAndFontsEE9push_backES1_(void);

/* Symbol: _ZN9tesseract7BoxWord18ClipToOriginalWordEPK5BLOCKP4WERD */
/* Demangled: tesseract::BoxWord::ClipToOriginalWord(BLOCK const*, WERD*) */
int _ZN9tesseract7BoxWord18ClipToOriginalWordEPK5BLOCKP4WERD(void);

/* Symbol: _ZN13GenericVectorIN9tesseract7RowInfoEE15double_the_sizeEv */
/* Demangled: GenericVector<tesseract::RowInfo>::double_the_size() */
int _ZN13GenericVectorIN9tesseract7RowInfoEE15double_the_sizeEv(void);

/* Symbol: _ZN7SVMutexC1Ev */
/* Demangled: SVMutex::SVMutex() */
int _ZN7SVMutexC1Ev(void);

/* Symbol: _ZN13GenericVectorIP11WERD_CHOICEE5clearEv */
/* Demangled: GenericVector<WERD_CHOICE*>::clear() */
int _ZN13GenericVectorIP11WERD_CHOICEE5clearEv(void);

/* Symbol: _ZN3REJ16setrej_mm_rejectEv */
/* Demangled: REJ::setrej_mm_reject() */
int _ZN3REJ16setrej_mm_rejectEv(void);

/* Symbol: _ZN5CLIST17assign_to_sublistEP14CLIST_ITERATORS1_ */
/* Demangled: CLIST::assign_to_sublist(CLIST_ITERATOR*, CLIST_ITERATOR*) */
int _ZN5CLIST17assign_to_sublistEP14CLIST_ITERATORS1_(void);

/* Symbol: _ZN9tesseract9ImageFind23CountPixelsInRotatedBoxE4TBOXRKS1_RK6FCOORDP3Pix */
/* Demangled: tesseract::ImageFind::CountPixelsInRotatedBox(TBOX, TBOX const&, FCOORD const&, Pix*) */
int _ZN9tesseract9ImageFind23CountPixelsInRotatedBoxE4TBOXRKS1_RK6FCOORDP3Pix(void);

/* Symbol: _ZN13SORTED_FLOATS6removeEi */
/* Demangled: SORTED_FLOATS::remove(int) */
int _ZN13SORTED_FLOATS6removeEi(void);

/* Symbol: _ZN9tesseract9Tesseract17eval_word_spacingER13WERD_RES_LIST */
/* Demangled: tesseract::Tesseract::eval_word_spacing(WERD_RES_LIST&) */
int _ZN9tesseract9Tesseract17eval_word_spacingER13WERD_RES_LIST(void);

/* Symbol: _ZN9tesseract17TrainingSampleSetD1Ev */
/* Demangled: tesseract::TrainingSampleSet::~TrainingSampleSet() */
int _ZN9tesseract17TrainingSampleSetD1Ev(void);

/* Symbol: _ZN9tesseract15ShapeClassifier14ClassifySampleERKNS_14TrainingSampleEP3PixiiP13GenericVectorINS_11ShapeRatingEE */
/* Demangled: tesseract::ShapeClassifier::ClassifySample(tesseract::TrainingSample const&, Pix*, int, int, GenericVector<tesseract::ShapeRating>*) */
int _ZN9tesseract15ShapeClassifier14ClassifySampleERKNS_14TrainingSampleEP3PixiiP13GenericVectorINS_11ShapeRatingEE(void);

/* Symbol: _ZN9tesseract18TextlineProjectionD1Ev */
/* Demangled: tesseract::TextlineProjection::~TextlineProjection() */
int _ZN9tesseract18TextlineProjectionD1Ev(void);

/* Symbol: _ZNK13GenericVectorIsE9SerializeEP7__sFILE */
/* Demangled: GenericVector<short>::Serialize(__sFILE*) const */
int _ZNK13GenericVectorIsE9SerializeEP7__sFILE(void);

/* Symbol: _ZN9tesseract9CubeUtils7ToUpperEPKiPNS_7CharSetE */
/* Demangled: tesseract::CubeUtils::ToUpper(int const*, tesseract::CharSet*) */
int _ZN9tesseract9CubeUtils7ToUpperEPKiPNS_7CharSetE(void);

/* Symbol: _ZN9tesseract12ColumnFinder23ImproveColumnCandidatesEP13GenericVectorIPNS_15ColPartitionSetEES5_ */
/* Demangled: tesseract::ColumnFinder::ImproveColumnCandidates(GenericVector<tesseract::ColPartitionSet*>*, GenericVector<tesseract::ColPartitionSet*>*) */
int _ZN9tesseract12ColumnFinder23ImproveColumnCandidatesEP13GenericVectorIPNS_15ColPartitionSetEES5_(void);

/* Symbol: _ZN9tesseract16TessTextRenderer15AddImageHandlerEPNS_11TessBaseAPIE */
/* Demangled: tesseract::TessTextRenderer::AddImageHandler(tesseract::TessBaseAPI*) */
int _ZN9tesseract16TessTextRenderer15AddImageHandlerEPNS_11TessBaseAPIE(void);

/* Symbol: _ZN6C_BLOB4areaEv */
/* Demangled: C_BLOB::area() */
int _ZN6C_BLOB4areaEv(void);

/* Symbol: _ZNK9tesseract19RowScratchRegisters16StrongHypothesesEP17GenericVectorEqEqIPK14ParagraphModelE */
/* Demangled: tesseract::RowScratchRegisters::StrongHypotheses(GenericVectorEqEq<ParagraphModel const*>*) const */
int _ZNK9tesseract19RowScratchRegisters16StrongHypothesesEP17GenericVectorEqEqIPK14ParagraphModelE(void);

/* Symbol: _ZN9tesseract13IntFeatureMap5ClearEv */
/* Demangled: tesseract::IntFeatureMap::Clear() */
int _ZN9tesseract13IntFeatureMap5ClearEv(void);

/* Symbol: _ZNK9tesseract13IntFeatureMap16DebugMapFeaturesERK13GenericVectorIiE */
/* Demangled: tesseract::IntFeatureMap::DebugMapFeatures(GenericVector<int> const&) const */
int _ZNK9tesseract13IntFeatureMap16DebugMapFeaturesERK13GenericVectorIiE(void);

/* Symbol: _ZN9tesseract12ColPartitionC1E14BlobRegionTypeRK6ICOORD */
/* Demangled: tesseract::ColPartition::ColPartition(BlobRegionType, ICOORD const&) */
int _ZN9tesseract12ColPartitionC1E14BlobRegionTypeRK6ICOORD(void);

/* Symbol: _ZN8WERD_RES16ClearWordChoicesEv */
/* Demangled: WERD_RES::ClearWordChoices() */
int _ZN8WERD_RES16ClearWordChoicesEv(void);

/* Symbol: _ZN9tesseract12ColPartition12SetBlobTypesEv */
/* Demangled: tesseract::ColPartition::SetBlobTypes() */
int _ZN9tesseract12ColPartition12SetBlobTypesEv(void);

/* Symbol: _ZN13GenericVectorIN9tesseract9KDPairIncId6ICOORDEEE15double_the_sizeEv */
/* Demangled: GenericVector<tesseract::KDPairInc<double, ICOORD> >::double_the_size() */
int _ZN13GenericVectorIN9tesseract9KDPairIncId6ICOORDEEE15double_the_sizeEv(void);

/* Symbol: _ZNK5SPLIT15UnsplitOutlinesEv */
/* Demangled: SPLIT::UnsplitOutlines() const */
int _ZNK5SPLIT15UnsplitOutlinesEv(void);

/* Symbol: _ZN13GenericVectorIN9tesseract11ShapeRatingEE7reserveEi */
/* Demangled: GenericVector<tesseract::ShapeRating>::reserve(int) */
int _ZN13GenericVectorIN9tesseract11ShapeRatingEE7reserveEi(void);

/* Symbol: _ZN9tesseract17CubeLineSegmenter19ComputeLineConCompsEP3PixP3BoxPP4Pixa */
/* Demangled: tesseract::CubeLineSegmenter::ComputeLineConComps(Pix*, Box*, Pixa**) */
int _ZN9tesseract17CubeLineSegmenter19ComputeLineConCompsEP3PixP3BoxPP4Pixa(void);

/* Symbol: _ZN9tesseract8BlobGrid14InsertBlobListEP13BLOBNBOX_LIST */
/* Demangled: tesseract::BlobGrid::InsertBlobList(BLOBNBOX_LIST*) */
int _ZN9tesseract8BlobGrid14InsertBlobListEP13BLOBNBOX_LIST(void);

/* Symbol: _Z16EDGEPT_c1_zapperPv */
/* Demangled: EDGEPT_c1_zapper(void*) */
int _Z16EDGEPT_c1_zapperPv(void);

/* Symbol: _ZN9tesseract10DetLineFit15EvaluateLineFitEv */
/* Demangled: tesseract::DetLineFit::EvaluateLineFit() */
int _ZN9tesseract10DetLineFit15EvaluateLineFitEv(void);

/* Symbol: _Z10MakeKDTreesPK10PARAM_DESC */
/* Demangled: MakeKDTree(short, PARAM_DESC const*) */
int _Z10MakeKDTreesPK10PARAM_DESC(void);

/* Symbol: _ZN9tesseract15UnicharAndFonts15SortByUnicharIdEPKvS2_ */
/* Demangled: tesseract::UnicharAndFonts::SortByUnicharId(void const*, void const*) */
int _ZN9tesseract15UnicharAndFonts15SortByUnicharIdEPKvS2_(void);

/* Symbol: _ZN9tesseract21ConvNetCharClassifierD2Ev */
/* Demangled: tesseract::ConvNetCharClassifier::~ConvNetCharClassifier() */
int _ZN9tesseract21ConvNetCharClassifierD2Ev(void);

/* Symbol: textord_ascheight_mode_fraction */
/* Demangled: textord_ascheight_mode_fraction */
extern void* textord_ascheight_mode_fraction;

/* Symbol: _ZN13GenericVectorIP16BLOB_CHOICE_LISTE9push_backES1_ */
/* Demangled: GenericVector<BLOB_CHOICE_LIST*>::push_back(BLOB_CHOICE_LIST*) */
int _ZN13GenericVectorIP16BLOB_CHOICE_LISTE9push_backES1_(void);

/* Symbol: _ZN14CLIST_ITERATOR7forwardEv */
/* Demangled: CLIST_ITERATOR::forward() */
int _ZN14CLIST_ITERATOR7forwardEv(void);

/* Symbol: _ZN9tesseract18EquationDetectBaseD2Ev */
/* Demangled: tesseract::EquationDetectBase::~EquationDetectBase() */
int _ZN9tesseract18EquationDetectBaseD2Ev(void);

/* Symbol: _ZN9C_OUTLINE20ComputeBinaryOffsetsEv */
/* Demangled: C_OUTLINE::ComputeBinaryOffsets() */
int _ZN9C_OUTLINE20ComputeBinaryOffsetsEv(void);

/* Symbol: _ZN4TBOX11DeSerializeEbP7__sFILE */
/* Demangled: TBOX::DeSerialize(bool, __sFILE*) */
int _ZN4TBOX11DeSerializeEbP7__sFILE(void);

/* Symbol: _ZN3REJ16setrej_rej_cblobEv */
/* Demangled: REJ::setrej_rej_cblob() */
int _ZN3REJ16setrej_rej_cblobEv(void);

/* Symbol: _ZN9tesseract8Classify18ClearCharNormArrayEPh */
/* Demangled: tesseract::Classify::ClearCharNormArray(unsigned char*) */
int _ZN9tesseract8Classify18ClearCharNormArrayEPh(void);

/* Symbol: _Z15InitTableFillerfffP12PROTO_STRUCTP12TABLE_FILLER */
/* Demangled: InitTableFiller(float, float, float, PROTO_STRUCT*, TABLE_FILLER*) */
int _Z15InitTableFillerfffP12PROTO_STRUCTP12TABLE_FILLER(void);

/* Symbol: _ZN13GenericVectorIN9tesseract7FontSetEE15double_the_sizeEv */
/* Demangled: GenericVector<tesseract::FontSet>::double_the_size() */
int _ZN13GenericVectorIN9tesseract7FontSetEE15double_the_sizeEv(void);

/* Symbol: _ZNSt3__113__vector_baseIN9tesseract16FontPairSizeInfoENS_9allocatorIS2_EEED2Ev */
/* Demangled: std::__1::__vector_base<tesseract::FontPairSizeInfo, std::__1::allocator<tesseract::FontPairSizeInfo> >::~__vector_base() */
int _ZNSt3__113__vector_baseIN9tesseract16FontPairSizeInfoENS_9allocatorIS2_EEED2Ev(void);

/* Symbol: _ZN13GenericVectorIP14ParagraphModelE9push_backES1_ */
/* Demangled: GenericVector<ParagraphModel*>::push_back(ParagraphModel*) */
int _ZN13GenericVectorIP14ParagraphModelE9push_backES1_(void);

/* Symbol: _ZN9tesseract7SkipOneEPKcS1_ */
/* Demangled: tesseract::SkipOne(char const*, char const*) */
int _ZN9tesseract7SkipOneEPKcS1_(void);

/* Symbol: _ZN9tesseract22FontInfoDeleteCallbackENS_8FontInfoE */
/* Demangled: tesseract::FontInfoDeleteCallback(tesseract::FontInfo) */
int _ZN9tesseract22FontInfoDeleteCallbackENS_8FontInfoE(void);

/* Symbol: _ZN8WERD_RES12ClearRatingsEv */
/* Demangled: WERD_RES::ClearRatings() */
int _ZN8WERD_RES12ClearRatingsEv(void);

/* Symbol: _ZNK9tesseract8IndexMap15SparseToCompactEi */
/* Demangled: tesseract::IndexMap::SparseToCompact(int) const */
int _ZNK9tesseract8IndexMap15SparseToCompactEi(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract18LanguageModelStateEE6insertES2_i */
/* Demangled: GenericVector<tesseract::LanguageModelState*>::insert(tesseract::LanguageModelState*, int) */
int _ZN13GenericVectorIPN9tesseract18LanguageModelStateEE6insertES2_i(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract18LanguageModelStateEE9push_backES2_ */
/* Demangled: GenericVector<tesseract::LanguageModelState*>::push_back(tesseract::LanguageModelState*) */
int _ZN13GenericVectorIPN9tesseract18LanguageModelStateEE9push_backES2_(void);

/* Symbol: _ZN8WERD_RES15LogNewRawChoiceEP11WERD_CHOICE */
/* Demangled: WERD_RES::LogNewRawChoice(WERD_CHOICE*) */
int _ZN8WERD_RES15LogNewRawChoiceEP11WERD_CHOICE(void);

/* Symbol: _ZN9tesseract5Shape11DeSerializeEbP7__sFILE */
/* Demangled: tesseract::Shape::DeSerialize(bool, __sFILE*) */
int _ZN9tesseract5Shape11DeSerializeEbP7__sFILE(void);

/* Symbol: _ZN9tesseract11StrokeWidth18AccumulateOverlapsEPK8BLOBNBOXbiiP4TBOXP14BLOBNBOX_CLIST */
/* Demangled: tesseract::StrokeWidth::AccumulateOverlaps(BLOBNBOX const*, bool, int, int, TBOX*, BLOBNBOX_CLIST*) */
int _ZN9tesseract11StrokeWidth18AccumulateOverlapsEPK8BLOBNBOXbiiP4TBOXP14BLOBNBOX_CLIST(void);

/* Symbol: _ZN9tesseract18ShiroRekhaSplitter31RefreshSegmentationWithNewBlobsEP11C_BLOB_LIST */
/* Demangled: tesseract::ShiroRekhaSplitter::RefreshSegmentationWithNewBlobs(C_BLOB_LIST*) */
int _ZN9tesseract18ShiroRekhaSplitter31RefreshSegmentationWithNewBlobsEP11C_BLOB_LIST(void);

/* Symbol: _ZN9tesseract9read_infoEP7__sFILEPNS_8FontInfoEb */
/* Demangled: tesseract::read_info(__sFILE*, tesseract::FontInfo*, bool) */
int _ZN9tesseract9read_infoEP7__sFILEPNS_8FontInfoEb(void);

/* Symbol: _ZN13GenericVectorI6STRINGE22SkipDeSerializeClassesEbPN9tesseract5TFileE */
/* Demangled: GenericVector<STRING>::SkipDeSerializeClasses(bool, tesseract::TFile*) */
int _ZN13GenericVectorI6STRINGE22SkipDeSerializeClassesEbPN9tesseract5TFileE(void);

/* Symbol: _ZNK11WERD_CHOICE11print_stateEPKc */
/* Demangled: WERD_CHOICE::print_state(char const*) const */
int _ZNK11WERD_CHOICE11print_stateEPKc(void);

/* Symbol: _ZN9tesseract23kUTF8ParagraphSeparatorE */
/* Demangled: tesseract::kUTF8ParagraphSeparator */
extern void* _ZN9tesseract23kUTF8ParagraphSeparatorE;

/* Symbol: _ZN9tesseract13TessLangModel11NumberEdgesExPPNS_11LangModEdgeE */
/* Demangled: tesseract::TessLangModel::NumberEdges(long long, tesseract::LangModEdge**) */
int _ZN9tesseract13TessLangModel11NumberEdgesExPPNS_11LangModEdgeE(void);

/* Symbol: _ZN9tesseract7Wordrec17prioritize_pointsEP8TESSLINEPNS_11GenericHeapINS_9KDPairIncIfP6EDGEPTEEEE */
/* Demangled: tesseract::Wordrec::prioritize_points(TESSLINE*, tesseract::GenericHeap<tesseract::KDPairInc<float, EDGEPT*> >*) */
int _ZN9tesseract7Wordrec17prioritize_pointsEP8TESSLINEPNS_11GenericHeapINS_9KDPairIncIfP6EDGEPTEEEE(void);

/* Symbol: TessBaseAPIGetStringVariable */
/* Demangled: TessBaseAPIGetStringVariable */
int TessBaseAPIGetStringVariable(void);

/* Symbol: _ZN8WERD_RES12InitPointersEv */
/* Demangled: WERD_RES::InitPointers() */
int _ZN8WERD_RES12InitPointersEv(void);

/* Symbol: _ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EERKS9_SB_ */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::operator+<char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EERKS9_SB_(void);

/* Symbol: _ZN13GenericVectorIPK14ParagraphModelEaSERKS3_ */
/* Demangled: GenericVector<ParagraphModel const*>::operator=(GenericVector<ParagraphModel const*> const&) */
int _ZN13GenericVectorIPK14ParagraphModelEaSERKS3_(void);

/* Symbol: _Z19BLOCK_RES_c1_zapperPv */
/* Demangled: BLOCK_RES_c1_zapper(void*) */
int _Z19BLOCK_RES_c1_zapperPv(void);

/* Symbol: _ZN3REJ16setrej_mm_acceptEv */
/* Demangled: REJ::setrej_mm_accept() */
int _ZN3REJ16setrej_mm_acceptEv(void);

/* Symbol: _ZN9tesseract4Dict19fragment_state_okayEiffPK18CHAR_FRAGMENT_INFOPKciPS1_ */
/* Demangled: tesseract::Dict::fragment_state_okay(int, float, float, CHAR_FRAGMENT_INFO const*, char const*, int, CHAR_FRAGMENT_INFO*) */
int _ZN9tesseract4Dict19fragment_state_okayEiffPK18CHAR_FRAGMENT_INFOPKciPS1_(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract15ColPartitionSetEE15double_the_sizeEv */
/* Demangled: GenericVector<tesseract::ColPartitionSet*>::double_the_size() */
int _ZN13GenericVectorIPN9tesseract15ColPartitionSetEE15double_the_sizeEv(void);

/* Symbol: _ZN7QSPLINED1Ev */
/* Demangled: QSPLINE::~QSPLINE() */
int _ZN7QSPLINED1Ev(void);

/* Symbol: _ZNK5TBLOB21GetPreciseBoundingBoxEP4TBOX */
/* Demangled: TBLOB::GetPreciseBoundingBox(TBOX*) const */
int _ZNK5TBLOB21GetPreciseBoundingBoxEP4TBOX(void);

/* Symbol: _Z7cutlineP6EDGEPTS0_i */
/* Demangled: cutline(EDGEPT*, EDGEPT*, int) */
int _Z7cutlineP6EDGEPTS0_i(void);

/* Symbol: _ZN9tesseract11WordAltListC2Ei */
/* Demangled: tesseract::WordAltList::WordAltList(int) */
int _ZN9tesseract11WordAltListC2Ei(void);

/* Symbol: _ZN9tesseract13BaselineBlock13DrawPixSplineEP3Pix */
/* Demangled: tesseract::BaselineBlock::DrawPixSpline(Pix*) */
int _ZN9tesseract13BaselineBlock13DrawPixSplineEP3Pix(void);

/* Symbol: textord_skew_ile */
/* Demangled: textord_skew_ile */
extern void* textord_skew_ile;

/* Symbol: _ZN9tesseract7Wordrec13new_max_pointEP6EDGEPTPNS_11GenericHeapINS_9KDPairIncIfS2_EEEE */
/* Demangled: tesseract::Wordrec::new_max_point(EDGEPT*, tesseract::GenericHeap<tesseract::KDPairInc<float, EDGEPT*> >*) */
int _ZN9tesseract7Wordrec13new_max_pointEP6EDGEPTPNS_11GenericHeapINS_9KDPairIncIfS2_EEEE(void);

/* Symbol: _ZN9tesseract10LineFinder15FindLineVectorsERK6ICOORDS3_P13BLOBNBOX_LISTPiS6_PNS_14TabVector_LISTE */
/* Demangled: tesseract::LineFinder::FindLineVectors(ICOORD const&, ICOORD const&, BLOBNBOX_LIST*, int*, int*, tesseract::TabVector_LIST*) */
int _ZN9tesseract10LineFinder15FindLineVectorsERK6ICOORDS3_P13BLOBNBOX_LISTPiS6_PNS_14TabVector_LISTE(void);

/* Symbol: _ZN9tesseract11TessBaseAPI13SetOutputNameEPKc */
/* Demangled: tesseract::TessBaseAPI::SetOutputName(char const*) */
int _ZN9tesseract11TessBaseAPI13SetOutputNameEPKc(void);

/* Symbol: _ZN9tesseract16TessUnlvRendererC1EPKc */
/* Demangled: tesseract::TessUnlvRenderer::TessUnlvRenderer(char const*) */
int _ZN9tesseract16TessUnlvRendererC1EPKc(void);

/* Symbol: _ZN9tesseract9Tesseract17recog_interactiveEP11PAGE_RES_IT */
/* Demangled: tesseract::Tesseract::recog_interactive(PAGE_RES_IT*) */
int _ZN9tesseract9Tesseract17recog_interactiveEP11PAGE_RES_IT(void);

/* Symbol: _ZNK9tesseract9ImageData10MemoryUsedEv */
/* Demangled: tesseract::ImageData::MemoryUsed() const */
int _ZNK9tesseract9ImageData10MemoryUsedEv(void);

/* Symbol: _ZN5BLOCK8compressE6ICOORD */
/* Demangled: BLOCK::compress(ICOORD) */
int _ZN5BLOCK8compressE6ICOORD(void);

/* Symbol: _ZN7QSPLINEC2EiPiPd */
/* Demangled: QSPLINE::QSPLINE(int, int*, double*) */
int _ZN7QSPLINEC2EiPiPd(void);

/* Symbol: _ZTV31_TessFunctionResultCallback_0_2ILb0EbP7__sFILERKN9tesseract7FontSetEE */
/* Demangled: vtable for _TessFunctionResultCallback_0_2<false, bool, __sFILE*, tesseract::FontSet const&> */
extern void* _ZTV31_TessFunctionResultCallback_0_2ILb0EbP7__sFILERKN9tesseract7FontSetEE;

/* Symbol: _Z19SORTED_FLOAT_zapperP10ELIST_LINK */
/* Demangled: SORTED_FLOAT_zapper(ELIST_LINK*) */
int _Z19SORTED_FLOAT_zapperP10ELIST_LINK(void);

/* Symbol: _ZN9tesseract15ExtractFontNameERK6STRINGPS0_ */
/* Demangled: tesseract::ExtractFontName(STRING const&, STRING*) */
int _ZN9tesseract15ExtractFontNameERK6STRINGPS0_(void);

/* Symbol: TessDeleteResultRenderer */
/* Demangled: TessDeleteResultRenderer */
int TessDeleteResultRenderer(void);

/* Symbol: _ZTVN9tesseract6CCUtilE */
/* Demangled: vtable for tesseract::CCUtil */
extern void* _ZTVN9tesseract6CCUtilE;

/* Symbol: _ZN13GenericVectorIcEaSERKS0_ */
/* Demangled: GenericVector<char>::operator=(GenericVector<char> const&) */
int _ZN13GenericVectorIcEaSERKS0_(void);

/* Symbol: _ZN9tesseract7TabFind20ComputeDeskewVectorsEP6FCOORDS2_ */
/* Demangled: tesseract::TabFind::ComputeDeskewVectors(FCOORD*, FCOORD*) */
int _ZN9tesseract7TabFind20ComputeDeskewVectorsEP6FCOORDS2_(void);

/* Symbol: _Z11FreeBucketsP7BUCKETS */
/* Demangled: FreeBuckets(BUCKETS*) */
int _Z11FreeBucketsP7BUCKETS(void);

/* Symbol: _Z20make_baseline_splineP6TO_ROWP8TO_BLOCK */
/* Demangled: make_baseline_spline(TO_ROW*, TO_BLOCK*) */
int _Z20make_baseline_splineP6TO_ROWP8TO_BLOCK(void);

/* Symbol: TessResultRendererImageNum */
/* Demangled: TessResultRendererImageNum */
int TessResultRendererImageNum(void);

/* Symbol: _ZN9tesseract15TessPDFRenderer15AddImageHandlerEPNS_11TessBaseAPIE */
/* Demangled: tesseract::TessPDFRenderer::AddImageHandler(tesseract::TessBaseAPI*) */
int _ZN9tesseract15TessPDFRenderer15AddImageHandlerEPNS_11TessBaseAPIE(void);

/* Symbol: _ZN9tesseract10ShapeTable11DeSerializeEbP7__sFILE */
/* Demangled: tesseract::ShapeTable::DeSerialize(bool, __sFILE*) */
int _ZN9tesseract10ShapeTable11DeSerializeEbP7__sFILE(void);

/* Symbol: _ZN9tesseract7CharSetC2Ev */
/* Demangled: tesseract::CharSet::CharSet() */
int _ZN9tesseract7CharSetC2Ev(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract13BaselineBlockEE5clearEv */
/* Demangled: GenericVector<tesseract::BaselineBlock*>::clear() */
int _ZN13GenericVectorIPN9tesseract13BaselineBlockEE5clearEv(void);

/* Symbol: _Z15fixed_pitch_rowP6TO_ROWP5BLOCKi */
/* Demangled: fixed_pitch_row(TO_ROW*, BLOCK*, int) */
int _Z15fixed_pitch_rowP6TO_ROWP5BLOCKi(void);

/* Symbol: log2 */
/* Demangled: log2 */
int log2(void);

/* Symbol: _ZN13GenericVectorI4TBOXE15double_the_sizeEv */
/* Demangled: GenericVector<TBOX>::double_the_size() */
int _ZN13GenericVectorI4TBOXE15double_the_sizeEv(void);

/* Symbol: _ZN8WERD_RES16RebuildBestStateEv */
/* Demangled: WERD_RES::RebuildBestState() */
int _ZN8WERD_RES16RebuildBestStateEv(void);

/* Symbol: _ZN9tesseract9SkipCharsEPKcS1_ */
/* Demangled: tesseract::SkipChars(char const*, char const*) */
int _ZN9tesseract9SkipCharsEPKcS1_(void);

/* Symbol: _ZN9tesseract13BaselineBlock23PrepareForSplineFittingE6ICOORDb */
/* Demangled: tesseract::BaselineBlock::PrepareForSplineFitting(ICOORD, bool) */
int _ZN9tesseract13BaselineBlock23PrepareForSplineFittingE6ICOORDb(void);

/* Symbol: _ZN9tesseract13LanguageModelD2Ev */
/* Demangled: tesseract::LanguageModel::~LanguageModel() */
int _ZN9tesseract13LanguageModelD2Ev(void);

/* Symbol: _ZN9tesseract15IntFeatureSpaceC2Ev */
/* Demangled: tesseract::IntFeatureSpace::IntFeatureSpace() */
int _ZN9tesseract15IntFeatureSpaceC2Ev(void);

/* Symbol: _ZN9tesseract9NeuralNet12GetNetOutputIfEEbPKT_iPS2_ */
/* Demangled: bool tesseract::NeuralNet::GetNetOutput<float>(float const*, int, float*) */
int _ZN9tesseract9NeuralNet12GetNetOutputIfEEbPKT_iPS2_(void);

/* Symbol: _ZN9tesseract12ColPartition15AddToWorkingSetERK6ICOORDS3_iPNS_17ColPartition_LISTEPNS_19WorkingPartSet_LISTE */
/* Demangled: tesseract::ColPartition::AddToWorkingSet(ICOORD const&, ICOORD const&, int, tesseract::ColPartition_LIST*, tesseract::WorkingPartSet_LIST*) */
int _ZN9tesseract12ColPartition15AddToWorkingSetERK6ICOORDS3_iPNS_17ColPartition_LISTEPNS_19WorkingPartSet_LISTE(void);

/* Symbol: _ZN9tesseract12ColPartition16MakeBigPartitionEP8BLOBNBOXPNS_17ColPartition_LISTE */
/* Demangled: tesseract::ColPartition::MakeBigPartition(BLOBNBOX*, tesseract::ColPartition_LIST*) */
int _ZN9tesseract12ColPartition16MakeBigPartitionEP8BLOBNBOXPNS_17ColPartition_LISTE(void);

/* Symbol: _Z25compute_dropout_distancesPiS_i */
/* Demangled: compute_dropout_distances(int*, int*, int) */
int _Z25compute_dropout_distancesPiS_i(void);

/* Symbol: _Z10get_ydiffsP4TBOXiP7QSPLINEPf */
/* Demangled: get_ydiffs(TBOX*, int, QSPLINE*, float*) */
int _Z10get_ydiffsP4TBOXiP7QSPLINEPf(void);

/* Symbol: _ZNK9tesseract19RowScratchRegisters15AppendDebugInfoERKNS_15ParagraphTheoryEP13GenericVectorI6STRINGE */
/* Demangled: tesseract::RowScratchRegisters::AppendDebugInfo(tesseract::ParagraphTheory const&, GenericVector<STRING>*) const */
int _ZNK9tesseract19RowScratchRegisters15AppendDebugInfoERKNS_15ParagraphTheoryEP13GenericVectorI6STRINGE(void);

/* Symbol: _ZN7UNICHARC1Ei */
/* Demangled: UNICHAR::UNICHAR(int) */
int _ZN7UNICHARC1Ei(void);

/* Symbol: _ZN9tesseract11AlignedBlob11DisplayTabsEPKcP10ScrollView */
/* Demangled: tesseract::AlignedBlob::DisplayTabs(char const*, ScrollView*) */
int _ZN9tesseract11AlignedBlob11DisplayTabsEPKcP10ScrollView(void);

/* Symbol: textord_new_initial_xheight */
/* Demangled: textord_new_initial_xheight */
extern void* textord_new_initial_xheight;

/* Symbol: _ZNK9tesseract15StructuredTable16DoesPartitionFitERKNS_12ColPartitionE */
/* Demangled: tesseract::StructuredTable::DoesPartitionFit(tesseract::ColPartition const&) const */
int _ZNK9tesseract15StructuredTable16DoesPartitionFitERKNS_12ColPartitionE(void);

/* Symbol: _ZN9tesseract14ResultIterator12kComplexWordE */
/* Demangled: tesseract::ResultIterator::kComplexWord */
extern void* _ZN9tesseract14ResultIterator12kComplexWordE;

/* Symbol: _ZN9tesseract4Dict18EndDangerousAmbigsEv */
/* Demangled: tesseract::Dict::EndDangerousAmbigs() */
int _ZN9tesseract4Dict18EndDangerousAmbigsEv(void);

/* Symbol: _ZN13GenericVectorIN9tesseract9KDPairIncIfP11TEMPCLUSTEREEE5clearEv */
/* Demangled: GenericVector<tesseract::KDPairInc<float, TEMPCLUSTER*> >::clear() */
int _ZN13GenericVectorIN9tesseract9KDPairIncIfP11TEMPCLUSTEREEE5clearEv(void);

/* Symbol: _ZN9tesseract15TableRecognizer19NextHorizontalSplitEiiib */
/* Demangled: tesseract::TableRecognizer::NextHorizontalSplit(int, int, int, bool) */
int _ZN9tesseract15TableRecognizer19NextHorizontalSplitEiiib(void);

/* Symbol: _ZN9tesseract12PageIteratorC1EP8PAGE_RESPNS_9TesseractEiiiiii */
/* Demangled: tesseract::PageIterator::PageIterator(PAGE_RES*, tesseract::Tesseract*, int, int, int, int, int, int) */
int _ZN9tesseract12PageIteratorC1EP8PAGE_RESPNS_9TesseractEiiiiii(void);

/* Symbol: _ZN9tesseract19RowScratchRegisters4InitERKNS_7RowInfoE */
/* Demangled: tesseract::RowScratchRegisters::Init(tesseract::RowInfo const&) */
int _ZN9tesseract19RowScratchRegisters4InitERKNS_7RowInfoE(void);

/* Symbol: _ZN9tesseract9CubeUtilsC1Ev */
/* Demangled: tesseract::CubeUtils::CubeUtils() */
int _ZN9tesseract9CubeUtilsC1Ev(void);

/* Symbol: _ZN9tesseract7TabFind17DisplayTabVectorsEP10ScrollView */
/* Demangled: tesseract::TabFind::DisplayTabVectors(ScrollView*) */
int _ZN9tesseract7TabFind17DisplayTabVectorsEP10ScrollView(void);

/* Symbol: _ZTVN9tesseract14CubeClassifierE */
/* Demangled: vtable for tesseract::CubeClassifier */
extern void* _ZTVN9tesseract14CubeClassifierE;

/* Symbol: _ZN9C_OUTLINEC1E6ICOORDP6DIR128s */
/* Demangled: C_OUTLINE::C_OUTLINE(ICOORD, DIR128*, short) */
int _ZN9C_OUTLINEC1E6ICOORDP6DIR128s(void);

/* Symbol: _ZN9tesseract11TableFinder27IncludeLeftOutColumnHeadersEP4TBOX */
/* Demangled: tesseract::TableFinder::IncludeLeftOutColumnHeaders(TBOX*) */
int _ZN9tesseract11TableFinder27IncludeLeftOutColumnHeadersEP4TBOX(void);

/* Symbol: _ZN6REJMAP16rej_word_doc_rejEv */
/* Demangled: REJMAP::rej_word_doc_rej() */
int _ZN6REJMAP16rej_word_doc_rejEv(void);

/* Symbol: _ZN9tesseract13RowIsStrandedERK13GenericVectorINS_19RowScratchRegistersEEi */
/* Demangled: tesseract::RowIsStranded(GenericVector<tesseract::RowScratchRegisters> const&, int) */
int _ZN9tesseract13RowIsStrandedERK13GenericVectorINS_19RowScratchRegistersEEi(void);

/* Symbol: _ZN6ELIST24sortEPFiPKvS1_E */
/* Demangled: ELIST2::sort(int (*)(void const*, void const*)) */
int _ZN6ELIST24sortEPFiPKvS1_E(void);

/* Symbol: _ZN9tesseract15TessLangModEdgeC1EPNS_15CubeRecoContextEPKNS_4DawgExi */
/* Demangled: tesseract::TessLangModEdge::TessLangModEdge(tesseract::CubeRecoContext*, tesseract::Dawg const*, long long, int) */
int _ZN9tesseract15TessLangModEdgeC1EPNS_15CubeRecoContextEPKNS_4DawgExi(void);

/* Symbol: _ZN9tesseract15CCNonTextDetect19ComputeNoiseDensityEbP3PixPNS_8BlobGridE */
/* Demangled: tesseract::CCNonTextDetect::ComputeNoiseDensity(bool, Pix*, tesseract::BlobGrid*) */
int _ZN9tesseract15CCNonTextDetect19ComputeNoiseDensityEbP3PixPNS_8BlobGridE(void);

/* Symbol: oldbl_xhfract */
/* Demangled: oldbl_xhfract */
extern void* oldbl_xhfract;

/* Symbol: _ZN9tesseract7Wordrec20select_blob_to_splitERK13GenericVectorIP11BLOB_CHOICEEfb */
/* Demangled: tesseract::Wordrec::select_blob_to_split(GenericVector<BLOB_CHOICE*> const&, float, bool) */
int _ZN9tesseract7Wordrec20select_blob_to_splitERK13GenericVectorIP11BLOB_CHOICEEfb(void);

/* Symbol: _ZN13GenericVectorIP16BLOB_CHOICE_LISTE7reserveEi */
/* Demangled: GenericVector<BLOB_CHOICE_LIST*>::reserve(int) */
int _ZN13GenericVectorIP16BLOB_CHOICE_LISTE7reserveEi(void);

/* Symbol: _ZN9tesseract12ColPartitionD1Ev */
/* Demangled: tesseract::ColPartition::~ColPartition() */
int _ZN9tesseract12ColPartitionD1Ev(void);

/* Symbol: _ZN14ScriptDetectorC2EPK13GenericVectorIiEP9OSResultsPN9tesseract9TesseractE */
/* Demangled: ScriptDetector::ScriptDetector(GenericVector<int> const*, OSResults*, tesseract::Tesseract*) */
int _ZN14ScriptDetectorC2EPK13GenericVectorIiEP9OSResultsPN9tesseract9TesseractE(void);

/* Symbol: _ZN3ROWaSERKS_ */
/* Demangled: ROW::operator=(ROW const&) */
int _ZN3ROWaSERKS_(void);

/* Symbol: _ZNK9tesseract14IntFeatureDist15FeatureDistanceERK13GenericVectorIiE */
/* Demangled: tesseract::IntFeatureDist::FeatureDistance(GenericVector<int> const&) const */
int _ZNK9tesseract14IntFeatureDist15FeatureDistanceERK13GenericVectorIiE(void);

/* Symbol: _ZN9tesseract6BBGridINS_10ColSegmentENS_16ColSegment_CLISTENS_15ColSegment_C_ITEE5ClearEv */
/* Demangled: tesseract::BBGrid<tesseract::ColSegment, tesseract::ColSegment_CLIST, tesseract::ColSegment_C_IT>::Clear() */
int _ZN9tesseract6BBGridINS_10ColSegmentENS_16ColSegment_CLISTENS_15ColSegment_C_ITEE5ClearEv(void);

/* Symbol: _ZN9tesseract18TextlineProjectionC2Ei */
/* Demangled: tesseract::TextlineProjection::TextlineProjection(int) */
int _ZN9tesseract18TextlineProjectionC2Ei(void);

/* Symbol: _ZN9tesseract9Tesseract17init_tesseract_lmEPKcS2_S2_ */
/* Demangled: tesseract::Tesseract::init_tesseract_lm(char const*, char const*, char const*) */
int _ZN9tesseract9Tesseract17init_tesseract_lmEPKcS2_S2_(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract9ImageDataEE9push_backES2_ */
/* Demangled: GenericVector<tesseract::ImageData*>::push_back(tesseract::ImageData*) */
int _ZN13GenericVectorIPN9tesseract9ImageDataEE9push_backES2_(void);

/* Symbol: _Z14FreeFeatureSetP18FEATURE_SET_STRUCT */
/* Demangled: FreeFeatureSet(FEATURE_SET_STRUCT*) */
int _Z14FreeFeatureSetP18FEATURE_SET_STRUCT(void);

/* Symbol: _ZN9tesseract11StrokeWidth20SmoothNeighbourTypesENS_11PageSegModeEbP8BLOBNBOX */
/* Demangled: tesseract::StrokeWidth::SmoothNeighbourTypes(tesseract::PageSegMode, bool, BLOBNBOX*) */
int _ZN9tesseract11StrokeWidth20SmoothNeighbourTypesENS_11PageSegModeEbP8BLOBNBOX(void);

/* Symbol: _ZN12BlamerBundle14SetSymbolTruthERK10UNICHARSETPKcRK4TBOX */
/* Demangled: BlamerBundle::SetSymbolTruth(UNICHARSET const&, char const*, TBOX const&) */
int _ZN12BlamerBundle14SetSymbolTruthERK10UNICHARSETPKcRK4TBOX(void);

/* Symbol: _ZN9tesseract15TessdataManager8CopyFileEP7__sFILES2_bx */
/* Demangled: tesseract::TessdataManager::CopyFile(__sFILE*, __sFILE*, bool, long long) */
int _ZN9tesseract15TessdataManager8CopyFileEP7__sFILES2_bx(void);

/* Symbol: _ZN15ScratchEvidence20ClearFeatureEvidenceEP16INT_CLASS_STRUCT */
/* Demangled: ScratchEvidence::ClearFeatureEvidence(INT_CLASS_STRUCT*) */
int _ZN15ScratchEvidence20ClearFeatureEvidenceEP16INT_CLASS_STRUCT(void);

/* Symbol: _ZN9tesseract4Trie17read_pattern_listEPKcRK10UNICHARSET */
/* Demangled: tesseract::Trie::read_pattern_list(char const*, UNICHARSET const&) */
int _ZN9tesseract4Trie17read_pattern_listEPKcRK10UNICHARSET(void);

/* Symbol: _ZNK8WERD_RES13GetBlobChoiceEi */
/* Demangled: WERD_RES::GetBlobChoice(int) const */
int _ZNK8WERD_RES13GetBlobChoiceEi(void);

/* Symbol: _ZN9tesseract16DetectParagraphsEiP13GenericVectorINS_7RowInfoEEPS0_IP4PARAEP9PARA_LISTPS0_IP14ParagraphModelE */
/* Demangled: tesseract::DetectParagraphs(int, GenericVector<tesseract::RowInfo>*, GenericVector<PARA*>*, PARA_LIST*, GenericVector<ParagraphModel*>*) */
int _ZN9tesseract16DetectParagraphsEiP13GenericVectorINS_7RowInfoEEPS0_IP4PARAEP9PARA_LISTPS0_IP14ParagraphModelE(void);

/* Symbol: _ZN9tesseract9ImageFind22ComputeRectangleColorsERK4TBOXP3PixiS5_S5_S5_PhS6_ */
/* Demangled: tesseract::ImageFind::ComputeRectangleColors(TBOX const&, Pix*, int, Pix*, Pix*, Pix*, unsigned char*, unsigned char*) */
int _ZN9tesseract9ImageFind22ComputeRectangleColorsERK4TBOXP3PixiS5_S5_S5_PhS6_(void);

/* Symbol: TessBaseAPIRunAdaptiveClassifier */
/* Demangled: TessBaseAPIRunAdaptiveClassifier */
int TessBaseAPIRunAdaptiveClassifier(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract11StringParamEE15double_the_sizeEv */
/* Demangled: GenericVector<tesseract::StringParam*>::double_the_size() */
int _ZN13GenericVectorIPN9tesseract11StringParamEE15double_the_sizeEv(void);

/* Symbol: _ZN6REJMAPC2ERKS_ */
/* Demangled: REJMAP::REJMAP(REJMAP const&) */
int _ZN6REJMAPC2ERKS_(void);

/* Symbol: _ZN9tesseract16FeatureChebyshev28ComputeChebyshevCoefficientsEPNS_8CharSampEPf */
/* Demangled: tesseract::FeatureChebyshev::ComputeChebyshevCoefficients(tesseract::CharSamp*, float*) */
int _ZN9tesseract16FeatureChebyshev28ComputeChebyshevCoefficientsEPNS_8CharSampEPf(void);

/* Symbol: _Z11ReadNextBoxiPiP7__sFILEP6STRINGP4TBOX */
/* Demangled: ReadNextBox(int, int*, __sFILE*, STRING*, TBOX*) */
int _Z11ReadNextBoxiPiP7__sFILEP6STRINGP4TBOX(void);

/* Symbol: _ZN9tesseract6CCUtilD1Ev */
/* Demangled: tesseract::CCUtil::~CCUtil() */
int _ZN9tesseract6CCUtilD1Ev(void);

/* Symbol: _ZNK9tesseract12ColPartition15SummedSpacingOKERKS0_ii */
/* Demangled: tesseract::ColPartition::SummedSpacingOK(tesseract::ColPartition const&, int, int) const */
int _ZNK9tesseract12ColPartition15SummedSpacingOKERKS0_ii(void);

/* Symbol: _ZN9tesseract10GridSearchINS_11WordWithBoxENS_17WordWithBox_CLISTENS_16WordWithBox_C_ITEE15StartRectSearchERK4TBOX */
/* Demangled: tesseract::GridSearch<tesseract::WordWithBox, tesseract::WordWithBox_CLIST, tesseract::WordWithBox_C_IT>::StartRectSearch(TBOX const&) */
int _ZN9tesseract10GridSearchINS_11WordWithBoxENS_17WordWithBox_CLISTENS_16WordWithBox_C_ITEE15StartRectSearchERK4TBOX(void);

/* Symbol: _ZNK6STRING6lengthEv */
/* Demangled: STRING::length() const */
int _ZNK6STRING6lengthEv(void);

/* Symbol: _ZN9tesseract16char_box_to_tboxEP3Box4TBOXi */
/* Demangled: tesseract::char_box_to_tbox(Box*, TBOX, int) */
int _ZN9tesseract16char_box_to_tboxEP3Box4TBOXi(void);

/* Symbol: _ZN10UNICHARSETC1Ev */
/* Demangled: UNICHARSET::UNICHARSET() */
int _ZN10UNICHARSETC1Ev(void);

/* Symbol: _ZN9tesseract17CubeLineSegmenter13ValidityRatioEP3PixP3Box */
/* Demangled: tesseract::CubeLineSegmenter::ValidityRatio(Pix*, Box*) */
int _ZN9tesseract17CubeLineSegmenter13ValidityRatioEP3PixP3Box(void);

/* Symbol: _ZN9tesseract10CubeObjectC1EPNS_15CubeRecoContextEPNS_8CharSampE */
/* Demangled: tesseract::CubeObject::CubeObject(tesseract::CubeRecoContext*, tesseract::CharSamp*) */
int _ZN9tesseract10CubeObjectC1EPNS_15CubeRecoContextEPNS_8CharSampE(void);

/* Symbol: _ZNK9tesseract15StructuredTable11space_aboveEv */
/* Demangled: tesseract::StructuredTable::space_above() const */
int _ZNK9tesseract15StructuredTable11space_aboveEv(void);

/* Symbol: _ZNK4LLSQ8rms_orthERK6FCOORD */
/* Demangled: LLSQ::rms_orth(FCOORD const&) const */
int _ZNK4LLSQ8rms_orthERK6FCOORD(void);

/* Symbol: _ZN9tesseract10ShapeTable13ReMapClassIdsERK13GenericVectorIiE */
/* Demangled: tesseract::ShapeTable::ReMapClassIds(GenericVector<int> const&) */
int _ZN9tesseract10ShapeTable13ReMapClassIdsERK13GenericVectorIiE(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract15ColPartitionSetEE9push_backES2_ */
/* Demangled: GenericVector<tesseract::ColPartitionSet*>::push_back(tesseract::ColPartitionSet*) */
int _ZN13GenericVectorIPN9tesseract15ColPartitionSetEE9push_backES2_(void);

/* Symbol: _Z16partition_coordsP4TBOXiPciPiS2_ */
/* Demangled: partition_coords(TBOX*, int, char*, int, int*, int*) */
int _Z16partition_coordsP4TBOXiPciPiS2_(void);

/* Symbol: _ZNK13GenericVectorIN9tesseract12KDPtrPairIncIf4SEAMEEE4backEv */
/* Demangled: GenericVector<tesseract::KDPtrPairInc<float, SEAM> >::back() const */
int _ZNK13GenericVectorIN9tesseract12KDPtrPairIncIf4SEAMEEE4backEv(void);

/* Symbol: _ZN5BLOCK11check_pitchEv */
/* Demangled: BLOCK::check_pitch() */
int _ZN5BLOCK11check_pitchEv(void);

/* Symbol: _Z16AddConfigToClassP12CLASS_STRUCT */
/* Demangled: AddConfigToClass(CLASS_STRUCT*) */
int _Z16AddConfigToClassP12CLASS_STRUCT(void);

/* Symbol: _ZN9tesseract4Bmp8D1Ev */
/* Demangled: tesseract::Bmp8::~Bmp8() */
int _ZN9tesseract4Bmp8D1Ev(void);

/* Symbol: _ZN9tesseract8CharSampC1Eiiii */
/* Demangled: tesseract::CharSamp::CharSamp(int, int, int, int) */
int _ZN9tesseract8CharSampC1Eiiii(void);

/* Symbol: _ZN9tesseract4Trie20kLowerPatternUnicodeE */
/* Demangled: tesseract::Trie::kLowerPatternUnicode */
extern void* _ZN9tesseract4Trie20kLowerPatternUnicodeE;

/* Symbol: _ZNK9tesseract11TableFinder23HasWideOrNoInterWordGapEPNS_12ColPartitionE */
/* Demangled: tesseract::TableFinder::HasWideOrNoInterWordGap(tesseract::ColPartition*) const */
int _ZNK9tesseract11TableFinder23HasWideOrNoInterWordGapEPNS_12ColPartitionE(void);

/* Symbol: _ZN9tesseract8Classify18AdaptiveClassifierEP5TBLOBP16BLOB_CHOICE_LIST */
/* Demangled: tesseract::Classify::AdaptiveClassifier(TBLOB*, BLOB_CHOICE_LIST*) */
int _ZN9tesseract8Classify18AdaptiveClassifierEP5TBLOBP16BLOB_CHOICE_LIST(void);

/* Symbol: _ZNK9tesseract17LTRResultIterator15SymbolIsDropcapEv */
/* Demangled: tesseract::LTRResultIterator::SymbolIsDropcap() const */
int _ZNK9tesseract17LTRResultIterator15SymbolIsDropcapEv(void);

/* Symbol: _ZN9tesseract8RtlEmbedERK6STRINGb */
/* Demangled: tesseract::RtlEmbed(STRING const&, bool) */
int _ZN9tesseract8RtlEmbedERK6STRINGb(void);

/* Symbol: _ZN13GenericVectorIcE11DeSerializeEbPN9tesseract5TFileE */
/* Demangled: GenericVector<char>::DeSerialize(bool, tesseract::TFile*) */
int _ZN13GenericVectorIcE11DeSerializeEbPN9tesseract5TFileE(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekpos(std::__1::fpos<mbstate_t>, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj(void);

/* Symbol: _ZNK12BlamerBundle21GuidedSegsearchNeededEPK11WERD_CHOICE */
/* Demangled: BlamerBundle::GuidedSegsearchNeeded(WERD_CHOICE const*) const */
int _ZNK12BlamerBundle21GuidedSegsearchNeededEPK11WERD_CHOICE(void);

/* Symbol: _ZN13GenericVectorI4TBOXE15SkipDeSerializeEbPN9tesseract5TFileE */
/* Demangled: GenericVector<TBOX>::SkipDeSerialize(bool, tesseract::TFile*) */
int _ZN13GenericVectorI4TBOXE15SkipDeSerializeEbPN9tesseract5TFileE(void);

/* Symbol: _ZN4TBOXC2E6ICOORDS0_ */
/* Demangled: TBOX::TBOX(ICOORD, ICOORD) */
int _ZN4TBOXC2E6ICOORDS0_(void);

/* Symbol: _ZN9tesseract12tprintfMutexE */
/* Demangled: tesseract::tprintfMutex */
extern void* _ZN9tesseract12tprintfMutexE;

/* Symbol: _Z15get_blob_coordsP6TO_ROWiP4TBOXRhRi */
/* Demangled: get_blob_coords(TO_ROW*, int, TBOX*, unsigned char&, int&) */
int _Z15get_blob_coordsP6TO_ROWiP4TBOXRhRi(void);

/* Symbol: _ZN9tesseract11TableFinder15MakeTableBlocksEPNS_16ColPartitionGridEPPNS_15ColPartitionSetEP19TessResultCallback1IbiE */
/* Demangled: tesseract::TableFinder::MakeTableBlocks(tesseract::ColPartitionGrid*, tesseract::ColPartitionSet**, TessResultCallback1<bool, int>*) */
int _ZN9tesseract11TableFinder15MakeTableBlocksEPNS_16ColPartitionGridEPPNS_15ColPartitionSetEP19TessResultCallback1IbiE(void);

/* Symbol: _ZN13GenericVectorIN9tesseract14LineHypothesisEE9push_backES1_ */
/* Demangled: GenericVector<tesseract::LineHypothesis>::push_back(tesseract::LineHypothesis) */
int _ZN13GenericVectorIN9tesseract14LineHypothesisEE9push_backES1_(void);

/* Symbol: _ZN9tesseract4Trie5clearEv */
/* Demangled: tesseract::Trie::clear() */
int _ZN9tesseract4Trie5clearEv(void);

/* Symbol: _ZN13GenericVectorIN9tesseract16FloatWordFeatureEE9push_backES1_ */
/* Demangled: GenericVector<tesseract::FloatWordFeature>::push_back(tesseract::FloatWordFeature) */
int _ZN13GenericVectorIN9tesseract16FloatWordFeatureEE9push_backES1_(void);

/* Symbol: _ZNSt3__16vectorIPN9tesseract9NeuralNetENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE */
/* Demangled: std::__1::vector<tesseract::NeuralNet*, std::__1::allocator<tesseract::NeuralNet*> >::__swap_out_circular_buffer(std::__1::__split_buffer<tesseract::NeuralNet*, std::__1::allocator<tesseract::NeuralNet*>&>&) */
int _ZNSt3__16vectorIPN9tesseract9NeuralNetENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE(void);

/* Symbol: _ZN9tesseract16ColPartitionGrid20FindPartitionMarginsEPNS_15ColPartitionSetEPNS_12ColPartitionE */
/* Demangled: tesseract::ColPartitionGrid::FindPartitionMargins(tesseract::ColPartitionSet*, tesseract::ColPartition*) */
int _ZN9tesseract16ColPartitionGrid20FindPartitionMarginsEPNS_15ColPartitionSetEPNS_12ColPartitionE(void);

/* Symbol: textord_words_default_minspace */
/* Demangled: textord_words_default_minspace */
extern void* textord_words_default_minspace;

/* Symbol: _ZTVN9tesseract15MutableIteratorE */
/* Demangled: vtable for tesseract::MutableIterator */
extern void* _ZTVN9tesseract15MutableIteratorE;

/* Symbol: _ZN9tesseract9Tesseract17RetryWithLanguageERKNS_8WordDataEMS0_FvS3_PP8WERD_RESPNS_13PointerVectorIS4_EEES6_S9_ */
/* Demangled: tesseract::Tesseract::RetryWithLanguage(tesseract::WordData const&, void (tesseract::Tesseract::*)(tesseract::WordData const&, WERD_RES**, tesseract::PointerVector<WERD_RES>*), WERD_RES**, tesseract::PointerVector<WERD_RES>*) */
int _ZN9tesseract9Tesseract17RetryWithLanguageERKNS_8WordDataEMS0_FvS3_PP8WERD_RESPNS_13PointerVectorIS4_EEES6_S9_(void);

/* Symbol: _ZN9tesseract15CubeRecoContextD1Ev */
/* Demangled: tesseract::CubeRecoContext::~CubeRecoContext() */
int _ZN9tesseract15CubeRecoContextD1Ev(void);

/* Symbol: _ZN9tesseract8CCStructD0Ev */
/* Demangled: tesseract::CCStruct::~CCStruct() */
int _ZN9tesseract8CCStructD0Ev(void);

/* Symbol: _ZNK9tesseract12IndexMapBiDi9SerializeEP7__sFILE */
/* Demangled: tesseract::IndexMapBiDi::Serialize(__sFILE*) const */
int _ZNK9tesseract12IndexMapBiDi9SerializeEP7__sFILE(void);

/* Symbol: _Z15alloc_big_zerosi */
/* Demangled: alloc_big_zeros(int) */
int _Z15alloc_big_zerosi(void);

/* Symbol: _ZN9tesseract5TFileD2Ev */
/* Demangled: tesseract::TFile::~TFile() */
int _ZN9tesseract5TFileD2Ev(void);

/* Symbol: _Z11AddIntProtoP16INT_CLASS_STRUCT */
/* Demangled: AddIntProto(INT_CLASS_STRUCT*) */
int _Z11AddIntProtoP16INT_CLASS_STRUCT(void);

/* Symbol: _ZN9tesseract29HybridNeuralNetCharClassifier15LoadFoldingSetsERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_PNS_9LangModelE */
/* Demangled: tesseract::HybridNeuralNetCharClassifier::LoadFoldingSets(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, tesseract::LangModel*) */
int _ZN9tesseract29HybridNeuralNetCharClassifier15LoadFoldingSetsERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_PNS_9LangModelE(void);

/* Symbol: _ZN9tesseract10LineFinder18ConvertBoxaToBlobsEiiPP4BoxaP11C_BLOB_LIST */
/* Demangled: tesseract::LineFinder::ConvertBoxaToBlobs(int, int, Boxa**, C_BLOB_LIST*) */
int _ZN9tesseract10LineFinder18ConvertBoxaToBlobsEiiPP4BoxaP11C_BLOB_LIST(void);

/* Symbol: _ZN9tesseract9Tesseract17ProcessTargetWordERK4TBOXS3_PKci */
/* Demangled: tesseract::Tesseract::ProcessTargetWord(TBOX const&, TBOX const&, char const*, int) */
int _ZN9tesseract9Tesseract17ProcessTargetWordERK4TBOXS3_PKci(void);

/* Symbol: _ZN9tesseract8Classify12ConvertProtoEP12PROTO_STRUCTiP16INT_CLASS_STRUCT */
/* Demangled: tesseract::Classify::ConvertProto(PROTO_STRUCT*, int, INT_CLASS_STRUCT*) */
int _ZN9tesseract8Classify12ConvertProtoEP12PROTO_STRUCTiP16INT_CLASS_STRUCT(void);

/* Symbol: textord_testregion_right */
/* Demangled: textord_testregion_right */
extern void* textord_testregion_right;

/* Symbol: textord_expansion_factor */
/* Demangled: textord_expansion_factor */
extern void* textord_expansion_factor;

/* Symbol: _ZN9tesseract7Wordrec11DoSegSearchEP8WERD_RES */
/* Demangled: tesseract::Wordrec::DoSegSearch(WERD_RES*) */
int _ZN9tesseract7Wordrec11DoSegSearchEP8WERD_RES(void);

/* Symbol: _ZN9tesseract8Classify21PrintAdaptedTemplatesEP7__sFILEP22ADAPT_TEMPLATES_STRUCT */
/* Demangled: tesseract::Classify::PrintAdaptedTemplates(__sFILE*, ADAPT_TEMPLATES_STRUCT*) */
int _ZN9tesseract8Classify21PrintAdaptedTemplatesEP7__sFILEP22ADAPT_TEMPLATES_STRUCT(void);

/* Symbol: _ZN9tesseract14BaselineDetectC2EiRK6FCOORDP13TO_BLOCK_LIST */
/* Demangled: tesseract::BaselineDetect::BaselineDetect(int, FCOORD const&, TO_BLOCK_LIST*) */
int _ZN9tesseract14BaselineDetectC2EiRK6FCOORDP13TO_BLOCK_LIST(void);

/* Symbol: _Z19compute_fixed_pitch6ICOORDP13TO_BLOCK_LISTf6FCOORDh */
/* Demangled: compute_fixed_pitch(ICOORD, TO_BLOCK_LIST*, float, FCOORD, unsigned char) */
int _Z19compute_fixed_pitch6ICOORDP13TO_BLOCK_LISTf6FCOORDh(void);

/* Symbol: _Z10NextSamplePP8list_rec */
/* Demangled: NextSample(list_rec**) */
int _Z10NextSamplePP8list_rec(void);

/* Symbol: _Z7ChiAreaP9CHISTRUCTd */
/* Demangled: ChiArea(CHISTRUCT*, double) */
int _Z7ChiAreaP9CHISTRUCTd(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract9BoolParamEE15double_the_sizeEv */
/* Demangled: GenericVector<tesseract::BoolParam*>::double_the_size() */
int _ZN13GenericVectorIPN9tesseract9BoolParamEE15double_the_sizeEv(void);

/* Symbol: _ZN9tesseract9Tesseract14set_word_fontsEP8WERD_RES */
/* Demangled: tesseract::Tesseract::set_word_fonts(WERD_RES*) */
int _ZN9tesseract9Tesseract14set_word_fontsEP8WERD_RES(void);

/* Symbol: _ZN9tesseract9Tesseract27SelectGoodDiacriticOutlinesEifP11PAGE_RES_ITP6C_BLOBRK13GenericVectorIP9C_OUTLINEEiPS5_IbE */
/* Demangled: tesseract::Tesseract::SelectGoodDiacriticOutlines(int, float, PAGE_RES_IT*, C_BLOB*, GenericVector<C_OUTLINE*> const&, int, GenericVector<bool>*) */
int _ZN9tesseract9Tesseract27SelectGoodDiacriticOutlinesEifP11PAGE_RES_ITP6C_BLOBRK13GenericVectorIP9C_OUTLINEEiPS5_IbE(void);

/* Symbol: _ZN9tesseract9ImageDataC1Ev */
/* Demangled: tesseract::ImageData::ImageData() */
int _ZN9tesseract9ImageDataC1Ev(void);

/* Symbol: _ZN6C_BLOB14render_outlineEv */
/* Demangled: C_BLOB::render_outline() */
int _ZN6C_BLOB14render_outlineEv(void);

/* Symbol: _Z20ValidCharDescriptionRK19FEATURE_DEFS_STRUCTP16CHAR_DESC_STRUCT */
/* Demangled: ValidCharDescription(FEATURE_DEFS_STRUCT const&, CHAR_DESC_STRUCT*) */
int _Z20ValidCharDescriptionRK19FEATURE_DEFS_STRUCTP16CHAR_DESC_STRUCT(void);

/* Symbol: _ZN9tesseract10LineFinder19FindAndRemoveHLinesEiP3PixiiPS2_S2_S2_PNS_14TabVector_LISTE */
/* Demangled: tesseract::LineFinder::FindAndRemoveHLines(int, Pix*, int, int, Pix**, Pix*, Pix*, tesseract::TabVector_LIST*) */
int _ZN9tesseract10LineFinder19FindAndRemoveHLinesEiP3PixiiPS2_S2_S2_PNS_14TabVector_LISTE(void);

/* Symbol: _Z21find_underlined_blobsP8BLOBNBOXP7QSPLINEffP14ICOORDELT_LIST */
/* Demangled: find_underlined_blobs(BLOBNBOX*, QSPLINE*, float, float, ICOORDELT_LIST*) */
int _Z21find_underlined_blobsP8BLOBNBOXP7QSPLINEffP14ICOORDELT_LIST(void);

/* Symbol: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeInitOem */
/* Demangled: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeInitOem */
int Java_com_googlecode_tesseract_android_TessBaseAPI_nativeInitOem(void);

/* Symbol: _ZN13GenericVectorIP6C_BLOBE15double_the_sizeEv */
/* Demangled: GenericVector<C_BLOB*>::double_the_size() */
int _ZN13GenericVectorIP6C_BLOBE15double_the_sizeEv(void);

/* Symbol: _ZN9tesseract11IsDigitLikeEi */
/* Demangled: tesseract::IsDigitLike(int) */
int _ZN9tesseract11IsDigitLikeEi(void);

/* Symbol: _ZTVN9tesseract29HybridNeuralNetCharClassifierE */
/* Demangled: vtable for tesseract::HybridNeuralNetCharClassifier */
extern void* _ZTVN9tesseract29HybridNeuralNetCharClassifierE;

/* Symbol: _ZN9tesseract17WordListLangModel4RootEv */
/* Demangled: tesseract::WordListLangModel::Root() */
int _ZN9tesseract17WordListLangModel4RootEv(void);

/* Symbol: _ZN9tesseract15TableRecognizer13set_min_widthEi */
/* Demangled: tesseract::TableRecognizer::set_min_width(int) */
int _ZN9tesseract15TableRecognizer13set_min_widthEi(void);

/* Symbol: _ZN9tesseract14EquationDetect20IsMathBlockSatelliteEPNS_12ColPartitionEP13GenericVectorIS2_E */
/* Demangled: tesseract::EquationDetect::IsMathBlockSatellite(tesseract::ColPartition*, GenericVector<tesseract::ColPartition*>*) */
int _ZN9tesseract14EquationDetect20IsMathBlockSatelliteEPNS_12ColPartitionEP13GenericVectorIS2_E(void);

/* Symbol: _ZN6TO_ROWC2EP8BLOBNBOXfff */
/* Demangled: TO_ROW::TO_ROW(BLOBNBOX*, float, float, float) */
int _ZN6TO_ROWC2EP8BLOBNBOXfff(void);

/* Symbol: _ZN9tesseract8Classify14ReadNormProtosEP7__sFILEx */
/* Demangled: tesseract::Classify::ReadNormProtos(__sFILE*, long long) */
int _ZN9tesseract8Classify14ReadNormProtosEP7__sFILEx(void);

/* Symbol: _ZNK9tesseract10ShapeTable8NumFontsEv */
/* Demangled: tesseract::ShapeTable::NumFonts() const */
int _ZNK9tesseract10ShapeTable8NumFontsEv(void);

/* Symbol: _ZN9tesseract11CharSampSetD1Ev */
/* Demangled: tesseract::CharSampSet::~CharSampSet() */
int _ZN9tesseract11CharSampSetD1Ev(void);

/* Symbol: _Z17loop_bounding_boxRP9CRACKEDGER6ICOORDS3_ */
/* Demangled: loop_bounding_box(CRACKEDGE*&, ICOORD&, ICOORD&) */
int _Z17loop_bounding_boxRP9CRACKEDGER6ICOORDS3_(void);

/* Symbol: _ZTVN9tesseract16TessHOcrRendererE */
/* Demangled: vtable for tesseract::TessHOcrRenderer */
extern void* _ZTVN9tesseract16TessHOcrRendererE;

/* Symbol: _ZN9tesseract16CubeSearchObject9SpaceCostEi */
/* Demangled: tesseract::CubeSearchObject::SpaceCost(int) */
int _ZN9tesseract16CubeSearchObject9SpaceCostEi(void);

/* Symbol: _ZNSt3__112basic_stringIiNS_11char_traitsIiEENS_9allocatorIiEEE21__grow_by_and_replaceEjjjjjjPKi */
/* Demangled: std::__1::basic_string<int, std::__1::char_traits<int>, std::__1::allocator<int> >::__grow_by_and_replace(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, int const*) */
int _ZNSt3__112basic_stringIiNS_11char_traitsIiEENS_9allocatorIiEEE21__grow_by_and_replaceEjjjjjjPKi(void);

/* Symbol: _Z8err_exitv */
/* Demangled: err_exit() */
int _Z8err_exitv(void);

/* Symbol: _ZN9tesseract8Classify21WriteAdaptedTemplatesEP7__sFILEP22ADAPT_TEMPLATES_STRUCT */
/* Demangled: tesseract::Classify::WriteAdaptedTemplates(__sFILE*, ADAPT_TEMPLATES_STRUCT*) */
int _ZN9tesseract8Classify21WriteAdaptedTemplatesEP7__sFILEP22ADAPT_TEMPLATES_STRUCT(void);

/* Symbol: _Z19NormalizedAngleFromP6FPOINTS0_f */
/* Demangled: NormalizedAngleFrom(FPOINT*, FPOINT*, float) */
int _Z19NormalizedAngleFromP6FPOINTS0_f(void);

/* Symbol: _ZN9tesseract7TabFind14LeftEdgeForBoxERK4TBOXbb */
/* Demangled: tesseract::TabFind::LeftEdgeForBox(TBOX const&, bool, bool) */
int _ZN9tesseract7TabFind14LeftEdgeForBoxERK4TBOXbb(void);

/* Symbol: _ZN9tesseract5dist2Eiiii */
/* Demangled: tesseract::dist2(int, int, int, int) */
int _ZN9tesseract5dist2Eiiii(void);

/* Symbol: _ZN9tesseract16ColPartitionGrid6MergesEP19TessResultCallback2IbPNS_12ColPartitionEP4TBOXEPS1_IbPKS2_S9_E */
/* Demangled: tesseract::ColPartitionGrid::Merges(TessResultCallback2<bool, tesseract::ColPartition*, TBOX*>*, TessResultCallback2<bool, tesseract::ColPartition const*, tesseract::ColPartition const*>*) */
int _ZN9tesseract16ColPartitionGrid6MergesEP19TessResultCallback2IbPNS_12ColPartitionEP4TBOXEPS1_IbPKS2_S9_E(void);

/* Symbol: _ZN10OL_BUCKETSclEss */
/* Demangled: OL_BUCKETS::operator()(short, short) */
int _ZN10OL_BUCKETSclEss(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract11WordWithBoxEE5clearEv */
/* Demangled: GenericVector<tesseract::WordWithBox*>::clear() */
int _ZN13GenericVectorIPN9tesseract11WordWithBoxEE5clearEv(void);

/* Symbol: _ZN9tesseract18UnicodeSpanSkipper8SkipPuncEi */
/* Demangled: tesseract::UnicodeSpanSkipper::SkipPunc(int) */
int _ZN9tesseract18UnicodeSpanSkipper8SkipPuncEi(void);

/* Symbol: _ZN10UNICHARSET14load_from_fileEPN9tesseract5TFileEb */
/* Demangled: UNICHARSET::load_from_file(tesseract::TFile*, bool) */
int _ZN10UNICHARSET14load_from_fileEPN9tesseract5TFileEb(void);

/* Symbol: _ZN9tesseract7WordrecD1Ev */
/* Demangled: tesseract::Wordrec::~Wordrec() */
int _ZN9tesseract7WordrecD1Ev(void);

/* Symbol: _ZN9tesseract7CharSet6CreateEPNS_15TessdataManagerEP10UNICHARSET */
/* Demangled: tesseract::CharSet::Create(tesseract::TessdataManager*, UNICHARSET*) */
int _ZN9tesseract7CharSet6CreateEPNS_15TessdataManagerEP10UNICHARSET(void);

/* Symbol: _ZN9tesseract17CubeLineSegmenter11LineSegmentEv */
/* Demangled: tesseract::CubeLineSegmenter::LineSegment() */
int _ZN9tesseract17CubeLineSegmenter11LineSegmentEv(void);

/* Symbol: _ZN9tesseract11TessBaseAPI14NormalizeTBLOBEP5TBLOBP3ROWb */
/* Demangled: tesseract::TessBaseAPI::NormalizeTBLOB(TBLOB*, ROW*, bool) */
int _ZN9tesseract11TessBaseAPI14NormalizeTBLOBEP5TBLOBP3ROWb(void);

/* Symbol: _ZNK9tesseract17LTRResultIterator11GetUTF8TextENS_17PageIteratorLevelE */
/* Demangled: tesseract::LTRResultIterator::GetUTF8Text(tesseract::PageIteratorLevel) const */
int _ZNK9tesseract17LTRResultIterator11GetUTF8TextENS_17PageIteratorLevelE(void);

/* Symbol: _ZTVN9tesseract16TessUnlvRendererE */
/* Demangled: vtable for tesseract::TessUnlvRenderer */
extern void* _ZTVN9tesseract16TessUnlvRendererE;

/* Symbol: _ZN9tesseract17LikelyListNumeralERK6STRING */
/* Demangled: tesseract::LikelyListNumeral(STRING const&) */
int _ZN9tesseract17LikelyListNumeralERK6STRING(void);

/* Symbol: _ZN9tesseract13MasterTrainer25GetBestMatchingFontInfoIdEPKc */
/* Demangled: tesseract::MasterTrainer::GetBestMatchingFontInfoId(char const*) */
int _ZN9tesseract13MasterTrainer25GetBestMatchingFontInfoIdEPKc(void);

/* Symbol: _ZNK9tesseract4Bmp820SaveBmp2CharDumpFileEP7__sFILE */
/* Demangled: tesseract::Bmp8::SaveBmp2CharDumpFile(__sFILE*) const */
int _ZNK9tesseract4Bmp820SaveBmp2CharDumpFileEP7__sFILE(void);

/* Symbol: _ZN13GenericVectorIxE8pop_backEv */
/* Demangled: GenericVector<long long>::pop_back() */
int _ZN13GenericVectorIxE8pop_backEv(void);

/* Symbol: _ZN9tesseract15CCNonTextDetectD2Ev */
/* Demangled: tesseract::CCNonTextDetect::~CCNonTextDetect() */
int _ZN9tesseract15CCNonTextDetectD2Ev(void);

/* Symbol: _ZN9tesseract16ColPartitionGrid15RecomputeBoundsEiRK6ICOORDS3_S3_ */
/* Demangled: tesseract::ColPartitionGrid::RecomputeBounds(int, ICOORD const&, ICOORD const&, ICOORD const&) */
int _ZN9tesseract16ColPartitionGrid15RecomputeBoundsEiRK6ICOORDS3_S3_(void);

/* Symbol: _ZN9tesseract7Textord15make_prop_wordsEP6TO_ROW6FCOORD */
/* Demangled: tesseract::Textord::make_prop_words(TO_ROW*, FCOORD) */
int _ZN9tesseract7Textord15make_prop_wordsEP6TO_ROW6FCOORD(void);

/* Symbol: color_list */
/* Demangled: color_list */
extern void* color_list;

/* Symbol: TessBaseAPISetInputImage */
/* Demangled: TessBaseAPISetInputImage */
int TessBaseAPISetInputImage(void);

/* Symbol: _ZN13GenericVectorIP8WERD_RESE7reserveEi */
/* Demangled: GenericVector<WERD_RES*>::reserve(int) */
int _ZN13GenericVectorIP8WERD_RESE7reserveEi(void);

/* Symbol: _Z14tune_row_pitchP6TO_ROWP5STATSssfRfS3_RsP14ICOORDELT_LISTh */
/* Demangled: tune_row_pitch(TO_ROW*, STATS*, short, short, float, float&, float&, short&, ICOORDELT_LIST*, unsigned char) */
int _Z14tune_row_pitchP6TO_ROWP5STATSssfRfS3_RsP14ICOORDELT_LISTh(void);

/* Symbol: _ZNK9tesseract12PageIterator9BlockTypeEv */
/* Demangled: tesseract::PageIterator::BlockType() const */
int _ZNK9tesseract12PageIterator9BlockTypeEv(void);

/* Symbol: _ZN9tesseract13UnicharAmbigs18ParseAmbiguityLineEiiiRK10UNICHARSETPcPiS5_S5_S4_S5_ */
/* Demangled: tesseract::UnicharAmbigs::ParseAmbiguityLine(int, int, int, UNICHARSET const&, char*, int*, int*, int*, char*, int*) */
int _ZN9tesseract13UnicharAmbigs18ParseAmbiguityLineEiiiRK10UNICHARSETPcPiS5_S5_S4_S5_(void);

/* Symbol: _ZNK9tesseract13IntFeatureMap10MapFeatureERK18INT_FEATURE_STRUCT */
/* Demangled: tesseract::IntFeatureMap::MapFeature(INT_FEATURE_STRUCT const&) const */
int _ZNK9tesseract13IntFeatureMap10MapFeatureERK18INT_FEATURE_STRUCT(void);

/* Symbol: atan_table_mutex */
/* Demangled: atan_table_mutex */
extern void* atan_table_mutex;

/* Symbol: _ZN3REJ19setrej_tess_failureEv */
/* Demangled: REJ::setrej_tess_failure() */
int _ZN3REJ19setrej_tess_failureEv(void);

/* Symbol: _ZN13GenericVectorIN9tesseract9KDPairIncIfiEEE7reserveEi */
/* Demangled: GenericVector<tesseract::KDPairInc<float, int> >::reserve(int) */
int _ZN13GenericVectorIN9tesseract9KDPairIncIfiEEE7reserveEi(void);

/* Symbol: _ZN9tesseract13TessLangModelC2ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_bPNS_15TessdataManagerEPNS_15CubeRecoContextE */
/* Demangled: tesseract::TessLangModel::TessLangModel(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, tesseract::TessdataManager*, tesseract::CubeRecoContext*) */
int _ZN9tesseract13TessLangModelC2ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_bPNS_15TessdataManagerEPNS_15CubeRecoContextE(void);

/* Symbol: _Z17initialise_searchR13WERD_RES_LISTS0_ */
/* Demangled: initialise_search(WERD_RES_LIST&, WERD_RES_LIST&) */
int _Z17initialise_searchR13WERD_RES_LISTS0_(void);

/* Symbol: _ZN13GenericVectorIPK14ParagraphModelE7reserveEi */
/* Demangled: GenericVector<ParagraphModel const*>::reserve(int) */
int _ZN13GenericVectorIPK14ParagraphModelE7reserveEi(void);

/* Symbol: _ZN8BLOBNBOX21reflect_box_in_y_axisEv */
/* Demangled: BLOBNBOX::reflect_box_in_y_axis() */
int _ZN8BLOBNBOX21reflect_box_in_y_axisEv(void);

/* Symbol: _ZN18INT_FEATURE_STRUCTC2Eiii */
/* Demangled: INT_FEATURE_STRUCT::INT_FEATURE_STRUCT(int, int, int) */
int _ZN18INT_FEATURE_STRUCTC2Eiii(void);

/* Symbol: _ZNSt3__16vectorIfNS_9allocatorIfEEE8__appendEjRKf */
/* Demangled: std::__1::vector<float, std::__1::allocator<float> >::__append(unsigned int, float const&) */
int _ZNSt3__16vectorIfNS_9allocatorIfEEE8__appendEjRKf(void);

/* Symbol: _ZN9tesseract6BBGridI8BLOBNBOX14BLOBNBOX_CLIST13BLOBNBOX_C_ITE17CountCellElementsEv */
/* Demangled: tesseract::BBGrid<BLOBNBOX, BLOBNBOX_CLIST, BLOBNBOX_C_IT>::CountCellElements() */
int _ZN9tesseract6BBGridI8BLOBNBOX14BLOBNBOX_CLIST13BLOBNBOX_C_ITE17CountCellElementsEv(void);

/* Symbol: _ZN9tesseract10CubeObject9RecognizeEPNS_9LangModelEb */
/* Demangled: tesseract::CubeObject::Recognize(tesseract::LangModel*, bool) */
int _ZN9tesseract10CubeObject9RecognizeEPNS_9LangModelEb(void);

/* Symbol: _ZN9tesseract9Tesseract16FindSegmentationERK13GenericVectorIiEP8WERD_RES */
/* Demangled: tesseract::Tesseract::FindSegmentation(GenericVector<int> const&, WERD_RES*) */
int _ZN9tesseract9Tesseract16FindSegmentationERK13GenericVectorIiEP8WERD_RES(void);

/* Symbol: _ZN9tesseract8CharSamp5ScaleEiib */
/* Demangled: tesseract::CharSamp::Scale(int, int, bool) */
int _ZN9tesseract8CharSamp5ScaleEiib(void);

/* Symbol: _ZN9tesseract14CubeLineObjectC1EPNS_15CubeRecoContextEP3Pix */
/* Demangled: tesseract::CubeLineObject::CubeLineObject(tesseract::CubeRecoContext*, Pix*) */
int _ZN9tesseract14CubeLineObjectC1EPNS_15CubeRecoContextEP3Pix(void);

/* Symbol: _ZN9tesseract16CubeSearchObjectD2Ev */
/* Demangled: tesseract::CubeSearchObject::~CubeSearchObject() */
int _ZN9tesseract16CubeSearchObjectD2Ev(void);

/* Symbol: _Z7reverseP8list_rec */
/* Demangled: reverse(list_rec*) */
int _Z7reverseP8list_rec(void);

/* Symbol: _ZN9tesseract12ColPartition19ThisPartitionBetterEP8BLOBNBOXRKS0_ */
/* Demangled: tesseract::ColPartition::ThisPartitionBetter(BLOBNBOX*, tesseract::ColPartition const&) */
int _ZN9tesseract12ColPartition19ThisPartitionBetterEP8BLOBNBOXRKS0_(void);

/* Symbol: _Z17row_spacing_orderPKvS0_ */
/* Demangled: row_spacing_order(void const*, void const*) */
int _Z17row_spacing_orderPKvS0_(void);

/* Symbol: JNI_OnLoad */
/* Demangled: JNI_OnLoad */
int JNI_OnLoad(void);

/* Symbol: _ZN9tesseract11TessBaseAPI8DetectOSEP9OSResults */
/* Demangled: tesseract::TessBaseAPI::DetectOS(OSResults*) */
int _ZN9tesseract11TessBaseAPI8DetectOSEP9OSResults(void);

/* Symbol: _ZN6C_BLOB9perimeterEv */
/* Demangled: C_BLOB::perimeter() */
int _ZN6C_BLOB9perimeterEv(void);

/* Symbol: _ZN9tesseract8FontInfo11DeSerializeEbP7__sFILE */
/* Demangled: tesseract::FontInfo::DeSerialize(bool, __sFILE*) */
int _ZN9tesseract8FontInfo11DeSerializeEbP7__sFILE(void);

/* Symbol: _Z8box_nextP11BLOBNBOX_IT */
/* Demangled: box_next(BLOBNBOX_IT*) */
int _Z8box_nextP11BLOBNBOX_IT(void);

/* Symbol: _ZN5TBLOB11ShallowCopyERKS_ */
/* Demangled: TBLOB::ShallowCopy(TBLOB const&) */
int _ZN5TBLOB11ShallowCopyERKS_(void);

/* Symbol: _ZN9tesseract8Classify15DoAdaptiveMatchEP5TBLOBP13ADAPT_RESULTS */
/* Demangled: tesseract::Classify::DoAdaptiveMatch(TBLOB*, ADAPT_RESULTS*) */
int _ZN9tesseract8Classify15DoAdaptiveMatchEP5TBLOBP13ADAPT_RESULTS(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract5ShapeEE15double_the_sizeEv */
/* Demangled: GenericVector<tesseract::Shape*>::double_the_size() */
int _ZN13GenericVectorIPN9tesseract5ShapeEE15double_the_sizeEv(void);

/* Symbol: _ZTVN9tesseract13TessLangModelE */
/* Demangled: vtable for tesseract::TessLangModel */
extern void* _ZTVN9tesseract13TessLangModelE;

/* Symbol: _ZN9tesseract11TessBaseAPI8GetWordsEPP4Pixa */
/* Demangled: tesseract::TessBaseAPI::GetWords(Pixa**) */
int _ZN9tesseract11TessBaseAPI8GetWordsEPP4Pixa(void);

/* Symbol: TessHOcrRendererCreate2 */
/* Demangled: TessHOcrRendererCreate2 */
int TessHOcrRendererCreate2(void);

/* Symbol: _Z12alloc_stringi */
/* Demangled: alloc_string(int) */
int _Z12alloc_stringi(void);

/* Symbol: _ZN9tesseract11TessBaseAPI24GetBlockTextOrientationsEPPiPPb */
/* Demangled: tesseract::TessBaseAPI::GetBlockTextOrientations(int**, bool**) */
int _ZN9tesseract11TessBaseAPI24GetBlockTextOrientationsEPPiPPb(void);

/* Symbol: _ZNK9tesseract7BoxWord19ProcessMatchedBlobsERK5TWERDP13TessCallback1IiE */
/* Demangled: tesseract::BoxWord::ProcessMatchedBlobs(TWERD const&, TessCallback1<int>*) const */
int _ZNK9tesseract7BoxWord19ProcessMatchedBlobsERK5TWERDP13TessCallback1IiE(void);

/* Symbol: _ZNK4SEAM8UndoSeamEP5TBLOBS1_ */
/* Demangled: SEAM::UndoSeam(TBLOB*, TBLOB*) const */
int _ZNK4SEAM8UndoSeamEP5TBLOBS1_(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int fn___aeabi_memset(void) __asm__("__aeabi_memset");

/* Symbol: _ZN9tesseract7Wordrec9SegSearchEP8WERD_RESPNS_16BestChoiceBundleEP12BlamerBundle */
/* Demangled: tesseract::Wordrec::SegSearch(WERD_RES*, tesseract::BestChoiceBundle*, BlamerBundle*) */
int _ZN9tesseract7Wordrec9SegSearchEP8WERD_RESPNS_16BestChoiceBundleEP12BlamerBundle(void);

/* Symbol: _ZNK8BLOBNBOX12GoodTextBlobEv */
/* Demangled: BLOBNBOX::GoodTextBlob() const */
int _ZNK8BLOBNBOX12GoodTextBlobEv(void);

/* Symbol: _ZN5PDBLKC2Essss */
/* Demangled: PDBLK::PDBLK(short, short, short, short) */
int _ZN5PDBLKC2Essss(void);

/* Symbol: _ZTV29_TessMemberResultCallback_0_2ILb0Eb8WERD_RESRK4TBOXS3_E */
/* Demangled: vtable for _TessMemberResultCallback_0_2<false, bool, WERD_RES, TBOX const&, TBOX const&> */
extern void* _ZTV29_TessMemberResultCallback_0_2ILb0Eb8WERD_RESRK4TBOXS3_E;

/* Symbol: _ZN9tesseract6CCUtilC2Ev */
/* Demangled: tesseract::CCUtil::CCUtil() */
int _ZN9tesseract6CCUtilC2Ev(void);

/* Symbol: _ZN13GenericVectorIN9tesseract12ErrorCounter6CountsEE5clearEv */
/* Demangled: GenericVector<tesseract::ErrorCounter::Counts>::clear() */
int _ZN13GenericVectorIN9tesseract12ErrorCounter6CountsEE5clearEv(void);

/* Symbol: _ZN9tesseract10ShapeTable18AppendMasterShapesERKS0_P13GenericVectorIiE */
/* Demangled: tesseract::ShapeTable::AppendMasterShapes(tesseract::ShapeTable const&, GenericVector<int>*) */
int _ZN9tesseract10ShapeTable18AppendMasterShapesERKS0_P13GenericVectorIiE(void);

/* Symbol: _ZN9tesseract7TabFind13LeftTabForBoxERK4TBOXbb */
/* Demangled: tesseract::TabFind::LeftTabForBox(TBOX const&, bool, bool) */
int _ZN9tesseract7TabFind13LeftTabForBoxERK4TBOXbb(void);

/* Symbol: _Z20compute_height_modesP5STATSiiPii */
/* Demangled: compute_height_modes(STATS*, int, int, int*, int) */
int _Z20compute_height_modesP5STATSiiPii(void);

/* Symbol: _ZN9tesseract7TabFind14FindTabVectorsEiNS_12TabAlignmentEiPNS_14TabVector_LISTEPiS4_ */
/* Demangled: tesseract::TabFind::FindTabVectors(int, tesseract::TabAlignment, int, tesseract::TabVector_LIST*, int*, int*) */
int _ZN9tesseract7TabFind14FindTabVectorsEiNS_12TabAlignmentEiPNS_14TabVector_LISTEPiS4_(void);

/* Symbol: _ZN9tesseract15StructuredTable4InitEv */
/* Demangled: tesseract::StructuredTable::Init() */
int _ZN9tesseract15StructuredTable4InitEv(void);

/* Symbol: _ZN9tesseract13DocumentCache13LoadDocumentsERK13GenericVectorI6STRINGEPKcNS_15CachingStrategyEPFbRKS2_PS1_IcEE */
/* Demangled: tesseract::DocumentCache::LoadDocuments(GenericVector<STRING> const&, char const*, tesseract::CachingStrategy, bool (*)(STRING const&, GenericVector<char>*)) */
int _ZN9tesseract13DocumentCache13LoadDocumentsERK13GenericVectorI6STRINGEPKcNS_15CachingStrategyEPFbRKS2_PS1_IcEE(void);

/* Symbol: _ZTVN9tesseract8IndexMapE */
/* Demangled: vtable for tesseract::IndexMap */
extern void* _ZTVN9tesseract8IndexMapE;

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int fn___aeabi_uidiv(void) __asm__("__aeabi_uidiv");

/* Symbol: _ZNK9tesseract17LTRResultIterator13RowAttributesEPfS1_S1_ */
/* Demangled: tesseract::LTRResultIterator::RowAttributes(float*, float*, float*) const */
int _ZNK9tesseract17LTRResultIterator13RowAttributesEPfS1_S1_(void);

/* Symbol: _Z11GetNextFillP12TABLE_FILLERP9FILL_SPEC */
/* Demangled: GetNextFill(TABLE_FILLER*, FILL_SPEC*) */
int _Z11GetNextFillP12TABLE_FILLERP9FILL_SPEC(void);

/* Symbol: _ZN13GenericVectorIN9tesseract11ObjectCacheINS0_4DawgEE14ReferenceCountEE15double_the_sizeEv */
/* Demangled: GenericVector<tesseract::ObjectCache<tesseract::Dawg>::ReferenceCount>::double_the_size() */
int _ZN13GenericVectorIN9tesseract11ObjectCacheINS0_4DawgEE14ReferenceCountEE15double_the_sizeEv(void);

/* Symbol: _ZNSt3__16vectorIdNS_9allocatorIdEEE11__vallocateEj */
/* Demangled: std::__1::vector<double, std::__1::allocator<double> >::__vallocate(unsigned int) */
int _ZNSt3__16vectorIdNS_9allocatorIdEEE11__vallocateEj(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiP10ScrollViewEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, ScrollView*>, std::__1::__map_value_compare<int, std::__1::__value_type<int, ScrollView*>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, ScrollView*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, ScrollView*>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIiP10ScrollViewEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void);

/* Symbol: _ZN16BLOB_CHOICE_LIST9deep_copyEPKS_PFP11BLOB_CHOICEPKS2_E */
/* Demangled: BLOB_CHOICE_LIST::deep_copy(BLOB_CHOICE_LIST const*, BLOB_CHOICE* (*)(BLOB_CHOICE const*)) */
int _ZN16BLOB_CHOICE_LIST9deep_copyEPKS_PFP11BLOB_CHOICEPKS2_E(void);

/* Symbol: _ZN9tesseract9BitVector11DeSerializeEbP7__sFILE */
/* Demangled: tesseract::BitVector::DeSerialize(bool, __sFILE*) */
int _ZN9tesseract9BitVector11DeSerializeEbP7__sFILE(void);

/* Symbol: _Z15FreeClassFieldsP12CLASS_STRUCT */
/* Demangled: FreeClassFields(CLASS_STRUCT*) */
int _Z15FreeClassFieldsP12CLASS_STRUCT(void);

/* Symbol: _ZN9tesseract9Tesseract17match_word_pass_nEiP8WERD_RESP3ROWP5BLOCK */
/* Demangled: tesseract::Tesseract::match_word_pass_n(int, WERD_RES*, ROW*, BLOCK*) */
int _ZN9tesseract9Tesseract17match_word_pass_nEiP8WERD_RESP3ROWP5BLOCK(void);

/* Symbol: _ZN10UNICHARSET18UNICHAR_PROPERTIESC2Ev */
/* Demangled: UNICHARSET::UNICHAR_PROPERTIES::UNICHAR_PROPERTIES() */
int _ZN10UNICHARSET18UNICHAR_PROPERTIESC2Ev(void);

/* Symbol: _ZTV31_TessFunctionResultCallback_0_2ILb0EbRKN9tesseract7FontSetES3_E */
/* Demangled: vtable for _TessFunctionResultCallback_0_2<false, bool, tesseract::FontSet const&, tesseract::FontSet const&> */
extern void* _ZTV31_TessFunctionResultCallback_0_2ILb0EbRKN9tesseract7FontSetES3_E;

/* Symbol: _ZN6BITS16C2Et */
/* Demangled: BITS16::BITS16(unsigned short) */
int _ZN6BITS16C2Et(void);

/* Symbol: _ZN13GenericVectorI21StrongScriptDirectionE15double_the_sizeEv */
/* Demangled: GenericVector<StrongScriptDirection>::double_the_size() */
int _ZN13GenericVectorI21StrongScriptDirectionE15double_the_sizeEv(void);

/* Symbol: _ZN14ELIST_ITERATOR8exchangeEPS_ */
/* Demangled: ELIST_ITERATOR::exchange(ELIST_ITERATOR*) */
int _ZN14ELIST_ITERATOR8exchangeEPS_(void);

/* Symbol: _ZNK9tesseract10ShapeTable9FindShapeEii */
/* Demangled: tesseract::ShapeTable::FindShape(int, int) const */
int _ZNK9tesseract10ShapeTable9FindShapeEii(void);

/* Symbol: _ZN9tesseract16ColPartitionGrid10ClaimBoxesEv */
/* Demangled: tesseract::ColPartitionGrid::ClaimBoxes() */
int _ZN9tesseract16ColPartitionGrid10ClaimBoxesEv(void);

/* Symbol: _ZN9tesseract9Tesseract16ResegmentCharBoxEP8PAGE_RESPK4TBOXRS4_S6_PKc */
/* Demangled: tesseract::Tesseract::ResegmentCharBox(PAGE_RES*, TBOX const*, TBOX const&, TBOX const&, char const*) */
int _ZN9tesseract9Tesseract16ResegmentCharBoxEP8PAGE_RESPK4TBOXRS4_S6_PKc(void);

/* Symbol: _ZN9tesseract13MasterTrainerD2Ev */
/* Demangled: tesseract::MasterTrainer::~MasterTrainer() */
int _ZN9tesseract13MasterTrainerD2Ev(void);

/* Symbol: _ZN13GenericVectorIN9tesseract15UnicharAndFontsEE18DeSerializeClassesEbP7__sFILE */
/* Demangled: GenericVector<tesseract::UnicharAndFonts>::DeSerializeClasses(bool, __sFILE*) */
int _ZN13GenericVectorIN9tesseract15UnicharAndFontsEE18DeSerializeClassesEbP7__sFILE(void);

/* Symbol: _ZN9tesseract15UnicharAndFonts11DeSerializeEbP7__sFILE */
/* Demangled: tesseract::UnicharAndFonts::DeSerialize(bool, __sFILE*) */
int _ZN9tesseract15UnicharAndFonts11DeSerializeEbP7__sFILE(void);

/* Symbol: _ZNK9tesseract7IntGrid23RectMostlyOverThresholdERK4TBOXi */
/* Demangled: tesseract::IntGrid::RectMostlyOverThreshold(TBOX const&, int) const */
int _ZNK9tesseract7IntGrid23RectMostlyOverThresholdERK4TBOXi(void);

/* Symbol: _ZN9tesseract15StructuredTable7DisplayEP10ScrollViewNS1_5ColorE */
/* Demangled: tesseract::StructuredTable::Display(ScrollView*, ScrollView::Color) */
int _ZN9tesseract15StructuredTable7DisplayEP10ScrollViewNS1_5ColorE(void);

/* Symbol: _ZN4SEAM10PrintSeamsEPKcRK13GenericVectorIPS_E */
/* Demangled: SEAM::PrintSeams(char const*, GenericVector<SEAM*> const&) */
int _ZN4SEAM10PrintSeamsEPKcRK13GenericVectorIPS_E(void);

/* Symbol: _ZN9tesseract15TableRecognizer13set_line_gridEPNS_16ColPartitionGridE */
/* Demangled: tesseract::TableRecognizer::set_line_grid(tesseract::ColPartitionGrid*) */
int _ZN9tesseract15TableRecognizer13set_line_gridEPNS_16ColPartitionGridE(void);

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int fn___aeabi_uidivmod(void) __asm__("__aeabi_uidivmod");

/* Symbol: _Z16C_OUTLINE_zapperP10ELIST_LINK */
/* Demangled: C_OUTLINE_zapper(ELIST_LINK*) */
int _Z16C_OUTLINE_zapperP10ELIST_LINK(void);

/* Symbol: _ZN9tesseract12PageIteratoraSERKS0_ */
/* Demangled: tesseract::PageIterator::operator=(tesseract::PageIterator const&) */
int _ZN9tesseract12PageIteratoraSERKS0_(void);

/* Symbol: _ZN6C_BLOB24EstimateBaselinePositionEv */
/* Demangled: C_BLOB::EstimateBaselinePosition() */
int _ZN6C_BLOB24EstimateBaselinePositionEv(void);

/* Symbol: _ZN13GenericVectorI4TBOXE11DeSerializeEbPN9tesseract5TFileE */
/* Demangled: GenericVector<TBOX>::DeSerialize(bool, tesseract::TFile*) */
int _ZN13GenericVectorI4TBOXE11DeSerializeEbPN9tesseract5TFileE(void);

/* Symbol: _ZN9tesseract12DocumentData12SaveDocumentEPKcPFbRK13GenericVectorIcERK6STRINGE */
/* Demangled: tesseract::DocumentData::SaveDocument(char const*, bool (*)(GenericVector<char> const&, STRING const&)) */
int _ZN9tesseract12DocumentData12SaveDocumentEPKcPFbRK13GenericVectorIcERK6STRINGE(void);

/* Symbol: _ZN3REJ14setrej_row_rejEv */
/* Demangled: REJ::setrej_row_rej() */
int _ZN3REJ14setrej_row_rejEv(void);

/* Symbol: _Z32orientation_and_script_detectionR6STRINGP9OSResultsPN9tesseract9TesseractE */
/* Demangled: orientation_and_script_detection(STRING&, OSResults*, tesseract::Tesseract*) */
int _Z32orientation_and_script_detectionR6STRINGP9OSResultsPN9tesseract9TesseractE(void);

/* Symbol: _ZN9tesseract8CCStructC1Ev */
/* Demangled: tesseract::CCStruct::CCStruct() */
int _ZN9tesseract8CCStructC1Ev(void);

/* Symbol: _ZN9tesseract12ColPartition11SetRightTabEPKNS_9TabVectorE */
/* Demangled: tesseract::ColPartition::SetRightTab(tesseract::TabVector const*) */
int _ZN9tesseract12ColPartition11SetRightTabEPKNS_9TabVectorE(void);

/* Symbol: _Z18print_block_countsP8TO_BLOCKi */
/* Demangled: print_block_counts(TO_BLOCK*, int) */
int _Z18print_block_countsP8TO_BLOCKi(void);

/* Symbol: _ZN9tesseract9Tesseract18SetupAllWordsPassNEiPK4TBOXPKcP8PAGE_RESP13GenericVectorINS_8WordDataEE */
/* Demangled: tesseract::Tesseract::SetupAllWordsPassN(int, TBOX const*, char const*, PAGE_RES*, GenericVector<tesseract::WordData>*) */
int _ZN9tesseract9Tesseract18SetupAllWordsPassNEiPK4TBOXPKcP8PAGE_RESP13GenericVectorINS_8WordDataEE(void);

/* Symbol: _ZNSt3__16vectorIdNS_9allocatorIdEEE26__swap_out_circular_bufferERNS_14__split_bufferIdRS2_EE */
/* Demangled: std::__1::vector<double, std::__1::allocator<double> >::__swap_out_circular_buffer(std::__1::__split_buffer<double, std::__1::allocator<double>&>&) */
int _ZNSt3__16vectorIdNS_9allocatorIdEEE26__swap_out_circular_bufferERNS_14__split_bufferIdRS2_EE(void);

/* Symbol: _Z13MakePrototypeP9CLUSTERERP13CLUSTERCONFIGP6sample */
/* Demangled: MakePrototype(CLUSTERER*, CLUSTERCONFIG*, sample*) */
int _Z13MakePrototypeP9CLUSTERERP13CLUSTERCONFIGP6sample(void);

/* Symbol: FeatureDisplayWindow */
/* Demangled: FeatureDisplayWindow */
extern void* FeatureDisplayWindow;

/* Symbol: _ZN9tesseract9TabVectorC2EiiNS_12TabAlignmentEP14BLOBNBOX_CLIST */
/* Demangled: tesseract::TabVector::TabVector(int, int, tesseract::TabAlignment, BLOBNBOX_CLIST*) */
int _ZN9tesseract9TabVectorC2EiiNS_12TabAlignmentEP14BLOBNBOX_CLIST(void);

/* Symbol: _ZN11WERD_CHOICE18remove_unichar_idsEii */
/* Demangled: WERD_CHOICE::remove_unichar_ids(int, int) */
int _ZN11WERD_CHOICE18remove_unichar_idsEii(void);

/* Symbol: _Z12NewEdgePointv */
/* Demangled: NewEdgePoint() */
int _Z12NewEdgePointv(void);

/* Symbol: _ZN9tesseract7ConComp16SegmentHistogramEPiS1_ */
/* Demangled: tesseract::ConComp::SegmentHistogram(int*, int*) */
int _ZN9tesseract7ConComp16SegmentHistogramEPiS1_(void);

/* Symbol: _Z14try_rows_fixedP8TO_BLOCKih */
/* Demangled: try_rows_fixed(TO_BLOCK*, int, unsigned char) */
int _Z14try_rows_fixedP8TO_BLOCKih(void);

/* Symbol: _ZN13GenericVectorIN9tesseract19RowScratchRegistersEE12init_to_sizeEiS1_ */
/* Demangled: GenericVector<tesseract::RowScratchRegisters>::init_to_size(int, tesseract::RowScratchRegisters) */
int _ZN13GenericVectorIN9tesseract19RowScratchRegistersEE12init_to_sizeEiS1_(void);

/* Symbol: _Z13NewTempConfigii */
/* Demangled: NewTempConfig(int, int) */
int _Z13NewTempConfigii(void);

/* Symbol: _ZNK9tesseract4Dawg11match_wordsEP11WERD_CHOICEixi */
/* Demangled: tesseract::Dawg::match_words(WERD_CHOICE*, int, long long, int) const */
int _ZNK9tesseract4Dawg11match_wordsEP11WERD_CHOICEixi(void);

/* Symbol: _ZN9tesseract17LTRResultIteratorC1EP8PAGE_RESPNS_9TesseractEiiiiii */
/* Demangled: tesseract::LTRResultIterator::LTRResultIterator(PAGE_RES*, tesseract::Tesseract*, int, int, int, int, int, int) */
int _ZN9tesseract17LTRResultIteratorC1EP8PAGE_RESPNS_9TesseractEiiiiii(void);

/* Symbol: _ZNK11PAGE_RES_IT3cmpERKS_ */
/* Demangled: PAGE_RES_IT::cmp(PAGE_RES_IT const&) const */
int _ZNK11PAGE_RES_IT3cmpERKS_(void);

/* Symbol: _ZN5TWERD11BLNormalizeEPK5BLOCKPK3ROWP3PixbffbN9tesseract13OcrEngineModeEPK4TBOXP6DENORM */
/* Demangled: TWERD::BLNormalize(BLOCK const*, ROW const*, Pix*, bool, float, float, bool, tesseract::OcrEngineMode, TBOX const*, DENORM*) */
int _ZN5TWERD11BLNormalizeEPK5BLOCKPK3ROWP3PixbffbN9tesseract13OcrEngineModeEPK4TBOXP6DENORM(void);

/* Symbol: _ZN9tesseract8Classify20ExtractIntCNFeaturesERK5TBLOBRK20INT_FX_RESULT_STRUCT */
/* Demangled: tesseract::Classify::ExtractIntCNFeatures(TBLOB const&, INT_FX_RESULT_STRUCT const&) */
int _ZN9tesseract8Classify20ExtractIntCNFeaturesERK5TBLOBRK20INT_FX_RESULT_STRUCT(void);

/* Symbol: _Z6KDWalkP6KDTREEPFvzEPv */
/* Demangled: KDWalk(KDTREE*, void (*)(...), void*) */
int _Z6KDWalkP6KDTREEPFvzEPv(void);

/* Symbol: classify_norm_adj_midpoint */
/* Demangled: classify_norm_adj_midpoint */
extern void* classify_norm_adj_midpoint;

/* Symbol: _ZN13GenericVectorIPN9tesseract4DawgEE5clearEv */
/* Demangled: GenericVector<tesseract::Dawg*>::clear() */
int _ZN13GenericVectorIPN9tesseract4DawgEE5clearEv(void);

/* Symbol: _ZTV31_TessFunctionResultCallback_0_2ILb0EbRKiS1_E */
/* Demangled: vtable for _TessFunctionResultCallback_0_2<false, bool, int const&, int const&> */
extern void* _ZTV31_TessFunctionResultCallback_0_2ILb0EbRKiS1_E;

/* Symbol: _ZN9tesseract10ShapeTable8AddShapeEii */
/* Demangled: tesseract::ShapeTable::AddShape(int, int) */
int _ZN9tesseract10ShapeTable8AddShapeEii(void);

/* Symbol: _ZN9tesseract16FeatureChebyshevD1Ev */
/* Demangled: tesseract::FeatureChebyshev::~FeatureChebyshev() */
int _ZN9tesseract16FeatureChebyshevD1Ev(void);

/* Symbol: _ZN9tesseract11TableFinder21InsertLeaderPartitionEPNS_12ColPartitionE */
/* Demangled: tesseract::TableFinder::InsertLeaderPartition(tesseract::ColPartition*) */
int _ZN9tesseract11TableFinder21InsertLeaderPartitionEPNS_12ColPartitionE(void);

/* Symbol: _ZTV31_TessFunctionResultCallback_0_1ILb0EvN9tesseract8FontInfoEE */
/* Demangled: vtable for _TessFunctionResultCallback_0_1<false, void, tesseract::FontInfo> */
extern void* _ZTV31_TessFunctionResultCallback_0_1ILb0EvN9tesseract8FontInfoEE;

/* Symbol: _ZN9tesseract9NeuralNet10ReadBinaryINS_15InputFileBufferEEEbPT_ */
/* Demangled: bool tesseract::NeuralNet::ReadBinary<tesseract::InputFileBuffer>(tesseract::InputFileBuffer*) */
int _ZN9tesseract9NeuralNet10ReadBinaryINS_15InputFileBufferEEEbPT_(void);

/* Symbol: _ZN9tesseract14EquationDetect19IdentifySpecialTextEv */
/* Demangled: tesseract::EquationDetect::IdentifySpecialText() */
int _ZN9tesseract14EquationDetect19IdentifySpecialTextEv(void);

/* Symbol: _ZN9tesseract11CharSampSetC2Ev */
/* Demangled: tesseract::CharSampSet::CharSampSet() */
int _ZN9tesseract11CharSampSetC2Ev(void);

/* Symbol: _Z33EqualIgnoringCaseAndTerminalPunctRK11WERD_CHOICES1_ */
/* Demangled: EqualIgnoringCaseAndTerminalPunct(WERD_CHOICE const&, WERD_CHOICE const&) */
int _Z33EqualIgnoringCaseAndTerminalPunctRK11WERD_CHOICES1_(void);

/* Symbol: _ZNK9tesseract15StructuredTable12bounding_boxEv */
/* Demangled: tesseract::StructuredTable::bounding_box() const */
int _ZNK9tesseract15StructuredTable12bounding_boxEv(void);

/* Symbol: _ZN13GenericVectorIiE6removeEi */
/* Demangled: GenericVector<int>::remove(int) */
int _ZN13GenericVectorIiE6removeEi(void);

/* Symbol: _ZN11PAGE_RES_IT21InsertSimpleCloneWordERK8WERD_RESP4WERD */
/* Demangled: PAGE_RES_IT::InsertSimpleCloneWord(WERD_RES const&, WERD*) */
int _ZN11PAGE_RES_IT21InsertSimpleCloneWordERK8WERD_RESP4WERD(void);

/* Symbol: _ZN5TBLOB6RotateE6FCOORD */
/* Demangled: TBLOB::Rotate(FCOORD) */
int _ZN5TBLOB6RotateE6FCOORD(void);

/* Symbol: _ZN14CLIST_ITERATOR8exchangeEPS_ */
/* Demangled: CLIST_ITERATOR::exchange(CLIST_ITERATOR*) */
int _ZN14CLIST_ITERATOR8exchangeEPS_(void);

/* Symbol: _Z18BLOB_CHOICE_zapperP10ELIST_LINK */
/* Demangled: BLOB_CHOICE_zapper(ELIST_LINK*) */
int _Z18BLOB_CHOICE_zapperP10ELIST_LINK(void);

/* Symbol: _ZN14ScriptDetector15fraktur_script_E */
/* Demangled: ScriptDetector::fraktur_script_ */
extern void* _ZN14ScriptDetector15fraktur_script_E;

/* Symbol: _ZN9tesseract14TrainingSample16CopyFromFeaturesERK20INT_FX_RESULT_STRUCTRK4TBOXPK18INT_FEATURE_STRUCTi */
/* Demangled: tesseract::TrainingSample::CopyFromFeatures(INT_FX_RESULT_STRUCT const&, TBOX const&, INT_FEATURE_STRUCT const*, int) */
int _ZN9tesseract14TrainingSample16CopyFromFeaturesERK20INT_FX_RESULT_STRUCTRK4TBOXPK18INT_FEATURE_STRUCTi(void);

/* Symbol: _ZN9tesseract12WordUnigramsD2Ev */
/* Demangled: tesseract::WordUnigrams::~WordUnigrams() */
int _ZN9tesseract12WordUnigramsD2Ev(void);

/* Symbol: _ZNK9tesseract4Trie22unichar_id_to_patternsEiRK10UNICHARSETP13GenericVectorIiE */
/* Demangled: tesseract::Trie::unichar_id_to_patterns(int, UNICHARSET const&, GenericVector<int>*) const */
int _ZNK9tesseract4Trie22unichar_id_to_patternsEiRK10UNICHARSETP13GenericVectorIiE(void);

/* Symbol: _ZN9tesseract10GridSearchINS_10ColSegmentENS_16ColSegment_CLISTENS_15ColSegment_C_ITEE11SetIteratorEv */
/* Demangled: tesseract::GridSearch<tesseract::ColSegment, tesseract::ColSegment_CLIST, tesseract::ColSegment_C_IT>::SetIterator() */
int _ZN9tesseract10GridSearchINS_10ColSegmentENS_16ColSegment_CLISTENS_15ColSegment_C_ITEE11SetIteratorEv(void);

/* Symbol: _ZN9tesseract7Wordrec27fill_filtered_fragment_listEP16BLOB_CHOICE_LISTiiS2_ */
/* Demangled: tesseract::Wordrec::fill_filtered_fragment_list(BLOB_CHOICE_LIST*, int, int, BLOB_CHOICE_LIST*) */
int _ZN9tesseract7Wordrec27fill_filtered_fragment_listEP16BLOB_CHOICE_LISTiiS2_(void);

/* Symbol: _ZN9tesseract7WordrecC2Ev */
/* Demangled: tesseract::Wordrec::Wordrec() */
int _ZN9tesseract7WordrecC2Ev(void);

/* Symbol: _ZN9tesseract7BoxWord18CopyFromNormalizedEP5TWERD */
/* Demangled: tesseract::BoxWord::CopyFromNormalized(TWERD*) */
int _ZN9tesseract7BoxWord18CopyFromNormalizedEP5TWERD(void);

/* Symbol: _ZNK9tesseract15IntFeatureSpace9SerializeEP7__sFILE */
/* Demangled: tesseract::IntFeatureSpace::Serialize(__sFILE*) const */
int _ZNK9tesseract15IntFeatureSpace9SerializeEP7__sFILE(void);

/* Symbol: _ZN9tesseract21ConvNetCharClassifierC2EPNS_7CharSetEPNS_12TuningParamsEPNS_11FeatureBaseE */
/* Demangled: tesseract::ConvNetCharClassifier::ConvNetCharClassifier(tesseract::CharSet*, tesseract::TuningParams*, tesseract::FeatureBase*) */
int _ZN9tesseract21ConvNetCharClassifierC2EPNS_7CharSetEPNS_12TuningParamsEPNS_11FeatureBaseE(void);

/* Symbol: _ZNK9tesseract11TessBaseAPI30GetThresholdedImageScaleFactorEv */
/* Demangled: tesseract::TessBaseAPI::GetThresholdedImageScaleFactor() const */
int _ZNK9tesseract11TessBaseAPI30GetThresholdedImageScaleFactorEv(void);

/* Symbol: _ZN9tesseract14ChoiceIteratorD2Ev */
/* Demangled: tesseract::ChoiceIterator::~ChoiceIterator() */
int _ZN9tesseract14ChoiceIteratorD2Ev(void);

/* Symbol: classify_cp_end_pad_tight */
/* Demangled: classify_cp_end_pad_tight */
extern void* classify_cp_end_pad_tight;

/* Symbol: _ZN9tesseract16kTextordDebugPixE */
/* Demangled: tesseract::kTextordDebugPix */
extern void* _ZN9tesseract16kTextordDebugPixE;

/* Symbol: _ZN9tesseract7Textord20correlate_with_statsEPP6TO_ROWiP8TO_BLOCK */
/* Demangled: tesseract::Textord::correlate_with_stats(TO_ROW**, int, TO_BLOCK*) */
int _ZN9tesseract7Textord20correlate_with_statsEPP6TO_ROWiP8TO_BLOCK(void);

/* Symbol: _ZNK6MATRIX10ClassifiedEiii */
/* Demangled: MATRIX::Classified(int, int, int) const */
int _ZNK6MATRIX10ClassifiedEiii(void);

/* Symbol: _ZN9tesseract11TableFinder4InitEiRK6ICOORDS3_ */
/* Demangled: tesseract::TableFinder::Init(int, ICOORD const&, ICOORD const&) */
int _ZN9tesseract11TableFinder4InitEiRK6ICOORDS3_(void);

/* Symbol: _ZN9tesseract11StrokeWidth17FindGoodNeighbourE16BlobNeighbourDirbP8BLOBNBOX */
/* Demangled: tesseract::StrokeWidth::FindGoodNeighbour(BlobNeighbourDir, bool, BLOBNBOX*) */
int _ZN9tesseract11StrokeWidth17FindGoodNeighbourE16BlobNeighbourDirbP8BLOBNBOX(void);

/* Symbol: _ZN8BLOBNBOX5mergeEPS_ */
/* Demangled: BLOBNBOX::merge(BLOBNBOX*) */
int _ZN8BLOBNBOX5mergeEPS_(void);

/* Symbol: _ZN6REJMAP18rej_word_block_rejEv */
/* Demangled: REJMAP::rej_word_block_rej() */
int _ZN6REJMAP18rej_word_block_rejEv(void);

/* Symbol: _ZN9tesseract9Tesseract12get_rep_charEP8WERD_RES */
/* Demangled: tesseract::Tesseract::get_rep_char(WERD_RES*) */
int _ZN9tesseract9Tesseract12get_rep_charEP8WERD_RES(void);

/* Symbol: _ZN12BlamerBundle18SetupNormTruthWordERK6DENORM */
/* Demangled: BlamerBundle::SetupNormTruthWord(DENORM const&) */
int _ZN12BlamerBundle18SetupNormTruthWordERK6DENORM(void);

/* Symbol: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS6_RS7_EE */
/* Demangled: std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__swap_out_circular_buffer(std::__1::__split_buffer<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&>&) */
int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS6_RS7_EE(void);

/* Symbol: _ZNK9tesseract15ShapeClassifier12PrintResultsEPKcRK13GenericVectorINS_11ShapeRatingEE */
/* Demangled: tesseract::ShapeClassifier::PrintResults(char const*, GenericVector<tesseract::ShapeRating> const&) const */
int _ZNK9tesseract15ShapeClassifier12PrintResultsEPKcRK13GenericVectorINS_11ShapeRatingEE(void);

/* Symbol: _ZNK9tesseract14SampleIterator16GetSparseClassIDEv */
/* Demangled: tesseract::SampleIterator::GetSparseClassID() const */
int _ZNK9tesseract14SampleIterator16GetSparseClassIDEv(void);

/* Symbol: _ZN9tesseract10CachedFile4ReadEPvi */
/* Demangled: tesseract::CachedFile::Read(void*, int) */
int _ZN9tesseract10CachedFile4ReadEPvi(void);

/* Symbol: _ZN9tesseract9CubeUtils12GetImageDataEP3Pixiiii */
/* Demangled: tesseract::CubeUtils::GetImageData(Pix*, int, int, int, int) */
int _ZN9tesseract9CubeUtils12GetImageDataEP3Pixiiii(void);

/* Symbol: _ZN9tesseract6BBGridI8BLOBNBOX14BLOBNBOX_CLIST13BLOBNBOX_C_ITE10InsertBBoxEbbPS1_ */
/* Demangled: tesseract::BBGrid<BLOBNBOX, BLOBNBOX_CLIST, BLOBNBOX_C_IT>::InsertBBox(bool, bool, BLOBNBOX*) */
int _ZN9tesseract6BBGridI8BLOBNBOX14BLOBNBOX_CLIST13BLOBNBOX_C_ITE10InsertBBoxEbbPS1_(void);

/* Symbol: TessBaseAPIGetInputImage */
/* Demangled: TessBaseAPIGetInputImage */
int TessBaseAPIGetInputImage(void);

/* Symbol: TessBaseAPISetImage2 */
/* Demangled: TessBaseAPISetImage2 */
int TessBaseAPISetImage2(void);

/* Symbol: _ZN9tesseract17TrainingSampleSet22OrganizeByFontAndClassEv */
/* Demangled: tesseract::TrainingSampleSet::OrganizeByFontAndClass() */
int _ZN9tesseract17TrainingSampleSet22OrganizeByFontAndClassEv(void);

/* Symbol: _ZN9tesseract17CubeLineSegmenter15kMaxConnCompHgtE */
/* Demangled: tesseract::CubeLineSegmenter::kMaxConnCompHgt */
extern void* _ZN9tesseract17CubeLineSegmenter15kMaxConnCompHgtE;

/* Symbol: _ZN9tesseract11WordAltListD0Ev */
/* Demangled: tesseract::WordAltList::~WordAltList() */
int _ZN9tesseract11WordAltListD0Ev(void);

/* Symbol: textord_skewsmooth_offset2 */
/* Demangled: textord_skewsmooth_offset2 */
extern void* textord_skewsmooth_offset2;

/* Symbol: _ZN9tesseract9Tesseract17word_outline_errsEP8WERD_RES */
/* Demangled: tesseract::Tesseract::word_outline_errs(WERD_RES*) */
int _ZN9tesseract9Tesseract17word_outline_errsEP8WERD_RES(void);

/* Symbol: _ZN9tesseract4Dict18SettupStopperPass1Ev */
/* Demangled: tesseract::Dict::SettupStopperPass1() */
int _ZN9tesseract4Dict18SettupStopperPass1Ev(void);

/* Symbol: _Z8EreallocPvi */
/* Demangled: Erealloc(void*, int) */
int _Z8EreallocPvi(void);

/* Symbol: _ZN9tesseract4Dict18go_deeper_dawg_fxnEPKcRK13GenericVectorIP16BLOB_CHOICE_LISTEiPK18CHAR_FRAGMENT_INFObP11WERD_CHOICEPfSE_SD_PiPv */
/* Demangled: tesseract::Dict::go_deeper_dawg_fxn(char const*, GenericVector<BLOB_CHOICE_LIST*> const&, int, CHAR_FRAGMENT_INFO const*, bool, WERD_CHOICE*, float*, float*, WERD_CHOICE*, int*, void*) */
int _ZN9tesseract4Dict18go_deeper_dawg_fxnEPKcRK13GenericVectorIP16BLOB_CHOICE_LISTEiPK18CHAR_FRAGMENT_INFObP11WERD_CHOICEPfSE_SD_PiPv(void);

/* Symbol: _ZN8TESSLINE20BuildFromOutlineListEP6EDGEPT */
/* Demangled: TESSLINE::BuildFromOutlineList(EDGEPT*) */
int _ZN8TESSLINE20BuildFromOutlineListEP6EDGEPT(void);

/* Symbol: _ZNK9tesseract13FontInfoTable9SerializeEP7__sFILE */
/* Demangled: tesseract::FontInfoTable::Serialize(__sFILE*) const */
int _ZNK9tesseract13FontInfoTable9SerializeEP7__sFILE(void);

/* Symbol: _ZN13BLOCK_RECT_ITC1EP5PDBLK */
/* Demangled: BLOCK_RECT_IT::BLOCK_RECT_IT(PDBLK*) */
int _ZN13BLOCK_RECT_ITC1EP5PDBLK(void);

/* Symbol: _Z19MakeEllipticalProtoP9CLUSTERERP6sampleP10STATISTICSP7BUCKETS */
/* Demangled: MakeEllipticalProto(CLUSTERER*, sample*, STATISTICS*, BUCKETS*) */
int _Z19MakeEllipticalProtoP9CLUSTERERP6sampleP10STATISTICSP7BUCKETS(void);

/* Symbol: _ZNK9tesseract8CharSamp11stringLabelEv */
/* Demangled: tesseract::CharSamp::stringLabel() const */
int _ZNK9tesseract8CharSamp11stringLabelEv(void);

/* Symbol: _ZNK9tesseract4Dawg14prefix_in_dawgERK11WERD_CHOICEb */
/* Demangled: tesseract::Dawg::prefix_in_dawg(WERD_CHOICE const&, bool) const */
int _ZNK9tesseract4Dawg14prefix_in_dawgERK11WERD_CHOICEb(void);

/* Symbol: textord_spline_minblobs */
/* Demangled: textord_spline_minblobs */
extern void* textord_spline_minblobs;

/* Symbol: _ZN13GenericVectorIN9tesseract12KDPtrPairDecIf4SEAMEEE7reserveEi */
/* Demangled: GenericVector<tesseract::KDPtrPairDec<float, SEAM> >::reserve(int) */
int _ZN13GenericVectorIN9tesseract12KDPtrPairDecIf4SEAMEEE7reserveEi(void);

/* Symbol: _ZNK6STRINGplERKS_ */
/* Demangled: STRING::operator+(STRING const&) const */
int _ZNK6STRINGplERKS_(void);

/* Symbol: equationdetect_save_seed_image */
/* Demangled: equationdetect_save_seed_image */
extern void* equationdetect_save_seed_image;

/* Symbol: _ZN10UNICHARSET14set_normed_idsEi */
/* Demangled: UNICHARSET::set_normed_ids(int) */
int _ZN10UNICHARSET14set_normed_idsEi(void);

/* Symbol: _ZN9tesseract8CharSamp16FromCharDumpFileEPNS_10CachedFileE */
/* Demangled: tesseract::CharSamp::FromCharDumpFile(tesseract::CachedFile*) */
int _ZN9tesseract8CharSamp16FromCharDumpFileEPNS_10CachedFileE(void);

/* Symbol: _ZN9tesseract15ColPartitionSet26AddPartitionCoverageAndBoxERKNS_12ColPartitionE */
/* Demangled: tesseract::ColPartitionSet::AddPartitionCoverageAndBox(tesseract::ColPartition const&) */
int _ZN9tesseract15ColPartitionSet26AddPartitionCoverageAndBoxERKNS_12ColPartitionE(void);

/* Symbol: textord_max_blob_overlaps */
/* Demangled: textord_max_blob_overlaps */
extern void* textord_max_blob_overlaps;

/* Symbol: _ZN9tesseract20TabConstraint_zapperEP10ELIST_LINK */
/* Demangled: tesseract::TabConstraint_zapper(ELIST_LINK*) */
int _ZN9tesseract20TabConstraint_zapperEP10ELIST_LINK(void);

/* Symbol: _ZN11WERD_CHOICED1Ev */
/* Demangled: WERD_CHOICE::~WERD_CHOICE() */
int _ZN11WERD_CHOICED1Ev(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE12__write_modeEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::__write_mode() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE12__write_modeEv(void);

/* Symbol: _ZN9tesseract19TessBoxTextRendererC1EPKc */
/* Demangled: tesseract::TessBoxTextRenderer::TessBoxTextRenderer(char const*) */
int _ZN9tesseract19TessBoxTextRendererC1EPKc(void);

/* Symbol: _Z14MakeDimUniformtP9PROTOTYPEP10STATISTICS */
/* Demangled: MakeDimUniform(unsigned short, PROTOTYPE*, STATISTICS*) */
int _Z14MakeDimUniformtP9PROTOTYPEP10STATISTICS(void);

/* Symbol: _ZN9tesseract16ColPartitionGrid11SetTabStopsEPNS_7TabFindE */
/* Demangled: tesseract::ColPartitionGrid::SetTabStops(tesseract::TabFind*) */
int _ZN9tesseract16ColPartitionGrid11SetTabStopsEPNS_7TabFindE(void);

/* Symbol: _ZN9tesseract11ParamsModel9ParseLineEPcPS1_Pf */
/* Demangled: tesseract::ParamsModel::ParseLine(char*, char**, float*) */
int _ZN9tesseract11ParamsModel9ParseLineEPcPS1_Pf(void);

/* Symbol: TessBaseAPIRecognize */
/* Demangled: TessBaseAPIRecognize */
int TessBaseAPIRecognize(void);

/* Symbol: _Z17total_containmentP5TBLOBS0_ */
/* Demangled: total_containment(TBLOB*, TBLOB*) */
int _Z17total_containmentP5TBLOBS0_(void);

/* Symbol: _ZN4LLSQ6removeEdd */
/* Demangled: LLSQ::remove(double, double) */
int _ZN4LLSQ6removeEdd(void);

/* Symbol: _ZN13GenericVectorIS_IiEE5clearEv */
/* Demangled: GenericVector<GenericVector<int> >::clear() */
int _ZN13GenericVectorIS_IiEE5clearEv(void);

/* Symbol: _ZNK4WERD12bounding_boxEv */
/* Demangled: WERD::bounding_box() const */
int _ZNK4WERD12bounding_boxEv(void);

/* Symbol: _ZN9tesseract7TextordC1EPNS_8CCStructE */
/* Demangled: tesseract::Textord::Textord(tesseract::CCStruct*) */
int _ZN9tesseract7TextordC1EPNS_8CCStructE(void);

/* Symbol: _Z14ROW_RES_zapperP10ELIST_LINK */
/* Demangled: ROW_RES_zapper(ELIST_LINK*) */
int _Z14ROW_RES_zapperP10ELIST_LINK(void);

/* Symbol: _ZN13GenericVectorIP4SEAME5clearEv */
/* Demangled: GenericVector<SEAM*>::clear() */
int _ZN13GenericVectorIP4SEAME5clearEv(void);

/* Symbol: _ZN9tesseract6BBGridINS_12ColPartitionENS_18ColPartition_CLISTENS_17ColPartition_C_ITEE11HandleClickEii */
/* Demangled: tesseract::BBGrid<tesseract::ColPartition, tesseract::ColPartition_CLIST, tesseract::ColPartition_C_IT>::HandleClick(int, int) */
int _ZN9tesseract6BBGridINS_12ColPartitionENS_18ColPartition_CLISTENS_17ColPartition_C_ITEE11HandleClickEii(void);

/* Symbol: _ZN9tesseract9Tesseract22bigram_correction_passEP8PAGE_RES */
/* Demangled: tesseract::Tesseract::bigram_correction_pass(PAGE_RES*) */
int _ZN9tesseract9Tesseract22bigram_correction_passEP8PAGE_RES(void);

/* Symbol: _ZN9tesseract12SearchColumn7AddNodeEPNS_11LangModEdgeEiPNS_10SearchNodeEPNS_15CubeRecoContextE */
/* Demangled: tesseract::SearchColumn::AddNode(tesseract::LangModEdge*, int, tesseract::SearchNode*, tesseract::CubeRecoContext*) */
int _ZN9tesseract12SearchColumn7AddNodeEPNS_11LangModEdgeEiPNS_10SearchNodeEPNS_15CubeRecoContextE(void);

/* Symbol: TessResultIteratorDelete */
/* Demangled: TessResultIteratorDelete */
int TessResultIteratorDelete(void);

/* Symbol: _ZN9tesseract11AlignedBlob17IncrementDebugPixEv */
/* Demangled: tesseract::AlignedBlob::IncrementDebugPix() */
int _ZN9tesseract11AlignedBlob17IncrementDebugPixEv(void);

/* Symbol: _ZN9tesseract11StrokeWidth18CorrectForRotationERK6FCOORDPNS_16ColPartitionGridE */
/* Demangled: tesseract::StrokeWidth::CorrectForRotation(FCOORD const&, tesseract::ColPartitionGrid*) */
int _ZN9tesseract11StrokeWidth18CorrectForRotationERK6FCOORDPNS_16ColPartitionGridE(void);

/* Symbol: _ZN9tesseract7Wordrec14point_priorityEP6EDGEPT */
/* Demangled: tesseract::Wordrec::point_priority(EDGEPT*) */
int _ZN9tesseract7Wordrec14point_priorityEP6EDGEPT(void);

/* Symbol: _ZN8TESSLINE18ComputeBoundingBoxEv */
/* Demangled: TESSLINE::ComputeBoundingBox() */
int _ZN8TESSLINE18ComputeBoundingBoxEv(void);

/* Symbol: _ZNK4LLSQ10vector_fitEv */
/* Demangled: LLSQ::vector_fit() const */
int _ZNK4LLSQ10vector_fitEv(void);

/* Symbol: _Z18MakeSphericalProtoP9CLUSTERERP6sampleP10STATISTICSP7BUCKETS */
/* Demangled: MakeSphericalProto(CLUSTERER*, sample*, STATISTICS*, BUCKETS*) */
int _Z18MakeSphericalProtoP9CLUSTERERP6sampleP10STATISTICSP7BUCKETS(void);

/* Symbol: _ZN9tesseract17CubeLineSegmenter19kLineSepMorphMinHgtE */
/* Demangled: tesseract::CubeLineSegmenter::kLineSepMorphMinHgt */
extern void* _ZN9tesseract17CubeLineSegmenter19kLineSepMorphMinHgtE;

/* Symbol: _ZN9tesseract6NeuronD2Ev */
/* Demangled: tesseract::Neuron::~Neuron() */
int _ZN9tesseract6NeuronD2Ev(void);

/* Symbol: _ZN9tesseract7TabFind18DontFindTabVectorsEP13BLOBNBOX_LISTP8TO_BLOCKP6FCOORDS6_ */
/* Demangled: tesseract::TabFind::DontFindTabVectors(BLOBNBOX_LIST*, TO_BLOCK*, FCOORD*, FCOORD*) */
int _ZN9tesseract7TabFind18DontFindTabVectorsEP13BLOBNBOX_LISTP8TO_BLOCKP6FCOORDS6_(void);

/* Symbol: _ZN9tesseract6BBGridINS_10ColSegmentENS_16ColSegment_CLISTENS_15ColSegment_C_ITEE10RemoveBBoxEPS1_ */
/* Demangled: tesseract::BBGrid<tesseract::ColSegment, tesseract::ColSegment_CLIST, tesseract::ColSegment_C_IT>::RemoveBBox(tesseract::ColSegment*) */
int _ZN9tesseract6BBGridINS_10ColSegmentENS_16ColSegment_CLISTENS_15ColSegment_C_ITEE10RemoveBBoxEPS1_(void);

/* Symbol: _Z13UniformBucketP10PARAM_DESCfff */
/* Demangled: UniformBucket(PARAM_DESC*, float, float, float) */
int _Z13UniformBucketP10PARAM_DESCfff(void);

/* Symbol: _Z14ListEntryMatchPvS_ */
/* Demangled: ListEntryMatch(void*, void*) */
int _Z14ListEntryMatchPvS_(void);

/* Symbol: _ZN9tesseract10CachedFileD2Ev */
/* Demangled: tesseract::CachedFile::~CachedFile() */
int _ZN9tesseract10CachedFileD2Ev(void);

/* Symbol: _ZN3REJ18setrej_bad_qualityEv */
/* Demangled: REJ::setrej_bad_quality() */
int _ZN3REJ18setrej_bad_qualityEv(void);

/* Symbol: _ZN9tesseract17TrainingSampleSet15ClusterDistanceEiiiiRKNS_13IntFeatureMapE */
/* Demangled: tesseract::TrainingSampleSet::ClusterDistance(int, int, int, int, tesseract::IntFeatureMap const&) */
int _ZN9tesseract17TrainingSampleSet15ClusterDistanceEiiiiRKNS_13IntFeatureMapE(void);

/* Symbol: _ZN9tesseract7TabFind14SetupTabSearchEiiPiS1_ */
/* Demangled: tesseract::TabFind::SetupTabSearch(int, int, int*, int*) */
int _ZN9tesseract7TabFind14SetupTabSearchEiiPiS1_(void);

/* Symbol: words_initial_lower */
/* Demangled: words_initial_lower */
extern void* words_initial_lower;

/* Symbol: TessBaseAPIInitTruthCallback */
/* Demangled: TessBaseAPIInitTruthCallback */
int TessBaseAPIInitTruthCallback(void);

/* Symbol: _ZN9tesseract16TessHOcrRenderer15AddImageHandlerEPNS_11TessBaseAPIE */
/* Demangled: tesseract::TessHOcrRenderer::AddImageHandler(tesseract::TessBaseAPI*) */
int _ZN9tesseract16TessHOcrRenderer15AddImageHandlerEPNS_11TessBaseAPIE(void);

/* Symbol: _ZN8BLOBNBOX15CleanNeighboursEv */
/* Demangled: BLOBNBOX::CleanNeighbours() */
int _ZN8BLOBNBOX15CleanNeighboursEv(void);

/* Symbol: _ZN13GenericVectorIN9tesseract11ObjectCacheINS0_4DawgEE14ReferenceCountEE7reserveEi */
/* Demangled: GenericVector<tesseract::ObjectCache<tesseract::Dawg>::ReferenceCount>::reserve(int) */
int _ZN13GenericVectorIN9tesseract11ObjectCacheINS0_4DawgEE14ReferenceCountEE7reserveEi(void);

/* Symbol: _Z16tprintf_internalPKcz */
/* Demangled: tprintf_internal(char const*, ...) */
int _Z16tprintf_internalPKcz(void);

/* Symbol: _ZNK9tesseract14ResultIterator22CalculateTextlineOrderEbRKNS_17LTRResultIteratorEP17GenericVectorEqEqIiE */
/* Demangled: tesseract::ResultIterator::CalculateTextlineOrder(bool, tesseract::LTRResultIterator const&, GenericVectorEqEq<int>*) const */
int _ZNK9tesseract14ResultIterator22CalculateTextlineOrderEbRKNS_17LTRResultIteratorEP17GenericVectorEqEqIiE(void);

/* Symbol: _Z22free_adapted_templatesP22ADAPT_TEMPLATES_STRUCT */
/* Demangled: free_adapted_templates(ADAPT_TEMPLATES_STRUCT*) */
int _Z22free_adapted_templatesP22ADAPT_TEMPLATES_STRUCT(void);

/* Symbol: _ZN13GenericVectorIN9tesseract9ShapeDistEE15double_the_sizeEv */
/* Demangled: GenericVector<tesseract::ShapeDist>::double_the_size() */
int _ZN13GenericVectorIN9tesseract9ShapeDistEE15double_the_sizeEv(void);

/* Symbol: _ZNK9tesseract8GridBase14ClipGridCoordsEPiS1_ */
/* Demangled: tesseract::GridBase::ClipGridCoords(int*, int*) const */
int _ZNK9tesseract8GridBase14ClipGridCoordsEPiS1_(void);

/* Symbol: textord_blocksall_prop */
/* Demangled: textord_blocksall_prop */
extern void* textord_blocksall_prop;

/* Symbol: _Z14WriteProtoListP7__sFILEtP10PARAM_DESCP8list_rechh */
/* Demangled: WriteProtoList(__sFILE*, unsigned short, PARAM_DESC*, list_rec*, unsigned char, unsigned char) */
int _Z14WriteProtoListP7__sFILEtP10PARAM_DESCP8list_rechh(void);

/* Symbol: TessPageIteratorParagraphInfo */
/* Demangled: TessPageIteratorParagraphInfo */
int TessPageIteratorParagraphInfo(void);

/* Symbol: _ZN8WERD_RES18ConsumeWordResultsEPS_ */
/* Demangled: WERD_RES::ConsumeWordResults(WERD_RES*) */
int _ZN8WERD_RES18ConsumeWordResultsEPS_(void);

/* Symbol: _ZNKSt3__112basic_stringIiNS_11char_traitsIiEENS_9allocatorIiEEE7compareEPKi */
/* Demangled: std::__1::basic_string<int, std::__1::char_traits<int>, std::__1::allocator<int> >::compare(int const*) const */
int _ZNKSt3__112basic_stringIiNS_11char_traitsIiEENS_9allocatorIiEEE7compareEPKi(void);

/* Symbol: _ZN13GenericVectorIP4SEAME9push_backES1_ */
/* Demangled: GenericVector<SEAM*>::push_back(SEAM*) */
int _ZN13GenericVectorIP4SEAME9push_backES1_(void);

/* Symbol: _ZN9tesseract21ConvNetCharClassifierD1Ev */
/* Demangled: tesseract::ConvNetCharClassifier::~ConvNetCharClassifier() */
int _ZN9tesseract21ConvNetCharClassifierD1Ev(void);

/* Symbol: _ZN10OL_BUCKETS16extract_childrenEP9C_OUTLINEP12C_OUTLINE_IT */
/* Demangled: OL_BUCKETS::extract_children(C_OUTLINE*, C_OUTLINE_IT*) */
int _ZN10OL_BUCKETS16extract_childrenEP9C_OUTLINEP12C_OUTLINE_IT(void);

/* Symbol: _ZN9tesseract7Textord20clean_noise_from_rowEP3ROW */
/* Demangled: tesseract::Textord::clean_noise_from_row(ROW*) */
int _ZN9tesseract7Textord20clean_noise_from_rowEP3ROW(void);

/* Symbol: Java_com_googlecode_tesseract_android_PageIterator_nativeBoundingBox */
/* Demangled: Java_com_googlecode_tesseract_android_PageIterator_nativeBoundingBox */
int Java_com_googlecode_tesseract_android_PageIterator_nativeBoundingBox(void);

/* Symbol: _ZNK14ParagraphModel14ValidFirstLineEiiii */
/* Demangled: ParagraphModel::ValidFirstLine(int, int, int, int) const */
int _ZNK14ParagraphModel14ValidFirstLineEiiii(void);

/* Symbol: _ZN9tesseract18EquationDetectBaseD1Ev */
/* Demangled: tesseract::EquationDetectBase::~EquationDetectBase() */
int _ZN9tesseract18EquationDetectBaseD1Ev(void);

/* Symbol: _ZN9tesseract9BitVectorC1ERKS0_ */
/* Demangled: tesseract::BitVector::BitVector(tesseract::BitVector const&) */
int _ZN9tesseract9BitVectorC1ERKS0_(void);

/* Symbol: _ZN9tesseract14TessClassifier21UnicharClassifySampleERKNS_14TrainingSampleEP3PixiiP13GenericVectorINS_13UnicharRatingEE */
/* Demangled: tesseract::TessClassifier::UnicharClassifySample(tesseract::TrainingSample const&, Pix*, int, int, GenericVector<tesseract::UnicharRating>*) */
int _ZN9tesseract14TessClassifier21UnicharClassifySampleERKNS_14TrainingSampleEP3PixiiP13GenericVectorINS_13UnicharRatingEE(void);

/* Symbol: _ZNK9tesseract17LTRResultIterator10ConfidenceENS_17PageIteratorLevelE */
/* Demangled: tesseract::LTRResultIterator::Confidence(tesseract::PageIteratorLevel) const */
int _ZNK9tesseract17LTRResultIterator10ConfidenceENS_17PageIteratorLevelE(void);

/* Symbol: _ZN13GenericVectorIfE5clearEv */
/* Demangled: GenericVector<float>::clear() */
int _ZN13GenericVectorIfE5clearEv(void);

/* Symbol: _ZN9tesseract10GridSearchI8BLOBNBOX14BLOBNBOX_CLIST13BLOBNBOX_C_ITE14NextRectSearchEv */
/* Demangled: tesseract::GridSearch<BLOBNBOX, BLOBNBOX_CLIST, BLOBNBOX_C_IT>::NextRectSearch() */
int _ZN9tesseract10GridSearchI8BLOBNBOX14BLOBNBOX_CLIST13BLOBNBOX_C_ITE14NextRectSearchEv(void);

/* Symbol: _ZN9tesseract7Wordrec15grade_sharpnessEP5SPLIT */
/* Demangled: tesseract::Wordrec::grade_sharpness(SPLIT*) */
int _ZN9tesseract7Wordrec15grade_sharpnessEP5SPLIT(void);

/* Symbol: _ZN9tesseract18TessResultRenderer20BeginDocumentHandlerEv */
/* Demangled: tesseract::TessResultRenderer::BeginDocumentHandler() */
int _ZN9tesseract18TessResultRenderer20BeginDocumentHandlerEv(void);

/* Symbol: _ZN9tesseract17CubeLineSegmenter7kMinHgtE */
/* Demangled: tesseract::CubeLineSegmenter::kMinHgt */
extern void* _ZN9tesseract17CubeLineSegmenter7kMinHgtE;

/* Symbol: textord_min_blob_height_fraction */
/* Demangled: textord_min_blob_height_fraction */
extern void* textord_min_blob_height_fraction;

/* Symbol: _Z14ReadFeatureSetP7__sFILEPK19FEATURE_DESC_STRUCT */
/* Demangled: ReadFeatureSet(__sFILE*, FEATURE_DESC_STRUCT const*) */
int _Z14ReadFeatureSetP7__sFILEPK19FEATURE_DESC_STRUCT(void);

/* Symbol: _ZN9tesseract13MasterTrainer13GetFontInfoIdEPKc */
/* Demangled: tesseract::MasterTrainer::GetFontInfoId(char const*) */
int _ZN9tesseract13MasterTrainer13GetFontInfoIdEPKc(void);

/* Symbol: textord_show_final_blobs */
/* Demangled: textord_show_final_blobs */
extern void* textord_show_final_blobs;

/* Symbol: _ZN9tesseract13DocumentCacheD2Ev */
/* Demangled: tesseract::DocumentCache::~DocumentCache() */
int _ZN9tesseract13DocumentCacheD2Ev(void);

/* Symbol: _ZN9tesseract8Classify16SetupBLCNDenormsERK5TBLOBbP6DENORMS5_P20INT_FX_RESULT_STRUCT */
/* Demangled: tesseract::Classify::SetupBLCNDenorms(TBLOB const&, bool, DENORM*, DENORM*, INT_FX_RESULT_STRUCT*) */
int _ZN9tesseract8Classify16SetupBLCNDenormsERK5TBLOBbP6DENORMS5_P20INT_FX_RESULT_STRUCT(void);

/* Symbol: _Z21AddProtoToClassPrunerP12PROTO_STRUCTiP20INT_TEMPLATES_STRUCT */
/* Demangled: AddProtoToClassPruner(PROTO_STRUCT*, int, INT_TEMPLATES_STRUCT*) */
int _Z21AddProtoToClassPrunerP12PROTO_STRUCTiP20INT_TEMPLATES_STRUCT(void);

/* Symbol: _ZNK9tesseract14TrainingSample11RenderToPixEPK10UNICHARSET */
/* Demangled: tesseract::TrainingSample::RenderToPix(UNICHARSET const*) const */
int _ZNK9tesseract14TrainingSample11RenderToPixEPK10UNICHARSET(void);

/* Symbol: _ZN9tesseract11WordAltListC1Ei */
/* Demangled: tesseract::WordAltList::WordAltList(int) */
int _ZN9tesseract11WordAltListC1Ei(void);

/* Symbol: _Z14make_real_wordP11BLOBNBOX_ITihh */
/* Demangled: make_real_word(BLOBNBOX_IT*, int, unsigned char, unsigned char) */
int _Z14make_real_wordP11BLOBNBOX_ITihh(void);

/* Symbol: _ZNK10UNICHARMAP13unichar_to_idEPKc */
/* Demangled: UNICHARMAP::unichar_to_id(char const*) const */
int _ZNK10UNICHARMAP13unichar_to_idEPKc(void);

/* Symbol: _ZN9tesseract8Classify18ComputeIntFeaturesEP18FEATURE_SET_STRUCTP18INT_FEATURE_STRUCT */
/* Demangled: tesseract::Classify::ComputeIntFeatures(FEATURE_SET_STRUCT*, INT_FEATURE_STRUCT*) */
int _ZN9tesseract8Classify18ComputeIntFeaturesEP18FEATURE_SET_STRUCTP18INT_FEATURE_STRUCT(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract4DawgEE15double_the_sizeEv */
/* Demangled: GenericVector<tesseract::Dawg*>::double_the_size() */
int _ZN13GenericVectorIPN9tesseract4DawgEE15double_the_sizeEv(void);

/* Symbol: _ZN9tesseract4Trie20kUpperPatternUnicodeE */
/* Demangled: tesseract::Trie::kUpperPatternUnicode */
extern void* _ZN9tesseract4Trie20kUpperPatternUnicodeE;

/* Symbol: _ZN9tesseract30textord_tabfind_show_color_fitE */
/* Demangled: tesseract::textord_tabfind_show_color_fit */
extern void* _ZN9tesseract30textord_tabfind_show_color_fitE;

/* Symbol: _ZN9tesseract11TessBaseAPI13GetInputImageEv */
/* Demangled: tesseract::TessBaseAPI::GetInputImage() */
int _ZN9tesseract11TessBaseAPI13GetInputImageEv(void);

/* Symbol: _ZN10POLY_BLOCKC1ERK4TBOX13PolyBlockType */
/* Demangled: POLY_BLOCK::POLY_BLOCK(TBOX const&, PolyBlockType) */
int _ZN10POLY_BLOCKC1ERK4TBOX13PolyBlockType(void);

/* Symbol: _ZN11WERD_CHOICEC2EPKcRK10UNICHARSET */
/* Demangled: WERD_CHOICE::WERD_CHOICE(char const*, UNICHARSET const&) */
int _ZN11WERD_CHOICEC2EPKcRK10UNICHARSET(void);

/* Symbol: _Z16ClassProtoLengthP12CLASS_STRUCT */
/* Demangled: ClassProtoLength(CLASS_STRUCT*) */
int _Z16ClassProtoLengthP12CLASS_STRUCT(void);

/* Symbol: _ZN9tesseract6BBGridINS_12ColPartitionENS_18ColPartition_CLISTENS_17ColPartition_C_ITEE4InitEiRK6ICOORDS7_ */
/* Demangled: tesseract::BBGrid<tesseract::ColPartition, tesseract::ColPartition_CLIST, tesseract::ColPartition_C_IT>::Init(int, ICOORD const&, ICOORD const&) */
int _ZN9tesseract6BBGridINS_12ColPartitionENS_18ColPartition_CLISTENS_17ColPartition_C_ITEE4InitEiRK6ICOORDS7_(void);

/* Symbol: _ZNK13GenericVectorIN9tesseract24ParamsTrainingHypothesisEE4backEv */
/* Demangled: GenericVector<tesseract::ParamsTrainingHypothesis>::back() const */
int _ZNK13GenericVectorIN9tesseract24ParamsTrainingHypothesisEE4backEv(void);

/* Symbol: _ZN9tesseract14EquationDetect21InsertPartAfterAbsorbEPNS_12ColPartitionE */
/* Demangled: tesseract::EquationDetect::InsertPartAfterAbsorb(tesseract::ColPartition*) */
int _ZN9tesseract14EquationDetect21InsertPartAfterAbsorbEPNS_12ColPartitionE(void);

/* Symbol: _ZN13GenericVectorIPKN9tesseract14TrainingSampleEE9push_backES3_ */
/* Demangled: GenericVector<tesseract::TrainingSample const*>::push_back(tesseract::TrainingSample const*) */
int _ZN13GenericVectorIPKN9tesseract14TrainingSampleEE9push_backES3_(void);

/* Symbol: _ZN9tesseract21ConvNetCharClassifier8CharCostEPNS_8CharSampE */
/* Demangled: tesseract::ConvNetCharClassifier::CharCost(tesseract::CharSamp*) */
int _ZN9tesseract21ConvNetCharClassifier8CharCostEPNS_8CharSampE(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract4DawgEE20delete_data_pointersEv */
/* Demangled: GenericVector<tesseract::Dawg*>::delete_data_pointers() */
int _ZN13GenericVectorIPN9tesseract4DawgEE20delete_data_pointersEv(void);

/* Symbol: _ZN9tesseract9Tesseract19cube_recognize_wordEP5BLOCKP8WERD_RES */
/* Demangled: tesseract::Tesseract::cube_recognize_word(BLOCK*, WERD_RES*) */
int _ZN9tesseract9Tesseract19cube_recognize_wordEP5BLOCKP8WERD_RES(void);

/* Symbol: _ZN9tesseract4Bmp820LoadFromCharDumpFileEP7__sFILE */
/* Demangled: tesseract::Bmp8::LoadFromCharDumpFile(__sFILE*) */
int _ZN9tesseract4Bmp820LoadFromCharDumpFileEP7__sFILE(void);

/* Symbol: _ZN9tesseract12ColumnFinder21PrintColumnCandidatesEPKc */
/* Demangled: tesseract::ColumnFinder::PrintColumnCandidates(char const*) */
int _ZN9tesseract12ColumnFinder21PrintColumnCandidatesEPKc(void);

/* Symbol: _ZN9tesseract7TabFind12AdjacentBlobEPK8BLOBNBOXbbdiii */
/* Demangled: tesseract::TabFind::AdjacentBlob(BLOBNBOX const*, bool, bool, double, int, int, int) */
int _ZN9tesseract7TabFind12AdjacentBlobEPK8BLOBNBOXbbdiii(void);

/* Symbol: _ZN12BlamerBundle19IncorrectReasonNameE21IncorrectResultReason */
/* Demangled: BlamerBundle::IncorrectReasonName(IncorrectResultReason) */
int _ZN12BlamerBundle19IncorrectReasonNameE21IncorrectResultReason(void);

/* Symbol: _ZN13GenericVectorI17GenericVectorEqEqIPK14ParagraphModelEE7reserveEi */
/* Demangled: GenericVector<GenericVectorEqEq<ParagraphModel const*> >::reserve(int) */
int _ZN13GenericVectorI17GenericVectorEqEqIPK14ParagraphModelEE7reserveEi(void);

/* Symbol: _ZN9tesseract9Tesseract13end_tesseractEv */
/* Demangled: tesseract::Tesseract::end_tesseract() */
int _ZN9tesseract9Tesseract13end_tesseractEv(void);

/* Symbol: _Z12NormalBucketP10PARAM_DESCfff */
/* Demangled: NormalBucket(PARAM_DESC*, float, float, float) */
int _Z12NormalBucketP10PARAM_DESCfff(void);

/* Symbol: _ZN9tesseract4Bmp816FromCharDumpFileEPNS_10CachedFileE */
/* Demangled: tesseract::Bmp8::FromCharDumpFile(tesseract::CachedFile*) */
int _ZN9tesseract4Bmp816FromCharDumpFileEPNS_10CachedFileE(void);

/* Symbol: _ZN9tesseract7CharSetC1Ev */
/* Demangled: tesseract::CharSet::CharSet() */
int _ZN9tesseract7CharSetC1Ev(void);

/* Symbol: _ZN9tesseract11TableFinder19InsertTextPartitionEPNS_12ColPartitionE */
/* Demangled: tesseract::TableFinder::InsertTextPartition(tesseract::ColPartition*) */
int _ZN9tesseract11TableFinder19InsertTextPartitionEPNS_12ColPartitionE(void);

/* Symbol: _ZN9tesseract9Tesseract17run_cube_combinerEP8PAGE_RES */
/* Demangled: tesseract::Tesseract::run_cube_combiner(PAGE_RES*) */
int _ZN9tesseract9Tesseract17run_cube_combinerEP8PAGE_RES(void);

/* Symbol: _ZN3ROW4moveE6ICOORD */
/* Demangled: ROW::move(ICOORD) */
int _ZN3ROW4moveE6ICOORD(void);

/* Symbol: _ZNK5STATS10max_bucketEv */
/* Demangled: STATS::max_bucket() const */
int _ZNK5STATS10max_bucketEv(void);

/* Symbol: _ZN9tesseract10FeatureBmpC1EPNS_12TuningParamsE */
/* Demangled: tesseract::FeatureBmp::FeatureBmp(tesseract::TuningParams*) */
int _ZN9tesseract10FeatureBmpC1EPNS_12TuningParamsE(void);

/* Symbol: _ZN9tesseract9NeuralNetD2Ev */
/* Demangled: tesseract::NeuralNet::~NeuralNet() */
int _ZN9tesseract9NeuralNetD2Ev(void);

/* Symbol: _ZN14C_OUTLINE_FRAGC2E6ICOORDS0_P9C_OUTLINEss */
/* Demangled: C_OUTLINE_FRAG::C_OUTLINE_FRAG(ICOORD, ICOORD, C_OUTLINE*, short, short) */
int _ZN14C_OUTLINE_FRAGC2E6ICOORDS0_P9C_OUTLINEss(void);

/* Symbol: _ZN9tesseract13LanguageModelD1Ev */
/* Demangled: tesseract::LanguageModel::~LanguageModel() */
int _ZN9tesseract13LanguageModelD1Ev(void);

/* Symbol: _ZN9tesseract15IntFeatureSpaceC1Ev */
/* Demangled: tesseract::IntFeatureSpace::IntFeatureSpace() */
int _ZN9tesseract15IntFeatureSpaceC1Ev(void);

/* Symbol: _ZNK9tesseract17TrainingSampleSet13FontClassInfo9SerializeEP7__sFILE */
/* Demangled: tesseract::TrainingSampleSet::FontClassInfo::Serialize(__sFILE*) const */
int _ZNK9tesseract17TrainingSampleSet13FontClassInfo9SerializeEP7__sFILE(void);

/* Symbol: _ZN9tesseract10CubeObject4InitEv */
/* Demangled: tesseract::CubeObject::Init() */
int _ZN9tesseract10CubeObject4InitEv(void);

/* Symbol: _ZNK9tesseract12ColPartition13SpacingsEqualERKS0_i */
/* Demangled: tesseract::ColPartition::SpacingsEqual(tesseract::ColPartition const&, int) const */
int _ZNK9tesseract12ColPartition13SpacingsEqualERKS0_i(void);

/* Symbol: _ZN11WERD_CHOICEaSERKS_ */
/* Demangled: WERD_CHOICE::operator=(WERD_CHOICE const&) */
int _ZN11WERD_CHOICEaSERKS_(void);

/* Symbol: _ZNK9tesseract14EquationDetect24CheckSeedNeighborDensityEPKNS_12ColPartitionE */
/* Demangled: tesseract::EquationDetect::CheckSeedNeighborDensity(tesseract::ColPartition const*) const */
int _ZNK9tesseract14EquationDetect24CheckSeedNeighborDensityEPKNS_12ColPartitionE(void);

/* Symbol: _ZN6DENORMC1ERKS_ */
/* Demangled: DENORM::DENORM(DENORM const&) */
int _ZN6DENORMC1ERKS_(void);

/* Symbol: _Z11AddIntClassP20INT_TEMPLATES_STRUCTiP16INT_CLASS_STRUCT */
/* Demangled: AddIntClass(INT_TEMPLATES_STRUCT*, int, INT_CLASS_STRUCT*) */
int _Z11AddIntClassP20INT_TEMPLATES_STRUCTiP16INT_CLASS_STRUCT(void);

/* Symbol: _ZN9tesseract15StructuredTable24FindWhitespacedStructureEv */
/* Demangled: tesseract::StructuredTable::FindWhitespacedStructure() */
int _ZN9tesseract15StructuredTable24FindWhitespacedStructureEv(void);

/* Symbol: _ZN9tesseract9Tesseract14word_adaptableEP8WERD_RESt */
/* Demangled: tesseract::Tesseract::word_adaptable(WERD_RES*, unsigned short) */
int _ZN9tesseract9Tesseract14word_adaptableEP8WERD_RESt(void);

/* Symbol: _ZN9tesseract28CanonicalizeDetectionResultsEP13GenericVectorIP4PARAEP9PARA_LIST */
/* Demangled: tesseract::CanonicalizeDetectionResults(GenericVector<PARA*>*, PARA_LIST*) */
int _ZN9tesseract28CanonicalizeDetectionResultsEP13GenericVectorIP4PARAEP9PARA_LIST(void);

/* Symbol: _ZN5BLOCK8compressEv */
/* Demangled: BLOCK::compress() */
int _ZN5BLOCK8compressEv(void);

/* Symbol: _ZN9tesseract7ConComp15CreateHistogramEi */
/* Demangled: tesseract::ConComp::CreateHistogram(int) */
int _ZN9tesseract7ConComp15CreateHistogramEi(void);

/* Symbol: _ZN9tesseract6BBGridINS_11WordWithBoxENS_17WordWithBox_CLISTENS_16WordWithBox_C_ITEE11HandleClickEii */
/* Demangled: tesseract::BBGrid<tesseract::WordWithBox, tesseract::WordWithBox_CLIST, tesseract::WordWithBox_C_IT>::HandleClick(int, int) */
int _ZN9tesseract6BBGridINS_11WordWithBoxENS_17WordWithBox_CLISTENS_16WordWithBox_C_ITEE11HandleClickEii(void);

/* Symbol: _ZN9tesseract15TessPDFRenderer18EndDocumentHandlerEv */
/* Demangled: tesseract::TessPDFRenderer::EndDocumentHandler() */
int _ZN9tesseract15TessPDFRenderer18EndDocumentHandlerEv(void);

/* Symbol: _ZN13GenericVectorIbE5clearEv */
/* Demangled: GenericVector<bool>::clear() */
int _ZN13GenericVectorIbE5clearEv(void);

/* Symbol: _ZN4TBOXC1E6ICOORDS0_ */
/* Demangled: TBOX::TBOX(ICOORD, ICOORD) */
int _ZN4TBOXC1E6ICOORDS0_(void);

/* Symbol: _Z11FreeFeatureP14FEATURE_STRUCT */
/* Demangled: FreeFeature(FEATURE_STRUCT*) */
int _Z11FreeFeatureP14FEATURE_STRUCT(void);

/* Symbol: _Z13MergeClusterssP10PARAM_DESCiiPfS1_S1_ */
/* Demangled: MergeClusters(short, PARAM_DESC*, int, int, float*, float*, float*) */
int _Z13MergeClusterssP10PARAM_DESCiiPfS1_S1_(void);

/* Symbol: _ZN11PAGE_RES_IT10start_pageEb */
/* Demangled: PAGE_RES_IT::start_page(bool) */
int _ZN11PAGE_RES_IT10start_pageEb(void);

/* Symbol: _ZN9tesseract17LTRResultIteratorD2Ev */
/* Demangled: tesseract::LTRResultIterator::~LTRResultIterator() */
int _ZN9tesseract17LTRResultIteratorD2Ev(void);

/* Symbol: _ZN9tesseract9Tesseract25ReSegmentByClassificationEP8PAGE_RES */
/* Demangled: tesseract::Tesseract::ReSegmentByClassification(PAGE_RES*) */
int _ZN9tesseract9Tesseract25ReSegmentByClassificationEP8PAGE_RES(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract5ShapeEE20delete_data_pointersEv */
/* Demangled: GenericVector<tesseract::Shape*>::delete_data_pointers() */
int _ZN13GenericVectorIPN9tesseract5ShapeEE20delete_data_pointersEv(void);

/* Symbol: _ZN9tesseract10CubeObjectC2EPNS_15CubeRecoContextEP3Pixiiii */
/* Demangled: tesseract::CubeObject::CubeObject(tesseract::CubeRecoContext*, Pix*, int, int, int, int) */
int _ZN9tesseract10CubeObjectC2EPNS_15CubeRecoContextEP3Pixiiii(void);

/* Symbol: _Z14print_pitch_sdP6TO_ROWP5STATSssff */
/* Demangled: print_pitch_sd(TO_ROW*, STATS*, short, short, float, float) */
int _Z14print_pitch_sdP6TO_ROWP5STATSssff(void);

/* Symbol: _Z18print_ratings_listPKcP16BLOB_CHOICE_LISTRK10UNICHARSET */
/* Demangled: print_ratings_list(char const*, BLOB_CHOICE_LIST*, UNICHARSET const&) */
int _Z18print_ratings_listPKcP16BLOB_CHOICE_LISTRK10UNICHARSET(void);

/* Symbol: _ZNK8TESSLINE18MinMaxCrossProductE6TPOINTPiS1_ */
/* Demangled: TESSLINE::MinMaxCrossProduct(TPOINT, int*, int*) const */
int _ZNK8TESSLINE18MinMaxCrossProductE6TPOINTPiS1_(void);

/* Symbol: _ZN9tesseract8Classify25PrintAdaptiveMatchResultsERK13ADAPT_RESULTS */
/* Demangled: tesseract::Classify::PrintAdaptiveMatchResults(ADAPT_RESULTS const&) */
int _ZN9tesseract8Classify25PrintAdaptiveMatchResultsERK13ADAPT_RESULTS(void);

/* Symbol: _ZNK9tesseract17TrainingSampleSet25DisplaySamplesWithFeatureEiRKNS_5ShapeERKNS_15IntFeatureSpaceEN10ScrollView5ColorEPS7_ */
/* Demangled: tesseract::TrainingSampleSet::DisplaySamplesWithFeature(int, tesseract::Shape const&, tesseract::IntFeatureSpace const&, ScrollView::Color, ScrollView*) const */
int _ZNK9tesseract17TrainingSampleSet25DisplaySamplesWithFeatureEiRKNS_5ShapeERKNS_15IntFeatureSpaceEN10ScrollView5ColorEPS7_(void);

/* Symbol: _ZNSt3__114__split_bufferIP11WERD_CHOICERNS_9allocatorIS2_EEED2Ev */
/* Demangled: std::__1::__split_buffer<WERD_CHOICE*, std::__1::allocator<WERD_CHOICE*>&>::~__split_buffer() */
int _ZNSt3__114__split_bufferIP11WERD_CHOICERNS_9allocatorIS2_EEED2Ev(void);

/* Symbol: _ZN13GenericVectorIP16TRIE_NODE_RECORDE5clearEv */
/* Demangled: GenericVector<TRIE_NODE_RECORD*>::clear() */
int _ZN13GenericVectorIP16TRIE_NODE_RECORDE5clearEv(void);

/* Symbol: _ZNK13GenericVectorIiE4backEv */
/* Demangled: GenericVector<int>::back() const */
int _ZNK13GenericVectorIiE4backEv(void);

/* Symbol: _ZN9C_OUTLINEC2E6ICOORDP6DIR128s */
/* Demangled: C_OUTLINE::C_OUTLINE(ICOORD, DIR128*, short) */
int _ZN9C_OUTLINEC2E6ICOORDP6DIR128s(void);

/* Symbol: _ZN9tesseract18TextlineProjectionC1Ei */
/* Demangled: tesseract::TextlineProjection::TextlineProjection(int) */
int _ZN9tesseract18TextlineProjectionC1Ei(void);

/* Symbol: textord_show_fixed_words */
/* Demangled: textord_show_fixed_words */
extern void* textord_show_fixed_words;

/* Symbol: _ZN9tesseract21ParagraphModelSmearer5SmearEv */
/* Demangled: tesseract::ParagraphModelSmearer::Smear() */
int _ZN9tesseract21ParagraphModelSmearer5SmearEv(void);

/* Symbol: _ZN8BLOBNBOX6rotateE6FCOORD */
/* Demangled: BLOBNBOX::rotate(FCOORD) */
int _ZN8BLOBNBOX6rotateE6FCOORD(void);

/* Symbol: _ZN9tesseract9ImageData5BuildEPKciS2_S2_iS2_S2_ */
/* Demangled: tesseract::ImageData::Build(char const*, int, char const*, char const*, int, char const*, char const*) */
int _ZN9tesseract9ImageData5BuildEPKciS2_S2_iS2_S2_(void);

/* Symbol: _Z15word_comparatorPKvS0_ */
/* Demangled: word_comparator(void const*, void const*) */
int _Z15word_comparatorPKvS0_(void);

/* Symbol: _ZNK6STRINGixEi */
/* Demangled: STRING::operator[](int) const */
int _ZNK6STRINGixEi(void);

/* Symbol: TessMakeTBLOB */
/* Demangled: TessMakeTBLOB */
int TessMakeTBLOB(void);

/* Symbol: _ZN5ELIST4sortEPFiPKvS1_E */
/* Demangled: ELIST::sort(int (*)(void const*, void const*)) */
int _ZN5ELIST4sortEPFiPKvS1_E(void);

/* Symbol: _ZN9tesseract16TabVector_zapperEP11ELIST2_LINK */
/* Demangled: tesseract::TabVector_zapper(ELIST2_LINK*) */
int _ZN9tesseract16TabVector_zapperEP11ELIST2_LINK(void);

/* Symbol: _ZN9tesseract9Tesseract20first_alphanum_indexEPKcS2_ */
/* Demangled: tesseract::Tesseract::first_alphanum_index(char const*, char const*) */
int _ZN9tesseract9Tesseract20first_alphanum_indexEPKcS2_(void);

/* Symbol: classify_cp_angle_pad_medium */
/* Demangled: classify_cp_angle_pad_medium */
extern void* classify_cp_angle_pad_medium;

/* Symbol: _ZN9tesseract21ConvNetCharClassifierC1EPNS_7CharSetEPNS_12TuningParamsEPNS_11FeatureBaseE */
/* Demangled: tesseract::ConvNetCharClassifier::ConvNetCharClassifier(tesseract::CharSet*, tesseract::TuningParams*, tesseract::FeatureBase*) */
int _ZN9tesseract21ConvNetCharClassifierC1EPNS_7CharSetEPNS_12TuningParamsEPNS_11FeatureBaseE(void);

/* Symbol: _ZNK9tesseract12PageIterator8BaselineENS_17PageIteratorLevelEPiS2_S2_S2_ */
/* Demangled: tesseract::PageIterator::Baseline(tesseract::PageIteratorLevel, int*, int*, int*, int*) const */
int _ZNK9tesseract12PageIterator8BaselineENS_17PageIteratorLevelEPiS2_S2_S2_(void);

/* Symbol: _ZN11BLOB_CHOICEC1Eiffifff20BlobChoiceClassifier */
/* Demangled: BLOB_CHOICE::BLOB_CHOICE(int, float, float, int, float, float, float, BlobChoiceClassifier) */
int _ZN11BLOB_CHOICEC1Eiffifff20BlobChoiceClassifier(void);

/* Symbol: _ZTV31_TessFunctionResultCallback_0_2ILb0EbRKP14ParagraphModelS3_E */
/* Demangled: vtable for _TessFunctionResultCallback_0_2<false, bool, ParagraphModel* const&, ParagraphModel* const&> */
extern void* _ZTV31_TessFunctionResultCallback_0_2ILb0EbRKP14ParagraphModelS3_E;

/* Symbol: _ZN13GenericVectorIN9tesseract9NodeChildEE5clearEv */
/* Demangled: GenericVector<tesseract::NodeChild>::clear() */
int _ZN13GenericVectorIN9tesseract9NodeChildEE5clearEv(void);

/* Symbol: _ZN9tesseract4Dawg4initENS_8DawgTypeERK6STRING12PermuterTypeii */
/* Demangled: tesseract::Dawg::init(tesseract::DawgType, STRING const&, PermuterType, int, int) */
int _ZN9tesseract4Dawg4initENS_8DawgTypeERK6STRING12PermuterTypeii(void);

/* Symbol: _ZN9tesseract16DetectParagraphsEibPKNS_15MutableIteratorEP13GenericVectorIP14ParagraphModelE */
/* Demangled: tesseract::DetectParagraphs(int, bool, tesseract::MutableIterator const*, GenericVector<ParagraphModel*>*) */
int _ZN9tesseract16DetectParagraphsEibPKNS_15MutableIteratorEP13GenericVectorIP14ParagraphModelE(void);

/* Symbol: _ZNKSt3__112basic_stringIiNS_11char_traitsIiEENS_9allocatorIiEEE7compareEjjPKij */
/* Demangled: std::__1::basic_string<int, std::__1::char_traits<int>, std::__1::allocator<int> >::compare(unsigned int, unsigned int, int const*, unsigned int) const */
int _ZNKSt3__112basic_stringIiNS_11char_traitsIiEENS_9allocatorIiEEE7compareEjjPKij(void);

/* Symbol: _Z28vertical_coutline_projectionP9C_OUTLINEP5STATS */
/* Demangled: vertical_coutline_projection(C_OUTLINE*, STATS*) */
int _Z28vertical_coutline_projectionP9C_OUTLINEP5STATS(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int fn___aeabi_memclr4(void) __asm__("__aeabi_memclr4");

/* Symbol: _ZN9tesseract6CCUtilD0Ev */
/* Demangled: tesseract::CCUtil::~CCUtil() */
int _ZN9tesseract6CCUtilD0Ev(void);

/* Symbol: _ZNK9tesseract7AltList8BestCostEPi */
/* Demangled: tesseract::AltList::BestCost(int*) const */
int _ZNK9tesseract7AltList8BestCostEPi(void);

/* Symbol: _ZN13GenericVectorIN9tesseract12KDPtrPairIncIf4SEAMEEE15double_the_sizeEv */
/* Demangled: GenericVector<tesseract::KDPtrPairInc<float, SEAM> >::double_the_size() */
int _ZN13GenericVectorIN9tesseract12KDPtrPairIncIf4SEAMEEE15double_the_sizeEv(void);

/* Symbol: _ZNK9tesseract14EquationDetect18IsNearMathNeighborEiPKNS_12ColPartitionE */
/* Demangled: tesseract::EquationDetect::IsNearMathNeighbor(int, tesseract::ColPartition const*) const */
int _ZNK9tesseract14EquationDetect18IsNearMathNeighborEiPKNS_12ColPartitionE(void);

/* Symbol: _ZN12KDTreeSearchC1EP6KDTREEPfi */
/* Demangled: KDTreeSearch::KDTreeSearch(KDTREE*, float*, int) */
int _ZN12KDTreeSearchC1EP6KDTREEPfi(void);

/* Symbol: _Z4lastP8list_rec */
/* Demangled: last(list_rec*) */
int _Z4lastP8list_rec(void);

/* Symbol: _ZN9tesseract14SampleIterator17MapSampleFeaturesERKNS_13IntFeatureMapE */
/* Demangled: tesseract::SampleIterator::MapSampleFeatures(tesseract::IntFeatureMap const&) */
int _ZN9tesseract14SampleIterator17MapSampleFeaturesERKNS_13IntFeatureMapE(void);

/* Symbol: _Z18make_first_xheightP6TO_ROWP4TBOXiiiP7QSPLINEf */
/* Demangled: make_first_xheight(TO_ROW*, TBOX*, int, int, int, QSPLINE*, float) */
int _Z18make_first_xheightP6TO_ROWP4TBOXiiiP7QSPLINEf(void);

/* Symbol: _Z16BLOCK_RES_zapperP10ELIST_LINK */
/* Demangled: BLOCK_RES_zapper(ELIST_LINK*) */
int _Z16BLOCK_RES_zapperP10ELIST_LINK(void);

/* Symbol: _ZN9tesseract11TessBaseAPI20GetSourceYResolutionEv */
/* Demangled: tesseract::TessBaseAPI::GetSourceYResolution() */
int _ZN9tesseract11TessBaseAPI20GetSourceYResolutionEv(void);

/* Symbol: _ZN9tesseract19RowScratchRegisters23AppendDebugHeaderFieldsEP13GenericVectorI6STRINGE */
/* Demangled: tesseract::RowScratchRegisters::AppendDebugHeaderFields(GenericVector<STRING>*) */
int _ZN9tesseract19RowScratchRegisters23AppendDebugHeaderFieldsEP13GenericVectorI6STRINGE(void);

/* Symbol: _ZN13GenericVectorI21StrongScriptDirectionE9push_backES0_ */
/* Demangled: GenericVector<StrongScriptDirection>::push_back(StrongScriptDirection) */
int _ZN13GenericVectorI21StrongScriptDirectionE9push_backES0_(void);

/* Symbol: _ZN9tesseract10ShapeTableC1ERK10UNICHARSET */
/* Demangled: tesseract::ShapeTable::ShapeTable(UNICHARSET const&) */
int _ZN9tesseract10ShapeTableC1ERK10UNICHARSET(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract14TrainingSampleEE7reserveEi */
/* Demangled: GenericVector<tesseract::TrainingSample*>::reserve(int) */
int _ZN13GenericVectorIPN9tesseract14TrainingSampleEE7reserveEi(void);

/* Symbol: _ZN9tesseract7Wordrec10near_pointEP6EDGEPTS2_S2_PS2_ */
/* Demangled: tesseract::Wordrec::near_point(EDGEPT*, EDGEPT*, EDGEPT*, EDGEPT**) */
int _ZN9tesseract7Wordrec10near_pointEP6EDGEPTS2_S2_PS2_(void);

/* Symbol: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeGetStrips */
/* Demangled: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeGetStrips */
int Java_com_googlecode_tesseract_android_TessBaseAPI_nativeGetStrips(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract8IntParamEE9push_backES2_ */
/* Demangled: GenericVector<tesseract::IntParam*>::push_back(tesseract::IntParam*) */
int _ZN13GenericVectorIPN9tesseract8IntParamEE9push_backES2_(void);

/* Symbol: _ZN5TWERD20ComputeBoundingBoxesEv */
/* Demangled: TWERD::ComputeBoundingBoxes() */
int _ZN5TWERD20ComputeBoundingBoxesEv(void);

/* Symbol: _ZN9tesseract14TrainingSample12kScaleValuesE */
/* Demangled: tesseract::TrainingSample::kScaleValues */
extern void* _ZN9tesseract14TrainingSample12kScaleValuesE;

/* Symbol: _ZN19C_OUTLINE_FRAG_LIST9deep_copyEPKS_PFP14C_OUTLINE_FRAGPKS2_E */
/* Demangled: C_OUTLINE_FRAG_LIST::deep_copy(C_OUTLINE_FRAG_LIST const*, C_OUTLINE_FRAG* (*)(C_OUTLINE_FRAG const*)) */
int _ZN19C_OUTLINE_FRAG_LIST9deep_copyEPKS_PFP14C_OUTLINE_FRAGPKS2_E(void);

/* Symbol: Java_com_googlecode_tesseract_android_ResultIterator_nativeGetSymbolChoices */
/* Demangled: Java_com_googlecode_tesseract_android_ResultIterator_nativeGetSymbolChoices */
int Java_com_googlecode_tesseract_android_ResultIterator_nativeGetSymbolChoices(void);

/* Symbol: _ZNK9tesseract14ResultIterator15IsAtBeginningOfENS_17PageIteratorLevelE */
/* Demangled: tesseract::ResultIterator::IsAtBeginningOf(tesseract::PageIteratorLevel) const */
int _ZNK9tesseract14ResultIterator15IsAtBeginningOfENS_17PageIteratorLevelE(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int fn___aeabi_memclr8(void) __asm__("__aeabi_memclr8");

/* Symbol: _ZN8WERD_RES18LogNewCookedChoiceEibP11WERD_CHOICE */
/* Demangled: WERD_RES::LogNewCookedChoice(int, bool, WERD_CHOICE*) */
int _ZN8WERD_RES18LogNewCookedChoiceEibP11WERD_CHOICE(void);

/* Symbol: _ZN13GenericVectorIcE9push_backEc */
/* Demangled: GenericVector<char>::push_back(char) */
int _ZN13GenericVectorIcE9push_backEc(void);

/* Symbol: _ZNK9tesseract10BeamSearch6ColumnEi */
/* Demangled: tesseract::BeamSearch::Column(int) const */
int _ZNK9tesseract10BeamSearch6ColumnEi(void);

/* Symbol: _ZN13GenericVectorIN9tesseract12DawgPositionEE15double_the_sizeEv */
/* Demangled: GenericVector<tesseract::DawgPosition>::double_the_size() */
int _ZN13GenericVectorIN9tesseract12DawgPositionEE15double_the_sizeEv(void);

/* Symbol: _ZTVN9tesseract8BlobGridE */
/* Demangled: vtable for tesseract::BlobGrid */
extern void* _ZTVN9tesseract8BlobGridE;

/* Symbol: textord_force_make_prop_words */
/* Demangled: textord_force_make_prop_words */
extern void* textord_force_make_prop_words;

/* Symbol: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeClassInit */
/* Demangled: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeClassInit */
int Java_com_googlecode_tesseract_android_TessBaseAPI_nativeClassInit(void);

/* Symbol: _ZN9tesseract18TessResultRenderer18EndDocumentHandlerEv */
/* Demangled: tesseract::TessResultRenderer::EndDocumentHandler() */
int _ZN9tesseract18TessResultRenderer18EndDocumentHandlerEv(void);

/* Symbol: _ZN13GenericVectorIP6C_BLOBE7reserveEi */
/* Demangled: GenericVector<C_BLOB*>::reserve(int) */
int _ZN13GenericVectorIP6C_BLOBE7reserveEi(void);

/* Symbol: _ZN3REJ10full_printEP7__sFILE */
/* Demangled: REJ::full_print(__sFILE*) */
int _ZN3REJ10full_printEP7__sFILE(void);

/* Symbol: _ZN9tesseract9Tesseract17reject_edge_blobsEP8WERD_RES */
/* Demangled: tesseract::Tesseract::reject_edge_blobs(WERD_RES*) */
int _ZN9tesseract9Tesseract17reject_edge_blobsEP8WERD_RES(void);

/* Symbol: _ZN9tesseract11AlignedBlob16WithinTestRegionEiii */
/* Demangled: tesseract::AlignedBlob::WithinTestRegion(int, int, int) */
int _ZN9tesseract11AlignedBlob16WithinTestRegionEiii(void);

/* Symbol: _Z22MedianOfCircularValuesIdET_S0_P13GenericVectorIS0_E */
/* Demangled: double MedianOfCircularValues<double>(double, GenericVector<double>*) */
int _Z22MedianOfCircularValuesIdET_S0_P13GenericVectorIS0_E(void);

/* Symbol: _Z19save_chop_cfragments6ICOORDsS_P9C_OUTLINEP19C_OUTLINE_FRAG_LIST */
/* Demangled: save_chop_cfragment(short, ICOORD, short, ICOORD, C_OUTLINE*, C_OUTLINE_FRAG_LIST*) */
int _Z19save_chop_cfragments6ICOORDsS_P9C_OUTLINEP19C_OUTLINE_FRAG_LIST(void);

/* Symbol: _ZN9tesseract12ColPartition16SetPartitionTypeEiPNS_15ColPartitionSetE */
/* Demangled: tesseract::ColPartition::SetPartitionType(int, tesseract::ColPartitionSet*) */
int _ZN9tesseract12ColPartition16SetPartitionTypeEiPNS_15ColPartitionSetE(void);

/* Symbol: _ZN9tesseract4Dict12SetupForLoadEPNS_9DawgCacheE */
/* Demangled: tesseract::Dict::SetupForLoad(tesseract::DawgCache*) */
int _ZN9tesseract4Dict12SetupForLoadEPNS_9DawgCacheE(void);

/* Symbol: _ZN9tesseract17TrainingSampleSet28ReplicateAndRandomizeSamplesEv */
/* Demangled: tesseract::TrainingSampleSet::ReplicateAndRandomizeSamples() */
int _ZN9tesseract17TrainingSampleSet28ReplicateAndRandomizeSamplesEv(void);

/* Symbol: _ZN9tesseract17CubeLineSegmenter18EstimateFontParamsEv */
/* Demangled: tesseract::CubeLineSegmenter::EstimateFontParams() */
int _ZN9tesseract17CubeLineSegmenter18EstimateFontParamsEv(void);

/* Symbol: TessResultIteratorCopy */
/* Demangled: TessResultIteratorCopy */
int TessResultIteratorCopy(void);

/* Symbol: _ZN6ELIST210add_sortedEPFiPKvS1_EP11ELIST2_LINK */
/* Demangled: ELIST2::add_sorted(int (*)(void const*, void const*), ELIST2_LINK*) */
int _ZN6ELIST210add_sortedEPFiPKvS1_EP11ELIST2_LINK(void);

/* Symbol: _ZN6STRINGC2EPKci */
/* Demangled: STRING::STRING(char const*, int) */
int _ZN6STRINGC2EPKci(void);

/* Symbol: _ZN9tesseract8Classify18DisplayAdaptedCharEP5TBLOBP16INT_CLASS_STRUCT */
/* Demangled: tesseract::Classify::DisplayAdaptedChar(TBLOB*, INT_CLASS_STRUCT*) */
int _ZN9tesseract8Classify18DisplayAdaptedCharEP5TBLOBP16INT_CLASS_STRUCT(void);

/* Symbol: _ZN9tesseract12ColPartition11ColumnRangeEiPNS_15ColPartitionSetEPiS3_ */
/* Demangled: tesseract::ColPartition::ColumnRange(int, tesseract::ColPartitionSet*, int*, int*) */
int _ZN9tesseract12ColPartition11ColumnRangeEiPNS_15ColPartitionSetEPiS3_(void);

/* Symbol: _ZN9tesseract18ShiroRekhaSplitter15GetXheightForCCEP3Box */
/* Demangled: tesseract::ShiroRekhaSplitter::GetXheightForCC(Box*) */
int _ZN9tesseract18ShiroRekhaSplitter15GetXheightForCCEP3Box(void);

/* Symbol: _ZN9tesseract7TabFind16AddPartnerVectorEP8BLOBNBOXS2_PNS_9TabVectorES4_ */
/* Demangled: tesseract::TabFind::AddPartnerVector(BLOBNBOX*, BLOBNBOX*, tesseract::TabVector*, tesseract::TabVector*) */
int _ZN9tesseract7TabFind16AddPartnerVectorEP8BLOBNBOXS2_PNS_9TabVectorES4_(void);

/* Symbol: _ZN9tesseract18TabConstraint_LIST9deep_copyEPKS0_PFPNS_13TabConstraintEPKS3_E */
/* Demangled: tesseract::TabConstraint_LIST::deep_copy(tesseract::TabConstraint_LIST const*, tesseract::TabConstraint* (*)(tesseract::TabConstraint const*)) */
int _ZN9tesseract18TabConstraint_LIST9deep_copyEPKS0_PFPNS_13TabConstraintEPKS3_E(void);

/* Symbol: textord_words_initial_upper */
/* Demangled: textord_words_initial_upper */
extern void* textord_words_initial_upper;

/* Symbol: _ZN9tesseract11TessBaseAPI12SetInputNameEPKc */
/* Demangled: tesseract::TessBaseAPI::SetInputName(char const*) */
int _ZN9tesseract11TessBaseAPI12SetInputNameEPKc(void);

/* Symbol: TessResultIteratorWordIsFromDictionary */
/* Demangled: TessResultIteratorWordIsFromDictionary */
int TessResultIteratorWordIsFromDictionary(void);

/* Symbol: _ZN13GenericVectorIP4SEAME6insertES1_i */
/* Demangled: GenericVector<SEAM*>::insert(SEAM*, int) */
int _ZN13GenericVectorIP4SEAME6insertES1_i(void);

/* Symbol: _ZNK9tesseract5ShapeeqERKS0_ */
/* Demangled: tesseract::Shape::operator==(tesseract::Shape const&) const */
int _ZNK9tesseract5ShapeeqERKS0_(void);

/* Symbol: _ZNSt3__16vectorIN9tesseract16FontPairSizeInfoENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE */
/* Demangled: std::__1::vector<tesseract::FontPairSizeInfo, std::__1::allocator<tesseract::FontPairSizeInfo> >::__swap_out_circular_buffer(std::__1::__split_buffer<tesseract::FontPairSizeInfo, std::__1::allocator<tesseract::FontPairSizeInfo>&>&) */
int _ZNSt3__16vectorIN9tesseract16FontPairSizeInfoENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE(void);

/* Symbol: _ZN13GenericVectorIN9tesseract7ClusterEE7reserveEi */
/* Demangled: GenericVector<tesseract::Cluster>::reserve(int) */
int _ZN13GenericVectorIN9tesseract7ClusterEE7reserveEi(void);

/* Symbol: _ZN9tesseract11StrokeWidth26MakePartitionsFromCellListENS_11PageSegModeEbPNS_16ColPartitionGridEP14BLOBNBOX_CLIST */
/* Demangled: tesseract::StrokeWidth::MakePartitionsFromCellList(tesseract::PageSegMode, bool, tesseract::ColPartitionGrid*, BLOBNBOX_CLIST*) */
int _ZN9tesseract11StrokeWidth26MakePartitionsFromCellListENS_11PageSegModeEbPNS_16ColPartitionGridEP14BLOBNBOX_CLIST(void);

/* Symbol: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeGetBoxText */
/* Demangled: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeGetBoxText */
int Java_com_googlecode_tesseract_android_TessBaseAPI_nativeGetBoxText(void);

/* Symbol: _ZN4WERD23ConstructFromSingleBlobEbbP6C_BLOB */
/* Demangled: WERD::ConstructFromSingleBlob(bool, bool, C_BLOB*) */
int _ZN4WERD23ConstructFromSingleBlobEbbP6C_BLOB(void);

/* Symbol: _ZN3REJ19setrej_bad_permuterEv */
/* Demangled: REJ::setrej_bad_permuter() */
int _ZN3REJ19setrej_bad_permuterEv(void);

/* Symbol: _ZN9tesseract12ColumnFinder11blocks_win_E */
/* Demangled: tesseract::ColumnFinder::blocks_win_ */
extern void* _ZN9tesseract12ColumnFinder11blocks_win_E;

/* Symbol: _ZN9tesseract7TabFind14RotateBlobListERK6FCOORDP13BLOBNBOX_LIST */
/* Demangled: tesseract::TabFind::RotateBlobList(FCOORD const&, BLOBNBOX_LIST*) */
int _ZN9tesseract7TabFind14RotateBlobListERK6FCOORDP13BLOBNBOX_LIST(void);

/* Symbol: _Z14find_top_modesP5STATSiPii */
/* Demangled: find_top_modes(STATS*, int, int*, int) */
int _Z14find_top_modesP5STATSiPii(void);

/* Symbol: _ZN9tesseract5TFileD1Ev */
/* Demangled: tesseract::TFile::~TFile() */
int _ZN9tesseract5TFileD1Ev(void);

/* Symbol: _ZN9tesseract9BitVector5AllocEi */
/* Demangled: tesseract::BitVector::Alloc(int) */
int _ZN9tesseract9BitVector5AllocEi(void);

/* Symbol: _ZN19OrientationDetectorC2EPK13GenericVectorIiEP9OSResults */
/* Demangled: OrientationDetector::OrientationDetector(GenericVector<int> const*, OSResults*) */
int _ZN19OrientationDetectorC2EPK13GenericVectorIiEP9OSResults(void);

/* Symbol: _ZNK9C_OUTLINE10outer_areaEv */
/* Demangled: C_OUTLINE::outer_area() const */
int _ZNK9C_OUTLINE10outer_areaEv(void);

/* Symbol: _ZN9tesseract13MasterTrainer19SetupFlatShapeTableEPNS_10ShapeTableE */
/* Demangled: tesseract::MasterTrainer::SetupFlatShapeTable(tesseract::ShapeTable*) */
int _ZN9tesseract13MasterTrainer19SetupFlatShapeTableEPNS_10ShapeTableE(void);

/* Symbol: _ZN9tesseract5Shape10AddToShapeEii */
/* Demangled: tesseract::Shape::AddToShape(int, int) */
int _ZN9tesseract5Shape10AddToShapeEii(void);

/* Symbol: _Z12blob_x_orderPKvS0_ */
/* Demangled: blob_x_order(void const*, void const*) */
int _Z12blob_x_orderPKvS0_(void);

/* Symbol: _ZN9tesseract11TableFinder20DisplayColPartitionsEP10ScrollViewPNS_16ColPartitionGridENS1_5ColorE */
/* Demangled: tesseract::TableFinder::DisplayColPartitions(ScrollView*, tesseract::ColPartitionGrid*, ScrollView::Color) */
int _ZN9tesseract11TableFinder20DisplayColPartitionsEP10ScrollViewPNS_16ColPartitionGridENS1_5ColorE(void);

/* Symbol: _ZN9tesseract8Classify15ClassifyAsNoiseEP13ADAPT_RESULTS */
/* Demangled: tesseract::Classify::ClassifyAsNoise(ADAPT_RESULTS*) */
int _ZN9tesseract8Classify15ClassifyAsNoiseEP13ADAPT_RESULTS(void);

/* Symbol: _ZN9tesseract11CharAltList6InsertEiiPv */
/* Demangled: tesseract::CharAltList::Insert(int, int, void*) */
int _ZN9tesseract11CharAltList6InsertEiiPv(void);

/* Symbol: textord_heavy_nr */
/* Demangled: textord_heavy_nr */
extern void* textord_heavy_nr;

/* Symbol: _ZNK9tesseract15StructuredTable20FindHorizontalMarginEPNS_16ColPartitionGridEib */
/* Demangled: tesseract::StructuredTable::FindHorizontalMargin(tesseract::ColPartitionGrid*, int, bool) const */
int _ZNK9tesseract15StructuredTable20FindHorizontalMarginEPNS_16ColPartitionGridEib(void);

/* Symbol: _ZN9tesseract18EquationDetectBaseC2Ev */
/* Demangled: tesseract::EquationDetectBase::EquationDetectBase() */
int _ZN9tesseract18EquationDetectBaseC2Ev(void);

/* Symbol: _ZN10PB_LINE_IT8get_lineEs */
/* Demangled: PB_LINE_IT::get_line(short) */
int _ZN10PB_LINE_IT8get_lineEs(void);

/* Symbol: _Z11NewIntClassii */
/* Demangled: NewIntClass(int, int) */
int _Z11NewIntClassii(void);

/* Symbol: _ZNK13GenericVectorIN9tesseract7FontSetEE3getEi */
/* Demangled: GenericVector<tesseract::FontSet>::get(int) const */
int _ZNK13GenericVectorIN9tesseract7FontSetEE3getEi(void);

/* Symbol: _ZN7QSPLINEC1ERKS_ */
/* Demangled: QSPLINE::QSPLINE(QSPLINE const&) */
int _ZN7QSPLINEC1ERKS_(void);

/* Symbol: _ZTVN9tesseract6BBGridINS_12ColPartitionENS_18ColPartition_CLISTENS_17ColPartition_C_ITEEE */
/* Demangled: vtable for tesseract::BBGrid<tesseract::ColPartition, tesseract::ColPartition_CLIST, tesseract::ColPartition_C_IT> */
extern void* _ZTVN9tesseract6BBGridINS_12ColPartitionENS_18ColPartition_CLISTENS_17ColPartition_C_ITEEE;

/* Symbol: _ZN9tesseract7TabFind12EvaluateTabsEv */
/* Demangled: tesseract::TabFind::EvaluateTabs() */
int _ZN9tesseract7TabFind12EvaluateTabsEv(void);

/* Symbol: _ZN10UNICHARSET18UNICHAR_PROPERTIES8CopyFromERKS0_ */
/* Demangled: UNICHARSET::UNICHAR_PROPERTIES::CopyFrom(UNICHARSET::UNICHAR_PROPERTIES const&) */
int _ZN10UNICHARSET18UNICHAR_PROPERTIES8CopyFromERKS0_(void);

/* Symbol: _ZN14IntegerMatcher22UpdateTablesForFeatureEP16INT_CLASS_STRUCTPjS2_iPK18INT_FEATURE_STRUCTP15ScratchEvidencei */
/* Demangled: IntegerMatcher::UpdateTablesForFeature(INT_CLASS_STRUCT*, unsigned int*, unsigned int*, int, INT_FEATURE_STRUCT const*, ScratchEvidence*, int) */
int _ZN14IntegerMatcher22UpdateTablesForFeatureEP16INT_CLASS_STRUCTPjS2_iPK18INT_FEATURE_STRUCTP15ScratchEvidencei(void);

/* Symbol: textord_excess_blobsize */
/* Demangled: textord_excess_blobsize */
extern void* textord_excess_blobsize;

/* Symbol: _ZN9tesseract9Tesseract14dont_allow_1IlEP8WERD_RES */
/* Demangled: tesseract::Tesseract::dont_allow_1Il(WERD_RES*) */
int _ZN9tesseract9Tesseract14dont_allow_1IlEP8WERD_RES(void);

/* Symbol: _ZN3REJ19setrej_no_alphanumsEv */
/* Demangled: REJ::setrej_no_alphanums() */
int _ZN3REJ19setrej_no_alphanumsEv(void);

/* Symbol: _ZN9tesseract14TrainingSample11MapFeaturesERKNS_13IntFeatureMapE */
/* Demangled: tesseract::TrainingSample::MapFeatures(tesseract::IntFeatureMap const&) */
int _ZN9tesseract14TrainingSample11MapFeaturesERKNS_13IntFeatureMapE(void);

/* Symbol: _ZNK9tesseract11TableFinder18AllowTextPartitionERKNS_12ColPartitionE */
/* Demangled: tesseract::TableFinder::AllowTextPartition(tesseract::ColPartition const&) const */
int _ZNK9tesseract11TableFinder18AllowTextPartitionERKNS_12ColPartitionE(void);

/* Symbol: _ZN9tesseract14AssociateUtils12ComputeStatsEiiPKNS_14AssociateStatsEibfP8WERD_RESbPS1_ */
/* Demangled: tesseract::AssociateUtils::ComputeStats(int, int, tesseract::AssociateStats const*, int, bool, float, WERD_RES*, bool, tesseract::AssociateStats*) */
int _ZN9tesseract14AssociateUtils12ComputeStatsEiiPKNS_14AssociateStatsEibfP8WERD_RESbPS1_(void);

/* Symbol: _ZN9tesseract6read_tEP11PAGE_RES_ITP4TBOX */
/* Demangled: tesseract::read_t(PAGE_RES_IT*, TBOX*) */
int _ZN9tesseract6read_tEP11PAGE_RES_ITP4TBOX(void);

/* Symbol: _ZTV16GENERIC_2D_ARRAYIdE */
/* Demangled: vtable for GENERIC_2D_ARRAY<double> */
extern void* _ZTV16GENERIC_2D_ARRAYIdE;

/* Symbol: _ZN13GenericVectorIyE6insertEyi */
/* Demangled: GenericVector<unsigned long long>::insert(unsigned long long, int) */
int _ZN13GenericVectorIyE6insertEyi(void);

/* Symbol: _ZN9tesseract9Tesseract20TrySuperscriptSplitsEifNS_9ScriptPosEifS1_P8WERD_RESPbPiS5_ */
/* Demangled: tesseract::Tesseract::TrySuperscriptSplits(int, float, tesseract::ScriptPos, int, float, tesseract::ScriptPos, WERD_RES*, bool*, int*, int*) */
int _ZN9tesseract9Tesseract20TrySuperscriptSplitsEifNS_9ScriptPosEifS1_P8WERD_RESPbPiS5_(void);

/* Symbol: _ZNK10UNICHARSET16contains_unicharEPKci */
/* Demangled: UNICHARSET::contains_unichar(char const*, int) const */
int _ZNK10UNICHARSET16contains_unicharEPKci(void);

/* Symbol: _ZN9tesseract8Classify14ReadNewCutoffsEP7__sFILEbxPt */
/* Demangled: tesseract::Classify::ReadNewCutoffs(__sFILE*, bool, long long, unsigned short*) */
int _ZN9tesseract8Classify14ReadNewCutoffsEP7__sFILEbxPt(void);

/* Symbol: _ZTVN9tesseract6BBGridI8BLOBNBOX14BLOBNBOX_CLIST13BLOBNBOX_C_ITEE */
/* Demangled: vtable for tesseract::BBGrid<BLOBNBOX, BLOBNBOX_CLIST, BLOBNBOX_C_IT> */
extern void* _ZTVN9tesseract6BBGridI8BLOBNBOX14BLOBNBOX_CLIST13BLOBNBOX_C_ITEE;

/* Symbol: _ZN9tesseract11TableFinder19MarkTablePartitionsEv */
/* Demangled: tesseract::TableFinder::MarkTablePartitions() */
int _ZN9tesseract11TableFinder19MarkTablePartitionsEv(void);

/* Symbol: _Z30vertical_cunderline_projectionP9C_OUTLINEP7QSPLINEffP5STATSS4_S4_ */
/* Demangled: vertical_cunderline_projection(C_OUTLINE*, QSPLINE*, float, float, STATS*, STATS*, STATS*) */
int _Z30vertical_cunderline_projectionP9C_OUTLINEP7QSPLINEffP5STATSS4_S4_(void);

/* Symbol: _ZN9tesseract19WorkingPartSet_LIST9deep_copyEPKS0_PFPNS_14WorkingPartSetEPKS3_E */
/* Demangled: tesseract::WorkingPartSet_LIST::deep_copy(tesseract::WorkingPartSet_LIST const*, tesseract::WorkingPartSet* (*)(tesseract::WorkingPartSet const*)) */
int _ZN9tesseract19WorkingPartSet_LIST9deep_copyEPKS0_PFPNS_14WorkingPartSetEPKS3_E(void);

/* Symbol: _ZN9tesseract10ShapeTable8AddShapeERKNS_5ShapeE */
/* Demangled: tesseract::ShapeTable::AddShape(tesseract::Shape const&) */
int _ZN9tesseract10ShapeTable8AddShapeERKNS_5ShapeE(void);

/* Symbol: _ZN9tesseract21ConvNetCharClassifier7RunNetsEPNS_8CharSampE */
/* Demangled: tesseract::ConvNetCharClassifier::RunNets(tesseract::CharSamp*) */
int _ZN9tesseract21ConvNetCharClassifier7RunNetsEPNS_8CharSampE(void);

/* Symbol: _Z17merge_oldbl_partsP4TBOXiPcPiif */
/* Demangled: merge_oldbl_parts(TBOX*, int, char*, int*, int, float) */
int _Z17merge_oldbl_partsP4TBOXiPcPiif(void);

/* Symbol: _Z12NewChiStructtd */
/* Demangled: NewChiStruct(unsigned short, double) */
int _Z12NewChiStructtd(void);

/* Symbol: _ZNK13GenericVectorIN9tesseract12KDPtrPairDecIf4SEAMEEE4backEv */
/* Demangled: GenericVector<tesseract::KDPtrPairDec<float, SEAM> >::back() const */
int _ZNK13GenericVectorIN9tesseract12KDPtrPairDecIf4SEAMEEE4backEv(void);

/* Symbol: _ZN9tesseract7WordrecD0Ev */
/* Demangled: tesseract::Wordrec::~Wordrec() */
int _ZN9tesseract7WordrecD0Ev(void);

/* Symbol: _ZN9tesseract16TessHOcrRenderer20BeginDocumentHandlerEv */
/* Demangled: tesseract::TessHOcrRenderer::BeginDocumentHandler() */
int _ZN9tesseract16TessHOcrRenderer20BeginDocumentHandlerEv(void);

/* Symbol: _ZN9tesseract13IntFeatureMap4InitERKNS_15IntFeatureSpaceE */
/* Demangled: tesseract::IntFeatureMap::Init(tesseract::IntFeatureSpace const&) */
int _ZN9tesseract13IntFeatureMap4InitERKNS_15IntFeatureSpaceE(void);

/* Symbol: _Z24ConvertSegmentToPicoFeatP6FPOINTS0_P18FEATURE_SET_STRUCT */
/* Demangled: ConvertSegmentToPicoFeat(FPOINT*, FPOINT*, FEATURE_SET_STRUCT*) */
int _Z24ConvertSegmentToPicoFeatP6FPOINTS0_P18FEATURE_SET_STRUCT(void);

/* Symbol: _ZNSt3__16vectorIfNS_9allocatorIfEEE6resizeEj */
/* Demangled: std::__1::vector<float, std::__1::allocator<float> >::resize(unsigned int) */
int _ZNSt3__16vectorIfNS_9allocatorIfEEE6resizeEj(void);

/* Symbol: _ZN9tesseract15ColPartitionSetC2EPNS_17ColPartition_LISTE */
/* Demangled: tesseract::ColPartitionSet::ColPartitionSet(tesseract::ColPartition_LIST*) */
int _ZN9tesseract15ColPartitionSetC2EPNS_17ColPartition_LISTE(void);

/* Symbol: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeBeginDocument */
/* Demangled: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeBeginDocument */
int Java_com_googlecode_tesseract_android_TessBaseAPI_nativeBeginDocument(void);

/* Symbol: _ZN13GenericVectorIP14ParagraphModelE20delete_data_pointersEv */
/* Demangled: GenericVector<ParagraphModel*>::delete_data_pointers() */
int _ZN13GenericVectorIP14ParagraphModelE20delete_data_pointersEv(void);

/* Symbol: _ZN9tesseract17TextSupportsBreakERKNS_19RowScratchRegistersES2_ */
/* Demangled: tesseract::TextSupportsBreak(tesseract::RowScratchRegisters const&, tesseract::RowScratchRegisters const&) */
int _ZN9tesseract17TextSupportsBreakERKNS_19RowScratchRegistersES2_(void);

/* Symbol: _ZN9tesseract15CCNonTextDetectD1Ev */
/* Demangled: tesseract::CCNonTextDetect::~CCNonTextDetect() */
int _ZN9tesseract15CCNonTextDetectD1Ev(void);

/* Symbol: _ZN9tesseract11TessBaseAPI10GetTSVTextEi */
/* Demangled: tesseract::TessBaseAPI::GetTSVText(int) */
int _ZN9tesseract11TessBaseAPI10GetTSVTextEi(void);

/* Symbol: _ZN13GenericVectorIN9tesseract8FontInfoEE15double_the_sizeEv */
/* Demangled: GenericVector<tesseract::FontInfo>::double_the_size() */
int _ZN13GenericVectorIN9tesseract8FontInfoEE15double_the_sizeEv(void);

/* Symbol: _ZNK9tesseract10ShapeTable18MergeSubsetUnicharEiii */
/* Demangled: tesseract::ShapeTable::MergeSubsetUnichar(int, int, int) const */
int _ZNK9tesseract10ShapeTable18MergeSubsetUnicharEiii(void);

/* Symbol: _ZN9tesseract7Wordrec19try_vertical_splitsEPP6EDGEPTsP12EDGEPT_CLISTPNS_11GenericHeapINS_12KDPtrPairIncIf4SEAMEEEEPNS6_INS_12KDPtrPairDecIfS8_EEEEPPS8_P5TBLOB */
/* Demangled: tesseract::Wordrec::try_vertical_splits(EDGEPT**, short, EDGEPT_CLIST*, tesseract::GenericHeap<tesseract::KDPtrPairInc<float, SEAM> >*, tesseract::GenericHeap<tesseract::KDPtrPairDec<float, SEAM> >*, SEAM**, TBLOB*) */
int _ZN9tesseract7Wordrec19try_vertical_splitsEPP6EDGEPTsP12EDGEPT_CLISTPNS_11GenericHeapINS_12KDPtrPairIncIf4SEAMEEEEPNS6_INS_12KDPtrPairDecIfS8_EEEEPPS8_P5TBLOB(void);

/* Symbol: _ZN9tesseract13LanguageModelC2EPK12UnicityTableINS_8FontInfoEEPNS_4DictE */
/* Demangled: tesseract::LanguageModel::LanguageModel(UnicityTable<tesseract::FontInfo> const*, tesseract::Dict*) */
int _ZN9tesseract13LanguageModelC2EPK12UnicityTableINS_8FontInfoEEPNS_4DictE(void);

/* Symbol: _ZN9tesseract15TessPDFRendererC2EPKcS2_ */
/* Demangled: tesseract::TessPDFRenderer::TessPDFRenderer(char const*, char const*) */
int _ZN9tesseract15TessPDFRendererC2EPKcS2_(void);

/* Symbol: _ZN8BLOBNBOX18ComputeEdgeOffsetsEP3PixS1_P13BLOBNBOX_LIST */
/* Demangled: BLOBNBOX::ComputeEdgeOffsets(Pix*, Pix*, BLOBNBOX_LIST*) */
int _ZN8BLOBNBOX18ComputeEdgeOffsetsEP3PixS1_P13BLOBNBOX_LIST(void);

/* Symbol: _ZN8TESSLINE9NormalizeERK6DENORM */
/* Demangled: TESSLINE::Normalize(DENORM const&) */
int _ZN8TESSLINE9NormalizeERK6DENORM(void);

/* Symbol: _ZNK13GenericVectorIN9tesseract9KDPairIncIfP11TEMPCLUSTEREEE4backEv */
/* Demangled: GenericVector<tesseract::KDPairInc<float, TEMPCLUSTER*> >::back() const */
int _ZNK13GenericVectorIN9tesseract9KDPairIncIfP11TEMPCLUSTEREEE4backEv(void);

/* Symbol: _ZN9tesseract29HybridNeuralNetCharClassifier4InitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_PNS_9LangModelE */
/* Demangled: tesseract::HybridNeuralNetCharClassifier::Init(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, tesseract::LangModel*) */
int _ZN9tesseract29HybridNeuralNetCharClassifier4InitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_PNS_9LangModelE(void);

/* Symbol: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeSetRectangle */
/* Demangled: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeSetRectangle */
int Java_com_googlecode_tesseract_android_TessBaseAPI_nativeSetRectangle(void);

/* Symbol: _ZN9tesseract11TessBaseAPI22GetConnectedComponentsEPP4Pixa */
/* Demangled: tesseract::TessBaseAPI::GetConnectedComponents(Pixa**) */
int _ZN9tesseract11TessBaseAPI22GetConnectedComponentsEPP4Pixa(void);

/* Symbol: _ZNK8WERD_RES37AlternativeChoiceAdjustmentsWorseThanEf */
/* Demangled: WERD_RES::AlternativeChoiceAdjustmentsWorseThan(float) const */
int _ZNK8WERD_RES37AlternativeChoiceAdjustmentsWorseThanEf(void);

/* Symbol: _ZN9tesseract9TabVector22MergeSimilarTabVectorsERK6ICOORDPNS_14TabVector_LISTEPNS_8BlobGridE */
/* Demangled: tesseract::TabVector::MergeSimilarTabVectors(ICOORD const&, tesseract::TabVector_LIST*, tesseract::BlobGrid*) */
int _ZN9tesseract9TabVector22MergeSimilarTabVectorsERK6ICOORDPNS_14TabVector_LISTEPNS_8BlobGridE(void);

/* Symbol: _ZN7FPSEGPTC2EshssssP12FPSEGPT_LIST */
/* Demangled: FPSEGPT::FPSEGPT(short, unsigned char, short, short, short, short, FPSEGPT_LIST*) */
int _ZN7FPSEGPTC2EshssssP12FPSEGPT_LIST(void);

/* Symbol: _ZN9tesseract15TableRecognizer14RecognizeTableERK4TBOX */
/* Demangled: tesseract::TableRecognizer::RecognizeTable(TBOX const&) */
int _ZN9tesseract15TableRecognizer14RecognizeTableERK4TBOX(void);

/* Symbol: _ZN10ScrollViewD2Ev */
/* Demangled: ScrollView::~ScrollView() */
int _ZN10ScrollViewD2Ev(void);

/* Symbol: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeEnd */
/* Demangled: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeEnd */
int Java_com_googlecode_tesseract_android_TessBaseAPI_nativeEnd(void);

/* Symbol: _ZN9tesseract11TessBaseAPID2Ev */
/* Demangled: tesseract::TessBaseAPI::~TessBaseAPI() */
int _ZN9tesseract11TessBaseAPID2Ev(void);

/* Symbol: _ZNK9tesseract12PageIterator19BoundingBoxInternalENS_17PageIteratorLevelEPiS2_S2_S2_ */
/* Demangled: tesseract::PageIterator::BoundingBoxInternal(tesseract::PageIteratorLevel, int*, int*, int*, int*) const */
int _ZNK9tesseract12PageIterator19BoundingBoxInternalENS_17PageIteratorLevelEPiS2_S2_S2_(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract14AmbigSpec_LISTEE15double_the_sizeEv */
/* Demangled: GenericVector<tesseract::AmbigSpec_LIST*>::double_the_size() */
int _ZN13GenericVectorIPN9tesseract14AmbigSpec_LISTEE15double_the_sizeEv(void);

/* Symbol: classify_font_name */
/* Demangled: classify_font_name */
extern void* classify_font_name;

/* Symbol: _ZNK9tesseract4Trie10print_nodeExi */
/* Demangled: tesseract::Trie::print_node(long long, int) const */
int _ZNK9tesseract4Trie10print_nodeExi(void);

/* Symbol: _ZN9tesseract7Textord17stats_count_underEP5STATSs */
/* Demangled: tesseract::Textord::stats_count_under(STATS*, short) */
int _ZN9tesseract7Textord17stats_count_underEP5STATSs(void);

/* Symbol: _ZN13GenericVectorIlE9push_backEl */
/* Demangled: GenericVector<long>::push_back(long) */
int _ZN13GenericVectorIlE9push_backEl(void);

/* Symbol: _ZN19OrientationDetector15get_orientationEv */
/* Demangled: OrientationDetector::get_orientation() */
int _ZN19OrientationDetector15get_orientationEv(void);

/* Symbol: _Z11MakeBuckets12DISTRIBUTIONjd */
/* Demangled: MakeBuckets(DISTRIBUTION, unsigned int, double) */
int _Z11MakeBuckets12DISTRIBUTIONjd(void);

/* Symbol: _ZN9tesseract10ShapeTable10SwapShapesEii */
/* Demangled: tesseract::ShapeTable::SwapShapes(int, int) */
int _ZN9tesseract10ShapeTable10SwapShapesEii(void);

/* Symbol: _ZN9tesseract12SearchColumn5PruneEv */
/* Demangled: tesseract::SearchColumn::Prune() */
int _ZN9tesseract12SearchColumn5PruneEv(void);

/* Symbol: _ZN9tesseract11TessBaseAPI9ThresholdEPP3Pix */
/* Demangled: tesseract::TessBaseAPI::Threshold(Pix**) */
int _ZN9tesseract11TessBaseAPI9ThresholdEPP3Pix(void);

/* Symbol: _ZN9tesseract16CubeSearchObjectD1Ev */
/* Demangled: tesseract::CubeSearchObject::~CubeSearchObject() */
int _ZN9tesseract16CubeSearchObjectD1Ev(void);

/* Symbol: _ZN9tesseract10LineFinder12GetLineMasksEiP3PixPS2_S3_S3_S3_S3_S3_P4Pixa */
/* Demangled: tesseract::LineFinder::GetLineMasks(int, Pix*, Pix**, Pix**, Pix**, Pix**, Pix**, Pix**, Pixa*) */
int _ZN9tesseract10LineFinder12GetLineMasksEiP3PixPS2_S3_S3_S3_S3_S3_P4Pixa(void);

/* Symbol: _ZN9tesseract11StrokeWidth22FindVerticalTextChainsEPNS_16ColPartitionGridE */
/* Demangled: tesseract::StrokeWidth::FindVerticalTextChains(tesseract::ColPartitionGrid*) */
int _ZN9tesseract11StrokeWidth22FindVerticalTextChainsEPNS_16ColPartitionGridE(void);

/* Symbol: _Z19insert_spline_pointPiiiiRi */
/* Demangled: insert_spline_point(int*, int, int, int, int&) */
int _Z19insert_spline_pointPiiiiRi(void);

/* Symbol: _ZN13GenericVectorIN9tesseract12KDPtrPairDecIf4SEAMEEE15double_the_sizeEv */
/* Demangled: GenericVector<tesseract::KDPtrPairDec<float, SEAM> >::double_the_size() */
int _ZN13GenericVectorIN9tesseract12KDPtrPairDecIf4SEAMEEE15double_the_sizeEv(void);

/* Symbol: _ZN9tesseract14EquationDetect30ProcessMathBlockSatellitePartsEv */
/* Demangled: tesseract::EquationDetect::ProcessMathBlockSatelliteParts() */
int _ZN9tesseract14EquationDetect30ProcessMathBlockSatellitePartsEv(void);

/* Symbol: Java_com_googlecode_tesseract_android_ResultIterator_nativeIsAtFinalElement */
/* Demangled: Java_com_googlecode_tesseract_android_ResultIterator_nativeIsAtFinalElement */
int Java_com_googlecode_tesseract_android_ResultIterator_nativeIsAtFinalElement(void);

/* Symbol: _ZN8WERD_RES10fix_quotesEv */
/* Demangled: WERD_RES::fix_quotes() */
int _ZN8WERD_RES10fix_quotesEv(void);

/* Symbol: _ZN13GenericVectorIN9tesseract13UnicharRatingEE5clearEv */
/* Demangled: GenericVector<tesseract::UnicharRating>::clear() */
int _ZN13GenericVectorIN9tesseract13UnicharRatingEE5clearEv(void);

/* Symbol: _ZN9tesseract9Tesseract12tilde_crunchER11PAGE_RES_IT */
/* Demangled: tesseract::Tesseract::tilde_crunch(PAGE_RES_IT&) */
int _ZN9tesseract9Tesseract12tilde_crunchER11PAGE_RES_IT(void);

/* Symbol: _ZN9tesseract17CubeLineSegmenter8PixUnionEP3PixP3BoxS2_S4_ */
/* Demangled: tesseract::CubeLineSegmenter::PixUnion(Pix*, Box*, Pix*, Box*) */
int _ZN9tesseract17CubeLineSegmenter8PixUnionEP3PixP3BoxS2_S4_(void);

/* Symbol: textord_fp_chop_snap */
/* Demangled: textord_fp_chop_snap */
extern void* textord_fp_chop_snap;

/* Symbol: _ZN9tesseract11StrokeWidth25FindTextlineFlowDirectionENS_11PageSegModeEb */
/* Demangled: tesseract::StrokeWidth::FindTextlineFlowDirection(tesseract::PageSegMode, bool) */
int _ZN9tesseract11StrokeWidth25FindTextlineFlowDirectionENS_11PageSegModeEb(void);

/* Symbol: _Z18tweak_row_baselineP3ROWdd */
/* Demangled: tweak_row_baseline(ROW*, double, double) */
int _Z18tweak_row_baselineP3ROWdd(void);

/* Symbol: _ZN14ELIST_ITERATOR7forwardEv */
/* Demangled: ELIST_ITERATOR::forward() */
int _ZN14ELIST_ITERATOR7forwardEv(void);

/* Symbol: _ZN9tesseract9write_setEP7__sFILERKNS_7FontSetE */
/* Demangled: tesseract::write_set(__sFILE*, tesseract::FontSet const&) */
int _ZN9tesseract9write_setEP7__sFILERKNS_7FontSetE(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract9ImageDataEE15double_the_sizeEv */
/* Demangled: GenericVector<tesseract::ImageData*>::double_the_size() */
int _ZN13GenericVectorIPN9tesseract9ImageDataEE15double_the_sizeEv(void);

/* Symbol: _ZN9tesseract11StrokeWidth36FindTextlineDirectionAndFixBrokenCJKENS_11PageSegModeEbP8TO_BLOCK */
/* Demangled: tesseract::StrokeWidth::FindTextlineDirectionAndFixBrokenCJK(tesseract::PageSegMode, bool, TO_BLOCK*) */
int _ZN9tesseract11StrokeWidth36FindTextlineDirectionAndFixBrokenCJKENS_11PageSegModeEbP8TO_BLOCK(void);

/* Symbol: _Z15make_single_row6ICOORDbP8TO_BLOCKP13TO_BLOCK_LIST */
/* Demangled: make_single_row(ICOORD, bool, TO_BLOCK*, TO_BLOCK_LIST*) */
int _Z15make_single_row6ICOORDbP8TO_BLOCKP13TO_BLOCK_LIST(void);

/* Symbol: _ZNK9tesseract4Dict10valid_wordERK11WERD_CHOICEb */
/* Demangled: tesseract::Dict::valid_word(WERD_CHOICE const&, bool) const */
int _ZNK9tesseract4Dict10valid_wordERK11WERD_CHOICEb(void);

/* Symbol: _ZN13GenericVectorIS_IN9tesseract24ParamsTrainingHypothesisEEE7reserveEi */
/* Demangled: GenericVector<GenericVector<tesseract::ParamsTrainingHypothesis> >::reserve(int) */
int _ZN13GenericVectorIS_IN9tesseract24ParamsTrainingHypothesisEEE7reserveEi(void);

/* Symbol: _ZN9tesseract14EquationDetect13SetResolutionEi */
/* Demangled: tesseract::EquationDetect::SetResolution(int) */
int _ZN9tesseract14EquationDetect13SetResolutionEi(void);

/* Symbol: _ZN9tesseract7Wordrec25vertical_projection_pointEP6EDGEPTS2_PS2_P12EDGEPT_CLIST */
/* Demangled: tesseract::Wordrec::vertical_projection_point(EDGEPT*, EDGEPT*, EDGEPT**, EDGEPT_CLIST*) */
int _ZN9tesseract7Wordrec25vertical_projection_pointEP6EDGEPTS2_PS2_P12EDGEPT_CLIST(void);

/* Symbol: _ZNK9tesseract14EquationDetect22EstimateTypeForUnicharERK10UNICHARSETi */
/* Demangled: tesseract::EquationDetect::EstimateTypeForUnichar(UNICHARSET const&, int) const */
int _ZNK9tesseract14EquationDetect22EstimateTypeForUnicharERK10UNICHARSETi(void);

/* Symbol: _ZN13GenericVectorIPK14ParagraphModelE5clearEv */
/* Demangled: GenericVector<ParagraphModel const*>::clear() */
int _ZN13GenericVectorIPK14ParagraphModelE5clearEv(void);

/* Symbol: _ZN9tesseract6CCUtilC1Ev */
/* Demangled: tesseract::CCUtil::CCUtil() */
int _ZN9tesseract6CCUtilC1Ev(void);

/* Symbol: _ZNK9tesseract13BaselineBlock20SetupBlockParametersEv */
/* Demangled: tesseract::BaselineBlock::SetupBlockParameters() const */
int _ZNK9tesseract13BaselineBlock20SetupBlockParametersEv(void);

/* Symbol: _ZN9tesseract11CubeAPITestEP4BoxaP4PixaS1_S3_RK6FCOORDP3PixP8PAGE_RES */
/* Demangled: tesseract::CubeAPITest(Boxa*, Pixa*, Boxa*, Pixa*, FCOORD const&, Pix*, PAGE_RES*) */
int _ZN9tesseract11CubeAPITestEP4BoxaP4PixaS1_S3_RK6FCOORDP3PixP8PAGE_RES(void);

/* Symbol: _ZNK9tesseract11TessBaseAPI14GetIntVariableEPKcPi */
/* Demangled: tesseract::TessBaseAPI::GetIntVariable(char const*, int*) const */
int _ZNK9tesseract11TessBaseAPI14GetIntVariableEPKcPi(void);

/* Symbol: _ZN13GenericVectorIN9tesseract9KDPairIncIfP11TEMPCLUSTEREEE7reserveEi */
/* Demangled: GenericVector<tesseract::KDPairInc<float, TEMPCLUSTER*> >::reserve(int) */
int _ZN13GenericVectorIN9tesseract9KDPairIncIfP11TEMPCLUSTEREEE7reserveEi(void);

/* Symbol: _ZN9tesseract15StructuredTable19FindWhitespacedRowsEv */
/* Demangled: tesseract::StructuredTable::FindWhitespacedRows() */
int _ZN9tesseract15StructuredTable19FindWhitespacedRowsEv(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract15FontSpacingInfoEE20delete_data_pointersEv */
/* Demangled: GenericVector<tesseract::FontSpacingInfo*>::delete_data_pointers() */
int _ZN13GenericVectorIPN9tesseract15FontSpacingInfoEE20delete_data_pointersEv(void);

/* Symbol: _ZN11BLOB_CHOICEC2Eiffifff20BlobChoiceClassifier */
/* Demangled: BLOB_CHOICE::BLOB_CHOICE(int, float, float, int, float, float, float, BlobChoiceClassifier) */
int _ZN11BLOB_CHOICEC2Eiffifff20BlobChoiceClassifier(void);

/* Symbol: _ZN6REJMAP18rej_word_xht_fixupEv */
/* Demangled: REJMAP::rej_word_xht_fixup() */
int _ZN6REJMAP18rej_word_xht_fixupEv(void);

/* Symbol: _ZN9tesseract8CharSamp11FromRawDataEiiiiPh */
/* Demangled: tesseract::CharSamp::FromRawData(int, int, int, int, unsigned char*) */
int _ZN9tesseract8CharSamp11FromRawDataEiiiiPh(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract10BlockGroupEE7reserveEi */
/* Demangled: GenericVector<tesseract::BlockGroup*>::reserve(int) */
int _ZN13GenericVectorIPN9tesseract10BlockGroupEE7reserveEi(void);

/* Symbol: _ZN9tesseract15TessPDFRenderer13imageToPDFObjEP3PixPclPS3_Pl */
/* Demangled: tesseract::TessPDFRenderer::imageToPDFObj(Pix*, char*, long, char**, long*) */
int _ZN9tesseract15TessPDFRenderer13imageToPDFObjEP3PixPclPS3_Pl(void);

/* Symbol: _ZN9tesseract4kLRME */
/* Demangled: tesseract::kLRM */
extern void* _ZN9tesseract4kLRME;

/* Symbol: _ZN9tesseract16ColPartitionGrid15GridFindMarginsEPPNS_15ColPartitionSetE */
/* Demangled: tesseract::ColPartitionGrid::GridFindMargins(tesseract::ColPartitionSet**) */
int _ZN9tesseract16ColPartitionGrid15GridFindMarginsEPPNS_15ColPartitionSetE(void);

/* Symbol: _ZNK9tesseract15StructuredTable12column_widthEi */
/* Demangled: tesseract::StructuredTable::column_width(int) const */
int _ZNK9tesseract15StructuredTable12column_widthEi(void);

/* Symbol: _ZN13GenericVectorIP16BLOB_CHOICE_LISTE15double_the_sizeEv */
/* Demangled: GenericVector<BLOB_CHOICE_LIST*>::double_the_size() */
int _ZN13GenericVectorIP16BLOB_CHOICE_LISTE15double_the_sizeEv(void);

/* Symbol: _Z22transform_to_next_permR13WERD_RES_LIST */
/* Demangled: transform_to_next_perm(WERD_RES_LIST&) */
int _Z22transform_to_next_permR13WERD_RES_LIST(void);

/* Symbol: _ZN10UNICHARSET14load_from_fileEP7__sFILEb */
/* Demangled: UNICHARSET::load_from_file(__sFILE*, bool) */
int _ZN10UNICHARSET14load_from_fileEP7__sFILEb(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract11StringParamEE6removeEi */
/* Demangled: GenericVector<tesseract::StringParam*>::remove(int) */
int _ZN13GenericVectorIPN9tesseract11StringParamEE6removeEi(void);

/* Symbol: _ZNK4TBOX12print_to_strEP6STRING */
/* Demangled: TBOX::print_to_str(STRING*) const */
int _ZNK4TBOX12print_to_strEP6STRING(void);

/* Symbol: _Z13remove_edgeptP6EDGEPT */
/* Demangled: remove_edgept(EDGEPT*) */
int _Z13remove_edgeptP6EDGEPT(void);

/* Symbol: _ZN9tesseract7Textord15make_blob_wordsEP6TO_ROW6FCOORD */
/* Demangled: tesseract::Textord::make_blob_words(TO_ROW*, FCOORD) */
int _ZN9tesseract7Textord15make_blob_wordsEP6TO_ROW6FCOORD(void);

/* Symbol: _ZN19OrientationDetector11detect_blobEP16BLOB_CHOICE_LIST */
/* Demangled: OrientationDetector::detect_blob(BLOB_CHOICE_LIST*) */
int _ZN19OrientationDetector11detect_blobEP16BLOB_CHOICE_LIST(void);

/* Symbol: _ZN6REJMAP19recoverable_rejectsEv */
/* Demangled: REJMAP::recoverable_rejects() */
int _ZN6REJMAP19recoverable_rejectsEv(void);

/* Symbol: _ZN10UNICHARSET18UNICHAR_PROPERTIESC1Ev */
/* Demangled: UNICHARSET::UNICHAR_PROPERTIES::UNICHAR_PROPERTIES() */
int _ZN10UNICHARSET18UNICHAR_PROPERTIESC1Ev(void);

/* Symbol: _ZN9tesseract13TessLangModel19max_ood_shape_cost_E */
/* Demangled: tesseract::TessLangModel::max_ood_shape_cost_ */
extern void* _ZN9tesseract13TessLangModel19max_ood_shape_cost_E;

/* Symbol: _ZN9tesseract12ColPartition16BoundsWithoutBoxEP8BLOBNBOX */
/* Demangled: tesseract::ColPartition::BoundsWithoutBox(BLOBNBOX*) */
int _ZN9tesseract12ColPartition16BoundsWithoutBoxEP8BLOBNBOX(void);

/* Symbol: _Z22join_chopped_fragmentsP14C_OUTLINE_FRAGS0_ */
/* Demangled: join_chopped_fragments(C_OUTLINE_FRAG*, C_OUTLINE_FRAG*) */
int _Z22join_chopped_fragmentsP14C_OUTLINE_FRAGS0_(void);

/* Symbol: _ZN6BITS16C1Et */
/* Demangled: BITS16::BITS16(unsigned short) */
int _ZN6BITS16C1Et(void);

/* Symbol: _Z20box_next_pre_choppedP11BLOBNBOX_IT */
/* Demangled: box_next_pre_chopped(BLOBNBOX_IT*) */
int _Z20box_next_pre_choppedP11BLOBNBOX_IT(void);

/* Symbol: _ZN6MATRIX16IncreaseBandSizeEi */
/* Demangled: MATRIX::IncreaseBandSize(int) */
int _ZN6MATRIX16IncreaseBandSizeEi(void);

/* Symbol: _ZN9tesseract4Dict15set_hyphen_wordERK11WERD_CHOICERKNS_18DawgPositionVectorE */
/* Demangled: tesseract::Dict::set_hyphen_word(WERD_CHOICE const&, tesseract::DawgPositionVector const&) */
int _ZN9tesseract4Dict15set_hyphen_wordERK11WERD_CHOICERKNS_18DawgPositionVectorE(void);

/* Symbol: _ZN13GenericVectorIlE7reserveEi */
/* Demangled: GenericVector<long>::reserve(int) */
int _ZN13GenericVectorIlE7reserveEi(void);

/* Symbol: _ZN9tesseract12DocumentData12SaveToBufferEP13GenericVectorIcE */
/* Demangled: tesseract::DocumentData::SaveToBuffer(GenericVector<char>*) */
int _ZN9tesseract12DocumentData12SaveToBufferEP13GenericVectorIcE(void);

/* Symbol: _Z16GetMatchColorForf */
/* Demangled: GetMatchColorFor(float) */
int _Z16GetMatchColorForf(void);

/* Symbol: _ZN13GenericVectorIN9tesseract11ShapeRatingEE5clearEv */
/* Demangled: GenericVector<tesseract::ShapeRating>::clear() */
int _ZN13GenericVectorIN9tesseract11ShapeRatingEE5clearEv(void);

/* Symbol: _ZN9tesseract7TabFind14DifferentSizesEii */
/* Demangled: tesseract::TabFind::DifferentSizes(int, int) */
int _ZN9tesseract7TabFind14DifferentSizesEii(void);

/* Symbol: gapmap_use_ends */
/* Demangled: gapmap_use_ends */
extern void* gapmap_use_ends;

/* Symbol: _ZN13GenericVectorIP11BLOB_CHOICEE9push_backES1_ */
/* Demangled: GenericVector<BLOB_CHOICE*>::push_back(BLOB_CHOICE*) */
int _ZN13GenericVectorIP11BLOB_CHOICEE9push_backES1_(void);

/* Symbol: _ZN13GenericVectorIP8WERD_RESE5clearEv */
/* Demangled: GenericVector<WERD_RES*>::clear() */
int _ZN13GenericVectorIP8WERD_RESE5clearEv(void);

/* Symbol: _ZN9tesseract9Tesseract17recog_pseudo_wordEP8PAGE_RESR4TBOX */
/* Demangled: tesseract::Tesseract::recog_pseudo_word(PAGE_RES*, TBOX&) */
int _ZN9tesseract9Tesseract17recog_pseudo_wordEP8PAGE_RESR4TBOX(void);

/* Symbol: _ZTVN9tesseract18CubeTessClassifierE */
/* Demangled: vtable for tesseract::CubeTessClassifier */
extern void* _ZTVN9tesseract18CubeTessClassifierE;

/* Symbol: _ZN6STRING11DiscardDataEv */
/* Demangled: STRING::DiscardData() */
int _ZN6STRING11DiscardDataEv(void);

/* Symbol: _ZN9tesseract20BlobToTrainingSampleERK5TBLOBbP20INT_FX_RESULT_STRUCTP13GenericVectorI18INT_FEATURE_STRUCTE */
/* Demangled: tesseract::BlobToTrainingSample(TBLOB const&, bool, INT_FX_RESULT_STRUCT*, GenericVector<INT_FEATURE_STRUCT>*) */
int _ZN9tesseract20BlobToTrainingSampleERK5TBLOBbP20INT_FX_RESULT_STRUCTP13GenericVectorI18INT_FEATURE_STRUCTE(void);

/* Symbol: _ZN9tesseract13MasterTrainerD1Ev */
/* Demangled: tesseract::MasterTrainer::~MasterTrainer() */
int _ZN9tesseract13MasterTrainerD1Ev(void);

/* Symbol: _ZN9tesseract6BBGridINS_10ColSegmentENS_16ColSegment_CLISTENS_15ColSegment_C_ITEE10InsertBBoxEbbPS1_ */
/* Demangled: tesseract::BBGrid<tesseract::ColSegment, tesseract::ColSegment_CLIST, tesseract::ColSegment_C_IT>::InsertBBox(bool, bool, tesseract::ColSegment*) */
int _ZN9tesseract6BBGridINS_10ColSegmentENS_16ColSegment_CLISTENS_15ColSegment_C_ITEE10InsertBBoxEbbPS1_(void);

/* Symbol: _ZN9tesseract9Tesseract15cube_word_pass1EP5BLOCKP3ROWP8WERD_RES */
/* Demangled: tesseract::Tesseract::cube_word_pass1(BLOCK*, ROW*, WERD_RES*) */
int _ZN9tesseract9Tesseract15cube_word_pass1EP5BLOCKP3ROWP8WERD_RES(void);

/* Symbol: _ZN9tesseract14ResultIteratorC1ERKNS_17LTRResultIteratorE */
/* Demangled: tesseract::ResultIterator::ResultIterator(tesseract::LTRResultIterator const&) */
int _ZN9tesseract14ResultIteratorC1ERKNS_17LTRResultIteratorE(void);

/* Symbol: _ZN3REJ14setrej_doc_rejEv */
/* Demangled: REJ::setrej_doc_rej() */
int _ZN3REJ14setrej_doc_rejEv(void);

/* Symbol: _ZN12KDTreeSearchC2EP6KDTREEPfi */
/* Demangled: KDTreeSearch::KDTreeSearch(KDTREE*, float*, int) */
int _ZN12KDTreeSearchC2EP6KDTREEPfi(void);

/* Symbol: _ZN9tesseract13MasterTrainerC2ENS_17NormalizationModeEbbi */
/* Demangled: tesseract::MasterTrainer::MasterTrainer(tesseract::NormalizationMode, bool, bool, int) */
int _ZN9tesseract13MasterTrainerC2ENS_17NormalizationModeEbbi(void);

/* Symbol: _ZN9tesseract11StrokeWidth13SetNeighboursEbbP8BLOBNBOX */
/* Demangled: tesseract::StrokeWidth::SetNeighbours(bool, bool, BLOBNBOX*) */
int _ZN9tesseract11StrokeWidth13SetNeighboursEbbP8BLOBNBOX(void);

/* Symbol: _ZNK13GenericVectorIN9tesseract7RowInfoEE4backEv */
/* Demangled: GenericVector<tesseract::RowInfo>::back() const */
int _ZNK13GenericVectorIN9tesseract7RowInfoEE4backEv(void);

/* Symbol: _ZN9tesseract5TFileC2Ev */
/* Demangled: tesseract::TFile::TFile() */
int _ZN9tesseract5TFileC2Ev(void);

/* Symbol: _ZN9tesseract14BaselineDetect24ComputeStraightBaselinesEb */
/* Demangled: tesseract::BaselineDetect::ComputeStraightBaselines(bool) */
int _ZN9tesseract14BaselineDetect24ComputeStraightBaselinesEb(void);

/* Symbol: _ZN9tesseract11TableFinder17HasLeaderAdjacentERKNS_12ColPartitionE */
/* Demangled: tesseract::TableFinder::HasLeaderAdjacent(tesseract::ColPartition const&) */
int _ZN9tesseract11TableFinder17HasLeaderAdjacentERKNS_12ColPartitionE(void);

/* Symbol: _ZN9tesseract11TessBaseAPI25ProcessPagesMultipageTiffEPKhjPKcS4_iPNS_18TessResultRendererEi */
/* Demangled: tesseract::TessBaseAPI::ProcessPagesMultipageTiff(unsigned char const*, unsigned int, char const*, char const*, int, tesseract::TessResultRenderer*, int) */
int _ZN9tesseract11TessBaseAPI25ProcessPagesMultipageTiffEPKhjPKcS4_iPNS_18TessResultRendererEi(void);

/* Symbol: _ZNK9tesseract12PageIterator5EmptyENS_17PageIteratorLevelE */
/* Demangled: tesseract::PageIterator::Empty(tesseract::PageIteratorLevel) const */
int _ZNK9tesseract12PageIterator5EmptyENS_17PageIteratorLevelE(void);

/* Symbol: _ZN4WERD5printEv */
/* Demangled: WERD::print() */
int _ZN4WERD5printEv(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract9ImageDataEE5clearEv */
/* Demangled: GenericVector<tesseract::ImageData*>::clear() */
int _ZN13GenericVectorIPN9tesseract9ImageDataEE5clearEv(void);

/* Symbol: _ZN5CLIST19internal_deep_clearEPFvPvE */
/* Demangled: CLIST::internal_deep_clear(void (*)(void*)) */
int _ZN5CLIST19internal_deep_clearEPFvPvE(void);

/* Symbol: _ZN9tesseract8Classify21ExtractIntGeoFeaturesERK5TBLOBRK20INT_FX_RESULT_STRUCT */
/* Demangled: tesseract::Classify::ExtractIntGeoFeatures(TBLOB const&, INT_FX_RESULT_STRUCT const&) */
int _ZN9tesseract8Classify21ExtractIntGeoFeaturesERK5TBLOBRK20INT_FX_RESULT_STRUCT(void);

/* Symbol: _ZNK9tesseract4Dict13default_dawgsEPNS_18DawgPositionVectorEb */
/* Demangled: tesseract::Dict::default_dawgs(tesseract::DawgPositionVector*, bool) const */
int _ZNK9tesseract4Dict13default_dawgsEPNS_18DawgPositionVectorEb(void);

/* Symbol: _ZN9tesseract13SortByBoxLeftINS_10ColSegmentEEEiPKvS3_ */
/* Demangled: int tesseract::SortByBoxLeft<tesseract::ColSegment>(void const*, void const*) */
int _ZN9tesseract13SortByBoxLeftINS_10ColSegmentEEEiPKvS3_(void);

/* Symbol: TessBaseAPIGetBoolVariable */
/* Demangled: TessBaseAPIGetBoolVariable */
int TessBaseAPIGetBoolVariable(void);

/* Symbol: TessPageIteratorBaseline */
/* Demangled: TessPageIteratorBaseline */
int TessPageIteratorBaseline(void);

/* Symbol: _ZN7SVMutex6UnlockEv */
/* Demangled: SVMutex::Unlock() */
int _ZN7SVMutex6UnlockEv(void);

/* Symbol: _ZN11WERD_CHOICE15set_blob_choiceEiiPK11BLOB_CHOICE */
/* Demangled: WERD_CHOICE::set_blob_choice(int, int, BLOB_CHOICE const*) */
int _ZN11WERD_CHOICE15set_blob_choiceEiiPK11BLOB_CHOICE(void);

/* Symbol: _ZN12UnicityTableIN9tesseract7FontSetEE9push_backES1_ */
/* Demangled: UnicityTable<tesseract::FontSet>::push_back(tesseract::FontSet) */
int _ZN12UnicityTableIN9tesseract7FontSetEE9push_backES1_(void);

/* Symbol: _ZN9tesseract6BBGridINS_10ColSegmentENS_16ColSegment_CLISTENS_15ColSegment_C_ITEED2Ev */
/* Demangled: tesseract::BBGrid<tesseract::ColSegment, tesseract::ColSegment_CLIST, tesseract::ColSegment_C_IT>::~BBGrid() */
int _ZN9tesseract6BBGridINS_10ColSegmentENS_16ColSegment_CLISTENS_15ColSegment_C_ITEED2Ev(void);

/* Symbol: _ZN9tesseract9Tesseract32SetupPageSegAndDetectOrientationENS_11PageSegModeEP10BLOCK_LISTPS0_P9OSResultsP13TO_BLOCK_LISTPP3PixSB_ */
/* Demangled: tesseract::Tesseract::SetupPageSegAndDetectOrientation(tesseract::PageSegMode, BLOCK_LIST*, tesseract::Tesseract*, OSResults*, TO_BLOCK_LIST*, Pix**, Pix**) */
int _ZN9tesseract9Tesseract32SetupPageSegAndDetectOrientationENS_11PageSegModeEP10BLOCK_LISTPS0_P9OSResultsP13TO_BLOCK_LISTPP3PixSB_(void);

/* Symbol: textord_show_parallel_rows */
/* Demangled: textord_show_parallel_rows */
extern void* textord_show_parallel_rows;

/* Symbol: _ZN9tesseract7TabFind16MarkVerticalTextEv */
/* Demangled: tesseract::TabFind::MarkVerticalText() */
int _ZN9tesseract7TabFind16MarkVerticalTextEv(void);

/* Symbol: _ZN9C_OUTLINE20RemoveSmallRecursiveEiP12C_OUTLINE_IT */
/* Demangled: C_OUTLINE::RemoveSmallRecursive(int, C_OUTLINE_IT*) */
int _ZN9C_OUTLINE20RemoveSmallRecursiveEiP12C_OUTLINE_IT(void);

/* Symbol: textord_parallel_baselines */
/* Demangled: textord_parallel_baselines */
extern void* textord_parallel_baselines;

/* Symbol: _ZN9tesseract11TessBaseAPI12GetTextlinesEbiPP4PixaPPiS5_ */
/* Demangled: tesseract::TessBaseAPI::GetTextlines(bool, int, Pixa**, int**, int**) */
int _ZN9tesseract11TessBaseAPI12GetTextlinesEbiPP4PixaPPiS5_(void);

/* Symbol: _ZNK9tesseract12PageIterator8GetImageENS_17PageIteratorLevelEiP3PixPiS4_ */
/* Demangled: tesseract::PageIterator::GetImage(tesseract::PageIteratorLevel, int, Pix*, int*, int*) const */
int _ZNK9tesseract12PageIterator8GetImageENS_17PageIteratorLevelEiP3PixPiS4_(void);

/* Symbol: _ZN9tesseract15TessPDFRenderer17GetPDFTextObjectsEPNS_11TessBaseAPIEdd */
/* Demangled: tesseract::TessPDFRenderer::GetPDFTextObjects(tesseract::TessBaseAPI*, double, double) */
int _ZN9tesseract15TessPDFRenderer17GetPDFTextObjectsEPNS_11TessBaseAPIEdd(void);

/* Symbol: _ZN9tesseract7TabFind14ReflectInYAxisEv */
/* Demangled: tesseract::TabFind::ReflectInYAxis() */
int _ZN9tesseract7TabFind14ReflectInYAxisEv(void);

/* Symbol: _ZN9tesseract9TabVector16GetSinglePartnerEv */
/* Demangled: tesseract::TabVector::GetSinglePartner() */
int _ZN9tesseract9TabVector16GetSinglePartnerEv(void);

/* Symbol: _ZN9tesseract7Wordrec31select_blob_to_split_from_fixptEP13GenericVectorI12DANGERR_INFOE */
/* Demangled: tesseract::Wordrec::select_blob_to_split_from_fixpt(GenericVector<DANGERR_INFO>*) */
int _ZN9tesseract7Wordrec31select_blob_to_split_from_fixptEP13GenericVectorI12DANGERR_INFOE(void);

/* Symbol: _ZN9tesseract14EquationDetect13CheckForSeed2ERK13GenericVectorIiEfPNS_12ColPartitionE */
/* Demangled: tesseract::EquationDetect::CheckForSeed2(GenericVector<int> const&, float, tesseract::ColPartition*) */
int _ZN9tesseract14EquationDetect13CheckForSeed2ERK13GenericVectorIiEfPNS_12ColPartitionE(void);

/* Symbol: _ZN9tesseract10CubeObject8WordCostEPKc */
/* Demangled: tesseract::CubeObject::WordCost(char const*) */
int _ZN9tesseract10CubeObject8WordCostEPKc(void);

/* Symbol: _Z7DoErroriPKc */
/* Demangled: DoError(int, char const*) */
int _Z7DoErroriPKc(void);

/* Symbol: _ZN9tesseract4Bmp820LoadFromCharDumpFileEPPh */
/* Demangled: tesseract::Bmp8::LoadFromCharDumpFile(unsigned char**) */
int _ZN9tesseract4Bmp820LoadFromCharDumpFileEPPh(void);

/* Symbol: _Z10row_words2P8TO_BLOCKP6TO_ROWi6FCOORDh */
/* Demangled: row_words2(TO_BLOCK*, TO_ROW*, int, FCOORD, unsigned char) */
int _Z10row_words2P8TO_BLOCKP6TO_ROWi6FCOORDh(void);

/* Symbol: _ZNK5SPLIT5PrintEv */
/* Demangled: SPLIT::Print() const */
int _ZNK5SPLIT5PrintEv(void);

/* Symbol: _ZN9tesseract16FeatureChebyshevD0Ev */
/* Demangled: tesseract::FeatureChebyshev::~FeatureChebyshev() */
int _ZN9tesseract16FeatureChebyshevD0Ev(void);

/* Symbol: _ZN9tesseract16ColPartitionGrid14ReflectInYAxisEv */
/* Demangled: tesseract::ColPartitionGrid::ReflectInYAxis() */
int _ZN9tesseract16ColPartitionGrid14ReflectInYAxisEv(void);

/* Symbol: _ZN9tesseract30textord_tabfind_show_finaltabsE */
/* Demangled: tesseract::textord_tabfind_show_finaltabs */
extern void* _ZN9tesseract30textord_tabfind_show_finaltabsE;

/* Symbol: _ZN9tesseract11TessBaseAPI24FindLinesCreateBlockListEv */
/* Demangled: tesseract::TessBaseAPI::FindLinesCreateBlockList() */
int _ZN9tesseract11TessBaseAPI24FindLinesCreateBlockListEv(void);

/* Symbol: _ZN11PAGE_RES_IT17ResetWordIteratorEv */
/* Demangled: PAGE_RES_IT::ResetWordIterator() */
int _ZN11PAGE_RES_IT17ResetWordIteratorEv(void);

/* Symbol: _ZNK6STRINGeqERKS_ */
/* Demangled: STRING::operator==(STRING const&) const */
int _ZNK6STRINGeqERKS_(void);

/* Symbol: _ZNK9tesseract12ColPartition12SpacingEqualEii */
/* Demangled: tesseract::ColPartition::SpacingEqual(int, int) const */
int _ZNK9tesseract12ColPartition12SpacingEqualEii(void);

/* Symbol: _ZN9tesseract11StrokeWidth25SimplifyObviousNeighboursEP8BLOBNBOX */
/* Demangled: tesseract::StrokeWidth::SimplifyObviousNeighbours(BLOBNBOX*) */
int _ZN9tesseract11StrokeWidth25SimplifyObviousNeighboursEP8BLOBNBOX(void);

/* Symbol: _Z18compute_rows_pitchP8TO_BLOCKih */
/* Demangled: compute_rows_pitch(TO_BLOCK*, int, unsigned char) */
int _Z18compute_rows_pitchP8TO_BLOCKih(void);

/* Symbol: _ZN9tesseract9Tesseract24ClassifyBlobPlusOutlinesERK13GenericVectorIbERKS1_IP9C_OUTLINEEiP11PAGE_RES_ITP6C_BLOBP6STRING */
/* Demangled: tesseract::Tesseract::ClassifyBlobPlusOutlines(GenericVector<bool> const&, GenericVector<C_OUTLINE*> const&, int, PAGE_RES_IT*, C_BLOB*, STRING*) */
int _ZN9tesseract9Tesseract24ClassifyBlobPlusOutlinesERK13GenericVectorIbERKS1_IP9C_OUTLINEEiP11PAGE_RES_ITP6C_BLOBP6STRING(void);

/* Symbol: _ZN13GenericVectorIiE4moveEPS0_ */
/* Demangled: GenericVector<int>::move(GenericVector<int>*) */
int _ZN13GenericVectorIiE4moveEPS0_(void);

/* Symbol: _ZN7QSPLINE4stepEdd */
/* Demangled: QSPLINE::step(double, double) */
int _ZN7QSPLINE4stepEdd(void);

/* Symbol: _ZN9tesseract11CharSampSetC1Ev */
/* Demangled: tesseract::CharSampSet::CharSampSet() */
int _ZN9tesseract11CharSampSetC1Ev(void);

/* Symbol: _ZN13GenericVectorIP11BLOB_CHOICEE6insertES1_i */
/* Demangled: GenericVector<BLOB_CHOICE*>::insert(BLOB_CHOICE*, int) */
int _ZN13GenericVectorIP11BLOB_CHOICEE6insertES1_i(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract9BoolParamEE5clearEv */
/* Demangled: GenericVector<tesseract::BoolParam*>::clear() */
int _ZN13GenericVectorIPN9tesseract9BoolParamEE5clearEv(void);

/* Symbol: _ZN9tesseract4Bmp820LoadFromCharDumpFileEPNS_10CachedFileE */
/* Demangled: tesseract::Bmp8::LoadFromCharDumpFile(tesseract::CachedFile*) */
int _ZN9tesseract4Bmp820LoadFromCharDumpFileEPNS_10CachedFileE(void);

/* Symbol: _ZN9tesseract19DiscardUnusedModelsERK13GenericVectorINS_19RowScratchRegistersEEPNS_15ParagraphTheoryE */
/* Demangled: tesseract::DiscardUnusedModels(GenericVector<tesseract::RowScratchRegisters> const&, tesseract::ParagraphTheory*) */
int _ZN9tesseract19DiscardUnusedModelsERK13GenericVectorINS_19RowScratchRegistersEEPNS_15ParagraphTheoryE(void);

/* Symbol: _ZNK5TBLOB12CollectEdgesERK4TBOXPS0_P4LLSQP13GenericVectorIS6_IiEES9_ */
/* Demangled: TBLOB::CollectEdges(TBOX const&, TBOX*, LLSQ*, GenericVector<GenericVector<int> >*, GenericVector<GenericVector<int> >*) const */
int _ZNK5TBLOB12CollectEdgesERK4TBOXPS0_P4LLSQP13GenericVectorIS6_IiEES9_(void);

/* Symbol: _ZN9tesseract9CubeUtils15IsCaseInvariantEPKiPNS_7CharSetE */
/* Demangled: tesseract::CubeUtils::IsCaseInvariant(int const*, tesseract::CharSet*) */
int _ZN9tesseract9CubeUtils15IsCaseInvariantEPKiPNS_7CharSetE(void);

/* Symbol: _ZN9tesseract13WordSizeModelD2Ev */
/* Demangled: tesseract::WordSizeModel::~WordSizeModel() */
int _ZN9tesseract13WordSizeModelD2Ev(void);

/* Symbol: _ZN14C_OUTLINE_FRAGaSERKS_ */
/* Demangled: C_OUTLINE_FRAG::operator=(C_OUTLINE_FRAG const&) */
int _ZN14C_OUTLINE_FRAGaSERKS_(void);

/* Symbol: _ZN9tesseract12WordUnigramsD1Ev */
/* Demangled: tesseract::WordUnigrams::~WordUnigrams() */
int _ZN9tesseract12WordUnigramsD1Ev(void);

/* Symbol: _ZN4LLSQ3addERKS_ */
/* Demangled: LLSQ::add(LLSQ const&) */
int _ZN4LLSQ3addERKS_(void);

/* Symbol: _ZN9tesseract7TabFind11SortVectorsEv */
/* Demangled: tesseract::TabFind::SortVectors() */
int _ZN9tesseract7TabFind11SortVectorsEv(void);

/* Symbol: TessBaseAPIGetComponentImages1 */
/* Demangled: TessBaseAPIGetComponentImages1 */
int TessBaseAPIGetComponentImages1(void);

/* Symbol: _ZN9tesseract17TrainingSampleSet24ComputeCanonicalFeaturesEv */
/* Demangled: tesseract::TrainingSampleSet::ComputeCanonicalFeatures() */
int _ZN9tesseract17TrainingSampleSet24ComputeCanonicalFeaturesEv(void);

/* Symbol: _ZN9tesseract7WordrecC1Ev */
/* Demangled: tesseract::Wordrec::Wordrec() */
int _ZN9tesseract7WordrecC1Ev(void);

/* Symbol: _ZTTNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE */
/* Demangled: VTT for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern void* _ZTTNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE;

/* Symbol: _ZN9tesseract14ChoiceIteratorD1Ev */
/* Demangled: tesseract::ChoiceIterator::~ChoiceIterator() */
int _ZN9tesseract14ChoiceIteratorD1Ev(void);

/* Symbol: _ZN9tesseract16FloatWordFeature13SortByXBucketEPKvS2_ */
/* Demangled: tesseract::FloatWordFeature::SortByXBucket(void const*, void const*) */
int _ZN9tesseract16FloatWordFeature13SortByXBucketEPKvS2_(void);

/* Symbol: _ZN9tesseract12ColumnFinder19GridSplitPartitionsEv */
/* Demangled: tesseract::ColumnFinder::GridSplitPartitions() */
int _ZN9tesseract12ColumnFinder19GridSplitPartitionsEv(void);

/* Symbol: _ZN9tesseract7Wordrec16program_editdownEi */
/* Demangled: tesseract::Wordrec::program_editdown(int) */
int _ZN9tesseract7Wordrec16program_editdownEi(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract15FontSpacingInfoEE7reserveEi */
/* Demangled: GenericVector<tesseract::FontSpacingInfo*>::reserve(int) */
int _ZN13GenericVectorIPN9tesseract15FontSpacingInfoEE7reserveEi(void);

/* Symbol: _ZN9tesseract8Classify19ExtractPicoFeaturesEP5TBLOB */
/* Demangled: tesseract::Classify::ExtractPicoFeatures(TBLOB*) */
int _ZN9tesseract8Classify19ExtractPicoFeaturesEP5TBLOB(void);

/* Symbol: _ZN5TWERD10MergeBlobsEii */
/* Demangled: TWERD::MergeBlobs(int, int) */
int _ZN5TWERD10MergeBlobsEii(void);

/* Symbol: _ZNK8TESSLINE15FindBestStartPtEv */
/* Demangled: TESSLINE::FindBestStartPt() const */
int _ZNK8TESSLINE15FindBestStartPtEv(void);

/* Symbol: _ZN9C_OUTLINE11FakeOutlineERK4TBOXP14C_OUTLINE_LIST */
/* Demangled: C_OUTLINE::FakeOutline(TBOX const&, C_OUTLINE_LIST*) */
int _ZN9C_OUTLINE11FakeOutlineERK4TBOXP14C_OUTLINE_LIST(void);

/* Symbol: _ZNSt3__16vectorIPN9tesseract6NeuronENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_ */
/* Demangled: void std::__1::vector<tesseract::Neuron*, std::__1::allocator<tesseract::Neuron*> >::__push_back_slow_path<tesseract::Neuron*>(tesseract::Neuron*&&) */
int _ZNSt3__16vectorIPN9tesseract6NeuronENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_(void);

/* Symbol: _ZN9tesseract8GridBaseC2EiRK6ICOORDS3_ */
/* Demangled: tesseract::GridBase::GridBase(int, ICOORD const&, ICOORD const&) */
int _ZN9tesseract8GridBaseC2EiRK6ICOORDS3_(void);

/* Symbol: _ZN9tesseract12ColumnFinder13ReflectForRtlEP8TO_BLOCKP13BLOBNBOX_LIST */
/* Demangled: tesseract::ColumnFinder::ReflectForRtl(TO_BLOCK*, BLOBNBOX_LIST*) */
int _ZN9tesseract12ColumnFinder13ReflectForRtlEP8TO_BLOCKP13BLOBNBOX_LIST(void);

/* Symbol: _ZN9tesseract11TessBaseAPI19GetThresholdedImageEv */
/* Demangled: tesseract::TessBaseAPI::GetThresholdedImage() */
int _ZN9tesseract11TessBaseAPI19GetThresholdedImageEv(void);

/* Symbol: TessBaseAPIGetAvailableLanguagesAsVector */
/* Demangled: TessBaseAPIGetAvailableLanguagesAsVector */
int TessBaseAPIGetAvailableLanguagesAsVector(void);

/* Symbol: TessBaseAPIGetUTF8Text */
/* Demangled: TessBaseAPIGetUTF8Text */
int TessBaseAPIGetUTF8Text(void);

/* Symbol: _ZN13GenericVectorIP16BLOB_CHOICE_LISTE5clearEv */
/* Demangled: GenericVector<BLOB_CHOICE_LIST*>::clear() */
int _ZN13GenericVectorIP16BLOB_CHOICE_LISTE5clearEv(void);

/* Symbol: _ZN9tesseract7Wordrec13classify_blobEP5TBLOBPKc5C_COLP12BlamerBundle */
/* Demangled: tesseract::Wordrec::classify_blob(TBLOB*, char const*, C_COL, BlamerBundle*) */
int _ZN9tesseract7Wordrec13classify_blobEP5TBLOBPKc5C_COLP12BlamerBundle(void);

/* Symbol: _Z16STRING_c1_zapperPv */
/* Demangled: STRING_c1_zapper(void*) */
int _Z16STRING_c1_zapperPv(void);

/* Symbol: _ZN13GenericVectorIN9tesseract9KDPairIncIfP11TEMPCLUSTEREEE9push_backES4_ */
/* Demangled: GenericVector<tesseract::KDPairInc<float, TEMPCLUSTER*> >::push_back(tesseract::KDPairInc<float, TEMPCLUSTER*>) */
int _ZN13GenericVectorIN9tesseract9KDPairIncIfP11TEMPCLUSTEREEE9push_backES4_(void);

/* Symbol: _ZNK9tesseract8CharSamp17Save2CharDumpFileEP7__sFILE */
/* Demangled: tesseract::CharSamp::Save2CharDumpFile(__sFILE*) const */
int _ZNK9tesseract8CharSamp17Save2CharDumpFileEP7__sFILE(void);

/* Symbol: _ZN9tesseract9CubeUtils11UTF32ToUTF8EPKiPNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE */
/* Demangled: tesseract::CubeUtils::UTF32ToUTF8(int const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN9tesseract9CubeUtils11UTF32ToUTF8EPKiPNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void);

/* Symbol: _ZNSt3__112__hash_tableIPN9tesseract12ColPartitionENS1_7PtrHashIS2_EENS_8equal_toIS3_EENS_9allocatorIS3_EEE5clearEv */
/* Demangled: std::__1::__hash_table<tesseract::ColPartition*, tesseract::PtrHash<tesseract::ColPartition>, std::__1::equal_to<tesseract::ColPartition*>, std::__1::allocator<tesseract::ColPartition*> >::clear() */
int _ZNSt3__112__hash_tableIPN9tesseract12ColPartitionENS1_7PtrHashIS2_EENS_8equal_toIS3_EENS_9allocatorIS3_EEE5clearEv(void);

/* Symbol: _ZNK14ParagraphModel13ValidBodyLineEiiii */
/* Demangled: ParagraphModel::ValidBodyLine(int, int, int, int) const */
int _ZNK14ParagraphModel13ValidBodyLineEiiii(void);

/* Symbol: _ZN3REJ17setrej_postNN_1IlEv */
/* Demangled: REJ::setrej_postNN_1Il() */
int _ZN3REJ17setrej_postNN_1IlEv(void);

/* Symbol: _ZN12BlamerBundle24SetupCorrectSegmentationEPK5TWERDb */
/* Demangled: BlamerBundle::SetupCorrectSegmentation(TWERD const*, bool) */
int _ZN12BlamerBundle24SetupCorrectSegmentationEPK5TWERDb(void);

/* Symbol: _ZN13GenericVectorIN9tesseract7FontSetEE7reserveEi */
/* Demangled: GenericVector<tesseract::FontSet>::reserve(int) */
int _ZN13GenericVectorIN9tesseract7FontSetEE7reserveEi(void);

/* Symbol: _ZN9tesseract14IntFeatureDist4InitEPKNS_13IntFeatureMapE */
/* Demangled: tesseract::IntFeatureDist::Init(tesseract::IntFeatureMap const*) */
int _ZN9tesseract14IntFeatureDist4InitEPKNS_13IntFeatureMapE(void);

/* Symbol: _ZN9tesseract29HybridNeuralNetCharClassifier5TrainEPNS_8CharSampEi */
/* Demangled: tesseract::HybridNeuralNetCharClassifier::Train(tesseract::CharSamp*, int) */
int _ZN9tesseract29HybridNeuralNetCharClassifier5TrainEPNS_8CharSampEi(void);

/* Symbol: _ZTV29_TessMemberResultCallback_0_1ILb0EvN9tesseract16DocQualCallbacksEiE */
/* Demangled: vtable for _TessMemberResultCallback_0_1<false, void, tesseract::DocQualCallbacks, int> */
extern void* _ZTV29_TessMemberResultCallback_0_1ILb0EvN9tesseract16DocQualCallbacksEiE;

/* Symbol: _ZNK9tesseract17LTRResultIterator17EquivalentToTruthEPKc */
/* Demangled: tesseract::LTRResultIterator::EquivalentToTruth(char const*) const */
int _ZNK9tesseract17LTRResultIterator17EquivalentToTruthEPKc(void);

/* Symbol: _ZN13GenericVectorIN9tesseract8IntervalEE5clearEv */
/* Demangled: GenericVector<tesseract::Interval>::clear() */
int _ZN13GenericVectorIN9tesseract8IntervalEE5clearEv(void);

/* Symbol: _ZN9tesseract10CachedFile3eofEv */
/* Demangled: tesseract::CachedFile::eof() */
int _ZN9tesseract10CachedFile3eofEv(void);

/* Symbol: _ZN9tesseract12ColPartition11PrintColorsEv */
/* Demangled: tesseract::ColPartition::PrintColors() */
int _ZN9tesseract12ColPartition11PrintColorsEv(void);

/* Symbol: TessBaseAPISetVariable */
/* Demangled: TessBaseAPISetVariable */
int TessBaseAPISetVariable(void);

/* Symbol: _ZNK9tesseract8Classify16ShapeIDToClassIDEi */
/* Demangled: tesseract::Classify::ShapeIDToClassID(int) const */
int _ZNK9tesseract8Classify16ShapeIDToClassIDEi(void);

/* Symbol: _ZN9tesseract12ColPartition14SmoothSpacingsEiiPNS_17ColPartition_LISTE */
/* Demangled: tesseract::ColPartition::SmoothSpacings(int, int, tesseract::ColPartition_LIST*) */
int _ZN9tesseract12ColPartition14SmoothSpacingsEiiPNS_17ColPartition_LISTE(void);

/* Symbol: TessResultIteratorSymbolIsSubscript */
/* Demangled: TessResultIteratorSymbolIsSubscript */
int TessResultIteratorSymbolIsSubscript(void);

/* Symbol: _ZN12BlamerBundle16SetRejectedTruthEv */
/* Demangled: BlamerBundle::SetRejectedTruth() */
int _ZN12BlamerBundle16SetRejectedTruthEv(void);

/* Symbol: _ZN9tesseract21ConvNetCharClassifier6SetNetEPNS_9NeuralNetE */
/* Demangled: tesseract::ConvNetCharClassifier::SetNet(tesseract::NeuralNet*) */
int _ZN9tesseract21ConvNetCharClassifier6SetNetEPNS_9NeuralNetE(void);

/* Symbol: _ZTVN9tesseract11WordAltListE */
/* Demangled: vtable for tesseract::WordAltList */
extern void* _ZTVN9tesseract11WordAltListE;

/* Symbol: textord_overlap_x */
/* Demangled: textord_overlap_x */
extern void* textord_overlap_x;

/* Symbol: _ZN10POLY_BLOCKC2ERK4TBOX13PolyBlockType */
/* Demangled: POLY_BLOCK::POLY_BLOCK(TBOX const&, PolyBlockType) */
int _ZN10POLY_BLOCKC2ERK4TBOX13PolyBlockType(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract11BaselineRowEE20delete_data_pointersEv */
/* Demangled: GenericVector<tesseract::BaselineRow*>::delete_data_pointers() */
int _ZN13GenericVectorIPN9tesseract11BaselineRowEE20delete_data_pointersEv(void);

/* Symbol: textord_words_min_minspace */
/* Demangled: textord_words_min_minspace */
extern void* textord_words_min_minspace;

/* Symbol: _ZN9tesseract19RightWordAttributesEPK10UNICHARSETPK11WERD_CHOICERK6STRINGPbS9_S9_ */
/* Demangled: tesseract::RightWordAttributes(UNICHARSET const*, WERD_CHOICE const*, STRING const&, bool*, bool*, bool*) */
int _ZN9tesseract19RightWordAttributesEPK10UNICHARSETPK11WERD_CHOICERK6STRINGPbS9_S9_(void);

/* Symbol: _Z14ConvertOutlineP8TESSLINE */
/* Demangled: ConvertOutline(TESSLINE*) */
int _Z14ConvertOutlineP8TESSLINE(void);

/* Symbol: _ZN9tesseract15CCNonTextDetect19BlobOverlapsTooMuchEP8BLOBNBOXi */
/* Demangled: tesseract::CCNonTextDetect::BlobOverlapsTooMuch(BLOBNBOX*, int) */
int _ZN9tesseract15CCNonTextDetect19BlobOverlapsTooMuchEP8BLOBNBOXi(void);

/* Symbol: _ZN9tesseract12ColPartition11LeftEdgeRunEPNS_15ColPartition_ITEP6ICOORDS4_ */
/* Demangled: tesseract::ColPartition::LeftEdgeRun(tesseract::ColPartition_IT*, ICOORD*, ICOORD*) */
int _ZN9tesseract12ColPartition11LeftEdgeRunEPNS_15ColPartition_ITEP6ICOORDS4_(void);

/* Symbol: _ZN13GenericVectorI12DANGERR_INFOE5clearEv */
/* Demangled: GenericVector<DANGERR_INFO>::clear() */
int _ZN13GenericVectorI12DANGERR_INFOE5clearEv(void);

/* Symbol: _ZN9tesseract9BitVector11lsb_eroded_E */
/* Demangled: tesseract::BitVector::lsb_eroded_ */
extern void* _ZN9tesseract9BitVector11lsb_eroded_E;

/* Symbol: _Z15NewMicroFeaturev */
/* Demangled: NewMicroFeature() */
int _Z15NewMicroFeaturev(void);

/* Symbol: _ZN9tesseract12ColPartition14ReflectInYAxisEv */
/* Demangled: tesseract::ColPartition::ReflectInYAxis() */
int _ZN9tesseract12ColPartition14ReflectInYAxisEv(void);

/* Symbol: textord_test_landscape */
/* Demangled: textord_test_landscape */
extern void* textord_test_landscape;

/* Symbol: _ZN9tesseract7Textord19block_spacing_statsEP8TO_BLOCKP6GAPMAPRhRsS6_ */
/* Demangled: tesseract::Textord::block_spacing_stats(TO_BLOCK*, GAPMAP*, unsigned char&, short&, short&) */
int _ZN9tesseract7Textord19block_spacing_statsEP8TO_BLOCKP6GAPMAPRhRsS6_(void);

/* Symbol: _ZN13GenericVectorI4TBOXE6insertES0_i */
/* Demangled: GenericVector<TBOX>::insert(TBOX, int) */
int _ZN13GenericVectorI4TBOXE6insertES0_i(void);

/* Symbol: _ZTV29_TessMemberResultCallback_0_1ILb0EbN9tesseract17TrainingSampleSetEPKNS0_14TrainingSampleEE */
/* Demangled: vtable for _TessMemberResultCallback_0_1<false, bool, tesseract::TrainingSampleSet, tesseract::TrainingSample const*> */
extern void* _ZTV29_TessMemberResultCallback_0_1ILb0EbN9tesseract17TrainingSampleSetEPKNS0_14TrainingSampleEE;

/* Symbol: _ZN9tesseract12ColPartition6AddBoxEP8BLOBNBOX */
/* Demangled: tesseract::ColPartition::AddBox(BLOBNBOX*) */
int _ZN9tesseract12ColPartition6AddBoxEP8BLOBNBOX(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract9BoolParamEE6removeEi */
/* Demangled: GenericVector<tesseract::BoolParam*>::remove(int) */
int _ZN13GenericVectorIPN9tesseract9BoolParamEE6removeEi(void);

/* Symbol: _ZNK10UNICHARMAP8containsEPKci */
/* Demangled: UNICHARMAP::contains(char const*, int) const */
int _ZNK10UNICHARMAP8containsEPKci(void);

/* Symbol: _ZN9tesseract12ErrorCounter12ComputeRatesERKNS0_6CountsEPd */
/* Demangled: tesseract::ErrorCounter::ComputeRates(tesseract::ErrorCounter::Counts const&, double*) */
int _ZN9tesseract12ErrorCounter12ComputeRatesERKNS0_6CountsEPd(void);

/* Symbol: _ZN9tesseract9TabVector3FitE6ICOORDb */
/* Demangled: tesseract::TabVector::Fit(ICOORD, bool) */
int _ZN9tesseract9TabVector3FitE6ICOORDb(void);

/* Symbol: _ZNK10UNICHARSET16contains_unicharEPKc */
/* Demangled: UNICHARSET::contains_unichar(char const*) const */
int _ZNK10UNICHARSET16contains_unicharEPKc(void);

/* Symbol: _ZN9tesseract9Tesseract17tess_add_doc_wordEP11WERD_CHOICE */
/* Demangled: tesseract::Tesseract::tess_add_doc_word(WERD_CHOICE*) */
int _ZN9tesseract9Tesseract17tess_add_doc_wordEP11WERD_CHOICE(void);

/* Symbol: _ZN9tesseract9Tesseract22digit_or_numeric_punctEP8WERD_RESi */
/* Demangled: tesseract::Tesseract::digit_or_numeric_punct(WERD_RES*, int) */
int _ZN9tesseract9Tesseract22digit_or_numeric_punctEP8WERD_RESi(void);

/* Symbol: _ZN9tesseract21ParagraphModelSmearer19CalculateOpenModelsEii */
/* Demangled: tesseract::ParagraphModelSmearer::CalculateOpenModels(int, int) */
int _ZN9tesseract21ParagraphModelSmearer19CalculateOpenModelsEii(void);

/* Symbol: _Z5poly2P6EDGEPTi */
/* Demangled: poly2(EDGEPT*, int) */
int _Z5poly2P6EDGEPTi(void);

/* Symbol: _ZN14IntegerMatcher5MatchEP16INT_CLASS_STRUCTPjS2_sPK18INT_FEATURE_STRUCTPN9tesseract13UnicharRatingEiib */
/* Demangled: IntegerMatcher::Match(INT_CLASS_STRUCT*, unsigned int*, unsigned int*, short, INT_FEATURE_STRUCT const*, tesseract::UnicharRating*, int, int, bool) */
int _ZN14IntegerMatcher5MatchEP16INT_CLASS_STRUCTPjS2_sPK18INT_FEATURE_STRUCTPN9tesseract13UnicharRatingEiib(void);

/* Symbol: _ZN9tesseract13MasterTrainer23TestClassifierOnSamplesENS_10CountTypesEibPNS_15ShapeClassifierEP6STRING */
/* Demangled: tesseract::MasterTrainer::TestClassifierOnSamples(tesseract::CountTypes, int, bool, tesseract::ShapeClassifier*, STRING*) */
int _ZN9tesseract13MasterTrainer23TestClassifierOnSamplesENS_10CountTypesEibPNS_15ShapeClassifierEP6STRING(void);

/* Symbol: _ZN9tesseract10BeamSearch17CreateWordAltListEPNS_12SearchObjectE */
/* Demangled: tesseract::BeamSearch::CreateWordAltList(tesseract::SearchObject*) */
int _ZN9tesseract10BeamSearch17CreateWordAltListEPNS_12SearchObjectE(void);

/* Symbol: _Z13complete_edgeP9CRACKEDGEP12C_OUTLINE_IT */
/* Demangled: complete_edge(CRACKEDGE*, C_OUTLINE_IT*) */
int _Z13complete_edgeP9CRACKEDGEP12C_OUTLINE_IT(void);

/* Symbol: textord_width_smooth_factor */
/* Demangled: textord_width_smooth_factor */
extern void* textord_width_smooth_factor;

/* Symbol: _ZN9tesseract11TessBaseAPI7VersionEv */
/* Demangled: tesseract::TessBaseAPI::Version() */
int _ZN9tesseract11TessBaseAPI7VersionEv(void);

/* Symbol: _ZN9tesseract21TesseractCubeCombiner23ComputeCombinerFeaturesERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEiPNS_10CubeObjectEPNS_11WordAltListEPNS1_6vectorIdNS5_IdEEEEPb */
/* Demangled: tesseract::TesseractCubeCombiner::ComputeCombinerFeatures(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, tesseract::CubeObject*, tesseract::WordAltList*, std::__1::vector<double, std::__1::allocator<double> >*, bool*) */
int _ZN9tesseract21TesseractCubeCombiner23ComputeCombinerFeaturesERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEiPNS_10CubeObjectEPNS_11WordAltListEPNS1_6vectorIdNS5_IdEEEEPb(void);

/* Symbol: _ZN6STRING11DeSerializeEbPN9tesseract5TFileE */
/* Demangled: STRING::DeSerialize(bool, tesseract::TFile*) */
int _ZN6STRING11DeSerializeEbPN9tesseract5TFileE(void);

/* Symbol: _ZN8PAGE_RESC2EbP10BLOCK_LISTPP11WERD_CHOICE */
/* Demangled: PAGE_RES::PAGE_RES(bool, BLOCK_LIST*, WERD_CHOICE**) */
int _ZN8PAGE_RESC2EbP10BLOCK_LISTPP11WERD_CHOICE(void);

/* Symbol: _ZN9tesseract7Textord14ignore_big_gapEP6TO_ROWiP6GAPMAPss */
/* Demangled: tesseract::Textord::ignore_big_gap(TO_ROW*, int, GAPMAP*, short, short) */
int _ZN9tesseract7Textord14ignore_big_gapEP6TO_ROWiP6GAPMAPss(void);

/* Symbol: _Z7tfscanfP7__sFILEPKcz */
/* Demangled: tfscanf(__sFILE*, char const*, ...) */
int _Z7tfscanfP7__sFILEPKcz(void);

/* Symbol: _ZN9tesseract13DocumentCache17GetPageRoundRobinEi */
/* Demangled: tesseract::DocumentCache::GetPageRoundRobin(int) */
int _ZN9tesseract13DocumentCache17GetPageRoundRobinEi(void);

/* Symbol: _Z10AlphaMatchPvS_ */
/* Demangled: AlphaMatch(void*, void*) */
int _Z10AlphaMatchPvS_(void);

/* Symbol: _ZNSt3__112__hash_tableIP8BLOBNBOXN9tesseract7PtrHashIS1_EENS_8equal_toIS2_EENS_9allocatorIS2_EEE5clearEv */
/* Demangled: std::__1::__hash_table<BLOBNBOX*, tesseract::PtrHash<BLOBNBOX>, std::__1::equal_to<BLOBNBOX*>, std::__1::allocator<BLOBNBOX*> >::clear() */
int _ZNSt3__112__hash_tableIP8BLOBNBOXN9tesseract7PtrHashIS1_EENS_8equal_toIS2_EENS_9allocatorIS2_EEE5clearEv(void);

/* Symbol: _ZNSt3__112__hash_tableIP8BLOBNBOXN9tesseract7PtrHashIS1_EENS_8equal_toIS2_EENS_9allocatorIS2_EEE6rehashEj */
/* Demangled: std::__1::__hash_table<BLOBNBOX*, tesseract::PtrHash<BLOBNBOX>, std::__1::equal_to<BLOBNBOX*>, std::__1::allocator<BLOBNBOX*> >::rehash(unsigned int) */
int _ZNSt3__112__hash_tableIP8BLOBNBOXN9tesseract7PtrHashIS1_EENS_8equal_toIS2_EENS_9allocatorIS2_EEE6rehashEj(void);

/* Symbol: TessBaseAPIClearPersistentCache */
/* Demangled: TessBaseAPIClearPersistentCache */
int TessBaseAPIClearPersistentCache(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract14AmbigSpec_LISTEE20delete_data_pointersEv */
/* Demangled: GenericVector<tesseract::AmbigSpec_LIST*>::delete_data_pointers() */
int _ZN13GenericVectorIPN9tesseract14AmbigSpec_LISTEE20delete_data_pointersEv(void);

/* Symbol: _ZNK10UNICHARMAP8containsEPKc */
/* Demangled: UNICHARMAP::contains(char const*) const */
int _ZNK10UNICHARMAP8containsEPKc(void);

/* Symbol: _ZN9tesseract6NeuronD1Ev */
/* Demangled: tesseract::Neuron::~Neuron() */
int _ZN9tesseract6NeuronD1Ev(void);

/* Symbol: _ZN9tesseract9Tesseract17TrainedXheightFixEP8WERD_RESP5BLOCKP3ROW */
/* Demangled: tesseract::Tesseract::TrainedXheightFix(WERD_RES*, BLOCK*, ROW*) */
int _ZN9tesseract9Tesseract17TrainedXheightFixEP8WERD_RESP5BLOCKP3ROW(void);

/* Symbol: debug_fp */
/* Demangled: debug_fp */
extern void* debug_fp;

/* Symbol: _ZN13GenericVectorIN9tesseract14LineHypothesisEEpLERKS2_ */
/* Demangled: GenericVector<tesseract::LineHypothesis>::operator+=(GenericVector<tesseract::LineHypothesis> const&) */
int _ZN13GenericVectorIN9tesseract14LineHypothesisEEpLERKS2_(void);

/* Symbol: _ZN9tesseract8IndexMap11DeSerializeEbP7__sFILE */
/* Demangled: tesseract::IndexMap::DeSerialize(bool, __sFILE*) */
int _ZN9tesseract8IndexMap11DeSerializeEbP7__sFILE(void);

/* Symbol: _ZNK9tesseract10ShapeTable13SubsetUnicharEii */
/* Demangled: tesseract::ShapeTable::SubsetUnichar(int, int) const */
int _ZNK9tesseract10ShapeTable13SubsetUnicharEii(void);

/* Symbol: _ZN9tesseract10CachedFileD1Ev */
/* Demangled: tesseract::CachedFile::~CachedFile() */
int _ZN9tesseract10CachedFileD1Ev(void);

/* Symbol: _ZNSt3__1plIiNS_11char_traitsIiEENS_9allocatorIiEEEENS_12basic_stringIT_T0_T1_EERKS9_SB_ */
/* Demangled: std::__1::basic_string<int, std::__1::char_traits<int>, std::__1::allocator<int> > std::__1::operator+<int, std::__1::char_traits<int>, std::__1::allocator<int> >(std::__1::basic_string<int, std::__1::char_traits<int>, std::__1::allocator<int> > const&, std::__1::basic_string<int, std::__1::char_traits<int>, std::__1::allocator<int> > const&) */
int _ZNSt3__1plIiNS_11char_traitsIiEENS_9allocatorIiEEEENS_12basic_stringIT_T0_T1_EERKS9_SB_(void);

/* Symbol: _ZN9tesseract12ColPartition9MakeToRowEv */
/* Demangled: tesseract::ColPartition::MakeToRow() */
int _ZN9tesseract12ColPartition9MakeToRowEv(void);

/* Symbol: _ZN13GenericVectorIiE12init_to_sizeEii */
/* Demangled: GenericVector<int>::init_to_size(int, int) */
int _ZN13GenericVectorIiE12init_to_sizeEii(void);

/* Symbol: _ZN9tesseract9Tesseract26classify_word_and_languageEiP11PAGE_RES_ITPNS_8WordDataE */
/* Demangled: tesseract::Tesseract::classify_word_and_language(int, PAGE_RES_IT*, tesseract::WordData*) */
int _ZN9tesseract9Tesseract26classify_word_and_languageEiP11PAGE_RES_ITPNS_8WordDataE(void);

/* Symbol: _ZN9tesseract18UnicodeSpanSkipper9SkipAlphaEi */
/* Demangled: tesseract::UnicodeSpanSkipper::SkipAlpha(int) */
int _ZN9tesseract18UnicodeSpanSkipper9SkipAlphaEi(void);

/* Symbol: _ZNK9C_OUTLINE9perimeterEv */
/* Demangled: C_OUTLINE::perimeter() const */
int _ZNK9C_OUTLINE9perimeterEv(void);

/* Symbol: _ZN9tesseract29HybridNeuralNetCharClassifier8LoadNetsERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_ */
/* Demangled: tesseract::HybridNeuralNetCharClassifier::LoadNets(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN9tesseract29HybridNeuralNetCharClassifier8LoadNetsERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_(void);

/* Symbol: _ZN9tesseract15SortByUnicharIDI11BLOB_CHOICEEEiPKvS3_ */
/* Demangled: int tesseract::SortByUnicharID<BLOB_CHOICE>(void const*, void const*) */
int _ZN9tesseract15SortByUnicharIDI11BLOB_CHOICEEEiPKvS3_(void);

/* Symbol: _ZN9tesseract10CubeObject13RecognizeCharEv */
/* Demangled: tesseract::CubeObject::RecognizeChar() */
int _ZN9tesseract10CubeObject13RecognizeCharEv(void);

/* Symbol: _ZNK9tesseract17TrainingSampleSet9GetSampleEi */
/* Demangled: tesseract::TrainingSampleSet::GetSample(int) const */
int _ZNK9tesseract17TrainingSampleSet9GetSampleEi(void);

/* Symbol: _ZN9tesseract15StructuredTable29CalculateCellFilledPercentageEii */
/* Demangled: tesseract::StructuredTable::CalculateCellFilledPercentage(int, int) */
int _ZN9tesseract15StructuredTable29CalculateCellFilledPercentageEii(void);

/* Symbol: _ZN9tesseract15IsTerminalPunctEi */
/* Demangled: tesseract::IsTerminalPunct(int) */
int _ZN9tesseract15IsTerminalPunctEi(void);

/* Symbol: _ZN9tesseract14SampleIteratorD2Ev */
/* Demangled: tesseract::SampleIterator::~SampleIterator() */
int _ZN9tesseract14SampleIteratorD2Ev(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract15ColPartitionSetEE20delete_data_pointersEv */
/* Demangled: GenericVector<tesseract::ColPartitionSet*>::delete_data_pointers() */
int _ZN13GenericVectorIPN9tesseract15ColPartitionSetEE20delete_data_pointersEv(void);

/* Symbol: _ZN13GenericVectorIP5TBLOBE6insertES1_i */
/* Demangled: GenericVector<TBLOB*>::insert(TBLOB*, int) */
int _ZN13GenericVectorIP5TBLOBE6insertES1_i(void);

/* Symbol: _ZN9tesseract10kInputFileE */
/* Demangled: tesseract::kInputFile */
extern void* _ZN9tesseract10kInputFileE;

/* Symbol: TessPageIteratorIsAtFinalElement */
/* Demangled: TessPageIteratorIsAtFinalElement */
int TessPageIteratorIsAtFinalElement(void);

/* Symbol: _ZNK5CLIST6lengthEv */
/* Demangled: CLIST::length() const */
int _ZNK5CLIST6lengthEv(void);

/* Symbol: _ZNK13GenericVectorIiE9get_indexEi */
/* Demangled: GenericVector<int>::get_index(int) const */
int _ZNK13GenericVectorIiE9get_indexEi(void);

/* Symbol: _ZN9tesseract17TrainingSampleSet15UnicharDistanceERKNS_15UnicharAndFontsES3_bRKNS_13IntFeatureMapE */
/* Demangled: tesseract::TrainingSampleSet::UnicharDistance(tesseract::UnicharAndFonts const&, tesseract::UnicharAndFonts const&, bool, tesseract::IntFeatureMap const&) */
int _ZN9tesseract17TrainingSampleSet15UnicharDistanceERKNS_15UnicharAndFontsES3_bRKNS_13IntFeatureMapE(void);

/* Symbol: _ZN9tesseract10ColSegmentD2Ev */
/* Demangled: tesseract::ColSegment::~ColSegment() */
int _ZN9tesseract10ColSegmentD2Ev(void);

/* Symbol: _ZNSt3__112__hash_tableIPN9tesseract12ColPartitionENS1_7PtrHashIS2_EENS_8equal_toIS3_EENS_9allocatorIS3_EEE6rehashEj */
/* Demangled: std::__1::__hash_table<tesseract::ColPartition*, tesseract::PtrHash<tesseract::ColPartition>, std::__1::equal_to<tesseract::ColPartition*>, std::__1::allocator<tesseract::ColPartition*> >::rehash(unsigned int) */
int _ZNSt3__112__hash_tableIPN9tesseract12ColPartitionENS1_7PtrHashIS2_EENS_8equal_toIS3_EENS_9allocatorIS3_EEE6rehashEj(void);

/* Symbol: _ZN9tesseract13BaselineBlock18FitBaselineSplinesEbbPNS_7TextordE */
/* Demangled: tesseract::BaselineBlock::FitBaselineSplines(bool, bool, tesseract::Textord*) */
int _ZN9tesseract13BaselineBlock18FitBaselineSplinesEbbPNS_7TextordE(void);

/* Symbol: _ZN7UNICHAR3endEPKci */
/* Demangled: UNICHAR::end(char const*, int) */
int _ZN7UNICHAR3endEPKci(void);

/* Symbol: _ZNK9tesseract12WordUnigrams4CostEPKiPNS_9LangModelEPNS_7CharSetE */
/* Demangled: tesseract::WordUnigrams::Cost(int const*, tesseract::LangModel*, tesseract::CharSet*) const */
int _ZNK9tesseract12WordUnigrams4CostEPKiPNS_9LangModelEPNS_7CharSetE(void);

/* Symbol: _ZN9tesseract21ConvNetCharClassifierD0Ev */
/* Demangled: tesseract::ConvNetCharClassifier::~ConvNetCharClassifier() */
int _ZN9tesseract21ConvNetCharClassifierD0Ev(void);

/* Symbol: _ZN9tesseract9TabVector23SetupPartnerConstraintsEv */
/* Demangled: tesseract::TabVector::SetupPartnerConstraints() */
int _ZN9tesseract9TabVector23SetupPartnerConstraintsEv(void);

/* Symbol: _ZN9tesseract6BBGridINS_11WordWithBoxENS_17WordWithBox_CLISTENS_16WordWithBox_C_ITEE10InsertBBoxEbbPS1_ */
/* Demangled: tesseract::BBGrid<tesseract::WordWithBox, tesseract::WordWithBox_CLIST, tesseract::WordWithBox_C_IT>::InsertBBox(bool, bool, tesseract::WordWithBox*) */
int _ZN9tesseract6BBGridINS_11WordWithBoxENS_17WordWithBox_CLISTENS_16WordWithBox_C_ITEE10InsertBBoxEbbPS1_(void);

/* Symbol: _ZN9tesseract19RowScratchRegisters28DiscardNonMatchingHypothesesERK17GenericVectorEqEqIPK14ParagraphModelE */
/* Demangled: tesseract::RowScratchRegisters::DiscardNonMatchingHypotheses(GenericVectorEqEq<ParagraphModel const*> const&) */
int _ZN9tesseract19RowScratchRegisters28DiscardNonMatchingHypothesesERK17GenericVectorEqEqIPK14ParagraphModelE(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract9TesseractEE9push_backES2_ */
/* Demangled: GenericVector<tesseract::Tesseract*>::push_back(tesseract::Tesseract*) */
int _ZN13GenericVectorIPN9tesseract9TesseractEE9push_backES2_(void);

/* Symbol: _Z4fix2P6EDGEPTi */
/* Demangled: fix2(EDGEPT*, int) */
int _Z4fix2P6EDGEPTi(void);

/* Symbol: _ZN11C_BLOB_LIST9deep_copyEPKS_PFP6C_BLOBPKS2_E */
/* Demangled: C_BLOB_LIST::deep_copy(C_BLOB_LIST const*, C_BLOB* (*)(C_BLOB const*)) */
int _ZN11C_BLOB_LIST9deep_copyEPKS_PFP6C_BLOBPKS2_E(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract11BaselineRowEE15double_the_sizeEv */
/* Demangled: GenericVector<tesseract::BaselineRow*>::double_the_size() */
int _ZN13GenericVectorIPN9tesseract11BaselineRowEE15double_the_sizeEv(void);

/* Symbol: _ZN9tesseract9ImageFind29TransferImagePartsToImageMaskERK6FCOORDPNS_16ColPartitionGridEP3Pix */
/* Demangled: tesseract::ImageFind::TransferImagePartsToImageMask(FCOORD const&, tesseract::ColPartitionGrid*, Pix*) */
int _ZN9tesseract9ImageFind29TransferImagePartsToImageMaskERK6FCOORDPNS_16ColPartitionGridEP3Pix(void);

/* Symbol: _ZN9tesseract18EquationDetectBaseD0Ev */
/* Demangled: tesseract::EquationDetectBase::~EquationDetectBase() */
int _ZN9tesseract18EquationDetectBaseD0Ev(void);

/* Symbol: textord_debug_baselines */
/* Demangled: textord_debug_baselines */
extern void* textord_debug_baselines;

/* Symbol: _ZNK9tesseract15StructuredTable10row_heightEi */
/* Demangled: tesseract::StructuredTable::row_height(int) const */
int _ZNK9tesseract15StructuredTable10row_heightEi(void);

/* Symbol: _ZN9tesseract12kOldVarsFileE */
/* Demangled: tesseract::kOldVarsFile */
extern void* _ZN9tesseract12kOldVarsFileE;

/* Symbol: _ZN9tesseract9Tesseract15CountMisfitTopsEP8WERD_RES */
/* Demangled: tesseract::Tesseract::CountMisfitTops(WERD_RES*) */
int _ZN9tesseract9Tesseract15CountMisfitTopsEP8WERD_RES(void);

/* Symbol: _ZNK9tesseract13IntFeatureMap20ComputeOffsetFeatureEii */
/* Demangled: tesseract::IntFeatureMap::ComputeOffsetFeature(int, int) const */
int _ZNK9tesseract13IntFeatureMap20ComputeOffsetFeatureEii(void);

/* Symbol: _ZN9tesseract14TrainingSample13kYShiftValuesE */
/* Demangled: tesseract::TrainingSample::kYShiftValues */
extern void* _ZN9tesseract14TrainingSample13kYShiftValuesE;

/* Symbol: _ZN9tesseract16ColPartitionGridC2EiRK6ICOORDS3_ */
/* Demangled: tesseract::ColPartitionGrid::ColPartitionGrid(int, ICOORD const&, ICOORD const&) */
int _ZN9tesseract16ColPartitionGridC2EiRK6ICOORDS3_(void);

/* Symbol: _ZNK9tesseract17LTRResultIterator18WordNormedUTF8TextEv */
/* Demangled: tesseract::LTRResultIterator::WordNormedUTF8Text() const */
int _ZNK9tesseract17LTRResultIterator18WordNormedUTF8TextEv(void);

/* Symbol: _ZN9tesseract21FirstWordWouldHaveFitERKNS_19RowScratchRegistersES2_ */
/* Demangled: tesseract::FirstWordWouldHaveFit(tesseract::RowScratchRegisters const&, tesseract::RowScratchRegisters const&) */
int _ZN9tesseract21FirstWordWouldHaveFitERKNS_19RowScratchRegistersES2_(void);

/* Symbol: _Z14ReadProtoStyleP7__sFILE */
/* Demangled: ReadProtoStyle(__sFILE*) */
int _Z14ReadProtoStyleP7__sFILE(void);

/* Symbol: TessBaseAPIDumpPGM */
/* Demangled: TessBaseAPIDumpPGM */
int TessBaseAPIDumpPGM(void);

/* Symbol: _ZNK9tesseract18CubeTessClassifier13GetShapeTableEv */
/* Demangled: tesseract::CubeTessClassifier::GetShapeTable() const */
int _ZNK9tesseract18CubeTessClassifier13GetShapeTableEv(void);

/* Symbol: _ZN9tesseract11TableFinder21DisplayColSegmentGridEP10ScrollViewPNS_6BBGridINS_10ColSegmentENS_16ColSegment_CLISTENS_15ColSegment_C_ITEEENS1_5ColorE */
/* Demangled: tesseract::TableFinder::DisplayColSegmentGrid(ScrollView*, tesseract::BBGrid<tesseract::ColSegment, tesseract::ColSegment_CLIST, tesseract::ColSegment_C_IT>*, ScrollView::Color) */
int _ZN9tesseract11TableFinder21DisplayColSegmentGridEP10ScrollViewPNS_6BBGridINS_10ColSegmentENS_16ColSegment_CLISTENS_15ColSegment_C_ITEEENS1_5ColorE(void);

/* Symbol: _ZN14C_OUTLINE_FRAGC1EPS_s */
/* Demangled: C_OUTLINE_FRAG::C_OUTLINE_FRAG(C_OUTLINE_FRAG*, short) */
int _ZN14C_OUTLINE_FRAGC1EPS_s(void);

/* Symbol: _ZNSt3__112__hash_tableIPN9tesseract11WordWithBoxENS1_7PtrHashIS2_EENS_8equal_toIS3_EENS_9allocatorIS3_EEE25__emplace_unique_key_argsIS3_JRKS3_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS3_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<tesseract::WordWithBox*, void*>*>, bool> std::__1::__hash_table<tesseract::WordWithBox*, tesseract::PtrHash<tesseract::WordWithBox>, std::__1::equal_to<tesseract::WordWithBox*>, std::__1::allocator<tesseract::WordWithBox*> >::__emplace_unique_key_args<tesseract::WordWithBox*, tesseract::WordWithBox* const&>(tesseract::WordWithBox* const&, tesseract::WordWithBox* const&) */
int _ZNSt3__112__hash_tableIPN9tesseract11WordWithBoxENS1_7PtrHashIS2_EENS_8equal_toIS3_EENS_9allocatorIS3_EEE25__emplace_unique_key_argsIS3_JRKS3_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS3_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN8WERD_RES11BothHyphensEii */
/* Demangled: WERD_RES::BothHyphens(int, int) */
int _ZN8WERD_RES11BothHyphensEii(void);

/* Symbol: _ZN15ELIST2_ITERATOR8backwardEv */
/* Demangled: ELIST2_ITERATOR::backward() */
int _ZN15ELIST2_ITERATOR8backwardEv(void);

/* Symbol: _ZN13GenericVectorI6STRINGE15double_the_sizeEv */
/* Demangled: GenericVector<STRING>::double_the_size() */
int _ZN13GenericVectorI6STRINGE15double_the_sizeEv(void);

/* Symbol: _ZN9tesseract13DocumentCacheD1Ev */
/* Demangled: tesseract::DocumentCache::~DocumentCache() */
int _ZN9tesseract13DocumentCacheD1Ev(void);

/* Symbol: devanagari_split_debuglevel */
/* Demangled: devanagari_split_debuglevel */
extern void* devanagari_split_debuglevel;

/* Symbol: _ZN9tesseract18TessResultRenderer8AddImageEPNS_11TessBaseAPIE */
/* Demangled: tesseract::TessResultRenderer::AddImage(tesseract::TessBaseAPI*) */
int _ZN9tesseract18TessResultRenderer8AddImageEPNS_11TessBaseAPIE(void);

/* Symbol: _ZN13GenericVectorIN9tesseract9NodeChildEE7reserveEi */
/* Demangled: GenericVector<tesseract::NodeChild>::reserve(int) */
int _ZN13GenericVectorIN9tesseract9NodeChildEE7reserveEi(void);

/* Symbol: _ZN9tesseract16ColPartitionGrid25FindOverlappingPartitionsERK4TBOXPKNS_12ColPartitionEPNS_18ColPartition_CLISTE */
/* Demangled: tesseract::ColPartitionGrid::FindOverlappingPartitions(TBOX const&, tesseract::ColPartition const*, tesseract::ColPartition_CLIST*) */
int _ZN9tesseract16ColPartitionGrid25FindOverlappingPartitionsERK4TBOXPKNS_12ColPartitionEPNS_18ColPartition_CLISTE(void);

/* Symbol: _Z10line_edgesssshPhPP9CRACKEDGES2_P12C_OUTLINE_IT */
/* Demangled: line_edges(short, short, short, unsigned char, unsigned char*, CRACKEDGE**, CRACKEDGE**, C_OUTLINE_IT*) */
int _Z10line_edgesssshPhPP9CRACKEDGES2_P12C_OUTLINE_IT(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract9TesseractEE5clearEv */
/* Demangled: GenericVector<tesseract::Tesseract*>::clear() */
int _ZN13GenericVectorIPN9tesseract9TesseractEE5clearEv(void);

/* Symbol: _ZN5STATS6smoothEi */
/* Demangled: STATS::smooth(int) */
int _ZN5STATS6smoothEi(void);

/* Symbol: _ZN9tesseract15TessdataManager16CombineDataFilesEPKcS2_ */
/* Demangled: tesseract::TessdataManager::CombineDataFiles(char const*, char const*) */
int _ZN9tesseract15TessdataManager16CombineDataFilesEPKcS2_(void);

/* Symbol: _ZN9tesseract8Classify19SetStaticClassifierEPNS_15ShapeClassifierE */
/* Demangled: tesseract::Classify::SetStaticClassifier(tesseract::ShapeClassifier*) */
int _ZN9tesseract8Classify19SetStaticClassifierEPNS_15ShapeClassifierE(void);

/* Symbol: _Z4MeanP9PROTOTYPEt */
/* Demangled: Mean(PROTOTYPE*, unsigned short) */
int _Z4MeanP9PROTOTYPEt(void);

/* Symbol: _ZN9tesseract7Textord21cleanup_nontext_blockEP5BLOCK */
/* Demangled: tesseract::Textord::cleanup_nontext_block(BLOCK*) */
int _ZN9tesseract7Textord21cleanup_nontext_blockEP5BLOCK(void);

/* Symbol: _ZN9tesseract7Textord12filter_blobsE6ICOORDP13TO_BLOCK_LISTh */
/* Demangled: tesseract::Textord::filter_blobs(ICOORD, TO_BLOCK_LIST*, unsigned char) */
int _ZN9tesseract7Textord12filter_blobsE6ICOORDP13TO_BLOCK_LISTh(void);

/* Symbol: _ZNK6DENORM12XHeightRangeEiRK10UNICHARSETRK4TBOXPfS6_S6_ */
/* Demangled: DENORM::XHeightRange(int, UNICHARSET const&, TBOX const&, float*, float*, float*) const */
int _ZNK6DENORM12XHeightRangeEiRK10UNICHARSETRK4TBOXPfS6_S6_(void);

/* Symbol: _ZN9tesseract14ResultIterator16StartOfParagraphERKNS_17LTRResultIteratorE */
/* Demangled: tesseract::ResultIterator::StartOfParagraph(tesseract::LTRResultIterator const&) */
int _ZN9tesseract14ResultIterator16StartOfParagraphERKNS_17LTRResultIteratorE(void);

/* Symbol: _ZN13GenericVectorIN9tesseract11ShapeRatingEE15double_the_sizeEv */
/* Demangled: GenericVector<tesseract::ShapeRating>::double_the_size() */
int _ZN13GenericVectorIN9tesseract11ShapeRatingEE15double_the_sizeEv(void);

/* Symbol: _ZN9tesseract12ColumnFinder18CorrectOrientationEP8TO_BLOCKbi */
/* Demangled: tesseract::ColumnFinder::CorrectOrientation(TO_BLOCK*, bool, int) */
int _ZN9tesseract12ColumnFinder18CorrectOrientationEP8TO_BLOCKbi(void);

/* Symbol: _ZN9tesseract12WordUnigramsC2Ev */
/* Demangled: tesseract::WordUnigrams::WordUnigrams() */
int _ZN9tesseract12WordUnigramsC2Ev(void);

/* Symbol: _ZN9tesseract11TableFinder30DisplayColPartitionConnectionsEP10ScrollViewPNS_16ColPartitionGridENS1_5ColorE */
/* Demangled: tesseract::TableFinder::DisplayColPartitionConnections(ScrollView*, tesseract::ColPartitionGrid*, ScrollView::Color) */
int _ZN9tesseract11TableFinder30DisplayColPartitionConnectionsEP10ScrollViewPNS_16ColPartitionGridENS1_5ColorE(void);

/* Symbol: _ZN9tesseract14AssociateUtils29kMaxFixedPitchCharAspectRatioE */
/* Demangled: tesseract::AssociateUtils::kMaxFixedPitchCharAspectRatio */
extern void* _ZN9tesseract14AssociateUtils29kMaxFixedPitchCharAspectRatioE;

/* Symbol: _ZNK9tesseract11TessBaseAPI7GetDawgEi */
/* Demangled: tesseract::TessBaseAPI::GetDawg(int) const */
int _ZNK9tesseract11TessBaseAPI7GetDawgEi(void);

/* Symbol: _ZN9tesseract9ImageDataC1EbP3Pix */
/* Demangled: tesseract::ImageData::ImageData(bool, Pix*) */
int _ZN9tesseract9ImageDataC1EbP3Pix(void);

/* Symbol: classify_training_file */
/* Demangled: classify_training_file */
extern void* classify_training_file;

/* Symbol: _ZN9tesseract9NeuralNetD1Ev */
/* Demangled: tesseract::NeuralNet::~NeuralNet() */
int _ZN9tesseract9NeuralNetD1Ev(void);

/* Symbol: _ZTVN9tesseract15CCNonTextDetectE */
/* Demangled: vtable for tesseract::CCNonTextDetect */
extern void* _ZTVN9tesseract15CCNonTextDetectE;

/* Symbol: _ZN9tesseract9Tesseract23ResetDocumentDictionaryEv */
/* Demangled: tesseract::Tesseract::ResetDocumentDictionary() */
int _ZN9tesseract9Tesseract23ResetDocumentDictionaryEv(void);

/* Symbol: _ZTV16GENERIC_2D_ARRAYIP16BLOB_CHOICE_LISTE */
/* Demangled: vtable for GENERIC_2D_ARRAY<BLOB_CHOICE_LIST*> */
extern void* _ZTV16GENERIC_2D_ARRAYIP16BLOB_CHOICE_LISTE;

/* Symbol: textord_max_pitch_iqr */
/* Demangled: textord_max_pitch_iqr */
extern void* textord_max_pitch_iqr;

/* Symbol: _ZN9tesseract9Tesseract15make_reject_mapEP8WERD_RESP3ROWs */
/* Demangled: tesseract::Tesseract::make_reject_map(WERD_RES*, ROW*, short) */
int _ZN9tesseract9Tesseract15make_reject_mapEP8WERD_RESP3ROWs(void);

/* Symbol: _ZN9tesseract15ShapeClassifier19BestShapeForUnicharERKNS_14TrainingSampleEP3PixiPNS_11ShapeRatingE */
/* Demangled: tesseract::ShapeClassifier::BestShapeForUnichar(tesseract::TrainingSample const&, Pix*, int, tesseract::ShapeRating*) */
int _ZN9tesseract15ShapeClassifier19BestShapeForUnicharERKNS_14TrainingSampleEP3PixiPNS_11ShapeRatingE(void);

/* Symbol: _ZNK13GenericVectorIPK14ParagraphModelE9get_indexES2_ */
/* Demangled: GenericVector<ParagraphModel const*>::get_index(ParagraphModel const*) const */
int _ZNK13GenericVectorIPK14ParagraphModelE9get_indexES2_(void);

/* Symbol: _ZN9tesseract17LTRResultIteratorD1Ev */
/* Demangled: tesseract::LTRResultIterator::~LTRResultIterator() */
int _ZN9tesseract17LTRResultIteratorD1Ev(void);

/* Symbol: _ZN9tesseract7Wordrec9dict_wordERK11WERD_CHOICE */
/* Demangled: tesseract::Wordrec::dict_word(WERD_CHOICE const&) */
int _ZN9tesseract7Wordrec9dict_wordERK11WERD_CHOICE(void);

/* Symbol: _ZN13GenericVectorIN9tesseract10DetLineFit10PointWidthEE9push_backES2_ */
/* Demangled: GenericVector<tesseract::DetLineFit::PointWidth>::push_back(tesseract::DetLineFit::PointWidth) */
int _ZN13GenericVectorIN9tesseract10DetLineFit10PointWidthEE9push_backES2_(void);

/* Symbol: _ZN9tesseract15TableRecognizer20FindLinesBoundingBoxEP4TBOX */
/* Demangled: tesseract::TableRecognizer::FindLinesBoundingBox(TBOX*) */
int _ZN9tesseract15TableRecognizer20FindLinesBoundingBoxEP4TBOX(void);

/* Symbol: _ZN14ScriptDetector11detect_blobEP16BLOB_CHOICE_LIST */
/* Demangled: ScriptDetector::detect_blob(BLOB_CHOICE_LIST*) */
int _ZN14ScriptDetector11detect_blobEP16BLOB_CHOICE_LIST(void);

/* Symbol: _ZNK9tesseract9ImageData8PreScaleEiiPfPiS2_P13GenericVectorI4TBOXE */
/* Demangled: tesseract::ImageData::PreScale(int, int, float*, int*, int*, GenericVector<TBOX>*) const */
int _ZNK9tesseract9ImageData8PreScaleEiiPfPiS2_P13GenericVectorI4TBOXE(void);

/* Symbol: _ZN9tesseract14ResultIterator4NextENS_17PageIteratorLevelE */
/* Demangled: tesseract::ResultIterator::Next(tesseract::PageIteratorLevel) */
int _ZN9tesseract14ResultIterator4NextENS_17PageIteratorLevelE(void);

/* Symbol: _ZN9tesseract14EquationDetectC2EPKcS2_ */
/* Demangled: tesseract::EquationDetect::EquationDetect(char const*, char const*) */
int _ZN9tesseract14EquationDetectC2EPKcS2_(void);

/* Symbol: _ZN13GenericVectorI17GenericVectorEqEqIPK14ParagraphModelEE9push_backES4_ */
/* Demangled: GenericVector<GenericVectorEqEq<ParagraphModel const*> >::push_back(GenericVectorEqEq<ParagraphModel const*>) */
int _ZN13GenericVectorI17GenericVectorEqEqIPK14ParagraphModelEE9push_backES4_(void);

/* Symbol: _ZN13GenericVectorIS_IN9tesseract24ParamsTrainingHypothesisEEE9push_backES2_ */
/* Demangled: GenericVector<GenericVector<tesseract::ParamsTrainingHypothesis> >::push_back(GenericVector<tesseract::ParamsTrainingHypothesis>) */
int _ZN13GenericVectorIS_IN9tesseract24ParamsTrainingHypothesisEEE9push_backES2_(void);

/* Symbol: _ZN9tesseract17CubeLineSegmenter9CrackLineEP3PixP3Boxi */
/* Demangled: tesseract::CubeLineSegmenter::CrackLine(Pix*, Box*, int) */
int _ZN9tesseract17CubeLineSegmenter9CrackLineEP3PixP3Boxi(void);

/* Symbol: _ZN9tesseract12SquishedDawg18read_squished_dawgEP7__sFILENS_8DawgTypeERK6STRING12PermuterTypei */
/* Demangled: tesseract::SquishedDawg::read_squished_dawg(__sFILE*, tesseract::DawgType, STRING const&, PermuterType, int) */
int _ZN9tesseract12SquishedDawg18read_squished_dawgEP7__sFILENS_8DawgTypeERK6STRING12PermuterTypei(void);

/* Symbol: _ZN9tesseract10GridSearchINS_10ColSegmentENS_16ColSegment_CLISTENS_15ColSegment_C_ITEE10RemoveBBoxEv */
/* Demangled: tesseract::GridSearch<tesseract::ColSegment, tesseract::ColSegment_CLIST, tesseract::ColSegment_C_IT>::RemoveBBox() */
int _ZN9tesseract10GridSearchINS_10ColSegmentENS_16ColSegment_CLISTENS_15ColSegment_C_ITEE10RemoveBBoxEv(void);

/* Symbol: _ZN9tesseract14AssociateUtils7kMinGapE */
/* Demangled: tesseract::AssociateUtils::kMinGap */
extern void* _ZN9tesseract14AssociateUtils7kMinGapE;

/* Symbol: Java_com_googlecode_tesseract_android_PageIterator_nativeBegin */
/* Demangled: Java_com_googlecode_tesseract_android_PageIterator_nativeBegin */
int Java_com_googlecode_tesseract_android_PageIterator_nativeBegin(void);

/* Symbol: _ZN6ICOORD11DeSerializeEbP7__sFILE */
/* Demangled: ICOORD::DeSerialize(bool, __sFILE*) */
int _ZN6ICOORD11DeSerializeEbP7__sFILE(void);

/* Symbol: _ZN9tesseract14WorkingPartSet21InsertCompletedBlocksEP10BLOCK_LISTP13TO_BLOCK_LIST */
/* Demangled: tesseract::WorkingPartSet::InsertCompletedBlocks(BLOCK_LIST*, TO_BLOCK_LIST*) */
int _ZN9tesseract14WorkingPartSet21InsertCompletedBlocksEP10BLOCK_LISTP13TO_BLOCK_LIST(void);

/* Symbol: _Z17check_pitch_sync2P11BLOBNBOX_ITsssP5STATSssfRsP12FPSEGPT_LISTss */
/* Demangled: check_pitch_sync2(BLOBNBOX_IT*, short, short, short, STATS*, short, short, float, short&, FPSEGPT_LIST*, short, short) */
int _Z17check_pitch_sync2P11BLOBNBOX_ITsssP5STATSssfRsP12FPSEGPT_LISTss(void);

/* Symbol: _ZN11BLOB_CHOICEC1ERKS_ */
/* Demangled: BLOB_CHOICE::BLOB_CHOICE(BLOB_CHOICE const&) */
int _ZN11BLOB_CHOICEC1ERKS_(void);

/* Symbol: _ZN8BLOBNBOX12really_mergeEPS_ */
/* Demangled: BLOBNBOX::really_merge(BLOBNBOX*) */
int _ZN8BLOBNBOX12really_mergeEPS_(void);

/* Symbol: _ZNK9tesseract17LTRResultIterator20WordIsFromDictionaryEv */
/* Demangled: tesseract::LTRResultIterator::WordIsFromDictionary() const */
int _ZNK9tesseract17LTRResultIterator20WordIsFromDictionaryEv(void);

/* Symbol: _ZNK9tesseract4Bmp819HorizontalHistogramEv */
/* Demangled: tesseract::Bmp8::HorizontalHistogram() const */
int _ZNK9tesseract4Bmp819HorizontalHistogramEv(void);

/* Symbol: _ZN9tesseract39textord_tabfind_show_initial_partitionsE */
/* Demangled: tesseract::textord_tabfind_show_initial_partitions */
extern void* _ZN9tesseract39textord_tabfind_show_initial_partitionsE;

/* Symbol: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeInit */
/* Demangled: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeInit */
int Java_com_googlecode_tesseract_android_TessBaseAPI_nativeInit(void);

/* Symbol: _ZNK7UNICHAR14const_iteratordeEv */
/* Demangled: UNICHAR::const_iterator::operator*() const */
int _ZNK7UNICHAR14const_iteratordeEv(void);

/* Symbol: _Z16DegreesOfFreedom12DISTRIBUTIONt */
/* Demangled: DegreesOfFreedom(DISTRIBUTION, unsigned short) */
int _Z16DegreesOfFreedom12DISTRIBUTIONt(void);

/* Symbol: _ZN9tesseract11StrokeWidth17DisplayDiacriticsEPKciiP8TO_BLOCK */
/* Demangled: tesseract::StrokeWidth::DisplayDiacritics(char const*, int, int, TO_BLOCK*) */
int _ZN9tesseract11StrokeWidth17DisplayDiacriticsEPKciiP8TO_BLOCK(void);

/* Symbol: _ZN9tesseract10GridSearchINS_10ColSegmentENS_16ColSegment_CLISTENS_15ColSegment_C_ITEE11CommonStartEii */
/* Demangled: tesseract::GridSearch<tesseract::ColSegment, tesseract::ColSegment_CLIST, tesseract::ColSegment_C_IT>::CommonStart(int, int) */
int _ZN9tesseract10GridSearchINS_10ColSegmentENS_16ColSegment_CLISTENS_15ColSegment_C_ITEE11CommonStartEii(void);

/* Symbol: _Z14make_rep_wordsP6TO_ROWP8TO_BLOCK */
/* Demangled: make_rep_words(TO_ROW*, TO_BLOCK*) */
int _Z14make_rep_wordsP6TO_ROWP8TO_BLOCK(void);

/* Symbol: _ZN9tesseract9Tesseract21SetupUniversalFontIdsEv */
/* Demangled: tesseract::Tesseract::SetupUniversalFontIds() */
int _ZN9tesseract9Tesseract21SetupUniversalFontIdsEv(void);

/* Symbol: _ZN6FCOORD9normaliseEv */
/* Demangled: FCOORD::normalise() */
int _ZN6FCOORD9normaliseEv(void);

/* Symbol: OutlineFeatDesc */
/* Demangled: OutlineFeatDesc */
extern void* OutlineFeatDesc;

/* Symbol: _ZN9tesseract15ColPartitionSet23AddToColumnSetsIfUniqueEP13GenericVectorIPS0_EP19TessResultCallback1IbiE */
/* Demangled: tesseract::ColPartitionSet::AddToColumnSetsIfUnique(GenericVector<tesseract::ColPartitionSet*>*, TessResultCallback1<bool, int>*) */
int _ZN9tesseract15ColPartitionSet23AddToColumnSetsIfUniqueEP13GenericVectorIPS0_EP19TessResultCallback1IbiE(void);

/* Symbol: _ZN9tesseract16ColPartitionGrid11ReTypeBlobsEP13BLOBNBOX_LIST */
/* Demangled: tesseract::ColPartitionGrid::ReTypeBlobs(BLOBNBOX_LIST*) */
int _ZN9tesseract16ColPartitionGrid11ReTypeBlobsEP13BLOBNBOX_LIST(void);

/* Symbol: _ZN9tesseract7TextordC2EPNS_8CCStructE */
/* Demangled: tesseract::Textord::Textord(tesseract::CCStruct*) */
int _ZN9tesseract7TextordC2EPNS_8CCStructE(void);

/* Symbol: _ZNK5STATS4meanEv */
/* Demangled: STATS::mean() const */
int _ZNK5STATS4meanEv(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract4DawgEE9push_backES2_ */
/* Demangled: GenericVector<tesseract::Dawg*>::push_back(tesseract::Dawg*) */
int _ZN13GenericVectorIPN9tesseract4DawgEE9push_backES2_(void);

/* Symbol: _ZN9tesseract14AssociateUtils19FixedPitchWidthCostEffbf */
/* Demangled: tesseract::AssociateUtils::FixedPitchWidthCost(float, float, bool, float) */
int _ZN9tesseract14AssociateUtils19FixedPitchWidthCostEffbf(void);

/* Symbol: _Z12free_big_memPv */
/* Demangled: free_big_mem(void*) */
int _Z12free_big_memPv(void);

/* Symbol: _Z5countP8list_rec */
/* Demangled: count(list_rec*) */
int _Z5countP8list_rec(void);

/* Symbol: _Z10Bucket8Forffi */
/* Demangled: Bucket8For(float, float, int) */
int _Z10Bucket8Forffi(void);

/* Symbol: _ZN9tesseract16ColPartitionGrid18FindFigureCaptionsEv */
/* Demangled: tesseract::ColPartitionGrid::FindFigureCaptions() */
int _ZN9tesseract16ColPartitionGrid18FindFigureCaptionsEv(void);

/* Symbol: _ZN13GenericVectorIN9tesseract16SegSearchPendingEE15double_the_sizeEv */
/* Demangled: GenericVector<tesseract::SegSearchPending>::double_the_size() */
int _ZN13GenericVectorIN9tesseract16SegSearchPendingEE15double_the_sizeEv(void);

/* Symbol: TessResultIteratorWordIsNumeric */
/* Demangled: TessResultIteratorWordIsNumeric */
int TessResultIteratorWordIsNumeric(void);

/* Symbol: _ZN13GenericVectorIP5TBLOBE6removeEi */
/* Demangled: GenericVector<TBLOB*>::remove(int) */
int _ZN13GenericVectorIP5TBLOBE6removeEi(void);

/* Symbol: _ZN4WERD25ConstructWerdWithNewBlobsEP11C_BLOB_LISTS1_ */
/* Demangled: WERD::ConstructWerdWithNewBlobs(C_BLOB_LIST*, C_BLOB_LIST*) */
int _ZN4WERD25ConstructWerdWithNewBlobsEP11C_BLOB_LISTS1_(void);

/* Symbol: TessBaseAPIRect */
/* Demangled: TessBaseAPIRect */
int TessBaseAPIRect(void);

/* Symbol: _ZN14IntegerMatcher17kSimilarityCenterE */
/* Demangled: IntegerMatcher::kSimilarityCenter */
extern void* _ZN14IntegerMatcher17kSimilarityCenterE;

/* Symbol: _ZN9tesseract9CubeUtils17PixFromCharSampleEPNS_8CharSampE */
/* Demangled: tesseract::CubeUtils::PixFromCharSample(tesseract::CharSamp*) */
int _ZN9tesseract9CubeUtils17PixFromCharSampleEPNS_8CharSampE(void);

/* Symbol: edges_childarea */
/* Demangled: edges_childarea */
extern void* edges_childarea;

/* Symbol: textord_test_x */
/* Demangled: textord_test_x */
extern void* textord_test_x;

/* Symbol: _ZN9tesseract11TableFinder22FilterParagraphEndingsEv */
/* Demangled: tesseract::TableFinder::FilterParagraphEndings() */
int _ZN9tesseract11TableFinder22FilterParagraphEndingsEv(void);

/* Symbol: _ZN9tesseract15StructuredTable16CountFilledCellsEiiii */
/* Demangled: tesseract::StructuredTable::CountFilledCells(int, int, int, int) */
int _ZN9tesseract15StructuredTable16CountFilledCellsEiiii(void);

/* Symbol: _ZNK10UNICHARSET4stepEPKc */
/* Demangled: UNICHARSET::step(char const*) const */
int _ZNK10UNICHARSET4stepEPKc(void);

/* Symbol: _Z22OptimumNumberOfBucketsj */
/* Demangled: OptimumNumberOfBuckets(unsigned int) */
int _Z22OptimumNumberOfBucketsj(void);

/* Symbol: textord_test_y */
/* Demangled: textord_test_y */
extern void* textord_test_y;

/* Symbol: _Z15WERD_RES_zapperP10ELIST_LINK */
/* Demangled: WERD_RES_zapper(ELIST_LINK*) */
int _Z15WERD_RES_zapperP10ELIST_LINK(void);

/* Symbol: _ZN9tesseract4Trie23get_reverse_policy_nameENS0_16RTLReversePolicyE */
/* Demangled: tesseract::Trie::get_reverse_policy_name(tesseract::Trie::RTLReversePolicy) */
int _ZN9tesseract4Trie23get_reverse_policy_nameENS0_16RTLReversePolicyE(void);

/* Symbol: _ZN9tesseract6NeuronC2Ev */
/* Demangled: tesseract::Neuron::Neuron() */
int _ZN9tesseract6NeuronC2Ev(void);

/* Symbol: _Z11IndependentP10PARAM_DESCsPff */
/* Demangled: Independent(PARAM_DESC*, short, float*, float) */
int _Z11IndependentP10PARAM_DESCsPff(void);

/* Symbol: _ZN9tesseract29HybridNeuralNetCharClassifier7RunNetsEPNS_8CharSampE */
/* Demangled: tesseract::HybridNeuralNetCharClassifier::RunNets(tesseract::CharSamp*) */
int _ZN9tesseract29HybridNeuralNetCharClassifier7RunNetsEPNS_8CharSampE(void);

/* Symbol: _ZNK9tesseract13LanguageModel27SetTopParentLowerUpperDigitEPNS_18LanguageModelStateE */
/* Demangled: tesseract::LanguageModel::SetTopParentLowerUpperDigit(tesseract::LanguageModelState*) const */
int _ZNK9tesseract13LanguageModel27SetTopParentLowerUpperDigitEPNS_18LanguageModelStateE(void);

/* Symbol: TessBaseAPIFindLinesCreateBlockList */
/* Demangled: TessBaseAPIFindLinesCreateBlockList */
int TessBaseAPIFindLinesCreateBlockList(void);

/* Symbol: TessBaseAPIGetLoadedLanguagesAsVector */
/* Demangled: TessBaseAPIGetLoadedLanguagesAsVector */
int TessBaseAPIGetLoadedLanguagesAsVector(void);

/* Symbol: _ZN9tesseract11CharAltListC2EPKNS_7CharSetEi */
/* Demangled: tesseract::CharAltList::CharAltList(tesseract::CharSet const*, int) */
int _ZN9tesseract11CharAltListC2EPKNS_7CharSetEi(void);

/* Symbol: _ZN9tesseract15ColPartitionSet12SpanningTypeEiiiiiiiPiS1_S1_ */
/* Demangled: tesseract::ColPartitionSet::SpanningType(int, int, int, int, int, int, int, int*, int*, int*) */
int _ZN9tesseract15ColPartitionSet12SpanningTypeEiiiiiiiPiS1_S1_(void);

/* Symbol: _ZNK13GenericVectorIiE9SerializeEP7__sFILE */
/* Demangled: GenericVector<int>::Serialize(__sFILE*) const */
int _ZNK13GenericVectorIiE9SerializeEP7__sFILE(void);

/* Symbol: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeSetInputName */
/* Demangled: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeSetInputName */
int Java_com_googlecode_tesseract_android_TessBaseAPI_nativeSetInputName(void);

/* Symbol: _ZN9tesseract12ColPartition17SpecialBlobsCountE19BlobSpecialTextType */
/* Demangled: tesseract::ColPartition::SpecialBlobsCount(BlobSpecialTextType) */
int _ZN9tesseract12ColPartition17SpecialBlobsCountE19BlobSpecialTextType(void);

/* Symbol: _ZN9tesseract11WordFeature11ComputeSizeERK13GenericVectorIS0_EPiS5_ */
/* Demangled: tesseract::WordFeature::ComputeSize(GenericVector<tesseract::WordFeature> const&, int*, int*) */
int _ZN9tesseract11WordFeature11ComputeSizeERK13GenericVectorIS0_EPiS5_(void);

/* Symbol: _ZN13GenericVectorI6STRINGE4moveEPS1_ */
/* Demangled: GenericVector<STRING>::move(GenericVector<STRING>*) */
int _ZN13GenericVectorI6STRINGE4moveEPS1_(void);

/* Symbol: _ZNK7UNICHAR14const_iterator8utf8_lenEv */
/* Demangled: UNICHAR::const_iterator::utf8_len() const */
int _ZNK7UNICHAR14const_iterator8utf8_lenEv(void);

/* Symbol: textord_words_minlarge */
/* Demangled: textord_words_minlarge */
extern void* textord_words_minlarge;

/* Symbol: _ZN9tesseract14EquationDetect27IdentifyInlinePartsVerticalEbi */
/* Demangled: tesseract::EquationDetect::IdentifyInlinePartsVertical(bool, int) */
int _ZN9tesseract14EquationDetect27IdentifyInlinePartsVerticalEbi(void);

/* Symbol: _ZNK9tesseract19RowScratchRegisters21UniqueStartHypothesisEv */
/* Demangled: tesseract::RowScratchRegisters::UniqueStartHypothesis() const */
int _ZNK9tesseract19RowScratchRegisters21UniqueStartHypothesisEv(void);

/* Symbol: _ZNK9tesseract14SampleIterator5AtEndEv */
/* Demangled: tesseract::SampleIterator::AtEnd() const */
int _ZNK9tesseract14SampleIterator5AtEndEv(void);

/* Symbol: _ZN9tesseract14IntFeatureDist3SetERK13GenericVectorIiEib */
/* Demangled: tesseract::IntFeatureDist::Set(GenericVector<int> const&, int, bool) */
int _ZN9tesseract14IntFeatureDist3SetERK13GenericVectorIiEib(void);

/* Symbol: _ZN9tesseract17WordListLangModelD2Ev */
/* Demangled: tesseract::WordListLangModel::~WordListLangModel() */
int _ZN9tesseract17WordListLangModelD2Ev(void);

/* Symbol: _ZN9tesseract12ColumnFinder19GridMergePartitionsEv */
/* Demangled: tesseract::ColumnFinder::GridMergePartitions() */
int _ZN9tesseract12ColumnFinder19GridMergePartitionsEv(void);

/* Symbol: _ZN9tesseract9TabVector6DeleteEPS0_ */
/* Demangled: tesseract::TabVector::Delete(tesseract::TabVector*) */
int _ZN9tesseract9TabVector6DeleteEPS0_(void);

/* Symbol: textord_disable_pitch_test */
/* Demangled: textord_disable_pitch_test */
extern void* textord_disable_pitch_test;

/* Symbol: _ZN9tesseract10GridSearchINS_12ColPartitionENS_18ColPartition_CLISTENS_17ColPartition_C_ITEE10CommonNextEv */
/* Demangled: tesseract::GridSearch<tesseract::ColPartition, tesseract::ColPartition_CLIST, tesseract::ColPartition_C_IT>::CommonNext() */
int _ZN9tesseract10GridSearchINS_12ColPartitionENS_18ColPartition_CLISTENS_17ColPartition_C_ITEE10CommonNextEv(void);

/* Symbol: _ZN9C_OUTLINE17count_transitionsEi */
/* Demangled: C_OUTLINE::count_transitions(int) */
int _ZN9C_OUTLINE17count_transitionsEi(void);

/* Symbol: _ZN9tesseract12SearchColumnC2Eii */
/* Demangled: tesseract::SearchColumn::SearchColumn(int, int) */
int _ZN9tesseract12SearchColumnC2Eii(void);

/* Symbol: _ZNK9tesseract12WordUnigrams12CostInternalEPKc */
/* Demangled: tesseract::WordUnigrams::CostInternal(char const*) const */
int _ZNK9tesseract12WordUnigrams12CostInternalEPKc(void);

/* Symbol: _ZN9tesseract4Trie19initialize_patternsEP10UNICHARSET */
/* Demangled: tesseract::Trie::initialize_patterns(UNICHARSET*) */
int _ZN9tesseract4Trie19initialize_patternsEP10UNICHARSET(void);

/* Symbol: _ZN13GenericVectorIP5BLOCKE5clearEv */
/* Demangled: GenericVector<BLOCK*>::clear() */
int _ZN13GenericVectorIP5BLOCKE5clearEv(void);

/* Symbol: _ZN9tesseract7Textord20suspected_punct_blobEP6TO_ROW4TBOX */
/* Demangled: tesseract::Textord::suspected_punct_blob(TO_ROW*, TBOX) */
int _ZN9tesseract7Textord20suspected_punct_blobEP6TO_ROW4TBOX(void);

/* Symbol: _ZN9tesseract7Wordrec16pick_close_pointEP6EDGEPTS2_Pi */
/* Demangled: tesseract::Wordrec::pick_close_point(EDGEPT*, EDGEPT*, int*) */
int _ZN9tesseract7Wordrec16pick_close_pointEP6EDGEPTS2_Pi(void);

/* Symbol: _ZNK9tesseract11WordFeature9SerializeEP7__sFILE */
/* Demangled: tesseract::WordFeature::Serialize(__sFILE*) const */
int _ZNK9tesseract11WordFeature9SerializeEP7__sFILE(void);

/* Symbol: _ZNSt3__16vectorIN9tesseract9NeuralNet4NodeENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE */
/* Demangled: std::__1::vector<tesseract::NeuralNet::Node, std::__1::allocator<tesseract::NeuralNet::Node> >::__swap_out_circular_buffer(std::__1::__split_buffer<tesseract::NeuralNet::Node, std::__1::allocator<tesseract::NeuralNet::Node>&>&) */
int _ZNSt3__16vectorIN9tesseract9NeuralNet4NodeENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE(void);

/* Symbol: _Z12fill_bucketsP14C_OUTLINE_LISTP10OL_BUCKETS */
/* Demangled: fill_buckets(C_OUTLINE_LIST*, OL_BUCKETS*) */
int _Z12fill_bucketsP14C_OUTLINE_LISTP10OL_BUCKETS(void);

/* Symbol: _Z13NormalDensityi */
/* Demangled: NormalDensity(int) */
int _Z13NormalDensityi(void);

/* Symbol: _ZN9tesseract12ColumnFinder23ShrinkRangeToLongestRunEPPiPKiPKbiS1_S1_ */
/* Demangled: tesseract::ColumnFinder::ShrinkRangeToLongestRun(int**, int const*, bool const*, int, int*, int*) */
int _ZN9tesseract12ColumnFinder23ShrinkRangeToLongestRunEPPiPKiPKbiS1_S1_(void);

/* Symbol: _ZNK10UNICHARSET17id_to_unichar_extEi */
/* Demangled: UNICHARSET::id_to_unichar_ext(int) const */
int _ZNK10UNICHARSET17id_to_unichar_extEi(void);

/* Symbol: _ZN13GenericVectorIN9tesseract7ClusterEE15double_the_sizeEv */
/* Demangled: GenericVector<tesseract::Cluster>::double_the_size() */
int _ZN13GenericVectorIN9tesseract7ClusterEE15double_the_sizeEv(void);

/* Symbol: _Z13reject_blanksP8WERD_RES */
/* Demangled: reject_blanks(WERD_RES*) */
int _Z13reject_blanksP8WERD_RES(void);

/* Symbol: _Z15DistanceBetween6FPOINTS_ */
/* Demangled: DistanceBetween(FPOINT, FPOINT) */
int _Z15DistanceBetween6FPOINTS_(void);

/* Symbol: _ZN9tesseract13WordSizeModel8PairCostEiiiiiiRKNS_12PairSizeInfoE */
/* Demangled: tesseract::WordSizeModel::PairCost(int, int, int, int, int, int, tesseract::PairSizeInfo const&) */
int _ZN9tesseract13WordSizeModel8PairCostEiiiiiiRKNS_12PairSizeInfoE(void);

/* Symbol: _ZN9tesseract7Wordrec22InitBlamerForSegSearchEP8WERD_RESPNS_12LMPainPointsEP12BlamerBundleP6STRING */
/* Demangled: tesseract::Wordrec::InitBlamerForSegSearch(WERD_RES*, tesseract::LMPainPoints*, BlamerBundle*, STRING*) */
int _ZN9tesseract7Wordrec22InitBlamerForSegSearchEP8WERD_RESPNS_12LMPainPointsEP12BlamerBundleP6STRING(void);

/* Symbol: _Z19make_holed_baselineP4TBOXiP7QSPLINES2_f */
/* Demangled: make_holed_baseline(TBOX*, int, QSPLINE*, QSPLINE*, float) */
int _Z19make_holed_baselineP4TBOXiP7QSPLINES2_f(void);

/* Symbol: _ZN13GenericVectorIP8BLOBNBOXE15double_the_sizeEv */
/* Demangled: GenericVector<BLOBNBOX*>::double_the_size() */
int _ZN13GenericVectorIP8BLOBNBOXE15double_the_sizeEv(void);

/* Symbol: _ZN13GenericVectorIP8BLOBNBOXE5clearEv */
/* Demangled: GenericVector<BLOBNBOX*>::clear() */
int _ZN13GenericVectorIP8BLOBNBOXE5clearEv(void);

/* Symbol: TessResultIteratorSymbolIsSuperscript */
/* Demangled: TessResultIteratorSymbolIsSuperscript */
int TessResultIteratorSymbolIsSuperscript(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract12ColPartitionEEaSERKS3_ */
/* Demangled: GenericVector<tesseract::ColPartition*>::operator=(GenericVector<tesseract::ColPartition*> const&) */
int _ZN13GenericVectorIPN9tesseract12ColPartitionEEaSERKS3_(void);

/* Symbol: textord_chop_width */
/* Demangled: textord_chop_width */
extern void* textord_chop_width;

/* Symbol: _ZN9tesseract9ImageData15SkipDeSerializeEbPNS_5TFileE */
/* Demangled: tesseract::ImageData::SkipDeSerialize(bool, tesseract::TFile*) */
int _ZN9tesseract9ImageData15SkipDeSerializeEbPNS_5TFileE(void);

/* Symbol: kGeoFeatureType */
/* Demangled: kGeoFeatureType */
extern void* kGeoFeatureType;

/* Symbol: _ZN13GenericVectorIN9tesseract12DawgPositionEE5clearEv */
/* Demangled: GenericVector<tesseract::DawgPosition>::clear() */
int _ZN13GenericVectorIN9tesseract12DawgPositionEE5clearEv(void);

/* Symbol: _ZN9tesseract7TabFind6DeskewEPNS_14TabVector_LISTEP13BLOBNBOX_LISTP8TO_BLOCKP6FCOORDS8_ */
/* Demangled: tesseract::TabFind::Deskew(tesseract::TabVector_LIST*, BLOBNBOX_LIST*, TO_BLOCK*, FCOORD*, FCOORD*) */
int _ZN9tesseract7TabFind6DeskewEPNS_14TabVector_LISTEP13BLOBNBOX_LISTP8TO_BLOCKP6FCOORDS8_(void);

/* Symbol: _ZN9tesseract9Tesseract20create_cube_box_wordEP4Boxai4TBOXPNS_7BoxWordE */
/* Demangled: tesseract::Tesseract::create_cube_box_word(Boxa*, int, TBOX, tesseract::BoxWord*) */
int _ZN9tesseract9Tesseract20create_cube_box_wordEP4Boxai4TBOXPNS_7BoxWordE(void);

/* Symbol: _ZN11PAGE_RES_IT13forward_blockEv */
/* Demangled: PAGE_RES_IT::forward_block() */
int _ZN11PAGE_RES_IT13forward_blockEv(void);

/* Symbol: _ZN9tesseract26ksizeofUniversalAmbigsFileE */
/* Demangled: tesseract::ksizeofUniversalAmbigsFile */
extern void* _ZN9tesseract26ksizeofUniversalAmbigsFileE;

/* Symbol: _ZN9tesseract8IndexMap8CopyFromERKS0_ */
/* Demangled: tesseract::IndexMap::CopyFrom(tesseract::IndexMap const&) */
int _ZN9tesseract8IndexMap8CopyFromERKS0_(void);

/* Symbol: _ZNSt3__112basic_stringIiNS_11char_traitsIiEENS_9allocatorIiEEE6appendEPKij */
/* Demangled: std::__1::basic_string<int, std::__1::char_traits<int>, std::__1::allocator<int> >::append(int const*, unsigned int) */
int _ZNSt3__112basic_stringIiNS_11char_traitsIiEENS_9allocatorIiEEE6appendEPKij(void);

/* Symbol: textord_space_size_is_variable */
/* Demangled: textord_space_size_is_variable */
extern void* textord_space_size_is_variable;

/* Symbol: _ZN9tesseract13DocumentCacheC2Ex */
/* Demangled: tesseract::DocumentCache::DocumentCache(long long) */
int _ZN9tesseract13DocumentCacheC2Ex(void);

/* Symbol: _ZN8WERD_RES16CopySimpleFieldsERKS_ */
/* Demangled: WERD_RES::CopySimpleFields(WERD_RES const&) */
int _ZN8WERD_RES16CopySimpleFieldsERKS_(void);

/* Symbol: _Z16capture_childrenP10OL_BUCKETSP9C_BLOB_ITP12C_OUTLINE_IT */
/* Demangled: capture_children(OL_BUCKETS*, C_BLOB_IT*, C_OUTLINE_IT*) */
int _Z16capture_childrenP10OL_BUCKETSP9C_BLOB_ITP12C_OUTLINE_IT(void);

/* Symbol: textord_show_final_rows */
/* Demangled: textord_show_final_rows */
extern void* textord_show_final_rows;

/* Symbol: _ZN9tesseract10GridSearchINS_12ColPartitionENS_18ColPartition_CLISTENS_17ColPartition_C_ITEE18RepositionIteratorEv */
/* Demangled: tesseract::GridSearch<tesseract::ColPartition, tesseract::ColPartition_CLIST, tesseract::ColPartition_C_IT>::RepositionIterator() */
int _ZN9tesseract10GridSearchINS_12ColPartitionENS_18ColPartition_CLISTENS_17ColPartition_C_ITEE18RepositionIteratorEv(void);

/* Symbol: _ZNK10UNICHARSET13encode_stringEPKcbP13GenericVectorIiEPS2_IcEPi */
/* Demangled: UNICHARSET::encode_string(char const*, bool, GenericVector<int>*, GenericVector<char>*, int*) const */
int _ZNK10UNICHARSET13encode_stringEPKcbP13GenericVectorIiEPS2_IcEPi(void);

/* Symbol: _Z11FillBucketsP7BUCKETSP6sampletP10PARAM_DESCff */
/* Demangled: FillBuckets(BUCKETS*, sample*, unsigned short, PARAM_DESC*, float, float) */
int _Z11FillBucketsP7BUCKETSP6sampletP10PARAM_DESCff(void);

/* Symbol: _Z17find_lesser_partsP6TO_ROWP4TBOXiPcPiii */
/* Demangled: find_lesser_parts(TO_ROW*, TBOX*, int, char*, int*, int, int) */
int _Z17find_lesser_partsP6TO_ROWP4TBOXiPcPiii(void);

/* Symbol: wordrec_display_all_blobs */
/* Demangled: wordrec_display_all_blobs */
extern void* wordrec_display_all_blobs;

/* Symbol: _ZN9tesseract11TableFinderD2Ev */
/* Demangled: tesseract::TableFinder::~TableFinder() */
int _ZN9tesseract11TableFinderD2Ev(void);

/* Symbol: _ZNSt3__112__hash_tableIPN9tesseract11WordWithBoxENS1_7PtrHashIS2_EENS_8equal_toIS3_EENS_9allocatorIS3_EEED2Ev */
/* Demangled: std::__1::__hash_table<tesseract::WordWithBox*, tesseract::PtrHash<tesseract::WordWithBox>, std::__1::equal_to<tesseract::WordWithBox*>, std::__1::allocator<tesseract::WordWithBox*> >::~__hash_table() */
int _ZNSt3__112__hash_tableIPN9tesseract11WordWithBoxENS1_7PtrHashIS2_EENS_8equal_toIS3_EENS_9allocatorIS3_EEED2Ev(void);

/* Symbol: _ZN9tesseract6cmp_eqIPK14ParagraphModelEEbRKT_S6_ */
/* Demangled: bool tesseract::cmp_eq<ParagraphModel const*>(ParagraphModel const* const&, ParagraphModel const* const&) */
int _ZN9tesseract6cmp_eqIPK14ParagraphModelEEbRKT_S6_(void);

/* Symbol: _ZN13GenericVectorIN9tesseract16SegSearchPendingEE6insertES1_i */
/* Demangled: GenericVector<tesseract::SegSearchPending>::insert(tesseract::SegSearchPending, int) */
int _ZN13GenericVectorIN9tesseract16SegSearchPendingEE6insertES1_i(void);

/* Symbol: _ZN9tesseract9ImageData14GetPixInternalERK13GenericVectorIcE */
/* Demangled: tesseract::ImageData::GetPixInternal(GenericVector<char> const&) */
int _ZN9tesseract9ImageData14GetPixInternalERK13GenericVectorIcE(void);

/* Symbol: _ZNK9tesseract10ShapeTable22GetFirstUnicharAndFontEiPiS1_ */
/* Demangled: tesseract::ShapeTable::GetFirstUnicharAndFont(int, int*, int*) const */
int _ZNK9tesseract10ShapeTable22GetFirstUnicharAndFontEiPiS1_(void);

/* Symbol: _ZN9tesseract6Neuron13set_node_typeENS0_11NeuronTypesE */
/* Demangled: tesseract::Neuron::set_node_type(tesseract::Neuron::NeuronTypes) */
int _ZN9tesseract6Neuron13set_node_typeENS0_11NeuronTypesE(void);

/* Symbol: _ZN9tesseract15CCNonTextDetectD0Ev */
/* Demangled: tesseract::CCNonTextDetect::~CCNonTextDetect() */
int _ZN9tesseract15CCNonTextDetectD0Ev(void);

/* Symbol: _ZNK13GenericVectorIPN9tesseract15ColPartitionSetEE3getEi */
/* Demangled: GenericVector<tesseract::ColPartitionSet*>::get(int) const */
int _ZNK13GenericVectorIPN9tesseract15ColPartitionSetEE3getEi(void);

/* Symbol: textord_underline_offset */
/* Demangled: textord_underline_offset */
extern void* textord_underline_offset;

/* Symbol: _ZN9tesseract9Tesseract12tilde_deleteER11PAGE_RES_IT */
/* Demangled: tesseract::Tesseract::tilde_delete(PAGE_RES_IT&) */
int _ZN9tesseract9Tesseract12tilde_deleteER11PAGE_RES_IT(void);

/* Symbol: _Z10LeftMarginP14ICOORDELT_LISTiPi */
/* Demangled: LeftMargin(ICOORDELT_LIST*, int, int*) */
int _Z10LeftMarginP14ICOORDELT_LISTiPi(void);

/* Symbol: _ZN7QSPLINE7overlapEPS_d */
/* Demangled: QSPLINE::overlap(QSPLINE*, double) */
int _ZN7QSPLINE7overlapEPS_d(void);

/* Symbol: _ZN9tesseract11CharSampSet15LoadCharSamplesEP7__sFILE */
/* Demangled: tesseract::CharSampSet::LoadCharSamples(__sFILE*) */
int _ZN9tesseract11CharSampSet15LoadCharSamplesEP7__sFILE(void);

/* Symbol: _ZN9tesseract9NeuralNetC2Ev */
/* Demangled: tesseract::NeuralNet::NeuralNet() */
int _ZN9tesseract9NeuralNetC2Ev(void);

/* Symbol: _ZNSt3__112__hash_tableIPN9tesseract10ColSegmentENS1_7PtrHashIS2_EENS_8equal_toIS3_EENS_9allocatorIS3_EEE8__rehashEj */
/* Demangled: std::__1::__hash_table<tesseract::ColSegment*, tesseract::PtrHash<tesseract::ColSegment>, std::__1::equal_to<tesseract::ColSegment*>, std::__1::allocator<tesseract::ColSegment*> >::__rehash(unsigned int) */
int _ZNSt3__112__hash_tableIPN9tesseract10ColSegmentENS1_7PtrHashIS2_EENS_8equal_toIS3_EENS_9allocatorIS3_EEE8__rehashEj(void);

/* Symbol: _Z14UniformDensityi */
/* Demangled: UniformDensity(int) */
int _Z14UniformDensityi(void);

/* Symbol: _ZN9tesseract16CubeSearchObjectC1EPNS_15CubeRecoContextEPNS_8CharSampE */
/* Demangled: tesseract::CubeSearchObject::CubeSearchObject(tesseract::CubeRecoContext*, tesseract::CharSamp*) */
int _ZN9tesseract16CubeSearchObjectC1EPNS_15CubeRecoContextEPNS_8CharSampE(void);

/* Symbol: _ZNSt3__16vectorIPfNS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_ */
/* Demangled: void std::__1::vector<float*, std::__1::allocator<float*> >::__push_back_slow_path<float*>(float*&&) */
int _ZNSt3__16vectorIPfNS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_(void);

/* Symbol: _ZN13GenericVectorIP6C_BLOBE9push_backES1_ */
/* Demangled: GenericVector<C_BLOB*>::push_back(C_BLOB*) */
int _ZN13GenericVectorIP6C_BLOBE9push_backES1_(void);

/* Symbol: _ZN9tesseract9Tesseract13failure_countEP8WERD_RES */
/* Demangled: tesseract::Tesseract::failure_count(WERD_RES*) */
int _ZN9tesseract9Tesseract13failure_countEP8WERD_RES(void);

/* Symbol: _ZN9tesseract11CCUtilMutexC2Ev */
/* Demangled: tesseract::CCUtilMutex::CCUtilMutex() */
int _ZN9tesseract11CCUtilMutexC2Ev(void);

/* Symbol: _ZN13GenericVectorIN9tesseract17TrainingSampleSet17FontClassDistanceEEaSERKS3_ */
/* Demangled: GenericVector<tesseract::TrainingSampleSet::FontClassDistance>::operator=(GenericVector<tesseract::TrainingSampleSet::FontClassDistance> const&) */
int _ZN13GenericVectorIN9tesseract17TrainingSampleSet17FontClassDistanceEEaSERKS3_(void);

/* Symbol: _ZN9tesseract11StrokeWidth11InsertBlobsEP8TO_BLOCK */
/* Demangled: tesseract::StrokeWidth::InsertBlobs(TO_BLOCK*) */
int _ZN9tesseract11StrokeWidth11InsertBlobsEP8TO_BLOCK(void);

/* Symbol: TessBaseAPIGetDoubleVariable */
/* Demangled: TessBaseAPIGetDoubleVariable */
int TessBaseAPIGetDoubleVariable(void);

/* Symbol: _Z22set_global_subloc_codei */
/* Demangled: set_global_subloc_code(int) */
int _Z22set_global_subloc_codei(void);

/* Symbol: _ZN9tesseract15TessdataManager13ExtractToFileEPKc */
/* Demangled: tesseract::TessdataManager::ExtractToFile(char const*) */
int _ZN9tesseract15TessdataManager13ExtractToFileEPKc(void);

/* Symbol: _ZN10ScrollViewD1Ev */
/* Demangled: ScrollView::~ScrollView() */
int _ZN10ScrollViewD1Ev(void);

/* Symbol: _ZN9tesseract10CachedFileC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: tesseract::CachedFile::CachedFile(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN9tesseract10CachedFileC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN9tesseract11BaselineRow20AdjustBaselineToGridEiRK6FCOORDdd */
/* Demangled: tesseract::BaselineRow::AdjustBaselineToGrid(int, FCOORD const&, double, double) */
int _ZN9tesseract11BaselineRow20AdjustBaselineToGridEiRK6FCOORDdd(void);

/* Symbol: _ZNK9tesseract10ColSegment8BoxColorEv */
/* Demangled: tesseract::ColSegment::BoxColor() const */
int _ZNK9tesseract10ColSegment8BoxColorEv(void);

/* Symbol: _ZN9tesseract7Wordrec25ProcessSegSearchPainPointEfRK12MATRIX_COORDPKcP13GenericVectorINS_16SegSearchPendingEEP8WERD_RESPNS_12LMPainPointsEP12BlamerBundle */
/* Demangled: tesseract::Wordrec::ProcessSegSearchPainPoint(float, MATRIX_COORD const&, char const*, GenericVector<tesseract::SegSearchPending>*, WERD_RES*, tesseract::LMPainPoints*, BlamerBundle*) */
int _ZN9tesseract7Wordrec25ProcessSegSearchPainPointEfRK12MATRIX_COORDPKcP13GenericVectorINS_16SegSearchPendingEEP8WERD_RESPNS_12LMPainPointsEP12BlamerBundle(void);

/* Symbol: _ZN9tesseract13LanguageModel16kMaxAvgNgramCostE */
/* Demangled: tesseract::LanguageModel::kMaxAvgNgramCost */
extern void* _ZN9tesseract13LanguageModel16kMaxAvgNgramCostE;

/* Symbol: _ZN9tesseract11TessBaseAPID1Ev */
/* Demangled: tesseract::TessBaseAPI::~TessBaseAPI() */
int _ZN9tesseract11TessBaseAPID1Ev(void);

/* Symbol: _ZN9tesseract7BoxWordC1ERKS0_ */
/* Demangled: tesseract::BoxWord::BoxWord(tesseract::BoxWord const&) */
int _ZN9tesseract7BoxWordC1ERKS0_(void);

/* Symbol: _ZN8WERD_RES15SetupWordScriptERK10UNICHARSET */
/* Demangled: WERD_RES::SetupWordScript(UNICHARSET const&) */
int _ZN8WERD_RES15SetupWordScriptERK10UNICHARSET(void);

/* Symbol: _ZN14ScriptDetector16japanese_script_E */
/* Demangled: ScriptDetector::japanese_script_ */
extern void* _ZN14ScriptDetector16japanese_script_E;

/* Symbol: _ZN9tesseract29HybridNeuralNetCharClassifier8ClassifyEPNS_8CharSampE */
/* Demangled: tesseract::HybridNeuralNetCharClassifier::Classify(tesseract::CharSamp*) */
int _ZN9tesseract29HybridNeuralNetCharClassifier8ClassifyEPNS_8CharSampE(void);

/* Symbol: _ZN9tesseract16CubeSearchObjectD0Ev */
/* Demangled: tesseract::CubeSearchObject::~CubeSearchObject() */
int _ZN9tesseract16CubeSearchObjectD0Ev(void);

/* Symbol: _ZN9tesseract11TableFinder20InsertImagePartitionEPNS_12ColPartitionE */
/* Demangled: tesseract::TableFinder::InsertImagePartition(tesseract::ColPartition*) */
int _ZN9tesseract11TableFinder20InsertImagePartitionEPNS_12ColPartitionE(void);

/* Symbol: _ZN9tesseract15StructuredTable18FindLinedStructureEv */
/* Demangled: tesseract::StructuredTable::FindLinedStructure() */
int _ZN9tesseract15StructuredTable18FindLinedStructureEv(void);

/* Symbol: _ZN13GenericVectorIP6C_BLOBE12init_to_sizeEiS1_ */
/* Demangled: GenericVector<C_BLOB*>::init_to_size(int, C_BLOB*) */
int _ZN13GenericVectorIP6C_BLOBE12init_to_sizeEiS1_(void);

/* Symbol: _ZN9tesseract20ColSegment_c1_zapperEPv */
/* Demangled: tesseract::ColSegment_c1_zapper(void*) */
int _ZN9tesseract20ColSegment_c1_zapperEPv(void);

/* Symbol: _ZN9tesseract7Textord11narrow_blobEP6TO_ROW4TBOX */
/* Demangled: tesseract::Textord::narrow_blob(TO_ROW*, TBOX) */
int _ZN9tesseract7Textord11narrow_blobEP6TO_ROW4TBOX(void);

/* Symbol: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeGetResultIterator */
/* Demangled: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeGetResultIterator */
int Java_com_googlecode_tesseract_android_TessBaseAPI_nativeGetResultIterator(void);

/* Symbol: _ZNK9tesseract13DocumentCache12FindDocumentERK6STRING */
/* Demangled: tesseract::DocumentCache::FindDocument(STRING const&) const */
int _ZNK9tesseract13DocumentCache12FindDocumentERK6STRING(void);

/* Symbol: _ZNK13GenericVectorIN9tesseract8FontInfoEE5writeEP7__sFILEP19TessResultCallback2IbS4_RKS1_E */
/* Demangled: GenericVector<tesseract::FontInfo>::write(__sFILE*, TessResultCallback2<bool, __sFILE*, tesseract::FontInfo const&>*) const */
int _ZNK13GenericVectorIN9tesseract8FontInfoEE5writeEP7__sFILEP19TessResultCallback2IbS4_RKS1_E(void);

/* Symbol: _ZN9tesseract10FeatureBmp15ComputeFeaturesEPNS_8CharSampEPf */
/* Demangled: tesseract::FeatureBmp::ComputeFeatures(tesseract::CharSamp*, float*) */
int _ZN9tesseract10FeatureBmp15ComputeFeaturesEPNS_8CharSampEPf(void);

/* Symbol: _ZN9tesseract4Dict12ReplaceAmbigEiiiP11WERD_CHOICEP6MATRIX */
/* Demangled: tesseract::Dict::ReplaceAmbig(int, int, int, WERD_CHOICE*, MATRIX*) */
int _ZN9tesseract4Dict12ReplaceAmbigEiiiP11WERD_CHOICEP6MATRIX(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract15ColPartitionSetEE5clearEv */
/* Demangled: GenericVector<tesseract::ColPartitionSet*>::clear() */
int _ZN13GenericVectorIPN9tesseract15ColPartitionSetEE5clearEv(void);

/* Symbol: _ZNK9tesseract15StructuredTable10cell_countEv */
/* Demangled: tesseract::StructuredTable::cell_count() const */
int _ZNK9tesseract15StructuredTable10cell_countEv(void);

/* Symbol: _ZN9tesseract6BBGridINS_11WordWithBoxENS_17WordWithBox_CLISTENS_16WordWithBox_C_ITEED2Ev */
/* Demangled: tesseract::BBGrid<tesseract::WordWithBox, tesseract::WordWithBox_CLIST, tesseract::WordWithBox_C_IT>::~BBGrid() */
int _ZN9tesseract6BBGridINS_11WordWithBoxENS_17WordWithBox_CLISTENS_16WordWithBox_C_ITEED2Ev(void);

/* Symbol: TessBaseAPISetThresholder */
/* Demangled: TessBaseAPISetThresholder */
int TessBaseAPISetThresholder(void);

/* Symbol: _ZN9tesseract9Tesseract11word_dumperEP11PAGE_RES_IT */
/* Demangled: tesseract::Tesseract::word_dumper(PAGE_RES_IT*) */
int _ZN9tesseract9Tesseract11word_dumperEP11PAGE_RES_IT(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract11StringParamEE7reserveEi */
/* Demangled: GenericVector<tesseract::StringParam*>::reserve(int) */
int _ZN13GenericVectorIPN9tesseract11StringParamEE7reserveEi(void);

/* Symbol: _ZN9C_OUTLINEC1EP9CRACKEDGE6ICOORDS2_s */
/* Demangled: C_OUTLINE::C_OUTLINE(CRACKEDGE*, ICOORD, ICOORD, short) */
int _ZN9C_OUTLINEC1EP9CRACKEDGE6ICOORDS2_s(void);

/* Symbol: _ZN6DIR128C2E6FCOORD */
/* Demangled: DIR128::DIR128(FCOORD) */
int _ZN6DIR128C2E6FCOORD(void);

/* Symbol: _Z19ActualOutlineLengthP14FEATURE_STRUCT */
/* Demangled: ActualOutlineLength(FEATURE_STRUCT*) */
int _Z19ActualOutlineLengthP14FEATURE_STRUCT(void);

/* Symbol: _Z17adjust_row_limitsP8TO_BLOCK */
/* Demangled: adjust_row_limits(TO_BLOCK*) */
int _Z17adjust_row_limitsP8TO_BLOCK(void);

/* Symbol: textord_fp_chopping */
/* Demangled: textord_fp_chopping */
extern void* textord_fp_chopping;

/* Symbol: _ZN9tesseract13LanguageModel16UpdateBestChoiceEPNS_17ViterbiStateEntryEPNS_12LMPainPointsEP8WERD_RESPNS_16BestChoiceBundleEP12BlamerBundle */
/* Demangled: tesseract::LanguageModel::UpdateBestChoice(tesseract::ViterbiStateEntry*, tesseract::LMPainPoints*, WERD_RES*, tesseract::BestChoiceBundle*, BlamerBundle*) */
int _ZN9tesseract13LanguageModel16UpdateBestChoiceEPNS_17ViterbiStateEntryEPNS_12LMPainPointsEP8WERD_RESPNS_16BestChoiceBundleEP12BlamerBundle(void);

/* Symbol: _ZN9tesseract9Tesseract18count_outline_errsEcs */
/* Demangled: tesseract::Tesseract::count_outline_errs(char, short) */
int _ZN9tesseract9Tesseract18count_outline_errsEcs(void);

/* Symbol: _ZN9tesseract12PageIterator4NextENS_17PageIteratorLevelE */
/* Demangled: tesseract::PageIterator::Next(tesseract::PageIteratorLevel) */
int _ZN9tesseract12PageIterator4NextENS_17PageIteratorLevelE(void);

/* Symbol: _ZN9tesseract7Textord18make_old_baselinesEP8TO_BLOCKhf */
/* Demangled: tesseract::Textord::make_old_baselines(TO_BLOCK*, unsigned char, float) */
int _ZN9tesseract7Textord18make_old_baselinesEP8TO_BLOCKhf(void);

/* Symbol: _ZN9tesseract9SkipCharsEPKcPFbiE */
/* Demangled: tesseract::SkipChars(char const*, bool (*)(int)) */
int _ZN9tesseract9SkipCharsEPKcPFbiE(void);

/* Symbol: _ZN9tesseract10ShapeTableC2ERK10UNICHARSET */
/* Demangled: tesseract::ShapeTable::ShapeTable(UNICHARSET const&) */
int _ZN9tesseract10ShapeTableC2ERK10UNICHARSET(void);

/* Symbol: _ZN9tesseract12ColPartition12CopyRightTabERKS0_b */
/* Demangled: tesseract::ColPartition::CopyRightTab(tesseract::ColPartition const&, bool) */
int _ZN9tesseract12ColPartition12CopyRightTabERKS0_b(void);

/* Symbol: _ZN9tesseract9Tesseract12flip_hyphensEP8WERD_RES */
/* Demangled: tesseract::Tesseract::flip_hyphens(WERD_RES*) */
int _ZN9tesseract9Tesseract12flip_hyphensEP8WERD_RES(void);

/* Symbol: _ZN13GenericVectorIN9tesseract16SegSearchPendingEE7reserveEi */
/* Demangled: GenericVector<tesseract::SegSearchPending>::reserve(int) */
int _ZN13GenericVectorIN9tesseract16SegSearchPendingEE7reserveEi(void);

/* Symbol: _ZN9tesseract13LanguageModel11UpdateStateEbiiP16BLOB_CHOICE_LISTPNS_18LanguageModelStateEPNS_12LMPainPointsEP8WERD_RESPNS_16BestChoiceBundleEP12BlamerBundle */
/* Demangled: tesseract::LanguageModel::UpdateState(bool, int, int, BLOB_CHOICE_LIST*, tesseract::LanguageModelState*, tesseract::LMPainPoints*, WERD_RES*, tesseract::BestChoiceBundle*, BlamerBundle*) */
int _ZN9tesseract13LanguageModel11UpdateStateEbiiP16BLOB_CHOICE_LISTPNS_18LanguageModelStateEPNS_12LMPainPointsEP8WERD_RESPNS_16BestChoiceBundleEP12BlamerBundle(void);

/* Symbol: _ZNK8BLOBNBOX15NoisyNeighboursEv */
/* Demangled: BLOBNBOX::NoisyNeighbours() const */
int _ZNK8BLOBNBOX15NoisyNeighboursEv(void);

/* Symbol: _ZN18INT_FEATURE_STRUCTC1Eiii */
/* Demangled: INT_FEATURE_STRUCT::INT_FEATURE_STRUCT(int, int, int) */
int _ZN18INT_FEATURE_STRUCTC1Eiii(void);

/* Symbol: _ZNK9tesseract12ColPartition13PartitionTypeENS_18ColumnSpanningTypeE */
/* Demangled: tesseract::ColPartition::PartitionType(tesseract::ColumnSpanningType) const */
int _ZNK9tesseract12ColPartition13PartitionTypeENS_18ColumnSpanningTypeE(void);

/* Symbol: _Z22FPSEGPT_LIST_c1_zapperPv */
/* Demangled: FPSEGPT_LIST_c1_zapper(void*) */
int _Z22FPSEGPT_LIST_c1_zapperPv(void);

/* Symbol: textord_words_pitchsd_threshold */
/* Demangled: textord_words_pitchsd_threshold */
extern void* textord_words_pitchsd_threshold;

/* Symbol: _ZN13GenericVectorIN9tesseract24ParamsTrainingHypothesisEE15double_the_sizeEv */
/* Demangled: GenericVector<tesseract::ParamsTrainingHypothesis>::double_the_size() */
int _ZN13GenericVectorIN9tesseract24ParamsTrainingHypothesisEE15double_the_sizeEv(void);

/* Symbol: _ZN9tesseract10FeatureBmpC2EPNS_12TuningParamsE */
/* Demangled: tesseract::FeatureBmp::FeatureBmp(tesseract::TuningParams*) */
int _ZN9tesseract10FeatureBmpC2EPNS_12TuningParamsE(void);

/* Symbol: _Z9reverse16Pv */
/* Demangled: reverse16(void*) */
int _Z9reverse16Pv(void);

/* Symbol: _ZN9tesseract9TabVector10IsAPartnerEPKS0_ */
/* Demangled: tesseract::TabVector::IsAPartner(tesseract::TabVector const*) */
int _ZN9tesseract9TabVector10IsAPartnerEPKS0_(void);

/* Symbol: _ZN9tesseract9TabVector9SetYStartEi */
/* Demangled: tesseract::TabVector::SetYStart(int) */
int _ZN9tesseract9TabVector9SetYStartEi(void);

/* Symbol: _ZN9tesseract9CubeUtils6StrLenEPKi */
/* Demangled: tesseract::CubeUtils::StrLen(int const*) */
int _ZN9tesseract9CubeUtils6StrLenEPKi(void);

/* Symbol: _ZN9C_OUTLINE7reverseEv */
/* Demangled: C_OUTLINE::reverse() */
int _ZN9C_OUTLINE7reverseEv(void);

/* Symbol: _ZN9tesseract17TrainingSampleSet20ComputeCloudFeaturesEi */
/* Demangled: tesseract::TrainingSampleSet::ComputeCloudFeatures(int) */
int _ZN9tesseract17TrainingSampleSet20ComputeCloudFeaturesEi(void);

/* Symbol: _ZN9tesseract4Bmp84CropEPiS1_S1_S1_ */
/* Demangled: tesseract::Bmp8::Crop(int*, int*, int*, int*) */
int _ZN9tesseract4Bmp84CropEPiS1_S1_S1_(void);

/* Symbol: _ZN9tesseract15StructuredTableD2Ev */
/* Demangled: tesseract::StructuredTable::~StructuredTable() */
int _ZN9tesseract15StructuredTableD2Ev(void);

/* Symbol: _ZN13GenericVectorI6STRINGEpLERKS1_ */
/* Demangled: GenericVector<STRING>::operator+=(GenericVector<STRING> const&) */
int _ZN13GenericVectorI6STRINGEpLERKS1_(void);

/* Symbol: _ZN9tesseract10LineFinder18FindAndRemoveLinesEibP3PixPiS3_PS2_PNS_14TabVector_LISTES6_ */
/* Demangled: tesseract::LineFinder::FindAndRemoveLines(int, bool, Pix*, int*, int*, Pix**, tesseract::TabVector_LIST*, tesseract::TabVector_LIST*) */
int _ZN9tesseract10LineFinder18FindAndRemoveLinesEibP3PixPiS3_PS2_PNS_14TabVector_LISTES6_(void);

/* Symbol: _ZN9tesseract7Wordrec9end_recogEv */
/* Demangled: tesseract::Wordrec::end_recog() */
int _ZN9tesseract7Wordrec9end_recogEv(void);

/* Symbol: _ZN13GenericVectorI17GenericVectorEqEqIiEE7reserveEi */
/* Demangled: GenericVector<GenericVectorEqEq<int> >::reserve(int) */
int _ZN13GenericVectorI17GenericVectorEqEqIiEE7reserveEi(void);

/* Symbol: _ZN9tesseract4Trie13add_word_listERK13GenericVectorI6STRINGERK10UNICHARSET */
/* Demangled: tesseract::Trie::add_word_list(GenericVector<STRING> const&, UNICHARSET const&) */
int _ZN9tesseract4Trie13add_word_listERK13GenericVectorI6STRINGERK10UNICHARSET(void);

/* Symbol: _Z15tune_row_pitch2P6TO_ROWP5STATSssfRfS3_RsP14ICOORDELT_LISTh */
/* Demangled: tune_row_pitch2(TO_ROW*, STATS*, short, short, float, float&, float&, short&, ICOORDELT_LIST*, unsigned char) */
int _Z15tune_row_pitch2P6TO_ROWP5STATSssfRfS3_RsP14ICOORDELT_LISTh(void);

/* Symbol: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeAddPageToDocument */
/* Demangled: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeAddPageToDocument */
int Java_com_googlecode_tesseract_android_TessBaseAPI_nativeAddPageToDocument(void);

/* Symbol: __udivsi3 */
/* Demangled: __udivsi3 */
int fn___udivsi3(void) __asm__("__udivsi3");

/* Symbol: _ZN13GenericVectorIN9tesseract9KDPairIncId6ICOORDEEE9push_backES3_ */
/* Demangled: GenericVector<tesseract::KDPairInc<double, ICOORD> >::push_back(tesseract::KDPairInc<double, ICOORD>) */
int _ZN13GenericVectorIN9tesseract9KDPairIncId6ICOORDEEE9push_backES3_(void);

/* Symbol: _ZN9tesseract4Trie22read_and_add_word_listEPKcRK10UNICHARSETNS0_16RTLReversePolicyE */
/* Demangled: tesseract::Trie::read_and_add_word_list(char const*, UNICHARSET const&, tesseract::Trie::RTLReversePolicy) */
int _ZN9tesseract4Trie22read_and_add_word_listEPKcRK10UNICHARSETNS0_16RTLReversePolicyE(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract13BaselineBlockEE15double_the_sizeEv */
/* Demangled: GenericVector<tesseract::BaselineBlock*>::double_the_size() */
int _ZN13GenericVectorIPN9tesseract13BaselineBlockEE15double_the_sizeEv(void);

/* Symbol: TessBaseAPIGetPageSegMode */
/* Demangled: TessBaseAPIGetPageSegMode */
int TessBaseAPIGetPageSegMode(void);

/* Symbol: _ZN9tesseract14EquationDetect10ExpandSeedEPNS_12ColPartitionE */
/* Demangled: tesseract::EquationDetect::ExpandSeed(tesseract::ColPartition*) */
int _ZN9tesseract14EquationDetect10ExpandSeedEPNS_12ColPartitionE(void);

/* Symbol: _ZN13GenericVectorIS_IN9tesseract24ParamsTrainingHypothesisEEE5clearEv */
/* Demangled: GenericVector<GenericVector<tesseract::ParamsTrainingHypothesis> >::clear() */
int _ZN13GenericVectorIS_IN9tesseract24ParamsTrainingHypothesisEEE5clearEv(void);

/* Symbol: _Z19separate_underlinesP8TO_BLOCKf6FCOORDh */
/* Demangled: separate_underlines(TO_BLOCK*, float, FCOORD, unsigned char) */
int _Z19separate_underlinesP8TO_BLOCKf6FCOORDh(void);

/* Symbol: _ZN9tesseract8Classify9LearnWordEPKcP8WERD_RES */
/* Demangled: tesseract::Classify::LearnWord(char const*, WERD_RES*) */
int _ZN9tesseract8Classify9LearnWordEPKcP8WERD_RES(void);

/* Symbol: _ZN9tesseract14EquationDetect10SplitCPHorEPNS_12ColPartitionEP13GenericVectorIS2_E */
/* Demangled: tesseract::EquationDetect::SplitCPHor(tesseract::ColPartition*, GenericVector<tesseract::ColPartition*>*) */
int _ZN9tesseract14EquationDetect10SplitCPHorEPNS_12ColPartitionEP13GenericVectorIS2_E(void);

/* Symbol: _ZNK9tesseract10BeamSearch11SplitByNodeEPNS_12SearchObjectEPNS_10SearchNodeEPiPP4Boxa */
/* Demangled: tesseract::BeamSearch::SplitByNode(tesseract::SearchObject*, tesseract::SearchNode*, int*, Boxa**) const */
int _ZNK9tesseract10BeamSearch11SplitByNodeEPNS_12SearchObjectEPNS_10SearchNodeEPiPP4Boxa(void);

/* Symbol: _Z26compute_xheight_from_modesP5STATSS0_biiPfS1_ */
/* Demangled: compute_xheight_from_modes(STATS*, STATS*, bool, int, int, float*, float*) */
int _Z26compute_xheight_from_modesP5STATSS0_biiPfS1_(void);

/* Symbol: _ZN13GenericVectorIiEpLERKS0_ */
/* Demangled: GenericVector<int>::operator+=(GenericVector<int> const&) */
int _ZN13GenericVectorIiEpLERKS0_(void);

/* Symbol: _ZNK9tesseract9Tesseract10split_wordEP8WERD_RESiPS2_PP12BlamerBundle */
/* Demangled: tesseract::Tesseract::split_word(WERD_RES*, int, WERD_RES**, BlamerBundle**) const */
int _ZNK9tesseract9Tesseract10split_wordEP8WERD_RESiPS2_PP12BlamerBundle(void);

/* Symbol: _ZNK9tesseract9BitVector9SerializeEP7__sFILE */
/* Demangled: tesseract::BitVector::Serialize(__sFILE*) const */
int _ZNK9tesseract9BitVector9SerializeEP7__sFILE(void);

/* Symbol: _ZN13GenericVectorIP16TRIE_NODE_RECORDE15double_the_sizeEv */
/* Demangled: GenericVector<TRIE_NODE_RECORD*>::double_the_size() */
int _ZN13GenericVectorIP16TRIE_NODE_RECORDE15double_the_sizeEv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev(void);

/* Symbol: _ZN9tesseract14ResultIterator14kMinorRunStartE */
/* Demangled: tesseract::ResultIterator::kMinorRunStart */
extern void* _ZN9tesseract14ResultIterator14kMinorRunStartE;

/* Symbol: _ZN9tesseract5TFileC1Ev */
/* Demangled: tesseract::TFile::TFile() */
int _ZN9tesseract5TFileC1Ev(void);

/* Symbol: _ZN9tesseract4Trie10sort_edgesEP13GenericVectorIyE */
/* Demangled: tesseract::Trie::sort_edges(GenericVector<unsigned long long>*) */
int _ZN9tesseract4Trie10sort_edgesEP13GenericVectorIyE(void);

/* Symbol: _ZN9tesseract13BaselineBlock13DrawFinalRowsERK6ICOORD */
/* Demangled: tesseract::BaselineBlock::DrawFinalRows(ICOORD const&) */
int _ZN9tesseract13BaselineBlock13DrawFinalRowsERK6ICOORD(void);

/* Symbol: TessBaseAPISetDebugVariable */
/* Demangled: TessBaseAPISetDebugVariable */
int TessBaseAPISetDebugVariable(void);

/* Symbol: _ZTVN9tesseract7ConCompE */
/* Demangled: vtable for tesseract::ConComp */
extern void* _ZTVN9tesseract7ConCompE;

/* Symbol: _ZN13GenericVectorI12DANGERR_INFOE7reserveEi */
/* Demangled: GenericVector<DANGERR_INFO>::reserve(int) */
int _ZN13GenericVectorI12DANGERR_INFOE7reserveEi(void);

/* Symbol: _ZN6STRINGpLEc */
/* Demangled: STRING::operator+=(char) */
int _ZN6STRINGpLEc(void);

/* Symbol: _ZN9tesseract12ColPartition19CopyButDontOwnBlobsEv */
/* Demangled: tesseract::ColPartition::CopyButDontOwnBlobs() */
int _ZN9tesseract12ColPartition19CopyButDontOwnBlobsEv(void);

/* Symbol: _ZN11PAGE_RES_IT17forward_paragraphEv */
/* Demangled: PAGE_RES_IT::forward_paragraph() */
int _ZN11PAGE_RES_IT17forward_paragraphEv(void);

/* Symbol: _ZNK9tesseract9Tesseract10join_wordsEP8WERD_RESS2_P12BlamerBundle */
/* Demangled: tesseract::Tesseract::join_words(WERD_RES*, WERD_RES*, BlamerBundle*) const */
int _ZNK9tesseract9Tesseract10join_wordsEP8WERD_RESS2_P12BlamerBundle(void);

/* Symbol: _ZN9tesseract7DPPoint14UpdateIfBetterExiPKS0_iix */
/* Demangled: tesseract::DPPoint::UpdateIfBetter(long long, int, tesseract::DPPoint const*, int, int, long long) */
int _ZN9tesseract7DPPoint14UpdateIfBetterExiPKS0_iix(void);

/* Symbol: _Z8new_cellv */
/* Demangled: new_cell() */
int _Z8new_cellv(void);

/* Symbol: _ZN9tesseract11StrokeWidth14TestDiacriticsEPNS_16ColPartitionGridEP8TO_BLOCK */
/* Demangled: tesseract::StrokeWidth::TestDiacritics(tesseract::ColPartitionGrid*, TO_BLOCK*) */
int _ZN9tesseract11StrokeWidth14TestDiacriticsEPNS_16ColPartitionGridEP8TO_BLOCK(void);

/* Symbol: _ZN9tesseract11TableFinder13FindNeighborsEv */
/* Demangled: tesseract::TableFinder::FindNeighbors() */
int _ZN9tesseract11TableFinder13FindNeighborsEv(void);

/* Symbol: _ZN13GenericVectorIN9tesseract10ScoredFontEE7reserveEi */
/* Demangled: GenericVector<tesseract::ScoredFont>::reserve(int) */
int _ZN13GenericVectorIN9tesseract10ScoredFontEE7reserveEi(void);

/* Symbol: _Z20MarkDirectionChangesP8list_rec */
/* Demangled: MarkDirectionChanges(list_rec*) */
int _Z20MarkDirectionChangesP8list_rec(void);

/* Symbol: _ZN9tesseract17WordListLangModel12WordVariantsERKNS_7CharSetEPK10UNICHARSETNSt3__112basic_stringIiNS7_11char_traitsIiEENS7_9allocatorIiEEEEPNS7_6vectorIP11WERD_CHOICENSB_ISG_EEEE */
/* Demangled: tesseract::WordListLangModel::WordVariants(tesseract::CharSet const&, UNICHARSET const*, std::__1::basic_string<int, std::__1::char_traits<int>, std::__1::allocator<int> >, std::__1::vector<WERD_CHOICE*, std::__1::allocator<WERD_CHOICE*> >*) */
int _ZN9tesseract17WordListLangModel12WordVariantsERKNS_7CharSetEPK10UNICHARSETNSt3__112basic_stringIiNS7_11char_traitsIiEENS7_9allocatorIiEEEEPNS7_6vectorIP11WERD_CHOICENSB_ISG_EEEE(void);

/* Symbol: _ZN9tesseract11TessBaseAPI13AnalyseLayoutEb */
/* Demangled: tesseract::TessBaseAPI::AnalyseLayout(bool) */
int _ZN9tesseract11TessBaseAPI13AnalyseLayoutEb(void);

/* Symbol: _ZN11WERD_CHOICE19UpdateStateForSplitEi */
/* Demangled: WERD_CHOICE::UpdateStateForSplit(int) */
int _ZN11WERD_CHOICE19UpdateStateForSplitEi(void);

/* Symbol: _ZN9tesseract15ShapeClassifier21UnicharClassifySampleERKNS_14TrainingSampleEP3PixiiP13GenericVectorINS_13UnicharRatingEE */
/* Demangled: tesseract::ShapeClassifier::UnicharClassifySample(tesseract::TrainingSample const&, Pix*, int, int, GenericVector<tesseract::UnicharRating>*) */
int _ZN9tesseract15ShapeClassifier21UnicharClassifySampleERKNS_14TrainingSampleEP3PixiiP13GenericVectorINS_13UnicharRatingEE(void);

/* Symbol: _ZN9tesseract29HybridNeuralNetCharClassifier6SetNetEPNS_9NeuralNetE */
/* Demangled: tesseract::HybridNeuralNetCharClassifier::SetNet(tesseract::NeuralNet*) */
int _ZN9tesseract29HybridNeuralNetCharClassifier6SetNetEPNS_9NeuralNetE(void);

/* Symbol: _ZN9tesseract11TableFinder18DisplayColSegmentsEP10ScrollViewPNS_15ColSegment_LISTENS1_5ColorE */
/* Demangled: tesseract::TableFinder::DisplayColSegments(ScrollView*, tesseract::ColSegment_LIST*, ScrollView::Color) */
int _ZN9tesseract11TableFinder18DisplayColSegmentsEP10ScrollViewPNS_15ColSegment_LISTENS1_5ColorE(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract15FontSpacingInfoEE5clearEv */
/* Demangled: GenericVector<tesseract::FontSpacingInfo*>::clear() */
int _ZN13GenericVectorIPN9tesseract15FontSpacingInfoEE5clearEv(void);

/* Symbol: _Z19FreeCharDescriptionP16CHAR_DESC_STRUCT */
/* Demangled: FreeCharDescription(CHAR_DESC_STRUCT*) */
int _Z19FreeCharDescriptionP16CHAR_DESC_STRUCT(void);

/* Symbol: _ZN9tesseract7TabFind18ConfirmRaggedRightEP8BLOBNBOXi */
/* Demangled: tesseract::TabFind::ConfirmRaggedRight(BLOBNBOX*, int) */
int _ZN9tesseract7TabFind18ConfirmRaggedRightEP8BLOBNBOXi(void);

/* Symbol: TessBaseAPIGetUNLVText */
/* Demangled: TessBaseAPIGetUNLVText */
int TessBaseAPIGetUNLVText(void);

/* Symbol: _ZN11WERD_CHOICE10kBadRatingE */
/* Demangled: WERD_CHOICE::kBadRating */
extern void* _ZN11WERD_CHOICE10kBadRatingE;

/* Symbol: _ZN9tesseract7Wordrec9set_pass2Ev */
/* Demangled: tesseract::Wordrec::set_pass2() */
int _ZN9tesseract7Wordrec9set_pass2Ev(void);

/* Symbol: _ZN5BLOCKC2EPKchssssss */
/* Demangled: BLOCK::BLOCK(char const*, unsigned char, short, short, short, short, short, short) */
int _ZN5BLOCKC2EPKchssssss(void);

/* Symbol: _ZN9tesseract11StrokeWidth17CompletePartitionENS_11PageSegModeEPNS_12ColPartitionEPNS_16ColPartitionGridE */
/* Demangled: tesseract::StrokeWidth::CompletePartition(tesseract::PageSegMode, tesseract::ColPartition*, tesseract::ColPartitionGrid*) */
int _ZN9tesseract11StrokeWidth17CompletePartitionENS_11PageSegModeEPNS_12ColPartitionEPNS_16ColPartitionGridE(void);

/* Symbol: _ZNK10UNICHARSET13encode_stringEPKciiP13GenericVectorIiEPS2_IcEPiS4_S6_ */
/* Demangled: UNICHARSET::encode_string(char const*, int, int, GenericVector<int>*, GenericVector<char>*, int*, GenericVector<int>*, GenericVector<char>*) const */
int _ZNK10UNICHARSET13encode_stringEPKciiP13GenericVectorIiEPS2_IcEPiS4_S6_(void);

/* Symbol: _ZN9tesseract17WordListLangModel7CleanupEv */
/* Demangled: tesseract::WordListLangModel::Cleanup() */
int _ZN9tesseract17WordListLangModel7CleanupEv(void);

/* Symbol: _ZN9tesseract11BaselineRow22FitConstrainedIfBetterEiRK6FCOORDdd */
/* Demangled: tesseract::BaselineRow::FitConstrainedIfBetter(int, FCOORD const&, double, double) */
int _ZN9tesseract11BaselineRow22FitConstrainedIfBetterEiRK6FCOORDdd(void);

/* Symbol: _ZN9tesseract11TessBaseAPI23DetectOrientationScriptEPiPfPPKcS2_ */
/* Demangled: tesseract::TessBaseAPI::DetectOrientationScript(int*, float*, char const**, float*) */
int _ZN9tesseract11TessBaseAPI23DetectOrientationScriptEPiPfPPKcS2_(void);

/* Symbol: _ZN9tesseract9Tesseract10recog_wordEP8WERD_RES */
/* Demangled: tesseract::Tesseract::recog_word(WERD_RES*) */
int _ZN9tesseract9Tesseract10recog_wordEP8WERD_RES(void);

/* Symbol: _ZN13GenericVectorIN9tesseract8FontInfoEE4readEP7__sFILEP19TessResultCallback3IbS4_PS1_bEb */
/* Demangled: GenericVector<tesseract::FontInfo>::read(__sFILE*, TessResultCallback3<bool, __sFILE*, tesseract::FontInfo*, bool>*, bool) */
int _ZN13GenericVectorIN9tesseract8FontInfoEE4readEP7__sFILEP19TessResultCallback3IbS4_PS1_bEb(void);

/* Symbol: textord_words_default_nonspace */
/* Demangled: textord_words_default_nonspace */
extern void* textord_words_default_nonspace;

/* Symbol: _ZN9tesseract16TessHOcrRendererC1EPKcb */
/* Demangled: tesseract::TessHOcrRenderer::TessHOcrRenderer(char const*, bool) */
int _ZN9tesseract16TessHOcrRendererC1EPKcb(void);

/* Symbol: _ZN13GenericVectorIP9C_OUTLINEE9push_backES1_ */
/* Demangled: GenericVector<C_OUTLINE*>::push_back(C_OUTLINE*) */
int _ZN13GenericVectorIP9C_OUTLINEE9push_backES1_(void);

/* Symbol: _ZN9tesseract7BoxWord18ComputeBoundingBoxEv */
/* Demangled: tesseract::BoxWord::ComputeBoundingBox() */
int _ZN9tesseract7BoxWord18ComputeBoundingBoxEv(void);

/* Symbol: _ZN13GenericVectorIPS_IiEE20delete_data_pointersEv */
/* Demangled: GenericVector<GenericVector<int>*>::delete_data_pointers() */
int _ZN13GenericVectorIPS_IiEE20delete_data_pointersEv(void);

/* Symbol: _ZN9tesseract8Classify11SettupPass2Ev */
/* Demangled: tesseract::Classify::SettupPass2() */
int _ZN9tesseract8Classify11SettupPass2Ev(void);

/* Symbol: _ZN9tesseract13WordSizeModelD1Ev */
/* Demangled: tesseract::WordSizeModel::~WordSizeModel() */
int _ZN9tesseract13WordSizeModelD1Ev(void);

/* Symbol: _Z11block_edgesP3PixP5PDBLKP12C_OUTLINE_IT */
/* Demangled: block_edges(Pix*, PDBLK*, C_OUTLINE_IT*) */
int _Z11block_edgesP3PixP5PDBLKP12C_OUTLINE_IT(void);

/* Symbol: edges_patharea_ratio */
/* Demangled: edges_patharea_ratio */
extern void* edges_patharea_ratio;

/* Symbol: _ZN9tesseract15TessTsvRendererC1EPKcb */
/* Demangled: tesseract::TessTsvRenderer::TessTsvRenderer(char const*, bool) */
int _ZN9tesseract15TessTsvRendererC1EPKcb(void);

/* Symbol: _ZN9tesseract13TessLangModel12number_dawg_E */
/* Demangled: tesseract::TessLangModel::number_dawg_ */
extern void* _ZN9tesseract13TessLangModel12number_dawg_E;

/* Symbol: _ZNK12BlamerBundle15IncorrectReasonEv */
/* Demangled: BlamerBundle::IncorrectReason() const */
int _ZNK12BlamerBundle15IncorrectReasonEv(void);

/* Symbol: _ZN9tesseract8Classify17MakeNewTempProtosEP18FEATURE_SET_STRUCTiPhP16INT_CLASS_STRUCTP18ADAPT_CLASS_STRUCTPj */
/* Demangled: tesseract::Classify::MakeNewTempProtos(FEATURE_SET_STRUCT*, int, unsigned char*, INT_CLASS_STRUCT*, ADAPT_CLASS_STRUCT*, unsigned int*) */
int _ZN9tesseract8Classify17MakeNewTempProtosEP18FEATURE_SET_STRUCTiPhP16INT_CLASS_STRUCTP18ADAPT_CLASS_STRUCTPj(void);

/* Symbol: _ZN9tesseract22ColPartition_c1_zapperEPv */
/* Demangled: tesseract::ColPartition_c1_zapper(void*) */
int _ZN9tesseract22ColPartition_c1_zapperEPv(void);

/* Symbol: _ZN4LLSQ5clearEv */
/* Demangled: LLSQ::clear() */
int _ZN4LLSQ5clearEv(void);

/* Symbol: _Z10FreeKDNodeP6KDNODE */
/* Demangled: FreeKDNode(KDNODE*) */
int _Z10FreeKDNodeP6KDNODE(void);

/* Symbol: _ZN9tesseract21TesseractCubeCombinerD2Ev */
/* Demangled: tesseract::TesseractCubeCombiner::~TesseractCubeCombiner() */
int _ZN9tesseract21TesseractCubeCombinerD2Ev(void);

/* Symbol: _ZN8TO_BLOCKC2EP5BLOCK */
/* Demangled: TO_BLOCK::TO_BLOCK(BLOCK*) */
int _ZN8TO_BLOCKC2EP5BLOCK(void);

/* Symbol: _ZN9tesseract17TrainingSampleSet10KillSampleEPNS_14TrainingSampleE */
/* Demangled: tesseract::TrainingSampleSet::KillSample(tesseract::TrainingSample*) */
int _ZN9tesseract17TrainingSampleSet10KillSampleEPNS_14TrainingSampleE(void);

/* Symbol: _Z17FreeMicroFeaturesP8list_rec */
/* Demangled: FreeMicroFeatures(list_rec*) */
int _Z17FreeMicroFeaturesP8list_rec(void);

/* Symbol: _ZN9tesseract13TessLangModel9ood_dawg_E */
/* Demangled: tesseract::TessLangModel::ood_dawg_ */
extern void* _ZN9tesseract13TessLangModel9ood_dawg_E;

/* Symbol: _ZTVN9tesseract11StrokeWidthE */
/* Demangled: vtable for tesseract::StrokeWidth */
extern void* _ZTVN9tesseract11StrokeWidthE;

/* Symbol: _ZN9tesseract17CubeLineSegmenterC2EPNS_15CubeRecoContextEP3Pix */
/* Demangled: tesseract::CubeLineSegmenter::CubeLineSegmenter(tesseract::CubeRecoContext*, Pix*) */
int _ZN9tesseract17CubeLineSegmenterC2EPNS_15CubeRecoContextEP3Pix(void);

/* Symbol: textord_blocksall_fixed */
/* Demangled: textord_blocksall_fixed */
extern void* textord_blocksall_fixed;

/* Symbol: _ZN8PAGE_RESC1EbP10BLOCK_LISTPP11WERD_CHOICE */
/* Demangled: PAGE_RES::PAGE_RES(bool, BLOCK_LIST*, WERD_CHOICE**) */
int _ZN8PAGE_RESC1EbP10BLOCK_LISTPP11WERD_CHOICE(void);

/* Symbol: dirtab */
/* Demangled: dirtab */
extern void* dirtab;

/* Symbol: _ZNK9tesseract10ShapeTable14CommonUnicharsEii */
/* Demangled: tesseract::ShapeTable::CommonUnichars(int, int) const */
int _ZNK9tesseract10ShapeTable14CommonUnicharsEii(void);

/* Symbol: _ZN9tesseract13LanguageModel16GenerateDawgInfoEbiiRK11BLOB_CHOICEPKNS_17ViterbiStateEntryE */
/* Demangled: tesseract::LanguageModel::GenerateDawgInfo(bool, int, int, BLOB_CHOICE const&, tesseract::ViterbiStateEntry const*) */
int _ZN9tesseract13LanguageModel16GenerateDawgInfoEbiiRK11BLOB_CHOICEPKNS_17ViterbiStateEntryE(void);

/* Symbol: _ZN9tesseract13MasterTrainer13ShapeDistanceERKNS_10ShapeTableEii */
/* Demangled: tesseract::MasterTrainer::ShapeDistance(tesseract::ShapeTable const&, int, int) */
int _ZN9tesseract13MasterTrainer13ShapeDistanceERKNS_10ShapeTableEii(void);

/* Symbol: _ZN9tesseract11TessBaseAPIC2Ev */
/* Demangled: tesseract::TessBaseAPI::TessBaseAPI() */
int _ZN9tesseract11TessBaseAPIC2Ev(void);

/* Symbol: _ZTV16GENERIC_2D_ARRAYIiE */
/* Demangled: vtable for GENERIC_2D_ARRAY<int> */
extern void* _ZTV16GENERIC_2D_ARRAYIiE;

/* Symbol: _ZN12KDTreeSearch6SearchEPiPfPPv */
/* Demangled: KDTreeSearch::Search(int*, float*, void**) */
int _ZN12KDTreeSearch6SearchEPiPfPPv(void);

/* Symbol: _ZN9tesseract10BeamSearchC2EPNS_15CubeRecoContextEb */
/* Demangled: tesseract::BeamSearch::BeamSearch(tesseract::CubeRecoContext*, bool) */
int _ZN9tesseract10BeamSearchC2EPNS_15CubeRecoContextEb(void);

/* Symbol: _ZNK9tesseract13WordSizeModel4CostEPPNS_8CharSampEi */
/* Demangled: tesseract::WordSizeModel::Cost(tesseract::CharSamp**, int) const */
int _ZNK9tesseract13WordSizeModel4CostEPPNS_8CharSampEi(void);

/* Symbol: _Z15restore_outlineP6EDGEPT */
/* Demangled: restore_outline(EDGEPT*) */
int _Z15restore_outlineP6EDGEPT(void);

/* Symbol: _ZN9tesseract18CubeTessClassifierC1EPNS_9TesseractE */
/* Demangled: tesseract::CubeTessClassifier::CubeTessClassifier(tesseract::Tesseract*) */
int _ZN9tesseract18CubeTessClassifierC1EPNS_9TesseractE(void);

/* Symbol: _ZN10UNICHARSET23set_black_and_whitelistEPKcS1_S1_ */
/* Demangled: UNICHARSET::set_black_and_whitelist(char const*, char const*, char const*) */
int _ZN10UNICHARSET23set_black_and_whitelistEPKcS1_S1_(void);

/* Symbol: _ZN13GenericVectorIN9tesseract12ErrorCounter6CountsEE12init_to_sizeEiS2_ */
/* Demangled: GenericVector<tesseract::ErrorCounter::Counts>::init_to_size(int, tesseract::ErrorCounter::Counts) */
int _ZN13GenericVectorIN9tesseract12ErrorCounter6CountsEE12init_to_sizeEiS2_(void);

/* Symbol: TessBaseAPIGetComponentImages */
/* Demangled: TessBaseAPIGetComponentImages */
int TessBaseAPIGetComponentImages(void);

/* Symbol: _ZN13GenericVectorIS_IiEE7reserveEi */
/* Demangled: GenericVector<GenericVector<int> >::reserve(int) */
int _ZN13GenericVectorIS_IiEE7reserveEi(void);

/* Symbol: _ZN10POLY_BLOCK4moveE6ICOORD */
/* Demangled: POLY_BLOCK::move(ICOORD) */
int _ZN10POLY_BLOCK4moveE6ICOORD(void);

/* Symbol: _Z14NormEvidenceOfd */
/* Demangled: NormEvidenceOf(double) */
int _Z14NormEvidenceOfd(void);

/* Symbol: _Z8s_adjoinP8list_recPvPFiS1_S1_E */
/* Demangled: s_adjoin(list_rec*, void*, int (*)(void*, void*)) */
int _Z8s_adjoinP8list_recPvPFiS1_S1_E(void);

/* Symbol: _ZN9tesseract9NeuralNet13SetConnectionEii */
/* Demangled: tesseract::NeuralNet::SetConnection(int, int) */
int _ZN9tesseract9NeuralNet13SetConnectionEii(void);

/* Symbol: _ZN9tesseract7TabFind15RightEdgeForBoxERK4TBOXbb */
/* Demangled: tesseract::TabFind::RightEdgeForBox(TBOX const&, bool, bool) */
int _ZN9tesseract7TabFind15RightEdgeForBoxERK4TBOXbb(void);

/* Symbol: _ZN13GenericVectorIP11BLOB_CHOICEE15double_the_sizeEv */
/* Demangled: GenericVector<BLOB_CHOICE*>::double_the_size() */
int _ZN13GenericVectorIP11BLOB_CHOICEE15double_the_sizeEv(void);

/* Symbol: _ZNK9tesseract10BeamSearch3AltEi */
/* Demangled: tesseract::BeamSearch::Alt(int) const */
int _ZNK9tesseract10BeamSearch3AltEi(void);

/* Symbol: _Z20most_overlapping_rowP11TO_ROW_LISTP8BLOBNBOX */
/* Demangled: most_overlapping_row(TO_ROW_LIST*, BLOBNBOX*) */
int _Z20most_overlapping_rowP11TO_ROW_LISTP8BLOBNBOX(void);

/* Symbol: _ZN9tesseract9Tesseract23ResetAdaptiveClassifierEv */
/* Demangled: tesseract::Tesseract::ResetAdaptiveClassifier() */
int _ZN9tesseract9Tesseract23ResetAdaptiveClassifierEv(void);

/* Symbol: _ZN9tesseract9CubeUtils9Cost2ProbEi */
/* Demangled: tesseract::CubeUtils::Cost2Prob(int) */
int _ZN9tesseract9CubeUtils9Cost2ProbEi(void);

/* Symbol: _ZN14ScriptDetector14korean_script_E */
/* Demangled: ScriptDetector::korean_script_ */
extern void* _ZN14ScriptDetector14korean_script_E;

/* Symbol: _ZN9tesseract22StrongEvidenceClassifyEiP13GenericVectorINS_19RowScratchRegistersEEiiPNS_15ParagraphTheoryE */
/* Demangled: tesseract::StrongEvidenceClassify(int, GenericVector<tesseract::RowScratchRegisters>*, int, int, tesseract::ParagraphTheory*) */
int _ZN9tesseract22StrongEvidenceClassifyEiP13GenericVectorINS_19RowScratchRegistersEEiiPNS_15ParagraphTheoryE(void);

/* Symbol: _ZN8TO_BLOCK5clearEv */
/* Demangled: TO_BLOCK::clear() */
int _ZN8TO_BLOCK5clearEv(void);

/* Symbol: _ZN9tesseract12DocumentData11SetDocumentEPKcS2_xPFbRK6STRINGP13GenericVectorIcEE */
/* Demangled: tesseract::DocumentData::SetDocument(char const*, char const*, long long, bool (*)(STRING const&, GenericVector<char>*)) */
int _ZN9tesseract12DocumentData11SetDocumentEPKcS2_xPFbRK6STRINGP13GenericVectorIcEE(void);

/* Symbol: _Z14ReadPermConfigP7__sFILE */
/* Demangled: ReadPermConfig(__sFILE*) */
int _Z14ReadPermConfigP7__sFILE(void);

/* Symbol: _ZN9tesseract7TabFind5ResetEv */
/* Demangled: tesseract::TabFind::Reset() */
int _ZN9tesseract7TabFind5ResetEv(void);

/* Symbol: _ZN9tesseract11TessBaseAPI13AnalyseLayoutEv */
/* Demangled: tesseract::TessBaseAPI::AnalyseLayout() */
int _ZN9tesseract11TessBaseAPI13AnalyseLayoutEv(void);

/* Symbol: TessResultIteratorWordFontAttributes */
/* Demangled: TessResultIteratorWordFontAttributes */
int TessResultIteratorWordFontAttributes(void);

/* Symbol: _ZTVN9tesseract19TessBoxTextRendererE */
/* Demangled: vtable for tesseract::TessBoxTextRenderer */
extern void* _ZTVN9tesseract19TessBoxTextRendererE;

/* Symbol: textord_tabfind_show_images */
/* Demangled: textord_tabfind_show_images */
extern void* textord_tabfind_show_images;

/* Symbol: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeClear */
/* Demangled: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeClear */
int Java_com_googlecode_tesseract_android_TessBaseAPI_nativeClear(void);

/* Symbol: _ZN9tesseract11TessBaseAPI16InternalSetImageEv */
/* Demangled: tesseract::TessBaseAPI::InternalSetImage() */
int _ZN9tesseract11TessBaseAPI16InternalSetImageEv(void);

/* Symbol: _ZN9tesseract11TessBaseAPI26set_min_orientation_marginEd */
/* Demangled: tesseract::TessBaseAPI::set_min_orientation_margin(double) */
int _ZN9tesseract11TessBaseAPI26set_min_orientation_marginEd(void);

/* Symbol: _ZTVN9tesseract16ImageThresholderE */
/* Demangled: vtable for tesseract::ImageThresholder */
extern void* _ZTVN9tesseract16ImageThresholderE;

/* Symbol: _ZNK9tesseract4Dawg15check_for_wordsEPKcRK10UNICHARSETb */
/* Demangled: tesseract::Dawg::check_for_words(char const*, UNICHARSET const&, bool) const */
int _ZNK9tesseract4Dawg15check_for_wordsEPKcRK10UNICHARSETb(void);

/* Symbol: _ZN9tesseract15ColPartitionSet18DisplayColumnEdgesEiiP10ScrollView */
/* Demangled: tesseract::ColPartitionSet::DisplayColumnEdges(int, int, ScrollView*) */
int _ZN9tesseract15ColPartitionSet18DisplayColumnEdgesEiiP10ScrollView(void);

/* Symbol: Java_com_googlecode_tesseract_android_ResultIterator_nativeDelete */
/* Demangled: Java_com_googlecode_tesseract_android_ResultIterator_nativeDelete */
int Java_com_googlecode_tesseract_android_ResultIterator_nativeDelete(void);

/* Symbol: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeGetHOCRText */
/* Demangled: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeGetHOCRText */
int Java_com_googlecode_tesseract_android_TessBaseAPI_nativeGetHOCRText(void);

/* Symbol: _ZN9tesseract12PageIteratorC2ERKS0_ */
/* Demangled: tesseract::PageIterator::PageIterator(tesseract::PageIterator const&) */
int _ZN9tesseract12PageIteratorC2ERKS0_(void);

/* Symbol: _ZNSt3__16vectorIN9tesseract9NeuralNet4NodeENS_9allocatorIS3_EEE8__appendEj */
/* Demangled: std::__1::vector<tesseract::NeuralNet::Node, std::__1::allocator<tesseract::NeuralNet::Node> >::__append(unsigned int) */
int _ZNSt3__16vectorIN9tesseract9NeuralNet4NodeENS_9allocatorIS3_EEE8__appendEj(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract15FontSpacingInfoEE12init_to_sizeEiS2_ */
/* Demangled: GenericVector<tesseract::FontSpacingInfo*>::init_to_size(int, tesseract::FontSpacingInfo*) */
int _ZN13GenericVectorIPN9tesseract15FontSpacingInfoEE12init_to_sizeEiS2_(void);

/* Symbol: _Z11expand_rows6ICOORDP8TO_BLOCKf6FCOORDih */
/* Demangled: expand_rows(ICOORD, TO_BLOCK*, float, FCOORD, int, unsigned char) */
int _Z11expand_rows6ICOORDP8TO_BLOCKf6FCOORDih(void);

/* Symbol: _ZN13GenericVectorIiE7reserveEi */
/* Demangled: GenericVector<int>::reserve(int) */
int _ZN13GenericVectorIiE7reserveEi(void);

/* Symbol: _ZN6ELIST214internal_clearEPFvP11ELIST2_LINKE */
/* Demangled: ELIST2::internal_clear(void (*)(ELIST2_LINK*)) */
int _ZN6ELIST214internal_clearEPFvP11ELIST2_LINKE(void);

/* Symbol: TessBaseAPIGetThresholdedImage */
/* Demangled: TessBaseAPIGetThresholdedImage */
int TessBaseAPIGetThresholdedImage(void);

/* Symbol: _ZN13GenericVectorIN9tesseract10ScoredFontEE9push_backES1_ */
/* Demangled: GenericVector<tesseract::ScoredFont>::push_back(tesseract::ScoredFont) */
int _ZN13GenericVectorIN9tesseract10ScoredFontEE9push_backES1_(void);

/* Symbol: _ZN11WERD_CHOICE30reverse_and_mirror_unichar_idsEv */
/* Demangled: WERD_CHOICE::reverse_and_mirror_unichar_ids() */
int _ZN11WERD_CHOICE30reverse_and_mirror_unichar_idsEv(void);

/* Symbol: _ZN9tesseract12IndexMapBiDi4InitEib */
/* Demangled: tesseract::IndexMapBiDi::Init(int, bool) */
int _ZN9tesseract12IndexMapBiDi4InitEib(void);

/* Symbol: _ZN9tesseract21ConvNetCharClassifier4InitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_PNS_9LangModelE */
/* Demangled: tesseract::ConvNetCharClassifier::Init(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, tesseract::LangModel*) */
int _ZN9tesseract21ConvNetCharClassifier4InitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_PNS_9LangModelE(void);

/* Symbol: _ZN9tesseract15TessLangModEdgeC2EPNS_15CubeRecoContextEPKNS_4DawgExi */
/* Demangled: tesseract::TessLangModEdge::TessLangModEdge(tesseract::CubeRecoContext*, tesseract::Dawg const*, long long, int) */
int _ZN9tesseract15TessLangModEdgeC2EPNS_15CubeRecoContextEPKNS_4DawgExi(void);

/* Symbol: _ZN9tesseract11TableFinder24DeleteSingleColumnTablesEv */
/* Demangled: tesseract::TableFinder::DeleteSingleColumnTables() */
int _ZN9tesseract11TableFinder24DeleteSingleColumnTablesEv(void);

/* Symbol: _ZN9tesseract7Textord21improve_row_thresholdEP6TO_ROWP5STATS */
/* Demangled: tesseract::Textord::improve_row_threshold(TO_ROW*, STATS*) */
int _ZN9tesseract7Textord21improve_row_thresholdEP6TO_ROWP5STATS(void);

/* Symbol: _ZN9tesseract11TessBaseAPI16DetectParagraphsEb */
/* Demangled: tesseract::TessBaseAPI::DetectParagraphs(bool) */
int _ZN9tesseract11TessBaseAPI16DetectParagraphsEb(void);

/* Symbol: _ZN8WERD_RES19FakeWordFromRatingsE12PermuterType */
/* Demangled: WERD_RES::FakeWordFromRatings(PermuterType) */
int _ZN8WERD_RES19FakeWordFromRatingsE12PermuterType(void);

/* Symbol: _Z4joinP8list_recS0_ */
/* Demangled: join(list_rec*, list_rec*) */
int _Z4joinP8list_recS0_(void);

/* Symbol: _Z22linear_spline_baselineP6TO_ROWP8TO_BLOCKRiPi */
/* Demangled: linear_spline_baseline(TO_ROW*, TO_BLOCK*, int&, int*) */
int _Z22linear_spline_baselineP6TO_ROWP8TO_BLOCKRiPi(void);

/* Symbol: _Z18create_fxdebug_winv */
/* Demangled: create_fxdebug_win() */
int _Z18create_fxdebug_winv(void);

/* Symbol: TessBaseAPIGetOpenCLDevice */
/* Demangled: TessBaseAPIGetOpenCLDevice */
int TessBaseAPIGetOpenCLDevice(void);

/* Symbol: _ZN13GenericVectorIN9tesseract16FloatWordFeatureEE7reserveEi */
/* Demangled: GenericVector<tesseract::FloatWordFeature>::reserve(int) */
int _ZN13GenericVectorIN9tesseract16FloatWordFeatureEE7reserveEi(void);

/* Symbol: _Z7destroyP8list_rec */
/* Demangled: destroy(list_rec*) */
int _Z7destroyP8list_rec(void);

/* Symbol: _ZN13GenericVectorIN9tesseract10ScoredFontEE5clearEv */
/* Demangled: GenericVector<tesseract::ScoredFont>::clear() */
int _ZN13GenericVectorIN9tesseract10ScoredFontEE5clearEv(void);

/* Symbol: _ZN13GenericVectorIN9tesseract10DetLineFit10PointWidthEE15double_the_sizeEv */
/* Demangled: GenericVector<tesseract::DetLineFit::PointWidth>::double_the_size() */
int _ZN13GenericVectorIN9tesseract10DetLineFit10PointWidthEE15double_the_sizeEv(void);

/* Symbol: classify_norm_adj_curl */
/* Demangled: classify_norm_adj_curl */
extern void* classify_norm_adj_curl;

/* Symbol: _ZN9tesseract11CharAltListD2Ev */
/* Demangled: tesseract::CharAltList::~CharAltList() */
int _ZN9tesseract11CharAltListD2Ev(void);

/* Symbol: pitsync_offset_freecut_fraction */
/* Demangled: pitsync_offset_freecut_fraction */
extern void* pitsync_offset_freecut_fraction;

/* Symbol: _ZN13GenericVectorIN9tesseract8BlobDataEE5clearEv */
/* Demangled: GenericVector<tesseract::BlobData>::clear() */
int _ZN13GenericVectorIN9tesseract8BlobDataEE5clearEv(void);

/* Symbol: _ZN9tesseract18write_spacing_infoEP7__sFILERKNS_8FontInfoE */
/* Demangled: tesseract::write_spacing_info(__sFILE*, tesseract::FontInfo const&) */
int _ZN9tesseract18write_spacing_infoEP7__sFILERKNS_8FontInfoE(void);

/* Symbol: _Z16ICOORDELT_zapperP10ELIST_LINK */
/* Demangled: ICOORDELT_zapper(ELIST_LINK*) */
int _Z16ICOORDELT_zapperP10ELIST_LINK(void);

/* Symbol: _ZNK9tesseract15CubeRecoContext15GetDataFilePathEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: tesseract::CubeRecoContext::GetDataFilePath(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) const */
int _ZNK9tesseract15CubeRecoContext15GetDataFilePathEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN3REJ15setrej_unlv_rejEv */
/* Demangled: REJ::setrej_unlv_rej() */
int _ZN3REJ15setrej_unlv_rejEv(void);

/* Symbol: _ZN7UNICHARC2EPKci */
/* Demangled: UNICHAR::UNICHAR(char const*, int) */
int _ZN7UNICHARC2EPKci(void);

/* Symbol: _Z8KDDeleteP6KDTREEPfPv */
/* Demangled: KDDelete(KDTREE*, float*, void*) */
int _Z8KDDeleteP6KDTREEPfPv(void);

/* Symbol: _ZN9tesseract14SampleIteratorD1Ev */
/* Demangled: tesseract::SampleIterator::~SampleIterator() */
int _ZN9tesseract14SampleIteratorD1Ev(void);

/* Symbol: _Z20FindDirectionChangesP8list_recff */
/* Demangled: FindDirectionChanges(list_rec*, float, float) */
int _Z20FindDirectionChangesP8list_recff(void);

/* Symbol: _ZN9tesseract11StrokeWidth20FindLeaderPartitionsEP8TO_BLOCKPNS_16ColPartitionGridE */
/* Demangled: tesseract::StrokeWidth::FindLeaderPartitions(TO_BLOCK*, tesseract::ColPartitionGrid*) */
int _ZN9tesseract11StrokeWidth20FindLeaderPartitionsEP8TO_BLOCKPNS_16ColPartitionGridE(void);

/* Symbol: _ZN9tesseract11TableFinder18SetVerticalSpacingEPNS_12ColPartitionE */
/* Demangled: tesseract::TableFinder::SetVerticalSpacing(tesseract::ColPartition*) */
int _ZN9tesseract11TableFinder18SetVerticalSpacingEPNS_12ColPartitionE(void);

/* Symbol: _ZN9tesseract15StructuredTable19set_max_text_heightEi */
/* Demangled: tesseract::StructuredTable::set_max_text_height(int) */
int _ZN9tesseract15StructuredTable19set_max_text_heightEi(void);

/* Symbol: _ZNK9tesseract15IntFeatureSpace17PositionFromIndexEi */
/* Demangled: tesseract::IntFeatureSpace::PositionFromIndex(int) const */
int _ZNK9tesseract15IntFeatureSpace17PositionFromIndexEi(void);

/* Symbol: _ZN9tesseract7ConComp7SegmentEiPi */
/* Demangled: tesseract::ConComp::Segment(int, int*) */
int _ZN9tesseract7ConComp7SegmentEiPi(void);

/* Symbol: _ZN9tesseract15TessLangModEdgeC1EPNS_15CubeRecoContextEi */
/* Demangled: tesseract::TessLangModEdge::TessLangModEdge(tesseract::CubeRecoContext*, int) */
int _ZN9tesseract15TessLangModEdgeC1EPNS_15CubeRecoContextEi(void);

/* Symbol: _ZN9tesseract12ColPartition17SetColumnGoodnessEP19TessResultCallback1IbiE */
/* Demangled: tesseract::ColPartition::SetColumnGoodness(TessResultCallback1<bool, int>*) */
int _ZN9tesseract12ColPartition17SetColumnGoodnessEP19TessResultCallback1IbiE(void);

/* Symbol: _ZN9tesseract10ColSegmentD1Ev */
/* Demangled: tesseract::ColSegment::~ColSegment() */
int _ZN9tesseract10ColSegmentD1Ev(void);

/* Symbol: _ZN9tesseract7Wordrec12combine_seamERKNS_11GenericHeapINS_12KDPtrPairDecIf4SEAMEEEEPKS3_PNS1_INS_12KDPtrPairIncIfS3_EEEE */
/* Demangled: tesseract::Wordrec::combine_seam(tesseract::GenericHeap<tesseract::KDPtrPairDec<float, SEAM> > const&, SEAM const*, tesseract::GenericHeap<tesseract::KDPtrPairInc<float, SEAM> >*) */
int _ZN9tesseract7Wordrec12combine_seamERKNS_11GenericHeapINS_12KDPtrPairDecIf4SEAMEEEEPKS3_PNS1_INS_12KDPtrPairIncIfS3_EEEE(void);

/* Symbol: _ZN9tesseract9Tesseract18extract_cube_stateEPNS_10CubeObjectEPiPP4BoxaPPPNS_8CharSampE */
/* Demangled: tesseract::Tesseract::extract_cube_state(tesseract::CubeObject*, int*, Boxa**, tesseract::CharSamp***) */
int _ZN9tesseract9Tesseract18extract_cube_stateEPNS_10CubeObjectEPiPP4BoxaPPPNS_8CharSampE(void);

/* Symbol: _Z14read_unlv_file6STRINGiiP10BLOCK_LIST */
/* Demangled: read_unlv_file(STRING, int, int, BLOCK_LIST*) */
int _Z14read_unlv_file6STRINGiiP10BLOCK_LIST(void);

/* Symbol: _ZN9tesseract19RowScratchRegisters11AddBodyLineEPK14ParagraphModel */
/* Demangled: tesseract::RowScratchRegisters::AddBodyLine(ParagraphModel const*) */
int _ZN9tesseract19RowScratchRegisters11AddBodyLineEPK14ParagraphModel(void);

/* Symbol: _ZN9tesseract16ColPartitionGrid20GridSmoothNeighboursE16BlobTextFlowTypeP3PixRK4TBOXRK6FCOORD */
/* Demangled: tesseract::ColPartitionGrid::GridSmoothNeighbours(BlobTextFlowType, Pix*, TBOX const&, FCOORD const&) */
int _ZN9tesseract16ColPartitionGrid20GridSmoothNeighboursE16BlobTextFlowTypeP3PixRK4TBOXRK6FCOORD(void);

/* Symbol: textord_oldbl_jumplimit */
/* Demangled: textord_oldbl_jumplimit */
extern void* textord_oldbl_jumplimit;

/* Symbol: _ZN9tesseract12DocumentDataD2Ev */
/* Demangled: tesseract::DocumentData::~DocumentData() */
int _ZN9tesseract12DocumentDataD2Ev(void);

/* Symbol: _Z15WriteFeatureSetP18FEATURE_SET_STRUCTP6STRING */
/* Demangled: WriteFeatureSet(FEATURE_SET_STRUCT*, STRING*) */
int _Z15WriteFeatureSetP18FEATURE_SET_STRUCTP6STRING(void);

/* Symbol: _ZNK9tesseract4Bmp813IsBlankColumnEi */
/* Demangled: tesseract::Bmp8::IsBlankColumn(int) const */
int _ZNK9tesseract4Bmp813IsBlankColumnEi(void);

/* Symbol: _ZN9tesseract9DawgCache15GetSquishedDawgERK6STRINGPKcNS_12TessdataTypeEi */
/* Demangled: tesseract::DawgCache::GetSquishedDawg(STRING const&, char const*, tesseract::TessdataType, int) */
int _ZN9tesseract9DawgCache15GetSquishedDawgERK6STRINGPKcNS_12TessdataTypeEi(void);

/* Symbol: _ZN9tesseract15SortByBoxBottomI8BLOBNBOXEEiPKvS3_ */
/* Demangled: int tesseract::SortByBoxBottom<BLOBNBOX>(void const*, void const*) */
int _ZN9tesseract15SortByBoxBottomI8BLOBNBOXEEiPKvS3_(void);

/* Symbol: _Z15free_crackedgesP9CRACKEDGE */
/* Demangled: free_crackedges(CRACKEDGE*) */
int _Z15free_crackedgesP9CRACKEDGE(void);

/* Symbol: _ZN11WERD_CHOICEC1EPKcRK10UNICHARSET */
/* Demangled: WERD_CHOICE::WERD_CHOICE(char const*, UNICHARSET const&) */
int _ZN11WERD_CHOICEC1EPKcRK10UNICHARSET(void);

/* Symbol: _ZN13GenericVectorIN9tesseract11ShapeRatingEE9push_backES1_ */
/* Demangled: GenericVector<tesseract::ShapeRating>::push_back(tesseract::ShapeRating) */
int _ZN13GenericVectorIN9tesseract11ShapeRatingEE9push_backES1_(void);

/* Symbol: _ZTVN9tesseract21ConvNetCharClassifierE */
/* Demangled: vtable for tesseract::ConvNetCharClassifier */
extern void* _ZTVN9tesseract21ConvNetCharClassifierE;

/* Symbol: _ZN9tesseract12SearchColumn4SortEv */
/* Demangled: tesseract::SearchColumn::Sort() */
int _ZN9tesseract12SearchColumn4SortEv(void);

/* Symbol: _ZN9tesseract15ColPartitionSet15RelinquishPartsEv */
/* Demangled: tesseract::ColPartitionSet::RelinquishParts() */
int _ZN9tesseract15ColPartitionSet15RelinquishPartsEv(void);

/* Symbol: textord_spacesize_ratiofp */
/* Demangled: textord_spacesize_ratiofp */
extern void* textord_spacesize_ratiofp;

/* Symbol: _ZNK4SEAM12bounding_boxEv */
/* Demangled: SEAM::bounding_box() const */
int _ZNK4SEAM12bounding_boxEv(void);

/* Symbol: _ZN9tesseract13TessLangModel8GetEdgesEPNS_11CharAltListEPNS_11LangModEdgeEPi */
/* Demangled: tesseract::TessLangModel::GetEdges(tesseract::CharAltList*, tesseract::LangModEdge*, int*) */
int _ZN9tesseract13TessLangModel8GetEdgesEPNS_11CharAltListEPNS_11LangModEdgeEPi(void);

/* Symbol: _ZN9tesseract15TableRecognizer4InitEv */
/* Demangled: tesseract::TableRecognizer::Init() */
int _ZN9tesseract15TableRecognizer4InitEv(void);

/* Symbol: _ZN9tesseract16TessHOcrRendererC2EPKc */
/* Demangled: tesseract::TessHOcrRenderer::TessHOcrRenderer(char const*) */
int _ZN9tesseract16TessHOcrRendererC2EPKc(void);

/* Symbol: _ZN9tesseract9Tesseract17PrerecAllWordsParERK13GenericVectorINS_8WordDataEE */
/* Demangled: tesseract::Tesseract::PrerecAllWordsPar(GenericVector<tesseract::WordData> const&) */
int _ZN9tesseract9Tesseract17PrerecAllWordsParERK13GenericVectorINS_8WordDataEE(void);

/* Symbol: _Z15ExpandBitVectorPji */
/* Demangled: ExpandBitVector(unsigned int*, int) */
int _Z15ExpandBitVectorPji(void);

/* Symbol: _ZN9tesseract10GridSearchINS_10ColSegmentENS_16ColSegment_CLISTENS_15ColSegment_C_ITEE14NextFullSearchEv */
/* Demangled: tesseract::GridSearch<tesseract::ColSegment, tesseract::ColSegment_CLIST, tesseract::ColSegment_C_IT>::NextFullSearch() */
int _ZN9tesseract10GridSearchINS_10ColSegmentENS_16ColSegment_CLISTENS_15ColSegment_C_ITEE14NextFullSearchEv(void);

/* Symbol: _ZNK9tesseract11ParamsModel10SaveToFileEPKc */
/* Demangled: tesseract::ParamsModel::SaveToFile(char const*) const */
int _ZNK9tesseract11ParamsModel10SaveToFileEPKc(void);

/* Symbol: Java_com_googlecode_tesseract_android_ResultIterator_nativeConfidence */
/* Demangled: Java_com_googlecode_tesseract_android_ResultIterator_nativeConfidence */
int Java_com_googlecode_tesseract_android_ResultIterator_nativeConfidence(void);

/* Symbol: _ZN13WERD_RES_LIST9deep_copyEPKS_PFP8WERD_RESPKS2_E */
/* Demangled: WERD_RES_LIST::deep_copy(WERD_RES_LIST const*, WERD_RES* (*)(WERD_RES const*)) */
int _ZN13WERD_RES_LIST9deep_copyEPKS_PFP8WERD_RESPKS2_E(void);

/* Symbol: _ZN13GenericVectorIPKN9tesseract14TrainingSampleEE7reserveEi */
/* Demangled: GenericVector<tesseract::TrainingSample const*>::reserve(int) */
int _ZN13GenericVectorIPKN9tesseract14TrainingSampleEE7reserveEi(void);

/* Symbol: _ZN9tesseract22ViterbiStateEntry_LIST9deep_copyEPKS0_PFPNS_17ViterbiStateEntryEPKS3_E */
/* Demangled: tesseract::ViterbiStateEntry_LIST::deep_copy(tesseract::ViterbiStateEntry_LIST const*, tesseract::ViterbiStateEntry* (*)(tesseract::ViterbiStateEntry const*)) */
int _ZN9tesseract22ViterbiStateEntry_LIST9deep_copyEPKS0_PFPNS_17ViterbiStateEntryEPKS3_E(void);

/* Symbol: _ZNK9tesseract9ImageData9SerializeEPNS_5TFileE */
/* Demangled: tesseract::ImageData::Serialize(tesseract::TFile*) const */
int _ZNK9tesseract9ImageData9SerializeEPNS_5TFileE(void);

/* Symbol: _ZN9tesseract12ColPartition20RefinePartnersByTypeEbPNS_18ColPartition_CLISTE */
/* Demangled: tesseract::ColPartition::RefinePartnersByType(bool, tesseract::ColPartition_CLIST*) */
int _ZN9tesseract12ColPartition20RefinePartnersByTypeEbPNS_18ColPartition_CLISTE(void);

/* Symbol: _ZNK9tesseract18TextlineProjection21TruncateToImageBoundsEP6TPOINT */
/* Demangled: tesseract::TextlineProjection::TruncateToImageBounds(TPOINT*) const */
int _ZNK9tesseract18TextlineProjection21TruncateToImageBoundsEP6TPOINT(void);

/* Symbol: _ZN9tesseract9Tesseract15SetupApplyBoxesERK13GenericVectorI4TBOXEP10BLOCK_LIST */
/* Demangled: tesseract::Tesseract::SetupApplyBoxes(GenericVector<TBOX> const&, BLOCK_LIST*) */
int _ZN9tesseract9Tesseract15SetupApplyBoxesERK13GenericVectorI4TBOXEP10BLOCK_LIST(void);

/* Symbol: _ZN9tesseract7Textord18isolated_row_statsEP6TO_ROWP6GAPMAPP5STATShss */
/* Demangled: tesseract::Textord::isolated_row_stats(TO_ROW*, GAPMAP*, STATS*, unsigned char, short, short) */
int _ZN9tesseract7Textord18isolated_row_statsEP6TO_ROWP6GAPMAPP5STATShss(void);

/* Symbol: _ZN9tesseract8Classify23ComputeIntCharNormArrayERK14FEATURE_STRUCTPh */
/* Demangled: tesseract::Classify::ComputeIntCharNormArray(FEATURE_STRUCT const&, unsigned char*) */
int _ZN9tesseract8Classify23ComputeIntCharNormArrayERK14FEATURE_STRUCTPh(void);

/* Symbol: _ZN9tesseract11TessBaseAPI9FindLinesEv */
/* Demangled: tesseract::TessBaseAPI::FindLines() */
int _ZN9tesseract11TessBaseAPI9FindLinesEv(void);

/* Symbol: textord_descx_ratio_max */
/* Demangled: textord_descx_ratio_max */
extern void* textord_descx_ratio_max;

/* Symbol: textord_words_width_ile */
/* Demangled: textord_words_width_ile */
extern void* textord_words_width_ile;

/* Symbol: _ZN9tesseract9Tesseract13fill_werd_resERKNS_7BoxWordEPKcP8WERD_RES */
/* Demangled: tesseract::Tesseract::fill_werd_res(tesseract::BoxWord const&, char const*, WERD_RES*) */
int _ZN9tesseract9Tesseract13fill_werd_resERKNS_7BoxWordEPKcP8WERD_RES(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract12ColPartitionEE9push_backES2_ */
/* Demangled: GenericVector<tesseract::ColPartition*>::push_back(tesseract::ColPartition*) */
int _ZN13GenericVectorIPN9tesseract12ColPartitionEE9push_backES2_(void);

/* Symbol: _ZN9tesseract15TessdataManager19OverwriteComponentsEPKcPPci */
/* Demangled: tesseract::TessdataManager::OverwriteComponents(char const*, char**, int) */
int _ZN9tesseract15TessdataManager19OverwriteComponentsEPKcPPci(void);

/* Symbol: _ZN9tesseract12ErrorCounterC2ERK10UNICHARSETi */
/* Demangled: tesseract::ErrorCounter::ErrorCounter(UNICHARSET const&, int) */
int _ZN9tesseract12ErrorCounterC2ERK10UNICHARSETi(void);

/* Symbol: _ZTVN9tesseract12CharSampEnumE */
/* Demangled: vtable for tesseract::CharSampEnum */
extern void* _ZTVN9tesseract12CharSampEnumE;

/* Symbol: _ZN9tesseract13WordSizeModel4InitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_ */
/* Demangled: tesseract::WordSizeModel::Init(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN9tesseract13WordSizeModel4InitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_(void);

/* Symbol: _ZNK9tesseract15StructuredTable9row_countEv */
/* Demangled: tesseract::StructuredTable::row_count() const */
int _ZNK9tesseract15StructuredTable9row_countEv(void);

/* Symbol: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeEndDocument */
/* Demangled: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeEndDocument */
int Java_com_googlecode_tesseract_android_TessBaseAPI_nativeEndDocument(void);

/* Symbol: _ZN9tesseract14CubeClassifier21UnicharClassifySampleERKNS_14TrainingSampleEP3PixiiP13GenericVectorINS_13UnicharRatingEE */
/* Demangled: tesseract::CubeClassifier::UnicharClassifySample(tesseract::TrainingSample const&, Pix*, int, int, GenericVector<tesseract::UnicharRating>*) */
int _ZN9tesseract14CubeClassifier21UnicharClassifySampleERKNS_14TrainingSampleEP3PixiiP13GenericVectorINS_13UnicharRatingEE(void);

/* Symbol: _ZNK9tesseract17LTRResultIterator17WordTruthUTF8TextEv */
/* Demangled: tesseract::LTRResultIterator::WordTruthUTF8Text() const */
int _ZNK9tesseract17LTRResultIterator17WordTruthUTF8TextEv(void);

/* Symbol: _ZN9tesseract8Classify17UpdateAmbigsGroupEiP5TBLOB */
/* Demangled: tesseract::Classify::UpdateAmbigsGroup(int, TBLOB*) */
int _ZN9tesseract8Classify17UpdateAmbigsGroupEiP5TBLOB(void);

/* Symbol: _ZN9tesseract11StrokeWidth15MergeDiacriticsEP8TO_BLOCKPNS_16ColPartitionGridE */
/* Demangled: tesseract::StrokeWidth::MergeDiacritics(TO_BLOCK*, tesseract::ColPartitionGrid*) */
int _ZN9tesseract11StrokeWidth15MergeDiacriticsEP8TO_BLOCKPNS_16ColPartitionGridE(void);

/* Symbol: _ZN9tesseract7TabFind29SetVerticalSkewAndParellelizeEii */
/* Demangled: tesseract::TabFind::SetVerticalSkewAndParellelize(int, int) */
int _ZN9tesseract7TabFind29SetVerticalSkewAndParellelizeEii(void);

/* Symbol: _Z11ConvertBlobP5TBLOB */
/* Demangled: ConvertBlob(TBLOB*) */
int _Z11ConvertBlobP5TBLOB(void);

/* Symbol: _ZN9tesseract11TableFinder16GapInXProjectionEPii */
/* Demangled: tesseract::TableFinder::GapInXProjection(int*, int) */
int _ZN9tesseract11TableFinder16GapInXProjectionEPii(void);

/* Symbol: _ZN9tesseract15kAlignmentNamesE */
/* Demangled: tesseract::kAlignmentNames */
extern void* _ZN9tesseract15kAlignmentNamesE;

/* Symbol: textord_dotmatrix_gap */
/* Demangled: textord_dotmatrix_gap */
extern void* textord_dotmatrix_gap;

/* Symbol: _ZN9tesseract18TessResultRenderer11EndDocumentEv */
/* Demangled: tesseract::TessResultRenderer::EndDocument() */
int _ZN9tesseract18TessResultRenderer11EndDocumentEv(void);

/* Symbol: _ZN9tesseract10DetLineFit16ComputeDistancesERK6ICOORDS3_ */
/* Demangled: tesseract::DetLineFit::ComputeDistances(ICOORD const&, ICOORD const&) */
int _ZN9tesseract10DetLineFit16ComputeDistancesERK6ICOORDS3_(void);

/* Symbol: _ZN9tesseract16FeatureChebyshev21ChebyshevCoefficientsERKNSt3__16vectorIfNS1_9allocatorIfEEEEiPf */
/* Demangled: tesseract::FeatureChebyshev::ChebyshevCoefficients(std::__1::vector<float, std::__1::allocator<float> > const&, int, float*) */
int _ZN9tesseract16FeatureChebyshev21ChebyshevCoefficientsERKNSt3__16vectorIfNS1_9allocatorIfEEEEiPf(void);

/* Symbol: textord_chopper_test */
/* Demangled: textord_chopper_test */
extern void* textord_chopper_test;

/* Symbol: _ZN9tesseract7Wordrec15try_point_pairsEPP6EDGEPTsPNS_11GenericHeapINS_12KDPtrPairIncIf4SEAMEEEEPNS4_INS_12KDPtrPairDecIfS6_EEEEPPS6_P5TBLOB */
/* Demangled: tesseract::Wordrec::try_point_pairs(EDGEPT**, short, tesseract::GenericHeap<tesseract::KDPtrPairInc<float, SEAM> >*, tesseract::GenericHeap<tesseract::KDPtrPairDec<float, SEAM> >*, SEAM**, TBLOB*) */
int _ZN9tesseract7Wordrec15try_point_pairsEPP6EDGEPTsPNS_11GenericHeapINS_12KDPtrPairIncIf4SEAMEEEEPNS4_INS_12KDPtrPairDecIfS6_EEEEPPS6_P5TBLOB(void);

/* Symbol: _ZN9tesseract12WordUnigramsC1Ev */
/* Demangled: tesseract::WordUnigrams::WordUnigrams() */
int _ZN9tesseract12WordUnigramsC1Ev(void);

/* Symbol: _ZN9tesseract4Trie25eliminate_redundant_edgesExRKyS2_ */
/* Demangled: tesseract::Trie::eliminate_redundant_edges(long long, unsigned long long const&, unsigned long long const&) */
int _ZN9tesseract4Trie25eliminate_redundant_edgesExRKyS2_(void);

/* Symbol: _ZNK9tesseract11TableFinder6trightEv */
/* Demangled: tesseract::TableFinder::tright() const */
int _ZNK9tesseract11TableFinder6trightEv(void);

/* Symbol: _ZNK8WERD_RES14DebugTopChoiceEPKc */
/* Demangled: WERD_RES::DebugTopChoice(char const*) const */
int _ZNK8WERD_RES14DebugTopChoiceEPKc(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract11DoubleParamEE5clearEv */
/* Demangled: GenericVector<tesseract::DoubleParam*>::clear() */
int _ZN13GenericVectorIPN9tesseract11DoubleParamEE5clearEv(void);

/* Symbol: _ZN9tesseract9NeuralNetD0Ev */
/* Demangled: tesseract::NeuralNet::~NeuralNet() */
int _ZN9tesseract9NeuralNetD0Ev(void);

/* Symbol: equationdetect_save_merged_image */
/* Demangled: equationdetect_save_merged_image */
extern void* equationdetect_save_merged_image;

/* Symbol: _ZN8TO_BLOCK18DeleteUnownedNoiseEv */
/* Demangled: TO_BLOCK::DeleteUnownedNoise() */
int _ZN8TO_BLOCK18DeleteUnownedNoiseEv(void);

/* Symbol: _ZN15ScratchEvidence5ClearEP16INT_CLASS_STRUCT */
/* Demangled: ScratchEvidence::Clear(INT_CLASS_STRUCT*) */
int _ZN15ScratchEvidence5ClearEP16INT_CLASS_STRUCT(void);

/* Symbol: _Z16check_pitch_syncP11BLOBNBOX_ITsssP5STATSP12FPSEGPT_LIST */
/* Demangled: check_pitch_sync(BLOBNBOX_IT*, short, short, short, STATS*, FPSEGPT_LIST*) */
int _Z16check_pitch_syncP11BLOBNBOX_ITsssP5STATSP12FPSEGPT_LIST(void);

/* Symbol: _ZN6STRINGC2EPKc */
/* Demangled: STRING::STRING(char const*) */
int _ZN6STRINGC2EPKc(void);

/* Symbol: _Z7FillABCP12PROTO_STRUCT */
/* Demangled: FillABC(PROTO_STRUCT*) */
int _Z7FillABCP12PROTO_STRUCT(void);

/* Symbol: _Z17compute_page_skewP13TO_BLOCK_LISTRfS1_ */
/* Demangled: compute_page_skew(TO_BLOCK_LIST*, float&, float&) */
int _Z17compute_page_skewP13TO_BLOCK_LISTRfS1_(void);

/* Symbol: textord_pitch_rowsimilarity */
/* Demangled: textord_pitch_rowsimilarity */
extern void* textord_pitch_rowsimilarity;

/* Symbol: _Z9row_wordsP8TO_BLOCKP6TO_ROWi6FCOORDh */
/* Demangled: row_words(TO_BLOCK*, TO_ROW*, int, FCOORD, unsigned char) */
int _Z9row_wordsP8TO_BLOCKP6TO_ROWi6FCOORDh(void);

/* Symbol: _ZN10UNICHARSET14load_via_fgetsEP19TessResultCallback2IPcS1_iEb */
/* Demangled: UNICHARSET::load_via_fgets(TessResultCallback2<char*, char*, int>*, bool) */
int _ZN10UNICHARSET14load_via_fgetsEP19TessResultCallback2IPcS1_iEb(void);

/* Symbol: _Z18find_cblob_hlimitsP6C_BLOBffRfS1_ */
/* Demangled: find_cblob_hlimits(C_BLOB*, float, float, float&, float&) */
int _Z18find_cblob_hlimitsP6C_BLOBffRfS1_(void);

/* Symbol: _ZN9tesseract15TessTsvRenderer18EndDocumentHandlerEv */
/* Demangled: tesseract::TessTsvRenderer::EndDocumentHandler() */
int _ZN9tesseract15TessTsvRenderer18EndDocumentHandlerEv(void);

/* Symbol: _ZN9tesseract17LTRResultIteratorD0Ev */
/* Demangled: tesseract::LTRResultIterator::~LTRResultIterator() */
int _ZN9tesseract17LTRResultIteratorD0Ev(void);

/* Symbol: _ZNK5STATS10min_bucketEv */
/* Demangled: STATS::min_bucket() const */
int _ZNK5STATS10min_bucketEv(void);

/* Symbol: _ZTV29_TessMemberResultCallback_0_2ILb0EPc16LocalFilePointerS0_iE */
/* Demangled: vtable for _TessMemberResultCallback_0_2<false, char*, LocalFilePointer, char*, int> */
extern void* _ZTV29_TessMemberResultCallback_0_2ILb0EPc16LocalFilePointerS0_iE;

/* Symbol: _ZN9tesseract17TrainingSampleSet14SetupFontIdMapEv */
/* Demangled: tesseract::TrainingSampleSet::SetupFontIdMap() */
int _ZN9tesseract17TrainingSampleSet14SetupFontIdMapEv(void);

/* Symbol: _ZN9tesseract6cmp_eqIP14ParagraphModelEEbRKT_S5_ */
/* Demangled: bool tesseract::cmp_eq<ParagraphModel*>(ParagraphModel* const&, ParagraphModel* const&) */
int _ZN9tesseract6cmp_eqIP14ParagraphModelEEbRKT_S5_(void);

/* Symbol: _Z18WERD_CHOICE_zapperP10ELIST_LINK */
/* Demangled: WERD_CHOICE_zapper(ELIST_LINK*) */
int _Z18WERD_CHOICE_zapperP10ELIST_LINK(void);

/* Symbol: _ZN9tesseract13BaselineBlock23FitBaselinesAndFindSkewEb */
/* Demangled: tesseract::BaselineBlock::FitBaselinesAndFindSkew(bool) */
int _ZN9tesseract13BaselineBlock23FitBaselinesAndFindSkewEb(void);

/* Symbol: _ZN9tesseract15ColPartitionSet15ComputeCoverageEv */
/* Demangled: tesseract::ColPartitionSet::ComputeCoverage() */
int _ZN9tesseract15ColPartitionSet15ComputeCoverageEv(void);

/* Symbol: _ZN9tesseract15StructuredTable22FindWhitespacedColumnsEv */
/* Demangled: tesseract::StructuredTable::FindWhitespacedColumns() */
int _ZN9tesseract15StructuredTable22FindWhitespacedColumnsEv(void);

/* Symbol: _ZN9tesseract12LMPainPoints35kDefaultPainPointPriorityAdjustmentE */
/* Demangled: tesseract::LMPainPoints::kDefaultPainPointPriorityAdjustment */
extern void* _ZN9tesseract12LMPainPoints35kDefaultPainPointPriorityAdjustmentE;

/* Symbol: _ZN9tesseract7TabFind26GutterWidthAndNeighbourGapEiiibP8BLOBNBOXPiS3_ */
/* Demangled: tesseract::TabFind::GutterWidthAndNeighbourGap(int, int, int, bool, BLOBNBOX*, int*, int*) */
int _ZN9tesseract7TabFind26GutterWidthAndNeighbourGapEiiibP8BLOBNBOXPiS3_(void);

/* Symbol: _ZN9tesseract9Tesseract18ReportXhtFixResultEbfP8WERD_RESS2_ */
/* Demangled: tesseract::Tesseract::ReportXhtFixResult(bool, float, WERD_RES*, WERD_RES*) */
int _ZN9tesseract9Tesseract18ReportXhtFixResultEbfP8WERD_RESS2_(void);

/* Symbol: textord_old_baselines */
/* Demangled: textord_old_baselines */
extern void* textord_old_baselines;

/* Symbol: TessBaseAPIGetConnectedComponents */
/* Demangled: TessBaseAPIGetConnectedComponents */
int TessBaseAPIGetConnectedComponents(void);

/* Symbol: _ZN11WERD_CHOICE4initEPKcS1_ffh */
/* Demangled: WERD_CHOICE::init(char const*, char const*, float, float, unsigned char) */
int _ZN11WERD_CHOICE4initEPKcS1_ffh(void);

/* Symbol: _Z13MakeClusterersPK10PARAM_DESC */
/* Demangled: MakeClusterer(short, PARAM_DESC const*) */
int _Z13MakeClusterersPK10PARAM_DESC(void);

/* Symbol: _ZNK9tesseract15IntFeatureSpace19PositionFromBucketsEiii */
/* Demangled: tesseract::IntFeatureSpace::PositionFromBuckets(int, int, int) const */
int _ZNK9tesseract15IntFeatureSpace19PositionFromBucketsEiii(void);

/* Symbol: _ZN13GenericVectorIP3PixE5clearEv */
/* Demangled: GenericVector<Pix*>::clear() */
int _ZN13GenericVectorIP3PixE5clearEv(void);

/* Symbol: _ZN13GenericVectorI6STRINGE7reserveEi */
/* Demangled: GenericVector<STRING>::reserve(int) */
int _ZN13GenericVectorI6STRINGE7reserveEi(void);

/* Symbol: _ZN9tesseract9Tesseract17SetEquationDetectEPNS_14EquationDetectE */
/* Demangled: tesseract::Tesseract::SetEquationDetect(tesseract::EquationDetect*) */
int _ZN9tesseract9Tesseract17SetEquationDetectEPNS_14EquationDetectE(void);

/* Symbol: TessResultIteratorGetChoiceIterator */
/* Demangled: TessResultIteratorGetChoiceIterator */
int TessResultIteratorGetChoiceIterator(void);

/* Symbol: _ZN9tesseract15TessPDFRenderer15AppendPDFObjectEPKc */
/* Demangled: tesseract::TessPDFRenderer::AppendPDFObject(char const*) */
int _ZN9tesseract15TessPDFRenderer15AppendPDFObjectEPKc(void);

/* Symbol: _ZN9tesseract6cmp_eqINS_14LineHypothesisEEEbRKT_S4_ */
/* Demangled: bool tesseract::cmp_eq<tesseract::LineHypothesis>(tesseract::LineHypothesis const&, tesseract::LineHypothesis const&) */
int _ZN9tesseract6cmp_eqINS_14LineHypothesisEEEbRKT_S4_(void);

/* Symbol: _ZNK9tesseract11CharBigrams8PairCostEii */
/* Demangled: tesseract::CharBigrams::PairCost(int, int) const */
int _ZNK9tesseract11CharBigrams8PairCostEii(void);

/* Symbol: _ZNK10UNICHARSET16GetStrPropertiesEPKcPNS_18UNICHAR_PROPERTIESE */
/* Demangled: UNICHARSET::GetStrProperties(char const*, UNICHARSET::UNICHAR_PROPERTIES*) const */
int _ZNK10UNICHARSET16GetStrPropertiesEPKcPNS_18UNICHAR_PROPERTIESE(void);

/* Symbol: _ZN9tesseract8Classify22MakeNewTemporaryConfigEP22ADAPT_TEMPLATES_STRUCTiiiP18INT_FEATURE_STRUCTP18FEATURE_SET_STRUCT */
/* Demangled: tesseract::Classify::MakeNewTemporaryConfig(ADAPT_TEMPLATES_STRUCT*, int, int, int, INT_FEATURE_STRUCT*, FEATURE_SET_STRUCT*) */
int _ZN9tesseract8Classify22MakeNewTemporaryConfigEP22ADAPT_TEMPLATES_STRUCTiiiP18INT_FEATURE_STRUCTP18FEATURE_SET_STRUCT(void);

/* Symbol: _Z14ClusterSamplesP9CLUSTERERP13CLUSTERCONFIG */
/* Demangled: ClusterSamples(CLUSTERER*, CLUSTERCONFIG*) */
int _Z14ClusterSamplesP9CLUSTERERP13CLUSTERCONFIG(void);

/* Symbol: _ZN9tesseract9Tesseract18RecogAllWordsPassNEiP10ETEXT_DESCP11PAGE_RES_ITP13GenericVectorINS_8WordDataEE */
/* Demangled: tesseract::Tesseract::RecogAllWordsPassN(int, ETEXT_DESC*, PAGE_RES_IT*, GenericVector<tesseract::WordData>*) */
int _ZN9tesseract9Tesseract18RecogAllWordsPassNEiP10ETEXT_DESCP11PAGE_RES_ITP13GenericVectorINS_8WordDataEE(void);

/* Symbol: _ZN5TBLOB26EliminateDuplicateOutlinesEv */
/* Demangled: TBLOB::EliminateDuplicateOutlines() */
int _ZN5TBLOB26EliminateDuplicateOutlinesEv(void);

/* Symbol: _ZNK9tesseract4Bmp84CopyEiiiiPS0_ */
/* Demangled: tesseract::Bmp8::Copy(int, int, int, int, tesseract::Bmp8*) const */
int _ZNK9tesseract4Bmp84CopyEiiiiPS0_(void);

/* Symbol: _ZN9tesseract14WorkingPartSet22ExtractCompletedBlocksERK6ICOORDS3_iPNS_17ColPartition_LISTEP10BLOCK_LISTP13TO_BLOCK_LIST */
/* Demangled: tesseract::WorkingPartSet::ExtractCompletedBlocks(ICOORD const&, ICOORD const&, int, tesseract::ColPartition_LIST*, BLOCK_LIST*, TO_BLOCK_LIST*) */
int _ZN9tesseract14WorkingPartSet22ExtractCompletedBlocksERK6ICOORDS3_iPNS_17ColPartition_LISTEP10BLOCK_LISTP13TO_BLOCK_LIST(void);

/* Symbol: _ZN9tesseract9TabVector23SetupPartnerConstraintsEPS0_ */
/* Demangled: tesseract::TabVector::SetupPartnerConstraints(tesseract::TabVector*) */
int _ZN9tesseract9TabVector23SetupPartnerConstraintsEPS0_(void);

/* Symbol: _ZN9tesseract11TableFinder29InsertFragmentedTextPartitionEPNS_12ColPartitionE */
/* Demangled: tesseract::TableFinder::InsertFragmentedTextPartition(tesseract::ColPartition*) */
int _ZN9tesseract11TableFinder29InsertFragmentedTextPartitionEPNS_12ColPartitionE(void);

/* Symbol: _ZN9tesseract7Wordrec15merge_fragmentsEP6MATRIXs */
/* Demangled: tesseract::Wordrec::merge_fragments(MATRIX*, short) */
int _ZN9tesseract7Wordrec15merge_fragmentsEP6MATRIXs(void);

/* Symbol: _ZNK9tesseract17LTRResultIterator17SymbolIsSubscriptEv */
/* Demangled: tesseract::LTRResultIterator::SymbolIsSubscript() const */
int _ZNK9tesseract17LTRResultIterator17SymbolIsSubscriptEv(void);

/* Symbol: _ZN9tesseract6BBGridINS_12ColPartitionENS_18ColPartition_CLISTENS_17ColPartition_C_ITEE10InsertBBoxEbbPS1_ */
/* Demangled: tesseract::BBGrid<tesseract::ColPartition, tesseract::ColPartition_CLIST, tesseract::ColPartition_C_IT>::InsertBBox(bool, bool, tesseract::ColPartition*) */
int _ZN9tesseract6BBGridINS_12ColPartitionENS_18ColPartition_CLISTENS_17ColPartition_C_ITEE10InsertBBoxEbbPS1_(void);

/* Symbol: _ZN13GenericVectorIN9tesseract9KDPairIncId6ICOORDEEE7reserveEi */
/* Demangled: GenericVector<tesseract::KDPairInc<double, ICOORD> >::reserve(int) */
int _ZN13GenericVectorIN9tesseract9KDPairIncId6ICOORDEEE7reserveEi(void);

/* Symbol: _ZN13GenericVectorIsE5clearEv */
/* Demangled: GenericVector<short>::clear() */
int _ZN13GenericVectorIsE5clearEv(void);

/* Symbol: _ZNK9tesseract15UnicharAndFonts9SerializeEP7__sFILE */
/* Demangled: tesseract::UnicharAndFonts::Serialize(__sFILE*) const */
int _ZNK9tesseract15UnicharAndFonts9SerializeEP7__sFILE(void);

/* Symbol: _ZNK9tesseract4Dawg17iterate_words_recERK11WERD_CHOICExP13TessCallback1IPS2_E */
/* Demangled: tesseract::Dawg::iterate_words_rec(WERD_CHOICE const&, long long, TessCallback1<WERD_CHOICE const*>*) const */
int _ZNK9tesseract4Dawg17iterate_words_recERK11WERD_CHOICExP13TessCallback1IPS2_E(void);

/* Symbol: _ZN9tesseract11TessBaseAPI12GetInputNameEv */
/* Demangled: tesseract::TessBaseAPI::GetInputName() */
int _ZN9tesseract11TessBaseAPI12GetInputNameEv(void);

/* Symbol: _ZN9tesseract9Tesseract20TestNewNormalizationEiffP8WERD_RESP5BLOCKP3ROW */
/* Demangled: tesseract::Tesseract::TestNewNormalization(int, float, float, WERD_RES*, BLOCK*, ROW*) */
int _ZN9tesseract9Tesseract20TestNewNormalizationEiffP8WERD_RESP5BLOCKP3ROW(void);

/* Symbol: _ZN12BlamerBundle26BlameClassifierOrLangModelEPK8WERD_RESRK10UNICHARSETbb */
/* Demangled: BlamerBundle::BlameClassifierOrLangModel(WERD_RES const*, UNICHARSET const&, bool, bool) */
int _ZN12BlamerBundle26BlameClassifierOrLangModelEPK8WERD_RESRK10UNICHARSETbb(void);

/* Symbol: _ZN10UNICHARSET18UNICHAR_PROPERTIES16ExpandRangesFromERKS0_ */
/* Demangled: UNICHARSET::UNICHAR_PROPERTIES::ExpandRangesFrom(UNICHARSET::UNICHAR_PROPERTIES const&) */
int _ZN10UNICHARSET18UNICHAR_PROPERTIES16ExpandRangesFromERKS0_(void);

/* Symbol: textord_ascx_ratio_max */
/* Demangled: textord_ascx_ratio_max */
extern void* textord_ascx_ratio_max;

/* Symbol: _ZNSt3__16vectorIfNS_9allocatorIfEEE11__vallocateEj */
/* Demangled: std::__1::vector<float, std::__1::allocator<float> >::__vallocate(unsigned int) */
int _ZNSt3__16vectorIfNS_9allocatorIfEEE11__vallocateEj(void);

/* Symbol: _ZN9tesseract16ColPartitionGrid16SmoothRegionTypeEP3PixRK4TBOXRK6FCOORDbPNS_12ColPartitionE */
/* Demangled: tesseract::ColPartitionGrid::SmoothRegionType(Pix*, TBOX const&, FCOORD const&, bool, tesseract::ColPartition*) */
int _ZN9tesseract16ColPartitionGrid16SmoothRegionTypeEP3PixRK4TBOXRK6FCOORDbPNS_12ColPartitionE(void);

/* Symbol: _Z11row_y_orderPKvS0_ */
/* Demangled: row_y_order(void const*, void const*) */
int _Z11row_y_orderPKvS0_(void);

/* Symbol: _ZN9tesseract13LanguageModel12ComputeDenomEP16BLOB_CHOICE_LIST */
/* Demangled: tesseract::LanguageModel::ComputeDenom(BLOB_CHOICE_LIST*) */
int _ZN9tesseract13LanguageModel12ComputeDenomEP16BLOB_CHOICE_LIST(void);

/* Symbol: _ZNK5STATS11top_n_modesEiP13GenericVectorIN9tesseract9KDPairIncIfiEEE */
/* Demangled: STATS::top_n_modes(int, GenericVector<tesseract::KDPairInc<float, int> >*) const */
int _ZNK5STATS11top_n_modesEiP13GenericVectorIN9tesseract9KDPairIncIfiEEE(void);

/* Symbol: _ZNK9tesseract14EquationDetect13PaintColPartsERK6STRING */
/* Demangled: tesseract::EquationDetect::PaintColParts(STRING const&) const */
int _ZNK9tesseract14EquationDetect13PaintColPartsERK6STRING(void);

/* Symbol: _ZN9tesseract15ColPartitionSetC1EPNS_12ColPartitionE */
/* Demangled: tesseract::ColPartitionSet::ColPartitionSet(tesseract::ColPartition*) */
int _ZN9tesseract15ColPartitionSetC1EPNS_12ColPartitionE(void);

/* Symbol: TessVersion */
/* Demangled: TessVersion */
int TessVersion(void);

/* Symbol: _ZNK9tesseract17LTRResultIterator11WordLatticeEPi */
/* Demangled: tesseract::LTRResultIterator::WordLattice(int*) const */
int _ZNK9tesseract17LTRResultIterator11WordLatticeEPi(void);

/* Symbol: _ZN9tesseract6NeuronC1Ev */
/* Demangled: tesseract::Neuron::Neuron() */
int _ZN9tesseract6NeuronC1Ev(void);

/* Symbol: _ZN9tesseract11TableFinder20InitializePartitionsEPPNS_15ColPartitionSetE */
/* Demangled: tesseract::TableFinder::InitializePartitions(tesseract::ColPartitionSet**) */
int _ZN9tesseract11TableFinder20InitializePartitionsEPPNS_15ColPartitionSetE(void);

/* Symbol: _ZN13GenericVectorIN9tesseract9KDPairIncIiyEEE7reserveEi */
/* Demangled: GenericVector<tesseract::KDPairInc<int, unsigned long long> >::reserve(int) */
int _ZN13GenericVectorIN9tesseract9KDPairIncIiyEEE7reserveEi(void);

/* Symbol: _ZN9tesseract8read_setEP7__sFILEPNS_7FontSetEb */
/* Demangled: tesseract::read_set(__sFILE*, tesseract::FontSet*, bool) */
int _ZN9tesseract8read_setEP7__sFILEPNS_7FontSetEb(void);

/* Symbol: _ZN9tesseract9TabVector22FitAndEvaluateIfNeededERK6ICOORDPNS_7TabFindE */
/* Demangled: tesseract::TabVector::FitAndEvaluateIfNeeded(ICOORD const&, tesseract::TabFind*) */
int _ZN9tesseract9TabVector22FitAndEvaluateIfNeededERK6ICOORDPNS_7TabFindE(void);

/* Symbol: _ZN6TO_ROW5clearEv */
/* Demangled: TO_ROW::clear() */
int _ZN6TO_ROW5clearEv(void);

/* Symbol: _ZN6DENORM18SetupNormalizationEPK5BLOCKPK6FCOORDPKS_ffffff */
/* Demangled: DENORM::SetupNormalization(BLOCK const*, FCOORD const*, DENORM const*, float, float, float, float, float, float) */
int _ZN6DENORM18SetupNormalizationEPK5BLOCKPK6FCOORDPKS_ffffff(void);

/* Symbol: _ZN9tesseract7BoxWord8CopyFromERKS0_ */
/* Demangled: tesseract::BoxWord::CopyFrom(tesseract::BoxWord const&) */
int _ZN9tesseract7BoxWord8CopyFromERKS0_(void);

/* Symbol: _ZN9tesseract7TabFind11GutterWidthEiiRKNS_9TabVectorEbiPi */
/* Demangled: tesseract::TabFind::GutterWidth(int, int, tesseract::TabVector const&, bool, int, int*) */
int _ZN9tesseract7TabFind11GutterWidthEiiRKNS_9TabVectorEbiPi(void);

/* Symbol: _ZN9C_OUTLINEC2EP9CRACKEDGE6ICOORDS2_s */
/* Demangled: C_OUTLINE::C_OUTLINE(CRACKEDGE*, ICOORD, ICOORD, short) */
int _ZN9C_OUTLINEC2EP9CRACKEDGE6ICOORDS2_s(void);

/* Symbol: classify_pp_angle_pad */
/* Demangled: classify_pp_angle_pad */
extern void* classify_pp_angle_pad;

/* Symbol: _ZN9tesseract14SampleIteratorC2Ev */
/* Demangled: tesseract::SampleIterator::SampleIterator() */
int _ZN9tesseract14SampleIteratorC2Ev(void);

/* Symbol: _ZNK9tesseract13TessLangModel7GetDawgEi */
/* Demangled: tesseract::TessLangModel::GetDawg(int) const */
int _ZNK9tesseract13TessLangModel7GetDawgEi(void);

/* Symbol: _ZN6FCOORD20angle_from_directionEh */
/* Demangled: FCOORD::angle_from_direction(unsigned char) */
int _ZN6FCOORD20angle_from_directionEh(void);

/* Symbol: _ZN9tesseract17WordListLangModelD1Ev */
/* Demangled: tesseract::WordListLangModel::~WordListLangModel() */
int _ZN9tesseract17WordListLangModelD1Ev(void);

/* Symbol: _ZN9tesseract10ColSegmentC2Ev */
/* Demangled: tesseract::ColSegment::ColSegment() */
int _ZN9tesseract10ColSegmentC2Ev(void);

/* Symbol: _ZN9tesseract15ShapeClassifier17DisplayClassifyAsERKNS_14TrainingSampleEP3PixiiPNS_13PointerVectorI10ScrollViewEE */
/* Demangled: tesseract::ShapeClassifier::DisplayClassifyAs(tesseract::TrainingSample const&, Pix*, int, int, tesseract::PointerVector<ScrollView>*) */
int _ZN9tesseract15ShapeClassifier17DisplayClassifyAsERKNS_14TrainingSampleEP3PixiiPNS_13PointerVectorI10ScrollViewEE(void);

/* Symbol: textord_xheight_mode_fraction */
/* Demangled: textord_xheight_mode_fraction */
extern void* textord_xheight_mode_fraction;

/* Symbol: _ZN7QSPLINE11extrapolateEdii */
/* Demangled: QSPLINE::extrapolate(double, int, int) */
int _ZN7QSPLINE11extrapolateEdii(void);

/* Symbol: _ZN9tesseract8Classify15AmbigClassifierERK13GenericVectorI18INT_FEATURE_STRUCTERK20INT_FX_RESULT_STRUCTPK5TBLOBP20INT_TEMPLATES_STRUCTPP18ADAPT_CLASS_STRUCTPiP13ADAPT_RESULTS */
/* Demangled: tesseract::Classify::AmbigClassifier(GenericVector<INT_FEATURE_STRUCT> const&, INT_FX_RESULT_STRUCT const&, TBLOB const*, INT_TEMPLATES_STRUCT*, ADAPT_CLASS_STRUCT**, int*, ADAPT_RESULTS*) */
int _ZN9tesseract8Classify15AmbigClassifierERK13GenericVectorI18INT_FEATURE_STRUCTERK20INT_FX_RESULT_STRUCTPK5TBLOBP20INT_TEMPLATES_STRUCTPP18ADAPT_CLASS_STRUCTPiP13ADAPT_RESULTS(void);

/* Symbol: _ZNK9tesseract10ShapeTable13EqualUnicharsEii */
/* Demangled: tesseract::ShapeTable::EqualUnichars(int, int) const */
int _ZNK9tesseract10ShapeTable13EqualUnicharsEii(void);

/* Symbol: _ZN9tesseract4Trie16add_edge_linkageExxbibi */
/* Demangled: tesseract::Trie::add_edge_linkage(long long, long long, bool, int, bool, int) */
int _ZN9tesseract4Trie16add_edge_linkageExxbibi(void);

/* Symbol: _ZN9tesseract15TessLangModEdge14CreateChildrenEPNS_15CubeRecoContextEPKNS_4DawgExPPNS_11LangModEdgeE */
/* Demangled: tesseract::TessLangModEdge::CreateChildren(tesseract::CubeRecoContext*, tesseract::Dawg const*, long long, tesseract::LangModEdge**) */
int _ZN9tesseract15TessLangModEdge14CreateChildrenEPNS_15CubeRecoContextEPKNS_4DawgExPPNS_11LangModEdgeE(void);

/* Symbol: _ZN13GenericVectorIN9tesseract9KDPairIncIiyEEE9push_backES2_ */
/* Demangled: GenericVector<tesseract::KDPairInc<int, unsigned long long> >::push_back(tesseract::KDPairInc<int, unsigned long long>) */
int _ZN13GenericVectorIN9tesseract9KDPairIncIiyEEE9push_backES2_(void);

/* Symbol: _ZN9tesseract19ColPartition_zapperEP11ELIST2_LINK */
/* Demangled: tesseract::ColPartition_zapper(ELIST2_LINK*) */
int _ZN9tesseract19ColPartition_zapperEP11ELIST2_LINK(void);

/* Symbol: _ZN9tesseract12ColPartition14OKMergeOverlapERKS0_S2_ib */
/* Demangled: tesseract::ColPartition::OKMergeOverlap(tesseract::ColPartition const&, tesseract::ColPartition const&, int, bool) */
int _ZN9tesseract12ColPartition14OKMergeOverlapERKS0_S2_ib(void);

/* Symbol: _ZN9tesseract15StructuredTable13set_text_gridEPNS_16ColPartitionGridE */
/* Demangled: tesseract::StructuredTable::set_text_grid(tesseract::ColPartitionGrid*) */
int _ZN9tesseract15StructuredTable13set_text_gridEPNS_16ColPartitionGridE(void);

/* Symbol: _ZN3ROWC1EiPiPdfffss */
/* Demangled: ROW::ROW(int, int*, double*, float, float, float, short, short) */
int _ZN3ROWC1EiPiPdfffss(void);

/* Symbol: TessBaseAPIClear */
/* Demangled: TessBaseAPIClear */
int TessBaseAPIClear(void);

/* Symbol: _ZN9tesseract12DocumentData7UnCacheEv */
/* Demangled: tesseract::DocumentData::UnCache() */
int _ZN9tesseract12DocumentData7UnCacheEv(void);

/* Symbol: _ZNK10UNICHARSET12get_chartypeEi */
/* Demangled: UNICHARSET::get_chartype(int) const */
int _ZNK10UNICHARSET12get_chartypeEi(void);

/* Symbol: _Z18free_adapted_classP18ADAPT_CLASS_STRUCT */
/* Demangled: free_adapted_class(ADAPT_CLASS_STRUCT*) */
int _Z18free_adapted_classP18ADAPT_CLASS_STRUCT(void);

/* Symbol: _ZN9tesseract7TabFind17SetBlockRuleEdgesEP8TO_BLOCK */
/* Demangled: tesseract::TabFind::SetBlockRuleEdges(TO_BLOCK*) */
int _ZN9tesseract7TabFind17SetBlockRuleEdgesEP8TO_BLOCK(void);

/* Symbol: _ZN9tesseract12ColPartition23RefinePartnersByOverlapEbPNS_18ColPartition_CLISTE */
/* Demangled: tesseract::ColPartition::RefinePartnersByOverlap(bool, tesseract::ColPartition_CLIST*) */
int _ZN9tesseract12ColPartition23RefinePartnersByOverlapEbPNS_18ColPartition_CLISTE(void);

/* Symbol: edges_debug */
/* Demangled: edges_debug */
extern void* edges_debug;

/* Symbol: _ZN9tesseract12LMPainPoints13RemapForSplitEi */
/* Demangled: tesseract::LMPainPoints::RemapForSplit(int) */
int _ZN9tesseract12LMPainPoints13RemapForSplitEi(void);

/* Symbol: _ZN13GenericVectorIN9tesseract12KDPtrPairIncIf4SEAMEEE9push_backES3_ */
/* Demangled: GenericVector<tesseract::KDPtrPairInc<float, SEAM> >::push_back(tesseract::KDPtrPairInc<float, SEAM>) */
int _ZN13GenericVectorIN9tesseract12KDPtrPairIncIf4SEAMEEE9push_backES3_(void);

/* Symbol: _ZN13GenericVectorIbE15double_the_sizeEv */
/* Demangled: GenericVector<bool>::double_the_size() */
int _ZN13GenericVectorIbE15double_the_sizeEv(void);

/* Symbol: _ZN6C_BLOB6rotateERK6FCOORD */
/* Demangled: C_BLOB::rotate(FCOORD const&) */
int _ZN6C_BLOB6rotateERK6FCOORD(void);

/* Symbol: TrainingData */
/* Demangled: TrainingData */
extern void* TrainingData;

/* Symbol: _ZN9tesseract12ColumnFinder13DisplayBlocksEP10BLOCK_LIST */
/* Demangled: tesseract::ColumnFinder::DisplayBlocks(BLOCK_LIST*) */
int _ZN9tesseract12ColumnFinder13DisplayBlocksEP10BLOCK_LIST(void);

/* Symbol: _ZN9tesseract12ColumnFinder29GridRemoveUnderlinePartitionsEv */
/* Demangled: tesseract::ColumnFinder::GridRemoveUnderlinePartitions() */
int _ZN9tesseract12ColumnFinder29GridRemoveUnderlinePartitionsEv(void);

/* Symbol: _Z15NewIntTemplatesv */
/* Demangled: NewIntTemplates() */
int _Z15NewIntTemplatesv(void);

/* Symbol: _ZN9tesseract12CallWithUTF8EP13TessCallback1IPKcEPK11WERD_CHOICE */
/* Demangled: tesseract::CallWithUTF8(TessCallback1<char const*>*, WERD_CHOICE const*) */
int _ZN9tesseract12CallWithUTF8EP13TessCallback1IPKcEPK11WERD_CHOICE(void);

/* Symbol: _ZNK9tesseract4Dict18def_letter_is_okayEPvib */
/* Demangled: tesseract::Dict::def_letter_is_okay(void*, int, bool) const */
int _ZNK9tesseract4Dict18def_letter_is_okayEPvib(void);

/* Symbol: _ZN9tesseract16ColPartitionGrid18DeleteUnknownPartsEP8TO_BLOCK */
/* Demangled: tesseract::ColPartitionGrid::DeleteUnknownParts(TO_BLOCK*) */
int _ZN9tesseract16ColPartitionGrid18DeleteUnknownPartsEP8TO_BLOCK(void);

/* Symbol: _ZN9tesseract25textord_dump_table_imagesE */
/* Demangled: tesseract::textord_dump_table_images */
extern void* _ZN9tesseract25textord_dump_table_imagesE;

/* Symbol: _ZN9tesseract15StructuredTable13UpdateMarginsEPNS_16ColPartitionGridE */
/* Demangled: tesseract::StructuredTable::UpdateMargins(tesseract::ColPartitionGrid*) */
int _ZN9tesseract15StructuredTable13UpdateMarginsEPNS_16ColPartitionGridE(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract9TesseractEE20delete_data_pointersEv */
/* Demangled: GenericVector<tesseract::Tesseract*>::delete_data_pointers() */
int _ZN13GenericVectorIPN9tesseract9TesseractEE20delete_data_pointersEv(void);

/* Symbol: _Z15AddProtoToClassP12CLASS_STRUCT */
/* Demangled: AddProtoToClass(CLASS_STRUCT*) */
int _Z15AddProtoToClassP12CLASS_STRUCT(void);

/* Symbol: _ZN9tesseract9Tesseract16one_ell_conflictEP8WERD_RESh */
/* Demangled: tesseract::Tesseract::one_ell_conflict(WERD_RES*, unsigned char) */
int _ZN9tesseract9Tesseract16one_ell_conflictEP8WERD_RESh(void);

/* Symbol: _ZN9tesseract7Textord16peek_at_next_gapEP6TO_ROW11BLOBNBOX_ITR4TBOXRsS6_ */
/* Demangled: tesseract::Textord::peek_at_next_gap(TO_ROW*, BLOBNBOX_IT, TBOX&, short&, short&) */
int _ZN9tesseract7Textord16peek_at_next_gapEP6TO_ROW11BLOBNBOX_ITR4TBOXRsS6_(void);

/* Symbol: _ZN9tesseract9ImageData14SetPixInternalEP3PixP13GenericVectorIcE */
/* Demangled: tesseract::ImageData::SetPixInternal(Pix*, GenericVector<char>*) */
int _ZN9tesseract9ImageData14SetPixInternalEP3PixP13GenericVectorIcE(void);

/* Symbol: _ZN9tesseract17CubeLineSegmenter21kMinValidLineHgtRatioE */
/* Demangled: tesseract::CubeLineSegmenter::kMinValidLineHgtRatio */
extern void* _ZN9tesseract17CubeLineSegmenter21kMinValidLineHgtRatioE;

/* Symbol: _Z13extract_edgesP3PixP5BLOCK */
/* Demangled: extract_edges(Pix*, BLOCK*) */
int _Z13extract_edgesP3PixP5BLOCK(void);

/* Symbol: _ZN9tesseract9Tesseract14init_tesseractEPKcS2_S2_NS_13OcrEngineModeEPPciPK13GenericVectorI6STRINGESA_b */
/* Demangled: tesseract::Tesseract::init_tesseract(char const*, char const*, char const*, tesseract::OcrEngineMode, char**, int, GenericVector<STRING> const*, GenericVector<STRING> const*, bool) */
int _ZN9tesseract9Tesseract14init_tesseractEPKcS2_S2_NS_13OcrEngineModeEPPciPK13GenericVectorI6STRINGESA_b(void);

/* Symbol: TessPageIteratorDelete */
/* Demangled: TessPageIteratorDelete */
int TessPageIteratorDelete(void);

/* Symbol: _ZN9tesseract14ChoiceIteratorC1ERKNS_17LTRResultIteratorE */
/* Demangled: tesseract::ChoiceIterator::ChoiceIterator(tesseract::LTRResultIterator const&) */
int _ZN9tesseract14ChoiceIteratorC1ERKNS_17LTRResultIteratorE(void);

/* Symbol: _ZN9tesseract13DocumentCacheC1Ex */
/* Demangled: tesseract::DocumentCache::DocumentCache(long long) */
int _ZN9tesseract13DocumentCacheC1Ex(void);

/* Symbol: _ZN9tesseract8Classify18TempConfigReliableEiRKP18TEMP_CONFIG_STRUCT */
/* Demangled: tesseract::Classify::TempConfigReliable(int, TEMP_CONFIG_STRUCT* const&) */
int _ZN9tesseract8Classify18TempConfigReliableEiRKP18TEMP_CONFIG_STRUCT(void);

/* Symbol: _ZN9tesseract6BBGridI8BLOBNBOX14BLOBNBOX_CLIST13BLOBNBOX_C_ITE10RemoveBBoxEPS1_ */
/* Demangled: tesseract::BBGrid<BLOBNBOX, BLOBNBOX_CLIST, BLOBNBOX_C_IT>::RemoveBBox(BLOBNBOX*) */
int _ZN9tesseract6BBGridI8BLOBNBOX14BLOBNBOX_CLIST13BLOBNBOX_C_ITE10RemoveBBoxEPS1_(void);

/* Symbol: _ZNK9OSResults12print_scoresEi */
/* Demangled: OSResults::print_scores(int) const */
int _ZNK9OSResults12print_scoresEi(void);

/* Symbol: _ZN9tesseract16ImageThresholder5ClearEv */
/* Demangled: tesseract::ImageThresholder::Clear() */
int _ZN9tesseract16ImageThresholder5ClearEv(void);

/* Symbol: _ZN9tesseract16ImageThresholder4InitEv */
/* Demangled: tesseract::ImageThresholder::Init() */
int _ZN9tesseract16ImageThresholder4InitEv(void);

/* Symbol: _ZN9tesseract11ShapeRating22FirstResultWithUnicharERK13GenericVectorIS0_ERKNS_10ShapeTableEi */
/* Demangled: tesseract::ShapeRating::FirstResultWithUnichar(GenericVector<tesseract::ShapeRating> const&, tesseract::ShapeTable const&, int) */
int _ZN9tesseract11ShapeRating22FirstResultWithUnicharERK13GenericVectorIS0_ERKNS_10ShapeTableEi(void);

/* Symbol: _ZN9tesseract11TableFinderD1Ev */
/* Demangled: tesseract::TableFinder::~TableFinder() */
int _ZN9tesseract11TableFinderD1Ev(void);

/* Symbol: _ZN10POLY_BLOCK14winding_numberERK6ICOORD */
/* Demangled: POLY_BLOCK::winding_number(ICOORD const&) */
int _ZN10POLY_BLOCK14winding_numberERK6ICOORD(void);

/* Symbol: _ZN9tesseract9TabVector16SetupConstraintsEv */
/* Demangled: tesseract::TabVector::SetupConstraints() */
int _ZN9tesseract9TabVector16SetupConstraintsEv(void);

/* Symbol: _ZN11PAGE_RES_IT18ReplaceCurrentWordEPN9tesseract13PointerVectorI8WERD_RESEE */
/* Demangled: PAGE_RES_IT::ReplaceCurrentWord(tesseract::PointerVector<WERD_RES>*) */
int _ZN11PAGE_RES_IT18ReplaceCurrentWordEPN9tesseract13PointerVectorI8WERD_RESEE(void);

/* Symbol: _Z4pushP8list_recPv */
/* Demangled: push(list_rec*, void*) */
int _Z4pushP8list_recPv(void);

/* Symbol: _ZN9tesseract9NeuralNetC1Ev */
/* Demangled: tesseract::NeuralNet::NeuralNet() */
int _ZN9tesseract9NeuralNetC1Ev(void);

/* Symbol: _ZN9tesseract11AlignedBlob21FindVerticalAlignmentENS_17AlignedBlobParamsEP8BLOBNBOXPiS4_ */
/* Demangled: tesseract::AlignedBlob::FindVerticalAlignment(tesseract::AlignedBlobParams, BLOBNBOX*, int*, int*) */
int _ZN9tesseract11AlignedBlob21FindVerticalAlignmentENS_17AlignedBlobParamsEP8BLOBNBOXPiS4_(void);

/* Symbol: _ZNK9tesseract11TableFinder8gridsizeEv */
/* Demangled: tesseract::TableFinder::gridsize() const */
int _ZNK9tesseract11TableFinder8gridsizeEv(void);

/* Symbol: _Z17reject_whole_pageR11PAGE_RES_IT */
/* Demangled: reject_whole_page(PAGE_RES_IT&) */
int _Z17reject_whole_pageR11PAGE_RES_IT(void);

/* Symbol: _ZNK9tesseract13FontInfoTable33SetContainsMultipleFontPropertiesERK13GenericVectorINS_10ScoredFontEE */
/* Demangled: tesseract::FontInfoTable::SetContainsMultipleFontProperties(GenericVector<tesseract::ScoredFont> const&) const */
int _ZNK9tesseract13FontInfoTable33SetContainsMultipleFontPropertiesERK13GenericVectorINS_10ScoredFontEE(void);

/* Symbol: _ZN13GenericVectorIN9tesseract16FloatWordFeatureEE15double_the_sizeEv */
/* Demangled: GenericVector<tesseract::FloatWordFeature>::double_the_size() */
int _ZN13GenericVectorIN9tesseract16FloatWordFeatureEE15double_the_sizeEv(void);

/* Symbol: _ZNK11WERD_CHOICE14GetTopScriptIDEv */
/* Demangled: WERD_CHOICE::GetTopScriptID() const */
int _ZNK11WERD_CHOICE14GetTopScriptIDEv(void);

/* Symbol: _ZN9tesseract11TessBaseAPI10GetUnicharEi */
/* Demangled: tesseract::TessBaseAPI::GetUnichar(int) */
int _ZN9tesseract11TessBaseAPI10GetUnicharEi(void);

/* Symbol: _ZN9tesseract11CCUtilMutexC1Ev */
/* Demangled: tesseract::CCUtilMutex::CCUtilMutex() */
int _ZN9tesseract11CCUtilMutexC1Ev(void);

/* Symbol: _ZN6STRINGD2Ev */
/* Demangled: STRING::~STRING() */
int _ZN6STRINGD2Ev(void);

/* Symbol: _ZN13GenericVectorIN9tesseract9ShapeDistEE7reserveEi */
/* Demangled: GenericVector<tesseract::ShapeDist>::reserve(int) */
int _ZN13GenericVectorIN9tesseract9ShapeDistEE7reserveEi(void);

/* Symbol: _ZN9tesseract12ColumnFinder17EmptyTempPartListEPNS_18ColPartition_CLISTEPNS_19WorkingPartSet_LISTE */
/* Demangled: tesseract::ColumnFinder::EmptyTempPartList(tesseract::ColPartition_CLIST*, tesseract::WorkingPartSet_LIST*) */
int _ZN9tesseract12ColumnFinder17EmptyTempPartListEPNS_18ColPartition_CLISTEPNS_19WorkingPartSet_LISTE(void);

/* Symbol: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeReadConfigFile */
/* Demangled: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeReadConfigFile */
int Java_com_googlecode_tesseract_android_TessBaseAPI_nativeReadConfigFile(void);

/* Symbol: Java_com_googlecode_tesseract_android_TessPdfRenderer_nativeRecycle */
/* Demangled: Java_com_googlecode_tesseract_android_TessPdfRenderer_nativeRecycle */
int Java_com_googlecode_tesseract_android_TessPdfRenderer_nativeRecycle(void);

/* Symbol: _ZN9tesseract11TessBaseAPID0Ev */
/* Demangled: tesseract::TessBaseAPI::~TessBaseAPI() */
int _ZN9tesseract11TessBaseAPID0Ev(void);

/* Symbol: _ZNK13GenericVectorIPN9tesseract9ImageDataEE4backEv */
/* Demangled: GenericVector<tesseract::ImageData*>::back() const */
int _ZNK13GenericVectorIPN9tesseract9ImageDataEE4backEv(void);

/* Symbol: _ZN9tesseract8Classify16RemoveExtraPuncsEP13ADAPT_RESULTS */
/* Demangled: tesseract::Classify::RemoveExtraPuncs(ADAPT_RESULTS*) */
int _ZN9tesseract8Classify16RemoveExtraPuncsEP13ADAPT_RESULTS(void);

/* Symbol: _Z14free_int_classP16INT_CLASS_STRUCT */
/* Demangled: free_int_class(INT_CLASS_STRUCT*) */
int _Z14free_int_classP16INT_CLASS_STRUCT(void);

/* Symbol: textord_debug_xheights */
/* Demangled: textord_debug_xheights */
extern void* textord_debug_xheights;

/* Symbol: _ZN13GenericVectorIN9tesseract8WordDataEE5clearEv */
/* Demangled: GenericVector<tesseract::WordData>::clear() */
int _ZN13GenericVectorIN9tesseract8WordDataEE5clearEv(void);

/* Symbol: _ZN9tesseract19AsciiLikelyListItemERK6STRING */
/* Demangled: tesseract::AsciiLikelyListItem(STRING const&) */
int _ZN9tesseract19AsciiLikelyListItemERK6STRING(void);

/* Symbol: _ZN4TBOXC2Essss */
/* Demangled: TBOX::TBOX(short, short, short, short) */
int _ZN4TBOXC2Essss(void);

/* Symbol: _Z14ReadSampleSizeP7__sFILE */
/* Demangled: ReadSampleSize(__sFILE*) */
int _Z14ReadSampleSizeP7__sFILE(void);

/* Symbol: _Z17fit_parallel_rowsP8TO_BLOCKf6FCOORDih */
/* Demangled: fit_parallel_rows(TO_BLOCK*, float, FCOORD, int, unsigned char) */
int _Z17fit_parallel_rowsP8TO_BLOCKf6FCOORDih(void);

/* Symbol: _ZN9tesseract11TessBaseAPI18GetFeaturesForBlobEP5TBLOBP18INT_FEATURE_STRUCTPiS5_ */
/* Demangled: tesseract::TessBaseAPI::GetFeaturesForBlob(TBLOB*, INT_FEATURE_STRUCT*, int*, int*) */
int _ZN9tesseract11TessBaseAPI18GetFeaturesForBlobEP5TBLOBP18INT_FEATURE_STRUCTPiS5_(void);

/* Symbol: _Z17NormalizeOutlineXP18FEATURE_SET_STRUCT */
/* Demangled: NormalizeOutlineX(FEATURE_SET_STRUCT*) */
int _Z17NormalizeOutlineXP18FEATURE_SET_STRUCT(void);

/* Symbol: _ZN13GenericVectorIN9tesseract17TrainingSampleSet17FontClassDistanceEE9push_backES2_ */
/* Demangled: GenericVector<tesseract::TrainingSampleSet::FontClassDistance>::push_back(tesseract::TrainingSampleSet::FontClassDistance) */
int _ZN13GenericVectorIN9tesseract17TrainingSampleSet17FontClassDistanceEE9push_backES2_(void);

/* Symbol: _ZN9tesseract15ColPartitionSet22ImproveColumnCandidateEP19TessResultCallback1IbiEP13GenericVectorIPS0_E */
/* Demangled: tesseract::ColPartitionSet::ImproveColumnCandidate(TessResultCallback1<bool, int>*, GenericVector<tesseract::ColPartitionSet*>*) */
int _ZN9tesseract15ColPartitionSet22ImproveColumnCandidateEP19TessResultCallback1IbiEP13GenericVectorIPS0_E(void);

/* Symbol: _ZN13GenericVectorIN9tesseract10ScoredFontEE15double_the_sizeEv */
/* Demangled: GenericVector<tesseract::ScoredFont>::double_the_size() */
int _ZN13GenericVectorIN9tesseract10ScoredFontEE15double_the_sizeEv(void);

/* Symbol: _ZN10UNICHARSET18UNICHAR_PROPERTIES4InitEv */
/* Demangled: UNICHARSET::UNICHAR_PROPERTIES::Init() */
int _ZN10UNICHARSET18UNICHAR_PROPERTIES4InitEv(void);

/* Symbol: _ZN9tesseract7TabFind13FindTabVectorEiiNS_12TabAlignmentEP8BLOBNBOXPiS4_ */
/* Demangled: tesseract::TabFind::FindTabVector(int, int, tesseract::TabAlignment, BLOBNBOX*, int*, int*) */
int _ZN9tesseract7TabFind13FindTabVectorEiiNS_12TabAlignmentEP8BLOBNBOXPiS4_(void);

/* Symbol: _ZN9tesseract11TableFinder19HLineBelongsToTableERKNS_12ColPartitionERK4TBOX */
/* Demangled: tesseract::TableFinder::HLineBelongsToTable(tesseract::ColPartition const&, TBOX const&) */
int _ZN9tesseract11TableFinder19HLineBelongsToTableERKNS_12ColPartitionERK4TBOX(void);

/* Symbol: _ZN9tesseract10GridSearchINS_12ColPartitionENS_18ColPartition_CLISTENS_17ColPartition_C_ITEE18NextVerticalSearchEb */
/* Demangled: tesseract::GridSearch<tesseract::ColPartition, tesseract::ColPartition_CLIST, tesseract::ColPartition_C_IT>::NextVerticalSearch(bool) */
int _ZN9tesseract10GridSearchINS_12ColPartitionENS_18ColPartition_CLISTENS_17ColPartition_C_ITEE18NextVerticalSearchEb(void);

/* Symbol: _ZNK9OSResults12print_scoresEv */
/* Demangled: OSResults::print_scores() const */
int _ZNK9OSResults12print_scoresEv(void);

/* Symbol: _ZNK10UNICHARMAP8minmatchEPKc */
/* Demangled: UNICHARMAP::minmatch(char const*) const */
int _ZNK10UNICHARMAP8minmatchEPKc(void);

/* Symbol: _ZN9tesseract13IsLatinLetterEi */
/* Demangled: tesseract::IsLatinLetter(int) */
int _ZN9tesseract13IsLatinLetterEi(void);

/* Symbol: _ZN9tesseract17WordListLangModel15IsValidSequenceEPKibPPNS_11LangModEdgeE */
/* Demangled: tesseract::WordListLangModel::IsValidSequence(int const*, bool, tesseract::LangModEdge**) */
int _ZN9tesseract17WordListLangModel15IsValidSequenceEPKibPPNS_11LangModEdgeE(void);

/* Symbol: _ZN9tesseract15StructuredTable22VerifyWhitespacedTableEv */
/* Demangled: tesseract::StructuredTable::VerifyWhitespacedTable() */
int _ZN9tesseract15StructuredTable22VerifyWhitespacedTableEv(void);

/* Symbol: _ZN13GenericVectorIN9tesseract17TrainingSampleSet17FontClassDistanceEE15double_the_sizeEv */
/* Demangled: GenericVector<tesseract::TrainingSampleSet::FontClassDistance>::double_the_size() */
int _ZN13GenericVectorIN9tesseract17TrainingSampleSet17FontClassDistanceEE15double_the_sizeEv(void);

/* Symbol: _ZN9tesseract11AlignedBlobD2Ev */
/* Demangled: tesseract::AlignedBlob::~AlignedBlob() */
int _ZN9tesseract11AlignedBlobD2Ev(void);

/* Symbol: _ZN9tesseract11TessBaseAPI4InitEPKcS2_NS_13OcrEngineModeEPPciPK13GenericVectorI6STRINGESA_b */
/* Demangled: tesseract::TessBaseAPI::Init(char const*, char const*, tesseract::OcrEngineMode, char**, int, GenericVector<STRING> const*, GenericVector<STRING> const*, bool) */
int _ZN9tesseract11TessBaseAPI4InitEPKcS2_NS_13OcrEngineModeEPPciPK13GenericVectorI6STRINGESA_b(void);

/* Symbol: _ZN9tesseract7IntGridC1EiRK6ICOORDS3_ */
/* Demangled: tesseract::IntGrid::IntGrid(int, ICOORD const&, ICOORD const&) */
int _ZN9tesseract7IntGridC1EiRK6ICOORDS3_(void);

/* Symbol: textord_occupancy_threshold */
/* Demangled: textord_occupancy_threshold */
extern void* textord_occupancy_threshold;

/* Symbol: _ZN9tesseract9Tesseract21potential_word_crunchEP8WERD_RES13GARBAGE_LEVELh */
/* Demangled: tesseract::Tesseract::potential_word_crunch(WERD_RES*, GARBAGE_LEVEL, unsigned char) */
int _ZN9tesseract9Tesseract21potential_word_crunchEP8WERD_RES13GARBAGE_LEVELh(void);

/* Symbol: _ZN5BLOCKC1EPKchssssss */
/* Demangled: BLOCK::BLOCK(char const*, unsigned char, short, short, short, short, short, short) */
int _ZN5BLOCKC1EPKchssssss(void);

/* Symbol: _ZNK6STRING6stringEv */
/* Demangled: STRING::string() const */
int _ZNK6STRING6stringEv(void);

/* Symbol: _ZN9tesseract12IndexMapBiDi8CopyFromERKS0_ */
/* Demangled: tesseract::IndexMapBiDi::CopyFrom(tesseract::IndexMapBiDi const&) */
int _ZN9tesseract12IndexMapBiDi8CopyFromERKS0_(void);

/* Symbol: _ZN9tesseract17CubeLineSegmenter8IndexRTLEP4Pixa */
/* Demangled: tesseract::CubeLineSegmenter::IndexRTL(Pixa*) */
int _ZN9tesseract17CubeLineSegmenter8IndexRTLEP4Pixa(void);

/* Symbol: _ZN9tesseract4Trie23kAlphanumPatternUnicodeE */
/* Demangled: tesseract::Trie::kAlphanumPatternUnicode */
extern void* _ZN9tesseract4Trie23kAlphanumPatternUnicodeE;

/* Symbol: _ZN13GenericVectorIN9tesseract8FontInfoEE12init_to_sizeEiS1_ */
/* Demangled: GenericVector<tesseract::FontInfo>::init_to_size(int, tesseract::FontInfo) */
int _ZN13GenericVectorIN9tesseract8FontInfoEE12init_to_sizeEiS1_(void);

/* Symbol: _ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev */
/* Demangled: std::__1::__vector_base<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::~__vector_base() */
int _ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev(void);

/* Symbol: _ZTV34_ConstTessMemberResultCallback_5_0ILb0EbN9tesseract12PageIteratorENS0_17PageIteratorLevelEPiS3_S3_S3_E */
/* Demangled: vtable for _ConstTessMemberResultCallback_5_0<false, bool, tesseract::PageIterator, tesseract::PageIteratorLevel, int*, int*, int*, int*> */
extern void* _ZTV34_ConstTessMemberResultCallback_5_0ILb0EbN9tesseract12PageIteratorENS0_17PageIteratorLevelEPiS3_S3_S3_E;

/* Symbol: poly_debug */
/* Demangled: poly_debug */
extern void* poly_debug;

/* Symbol: _ZN9tesseract9BitVectoraSERKS0_ */
/* Demangled: tesseract::BitVector::operator=(tesseract::BitVector const&) */
int _ZN9tesseract9BitVectoraSERKS0_(void);

/* Symbol: _ZN13GenericVectorI18INT_FEATURE_STRUCTE15double_the_sizeEv */
/* Demangled: GenericVector<INT_FEATURE_STRUCT>::double_the_size() */
int _ZN13GenericVectorI18INT_FEATURE_STRUCTE15double_the_sizeEv(void);

/* Symbol: _ZN9tesseract7TabFind21FindInitialTabVectorsEP13BLOBNBOX_LISTidP8TO_BLOCK */
/* Demangled: tesseract::TabFind::FindInitialTabVectors(BLOBNBOX_LIST*, int, double, TO_BLOCK*) */
int _ZN9tesseract7TabFind21FindInitialTabVectorsEP13BLOBNBOX_LISTidP8TO_BLOCK(void);

/* Symbol: _ZN9tesseract15StructuredTableD1Ev */
/* Demangled: tesseract::StructuredTable::~StructuredTable() */
int _ZN9tesseract15StructuredTableD1Ev(void);

/* Symbol: _ZTV6MATRIX */
/* Demangled: vtable for MATRIX */
extern void* _ZTV6MATRIX;

/* Symbol: _ZN13GenericVectorIPN9tesseract5ShapeEE6removeEi */
/* Demangled: GenericVector<tesseract::Shape*>::remove(int) */
int _ZN13GenericVectorIPN9tesseract5ShapeEE6removeEi(void);

/* Symbol: _ZN9tesseract7IntGrid5ClearEv */
/* Demangled: tesseract::IntGrid::Clear() */
int _ZN9tesseract7IntGrid5ClearEv(void);

/* Symbol: _ZN9tesseract13LanguageModel21GenerateTopChoiceInfoEPNS_17ViterbiStateEntryEPKS1_PNS_18LanguageModelStateE */
/* Demangled: tesseract::LanguageModel::GenerateTopChoiceInfo(tesseract::ViterbiStateEntry*, tesseract::ViterbiStateEntry const*, tesseract::LanguageModelState*) */
int _ZN9tesseract13LanguageModel21GenerateTopChoiceInfoEPNS_17ViterbiStateEntryEPKS1_PNS_18LanguageModelStateE(void);

/* Symbol: _ZN9tesseract10DetLineFit5ClearEv */
/* Demangled: tesseract::DetLineFit::Clear() */
int _ZN9tesseract10DetLineFit5ClearEv(void);

/* Symbol: _ZN9tesseract13MasterTrainer14LoadUnicharsetEPKc */
/* Demangled: tesseract::MasterTrainer::LoadUnicharset(char const*) */
int _ZN9tesseract13MasterTrainer14LoadUnicharsetEPKc(void);

/* Symbol: _ZN9tesseract10SearchNodeC1EPNS_15CubeRecoContextEPS0_iPNS_11LangModEdgeEi */
/* Demangled: tesseract::SearchNode::SearchNode(tesseract::CubeRecoContext*, tesseract::SearchNode*, int, tesseract::LangModEdge*, int) */
int _ZN9tesseract10SearchNodeC1EPNS_15CubeRecoContextEPS0_iPNS_11LangModEdgeEi(void);

/* Symbol: _ZNK9tesseract18TextlineProjection20EvaluateColPartitionERKNS_12ColPartitionEPK6DENORMb */
/* Demangled: tesseract::TextlineProjection::EvaluateColPartition(tesseract::ColPartition const&, DENORM const*, bool) const */
int _ZNK9tesseract18TextlineProjection20EvaluateColPartitionERKNS_12ColPartitionEPK6DENORMb(void);

/* Symbol: textord_pitch_cheat */
/* Demangled: textord_pitch_cheat */
extern void* textord_pitch_cheat;

/* Symbol: _Z13FreeTempProtoPv */
/* Demangled: FreeTempProto(void*) */
int _Z13FreeTempProtoPv(void);

/* Symbol: _ZN9tesseract13MasterTrainer17SetupMasterShapesEv */
/* Demangled: tesseract::MasterTrainer::SetupMasterShapes() */
int _ZN9tesseract13MasterTrainer17SetupMasterShapesEv(void);

/* Symbol: _ZN9tesseract9NeuralNet16FastGetNetOutputIdEEbPKT_iPS2_ */
/* Demangled: bool tesseract::NeuralNet::FastGetNetOutput<double>(double const*, int, double*) */
int _ZN9tesseract9NeuralNet16FastGetNetOutputIdEEbPKT_iPS2_(void);

/* Symbol: _ZN9tesseract16ColPartitionGridD2Ev */
/* Demangled: tesseract::ColPartitionGrid::~ColPartitionGrid() */
int _ZN9tesseract16ColPartitionGridD2Ev(void);

/* Symbol: _ZN9tesseract13TabConstraint16ApplyConstraintsEPNS_18TabConstraint_LISTE */
/* Demangled: tesseract::TabConstraint::ApplyConstraints(tesseract::TabConstraint_LIST*) */
int _ZN9tesseract13TabConstraint16ApplyConstraintsEPNS_18TabConstraint_LISTE(void);

/* Symbol: _ZN9tesseract10GridSearchINS_12ColPartitionENS_18ColPartition_CLISTENS_17ColPartition_C_ITEE14NextSideSearchEb */
/* Demangled: tesseract::GridSearch<tesseract::ColPartition, tesseract::ColPartition_CLIST, tesseract::ColPartition_C_IT>::NextSideSearch(bool) */
int _ZN9tesseract10GridSearchINS_12ColPartitionENS_18ColPartition_CLISTENS_17ColPartition_C_ITEE14NextSideSearchEb(void);

/* Symbol: _ZN9tesseract14EquationDetect27EstimateTextPartLineSpacingEv */
/* Demangled: tesseract::EquationDetect::EstimateTextPartLineSpacing() */
int _ZN9tesseract14EquationDetect27EstimateTextPartLineSpacingEv(void);

/* Symbol: _ZN5TWERD8CopyFromERKS_ */
/* Demangled: TWERD::CopyFrom(TWERD const&) */
int _ZN5TWERD8CopyFromERKS_(void);

/* Symbol: _ZNK10UNICHARSET16encodable_stringEPKcPi */
/* Demangled: UNICHARSET::encodable_string(char const*, int*) const */
int _ZNK10UNICHARSET16encodable_stringEPKcPi(void);

/* Symbol: _Z17NewSphericalPrototP6sampleP10STATISTICS */
/* Demangled: NewSphericalProto(unsigned short, sample*, STATISTICS*) */
int _Z17NewSphericalPrototP6sampleP10STATISTICS(void);

/* Symbol: _ZN9tesseract7Textord17row_spacing_statsEP6TO_ROWP6GAPMAPssss */
/* Demangled: tesseract::Textord::row_spacing_stats(TO_ROW*, GAPMAP*, short, short, short, short) */
int _ZN9tesseract7Textord17row_spacing_statsEP6TO_ROWP6GAPMAPssss(void);

/* Symbol: _ZNK5TBLOB12bounding_boxEv */
/* Demangled: TBLOB::bounding_box() const */
int _ZNK5TBLOB12bounding_boxEv(void);

/* Symbol: _ZN9tesseract12ColumnFinder19SetupAndFilterNoiseENS_11PageSegModeEP3PixP8TO_BLOCK */
/* Demangled: tesseract::ColumnFinder::SetupAndFilterNoise(tesseract::PageSegMode, Pix*, TO_BLOCK*) */
int _ZN9tesseract12ColumnFinder19SetupAndFilterNoiseENS_11PageSegModeEP3PixP8TO_BLOCK(void);

/* Symbol: _ZN5TBLOB16CorrectBlobOrderEPS_ */
/* Demangled: TBLOB::CorrectBlobOrder(TBLOB*) */
int _ZN5TBLOB16CorrectBlobOrderEPS_(void);

/* Symbol: _Z14find_row_pitchP6TO_ROWiiP8TO_BLOCKiih */
/* Demangled: find_row_pitch(TO_ROW*, int, int, TO_BLOCK*, int, int, unsigned char) */
int _Z14find_row_pitchP6TO_ROWiiP8TO_BLOCKiih(void);

/* Symbol: _ZN3REJ16setrej_edge_charEv */
/* Demangled: REJ::setrej_edge_char() */
int _ZN3REJ16setrej_edge_charEv(void);

/* Symbol: _ZN9tesseract17TrainingSampleSet13FontClassInfoC2Ev */
/* Demangled: tesseract::TrainingSampleSet::FontClassInfo::FontClassInfo() */
int _ZN9tesseract17TrainingSampleSet13FontClassInfoC2Ev(void);

/* Symbol: _ZNK9tesseract10BeamSearch9BackTrackEPNS_12SearchObjectEPNS_10SearchNodeEPiPS5_PP4Boxa */
/* Demangled: tesseract::BeamSearch::BackTrack(tesseract::SearchObject*, tesseract::SearchNode*, int*, int**, Boxa**) const */
int _ZNK9tesseract10BeamSearch9BackTrackEPNS_12SearchObjectEPNS_10SearchNodeEPiPS5_PP4Boxa(void);

/* Symbol: _ZN9tesseract7Textord10to_spacingE6ICOORDP13TO_BLOCK_LIST */
/* Demangled: tesseract::Textord::to_spacing(ICOORD, TO_BLOCK_LIST*) */
int _ZN9tesseract7Textord10to_spacingE6ICOORDP13TO_BLOCK_LIST(void);

/* Symbol: TessPageIteratorGetImage */
/* Demangled: TessPageIteratorGetImage */
int TessPageIteratorGetImage(void);

/* Symbol: _ZN9tesseract14EquationDetect19IdentifySpecialTextEP8BLOBNBOXi */
/* Demangled: tesseract::EquationDetect::IdentifySpecialText(BLOBNBOX*, int) */
int _ZN9tesseract14EquationDetect19IdentifySpecialTextEP8BLOBNBOXi(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract12DocumentDataEE5clearEv */
/* Demangled: GenericVector<tesseract::DocumentData*>::clear() */
int _ZN13GenericVectorIPN9tesseract12DocumentDataEE5clearEv(void);

/* Symbol: _ZN9tesseract12SearchColumnC1Eii */
/* Demangled: tesseract::SearchColumn::SearchColumn(int, int) */
int _ZN9tesseract12SearchColumnC1Eii(void);

/* Symbol: _ZN9tesseract13BaselineBlock18ComputeLineSpacingEv */
/* Demangled: tesseract::BaselineBlock::ComputeLineSpacing() */
int _ZN9tesseract13BaselineBlock18ComputeLineSpacingEv(void);

/* Symbol: _ZNK9tesseract11BaselineRow12StraightYAtXEd */
/* Demangled: tesseract::BaselineRow::StraightYAtX(double) const */
int _ZNK9tesseract11BaselineRow12StraightYAtXEd(void);

/* Symbol: _ZN9tesseract15CCNonTextDetectC2EiRK6ICOORDS3_ */
/* Demangled: tesseract::CCNonTextDetect::CCNonTextDetect(int, ICOORD const&, ICOORD const&) */
int _ZN9tesseract15CCNonTextDetectC2EiRK6ICOORDS3_(void);

/* Symbol: _ZN9tesseract6BBGridINS_10ColSegmentENS_16ColSegment_CLISTENS_15ColSegment_C_ITEED0Ev */
/* Demangled: tesseract::BBGrid<tesseract::ColSegment, tesseract::ColSegment_CLIST, tesseract::ColSegment_C_IT>::~BBGrid() */
int _ZN9tesseract6BBGridINS_10ColSegmentENS_16ColSegment_CLISTENS_15ColSegment_C_ITEED0Ev(void);

/* Symbol: _ZN9tesseract13LanguageModel11InitForWordEPK11WERD_CHOICEbff */
/* Demangled: tesseract::LanguageModel::InitForWord(WERD_CHOICE const*, bool, float, float) */
int _ZN9tesseract13LanguageModel11InitForWordEPK11WERD_CHOICEbff(void);

/* Symbol: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeSetImagePix */
/* Demangled: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeSetImagePix */
int Java_com_googlecode_tesseract_android_TessBaseAPI_nativeSetImagePix(void);

/* Symbol: _ZN15ELIST2_ITERATOR7forwardEv */
/* Demangled: ELIST2_ITERATOR::forward() */
int _ZN15ELIST2_ITERATOR7forwardEv(void);

/* Symbol: _ZN8WERD_RES23BestChoiceToCorrectTextEv */
/* Demangled: WERD_RES::BestChoiceToCorrectText() */
int _ZN8WERD_RES23BestChoiceToCorrectTextEv(void);

/* Symbol: _ZNK9tesseract11TessBaseAPI15GetBoolVariableEPKcPb */
/* Demangled: tesseract::TessBaseAPI::GetBoolVariable(char const*, bool*) const */
int _ZNK9tesseract11TessBaseAPI15GetBoolVariableEPKcPb(void);

/* Symbol: _ZTVN9tesseract15TessPDFRendererE */
/* Demangled: vtable for tesseract::TessPDFRenderer */
extern void* _ZTVN9tesseract15TessPDFRendererE;

/* Symbol: _ZN9tesseract17TrainingSampleSetC2ERKNS_13FontInfoTableE */
/* Demangled: tesseract::TrainingSampleSet::TrainingSampleSet(tesseract::FontInfoTable const&) */
int _ZN9tesseract17TrainingSampleSetC2ERKNS_13FontInfoTableE(void);

/* Symbol: _ZN9tesseract7Wordrec18grade_split_lengthEP5SPLIT */
/* Demangled: tesseract::Wordrec::grade_split_length(SPLIT*) */
int _ZN9tesseract7Wordrec18grade_split_lengthEP5SPLIT(void);

/* Symbol: _ZN12UnicityTableIN9tesseract8FontInfoEE9push_backES1_ */
/* Demangled: UnicityTable<tesseract::FontInfo>::push_back(tesseract::FontInfo) */
int _ZN12UnicityTableIN9tesseract8FontInfoEE9push_backES1_(void);

/* Symbol: _ZNK11WERD_CHOICE12blob_choicesEiP6MATRIX */
/* Demangled: WERD_CHOICE::blob_choices(int, MATRIX*) const */
int _ZNK11WERD_CHOICE12blob_choicesEiP6MATRIX(void);

/* Symbol: _ZNK9tesseract12ColPartition13RightBlobRuleEv */
/* Demangled: tesseract::ColPartition::RightBlobRule() const */
int _ZNK9tesseract12ColPartition13RightBlobRuleEv(void);

/* Symbol: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeSetPageSegMode */
/* Demangled: Java_com_googlecode_tesseract_android_TessBaseAPI_nativeSetPageSegMode */
int Java_com_googlecode_tesseract_android_TessBaseAPI_nativeSetPageSegMode(void);

/* Symbol: _ZN6REJMAP27quality_recoverable_rejectsEv */
/* Demangled: REJMAP::quality_recoverable_rejects() */
int _ZN6REJMAP27quality_recoverable_rejectsEv(void);

/* Symbol: _ZN13GenericVectorIiE11DeSerializeEbP7__sFILE */
/* Demangled: GenericVector<int>::DeSerialize(bool, __sFILE*) */
int _ZN13GenericVectorIiE11DeSerializeEbP7__sFILE(void);

/* Symbol: _ZN9tesseract8Classify16ReadIntTemplatesEP7__sFILE */
/* Demangled: tesseract::Classify::ReadIntTemplates(__sFILE*) */
int _ZN9tesseract8Classify16ReadIntTemplatesEP7__sFILE(void);

/* Symbol: textord_width_limit */
/* Demangled: textord_width_limit */
extern void* textord_width_limit;

/* Symbol: _ZNK9tesseract15StructuredTable8is_linedEv */
/* Demangled: tesseract::StructuredTable::is_lined() const */
int _ZNK9tesseract15StructuredTable8is_linedEv(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract10BlockGroupEE9push_backES2_ */
/* Demangled: GenericVector<tesseract::BlockGroup*>::push_back(tesseract::BlockGroup*) */
int _ZN13GenericVectorIPN9tesseract10BlockGroupEE9push_backES2_(void);

/* Symbol: _ZN9tesseract21ParagraphModelSmearerC1EP13GenericVectorINS_19RowScratchRegistersEEiiPNS_15ParagraphTheoryE */
/* Demangled: tesseract::ParagraphModelSmearer::ParagraphModelSmearer(GenericVector<tesseract::RowScratchRegisters>*, int, int, tesseract::ParagraphTheory*) */
int _ZN9tesseract21ParagraphModelSmearerC1EP13GenericVectorINS_19RowScratchRegistersEEiiPNS_15ParagraphTheoryE(void);

/* Symbol: _ZN13GenericVectorI21StrongScriptDirectionE5clearEv */
/* Demangled: GenericVector<StrongScriptDirection>::clear() */
int _ZN13GenericVectorI21StrongScriptDirectionE5clearEv(void);

/* Symbol: _ZN4SEAM11BreakPiecesERK13GenericVectorIPS_ERKS0_IP5TBLOBEii */
/* Demangled: SEAM::BreakPieces(GenericVector<SEAM*> const&, GenericVector<TBLOB*> const&, int, int) */
int _ZN4SEAM11BreakPiecesERK13GenericVectorIPS_ERKS0_IP5TBLOBEii(void);

/* Symbol: _ZN9tesseract7AltListD2Ev */
/* Demangled: tesseract::AltList::~AltList() */
int _ZN9tesseract7AltListD2Ev(void);

/* Symbol: _Z19find_repeated_charsP8TO_BLOCKh */
/* Demangled: find_repeated_chars(TO_BLOCK*, unsigned char) */
int _Z19find_repeated_charsP8TO_BLOCKh(void);

/* Symbol: oldbl_corrfix */
/* Demangled: oldbl_corrfix */
extern void* oldbl_corrfix;

/* Symbol: _ZNSt3__112__hash_tableIPN9tesseract11WordWithBoxENS1_7PtrHashIS2_EENS_8equal_toIS3_EENS_9allocatorIS3_EEE4findIS3_EENS_15__hash_iteratorIPNS_11__hash_nodeIS3_PvEEEERKT_ */
/* Demangled: std::__1::__hash_iterator<std::__1::__hash_node<tesseract::WordWithBox*, void*>*> std::__1::__hash_table<tesseract::WordWithBox*, tesseract::PtrHash<tesseract::WordWithBox>, std::__1::equal_to<tesseract::WordWithBox*>, std::__1::allocator<tesseract::WordWithBox*> >::find<tesseract::WordWithBox*>(tesseract::WordWithBox* const&) */
int _ZNSt3__112__hash_tableIPN9tesseract11WordWithBoxENS1_7PtrHashIS2_EENS_8equal_toIS3_EENS_9allocatorIS3_EEE4findIS3_EENS_15__hash_iteratorIPNS_11__hash_nodeIS3_PvEEEERKT_(void);

/* Symbol: _ZN9tesseract7Wordrec9set_pass1Ev */
/* Demangled: tesseract::Wordrec::set_pass1() */
int _ZN9tesseract7Wordrec9set_pass1Ev(void);

/* Symbol: _ZN9tesseract7Textord21compute_block_xheightEP8TO_BLOCKf */
/* Demangled: tesseract::Textord::compute_block_xheight(TO_BLOCK*, float) */
int _ZN9tesseract7Textord21compute_block_xheightEP8TO_BLOCKf(void);

/* Symbol: _ZN10OL_BUCKETSC2E6ICOORDS0_ */
/* Demangled: OL_BUCKETS::OL_BUCKETS(ICOORD, ICOORD) */
int _ZN10OL_BUCKETSC2E6ICOORDS0_(void);

/* Symbol: _ZNK11WERD_CHOICE18string_and_lengthsEP6STRINGS1_ */
/* Demangled: WERD_CHOICE::string_and_lengths(STRING*, STRING*) const */
int _ZNK11WERD_CHOICE18string_and_lengthsEP6STRINGS1_(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract11DoubleParamEE7reserveEi */
/* Demangled: GenericVector<tesseract::DoubleParam*>::reserve(int) */
int _ZN13GenericVectorIPN9tesseract11DoubleParamEE7reserveEi(void);

/* Symbol: _ZN10UNICHARMAP15UNICHARMAP_NODED2Ev */
/* Demangled: UNICHARMAP::UNICHARMAP_NODE::~UNICHARMAP_NODE() */
int _ZN10UNICHARMAP15UNICHARMAP_NODED2Ev(void);

/* Symbol: _ZN10UNICHARSET18UNICHAR_PROPERTIES14SetRangesEmptyEv */
/* Demangled: UNICHARSET::UNICHAR_PROPERTIES::SetRangesEmpty() */
int _ZN10UNICHARSET18UNICHAR_PROPERTIES14SetRangesEmptyEv(void);

/* Symbol: _ZN9tesseract12ErrorCounter6CountsC2Ev */
/* Demangled: tesseract::ErrorCounter::Counts::Counts() */
int _ZN9tesseract12ErrorCounter6CountsC2Ev(void);

/* Symbol: _ZN9tesseract17TrainingSampleSet9AddSampleEPKcPNS_14TrainingSampleE */
/* Demangled: tesseract::TrainingSampleSet::AddSample(char const*, tesseract::TrainingSample*) */
int _ZN9tesseract17TrainingSampleSet9AddSampleEPKcPNS_14TrainingSampleE(void);

/* Symbol: oldbl_dot_error_size */
/* Demangled: oldbl_dot_error_size */
extern void* oldbl_dot_error_size;

/* Symbol: _ZN11PAGE_RES_IT16internal_forwardEbb */
/* Demangled: PAGE_RES_IT::internal_forward(bool, bool) */
int _ZN11PAGE_RES_IT16internal_forwardEbb(void);

/* Symbol: _ZNK6STRING8containsEc */
/* Demangled: STRING::contains(char) const */
int _ZNK6STRING8containsEc(void);

/* Symbol: _ZN14CLIST_ITERATOR13data_relativeEa */
/* Demangled: CLIST_ITERATOR::data_relative(signed char) */
int _ZN14CLIST_ITERATOR13data_relativeEa(void);

/* Symbol: _ZN8WERD_RES13GetBlobsWidthEii */
/* Demangled: WERD_RES::GetBlobsWidth(int, int) */
int _ZN8WERD_RES13GetBlobsWidthEii(void);

/* Symbol: _ZNK6STRINGplEc */
/* Demangled: STRING::operator+(char) const */
int _ZNK6STRINGplEc(void);

/* Symbol: _ZN7FPSEGPTC1EshssssP12FPSEGPT_LIST */
/* Demangled: FPSEGPT::FPSEGPT(short, unsigned char, short, short, short, short, FPSEGPT_LIST*) */
int _ZN7FPSEGPTC1EshssssP12FPSEGPT_LIST(void);

/* Symbol: _ZN13GenericVectorIcE5clearEv */
/* Demangled: GenericVector<char>::clear() */
int _ZN13GenericVectorIcE5clearEv(void);

/* Symbol: _ZN10POLY_BLOCKC2EP14ICOORDELT_LIST13PolyBlockType */
/* Demangled: POLY_BLOCK::POLY_BLOCK(ICOORDELT_LIST*, PolyBlockType) */
int _ZN10POLY_BLOCKC2EP14ICOORDELT_LIST13PolyBlockType(void);

/* Symbol: _ZN6ELIST217assign_to_sublistEP15ELIST2_ITERATORS1_ */
/* Demangled: ELIST2::assign_to_sublist(ELIST2_ITERATOR*, ELIST2_ITERATOR*) */
int _ZN6ELIST217assign_to_sublistEP15ELIST2_ITERATORS1_(void);

/* Symbol: _ZN9tesseract8Classify11SettupPass1Ev */
/* Demangled: tesseract::Classify::SettupPass1() */
int _ZN9tesseract8Classify11SettupPass1Ev(void);

/* Symbol: _ZN9tesseract17CubeLineSegmenter9FindLinesEv */
/* Demangled: tesseract::CubeLineSegmenter::FindLines() */
int _ZN9tesseract17CubeLineSegmenter9FindLinesEv(void);

/* Symbol: _ZN9tesseract13WordSizeModelD0Ev */
/* Demangled: tesseract::WordSizeModel::~WordSizeModel() */
int _ZN9tesseract13WordSizeModelD0Ev(void);

/* Symbol: _ZN9tesseract17AlignedBlobParamsC2Eiii */
/* Demangled: tesseract::AlignedBlobParams::AlignedBlobParams(int, int, int) */
int _ZN9tesseract17AlignedBlobParamsC2Eiii(void);

/* Symbol: _ZN9tesseract16ColPartitionGrid21FindPartitionPartnersEbPNS_12ColPartitionE */
/* Demangled: tesseract::ColPartitionGrid::FindPartitionPartners(bool, tesseract::ColPartition*) */
int _ZN9tesseract16ColPartitionGrid21FindPartitionPartnersEbPNS_12ColPartitionE(void);

/* Symbol: _ZN5STATS9set_rangeEii */
/* Demangled: STATS::set_range(int, int) */
int _ZN5STATS9set_rangeEii(void);

/* Symbol: _ZNK9tesseract14TrainingSample12GetSamplePixEiP3Pix */
/* Demangled: tesseract::TrainingSample::GetSamplePix(int, Pix*) const */
int _ZNK9tesseract14TrainingSample12GetSamplePixEiP3Pix(void);

/* Symbol: _Z21preserve_outline_treeP8TESSLINE */
/* Demangled: preserve_outline_tree(TESSLINE*) */
int _Z21preserve_outline_treeP8TESSLINE(void);

/* Symbol: _ZN13GenericVectorIP9C_OUTLINEE15double_the_sizeEv */
/* Demangled: GenericVector<C_OUTLINE*>::double_the_size() */
int _ZN13GenericVectorIP9C_OUTLINEE15double_the_sizeEv(void);

/* Symbol: _ZN9tesseract9Tesseract10dump_wordsER13WERD_RES_LISTssh */
/* Demangled: tesseract::Tesseract::dump_words(WERD_RES_LIST&, short, short, unsigned char) */
int _ZN9tesseract9Tesseract10dump_wordsER13WERD_RES_LISTssh(void);

/* Symbol: _ZN3ROWC2EiPiPdfffss */
/* Demangled: ROW::ROW(int, int*, double*, float, float, float, short, short) */
int _ZN3ROWC2EiPiPdfffss(void);

/* Symbol: global_crash_pixes */
/* Demangled: global_crash_pixes */
extern void* global_crash_pixes;

/* Symbol: _ZN13GenericVectorIsE15double_the_sizeEv */
/* Demangled: GenericVector<short>::double_the_size() */
int _ZN13GenericVectorIsE15double_the_sizeEv(void);

/* Symbol: _ZN9tesseract11TableFinderC2Ev */
/* Demangled: tesseract::TableFinder::TableFinder() */
int _ZN9tesseract11TableFinderC2Ev(void);

/* Symbol: TessBaseAPIInitLangMod */
/* Demangled: TessBaseAPIInitLangMod */
int TessBaseAPIInitLangMod(void);

/* Symbol: _ZN5BLOCKaSERKS_ */
/* Demangled: BLOCK::operator=(BLOCK const&) */
int _ZN5BLOCKaSERKS_(void);

/* Symbol: _ZN5STATSD2Ev */
/* Demangled: STATS::~STATS() */
int _ZN5STATSD2Ev(void);

/* Symbol: _Z17MakeTempProtoPermPvS_ */
/* Demangled: MakeTempProtoPerm(void*, void*) */
int _Z17MakeTempProtoPermPvS_(void);

/* Symbol: textord_words_initial_lower */
/* Demangled: textord_words_initial_lower */
extern void* textord_words_initial_lower;

/* Symbol: _ZN9tesseract21TesseractCubeCombinerD1Ev */
/* Demangled: tesseract::TesseractCubeCombiner::~TesseractCubeCombiner() */
int _ZN9tesseract21TesseractCubeCombinerD1Ev(void);

/* Symbol: _ZN9tesseract15CCNonTextDetect18ComputeNonTextMaskEbP3PixP8TO_BLOCK */
/* Demangled: tesseract::CCNonTextDetect::ComputeNonTextMask(bool, Pix*, TO_BLOCK*) */
int _ZN9tesseract15CCNonTextDetect18ComputeNonTextMaskEbP3PixP8TO_BLOCK(void);

/* Symbol: _Z23any_shared_split_pointsRK13GenericVectorIP4SEAMES1_ */
/* Demangled: any_shared_split_points(GenericVector<SEAM*> const&, SEAM*) */
int _Z23any_shared_split_pointsRK13GenericVectorIP4SEAMES1_(void);

/* Symbol: _ZN8WERD_RES18MergeAdjacentBlobsEi */
/* Demangled: WERD_RES::MergeAdjacentBlobs(int) */
int _ZN8WERD_RES18MergeAdjacentBlobsEi(void);

/* Symbol: _ZNSt3__16vectorIdNS_9allocatorIdEEE21__push_back_slow_pathIdEEvOT_ */
/* Demangled: void std::__1::vector<double, std::__1::allocator<double> >::__push_back_slow_path<double>(double&&) */
int _ZNSt3__16vectorIdNS_9allocatorIdEEE21__push_back_slow_pathIdEEvOT_(void);

/* Symbol: _ZN9tesseract10DetLineFitD2Ev */
/* Demangled: tesseract::DetLineFit::~DetLineFit() */
int _ZN9tesseract10DetLineFitD2Ev(void);

/* Symbol: _ZN6REJMAP10full_printEP7__sFILE */
/* Demangled: REJMAP::full_print(__sFILE*) */
int _ZN6REJMAP10full_printEP7__sFILE(void);

/* Symbol: _ZN13GenericVectorIN9tesseract24ParamsTrainingHypothesisEEpLERKS2_ */
/* Demangled: GenericVector<tesseract::ParamsTrainingHypothesis>::operator+=(GenericVector<tesseract::ParamsTrainingHypothesis> const&) */
int _ZN13GenericVectorIN9tesseract24ParamsTrainingHypothesisEEpLERKS2_(void);

/* Symbol: _ZN9tesseract19ModelStrongEvidenceEiP13GenericVectorINS_19RowScratchRegistersEEiibPNS_15ParagraphTheoryE */
/* Demangled: tesseract::ModelStrongEvidence(int, GenericVector<tesseract::RowScratchRegisters>*, int, int, bool, tesseract::ParagraphTheory*) */
int _ZN9tesseract19ModelStrongEvidenceEiP13GenericVectorINS_19RowScratchRegistersEEiibPNS_15ParagraphTheoryE(void);

/* Symbol: _Z11free_stringPc */
/* Demangled: free_string(char*) */
int _Z11free_stringPc(void);

/* Symbol: _ZN9tesseract16ColPartitionGrid15ListFindMarginsEPPNS_15ColPartitionSetEPNS_17ColPartition_LISTE */
/* Demangled: tesseract::ColPartitionGrid::ListFindMargins(tesseract::ColPartitionSet**, tesseract::ColPartition_LIST*) */
int _ZN9tesseract16ColPartitionGrid15ListFindMarginsEPPNS_15ColPartitionSetEPNS_17ColPartition_LISTE(void);

/* Symbol: _ZNK13GenericVectorIlE4backEv */
/* Demangled: GenericVector<long>::back() const */
int _ZNK13GenericVectorIlE4backEv(void);

/* Symbol: _Z14PrintNormMatchP7__sFILEiP9PROTOTYPEP14FEATURE_STRUCT */
/* Demangled: PrintNormMatch(__sFILE*, int, PROTOTYPE*, FEATURE_STRUCT*) */
int _Z14PrintNormMatchP7__sFILEiP9PROTOTYPEP14FEATURE_STRUCT(void);

/* Symbol: _ZN9tesseract10GridSearchINS_12ColPartitionENS_18ColPartition_CLISTENS_17ColPartition_C_ITEE15StartRectSearchERK4TBOX */
/* Demangled: tesseract::GridSearch<tesseract::ColPartition, tesseract::ColPartition_CLIST, tesseract::ColPartition_C_IT>::StartRectSearch(TBOX const&) */
int _ZN9tesseract10GridSearchINS_12ColPartitionENS_18ColPartition_CLISTENS_17ColPartition_C_ITEE15StartRectSearchERK4TBOX(void);

/* Symbol: _Z6h_edgeiP9CRACKEDGEP8CrackPos */
/* Demangled: h_edge(int, CRACKEDGE*, CrackPos*) */
int _Z6h_edgeiP9CRACKEDGEP8CrackPos(void);

/* Symbol: _ZN9tesseract10GridSearchI8BLOBNBOX14BLOBNBOX_CLIST13BLOBNBOX_C_ITE13NextRadSearchEv */
/* Demangled: tesseract::GridSearch<BLOBNBOX, BLOBNBOX_CLIST, BLOBNBOX_C_IT>::NextRadSearch() */
int _ZN9tesseract10GridSearchI8BLOBNBOX14BLOBNBOX_CLIST13BLOBNBOX_C_ITE13NextRadSearchEv(void);

/* Symbol: _ZN9tesseract7Wordrec15is_inside_angleEP6EDGEPT */
/* Demangled: tesseract::Wordrec::is_inside_angle(EDGEPT*) */
int _ZN9tesseract7Wordrec15is_inside_angleEP6EDGEPT(void);

/* Symbol: _ZN9tesseract11TessBaseAPIC1Ev */
/* Demangled: tesseract::TessBaseAPI::TessBaseAPI() */
int _ZN9tesseract11TessBaseAPIC1Ev(void);

/* Symbol: _ZNSt3__16vectorIPN9tesseract6NeuronENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE */
/* Demangled: std::__1::vector<tesseract::Neuron*, std::__1::allocator<tesseract::Neuron*> >::__swap_out_circular_buffer(std::__1::__split_buffer<tesseract::Neuron*, std::__1::allocator<tesseract::Neuron*>&>&) */
int _ZNSt3__16vectorIPN9tesseract6NeuronENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE(void);

/* Symbol: _ZN9tesseract9Tesseract26dictionary_correction_passEP8PAGE_RES */
/* Demangled: tesseract::Tesseract::dictionary_correction_pass(PAGE_RES*) */
int _ZN9tesseract9Tesseract26dictionary_correction_passEP8PAGE_RES(void);

/* Symbol: _ZN9tesseract17read_spacing_infoEP7__sFILEPNS_8FontInfoEb */
/* Demangled: tesseract::read_spacing_info(__sFILE*, tesseract::FontInfo*, bool) */
int _ZN9tesseract17read_spacing_infoEP7__sFILEPNS_8FontInfoEb(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract5ShapeEE5clearEv */
/* Demangled: GenericVector<tesseract::Shape*>::clear() */
int _ZN13GenericVectorIPN9tesseract5ShapeEE5clearEv(void);

/* Symbol: _ZN9tesseract11TableFinder14SetColumnsTypeEPNS_15ColSegment_LISTE */
/* Demangled: tesseract::TableFinder::SetColumnsType(tesseract::ColSegment_LIST*) */
int _ZN9tesseract11TableFinder14SetColumnsTypeEPNS_15ColSegment_LISTE(void);

/* Symbol: _ZN13GenericVectorIS_I6STRINGEE5clearEv */
/* Demangled: GenericVector<GenericVector<STRING> >::clear() */
int _ZN13GenericVectorIS_I6STRINGEE5clearEv(void);

/* Symbol: _ZN9tesseract15ParagraphTheory17NonCenteredModelsEP17GenericVectorEqEqIPK14ParagraphModelE */
/* Demangled: tesseract::ParagraphTheory::NonCenteredModels(GenericVectorEqEq<ParagraphModel const*>*) */
int _ZN9tesseract15ParagraphTheory17NonCenteredModelsEP17GenericVectorEqEqIPK14ParagraphModelE(void);

/* Symbol: _ZN9tesseract17TrainingSampleSet23ComputeCanonicalSamplesERKNS_13IntFeatureMapEb */
/* Demangled: tesseract::TrainingSampleSet::ComputeCanonicalSamples(tesseract::IntFeatureMap const&, bool) */
int _ZN9tesseract17TrainingSampleSet23ComputeCanonicalSamplesERKNS_13IntFeatureMapEb(void);

/* Symbol: _ZN9tesseract8CharSamp4CropEv */
/* Demangled: tesseract::CharSamp::Crop() */
int _ZN9tesseract8CharSamp4CropEv(void);

/* Symbol: textord_pitch_scalebigwords */
/* Demangled: textord_pitch_scalebigwords */
extern void* textord_pitch_scalebigwords;

/* Symbol: _ZN9tesseract8CCStruct16kXHeightCapRatioE */
/* Demangled: tesseract::CCStruct::kXHeightCapRatio */
extern void* _ZN9tesseract8CCStruct16kXHeightCapRatioE;

/* Symbol: _ZN10POLY_BLOCK6rotateE6FCOORD */
/* Demangled: POLY_BLOCK::rotate(FCOORD) */
int _ZN10POLY_BLOCK6rotateE6FCOORD(void);

/* Symbol: _ZN12ROW_RES_LIST9deep_copyEPKS_PFP7ROW_RESPKS2_E */
/* Demangled: ROW_RES_LIST::deep_copy(ROW_RES_LIST const*, ROW_RES* (*)(ROW_RES const*)) */
int _ZN12ROW_RES_LIST9deep_copyEPKS_PFP7ROW_RESPKS2_E(void);

/* Symbol: _ZTV29_TessMemberResultCallback_0_2ILb0EbN9tesseract11StrokeWidthEPKNS0_12ColPartitionES4_E */
/* Demangled: vtable for _TessMemberResultCallback_0_2<false, bool, tesseract::StrokeWidth, tesseract::ColPartition const*, tesseract::ColPartition const*> */
extern void* _ZTV29_TessMemberResultCallback_0_2ILb0EbN9tesseract11StrokeWidthEPKNS0_12ColPartitionES4_E;

/* Symbol: _ZN9tesseract11TessBaseAPI11GetDatapathEv */
/* Demangled: tesseract::TessBaseAPI::GetDatapath() */
int _ZN9tesseract11TessBaseAPI11GetDatapathEv(void);

/* Symbol: _ZN9tesseract10ParamUtils14ReadParamsFileEPKcNS_18SetParamConstraintEPNS_13ParamsVectorsE */
/* Demangled: tesseract::ParamUtils::ReadParamsFile(char const*, tesseract::SetParamConstraint, tesseract::ParamsVectors*) */
int _ZN9tesseract10ParamUtils14ReadParamsFileEPKcNS_18SetParamConstraintEPNS_13ParamsVectorsE(void);

/* Symbol: _ZN9tesseract9Tesseract16blob_noise_scoreEP5TBLOB */
/* Demangled: tesseract::Tesseract::blob_noise_score(TBLOB*) */
int _ZN9tesseract9Tesseract16blob_noise_scoreEP5TBLOB(void);

/* Symbol: _ZN9tesseract11StrokeWidth25TestVerticalTextDirectionEdP8TO_BLOCKP14BLOBNBOX_CLIST */
/* Demangled: tesseract::StrokeWidth::TestVerticalTextDirection(double, TO_BLOCK*, BLOBNBOX_CLIST*) */
int _ZN9tesseract11StrokeWidth25TestVerticalTextDirectionEdP8TO_BLOCKP14BLOBNBOX_CLIST(void);

/* Symbol: _ZNK5ELIST6lengthEv */
/* Demangled: ELIST::length() const */
int _ZNK5ELIST6lengthEv(void);

/* Symbol: _ZN13GenericVectorIPN9tesseract12ColPartitionEE5clearEv */
/* Demangled: GenericVector<tesseract::ColPartition*>::clear() */
int _ZN13GenericVectorIPN9tesseract12ColPartitionEE5clearEv(void);

/* Symbol: _ZN13GenericVectorI6STRINGE12init_to_sizeEiS0_ */
/* Demangled: GenericVector<STRING>::init_to_size(int, STRING) */
int _ZN13GenericVectorI6STRINGE12init_to_sizeEiS0_(void);

/* Symbol: _ZN9tesseract6BBGridINS_12ColPartitionENS_18ColPartition_CLISTENS_17ColPartition_C_ITEE10RemoveBBoxEPS1_ */
/* Demangled: tesseract::BBGrid<tesseract::ColPartition, tesseract::ColPartition_CLIST, tesseract::ColPartition_C_IT>::RemoveBBox(tesseract::ColPartition*) */
int _ZN9tesseract6BBGridINS_12ColPartitionENS_18ColPartition_CLISTENS_17ColPartition_C_ITEE10RemoveBBoxEPS1_(void);

/* Symbol: _ZNK9tesseract15IntFeatureSpace16XYToFeatureIndexEii */
/* Demangled: tesseract::IntFeatureSpace::XYToFeatureIndex(int, int) const */
int _ZNK9tesseract15IntFeatureSpace16XYToFeatureIndexEii(void);

/* Symbol: _Z9reverse32Pv */
/* Demangled: reverse32(void*) */
int _Z9reverse32Pv(void);

/* Symbol: _ZN9tesseract12ColPartition11DeleteBoxesEv */
/* Demangled: tesseract::ColPartition::DeleteBoxes() */
int _ZN9tesseract12ColPartition11DeleteBoxesEv(void);

/* Symbol: _ZN9tesseract7TabFind14TestBoxForTabsEP8BLOBNBOXid */
/* Demangled: tesseract::TabFind::TestBoxForTabs(BLOBNBOX*, int, double) */
int _ZN9tesseract7TabFind14TestBoxForTabsEP8BLOBNBOXid(void);

/* Symbol: _ZN9tesseract4Dict4LoadEPKcRK6STRING */
/* Demangled: tesseract::Dict::Load(char const*, STRING const&) */
int _ZN9tesseract4Dict4LoadEPKcRK6STRING(void);

/* Symbol: _ZN9tesseract22ColPartitionSet_zapperEP10ELIST_LINK */
/* Demangled: tesseract::ColPartitionSet_zapper(ELIST_LINK*) */
int _ZN9tesseract22ColPartitionSet_zapperEP10ELIST_LINK(void);

/* Symbol: _ZN3REJ19setrej_1Il_conflictEv */
/* Demangled: REJ::setrej_1Il_conflict() */
int _ZN3REJ19setrej_1Il_conflictEv(void);

/* Symbol: _ZN9tesseract13DocumentCache18CountNeighbourDocsEii */
/* Demangled: tesseract::DocumentCache::CountNeighbourDocs(int, int) */
int _ZN9tesseract13DocumentCache18CountNeighbourDocsEii(void);

/* Symbol: __udivmoddi4 */
/* Demangled: __udivmoddi4 */
int fn___udivmoddi4(void) __asm__("__udivmoddi4");

/* Symbol: _ZN9tesseract15TessOsdRendererC2EPKc */
/* Demangled: tesseract::TessOsdRenderer::TessOsdRenderer(char const*) */
int _ZN9tesseract15TessOsdRendererC2EPKc(void);

/* Symbol: _ZN9tesseract12ColumnFinder17TransformToBlocksEP10BLOCK_LISTP13TO_BLOCK_LIST */
/* Demangled: tesseract::ColumnFinder::TransformToBlocks(BLOCK_LIST*, TO_BLOCK_LIST*) */
int _ZN9tesseract12ColumnFinder17TransformToBlocksEP10BLOCK_LISTP13TO_BLOCK_LIST(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBTESS_H */

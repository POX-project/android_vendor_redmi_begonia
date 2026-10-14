/*
 * Reverse-Engineered Source for: libneuron_opencv_delegate.mtk.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libneuron_opencv_delegate_mtk"

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
#include "libneuron_opencv_delegate_mtk.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: vtable for CalcHistModel */
extern "C" __attribute__((visibility("default"))) void* _ZTV13CalcHistModel = NULL;

/* Demangled: Json::Value::setOffsetLimit(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value14setOffsetLimitEm(void) {
    ALOGD("_ZN4Json5Value14setOffsetLimitEm() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<Json::Value::CZString, Json::Value>, std::__1::__map_value_compare<Json::Value::CZString, std::__1::__value_type<Json::Value::CZString, Json::Value>, std::__1::less<Json::Value::CZString>, true>, std::__1::allocator<std::__1::__value_type<Json::Value::CZString, Json::Value> > >::__find_equal<Json::Value::CZString>(std::__1::__tree_const_iterator<std::__1::__value_type<Json::Value::CZString, Json::Value>, std::__1::__tree_node<std::__1::__value_type<Json::Value::CZString, Json::Value>, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, Json::Value::CZString const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIN4Json5Value8CZStringES3_EENS_19__map_value_compareIS4_S5_NS_4lessIS4_EELb1EEENS_9allocatorIS5_EEE12__find_equalIS4_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS5_PNS_11__tree_nodeIS5_SF_EElEERPNS_15__tree_end_nodeISH_EESI_RKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIN4Json5Value8CZStringES3_EENS_19__map_value_compareIS4_S5_NS_4lessIS4_EELb1EEENS_9allocatorIS5_EEE12__find_equalIS4_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS5_PNS_11__tree_nodeIS5_SF_EElEERPNS_15__tree_end_nodeISH_EESI_RKT_() called");
    return 0;
}

/* Demangled: void std::__1::vector<Json::PathArgument, std::__1::allocator<Json::PathArgument> >::__push_back_slow_path<Json::PathArgument>(Json::PathArgument&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN4Json12PathArgumentENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN4Json12PathArgumentENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_() called");
    return 0;
}

/* Demangled: ModelDrive::HandleSobel() */
extern "C" __attribute__((visibility("default"))) int _ZN10ModelDrive11HandleSobelEv(void) {
    ALOGD("_ZN10ModelDrive11HandleSobelEv() called");
    return 0;
}

/* Demangled: RGB2YUV420SPModel::RGB2YUV420SPModel() */
extern "C" __attribute__((visibility("default"))) int _ZN17RGB2YUV420SPModelC1Ev(void) {
    ALOGD("_ZN17RGB2YUV420SPModelC1Ev() called");
    return 0;
}

/* Exported Object: vtable for BilateralFilterModel */
extern "C" __attribute__((visibility("default"))) void* _ZTV20BilateralFilterModel = NULL;

/* Demangled: Json::Value::operator!() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5ValuentEv(void) {
    ALOGD("_ZNK4Json5ValuentEv() called");
    return 0;
}

/* Demangled: Json::FastWriter::enableYAMLCompatibility() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json10FastWriter23enableYAMLCompatibilityEv(void) {
    ALOGD("_ZN4Json10FastWriter23enableYAMLCompatibilityEv() called");
    return 0;
}

/* Demangled: RunCOptcFlowPyrLKAlgoInternal */
extern "C" __attribute__((visibility("default"))) int RunCOptcFlowPyrLKAlgoInternal(void) {
    ALOGD("RunCOptcFlowPyrLKAlgoInternal() called");
    return 0;
}

/* Demangled: Json::Value::clear() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value5clearEv(void) {
    ALOGD("_ZN4Json5Value5clearEv() called");
    return 0;
}

/* Exported Object: modelDrive */
extern "C" __attribute__((visibility("default"))) void* modelDrive = NULL;

/* Demangled: Json::Path::resolve(Json::Value const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json4Path7resolveERKNS_5ValueE(void) {
    ALOGD("_ZNK4Json4Path7resolveERKNS_5ValueE() called");
    return 0;
}

/* Demangled: Json::Value::hasComment(Json::CommentPlacement) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value10hasCommentENS_16CommentPlacementE(void) {
    ALOGD("_ZNK4Json5Value10hasCommentENS_16CommentPlacementE() called");
    return 0;
}

/* Demangled: Json::StyledStreamWriter::writeValue(Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json18StyledStreamWriter10writeValueERKNS_5ValueE(void) {
    ALOGD("_ZN4Json18StyledStreamWriter10writeValueERKNS_5ValueE() called");
    return 0;
}

/* Demangled: WarpPerspectiveModel::WarpPerspectiveModel() */
extern "C" __attribute__((visibility("default"))) int _ZN20WarpPerspectiveModelC2Ev(void) {
    ALOGD("_ZN20WarpPerspectiveModelC2Ev() called");
    return 0;
}

/* Demangled: MorphModel::MorphModel() */
extern "C" __attribute__((visibility("default"))) int _ZN10MorphModelC2Ev(void) {
    ALOGD("_ZN10MorphModelC2Ev() called");
    return 0;
}

/* Exported Object: vtable for YUV2RGBModel */
extern "C" __attribute__((visibility("default"))) void* _ZTV12YUV2RGBModel = NULL;

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: YUV2RGBModel::YUV2RGBModel() */
extern "C" __attribute__((visibility("default"))) int _ZN12YUV2RGBModelC1Ev(void) {
    ALOGD("_ZN12YUV2RGBModelC1Ev() called");
    return 0;
}

/* Demangled: MorphModel::initNeuronModle(NeuronDevice*, GeneralAlgoInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MorphModel15initNeuronModleEP12NeuronDeviceP15GeneralAlgoInfo(void) {
    ALOGD("_ZN10MorphModel15initNeuronModleEP12NeuronDeviceP15GeneralAlgoInfo() called");
    return 0;
}

/* Demangled: Json::Value::Value(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC2Eb(void) {
    ALOGD("_ZN4Json5ValueC2Eb() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: RunBilateralAlgoInternal */
extern "C" __attribute__((visibility("default"))) int RunBilateralAlgoInternal(void) {
    ALOGD("RunBilateralAlgoInternal() called");
    return 0;
}

/* Demangled: ModelDrive::HandleBoxFilter() */
extern "C" __attribute__((visibility("default"))) int _ZN10ModelDrive15HandleBoxFilterEv(void) {
    ALOGD("_ZN10ModelDrive15HandleBoxFilterEv() called");
    return 0;
}

/* Demangled: Json::Value::setComment(char const*, Json::CommentPlacement) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value10setCommentEPKcNS_16CommentPlacementE(void) {
    ALOGD("_ZN4Json5Value10setCommentEPKcNS_16CommentPlacementE() called");
    return 0;
}

/* Exported Object: Json::Value::null */
extern "C" __attribute__((visibility("default"))) void* _ZN4Json5Value4nullE = NULL;

/* Demangled: Json::Value::swap(Json::Value&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value4swapERS0_(void) {
    ALOGD("_ZN4Json5Value4swapERS0_() called");
    return 0;
}

/* Demangled: Json::Value::CZString::operator=(Json::Value::CZString) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value8CZStringaSES1_(void) {
    ALOGD("_ZN4Json5Value8CZStringaSES1_() called");
    return 0;
}

/* Demangled: Json::Value::~Value() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueD1Ev(void) {
    ALOGD("_ZN4Json5ValueD1Ev() called");
    return 0;
}

/* Demangled: ResizeModel::initNeuronModle(NeuronDevice*, GeneralAlgoInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN11ResizeModel15initNeuronModleEP12NeuronDeviceP15GeneralAlgoInfo(void) {
    ALOGD("_ZN11ResizeModel15initNeuronModleEP12NeuronDeviceP15GeneralAlgoInfo() called");
    return 0;
}

/* Exported Object: vtable for RGB2YUVModel */
extern "C" __attribute__((visibility("default"))) void* _ZTV12RGB2YUVModel = NULL;

/* Demangled: YUV420SP2RGBModel::handleParam(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN17YUV420SP2RGBModel11handleParamENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN17YUV420SP2RGBModel11handleParamENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Json::Value::Value(double) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC2Ed(void) {
    ALOGD("_ZN4Json5ValueC2Ed() called");
    return 0;
}

/* Demangled: CornerHarrisModel::initNeuronModle(NeuronDevice*, GeneralAlgoInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN17CornerHarrisModel15initNeuronModleEP12NeuronDeviceP15GeneralAlgoInfo(void) {
    ALOGD("_ZN17CornerHarrisModel15initNeuronModleEP12NeuronDeviceP15GeneralAlgoInfo() called");
    return 0;
}

/* Demangled: COptcFlowPyrLKModel::COptcFlowPyrLKModel() */
extern "C" __attribute__((visibility("default"))) int _ZN19COptcFlowPyrLKModelC2Ev(void) {
    ALOGD("_ZN19COptcFlowPyrLKModelC2Ev() called");
    return 0;
}

/* Demangled: Json::StyledWriter::writeWithIndent(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12StyledWriter15writeWithIndentERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN4Json12StyledWriter15writeWithIndentERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: RunIntegralAlgoInternal */
extern "C" __attribute__((visibility("default"))) int RunIntegralAlgoInternal(void) {
    ALOGD("RunIntegralAlgoInternal() called");
    return 0;
}

/* Demangled: NeuronPipeLine::run(GeneralAlgoInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN14NeuronPipeLine3runEP15GeneralAlgoInfo(void) {
    ALOGD("_ZN14NeuronPipeLine3runEP15GeneralAlgoInfo() called");
    return 0;
}

/* Demangled: Json::FastWriter::FastWriter() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json10FastWriterC1Ev(void) {
    ALOGD("_ZN4Json10FastWriterC1Ev() called");
    return 0;
}

/* Demangled: Json::ValueIteratorBase::deref() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json17ValueIteratorBase5derefEv(void) {
    ALOGD("_ZNK4Json17ValueIteratorBase5derefEv() called");
    return 0;
}

/* Demangled: ModelDrive::~ModelDrive() */
extern "C" __attribute__((visibility("default"))) int _ZN10ModelDriveD1Ev(void) {
    ALOGD("_ZN10ModelDriveD1Ev() called");
    return 0;
}

/* Demangled: YUV2RGBModel::initNeuronModle(NeuronDevice*, GeneralAlgoInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN12YUV2RGBModel15initNeuronModleEP12NeuronDeviceP15GeneralAlgoInfo(void) {
    ALOGD("_ZN12YUV2RGBModel15initNeuronModleEP12NeuronDeviceP15GeneralAlgoInfo() called");
    return 0;
}

/* Demangled: Json::PathArgument::PathArgument(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12PathArgumentC2Ej(void) {
    ALOGD("_ZN4Json12PathArgumentC2Ej() called");
    return 0;
}

/* Demangled: Json::valueToString(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json13valueToStringEb(void) {
    ALOGD("_ZN4Json13valueToStringEb() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_istringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__119basic_istringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Demangled: BoxFilterModel::handleParam(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN14BoxFilterModel11handleParamENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN14BoxFilterModel11handleParamENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: WarpAffineModel::initNeuronModle(NeuronDevice*, GeneralAlgoInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN15WarpAffineModel15initNeuronModleEP12NeuronDeviceP15GeneralAlgoInfo(void) {
    ALOGD("_ZN15WarpAffineModel15initNeuronModleEP12NeuronDeviceP15GeneralAlgoInfo() called");
    return 0;
}

/* Demangled: ModelDrive::HandleYUV420SP2RGB() */
extern "C" __attribute__((visibility("default"))) int _ZN10ModelDrive18HandleYUV420SP2RGBEv(void) {
    ALOGD("_ZN10ModelDrive18HandleYUV420SP2RGBEv() called");
    return 0;
}

/* Demangled: Json::valueToString(double) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json13valueToStringEd(void) {
    ALOGD("_ZN4Json13valueToStringEd() called");
    return 0;
}

/* Exported Object: Json::Value::maxInt */
extern "C" __attribute__((visibility("default"))) void* _ZN4Json5Value6maxIntE = NULL;

/* Demangled: Json::Value::Value(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC2Ei(void) {
    ALOGD("_ZN4Json5ValueC2Ei() called");
    return 0;
}

/* Demangled: Json::Value::CZString::isStaticString() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value8CZString14isStaticStringEv(void) {
    ALOGD("_ZNK4Json5Value8CZString14isStaticStringEv() called");
    return 0;
}

/* Demangled: Json::StyledStreamWriter::writeArrayValue(Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json18StyledStreamWriter15writeArrayValueERKNS_5ValueE(void) {
    ALOGD("_ZN4Json18StyledStreamWriter15writeArrayValueERKNS_5ValueE() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void) {
    ALOGD("_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m() called");
    return 0;
}

/* Exported Object: neuron_model_identifyInputsAndOutputs::fn */
extern "C" __attribute__((visibility("default"))) void* _ZZ37neuron_model_identifyInputsAndOutputsE2fn = NULL;

/* Demangled: ResizeModel::ResizeModel() */
extern "C" __attribute__((visibility("default"))) int _ZN11ResizeModelC2Ev(void) {
    ALOGD("_ZN11ResizeModelC2Ev() called");
    return 0;
}

/* Demangled: Json::Value::Value(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC2Ej(void) {
    ALOGD("_ZN4Json5ValueC2Ej() called");
    return 0;
}

/* Demangled: Json::StyledStreamWriter::writeWithIndent(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json18StyledStreamWriter15writeWithIndentERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN4Json18StyledStreamWriter15writeWithIndentERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: ModelDrive::HandleBilateralFilter() */
extern "C" __attribute__((visibility("default"))) int _ZN10ModelDrive21HandleBilateralFilterEv(void) {
    ALOGD("_ZN10ModelDrive21HandleBilateralFilterEv() called");
    return 0;
}

/* Demangled: Json::Value::CommentInfo::CommentInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value11CommentInfoC1Ev(void) {
    ALOGD("_ZN4Json5Value11CommentInfoC1Ev() called");
    return 0;
}

/* Demangled: Json::Value::Value(Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC1ERKS0_(void) {
    ALOGD("_ZN4Json5ValueC1ERKS0_() called");
    return 0;
}

/* Demangled: Json::StyledStreamWriter::writeCommentAfterValueOnSameLine(Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json18StyledStreamWriter32writeCommentAfterValueOnSameLineERKNS_5ValueE(void) {
    ALOGD("_ZN4Json18StyledStreamWriter32writeCommentAfterValueOnSameLineERKNS_5ValueE() called");
    return 0;
}

/* Demangled: Json::StyledStreamWriter::indent() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json18StyledStreamWriter6indentEv(void) {
    ALOGD("_ZN4Json18StyledStreamWriter6indentEv() called");
    return 0;
}

/* Exported Object: neuron_model_setOperandValue::fn */
extern "C" __attribute__((visibility("default"))) void* _ZZ28neuron_model_setOperandValueE2fn = NULL;

/* Demangled: MedianBlurModel::initNeuronModle(NeuronDevice*, GeneralAlgoInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN15MedianBlurModel15initNeuronModleEP12NeuronDeviceP15GeneralAlgoInfo(void) {
    ALOGD("_ZN15MedianBlurModel15initNeuronModleEP12NeuronDeviceP15GeneralAlgoInfo() called");
    return 0;
}

/* Demangled: Json::ValueConstIterator::ValueConstIterator(std::__1::__map_iterator<std::__1::__tree_iterator<std::__1::__value_type<Json::Value::CZString, Json::Value>, std::__1::__tree_node<std::__1::__value_type<Json::Value::CZString, Json::Value>, void*>*, long> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json18ValueConstIteratorC1ERKNSt3__114__map_iteratorINS1_15__tree_iteratorINS1_12__value_typeINS_5Value8CZStringES5_EEPNS1_11__tree_nodeIS7_PvEElEEEE(void) {
    ALOGD("_ZN4Json18ValueConstIteratorC1ERKNSt3__114__map_iteratorINS1_15__tree_iteratorINS1_12__value_typeINS_5Value8CZStringES5_EEPNS1_11__tree_nodeIS7_PvEElEEEE() called");
    return 0;
}

/* Exported Object: guard variable for acquirePerformanceLock::fn */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ22acquirePerformanceLockE2fn = NULL;

/* Exported Object: handlePerf */
extern "C" __attribute__((visibility("default"))) void* handlePerf = NULL;

/* Demangled: Json::ValueConstIterator::ValueConstIterator() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json18ValueConstIteratorC1Ev(void) {
    ALOGD("_ZN4Json18ValueConstIteratorC1Ev() called");
    return 0;
}

/* Demangled: Json::Value::Value(Json::StaticString const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC2ERKNS_12StaticStringE(void) {
    ALOGD("_ZN4Json5ValueC2ERKNS_12StaticStringE() called");
    return 0;
}

/* Demangled: Json::StyledWriter::indent() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12StyledWriter6indentEv(void) {
    ALOGD("_ZN4Json12StyledWriter6indentEv() called");
    return 0;
}

/* Demangled: Json::StyledStreamWriter::StyledStreamWriter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json18StyledStreamWriterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN4Json18StyledStreamWriterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Json::Value::asString() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value8asStringEv(void) {
    ALOGD("_ZNK4Json5Value8asStringEv() called");
    return 0;
}

/* Exported Object: neuron_execution_free::fn */
extern "C" __attribute__((visibility("default"))) void* _ZZ21neuron_execution_freeE2fn = NULL;

/* Demangled: Json::valueToString(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json13valueToStringEi(void) {
    ALOGD("_ZN4Json13valueToStringEi() called");
    return 0;
}

/* Exported Object: guard variable for releasePerformanceLock::fn */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ22releasePerformanceLockE2fn = NULL;

/* Demangled: PyrUpModel::handleParam(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN10PyrUpModel11handleParamENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN10PyrUpModel11handleParamENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<Json::Value::CZString, Json::Value>, std::__1::__map_value_compare<Json::Value::CZString, std::__1::__value_type<Json::Value::CZString, Json::Value>, std::__1::less<Json::Value::CZString>, true>, std::__1::allocator<std::__1::__value_type<Json::Value::CZString, Json::Value> > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<Json::Value::CZString, Json::Value>, std::__1::__tree_node<std::__1::__value_type<Json::Value::CZString, Json::Value>, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIN4Json5Value8CZStringES3_EENS_19__map_value_compareIS4_S5_NS_4lessIS4_EELb1EEENS_9allocatorIS5_EEE5eraseENS_21__tree_const_iteratorIS5_PNS_11__tree_nodeIS5_PvEElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIN4Json5Value8CZStringES3_EENS_19__map_value_compareIS4_S5_NS_4lessIS4_EELb1EEENS_9allocatorIS5_EEE5eraseENS_21__tree_const_iteratorIS5_PNS_11__tree_nodeIS5_PvEElEE() called");
    return 0;
}

/* Demangled: Json::FastWriter::omitEndingLineFeed() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json10FastWriter18omitEndingLineFeedEv(void) {
    ALOGD("_ZN4Json10FastWriter18omitEndingLineFeedEv() called");
    return 0;
}

/* Demangled: Json::valueToString(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json13valueToStringEj(void) {
    ALOGD("_ZN4Json13valueToStringEj() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_istringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__119basic_istringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: BilateralFilterModel::initNeuronModle(NeuronDevice*, GeneralAlgoInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN20BilateralFilterModel15initNeuronModleEP12NeuronDeviceP15GeneralAlgoInfo(void) {
    ALOGD("_ZN20BilateralFilterModel15initNeuronModleEP12NeuronDeviceP15GeneralAlgoInfo() called");
    return 0;
}

/* Demangled: ModelDrive::HandleYUV2RGB() */
extern "C" __attribute__((visibility("default"))) int _ZN10ModelDrive13HandleYUV2RGBEv(void) {
    ALOGD("_ZN10ModelDrive13HandleYUV2RGBEv() called");
    return 0;
}

/* Exported Object: guard variable for neuron_compilation_finish::fn */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ25neuron_compilation_finishE2fn = NULL;

/* Demangled: NeuronPipeLine::NeuronPipeLine() */
extern "C" __attribute__((visibility("default"))) int _ZN14NeuronPipeLineC2Ev(void) {
    ALOGD("_ZN14NeuronPipeLineC2Ev() called");
    return 0;
}

/* Demangled: PyrDownModel::PyrDownModel() */
extern "C" __attribute__((visibility("default"))) int _ZN12PyrDownModelC2Ev(void) {
    ALOGD("_ZN12PyrDownModelC2Ev() called");
    return 0;
}

/* Demangled: RGB2YUVModel::RGB2YUVModel() */
extern "C" __attribute__((visibility("default"))) int _ZN12RGB2YUVModelC2Ev(void) {
    ALOGD("_ZN12RGB2YUVModelC2Ev() called");
    return 0;
}

/* Demangled: Json::Value::asLargestInt() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value12asLargestIntEv(void) {
    ALOGD("_ZNK4Json5Value12asLargestIntEv() called");
    return 0;
}

/* Demangled: Json::Value::Value(Json::ValueType) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC1ENS_9ValueTypeE(void) {
    ALOGD("_ZN4Json5ValueC1ENS_9ValueTypeE() called");
    return 0;
}

/* Demangled: WarpAffineModel::WarpAffineModel() */
extern "C" __attribute__((visibility("default"))) int _ZN15WarpAffineModelC2Ev(void) {
    ALOGD("_ZN15WarpAffineModelC2Ev() called");
    return 0;
}

/* Demangled: Json::PathArgument::PathArgument() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12PathArgumentC2Ev(void) {
    ALOGD("_ZN4Json12PathArgumentC2Ev() called");
    return 0;
}

/* Demangled: Json::ValueIteratorBase::increment() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json17ValueIteratorBase9incrementEv(void) {
    ALOGD("_ZN4Json17ValueIteratorBase9incrementEv() called");
    return 0;
}

/* Demangled: Json::StyledWriter::write(Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12StyledWriter5writeERKNS_5ValueE(void) {
    ALOGD("_ZN4Json12StyledWriter5writeERKNS_5ValueE() called");
    return 0;
}

/* Demangled: Json::Value::CZString::~CZString() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value8CZStringD1Ev(void) {
    ALOGD("_ZN4Json5Value8CZStringD1Ev() called");
    return 0;
}

/* Demangled: Json::Value::initBasic(Json::ValueType, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value9initBasicENS_9ValueTypeEb(void) {
    ALOGD("_ZN4Json5Value9initBasicENS_9ValueTypeEb() called");
    return 0;
}

/* Exported Object: Json::Value::maxLargestInt */
extern "C" __attribute__((visibility("default"))) void* _ZN4Json5Value13maxLargestIntE = NULL;

/* Demangled: Json::StyledWriter::unindent() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12StyledWriter8unindentEv(void) {
    ALOGD("_ZN4Json12StyledWriter8unindentEv() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Exported Object: neuron_execution_setOutputFromMemory::fn */
extern "C" __attribute__((visibility("default"))) void* _ZZ36neuron_execution_setOutputFromMemoryE2fn = NULL;

/* Demangled: Json::Value::Value(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC1EPKcS2_(void) {
    ALOGD("_ZN4Json5ValueC1EPKcS2_() called");
    return 0;
}

/* Demangled: Json::Value::asUInt() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value6asUIntEv(void) {
    ALOGD("_ZNK4Json5Value6asUIntEv() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: YUV420SP2RGBModel::YUV420SP2RGBModel() */
extern "C" __attribute__((visibility("default"))) int _ZN17YUV420SP2RGBModelC2Ev(void) {
    ALOGD("_ZN17YUV420SP2RGBModelC2Ev() called");
    return 0;
}

/* Demangled: Json::StyledWriter::writeArrayValue(Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12StyledWriter15writeArrayValueERKNS_5ValueE(void) {
    ALOGD("_ZN4Json12StyledWriter15writeArrayValueERKNS_5ValueE() called");
    return 0;
}

/* Exported Object: guard variable for neuron_memory_createFromFd::fn */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ26neuron_memory_createFromFdE2fn = NULL;

/* Exported Object: neuron_execution_setInputFromMemory::fn */
extern "C" __attribute__((visibility("default"))) void* _ZZ35neuron_execution_setInputFromMemoryE2fn = NULL;

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Model* (ModelDrive::*)()>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Model* (ModelDrive::*)()>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Model* (ModelDrive::*)()> > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEM10ModelDriveFP5ModelvEEENS_19__map_value_compareIS7_SD_NS_4lessIS7_EELb1EEENS5_ISD_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISO_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEM10ModelDriveFP5ModelvEEENS_19__map_value_compareIS7_SD_NS_4lessIS7_EELb1EEENS5_ISD_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISO_EERKT_() called");
    return 0;
}

/* Demangled: Json::Value::Value(long long) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC2Ex(void) {
    ALOGD("_ZN4Json5ValueC2Ex() called");
    return 0;
}

/* Demangled: ModelDrive::MapKeyToHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN10ModelDrive14MapKeyToHandleEv(void) {
    ALOGD("_ZN10ModelDrive14MapKeyToHandleEv() called");
    return 0;
}

/* Demangled: ModelDrive::HandleWarpPerspective() */
extern "C" __attribute__((visibility("default"))) int _ZN10ModelDrive21HandleWarpPerspectiveEv(void) {
    ALOGD("_ZN10ModelDrive21HandleWarpPerspectiveEv() called");
    return 0;
}

/* Demangled: ModelDrive::ModelDrive() */
extern "C" __attribute__((visibility("default"))) int _ZN10ModelDriveC2Ev(void) {
    ALOGD("_ZN10ModelDriveC2Ev() called");
    return 0;
}

/* Demangled: SobelModel::SobelModel() */
extern "C" __attribute__((visibility("default"))) int _ZN10SobelModelC1Ev(void) {
    ALOGD("_ZN10SobelModelC1Ev() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: vtable for WarpAffineModel */
extern "C" __attribute__((visibility("default"))) void* _ZTV15WarpAffineModel = NULL;

/* Demangled: Json::ValueIterator::ValueIterator(Json::ValueIterator const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json13ValueIteratorC2ERKS0_(void) {
    ALOGD("_ZN4Json13ValueIteratorC2ERKS0_() called");
    return 0;
}

/* Demangled: Json::Value::CommentInfo::setComment(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value11CommentInfo10setCommentEPKc(void) {
    ALOGD("_ZN4Json5Value11CommentInfo10setCommentEPKc() called");
    return 0;
}

/* Demangled: Json::Value::CZString::CZString(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value8CZStringC2Ej(void) {
    ALOGD("_ZN4Json5Value8CZStringC2Ej() called");
    return 0;
}

/* Demangled: Json::Value::Value(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC2Ey(void) {
    ALOGD("_ZN4Json5ValueC2Ey() called");
    return 0;
}

/* Demangled: Json::StyledStreamWriter::isMultineArray(Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json18StyledStreamWriter14isMultineArrayERKNS_5ValueE(void) {
    ALOGD("_ZN4Json18StyledStreamWriter14isMultineArrayERKNS_5ValueE() called");
    return 0;
}

/* Demangled: RunWarpPerspectiveAlgoInternal */
extern "C" __attribute__((visibility("default"))) int RunWarpPerspectiveAlgoInternal(void) {
    ALOGD("RunWarpPerspectiveAlgoInternal() called");
    return 0;
}

/* Demangled: Json::ValueConstIterator::ValueConstIterator(std::__1::__map_iterator<std::__1::__tree_iterator<std::__1::__value_type<Json::Value::CZString, Json::Value>, std::__1::__tree_node<std::__1::__value_type<Json::Value::CZString, Json::Value>, void*>*, long> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json18ValueConstIteratorC2ERKNSt3__114__map_iteratorINS1_15__tree_iteratorINS1_12__value_typeINS_5Value8CZStringES5_EEPNS1_11__tree_nodeIS7_PvEElEEEE(void) {
    ALOGD("_ZN4Json18ValueConstIteratorC2ERKNSt3__114__map_iteratorINS1_15__tree_iteratorINS1_12__value_typeINS_5Value8CZStringES5_EEPNS1_11__tree_nodeIS7_PvEElEEEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<Json::PathArgument const*, std::__1::allocator<Json::PathArgument const*> >::__push_back_slow_path<Json::PathArgument const*>(Json::PathArgument const*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPKN4Json12PathArgumentENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPKN4Json12PathArgumentENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_() called");
    return 0;
}

/* Demangled: RunRGB2YUVAlgoInternal */
extern "C" __attribute__((visibility("default"))) int RunRGB2YUVAlgoInternal(void) {
    ALOGD("RunRGB2YUVAlgoInternal() called");
    return 0;
}

/* Demangled: BilateralFilterModel::BilateralFilterModel() */
extern "C" __attribute__((visibility("default"))) int _ZN20BilateralFilterModelC1Ev(void) {
    ALOGD("_ZN20BilateralFilterModelC1Ev() called");
    return 0;
}

/* Demangled: CannyModel::initNeuronModle(NeuronDevice*, GeneralAlgoInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN10CannyModel15initNeuronModleEP12NeuronDeviceP15GeneralAlgoInfo(void) {
    ALOGD("_ZN10CannyModel15initNeuronModleEP12NeuronDeviceP15GeneralAlgoInfo() called");
    return 0;
}

/* Demangled: CannyModel::CannyModel() */
extern "C" __attribute__((visibility("default"))) int _ZN10CannyModelC2Ev(void) {
    ALOGD("_ZN10CannyModelC2Ev() called");
    return 0;
}

/* Demangled: CornerHarrisModel::CornerHarrisModel() */
extern "C" __attribute__((visibility("default"))) int _ZN17CornerHarrisModelC2Ev(void) {
    ALOGD("_ZN17CornerHarrisModelC2Ev() called");
    return 0;
}

/* Demangled: Json::Value::isInt() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value5isIntEv(void) {
    ALOGD("_ZNK4Json5Value5isIntEv() called");
    return 0;
}

/* Demangled: Json::Value::operator==(Json::Value const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5ValueeqERKS0_(void) {
    ALOGD("_ZNK4Json5ValueeqERKS0_() called");
    return 0;
}

/* Demangled: Json::StyledStreamWriter::writeIndent() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json18StyledStreamWriter11writeIndentEv(void) {
    ALOGD("_ZN4Json18StyledStreamWriter11writeIndentEv() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE() called");
    return 0;
}

/* Demangled: ModelDrive::HandlePyrUp() */
extern "C" __attribute__((visibility("default"))) int _ZN10ModelDrive11HandlePyrUpEv(void) {
    ALOGD("_ZN10ModelDrive11HandlePyrUpEv() called");
    return 0;
}

/* Demangled: Json::Value::CommentInfo::~CommentInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value11CommentInfoD1Ev(void) {
    ALOGD("_ZN4Json5Value11CommentInfoD1Ev() called");
    return 0;
}

/* Demangled: Json::Value::resolveReference(char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value16resolveReferenceEPKcb(void) {
    ALOGD("_ZN4Json5Value16resolveReferenceEPKcb() called");
    return 0;
}

/* Demangled: Json::valueToString(long long) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json13valueToStringEx(void) {
    ALOGD("_ZN4Json13valueToStringEx() called");
    return 0;
}

/* Exported Object: vtable for Json::Writer */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4Json6WriterE = NULL;

/* Demangled: ModelDrive::HandleKeyword(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN10ModelDrive13HandleKeywordENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN10ModelDrive13HandleKeywordENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Json::valueToString(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json13valueToStringEy(void) {
    ALOGD("_ZN4Json13valueToStringEy() called");
    return 0;
}

/* Demangled: Json::Value::isNull() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value6isNullEv(void) {
    ALOGD("_ZNK4Json5Value6isNullEv() called");
    return 0;
}

/* Exported Object: guard variable for neuron_model_addOperationExtension::fn */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ34neuron_model_addOperationExtensionE2fn = NULL;

/* Exported Object: vtable for SobelModel */
extern "C" __attribute__((visibility("default"))) void* _ZTV10SobelModel = NULL;

/* Demangled: Json::Value::asFloat() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value7asFloatEv(void) {
    ALOGD("_ZNK4Json5Value7asFloatEv() called");
    return 0;
}

/* Demangled: Json::Value::operator[](char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueixEPKc(void) {
    ALOGD("_ZN4Json5ValueixEPKc() called");
    return 0;
}

/* Exported Object: vtable for IntegralModel */
extern "C" __attribute__((visibility("default"))) void* _ZTV13IntegralModel = NULL;

/* Demangled: PyrUpModel::initNeuronModle(NeuronDevice*, GeneralAlgoInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN10PyrUpModel15initNeuronModleEP12NeuronDeviceP15GeneralAlgoInfo(void) {
    ALOGD("_ZN10PyrUpModel15initNeuronModleEP12NeuronDeviceP15GeneralAlgoInfo() called");
    return 0;
}

/* Demangled: RGB2YUV420SPModel::runNeuronModle(GeneralAlgoInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN17RGB2YUV420SPModel14runNeuronModleEP15GeneralAlgoInfo(void) {
    ALOGD("_ZN17RGB2YUV420SPModel14runNeuronModleEP15GeneralAlgoInfo() called");
    return 0;
}

/* Demangled: YUV420SP2RGBModel::initNeuronModle(NeuronDevice*, GeneralAlgoInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN17YUV420SP2RGBModel15initNeuronModleEP12NeuronDeviceP15GeneralAlgoInfo(void) {
    ALOGD("_ZN17YUV420SP2RGBModel15initNeuronModleEP12NeuronDeviceP15GeneralAlgoInfo() called");
    return 0;
}

/* Demangled: Json::Value::operator<=(Json::Value const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5ValueleERKS0_(void) {
    ALOGD("_ZNK4Json5ValueleERKS0_() called");
    return 0;
}

/* Demangled: Json::StyledStreamWriter::hasCommentForValue(Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json18StyledStreamWriter18hasCommentForValueERKNS_5ValueE(void) {
    ALOGD("_ZN4Json18StyledStreamWriter18hasCommentForValueERKNS_5ValueE() called");
    return 0;
}

/* Demangled: RGB2YUV420SPModel::RGB2YUV420SPModel() */
extern "C" __attribute__((visibility("default"))) int _ZN17RGB2YUV420SPModelC2Ev(void) {
    ALOGD("_ZN17RGB2YUV420SPModelC2Ev() called");
    return 0;
}

/* Exported Object: vtable for RGB2YUV420SPModel */
extern "C" __attribute__((visibility("default"))) void* _ZTV17RGB2YUV420SPModel = NULL;

/* Demangled: Json::Value::operator!=(Json::Value const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5ValueneERKS0_(void) {
    ALOGD("_ZNK4Json5ValueneERKS0_() called");
    return 0;
}

/* Demangled: Json::StyledStreamWriter::write(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json18StyledStreamWriter5writeERNSt3__113basic_ostreamIcNS1_11char_traitsIcEEEERKNS_5ValueE(void) {
    ALOGD("_ZN4Json18StyledStreamWriter5writeERNSt3__113basic_ostreamIcNS1_11char_traitsIcEEEERKNS_5ValueE() called");
    return 0;
}

/* Exported Object: guard variable for neuron_getDeviceCount::fn */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ21neuron_getDeviceCountE2fn = NULL;

/* Demangled: RGB2YUV420SPModel::initNeuronModle(NeuronDevice*, GeneralAlgoInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN17RGB2YUV420SPModel15initNeuronModleEP12NeuronDeviceP15GeneralAlgoInfo(void) {
    ALOGD("_ZN17RGB2YUV420SPModel15initNeuronModleEP12NeuronDeviceP15GeneralAlgoInfo() called");
    return 0;
}

/* Exported Object: Json::Value::minLargestInt */
extern "C" __attribute__((visibility("default"))) void* _ZN4Json5Value13minLargestIntE = NULL;

/* Demangled: initMcvPerformanceMode() */
extern "C" __attribute__((visibility("default"))) int _Z22initMcvPerformanceModev(void) {
    ALOGD("_Z22initMcvPerformanceModev() called");
    return 0;
}

/* Demangled: RGB2YUV420SPModel::handleParam(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN17RGB2YUV420SPModel11handleParamENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN17RGB2YUV420SPModel11handleParamENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Json::Value::CZString::CZString(char const*, Json::Value::CZString::DuplicationPolicy) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value8CZStringC2EPKcNS1_17DuplicationPolicyE(void) {
    ALOGD("_ZN4Json5Value8CZStringC2EPKcNS1_17DuplicationPolicyE() called");
    return 0;
}

/* Demangled: NeuronPipeLine::dispatchModel(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN14NeuronPipeLine13dispatchModelENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN14NeuronPipeLine13dispatchModelENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: releasePerformanceLock::fn */
extern "C" __attribute__((visibility("default"))) void* _ZZ22releasePerformanceLockE2fn = NULL;

/* Demangled: YUV2RGBModel::YUV2RGBModel() */
extern "C" __attribute__((visibility("default"))) int _ZN12YUV2RGBModelC2Ev(void) {
    ALOGD("_ZN12YUV2RGBModelC2Ev() called");
    return 0;
}

/* Demangled: Json::PathArgument::PathArgument(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12PathArgumentC2ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN4Json12PathArgumentC2ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: guard variable for neuronDevice_getName::fn */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ20neuronDevice_getNameE2fn = NULL;

/* Demangled: RGB2YUVModel::handleParam(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN12RGB2YUVModel11handleParamENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN12RGB2YUVModel11handleParamENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Json::Value::removeMember(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value12removeMemberERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN4Json5Value12removeMemberERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Json::Value::operator[](int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5ValueixEi(void) {
    ALOGD("_ZNK4Json5ValueixEi() called");
    return 0;
}

/* Demangled: Json::StyledWriter::writeCommentAfterValueOnSameLine(Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12StyledWriter32writeCommentAfterValueOnSameLineERKNS_5ValueE(void) {
    ALOGD("_ZN4Json12StyledWriter32writeCommentAfterValueOnSameLineERKNS_5ValueE() called");
    return 0;
}

/* Demangled: Json::Writer::~Writer() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json6WriterD0Ev(void) {
    ALOGD("_ZN4Json6WriterD0Ev() called");
    return 0;
}

/* Demangled: MedianBlurModel::MedianBlurModel() */
extern "C" __attribute__((visibility("default"))) int _ZN15MedianBlurModelC1Ev(void) {
    ALOGD("_ZN15MedianBlurModelC1Ev() called");
    return 0;
}

/* Demangled: Json::Path::invalidPath(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json4Path11invalidPathERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEi(void) {
    ALOGD("_ZN4Json4Path11invalidPathERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEi() called");
    return 0;
}

/* Demangled: Json::Value::~Value() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueD2Ev(void) {
    ALOGD("_ZN4Json5ValueD2Ev() called");
    return 0;
}

/* Demangled: Json::ValueIteratorBase::isEqual(Json::ValueIteratorBase const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json17ValueIteratorBase7isEqualERKS0_(void) {
    ALOGD("_ZNK4Json17ValueIteratorBase7isEqualERKS0_() called");
    return 0;
}

/* Demangled: Json::Value::operator[](unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5ValueixEj(void) {
    ALOGD("_ZNK4Json5ValueixEj() called");
    return 0;
}

/* Demangled: Json::StyledWriter::normalizeEOL(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12StyledWriter12normalizeEOLERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN4Json12StyledWriter12normalizeEOLERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: RunCornerHarrisAlgoInternal */
extern "C" __attribute__((visibility("default"))) int RunCornerHarrisAlgoInternal(void) {
    ALOGD("RunCornerHarrisAlgoInternal() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_istringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__119basic_istringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: Json::StyledWriter::StyledWriter() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12StyledWriterC1Ev(void) {
    ALOGD("_ZN4Json12StyledWriterC1Ev() called");
    return 0;
}

/* Demangled: Json::Value::getMemberNames() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value14getMemberNamesEv(void) {
    ALOGD("_ZNK4Json5Value14getMemberNamesEv() called");
    return 0;
}

/* Exported Object: MCV_PERFORMANCE_MODE */
extern "C" __attribute__((visibility("default"))) void* MCV_PERFORMANCE_MODE = NULL;

/* Demangled: IntegralModel::IntegralModel() */
extern "C" __attribute__((visibility("default"))) int _ZN13IntegralModelC1Ev(void) {
    ALOGD("_ZN13IntegralModelC1Ev() called");
    return 0;
}

/* Demangled: WarpAffineModel::handleParam(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN15WarpAffineModel11handleParamENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN15WarpAffineModel11handleParamENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Json::Value::Value(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC1EPKc(void) {
    ALOGD("_ZN4Json5ValueC1EPKc() called");
    return 0;
}

/* Demangled: Json::Value::operator>(Json::Value const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5ValuegtERKS0_(void) {
    ALOGD("_ZNK4Json5ValuegtERKS0_() called");
    return 0;
}

/* Demangled: Json::FastWriter::FastWriter() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json10FastWriterC2Ev(void) {
    ALOGD("_ZN4Json10FastWriterC2Ev() called");
    return 0;
}

/* Exported Object: neuronDevice_getName::fn */
extern "C" __attribute__((visibility("default"))) void* _ZZ20neuronDevice_getNameE2fn = NULL;

/* Demangled: ModelDrive::~ModelDrive() */
extern "C" __attribute__((visibility("default"))) int _ZN10ModelDriveD2Ev(void) {
    ALOGD("_ZN10ModelDriveD2Ev() called");
    return 0;
}

/* Demangled: Json::Value::setOffsetStart(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value14setOffsetStartEm(void) {
    ALOGD("_ZN4Json5Value14setOffsetStartEm() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: Json::Value::begin() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value5beginEv(void) {
    ALOGD("_ZNK4Json5Value5beginEv() called");
    return 0;
}

/* Demangled: ModelDrive::HandleCanny() */
extern "C" __attribute__((visibility("default"))) int _ZN10ModelDrive11HandleCannyEv(void) {
    ALOGD("_ZN10ModelDrive11HandleCannyEv() called");
    return 0;
}

/* Demangled: CalcHistModel::CalcHistModel() */
extern "C" __attribute__((visibility("default"))) int _ZN13CalcHistModelC1Ev(void) {
    ALOGD("_ZN13CalcHistModelC1Ev() called");
    return 0;
}

/* Exported Object: guard variable for neuron_compilation_create::fn */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ25neuron_compilation_createE2fn = NULL;

/* Exported Object: neuron_model_free::fn */
extern "C" __attribute__((visibility("default"))) void* _ZZ17neuron_model_freeE2fn = NULL;

/* Demangled: RunCalcHistAlgoInternal */
extern "C" __attribute__((visibility("default"))) int RunCalcHistAlgoInternal(void) {
    ALOGD("RunCalcHistAlgoInternal() called");
    return 0;
}

/* Demangled: RGB2YUVModel::initNeuronModle(NeuronDevice*, GeneralAlgoInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN12RGB2YUVModel15initNeuronModleEP12NeuronDeviceP15GeneralAlgoInfo(void) {
    ALOGD("_ZN12RGB2YUVModel15initNeuronModleEP12NeuronDeviceP15GeneralAlgoInfo() called");
    return 0;
}

/* Demangled: Json::Value::Value(Json::ValueType) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC2ENS_9ValueTypeE(void) {
    ALOGD("_ZN4Json5ValueC2ENS_9ValueTypeE() called");
    return 0;
}

/* Demangled: Json::Value::get(char const*, Json::Value const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value3getEPKcRKS0_(void) {
    ALOGD("_ZNK4Json5Value3getEPKcRKS0_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: RunYUV420SP2RGBAlgoInternal */
extern "C" __attribute__((visibility("default"))) int RunYUV420SP2RGBAlgoInternal(void) {
    ALOGD("RunYUV420SP2RGBAlgoInternal() called");
    return 0;
}

/* Demangled: Json::Value::operator=(Json::Value) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueaSES0_(void) {
    ALOGD("_ZN4Json5ValueaSES0_() called");
    return 0;
}

/* Demangled: Json::Value::CommentInfo::CommentInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value11CommentInfoC2Ev(void) {
    ALOGD("_ZN4Json5Value11CommentInfoC2Ev() called");
    return 0;
}

/* Demangled: ModelDrive::HandleMedianBlur() */
extern "C" __attribute__((visibility("default"))) int _ZN10ModelDrive16HandleMedianBlurEv(void) {
    ALOGD("_ZN10ModelDrive16HandleMedianBlurEv() called");
    return 0;
}

/* Demangled: ModelDrive::HandleCornerHarris() */
extern "C" __attribute__((visibility("default"))) int _ZN10ModelDrive18HandleCornerHarrisEv(void) {
    ALOGD("_ZN10ModelDrive18HandleCornerHarrisEv() called");
    return 0;
}

/* Demangled: COptcFlowPyrLKModel::initNeuronModle(NeuronDevice*, GeneralAlgoInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN19COptcFlowPyrLKModel15initNeuronModleEP12NeuronDeviceP15GeneralAlgoInfo(void) {
    ALOGD("_ZN19COptcFlowPyrLKModel15initNeuronModleEP12NeuronDeviceP15GeneralAlgoInfo() called");
    return 0;
}

/* Demangled: Json::ValueIterator::operator=(Json::ValueIterator const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json13ValueIteratoraSERKS0_(void) {
    ALOGD("_ZN4Json13ValueIteratoraSERKS0_() called");
    return 0;
}

/* Demangled: Json::Value::isUInt() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value6isUIntEv(void) {
    ALOGD("_ZNK4Json5Value6isUIntEv() called");
    return 0;
}

/* Exported Object: guard variable for neuron_compilation_free::fn */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ23neuron_compilation_freeE2fn = NULL;

/* Exported Object: neuron_compilation_free::fn */
extern "C" __attribute__((visibility("default"))) void* _ZZ23neuron_compilation_freeE2fn = NULL;

/* Demangled: MorphModel::handleParam(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN10MorphModel11handleParamENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN10MorphModel11handleParamENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Json::ValueConstIterator::ValueConstIterator() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json18ValueConstIteratorC2Ev(void) {
    ALOGD("_ZN4Json18ValueConstIteratorC2Ev() called");
    return 0;
}

/* Demangled: Json::FastWriter::write(Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json10FastWriter5writeERKNS_5ValueE(void) {
    ALOGD("_ZN4Json10FastWriter5writeERKNS_5ValueE() called");
    return 0;
}

/* Exported Object: vtable for BoxFilterModel */
extern "C" __attribute__((visibility("default"))) void* _ZTV14BoxFilterModel = NULL;

/* Demangled: ModelDrive::HandleMorph() */
extern "C" __attribute__((visibility("default"))) int _ZN10ModelDrive11HandleMorphEv(void) {
    ALOGD("_ZN10ModelDrive11HandleMorphEv() called");
    return 0;
}

/* Demangled: Json::Value::Value(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC2EPKc(void) {
    ALOGD("_ZN4Json5ValueC2EPKc() called");
    return 0;
}

/* Demangled: Json::Value::end() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value3endEv(void) {
    ALOGD("_ZNK4Json5Value3endEv() called");
    return 0;
}

/* Demangled: Json::Value::isInt64() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value7isInt64Ev(void) {
    ALOGD("_ZNK4Json5Value7isInt64Ev() called");
    return 0;
}

/* Demangled: McvDeinitInternal */
extern "C" __attribute__((visibility("default"))) int McvDeinitInternal(void) {
    ALOGD("McvDeinitInternal() called");
    return 0;
}

/* Demangled: RunMorphAlgoInternal */
extern "C" __attribute__((visibility("default"))) int RunMorphAlgoInternal(void) {
    ALOGD("RunMorphAlgoInternal() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Model* (ModelDrive::*)()>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Model* (ModelDrive::*)()>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Model* (ModelDrive::*)()> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Model* (ModelDrive::*)()>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEM10ModelDriveFP5ModelvEEENS_19__map_value_compareIS7_SD_NS_4lessIS7_EELb1EEENS5_ISD_EEE7destroyEPNS_11__tree_nodeISD_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEM10ModelDriveFP5ModelvEEENS_19__map_value_compareIS7_SD_NS_4lessIS7_EELb1EEENS5_ISD_EEE7destroyEPNS_11__tree_nodeISD_PvEE() called");
    return 0;
}

/* Demangled: Json::ValueConstIterator::operator=(Json::ValueIteratorBase const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json18ValueConstIteratoraSERKNS_17ValueIteratorBaseE(void) {
    ALOGD("_ZN4Json18ValueConstIteratoraSERKNS_17ValueIteratorBaseE() called");
    return 0;
}

/* Demangled: Json::Value::CZString::operator<(Json::Value::CZString const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value8CZStringltERKS1_(void) {
    ALOGD("_ZNK4Json5Value8CZStringltERKS1_() called");
    return 0;
}

/* Demangled: RunPyrUpAlgoInternal */
extern "C" __attribute__((visibility("default"))) int RunPyrUpAlgoInternal(void) {
    ALOGD("RunPyrUpAlgoInternal() called");
    return 0;
}

/* Demangled: RunResizeAlgoInternal */
extern "C" __attribute__((visibility("default"))) int RunResizeAlgoInternal(void) {
    ALOGD("RunResizeAlgoInternal() called");
    return 0;
}

/* Demangled: Json::Value::asInt() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value5asIntEv(void) {
    ALOGD("_ZNK4Json5Value5asIntEv() called");
    return 0;
}

/* Exported Object: Json::Value::maxLargestUInt */
extern "C" __attribute__((visibility("default"))) void* _ZN4Json5Value14maxLargestUIntE = NULL;

/* Demangled: Json::Value::getComment(Json::CommentPlacement) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value10getCommentENS_16CommentPlacementE(void) {
    ALOGD("_ZNK4Json5Value10getCommentENS_16CommentPlacementE() called");
    return 0;
}

/* Demangled: Json::Value::isDouble() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value8isDoubleEv(void) {
    ALOGD("_ZNK4Json5Value8isDoubleEv() called");
    return 0;
}

/* Demangled: Json::Value::asCString() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value9asCStringEv(void) {
    ALOGD("_ZNK4Json5Value9asCStringEv() called");
    return 0;
}

/* Demangled: ModelDrive::HandlePyrDown() */
extern "C" __attribute__((visibility("default"))) int _ZN10ModelDrive13HandlePyrDownEv(void) {
    ALOGD("_ZN10ModelDrive13HandlePyrDownEv() called");
    return 0;
}

/* Exported Object: vtable for WarpPerspectiveModel */
extern "C" __attribute__((visibility("default"))) void* _ZTV20WarpPerspectiveModel = NULL;

/* Exported Object: vtable for YUV420SP2RGBModel */
extern "C" __attribute__((visibility("default"))) void* _ZTV17YUV420SP2RGBModel = NULL;

/* Demangled: Json::Value::setComment(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, Json::CommentPlacement) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value10setCommentERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_16CommentPlacementE(void) {
    ALOGD("_ZN4Json5Value10setCommentERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_16CommentPlacementE() called");
    return 0;
}

/* Demangled: Json::Value::operator[](int) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueixEi(void) {
    ALOGD("_ZN4Json5ValueixEi() called");
    return 0;
}

/* Demangled: Json::Value::asLargestUInt() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value13asLargestUIntEv(void) {
    ALOGD("_ZNK4Json5Value13asLargestUIntEv() called");
    return 0;
}

/* Exported Object: vtable for Json::FastWriter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4Json10FastWriterE = NULL;

/* Demangled: ModelDrive::HandleCOptcFlowPyrLK() */
extern "C" __attribute__((visibility("default"))) int _ZN10ModelDrive20HandleCOptcFlowPyrLKEv(void) {
    ALOGD("_ZN10ModelDrive20HandleCOptcFlowPyrLKEv() called");
    return 0;
}

/* Demangled: Json::Value::CZString::~CZString() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value8CZStringD2Ev(void) {
    ALOGD("_ZN4Json5Value8CZStringD2Ev() called");
    return 0;
}

/* Demangled: Json::Value::operator[](unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueixEj(void) {
    ALOGD("_ZN4Json5ValueixEj() called");
    return 0;
}

/* Demangled: Json::Path::make(Json::Value&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json4Path4makeERNS_5ValueE(void) {
    ALOGD("_ZNK4Json4Path4makeERNS_5ValueE() called");
    return 0;
}

/* Demangled: Json::Value::getOffsetLimit() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value14getOffsetLimitEv(void) {
    ALOGD("_ZNK4Json5Value14getOffsetLimitEv() called");
    return 0;
}

/* Demangled: Json::Value::size() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value4sizeEv(void) {
    ALOGD("_ZNK4Json5Value4sizeEv() called");
    return 0;
}

/* Demangled: Json::Value::isUInt64() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value8isUInt64Ev(void) {
    ALOGD("_ZNK4Json5Value8isUInt64Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_() called");
    return 0;
}

/* Demangled: Json::Value::isObject() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value8isObjectEv(void) {
    ALOGD("_ZNK4Json5Value8isObjectEv() called");
    return 0;
}

/* Demangled: bool std::__1::__lexicographical_compare<std::__1::__less<std::__1::pair<Json::Value::CZString const, Json::Value>, std::__1::pair<Json::Value::CZString const, Json::Value> >&, std::__1::__map_const_iterator<std::__1::__tree_const_iterator<std::__1::__value_type<Json::Value::CZString, Json::Value>, std::__1::__tree_node<std::__1::__value_type<Json::Value::CZString, Json::Value>, void*>*, long> >, std::__1::__map_const_iterator<std::__1::__tree_const_iterator<std::__1::__value_type<Json::Value::CZString, Json::Value>, std::__1::__tree_node<std::__1::__value_type<Json::Value::CZString, Json::Value>, void*>*, long> > >(std::__1::__map_const_iterator<std::__1::__tree_const_iterator<std::__1::__value_type<Json::Value::CZString, Json::Value>, std::__1::__tree_node<std::__1::__value_type<Json::Value::CZString, Json::Value>, void*>*, long> >, std::__1::__map_const_iterator<std::__1::__tree_const_iterator<std::__1::__value_type<Json::Value::CZString, Json::Value>, std::__1::__tree_node<std::__1::__value_type<Json::Value::CZString, Json::Value>, void*>*, long> >, std::__1::__map_const_iterator<std::__1::__tree_const_iterator<std::__1::__value_type<Json::Value::CZString, Json::Value>, std::__1::__tree_node<std::__1::__value_type<Json::Value::CZString, Json::Value>, void*>*, long> >, std::__1::__map_const_iterator<std::__1::__tree_const_iterator<std::__1::__value_type<Json::Value::CZString, Json::Value>, std::__1::__tree_node<std::__1::__value_type<Json::Value::CZString, Json::Value>, void*>*, long> >, std::__1::__less<std::__1::pair<Json::Value::CZString const, Json::Value>, std::__1::pair<Json::Value::CZString const, Json::Value> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__125__lexicographical_compareIRNS_6__lessINS_4pairIKN4Json5Value8CZStringES4_EES7_EENS_20__map_const_iteratorINS_21__tree_const_iteratorINS_12__value_typeIS5_S4_EEPNS_11__tree_nodeISD_PvEElEEEESJ_EEbT0_SK_T1_SL_T_(void) {
    ALOGD("_ZNSt3__125__lexicographical_compareIRNS_6__lessINS_4pairIKN4Json5Value8CZStringES4_EES7_EENS_20__map_const_iteratorINS_21__tree_const_iteratorINS_12__value_typeIS5_S4_EEPNS_11__tree_nodeISD_PvEElEEEESJ_EEbT0_SK_T1_SL_T_() called");
    return 0;
}

/* Demangled: std::__1::basic_istream<char, std::__1::char_traits<char> >& std::__1::getline<char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_istream<char, std::__1::char_traits<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__17getlineIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_istreamIT_T0_EES9_RNS_12basic_stringIS6_S7_T1_EES6_(void) {
    ALOGD("_ZNSt3__17getlineIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_istreamIT_T0_EES9_RNS_12basic_stringIS6_S7_T1_EES6_() called");
    return 0;
}

/* Demangled: COptcFlowPyrLKModel::handleParam(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN19COptcFlowPyrLKModel11handleParamENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN19COptcFlowPyrLKModel11handleParamENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Json::ValueIterator::ValueIterator(std::__1::__map_iterator<std::__1::__tree_iterator<std::__1::__value_type<Json::Value::CZString, Json::Value>, std::__1::__tree_node<std::__1::__value_type<Json::Value::CZString, Json::Value>, void*>*, long> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json13ValueIteratorC1ERKNSt3__114__map_iteratorINS1_15__tree_iteratorINS1_12__value_typeINS_5Value8CZStringES5_EEPNS1_11__tree_nodeIS7_PvEElEEEE(void) {
    ALOGD("_ZN4Json13ValueIteratorC1ERKNSt3__114__map_iteratorINS1_15__tree_iteratorINS1_12__value_typeINS_5Value8CZStringES5_EEPNS1_11__tree_nodeIS7_PvEElEEEE() called");
    return 0;
}

/* Demangled: RunYUV2RGBAlgoInternal */
extern "C" __attribute__((visibility("default"))) int RunYUV2RGBAlgoInternal(void) {
    ALOGD("RunYUV2RGBAlgoInternal() called");
    return 0;
}

/* Exported Object: acquirePerformanceLock::fn */
extern "C" __attribute__((visibility("default"))) void* _ZZ22acquirePerformanceLockE2fn = NULL;

/* Demangled: ResizeModel::handleParam(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN11ResizeModel11handleParamENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN11ResizeModel11handleParamENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Json::Value::CZString::CZString(char const*, Json::Value::CZString::DuplicationPolicy) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value8CZStringC1EPKcNS1_17DuplicationPolicyE(void) {
    ALOGD("_ZN4Json5Value8CZStringC1EPKcNS1_17DuplicationPolicyE() called");
    return 0;
}

/* Exported Object: vtable for GaussianBlurModel3_3 */
extern "C" __attribute__((visibility("default"))) void* _ZTV20GaussianBlurModel3_3 = NULL;

/* Demangled: Json::Path::makePath(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<Json::PathArgument const*, std::__1::allocator<Json::PathArgument const*> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json4Path8makePathERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKNS1_6vectorIPKNS_12PathArgumentENS5_ISD_EEEE(void) {
    ALOGD("_ZN4Json4Path8makePathERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKNS1_6vectorIPKNS_12PathArgumentENS5_ISD_EEEE() called");
    return 0;
}

/* Demangled: Json::Value::get(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, Json::Value const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value3getERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKS0_(void) {
    ALOGD("_ZNK4Json5Value3getERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKS0_() called");
    return 0;
}

/* Exported Object: NeuronPipeLine::pipeLine */
extern "C" __attribute__((visibility("default"))) void* _ZN14NeuronPipeLine8pipeLineE = NULL;

/* Demangled: CornerHarrisModel::handleParam(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN17CornerHarrisModel11handleParamENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN17CornerHarrisModel11handleParamENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Json::PathArgument::PathArgument(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12PathArgumentC1EPKc(void) {
    ALOGD("_ZN4Json12PathArgumentC1EPKc() called");
    return 0;
}

/* Demangled: Json::Value::CZString::CZString(Json::Value::CZString const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value8CZStringC2ERKS1_(void) {
    ALOGD("_ZN4Json5Value8CZStringC2ERKS1_() called");
    return 0;
}

/* Demangled: Json::Value::Value(Json::StaticString const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC1ERKNS_12StaticStringE(void) {
    ALOGD("_ZN4Json5ValueC1ERKNS_12StaticStringE() called");
    return 0;
}

/* Demangled: Json::StyledWriter::pushValue(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12StyledWriter9pushValueERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN4Json12StyledWriter9pushValueERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: SobelModel::SobelModel() */
extern "C" __attribute__((visibility("default"))) int _ZN10SobelModelC2Ev(void) {
    ALOGD("_ZN10SobelModelC2Ev() called");
    return 0;
}

/* Demangled: Json::ValueIterator::ValueIterator() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json13ValueIteratorC1Ev(void) {
    ALOGD("_ZN4Json13ValueIteratorC1Ev() called");
    return 0;
}

/* Demangled: Json::Value::append(Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value6appendERKS0_(void) {
    ALOGD("_ZN4Json5Value6appendERKS0_() called");
    return 0;
}

/* Demangled: Json::Value::CZString::swap(Json::Value::CZString&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value8CZString4swapERS1_(void) {
    ALOGD("_ZN4Json5Value8CZString4swapERS1_() called");
    return 0;
}

/* Exported Object: Json::Value::minInt64 */
extern "C" __attribute__((visibility("default"))) void* _ZN4Json5Value8minInt64E = NULL;

/* Demangled: Json::Path::resolve(Json::Value const&, Json::Value const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json4Path7resolveERKNS_5ValueES3_(void) {
    ALOGD("_ZNK4Json4Path7resolveERKNS_5ValueES3_() called");
    return 0;
}

/* Demangled: Json::Value::isString() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value8isStringEv(void) {
    ALOGD("_ZNK4Json5Value8isStringEv() called");
    return 0;
}

/* Exported Object: neuron_execution_compute::fn */
extern "C" __attribute__((visibility("default"))) void* _ZZ24neuron_execution_computeE2fn = NULL;

/* Demangled: PyrUpModel::PyrUpModel() */
extern "C" __attribute__((visibility("default"))) int _ZN10PyrUpModelC1Ev(void) {
    ALOGD("_ZN10PyrUpModelC1Ev() called");
    return 0;
}

/* Demangled: NeuronPipeLine::InitModel(Model*, GeneralAlgoInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN14NeuronPipeLine9InitModelEP5ModelP15GeneralAlgoInfo(void) {
    ALOGD("_ZN14NeuronPipeLine9InitModelEP5ModelP15GeneralAlgoInfo() called");
    return 0;
}

/* Demangled: YUV420SP2RGBModel::runNeuronModle(GeneralAlgoInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN17YUV420SP2RGBModel14runNeuronModleEP15GeneralAlgoInfo(void) {
    ALOGD("_ZN17YUV420SP2RGBModel14runNeuronModleEP15GeneralAlgoInfo() called");
    return 0;
}

/* Demangled: Json::Value::isValidIndex(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value12isValidIndexEj(void) {
    ALOGD("_ZNK4Json5Value12isValidIndexEj() called");
    return 0;
}

/* Demangled: RunSobelAlgoInternal */
extern "C" __attribute__((visibility("default"))) int RunSobelAlgoInternal(void) {
    ALOGD("RunSobelAlgoInternal() called");
    return 0;
}

/* Exported Object: guard variable for neuron_model_setOperandValue::fn */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ28neuron_model_setOperandValueE2fn = NULL;

/* Demangled: BilateralFilterModel::BilateralFilterModel() */
extern "C" __attribute__((visibility("default"))) int _ZN20BilateralFilterModelC2Ev(void) {
    ALOGD("_ZN20BilateralFilterModelC2Ev() called");
    return 0;
}

/* Exported Object: vtable for CornerHarrisModel */
extern "C" __attribute__((visibility("default"))) void* _ZTV17CornerHarrisModel = NULL;

/* Demangled: Json::PathArgument::PathArgument(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12PathArgumentC1ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN4Json12PathArgumentC1ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Json::Value::asInt64() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value7asInt64Ev(void) {
    ALOGD("_ZNK4Json5Value7asInt64Ev() called");
    return 0;
}

/* Demangled: GaussianBlurModel3_3::handleParam(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN20GaussianBlurModel3_311handleParamENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN20GaussianBlurModel3_311handleParamENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: NeuronPipeLine::ExecuteModel(Model*, GeneralAlgoInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN14NeuronPipeLine12ExecuteModelEP5ModelP15GeneralAlgoInfo(void) {
    ALOGD("_ZN14NeuronPipeLine12ExecuteModelEP5ModelP15GeneralAlgoInfo() called");
    return 0;
}

/* Demangled: CannyModel::handleParam(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN10CannyModel11handleParamENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN10CannyModel11handleParamENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Json::Value::CommentInfo::~CommentInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value11CommentInfoD2Ev(void) {
    ALOGD("_ZN4Json5Value11CommentInfoD2Ev() called");
    return 0;
}

/* Demangled: RunGaussianAlgoInternal */
extern "C" __attribute__((visibility("default"))) int RunGaussianAlgoInternal(void) {
    ALOGD("RunGaussianAlgoInternal() called");
    return 0;
}

/* Exported Object: guard variable for neuron_model_identifyInputsAndOutputs::fn */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ37neuron_model_identifyInputsAndOutputsE2fn = NULL;

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: Json::ValueIteratorBase::copy(Json::ValueIteratorBase const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json17ValueIteratorBase4copyERKS0_(void) {
    ALOGD("_ZN4Json17ValueIteratorBase4copyERKS0_() called");
    return 0;
}

/* Demangled: Json::Value::empty() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value5emptyEv(void) {
    ALOGD("_ZNK4Json5Value5emptyEv() called");
    return 0;
}

/* Demangled: Json::Value::operator>=(Json::Value const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5ValuegeERKS0_(void) {
    ALOGD("_ZNK4Json5ValuegeERKS0_() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<Json::Value::CZString, Json::Value>, std::__1::__tree_node<std::__1::__value_type<Json::Value::CZString, Json::Value>, void*>*, long> std::__1::__tree<std::__1::__value_type<Json::Value::CZString, Json::Value>, std::__1::__map_value_compare<Json::Value::CZString, std::__1::__value_type<Json::Value::CZString, Json::Value>, std::__1::less<Json::Value::CZString>, true>, std::__1::allocator<std::__1::__value_type<Json::Value::CZString, Json::Value> > >::__emplace_hint_unique_key_args<Json::Value::CZString, std::__1::pair<Json::Value::CZString const, Json::Value> const&>(std::__1::__tree_const_iterator<std::__1::__value_type<Json::Value::CZString, Json::Value>, std::__1::__tree_node<std::__1::__value_type<Json::Value::CZString, Json::Value>, void*>*, long>, Json::Value::CZString const&, std::__1::pair<Json::Value::CZString const, Json::Value> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIN4Json5Value8CZStringES3_EENS_19__map_value_compareIS4_S5_NS_4lessIS4_EELb1EEENS_9allocatorIS5_EEE30__emplace_hint_unique_key_argsIS4_JRKNS_4pairIKS4_S3_EEEEENS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEElEENS_21__tree_const_iteratorIS5_SN_lEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIN4Json5Value8CZStringES3_EENS_19__map_value_compareIS4_S5_NS_4lessIS4_EELb1EEENS_9allocatorIS5_EEE30__emplace_hint_unique_key_argsIS4_JRKNS_4pairIKS4_S3_EEEEENS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEElEENS_21__tree_const_iteratorIS5_SN_lEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: GaussianBlurModel3_3::GaussianBlurModel3_3() */
extern "C" __attribute__((visibility("default"))) int _ZN20GaussianBlurModel3_3C1Ev(void) {
    ALOGD("_ZN20GaussianBlurModel3_3C1Ev() called");
    return 0;
}

/* Exported Object: vtable for PyrUpModel */
extern "C" __attribute__((visibility("default"))) void* _ZTV10PyrUpModel = NULL;

/* Demangled: WarpPerspectiveModel::initNeuronModle(NeuronDevice*, GeneralAlgoInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN20WarpPerspectiveModel15initNeuronModleEP12NeuronDeviceP15GeneralAlgoInfo(void) {
    ALOGD("_ZN20WarpPerspectiveModel15initNeuronModleEP12NeuronDeviceP15GeneralAlgoInfo() called");
    return 0;
}

/* Exported Object: vtable for MorphModel */
extern "C" __attribute__((visibility("default"))) void* _ZTV10MorphModel = NULL;

/* Exported Object: guard variable for neuron_getDevice::fn */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ16neuron_getDeviceE2fn = NULL;

/* Exported Object: guard variable for neuron_execution_compute::fn */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ24neuron_execution_computeE2fn = NULL;

/* Demangled: Json::PathArgument::PathArgument(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12PathArgumentC2EPKc(void) {
    ALOGD("_ZN4Json12PathArgumentC2EPKc() called");
    return 0;
}

/* Exported Object: Json::Value::maxUInt64 */
extern "C" __attribute__((visibility("default"))) void* _ZN4Json5Value9maxUInt64E = NULL;

/* Demangled: GaussianBlurModel3_3::initNeuronModle(NeuronDevice*, GeneralAlgoInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN20GaussianBlurModel3_315initNeuronModleEP12NeuronDeviceP15GeneralAlgoInfo(void) {
    ALOGD("_ZN20GaussianBlurModel3_315initNeuronModleEP12NeuronDeviceP15GeneralAlgoInfo() called");
    return 0;
}

/* Demangled: Json::ValueIterator::ValueIterator(std::__1::__map_iterator<std::__1::__tree_iterator<std::__1::__value_type<Json::Value::CZString, Json::Value>, std::__1::__tree_node<std::__1::__value_type<Json::Value::CZString, Json::Value>, void*>*, long> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json13ValueIteratorC2ERKNSt3__114__map_iteratorINS1_15__tree_iteratorINS1_12__value_typeINS_5Value8CZStringES5_EEPNS1_11__tree_nodeIS7_PvEElEEEE(void) {
    ALOGD("_ZN4Json13ValueIteratorC2ERKNSt3__114__map_iteratorINS1_15__tree_iteratorINS1_12__value_typeINS_5Value8CZStringES5_EEPNS1_11__tree_nodeIS7_PvEElEEEE() called");
    return 0;
}

/* Demangled: Json::Value::begin() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value5beginEv(void) {
    ALOGD("_ZN4Json5Value5beginEv() called");
    return 0;
}

/* Demangled: Json::Value::CZString::operator==(Json::Value::CZString const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value8CZStringeqERKS1_(void) {
    ALOGD("_ZNK4Json5Value8CZStringeqERKS1_() called");
    return 0;
}

/* Demangled: ModelDrive::HandleRGB2YUV() */
extern "C" __attribute__((visibility("default"))) int _ZN10ModelDrive13HandleRGB2YUVEv(void) {
    ALOGD("_ZN10ModelDrive13HandleRGB2YUVEv() called");
    return 0;
}

/* Demangled: BoxFilterModel::BoxFilterModel() */
extern "C" __attribute__((visibility("default"))) int _ZN14BoxFilterModelC1Ev(void) {
    ALOGD("_ZN14BoxFilterModelC1Ev() called");
    return 0;
}

/* Exported Object: guard variable for neuron_execution_free::fn */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ21neuron_execution_freeE2fn = NULL;

/* Exported Object: neuron_compilation_finish::fn */
extern "C" __attribute__((visibility("default"))) void* _ZZ25neuron_compilation_finishE2fn = NULL;

/* Exported Object: vtable for MedianBlurModel */
extern "C" __attribute__((visibility("default"))) void* _ZTV15MedianBlurModel = NULL;

/* Demangled: CalcHistModel::handleParam(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN13CalcHistModel11handleParamENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN13CalcHistModel11handleParamENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: vtable for COptcFlowPyrLKModel */
extern "C" __attribute__((visibility("default"))) void* _ZTV19COptcFlowPyrLKModel = NULL;

/* Demangled: Json::ValueIteratorBase::ValueIteratorBase(std::__1::__map_iterator<std::__1::__tree_iterator<std::__1::__value_type<Json::Value::CZString, Json::Value>, std::__1::__tree_node<std::__1::__value_type<Json::Value::CZString, Json::Value>, void*>*, long> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json17ValueIteratorBaseC1ERKNSt3__114__map_iteratorINS1_15__tree_iteratorINS1_12__value_typeINS_5Value8CZStringES5_EEPNS1_11__tree_nodeIS7_PvEElEEEE(void) {
    ALOGD("_ZN4Json17ValueIteratorBaseC1ERKNSt3__114__map_iteratorINS1_15__tree_iteratorINS1_12__value_typeINS_5Value8CZStringES5_EEPNS1_11__tree_nodeIS7_PvEElEEEE() called");
    return 0;
}

/* Exported Object: Json::Value::minInt */
extern "C" __attribute__((visibility("default"))) void* _ZN4Json5Value6minIntE = NULL;

/* Exported Object: Json::Value::maxInt64 */
extern "C" __attribute__((visibility("default"))) void* _ZN4Json5Value8maxInt64E = NULL;

/* Demangled: Json::Value::toStyledString() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value14toStyledStringEv(void) {
    ALOGD("_ZNK4Json5Value14toStyledStringEv() called");
    return 0;
}

/* Exported Object: guard variable for neuron_execution_setOutputFromMemory::fn */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ36neuron_execution_setOutputFromMemoryE2fn = NULL;

/* Demangled: Json::ValueIterator::ValueIterator(Json::ValueIterator const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json13ValueIteratorC1ERKS0_(void) {
    ALOGD("_ZN4Json13ValueIteratorC1ERKS0_() called");
    return 0;
}

/* Exported Object: Json::kNullRef */
extern "C" __attribute__((visibility("default"))) void* _ZN4Json8kNullRefE = NULL;

/* Demangled: Json::ValueIteratorBase::computeDistance(Json::ValueIteratorBase const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json17ValueIteratorBase15computeDistanceERKS0_(void) {
    ALOGD("_ZNK4Json17ValueIteratorBase15computeDistanceERKS0_() called");
    return 0;
}

/* Demangled: Json::StyledStreamWriter::unindent() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json18StyledStreamWriter8unindentEv(void) {
    ALOGD("_ZN4Json18StyledStreamWriter8unindentEv() called");
    return 0;
}

/* Demangled: RunRGB2YUV420SPAlgoInternal */
extern "C" __attribute__((visibility("default"))) int RunRGB2YUV420SPAlgoInternal(void) {
    ALOGD("RunRGB2YUV420SPAlgoInternal() called");
    return 0;
}

/* Demangled: PyrDownModel::initNeuronModle(NeuronDevice*, GeneralAlgoInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN12PyrDownModel15initNeuronModleEP12NeuronDeviceP15GeneralAlgoInfo(void) {
    ALOGD("_ZN12PyrDownModel15initNeuronModleEP12NeuronDeviceP15GeneralAlgoInfo() called");
    return 0;
}

/* Demangled: Json::ValueIterator::ValueIterator(Json::ValueConstIterator const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json13ValueIteratorC2ERKNS_18ValueConstIteratorE(void) {
    ALOGD("_ZN4Json13ValueIteratorC2ERKNS_18ValueConstIteratorE() called");
    return 0;
}

/* Demangled: Json::Value::Value(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC2ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN4Json5ValueC2ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Json::FastWriter::writeValue(Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json10FastWriter10writeValueERKNS_5ValueE(void) {
    ALOGD("_ZN4Json10FastWriter10writeValueERKNS_5ValueE() called");
    return 0;
}

/* Demangled: Json::Writer::~Writer() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json6WriterD1Ev(void) {
    ALOGD("_ZN4Json6WriterD1Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Exported Object: neuron_model_finish::fn */
extern "C" __attribute__((visibility("default"))) void* _ZZ19neuron_model_finishE2fn = NULL;

/* Demangled: NeuronPipeLine::CloseModel(Model*) */
extern "C" __attribute__((visibility("default"))) int _ZN14NeuronPipeLine10CloseModelEP5Model(void) {
    ALOGD("_ZN14NeuronPipeLine10CloseModelEP5Model() called");
    return 0;
}

/* Demangled: MedianBlurModel::MedianBlurModel() */
extern "C" __attribute__((visibility("default"))) int _ZN15MedianBlurModelC2Ev(void) {
    ALOGD("_ZN15MedianBlurModelC2Ev() called");
    return 0;
}

/* Demangled: Json::ValueIteratorBase::decrement() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json17ValueIteratorBase9decrementEv(void) {
    ALOGD("_ZN4Json17ValueIteratorBase9decrementEv() called");
    return 0;
}

/* Demangled: Json::ValueIteratorBase::ValueIteratorBase() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json17ValueIteratorBaseC1Ev(void) {
    ALOGD("_ZN4Json17ValueIteratorBaseC1Ev() called");
    return 0;
}

/* Demangled: Json::StyledWriter::StyledWriter() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12StyledWriterC2Ev(void) {
    ALOGD("_ZN4Json12StyledWriterC2Ev() called");
    return 0;
}

/* Demangled: MedianBlurModel::handleParam(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN15MedianBlurModel11handleParamENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN15MedianBlurModel11handleParamENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: IntegralModel::IntegralModel() */
extern "C" __attribute__((visibility("default"))) int _ZN13IntegralModelC2Ev(void) {
    ALOGD("_ZN13IntegralModelC2Ev() called");
    return 0;
}

/* Demangled: Json::Value::isIntegral() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value10isIntegralEv(void) {
    ALOGD("_ZNK4Json5Value10isIntegralEv() called");
    return 0;
}

/* Demangled: Json::Value::operator[](std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5ValueixERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZNK4Json5ValueixERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void) {
    ALOGD("_ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv() called");
    return 0;
}

/* Demangled: Json::Value::end() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value3endEv(void) {
    ALOGD("_ZN4Json5Value3endEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_() called");
    return 0;
}

/* Demangled: SobelModel::runNeuronModle(GeneralAlgoInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN10SobelModel14runNeuronModleEP15GeneralAlgoInfo(void) {
    ALOGD("_ZN10SobelModel14runNeuronModleEP15GeneralAlgoInfo() called");
    return 0;
}

/* Demangled: Json::Value::compare(Json::Value const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value7compareERKS0_(void) {
    ALOGD("_ZNK4Json5Value7compareERKS0_() called");
    return 0;
}

/* Demangled: Json::Value::isNumeric() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value9isNumericEv(void) {
    ALOGD("_ZNK4Json5Value9isNumericEv() called");
    return 0;
}

/* Exported Object: guard variable for neuron_model_finish::fn */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ19neuron_model_finishE2fn = NULL;

/* Demangled: ModelDrive::HandleWarpAffine() */
extern "C" __attribute__((visibility("default"))) int _ZN10ModelDrive16HandleWarpAffineEv(void) {
    ALOGD("_ZN10ModelDrive16HandleWarpAffineEv() called");
    return 0;
}

/* Demangled: CalcHistModel::initNeuronModle(NeuronDevice*, GeneralAlgoInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN13CalcHistModel15initNeuronModleEP12NeuronDeviceP15GeneralAlgoInfo(void) {
    ALOGD("_ZN13CalcHistModel15initNeuronModleEP12NeuronDeviceP15GeneralAlgoInfo() called");
    return 0;
}

/* Demangled: CalcHistModel::CalcHistModel() */
extern "C" __attribute__((visibility("default"))) int _ZN13CalcHistModelC2Ev(void) {
    ALOGD("_ZN13CalcHistModelC2Ev() called");
    return 0;
}

/* Demangled: SobelModel::initNeuronModle(NeuronDevice*, GeneralAlgoInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN10SobelModel15initNeuronModleEP12NeuronDeviceP15GeneralAlgoInfo(void) {
    ALOGD("_ZN10SobelModel15initNeuronModleEP12NeuronDeviceP15GeneralAlgoInfo() called");
    return 0;
}

/* Demangled: Json::Value::Value(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC2EPKcS2_(void) {
    ALOGD("_ZN4Json5ValueC2EPKcS2_() called");
    return 0;
}

/* Demangled: Json::Value::isArray() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value7isArrayEv(void) {
    ALOGD("_ZNK4Json5Value7isArrayEv() called");
    return 0;
}

/* Exported Object: guard variable for neuron_execution_create::fn */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ23neuron_execution_createE2fn = NULL;

/* Exported Object: neuron_execution_create::fn */
extern "C" __attribute__((visibility("default"))) void* _ZZ23neuron_execution_createE2fn = NULL;

/* Demangled: MorphModel::MorphModel() */
extern "C" __attribute__((visibility("default"))) int _ZN10MorphModelC1Ev(void) {
    ALOGD("_ZN10MorphModelC1Ev() called");
    return 0;
}

/* Demangled: WarpPerspectiveModel::WarpPerspectiveModel() */
extern "C" __attribute__((visibility("default"))) int _ZN20WarpPerspectiveModelC1Ev(void) {
    ALOGD("_ZN20WarpPerspectiveModelC1Ev() called");
    return 0;
}

/* Demangled: IntegralModel::initNeuronModle(NeuronDevice*, GeneralAlgoInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN13IntegralModel15initNeuronModleEP12NeuronDeviceP15GeneralAlgoInfo(void) {
    ALOGD("_ZN13IntegralModel15initNeuronModleEP12NeuronDeviceP15GeneralAlgoInfo() called");
    return 0;
}

/* Demangled: Json::Value::operator[](Json::StaticString const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueixERKNS_12StaticStringE(void) {
    ALOGD("_ZN4Json5ValueixERKNS_12StaticStringE() called");
    return 0;
}

/* Demangled: Json::Value::type() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value4typeEv(void) {
    ALOGD("_ZNK4Json5Value4typeEv() called");
    return 0;
}

/* Demangled: Json::valueToQuotedString(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json19valueToQuotedStringEPKc(void) {
    ALOGD("_ZN4Json19valueToQuotedStringEPKc() called");
    return 0;
}

/* Exported Object: TABLE_DRIVE_TAG */
extern "C" __attribute__((visibility("default"))) void* TABLE_DRIVE_TAG = NULL;

/* Demangled: Json::Value::Value(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC1Eb(void) {
    ALOGD("_ZN4Json5ValueC1Eb() called");
    return 0;
}

/* Demangled: Json::Value::isConvertibleTo(Json::ValueType) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value15isConvertibleToENS_9ValueTypeE(void) {
    ALOGD("_ZNK4Json5Value15isConvertibleToENS_9ValueTypeE() called");
    return 0;
}

/* Demangled: Json::StyledWriter::writeValue(Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12StyledWriter10writeValueERKNS_5ValueE(void) {
    ALOGD("_ZN4Json12StyledWriter10writeValueERKNS_5ValueE() called");
    return 0;
}

/* Demangled: Json::StyledWriter::hasCommentForValue(Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12StyledWriter18hasCommentForValueERKNS_5ValueE(void) {
    ALOGD("_ZN4Json12StyledWriter18hasCommentForValueERKNS_5ValueE() called");
    return 0;
}

/* Demangled: Json::Value::Value(double) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC1Ed(void) {
    ALOGD("_ZN4Json5ValueC1Ed() called");
    return 0;
}

/* Demangled: NeuronPipeLine::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN14NeuronPipeLine14createInstanceEv(void) {
    ALOGD("_ZN14NeuronPipeLine14createInstanceEv() called");
    return 0;
}

/* Demangled: COptcFlowPyrLKModel::COptcFlowPyrLKModel() */
extern "C" __attribute__((visibility("default"))) int _ZN19COptcFlowPyrLKModelC1Ev(void) {
    ALOGD("_ZN19COptcFlowPyrLKModelC1Ev() called");
    return 0;
}

/* Demangled: Json::ValueIteratorBase::ValueIteratorBase(std::__1::__map_iterator<std::__1::__tree_iterator<std::__1::__value_type<Json::Value::CZString, Json::Value>, std::__1::__tree_node<std::__1::__value_type<Json::Value::CZString, Json::Value>, void*>*, long> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json17ValueIteratorBaseC2ERKNSt3__114__map_iteratorINS1_15__tree_iteratorINS1_12__value_typeINS_5Value8CZStringES5_EEPNS1_11__tree_nodeIS7_PvEElEEEE(void) {
    ALOGD("_ZN4Json17ValueIteratorBaseC2ERKNSt3__114__map_iteratorINS1_15__tree_iteratorINS1_12__value_typeINS_5Value8CZStringES5_EEPNS1_11__tree_nodeIS7_PvEElEEEE() called");
    return 0;
}

/* Demangled: Json::StyledWriter::writeCommentBeforeValue(Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12StyledWriter23writeCommentBeforeValueERKNS_5ValueE(void) {
    ALOGD("_ZN4Json12StyledWriter23writeCommentBeforeValueERKNS_5ValueE() called");
    return 0;
}

/* Demangled: Json::ValueIterator::ValueIterator(Json::ValueConstIterator const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json13ValueIteratorC1ERKNS_18ValueConstIteratorE(void) {
    ALOGD("_ZN4Json13ValueIteratorC1ERKNS_18ValueConstIteratorE() called");
    return 0;
}

/* Demangled: Json::Value::CZString::CZString(Json::Value::CZString const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value8CZStringC1ERKS1_(void) {
    ALOGD("_ZN4Json5Value8CZStringC1ERKS1_() called");
    return 0;
}

/* Demangled: Json::Value::CZString::index() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value8CZString5indexEv(void) {
    ALOGD("_ZNK4Json5Value8CZString5indexEv() called");
    return 0;
}

/* Demangled: Json::StyledStreamWriter::pushValue(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json18StyledStreamWriter9pushValueERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN4Json18StyledStreamWriter9pushValueERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: guard variable for neuron_setBoostHint::fn */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ19neuron_setBoostHintE2fn = NULL;

/* Demangled: Json::PathArgument::PathArgument(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12PathArgumentC1Ej(void) {
    ALOGD("_ZN4Json12PathArgumentC1Ej() called");
    return 0;
}

/* Demangled: Json::Value::operator[](std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueixERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN4Json5ValueixERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: BilateralFilterModel::handleParam(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN20BilateralFilterModel11handleParamENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN20BilateralFilterModel11handleParamENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Json::Value::asBool() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value6asBoolEv(void) {
    ALOGD("_ZNK4Json5Value6asBoolEv() called");
    return 0;
}

/* Exported Object: vtable for Json::StyledWriter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4Json12StyledWriterE = NULL;

/* Demangled: RunPyrDownAlgoInternal */
extern "C" __attribute__((visibility("default"))) int RunPyrDownAlgoInternal(void) {
    ALOGD("RunPyrDownAlgoInternal() called");
    return 0;
}

/* Demangled: Json::Value::Value(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC1Ei(void) {
    ALOGD("_ZN4Json5ValueC1Ei() called");
    return 0;
}

/* Exported Object: vtable for Model */
extern "C" __attribute__((visibility("default"))) void* _ZTV5Model = NULL;

/* Demangled: Json::Path::addPathInArg(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<Json::PathArgument const*, std::__1::allocator<Json::PathArgument const*> > const&, std::__1::__wrap_iter<Json::PathArgument const* const*>&, Json::PathArgument::Kind) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json4Path12addPathInArgERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKNS1_6vectorIPKNS_12PathArgumentENS5_ISD_EEEERNS1_11__wrap_iterIPKSD_EENSB_4KindE(void) {
    ALOGD("_ZN4Json4Path12addPathInArgERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKNS1_6vectorIPKNS_12PathArgumentENS5_ISD_EEEERNS1_11__wrap_iterIPKSD_EENSB_4KindE() called");
    return 0;
}

/* Demangled: Json::Value::removeMember(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value12removeMemberEPKc(void) {
    ALOGD("_ZN4Json5Value12removeMemberEPKc() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::reserve(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE7reserveEm(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE7reserveEm() called");
    return 0;
}

/* Demangled: Json::FastWriter::dropNullPlaceholders() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json10FastWriter20dropNullPlaceholdersEv(void) {
    ALOGD("_ZN4Json10FastWriter20dropNullPlaceholdersEv() called");
    return 0;
}

/* Demangled: Json::Value::Value(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC1Ej(void) {
    ALOGD("_ZN4Json5ValueC1Ej() called");
    return 0;
}

/* Demangled: ModelDrive::HandleIntegral() */
extern "C" __attribute__((visibility("default"))) int _ZN10ModelDrive14HandleIntegralEv(void) {
    ALOGD("_ZN10ModelDrive14HandleIntegralEv() called");
    return 0;
}

/* Demangled: ResizeModel::ResizeModel() */
extern "C" __attribute__((visibility("default"))) int _ZN11ResizeModelC1Ev(void) {
    ALOGD("_ZN11ResizeModelC1Ev() called");
    return 0;
}

/* Demangled: RGB2YUVModel::runNeuronModle(GeneralAlgoInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN12RGB2YUVModel14runNeuronModleEP15GeneralAlgoInfo(void) {
    ALOGD("_ZN12RGB2YUVModel14runNeuronModleEP15GeneralAlgoInfo() called");
    return 0;
}

/* Demangled: Json::StyledWriter::writeIndent() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12StyledWriter11writeIndentEv(void) {
    ALOGD("_ZN4Json12StyledWriter11writeIndentEv() called");
    return 0;
}

/* Exported Object: neuron_memory_createFromFd::fn */
extern "C" __attribute__((visibility("default"))) void* _ZZ26neuron_memory_createFromFdE2fn = NULL;

/* Demangled: PyrDownModel::handleParam(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN12PyrDownModel11handleParamENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN12PyrDownModel11handleParamENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Json::Value::resize(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value6resizeEj(void) {
    ALOGD("_ZN4Json5Value6resizeEj() called");
    return 0;
}

/* Demangled: IntegralModel::handleParam(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN13IntegralModel11handleParamENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN13IntegralModel11handleParamENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Json::Value::isBool() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value6isBoolEv(void) {
    ALOGD("_ZNK4Json5Value6isBoolEv() called");
    return 0;
}

/* Demangled: Json::StyledStreamWriter::normalizeEOL(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json18StyledStreamWriter12normalizeEOLERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN4Json18StyledStreamWriter12normalizeEOLERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: RunBoxFilterAlgoInternal */
extern "C" __attribute__((visibility("default"))) int RunBoxFilterAlgoInternal(void) {
    ALOGD("RunBoxFilterAlgoInternal() called");
    return 0;
}

/* Exported Object: neuron_getDeviceCount::fn */
extern "C" __attribute__((visibility("default"))) void* _ZZ21neuron_getDeviceCountE2fn = NULL;

/* Demangled: Json::Path::Path(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, Json::PathArgument const&, Json::PathArgument const&, Json::PathArgument const&, Json::PathArgument const&, Json::PathArgument const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json4PathC2ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKNS_12PathArgumentESC_SC_SC_SC_(void) {
    ALOGD("_ZN4Json4PathC2ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKNS_12PathArgumentESC_SC_SC_SC_() called");
    return 0;
}

/* Demangled: Json::StyledStreamWriter::writeCommentBeforeValue(Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json18StyledStreamWriter23writeCommentBeforeValueERKNS_5ValueE(void) {
    ALOGD("_ZN4Json18StyledStreamWriter23writeCommentBeforeValueERKNS_5ValueE() called");
    return 0;
}

/* Demangled: RunWarpAffineAlgoInternal */
extern "C" __attribute__((visibility("default"))) int RunWarpAffineAlgoInternal(void) {
    ALOGD("RunWarpAffineAlgoInternal() called");
    return 0;
}

/* Exported Object: targetDevice */
extern "C" __attribute__((visibility("default"))) void* targetDevice = NULL;

/* Demangled: ModelDrive::HandleResize() */
extern "C" __attribute__((visibility("default"))) int _ZN10ModelDrive12HandleResizeEv(void) {
    ALOGD("_ZN10ModelDrive12HandleResizeEv() called");
    return 0;
}

/* Demangled: ModelDrive::HandleCalcHist() */
extern "C" __attribute__((visibility("default"))) int _ZN10ModelDrive14HandleCalcHistEv(void) {
    ALOGD("_ZN10ModelDrive14HandleCalcHistEv() called");
    return 0;
}

/* Exported Object: guard variable for neuron_model_free::fn */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ17neuron_model_freeE2fn = NULL;

/* Demangled: NeuronPipeLine::CreateModel(Model*) */
extern "C" __attribute__((visibility("default"))) int _ZN14NeuronPipeLine11CreateModelEP5Model(void) {
    ALOGD("_ZN14NeuronPipeLine11CreateModelEP5Model() called");
    return 0;
}

/* Exported Object: vtable for PyrDownModel */
extern "C" __attribute__((visibility("default"))) void* _ZTV12PyrDownModel = NULL;

/* Exported Object: device */
extern "C" __attribute__((visibility("default"))) void* device = NULL;

/* Demangled: Json::ValueIterator::ValueIterator() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json13ValueIteratorC2Ev(void) {
    ALOGD("_ZN4Json13ValueIteratorC2Ev() called");
    return 0;
}

/* Demangled: Json::ValueIteratorBase::index() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json17ValueIteratorBase5indexEv(void) {
    ALOGD("_ZNK4Json17ValueIteratorBase5indexEv() called");
    return 0;
}

/* Demangled: ModelDrive::HandleGaussian3x3u8() */
extern "C" __attribute__((visibility("default"))) int _ZN10ModelDrive19HandleGaussian3x3u8Ev(void) {
    ALOGD("_ZN10ModelDrive19HandleGaussian3x3u8Ev() called");
    return 0;
}

/* Demangled: PyrUpModel::PyrUpModel() */
extern "C" __attribute__((visibility("default"))) int _ZN10PyrUpModelC2Ev(void) {
    ALOGD("_ZN10PyrUpModelC2Ev() called");
    return 0;
}

/* Demangled: YUV2RGBModel::handleParam(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN12YUV2RGBModel11handleParamENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN12YUV2RGBModel11handleParamENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: RunCannyAlgoInternal */
extern "C" __attribute__((visibility("default"))) int RunCannyAlgoInternal(void) {
    ALOGD("RunCannyAlgoInternal() called");
    return 0;
}

/* Exported Object: guard variable for neuron_model_addOperand::fn */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ23neuron_model_addOperandE2fn = NULL;

/* Exported Object: neuron_model_addOperand::fn */
extern "C" __attribute__((visibility("default"))) void* _ZZ23neuron_model_addOperandE2fn = NULL;

/* Demangled: PyrDownModel::PyrDownModel() */
extern "C" __attribute__((visibility("default"))) int _ZN12PyrDownModelC1Ev(void) {
    ALOGD("_ZN12PyrDownModelC1Ev() called");
    return 0;
}

/* Demangled: RGB2YUVModel::RGB2YUVModel() */
extern "C" __attribute__((visibility("default"))) int _ZN12RGB2YUVModelC1Ev(void) {
    ALOGD("_ZN12RGB2YUVModelC1Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Model* (ModelDrive::*)()>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Model* (ModelDrive::*)()>, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Model* (ModelDrive::*)()>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Model* (ModelDrive::*)()>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, Model* (ModelDrive::*)()> > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEM10ModelDriveFP5ModelvEEENS_19__map_value_compareIS7_SD_NS_4lessIS7_EELb1EEENS5_ISD_EEE4findIS7_EENS_15__tree_iteratorISD_PNS_11__tree_nodeISD_PvEElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEM10ModelDriveFP5ModelvEEENS_19__map_value_compareIS7_SD_NS_4lessIS7_EELb1EEENS5_ISD_EEE4findIS7_EENS_15__tree_iteratorISD_PNS_11__tree_nodeISD_PvEElEERKT_() called");
    return 0;
}

/* Demangled: NeuronPipeLine::NeuronPipeLine() */
extern "C" __attribute__((visibility("default"))) int _ZN14NeuronPipeLineC1Ev(void) {
    ALOGD("_ZN14NeuronPipeLineC1Ev() called");
    return 0;
}

/* Demangled: McvInitInternal */
extern "C" __attribute__((visibility("default"))) int McvInitInternal(void) {
    ALOGD("McvInitInternal() called");
    return 0;
}

/* Demangled: WarpAffineModel::WarpAffineModel() */
extern "C" __attribute__((visibility("default"))) int _ZN15WarpAffineModelC1Ev(void) {
    ALOGD("_ZN15WarpAffineModelC1Ev() called");
    return 0;
}

/* Exported Object: neuron_compilation_create::fn */
extern "C" __attribute__((visibility("default"))) void* _ZZ25neuron_compilation_createE2fn = NULL;

/* Demangled: Json::PathArgument::PathArgument() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12PathArgumentC1Ev(void) {
    ALOGD("_ZN4Json12PathArgumentC1Ev() called");
    return 0;
}

/* Demangled: Json::Value::get(unsigned int, Json::Value const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value3getEjRKS0_(void) {
    ALOGD("_ZNK4Json5Value3getEjRKS0_() called");
    return 0;
}

/* Demangled: Json::Value::CZString::c_str() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value8CZString5c_strEv(void) {
    ALOGD("_ZNK4Json5Value8CZString5c_strEv() called");
    return 0;
}

/* Demangled: Json::Value::operator[](char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5ValueixEPKc(void) {
    ALOGD("_ZNK4Json5ValueixEPKc() called");
    return 0;
}

/* Demangled: Json::Value::Value(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC1ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN4Json5ValueC1ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Json::Value::Value(Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC2ERKS0_(void) {
    ALOGD("_ZN4Json5ValueC2ERKS0_() called");
    return 0;
}

/* Demangled: Json::Value::getOffsetStart() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value14getOffsetStartEv(void) {
    ALOGD("_ZNK4Json5Value14getOffsetStartEv() called");
    return 0;
}

/* Demangled: Json::Value::asDouble() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value8asDoubleEv(void) {
    ALOGD("_ZNK4Json5Value8asDoubleEv() called");
    return 0;
}

/* Demangled: Json::StyledWriter::isMultineArray(Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json12StyledWriter14isMultineArrayERKNS_5ValueE(void) {
    ALOGD("_ZN4Json12StyledWriter14isMultineArrayERKNS_5ValueE() called");
    return 0;
}

/* Demangled: ModelDrive::HandleRGB2YUV420SP() */
extern "C" __attribute__((visibility("default"))) int _ZN10ModelDrive18HandleRGB2YUV420SPEv(void) {
    ALOGD("_ZN10ModelDrive18HandleRGB2YUV420SPEv() called");
    return 0;
}

/* Demangled: NeuronPipeLine::CompileModel(Model*) */
extern "C" __attribute__((visibility("default"))) int _ZN14NeuronPipeLine12CompileModelEP5Model(void) {
    ALOGD("_ZN14NeuronPipeLine12CompileModelEP5Model() called");
    return 0;
}

/* Demangled: BoxFilterModel::initNeuronModle(NeuronDevice*, GeneralAlgoInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN14BoxFilterModel15initNeuronModleEP12NeuronDeviceP15GeneralAlgoInfo(void) {
    ALOGD("_ZN14BoxFilterModel15initNeuronModleEP12NeuronDeviceP15GeneralAlgoInfo() called");
    return 0;
}

/* Demangled: YUV2RGBModel::runNeuronModle(GeneralAlgoInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN12YUV2RGBModel14runNeuronModleEP15GeneralAlgoInfo(void) {
    ALOGD("_ZN12YUV2RGBModel14runNeuronModleEP15GeneralAlgoInfo() called");
    return 0;
}

/* Demangled: Json::Value::asUInt64() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value8asUInt64Ev(void) {
    ALOGD("_ZNK4Json5Value8asUInt64Ev() called");
    return 0;
}

/* Demangled: Json::Value::isMember(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value8isMemberEPKc(void) {
    ALOGD("_ZNK4Json5Value8isMemberEPKc() called");
    return 0;
}

/* Demangled: Json::Value::operator<(Json::Value const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5ValueltERKS0_(void) {
    ALOGD("_ZNK4Json5ValueltERKS0_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<Json::Value::CZString, Json::Value>, std::__1::__map_value_compare<Json::Value::CZString, std::__1::__value_type<Json::Value::CZString, Json::Value>, std::__1::less<Json::Value::CZString>, true>, std::__1::allocator<std::__1::__value_type<Json::Value::CZString, Json::Value> > >::destroy(std::__1::__tree_node<std::__1::__value_type<Json::Value::CZString, Json::Value>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIN4Json5Value8CZStringES3_EENS_19__map_value_compareIS4_S5_NS_4lessIS4_EELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIN4Json5Value8CZStringES3_EENS_19__map_value_compareIS4_S5_NS_4lessIS4_EELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE() called");
    return 0;
}

/* Demangled: GaussianBlurModel3_3::GaussianBlurModel3_3() */
extern "C" __attribute__((visibility("default"))) int _ZN20GaussianBlurModel3_3C2Ev(void) {
    ALOGD("_ZN20GaussianBlurModel3_3C2Ev() called");
    return 0;
}

/* Demangled: YUV420SP2RGBModel::YUV420SP2RGBModel() */
extern "C" __attribute__((visibility("default"))) int _ZN17YUV420SP2RGBModelC1Ev(void) {
    ALOGD("_ZN17YUV420SP2RGBModelC1Ev() called");
    return 0;
}

/* Exported Object: neuron_model_create::fn */
extern "C" __attribute__((visibility("default"))) void* _ZZ19neuron_model_createE2fn = NULL;

/* Exported Object: neuron_setBoostHint::fn */
extern "C" __attribute__((visibility("default"))) void* _ZZ19neuron_setBoostHintE2fn = NULL;

/* Demangled: SobelModel::handleParam(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN10SobelModel11handleParamENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN10SobelModel11handleParamENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Json::Value::Value(long long) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC1Ex(void) {
    ALOGD("_ZN4Json5ValueC1Ex() called");
    return 0;
}

/* Demangled: ModelDrive::ModelDrive() */
extern "C" __attribute__((visibility("default"))) int _ZN10ModelDriveC1Ev(void) {
    ALOGD("_ZN10ModelDriveC1Ev() called");
    return 0;
}

/* Exported Object: Json::Value::maxUInt */
extern "C" __attribute__((visibility("default"))) void* _ZN4Json5Value7maxUIntE = NULL;

/* Demangled: Json::Value::CZString::CZString(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5Value8CZStringC1Ej(void) {
    ALOGD("_ZN4Json5Value8CZStringC1Ej() called");
    return 0;
}

/* Demangled: Json::Value::Value(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json5ValueC1Ey(void) {
    ALOGD("_ZN4Json5ValueC1Ey() called");
    return 0;
}

/* Exported Object: guard variable for neuron_execution_setInputFromMemory::fn */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ35neuron_execution_setInputFromMemoryE2fn = NULL;

/* Demangled: CannyModel::CannyModel() */
extern "C" __attribute__((visibility("default"))) int _ZN10CannyModelC1Ev(void) {
    ALOGD("_ZN10CannyModelC1Ev() called");
    return 0;
}

/* Demangled: CornerHarrisModel::CornerHarrisModel() */
extern "C" __attribute__((visibility("default"))) int _ZN17CornerHarrisModelC1Ev(void) {
    ALOGD("_ZN17CornerHarrisModelC1Ev() called");
    return 0;
}

/* Demangled: BoxFilterModel::BoxFilterModel() */
extern "C" __attribute__((visibility("default"))) int _ZN14BoxFilterModelC2Ev(void) {
    ALOGD("_ZN14BoxFilterModelC2Ev() called");
    return 0;
}

/* Demangled: WarpPerspectiveModel::handleParam(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN20WarpPerspectiveModel11handleParamENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN20WarpPerspectiveModel11handleParamENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<Json::PathArgument, std::__1::allocator<Json::PathArgument> >::__push_back_slow_path<Json::PathArgument const&>(Json::PathArgument const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN4Json12PathArgumentENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN4Json12PathArgumentENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_() called");
    return 0;
}

/* Demangled: RunMedianBlurAlgoInternal */
extern "C" __attribute__((visibility("default"))) int RunMedianBlurAlgoInternal(void) {
    ALOGD("RunMedianBlurAlgoInternal() called");
    return 0;
}

/* Exported Object: guard variable for neuron_model_create::fn */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ19neuron_model_createE2fn = NULL;

/* Demangled: Json::ValueIteratorBase::memberName() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json17ValueIteratorBase10memberNameEv(void) {
    ALOGD("_ZNK4Json17ValueIteratorBase10memberNameEv() called");
    return 0;
}

/* Demangled: Json::ValueIteratorBase::key() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json17ValueIteratorBase3keyEv(void) {
    ALOGD("_ZNK4Json17ValueIteratorBase3keyEv() called");
    return 0;
}

/* Exported Object: neuron_getDevice::fn */
extern "C" __attribute__((visibility("default"))) void* _ZZ16neuron_getDeviceE2fn = NULL;

/* Exported Object: neuron_model_addOperationExtension::fn */
extern "C" __attribute__((visibility("default"))) void* _ZZ34neuron_model_addOperationExtensionE2fn = NULL;

/* Demangled: Json::StyledStreamWriter::StyledStreamWriter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json18StyledStreamWriterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN4Json18StyledStreamWriterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Json::Writer::~Writer() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json6WriterD2Ev(void) {
    ALOGD("_ZN4Json6WriterD2Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi() called");
    return 0;
}

/* Exported Object: vtable for CannyModel */
extern "C" __attribute__((visibility("default"))) void* _ZTV10CannyModel = NULL;

/* Demangled: Json::Path::Path(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, Json::PathArgument const&, Json::PathArgument const&, Json::PathArgument const&, Json::PathArgument const&, Json::PathArgument const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4Json4PathC1ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKNS_12PathArgumentESC_SC_SC_SC_(void) {
    ALOGD("_ZN4Json4PathC1ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKNS_12PathArgumentESC_SC_SC_SC_() called");
    return 0;
}

/* Demangled: Json::operator<<(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, Json::Value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4JsonlsERNSt3__113basic_ostreamIcNS0_11char_traitsIcEEEERKNS_5ValueE(void) {
    ALOGD("_ZN4JsonlsERNSt3__113basic_ostreamIcNS0_11char_traitsIcEEEERKNS_5ValueE() called");
    return 0;
}

/* Demangled: Json::Value::isMember(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK4Json5Value8isMemberERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZNK4Json5Value8isMemberERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: vtable for ResizeModel */
extern "C" __attribute__((visibility("default"))) void* _ZTV11ResizeModel = NULL;

/* Demangled: Json::ValueIteratorBase::ValueIteratorBase() */
extern "C" __attribute__((visibility("default"))) int _ZN4Json17ValueIteratorBaseC2Ev(void) {
    ALOGD("_ZN4Json17ValueIteratorBaseC2Ev() called");
    return 0;
}

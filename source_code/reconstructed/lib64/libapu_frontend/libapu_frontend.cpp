/*
 * Reverse-Engineered Source for: libapu-frontend.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libapu_frontend"

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
#include "libapu_frontend.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: neuron::nir::QuantParams::HasScalePerChannel() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6neuron3nir11QuantParams18HasScalePerChannelEv(void) {
    ALOGD("_ZNK6neuron3nir11QuantParams18HasScalePerChannelEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::~basic_ostream() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEED0Ev(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEED0Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: neuron::nir::ElementWiseBase::ElementWiseBase(neuron::nir::Layer::Kind, neuron::nir::Shape const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir15ElementWiseBaseC2ENS0_5Layer4KindERKNS0_5ShapeE(void) {
    ALOGD("_ZN6neuron3nir15ElementWiseBaseC2ENS0_5Layer4KindERKNS0_5ShapeE() called");
    return 0;
}

/* Demangled: neuron::NullStream::NullBuffer::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron10NullStream10NullBuffer8overflowEi(void) {
    ALOGD("_ZN6neuron10NullStream10NullBuffer8overflowEi() called");
    return 0;
}

/* Demangled: ApuFrontend::Impl::MapTransposeConv2D(apu_operator const*, apu_tensor const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11ApuFrontend4Impl18MapTransposeConv2DEPK12apu_operatorPK10apu_tensor(void) {
    ALOGD("_ZN11ApuFrontend4Impl18MapTransposeConv2DEPK12apu_operatorPK10apu_tensor() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::flush() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE5flushEv(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE5flushEv() called");
    return 0;
}

/* Demangled: neuron::iplist<neuron::nir::Layer, neuron::nir::LayerListTraits>::push_back(neuron::nir::Layer*) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron6iplistINS_3nir5LayerENS1_15LayerListTraitsEE9push_backEPS2_(void) {
    ALOGD("_ZN6neuron6iplistINS_3nir5LayerENS1_15LayerListTraitsEE9push_backEPS2_() called");
    return 0;
}

/* Demangled: ApuFrontend::Impl::RunGraph() */
extern "C" __attribute__((visibility("default"))) int _ZN11ApuFrontend4Impl8RunGraphEv(void) {
    ALOGD("_ZN11ApuFrontend4Impl8RunGraphEv() called");
    return 0;
}

/* Demangled: neuron::DeviceOptions::~DeviceOptions() */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron13DeviceOptionsD2Ev(void) {
    ALOGD("_ZN6neuron13DeviceOptionsD2Ev() called");
    return 0;
}

/* Demangled: neuron::iplist<neuron::nir::Layer, neuron::nir::LayerListTraits>::erase(neuron::ilist_iterator<neuron::nir::Layer>) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron6iplistINS_3nir5LayerENS1_15LayerListTraitsEE5eraseENS_14ilist_iteratorIS2_EE(void) {
    ALOGD("_ZN6neuron6iplistINS_3nir5LayerENS1_15LayerListTraitsEE5eraseENS_14ilist_iteratorIS2_EE() called");
    return 0;
}

/* Demangled: neuron::nir::LayerBuilder::CreateMean(neuron::nir::Shape const&, neuron::nir::Operand, neuron::nir::Constant*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir12LayerBuilder10CreateMeanERKNS0_5ShapeENS0_7OperandEPNS0_8ConstantEb(void) {
    ALOGD("_ZN6neuron3nir12LayerBuilder10CreateMeanERKNS0_5ShapeENS0_7OperandEPNS0_8ConstantEb() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(bool) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEb(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEb() called");
    return 0;
}

/* Demangled: neuron::nir::Constant::Constant(neuron::nir::Shape const&, void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir8ConstantC2ERKNS0_5ShapeEPKv(void) {
    ALOGD("_ZN6neuron3nir8ConstantC2ERKNS0_5ShapeEPKv() called");
    return 0;
}

/* Demangled: neuron::nir::Context::Context() */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir7ContextC2Ev(void) {
    ALOGD("_ZN6neuron3nir7ContextC2Ev() called");
    return 0;
}

/* Exported Object: neuron::AndroidLogger<(neuron::LogSeverity)1>::stream()::nullStream */
extern "C" __attribute__((visibility("default"))) void* _ZZN6neuron13AndroidLoggerILNS_11LogSeverityE1EE6streamEvE10nullStream = NULL;

/* Demangled: neuron::nir::Constant* neuron::nir::Context::AddTensor<neuron::nir::Constant>(neuron::nir::Constant*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6neuron3nir7Context9AddTensorINS0_8ConstantEEEPT_S5_(void) {
    ALOGD("_ZNK6neuron3nir7Context9AddTensorINS0_8ConstantEEEPT_S5_() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::setbuf(char*, long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE6setbufEPcl(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE6setbufEPcl() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(float) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEf(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEf() called");
    return 0;
}

/* Demangled: std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Layer*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Layer*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Layer*> > >::__insert_node_at(std::__ndk1::__tree_end_node<std::__ndk1::__tree_node_base<void*>*>*, std::__ndk1::__tree_node_base<void*>*&, std::__ndk1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5LayerEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSI_SI_(void) {
    ALOGD("_ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5LayerEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSI_SI_() called");
    return 0;
}

/* Demangled: std::__ndk1::vector<std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter>, std::__ndk1::allocator<std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter> > >::__swap_out_circular_buffer(std::__ndk1::__split_buffer<std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter>, std::__ndk1::allocator<std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter> >&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16vectorINS_10unique_ptrIN6neuron3nir6TensorENS3_13TensorDeleterEEENS_9allocatorIS6_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS6_RS8_EE(void) {
    ALOGD("_ZNSt6__ndk16vectorINS_10unique_ptrIN6neuron3nir6TensorENS3_13TensorDeleterEEENS_9allocatorIS6_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS6_RS8_EE() called");
    return 0;
}

/* Demangled: neuron::iplist<neuron::nir::Layer, neuron::nir::LayerListTraits>::insert(neuron::ilist_iterator<neuron::nir::Layer>, neuron::nir::Layer*) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron6iplistINS_3nir5LayerENS1_15LayerListTraitsEE6insertENS_14ilist_iteratorIS2_EEPS2_(void) {
    ALOGD("_ZN6neuron6iplistINS_3nir5LayerENS1_15LayerListTraitsEE6insertENS_14ilist_iteratorIS2_EEPS2_() called");
    return 0;
}

/* Demangled: neuron::iplist<neuron::nir::Graph, neuron::nir::GraphListTraits>::remove(neuron::ilist_iterator<neuron::nir::Graph>&) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron6iplistINS_3nir5GraphENS1_15GraphListTraitsEE6removeERNS_14ilist_iteratorIS2_EE(void) {
    ALOGD("_ZN6neuron6iplistINS_3nir5GraphENS1_15GraphListTraitsEE6removeERNS_14ilist_iteratorIS2_EE() called");
    return 0;
}

/* Demangled: ApuFrontend::Impl::MapActivation(apu_operator const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11ApuFrontend4Impl13MapActivationEPK12apu_operator(void) {
    ALOGD("_ZN11ApuFrontend4Impl13MapActivationEPK12apu_operator() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEi(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEi() called");
    return 0;
}

/* Demangled: void std::__ndk1::vector<std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter>, std::__ndk1::allocator<std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter> > >::__emplace_back_slow_path<neuron::nir::Constant*&>(neuron::nir::Constant*&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16vectorINS_10unique_ptrIN6neuron3nir6TensorENS3_13TensorDeleterEEENS_9allocatorIS6_EEE24__emplace_back_slow_pathIJRPNS3_8ConstantEEEEvDpOT_(void) {
    ALOGD("_ZNSt6__ndk16vectorINS_10unique_ptrIN6neuron3nir6TensorENS3_13TensorDeleterEEENS_9allocatorIS6_EEE24__emplace_back_slow_pathIJRPNS3_8ConstantEEEEvDpOT_() called");
    return 0;
}

/* Demangled: neuron::nir::Shape::Shape(neuron::nir::DataType, neuron::nir::Dimensions const&, float, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir5ShapeC2ENS0_8DataTypeERKNS0_10DimensionsEfi(void) {
    ALOGD("_ZN6neuron3nir5ShapeC2ENS0_8DataTypeERKNS0_10DimensionsEfi() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator=(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_() called");
    return 0;
}

/* Exported Object: vtable for neuron::compiler::CompilerOptimizer */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6neuron8compiler17CompilerOptimizerE = NULL;

/* Demangled: std::__ndk1::char_traits<char>::move(char*, char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111char_traitsIcE4moveEPcPKcm(void) {
    ALOGD("_ZNSt6__ndk111char_traitsIcE4moveEPcPKcm() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEm(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEm() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(char) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc() called");
    return 0;
}

/* Demangled: virtual thunk to neuron::NullStream::~NullStream() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6neuron10NullStreamD0Ev(void) {
    ALOGD("_ZTv0_n24_N6neuron10NullStreamD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::~basic_ostringstream() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NSt6__ndk119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(void) {
    ALOGD("_ZTv0_n24_NSt6__ndk119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<int, neuron::nir::Input*>, std::__ndk1::__tree_node<std::__ndk1::__value_type<int, neuron::nir::Input*>, void*>*, long>, bool> std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Input*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Input*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Input*> > >::__emplace_unique_key_args<int, std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<int const&>, std::__ndk1::tuple<> >(int const&, std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<int const&>&&, std::__ndk1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5InputEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSI_IJEEEEEENS_4pairINS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5InputEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSI_IJEEEEEENS_4pairINS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: neuron::nir::TailAllocatedOperandList::TailAllocatedOperandList(neuron::nir::Layer*, neuron::ArrayRef<neuron::nir::Tensor*>) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir24TailAllocatedOperandListC2EPNS0_5LayerENS_8ArrayRefIPNS0_6TensorEEE(void) {
    ALOGD("_ZN6neuron3nir24TailAllocatedOperandListC2EPNS0_5LayerENS_8ArrayRefIPNS0_6TensorEEE() called");
    return 0;
}

/* Demangled: neuron::nir::BinaryLayerBase<(neuron::nir::Layer::Kind)28, neuron::nir::ElementWiseBase>::BinaryLayerBase<neuron::nir::Shape const&>(neuron::nir::Operand, neuron::nir::Operand, neuron::nir::Shape const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir15BinaryLayerBaseILNS0_5Layer4KindE28ENS0_15ElementWiseBaseEEC2IJRKNS0_5ShapeEEEENS0_7OperandESA_DpOT_(void) {
    ALOGD("_ZN6neuron3nir15BinaryLayerBaseILNS0_5Layer4KindE28ENS0_15ElementWiseBaseEEC2IJRKNS0_5ShapeEEEENS0_7OperandESA_DpOT_() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::~basic_ostringstream() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(void) {
    ALOGD("_ZNSt6__ndk119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev() called");
    return 0;
}

/* Demangled: ApuFrontend::Impl::PrepareConstTensors(int, apu_tensor const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11ApuFrontend4Impl19PrepareConstTensorsEiPK10apu_tensor(void) {
    ALOGD("_ZN11ApuFrontend4Impl19PrepareConstTensorsEiPK10apu_tensor() called");
    return 0;
}

/* Demangled: std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Layer*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Layer*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Layer*> > >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<int, neuron::nir::Layer*>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5LayerEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE(void) {
    ALOGD("_ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5LayerEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE() called");
    return 0;
}

/* Demangled: ApuFrontend::Impl::MapPRelu(apu_operator const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11ApuFrontend4Impl8MapPReluEPK12apu_operator(void) {
    ALOGD("_ZN11ApuFrontend4Impl8MapPReluEPK12apu_operator() called");
    return 0;
}

/* Demangled: std::__ndk1::__vector_base<std::__ndk1::pair<void*, int>, std::__ndk1::allocator<std::__ndk1::pair<void*, int> > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113__vector_baseINS_4pairIPviEENS_9allocatorIS3_EEED2Ev(void) {
    ALOGD("_ZNSt6__ndk113__vector_baseINS_4pairIPviEENS_9allocatorIS3_EEED2Ev() called");
    return 0;
}

/* Demangled: neuron::nir::TernaryLayerBase<(neuron::nir::Layer::Kind)20, neuron::nir::ConvolutionBaseWithSP>::TernaryLayerBase<neuron::nir::Shape const&, neuron::NNSize const&, neuron::NNPadding const&, neuron::NNSize const&>(neuron::nir::Operand, neuron::nir::Operand, neuron::nir::Operand, neuron::nir::Shape const&, neuron::NNSize const&, neuron::NNPadding const&, neuron::NNSize const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir16TernaryLayerBaseILNS0_5Layer4KindE20ENS0_21ConvolutionBaseWithSPEEC2IJRKNS0_5ShapeERKNS_6NNSizeERKNS_9NNPaddingESC_EEENS0_7OperandESG_SG_DpOT_(void) {
    ALOGD("_ZN6neuron3nir16TernaryLayerBaseILNS0_5Layer4KindE20ENS0_21ConvolutionBaseWithSPEEC2IJRKNS0_5ShapeERKNS_6NNSizeERKNS_9NNPaddingESC_EEENS0_7OperandESG_SG_DpOT_() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEy(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEy() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::~basic_ostream() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEED1Ev(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEED1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Input*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Input*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Input*> > >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5InputEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE5clearEv(void) {
    ALOGD("_ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5InputEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE5clearEv() called");
    return 0;
}

/* Demangled: neuron::nir::LayerBuilder::InsertImpl(neuron::nir::Layer*) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir12LayerBuilder10InsertImplEPNS0_5LayerE(void) {
    ALOGD("_ZN6neuron3nir12LayerBuilder10InsertImplEPNS0_5LayerE() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: neuron::NullStream::NullBuffer::NullBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron10NullStream10NullBufferC2Ev(void) {
    ALOGD("_ZN6neuron10NullStream10NullBufferC2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__tree_iterator<std::__ndk1::__value_type<int, neuron::nir::Input*>, std::__ndk1::__tree_node<std::__ndk1::__value_type<int, neuron::nir::Input*>, void*>*, long> std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Input*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Input*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Input*> > >::find<int>(int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5InputEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE4findIiEENS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEERKT_(void) {
    ALOGD("_ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5InputEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE4findIiEENS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEERKT_() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__grow_by(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm() called");
    return 0;
}

/* Demangled: std::__ndk1::__vector_base<std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter>, std::__ndk1::allocator<std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter> > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113__vector_baseINS_10unique_ptrIN6neuron3nir6TensorENS3_13TensorDeleterEEENS_9allocatorIS6_EEED2Ev(void) {
    ALOGD("_ZNSt6__ndk113__vector_baseINS_10unique_ptrIN6neuron3nir6TensorENS3_13TensorDeleterEEENS_9allocatorIS6_EEED2Ev() called");
    return 0;
}

/* Demangled: ApuFrontend::Impl::~Impl() */
extern "C" __attribute__((visibility("default"))) int _ZN11ApuFrontend4ImplD2Ev(void) {
    ALOGD("_ZN11ApuFrontend4ImplD2Ev() called");
    return 0;
}

/* Demangled: neuron::nir::Pipeline::~Pipeline() */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir8PipelineD2Ev(void) {
    ALOGD("_ZN6neuron3nir8PipelineD2Ev() called");
    return 0;
}

/* Demangled: ApuFrontend::Impl::MapPad(apu_operator const*, apu_tensor const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11ApuFrontend4Impl6MapPadEPK12apu_operatorPK10apu_tensor(void) {
    ALOGD("_ZN11ApuFrontend4Impl6MapPadEPK12apu_operatorPK10apu_tensor() called");
    return 0;
}

/* Demangled: neuron::nir::Shape::Shape(neuron::nir::Shape const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir5ShapeC2ERKS1_(void) {
    ALOGD("_ZN6neuron3nir5ShapeC2ERKS1_() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::~basic_stringbuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(void) {
    ALOGD("_ZNSt6__ndk115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__tree_iterator<std::__ndk1::__value_type<int, neuron::nir::Constant*>, std::__ndk1::__tree_node<std::__ndk1::__value_type<int, neuron::nir::Constant*>, void*>*, long> std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Constant*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Constant*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Constant*> > >::__lower_bound<int>(int const&, std::__ndk1::__tree_node<std::__ndk1::__value_type<int, neuron::nir::Constant*>, void*>*, std::__ndk1::__tree_end_node<std::__ndk1::__tree_node_base<void*>*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir8ConstantEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE13__lower_boundIiEENS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEERKT_SJ_PNS_15__tree_end_nodeIPNS_16__tree_node_baseISH_EEEE(void) {
    ALOGD("_ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir8ConstantEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE13__lower_boundIiEENS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEERKT_SJ_PNS_15__tree_end_nodeIPNS_16__tree_node_baseISH_EEEE() called");
    return 0;
}

/* Demangled: neuron::iplist<neuron::nir::Layer, neuron::nir::LayerListTraits>::remove(neuron::ilist_iterator<neuron::nir::Layer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron6iplistINS_3nir5LayerENS1_15LayerListTraitsEE6removeERNS_14ilist_iteratorIS2_EE(void) {
    ALOGD("_ZN6neuron6iplistINS_3nir5LayerENS1_15LayerListTraitsEE6removeERNS_14ilist_iteratorIS2_EE() called");
    return 0;
}

/* Demangled: neuron::compiler::CompilerOptions::~CompilerOptions() */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron8compiler15CompilerOptionsD2Ev(void) {
    ALOGD("_ZN6neuron8compiler15CompilerOptionsD2Ev() called");
    return 0;
}

/* Demangled: neuron::iplist<neuron::nir::Graph, neuron::nir::GraphListTraits>::clear() */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron6iplistINS_3nir5GraphENS1_15GraphListTraitsEE5clearEv(void) {
    ALOGD("_ZN6neuron6iplistINS_3nir5GraphENS1_15GraphListTraitsEE5clearEv() called");
    return 0;
}

/* Demangled: neuron::nir::QuantParams::QuantParams(neuron::nir::QuantParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir11QuantParamsC2ERKS1_(void) {
    ALOGD("_ZN6neuron3nir11QuantParamsC2ERKS1_() called");
    return 0;
}

/* Demangled: std::__ndk1::vector<std::__ndk1::pair<void const*, int>, std::__ndk1::allocator<std::__ndk1::pair<void const*, int> > >::__swap_out_circular_buffer(std::__ndk1::__split_buffer<std::__ndk1::pair<void const*, int>, std::__ndk1::allocator<std::__ndk1::pair<void const*, int> >&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16vectorINS_4pairIPKviEENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE(void) {
    ALOGD("_ZNSt6__ndk16vectorINS_4pairIPKviEENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE() called");
    return 0;
}

/* Demangled: void std::__ndk1::__tree_right_rotate<std::__ndk1::__tree_node_base<void*>*>(std::__ndk1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119__tree_right_rotateIPNS_16__tree_node_baseIPvEEEEvT_(void) {
    ALOGD("_ZNSt6__ndk119__tree_right_rotateIPNS_16__tree_node_baseIPvEEEEvT_() called");
    return 0;
}

/* Exported Object: guard variable for neuron::AndroidLogger<(neuron::LogSeverity)1>::stream()::nullStream */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN6neuron13AndroidLoggerILNS_11LogSeverityE1EE6streamEvE10nullStream = NULL;

/* Demangled: neuron::iplist<neuron::nir::Graph, neuron::nir::GraphListTraits>::insert(neuron::ilist_iterator<neuron::nir::Graph>, neuron::nir::Graph*) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron6iplistINS_3nir5GraphENS1_15GraphListTraitsEE6insertENS_14ilist_iteratorIS2_EEPS2_(void) {
    ALOGD("_ZN6neuron6iplistINS_3nir5GraphENS1_15GraphListTraitsEE6insertENS_14ilist_iteratorIS2_EEPS2_() called");
    return 0;
}

/* Demangled: neuron::NullStream::NullStream() */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron10NullStreamC1Ev(void) {
    ALOGD("_ZN6neuron10NullStreamC1Ev() called");
    return 0;
}

/* Demangled: neuron::iplist<neuron::nir::Layer, neuron::nir::LayerListTraits>::erase(neuron::ilist_iterator<neuron::nir::Layer>, neuron::ilist_iterator<neuron::nir::Layer>) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron6iplistINS_3nir5LayerENS1_15LayerListTraitsEE5eraseENS_14ilist_iteratorIS2_EES6_(void) {
    ALOGD("_ZN6neuron6iplistINS_3nir5LayerENS1_15LayerListTraitsEE5eraseENS_14ilist_iteratorIS2_EES6_() called");
    return 0;
}

/* Demangled: neuron::nir::PoolingLayer::PoolingLayer(neuron::nir::Shape const&, neuron::nir::Operand, neuron::nir::PoolingLayer::Mode, neuron::NNPadding const&, neuron::NNSize const&, neuron::NNSize const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir12PoolingLayerC2ERKNS0_5ShapeENS0_7OperandENS1_4ModeERKNS_9NNPaddingERKNS_6NNSizeESC_(void) {
    ALOGD("_ZN6neuron3nir12PoolingLayerC2ERKNS0_5ShapeENS0_7OperandENS1_4ModeERKNS_9NNPaddingERKNS_6NNSizeESC_() called");
    return 0;
}

/* Demangled: ApuFrontend::Impl::GetNNSizeFromConst(apu_tensor const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11ApuFrontend4Impl18GetNNSizeFromConstEPK10apu_tensor(void) {
    ALOGD("_ZN11ApuFrontend4Impl18GetNNSizeFromConstEPK10apu_tensor() called");
    return 0;
}

/* Demangled: std::__ndk1::unique_ptr<std::__ndk1::__tree_node<std::__ndk1::__value_type<int, neuron::nir::Layer*>, void*>, std::__ndk1::__tree_node_destructor<std::__ndk1::allocator<std::__ndk1::__tree_node<std::__ndk1::__value_type<int, neuron::nir::Layer*>, void*> > > > std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Layer*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Layer*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Layer*> > >::__construct_node<std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<int const&>, std::__ndk1::tuple<> >(std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<int const&>&&, std::__ndk1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5LayerEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE16__construct_nodeIJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSI_IJEEEEEENS_10unique_ptrINS_11__tree_nodeIS6_PvEENS_22__tree_node_destructorINSB_ISQ_EEEEEEDpOT_(void) {
    ALOGD("_ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5LayerEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE16__construct_nodeIJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSI_IJEEEEEENS_10unique_ptrINS_11__tree_nodeIS6_PvEENS_22__tree_node_destructorINSB_ISQ_EEEEEEDpOT_() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_() called");
    return 0;
}

/* Demangled: neuron::nir::Constant* neuron::nir::Context::CreateTensor<neuron::nir::Constant, neuron::nir::Shape const&, void const*&>(neuron::nir::Shape const&, void const*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6neuron3nir7Context12CreateTensorINS0_8ConstantEJRKNS0_5ShapeERPKvEEEPT_DpOT0_(void) {
    ALOGD("_ZNK6neuron3nir7Context12CreateTensorINS0_8ConstantEJRKNS0_5ShapeERPKvEEEPT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEED2Ev(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEED2Ev() called");
    return 0;
}

/* Demangled: neuron::SmallVectorImpl<neuron::nir::OutputLayer*>::~SmallVectorImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron15SmallVectorImplIPNS_3nir11OutputLayerEED2Ev(void) {
    ALOGD("_ZN6neuron15SmallVectorImplIPNS_3nir11OutputLayerEED2Ev() called");
    return 0;
}

/* Demangled: ApuFrontend::Impl::MapReshape(apu_operator const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11ApuFrontend4Impl10MapReshapeEPK12apu_operator(void) {
    ALOGD("_ZN11ApuFrontend4Impl10MapReshapeEPK12apu_operator() called");
    return 0;
}

/* Demangled: ApuFrontend::~ApuFrontend() */
extern "C" __attribute__((visibility("default"))) int _ZN11ApuFrontendD1Ev(void) {
    ALOGD("_ZN11ApuFrontendD1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::xsgetn(char*, long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE6xsgetnEPcl(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE6xsgetnEPcl() called");
    return 0;
}

/* Demangled: neuron::nir::LayerBuilder::CreateSoftMax(neuron::nir::Shape const&, neuron::nir::Operand, float, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir12LayerBuilder13CreateSoftMaxERKNS0_5ShapeENS0_7OperandEfi(void) {
    ALOGD("_ZN6neuron3nir12LayerBuilder13CreateSoftMaxERKNS0_5ShapeENS0_7OperandEfi() called");
    return 0;
}

/* Demangled: std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Input*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Input*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Input*> > >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<int, neuron::nir::Input*>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5InputEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE(void) {
    ALOGD("_ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5InputEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::imbue(std::__ndk1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE() called");
    return 0;
}

/* Demangled: neuron::nir::TernaryLayerBase<(neuron::nir::Layer::Kind)17, neuron::nir::ConvolutionBaseWithSP>::TernaryLayerBase<neuron::nir::Shape const&, neuron::NNSize const&, neuron::NNPadding const&, neuron::NNSize const&>(neuron::nir::Operand, neuron::nir::Operand, neuron::nir::Operand, neuron::nir::Shape const&, neuron::NNSize const&, neuron::NNPadding const&, neuron::NNSize const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir16TernaryLayerBaseILNS0_5Layer4KindE17ENS0_21ConvolutionBaseWithSPEEC2IJRKNS0_5ShapeERKNS_6NNSizeERKNS_9NNPaddingESC_EEENS0_7OperandESG_SG_DpOT_(void) {
    ALOGD("_ZN6neuron3nir16TernaryLayerBaseILNS0_5Layer4KindE17ENS0_21ConvolutionBaseWithSPEEC2IJRKNS0_5ShapeERKNS_6NNSizeERKNS_9NNPaddingESC_EEENS0_7OperandESG_SG_DpOT_() called");
    return 0;
}

/* Demangled: virtual thunk to neuron::NullStream::~NullStream() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6neuron10NullStreamD1Ev(void) {
    ALOGD("_ZTv0_n24_N6neuron10NullStreamD1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::vector<std::__ndk1::pair<void*, int>, std::__ndk1::allocator<std::__ndk1::pair<void*, int> > >::__swap_out_circular_buffer(std::__ndk1::__split_buffer<std::__ndk1::pair<void*, int>, std::__ndk1::allocator<std::__ndk1::pair<void*, int> >&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16vectorINS_4pairIPviEENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE(void) {
    ALOGD("_ZNSt6__ndk16vectorINS_4pairIPviEENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE() called");
    return 0;
}

/* Demangled: neuron::nir::LayerBuilder::CreateConv2D(neuron::nir::Shape const&, neuron::nir::Operand, neuron::nir::Operand, neuron::nir::Operand, neuron::NNSize const&, neuron::NNPadding const&, neuron::NNSize const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir12LayerBuilder12CreateConv2DERKNS0_5ShapeENS0_7OperandES5_S5_RKNS_6NNSizeERKNS_9NNPaddingES8_(void) {
    ALOGD("_ZN6neuron3nir12LayerBuilder12CreateConv2DERKNS0_5ShapeENS0_7OperandES5_S5_RKNS_6NNSizeERKNS_9NNPaddingES8_() called");
    return 0;
}

/* Demangled: std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter>& std::__ndk1::vector<std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter>, std::__ndk1::allocator<std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter> > >::emplace_back<neuron::nir::Invalid*&>(neuron::nir::Invalid*&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16vectorINS_10unique_ptrIN6neuron3nir6TensorENS3_13TensorDeleterEEENS_9allocatorIS6_EEE12emplace_backIJRPNS3_7InvalidEEEERS6_DpOT_(void) {
    ALOGD("_ZNSt6__ndk16vectorINS_10unique_ptrIN6neuron3nir6TensorENS3_13TensorDeleterEEENS_9allocatorIS6_EEE12emplace_backIJRPNS3_7InvalidEEEERS6_DpOT_() called");
    return 0;
}

/* Demangled: neuron::compiler::CompilerOptimizer::~CompilerOptimizer() */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron8compiler17CompilerOptimizerD0Ev(void) {
    ALOGD("_ZN6neuron8compiler17CompilerOptimizerD0Ev() called");
    return 0;
}

/* Demangled: neuron::SmallVectorTemplateBase<unsigned int, true>::grow(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron23SmallVectorTemplateBaseIjLb1EE4growEm(void) {
    ALOGD("_ZN6neuron23SmallVectorTemplateBaseIjLb1EE4growEm() called");
    return 0;
}

/* Demangled: neuron::AndroidLogger<(neuron::LogSeverity)3>::~AndroidLogger() */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron13AndroidLoggerILNS_11LogSeverityE3EED2Ev(void) {
    ALOGD("_ZN6neuron13AndroidLoggerILNS_11LogSeverityE3EED2Ev() called");
    return 0;
}

/* Demangled: ApuFrontend::Impl::SetOutput(int, apu_tensor const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN11ApuFrontend4Impl9SetOutputEiPK10apu_tensorb(void) {
    ALOGD("_ZN11ApuFrontend4Impl9SetOutputEiPK10apu_tensorb() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::sync() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE4syncEv(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE4syncEv() called");
    return 0;
}

/* Demangled: neuron::nir::QuantParams::UpdateArrayRef(neuron::nir::QuantParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir11QuantParams14UpdateArrayRefERKS1_(void) {
    ALOGD("_ZN6neuron3nir11QuantParams14UpdateArrayRefERKS1_() called");
    return 0;
}

/* Demangled: std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<int, neuron::nir::Constant*>, std::__ndk1::__tree_node<std::__ndk1::__value_type<int, neuron::nir::Constant*>, void*>*, long>, bool> std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Constant*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Constant*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Constant*> > >::__emplace_unique_key_args<int, std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<int const&>, std::__ndk1::tuple<> >(int const&, std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<int const&>&&, std::__ndk1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir8ConstantEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSI_IJEEEEEENS_4pairINS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir8ConstantEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSI_IJEEEEEENS_4pairINS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE8overflowEi(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: std::__ndk1::__tree_node_base<void*>*& std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Input*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Input*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Input*> > >::__find_equal<int>(std::__ndk1::__tree_end_node<std::__ndk1::__tree_node_base<void*>*>*&, int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5InputEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE12__find_equalIiEERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISI_EERKT_(void) {
    ALOGD("_ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5InputEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE12__find_equalIiEERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISI_EERKT_() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string<decltype(nullptr)>(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2IDnEEPKc(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2IDnEEPKc() called");
    return 0;
}

/* Demangled: void std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>(std::__ndk1::__tree_node_base<void*>*, std::__ndk1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt6__ndk127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: neuron::nir::TernaryLayerBase<(neuron::nir::Layer::Kind)18, neuron::nir::ConvolutionBaseWithSP>::TernaryLayerBase<neuron::nir::Shape const&, neuron::NNSize const&, neuron::NNPadding const&, neuron::NNSize const&>(neuron::nir::Operand, neuron::nir::Operand, neuron::nir::Operand, neuron::nir::Shape const&, neuron::NNSize const&, neuron::NNPadding const&, neuron::NNSize const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir16TernaryLayerBaseILNS0_5Layer4KindE18ENS0_21ConvolutionBaseWithSPEEC2IJRKNS0_5ShapeERKNS_6NNSizeERKNS_9NNPaddingESC_EEENS0_7OperandESG_SG_DpOT_(void) {
    ALOGD("_ZN6neuron3nir16TernaryLayerBaseILNS0_5Layer4KindE18ENS0_21ConvolutionBaseWithSPEEC2IJRKNS0_5ShapeERKNS_6NNSizeERKNS_9NNPaddingESC_EEENS0_7OperandESG_SG_DpOT_() called");
    return 0;
}

/* Demangled: neuron::SmallVectorImpl<std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter> >::~SmallVectorImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron15SmallVectorImplINSt6__ndk110unique_ptrINS_3nir6TensorENS3_13TensorDeleterEEEED2Ev(void) {
    ALOGD("_ZN6neuron15SmallVectorImplINSt6__ndk110unique_ptrINS_3nir6TensorENS3_13TensorDeleterEEEED2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__tree_iterator<std::__ndk1::__value_type<int, neuron::nir::Input*>, std::__ndk1::__tree_node<std::__ndk1::__value_type<int, neuron::nir::Input*>, void*>*, long> std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Input*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Input*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Input*> > >::__lower_bound<int>(int const&, std::__ndk1::__tree_node<std::__ndk1::__value_type<int, neuron::nir::Input*>, void*>*, std::__ndk1::__tree_end_node<std::__ndk1::__tree_node_base<void*>*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5InputEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE13__lower_boundIiEENS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEERKT_SJ_PNS_15__tree_end_nodeIPNS_16__tree_node_baseISH_EEEE(void) {
    ALOGD("_ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5InputEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE13__lower_boundIiEENS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEERKT_SJ_PNS_15__tree_end_nodeIPNS_16__tree_node_baseISH_EEEE() called");
    return 0;
}

/* Demangled: _ZN6neuron23SmallVectorTemplateBaseIjLb1EE18uninitialized_copyIKjjEEvPT_S5_PT0_PNSt6__ndk19enable_ifIXsr3std7is_sameINS8_12remove_constIS4_E4typeES6_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron23SmallVectorTemplateBaseIjLb1EE18uninitialized_copyIKjjEEvPT_S5_PT0_PNSt6__ndk19enable_ifIXsr3std7is_sameINS8_12remove_constIS4_E4typeES6_EE5valueEvE4typeE(void) {
    ALOGD("_ZN6neuron23SmallVectorTemplateBaseIjLb1EE18uninitialized_copyIKjjEEvPT_S5_PT0_PNSt6__ndk19enable_ifIXsr3std7is_sameINS8_12remove_constIS4_E4typeES6_EE5valueEvE4typeE() called");
    return 0;
}

/* Demangled: std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Constant*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Constant*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Constant*> > >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<int, neuron::nir::Constant*>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir8ConstantEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE(void) {
    ALOGD("_ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir8ConstantEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE() called");
    return 0;
}

/* Demangled: neuron::nir::LayerBuilder::CreateElementWiseMul(neuron::nir::Shape const&, neuron::nir::Operand, neuron::nir::Operand) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir12LayerBuilder20CreateElementWiseMulERKNS0_5ShapeENS0_7OperandES5_(void) {
    ALOGD("_ZN6neuron3nir12LayerBuilder20CreateElementWiseMulERKNS0_5ShapeENS0_7OperandES5_() called");
    return 0;
}

/* Demangled: neuron::nir::Shape::Shape(neuron::nir::DataType, neuron::ArrayRef<unsigned int const>, float, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir5ShapeC2ENS0_8DataTypeENS_8ArrayRefIKjEEfi(void) {
    ALOGD("_ZN6neuron3nir5ShapeC2ENS0_8DataTypeENS_8ArrayRefIKjEEfi() called");
    return 0;
}

/* Demangled: neuron::nir::LayerBuilder::CreateElementWiseAdd(neuron::nir::Shape const&, neuron::nir::Operand, neuron::nir::Operand) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir12LayerBuilder20CreateElementWiseAddERKNS0_5ShapeENS0_7OperandES5_(void) {
    ALOGD("_ZN6neuron3nir12LayerBuilder20CreateElementWiseAddERKNS0_5ShapeENS0_7OperandES5_() called");
    return 0;
}

/* Exported Object: __end__ */
extern "C" __attribute__((visibility("default"))) void* __end__ = NULL;

/* Demangled: neuron::nir::ResizeLayer::ResizeLayer(neuron::nir::Shape const&, neuron::nir::Operand, neuron::nir::ResizeLayer::Mode, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir11ResizeLayerC2ERKNS0_5ShapeENS0_7OperandENS1_4ModeEbb(void) {
    ALOGD("_ZN6neuron3nir11ResizeLayerC2ERKNS0_5ShapeENS0_7OperandENS1_4ModeEbb() called");
    return 0;
}

/* Demangled: std::__ndk1::map<int, neuron::nir::Constant*, std::__ndk1::less<int>, std::__ndk1::allocator<std::__ndk1::pair<int const, neuron::nir::Constant*> > >::operator[](int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk13mapIiPN6neuron3nir8ConstantENS_4lessIiEENS_9allocatorINS_4pairIKiS4_EEEEEixERS9_(void) {
    ALOGD("_ZNSt6__ndk13mapIiPN6neuron3nir8ConstantENS_4lessIiEENS_9allocatorINS_4pairIKiS4_EEEEEixERS9_() called");
    return 0;
}

/* Demangled: std::__ndk1::char_traits<char>::assign(char*, unsigned long, char) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111char_traitsIcE6assignEPcmc(void) {
    ALOGD("_ZNSt6__ndk111char_traitsIcE6assignEPcmc() called");
    return 0;
}

/* Demangled: neuron::nir::OpResult::OpResult(neuron::nir::Layer const&, neuron::nir::Shape const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir8OpResultC2ERKNS0_5LayerERKNS0_5ShapeE(void) {
    ALOGD("_ZN6neuron3nir8OpResultC2ERKNS0_5LayerERKNS0_5ShapeE() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: neuron::nir::PassBuilder::~PassBuilder() */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir11PassBuilderD2Ev(void) {
    ALOGD("_ZN6neuron3nir11PassBuilderD2Ev() called");
    return 0;
}

/* Demangled: neuron::nir::Model::CreateGraph() */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir5Model11CreateGraphEv(void) {
    ALOGD("_ZN6neuron3nir5Model11CreateGraphEv() called");
    return 0;
}

/* Demangled: std::__ndk1::__tree_iterator<std::__ndk1::__value_type<int, neuron::nir::Layer*>, std::__ndk1::__tree_node<std::__ndk1::__value_type<int, neuron::nir::Layer*>, void*>*, long> std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Layer*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Layer*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Layer*> > >::find<int>(int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5LayerEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE4findIiEENS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEERKT_(void) {
    ALOGD("_ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5LayerEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE4findIiEENS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEERKT_() called");
    return 0;
}

/* Demangled: ApuFrontend::Impl::MapEltwise(apu_operator const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11ApuFrontend4Impl10MapEltwiseEPK12apu_operator(void) {
    ALOGD("_ZN11ApuFrontend4Impl10MapEltwiseEPK12apu_operator() called");
    return 0;
}

/* Demangled: _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_4pairIPKviEEEEE20__construct_backwardIS5_EENS_9enable_ifIXaaooL_ZNS_17integral_constantIbLb1EE5valueEEntsr15__has_constructIS6_PT_SC_EE5valuesr31is_trivially_move_constructibleISC_EE5valueEvE4typeERS6_SD_SD_RSD_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_4pairIPKviEEEEE20__construct_backwardIS5_EENS_9enable_ifIXaaooL_ZNS_17integral_constantIbLb1EE5valueEEntsr15__has_constructIS6_PT_SC_EE5valuesr31is_trivially_move_constructibleISC_EE5valueEvE4typeERS6_SD_SD_RSD_(void) {
    ALOGD("_ZNSt6__ndk116allocator_traitsINS_9allocatorINS_4pairIPKviEEEEE20__construct_backwardIS5_EENS_9enable_ifIXaaooL_ZNS_17integral_constantIbLb1EE5valueEEntsr15__has_constructIS6_PT_SC_EE5valuesr31is_trivially_move_constructibleISC_EE5valueEvE4typeERS6_SD_SD_RSD_() called");
    return 0;
}

/* Demangled: std::__ndk1::__vector_base<std::__ndk1::unique_ptr<neuron::nir::Pass, std::__ndk1::default_delete<neuron::nir::Pass> >, std::__ndk1::allocator<std::__ndk1::unique_ptr<neuron::nir::Pass, std::__ndk1::default_delete<neuron::nir::Pass> > > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113__vector_baseINS_10unique_ptrIN6neuron3nir4PassENS_14default_deleteIS4_EEEENS_9allocatorIS7_EEED2Ev(void) {
    ALOGD("_ZNSt6__ndk113__vector_baseINS_10unique_ptrIN6neuron3nir4PassENS_14default_deleteIS4_EEEENS_9allocatorIS7_EEED2Ev() called");
    return 0;
}

/* Demangled: neuron::nir::Dimensions::IsDynamic() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6neuron3nir10Dimensions9IsDynamicEv(void) {
    ALOGD("_ZNK6neuron3nir10Dimensions9IsDynamicEv() called");
    return 0;
}

/* Demangled: ApuFrontend::UninitGraph() */
extern "C" __attribute__((visibility("default"))) int _ZN11ApuFrontend11UninitGraphEv(void) {
    ALOGD("_ZN11ApuFrontend11UninitGraphEv() called");
    return 0;
}

/* Demangled: neuron::nir::UnaryLayerBase<(neuron::nir::Layer::Kind)55, neuron::nir::SingleOutputLayer>::UnaryLayerBase<neuron::nir::Shape const&>(neuron::nir::Operand, neuron::nir::Shape const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir14UnaryLayerBaseILNS0_5Layer4KindE55ENS0_17SingleOutputLayerEEC2IJRKNS0_5ShapeEEEENS0_7OperandEDpOT_(void) {
    ALOGD("_ZN6neuron3nir14UnaryLayerBaseILNS0_5Layer4KindE55ENS0_17SingleOutputLayerEEC2IJRKNS0_5ShapeEEEENS0_7OperandEDpOT_() called");
    return 0;
}

/* Demangled: neuron::nir::Shape::Shape(neuron::nir::DataType, neuron::nir::Dimensions const&, neuron::nir::QuantParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir5ShapeC2ENS0_8DataTypeERKNS0_10DimensionsERKNS0_11QuantParamsE(void) {
    ALOGD("_ZN6neuron3nir5ShapeC2ENS0_8DataTypeERKNS0_10DimensionsERKNS0_11QuantParamsE() called");
    return 0;
}

/* Demangled: neuron::SmallVector<unsigned int, 4u>::SmallVector(neuron::SmallVector<unsigned int, 4u> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron11SmallVectorIjLj4EEC2ERKS1_(void) {
    ALOGD("_ZN6neuron11SmallVectorIjLj4EEC2ERKS1_() called");
    return 0;
}

/* Demangled: neuron::SmallVectorBase::grow_pod(void*, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron15SmallVectorBase8grow_podEPvmm(void) {
    ALOGD("_ZN6neuron15SmallVectorBase8grow_podEPvmm() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::sentry::sentry(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE6sentryC2ERS3_(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE6sentryC2ERS3_() called");
    return 0;
}

/* Demangled: neuron::SmallVectorImpl<unsigned int>::operator=(neuron::SmallVectorImpl<unsigned int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron15SmallVectorImplIjEaSERKS1_(void) {
    ALOGD("_ZN6neuron15SmallVectorImplIjEaSERKS1_() called");
    return 0;
}

/* Demangled: ApuFrontend::Impl::MapToNirDataType(apu_data_type) */
extern "C" __attribute__((visibility("default"))) int _ZN11ApuFrontend4Impl16MapToNirDataTypeE13apu_data_type(void) {
    ALOGD("_ZN11ApuFrontend4Impl16MapToNirDataTypeE13apu_data_type() called");
    return 0;
}

/* Demangled: neuron::SmallVectorTemplateBase<std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter>, false>::destroy_range(std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter>*, std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter>*) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron23SmallVectorTemplateBaseINSt6__ndk110unique_ptrINS_3nir6TensorENS3_13TensorDeleterEEELb0EE13destroy_rangeEPS6_S8_(void) {
    ALOGD("_ZN6neuron23SmallVectorTemplateBaseINSt6__ndk110unique_ptrINS_3nir6TensorENS3_13TensorDeleterEEELb0EE13destroy_rangeEPS6_S8_() called");
    return 0;
}

/* Demangled: void std::__ndk1::vector<std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter>, std::__ndk1::allocator<std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter> > >::__emplace_back_slow_path<neuron::nir::Invalid*&>(neuron::nir::Invalid*&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16vectorINS_10unique_ptrIN6neuron3nir6TensorENS3_13TensorDeleterEEENS_9allocatorIS6_EEE24__emplace_back_slow_pathIJRPNS3_7InvalidEEEEvDpOT_(void) {
    ALOGD("_ZNSt6__ndk16vectorINS_10unique_ptrIN6neuron3nir6TensorENS3_13TensorDeleterEEENS_9allocatorIS6_EEE24__emplace_back_slow_pathIJRPNS3_7InvalidEEEEvDpOT_() called");
    return 0;
}

/* Demangled: ApuFrontend::~ApuFrontend() */
extern "C" __attribute__((visibility("default"))) int _ZN11ApuFrontendD2Ev(void) {
    ALOGD("_ZN11ApuFrontendD2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::seekpos(std::__ndk1::fpos<mbstate_t>, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj() called");
    return 0;
}

/* Demangled: neuron::nir::Pipeline::Pipeline(neuron::nir::Pipeline&&) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir8PipelineC2EOS1_(void) {
    ALOGD("_ZN6neuron3nir8PipelineC2EOS1_() called");
    return 0;
}

/* Demangled: neuron::nir::UnaryLayerBase<(neuron::nir::Layer::Kind)4, neuron::nir::ActivationBase>::UnaryLayerBase<neuron::nir::Shape const&>(neuron::nir::Operand, neuron::nir::Shape const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir14UnaryLayerBaseILNS0_5Layer4KindE4ENS0_14ActivationBaseEEC2IJRKNS0_5ShapeEEEENS0_7OperandEDpOT_(void) {
    ALOGD("_ZN6neuron3nir14UnaryLayerBaseILNS0_5Layer4KindE4ENS0_14ActivationBaseEEC2IJRKNS0_5ShapeEEEENS0_7OperandEDpOT_() called");
    return 0;
}

/* Demangled: neuron::nir::Use::Use(neuron::nir::Layer*, neuron::nir::Tensor*) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir3UseC2EPNS0_5LayerEPNS0_6TensorE(void) {
    ALOGD("_ZN6neuron3nir3UseC2EPNS0_5LayerEPNS0_6TensorE() called");
    return 0;
}

/* Demangled: neuron::nir::MeanLayer::MeanLayer(neuron::nir::Shape const&, neuron::nir::Operand, neuron::nir::ConstOperand, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir9MeanLayerC2ERKNS0_5ShapeENS0_7OperandENS0_12ConstOperandEb(void) {
    ALOGD("_ZN6neuron3nir9MeanLayerC2ERKNS0_5ShapeENS0_7OperandENS0_12ConstOperandEb() called");
    return 0;
}

/* Exported Object: __bss_start__ */
extern "C" __attribute__((visibility("default"))) void* __bss_start__ = NULL;

/* Demangled: std::__ndk1::char_traits<char>::copy(char*, char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111char_traitsIcE4copyEPcPKcm(void) {
    ALOGD("_ZNSt6__ndk111char_traitsIcE4copyEPcPKcm() called");
    return 0;
}

/* Demangled: neuron::nir::Dimensions::GetSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6neuron3nir10Dimensions7GetSizeEv(void) {
    ALOGD("_ZNK6neuron3nir10Dimensions7GetSizeEv() called");
    return 0;
}

/* Demangled: std::__ndk1::__vector_base<neuron::compiler::TargetId, std::__ndk1::allocator<neuron::compiler::TargetId> >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113__vector_baseIN6neuron8compiler8TargetIdENS_9allocatorIS3_EEED2Ev(void) {
    ALOGD("_ZNSt6__ndk113__vector_baseIN6neuron8compiler8TargetIdENS_9allocatorIS3_EEED2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::showmanyc() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE9showmanycEv(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE9showmanycEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__init(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm() called");
    return 0;
}

/* Demangled: std::__ndk1::__tree_iterator<std::__ndk1::__value_type<int, neuron::nir::Layer*>, std::__ndk1::__tree_node<std::__ndk1::__value_type<int, neuron::nir::Layer*>, void*>*, long> std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Layer*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Layer*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Layer*> > >::__lower_bound<int>(int const&, std::__ndk1::__tree_node<std::__ndk1::__value_type<int, neuron::nir::Layer*>, void*>*, std::__ndk1::__tree_end_node<std::__ndk1::__tree_node_base<void*>*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5LayerEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE13__lower_boundIiEENS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEERKT_SJ_PNS_15__tree_end_nodeIPNS_16__tree_node_baseISH_EEEE(void) {
    ALOGD("_ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5LayerEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE13__lower_boundIiEENS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEERKT_SJ_PNS_15__tree_end_nodeIPNS_16__tree_node_baseISH_EEEE() called");
    return 0;
}

/* Demangled: std::__ndk1::unique_ptr<std::__ndk1::__tree_node<std::__ndk1::__value_type<int, neuron::nir::Input*>, void*>, std::__ndk1::__tree_node_destructor<std::__ndk1::allocator<std::__ndk1::__tree_node<std::__ndk1::__value_type<int, neuron::nir::Input*>, void*> > > > std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Input*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Input*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Input*> > >::__construct_node<std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<int const&>, std::__ndk1::tuple<> >(std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<int const&>&&, std::__ndk1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5InputEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE16__construct_nodeIJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSI_IJEEEEEENS_10unique_ptrINS_11__tree_nodeIS6_PvEENS_22__tree_node_destructorINSB_ISQ_EEEEEEDpOT_(void) {
    ALOGD("_ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5InputEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE16__construct_nodeIJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSI_IJEEEEEENS_10unique_ptrINS_11__tree_nodeIS6_PvEENS_22__tree_node_destructorINSB_ISQ_EEEEEEDpOT_() called");
    return 0;
}

/* Demangled: neuron::nir::BinaryLayerBase<(neuron::nir::Layer::Kind)3, neuron::nir::ActivationBase>::BinaryLayerBase<neuron::nir::Shape const&>(neuron::nir::Operand, neuron::nir::Operand, neuron::nir::Shape const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir15BinaryLayerBaseILNS0_5Layer4KindE3ENS0_14ActivationBaseEEC2IJRKNS0_5ShapeEEEENS0_7OperandESA_DpOT_(void) {
    ALOGD("_ZN6neuron3nir15BinaryLayerBaseILNS0_5Layer4KindE3ENS0_14ActivationBaseEEC2IJRKNS0_5ShapeEEEENS0_7OperandESA_DpOT_() called");
    return 0;
}

/* Demangled: std::__ndk1::__tree_iterator<std::__ndk1::__value_type<int, neuron::nir::Constant*>, std::__ndk1::__tree_node<std::__ndk1::__value_type<int, neuron::nir::Constant*>, void*>*, long> std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Constant*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Constant*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Constant*> > >::find<int>(int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir8ConstantEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE4findIiEENS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEERKT_(void) {
    ALOGD("_ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir8ConstantEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE4findIiEENS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEERKT_() called");
    return 0;
}

/* Demangled: neuron::DeviceOptions::DeviceOptions() */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron13DeviceOptionsC2Ev(void) {
    ALOGD("_ZN6neuron13DeviceOptionsC2Ev() called");
    return 0;
}

/* Demangled: neuron::nir::LayerBuilder::CreateFullyConnected(neuron::nir::Shape const&, neuron::nir::Operand, neuron::nir::Operand, neuron::nir::Operand) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir12LayerBuilder20CreateFullyConnectedERKNS0_5ShapeENS0_7OperandES5_S5_(void) {
    ALOGD("_ZN6neuron3nir12LayerBuilder20CreateFullyConnectedERKNS0_5ShapeENS0_7OperandES5_S5_() called");
    return 0;
}

/* Demangled: neuron::nir::FullyConnectedLayer::FullyConnectedLayer(neuron::nir::Shape const&, neuron::nir::Operand, neuron::nir::Operand, neuron::nir::Operand) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir19FullyConnectedLayerC2ERKNS0_5ShapeENS0_7OperandES5_S5_(void) {
    ALOGD("_ZN6neuron3nir19FullyConnectedLayerC2ERKNS0_5ShapeENS0_7OperandES5_S5_() called");
    return 0;
}

/* Demangled: neuron::nir::Use::InsertIntoUseList() */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir3Use17InsertIntoUseListEv(void) {
    ALOGD("_ZN6neuron3nir3Use17InsertIntoUseListEv() called");
    return 0;
}

/* Exported Object: vtable for neuron::NullStream */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6neuron10NullStreamE = NULL;

/* Demangled: std::__ndk1::__vector_base<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev(void) {
    ALOGD("_ZNSt6__ndk113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Layer*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Layer*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Layer*> > >::~__tree() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5LayerEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEED2Ev(void) {
    ALOGD("_ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5LayerEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEED2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::vector<neuron::nir::Tensor*, std::__ndk1::allocator<neuron::nir::Tensor*> >::__swap_out_circular_buffer(std::__ndk1::__split_buffer<neuron::nir::Tensor*, std::__ndk1::allocator<neuron::nir::Tensor*>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16vectorIPN6neuron3nir6TensorENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE(void) {
    ALOGD("_ZNSt6__ndk16vectorIPN6neuron3nir6TensorENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >& std::__ndk1::operator<< <char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE(void) {
    ALOGD("_ZNSt6__ndk1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE() called");
    return 0;
}

/* Demangled: neuron::nir::Dimensions::Dimensions(neuron::ArrayRef<unsigned int const>) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir10DimensionsC2ENS_8ArrayRefIKjEE(void) {
    ALOGD("_ZN6neuron3nir10DimensionsC2ENS_8ArrayRefIKjEE() called");
    return 0;
}

/* Demangled: ApuFrontend::Impl::PrepareInputTensors(int, apu_tensor const*, neuron::nir::Graph&) */
extern "C" __attribute__((visibility("default"))) int _ZN11ApuFrontend4Impl19PrepareInputTensorsEiPK10apu_tensorRN6neuron3nir5GraphE(void) {
    ALOGD("_ZN11ApuFrontend4Impl19PrepareInputTensorsEiPK10apu_tensorRN6neuron3nir5GraphE() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void) {
    ALOGD("_ZNSt6__ndk115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: bool neuron::nir::QuantParams::IsSamePerChannel<float>(neuron::ArrayRef<float>) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6neuron3nir11QuantParams16IsSamePerChannelIfEEbNS_8ArrayRefIT_EE(void) {
    ALOGD("_ZNK6neuron3nir11QuantParams16IsSamePerChannelIfEEbNS_8ArrayRefIT_EE() called");
    return 0;
}

/* Exported Object: _bss_end__ */
extern "C" __attribute__((visibility("default"))) void* _bss_end__ = NULL;

/* Demangled: neuron::Environment::Inference(neuron::InferenceOptions) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron11Environment9InferenceENS_16InferenceOptionsE(void) {
    ALOGD("_ZN6neuron11Environment9InferenceENS_16InferenceOptionsE() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKcm(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKcm() called");
    return 0;
}

/* Exported Object: construction vtable for std::__ndk1::basic_ostream<char, neuron::NullStream::char_traits<char> >-in-neuron::NullStream */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6neuron10NullStreamE0_NSt6__ndk113basic_ostreamIcNS0_11char_traitsIcEEEE = NULL;

/* Demangled: neuron::nir::Graph::Graph(neuron::nir::Model&) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir5GraphC2ERNS0_5ModelE(void) {
    ALOGD("_ZN6neuron3nir5GraphC2ERNS0_5ModelE() called");
    return 0;
}

/* Demangled: _ZNSt6__ndk116allocator_traitsINS_9allocatorIPN6neuron3nir6TensorEEEE20__construct_backwardIS5_EENS_9enable_ifIXaaooL_ZNS_17integral_constantIbLb1EE5valueEEntsr15__has_constructIS6_PT_SC_EE5valuesr31is_trivially_move_constructibleISC_EE5valueEvE4typeERS6_SD_SD_RSD_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk116allocator_traitsINS_9allocatorIPN6neuron3nir6TensorEEEE20__construct_backwardIS5_EENS_9enable_ifIXaaooL_ZNS_17integral_constantIbLb1EE5valueEEntsr15__has_constructIS6_PT_SC_EE5valuesr31is_trivially_move_constructibleISC_EE5valueEvE4typeERS6_SD_SD_RSD_(void) {
    ALOGD("_ZNSt6__ndk116allocator_traitsINS_9allocatorIPN6neuron3nir6TensorEEEE20__construct_backwardIS5_EENS_9enable_ifIXaaooL_ZNS_17integral_constantIbLb1EE5valueEEntsr15__has_constructIS6_PT_SC_EE5valuesr31is_trivially_move_constructibleISC_EE5valueEvE4typeERS6_SD_SD_RSD_() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::xsputn(char const*, long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE6xsputnEPKcl(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE6xsputnEPKcl() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__init(unsigned long, char) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEmc(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEmc() called");
    return 0;
}

/* Demangled: neuron::nir::FixedOperandList<3ul>::FixedOperandList<neuron::nir::Operand&, neuron::nir::Operand&, neuron::nir::Operand&>(neuron::nir::Layer*, neuron::nir::Operand&, neuron::nir::Operand&, neuron::nir::Operand&) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir16FixedOperandListILm3EEC2IJRNS0_7OperandES5_S5_EEEPNS0_5LayerEDpOT_(void) {
    ALOGD("_ZN6neuron3nir16FixedOperandListILm3EEC2IJRNS0_7OperandES5_S5_EEEPNS0_5LayerEDpOT_() called");
    return 0;
}

/* Demangled: neuron::nir::FixedOperandList<2ul>::FixedOperandList<neuron::nir::Operand&, neuron::nir::Operand&>(neuron::nir::Layer*, neuron::nir::Operand&, neuron::nir::Operand&) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir16FixedOperandListILm2EEC2IJRNS0_7OperandES5_EEEPNS0_5LayerEDpOT_(void) {
    ALOGD("_ZN6neuron3nir16FixedOperandListILm2EEC2IJRNS0_7OperandES5_EEEPNS0_5LayerEDpOT_() called");
    return 0;
}

/* Demangled: neuron::NullStream::NullBuffer::~NullBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron10NullStream10NullBufferD0Ev(void) {
    ALOGD("_ZN6neuron10NullStream10NullBufferD0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__vector_base<neuron::nir::Tensor*, std::__ndk1::allocator<neuron::nir::Tensor*> >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113__vector_baseIPN6neuron3nir6TensorENS_9allocatorIS4_EEED2Ev(void) {
    ALOGD("_ZNSt6__ndk113__vector_baseIPN6neuron3nir6TensorENS_9allocatorIS4_EEED2Ev() called");
    return 0;
}

/* Demangled: ApuFrontend::Impl::Impl() */
extern "C" __attribute__((visibility("default"))) int _ZN11ApuFrontend4ImplC2Ev(void) {
    ALOGD("_ZN11ApuFrontend4ImplC2Ev() called");
    return 0;
}

/* Demangled: neuron::nir::Shape::Invalid() */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir5Shape7InvalidEv(void) {
    ALOGD("_ZN6neuron3nir5Shape7InvalidEv() called");
    return 0;
}

/* Demangled: ApuFrontend::Impl::MapConcat(apu_operator const*, apu_tensor const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11ApuFrontend4Impl9MapConcatEPK12apu_operatorPK10apu_tensor(void) {
    ALOGD("_ZN11ApuFrontend4Impl9MapConcatEPK12apu_operatorPK10apu_tensor() called");
    return 0;
}

/* Demangled: std::__ndk1::__split_buffer<std::__ndk1::pair<void const*, int>, std::__ndk1::allocator<std::__ndk1::pair<void const*, int> >&>::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114__split_bufferINS_4pairIPKviEERNS_9allocatorIS4_EEED2Ev(void) {
    ALOGD("_ZNSt6__ndk114__split_bufferINS_4pairIPKviEERNS_9allocatorIS4_EEED2Ev() called");
    return 0;
}

/* Demangled: neuron::nir::LayerBuilder::CreatePad(neuron::nir::Shape const&, neuron::nir::Operand, neuron::nir::Constant*, neuron::nir::Tensor*) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir12LayerBuilder9CreatePadERKNS0_5ShapeENS0_7OperandEPNS0_8ConstantEPNS0_6TensorE(void) {
    ALOGD("_ZN6neuron3nir12LayerBuilder9CreatePadERKNS0_5ShapeENS0_7OperandEPNS0_8ConstantEPNS0_6TensorE() called");
    return 0;
}

/* Exported Object: VTT for neuron::NullStream */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6neuron10NullStreamE = NULL;

/* Demangled: std::__ndk1::__vector_base<std::__ndk1::pair<void const*, int>, std::__ndk1::allocator<std::__ndk1::pair<void const*, int> > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113__vector_baseINS_4pairIPKviEENS_9allocatorIS4_EEED2Ev(void) {
    ALOGD("_ZNSt6__ndk113__vector_baseINS_4pairIPKviEENS_9allocatorIS4_EEED2Ev() called");
    return 0;
}

/* Demangled: neuron::compiler::CompilerOptions::CompilerOptions() */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron8compiler15CompilerOptionsC2Ev(void) {
    ALOGD("_ZN6neuron8compiler15CompilerOptionsC2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::seekoff(long long, std::__ndk1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: neuron::SmallVector<unsigned int, 4u>::SmallVector(std::initializer_list<unsigned int>) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron11SmallVectorIjLj4EEC2ESt16initializer_listIjE(void) {
    ALOGD("_ZN6neuron11SmallVectorIjLj4EEC2ESt16initializer_listIjE() called");
    return 0;
}

/* Demangled: neuron::iplist<neuron::nir::Graph, neuron::nir::GraphListTraits>::push_back(neuron::nir::Graph*) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron6iplistINS_3nir5GraphENS1_15GraphListTraitsEE9push_backEPS2_(void) {
    ALOGD("_ZN6neuron6iplistINS_3nir5GraphENS1_15GraphListTraitsEE9push_backEPS2_() called");
    return 0;
}

/* Demangled: ApuFrontend::Impl::MapOperations(int, apu_operator const*, apu_tensor const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11ApuFrontend4Impl13MapOperationsEiPK12apu_operatorPK10apu_tensor(void) {
    ALOGD("_ZN11ApuFrontend4Impl13MapOperationsEiPK12apu_operatorPK10apu_tensor() called");
    return 0;
}

/* Demangled: ApuFrontend::Impl::MapSoftmax(apu_operator const*, apu_tensor const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11ApuFrontend4Impl10MapSoftmaxEPK12apu_operatorPK10apu_tensor(void) {
    ALOGD("_ZN11ApuFrontend4Impl10MapSoftmaxEPK12apu_operatorPK10apu_tensor() called");
    return 0;
}

/* Demangled: neuron::nir::LayerBuilder::CreatePRelu(neuron::nir::Shape const&, neuron::nir::Operand, neuron::nir::Operand) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir12LayerBuilder11CreatePReluERKNS0_5ShapeENS0_7OperandES5_(void) {
    ALOGD("_ZN6neuron3nir12LayerBuilder11CreatePReluERKNS0_5ShapeENS0_7OperandES5_() called");
    return 0;
}

/* Demangled: neuron::iplist<neuron::nir::Graph, neuron::nir::GraphListTraits>::erase(neuron::ilist_iterator<neuron::nir::Graph>, neuron::ilist_iterator<neuron::nir::Graph>) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron6iplistINS_3nir5GraphENS1_15GraphListTraitsEE5eraseENS_14ilist_iteratorIS2_EES6_(void) {
    ALOGD("_ZN6neuron6iplistINS_3nir5GraphENS1_15GraphListTraitsEE5eraseENS_14ilist_iteratorIS2_EES6_() called");
    return 0;
}

/* Demangled: neuron::nir::Pipeline::Pipeline(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir8PipelineC2ERKNSt6__ndk112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6neuron3nir8PipelineC2ERKNSt6__ndk112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Constant*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Constant*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Constant*> > >::~__tree() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir8ConstantEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEED2Ev(void) {
    ALOGD("_ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir8ConstantEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEED2Ev() called");
    return 0;
}

/* Demangled: neuron::SmallVector<unsigned int, 4u>::SmallVector<unsigned int const*>(unsigned int const*, unsigned int const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron11SmallVectorIjLj4EEC2IPKjEET_S5_(void) {
    ALOGD("_ZN6neuron11SmallVectorIjLj4EEC2IPKjEET_S5_() called");
    return 0;
}

/* Demangled: std::__ndk1::__split_buffer<std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter>, std::__ndk1::allocator<std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter> >&>::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114__split_bufferINS_10unique_ptrIN6neuron3nir6TensorENS3_13TensorDeleterEEERNS_9allocatorIS6_EEED2Ev(void) {
    ALOGD("_ZNSt6__ndk114__split_bufferINS_10unique_ptrIN6neuron3nir6TensorENS3_13TensorDeleterEEERNS_9allocatorIS6_EEED2Ev() called");
    return 0;
}

/* Demangled: neuron::nir::Tensor::Tensor(neuron::nir::Tensor::Kind, neuron::nir::Shape const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir6TensorC2ENS1_4KindERKNS0_5ShapeE(void) {
    ALOGD("_ZN6neuron3nir6TensorC2ENS1_4KindERKNS0_5ShapeE() called");
    return 0;
}

/* Demangled: neuron::iplist<neuron::nir::Layer, neuron::nir::LayerListTraits>::~iplist() */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron6iplistINS_3nir5LayerENS1_15LayerListTraitsEED2Ev(void) {
    ALOGD("_ZN6neuron6iplistINS_3nir5LayerENS1_15LayerListTraitsEED2Ev() called");
    return 0;
}

/* Demangled: neuron::nir::Invalid::Invalid() */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir7InvalidC2Ev(void) {
    ALOGD("_ZN6neuron3nir7InvalidC2Ev() called");
    return 0;
}

/* Demangled: ApuFrontend::ApuFrontend() */
extern "C" __attribute__((visibility("default"))) int _ZN11ApuFrontendC1Ev(void) {
    ALOGD("_ZN11ApuFrontendC1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::basic_streambuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEEC2Ev(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEEC2Ev() called");
    return 0;
}

/* Demangled: neuron::nir::PassBuilder::Build() */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir11PassBuilder5BuildEv(void) {
    ALOGD("_ZN6neuron3nir11PassBuilder5BuildEv() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: neuron::nir::Invalid* neuron::nir::Context::AddTensor<neuron::nir::Invalid>(neuron::nir::Invalid*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6neuron3nir7Context9AddTensorINS0_7InvalidEEEPT_S5_(void) {
    ALOGD("_ZNK6neuron3nir7Context9AddTensorINS0_7InvalidEEEPT_S5_() called");
    return 0;
}

/* Exported Object: vtable for neuron::NullStream::NullBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6neuron10NullStream10NullBufferE = NULL;

/* Demangled: ApuFrontend::Impl::MapMean(apu_operator const*, apu_tensor const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11ApuFrontend4Impl7MapMeanEPK12apu_operatorPK10apu_tensor(void) {
    ALOGD("_ZN11ApuFrontend4Impl7MapMeanEPK12apu_operatorPK10apu_tensor() called");
    return 0;
}

/* Demangled: neuron::nir::Layer::GetOperand(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6neuron3nir5Layer10GetOperandEj(void) {
    ALOGD("_ZNK6neuron3nir5Layer10GetOperandEj() called");
    return 0;
}

/* Demangled: ApuFrontend::InitGraph(int, apu_tensor const*, int, apu_tensor const*, int, apu_tensor const*, int, apu_operator const*, bool, char const*, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN11ApuFrontend9InitGraphEiPK10apu_tensoriS2_iS2_iPK12apu_operatorbPKcbb(void) {
    ALOGD("_ZN11ApuFrontend9InitGraphEiPK10apu_tensoriS2_iS2_iPK12apu_operatorbPKcbb() called");
    return 0;
}

/* Demangled: neuron::nir::TernaryLayerBase<(neuron::nir::Layer::Kind)22, neuron::nir::ConvolutionBase>::TernaryLayerBase<neuron::nir::Shape const&>(neuron::nir::Operand, neuron::nir::Operand, neuron::nir::Operand, neuron::nir::Shape const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir16TernaryLayerBaseILNS0_5Layer4KindE22ENS0_15ConvolutionBaseEEC2IJRKNS0_5ShapeEEEENS0_7OperandESA_SA_DpOT_(void) {
    ALOGD("_ZN6neuron3nir16TernaryLayerBaseILNS0_5Layer4KindE22ENS0_15ConvolutionBaseEEC2IJRKNS0_5ShapeEEEENS0_7OperandESA_SA_DpOT_() called");
    return 0;
}

/* Demangled: neuron::nir::SoftMaxLayer::SoftMaxLayer(neuron::nir::Shape const&, neuron::nir::Operand, float, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir12SoftMaxLayerC2ERKNS0_5ShapeENS0_7OperandEfi(void) {
    ALOGD("_ZN6neuron3nir12SoftMaxLayerC2ERKNS0_5ShapeENS0_7OperandEfi() called");
    return 0;
}

/* Demangled: virtual thunk to std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::~basic_ostream() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEED0Ev(void) {
    ALOGD("_ZTv0_n24_NSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEED0Ev() called");
    return 0;
}

/* Demangled: neuron::nir::SingleOutputLayer::SingleOutputLayer(neuron::nir::Layer::Kind, neuron::nir::Shape const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir17SingleOutputLayerC2ENS0_5Layer4KindERKNS0_5ShapeE(void) {
    ALOGD("_ZN6neuron3nir17SingleOutputLayerC2ENS0_5Layer4KindERKNS0_5ShapeE() called");
    return 0;
}

/* Demangled: neuron::nir::BasicShape::GetPhysicalSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6neuron3nir10BasicShape15GetPhysicalSizeEv(void) {
    ALOGD("_ZNK6neuron3nir10BasicShape15GetPhysicalSizeEv() called");
    return 0;
}

/* Exported Object: construction vtable for std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt6__ndk119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: neuron::nir::Optimizer::~Optimizer() */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir9OptimizerD2Ev(void) {
    ALOGD("_ZN6neuron3nir9OptimizerD2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter>& std::__ndk1::vector<std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter>, std::__ndk1::allocator<std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter> > >::emplace_back<neuron::nir::Constant*&>(neuron::nir::Constant*&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16vectorINS_10unique_ptrIN6neuron3nir6TensorENS3_13TensorDeleterEEENS_9allocatorIS6_EEE12emplace_backIJRPNS3_8ConstantEEEERS6_DpOT_(void) {
    ALOGD("_ZNSt6__ndk16vectorINS_10unique_ptrIN6neuron3nir6TensorENS3_13TensorDeleterEEENS_9allocatorIS6_EEE12emplace_backIJRPNS3_8ConstantEEEERS6_DpOT_() called");
    return 0;
}

/* Demangled: neuron::nir::Constant::Create(neuron::nir::Context const&, neuron::nir::Shape const&, void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir8Constant6CreateERKNS0_7ContextERKNS0_5ShapeEPKv(void) {
    ALOGD("_ZN6neuron3nir8Constant6CreateERKNS0_7ContextERKNS0_5ShapeEPKv() called");
    return 0;
}

/* Demangled: neuron::nir::LayerBuilder::CreateReshape(neuron::nir::Shape const&, neuron::nir::Operand) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir12LayerBuilder13CreateReshapeERKNS0_5ShapeENS0_7OperandE(void) {
    ALOGD("_ZN6neuron3nir12LayerBuilder13CreateReshapeERKNS0_5ShapeENS0_7OperandE() called");
    return 0;
}

/* Demangled: neuron::nir::UnaryLayerBase<(neuron::nir::Layer::Kind)66, neuron::nir::SingleOutputLayer>::UnaryLayerBase<neuron::nir::Shape const&>(neuron::nir::Operand, neuron::nir::Shape const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir14UnaryLayerBaseILNS0_5Layer4KindE66ENS0_17SingleOutputLayerEEC2IJRKNS0_5ShapeEEEENS0_7OperandEDpOT_(void) {
    ALOGD("_ZN6neuron3nir14UnaryLayerBaseILNS0_5Layer4KindE66ENS0_17SingleOutputLayerEEC2IJRKNS0_5ShapeEEEENS0_7OperandEDpOT_() called");
    return 0;
}

/* Demangled: ApuFrontend::Impl::UninitGraph() */
extern "C" __attribute__((visibility("default"))) int _ZN11ApuFrontend4Impl11UninitGraphEv(void) {
    ALOGD("_ZN11ApuFrontend4Impl11UninitGraphEv() called");
    return 0;
}

/* Demangled: neuron::nir::LayerBuilder::CreateTransposeConv2D(neuron::nir::Shape const&, neuron::nir::Operand, neuron::nir::Operand, neuron::nir::Operand, neuron::NNSize const&, neuron::NNPadding const&, neuron::NNSize const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir12LayerBuilder21CreateTransposeConv2DERKNS0_5ShapeENS0_7OperandES5_S5_RKNS_6NNSizeERKNS_9NNPaddingES8_(void) {
    ALOGD("_ZN6neuron3nir12LayerBuilder21CreateTransposeConv2DERKNS0_5ShapeENS0_7OperandES5_S5_RKNS_6NNSizeERKNS_9NNPaddingES8_() called");
    return 0;
}

/* Demangled: void std::__ndk1::vector<std::__ndk1::pair<void*, int>, std::__ndk1::allocator<std::__ndk1::pair<void*, int> > >::__push_back_slow_path<std::__ndk1::pair<void*, int> >(std::__ndk1::pair<void*, int>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16vectorINS_4pairIPviEENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_(void) {
    ALOGD("_ZNSt6__ndk16vectorINS_4pairIPviEENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_() called");
    return 0;
}

/* Demangled: bool neuron::nir::QuantParams::IsSamePerChannel<int>(neuron::ArrayRef<int>) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6neuron3nir11QuantParams16IsSamePerChannelIiEEbNS_8ArrayRefIT_EE(void) {
    ALOGD("_ZNK6neuron3nir11QuantParams16IsSamePerChannelIiEEbNS_8ArrayRefIT_EE() called");
    return 0;
}

/* Demangled: neuron::iplist<neuron::nir::Graph, neuron::nir::GraphListTraits>::erase(neuron::ilist_iterator<neuron::nir::Graph>) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron6iplistINS_3nir5GraphENS1_15GraphListTraitsEE5eraseENS_14ilist_iteratorIS2_EE(void) {
    ALOGD("_ZN6neuron6iplistINS_3nir5GraphENS1_15GraphListTraitsEE5eraseENS_14ilist_iteratorIS2_EE() called");
    return 0;
}

/* Demangled: ApuFrontend::Impl::InitGraph(int, apu_tensor const*, int, apu_tensor const*, int, apu_tensor const*, int, apu_operator const*, bool, char const*, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN11ApuFrontend4Impl9InitGraphEiPK10apu_tensoriS3_iS3_iPK12apu_operatorbPKcbb(void) {
    ALOGD("_ZN11ApuFrontend4Impl9InitGraphEiPK10apu_tensoriS3_iS3_iPK12apu_operatorbPKcbb() called");
    return 0;
}

/* Demangled: neuron::nir::BinaryLayerBase<(neuron::nir::Layer::Kind)24, neuron::nir::ElementWiseBase>::BinaryLayerBase<neuron::nir::Shape const&>(neuron::nir::Operand, neuron::nir::Operand, neuron::nir::Shape const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir15BinaryLayerBaseILNS0_5Layer4KindE24ENS0_15ElementWiseBaseEEC2IJRKNS0_5ShapeEEEENS0_7OperandESA_DpOT_(void) {
    ALOGD("_ZN6neuron3nir15BinaryLayerBaseILNS0_5Layer4KindE24ENS0_15ElementWiseBaseEEC2IJRKNS0_5ShapeEEEENS0_7OperandESA_DpOT_() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: std::__ndk1::unique_ptr<std::__ndk1::__tree_node<std::__ndk1::__value_type<int, neuron::nir::Constant*>, void*>, std::__ndk1::__tree_node_destructor<std::__ndk1::allocator<std::__ndk1::__tree_node<std::__ndk1::__value_type<int, neuron::nir::Constant*>, void*> > > > std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Constant*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Constant*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Constant*> > >::__construct_node<std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<int const&>, std::__ndk1::tuple<> >(std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<int const&>&&, std::__ndk1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir8ConstantEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE16__construct_nodeIJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSI_IJEEEEEENS_10unique_ptrINS_11__tree_nodeIS6_PvEENS_22__tree_node_destructorINSB_ISQ_EEEEEEDpOT_(void) {
    ALOGD("_ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir8ConstantEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE16__construct_nodeIJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSI_IJEEEEEENS_10unique_ptrINS_11__tree_nodeIS6_PvEENS_22__tree_node_destructorINSB_ISQ_EEEEEEDpOT_() called");
    return 0;
}

/* Demangled: neuron::SmallVectorImpl<unsigned int>::append(std::initializer_list<unsigned int>) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron15SmallVectorImplIjE6appendESt16initializer_listIjE(void) {
    ALOGD("_ZN6neuron15SmallVectorImplIjE6appendESt16initializer_listIjE() called");
    return 0;
}

/* Demangled: ApuFrontend::Impl::MapPooling(apu_operator const*, apu_tensor const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11ApuFrontend4Impl10MapPoolingEPK12apu_operatorPK10apu_tensor(void) {
    ALOGD("_ZN11ApuFrontend4Impl10MapPoolingEPK12apu_operatorPK10apu_tensor() called");
    return 0;
}

/* Demangled: neuron::nir::Shape::Shape(neuron::nir::DataType, neuron::ArrayRef<unsigned int const>, neuron::nir::QuantParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir5ShapeC2ENS0_8DataTypeENS_8ArrayRefIKjEERKNS0_11QuantParamsE(void) {
    ALOGD("_ZN6neuron3nir5ShapeC2ENS0_8DataTypeENS_8ArrayRefIKjEERKNS0_11QuantParamsE() called");
    return 0;
}

/* Demangled: neuron::nir::ConvolutionBase::GetWeight() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6neuron3nir15ConvolutionBase9GetWeightEv(void) {
    ALOGD("_ZNK6neuron3nir15ConvolutionBase9GetWeightEv() called");
    return 0;
}

/* Demangled: ApuFrontend::Impl::MapResizeBilinear(apu_operator const*, apu_tensor const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11ApuFrontend4Impl17MapResizeBilinearEPK12apu_operatorPK10apu_tensor(void) {
    ALOGD("_ZN11ApuFrontend4Impl17MapResizeBilinearEPK12apu_operatorPK10apu_tensor() called");
    return 0;
}

/* Demangled: std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<int, neuron::nir::Layer*>, std::__ndk1::__tree_node<std::__ndk1::__value_type<int, neuron::nir::Layer*>, void*>*, long>, bool> std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Layer*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Layer*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Layer*> > >::__emplace_unique_key_args<int, std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<int const&>, std::__ndk1::tuple<> >(int const&, std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<int const&>&&, std::__ndk1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5LayerEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSI_IJEEEEEENS_4pairINS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5LayerEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSI_IJEEEEEENS_4pairINS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEEbEERKT_DpOT0_() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void) {
    ALOGD("_ZNSt6__ndk115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: neuron::nir::Context::~Context() */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir7ContextD2Ev(void) {
    ALOGD("_ZN6neuron3nir7ContextD2Ev() called");
    return 0;
}

/* Demangled: neuron::NullStream::~NullStream() */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron10NullStreamD0Ev(void) {
    ALOGD("_ZN6neuron10NullStreamD0Ev() called");
    return 0;
}

/* Demangled: ApuFrontend::ApuFrontend() */
extern "C" __attribute__((visibility("default"))) int _ZN11ApuFrontendC2Ev(void) {
    ALOGD("_ZN11ApuFrontendC2Ev() called");
    return 0;
}

/* Demangled: ApuFrontend::Impl::MapDepthwiseConv2D(apu_operator const*, apu_tensor const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11ApuFrontend4Impl18MapDepthwiseConv2DEPK12apu_operatorPK10apu_tensor(void) {
    ALOGD("_ZN11ApuFrontend4Impl18MapDepthwiseConv2DEPK12apu_operatorPK10apu_tensor() called");
    return 0;
}

/* Demangled: neuron::nir::IOLink::SanityCheck(unsigned long, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir6IOLink11SanityCheckEmb(void) {
    ALOGD("_ZN6neuron3nir6IOLink11SanityCheckEmb() called");
    return 0;
}

/* Demangled: neuron::compiler::CompilerBase::GetTargetReport(neuron::nir::Model const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6neuron8compiler12CompilerBase15GetTargetReportERKNS_3nir5ModelE(void) {
    ALOGD("_ZNK6neuron8compiler12CompilerBase15GetTargetReportERKNS_3nir5ModelE() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(unsigned long, char) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEmc(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEmc() called");
    return 0;
}

/* Demangled: ApuFrontend::Impl::MapConv2D(apu_operator const*, apu_tensor const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11ApuFrontend4Impl9MapConv2DEPK12apu_operatorPK10apu_tensor(void) {
    ALOGD("_ZN11ApuFrontend4Impl9MapConv2DEPK12apu_operatorPK10apu_tensor() called");
    return 0;
}

/* Demangled: std::__ndk1::__split_buffer<std::__ndk1::pair<void*, int>, std::__ndk1::allocator<std::__ndk1::pair<void*, int> >&>::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114__split_bufferINS_4pairIPviEERNS_9allocatorIS3_EEED2Ev(void) {
    ALOGD("_ZNSt6__ndk114__split_bufferINS_4pairIPviEERNS_9allocatorIS3_EEED2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::~basic_ostream() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEED1Ev(void) {
    ALOGD("_ZTv0_n24_NSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEED1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::put(char) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE3putEc(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE3putEc() called");
    return 0;
}

/* Demangled: void std::__ndk1::vector<std::__ndk1::pair<void const*, int>, std::__ndk1::allocator<std::__ndk1::pair<void const*, int> > >::__push_back_slow_path<std::__ndk1::pair<void const*, int> >(std::__ndk1::pair<void const*, int>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16vectorINS_4pairIPKviEENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_(void) {
    ALOGD("_ZNSt6__ndk16vectorINS_4pairIPKviEENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_() called");
    return 0;
}

/* Demangled: neuron::AndroidLogger<(neuron::LogSeverity)1>::stream() */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron13AndroidLoggerILNS_11LogSeverityE1EE6streamEv(void) {
    ALOGD("_ZN6neuron13AndroidLoggerILNS_11LogSeverityE1EE6streamEv() called");
    return 0;
}

/* Demangled: neuron::nir::ConcatLayer::Create(neuron::nir::Context const&, neuron::nir::Shape const&, neuron::ArrayRef<neuron::nir::Tensor*>, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir11ConcatLayer6CreateERKNS0_7ContextERKNS0_5ShapeENS_8ArrayRefIPNS0_6TensorEEEi(void) {
    ALOGD("_ZN6neuron3nir11ConcatLayer6CreateERKNS0_7ContextERKNS0_5ShapeENS_8ArrayRefIPNS0_6TensorEEEi() called");
    return 0;
}

/* Demangled: void std::__ndk1::allocator_traits<std::__ndk1::allocator<std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter> > >::__construct_backward<std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter>*>(std::__ndk1::allocator<std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter> >&, std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter>*, std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter>*, std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter>*&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_10unique_ptrIN6neuron3nir6TensorENS4_13TensorDeleterEEEEEE20__construct_backwardIPS7_EEvRS8_T_SD_RSD_(void) {
    ALOGD("_ZNSt6__ndk116allocator_traitsINS_9allocatorINS_10unique_ptrIN6neuron3nir6TensorENS4_13TensorDeleterEEEEEE20__construct_backwardIPS7_EEvRS8_T_SD_RSD_() called");
    return 0;
}

/* Demangled: neuron::nir::LayerBuilder::CreatePooling(neuron::nir::Shape const&, neuron::nir::Operand, neuron::nir::PoolingLayer::Mode, neuron::NNPadding const&, neuron::NNSize const&, neuron::NNSize const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir12LayerBuilder13CreatePoolingERKNS0_5ShapeENS0_7OperandENS0_12PoolingLayer4ModeERKNS_9NNPaddingERKNS_6NNSizeESD_(void) {
    ALOGD("_ZN6neuron3nir12LayerBuilder13CreatePoolingERKNS0_5ShapeENS0_7OperandENS0_12PoolingLayer4ModeERKNS_9NNPaddingERKNS_6NNSizeESD_() called");
    return 0;
}

/* Demangled: ApuFrontend::Impl::MapFullyConnected(apu_operator const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11ApuFrontend4Impl17MapFullyConnectedEPK12apu_operator(void) {
    ALOGD("_ZN11ApuFrontend4Impl17MapFullyConnectedEPK12apu_operator() called");
    return 0;
}

/* Demangled: neuron::nir::Value::Value(neuron::nir::Tensor::Kind, neuron::nir::Shape const&, void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir5ValueC2ENS0_6Tensor4KindERKNS0_5ShapeEPKv(void) {
    ALOGD("_ZN6neuron3nir5ValueC2ENS0_6Tensor4KindERKNS0_5ShapeEPKv() called");
    return 0;
}

/* Demangled: std::__ndk1::map<int, neuron::nir::Input*, std::__ndk1::less<int>, std::__ndk1::allocator<std::__ndk1::pair<int const, neuron::nir::Input*> > >::operator[](int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk13mapIiPN6neuron3nir5InputENS_4lessIiEENS_9allocatorINS_4pairIKiS4_EEEEEixERS9_(void) {
    ALOGD("_ZNSt6__ndk13mapIiPN6neuron3nir5InputENS_4lessIiEENS_9allocatorINS_4pairIKiS4_EEEEEixERS9_() called");
    return 0;
}

/* Demangled: void std::__ndk1::__tree_left_rotate<std::__ndk1::__tree_node_base<void*>*>(std::__ndk1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk118__tree_left_rotateIPNS_16__tree_node_baseIPvEEEEvT_(void) {
    ALOGD("_ZNSt6__ndk118__tree_left_rotateIPNS_16__tree_node_baseIPvEEEEvT_() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE9underflowEv(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initIPcEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES9_S9_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initIPcEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES9_S9_(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initIPcEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES9_S9_() called");
    return 0;
}

/* Demangled: std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Constant*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Constant*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Constant*> > >::__insert_node_at(std::__ndk1::__tree_end_node<std::__ndk1::__tree_node_base<void*>*>*, std::__ndk1::__tree_node_base<void*>*&, std::__ndk1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir8ConstantEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSI_SI_(void) {
    ALOGD("_ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir8ConstantEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSI_SI_() called");
    return 0;
}

/* Demangled: neuron::iplist<neuron::nir::Layer, neuron::nir::LayerListTraits>::clear() */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron6iplistINS_3nir5LayerENS1_15LayerListTraitsEE5clearEv(void) {
    ALOGD("_ZN6neuron6iplistINS_3nir5LayerENS1_15LayerListTraitsEE5clearEv() called");
    return 0;
}

/* Demangled: neuron::nir::LayerBuilder::GetInvalid() */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir12LayerBuilder10GetInvalidEv(void) {
    ALOGD("_ZN6neuron3nir12LayerBuilder10GetInvalidEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::seekoff(long long, std::__ndk1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt6__ndk115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: std::__ndk1::__split_buffer<neuron::nir::Tensor*, std::__ndk1::allocator<neuron::nir::Tensor*>&>::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114__split_bufferIPN6neuron3nir6TensorERNS_9allocatorIS4_EEED2Ev(void) {
    ALOGD("_ZNSt6__ndk114__split_bufferIPN6neuron3nir6TensorERNS_9allocatorIS4_EEED2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::str(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE(void) {
    ALOGD("_ZNSt6__ndk115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt6__ndk115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: neuron::iplist<neuron::nir::Graph, neuron::nir::GraphListTraits>::~iplist() */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron6iplistINS_3nir5GraphENS1_15GraphListTraitsEED2Ev(void) {
    ALOGD("_ZN6neuron6iplistINS_3nir5GraphENS1_15GraphListTraitsEED2Ev() called");
    return 0;
}

/* Demangled: neuron::nir::LayerBuilder::SetOutput(neuron::nir::Operand, unsigned long, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir12LayerBuilder9SetOutputENS0_7OperandEmb(void) {
    ALOGD("_ZN6neuron3nir12LayerBuilder9SetOutputENS0_7OperandEmb() called");
    return 0;
}

/* Demangled: neuron::nir::LayerBuilder::CreateResize(neuron::nir::Shape const&, neuron::nir::Operand, neuron::nir::ResizeLayer::Mode, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir12LayerBuilder12CreateResizeERKNS0_5ShapeENS0_7OperandENS0_11ResizeLayer4ModeEbb(void) {
    ALOGD("_ZN6neuron3nir12LayerBuilder12CreateResizeERKNS0_5ShapeENS0_7OperandENS0_11ResizeLayer4ModeEbb() called");
    return 0;
}

/* Demangled: neuron::nir::TernaryLayerBase<(neuron::nir::Layer::Kind)54, neuron::nir::SingleOutputLayer>::TernaryLayerBase<neuron::nir::Shape const&>(neuron::nir::Operand, neuron::nir::Operand, neuron::nir::Operand, neuron::nir::Shape const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir16TernaryLayerBaseILNS0_5Layer4KindE54ENS0_17SingleOutputLayerEEC2IJRKNS0_5ShapeEEEENS0_7OperandESA_SA_DpOT_(void) {
    ALOGD("_ZN6neuron3nir16TernaryLayerBaseILNS0_5Layer4KindE54ENS0_17SingleOutputLayerEEC2IJRKNS0_5ShapeEEEENS0_7OperandESA_SA_DpOT_() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::str() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void) {
    ALOGD("_ZNKSt6__ndk115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv() called");
    return 0;
}

/* Demangled: neuron::compiler::CompilerOptimizer::CreatePipeline(neuron::compiler::CompilerOptions const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6neuron8compiler17CompilerOptimizer14CreatePipelineERKNS0_15CompilerOptionsE(void) {
    ALOGD("_ZNK6neuron8compiler17CompilerOptimizer14CreatePipelineERKNS0_15CompilerOptionsE() called");
    return 0;
}

/* Demangled: std::__ndk1::__tree_node_base<void*>*& std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Layer*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Layer*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Layer*> > >::__find_equal<int>(std::__ndk1::__tree_end_node<std::__ndk1::__tree_node_base<void*>*>*&, int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5LayerEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE12__find_equalIiEERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISI_EERKT_(void) {
    ALOGD("_ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5LayerEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE12__find_equalIiEERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISI_EERKT_() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >& std::__ndk1::operator<< <std::__ndk1::char_traits<char> >(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc(void) {
    ALOGD("_ZNSt6__ndk1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc() called");
    return 0;
}

/* Demangled: neuron::nir::BinaryLayerBase<(neuron::nir::Layer::Kind)53, neuron::nir::SingleOutputLayer>::BinaryLayerBase<neuron::nir::Shape const&>(neuron::nir::Operand, neuron::nir::Operand, neuron::nir::Shape const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir15BinaryLayerBaseILNS0_5Layer4KindE53ENS0_17SingleOutputLayerEEC2IJRKNS0_5ShapeEEEENS0_7OperandESA_DpOT_(void) {
    ALOGD("_ZN6neuron3nir15BinaryLayerBaseILNS0_5Layer4KindE53ENS0_17SingleOutputLayerEEC2IJRKNS0_5ShapeEEEENS0_7OperandESA_DpOT_() called");
    return 0;
}

/* Demangled: neuron::nir::ConvolutionBaseWithSP::ConvolutionBaseWithSP(neuron::nir::Layer::Kind, neuron::nir::Shape const&, neuron::NNSize const&, neuron::NNPadding const&, neuron::NNSize const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir21ConvolutionBaseWithSPC2ENS0_5Layer4KindERKNS0_5ShapeERKNS_6NNSizeERKNS_9NNPaddingES9_(void) {
    ALOGD("_ZN6neuron3nir21ConvolutionBaseWithSPC2ENS0_5Layer4KindERKNS0_5ShapeERKNS_6NNSizeERKNS_9NNPaddingES9_() called");
    return 0;
}

/* Demangled: neuron::NullStream::~NullStream() */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron10NullStreamD1Ev(void) {
    ALOGD("_ZN6neuron10NullStreamD1Ev() called");
    return 0;
}

/* Demangled: neuron::nir::LayerBuilder::CreateActivation(neuron::nir::Shape const&, neuron::nir::Operand, neuron::nir::ActivationLayer::Mode) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir12LayerBuilder16CreateActivationERKNS0_5ShapeENS0_7OperandENS0_15ActivationLayer4ModeE(void) {
    ALOGD("_ZN6neuron3nir12LayerBuilder16CreateActivationERKNS0_5ShapeENS0_7OperandENS0_15ActivationLayer4ModeE() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::~basic_ostringstream() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEED0Ev(void) {
    ALOGD("_ZNSt6__ndk119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEED0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Constant*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Constant*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Constant*> > >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir8ConstantEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE5clearEv(void) {
    ALOGD("_ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir8ConstantEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE5clearEv() called");
    return 0;
}

/* Demangled: std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Layer*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Layer*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Layer*> > >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5LayerEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE5clearEv(void) {
    ALOGD("_ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5LayerEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE5clearEv() called");
    return 0;
}

/* Demangled: neuron::AndroidLogger<(neuron::LogSeverity)4>::~AndroidLogger() */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron13AndroidLoggerILNS_11LogSeverityE4EED2Ev(void) {
    ALOGD("_ZN6neuron13AndroidLoggerILNS_11LogSeverityE4EED2Ev() called");
    return 0;
}

/* Demangled: void neuron::SmallVectorImpl<unsigned int>::append<unsigned int const*>(unsigned int const*, unsigned int const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron15SmallVectorImplIjE6appendIPKjEEvT_S5_(void) {
    ALOGD("_ZN6neuron15SmallVectorImplIjE6appendIPKjEEvT_S5_() called");
    return 0;
}

/* Demangled: std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Input*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Input*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Input*> > >::__insert_node_at(std::__ndk1::__tree_end_node<std::__ndk1::__tree_node_base<void*>*>*, std::__ndk1::__tree_node_base<void*>*&, std::__ndk1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5InputEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSI_SI_(void) {
    ALOGD("_ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5InputEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSI_SI_() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__grow_by_and_replace(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc() called");
    return 0;
}

/* Exported Object: VTT for std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt6__ndk119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: neuron::compiler::CompilerPassBuilder::CompilerPassBuilder(neuron::compiler::CompilerOptions const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron8compiler19CompilerPassBuilderC2ERKNS0_15CompilerOptionsE(void) {
    ALOGD("_ZN6neuron8compiler19CompilerPassBuilderC2ERKNS0_15CompilerOptionsE() called");
    return 0;
}

/* Demangled: neuron::nir::DataType::GetSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6neuron3nir8DataType7GetSizeEv(void) {
    ALOGD("_ZNK6neuron3nir8DataType7GetSizeEv() called");
    return 0;
}

/* Demangled: _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_4pairIPviEEEEE20__construct_backwardIS4_EENS_9enable_ifIXaaooL_ZNS_17integral_constantIbLb1EE5valueEEntsr15__has_constructIS5_PT_SB_EE5valuesr31is_trivially_move_constructibleISB_EE5valueEvE4typeERS5_SC_SC_RSC_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_4pairIPviEEEEE20__construct_backwardIS4_EENS_9enable_ifIXaaooL_ZNS_17integral_constantIbLb1EE5valueEEntsr15__has_constructIS5_PT_SB_EE5valuesr31is_trivially_move_constructibleISB_EE5valueEvE4typeERS5_SC_SC_RSC_(void) {
    ALOGD("_ZNSt6__ndk116allocator_traitsINS_9allocatorINS_4pairIPviEEEEE20__construct_backwardIS4_EENS_9enable_ifIXaaooL_ZNS_17integral_constantIbLb1EE5valueEEntsr15__has_constructIS5_PT_SB_EE5valuesr31is_trivially_move_constructibleISB_EE5valueEvE4typeERS5_SC_SC_RSC_() called");
    return 0;
}

/* Demangled: std::__ndk1::map<int, neuron::nir::Layer*, std::__ndk1::less<int>, std::__ndk1::allocator<std::__ndk1::pair<int const, neuron::nir::Layer*> > >::operator[](int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk13mapIiPN6neuron3nir5LayerENS_4lessIiEENS_9allocatorINS_4pairIKiS4_EEEEEixERS9_(void) {
    ALOGD("_ZNSt6__ndk13mapIiPN6neuron3nir5LayerENS_4lessIiEENS_9allocatorINS_4pairIKiS4_EEEEEixERS9_() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::~basic_stringbuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEED0Ev(void) {
    ALOGD("_ZNSt6__ndk115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEED0Ev() called");
    return 0;
}

/* Demangled: neuron::SmallVectorImpl<unsigned int>::assign(std::initializer_list<unsigned int>) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron15SmallVectorImplIjE6assignESt16initializer_listIjE(void) {
    ALOGD("_ZN6neuron15SmallVectorImplIjE6assignESt16initializer_listIjE() called");
    return 0;
}

/* Demangled: neuron::nir::PassBuilder::PassBuilder(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, neuron::compiler::CompilerOptions const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir11PassBuilderC2ERKNSt6__ndk112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEERKNS_8compiler15CompilerOptionsE(void) {
    ALOGD("_ZN6neuron3nir11PassBuilderC2ERKNSt6__ndk112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEERKNS_8compiler15CompilerOptionsE() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: neuron::SmallVectorImpl<unsigned int>::~SmallVectorImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron15SmallVectorImplIjED2Ev(void) {
    ALOGD("_ZN6neuron15SmallVectorImplIjED2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >& std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&, char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void) {
    ALOGD("_ZNSt6__ndk124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m() called");
    return 0;
}

/* Demangled: neuron::nir::Invalid* neuron::nir::Context::CreateTensor<neuron::nir::Invalid>() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6neuron3nir7Context12CreateTensorINS0_7InvalidEJEEEPT_DpOT0_(void) {
    ALOGD("_ZNK6neuron3nir7Context12CreateTensorINS0_7InvalidEJEEEPT_DpOT0_() called");
    return 0;
}

/* Demangled: neuron::SmallVectorTemplateCommon<unsigned int, void>::grow_pod(unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron25SmallVectorTemplateCommonIjvE8grow_podEmm(void) {
    ALOGD("_ZN6neuron25SmallVectorTemplateCommonIjvE8grow_podEmm() called");
    return 0;
}

/* Demangled: neuron::nir::LayerBuilder::CreateDepthwiseConv2D(neuron::nir::Shape const&, neuron::nir::Operand, neuron::nir::Operand, neuron::nir::Operand, neuron::NNSize const&, neuron::NNPadding const&, neuron::NNSize const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir12LayerBuilder21CreateDepthwiseConv2DERKNS0_5ShapeENS0_7OperandES5_S5_RKNS_6NNSizeERKNS_9NNPaddingES8_(void) {
    ALOGD("_ZN6neuron3nir12LayerBuilder21CreateDepthwiseConv2DERKNS0_5ShapeENS0_7OperandES5_S5_RKNS_6NNSizeERKNS_9NNPaddingES8_() called");
    return 0;
}

/* Demangled: neuron::nir::ConcatLayer::ConcatLayer(neuron::nir::Shape const&, neuron::ArrayRef<neuron::nir::Tensor*>, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir11ConcatLayerC2ERKNS0_5ShapeENS_8ArrayRefIPNS0_6TensorEEEi(void) {
    ALOGD("_ZN6neuron3nir11ConcatLayerC2ERKNS0_5ShapeENS_8ArrayRefIPNS0_6TensorEEEi() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::sentry::~sentry() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE6sentryD2Ev(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE6sentryD2Ev() called");
    return 0;
}

/* Demangled: neuron::nir::LayerListTraits::addNodeToList(neuron::nir::Layer*) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir15LayerListTraits13addNodeToListEPNS0_5LayerE(void) {
    ALOGD("_ZN6neuron3nir15LayerListTraits13addNodeToListEPNS0_5LayerE() called");
    return 0;
}

/* Demangled: ApuFrontend::Impl::GetByteNum(apu_data_type) */
extern "C" __attribute__((visibility("default"))) int _ZN11ApuFrontend4Impl10GetByteNumE13apu_data_type(void) {
    ALOGD("_ZN11ApuFrontend4Impl10GetByteNumE13apu_data_type() called");
    return 0;
}

/* Demangled: ApuFrontend::RunGraph() */
extern "C" __attribute__((visibility("default"))) int _ZN11ApuFrontend8RunGraphEv(void) {
    ALOGD("_ZN11ApuFrontend8RunGraphEv() called");
    return 0;
}

/* Exported Object: __bss_end__ */
extern "C" __attribute__((visibility("default"))) void* __bss_end__ = NULL;

/* Demangled: neuron::Environment::Create(neuron::DeviceOptions&&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron11Environment6CreateEONS_13DeviceOptionsEb(void) {
    ALOGD("_ZN6neuron11Environment6CreateEONS_13DeviceOptionsEb() called");
    return 0;
}

/* Demangled: neuron::AndroidLogger<(neuron::LogSeverity)6>::~AndroidLogger() */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron13AndroidLoggerILNS_11LogSeverityE6EED2Ev(void) {
    ALOGD("_ZN6neuron13AndroidLoggerILNS_11LogSeverityE6EED2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__tree_node_base<void*>*& std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Constant*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Constant*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Constant*> > >::__find_equal<int>(std::__ndk1::__tree_end_node<std::__ndk1::__tree_node_base<void*>*>*&, int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir8ConstantEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE12__find_equalIiEERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISI_EERKT_(void) {
    ALOGD("_ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir8ConstantEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE12__find_equalIiEERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISI_EERKT_() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::resize(unsigned long, char) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc() called");
    return 0;
}

/* Demangled: void std::__ndk1::vector<neuron::nir::Tensor*, std::__ndk1::allocator<neuron::nir::Tensor*> >::__push_back_slow_path<neuron::nir::Tensor* const&>(neuron::nir::Tensor* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16vectorIPN6neuron3nir6TensorENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void) {
    ALOGD("_ZNSt6__ndk16vectorIPN6neuron3nir6TensorENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::~basic_string() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev() called");
    return 0;
}

/* Demangled: neuron::nir::UnaryLayerBase<(neuron::nir::Layer::Kind)0, neuron::nir::ActivationBase>::UnaryLayerBase<neuron::nir::Shape const&>(neuron::nir::Operand, neuron::nir::Shape const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir14UnaryLayerBaseILNS0_5Layer4KindE0ENS0_14ActivationBaseEEC2IJRKNS0_5ShapeEEEENS0_7OperandEDpOT_(void) {
    ALOGD("_ZN6neuron3nir14UnaryLayerBaseILNS0_5Layer4KindE0ENS0_14ActivationBaseEEC2IJRKNS0_5ShapeEEEENS0_7OperandEDpOT_() called");
    return 0;
}

/* Demangled: neuron::nir::UnaryLayerBase<(neuron::nir::Layer::Kind)69, neuron::nir::ResizeBase>::UnaryLayerBase<neuron::nir::Shape const&>(neuron::nir::Operand, neuron::nir::Shape const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir14UnaryLayerBaseILNS0_5Layer4KindE69ENS0_10ResizeBaseEEC2IJRKNS0_5ShapeEEEENS0_7OperandEDpOT_(void) {
    ALOGD("_ZN6neuron3nir14UnaryLayerBaseILNS0_5Layer4KindE69ENS0_10ResizeBaseEEC2IJRKNS0_5ShapeEEEENS0_7OperandEDpOT_() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEED0Ev(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEED0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::uflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE5uflowEv(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE5uflowEv() called");
    return 0;
}

/* Demangled: neuron::nir::Graph::~Graph() */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir5GraphD2Ev(void) {
    ALOGD("_ZN6neuron3nir5GraphD2Ev() called");
    return 0;
}

/* Demangled: neuron::nir::LayerBuilder::CreateConcat(neuron::nir::Shape const&, neuron::ArrayRef<neuron::nir::Tensor*>, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir12LayerBuilder12CreateConcatERKNS0_5ShapeENS_8ArrayRefIPNS0_6TensorEEEj(void) {
    ALOGD("_ZN6neuron3nir12LayerBuilder12CreateConcatERKNS0_5ShapeENS_8ArrayRefIPNS0_6TensorEEEj() called");
    return 0;
}

/* Demangled: neuron::nir::QuantParams::HasOffsetPerChannel() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6neuron3nir11QuantParams19HasOffsetPerChannelEv(void) {
    ALOGD("_ZNK6neuron3nir11QuantParams19HasOffsetPerChannelEv() called");
    return 0;
}

/* Demangled: std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Input*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Input*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Input*> > >::~__tree() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5InputEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEED2Ev(void) {
    ALOGD("_ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5InputEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEED2Ev() called");
    return 0;
}

/* Demangled: ApuFrontend::Impl::GetNirTensor(int) */
extern "C" __attribute__((visibility("default"))) int _ZN11ApuFrontend4Impl12GetNirTensorEi(void) {
    ALOGD("_ZN11ApuFrontend4Impl12GetNirTensorEi() called");
    return 0;
}

/* Demangled: ApuFrontend::Impl::GetNNPaddingFromConst(apu_tensor const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11ApuFrontend4Impl21GetNNPaddingFromConstEPK10apu_tensor(void) {
    ALOGD("_ZN11ApuFrontend4Impl21GetNNPaddingFromConstEPK10apu_tensor() called");
    return 0;
}

/* Demangled: neuron::nir::Graph::CreateInput(neuron::nir::Shape const&, unsigned long, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir5Graph11CreateInputERKNS0_5ShapeEmb(void) {
    ALOGD("_ZN6neuron3nir5Graph11CreateInputERKNS0_5ShapeEmb() called");
    return 0;
}

/* Demangled: ApuFrontend::Impl::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN11ApuFrontend4Impl5ResetEv(void) {
    ALOGD("_ZN11ApuFrontend4Impl5ResetEv() called");
    return 0;
}

/* Demangled: virtual thunk to std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::~basic_ostringstream() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NSt6__ndk119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEED0Ev(void) {
    ALOGD("_ZTv0_n24_NSt6__ndk119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEED0Ev() called");
    return 0;
}

/* Demangled: ApuFrontend::Impl::HandleFuseCode(neuron::nir::Shape const&, neuron::nir::Layer*, apu_act_mode) */
extern "C" __attribute__((visibility("default"))) int _ZN11ApuFrontend4Impl14HandleFuseCodeERKN6neuron3nir5ShapeEPNS2_5LayerE12apu_act_mode(void) {
    ALOGD("_ZN11ApuFrontend4Impl14HandleFuseCodeERKN6neuron3nir5ShapeEPNS2_5LayerE12apu_act_mode() called");
    return 0;
}

/* Demangled: neuron::NullStream::~NullStream() */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron10NullStreamD2Ev(void) {
    ALOGD("_ZN6neuron10NullStreamD2Ev() called");
    return 0;
}

/* Demangled: ApuFrontend::Impl::MakeNirShape(apu_tensor const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11ApuFrontend4Impl12MakeNirShapeEPK10apu_tensor(void) {
    ALOGD("_ZN11ApuFrontend4Impl12MakeNirShapeEPK10apu_tensor() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::~basic_ostringstream() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(void) {
    ALOGD("_ZNSt6__ndk119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev() called");
    return 0;
}

/* Demangled: neuron::nir::BasicShape::BasicShape(neuron::nir::BasicShape const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6neuron3nir10BasicShapeC2ERKS1_(void) {
    ALOGD("_ZN6neuron3nir10BasicShapeC2ERKS1_() called");
    return 0;
}

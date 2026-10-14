/*
 * Reverse-Engineered ABI Specification for: libapu-frontend.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libapu-frontend.so
 */

#ifndef BEGONIA_RE_LIBAPU_FRONTEND_H
#define BEGONIA_RE_LIBAPU_FRONTEND_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZNK6neuron3nir11QuantParams18HasScalePerChannelEv */
/* Demangled: neuron::nir::QuantParams::HasScalePerChannel() const */
int _ZNK6neuron3nir11QuantParams18HasScalePerChannelEv(void);

/* Symbol: _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEED0Ev */
/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::~basic_ostream() */
int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEED0Ev(void);

/* Symbol: _ZTVNSt6__ndk119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > */
extern void* _ZTVNSt6__ndk119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN6neuron3nir15ElementWiseBaseC2ENS0_5Layer4KindERKNS0_5ShapeE */
/* Demangled: neuron::nir::ElementWiseBase::ElementWiseBase(neuron::nir::Layer::Kind, neuron::nir::Shape const&) */
int _ZN6neuron3nir15ElementWiseBaseC2ENS0_5Layer4KindERKNS0_5ShapeE(void);

/* Symbol: _ZN6neuron10NullStream10NullBuffer8overflowEi */
/* Demangled: neuron::NullStream::NullBuffer::overflow(int) */
int _ZN6neuron10NullStream10NullBuffer8overflowEi(void);

/* Symbol: _ZN11ApuFrontend4Impl18MapTransposeConv2DEPK12apu_operatorPK10apu_tensor */
/* Demangled: ApuFrontend::Impl::MapTransposeConv2D(apu_operator const*, apu_tensor const*) */
int _ZN11ApuFrontend4Impl18MapTransposeConv2DEPK12apu_operatorPK10apu_tensor(void);

/* Symbol: _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE5flushEv */
/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::flush() */
int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE5flushEv(void);

/* Symbol: _ZN6neuron6iplistINS_3nir5LayerENS1_15LayerListTraitsEE9push_backEPS2_ */
/* Demangled: neuron::iplist<neuron::nir::Layer, neuron::nir::LayerListTraits>::push_back(neuron::nir::Layer*) */
int _ZN6neuron6iplistINS_3nir5LayerENS1_15LayerListTraitsEE9push_backEPS2_(void);

/* Symbol: _ZN11ApuFrontend4Impl8RunGraphEv */
/* Demangled: ApuFrontend::Impl::RunGraph() */
int _ZN11ApuFrontend4Impl8RunGraphEv(void);

/* Symbol: _ZN6neuron13DeviceOptionsD2Ev */
/* Demangled: neuron::DeviceOptions::~DeviceOptions() */
int _ZN6neuron13DeviceOptionsD2Ev(void);

/* Symbol: _ZN6neuron6iplistINS_3nir5LayerENS1_15LayerListTraitsEE5eraseENS_14ilist_iteratorIS2_EE */
/* Demangled: neuron::iplist<neuron::nir::Layer, neuron::nir::LayerListTraits>::erase(neuron::ilist_iterator<neuron::nir::Layer>) */
int _ZN6neuron6iplistINS_3nir5LayerENS1_15LayerListTraitsEE5eraseENS_14ilist_iteratorIS2_EE(void);

/* Symbol: _ZN6neuron3nir12LayerBuilder10CreateMeanERKNS0_5ShapeENS0_7OperandEPNS0_8ConstantEb */
/* Demangled: neuron::nir::LayerBuilder::CreateMean(neuron::nir::Shape const&, neuron::nir::Operand, neuron::nir::Constant*, bool) */
int _ZN6neuron3nir12LayerBuilder10CreateMeanERKNS0_5ShapeENS0_7OperandEPNS0_8ConstantEb(void);

/* Symbol: _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEb */
/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(bool) */
int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEb(void);

/* Symbol: _ZN6neuron3nir8ConstantC2ERKNS0_5ShapeEPKv */
/* Demangled: neuron::nir::Constant::Constant(neuron::nir::Shape const&, void const*) */
int _ZN6neuron3nir8ConstantC2ERKNS0_5ShapeEPKv(void);

/* Symbol: _ZN6neuron3nir7ContextC2Ev */
/* Demangled: neuron::nir::Context::Context() */
int _ZN6neuron3nir7ContextC2Ev(void);

/* Symbol: _ZZN6neuron13AndroidLoggerILNS_11LogSeverityE1EE6streamEvE10nullStream */
/* Demangled: neuron::AndroidLogger<(neuron::LogSeverity)1>::stream()::nullStream */
extern void* _ZZN6neuron13AndroidLoggerILNS_11LogSeverityE1EE6streamEvE10nullStream;

/* Symbol: _ZNK6neuron3nir7Context9AddTensorINS0_8ConstantEEEPT_S5_ */
/* Demangled: neuron::nir::Constant* neuron::nir::Context::AddTensor<neuron::nir::Constant>(neuron::nir::Constant*) const */
int _ZNK6neuron3nir7Context9AddTensorINS0_8ConstantEEEPT_S5_(void);

/* Symbol: _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE6setbufEPcl */
/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::setbuf(char*, long) */
int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE6setbufEPcl(void);

/* Symbol: _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEf */
/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(float) */
int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEf(void);

/* Symbol: _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5LayerEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSI_SI_ */
/* Demangled: std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Layer*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Layer*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Layer*> > >::__insert_node_at(std::__ndk1::__tree_end_node<std::__ndk1::__tree_node_base<void*>*>*, std::__ndk1::__tree_node_base<void*>*&, std::__ndk1::__tree_node_base<void*>*) */
int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5LayerEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSI_SI_(void);

/* Symbol: _ZNSt6__ndk16vectorINS_10unique_ptrIN6neuron3nir6TensorENS3_13TensorDeleterEEENS_9allocatorIS6_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS6_RS8_EE */
/* Demangled: std::__ndk1::vector<std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter>, std::__ndk1::allocator<std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter> > >::__swap_out_circular_buffer(std::__ndk1::__split_buffer<std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter>, std::__ndk1::allocator<std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter> >&>&) */
int _ZNSt6__ndk16vectorINS_10unique_ptrIN6neuron3nir6TensorENS3_13TensorDeleterEEENS_9allocatorIS6_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS6_RS8_EE(void);

/* Symbol: _ZN6neuron6iplistINS_3nir5LayerENS1_15LayerListTraitsEE6insertENS_14ilist_iteratorIS2_EEPS2_ */
/* Demangled: neuron::iplist<neuron::nir::Layer, neuron::nir::LayerListTraits>::insert(neuron::ilist_iterator<neuron::nir::Layer>, neuron::nir::Layer*) */
int _ZN6neuron6iplistINS_3nir5LayerENS1_15LayerListTraitsEE6insertENS_14ilist_iteratorIS2_EEPS2_(void);

/* Symbol: _ZN6neuron6iplistINS_3nir5GraphENS1_15GraphListTraitsEE6removeERNS_14ilist_iteratorIS2_EE */
/* Demangled: neuron::iplist<neuron::nir::Graph, neuron::nir::GraphListTraits>::remove(neuron::ilist_iterator<neuron::nir::Graph>&) */
int _ZN6neuron6iplistINS_3nir5GraphENS1_15GraphListTraitsEE6removeERNS_14ilist_iteratorIS2_EE(void);

/* Symbol: _ZN11ApuFrontend4Impl13MapActivationEPK12apu_operator */
/* Demangled: ApuFrontend::Impl::MapActivation(apu_operator const*) */
int _ZN11ApuFrontend4Impl13MapActivationEPK12apu_operator(void);

/* Symbol: _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEi */
/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(int) */
int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEi(void);

/* Symbol: _ZNSt6__ndk16vectorINS_10unique_ptrIN6neuron3nir6TensorENS3_13TensorDeleterEEENS_9allocatorIS6_EEE24__emplace_back_slow_pathIJRPNS3_8ConstantEEEEvDpOT_ */
/* Demangled: void std::__ndk1::vector<std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter>, std::__ndk1::allocator<std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter> > >::__emplace_back_slow_path<neuron::nir::Constant*&>(neuron::nir::Constant*&) */
int _ZNSt6__ndk16vectorINS_10unique_ptrIN6neuron3nir6TensorENS3_13TensorDeleterEEENS_9allocatorIS6_EEE24__emplace_back_slow_pathIJRPNS3_8ConstantEEEEvDpOT_(void);

/* Symbol: _ZN6neuron3nir5ShapeC2ENS0_8DataTypeERKNS0_10DimensionsEfi */
/* Demangled: neuron::nir::Shape::Shape(neuron::nir::DataType, neuron::nir::Dimensions const&, float, int) */
int _ZN6neuron3nir5ShapeC2ENS0_8DataTypeERKNS0_10DimensionsEfi(void);

/* Symbol: _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_ */
/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator=(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(void);

/* Symbol: _ZTVN6neuron8compiler17CompilerOptimizerE */
/* Demangled: vtable for neuron::compiler::CompilerOptimizer */
extern void* _ZTVN6neuron8compiler17CompilerOptimizerE;

/* Symbol: _ZNSt6__ndk111char_traitsIcE4moveEPcPKcm */
/* Demangled: std::__ndk1::char_traits<char>::move(char*, char const*, unsigned long) */
int _ZNSt6__ndk111char_traitsIcE4moveEPcPKcm(void);

/* Symbol: _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEm */
/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(unsigned long) */
int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEm(void);

/* Symbol: _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc */
/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(char) */
int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(void);

/* Symbol: _ZTv0_n24_N6neuron10NullStreamD0Ev */
/* Demangled: virtual thunk to neuron::NullStream::~NullStream() */
int _ZTv0_n24_N6neuron10NullStreamD0Ev(void);

/* Symbol: _ZTv0_n24_NSt6__ndk119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev */
/* Demangled: virtual thunk to std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::~basic_ostringstream() */
int _ZTv0_n24_NSt6__ndk119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(void);

/* Symbol: _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5InputEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSI_IJEEEEEENS_4pairINS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEEbEERKT_DpOT0_ */
/* Demangled: std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<int, neuron::nir::Input*>, std::__ndk1::__tree_node<std::__ndk1::__value_type<int, neuron::nir::Input*>, void*>*, long>, bool> std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Input*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Input*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Input*> > >::__emplace_unique_key_args<int, std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<int const&>, std::__ndk1::tuple<> >(int const&, std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<int const&>&&, std::__ndk1::tuple<>&&) */
int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5InputEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSI_IJEEEEEENS_4pairINS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEEbEERKT_DpOT0_(void);

/* Symbol: _ZN6neuron3nir24TailAllocatedOperandListC2EPNS0_5LayerENS_8ArrayRefIPNS0_6TensorEEE */
/* Demangled: neuron::nir::TailAllocatedOperandList::TailAllocatedOperandList(neuron::nir::Layer*, neuron::ArrayRef<neuron::nir::Tensor*>) */
int _ZN6neuron3nir24TailAllocatedOperandListC2EPNS0_5LayerENS_8ArrayRefIPNS0_6TensorEEE(void);

/* Symbol: _ZN6neuron3nir15BinaryLayerBaseILNS0_5Layer4KindE28ENS0_15ElementWiseBaseEEC2IJRKNS0_5ShapeEEEENS0_7OperandESA_DpOT_ */
/* Demangled: neuron::nir::BinaryLayerBase<(neuron::nir::Layer::Kind)28, neuron::nir::ElementWiseBase>::BinaryLayerBase<neuron::nir::Shape const&>(neuron::nir::Operand, neuron::nir::Operand, neuron::nir::Shape const&) */
int _ZN6neuron3nir15BinaryLayerBaseILNS0_5Layer4KindE28ENS0_15ElementWiseBaseEEC2IJRKNS0_5ShapeEEEENS0_7OperandESA_DpOT_(void);

/* Symbol: _ZNSt6__ndk119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev */
/* Demangled: std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::~basic_ostringstream() */
int _ZNSt6__ndk119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(void);

/* Symbol: _ZN11ApuFrontend4Impl19PrepareConstTensorsEiPK10apu_tensor */
/* Demangled: ApuFrontend::Impl::PrepareConstTensors(int, apu_tensor const*) */
int _ZN11ApuFrontend4Impl19PrepareConstTensorsEiPK10apu_tensor(void);

/* Symbol: _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5LayerEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE */
/* Demangled: std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Layer*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Layer*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Layer*> > >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<int, neuron::nir::Layer*>, void*>*) */
int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5LayerEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE(void);

/* Symbol: _ZN11ApuFrontend4Impl8MapPReluEPK12apu_operator */
/* Demangled: ApuFrontend::Impl::MapPRelu(apu_operator const*) */
int _ZN11ApuFrontend4Impl8MapPReluEPK12apu_operator(void);

/* Symbol: _ZNSt6__ndk113__vector_baseINS_4pairIPviEENS_9allocatorIS3_EEED2Ev */
/* Demangled: std::__ndk1::__vector_base<std::__ndk1::pair<void*, int>, std::__ndk1::allocator<std::__ndk1::pair<void*, int> > >::~__vector_base() */
int _ZNSt6__ndk113__vector_baseINS_4pairIPviEENS_9allocatorIS3_EEED2Ev(void);

/* Symbol: _ZN6neuron3nir16TernaryLayerBaseILNS0_5Layer4KindE20ENS0_21ConvolutionBaseWithSPEEC2IJRKNS0_5ShapeERKNS_6NNSizeERKNS_9NNPaddingESC_EEENS0_7OperandESG_SG_DpOT_ */
/* Demangled: neuron::nir::TernaryLayerBase<(neuron::nir::Layer::Kind)20, neuron::nir::ConvolutionBaseWithSP>::TernaryLayerBase<neuron::nir::Shape const&, neuron::NNSize const&, neuron::NNPadding const&, neuron::NNSize const&>(neuron::nir::Operand, neuron::nir::Operand, neuron::nir::Operand, neuron::nir::Shape const&, neuron::NNSize const&, neuron::NNPadding const&, neuron::NNSize const&) */
int _ZN6neuron3nir16TernaryLayerBaseILNS0_5Layer4KindE20ENS0_21ConvolutionBaseWithSPEEC2IJRKNS0_5ShapeERKNS_6NNSizeERKNS_9NNPaddingESC_EEENS0_7OperandESG_SG_DpOT_(void);

/* Symbol: _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEy */
/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(unsigned long long) */
int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEy(void);

/* Symbol: _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEED1Ev */
/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::~basic_ostream() */
int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEED1Ev(void);

/* Symbol: _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5InputEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE5clearEv */
/* Demangled: std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Input*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Input*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Input*> > >::clear() */
int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5InputEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE5clearEv(void);

/* Symbol: _ZN6neuron3nir12LayerBuilder10InsertImplEPNS0_5LayerE */
/* Demangled: neuron::nir::LayerBuilder::InsertImpl(neuron::nir::Layer*) */
int _ZN6neuron3nir12LayerBuilder10InsertImplEPNS0_5LayerE(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZN6neuron10NullStream10NullBufferC2Ev */
/* Demangled: neuron::NullStream::NullBuffer::NullBuffer() */
int _ZN6neuron10NullStream10NullBufferC2Ev(void);

/* Symbol: _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5InputEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE4findIiEENS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEERKT_ */
/* Demangled: std::__ndk1::__tree_iterator<std::__ndk1::__value_type<int, neuron::nir::Input*>, std::__ndk1::__tree_node<std::__ndk1::__value_type<int, neuron::nir::Input*>, void*>*, long> std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Input*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Input*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Input*> > >::find<int>(int const&) */
int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5InputEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE4findIiEENS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEERKT_(void);

/* Symbol: _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm */
/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__grow_by(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long) */
int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm(void);

/* Symbol: _ZNSt6__ndk113__vector_baseINS_10unique_ptrIN6neuron3nir6TensorENS3_13TensorDeleterEEENS_9allocatorIS6_EEED2Ev */
/* Demangled: std::__ndk1::__vector_base<std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter>, std::__ndk1::allocator<std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter> > >::~__vector_base() */
int _ZNSt6__ndk113__vector_baseINS_10unique_ptrIN6neuron3nir6TensorENS3_13TensorDeleterEEENS_9allocatorIS6_EEED2Ev(void);

/* Symbol: _ZN11ApuFrontend4ImplD2Ev */
/* Demangled: ApuFrontend::Impl::~Impl() */
int _ZN11ApuFrontend4ImplD2Ev(void);

/* Symbol: _ZN6neuron3nir8PipelineD2Ev */
/* Demangled: neuron::nir::Pipeline::~Pipeline() */
int _ZN6neuron3nir8PipelineD2Ev(void);

/* Symbol: _ZN11ApuFrontend4Impl6MapPadEPK12apu_operatorPK10apu_tensor */
/* Demangled: ApuFrontend::Impl::MapPad(apu_operator const*, apu_tensor const*) */
int _ZN11ApuFrontend4Impl6MapPadEPK12apu_operatorPK10apu_tensor(void);

/* Symbol: _ZN6neuron3nir5ShapeC2ERKS1_ */
/* Demangled: neuron::nir::Shape::Shape(neuron::nir::Shape const&) */
int _ZN6neuron3nir5ShapeC2ERKS1_(void);

/* Symbol: _ZNSt6__ndk115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev */
/* Demangled: std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::~basic_stringbuf() */
int _ZNSt6__ndk115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(void);

/* Symbol: _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir8ConstantEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE13__lower_boundIiEENS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEERKT_SJ_PNS_15__tree_end_nodeIPNS_16__tree_node_baseISH_EEEE */
/* Demangled: std::__ndk1::__tree_iterator<std::__ndk1::__value_type<int, neuron::nir::Constant*>, std::__ndk1::__tree_node<std::__ndk1::__value_type<int, neuron::nir::Constant*>, void*>*, long> std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Constant*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Constant*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Constant*> > >::__lower_bound<int>(int const&, std::__ndk1::__tree_node<std::__ndk1::__value_type<int, neuron::nir::Constant*>, void*>*, std::__ndk1::__tree_end_node<std::__ndk1::__tree_node_base<void*>*>*) */
int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir8ConstantEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE13__lower_boundIiEENS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEERKT_SJ_PNS_15__tree_end_nodeIPNS_16__tree_node_baseISH_EEEE(void);

/* Symbol: _ZN6neuron6iplistINS_3nir5LayerENS1_15LayerListTraitsEE6removeERNS_14ilist_iteratorIS2_EE */
/* Demangled: neuron::iplist<neuron::nir::Layer, neuron::nir::LayerListTraits>::remove(neuron::ilist_iterator<neuron::nir::Layer>&) */
int _ZN6neuron6iplistINS_3nir5LayerENS1_15LayerListTraitsEE6removeERNS_14ilist_iteratorIS2_EE(void);

/* Symbol: _ZN6neuron8compiler15CompilerOptionsD2Ev */
/* Demangled: neuron::compiler::CompilerOptions::~CompilerOptions() */
int _ZN6neuron8compiler15CompilerOptionsD2Ev(void);

/* Symbol: _ZN6neuron6iplistINS_3nir5GraphENS1_15GraphListTraitsEE5clearEv */
/* Demangled: neuron::iplist<neuron::nir::Graph, neuron::nir::GraphListTraits>::clear() */
int _ZN6neuron6iplistINS_3nir5GraphENS1_15GraphListTraitsEE5clearEv(void);

/* Symbol: _ZN6neuron3nir11QuantParamsC2ERKS1_ */
/* Demangled: neuron::nir::QuantParams::QuantParams(neuron::nir::QuantParams const&) */
int _ZN6neuron3nir11QuantParamsC2ERKS1_(void);

/* Symbol: _ZNSt6__ndk16vectorINS_4pairIPKviEENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE */
/* Demangled: std::__ndk1::vector<std::__ndk1::pair<void const*, int>, std::__ndk1::allocator<std::__ndk1::pair<void const*, int> > >::__swap_out_circular_buffer(std::__ndk1::__split_buffer<std::__ndk1::pair<void const*, int>, std::__ndk1::allocator<std::__ndk1::pair<void const*, int> >&>&) */
int _ZNSt6__ndk16vectorINS_4pairIPKviEENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE(void);

/* Symbol: _ZNSt6__ndk119__tree_right_rotateIPNS_16__tree_node_baseIPvEEEEvT_ */
/* Demangled: void std::__ndk1::__tree_right_rotate<std::__ndk1::__tree_node_base<void*>*>(std::__ndk1::__tree_node_base<void*>*) */
int _ZNSt6__ndk119__tree_right_rotateIPNS_16__tree_node_baseIPvEEEEvT_(void);

/* Symbol: _ZGVZN6neuron13AndroidLoggerILNS_11LogSeverityE1EE6streamEvE10nullStream */
/* Demangled: guard variable for neuron::AndroidLogger<(neuron::LogSeverity)1>::stream()::nullStream */
extern void* _ZGVZN6neuron13AndroidLoggerILNS_11LogSeverityE1EE6streamEvE10nullStream;

/* Symbol: _ZN6neuron6iplistINS_3nir5GraphENS1_15GraphListTraitsEE6insertENS_14ilist_iteratorIS2_EEPS2_ */
/* Demangled: neuron::iplist<neuron::nir::Graph, neuron::nir::GraphListTraits>::insert(neuron::ilist_iterator<neuron::nir::Graph>, neuron::nir::Graph*) */
int _ZN6neuron6iplistINS_3nir5GraphENS1_15GraphListTraitsEE6insertENS_14ilist_iteratorIS2_EEPS2_(void);

/* Symbol: _ZN6neuron10NullStreamC1Ev */
/* Demangled: neuron::NullStream::NullStream() */
int _ZN6neuron10NullStreamC1Ev(void);

/* Symbol: _ZN6neuron6iplistINS_3nir5LayerENS1_15LayerListTraitsEE5eraseENS_14ilist_iteratorIS2_EES6_ */
/* Demangled: neuron::iplist<neuron::nir::Layer, neuron::nir::LayerListTraits>::erase(neuron::ilist_iterator<neuron::nir::Layer>, neuron::ilist_iterator<neuron::nir::Layer>) */
int _ZN6neuron6iplistINS_3nir5LayerENS1_15LayerListTraitsEE5eraseENS_14ilist_iteratorIS2_EES6_(void);

/* Symbol: _ZN6neuron3nir12PoolingLayerC2ERKNS0_5ShapeENS0_7OperandENS1_4ModeERKNS_9NNPaddingERKNS_6NNSizeESC_ */
/* Demangled: neuron::nir::PoolingLayer::PoolingLayer(neuron::nir::Shape const&, neuron::nir::Operand, neuron::nir::PoolingLayer::Mode, neuron::NNPadding const&, neuron::NNSize const&, neuron::NNSize const&) */
int _ZN6neuron3nir12PoolingLayerC2ERKNS0_5ShapeENS0_7OperandENS1_4ModeERKNS_9NNPaddingERKNS_6NNSizeESC_(void);

/* Symbol: _ZN11ApuFrontend4Impl18GetNNSizeFromConstEPK10apu_tensor */
/* Demangled: ApuFrontend::Impl::GetNNSizeFromConst(apu_tensor const*) */
int _ZN11ApuFrontend4Impl18GetNNSizeFromConstEPK10apu_tensor(void);

/* Symbol: _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5LayerEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE16__construct_nodeIJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSI_IJEEEEEENS_10unique_ptrINS_11__tree_nodeIS6_PvEENS_22__tree_node_destructorINSB_ISQ_EEEEEEDpOT_ */
/* Demangled: std::__ndk1::unique_ptr<std::__ndk1::__tree_node<std::__ndk1::__value_type<int, neuron::nir::Layer*>, void*>, std::__ndk1::__tree_node_destructor<std::__ndk1::allocator<std::__ndk1::__tree_node<std::__ndk1::__value_type<int, neuron::nir::Layer*>, void*> > > > std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Layer*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Layer*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Layer*> > >::__construct_node<std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<int const&>, std::__ndk1::tuple<> >(std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<int const&>&&, std::__ndk1::tuple<>&&) */
int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5LayerEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE16__construct_nodeIJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSI_IJEEEEEENS_10unique_ptrINS_11__tree_nodeIS6_PvEENS_22__tree_node_destructorINSB_ISQ_EEEEEEDpOT_(void);

/* Symbol: _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_ */
/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(void);

/* Symbol: _ZNK6neuron3nir7Context12CreateTensorINS0_8ConstantEJRKNS0_5ShapeERPKvEEEPT_DpOT0_ */
/* Demangled: neuron::nir::Constant* neuron::nir::Context::CreateTensor<neuron::nir::Constant, neuron::nir::Shape const&, void const*&>(neuron::nir::Shape const&, void const*&) const */
int _ZNK6neuron3nir7Context12CreateTensorINS0_8ConstantEJRKNS0_5ShapeERPKvEEEPT_DpOT0_(void);

/* Symbol: _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEED2Ev */
/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf() */
int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEED2Ev(void);

/* Symbol: _ZN6neuron15SmallVectorImplIPNS_3nir11OutputLayerEED2Ev */
/* Demangled: neuron::SmallVectorImpl<neuron::nir::OutputLayer*>::~SmallVectorImpl() */
int _ZN6neuron15SmallVectorImplIPNS_3nir11OutputLayerEED2Ev(void);

/* Symbol: _ZN11ApuFrontend4Impl10MapReshapeEPK12apu_operator */
/* Demangled: ApuFrontend::Impl::MapReshape(apu_operator const*) */
int _ZN11ApuFrontend4Impl10MapReshapeEPK12apu_operator(void);

/* Symbol: _ZN11ApuFrontendD1Ev */
/* Demangled: ApuFrontend::~ApuFrontend() */
int _ZN11ApuFrontendD1Ev(void);

/* Symbol: _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE6xsgetnEPcl */
/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::xsgetn(char*, long) */
int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE6xsgetnEPcl(void);

/* Symbol: _ZN6neuron3nir12LayerBuilder13CreateSoftMaxERKNS0_5ShapeENS0_7OperandEfi */
/* Demangled: neuron::nir::LayerBuilder::CreateSoftMax(neuron::nir::Shape const&, neuron::nir::Operand, float, int) */
int _ZN6neuron3nir12LayerBuilder13CreateSoftMaxERKNS0_5ShapeENS0_7OperandEfi(void);

/* Symbol: _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5InputEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE */
/* Demangled: std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Input*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Input*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Input*> > >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<int, neuron::nir::Input*>, void*>*) */
int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5InputEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE(void);

/* Symbol: _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE */
/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::imbue(std::__ndk1::locale const&) */
int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void);

/* Symbol: _ZN6neuron3nir16TernaryLayerBaseILNS0_5Layer4KindE17ENS0_21ConvolutionBaseWithSPEEC2IJRKNS0_5ShapeERKNS_6NNSizeERKNS_9NNPaddingESC_EEENS0_7OperandESG_SG_DpOT_ */
/* Demangled: neuron::nir::TernaryLayerBase<(neuron::nir::Layer::Kind)17, neuron::nir::ConvolutionBaseWithSP>::TernaryLayerBase<neuron::nir::Shape const&, neuron::NNSize const&, neuron::NNPadding const&, neuron::NNSize const&>(neuron::nir::Operand, neuron::nir::Operand, neuron::nir::Operand, neuron::nir::Shape const&, neuron::NNSize const&, neuron::NNPadding const&, neuron::NNSize const&) */
int _ZN6neuron3nir16TernaryLayerBaseILNS0_5Layer4KindE17ENS0_21ConvolutionBaseWithSPEEC2IJRKNS0_5ShapeERKNS_6NNSizeERKNS_9NNPaddingESC_EEENS0_7OperandESG_SG_DpOT_(void);

/* Symbol: _ZTv0_n24_N6neuron10NullStreamD1Ev */
/* Demangled: virtual thunk to neuron::NullStream::~NullStream() */
int _ZTv0_n24_N6neuron10NullStreamD1Ev(void);

/* Symbol: _ZNSt6__ndk16vectorINS_4pairIPviEENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE */
/* Demangled: std::__ndk1::vector<std::__ndk1::pair<void*, int>, std::__ndk1::allocator<std::__ndk1::pair<void*, int> > >::__swap_out_circular_buffer(std::__ndk1::__split_buffer<std::__ndk1::pair<void*, int>, std::__ndk1::allocator<std::__ndk1::pair<void*, int> >&>&) */
int _ZNSt6__ndk16vectorINS_4pairIPviEENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE(void);

/* Symbol: _ZN6neuron3nir12LayerBuilder12CreateConv2DERKNS0_5ShapeENS0_7OperandES5_S5_RKNS_6NNSizeERKNS_9NNPaddingES8_ */
/* Demangled: neuron::nir::LayerBuilder::CreateConv2D(neuron::nir::Shape const&, neuron::nir::Operand, neuron::nir::Operand, neuron::nir::Operand, neuron::NNSize const&, neuron::NNPadding const&, neuron::NNSize const&) */
int _ZN6neuron3nir12LayerBuilder12CreateConv2DERKNS0_5ShapeENS0_7OperandES5_S5_RKNS_6NNSizeERKNS_9NNPaddingES8_(void);

/* Symbol: _ZNSt6__ndk16vectorINS_10unique_ptrIN6neuron3nir6TensorENS3_13TensorDeleterEEENS_9allocatorIS6_EEE12emplace_backIJRPNS3_7InvalidEEEERS6_DpOT_ */
/* Demangled: std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter>& std::__ndk1::vector<std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter>, std::__ndk1::allocator<std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter> > >::emplace_back<neuron::nir::Invalid*&>(neuron::nir::Invalid*&) */
int _ZNSt6__ndk16vectorINS_10unique_ptrIN6neuron3nir6TensorENS3_13TensorDeleterEEENS_9allocatorIS6_EEE12emplace_backIJRPNS3_7InvalidEEEERS6_DpOT_(void);

/* Symbol: _ZN6neuron8compiler17CompilerOptimizerD0Ev */
/* Demangled: neuron::compiler::CompilerOptimizer::~CompilerOptimizer() */
int _ZN6neuron8compiler17CompilerOptimizerD0Ev(void);

/* Symbol: _ZN6neuron23SmallVectorTemplateBaseIjLb1EE4growEm */
/* Demangled: neuron::SmallVectorTemplateBase<unsigned int, true>::grow(unsigned long) */
int _ZN6neuron23SmallVectorTemplateBaseIjLb1EE4growEm(void);

/* Symbol: _ZN6neuron13AndroidLoggerILNS_11LogSeverityE3EED2Ev */
/* Demangled: neuron::AndroidLogger<(neuron::LogSeverity)3>::~AndroidLogger() */
int _ZN6neuron13AndroidLoggerILNS_11LogSeverityE3EED2Ev(void);

/* Symbol: _ZN11ApuFrontend4Impl9SetOutputEiPK10apu_tensorb */
/* Demangled: ApuFrontend::Impl::SetOutput(int, apu_tensor const*, bool) */
int _ZN11ApuFrontend4Impl9SetOutputEiPK10apu_tensorb(void);

/* Symbol: _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE4syncEv */
/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::sync() */
int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE4syncEv(void);

/* Symbol: _ZN6neuron3nir11QuantParams14UpdateArrayRefERKS1_ */
/* Demangled: neuron::nir::QuantParams::UpdateArrayRef(neuron::nir::QuantParams const&) */
int _ZN6neuron3nir11QuantParams14UpdateArrayRefERKS1_(void);

/* Symbol: _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir8ConstantEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSI_IJEEEEEENS_4pairINS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEEbEERKT_DpOT0_ */
/* Demangled: std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<int, neuron::nir::Constant*>, std::__ndk1::__tree_node<std::__ndk1::__value_type<int, neuron::nir::Constant*>, void*>*, long>, bool> std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Constant*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Constant*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Constant*> > >::__emplace_unique_key_args<int, std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<int const&>, std::__ndk1::tuple<> >(int const&, std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<int const&>&&, std::__ndk1::tuple<>&&) */
int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir8ConstantEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSI_IJEEEEEENS_4pairINS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE8overflowEi */
/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::overflow(int) */
int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE8overflowEi(void);

/* Symbol: _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5InputEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE12__find_equalIiEERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISI_EERKT_ */
/* Demangled: std::__ndk1::__tree_node_base<void*>*& std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Input*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Input*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Input*> > >::__find_equal<int>(std::__ndk1::__tree_end_node<std::__ndk1::__tree_node_base<void*>*>*&, int const&) */
int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5InputEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE12__find_equalIiEERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISI_EERKT_(void);

/* Symbol: _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2IDnEEPKc */
/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string<decltype(nullptr)>(char const*) */
int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2IDnEEPKc(void);

/* Symbol: _ZNSt6__ndk127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>(std::__ndk1::__tree_node_base<void*>*, std::__ndk1::__tree_node_base<void*>*) */
int _ZNSt6__ndk127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN6neuron3nir16TernaryLayerBaseILNS0_5Layer4KindE18ENS0_21ConvolutionBaseWithSPEEC2IJRKNS0_5ShapeERKNS_6NNSizeERKNS_9NNPaddingESC_EEENS0_7OperandESG_SG_DpOT_ */
/* Demangled: neuron::nir::TernaryLayerBase<(neuron::nir::Layer::Kind)18, neuron::nir::ConvolutionBaseWithSP>::TernaryLayerBase<neuron::nir::Shape const&, neuron::NNSize const&, neuron::NNPadding const&, neuron::NNSize const&>(neuron::nir::Operand, neuron::nir::Operand, neuron::nir::Operand, neuron::nir::Shape const&, neuron::NNSize const&, neuron::NNPadding const&, neuron::NNSize const&) */
int _ZN6neuron3nir16TernaryLayerBaseILNS0_5Layer4KindE18ENS0_21ConvolutionBaseWithSPEEC2IJRKNS0_5ShapeERKNS_6NNSizeERKNS_9NNPaddingESC_EEENS0_7OperandESG_SG_DpOT_(void);

/* Symbol: _ZN6neuron15SmallVectorImplINSt6__ndk110unique_ptrINS_3nir6TensorENS3_13TensorDeleterEEEED2Ev */
/* Demangled: neuron::SmallVectorImpl<std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter> >::~SmallVectorImpl() */
int _ZN6neuron15SmallVectorImplINSt6__ndk110unique_ptrINS_3nir6TensorENS3_13TensorDeleterEEEED2Ev(void);

/* Symbol: _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5InputEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE13__lower_boundIiEENS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEERKT_SJ_PNS_15__tree_end_nodeIPNS_16__tree_node_baseISH_EEEE */
/* Demangled: std::__ndk1::__tree_iterator<std::__ndk1::__value_type<int, neuron::nir::Input*>, std::__ndk1::__tree_node<std::__ndk1::__value_type<int, neuron::nir::Input*>, void*>*, long> std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Input*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Input*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Input*> > >::__lower_bound<int>(int const&, std::__ndk1::__tree_node<std::__ndk1::__value_type<int, neuron::nir::Input*>, void*>*, std::__ndk1::__tree_end_node<std::__ndk1::__tree_node_base<void*>*>*) */
int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5InputEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE13__lower_boundIiEENS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEERKT_SJ_PNS_15__tree_end_nodeIPNS_16__tree_node_baseISH_EEEE(void);

/* Symbol: _ZN6neuron23SmallVectorTemplateBaseIjLb1EE18uninitialized_copyIKjjEEvPT_S5_PT0_PNSt6__ndk19enable_ifIXsr3std7is_sameINS8_12remove_constIS4_E4typeES6_EE5valueEvE4typeE */
/* Demangled: _ZN6neuron23SmallVectorTemplateBaseIjLb1EE18uninitialized_copyIKjjEEvPT_S5_PT0_PNSt6__ndk19enable_ifIXsr3std7is_sameINS8_12remove_constIS4_E4typeES6_EE5valueEvE4typeE */
int _ZN6neuron23SmallVectorTemplateBaseIjLb1EE18uninitialized_copyIKjjEEvPT_S5_PT0_PNSt6__ndk19enable_ifIXsr3std7is_sameINS8_12remove_constIS4_E4typeES6_EE5valueEvE4typeE(void);

/* Symbol: _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir8ConstantEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE */
/* Demangled: std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Constant*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Constant*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Constant*> > >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<int, neuron::nir::Constant*>, void*>*) */
int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir8ConstantEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE(void);

/* Symbol: _ZN6neuron3nir12LayerBuilder20CreateElementWiseMulERKNS0_5ShapeENS0_7OperandES5_ */
/* Demangled: neuron::nir::LayerBuilder::CreateElementWiseMul(neuron::nir::Shape const&, neuron::nir::Operand, neuron::nir::Operand) */
int _ZN6neuron3nir12LayerBuilder20CreateElementWiseMulERKNS0_5ShapeENS0_7OperandES5_(void);

/* Symbol: _ZN6neuron3nir5ShapeC2ENS0_8DataTypeENS_8ArrayRefIKjEEfi */
/* Demangled: neuron::nir::Shape::Shape(neuron::nir::DataType, neuron::ArrayRef<unsigned int const>, float, int) */
int _ZN6neuron3nir5ShapeC2ENS0_8DataTypeENS_8ArrayRefIKjEEfi(void);

/* Symbol: _ZN6neuron3nir12LayerBuilder20CreateElementWiseAddERKNS0_5ShapeENS0_7OperandES5_ */
/* Demangled: neuron::nir::LayerBuilder::CreateElementWiseAdd(neuron::nir::Shape const&, neuron::nir::Operand, neuron::nir::Operand) */
int _ZN6neuron3nir12LayerBuilder20CreateElementWiseAddERKNS0_5ShapeENS0_7OperandES5_(void);

/* Symbol: __end__ */
/* Demangled: __end__ */
extern void* __end__;

/* Symbol: _ZN6neuron3nir11ResizeLayerC2ERKNS0_5ShapeENS0_7OperandENS1_4ModeEbb */
/* Demangled: neuron::nir::ResizeLayer::ResizeLayer(neuron::nir::Shape const&, neuron::nir::Operand, neuron::nir::ResizeLayer::Mode, bool, bool) */
int _ZN6neuron3nir11ResizeLayerC2ERKNS0_5ShapeENS0_7OperandENS1_4ModeEbb(void);

/* Symbol: _ZNSt6__ndk13mapIiPN6neuron3nir8ConstantENS_4lessIiEENS_9allocatorINS_4pairIKiS4_EEEEEixERS9_ */
/* Demangled: std::__ndk1::map<int, neuron::nir::Constant*, std::__ndk1::less<int>, std::__ndk1::allocator<std::__ndk1::pair<int const, neuron::nir::Constant*> > >::operator[](int const&) */
int _ZNSt6__ndk13mapIiPN6neuron3nir8ConstantENS_4lessIiEENS_9allocatorINS_4pairIKiS4_EEEEEixERS9_(void);

/* Symbol: _ZNSt6__ndk111char_traitsIcE6assignEPcmc */
/* Demangled: std::__ndk1::char_traits<char>::assign(char*, unsigned long, char) */
int _ZNSt6__ndk111char_traitsIcE6assignEPcmc(void);

/* Symbol: _ZN6neuron3nir8OpResultC2ERKNS0_5LayerERKNS0_5ShapeE */
/* Demangled: neuron::nir::OpResult::OpResult(neuron::nir::Layer const&, neuron::nir::Shape const&) */
int _ZN6neuron3nir8OpResultC2ERKNS0_5LayerERKNS0_5ShapeE(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZN6neuron3nir11PassBuilderD2Ev */
/* Demangled: neuron::nir::PassBuilder::~PassBuilder() */
int _ZN6neuron3nir11PassBuilderD2Ev(void);

/* Symbol: _ZN6neuron3nir5Model11CreateGraphEv */
/* Demangled: neuron::nir::Model::CreateGraph() */
int _ZN6neuron3nir5Model11CreateGraphEv(void);

/* Symbol: _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5LayerEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE4findIiEENS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEERKT_ */
/* Demangled: std::__ndk1::__tree_iterator<std::__ndk1::__value_type<int, neuron::nir::Layer*>, std::__ndk1::__tree_node<std::__ndk1::__value_type<int, neuron::nir::Layer*>, void*>*, long> std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Layer*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Layer*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Layer*> > >::find<int>(int const&) */
int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5LayerEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE4findIiEENS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEERKT_(void);

/* Symbol: _ZN11ApuFrontend4Impl10MapEltwiseEPK12apu_operator */
/* Demangled: ApuFrontend::Impl::MapEltwise(apu_operator const*) */
int _ZN11ApuFrontend4Impl10MapEltwiseEPK12apu_operator(void);

/* Symbol: _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_4pairIPKviEEEEE20__construct_backwardIS5_EENS_9enable_ifIXaaooL_ZNS_17integral_constantIbLb1EE5valueEEntsr15__has_constructIS6_PT_SC_EE5valuesr31is_trivially_move_constructibleISC_EE5valueEvE4typeERS6_SD_SD_RSD_ */
/* Demangled: _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_4pairIPKviEEEEE20__construct_backwardIS5_EENS_9enable_ifIXaaooL_ZNS_17integral_constantIbLb1EE5valueEEntsr15__has_constructIS6_PT_SC_EE5valuesr31is_trivially_move_constructibleISC_EE5valueEvE4typeERS6_SD_SD_RSD_ */
int _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_4pairIPKviEEEEE20__construct_backwardIS5_EENS_9enable_ifIXaaooL_ZNS_17integral_constantIbLb1EE5valueEEntsr15__has_constructIS6_PT_SC_EE5valuesr31is_trivially_move_constructibleISC_EE5valueEvE4typeERS6_SD_SD_RSD_(void);

/* Symbol: _ZNSt6__ndk113__vector_baseINS_10unique_ptrIN6neuron3nir4PassENS_14default_deleteIS4_EEEENS_9allocatorIS7_EEED2Ev */
/* Demangled: std::__ndk1::__vector_base<std::__ndk1::unique_ptr<neuron::nir::Pass, std::__ndk1::default_delete<neuron::nir::Pass> >, std::__ndk1::allocator<std::__ndk1::unique_ptr<neuron::nir::Pass, std::__ndk1::default_delete<neuron::nir::Pass> > > >::~__vector_base() */
int _ZNSt6__ndk113__vector_baseINS_10unique_ptrIN6neuron3nir4PassENS_14default_deleteIS4_EEEENS_9allocatorIS7_EEED2Ev(void);

/* Symbol: _ZNK6neuron3nir10Dimensions9IsDynamicEv */
/* Demangled: neuron::nir::Dimensions::IsDynamic() const */
int _ZNK6neuron3nir10Dimensions9IsDynamicEv(void);

/* Symbol: _ZN11ApuFrontend11UninitGraphEv */
/* Demangled: ApuFrontend::UninitGraph() */
int _ZN11ApuFrontend11UninitGraphEv(void);

/* Symbol: _ZN6neuron3nir14UnaryLayerBaseILNS0_5Layer4KindE55ENS0_17SingleOutputLayerEEC2IJRKNS0_5ShapeEEEENS0_7OperandEDpOT_ */
/* Demangled: neuron::nir::UnaryLayerBase<(neuron::nir::Layer::Kind)55, neuron::nir::SingleOutputLayer>::UnaryLayerBase<neuron::nir::Shape const&>(neuron::nir::Operand, neuron::nir::Shape const&) */
int _ZN6neuron3nir14UnaryLayerBaseILNS0_5Layer4KindE55ENS0_17SingleOutputLayerEEC2IJRKNS0_5ShapeEEEENS0_7OperandEDpOT_(void);

/* Symbol: _ZN6neuron3nir5ShapeC2ENS0_8DataTypeERKNS0_10DimensionsERKNS0_11QuantParamsE */
/* Demangled: neuron::nir::Shape::Shape(neuron::nir::DataType, neuron::nir::Dimensions const&, neuron::nir::QuantParams const&) */
int _ZN6neuron3nir5ShapeC2ENS0_8DataTypeERKNS0_10DimensionsERKNS0_11QuantParamsE(void);

/* Symbol: _ZN6neuron11SmallVectorIjLj4EEC2ERKS1_ */
/* Demangled: neuron::SmallVector<unsigned int, 4u>::SmallVector(neuron::SmallVector<unsigned int, 4u> const&) */
int _ZN6neuron11SmallVectorIjLj4EEC2ERKS1_(void);

/* Symbol: _ZN6neuron15SmallVectorBase8grow_podEPvmm */
/* Demangled: neuron::SmallVectorBase::grow_pod(void*, unsigned long, unsigned long) */
int _ZN6neuron15SmallVectorBase8grow_podEPvmm(void);

/* Symbol: _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE6sentryC2ERS3_ */
/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::sentry::sentry(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&) */
int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE6sentryC2ERS3_(void);

/* Symbol: _ZN6neuron15SmallVectorImplIjEaSERKS1_ */
/* Demangled: neuron::SmallVectorImpl<unsigned int>::operator=(neuron::SmallVectorImpl<unsigned int> const&) */
int _ZN6neuron15SmallVectorImplIjEaSERKS1_(void);

/* Symbol: _ZN11ApuFrontend4Impl16MapToNirDataTypeE13apu_data_type */
/* Demangled: ApuFrontend::Impl::MapToNirDataType(apu_data_type) */
int _ZN11ApuFrontend4Impl16MapToNirDataTypeE13apu_data_type(void);

/* Symbol: _ZN6neuron23SmallVectorTemplateBaseINSt6__ndk110unique_ptrINS_3nir6TensorENS3_13TensorDeleterEEELb0EE13destroy_rangeEPS6_S8_ */
/* Demangled: neuron::SmallVectorTemplateBase<std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter>, false>::destroy_range(std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter>*, std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter>*) */
int _ZN6neuron23SmallVectorTemplateBaseINSt6__ndk110unique_ptrINS_3nir6TensorENS3_13TensorDeleterEEELb0EE13destroy_rangeEPS6_S8_(void);

/* Symbol: _ZNSt6__ndk16vectorINS_10unique_ptrIN6neuron3nir6TensorENS3_13TensorDeleterEEENS_9allocatorIS6_EEE24__emplace_back_slow_pathIJRPNS3_7InvalidEEEEvDpOT_ */
/* Demangled: void std::__ndk1::vector<std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter>, std::__ndk1::allocator<std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter> > >::__emplace_back_slow_path<neuron::nir::Invalid*&>(neuron::nir::Invalid*&) */
int _ZNSt6__ndk16vectorINS_10unique_ptrIN6neuron3nir6TensorENS3_13TensorDeleterEEENS_9allocatorIS6_EEE24__emplace_back_slow_pathIJRPNS3_7InvalidEEEEvDpOT_(void);

/* Symbol: _ZN11ApuFrontendD2Ev */
/* Demangled: ApuFrontend::~ApuFrontend() */
int _ZN11ApuFrontendD2Ev(void);

/* Symbol: _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj */
/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::seekpos(std::__ndk1::fpos<mbstate_t>, unsigned int) */
int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj(void);

/* Symbol: _ZN6neuron3nir8PipelineC2EOS1_ */
/* Demangled: neuron::nir::Pipeline::Pipeline(neuron::nir::Pipeline&&) */
int _ZN6neuron3nir8PipelineC2EOS1_(void);

/* Symbol: _ZN6neuron3nir14UnaryLayerBaseILNS0_5Layer4KindE4ENS0_14ActivationBaseEEC2IJRKNS0_5ShapeEEEENS0_7OperandEDpOT_ */
/* Demangled: neuron::nir::UnaryLayerBase<(neuron::nir::Layer::Kind)4, neuron::nir::ActivationBase>::UnaryLayerBase<neuron::nir::Shape const&>(neuron::nir::Operand, neuron::nir::Shape const&) */
int _ZN6neuron3nir14UnaryLayerBaseILNS0_5Layer4KindE4ENS0_14ActivationBaseEEC2IJRKNS0_5ShapeEEEENS0_7OperandEDpOT_(void);

/* Symbol: _ZN6neuron3nir3UseC2EPNS0_5LayerEPNS0_6TensorE */
/* Demangled: neuron::nir::Use::Use(neuron::nir::Layer*, neuron::nir::Tensor*) */
int _ZN6neuron3nir3UseC2EPNS0_5LayerEPNS0_6TensorE(void);

/* Symbol: _ZN6neuron3nir9MeanLayerC2ERKNS0_5ShapeENS0_7OperandENS0_12ConstOperandEb */
/* Demangled: neuron::nir::MeanLayer::MeanLayer(neuron::nir::Shape const&, neuron::nir::Operand, neuron::nir::ConstOperand, bool) */
int _ZN6neuron3nir9MeanLayerC2ERKNS0_5ShapeENS0_7OperandENS0_12ConstOperandEb(void);

/* Symbol: __bss_start__ */
/* Demangled: __bss_start__ */
extern void* __bss_start__;

/* Symbol: _ZNSt6__ndk111char_traitsIcE4copyEPcPKcm */
/* Demangled: std::__ndk1::char_traits<char>::copy(char*, char const*, unsigned long) */
int _ZNSt6__ndk111char_traitsIcE4copyEPcPKcm(void);

/* Symbol: _ZNK6neuron3nir10Dimensions7GetSizeEv */
/* Demangled: neuron::nir::Dimensions::GetSize() const */
int _ZNK6neuron3nir10Dimensions7GetSizeEv(void);

/* Symbol: _ZNSt6__ndk113__vector_baseIN6neuron8compiler8TargetIdENS_9allocatorIS3_EEED2Ev */
/* Demangled: std::__ndk1::__vector_base<neuron::compiler::TargetId, std::__ndk1::allocator<neuron::compiler::TargetId> >::~__vector_base() */
int _ZNSt6__ndk113__vector_baseIN6neuron8compiler8TargetIdENS_9allocatorIS3_EEED2Ev(void);

/* Symbol: _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE9showmanycEv */
/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::showmanyc() */
int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE9showmanycEv(void);

/* Symbol: _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm */
/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__init(char const*, unsigned long) */
int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm(void);

/* Symbol: _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5LayerEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE13__lower_boundIiEENS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEERKT_SJ_PNS_15__tree_end_nodeIPNS_16__tree_node_baseISH_EEEE */
/* Demangled: std::__ndk1::__tree_iterator<std::__ndk1::__value_type<int, neuron::nir::Layer*>, std::__ndk1::__tree_node<std::__ndk1::__value_type<int, neuron::nir::Layer*>, void*>*, long> std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Layer*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Layer*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Layer*> > >::__lower_bound<int>(int const&, std::__ndk1::__tree_node<std::__ndk1::__value_type<int, neuron::nir::Layer*>, void*>*, std::__ndk1::__tree_end_node<std::__ndk1::__tree_node_base<void*>*>*) */
int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5LayerEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE13__lower_boundIiEENS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEERKT_SJ_PNS_15__tree_end_nodeIPNS_16__tree_node_baseISH_EEEE(void);

/* Symbol: _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5InputEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE16__construct_nodeIJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSI_IJEEEEEENS_10unique_ptrINS_11__tree_nodeIS6_PvEENS_22__tree_node_destructorINSB_ISQ_EEEEEEDpOT_ */
/* Demangled: std::__ndk1::unique_ptr<std::__ndk1::__tree_node<std::__ndk1::__value_type<int, neuron::nir::Input*>, void*>, std::__ndk1::__tree_node_destructor<std::__ndk1::allocator<std::__ndk1::__tree_node<std::__ndk1::__value_type<int, neuron::nir::Input*>, void*> > > > std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Input*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Input*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Input*> > >::__construct_node<std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<int const&>, std::__ndk1::tuple<> >(std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<int const&>&&, std::__ndk1::tuple<>&&) */
int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5InputEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE16__construct_nodeIJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSI_IJEEEEEENS_10unique_ptrINS_11__tree_nodeIS6_PvEENS_22__tree_node_destructorINSB_ISQ_EEEEEEDpOT_(void);

/* Symbol: _ZN6neuron3nir15BinaryLayerBaseILNS0_5Layer4KindE3ENS0_14ActivationBaseEEC2IJRKNS0_5ShapeEEEENS0_7OperandESA_DpOT_ */
/* Demangled: neuron::nir::BinaryLayerBase<(neuron::nir::Layer::Kind)3, neuron::nir::ActivationBase>::BinaryLayerBase<neuron::nir::Shape const&>(neuron::nir::Operand, neuron::nir::Operand, neuron::nir::Shape const&) */
int _ZN6neuron3nir15BinaryLayerBaseILNS0_5Layer4KindE3ENS0_14ActivationBaseEEC2IJRKNS0_5ShapeEEEENS0_7OperandESA_DpOT_(void);

/* Symbol: _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir8ConstantEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE4findIiEENS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEERKT_ */
/* Demangled: std::__ndk1::__tree_iterator<std::__ndk1::__value_type<int, neuron::nir::Constant*>, std::__ndk1::__tree_node<std::__ndk1::__value_type<int, neuron::nir::Constant*>, void*>*, long> std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Constant*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Constant*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Constant*> > >::find<int>(int const&) */
int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir8ConstantEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE4findIiEENS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEERKT_(void);

/* Symbol: _ZN6neuron13DeviceOptionsC2Ev */
/* Demangled: neuron::DeviceOptions::DeviceOptions() */
int _ZN6neuron13DeviceOptionsC2Ev(void);

/* Symbol: _ZN6neuron3nir12LayerBuilder20CreateFullyConnectedERKNS0_5ShapeENS0_7OperandES5_S5_ */
/* Demangled: neuron::nir::LayerBuilder::CreateFullyConnected(neuron::nir::Shape const&, neuron::nir::Operand, neuron::nir::Operand, neuron::nir::Operand) */
int _ZN6neuron3nir12LayerBuilder20CreateFullyConnectedERKNS0_5ShapeENS0_7OperandES5_S5_(void);

/* Symbol: _ZN6neuron3nir19FullyConnectedLayerC2ERKNS0_5ShapeENS0_7OperandES5_S5_ */
/* Demangled: neuron::nir::FullyConnectedLayer::FullyConnectedLayer(neuron::nir::Shape const&, neuron::nir::Operand, neuron::nir::Operand, neuron::nir::Operand) */
int _ZN6neuron3nir19FullyConnectedLayerC2ERKNS0_5ShapeENS0_7OperandES5_S5_(void);

/* Symbol: _ZN6neuron3nir3Use17InsertIntoUseListEv */
/* Demangled: neuron::nir::Use::InsertIntoUseList() */
int _ZN6neuron3nir3Use17InsertIntoUseListEv(void);

/* Symbol: _ZTVN6neuron10NullStreamE */
/* Demangled: vtable for neuron::NullStream */
extern void* _ZTVN6neuron10NullStreamE;

/* Symbol: _ZNSt6__ndk113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev */
/* Demangled: std::__ndk1::__vector_base<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::~__vector_base() */
int _ZNSt6__ndk113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev(void);

/* Symbol: _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5LayerEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEED2Ev */
/* Demangled: std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Layer*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Layer*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Layer*> > >::~__tree() */
int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5LayerEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEED2Ev(void);

/* Symbol: _ZNSt6__ndk16vectorIPN6neuron3nir6TensorENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE */
/* Demangled: std::__ndk1::vector<neuron::nir::Tensor*, std::__ndk1::allocator<neuron::nir::Tensor*> >::__swap_out_circular_buffer(std::__ndk1::__split_buffer<neuron::nir::Tensor*, std::__ndk1::allocator<neuron::nir::Tensor*>&>&) */
int _ZNSt6__ndk16vectorIPN6neuron3nir6TensorENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE(void);

/* Symbol: _ZNSt6__ndk1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE */
/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >& std::__ndk1::operator<< <char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
int _ZNSt6__ndk1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE(void);

/* Symbol: _ZN6neuron3nir10DimensionsC2ENS_8ArrayRefIKjEE */
/* Demangled: neuron::nir::Dimensions::Dimensions(neuron::ArrayRef<unsigned int const>) */
int _ZN6neuron3nir10DimensionsC2ENS_8ArrayRefIKjEE(void);

/* Symbol: _ZN11ApuFrontend4Impl19PrepareInputTensorsEiPK10apu_tensorRN6neuron3nir5GraphE */
/* Demangled: ApuFrontend::Impl::PrepareInputTensors(int, apu_tensor const*, neuron::nir::Graph&) */
int _ZN11ApuFrontend4Impl19PrepareInputTensorsEiPK10apu_tensorRN6neuron3nir5GraphE(void);

/* Symbol: _ZNSt6__ndk115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi */
/* Demangled: std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::overflow(int) */
int _ZNSt6__ndk115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void);

/* Symbol: _ZNK6neuron3nir11QuantParams16IsSamePerChannelIfEEbNS_8ArrayRefIT_EE */
/* Demangled: bool neuron::nir::QuantParams::IsSamePerChannel<float>(neuron::ArrayRef<float>) const */
int _ZNK6neuron3nir11QuantParams16IsSamePerChannelIfEEbNS_8ArrayRefIT_EE(void);

/* Symbol: _bss_end__ */
/* Demangled: _bss_end__ */
extern void* _bss_end__;

/* Symbol: _ZN6neuron11Environment9InferenceENS_16InferenceOptionsE */
/* Demangled: neuron::Environment::Inference(neuron::InferenceOptions) */
int _ZN6neuron11Environment9InferenceENS_16InferenceOptionsE(void);

/* Symbol: _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKcm */
/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(char const*, unsigned long) */
int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKcm(void);

/* Symbol: _ZTCN6neuron10NullStreamE0_NSt6__ndk113basic_ostreamIcNS0_11char_traitsIcEEEE */
/* Demangled: construction vtable for std::__ndk1::basic_ostream<char, neuron::NullStream::char_traits<char> >-in-neuron::NullStream */
extern void* _ZTCN6neuron10NullStreamE0_NSt6__ndk113basic_ostreamIcNS0_11char_traitsIcEEEE;

/* Symbol: _ZN6neuron3nir5GraphC2ERNS0_5ModelE */
/* Demangled: neuron::nir::Graph::Graph(neuron::nir::Model&) */
int _ZN6neuron3nir5GraphC2ERNS0_5ModelE(void);

/* Symbol: _ZNSt6__ndk116allocator_traitsINS_9allocatorIPN6neuron3nir6TensorEEEE20__construct_backwardIS5_EENS_9enable_ifIXaaooL_ZNS_17integral_constantIbLb1EE5valueEEntsr15__has_constructIS6_PT_SC_EE5valuesr31is_trivially_move_constructibleISC_EE5valueEvE4typeERS6_SD_SD_RSD_ */
/* Demangled: _ZNSt6__ndk116allocator_traitsINS_9allocatorIPN6neuron3nir6TensorEEEE20__construct_backwardIS5_EENS_9enable_ifIXaaooL_ZNS_17integral_constantIbLb1EE5valueEEntsr15__has_constructIS6_PT_SC_EE5valuesr31is_trivially_move_constructibleISC_EE5valueEvE4typeERS6_SD_SD_RSD_ */
int _ZNSt6__ndk116allocator_traitsINS_9allocatorIPN6neuron3nir6TensorEEEE20__construct_backwardIS5_EENS_9enable_ifIXaaooL_ZNS_17integral_constantIbLb1EE5valueEEntsr15__has_constructIS6_PT_SC_EE5valuesr31is_trivially_move_constructibleISC_EE5valueEvE4typeERS6_SD_SD_RSD_(void);

/* Symbol: _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE6xsputnEPKcl */
/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::xsputn(char const*, long) */
int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE6xsputnEPKcl(void);

/* Symbol: _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEmc */
/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__init(unsigned long, char) */
int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEmc(void);

/* Symbol: _ZN6neuron3nir16FixedOperandListILm3EEC2IJRNS0_7OperandES5_S5_EEEPNS0_5LayerEDpOT_ */
/* Demangled: neuron::nir::FixedOperandList<3ul>::FixedOperandList<neuron::nir::Operand&, neuron::nir::Operand&, neuron::nir::Operand&>(neuron::nir::Layer*, neuron::nir::Operand&, neuron::nir::Operand&, neuron::nir::Operand&) */
int _ZN6neuron3nir16FixedOperandListILm3EEC2IJRNS0_7OperandES5_S5_EEEPNS0_5LayerEDpOT_(void);

/* Symbol: _ZN6neuron3nir16FixedOperandListILm2EEC2IJRNS0_7OperandES5_EEEPNS0_5LayerEDpOT_ */
/* Demangled: neuron::nir::FixedOperandList<2ul>::FixedOperandList<neuron::nir::Operand&, neuron::nir::Operand&>(neuron::nir::Layer*, neuron::nir::Operand&, neuron::nir::Operand&) */
int _ZN6neuron3nir16FixedOperandListILm2EEC2IJRNS0_7OperandES5_EEEPNS0_5LayerEDpOT_(void);

/* Symbol: _ZN6neuron10NullStream10NullBufferD0Ev */
/* Demangled: neuron::NullStream::NullBuffer::~NullBuffer() */
int _ZN6neuron10NullStream10NullBufferD0Ev(void);

/* Symbol: _ZNSt6__ndk113__vector_baseIPN6neuron3nir6TensorENS_9allocatorIS4_EEED2Ev */
/* Demangled: std::__ndk1::__vector_base<neuron::nir::Tensor*, std::__ndk1::allocator<neuron::nir::Tensor*> >::~__vector_base() */
int _ZNSt6__ndk113__vector_baseIPN6neuron3nir6TensorENS_9allocatorIS4_EEED2Ev(void);

/* Symbol: _ZN11ApuFrontend4ImplC2Ev */
/* Demangled: ApuFrontend::Impl::Impl() */
int _ZN11ApuFrontend4ImplC2Ev(void);

/* Symbol: _ZN6neuron3nir5Shape7InvalidEv */
/* Demangled: neuron::nir::Shape::Invalid() */
int _ZN6neuron3nir5Shape7InvalidEv(void);

/* Symbol: _ZN11ApuFrontend4Impl9MapConcatEPK12apu_operatorPK10apu_tensor */
/* Demangled: ApuFrontend::Impl::MapConcat(apu_operator const*, apu_tensor const*) */
int _ZN11ApuFrontend4Impl9MapConcatEPK12apu_operatorPK10apu_tensor(void);

/* Symbol: _ZNSt6__ndk114__split_bufferINS_4pairIPKviEERNS_9allocatorIS4_EEED2Ev */
/* Demangled: std::__ndk1::__split_buffer<std::__ndk1::pair<void const*, int>, std::__ndk1::allocator<std::__ndk1::pair<void const*, int> >&>::~__split_buffer() */
int _ZNSt6__ndk114__split_bufferINS_4pairIPKviEERNS_9allocatorIS4_EEED2Ev(void);

/* Symbol: _ZN6neuron3nir12LayerBuilder9CreatePadERKNS0_5ShapeENS0_7OperandEPNS0_8ConstantEPNS0_6TensorE */
/* Demangled: neuron::nir::LayerBuilder::CreatePad(neuron::nir::Shape const&, neuron::nir::Operand, neuron::nir::Constant*, neuron::nir::Tensor*) */
int _ZN6neuron3nir12LayerBuilder9CreatePadERKNS0_5ShapeENS0_7OperandEPNS0_8ConstantEPNS0_6TensorE(void);

/* Symbol: _ZTTN6neuron10NullStreamE */
/* Demangled: VTT for neuron::NullStream */
extern void* _ZTTN6neuron10NullStreamE;

/* Symbol: _ZNSt6__ndk113__vector_baseINS_4pairIPKviEENS_9allocatorIS4_EEED2Ev */
/* Demangled: std::__ndk1::__vector_base<std::__ndk1::pair<void const*, int>, std::__ndk1::allocator<std::__ndk1::pair<void const*, int> > >::~__vector_base() */
int _ZNSt6__ndk113__vector_baseINS_4pairIPKviEENS_9allocatorIS4_EEED2Ev(void);

/* Symbol: _ZN6neuron8compiler15CompilerOptionsC2Ev */
/* Demangled: neuron::compiler::CompilerOptions::CompilerOptions() */
int _ZN6neuron8compiler15CompilerOptionsC2Ev(void);

/* Symbol: _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::seekoff(long long, std::__ndk1::ios_base::seekdir, unsigned int) */
int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZN6neuron11SmallVectorIjLj4EEC2ESt16initializer_listIjE */
/* Demangled: neuron::SmallVector<unsigned int, 4u>::SmallVector(std::initializer_list<unsigned int>) */
int _ZN6neuron11SmallVectorIjLj4EEC2ESt16initializer_listIjE(void);

/* Symbol: _ZN6neuron6iplistINS_3nir5GraphENS1_15GraphListTraitsEE9push_backEPS2_ */
/* Demangled: neuron::iplist<neuron::nir::Graph, neuron::nir::GraphListTraits>::push_back(neuron::nir::Graph*) */
int _ZN6neuron6iplistINS_3nir5GraphENS1_15GraphListTraitsEE9push_backEPS2_(void);

/* Symbol: _ZN11ApuFrontend4Impl13MapOperationsEiPK12apu_operatorPK10apu_tensor */
/* Demangled: ApuFrontend::Impl::MapOperations(int, apu_operator const*, apu_tensor const*) */
int _ZN11ApuFrontend4Impl13MapOperationsEiPK12apu_operatorPK10apu_tensor(void);

/* Symbol: _ZN11ApuFrontend4Impl10MapSoftmaxEPK12apu_operatorPK10apu_tensor */
/* Demangled: ApuFrontend::Impl::MapSoftmax(apu_operator const*, apu_tensor const*) */
int _ZN11ApuFrontend4Impl10MapSoftmaxEPK12apu_operatorPK10apu_tensor(void);

/* Symbol: _ZN6neuron3nir12LayerBuilder11CreatePReluERKNS0_5ShapeENS0_7OperandES5_ */
/* Demangled: neuron::nir::LayerBuilder::CreatePRelu(neuron::nir::Shape const&, neuron::nir::Operand, neuron::nir::Operand) */
int _ZN6neuron3nir12LayerBuilder11CreatePReluERKNS0_5ShapeENS0_7OperandES5_(void);

/* Symbol: _ZN6neuron6iplistINS_3nir5GraphENS1_15GraphListTraitsEE5eraseENS_14ilist_iteratorIS2_EES6_ */
/* Demangled: neuron::iplist<neuron::nir::Graph, neuron::nir::GraphListTraits>::erase(neuron::ilist_iterator<neuron::nir::Graph>, neuron::ilist_iterator<neuron::nir::Graph>) */
int _ZN6neuron6iplistINS_3nir5GraphENS1_15GraphListTraitsEE5eraseENS_14ilist_iteratorIS2_EES6_(void);

/* Symbol: _ZN6neuron3nir8PipelineC2ERKNSt6__ndk112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEb */
/* Demangled: neuron::nir::Pipeline::Pipeline(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool) */
int _ZN6neuron3nir8PipelineC2ERKNSt6__ndk112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEb(void);

/* Symbol: _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir8ConstantEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEED2Ev */
/* Demangled: std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Constant*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Constant*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Constant*> > >::~__tree() */
int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir8ConstantEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEED2Ev(void);

/* Symbol: _ZN6neuron11SmallVectorIjLj4EEC2IPKjEET_S5_ */
/* Demangled: neuron::SmallVector<unsigned int, 4u>::SmallVector<unsigned int const*>(unsigned int const*, unsigned int const*) */
int _ZN6neuron11SmallVectorIjLj4EEC2IPKjEET_S5_(void);

/* Symbol: _ZNSt6__ndk114__split_bufferINS_10unique_ptrIN6neuron3nir6TensorENS3_13TensorDeleterEEERNS_9allocatorIS6_EEED2Ev */
/* Demangled: std::__ndk1::__split_buffer<std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter>, std::__ndk1::allocator<std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter> >&>::~__split_buffer() */
int _ZNSt6__ndk114__split_bufferINS_10unique_ptrIN6neuron3nir6TensorENS3_13TensorDeleterEEERNS_9allocatorIS6_EEED2Ev(void);

/* Symbol: _ZN6neuron3nir6TensorC2ENS1_4KindERKNS0_5ShapeE */
/* Demangled: neuron::nir::Tensor::Tensor(neuron::nir::Tensor::Kind, neuron::nir::Shape const&) */
int _ZN6neuron3nir6TensorC2ENS1_4KindERKNS0_5ShapeE(void);

/* Symbol: _ZN6neuron6iplistINS_3nir5LayerENS1_15LayerListTraitsEED2Ev */
/* Demangled: neuron::iplist<neuron::nir::Layer, neuron::nir::LayerListTraits>::~iplist() */
int _ZN6neuron6iplistINS_3nir5LayerENS1_15LayerListTraitsEED2Ev(void);

/* Symbol: _ZN6neuron3nir7InvalidC2Ev */
/* Demangled: neuron::nir::Invalid::Invalid() */
int _ZN6neuron3nir7InvalidC2Ev(void);

/* Symbol: _ZN11ApuFrontendC1Ev */
/* Demangled: ApuFrontend::ApuFrontend() */
int _ZN11ApuFrontendC1Ev(void);

/* Symbol: _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEEC2Ev */
/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::basic_streambuf() */
int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEEC2Ev(void);

/* Symbol: _ZN6neuron3nir11PassBuilder5BuildEv */
/* Demangled: neuron::nir::PassBuilder::Build() */
int _ZN6neuron3nir11PassBuilder5BuildEv(void);

/* Symbol: _ZTVNSt6__ndk115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > */
extern void* _ZTVNSt6__ndk115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZNK6neuron3nir7Context9AddTensorINS0_7InvalidEEEPT_S5_ */
/* Demangled: neuron::nir::Invalid* neuron::nir::Context::AddTensor<neuron::nir::Invalid>(neuron::nir::Invalid*) const */
int _ZNK6neuron3nir7Context9AddTensorINS0_7InvalidEEEPT_S5_(void);

/* Symbol: _ZTVN6neuron10NullStream10NullBufferE */
/* Demangled: vtable for neuron::NullStream::NullBuffer */
extern void* _ZTVN6neuron10NullStream10NullBufferE;

/* Symbol: _ZN11ApuFrontend4Impl7MapMeanEPK12apu_operatorPK10apu_tensor */
/* Demangled: ApuFrontend::Impl::MapMean(apu_operator const*, apu_tensor const*) */
int _ZN11ApuFrontend4Impl7MapMeanEPK12apu_operatorPK10apu_tensor(void);

/* Symbol: _ZNK6neuron3nir5Layer10GetOperandEj */
/* Demangled: neuron::nir::Layer::GetOperand(unsigned int) const */
int _ZNK6neuron3nir5Layer10GetOperandEj(void);

/* Symbol: _ZN11ApuFrontend9InitGraphEiPK10apu_tensoriS2_iS2_iPK12apu_operatorbPKcbb */
/* Demangled: ApuFrontend::InitGraph(int, apu_tensor const*, int, apu_tensor const*, int, apu_tensor const*, int, apu_operator const*, bool, char const*, bool, bool) */
int _ZN11ApuFrontend9InitGraphEiPK10apu_tensoriS2_iS2_iPK12apu_operatorbPKcbb(void);

/* Symbol: _ZN6neuron3nir16TernaryLayerBaseILNS0_5Layer4KindE22ENS0_15ConvolutionBaseEEC2IJRKNS0_5ShapeEEEENS0_7OperandESA_SA_DpOT_ */
/* Demangled: neuron::nir::TernaryLayerBase<(neuron::nir::Layer::Kind)22, neuron::nir::ConvolutionBase>::TernaryLayerBase<neuron::nir::Shape const&>(neuron::nir::Operand, neuron::nir::Operand, neuron::nir::Operand, neuron::nir::Shape const&) */
int _ZN6neuron3nir16TernaryLayerBaseILNS0_5Layer4KindE22ENS0_15ConvolutionBaseEEC2IJRKNS0_5ShapeEEEENS0_7OperandESA_SA_DpOT_(void);

/* Symbol: _ZN6neuron3nir12SoftMaxLayerC2ERKNS0_5ShapeENS0_7OperandEfi */
/* Demangled: neuron::nir::SoftMaxLayer::SoftMaxLayer(neuron::nir::Shape const&, neuron::nir::Operand, float, int) */
int _ZN6neuron3nir12SoftMaxLayerC2ERKNS0_5ShapeENS0_7OperandEfi(void);

/* Symbol: _ZTv0_n24_NSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEED0Ev */
/* Demangled: virtual thunk to std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::~basic_ostream() */
int _ZTv0_n24_NSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEED0Ev(void);

/* Symbol: _ZN6neuron3nir17SingleOutputLayerC2ENS0_5Layer4KindERKNS0_5ShapeE */
/* Demangled: neuron::nir::SingleOutputLayer::SingleOutputLayer(neuron::nir::Layer::Kind, neuron::nir::Shape const&) */
int _ZN6neuron3nir17SingleOutputLayerC2ENS0_5Layer4KindERKNS0_5ShapeE(void);

/* Symbol: _ZNK6neuron3nir10BasicShape15GetPhysicalSizeEv */
/* Demangled: neuron::nir::BasicShape::GetPhysicalSize() const */
int _ZNK6neuron3nir10BasicShape15GetPhysicalSizeEv(void);

/* Symbol: _ZTCNSt6__ndk119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > */
extern void* _ZTCNSt6__ndk119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE;

/* Symbol: _ZN6neuron3nir9OptimizerD2Ev */
/* Demangled: neuron::nir::Optimizer::~Optimizer() */
int _ZN6neuron3nir9OptimizerD2Ev(void);

/* Symbol: _ZNSt6__ndk16vectorINS_10unique_ptrIN6neuron3nir6TensorENS3_13TensorDeleterEEENS_9allocatorIS6_EEE12emplace_backIJRPNS3_8ConstantEEEERS6_DpOT_ */
/* Demangled: std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter>& std::__ndk1::vector<std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter>, std::__ndk1::allocator<std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter> > >::emplace_back<neuron::nir::Constant*&>(neuron::nir::Constant*&) */
int _ZNSt6__ndk16vectorINS_10unique_ptrIN6neuron3nir6TensorENS3_13TensorDeleterEEENS_9allocatorIS6_EEE12emplace_backIJRPNS3_8ConstantEEEERS6_DpOT_(void);

/* Symbol: _ZN6neuron3nir8Constant6CreateERKNS0_7ContextERKNS0_5ShapeEPKv */
/* Demangled: neuron::nir::Constant::Create(neuron::nir::Context const&, neuron::nir::Shape const&, void const*) */
int _ZN6neuron3nir8Constant6CreateERKNS0_7ContextERKNS0_5ShapeEPKv(void);

/* Symbol: _ZN6neuron3nir12LayerBuilder13CreateReshapeERKNS0_5ShapeENS0_7OperandE */
/* Demangled: neuron::nir::LayerBuilder::CreateReshape(neuron::nir::Shape const&, neuron::nir::Operand) */
int _ZN6neuron3nir12LayerBuilder13CreateReshapeERKNS0_5ShapeENS0_7OperandE(void);

/* Symbol: _ZN6neuron3nir14UnaryLayerBaseILNS0_5Layer4KindE66ENS0_17SingleOutputLayerEEC2IJRKNS0_5ShapeEEEENS0_7OperandEDpOT_ */
/* Demangled: neuron::nir::UnaryLayerBase<(neuron::nir::Layer::Kind)66, neuron::nir::SingleOutputLayer>::UnaryLayerBase<neuron::nir::Shape const&>(neuron::nir::Operand, neuron::nir::Shape const&) */
int _ZN6neuron3nir14UnaryLayerBaseILNS0_5Layer4KindE66ENS0_17SingleOutputLayerEEC2IJRKNS0_5ShapeEEEENS0_7OperandEDpOT_(void);

/* Symbol: _ZN11ApuFrontend4Impl11UninitGraphEv */
/* Demangled: ApuFrontend::Impl::UninitGraph() */
int _ZN11ApuFrontend4Impl11UninitGraphEv(void);

/* Symbol: _ZN6neuron3nir12LayerBuilder21CreateTransposeConv2DERKNS0_5ShapeENS0_7OperandES5_S5_RKNS_6NNSizeERKNS_9NNPaddingES8_ */
/* Demangled: neuron::nir::LayerBuilder::CreateTransposeConv2D(neuron::nir::Shape const&, neuron::nir::Operand, neuron::nir::Operand, neuron::nir::Operand, neuron::NNSize const&, neuron::NNPadding const&, neuron::NNSize const&) */
int _ZN6neuron3nir12LayerBuilder21CreateTransposeConv2DERKNS0_5ShapeENS0_7OperandES5_S5_RKNS_6NNSizeERKNS_9NNPaddingES8_(void);

/* Symbol: _ZNSt6__ndk16vectorINS_4pairIPviEENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_ */
/* Demangled: void std::__ndk1::vector<std::__ndk1::pair<void*, int>, std::__ndk1::allocator<std::__ndk1::pair<void*, int> > >::__push_back_slow_path<std::__ndk1::pair<void*, int> >(std::__ndk1::pair<void*, int>&&) */
int _ZNSt6__ndk16vectorINS_4pairIPviEENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_(void);

/* Symbol: _ZNK6neuron3nir11QuantParams16IsSamePerChannelIiEEbNS_8ArrayRefIT_EE */
/* Demangled: bool neuron::nir::QuantParams::IsSamePerChannel<int>(neuron::ArrayRef<int>) const */
int _ZNK6neuron3nir11QuantParams16IsSamePerChannelIiEEbNS_8ArrayRefIT_EE(void);

/* Symbol: _ZN6neuron6iplistINS_3nir5GraphENS1_15GraphListTraitsEE5eraseENS_14ilist_iteratorIS2_EE */
/* Demangled: neuron::iplist<neuron::nir::Graph, neuron::nir::GraphListTraits>::erase(neuron::ilist_iterator<neuron::nir::Graph>) */
int _ZN6neuron6iplistINS_3nir5GraphENS1_15GraphListTraitsEE5eraseENS_14ilist_iteratorIS2_EE(void);

/* Symbol: _ZN11ApuFrontend4Impl9InitGraphEiPK10apu_tensoriS3_iS3_iPK12apu_operatorbPKcbb */
/* Demangled: ApuFrontend::Impl::InitGraph(int, apu_tensor const*, int, apu_tensor const*, int, apu_tensor const*, int, apu_operator const*, bool, char const*, bool, bool) */
int _ZN11ApuFrontend4Impl9InitGraphEiPK10apu_tensoriS3_iS3_iPK12apu_operatorbPKcbb(void);

/* Symbol: _ZN6neuron3nir15BinaryLayerBaseILNS0_5Layer4KindE24ENS0_15ElementWiseBaseEEC2IJRKNS0_5ShapeEEEENS0_7OperandESA_DpOT_ */
/* Demangled: neuron::nir::BinaryLayerBase<(neuron::nir::Layer::Kind)24, neuron::nir::ElementWiseBase>::BinaryLayerBase<neuron::nir::Shape const&>(neuron::nir::Operand, neuron::nir::Operand, neuron::nir::Shape const&) */
int _ZN6neuron3nir15BinaryLayerBaseILNS0_5Layer4KindE24ENS0_15ElementWiseBaseEEC2IJRKNS0_5ShapeEEEENS0_7OperandESA_DpOT_(void);

/* Symbol: _ZTVNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> > */
extern void* _ZTVNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEEE;

/* Symbol: _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir8ConstantEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE16__construct_nodeIJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSI_IJEEEEEENS_10unique_ptrINS_11__tree_nodeIS6_PvEENS_22__tree_node_destructorINSB_ISQ_EEEEEEDpOT_ */
/* Demangled: std::__ndk1::unique_ptr<std::__ndk1::__tree_node<std::__ndk1::__value_type<int, neuron::nir::Constant*>, void*>, std::__ndk1::__tree_node_destructor<std::__ndk1::allocator<std::__ndk1::__tree_node<std::__ndk1::__value_type<int, neuron::nir::Constant*>, void*> > > > std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Constant*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Constant*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Constant*> > >::__construct_node<std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<int const&>, std::__ndk1::tuple<> >(std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<int const&>&&, std::__ndk1::tuple<>&&) */
int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir8ConstantEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE16__construct_nodeIJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSI_IJEEEEEENS_10unique_ptrINS_11__tree_nodeIS6_PvEENS_22__tree_node_destructorINSB_ISQ_EEEEEEDpOT_(void);

/* Symbol: _ZN6neuron15SmallVectorImplIjE6appendESt16initializer_listIjE */
/* Demangled: neuron::SmallVectorImpl<unsigned int>::append(std::initializer_list<unsigned int>) */
int _ZN6neuron15SmallVectorImplIjE6appendESt16initializer_listIjE(void);

/* Symbol: _ZN11ApuFrontend4Impl10MapPoolingEPK12apu_operatorPK10apu_tensor */
/* Demangled: ApuFrontend::Impl::MapPooling(apu_operator const*, apu_tensor const*) */
int _ZN11ApuFrontend4Impl10MapPoolingEPK12apu_operatorPK10apu_tensor(void);

/* Symbol: _ZN6neuron3nir5ShapeC2ENS0_8DataTypeENS_8ArrayRefIKjEERKNS0_11QuantParamsE */
/* Demangled: neuron::nir::Shape::Shape(neuron::nir::DataType, neuron::ArrayRef<unsigned int const>, neuron::nir::QuantParams const&) */
int _ZN6neuron3nir5ShapeC2ENS0_8DataTypeENS_8ArrayRefIKjEERKNS0_11QuantParamsE(void);

/* Symbol: _ZNK6neuron3nir15ConvolutionBase9GetWeightEv */
/* Demangled: neuron::nir::ConvolutionBase::GetWeight() const */
int _ZNK6neuron3nir15ConvolutionBase9GetWeightEv(void);

/* Symbol: _ZN11ApuFrontend4Impl17MapResizeBilinearEPK12apu_operatorPK10apu_tensor */
/* Demangled: ApuFrontend::Impl::MapResizeBilinear(apu_operator const*, apu_tensor const*) */
int _ZN11ApuFrontend4Impl17MapResizeBilinearEPK12apu_operatorPK10apu_tensor(void);

/* Symbol: _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5LayerEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSI_IJEEEEEENS_4pairINS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEEbEERKT_DpOT0_ */
/* Demangled: std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<int, neuron::nir::Layer*>, std::__ndk1::__tree_node<std::__ndk1::__value_type<int, neuron::nir::Layer*>, void*>*, long>, bool> std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Layer*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Layer*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Layer*> > >::__emplace_unique_key_args<int, std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<int const&>, std::__ndk1::tuple<> >(int const&, std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<int const&>&&, std::__ndk1::tuple<>&&) */
int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5LayerEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSI_IJEEEEEENS_4pairINS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEEbEERKT_DpOT0_(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZNSt6__ndk115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv */
/* Demangled: std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::underflow() */
int _ZNSt6__ndk115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void);

/* Symbol: _ZN6neuron3nir7ContextD2Ev */
/* Demangled: neuron::nir::Context::~Context() */
int _ZN6neuron3nir7ContextD2Ev(void);

/* Symbol: _ZN6neuron10NullStreamD0Ev */
/* Demangled: neuron::NullStream::~NullStream() */
int _ZN6neuron10NullStreamD0Ev(void);

/* Symbol: _ZN11ApuFrontendC2Ev */
/* Demangled: ApuFrontend::ApuFrontend() */
int _ZN11ApuFrontendC2Ev(void);

/* Symbol: _ZN11ApuFrontend4Impl18MapDepthwiseConv2DEPK12apu_operatorPK10apu_tensor */
/* Demangled: ApuFrontend::Impl::MapDepthwiseConv2D(apu_operator const*, apu_tensor const*) */
int _ZN11ApuFrontend4Impl18MapDepthwiseConv2DEPK12apu_operatorPK10apu_tensor(void);

/* Symbol: _ZN6neuron3nir6IOLink11SanityCheckEmb */
/* Demangled: neuron::nir::IOLink::SanityCheck(unsigned long, bool) */
int _ZN6neuron3nir6IOLink11SanityCheckEmb(void);

/* Symbol: _ZNK6neuron8compiler12CompilerBase15GetTargetReportERKNS_3nir5ModelE */
/* Demangled: neuron::compiler::CompilerBase::GetTargetReport(neuron::nir::Model const&) const */
int _ZNK6neuron8compiler12CompilerBase15GetTargetReportERKNS_3nir5ModelE(void);

/* Symbol: _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEmc */
/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(unsigned long, char) */
int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEmc(void);

/* Symbol: _ZN11ApuFrontend4Impl9MapConv2DEPK12apu_operatorPK10apu_tensor */
/* Demangled: ApuFrontend::Impl::MapConv2D(apu_operator const*, apu_tensor const*) */
int _ZN11ApuFrontend4Impl9MapConv2DEPK12apu_operatorPK10apu_tensor(void);

/* Symbol: _ZNSt6__ndk114__split_bufferINS_4pairIPviEERNS_9allocatorIS3_EEED2Ev */
/* Demangled: std::__ndk1::__split_buffer<std::__ndk1::pair<void*, int>, std::__ndk1::allocator<std::__ndk1::pair<void*, int> >&>::~__split_buffer() */
int _ZNSt6__ndk114__split_bufferINS_4pairIPviEERNS_9allocatorIS3_EEED2Ev(void);

/* Symbol: _ZTv0_n24_NSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEED1Ev */
/* Demangled: virtual thunk to std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::~basic_ostream() */
int _ZTv0_n24_NSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEED1Ev(void);

/* Symbol: _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE3putEc */
/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::put(char) */
int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE3putEc(void);

/* Symbol: _ZNSt6__ndk16vectorINS_4pairIPKviEENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_ */
/* Demangled: void std::__ndk1::vector<std::__ndk1::pair<void const*, int>, std::__ndk1::allocator<std::__ndk1::pair<void const*, int> > >::__push_back_slow_path<std::__ndk1::pair<void const*, int> >(std::__ndk1::pair<void const*, int>&&) */
int _ZNSt6__ndk16vectorINS_4pairIPKviEENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_(void);

/* Symbol: _ZN6neuron13AndroidLoggerILNS_11LogSeverityE1EE6streamEv */
/* Demangled: neuron::AndroidLogger<(neuron::LogSeverity)1>::stream() */
int _ZN6neuron13AndroidLoggerILNS_11LogSeverityE1EE6streamEv(void);

/* Symbol: _ZN6neuron3nir11ConcatLayer6CreateERKNS0_7ContextERKNS0_5ShapeENS_8ArrayRefIPNS0_6TensorEEEi */
/* Demangled: neuron::nir::ConcatLayer::Create(neuron::nir::Context const&, neuron::nir::Shape const&, neuron::ArrayRef<neuron::nir::Tensor*>, int) */
int _ZN6neuron3nir11ConcatLayer6CreateERKNS0_7ContextERKNS0_5ShapeENS_8ArrayRefIPNS0_6TensorEEEi(void);

/* Symbol: _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_10unique_ptrIN6neuron3nir6TensorENS4_13TensorDeleterEEEEEE20__construct_backwardIPS7_EEvRS8_T_SD_RSD_ */
/* Demangled: void std::__ndk1::allocator_traits<std::__ndk1::allocator<std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter> > >::__construct_backward<std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter>*>(std::__ndk1::allocator<std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter> >&, std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter>*, std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter>*, std::__ndk1::unique_ptr<neuron::nir::Tensor, neuron::nir::TensorDeleter>*&) */
int _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_10unique_ptrIN6neuron3nir6TensorENS4_13TensorDeleterEEEEEE20__construct_backwardIPS7_EEvRS8_T_SD_RSD_(void);

/* Symbol: _ZN6neuron3nir12LayerBuilder13CreatePoolingERKNS0_5ShapeENS0_7OperandENS0_12PoolingLayer4ModeERKNS_9NNPaddingERKNS_6NNSizeESD_ */
/* Demangled: neuron::nir::LayerBuilder::CreatePooling(neuron::nir::Shape const&, neuron::nir::Operand, neuron::nir::PoolingLayer::Mode, neuron::NNPadding const&, neuron::NNSize const&, neuron::NNSize const&) */
int _ZN6neuron3nir12LayerBuilder13CreatePoolingERKNS0_5ShapeENS0_7OperandENS0_12PoolingLayer4ModeERKNS_9NNPaddingERKNS_6NNSizeESD_(void);

/* Symbol: _ZN11ApuFrontend4Impl17MapFullyConnectedEPK12apu_operator */
/* Demangled: ApuFrontend::Impl::MapFullyConnected(apu_operator const*) */
int _ZN11ApuFrontend4Impl17MapFullyConnectedEPK12apu_operator(void);

/* Symbol: _ZN6neuron3nir5ValueC2ENS0_6Tensor4KindERKNS0_5ShapeEPKv */
/* Demangled: neuron::nir::Value::Value(neuron::nir::Tensor::Kind, neuron::nir::Shape const&, void const*) */
int _ZN6neuron3nir5ValueC2ENS0_6Tensor4KindERKNS0_5ShapeEPKv(void);

/* Symbol: _ZNSt6__ndk13mapIiPN6neuron3nir5InputENS_4lessIiEENS_9allocatorINS_4pairIKiS4_EEEEEixERS9_ */
/* Demangled: std::__ndk1::map<int, neuron::nir::Input*, std::__ndk1::less<int>, std::__ndk1::allocator<std::__ndk1::pair<int const, neuron::nir::Input*> > >::operator[](int const&) */
int _ZNSt6__ndk13mapIiPN6neuron3nir5InputENS_4lessIiEENS_9allocatorINS_4pairIKiS4_EEEEEixERS9_(void);

/* Symbol: _ZNSt6__ndk118__tree_left_rotateIPNS_16__tree_node_baseIPvEEEEvT_ */
/* Demangled: void std::__ndk1::__tree_left_rotate<std::__ndk1::__tree_node_base<void*>*>(std::__ndk1::__tree_node_base<void*>*) */
int _ZNSt6__ndk118__tree_left_rotateIPNS_16__tree_node_baseIPvEEEEvT_(void);

/* Symbol: _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE9underflowEv */
/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::underflow() */
int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE9underflowEv(void);

/* Symbol: _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initIPcEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES9_S9_ */
/* Demangled: _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initIPcEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES9_S9_ */
int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initIPcEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES9_S9_(void);

/* Symbol: _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir8ConstantEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSI_SI_ */
/* Demangled: std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Constant*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Constant*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Constant*> > >::__insert_node_at(std::__ndk1::__tree_end_node<std::__ndk1::__tree_node_base<void*>*>*, std::__ndk1::__tree_node_base<void*>*&, std::__ndk1::__tree_node_base<void*>*) */
int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir8ConstantEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSI_SI_(void);

/* Symbol: _ZN6neuron6iplistINS_3nir5LayerENS1_15LayerListTraitsEE5clearEv */
/* Demangled: neuron::iplist<neuron::nir::Layer, neuron::nir::LayerListTraits>::clear() */
int _ZN6neuron6iplistINS_3nir5LayerENS1_15LayerListTraitsEE5clearEv(void);

/* Symbol: _ZN6neuron3nir12LayerBuilder10GetInvalidEv */
/* Demangled: neuron::nir::LayerBuilder::GetInvalid() */
int _ZN6neuron3nir12LayerBuilder10GetInvalidEv(void);

/* Symbol: _ZNSt6__ndk115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::seekoff(long long, std::__ndk1::ios_base::seekdir, unsigned int) */
int _ZNSt6__ndk115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZNSt6__ndk114__split_bufferIPN6neuron3nir6TensorERNS_9allocatorIS4_EEED2Ev */
/* Demangled: std::__ndk1::__split_buffer<neuron::nir::Tensor*, std::__ndk1::allocator<neuron::nir::Tensor*>&>::~__split_buffer() */
int _ZNSt6__ndk114__split_bufferIPN6neuron3nir6TensorERNS_9allocatorIS4_EEED2Ev(void);

/* Symbol: _ZNSt6__ndk115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE */
/* Demangled: std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::str(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
int _ZNSt6__ndk115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE(void);

/* Symbol: _ZNSt6__ndk115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi */
/* Demangled: std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::pbackfail(int) */
int _ZNSt6__ndk115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void);

/* Symbol: _ZN6neuron6iplistINS_3nir5GraphENS1_15GraphListTraitsEED2Ev */
/* Demangled: neuron::iplist<neuron::nir::Graph, neuron::nir::GraphListTraits>::~iplist() */
int _ZN6neuron6iplistINS_3nir5GraphENS1_15GraphListTraitsEED2Ev(void);

/* Symbol: _ZN6neuron3nir12LayerBuilder9SetOutputENS0_7OperandEmb */
/* Demangled: neuron::nir::LayerBuilder::SetOutput(neuron::nir::Operand, unsigned long, bool) */
int _ZN6neuron3nir12LayerBuilder9SetOutputENS0_7OperandEmb(void);

/* Symbol: _ZN6neuron3nir12LayerBuilder12CreateResizeERKNS0_5ShapeENS0_7OperandENS0_11ResizeLayer4ModeEbb */
/* Demangled: neuron::nir::LayerBuilder::CreateResize(neuron::nir::Shape const&, neuron::nir::Operand, neuron::nir::ResizeLayer::Mode, bool, bool) */
int _ZN6neuron3nir12LayerBuilder12CreateResizeERKNS0_5ShapeENS0_7OperandENS0_11ResizeLayer4ModeEbb(void);

/* Symbol: _ZN6neuron3nir16TernaryLayerBaseILNS0_5Layer4KindE54ENS0_17SingleOutputLayerEEC2IJRKNS0_5ShapeEEEENS0_7OperandESA_SA_DpOT_ */
/* Demangled: neuron::nir::TernaryLayerBase<(neuron::nir::Layer::Kind)54, neuron::nir::SingleOutputLayer>::TernaryLayerBase<neuron::nir::Shape const&>(neuron::nir::Operand, neuron::nir::Operand, neuron::nir::Operand, neuron::nir::Shape const&) */
int _ZN6neuron3nir16TernaryLayerBaseILNS0_5Layer4KindE54ENS0_17SingleOutputLayerEEC2IJRKNS0_5ShapeEEEENS0_7OperandESA_SA_DpOT_(void);

/* Symbol: _ZNKSt6__ndk115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv */
/* Demangled: std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::str() const */
int _ZNKSt6__ndk115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void);

/* Symbol: _ZNK6neuron8compiler17CompilerOptimizer14CreatePipelineERKNS0_15CompilerOptionsE */
/* Demangled: neuron::compiler::CompilerOptimizer::CreatePipeline(neuron::compiler::CompilerOptions const&) const */
int _ZNK6neuron8compiler17CompilerOptimizer14CreatePipelineERKNS0_15CompilerOptionsE(void);

/* Symbol: _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5LayerEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE12__find_equalIiEERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISI_EERKT_ */
/* Demangled: std::__ndk1::__tree_node_base<void*>*& std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Layer*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Layer*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Layer*> > >::__find_equal<int>(std::__ndk1::__tree_end_node<std::__ndk1::__tree_node_base<void*>*>*&, int const&) */
int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5LayerEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE12__find_equalIiEERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISI_EERKT_(void);

/* Symbol: _ZNSt6__ndk1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc */
/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >& std::__ndk1::operator<< <std::__ndk1::char_traits<char> >(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&, char const*) */
int _ZNSt6__ndk1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc(void);

/* Symbol: _ZN6neuron3nir15BinaryLayerBaseILNS0_5Layer4KindE53ENS0_17SingleOutputLayerEEC2IJRKNS0_5ShapeEEEENS0_7OperandESA_DpOT_ */
/* Demangled: neuron::nir::BinaryLayerBase<(neuron::nir::Layer::Kind)53, neuron::nir::SingleOutputLayer>::BinaryLayerBase<neuron::nir::Shape const&>(neuron::nir::Operand, neuron::nir::Operand, neuron::nir::Shape const&) */
int _ZN6neuron3nir15BinaryLayerBaseILNS0_5Layer4KindE53ENS0_17SingleOutputLayerEEC2IJRKNS0_5ShapeEEEENS0_7OperandESA_DpOT_(void);

/* Symbol: _ZN6neuron3nir21ConvolutionBaseWithSPC2ENS0_5Layer4KindERKNS0_5ShapeERKNS_6NNSizeERKNS_9NNPaddingES9_ */
/* Demangled: neuron::nir::ConvolutionBaseWithSP::ConvolutionBaseWithSP(neuron::nir::Layer::Kind, neuron::nir::Shape const&, neuron::NNSize const&, neuron::NNPadding const&, neuron::NNSize const&) */
int _ZN6neuron3nir21ConvolutionBaseWithSPC2ENS0_5Layer4KindERKNS0_5ShapeERKNS_6NNSizeERKNS_9NNPaddingES9_(void);

/* Symbol: _ZN6neuron10NullStreamD1Ev */
/* Demangled: neuron::NullStream::~NullStream() */
int _ZN6neuron10NullStreamD1Ev(void);

/* Symbol: _ZN6neuron3nir12LayerBuilder16CreateActivationERKNS0_5ShapeENS0_7OperandENS0_15ActivationLayer4ModeE */
/* Demangled: neuron::nir::LayerBuilder::CreateActivation(neuron::nir::Shape const&, neuron::nir::Operand, neuron::nir::ActivationLayer::Mode) */
int _ZN6neuron3nir12LayerBuilder16CreateActivationERKNS0_5ShapeENS0_7OperandENS0_15ActivationLayer4ModeE(void);

/* Symbol: _ZNSt6__ndk119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEED0Ev */
/* Demangled: std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::~basic_ostringstream() */
int _ZNSt6__ndk119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEED0Ev(void);

/* Symbol: _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir8ConstantEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE5clearEv */
/* Demangled: std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Constant*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Constant*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Constant*> > >::clear() */
int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir8ConstantEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE5clearEv(void);

/* Symbol: _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5LayerEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE5clearEv */
/* Demangled: std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Layer*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Layer*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Layer*> > >::clear() */
int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5LayerEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE5clearEv(void);

/* Symbol: _ZN6neuron13AndroidLoggerILNS_11LogSeverityE4EED2Ev */
/* Demangled: neuron::AndroidLogger<(neuron::LogSeverity)4>::~AndroidLogger() */
int _ZN6neuron13AndroidLoggerILNS_11LogSeverityE4EED2Ev(void);

/* Symbol: _ZN6neuron15SmallVectorImplIjE6appendIPKjEEvT_S5_ */
/* Demangled: void neuron::SmallVectorImpl<unsigned int>::append<unsigned int const*>(unsigned int const*, unsigned int const*) */
int _ZN6neuron15SmallVectorImplIjE6appendIPKjEEvT_S5_(void);

/* Symbol: _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5InputEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSI_SI_ */
/* Demangled: std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Input*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Input*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Input*> > >::__insert_node_at(std::__ndk1::__tree_end_node<std::__ndk1::__tree_node_base<void*>*>*, std::__ndk1::__tree_node_base<void*>*&, std::__ndk1::__tree_node_base<void*>*) */
int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5InputEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSI_SI_(void);

/* Symbol: _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc */
/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__grow_by_and_replace(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, char const*) */
int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc(void);

/* Symbol: _ZTTNSt6__ndk119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: VTT for std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > */
extern void* _ZTTNSt6__ndk119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN6neuron8compiler19CompilerPassBuilderC2ERKNS0_15CompilerOptionsE */
/* Demangled: neuron::compiler::CompilerPassBuilder::CompilerPassBuilder(neuron::compiler::CompilerOptions const&) */
int _ZN6neuron8compiler19CompilerPassBuilderC2ERKNS0_15CompilerOptionsE(void);

/* Symbol: _ZNK6neuron3nir8DataType7GetSizeEv */
/* Demangled: neuron::nir::DataType::GetSize() const */
int _ZNK6neuron3nir8DataType7GetSizeEv(void);

/* Symbol: _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_4pairIPviEEEEE20__construct_backwardIS4_EENS_9enable_ifIXaaooL_ZNS_17integral_constantIbLb1EE5valueEEntsr15__has_constructIS5_PT_SB_EE5valuesr31is_trivially_move_constructibleISB_EE5valueEvE4typeERS5_SC_SC_RSC_ */
/* Demangled: _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_4pairIPviEEEEE20__construct_backwardIS4_EENS_9enable_ifIXaaooL_ZNS_17integral_constantIbLb1EE5valueEEntsr15__has_constructIS5_PT_SB_EE5valuesr31is_trivially_move_constructibleISB_EE5valueEvE4typeERS5_SC_SC_RSC_ */
int _ZNSt6__ndk116allocator_traitsINS_9allocatorINS_4pairIPviEEEEE20__construct_backwardIS4_EENS_9enable_ifIXaaooL_ZNS_17integral_constantIbLb1EE5valueEEntsr15__has_constructIS5_PT_SB_EE5valuesr31is_trivially_move_constructibleISB_EE5valueEvE4typeERS5_SC_SC_RSC_(void);

/* Symbol: _ZNSt6__ndk13mapIiPN6neuron3nir5LayerENS_4lessIiEENS_9allocatorINS_4pairIKiS4_EEEEEixERS9_ */
/* Demangled: std::__ndk1::map<int, neuron::nir::Layer*, std::__ndk1::less<int>, std::__ndk1::allocator<std::__ndk1::pair<int const, neuron::nir::Layer*> > >::operator[](int const&) */
int _ZNSt6__ndk13mapIiPN6neuron3nir5LayerENS_4lessIiEENS_9allocatorINS_4pairIKiS4_EEEEEixERS9_(void);

/* Symbol: _ZNSt6__ndk115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEED0Ev */
/* Demangled: std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::~basic_stringbuf() */
int _ZNSt6__ndk115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEED0Ev(void);

/* Symbol: _ZN6neuron15SmallVectorImplIjE6assignESt16initializer_listIjE */
/* Demangled: neuron::SmallVectorImpl<unsigned int>::assign(std::initializer_list<unsigned int>) */
int _ZN6neuron15SmallVectorImplIjE6assignESt16initializer_listIjE(void);

/* Symbol: _ZN6neuron3nir11PassBuilderC2ERKNSt6__ndk112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEERKNS_8compiler15CompilerOptionsE */
/* Demangled: neuron::nir::PassBuilder::PassBuilder(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, neuron::compiler::CompilerOptions const&) */
int _ZN6neuron3nir11PassBuilderC2ERKNSt6__ndk112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEERKNS_8compiler15CompilerOptionsE(void);

/* Symbol: _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE9pbackfailEi */
/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::pbackfail(int) */
int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE9pbackfailEi(void);

/* Symbol: _ZN6neuron15SmallVectorImplIjED2Ev */
/* Demangled: neuron::SmallVectorImpl<unsigned int>::~SmallVectorImpl() */
int _ZN6neuron15SmallVectorImplIjED2Ev(void);

/* Symbol: _ZNSt6__ndk124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m */
/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >& std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&, char const*, unsigned long) */
int _ZNSt6__ndk124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void);

/* Symbol: _ZNK6neuron3nir7Context12CreateTensorINS0_7InvalidEJEEEPT_DpOT0_ */
/* Demangled: neuron::nir::Invalid* neuron::nir::Context::CreateTensor<neuron::nir::Invalid>() const */
int _ZNK6neuron3nir7Context12CreateTensorINS0_7InvalidEJEEEPT_DpOT0_(void);

/* Symbol: _ZN6neuron25SmallVectorTemplateCommonIjvE8grow_podEmm */
/* Demangled: neuron::SmallVectorTemplateCommon<unsigned int, void>::grow_pod(unsigned long, unsigned long) */
int _ZN6neuron25SmallVectorTemplateCommonIjvE8grow_podEmm(void);

/* Symbol: _ZN6neuron3nir12LayerBuilder21CreateDepthwiseConv2DERKNS0_5ShapeENS0_7OperandES5_S5_RKNS_6NNSizeERKNS_9NNPaddingES8_ */
/* Demangled: neuron::nir::LayerBuilder::CreateDepthwiseConv2D(neuron::nir::Shape const&, neuron::nir::Operand, neuron::nir::Operand, neuron::nir::Operand, neuron::NNSize const&, neuron::NNPadding const&, neuron::NNSize const&) */
int _ZN6neuron3nir12LayerBuilder21CreateDepthwiseConv2DERKNS0_5ShapeENS0_7OperandES5_S5_RKNS_6NNSizeERKNS_9NNPaddingES8_(void);

/* Symbol: _ZN6neuron3nir11ConcatLayerC2ERKNS0_5ShapeENS_8ArrayRefIPNS0_6TensorEEEi */
/* Demangled: neuron::nir::ConcatLayer::ConcatLayer(neuron::nir::Shape const&, neuron::ArrayRef<neuron::nir::Tensor*>, int) */
int _ZN6neuron3nir11ConcatLayerC2ERKNS0_5ShapeENS_8ArrayRefIPNS0_6TensorEEEi(void);

/* Symbol: _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE6sentryD2Ev */
/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::sentry::~sentry() */
int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE6sentryD2Ev(void);

/* Symbol: _ZN6neuron3nir15LayerListTraits13addNodeToListEPNS0_5LayerE */
/* Demangled: neuron::nir::LayerListTraits::addNodeToList(neuron::nir::Layer*) */
int _ZN6neuron3nir15LayerListTraits13addNodeToListEPNS0_5LayerE(void);

/* Symbol: _ZN11ApuFrontend4Impl10GetByteNumE13apu_data_type */
/* Demangled: ApuFrontend::Impl::GetByteNum(apu_data_type) */
int _ZN11ApuFrontend4Impl10GetByteNumE13apu_data_type(void);

/* Symbol: _ZN11ApuFrontend8RunGraphEv */
/* Demangled: ApuFrontend::RunGraph() */
int _ZN11ApuFrontend8RunGraphEv(void);

/* Symbol: __bss_end__ */
/* Demangled: __bss_end__ */
extern void* __bss_end__;

/* Symbol: _ZN6neuron11Environment6CreateEONS_13DeviceOptionsEb */
/* Demangled: neuron::Environment::Create(neuron::DeviceOptions&&, bool) */
int _ZN6neuron11Environment6CreateEONS_13DeviceOptionsEb(void);

/* Symbol: _ZN6neuron13AndroidLoggerILNS_11LogSeverityE6EED2Ev */
/* Demangled: neuron::AndroidLogger<(neuron::LogSeverity)6>::~AndroidLogger() */
int _ZN6neuron13AndroidLoggerILNS_11LogSeverityE6EED2Ev(void);

/* Symbol: _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir8ConstantEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE12__find_equalIiEERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISI_EERKT_ */
/* Demangled: std::__ndk1::__tree_node_base<void*>*& std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Constant*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Constant*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Constant*> > >::__find_equal<int>(std::__ndk1::__tree_end_node<std::__ndk1::__tree_node_base<void*>*>*&, int const&) */
int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir8ConstantEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE12__find_equalIiEERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISI_EERKT_(void);

/* Symbol: _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc */
/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::resize(unsigned long, char) */
int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc(void);

/* Symbol: _ZNSt6__ndk16vectorIPN6neuron3nir6TensorENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_ */
/* Demangled: void std::__ndk1::vector<neuron::nir::Tensor*, std::__ndk1::allocator<neuron::nir::Tensor*> >::__push_back_slow_path<neuron::nir::Tensor* const&>(neuron::nir::Tensor* const&) */
int _ZNSt6__ndk16vectorIPN6neuron3nir6TensorENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void);

/* Symbol: _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev */
/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::~basic_string() */
int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(void);

/* Symbol: _ZN6neuron3nir14UnaryLayerBaseILNS0_5Layer4KindE0ENS0_14ActivationBaseEEC2IJRKNS0_5ShapeEEEENS0_7OperandEDpOT_ */
/* Demangled: neuron::nir::UnaryLayerBase<(neuron::nir::Layer::Kind)0, neuron::nir::ActivationBase>::UnaryLayerBase<neuron::nir::Shape const&>(neuron::nir::Operand, neuron::nir::Shape const&) */
int _ZN6neuron3nir14UnaryLayerBaseILNS0_5Layer4KindE0ENS0_14ActivationBaseEEC2IJRKNS0_5ShapeEEEENS0_7OperandEDpOT_(void);

/* Symbol: _ZN6neuron3nir14UnaryLayerBaseILNS0_5Layer4KindE69ENS0_10ResizeBaseEEC2IJRKNS0_5ShapeEEEENS0_7OperandEDpOT_ */
/* Demangled: neuron::nir::UnaryLayerBase<(neuron::nir::Layer::Kind)69, neuron::nir::ResizeBase>::UnaryLayerBase<neuron::nir::Shape const&>(neuron::nir::Operand, neuron::nir::Shape const&) */
int _ZN6neuron3nir14UnaryLayerBaseILNS0_5Layer4KindE69ENS0_10ResizeBaseEEC2IJRKNS0_5ShapeEEEENS0_7OperandEDpOT_(void);

/* Symbol: _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEED0Ev */
/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf() */
int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEED0Ev(void);

/* Symbol: _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE5uflowEv */
/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::uflow() */
int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE5uflowEv(void);

/* Symbol: _ZN6neuron3nir5GraphD2Ev */
/* Demangled: neuron::nir::Graph::~Graph() */
int _ZN6neuron3nir5GraphD2Ev(void);

/* Symbol: _ZN6neuron3nir12LayerBuilder12CreateConcatERKNS0_5ShapeENS_8ArrayRefIPNS0_6TensorEEEj */
/* Demangled: neuron::nir::LayerBuilder::CreateConcat(neuron::nir::Shape const&, neuron::ArrayRef<neuron::nir::Tensor*>, unsigned int) */
int _ZN6neuron3nir12LayerBuilder12CreateConcatERKNS0_5ShapeENS_8ArrayRefIPNS0_6TensorEEEj(void);

/* Symbol: _ZNK6neuron3nir11QuantParams19HasOffsetPerChannelEv */
/* Demangled: neuron::nir::QuantParams::HasOffsetPerChannel() const */
int _ZNK6neuron3nir11QuantParams19HasOffsetPerChannelEv(void);

/* Symbol: _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5InputEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEED2Ev */
/* Demangled: std::__ndk1::__tree<std::__ndk1::__value_type<int, neuron::nir::Input*>, std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int, neuron::nir::Input*>, std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int, neuron::nir::Input*> > >::~__tree() */
int _ZNSt6__ndk16__treeINS_12__value_typeIiPN6neuron3nir5InputEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEED2Ev(void);

/* Symbol: _ZN11ApuFrontend4Impl12GetNirTensorEi */
/* Demangled: ApuFrontend::Impl::GetNirTensor(int) */
int _ZN11ApuFrontend4Impl12GetNirTensorEi(void);

/* Symbol: _ZN11ApuFrontend4Impl21GetNNPaddingFromConstEPK10apu_tensor */
/* Demangled: ApuFrontend::Impl::GetNNPaddingFromConst(apu_tensor const*) */
int _ZN11ApuFrontend4Impl21GetNNPaddingFromConstEPK10apu_tensor(void);

/* Symbol: _ZN6neuron3nir5Graph11CreateInputERKNS0_5ShapeEmb */
/* Demangled: neuron::nir::Graph::CreateInput(neuron::nir::Shape const&, unsigned long, bool) */
int _ZN6neuron3nir5Graph11CreateInputERKNS0_5ShapeEmb(void);

/* Symbol: _ZN11ApuFrontend4Impl5ResetEv */
/* Demangled: ApuFrontend::Impl::Reset() */
int _ZN11ApuFrontend4Impl5ResetEv(void);

/* Symbol: _ZTv0_n24_NSt6__ndk119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEED0Ev */
/* Demangled: virtual thunk to std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::~basic_ostringstream() */
int _ZTv0_n24_NSt6__ndk119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEED0Ev(void);

/* Symbol: _ZN11ApuFrontend4Impl14HandleFuseCodeERKN6neuron3nir5ShapeEPNS2_5LayerE12apu_act_mode */
/* Demangled: ApuFrontend::Impl::HandleFuseCode(neuron::nir::Shape const&, neuron::nir::Layer*, apu_act_mode) */
int _ZN11ApuFrontend4Impl14HandleFuseCodeERKN6neuron3nir5ShapeEPNS2_5LayerE12apu_act_mode(void);

/* Symbol: _ZN6neuron10NullStreamD2Ev */
/* Demangled: neuron::NullStream::~NullStream() */
int _ZN6neuron10NullStreamD2Ev(void);

/* Symbol: _ZN11ApuFrontend4Impl12MakeNirShapeEPK10apu_tensor */
/* Demangled: ApuFrontend::Impl::MakeNirShape(apu_tensor const*) */
int _ZN11ApuFrontend4Impl12MakeNirShapeEPK10apu_tensor(void);

/* Symbol: _ZNSt6__ndk119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev */
/* Demangled: std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::~basic_ostringstream() */
int _ZNSt6__ndk119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(void);

/* Symbol: _ZN6neuron3nir10BasicShapeC2ERKS1_ */
/* Demangled: neuron::nir::BasicShape::BasicShape(neuron::nir::BasicShape const&) */
int _ZN6neuron3nir10BasicShapeC2ERKS1_(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBAPU_FRONTEND_H */

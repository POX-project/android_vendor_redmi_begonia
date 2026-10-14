/*
 * Reverse-Engineered ABI Specification for: libunwindstack-v30.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libunwindstack.so
 */

#ifndef BEGONIA_RE_LIBUNWINDSTACK_V30_H
#define BEGONIA_RE_LIBUNWINDSTACK_V30_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN11unwindstack8DwarfCfaIjE10last_errorEv */
/* Demangled: unwindstack::DwarfCfa<unsigned int>::last_error() */
int _ZN11unwindstack8DwarfCfaIjE10last_errorEv(void);

/* Symbol: _ZN11unwindstack6Memory19CreateOfflineMemoryEPKhyy */
/* Demangled: unwindstack::Memory::CreateOfflineMemory(unsigned char const*, unsigned long long, unsigned long long) */
int _ZN11unwindstack6Memory19CreateOfflineMemoryEPKhyy(void);

/* Symbol: _ZN11unwindstack6GlobalC2ERNSt3__110shared_ptrINS_6MemoryEEERNS1_6vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENSA_ISC_EEEE */
/* Demangled: unwindstack::Global::Global(std::__1::shared_ptr<unwindstack::Memory>&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >&) */
int _ZN11unwindstack6GlobalC2ERNSt3__110shared_ptrINS_6MemoryEEERNS1_6vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENSA_ISC_EEEE(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIjE10cfa_offsetEPNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfCfa<unsigned int>::cfa_offset(unwindstack::DwarfLocations*) */
int _ZN11unwindstack8DwarfCfaIjE10cfa_offsetEPNS_14DwarfLocationsE(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIjE11cfa_restoreEPNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfCfa<unsigned int>::cfa_restore(unwindstack::DwarfLocations*) */
int _ZN11unwindstack8DwarfCfaIjE11cfa_restoreEPNS_14DwarfLocationsE(void);

/* Symbol: _ZN11unwindstack11MemoryLocal4ReadEyPvj */
/* Demangled: unwindstack::MemoryLocal::Read(unsigned long long, void*, unsigned int) */
int _ZN11unwindstack11MemoryLocal4ReadEyPvj(void);

/* Symbol: _ZN11unwindstack7RegsArm18CreateFromUcontextEPv */
/* Demangled: unwindstack::RegsArm::CreateFromUcontext(void*) */
int _ZN11unwindstack7RegsArm18CreateFromUcontextEPv(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE6DecodeEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::Decode() */
int _ZN11unwindstack7DwarfOpIjE6DecodeEv(void);

/* Symbol: _ZN11unwindstack12ElfInterface18ReadProgramHeadersI9elf32_hdr10elf32_phdrEEvRKT_Px */
/* Demangled: void unwindstack::ElfInterface::ReadProgramHeaders<elf32_hdr, elf32_phdr>(elf32_hdr const&, long long*) */
int _ZN11unwindstack12ElfInterface18ReadProgramHeadersI9elf32_hdr10elf32_phdrEEvRKT_Px(void);

/* Symbol: _ZN11unwindstack10RegsMips64C2Ev */
/* Demangled: unwindstack::RegsMips64::RegsMips64() */
int _ZN11unwindstack10RegsMips64C2Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack19DwarfEhFrameWithHdrIjE7FdeInfoEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE6rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned int>::FdeInfo>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned int>::FdeInfo>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned int>::FdeInfo>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned int>::FdeInfo> > >::rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack19DwarfEhFrameWithHdrIjE7FdeInfoEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE6rehashEj(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE8StackPopEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::StackPop() */
int _ZN11unwindstack7DwarfOpIjE8StackPopEv(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE7op_skipEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_skip() */
int _ZN11unwindstack7DwarfOpIyE7op_skipEv(void);

/* Symbol: _ZN11unwindstack8RegsMips22SetPcFromReturnAddressEPNS_6MemoryE */
/* Demangled: unwindstack::RegsMips::SetPcFromReturnAddress(unwindstack::Memory*) */
int _ZN11unwindstack8RegsMips22SetPcFromReturnAddressEPNS_6MemoryE(void);

/* Symbol: _ZNK11unwindstack8Unwinder11FormatFrameERKNS_9FrameDataE */
/* Demangled: unwindstack::Unwinder::FormatFrame(unwindstack::FrameData const&) const */
int _ZNK11unwindstack8Unwinder11FormatFrameERKNS_9FrameDataE(void);

/* Symbol: _ZN11unwindstack8ArmExidx6DecodeEv */
/* Demangled: unwindstack::ArmExidx::Decode() */
int _ZN11unwindstack8ArmExidx6DecodeEv(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIjE22cfa_offset_extended_sfEPNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfCfa<unsigned int>::cfa_offset_extended_sf(unwindstack::DwarfLocations*) */
int _ZN11unwindstack8DwarfCfaIjE22cfa_offset_extended_sfEPNS_14DwarfLocationsE(void);

/* Symbol: _ZN11unwindstack16DwarfSectionImplIjE12GetFdeFromPcEy */
/* Demangled: unwindstack::DwarfSectionImpl<unsigned int>::GetFdeFromPc(unsigned long long) */
int _ZN11unwindstack16DwarfSectionImplIjE12GetFdeFromPcEy(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIyN11unwindstack14DwarfLocationsEEENS_19__map_value_compareIyS4_NS_4lessIyEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIyJRyS3_EEENS_4pairINS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<unsigned long long, unwindstack::DwarfLocations>, std::__1::__tree_node<std::__1::__value_type<unsigned long long, unwindstack::DwarfLocations>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<unsigned long long, unwindstack::DwarfLocations>, std::__1::__map_value_compare<unsigned long long, std::__1::__value_type<unsigned long long, unwindstack::DwarfLocations>, std::__1::less<unsigned long long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long long, unwindstack::DwarfLocations> > >::__emplace_unique_key_args<unsigned long long, unsigned long long&, unwindstack::DwarfLocations>(unsigned long long const&, unsigned long long&, unwindstack::DwarfLocations&&) */
int _ZNSt3__16__treeINS_12__value_typeIyN11unwindstack14DwarfLocationsEEENS_19__map_value_compareIyS4_NS_4lessIyEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIyJRyS3_EEENS_4pairINS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZN11unwindstack18MemoryFileAtOffset5ClearEv */
/* Demangled: unwindstack::MemoryFileAtOffset::Clear() */
int _ZN11unwindstack18MemoryFileAtOffset5ClearEv(void);

/* Symbol: _ZN11unwindstack18MemoryFileAtOffsetD2Ev */
/* Demangled: unwindstack::MemoryFileAtOffset::~MemoryFileAtOffset() */
int _ZN11unwindstack18MemoryFileAtOffsetD2Ev(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE6op_regEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_reg() */
int _ZN11unwindstack7DwarfOpIyE6op_regEv(void);

/* Symbol: _ZN11unwindstack4Maps3AddEyyyyRKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEy */
/* Demangled: unwindstack::Maps::Add(unsigned long long, unsigned long long, unsigned long long, unsigned long long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned long long) */
int _ZN11unwindstack4Maps3AddEyyyyRKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEy(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIyE14LogInstructionEjyhPy */
/* Demangled: unwindstack::DwarfCfa<unsigned long long>::LogInstruction(unsigned int, unsigned long long, unsigned char, unsigned long long*) */
int _ZN11unwindstack8DwarfCfaIyE14LogInstructionEjyhPy(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE7op_shraEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_shra() */
int _ZN11unwindstack7DwarfOpIyE7op_shraEv(void);

/* Symbol: _ZN11unwindstack3Elf10GetBuildIDEv */
/* Demangled: unwindstack::Elf::GetBuildID() */
int _ZN11unwindstack3Elf10GetBuildIDEv(void);

/* Symbol: _ZN11unwindstack3Elf16InitGnuDebugdataEv */
/* Demangled: unwindstack::Elf::InitGnuDebugdata() */
int _ZN11unwindstack3Elf16InitGnuDebugdataEv(void);

/* Symbol: _ZN11unwindstack18MemoryOfflineParts4ReadEyPvj */
/* Demangled: unwindstack::MemoryOfflineParts::Read(unsigned long long, void*, unsigned int) */
int _ZN11unwindstack18MemoryOfflineParts4ReadEyPvj(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIjE11cfa_def_cfaEPNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfCfa<unsigned int>::cfa_def_cfa(unwindstack::DwarfLocations*) */
int _ZN11unwindstack8DwarfCfaIjE11cfa_def_cfaEPNS_14DwarfLocationsE(void);

/* Symbol: _ZN11unwindstack16DwarfSectionImplIyE16GetFdeFromOffsetEy */
/* Demangled: unwindstack::DwarfSectionImpl<unsigned long long>::GetFdeFromOffset(unsigned long long) */
int _ZN11unwindstack16DwarfSectionImplIyE16GetFdeFromOffsetEy(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE6op_dupEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::op_dup() */
int _ZN11unwindstack7DwarfOpIjE6op_dupEv(void);

/* Symbol: _ZN11unwindstack12ElfInterface22GetMaxSizeWithTemplateI9elf32_hdrEEvPNS_6MemoryEPy */
/* Demangled: void unwindstack::ElfInterface::GetMaxSizeWithTemplate<elf32_hdr>(unwindstack::Memory*, unsigned long long*) */
int _ZN11unwindstack12ElfInterface22GetMaxSizeWithTemplateI9elf32_hdrEEvPNS_6MemoryEPy(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIjE14cfa_expressionEPNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfCfa<unsigned int>::cfa_expression(unwindstack::DwarfLocations*) */
int _ZN11unwindstack8DwarfCfaIjE14cfa_expressionEPNS_14DwarfLocationsE(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE13LastErrorCodeEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::LastErrorCode() */
int _ZN11unwindstack7DwarfOpIyE13LastErrorCodeEv(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE6op_xorEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_xor() */
int _ZN11unwindstack7DwarfOpIyE6op_xorEv(void);

/* Symbol: _ZN11unwindstack16DwarfSectionImplIjE9FillInFdeEPNS_8DwarfFdeE */
/* Demangled: unwindstack::DwarfSectionImpl<unsigned int>::FillInFde(unwindstack::DwarfFde*) */
int _ZN11unwindstack16DwarfSectionImplIjE9FillInFdeEPNS_8DwarfFdeE(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE7op_pushEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::op_push() */
int _ZN11unwindstack7DwarfOpIjE7op_pushEv(void);

/* Symbol: _ZTVN11unwindstack14ElfInterface64E */
/* Demangled: vtable for unwindstack::ElfInterface64 */
extern void* _ZTVN11unwindstack14ElfInterface64E;

/* Symbol: _ZN11unwindstack19MemoryOfflineBufferC1EPKhyy */
/* Demangled: unwindstack::MemoryOfflineBuffer::MemoryOfflineBuffer(unsigned char const*, unsigned long long, unsigned long long) */
int _ZN11unwindstack19MemoryOfflineBufferC1EPKhyy(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIyE18cfa_remember_stateEPNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfCfa<unsigned long long>::cfa_remember_state(unwindstack::DwarfLocations*) */
int _ZN11unwindstack8DwarfCfaIyE18cfa_remember_stateEPNS_14DwarfLocationsE(void);

/* Symbol: _ZNSt3__15dequeIyNS_9allocatorIyEEE20__add_front_capacityEv */
/* Demangled: std::__1::deque<unsigned long long, std::__1::allocator<unsigned long long> >::__add_front_capacity() */
int _ZNSt3__15dequeIyNS_9allocatorIyEEE20__add_front_capacityEv(void);

/* Symbol: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&) */
int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_(void);

/* Symbol: _ZN11unwindstack8JitDebug15ReadEntry32PackEPyS1_ */
/* Demangled: unwindstack::JitDebug::ReadEntry32Pack(unsigned long long*, unsigned long long*) */
int _ZN11unwindstack8JitDebug15ReadEntry32PackEPyS1_(void);

/* Symbol: _ZTVN11unwindstack8RegsMipsE */
/* Demangled: vtable for unwindstack::RegsMips */
extern void* _ZTVN11unwindstack8RegsMipsE;

/* Symbol: _ZN11unwindstack8DwarfCfaIjE16LastErrorAddressEv */
/* Demangled: unwindstack::DwarfCfa<unsigned int>::LastErrorAddress() */
int _ZN11unwindstack8DwarfCfaIjE16LastErrorAddressEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN11unwindstack13DwarfLocationEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE6rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation> > >::rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN11unwindstack13DwarfLocationEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE6rehashEj(void);

/* Symbol: _ZN11unwindstack3Elf11GetLoadBiasEPNS_6MemoryE */
/* Demangled: unwindstack::Elf::GetLoadBias(unwindstack::Memory*) */
int _ZN11unwindstack3Elf11GetLoadBiasEPNS_6MemoryE(void);

/* Symbol: _ZN11unwindstack12ElfInterfaceD0Ev */
/* Demangled: unwindstack::ElfInterface::~ElfInterface() */
int _ZN11unwindstack12ElfInterfaceD0Ev(void);

/* Symbol: _ZN11unwindstack8JitDebugD1Ev */
/* Demangled: unwindstack::JitDebug::~JitDebug() */
int _ZN11unwindstack8JitDebugD1Ev(void);

/* Symbol: _ZTVN11unwindstack16DwarfSectionImplIjEE */
/* Demangled: vtable for unwindstack::DwarfSectionImpl<unsigned int> */
extern void* _ZTVN11unwindstack16DwarfSectionImplIjEE;

/* Symbol: _ZN11unwindstack16DwarfSectionImplIjE9FillInCieEPNS_8DwarfCieE */
/* Demangled: unwindstack::DwarfSectionImpl<unsigned int>::FillInCie(unwindstack::DwarfCie*) */
int _ZN11unwindstack16DwarfSectionImplIjE9FillInCieEPNS_8DwarfCieE(void);

/* Symbol: _ZN11unwindstack12ElfInterface27GetFunctionNameWithTemplateI9elf32_symEEbyPNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPy */
/* Demangled: bool unwindstack::ElfInterface::GetFunctionNameWithTemplate<elf32_sym>(unsigned long long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned long long*) */
int _ZN11unwindstack12ElfInterface27GetFunctionNameWithTemplateI9elf32_symEEbyPNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPy(void);

/* Symbol: _ZN11unwindstack3Elf8GetRelPcEyPKNS_7MapInfoE */
/* Demangled: unwindstack::Elf::GetRelPc(unsigned long long, unwindstack::MapInfo const*) */
int _ZN11unwindstack3Elf8GetRelPcEyPKNS_7MapInfoE(void);

/* Symbol: _ZN11unwindstack13LocalUnwinder6UnwindEPNSt3__16vectorINS_14LocalFrameDataENS1_9allocatorIS3_EEEEj */
/* Demangled: unwindstack::LocalUnwinder::Unwind(std::__1::vector<unwindstack::LocalFrameData, std::__1::allocator<unwindstack::LocalFrameData> >*, unsigned int) */
int _ZN11unwindstack13LocalUnwinder6UnwindEPNSt3__16vectorINS_14LocalFrameDataENS1_9allocatorIS3_EEEEj(void);

/* Symbol: _ZN11unwindstack16DwarfSectionImplIyE15FillInFdeHeaderEPNS_8DwarfFdeE */
/* Demangled: unwindstack::DwarfSectionImpl<unsigned long long>::FillInFdeHeader(unwindstack::DwarfFde*) */
int _ZN11unwindstack16DwarfSectionImplIyE15FillInFdeHeaderEPNS_8DwarfFdeE(void);

/* Symbol: _ZN11unwindstack14GetBuildIDInfoI9elf64_hdr10elf64_shdrEEbPNS_6MemoryEPyS5_ */
/* Demangled: bool unwindstack::GetBuildIDInfo<elf64_hdr, elf64_shdr>(unwindstack::Memory*, unsigned long long*, unsigned long long*) */
int _ZN11unwindstack14GetBuildIDInfoI9elf64_hdr10elf64_shdrEEbPNS_6MemoryEPyS5_(void);

/* Symbol: _ZN11unwindstack11MemoryRangeC1ERKNSt3__110shared_ptrINS_6MemoryEEEyyy */
/* Demangled: unwindstack::MemoryRange::MemoryRange(std::__1::shared_ptr<unwindstack::Memory> const&, unsigned long long, unsigned long long, unsigned long long) */
int _ZN11unwindstack11MemoryRangeC1ERKNSt3__110shared_ptrINS_6MemoryEEEyyy(void);

/* Symbol: _ZN11unwindstack19MemoryOfflineBuffer4ReadEyPvj */
/* Demangled: unwindstack::MemoryOfflineBuffer::Read(unsigned long long, void*, unsigned int) */
int _ZN11unwindstack19MemoryOfflineBuffer4ReadEyPvj(void);

/* Symbol: _ZN11unwindstack16DwarfSectionImplIjE7GetFdesEPNSt3__16vectorIPKNS_8DwarfFdeENS2_9allocatorIS6_EEEE */
/* Demangled: unwindstack::DwarfSectionImpl<unsigned int>::GetFdes(std::__1::vector<unwindstack::DwarfFde const*, std::__1::allocator<unwindstack::DwarfFde const*> >*) */
int _ZN11unwindstack16DwarfSectionImplIjE7GetFdesEPNSt3__16vectorIPKNS_8DwarfFdeENS2_9allocatorIS6_EEEE(void);

/* Symbol: _ZN11unwindstack7RegsArmC1Ev */
/* Demangled: unwindstack::RegsArm::RegsArm() */
int _ZN11unwindstack7RegsArmC1Ev(void);

/* Symbol: _ZN11unwindstack8DexFiles11ReadEntry32Ev */
/* Demangled: unwindstack::DexFiles::ReadEntry32() */
int _ZN11unwindstack8DexFiles11ReadEntry32Ev(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE4EvalEyy */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::Eval(unsigned long long, unsigned long long) */
int _ZN11unwindstack7DwarfOpIyE4EvalEyy(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE7op_pickEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_pick() */
int _ZN11unwindstack7DwarfOpIyE7op_pickEv(void);

/* Symbol: _ZNSt3__16vectorINS_10unique_ptrIN11unwindstack7MapInfoENS_14default_deleteIS3_EEEENS_9allocatorIS6_EEE24__emplace_back_slow_pathIJS6_EEEvDpOT_ */
/* Demangled: void std::__1::vector<std::__1::unique_ptr<unwindstack::MapInfo, std::__1::default_delete<unwindstack::MapInfo> >, std::__1::allocator<std::__1::unique_ptr<unwindstack::MapInfo, std::__1::default_delete<unwindstack::MapInfo> > > >::__emplace_back_slow_path<std::__1::unique_ptr<unwindstack::MapInfo, std::__1::default_delete<unwindstack::MapInfo> > >(std::__1::unique_ptr<unwindstack::MapInfo, std::__1::default_delete<unwindstack::MapInfo> >&&) */
int _ZNSt3__16vectorINS_10unique_ptrIN11unwindstack7MapInfoENS_14default_deleteIS3_EEEENS_9allocatorIS6_EEE24__emplace_back_slow_pathIJS6_EEEvDpOT_(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE6op_regEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::op_reg() */
int _ZN11unwindstack7DwarfOpIjE6op_regEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjjEENS_22__unordered_map_hasherIjS2_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS2_NS_8equal_toIjEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSI_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned int>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, unsigned int> > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjjEENS_22__unordered_map_hasherIjS2_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS2_NS_8equal_toIjEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSI_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_pointerIPN11unwindstack3ElfENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_pointer<unwindstack::Elf*, std::__1::default_delete<unwindstack::Elf>, std::__1::allocator<unwindstack::Elf> > */
extern void* _ZTVNSt3__120__shared_ptr_pointerIPN11unwindstack3ElfENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE;

/* Symbol: _ZN11unwindstack7DwarfOpIyE5op_gtEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_gt() */
int _ZN11unwindstack7DwarfOpIyE5op_gtEv(void);

/* Symbol: _ZN11unwindstack3Elf8CacheAddEPNS_7MapInfoE */
/* Demangled: unwindstack::Elf::CacheAdd(unwindstack::MapInfo*) */
int _ZN11unwindstack3Elf8CacheAddEPNS_7MapInfoE(void);

/* Symbol: _ZN11unwindstack4Maps5ParseEv */
/* Demangled: unwindstack::Maps::Parse() */
int _ZN11unwindstack4Maps5ParseEv(void);

/* Symbol: _ZN11unwindstack12DwarfCfaInfo6kTableE */
/* Demangled: unwindstack::DwarfCfaInfo::kTable */
extern void* _ZN11unwindstack12DwarfCfaInfo6kTableE;

/* Symbol: _ZN11unwindstack8DwarfCfaIjE32cfa_gnu_negative_offset_extendedEPNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfCfa<unsigned int>::cfa_gnu_negative_offset_extended(unwindstack::DwarfLocations*) */
int _ZN11unwindstack8DwarfCfaIjE32cfa_gnu_negative_offset_extendedEPNS_14DwarfLocationsE(void);

/* Symbol: _ZN11unwindstack12ElfInterface23InitHeadersWithTemplateIjEEvv */
/* Demangled: void unwindstack::ElfInterface::InitHeadersWithTemplate<unsigned int>() */
int _ZN11unwindstack12ElfInterface23InitHeadersWithTemplateIjEEvv(void);

/* Symbol: _ZN11unwindstack3Elf10InvalidateEv */
/* Demangled: unwindstack::Elf::Invalidate() */
int _ZN11unwindstack3Elf10InvalidateEv(void);

/* Symbol: _ZNSt3__16__sortIRZN11unwindstack7Symbols7GetNameI9elf64_symEEbyPNS1_6MemoryEPNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPyEUlRKNS2_4InfoESH_E_PSF_EEvT0_SL_T_ */
/* Demangled: void std::__1::__sort<bool unwindstack::Symbols::GetName<elf64_sym>(unsigned long long, unwindstack::Memory*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned long long*)::{lambda(unwindstack::Symbols::Info const&, unwindstack::Symbols::Info const&)#1}&, unwindstack::Symbols::Info*>(unwindstack::Symbols::Info*, unwindstack::Symbols::Info*, bool unwindstack::Symbols::GetName<elf64_sym>(unsigned long long, unwindstack::Memory*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned long long*)::{lambda(unwindstack::Symbols::Info const&, unwindstack::Symbols::Info const&)#1}&) */
int _ZNSt3__16__sortIRZN11unwindstack7Symbols7GetNameI9elf64_symEEbyPNS1_6MemoryEPNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPyEUlRKNS2_4InfoESH_E_PSF_EEvT0_SL_T_(void);

/* Symbol: _ZN11unwindstack11DwarfMemory16ReadEncodedValueIyEEbhPy */
/* Demangled: bool unwindstack::DwarfMemory::ReadEncodedValue<unsigned long long>(unsigned char, unsigned long long*) */
int _ZN11unwindstack11DwarfMemory16ReadEncodedValueIyEEbhPy(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIyE17cfa_val_offset_sfEPNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfCfa<unsigned long long>::cfa_val_offset_sf(unwindstack::DwarfLocations*) */
int _ZN11unwindstack8DwarfCfaIyE17cfa_val_offset_sfEPNS_14DwarfLocationsE(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE6op_xorEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::op_xor() */
int _ZN11unwindstack7DwarfOpIjE6op_xorEv(void);

/* Symbol: _ZN11unwindstack9RegsArm64C2Ev */
/* Demangled: unwindstack::RegsArm64::RegsArm64() */
int _ZN11unwindstack9RegsArm64C2Ev(void);

/* Symbol: _ZN11unwindstack7RegsX8619StepIfSignalHandlerEyPNS_3ElfEPNS_6MemoryE */
/* Demangled: unwindstack::RegsX86::StepIfSignalHandler(unsigned long long, unwindstack::Elf*, unwindstack::Memory*) */
int _ZN11unwindstack7RegsX8619StepIfSignalHandlerEyPNS_3ElfEPNS_6MemoryE(void);

/* Symbol: _ZN11unwindstack8RegsMips16IterateRegistersENSt3__18functionIFvPKcyEEE */
/* Demangled: unwindstack::RegsMips::IterateRegisters(std::__1::function<void (char const*, unsigned long long)>) */
int _ZN11unwindstack8RegsMips16IterateRegistersENSt3__18functionIFvPKcyEEE(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIyE11cfa_def_cfaEPNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfCfa<unsigned long long>::cfa_def_cfa(unwindstack::DwarfLocations*) */
int _ZN11unwindstack8DwarfCfaIyE11cfa_def_cfaEPNS_14DwarfLocationsE(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE6op_divEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_div() */
int _ZN11unwindstack7DwarfOpIyE6op_divEv(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE6op_shrEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_shr() */
int _ZN11unwindstack7DwarfOpIyE6op_shrEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack8DwarfCieEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE6rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfCie>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfCie>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfCie>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfCie> > >::rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack8DwarfCieEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE6rehashEj(void);

/* Symbol: _ZN11unwindstack3Elf7GetInfoEPNS_6MemoryEPy */
/* Demangled: unwindstack::Elf::GetInfo(unwindstack::Memory*, unsigned long long*) */
int _ZN11unwindstack3Elf7GetInfoEPNS_6MemoryEPy(void);

/* Symbol: _ZNSt3__114__split_bufferIPhRNS_9allocatorIS1_EEE10push_frontERKS1_ */
/* Demangled: std::__1::__split_buffer<unsigned char*, std::__1::allocator<unsigned char*>&>::push_front(unsigned char* const&) */
int _ZNSt3__114__split_bufferIPhRNS_9allocatorIS1_EEE10push_frontERKS1_(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIyE15GetLocationInfoEyyyPNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfCfa<unsigned long long>::GetLocationInfo(unsigned long long, unsigned long long, unsigned long long, unwindstack::DwarfLocations*) */
int _ZN11unwindstack8DwarfCfaIyE15GetLocationInfoEyyyPNS_14DwarfLocationsE(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIyE3LogEjyyy */
/* Demangled: unwindstack::DwarfCfa<unsigned long long>::Log(unsigned int, unsigned long long, unsigned long long, unsigned long long) */
int _ZN11unwindstack8DwarfCfaIyE3LogEjyyy(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN11unwindstack13DwarfLocationEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE8__rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation> > >::__rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN11unwindstack13DwarfLocationEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE8__rehashEj(void);

/* Symbol: _ZN11unwindstack16DwarfSectionImplIyE12EvalRegisterEPKNS_13DwarfLocationEjPyPv */
/* Demangled: unwindstack::DwarfSectionImpl<unsigned long long>::EvalRegister(unwindstack::DwarfLocation const*, unsigned int, unsigned long long*, void*) */
int _ZN11unwindstack16DwarfSectionImplIyE12EvalRegisterEPKNS_13DwarfLocationEjPyPv(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE16LastErrorAddressEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::LastErrorAddress() */
int _ZN11unwindstack7DwarfOpIyE16LastErrorAddressEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPyNS_9allocatorIS1_EEE9push_backEOS1_ */
/* Demangled: std::__1::__split_buffer<unsigned long long*, std::__1::allocator<unsigned long long*> >::push_back(unsigned long long*&&) */
int _ZNSt3__114__split_bufferIPyNS_9allocatorIS1_EEE9push_backEOS1_(void);

/* Symbol: _ZN11unwindstack16DwarfSectionImplIjE3LogEhyPKNS_8DwarfFdeE */
/* Demangled: unwindstack::DwarfSectionImpl<unsigned int>::Log(unsigned char, unsigned long long, unwindstack::DwarfFde const*) */
int _ZN11unwindstack16DwarfSectionImplIjE3LogEhyPKNS_8DwarfFdeE(void);

/* Symbol: _ZN11unwindstack11DwarfMemory10ReadSignedIxEEbPy */
/* Demangled: bool unwindstack::DwarfMemory::ReadSigned<long long>(unsigned long long*) */
int _ZN11unwindstack11DwarfMemory10ReadSignedIxEEbPy(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE13set_regs_infoEPNS_8RegsInfoIyEE */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::set_regs_info(unwindstack::RegsInfo<unsigned long long>*) */
int _ZN11unwindstack7DwarfOpIyE13set_regs_infoEPNS_8RegsInfoIyEE(void);

/* Symbol: _ZNSt3__114__split_bufferIPjNS_9allocatorIS1_EEE10push_frontEOS1_ */
/* Demangled: std::__1::__split_buffer<unsigned int*, std::__1::allocator<unsigned int*> >::push_front(unsigned int*&&) */
int _ZNSt3__114__split_bufferIPjNS_9allocatorIS1_EEE10push_frontEOS1_(void);

/* Symbol: _ZN11unwindstack15DwarfDebugFrameIyEC1EPNS_6MemoryE */
/* Demangled: unwindstack::DwarfDebugFrame<unsigned long long>::DwarfDebugFrame(unwindstack::Memory*) */
int _ZN11unwindstack15DwarfDebugFrameIyEC1EPNS_6MemoryE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIyNS_4pairIyPKN11unwindstack8DwarfFdeEEEEENS_19__map_value_compareIyS8_NS_4lessIyEELb1EEENS_9allocatorIS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned long long, std::__1::pair<unsigned long long, unwindstack::DwarfFde const*> >, std::__1::__map_value_compare<unsigned long long, std::__1::__value_type<unsigned long long, std::__1::pair<unsigned long long, unwindstack::DwarfFde const*> >, std::__1::less<unsigned long long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long long, std::__1::pair<unsigned long long, unwindstack::DwarfFde const*> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned long long, std::__1::pair<unsigned long long, unwindstack::DwarfFde const*> >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIyNS_4pairIyPKN11unwindstack8DwarfFdeEEEEENS_19__map_value_compareIyS8_NS_4lessIyEELb1EEENS_9allocatorIS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE7op_bregEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_breg() */
int _ZN11unwindstack7DwarfOpIyE7op_bregEv(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE7op_regxEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_regx() */
int _ZN11unwindstack7DwarfOpIyE7op_regxEv(void);

/* Symbol: _ZN11unwindstack15ElfInterfaceArm4InitEPx */
/* Demangled: unwindstack::ElfInterfaceArm::Init(long long*) */
int _ZN11unwindstack15ElfInterfaceArm4InitEPx(void);

/* Symbol: _ZN11unwindstack8JitDebug11ReadEntry64EPyS1_ */
/* Demangled: unwindstack::JitDebug::ReadEntry64(unsigned long long*, unsigned long long*) */
int _ZN11unwindstack8JitDebug11ReadEntry64EPyS1_(void);

/* Symbol: _ZN11unwindstack10RegsX86_642spEv */
/* Demangled: unwindstack::RegsX86_64::sp() */
int _ZN11unwindstack10RegsX86_642spEv(void);

/* Symbol: _ZN11unwindstack10RegsMips6419StepIfSignalHandlerEyPNS_3ElfEPNS_6MemoryE */
/* Demangled: unwindstack::RegsMips64::StepIfSignalHandler(unsigned long long, unwindstack::Elf*, unwindstack::Memory*) */
int _ZN11unwindstack10RegsMips6419StepIfSignalHandlerEyPNS_3ElfEPNS_6MemoryE(void);

/* Symbol: _ZN11unwindstack8DexFilesD1Ev */
/* Demangled: unwindstack::DexFiles::~DexFiles() */
int _ZN11unwindstack8DexFilesD1Ev(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIjE7cfa_nopEPNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfCfa<unsigned int>::cfa_nop(unwindstack::DwarfLocations*) */
int _ZN11unwindstack8DwarfCfaIjE7cfa_nopEPNS_14DwarfLocationsE(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE13LastErrorCodeEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::LastErrorCode() */
int _ZN11unwindstack7DwarfOpIjE13LastErrorCodeEv(void);

/* Symbol: _ZN11unwindstack19MemoryOfflineBuffer5ResetEPKhyy */
/* Demangled: unwindstack::MemoryOfflineBuffer::Reset(unsigned char const*, unsigned long long, unsigned long long) */
int _ZN11unwindstack19MemoryOfflineBuffer5ResetEPKhyy(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE10GetLogInfoEyyPNSt3__16vectorINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS7_IS9_EEEE */
/* Demangled: unwindstack::DwarfOp<unsigned int>::GetLogInfo(unsigned long long, unsigned long long, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >*) */
int _ZN11unwindstack7DwarfOpIjE10GetLogInfoEyyPNSt3__16vectorINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS7_IS9_EEEE(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE6op_nopEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_nop() */
int _ZN11unwindstack7DwarfOpIyE6op_nopEv(void);

/* Symbol: _ZN11unwindstack3Elf8CacheGetEPNS_7MapInfoE */
/* Demangled: unwindstack::Elf::CacheGet(unwindstack::MapInfo*) */
int _ZN11unwindstack3Elf8CacheGetEPNS_7MapInfoE(void);

/* Symbol: _ZN11unwindstack12MemoryRemote4ReadEyPvj */
/* Demangled: unwindstack::MemoryRemote::Read(unsigned long long, void*, unsigned int) */
int _ZN11unwindstack12MemoryRemote4ReadEyPvj(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPN11unwindstack11MemoryCacheENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_pointer<unwindstack::MemoryCache*, std::__1::default_delete<unwindstack::MemoryCache>, std::__1::allocator<unwindstack::MemoryCache> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_pointerIPN11unwindstack11MemoryCacheENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4pairINS_10shared_ptrIN11unwindstack3ElfEEEbEEEENS_22__unordered_map_hasherIS7_SE_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SE_NS_8equal_toIS7_EELb1EEENS5_ISE_EEE8__rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> >, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> > > >::__rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4pairINS_10shared_ptrIN11unwindstack3ElfEEEbEEEENS_22__unordered_map_hasherIS7_SE_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SE_NS_8equal_toIS7_EELb1EEENS5_ISE_EEE8__rehashEj(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE7StackAtEj */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::StackAt(unsigned int) */
int _ZN11unwindstack7DwarfOpIyE7StackAtEj(void);

/* Symbol: _ZNK11unwindstack18LocalUpdatableMaps11GetMapsFileEv */
/* Demangled: unwindstack::LocalUpdatableMaps::GetMapsFile() const */
int _ZNK11unwindstack18LocalUpdatableMaps11GetMapsFileEv(void);

/* Symbol: _ZN11unwindstack7RegsX8622SetPcFromReturnAddressEPNS_6MemoryE */
/* Demangled: unwindstack::RegsX86::SetPcFromReturnAddress(unwindstack::Memory*) */
int _ZN11unwindstack7RegsX8622SetPcFromReturnAddressEPNS_6MemoryE(void);

/* Symbol: _ZTVN11unwindstack8DexFilesE */
/* Demangled: vtable for unwindstack::DexFiles */
extern void* _ZTVN11unwindstack8DexFilesE;

/* Symbol: _ZN11unwindstack8DwarfCfaIyE11cfa_restoreEPNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfCfa<unsigned long long>::cfa_restore(unwindstack::DwarfLocations*) */
int _ZN11unwindstack8DwarfCfaIyE11cfa_restoreEPNS_14DwarfLocationsE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack8DwarfFdeEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE6rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfFde>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfFde>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfFde>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfFde> > >::rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack8DwarfFdeEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE6rehashEj(void);

/* Symbol: _ZN11unwindstack10RegsX86_642pcEv */
/* Demangled: unwindstack::RegsX86_64::pc() */
int _ZN11unwindstack10RegsX86_642pcEv(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE6op_divEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::op_div() */
int _ZN11unwindstack7DwarfOpIjE6op_divEv(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE6op_shrEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::op_shr() */
int _ZN11unwindstack7DwarfOpIjE6op_shrEv(void);

/* Symbol: _ZN11unwindstack16DwarfSectionImplIyE9FillInFdeEPNS_8DwarfFdeE */
/* Demangled: unwindstack::DwarfSectionImpl<unsigned long long>::FillInFde(unwindstack::DwarfFde*) */
int _ZN11unwindstack16DwarfSectionImplIyE9FillInFdeEPNS_8DwarfFdeE(void);

/* Symbol: _ZN11unwindstack6Memory16CreateFileMemoryERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEy */
/* Demangled: unwindstack::Memory::CreateFileMemory(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned long long) */
int _ZN11unwindstack6Memory16CreateFileMemoryERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEy(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN11unwindstack18MemoryFileAtOffsetENS_9allocatorIS2_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<unwindstack::MemoryFileAtOffset, std::__1::allocator<unwindstack::MemoryFileAtOffset> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN11unwindstack18MemoryFileAtOffsetENS_9allocatorIS2_EEEE;

/* Symbol: _ZNSt3__16vectorIN11unwindstack14LocalFrameDataENS_9allocatorIS2_EEE24__emplace_back_slow_pathIJRPNS1_7MapInfoEyyRNS_12basic_stringIcNS_11char_traitsIcEENS3_IcEEEERyEEEvDpOT_ */
/* Demangled: void std::__1::vector<unwindstack::LocalFrameData, std::__1::allocator<unwindstack::LocalFrameData> >::__emplace_back_slow_path<unwindstack::MapInfo*&, unsigned long long, unsigned long long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, unsigned long long&>(unwindstack::MapInfo*&, unsigned long long&&, unsigned long long&&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, unsigned long long&) */
int _ZNSt3__16vectorIN11unwindstack14LocalFrameDataENS_9allocatorIS2_EEE24__emplace_back_slow_pathIJRPNS1_7MapInfoEyyRNS_12basic_stringIcNS_11char_traitsIcEENS3_IcEEEERyEEEvDpOT_(void);

/* Symbol: _ZN11unwindstack10RegsMips6415GetPcAdjustmentEyPNS_3ElfE */
/* Demangled: unwindstack::RegsMips64::GetPcAdjustment(unsigned long long, unwindstack::Elf*) */
int _ZN11unwindstack10RegsMips6415GetPcAdjustmentEyPNS_3ElfE(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIjE3LogEjyyy */
/* Demangled: unwindstack::DwarfCfa<unsigned int>::Log(unsigned int, unsigned long long, unsigned long long, unsigned long long) */
int _ZN11unwindstack8DwarfCfaIjE3LogEjyyy(void);

/* Symbol: _ZN11unwindstack19DwarfEhFrameWithHdrIjE18GetFdeOffsetFromPcEyPy */
/* Demangled: unwindstack::DwarfEhFrameWithHdr<unsigned int>::GetFdeOffsetFromPc(unsigned long long, unsigned long long*) */
int _ZN11unwindstack19DwarfEhFrameWithHdrIjE18GetFdeOffsetFromPcEyPy(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack19DwarfEhFrameWithHdrIyE7FdeInfoEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJOyEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned long long>::FdeInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned long long>::FdeInfo>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned long long>::FdeInfo>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned long long>::FdeInfo>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned long long>::FdeInfo> > >::__emplace_unique_key_args<unsigned long long, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long&&>, std::__1::tuple<> >(unsigned long long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack19DwarfEhFrameWithHdrIyE7FdeInfoEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJOyEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE6op_notEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_not() */
int _ZN11unwindstack7DwarfOpIyE6op_notEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack8DwarfFdeEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS4_PvEEEE */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfFde>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfFde>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfFde>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfFde> > >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfFde>, void*>*>) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack8DwarfFdeEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS4_PvEEEE(void);

/* Symbol: _ZN11unwindstack3Elf19GetLastErrorAddressEv */
/* Demangled: unwindstack::Elf::GetLastErrorAddress() */
int _ZN11unwindstack3Elf19GetLastErrorAddressEv(void);

/* Symbol: _ZTVN11unwindstack10RemoteMapsE */
/* Demangled: vtable for unwindstack::RemoteMaps */
extern void* _ZTVN11unwindstack10RemoteMapsE;

/* Symbol: _ZN7android8procinfo18ReadMapFileContentINSt3__18functionIFvyytymPKcEEEEEbPcRKT_ */
/* Demangled: bool android::procinfo::ReadMapFileContent<std::__1::function<void (unsigned long long, unsigned long long, unsigned short, unsigned long long, unsigned long, char const*)> >(char*, std::__1::function<void (unsigned long long, unsigned long long, unsigned short, unsigned long long, unsigned long, char const*)> const&) */
int _ZN7android8procinfo18ReadMapFileContentINSt3__18functionIFvyytymPKcEEEEEbPcRKT_(void);

/* Symbol: _ZN11unwindstack6Memory10ReadStringEyPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEy */
/* Demangled: unwindstack::Memory::ReadString(unsigned long long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned long long) */
int _ZN11unwindstack6Memory10ReadStringEyPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEy(void);

/* Symbol: _ZN11unwindstack8RegsMips19StepIfSignalHandlerEyPNS_3ElfEPNS_6MemoryE */
/* Demangled: unwindstack::RegsMips::StepIfSignalHandler(unsigned long long, unwindstack::Elf*, unwindstack::Memory*) */
int _ZN11unwindstack8RegsMips19StepIfSignalHandlerEyPNS_3ElfEPNS_6MemoryE(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIjE22cfa_def_cfa_expressionEPNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfCfa<unsigned int>::cfa_def_cfa_expression(unwindstack::DwarfLocations*) */
int _ZN11unwindstack8DwarfCfaIjE22cfa_def_cfa_expressionEPNS_14DwarfLocationsE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack19DwarfEhFrameWithHdrIyE7FdeInfoEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE6rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned long long>::FdeInfo>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned long long>::FdeInfo>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned long long>::FdeInfo>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned long long>::FdeInfo> > >::rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack19DwarfEhFrameWithHdrIyE7FdeInfoEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE6rehashEj(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE18bool_to_dwarf_boolEb */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::bool_to_dwarf_bool(bool) */
int _ZN11unwindstack7DwarfOpIyE18bool_to_dwarf_boolEb(void);

/* Symbol: _ZTVN11unwindstack8JitDebugE */
/* Demangled: vtable for unwindstack::JitDebug */
extern void* _ZTVN11unwindstack8JitDebugE;

/* Symbol: _ZN11unwindstack16DwarfSectionImplIyE9FillInCieEPNS_8DwarfCieE */
/* Demangled: unwindstack::DwarfSectionImpl<unsigned long long>::FillInCie(unwindstack::DwarfCie*) */
int _ZN11unwindstack16DwarfSectionImplIyE9FillInCieEPNS_8DwarfCieE(void);

/* Symbol: _ZN11unwindstack8JitDebug11ProcessArchEv */
/* Demangled: unwindstack::JitDebug::ProcessArch() */
int _ZN11unwindstack8JitDebug11ProcessArchEv(void);

/* Symbol: _ZTVN11unwindstack6MemoryE */
/* Demangled: vtable for unwindstack::Memory */
extern void* _ZTVN11unwindstack6MemoryE;

/* Symbol: _ZN11unwindstack7RegsArm16IterateRegistersENSt3__18functionIFvPKcyEEE */
/* Demangled: unwindstack::RegsArm::IterateRegisters(std::__1::function<void (char const*, unsigned long long)>) */
int _ZN11unwindstack7RegsArm16IterateRegistersENSt3__18functionIFvPKcyEEE(void);

/* Symbol: _ZN11unwindstack8DexFiles11ReadEntry64Ev */
/* Demangled: unwindstack::DexFiles::ReadEntry64() */
int _ZN11unwindstack8DexFiles11ReadEntry64Ev(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE7op_overEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_over() */
int _ZN11unwindstack7DwarfOpIyE7op_overEv(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE6op_nopEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::op_nop() */
int _ZN11unwindstack7DwarfOpIjE6op_nopEv(void);

/* Symbol: _ZN11unwindstack10RegsX86_644ArchEv */
/* Demangled: unwindstack::RegsX86_64::Arch() */
int _ZN11unwindstack10RegsX86_644ArchEv(void);

/* Symbol: _ZN11unwindstack15UnwinderFromPid4InitENS_8ArchEnumE */
/* Demangled: unwindstack::UnwinderFromPid::Init(unwindstack::ArchEnum) */
int _ZN11unwindstack15UnwinderFromPid4InitENS_8ArchEnumE(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE5op_geEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_ge() */
int _ZN11unwindstack7DwarfOpIyE5op_geEv(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE6op_andEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_and() */
int _ZN11unwindstack7DwarfOpIyE6op_andEv(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE6op_braEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_bra() */
int _ZN11unwindstack7DwarfOpIyE6op_braEv(void);

/* Symbol: _ZN11unwindstack8JitDebugC2ERNSt3__110shared_ptrINS_6MemoryEEERNS1_6vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENSA_ISC_EEEE */
/* Demangled: unwindstack::JitDebug::JitDebug(std::__1::shared_ptr<unwindstack::Memory>&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >&) */
int _ZN11unwindstack8JitDebugC2ERNSt3__110shared_ptrINS_6MemoryEEERNS1_6vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENSA_ISC_EEEE(void);

/* Symbol: _ZN11unwindstack7MapInfo15GetFunctionNameEyPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPy */
/* Demangled: unwindstack::MapInfo::GetFunctionName(unsigned long long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned long long*) */
int _ZN11unwindstack7MapInfo15GetFunctionNameEyPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPy(void);

/* Symbol: _ZN11unwindstack7RegsX864ArchEv */
/* Demangled: unwindstack::RegsX86::Arch() */
int _ZN11unwindstack7RegsX864ArchEv(void);

/* Symbol: _ZN11unwindstack8DexFilesC1ERNSt3__110shared_ptrINS_6MemoryEEE */
/* Demangled: unwindstack::DexFiles::DexFiles(std::__1::shared_ptr<unwindstack::Memory>&) */
int _ZN11unwindstack8DexFilesC1ERNSt3__110shared_ptrINS_6MemoryEEE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack19DwarfEhFrameWithHdrIjE7FdeInfoEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE8__rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned int>::FdeInfo>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned int>::FdeInfo>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned int>::FdeInfo>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned int>::FdeInfo> > >::__rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack19DwarfEhFrameWithHdrIjE7FdeInfoEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE8__rehashEj(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE7op_plusEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::op_plus() */
int _ZN11unwindstack7DwarfOpIjE7op_plusEv(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIyE20cfa_def_cfa_registerEPNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfCfa<unsigned long long>::cfa_def_cfa_register(unwindstack::DwarfLocations*) */
int _ZN11unwindstack8DwarfCfaIyE20cfa_def_cfa_registerEPNS_14DwarfLocationsE(void);

/* Symbol: _ZN11unwindstack11DwarfMemory11ReadSLEB128EPx */
/* Demangled: unwindstack::DwarfMemory::ReadSLEB128(long long*) */
int _ZN11unwindstack11DwarfMemory11ReadSLEB128EPx(void);

/* Symbol: _ZN11unwindstack15DwarfDebugFrameIyEC2EPNS_6MemoryE */
/* Demangled: unwindstack::DwarfDebugFrame<unsigned long long>::DwarfDebugFrame(unwindstack::Memory*) */
int _ZN11unwindstack15DwarfDebugFrameIyEC2EPNS_6MemoryE(void);

/* Symbol: _ZN11unwindstack12ElfInterface11GetLoadBiasI9elf64_hdr10elf64_phdrEExPNS_6MemoryE */
/* Demangled: long long unwindstack::ElfInterface::GetLoadBias<elf64_hdr, elf64_phdr>(unwindstack::Memory*) */
int _ZN11unwindstack12ElfInterface11GetLoadBiasI9elf64_hdr10elf64_phdrEExPNS_6MemoryE(void);

/* Symbol: _ZN11unwindstack7RegsX864ReadEPv */
/* Demangled: unwindstack::RegsX86::Read(void*) */
int _ZN11unwindstack7RegsX864ReadEPv(void);

/* Symbol: _ZN11unwindstack7RegsX865CloneEv */
/* Demangled: unwindstack::RegsX86::Clone() */
int _ZN11unwindstack7RegsX865CloneEv(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIyE21cfa_def_cfa_offset_sfEPNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfCfa<unsigned long long>::cfa_def_cfa_offset_sf(unwindstack::DwarfLocations*) */
int _ZN11unwindstack8DwarfCfaIyE21cfa_def_cfa_offset_sfEPNS_14DwarfLocationsE(void);

/* Symbol: _ZN11unwindstack12ElfInterface14ReadAllHeadersI9elf64_hdr10elf64_phdr10elf64_shdrEEbPx */
/* Demangled: bool unwindstack::ElfInterface::ReadAllHeaders<elf64_hdr, elf64_phdr, elf64_shdr>(long long*) */
int _ZN11unwindstack12ElfInterface14ReadAllHeadersI9elf64_hdr10elf64_phdr10elf64_shdrEEbPx(void);

/* Symbol: _ZN11unwindstack18MemoryFileAtOffset4InitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEyy */
/* Demangled: unwindstack::MemoryFileAtOffset::Init(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned long long, unsigned long long) */
int _ZN11unwindstack18MemoryFileAtOffset4InitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEyy(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIjE14cfa_same_valueEPNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfCfa<unsigned int>::cfa_same_value(unwindstack::DwarfLocations*) */
int _ZN11unwindstack8DwarfCfaIjE14cfa_same_valueEPNS_14DwarfLocationsE(void);

/* Symbol: _ZN11unwindstack12ElfInterface11GetLoadBiasI9elf32_hdr10elf32_phdrEExPNS_6MemoryE */
/* Demangled: long long unwindstack::ElfInterface::GetLoadBias<elf32_hdr, elf32_phdr>(unwindstack::Memory*) */
int _ZN11unwindstack12ElfInterface11GetLoadBiasI9elf32_hdr10elf32_phdrEExPNS_6MemoryE(void);

/* Symbol: _ZNSt3__16vectorINS_10unique_ptrIN11unwindstack7MapInfoENS_14default_deleteIS3_EEEENS_9allocatorIS6_EEE24__emplace_back_slow_pathIJPS3_EEEvDpOT_ */
/* Demangled: void std::__1::vector<std::__1::unique_ptr<unwindstack::MapInfo, std::__1::default_delete<unwindstack::MapInfo> >, std::__1::allocator<std::__1::unique_ptr<unwindstack::MapInfo, std::__1::default_delete<unwindstack::MapInfo> > > >::__emplace_back_slow_path<unwindstack::MapInfo*>(unwindstack::MapInfo*&&) */
int _ZNSt3__16vectorINS_10unique_ptrIN11unwindstack7MapInfoENS_14default_deleteIS3_EEEENS_9allocatorIS6_EEE24__emplace_back_slow_pathIJPS3_EEEvDpOT_(void);

/* Symbol: _ZN11unwindstack10RegsX86_6416IterateRegistersENSt3__18functionIFvPKcyEEE */
/* Demangled: unwindstack::RegsX86_64::IterateRegisters(std::__1::function<void (char const*, unsigned long long)>) */
int _ZN11unwindstack10RegsX86_6416IterateRegistersENSt3__18functionIFvPKcyEEE(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE6op_notEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::op_not() */
int _ZN11unwindstack7DwarfOpIjE6op_notEv(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIyE12cfa_registerEPNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfCfa<unsigned long long>::cfa_register(unwindstack::DwarfLocations*) */
int _ZN11unwindstack8DwarfCfaIyE12cfa_registerEPNS_14DwarfLocationsE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack19DwarfEhFrameWithHdrIyE7FdeInfoEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_PvEEEE */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned long long>::FdeInfo>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned long long>::FdeInfo>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned long long>::FdeInfo>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned long long>::FdeInfo> > >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned long long>::FdeInfo>, void*>*>) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack19DwarfEhFrameWithHdrIyE7FdeInfoEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_PvEEEE(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE17kOpHandleFuncListE */
/* Demangled: unwindstack::DwarfOp<unsigned int>::kOpHandleFuncList */
extern void* _ZN11unwindstack7DwarfOpIjE17kOpHandleFuncListE;

/* Symbol: _ZN11unwindstack7DwarfOpIyE5op_eqEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_eq() */
int _ZN11unwindstack7DwarfOpIyE5op_eqEv(void);

/* Symbol: _ZN11unwindstack12ElfInterface9IsValidPcEy */
/* Demangled: unwindstack::ElfInterface::IsValidPc(unsigned long long) */
int _ZN11unwindstack12ElfInterface9IsValidPcEy(void);

/* Symbol: _ZN11unwindstack12ElfInterface18ReadSectionHeadersI9elf64_hdr10elf64_shdrEEvRKT_ */
/* Demangled: void unwindstack::ElfInterface::ReadSectionHeaders<elf64_hdr, elf64_shdr>(elf64_hdr const&) */
int _ZN11unwindstack12ElfInterface18ReadSectionHeadersI9elf64_hdr10elf64_shdrEEvRKT_(void);

/* Symbol: _ZN11unwindstack15ElfInterfaceArm9StepExidxEyPNS_4RegsEPNS_6MemoryEPb */
/* Demangled: unwindstack::ElfInterfaceArm::StepExidx(unsigned long long, unwindstack::Regs*, unwindstack::Memory*, bool*) */
int _ZN11unwindstack15ElfInterfaceArm9StepExidxEyPNS_4RegsEPNS_6MemoryEPb(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE18op_not_implementedEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::op_not_implemented() */
int _ZN11unwindstack7DwarfOpIjE18op_not_implementedEv(void);

/* Symbol: _ZN11unwindstack9RegsArm642spEv */
/* Demangled: unwindstack::RegsArm64::sp() */
int _ZN11unwindstack9RegsArm642spEv(void);

/* Symbol: _ZNSt3__127__insertion_sort_incompleteIRZN11unwindstack7Symbols7GetNameI9elf32_symEEbyPNS1_6MemoryEPNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPyEUlRKNS2_4InfoESH_E_PSF_EEbT0_SL_T_ */
/* Demangled: bool std::__1::__insertion_sort_incomplete<bool unwindstack::Symbols::GetName<elf32_sym>(unsigned long long, unwindstack::Memory*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned long long*)::{lambda(unwindstack::Symbols::Info const&, unwindstack::Symbols::Info const&)#1}&, unwindstack::Symbols::Info*>(unwindstack::Symbols::Info*, unwindstack::Symbols::Info*, bool unwindstack::Symbols::GetName<elf32_sym>(unsigned long long, unwindstack::Memory*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned long long*)::{lambda(unwindstack::Symbols::Info const&, unwindstack::Symbols::Info const&)#1}&) */
int _ZNSt3__127__insertion_sort_incompleteIRZN11unwindstack7Symbols7GetNameI9elf32_symEEbyPNS1_6MemoryEPNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPyEUlRKNS2_4InfoESH_E_PSF_EEbT0_SL_T_(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIjE21cfa_def_cfa_offset_sfEPNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfCfa<unsigned int>::cfa_def_cfa_offset_sf(unwindstack::DwarfLocations*) */
int _ZN11unwindstack8DwarfCfaIjE21cfa_def_cfa_offset_sfEPNS_14DwarfLocationsE(void);

/* Symbol: _ZN11unwindstack12ElfInterface14ReadAllHeadersI9elf32_hdr10elf32_phdr10elf32_shdrEEbPx */
/* Demangled: bool unwindstack::ElfInterface::ReadAllHeaders<elf32_hdr, elf32_phdr, elf32_shdr>(long long*) */
int _ZN11unwindstack12ElfInterface14ReadAllHeadersI9elf32_hdr10elf32_phdr10elf32_shdrEEbPx(void);

/* Symbol: _ZN11unwindstack11DwarfMemory9ReadBytesEPvj */
/* Demangled: unwindstack::DwarfMemory::ReadBytes(void*, unsigned int) */
int _ZN11unwindstack11DwarfMemory9ReadBytesEPvj(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIyE10last_errorEv */
/* Demangled: unwindstack::DwarfCfa<unsigned long long>::last_error() */
int _ZN11unwindstack8DwarfCfaIyE10last_errorEv(void);

/* Symbol: _ZN11unwindstack3Elf25CreateInterfaceFromMemoryEPNS_6MemoryE */
/* Demangled: unwindstack::Elf::CreateInterfaceFromMemory(unwindstack::Memory*) */
int _ZN11unwindstack3Elf25CreateInterfaceFromMemoryEPNS_6MemoryE(void);

/* Symbol: _ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EERKS9_S6_ */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::operator+<char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char) */
int _ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EERKS9_S6_(void);

/* Symbol: _ZN11unwindstack7Symbols9GetGlobalI9elf32_symEEbPNS_6MemoryERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPy */
/* Demangled: bool unwindstack::Symbols::GetGlobal<elf32_sym>(unwindstack::Memory*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned long long*) */
int _ZN11unwindstack7Symbols9GetGlobalI9elf32_symEEbPNS_6MemoryERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPy(void);

/* Symbol: _ZN11unwindstack15ElfInterfaceArm4StepEyPNS_4RegsEPNS_6MemoryEPb */
/* Demangled: unwindstack::ElfInterfaceArm::Step(unsigned long long, unwindstack::Regs*, unwindstack::Memory*, bool*) */
int _ZN11unwindstack15ElfInterfaceArm4StepEyPNS_4RegsEPNS_6MemoryEPb(void);

/* Symbol: _ZN11unwindstack8RegsMips18CreateFromUcontextEPv */
/* Demangled: unwindstack::RegsMips::CreateFromUcontext(void*) */
int _ZN11unwindstack8RegsMips18CreateFromUcontextEPv(void);

/* Symbol: _ZN11unwindstack8DexFiles20GetMethodInformationEPNS_4MapsEPNS_7MapInfoEyPNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPy */
/* Demangled: unwindstack::DexFiles::GetMethodInformation(unwindstack::Maps*, unwindstack::MapInfo*, unsigned long long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned long long*) */
int _ZN11unwindstack8DexFiles20GetMethodInformationEPNS_4MapsEPNS_7MapInfoEyPNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPy(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack19DwarfEhFrameWithHdrIjE7FdeInfoEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_PvEEEE */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned int>::FdeInfo>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned int>::FdeInfo>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned int>::FdeInfo>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned int>::FdeInfo> > >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned int>::FdeInfo>, void*>*>) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack19DwarfEhFrameWithHdrIjE7FdeInfoEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_PvEEEE(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE6op_andEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::op_and() */
int _ZN11unwindstack7DwarfOpIjE6op_andEv(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE6op_braEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::op_bra() */
int _ZN11unwindstack7DwarfOpIjE6op_braEv(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE8op_minusEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_minus() */
int _ZN11unwindstack7DwarfOpIyE8op_minusEv(void);

/* Symbol: _ZTVN11unwindstack15DwarfDebugFrameIyEE */
/* Demangled: vtable for unwindstack::DwarfDebugFrame<unsigned long long> */
extern void* _ZTVN11unwindstack15DwarfDebugFrameIyEE;

/* Symbol: _ZN11unwindstack3Elf23GetGlobalVariableOffsetERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPy */
/* Demangled: unwindstack::Elf::GetGlobalVariableOffset(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned long long*) */
int _ZN11unwindstack3Elf23GetGlobalVariableOffsetERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPy(void);

/* Symbol: _ZN11unwindstack18MemoryFileAtOffset4ReadEyPvj */
/* Demangled: unwindstack::MemoryFileAtOffset::Read(unsigned long long, void*, unsigned int) */
int _ZN11unwindstack18MemoryFileAtOffset4ReadEyPvj(void);

/* Symbol: _ZN11unwindstack8RegsMips2spEv */
/* Demangled: unwindstack::RegsMips::sp() */
int _ZN11unwindstack8RegsMips2spEv(void);

/* Symbol: _ZNK11unwindstack8Unwinder11FormatFrameEj */
/* Demangled: unwindstack::Unwinder::FormatFrame(unsigned int) const */
int _ZNK11unwindstack8Unwinder11FormatFrameEj(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIyE17cfa_restore_stateEPNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfCfa<unsigned long long>::cfa_restore_state(unwindstack::DwarfLocations*) */
int _ZN11unwindstack8DwarfCfaIyE17cfa_restore_stateEPNS_14DwarfLocationsE(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPN11unwindstack12MemoryRemoteENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_pointer<unwindstack::MemoryRemote*, std::__1::default_delete<unwindstack::MemoryRemote>, std::__1::allocator<unwindstack::MemoryRemote> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_pointerIPN11unwindstack12MemoryRemoteENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN11unwindstack7RegsArm4ReadEPv */
/* Demangled: unwindstack::RegsArm::Read(void*) */
int _ZN11unwindstack7RegsArm4ReadEPv(void);

/* Symbol: _ZN11unwindstack7RegsArm5CloneEv */
/* Demangled: unwindstack::RegsArm::Clone() */
int _ZN11unwindstack7RegsArm5CloneEv(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIjEEvOT_ */
/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int>(unsigned int&&) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIjEEvOT_(void);

/* Symbol: _ZN11unwindstack7RegsArm2spEv */
/* Demangled: unwindstack::RegsArm::sp() */
int _ZN11unwindstack7RegsArm2spEv(void);

/* Symbol: _ZN11unwindstack9RegsArm642pcEv */
/* Demangled: unwindstack::RegsArm64::pc() */
int _ZN11unwindstack9RegsArm642pcEv(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIjE18cfa_val_expressionEPNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfCfa<unsigned int>::cfa_val_expression(unwindstack::DwarfLocations*) */
int _ZN11unwindstack8DwarfCfaIjE18cfa_val_expressionEPNS_14DwarfLocationsE(void);

/* Symbol: _ZN11unwindstack16DwarfSectionImplIjE16GetCieFromOffsetEy */
/* Demangled: unwindstack::DwarfSectionImpl<unsigned int>::GetCieFromOffset(unsigned long long) */
int _ZN11unwindstack16DwarfSectionImplIjE16GetCieFromOffsetEy(void);

/* Symbol: _ZN11unwindstack18LocalUpdatableMaps7ReparseEv */
/* Demangled: unwindstack::LocalUpdatableMaps::Reparse() */
int _ZN11unwindstack18LocalUpdatableMaps7ReparseEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPN11unwindstack19MemoryOfflineBufferENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_pointer<unwindstack::MemoryOfflineBuffer*, std::__1::default_delete<unwindstack::MemoryOfflineBuffer>, std::__1::allocator<unwindstack::MemoryOfflineBuffer> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_pointerIPN11unwindstack19MemoryOfflineBufferENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZTVN11unwindstack13MemoryOfflineE */
/* Demangled: vtable for unwindstack::MemoryOffline */
extern void* _ZTVN11unwindstack13MemoryOfflineE;

/* Symbol: _ZN11unwindstack7SymbolsC2Eyyyyy */
/* Demangled: unwindstack::Symbols::Symbols(unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long) */
int _ZN11unwindstack7SymbolsC2Eyyyyy(void);

/* Symbol: _ZN11unwindstack12ElfInterface29GetGlobalVariableWithTemplateI9elf64_symEEbRKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPy */
/* Demangled: bool unwindstack::ElfInterface::GetGlobalVariableWithTemplate<elf64_sym>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned long long*) */
int _ZN11unwindstack12ElfInterface29GetGlobalVariableWithTemplateI9elf64_symEEbRKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPy(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIjE17cfa_val_offset_sfEPNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfCfa<unsigned int>::cfa_val_offset_sf(unwindstack::DwarfLocations*) */
int _ZN11unwindstack8DwarfCfaIjE17cfa_val_offset_sfEPNS_14DwarfLocationsE(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIyE10cfa_offsetEPNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfCfa<unsigned long long>::cfa_offset(unwindstack::DwarfLocations*) */
int _ZN11unwindstack8DwarfCfaIyE10cfa_offsetEPNS_14DwarfLocationsE(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIyE14kCallbackTableE */
/* Demangled: unwindstack::DwarfCfa<unsigned long long>::kCallbackTable */
extern void* _ZN11unwindstack8DwarfCfaIyE14kCallbackTableE;

/* Symbol: _ZN11unwindstack7MapInfo6GetElfERKNSt3__110shared_ptrINS_6MemoryEEENS_8ArchEnumE */
/* Demangled: unwindstack::MapInfo::GetElf(std::__1::shared_ptr<unwindstack::Memory> const&, unwindstack::ArchEnum) */
int _ZN11unwindstack7MapInfo6GetElfERKNSt3__110shared_ptrINS_6MemoryEEENS_8ArchEnumE(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIjE14kCallbackTableE */
/* Demangled: unwindstack::DwarfCfa<unsigned int>::kCallbackTable */
extern void* _ZN11unwindstack8DwarfCfaIjE14kCallbackTableE;

/* Symbol: _ZN11unwindstack8RegsMips2pcEv */
/* Demangled: unwindstack::RegsMips::pc() */
int _ZN11unwindstack8RegsMips2pcEv(void);

/* Symbol: _ZN11unwindstack12ElfInterfaceD1Ev */
/* Demangled: unwindstack::ElfInterface::~ElfInterface() */
int _ZN11unwindstack12ElfInterfaceD1Ev(void);

/* Symbol: _ZN11unwindstack8JitDebugD2Ev */
/* Demangled: unwindstack::JitDebug::~JitDebug() */
int _ZN11unwindstack8JitDebugD2Ev(void);

/* Symbol: _ZN11unwindstack19DwarfEhFrameWithHdrIyE4InitEyyx */
/* Demangled: unwindstack::DwarfEhFrameWithHdr<unsigned long long>::Init(unsigned long long, unsigned long long, long long) */
int _ZN11unwindstack19DwarfEhFrameWithHdrIyE4InitEyyx(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPN11unwindstack11MemoryLocalENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_pointer<unwindstack::MemoryLocal*, std::__1::default_delete<unwindstack::MemoryLocal>, std::__1::allocator<unwindstack::MemoryLocal> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_pointerIPN11unwindstack11MemoryLocalENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN11unwindstack7RegsArm2pcEv */
/* Demangled: unwindstack::RegsArm::pc() */
int _ZN11unwindstack7RegsArm2pcEv(void);

/* Symbol: _ZN11unwindstack8Unwinder6UnwindEPKNSt3__16vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS6_IS8_EEEESC_ */
/* Demangled: unwindstack::Unwinder::Unwind(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const*, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const*) */
int _ZN11unwindstack8Unwinder6UnwindEPKNSt3__16vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS6_IS8_EEEESC_(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIyEC1EPNS_11DwarfMemoryEPKNS_8DwarfFdeE */
/* Demangled: unwindstack::DwarfCfa<unsigned long long>::DwarfCfa(unwindstack::DwarfMemory*, unwindstack::DwarfFde const*) */
int _ZN11unwindstack8DwarfCfaIyEC1EPNS_11DwarfMemoryEPKNS_8DwarfFdeE(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjEC1EPNS_11DwarfMemoryEPNS_6MemoryE */
/* Demangled: unwindstack::DwarfOp<unsigned int>::DwarfOp(unwindstack::DwarfMemory*, unwindstack::Memory*) */
int _ZN11unwindstack7DwarfOpIjEC1EPNS_11DwarfMemoryEPNS_6MemoryE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIhiEENS_19__map_value_compareIhS2_NS_4lessIhEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned char, int>, std::__1::__map_value_compare<unsigned char, std::__1::__value_type<unsigned char, int>, std::__1::less<unsigned char>, true>, std::__1::allocator<std::__1::__value_type<unsigned char, int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned char, int>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIhiEENS_19__map_value_compareIhS2_NS_4lessIhEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE(void);

/* Symbol: _ZN11unwindstack6Global7SetArchENS_8ArchEnumE */
/* Demangled: unwindstack::Global::SetArch(unwindstack::ArchEnum) */
int _ZN11unwindstack6Global7SetArchENS_8ArchEnumE(void);

/* Symbol: _ZN11unwindstack19DwarfEhFrameWithHdrIyE12GetFdeFromPcEy */
/* Demangled: unwindstack::DwarfEhFrameWithHdr<unsigned long long>::GetFdeFromPc(unsigned long long) */
int _ZN11unwindstack19DwarfEhFrameWithHdrIyE12GetFdeFromPcEy(void);

/* Symbol: _ZN11unwindstack12ElfInterface24CreateGnuDebugdataMemoryEv */
/* Demangled: unwindstack::ElfInterface::CreateGnuDebugdataMemory() */
int _ZN11unwindstack12ElfInterface24CreateGnuDebugdataMemoryEv(void);

/* Symbol: _ZN11unwindstack13LocalUnwinder4InitEv */
/* Demangled: unwindstack::LocalUnwinder::Init() */
int _ZN11unwindstack13LocalUnwinder4InitEv(void);

/* Symbol: _ZN11unwindstack7RegsArmC2Ev */
/* Demangled: unwindstack::RegsArm::RegsArm() */
int _ZN11unwindstack7RegsArmC2Ev(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIyE13LastErrorCodeEv */
/* Demangled: unwindstack::DwarfCfa<unsigned long long>::LastErrorCode() */
int _ZN11unwindstack8DwarfCfaIyE13LastErrorCodeEv(void);

/* Symbol: _ZN11unwindstack8DexFiles10GetDexFileEyPNS_7MapInfoE */
/* Demangled: unwindstack::DexFiles::GetDexFile(unsigned long long, unwindstack::MapInfo*) */
int _ZN11unwindstack8DexFiles10GetDexFileEyPNS_7MapInfoE(void);

/* Symbol: _ZNSt3__16vectorIyNS_9allocatorIyEEE21__push_back_slow_pathIRKyEEvOT_ */
/* Demangled: void std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> >::__push_back_slow_path<unsigned long long const&>(unsigned long long const&) */
int _ZNSt3__16vectorIyNS_9allocatorIyEEE21__push_back_slow_pathIRKyEEvOT_(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIjE13LastErrorCodeEv */
/* Demangled: unwindstack::DwarfCfa<unsigned int>::LastErrorCode() */
int _ZN11unwindstack8DwarfCfaIjE13LastErrorCodeEv(void);

/* Symbol: _ZNSt3__112__deque_baseIN11unwindstack14DwarfLocationsENS_9allocatorIS2_EEE5clearEv */
/* Demangled: std::__1::__deque_base<unwindstack::DwarfLocations, std::__1::allocator<unwindstack::DwarfLocations> >::clear() */
int _ZNSt3__112__deque_baseIN11unwindstack14DwarfLocationsENS_9allocatorIS2_EEE5clearEv(void);

/* Symbol: _ZN11unwindstack16DwarfSectionImplIjE15GetNextCieOrFdeEPPKNS_8DwarfFdeE */
/* Demangled: unwindstack::DwarfSectionImpl<unsigned int>::GetNextCieOrFde(unwindstack::DwarfFde const**) */
int _ZN11unwindstack16DwarfSectionImplIjE15GetNextCieOrFdeEPPKNS_8DwarfFdeE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack14DwarfLocationsEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE4findIyEENS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEERKT_ */
/* Demangled: std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfLocations>, void*>*> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfLocations>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfLocations>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfLocations>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfLocations> > >::find<unsigned long long>(unsigned long long const&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack14DwarfLocationsEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE4findIyEENS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEERKT_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4pairINS_10shared_ptrIN11unwindstack3ElfEEEbEEEENS_22__unordered_map_hasherIS7_SE_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SE_NS_8equal_toIS7_EELb1EEENS5_ISE_EEED2Ev */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> >, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> > > >::~__hash_table() */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4pairINS_10shared_ptrIN11unwindstack3ElfEEEbEEEENS_22__unordered_map_hasherIS7_SE_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SE_NS_8equal_toIS7_EELb1EEENS5_ISE_EEED2Ev(void);

/* Symbol: _ZN11unwindstack10RegsMips644ArchEv */
/* Demangled: unwindstack::RegsMips64::Arch() */
int _ZN11unwindstack10RegsMips644ArchEv(void);

/* Symbol: _ZN11unwindstack11DwarfMemory10ReadSignedIiEEbPy */
/* Demangled: bool unwindstack::DwarfMemory::ReadSigned<int>(unsigned long long*) */
int _ZN11unwindstack11DwarfMemory10ReadSignedIiEEbPy(void);

/* Symbol: _ZNSt3__15dequeIjNS_9allocatorIjEEE20__add_front_capacityEv */
/* Demangled: std::__1::deque<unsigned int, std::__1::allocator<unsigned int> >::__add_front_capacity() */
int _ZNSt3__15dequeIjNS_9allocatorIjEEE20__add_front_capacityEv(void);

/* Symbol: _ZN11unwindstack6Global19FindAndReadVariableEPNS_4MapsEPKc */
/* Demangled: unwindstack::Global::FindAndReadVariable(unwindstack::Maps*, char const*) */
int _ZN11unwindstack6Global19FindAndReadVariableEPNS_4MapsEPKc(void);

/* Symbol: _ZTVN11unwindstack8DwarfCfaIyEE */
/* Demangled: vtable for unwindstack::DwarfCfa<unsigned long long> */
extern void* _ZTVN11unwindstack8DwarfCfaIyEE;

/* Symbol: _ZN11unwindstack11DwarfMemory14GetEncodedSizeIjEEjh */
/* Demangled: unsigned int unwindstack::DwarfMemory::GetEncodedSize<unsigned int>(unsigned char) */
int _ZN11unwindstack11DwarfMemory14GetEncodedSizeIjEEjh(void);

/* Symbol: _ZN11unwindstack18MemoryOfflinePartsD0Ev */
/* Demangled: unwindstack::MemoryOfflineParts::~MemoryOfflineParts() */
int _ZN11unwindstack18MemoryOfflinePartsD0Ev(void);

/* Symbol: _ZN11unwindstack7Symbols7GetNameI9elf64_symEEbyPNS_6MemoryEPNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPy */
/* Demangled: bool unwindstack::Symbols::GetName<elf64_sym>(unsigned long long, unwindstack::Memory*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned long long*) */
int _ZN11unwindstack7Symbols7GetNameI9elf64_symEEbyPNS_6MemoryEPNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPy(void);

/* Symbol: _ZN11unwindstack8JitDebug4InitEPNS_4MapsE */
/* Demangled: unwindstack::JitDebug::Init(unwindstack::Maps*) */
int _ZN11unwindstack8JitDebug4InitEPNS_4MapsE(void);

/* Symbol: _ZN11unwindstack4Regs15CreateFromLocalEv */
/* Demangled: unwindstack::Regs::CreateFromLocal() */
int _ZN11unwindstack4Regs15CreateFromLocalEv(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE9StackSizeEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::StackSize() */
int _ZN11unwindstack7DwarfOpIjE9StackSizeEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN11unwindstack13DwarfLocationEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS4_PvEEEE */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation> > >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, void*>*>) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN11unwindstack13DwarfLocationEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS4_PvEEEE(void);

/* Symbol: _ZN11unwindstack19DwarfEhFrameWithHdrIyEC1EPNS_6MemoryE */
/* Demangled: unwindstack::DwarfEhFrameWithHdr<unsigned long long>::DwarfEhFrameWithHdr(unwindstack::Memory*) */
int _ZN11unwindstack19DwarfEhFrameWithHdrIyEC1EPNS_6MemoryE(void);

/* Symbol: _ZTVN11unwindstack10RegsMips64E */
/* Demangled: vtable for unwindstack::RegsMips64 */
extern void* _ZTVN11unwindstack10RegsMips64E;

/* Symbol: _ZNSt3__15dequeIhNS_9allocatorIhEEE9push_backERKh */
/* Demangled: std::__1::deque<unsigned char, std::__1::allocator<unsigned char> >::push_back(unsigned char const&) */
int _ZNSt3__15dequeIhNS_9allocatorIhEEE9push_backERKh(void);

/* Symbol: _ZN11unwindstack16DwarfSectionImplIyE3LogEhyPKNS_8DwarfFdeE */
/* Demangled: unwindstack::DwarfSectionImpl<unsigned long long>::Log(unsigned char, unsigned long long, unwindstack::DwarfFde const*) */
int _ZN11unwindstack16DwarfSectionImplIyE3LogEhyPKNS_8DwarfFdeE(void);

/* Symbol: _ZN11unwindstack19DwarfEhFrameWithHdrIjE4InitEyyx */
/* Demangled: unwindstack::DwarfEhFrameWithHdr<unsigned int>::Init(unsigned long long, unsigned long long, long long) */
int _ZN11unwindstack19DwarfEhFrameWithHdrIjE4InitEyyx(void);

/* Symbol: _ZN11unwindstack15DwarfDebugFrameIjEC1EPNS_6MemoryE */
/* Demangled: unwindstack::DwarfDebugFrame<unsigned int>::DwarfDebugFrame(unwindstack::Memory*) */
int _ZN11unwindstack15DwarfDebugFrameIjEC1EPNS_6MemoryE(void);

/* Symbol: _ZN11unwindstack7MapInfoD1Ev */
/* Demangled: unwindstack::MapInfo::~MapInfo() */
int _ZN11unwindstack7MapInfoD1Ev(void);

/* Symbol: _ZN11unwindstack10RegsMips642spEv */
/* Demangled: unwindstack::RegsMips64::sp() */
int _ZN11unwindstack10RegsMips642spEv(void);

/* Symbol: _ZN11unwindstack11DwarfMemory18AdjustEncodedValueEhPy */
/* Demangled: unwindstack::DwarfMemory::AdjustEncodedValue(unsigned char, unsigned long long*) */
int _ZN11unwindstack11DwarfMemory18AdjustEncodedValueEhPy(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE7op_swapEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_swap() */
int _ZN11unwindstack7DwarfOpIyE7op_swapEv(void);

/* Symbol: _ZN11unwindstack3Elf11cache_lock_E */
/* Demangled: unwindstack::Elf::cache_lock_ */
extern void* _ZN11unwindstack3Elf11cache_lock_E;

/* Symbol: _ZN11unwindstack6Global10SearchableERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: unwindstack::Global::Searchable(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN11unwindstack6Global10SearchableERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN11unwindstack8DexFilesD2Ev */
/* Demangled: unwindstack::DexFiles::~DexFiles() */
int _ZN11unwindstack8DexFilesD2Ev(void);

/* Symbol: _ZTVN11unwindstack15DwarfDebugFrameIjEE */
/* Demangled: vtable for unwindstack::DwarfDebugFrame<unsigned int> */
extern void* _ZTVN11unwindstack15DwarfDebugFrameIjEE;

/* Symbol: _ZTVN11unwindstack8RegsImplIyEE */
/* Demangled: vtable for unwindstack::RegsImpl<unsigned long long> */
extern void* _ZTVN11unwindstack8RegsImplIyEE;

/* Symbol: _ZN11unwindstack11DwarfMemory11ReadULEB128EPy */
/* Demangled: unwindstack::DwarfMemory::ReadULEB128(unsigned long long*) */
int _ZN11unwindstack11DwarfMemory11ReadULEB128EPy(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE6op_modEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_mod() */
int _ZN11unwindstack7DwarfOpIyE6op_modEv(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE8op_bregxEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_bregx() */
int _ZN11unwindstack7DwarfOpIyE8op_bregxEv(void);

/* Symbol: _ZN11unwindstack8JitDebug14ReadEntry32PadEPyS1_ */
/* Demangled: unwindstack::JitDebug::ReadEntry32Pad(unsigned long long*, unsigned long long*) */
int _ZN11unwindstack8JitDebug14ReadEntry32PadEPyS1_(void);

/* Symbol: _ZTVN11unwindstack12DwarfSectionE */
/* Demangled: vtable for unwindstack::DwarfSection */
extern void* _ZTVN11unwindstack12DwarfSectionE;

/* Symbol: _ZN11unwindstack12MemoryRanges6InsertEPNS_11MemoryRangeE */
/* Demangled: unwindstack::MemoryRanges::Insert(unwindstack::MemoryRange*) */
int _ZN11unwindstack12MemoryRanges6InsertEPNS_11MemoryRangeE(void);

/* Symbol: _ZN11unwindstack10RegsMips6422SetPcFromReturnAddressEPNS_6MemoryE */
/* Demangled: unwindstack::RegsMips64::SetPcFromReturnAddress(unwindstack::Memory*) */
int _ZN11unwindstack10RegsMips6422SetPcFromReturnAddressEPNS_6MemoryE(void);

/* Symbol: _ZN11unwindstack14GetBuildIDInfoI9elf32_hdr10elf32_shdrEEbPNS_6MemoryEPyS5_ */
/* Demangled: bool unwindstack::GetBuildIDInfo<elf32_hdr, elf32_shdr>(unwindstack::Memory*, unsigned long long*, unsigned long long*) */
int _ZN11unwindstack14GetBuildIDInfoI9elf32_hdr10elf32_shdrEEbPNS_6MemoryEPyS5_(void);

/* Symbol: _ZN11unwindstack9RegsArm646set_spEy */
/* Demangled: unwindstack::RegsArm64::set_sp(unsigned long long) */
int _ZN11unwindstack9RegsArm646set_spEy(void);

/* Symbol: _ZN11unwindstack3Elf16GetLastErrorCodeEv */
/* Demangled: unwindstack::Elf::GetLastErrorCode() */
int _ZN11unwindstack3Elf16GetLastErrorCodeEv(void);

/* Symbol: _ZN11unwindstack8JitDebugC2ERNSt3__110shared_ptrINS_6MemoryEEE */
/* Demangled: unwindstack::JitDebug::JitDebug(std::__1::shared_ptr<unwindstack::Memory>&) */
int _ZN11unwindstack8JitDebugC2ERNSt3__110shared_ptrINS_6MemoryEEE(void);

/* Symbol: _ZN11unwindstack10BufferMaps5ParseEv */
/* Demangled: unwindstack::BufferMaps::Parse() */
int _ZN11unwindstack10BufferMaps5ParseEv(void);

/* Symbol: _ZN11unwindstack10RegsX86_6422SetPcFromReturnAddressEPNS_6MemoryE */
/* Demangled: unwindstack::RegsX86_64::SetPcFromReturnAddress(unwindstack::Memory*) */
int _ZN11unwindstack10RegsX86_6422SetPcFromReturnAddressEPNS_6MemoryE(void);

/* Symbol: _ZN11unwindstack10RegsMips642pcEv */
/* Demangled: unwindstack::RegsMips64::pc() */
int _ZN11unwindstack10RegsMips642pcEv(void);

/* Symbol: _ZN11unwindstack8DexFilesC1ERNSt3__110shared_ptrINS_6MemoryEEERNS1_6vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENSA_ISC_EEEE */
/* Demangled: unwindstack::DexFiles::DexFiles(std::__1::shared_ptr<unwindstack::Memory>&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >&) */
int _ZN11unwindstack8DexFilesC1ERNSt3__110shared_ptrINS_6MemoryEEERNS1_6vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENSA_ISC_EEEE(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIjE16GetOperandStringEhyPy */
/* Demangled: unwindstack::DwarfCfa<unsigned int>::GetOperandString(unsigned char, unsigned long long, unsigned long long*) */
int _ZN11unwindstack8DwarfCfaIjE16GetOperandStringEhyPy(void);

/* Symbol: _ZN11unwindstack16DwarfSectionImplIyE4InitEyyx */
/* Demangled: unwindstack::DwarfSectionImpl<unsigned long long>::Init(unsigned long long, unsigned long long, long long) */
int _ZN11unwindstack16DwarfSectionImplIyE4InitEyyx(void);

/* Symbol: _ZN11unwindstack8DexFiles16ReadVariableDataEy */
/* Demangled: unwindstack::DexFiles::ReadVariableData(unsigned long long) */
int _ZN11unwindstack8DexFiles16ReadVariableDataEy(void);

/* Symbol: _ZNSt3__16vectorIyNS_9allocatorIyEEE21__push_back_slow_pathIyEEvOT_ */
/* Demangled: void std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> >::__push_back_slow_path<unsigned long long>(unsigned long long&&) */
int _ZNSt3__16vectorIyNS_9allocatorIyEEE21__push_back_slow_pathIyEEvOT_(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIyE7cfa_nopEPNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfCfa<unsigned long long>::cfa_nop(unwindstack::DwarfLocations*) */
int _ZN11unwindstack8DwarfCfaIyE7cfa_nopEPNS_14DwarfLocationsE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack14DwarfLocationsEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE6rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfLocations>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfLocations>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfLocations>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfLocations> > >::rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack14DwarfLocationsEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE6rehashEj(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack8DwarfCieEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE8__rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfCie>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfCie>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfCie>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfCie> > >::__rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack8DwarfCieEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE8__rehashEj(void);

/* Symbol: _ZN11unwindstack3Elf4InitEv */
/* Demangled: unwindstack::Elf::Init() */
int _ZN11unwindstack3Elf4InitEv(void);

/* Symbol: _ZNSt3__16vectorIN11unwindstack14LocalFrameDataENS_9allocatorIS2_EEE24__emplace_back_slow_pathIJRPNS1_7MapInfoEyyRA1_KciEEEvDpOT_ */
/* Demangled: void std::__1::vector<unwindstack::LocalFrameData, std::__1::allocator<unwindstack::LocalFrameData> >::__emplace_back_slow_path<unwindstack::MapInfo*&, unsigned long long, unsigned long long, char const (&) [1], int>(unwindstack::MapInfo*&, unsigned long long&&, unsigned long long&&, char const (&) [1], int&&) */
int _ZNSt3__16vectorIN11unwindstack14LocalFrameDataENS_9allocatorIS2_EEE24__emplace_back_slow_pathIJRPNS1_7MapInfoEyyRA1_KciEEEvDpOT_(void);

/* Symbol: _ZN11unwindstack10RegsX86_646set_spEy */
/* Demangled: unwindstack::RegsX86_64::set_sp(unsigned long long) */
int _ZN11unwindstack10RegsX86_646set_spEy(void);

/* Symbol: _ZN11unwindstack19DwarfEhFrameWithHdrIyE11EhFrameInitEyyx */
/* Demangled: unwindstack::DwarfEhFrameWithHdr<unsigned long long>::EhFrameInit(unsigned long long, unsigned long long, long long) */
int _ZN11unwindstack19DwarfEhFrameWithHdrIyE11EhFrameInitEyyx(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPN11unwindstack3ElfENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_pointer<unwindstack::Elf*, std::__1::default_delete<unwindstack::Elf>, std::__1::allocator<unwindstack::Elf> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_pointerIPN11unwindstack3ElfENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN11unwindstack4Maps4SortEv */
/* Demangled: unwindstack::Maps::Sort() */
int _ZN11unwindstack4Maps4SortEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyA4096_hEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE8__rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unsigned char [4096]>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned char [4096]>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned char [4096]>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned char [4096]> > >::__rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyA4096_hEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE8__rehashEj(void);

/* Symbol: _ZNSt3__16vectorIN11unwindstack7Symbols4InfoENS_9allocatorIS3_EEE24__emplace_back_slow_pathIJRyS8_yEEEvDpOT_ */
/* Demangled: void std::__1::vector<unwindstack::Symbols::Info, std::__1::allocator<unwindstack::Symbols::Info> >::__emplace_back_slow_path<unsigned long long&, unsigned long long&, unsigned long long>(unsigned long long&, unsigned long long&, unsigned long long&&) */
int _ZNSt3__16vectorIN11unwindstack7Symbols4InfoENS_9allocatorIS3_EEE24__emplace_back_slow_pathIJRyS8_yEEEvDpOT_(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIyE14cfa_val_offsetEPNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfCfa<unsigned long long>::cfa_val_offset(unwindstack::DwarfLocations*) */
int _ZN11unwindstack8DwarfCfaIyE14cfa_val_offsetEPNS_14DwarfLocationsE(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE7op_dropEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::op_drop() */
int _ZN11unwindstack7DwarfOpIjE7op_dropEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack8DwarfCieEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJRKyEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfCie>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfCie>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfCie>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfCie>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfCie> > >::__emplace_unique_key_args<unsigned long long, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long const&>, std::__1::tuple<> >(unsigned long long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack8DwarfCieEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJRKyEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN11unwindstack3Elf17SetCachingEnabledEb */
/* Demangled: unwindstack::Elf::SetCachingEnabled(bool) */
int _ZN11unwindstack3Elf17SetCachingEnabledEb(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyA4096_hEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS3_PvEEEE */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unsigned char [4096]>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned char [4096]>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned char [4096]>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned char [4096]> > >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned char [4096]>, void*>*>) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyA4096_hEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS3_PvEEEE(void);

/* Symbol: _ZN11unwindstack4Regs18CreateFromUcontextENS_8ArchEnumEPv */
/* Demangled: unwindstack::Regs::CreateFromUcontext(unwindstack::ArchEnum, void*) */
int _ZN11unwindstack4Regs18CreateFromUcontextENS_8ArchEnumEPv(void);

/* Symbol: _ZN11unwindstack9RegsArm6415GetPcAdjustmentEyPNS_3ElfE */
/* Demangled: unwindstack::RegsArm64::GetPcAdjustment(unsigned long long, unwindstack::Elf*) */
int _ZN11unwindstack9RegsArm6415GetPcAdjustmentEyPNS_3ElfE(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIyE14cfa_def_cfa_sfEPNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfCfa<unsigned long long>::cfa_def_cfa_sf(unwindstack::DwarfLocations*) */
int _ZN11unwindstack8DwarfCfaIyE14cfa_def_cfa_sfEPNS_14DwarfLocationsE(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE16LastErrorAddressEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::LastErrorAddress() */
int _ZN11unwindstack7DwarfOpIjE16LastErrorAddressEv(void);

/* Symbol: _ZN11unwindstack9RegsArm646set_pcEy */
/* Demangled: unwindstack::RegsArm64::set_pc(unsigned long long) */
int _ZN11unwindstack9RegsArm646set_pcEy(void);

/* Symbol: _ZN11unwindstack16DwarfSectionImplIjE16GetFdeFromOffsetEy */
/* Demangled: unwindstack::DwarfSectionImpl<unsigned int>::GetFdeFromOffset(unsigned long long) */
int _ZN11unwindstack16DwarfSectionImplIjE16GetFdeFromOffsetEy(void);

/* Symbol: _ZN11unwindstack3Elf9CacheLockEv */
/* Demangled: unwindstack::Elf::CacheLock() */
int _ZN11unwindstack3Elf9CacheLockEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4pairINS_10shared_ptrIN11unwindstack3ElfEEEbEEEENS_22__unordered_map_hasherIS7_SE_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SE_NS_8equal_toIS7_EELb1EEENS5_ISE_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENST_IJEEEEEENS8_INS_15__hash_iteratorIPNS_11__hash_nodeISE_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> >, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> > > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>, std::__1::tuple<> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4pairINS_10shared_ptrIN11unwindstack3ElfEEEbEEEENS_22__unordered_map_hasherIS7_SE_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SE_NS_8equal_toIS7_EELb1EEENS5_ISE_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENST_IJEEEEEENS8_INS_15__hash_iteratorIPNS_11__hash_nodeISE_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIyE18cfa_val_expressionEPNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfCfa<unsigned long long>::cfa_val_expression(unwindstack::DwarfLocations*) */
int _ZN11unwindstack8DwarfCfaIyE18cfa_val_expressionEPNS_14DwarfLocationsE(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIyEC2EPNS_11DwarfMemoryEPKNS_8DwarfFdeE */
/* Demangled: unwindstack::DwarfCfa<unsigned long long>::DwarfCfa(unwindstack::DwarfMemory*, unwindstack::DwarfFde const*) */
int _ZN11unwindstack8DwarfCfaIyEC2EPNS_11DwarfMemoryEPKNS_8DwarfFdeE(void);

/* Symbol: _ZTVN11unwindstack19DwarfEhFrameWithHdrIyEE */
/* Demangled: vtable for unwindstack::DwarfEhFrameWithHdr<unsigned long long> */
extern void* _ZTVN11unwindstack19DwarfEhFrameWithHdrIyEE;

/* Symbol: _ZN11unwindstack8RegsMips6set_spEy */
/* Demangled: unwindstack::RegsMips::set_sp(unsigned long long) */
int _ZN11unwindstack8RegsMips6set_spEy(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE6op_modEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::op_mod() */
int _ZN11unwindstack7DwarfOpIjE6op_modEv(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyEC2EPNS_11DwarfMemoryEPNS_6MemoryE */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::DwarfOp(unwindstack::DwarfMemory*, unwindstack::Memory*) */
int _ZN11unwindstack7DwarfOpIyEC2EPNS_11DwarfMemoryEPNS_6MemoryE(void);

/* Symbol: _ZTVN11unwindstack11MemoryLocalE */
/* Demangled: vtable for unwindstack::MemoryLocal */
extern void* _ZTVN11unwindstack11MemoryLocalE;

/* Symbol: _ZN11unwindstack10RegsX86_646set_pcEy */
/* Demangled: unwindstack::RegsX86_64::set_pc(unsigned long long) */
int _ZN11unwindstack10RegsX86_646set_pcEy(void);

/* Symbol: _ZNSt3__114__split_bufferIPhNS_9allocatorIS1_EEE9push_backEOS1_ */
/* Demangled: std::__1::__split_buffer<unsigned char*, std::__1::allocator<unsigned char*> >::push_back(unsigned char*&&) */
int _ZNSt3__114__split_bufferIPhNS_9allocatorIS1_EEE9push_backEOS1_(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE5op_ltEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::op_lt() */
int _ZN11unwindstack7DwarfOpIjE5op_ltEv(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE6op_negEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_neg() */
int _ZN11unwindstack7DwarfOpIyE6op_negEv(void);

/* Symbol: _ZN11unwindstack12ElfInterface27GetFunctionNameWithTemplateI9elf64_symEEbyPNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPy */
/* Demangled: bool unwindstack::ElfInterface::GetFunctionNameWithTemplate<elf64_sym>(unsigned long long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned long long*) */
int _ZN11unwindstack12ElfInterface27GetFunctionNameWithTemplateI9elf64_symEEbyPNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPy(void);

/* Symbol: _ZTVN11unwindstack12ElfInterfaceE */
/* Demangled: vtable for unwindstack::ElfInterface */
extern void* _ZTVN11unwindstack12ElfInterfaceE;

/* Symbol: _ZN11unwindstack13MemoryOffline4ReadEyPvj */
/* Demangled: unwindstack::MemoryOffline::Read(unsigned long long, void*, unsigned int) */
int _ZN11unwindstack13MemoryOffline4ReadEyPvj(void);

/* Symbol: _ZTVN11unwindstack8DwarfCfaIjEE */
/* Demangled: vtable for unwindstack::DwarfCfa<unsigned int> */
extern void* _ZTVN11unwindstack8DwarfCfaIjEE;

/* Symbol: _ZN11unwindstack19DwarfEhFrameWithHdrIyEC2EPNS_6MemoryE */
/* Demangled: unwindstack::DwarfEhFrameWithHdr<unsigned long long>::DwarfEhFrameWithHdr(unwindstack::Memory*) */
int _ZN11unwindstack19DwarfEhFrameWithHdrIyEC2EPNS_6MemoryE(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_pointerIPN11unwindstack19MemoryOfflineBufferENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_pointer<unwindstack::MemoryOfflineBuffer*, std::__1::default_delete<unwindstack::MemoryOfflineBuffer>, std::__1::allocator<unwindstack::MemoryOfflineBuffer> > */
extern void* _ZTVNSt3__120__shared_ptr_pointerIPN11unwindstack19MemoryOfflineBufferENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE;

/* Symbol: _ZN11unwindstack7DwarfOpIyE14op_plus_uconstEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_plus_uconst() */
int _ZN11unwindstack7DwarfOpIyE14op_plus_uconstEv(void);

/* Symbol: _ZN11unwindstack15DwarfDebugFrameIjEC2EPNS_6MemoryE */
/* Demangled: unwindstack::DwarfDebugFrame<unsigned int>::DwarfDebugFrame(unwindstack::Memory*) */
int _ZN11unwindstack15DwarfDebugFrameIjEC2EPNS_6MemoryE(void);

/* Symbol: _ZNSt3__114__split_bufferIPN11unwindstack14DwarfLocationsENS_9allocatorIS3_EEE10push_frontEOS3_ */
/* Demangled: std::__1::__split_buffer<unwindstack::DwarfLocations*, std::__1::allocator<unwindstack::DwarfLocations*> >::push_front(unwindstack::DwarfLocations*&&) */
int _ZNSt3__114__split_bufferIPN11unwindstack14DwarfLocationsENS_9allocatorIS3_EEE10push_frontEOS3_(void);

/* Symbol: _ZN11unwindstack16DwarfSectionImplIjE4InitEyyx */
/* Demangled: unwindstack::DwarfSectionImpl<unsigned int>::Init(unsigned long long, unsigned long long, long long) */
int _ZN11unwindstack16DwarfSectionImplIjE4InitEyyx(void);

/* Symbol: _ZNSt3__16vectorIPN11unwindstack3ElfENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<unwindstack::Elf*, std::__1::allocator<unwindstack::Elf*> >::__push_back_slow_path<unwindstack::Elf* const&>(unwindstack::Elf* const&) */
int _ZNSt3__16vectorIPN11unwindstack3ElfENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPN11unwindstack11MemoryCacheENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_pointer<unwindstack::MemoryCache*, std::__1::default_delete<unwindstack::MemoryCache>, std::__1::allocator<unwindstack::MemoryCache> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_pointerIPN11unwindstack11MemoryCacheENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN11unwindstack12DwarfSectionC2EPNS_6MemoryE */
/* Demangled: unwindstack::DwarfSection::DwarfSection(unwindstack::Memory*) */
int _ZN11unwindstack12DwarfSectionC2EPNS_6MemoryE(void);

/* Symbol: _ZN11unwindstack19DwarfEhFrameWithHdrIyE18GetFdeOffsetFromPcEyPy */
/* Demangled: unwindstack::DwarfEhFrameWithHdr<unsigned long long>::GetFdeOffsetFromPc(unsigned long long, unsigned long long*) */
int _ZN11unwindstack19DwarfEhFrameWithHdrIyE18GetFdeOffsetFromPcEyPy(void);

/* Symbol: _ZN11unwindstack8RegsMips6set_pcEy */
/* Demangled: unwindstack::RegsMips::set_pc(unsigned long long) */
int _ZN11unwindstack8RegsMips6set_pcEy(void);

/* Symbol: _ZN11unwindstack18MemoryFileAtOffsetD0Ev */
/* Demangled: unwindstack::MemoryFileAtOffset::~MemoryFileAtOffset() */
int _ZN11unwindstack18MemoryFileAtOffsetD0Ev(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE18op_not_implementedEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_not_implemented() */
int _ZN11unwindstack7DwarfOpIyE18op_not_implementedEv(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE7op_pushEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_push() */
int _ZN11unwindstack7DwarfOpIyE7op_pushEv(void);

/* Symbol: _ZN11unwindstack3Elf19StepIfSignalHandlerEyPNS_4RegsEPNS_6MemoryE */
/* Demangled: unwindstack::Elf::StepIfSignalHandler(unsigned long long, unwindstack::Regs*, unwindstack::Memory*) */
int _ZN11unwindstack3Elf19StepIfSignalHandlerEyPNS_4RegsEPNS_6MemoryE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4pairINS_10shared_ptrIN11unwindstack3ElfEEEbEEEENS_22__unordered_map_hasherIS7_SE_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SE_NS_8equal_toIS7_EELb1EEENS5_ISE_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJOS7_EEENST_IJEEEEEENS8_INS_15__hash_iteratorIPNS_11__hash_nodeISE_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> >, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> > > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&>, std::__1::tuple<> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4pairINS_10shared_ptrIN11unwindstack3ElfEEEbEEEENS_22__unordered_map_hasherIS7_SE_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SE_NS_8equal_toIS7_EELb1EEENS5_ISE_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJOS7_EEENST_IJEEEEEENS8_INS_15__hash_iteratorIPNS_11__hash_nodeISE_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN11unwindstack16DwarfSectionImplIyE4EvalEPKNS_8DwarfCieEPNS_6MemoryERKNS_14DwarfLocationsEPNS_4RegsEPb */
/* Demangled: unwindstack::DwarfSectionImpl<unsigned long long>::Eval(unwindstack::DwarfCie const*, unwindstack::Memory*, unwindstack::DwarfLocations const&, unwindstack::Regs*, bool*) */
int _ZN11unwindstack16DwarfSectionImplIyE4EvalEPKNS_8DwarfCieEPNS_6MemoryERKNS_14DwarfLocationsEPNS_4RegsEPb(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE11is_registerEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::is_register() */
int _ZN11unwindstack7DwarfOpIyE11is_registerEv(void);

/* Symbol: _ZNSt3__16vectorIPKN11unwindstack8DwarfFdeENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_ */
/* Demangled: void std::__1::vector<unwindstack::DwarfFde const*, std::__1::allocator<unwindstack::DwarfFde const*> >::__push_back_slow_path<unwindstack::DwarfFde const*>(unwindstack::DwarfFde const*&&) */
int _ZNSt3__16vectorIPKN11unwindstack8DwarfFdeENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_(void);

/* Symbol: _ZN11unwindstack3Elf4StepEyPNS_4RegsEPNS_6MemoryEPb */
/* Demangled: unwindstack::Elf::Step(unsigned long long, unwindstack::Regs*, unwindstack::Memory*, bool*) */
int _ZN11unwindstack3Elf4StepEyPNS_4RegsEPNS_6MemoryEPb(void);

/* Symbol: _ZTVN11unwindstack8RegsImplIjEE */
/* Demangled: vtable for unwindstack::RegsImpl<unsigned int> */
extern void* _ZTVN11unwindstack8RegsImplIjEE;

/* Symbol: _ZN11unwindstack8DwarfCfaIjE18cfa_def_cfa_offsetEPNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfCfa<unsigned int>::cfa_def_cfa_offset(unwindstack::DwarfLocations*) */
int _ZN11unwindstack8DwarfCfaIjE18cfa_def_cfa_offsetEPNS_14DwarfLocationsE(void);

/* Symbol: _ZNSt3__114__split_bufferIPN11unwindstack14DwarfLocationsERNS_9allocatorIS3_EEE10push_frontERKS3_ */
/* Demangled: std::__1::__split_buffer<unwindstack::DwarfLocations*, std::__1::allocator<unwindstack::DwarfLocations*>&>::push_front(unwindstack::DwarfLocations* const&) */
int _ZNSt3__114__split_bufferIPN11unwindstack14DwarfLocationsERNS_9allocatorIS3_EEE10push_frontERKS3_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack14DwarfLocationsEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJRKyEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfLocations>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfLocations>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfLocations>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfLocations>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfLocations> > >::__emplace_unique_key_args<unsigned long long, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long const&>, std::__1::tuple<> >(unsigned long long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack14DwarfLocationsEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJRKyEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack14DwarfLocationsEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE8__rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfLocations>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfLocations>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfLocations>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfLocations> > >::__rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack14DwarfLocationsEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE8__rehashEj(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack8DwarfFdeEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJRKyEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfFde>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfFde>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfFde>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfFde>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfFde> > >::__emplace_unique_key_args<unsigned long long, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long const&>, std::__1::tuple<> >(unsigned long long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack8DwarfFdeEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJRKyEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN11unwindstack3Elf10IsValidElfEPNS_6MemoryE */
/* Demangled: unwindstack::Elf::IsValidElf(unwindstack::Memory*) */
int _ZN11unwindstack3Elf10IsValidElfEPNS_6MemoryE(void);

/* Symbol: _ZN11unwindstack7MapInfo11GetLoadBiasERKNSt3__110shared_ptrINS_6MemoryEEE */
/* Demangled: unwindstack::MapInfo::GetLoadBias(std::__1::shared_ptr<unwindstack::Memory> const&) */
int _ZN11unwindstack7MapInfo11GetLoadBiasERKNSt3__110shared_ptrINS_6MemoryEEE(void);

/* Symbol: _ZN11unwindstack8RegsMips15GetPcAdjustmentEyPNS_3ElfE */
/* Demangled: unwindstack::RegsMips::GetPcAdjustment(unsigned long long, unwindstack::Elf*) */
int _ZN11unwindstack8RegsMips15GetPcAdjustmentEyPNS_3ElfE(void);

/* Symbol: _ZN11unwindstack7Symbols16GetInfoFromCacheEy */
/* Demangled: unwindstack::Symbols::GetInfoFromCache(unsigned long long) */
int _ZN11unwindstack7Symbols16GetInfoFromCacheEy(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIyE22cfa_offset_extended_sfEPNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfCfa<unsigned long long>::cfa_offset_extended_sf(unwindstack::DwarfLocations*) */
int _ZN11unwindstack8DwarfCfaIyE22cfa_offset_extended_sfEPNS_14DwarfLocationsE(void);

/* Symbol: _ZN11unwindstack16DwarfSectionImplIjE12EvalRegisterEPKNS_13DwarfLocationEjPjPv */
/* Demangled: unwindstack::DwarfSectionImpl<unsigned int>::EvalRegister(unwindstack::DwarfLocation const*, unsigned int, unsigned int*, void*) */
int _ZN11unwindstack16DwarfSectionImplIjE12EvalRegisterEPKNS_13DwarfLocationEjPjPv(void);

/* Symbol: _ZTVN11unwindstack4MapsE */
/* Demangled: vtable for unwindstack::Maps */
extern void* _ZTVN11unwindstack4MapsE;

/* Symbol: _ZNSt3__15dequeIN11unwindstack14DwarfLocationsENS_9allocatorIS2_EEE8pop_backEv */
/* Demangled: std::__1::deque<unwindstack::DwarfLocations, std::__1::allocator<unwindstack::DwarfLocations> >::pop_back() */
int _ZNSt3__15dequeIN11unwindstack14DwarfLocationsENS_9allocatorIS2_EEE8pop_backEv(void);

/* Symbol: _ZN11unwindstack16DwarfSectionImplIjE18GetCfaLocationInfoEyPKNS_8DwarfFdeEPNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfSectionImpl<unsigned int>::GetCfaLocationInfo(unsigned long long, unwindstack::DwarfFde const*, unwindstack::DwarfLocations*) */
int _ZN11unwindstack16DwarfSectionImplIjE18GetCfaLocationInfoEyPKNS_8DwarfFdeEPNS_14DwarfLocationsE(void);

/* Symbol: _ZN11unwindstack19DwarfEhFrameWithHdrIjE11EhFrameInitEyyx */
/* Demangled: unwindstack::DwarfEhFrameWithHdr<unsigned int>::EhFrameInit(unsigned long long, unsigned long long, long long) */
int _ZN11unwindstack19DwarfEhFrameWithHdrIjE11EhFrameInitEyyx(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE6op_negEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::op_neg() */
int _ZN11unwindstack7DwarfOpIjE6op_negEv(void);

/* Symbol: _ZTVN11unwindstack7SymbolsE */
/* Demangled: vtable for unwindstack::Symbols */
extern void* _ZTVN11unwindstack7SymbolsE;

/* Symbol: _ZNSt3__15dequeIN11unwindstack14DwarfLocationsENS_9allocatorIS2_EEE9push_backERKS2_ */
/* Demangled: std::__1::deque<unwindstack::DwarfLocations, std::__1::allocator<unwindstack::DwarfLocations> >::push_back(unwindstack::DwarfLocations const&) */
int _ZNSt3__15dequeIN11unwindstack14DwarfLocationsENS_9allocatorIS2_EEE9push_backERKS2_(void);

/* Symbol: _ZN11unwindstack9RegsArm6418CreateFromUcontextEPv */
/* Demangled: unwindstack::RegsArm64::CreateFromUcontext(void*) */
int _ZN11unwindstack9RegsArm6418CreateFromUcontextEPv(void);

/* Symbol: _ZN11unwindstack16DwarfSectionImplIjE4EvalEPKNS_8DwarfCieEPNS_6MemoryERKNS_14DwarfLocationsEPNS_4RegsEPb */
/* Demangled: unwindstack::DwarfSectionImpl<unsigned int>::Eval(unwindstack::DwarfCie const*, unwindstack::Memory*, unwindstack::DwarfLocations const&, unwindstack::Regs*, bool*) */
int _ZN11unwindstack16DwarfSectionImplIjE4EvalEPKNS_8DwarfCieEPNS_6MemoryERKNS_14DwarfLocationsEPNS_4RegsEPb(void);

/* Symbol: _ZN11unwindstack19DwarfEhFrameWithHdrIjEC1EPNS_6MemoryE */
/* Demangled: unwindstack::DwarfEhFrameWithHdr<unsigned int>::DwarfEhFrameWithHdr(unwindstack::Memory*) */
int _ZN11unwindstack19DwarfEhFrameWithHdrIjEC1EPNS_6MemoryE(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE7op_skipEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::op_skip() */
int _ZN11unwindstack7DwarfOpIjE7op_skipEv(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE8op_minusEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::op_minus() */
int _ZN11unwindstack7DwarfOpIjE8op_minusEv(void);

/* Symbol: _ZN11unwindstack3logEhPKcz */
/* Demangled: unwindstack::log(unsigned char, char const*, ...) */
int _ZN11unwindstack3logEhPKcz(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIyN11unwindstack14DwarfLocationsEEENS_19__map_value_compareIyS4_NS_4lessIyEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned long long, unwindstack::DwarfLocations>, std::__1::__map_value_compare<unsigned long long, std::__1::__value_type<unsigned long long, unwindstack::DwarfLocations>, std::__1::less<unsigned long long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long long, unwindstack::DwarfLocations> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned long long, unwindstack::DwarfLocations>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIyN11unwindstack14DwarfLocationsEEENS_19__map_value_compareIyS4_NS_4lessIyEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void);

/* Symbol: _ZN11unwindstack16DwarfSectionImplIyE9InsertFdeEPKNS_8DwarfFdeE */
/* Demangled: unwindstack::DwarfSectionImpl<unsigned long long>::InsertFde(unwindstack::DwarfFde const*) */
int _ZN11unwindstack16DwarfSectionImplIyE9InsertFdeEPKNS_8DwarfFdeE(void);

/* Symbol: _ZTVN11unwindstack11MemoryCacheE */
/* Demangled: vtable for unwindstack::MemoryCache */
extern void* _ZTVN11unwindstack11MemoryCacheE;

/* Symbol: _ZN11unwindstack9RegsArm6416IterateRegistersENSt3__18functionIFvPKcyEEE */
/* Demangled: unwindstack::RegsArm64::IterateRegisters(std::__1::function<void (char const*, unsigned long long)>) */
int _ZN11unwindstack9RegsArm6416IterateRegistersENSt3__18functionIFvPKcyEEE(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE5op_orEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::op_or() */
int _ZN11unwindstack7DwarfOpIjE5op_orEv(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE6op_shlEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_shl() */
int _ZN11unwindstack7DwarfOpIyE6op_shlEv(void);

/* Symbol: _ZN11unwindstack16DwarfSectionImplIjE9InsertFdeEPKNS_8DwarfFdeE */
/* Demangled: unwindstack::DwarfSectionImpl<unsigned int>::InsertFde(unwindstack::DwarfFde const*) */
int _ZN11unwindstack16DwarfSectionImplIjE9InsertFdeEPKNS_8DwarfFdeE(void);

/* Symbol: _ZN11unwindstack13log_to_stdoutEb */
/* Demangled: unwindstack::log_to_stdout(bool) */
int _ZN11unwindstack13log_to_stdoutEb(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE10GetLogInfoEyyPNSt3__16vectorINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS7_IS9_EEEE */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::GetLogInfo(unsigned long long, unsigned long long, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >*) */
int _ZN11unwindstack7DwarfOpIyE10GetLogInfoEyyPNSt3__16vectorINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS7_IS9_EEEE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN11unwindstack13DwarfLocationEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation> > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN11unwindstack13DwarfLocationEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE7op_shraEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::op_shra() */
int _ZN11unwindstack7DwarfOpIjE7op_shraEv(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE9StackSizeEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::StackSize() */
int _ZN11unwindstack7DwarfOpIyE9StackSizeEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack8LoadInfoEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJOyEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unwindstack::LoadInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unwindstack::LoadInfo>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::LoadInfo>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::LoadInfo>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unwindstack::LoadInfo> > >::__emplace_unique_key_args<unsigned long long, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long&&>, std::__1::tuple<> >(unsigned long long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack8LoadInfoEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJOyEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack8LoadInfoEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJRKyEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unwindstack::LoadInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unwindstack::LoadInfo>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::LoadInfo>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::LoadInfo>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unwindstack::LoadInfo> > >::__emplace_unique_key_args<unsigned long long, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long const&>, std::__1::tuple<> >(unsigned long long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack8LoadInfoEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJRKyEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN11unwindstack13LocalUnwinder17ShouldSkipLibraryERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: unwindstack::LocalUnwinder::ShouldSkipLibrary(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN11unwindstack13LocalUnwinder17ShouldSkipLibraryERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZTVN11unwindstack12MemoryRangesE */
/* Demangled: vtable for unwindstack::MemoryRanges */
extern void* _ZTVN11unwindstack12MemoryRangesE;

/* Symbol: _ZNSt3__17__sort4IRZN11unwindstack7Symbols7GetNameI9elf32_symEEbyPNS1_6MemoryEPNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPyEUlRKNS2_4InfoESH_E_PSF_EEjT0_SL_SL_SL_T_ */
/* Demangled: unsigned int std::__1::__sort4<bool unwindstack::Symbols::GetName<elf32_sym>(unsigned long long, unwindstack::Memory*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned long long*)::{lambda(unwindstack::Symbols::Info const&, unwindstack::Symbols::Info const&)#1}&, unwindstack::Symbols::Info*>(unwindstack::Symbols::Info*, unwindstack::Symbols::Info*, unwindstack::Symbols::Info*, unwindstack::Symbols::Info*, bool unwindstack::Symbols::GetName<elf32_sym>(unsigned long long, unwindstack::Memory*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned long long*)::{lambda(unwindstack::Symbols::Info const&, unwindstack::Symbols::Info const&)#1}&) */
int _ZNSt3__17__sort4IRZN11unwindstack7Symbols7GetNameI9elf32_symEEbyPNS1_6MemoryEPNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPyEUlRKNS2_4InfoESH_E_PSF_EEjT0_SL_SL_SL_T_(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIjE12cfa_registerEPNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfCfa<unsigned int>::cfa_register(unwindstack::DwarfLocations*) */
int _ZN11unwindstack8DwarfCfaIjE12cfa_registerEPNS_14DwarfLocationsE(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIjE17cfa_restore_stateEPNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfCfa<unsigned int>::cfa_restore_state(unwindstack::DwarfLocations*) */
int _ZN11unwindstack8DwarfCfaIjE17cfa_restore_stateEPNS_14DwarfLocationsE(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIyE6cur_pcEv */
/* Demangled: unwindstack::DwarfCfa<unsigned long long>::cur_pc() */
int _ZN11unwindstack8DwarfCfaIyE6cur_pcEv(void);

/* Symbol: _ZN11unwindstack12ElfInterfaceD2Ev */
/* Demangled: unwindstack::ElfInterface::~ElfInterface() */
int _ZN11unwindstack12ElfInterfaceD2Ev(void);

/* Symbol: _ZTVN11unwindstack18LocalUpdatableMapsE */
/* Demangled: vtable for unwindstack::LocalUpdatableMaps */
extern void* _ZTVN11unwindstack18LocalUpdatableMapsE;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyA4096_hEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE6rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unsigned char [4096]>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned char [4096]>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned char [4096]>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned char [4096]> > >::rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyA4096_hEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE6rehashEj(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIyNS_10unique_ptrIN11unwindstack11MemoryRangeENS_14default_deleteIS4_EEEEEENS_19__map_value_compareIyS8_NS_4lessIyEELb1EEENS_9allocatorIS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned long long, std::__1::unique_ptr<unwindstack::MemoryRange, std::__1::default_delete<unwindstack::MemoryRange> > >, std::__1::__map_value_compare<unsigned long long, std::__1::__value_type<unsigned long long, std::__1::unique_ptr<unwindstack::MemoryRange, std::__1::default_delete<unwindstack::MemoryRange> > >, std::__1::less<unsigned long long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long long, std::__1::unique_ptr<unwindstack::MemoryRange, std::__1::default_delete<unwindstack::MemoryRange> > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned long long, std::__1::unique_ptr<unwindstack::MemoryRange, std::__1::default_delete<unwindstack::MemoryRange> > >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIyNS_10unique_ptrIN11unwindstack11MemoryRangeENS_14default_deleteIS4_EEEEEENS_19__map_value_compareIyS8_NS_4lessIyEELb1EEENS_9allocatorIS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIyE13cfa_undefinedEPNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfCfa<unsigned long long>::cfa_undefined(unwindstack::DwarfLocations*) */
int _ZN11unwindstack8DwarfCfaIyE13cfa_undefinedEPNS_14DwarfLocationsE(void);

/* Symbol: _ZTVN11unwindstack19DwarfEhFrameWithHdrIjEE */
/* Demangled: vtable for unwindstack::DwarfEhFrameWithHdr<unsigned int> */
extern void* _ZTVN11unwindstack19DwarfEhFrameWithHdrIjEE;

/* Symbol: _ZN11unwindstack7DwarfOpIjE8op_bregxEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::op_bregx() */
int _ZN11unwindstack7DwarfOpIjE8op_bregxEv(void);

/* Symbol: _ZN11unwindstack11MemoryRangeC2ERKNSt3__110shared_ptrINS_6MemoryEEEyyy */
/* Demangled: unwindstack::MemoryRange::MemoryRange(std::__1::shared_ptr<unwindstack::Memory> const&, unsigned long long, unsigned long long, unsigned long long) */
int _ZN11unwindstack11MemoryRangeC2ERKNSt3__110shared_ptrINS_6MemoryEEEyyy(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE12OperandsSizeEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::OperandsSize() */
int _ZN11unwindstack7DwarfOpIyE12OperandsSizeEv(void);

/* Symbol: _ZTVN11unwindstack11DwarfMemoryE */
/* Demangled: vtable for unwindstack::DwarfMemory */
extern void* _ZTVN11unwindstack11DwarfMemoryE;

/* Symbol: _ZN11unwindstack9RegsArm6419StepIfSignalHandlerEyPNS_3ElfEPNS_6MemoryE */
/* Demangled: unwindstack::RegsArm64::StepIfSignalHandler(unsigned long long, unwindstack::Elf*, unwindstack::Memory*) */
int _ZN11unwindstack9RegsArm6419StepIfSignalHandlerEyPNS_3ElfEPNS_6MemoryE(void);

/* Symbol: _ZN11unwindstack9RegsArm6422SetPcFromReturnAddressEPNS_6MemoryE */
/* Demangled: unwindstack::RegsArm64::SetPcFromReturnAddress(unwindstack::Memory*) */
int _ZN11unwindstack9RegsArm6422SetPcFromReturnAddressEPNS_6MemoryE(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIyE16GetOperandStringEhyPy */
/* Demangled: unwindstack::DwarfCfa<unsigned long long>::GetOperandString(unsigned char, unsigned long long, unsigned long long*) */
int _ZN11unwindstack8DwarfCfaIyE16GetOperandStringEhyPy(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack19DwarfEhFrameWithHdrIyE7FdeInfoEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE8__rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned long long>::FdeInfo>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned long long>::FdeInfo>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned long long>::FdeInfo>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned long long>::FdeInfo> > >::__rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack19DwarfEhFrameWithHdrIyE7FdeInfoEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE8__rehashEj(void);

/* Symbol: _ZNSt3__16vectorIPKN11unwindstack8DwarfFdeENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_ */
/* Demangled: void std::__1::vector<unwindstack::DwarfFde const*, std::__1::allocator<unwindstack::DwarfFde const*> >::__push_back_slow_path<unwindstack::DwarfFde const* const&>(unwindstack::DwarfFde const* const&) */
int _ZNSt3__16vectorIPKN11unwindstack8DwarfFdeENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE5op_leEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::op_le() */
int _ZN11unwindstack7DwarfOpIjE5op_leEv(void);

/* Symbol: _ZN11unwindstack12DwarfEhFrameIyEC1EPNS_6MemoryE */
/* Demangled: unwindstack::DwarfEhFrame<unsigned long long>::DwarfEhFrame(unwindstack::Memory*) */
int _ZN11unwindstack12DwarfEhFrameIyEC1EPNS_6MemoryE(void);

/* Symbol: _ZNSt3__16vectorINS_4pairIyyEENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::pair<unsigned long long, unsigned long long>, std::__1::allocator<std::__1::pair<unsigned long long, unsigned long long> > >::__push_back_slow_path<std::__1::pair<unsigned long long, unsigned long long> >(std::__1::pair<unsigned long long, unsigned long long>&&) */
int _ZNSt3__16vectorINS_4pairIyyEENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjjEENS_22__unordered_map_hasherIjS2_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS2_NS_8equal_toIjEELb1EEENS_9allocatorIS2_EEE6rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, unsigned int> > >::rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjjEENS_22__unordered_map_hasherIjS2_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS2_NS_8equal_toIjEELb1EEENS_9allocatorIS2_EEE6rehashEj(void);

/* Symbol: _ZN11unwindstack8JitDebug6GetElfEPNS_4MapsEy */
/* Demangled: unwindstack::JitDebug::GetElf(unwindstack::Maps*, unsigned long long) */
int _ZN11unwindstack8JitDebug6GetElfEPNS_4MapsEy(void);

/* Symbol: _ZN11unwindstack6Memory9ReadFullyEyPvj */
/* Demangled: unwindstack::Memory::ReadFully(unsigned long long, void*, unsigned int) */
int _ZN11unwindstack6Memory9ReadFullyEyPvj(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN11unwindstack13DwarfLocationEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJOjEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation> > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int&&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN11unwindstack13DwarfLocationEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJOjEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE14regular_memoryEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::regular_memory() */
int _ZN11unwindstack7DwarfOpIyE14regular_memoryEv(void);

/* Symbol: _ZN11unwindstack7RegsX86C1Ev */
/* Demangled: unwindstack::RegsX86::RegsX86() */
int _ZN11unwindstack7RegsX86C1Ev(void);

/* Symbol: _ZTVN11unwindstack9LocalMapsE */
/* Demangled: vtable for unwindstack::LocalMaps */
extern void* _ZTVN11unwindstack9LocalMapsE;

/* Symbol: _ZN11unwindstack8DwarfCfaIjE15cfa_advance_locEPNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfCfa<unsigned int>::cfa_advance_loc(unwindstack::DwarfLocations*) */
int _ZN11unwindstack8DwarfCfaIjE15cfa_advance_locEPNS_14DwarfLocationsE(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE7op_pickEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::op_pick() */
int _ZN11unwindstack7DwarfOpIjE7op_pickEv(void);

/* Symbol: _ZN11unwindstack3Elf9GetSonameEv */
/* Demangled: unwindstack::Elf::GetSoname() */
int _ZN11unwindstack3Elf9GetSonameEv(void);

/* Symbol: _ZN11unwindstack18MemoryOfflinePartsD1Ev */
/* Demangled: unwindstack::MemoryOfflineParts::~MemoryOfflineParts() */
int _ZN11unwindstack18MemoryOfflinePartsD1Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIPhRNS_9allocatorIS1_EEE9push_backEOS1_ */
/* Demangled: std::__1::__split_buffer<unsigned char*, std::__1::allocator<unsigned char*>&>::push_back(unsigned char*&&) */
int _ZNSt3__114__split_bufferIPhRNS_9allocatorIS1_EEE9push_backEOS1_(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE6op_shlEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::op_shl() */
int _ZN11unwindstack7DwarfOpIjE6op_shlEv(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE8op_derefEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_deref() */
int _ZN11unwindstack7DwarfOpIyE8op_derefEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN11unwindstack13DwarfLocationEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIjJRKNS_4pairIKjS3_EEEEENSH_INS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation> > >::__emplace_unique_key_args<unsigned int, std::__1::pair<unsigned int const, unwindstack::DwarfLocation> const&>(unsigned int const&, std::__1::pair<unsigned int const, unwindstack::DwarfLocation> const&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN11unwindstack13DwarfLocationEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIjJRKNS_4pairIKjS3_EEEEENSH_INS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE10last_errorEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::last_error() */
int _ZN11unwindstack7DwarfOpIjE10last_errorEv(void);

/* Symbol: _ZTVN11unwindstack8ArmExidxE */
/* Demangled: vtable for unwindstack::ArmExidx */
extern void* _ZTVN11unwindstack8ArmExidxE;

/* Symbol: _ZTVN11unwindstack10BufferMapsE */
/* Demangled: vtable for unwindstack::BufferMaps */
extern void* _ZTVN11unwindstack10BufferMapsE;

/* Symbol: _ZNSt3__15dequeIN11unwindstack14DwarfLocationsENS_9allocatorIS2_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<unwindstack::DwarfLocations, std::__1::allocator<unwindstack::DwarfLocations> >::__add_back_capacity() */
int _ZNSt3__15dequeIN11unwindstack14DwarfLocationsENS_9allocatorIS2_EEE19__add_back_capacityEv(void);

/* Symbol: _ZN11unwindstack16DwarfSectionImplIyE18GetCfaLocationInfoEyPKNS_8DwarfFdeEPNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfSectionImpl<unsigned long long>::GetCfaLocationInfo(unsigned long long, unwindstack::DwarfFde const*, unwindstack::DwarfLocations*) */
int _ZN11unwindstack16DwarfSectionImplIyE18GetCfaLocationInfoEyPKNS_8DwarfFdeEPNS_14DwarfLocationsE(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE13set_regs_infoEPNS_8RegsInfoIjEE */
/* Demangled: unwindstack::DwarfOp<unsigned int>::set_regs_info(unwindstack::RegsInfo<unsigned int>*) */
int _ZN11unwindstack7DwarfOpIjE13set_regs_infoEPNS_8RegsInfoIjEE(void);

/* Symbol: _ZNSt3__16vectorIcNS_9allocatorIcEEE21__push_back_slow_pathIRKcEEvOT_ */
/* Demangled: void std::__1::vector<char, std::__1::allocator<char> >::__push_back_slow_path<char const&>(char const&) */
int _ZNSt3__16vectorIcNS_9allocatorIcEEE21__push_back_slow_pathIRKcEEvOT_(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIjE6cur_pcEv */
/* Demangled: unwindstack::DwarfCfa<unsigned int>::cur_pc() */
int _ZN11unwindstack8DwarfCfaIjE6cur_pcEv(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIyE16LastErrorAddressEv */
/* Demangled: unwindstack::DwarfCfa<unsigned long long>::LastErrorAddress() */
int _ZN11unwindstack8DwarfCfaIyE16LastErrorAddressEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN11unwindstack13DwarfLocationEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE14__assign_multiINS_21__hash_const_iteratorIPNS_11__hash_nodeIS4_PvEEEEEEvT_SN_ */
/* Demangled: void std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation> > >::__assign_multi<std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, void*>*> >(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, void*>*>, std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, void*>*>) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN11unwindstack13DwarfLocationEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE14__assign_multiINS_21__hash_const_iteratorIPNS_11__hash_nodeIS4_PvEEEEEEvT_SN_(void);

/* Symbol: _ZTVN11unwindstack12MemoryRemoteE */
/* Demangled: vtable for unwindstack::MemoryRemote */
extern void* _ZTVN11unwindstack12MemoryRemoteE;

/* Symbol: _ZN11unwindstack7RegsX8615GetPcAdjustmentEyPNS_3ElfE */
/* Demangled: unwindstack::RegsX86::GetPcAdjustment(unsigned long long, unwindstack::Elf*) */
int _ZN11unwindstack7RegsX8615GetPcAdjustmentEyPNS_3ElfE(void);

/* Symbol: _ZN11unwindstack19DwarfEhFrameWithHdrIjEC2EPNS_6MemoryE */
/* Demangled: unwindstack::DwarfEhFrameWithHdr<unsigned int>::DwarfEhFrameWithHdr(unwindstack::Memory*) */
int _ZN11unwindstack19DwarfEhFrameWithHdrIjEC2EPNS_6MemoryE(void);

/* Symbol: _ZN11unwindstack7MapInfoD2Ev */
/* Demangled: unwindstack::MapInfo::~MapInfo() */
int _ZN11unwindstack7MapInfoD2Ev(void);

/* Symbol: _ZN11unwindstack8DexFiles4InitEPNS_4MapsE */
/* Demangled: unwindstack::DexFiles::Init(unwindstack::Maps*) */
int _ZN11unwindstack8DexFiles4InitEPNS_4MapsE(void);

/* Symbol: _ZN11unwindstack3Elf14cache_enabled_E */
/* Demangled: unwindstack::Elf::cache_enabled_ */
extern void* _ZN11unwindstack3Elf14cache_enabled_E;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4pairINS_10shared_ptrIN11unwindstack3ElfEEEbEEEENS_22__unordered_map_hasherIS7_SE_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SE_NS_8equal_toIS7_EELb1EEENS5_ISE_EEE4findIS7_EENS_15__hash_iteratorIPNS_11__hash_nodeISE_PvEEEERKT_ */
/* Demangled: std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> >, void*>*> std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> >, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4pairINS_10shared_ptrIN11unwindstack3ElfEEEbEEEENS_22__unordered_map_hasherIS7_SE_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SE_NS_8equal_toIS7_EELb1EEENS5_ISE_EEE4findIS7_EENS_15__hash_iteratorIPNS_11__hash_nodeISE_PvEEEERKT_(void);

/* Symbol: _ZN11unwindstack7RegsArm4ArchEv */
/* Demangled: unwindstack::RegsArm::Arch() */
int _ZN11unwindstack7RegsArm4ArchEv(void);

/* Symbol: _ZN11unwindstack8RegsMips4ArchEv */
/* Demangled: unwindstack::RegsMips::Arch() */
int _ZN11unwindstack8RegsMips4ArchEv(void);

/* Symbol: _ZN11unwindstack8RegsMipsC1Ev */
/* Demangled: unwindstack::RegsMips::RegsMips() */
int _ZN11unwindstack8RegsMipsC1Ev(void);

/* Symbol: _ZN11unwindstack10RegsMips6416IterateRegistersENSt3__18functionIFvPKcyEEE */
/* Demangled: unwindstack::RegsMips64::IterateRegisters(std::__1::function<void (char const*, unsigned long long)>) */
int _ZN11unwindstack10RegsMips6416IterateRegistersENSt3__18functionIFvPKcyEEE(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPN11unwindstack19MemoryOfflineBufferENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_pointer<unwindstack::MemoryOfflineBuffer*, std::__1::default_delete<unwindstack::MemoryOfflineBuffer>, std::__1::allocator<unwindstack::MemoryOfflineBuffer> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_pointerIPN11unwindstack19MemoryOfflineBufferENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN11unwindstack10RegsX86_644ReadEPv */
/* Demangled: unwindstack::RegsX86_64::Read(void*) */
int _ZN11unwindstack10RegsX86_644ReadEPv(void);

/* Symbol: _ZN11unwindstack10RegsX86_645CloneEv */
/* Demangled: unwindstack::RegsX86_64::Clone() */
int _ZN11unwindstack10RegsX86_645CloneEv(void);

/* Symbol: _ZTVN11unwindstack10RegsX86_64E */
/* Demangled: vtable for unwindstack::RegsX86_64 */
extern void* _ZTVN11unwindstack10RegsX86_64E;

/* Symbol: _ZNSt3__15dequeIhNS_9allocatorIhEEE9push_backEOh */
/* Demangled: std::__1::deque<unsigned char, std::__1::allocator<unsigned char> >::push_back(unsigned char&&) */
int _ZNSt3__15dequeIhNS_9allocatorIhEEE9push_backEOh(void);

/* Symbol: _ZNSt3__114__split_bufferIPN11unwindstack14DwarfLocationsERNS_9allocatorIS3_EEE9push_backEOS3_ */
/* Demangled: std::__1::__split_buffer<unwindstack::DwarfLocations*, std::__1::allocator<unwindstack::DwarfLocations*>&>::push_back(unwindstack::DwarfLocations*&&) */
int _ZNSt3__114__split_bufferIPN11unwindstack14DwarfLocationsERNS_9allocatorIS3_EEE9push_backEOS3_(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE5op_neEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::op_ne() */
int _ZN11unwindstack7DwarfOpIjE5op_neEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjjEENS_22__unordered_map_hasherIjS2_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS2_NS_8equal_toIjEELb1EEENS_9allocatorIS2_EEE8__rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, unsigned int> > >::__rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjjEENS_22__unordered_map_hasherIjS2_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS2_NS_8equal_toIjEELb1EEENS_9allocatorIS2_EEE8__rehashEj(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIjE20cfa_def_cfa_registerEPNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfCfa<unsigned int>::cfa_def_cfa_register(unwindstack::DwarfLocations*) */
int _ZN11unwindstack8DwarfCfaIjE20cfa_def_cfa_registerEPNS_14DwarfLocationsE(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE7op_bregEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::op_breg() */
int _ZN11unwindstack7DwarfOpIjE7op_bregEv(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE7op_regxEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::op_regx() */
int _ZN11unwindstack7DwarfOpIjE7op_regxEv(void);

/* Symbol: _ZN11unwindstack12ElfInterface23InitHeadersWithTemplateIyEEvv */
/* Demangled: void unwindstack::ElfInterface::InitHeadersWithTemplate<unsigned long long>() */
int _ZN11unwindstack12ElfInterface23InitHeadersWithTemplateIyEEvv(void);

/* Symbol: _ZN11unwindstack15ElfInterfaceArm15GetFunctionNameEyPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPy */
/* Demangled: unwindstack::ElfInterfaceArm::GetFunctionName(unsigned long long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned long long*) */
int _ZN11unwindstack15ElfInterfaceArm15GetFunctionNameEyPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPy(void);

/* Symbol: _ZN11unwindstack12MemoryBuffer4ReadEyPvj */
/* Demangled: unwindstack::MemoryBuffer::Read(unsigned long long, void*, unsigned int) */
int _ZN11unwindstack12MemoryBuffer4ReadEyPvj(void);

/* Symbol: _ZTVN11unwindstack18MemoryOfflinePartsE */
/* Demangled: vtable for unwindstack::MemoryOfflineParts */
extern void* _ZTVN11unwindstack18MemoryOfflinePartsE;

/* Symbol: _ZN11unwindstack7RegsX862spEv */
/* Demangled: unwindstack::RegsX86::sp() */
int _ZN11unwindstack7RegsX862spEv(void);

/* Symbol: _ZN11unwindstack19DwarfEhFrameWithHdrIjE12GetFdeFromPcEy */
/* Demangled: unwindstack::DwarfEhFrameWithHdr<unsigned int>::GetFdeFromPc(unsigned long long) */
int _ZN11unwindstack19DwarfEhFrameWithHdrIjE12GetFdeFromPcEy(void);

/* Symbol: _ZN11unwindstack16DwarfSectionImplIjE15FillInCieHeaderEPNS_8DwarfCieE */
/* Demangled: unwindstack::DwarfSectionImpl<unsigned int>::FillInCieHeader(unwindstack::DwarfCie*) */
int _ZN11unwindstack16DwarfSectionImplIjE15FillInCieHeaderEPNS_8DwarfCieE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack8DwarfFdeEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE8__rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfFde>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfFde>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfFde>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfFde> > >::__rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack8DwarfFdeEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE8__rehashEj(void);

/* Symbol: _ZN11unwindstack10RegsMips646set_spEy */
/* Demangled: unwindstack::RegsMips64::set_sp(unsigned long long) */
int _ZN11unwindstack10RegsMips646set_spEy(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIjE13cfa_undefinedEPNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfCfa<unsigned int>::cfa_undefined(unwindstack::DwarfLocations*) */
int _ZN11unwindstack8DwarfCfaIjE13cfa_undefinedEPNS_14DwarfLocationsE(void);

/* Symbol: _ZN11unwindstack16DwarfSectionImplIyE12GetFdeFromPcEy */
/* Demangled: unwindstack::DwarfSectionImpl<unsigned long long>::GetFdeFromPc(unsigned long long) */
int _ZN11unwindstack16DwarfSectionImplIyE12GetFdeFromPcEy(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE9OperandAtEj */
/* Demangled: unwindstack::DwarfOp<unsigned int>::OperandAt(unsigned int) */
int _ZN11unwindstack7DwarfOpIjE9OperandAtEj(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE6op_absEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_abs() */
int _ZN11unwindstack7DwarfOpIyE6op_absEv(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE6op_mulEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_mul() */
int _ZN11unwindstack7DwarfOpIyE6op_mulEv(void);

/* Symbol: _ZN11unwindstack7SymbolsC1Eyyyyy */
/* Demangled: unwindstack::Symbols::Symbols(unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long) */
int _ZN11unwindstack7SymbolsC1Eyyyyy(void);

/* Symbol: _ZN11unwindstack4Maps4FindEy */
/* Demangled: unwindstack::Maps::Find(unsigned long long) */
int _ZN11unwindstack4Maps4FindEy(void);

/* Symbol: _ZN11unwindstack11MemoryRange4ReadEyPvj */
/* Demangled: unwindstack::MemoryRange::Read(unsigned long long, void*, unsigned int) */
int _ZN11unwindstack11MemoryRange4ReadEyPvj(void);

/* Symbol: _ZN11unwindstack10RegsX86_64C1Ev */
/* Demangled: unwindstack::RegsX86_64::RegsX86_64() */
int _ZN11unwindstack10RegsX86_64C1Ev(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIyE23LogOffsetRegisterStringEjyh */
/* Demangled: unwindstack::DwarfCfa<unsigned long long>::LogOffsetRegisterString(unsigned int, unsigned long long, unsigned char) */
int _ZN11unwindstack8DwarfCfaIyE23LogOffsetRegisterStringEjyh(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE7op_plusEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_plus() */
int _ZN11unwindstack7DwarfOpIyE7op_plusEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPyNS_9allocatorIS1_EEE10push_frontERKS1_ */
/* Demangled: std::__1::__split_buffer<unsigned long long*, std::__1::allocator<unsigned long long*> >::push_front(unsigned long long* const&) */
int _ZNSt3__114__split_bufferIPyNS_9allocatorIS1_EEE10push_frontERKS1_(void);

/* Symbol: _ZTVN11unwindstack12DwarfEhFrameIyEE */
/* Demangled: vtable for unwindstack::DwarfEhFrame<unsigned long long> */
extern void* _ZTVN11unwindstack12DwarfEhFrameIyEE;

/* Symbol: _ZNK11unwindstack10RemoteMaps11GetMapsFileEv */
/* Demangled: unwindstack::RemoteMaps::GetMapsFile() const */
int _ZNK11unwindstack10RemoteMaps11GetMapsFileEv(void);

/* Symbol: _ZN11unwindstack12DwarfEhFrameIyEC2EPNS_6MemoryE */
/* Demangled: unwindstack::DwarfEhFrame<unsigned long long>::DwarfEhFrame(unwindstack::Memory*) */
int _ZN11unwindstack12DwarfEhFrameIyEC2EPNS_6MemoryE(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIyE16set_cie_loc_regsEPKNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfCfa<unsigned long long>::set_cie_loc_regs(unwindstack::DwarfLocations const*) */
int _ZN11unwindstack8DwarfCfaIyE16set_cie_loc_regsEPKNS_14DwarfLocationsE(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE7StackAtEj */
/* Demangled: unwindstack::DwarfOp<unsigned int>::StackAt(unsigned int) */
int _ZN11unwindstack7DwarfOpIjE7StackAtEj(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE6op_litEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_lit() */
int _ZN11unwindstack7DwarfOpIyE6op_litEv(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE10dex_pc_setEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::dex_pc_set() */
int _ZN11unwindstack7DwarfOpIjE10dex_pc_setEv(void);

/* Symbol: _ZN11unwindstack12ElfInterface11ReadBuildIDI10elf64_noteEENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEv */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > unwindstack::ElfInterface::ReadBuildID<elf64_note>() */
int _ZN11unwindstack12ElfInterface11ReadBuildIDI10elf64_noteEENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEv(void);

/* Symbol: _ZN11unwindstack7RegsX862pcEv */
/* Demangled: unwindstack::RegsX86::pc() */
int _ZN11unwindstack7RegsX862pcEv(void);

/* Symbol: _ZNSt3__16__sortIRZN11unwindstack7Symbols7GetNameI9elf32_symEEbyPNS1_6MemoryEPNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPyEUlRKNS2_4InfoESH_E_PSF_EEvT0_SL_T_ */
/* Demangled: void std::__1::__sort<bool unwindstack::Symbols::GetName<elf32_sym>(unsigned long long, unwindstack::Memory*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned long long*)::{lambda(unwindstack::Symbols::Info const&, unwindstack::Symbols::Info const&)#1}&, unwindstack::Symbols::Info*>(unwindstack::Symbols::Info*, unwindstack::Symbols::Info*, bool unwindstack::Symbols::GetName<elf32_sym>(unsigned long long, unwindstack::Memory*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned long long*)::{lambda(unwindstack::Symbols::Info const&, unwindstack::Symbols::Info const&)#1}&) */
int _ZNSt3__16__sortIRZN11unwindstack7Symbols7GetNameI9elf32_symEEbyPNS1_6MemoryEPNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPyEUlRKNS2_4InfoESH_E_PSF_EEvT0_SL_T_(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIjE11cfa_set_locEPNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfCfa<unsigned int>::cfa_set_loc(unwindstack::DwarfLocations*) */
int _ZN11unwindstack8DwarfCfaIjE11cfa_set_locEPNS_14DwarfLocationsE(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_pointerIPN11unwindstack11MemoryLocalENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_pointer<unwindstack::MemoryLocal*, std::__1::default_delete<unwindstack::MemoryLocal>, std::__1::allocator<unwindstack::MemoryLocal> > */
extern void* _ZTVNSt3__120__shared_ptr_pointerIPN11unwindstack11MemoryLocalENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE;

/* Symbol: _ZN11unwindstack4Regs11CurrentArchEv */
/* Demangled: unwindstack::Regs::CurrentArch() */
int _ZN11unwindstack4Regs11CurrentArchEv(void);

/* Symbol: _ZN11unwindstack10RegsMips646set_pcEy */
/* Demangled: unwindstack::RegsMips64::set_pc(unsigned long long) */
int _ZN11unwindstack10RegsMips646set_pcEy(void);

/* Symbol: _ZN11unwindstack8ArmExidx8LogByRegEv */
/* Demangled: unwindstack::ArmExidx::LogByReg() */
int _ZN11unwindstack8ArmExidx8LogByRegEv(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIyE14cfa_expressionEPNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfCfa<unsigned long long>::cfa_expression(unwindstack::DwarfLocations*) */
int _ZN11unwindstack8DwarfCfaIyE14cfa_expressionEPNS_14DwarfLocationsE(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIyE15cfa_advance_locEPNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfCfa<unsigned long long>::cfa_advance_loc(unwindstack::DwarfLocations*) */
int _ZN11unwindstack8DwarfCfaIyE15cfa_advance_locEPNS_14DwarfLocationsE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack8LoadInfoEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE6rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unwindstack::LoadInfo>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::LoadInfo>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::LoadInfo>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unwindstack::LoadInfo> > >::rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack8LoadInfoEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE6rehashEj(void);

/* Symbol: _ZN11unwindstack7MapInfo10GetBuildIDEv */
/* Demangled: unwindstack::MapInfo::GetBuildID() */
int _ZN11unwindstack7MapInfo10GetBuildIDEv(void);

/* Symbol: _ZN11unwindstack3Elf10GetBuildIDEPNS_6MemoryE */
/* Demangled: unwindstack::Elf::GetBuildID(unwindstack::Memory*) */
int _ZN11unwindstack3Elf10GetBuildIDEPNS_6MemoryE(void);

/* Symbol: _ZN11unwindstack11MemoryCache4ReadEyPvj */
/* Demangled: unwindstack::MemoryCache::Read(unsigned long long, void*, unsigned int) */
int _ZN11unwindstack11MemoryCache4ReadEyPvj(void);

/* Symbol: _ZN11unwindstack9RegsArm644ReadEPv */
/* Demangled: unwindstack::RegsArm64::Read(void*) */
int _ZN11unwindstack9RegsArm644ReadEPv(void);

/* Symbol: _ZN11unwindstack9RegsArm645CloneEv */
/* Demangled: unwindstack::RegsArm64::Clone() */
int _ZN11unwindstack9RegsArm645CloneEv(void);

/* Symbol: _ZN11unwindstack8DexFiles7GetAddrEjPy */
/* Demangled: unwindstack::DexFiles::GetAddr(unsigned int, unsigned long long*) */
int _ZN11unwindstack8DexFiles7GetAddrEjPy(void);

/* Symbol: _ZNSt3__114__split_bufferIPjNS_9allocatorIS1_EEE9push_backEOS1_ */
/* Demangled: std::__1::__split_buffer<unsigned int*, std::__1::allocator<unsigned int*> >::push_back(unsigned int*&&) */
int _ZNSt3__114__split_bufferIPjNS_9allocatorIS1_EEE9push_backEOS1_(void);

/* Symbol: _ZN11unwindstack7RegsArm22SetPcFromReturnAddressEPNS_6MemoryE */
/* Demangled: unwindstack::RegsArm::SetPcFromReturnAddress(unwindstack::Memory*) */
int _ZN11unwindstack7RegsArm22SetPcFromReturnAddressEPNS_6MemoryE(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE6op_rotEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_rot() */
int _ZN11unwindstack7DwarfOpIyE6op_rotEv(void);

/* Symbol: _ZN11unwindstack7Symbols9GetGlobalI9elf64_symEEbPNS_6MemoryERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPy */
/* Demangled: bool unwindstack::Symbols::GetGlobal<elf64_sym>(unwindstack::Memory*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned long long*) */
int _ZN11unwindstack7Symbols9GetGlobalI9elf64_symEEbPNS_6MemoryERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPy(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIjE23LogOffsetRegisterStringEjyh */
/* Demangled: unwindstack::DwarfCfa<unsigned int>::LogOffsetRegisterString(unsigned int, unsigned long long, unsigned char) */
int _ZN11unwindstack8DwarfCfaIjE23LogOffsetRegisterStringEjyh(void);

/* Symbol: _ZTVN11unwindstack7DwarfOpIyEE */
/* Demangled: vtable for unwindstack::DwarfOp<unsigned long long> */
extern void* _ZTVN11unwindstack7DwarfOpIyEE;

/* Symbol: _ZN11unwindstack7DwarfOpIjE7op_overEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::op_over() */
int _ZN11unwindstack7DwarfOpIjE7op_overEv(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE6op_absEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::op_abs() */
int _ZN11unwindstack7DwarfOpIjE6op_absEv(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE6op_mulEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::op_mul() */
int _ZN11unwindstack7DwarfOpIjE6op_mulEv(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE8StackPopEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::StackPop() */
int _ZN11unwindstack7DwarfOpIyE8StackPopEv(void);

/* Symbol: _ZN11unwindstack16DwarfSectionImplIyE15GetNextCieOrFdeEPPKNS_8DwarfFdeE */
/* Demangled: unwindstack::DwarfSectionImpl<unsigned long long>::GetNextCieOrFde(unwindstack::DwarfFde const**) */
int _ZN11unwindstack16DwarfSectionImplIyE15GetNextCieOrFdeEPPKNS_8DwarfFdeE(void);

/* Symbol: _ZTVN11unwindstack3ElfE */
/* Demangled: vtable for unwindstack::Elf */
extern void* _ZTVN11unwindstack3ElfE;

/* Symbol: _ZNSt3__127__insertion_sort_incompleteIRZN11unwindstack7Symbols7GetNameI9elf64_symEEbyPNS1_6MemoryEPNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPyEUlRKNS2_4InfoESH_E_PSF_EEbT0_SL_T_ */
/* Demangled: bool std::__1::__insertion_sort_incomplete<bool unwindstack::Symbols::GetName<elf64_sym>(unsigned long long, unwindstack::Memory*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned long long*)::{lambda(unwindstack::Symbols::Info const&, unwindstack::Symbols::Info const&)#1}&, unwindstack::Symbols::Info*>(unwindstack::Symbols::Info*, unwindstack::Symbols::Info*, bool unwindstack::Symbols::GetName<elf64_sym>(unsigned long long, unwindstack::Memory*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned long long*)::{lambda(unwindstack::Symbols::Info const&, unwindstack::Symbols::Info const&)#1}&) */
int _ZNSt3__127__insertion_sort_incompleteIRZN11unwindstack7Symbols7GetNameI9elf64_symEEbyPNS1_6MemoryEPNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPyEUlRKNS2_4InfoESH_E_PSF_EEbT0_SL_T_(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIjEC1EPNS_11DwarfMemoryEPKNS_8DwarfFdeE */
/* Demangled: unwindstack::DwarfCfa<unsigned int>::DwarfCfa(unwindstack::DwarfMemory*, unwindstack::DwarfFde const*) */
int _ZN11unwindstack8DwarfCfaIjEC1EPNS_11DwarfMemoryEPKNS_8DwarfFdeE(void);

/* Symbol: _ZN11unwindstack10RegsMips64C1Ev */
/* Demangled: unwindstack::RegsMips64::RegsMips64() */
int _ZN11unwindstack10RegsMips64C1Ev(void);

/* Symbol: _ZN11unwindstack8Unwinder11SetJitDebugEPNS_8JitDebugENS_8ArchEnumE */
/* Demangled: unwindstack::Unwinder::SetJitDebug(unwindstack::JitDebug*, unwindstack::ArchEnum) */
int _ZN11unwindstack8Unwinder11SetJitDebugEPNS_8JitDebugENS_8ArchEnumE(void);

/* Symbol: _ZN11unwindstack8JitDebug16ReadDescriptor32Ey */
/* Demangled: unwindstack::JitDebug::ReadDescriptor32(unsigned long long) */
int _ZN11unwindstack8JitDebug16ReadDescriptor32Ey(void);

/* Symbol: _ZN11unwindstack19MemoryOfflineBufferC2EPKhyy */
/* Demangled: unwindstack::MemoryOfflineBuffer::MemoryOfflineBuffer(unsigned char const*, unsigned long long, unsigned long long) */
int _ZN11unwindstack19MemoryOfflineBufferC2EPKhyy(void);

/* Symbol: _ZN11unwindstack8DexFiles14ReadEntryPtr32Ey */
/* Demangled: unwindstack::DexFiles::ReadEntryPtr32(unsigned long long) */
int _ZN11unwindstack8DexFiles14ReadEntryPtr32Ey(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE6op_litEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::op_lit() */
int _ZN11unwindstack7DwarfOpIjE6op_litEv(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjEC2EPNS_11DwarfMemoryEPNS_6MemoryE */
/* Demangled: unwindstack::DwarfOp<unsigned int>::DwarfOp(unwindstack::DwarfMemory*, unwindstack::Memory*) */
int _ZN11unwindstack7DwarfOpIjEC2EPNS_11DwarfMemoryEPNS_6MemoryE(void);

/* Symbol: _ZN11unwindstack12DwarfEhFrameIjEC1EPNS_6MemoryE */
/* Demangled: unwindstack::DwarfEhFrame<unsigned int>::DwarfEhFrame(unwindstack::Memory*) */
int _ZN11unwindstack12DwarfEhFrameIjEC1EPNS_6MemoryE(void);

/* Symbol: _ZN11unwindstack3Elf15GetFunctionNameEyPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPy */
/* Demangled: unwindstack::Elf::GetFunctionName(unsigned long long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned long long*) */
int _ZN11unwindstack3Elf15GetFunctionNameEyPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPy(void);

/* Symbol: _ZN11unwindstack18MemoryFileAtOffsetD1Ev */
/* Demangled: unwindstack::MemoryFileAtOffset::~MemoryFileAtOffset() */
int _ZN11unwindstack18MemoryFileAtOffsetD1Ev(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE5op_ltEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_lt() */
int _ZN11unwindstack7DwarfOpIyE5op_ltEv(void);

/* Symbol: _ZTVN11unwindstack7RegsX86E */
/* Demangled: vtable for unwindstack::RegsX86 */
extern void* _ZTVN11unwindstack7RegsX86E;

/* Symbol: _ZN11unwindstack8DwarfCfaIjE14cfa_val_offsetEPNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfCfa<unsigned int>::cfa_val_offset(unwindstack::DwarfLocations*) */
int _ZN11unwindstack8DwarfCfaIjE14cfa_val_offsetEPNS_14DwarfLocationsE(void);

/* Symbol: _ZN11unwindstack3Elf22CacheAfterCreateMemoryEPNS_7MapInfoE */
/* Demangled: unwindstack::Elf::CacheAfterCreateMemory(unwindstack::MapInfo*) */
int _ZN11unwindstack3Elf22CacheAfterCreateMemoryEPNS_7MapInfoE(void);

/* Symbol: _ZN11unwindstack10RegsMips644ReadEPv */
/* Demangled: unwindstack::RegsMips64::Read(void*) */
int _ZN11unwindstack10RegsMips644ReadEPv(void);

/* Symbol: _ZN11unwindstack7RegsX8618CreateFromUcontextEPv */
/* Demangled: unwindstack::RegsX86::CreateFromUcontext(void*) */
int _ZN11unwindstack7RegsX8618CreateFromUcontextEPv(void);

/* Symbol: _ZN11unwindstack10RegsMips645CloneEv */
/* Demangled: unwindstack::RegsMips64::Clone() */
int _ZN11unwindstack10RegsMips645CloneEv(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIjE14cfa_def_cfa_sfEPNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfCfa<unsigned int>::cfa_def_cfa_sf(unwindstack::DwarfLocations*) */
int _ZN11unwindstack8DwarfCfaIjE14cfa_def_cfa_sfEPNS_14DwarfLocationsE(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE11is_registerEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::is_register() */
int _ZN11unwindstack7DwarfOpIjE11is_registerEv(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE14op_plus_uconstEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::op_plus_uconst() */
int _ZN11unwindstack7DwarfOpIjE14op_plus_uconstEv(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE9OperandAtEj */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::OperandAt(unsigned int) */
int _ZN11unwindstack7DwarfOpIyE9OperandAtEj(void);

/* Symbol: _ZN11unwindstack12ElfInterface11ReadBuildIDI10elf32_noteEENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEv */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > unwindstack::ElfInterface::ReadBuildID<elf32_note>() */
int _ZN11unwindstack12ElfInterface11ReadBuildIDI10elf32_noteEENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEv(void);

/* Symbol: _ZN11unwindstack15ElfInterfaceArm13GetPrel31AddrEjPj */
/* Demangled: unwindstack::ElfInterfaceArm::GetPrel31Addr(unsigned int, unsigned int*) */
int _ZN11unwindstack15ElfInterfaceArm13GetPrel31AddrEjPj(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIyE18cfa_def_cfa_offsetEPNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfCfa<unsigned long long>::cfa_def_cfa_offset(unwindstack::DwarfLocations*) */
int _ZN11unwindstack8DwarfCfaIyE18cfa_def_cfa_offsetEPNS_14DwarfLocationsE(void);

/* Symbol: _ZN11unwindstack19DwarfEhFrameWithHdrIjE19GetFdeInfoFromIndexEj */
/* Demangled: unwindstack::DwarfEhFrameWithHdr<unsigned int>::GetFdeInfoFromIndex(unsigned int) */
int _ZN11unwindstack19DwarfEhFrameWithHdrIjE19GetFdeInfoFromIndexEj(void);

/* Symbol: _ZNSt3__114__split_bufferIPjNS_9allocatorIS1_EEE10push_frontERKS1_ */
/* Demangled: std::__1::__split_buffer<unsigned int*, std::__1::allocator<unsigned int*> >::push_front(unsigned int* const&) */
int _ZNSt3__114__split_bufferIPjNS_9allocatorIS1_EEE10push_frontERKS1_(void);

/* Symbol: _ZNSt3__114__split_bufferIPjRNS_9allocatorIS1_EEE9push_backEOS1_ */
/* Demangled: std::__1::__split_buffer<unsigned int*, std::__1::allocator<unsigned int*>&>::push_back(unsigned int*&&) */
int _ZNSt3__114__split_bufferIPjRNS_9allocatorIS1_EEE9push_backEOS1_(void);

/* Symbol: _ZN11unwindstack8Unwinder11SetDexFilesEPNS_8DexFilesENS_8ArchEnumE */
/* Demangled: unwindstack::Unwinder::SetDexFiles(unwindstack::DexFiles*, unwindstack::ArchEnum) */
int _ZN11unwindstack8Unwinder11SetDexFilesEPNS_8DexFilesENS_8ArchEnumE(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIjEC2EPNS_11DwarfMemoryEPKNS_8DwarfFdeE */
/* Demangled: unwindstack::DwarfCfa<unsigned int>::DwarfCfa(unwindstack::DwarfMemory*, unwindstack::DwarfFde const*) */
int _ZN11unwindstack8DwarfCfaIjEC2EPNS_11DwarfMemoryEPKNS_8DwarfFdeE(void);

/* Symbol: _ZNSt3__114__split_bufferIPN11unwindstack14DwarfLocationsENS_9allocatorIS3_EEE9push_backEOS3_ */
/* Demangled: std::__1::__split_buffer<unwindstack::DwarfLocations*, std::__1::allocator<unwindstack::DwarfLocations*> >::push_back(unwindstack::DwarfLocations*&&) */
int _ZNSt3__114__split_bufferIPN11unwindstack14DwarfLocationsENS_9allocatorIS3_EEE9push_backEOS3_(void);

/* Symbol: _ZTVN11unwindstack18MemoryFileAtOffsetE */
/* Demangled: vtable for unwindstack::MemoryFileAtOffset */
extern void* _ZTVN11unwindstack18MemoryFileAtOffsetE;

/* Symbol: _ZN11unwindstack6GlobalC2ERNSt3__110shared_ptrINS_6MemoryEEE */
/* Demangled: unwindstack::Global::Global(std::__1::shared_ptr<unwindstack::Memory>&) */
int _ZN11unwindstack6GlobalC2ERNSt3__110shared_ptrINS_6MemoryEEE(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIjE18cfa_remember_stateEPNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfCfa<unsigned int>::cfa_remember_state(unwindstack::DwarfLocations*) */
int _ZN11unwindstack8DwarfCfaIjE18cfa_remember_stateEPNS_14DwarfLocationsE(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIyE22cfa_def_cfa_expressionEPNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfCfa<unsigned long long>::cfa_def_cfa_expression(unwindstack::DwarfLocations*) */
int _ZN11unwindstack8DwarfCfaIyE22cfa_def_cfa_expressionEPNS_14DwarfLocationsE(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE6op_rotEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::op_rot() */
int _ZN11unwindstack7DwarfOpIjE6op_rotEv(void);

/* Symbol: _ZN11unwindstack12ElfInterface21GetSonameWithTemplateI7dynamicEENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEv */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > unwindstack::ElfInterface::GetSonameWithTemplate<dynamic>() */
int _ZN11unwindstack12ElfInterface21GetSonameWithTemplateI7dynamicEENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEv(void);

/* Symbol: _ZN11unwindstack8JitDebugC1ERNSt3__110shared_ptrINS_6MemoryEEE */
/* Demangled: unwindstack::JitDebug::JitDebug(std::__1::shared_ptr<unwindstack::Memory>&) */
int _ZN11unwindstack8JitDebugC1ERNSt3__110shared_ptrINS_6MemoryEEE(void);

/* Symbol: _ZN11unwindstack8ArmExidx4EvalEv */
/* Demangled: unwindstack::ArmExidx::Eval() */
int _ZN11unwindstack8ArmExidx4EvalEv(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE5op_gtEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::op_gt() */
int _ZN11unwindstack7DwarfOpIjE5op_gtEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPyNS_9allocatorIS1_EEE10push_frontEOS1_ */
/* Demangled: std::__1::__split_buffer<unsigned long long*, std::__1::allocator<unsigned long long*> >::push_front(unsigned long long*&&) */
int _ZNSt3__114__split_bufferIPyNS_9allocatorIS1_EEE10push_frontEOS1_(void);

/* Symbol: _ZN11unwindstack16DwarfSectionImplIyEC2EPNS_6MemoryE */
/* Demangled: unwindstack::DwarfSectionImpl<unsigned long long>::DwarfSectionImpl(unwindstack::Memory*) */
int _ZN11unwindstack16DwarfSectionImplIyEC2EPNS_6MemoryE(void);

/* Symbol: _ZTVN11unwindstack15ElfInterfaceArmE */
/* Demangled: vtable for unwindstack::ElfInterfaceArm */
extern void* _ZTVN11unwindstack15ElfInterfaceArmE;

/* Symbol: _ZN11unwindstack15ElfInterfaceArm17HandleUnknownTypeEjyy */
/* Demangled: unwindstack::ElfInterfaceArm::HandleUnknownType(unsigned int, unsigned long long, unsigned long long) */
int _ZN11unwindstack15ElfInterfaceArm17HandleUnknownTypeEjyy(void);

/* Symbol: _ZN11unwindstack8JitDebugD0Ev */
/* Demangled: unwindstack::JitDebug::~JitDebug() */
int _ZN11unwindstack8JitDebugD0Ev(void);

/* Symbol: _ZN11unwindstack10RegsX86_6418CreateFromUcontextEPv */
/* Demangled: unwindstack::RegsX86_64::CreateFromUcontext(void*) */
int _ZN11unwindstack10RegsX86_6418CreateFromUcontextEPv(void);

/* Symbol: _ZN11unwindstack8RegsMips4ReadEPv */
/* Demangled: unwindstack::RegsMips::Read(void*) */
int _ZN11unwindstack8RegsMips4ReadEPv(void);

/* Symbol: _ZTVN11unwindstack12DwarfEhFrameIjEE */
/* Demangled: vtable for unwindstack::DwarfEhFrame<unsigned int> */
extern void* _ZTVN11unwindstack12DwarfEhFrameIjEE;

/* Symbol: _ZN11unwindstack12ElfInterface21GetSonameWithTemplateI9Elf64_DynEENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEv */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > unwindstack::ElfInterface::GetSonameWithTemplate<Elf64_Dyn>() */
int _ZN11unwindstack12ElfInterface21GetSonameWithTemplateI9Elf64_DynEENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEv(void);

/* Symbol: _ZN11unwindstack3Elf6cache_E */
/* Demangled: unwindstack::Elf::cache_ */
extern void* _ZN11unwindstack3Elf6cache_E;

/* Symbol: _ZN11unwindstack3Elf9IsValidPcEy */
/* Demangled: unwindstack::Elf::IsValidPc(unsigned long long) */
int _ZN11unwindstack3Elf9IsValidPcEy(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyA4096_hEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJRKyEEENSJ_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS3_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned char [4096]>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unsigned char [4096]>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned char [4096]>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned char [4096]>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned char [4096]> > >::__emplace_unique_key_args<unsigned long long, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long const&>, std::__1::tuple<> >(unsigned long long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyA4096_hEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJRKyEEENSJ_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS3_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN11unwindstack16DwarfSectionImplIjE15FillInFdeHeaderEPNS_8DwarfFdeE */
/* Demangled: unwindstack::DwarfSectionImpl<unsigned int>::FillInFdeHeader(unwindstack::DwarfFde*) */
int _ZN11unwindstack16DwarfSectionImplIjE15FillInFdeHeaderEPNS_8DwarfFdeE(void);

/* Symbol: _ZN11unwindstack12ElfInterface4StepEyPNS_4RegsEPNS_6MemoryEPb */
/* Demangled: unwindstack::ElfInterface::Step(unsigned long long, unwindstack::Regs*, unwindstack::Memory*, bool*) */
int _ZN11unwindstack12ElfInterface4StepEyPNS_4RegsEPNS_6MemoryEPb(void);

/* Symbol: _ZN11unwindstack3Elf11CacheUnlockEv */
/* Demangled: unwindstack::Elf::CacheUnlock() */
int _ZN11unwindstack3Elf11CacheUnlockEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN11unwindstack18MemoryFileAtOffsetENS_9allocatorIS2_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<unwindstack::MemoryFileAtOffset, std::__1::allocator<unwindstack::MemoryFileAtOffset> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN11unwindstack18MemoryFileAtOffsetENS_9allocatorIS2_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIyE14cfa_same_valueEPNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfCfa<unsigned long long>::cfa_same_value(unwindstack::DwarfLocations*) */
int _ZN11unwindstack8DwarfCfaIyE14cfa_same_valueEPNS_14DwarfLocationsE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN11unwindstack13DwarfLocationEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE14__erase_uniqueIjEEjRKT_ */
/* Demangled: unsigned int std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, unwindstack::DwarfLocation> > >::__erase_unique<unsigned int>(unsigned int const&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN11unwindstack13DwarfLocationEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE14__erase_uniqueIjEEjRKT_(void);

/* Symbol: _ZN11unwindstack15ElfInterfaceArm9FindEntryEjPy */
/* Demangled: unwindstack::ElfInterfaceArm::FindEntry(unsigned int, unsigned long long*) */
int _ZN11unwindstack15ElfInterfaceArm9FindEntryEjPy(void);

/* Symbol: _ZN11unwindstack8DexFilesC2ERNSt3__110shared_ptrINS_6MemoryEEERNS1_6vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENSA_ISC_EEEE */
/* Demangled: unwindstack::DexFiles::DexFiles(std::__1::shared_ptr<unwindstack::Memory>&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >&) */
int _ZN11unwindstack8DexFilesC2ERNSt3__110shared_ptrINS_6MemoryEEERNS1_6vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENSA_ISC_EEEE(void);

/* Symbol: _ZN11unwindstack12ElfInterface21ReadBuildIDFromMemoryI9elf64_hdr10elf64_shdr10elf64_noteEENSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPNS_6MemoryE */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > unwindstack::ElfInterface::ReadBuildIDFromMemory<elf64_hdr, elf64_shdr, elf64_note>(unwindstack::Memory*) */
int _ZN11unwindstack12ElfInterface21ReadBuildIDFromMemoryI9elf64_hdr10elf64_shdr10elf64_noteEENSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPNS_6MemoryE(void);

/* Symbol: _ZN11unwindstack10RegsMips6418CreateFromUcontextEPv */
/* Demangled: unwindstack::RegsMips64::CreateFromUcontext(void*) */
int _ZN11unwindstack10RegsMips6418CreateFromUcontextEPv(void);

/* Symbol: _ZTVN11unwindstack9RegsArm64E */
/* Demangled: vtable for unwindstack::RegsArm64 */
extern void* _ZTVN11unwindstack9RegsArm64E;

/* Symbol: _ZNSt3__16vectorIN11unwindstack9FrameDataENS_9allocatorIS2_EEE8__appendEj */
/* Demangled: std::__1::vector<unwindstack::FrameData, std::__1::allocator<unwindstack::FrameData> >::__append(unsigned int) */
int _ZNSt3__16vectorIN11unwindstack9FrameDataENS_9allocatorIS2_EEE8__appendEj(void);

/* Symbol: _ZN11unwindstack8DexFiles11ProcessArchEv */
/* Demangled: unwindstack::DexFiles::ProcessArch() */
int _ZN11unwindstack8DexFiles11ProcessArchEv(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE17kOpHandleFuncListE */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::kOpHandleFuncList */
extern void* _ZN11unwindstack7DwarfOpIyE17kOpHandleFuncListE;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack8LoadInfoEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE8__rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unwindstack::LoadInfo>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::LoadInfo>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::LoadInfo>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unwindstack::LoadInfo> > >::__rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack8LoadInfoEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE8__rehashEj(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN11unwindstack18MemoryFileAtOffsetENS_9allocatorIS2_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<unwindstack::MemoryFileAtOffset, std::__1::allocator<unwindstack::MemoryFileAtOffset> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN11unwindstack18MemoryFileAtOffsetENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN11unwindstack7RegsArm6set_spEy */
/* Demangled: unwindstack::RegsArm::set_sp(unsigned long long) */
int _ZN11unwindstack7RegsArm6set_spEy(void);

/* Symbol: _ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EES6_RKS9_ */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::operator+<char, std::__1::char_traits<char>, std::__1::allocator<char> >(char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EES6_RKS9_(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE12OperandsSizeEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::OperandsSize() */
int _ZN11unwindstack7DwarfOpIjE12OperandsSizeEv(void);

/* Symbol: _ZN11unwindstack12ElfInterface18ReadProgramHeadersI9elf64_hdr10elf64_phdrEEvRKT_Px */
/* Demangled: void unwindstack::ElfInterface::ReadProgramHeaders<elf64_hdr, elf64_phdr>(elf64_hdr const&, long long*) */
int _ZN11unwindstack12ElfInterface18ReadProgramHeadersI9elf64_hdr10elf64_phdrEEvRKT_Px(void);

/* Symbol: _ZN11unwindstack12MemoryBuffer6GetPtrEj */
/* Demangled: unwindstack::MemoryBuffer::GetPtr(unsigned int) */
int _ZN11unwindstack12MemoryBuffer6GetPtrEj(void);

/* Symbol: _ZN11unwindstack19DwarfEhFrameWithHdrIyE7GetFdesEPNSt3__16vectorIPKNS_8DwarfFdeENS2_9allocatorIS6_EEEE */
/* Demangled: unwindstack::DwarfEhFrameWithHdr<unsigned long long>::GetFdes(std::__1::vector<unwindstack::DwarfFde const*, std::__1::allocator<unwindstack::DwarfFde const*> >*) */
int _ZN11unwindstack19DwarfEhFrameWithHdrIyE7GetFdesEPNSt3__16vectorIPKNS_8DwarfFdeENS2_9allocatorIS6_EEEE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack19DwarfEhFrameWithHdrIjE7FdeInfoEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJOyEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned int>::FdeInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned int>::FdeInfo>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned int>::FdeInfo>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned int>::FdeInfo>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfEhFrameWithHdr<unsigned int>::FdeInfo> > >::__emplace_unique_key_args<unsigned long long, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long&&>, std::__1::tuple<> >(unsigned long long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack19DwarfEhFrameWithHdrIjE7FdeInfoEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJOyEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN11unwindstack7RegsX866set_spEy */
/* Demangled: unwindstack::RegsX86::set_sp(unsigned long long) */
int _ZN11unwindstack7RegsX866set_spEy(void);

/* Symbol: _ZN11unwindstack8DexFilesC2ERNSt3__110shared_ptrINS_6MemoryEEE */
/* Demangled: unwindstack::DexFiles::DexFiles(std::__1::shared_ptr<unwindstack::Memory>&) */
int _ZN11unwindstack8DexFilesC2ERNSt3__110shared_ptrINS_6MemoryEEE(void);

/* Symbol: _ZN11unwindstack7MapInfo13GetFileMemoryEv */
/* Demangled: unwindstack::MapInfo::GetFileMemory() */
int _ZN11unwindstack7MapInfo13GetFileMemoryEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPN11unwindstack11MemoryLocalENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_pointer<unwindstack::MemoryLocal*, std::__1::default_delete<unwindstack::MemoryLocal>, std::__1::allocator<unwindstack::MemoryLocal> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_pointerIPN11unwindstack11MemoryLocalENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN11unwindstack9RegsArm64C1Ev */
/* Demangled: unwindstack::RegsArm64::RegsArm64() */
int _ZN11unwindstack9RegsArm64C1Ev(void);

/* Symbol: _ZN11unwindstack7RegsX8615SetFromUcontextEPNS_14x86_ucontext_tE */
/* Demangled: unwindstack::RegsX86::SetFromUcontext(unwindstack::x86_ucontext_t*) */
int _ZN11unwindstack7RegsX8615SetFromUcontextEPNS_14x86_ucontext_tE(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE5op_orEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_or() */
int _ZN11unwindstack7DwarfOpIyE5op_orEv(void);

/* Symbol: _ZN11unwindstack12ElfInterface21ReadBuildIDFromMemoryI9elf32_hdr10elf32_shdr10elf32_noteEENSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPNS_6MemoryE */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > unwindstack::ElfInterface::ReadBuildIDFromMemory<elf32_hdr, elf32_shdr, elf32_note>(unwindstack::Memory*) */
int _ZN11unwindstack12ElfInterface21ReadBuildIDFromMemoryI9elf32_hdr10elf32_shdr10elf32_noteEENSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPNS_6MemoryE(void);

/* Symbol: _ZN11unwindstack3Elf12GetLastErrorEPNS_9ErrorDataE */
/* Demangled: unwindstack::Elf::GetLastError(unwindstack::ErrorData*) */
int _ZN11unwindstack3Elf12GetLastErrorEPNS_9ErrorDataE(void);

/* Symbol: _ZN11unwindstack7RegsArm19StepIfSignalHandlerEyPNS_3ElfEPNS_6MemoryE */
/* Demangled: unwindstack::RegsArm::StepIfSignalHandler(unsigned long long, unwindstack::Elf*, unwindstack::Memory*) */
int _ZN11unwindstack7RegsArm19StepIfSignalHandlerEyPNS_3ElfEPNS_6MemoryE(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIjE15GetLocationInfoEyyyPNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfCfa<unsigned int>::GetLocationInfo(unsigned long long, unsigned long long, unsigned long long, unwindstack::DwarfLocations*) */
int _ZN11unwindstack8DwarfCfaIjE15GetLocationInfoEyyyPNS_14DwarfLocationsE(void);

/* Symbol: _ZTVN11unwindstack7DwarfOpIjEE */
/* Demangled: vtable for unwindstack::DwarfOp<unsigned int> */
extern void* _ZTVN11unwindstack7DwarfOpIjEE;

/* Symbol: _ZN11unwindstack12DwarfEhFrameIjEC2EPNS_6MemoryE */
/* Demangled: unwindstack::DwarfEhFrame<unsigned int>::DwarfEhFrame(unwindstack::Memory*) */
int _ZN11unwindstack12DwarfEhFrameIjEC2EPNS_6MemoryE(void);

/* Symbol: _ZN11unwindstack12ElfInterface18ReadSectionHeadersI9elf32_hdr10elf32_shdrEEvRKT_ */
/* Demangled: void unwindstack::ElfInterface::ReadSectionHeaders<elf32_hdr, elf32_shdr>(elf32_hdr const&) */
int _ZN11unwindstack12ElfInterface18ReadSectionHeadersI9elf32_hdr10elf32_shdrEEvRKT_(void);

/* Symbol: _ZN11unwindstack13MemoryOffline4InitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEy */
/* Demangled: unwindstack::MemoryOffline::Init(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned long long) */
int _ZN11unwindstack13MemoryOffline4InitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEy(void);

/* Symbol: _ZTVN11unwindstack11MemoryRangeE */
/* Demangled: vtable for unwindstack::MemoryRange */
extern void* _ZTVN11unwindstack11MemoryRangeE;

/* Symbol: _ZN11unwindstack9RegsArm644ArchEv */
/* Demangled: unwindstack::RegsArm64::Arch() */
int _ZN11unwindstack9RegsArm644ArchEv(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIjE14LogInstructionEjyhPy */
/* Demangled: unwindstack::DwarfCfa<unsigned int>::LogInstruction(unsigned int, unsigned long long, unsigned char, unsigned long long*) */
int _ZN11unwindstack8DwarfCfaIjE14LogInstructionEjyhPy(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE13op_deref_sizeEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_deref_size() */
int _ZN11unwindstack7DwarfOpIyE13op_deref_sizeEv(void);

/* Symbol: _ZN11unwindstack7RegsArm6set_pcEy */
/* Demangled: unwindstack::RegsArm::set_pc(unsigned long long) */
int _ZN11unwindstack7RegsArm6set_pcEy(void);

/* Symbol: _ZN11unwindstack7RegsX86C2Ev */
/* Demangled: unwindstack::RegsX86::RegsX86() */
int _ZN11unwindstack7RegsX86C2Ev(void);

/* Symbol: _ZN11unwindstack11DwarfMemory10ReadSignedIsEEbPy */
/* Demangled: bool unwindstack::DwarfMemory::ReadSigned<short>(unsigned long long*) */
int _ZN11unwindstack11DwarfMemory10ReadSignedIsEEbPy(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE13op_deref_sizeEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::op_deref_size() */
int _ZN11unwindstack7DwarfOpIjE13op_deref_sizeEv(void);

/* Symbol: _ZN11unwindstack8JitDebug16ReadVariableDataEy */
/* Demangled: unwindstack::JitDebug::ReadVariableData(unsigned long long) */
int _ZN11unwindstack8JitDebug16ReadVariableDataEy(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIyE11cfa_set_locEPNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfCfa<unsigned long long>::cfa_set_loc(unwindstack::DwarfLocations*) */
int _ZN11unwindstack8DwarfCfaIyE11cfa_set_locEPNS_14DwarfLocationsE(void);

/* Symbol: _ZN11unwindstack16DwarfSectionImplIyE16GetCieFromOffsetEy */
/* Demangled: unwindstack::DwarfSectionImpl<unsigned long long>::GetCieFromOffset(unsigned long long) */
int _ZN11unwindstack16DwarfSectionImplIyE16GetCieFromOffsetEy(void);

/* Symbol: _ZN11unwindstack8JitDebug16ReadDescriptor64Ey */
/* Demangled: unwindstack::JitDebug::ReadDescriptor64(unsigned long long) */
int _ZN11unwindstack8JitDebug16ReadDescriptor64Ey(void);

/* Symbol: _ZN11unwindstack18MemoryOfflinePartsD2Ev */
/* Demangled: unwindstack::MemoryOfflineParts::~MemoryOfflineParts() */
int _ZN11unwindstack18MemoryOfflinePartsD2Ev(void);

/* Symbol: _ZN11unwindstack7RegsX866set_pcEy */
/* Demangled: unwindstack::RegsX86::set_pc(unsigned long long) */
int _ZN11unwindstack7RegsX866set_pcEy(void);

/* Symbol: __cxa_demangle */
/* Demangled: __cxa_demangle */
int __cxa_demangle(void);

/* Symbol: _ZNSt3__15dequeIhNS_9allocatorIhEEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<unsigned char, std::__1::allocator<unsigned char> >::__add_back_capacity() */
int _ZNSt3__15dequeIhNS_9allocatorIhEEE19__add_back_capacityEv(void);

/* Symbol: _ZN11unwindstack8DexFiles14ReadEntryPtr64Ey */
/* Demangled: unwindstack::DexFiles::ReadEntryPtr64(unsigned long long) */
int _ZN11unwindstack8DexFiles14ReadEntryPtr64Ey(void);

/* Symbol: _ZN11unwindstack8DexFilesD0Ev */
/* Demangled: unwindstack::DexFiles::~DexFiles() */
int _ZN11unwindstack8DexFilesD0Ev(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE4EvalEyy */
/* Demangled: unwindstack::DwarfOp<unsigned int>::Eval(unsigned long long, unsigned long long) */
int _ZN11unwindstack7DwarfOpIjE4EvalEyy(void);

/* Symbol: _ZNSt3__114__split_bufferIPhNS_9allocatorIS1_EEE10push_frontEOS1_ */
/* Demangled: std::__1::__split_buffer<unsigned char*, std::__1::allocator<unsigned char*> >::push_front(unsigned char*&&) */
int _ZNSt3__114__split_bufferIPhNS_9allocatorIS1_EEE10push_frontEOS1_(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE5op_leEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_le() */
int _ZN11unwindstack7DwarfOpIyE5op_leEv(void);

/* Symbol: _ZN11unwindstack7MapInfo19GetPrintableBuildIDEv */
/* Demangled: unwindstack::MapInfo::GetPrintableBuildID() */
int _ZN11unwindstack7MapInfo19GetPrintableBuildIDEv(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE8op_derefEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::op_deref() */
int _ZN11unwindstack7DwarfOpIjE8op_derefEv(void);

/* Symbol: _ZN11unwindstack12ElfInterface29GetGlobalVariableWithTemplateI9elf32_symEEbRKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPy */
/* Demangled: bool unwindstack::ElfInterface::GetGlobalVariableWithTemplate<elf32_sym>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned long long*) */
int _ZN11unwindstack12ElfInterface29GetGlobalVariableWithTemplateI9elf32_symEEbRKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPy(void);

/* Symbol: _ZTVN11unwindstack14ElfInterface32E */
/* Demangled: vtable for unwindstack::ElfInterface32 */
extern void* _ZTVN11unwindstack14ElfInterface32E;

/* Symbol: _ZN11unwindstack8RegsMips5CloneEv */
/* Demangled: unwindstack::RegsMips::Clone() */
int _ZN11unwindstack8RegsMips5CloneEv(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIjE16set_cie_loc_regsEPKNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfCfa<unsigned int>::set_cie_loc_regs(unwindstack::DwarfLocations const*) */
int _ZN11unwindstack8DwarfCfaIjE16set_cie_loc_regsEPKNS_14DwarfLocationsE(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE14regular_memoryEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::regular_memory() */
int _ZN11unwindstack7DwarfOpIjE14regular_memoryEv(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE10last_errorEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::last_error() */
int _ZN11unwindstack7DwarfOpIyE10last_errorEv(void);

/* Symbol: _ZN11unwindstack7Symbols7GetNameI9elf32_symEEbyPNS_6MemoryEPNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPy */
/* Demangled: bool unwindstack::Symbols::GetName<elf32_sym>(unsigned long long, unwindstack::Memory*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned long long*) */
int _ZN11unwindstack7Symbols7GetNameI9elf32_symEEbyPNS_6MemoryEPNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPy(void);

/* Symbol: _ZN11unwindstack6Memory25CreateProcessMemoryCachedEi */
/* Demangled: unwindstack::Memory::CreateProcessMemoryCached(int) */
int _ZN11unwindstack6Memory25CreateProcessMemoryCachedEi(void);

/* Symbol: _ZN11unwindstack7RegsArm15GetPcAdjustmentEyPNS_3ElfE */
/* Demangled: unwindstack::RegsArm::GetPcAdjustment(unsigned long long, unwindstack::Elf*) */
int _ZN11unwindstack7RegsArm15GetPcAdjustmentEyPNS_3ElfE(void);

/* Symbol: _ZTVN11unwindstack7RegsArmE */
/* Demangled: vtable for unwindstack::RegsArm */
extern void* _ZTVN11unwindstack7RegsArmE;

/* Symbol: _ZN11unwindstack7DwarfOpIyE7op_dropEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_drop() */
int _ZN11unwindstack7DwarfOpIyE7op_dropEv(void);

/* Symbol: _ZN11unwindstack8JitDebugC1ERNSt3__110shared_ptrINS_6MemoryEEERNS1_6vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENSA_ISC_EEEE */
/* Demangled: unwindstack::JitDebug::JitDebug(std::__1::shared_ptr<unwindstack::Memory>&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >&) */
int _ZN11unwindstack8JitDebugC1ERNSt3__110shared_ptrINS_6MemoryEEERNS1_6vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENSA_ISC_EEEE(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_pointerIPN11unwindstack11MemoryCacheENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_pointer<unwindstack::MemoryCache*, std::__1::default_delete<unwindstack::MemoryCache>, std::__1::allocator<unwindstack::MemoryCache> > */
extern void* _ZTVNSt3__120__shared_ptr_pointerIPN11unwindstack11MemoryCacheENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE;

/* Symbol: _ZN11unwindstack8RegsMipsC2Ev */
/* Demangled: unwindstack::RegsMips::RegsMips() */
int _ZN11unwindstack8RegsMipsC2Ev(void);

/* Symbol: _ZN11unwindstack8Unwinder14FillInDexFrameEv */
/* Demangled: unwindstack::Unwinder::FillInDexFrame() */
int _ZN11unwindstack8Unwinder14FillInDexFrameEv(void);

/* Symbol: _ZN11unwindstack12ElfInterface22GetMaxSizeWithTemplateI9elf64_hdrEEvPNS_6MemoryEPy */
/* Demangled: void unwindstack::ElfInterface::GetMaxSizeWithTemplate<elf64_hdr>(unwindstack::Memory*, unsigned long long*) */
int _ZN11unwindstack12ElfInterface22GetMaxSizeWithTemplateI9elf64_hdrEEvPNS_6MemoryEPy(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPN11unwindstack3ElfENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_pointer<unwindstack::Elf*, std::__1::default_delete<unwindstack::Elf>, std::__1::allocator<unwindstack::Elf> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_pointerIPN11unwindstack3ElfENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_pointerIPN11unwindstack12MemoryRemoteENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_pointer<unwindstack::MemoryRemote*, std::__1::default_delete<unwindstack::MemoryRemote>, std::__1::allocator<unwindstack::MemoryRemote> > */
extern void* _ZTVNSt3__120__shared_ptr_pointerIPN11unwindstack12MemoryRemoteENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE;

/* Symbol: _ZN11unwindstack8Unwinder11FillInFrameEPNS_7MapInfoEPNS_3ElfEyy */
/* Demangled: unwindstack::Unwinder::FillInFrame(unwindstack::MapInfo*, unwindstack::Elf*, unsigned long long, unsigned long long) */
int _ZN11unwindstack8Unwinder11FillInFrameEPNS_7MapInfoEPNS_3ElfEyy(void);

/* Symbol: _ZN11unwindstack8ArmExidx10LogRawDataEv */
/* Demangled: unwindstack::ArmExidx::LogRawData() */
int _ZN11unwindstack8ArmExidx10LogRawDataEv(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE5op_geEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::op_ge() */
int _ZN11unwindstack7DwarfOpIjE5op_geEv(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE6cur_opEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::cur_op() */
int _ZN11unwindstack7DwarfOpIyE6cur_opEv(void);

/* Symbol: _ZN11unwindstack7MapInfo12CreateMemoryERKNSt3__110shared_ptrINS_6MemoryEEE */
/* Demangled: unwindstack::MapInfo::CreateMemory(std::__1::shared_ptr<unwindstack::Memory> const&) */
int _ZN11unwindstack7MapInfo12CreateMemoryERKNSt3__110shared_ptrINS_6MemoryEEE(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPN11unwindstack12MemoryRemoteENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_pointer<unwindstack::MemoryRemote*, std::__1::default_delete<unwindstack::MemoryRemote>, std::__1::allocator<unwindstack::MemoryRemote> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_pointerIPN11unwindstack12MemoryRemoteENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN11unwindstack11DwarfMemory14GetEncodedSizeIyEEjh */
/* Demangled: unsigned int unwindstack::DwarfMemory::GetEncodedSize<unsigned long long>(unsigned char) */
int _ZN11unwindstack11DwarfMemory14GetEncodedSizeIyEEjh(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE7op_swapEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::op_swap() */
int _ZN11unwindstack7DwarfOpIjE7op_swapEv(void);

/* Symbol: _ZN11unwindstack16DwarfSectionImplIjE14EvalExpressionERKNS_13DwarfLocationEPNS_6MemoryEPjPNS_8RegsInfoIjEEPb */
/* Demangled: unwindstack::DwarfSectionImpl<unsigned int>::EvalExpression(unwindstack::DwarfLocation const&, unwindstack::Memory*, unsigned int*, unwindstack::RegsInfo<unsigned int>*, bool*) */
int _ZN11unwindstack16DwarfSectionImplIjE14EvalExpressionERKNS_13DwarfLocationEPNS_6MemoryEPjPNS_8RegsInfoIjEEPb(void);

/* Symbol: _ZTVN11unwindstack12MemoryBufferE */
/* Demangled: vtable for unwindstack::MemoryBuffer */
extern void* _ZTVN11unwindstack12MemoryBufferE;

/* Symbol: _ZN11unwindstack6Memory19CreateProcessMemoryEi */
/* Demangled: unwindstack::Memory::CreateProcessMemory(int) */
int _ZN11unwindstack6Memory19CreateProcessMemoryEi(void);

/* Symbol: _ZN11unwindstack16DwarfSectionImplIyE7GetFdesEPNSt3__16vectorIPKNS_8DwarfFdeENS2_9allocatorIS6_EEEE */
/* Demangled: unwindstack::DwarfSectionImpl<unsigned long long>::GetFdes(std::__1::vector<unwindstack::DwarfFde const*, std::__1::allocator<unwindstack::DwarfFde const*> >*) */
int _ZN11unwindstack16DwarfSectionImplIyE7GetFdesEPNSt3__16vectorIPKNS_8DwarfFdeENS2_9allocatorIS6_EEEE(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE18bool_to_dwarf_boolEb */
/* Demangled: unwindstack::DwarfOp<unsigned int>::bool_to_dwarf_bool(bool) */
int _ZN11unwindstack7DwarfOpIjE18bool_to_dwarf_boolEb(void);

/* Symbol: _ZN11unwindstack16DwarfSectionImplIyE15FillInCieHeaderEPNS_8DwarfCieE */
/* Demangled: unwindstack::DwarfSectionImpl<unsigned long long>::FillInCieHeader(unwindstack::DwarfCie*) */
int _ZN11unwindstack16DwarfSectionImplIyE15FillInCieHeaderEPNS_8DwarfCieE(void);

/* Symbol: _ZNSt3__16vectorIPN11unwindstack7SymbolsENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_ */
/* Demangled: void std::__1::vector<unwindstack::Symbols*, std::__1::allocator<unwindstack::Symbols*> >::__push_back_slow_path<unwindstack::Symbols*>(unwindstack::Symbols*&&) */
int _ZNSt3__16vectorIPN11unwindstack7SymbolsENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_(void);

/* Symbol: _ZNSt3__17__sort4IRZN11unwindstack7Symbols7GetNameI9elf64_symEEbyPNS1_6MemoryEPNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPyEUlRKNS2_4InfoESH_E_PSF_EEjT0_SL_SL_SL_T_ */
/* Demangled: unsigned int std::__1::__sort4<bool unwindstack::Symbols::GetName<elf64_sym>(unsigned long long, unwindstack::Memory*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned long long*)::{lambda(unwindstack::Symbols::Info const&, unwindstack::Symbols::Info const&)#1}&, unwindstack::Symbols::Info*>(unwindstack::Symbols::Info*, unwindstack::Symbols::Info*, unwindstack::Symbols::Info*, unwindstack::Symbols::Info*, bool unwindstack::Symbols::GetName<elf64_sym>(unsigned long long, unwindstack::Memory*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned long long*)::{lambda(unwindstack::Symbols::Info const&, unwindstack::Symbols::Info const&)#1}&) */
int _ZNSt3__17__sort4IRZN11unwindstack7Symbols7GetNameI9elf64_symEEbyPNS1_6MemoryEPNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPyEUlRKNS2_4InfoESH_E_PSF_EEjT0_SL_SL_SL_T_(void);

/* Symbol: _ZN11unwindstack8ArmExidx16ExtractEntryDataEj */
/* Demangled: unwindstack::ArmExidx::ExtractEntryData(unsigned int) */
int _ZN11unwindstack8ArmExidx16ExtractEntryDataEj(void);

/* Symbol: _ZN11unwindstack11DwarfMemory10ReadSignedIaEEbPy */
/* Demangled: bool unwindstack::DwarfMemory::ReadSigned<signed char>(unsigned long long*) */
int _ZN11unwindstack11DwarfMemory10ReadSignedIaEEbPy(void);

/* Symbol: _ZN11unwindstack10RegsX86_64C2Ev */
/* Demangled: unwindstack::RegsX86_64::RegsX86_64() */
int _ZN11unwindstack10RegsX86_64C2Ev(void);

/* Symbol: _ZN11unwindstack8DwarfCfaIyE32cfa_gnu_negative_offset_extendedEPNS_14DwarfLocationsE */
/* Demangled: unwindstack::DwarfCfa<unsigned long long>::cfa_gnu_negative_offset_extended(unwindstack::DwarfLocations*) */
int _ZN11unwindstack8DwarfCfaIyE32cfa_gnu_negative_offset_extendedEPNS_14DwarfLocationsE(void);

/* Symbol: _ZTVN11unwindstack16DwarfSectionImplIyEE */
/* Demangled: vtable for unwindstack::DwarfSectionImpl<unsigned long long> */
extern void* _ZTVN11unwindstack16DwarfSectionImplIyEE;

/* Symbol: _ZN11unwindstack7DwarfOpIyE6DecodeEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::Decode() */
int _ZN11unwindstack7DwarfOpIyE6DecodeEv(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyEC1EPNS_11DwarfMemoryEPNS_6MemoryE */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::DwarfOp(unwindstack::DwarfMemory*, unwindstack::Memory*) */
int _ZN11unwindstack7DwarfOpIyEC1EPNS_11DwarfMemoryEPNS_6MemoryE(void);

/* Symbol: _ZNSt3__16vectorINS_10unique_ptrIN11unwindstack7MapInfoENS_14default_deleteIS3_EEEENS_9allocatorIS6_EEE8__appendEj */
/* Demangled: std::__1::vector<std::__1::unique_ptr<unwindstack::MapInfo, std::__1::default_delete<unwindstack::MapInfo> >, std::__1::allocator<std::__1::unique_ptr<unwindstack::MapInfo, std::__1::default_delete<unwindstack::MapInfo> > > >::__append(unsigned int) */
int _ZNSt3__16vectorINS_10unique_ptrIN11unwindstack7MapInfoENS_14default_deleteIS3_EEEENS_9allocatorIS6_EEE8__appendEj(void);

/* Symbol: _ZN11unwindstack10RegsX86_6415GetPcAdjustmentEyPNS_3ElfE */
/* Demangled: unwindstack::RegsX86_64::GetPcAdjustment(unsigned long long, unwindstack::Elf*) */
int _ZN11unwindstack10RegsX86_6415GetPcAdjustmentEyPNS_3ElfE(void);

/* Symbol: _ZN11unwindstack19DwarfEhFrameWithHdrIyE19GetFdeInfoFromIndexEj */
/* Demangled: unwindstack::DwarfEhFrameWithHdr<unsigned long long>::GetFdeInfoFromIndex(unsigned int) */
int _ZN11unwindstack19DwarfEhFrameWithHdrIyE19GetFdeInfoFromIndexEj(void);

/* Symbol: _ZNSt3__114__split_bufferIPyRNS_9allocatorIS1_EEE9push_backEOS1_ */
/* Demangled: std::__1::__split_buffer<unsigned long long*, std::__1::allocator<unsigned long long*>&>::push_back(unsigned long long*&&) */
int _ZNSt3__114__split_bufferIPyRNS_9allocatorIS1_EEE9push_backEOS1_(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE5op_eqEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::op_eq() */
int _ZN11unwindstack7DwarfOpIjE5op_eqEv(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE5op_neEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_ne() */
int _ZN11unwindstack7DwarfOpIyE5op_neEv(void);

/* Symbol: _ZN11unwindstack4Regs9RemoteGetEi */
/* Demangled: unwindstack::Regs::RemoteGet(int) */
int _ZN11unwindstack4Regs9RemoteGetEi(void);

/* Symbol: _ZN11unwindstack11DwarfMemory16ReadEncodedValueIjEEbhPy */
/* Demangled: bool unwindstack::DwarfMemory::ReadEncodedValue<unsigned int>(unsigned char, unsigned long long*) */
int _ZN11unwindstack11DwarfMemory16ReadEncodedValueIjEEbhPy(void);

/* Symbol: _ZN11unwindstack10RegsX86_6419StepIfSignalHandlerEyPNS_3ElfEPNS_6MemoryE */
/* Demangled: unwindstack::RegsX86_64::StepIfSignalHandler(unsigned long long, unwindstack::Elf*, unwindstack::Memory*) */
int _ZN11unwindstack10RegsX86_6419StepIfSignalHandlerEyPNS_3ElfEPNS_6MemoryE(void);

/* Symbol: _ZTVN11unwindstack6GlobalE */
/* Demangled: vtable for unwindstack::Global */
extern void* _ZTVN11unwindstack6GlobalE;

/* Symbol: _ZN11unwindstack16DwarfSectionImplIjEC2EPNS_6MemoryE */
/* Demangled: unwindstack::DwarfSectionImpl<unsigned int>::DwarfSectionImpl(unwindstack::Memory*) */
int _ZN11unwindstack16DwarfSectionImplIjEC2EPNS_6MemoryE(void);

/* Symbol: _ZN11unwindstack16DwarfSectionImplIyE14EvalExpressionERKNS_13DwarfLocationEPNS_6MemoryEPyPNS_8RegsInfoIyEEPb */
/* Demangled: unwindstack::DwarfSectionImpl<unsigned long long>::EvalExpression(unwindstack::DwarfLocation const&, unwindstack::Memory*, unsigned long long*, unwindstack::RegsInfo<unsigned long long>*, bool*) */
int _ZN11unwindstack16DwarfSectionImplIyE14EvalExpressionERKNS_13DwarfLocationEPNS_6MemoryEPyPNS_8RegsInfoIyEEPb(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE10dex_pc_setEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::dex_pc_set() */
int _ZN11unwindstack7DwarfOpIyE10dex_pc_setEv(void);

/* Symbol: _ZN11unwindstack7DwarfOpIyE6op_dupEv */
/* Demangled: unwindstack::DwarfOp<unsigned long long>::op_dup() */
int _ZN11unwindstack7DwarfOpIyE6op_dupEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack8DwarfCieEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS4_PvEEEE */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfCie>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfCie>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfCie>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfCie> > >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unwindstack::DwarfCie>, void*>*>) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN11unwindstack8DwarfCieEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS4_PvEEEE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4pairINS_10shared_ptrIN11unwindstack3ElfEEEbEEEENS_22__unordered_map_hasherIS7_SE_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SE_NS_8equal_toIS7_EELb1EEENS5_ISE_EEE6rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> >, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::shared_ptr<unwindstack::Elf>, bool> > > >::rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4pairINS_10shared_ptrIN11unwindstack3ElfEEEbEEEENS_22__unordered_map_hasherIS7_SE_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SE_NS_8equal_toIS7_EELb1EEENS5_ISE_EEE6rehashEj(void);

/* Symbol: _ZN11unwindstack7MapInfo37InitFileMemoryFromPreviousReadOnlyMapEPNS_18MemoryFileAtOffsetE */
/* Demangled: unwindstack::MapInfo::InitFileMemoryFromPreviousReadOnlyMap(unwindstack::MemoryFileAtOffset*) */
int _ZN11unwindstack7MapInfo37InitFileMemoryFromPreviousReadOnlyMapEPNS_18MemoryFileAtOffsetE(void);

/* Symbol: _ZN11unwindstack12DwarfSection4StepEyPNS_4RegsEPNS_6MemoryEPb */
/* Demangled: unwindstack::DwarfSection::Step(unsigned long long, unwindstack::Regs*, unwindstack::Memory*, bool*) */
int _ZN11unwindstack12DwarfSection4StepEyPNS_4RegsEPNS_6MemoryEPb(void);

/* Symbol: _ZN11unwindstack12MemoryRanges4ReadEyPvj */
/* Demangled: unwindstack::MemoryRanges::Read(unsigned long long, void*, unsigned int) */
int _ZN11unwindstack12MemoryRanges4ReadEyPvj(void);

/* Symbol: _ZN11unwindstack7RegsX8616IterateRegistersENSt3__18functionIFvPKcyEEE */
/* Demangled: unwindstack::RegsX86::IterateRegisters(std::__1::function<void (char const*, unsigned long long)>) */
int _ZN11unwindstack7RegsX8616IterateRegistersENSt3__18functionIFvPKcyEEE(void);

/* Symbol: _ZN11unwindstack19DwarfEhFrameWithHdrIjE7GetFdesEPNSt3__16vectorIPKNS_8DwarfFdeENS2_9allocatorIS6_EEEE */
/* Demangled: unwindstack::DwarfEhFrameWithHdr<unsigned int>::GetFdes(std::__1::vector<unwindstack::DwarfFde const*, std::__1::allocator<unwindstack::DwarfFde const*> >*) */
int _ZN11unwindstack19DwarfEhFrameWithHdrIjE7GetFdesEPNSt3__16vectorIPKNS_8DwarfFdeENS2_9allocatorIS6_EEEE(void);

/* Symbol: _ZN11unwindstack7DwarfOpIjE6cur_opEv */
/* Demangled: unwindstack::DwarfOp<unsigned int>::cur_op() */
int _ZN11unwindstack7DwarfOpIjE6cur_opEv(void);

/* Symbol: _ZTVN11unwindstack19MemoryOfflineBufferE */
/* Demangled: vtable for unwindstack::MemoryOfflineBuffer */
extern void* _ZTVN11unwindstack19MemoryOfflineBufferE;

/* Symbol: _ZN11unwindstack13LocalUnwinder10GetMapInfoEy */
/* Demangled: unwindstack::LocalUnwinder::GetMapInfo(unsigned long long) */
int _ZN11unwindstack13LocalUnwinder10GetMapInfoEy(void);

/* Symbol: _ZN11unwindstack10RegsX86_6415SetFromUcontextEPNS_17x86_64_ucontext_tE */
/* Demangled: unwindstack::RegsX86_64::SetFromUcontext(unwindstack::x86_64_ucontext_t*) */
int _ZN11unwindstack10RegsX86_6415SetFromUcontextEPNS_17x86_64_ucontext_tE(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBUNWINDSTACK_V30_H */

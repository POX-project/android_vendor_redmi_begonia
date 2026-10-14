/*
 * Reverse-Engineered ABI Specification for: libpixelflinger.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libpixelflinger.so
 */

#ifndef BEGONIA_RE_LIBPIXELFLINGER_H
#define BEGONIA_RE_LIBPIXELFLINGER_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android17ARMAssemblerProxy14dataProcessingEiiiiij */
/* Demangled: android::ARMAssemblerProxy::dataProcessing(int, int, int, int, int, unsigned int) */
int _ZN7android17ARMAssemblerProxy14dataProcessingEiiiiij(void);

/* Symbol: mspace_malloc */
/* Demangled: mspace_malloc */
int mspace_malloc(void);

/* Symbol: _ZN7android12GGLAssembler14blending_codesEii */
/* Demangled: android::GGLAssembler::blending_codes(int, int) */
int _ZN7android12GGLAssembler14blending_codesEii(void);

/* Symbol: _ZN7android12GGLAssembler19init_iterated_colorERNS0_16fragment_parts_tERKNS0_5reg_tE */
/* Demangled: android::GGLAssembler::init_iterated_color(android::GGLAssembler::fragment_parts_t&, android::GGLAssembler::reg_t const&) */
int _ZN7android12GGLAssembler19init_iterated_colorERNS0_16fragment_parts_tERKNS0_5reg_tE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPjPKcEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int*, char const*> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPjPKcEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN7android22mspace_footprint_limitEPv */
/* Demangled: android::mspace_footprint_limit(void*) */
int _ZN7android22mspace_footprint_limitEPv(void);

/* Symbol: _ZN7android12ARMAssembler4SMULEiiiii */
/* Demangled: android::ARMAssembler::SMUL(int, int, int, int, int) */
int _ZN7android12ARMAssembler4SMULEiiiii(void);

/* Symbol: _ZN7android12ARMAssemblerD0Ev */
/* Demangled: android::ARMAssembler::~ARMAssembler() */
int _ZN7android12ARMAssemblerD0Ev(void);

/* Symbol: _ZN7android17ARMAssemblerProxy8reg_postEi */
/* Demangled: android::ARMAssemblerProxy::reg_post(int) */
int _ZN7android17ARMAssemblerProxy8reg_postEi(void);

/* Symbol: _ZN7android17ggl_state_changedEPNS_9context_tEi */
/* Demangled: android::ggl_state_changed(android::context_t*, int) */
int _ZN7android17ggl_state_changedEPNS_9context_tEi(void);

/* Symbol: _ZN7android12ARMAssembler4SMLAEiiiiii */
/* Demangled: android::ARMAssembler::SMLA(int, int, int, int, int, int) */
int _ZN7android12ARMAssembler4SMLAEiiiiii(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPjPKcEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int*, char const*> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPjPKcEEE10do_destroyEPvj(void);

/* Symbol: _ZN7android8ggl_pickEPNS_9context_tE */
/* Demangled: android::ggl_pick(android::context_t*) */
int _ZN7android8ggl_pickEPNS_9context_tE(void);

/* Symbol: _ZN7android12ARMAssembler12immed12_postEi */
/* Demangled: android::ARMAssembler::immed12_post(int) */
int _ZN7android12ARMAssembler12immed12_postEi(void);

/* Symbol: _ZN7android12GGLAssembler15build_iterate_fERKNS0_16fragment_parts_tE */
/* Demangled: android::GGLAssembler::build_iterate_f(android::GGLAssembler::fragment_parts_t const&) */
int _ZN7android12GGLAssembler15build_iterate_fERKNS0_16fragment_parts_tE(void);

/* Symbol: _ZN7android12GGLAssembler6prologEv */
/* Demangled: android::GGLAssembler::prolog() */
int _ZN7android12GGLAssembler6prologEv(void);

/* Symbol: _ZN7android17RegisterAllocator12RegisterFile7reserveEi */
/* Demangled: android::RegisterAllocator::RegisterFile::reserve(int) */
int _ZN7android17RegisterAllocator12RegisterFile7reserveEi(void);

/* Symbol: _ZN7android12GGLAssembler8modulateERNS0_11component_tERKS1_RKNS0_7pixel_tEi */
/* Demangled: android::GGLAssembler::modulate(android::GGLAssembler::component_t&, android::GGLAssembler::component_t const&, android::GGLAssembler::pixel_t const&, int) */
int _ZN7android12GGLAssembler8modulateERNS0_11component_tERKS1_RKNS0_7pixel_tEi(void);

/* Symbol: _ZN7android17ARMAssemblerProxy5SMLAWEiiiiii */
/* Demangled: android::ARMAssemblerProxy::SMLAW(int, int, int, int, int, int) */
int _ZN7android17ARMAssemblerProxy5SMLAWEiiiiii(void);

/* Symbol: _ZN7android12ARMAssembler11immed8_postEi */
/* Demangled: android::ARMAssembler::immed8_post(int) */
int _ZN7android12ARMAssembler11immed8_postEi(void);

/* Symbol: _ZN7android21ARMAssemblerInterfaceD0Ev */
/* Demangled: android::ARMAssemblerInterface::~ARMAssemblerInterface() */
int _ZN7android21ARMAssemblerInterfaceD0Ev(void);

/* Symbol: _ZN7android17ARMAssemblerProxy4UBFXEiiiii */
/* Demangled: android::ARMAssemblerProxy::UBFX(int, int, int, int, int) */
int _ZN7android17ARMAssemblerProxy4UBFXEiiiii(void);

/* Symbol: _ZN7android12GGLAssemblerC1EPNS_21ARMAssemblerInterfaceE */
/* Demangled: android::GGLAssembler::GGLAssembler(android::ARMAssemblerInterface*) */
int _ZN7android12GGLAssemblerC1EPNS_21ARMAssemblerInterfaceE(void);

/* Symbol: _ZN7android12GGLAssembler10mul_factorERNS0_11component_tERKNS0_9integer_tES5_ */
/* Demangled: android::GGLAssembler::mul_factor(android::GGLAssembler::component_t&, android::GGLAssembler::integer_t const&, android::GGLAssembler::integer_t const&) */
int _ZN7android12GGLAssembler10mul_factorERNS0_11component_tERKNS0_9integer_tES5_(void);

/* Symbol: _ZN7android12GGLAssembler14mul_factor_addERNS0_11component_tERKNS0_9integer_tES5_RKS1_ */
/* Demangled: android::GGLAssembler::mul_factor_add(android::GGLAssembler::component_t&, android::GGLAssembler::integer_t const&, android::GGLAssembler::integer_t const&, android::GGLAssembler::component_t const&) */
int _ZN7android12GGLAssembler14mul_factor_addERNS0_11component_tERKNS0_9integer_tES5_RKS1_(void);

/* Symbol: _ZN7android12ARMAssembler5SMLAWEiiiiii */
/* Demangled: android::ARMAssembler::SMLAW(int, int, int, int, int, int) */
int _ZN7android12ARMAssembler5SMLAWEiiiiii(void);

/* Symbol: _ZN7android17ARMAssemblerProxy8generateEPKc */
/* Demangled: android::ARMAssemblerProxy::generate(char const*) */
int _ZN7android17ARMAssemblerProxy8generateEPKc(void);

/* Symbol: _ZN7android12GGLAssembler14decodeTMUNeedsERKNS_7needs_tEPKNS_9context_tE */
/* Demangled: android::GGLAssembler::decodeTMUNeeds(android::needs_t const&, android::context_t const*) */
int _ZN7android12GGLAssembler14decodeTMUNeedsERKNS_7needs_tEPKNS_9context_tE(void);

/* Symbol: _ZN7android12GGLAssembler7extractERNS0_11component_tERKNS0_7pixel_tEi */
/* Demangled: android::GGLAssembler::extract(android::GGLAssembler::component_t&, android::GGLAssembler::pixel_t const&, int) */
int _ZN7android12GGLAssembler7extractERNS0_11component_tERKNS0_7pixel_tEi(void);

/* Symbol: _ZN7android12ARMAssembler5LDRSHEiiij */
/* Demangled: android::ARMAssembler::LDRSH(int, int, int, unsigned int) */
int _ZN7android12ARMAssembler5LDRSHEiiij(void);

/* Symbol: _ZN7android12ARMAssembler8generateEPKc */
/* Demangled: android::ARMAssembler::generate(char const*) */
int _ZN7android12ARMAssembler8generateEPKc(void);

/* Symbol: _ZN7android17ARMAssemblerProxy6prologEv */
/* Demangled: android::ARMAssemblerProxy::prolog() */
int _ZN7android17ARMAssemblerProxy6prologEv(void);

/* Symbol: _ZN7android12GGLAssembler33build_iterate_texture_coordinatesERKNS0_16fragment_parts_tE */
/* Demangled: android::GGLAssembler::build_iterate_texture_coordinates(android::GGLAssembler::fragment_parts_t const&) */
int _ZN7android12GGLAssembler33build_iterate_texture_coordinatesERKNS0_16fragment_parts_tE(void);

/* Symbol: _ZN7android17ARMAssemblerProxy5resetEv */
/* Demangled: android::ARMAssemblerProxy::reset() */
int _ZN7android17ARMAssemblerProxy5resetEv(void);

/* Symbol: _ZN7android12GGLAssembler13scanline_coreERKNS_7needs_tEPKNS_9context_tE */
/* Demangled: android::GGLAssembler::scanline_core(android::needs_t const&, android::context_t const*) */
int _ZN7android12GGLAssembler13scanline_coreERKNS_7needs_tEPKNS_9context_tE(void);

/* Symbol: _ZN7android12GGLAssembler16build_depth_testERKNS0_16fragment_parts_tEj */
/* Demangled: android::GGLAssembler::build_depth_test(android::GGLAssembler::fragment_parts_t const&, unsigned int) */
int _ZN7android12GGLAssembler16build_depth_testERKNS0_16fragment_parts_tEj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPKcPjEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<char const*, unsigned int*> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPKcPjEEE7do_copyEPvPKvj(void);

/* Symbol: _ZN7android17ARMAssemblerProxy10pcForLabelEPKc */
/* Demangled: android::ARMAssemblerProxy::pcForLabel(char const*) */
int _ZN7android17ARMAssemblerProxy10pcForLabelEPKc(void);

/* Symbol: _ZN7android17ARMAssemblerProxy5LDRSBEiiij */
/* Demangled: android::ARMAssemblerProxy::LDRSB(int, int, int, unsigned int) */
int _ZN7android17ARMAssemblerProxy5LDRSBEiiij(void);

/* Symbol: _ZN7android17ARMAssemblerProxyD1Ev */
/* Demangled: android::ARMAssemblerProxy::~ARMAssemblerProxy() */
int _ZN7android17ARMAssemblerProxyD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_9CodeCache5key_tENS2_13cache_entry_tEEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::CodeCache::key_t, android::CodeCache::cache_entry_t> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_9CodeCache5key_tENS2_13cache_entry_tEEEE7do_copyEPvPKvj(void);

/* Symbol: mspace_mallopt */
/* Demangled: mspace_mallopt */
int mspace_mallopt(void);

/* Symbol: _ZN7android12GGLAssembler8filter32ERKNS0_16fragment_parts_tERNS0_7pixel_tERKNS0_14texture_unit_tEiiRNS0_9pointer_tEi */
/* Demangled: android::GGLAssembler::filter32(android::GGLAssembler::fragment_parts_t const&, android::GGLAssembler::pixel_t&, android::GGLAssembler::texture_unit_t const&, int, int, android::GGLAssembler::pointer_t&, int) */
int _ZN7android12GGLAssembler8filter32ERKNS0_16fragment_parts_tERNS0_7pixel_tERKNS0_14texture_unit_tEiiRNS0_9pointer_tEi(void);

/* Symbol: _ZN7android8AssemblyD0Ev */
/* Demangled: android::Assembly::~Assembly() */
int _ZN7android8AssemblyD0Ev(void);

/* Symbol: _ZN7android12GGLAssembler14build_logic_opERNS0_7pixel_tERNS_17RegisterAllocator7ScratchE */
/* Demangled: android::GGLAssembler::build_logic_op(android::GGLAssembler::pixel_t&, android::RegisterAllocator::Scratch&) */
int _ZN7android12GGLAssembler14build_logic_opERNS0_7pixel_tERNS_17RegisterAllocator7ScratchE(void);

/* Symbol: _ZNK7android6VectorINS_12ARMAssembler15branch_target_tEE10do_destroyEPvj */
/* Demangled: android::Vector<android::ARMAssembler::branch_target_t>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorINS_12ARMAssembler15branch_target_tEE10do_destroyEPvj(void);

/* Symbol: _ZN7android17ARMAssemblerProxy5UMUALEiiiiii */
/* Demangled: android::ARMAssemblerProxy::UMUAL(int, int, int, int, int, int) */
int _ZN7android17ARMAssemblerProxy5UMUALEiiiiii(void);

/* Symbol: _ZN7android17ARMAssemblerProxy7reg_rrxEi */
/* Demangled: android::ARMAssemblerProxy::reg_rrx(int) */
int _ZN7android17ARMAssemblerProxy7reg_rrxEi(void);

/* Symbol: _ZN7android12GGLAssembler13build_maskingERNS0_7pixel_tERNS_17RegisterAllocator7ScratchE */
/* Demangled: android::GGLAssembler::build_masking(android::GGLAssembler::pixel_t&, android::RegisterAllocator::Scratch&) */
int _ZN7android12GGLAssembler13build_maskingERNS0_7pixel_tERNS_17RegisterAllocator7ScratchE(void);

/* Symbol: _ZN7android17RegisterAllocator10recycleRegEi */
/* Demangled: android::RegisterAllocator::recycleReg(int) */
int _ZN7android17RegisterAllocator10recycleRegEi(void);

/* Symbol: _ZN7android17RegisterAllocator12RegisterFile14reserveSeveralEj */
/* Demangled: android::RegisterAllocator::RegisterFile::reserveSeveral(unsigned int) */
int _ZN7android17RegisterAllocator12RegisterFile14reserveSeveralEj(void);

/* Symbol: _ZN7android12ARMAssembler6UXTB16Eiiii */
/* Demangled: android::ARMAssembler::UXTB16(int, int, int, int) */
int _ZN7android12ARMAssembler6UXTB16Eiiii(void);

/* Symbol: _ZN7android13ggl_init_trapEPNS_9context_tE */
/* Demangled: android::ggl_init_trap(android::context_t*) */
int _ZN7android13ggl_init_trapEPNS_9context_tE(void);

/* Symbol: mspace_malloc_stats */
/* Demangled: mspace_malloc_stats */
int mspace_malloc_stats(void);

/* Symbol: _ZN7android17RegisterAllocator12RegisterFile14recycleSeveralEj */
/* Demangled: android::RegisterAllocator::RegisterFile::recycleSeveral(unsigned int) */
int _ZN7android17RegisterAllocator12RegisterFile14recycleSeveralEj(void);

/* Symbol: _ZN7android12ARMAssembler11immed12_preEii */
/* Demangled: android::ARMAssembler::immed12_pre(int, int) */
int _ZN7android12ARMAssembler11immed12_preEii(void);

/* Symbol: _ZN7android12ARMAssembler5UMUALEiiiiii */
/* Demangled: android::ARMAssembler::UMUAL(int, int, int, int, int, int) */
int _ZN7android12ARMAssembler5UMUALEiiiiii(void);

/* Symbol: _ZTVN7android16ScanlineAssemblyE */
/* Demangled: vtable for android::ScanlineAssembly */
extern void* _ZTVN7android16ScanlineAssemblyE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPKcPjEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<char const*, unsigned int*> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPKcPjEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN7android17ARMAssemblerProxy5UMULLEiiiiii */
/* Demangled: android::ARMAssemblerProxy::UMULL(int, int, int, int, int, int) */
int _ZN7android17ARMAssemblerProxy5UMULLEiiiiii(void);

/* Symbol: _ZN7android17ARMAssemblerProxy6UXTB16Eiiii */
/* Demangled: android::ARMAssemblerProxy::UXTB16(int, int, int, int) */
int _ZN7android17ARMAssemblerProxy6UXTB16Eiiii(void);

/* Symbol: _ZN7android17RegisterAllocatorC2Ei */
/* Demangled: android::RegisterAllocator::RegisterAllocator(int) */
int _ZN7android17RegisterAllocatorC2Ei(void);

/* Symbol: _ZNK7android12GGLAssembler19isAlphaSourceNeededEv */
/* Demangled: android::GGLAssembler::isAlphaSourceNeeded() const */
int _ZNK7android12GGLAssembler19isAlphaSourceNeededEv(void);

/* Symbol: _ZN7android12ARMAssembler14buildImmediateEjRjS1_ */
/* Demangled: android::ARMAssembler::buildImmediate(unsigned int, unsigned int&, unsigned int&) */
int _ZN7android12ARMAssembler14buildImmediateEjRjS1_(void);

/* Symbol: _ZN7android12ARMAssembler2BLEiPKc */
/* Demangled: android::ARMAssembler::BL(int, char const*) */
int _ZN7android12ARMAssembler2BLEiPKc(void);

/* Symbol: _ZN7android17ARMAssemblerProxy3SWPEiiii */
/* Demangled: android::ARMAssemblerProxy::SWP(int, int, int, int) */
int _ZN7android17ARMAssemblerProxy3SWPEiiii(void);

/* Symbol: _ZN7android17ARMAssemblerProxy7reg_immEiij */
/* Demangled: android::ARMAssemblerProxy::reg_imm(int, int, unsigned int) */
int _ZN7android17ARMAssemblerProxy7reg_immEiij(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_9CodeCache5key_tENS2_13cache_entry_tEEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::CodeCache::key_t, android::CodeCache::cache_entry_t> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_9CodeCache5key_tENS2_13cache_entry_tEEEE8do_splatEPvPKvj(void);

/* Symbol: _ZN7android17RegisterAllocator12RegisterFileC1ERKS1_i */
/* Demangled: android::RegisterAllocator::RegisterFile::RegisterFile(android::RegisterAllocator::RegisterFile const&, int) */
int _ZN7android17RegisterAllocator12RegisterFileC1ERKS1_i(void);

/* Symbol: _ZN7android12ARMAssembler5UMULLEiiiiii */
/* Demangled: android::ARMAssembler::UMULL(int, int, int, int, int, int) */
int _ZN7android12ARMAssembler5UMULLEiiiiii(void);

/* Symbol: _Z10gglMulDiviiii */
/* Demangled: gglMulDivi(int, int, int) */
int _Z10gglMulDiviiii(void);

/* Symbol: _ZN7android12GGLAssembler19build_and_immediateEiiji */
/* Demangled: android::GGLAssembler::build_and_immediate(int, int, unsigned int, int) */
int _ZN7android12GGLAssembler19build_and_immediateEiiji(void);

/* Symbol: _ZN7android17ARMAssemblerProxyC1EPNS_21ARMAssemblerInterfaceE */
/* Demangled: android::ARMAssemblerProxy::ARMAssemblerProxy(android::ARMAssemblerInterface*) */
int _ZN7android17ARMAssemblerProxyC1EPNS_21ARMAssemblerInterfaceE(void);

/* Symbol: mspace_footprint */
/* Demangled: mspace_footprint */
int mspace_footprint(void);

/* Symbol: _ZN7android12GGLAssembler21build_blendOneMinusFFERNS0_11component_tERKNS0_9integer_tES5_S5_ */
/* Demangled: android::GGLAssembler::build_blendOneMinusFF(android::GGLAssembler::component_t&, android::GGLAssembler::integer_t const&, android::GGLAssembler::integer_t const&, android::GGLAssembler::integer_t const&) */
int _ZN7android12GGLAssembler21build_blendOneMinusFFERNS0_11component_tERKNS0_9integer_tES5_S5_(void);

/* Symbol: _ZN7android12ARMAssembler3LDREiiij */
/* Demangled: android::ARMAssembler::LDR(int, int, int, unsigned int) */
int _ZN7android12ARMAssembler3LDREiiij(void);

/* Symbol: _ZN7android12ARMAssembler7commentEPKc */
/* Demangled: android::ARMAssembler::comment(char const*) */
int _ZN7android12ARMAssembler7commentEPKc(void);

/* Symbol: mspace_usable_size */
/* Demangled: mspace_usable_size */
int mspace_usable_size(void);

/* Symbol: _ZN7android12GGLAssemblerD1Ev */
/* Demangled: android::GGLAssembler::~GGLAssembler() */
int _ZN7android12GGLAssemblerD1Ev(void);

/* Symbol: _ZN7android12ARMAssembler3MLAEiiiiii */
/* Demangled: android::ARMAssembler::MLA(int, int, int, int, int, int) */
int _ZN7android12ARMAssembler3MLAEiiiiii(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPjPKcEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int*, char const*> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPjPKcEEE7do_copyEPvPKvj(void);

/* Symbol: _ZN7android17ARMAssemblerProxy4SMLAEiiiiii */
/* Demangled: android::ARMAssemblerProxy::SMLA(int, int, int, int, int, int) */
int _ZN7android17ARMAssemblerProxy4SMLAEiiiiii(void);

/* Symbol: _ZN7android17RegisterAllocator12RegisterFile7recycleEi */
/* Demangled: android::RegisterAllocator::RegisterFile::recycle(int) */
int _ZN7android17RegisterAllocator12RegisterFile7recycleEi(void);

/* Symbol: _Z7gglDivQiii */
/* Demangled: gglDivQ(int, int, int) */
int _Z7gglDivQiii(void);

/* Symbol: _ZTVN7android21ARMAssemblerInterfaceE */
/* Demangled: vtable for android::ARMAssemblerInterface */
extern void* _ZTVN7android21ARMAssemblerInterfaceE;

/* Symbol: _ZN7android17ARMAssemblerProxy7commentEPKc */
/* Demangled: android::ARMAssemblerProxy::comment(char const*) */
int _ZN7android17ARMAssemblerProxy7commentEPKc(void);

/* Symbol: _ZN7android17ARMAssemblerProxyC1Ev */
/* Demangled: android::ARMAssemblerProxy::ARMAssemblerProxy() */
int _ZN7android17ARMAssemblerProxyC1Ev(void);

/* Symbol: mspace_track_large_chunks */
/* Demangled: mspace_track_large_chunks */
int mspace_track_large_chunks(void);

/* Symbol: _ZN7android12ARMAssembler7reg_preEii */
/* Demangled: android::ARMAssembler::reg_pre(int, int) */
int _ZN7android12ARMAssembler7reg_preEii(void);

/* Symbol: _ZNK7android6VectorINS_12ARMAssembler15branch_target_tEE7do_copyEPvPKvj */
/* Demangled: android::Vector<android::ARMAssembler::branch_target_t>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_12ARMAssembler15branch_target_tEE7do_copyEPvPKvj(void);

/* Symbol: _Z7gglPowxii */
/* Demangled: gglPowx(int, int) */
int _Z7gglPowxii(void);

/* Symbol: _ZN7android21ARMAssemblerInterface13__immed12_preEii */
/* Demangled: android::ARMAssemblerInterface::__immed12_pre(int, int) */
int _ZN7android21ARMAssemblerInterface13__immed12_preEii(void);

/* Symbol: _ZN7android17ARMAssemblerProxy5labelEPKc */
/* Demangled: android::ARMAssemblerProxy::label(char const*) */
int _ZN7android17ARMAssemblerProxy5labelEPKc(void);

/* Symbol: _ZN7android17ARMAssemblerProxy1BEiPj */
/* Demangled: android::ARMAssemblerProxy::B(int, unsigned int*) */
int _ZN7android17ARMAssemblerProxy1BEiPj(void);

/* Symbol: _ZN7android17ARMAssemblerProxy2BXEii */
/* Demangled: android::ARMAssemblerProxy::BX(int, int) */
int _ZN7android17ARMAssemblerProxy2BXEii(void);

/* Symbol: _ZN7android17ARMAssemblerProxy4QADDEiiii */
/* Demangled: android::ARMAssemblerProxy::QADD(int, int, int, int) */
int _ZN7android17ARMAssemblerProxy4QADDEiiii(void);

/* Symbol: _ZN7android16mspace_bulk_freeEPvPS0_j */
/* Demangled: android::mspace_bulk_free(void*, void**, unsigned int) */
int _ZN7android16mspace_bulk_freeEPvPS0_j(void);

/* Symbol: _ZN7android17RegisterAllocator12RegisterFileC2Ei */
/* Demangled: android::RegisterAllocator::RegisterFile::RegisterFile(int) */
int _ZN7android17RegisterAllocator12RegisterFileC2Ei(void);

/* Symbol: _ZN7android12ARMAssembler3CLZEiii */
/* Demangled: android::ARMAssembler::CLZ(int, int, int) */
int _ZN7android12ARMAssembler3CLZEiii(void);

/* Symbol: _ZN7android12ARMAssembler7reg_rrxEi */
/* Demangled: android::ARMAssembler::reg_rrx(int) */
int _ZN7android12ARMAssembler7reg_rrxEi(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIPjPKcEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned int*, char const*> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIPjPKcEEEE;

/* Symbol: _ZN7android17ARMAssemblerProxy4LDRBEiiij */
/* Demangled: android::ARMAssemblerProxy::LDRB(int, int, int, unsigned int) */
int _ZN7android17ARMAssemblerProxy4LDRBEiiij(void);

/* Symbol: gglGetPixelFormatTable */
/* Demangled: gglGetPixelFormatTable */
int gglGetPixelFormatTable(void);

/* Symbol: _ZN7android17ARMAssemblerProxy4SMULEiiiii */
/* Demangled: android::ARMAssemblerProxy::SMUL(int, int, int, int, int) */
int _ZN7android17ARMAssemblerProxy4SMULEiiiii(void);

/* Symbol: _ZN7android12GGLAssembler15build_iterate_zERKNS0_16fragment_parts_tE */
/* Demangled: android::GGLAssembler::build_iterate_z(android::GGLAssembler::fragment_parts_t const&) */
int _ZN7android12GGLAssembler15build_iterate_zERKNS0_16fragment_parts_tE(void);

/* Symbol: _ZN7android17RegisterAllocator12RegisterFileD2Ev */
/* Demangled: android::RegisterAllocator::RegisterFile::~RegisterFile() */
int _ZN7android17RegisterAllocator12RegisterFileD2Ev(void);

/* Symbol: _ZNK7android17RegisterAllocator12RegisterFile7touchedEv */
/* Demangled: android::RegisterAllocator::RegisterFile::touched() const */
int _ZNK7android17RegisterAllocator12RegisterFile7touchedEv(void);

/* Symbol: gglBitBlit */
/* Demangled: gglBitBlit */
int gglBitBlit(void);

/* Symbol: _ZN7android12ARMAssembler6prologEv */
/* Demangled: android::ARMAssembler::prolog() */
int _ZN7android12ARMAssembler6prologEv(void);

/* Symbol: _ZN7android12ARMAssemblerC2ERKNS_9tinyutils2spINS_8AssemblyEEE */
/* Demangled: android::ARMAssembler::ARMAssembler(android::tinyutils::sp<android::Assembly> const&) */
int _ZN7android12ARMAssemblerC2ERKNS_9tinyutils2spINS_8AssemblyEEE(void);

/* Symbol: _ZN7android15ggl_system_timeEv */
/* Demangled: android::ggl_system_time() */
int _ZN7android15ggl_system_timeEv(void);

/* Symbol: _ZNK7android6VectorINS_12ARMAssembler15branch_target_tEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<android::ARMAssembler::branch_target_t>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_12ARMAssembler15branch_target_tEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN7android21ARMAssemblerInterface12__immed8_preEii */
/* Demangled: android::ARMAssemblerInterface::__immed8_pre(int, int) */
int _ZN7android21ARMAssemblerInterface12__immed8_preEii(void);

/* Symbol: create_mspace_with_base */
/* Demangled: create_mspace_with_base */
int create_mspace_with_base(void);

/* Symbol: _ZN7android12GGLAssembler6expandERNS0_9integer_tERKS1_i */
/* Demangled: android::GGLAssembler::expand(android::GGLAssembler::integer_t&, android::GGLAssembler::integer_t const&, int) */
int _ZN7android12GGLAssembler6expandERNS0_9integer_tERKS1_i(void);

/* Symbol: _ZN7android17ARMAssemblerProxy3MULEiiiii */
/* Demangled: android::ARMAssemblerProxy::MUL(int, int, int, int, int) */
int _ZN7android17ARMAssemblerProxy3MULEiiiii(void);

/* Symbol: _ZN7android17ARMAssemblerProxy8ADDR_STREiiij */
/* Demangled: android::ARMAssemblerProxy::ADDR_STR(int, int, int, unsigned int) */
int _ZN7android17ARMAssemblerProxy8ADDR_STREiiij(void);

/* Symbol: _ZN7android12GGLAssembler5resetEi */
/* Demangled: android::GGLAssembler::reset(int) */
int _ZN7android12GGLAssembler5resetEi(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPKcPjEEE10do_compareEPKvS8_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<char const*, unsigned int*> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPKcPjEEE10do_compareEPKvS8_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPjPKcEEE10do_compareEPKvS8_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int*, char const*> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPjPKcEEE10do_compareEPKvS8_(void);

/* Symbol: _ZN7android12GGLAssembler25build_texture_environmentERNS0_11component_tERKNS0_16fragment_parts_tEiRNS_17RegisterAllocator7ScratchE */
/* Demangled: android::GGLAssembler::build_texture_environment(android::GGLAssembler::component_t&, android::GGLAssembler::fragment_parts_t const&, int, android::RegisterAllocator::Scratch&) */
int _ZN7android12GGLAssembler25build_texture_environmentERNS0_11component_tERKNS0_16fragment_parts_tEiRNS_17RegisterAllocator7ScratchE(void);

/* Symbol: _ZN7android12GGLAssembler6expandERNS0_9integer_tERKNS0_11component_tEi */
/* Demangled: android::GGLAssembler::expand(android::GGLAssembler::integer_t&, android::GGLAssembler::component_t const&, int) */
int _ZN7android12GGLAssembler6expandERNS0_9integer_tERKNS0_11component_tEi(void);

/* Symbol: _ZN7android12ARMAssemblerD2Ev */
/* Demangled: android::ARMAssembler::~ARMAssembler() */
int _ZN7android12ARMAssemblerD2Ev(void);

/* Symbol: _ZTVN7android11AssemblyKeyINS_7needs_tEEE */
/* Demangled: vtable for android::AssemblyKey<android::needs_t> */
extern void* _ZTVN7android11AssemblyKeyINS_7needs_tEEE;

/* Symbol: _ZN7android12GGLAssembler18build_smooth_shadeERKNS0_16fragment_parts_tE */
/* Demangled: android::GGLAssembler::build_smooth_shade(android::GGLAssembler::fragment_parts_t const&) */
int _ZN7android12GGLAssembler18build_smooth_shadeERKNS0_16fragment_parts_tE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPjPKcEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int*, char const*> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPjPKcEEE8do_splatEPvPKvj(void);

/* Symbol: _Z9gglRecipQii */
/* Demangled: gglRecipQ(int, int) */
int _Z9gglRecipQii(void);

/* Symbol: _ZN7android17ARMAssemblerProxy4LDRHEiiij */
/* Demangled: android::ARMAssemblerProxy::LDRH(int, int, int, unsigned int) */
int _ZN7android17ARMAssemblerProxy4LDRHEiiij(void);

/* Symbol: _ZN7android12ARMAssembler1BEiPj */
/* Demangled: android::ARMAssembler::B(int, unsigned int*) */
int _ZN7android12ARMAssembler1BEiPj(void);

/* Symbol: _ZN7android12ARMAssembler2BXEii */
/* Demangled: android::ARMAssembler::BX(int, int) */
int _ZN7android12ARMAssembler2BXEii(void);

/* Symbol: _ZNK7android6VectorINS_12ARMAssembler15branch_target_tEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<android::ARMAssembler::branch_target_t>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_12ARMAssembler15branch_target_tEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN7android17ARMAssemblerProxy14getCodegenArchEv */
/* Demangled: android::ARMAssemblerProxy::getCodegenArch() */
int _ZN7android17ARMAssemblerProxy14getCodegenArchEv(void);

/* Symbol: _ZNK7android17RegisterAllocator12RegisterFile11hasFreeRegsEv */
/* Demangled: android::RegisterAllocator::RegisterFile::hasFreeRegs() const */
int _ZNK7android17RegisterAllocator12RegisterFile11hasFreeRegsEv(void);

/* Symbol: _ZN7android15ggl_set_surfaceEPNS_9context_tEPNS_9surface_tEPK10GGLSurface */
/* Demangled: android::ggl_set_surface(android::context_t*, android::surface_t*, GGLSurface const*) */
int _ZN7android15ggl_set_surfaceEPNS_9context_tEPNS_9surface_tEPK10GGLSurface(void);

/* Symbol: _ZN7android17ARMAssemblerProxy2BLEiPj */
/* Demangled: android::ARMAssemblerProxy::BL(int, unsigned int*) */
int _ZN7android17ARMAssemblerProxy2BLEiPj(void);

/* Symbol: _ZN7android17ARMAssemblerProxy5LDRSHEiiij */
/* Demangled: android::ARMAssemblerProxy::LDRSH(int, int, int, unsigned int) */
int _ZN7android17ARMAssemblerProxy5LDRSHEiiij(void);

/* Symbol: _ZN7android12GGLAssembler6epilogEj */
/* Demangled: android::GGLAssembler::epilog(unsigned int) */
int _ZN7android12GGLAssembler6epilogEj(void);

/* Symbol: _ZNK7android12ARMAssembler4baseEv */
/* Demangled: android::ARMAssembler::base() const */
int _ZNK7android12ARMAssembler4baseEv(void);

/* Symbol: scanline_col32cb16blend_arm */
/* Demangled: scanline_col32cb16blend_arm */
extern void* scanline_col32cb16blend_arm;

/* Symbol: scanline_col32cb16blend_neon */
/* Demangled: scanline_col32cb16blend_neon */
extern void* scanline_col32cb16blend_neon;

/* Symbol: _ZN7android21ARMAssemblerInterface8ADDR_STREiiij */
/* Demangled: android::ARMAssemblerInterface::ADDR_STR(int, int, int, unsigned int) */
int _ZN7android21ARMAssemblerInterface8ADDR_STREiiij(void);

/* Symbol: _ZN7android21ARMAssemblerInterfaceD2Ev */
/* Demangled: android::ARMAssemblerInterface::~ARMAssemblerInterface() */
int _ZN7android21ARMAssemblerInterfaceD2Ev(void);

/* Symbol: _ZN7android17ARMAssemblerProxy3immEj */
/* Demangled: android::ARMAssemblerProxy::imm(unsigned int) */
int _ZN7android17ARMAssemblerProxy3immEj(void);

/* Symbol: _ZN7android12GGLAssembler13init_texturesEPNS0_11tex_coord_tERKNS0_5reg_tES5_ */
/* Demangled: android::GGLAssembler::init_textures(android::GGLAssembler::tex_coord_t*, android::GGLAssembler::reg_t const&, android::GGLAssembler::reg_t const&) */
int _ZN7android12GGLAssembler13init_texturesEPNS0_11tex_coord_tERKNS0_5reg_tES5_(void);

/* Symbol: _ZN7android14ggl_pack_colorEPNS_9context_tEiiiii */
/* Demangled: android::ggl_pack_color(android::context_t*, int, int, int, int, int) */
int _ZN7android14ggl_pack_colorEPNS_9context_tEiiiii(void);

/* Symbol: _ZN7android12ARMAssembler5labelEPKc */
/* Demangled: android::ARMAssembler::label(char const*) */
int _ZN7android12ARMAssembler5labelEPKc(void);

/* Symbol: _ZN7android12ARMAssembler4QADDEiiii */
/* Demangled: android::ARMAssembler::QADD(int, int, int, int) */
int _ZN7android12ARMAssembler4QADDEiiii(void);

/* Symbol: _ZN7android18ggl_uninit_contextEPNS_9context_tE */
/* Demangled: android::ggl_uninit_context(android::context_t*) */
int _ZN7android18ggl_uninit_contextEPNS_9context_tE(void);

/* Symbol: _ZNK7android8Assembly9decStrongEPKv */
/* Demangled: android::Assembly::decStrong(void const*) const */
int _ZNK7android8Assembly9decStrongEPKv(void);

/* Symbol: _ZN7android12ARMAssembler4LDRBEiiij */
/* Demangled: android::ARMAssembler::LDRB(int, int, int, unsigned int) */
int _ZN7android12ARMAssembler4LDRBEiiij(void);

/* Symbol: _ZN7android17ARMAssemblerProxy14reg_scale_postEiij */
/* Demangled: android::ARMAssemblerProxy::reg_scale_post(int, int, unsigned int) */
int _ZN7android17ARMAssemblerProxy14reg_scale_postEiij(void);

/* Symbol: mspace_independent_calloc */
/* Demangled: mspace_independent_calloc */
int mspace_independent_calloc(void);

/* Symbol: _ZN7android17ARMAssemblerProxy4SWPBEiiii */
/* Demangled: android::ARMAssemblerProxy::SWPB(int, int, int, int) */
int _ZN7android17ARMAssemblerProxy4SWPBEiiii(void);

/* Symbol: _ZN7android17ARMAssemblerProxy6epilogEj */
/* Demangled: android::ARMAssemblerProxy::epilog(unsigned int) */
int _ZN7android17ARMAssemblerProxy6epilogEj(void);

/* Symbol: _ZN7android14ggl_init_clearEPNS_9context_tE */
/* Demangled: android::ggl_init_clear(android::context_t*) */
int _ZN7android14ggl_init_clearEPNS_9context_tE(void);

/* Symbol: _ZN7android12ARMAssembler14reg_scale_postEiij */
/* Demangled: android::ARMAssembler::reg_scale_post(int, int, unsigned int) */
int _ZN7android12ARMAssembler14reg_scale_postEiij(void);

/* Symbol: _ZTVN7android6VectorINS_12ARMAssembler15branch_target_tEEE */
/* Demangled: vtable for android::Vector<android::ARMAssembler::branch_target_t> */
extern void* _ZTVN7android6VectorINS_12ARMAssembler15branch_target_tEEE;

/* Symbol: _ZN7android21ARMAssemblerInterface8ADDR_ADDEiiiij */
/* Demangled: android::ARMAssemblerInterface::ADDR_ADD(int, int, int, int, unsigned int) */
int _ZN7android21ARMAssemblerInterface8ADDR_ADDEiiiij(void);

/* Symbol: _ZN7android8AssemblyC2Ej */
/* Demangled: android::Assembly::Assembly(unsigned int) */
int _ZN7android8AssemblyC2Ej(void);

/* Symbol: _ZN7android9CodeCacheC2Ej */
/* Demangled: android::CodeCache::CodeCache(unsigned int) */
int _ZN7android9CodeCacheC2Ej(void);

/* Symbol: _ZN7android12GGLAssembler26build_coverage_applicationERNS0_11component_tERKNS0_16fragment_parts_tERNS_17RegisterAllocator7ScratchE */
/* Demangled: android::GGLAssembler::build_coverage_application(android::GGLAssembler::component_t&, android::GGLAssembler::fragment_parts_t const&, android::RegisterAllocator::Scratch&) */
int _ZN7android12GGLAssembler26build_coverage_applicationERNS0_11component_tERKNS0_16fragment_parts_tERNS_17RegisterAllocator7ScratchE(void);

/* Symbol: _ZN7android15ggl_init_rasterEPNS_9context_tE */
/* Demangled: android::ggl_init_raster(android::context_t*) */
int _ZN7android15ggl_init_rasterEPNS_9context_tE(void);

/* Symbol: _ZN7android12ARMAssembler3MULEiiiii */
/* Demangled: android::ARMAssembler::MUL(int, int, int, int, int) */
int _ZN7android12ARMAssembler3MULEiiiii(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPjPKcEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int*, char const*> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPjPKcEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN7android17ARMAssemblerProxyD0Ev */
/* Demangled: android::ARMAssemblerProxy::~ARMAssemblerProxy() */
int _ZN7android17ARMAssemblerProxyD0Ev(void);

/* Symbol: _ZN7android8AssemblyD2Ev */
/* Demangled: android::Assembly::~Assembly() */
int _ZN7android8AssemblyD2Ev(void);

/* Symbol: _ZN7android9CodeCacheD2Ev */
/* Demangled: android::CodeCache::~CodeCache() */
int _ZN7android9CodeCacheD2Ev(void);

/* Symbol: _ZN7android12GGLAssembler13component_addERNS0_11component_tERKNS0_9integer_tES5_ */
/* Demangled: android::GGLAssembler::component_add(android::GGLAssembler::component_t&, android::GGLAssembler::integer_t const&, android::GGLAssembler::integer_t const&) */
int _ZN7android12GGLAssembler13component_addERNS0_11component_tERKNS0_9integer_tES5_(void);

/* Symbol: _ZNK7android6VectorINS_12ARMAssembler15branch_target_tEE8do_splatEPvPKvj */
/* Demangled: android::Vector<android::ARMAssembler::branch_target_t>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_12ARMAssembler15branch_target_tEE8do_splatEPvPKvj(void);

/* Symbol: _ZN7android17ARMAssemblerProxy4QSUBEiiii */
/* Demangled: android::ARMAssemblerProxy::QSUB(int, int, int, int) */
int _ZN7android17ARMAssemblerProxy4QSUBEiiii(void);

/* Symbol: _ZN7android12GGLAssembler20build_iterated_colorERNS0_11component_tERKNS0_16fragment_parts_tEiRNS_17RegisterAllocator7ScratchE */
/* Demangled: android::GGLAssembler::build_iterated_color(android::GGLAssembler::component_t&, android::GGLAssembler::fragment_parts_t const&, int, android::RegisterAllocator::Scratch&) */
int _ZN7android12GGLAssembler20build_iterated_colorERNS0_11component_tERKNS0_16fragment_parts_tEiRNS_17RegisterAllocator7ScratchE(void);

/* Symbol: _ZN7android12ARMAssembler3immEj */
/* Demangled: android::ARMAssembler::imm(unsigned int) */
int _ZN7android12ARMAssembler3immEj(void);

/* Symbol: mspace_realloc */
/* Demangled: mspace_realloc */
int mspace_realloc(void);

/* Symbol: _ZN7android12GGLAssembler4loadERKNS0_9pointer_tERKNS0_7pixel_tEj */
/* Demangled: android::GGLAssembler::load(android::GGLAssembler::pointer_t const&, android::GGLAssembler::pixel_t const&, unsigned int) */
int _ZN7android12GGLAssembler4loadERKNS0_9pointer_tERKNS0_7pixel_tEj(void);

/* Symbol: _ZN7android17RegisterAllocator12registerFileEv */
/* Demangled: android::RegisterAllocator::registerFile() */
int _ZN7android17RegisterAllocator12registerFileEv(void);

/* Symbol: _ZN7android19ggl_uninit_scanlineEPNS_9context_tE */
/* Demangled: android::ggl_uninit_scanline(android::context_t*) */
int _ZN7android19ggl_uninit_scanlineEPNS_9context_tE(void);

/* Symbol: _ZN7android12GGLAssembler14build_texturesERNS0_16fragment_parts_tERNS_17RegisterAllocator7ScratchE */
/* Demangled: android::GGLAssembler::build_textures(android::GGLAssembler::fragment_parts_t&, android::RegisterAllocator::Scratch&) */
int _ZN7android12GGLAssembler14build_texturesERNS0_16fragment_parts_tERNS_17RegisterAllocator7ScratchE(void);

/* Symbol: _ZN7android12GGLAssembler18decodeLogicOpNeedsERKNS_7needs_tE */
/* Demangled: android::GGLAssembler::decodeLogicOpNeeds(android::needs_t const&) */
int _ZN7android12GGLAssembler18decodeLogicOpNeedsERKNS_7needs_tE(void);

/* Symbol: _ZN7android17ARMAssemblerProxy3LDMEiiiij */
/* Demangled: android::ARMAssemblerProxy::LDM(int, int, int, int, unsigned int) */
int _ZN7android17ARMAssemblerProxy3LDMEiiiij(void);

/* Symbol: _ZN7android15ggl_init_pickerEPNS_9context_tE */
/* Demangled: android::ggl_init_picker(android::context_t*) */
int _ZN7android15ggl_init_pickerEPNS_9context_tE(void);

/* Symbol: _ZN7android17ARMAssemblerProxy3MLAEiiiiii */
/* Demangled: android::ARMAssemblerProxy::MLA(int, int, int, int, int, int) */
int _ZN7android17ARMAssemblerProxy3MLAEiiiiii(void);

/* Symbol: _ZN7android17RegisterAllocatorC1Ei */
/* Demangled: android::RegisterAllocator::RegisterAllocator(int) */
int _ZN7android17RegisterAllocatorC1Ei(void);

/* Symbol: _ZN7android17ggl_init_scanlineEPNS_9context_tE */
/* Demangled: android::ggl_init_scanline(android::context_t*) */
int _ZN7android17ggl_init_scanlineEPNS_9context_tE(void);

/* Symbol: _ZN7android17ARMAssemblerProxy1BEiPKc */
/* Demangled: android::ARMAssemblerProxy::B(int, char const*) */
int _ZN7android17ARMAssemblerProxy1BEiPKc(void);

/* Symbol: destroy_mspace */
/* Demangled: destroy_mspace */
int destroy_mspace(void);

/* Symbol: _ZN7android17RegisterAllocator10reserveRegEi */
/* Demangled: android::RegisterAllocator::reserveReg(int) */
int _ZN7android17RegisterAllocator10reserveRegEi(void);

/* Symbol: _ZN7android12ARMAssembler5QDADDEiiii */
/* Demangled: android::ARMAssembler::QDADD(int, int, int, int) */
int _ZN7android12ARMAssembler5QDADDEiiii(void);

/* Symbol: _ZN7android17ARMAssemblerProxy5SMUALEiiiiii */
/* Demangled: android::ARMAssemblerProxy::SMUAL(int, int, int, int, int, int) */
int _ZN7android17ARMAssemblerProxy5SMUALEiiiiii(void);

/* Symbol: _ZN7android17ARMAssemblerProxy7reg_preEii */
/* Demangled: android::ARMAssemblerProxy::reg_pre(int, int) */
int _ZN7android17ARMAssemblerProxy7reg_preEii(void);

/* Symbol: _ZN7android12ARMAssembler5QDSUBEiiii */
/* Demangled: android::ARMAssembler::QDSUB(int, int, int, int) */
int _ZN7android12ARMAssembler5QDSUBEiiii(void);

/* Symbol: _ZN7android17ARMAssemblerProxy12immed12_postEi */
/* Demangled: android::ARMAssemblerProxy::immed12_post(int) */
int _ZN7android17ARMAssemblerProxy12immed12_postEi(void);

/* Symbol: _ZN7android17ARMAssemblerProxy16isValidImmediateEj */
/* Demangled: android::ARMAssemblerProxy::isValidImmediate(unsigned int) */
int _ZN7android17ARMAssemblerProxy16isValidImmediateEj(void);

/* Symbol: _ZN7android17ARMAssemblerProxy4STRBEiiij */
/* Demangled: android::ARMAssemblerProxy::STRB(int, int, int, unsigned int) */
int _ZN7android17ARMAssemblerProxy4STRBEiiij(void);

/* Symbol: _ZNK7android8Assembly4baseEv */
/* Demangled: android::Assembly::base() const */
int _ZNK7android8Assembly4baseEv(void);

/* Symbol: create_mspace */
/* Demangled: create_mspace */
int create_mspace(void);

/* Symbol: mspace_memalign */
/* Demangled: mspace_memalign */
int mspace_memalign(void);

/* Symbol: _ZN7android12ARMAssembler5SMUALEiiiiii */
/* Demangled: android::ARMAssembler::SMUAL(int, int, int, int, int, int) */
int _ZN7android12ARMAssembler5SMUALEiiiiii(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPKcPjEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<char const*, unsigned int*> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPKcPjEEE10do_destroyEPvj(void);

/* Symbol: _ZN7android17ARMAssemblerProxy14buildImmediateEjRjS1_ */
/* Demangled: android::ARMAssemblerProxy::buildImmediate(unsigned int, unsigned int&, unsigned int&) */
int _ZN7android17ARMAssemblerProxy14buildImmediateEjRjS1_(void);

/* Symbol: _ZN7android17ARMAssemblerProxy9setTargetEPNS_21ARMAssemblerInterfaceE */
/* Demangled: android::ARMAssemblerProxy::setTarget(android::ARMAssemblerInterface*) */
int _ZN7android17ARMAssemblerProxy9setTargetEPNS_21ARMAssemblerInterfaceE(void);

/* Symbol: _ZN7android12GGLAssemblerD0Ev */
/* Demangled: android::GGLAssembler::~GGLAssembler() */
int _ZN7android12GGLAssemblerD0Ev(void);

/* Symbol: _ZN7android12ARMAssembler16isValidImmediateEj */
/* Demangled: android::ARMAssembler::isValidImmediate(unsigned int) */
int _ZN7android12ARMAssembler16isValidImmediateEj(void);

/* Symbol: _ZN7android17ARMAssemblerProxy3PLDEij */
/* Demangled: android::ARMAssemblerProxy::PLD(int, unsigned int) */
int _ZN7android17ARMAssemblerProxy3PLDEij(void);

/* Symbol: _ZN7android17ARMAssemblerProxy5SMULLEiiiiii */
/* Demangled: android::ARMAssemblerProxy::SMULL(int, int, int, int, int, int) */
int _ZN7android17ARMAssemblerProxy5SMULLEiiiiii(void);

/* Symbol: _ZN7android12GGLAssembler14build_blendingERNS0_11component_tERKNS0_7pixel_tEiRNS_17RegisterAllocator7ScratchE */
/* Demangled: android::GGLAssembler::build_blending(android::GGLAssembler::component_t&, android::GGLAssembler::pixel_t const&, int, android::RegisterAllocator::Scratch&) */
int _ZN7android12GGLAssembler14build_blendingERNS0_11component_tERKNS0_7pixel_tEiRNS_17RegisterAllocator7ScratchE(void);

/* Symbol: _ZN7android12ARMAssembler3SWPEiiii */
/* Demangled: android::ARMAssembler::SWP(int, int, int, int) */
int _ZN7android12ARMAssembler3SWPEiiii(void);

/* Symbol: _ZN7android17ARMAssemblerProxy10immed8_preEii */
/* Demangled: android::ARMAssemblerProxy::immed8_pre(int, int) */
int _ZN7android17ARMAssemblerProxy10immed8_preEii(void);

/* Symbol: _ZN7android17ARMAssemblerProxy3STREiiij */
/* Demangled: android::ARMAssemblerProxy::STR(int, int, int, unsigned int) */
int _ZN7android17ARMAssemblerProxy3STREiiij(void);

/* Symbol: _ZN7android17ARMAssemblerProxy8ADDR_ADDEiiiij */
/* Demangled: android::ARMAssemblerProxy::ADDR_ADD(int, int, int, int, unsigned int) */
int _ZN7android17ARMAssemblerProxy8ADDR_ADDEiiiij(void);

/* Symbol: _ZNK7android17RegisterAllocator12RegisterFile13countFreeRegsEv */
/* Demangled: android::RegisterAllocator::RegisterFile::countFreeRegs() const */
int _ZNK7android17RegisterAllocator12RegisterFile13countFreeRegsEv(void);

/* Symbol: _ZN7android12GGLAssembler7filter8ERKNS0_16fragment_parts_tERNS0_7pixel_tERKNS0_14texture_unit_tEiiRNS0_9pointer_tEi */
/* Demangled: android::GGLAssembler::filter8(android::GGLAssembler::fragment_parts_t const&, android::GGLAssembler::pixel_t&, android::GGLAssembler::texture_unit_t const&, int, int, android::GGLAssembler::pointer_t&, int) */
int _ZN7android12GGLAssembler7filter8ERKNS0_16fragment_parts_tERNS0_7pixel_tERKNS0_14texture_unit_tEiiRNS0_9pointer_tEi(void);

/* Symbol: _ZN7android12GGLAssembler8filter16ERKNS0_16fragment_parts_tERNS0_7pixel_tERKNS0_14texture_unit_tEiiRNS0_9pointer_tEi */
/* Demangled: android::GGLAssembler::filter16(android::GGLAssembler::fragment_parts_t const&, android::GGLAssembler::pixel_t&, android::GGLAssembler::texture_unit_t const&, int, int, android::GGLAssembler::pointer_t&, int) */
int _ZN7android12GGLAssembler8filter16ERKNS0_16fragment_parts_tERNS0_7pixel_tERKNS0_14texture_unit_tEiiRNS0_9pointer_tEi(void);

/* Symbol: _ZN7android12ARMAssembler5SMULLEiiiiii */
/* Demangled: android::ARMAssembler::SMULL(int, int, int, int, int, int) */
int _ZN7android12ARMAssembler5SMULLEiiiiii(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPjPKcEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int*, char const*> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPjPKcEEE12do_constructEPvj(void);

/* Symbol: scanline_t32cb16blend_arm */
/* Demangled: scanline_t32cb16blend_arm */
extern void* scanline_t32cb16blend_arm;

/* Symbol: _ZN7android17ARMAssemblerProxy5SMLALEiiiiii */
/* Demangled: android::ARMAssemblerProxy::SMLAL(int, int, int, int, int, int) */
int _ZN7android17ARMAssemblerProxy5SMLALEiiiiii(void);

/* Symbol: _ZN7android17RegisterAllocator5resetEv */
/* Demangled: android::RegisterAllocator::reset() */
int _ZN7android17RegisterAllocator5resetEv(void);

/* Symbol: _ZN7android12GGLAssembler5blendERNS0_11component_tERKS1_RKNS0_7pixel_tEii */
/* Demangled: android::GGLAssembler::blend(android::GGLAssembler::component_t&, android::GGLAssembler::component_t const&, android::GGLAssembler::pixel_t const&, int, int) */
int _ZN7android12GGLAssembler5blendERNS0_11component_tERKS1_RKNS0_7pixel_tEii(void);

/* Symbol: _ZN7android12ARMAssembler10pcForLabelEPKc */
/* Demangled: android::ARMAssembler::pcForLabel(char const*) */
int _ZN7android12ARMAssembler10pcForLabelEPKc(void);

/* Symbol: _ZN7android12ARMAssembler14dataProcessingEiiiiij */
/* Demangled: android::ARMAssembler::dataProcessing(int, int, int, int, int, unsigned int) */
int _ZN7android12ARMAssembler14dataProcessingEiiiiij(void);

/* Symbol: _ZN7android12ARMAssembler4QSUBEiiii */
/* Demangled: android::ARMAssembler::QSUB(int, int, int, int) */
int _ZN7android12ARMAssembler4QSUBEiiii(void);

/* Symbol: _ZN7android17RegisterAllocator12RegisterFileC1Ei */
/* Demangled: android::RegisterAllocator::RegisterFile::RegisterFile(int) */
int _ZN7android17RegisterAllocator12RegisterFileC1Ei(void);

/* Symbol: disasm */
/* Demangled: disasm */
int disasm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_9CodeCache5key_tENS2_13cache_entry_tEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::CodeCache::key_t, android::CodeCache::cache_entry_t> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_9CodeCache5key_tENS2_13cache_entry_tEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: mspace_trim */
/* Demangled: mspace_trim */
int mspace_trim(void);

/* Symbol: _ZN7android10ggl_expandEjii */
/* Demangled: android::ggl_expand(unsigned int, int, int) */
int _ZN7android10ggl_expandEjii(void);

/* Symbol: _ZN7android17ARMAssemblerProxy3SWIEij */
/* Demangled: android::ARMAssemblerProxy::SWI(int, unsigned int) */
int _ZN7android17ARMAssemblerProxy3SWIEij(void);

/* Symbol: _ZN7android12GGLAssembler6expandERNS0_11component_tERKS1_i */
/* Demangled: android::GGLAssembler::expand(android::GGLAssembler::component_t&, android::GGLAssembler::component_t const&, int) */
int _ZN7android12GGLAssembler6expandERNS0_11component_tERKS1_i(void);

/* Symbol: _ZN7android17RegisterAllocator12RegisterFileD1Ev */
/* Demangled: android::RegisterAllocator::RegisterFile::~RegisterFile() */
int _ZN7android17RegisterAllocator12RegisterFileD1Ev(void);

/* Symbol: _ZN7android12ARMAssembler3LDMEiiiij */
/* Demangled: android::ARMAssembler::LDM(int, int, int, int, unsigned int) */
int _ZN7android12ARMAssembler3LDMEiiiij(void);

/* Symbol: _ZN7android12ARMAssembler5SMULWEiiiii */
/* Demangled: android::ARMAssembler::SMULW(int, int, int, int, int) */
int _ZN7android12ARMAssembler5SMULWEiiiii(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPKcPjEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<char const*, unsigned int*> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPKcPjEEE12do_constructEPvj(void);

/* Symbol: _ZN7android6AAEdge4dumpEv */
/* Demangled: android::AAEdge::dump() */
int _ZN7android6AAEdge4dumpEv(void);

/* Symbol: _ZN7android17ARMAssemblerProxy11disassembleEPKc */
/* Demangled: android::ARMAssemblerProxy::disassemble(char const*) */
int _ZN7android17ARMAssemblerProxy11disassembleEPKc(void);

/* Symbol: _ZTVN7android8AssemblyE */
/* Demangled: vtable for android::Assembly */
extern void* _ZTVN7android8AssemblyE;

/* Symbol: mspace_max_footprint */
/* Demangled: mspace_max_footprint */
int mspace_max_footprint(void);

/* Symbol: _ZN7android12GGLAssembler21build_scanline_prologERNS0_16fragment_parts_tERKNS_7needs_tE */
/* Demangled: android::GGLAssembler::build_scanline_prolog(android::GGLAssembler::fragment_parts_t&, android::needs_t const&) */
int _ZN7android12GGLAssembler21build_scanline_prologERNS0_16fragment_parts_tERKNS_7needs_tE(void);

/* Symbol: _ZN7android12GGLAssembler7extractERNS0_9integer_tERKNS0_7pixel_tEi */
/* Demangled: android::GGLAssembler::extract(android::GGLAssembler::integer_t&, android::GGLAssembler::pixel_t const&, int) */
int _ZN7android12GGLAssembler7extractERNS0_9integer_tERKNS0_7pixel_tEi(void);

/* Symbol: _ZN7android12GGLAssembler3addERNS0_11component_tERKS1_RKNS0_7pixel_tEi */
/* Demangled: android::GGLAssembler::add(android::GGLAssembler::component_t&, android::GGLAssembler::component_t const&, android::GGLAssembler::pixel_t const&, int) */
int _ZN7android12GGLAssembler3addERNS0_11component_tERKS1_RKNS0_7pixel_tEi(void);

/* Symbol: _ZN7android12ARMAssembler14getCodegenArchEv */
/* Demangled: android::ARMAssembler::getCodegenArch() */
int _ZN7android12ARMAssembler14getCodegenArchEv(void);

/* Symbol: _ZN7android17ARMAssemblerProxyC2EPNS_21ARMAssemblerInterfaceE */
/* Demangled: android::ARMAssemblerProxy::ARMAssemblerProxy(android::ARMAssemblerInterface*) */
int _ZN7android17ARMAssemblerProxyC2EPNS_21ARMAssemblerInterfaceE(void);

/* Symbol: _ZTVN7android17ARMAssemblerProxyE */
/* Demangled: vtable for android::ARMAssemblerProxy */
extern void* _ZTVN7android17ARMAssemblerProxyE;

/* Symbol: _ZN7android17RegisterAllocator12RegisterFile5resetEv */
/* Demangled: android::RegisterAllocator::RegisterFile::reset() */
int _ZN7android17RegisterAllocator12RegisterFile5resetEv(void);

/* Symbol: _ZN7android12GGLAssembler8wrappingEiiiii */
/* Demangled: android::GGLAssembler::wrapping(int, int, int, int, int) */
int _ZN7android12GGLAssembler8wrappingEiiiii(void);

/* Symbol: _ZN7android12ARMAssembler4LDRHEiiij */
/* Demangled: android::ARMAssembler::LDRH(int, int, int, unsigned int) */
int _ZN7android12ARMAssembler4LDRHEiiij(void);

/* Symbol: _ZN7android12ARMAssemblerD1Ev */
/* Demangled: android::ARMAssembler::~ARMAssembler() */
int _ZN7android12ARMAssemblerD1Ev(void);

/* Symbol: disassemble */
/* Demangled: disassemble */
int disassemble(void);

/* Symbol: _Z19gglRecipQNormalizediPi */
/* Demangled: gglRecipQNormalized(int, int*) */
int _Z19gglRecipQNormalizediPi(void);

/* Symbol: gglInit */
/* Demangled: gglInit */
int gglInit(void);

/* Symbol: _ZN7android17ARMAssemblerProxy11immed12_preEii */
/* Demangled: android::ARMAssemblerProxy::immed12_pre(int, int) */
int _ZN7android17ARMAssemblerProxy11immed12_preEii(void);

/* Symbol: _ZN7android12ARMAssembler1BEiPKc */
/* Demangled: android::ARMAssembler::B(int, char const*) */
int _ZN7android12ARMAssembler1BEiPKc(void);

/* Symbol: _ZN7android12ARMAssembler4STRBEiiij */
/* Demangled: android::ARMAssembler::STRB(int, int, int, unsigned int) */
int _ZN7android12ARMAssembler4STRBEiiij(void);

/* Symbol: _ZN7android12ARMAssembler5resetEv */
/* Demangled: android::ARMAssembler::reset() */
int _ZN7android12ARMAssembler5resetEv(void);

/* Symbol: _ZN7android21ARMAssemblerInterface8ADDR_SUBEiiiij */
/* Demangled: android::ARMAssemblerInterface::ADDR_SUB(int, int, int, int, unsigned int) */
int _ZN7android21ARMAssemblerInterface8ADDR_SUBEiiiij(void);

/* Symbol: _ZNK7android8Assembly9incStrongEPKv */
/* Demangled: android::Assembly::incStrong(void const*) const */
int _ZNK7android8Assembly9incStrongEPKv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPKcPjEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<char const*, unsigned int*> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPKcPjEEE8do_splatEPvPKvj(void);

/* Symbol: _ZN7android17ARMAssemblerProxy3CLZEiii */
/* Demangled: android::ARMAssemblerProxy::CLZ(int, int, int) */
int _ZN7android17ARMAssemblerProxy3CLZEiii(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_9CodeCache5key_tENS2_13cache_entry_tEEEE10do_compareEPKvS8_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::CodeCache::key_t, android::CodeCache::cache_entry_t> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_9CodeCache5key_tENS2_13cache_entry_tEEEE10do_compareEPKvS8_(void);

/* Symbol: _ZNK7android9CodeCache6lookupERKNS_15AssemblyKeyBaseE */
/* Demangled: android::CodeCache::lookup(android::AssemblyKeyBase const&) const */
int _ZNK7android9CodeCache6lookupERKNS_15AssemblyKeyBaseE(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_9CodeCache5key_tENS2_13cache_entry_tEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<android::CodeCache::key_t, android::CodeCache::cache_entry_t> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_9CodeCache5key_tENS2_13cache_entry_tEEEEE;

/* Symbol: _ZN7android12GGLAssemblerC2EPNS_21ARMAssemblerInterfaceE */
/* Demangled: android::GGLAssembler::GGLAssembler(android::ARMAssemblerInterface*) */
int _ZN7android12GGLAssemblerC2EPNS_21ARMAssemblerInterfaceE(void);

/* Symbol: _ZN7android12ARMAssemblerC1ERKNS_9tinyutils2spINS_8AssemblyEEE */
/* Demangled: android::ARMAssembler::ARMAssembler(android::tinyutils::sp<android::Assembly> const&) */
int _ZN7android12ARMAssemblerC1ERKNS_9tinyutils2spINS_8AssemblyEEE(void);

/* Symbol: _ZN7android17ARMAssemblerProxy13reg_scale_preEiiji */
/* Demangled: android::ARMAssemblerProxy::reg_scale_pre(int, int, unsigned int, int) */
int _ZN7android17ARMAssemblerProxy13reg_scale_preEiiji(void);

/* Symbol: _ZN7android12ARMAssembler2BLEiPj */
/* Demangled: android::ARMAssembler::BL(int, unsigned int*) */
int _ZN7android12ARMAssembler2BLEiPj(void);

/* Symbol: _ZN7android21ARMAssemblerInterfaceD1Ev */
/* Demangled: android::ARMAssemblerInterface::~ARMAssemblerInterface() */
int _ZN7android21ARMAssemblerInterfaceD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_9CodeCache5key_tENS2_13cache_entry_tEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::CodeCache::key_t, android::CodeCache::cache_entry_t> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_9CodeCache5key_tENS2_13cache_entry_tEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN7android12GGLAssembler9build_fogERNS0_11component_tEiRNS_17RegisterAllocator7ScratchE */
/* Demangled: android::GGLAssembler::build_fog(android::GGLAssembler::component_t&, int, android::RegisterAllocator::Scratch&) */
int _ZN7android12GGLAssembler9build_fogERNS0_11component_tEiRNS_17RegisterAllocator7ScratchE(void);

/* Symbol: _ZN7android12ARMAssembler13reg_scale_preEiiji */
/* Demangled: android::ARMAssembler::reg_scale_pre(int, int, unsigned int, int) */
int _ZN7android12ARMAssembler13reg_scale_preEiiji(void);

/* Symbol: _ZN7android12ARMAssembler8reg_postEi */
/* Demangled: android::ARMAssembler::reg_post(int) */
int _ZN7android12ARMAssembler8reg_postEi(void);

/* Symbol: _ZN7android8Assembly6resizeEj */
/* Demangled: android::Assembly::resize(unsigned int) */
int _ZN7android8Assembly6resizeEj(void);

/* Symbol: _ZN7android12GGLAssembler24build_incoming_componentERNS0_11component_tEiRKNS0_16fragment_parts_tEiRNS_17RegisterAllocator7ScratchES8_ */
/* Demangled: android::GGLAssembler::build_incoming_component(android::GGLAssembler::component_t&, int, android::GGLAssembler::fragment_parts_t const&, int, android::RegisterAllocator::Scratch&, android::RegisterAllocator::Scratch&) */
int _ZN7android12GGLAssembler24build_incoming_componentERNS0_11component_tEiRKNS0_16fragment_parts_tEiRNS_17RegisterAllocator7ScratchES8_(void);

/* Symbol: _ZN7android12GGLAssembler7extractERNS0_9integer_tEiiii */
/* Demangled: android::GGLAssembler::extract(android::GGLAssembler::integer_t&, int, int, int, int) */
int _ZN7android12GGLAssembler7extractERNS0_9integer_tEiiii(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPKcPjEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<char const*, unsigned int*> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPKcPjEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN7android17ARMAssemblerProxy8ADDR_LDREiiij */
/* Demangled: android::ARMAssemblerProxy::ADDR_LDR(int, int, int, unsigned int) */
int _ZN7android17ARMAssemblerProxy8ADDR_LDREiiij(void);

/* Symbol: _ZN7android12ARMAssembler11disassembleEPKc */
/* Demangled: android::ARMAssembler::disassemble(char const*) */
int _ZN7android12ARMAssembler11disassembleEPKc(void);

/* Symbol: _ZN7android12ARMAssembler4SWPBEiiii */
/* Demangled: android::ARMAssembler::SWPB(int, int, int, int) */
int _ZN7android12ARMAssembler4SWPBEiiii(void);

/* Symbol: _ZN7android12GGLAssembler8scanlineERKNS_7needs_tEPKNS_9context_tE */
/* Demangled: android::GGLAssembler::scanline(android::needs_t const&, android::context_t const*) */
int _ZN7android12GGLAssembler8scanlineERKNS_7needs_tEPKNS_9context_tE(void);

/* Symbol: _ZN7android17RegisterAllocator12RegisterFileC2ERKS1_i */
/* Demangled: android::RegisterAllocator::RegisterFile::RegisterFile(android::RegisterAllocator::RegisterFile const&, int) */
int _ZN7android17RegisterAllocator12RegisterFileC2ERKS1_i(void);

/* Symbol: _ZN7android17ARMAssemblerProxy3STMEiiiij */
/* Demangled: android::ARMAssemblerProxy::STM(int, int, int, int, unsigned int) */
int _ZN7android17ARMAssemblerProxy3STMEiiiij(void);

/* Symbol: _ZN7android12GGLAssembler5decalERNS0_11component_tERKS1_RKNS0_7pixel_tEi */
/* Demangled: android::GGLAssembler::decal(android::GGLAssembler::component_t&, android::GGLAssembler::component_t const&, android::GGLAssembler::pixel_t const&, int) */
int _ZN7android12GGLAssembler5decalERNS0_11component_tERKS1_RKNS0_7pixel_tEi(void);

/* Symbol: _ZN7android12ARMAssembler4UBFXEiiiii */
/* Demangled: android::ARMAssembler::UBFX(int, int, int, int, int) */
int _ZN7android12ARMAssembler4UBFXEiiiii(void);

/* Symbol: gglUninit */
/* Demangled: gglUninit */
int gglUninit(void);

/* Symbol: _ZN7android17ARMAssemblerProxyD2Ev */
/* Demangled: android::ARMAssemblerProxy::~ARMAssemblerProxy() */
int _ZN7android17ARMAssemblerProxyD2Ev(void);

/* Symbol: _ZN7android8AssemblyC1Ej */
/* Demangled: android::Assembly::Assembly(unsigned int) */
int _ZN7android8AssemblyC1Ej(void);

/* Symbol: _ZN7android9CodeCacheC1Ej */
/* Demangled: android::CodeCache::CodeCache(unsigned int) */
int _ZN7android9CodeCacheC1Ej(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_9CodeCache5key_tENS2_13cache_entry_tEEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::CodeCache::key_t, android::CodeCache::cache_entry_t> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_9CodeCache5key_tENS2_13cache_entry_tEEEE12do_constructEPvj(void);

/* Symbol: mspace_free */
/* Demangled: mspace_free */
int mspace_free(void);

/* Symbol: _ZN7android16ggl_init_textureEPNS_9context_tE */
/* Demangled: android::ggl_init_texture(android::context_t*) */
int _ZN7android16ggl_init_textureEPNS_9context_tE(void);

/* Symbol: _ZN7android12ARMAssembler3STREiiij */
/* Demangled: android::ARMAssembler::STR(int, int, int, unsigned int) */
int _ZN7android12ARMAssembler3STREiiij(void);

/* Symbol: _Z8gglSqrtxi */
/* Demangled: gglSqrtx(int) */
int _Z8gglSqrtxi(void);

/* Symbol: _ZN7android9ggl_errorEPNS_9context_tEj */
/* Demangled: android::ggl_error(android::context_t*, unsigned int) */
int _ZN7android9ggl_errorEPNS_9context_tEj(void);

/* Symbol: _ZN7android17ARMAssemblerProxy2BLEiPKc */
/* Demangled: android::ARMAssemblerProxy::BL(int, char const*) */
int _ZN7android17ARMAssemblerProxy2BLEiPKc(void);

/* Symbol: _ZN7android8AssemblyD1Ev */
/* Demangled: android::Assembly::~Assembly() */
int _ZN7android8AssemblyD1Ev(void);

/* Symbol: _ZN7android9CodeCacheD1Ev */
/* Demangled: android::CodeCache::~CodeCache() */
int _ZN7android9CodeCacheD1Ev(void);

/* Symbol: _ZN7android12GGLAssembler18build_blend_factorERNS0_9integer_tEiiRKNS0_7pixel_tES2_S2_RNS_17RegisterAllocator7ScratchE */
/* Demangled: android::GGLAssembler::build_blend_factor(android::GGLAssembler::integer_t&, int, int, android::GGLAssembler::pixel_t const&, android::GGLAssembler::integer_t&, android::GGLAssembler::integer_t&, android::RegisterAllocator::Scratch&) */
int _ZN7android12GGLAssembler18build_blend_factorERNS0_9integer_tEiiRKNS0_7pixel_tES2_S2_RNS_17RegisterAllocator7ScratchE(void);

/* Symbol: _ZN7android12ARMAssembler5SMLALEiiiiii */
/* Demangled: android::ARMAssembler::SMLAL(int, int, int, int, int, int) */
int _ZN7android12ARMAssembler5SMLALEiiiiii(void);

/* Symbol: _ZN7android17ARMAssemblerProxy4STRHEiiij */
/* Demangled: android::ARMAssemblerProxy::STRH(int, int, int, unsigned int) */
int _ZN7android17ARMAssemblerProxy4STRHEiiij(void);

/* Symbol: _ZN7android12ARMAssembler10immed8_preEii */
/* Demangled: android::ARMAssembler::immed8_pre(int, int) */
int _ZN7android12ARMAssembler10immed8_preEii(void);

/* Symbol: _ZN7android21ARMAssemblerInterface8ADDR_LDREiiij */
/* Demangled: android::ARMAssemblerInterface::ADDR_LDR(int, int, int, unsigned int) */
int _ZN7android21ARMAssemblerInterface8ADDR_LDREiiij(void);

/* Symbol: _ZN7android17ARMAssemblerProxy5QDADDEiiii */
/* Demangled: android::ARMAssemblerProxy::QDADD(int, int, int, int) */
int _ZN7android17ARMAssemblerProxy5QDADDEiiii(void);

/* Symbol: _ZN7android23mspace_realloc_in_placeEPvS0_j */
/* Demangled: android::mspace_realloc_in_place(void*, void*, unsigned int) */
int _ZN7android23mspace_realloc_in_placeEPvS0_j(void);

/* Symbol: _ZN7android12ARMAssembler6epilogEj */
/* Demangled: android::ARMAssembler::epilog(unsigned int) */
int _ZN7android12ARMAssembler6epilogEj(void);

/* Symbol: _ZN7android17ARMAssemblerProxy11immed8_postEi */
/* Demangled: android::ARMAssemblerProxy::immed8_post(int) */
int _ZN7android17ARMAssemblerProxy11immed8_postEi(void);

/* Symbol: _ZN7android17ARMAssemblerProxy3LDREiiij */
/* Demangled: android::ARMAssemblerProxy::LDR(int, int, int, unsigned int) */
int _ZN7android17ARMAssemblerProxy3LDREiiij(void);

/* Symbol: _ZN7android17ARMAssemblerProxy5QDSUBEiiii */
/* Demangled: android::ARMAssemblerProxy::QDSUB(int, int, int, int) */
int _ZN7android17ARMAssemblerProxy5QDSUBEiiii(void);

/* Symbol: _ZN7android17ARMAssemblerProxy8ADDR_SUBEiiiij */
/* Demangled: android::ARMAssemblerProxy::ADDR_SUB(int, int, int, int, unsigned int) */
int _ZN7android17ARMAssemblerProxy8ADDR_SUBEiiiij(void);

/* Symbol: _ZN7android26mspace_set_footprint_limitEPvj */
/* Demangled: android::mspace_set_footprint_limit(void*, unsigned int) */
int _ZN7android26mspace_set_footprint_limitEPvj(void);

/* Symbol: _ZN7android12GGLAssembler11base_offsetERKNS0_9pointer_tES3_RKNS0_5reg_tE */
/* Demangled: android::GGLAssembler::base_offset(android::GGLAssembler::pointer_t const&, android::GGLAssembler::pointer_t const&, android::GGLAssembler::reg_t const&) */
int _ZN7android12GGLAssembler11base_offsetERKNS0_9pointer_tES3_RKNS0_5reg_tE(void);

/* Symbol: _ZN7android12ARMAssembler5LDRSBEiiij */
/* Demangled: android::ARMAssembler::LDRSB(int, int, int, unsigned int) */
int _ZN7android12ARMAssembler5LDRSBEiiij(void);

/* Symbol: _ZN7android12GGLAssembler9downshiftERNS0_7pixel_tEiNS0_11component_tERKNS0_5reg_tE */
/* Demangled: android::GGLAssembler::downshift(android::GGLAssembler::pixel_t&, int, android::GGLAssembler::component_t, android::GGLAssembler::reg_t const&) */
int _ZN7android12GGLAssembler9downshiftERNS0_7pixel_tEiNS0_11component_tERKNS0_5reg_tE(void);

/* Symbol: _ZTVN7android12GGLAssemblerE */
/* Demangled: vtable for android::GGLAssembler */
extern void* _ZTVN7android12GGLAssemblerE;

/* Symbol: _ZN7android17ARMAssemblerProxy5SMULWEiiiii */
/* Demangled: android::ARMAssemblerProxy::SMULW(int, int, int, int, int) */
int _ZN7android17ARMAssemblerProxy5SMULWEiiiii(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIPKcPjEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<char const*, unsigned int*> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIPKcPjEEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_9CodeCache5key_tENS2_13cache_entry_tEEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::CodeCache::key_t, android::CodeCache::cache_entry_t> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_9CodeCache5key_tENS2_13cache_entry_tEEEE10do_destroyEPvj(void);

/* Symbol: _ZN7android17RegisterAllocator12RegisterFile6obtainEv */
/* Demangled: android::RegisterAllocator::RegisterFile::obtain() */
int _ZN7android17RegisterAllocator12RegisterFile6obtainEv(void);

/* Symbol: _ZN7android12GGLAssemblerD2Ev */
/* Demangled: android::GGLAssembler::~GGLAssembler() */
int _ZN7android12GGLAssemblerD2Ev(void);

/* Symbol: _ZNK7android6VectorINS_12ARMAssembler15branch_target_tEE12do_constructEPvj */
/* Demangled: android::Vector<android::ARMAssembler::branch_target_t>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorINS_12ARMAssembler15branch_target_tEE12do_constructEPvj(void);

/* Symbol: mspace_calloc */
/* Demangled: mspace_calloc */
int mspace_calloc(void);

/* Symbol: _ZN7android12ARMAssembler3STMEiiiij */
/* Demangled: android::ARMAssembler::STM(int, int, int, int, unsigned int) */
int _ZN7android12ARMAssembler3STMEiiiij(void);

/* Symbol: _ZN7android12ARMAssembler7reg_regEiii */
/* Demangled: android::ARMAssembler::reg_reg(int, int, int) */
int _ZN7android12ARMAssembler7reg_regEiii(void);

/* Symbol: _ZN7android17ggl_pick_scanlineEPNS_9context_tE */
/* Demangled: android::ggl_pick_scanline(android::context_t*) */
int _ZN7android17ggl_pick_scanlineEPNS_9context_tE(void);

/* Symbol: _ZN7android19horz_clamp_iterator4initEPKNS_9context_tEi */
/* Demangled: android::horz_clamp_iterator::init(android::context_t const*, int) */
int _ZN7android19horz_clamp_iterator4initEPKNS_9context_tEi(void);

/* Symbol: _ZN7android17ARMAssemblerProxyC2Ev */
/* Demangled: android::ARMAssemblerProxy::ARMAssemblerProxy() */
int _ZN7android17ARMAssemblerProxyC2Ev(void);

/* Symbol: _ZN7android9CodeCache5cacheERKNS_15AssemblyKeyBaseERKNS_9tinyutils2spINS_8AssemblyEEE */
/* Demangled: android::CodeCache::cache(android::AssemblyKeyBase const&, android::tinyutils::sp<android::Assembly> const&) */
int _ZN7android9CodeCache5cacheERKNS_15AssemblyKeyBaseERKNS_9tinyutils2spINS_8AssemblyEEE(void);

/* Symbol: _ZN7android12ARMAssembler3PLDEij */
/* Demangled: android::ARMAssembler::PLD(int, unsigned int) */
int _ZN7android12ARMAssembler3PLDEij(void);

/* Symbol: _ZNK7android12ARMAssembler2pcEv */
/* Demangled: android::ARMAssembler::pc() const */
int _ZNK7android12ARMAssembler2pcEv(void);

/* Symbol: _ZN7android17RegisterAllocator9obtainRegEv */
/* Demangled: android::RegisterAllocator::obtainReg() */
int _ZN7android17RegisterAllocator9obtainRegEv(void);

/* Symbol: _ZN7android17ARMAssemblerProxy7reg_regEiii */
/* Demangled: android::ARMAssemblerProxy::reg_reg(int, int, int) */
int _ZN7android17ARMAssemblerProxy7reg_regEiii(void);

/* Symbol: mspace_independent_comalloc */
/* Demangled: mspace_independent_comalloc */
int mspace_independent_comalloc(void);

/* Symbol: _ZN7android12GGLAssembler13component_satERKNS0_11component_tE */
/* Demangled: android::GGLAssembler::component_sat(android::GGLAssembler::component_t const&) */
int _ZN7android12GGLAssembler13component_satERKNS0_11component_tE(void);

/* Symbol: _ZN7android12ARMAssembler4STRHEiiij */
/* Demangled: android::ARMAssembler::STRH(int, int, int, unsigned int) */
int _ZN7android12ARMAssembler4STRHEiiij(void);

/* Symbol: _ZNK7android8Assembly4sizeEv */
/* Demangled: android::Assembly::size() const */
int _ZNK7android8Assembly4sizeEv(void);

/* Symbol: _ZN7android12GGLAssembler8filter24ERKNS0_16fragment_parts_tERNS0_7pixel_tERKNS0_14texture_unit_tEiiRNS0_9pointer_tEi */
/* Demangled: android::GGLAssembler::filter24(android::GGLAssembler::fragment_parts_t const&, android::GGLAssembler::pixel_t&, android::GGLAssembler::texture_unit_t const&, int, int, android::GGLAssembler::pointer_t&, int) */
int _ZN7android12GGLAssembler8filter24ERKNS0_16fragment_parts_tERNS0_7pixel_tERKNS0_14texture_unit_tEiiRNS0_9pointer_tEi(void);

/* Symbol: _ZN7android11ggl_pick_cbEPNS_9context_tE */
/* Demangled: android::ggl_pick_cb(android::context_t*) */
int _ZN7android11ggl_pick_cbEPNS_9context_tE(void);

/* Symbol: _ZNK7android17RegisterAllocator12RegisterFileeqERKS1_ */
/* Demangled: android::RegisterAllocator::RegisterFile::operator==(android::RegisterAllocator::RegisterFile const&) const */
int _ZNK7android17RegisterAllocator12RegisterFileeqERKS1_(void);

/* Symbol: _ZN7android12GGLAssembler21build_blendFOneMinusFERNS0_11component_tERKNS0_9integer_tES5_S5_ */
/* Demangled: android::GGLAssembler::build_blendFOneMinusF(android::GGLAssembler::component_t&, android::GGLAssembler::integer_t const&, android::GGLAssembler::integer_t const&, android::GGLAssembler::integer_t const&) */
int _ZN7android12GGLAssembler21build_blendFOneMinusFERNS0_11component_tERKNS0_9integer_tES5_S5_(void);

/* Symbol: _ZN7android16ggl_pick_textureEPNS_9context_tE */
/* Demangled: android::ggl_pick_texture(android::context_t*) */
int _ZN7android16ggl_pick_textureEPNS_9context_tE(void);

/* Symbol: _ZTVN7android12ARMAssemblerE */
/* Demangled: vtable for android::ARMAssembler */
extern void* _ZTVN7android12ARMAssemblerE;

/* Symbol: _Z13gglSqrtRecipxi */
/* Demangled: gglSqrtRecipx(int) */
int _Z13gglSqrtRecipxi(void);

/* Symbol: _ZN7android12GGLAssembler15build_componentERNS0_7pixel_tERKNS0_16fragment_parts_tEiRNS_17RegisterAllocator7ScratchE */
/* Demangled: android::GGLAssembler::build_component(android::GGLAssembler::pixel_t&, android::GGLAssembler::fragment_parts_t const&, int, android::RegisterAllocator::Scratch&) */
int _ZN7android12GGLAssembler15build_componentERNS0_7pixel_tERKNS0_16fragment_parts_tEiRNS_17RegisterAllocator7ScratchE(void);

/* Symbol: _ZN7android12GGLAssembler16build_alpha_testERNS0_11component_tERKNS0_16fragment_parts_tE */
/* Demangled: android::GGLAssembler::build_alpha_test(android::GGLAssembler::component_t&, android::GGLAssembler::fragment_parts_t const&) */
int _ZN7android12GGLAssembler16build_alpha_testERNS0_11component_tERKNS0_16fragment_parts_tE(void);

/* Symbol: _ZN7android12GGLAssembler5storeERKNS0_9pointer_tERKNS0_7pixel_tEj */
/* Demangled: android::GGLAssembler::store(android::GGLAssembler::pointer_t const&, android::GGLAssembler::pixel_t const&, unsigned int) */
int _ZN7android12GGLAssembler5storeERKNS0_9pointer_tERKNS0_7pixel_tEj(void);

/* Symbol: _ZN7android12ARMAssembler3SWIEij */
/* Demangled: android::ARMAssembler::SWI(int, unsigned int) */
int _ZN7android12ARMAssembler3SWIEij(void);

/* Symbol: _ZN7android12ARMAssembler7reg_immEiij */
/* Demangled: android::ARMAssembler::reg_imm(int, int, unsigned int) */
int _ZN7android12ARMAssembler7reg_immEiij(void);

/* Symbol: _ZN7android16ggl_init_contextEPNS_9context_tE */
/* Demangled: android::ggl_init_context(android::context_t*) */
int _ZN7android16ggl_init_contextEPNS_9context_tE(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBPIXELFLINGER_H */

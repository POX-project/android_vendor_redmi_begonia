/*
 * Reverse-Engineered Source for: libpixelflinger.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libpixelflinger"

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
#include "libpixelflinger.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::ARMAssemblerProxy::dataProcessing(int, int, int, int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy14dataProcessingEiiiiij(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy14dataProcessingEiiiiij() called");
    return 0;
}

/* Demangled: mspace_malloc */
extern "C" __attribute__((visibility("default"))) int mspace_malloc(void) {
    ALOGD("mspace_malloc() called");
    return 0;
}

/* Demangled: android::GGLAssembler::blending_codes(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler14blending_codesEii(void) {
    ALOGD("_ZN7android12GGLAssembler14blending_codesEii() called");
    return 0;
}

/* Demangled: android::GGLAssembler::init_iterated_color(android::GGLAssembler::fragment_parts_t&, android::GGLAssembler::reg_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler19init_iterated_colorERNS0_16fragment_parts_tERKNS0_5reg_tE(void) {
    ALOGD("_ZN7android12GGLAssembler19init_iterated_colorERNS0_16fragment_parts_tERKNS0_5reg_tE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int*, char const*> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIPjPKcEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIPjPKcEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::mspace_footprint_limit(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android22mspace_footprint_limitEPv(void) {
    ALOGD("_ZN7android22mspace_footprint_limitEPv() called");
    return 0;
}

/* Demangled: android::ARMAssembler::SMUL(int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler4SMULEiiiii(void) {
    ALOGD("_ZN7android12ARMAssembler4SMULEiiiii() called");
    return 0;
}

/* Demangled: android::ARMAssembler::~ARMAssembler() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssemblerD0Ev(void) {
    ALOGD("_ZN7android12ARMAssemblerD0Ev() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::reg_post(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy8reg_postEi(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy8reg_postEi() called");
    return 0;
}

/* Demangled: android::ggl_state_changed(android::context_t*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ggl_state_changedEPNS_9context_tEi(void) {
    ALOGD("_ZN7android17ggl_state_changedEPNS_9context_tEi() called");
    return 0;
}

/* Demangled: android::ARMAssembler::SMLA(int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler4SMLAEiiiiii(void) {
    ALOGD("_ZN7android12ARMAssembler4SMLAEiiiiii() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int*, char const*> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIPjPKcEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIPjPKcEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::ggl_pick(android::context_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8ggl_pickEPNS_9context_tE(void) {
    ALOGD("_ZN7android8ggl_pickEPNS_9context_tE() called");
    return 0;
}

/* Demangled: android::ARMAssembler::immed12_post(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler12immed12_postEi(void) {
    ALOGD("_ZN7android12ARMAssembler12immed12_postEi() called");
    return 0;
}

/* Demangled: android::GGLAssembler::build_iterate_f(android::GGLAssembler::fragment_parts_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler15build_iterate_fERKNS0_16fragment_parts_tE(void) {
    ALOGD("_ZN7android12GGLAssembler15build_iterate_fERKNS0_16fragment_parts_tE() called");
    return 0;
}

/* Demangled: android::GGLAssembler::prolog() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler6prologEv(void) {
    ALOGD("_ZN7android12GGLAssembler6prologEv() called");
    return 0;
}

/* Demangled: android::RegisterAllocator::RegisterFile::reserve(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17RegisterAllocator12RegisterFile7reserveEi(void) {
    ALOGD("_ZN7android17RegisterAllocator12RegisterFile7reserveEi() called");
    return 0;
}

/* Demangled: android::GGLAssembler::modulate(android::GGLAssembler::component_t&, android::GGLAssembler::component_t const&, android::GGLAssembler::pixel_t const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler8modulateERNS0_11component_tERKS1_RKNS0_7pixel_tEi(void) {
    ALOGD("_ZN7android12GGLAssembler8modulateERNS0_11component_tERKS1_RKNS0_7pixel_tEi() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::SMLAW(int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy5SMLAWEiiiiii(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy5SMLAWEiiiiii() called");
    return 0;
}

/* Demangled: android::ARMAssembler::immed8_post(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler11immed8_postEi(void) {
    ALOGD("_ZN7android12ARMAssembler11immed8_postEi() called");
    return 0;
}

/* Demangled: android::ARMAssemblerInterface::~ARMAssemblerInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN7android21ARMAssemblerInterfaceD0Ev(void) {
    ALOGD("_ZN7android21ARMAssemblerInterfaceD0Ev() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::UBFX(int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy4UBFXEiiiii(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy4UBFXEiiiii() called");
    return 0;
}

/* Demangled: android::GGLAssembler::GGLAssembler(android::ARMAssemblerInterface*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssemblerC1EPNS_21ARMAssemblerInterfaceE(void) {
    ALOGD("_ZN7android12GGLAssemblerC1EPNS_21ARMAssemblerInterfaceE() called");
    return 0;
}

/* Demangled: android::GGLAssembler::mul_factor(android::GGLAssembler::component_t&, android::GGLAssembler::integer_t const&, android::GGLAssembler::integer_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler10mul_factorERNS0_11component_tERKNS0_9integer_tES5_(void) {
    ALOGD("_ZN7android12GGLAssembler10mul_factorERNS0_11component_tERKNS0_9integer_tES5_() called");
    return 0;
}

/* Demangled: android::GGLAssembler::mul_factor_add(android::GGLAssembler::component_t&, android::GGLAssembler::integer_t const&, android::GGLAssembler::integer_t const&, android::GGLAssembler::component_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler14mul_factor_addERNS0_11component_tERKNS0_9integer_tES5_RKS1_(void) {
    ALOGD("_ZN7android12GGLAssembler14mul_factor_addERNS0_11component_tERKNS0_9integer_tES5_RKS1_() called");
    return 0;
}

/* Demangled: android::ARMAssembler::SMLAW(int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler5SMLAWEiiiiii(void) {
    ALOGD("_ZN7android12ARMAssembler5SMLAWEiiiiii() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::generate(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy8generateEPKc(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy8generateEPKc() called");
    return 0;
}

/* Demangled: android::GGLAssembler::decodeTMUNeeds(android::needs_t const&, android::context_t const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler14decodeTMUNeedsERKNS_7needs_tEPKNS_9context_tE(void) {
    ALOGD("_ZN7android12GGLAssembler14decodeTMUNeedsERKNS_7needs_tEPKNS_9context_tE() called");
    return 0;
}

/* Demangled: android::GGLAssembler::extract(android::GGLAssembler::component_t&, android::GGLAssembler::pixel_t const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler7extractERNS0_11component_tERKNS0_7pixel_tEi(void) {
    ALOGD("_ZN7android12GGLAssembler7extractERNS0_11component_tERKNS0_7pixel_tEi() called");
    return 0;
}

/* Demangled: android::ARMAssembler::LDRSH(int, int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler5LDRSHEiiij(void) {
    ALOGD("_ZN7android12ARMAssembler5LDRSHEiiij() called");
    return 0;
}

/* Demangled: android::ARMAssembler::generate(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler8generateEPKc(void) {
    ALOGD("_ZN7android12ARMAssembler8generateEPKc() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::prolog() */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy6prologEv(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy6prologEv() called");
    return 0;
}

/* Demangled: android::GGLAssembler::build_iterate_texture_coordinates(android::GGLAssembler::fragment_parts_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler33build_iterate_texture_coordinatesERKNS0_16fragment_parts_tE(void) {
    ALOGD("_ZN7android12GGLAssembler33build_iterate_texture_coordinatesERKNS0_16fragment_parts_tE() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy5resetEv(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy5resetEv() called");
    return 0;
}

/* Demangled: android::GGLAssembler::scanline_core(android::needs_t const&, android::context_t const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler13scanline_coreERKNS_7needs_tEPKNS_9context_tE(void) {
    ALOGD("_ZN7android12GGLAssembler13scanline_coreERKNS_7needs_tEPKNS_9context_tE() called");
    return 0;
}

/* Demangled: android::GGLAssembler::build_depth_test(android::GGLAssembler::fragment_parts_t const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler16build_depth_testERKNS0_16fragment_parts_tEj(void) {
    ALOGD("_ZN7android12GGLAssembler16build_depth_testERKNS0_16fragment_parts_tEj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<char const*, unsigned int*> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIPKcPjEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIPKcPjEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::pcForLabel(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy10pcForLabelEPKc(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy10pcForLabelEPKc() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::LDRSB(int, int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy5LDRSBEiiij(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy5LDRSBEiiij() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::~ARMAssemblerProxy() */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxyD1Ev(void) {
    ALOGD("_ZN7android17ARMAssemblerProxyD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::CodeCache::key_t, android::CodeCache::cache_entry_t> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_9CodeCache5key_tENS2_13cache_entry_tEEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_9CodeCache5key_tENS2_13cache_entry_tEEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: mspace_mallopt */
extern "C" __attribute__((visibility("default"))) int mspace_mallopt(void) {
    ALOGD("mspace_mallopt() called");
    return 0;
}

/* Demangled: android::GGLAssembler::filter32(android::GGLAssembler::fragment_parts_t const&, android::GGLAssembler::pixel_t&, android::GGLAssembler::texture_unit_t const&, int, int, android::GGLAssembler::pointer_t&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler8filter32ERKNS0_16fragment_parts_tERNS0_7pixel_tERKNS0_14texture_unit_tEiiRNS0_9pointer_tEi(void) {
    ALOGD("_ZN7android12GGLAssembler8filter32ERKNS0_16fragment_parts_tERNS0_7pixel_tERKNS0_14texture_unit_tEiiRNS0_9pointer_tEi() called");
    return 0;
}

/* Demangled: android::Assembly::~Assembly() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8AssemblyD0Ev(void) {
    ALOGD("_ZN7android8AssemblyD0Ev() called");
    return 0;
}

/* Demangled: android::GGLAssembler::build_logic_op(android::GGLAssembler::pixel_t&, android::RegisterAllocator::Scratch&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler14build_logic_opERNS0_7pixel_tERNS_17RegisterAllocator7ScratchE(void) {
    ALOGD("_ZN7android12GGLAssembler14build_logic_opERNS0_7pixel_tERNS_17RegisterAllocator7ScratchE() called");
    return 0;
}

/* Demangled: android::Vector<android::ARMAssembler::branch_target_t>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_12ARMAssembler15branch_target_tEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_12ARMAssembler15branch_target_tEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::UMUAL(int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy5UMUALEiiiiii(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy5UMUALEiiiiii() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::reg_rrx(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy7reg_rrxEi(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy7reg_rrxEi() called");
    return 0;
}

/* Demangled: android::GGLAssembler::build_masking(android::GGLAssembler::pixel_t&, android::RegisterAllocator::Scratch&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler13build_maskingERNS0_7pixel_tERNS_17RegisterAllocator7ScratchE(void) {
    ALOGD("_ZN7android12GGLAssembler13build_maskingERNS0_7pixel_tERNS_17RegisterAllocator7ScratchE() called");
    return 0;
}

/* Demangled: android::RegisterAllocator::recycleReg(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17RegisterAllocator10recycleRegEi(void) {
    ALOGD("_ZN7android17RegisterAllocator10recycleRegEi() called");
    return 0;
}

/* Demangled: android::RegisterAllocator::RegisterFile::reserveSeveral(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17RegisterAllocator12RegisterFile14reserveSeveralEj(void) {
    ALOGD("_ZN7android17RegisterAllocator12RegisterFile14reserveSeveralEj() called");
    return 0;
}

/* Demangled: android::ARMAssembler::UXTB16(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler6UXTB16Eiiii(void) {
    ALOGD("_ZN7android12ARMAssembler6UXTB16Eiiii() called");
    return 0;
}

/* Demangled: android::ggl_init_trap(android::context_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13ggl_init_trapEPNS_9context_tE(void) {
    ALOGD("_ZN7android13ggl_init_trapEPNS_9context_tE() called");
    return 0;
}

/* Demangled: mspace_malloc_stats */
extern "C" __attribute__((visibility("default"))) int mspace_malloc_stats(void) {
    ALOGD("mspace_malloc_stats() called");
    return 0;
}

/* Demangled: android::RegisterAllocator::RegisterFile::recycleSeveral(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17RegisterAllocator12RegisterFile14recycleSeveralEj(void) {
    ALOGD("_ZN7android17RegisterAllocator12RegisterFile14recycleSeveralEj() called");
    return 0;
}

/* Demangled: android::ARMAssembler::immed12_pre(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler11immed12_preEii(void) {
    ALOGD("_ZN7android12ARMAssembler11immed12_preEii() called");
    return 0;
}

/* Demangled: android::ARMAssembler::UMUAL(int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler5UMUALEiiiiii(void) {
    ALOGD("_ZN7android12ARMAssembler5UMUALEiiiiii() called");
    return 0;
}

/* Exported Object: vtable for android::ScanlineAssembly */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android16ScanlineAssemblyE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<char const*, unsigned int*> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIPKcPjEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIPKcPjEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::UMULL(int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy5UMULLEiiiiii(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy5UMULLEiiiiii() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::UXTB16(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy6UXTB16Eiiii(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy6UXTB16Eiiii() called");
    return 0;
}

/* Demangled: android::RegisterAllocator::RegisterAllocator(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17RegisterAllocatorC2Ei(void) {
    ALOGD("_ZN7android17RegisterAllocatorC2Ei() called");
    return 0;
}

/* Demangled: android::GGLAssembler::isAlphaSourceNeeded() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12GGLAssembler19isAlphaSourceNeededEv(void) {
    ALOGD("_ZNK7android12GGLAssembler19isAlphaSourceNeededEv() called");
    return 0;
}

/* Demangled: android::ARMAssembler::buildImmediate(unsigned int, unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler14buildImmediateEjRjS1_(void) {
    ALOGD("_ZN7android12ARMAssembler14buildImmediateEjRjS1_() called");
    return 0;
}

/* Demangled: android::ARMAssembler::BL(int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler2BLEiPKc(void) {
    ALOGD("_ZN7android12ARMAssembler2BLEiPKc() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::SWP(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy3SWPEiiii(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy3SWPEiiii() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::reg_imm(int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy7reg_immEiij(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy7reg_immEiij() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::CodeCache::key_t, android::CodeCache::cache_entry_t> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_9CodeCache5key_tENS2_13cache_entry_tEEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_9CodeCache5key_tENS2_13cache_entry_tEEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: android::RegisterAllocator::RegisterFile::RegisterFile(android::RegisterAllocator::RegisterFile const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17RegisterAllocator12RegisterFileC1ERKS1_i(void) {
    ALOGD("_ZN7android17RegisterAllocator12RegisterFileC1ERKS1_i() called");
    return 0;
}

/* Demangled: android::ARMAssembler::UMULL(int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler5UMULLEiiiiii(void) {
    ALOGD("_ZN7android12ARMAssembler5UMULLEiiiiii() called");
    return 0;
}

/* Demangled: gglMulDivi(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z10gglMulDiviiii(void) {
    ALOGD("_Z10gglMulDiviiii() called");
    return 0;
}

/* Demangled: android::GGLAssembler::build_and_immediate(int, int, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler19build_and_immediateEiiji(void) {
    ALOGD("_ZN7android12GGLAssembler19build_and_immediateEiiji() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::ARMAssemblerProxy(android::ARMAssemblerInterface*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxyC1EPNS_21ARMAssemblerInterfaceE(void) {
    ALOGD("_ZN7android17ARMAssemblerProxyC1EPNS_21ARMAssemblerInterfaceE() called");
    return 0;
}

/* Demangled: mspace_footprint */
extern "C" __attribute__((visibility("default"))) int mspace_footprint(void) {
    ALOGD("mspace_footprint() called");
    return 0;
}

/* Demangled: android::GGLAssembler::build_blendOneMinusFF(android::GGLAssembler::component_t&, android::GGLAssembler::integer_t const&, android::GGLAssembler::integer_t const&, android::GGLAssembler::integer_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler21build_blendOneMinusFFERNS0_11component_tERKNS0_9integer_tES5_S5_(void) {
    ALOGD("_ZN7android12GGLAssembler21build_blendOneMinusFFERNS0_11component_tERKNS0_9integer_tES5_S5_() called");
    return 0;
}

/* Demangled: android::ARMAssembler::LDR(int, int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler3LDREiiij(void) {
    ALOGD("_ZN7android12ARMAssembler3LDREiiij() called");
    return 0;
}

/* Demangled: android::ARMAssembler::comment(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler7commentEPKc(void) {
    ALOGD("_ZN7android12ARMAssembler7commentEPKc() called");
    return 0;
}

/* Demangled: mspace_usable_size */
extern "C" __attribute__((visibility("default"))) int mspace_usable_size(void) {
    ALOGD("mspace_usable_size() called");
    return 0;
}

/* Demangled: android::GGLAssembler::~GGLAssembler() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssemblerD1Ev(void) {
    ALOGD("_ZN7android12GGLAssemblerD1Ev() called");
    return 0;
}

/* Demangled: android::ARMAssembler::MLA(int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler3MLAEiiiiii(void) {
    ALOGD("_ZN7android12ARMAssembler3MLAEiiiiii() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int*, char const*> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIPjPKcEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIPjPKcEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::SMLA(int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy4SMLAEiiiiii(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy4SMLAEiiiiii() called");
    return 0;
}

/* Demangled: android::RegisterAllocator::RegisterFile::recycle(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17RegisterAllocator12RegisterFile7recycleEi(void) {
    ALOGD("_ZN7android17RegisterAllocator12RegisterFile7recycleEi() called");
    return 0;
}

/* Demangled: gglDivQ(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z7gglDivQiii(void) {
    ALOGD("_Z7gglDivQiii() called");
    return 0;
}

/* Exported Object: vtable for android::ARMAssemblerInterface */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android21ARMAssemblerInterfaceE = NULL;

/* Demangled: android::ARMAssemblerProxy::comment(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy7commentEPKc(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy7commentEPKc() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::ARMAssemblerProxy() */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxyC1Ev(void) {
    ALOGD("_ZN7android17ARMAssemblerProxyC1Ev() called");
    return 0;
}

/* Demangled: mspace_track_large_chunks */
extern "C" __attribute__((visibility("default"))) int mspace_track_large_chunks(void) {
    ALOGD("mspace_track_large_chunks() called");
    return 0;
}

/* Demangled: android::ARMAssembler::reg_pre(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler7reg_preEii(void) {
    ALOGD("_ZN7android12ARMAssembler7reg_preEii() called");
    return 0;
}

/* Demangled: android::Vector<android::ARMAssembler::branch_target_t>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_12ARMAssembler15branch_target_tEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_12ARMAssembler15branch_target_tEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: gglPowx(int, int) */
extern "C" __attribute__((visibility("default"))) int _Z7gglPowxii(void) {
    ALOGD("_Z7gglPowxii() called");
    return 0;
}

/* Demangled: android::ARMAssemblerInterface::__immed12_pre(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android21ARMAssemblerInterface13__immed12_preEii(void) {
    ALOGD("_ZN7android21ARMAssemblerInterface13__immed12_preEii() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::label(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy5labelEPKc(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy5labelEPKc() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::B(int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy1BEiPj(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy1BEiPj() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::BX(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy2BXEii(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy2BXEii() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::QADD(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy4QADDEiiii(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy4QADDEiiii() called");
    return 0;
}

/* Demangled: android::mspace_bulk_free(void*, void**, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16mspace_bulk_freeEPvPS0_j(void) {
    ALOGD("_ZN7android16mspace_bulk_freeEPvPS0_j() called");
    return 0;
}

/* Demangled: android::RegisterAllocator::RegisterFile::RegisterFile(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17RegisterAllocator12RegisterFileC2Ei(void) {
    ALOGD("_ZN7android17RegisterAllocator12RegisterFileC2Ei() called");
    return 0;
}

/* Demangled: android::ARMAssembler::CLZ(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler3CLZEiii(void) {
    ALOGD("_ZN7android12ARMAssembler3CLZEiii() called");
    return 0;
}

/* Demangled: android::ARMAssembler::reg_rrx(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler7reg_rrxEi(void) {
    ALOGD("_ZN7android12ARMAssembler7reg_rrxEi() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<unsigned int*, char const*> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIPjPKcEEEE = NULL;

/* Demangled: android::ARMAssemblerProxy::LDRB(int, int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy4LDRBEiiij(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy4LDRBEiiij() called");
    return 0;
}

/* Demangled: gglGetPixelFormatTable */
extern "C" __attribute__((visibility("default"))) int gglGetPixelFormatTable(void) {
    ALOGD("gglGetPixelFormatTable() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::SMUL(int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy4SMULEiiiii(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy4SMULEiiiii() called");
    return 0;
}

/* Demangled: android::GGLAssembler::build_iterate_z(android::GGLAssembler::fragment_parts_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler15build_iterate_zERKNS0_16fragment_parts_tE(void) {
    ALOGD("_ZN7android12GGLAssembler15build_iterate_zERKNS0_16fragment_parts_tE() called");
    return 0;
}

/* Demangled: android::RegisterAllocator::RegisterFile::~RegisterFile() */
extern "C" __attribute__((visibility("default"))) int _ZN7android17RegisterAllocator12RegisterFileD2Ev(void) {
    ALOGD("_ZN7android17RegisterAllocator12RegisterFileD2Ev() called");
    return 0;
}

/* Demangled: android::RegisterAllocator::RegisterFile::touched() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android17RegisterAllocator12RegisterFile7touchedEv(void) {
    ALOGD("_ZNK7android17RegisterAllocator12RegisterFile7touchedEv() called");
    return 0;
}

/* Demangled: gglBitBlit */
extern "C" __attribute__((visibility("default"))) int gglBitBlit(void) {
    ALOGD("gglBitBlit() called");
    return 0;
}

/* Demangled: android::ARMAssembler::prolog() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler6prologEv(void) {
    ALOGD("_ZN7android12ARMAssembler6prologEv() called");
    return 0;
}

/* Demangled: android::ARMAssembler::ARMAssembler(android::tinyutils::sp<android::Assembly> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssemblerC2ERKNS_9tinyutils2spINS_8AssemblyEEE(void) {
    ALOGD("_ZN7android12ARMAssemblerC2ERKNS_9tinyutils2spINS_8AssemblyEEE() called");
    return 0;
}

/* Demangled: android::ggl_system_time() */
extern "C" __attribute__((visibility("default"))) int _ZN7android15ggl_system_timeEv(void) {
    ALOGD("_ZN7android15ggl_system_timeEv() called");
    return 0;
}

/* Demangled: android::Vector<android::ARMAssembler::branch_target_t>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_12ARMAssembler15branch_target_tEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_12ARMAssembler15branch_target_tEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::ARMAssemblerInterface::__immed8_pre(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android21ARMAssemblerInterface12__immed8_preEii(void) {
    ALOGD("_ZN7android21ARMAssemblerInterface12__immed8_preEii() called");
    return 0;
}

/* Demangled: create_mspace_with_base */
extern "C" __attribute__((visibility("default"))) int create_mspace_with_base(void) {
    ALOGD("create_mspace_with_base() called");
    return 0;
}

/* Demangled: android::GGLAssembler::expand(android::GGLAssembler::integer_t&, android::GGLAssembler::integer_t const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler6expandERNS0_9integer_tERKS1_i(void) {
    ALOGD("_ZN7android12GGLAssembler6expandERNS0_9integer_tERKS1_i() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::MUL(int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy3MULEiiiii(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy3MULEiiiii() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::ADDR_STR(int, int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy8ADDR_STREiiij(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy8ADDR_STREiiij() called");
    return 0;
}

/* Demangled: android::GGLAssembler::reset(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler5resetEi(void) {
    ALOGD("_ZN7android12GGLAssembler5resetEi() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<char const*, unsigned int*> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIPKcPjEEE10do_compareEPKvS8_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIPKcPjEEE10do_compareEPKvS8_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int*, char const*> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIPjPKcEEE10do_compareEPKvS8_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIPjPKcEEE10do_compareEPKvS8_() called");
    return 0;
}

/* Demangled: android::GGLAssembler::build_texture_environment(android::GGLAssembler::component_t&, android::GGLAssembler::fragment_parts_t const&, int, android::RegisterAllocator::Scratch&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler25build_texture_environmentERNS0_11component_tERKNS0_16fragment_parts_tEiRNS_17RegisterAllocator7ScratchE(void) {
    ALOGD("_ZN7android12GGLAssembler25build_texture_environmentERNS0_11component_tERKNS0_16fragment_parts_tEiRNS_17RegisterAllocator7ScratchE() called");
    return 0;
}

/* Demangled: android::GGLAssembler::expand(android::GGLAssembler::integer_t&, android::GGLAssembler::component_t const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler6expandERNS0_9integer_tERKNS0_11component_tEi(void) {
    ALOGD("_ZN7android12GGLAssembler6expandERNS0_9integer_tERKNS0_11component_tEi() called");
    return 0;
}

/* Demangled: android::ARMAssembler::~ARMAssembler() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssemblerD2Ev(void) {
    ALOGD("_ZN7android12ARMAssemblerD2Ev() called");
    return 0;
}

/* Exported Object: vtable for android::AssemblyKey<android::needs_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android11AssemblyKeyINS_7needs_tEEE = NULL;

/* Demangled: android::GGLAssembler::build_smooth_shade(android::GGLAssembler::fragment_parts_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler18build_smooth_shadeERKNS0_16fragment_parts_tE(void) {
    ALOGD("_ZN7android12GGLAssembler18build_smooth_shadeERKNS0_16fragment_parts_tE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int*, char const*> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIPjPKcEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIPjPKcEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: gglRecipQ(int, int) */
extern "C" __attribute__((visibility("default"))) int _Z9gglRecipQii(void) {
    ALOGD("_Z9gglRecipQii() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::LDRH(int, int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy4LDRHEiiij(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy4LDRHEiiij() called");
    return 0;
}

/* Demangled: android::ARMAssembler::B(int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler1BEiPj(void) {
    ALOGD("_ZN7android12ARMAssembler1BEiPj() called");
    return 0;
}

/* Demangled: android::ARMAssembler::BX(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler2BXEii(void) {
    ALOGD("_ZN7android12ARMAssembler2BXEii() called");
    return 0;
}

/* Demangled: android::Vector<android::ARMAssembler::branch_target_t>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_12ARMAssembler15branch_target_tEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_12ARMAssembler15branch_target_tEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::getCodegenArch() */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy14getCodegenArchEv(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy14getCodegenArchEv() called");
    return 0;
}

/* Demangled: android::RegisterAllocator::RegisterFile::hasFreeRegs() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android17RegisterAllocator12RegisterFile11hasFreeRegsEv(void) {
    ALOGD("_ZNK7android17RegisterAllocator12RegisterFile11hasFreeRegsEv() called");
    return 0;
}

/* Demangled: android::ggl_set_surface(android::context_t*, android::surface_t*, GGLSurface const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android15ggl_set_surfaceEPNS_9context_tEPNS_9surface_tEPK10GGLSurface(void) {
    ALOGD("_ZN7android15ggl_set_surfaceEPNS_9context_tEPNS_9surface_tEPK10GGLSurface() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::BL(int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy2BLEiPj(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy2BLEiPj() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::LDRSH(int, int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy5LDRSHEiiij(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy5LDRSHEiiij() called");
    return 0;
}

/* Demangled: android::GGLAssembler::epilog(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler6epilogEj(void) {
    ALOGD("_ZN7android12GGLAssembler6epilogEj() called");
    return 0;
}

/* Demangled: android::ARMAssembler::base() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12ARMAssembler4baseEv(void) {
    ALOGD("_ZNK7android12ARMAssembler4baseEv() called");
    return 0;
}

/* Exported Object: scanline_col32cb16blend_arm */
extern "C" __attribute__((visibility("default"))) void* scanline_col32cb16blend_arm = NULL;

/* Exported Object: scanline_col32cb16blend_neon */
extern "C" __attribute__((visibility("default"))) void* scanline_col32cb16blend_neon = NULL;

/* Demangled: android::ARMAssemblerInterface::ADDR_STR(int, int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android21ARMAssemblerInterface8ADDR_STREiiij(void) {
    ALOGD("_ZN7android21ARMAssemblerInterface8ADDR_STREiiij() called");
    return 0;
}

/* Demangled: android::ARMAssemblerInterface::~ARMAssemblerInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN7android21ARMAssemblerInterfaceD2Ev(void) {
    ALOGD("_ZN7android21ARMAssemblerInterfaceD2Ev() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::imm(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy3immEj(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy3immEj() called");
    return 0;
}

/* Demangled: android::GGLAssembler::init_textures(android::GGLAssembler::tex_coord_t*, android::GGLAssembler::reg_t const&, android::GGLAssembler::reg_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler13init_texturesEPNS0_11tex_coord_tERKNS0_5reg_tES5_(void) {
    ALOGD("_ZN7android12GGLAssembler13init_texturesEPNS0_11tex_coord_tERKNS0_5reg_tES5_() called");
    return 0;
}

/* Demangled: android::ggl_pack_color(android::context_t*, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14ggl_pack_colorEPNS_9context_tEiiiii(void) {
    ALOGD("_ZN7android14ggl_pack_colorEPNS_9context_tEiiiii() called");
    return 0;
}

/* Demangled: android::ARMAssembler::label(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler5labelEPKc(void) {
    ALOGD("_ZN7android12ARMAssembler5labelEPKc() called");
    return 0;
}

/* Demangled: android::ARMAssembler::QADD(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler4QADDEiiii(void) {
    ALOGD("_ZN7android12ARMAssembler4QADDEiiii() called");
    return 0;
}

/* Demangled: android::ggl_uninit_context(android::context_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android18ggl_uninit_contextEPNS_9context_tE(void) {
    ALOGD("_ZN7android18ggl_uninit_contextEPNS_9context_tE() called");
    return 0;
}

/* Demangled: android::Assembly::decStrong(void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android8Assembly9decStrongEPKv(void) {
    ALOGD("_ZNK7android8Assembly9decStrongEPKv() called");
    return 0;
}

/* Demangled: android::ARMAssembler::LDRB(int, int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler4LDRBEiiij(void) {
    ALOGD("_ZN7android12ARMAssembler4LDRBEiiij() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::reg_scale_post(int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy14reg_scale_postEiij(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy14reg_scale_postEiij() called");
    return 0;
}

/* Demangled: mspace_independent_calloc */
extern "C" __attribute__((visibility("default"))) int mspace_independent_calloc(void) {
    ALOGD("mspace_independent_calloc() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::SWPB(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy4SWPBEiiii(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy4SWPBEiiii() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::epilog(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy6epilogEj(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy6epilogEj() called");
    return 0;
}

/* Demangled: android::ggl_init_clear(android::context_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14ggl_init_clearEPNS_9context_tE(void) {
    ALOGD("_ZN7android14ggl_init_clearEPNS_9context_tE() called");
    return 0;
}

/* Demangled: android::ARMAssembler::reg_scale_post(int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler14reg_scale_postEiij(void) {
    ALOGD("_ZN7android12ARMAssembler14reg_scale_postEiij() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::ARMAssembler::branch_target_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_12ARMAssembler15branch_target_tEEE = NULL;

/* Demangled: android::ARMAssemblerInterface::ADDR_ADD(int, int, int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android21ARMAssemblerInterface8ADDR_ADDEiiiij(void) {
    ALOGD("_ZN7android21ARMAssemblerInterface8ADDR_ADDEiiiij() called");
    return 0;
}

/* Demangled: android::Assembly::Assembly(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8AssemblyC2Ej(void) {
    ALOGD("_ZN7android8AssemblyC2Ej() called");
    return 0;
}

/* Demangled: android::CodeCache::CodeCache(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9CodeCacheC2Ej(void) {
    ALOGD("_ZN7android9CodeCacheC2Ej() called");
    return 0;
}

/* Demangled: android::GGLAssembler::build_coverage_application(android::GGLAssembler::component_t&, android::GGLAssembler::fragment_parts_t const&, android::RegisterAllocator::Scratch&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler26build_coverage_applicationERNS0_11component_tERKNS0_16fragment_parts_tERNS_17RegisterAllocator7ScratchE(void) {
    ALOGD("_ZN7android12GGLAssembler26build_coverage_applicationERNS0_11component_tERKNS0_16fragment_parts_tERNS_17RegisterAllocator7ScratchE() called");
    return 0;
}

/* Demangled: android::ggl_init_raster(android::context_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android15ggl_init_rasterEPNS_9context_tE(void) {
    ALOGD("_ZN7android15ggl_init_rasterEPNS_9context_tE() called");
    return 0;
}

/* Demangled: android::ARMAssembler::MUL(int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler3MULEiiiii(void) {
    ALOGD("_ZN7android12ARMAssembler3MULEiiiii() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int*, char const*> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIPjPKcEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIPjPKcEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::~ARMAssemblerProxy() */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxyD0Ev(void) {
    ALOGD("_ZN7android17ARMAssemblerProxyD0Ev() called");
    return 0;
}

/* Demangled: android::Assembly::~Assembly() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8AssemblyD2Ev(void) {
    ALOGD("_ZN7android8AssemblyD2Ev() called");
    return 0;
}

/* Demangled: android::CodeCache::~CodeCache() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9CodeCacheD2Ev(void) {
    ALOGD("_ZN7android9CodeCacheD2Ev() called");
    return 0;
}

/* Demangled: android::GGLAssembler::component_add(android::GGLAssembler::component_t&, android::GGLAssembler::integer_t const&, android::GGLAssembler::integer_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler13component_addERNS0_11component_tERKNS0_9integer_tES5_(void) {
    ALOGD("_ZN7android12GGLAssembler13component_addERNS0_11component_tERKNS0_9integer_tES5_() called");
    return 0;
}

/* Demangled: android::Vector<android::ARMAssembler::branch_target_t>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_12ARMAssembler15branch_target_tEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_12ARMAssembler15branch_target_tEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::QSUB(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy4QSUBEiiii(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy4QSUBEiiii() called");
    return 0;
}

/* Demangled: android::GGLAssembler::build_iterated_color(android::GGLAssembler::component_t&, android::GGLAssembler::fragment_parts_t const&, int, android::RegisterAllocator::Scratch&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler20build_iterated_colorERNS0_11component_tERKNS0_16fragment_parts_tEiRNS_17RegisterAllocator7ScratchE(void) {
    ALOGD("_ZN7android12GGLAssembler20build_iterated_colorERNS0_11component_tERKNS0_16fragment_parts_tEiRNS_17RegisterAllocator7ScratchE() called");
    return 0;
}

/* Demangled: android::ARMAssembler::imm(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler3immEj(void) {
    ALOGD("_ZN7android12ARMAssembler3immEj() called");
    return 0;
}

/* Demangled: mspace_realloc */
extern "C" __attribute__((visibility("default"))) int mspace_realloc(void) {
    ALOGD("mspace_realloc() called");
    return 0;
}

/* Demangled: android::GGLAssembler::load(android::GGLAssembler::pointer_t const&, android::GGLAssembler::pixel_t const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler4loadERKNS0_9pointer_tERKNS0_7pixel_tEj(void) {
    ALOGD("_ZN7android12GGLAssembler4loadERKNS0_9pointer_tERKNS0_7pixel_tEj() called");
    return 0;
}

/* Demangled: android::RegisterAllocator::registerFile() */
extern "C" __attribute__((visibility("default"))) int _ZN7android17RegisterAllocator12registerFileEv(void) {
    ALOGD("_ZN7android17RegisterAllocator12registerFileEv() called");
    return 0;
}

/* Demangled: android::ggl_uninit_scanline(android::context_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19ggl_uninit_scanlineEPNS_9context_tE(void) {
    ALOGD("_ZN7android19ggl_uninit_scanlineEPNS_9context_tE() called");
    return 0;
}

/* Demangled: android::GGLAssembler::build_textures(android::GGLAssembler::fragment_parts_t&, android::RegisterAllocator::Scratch&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler14build_texturesERNS0_16fragment_parts_tERNS_17RegisterAllocator7ScratchE(void) {
    ALOGD("_ZN7android12GGLAssembler14build_texturesERNS0_16fragment_parts_tERNS_17RegisterAllocator7ScratchE() called");
    return 0;
}

/* Demangled: android::GGLAssembler::decodeLogicOpNeeds(android::needs_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler18decodeLogicOpNeedsERKNS_7needs_tE(void) {
    ALOGD("_ZN7android12GGLAssembler18decodeLogicOpNeedsERKNS_7needs_tE() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::LDM(int, int, int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy3LDMEiiiij(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy3LDMEiiiij() called");
    return 0;
}

/* Demangled: android::ggl_init_picker(android::context_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android15ggl_init_pickerEPNS_9context_tE(void) {
    ALOGD("_ZN7android15ggl_init_pickerEPNS_9context_tE() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::MLA(int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy3MLAEiiiiii(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy3MLAEiiiiii() called");
    return 0;
}

/* Demangled: android::RegisterAllocator::RegisterAllocator(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17RegisterAllocatorC1Ei(void) {
    ALOGD("_ZN7android17RegisterAllocatorC1Ei() called");
    return 0;
}

/* Demangled: android::ggl_init_scanline(android::context_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ggl_init_scanlineEPNS_9context_tE(void) {
    ALOGD("_ZN7android17ggl_init_scanlineEPNS_9context_tE() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::B(int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy1BEiPKc(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy1BEiPKc() called");
    return 0;
}

/* Demangled: destroy_mspace */
extern "C" __attribute__((visibility("default"))) int destroy_mspace(void) {
    ALOGD("destroy_mspace() called");
    return 0;
}

/* Demangled: android::RegisterAllocator::reserveReg(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17RegisterAllocator10reserveRegEi(void) {
    ALOGD("_ZN7android17RegisterAllocator10reserveRegEi() called");
    return 0;
}

/* Demangled: android::ARMAssembler::QDADD(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler5QDADDEiiii(void) {
    ALOGD("_ZN7android12ARMAssembler5QDADDEiiii() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::SMUAL(int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy5SMUALEiiiiii(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy5SMUALEiiiiii() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::reg_pre(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy7reg_preEii(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy7reg_preEii() called");
    return 0;
}

/* Demangled: android::ARMAssembler::QDSUB(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler5QDSUBEiiii(void) {
    ALOGD("_ZN7android12ARMAssembler5QDSUBEiiii() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::immed12_post(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy12immed12_postEi(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy12immed12_postEi() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::isValidImmediate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy16isValidImmediateEj(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy16isValidImmediateEj() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::STRB(int, int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy4STRBEiiij(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy4STRBEiiij() called");
    return 0;
}

/* Demangled: android::Assembly::base() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android8Assembly4baseEv(void) {
    ALOGD("_ZNK7android8Assembly4baseEv() called");
    return 0;
}

/* Demangled: create_mspace */
extern "C" __attribute__((visibility("default"))) int create_mspace(void) {
    ALOGD("create_mspace() called");
    return 0;
}

/* Demangled: mspace_memalign */
extern "C" __attribute__((visibility("default"))) int mspace_memalign(void) {
    ALOGD("mspace_memalign() called");
    return 0;
}

/* Demangled: android::ARMAssembler::SMUAL(int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler5SMUALEiiiiii(void) {
    ALOGD("_ZN7android12ARMAssembler5SMUALEiiiiii() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<char const*, unsigned int*> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIPKcPjEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIPKcPjEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::buildImmediate(unsigned int, unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy14buildImmediateEjRjS1_(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy14buildImmediateEjRjS1_() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::setTarget(android::ARMAssemblerInterface*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy9setTargetEPNS_21ARMAssemblerInterfaceE(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy9setTargetEPNS_21ARMAssemblerInterfaceE() called");
    return 0;
}

/* Demangled: android::GGLAssembler::~GGLAssembler() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssemblerD0Ev(void) {
    ALOGD("_ZN7android12GGLAssemblerD0Ev() called");
    return 0;
}

/* Demangled: android::ARMAssembler::isValidImmediate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler16isValidImmediateEj(void) {
    ALOGD("_ZN7android12ARMAssembler16isValidImmediateEj() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::PLD(int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy3PLDEij(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy3PLDEij() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::SMULL(int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy5SMULLEiiiiii(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy5SMULLEiiiiii() called");
    return 0;
}

/* Demangled: android::GGLAssembler::build_blending(android::GGLAssembler::component_t&, android::GGLAssembler::pixel_t const&, int, android::RegisterAllocator::Scratch&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler14build_blendingERNS0_11component_tERKNS0_7pixel_tEiRNS_17RegisterAllocator7ScratchE(void) {
    ALOGD("_ZN7android12GGLAssembler14build_blendingERNS0_11component_tERKNS0_7pixel_tEiRNS_17RegisterAllocator7ScratchE() called");
    return 0;
}

/* Demangled: android::ARMAssembler::SWP(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler3SWPEiiii(void) {
    ALOGD("_ZN7android12ARMAssembler3SWPEiiii() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::immed8_pre(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy10immed8_preEii(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy10immed8_preEii() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::STR(int, int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy3STREiiij(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy3STREiiij() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::ADDR_ADD(int, int, int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy8ADDR_ADDEiiiij(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy8ADDR_ADDEiiiij() called");
    return 0;
}

/* Demangled: android::RegisterAllocator::RegisterFile::countFreeRegs() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android17RegisterAllocator12RegisterFile13countFreeRegsEv(void) {
    ALOGD("_ZNK7android17RegisterAllocator12RegisterFile13countFreeRegsEv() called");
    return 0;
}

/* Demangled: android::GGLAssembler::filter8(android::GGLAssembler::fragment_parts_t const&, android::GGLAssembler::pixel_t&, android::GGLAssembler::texture_unit_t const&, int, int, android::GGLAssembler::pointer_t&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler7filter8ERKNS0_16fragment_parts_tERNS0_7pixel_tERKNS0_14texture_unit_tEiiRNS0_9pointer_tEi(void) {
    ALOGD("_ZN7android12GGLAssembler7filter8ERKNS0_16fragment_parts_tERNS0_7pixel_tERKNS0_14texture_unit_tEiiRNS0_9pointer_tEi() called");
    return 0;
}

/* Demangled: android::GGLAssembler::filter16(android::GGLAssembler::fragment_parts_t const&, android::GGLAssembler::pixel_t&, android::GGLAssembler::texture_unit_t const&, int, int, android::GGLAssembler::pointer_t&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler8filter16ERKNS0_16fragment_parts_tERNS0_7pixel_tERKNS0_14texture_unit_tEiiRNS0_9pointer_tEi(void) {
    ALOGD("_ZN7android12GGLAssembler8filter16ERKNS0_16fragment_parts_tERNS0_7pixel_tERKNS0_14texture_unit_tEiiRNS0_9pointer_tEi() called");
    return 0;
}

/* Demangled: android::ARMAssembler::SMULL(int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler5SMULLEiiiiii(void) {
    ALOGD("_ZN7android12ARMAssembler5SMULLEiiiiii() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int*, char const*> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIPjPKcEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIPjPKcEEE12do_constructEPvj() called");
    return 0;
}

/* Exported Object: scanline_t32cb16blend_arm */
extern "C" __attribute__((visibility("default"))) void* scanline_t32cb16blend_arm = NULL;

/* Demangled: android::ARMAssemblerProxy::SMLAL(int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy5SMLALEiiiiii(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy5SMLALEiiiiii() called");
    return 0;
}

/* Demangled: android::RegisterAllocator::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN7android17RegisterAllocator5resetEv(void) {
    ALOGD("_ZN7android17RegisterAllocator5resetEv() called");
    return 0;
}

/* Demangled: android::GGLAssembler::blend(android::GGLAssembler::component_t&, android::GGLAssembler::component_t const&, android::GGLAssembler::pixel_t const&, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler5blendERNS0_11component_tERKS1_RKNS0_7pixel_tEii(void) {
    ALOGD("_ZN7android12GGLAssembler5blendERNS0_11component_tERKS1_RKNS0_7pixel_tEii() called");
    return 0;
}

/* Demangled: android::ARMAssembler::pcForLabel(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler10pcForLabelEPKc(void) {
    ALOGD("_ZN7android12ARMAssembler10pcForLabelEPKc() called");
    return 0;
}

/* Demangled: android::ARMAssembler::dataProcessing(int, int, int, int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler14dataProcessingEiiiiij(void) {
    ALOGD("_ZN7android12ARMAssembler14dataProcessingEiiiiij() called");
    return 0;
}

/* Demangled: android::ARMAssembler::QSUB(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler4QSUBEiiii(void) {
    ALOGD("_ZN7android12ARMAssembler4QSUBEiiii() called");
    return 0;
}

/* Demangled: android::RegisterAllocator::RegisterFile::RegisterFile(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17RegisterAllocator12RegisterFileC1Ei(void) {
    ALOGD("_ZN7android17RegisterAllocator12RegisterFileC1Ei() called");
    return 0;
}

/* Demangled: disasm */
extern "C" __attribute__((visibility("default"))) int disasm(void) {
    ALOGD("disasm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::CodeCache::key_t, android::CodeCache::cache_entry_t> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_9CodeCache5key_tENS2_13cache_entry_tEEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_9CodeCache5key_tENS2_13cache_entry_tEEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: mspace_trim */
extern "C" __attribute__((visibility("default"))) int mspace_trim(void) {
    ALOGD("mspace_trim() called");
    return 0;
}

/* Demangled: android::ggl_expand(unsigned int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10ggl_expandEjii(void) {
    ALOGD("_ZN7android10ggl_expandEjii() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::SWI(int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy3SWIEij(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy3SWIEij() called");
    return 0;
}

/* Demangled: android::GGLAssembler::expand(android::GGLAssembler::component_t&, android::GGLAssembler::component_t const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler6expandERNS0_11component_tERKS1_i(void) {
    ALOGD("_ZN7android12GGLAssembler6expandERNS0_11component_tERKS1_i() called");
    return 0;
}

/* Demangled: android::RegisterAllocator::RegisterFile::~RegisterFile() */
extern "C" __attribute__((visibility("default"))) int _ZN7android17RegisterAllocator12RegisterFileD1Ev(void) {
    ALOGD("_ZN7android17RegisterAllocator12RegisterFileD1Ev() called");
    return 0;
}

/* Demangled: android::ARMAssembler::LDM(int, int, int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler3LDMEiiiij(void) {
    ALOGD("_ZN7android12ARMAssembler3LDMEiiiij() called");
    return 0;
}

/* Demangled: android::ARMAssembler::SMULW(int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler5SMULWEiiiii(void) {
    ALOGD("_ZN7android12ARMAssembler5SMULWEiiiii() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<char const*, unsigned int*> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIPKcPjEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIPKcPjEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: android::AAEdge::dump() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6AAEdge4dumpEv(void) {
    ALOGD("_ZN7android6AAEdge4dumpEv() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::disassemble(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy11disassembleEPKc(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy11disassembleEPKc() called");
    return 0;
}

/* Exported Object: vtable for android::Assembly */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8AssemblyE = NULL;

/* Demangled: mspace_max_footprint */
extern "C" __attribute__((visibility("default"))) int mspace_max_footprint(void) {
    ALOGD("mspace_max_footprint() called");
    return 0;
}

/* Demangled: android::GGLAssembler::build_scanline_prolog(android::GGLAssembler::fragment_parts_t&, android::needs_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler21build_scanline_prologERNS0_16fragment_parts_tERKNS_7needs_tE(void) {
    ALOGD("_ZN7android12GGLAssembler21build_scanline_prologERNS0_16fragment_parts_tERKNS_7needs_tE() called");
    return 0;
}

/* Demangled: android::GGLAssembler::extract(android::GGLAssembler::integer_t&, android::GGLAssembler::pixel_t const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler7extractERNS0_9integer_tERKNS0_7pixel_tEi(void) {
    ALOGD("_ZN7android12GGLAssembler7extractERNS0_9integer_tERKNS0_7pixel_tEi() called");
    return 0;
}

/* Demangled: android::GGLAssembler::add(android::GGLAssembler::component_t&, android::GGLAssembler::component_t const&, android::GGLAssembler::pixel_t const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler3addERNS0_11component_tERKS1_RKNS0_7pixel_tEi(void) {
    ALOGD("_ZN7android12GGLAssembler3addERNS0_11component_tERKS1_RKNS0_7pixel_tEi() called");
    return 0;
}

/* Demangled: android::ARMAssembler::getCodegenArch() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler14getCodegenArchEv(void) {
    ALOGD("_ZN7android12ARMAssembler14getCodegenArchEv() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::ARMAssemblerProxy(android::ARMAssemblerInterface*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxyC2EPNS_21ARMAssemblerInterfaceE(void) {
    ALOGD("_ZN7android17ARMAssemblerProxyC2EPNS_21ARMAssemblerInterfaceE() called");
    return 0;
}

/* Exported Object: vtable for android::ARMAssemblerProxy */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android17ARMAssemblerProxyE = NULL;

/* Demangled: android::RegisterAllocator::RegisterFile::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN7android17RegisterAllocator12RegisterFile5resetEv(void) {
    ALOGD("_ZN7android17RegisterAllocator12RegisterFile5resetEv() called");
    return 0;
}

/* Demangled: android::GGLAssembler::wrapping(int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler8wrappingEiiiii(void) {
    ALOGD("_ZN7android12GGLAssembler8wrappingEiiiii() called");
    return 0;
}

/* Demangled: android::ARMAssembler::LDRH(int, int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler4LDRHEiiij(void) {
    ALOGD("_ZN7android12ARMAssembler4LDRHEiiij() called");
    return 0;
}

/* Demangled: android::ARMAssembler::~ARMAssembler() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssemblerD1Ev(void) {
    ALOGD("_ZN7android12ARMAssemblerD1Ev() called");
    return 0;
}

/* Demangled: disassemble */
extern "C" __attribute__((visibility("default"))) int disassemble(void) {
    ALOGD("disassemble() called");
    return 0;
}

/* Demangled: gglRecipQNormalized(int, int*) */
extern "C" __attribute__((visibility("default"))) int _Z19gglRecipQNormalizediPi(void) {
    ALOGD("_Z19gglRecipQNormalizediPi() called");
    return 0;
}

/* Demangled: gglInit */
extern "C" __attribute__((visibility("default"))) int gglInit(void) {
    ALOGD("gglInit() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::immed12_pre(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy11immed12_preEii(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy11immed12_preEii() called");
    return 0;
}

/* Demangled: android::ARMAssembler::B(int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler1BEiPKc(void) {
    ALOGD("_ZN7android12ARMAssembler1BEiPKc() called");
    return 0;
}

/* Demangled: android::ARMAssembler::STRB(int, int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler4STRBEiiij(void) {
    ALOGD("_ZN7android12ARMAssembler4STRBEiiij() called");
    return 0;
}

/* Demangled: android::ARMAssembler::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler5resetEv(void) {
    ALOGD("_ZN7android12ARMAssembler5resetEv() called");
    return 0;
}

/* Demangled: android::ARMAssemblerInterface::ADDR_SUB(int, int, int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android21ARMAssemblerInterface8ADDR_SUBEiiiij(void) {
    ALOGD("_ZN7android21ARMAssemblerInterface8ADDR_SUBEiiiij() called");
    return 0;
}

/* Demangled: android::Assembly::incStrong(void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android8Assembly9incStrongEPKv(void) {
    ALOGD("_ZNK7android8Assembly9incStrongEPKv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<char const*, unsigned int*> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIPKcPjEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIPKcPjEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::CLZ(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy3CLZEiii(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy3CLZEiii() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::CodeCache::key_t, android::CodeCache::cache_entry_t> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_9CodeCache5key_tENS2_13cache_entry_tEEEE10do_compareEPKvS8_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_9CodeCache5key_tENS2_13cache_entry_tEEEE10do_compareEPKvS8_() called");
    return 0;
}

/* Demangled: android::CodeCache::lookup(android::AssemblyKeyBase const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9CodeCache6lookupERKNS_15AssemblyKeyBaseE(void) {
    ALOGD("_ZNK7android9CodeCache6lookupERKNS_15AssemblyKeyBaseE() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<android::CodeCache::key_t, android::CodeCache::cache_entry_t> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_9CodeCache5key_tENS2_13cache_entry_tEEEEE = NULL;

/* Demangled: android::GGLAssembler::GGLAssembler(android::ARMAssemblerInterface*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssemblerC2EPNS_21ARMAssemblerInterfaceE(void) {
    ALOGD("_ZN7android12GGLAssemblerC2EPNS_21ARMAssemblerInterfaceE() called");
    return 0;
}

/* Demangled: android::ARMAssembler::ARMAssembler(android::tinyutils::sp<android::Assembly> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssemblerC1ERKNS_9tinyutils2spINS_8AssemblyEEE(void) {
    ALOGD("_ZN7android12ARMAssemblerC1ERKNS_9tinyutils2spINS_8AssemblyEEE() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::reg_scale_pre(int, int, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy13reg_scale_preEiiji(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy13reg_scale_preEiiji() called");
    return 0;
}

/* Demangled: android::ARMAssembler::BL(int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler2BLEiPj(void) {
    ALOGD("_ZN7android12ARMAssembler2BLEiPj() called");
    return 0;
}

/* Demangled: android::ARMAssemblerInterface::~ARMAssemblerInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN7android21ARMAssemblerInterfaceD1Ev(void) {
    ALOGD("_ZN7android21ARMAssemblerInterfaceD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::CodeCache::key_t, android::CodeCache::cache_entry_t> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_9CodeCache5key_tENS2_13cache_entry_tEEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_9CodeCache5key_tENS2_13cache_entry_tEEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::GGLAssembler::build_fog(android::GGLAssembler::component_t&, int, android::RegisterAllocator::Scratch&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler9build_fogERNS0_11component_tEiRNS_17RegisterAllocator7ScratchE(void) {
    ALOGD("_ZN7android12GGLAssembler9build_fogERNS0_11component_tEiRNS_17RegisterAllocator7ScratchE() called");
    return 0;
}

/* Demangled: android::ARMAssembler::reg_scale_pre(int, int, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler13reg_scale_preEiiji(void) {
    ALOGD("_ZN7android12ARMAssembler13reg_scale_preEiiji() called");
    return 0;
}

/* Demangled: android::ARMAssembler::reg_post(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler8reg_postEi(void) {
    ALOGD("_ZN7android12ARMAssembler8reg_postEi() called");
    return 0;
}

/* Demangled: android::Assembly::resize(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Assembly6resizeEj(void) {
    ALOGD("_ZN7android8Assembly6resizeEj() called");
    return 0;
}

/* Demangled: android::GGLAssembler::build_incoming_component(android::GGLAssembler::component_t&, int, android::GGLAssembler::fragment_parts_t const&, int, android::RegisterAllocator::Scratch&, android::RegisterAllocator::Scratch&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler24build_incoming_componentERNS0_11component_tEiRKNS0_16fragment_parts_tEiRNS_17RegisterAllocator7ScratchES8_(void) {
    ALOGD("_ZN7android12GGLAssembler24build_incoming_componentERNS0_11component_tEiRKNS0_16fragment_parts_tEiRNS_17RegisterAllocator7ScratchES8_() called");
    return 0;
}

/* Demangled: android::GGLAssembler::extract(android::GGLAssembler::integer_t&, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler7extractERNS0_9integer_tEiiii(void) {
    ALOGD("_ZN7android12GGLAssembler7extractERNS0_9integer_tEiiii() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<char const*, unsigned int*> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIPKcPjEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIPKcPjEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::ADDR_LDR(int, int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy8ADDR_LDREiiij(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy8ADDR_LDREiiij() called");
    return 0;
}

/* Demangled: android::ARMAssembler::disassemble(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler11disassembleEPKc(void) {
    ALOGD("_ZN7android12ARMAssembler11disassembleEPKc() called");
    return 0;
}

/* Demangled: android::ARMAssembler::SWPB(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler4SWPBEiiii(void) {
    ALOGD("_ZN7android12ARMAssembler4SWPBEiiii() called");
    return 0;
}

/* Demangled: android::GGLAssembler::scanline(android::needs_t const&, android::context_t const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler8scanlineERKNS_7needs_tEPKNS_9context_tE(void) {
    ALOGD("_ZN7android12GGLAssembler8scanlineERKNS_7needs_tEPKNS_9context_tE() called");
    return 0;
}

/* Demangled: android::RegisterAllocator::RegisterFile::RegisterFile(android::RegisterAllocator::RegisterFile const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17RegisterAllocator12RegisterFileC2ERKS1_i(void) {
    ALOGD("_ZN7android17RegisterAllocator12RegisterFileC2ERKS1_i() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::STM(int, int, int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy3STMEiiiij(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy3STMEiiiij() called");
    return 0;
}

/* Demangled: android::GGLAssembler::decal(android::GGLAssembler::component_t&, android::GGLAssembler::component_t const&, android::GGLAssembler::pixel_t const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler5decalERNS0_11component_tERKS1_RKNS0_7pixel_tEi(void) {
    ALOGD("_ZN7android12GGLAssembler5decalERNS0_11component_tERKS1_RKNS0_7pixel_tEi() called");
    return 0;
}

/* Demangled: android::ARMAssembler::UBFX(int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler4UBFXEiiiii(void) {
    ALOGD("_ZN7android12ARMAssembler4UBFXEiiiii() called");
    return 0;
}

/* Demangled: gglUninit */
extern "C" __attribute__((visibility("default"))) int gglUninit(void) {
    ALOGD("gglUninit() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::~ARMAssemblerProxy() */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxyD2Ev(void) {
    ALOGD("_ZN7android17ARMAssemblerProxyD2Ev() called");
    return 0;
}

/* Demangled: android::Assembly::Assembly(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8AssemblyC1Ej(void) {
    ALOGD("_ZN7android8AssemblyC1Ej() called");
    return 0;
}

/* Demangled: android::CodeCache::CodeCache(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9CodeCacheC1Ej(void) {
    ALOGD("_ZN7android9CodeCacheC1Ej() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::CodeCache::key_t, android::CodeCache::cache_entry_t> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_9CodeCache5key_tENS2_13cache_entry_tEEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_9CodeCache5key_tENS2_13cache_entry_tEEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: mspace_free */
extern "C" __attribute__((visibility("default"))) int mspace_free(void) {
    ALOGD("mspace_free() called");
    return 0;
}

/* Demangled: android::ggl_init_texture(android::context_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16ggl_init_textureEPNS_9context_tE(void) {
    ALOGD("_ZN7android16ggl_init_textureEPNS_9context_tE() called");
    return 0;
}

/* Demangled: android::ARMAssembler::STR(int, int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler3STREiiij(void) {
    ALOGD("_ZN7android12ARMAssembler3STREiiij() called");
    return 0;
}

/* Demangled: gglSqrtx(int) */
extern "C" __attribute__((visibility("default"))) int _Z8gglSqrtxi(void) {
    ALOGD("_Z8gglSqrtxi() called");
    return 0;
}

/* Demangled: android::ggl_error(android::context_t*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9ggl_errorEPNS_9context_tEj(void) {
    ALOGD("_ZN7android9ggl_errorEPNS_9context_tEj() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::BL(int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy2BLEiPKc(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy2BLEiPKc() called");
    return 0;
}

/* Demangled: android::Assembly::~Assembly() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8AssemblyD1Ev(void) {
    ALOGD("_ZN7android8AssemblyD1Ev() called");
    return 0;
}

/* Demangled: android::CodeCache::~CodeCache() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9CodeCacheD1Ev(void) {
    ALOGD("_ZN7android9CodeCacheD1Ev() called");
    return 0;
}

/* Demangled: android::GGLAssembler::build_blend_factor(android::GGLAssembler::integer_t&, int, int, android::GGLAssembler::pixel_t const&, android::GGLAssembler::integer_t&, android::GGLAssembler::integer_t&, android::RegisterAllocator::Scratch&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler18build_blend_factorERNS0_9integer_tEiiRKNS0_7pixel_tES2_S2_RNS_17RegisterAllocator7ScratchE(void) {
    ALOGD("_ZN7android12GGLAssembler18build_blend_factorERNS0_9integer_tEiiRKNS0_7pixel_tES2_S2_RNS_17RegisterAllocator7ScratchE() called");
    return 0;
}

/* Demangled: android::ARMAssembler::SMLAL(int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler5SMLALEiiiiii(void) {
    ALOGD("_ZN7android12ARMAssembler5SMLALEiiiiii() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::STRH(int, int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy4STRHEiiij(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy4STRHEiiij() called");
    return 0;
}

/* Demangled: android::ARMAssembler::immed8_pre(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler10immed8_preEii(void) {
    ALOGD("_ZN7android12ARMAssembler10immed8_preEii() called");
    return 0;
}

/* Demangled: android::ARMAssemblerInterface::ADDR_LDR(int, int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android21ARMAssemblerInterface8ADDR_LDREiiij(void) {
    ALOGD("_ZN7android21ARMAssemblerInterface8ADDR_LDREiiij() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::QDADD(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy5QDADDEiiii(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy5QDADDEiiii() called");
    return 0;
}

/* Demangled: android::mspace_realloc_in_place(void*, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android23mspace_realloc_in_placeEPvS0_j(void) {
    ALOGD("_ZN7android23mspace_realloc_in_placeEPvS0_j() called");
    return 0;
}

/* Demangled: android::ARMAssembler::epilog(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler6epilogEj(void) {
    ALOGD("_ZN7android12ARMAssembler6epilogEj() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::immed8_post(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy11immed8_postEi(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy11immed8_postEi() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::LDR(int, int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy3LDREiiij(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy3LDREiiij() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::QDSUB(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy5QDSUBEiiii(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy5QDSUBEiiii() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::ADDR_SUB(int, int, int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy8ADDR_SUBEiiiij(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy8ADDR_SUBEiiiij() called");
    return 0;
}

/* Demangled: android::mspace_set_footprint_limit(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android26mspace_set_footprint_limitEPvj(void) {
    ALOGD("_ZN7android26mspace_set_footprint_limitEPvj() called");
    return 0;
}

/* Demangled: android::GGLAssembler::base_offset(android::GGLAssembler::pointer_t const&, android::GGLAssembler::pointer_t const&, android::GGLAssembler::reg_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler11base_offsetERKNS0_9pointer_tES3_RKNS0_5reg_tE(void) {
    ALOGD("_ZN7android12GGLAssembler11base_offsetERKNS0_9pointer_tES3_RKNS0_5reg_tE() called");
    return 0;
}

/* Demangled: android::ARMAssembler::LDRSB(int, int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler5LDRSBEiiij(void) {
    ALOGD("_ZN7android12ARMAssembler5LDRSBEiiij() called");
    return 0;
}

/* Demangled: android::GGLAssembler::downshift(android::GGLAssembler::pixel_t&, int, android::GGLAssembler::component_t, android::GGLAssembler::reg_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler9downshiftERNS0_7pixel_tEiNS0_11component_tERKNS0_5reg_tE(void) {
    ALOGD("_ZN7android12GGLAssembler9downshiftERNS0_7pixel_tEiNS0_11component_tERKNS0_5reg_tE() called");
    return 0;
}

/* Exported Object: vtable for android::GGLAssembler */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12GGLAssemblerE = NULL;

/* Demangled: android::ARMAssemblerProxy::SMULW(int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy5SMULWEiiiii(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy5SMULWEiiiii() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<char const*, unsigned int*> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIPKcPjEEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::CodeCache::key_t, android::CodeCache::cache_entry_t> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_9CodeCache5key_tENS2_13cache_entry_tEEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_9CodeCache5key_tENS2_13cache_entry_tEEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::RegisterAllocator::RegisterFile::obtain() */
extern "C" __attribute__((visibility("default"))) int _ZN7android17RegisterAllocator12RegisterFile6obtainEv(void) {
    ALOGD("_ZN7android17RegisterAllocator12RegisterFile6obtainEv() called");
    return 0;
}

/* Demangled: android::GGLAssembler::~GGLAssembler() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssemblerD2Ev(void) {
    ALOGD("_ZN7android12GGLAssemblerD2Ev() called");
    return 0;
}

/* Demangled: android::Vector<android::ARMAssembler::branch_target_t>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_12ARMAssembler15branch_target_tEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_12ARMAssembler15branch_target_tEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: mspace_calloc */
extern "C" __attribute__((visibility("default"))) int mspace_calloc(void) {
    ALOGD("mspace_calloc() called");
    return 0;
}

/* Demangled: android::ARMAssembler::STM(int, int, int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler3STMEiiiij(void) {
    ALOGD("_ZN7android12ARMAssembler3STMEiiiij() called");
    return 0;
}

/* Demangled: android::ARMAssembler::reg_reg(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler7reg_regEiii(void) {
    ALOGD("_ZN7android12ARMAssembler7reg_regEiii() called");
    return 0;
}

/* Demangled: android::ggl_pick_scanline(android::context_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ggl_pick_scanlineEPNS_9context_tE(void) {
    ALOGD("_ZN7android17ggl_pick_scanlineEPNS_9context_tE() called");
    return 0;
}

/* Demangled: android::horz_clamp_iterator::init(android::context_t const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19horz_clamp_iterator4initEPKNS_9context_tEi(void) {
    ALOGD("_ZN7android19horz_clamp_iterator4initEPKNS_9context_tEi() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::ARMAssemblerProxy() */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxyC2Ev(void) {
    ALOGD("_ZN7android17ARMAssemblerProxyC2Ev() called");
    return 0;
}

/* Demangled: android::CodeCache::cache(android::AssemblyKeyBase const&, android::tinyutils::sp<android::Assembly> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9CodeCache5cacheERKNS_15AssemblyKeyBaseERKNS_9tinyutils2spINS_8AssemblyEEE(void) {
    ALOGD("_ZN7android9CodeCache5cacheERKNS_15AssemblyKeyBaseERKNS_9tinyutils2spINS_8AssemblyEEE() called");
    return 0;
}

/* Demangled: android::ARMAssembler::PLD(int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler3PLDEij(void) {
    ALOGD("_ZN7android12ARMAssembler3PLDEij() called");
    return 0;
}

/* Demangled: android::ARMAssembler::pc() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12ARMAssembler2pcEv(void) {
    ALOGD("_ZNK7android12ARMAssembler2pcEv() called");
    return 0;
}

/* Demangled: android::RegisterAllocator::obtainReg() */
extern "C" __attribute__((visibility("default"))) int _ZN7android17RegisterAllocator9obtainRegEv(void) {
    ALOGD("_ZN7android17RegisterAllocator9obtainRegEv() called");
    return 0;
}

/* Demangled: android::ARMAssemblerProxy::reg_reg(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17ARMAssemblerProxy7reg_regEiii(void) {
    ALOGD("_ZN7android17ARMAssemblerProxy7reg_regEiii() called");
    return 0;
}

/* Demangled: mspace_independent_comalloc */
extern "C" __attribute__((visibility("default"))) int mspace_independent_comalloc(void) {
    ALOGD("mspace_independent_comalloc() called");
    return 0;
}

/* Demangled: android::GGLAssembler::component_sat(android::GGLAssembler::component_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler13component_satERKNS0_11component_tE(void) {
    ALOGD("_ZN7android12GGLAssembler13component_satERKNS0_11component_tE() called");
    return 0;
}

/* Demangled: android::ARMAssembler::STRH(int, int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler4STRHEiiij(void) {
    ALOGD("_ZN7android12ARMAssembler4STRHEiiij() called");
    return 0;
}

/* Demangled: android::Assembly::size() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android8Assembly4sizeEv(void) {
    ALOGD("_ZNK7android8Assembly4sizeEv() called");
    return 0;
}

/* Demangled: android::GGLAssembler::filter24(android::GGLAssembler::fragment_parts_t const&, android::GGLAssembler::pixel_t&, android::GGLAssembler::texture_unit_t const&, int, int, android::GGLAssembler::pointer_t&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler8filter24ERKNS0_16fragment_parts_tERNS0_7pixel_tERKNS0_14texture_unit_tEiiRNS0_9pointer_tEi(void) {
    ALOGD("_ZN7android12GGLAssembler8filter24ERKNS0_16fragment_parts_tERNS0_7pixel_tERKNS0_14texture_unit_tEiiRNS0_9pointer_tEi() called");
    return 0;
}

/* Demangled: android::ggl_pick_cb(android::context_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11ggl_pick_cbEPNS_9context_tE(void) {
    ALOGD("_ZN7android11ggl_pick_cbEPNS_9context_tE() called");
    return 0;
}

/* Demangled: android::RegisterAllocator::RegisterFile::operator==(android::RegisterAllocator::RegisterFile const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android17RegisterAllocator12RegisterFileeqERKS1_(void) {
    ALOGD("_ZNK7android17RegisterAllocator12RegisterFileeqERKS1_() called");
    return 0;
}

/* Demangled: android::GGLAssembler::build_blendFOneMinusF(android::GGLAssembler::component_t&, android::GGLAssembler::integer_t const&, android::GGLAssembler::integer_t const&, android::GGLAssembler::integer_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler21build_blendFOneMinusFERNS0_11component_tERKNS0_9integer_tES5_S5_(void) {
    ALOGD("_ZN7android12GGLAssembler21build_blendFOneMinusFERNS0_11component_tERKNS0_9integer_tES5_S5_() called");
    return 0;
}

/* Demangled: android::ggl_pick_texture(android::context_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16ggl_pick_textureEPNS_9context_tE(void) {
    ALOGD("_ZN7android16ggl_pick_textureEPNS_9context_tE() called");
    return 0;
}

/* Exported Object: vtable for android::ARMAssembler */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12ARMAssemblerE = NULL;

/* Demangled: gglSqrtRecipx(int) */
extern "C" __attribute__((visibility("default"))) int _Z13gglSqrtRecipxi(void) {
    ALOGD("_Z13gglSqrtRecipxi() called");
    return 0;
}

/* Demangled: android::GGLAssembler::build_component(android::GGLAssembler::pixel_t&, android::GGLAssembler::fragment_parts_t const&, int, android::RegisterAllocator::Scratch&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler15build_componentERNS0_7pixel_tERKNS0_16fragment_parts_tEiRNS_17RegisterAllocator7ScratchE(void) {
    ALOGD("_ZN7android12GGLAssembler15build_componentERNS0_7pixel_tERKNS0_16fragment_parts_tEiRNS_17RegisterAllocator7ScratchE() called");
    return 0;
}

/* Demangled: android::GGLAssembler::build_alpha_test(android::GGLAssembler::component_t&, android::GGLAssembler::fragment_parts_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler16build_alpha_testERNS0_11component_tERKNS0_16fragment_parts_tE(void) {
    ALOGD("_ZN7android12GGLAssembler16build_alpha_testERNS0_11component_tERKNS0_16fragment_parts_tE() called");
    return 0;
}

/* Demangled: android::GGLAssembler::store(android::GGLAssembler::pointer_t const&, android::GGLAssembler::pixel_t const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12GGLAssembler5storeERKNS0_9pointer_tERKNS0_7pixel_tEj(void) {
    ALOGD("_ZN7android12GGLAssembler5storeERKNS0_9pointer_tERKNS0_7pixel_tEj() called");
    return 0;
}

/* Demangled: android::ARMAssembler::SWI(int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler3SWIEij(void) {
    ALOGD("_ZN7android12ARMAssembler3SWIEij() called");
    return 0;
}

/* Demangled: android::ARMAssembler::reg_imm(int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12ARMAssembler7reg_immEiij(void) {
    ALOGD("_ZN7android12ARMAssembler7reg_immEiij() called");
    return 0;
}

/* Demangled: android::ggl_init_context(android::context_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16ggl_init_contextEPNS_9context_tE(void) {
    ALOGD("_ZN7android16ggl_init_contextEPNS_9context_tE() called");
    return 0;
}

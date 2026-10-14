/*
 * Reverse-Engineered ABI Specification for: libmtkcam_pipelinepolicy_factory.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libmtkcam_pipelinepolicy_factory.so
 */

#ifndef BEGONIA_RE_LIBMTKCAM_PIPELINEPOLICY_FACTORY_H
#define BEGONIA_RE_LIBMTKCAM_PIPELINEPOLICY_FACTORY_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam2v38pipeline6policy14featuresetting21IFeatureSettingPolicyEEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEE25__emplace_unique_key_argsIjJNS_4pairIKjS9_EEEEENSN_INS_15__hash_iteratorIPNS_11__hash_nodeISA_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::featuresetting::IFeatureSettingPolicy> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::featuresetting::IFeatureSettingPolicy> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::featuresetting::IFeatureSettingPolicy> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::featuresetting::IFeatureSettingPolicy> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::featuresetting::IFeatureSettingPolicy> > > >::__emplace_unique_key_args<unsigned int, std::__1::pair<unsigned int const, std::__1::shared_ptr<NSCam::v3::pipeline::policy::featuresetting::IFeatureSettingPolicy> > >(unsigned int const&, std::__1::pair<unsigned int const, std::__1::shared_ptr<NSCam::v3::pipeline::policy::featuresetting::IFeatureSettingPolicy> >&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam2v38pipeline6policy14featuresetting21IFeatureSettingPolicyEEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEE25__emplace_unique_key_argsIjJNS_4pairIKjS9_EEEEENSN_INS_15__hash_iteratorIPNS_11__hash_nodeISA_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam2v38pipeline6policy14featuresetting21IFeatureSettingPolicyEEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::featuresetting::IFeatureSettingPolicy> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::featuresetting::IFeatureSettingPolicy> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::featuresetting::IFeatureSettingPolicy> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::featuresetting::IFeatureSettingPolicy> > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam2v38pipeline6policy14featuresetting21IFeatureSettingPolicyEEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEE6rehashEm(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting25PipelineSettingPolicyImplENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::pipelinesetting::PipelineSettingPolicyImpl, std::__1::allocator<NSCam::v3::pipeline::policy::pipelinesetting::PipelineSettingPolicyImpl> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting25PipelineSettingPolicyImplENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy18PipelineStaticInfoENS_9allocatorIS5_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::PipelineStaticInfo, std::__1::allocator<NSCam::v3::pipeline::policy::PipelineStaticInfo> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy18PipelineStaticInfoENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting13MediatorTableENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::pipelinesetting::MediatorTable, std::__1::allocator<NSCam::v3::pipeline::policy::pipelinesetting::MediatorTable> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting13MediatorTableENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNSt3__110shared_ptrIKN5NSCam2v38pipeline6policy18PipelineStaticInfoEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::v3::pipeline::policy::PipelineStaticInfo const>::~shared_ptr() */
int _ZNSt3__110shared_ptrIKN5NSCam2v38pipeline6policy18PipelineStaticInfoEED2Ev(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting11PolicyTableENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::pipelinesetting::PolicyTable, std::__1::allocator<NSCam::v3::pipeline::policy::pipelinesetting::PolicyTable> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting11PolicyTableENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam2v38pipeline6policy14featuresetting21IFeatureSettingPolicyEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::v3::pipeline::policy::featuresetting::IFeatureSettingPolicy>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam2v38pipeline6policy14featuresetting21IFeatureSettingPolicyEED2Ev(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting25PipelineSettingPolicyImplENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::pipelinesetting::PipelineSettingPolicyImpl, std::__1::allocator<NSCam::v3::pipeline::policy::pipelinesetting::PipelineSettingPolicyImpl> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting25PipelineSettingPolicyImplENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy18PipelineStaticInfoENS_9allocatorIS5_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::PipelineStaticInfo, std::__1::allocator<NSCam::v3::pipeline::policy::PipelineStaticInfo> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy18PipelineStaticInfoENS_9allocatorIS5_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
/* Demangled: _ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting25PipelineSettingPolicyImplENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::pipelinesetting::PipelineSettingPolicyImpl, std::__1::allocator<NSCam::v3::pipeline::policy::pipelinesetting::PipelineSettingPolicyImpl> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting25PipelineSettingPolicyImplENS_9allocatorIS6_EEEE;

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZN5NSCam2v38pipeline6policy15pipelinesetting29IPipelineSettingPolicyFactory27createPipelineSettingPolicyERKNS4_14CreationParamsE */
/* Demangled: NSCam::v3::pipeline::policy::pipelinesetting::IPipelineSettingPolicyFactory::createPipelineSettingPolicy(NSCam::v3::pipeline::policy::pipelinesetting::IPipelineSettingPolicyFactory::CreationParams const&) */
int _ZN5NSCam2v38pipeline6policy15pipelinesetting29IPipelineSettingPolicyFactory27createPipelineSettingPolicyERKNS4_14CreationParamsE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam2v38pipeline6policy14featuresetting21IFeatureSettingPolicyEEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::featuresetting::IFeatureSettingPolicy> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::featuresetting::IFeatureSettingPolicy> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::featuresetting::IFeatureSettingPolicy> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::featuresetting::IFeatureSettingPolicy> > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam2v38pipeline6policy14featuresetting21IFeatureSettingPolicyEEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEE8__rehashEm(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting13MediatorTableENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::pipelinesetting::MediatorTable, std::__1::allocator<NSCam::v3::pipeline::policy::pipelinesetting::MediatorTable> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting13MediatorTableENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting11PolicyTableENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::pipelinesetting::PolicyTable, std::__1::allocator<NSCam::v3::pipeline::policy::pipelinesetting::PolicyTable> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting11PolicyTableENS_9allocatorIS6_EEEE;

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy18PipelineStaticInfoENS_9allocatorIS5_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::PipelineStaticInfo, std::__1::allocator<NSCam::v3::pipeline::policy::PipelineStaticInfo> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy18PipelineStaticInfoENS_9allocatorIS5_EEEE;

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: end */
/* Demangled: end */
extern void* end;

/* Symbol: _ZNSt3__110shared_ptrIKN5NSCam2v38pipeline6policy25PipelineUserConfigurationEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::v3::pipeline::policy::PipelineUserConfiguration const>::~shared_ptr() */
int _ZNSt3__110shared_ptrIKN5NSCam2v38pipeline6policy25PipelineUserConfigurationEED2Ev(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting11PolicyTableENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::pipelinesetting::PolicyTable, std::__1::allocator<NSCam::v3::pipeline::policy::pipelinesetting::PolicyTable> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting11PolicyTableENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_ */
/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int const&>(int const&) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting13MediatorTableENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::pipelinesetting::MediatorTable, std::__1::allocator<NSCam::v3::pipeline::policy::pipelinesetting::MediatorTable> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting13MediatorTableENS_9allocatorIS6_EEEE;

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKCAM_PIPELINEPOLICY_FACTORY_H */

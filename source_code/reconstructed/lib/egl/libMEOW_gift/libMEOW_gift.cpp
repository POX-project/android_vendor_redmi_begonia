/*
 * Reverse-Engineered Source for: libMEOW_gift.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libMEOW_gift"

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
#include "libMEOW_gift.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: SDAlgoBase::Detect() */
extern "C" __attribute__((visibility("default"))) int _ZN10SDAlgoBase6DetectEv(void) {
    ALOGD("_ZN10SDAlgoBase6DetectEv() called");
    return 0;
}

/* Demangled: DbgSDAlgoQACheckEnable::ShowES2(SDAppType) */
extern "C" __attribute__((visibility("default"))) int _ZN22DbgSDAlgoQACheckEnable7ShowES2E9SDAppType(void) {
    ALOGD("_ZN22DbgSDAlgoQACheckEnable7ShowES2E9SDAppType() called");
    return 0;
}

/* Exported Object: vtable for DynamicRESAlgoFusion */
extern "C" __attribute__((visibility("default"))) void* _ZTV20DynamicRESAlgoFusion = NULL;

/* Demangled: SDAlgoListBasedStatistic::~SDAlgoListBasedStatistic() */
extern "C" __attribute__((visibility("default"))) int _ZN24SDAlgoListBasedStatisticD2Ev(void) {
    ALOGD("_ZN24SDAlgoListBasedStatisticD2Ev() called");
    return 0;
}

/* Demangled: MBXAlphabet::DrawAlphabetString(SimpleRenderer*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*, float const*, float const*, float const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11MBXAlphabet18DrawAlphabetStringEP14SimpleRendererPKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEPKfSC_SC_(void) {
    ALOGD("_ZN11MBXAlphabet18DrawAlphabetStringEP14SimpleRendererPKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEPKfSC_SC_() called");
    return 0;
}

/* Exported Object: typeinfo for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt3__113basic_filebufIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: typeinfo for MBXDigits */
extern "C" __attribute__((visibility("default"))) void* _ZTI9MBXDigits = NULL;

/* Demangled: DbgSDAlgoQAEnable::~DbgSDAlgoQAEnable() */
extern "C" __attribute__((visibility("default"))) int _ZN17DbgSDAlgoQAEnableD0Ev(void) {
    ALOGD("_ZN17DbgSDAlgoQAEnableD0Ev() called");
    return 0;
}

/* Demangled: DbgTextureReplaceImpl::~DbgTextureReplaceImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN21DbgTextureReplaceImplD1Ev(void) {
    ALOGD("_ZN21DbgTextureReplaceImplD1Ev() called");
    return 0;
}

/* Exported Object: gNativeWindowTable */
extern "C" __attribute__((visibility("default"))) void* gNativeWindowTable = NULL;

/* Exported Object: typeinfo for DbgGLContext */
extern "C" __attribute__((visibility("default"))) void* _ZTI12DbgGLContext = NULL;

/* Demangled: DynamicRESAlgoSmokeShader::ModifyGetProgramBinary(unsigned int, int, void*, void**) */
extern "C" __attribute__((visibility("default"))) int _ZN25DynamicRESAlgoSmokeShader22ModifyGetProgramBinaryEjiPvPS0_(void) {
    ALOGD("_ZN25DynamicRESAlgoSmokeShader22ModifyGetProgramBinaryEjiPvPS0_() called");
    return 0;
}

/* Demangled: DynamicRESActorDefaultFBO::GetFinalSlotIndex(unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN25DynamicRESActorDefaultFBO17GetFinalSlotIndexEjb(void) {
    ALOGD("_ZN25DynamicRESActorDefaultFBO17GetFinalSlotIndexEjb() called");
    return 0;
}

/* Demangled: MBXStateBlock::MBXStateBlock(MBXRect const&) */
extern "C" __attribute__((visibility("default"))) int _ZN13MBXStateBlockC1ERK7MBXRect(void) {
    ALOGD("_ZN13MBXStateBlockC1ERK7MBXRect() called");
    return 0;
}

/* Demangled: DbgSDAlgoSimple::ShowES2(SDAppType) */
extern "C" __attribute__((visibility("default"))) int _ZN15DbgSDAlgoSimple7ShowES2E9SDAppType(void) {
    ALOGD("_ZN15DbgSDAlgoSimple7ShowES2E9SDAppType() called");
    return 0;
}

/* Demangled: FramebufferSelection::IsCompleletedFramebuffer(unsigned int, framebuffer_info const&) */
extern "C" __attribute__((visibility("default"))) int _ZN20FramebufferSelection24IsCompleletedFramebufferEjRK16framebuffer_info(void) {
    ALOGD("_ZN20FramebufferSelection24IsCompleletedFramebufferEjRK16framebuffer_info() called");
    return 0;
}

/* Demangled: TextureReplaceFactory::NewAlgoInstance(TextureReplaceFactory::DyRESAlgoMenu, GLContextInfo&, DynamicRESAlgoBase*) */
extern "C" __attribute__((visibility("default"))) int _ZN21TextureReplaceFactory15NewAlgoInstanceENS_13DyRESAlgoMenuER13GLContextInfoP18DynamicRESAlgoBase(void) {
    ALOGD("_ZN21TextureReplaceFactory15NewAlgoInstanceENS_13DyRESAlgoMenuER13GLContextInfoP18DynamicRESAlgoBase() called");
    return 0;
}

/* Demangled: glExtHwuiHintMTK */
extern "C" __attribute__((visibility("default"))) int glExtHwuiHintMTK(void) {
    ALOGD("glExtHwuiHintMTK() called");
    return 0;
}

/* Demangled: ARCState::GetIniFilePath(char const* const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8ARCState14GetIniFilePathEPKPKcj(void) {
    ALOGD("_ZN8ARCState14GetIniFilePathEPKPKcj() called");
    return 0;
}

/* Demangled: ARCTouchEventDispatcher::InsertListener(ARCEventListener*) */
extern "C" __attribute__((visibility("default"))) int _ZN23ARCTouchEventDispatcher14InsertListenerEP16ARCEventListener(void) {
    ALOGD("_ZN23ARCTouchEventDispatcher14InsertListenerEP16ARCEventListener() called");
    return 0;
}

/* Demangled: SDActorFpsController::SDActorFpsController() */
extern "C" __attribute__((visibility("default"))) int _ZN20SDActorFpsControllerC1Ev(void) {
    ALOGD("_ZN20SDActorFpsControllerC1Ev() called");
    return 0;
}

/* Demangled: ARCState::SetGiFTParameters(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8ARCState17SetGiFTParametersEPKcj(void) {
    ALOGD("_ZN8ARCState17SetGiFTParametersEPKcj() called");
    return 0;
}

/* Demangled: MBXContainer::MBXContainer() */
extern "C" __attribute__((visibility("default"))) int _ZN12MBXContainerC1Ev(void) {
    ALOGD("_ZN12MBXContainerC1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to DbgSDAlgoFull::~DbgSDAlgoFull() */
extern "C" __attribute__((visibility("default"))) int _ZThn172_N13DbgSDAlgoFullD0Ev(void) {
    ALOGD("_ZThn172_N13DbgSDAlgoFullD0Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::sync() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv() called");
    return 0;
}

/* Demangled: SDActorFpsController::~SDActorFpsController() */
extern "C" __attribute__((visibility("default"))) int _ZN20SDActorFpsControllerD2Ev(void) {
    ALOGD("_ZN20SDActorFpsControllerD2Ev() called");
    return 0;
}

/* Demangled: SDAlgoUniformSmooth::UpdateFrameData(GLFrameData const&) */
extern "C" __attribute__((visibility("default"))) int _ZN19SDAlgoUniformSmooth15UpdateFrameDataERK11GLFrameData(void) {
    ALOGD("_ZN19SDAlgoUniformSmooth15UpdateFrameDataERK11GLFrameData() called");
    return 0;
}

/* Exported Object: vtable for oppoConfigFromService */
extern "C" __attribute__((visibility("default"))) void* _ZTV21oppoConfigFromService = NULL;

/* Demangled: ARCState::FlushProfilingMode() */
extern "C" __attribute__((visibility("default"))) int _ZN8ARCState18FlushProfilingModeEv(void) {
    ALOGD("_ZN8ARCState18FlushProfilingModeEv() called");
    return 0;
}

/* Demangled: ARCState::Exists(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN8ARCState6ExistsEPKc(void) {
    ALOGD("_ZN8ARCState6ExistsEPKc() called");
    return 0;
}

/* Demangled: GLContextInfo::BindFramebuffer(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN13GLContextInfo15BindFramebufferEjj(void) {
    ALOGD("_ZN13GLContextInfo15BindFramebufferEjj() called");
    return 0;
}

/* Demangled: DynamicRESActorRenderpassFBO::~DynamicRESActorRenderpassFBO() */
extern "C" __attribute__((visibility("default"))) int _ZN28DynamicRESActorRenderpassFBOD2Ev(void) {
    ALOGD("_ZN28DynamicRESActorRenderpassFBOD2Ev() called");
    return 0;
}

/* Demangled: android::Singleton<SDActorFpsLibManager>::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI20SDActorFpsLibManagerE11getInstanceEv(void) {
    ALOGD("_ZN7android9SingletonI20SDActorFpsLibManagerE11getInstanceEv() called");
    return 0;
}

/* Demangled: ARCState::GetGiFT2Parameters(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8ARCState18GetGiFT2ParametersEPNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES7_(void) {
    ALOGD("_ZNK8ARCState18GetGiFT2ParametersEPNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES7_() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<char const*, void*>, std::__1::__map_value_compare<char const*, std::__1::__value_type<char const*, void*>, ARC_GLUE::char_cmp, true>, std::__1::allocator<std::__1::__value_type<char const*, void*> > >::__find_equal<char const*>(std::__1::__tree_const_iterator<std::__1::__value_type<char const*, void*>, std::__1::__tree_node<std::__1::__value_type<char const*, void*>, void*>*, int>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, char const* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIPKcPvEENS_19__map_value_compareIS3_S5_N8ARC_GLUE8char_cmpELb1EEENS_9allocatorIS5_EEE12__find_equalIS3_EERPNS_16__tree_node_baseIS4_EENS_21__tree_const_iteratorIS5_PNS_11__tree_nodeIS5_S4_EEiEERPNS_15__tree_end_nodeISG_EESH_RKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIPKcPvEENS_19__map_value_compareIS3_S5_N8ARC_GLUE8char_cmpELb1EEENS_9allocatorIS5_EEE12__find_equalIS3_EERPNS_16__tree_node_baseIS4_EENS_21__tree_const_iteratorIS5_PNS_11__tree_nodeIS5_S4_EEiEERPNS_15__tree_end_nodeISG_EESH_RKT_() called");
    return 0;
}

/* Demangled: MBXContainer::~MBXContainer() */
extern "C" __attribute__((visibility("default"))) int _ZN12MBXContainerD2Ev(void) {
    ALOGD("_ZN12MBXContainerD2Ev() called");
    return 0;
}

/* Demangled: glDrawRangeElementsBaseVertexEXT */
extern "C" __attribute__((visibility("default"))) int glDrawRangeElementsBaseVertexEXT(void) {
    ALOGD("glDrawRangeElementsBaseVertexEXT() called");
    return 0;
}

/* Demangled: ARCState::GetZygoteProcessName() */
extern "C" __attribute__((visibility("default"))) int _ZN8ARCState20GetZygoteProcessNameEv(void) {
    ALOGD("_ZN8ARCState20GetZygoteProcessNameEv() called");
    return 0;
}

/* Demangled: DbgSDAlgoMBoxUtility::~DbgSDAlgoMBoxUtility() */
extern "C" __attribute__((visibility("default"))) int _ZN20DbgSDAlgoMBoxUtilityD1Ev(void) {
    ALOGD("_ZN20DbgSDAlgoMBoxUtilityD1Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void) {
    ALOGD("_ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::GetProgramBinary(unsigned int, int, int*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl16GetProgramBinaryEjiPiPv(void) {
    ALOGD("_ZN18TextureReplaceImpl16GetProgramBinaryEjiPiPv() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: SDAlgoBase::sFpsSmoothFactor */
extern "C" __attribute__((visibility("default"))) void* _ZN10SDAlgoBase16sFpsSmoothFactorE = NULL;

/* Demangled: glMultiDrawElementsEXT */
extern "C" __attribute__((visibility("default"))) int glMultiDrawElementsEXT(void) {
    ALOGD("glMultiDrawElementsEXT() called");
    return 0;
}

/* Exported Object: android::Singleton<ARCState>::sInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9SingletonI8ARCStateE9sInstanceE = NULL;

/* Demangled: DbgSDAlgoQADisable::ShowES2(SDAppType) */
extern "C" __attribute__((visibility("default"))) int _ZN18DbgSDAlgoQADisable7ShowES2E9SDAppType(void) {
    ALOGD("_ZN18DbgSDAlgoQADisable7ShowES2E9SDAppType() called");
    return 0;
}

/* Demangled: DbgSDAlgoQATxDisable::ShowES1(SDAppType) */
extern "C" __attribute__((visibility("default"))) int _ZN20DbgSDAlgoQATxDisable7ShowES1E9SDAppType(void) {
    ALOGD("_ZN20DbgSDAlgoQATxDisable7ShowES1E9SDAppType() called");
    return 0;
}

/* Demangled: SystemInfo::UpdateGPUInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN10SystemInfo13UpdateGPUInfoEv(void) {
    ALOGD("_ZN10SystemInfo13UpdateGPUInfoEv() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::~TextureReplaceImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImplD1Ev(void) {
    ALOGD("_ZN18TextureReplaceImplD1Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::imbue(std::__1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE() called");
    return 0;
}

/* Demangled: MBXPoint::MBXPoint(MBXPoint const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8MBXPointC1ERKS_(void) {
    ALOGD("_ZN8MBXPointC1ERKS_() called");
    return 0;
}

/* Exported Object: typeinfo for MBXProgressBar */
extern "C" __attribute__((visibility("default"))) void* _ZTI14MBXProgressBar = NULL;

/* Demangled: DynamicRESActorRenderpassFBO::SetDrawBuffersEnd(int, unsigned int const*) */
extern "C" __attribute__((visibility("default"))) int _ZN28DynamicRESActorRenderpassFBO17SetDrawBuffersEndEiPKj(void) {
    ALOGD("_ZN28DynamicRESActorRenderpassFBO17SetDrawBuffersEndEiPKj() called");
    return 0;
}

/* Demangled: SDAlgoSlowMotion::DetermineSceneType() */
extern "C" __attribute__((visibility("default"))) int _ZN16SDAlgoSlowMotion18DetermineSceneTypeEv(void) {
    ALOGD("_ZN16SDAlgoSlowMotion18DetermineSceneTypeEv() called");
    return 0;
}

/* Exported Object: typeinfo for arcBuiltinConfig */
extern "C" __attribute__((visibility("default"))) void* _ZTI16arcBuiltinConfig = NULL;

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*, int>, std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*, int> > std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__equal_range_multi<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE19__equal_range_multiIS7_EENS_4pairINS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEESM_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE19__equal_range_multiIS7_EENS_4pairINS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEESM_EERKT_() called");
    return 0;
}

/* Demangled: DbgSDAlgoAEDisable::NotifyTouchEvent(TouchEventHistory const*) */
extern "C" __attribute__((visibility("default"))) int _ZN18DbgSDAlgoAEDisable16NotifyTouchEventEPK17TouchEventHistory(void) {
    ALOGD("_ZN18DbgSDAlgoAEDisable16NotifyTouchEventEPK17TouchEventHistory() called");
    return 0;
}

/* Exported Object: vtable for DbgSDAlgoFull */
extern "C" __attribute__((visibility("default"))) void* _ZTV13DbgSDAlgoFull = NULL;

/* Demangled: SystemInfo::~SystemInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN10SystemInfoD1Ev(void) {
    ALOGD("_ZN10SystemInfoD1Ev() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::SetTexParameteriEnd(unsigned int, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl19SetTexParameteriEndEjji(void) {
    ALOGD("_ZN18TextureReplaceImpl19SetTexParameteriEndEjji() called");
    return 0;
}

/* Demangled: glDrawArraysInstancedEXT */
extern "C" __attribute__((visibility("default"))) int glDrawArraysInstancedEXT(void) {
    ALOGD("glDrawArraysInstancedEXT() called");
    return 0;
}

/* Exported Object: typeinfo name for SimpleRenderer */
extern "C" __attribute__((visibility("default"))) void* _ZTS14SimpleRenderer = NULL;

/* Demangled: DynamicRESAlgoDVFSPolicy::~DynamicRESAlgoDVFSPolicy() */
extern "C" __attribute__((visibility("default"))) int _ZN24DynamicRESAlgoDVFSPolicyD1Ev(void) {
    ALOGD("_ZN24DynamicRESAlgoDVFSPolicyD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, ANativeWindow*>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, ANativeWindow*>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, ANativeWindow*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, ANativeWindow*>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjP13ANativeWindowEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjP13ANativeWindowEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE() called");
    return 0;
}

/* Demangled: FramebufferSelection::DeleteFramebuffers(int, unsigned int const*) */
extern "C" __attribute__((visibility("default"))) int _ZN20FramebufferSelection18DeleteFramebuffersEiPKj(void) {
    ALOGD("_ZN20FramebufferSelection18DeleteFramebuffersEiPKj() called");
    return 0;
}

/* Demangled: DynamicRESActorRenderpassFBO::DispatchComputeEnd() */
extern "C" __attribute__((visibility("default"))) int _ZN28DynamicRESActorRenderpassFBO18DispatchComputeEndEv(void) {
    ALOGD("_ZN28DynamicRESActorRenderpassFBO18DispatchComputeEndEv() called");
    return 0;
}

/* Exported Object: typeinfo name for DynamicRESActorFusion */
extern "C" __attribute__((visibility("default"))) void* _ZTS21DynamicRESActorFusion = NULL;

/* Demangled: DbgSDAlgoMBoxUtility::GraphInit() */
extern "C" __attribute__((visibility("default"))) int _ZN20DbgSDAlgoMBoxUtility9GraphInitEv(void) {
    ALOGD("_ZN20DbgSDAlgoMBoxUtility9GraphInitEv() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: DynamicRESAlgoComputeShader::DispatchCompute() */
extern "C" __attribute__((visibility("default"))) int _ZN27DynamicRESAlgoComputeShader15DispatchComputeEv(void) {
    ALOGD("_ZN27DynamicRESAlgoComputeShader15DispatchComputeEv() called");
    return 0;
}

/* Demangled: DynamicRESActorRenderpassFBO::SetTexParameterfvEnd(unsigned int, unsigned int, float const*) */
extern "C" __attribute__((visibility("default"))) int _ZN28DynamicRESActorRenderpassFBO20SetTexParameterfvEndEjjPKf(void) {
    ALOGD("_ZN28DynamicRESActorRenderpassFBO20SetTexParameterfvEndEjjPKf() called");
    return 0;
}

/* Demangled: MBXComponent::GetColor(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK12MBXComponent8GetColorEj(void) {
    ALOGD("_ZNK12MBXComponent8GetColorEj() called");
    return 0;
}

/* Demangled: ConvertAttachmentIndexToString(int) */
extern "C" __attribute__((visibility("default"))) int _Z30ConvertAttachmentIndexToStringi(void) {
    ALOGD("_Z30ConvertAttachmentIndexToStringi() called");
    return 0;
}

/* Demangled: DynamicRESAlgoFusion::DispatchCompute() */
extern "C" __attribute__((visibility("default"))) int _ZN20DynamicRESAlgoFusion15DispatchComputeEv(void) {
    ALOGD("_ZN20DynamicRESAlgoFusion15DispatchComputeEv() called");
    return 0;
}

/* Demangled: DynamicRESActorDefaultFBO::ReadPixelsEnd() */
extern "C" __attribute__((visibility("default"))) int _ZN25DynamicRESActorDefaultFBO13ReadPixelsEndEv(void) {
    ALOGD("_ZN25DynamicRESActorDefaultFBO13ReadPixelsEndEv() called");
    return 0;
}

/* Demangled: SDAlgoListBasedStatistic::SDAlgoListBasedStatistic() */
extern "C" __attribute__((visibility("default"))) int _ZN24SDAlgoListBasedStatisticC2Ev(void) {
    ALOGD("_ZN24SDAlgoListBasedStatisticC2Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<arcBuiltinConfig::DeviceId, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > > const>, std::__1::__map_value_compare<arcBuiltinConfig::DeviceId, std::__1::__value_type<arcBuiltinConfig::DeviceId, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > > const>, std::__1::less<arcBuiltinConfig::DeviceId>, true>, std::__1::allocator<std::__1::__value_type<arcBuiltinConfig::DeviceId, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > > const> > >::destroy(std::__1::__tree_node<std::__1::__value_type<arcBuiltinConfig::DeviceId, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > > const>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIN16arcBuiltinConfig8DeviceIdEKNS_3mapINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEESA_NS_4lessISA_EENS8_INS_4pairIKSA_SA_EEEEEEEENS_19__map_value_compareIS3_SJ_NSB_IS3_EELb1EEENS8_ISJ_EEE7destroyEPNS_11__tree_nodeISJ_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIN16arcBuiltinConfig8DeviceIdEKNS_3mapINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEESA_NS_4lessISA_EENS8_INS_4pairIKSA_SA_EEEEEEEENS_19__map_value_compareIS3_SJ_NSB_IS3_EELb1EEENS8_ISJ_EEE7destroyEPNS_11__tree_nodeISJ_PvEE() called");
    return 0;
}

/* Exported Object: ARC_GLUE::g_next_hook_tls_id */
extern "C" __attribute__((visibility("default"))) void* _ZN8ARC_GLUE18g_next_hook_tls_idE = NULL;

/* Demangled: glReadnPixels */
extern "C" __attribute__((visibility("default"))) int glReadnPixels(void) {
    ALOGD("glReadnPixels() called");
    return 0;
}

/* Demangled: eglDestroyContext */
extern "C" __attribute__((visibility("default"))) int eglDestroyContext(void) {
    ALOGD("eglDestroyContext() called");
    return 0;
}

/* Demangled: ARCCreateContext(unsigned int, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _Z16ARCCreateContextjji(void) {
    ALOGD("_Z16ARCCreateContextjji() called");
    return 0;
}

/* Demangled: glActiveTexture */
extern "C" __attribute__((visibility("default"))) int glActiveTexture(void) {
    ALOGD("glActiveTexture() called");
    return 0;
}

/* Demangled: glDrawElementsInstancedBaseVertex */
extern "C" __attribute__((visibility("default"))) int glDrawElementsInstancedBaseVertex(void) {
    ALOGD("glDrawElementsInstancedBaseVertex() called");
    return 0;
}

/* Exported Object: DbgTextureReplaceImpl::m_switchOnOff */
extern "C" __attribute__((visibility("default"))) void* _ZN21DbgTextureReplaceImpl13m_switchOnOffE = NULL;

/* Demangled: DbgTextureReplaceImpl::UpdateTextureReplaceState() */
extern "C" __attribute__((visibility("default"))) int _ZN21DbgTextureReplaceImpl25UpdateTextureReplaceStateEv(void) {
    ALOGD("_ZN21DbgTextureReplaceImpl25UpdateTextureReplaceStateEv() called");
    return 0;
}

/* Demangled: DynamicRESActorFusion::~DynamicRESActorFusion() */
extern "C" __attribute__((visibility("default"))) int _ZN21DynamicRESActorFusionD0Ev(void) {
    ALOGD("_ZN21DynamicRESActorFusionD0Ev() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: MBXDigits::MBXDigits(MBXRect const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9MBXDigitsC2ERK7MBXRect(void) {
    ALOGD("_ZN9MBXDigitsC2ERK7MBXRect() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::GenerateMipmap(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl14GenerateMipmapEj(void) {
    ALOGD("_ZN18TextureReplaceImpl14GenerateMipmapEj() called");
    return 0;
}

/* Demangled: glDeleteTextures */
extern "C" __attribute__((visibility("default"))) int glDeleteTextures(void) {
    ALOGD("glDeleteTextures() called");
    return 0;
}

/* Demangled: SDAlgoFixFps::~SDAlgoFixFps() */
extern "C" __attribute__((visibility("default"))) int _ZN12SDAlgoFixFpsD0Ev(void) {
    ALOGD("_ZN12SDAlgoFixFpsD0Ev() called");
    return 0;
}

/* Demangled: DbgSDAlgoQAEnable::~DbgSDAlgoQAEnable() */
extern "C" __attribute__((visibility("default"))) int _ZN17DbgSDAlgoQAEnableD1Ev(void) {
    ALOGD("_ZN17DbgSDAlgoQAEnableD1Ev() called");
    return 0;
}

/* Exported Object: vtable for DbgSDAlgoQAEnable */
extern "C" __attribute__((visibility("default"))) void* _ZTV17DbgSDAlgoQAEnable = NULL;

/* Demangled: std::__1::vector<texture_unit, std::__1::allocator<texture_unit> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI12texture_unitNS_9allocatorIS1_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorI12texture_unitNS_9allocatorIS1_EEE8__appendEj() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::AddRelatedSet(TextureReplaceImpl::RelatedSet&) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl13AddRelatedSetERNS_10RelatedSetE(void) {
    ALOGD("_ZN18TextureReplaceImpl13AddRelatedSetERNS_10RelatedSetE() called");
    return 0;
}

/* Demangled: DbgTextureReplaceImpl::~DbgTextureReplaceImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN21DbgTextureReplaceImplD2Ev(void) {
    ALOGD("_ZN21DbgTextureReplaceImplD2Ev() called");
    return 0;
}

/* Demangled: DynamicRESActorRenderpassFBO::SetFramebufferParameterEnd(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN28DynamicRESActorRenderpassFBO26SetFramebufferParameterEndEj(void) {
    ALOGD("_ZN28DynamicRESActorRenderpassFBO26SetFramebufferParameterEndEj() called");
    return 0;
}

/* Exported Object: SDAlgoListBasedStatistic::sP2VBOBufferChangeRate */
extern "C" __attribute__((visibility("default"))) void* _ZN24SDAlgoListBasedStatistic22sP2VBOBufferChangeRateE = NULL;

/* Demangled: TextureReplaceImpl::CreateDefaultFramebufferMapping() */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl31CreateDefaultFramebufferMappingEv(void) {
    ALOGD("_ZN18TextureReplaceImpl31CreateDefaultFramebufferMappingEv() called");
    return 0;
}

/* Exported Object: SDAlgoListBasedStatistic::sP2NonVBOUniformChangeRate */
extern "C" __attribute__((visibility("default"))) void* _ZN24SDAlgoListBasedStatistic26sP2NonVBOUniformChangeRateE = NULL;

/* Demangled: arcConfigFromQTService::~arcConfigFromQTService() */
extern "C" __attribute__((visibility("default"))) int _ZN22arcConfigFromQTServiceD0Ev(void) {
    ALOGD("_ZN22arcConfigFromQTServiceD0Ev() called");
    return 0;
}

/* Demangled: oppoConfigFromService::GetOptionDFPS(char*, unsigned int, char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK21oppoConfigFromService13GetOptionDFPSEPcjPKc(void) {
    ALOGD("_ZNK21oppoConfigFromService13GetOptionDFPSEPcjPKc() called");
    return 0;
}

/* Demangled: ARCTouchEventDispatcher::RemoveListener(ARCEventListener*) */
extern "C" __attribute__((visibility("default"))) int _ZN23ARCTouchEventDispatcher14RemoveListenerEP16ARCEventListener(void) {
    ALOGD("_ZN23ARCTouchEventDispatcher14RemoveListenerEP16ARCEventListener() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<unsigned int, texture_info>, std::__1::__tree_node<std::__1::__value_type<unsigned int, texture_info>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<unsigned int, texture_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, texture_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, texture_info> > >::__emplace_unique_impl<std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int&>, std::__1::tuple<unsigned int&, int&, int&, int&, int&, int&, int&, unsigned int&, unsigned int&> >(std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int&>&&, std::__1::tuple<unsigned int&, int&, int&, int&, int&, int&, int&, unsigned int&, unsigned int&>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIj12texture_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE21__emplace_unique_implIJRKNS_21piecewise_construct_tENS_5tupleIJRjEEENSF_IJSG_RiSI_SI_SI_SI_SI_SG_SG_EEEEEENS_4pairINS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEbEEDpOT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIj12texture_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE21__emplace_unique_implIJRKNS_21piecewise_construct_tENS_5tupleIJRjEEENSF_IJSG_RiSI_SI_SI_SI_SI_SG_SG_EEEEEENS_4pairINS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEbEEDpOT_() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::DeleteHookRenderbuffer(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl22DeleteHookRenderbufferEjj(void) {
    ALOGD("_ZN18TextureReplaceImpl22DeleteHookRenderbufferEjj() called");
    return 0;
}

/* Exported Object: typeinfo name for DynamicRESAlgoSwitch */
extern "C" __attribute__((visibility("default"))) void* _ZTS20DynamicRESAlgoSwitch = NULL;

/* Demangled: SDAlgoFactory::NewInstance(SDAlgoFactory::IDbgSDAlgoMenu) */
extern "C" __attribute__((visibility("default"))) int _ZN13SDAlgoFactory11NewInstanceENS_14IDbgSDAlgoMenuE(void) {
    ALOGD("_ZN13SDAlgoFactory11NewInstanceENS_14IDbgSDAlgoMenuE() called");
    return 0;
}

/* Demangled: SDActorFpsController::SDActorFpsController() */
extern "C" __attribute__((visibility("default"))) int _ZN20SDActorFpsControllerC2Ev(void) {
    ALOGD("_ZN20SDActorFpsControllerC2Ev() called");
    return 0;
}

/* Demangled: ARCState::~ARCState() */
extern "C" __attribute__((visibility("default"))) int _ZN8ARCStateD1Ev(void) {
    ALOGD("_ZN8ARCStateD1Ev() called");
    return 0;
}

/* Demangled: logCallStack(char const*) */
extern "C" __attribute__((visibility("default"))) int _Z12logCallStackPKc(void) {
    ALOGD("_Z12logCallStackPKc() called");
    return 0;
}

/* Demangled: MBXRect::MBXRect(MBXRect const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7MBXRectC1ERKS_(void) {
    ALOGD("_ZN7MBXRectC1ERKS_() called");
    return 0;
}

/* Demangled: DbgDynamicFpsImpl::~DbgDynamicFpsImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN17DbgDynamicFpsImplD0Ev(void) {
    ALOGD("_ZN17DbgDynamicFpsImplD0Ev() called");
    return 0;
}

/* Demangled: glBufferData */
extern "C" __attribute__((visibility("default"))) int glBufferData(void) {
    ALOGD("glBufferData() called");
    return 0;
}

/* Demangled: glTexStorage2D */
extern "C" __attribute__((visibility("default"))) int glTexStorage2D(void) {
    ALOGD("glTexStorage2D() called");
    return 0;
}

/* Demangled: MBXContainer::MBXContainer() */
extern "C" __attribute__((visibility("default"))) int _ZN12MBXContainerC2Ev(void) {
    ALOGD("_ZN12MBXContainerC2Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to DbgSDAlgoFull::~DbgSDAlgoFull() */
extern "C" __attribute__((visibility("default"))) int _ZThn172_N13DbgSDAlgoFullD1Ev(void) {
    ALOGD("_ZThn172_N13DbgSDAlgoFullD1Ev() called");
    return 0;
}

/* Demangled: DbgSDAlgoMBoxUtility::DbgSDAlgoMBoxUtility() */
extern "C" __attribute__((visibility("default"))) int _ZN20DbgSDAlgoMBoxUtilityC1Ev(void) {
    ALOGD("_ZN20DbgSDAlgoMBoxUtilityC1Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<SharedObjectManager, std::__1::allocator<SharedObjectManager> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceI19SharedObjectManagerNS_9allocatorIS1_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceI19SharedObjectManagerNS_9allocatorIS1_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: SDAlgoSlowMotion::EstimateUniformWithoutTime(float*) */
extern "C" __attribute__((visibility("default"))) int _ZN16SDAlgoSlowMotion26EstimateUniformWithoutTimeEPf(void) {
    ALOGD("_ZN16SDAlgoSlowMotion26EstimateUniformWithoutTimeEPf() called");
    return 0;
}

/* Exported Object: typeinfo for perfConfigFromService */
extern "C" __attribute__((visibility("default"))) void* _ZTI21perfConfigFromService = NULL;

/* Demangled: glTexParameterfv */
extern "C" __attribute__((visibility("default"))) int glTexParameterfv(void) {
    ALOGD("glTexParameterfv() called");
    return 0;
}

/* Demangled: DbgSDAlgoMBoxUtility::~DbgSDAlgoMBoxUtility() */
extern "C" __attribute__((visibility("default"))) int _ZN20DbgSDAlgoMBoxUtilityD2Ev(void) {
    ALOGD("_ZN20DbgSDAlgoMBoxUtilityD2Ev() called");
    return 0;
}

/* Exported Object: typeinfo for DbgSDAlgoQATxEnable */
extern "C" __attribute__((visibility("default"))) void* _ZTI19DbgSDAlgoQATxEnable = NULL;

/* Demangled: SystemInfo::SystemInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN10SystemInfoC1Ev(void) {
    ALOGD("_ZN10SystemInfoC1Ev() called");
    return 0;
}

/* Demangled: DynamicResImpl::~DynamicResImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN14DynamicResImplD0Ev(void) {
    ALOGD("_ZN14DynamicResImplD0Ev() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::~TextureReplaceImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImplD2Ev(void) {
    ALOGD("_ZN18TextureReplaceImplD2Ev() called");
    return 0;
}

/* Exported Object: vtable for DbgDynamicFpsImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTV17DbgDynamicFpsImpl = NULL;

/* Demangled: MBXColor::~MBXColor() */
extern "C" __attribute__((visibility("default"))) int _ZN8MBXColorD1Ev(void) {
    ALOGD("_ZN8MBXColorD1Ev() called");
    return 0;
}

/* Demangled: ARCUnregisterGLESv1Hook */
extern "C" __attribute__((visibility("default"))) int ARCUnregisterGLESv1Hook(void) {
    ALOGD("ARCUnregisterGLESv1Hook() called");
    return 0;
}

/* Demangled: SystemInfo::~SystemInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN10SystemInfoD2Ev(void) {
    ALOGD("_ZN10SystemInfoD2Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekpos(std::__1::fpos<mbstate_t>, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj() called");
    return 0;
}

/* Demangled: DbgGLContext::SwapBuffersBegin() */
extern "C" __attribute__((visibility("default"))) int _ZN12DbgGLContext16SwapBuffersBeginEv(void) {
    ALOGD("_ZN12DbgGLContext16SwapBuffersBeginEv() called");
    return 0;
}

/* Demangled: DynamicRESAlgoDVFSPolicy::~DynamicRESAlgoDVFSPolicy() */
extern "C" __attribute__((visibility("default"))) int _ZN24DynamicRESAlgoDVFSPolicyD2Ev(void) {
    ALOGD("_ZN24DynamicRESAlgoDVFSPolicyD2Ev() called");
    return 0;
}

/* Demangled: arcConfigFromFile::GetOption(char*, int, char const*, char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK17arcConfigFromFile9GetOptionEPciPKcS2_(void) {
    ALOGD("_ZNK17arcConfigFromFile9GetOptionEPciPKcS2_() called");
    return 0;
}

/* Demangled: DbgSDAlgoQATxEnable::~DbgSDAlgoQATxEnable() */
extern "C" __attribute__((visibility("default"))) int _ZN19DbgSDAlgoQATxEnableD0Ev(void) {
    ALOGD("_ZN19DbgSDAlgoQATxEnableD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, renderbuffer_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, renderbuffer_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, renderbuffer_info> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, renderbuffer_info>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIj17renderbuffer_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIj17renderbuffer_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, MBXColor>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, MBXColor>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, MBXColor> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, MBXColor>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIj8MBXColorEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIj8MBXColorEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE() called");
    return 0;
}

/* Demangled: DbgSDAlgoSimple::~DbgSDAlgoSimple() */
extern "C" __attribute__((visibility("default"))) int _ZN15DbgSDAlgoSimpleD0Ev(void) {
    ALOGD("_ZN15DbgSDAlgoSimpleD0Ev() called");
    return 0;
}

/* Demangled: DbgSDAlgoQAEnable::ShowES2(SDAppType) */
extern "C" __attribute__((visibility("default"))) int _ZN17DbgSDAlgoQAEnable7ShowES2E9SDAppType(void) {
    ALOGD("_ZN17DbgSDAlgoQAEnable7ShowES2E9SDAppType() called");
    return 0;
}

/* Demangled: glDrawElementsInstancedBaseVertexEXT */
extern "C" __attribute__((visibility("default"))) int glDrawElementsInstancedBaseVertexEXT(void) {
    ALOGD("glDrawElementsInstancedBaseVertexEXT() called");
    return 0;
}

/* Demangled: glFramebufferTexture2DMultisampleIMG */
extern "C" __attribute__((visibility("default"))) int glFramebufferTexture2DMultisampleIMG(void) {
    ALOGD("glFramebufferTexture2DMultisampleIMG() called");
    return 0;
}

/* Exported Object: typeinfo name for DbgSDAlgoDisable */
extern "C" __attribute__((visibility("default"))) void* _ZTS16DbgSDAlgoDisable = NULL;

/* Exported Object: vtable for DynamicRESAlgoComputeShader */
extern "C" __attribute__((visibility("default"))) void* _ZTV27DynamicRESAlgoComputeShader = NULL;

/* Demangled: ARCState::DecipherMValue(double) */
extern "C" __attribute__((visibility("default"))) int _ZN8ARCState14DecipherMValueEd(void) {
    ALOGD("_ZN8ARCState14DecipherMValueEd() called");
    return 0;
}

/* Demangled: GLContextInfo::GetAppError(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN13GLContextInfo11GetAppErrorEj(void) {
    ALOGD("_ZN13GLContextInfo11GetAppErrorEj() called");
    return 0;
}

/* Demangled: perfConfigFromService::GetOptionDFPS(char*, unsigned int, char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK21perfConfigFromService13GetOptionDFPSEPcjPKc(void) {
    ALOGD("_ZNK21perfConfigFromService13GetOptionDFPSEPcjPKc() called");
    return 0;
}

/* Demangled: ARCTouchEventDispatcher::DispatchToListeners(TouchEventHistory const*) */
extern "C" __attribute__((visibility("default"))) int _ZN23ARCTouchEventDispatcher19DispatchToListenersEPK17TouchEventHistory(void) {
    ALOGD("_ZN23ARCTouchEventDispatcher19DispatchToListenersEPK17TouchEventHistory() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, GLContext*>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, GLContext*>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, GLContext*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, GLContext*>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjP9GLContextEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjP9GLContextEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<SharedObjectManager, std::__1::allocator<SharedObjectManager> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceI19SharedObjectManagerNS_9allocatorIS1_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceI19SharedObjectManagerNS_9allocatorIS1_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::BlitFramebufferBegin(int&, int&, int&, int&, int&, int&, int&, int&, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl20BlitFramebufferBeginERiS0_S0_S0_S0_S0_S0_S0_jj(void) {
    ALOGD("_ZN18TextureReplaceImpl20BlitFramebufferBeginERiS0_S0_S0_S0_S0_S0_S0_jj() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::DeleteHookFramebuffer(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl21DeleteHookFramebufferEjj(void) {
    ALOGD("_ZN18TextureReplaceImpl21DeleteHookFramebufferEjj() called");
    return 0;
}

/* Demangled: DynamicRESAlgoSmokeShader::Detect() */
extern "C" __attribute__((visibility("default"))) int _ZN25DynamicRESAlgoSmokeShader6DetectEv(void) {
    ALOGD("_ZN25DynamicRESAlgoSmokeShader6DetectEv() called");
    return 0;
}

/* Exported Object: typeinfo for DynamicRESAlgoBase */
extern "C" __attribute__((visibility("default"))) void* _ZTI18DynamicRESAlgoBase = NULL;

/* Exported Object: typeinfo name for DynamicRESAlgoFusion */
extern "C" __attribute__((visibility("default"))) void* _ZTS20DynamicRESAlgoFusion = NULL;

/* Exported Object: SDAlgoSlowMotion::sSlowDetectTotal */
extern "C" __attribute__((visibility("default"))) void* _ZN16SDAlgoSlowMotion16sSlowDetectTotalE = NULL;

/* Demangled: glDrawTransformFeedbackInstancedEXT */
extern "C" __attribute__((visibility("default"))) int glDrawTransformFeedbackInstancedEXT(void) {
    ALOGD("glDrawTransformFeedbackInstancedEXT() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<int, _TlsData>, std::__1::__map_value_compare<int, std::__1::__value_type<int, _TlsData>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, _TlsData> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, _TlsData>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIi8_TlsDataEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIi8_TlsDataEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE() called");
    return 0;
}

/* Demangled: MBXColor::MBXColor(MBXColor const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8MBXColorC1ERKS_(void) {
    ALOGD("_ZN8MBXColorC1ERKS_() called");
    return 0;
}

/* Demangled: MBXColor::MBXColor(float, float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN8MBXColorC2Efff(void) {
    ALOGD("_ZN8MBXColorC2Efff() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::TextureReplaceImpl(GLContextInfo&, TextureReplaceImpl*) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImplC2ER13GLContextInfoPS_(void) {
    ALOGD("_ZN18TextureReplaceImplC2ER13GLContextInfoPS_() called");
    return 0;
}

/* Exported Object: eventCondition */
extern "C" __attribute__((visibility("default"))) void* eventCondition = NULL;

/* Demangled: DbgSDAlgoQAEnable::DbgSDAlgoQAEnable() */
extern "C" __attribute__((visibility("default"))) int _ZN17DbgSDAlgoQAEnableC1Ev(void) {
    ALOGD("_ZN17DbgSDAlgoQAEnableC1Ev() called");
    return 0;
}

/* Exported Object: typeinfo for TextureReplaceImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTI18TextureReplaceImpl = NULL;

/* Demangled: DynamicRESActorFusion::~DynamicRESActorFusion() */
extern "C" __attribute__((visibility("default"))) int _ZN21DynamicRESActorFusionD1Ev(void) {
    ALOGD("_ZN21DynamicRESActorFusionD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__emplace_hint_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > const&>(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*, int>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE30__emplace_hint_unique_key_argsIS7_JRKNS_4pairIKS7_S7_EEEEENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEENS_21__tree_const_iteratorIS8_SP_iEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE30__emplace_hint_unique_key_argsIS7_JRKNS_4pairIKS7_S7_EEEEENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEENS_21__tree_const_iteratorIS8_SP_iEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: glClear */
extern "C" __attribute__((visibility("default"))) int glClear(void) {
    ALOGD("glClear() called");
    return 0;
}

/* Demangled: ARCState::SetGiFT25Parameters(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8ARCState19SetGiFT25ParametersEPKcj(void) {
    ALOGD("_ZN8ARCState19SetGiFT25ParametersEPKcj() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::CreateHookFramebuffers(std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl22CreateHookFramebuffersERNSt3__16vectorIjNS0_9allocatorIjEEEE(void) {
    ALOGD("_ZN18TextureReplaceImpl22CreateHookFramebuffersERNSt3__16vectorIjNS0_9allocatorIjEEEE() called");
    return 0;
}

/* Exported Object: WL0 */
extern "C" __attribute__((visibility("default"))) void* WL0 = NULL;

/* Demangled: SDAlgoFixFps::~SDAlgoFixFps() */
extern "C" __attribute__((visibility("default"))) int _ZN12SDAlgoFixFpsD1Ev(void) {
    ALOGD("_ZN12SDAlgoFixFpsD1Ev() called");
    return 0;
}

/* Demangled: DbgSDAlgoQAEnable::~DbgSDAlgoQAEnable() */
extern "C" __attribute__((visibility("default"))) int _ZN17DbgSDAlgoQAEnableD2Ev(void) {
    ALOGD("_ZN17DbgSDAlgoQAEnableD2Ev() called");
    return 0;
}

/* Exported Object: typeinfo for DbgSDAlgoFull */
extern "C" __attribute__((visibility("default"))) void* _ZTI13DbgSDAlgoFull = NULL;

/* Demangled: android::Singleton<QTServiceClient>::~Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI15QTServiceClientED1Ev(void) {
    ALOGD("_ZN7android9SingletonI15QTServiceClientED1Ev() called");
    return 0;
}

/* Exported Object: WL1 */
extern "C" __attribute__((visibility("default"))) void* WL1 = NULL;

/* Exported Object: typeinfo name for DbgGLContext */
extern "C" __attribute__((visibility("default"))) void* _ZTS12DbgGLContext = NULL;

/* Exported Object: vtable for DbgSDAlgoQATxEnable */
extern "C" __attribute__((visibility("default"))) void* _ZTV19DbgSDAlgoQATxEnable = NULL;

/* Demangled: TextureReplaceFactory::NewInstance(TextureReplaceFactory::TxReplaceMenu, GLContextInfo&, TextureReplaceImpl*) */
extern "C" __attribute__((visibility("default"))) int _ZN21TextureReplaceFactory11NewInstanceENS_13TxReplaceMenuER13GLContextInfoP18TextureReplaceImpl(void) {
    ALOGD("_ZN21TextureReplaceFactory11NewInstanceENS_13TxReplaceMenuER13GLContextInfoP18TextureReplaceImpl() called");
    return 0;
}

/* Demangled: SharedObjectManager::SetProgramBinary(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN19SharedObjectManager16SetProgramBinaryEj(void) {
    ALOGD("_ZN19SharedObjectManager16SetProgramBinaryEj() called");
    return 0;
}

/* Demangled: DbgTextureReplaceImpl::BuildRelatedList() */
extern "C" __attribute__((visibility("default"))) int _ZN21DbgTextureReplaceImpl16BuildRelatedListEv(void) {
    ALOGD("_ZN21DbgTextureReplaceImpl16BuildRelatedListEv() called");
    return 0;
}

/* Demangled: arcConfigFromQTService::~arcConfigFromQTService() */
extern "C" __attribute__((visibility("default"))) int _ZN22arcConfigFromQTServiceD1Ev(void) {
    ALOGD("_ZN22arcConfigFromQTServiceD1Ev() called");
    return 0;
}

/* Demangled: ARCState::ARCState() */
extern "C" __attribute__((visibility("default"))) int _ZN8ARCStateC1Ev(void) {
    ALOGD("_ZN8ARCStateC1Ev() called");
    return 0;
}

/* Exported Object: WL2 */
extern "C" __attribute__((visibility("default"))) void* WL2 = NULL;

/* Exported Object: vtable for SDAlgoSlopeSmooth */
extern "C" __attribute__((visibility("default"))) void* _ZTV17SDAlgoSlopeSmooth = NULL;

/* Demangled: oppoConfigFromFile::ReadConfig(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN18oppoConfigFromFile10ReadConfigEPKc(void) {
    ALOGD("_ZN18oppoConfigFromFile10ReadConfigEPKc() called");
    return 0;
}

/* Demangled: glDrawElementsBaseVertexOES */
extern "C" __attribute__((visibility("default"))) int glDrawElementsBaseVertexOES(void) {
    ALOGD("glDrawElementsBaseVertexOES() called");
    return 0;
}

/* Exported Object: WL3 */
extern "C" __attribute__((visibility("default"))) void* WL3 = NULL;

/* Demangled: DbgGLContext::~DbgGLContext() */
extern "C" __attribute__((visibility("default"))) int _ZN12DbgGLContextD0Ev(void) {
    ALOGD("_ZN12DbgGLContextD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, MBXComponent*>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, MBXComponent*>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, MBXComponent*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, MBXComponent*>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjP12MBXComponentEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjP12MBXComponentEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE() called");
    return 0;
}

/* Demangled: ARCState::~ARCState() */
extern "C" __attribute__((visibility("default"))) int _ZN8ARCStateD2Ev(void) {
    ALOGD("_ZN8ARCStateD2Ev() called");
    return 0;
}

/* Exported Object: WL4 */
extern "C" __attribute__((visibility("default"))) void* WL4 = NULL;

/* Demangled: MBXRect::GetGeometry(float*, float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN7MBXRect11GetGeometryEPfff(void) {
    ALOGD("_ZN7MBXRect11GetGeometryEPfff() called");
    return 0;
}

/* Demangled: non-virtual thunk to DbgSDAlgoFixFps::~DbgSDAlgoFixFps() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N15DbgSDAlgoFixFpsD0Ev(void) {
    ALOGD("_ZThn8_N15DbgSDAlgoFixFpsD0Ev() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::SwapBuffers() */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl11SwapBuffersEv(void) {
    ALOGD("_ZN18TextureReplaceImpl11SwapBuffersEv() called");
    return 0;
}

/* Demangled: DbgDynamicFpsImpl::~DbgDynamicFpsImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN17DbgDynamicFpsImplD1Ev(void) {
    ALOGD("_ZN17DbgDynamicFpsImplD1Ev() called");
    return 0;
}

/* Demangled: ARCGetAttribValue(int const*, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z17ARCGetAttribValuePKiii(void) {
    ALOGD("_Z17ARCGetAttribValuePKiii() called");
    return 0;
}

/* Exported Object: WL5 */
extern "C" __attribute__((visibility("default"))) void* WL5 = NULL;

/* Demangled: non-virtual thunk to DbgSDAlgoQADisable::~DbgSDAlgoQADisable() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N18DbgSDAlgoQADisableD0Ev(void) {
    ALOGD("_ZThn8_N18DbgSDAlgoQADisableD0Ev() called");
    return 0;
}

/* Demangled: DbgDynamicResImpl::DbgDynamicResImpl(int, DynamicResImpl*) */
extern "C" __attribute__((visibility("default"))) int _ZN17DbgDynamicResImplC1EiP14DynamicResImpl(void) {
    ALOGD("_ZN17DbgDynamicResImplC1EiP14DynamicResImpl() called");
    return 0;
}

/* Demangled: DbgTextureReplaceImpl::SetDrawCall() */
extern "C" __attribute__((visibility("default"))) int _ZN21DbgTextureReplaceImpl11SetDrawCallEv(void) {
    ALOGD("_ZN21DbgTextureReplaceImpl11SetDrawCallEv() called");
    return 0;
}

/* Demangled: DynamicRESActorDefaultFBO::~DynamicRESActorDefaultFBO() */
extern "C" __attribute__((visibility("default"))) int _ZN25DynamicRESActorDefaultFBOD0Ev(void) {
    ALOGD("_ZN25DynamicRESActorDefaultFBOD0Ev() called");
    return 0;
}

/* Exported Object: WL6 */
extern "C" __attribute__((visibility("default"))) void* WL6 = NULL;

/* Demangled: DbgSDAlgoMBoxUtility::DbgSDAlgoMBoxUtility() */
extern "C" __attribute__((visibility("default"))) int _ZN20DbgSDAlgoMBoxUtilityC2Ev(void) {
    ALOGD("_ZN20DbgSDAlgoMBoxUtilityC2Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to DbgSDAlgoQATxDisable::~DbgSDAlgoQATxDisable() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N20DbgSDAlgoQATxDisableD0Ev(void) {
    ALOGD("_ZThn8_N20DbgSDAlgoQATxDisableD0Ev() called");
    return 0;
}

/* Exported Object: WL7 */
extern "C" __attribute__((visibility("default"))) void* WL7 = NULL;

/* Exported Object: WL8 */
extern "C" __attribute__((visibility("default"))) void* WL8 = NULL;

/* Demangled: MBXContainer::operator[](unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12MBXContainerixEj(void) {
    ALOGD("_ZN12MBXContainerixEj() called");
    return 0;
}

/* Demangled: MBXColor::MBXColor() */
extern "C" __attribute__((visibility("default"))) int _ZN8MBXColorC1Ev(void) {
    ALOGD("_ZN8MBXColorC1Ev() called");
    return 0;
}

/* Demangled: DbgSDAlgoQADisable::~DbgSDAlgoQADisable() */
extern "C" __attribute__((visibility("default"))) int _ZN18DbgSDAlgoQADisableD0Ev(void) {
    ALOGD("_ZN18DbgSDAlgoQADisableD0Ev() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIjNS_9allocatorIjEEE6insertINS_11__wrap_iterIPjEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS9_E9referenceEEE5valueES7_E4typeENS5_IPKjEES9_S9_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE6insertINS_11__wrap_iterIPjEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS9_E9referenceEEE5valueES7_E4typeENS5_IPKjEES9_S9_(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE6insertINS_11__wrap_iterIPjEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS9_E9referenceEEE5valueES7_E4typeENS5_IPKjEES9_S9_() called");
    return 0;
}

/* Exported Object: WL9 */
extern "C" __attribute__((visibility("default"))) void* WL9 = NULL;

/* Demangled: SystemInfo::SystemInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN10SystemInfoC2Ev(void) {
    ALOGD("_ZN10SystemInfoC2Ev() called");
    return 0;
}

/* Demangled: DynamicResImpl::~DynamicResImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN14DynamicResImplD1Ev(void) {
    ALOGD("_ZN14DynamicResImplD1Ev() called");
    return 0;
}

/* Demangled: glMatrixMode */
extern "C" __attribute__((visibility("default"))) int glMatrixMode(void) {
    ALOGD("glMatrixMode() called");
    return 0;
}

/* Exported Object: gAppBlackList */
extern "C" __attribute__((visibility("default"))) void* gAppBlackList = NULL;

/* Demangled: MBXColor::~MBXColor() */
extern "C" __attribute__((visibility("default"))) int _ZN8MBXColorD2Ev(void) {
    ALOGD("_ZN8MBXColorD2Ev() called");
    return 0;
}

/* Demangled: DbgSDAlgoFull::ShowES1(SDAppType) */
extern "C" __attribute__((visibility("default"))) int _ZN13DbgSDAlgoFull7ShowES1E9SDAppType(void) {
    ALOGD("_ZN13DbgSDAlgoFull7ShowES1E9SDAppType() called");
    return 0;
}

/* Demangled: SimpleGLRendererES11::BackupStates() */
extern "C" __attribute__((visibility("default"))) int _ZN20SimpleGLRendererES1112BackupStatesEv(void) {
    ALOGD("_ZN20SimpleGLRendererES1112BackupStatesEv() called");
    return 0;
}

/* Demangled: GLContextInfo::DiscardFramebufferEXT(unsigned int, int, unsigned int const*) */
extern "C" __attribute__((visibility("default"))) int _ZN13GLContextInfo21DiscardFramebufferEXTEjiPKj(void) {
    ALOGD("_ZN13GLContextInfo21DiscardFramebufferEXTEjiPKj() called");
    return 0;
}

/* Demangled: std::__1::vector<image_texture_unit, std::__1::allocator<image_texture_unit> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI18image_texture_unitNS_9allocatorIS1_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorI18image_texture_unitNS_9allocatorIS1_EEE8__appendEj() called");
    return 0;
}

/* Demangled: SDAlgoBase::EstimateFps() */
extern "C" __attribute__((visibility("default"))) int _ZN10SDAlgoBase11EstimateFpsEv(void) {
    ALOGD("_ZN10SDAlgoBase11EstimateFpsEv() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::SetTexParameterfvEnd(unsigned int, unsigned int, float const*) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl20SetTexParameterfvEndEjjPKf(void) {
    ALOGD("_ZN18TextureReplaceImpl20SetTexParameterfvEndEjjPKf() called");
    return 0;
}

/* Exported Object: DynamicRESActorRenderpassFBO::m_errorDebug */
extern "C" __attribute__((visibility("default"))) void* _ZN28DynamicRESActorRenderpassFBO12m_errorDebugE = NULL;

/* Demangled: SDActorFpsLibManager::~SDActorFpsLibManager() */
extern "C" __attribute__((visibility("default"))) int _ZN20SDActorFpsLibManagerD1Ev(void) {
    ALOGD("_ZN20SDActorFpsLibManagerD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*, int>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS8_PNS_11__tree_nodeIS8_SH_EEiEERPNS_15__tree_end_nodeISJ_EESK_RKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS8_PNS_11__tree_nodeIS8_SH_EEiEERPNS_15__tree_end_nodeISJ_EESK_RKT_() called");
    return 0;
}

/* Demangled: ARCDispatchHookToListeners(MEOW_other_hook_t*) */
extern "C" __attribute__((visibility("default"))) int _Z26ARCDispatchHookToListenersP17MEOW_other_hook_t(void) {
    ALOGD("_Z26ARCDispatchHookToListenersP17MEOW_other_hook_t() called");
    return 0;
}

/* Demangled: DbgGLContext::DbgGLContext(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DbgGLContextC2Eji(void) {
    ALOGD("_ZN12DbgGLContextC2Eji() called");
    return 0;
}

/* Demangled: DbgSDAlgoQATxEnable::~DbgSDAlgoQATxEnable() */
extern "C" __attribute__((visibility("default"))) int _ZN19DbgSDAlgoQATxEnableD1Ev(void) {
    ALOGD("_ZN19DbgSDAlgoQATxEnableD1Ev() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::ResetDrawCallState() */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl18ResetDrawCallStateEv(void) {
    ALOGD("_ZN18TextureReplaceImpl18ResetDrawCallStateEv() called");
    return 0;
}

/* Exported Object: typeinfo for DynamicRESAlgoDVFSPolicy */
extern "C" __attribute__((visibility("default"))) void* _ZTI24DynamicRESAlgoDVFSPolicy = NULL;

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISJ_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISJ_EERKT_() called");
    return 0;
}

/* Demangled: oppoConfigFromFile::GetOptionDFPS(char*, unsigned int, char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK18oppoConfigFromFile13GetOptionDFPSEPcjPKc(void) {
    ALOGD("_ZNK18oppoConfigFromFile13GetOptionDFPSEPcjPKc() called");
    return 0;
}

/* Demangled: ARCState::IsPropertyWhiteList() */
extern "C" __attribute__((visibility("default"))) int _ZN8ARCState19IsPropertyWhiteListEv(void) {
    ALOGD("_ZN8ARCState19IsPropertyWhiteListEv() called");
    return 0;
}

/* Demangled: DbgSDAlgoSimple::~DbgSDAlgoSimple() */
extern "C" __attribute__((visibility("default"))) int _ZN15DbgSDAlgoSimpleD1Ev(void) {
    ALOGD("_ZN15DbgSDAlgoSimpleD1Ev() called");
    return 0;
}

/* Demangled: SDTouchHint::NotifyTouchEvent(TouchEventHistory const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11SDTouchHint16NotifyTouchEventEPK17TouchEventHistory(void) {
    ALOGD("_ZN11SDTouchHint16NotifyTouchEventEPK17TouchEventHistory() called");
    return 0;
}

/* Exported Object: typeinfo for MBXStateBlock */
extern "C" __attribute__((visibility("default"))) void* _ZTI13MBXStateBlock = NULL;

/* Exported Object: typeinfo for DbgSDAlgoMBoxUtility */
extern "C" __attribute__((visibility("default"))) void* _ZTI20DbgSDAlgoMBoxUtility = NULL;

/* Demangled: DbgTextureReplaceMBox::SwapBuffersBegin() */
extern "C" __attribute__((visibility("default"))) int _ZN21DbgTextureReplaceMBox16SwapBuffersBeginEv(void) {
    ALOGD("_ZN21DbgTextureReplaceMBox16SwapBuffersBeginEv() called");
    return 0;
}

/* Exported Object: SDAlgoSlopeSmooth::sSceneChangeRatio */
extern "C" __attribute__((visibility("default"))) void* _ZN17SDAlgoSlopeSmooth17sSceneChangeRatioE = NULL;

/* Demangled: glGetError */
extern "C" __attribute__((visibility("default"))) int glGetError(void) {
    ALOGD("glGetError() called");
    return 0;
}

/* Demangled: ARCRegisterGLESv1Hook */
extern "C" __attribute__((visibility("default"))) int ARCRegisterGLESv1Hook(void) {
    ALOGD("ARCRegisterGLESv1Hook() called");
    return 0;
}

/* Demangled: DbgSDAlgoAEDisable::ShowES1(SDAppType) */
extern "C" __attribute__((visibility("default"))) int _ZN18DbgSDAlgoAEDisable7ShowES1E9SDAppType(void) {
    ALOGD("_ZN18DbgSDAlgoAEDisable7ShowES1E9SDAppType() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::DeleteTextures(int, unsigned int const*) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl14DeleteTexturesEiPKj(void) {
    ALOGD("_ZN18TextureReplaceImpl14DeleteTexturesEiPKj() called");
    return 0;
}

/* Demangled: DynamicRESActorRenderpassFBO::BlitFramebufferEnd() */
extern "C" __attribute__((visibility("default"))) int _ZN28DynamicRESActorRenderpassFBO18BlitFramebufferEndEv(void) {
    ALOGD("_ZN28DynamicRESActorRenderpassFBO18BlitFramebufferEndEv() called");
    return 0;
}

/* Demangled: glEnable */
extern "C" __attribute__((visibility("default"))) int glEnable(void) {
    ALOGD("glEnable() called");
    return 0;
}

/* Demangled: SDAlgoFixFps::SDAlgoFixFps() */
extern "C" __attribute__((visibility("default"))) int _ZN12SDAlgoFixFpsC1Ev(void) {
    ALOGD("_ZN12SDAlgoFixFpsC1Ev() called");
    return 0;
}

/* Demangled: DbgSDAlgoQAEnable::DbgSDAlgoQAEnable() */
extern "C" __attribute__((visibility("default"))) int _ZN17DbgSDAlgoQAEnableC2Ev(void) {
    ALOGD("_ZN17DbgSDAlgoQAEnableC2Ev() called");
    return 0;
}

/* Demangled: DynamicRESActorFusion::~DynamicRESActorFusion() */
extern "C" __attribute__((visibility("default"))) int _ZN21DynamicRESActorFusionD2Ev(void) {
    ALOGD("_ZN21DynamicRESActorFusionD2Ev() called");
    return 0;
}

/* Exported Object: SDAlgoListBasedStatistic::sP1NonVBOVBORate */
extern "C" __attribute__((visibility("default"))) void* _ZN24SDAlgoListBasedStatistic16sP1NonVBOVBORateE = NULL;

/* Demangled: android::Singleton<QTServiceClient>::Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI15QTServiceClientEC1Ev(void) {
    ALOGD("_ZN7android9SingletonI15QTServiceClientEC1Ev() called");
    return 0;
}

/* Demangled: ProgramCache::getHookLocationAndUpdate(int&, unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12ProgramCache24getHookLocationAndUpdateERijb(void) {
    ALOGD("_ZN12ProgramCache24getHookLocationAndUpdateERijb() called");
    return 0;
}

/* Demangled: arcConfigFromQTService::arcConfigFromQTService() */
extern "C" __attribute__((visibility("default"))) int _ZN22arcConfigFromQTServiceC1Ev(void) {
    ALOGD("_ZN22arcConfigFromQTServiceC1Ev() called");
    return 0;
}

/* Demangled: ARCState::DecipherSValue(double) */
extern "C" __attribute__((visibility("default"))) int _ZN8ARCState14DecipherSValueEd(void) {
    ALOGD("_ZN8ARCState14DecipherSValueEd() called");
    return 0;
}

/* Demangled: SDAlgoFixFps::~SDAlgoFixFps() */
extern "C" __attribute__((visibility("default"))) int _ZN12SDAlgoFixFpsD2Ev(void) {
    ALOGD("_ZN12SDAlgoFixFpsD2Ev() called");
    return 0;
}

/* Exported Object: SDActorFpsController::sQAEnableDuration */
extern "C" __attribute__((visibility("default"))) void* _ZN20SDActorFpsController17sQAEnableDurationE = NULL;

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE4findIS7_EENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE4findIS7_EENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEERKT_() called");
    return 0;
}

/* Demangled: android::Singleton<QTServiceClient>::~Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI15QTServiceClientED2Ev(void) {
    ALOGD("_ZN7android9SingletonI15QTServiceClientED2Ev() called");
    return 0;
}

/* Demangled: SDAlgoGameFpsControl::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN20SDAlgoGameFpsControl5ResetEv(void) {
    ALOGD("_ZN20SDAlgoGameFpsControl5ResetEv() called");
    return 0;
}

/* Demangled: arcConfigFromQTService::~arcConfigFromQTService() */
extern "C" __attribute__((visibility("default"))) int _ZN22arcConfigFromQTServiceD2Ev(void) {
    ALOGD("_ZN22arcConfigFromQTServiceD2Ev() called");
    return 0;
}

/* Demangled: ARCState::GetPureProcessName() */
extern "C" __attribute__((visibility("default"))) int _ZN8ARCState18GetPureProcessNameEv(void) {
    ALOGD("_ZN8ARCState18GetPureProcessNameEv() called");
    return 0;
}

/* Demangled: ARCState::FlushOption_unsigned(ArcConfigOpt) */
extern "C" __attribute__((visibility("default"))) int _ZN8ARCState20FlushOption_unsignedE12ArcConfigOpt(void) {
    ALOGD("_ZN8ARCState20FlushOption_unsignedE12ArcConfigOpt() called");
    return 0;
}

/* Demangled: ARCState::ARCState() */
extern "C" __attribute__((visibility("default"))) int _ZN8ARCStateC2Ev(void) {
    ALOGD("_ZN8ARCStateC2Ev() called");
    return 0;
}

/* Demangled: DbgSDAlgoMBoxUtility::RegisterTouchEventFpsReset(TouchEventHistory const*) */
extern "C" __attribute__((visibility("default"))) int _ZN20DbgSDAlgoMBoxUtility26RegisterTouchEventFpsResetEPK17TouchEventHistory(void) {
    ALOGD("_ZN20DbgSDAlgoMBoxUtility26RegisterTouchEventFpsResetEPK17TouchEventHistory() called");
    return 0;
}

/* Exported Object: typeinfo name for DbgTextureReplaceImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTS21DbgTextureReplaceImpl = NULL;

/* Exported Object: typeinfo for DynamicRESActorBase */
extern "C" __attribute__((visibility("default"))) void* _ZTI19DynamicRESActorBase = NULL;

/* Demangled: DbgGLContext::~DbgGLContext() */
extern "C" __attribute__((visibility("default"))) int _ZN12DbgGLContextD1Ev(void) {
    ALOGD("_ZN12DbgGLContextD1Ev() called");
    return 0;
}

/* Demangled: DynamicRESAlgoSmokeShader::ModifyShader(std::__1::__map_const_iterator<std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, shader_info>, std::__1::__tree_node<std::__1::__value_type<unsigned int, shader_info>, void*>*, int> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN25DynamicRESAlgoSmokeShader12ModifyShaderENSt3__120__map_const_iteratorINS0_21__tree_const_iteratorINS0_12__value_typeIj11shader_infoEEPNS0_11__tree_nodeIS5_PvEEiEEEERNS0_12basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN25DynamicRESAlgoSmokeShader12ModifyShaderENSt3__120__map_const_iteratorINS0_21__tree_const_iteratorINS0_12__value_typeIj11shader_infoEEPNS0_11__tree_nodeIS5_PvEEiEEEERNS0_12basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: glMultMatrixf */
extern "C" __attribute__((visibility("default"))) int glMultMatrixf(void) {
    ALOGD("glMultMatrixf() called");
    return 0;
}

/* Demangled: non-virtual thunk to DbgSDAlgoFixFps::~DbgSDAlgoFixFps() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N15DbgSDAlgoFixFpsD1Ev(void) {
    ALOGD("_ZThn8_N15DbgSDAlgoFixFpsD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> >::__find_equal<unsigned int>(std::__1::__tree_const_iterator<unsigned int, std::__1::__tree_node<unsigned int, void*>*, int>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIjNS_4lessIjEENS_9allocatorIjEEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIjPNS_11__tree_nodeIjS8_EEiEERPNS_15__tree_end_nodeISA_EESB_RKT_(void) {
    ALOGD("_ZNSt3__16__treeIjNS_4lessIjEENS_9allocatorIjEEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIjPNS_11__tree_nodeIjS8_EEiEERPNS_15__tree_end_nodeISA_EESB_RKT_() called");
    return 0;
}

/* Demangled: DbgDynamicFpsImpl::~DbgDynamicFpsImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN17DbgDynamicFpsImplD2Ev(void) {
    ALOGD("_ZN17DbgDynamicFpsImplD2Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for oppoConfigFromFile */
extern "C" __attribute__((visibility("default"))) void* _ZTS18oppoConfigFromFile = NULL;

/* Demangled: IsMTKDevice() */
extern "C" __attribute__((visibility("default"))) int _Z11IsMTKDevicev(void) {
    ALOGD("_Z11IsMTKDevicev() called");
    return 0;
}

/* Demangled: glGetTexParameterIiv */
extern "C" __attribute__((visibility("default"))) int glGetTexParameterIiv(void) {
    ALOGD("glGetTexParameterIiv() called");
    return 0;
}

/* Demangled: non-virtual thunk to DbgSDAlgoQADisable::~DbgSDAlgoQADisable() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N18DbgSDAlgoQADisableD1Ev(void) {
    ALOGD("_ZThn8_N18DbgSDAlgoQADisableD1Ev() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::ReadPixelsEnd() */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl13ReadPixelsEndEv(void) {
    ALOGD("_ZN18TextureReplaceImpl13ReadPixelsEndEv() called");
    return 0;
}

/* Demangled: DynamicRESActorDefaultFBO::~DynamicRESActorDefaultFBO() */
extern "C" __attribute__((visibility("default"))) int _ZN25DynamicRESActorDefaultFBOD1Ev(void) {
    ALOGD("_ZN25DynamicRESActorDefaultFBOD1Ev() called");
    return 0;
}

/* Demangled: SDAlgoSlopeSmooth::DetectScene() */
extern "C" __attribute__((visibility("default"))) int _ZN17SDAlgoSlopeSmooth11DetectSceneEv(void) {
    ALOGD("_ZN17SDAlgoSlopeSmooth11DetectSceneEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to DbgSDAlgoQATxDisable::~DbgSDAlgoQATxDisable() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N20DbgSDAlgoQATxDisableD1Ev(void) {
    ALOGD("_ZThn8_N20DbgSDAlgoQATxDisableD1Ev() called");
    return 0;
}

/* Demangled: ARCUnregisterEGLHook */
extern "C" __attribute__((visibility("default"))) int ARCUnregisterEGLHook(void) {
    ALOGD("ARCUnregisterEGLHook() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::RestoreFramebufferContent(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl25RestoreFramebufferContentEjj(void) {
    ALOGD("_ZN18TextureReplaceImpl25RestoreFramebufferContentEjj() called");
    return 0;
}

/* Demangled: glDrawArrays */
extern "C" __attribute__((visibility("default"))) int glDrawArrays(void) {
    ALOGD("glDrawArrays() called");
    return 0;
}

/* Demangled: glDrawElementsBaseVertex */
extern "C" __attribute__((visibility("default"))) int glDrawElementsBaseVertex(void) {
    ALOGD("glDrawElementsBaseVertex() called");
    return 0;
}

/* Exported Object: typeinfo for DbgSDAlgoDisable */
extern "C" __attribute__((visibility("default"))) void* _ZTI16DbgSDAlgoDisable = NULL;

/* Exported Object: typeinfo for DbgSDAlgoQADisable */
extern "C" __attribute__((visibility("default"))) void* _ZTI18DbgSDAlgoQADisable = NULL;

/* Exported Object: TextureReplaceImpl::m_errorDebug */
extern "C" __attribute__((visibility("default"))) void* _ZN18TextureReplaceImpl12m_errorDebugE = NULL;

/* Demangled: TextureReplaceImpl::UpdateInputParameters() */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl21UpdateInputParametersEv(void) {
    ALOGD("_ZN18TextureReplaceImpl21UpdateInputParametersEv() called");
    return 0;
}

/* Demangled: SDAlgoFactory::NewInstance(SDAlgoFactory::SDAlgoMenu) */
extern "C" __attribute__((visibility("default"))) int _ZN13SDAlgoFactory11NewInstanceENS_10SDAlgoMenuE(void) {
    ALOGD("_ZN13SDAlgoFactory11NewInstanceENS_10SDAlgoMenuE() called");
    return 0;
}

/* Demangled: MBXColor::MBXColor() */
extern "C" __attribute__((visibility("default"))) int _ZN8MBXColorC2Ev(void) {
    ALOGD("_ZN8MBXColorC2Ev() called");
    return 0;
}

/* Demangled: DbgSDAlgoQADisable::~DbgSDAlgoQADisable() */
extern "C" __attribute__((visibility("default"))) int _ZN18DbgSDAlgoQADisableD1Ev(void) {
    ALOGD("_ZN18DbgSDAlgoQADisableD1Ev() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::CopyTextureParameters(std::__1::__map_iterator<std::__1::__tree_iterator<std::__1::__value_type<unsigned int, TextureReplaceImpl::name_info>, std::__1::__tree_node<std::__1::__value_type<unsigned int, TextureReplaceImpl::name_info>, void*>*, int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl21CopyTextureParametersERNSt3__114__map_iteratorINS0_15__tree_iteratorINS0_12__value_typeIjNS_9name_infoEEEPNS0_11__tree_nodeIS5_PvEEiEEEE(void) {
    ALOGD("_ZN18TextureReplaceImpl21CopyTextureParametersERNSt3__114__map_iteratorINS0_15__tree_iteratorINS0_12__value_typeIjNS_9name_infoEEEPNS0_11__tree_nodeIS5_PvEEiEEEE() called");
    return 0;
}

/* Demangled: DynamicResImpl::~DynamicResImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN14DynamicResImplD2Ev(void) {
    ALOGD("_ZN14DynamicResImplD2Ev() called");
    return 0;
}

/* Demangled: FramebufferSelection::IsResizableTexture(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN20FramebufferSelection18IsResizableTextureEj(void) {
    ALOGD("_ZN20FramebufferSelection18IsResizableTextureEj() called");
    return 0;
}

/* Exported Object: vtable for SDAlgoListBasedStatistic */
extern "C" __attribute__((visibility("default"))) void* _ZTV24SDAlgoListBasedStatistic = NULL;

/* Exported Object: SystemInfo::s_gpu_freq_max */
extern "C" __attribute__((visibility("default"))) void* _ZN10SystemInfo14s_gpu_freq_maxE = NULL;

/* Demangled: SDActorFpsLibManager::SDActorFpsLibManager() */
extern "C" __attribute__((visibility("default"))) int _ZN20SDActorFpsLibManagerC1Ev(void) {
    ALOGD("_ZN20SDActorFpsLibManagerC1Ev() called");
    return 0;
}

/* Demangled: perfConfigFromService::DebugPrintParams() const */
extern "C" __attribute__((visibility("default"))) int _ZNK21perfConfigFromService16DebugPrintParamsEv(void) {
    ALOGD("_ZNK21perfConfigFromService16DebugPrintParamsEv() called");
    return 0;
}

/* Demangled: DbgGLContext::DbgGLContext(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DbgGLContextC1Eji(void) {
    ALOGD("_ZN12DbgGLContextC1Eji() called");
    return 0;
}

/* Demangled: DbgSDAlgoQATxEnable::DbgSDAlgoQATxEnable() */
extern "C" __attribute__((visibility("default"))) int _ZN19DbgSDAlgoQATxEnableC1Ev(void) {
    ALOGD("_ZN19DbgSDAlgoQATxEnableC1Ev() called");
    return 0;
}

/* Demangled: DynamicRESActorRenderpassFBO::SwapBuffers() */
extern "C" __attribute__((visibility("default"))) int _ZN28DynamicRESActorRenderpassFBO11SwapBuffersEv(void) {
    ALOGD("_ZN28DynamicRESActorRenderpassFBO11SwapBuffersEv() called");
    return 0;
}

/* Demangled: glGetProgramBinary */
extern "C" __attribute__((visibility("default"))) int glGetProgramBinary(void) {
    ALOGD("glGetProgramBinary() called");
    return 0;
}

/* Demangled: ARCHasFoundHWUI() */
extern "C" __attribute__((visibility("default"))) int _Z15ARCHasFoundHWUIv(void) {
    ALOGD("_Z15ARCHasFoundHWUIv() called");
    return 0;
}

/* Demangled: DbgSDAlgoSimple::DbgSDAlgoSimple() */
extern "C" __attribute__((visibility("default"))) int _ZN15DbgSDAlgoSimpleC1Ev(void) {
    ALOGD("_ZN15DbgSDAlgoSimpleC1Ev() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::BindRenderbufferBegin(unsigned int, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl21BindRenderbufferBeginEjRj(void) {
    ALOGD("_ZN18TextureReplaceImpl21BindRenderbufferBeginEjRj() called");
    return 0;
}

/* Exported Object: typeinfo for std::__1::__shared_ptr_emplace<DynamicRESAlgoSmokeShader::SharedResource, std::__1::allocator<DynamicRESAlgoSmokeShader::SharedResource> > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt3__120__shared_ptr_emplaceIN25DynamicRESAlgoSmokeShader14SharedResourceENS_9allocatorIS2_EEEE = NULL;

/* Demangled: SDActorFpsLibManager::~SDActorFpsLibManager() */
extern "C" __attribute__((visibility("default"))) int _ZN20SDActorFpsLibManagerD2Ev(void) {
    ALOGD("_ZN20SDActorFpsLibManagerD2Ev() called");
    return 0;
}

/* Demangled: glDeleteShader */
extern "C" __attribute__((visibility("default"))) int glDeleteShader(void) {
    ALOGD("glDeleteShader() called");
    return 0;
}

/* Demangled: SimpleGLRendererES20::~SimpleGLRendererES20() */
extern "C" __attribute__((visibility("default"))) int _ZN20SimpleGLRendererES20D0Ev(void) {
    ALOGD("_ZN20SimpleGLRendererES20D0Ev() called");
    return 0;
}

/* Demangled: DbgSDAlgoQATxEnable::~DbgSDAlgoQATxEnable() */
extern "C" __attribute__((visibility("default"))) int _ZN19DbgSDAlgoQATxEnableD2Ev(void) {
    ALOGD("_ZN19DbgSDAlgoQATxEnableD2Ev() called");
    return 0;
}

/* Demangled: android::Singleton<SDActorFpsLibManager>::~Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI20SDActorFpsLibManagerED1Ev(void) {
    ALOGD("_ZN7android9SingletonI20SDActorFpsLibManagerED1Ev() called");
    return 0;
}

/* Exported Object: typeinfo for SDAlgoGameFpsControl */
extern "C" __attribute__((visibility("default"))) void* _ZTI20SDAlgoGameFpsControl = NULL;

/* Demangled: glDeleteFramebuffers */
extern "C" __attribute__((visibility("default"))) int glDeleteFramebuffers(void) {
    ALOGD("glDeleteFramebuffers() called");
    return 0;
}

/* Exported Object: android::Singleton<ARCTouchEventDispatcher>::sInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9SingletonI23ARCTouchEventDispatcherE9sInstanceE = NULL;

/* Exported Object: vtable for MBXDigits */
extern "C" __attribute__((visibility("default"))) void* _ZTV9MBXDigits = NULL;

/* Demangled: DbgSDAlgoFixFps::GraphSetLayoutState(SDAppType) */
extern "C" __attribute__((visibility("default"))) int _ZN15DbgSDAlgoFixFps19GraphSetLayoutStateE9SDAppType(void) {
    ALOGD("_ZN15DbgSDAlgoFixFps19GraphSetLayoutStateE9SDAppType() called");
    return 0;
}

/* Demangled: DbgSDAlgoSimple::~DbgSDAlgoSimple() */
extern "C" __attribute__((visibility("default"))) int _ZN15DbgSDAlgoSimpleD2Ev(void) {
    ALOGD("_ZN15DbgSDAlgoSimpleD2Ev() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: SDAlgoSlowMotion::DetectScene() */
extern "C" __attribute__((visibility("default"))) int _ZN16SDAlgoSlowMotion11DetectSceneEv(void) {
    ALOGD("_ZN16SDAlgoSlowMotion11DetectSceneEv() called");
    return 0;
}

/* Demangled: android::Singleton<GEDServiceClient>::~Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI16GEDServiceClientED1Ev(void) {
    ALOGD("_ZN7android9SingletonI16GEDServiceClientED1Ev() called");
    return 0;
}

/* Exported Object: typeinfo for DynamicResImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTI14DynamicResImpl = NULL;

/* Demangled: DbgTextureReplaceImpl::GetTargetFromFile() */
extern "C" __attribute__((visibility("default"))) int _ZN21DbgTextureReplaceImpl17GetTargetFromFileEv(void) {
    ALOGD("_ZN21DbgTextureReplaceImpl17GetTargetFromFileEv() called");
    return 0;
}

/* Exported Object: vtable for DynamicRESActorBase */
extern "C" __attribute__((visibility("default"))) void* _ZTV19DynamicRESActorBase = NULL;

/* Exported Object: surfaceMutex */
extern "C" __attribute__((visibility("default"))) void* surfaceMutex = NULL;

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, ProgramCache::ProgramCacheData>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, ProgramCache::ProgramCacheData>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, ProgramCache::ProgramCacheData> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, ProgramCache::ProgramCacheData>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN12ProgramCache16ProgramCacheDataEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN12ProgramCache16ProgramCacheDataEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE() called");
    return 0;
}

/* Demangled: DynamicRESAlgoComputeShader::GetSuggestedSlotindex() */
extern "C" __attribute__((visibility("default"))) int _ZN27DynamicRESAlgoComputeShader21GetSuggestedSlotindexEv(void) {
    ALOGD("_ZN27DynamicRESAlgoComputeShader21GetSuggestedSlotindexEv() called");
    return 0;
}

/* Demangled: SimpleGLRendererES20::RestoreStates() */
extern "C" __attribute__((visibility("default"))) int _ZN20SimpleGLRendererES2013RestoreStatesEv(void) {
    ALOGD("_ZN20SimpleGLRendererES2013RestoreStatesEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to DbgSDAlgoMultiSwitch::NotifyTouchEvent(TouchEventHistory const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn4_N20DbgSDAlgoMultiSwitch16NotifyTouchEventEPK17TouchEventHistory(void) {
    ALOGD("_ZThn4_N20DbgSDAlgoMultiSwitch16NotifyTouchEventEPK17TouchEventHistory() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::BuildRelatedList() */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl16BuildRelatedListEv(void) {
    ALOGD("_ZN18TextureReplaceImpl16BuildRelatedListEv() called");
    return 0;
}

/* Demangled: std::__1::basic_istream<char, std::__1::char_traits<char> >& std::__1::getline<char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_istream<char, std::__1::char_traits<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__17getlineIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_istreamIT_T0_EES9_RNS_12basic_stringIS6_S7_T1_EES6_(void) {
    ALOGD("_ZNSt3__17getlineIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_istreamIT_T0_EES9_RNS_12basic_stringIS6_S7_T1_EES6_() called");
    return 0;
}

/* Demangled: SDAlgoBase::EstimateFps(SDSceneType) */
extern "C" __attribute__((visibility("default"))) int _ZN10SDAlgoBase11EstimateFpsE11SDSceneType(void) {
    ALOGD("_ZN10SDAlgoBase11EstimateFpsE11SDSceneType() called");
    return 0;
}

/* Demangled: arcConfigFromFile::ParseType(std::__1::multimap<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >**, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*) */
extern "C" __attribute__((visibility("default"))) int _ZN17arcConfigFromFile9ParseTypeEPPNSt3__18multimapINS0_12basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES7_NS0_4lessIS7_EENS5_INS0_4pairIKS7_S7_EEEEEEPSB_(void) {
    ALOGD("_ZN17arcConfigFromFile9ParseTypeEPPNSt3__18multimapINS0_12basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES7_NS0_4lessIS7_EENS5_INS0_4pairIKS7_S7_EEEEEEPSB_() called");
    return 0;
}

/* Exported Object: typeinfo for DynamicFpsImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTI14DynamicFpsImpl = NULL;

/* Demangled: glDrawBuffersEXT */
extern "C" __attribute__((visibility("default"))) int glDrawBuffersEXT(void) {
    ALOGD("glDrawBuffersEXT() called");
    return 0;
}

/* Demangled: SDAlgoFixFps::SDAlgoFixFps() */
extern "C" __attribute__((visibility("default"))) int _ZN12SDAlgoFixFpsC2Ev(void) {
    ALOGD("_ZN12SDAlgoFixFpsC2Ev() called");
    return 0;
}

/* Demangled: DbgSDAlgoDisable::~DbgSDAlgoDisable() */
extern "C" __attribute__((visibility("default"))) int _ZN16DbgSDAlgoDisableD0Ev(void) {
    ALOGD("_ZN16DbgSDAlgoDisableD0Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__emplace_back_slow_path<int>(int&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE24__emplace_back_slow_pathIJiEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE24__emplace_back_slow_pathIJiEEEvDpOT_() called");
    return 0;
}

/* Demangled: arcBuiltinConfig::~arcBuiltinConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN16arcBuiltinConfigD0Ev(void) {
    ALOGD("_ZN16arcBuiltinConfigD0Ev() called");
    return 0;
}

/* Demangled: android::Singleton<QTServiceClient>::Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI15QTServiceClientEC2Ev(void) {
    ALOGD("_ZN7android9SingletonI15QTServiceClientEC2Ev() called");
    return 0;
}

/* Demangled: ARC_GLUE::libraryUnLoad() */
extern "C" __attribute__((visibility("default"))) int _ZN8ARC_GLUE13libraryUnLoadEv(void) {
    ALOGD("_ZN8ARC_GLUE13libraryUnLoadEv() called");
    return 0;
}

/* Demangled: glGetTexLevelParameteriv */
extern "C" __attribute__((visibility("default"))) int glGetTexLevelParameteriv(void) {
    ALOGD("glGetTexLevelParameteriv() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::SetFramebufferRenderbufferEnd(unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl29SetFramebufferRenderbufferEndEjjjj(void) {
    ALOGD("_ZN18TextureReplaceImpl29SetFramebufferRenderbufferEndEjjjj() called");
    return 0;
}

/* Demangled: SDActorFpsController::ResetFuncPtrs() */
extern "C" __attribute__((visibility("default"))) int _ZN20SDActorFpsController13ResetFuncPtrsEv(void) {
    ALOGD("_ZN20SDActorFpsController13ResetFuncPtrsEv() called");
    return 0;
}

/* Exported Object: vtable for SDAlgoUniformSmooth */
extern "C" __attribute__((visibility("default"))) void* _ZTV19SDAlgoUniformSmooth = NULL;

/* Demangled: arcConfigFromQTService::arcConfigFromQTService() */
extern "C" __attribute__((visibility("default"))) int _ZN22arcConfigFromQTServiceC2Ev(void) {
    ALOGD("_ZN22arcConfigFromQTServiceC2Ev() called");
    return 0;
}

/* Demangled: glScissor */
extern "C" __attribute__((visibility("default"))) int glScissor(void) {
    ALOGD("glScissor() called");
    return 0;
}

/* Demangled: SDAlgoEnable::~SDAlgoEnable() */
extern "C" __attribute__((visibility("default"))) int _ZN12SDAlgoEnableD0Ev(void) {
    ALOGD("_ZN12SDAlgoEnableD0Ev() called");
    return 0;
}

/* Demangled: DbgSDAlgoDisable::ShowES1(SDAppType) */
extern "C" __attribute__((visibility("default"))) int _ZN16DbgSDAlgoDisable7ShowES1E9SDAppType(void) {
    ALOGD("_ZN16DbgSDAlgoDisable7ShowES1E9SDAppType() called");
    return 0;
}

/* Demangled: DbgTextureReplaceImpl::DbgTextureReplaceImpl(GLContextInfo&, TextureReplaceImpl*) */
extern "C" __attribute__((visibility("default"))) int _ZN21DbgTextureReplaceImplC2ER13GLContextInfoP18TextureReplaceImpl(void) {
    ALOGD("_ZN21DbgTextureReplaceImplC2ER13GLContextInfoP18TextureReplaceImpl() called");
    return 0;
}

/* Demangled: glMultMatrixx */
extern "C" __attribute__((visibility("default"))) int glMultMatrixx(void) {
    ALOGD("glMultMatrixx() called");
    return 0;
}

/* Exported Object: typeinfo for DbgSDAlgoFixFps */
extern "C" __attribute__((visibility("default"))) void* _ZTI15DbgSDAlgoFixFps = NULL;

/* Demangled: DynamicResImpl::AllocResource() */
extern "C" __attribute__((visibility("default"))) int _ZN14DynamicResImpl13AllocResourceEv(void) {
    ALOGD("_ZN14DynamicResImpl13AllocResourceEv() called");
    return 0;
}

/* Exported Object: vtable for DynamicRESActorRenderpassFBO */
extern "C" __attribute__((visibility("default"))) void* _ZTV28DynamicRESActorRenderpassFBO = NULL;

/* Demangled: DynamicRESActorRenderpassFBO::BindFrameBufferBegin(unsigned int, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN28DynamicRESActorRenderpassFBO20BindFrameBufferBeginEjRj(void) {
    ALOGD("_ZN28DynamicRESActorRenderpassFBO20BindFrameBufferBeginEjRj() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::multimap<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::multimap<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::multimap<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::multimap<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >*>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPNS_8multimapIS7_S7_NS_4lessIS7_EENS5_INS_4pairIKS7_S7_EEEEEEEENS_19__map_value_compareIS7_SH_SA_Lb1EEENS5_ISH_EEE7destroyEPNS_11__tree_nodeISH_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPNS_8multimapIS7_S7_NS_4lessIS7_EENS5_INS_4pairIKS7_S7_EEEEEEEENS_19__map_value_compareIS7_SH_SA_Lb1EEENS5_ISH_EEE7destroyEPNS_11__tree_nodeISH_PvEE() called");
    return 0;
}

/* Demangled: glMultiDrawElementsBaseVertexEXT */
extern "C" __attribute__((visibility("default"))) int glMultiDrawElementsBaseVertexEXT(void) {
    ALOGD("glMultiDrawElementsBaseVertexEXT() called");
    return 0;
}

/* Demangled: PredefinedAppList::GetARCBlacklist(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >&) */
extern "C" __attribute__((visibility("default"))) int _ZN17PredefinedAppList15GetARCBlacklistERNSt3__16vectorINS0_12basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEENS5_IS7_EEEE(void) {
    ALOGD("_ZN17PredefinedAppList15GetARCBlacklistERNSt3__16vectorINS0_12basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEENS5_IS7_EEEE() called");
    return 0;
}

/* Exported Object: vtable for DbgSDAlgoFixFps */
extern "C" __attribute__((visibility("default"))) void* _ZTV15DbgSDAlgoFixFps = NULL;

/* Demangled: SharedObjectManager::SetShaderType(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN19SharedObjectManager13SetShaderTypeEjj(void) {
    ALOGD("_ZN19SharedObjectManager13SetShaderTypeEjj() called");
    return 0;
}

/* Demangled: glReadPixels */
extern "C" __attribute__((visibility("default"))) int glReadPixels(void) {
    ALOGD("glReadPixels() called");
    return 0;
}

/* Demangled: DbgGLContext::~DbgGLContext() */
extern "C" __attribute__((visibility("default"))) int _ZN12DbgGLContextD2Ev(void) {
    ALOGD("_ZN12DbgGLContextD2Ev() called");
    return 0;
}

/* Exported Object: vtable for DynamicRESAlgoBase */
extern "C" __attribute__((visibility("default"))) void* _ZTV18DynamicRESAlgoBase = NULL;

/* Demangled: SDAlgoFusion::UpdateFrameData(GLFrameData const&) */
extern "C" __attribute__((visibility("default"))) int _ZN12SDAlgoFusion15UpdateFrameDataERK11GLFrameData(void) {
    ALOGD("_ZN12SDAlgoFusion15UpdateFrameDataERK11GLFrameData() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::OverwriteRemappedFramebuffer(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl28OverwriteRemappedFramebufferEj(void) {
    ALOGD("_ZN18TextureReplaceImpl28OverwriteRemappedFramebufferEj() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev() called");
    return 0;
}

/* Exported Object: SDAlgoSlopeSmooth::sGeometryRatio */
extern "C" __attribute__((visibility("default"))) void* _ZN17SDAlgoSlopeSmooth14sGeometryRatioE = NULL;

/* Exported Object: vtable for TextureReplaceImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTV18TextureReplaceImpl = NULL;

/* Demangled: DynamicRESActorDefaultFBO::~DynamicRESActorDefaultFBO() */
extern "C" __attribute__((visibility("default"))) int _ZN25DynamicRESActorDefaultFBOD2Ev(void) {
    ALOGD("_ZN25DynamicRESActorDefaultFBOD2Ev() called");
    return 0;
}

/* Demangled: SceneDetector::~SceneDetector() */
extern "C" __attribute__((visibility("default"))) int _ZN13SceneDetectorD1Ev(void) {
    ALOGD("_ZN13SceneDetectorD1Ev() called");
    return 0;
}

/* Demangled: DbgSDAlgoQADisable::DbgSDAlgoQADisable() */
extern "C" __attribute__((visibility("default"))) int _ZN18DbgSDAlgoQADisableC1Ev(void) {
    ALOGD("_ZN18DbgSDAlgoQADisableC1Ev() called");
    return 0;
}

/* Exported Object: ARCState::arcConfigRecord */
extern "C" __attribute__((visibility("default"))) void* _ZN8ARCState15arcConfigRecordE = NULL;

/* Demangled: TextureReplaceImpl::BindTextureBegin(unsigned int, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl16BindTextureBeginEjRj(void) {
    ALOGD("_ZN18TextureReplaceImpl16BindTextureBeginEjRj() called");
    return 0;
}

/* Exported Object: typeinfo for ARCHookDispatcher */
extern "C" __attribute__((visibility("default"))) void* _ZTI17ARCHookDispatcher = NULL;

/* Demangled: MBXRect::MBXRect(float, float, float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN7MBXRectC2Effff(void) {
    ALOGD("_ZN7MBXRectC2Effff() called");
    return 0;
}

/* Demangled: DbgSDAlgoQATxDisable::GraphSetLayoutState(SDAppType) */
extern "C" __attribute__((visibility("default"))) int _ZN20DbgSDAlgoQATxDisable19GraphSetLayoutStateE9SDAppType(void) {
    ALOGD("_ZN20DbgSDAlgoQATxDisable19GraphSetLayoutStateE9SDAppType() called");
    return 0;
}

/* Demangled: DbgSDAlgoQADisable::~DbgSDAlgoQADisable() */
extern "C" __attribute__((visibility("default"))) int _ZN18DbgSDAlgoQADisableD2Ev(void) {
    ALOGD("_ZN18DbgSDAlgoQADisableD2Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for DbgDynamicResImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTS17DbgDynamicResImpl = NULL;

/* Demangled: arcConfigFromFile::arcConfigFromFile(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN17arcConfigFromFileC1EPKc(void) {
    ALOGD("_ZN17arcConfigFromFileC1EPKc() called");
    return 0;
}

/* Exported Object: vtable for SimpleGLRendererES11 */
extern "C" __attribute__((visibility("default"))) void* _ZTV20SimpleGLRendererES11 = NULL;

/* Exported Object: vtable for SDAlgoSlowMotion */
extern "C" __attribute__((visibility("default"))) void* _ZTV16SDAlgoSlowMotion = NULL;

/* Exported Object: typeinfo name for IConfigImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTS11IConfigImpl = NULL;

/* Exported Object: typeinfo for DbgSDAlgoMultiSwitch */
extern "C" __attribute__((visibility("default"))) void* _ZTI20DbgSDAlgoMultiSwitch = NULL;

/* Demangled: TextureReplaceImpl::ResizeDefaultFramebuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl24ResizeDefaultFramebufferEv(void) {
    ALOGD("_ZN18TextureReplaceImpl24ResizeDefaultFramebufferEv() called");
    return 0;
}

/* Demangled: SDActorFpsLibManager::SDActorFpsLibManager() */
extern "C" __attribute__((visibility("default"))) int _ZN20SDActorFpsLibManagerC2Ev(void) {
    ALOGD("_ZN20SDActorFpsLibManagerC2Ev() called");
    return 0;
}

/* Demangled: DbgSDAlgoQATxEnable::DbgSDAlgoQATxEnable() */
extern "C" __attribute__((visibility("default"))) int _ZN19DbgSDAlgoQATxEnableC2Ev(void) {
    ALOGD("_ZN19DbgSDAlgoQATxEnableC2Ev() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<unsigned int, renderbuffer_info>, std::__1::__tree_node<std::__1::__value_type<unsigned int, renderbuffer_info>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<unsigned int, renderbuffer_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, renderbuffer_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, renderbuffer_info> > >::__emplace_unique_impl<std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int&>, std::__1::tuple<int&, unsigned int&, int&, int&> >(std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int&>&&, std::__1::tuple<int&, unsigned int&, int&, int&>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIj17renderbuffer_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE21__emplace_unique_implIJRKNS_21piecewise_construct_tENS_5tupleIJRjEEENSF_IJRiSG_SI_SI_EEEEEENS_4pairINS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEbEEDpOT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIj17renderbuffer_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE21__emplace_unique_implIJRKNS_21piecewise_construct_tENS_5tupleIJRjEEENSF_IJRiSG_SI_SI_EEEEEENS_4pairINS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEbEEDpOT_() called");
    return 0;
}

/* Exported Object: typeinfo name for DbgDynamicFpsImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTS17DbgDynamicFpsImpl = NULL;

/* Demangled: android::Singleton<SDActorFpsLibManager>::Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI20SDActorFpsLibManagerEC1Ev(void) {
    ALOGD("_ZN7android9SingletonI20SDActorFpsLibManagerEC1Ev() called");
    return 0;
}

/* Demangled: DbgSDAlgoSimple::DbgSDAlgoSimple() */
extern "C" __attribute__((visibility("default"))) int _ZN15DbgSDAlgoSimpleC2Ev(void) {
    ALOGD("_ZN15DbgSDAlgoSimpleC2Ev() called");
    return 0;
}

/* Exported Object: vtable for SDTouchHint */
extern "C" __attribute__((visibility("default"))) void* _ZTV11SDTouchHint = NULL;

/* Demangled: gli_initOnce() */
extern "C" __attribute__((visibility("default"))) int _Z12gli_initOncev(void) {
    ALOGD("_Z12gli_initOncev() called");
    return 0;
}

/* Demangled: SimpleGLRendererES20::~SimpleGLRendererES20() */
extern "C" __attribute__((visibility("default"))) int _ZN20SimpleGLRendererES20D1Ev(void) {
    ALOGD("_ZN20SimpleGLRendererES20D1Ev() called");
    return 0;
}

/* Exported Object: vtable for SDAlgoEnable */
extern "C" __attribute__((visibility("default"))) void* _ZTV12SDAlgoEnable = NULL;

/* Demangled: DbgSDAlgoQATxEnable::ShowES2(SDAppType) */
extern "C" __attribute__((visibility("default"))) int _ZN19DbgSDAlgoQATxEnable7ShowES2E9SDAppType(void) {
    ALOGD("_ZN19DbgSDAlgoQATxEnable7ShowES2E9SDAppType() called");
    return 0;
}

/* Demangled: android::Singleton<GEDServiceClient>::Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI16GEDServiceClientEC1Ev(void) {
    ALOGD("_ZN7android9SingletonI16GEDServiceClientEC1Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: android::Singleton<SDActorFpsLibManager>::~Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI20SDActorFpsLibManagerED2Ev(void) {
    ALOGD("_ZN7android9SingletonI20SDActorFpsLibManagerED2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_14basic_iostreamIcS2_EE = NULL;

/* Exported Object: threadMutex */
extern "C" __attribute__((visibility("default"))) void* threadMutex = NULL;

/* Exported Object: typeinfo name for DbgMDynamicFpsImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTS18DbgMDynamicFpsImpl = NULL;

/* Demangled: MBXAlphabet::MBXAlphabet(MBXRect const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11MBXAlphabetC2ERK7MBXRect(void) {
    ALOGD("_ZN11MBXAlphabetC2ERK7MBXRect() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::FreeRelatedSetCurrentSlot(TextureReplaceImpl::RelatedSet&) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl25FreeRelatedSetCurrentSlotERNS_10RelatedSetE(void) {
    ALOGD("_ZN18TextureReplaceImpl25FreeRelatedSetCurrentSlotERNS_10RelatedSetE() called");
    return 0;
}

/* Demangled: android::Singleton<GEDServiceClient>::~Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI16GEDServiceClientED2Ev(void) {
    ALOGD("_ZN7android9SingletonI16GEDServiceClientED2Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::CopyTexture(std::__1::__map_iterator<std::__1::__tree_iterator<std::__1::__value_type<unsigned int, TextureReplaceImpl::name_info>, std::__1::__tree_node<std::__1::__value_type<unsigned int, TextureReplaceImpl::name_info>, void*>*, int> >&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl11CopyTextureERNSt3__114__map_iteratorINS0_15__tree_iteratorINS0_12__value_typeIjNS_9name_infoEEEPNS0_11__tree_nodeIS5_PvEEiEEEEb(void) {
    ALOGD("_ZN18TextureReplaceImpl11CopyTextureERNSt3__114__map_iteratorINS0_15__tree_iteratorINS0_12__value_typeIjNS_9name_infoEEEPNS0_11__tree_nodeIS5_PvEEiEEEEb() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::DeleteShader(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl12DeleteShaderEj(void) {
    ALOGD("_ZN18TextureReplaceImpl12DeleteShaderEj() called");
    return 0;
}

/* Exported Object: SDAlgoListBasedStatistic::sP1NonVBOUniformChangeRate */
extern "C" __attribute__((visibility("default"))) void* _ZN24SDAlgoListBasedStatistic26sP1NonVBOUniformChangeRateE = NULL;

/* Demangled: SDAlgoDisable::~SDAlgoDisable() */
extern "C" __attribute__((visibility("default"))) int _ZN13SDAlgoDisableD0Ev(void) {
    ALOGD("_ZN13SDAlgoDisableD0Ev() called");
    return 0;
}

/* Exported Object: touchState */
extern "C" __attribute__((visibility("default"))) void* touchState = NULL;

/* Demangled: DbgSDAlgoDisable::~DbgSDAlgoDisable() */
extern "C" __attribute__((visibility("default"))) int _ZN16DbgSDAlgoDisableD1Ev(void) {
    ALOGD("_ZN16DbgSDAlgoDisableD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for DbgSDAlgoFixFps */
extern "C" __attribute__((visibility("default"))) void* _ZTS15DbgSDAlgoFixFps = NULL;

/* Exported Object: typeinfo name for ARCEventListener */
extern "C" __attribute__((visibility("default"))) void* _ZTS16ARCEventListener = NULL;

/* Demangled: TextureReplaceImpl::ValidateHookRenderbuffer(unsigned int, unsigned int, unsigned int, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl24ValidateHookRenderbufferEjjjRj(void) {
    ALOGD("_ZN18TextureReplaceImpl24ValidateHookRenderbufferEjjjRj() called");
    return 0;
}

/* Exported Object: DynamicRESAlgoSmokeShader::s_smokeSlotIndex */
extern "C" __attribute__((visibility("default"))) void* _ZN25DynamicRESAlgoSmokeShader16s_smokeSlotIndexE = NULL;

/* Demangled: SceneDetector::PrintStatus() */
extern "C" __attribute__((visibility("default"))) int _ZN13SceneDetector11PrintStatusEv(void) {
    ALOGD("_ZN13SceneDetector11PrintStatusEv() called");
    return 0;
}

/* Demangled: arcBuiltinConfig::~arcBuiltinConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN16arcBuiltinConfigD1Ev(void) {
    ALOGD("_ZN16arcBuiltinConfigD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo for arcConfigFromFile */
extern "C" __attribute__((visibility("default"))) void* _ZTI17arcConfigFromFile = NULL;

/* Demangled: MBXColor::MBXColor(float, float, float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN8MBXColorC2Effff(void) {
    ALOGD("_ZN8MBXColorC2Effff() called");
    return 0;
}

/* Demangled: SDAlgoEnable::~SDAlgoEnable() */
extern "C" __attribute__((visibility("default"))) int _ZN12SDAlgoEnableD1Ev(void) {
    ALOGD("_ZN12SDAlgoEnableD1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to DbgSDAlgoFixFps::Detect() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N15DbgSDAlgoFixFps6DetectEv(void) {
    ALOGD("_ZThn8_N15DbgSDAlgoFixFps6DetectEv() called");
    return 0;
}

/* Exported Object: vtable for GLContextInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTV13GLContextInfo = NULL;

/* Exported Object: typeinfo name for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt3__113basic_filebufIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: oppoConfigFromFile::~oppoConfigFromFile() */
extern "C" __attribute__((visibility("default"))) int _ZN18oppoConfigFromFileD0Ev(void) {
    ALOGD("_ZN18oppoConfigFromFileD0Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: glDrawElementsBaseVertexEXT */
extern "C" __attribute__((visibility("default"))) int glDrawElementsBaseVertexEXT(void) {
    ALOGD("glDrawElementsBaseVertexEXT() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::SetFramebufferTexture2DEnd(unsigned int, unsigned int, unsigned int, unsigned int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl26SetFramebufferTexture2DEndEjjjjii(void) {
    ALOGD("_ZN18TextureReplaceImpl26SetFramebufferTexture2DEndEjjjjii() called");
    return 0;
}

/* Demangled: SceneDetector::SceneDetector() */
extern "C" __attribute__((visibility("default"))) int _ZN13SceneDetectorC1Ev(void) {
    ALOGD("_ZN13SceneDetectorC1Ev() called");
    return 0;
}

/* Demangled: glFramebufferTexture2D */
extern "C" __attribute__((visibility("default"))) int glFramebufferTexture2D(void) {
    ALOGD("glFramebufferTexture2D() called");
    return 0;
}

/* Demangled: glGetIntegerv */
extern "C" __attribute__((visibility("default"))) int glGetIntegerv(void) {
    ALOGD("glGetIntegerv() called");
    return 0;
}

/* Exported Object: typeinfo for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: DbgTextureReplaceImpl::SetClear() */
extern "C" __attribute__((visibility("default"))) int _ZN21DbgTextureReplaceImpl8SetClearEv(void) {
    ALOGD("_ZN21DbgTextureReplaceImpl8SetClearEv() called");
    return 0;
}

/* Demangled: SceneDetector::~SceneDetector() */
extern "C" __attribute__((visibility("default"))) int _ZN13SceneDetectorD2Ev(void) {
    ALOGD("_ZN13SceneDetectorD2Ev() called");
    return 0;
}

/* Demangled: DbgSDAlgoQADisable::DbgSDAlgoQADisable() */
extern "C" __attribute__((visibility("default"))) int _ZN18DbgSDAlgoQADisableC2Ev(void) {
    ALOGD("_ZN18DbgSDAlgoQADisableC2Ev() called");
    return 0;
}

/* Exported Object: typeinfo for SDActor */
extern "C" __attribute__((visibility("default"))) void* _ZTI7SDActor = NULL;

/* Demangled: SimpleGLRendererES11::RestoreStates() */
extern "C" __attribute__((visibility("default"))) int _ZN20SimpleGLRendererES1113RestoreStatesEv(void) {
    ALOGD("_ZN20SimpleGLRendererES1113RestoreStatesEv() called");
    return 0;
}

/* Demangled: arcConfigFromFile::~arcConfigFromFile() */
extern "C" __attribute__((visibility("default"))) int _ZN17arcConfigFromFileD0Ev(void) {
    ALOGD("_ZN17arcConfigFromFileD0Ev() called");
    return 0;
}

/* Demangled: ARCState::ModifyConfigGlobal(arcConfigFromFile const*) */
extern "C" __attribute__((visibility("default"))) int _ZN8ARCState18ModifyConfigGlobalEPK17arcConfigFromFile(void) {
    ALOGD("_ZN8ARCState18ModifyConfigGlobalEPK17arcConfigFromFile() called");
    return 0;
}

/* Demangled: GLContext::~GLContext() */
extern "C" __attribute__((visibility("default"))) int _ZN9GLContextD0Ev(void) {
    ALOGD("_ZN9GLContextD0Ev() called");
    return 0;
}

/* Exported Object: DynamicRESAlgoDVFSPolicy::s_on2off_window */
extern "C" __attribute__((visibility("default"))) void* _ZN24DynamicRESAlgoDVFSPolicy15s_on2off_windowE = NULL;

/* Exported Object: typeinfo for SDAlgoUniformSmooth */
extern "C" __attribute__((visibility("default"))) void* _ZTI19SDAlgoUniformSmooth = NULL;

/* Exported Object: typeinfo for DbgSDAlgoSimple */
extern "C" __attribute__((visibility("default"))) void* _ZTI15DbgSDAlgoSimple = NULL;

/* Demangled: ARCUnregisterGLESv2Hook */
extern "C" __attribute__((visibility("default"))) int ARCUnregisterGLESv2Hook(void) {
    ALOGD("ARCUnregisterGLESv2Hook() called");
    return 0;
}

/* Demangled: SimpleGLRendererES20::SimpleGLRendererES20() */
extern "C" __attribute__((visibility("default"))) int _ZN20SimpleGLRendererES20C1Ev(void) {
    ALOGD("_ZN20SimpleGLRendererES20C1Ev() called");
    return 0;
}

/* Exported Object: vtable for DbgSDAlgoSimple */
extern "C" __attribute__((visibility("default"))) void* _ZTV15DbgSDAlgoSimple = NULL;

/* Demangled: android::Singleton<SDActorFpsLibManager>::Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI20SDActorFpsLibManagerEC2Ev(void) {
    ALOGD("_ZN7android9SingletonI20SDActorFpsLibManagerEC2Ev() called");
    return 0;
}

/* Demangled: SDAlgoSlowMotion::EstimateUniformWithTime(float*) */
extern "C" __attribute__((visibility("default"))) int _ZN16SDAlgoSlowMotion23EstimateUniformWithTimeEPf(void) {
    ALOGD("_ZN16SDAlgoSlowMotion23EstimateUniformWithTimeEPf() called");
    return 0;
}

/* Demangled: glBindBuffer */
extern "C" __attribute__((visibility("default"))) int glBindBuffer(void) {
    ALOGD("glBindBuffer() called");
    return 0;
}

/* Demangled: ARCState::GetFullProcessName(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN8ARCState18GetFullProcessNameERNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES7_(void) {
    ALOGD("_ZN8ARCState18GetFullProcessNameERNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES7_() called");
    return 0;
}

/* Demangled: operator*(MBXColor const&, float) */
extern "C" __attribute__((visibility("default"))) int _ZmlRK8MBXColorf(void) {
    ALOGD("_ZmlRK8MBXColorf() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, shader_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, shader_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, shader_info> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, shader_info>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIj11shader_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIj11shader_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE() called");
    return 0;
}

/* Demangled: DynamicRESAlgoSmokeShader::UseProgram(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN25DynamicRESAlgoSmokeShader10UseProgramEj(void) {
    ALOGD("_ZN25DynamicRESAlgoSmokeShader10UseProgramEj() called");
    return 0;
}

/* Demangled: MBXProgressBar::~MBXProgressBar() */
extern "C" __attribute__((visibility("default"))) int _ZN14MBXProgressBarD0Ev(void) {
    ALOGD("_ZN14MBXProgressBarD0Ev() called");
    return 0;
}

/* Demangled: SimpleGLRendererES20::~SimpleGLRendererES20() */
extern "C" __attribute__((visibility("default"))) int _ZN20SimpleGLRendererES20D2Ev(void) {
    ALOGD("_ZN20SimpleGLRendererES20D2Ev() called");
    return 0;
}

/* Demangled: android::Singleton<GEDServiceClient>::Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI16GEDServiceClientEC2Ev(void) {
    ALOGD("_ZN7android9SingletonI16GEDServiceClientEC2Ev() called");
    return 0;
}

/* Exported Object: typeinfo for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: glDrawArraysInstanced */
extern "C" __attribute__((visibility("default"))) int glDrawArraysInstanced(void) {
    ALOGD("glDrawArraysInstanced() called");
    return 0;
}

/* Demangled: glGetFramebufferParameteriv */
extern "C" __attribute__((visibility("default"))) int glGetFramebufferParameteriv(void) {
    ALOGD("glGetFramebufferParameteriv() called");
    return 0;
}

/* Exported Object: vtable for DbgSDAlgoQADisable */
extern "C" __attribute__((visibility("default"))) void* _ZTV18DbgSDAlgoQADisable = NULL;

/* Demangled: non-virtual thunk to DbgSDAlgoQATxEnable::~DbgSDAlgoQATxEnable() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N19DbgSDAlgoQATxEnableD0Ev(void) {
    ALOGD("_ZThn8_N19DbgSDAlgoQATxEnableD0Ev() called");
    return 0;
}

/* Demangled: eglCreateWindowSurface */
extern "C" __attribute__((visibility("default"))) int eglCreateWindowSurface(void) {
    ALOGD("eglCreateWindowSurface() called");
    return 0;
}

/* Exported Object: typeinfo name for SDAlgoDisable */
extern "C" __attribute__((visibility("default"))) void* _ZTS13SDAlgoDisable = NULL;

/* Exported Object: typeinfo name for arcConfigFromQTService */
extern "C" __attribute__((visibility("default"))) void* _ZTS22arcConfigFromQTService = NULL;

/* Demangled: glGetProgramiv */
extern "C" __attribute__((visibility("default"))) int glGetProgramiv(void) {
    ALOGD("glGetProgramiv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<unsigned int, ProgramCache::ProgramCacheData>, std::__1::__tree_node<std::__1::__value_type<unsigned int, ProgramCache::ProgramCacheData>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<unsigned int, ProgramCache::ProgramCacheData>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, ProgramCache::ProgramCacheData>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, ProgramCache::ProgramCacheData> > >::__emplace_unique_impl<std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int&>, std::__1::tuple<int&, unsigned int&, bool&> >(std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int&>&&, std::__1::tuple<int&, unsigned int&, bool&>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN12ProgramCache16ProgramCacheDataEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE21__emplace_unique_implIJRKNS_21piecewise_construct_tENS_5tupleIJRjEEENSG_IJRiSH_RbEEEEEENS_4pairINS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEbEEDpOT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN12ProgramCache16ProgramCacheDataEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE21__emplace_unique_implIJRKNS_21piecewise_construct_tENS_5tupleIJRjEEENSG_IJRiSH_RbEEEEEENS_4pairINS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEbEEDpOT_() called");
    return 0;
}

/* Demangled: DbgSDAlgoDisable::DbgSDAlgoDisable() */
extern "C" __attribute__((visibility("default"))) int _ZN16DbgSDAlgoDisableC1Ev(void) {
    ALOGD("_ZN16DbgSDAlgoDisableC1Ev() called");
    return 0;
}

/* Exported Object: typeinfo for DbgSDAlgoQACheckEnable */
extern "C" __attribute__((visibility("default"))) void* _ZTI22DbgSDAlgoQACheckEnable = NULL;

/* Exported Object: DynamicRESAlgoDVFSPolicy::s_off2on_window */
extern "C" __attribute__((visibility("default"))) void* _ZN24DynamicRESAlgoDVFSPolicy15s_off2on_windowE = NULL;

/* Demangled: SDActorFpsController::QAGiFTEffectRatio(int, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK20SDActorFpsController17QAGiFTEffectRatioEiPKv(void) {
    ALOGD("_ZNK20SDActorFpsController17QAGiFTEffectRatioEiPKv() called");
    return 0;
}

/* Demangled: arcBuiltinConfig::arcBuiltinConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN16arcBuiltinConfigC1Ev(void) {
    ALOGD("_ZN16arcBuiltinConfigC1Ev() called");
    return 0;
}

/* Demangled: arcConfigFromFile::DebugPrintParams() const */
extern "C" __attribute__((visibility("default"))) int _ZNK17arcConfigFromFile16DebugPrintParamsEv(void) {
    ALOGD("_ZNK17arcConfigFromFile16DebugPrintParamsEv() called");
    return 0;
}

/* Demangled: glDrawElementsInstancedEXT */
extern "C" __attribute__((visibility("default"))) int glDrawElementsInstancedEXT(void) {
    ALOGD("glDrawElementsInstancedEXT() called");
    return 0;
}

/* Demangled: SDAlgoDisable::~SDAlgoDisable() */
extern "C" __attribute__((visibility("default"))) int _ZN13SDAlgoDisableD1Ev(void) {
    ALOGD("_ZN13SDAlgoDisableD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE = NULL;

/* Exported Object: eventMutex */
extern "C" __attribute__((visibility("default"))) void* eventMutex = NULL;

/* Demangled: MBXDigits::DrawDigitalChar(SimpleRenderer*, int, float const*, float const*, float const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9MBXDigits15DrawDigitalCharEP14SimpleRendereriPKfS3_S3_(void) {
    ALOGD("_ZN9MBXDigits15DrawDigitalCharEP14SimpleRendereriPKfS3_S3_() called");
    return 0;
}

/* Demangled: SDAlgoEnable::SDAlgoEnable() */
extern "C" __attribute__((visibility("default"))) int _ZN12SDAlgoEnableC1Ev(void) {
    ALOGD("_ZN12SDAlgoEnableC1Ev() called");
    return 0;
}

/* Demangled: DbgSDAlgoDisable::~DbgSDAlgoDisable() */
extern "C" __attribute__((visibility("default"))) int _ZN16DbgSDAlgoDisableD2Ev(void) {
    ALOGD("_ZN16DbgSDAlgoDisableD2Ev() called");
    return 0;
}

/* Demangled: SDAlgoSlopeSmooth::GetEncipherGValue() const */
extern "C" __attribute__((visibility("default"))) int _ZNK17SDAlgoSlopeSmooth17GetEncipherGValueEv(void) {
    ALOGD("_ZNK17SDAlgoSlopeSmooth17GetEncipherGValueEv() called");
    return 0;
}

/* Demangled: DynamicRESAlgoFusion::~DynamicRESAlgoFusion() */
extern "C" __attribute__((visibility("default"))) int _ZN20DynamicRESAlgoFusionD0Ev(void) {
    ALOGD("_ZN20DynamicRESAlgoFusionD0Ev() called");
    return 0;
}

/* Demangled: DynamicRESActorRenderpassFBO::OverwriteRemappedFramebuffer(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN28DynamicRESActorRenderpassFBO28OverwriteRemappedFramebufferEj(void) {
    ALOGD("_ZN28DynamicRESActorRenderpassFBO28OverwriteRemappedFramebufferEj() called");
    return 0;
}

/* Demangled: arcBuiltinConfig::~arcBuiltinConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN16arcBuiltinConfigD2Ev(void) {
    ALOGD("_ZN16arcBuiltinConfigD2Ev() called");
    return 0;
}

/* Exported Object: vtable for SimpleGLRendererES20 */
extern "C" __attribute__((visibility("default"))) void* _ZTV20SimpleGLRendererES20 = NULL;

/* Demangled: DbgSDAlgoFixFps::~DbgSDAlgoFixFps() */
extern "C" __attribute__((visibility("default"))) int _ZN15DbgSDAlgoFixFpsD0Ev(void) {
    ALOGD("_ZN15DbgSDAlgoFixFpsD0Ev() called");
    return 0;
}

/* Demangled: SharedObjectManager::DeleteRenderbuffers(int, unsigned int const*) */
extern "C" __attribute__((visibility("default"))) int _ZN19SharedObjectManager19DeleteRenderbuffersEiPKj(void) {
    ALOGD("_ZN19SharedObjectManager19DeleteRenderbuffersEiPKj() called");
    return 0;
}

/* Demangled: GLContextInfo::InitExtension() */
extern "C" __attribute__((visibility("default"))) int _ZN13GLContextInfo13InitExtensionEv(void) {
    ALOGD("_ZN13GLContextInfo13InitExtensionEv() called");
    return 0;
}

/* Demangled: glUniform4fv */
extern "C" __attribute__((visibility("default"))) int glUniform4fv(void) {
    ALOGD("glUniform4fv() called");
    return 0;
}

/* Demangled: SDAlgoEnable::~SDAlgoEnable() */
extern "C" __attribute__((visibility("default"))) int _ZN12SDAlgoEnableD2Ev(void) {
    ALOGD("_ZN12SDAlgoEnableD2Ev() called");
    return 0;
}

/* Demangled: oppoConfigFromFile::~oppoConfigFromFile() */
extern "C" __attribute__((visibility("default"))) int _ZN18oppoConfigFromFileD1Ev(void) {
    ALOGD("_ZN18oppoConfigFromFileD1Ev() called");
    return 0;
}

/* Demangled: eglSwapBuffers */
extern "C" __attribute__((visibility("default"))) int eglSwapBuffers(void) {
    ALOGD("eglSwapBuffers() called");
    return 0;
}

/* Demangled: glTexParameteriv */
extern "C" __attribute__((visibility("default"))) int glTexParameteriv(void) {
    ALOGD("glTexParameteriv() called");
    return 0;
}

/* Demangled: isCalledFromHWUI() */
extern "C" __attribute__((visibility("default"))) int _Z16isCalledFromHWUIv(void) {
    ALOGD("_Z16isCalledFromHWUIv() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::multimap<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >*>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::multimap<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >*>, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::multimap<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::multimap<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::multimap<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >*> > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPNS_8multimapIS7_S7_NS_4lessIS7_EENS5_INS_4pairIKS7_S7_EEEEEEEENS_19__map_value_compareIS7_SH_SA_Lb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_PvEEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPNS_8multimapIS7_S7_NS_4lessIS7_EENS5_INS_4pairIKS7_S7_EEEEEEEENS_19__map_value_compareIS7_SH_SA_Lb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_PvEEiEERKT_() called");
    return 0;
}

/* Demangled: glGetRenderbufferParameteriv */
extern "C" __attribute__((visibility("default"))) int glGetRenderbufferParameteriv(void) {
    ALOGD("glGetRenderbufferParameteriv() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::DispatchComputeBegin() */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl20DispatchComputeBeginEv(void) {
    ALOGD("_ZN18TextureReplaceImpl20DispatchComputeBeginEv() called");
    return 0;
}

/* Demangled: android::Singleton<ARCTouchEventDispatcher>::hasInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI23ARCTouchEventDispatcherE11hasInstanceEv(void) {
    ALOGD("_ZN7android9SingletonI23ARCTouchEventDispatcherE11hasInstanceEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<ARCEventListener*, std::__1::allocator<ARCEventListener*> >::__push_back_slow_path<ARCEventListener* const&>(ARCEventListener* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP16ARCEventListenerNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIP16ARCEventListenerNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_() called");
    return 0;
}

/* Exported Object: SystemInfo::s_gpu_freq_cur */
extern "C" __attribute__((visibility("default"))) void* _ZN10SystemInfo14s_gpu_freq_curE = NULL;

/* Demangled: SceneDetector::SceneDetector() */
extern "C" __attribute__((visibility("default"))) int _ZN13SceneDetectorC2Ev(void) {
    ALOGD("_ZN13SceneDetectorC2Ev() called");
    return 0;
}

/* Demangled: ARC_GLUE::postRebuildCallchain(MEOW_plugin_t*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8ARC_GLUE20postRebuildCallchainEP13MEOW_plugin_tj(void) {
    ALOGD("_ZN8ARC_GLUE20postRebuildCallchainEP13MEOW_plugin_tj() called");
    return 0;
}

/* Demangled: glDrawRangeElements */
extern "C" __attribute__((visibility("default"))) int glDrawRangeElements(void) {
    ALOGD("glDrawRangeElements() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_() called");
    return 0;
}

/* Exported Object: typeinfo name for DbgSDAlgoQAEnable */
extern "C" __attribute__((visibility("default"))) void* _ZTS17DbgSDAlgoQAEnable = NULL;

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev() called");
    return 0;
}

/* Exported Object: DynamicRESAlgoComputeShader::s_algoSlotIndex */
extern "C" __attribute__((visibility("default"))) void* _ZN27DynamicRESAlgoComputeShader15s_algoSlotIndexE = NULL;

/* Demangled: DynamicRESAlgoComputeShader::DynamicRESAlgoComputeShader(GLContextInfo&, DynamicRESAlgoBase*) */
extern "C" __attribute__((visibility("default"))) int _ZN27DynamicRESAlgoComputeShaderC2ER13GLContextInfoP18DynamicRESAlgoBase(void) {
    ALOGD("_ZN27DynamicRESAlgoComputeShaderC2ER13GLContextInfoP18DynamicRESAlgoBase() called");
    return 0;
}

/* Exported Object: typeinfo for DynamicRESAlgoSwitch */
extern "C" __attribute__((visibility("default"))) void* _ZTI20DynamicRESAlgoSwitch = NULL;

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: DbgSDAlgoMBoxUtility::ResetOverallFpsState() */
extern "C" __attribute__((visibility("default"))) int _ZN20DbgSDAlgoMBoxUtility20ResetOverallFpsStateEv(void) {
    ALOGD("_ZN20DbgSDAlgoMBoxUtility20ResetOverallFpsStateEv() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: std::__1::__shared_ptr_emplace<DynamicRESAlgoSmokeShader::SharedResource, std::__1::allocator<DynamicRESAlgoSmokeShader::SharedResource> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN25DynamicRESAlgoSmokeShader14SharedResourceENS_9allocatorIS2_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN25DynamicRESAlgoSmokeShader14SharedResourceENS_9allocatorIS2_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: glGetTexParameterfv */
extern "C" __attribute__((visibility("default"))) int glGetTexParameterfv(void) {
    ALOGD("glGetTexParameterfv() called");
    return 0;
}

/* Demangled: SharedObjectManager::DeleteShader(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN19SharedObjectManager12DeleteShaderEj(void) {
    ALOGD("_ZN19SharedObjectManager12DeleteShaderEj() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::SetTexImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl13SetTexImage2DEjiiiiijjPKv(void) {
    ALOGD("_ZN18TextureReplaceImpl13SetTexImage2DEjiiiiijjPKv() called");
    return 0;
}

/* Demangled: MBXProgressBar::MBXProgressBar(MBXRect const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MBXProgressBarC1ERK7MBXRect(void) {
    ALOGD("_ZN14MBXProgressBarC1ERK7MBXRect() called");
    return 0;
}

/* Exported Object: typeinfo name for DbgSDAlgoSimple */
extern "C" __attribute__((visibility("default"))) void* _ZTS15DbgSDAlgoSimple = NULL;

/* Exported Object: typeinfo name for DbgTextureReplaceMBox */
extern "C" __attribute__((visibility("default"))) void* _ZTS21DbgTextureReplaceMBox = NULL;

/* Demangled: arcConfigFromFile::~arcConfigFromFile() */
extern "C" __attribute__((visibility("default"))) int _ZN17arcConfigFromFileD1Ev(void) {
    ALOGD("_ZN17arcConfigFromFileD1Ev() called");
    return 0;
}

/* Demangled: MBXRect::MBXRect(float, float, float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN7MBXRectC1Effff(void) {
    ALOGD("_ZN7MBXRectC1Effff() called");
    return 0;
}

/* Exported Object: SDAlgoBase::sScene2fpsMap */
extern "C" __attribute__((visibility("default"))) void* _ZN10SDAlgoBase13sScene2fpsMapE = NULL;

/* Demangled: non-virtual thunk to DbgSDAlgoFull::NotifyTouchEvent(TouchEventHistory const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn172_N13DbgSDAlgoFull16NotifyTouchEventEPK17TouchEventHistory(void) {
    ALOGD("_ZThn172_N13DbgSDAlgoFull16NotifyTouchEventEPK17TouchEventHistory() called");
    return 0;
}

/* Demangled: ARCState::SetGiFT2Parameters(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8ARCState18SetGiFT2ParametersEPKcj(void) {
    ALOGD("_ZN8ARCState18SetGiFT2ParametersEPKcj() called");
    return 0;
}

/* Demangled: GLContext::~GLContext() */
extern "C" __attribute__((visibility("default"))) int _ZN9GLContextD1Ev(void) {
    ALOGD("_ZN9GLContextD1Ev() called");
    return 0;
}

/* Demangled: DbgTextureReplaceImpl::DbgTextureReplaceImpl(GLContextInfo&, TextureReplaceImpl*) */
extern "C" __attribute__((visibility("default"))) int _ZN21DbgTextureReplaceImplC1ER13GLContextInfoP18TextureReplaceImpl(void) {
    ALOGD("_ZN21DbgTextureReplaceImplC1ER13GLContextInfoP18TextureReplaceImpl() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: glBufferSubData */
extern "C" __attribute__((visibility("default"))) int glBufferSubData(void) {
    ALOGD("glBufferSubData() called");
    return 0;
}

/* Exported Object: typeinfo for MDynamicFpsImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTI15MDynamicFpsImpl = NULL;

/* Demangled: TextureReplaceImpl::OverwriteRemappedTextureFilterIfUseMultisampled(std::__1::__map_iterator<std::__1::__tree_iterator<std::__1::__value_type<unsigned int, TextureReplaceImpl::name_info>, std::__1::__tree_node<std::__1::__value_type<unsigned int, TextureReplaceImpl::name_info>, void*>*, int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl47OverwriteRemappedTextureFilterIfUseMultisampledERNSt3__114__map_iteratorINS0_15__tree_iteratorINS0_12__value_typeIjNS_9name_infoEEEPNS0_11__tree_nodeIS5_PvEEiEEEE(void) {
    ALOGD("_ZN18TextureReplaceImpl47OverwriteRemappedTextureFilterIfUseMultisampledERNSt3__114__map_iteratorINS0_15__tree_iteratorINS0_12__value_typeIjNS_9name_infoEEEPNS0_11__tree_nodeIS5_PvEEiEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE() called");
    return 0;
}

/* Exported Object: vtable for SDActorFpsController */
extern "C" __attribute__((visibility("default"))) void* _ZTV20SDActorFpsController = NULL;

/* Demangled: android::Singleton<QTServiceClient>::hasInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI15QTServiceClientE11hasInstanceEv(void) {
    ALOGD("_ZN7android9SingletonI15QTServiceClientE11hasInstanceEv() called");
    return 0;
}

/* Exported Object: vtable for MDynamicFpsImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTV15MDynamicFpsImpl = NULL;

/* Demangled: SimpleGLRendererES20::SimpleGLRendererES20() */
extern "C" __attribute__((visibility("default"))) int _ZN20SimpleGLRendererES20C2Ev(void) {
    ALOGD("_ZN20SimpleGLRendererES20C2Ev() called");
    return 0;
}

/* Demangled: SDAlgoDisable::Detect() */
extern "C" __attribute__((visibility("default"))) int _ZN13SDAlgoDisable6DetectEv(void) {
    ALOGD("_ZN13SDAlgoDisable6DetectEv() called");
    return 0;
}

/* Exported Object: typeinfo for ARCEventListener */
extern "C" __attribute__((visibility("default"))) void* _ZTI16ARCEventListener = NULL;

/* Exported Object: g_attachment */
extern "C" __attribute__((visibility("default"))) void* g_attachment = NULL;

/* Demangled: glDiscardFramebufferEXT */
extern "C" __attribute__((visibility("default"))) int glDiscardFramebufferEXT(void) {
    ALOGD("glDiscardFramebufferEXT() called");
    return 0;
}

/* Demangled: glTranslatef */
extern "C" __attribute__((visibility("default"))) int glTranslatef(void) {
    ALOGD("glTranslatef() called");
    return 0;
}

/* Demangled: GLContextInfo::GLContextInfo(int, GLContextInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN13GLContextInfoC2EiPS_(void) {
    ALOGD("_ZN13GLContextInfoC2EiPS_() called");
    return 0;
}

/* Exported Object: gContextTable */
extern "C" __attribute__((visibility("default"))) void* gContextTable = NULL;

/* Demangled: MBXProgressBar::~MBXProgressBar() */
extern "C" __attribute__((visibility("default"))) int _ZN14MBXProgressBarD1Ev(void) {
    ALOGD("_ZN14MBXProgressBarD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE8_NS_13basic_ostreamIcS2_EE = NULL;

/* Exported Object: typeinfo name for DbgSDAlgoAEDisable */
extern "C" __attribute__((visibility("default"))) void* _ZTS18DbgSDAlgoAEDisable = NULL;

/* Demangled: non-virtual thunk to DbgSDAlgoQATxEnable::~DbgSDAlgoQATxEnable() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N19DbgSDAlgoQATxEnableD1Ev(void) {
    ALOGD("_ZThn8_N19DbgSDAlgoQATxEnableD1Ev() called");
    return 0;
}

/* Demangled: ARCDisableCheckingHWUI() */
extern "C" __attribute__((visibility("default"))) int _Z22ARCDisableCheckingHWUIv(void) {
    ALOGD("_Z22ARCDisableCheckingHWUIv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::setbuf(char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci() called");
    return 0;
}

/* Exported Object: typeinfo name for DynamicRESAlgoDVFSPolicy */
extern "C" __attribute__((visibility("default"))) void* _ZTS24DynamicRESAlgoDVFSPolicy = NULL;

/* Demangled: arcConfigFromFile::GetOption(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >&, char const*, char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK17arcConfigFromFile9GetOptionERNSt3__16vectorINS0_12basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEENS5_IS7_EEEEPKcSC_(void) {
    ALOGD("_ZNK17arcConfigFromFile9GetOptionERNSt3__16vectorINS0_12basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEENS5_IS7_EEEEPKcSC_() called");
    return 0;
}

/* Demangled: SDAlgoDisable::SDAlgoDisable() */
extern "C" __attribute__((visibility("default"))) int _ZN13SDAlgoDisableC1Ev(void) {
    ALOGD("_ZN13SDAlgoDisableC1Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Exported Object: android::Singleton<SDActorFpsLibManager>::sInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9SingletonI20SDActorFpsLibManagerE9sInstanceE = NULL;

/* Demangled: eglIsNeedWhiteListCbGiFT */
extern "C" __attribute__((visibility("default"))) int eglIsNeedWhiteListCbGiFT(void) {
    ALOGD("eglIsNeedWhiteListCbGiFT() called");
    return 0;
}

/* Demangled: glBindImageTexture */
extern "C" __attribute__((visibility("default"))) int glBindImageTexture(void) {
    ALOGD("glBindImageTexture() called");
    return 0;
}

/* Demangled: MBXDigits::MBXDigits(MBXRect const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9MBXDigitsC1ERK7MBXRect(void) {
    ALOGD("_ZN9MBXDigitsC1ERK7MBXRect() called");
    return 0;
}

/* Demangled: DbgSDAlgoDisable::DbgSDAlgoDisable() */
extern "C" __attribute__((visibility("default"))) int _ZN16DbgSDAlgoDisableC2Ev(void) {
    ALOGD("_ZN16DbgSDAlgoDisableC2Ev() called");
    return 0;
}

/* Demangled: DbgSDAlgoMultiSwitch::NotifyTouchEvent(TouchEventHistory const*) */
extern "C" __attribute__((visibility("default"))) int _ZN20DbgSDAlgoMultiSwitch16NotifyTouchEventEPK17TouchEventHistory(void) {
    ALOGD("_ZN20DbgSDAlgoMultiSwitch16NotifyTouchEventEPK17TouchEventHistory() called");
    return 0;
}

/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__emplace_back_slow_path<unsigned int&>(unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE24__emplace_back_slow_pathIJRjEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE24__emplace_back_slow_pathIJRjEEEvDpOT_() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::ValidateHookTextureState(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl24ValidateHookTextureStateEj(void) {
    ALOGD("_ZN18TextureReplaceImpl24ValidateHookTextureStateEj() called");
    return 0;
}

/* Demangled: DynamicRESAlgoSmokeShader::GetProgramBinary(unsigned int, int, int*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN25DynamicRESAlgoSmokeShader16GetProgramBinaryEjiPiPv(void) {
    ALOGD("_ZN25DynamicRESAlgoSmokeShader16GetProgramBinaryEjiPiPv() called");
    return 0;
}

/* Exported Object: typeinfo for DynamicRESAlgoComputeShader */
extern "C" __attribute__((visibility("default"))) void* _ZTI27DynamicRESAlgoComputeShader = NULL;

/* Demangled: arcBuiltinConfig::arcBuiltinConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN16arcBuiltinConfigC2Ev(void) {
    ALOGD("_ZN16arcBuiltinConfigC2Ev() called");
    return 0;
}

/* Demangled: oppoConfigFromFile::DebugPrintParams() const */
extern "C" __attribute__((visibility("default"))) int _ZNK18oppoConfigFromFile16DebugPrintParamsEv(void) {
    ALOGD("_ZNK18oppoConfigFromFile16DebugPrintParamsEv() called");
    return 0;
}

/* Demangled: MBXPoint::MBXPoint(float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN8MBXPointC2Eff(void) {
    ALOGD("_ZN8MBXPointC2Eff() called");
    return 0;
}

/* Demangled: SDAlgoDisable::~SDAlgoDisable() */
extern "C" __attribute__((visibility("default"))) int _ZN13SDAlgoDisableD2Ev(void) {
    ALOGD("_ZN13SDAlgoDisableD2Ev() called");
    return 0;
}

/* Demangled: DbgDynamicResImpl::DbgDynamicResImpl(int, DynamicResImpl*) */
extern "C" __attribute__((visibility("default"))) int _ZN17DbgDynamicResImplC2EiP14DynamicResImpl(void) {
    ALOGD("_ZN17DbgDynamicResImplC2EiP14DynamicResImpl() called");
    return 0;
}

/* Exported Object: typeinfo for DynamicRESAlgoFusion */
extern "C" __attribute__((visibility("default"))) void* _ZTI20DynamicRESAlgoFusion = NULL;

/* Demangled: arcConfigFromFile::GetOptionMRES(char*, unsigned int, char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK17arcConfigFromFile13GetOptionMRESEPcjPKc(void) {
    ALOGD("_ZNK17arcConfigFromFile13GetOptionMRESEPcjPKc() called");
    return 0;
}

/* Demangled: glGenerateMipmap */
extern "C" __attribute__((visibility("default"))) int glGenerateMipmap(void) {
    ALOGD("glGenerateMipmap() called");
    return 0;
}

/* Demangled: ARCRegisterGLESv2Hook */
extern "C" __attribute__((visibility("default"))) int ARCRegisterGLESv2Hook(void) {
    ALOGD("ARCRegisterGLESv2Hook() called");
    return 0;
}

/* Demangled: SDAlgoEnable::SDAlgoEnable() */
extern "C" __attribute__((visibility("default"))) int _ZN12SDAlgoEnableC2Ev(void) {
    ALOGD("_ZN12SDAlgoEnableC2Ev() called");
    return 0;
}

/* Demangled: DynamicRESAlgoFusion::~DynamicRESAlgoFusion() */
extern "C" __attribute__((visibility("default"))) int _ZN20DynamicRESAlgoFusionD1Ev(void) {
    ALOGD("_ZN20DynamicRESAlgoFusionD1Ev() called");
    return 0;
}

/* Demangled: eglTouchInitializeGIFT */
extern "C" __attribute__((visibility("default"))) int eglTouchInitializeGIFT(void) {
    ALOGD("eglTouchInitializeGIFT() called");
    return 0;
}

/* Demangled: DbgSDAlgoFixFps::~DbgSDAlgoFixFps() */
extern "C" __attribute__((visibility("default"))) int _ZN15DbgSDAlgoFixFpsD1Ev(void) {
    ALOGD("_ZN15DbgSDAlgoFixFpsD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: typeinfo name for oppoConfigFromService */
extern "C" __attribute__((visibility("default"))) void* _ZTS21oppoConfigFromService = NULL;

/* Demangled: DbgSDAlgoFull::NotifyTouchEvent(TouchEventHistory const*) */
extern "C" __attribute__((visibility("default"))) int _ZN13DbgSDAlgoFull16NotifyTouchEventEPK17TouchEventHistory(void) {
    ALOGD("_ZN13DbgSDAlgoFull16NotifyTouchEventEPK17TouchEventHistory() called");
    return 0;
}

/* Demangled: DbgSDAlgoSimple::GraphSetLayoutState(SDAppType) */
extern "C" __attribute__((visibility("default"))) int _ZN15DbgSDAlgoSimple19GraphSetLayoutStateE9SDAppType(void) {
    ALOGD("_ZN15DbgSDAlgoSimple19GraphSetLayoutStateE9SDAppType() called");
    return 0;
}

/* Demangled: GLContextInfo::UpdateDepthAttachmentSize(unsigned int, unsigned int, int, framebuffer_info&) */
extern "C" __attribute__((visibility("default"))) int _ZN13GLContextInfo25UpdateDepthAttachmentSizeEjjiR16framebuffer_info(void) {
    ALOGD("_ZN13GLContextInfo25UpdateDepthAttachmentSizeEjjiR16framebuffer_info() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::GetIntegerv(unsigned int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl11GetIntegervEjPi(void) {
    ALOGD("_ZN18TextureReplaceImpl11GetIntegervEjPi() called");
    return 0;
}

/* Demangled: oppoConfigFromFile::~oppoConfigFromFile() */
extern "C" __attribute__((visibility("default"))) int _ZN18oppoConfigFromFileD2Ev(void) {
    ALOGD("_ZN18oppoConfigFromFileD2Ev() called");
    return 0;
}

/* Demangled: glDrawArraysIndirect */
extern "C" __attribute__((visibility("default"))) int glDrawArraysIndirect(void) {
    ALOGD("glDrawArraysIndirect() called");
    return 0;
}

/* Demangled: glTexParameterIiv */
extern "C" __attribute__((visibility("default"))) int glTexParameterIiv(void) {
    ALOGD("glTexParameterIiv() called");
    return 0;
}

/* Demangled: MBXColor::MBXColor(float, float, float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN8MBXColorC1Effff(void) {
    ALOGD("_ZN8MBXColorC1Effff() called");
    return 0;
}

/* Demangled: DbgTextureReplaceMBox::SetRatio(unsigned int, float) */
extern "C" __attribute__((visibility("default"))) int _ZN21DbgTextureReplaceMBox8SetRatioEjf(void) {
    ALOGD("_ZN21DbgTextureReplaceMBox8SetRatioEjf() called");
    return 0;
}

/* Demangled: DynamicRESActorNone::SwapBuffers() */
extern "C" __attribute__((visibility("default"))) int _ZN19DynamicRESActorNone11SwapBuffersEv(void) {
    ALOGD("_ZN19DynamicRESActorNone11SwapBuffersEv() called");
    return 0;
}

/* Demangled: SDAlgoGameFpsControl::~SDAlgoGameFpsControl() */
extern "C" __attribute__((visibility("default"))) int _ZN20SDAlgoGameFpsControlD0Ev(void) {
    ALOGD("_ZN20SDAlgoGameFpsControlD0Ev() called");
    return 0;
}

/* Exported Object: android::Singleton<QTServiceClient>::sLock */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9SingletonI15QTServiceClientE5sLockE = NULL;

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev() called");
    return 0;
}

/* Demangled: glShaderSource */
extern "C" __attribute__((visibility("default"))) int glShaderSource(void) {
    ALOGD("glShaderSource() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::DisableAction() */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl13DisableActionEv(void) {
    ALOGD("_ZN18TextureReplaceImpl13DisableActionEv() called");
    return 0;
}

/* Demangled: SDAlgoSlopeSmooth::UpdateFrameData(GLFrameData const&) */
extern "C" __attribute__((visibility("default"))) int _ZN17SDAlgoSlopeSmooth15UpdateFrameDataERK11GLFrameData(void) {
    ALOGD("_ZN17SDAlgoSlopeSmooth15UpdateFrameDataERK11GLFrameData() called");
    return 0;
}

/* Demangled: ARCState::FlushOption_int(ArcConfigOpt) */
extern "C" __attribute__((visibility("default"))) int _ZN8ARCState15FlushOption_intE12ArcConfigOpt(void) {
    ALOGD("_ZN8ARCState15FlushOption_intE12ArcConfigOpt() called");
    return 0;
}

/* Exported Object: WL10 */
extern "C" __attribute__((visibility("default"))) void* WL10 = NULL;

/* Exported Object: vtable for MBXAlphabet */
extern "C" __attribute__((visibility("default"))) void* _ZTV11MBXAlphabet = NULL;

/* Demangled: ARCState::ReadAllProperty() */
extern "C" __attribute__((visibility("default"))) int _ZN8ARCState15ReadAllPropertyEv(void) {
    ALOGD("_ZN8ARCState15ReadAllPropertyEv() called");
    return 0;
}

/* Exported Object: WL11 */
extern "C" __attribute__((visibility("default"))) void* WL11 = NULL;

/* Exported Object: typeinfo name for GLContext */
extern "C" __attribute__((visibility("default"))) void* _ZTS9GLContext = NULL;

/* Exported Object: typeinfo name for MBXProgressBar */
extern "C" __attribute__((visibility("default"))) void* _ZTS14MBXProgressBar = NULL;

/* Exported Object: vtable for DbgSDAlgoQATxDisable */
extern "C" __attribute__((visibility("default"))) void* _ZTV20DbgSDAlgoQATxDisable = NULL;

/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__emplace_back_slow_path<int>(int&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE24__emplace_back_slow_pathIJiEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE24__emplace_back_slow_pathIJiEEEvDpOT_() called");
    return 0;
}

/* Exported Object: SDAlgoSlopeSmooth::sSceneChangeDuration */
extern "C" __attribute__((visibility("default"))) void* _ZN17SDAlgoSlopeSmooth20sSceneChangeDurationE = NULL;

/* Demangled: arcConfigFromQTService::DebugPrintParams() const */
extern "C" __attribute__((visibility("default"))) int _ZNK22arcConfigFromQTService16DebugPrintParamsEv(void) {
    ALOGD("_ZNK22arcConfigFromQTService16DebugPrintParamsEv() called");
    return 0;
}

/* Exported Object: WL12 */
extern "C" __attribute__((visibility("default"))) void* WL12 = NULL;

/* Demangled: TextureReplaceImpl::BindFrameBufferBegin(unsigned int, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl20BindFrameBufferBeginEjRj(void) {
    ALOGD("_ZN18TextureReplaceImpl20BindFrameBufferBeginEjRj() called");
    return 0;
}

/* Exported Object: typeinfo name for SDAlgoSlopeSmooth */
extern "C" __attribute__((visibility("default"))) void* _ZTS17SDAlgoSlopeSmooth = NULL;

/* Exported Object: SDAlgoSlowMotion::sSlowStaticFrameThreshold */
extern "C" __attribute__((visibility("default"))) void* _ZN16SDAlgoSlowMotion25sSlowStaticFrameThresholdE = NULL;

/* Demangled: glGetActiveUniform */
extern "C" __attribute__((visibility("default"))) int glGetActiveUniform(void) {
    ALOGD("glGetActiveUniform() called");
    return 0;
}

/* Demangled: ARCState::IsTracingEnabled() */
extern "C" __attribute__((visibility("default"))) int _ZN8ARCState16IsTracingEnabledEv(void) {
    ALOGD("_ZN8ARCState16IsTracingEnabledEv() called");
    return 0;
}

/* Exported Object: WL13 */
extern "C" __attribute__((visibility("default"))) void* WL13 = NULL;

/* Demangled: ARCRequestCheckingHWUI() */
extern "C" __attribute__((visibility("default"))) int _Z22ARCRequestCheckingHWUIv(void) {
    ALOGD("_Z22ARCRequestCheckingHWUIv() called");
    return 0;
}

/* Exported Object: typeinfo name for MDynamicFpsImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTS15MDynamicFpsImpl = NULL;

/* Demangled: DbgSDAlgoMultiSwitch::~DbgSDAlgoMultiSwitch() */
extern "C" __attribute__((visibility("default"))) int _ZN20DbgSDAlgoMultiSwitchD0Ev(void) {
    ALOGD("_ZN20DbgSDAlgoMultiSwitchD0Ev() called");
    return 0;
}

/* Exported Object: SDAlgoListBasedStatistic::sP2NonVBOVBORate */
extern "C" __attribute__((visibility("default"))) void* _ZN24SDAlgoListBasedStatistic16sP2NonVBOVBORateE = NULL;

/* Demangled: arcConfigFromFile::~arcConfigFromFile() */
extern "C" __attribute__((visibility("default"))) int _ZN17arcConfigFromFileD2Ev(void) {
    ALOGD("_ZN17arcConfigFromFileD2Ev() called");
    return 0;
}

/* Demangled: ARC_GLUE::getHookTable() */
extern "C" __attribute__((visibility("default"))) int _ZN8ARC_GLUE12getHookTableEv(void) {
    ALOGD("_ZN8ARC_GLUE12getHookTableEv() called");
    return 0;
}

/* Demangled: glTexStorage2DEXT */
extern "C" __attribute__((visibility("default"))) int glTexStorage2DEXT(void) {
    ALOGD("glTexStorage2DEXT() called");
    return 0;
}

/* Exported Object: WL14 */
extern "C" __attribute__((visibility("default"))) void* WL14 = NULL;

/* Demangled: DbgSDAlgoMBoxUtility::GraphInitTx() */
extern "C" __attribute__((visibility("default"))) int _ZN20DbgSDAlgoMBoxUtility11GraphInitTxEv(void) {
    ALOGD("_ZN20DbgSDAlgoMBoxUtility11GraphInitTxEv() called");
    return 0;
}

/* Exported Object: SDAlgoSlowMotion::sSlowDetectWindow */
extern "C" __attribute__((visibility("default"))) void* _ZN16SDAlgoSlowMotion17sSlowDetectWindowE = NULL;

/* Demangled: glTexImage2D */
extern "C" __attribute__((visibility("default"))) int glTexImage2D(void) {
    ALOGD("glTexImage2D() called");
    return 0;
}

/* Demangled: glTranslatex */
extern "C" __attribute__((visibility("default"))) int glTranslatex(void) {
    ALOGD("glTranslatex() called");
    return 0;
}

/* Exported Object: WL15 */
extern "C" __attribute__((visibility("default"))) void* WL15 = NULL;

/* Demangled: GLContext::~GLContext() */
extern "C" __attribute__((visibility("default"))) int _ZN9GLContextD2Ev(void) {
    ALOGD("_ZN9GLContextD2Ev() called");
    return 0;
}

/* Demangled: DynamicRESActorFusion::DynamicRESActorFusion(GLContextInfo&, TextureReplaceImpl*) */
extern "C" __attribute__((visibility("default"))) int _ZN21DynamicRESActorFusionC2ER13GLContextInfoP18TextureReplaceImpl(void) {
    ALOGD("_ZN21DynamicRESActorFusionC2ER13GLContextInfoP18TextureReplaceImpl() called");
    return 0;
}

/* Demangled: SDAlgoSlowMotion::~SDAlgoSlowMotion() */
extern "C" __attribute__((visibility("default"))) int _ZN16SDAlgoSlowMotionD0Ev(void) {
    ALOGD("_ZN16SDAlgoSlowMotionD0Ev() called");
    return 0;
}

/* Exported Object: WL16 */
extern "C" __attribute__((visibility("default"))) void* WL16 = NULL;

/* Exported Object: eventThread */
extern "C" __attribute__((visibility("default"))) void* eventThread = NULL;

/* Demangled: SimpleGLRendererES11::Draw(int, float const*, float const*) */
extern "C" __attribute__((visibility("default"))) int _ZN20SimpleGLRendererES114DrawEiPKfS1_(void) {
    ALOGD("_ZN20SimpleGLRendererES114DrawEiPKfS1_() called");
    return 0;
}

/* Demangled: DbgTextureReplaceImpl::SwapBuffers() */
extern "C" __attribute__((visibility("default"))) int _ZN21DbgTextureReplaceImpl11SwapBuffersEv(void) {
    ALOGD("_ZN21DbgTextureReplaceImpl11SwapBuffersEv() called");
    return 0;
}

/* Demangled: oppoConfigFromFile::oppoConfigFromFile(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN18oppoConfigFromFileC1EPKc(void) {
    ALOGD("_ZN18oppoConfigFromFileC1EPKc() called");
    return 0;
}

/* Exported Object: WL17 */
extern "C" __attribute__((visibility("default"))) void* WL17 = NULL;

/* Demangled: MBXProgressBar::MBXProgressBar() */
extern "C" __attribute__((visibility("default"))) int _ZN14MBXProgressBarC1Ev(void) {
    ALOGD("_ZN14MBXProgressBarC1Ev() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::ReadPixelsBegin(int, int, int, int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl15ReadPixelsBeginEiiiijj(void) {
    ALOGD("_ZN18TextureReplaceImpl15ReadPixelsBeginEiiiijj() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<DynamicRESAlgoSmokeShader::SharedResource, std::__1::allocator<DynamicRESAlgoSmokeShader::SharedResource> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN25DynamicRESAlgoSmokeShader14SharedResourceENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN25DynamicRESAlgoSmokeShader14SharedResourceENS_9allocatorIS2_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Exported Object: WL18 */
extern "C" __attribute__((visibility("default"))) void* WL18 = NULL;

/* Exported Object: vtable for DbgSDAlgoQACheckEnable */
extern "C" __attribute__((visibility("default"))) void* _ZTV22DbgSDAlgoQACheckEnable = NULL;

/* Exported Object: typeinfo for IConfigImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTI11IConfigImpl = NULL;

/* Demangled: MBXProgressBar::~MBXProgressBar() */
extern "C" __attribute__((visibility("default"))) int _ZN14MBXProgressBarD2Ev(void) {
    ALOGD("_ZN14MBXProgressBarD2Ev() called");
    return 0;
}

/* Exported Object: DbgSDAlgoMBoxUtility::sDbgResetOverallFpsX */
extern "C" __attribute__((visibility("default"))) void* _ZN20DbgSDAlgoMBoxUtility20sDbgResetOverallFpsXE = NULL;

/* Demangled: glTexParameterIuiv */
extern "C" __attribute__((visibility("default"))) int glTexParameterIuiv(void) {
    ALOGD("glTexParameterIuiv() called");
    return 0;
}

/* Demangled: android::Singleton<ARCTouchEventDispatcher>::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI23ARCTouchEventDispatcherE11getInstanceEv(void) {
    ALOGD("_ZN7android9SingletonI23ARCTouchEventDispatcherE11getInstanceEv() called");
    return 0;
}

/* Demangled: DynamicRESActorDefaultFBO::GetDefaultFramebufferInternalFormat(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN25DynamicRESActorDefaultFBO35GetDefaultFramebufferInternalFormatEjj(void) {
    ALOGD("_ZN25DynamicRESActorDefaultFBO35GetDefaultFramebufferInternalFormatEjj() called");
    return 0;
}

/* Demangled: DynamicRESActorRenderpassFBO::SetTexParameterIivEnd(unsigned int, unsigned int, int const*) */
extern "C" __attribute__((visibility("default"))) int _ZN28DynamicRESActorRenderpassFBO21SetTexParameterIivEndEjjPKi(void) {
    ALOGD("_ZN28DynamicRESActorRenderpassFBO21SetTexParameterIivEndEjjPKi() called");
    return 0;
}

/* Demangled: glRotatef */
extern "C" __attribute__((visibility("default"))) int glRotatef(void) {
    ALOGD("glRotatef() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<char const*, void*>, std::__1::__map_value_compare<char const*, std::__1::__value_type<char const*, void*>, ARC_GLUE::char_cmp, true>, std::__1::allocator<std::__1::__value_type<char const*, void*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<char const*, void*>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIPKcPvEENS_19__map_value_compareIS3_S5_N8ARC_GLUE8char_cmpELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_S4_EE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIPKcPvEENS_19__map_value_compareIS3_S5_N8ARC_GLUE8char_cmpELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_S4_EE() called");
    return 0;
}

/* Demangled: MBXPoint::MBXPoint(float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN8MBXPointC1Eff(void) {
    ALOGD("_ZN8MBXPointC1Eff() called");
    return 0;
}

/* Demangled: SDAlgoDisable::SDAlgoDisable() */
extern "C" __attribute__((visibility("default"))) int _ZN13SDAlgoDisableC2Ev(void) {
    ALOGD("_ZN13SDAlgoDisableC2Ev() called");
    return 0;
}

/* Demangled: DynamicRESAlgoComputeShader::~DynamicRESAlgoComputeShader() */
extern "C" __attribute__((visibility("default"))) int _ZN27DynamicRESAlgoComputeShaderD0Ev(void) {
    ALOGD("_ZN27DynamicRESAlgoComputeShaderD0Ev() called");
    return 0;
}

/* Demangled: MBXDigits::Present(SimpleRenderer*) */
extern "C" __attribute__((visibility("default"))) int _ZN9MBXDigits7PresentEP14SimpleRenderer(void) {
    ALOGD("_ZN9MBXDigits7PresentEP14SimpleRenderer() called");
    return 0;
}

/* Demangled: DbgSDAlgoQACheckEnable::ShowES1(SDAppType) */
extern "C" __attribute__((visibility("default"))) int _ZN22DbgSDAlgoQACheckEnable7ShowES1E9SDAppType(void) {
    ALOGD("_ZN22DbgSDAlgoQACheckEnable7ShowES1E9SDAppType() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::DeleteFramebuffers(int, unsigned int const*) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl18DeleteFramebuffersEiPKj(void) {
    ALOGD("_ZN18TextureReplaceImpl18DeleteFramebuffersEiPKj() called");
    return 0;
}

/* Demangled: glColorMask */
extern "C" __attribute__((visibility("default"))) int glColorMask(void) {
    ALOGD("glColorMask() called");
    return 0;
}

/* Demangled: glDrawBuffersNV */
extern "C" __attribute__((visibility("default"))) int glDrawBuffersNV(void) {
    ALOGD("glDrawBuffersNV() called");
    return 0;
}

/* Demangled: DbgSDAlgoFixFps::DbgSDAlgoFixFps() */
extern "C" __attribute__((visibility("default"))) int _ZN15DbgSDAlgoFixFpsC1Ev(void) {
    ALOGD("_ZN15DbgSDAlgoFixFpsC1Ev() called");
    return 0;
}

/* Demangled: TextureReplaceFactory::~TextureReplaceFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN21TextureReplaceFactoryD1Ev(void) {
    ALOGD("_ZN21TextureReplaceFactoryD1Ev() called");
    return 0;
}

/* Demangled: DynamicFpsImpl::~DynamicFpsImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN14DynamicFpsImplD0Ev(void) {
    ALOGD("_ZN14DynamicFpsImplD0Ev() called");
    return 0;
}

/* Exported Object: vtable for arcConfigFromFile */
extern "C" __attribute__((visibility("default"))) void* _ZTV17arcConfigFromFile = NULL;

/* Demangled: DynamicRESAlgoFusion::~DynamicRESAlgoFusion() */
extern "C" __attribute__((visibility("default"))) int _ZN20DynamicRESAlgoFusionD2Ev(void) {
    ALOGD("_ZN20DynamicRESAlgoFusionD2Ev() called");
    return 0;
}

/* Demangled: DbgSDAlgoFixFps::~DbgSDAlgoFixFps() */
extern "C" __attribute__((visibility("default"))) int _ZN15DbgSDAlgoFixFpsD2Ev(void) {
    ALOGD("_ZN15DbgSDAlgoFixFpsD2Ev() called");
    return 0;
}

/* Exported Object: typeinfo for std::__1::__shared_ptr_emplace<SharedObjectManager, std::__1::allocator<SharedObjectManager> > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt3__120__shared_ptr_emplaceI19SharedObjectManagerNS_9allocatorIS1_EEEE = NULL;

/* Demangled: ARC_GLUE::processInit() */
extern "C" __attribute__((visibility("default"))) int _ZN8ARC_GLUE11processInitEv(void) {
    ALOGD("_ZN8ARC_GLUE11processInitEv() called");
    return 0;
}

/* Demangled: DbgGLContext::Init(GLContext*) */
extern "C" __attribute__((visibility("default"))) int _ZN12DbgGLContext4InitEP9GLContext(void) {
    ALOGD("_ZN12DbgGLContext4InitEP9GLContext() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: typeinfo name for DynamicRESActorNone */
extern "C" __attribute__((visibility("default"))) void* _ZTS19DynamicRESActorNone = NULL;

/* Demangled: android::Singleton<QTServiceClient>::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI15QTServiceClientE11getInstanceEv(void) {
    ALOGD("_ZN7android9SingletonI15QTServiceClientE11getInstanceEv() called");
    return 0;
}

/* Demangled: eglGetProcAddress */
extern "C" __attribute__((visibility("default"))) int eglGetProcAddress(void) {
    ALOGD("eglGetProcAddress() called");
    return 0;
}

/* Demangled: glScalexOES */
extern "C" __attribute__((visibility("default"))) int glScalexOES(void) {
    ALOGD("glScalexOES() called");
    return 0;
}

/* Demangled: DbgSDAlgoSimple::ShowES1(SDAppType) */
extern "C" __attribute__((visibility("default"))) int _ZN15DbgSDAlgoSimple7ShowES1E9SDAppType(void) {
    ALOGD("_ZN15DbgSDAlgoSimple7ShowES1E9SDAppType() called");
    return 0;
}

/* Exported Object: DbgSDAlgoMultiSwitch::sMBoxLayout */
extern "C" __attribute__((visibility("default"))) void* _ZN20DbgSDAlgoMultiSwitch11sMBoxLayoutE = NULL;

/* Demangled: TextureReplaceImpl::ValidateRelatedList() */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl19ValidateRelatedListEv(void) {
    ALOGD("_ZN18TextureReplaceImpl19ValidateRelatedListEv() called");
    return 0;
}

/* Demangled: DynamicRESActorRenderpassFBO::SetTexParameterfEnd(unsigned int, unsigned int, float) */
extern "C" __attribute__((visibility("default"))) int _ZN28DynamicRESActorRenderpassFBO19SetTexParameterfEndEjjf(void) {
    ALOGD("_ZN28DynamicRESActorRenderpassFBO19SetTexParameterfEndEjjf() called");
    return 0;
}

/* Demangled: DbgDynamicFpsImpl::SwapBuffersBegin() */
extern "C" __attribute__((visibility("default"))) int _ZN17DbgDynamicFpsImpl16SwapBuffersBeginEv(void) {
    ALOGD("_ZN17DbgDynamicFpsImpl16SwapBuffersBeginEv() called");
    return 0;
}

/* Demangled: SDAlgoGameFpsControl::~SDAlgoGameFpsControl() */
extern "C" __attribute__((visibility("default"))) int _ZN20SDAlgoGameFpsControlD1Ev(void) {
    ALOGD("_ZN20SDAlgoGameFpsControlD1Ev() called");
    return 0;
}

/* Demangled: eglExecuteWhiteListCbGiFT */
extern "C" __attribute__((visibility("default"))) int eglExecuteWhiteListCbGiFT(void) {
    ALOGD("eglExecuteWhiteListCbGiFT() called");
    return 0;
}

/* Demangled: eglTouchEventGIFT */
extern "C" __attribute__((visibility("default"))) int eglTouchEventGIFT(void) {
    ALOGD("eglTouchEventGIFT() called");
    return 0;
}

/* Demangled: glDrawTransformFeedbackEXT */
extern "C" __attribute__((visibility("default"))) int glDrawTransformFeedbackEXT(void) {
    ALOGD("glDrawTransformFeedbackEXT() called");
    return 0;
}

/* Demangled: non-virtual thunk to DbgSDAlgoQACheckEnable::~DbgSDAlgoQACheckEnable() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N22DbgSDAlgoQACheckEnableD0Ev(void) {
    ALOGD("_ZThn8_N22DbgSDAlgoQACheckEnableD0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to DbgSDAlgoFixFps::~DbgSDAlgoFixFps() */
extern "C" __attribute__((visibility("default"))) int _ZThn172_N15DbgSDAlgoFixFpsD0Ev(void) {
    ALOGD("_ZThn172_N15DbgSDAlgoFixFpsD0Ev() called");
    return 0;
}

/* Exported Object: typeinfo for std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: SDAlgoFusion::~SDAlgoFusion() */
extern "C" __attribute__((visibility("default"))) int _ZN12SDAlgoFusionD0Ev(void) {
    ALOGD("_ZN12SDAlgoFusionD0Ev() called");
    return 0;
}

/* Exported Object: vtable for SDAlgoFixFps */
extern "C" __attribute__((visibility("default"))) void* _ZTV12SDAlgoFixFps = NULL;

/* Demangled: DbgSDAlgoQACheckEnable::GraphSetLayoutState(SDAppType) */
extern "C" __attribute__((visibility("default"))) int _ZN22DbgSDAlgoQACheckEnable19GraphSetLayoutStateE9SDAppType(void) {
    ALOGD("_ZN22DbgSDAlgoQACheckEnable19GraphSetLayoutStateE9SDAppType() called");
    return 0;
}

/* Demangled: DynamicRESAlgoDVFSPolicy::Detect() */
extern "C" __attribute__((visibility("default"))) int _ZN24DynamicRESAlgoDVFSPolicy6DetectEv(void) {
    ALOGD("_ZN24DynamicRESAlgoDVFSPolicy6DetectEv() called");
    return 0;
}

/* Demangled: DbgSDAlgoQATxDisable::~DbgSDAlgoQATxDisable() */
extern "C" __attribute__((visibility("default"))) int _ZN20DbgSDAlgoQATxDisableD0Ev(void) {
    ALOGD("_ZN20DbgSDAlgoQATxDisableD0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to DbgSDAlgoFull::~DbgSDAlgoFull() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N13DbgSDAlgoFullD0Ev(void) {
    ALOGD("_ZThn8_N13DbgSDAlgoFullD0Ev() called");
    return 0;
}

/* Demangled: DbgSDAlgoMultiSwitch::~DbgSDAlgoMultiSwitch() */
extern "C" __attribute__((visibility("default"))) int _ZN20DbgSDAlgoMultiSwitchD1Ev(void) {
    ALOGD("_ZN20DbgSDAlgoMultiSwitchD1Ev() called");
    return 0;
}

/* Demangled: SharedObjectManager::CreateProgram(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN19SharedObjectManager13CreateProgramEj(void) {
    ALOGD("_ZN19SharedObjectManager13CreateProgramEj() called");
    return 0;
}

/* Exported Object: vtable for arcBuiltinConfig */
extern "C" __attribute__((visibility("default"))) void* _ZTV16arcBuiltinConfig = NULL;

/* Exported Object: typeinfo for SDAlgoEnable */
extern "C" __attribute__((visibility("default"))) void* _ZTI12SDAlgoEnable = NULL;

/* Demangled: DbgSDAlgoQADisable::ShowES1(SDAppType) */
extern "C" __attribute__((visibility("default"))) int _ZN18DbgSDAlgoQADisable7ShowES1E9SDAppType(void) {
    ALOGD("_ZN18DbgSDAlgoQADisable7ShowES1E9SDAppType() called");
    return 0;
}

/* Exported Object: typeinfo name for DbgSDAlgoFull */
extern "C" __attribute__((visibility("default"))) void* _ZTS13DbgSDAlgoFull = NULL;

/* Demangled: ARCState::ReadLogProperty() */
extern "C" __attribute__((visibility("default"))) int _ZN8ARCState15ReadLogPropertyEv(void) {
    ALOGD("_ZN8ARCState15ReadLogPropertyEv() called");
    return 0;
}

/* Demangled: MBXContainer::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN12MBXContainer5ResetEv(void) {
    ALOGD("_ZN12MBXContainer5ResetEv() called");
    return 0;
}

/* Exported Object: typeinfo name for SDActorFpsController */
extern "C" __attribute__((visibility("default"))) void* _ZTS20SDActorFpsController = NULL;

/* Exported Object: SDAlgoSlowMotion::sSlowErrorRatio */
extern "C" __attribute__((visibility("default"))) void* _ZN16SDAlgoSlowMotion15sSlowErrorRatioE = NULL;

/* Demangled: SDAlgoSlowMotion::~SDAlgoSlowMotion() */
extern "C" __attribute__((visibility("default"))) int _ZN16SDAlgoSlowMotionD1Ev(void) {
    ALOGD("_ZN16SDAlgoSlowMotionD1Ev() called");
    return 0;
}

/* Demangled: arcConfigFromFile::arcConfigFromFile(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN17arcConfigFromFileC2EPKc(void) {
    ALOGD("_ZN17arcConfigFromFileC2EPKc() called");
    return 0;
}

/* Demangled: MBXPoint::~MBXPoint() */
extern "C" __attribute__((visibility("default"))) int _ZN8MBXPointD1Ev(void) {
    ALOGD("_ZN8MBXPointD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for SimpleGLRendererES11 */
extern "C" __attribute__((visibility("default"))) void* _ZTS20SimpleGLRendererES11 = NULL;

/* Demangled: DbgTextureReplaceMBox::GraphInit() */
extern "C" __attribute__((visibility("default"))) int _ZN21DbgTextureReplaceMBox9GraphInitEv(void) {
    ALOGD("_ZN21DbgTextureReplaceMBox9GraphInitEv() called");
    return 0;
}

/* Demangled: glMultiDrawElementsIndirectEXT */
extern "C" __attribute__((visibility("default"))) int glMultiDrawElementsIndirectEXT(void) {
    ALOGD("glMultiDrawElementsIndirectEXT() called");
    return 0;
}

/* Demangled: MBXProgressBar::MBXProgressBar() */
extern "C" __attribute__((visibility("default"))) int _ZN14MBXProgressBarC2Ev(void) {
    ALOGD("_ZN14MBXProgressBarC2Ev() called");
    return 0;
}

/* Demangled: glMultMatrixxOES */
extern "C" __attribute__((visibility("default"))) int glMultMatrixxOES(void) {
    ALOGD("glMultMatrixxOES() called");
    return 0;
}

/* Exported Object: gAppWhiteList */
extern "C" __attribute__((visibility("default"))) void* gAppWhiteList = NULL;

/* Exported Object: typeinfo for GLContextInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTI13GLContextInfo = NULL;

/* Demangled: glRotatex */
extern "C" __attribute__((visibility("default"))) int glRotatex(void) {
    ALOGD("glRotatex() called");
    return 0;
}

/* Demangled: SimpleGLRendererES20::CompileShader(unsigned int*, unsigned int, char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN20SimpleGLRendererES2013CompileShaderEPjjPKci(void) {
    ALOGD("_ZN20SimpleGLRendererES2013CompileShaderEPjjPKci() called");
    return 0;
}

/* Demangled: GLContextInfo::GLContextInfo(int, GLContextInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN13GLContextInfoC1EiPS_(void) {
    ALOGD("_ZN13GLContextInfoC1EiPS_() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::CreateHookRenderbuffer(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl22CreateHookRenderbufferEjj(void) {
    ALOGD("_ZN18TextureReplaceImpl22CreateHookRenderbufferEjj() called");
    return 0;
}

/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int const&>(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_() called");
    return 0;
}

/* Demangled: DynamicRESAlgoComputeShader::DynamicRESAlgoComputeShader(GLContextInfo&, DynamicRESAlgoBase*) */
extern "C" __attribute__((visibility("default"))) int _ZN27DynamicRESAlgoComputeShaderC1ER13GLContextInfoP18DynamicRESAlgoBase(void) {
    ALOGD("_ZN27DynamicRESAlgoComputeShaderC1ER13GLContextInfoP18DynamicRESAlgoBase() called");
    return 0;
}

/* Exported Object: typeinfo name for DynamicRESActorDefaultFBO */
extern "C" __attribute__((visibility("default"))) void* _ZTS25DynamicRESActorDefaultFBO = NULL;

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Exported Object: typeinfo name for perfConfigFromService */
extern "C" __attribute__((visibility("default"))) void* _ZTS21perfConfigFromService = NULL;

/* Exported Object: vtable for MBXComponent */
extern "C" __attribute__((visibility("default"))) void* _ZTV12MBXComponent = NULL;

/* Demangled: TextureReplaceFactory::NewActorInstance(TextureReplaceFactory::DyRESActorMenu, GLContextInfo&, TextureReplaceImpl*) */
extern "C" __attribute__((visibility("default"))) int _ZN21TextureReplaceFactory16NewActorInstanceENS_14DyRESActorMenuER13GLContextInfoP18TextureReplaceImpl(void) {
    ALOGD("_ZN21TextureReplaceFactory16NewActorInstanceENS_14DyRESActorMenuER13GLContextInfoP18TextureReplaceImpl() called");
    return 0;
}

/* Demangled: android::Singleton<ARCTouchEventDispatcher>::~Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI23ARCTouchEventDispatcherED1Ev(void) {
    ALOGD("_ZN7android9SingletonI23ARCTouchEventDispatcherED1Ev() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::AllocRelatedList() */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl16AllocRelatedListEv(void) {
    ALOGD("_ZN18TextureReplaceImpl16AllocRelatedListEv() called");
    return 0;
}

/* Demangled: DbgTextureReplaceMBox::~DbgTextureReplaceMBox() */
extern "C" __attribute__((visibility("default"))) int _ZN21DbgTextureReplaceMBoxD0Ev(void) {
    ALOGD("_ZN21DbgTextureReplaceMBoxD0Ev() called");
    return 0;
}

/* Demangled: DynamicRESAlgoSmokeShader::~DynamicRESAlgoSmokeShader() */
extern "C" __attribute__((visibility("default"))) int _ZN25DynamicRESAlgoSmokeShaderD0Ev(void) {
    ALOGD("_ZN25DynamicRESAlgoSmokeShaderD0Ev() called");
    return 0;
}

/* Exported Object: SDTouchHint::sIsEnableTouchBoost */
extern "C" __attribute__((visibility("default"))) void* _ZN11SDTouchHint19sIsEnableTouchBoostE = NULL;

/* Exported Object: WL20 */
extern "C" __attribute__((visibility("default"))) void* WL20 = NULL;

/* Demangled: DbgSDAlgoFixFps::ShowES2(SDAppType) */
extern "C" __attribute__((visibility("default"))) int _ZN15DbgSDAlgoFixFps7ShowES2E9SDAppType(void) {
    ALOGD("_ZN15DbgSDAlgoFixFps7ShowES2E9SDAppType() called");
    return 0;
}

/* Demangled: TextureReplaceFactory::TextureReplaceFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN21TextureReplaceFactoryC1Ev(void) {
    ALOGD("_ZN21TextureReplaceFactoryC1Ev() called");
    return 0;
}

/* Demangled: DynamicRESAlgoComputeShader::~DynamicRESAlgoComputeShader() */
extern "C" __attribute__((visibility("default"))) int _ZN27DynamicRESAlgoComputeShaderD1Ev(void) {
    ALOGD("_ZN27DynamicRESAlgoComputeShaderD1Ev() called");
    return 0;
}

/* Exported Object: vtable for DynamicRESActorFusion */
extern "C" __attribute__((visibility("default"))) void* _ZTV21DynamicRESActorFusion = NULL;

/* Exported Object: SDTouchHint::sIsEnableMotionRES */
extern "C" __attribute__((visibility("default"))) void* _ZN11SDTouchHint18sIsEnableMotionRESE = NULL;

/* Exported Object: WL21 */
extern "C" __attribute__((visibility("default"))) void* WL21 = NULL;

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::SetTexParameterIuivEnd(unsigned int, unsigned int, unsigned int const*) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl22SetTexParameterIuivEndEjjPKj(void) {
    ALOGD("_ZN18TextureReplaceImpl22SetTexParameterIuivEndEjjPKj() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE() called");
    return 0;
}

/* Exported Object: WL22 */
extern "C" __attribute__((visibility("default"))) void* WL22 = NULL;

/* Demangled: DbgSDAlgoFixFps::DbgSDAlgoFixFps() */
extern "C" __attribute__((visibility("default"))) int _ZN15DbgSDAlgoFixFpsC2Ev(void) {
    ALOGD("_ZN15DbgSDAlgoFixFpsC2Ev() called");
    return 0;
}

/* Demangled: FramebufferSelection::~FramebufferSelection() */
extern "C" __attribute__((visibility("default"))) int _ZN20FramebufferSelectionD1Ev(void) {
    ALOGD("_ZN20FramebufferSelectionD1Ev() called");
    return 0;
}

/* Demangled: TextureReplaceFactory::~TextureReplaceFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN21TextureReplaceFactoryD2Ev(void) {
    ALOGD("_ZN21TextureReplaceFactoryD2Ev() called");
    return 0;
}

/* Demangled: DynamicFpsImpl::~DynamicFpsImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN14DynamicFpsImplD1Ev(void) {
    ALOGD("_ZN14DynamicFpsImplD1Ev() called");
    return 0;
}

/* Exported Object: WL23 */
extern "C" __attribute__((visibility("default"))) void* WL23 = NULL;

/* Demangled: TextureReplaceImpl::RestoreRemappedFramebuffer(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl26RestoreRemappedFramebufferEj(void) {
    ALOGD("_ZN18TextureReplaceImpl26RestoreRemappedFramebufferEj() called");
    return 0;
}

/* Demangled: FpsCollection::SwapBuffers() */
extern "C" __attribute__((visibility("default"))) int _ZN13FpsCollection11SwapBuffersEv(void) {
    ALOGD("_ZN13FpsCollection11SwapBuffersEv() called");
    return 0;
}

/* Exported Object: typeinfo for DynamicRESActorDefaultFBO */
extern "C" __attribute__((visibility("default"))) void* _ZTI25DynamicRESActorDefaultFBO = NULL;

/* Exported Object: typeinfo for SDAlgoListBasedStatistic */
extern "C" __attribute__((visibility("default"))) void* _ZTI24SDAlgoListBasedStatistic = NULL;

/* Demangled: arcConfigFromFile::ReadConfig(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN17arcConfigFromFile10ReadConfigEPKc(void) {
    ALOGD("_ZN17arcConfigFromFile10ReadConfigEPKc() called");
    return 0;
}

/* Exported Object: oppoConfigFromService::s_isRegisterCB */
extern "C" __attribute__((visibility("default"))) void* _ZN21oppoConfigFromService14s_isRegisterCBE = NULL;

/* Demangled: eglMakeCurrent */
extern "C" __attribute__((visibility("default"))) int eglMakeCurrent(void) {
    ALOGD("eglMakeCurrent() called");
    return 0;
}

/* Exported Object: WL24 */
extern "C" __attribute__((visibility("default"))) void* WL24 = NULL;

/* Demangled: TextureReplaceImpl::RemoveDefaultFramebufferMapping() */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl31RemoveDefaultFramebufferMappingEv(void) {
    ALOGD("_ZN18TextureReplaceImpl31RemoveDefaultFramebufferMappingEv() called");
    return 0;
}

/* Demangled: SDAlgoGameFpsControl::SDAlgoGameFpsControl() */
extern "C" __attribute__((visibility("default"))) int _ZN20SDAlgoGameFpsControlC1Ev(void) {
    ALOGD("_ZN20SDAlgoGameFpsControlC1Ev() called");
    return 0;
}

/* Exported Object: WL25 */
extern "C" __attribute__((visibility("default"))) void* WL25 = NULL;

/* Demangled: TextureReplaceImpl::ModifyProgramBinary(unsigned int, void const*, int, void const**, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl19ModifyProgramBinaryEjPKviPS1_Pi(void) {
    ALOGD("_ZN18TextureReplaceImpl19ModifyProgramBinaryEjPKviPS1_Pi() called");
    return 0;
}

/* Demangled: DbgTextureReplaceImpl::SetColorMask() */
extern "C" __attribute__((visibility("default"))) int _ZN21DbgTextureReplaceImpl12SetColorMaskEv(void) {
    ALOGD("_ZN21DbgTextureReplaceImpl12SetColorMaskEv() called");
    return 0;
}

/* Demangled: DynamicFpsImpl::SwapBuffersBegin() */
extern "C" __attribute__((visibility("default"))) int _ZN14DynamicFpsImpl16SwapBuffersBeginEv(void) {
    ALOGD("_ZN14DynamicFpsImpl16SwapBuffersBeginEv() called");
    return 0;
}

/* Demangled: SceneDetector::ShowES1() */
extern "C" __attribute__((visibility("default"))) int _ZN13SceneDetector7ShowES1Ev(void) {
    ALOGD("_ZN13SceneDetector7ShowES1Ev() called");
    return 0;
}

/* Demangled: glDrawArraysInstancedANGLE */
extern "C" __attribute__((visibility("default"))) int glDrawArraysInstancedANGLE(void) {
    ALOGD("glDrawArraysInstancedANGLE() called");
    return 0;
}

/* Exported Object: WL26 */
extern "C" __attribute__((visibility("default"))) void* WL26 = NULL;

/* Demangled: GLContext::SwapBuffersBegin() */
extern "C" __attribute__((visibility("default"))) int _ZN9GLContext16SwapBuffersBeginEv(void) {
    ALOGD("_ZN9GLContext16SwapBuffersBeginEv() called");
    return 0;
}

/* Demangled: SDAlgoGameFpsControl::~SDAlgoGameFpsControl() */
extern "C" __attribute__((visibility("default"))) int _ZN20SDAlgoGameFpsControlD2Ev(void) {
    ALOGD("_ZN20SDAlgoGameFpsControlD2Ev() called");
    return 0;
}

/* Exported Object: WL27 */
extern "C" __attribute__((visibility("default"))) void* WL27 = NULL;

/* Demangled: MBXColor::operator=(MBXColor const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8MBXColoraSERKS_(void) {
    ALOGD("_ZN8MBXColoraSERKS_() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::DeleteProgram(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl13DeleteProgramEj(void) {
    ALOGD("_ZN18TextureReplaceImpl13DeleteProgramEj() called");
    return 0;
}

/* Exported Object: WL28 */
extern "C" __attribute__((visibility("default"))) void* WL28 = NULL;

/* Demangled: GLContext::GLContext(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9GLContextC2Eji(void) {
    ALOGD("_ZN9GLContextC2Eji() called");
    return 0;
}

/* Demangled: non-virtual thunk to DbgSDAlgoQACheckEnable::~DbgSDAlgoQACheckEnable() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N22DbgSDAlgoQACheckEnableD1Ev(void) {
    ALOGD("_ZThn8_N22DbgSDAlgoQACheckEnableD1Ev() called");
    return 0;
}

/* Demangled: DynamicFpsImpl::DynamicFpsImpl(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14DynamicFpsImplC1Ei(void) {
    ALOGD("_ZN14DynamicFpsImplC1Ei() called");
    return 0;
}

/* Exported Object: SDAlgoUniformSmooth::sUniformTranslateRatio */
extern "C" __attribute__((visibility("default"))) void* _ZN19SDAlgoUniformSmooth22sUniformTranslateRatioE = NULL;

/* Demangled: glRenderbufferStorage */
extern "C" __attribute__((visibility("default"))) int glRenderbufferStorage(void) {
    ALOGD("glRenderbufferStorage() called");
    return 0;
}

/* Exported Object: WL29 */
extern "C" __attribute__((visibility("default"))) void* WL29 = NULL;

/* Exported Object: typeinfo name for MBXStateBlock */
extern "C" __attribute__((visibility("default"))) void* _ZTS13MBXStateBlock = NULL;

/* Exported Object: DbgSDAlgoMBoxUtility::sDbgResetOverallFpsY */
extern "C" __attribute__((visibility("default"))) void* _ZN20DbgSDAlgoMBoxUtility20sDbgResetOverallFpsYE = NULL;

/* Demangled: non-virtual thunk to DbgSDAlgoFixFps::~DbgSDAlgoFixFps() */
extern "C" __attribute__((visibility("default"))) int _ZThn172_N15DbgSDAlgoFixFpsD1Ev(void) {
    ALOGD("_ZThn172_N15DbgSDAlgoFixFpsD1Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<texture_image, std::__1::allocator<texture_image> >::__emplace_back_slow_path<int&, int&, int&, int&, unsigned int&, unsigned int&>(int&, int&, int&, int&, unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI13texture_imageNS_9allocatorIS1_EEE24__emplace_back_slow_pathIJRiS6_S6_S6_RjS7_EEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorI13texture_imageNS_9allocatorIS1_EEE24__emplace_back_slow_pathIJRiS6_S6_S6_RjS7_EEEvDpOT_() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::ValidateHookFramebuffer(std::__1::__map_iterator<std::__1::__tree_iterator<std::__1::__value_type<unsigned int, TextureReplaceImpl::name_info>, std::__1::__tree_node<std::__1::__value_type<unsigned int, TextureReplaceImpl::name_info>, void*>*, int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl23ValidateHookFramebufferERNSt3__114__map_iteratorINS0_15__tree_iteratorINS0_12__value_typeIjNS_9name_infoEEEPNS0_11__tree_nodeIS5_PvEEiEEEE(void) {
    ALOGD("_ZN18TextureReplaceImpl23ValidateHookFramebufferERNSt3__114__map_iteratorINS0_15__tree_iteratorINS0_12__value_typeIjNS_9name_infoEEEPNS0_11__tree_nodeIS5_PvEEiEEEE() called");
    return 0;
}

/* Demangled: DbgSDAlgoMultiSwitch::DbgSDAlgoMultiSwitch() */
extern "C" __attribute__((visibility("default"))) int _ZN20DbgSDAlgoMultiSwitchC1Ev(void) {
    ALOGD("_ZN20DbgSDAlgoMultiSwitchC1Ev() called");
    return 0;
}

/* Demangled: DynamicRESAlgoSwitch::~DynamicRESAlgoSwitch() */
extern "C" __attribute__((visibility("default"))) int _ZN20DynamicRESAlgoSwitchD0Ev(void) {
    ALOGD("_ZN20DynamicRESAlgoSwitchD0Ev() called");
    return 0;
}

/* Demangled: SDAlgoFusion::~SDAlgoFusion() */
extern "C" __attribute__((visibility("default"))) int _ZN12SDAlgoFusionD1Ev(void) {
    ALOGD("_ZN12SDAlgoFusionD1Ev() called");
    return 0;
}

/* Demangled: PredefinedAppList::Shuffling(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN17PredefinedAppList9ShufflingERNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN17PredefinedAppList9ShufflingERNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::multimap<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >*>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::multimap<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >*>, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::multimap<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::multimap<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::multimap<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >*> > >::__emplace_multi<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::multimap<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >*> >(std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::multimap<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >*>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPNS_8multimapIS7_S7_NS_4lessIS7_EENS5_INS_4pairIKS7_S7_EEEEEEEENS_19__map_value_compareIS7_SH_SA_Lb1EEENS5_ISH_EEE15__emplace_multiIJNSB_IS7_SG_EEEEENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_PvEEiEEDpOT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPNS_8multimapIS7_S7_NS_4lessIS7_EENS5_INS_4pairIKS7_S7_EEEEEEEENS_19__map_value_compareIS7_SH_SA_Lb1EEENS5_ISH_EEE15__emplace_multiIJNSB_IS7_SG_EEEEENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_PvEEiEEDpOT_() called");
    return 0;
}

/* Exported Object: vtable for MBXProgressBar */
extern "C" __attribute__((visibility("default"))) void* _ZTV14MBXProgressBar = NULL;

/* Demangled: ARCUnregisterListener(ARCEventListener*) */
extern "C" __attribute__((visibility("default"))) int _Z21ARCUnregisterListenerP16ARCEventListener(void) {
    ALOGD("_Z21ARCUnregisterListenerP16ARCEventListener() called");
    return 0;
}

/* Demangled: ARCGetStateHWUI() */
extern "C" __attribute__((visibility("default"))) int _Z15ARCGetStateHWUIv(void) {
    ALOGD("_Z15ARCGetStateHWUIv() called");
    return 0;
}

/* Demangled: DbgSDAlgoQATxDisable::~DbgSDAlgoQATxDisable() */
extern "C" __attribute__((visibility("default"))) int _ZN20DbgSDAlgoQATxDisableD1Ev(void) {
    ALOGD("_ZN20DbgSDAlgoQATxDisableD1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to DbgSDAlgoFull::~DbgSDAlgoFull() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N13DbgSDAlgoFullD1Ev(void) {
    ALOGD("_ZThn8_N13DbgSDAlgoFullD1Ev() called");
    return 0;
}

/* Demangled: DbgSDAlgoMultiSwitch::~DbgSDAlgoMultiSwitch() */
extern "C" __attribute__((visibility("default"))) int _ZN20DbgSDAlgoMultiSwitchD2Ev(void) {
    ALOGD("_ZN20DbgSDAlgoMultiSwitchD2Ev() called");
    return 0;
}

/* Demangled: DynamicRESAlgoSmokeShader::AttachShader(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN25DynamicRESAlgoSmokeShader12AttachShaderEjj(void) {
    ALOGD("_ZN25DynamicRESAlgoSmokeShader12AttachShaderEjj() called");
    return 0;
}

/* Demangled: DynamicRESAlgoFusion::GetSuggestedSlotindex() */
extern "C" __attribute__((visibility("default"))) int _ZN20DynamicRESAlgoFusion21GetSuggestedSlotindexEv(void) {
    ALOGD("_ZN20DynamicRESAlgoFusion21GetSuggestedSlotindexEv() called");
    return 0;
}

/* Demangled: SDAlgoSlowMotion::SDAlgoSlowMotion() */
extern "C" __attribute__((visibility("default"))) int _ZN16SDAlgoSlowMotionC1Ev(void) {
    ALOGD("_ZN16SDAlgoSlowMotionC1Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<SDAlgoBase*, std::__1::allocator<SDAlgoBase*> >::__push_back_slow_path<SDAlgoBase*>(SDAlgoBase*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP10SDAlgoBaseNS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIP10SDAlgoBaseNS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_() called");
    return 0;
}

/* Demangled: MBXPoint::MBXPoint() */
extern "C" __attribute__((visibility("default"))) int _ZN8MBXPointC1Ev(void) {
    ALOGD("_ZN8MBXPointC1Ev() called");
    return 0;
}

/* Demangled: arcConfigFromQTService::GetOptionDRES(char*, unsigned int, char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK22arcConfigFromQTService13GetOptionDRESEPcjPKc(void) {
    ALOGD("_ZNK22arcConfigFromQTService13GetOptionDRESEPcjPKc() called");
    return 0;
}

/* Exported Object: typeinfo for oppoConfigFromFile */
extern "C" __attribute__((visibility("default"))) void* _ZTI18oppoConfigFromFile = NULL;

/* Demangled: ARC_GLUE::libraryLoad() */
extern "C" __attribute__((visibility("default"))) int _ZN8ARC_GLUE11libraryLoadEv(void) {
    ALOGD("_ZN8ARC_GLUE11libraryLoadEv() called");
    return 0;
}

/* Demangled: glCreateProgram */
extern "C" __attribute__((visibility("default"))) int glCreateProgram(void) {
    ALOGD("glCreateProgram() called");
    return 0;
}

/* Demangled: glRenderbufferStorageMultisample */
extern "C" __attribute__((visibility("default"))) int glRenderbufferStorageMultisample(void) {
    ALOGD("glRenderbufferStorageMultisample() called");
    return 0;
}

/* Demangled: DbgSDAlgoFull::GraphSetLayoutState(SDAppType) */
extern "C" __attribute__((visibility("default"))) int _ZN13DbgSDAlgoFull19GraphSetLayoutStateE9SDAppType(void) {
    ALOGD("_ZN13DbgSDAlgoFull19GraphSetLayoutStateE9SDAppType() called");
    return 0;
}

/* Demangled: DbgSDAlgoQATxDisable::ShowES2(SDAppType) */
extern "C" __attribute__((visibility("default"))) int _ZN20DbgSDAlgoQATxDisable7ShowES2E9SDAppType(void) {
    ALOGD("_ZN20DbgSDAlgoQATxDisable7ShowES2E9SDAppType() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::RestoreTexture2D() */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl16RestoreTexture2DEv(void) {
    ALOGD("_ZN18TextureReplaceImpl16RestoreTexture2DEv() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::SetDrawBuffersEnd(int, unsigned int const*) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl17SetDrawBuffersEndEiPKj(void) {
    ALOGD("_ZN18TextureReplaceImpl17SetDrawBuffersEndEiPKj() called");
    return 0;
}

/* Demangled: DynamicRESActorNone::~DynamicRESActorNone() */
extern "C" __attribute__((visibility("default"))) int _ZN19DynamicRESActorNoneD0Ev(void) {
    ALOGD("_ZN19DynamicRESActorNoneD0Ev() called");
    return 0;
}

/* Demangled: SDAlgoSlowMotion::~SDAlgoSlowMotion() */
extern "C" __attribute__((visibility("default"))) int _ZN16SDAlgoSlowMotionD2Ev(void) {
    ALOGD("_ZN16SDAlgoSlowMotionD2Ev() called");
    return 0;
}

/* Demangled: ARCState::IsZygoteProcess() */
extern "C" __attribute__((visibility("default"))) int _ZN8ARCState15IsZygoteProcessEv(void) {
    ALOGD("_ZN8ARCState15IsZygoteProcessEv() called");
    return 0;
}

/* Demangled: MBXPoint::~MBXPoint() */
extern "C" __attribute__((visibility("default"))) int _ZN8MBXPointD2Ev(void) {
    ALOGD("_ZN8MBXPointD2Ev() called");
    return 0;
}

/* Demangled: glBindFramebuffer */
extern "C" __attribute__((visibility("default"))) int glBindFramebuffer(void) {
    ALOGD("glBindFramebuffer() called");
    return 0;
}

/* Demangled: GLContextInfo::SwapBuffersEnd() */
extern "C" __attribute__((visibility("default"))) int _ZN13GLContextInfo14SwapBuffersEndEv(void) {
    ALOGD("_ZN13GLContextInfo14SwapBuffersEndEv() called");
    return 0;
}

/* Demangled: DbgTextureReplaceImpl::UpdateInputParameters() */
extern "C" __attribute__((visibility("default"))) int _ZN21DbgTextureReplaceImpl21UpdateInputParametersEv(void) {
    ALOGD("_ZN21DbgTextureReplaceImpl21UpdateInputParametersEv() called");
    return 0;
}

/* Demangled: DbgTextureReplaceMBox::GetRatio(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK21DbgTextureReplaceMBox8GetRatioEj(void) {
    ALOGD("_ZNK21DbgTextureReplaceMBox8GetRatioEj() called");
    return 0;
}

/* Demangled: std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::multimap<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >*>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::multimap<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >*>, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::multimap<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::multimap<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::multimap<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >*> > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPNS_8multimapIS7_S7_NS_4lessIS7_EENS5_INS_4pairIKS7_S7_EEEEEEEENS_19__map_value_compareIS7_SH_SA_Lb1EEENS5_ISH_EEE4findIS7_EENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_PvEEiEERKT_(void) {
    ALOGD("_ZNKSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPNS_8multimapIS7_S7_NS_4lessIS7_EENS5_INS_4pairIKS7_S7_EEEEEEEENS_19__map_value_compareIS7_SH_SA_Lb1EEENS5_ISH_EEE4findIS7_EENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_PvEEiEERKT_() called");
    return 0;
}

/* Demangled: glBlitFramebuffer */
extern "C" __attribute__((visibility("default"))) int glBlitFramebuffer(void) {
    ALOGD("glBlitFramebuffer() called");
    return 0;
}

/* Demangled: android::Singleton<ARCTouchEventDispatcher>::Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI23ARCTouchEventDispatcherEC1Ev(void) {
    ALOGD("_ZN7android9SingletonI23ARCTouchEventDispatcherEC1Ev() called");
    return 0;
}

/* Demangled: MBXContainer::Add(unsigned int, MBXComponent*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MBXContainer3AddEjP12MBXComponent(void) {
    ALOGD("_ZN12MBXContainer3AddEjP12MBXComponent() called");
    return 0;
}

/* Demangled: MBXProgressBar::MBXProgressBar(MBXRect const&, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MBXProgressBarC2ERK7MBXRectjj(void) {
    ALOGD("_ZN14MBXProgressBarC2ERK7MBXRectjj() called");
    return 0;
}

/* Demangled: DbgSDAlgoQAEnable::ShowES1(SDAppType) */
extern "C" __attribute__((visibility("default"))) int _ZN17DbgSDAlgoQAEnable7ShowES1E9SDAppType(void) {
    ALOGD("_ZN17DbgSDAlgoQAEnable7ShowES1E9SDAppType() called");
    return 0;
}

/* Demangled: SharedObjectManager::DeleteProgram(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN19SharedObjectManager13DeleteProgramEj(void) {
    ALOGD("_ZN19SharedObjectManager13DeleteProgramEj() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::UpdateDrawSurface(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl17UpdateDrawSurfaceEPv(void) {
    ALOGD("_ZN18TextureReplaceImpl17UpdateDrawSurfaceEPv() called");
    return 0;
}

/* Demangled: DynamicRESActorRenderpassFBO::BlitFramebufferBegin(int&, int&, int&, int&, int&, int&, int&, int&, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN28DynamicRESActorRenderpassFBO20BlitFramebufferBeginERiS0_S0_S0_S0_S0_S0_S0_jj(void) {
    ALOGD("_ZN28DynamicRESActorRenderpassFBO20BlitFramebufferBeginERiS0_S0_S0_S0_S0_S0_S0_jj() called");
    return 0;
}

/* Demangled: DRES::getParam(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN4DRES8getParamEPNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES7_(void) {
    ALOGD("_ZN4DRES8getParamEPNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES7_() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: glGetFramebufferAttachmentParameteriv */
extern "C" __attribute__((visibility("default"))) int glGetFramebufferAttachmentParameteriv(void) {
    ALOGD("glGetFramebufferAttachmentParameteriv() called");
    return 0;
}

/* Demangled: android::Singleton<ARCTouchEventDispatcher>::~Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI23ARCTouchEventDispatcherED2Ev(void) {
    ALOGD("_ZN7android9SingletonI23ARCTouchEventDispatcherED2Ev() called");
    return 0;
}

/* Demangled: SimpleGLRendererES11::~SimpleGLRendererES11() */
extern "C" __attribute__((visibility("default"))) int _ZN20SimpleGLRendererES11D0Ev(void) {
    ALOGD("_ZN20SimpleGLRendererES11D0Ev() called");
    return 0;
}

/* Demangled: DbgSDAlgoQAEnable::GraphSetLayoutState(SDAppType) */
extern "C" __attribute__((visibility("default"))) int _ZN17DbgSDAlgoQAEnable19GraphSetLayoutStateE9SDAppType(void) {
    ALOGD("_ZN17DbgSDAlgoQAEnable19GraphSetLayoutStateE9SDAppType() called");
    return 0;
}

/* Demangled: GLContextInfo::GetFeatureError() */
extern "C" __attribute__((visibility("default"))) int _ZN13GLContextInfo15GetFeatureErrorEv(void) {
    ALOGD("_ZN13GLContextInfo15GetFeatureErrorEv() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: DbgTextureReplaceMBox::~DbgTextureReplaceMBox() */
extern "C" __attribute__((visibility("default"))) int _ZN21DbgTextureReplaceMBoxD1Ev(void) {
    ALOGD("_ZN21DbgTextureReplaceMBoxD1Ev() called");
    return 0;
}

/* Demangled: DynamicRESAlgoSmokeShader::~DynamicRESAlgoSmokeShader() */
extern "C" __attribute__((visibility("default"))) int _ZN25DynamicRESAlgoSmokeShaderD1Ev(void) {
    ALOGD("_ZN25DynamicRESAlgoSmokeShaderD1Ev() called");
    return 0;
}

/* Demangled: glBindRenderbuffer */
extern "C" __attribute__((visibility("default"))) int glBindRenderbuffer(void) {
    ALOGD("glBindRenderbuffer() called");
    return 0;
}

/* Exported Object: android::Singleton<ARCState>::sLock */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9SingletonI8ARCStateE5sLockE = NULL;

/* Demangled: SystemInfo::HintGiftEnableBit(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN10SystemInfo17HintGiftEnableBitEb(void) {
    ALOGD("_ZN10SystemInfo17HintGiftEnableBitEb() called");
    return 0;
}

/* Demangled: SharedObjectManager::SetTextureInfo(unsigned int, unsigned int, int, int, int, int, int, int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN19SharedObjectManager14SetTextureInfoEjjiiiiiijj(void) {
    ALOGD("_ZN19SharedObjectManager14SetTextureInfoEjjiiiiiijj() called");
    return 0;
}

/* Demangled: TextureReplaceFactory::TextureReplaceFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN21TextureReplaceFactoryC2Ev(void) {
    ALOGD("_ZN21TextureReplaceFactoryC2Ev() called");
    return 0;
}

/* Demangled: DynamicRESAlgoComputeShader::~DynamicRESAlgoComputeShader() */
extern "C" __attribute__((visibility("default"))) int _ZN27DynamicRESAlgoComputeShaderD2Ev(void) {
    ALOGD("_ZN27DynamicRESAlgoComputeShaderD2Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for SDTouchHint */
extern "C" __attribute__((visibility("default"))) void* _ZTS11SDTouchHint = NULL;

/* Demangled: DbgSDAlgoFixFps::NotifyTouchEvent(TouchEventHistory const*) */
extern "C" __attribute__((visibility("default"))) int _ZN15DbgSDAlgoFixFps16NotifyTouchEventEPK17TouchEventHistory(void) {
    ALOGD("_ZN15DbgSDAlgoFixFps16NotifyTouchEventEPK17TouchEventHistory() called");
    return 0;
}

/* Demangled: DbgSDAlgoQACheckEnable::~DbgSDAlgoQACheckEnable() */
extern "C" __attribute__((visibility("default"))) int _ZN22DbgSDAlgoQACheckEnableD0Ev(void) {
    ALOGD("_ZN22DbgSDAlgoQACheckEnableD0Ev() called");
    return 0;
}

/* Demangled: DynamicRESAlgoSwitch::GetSuggestedSlotindex() */
extern "C" __attribute__((visibility("default"))) int _ZN20DynamicRESAlgoSwitch21GetSuggestedSlotindexEv(void) {
    ALOGD("_ZN20DynamicRESAlgoSwitch21GetSuggestedSlotindexEv() called");
    return 0;
}

/* Exported Object: vtable for SDAlgoFusion */
extern "C" __attribute__((visibility("default"))) void* _ZTV12SDAlgoFusion = NULL;

/* Demangled: glTranslatexOES */
extern "C" __attribute__((visibility("default"))) int glTranslatexOES(void) {
    ALOGD("glTranslatexOES() called");
    return 0;
}

/* Exported Object: touchBuf */
extern "C" __attribute__((visibility("default"))) void* touchBuf = NULL;

/* Demangled: non-virtual thunk to DbgSDAlgoAEDisable::~DbgSDAlgoAEDisable() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N18DbgSDAlgoAEDisableD0Ev(void) {
    ALOGD("_ZThn8_N18DbgSDAlgoAEDisableD0Ev() called");
    return 0;
}

/* Demangled: SharedObjectManager::DeleteTextures(int, unsigned int const*) */
extern "C" __attribute__((visibility("default"))) int _ZN19SharedObjectManager14DeleteTexturesEiPKj(void) {
    ALOGD("_ZN19SharedObjectManager14DeleteTexturesEiPKj() called");
    return 0;
}

/* Demangled: SharedObjectManager::SetTexParameter(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN19SharedObjectManager15SetTexParameterEj(void) {
    ALOGD("_ZN19SharedObjectManager15SetTexParameterEj() called");
    return 0;
}

/* Demangled: FramebufferSelection::~FramebufferSelection() */
extern "C" __attribute__((visibility("default"))) int _ZN20FramebufferSelectionD2Ev(void) {
    ALOGD("_ZN20FramebufferSelectionD2Ev() called");
    return 0;
}

/* Exported Object: TextureReplaceImpl::m_idleThreshold */
extern "C" __attribute__((visibility("default"))) void* _ZN18TextureReplaceImpl15m_idleThresholdE = NULL;

/* Demangled: TextureReplaceImpl::DeleteHookTexture(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl17DeleteHookTextureEjj(void) {
    ALOGD("_ZN18TextureReplaceImpl17DeleteHookTextureEjj() called");
    return 0;
}

/* Demangled: DynamicRESActorRenderpassFBO::SetTexParameteriEnd(unsigned int, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN28DynamicRESActorRenderpassFBO19SetTexParameteriEndEjji(void) {
    ALOGD("_ZN28DynamicRESActorRenderpassFBO19SetTexParameteriEndEjji() called");
    return 0;
}

/* Demangled: DynamicFpsImpl::~DynamicFpsImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN14DynamicFpsImplD2Ev(void) {
    ALOGD("_ZN14DynamicFpsImplD2Ev() called");
    return 0;
}

/* Demangled: glFramebufferParameteri */
extern "C" __attribute__((visibility("default"))) int glFramebufferParameteri(void) {
    ALOGD("glFramebufferParameteri() called");
    return 0;
}

/* Demangled: MBXContainer::Present() */
extern "C" __attribute__((visibility("default"))) int _ZN12MBXContainer7PresentEv(void) {
    ALOGD("_ZN12MBXContainer7PresentEv() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::DispatchComputeEnd() */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl18DispatchComputeEndEv(void) {
    ALOGD("_ZN18TextureReplaceImpl18DispatchComputeEndEv() called");
    return 0;
}

/* Demangled: SDAlgoGameFpsControl::SDAlgoGameFpsControl() */
extern "C" __attribute__((visibility("default"))) int _ZN20SDAlgoGameFpsControlC2Ev(void) {
    ALOGD("_ZN20SDAlgoGameFpsControlC2Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: glProgramBinaryOES */
extern "C" __attribute__((visibility("default"))) int glProgramBinaryOES(void) {
    ALOGD("glProgramBinaryOES() called");
    return 0;
}

/* Demangled: MBXProgressBar::Present(SimpleRenderer*) */
extern "C" __attribute__((visibility("default"))) int _ZN14MBXProgressBar7PresentEP14SimpleRenderer(void) {
    ALOGD("_ZN14MBXProgressBar7PresentEP14SimpleRenderer() called");
    return 0;
}

/* Exported Object: typeinfo name for SimpleGLRendererES20 */
extern "C" __attribute__((visibility("default"))) void* _ZTS20SimpleGLRendererES20 = NULL;

/* Demangled: DbgSDAlgoAEDisable::~DbgSDAlgoAEDisable() */
extern "C" __attribute__((visibility("default"))) int _ZN18DbgSDAlgoAEDisableD0Ev(void) {
    ALOGD("_ZN18DbgSDAlgoAEDisableD0Ev() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::OverwriteRemappedRenderbuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl29OverwriteRemappedRenderbufferEv(void) {
    ALOGD("_ZN18TextureReplaceImpl29OverwriteRemappedRenderbufferEv() called");
    return 0;
}

/* Demangled: SceneDetector::ShowES2() */
extern "C" __attribute__((visibility("default"))) int _ZN13SceneDetector7ShowES2Ev(void) {
    ALOGD("_ZN13SceneDetector7ShowES2Ev() called");
    return 0;
}

/* Exported Object: SDTouchHint::sTouchDownDuration */
extern "C" __attribute__((visibility("default"))) void* _ZN11SDTouchHint18sTouchDownDurationE = NULL;

/* Demangled: GLContext::GLContext(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9GLContextC1Eji(void) {
    ALOGD("_ZN9GLContextC1Eji() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::SetClear() */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl8SetClearEv(void) {
    ALOGD("_ZN18TextureReplaceImpl8SetClearEv() called");
    return 0;
}

/* Demangled: DbgTextureReplaceMBox::DbgTextureReplaceMBox(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN21DbgTextureReplaceMBoxC1Ej(void) {
    ALOGD("_ZN21DbgTextureReplaceMBoxC1Ej() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::RestoreRenderbuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl19RestoreRenderbufferEv(void) {
    ALOGD("_ZN18TextureReplaceImpl19RestoreRenderbufferEv() called");
    return 0;
}

/* Exported Object: DynamicRESAlgoSwitch::s_algoSwitchCount */
extern "C" __attribute__((visibility("default"))) void* _ZN20DynamicRESAlgoSwitch17s_algoSwitchCountE = NULL;

/* Demangled: DynamicRESActorRenderpassFBO::ReadPixelsEnd() */
extern "C" __attribute__((visibility("default"))) int _ZN28DynamicRESActorRenderpassFBO13ReadPixelsEndEv(void) {
    ALOGD("_ZN28DynamicRESActorRenderpassFBO13ReadPixelsEndEv() called");
    return 0;
}

/* Demangled: FpsCollection::UpdateRecentFps() */
extern "C" __attribute__((visibility("default"))) int _ZN13FpsCollection15UpdateRecentFpsEv(void) {
    ALOGD("_ZN13FpsCollection15UpdateRecentFpsEv() called");
    return 0;
}

/* Demangled: glDrawElements */
extern "C" __attribute__((visibility("default"))) int glDrawElements(void) {
    ALOGD("glDrawElements() called");
    return 0;
}

/* Exported Object: DbgGLContext::m_switchOnOff */
extern "C" __attribute__((visibility("default"))) void* _ZN12DbgGLContext13m_switchOnOffE = NULL;

/* Demangled: DynamicFpsImpl::DynamicFpsImpl(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14DynamicFpsImplC2Ei(void) {
    ALOGD("_ZN14DynamicFpsImplC2Ei() called");
    return 0;
}

/* Demangled: SDAlgoFusion::SDAlgoFusion() */
extern "C" __attribute__((visibility("default"))) int _ZN12SDAlgoFusionC1Ev(void) {
    ALOGD("_ZN12SDAlgoFusionC1Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Exported Object: DbgTextureReplaceMBox::sIsNeedFps */
extern "C" __attribute__((visibility("default"))) void* _ZN21DbgTextureReplaceMBox10sIsNeedFpsE = NULL;

/* Demangled: SDAlgoUniformSmooth::~SDAlgoUniformSmooth() */
extern "C" __attribute__((visibility("default"))) int _ZN19SDAlgoUniformSmoothD0Ev(void) {
    ALOGD("_ZN19SDAlgoUniformSmoothD0Ev() called");
    return 0;
}

/* Demangled: SDAlgoFusion::~SDAlgoFusion() */
extern "C" __attribute__((visibility("default"))) int _ZN12SDAlgoFusionD2Ev(void) {
    ALOGD("_ZN12SDAlgoFusionD2Ev() called");
    return 0;
}

/* Demangled: DbgSDAlgoMBoxUtility::UpdateOverallFps() */
extern "C" __attribute__((visibility("default"))) int _ZN20DbgSDAlgoMBoxUtility16UpdateOverallFpsEv(void) {
    ALOGD("_ZN20DbgSDAlgoMBoxUtility16UpdateOverallFpsEv() called");
    return 0;
}

/* Demangled: DbgSDAlgoQATxDisable::DbgSDAlgoQATxDisable() */
extern "C" __attribute__((visibility("default"))) int _ZN20DbgSDAlgoQATxDisableC1Ev(void) {
    ALOGD("_ZN20DbgSDAlgoQATxDisableC1Ev() called");
    return 0;
}

/* Demangled: DbgSDAlgoMultiSwitch::DbgSDAlgoMultiSwitch() */
extern "C" __attribute__((visibility("default"))) int _ZN20DbgSDAlgoMultiSwitchC2Ev(void) {
    ALOGD("_ZN20DbgSDAlgoMultiSwitchC2Ev() called");
    return 0;
}

/* Demangled: FramebufferSelection::GetTargetFramebuffers(std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN20FramebufferSelection21GetTargetFramebuffersERNSt3__16vectorIjNS0_9allocatorIjEEEE(void) {
    ALOGD("_ZN20FramebufferSelection21GetTargetFramebuffersERNSt3__16vectorIjNS0_9allocatorIjEEEE() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::AllocResource() */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl13AllocResourceEv(void) {
    ALOGD("_ZN18TextureReplaceImpl13AllocResourceEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: DynamicRESAlgoSwitch::~DynamicRESAlgoSwitch() */
extern "C" __attribute__((visibility("default"))) int _ZN20DynamicRESAlgoSwitchD1Ev(void) {
    ALOGD("_ZN20DynamicRESAlgoSwitchD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo for DynamicRESActorFusion */
extern "C" __attribute__((visibility("default"))) void* _ZTI21DynamicRESActorFusion = NULL;

/* Demangled: ARC_GLUE::updateGLIHookIfNeed(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN8ARC_GLUE19updateGLIHookIfNeedEb(void) {
    ALOGD("_ZN8ARC_GLUE19updateGLIHookIfNeedEb() called");
    return 0;
}

/* Demangled: MBXDigits::~MBXDigits() */
extern "C" __attribute__((visibility("default"))) int _ZN9MBXDigitsD0Ev(void) {
    ALOGD("_ZN9MBXDigitsD0Ev() called");
    return 0;
}

/* Demangled: DynamicRESActorRenderpassFBO::SetTexParameterivEnd(unsigned int, unsigned int, int const*) */
extern "C" __attribute__((visibility("default"))) int _ZN28DynamicRESActorRenderpassFBO20SetTexParameterivEndEjjPKi(void) {
    ALOGD("_ZN28DynamicRESActorRenderpassFBO20SetTexParameterivEndEjjPKi() called");
    return 0;
}

/* Exported Object: WL30 */
extern "C" __attribute__((visibility("default"))) void* WL30 = NULL;

/* Demangled: DbgSDAlgoQATxDisable::~DbgSDAlgoQATxDisable() */
extern "C" __attribute__((visibility("default"))) int _ZN20DbgSDAlgoQATxDisableD2Ev(void) {
    ALOGD("_ZN20DbgSDAlgoQATxDisableD2Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to DbgSDAlgoFixFps::NotifyTouchEvent(TouchEventHistory const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn172_N15DbgSDAlgoFixFps16NotifyTouchEventEPK17TouchEventHistory(void) {
    ALOGD("_ZThn172_N15DbgSDAlgoFixFps16NotifyTouchEventEPK17TouchEventHistory() called");
    return 0;
}

/* Exported Object: DbgSDAlgoMultiSwitch::sIsSwitchLayout */
extern "C" __attribute__((visibility("default"))) void* _ZN20DbgSDAlgoMultiSwitch15sIsSwitchLayoutE = NULL;

/* Exported Object: typeinfo name for DynamicRESAlgoSmokeShader */
extern "C" __attribute__((visibility("default"))) void* _ZTS25DynamicRESAlgoSmokeShader = NULL;

/* Exported Object: DynamicRESAlgoSwitch::s_algoSlotIndex */
extern "C" __attribute__((visibility("default"))) void* _ZN20DynamicRESAlgoSwitch15s_algoSlotIndexE = NULL;

/* Exported Object: SDAlgoUniformSmooth::sIsZeroMotionBoost */
extern "C" __attribute__((visibility("default"))) void* _ZN19SDAlgoUniformSmooth18sIsZeroMotionBoostE = NULL;

/* Demangled: SDAlgoSlowMotion::SDAlgoSlowMotion() */
extern "C" __attribute__((visibility("default"))) int _ZN16SDAlgoSlowMotionC2Ev(void) {
    ALOGD("_ZN16SDAlgoSlowMotionC2Ev() called");
    return 0;
}

/* Exported Object: WL31 */
extern "C" __attribute__((visibility("default"))) void* WL31 = NULL;

/* Demangled: MBXPoint::MBXPoint() */
extern "C" __attribute__((visibility("default"))) int _ZN8MBXPointC2Ev(void) {
    ALOGD("_ZN8MBXPointC2Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for SDAlgoEnable */
extern "C" __attribute__((visibility("default"))) void* _ZTS12SDAlgoEnable = NULL;

/* Demangled: DynamicRESActorRenderpassFBO::GetFinalSlotIndex(unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN28DynamicRESActorRenderpassFBO17GetFinalSlotIndexEjb(void) {
    ALOGD("_ZN28DynamicRESActorRenderpassFBO17GetFinalSlotIndexEjb() called");
    return 0;
}

/* Demangled: SDActorFpsController::TakeAction(_SDActionEnv_ const&) */
extern "C" __attribute__((visibility("default"))) int _ZN20SDActorFpsController10TakeActionERK13_SDActionEnv_(void) {
    ALOGD("_ZN20SDActorFpsController10TakeActionERK13_SDActionEnv_() called");
    return 0;
}

/* Exported Object: SDAlgoListBasedStatistic::sPTexSubImgRatio */
extern "C" __attribute__((visibility("default"))) void* _ZN24SDAlgoListBasedStatistic16sPTexSubImgRatioE = NULL;

/* Demangled: arcConfigFromFile::GetOptionDFPS(char*, unsigned int, char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK17arcConfigFromFile13GetOptionDFPSEPcjPKc(void) {
    ALOGD("_ZNK17arcConfigFromFile13GetOptionDFPSEPcjPKc() called");
    return 0;
}

/* Demangled: glDepthMask */
extern "C" __attribute__((visibility("default"))) int glDepthMask(void) {
    ALOGD("glDepthMask() called");
    return 0;
}

/* Demangled: operator-(MBXColor const&, MBXColor const&) */
extern "C" __attribute__((visibility("default"))) int _ZmiRK8MBXColorS1_(void) {
    ALOGD("_ZmiRK8MBXColorS1_() called");
    return 0;
}

/* Demangled: DbgTextureReplaceMBox::Present() */
extern "C" __attribute__((visibility("default"))) int _ZN21DbgTextureReplaceMBox7PresentEv(void) {
    ALOGD("_ZN21DbgTextureReplaceMBox7PresentEv() called");
    return 0;
}

/* Demangled: DynamicRESActorNone::~DynamicRESActorNone() */
extern "C" __attribute__((visibility("default"))) int _ZN19DynamicRESActorNoneD1Ev(void) {
    ALOGD("_ZN19DynamicRESActorNoneD1Ev() called");
    return 0;
}

/* Exported Object: vtable for SDAlgoBase */
extern "C" __attribute__((visibility("default"))) void* _ZTV10SDAlgoBase = NULL;

/* Demangled: SDAlgoSlowMotion::isInputValid() */
extern "C" __attribute__((visibility("default"))) int _ZN16SDAlgoSlowMotion12isInputValidEv(void) {
    ALOGD("_ZN16SDAlgoSlowMotion12isInputValidEv() called");
    return 0;
}

/* Demangled: SDAlgoGameFpsControl::UpdateFrameData(GLFrameData const&) */
extern "C" __attribute__((visibility("default"))) int _ZN20SDAlgoGameFpsControl15UpdateFrameDataERK11GLFrameData(void) {
    ALOGD("_ZN20SDAlgoGameFpsControl15UpdateFrameDataERK11GLFrameData() called");
    return 0;
}

/* Demangled: SimpleGLRendererES20::LinkProgram(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN20SimpleGLRendererES2011LinkProgramEj(void) {
    ALOGD("_ZN20SimpleGLRendererES2011LinkProgramEj() called");
    return 0;
}

/* Demangled: DbgSDAlgoQATxEnable::ShowES1(SDAppType) */
extern "C" __attribute__((visibility("default"))) int _ZN19DbgSDAlgoQATxEnable7ShowES1E9SDAppType(void) {
    ALOGD("_ZN19DbgSDAlgoQATxEnable7ShowES1E9SDAppType() called");
    return 0;
}

/* Exported Object: typeinfo name for DynamicResImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTS14DynamicResImpl = NULL;

/* Demangled: DynamicRESActorRenderpassFBO::GenerateMipmap(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN28DynamicRESActorRenderpassFBO14GenerateMipmapEj(void) {
    ALOGD("_ZN28DynamicRESActorRenderpassFBO14GenerateMipmapEj() called");
    return 0;
}

/* Demangled: SDActorFpsController::UpdateFuncPtrs() */
extern "C" __attribute__((visibility("default"))) int _ZN20SDActorFpsController14UpdateFuncPtrsEv(void) {
    ALOGD("_ZN20SDActorFpsController14UpdateFuncPtrsEv() called");
    return 0;
}

/* Demangled: eglDestroyEventThreadGIFT */
extern "C" __attribute__((visibility("default"))) int eglDestroyEventThreadGIFT(void) {
    ALOGD("eglDestroyEventThreadGIFT() called");
    return 0;
}

/* Demangled: ARCState::DumpConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN8ARCState10DumpConfigEv(void) {
    ALOGD("_ZN8ARCState10DumpConfigEv() called");
    return 0;
}

/* Exported Object: mInitLock */
extern "C" __attribute__((visibility("default"))) void* mInitLock = NULL;

/* Demangled: ARCState::GetProcessName() */
extern "C" __attribute__((visibility("default"))) int _ZN8ARCState14GetProcessNameEv(void) {
    ALOGD("_ZN8ARCState14GetProcessNameEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to DbgSDAlgoAEDisable::~DbgSDAlgoAEDisable() */
extern "C" __attribute__((visibility("default"))) int _ZThn172_N18DbgSDAlgoAEDisableD0Ev(void) {
    ALOGD("_ZThn172_N18DbgSDAlgoAEDisableD0Ev() called");
    return 0;
}

/* Demangled: DynamicRESAlgoSwitch::Detect() */
extern "C" __attribute__((visibility("default"))) int _ZN20DynamicRESAlgoSwitch6DetectEv(void) {
    ALOGD("_ZN20DynamicRESAlgoSwitch6DetectEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<unsigned int, shader_info>, std::__1::__tree_node<std::__1::__value_type<unsigned int, shader_info>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<unsigned int, shader_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, shader_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, shader_info> > >::__emplace_unique_impl<std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int&>, std::__1::tuple<unsigned int&> >(std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int&>&&, std::__1::tuple<unsigned int&>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIj11shader_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE21__emplace_unique_implIJRKNS_21piecewise_construct_tENS_5tupleIJRjEEESH_EEENS_4pairINS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEbEEDpOT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIj11shader_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE21__emplace_unique_implIJRKNS_21piecewise_construct_tENS_5tupleIJRjEEESH_EEENS_4pairINS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEbEEDpOT_() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::RestoreFramebuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl18RestoreFramebufferEv(void) {
    ALOGD("_ZN18TextureReplaceImpl18RestoreFramebufferEv() called");
    return 0;
}

/* Demangled: android::Singleton<ARCTouchEventDispatcher>::Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI23ARCTouchEventDispatcherEC2Ev(void) {
    ALOGD("_ZN7android9SingletonI23ARCTouchEventDispatcherEC2Ev() called");
    return 0;
}

/* Exported Object: typeinfo for DynamicRESAlgoSmokeShader */
extern "C" __attribute__((visibility("default"))) void* _ZTI25DynamicRESAlgoSmokeShader = NULL;

/* Exported Object: typeinfo name for DynamicFpsImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTS14DynamicFpsImpl = NULL;

/* Demangled: ARCState::IsBuiltInBlackList() const */
extern "C" __attribute__((visibility("default"))) int _ZNK8ARCState18IsBuiltInBlackListEv(void) {
    ALOGD("_ZNK8ARCState18IsBuiltInBlackListEv() called");
    return 0;
}

/* Demangled: SceneDetector::TakeAction(_SDActionEnv_&) */
extern "C" __attribute__((visibility("default"))) int _ZN13SceneDetector10TakeActionER13_SDActionEnv_(void) {
    ALOGD("_ZN13SceneDetector10TakeActionER13_SDActionEnv_() called");
    return 0;
}

/* Demangled: SceneDetector::Detect(GLFrameData const&) */
extern "C" __attribute__((visibility("default"))) int _ZN13SceneDetector6DetectERK11GLFrameData(void) {
    ALOGD("_ZN13SceneDetector6DetectERK11GLFrameData() called");
    return 0;
}

/* Demangled: SimpleGLRendererES11::~SimpleGLRendererES11() */
extern "C" __attribute__((visibility("default"))) int _ZN20SimpleGLRendererES11D1Ev(void) {
    ALOGD("_ZN20SimpleGLRendererES11D1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE8_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: DbgTextureReplaceMBox::~DbgTextureReplaceMBox() */
extern "C" __attribute__((visibility("default"))) int _ZN21DbgTextureReplaceMBoxD2Ev(void) {
    ALOGD("_ZN21DbgTextureReplaceMBoxD2Ev() called");
    return 0;
}

/* Demangled: DynamicRESAlgoSmokeShader::~DynamicRESAlgoSmokeShader() */
extern "C" __attribute__((visibility("default"))) int _ZN25DynamicRESAlgoSmokeShaderD2Ev(void) {
    ALOGD("_ZN25DynamicRESAlgoSmokeShaderD2Ev() called");
    return 0;
}

/* Demangled: arcBuiltinConfig::GetOptionDRES(char*, unsigned int, char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK16arcBuiltinConfig13GetOptionDRESEPcjPKc(void) {
    ALOGD("_ZNK16arcBuiltinConfig13GetOptionDRESEPcjPKc() called");
    return 0;
}

/* Demangled: glMultiDrawArraysEXT */
extern "C" __attribute__((visibility("default"))) int glMultiDrawArraysEXT(void) {
    ALOGD("glMultiDrawArraysEXT() called");
    return 0;
}

/* Exported Object: typeinfo for SimpleRenderer */
extern "C" __attribute__((visibility("default"))) void* _ZTI14SimpleRenderer = NULL;

/* Exported Object: typeinfo for DbgSDAlgoAEDisable */
extern "C" __attribute__((visibility("default"))) void* _ZTI18DbgSDAlgoAEDisable = NULL;

/* Demangled: DbgSDAlgoQACheckEnable::~DbgSDAlgoQACheckEnable() */
extern "C" __attribute__((visibility("default"))) int _ZN22DbgSDAlgoQACheckEnableD1Ev(void) {
    ALOGD("_ZN22DbgSDAlgoQACheckEnableD1Ev() called");
    return 0;
}

/* Demangled: eglCreateContext */
extern "C" __attribute__((visibility("default"))) int eglCreateContext(void) {
    ALOGD("eglCreateContext() called");
    return 0;
}

/* Exported Object: typeinfo for DbgMDynamicFpsImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTI18DbgMDynamicFpsImpl = NULL;

/* Demangled: SDAlgoFusion::PrintStatus() */
extern "C" __attribute__((visibility("default"))) int _ZN12SDAlgoFusion11PrintStatusEv(void) {
    ALOGD("_ZN12SDAlgoFusion11PrintStatusEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to DbgSDAlgoAEDisable::~DbgSDAlgoAEDisable() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N18DbgSDAlgoAEDisableD1Ev(void) {
    ALOGD("_ZThn8_N18DbgSDAlgoAEDisableD1Ev() called");
    return 0;
}

/* Exported Object: android::Singleton<GEDServiceClient>::sInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9SingletonI16GEDServiceClientE9sInstanceE = NULL;

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<SharedObjectManager, std::__1::allocator<SharedObjectManager> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceI19SharedObjectManagerNS_9allocatorIS1_EEEE = NULL;

/* Demangled: TextureReplaceImpl::CreateHookTexture(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl17CreateHookTextureEjj(void) {
    ALOGD("_ZN18TextureReplaceImpl17CreateHookTextureEjj() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__emplace_multi<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >(std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE15__emplace_multiIJNS_4pairIS7_S7_EEEEENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEEDpOT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE15__emplace_multiIJNS_4pairIS7_S7_EEEEENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEEDpOT_() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::UpdateDetectionStatus() */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl21UpdateDetectionStatusEv(void) {
    ALOGD("_ZN18TextureReplaceImpl21UpdateDetectionStatusEv() called");
    return 0;
}

/* Demangled: eglDestroySurface */
extern "C" __attribute__((visibility("default"))) int eglDestroySurface(void) {
    ALOGD("eglDestroySurface() called");
    return 0;
}

/* Demangled: GLContext::Init(GLContext*) */
extern "C" __attribute__((visibility("default"))) int _ZN9GLContext4InitEPS_(void) {
    ALOGD("_ZN9GLContext4InitEPS_() called");
    return 0;
}

/* Exported Object: DynamicRESAlgoDVFSPolicy::s_algoSlotIndex */
extern "C" __attribute__((visibility("default"))) void* _ZN24DynamicRESAlgoDVFSPolicy15s_algoSlotIndexE = NULL;

/* Demangled: SDActorFpsLibManager::GetLib(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN20SDActorFpsLibManager6GetLibEPKc(void) {
    ALOGD("_ZN20SDActorFpsLibManager6GetLibEPKc() called");
    return 0;
}

/* Demangled: glGetTexParameteriv */
extern "C" __attribute__((visibility("default"))) int glGetTexParameteriv(void) {
    ALOGD("glGetTexParameteriv() called");
    return 0;
}

/* Demangled: DbgSDAlgoAEDisable::~DbgSDAlgoAEDisable() */
extern "C" __attribute__((visibility("default"))) int _ZN18DbgSDAlgoAEDisableD1Ev(void) {
    ALOGD("_ZN18DbgSDAlgoAEDisableD1Ev() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<unsigned int, program_info>, std::__1::__tree_node<std::__1::__value_type<unsigned int, program_info>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<unsigned int, program_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, program_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, program_info> > >::__emplace_unique_impl<std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int&>, std::__1::tuple<bool&&> >(std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int&>&&, std::__1::tuple<bool&&>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIj12program_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE21__emplace_unique_implIJRKNS_21piecewise_construct_tENS_5tupleIJRjEEENSF_IJObEEEEEENS_4pairINS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEbEEDpOT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIj12program_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE21__emplace_unique_implIJRKNS_21piecewise_construct_tENS_5tupleIJRjEEENSF_IJObEEEEEENS_4pairINS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEbEEDpOT_() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::FreeRelatedSet(TextureReplaceImpl::RelatedSet&) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl14FreeRelatedSetERNS_10RelatedSetE(void) {
    ALOGD("_ZN18TextureReplaceImpl14FreeRelatedSetERNS_10RelatedSetE() called");
    return 0;
}

/* Demangled: MBXProgressBar::SetGap(float) */
extern "C" __attribute__((visibility("default"))) int _ZN14MBXProgressBar6SetGapEf(void) {
    ALOGD("_ZN14MBXProgressBar6SetGapEf() called");
    return 0;
}

/* Demangled: DbgSDAlgoFixFps::Detect() */
extern "C" __attribute__((visibility("default"))) int _ZN15DbgSDAlgoFixFps6DetectEv(void) {
    ALOGD("_ZN15DbgSDAlgoFixFps6DetectEv() called");
    return 0;
}

/* Exported Object: typeinfo name for DbgSDAlgoQATxEnable */
extern "C" __attribute__((visibility("default"))) void* _ZTS19DbgSDAlgoQATxEnable = NULL;

/* Demangled: SystemInfo::IsReadyforUsed() */
extern "C" __attribute__((visibility("default"))) int _ZN10SystemInfo14IsReadyforUsedEv(void) {
    ALOGD("_ZN10SystemInfo14IsReadyforUsedEv() called");
    return 0;
}

/* Demangled: android::Singleton<GEDServiceClient>::hasInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI16GEDServiceClientE11hasInstanceEv(void) {
    ALOGD("_ZN7android9SingletonI16GEDServiceClientE11hasInstanceEv() called");
    return 0;
}

/* Demangled: DbgTextureReplaceMBox::DbgTextureReplaceMBox(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN21DbgTextureReplaceMBoxC2Ej(void) {
    ALOGD("_ZN21DbgTextureReplaceMBoxC2Ej() called");
    return 0;
}

/* Demangled: MBXComponent::~MBXComponent() */
extern "C" __attribute__((visibility("default"))) int _ZN12MBXComponentD0Ev(void) {
    ALOGD("_ZN12MBXComponentD0Ev() called");
    return 0;
}

/* Demangled: FramebufferSelection::FramebufferSelection(GLContextInfo&) */
extern "C" __attribute__((visibility("default"))) int _ZN20FramebufferSelectionC1ER13GLContextInfo(void) {
    ALOGD("_ZN20FramebufferSelectionC1ER13GLContextInfo() called");
    return 0;
}

/* Exported Object: ARCState::arcConfigRecordSize */
extern "C" __attribute__((visibility("default"))) void* _ZN8ARCState19arcConfigRecordSizeE = NULL;

/* Demangled: SDAlgoFusion::DetectScene() */
extern "C" __attribute__((visibility("default"))) int _ZN12SDAlgoFusion11DetectSceneEv(void) {
    ALOGD("_ZN12SDAlgoFusion11DetectSceneEv() called");
    return 0;
}

/* Demangled: SDAlgoFusion::SDAlgoFusion() */
extern "C" __attribute__((visibility("default"))) int _ZN12SDAlgoFusionC2Ev(void) {
    ALOGD("_ZN12SDAlgoFusionC2Ev() called");
    return 0;
}

/* Demangled: MBXStateBlock::MBXStateBlock(MBXRect const&) */
extern "C" __attribute__((visibility("default"))) int _ZN13MBXStateBlockC2ERK7MBXRect(void) {
    ALOGD("_ZN13MBXStateBlockC2ERK7MBXRect() called");
    return 0;
}

/* Exported Object: vtable for DbgSDAlgoDisable */
extern "C" __attribute__((visibility("default"))) void* _ZTV16DbgSDAlgoDisable = NULL;

/* Demangled: SDAlgoUniformSmooth::~SDAlgoUniformSmooth() */
extern "C" __attribute__((visibility("default"))) int _ZN19SDAlgoUniformSmoothD1Ev(void) {
    ALOGD("_ZN19SDAlgoUniformSmoothD1Ev() called");
    return 0;
}

/* Demangled: glRotatexOES */
extern "C" __attribute__((visibility("default"))) int glRotatexOES(void) {
    ALOGD("glRotatexOES() called");
    return 0;
}

/* Demangled: DbgSDAlgoQATxDisable::DbgSDAlgoQATxDisable() */
extern "C" __attribute__((visibility("default"))) int _ZN20DbgSDAlgoQATxDisableC2Ev(void) {
    ALOGD("_ZN20DbgSDAlgoQATxDisableC2Ev() called");
    return 0;
}

/* Demangled: GLContextInfo::SwapBuffersBegin() */
extern "C" __attribute__((visibility("default"))) int _ZN13GLContextInfo16SwapBuffersBeginEv(void) {
    ALOGD("_ZN13GLContextInfo16SwapBuffersBeginEv() called");
    return 0;
}

/* Exported Object: vtable for DbgTextureReplaceImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTV21DbgTextureReplaceImpl = NULL;

/* Demangled: DynamicRESAlgoSwitch::~DynamicRESAlgoSwitch() */
extern "C" __attribute__((visibility("default"))) int _ZN20DynamicRESAlgoSwitchD2Ev(void) {
    ALOGD("_ZN20DynamicRESAlgoSwitchD2Ev() called");
    return 0;
}

/* Demangled: glCreateShader */
extern "C" __attribute__((visibility("default"))) int glCreateShader(void) {
    ALOGD("glCreateShader() called");
    return 0;
}

/* Demangled: glDrawElementsInstancedANGLE */
extern "C" __attribute__((visibility("default"))) int glDrawElementsInstancedANGLE(void) {
    ALOGD("glDrawElementsInstancedANGLE() called");
    return 0;
}

/* Demangled: MBXDigits::~MBXDigits() */
extern "C" __attribute__((visibility("default"))) int _ZN9MBXDigitsD1Ev(void) {
    ALOGD("_ZN9MBXDigitsD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for DbgSDAlgoQATxDisable */
extern "C" __attribute__((visibility("default"))) void* _ZTS20DbgSDAlgoQATxDisable = NULL;

/* Demangled: MBXAlphabet::DrawAlphabetChar(SimpleRenderer*, int, float const*, float const*, float const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11MBXAlphabet16DrawAlphabetCharEP14SimpleRendereriPKfS3_S3_(void) {
    ALOGD("_ZN11MBXAlphabet16DrawAlphabetCharEP14SimpleRendereriPKfS3_S3_() called");
    return 0;
}

/* Demangled: void std::__1::vector<ARCHookListener*, std::__1::allocator<ARCHookListener*> >::__push_back_slow_path<ARCHookListener* const&>(ARCHookListener* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP15ARCHookListenerNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIP15ARCHookListenerNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_() called");
    return 0;
}

/* Demangled: MBXStateBlock::~MBXStateBlock() */
extern "C" __attribute__((visibility("default"))) int _ZN13MBXStateBlockD0Ev(void) {
    ALOGD("_ZN13MBXStateBlockD0Ev() called");
    return 0;
}

/* Demangled: GLContextInfo::~GLContextInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN13GLContextInfoD0Ev(void) {
    ALOGD("_ZN13GLContextInfoD0Ev() called");
    return 0;
}

/* Demangled: DynamicRESAlgoSmokeShader::ModifyProgramBinary(unsigned int, void const*, int, void const**, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN25DynamicRESAlgoSmokeShader19ModifyProgramBinaryEjPKviPS1_Pi(void) {
    ALOGD("_ZN25DynamicRESAlgoSmokeShader19ModifyProgramBinaryEjPKviPS1_Pi() called");
    return 0;
}

/* Demangled: DynamicRESActorNone::~DynamicRESActorNone() */
extern "C" __attribute__((visibility("default"))) int _ZN19DynamicRESActorNoneD2Ev(void) {
    ALOGD("_ZN19DynamicRESActorNoneD2Ev() called");
    return 0;
}

/* Exported Object: SDAlgoSlopeSmooth::sVertexHistoryLength */
extern "C" __attribute__((visibility("default"))) void* _ZN17SDAlgoSlopeSmooth20sVertexHistoryLengthE = NULL;

/* Demangled: SimpleGLRendererES20::BackupStates() */
extern "C" __attribute__((visibility("default"))) int _ZN20SimpleGLRendererES2012BackupStatesEv(void) {
    ALOGD("_ZN20SimpleGLRendererES2012BackupStatesEv() called");
    return 0;
}

/* Demangled: DbgSDAlgoFull::ShowES2(SDAppType) */
extern "C" __attribute__((visibility("default"))) int _ZN13DbgSDAlgoFull7ShowES2E9SDAppType(void) {
    ALOGD("_ZN13DbgSDAlgoFull7ShowES2E9SDAppType() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__1::__shared_ptr_emplace<SharedObjectManager, std::__1::allocator<SharedObjectManager> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt3__120__shared_ptr_emplaceI19SharedObjectManagerNS_9allocatorIS1_EEEE = NULL;

/* Exported Object: vtable for SDAlgoGameFpsControl */
extern "C" __attribute__((visibility("default"))) void* _ZTV20SDAlgoGameFpsControl = NULL;

/* Demangled: arcConfigFromFile::ParseItem(std::__1::multimap<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*) */
extern "C" __attribute__((visibility("default"))) int _ZN17arcConfigFromFile9ParseItemEPNSt3__18multimapINS0_12basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES7_NS0_4lessIS7_EENS5_INS0_4pairIKS7_S7_EEEEEEPSB_(void) {
    ALOGD("_ZN17arcConfigFromFile9ParseItemEPNSt3__18multimapINS0_12basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES7_NS0_4lessIS7_EENS5_INS0_4pairIKS7_S7_EEEEEEPSB_() called");
    return 0;
}

/* Demangled: DRES::setParam(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4DRES8setParamEPKcj(void) {
    ALOGD("_ZN4DRES8setParamEPKcj() called");
    return 0;
}

/* Demangled: glViewport */
extern "C" __attribute__((visibility("default"))) int glViewport(void) {
    ALOGD("glViewport() called");
    return 0;
}

/* Exported Object: typeinfo for ISDAlgorithm */
extern "C" __attribute__((visibility("default"))) void* _ZTI12ISDAlgorithm = NULL;

/* Demangled: non-virtual thunk to DbgSDAlgoAEDisable::~DbgSDAlgoAEDisable() */
extern "C" __attribute__((visibility("default"))) int _ZThn172_N18DbgSDAlgoAEDisableD1Ev(void) {
    ALOGD("_ZThn172_N18DbgSDAlgoAEDisableD1Ev() called");
    return 0;
}

/* Demangled: oppoConfigFromFile::oppoConfigFromFile(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN18oppoConfigFromFileC2EPKc(void) {
    ALOGD("_ZN18oppoConfigFromFileC2EPKc() called");
    return 0;
}

/* Demangled: DbgSDAlgoMBoxUtility::RegisterTouchEventLongPress(TouchEventHistory const*) */
extern "C" __attribute__((visibility("default"))) int _ZN20DbgSDAlgoMBoxUtility27RegisterTouchEventLongPressEPK17TouchEventHistory(void) {
    ALOGD("_ZN20DbgSDAlgoMBoxUtility27RegisterTouchEventLongPressEPK17TouchEventHistory() called");
    return 0;
}

/* Demangled: non-virtual thunk to DbgSDAlgoDisable::~DbgSDAlgoDisable() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N16DbgSDAlgoDisableD0Ev(void) {
    ALOGD("_ZThn8_N16DbgSDAlgoDisableD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> >::destroy(std::__1::__tree_node<unsigned int, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIjNS_4lessIjEENS_9allocatorIjEEE7destroyEPNS_11__tree_nodeIjPvEE(void) {
    ALOGD("_ZNSt3__16__treeIjNS_4lessIjEENS_9allocatorIjEEE7destroyEPNS_11__tree_nodeIjPvEE() called");
    return 0;
}

/* Demangled: DynamicRESAlgoFusion::DynamicRESAlgoFusion(GLContextInfo&, DynamicRESAlgoBase*) */
extern "C" __attribute__((visibility("default"))) int _ZN20DynamicRESAlgoFusionC2ER13GLContextInfoP18DynamicRESAlgoBase(void) {
    ALOGD("_ZN20DynamicRESAlgoFusionC2ER13GLContextInfoP18DynamicRESAlgoBase() called");
    return 0;
}

/* Demangled: ARCState::Init() */
extern "C" __attribute__((visibility("default"))) int _ZN8ARCState4InitEv(void) {
    ALOGD("_ZN8ARCState4InitEv() called");
    return 0;
}

/* Demangled: SimpleGLRendererES11::SimpleGLRendererES11() */
extern "C" __attribute__((visibility("default"))) int _ZN20SimpleGLRendererES11C1Ev(void) {
    ALOGD("_ZN20SimpleGLRendererES11C1Ev() called");
    return 0;
}

/* Demangled: ARCState::FlushOption_bool(ArcConfigOpt) */
extern "C" __attribute__((visibility("default"))) int _ZN8ARCState16FlushOption_boolE12ArcConfigOpt(void) {
    ALOGD("_ZN8ARCState16FlushOption_boolE12ArcConfigOpt() called");
    return 0;
}

/* Exported Object: SDAlgoListBasedStatistic::sP2VBOUniformChangeRate */
extern "C" __attribute__((visibility("default"))) void* _ZN24SDAlgoListBasedStatistic23sP2VBOUniformChangeRateE = NULL;

/* Demangled: operator+(MBXColor const&, MBXColor const&) */
extern "C" __attribute__((visibility("default"))) int _ZplRK8MBXColorS1_(void) {
    ALOGD("_ZplRK8MBXColorS1_() called");
    return 0;
}

/* Demangled: DbgSDAlgoMBoxUtility::GraphReset() */
extern "C" __attribute__((visibility("default"))) int _ZN20DbgSDAlgoMBoxUtility10GraphResetEv(void) {
    ALOGD("_ZN20DbgSDAlgoMBoxUtility10GraphResetEv() called");
    return 0;
}

/* Demangled: std::__1::__list_imp<TextureReplaceImpl::RelatedSet, std::__1::allocator<TextureReplaceImpl::RelatedSet> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIN18TextureReplaceImpl10RelatedSetENS_9allocatorIS2_EEE5clearEv(void) {
    ALOGD("_ZNSt3__110__list_impIN18TextureReplaceImpl10RelatedSetENS_9allocatorIS2_EEE5clearEv() called");
    return 0;
}

/* Demangled: glDrawElementsInstanced */
extern "C" __attribute__((visibility("default"))) int glDrawElementsInstanced(void) {
    ALOGD("glDrawElementsInstanced() called");
    return 0;
}

/* Demangled: SimpleGLRendererES11::~SimpleGLRendererES11() */
extern "C" __attribute__((visibility("default"))) int _ZN20SimpleGLRendererES11D2Ev(void) {
    ALOGD("_ZN20SimpleGLRendererES11D2Ev() called");
    return 0;
}

/* Demangled: DbgSDAlgoQACheckEnable::DbgSDAlgoQACheckEnable() */
extern "C" __attribute__((visibility("default"))) int _ZN22DbgSDAlgoQACheckEnableC1Ev(void) {
    ALOGD("_ZN22DbgSDAlgoQACheckEnableC1Ev() called");
    return 0;
}

/* Demangled: DbgDynamicResImpl::~DbgDynamicResImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN17DbgDynamicResImplD0Ev(void) {
    ALOGD("_ZN17DbgDynamicResImplD0Ev() called");
    return 0;
}

/* Demangled: DynamicRESActorRenderpassFBO::OverwriteRemappedRenderbuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN28DynamicRESActorRenderpassFBO29OverwriteRemappedRenderbufferEv(void) {
    ALOGD("_ZN28DynamicRESActorRenderpassFBO29OverwriteRemappedRenderbufferEv() called");
    return 0;
}

/* Exported Object: typeinfo for arcConfigFromQTService */
extern "C" __attribute__((visibility("default"))) void* _ZTI22arcConfigFromQTService = NULL;

/* Demangled: oppoConfigFromFile::AddConfig(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*) */
extern "C" __attribute__((visibility("default"))) int _ZN18oppoConfigFromFile9AddConfigEPKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN18oppoConfigFromFile9AddConfigEPKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: vtable for oppoConfigFromFile */
extern "C" __attribute__((visibility("default"))) void* _ZTV18oppoConfigFromFile = NULL;

/* Demangled: TextureReplaceImpl::RemoveHookFramebuffers() */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl22RemoveHookFramebuffersEv(void) {
    ALOGD("_ZN18TextureReplaceImpl22RemoveHookFramebuffersEv() called");
    return 0;
}

/* Demangled: etTouchInitialize() */
extern "C" __attribute__((visibility("default"))) int _Z17etTouchInitializev(void) {
    ALOGD("_Z17etTouchInitializev() called");
    return 0;
}

/* Demangled: DbgSDAlgoQACheckEnable::~DbgSDAlgoQACheckEnable() */
extern "C" __attribute__((visibility("default"))) int _ZN22DbgSDAlgoQACheckEnableD2Ev(void) {
    ALOGD("_ZN22DbgSDAlgoQACheckEnableD2Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<texture_image, std::__1::allocator<texture_image> >::__emplace_back_slow_path<int&, int&, int&>(int&, int&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI13texture_imageNS_9allocatorIS1_EEE24__emplace_back_slow_pathIJRiS6_S6_EEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorI13texture_imageNS_9allocatorIS1_EEE24__emplace_back_slow_pathIJRiS6_S6_EEEvDpOT_() called");
    return 0;
}

/* Demangled: GLContextInfo::FirstBind(void*, void*, ANativeWindow*) */
extern "C" __attribute__((visibility("default"))) int _ZN13GLContextInfo9FirstBindEPvS0_P13ANativeWindow(void) {
    ALOGD("_ZN13GLContextInfo9FirstBindEPvS0_P13ANativeWindow() called");
    return 0;
}

/* Exported Object: g_gli_isArcEnabled */
extern "C" __attribute__((visibility("default"))) void* g_gli_isArcEnabled = NULL;

/* Demangled: android::Singleton<ARCState>::hasInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI8ARCStateE11hasInstanceEv(void) {
    ALOGD("_ZN7android9SingletonI8ARCStateE11hasInstanceEv() called");
    return 0;
}

/* Demangled: DbgSDAlgoAEDisable::DbgSDAlgoAEDisable() */
extern "C" __attribute__((visibility("default"))) int _ZN18DbgSDAlgoAEDisableC1Ev(void) {
    ALOGD("_ZN18DbgSDAlgoAEDisableC1Ev() called");
    return 0;
}

/* Demangled: DynamicRESActorRenderpassFBO::BindTextureBegin(unsigned int, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN28DynamicRESActorRenderpassFBO16BindTextureBeginEjRj(void) {
    ALOGD("_ZN28DynamicRESActorRenderpassFBO16BindTextureBeginEjRj() called");
    return 0;
}

/* Exported Object: typeinfo name for SDAlgoSlowMotion */
extern "C" __attribute__((visibility("default"))) void* _ZTS16SDAlgoSlowMotion = NULL;

/* Demangled: eglSwapBuffersWithDamageKHR */
extern "C" __attribute__((visibility("default"))) int eglSwapBuffersWithDamageKHR(void) {
    ALOGD("eglSwapBuffersWithDamageKHR() called");
    return 0;
}

/* Demangled: glUniformMatrix4fv */
extern "C" __attribute__((visibility("default"))) int glUniformMatrix4fv(void) {
    ALOGD("glUniformMatrix4fv() called");
    return 0;
}

/* Demangled: android::Singleton<ARCState>::~Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI8ARCStateED1Ev(void) {
    ALOGD("_ZN7android9SingletonI8ARCStateED1Ev() called");
    return 0;
}

/* Demangled: DynamicRESActorFusion::DynamicRESActorFusion(GLContextInfo&, TextureReplaceImpl*) */
extern "C" __attribute__((visibility("default"))) int _ZN21DynamicRESActorFusionC1ER13GLContextInfoP18TextureReplaceImpl(void) {
    ALOGD("_ZN21DynamicRESActorFusionC1ER13GLContextInfoP18TextureReplaceImpl() called");
    return 0;
}

/* Demangled: DbgSDAlgoAEDisable::~DbgSDAlgoAEDisable() */
extern "C" __attribute__((visibility("default"))) int _ZN18DbgSDAlgoAEDisableD2Ev(void) {
    ALOGD("_ZN18DbgSDAlgoAEDisableD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, texture_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, texture_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, texture_info> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, texture_info>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIj12texture_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIj12texture_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::OverwriteRemappedTexture2D(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl26OverwriteRemappedTexture2DEj(void) {
    ALOGD("_ZN18TextureReplaceImpl26OverwriteRemappedTexture2DEj() called");
    return 0;
}

/* Exported Object: typeinfo name for SDAlgoBase */
extern "C" __attribute__((visibility("default"))) void* _ZTS10SDAlgoBase = NULL;

/* Demangled: MBXProgressBar::MBXProgressBar(MBXRect const&, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MBXProgressBarC1ERK7MBXRectjj(void) {
    ALOGD("_ZN14MBXProgressBarC1ERK7MBXRectjj() called");
    return 0;
}

/* Exported Object: typeinfo for SDAlgoFixFps */
extern "C" __attribute__((visibility("default"))) void* _ZTI12SDAlgoFixFps = NULL;

/* Demangled: DynamicRESActorDefaultFBO::SwapBuffers() */
extern "C" __attribute__((visibility("default"))) int _ZN25DynamicRESActorDefaultFBO11SwapBuffersEv(void) {
    ALOGD("_ZN25DynamicRESActorDefaultFBO11SwapBuffersEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<arcBuiltinConfig::DeviceId, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > > const>, std::__1::__map_value_compare<arcBuiltinConfig::DeviceId, std::__1::__value_type<arcBuiltinConfig::DeviceId, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > > const>, std::__1::less<arcBuiltinConfig::DeviceId>, true>, std::__1::allocator<std::__1::__value_type<arcBuiltinConfig::DeviceId, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > > const> > >::__find_equal<arcBuiltinConfig::DeviceId>(std::__1::__tree_const_iterator<std::__1::__value_type<arcBuiltinConfig::DeviceId, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > > const>, std::__1::__tree_node<std::__1::__value_type<arcBuiltinConfig::DeviceId, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > > const>, void*>*, int>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, arcBuiltinConfig::DeviceId const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIN16arcBuiltinConfig8DeviceIdEKNS_3mapINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEESA_NS_4lessISA_EENS8_INS_4pairIKSA_SA_EEEEEEEENS_19__map_value_compareIS3_SJ_NSB_IS3_EELb1EEENS8_ISJ_EEE12__find_equalIS3_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SR_EEiEERPNS_15__tree_end_nodeIST_EESU_RKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIN16arcBuiltinConfig8DeviceIdEKNS_3mapINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEESA_NS_4lessISA_EENS8_INS_4pairIKSA_SA_EEEEEEEENS_19__map_value_compareIS3_SJ_NSB_IS3_EELb1EEENS8_ISJ_EEE12__find_equalIS3_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SR_EEiEERPNS_15__tree_end_nodeIST_EESU_RKT_() called");
    return 0;
}

/* Demangled: glDisable */
extern "C" __attribute__((visibility("default"))) int glDisable(void) {
    ALOGD("glDisable() called");
    return 0;
}

/* Demangled: MBXComponent::~MBXComponent() */
extern "C" __attribute__((visibility("default"))) int _ZN12MBXComponentD1Ev(void) {
    ALOGD("_ZN12MBXComponentD1Ev() called");
    return 0;
}

/* Demangled: DbgSDAlgoQATxEnable::GraphSetLayoutState(SDAppType) */
extern "C" __attribute__((visibility("default"))) int _ZN19DbgSDAlgoQATxEnable19GraphSetLayoutStateE9SDAppType(void) {
    ALOGD("_ZN19DbgSDAlgoQATxEnable19GraphSetLayoutStateE9SDAppType() called");
    return 0;
}

/* Demangled: SDAlgoUniformSmooth::SDAlgoUniformSmooth() */
extern "C" __attribute__((visibility("default"))) int _ZN19SDAlgoUniformSmoothC1Ev(void) {
    ALOGD("_ZN19SDAlgoUniformSmoothC1Ev() called");
    return 0;
}

/* Demangled: glProgramBinary */
extern "C" __attribute__((visibility("default"))) int glProgramBinary(void) {
    ALOGD("glProgramBinary() called");
    return 0;
}

/* Demangled: glUseProgram */
extern "C" __attribute__((visibility("default"))) int glUseProgram(void) {
    ALOGD("glUseProgram() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<unsigned int, TextureReplaceImpl::name_info>, std::__1::__tree_node<std::__1::__value_type<unsigned int, TextureReplaceImpl::name_info>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<unsigned int, TextureReplaceImpl::name_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, TextureReplaceImpl::name_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, TextureReplaceImpl::name_info> > >::__emplace_unique_impl<std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int&>, std::__1::tuple<unsigned int&, unsigned int&, unsigned int&> >(std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int&>&&, std::__1::tuple<unsigned int&, unsigned int&, unsigned int&>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN18TextureReplaceImpl9name_infoEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE21__emplace_unique_implIJRKNS_21piecewise_construct_tENS_5tupleIJRjEEENSG_IJSH_SH_SH_EEEEEENS_4pairINS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEbEEDpOT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN18TextureReplaceImpl9name_infoEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE21__emplace_unique_implIJRKNS_21piecewise_construct_tENS_5tupleIJRjEEENSG_IJSH_SH_SH_EEEEEENS_4pairINS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEbEEDpOT_() called");
    return 0;
}

/* Demangled: perfConfigFromService::~perfConfigFromService() */
extern "C" __attribute__((visibility("default"))) int _ZN21perfConfigFromServiceD0Ev(void) {
    ALOGD("_ZN21perfConfigFromServiceD0Ev() called");
    return 0;
}

/* Demangled: MBXDigits::MBXDigits() */
extern "C" __attribute__((visibility("default"))) int _ZN9MBXDigitsC1Ev(void) {
    ALOGD("_ZN9MBXDigitsC1Ev() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::BlitFramebufferEnd() */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl18BlitFramebufferEndEv(void) {
    ALOGD("_ZN18TextureReplaceImpl18BlitFramebufferEndEv() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::SetTexParameterivEnd(unsigned int, unsigned int, int const*) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl20SetTexParameterivEndEjjPKi(void) {
    ALOGD("_ZN18TextureReplaceImpl20SetTexParameterivEndEjjPKi() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j(void) {
    ALOGD("_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<DynamicRESAlgoSmokeShader::SharedResource, std::__1::allocator<DynamicRESAlgoSmokeShader::SharedResource> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN25DynamicRESAlgoSmokeShader14SharedResourceENS_9allocatorIS2_EEEE = NULL;

/* Demangled: SDAlgoUniformSmooth::~SDAlgoUniformSmooth() */
extern "C" __attribute__((visibility("default"))) int _ZN19SDAlgoUniformSmoothD2Ev(void) {
    ALOGD("_ZN19SDAlgoUniformSmoothD2Ev() called");
    return 0;
}

/* Exported Object: android::Singleton<QTServiceClient>::sInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9SingletonI15QTServiceClientE9sInstanceE = NULL;

/* Exported Object: ARC_GLUE::g_init_table */
extern "C" __attribute__((visibility("default"))) void* _ZN8ARC_GLUE12g_init_tableE = NULL;

/* Demangled: MBXRect::~MBXRect() */
extern "C" __attribute__((visibility("default"))) int _ZN7MBXRectD1Ev(void) {
    ALOGD("_ZN7MBXRectD1Ev() called");
    return 0;
}

/* Demangled: SimpleGLRendererES20::Draw(int, float const*, float const*) */
extern "C" __attribute__((visibility("default"))) int _ZN20SimpleGLRendererES204DrawEiPKfS1_(void) {
    ALOGD("_ZN20SimpleGLRendererES204DrawEiPKfS1_() called");
    return 0;
}

/* Demangled: DynamicFpsImpl::SwapBuffersEnd() */
extern "C" __attribute__((visibility("default"))) int _ZN14DynamicFpsImpl14SwapBuffersEndEv(void) {
    ALOGD("_ZN14DynamicFpsImpl14SwapBuffersEndEv() called");
    return 0;
}

/* Demangled: MBXDigits::~MBXDigits() */
extern "C" __attribute__((visibility("default"))) int _ZN9MBXDigitsD2Ev(void) {
    ALOGD("_ZN9MBXDigitsD2Ev() called");
    return 0;
}

/* Demangled: ARCRegisterEGLHook */
extern "C" __attribute__((visibility("default"))) int ARCRegisterEGLHook(void) {
    ALOGD("ARCRegisterEGLHook() called");
    return 0;
}

/* Exported Object: typeinfo for SDAlgoBase */
extern "C" __attribute__((visibility("default"))) void* _ZTI10SDAlgoBase = NULL;

/* Exported Object: arcConfig */
extern "C" __attribute__((visibility("default"))) void* arcConfig = NULL;

/* Demangled: glRenderbufferStorageMultisampleEXT */
extern "C" __attribute__((visibility("default"))) int glRenderbufferStorageMultisampleEXT(void) {
    ALOGD("glRenderbufferStorageMultisampleEXT() called");
    return 0;
}

/* Exported Object: vtable for DbgSDAlgoMultiSwitch */
extern "C" __attribute__((visibility("default"))) void* _ZTV20DbgSDAlgoMultiSwitch = NULL;

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, program_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, program_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, program_info> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, program_info>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIj12program_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIj12program_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE() called");
    return 0;
}

/* Demangled: ARCDispatchToListeners(TouchEventHistory const*) */
extern "C" __attribute__((visibility("default"))) int _Z22ARCDispatchToListenersPK17TouchEventHistory(void) {
    ALOGD("_Z22ARCDispatchToListenersPK17TouchEventHistory() called");
    return 0;
}

/* Exported Object: typeinfo name for MBXAlphabet */
extern "C" __attribute__((visibility("default"))) void* _ZTS11MBXAlphabet = NULL;

/* Demangled: MBXStateBlock::~MBXStateBlock() */
extern "C" __attribute__((visibility("default"))) int _ZN13MBXStateBlockD1Ev(void) {
    ALOGD("_ZN13MBXStateBlockD1Ev() called");
    return 0;
}

/* Demangled: GLContextInfo::Clear(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN13GLContextInfo5ClearEj(void) {
    ALOGD("_ZN13GLContextInfo5ClearEj() called");
    return 0;
}

/* Demangled: etDestroyEventThread() */
extern "C" __attribute__((visibility("default"))) int _Z20etDestroyEventThreadv(void) {
    ALOGD("_Z20etDestroyEventThreadv() called");
    return 0;
}

/* Exported Object: typeinfo name for ARCHookDispatcher */
extern "C" __attribute__((visibility("default"))) void* _ZTS17ARCHookDispatcher = NULL;

/* Exported Object: typeinfo for MBXComponent */
extern "C" __attribute__((visibility("default"))) void* _ZTI12MBXComponent = NULL;

/* Demangled: MBXDigits::DrawTwoDigitalChars(SimpleRenderer*, int, float const*, float const*, float const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9MBXDigits19DrawTwoDigitalCharsEP14SimpleRendereriPKfS3_S3_(void) {
    ALOGD("_ZN9MBXDigits19DrawTwoDigitalCharsEP14SimpleRendereriPKfS3_S3_() called");
    return 0;
}

/* Demangled: std::__1::vector<texture_image, std::__1::allocator<texture_image> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI13texture_imageNS_9allocatorIS1_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorI13texture_imageNS_9allocatorIS1_EEE8__appendEj() called");
    return 0;
}

/* Demangled: GLContextInfo::~GLContextInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN13GLContextInfoD1Ev(void) {
    ALOGD("_ZN13GLContextInfoD1Ev() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::GetActiveUniform(unsigned int, unsigned int, int, int*, int*, unsigned int*, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl16GetActiveUniformEjjiPiS0_PjPc(void) {
    ALOGD("_ZN18TextureReplaceImpl16GetActiveUniformEjjiPiS0_PjPc() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::ModifyGetProgramBinary(unsigned int, int, void*, void**) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl22ModifyGetProgramBinaryEjiPvPS0_(void) {
    ALOGD("_ZN18TextureReplaceImpl22ModifyGetProgramBinaryEjiPvPS0_() called");
    return 0;
}

/* Exported Object: arcLogLevelTag */
extern "C" __attribute__((visibility("default"))) void* arcLogLevelTag = NULL;

/* Exported Object: vtable for DynamicResImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTV14DynamicResImpl = NULL;

/* Demangled: DynamicRESAlgoDVFSPolicy::GetSuggestedSlotindex() */
extern "C" __attribute__((visibility("default"))) int _ZN24DynamicRESAlgoDVFSPolicy21GetSuggestedSlotindexEv(void) {
    ALOGD("_ZN24DynamicRESAlgoDVFSPolicy21GetSuggestedSlotindexEv() called");
    return 0;
}

/* Demangled: oppoConfigFromFile::ParseType(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN18oppoConfigFromFile9ParseTypeEPNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPKS6_RS8_SA_(void) {
    ALOGD("_ZN18oppoConfigFromFile9ParseTypeEPNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPKS6_RS8_SA_() called");
    return 0;
}

/* Demangled: non-virtual thunk to DbgSDAlgoDisable::~DbgSDAlgoDisable() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N16DbgSDAlgoDisableD1Ev(void) {
    ALOGD("_ZThn8_N16DbgSDAlgoDisableD1Ev() called");
    return 0;
}

/* Demangled: android::Singleton<GEDServiceClient>::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI16GEDServiceClientE11getInstanceEv(void) {
    ALOGD("_ZN7android9SingletonI16GEDServiceClientE11getInstanceEv() called");
    return 0;
}

/* Demangled: ProgramCache::~ProgramCache() */
extern "C" __attribute__((visibility("default"))) int _ZN12ProgramCacheD1Ev(void) {
    ALOGD("_ZN12ProgramCacheD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for DynamicRESAlgoBase */
extern "C" __attribute__((visibility("default"))) void* _ZTS18DynamicRESAlgoBase = NULL;

/* Demangled: MBXAlphabet::MBXAlphabet(MBXRect const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11MBXAlphabetC1ERK7MBXRect(void) {
    ALOGD("_ZN11MBXAlphabetC1ERK7MBXRect() called");
    return 0;
}

/* Demangled: SimpleGLRendererES11::SimpleGLRendererES11() */
extern "C" __attribute__((visibility("default"))) int _ZN20SimpleGLRendererES11C2Ev(void) {
    ALOGD("_ZN20SimpleGLRendererES11C2Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for DbgSDAlgoMBoxUtility */
extern "C" __attribute__((visibility("default"))) void* _ZTS20DbgSDAlgoMBoxUtility = NULL;

/* Demangled: glDeleteRenderbuffers */
extern "C" __attribute__((visibility("default"))) int glDeleteRenderbuffers(void) {
    ALOGD("glDeleteRenderbuffers() called");
    return 0;
}

/* Exported Object: typeinfo name for TextureReplaceImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTS18TextureReplaceImpl = NULL;

/* Exported Object: oppoConfigFromService::s_GetGiFTFeatureOn_pfn */
extern "C" __attribute__((visibility("default"))) void* _ZN21oppoConfigFromService22s_GetGiFTFeatureOn_pfnE = NULL;

/* Exported Object: vtable for SDAlgoDisable */
extern "C" __attribute__((visibility("default"))) void* _ZTV13SDAlgoDisable = NULL;

/* Demangled: DbgSDAlgoQACheckEnable::DbgSDAlgoQACheckEnable() */
extern "C" __attribute__((visibility("default"))) int _ZN22DbgSDAlgoQACheckEnableC2Ev(void) {
    ALOGD("_ZN22DbgSDAlgoQACheckEnableC2Ev() called");
    return 0;
}

/* Demangled: DbgDynamicResImpl::~DbgDynamicResImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN17DbgDynamicResImplD1Ev(void) {
    ALOGD("_ZN17DbgDynamicResImplD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Exported Object: typeinfo for DbgTextureReplaceImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTI21DbgTextureReplaceImpl = NULL;

/* Exported Object: typeinfo name for DynamicRESActorBase */
extern "C" __attribute__((visibility("default"))) void* _ZTS19DynamicRESActorBase = NULL;

/* Demangled: ARCGetNativeWindow(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z18ARCGetNativeWindowj(void) {
    ALOGD("_Z18ARCGetNativeWindowj() called");
    return 0;
}

/* Demangled: non-virtual thunk to DbgSDAlgoSimple::~DbgSDAlgoSimple() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N15DbgSDAlgoSimpleD0Ev(void) {
    ALOGD("_ZThn8_N15DbgSDAlgoSimpleD0Ev() called");
    return 0;
}

/* Demangled: arcBuiltinConfig::DebugPrintParams() const */
extern "C" __attribute__((visibility("default"))) int _ZNK16arcBuiltinConfig16DebugPrintParamsEv(void) {
    ALOGD("_ZNK16arcBuiltinConfig16DebugPrintParamsEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: DynamicRESActorRenderpassFBO::CreateAndBindNonAADrawFBO(unsigned int, unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN28DynamicRESActorRenderpassFBO25CreateAndBindNonAADrawFBOEjjb(void) {
    ALOGD("_ZN28DynamicRESActorRenderpassFBO25CreateAndBindNonAADrawFBOEjjb() called");
    return 0;
}

/* Demangled: android::Singleton<ARCState>::Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI8ARCStateEC1Ev(void) {
    ALOGD("_ZN7android9SingletonI8ARCStateEC1Ev() called");
    return 0;
}

/* Demangled: DbgSDAlgoQADisable::GraphSetLayoutState(SDAppType) */
extern "C" __attribute__((visibility("default"))) int _ZN18DbgSDAlgoQADisable19GraphSetLayoutStateE9SDAppType(void) {
    ALOGD("_ZN18DbgSDAlgoQADisable19GraphSetLayoutStateE9SDAppType() called");
    return 0;
}

/* Demangled: non-virtual thunk to DbgSDAlgoAEDisable::NotifyTouchEvent(TouchEventHistory const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn172_N18DbgSDAlgoAEDisable16NotifyTouchEventEPK17TouchEventHistory(void) {
    ALOGD("_ZThn172_N18DbgSDAlgoAEDisable16NotifyTouchEventEPK17TouchEventHistory() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::UpdateWorkingStatus() */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl19UpdateWorkingStatusEv(void) {
    ALOGD("_ZN18TextureReplaceImpl19UpdateWorkingStatusEv() called");
    return 0;
}

/* Demangled: DynamicRESAlgoSmokeShader::DeleteProgram(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN25DynamicRESAlgoSmokeShader13DeleteProgramEj(void) {
    ALOGD("_ZN25DynamicRESAlgoSmokeShader13DeleteProgramEj() called");
    return 0;
}

/* Demangled: DynamicRESAlgoSmokeShader::DynamicRESAlgoSmokeShader(GLContextInfo&, DynamicRESAlgoBase*) */
extern "C" __attribute__((visibility("default"))) int _ZN25DynamicRESAlgoSmokeShaderC2ER13GLContextInfoP18DynamicRESAlgoBase(void) {
    ALOGD("_ZN25DynamicRESAlgoSmokeShaderC2ER13GLContextInfoP18DynamicRESAlgoBase() called");
    return 0;
}

/* Exported Object: DynamicRESAlgoDVFSPolicy::s_improved_rate */
extern "C" __attribute__((visibility("default"))) void* _ZN24DynamicRESAlgoDVFSPolicy15s_improved_rateE = NULL;

/* Demangled: ARCState::FlushMotionRES() */
extern "C" __attribute__((visibility("default"))) int _ZN8ARCState14FlushMotionRESEv(void) {
    ALOGD("_ZN8ARCState14FlushMotionRESEv() called");
    return 0;
}

/* Demangled: DbgSDAlgoAEDisable::DbgSDAlgoAEDisable() */
extern "C" __attribute__((visibility("default"))) int _ZN18DbgSDAlgoAEDisableC2Ev(void) {
    ALOGD("_ZN18DbgSDAlgoAEDisableC2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE0_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: SDAlgoFactory::~SDAlgoFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN13SDAlgoFactoryD1Ev(void) {
    ALOGD("_ZN13SDAlgoFactoryD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo for SDTouchHint */
extern "C" __attribute__((visibility("default"))) void* _ZTI11SDTouchHint = NULL;

/* Demangled: android::Singleton<ARCState>::~Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI8ARCStateED2Ev(void) {
    ALOGD("_ZN7android9SingletonI8ARCStateED2Ev() called");
    return 0;
}

/* Demangled: arcConfigFromQTService::IsEnable() const */
extern "C" __attribute__((visibility("default"))) int _ZNK22arcConfigFromQTService8IsEnableEv(void) {
    ALOGD("_ZNK22arcConfigFromQTService8IsEnableEv() called");
    return 0;
}

/* Demangled: MBXProgressBar::SetStep(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MBXProgressBar7SetStepEj(void) {
    ALOGD("_ZN14MBXProgressBar7SetStepEj() called");
    return 0;
}

/* Demangled: DbgSDAlgoDisable::ShowES2(SDAppType) */
extern "C" __attribute__((visibility("default"))) int _ZN16DbgSDAlgoDisable7ShowES2E9SDAppType(void) {
    ALOGD("_ZN16DbgSDAlgoDisable7ShowES2E9SDAppType() called");
    return 0;
}

/* Demangled: SDAlgoUniformSmooth::GetEncipherMValue() const */
extern "C" __attribute__((visibility("default"))) int _ZNK19SDAlgoUniformSmooth17GetEncipherMValueEv(void) {
    ALOGD("_ZNK19SDAlgoUniformSmooth17GetEncipherMValueEv() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::GetProgramiv(unsigned int, unsigned int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl12GetProgramivEjjPi(void) {
    ALOGD("_ZN18TextureReplaceImpl12GetProgramivEjjPi() called");
    return 0;
}

/* Exported Object: typeinfo name for DynamicRESAlgoComputeShader */
extern "C" __attribute__((visibility("default"))) void* _ZTS27DynamicRESAlgoComputeShader = NULL;

/* Exported Object: typeinfo name for SDAlgoListBasedStatistic */
extern "C" __attribute__((visibility("default"))) void* _ZTS24SDAlgoListBasedStatistic = NULL;

/* Exported Object: typeinfo for GLContext */
extern "C" __attribute__((visibility("default"))) void* _ZTI9GLContext = NULL;

/* Demangled: DbgSDAlgoMBoxUtility::UpdateRecentFps() */
extern "C" __attribute__((visibility("default"))) int _ZN20DbgSDAlgoMBoxUtility15UpdateRecentFpsEv(void) {
    ALOGD("_ZN20DbgSDAlgoMBoxUtility15UpdateRecentFpsEv() called");
    return 0;
}

/* Demangled: DynamicRESAlgoComputeShader::Detect() */
extern "C" __attribute__((visibility("default"))) int _ZN27DynamicRESAlgoComputeShader6DetectEv(void) {
    ALOGD("_ZN27DynamicRESAlgoComputeShader6DetectEv() called");
    return 0;
}

/* Exported Object: typeinfo name for arcConfigFromFile */
extern "C" __attribute__((visibility("default"))) void* _ZTS17arcConfigFromFile = NULL;

/* Demangled: MBXComponent::~MBXComponent() */
extern "C" __attribute__((visibility("default"))) int _ZN12MBXComponentD2Ev(void) {
    ALOGD("_ZN12MBXComponentD2Ev() called");
    return 0;
}

/* Demangled: DbgSDAlgoMBoxUtility::GraphSetSmoothDefaultColor(MBXComponent*, MBXColor const&, MBXColor const&) */
extern "C" __attribute__((visibility("default"))) int _ZN20DbgSDAlgoMBoxUtility26GraphSetSmoothDefaultColorEP12MBXComponentRK8MBXColorS4_(void) {
    ALOGD("_ZN20DbgSDAlgoMBoxUtility26GraphSetSmoothDefaultColorEP12MBXComponentRK8MBXColorS4_() called");
    return 0;
}

/* Demangled: SDAlgoUniformSmooth::SDAlgoUniformSmooth() */
extern "C" __attribute__((visibility("default"))) int _ZN19SDAlgoUniformSmoothC2Ev(void) {
    ALOGD("_ZN19SDAlgoUniformSmoothC2Ev() called");
    return 0;
}

/* Demangled: MBXRect::MBXRect() */
extern "C" __attribute__((visibility("default"))) int _ZN7MBXRectC1Ev(void) {
    ALOGD("_ZN7MBXRectC1Ev() called");
    return 0;
}

/* Demangled: DynamicRESAlgoSmokeShader::GetProgramiv(unsigned int, unsigned int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN25DynamicRESAlgoSmokeShader12GetProgramivEjjPi(void) {
    ALOGD("_ZN25DynamicRESAlgoSmokeShader12GetProgramivEjjPi() called");
    return 0;
}

/* Demangled: perfConfigFromService::~perfConfigFromService() */
extern "C" __attribute__((visibility("default"))) int _ZN21perfConfigFromServiceD1Ev(void) {
    ALOGD("_ZN21perfConfigFromServiceD1Ev() called");
    return 0;
}

/* Demangled: glGetTexParameterIuiv */
extern "C" __attribute__((visibility("default"))) int glGetTexParameterIuiv(void) {
    ALOGD("glGetTexParameterIuiv() called");
    return 0;
}

/* Exported Object: vtable for DbgMDynamicFpsImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTV18DbgMDynamicFpsImpl = NULL;

/* Demangled: MBXDigits::MBXDigits() */
extern "C" __attribute__((visibility("default"))) int _ZN9MBXDigitsC2Ev(void) {
    ALOGD("_ZN9MBXDigitsC2Ev() called");
    return 0;
}

/* Demangled: DynamicRESActorRenderpassFBO::SetTexParameterIuivEnd(unsigned int, unsigned int, unsigned int const*) */
extern "C" __attribute__((visibility("default"))) int _ZN28DynamicRESActorRenderpassFBO22SetTexParameterIuivEndEjjPKj(void) {
    ALOGD("_ZN28DynamicRESActorRenderpassFBO22SetTexParameterIuivEndEjjPKj() called");
    return 0;
}

/* Exported Object: arcBuiltinConfig::s_builtinList */
extern "C" __attribute__((visibility("default"))) void* _ZN16arcBuiltinConfig13s_builtinListE = NULL;

/* Exported Object: ARC_GLUE::g_tls_id */
extern "C" __attribute__((visibility("default"))) void* _ZN8ARC_GLUE8g_tls_idE = NULL;

/* Exported Object: vtable for DbgGLContext */
extern "C" __attribute__((visibility("default"))) void* _ZTV12DbgGLContext = NULL;

/* Demangled: MBXRect::~MBXRect() */
extern "C" __attribute__((visibility("default"))) int _ZN7MBXRectD2Ev(void) {
    ALOGD("_ZN7MBXRectD2Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for MBXDigits */
extern "C" __attribute__((visibility("default"))) void* _ZTS9MBXDigits = NULL;

/* Demangled: DbgSDAlgoFull::~DbgSDAlgoFull() */
extern "C" __attribute__((visibility("default"))) int _ZN13DbgSDAlgoFullD0Ev(void) {
    ALOGD("_ZN13DbgSDAlgoFullD0Ev() called");
    return 0;
}

/* Exported Object: typeinfo for DbgDynamicResImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTI17DbgDynamicResImpl = NULL;

/* Demangled: TextureReplaceImpl::ValidateHookTexture(unsigned int, unsigned int, unsigned int, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl19ValidateHookTextureEjjjRj(void) {
    ALOGD("_ZN18TextureReplaceImpl19ValidateHookTextureEjjjRj() called");
    return 0;
}

/* Demangled: MBXStateBlock::MBXStateBlock() */
extern "C" __attribute__((visibility("default"))) int _ZN13MBXStateBlockC1Ev(void) {
    ALOGD("_ZN13MBXStateBlockC1Ev() called");
    return 0;
}

/* Exported Object: typeinfo for ARCHookListener */
extern "C" __attribute__((visibility("default"))) void* _ZTI15ARCHookListener = NULL;

/* Demangled: SimpleGLRendererES20::LoadShaders(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN20SimpleGLRendererES2011LoadShadersEPKcS1_(void) {
    ALOGD("_ZN20SimpleGLRendererES2011LoadShadersEPKcS1_() called");
    return 0;
}

/* Demangled: DynamicRESActorRenderpassFBO::RestoreRemappedFramebuffer(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN28DynamicRESActorRenderpassFBO26RestoreRemappedFramebufferEj(void) {
    ALOGD("_ZN28DynamicRESActorRenderpassFBO26RestoreRemappedFramebufferEj() called");
    return 0;
}

/* Demangled: DynamicRESActorRenderpassFBO::SetFramebufferTexture2DEnd(unsigned int, unsigned int, unsigned int, unsigned int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN28DynamicRESActorRenderpassFBO26SetFramebufferTexture2DEndEjjjjii(void) {
    ALOGD("_ZN28DynamicRESActorRenderpassFBO26SetFramebufferTexture2DEndEjjjjii() called");
    return 0;
}

/* Demangled: SDAlgoSlopeSmooth::~SDAlgoSlopeSmooth() */
extern "C" __attribute__((visibility("default"))) int _ZN17SDAlgoSlopeSmoothD0Ev(void) {
    ALOGD("_ZN17SDAlgoSlopeSmoothD0Ev() called");
    return 0;
}

/* Demangled: android::Singleton<ARCState>::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI8ARCStateE11getInstanceEv(void) {
    ALOGD("_ZN7android9SingletonI8ARCStateE11getInstanceEv() called");
    return 0;
}

/* Exported Object: gTLSTable */
extern "C" __attribute__((visibility("default"))) void* gTLSTable = NULL;

/* Demangled: MBXStateBlock::~MBXStateBlock() */
extern "C" __attribute__((visibility("default"))) int _ZN13MBXStateBlockD2Ev(void) {
    ALOGD("_ZN13MBXStateBlockD2Ev() called");
    return 0;
}

/* Demangled: DynamicRESAlgoSwitch::DynamicRESAlgoSwitch(GLContextInfo&, DynamicRESAlgoBase*) */
extern "C" __attribute__((visibility("default"))) int _ZN20DynamicRESAlgoSwitchC2ER13GLContextInfoP18DynamicRESAlgoBase(void) {
    ALOGD("_ZN20DynamicRESAlgoSwitchC2ER13GLContextInfoP18DynamicRESAlgoBase() called");
    return 0;
}

/* Demangled: SceneDetector::PostAction(_SDActionEnv_&) */
extern "C" __attribute__((visibility("default"))) int _ZN13SceneDetector10PostActionER13_SDActionEnv_(void) {
    ALOGD("_ZN13SceneDetector10PostActionER13_SDActionEnv_() called");
    return 0;
}

/* Exported Object: typeinfo for DbgDynamicFpsImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTI17DbgDynamicFpsImpl = NULL;

/* Exported Object: typeinfo for MBXAlphabet */
extern "C" __attribute__((visibility("default"))) void* _ZTI11MBXAlphabet = NULL;

/* Demangled: GLContextInfo::~GLContextInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN13GLContextInfoD2Ev(void) {
    ALOGD("_ZN13GLContextInfoD2Ev() called");
    return 0;
}

/* Demangled: SDAlgoBase::~SDAlgoBase() */
extern "C" __attribute__((visibility("default"))) int _ZN10SDAlgoBaseD0Ev(void) {
    ALOGD("_ZN10SDAlgoBaseD0Ev() called");
    return 0;
}

/* Demangled: ProgramCache::ProgramCache() */
extern "C" __attribute__((visibility("default"))) int _ZN12ProgramCacheC1Ev(void) {
    ALOGD("_ZN12ProgramCacheC1Ev() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<unsigned int, TextureReplaceImpl::name_info>, std::__1::__tree_node<std::__1::__value_type<unsigned int, TextureReplaceImpl::name_info>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<unsigned int, TextureReplaceImpl::name_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, TextureReplaceImpl::name_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, TextureReplaceImpl::name_info> > >::__emplace_unique_impl<std::__1::piecewise_construct_t const&, std::__1::tuple<int&&>, std::__1::tuple<int&&, int&&, int&&> >(std::__1::piecewise_construct_t const&, std::__1::tuple<int&&>&&, std::__1::tuple<int&&, int&&, int&&>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN18TextureReplaceImpl9name_infoEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE21__emplace_unique_implIJRKNS_21piecewise_construct_tENS_5tupleIJOiEEENSG_IJSH_SH_SH_EEEEEENS_4pairINS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEbEEDpOT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN18TextureReplaceImpl9name_infoEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE21__emplace_unique_implIJRKNS_21piecewise_construct_tENS_5tupleIJOiEEENSG_IJSH_SH_SH_EEEEEENS_4pairINS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEbEEDpOT_() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Demangled: SDAlgoUniformSmooth::DetectScene() */
extern "C" __attribute__((visibility("default"))) int _ZN19SDAlgoUniformSmooth11DetectSceneEv(void) {
    ALOGD("_ZN19SDAlgoUniformSmooth11DetectSceneEv() called");
    return 0;
}

/* Exported Object: MEOW_PLUGIN_T_SYM */
extern "C" __attribute__((visibility("default"))) void* MEOW_PLUGIN_T_SYM = NULL;

/* Demangled: glScalef */
extern "C" __attribute__((visibility("default"))) int glScalef(void) {
    ALOGD("glScalef() called");
    return 0;
}

/* Exported Object: typeinfo for SimpleGLRendererES11 */
extern "C" __attribute__((visibility("default"))) void* _ZTI20SimpleGLRendererES11 = NULL;

/* Exported Object: typeinfo name for ISDAlgorithm */
extern "C" __attribute__((visibility("default"))) void* _ZTS12ISDAlgorithm = NULL;

/* Exported Object: typeinfo for SDAlgoSlowMotion */
extern "C" __attribute__((visibility("default"))) void* _ZTI16SDAlgoSlowMotion = NULL;

/* Exported Object: android::Singleton<ARCTouchEventDispatcher>::sLock */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9SingletonI23ARCTouchEventDispatcherE5sLockE = NULL;

/* Exported Object: typeinfo for SDAlgoFusion */
extern "C" __attribute__((visibility("default"))) void* _ZTI12SDAlgoFusion = NULL;

/* Demangled: FramebufferSelection::IsResizableRenderbuffer(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN20FramebufferSelection23IsResizableRenderbufferEj(void) {
    ALOGD("_ZN20FramebufferSelection23IsResizableRenderbufferEj() called");
    return 0;
}

/* Demangled: ProgramCache::~ProgramCache() */
extern "C" __attribute__((visibility("default"))) int _ZN12ProgramCacheD2Ev(void) {
    ALOGD("_ZN12ProgramCacheD2Ev() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::SetFramebufferParameterEnd(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl26SetFramebufferParameterEndEj(void) {
    ALOGD("_ZN18TextureReplaceImpl26SetFramebufferParameterEndEj() called");
    return 0;
}

/* Demangled: DynamicRESAlgoDVFSPolicy::DynamicRESAlgoDVFSPolicy(GLContextInfo&, DynamicRESAlgoBase*) */
extern "C" __attribute__((visibility("default"))) int _ZN24DynamicRESAlgoDVFSPolicyC2ER13GLContextInfoP18DynamicRESAlgoBase(void) {
    ALOGD("_ZN24DynamicRESAlgoDVFSPolicyC2ER13GLContextInfoP18DynamicRESAlgoBase() called");
    return 0;
}

/* Exported Object: SDAlgoUniformSmooth::sUniformSlideWindow */
extern "C" __attribute__((visibility("default"))) void* _ZN19SDAlgoUniformSmooth19sUniformSlideWindowE = NULL;

/* Demangled: ARCRegisterListener(ARCEventListener*) */
extern "C" __attribute__((visibility("default"))) int _Z19ARCRegisterListenerP16ARCEventListener(void) {
    ALOGD("_Z19ARCRegisterListenerP16ARCEventListener() called");
    return 0;
}

/* Exported Object: SystemInfo::s_gpu_freq_pred */
extern "C" __attribute__((visibility("default"))) void* _ZN10SystemInfo15s_gpu_freq_predE = NULL;

/* Demangled: DynamicRESActorRenderpassFBO::BindRenderbufferBegin(unsigned int, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN28DynamicRESActorRenderpassFBO21BindRenderbufferBeginEjRj(void) {
    ALOGD("_ZN28DynamicRESActorRenderpassFBO21BindRenderbufferBeginEjRj() called");
    return 0;
}

/* Demangled: DynamicRESActorRenderpassFBO::SetFramebufferRenderbufferEnd(unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN28DynamicRESActorRenderpassFBO29SetFramebufferRenderbufferEndEjjjj(void) {
    ALOGD("_ZN28DynamicRESActorRenderpassFBO29SetFramebufferRenderbufferEndEjjjj() called");
    return 0;
}

/* Demangled: SDTouchHint::~SDTouchHint() */
extern "C" __attribute__((visibility("default"))) int _ZN11SDTouchHintD0Ev(void) {
    ALOGD("_ZN11SDTouchHintD0Ev() called");
    return 0;
}

/* Demangled: GetArcConfig() */
extern "C" __attribute__((visibility("default"))) int _Z12GetArcConfigv(void) {
    ALOGD("_Z12GetArcConfigv() called");
    return 0;
}

/* Demangled: DbgDynamicResImpl::~DbgDynamicResImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN17DbgDynamicResImplD2Ev(void) {
    ALOGD("_ZN17DbgDynamicResImplD2Ev() called");
    return 0;
}

/* Demangled: DbgTextureReplaceImpl::BindFrameBufferBegin(unsigned int, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN21DbgTextureReplaceImpl20BindFrameBufferBeginEjRj(void) {
    ALOGD("_ZN21DbgTextureReplaceImpl20BindFrameBufferBeginEjRj() called");
    return 0;
}

/* Demangled: SDTouchHint::DetectScene() */
extern "C" __attribute__((visibility("default"))) int _ZN11SDTouchHint11DetectSceneEv(void) {
    ALOGD("_ZN11SDTouchHint11DetectSceneEv() called");
    return 0;
}

/* Demangled: oppoConfigFromService::~oppoConfigFromService() */
extern "C" __attribute__((visibility("default"))) int _ZN21oppoConfigFromServiceD0Ev(void) {
    ALOGD("_ZN21oppoConfigFromServiceD0Ev() called");
    return 0;
}

/* Demangled: std::__1::map<unsigned int, MBXColor, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, MBXColor> > >::operator[](unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__13mapIj8MBXColorNS_4lessIjEENS_9allocatorINS_4pairIKjS1_EEEEEixERS6_(void) {
    ALOGD("_ZNSt3__13mapIj8MBXColorNS_4lessIjEENS_9allocatorINS_4pairIKjS1_EEEEEixERS6_() called");
    return 0;
}

/* Demangled: non-virtual thunk to DbgSDAlgoSimple::~DbgSDAlgoSimple() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N15DbgSDAlgoSimpleD1Ev(void) {
    ALOGD("_ZThn8_N15DbgSDAlgoSimpleD1Ev() called");
    return 0;
}

/* Demangled: oppoConfigFromService::RegisterCB(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN21oppoConfigFromService10RegisterCBEPvS0_(void) {
    ALOGD("_ZN21oppoConfigFromService10RegisterCBEPvS0_() called");
    return 0;
}

/* Exported Object: oppoConfigFromService::s_GetGiFTPara_pfn */
extern "C" __attribute__((visibility("default"))) void* _ZN21oppoConfigFromService17s_GetGiFTPara_pfnE = NULL;

/* Demangled: MBXAlphabet::~MBXAlphabet() */
extern "C" __attribute__((visibility("default"))) int _ZN11MBXAlphabetD0Ev(void) {
    ALOGD("_ZN11MBXAlphabetD0Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<float*, std::__1::allocator<float*> >::__push_back_slow_path<float*>(float*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPfNS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPfNS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_() called");
    return 0;
}

/* Exported Object: typeinfo for IDbgSDAlgorithm */
extern "C" __attribute__((visibility("default"))) void* _ZTI15IDbgSDAlgorithm = NULL;

/* Demangled: FpsCollection::~FpsCollection() */
extern "C" __attribute__((visibility("default"))) int _ZN13FpsCollectionD1Ev(void) {
    ALOGD("_ZN13FpsCollectionD1Ev() called");
    return 0;
}

/* Demangled: SDAlgoFactory::SDAlgoFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN13SDAlgoFactoryC1Ev(void) {
    ALOGD("_ZN13SDAlgoFactoryC1Ev() called");
    return 0;
}

/* Demangled: android::Singleton<ARCState>::Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI8ARCStateEC2Ev(void) {
    ALOGD("_ZN7android9SingletonI8ARCStateEC2Ev() called");
    return 0;
}

/* Exported Object: vtable for IDbgSDAlgorithm */
extern "C" __attribute__((visibility("default"))) void* _ZTV15IDbgSDAlgorithm = NULL;

/* Demangled: etTouchEventp(void*) */
extern "C" __attribute__((visibility("default"))) int _Z13etTouchEventpPv(void) {
    ALOGD("_Z13etTouchEventpPv() called");
    return 0;
}

/* Exported Object: typeinfo for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: TextureReplaceImpl::SetDrawCall() */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl11SetDrawCallEv(void) {
    ALOGD("_ZN18TextureReplaceImpl11SetDrawCallEv() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::ModifyShader(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl12ModifyShaderEjRNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN18TextureReplaceImpl12ModifyShaderEjRNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::RestoreContextState() */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl19RestoreContextStateEv(void) {
    ALOGD("_ZN18TextureReplaceImpl19RestoreContextStateEv() called");
    return 0;
}

/* Demangled: DbgTextureReplaceMBox::IsTouchSwitchTxSlot(TouchEventHistory const*) */
extern "C" __attribute__((visibility("default"))) int _ZN21DbgTextureReplaceMBox19IsTouchSwitchTxSlotEPK17TouchEventHistory(void) {
    ALOGD("_ZN21DbgTextureReplaceMBox19IsTouchSwitchTxSlotEPK17TouchEventHistory() called");
    return 0;
}

/* Demangled: DynamicRESAlgoSmokeShader::DeleteShader(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN25DynamicRESAlgoSmokeShader12DeleteShaderEj(void) {
    ALOGD("_ZN25DynamicRESAlgoSmokeShader12DeleteShaderEj() called");
    return 0;
}

/* Demangled: SDAlgoFactory::~SDAlgoFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN13SDAlgoFactoryD2Ev(void) {
    ALOGD("_ZN13SDAlgoFactoryD2Ev() called");
    return 0;
}

/* Demangled: DbgSDAlgoAEDisable::ShowES2(SDAppType) */
extern "C" __attribute__((visibility("default"))) int _ZN18DbgSDAlgoAEDisable7ShowES2E9SDAppType(void) {
    ALOGD("_ZN18DbgSDAlgoAEDisable7ShowES2E9SDAppType() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: DynamicRESActorFusion::GetFinalSlotIndex(unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN21DynamicRESActorFusion17GetFinalSlotIndexEjb(void) {
    ALOGD("_ZN21DynamicRESActorFusion17GetFinalSlotIndexEjb() called");
    return 0;
}

/* Demangled: MBXComponent::MBXComponent() */
extern "C" __attribute__((visibility("default"))) int _ZN12MBXComponentC2Ev(void) {
    ALOGD("_ZN12MBXComponentC2Ev() called");
    return 0;
}

/* Demangled: DynamicRESAlgoFusion::DynamicRESAlgoFusion(GLContextInfo&, DynamicRESAlgoBase*) */
extern "C" __attribute__((visibility("default"))) int _ZN20DynamicRESAlgoFusionC1ER13GLContextInfoP18DynamicRESAlgoBase(void) {
    ALOGD("_ZN20DynamicRESAlgoFusionC1ER13GLContextInfoP18DynamicRESAlgoBase() called");
    return 0;
}

/* Demangled: ARC_GLUE::threadDeinit() */
extern "C" __attribute__((visibility("default"))) int _ZN8ARC_GLUE12threadDeinitEv(void) {
    ALOGD("_ZN8ARC_GLUE12threadDeinitEv() called");
    return 0;
}

/* Demangled: ARCState::ReadConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN8ARCState10ReadConfigEv(void) {
    ALOGD("_ZN8ARCState10ReadConfigEv() called");
    return 0;
}

/* Exported Object: typeinfo name for SDAlgoFixFps */
extern "C" __attribute__((visibility("default"))) void* _ZTS12SDAlgoFixFps = NULL;

/* Demangled: DynamicRESAlgoSmokeShader::GetSuggestedSlotindex() */
extern "C" __attribute__((visibility("default"))) int _ZN25DynamicRESAlgoSmokeShader21GetSuggestedSlotindexEv(void) {
    ALOGD("_ZN25DynamicRESAlgoSmokeShader21GetSuggestedSlotindexEv() called");
    return 0;
}

/* Demangled: FpsCollection::ResetRecentFps() */
extern "C" __attribute__((visibility("default"))) int _ZN13FpsCollection14ResetRecentFpsEv(void) {
    ALOGD("_ZN13FpsCollection14ResetRecentFpsEv() called");
    return 0;
}

/* Demangled: perfConfigFromService::perfConfigFromService() */
extern "C" __attribute__((visibility("default"))) int _ZN21perfConfigFromServiceC1Ev(void) {
    ALOGD("_ZN21perfConfigFromServiceC1Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for DbgSDAlgoQADisable */
extern "C" __attribute__((visibility("default"))) void* _ZTS18DbgSDAlgoQADisable = NULL;

/* Demangled: SharedObjectManager::~SharedObjectManager() */
extern "C" __attribute__((visibility("default"))) int _ZN19SharedObjectManagerD1Ev(void) {
    ALOGD("_ZN19SharedObjectManagerD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, TextureReplaceImpl::name_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, TextureReplaceImpl::name_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, TextureReplaceImpl::name_info> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, TextureReplaceImpl::name_info>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN18TextureReplaceImpl9name_infoEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN18TextureReplaceImpl9name_infoEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE() called");
    return 0;
}

/* Exported Object: vtable for DynamicRESAlgoDVFSPolicy */
extern "C" __attribute__((visibility("default"))) void* _ZTV24DynamicRESAlgoDVFSPolicy = NULL;

/* Demangled: DynamicRESActorRenderpassFBO::DispatchComputeBegin() */
extern "C" __attribute__((visibility("default"))) int _ZN28DynamicRESActorRenderpassFBO20DispatchComputeBeginEv(void) {
    ALOGD("_ZN28DynamicRESActorRenderpassFBO20DispatchComputeBeginEv() called");
    return 0;
}

/* Demangled: perfConfigFromService::GetOption(char*, int, char const*, char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK21perfConfigFromService9GetOptionEPciPKcS2_(void) {
    ALOGD("_ZNK21perfConfigFromService9GetOptionEPciPKcS2_() called");
    return 0;
}

/* Demangled: MBXRect::MBXRect() */
extern "C" __attribute__((visibility("default"))) int _ZN7MBXRectC2Ev(void) {
    ALOGD("_ZN7MBXRectC2Ev() called");
    return 0;
}

/* Demangled: perfConfigFromService::~perfConfigFromService() */
extern "C" __attribute__((visibility("default"))) int _ZN21perfConfigFromServiceD2Ev(void) {
    ALOGD("_ZN21perfConfigFromServiceD2Ev() called");
    return 0;
}

/* Demangled: DbgSDAlgoDisable::GraphSetLayoutState(SDAppType) */
extern "C" __attribute__((visibility("default"))) int _ZN16DbgSDAlgoDisable19GraphSetLayoutStateE9SDAppType(void) {
    ALOGD("_ZN16DbgSDAlgoDisable19GraphSetLayoutStateE9SDAppType() called");
    return 0;
}

/* Demangled: MBXProgressBar::SetCount(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MBXProgressBar8SetCountEj(void) {
    ALOGD("_ZN14MBXProgressBar8SetCountEj() called");
    return 0;
}

/* Demangled: arcDebugPrint(unsigned int, char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _Z13arcDebugPrintjPKcz(void) {
    ALOGD("_Z13arcDebugPrintjPKcz() called");
    return 0;
}

/* Demangled: DbgSDAlgoFull::~DbgSDAlgoFull() */
extern "C" __attribute__((visibility("default"))) int _ZN13DbgSDAlgoFullD1Ev(void) {
    ALOGD("_ZN13DbgSDAlgoFullD1Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: ARCReleaseContext(unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _Z17ARCReleaseContextjPv(void) {
    ALOGD("_Z17ARCReleaseContextjPv() called");
    return 0;
}

/* Demangled: MBXStateBlock::MBXStateBlock() */
extern "C" __attribute__((visibility("default"))) int _ZN13MBXStateBlockC2Ev(void) {
    ALOGD("_ZN13MBXStateBlockC2Ev() called");
    return 0;
}

/* Exported Object: android::Singleton<GEDServiceClient>::sLock */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9SingletonI16GEDServiceClientE5sLockE = NULL;

/* Exported Object: vtable for DynamicRESAlgoSmokeShader */
extern "C" __attribute__((visibility("default"))) void* _ZTV25DynamicRESAlgoSmokeShader = NULL;

/* Demangled: SDActorFpsController::TakeActionPostSWBuf(_SDActionEnv_ const&) */
extern "C" __attribute__((visibility("default"))) int _ZN20SDActorFpsController19TakeActionPostSWBufERK13_SDActionEnv_(void) {
    ALOGD("_ZN20SDActorFpsController19TakeActionPostSWBufERK13_SDActionEnv_() called");
    return 0;
}

/* Demangled: SDAlgoSlopeSmooth::~SDAlgoSlopeSmooth() */
extern "C" __attribute__((visibility("default"))) int _ZN17SDAlgoSlopeSmoothD1Ev(void) {
    ALOGD("_ZN17SDAlgoSlopeSmoothD1Ev() called");
    return 0;
}

/* Demangled: glDrawRangeElementsBaseVertexOES */
extern "C" __attribute__((visibility("default"))) int glDrawRangeElementsBaseVertexOES(void) {
    ALOGD("glDrawRangeElementsBaseVertexOES() called");
    return 0;
}

/* Demangled: glScalex */
extern "C" __attribute__((visibility("default"))) int glScalex(void) {
    ALOGD("glScalex() called");
    return 0;
}

/* Exported Object: eventRefCnt */
extern "C" __attribute__((visibility("default"))) void* eventRefCnt = NULL;

/* Exported Object: contextMutex */
extern "C" __attribute__((visibility("default"))) void* contextMutex = NULL;

/* Exported Object: typeinfo name for MBXComponent */
extern "C" __attribute__((visibility("default"))) void* _ZTS12MBXComponent = NULL;

/* Demangled: non-virtual thunk to DbgSDAlgoMultiSwitch::~DbgSDAlgoMultiSwitch() */
extern "C" __attribute__((visibility("default"))) int _ZThn4_N20DbgSDAlgoMultiSwitchD0Ev(void) {
    ALOGD("_ZThn4_N20DbgSDAlgoMultiSwitchD0Ev() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::CreateHookFramebuffer(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl21CreateHookFramebufferEjj(void) {
    ALOGD("_ZN18TextureReplaceImpl21CreateHookFramebufferEjj() called");
    return 0;
}

/* Demangled: DynamicRESAlgoFusion::Detect() */
extern "C" __attribute__((visibility("default"))) int _ZN20DynamicRESAlgoFusion6DetectEv(void) {
    ALOGD("_ZN20DynamicRESAlgoFusion6DetectEv() called");
    return 0;
}

/* Demangled: SDAlgoBase::~SDAlgoBase() */
extern "C" __attribute__((visibility("default"))) int _ZN10SDAlgoBaseD1Ev(void) {
    ALOGD("_ZN10SDAlgoBaseD1Ev() called");
    return 0;
}

/* Demangled: SDAlgoSlowMotion::UpdateFrameData(GLFrameData const&) */
extern "C" __attribute__((visibility("default"))) int _ZN16SDAlgoSlowMotion15UpdateFrameDataERK11GLFrameData(void) {
    ALOGD("_ZN16SDAlgoSlowMotion15UpdateFrameDataERK11GLFrameData() called");
    return 0;
}

/* Demangled: arcConfigFromFile::GetOptionDRES(char*, unsigned int, char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK17arcConfigFromFile13GetOptionDRESEPcjPKc(void) {
    ALOGD("_ZNK17arcConfigFromFile13GetOptionDRESEPcjPKc() called");
    return 0;
}

/* Demangled: DynamicResImpl::DynamicResImpl(int, DynamicResImpl*) */
extern "C" __attribute__((visibility("default"))) int _ZN14DynamicResImplC2EiPS_(void) {
    ALOGD("_ZN14DynamicResImplC2EiPS_() called");
    return 0;
}

/* Demangled: ProgramCache::ProgramCache() */
extern "C" __attribute__((visibility("default"))) int _ZN12ProgramCacheC2Ev(void) {
    ALOGD("_ZN12ProgramCacheC2Ev() called");
    return 0;
}

/* Exported Object: vtable for DbgTextureReplaceMBox */
extern "C" __attribute__((visibility("default"))) void* _ZTV21DbgTextureReplaceMBox = NULL;

/* Demangled: unsigned int std::__1::__tree<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> >::__erase_unique<unsigned int>(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIjNS_4lessIjEENS_9allocatorIjEEE14__erase_uniqueIjEEjRKT_(void) {
    ALOGD("_ZNSt3__16__treeIjNS_4lessIjEENS_9allocatorIjEEE14__erase_uniqueIjEEjRKT_() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<arcBuiltinConfig::DeviceId, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > > const>, std::__1::__tree_node<std::__1::__value_type<arcBuiltinConfig::DeviceId, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > > const>, void*>*, int> std::__1::__tree<std::__1::__value_type<arcBuiltinConfig::DeviceId, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > > const>, std::__1::__map_value_compare<arcBuiltinConfig::DeviceId, std::__1::__value_type<arcBuiltinConfig::DeviceId, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > > const>, std::__1::less<arcBuiltinConfig::DeviceId>, true>, std::__1::allocator<std::__1::__value_type<arcBuiltinConfig::DeviceId, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > > const> > >::__emplace_hint_unique_key_args<arcBuiltinConfig::DeviceId, std::__1::pair<arcBuiltinConfig::DeviceId const, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > > const> const&>(std::__1::__tree_const_iterator<std::__1::__value_type<arcBuiltinConfig::DeviceId, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > > const>, std::__1::__tree_node<std::__1::__value_type<arcBuiltinConfig::DeviceId, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > > const>, void*>*, int>, arcBuiltinConfig::DeviceId const&, std::__1::pair<arcBuiltinConfig::DeviceId const, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > > const> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIN16arcBuiltinConfig8DeviceIdEKNS_3mapINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEESA_NS_4lessISA_EENS8_INS_4pairIKSA_SA_EEEEEEEENS_19__map_value_compareIS3_SJ_NSB_IS3_EELb1EEENS8_ISJ_EEE30__emplace_hint_unique_key_argsIS3_JRKNSD_IKS3_SI_EEEEENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_PvEEiEENS_21__tree_const_iteratorISJ_SY_iEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIN16arcBuiltinConfig8DeviceIdEKNS_3mapINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEESA_NS_4lessISA_EENS8_INS_4pairIKSA_SA_EEEEEEEENS_19__map_value_compareIS3_SJ_NSB_IS3_EELb1EEENS8_ISJ_EEE30__emplace_hint_unique_key_argsIS3_JRKNSD_IKS3_SI_EEEEENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_PvEEiEENS_21__tree_const_iteratorISJ_SY_iEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: glDrawRangeElementsBaseVertex */
extern "C" __attribute__((visibility("default"))) int glDrawRangeElementsBaseVertex(void) {
    ALOGD("glDrawRangeElementsBaseVertex() called");
    return 0;
}

/* Demangled: DbgSDAlgoFixFps::ShowES1(SDAppType) */
extern "C" __attribute__((visibility("default"))) int _ZN15DbgSDAlgoFixFps7ShowES1E9SDAppType(void) {
    ALOGD("_ZN15DbgSDAlgoFixFps7ShowES1E9SDAppType() called");
    return 0;
}

/* Demangled: ARCSetNativeWindow(unsigned int, ANativeWindow*) */
extern "C" __attribute__((visibility("default"))) int _Z18ARCSetNativeWindowjP13ANativeWindow(void) {
    ALOGD("_Z18ARCSetNativeWindowjP13ANativeWindow() called");
    return 0;
}

/* Exported Object: typeinfo name for DbgSDAlgoQACheckEnable */
extern "C" __attribute__((visibility("default"))) void* _ZTS22DbgSDAlgoQACheckEnable = NULL;

/* Exported Object: vtable for DynamicRESActorDefaultFBO */
extern "C" __attribute__((visibility("default"))) void* _ZTV25DynamicRESActorDefaultFBO = NULL;

/* Demangled: SDTouchHint::~SDTouchHint() */
extern "C" __attribute__((visibility("default"))) int _ZN11SDTouchHintD1Ev(void) {
    ALOGD("_ZN11SDTouchHintD1Ev() called");
    return 0;
}

/* Demangled: FpsCollection::FpsCollection() */
extern "C" __attribute__((visibility("default"))) int _ZN13FpsCollectionC1Ev(void) {
    ALOGD("_ZN13FpsCollectionC1Ev() called");
    return 0;
}

/* Demangled: DynamicRESActorDefaultFBO::BlitFramebufferBegin(int&, int&, int&, int&, int&, int&, int&, int&, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN25DynamicRESActorDefaultFBO20BlitFramebufferBeginERiS0_S0_S0_S0_S0_S0_S0_jj(void) {
    ALOGD("_ZN25DynamicRESActorDefaultFBO20BlitFramebufferBeginERiS0_S0_S0_S0_S0_S0_S0_jj() called");
    return 0;
}

/* Demangled: oppoConfigFromService::~oppoConfigFromService() */
extern "C" __attribute__((visibility("default"))) int _ZN21oppoConfigFromServiceD1Ev(void) {
    ALOGD("_ZN21oppoConfigFromServiceD1Ev() called");
    return 0;
}

/* Demangled: glBlitFramebufferNV */
extern "C" __attribute__((visibility("default"))) int glBlitFramebufferNV(void) {
    ALOGD("glBlitFramebufferNV() called");
    return 0;
}

/* Demangled: glTexParameterf */
extern "C" __attribute__((visibility("default"))) int glTexParameterf(void) {
    ALOGD("glTexParameterf() called");
    return 0;
}

/* Demangled: MBXColor::MBXColor(float, float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN8MBXColorC1Efff(void) {
    ALOGD("_ZN8MBXColorC1Efff() called");
    return 0;
}

/* Exported Object: vtable for DynamicFpsImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTV14DynamicFpsImpl = NULL;

/* Demangled: MBXAlphabet::~MBXAlphabet() */
extern "C" __attribute__((visibility("default"))) int _ZN11MBXAlphabetD1Ev(void) {
    ALOGD("_ZN11MBXAlphabetD1Ev() called");
    return 0;
}

/* Demangled: DbgTextureReplaceImpl::ModifyShader(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN21DbgTextureReplaceImpl12ModifyShaderEjRNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN21DbgTextureReplaceImpl12ModifyShaderEjRNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: DbgTextureReplaceImpl::m_shaderDebug */
extern "C" __attribute__((visibility("default"))) void* _ZN21DbgTextureReplaceImpl13m_shaderDebugE = NULL;

/* Demangled: DynamicRESActorRenderpassFBO::RestoreRemappedTexture2D(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN28DynamicRESActorRenderpassFBO24RestoreRemappedTexture2DEj(void) {
    ALOGD("_ZN28DynamicRESActorRenderpassFBO24RestoreRemappedTexture2DEj() called");
    return 0;
}

/* Demangled: FpsCollection::~FpsCollection() */
extern "C" __attribute__((visibility("default"))) int _ZN13FpsCollectionD2Ev(void) {
    ALOGD("_ZN13FpsCollectionD2Ev() called");
    return 0;
}

/* Demangled: SDAlgoFactory::SDAlgoFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN13SDAlgoFactoryC2Ev(void) {
    ALOGD("_ZN13SDAlgoFactoryC2Ev() called");
    return 0;
}

/* Demangled: needUpdateActor() */
extern "C" __attribute__((visibility("default"))) int _Z15needUpdateActorv(void) {
    ALOGD("_Z15needUpdateActorv() called");
    return 0;
}

/* Demangled: SDAlgoListBasedStatistic::~SDAlgoListBasedStatistic() */
extern "C" __attribute__((visibility("default"))) int _ZN24SDAlgoListBasedStatisticD0Ev(void) {
    ALOGD("_ZN24SDAlgoListBasedStatisticD0Ev() called");
    return 0;
}

/* Exported Object: g_attach_index */
extern "C" __attribute__((visibility("default"))) void* g_attach_index = NULL;

/* Demangled: TextureReplaceImpl::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl5ResetEv(void) {
    ALOGD("_ZN18TextureReplaceImpl5ResetEv() called");
    return 0;
}

/* Demangled: glTexParameteri */
extern "C" __attribute__((visibility("default"))) int glTexParameteri(void) {
    ALOGD("glTexParameteri() called");
    return 0;
}

/* Exported Object: typeinfo name for GLContextInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTS13GLContextInfo = NULL;

/* Demangled: SDAlgoUniformSmooth::CalculateUniformSlope(unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN19SDAlgoUniformSmooth21CalculateUniformSlopeEjjj(void) {
    ALOGD("_ZN19SDAlgoUniformSmooth21CalculateUniformSlopeEjjj() called");
    return 0;
}

/* Exported Object: SDAlgoSlowMotion::sResult2FpsMap */
extern "C" __attribute__((visibility("default"))) void* _ZN16SDAlgoSlowMotion14sResult2FpsMapE = NULL;

/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_() called");
    return 0;
}

/* Demangled: SharedObjectManager::SharedObjectManager() */
extern "C" __attribute__((visibility("default"))) int _ZN19SharedObjectManagerC1Ev(void) {
    ALOGD("_ZN19SharedObjectManagerC1Ev() called");
    return 0;
}

/* Exported Object: perfConfigFromService::s_GetGiftAttr_pfn */
extern "C" __attribute__((visibility("default"))) void* _ZN21perfConfigFromService17s_GetGiftAttr_pfnE = NULL;

/* Demangled: glDrawArraysInstancedBaseInstanceEXT */
extern "C" __attribute__((visibility("default"))) int glDrawArraysInstancedBaseInstanceEXT(void) {
    ALOGD("glDrawArraysInstancedBaseInstanceEXT() called");
    return 0;
}

/* Demangled: glMultiDrawArraysIndirectEXT */
extern "C" __attribute__((visibility("default"))) int glMultiDrawArraysIndirectEXT(void) {
    ALOGD("glMultiDrawArraysIndirectEXT() called");
    return 0;
}

/* Demangled: MBXColor::GetColorPtr() const */
extern "C" __attribute__((visibility("default"))) int _ZNK8MBXColor11GetColorPtrEv(void) {
    ALOGD("_ZNK8MBXColor11GetColorPtrEv() called");
    return 0;
}

/* Exported Object: typeinfo for SimpleGLRendererES20 */
extern "C" __attribute__((visibility("default"))) void* _ZTI20SimpleGLRendererES20 = NULL;

/* Exported Object: typeinfo for DbgSDAlgoQAEnable */
extern "C" __attribute__((visibility("default"))) void* _ZTI17DbgSDAlgoQAEnable = NULL;

/* Demangled: DynamicRESActorDefaultFBO::BindFrameBufferBegin(unsigned int, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN25DynamicRESActorDefaultFBO20BindFrameBufferBeginEjRj(void) {
    ALOGD("_ZN25DynamicRESActorDefaultFBO20BindFrameBufferBeginEjRj() called");
    return 0;
}

/* Exported Object: typeinfo name for SDAlgoUniformSmooth */
extern "C" __attribute__((visibility("default"))) void* _ZTS19SDAlgoUniformSmooth = NULL;

/* Demangled: SDAlgoSlowMotion::CalcError(float const*, float const*) */
extern "C" __attribute__((visibility("default"))) int _ZN16SDAlgoSlowMotion9CalcErrorEPKfS1_(void) {
    ALOGD("_ZN16SDAlgoSlowMotion9CalcErrorEPKfS1_() called");
    return 0;
}

/* Demangled: perfConfigFromService::perfConfigFromService() */
extern "C" __attribute__((visibility("default"))) int _ZN21perfConfigFromServiceC2Ev(void) {
    ALOGD("_ZN21perfConfigFromServiceC2Ev() called");
    return 0;
}

/* Demangled: SharedObjectManager::~SharedObjectManager() */
extern "C" __attribute__((visibility("default"))) int _ZN19SharedObjectManagerD2Ev(void) {
    ALOGD("_ZN19SharedObjectManagerD2Ev() called");
    return 0;
}

/* Demangled: DbgTextureReplaceImpl::ShowES2() */
extern "C" __attribute__((visibility("default"))) int _ZN21DbgTextureReplaceImpl7ShowES2Ev(void) {
    ALOGD("_ZN21DbgTextureReplaceImpl7ShowES2Ev() called");
    return 0;
}

/* Exported Object: ARC_GLUE::g_arc_table */
extern "C" __attribute__((visibility("default"))) void* _ZN8ARC_GLUE11g_arc_tableE = NULL;

/* Demangled: DbgSDAlgoFull::DbgSDAlgoFull() */
extern "C" __attribute__((visibility("default"))) int _ZN13DbgSDAlgoFullC1Ev(void) {
    ALOGD("_ZN13DbgSDAlgoFullC1Ev() called");
    return 0;
}

/* Demangled: GLContextInfo::SetFramebufferInfo(unsigned int, unsigned int, unsigned int, unsigned int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN13GLContextInfo18SetFramebufferInfoEjjjjii(void) {
    ALOGD("_ZN13GLContextInfo18SetFramebufferInfoEjjjjii() called");
    return 0;
}

/* Demangled: std::__1::map<unsigned int, framebuffer_info, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, framebuffer_info> > >::operator[](unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__13mapIj16framebuffer_infoNS_4lessIjEENS_9allocatorINS_4pairIKjS1_EEEEEixERS6_(void) {
    ALOGD("_ZNSt3__13mapIj16framebuffer_infoNS_4lessIjEENS_9allocatorINS_4pairIKjS1_EEEEEixERS6_() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::SetTexParameterIivEnd(unsigned int, unsigned int, int const*) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl21SetTexParameterIivEndEjjPKi(void) {
    ALOGD("_ZN18TextureReplaceImpl21SetTexParameterIivEndEjjPKi() called");
    return 0;
}

/* Exported Object: vtable for DbgSDAlgoAEDisable */
extern "C" __attribute__((visibility("default"))) void* _ZTV18DbgSDAlgoAEDisable = NULL;

/* Demangled: SDAlgoSlopeSmooth::SDAlgoSlopeSmooth() */
extern "C" __attribute__((visibility("default"))) int _ZN17SDAlgoSlopeSmoothC1Ev(void) {
    ALOGD("_ZN17SDAlgoSlopeSmoothC1Ev() called");
    return 0;
}

/* Demangled: SDActorFpsController::~SDActorFpsController() */
extern "C" __attribute__((visibility("default"))) int _ZN20SDActorFpsControllerD0Ev(void) {
    ALOGD("_ZN20SDActorFpsControllerD0Ev() called");
    return 0;
}

/* Exported Object: SDAlgoUniformSmooth::sUniformScaleRatio */
extern "C" __attribute__((visibility("default"))) void* _ZN19SDAlgoUniformSmooth18sUniformScaleRatioE = NULL;

/* Demangled: oppoConfigFromFile::FirstStringMatch(unsigned int*, unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN18oppoConfigFromFile16FirstStringMatchEPjjPKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERS8_(void) {
    ALOGD("_ZN18oppoConfigFromFile16FirstStringMatchEPjjPKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERS8_() called");
    return 0;
}

/* Demangled: DbgSDAlgoFull::~DbgSDAlgoFull() */
extern "C" __attribute__((visibility("default"))) int _ZN13DbgSDAlgoFullD2Ev(void) {
    ALOGD("_ZN13DbgSDAlgoFullD2Ev() called");
    return 0;
}

/* Demangled: ProgramCache::isProgramDirty(unsigned int, unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12ProgramCache14isProgramDirtyEjjb(void) {
    ALOGD("_ZN12ProgramCache14isProgramDirtyEjjb() called");
    return 0;
}

/* Demangled: DynamicRESActorRenderpassFBO::~DynamicRESActorRenderpassFBO() */
extern "C" __attribute__((visibility("default"))) int _ZN28DynamicRESActorRenderpassFBOD0Ev(void) {
    ALOGD("_ZN28DynamicRESActorRenderpassFBOD0Ev() called");
    return 0;
}

/* Exported Object: typeinfo for DynamicRESActorRenderpassFBO */
extern "C" __attribute__((visibility("default"))) void* _ZTI28DynamicRESActorRenderpassFBO = NULL;

/* Demangled: SDAlgoListBasedStatistic::DetectScene() */
extern "C" __attribute__((visibility("default"))) int _ZN24SDAlgoListBasedStatistic11DetectSceneEv(void) {
    ALOGD("_ZN24SDAlgoListBasedStatistic11DetectSceneEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to DbgSDAlgoQAEnable::~DbgSDAlgoQAEnable() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N17DbgSDAlgoQAEnableD0Ev(void) {
    ALOGD("_ZThn8_N17DbgSDAlgoQAEnableD0Ev() called");
    return 0;
}

/* Demangled: DynamicRESAlgoSmokeShader::DynamicRESAlgoSmokeShader(GLContextInfo&, DynamicRESAlgoBase*) */
extern "C" __attribute__((visibility("default"))) int _ZN25DynamicRESAlgoSmokeShaderC1ER13GLContextInfoP18DynamicRESAlgoBase(void) {
    ALOGD("_ZN25DynamicRESAlgoSmokeShaderC1ER13GLContextInfoP18DynamicRESAlgoBase() called");
    return 0;
}

/* Demangled: SDAlgoSlopeSmooth::~SDAlgoSlopeSmooth() */
extern "C" __attribute__((visibility("default"))) int _ZN17SDAlgoSlopeSmoothD2Ev(void) {
    ALOGD("_ZN17SDAlgoSlopeSmoothD2Ev() called");
    return 0;
}

/* Demangled: SDAlgoGameFpsControl::DetectScene() */
extern "C" __attribute__((visibility("default"))) int _ZN20SDAlgoGameFpsControl11DetectSceneEv(void) {
    ALOGD("_ZN20SDAlgoGameFpsControl11DetectSceneEv() called");
    return 0;
}

/* Demangled: MBXProgressBar::MBXProgressBar(MBXRect const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14MBXProgressBarC2ERK7MBXRect(void) {
    ALOGD("_ZN14MBXProgressBarC2ERK7MBXRect() called");
    return 0;
}

/* Exported Object: typeinfo for DynamicRESActorNone */
extern "C" __attribute__((visibility("default"))) void* _ZTI19DynamicRESActorNone = NULL;

/* Demangled: glRenderbufferStorageMultisampleIMG */
extern "C" __attribute__((visibility("default"))) int glRenderbufferStorageMultisampleIMG(void) {
    ALOGD("glRenderbufferStorageMultisampleIMG() called");
    return 0;
}

/* Demangled: ARCState::DecipherGValue(double) */
extern "C" __attribute__((visibility("default"))) int _ZN8ARCState14DecipherGValueEd(void) {
    ALOGD("_ZN8ARCState14DecipherGValueEd() called");
    return 0;
}

/* Demangled: MBXPoint::MBXPoint(MBXPoint const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8MBXPointC2ERKS_(void) {
    ALOGD("_ZN8MBXPointC2ERKS_() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::RestoreRemappedTextureUnit() */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl26RestoreRemappedTextureUnitEv(void) {
    ALOGD("_ZN18TextureReplaceImpl26RestoreRemappedTextureUnitEv() called");
    return 0;
}

/* Demangled: DbgDynamicFpsImpl::DbgDynamicFpsImpl(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN17DbgDynamicFpsImplC2Eji(void) {
    ALOGD("_ZN17DbgDynamicFpsImplC2Eji() called");
    return 0;
}

/* Exported Object: ARCState::BLACK_LIST_PATH */
extern "C" __attribute__((visibility("default"))) void* _ZN8ARCState15BLACK_LIST_PATHE = NULL;

/* Demangled: non-virtual thunk to DbgSDAlgoMultiSwitch::~DbgSDAlgoMultiSwitch() */
extern "C" __attribute__((visibility("default"))) int _ZThn4_N20DbgSDAlgoMultiSwitchD1Ev(void) {
    ALOGD("_ZThn4_N20DbgSDAlgoMultiSwitchD1Ev() called");
    return 0;
}

/* Demangled: SharedObjectManager::SetRenderbufferInfo(unsigned int, unsigned int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN19SharedObjectManager19SetRenderbufferInfoEjjiii(void) {
    ALOGD("_ZN19SharedObjectManager19SetRenderbufferInfoEjjiii() called");
    return 0;
}

/* Demangled: ConvertAttachmentToString(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z25ConvertAttachmentToStringj(void) {
    ALOGD("_Z25ConvertAttachmentToStringj() called");
    return 0;
}

/* Demangled: ARCGetContextFromMap() */
extern "C" __attribute__((visibility("default"))) int _Z20ARCGetContextFromMapv(void) {
    ALOGD("_Z20ARCGetContextFromMapv() called");
    return 0;
}

/* Demangled: SDAlgoBase::~SDAlgoBase() */
extern "C" __attribute__((visibility("default"))) int _ZN10SDAlgoBaseD2Ev(void) {
    ALOGD("_ZN10SDAlgoBaseD2Ev() called");
    return 0;
}

/* Demangled: DbgSDAlgoMBoxUtility::UpdateState() */
extern "C" __attribute__((visibility("default"))) int _ZN20DbgSDAlgoMBoxUtility11UpdateStateEv(void) {
    ALOGD("_ZN20DbgSDAlgoMBoxUtility11UpdateStateEv() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Exported Object: TextureReplaceImpl::m_resetThreshold */
extern "C" __attribute__((visibility("default"))) void* _ZN18TextureReplaceImpl16m_resetThresholdE = NULL;

/* Exported Object: typeinfo name for SDActor */
extern "C" __attribute__((visibility("default"))) void* _ZTS7SDActor = NULL;

/* Demangled: glGetProgramBinaryOES */
extern "C" __attribute__((visibility("default"))) int glGetProgramBinaryOES(void) {
    ALOGD("glGetProgramBinaryOES() called");
    return 0;
}

/* Demangled: DynamicRESActorRenderpassFBO::ReadPixelsBegin(int, int, int, int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN28DynamicRESActorRenderpassFBO15ReadPixelsBeginEiiiijj(void) {
    ALOGD("_ZN28DynamicRESActorRenderpassFBO15ReadPixelsBeginEiiiijj() called");
    return 0;
}

/* Exported Object: typeinfo name for SDAlgoGameFpsControl */
extern "C" __attribute__((visibility("default"))) void* _ZTS20SDAlgoGameFpsControl = NULL;

/* Demangled: glDrawElementsIndirect */
extern "C" __attribute__((visibility("default"))) int glDrawElementsIndirect(void) {
    ALOGD("glDrawElementsIndirect() called");
    return 0;
}

/* Demangled: glDrawElementsInstancedBaseInstanceEXT */
extern "C" __attribute__((visibility("default"))) int glDrawElementsInstancedBaseInstanceEXT(void) {
    ALOGD("glDrawElementsInstancedBaseInstanceEXT() called");
    return 0;
}

/* Exported Object: typeinfo for SDActorFpsController */
extern "C" __attribute__((visibility("default"))) void* _ZTI20SDActorFpsController = NULL;

/* Demangled: SDTouchHint::SDTouchHint() */
extern "C" __attribute__((visibility("default"))) int _ZN11SDTouchHintC1Ev(void) {
    ALOGD("_ZN11SDTouchHintC1Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for SDAlgoFusion */
extern "C" __attribute__((visibility("default"))) void* _ZTS12SDAlgoFusion = NULL;

/* Exported Object: vtable for arcConfigFromQTService */
extern "C" __attribute__((visibility("default"))) void* _ZTV22arcConfigFromQTService = NULL;

/* Demangled: ARC_GLUE::threadInit() */
extern "C" __attribute__((visibility("default"))) int _ZN8ARC_GLUE10threadInitEv(void) {
    ALOGD("_ZN8ARC_GLUE10threadInitEv() called");
    return 0;
}

/* Demangled: glDrawElementsInstancedBaseVertexBaseInstanceEXT */
extern "C" __attribute__((visibility("default"))) int glDrawElementsInstancedBaseVertexBaseInstanceEXT(void) {
    ALOGD("glDrawElementsInstancedBaseVertexBaseInstanceEXT() called");
    return 0;
}

/* Demangled: glFramebufferTexture2DMultisampleEXT */
extern "C" __attribute__((visibility("default"))) int glFramebufferTexture2DMultisampleEXT(void) {
    ALOGD("glFramebufferTexture2DMultisampleEXT() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::BypassProgramBinary(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK18TextureReplaceImpl19BypassProgramBinaryEj(void) {
    ALOGD("_ZNK18TextureReplaceImpl19BypassProgramBinaryEj() called");
    return 0;
}

/* Exported Object: SDAlgoSlopeSmooth::sSlopeSlideWindow */
extern "C" __attribute__((visibility("default"))) void* _ZN17SDAlgoSlopeSmooth17sSlopeSlideWindowE = NULL;

/* Demangled: oppoConfigFromService::oppoConfigFromService() */
extern "C" __attribute__((visibility("default"))) int _ZN21oppoConfigFromServiceC1Ev(void) {
    ALOGD("_ZN21oppoConfigFromServiceC1Ev() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::SetTexParameterfEnd(unsigned int, unsigned int, float) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl19SetTexParameterfEndEjjf(void) {
    ALOGD("_ZN18TextureReplaceImpl19SetTexParameterfEndEjjf() called");
    return 0;
}

/* Demangled: DynamicRESActorDefaultFBO::ReadPixelsBegin(int, int, int, int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN25DynamicRESActorDefaultFBO15ReadPixelsBeginEiiiijj(void) {
    ALOGD("_ZN25DynamicRESActorDefaultFBO15ReadPixelsBeginEiiiijj() called");
    return 0;
}

/* Demangled: SDTouchHint::~SDTouchHint() */
extern "C" __attribute__((visibility("default"))) int _ZN11SDTouchHintD2Ev(void) {
    ALOGD("_ZN11SDTouchHintD2Ev() called");
    return 0;
}

/* Demangled: glAttachShader */
extern "C" __attribute__((visibility("default"))) int glAttachShader(void) {
    ALOGD("glAttachShader() called");
    return 0;
}

/* Demangled: glDrawElementsInstancedBaseVertexOES */
extern "C" __attribute__((visibility("default"))) int glDrawElementsInstancedBaseVertexOES(void) {
    ALOGD("glDrawElementsInstancedBaseVertexOES() called");
    return 0;
}

/* Demangled: MBXAlphabet::MBXAlphabet() */
extern "C" __attribute__((visibility("default"))) int _ZN11MBXAlphabetC1Ev(void) {
    ALOGD("_ZN11MBXAlphabetC1Ev() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::DeleteRenderbuffers(int, unsigned int const*) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl19DeleteRenderbuffersEiPKj(void) {
    ALOGD("_ZN18TextureReplaceImpl19DeleteRenderbuffersEiPKj() called");
    return 0;
}

/* Demangled: FpsCollection::FpsCollection() */
extern "C" __attribute__((visibility("default"))) int _ZN13FpsCollectionC2Ev(void) {
    ALOGD("_ZN13FpsCollectionC2Ev() called");
    return 0;
}

/* Demangled: android::Singleton<SDActorFpsLibManager>::hasInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI20SDActorFpsLibManagerE11hasInstanceEv(void) {
    ALOGD("_ZN7android9SingletonI20SDActorFpsLibManagerE11hasInstanceEv() called");
    return 0;
}

/* Exported Object: android::Singleton<SDActorFpsLibManager>::sLock */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9SingletonI20SDActorFpsLibManagerE5sLockE = NULL;

/* Demangled: SDAlgoListBasedStatistic::UpdateFrameData(GLFrameData const&) */
extern "C" __attribute__((visibility("default"))) int _ZN24SDAlgoListBasedStatistic15UpdateFrameDataERK11GLFrameData(void) {
    ALOGD("_ZN24SDAlgoListBasedStatistic15UpdateFrameDataERK11GLFrameData() called");
    return 0;
}

/* Demangled: oppoConfigFromService::~oppoConfigFromService() */
extern "C" __attribute__((visibility("default"))) int _ZN21oppoConfigFromServiceD2Ev(void) {
    ALOGD("_ZN21oppoConfigFromServiceD2Ev() called");
    return 0;
}

/* Demangled: ARCDestroySurface(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z17ARCDestroySurfacej(void) {
    ALOGD("_Z17ARCDestroySurfacej() called");
    return 0;
}

/* Demangled: ARC_GLUE::arcGetInitAddress(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN8ARC_GLUE17arcGetInitAddressEPKc(void) {
    ALOGD("_ZN8ARC_GLUE17arcGetInitAddressEPKc() called");
    return 0;
}

/* Exported Object: DynamicRESAlgoFusion::s_algoSlotIndex */
extern "C" __attribute__((visibility("default"))) void* _ZN20DynamicRESAlgoFusion15s_algoSlotIndexE = NULL;

/* Exported Object: SDAlgoSlopeSmooth::sSceneChangeProtect */
extern "C" __attribute__((visibility("default"))) void* _ZN17SDAlgoSlopeSmooth19sSceneChangeProtectE = NULL;

/* Demangled: MBXAlphabet::~MBXAlphabet() */
extern "C" __attribute__((visibility("default"))) int _ZN11MBXAlphabetD2Ev(void) {
    ALOGD("_ZN11MBXAlphabetD2Ev() called");
    return 0;
}

/* Demangled: DynamicRESAlgoSwitch::DynamicRESAlgoSwitch(GLContextInfo&, DynamicRESAlgoBase*) */
extern "C" __attribute__((visibility("default"))) int _ZN20DynamicRESAlgoSwitchC1ER13GLContextInfoP18DynamicRESAlgoBase(void) {
    ALOGD("_ZN20DynamicRESAlgoSwitchC1ER13GLContextInfoP18DynamicRESAlgoBase() called");
    return 0;
}

/* Demangled: SDAlgoListBasedStatistic::~SDAlgoListBasedStatistic() */
extern "C" __attribute__((visibility("default"))) int _ZN24SDAlgoListBasedStatisticD1Ev(void) {
    ALOGD("_ZN24SDAlgoListBasedStatisticD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for arcBuiltinConfig */
extern "C" __attribute__((visibility("default"))) void* _ZTS16arcBuiltinConfig = NULL;

/* Demangled: SDAlgoSlowMotion::UpdateDetectState() */
extern "C" __attribute__((visibility("default"))) int _ZN16SDAlgoSlowMotion17UpdateDetectStateEv(void) {
    ALOGD("_ZN16SDAlgoSlowMotion17UpdateDetectStateEv() called");
    return 0;
}

/* Exported Object: SDTouchHint::sTouchBoostDuration */
extern "C" __attribute__((visibility("default"))) void* _ZN11SDTouchHint19sTouchBoostDurationE = NULL;

/* Demangled: DbgTextureReplaceImpl::~DbgTextureReplaceImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN21DbgTextureReplaceImplD0Ev(void) {
    ALOGD("_ZN21DbgTextureReplaceImplD0Ev() called");
    return 0;
}

/* Exported Object: typeinfo for DbgTextureReplaceMBox */
extern "C" __attribute__((visibility("default"))) void* _ZTI21DbgTextureReplaceMBox = NULL;

/* Exported Object: vtable for DynamicRESActorNone */
extern "C" __attribute__((visibility("default"))) void* _ZTV19DynamicRESActorNone = NULL;

/* Demangled: SharedObjectManager::SharedObjectManager() */
extern "C" __attribute__((visibility("default"))) int _ZN19SharedObjectManagerC2Ev(void) {
    ALOGD("_ZN19SharedObjectManagerC2Ev() called");
    return 0;
}

/* Demangled: SDAlgoSlowMotion::AnalyzeMotionData() */
extern "C" __attribute__((visibility("default"))) int _ZN16SDAlgoSlowMotion17AnalyzeMotionDataEv(void) {
    ALOGD("_ZN16SDAlgoSlowMotion17AnalyzeMotionDataEv() called");
    return 0;
}

/* Demangled: gli_init() */
extern "C" __attribute__((visibility("default"))) int _Z8gli_initv(void) {
    ALOGD("_Z8gli_initv() called");
    return 0;
}

/* Demangled: GLContextInfo::SetMipmap() */
extern "C" __attribute__((visibility("default"))) int _ZN13GLContextInfo9SetMipmapEv(void) {
    ALOGD("_ZN13GLContextInfo9SetMipmapEv() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::RestoreRemappedRenderbuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl27RestoreRemappedRenderbufferEv(void) {
    ALOGD("_ZN18TextureReplaceImpl27RestoreRemappedRenderbufferEv() called");
    return 0;
}

/* Demangled: DynamicRESAlgoDVFSPolicy::DynamicRESAlgoDVFSPolicy(GLContextInfo&, DynamicRESAlgoBase*) */
extern "C" __attribute__((visibility("default"))) int _ZN24DynamicRESAlgoDVFSPolicyC1ER13GLContextInfoP18DynamicRESAlgoBase(void) {
    ALOGD("_ZN24DynamicRESAlgoDVFSPolicyC1ER13GLContextInfoP18DynamicRESAlgoBase() called");
    return 0;
}

/* Demangled: MBXRect::MBXRect(MBXRect const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7MBXRectC2ERKS_(void) {
    ALOGD("_ZN7MBXRectC2ERKS_() called");
    return 0;
}

/* Exported Object: typeinfo name for DynamicRESActorRenderpassFBO */
extern "C" __attribute__((visibility("default"))) void* _ZTS28DynamicRESActorRenderpassFBO = NULL;

/* Demangled: MBXStateBlock::Present(SimpleRenderer*) */
extern "C" __attribute__((visibility("default"))) int _ZN13MBXStateBlock7PresentEP14SimpleRenderer(void) {
    ALOGD("_ZN13MBXStateBlock7PresentEP14SimpleRenderer() called");
    return 0;
}

/* Demangled: DbgSDAlgoFull::DbgSDAlgoFull() */
extern "C" __attribute__((visibility("default"))) int _ZN13DbgSDAlgoFullC2Ev(void) {
    ALOGD("_ZN13DbgSDAlgoFullC2Ev() called");
    return 0;
}

/* Exported Object: vtable for DbgDynamicResImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTV17DbgDynamicResImpl = NULL;

/* Demangled: FramebufferSelection::SwapBuffers() */
extern "C" __attribute__((visibility("default"))) int _ZN20FramebufferSelection11SwapBuffersEv(void) {
    ALOGD("_ZN20FramebufferSelection11SwapBuffersEv() called");
    return 0;
}

/* Exported Object: vtable for DynamicRESAlgoSwitch */
extern "C" __attribute__((visibility("default"))) void* _ZTV20DynamicRESAlgoSwitch = NULL;

/* Exported Object: typeinfo for SDAlgoSlopeSmooth */
extern "C" __attribute__((visibility("default"))) void* _ZTI17SDAlgoSlopeSmooth = NULL;

/* Demangled: ARC_GLUE::arcGetProcAddress(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN8ARC_GLUE17arcGetProcAddressEPKci(void) {
    ALOGD("_ZN8ARC_GLUE17arcGetProcAddressEPKci() called");
    return 0;
}

/* Demangled: glGetTexLevelParameterfv */
extern "C" __attribute__((visibility("default"))) int glGetTexLevelParameterfv(void) {
    ALOGD("glGetTexLevelParameterfv() called");
    return 0;
}

/* Exported Object: vtable for MBXStateBlock */
extern "C" __attribute__((visibility("default"))) void* _ZTV13MBXStateBlock = NULL;

/* Demangled: DbgTextureReplaceImpl::RestoreFramebufferContent(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN21DbgTextureReplaceImpl25RestoreFramebufferContentEjj(void) {
    ALOGD("_ZN21DbgTextureReplaceImpl25RestoreFramebufferContentEjj() called");
    return 0;
}

/* Demangled: SDActorFpsController::~SDActorFpsController() */
extern "C" __attribute__((visibility("default"))) int _ZN20SDActorFpsControllerD1Ev(void) {
    ALOGD("_ZN20SDActorFpsControllerD1Ev() called");
    return 0;
}

/* Demangled: SDAlgoSlopeSmooth::SDAlgoSlopeSmooth() */
extern "C" __attribute__((visibility("default"))) int _ZN17SDAlgoSlopeSmoothC2Ev(void) {
    ALOGD("_ZN17SDAlgoSlopeSmoothC2Ev() called");
    return 0;
}

/* Demangled: glFramebufferRenderbuffer */
extern "C" __attribute__((visibility("default"))) int glFramebufferRenderbuffer(void) {
    ALOGD("glFramebufferRenderbuffer() called");
    return 0;
}

/* Exported Object: typeinfo name for ARCHookListener */
extern "C" __attribute__((visibility("default"))) void* _ZTS15ARCHookListener = NULL;

/* Exported Object: typeinfo name for std::__1::__shared_ptr_emplace<DynamicRESAlgoSmokeShader::SharedResource, std::__1::allocator<DynamicRESAlgoSmokeShader::SharedResource> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt3__120__shared_ptr_emplaceIN25DynamicRESAlgoSmokeShader14SharedResourceENS_9allocatorIS2_EEEE = NULL;

/* Demangled: DynamicRESActorRenderpassFBO::~DynamicRESActorRenderpassFBO() */
extern "C" __attribute__((visibility("default"))) int _ZN28DynamicRESActorRenderpassFBOD1Ev(void) {
    ALOGD("_ZN28DynamicRESActorRenderpassFBOD1Ev() called");
    return 0;
}

/* Demangled: MBXContainer::~MBXContainer() */
extern "C" __attribute__((visibility("default"))) int _ZN12MBXContainerD1Ev(void) {
    ALOGD("_ZN12MBXContainerD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo for SDAlgoDisable */
extern "C" __attribute__((visibility("default"))) void* _ZTI13SDAlgoDisable = NULL;

/* Demangled: non-virtual thunk to DbgSDAlgoQAEnable::~DbgSDAlgoQAEnable() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N17DbgSDAlgoQAEnableD1Ev(void) {
    ALOGD("_ZThn8_N17DbgSDAlgoQAEnableD1Ev() called");
    return 0;
}

/* Demangled: DbgDynamicFpsImpl::DbgDynamicFpsImpl(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN17DbgDynamicFpsImplC1Eji(void) {
    ALOGD("_ZN17DbgDynamicFpsImplC1Eji() called");
    return 0;
}

/* Exported Object: SDAlgoUniformSmooth::sUniformHistoryLength */
extern "C" __attribute__((visibility("default"))) void* _ZN19SDAlgoUniformSmooth21sUniformHistoryLengthE = NULL;

/* Demangled: glDispatchCompute */
extern "C" __attribute__((visibility("default"))) int glDispatchCompute(void) {
    ALOGD("glDispatchCompute() called");
    return 0;
}

/* Demangled: MBXDigits::DrawNDigitalChars(SimpleRenderer*, int, float const*, float const*, float const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9MBXDigits17DrawNDigitalCharsEP14SimpleRendereriPKfS3_S3_(void) {
    ALOGD("_ZN9MBXDigits17DrawNDigitalCharsEP14SimpleRendereriPKfS3_S3_() called");
    return 0;
}

/* Demangled: SDAlgoUniformSmooth::GetEncipherSValue() const */
extern "C" __attribute__((visibility("default"))) int _ZNK19SDAlgoUniformSmooth17GetEncipherSValueEv(void) {
    ALOGD("_ZNK19SDAlgoUniformSmooth17GetEncipherSValueEv() called");
    return 0;
}

/* Exported Object: typeinfo for DbgSDAlgoQATxDisable */
extern "C" __attribute__((visibility("default"))) void* _ZTI20DbgSDAlgoQATxDisable = NULL;

/* Demangled: SDAlgoBase::SDAlgoBase() */
extern "C" __attribute__((visibility("default"))) int _ZN10SDAlgoBaseC2Ev(void) {
    ALOGD("_ZN10SDAlgoBaseC2Ev() called");
    return 0;
}

/* Demangled: glBindTexture */
extern "C" __attribute__((visibility("default"))) int glBindTexture(void) {
    ALOGD("glBindTexture() called");
    return 0;
}

/* Exported Object: typeinfo name for DbgSDAlgoMultiSwitch */
extern "C" __attribute__((visibility("default"))) void* _ZTS20DbgSDAlgoMultiSwitch = NULL;

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, framebuffer_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, framebuffer_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, framebuffer_info> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, framebuffer_info>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIj16framebuffer_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIj16framebuffer_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::~TextureReplaceImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImplD0Ev(void) {
    ALOGD("_ZN18TextureReplaceImplD0Ev() called");
    return 0;
}

/* Demangled: DynamicRESActorRenderpassFBO::SetTexImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN28DynamicRESActorRenderpassFBO13SetTexImage2DEjiiiiijjPKv(void) {
    ALOGD("_ZN28DynamicRESActorRenderpassFBO13SetTexImage2DEjiiiiijjPKv() called");
    return 0;
}

/* Demangled: DynamicRESActorRenderpassFBO::OverwriteRemappedTexture2D(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN28DynamicRESActorRenderpassFBO26OverwriteRemappedTexture2DEj(void) {
    ALOGD("_ZN28DynamicRESActorRenderpassFBO26OverwriteRemappedTexture2DEj() called");
    return 0;
}

/* Demangled: glRenderbufferStorageMultisampleANGLE */
extern "C" __attribute__((visibility("default"))) int glRenderbufferStorageMultisampleANGLE(void) {
    ALOGD("glRenderbufferStorageMultisampleANGLE() called");
    return 0;
}

/* Demangled: DbgSDAlgoAEDisable::GraphSetLayoutState(SDAppType) */
extern "C" __attribute__((visibility("default"))) int _ZN18DbgSDAlgoAEDisable19GraphSetLayoutStateE9SDAppType(void) {
    ALOGD("_ZN18DbgSDAlgoAEDisable19GraphSetLayoutStateE9SDAppType() called");
    return 0;
}

/* Demangled: FramebufferSelection::FramebufferSelection(GLContextInfo&) */
extern "C" __attribute__((visibility("default"))) int _ZN20FramebufferSelectionC2ER13GLContextInfo(void) {
    ALOGD("_ZN20FramebufferSelectionC2ER13GLContextInfo() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::ReplaceTextureUnit() */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl18ReplaceTextureUnitEv(void) {
    ALOGD("_ZN18TextureReplaceImpl18ReplaceTextureUnitEv() called");
    return 0;
}

/* Demangled: oppoConfigFromService::DebugPrintParams() const */
extern "C" __attribute__((visibility("default"))) int _ZNK21oppoConfigFromService16DebugPrintParamsEv(void) {
    ALOGD("_ZNK21oppoConfigFromService16DebugPrintParamsEv() called");
    return 0;
}

/* Demangled: DynamicResImpl::DynamicResImpl(int, DynamicResImpl*) */
extern "C" __attribute__((visibility("default"))) int _ZN14DynamicResImplC1EiPS_(void) {
    ALOGD("_ZN14DynamicResImplC1EiPS_() called");
    return 0;
}

/* Demangled: DynamicRESAlgoDVFSPolicy::~DynamicRESAlgoDVFSPolicy() */
extern "C" __attribute__((visibility("default"))) int _ZN24DynamicRESAlgoDVFSPolicyD0Ev(void) {
    ALOGD("_ZN24DynamicRESAlgoDVFSPolicyD0Ev() called");
    return 0;
}

/* Demangled: DbgTextureReplaceMBox::NotifyTouchEvent(TouchEventHistory const*) */
extern "C" __attribute__((visibility("default"))) int _ZN21DbgTextureReplaceMBox16NotifyTouchEventEPK17TouchEventHistory(void) {
    ALOGD("_ZN21DbgTextureReplaceMBox16NotifyTouchEventEPK17TouchEventHistory() called");
    return 0;
}

/* Demangled: SDAlgoSlowMotion::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN16SDAlgoSlowMotion5ResetEv(void) {
    ALOGD("_ZN16SDAlgoSlowMotion5ResetEv() called");
    return 0;
}

/* Demangled: SDTouchHint::SDTouchHint() */
extern "C" __attribute__((visibility("default"))) int _ZN11SDTouchHintC2Ev(void) {
    ALOGD("_ZN11SDTouchHintC2Ev() called");
    return 0;
}

/* Exported Object: typeinfo for oppoConfigFromService */
extern "C" __attribute__((visibility("default"))) void* _ZTI21oppoConfigFromService = NULL;

/* Demangled: glBlitFramebufferANGLE */
extern "C" __attribute__((visibility("default"))) int glBlitFramebufferANGLE(void) {
    ALOGD("glBlitFramebufferANGLE() called");
    return 0;
}

/* Demangled: glDrawBuffers */
extern "C" __attribute__((visibility("default"))) int glDrawBuffers(void) {
    ALOGD("glDrawBuffers() called");
    return 0;
}

/* Demangled: DynamicRESActorRenderpassFBO::RestoreRemappedRenderbuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN28DynamicRESActorRenderpassFBO27RestoreRemappedRenderbufferEv(void) {
    ALOGD("_ZN28DynamicRESActorRenderpassFBO27RestoreRemappedRenderbufferEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE4findIS7_EENS_21__tree_const_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEERKT_(void) {
    ALOGD("_ZNKSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE4findIS7_EENS_21__tree_const_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEERKT_() called");
    return 0;
}

/* Demangled: oppoConfigFromService::oppoConfigFromService() */
extern "C" __attribute__((visibility("default"))) int _ZN21oppoConfigFromServiceC2Ev(void) {
    ALOGD("_ZN21oppoConfigFromServiceC2Ev() called");
    return 0;
}

/* Demangled: MBXAlphabet::Present(SimpleRenderer*) */
extern "C" __attribute__((visibility("default"))) int _ZN11MBXAlphabet7PresentEP14SimpleRenderer(void) {
    ALOGD("_ZN11MBXAlphabet7PresentEP14SimpleRenderer() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::TextureReplaceImpl(GLContextInfo&, TextureReplaceImpl*) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImplC1ER13GLContextInfoPS_(void) {
    ALOGD("_ZN18TextureReplaceImplC1ER13GLContextInfoPS_() called");
    return 0;
}

/* Demangled: ARCSetContext(unsigned int, void**) */
extern "C" __attribute__((visibility("default"))) int _Z13ARCSetContextjPPv(void) {
    ALOGD("_Z13ARCSetContextjPPv() called");
    return 0;
}

/* Exported Object: vtable for GLContext */
extern "C" __attribute__((visibility("default"))) void* _ZTV9GLContext = NULL;

/* Demangled: MBXAlphabet::MBXAlphabet() */
extern "C" __attribute__((visibility("default"))) int _ZN11MBXAlphabetC2Ev(void) {
    ALOGD("_ZN11MBXAlphabetC2Ev() called");
    return 0;
}

/* Demangled: TextureReplaceImpl::RestoreRemappedTexture2D(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN18TextureReplaceImpl24RestoreRemappedTexture2DEj(void) {
    ALOGD("_ZN18TextureReplaceImpl24RestoreRemappedTexture2DEj() called");
    return 0;
}

/* Demangled: SDAlgoListBasedStatistic::SDAlgoListBasedStatistic() */
extern "C" __attribute__((visibility("default"))) int _ZN24SDAlgoListBasedStatisticC1Ev(void) {
    ALOGD("_ZN24SDAlgoListBasedStatisticC1Ev() called");
    return 0;
}

/* Demangled: MBXColor::MBXColor(MBXColor const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8MBXColorC2ERKS_(void) {
    ALOGD("_ZN8MBXColorC2ERKS_() called");
    return 0;
}

/* Demangled: MBXRect::GetGeometrySize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7MBXRect15GetGeometrySizeEv(void) {
    ALOGD("_ZNK7MBXRect15GetGeometrySizeEv() called");
    return 0;
}

/* Exported Object: typeinfo name for IDbgSDAlgorithm */
extern "C" __attribute__((visibility("default"))) void* _ZTS15IDbgSDAlgorithm = NULL;

/* Exported Object: typeinfo for std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt3__113basic_fstreamIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: vtable for perfConfigFromService */
extern "C" __attribute__((visibility("default"))) void* _ZTV21perfConfigFromService = NULL;

/* Demangled: glDeleteProgram */
extern "C" __attribute__((visibility("default"))) int glDeleteProgram(void) {
    ALOGD("glDeleteProgram() called");
    return 0;
}
